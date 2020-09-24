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



// WARNING: Removing unreachable block (ram,0x00402085)
// WARNING: Removing unreachable block (ram,0x00401a85)
// WARNING: Removing unreachable block (ram,0x00401337)
// WARNING: Removing unreachable block (ram,0x00401313)
// WARNING: Removing unreachable block (ram,0x0040131a)
// WARNING: Removing unreachable block (ram,0x00401430)
// WARNING: Removing unreachable block (ram,0x00401b93)
// WARNING: Removing unreachable block (ram,0x004020cc)

undefined  [16] log_size_10_var_000(void)

{
  long lVar1;
  undefined4 uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  uint7 uVar6;
  uint3 uVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  byte bVar19;
  sbyte sVar20;
  byte bVar24;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ushort uVar25;
  short sVar26;
  int iVar27;
  char cVar28;
  ushort uVar29;
  char cVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  byte bVar34;
  byte bVar35;
  ushort uVar36;
  ushort uVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  ulong uVar41;
  long lVar42;
  ulong uVar43;
  char cVar44;
  ushort uVar45;
  uint uVar46;
  long lVar47;
  uint uVar48;
  ulong uVar49;
  uint uVar50;
  byte bVar51;
  byte bVar52;
  uint uVar53;
  bool bVar54;
  bool in_PF;
  
  uVar15 = 0x1f;
  while (0xf5dc2ce2U >> uVar15 == 0) {
    uVar15 = uVar15 - 1;
  }
  uVar46 = 0xd3d7f3b1;
  if (in_PF) {
    uVar46 = 0x9192c2a1;
  }
  uVar46 = (uVar46 | 0x1415e3c2) & 0xffff0000;
  lVar47 = 0x3f;
  uVar2 = 0x3f;
  if (uVar46 != 0) {
    while (uVar2 = (undefined4)lVar47, uVar46 >> lVar47 == 0) {
      lVar47 = lVar47 + -1;
    }
  }
  uVar33 = (CONCAT44(uVar2,0x2af99899) & 0x3fffffffffffffff | 0xc0000000) / 0xeaf99899;
  sVar26 = (short)((ulong)uVar15 + 0x65e80f575f60000e);
  bVar24 = ((char)uVar33 >> 0x11) - 1;
  uVar9 = CONCAT11(bVar24,0xf);
  uVar10 = sVar26 + 0xe3c2;
  uVar46 = (uint)uVar10 | 0x14150000;
  uVar18 = 0xb2fb4822;
  if (uVar10 == 0) {
    uVar18 = uVar33 & 0xffff0000 | 0xffff;
  }
  uVar15 = ((uint)((ulong)uVar15 + 0x65e80f575f60000e) & 0xffff0000 | 0xe3c2) - uVar46;
  bVar24 = bVar24 ^ 0x87;
  uVar18 = ((ulong)uVar9 & 0xff) + uVar18;
  cVar28 = (char)uVar15;
  uVar13 = (uint)CONCAT62(0xc3e92b4c61e1,uVar9) & 0xffffff00 ^ 0x7b1e8700;
  uVar14 = 0;
  if (uVar13 != 0) {
    while ((uVar13 >> uVar14 & 1) == 0) {
      uVar14 = uVar14 + 1;
    }
  }
  uVar46 = (int)uVar46 >> 1;
  uVar33 = (uVar33 & 0xffff0000) * (ulong)uVar14;
  uVar14 = 0;
  while ((0x4582fff3U >> uVar14 & 1) == 0) {
    uVar14 = uVar14 + 1;
  }
  uVar17 = (ulong)((uVar15 & 0xffffff00 | (uint)(byte)(cVar28 << 1 | cVar28 < '\0')) + 0x74434160 +
                   (uint)((int)(uVar33 >> 0x20) != 0) | 0xc0000000);
  uVar22 = (ulong)(((uint)(ushort)(uVar33 >> 0x30) & 0x3fff) << 0x10) << 0x20 | uVar33 & 0xffffff00;
  uVar49 = uVar22 / uVar17;
  uVar33 = 0x3f;
  if (uVar18 != 0) {
    while (uVar18 >> uVar33 == 0) {
      uVar33 = uVar33 - 1;
    }
  }
  bVar34 = -(char)uVar18;
  uVar33 = uVar33 & ~(1 << (uVar33 & 0x3f));
  uVar9 = (short)(char)uVar49 * -0xd;
  uVar10 = (short)uVar18 << 0xd;
  uVar32 = (uint)uVar33 & 0xffffff00 | (uint)(byte)((char)uVar33 + 0x99);
  uVar50 = 0 >> (bVar34 & 0x1f);
  uVar15 = (uint)(ushort)((uVar9 & 0xff | (ushort)(byte)((char)((ulong)uVar9 >> 8) + 1) << 8) >> 6 |
                         (short)uVar46 << 10) * (uint)uVar10;
  uVar16 = (uint)uVar49 & 0xffff0000 | uVar15 & 0xffff;
  uVar13 = (uint)(byte)((byte)((ulong)(long)sVar26 >> 2) >> 6) << 0x1f;
  uVar49 = (ulong)((uVar13 | uVar14 >> 1) >> 3) | 0xc000000000000000;
  uVar33 = (ulong)(uVar46 >> (bVar34 & 0x3f)) | (ulong)uVar46 << 0x40 - (bVar34 & 0x3f);
  bVar54 = uVar49 != 0;
  uVar49 = -uVar49;
  uVar18 = uVar49 >> 1 & 0x7fff;
  uVar21 = uVar49 & 0xffffffffffff0000 | uVar18;
  uVar49 = 0x3bc02f90e201d620;
  bVar19 = bVar34 ^ (bVar54 == (bool)bVar34) * bVar34;
  bVar8 = bVar54 ^ (bVar54 == (bool)bVar34) * (bVar54 & bVar19);
  if (bVar34 <= bVar54) {
    uVar49 = 0x56fc7610;
  }
  if ((char)bVar34 < bVar54) {
    uVar33 = uVar33 & 0xffffffffffff0000 | (ulong)bVar8;
  }
  iVar27 = (int)CONCAT42(((uint)(uVar22 % uVar17) | 0x100000) >> 0x11,(short)(uVar15 >> 0x10)) + -1;
  if (-1 < iVar27) {
    uVar33 = uVar21;
  }
  uVar46 = iVar27 * 2;
  bVar51 = (byte)((ulong)uVar46 >> 8);
  uVar31 = 0x56fc7618;
  bVar34 = (char)bVar24 >> 0x17 & 0x1f;
  uVar50 = (uint)(CONCAT14((uVar33 & 1) != 0,uVar50) >> bVar34) | uVar50 << 0x21 - bVar34;
  uVar13 = (uVar13 | uVar14 >> 1 & 0xffffefff) & ~(1 << bVar8);
  sVar26 = (short)uVar50;
  uVar9 = sVar26 << 1 | (ushort)(sVar26 < 0);
  uVar50 = uVar50 & 0xffff0000;
  uVar33 = (uVar33 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar33 >> 1)) << 1;
  bVar34 = (byte)((ulong)((uint)uVar10 | 1) >> 8);
  uVar15 = (int)(short)((short)uVar13 << 1) * (int)(short)uVar9;
  if (in_PF) {
    uVar31 = (uint)CONCAT11(~(byte)((ulong)(uVar46 & 0xffffff00) >> 8),(byte)uVar46 - bVar51) |
             0x56fc007b;
  }
  bVar8 = bVar8 - 1;
  uVar17 = (ulong)((uVar13 & 0xffff0000 | uVar15 & 0xffff) >> (bVar34 & 0x3f)) |
           (ulong)bVar34 << 0x40 - (bVar34 & 0x3f);
  uVar17 = (long)(int)((uint)uVar17 & 0xffff0000 | (uint)(ushort)((short)uVar17 << 1 | 1)) *
           (long)(int)((uint)((uint3)(uVar46 >> 8) & 0xffff00) << 8 |
                      (uint)(ushort)((int)uVar15 >> 0x11));
  uVar18 = (ulong)((((uint)uVar21 & 0xffff0000 | (uint)(ushort)uVar18) ^ 0x5f) + 0xcc5ec293) << 0xf;
  uVar10 = (ushort)uVar17 << 8 | (ushort)uVar17 >> 8;
  uVar15 = (uint)uVar17 & 0xffff0000;
  uVar43 = (ulong)(uVar16 ^ (uint)(uVar16 == uVar32) *
                            (uVar16 & (uVar32 ^ (uint)(uVar16 == uVar32) * (uVar32 ^ 8)))) << 0x1a |
           (ulong)bVar8 << 1;
  uVar21 = (ulong)bVar34 ^ 0x1aaf098;
  uVar36 = (ushort)(uVar10 == 0x37ec) * (uVar10 ^ 0x37ec) ^ 0x37ec;
  uVar11 = uVar10 ^ (ushort)(uVar10 == 0x37ec) * (uVar10 & uVar36);
  uVar22 = (uVar49 & 0xffffffffffff0000 |
           (ulong)(ushort)((ushort)uVar49 >> ((bVar19 - bVar24) - ((byte)uVar46 < bVar51) & 0x1f)))
           + (ulong)uVar31;
  if ((short)uVar10 < 0x37ec) {
    uVar22 = uVar18;
  }
  uVar46 = uVar15 | (ushort)(uVar11 & 0xff |
                            (ushort)(byte)((byte)((ulong)uVar11 >> 8) ^ (byte)uVar11) << 8);
  bVar24 = (byte)uVar21;
  uVar49 = uVar21 & 0xffffffffffff0000 | (ulong)CONCAT11(0x10,bVar24);
  lVar47 = 0x3f;
  if (uVar17 >> 0x20 != 0) {
    while ((uVar17 >> 0x20) >> lVar47 == 0) {
      lVar47 = lVar47 + -1;
    }
  }
  uVar17 = (ulong)(uVar31 * 0x8000000 + (int)(((ulong)uVar14 << 0x34) >> 0x1a) * 8 + 0xe02f6c94 >> 5
                  | 0xa0000000);
  lVar47 = uVar17 + uVar49;
  uVar10 = ((ushort)(((ulong)uVar36 | 0x73640000) << 1) | (ushort)(uVar10 < 0x37ec)) << 1 |
           (ushort)CARRY8(uVar17,uVar49);
  uVar13 = (uint)(((ulong)uVar36 & 0x7fffffffffff8000 | 0x73640000) << 1);
  uVar17 = uVar22 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar22 + (char)uVar10);
  uVar14 = uVar46 & (uVar13 | uVar10);
  uVar33 = uVar33 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar33 << 1) | 1;
  if (-1 < (int)uVar14) {
    uVar33 = (ulong)(uVar50 | (uint)uVar9);
  }
  uVar16 = uVar31 * 0x8000000 >> (bVar24 & 0x3f);
  uVar29 = (ushort)uVar16;
  uVar11 = (short)uVar14 + uVar29;
  uVar14 = uVar14 & 0xffff0000;
  uVar36 = (ushort)((int)uVar15 >> 0x1f);
  uVar25 = uVar36 & ~(1 << (uVar29 & 0xf));
  uVar22 = uVar33 & 0xffffffffffffff00 |
           (ulong)(byte)((char)uVar33 - ((uVar36 >> (uVar29 & 0xf) & 1) != 0));
  auVar4 = (CONCAT88((ulong)(uint)((int)uVar46 >> 0x1f) & 0xffffffffffff0000 |
                     (ulong)(ushort)(uVar25 & 0xff |
                                    (ushort)(byte)((char)((ulong)uVar25 >> 8) + (char)uVar25) << 8),
                     (long)(int)(uVar14 | uVar11)) & (undefined  [16])0xffffffffffffffff) /
           ZEXT816((ulong)uVar16 | 0xc000000000000000);
  lVar42 = (long)(int)((uint)uVar49 & 0xffffff00 | (uint)(byte)(bVar24 - 8)) * 0x7f23554d;
  iVar27 = (int)((ulong)lVar42 >> 0x20);
  uVar11 = (uVar11 - (short)uVar18) - (ushort)(iVar27 != 0 && iVar27 != -1);
  uVar46 = (uint)uVar11;
  bVar24 = (char)lVar42 << 1;
  iVar27 = -(uVar13 | (ushort)(uVar10 + (short)uVar17 + 1));
  uVar15 = ((uint)lVar47 & 0xffff0000 | (uint)(ushort)((short)lVar47 - 0x17a)) >> 1;
  auVar4 = ZEXT816(CONCAT62(SUB166(auVar4 >> 0x10,0),
                            (short)SUB161(auVar4,0) * (short)(char)((ushort)bVar8 << 1))) *
           ZEXT416(uVar15 | SUB164(auVar4,0) << 0x1f);
  bVar34 = bVar24 & 0x3f | 1;
  uVar33 = 0xab963cf3 << bVar34 | (ulong)(0xab963cf3 >> 0x40 - bVar34);
  bVar34 = (byte)uVar11;
  if (-1 < (char)((byte)uVar15 & bVar34)) {
    iVar27 = SUB164(auVar4 >> 0x40,0);
  }
  cVar28 = (char)uVar33;
  uVar33 = uVar33 & 0xffffffffffffff00;
  uVar10 = CONCAT11((char)((ulong)lVar42 >> 8) - (char)(uVar33 >> 8),bVar24) | 1;
  iVar40 = (int)uVar17;
  bVar19 = (byte)uVar10;
  bVar24 = (bVar19 & 0x1f) % 9;
  cVar30 = (char)~(uint)uVar18;
  bVar24 = cVar30 << bVar24 | (byte)(CONCAT11(iVar40 < 0,cVar30) >> 9 - bVar24);
  bVar19 = bVar19 & 7;
  uVar15 = uVar50 | (uint)uVar9 & 0xffffff00 |
           (uint)(byte)((byte)uVar9 << bVar19 | (byte)uVar9 >> 8 - bVar19);
  uVar32 = (uint)(byte)(bVar34 + (char)SUB168(auVar4 >> 0x41,0));
  uVar13 = uVar14 | uVar46 & 0xffffff00 | uVar32;
  if (!in_PF) {
    uVar15 = uVar50 | uVar46 & 0xff00 | uVar32;
  }
  uVar17 = (ulong)(iVar40 << 1 | (uint)(iVar40 < 0)) | 0xc000000000000000;
  auVar3 = CONCAT88((ulong)(uVar14 | uVar46) & 0xff | (ulong)SUB167(auVar4 >> 0x49,0) << 8,
                    CONCAT62(SUB166(auVar4 >> 0x10,0),CONCAT11(cVar28,SUB161(auVar4,0)))) &
           (undefined  [16])0xffffffffffffffff;
  auVar5 = auVar3 / ZEXT816(uVar17);
  iVar40 = 0;
  if (uVar13 != 0) {
    while ((uVar13 >> iVar40 & 1) == 0) {
      iVar40 = iVar40 + 1;
    }
  }
  uVar49 = CONCAT62(SUB166(auVar5 >> 0x10,0),SUB162(auVar5,0) >> 0x17);
  uVar49 = uVar49 ^ (ulong)(uVar49 == 0x3fffffffffffffff) *
                    (uVar49 & ((ulong)(uVar49 == 0x3fffffffffffffff) * (uVar22 ^ 0x3fffffffffffffff)
                              ^ 0x3fffffffffffffff));
  uVar13 = ((uint)lVar42 & 0xffff0000 | (uint)uVar10) * 0x452fbb0e;
  uVar21 = (ulong)uVar13;
  uVar46 = (int)(short)uVar49 * (int)(short)uVar13;
  sVar26 = (short)(uVar46 >> 0x10);
  uVar49 = uVar49 & 0xffffffffffff0000 | (ulong)(ushort)uVar46;
  uVar41 = (ulong)(uint)((int)uVar22 * 0xe4b3f0f);
  uVar14 = ((uint)uVar33 | (uint)(byte)(cVar28 + SUB161(auVar4 >> 8,0))) + 0x477ee182;
  bVar34 = (byte)uVar13 & 0x3f;
  uVar14 = uVar14 >> bVar34 | uVar14 << 0x40 - bVar34;
  bVar54 = (bVar24 & 1) != 0;
  uVar18 = (uVar18 & 0xffffffff00000000 | (ulong)~(uint)uVar18 & 0xffffffffffffff00 | (ulong)bVar24)
           >> 1;
  uVar33 = uVar17 << 1 | 1;
  if (!bVar54) {
    uVar33 = uVar41;
  }
  iVar40 = (uVar16 & 0xffff0000 |
           (uint)(ushort)(uVar29 + (short)uVar22 + (ushort)(sVar26 != 0 && sVar26 != -1))) << 1;
  lVar47 = 0x3f;
  uVar16 = 0x3f;
  if (uVar43 != 0) {
    while (uVar16 = (uint)lVar47, uVar43 >> lVar47 == 0) {
      lVar47 = lVar47 + -1;
    }
  }
  uVar46 = (uint)bVar8 * 2 +
           ((uint)CONCAT62(SUB166(auVar3 % ZEXT816(uVar17) >> 0x10,0),sVar26) >> 1 |
           (uint)((uVar46 & 0x10000) != 0) << 0x1f);
  uVar17 = (ulong)uVar46;
  uVar13 = ((uVar14 + 0x8b19b5f7) - (uint)((uVar18 | (ulong)bVar54 << 0x3f) < 0xee10c6f) &
           ~(uint)(1 << (uVar41 & 0x3f))) << ((byte)uVar13 & 0x1f);
  uVar14 = uVar14 & 0xff;
  if (-1 < (short)uVar13) {
    uVar14 = uVar16;
  }
  uVar22 = uVar21 ^ (ulong)(uVar49 == uVar21) * (uVar21 ^ uVar49);
  uVar49 = uVar49 ^ (ulong)(uVar49 == uVar21) * (uVar49 & uVar22);
  uVar10 = (ushort)-uVar41;
  uVar9 = (ushort)uVar46;
  uVar32 = (uint)-uVar41;
  uVar46 = (uint)(ushort)(uVar10 - uVar9);
  bVar34 = (byte)uVar22;
  bVar24 = (bVar34 & 0x1f) % 0x11;
  sVar26 = (short)uVar49;
  lVar47 = (uVar49 & 0xffffffffffff0000 |
           (ulong)(ushort)(sVar26 << bVar24 |
                          (ushort)(CONCAT12(uVar10 < uVar9,sVar26) >> 0x11 - bVar24))) << 1;
  uVar41 = uVar33 & 0xffffffffffffff00 | (ulong)(byte)-(char)uVar33;
  bVar34 = (byte)uVar14 >> (bVar34 & 0x1f);
  uVar14 = uVar14 & 0xffffff00;
  uVar22 = ((ulong)(uint3)((uint)iVar40 >> 8) & 0xffffffffffff00) << 8;
  uVar49 = (ulong)(ushort)(short)(char)((ulong)uVar13 >> 8);
  uVar43 = uVar22 | uVar49;
  bVar24 = bVar34 + 0x5e;
  uVar21 = (ulong)uVar15 + 1 & 0xffffffffffffff00 | (ulong)(byte)((byte)iVar40 | bVar54);
  if (0xa1 < bVar34 || bVar24 == 0) {
    uVar21 = uVar43;
  }
  if ((char)bVar24 < '\0') {
    uVar17 = uVar21 & 0xffffffff;
  }
  uVar50 = CONCAT31((int3)(-iVar27 >> 0x14),(byte)(-iVar27 >> 0xc) >> 1) + 0x95a4f31a;
  uVar15 = ((uint)lVar47 & 0xffff0000 | (uint)(ushort)((ushort)(byte)lVar47 * (ushort)(byte)uVar13))
           ^ (uint)uVar41 ^ 0x625d4fa8;
  uVar41 = uVar41 ^ (uVar33 >> 0x12 & 1) << 0x12;
  uVar10 = (ushort)uVar15;
  uVar15 = uVar15 & 0xffff0000;
  uVar9 = (ushort)uVar50;
  uVar50 = uVar50 & 0xffff0000;
  uVar17 = uVar17 + 0x20edb4d2;
  if (!in_PF) {
    uVar41 = uVar41 & 0xffffffff;
  }
  uVar11 = uVar10 & 0xff;
  uVar9 = (uVar9 >> 1 | uVar9 << 0xf) + 1;
  uVar31 = (uVar50 | (uint)uVar9) * 3;
  uVar38 = uVar31 >> 1 | 0x3fa931af;
  uVar46 = (uVar32 & 0x7dff0000 | uVar46) << 1 | (uint)((int)(uVar32 & 0xffff0000 | uVar46) < 0);
  uVar33 = uVar43 << 1 ^ 0x8898;
  sVar26 = (short)((((ulong)((uVar13 & ~(uint)(1 << ((ulong)(byte)((char)uVar16 * -2) & 0x3f)) &
                             0x7fff8000) << 1) | 0x1fefffffdb374000) << 3) >> 0x20);
  if ((uVar31 | 0xff018c9) != 0) {
    sVar26 = 0;
  }
  bVar34 = (byte)uVar9 | 0xf3;
  auVar4 = (ZEXT416(uVar15 | (ushort)(uVar11 | (ushort)(byte)((byte)((ulong)(uVar15 | (ushort)(
                                                  uVar11 | (ushort)(byte)((byte)((ulong)(uVar15 | 
                                                  uVar10 & 0x7fff) >> 8) >> 1) << 8)) >> 8) ^
                                                  (byte)uVar9) << 8)) * ZEXT816(uVar17) &
           (undefined  [16])0xffffffffffffffff) * ZEXT816(uVar33);
  uVar22 = (uVar22 | uVar49 & 0x7fffffffffff8000) << 1;
  if (SBORROW4(uVar46,1)) {
    uVar38 = SUB164(auVar4,0);
  }
  uVar15 = (uint)uVar17;
  uVar13 = (uint)(uVar41 & 0xffffffffffff0000);
  uVar50 = uVar50 | (uint)uVar9 & 0xffffff00;
  uVar23 = (ulong)(uVar50 | bVar34) | 0xc0;
  uVar10 = SUB162(auVar4,0) & 0x3fff;
  bVar19 = (byte)uVar23;
  uVar21 = SUB168(auVar4,0) & 0xffffffffffff0000;
  uVar49 = (ulong)(ushort)(uVar10 / (ushort)bVar19 & 0xff | uVar10 % (ushort)bVar19 << 8);
  uVar43 = uVar21 | uVar49;
  uVar31 = uVar38 >> (bVar34 & 0x3f) | 0x29986000;
  lVar47 = uVar43 << 1;
  uVar9 = (ushort)((long)(ulong)CONCAT31((uint3)(uVar14 >> 0xe),(char)((uVar14 | bVar24) >> 6) << 1)
                  >> 1) >> (bVar19 & 0x1f);
  uVar7 = (uint3)(uVar50 >> 9);
  bVar24 = (char)(uVar23 >> 1) - (char)((ulong)(uint)((int)uVar43 >> 0x1f) >> 8);
  uVar43 = (ulong)CONCAT31(uVar7,bVar24) | 0x8000000000000000;
  bVar51 = (byte)uVar7;
  uVar49 = (uVar21 | uVar49 & 0x7fffffffffff8000) << 1 |
           (ulong)(ushort)((short)lVar47 >> (bVar24 & 0x1f));
  lVar42 = (ulong)(((uVar15 & 0xa54156e) >> 0x18 | (uVar15 & 0x540000) >> 8 | (uVar15 & 0x1500) << 8
                   | (uVar15 & 0xa54156e) << 0x18) + 0xfa8a7419) << 1;
  uVar10 = (ushort)bVar51 << 0x10 - (bVar24 & 0xf);
  uVar33 = uVar43 ^ (ulong)(uVar49 == uVar43) *
                    (uVar43 ^ (long)(uVar22 | (ulong)(ushort)((short)uVar33 >> 0x15) &
                                              0xffffffffffffff00 |
                                    (ulong)(byte)(((char)(uVar33 >> 8) >> 0xd) +
                                                 ((byte)(sVar26 << 1) | sVar26 < 0))) >> 0x10);
  uVar16 = (uint)uVar49 ^ (uint)(uVar49 == uVar43) * ((uint)uVar49 & (uint)uVar33);
  uVar36 = (short)uVar17 * 0x52c1 ^ (ushort)(uVar22 >> 0x10);
  bVar52 = (byte)uVar36;
  bVar19 = (byte)uVar33;
  uVar11 = (short)uVar31 >> (bVar19 & 0x1f);
  uVar15 = (uint)(uVar22 >> 0x10);
  uVar32 = uVar15 ^ (uint)(uVar16 == uVar15) *
                    (uVar15 ^ (uVar13 | (ushort)(((ushort)uVar41 & 0xff00 |
                                                 (ushort)(byte)((char)uVar41 - 0x2a)) - sVar26)));
  uVar16 = uVar16 ^ (uint)(uVar16 == uVar15) * (uVar16 & uVar32);
  bVar34 = (byte)uVar16;
  bVar35 = (char)uVar11 + -0x29 + ((uVar36 & 1) != 0);
  uVar15 = ((uint)lVar42 & 0xffff0000 | (uint)(ushort)((ushort)lVar42 >> 1 | 0x8000)) << 1;
  uVar10 = uVar10 & 0xff00 | (ushort)(bVar51 >> (bVar24 & 0xf)) | uVar10 & 0xff;
  if (!in_PF) {
    uVar10 = ((ushort)uVar16 & 0xff00 | (ushort)(byte)(bVar34 - bVar19)) * uVar36;
  }
  if (((uint)CONCAT62((int6)(uint6)(ushort)(uVar14 >> 0x16) >> 1,uVar9) & 0xffffff00 |
       (uint)(byte)((char)uVar9 - 1) & 0xfffffffe | (uint)(bVar34 < bVar19)) != 0) {
    bVar52 = (byte)uVar15;
  }
  uVar21 = ((ulong)(uVar46 - 1) & 0x7fffffff) << 1;
  uVar9 = (uVar11 & 0xff00 | (ushort)bVar35) >> 1;
  uVar11 = (ushort)((bVar35 & 1) != 0) << 0xf;
  auVar3 = ZEXT116(0) << 0x40 | ZEXT816((ulong)uVar32 + 1);
  uVar49 = SUB168(auVar3 << (bVar19 & 0x3f),0) | SUB168(auVar3 >> 0x41 - (bVar19 & 0x3f),0);
  uVar43 = (ulong)(((uint)lVar47 & 0xffff) * -0x28182ff0 >> 0x15);
  lVar47 = (ulong)uVar15 - 0x266af564;
  uVar18 = (ulong)((((((int)uVar18 + -0xee10c6f) * 2 | 0xa9U) - uVar46) -
                   (uint)(SUB168(auVar4 >> 0x40,0) != 0)) * -0x2c6f1493) << 8;
  uVar14 = ((uint)(uVar10 & 0xff00) << (bVar19 & 0x3f) ^ 1) & 0xcdbcd966;
  uVar46 = uVar31 & 0xffff0000 | (uint)(uVar9 | uVar11) | 0x385d8c17;
  uVar16 = (uint)CONCAT62(0x75eaed96618c,uVar9 & 0xcebb | uVar11) | 0x3cc10970;
  uVar15 = uVar46 & 0xffff0000;
  uVar46 = uVar46 >> 1 & 0x7fff;
  uVar9 = ((ushort)uVar33 & 0xff) + 0x8b89;
  uVar17 = uVar33 & 0xffffffffffff0000 | (ulong)uVar9;
  uVar22 = (ulong)uVar14 ^ ((ulong)(uVar14 >> 0x1b) & 1) << 0x1b;
  uVar33 = uVar22 | 0xc000;
  bVar24 = (byte)uVar9 & 0x3f;
  uVar17 = uVar17 >> bVar24 | uVar17 << 0x40 - bVar24;
  uVar11 = (ushort)uVar33;
  uVar36 = (ushort)uVar21 & 0xff00 | (ushort)bVar52;
  uVar9 = 0;
  uVar25 = (ushort)uVar18;
  if (uVar25 != 0) {
    while ((uVar25 >> uVar9 & 1) == 0) {
      uVar9 = uVar9 + 1;
    }
  }
  lVar42 = (uVar17 >> 8 & 0xff) << 1;
  uVar33 = uVar33 >> 3;
  bVar34 = (byte)(uVar33 >> 8);
  cVar30 = (char)uVar49;
  uVar25 = (uVar10 & 0xff00 | (ushort)(byte)((byte)uVar10 ^ bVar52)) * -0x3c26 | 0xc000;
  uVar10 = (ushort)uVar17 & 0xff00 | (ushort)(byte)((char)uVar17 - bVar34) | uVar25;
  cVar28 = bVar34 + (char)((ulong)uVar10 >> 8);
  uVar10 = uVar10 & 0xff;
  bVar24 = (byte)uVar33;
  uVar14 = (uint)((uVar22 & 0xfffffffffff80000) >> 3);
  if (-1 < cVar28) {
    uVar18 = (ulong)(uVar15 | uVar46);
  }
  uVar29 = (short)uVar46 + 0x750a;
  bVar19 = (byte)((ulong)(ushort)(uVar10 | (ushort)bVar34 << 8) >> 8);
  uVar12 = ((ushort)lVar42 & 0xff00 | (ushort)(byte)(((byte)lVar42 | uVar36 < uVar11) - cVar30)) /
           (ushort)(byte)((ulong)uVar25 >> 8) & 0xff |
           ((ushort)(byte)((ulong)CONCAT11(cVar28,bVar24) >> 8) & 0x3f) << 8;
  uVar25 = (ushort)(bVar19 | 0xc0);
  bVar34 = (byte)uVar10 & 0x3f;
  uVar12 = uVar12 / uVar25 & 0xff | (uVar12 % uVar25 & 0x3f) << 8;
  uVar25 = (ushort)(byte)((byte)uVar10 | 0xc0);
  uVar10 = uVar10 | (ushort)(byte)((bVar19 | 0xc0) >> 1 | (0xe9 < bVar24) << 7) << 8 | 0xc0;
  uVar32 = ((uint)lVar47 & 0xffff0000 | (uint)(ushort)((short)lVar47 << 5)) - 1;
  uVar46 = (uint)((int)(short)(uVar12 / uVar25 & 0xff | uVar12 % uVar25 << 8) *
                 (int)(short)(((ushort)uVar49 & 0xff00 | (ushort)(byte)(cVar30 - 0x2c)) ^ 0xf528))
           >> 0x10;
  uVar22 = (((uVar43 & 0xff00) << 0x28 | uVar43 << 0x38) >> bVar34 |
           (uVar41 & 0xffffffffffff0000 | (ulong)uVar9) << 0x40 - bVar34) ^ (ulong)uVar32;
  uVar33 = 0;
  if (uVar22 != 0) {
    while ((uVar22 >> uVar33 & 1) == 0) {
      uVar33 = uVar33 + 1;
    }
  }
  lVar47 = (uVar21 & 0xffffffffffff0000 | (ulong)(ushort)(uVar36 - uVar11)) + uVar18 * 2;
  uVar10 = uVar10 >> ((byte)uVar10 & 0x1f);
  uVar17 = uVar17 & 0xffffffffffff0000 | (ulong)uVar10;
  bVar24 = (byte)uVar10 & 0x3f;
  bVar51 = (char)uVar32 << bVar24 | (byte)(uVar32 >> 0x40 - bVar24);
  uVar48 = -((uint)uVar18 & 0xffff);
  uVar49 = lVar47 - 0xfae813b;
  bVar19 = ((byte)-uVar9 | 0x85) - bVar51;
  uVar31 = (uint)uVar17 & 0x694b9f4b;
  uVar32 = ((int)uVar22 + 0xc + (int)lVar47 * 2) * 2;
  uVar38 = (uint)uVar18 * 0x3057a02c;
  uVar50 = (uVar13 | (uint)(ushort)-uVar9 & 0xffffff00 | (uint)bVar19) >> 1;
  bVar24 = (byte)((ulong)uVar31 >> 8);
  bVar34 = (byte)uVar49;
  uVar18 = uVar49 & 0xffffffffffffff00 | (ulong)(byte)(bVar34 - bVar24);
  uVar22 = (ulong)(CONCAT18(bVar34 < bVar24,uVar18) >> 0x3f) | uVar18 << 2;
  uVar18 = 0x3f;
  if ((uVar17 & 0x694b9f4b) != 0) {
    while (uVar31 >> uVar18 == 0) {
      uVar18 = uVar18 - 1;
    }
  }
  uVar17 = (ulong)(uVar31 + 0x33edab5c + (uint)((byte)uVar50 < (byte)uVar22));
  bVar54 = (int)(uVar15 | uVar29) < 0;
  bVar24 = (byte)uVar18 + 0x15;
  uVar49 = uVar18 & 0xffffffffffffff00 | (ulong)(byte)(bVar24 + bVar54);
  sVar26 = (short)uVar50;
  uVar11 = (CONCAT11(~(byte)(uVar33 >> 8),(char)uVar33) - sVar26) -
           (ushort)(0xea < (byte)uVar18 || CARRY1(bVar24,bVar54));
  uVar15 = (int)(char)(uVar17 >> 8) << 0x1c;
  uVar50 = ((uVar48 & 0xffffff00) << 1) >> 4;
  uVar21 = CONCAT71((undefined7)((char)bVar51 >> 7),
                    (byte)uVar29 | (byte)(uVar33 >> 0x3d) | (byte)(uVar33 << 3));
  uVar36 = SEXT12((char)uVar11);
  uVar12 = (ushort)uVar49;
  uVar10 = uVar12 >> 0xb & 1;
  uVar18 = (ulong)(CONCAT18(uVar10 != 0,uVar17) >> 6) & 0xffffffffffffff0f;
  sVar20 = (sbyte)uVar18;
  uVar29 = (ushort)uVar22 >> sVar20 | uVar36 << 0x10 - sVar20;
  uVar9 = CONCAT11((char)(uVar18 >> 8) - (char)uVar29,sVar20) >> 3;
  bVar24 = (byte)uVar9;
  lVar42 = -(ulong)((uVar13 & 0xfffe0000) >> 1 | (uint)((bVar19 & 1) != 0) << 0x1f |
                   (uint)(ushort)(sVar26 >> 0x15));
  uVar13 = uVar16 & 0xffff0000 | (uint)(ushort)((short)uVar16 >> 3);
  uVar39 = uVar13 << (bVar24 & 0x1f) | uVar13 >> 0x20 - (bVar24 & 0x1f);
  uVar13 = (uVar48 & 0x7fff8000) << 1;
  uVar25 = (uVar9 & 0xff | (ushort)(byte)((ulong)(uint)(int)(char)bVar24 >> 8) << 8) ^ 0xd300;
  uVar9 = uVar36 >> 1 | 0x8000;
  uVar18 = uVar33 & 0xffffffffffff0000 | (ulong)uVar9;
  uVar16 = uVar32 & 0xffffff00 | uVar39 & 0xff;
  uVar31 = -(uint)((uVar36 & 1) != 0);
  uVar48 = (uVar15 | uVar50) + 0x11;
  uVar36 = (short)uVar38 + 0xedd1;
  lVar47 = 0x3f;
  if (uVar21 != 0) {
    while (uVar21 >> lVar47 == 0) {
      lVar47 = lVar47 + -1;
    }
  }
  uVar45 = uVar29 & 0xff | 0xc5b1;
  uVar37 = SEXT12((char)((ulong)uVar48 >> 8));
  uVar15 = uVar15 | uVar50 & 0xffff0000;
  bVar34 = (bVar24 & 0x1f) % 0x11;
  uVar29 = uVar25 & 0xff;
  uVar50 = (uint)(ushort)(((ushort)((uVar39 & 0xffff) << bVar34) |
                          (ushort)((uVar39 & 0xffff) >> 0x11 - bVar34)) * -0x4812);
  bVar54 = (byte)((ulong)(ushort)(uVar29 | (ushort)(byte)((int)(uVar14 >> 0x18 |
                                                                (uVar14 & 0xff0000) >> 8 |
                                                                (uVar46 & 0xff00) << 8 |
                                                               uVar46 << 0x18) >> 0xd) << 8) >> 8) <
           0x21;
  bVar34 = (byte)uVar29;
  lVar1 = uVar21 - uVar18;
  uVar14 = (uint)CONCAT71((int7)((ulong)lVar47 >> 8),0x68) >> (bVar34 & 0x1f);
  uVar17 = CONCAT62(0x839bf96cdd7f,uVar37 & 0x9b41);
  uVar29 = (ushort)(uVar14 << 1);
  bVar19 = (byte)((ulong)lVar42 >> 0x18);
  uVar22 = (ulong)uVar13 |
           (ulong)(ushort)(uVar45 + ((short)((ushort)uVar31 | 2) >> (bVar34 & 0x1f)));
  iVar27 = (int)((ulong)((long)(int)((uVar39 & 0xffff0000 | uVar50) >> 4 | uVar50 << 0x1c) *
                        -0x728287e0) >> 0x20);
  uVar46 = (uint)(ushort)((ushort)uVar48 | 1 << ((ushort)(byte)((ulong)uVar25 >> 8) & 0xf));
  if (iVar27 == 0 || iVar27 == -1) {
    uVar46 = (uint)uVar37;
  }
  uVar43 = CONCAT71((int7)(lVar42 >> 0x20),(char)(bVar19 >> 4 | bVar19 << 4) >> 1);
  uVar50 = uVar31 & 0xffff0000 | (uint)(uVar45 >> 1);
  iVar27 = (uVar48 & 0xffff0000 | uVar46) - uVar50;
  uVar41 = uVar22 >> 6;
  auVar4 = ZEXT1216(CONCAT48((((int)lVar1 - (uint)bVar54) * 2 | uVar32 >> 0x1f) +
                             ((int)((uint)uVar49 & 0xffff0000 |
                                   (uint)(ushort)(uVar12 ^ uVar10 << 0xb)) >> (bVar24 & 0x1f) &
                              0xffffff00U |
                             (uint)(SBORROW8(uVar21,uVar18) != SBORROW8(lVar1,(ulong)bVar54))) +
                             -0x166a2c33 + (int)uVar41 * 4,
                             (long)(uVar33 & 0xffffffffffff0000 |
                                   (ulong)(ushort)(uVar9 * (short)uVar16)) >> 0x26)) &
           (undefined  [16])0xffffffffffffffff;
  auVar3 = auVar4 / ZEXT816((ulong)uVar16 | 0xc000000000000000);
  uVar50 = uVar50 - 1;
  uVar46 = (int)uVar17 + uVar16;
  uVar32 = SUB164(auVar3,0);
  uVar48 = uVar50 ^ (uint)(uVar32 == uVar50) * (uVar50 ^ (uint)uVar43);
  uVar31 = uVar32 ^ (uint)(uVar32 == uVar50) * (uVar32 & uVar48);
  uVar18 = CONCAT44(SUB164(auVar3 >> 0x20,0),uVar31) & 0xffffffffffff0000 |
           (ulong)(ushort)(short)(char)uVar31;
  if (uVar50 < uVar32) {
    uVar17 = uVar43;
  }
  uVar43 = uVar43 & (ulong)uVar48;
  auVar3 = SEXT816((long)uVar18) * SEXT816(0x3fffffffffffffff);
  uVar25 = (short)uVar17 + 1;
  uVar17 = uVar17 & 0xffff0000;
  uVar33 = (ulong)(uVar50 + SUB164(auVar4 % ZEXT816((ulong)uVar16 | 0xc000000000000000),0)) |
           uVar17 | uVar25;
  bVar54 = iVar27 != 0;
  cVar30 = (char)uVar48;
  cVar44 = (char)uVar41;
  cVar28 = cVar44 - cVar30;
  uVar6 = (uint7)(uVar22 >> 8);
  uVar25 = uVar25 << ((byte)uVar33 & 0x1f);
  uVar22 = (uVar38 & 0xffff0000 |
           (uint)(ushort)(uVar36 & 0xff00 |
                         (ushort)(byte)((char)((byte)uVar36 >> (bVar34 & 0x1f)) >> 0x14))) - uVar43;
  uVar9 = SUB162(auVar3 >> 0x40,0);
  sVar26 = (short)uVar46;
  uVar10 = uVar9 + sVar26;
  uVar16 = SUB164(auVar3 >> 0x40,0) & 0xffff0000 | (uint)uVar10;
  if (uVar10 == 0 || SCARRY2(uVar9,sVar26) != (short)uVar10 < 0) {
    uVar16 = (uint)uVar17 | (uint)uVar25;
  }
  uVar49 = (ulong)uVar48 & 0xffff;
  uVar33 = uVar33 ^ CONCAT22((ushort)(uVar15 >> 0x11),
                             (ushort)((uVar15 | (uint)uVar37) >> 1) ^ 1 << (uVar37 & 1));
  uVar25 = uVar25 - 0xa2a;
  sVar26 = 0;
  if (uVar9 != 0) {
    while ((uVar9 >> sVar26 & 1) == 0) {
      sVar26 = sVar26 + 1;
    }
  }
  bVar24 = (byte)uVar33 & 7;
  bVar34 = (byte)(uVar49 >> 8);
  uVar32 = (-(int)uVar18 & 0xffff0000U |
           (uint)CONCAT11(bVar34 << bVar24 | bVar34 >> 8 - bVar24,(char)uVar49)) - 1;
  lVar47 = (ulong)((iVar27 - 1U | (uint)uVar43) ^ ((uint)uVar17 | (uint)uVar25)) << 1;
  bVar24 = (byte)lVar47 | 1;
  uVar50 = uVar48 + uVar32 * 4;
  uVar17 = uVar17 | (ulong)uVar25 & 0xffffffffffffff00;
  uVar49 = uVar17 | (byte)((byte)uVar25 >> 1 | (byte)uVar25 << 7);
  bVar34 = (byte)(uVar6 >> 0x16);
  uVar10 = (ushort)uVar22;
  uVar36 = uVar10 & 0xff00 | (ushort)(byte)((byte)uVar22 + bVar34);
  uVar9 = 0x136e - (ushort)CARRY1((byte)uVar22,bVar34);
  uVar18 = (ulong)uVar9 | 0xc000000076470000;
  uVar15 = (uint)uVar33 & 0xffff0000 | (uint)(ushort)((ushort)uVar33 >> ((byte)uVar33 & 0x1f));
  if (uVar9 == 0) {
    uVar15 = (uint)uVar49;
  }
  uVar12 = (ushort)uVar16 & 0xff00 | (ushort)((byte)uVar16 & bVar24) | 1 << ((ushort)uVar15 & 0xf);
  bVar34 = (byte)uVar32;
  bVar35 = bVar24 ^ (bVar34 == bVar24) * (bVar24 ^ (byte)((ulong)lVar47 >> 8));
  uVar9 = uVar10 & 0xff ^ uVar10 & 1;
  uVar31 = uVar48 & 0xffffff00 | (uint)(byte)-cVar30;
  lVar42 = (long)(ulong)(uVar50 & 0xffff0000 |
                        (uint)(ushort)(((short)uVar50 - (ushort)uVar32) - (ushort)((long)uVar18 < 0)
                                      )) >> 0x16;
  uVar50 = -(int)(uVar18 << 1) | uVar31;
  bVar51 = (byte)uVar12 | (byte)uVar15;
  uVar18 = (ulong)CONCAT22((ushort)(uVar13 >> 0x16),
                           (short)CONCAT71(uVar6 >> 6,
                                           (bool)cVar28 != bVar54 &&
                                           (SBORROW1(cVar44,cVar30) != SBORROW1(cVar28,bVar54)) ==
                                           (char)(cVar28 - bVar54) < '\0') * 0x7e90) + 0x1c233bd5;
  uVar15 = uVar15 & 0xffff0000 | (uint)(ushort)((ushort)uVar15 + 0x2b52);
  uVar13 = (int)uVar15 >> 1;
  bVar19 = (byte)uVar13;
  bVar24 = ((bVar34 ^ (bVar34 == bVar24) * (bVar34 & bVar35)) - bVar19) - 1;
  uVar25 = (ushort)uVar32 & 0xff00 | (ushort)bVar24;
  uVar10 = 0;
  if (uVar25 != 0) {
    while ((uVar25 >> uVar10 & 1) == 0) {
      uVar10 = uVar10 + 1;
    }
  }
  uVar14 = (uint)(ushort)((uVar29 & 0xff00 | uVar29 & 0x23 | (ushort)((int)uVar14 < 0)) - 1 | 0xc000
                         );
  uVar38 = uVar32 & 0xff00 | (uint)bVar24 | (uint)(ushort)(uVar12 & 0x3f00 | (ushort)bVar51) << 0x10
  ;
  uVar39 = uVar38 % uVar14;
  uVar14 = (uVar32 & 0xffff0000 | uVar38 / uVar14 & 0xffff) >> 1;
  uVar25 = (short)uVar49 << 1;
  uVar38 = (uint)uVar17 & 0xffff0000;
  uVar53 = uVar38 | uVar25;
  uVar33 = (ulong)((uVar32 & 0xfffe0000) >> 1 | 0x80000000 |
                  (uint)CONCAT11((char)((ulong)(uVar14 | 0x80000000) >> 8) -
                                 (char)((ulong)(ushort)uVar39 >> 8),(char)uVar14));
  if ((uVar11 & 0x400) != 0) {
    uVar33 = uVar18;
  }
  bVar54 = (ushort)uVar33 == uVar36;
  uVar36 = uVar36 ^ (ushort)bVar54 * (uVar36 ^ uVar25);
  uVar17 = uVar22 & 0xffffffffffff0000 | (ulong)uVar36;
  uVar29 = (ushort)lVar42;
  uVar11 = uVar29 + 0xb58c;
  uVar14 = ((uint)lVar47 & 0xffffff00 | (uint)(byte)-bVar35) - (uVar16 & 0xffff0000 | uVar39);
  if (0x4a73 < uVar29 || uVar11 == 0) {
    uVar14 = (uVar46 & 0xffff0000 | (uint)uVar10) & 0xad7b4595;
  }
  uVar46 = 0;
  if (uVar53 != 0) {
    while ((uVar53 >> uVar46 & 1) == 0) {
      uVar46 = uVar46 + 1;
    }
  }
  uVar16 = uVar14 + 0xaaf9060e;
  uVar32 = (uint)(ushort)((short)uVar31 + 0x1ad1);
  if ((SCARRY4(uVar14,-0x5506f9f2) != SCARRY4(uVar16,0)) != (int)uVar16 < 0) {
    uVar32 = uVar39;
  }
  auVar4 = ZEXT816(uVar33 & 0xffffffffffff0000 |
                   (ulong)(ushort)((short)(char)((byte)uVar33 ^
                                                bVar54 * ((byte)uVar33 & (byte)uVar36)) *
                                  (short)(char)lVar42)) * ZEXT416(uVar13);
  bVar24 = bVar19 - (char)((ulong)uVar16 >> 8);
  uVar13 = SUB164(auVar4 >> 0x40,0);
  uVar31 = uVar13 | 1 << ((uint)bVar24 & 0x1f);
  uVar22 = (ulong)CONCAT31((int3)((int)uVar15 >> 9),bVar24) - 1;
  uVar33 = (ulong)(CONCAT18((uVar13 >> ((uint)bVar24 & 0x1f) & 1) != 0,uVar17) >> 0xd);
  lVar47 = 0x3f;
  if (uVar22 != 0) {
    while (uVar22 >> lVar47 == 0) {
      lVar47 = lVar47 + -1;
    }
  }
  bVar54 = SUB161(auVar4,0) <= SUB161(auVar4 >> 8,0);
  bVar34 = (byte)uVar22 + 0xa6;
  uVar49 = ((ulong)((uint)uVar18 >> (bVar19 & 0x1f)) << (bVar24 & 0x3f) |
           uVar17 >> 0x40 - (bVar24 & 0x3f)) +
           ((ulong)((uVar38 | uVar25 & (ushort)uVar14) >> 1 | (uint)(0x5506f9f1 < uVar14) << 0x1f) ^
           0xe2) + (ulong)(0x59 < (byte)uVar22);
  cVar30 = (char)uVar33;
  uVar10 = (short)uVar31 - (uVar9 * -0x5a8d >> 1 | uVar9 * -0x8000);
  uVar15 = (uint)uVar10 & 0xff00;
  uVar46 = (uVar46 & 0x3357506a) >> 1;
  uVar9 = CONCAT11((char)(uVar22 >> 8) + bVar34,bVar34);
  uVar21 = (ulong)uVar46 ^
           (ulong)(uVar46 == 1) * (ulong)(uVar46 ^ (uVar16 & 0xffff0000 | (uint)bVar54));
  uVar17 = (ulong)(uVar46 == 1) * (uVar21 & 1) ^ 1;
  uVar33 = uVar33 & (uVar31 & 0xffff0000 |
                    (uint)(ushort)((ushort)((uVar15 | (byte)uVar10 & bVar54) << 9) |
                                  (ushort)(uVar15 >> 8)));
  uVar14 = ((uVar50 & 0xffffff00 | (uint)(-1 < (char)bVar51)) ^ (uVar50 >> 0x18 & 1) << 0x18) >>
           (bVar34 & 0x1f);
  uVar36 = (short)cVar30 | (ushort)uVar33;
  uVar18 = (ulong)(0x32f2cdc9 < (uVar18 & 0xff)) << 0x20 |
           -(ulong)(uVar48 & 0xffff0000 | uVar32) & 0xffffffff;
  uVar46 = (uint)(uVar18 >> (bVar34 & 0x1f)) | (uint)(uVar18 << 0x21 - (bVar34 & 0x1f));
  uVar33 = (ulong)((int)uVar33 + uVar46);
  bVar24 = (byte)uVar46;
  uVar15 = uVar14 & 0xffff0000 |
           (uint)(ushort)((short)((ushort)uVar14 & 0xff00 | (ushort)(byte)~(byte)uVar14) >> 0x19);
  uVar18 = uVar49 & 0xffffffffffff1769;
  uVar22 = uVar33 ^ (ulong)(uVar17 == uVar33) *
                    (uVar33 ^ (uVar22 & 0xffffffffffff0000 | (ulong)uVar9));
  auVar4 = ZEXT816(uVar17 ^ (ulong)(uVar17 == uVar33) * (uVar17 & uVar22)) * ZEXT816(uVar18);
  cVar28 = SUB161(auVar4,0);
  uVar10 = (ushort)uVar46 | (ushort)bVar24;
  if ((short)uVar10 < 0) {
    cVar28 = (char)uVar21;
  }
  uVar17 = CONCAT62((undefined6)(cVar30 >> 7),uVar36) | 0x7d32597c;
  lVar47 = SUB168(SEXT816((long)(ulong)(uVar46 & 0xffff0000 | (uint)uVar10)) * SEXT416(-0x3cabea17)
                  >> 0x40,0);
  uVar32 = (uint)uVar11 + 0x63fb37db + (int)uVar18 + (uint)(lVar47 != 0 && lVar47 != -1);
  uVar10 = SEXT12(cVar28);
  uVar29 = (ushort)uVar32;
  uVar12 = (ushort)uVar17 & 0xfffe | uVar29 >> 0xf;
  uVar25 = uVar10 & 0xff | (ushort)(byte)((char)((ulong)uVar10 >> 8) + bVar34) << 8;
  uVar13 = (uint)CONCAT71((uint7)(uVar21 >> 9),
                          (((uVar36 & 1) != 0) != (short)uVar12 < 0) != (short)uVar12 < 0);
  uVar33 = (SUB168(auVar4 >> 0x40,0) << (bVar34 & 0x3f) | (ulong)(uVar11 >> 0x40 - (bVar34 & 0x3f)))
           - (ulong)uVar10;
  if (-1 < (int)(uVar13 & uVar15)) {
    uVar33 = (ulong)uVar25;
  }
  uVar13 = uVar13 << 1;
  uVar50 = (int)(uVar15 << 1) >> 0x18;
  uVar21 = (ulong)((uVar13 & 0xfe720000 |
                   (uint)(ushort)(((ushort)uVar13 & 0xc4db | (ushort)((uVar14 & 0xffff0000) >> 0x1f)
                                  ) << 1)) >> 1);
  uVar46 = uVar46 & 0xff;
  uVar15 = uVar46 + (uint)uVar9 * 2;
  if (0xdba2116f < uVar46) {
    uVar50 = 1;
  }
  lVar47 = (uVar49 & 0xffffffffffff1700 | (ulong)(byte)((char)uVar18 - (char)(uVar10 & 0xff))) -
           0x3ae2a301;
  bVar51 = bVar24 >> (bVar24 & 7) | bVar24 << 8 - (bVar24 & 7);
  uVar10 = (short)uVar15 + 1;
  uVar15 = uVar15 & 0xffff0000;
  uVar14 = (uVar15 | uVar10) + 0xe75bd0df + (uint)uVar9 * 2;
  uVar29 = uVar29 | (ushort)uVar50;
  uVar18 = (ulong)bVar51 & 0xffffffffffffff0f;
  sVar20 = (sbyte)uVar18;
  uVar9 = uVar25 >> sVar20 | uVar29 << 0x10 - sVar20;
  uVar15 = uVar15 | (ushort)((uVar10 * 2 | (ushort)((uVar50 & 1) != 0)) + 0x5b83);
  bVar35 = (byte)uVar29 ^ (byte)lVar47;
  bVar19 = (byte)((ulong)uVar9 >> 8);
  auVar4 = ZEXT116(bVar19 & 1) << 0x40 | ZEXT116(bVar51) << 2;
  uVar49 = SUB168(auVar4 >> sVar20,0) | SUB168(auVar4 << 0x41 - sVar20,0);
  uVar10 = 0xf;
  uVar11 = (ushort)uVar49;
  if (uVar11 != 0) {
    while (uVar11 >> uVar10 == 0) {
      uVar10 = uVar10 - 1;
    }
  }
  return CONCAT88(*(undefined8 *)
                   (((ulong)&stack0xffffffffffffff90 & 0xff7fffffffff0000 |
                    (ulong)(ushort)(((short)register0x00000020 - 0x70U &
                                    ~(1 << ((ushort)bVar8 << 1 & 0xf))) + 1)) + 0x58),
                  (ulong)(ushort)(uVar9 & 0xff | (ushort)(bVar19 >> 1) << 8) +
                  (ulong)(uVar16 & 0xffff0000 |
                         (uint)CONCAT11(bVar35 == 0,
                                        (byte)(bVar54 * 'f') >> (bVar34 & 7) |
                                        bVar54 * 'f' << 8 - (bVar34 & 7))) + uVar18 * 2 +
                  (uVar33 & 0xffffffffffff0000 | (ulong)uVar10) + (ulong)uVar14 +
                  (ulong)(uVar15 + 0x75f432a1) * 2 + (ulong)(0xdba2116f - uVar46) * 2 + lVar47 +
                  (uVar22 & 0xffffffffffffff00 | 0xcd) + (ulong)(0x8a0bcd5e < uVar15) + uVar49 +
                  ((ulong)(uVar32 & 0xffff0000 | (uint)uVar29) & 0xffffffffffffff00 | (ulong)bVar35)
                  + (uVar21 << sVar20 |
                    (ulong)(CONCAT18((byte)((char)uVar33 - bVar24) <= (byte)uVar14,uVar21) >>
                           0x41 - sVar20)) +
                  (ulong)(((uint)uVar17 & 0xffff0000 | (uint)uVar12) + 1 | 0x400) +
                  -0x656c3e01e84e5ae4);
}



// WARNING: Removing unreachable block (ram,0x00402690)
// WARNING: Removing unreachable block (ram,0x004022db)
// WARNING: Removing unreachable block (ram,0x004029c5)
// WARNING: Removing unreachable block (ram,0x00402d5c)
// WARNING: Removing unreachable block (ram,0x004026ed)
// WARNING: Removing unreachable block (ram,0x00402e0e)

undefined  [16] log_size_10_var_001(void)

{
  short sVar1;
  long lVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined2 uVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  short sVar10;
  uint uVar11;
  uint6 uVar13;
  ulong uVar12;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  sbyte sVar17;
  byte bVar21;
  char cVar22;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte bVar23;
  short sVar24;
  ulong uVar25;
  undefined8 uVar26;
  char cVar28;
  ulong uVar27;
  byte bVar29;
  ushort uVar30;
  ushort uVar31;
  ushort uVar32;
  uint uVar33;
  uint uVar34;
  long lVar35;
  ushort uVar36;
  uint uVar37;
  ushort uVar38;
  uint uVar39;
  ulong uVar40;
  uint uVar41;
  ulong uVar42;
  byte bVar43;
  uint uVar44;
  uint uVar45;
  ulong uVar46;
  ulong uVar47;
  long lVar48;
  uint uVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  uint uVar53;
  uint uVar54;
  char cVar55;
  ushort uVar56;
  ushort uVar57;
  int iVar58;
  ulong uVar59;
  ulong uVar60;
  bool bVar61;
  bool in_PF;
  bool bVar62;
  
  auVar5 = ZEXT816(0x8f6608e3) * ZEXT816(0x8f6608e3);
  uVar13 = SUB166(auVar5 >> 0x10,0) >> 1;
  uVar8 = (ushort)(byte)(SUB168(auVar5,0) >> 1) * 0x59;
  uVar12 = CONCAT71(0x7918db36c8f73c,(SUB168(auVar5 >> 0x40,0) != 0) << 7 | 0x2b);
  if (in_PF) {
    uVar12 = 0xe5ee9ffe3fa00000;
  }
  bVar7 = (byte)(((ulong)(1 << ((uint)(uVar8 & 0xff | 0x456a) & 0x1f) | 0x5e6badf7) & 0x7fffffff) <<
                1);
  uVar11 = (uint)CONCAT62(uVar13,uVar8);
  uVar53 = (uint)(uVar11 == 0x326df5ab) * -0x19bb66ad ^ 0x326df5ab;
  uVar11 = uVar11 ^ (uint)(uVar11 == 0x326df5ab) * (uVar11 & uVar53);
  bVar14 = bVar7 & 0x1f | 1;
  uVar54 = uVar53 >> bVar14 | uVar53 << 0x20 - bVar14;
  lVar35 = 0x2b9356a5d4296cf8 >> (bVar7 & 0x3f | 1);
  sVar10 = (short)uVar13;
  uVar53 = uVar11 & 0xffff | (uint)(sVar10 >> 0xf & 0x3fff) << 0x10;
  bVar14 = bVar7 & 0x3f | 1;
  uVar46 = uVar12 * -0x22fef27f >> bVar14 | uVar12 << 0x40 - bVar14;
  uVar53 = uVar53 / 0xd120 | (uVar53 % 0xd120 & 0x3fff) << 0x10;
  uVar59 = ((ulong)(((uint)(ushort)(sVar10 >> 0x1f) & 0x3fff) << 0x10 | uVar53 % 0xd120) << 0x20 |
           (ulong)uVar11 & 0xffff0000 | (ulong)(ushort)(uVar53 / 0xd120)) / 0xf7542eb3;
  uVar56 = (ushort)uVar59 & 0xff;
  uVar53 = ((uint)(ushort)(1 << ((ushort)uVar46 & 0xf) ^ 0xd120) | 0xb57a0000) + 1;
  lVar48 = lVar35 * 3 + 0xf4;
  uVar47 = (uVar46 & 0xffffffff) - lVar35;
  uVar40 = (ulong)(ushort)((short)uVar54 << 0xf | 0x70) | 0xe5ee9ffe3fa00000;
  uVar36 = (ushort)uVar53 & 0xff00 | 1;
  uVar8 = (ushort)lVar35 + 0xb2 + uVar56 * 2 & 0xf;
  uVar9 = uVar56 & ~(1 << uVar8);
  uVar46 = (ulong)(SUB164(auVar5 >> 0x20,0) >> 1) << 0x20 | uVar59 & 0xffffffffffff0000;
  uVar25 = uVar46 | uVar9;
  uVar60 = (uVar12 & 0xffffffffffffff00 | (ulong)((uVar47 >> 1 & 1) != 0)) << 1 |
           (ulong)((long)uVar12 < 0);
  uVar59 = 0x3f;
  if (uVar25 != 0) {
    while (uVar25 >> uVar59 == 0) {
      uVar59 = uVar59 - 1;
    }
  }
  lVar2 = 0;
  uVar38 = 0;
  if (uVar60 != 0) {
    while (uVar38 = (ushort)lVar2, (uVar60 >> lVar2 & 1) == 0) {
      lVar2 = lVar2 + 1;
    }
  }
  uVar31 = (ushort)lVar35 ^ 1 << (uVar38 & 0xf);
  uVar41 = -0x5fffffe4 >> ((byte)uVar38 & 0x1f);
  bVar14 = (byte)uVar38 & 0xf;
  uVar38 = uVar36 >> bVar14 | uVar36 << 0x10 - bVar14;
  uVar36 = (short)lVar48 - 1;
  uVar20 = (uint)lVar48;
  uVar11 = uVar20 & 0xffff0000;
  uVar49 = (uVar54 & 0xff) + uVar41 + 1;
  cVar22 = (char)uVar31;
  uVar33 = (uint)((uVar12 >> 8 & 0x7fffffffffff80) << 9);
  lVar48 = -CONCAT62((int6)(((ulong)(uint3)(((uint3)(uVar47 >> 8) >> 1 |
                                            (uint3)(((uint)((uVar56 >> uVar8 & 1) != 0) << 0x1f) >>
                                                   8)) >> 1) << 8) >> 0x10),0x8bd);
  if (!in_PF) {
    uVar40 = (ulong)uVar41;
  }
  uVar39 = uVar53 & 0xfff70000 | (uint)uVar38;
  uVar53 = (uint)uVar36 & 0xfffffffe;
  lVar2 = 0x3f;
  if (uVar40 != 0) {
    while (uVar40 >> lVar2 == 0) {
      lVar2 = lVar2 + -1;
    }
  }
  iVar58 = (uVar11 | uVar53) + 0xa69648de;
  uVar37 = iVar58 * 0x800;
  uVar45 = (uint)(CONCAT14((uVar59 >> 0x11 & 1) != 0,iVar58) >> 0x16);
  uVar25 = (ulong)(uVar54 & 0xffffff00 | (uint)(byte)((byte)uVar54 | (byte)uVar40));
  uVar30 = (ushort)uVar37 | (ushort)uVar45 & 0xff00 | (ushort)(byte)((char)uVar45 + 0x60);
  uVar54 = ((uint)lVar48 & 0xffff0000 | (uint)(ushort)((short)lVar48 + 0xc3ec)) + 0xed943942;
  uVar56 = uVar30 * 2;
  uVar8 = (ushort)(byte)((char)uVar9 >> 0x17);
  bVar62 = uVar8 == uVar56;
  uVar9 = uVar56 ^ (ushort)bVar62 * (uVar56 ^ (short)uVar59 * -0x6b52 & 0xa41U);
  uVar46 = uVar46 | (ushort)((uVar8 ^ (ushort)bVar62 * (uVar8 & uVar9)) & 0xff |
                            (ushort)(byte)(((short)(uVar8 + uVar30 * -2) < 0) << 7 | bVar62 << 6 |
                                           ((uVar25 + 0xfffffff84fbebf5 + (ulong)((short)uVar30 < 0)
                                            & 0x1000000000000000) != 0) << 4 | in_PF << 2 | 2U |
                                          uVar8 < uVar56) << 8);
  uVar12 = uVar46 * (ulong)uVar54;
  bVar7 = (byte)(uVar12 >> 8);
  iVar58 = (int)CONCAT11(bVar7 >> 6 | bVar7 << 2,(char)uVar12) * (int)(short)uVar53;
  uVar59 = ((ulong)SUB167(SEXT816((long)uVar46) * SEXT816((long)(ulong)uVar54) >> 0x48,0) &
           0xffffffffffff00) << 8 | (ulong)(ushort)((uint)iVar58 >> 0x10);
  uVar12 = uVar12 & 0xffffffffffff0000 | (ulong)(ushort)iVar58;
  uVar46 = uVar59 ^ (ulong)(uVar12 == uVar59) * (uVar59 ^ uVar41);
  uVar12 = uVar12 ^ (ulong)(uVar12 == uVar59) * (uVar12 & uVar46);
  uVar59 = (ulong)(uVar37 & 0xffff0000 | (uint)uVar9) << 1;
  uVar49 = uVar49 & 0xffff0000 | (uint)(((ushort)uVar49 & 0xff00 | uVar36 & 0xfe) & uVar38);
  uVar18 = 0xe15091cc - (uint)(uVar46 < uVar49);
  bVar15 = (char)uVar18 >> 1;
  uVar37 = uVar18 & 0xffff0000;
  bVar23 = (byte)(uVar54 >> 1) & 0x7f;
  bVar7 = bVar15 + bVar23;
  uVar53 = (uint)CARRY1(bVar15,bVar23) << 0x10 | (uint)uVar36 & 0xfffe;
  uVar56 = (ushort)(uVar53 << 8) | (ushort)(uVar53 >> 9);
  lVar48 = (uVar46 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar46 - 0x2e)) - 1;
  bVar23 = (byte)((ulong)(uVar37 | CONCAT11((char)((ulong)(uVar37 | (uint)CONCAT11(!SBORROW1((char)
                                                  uVar12,(char)uVar12),bVar15) & 0xffffff00) >> 8),
                                            bVar7)) >> 8) | 0xc0;
  uVar8 = (ushort)uVar12 & 0x3f00;
  uVar54 = uVar54 & 0xffff0000 |
           (uint)(ushort)(((ushort)uVar54 & 0xff00 | (ushort)bVar15) >> 2 | (short)lVar48 << 0xe);
  uVar53 = (int)(short)(uVar8 / (ushort)bVar23 & 0xff | uVar8 % (ushort)bVar23 << 8) *
           (int)(short)uVar38;
  uVar45 = (uint)lVar48 & 0xffff0000;
  uVar8 = (ushort)((uint)CONCAT62((int6)(short)(uVar12 >> 0x10),(short)uVar53) >> 1);
  uVar41 = (uVar41 << 0x1a) << (bVar7 & 0x1f) | (uVar41 << 0x1a) >> 0x20 - (bVar7 & 0x1f);
  if ((int)(uVar39 + 0xab83293f) < 0) {
    uVar8 = (ushort)uVar59;
  }
  uVar39 = uVar49 * 0x78e4185a & 0xffff0000 |
           (uint)(ushort)((short)(uVar49 * 0x78e4185a) << 1 |
                         (ushort)(0x547cd6c1 < uVar39 || 0xfffffffe < uVar39 + 0xab83293e));
  uVar12 = (ulong)uVar39;
  bVar16 = (byte)(uVar53 >> 0x10);
  bVar15 = bVar16 + bVar23;
  uVar44 = ((((uint)lVar35 & 0xffff0000 | (uint)uVar31 & 0xffffff00 | (uint)(byte)(cVar22 << 1)) >>
            bVar14) >> 1) >> (bVar7 & 0x3f);
  if (bVar15 == 0 || SCARRY1(bVar16,bVar23) != (char)bVar15 < '\0') {
    uVar44 = uVar45 | uVar53 >> 0x10 & 0xff00 | (uint)bVar15;
  }
  uVar9 = 0x3ae2 - (ushort)CARRY1(bVar16,bVar23);
  bVar15 = (uVar9 == 0) - 1;
  if (bVar15 == 0 || uVar9 != 0) {
    uVar45 = uVar37 | (uint)CONCAT11(bVar16,bVar7);
  }
  if (!in_PF) {
    uVar12 = (ulong)(uVar33 >> 1 | 0x80000000 |
                    (uint)(ushort)((short)((uVar33 | (ushort)((short)uVar60 << bVar14 % 0x11 |
                                                             (ushort)(CONCAT12(cVar22 < '\0',
                                                                               (short)uVar60) >>
                                                                     0x11 - bVar14 % 0x11))) >> 1) *
                                  0x4ee)) + (ulong)uVar54;
  }
  uVar36 = uVar56 ^ (ushort)(uVar8 == uVar56) * (uVar56 ^ uVar8);
  uVar46 = SEXT48((int)uVar59);
  iVar58 = 0x1f;
  if (uVar44 != 0) {
    while (uVar44 >> iVar58 == 0) {
      iVar58 = iVar58 + -1;
    }
  }
  uVar47 = uVar46 >> 0x3a | uVar46 << 6;
  uVar18 = uVar39 << 4 | uVar18 >> 0x1c;
  uVar44 = ((uVar54 ^ 0x45a1949d) & 0xffffff00 | (uint)(-0x485e3c55 < iVar58)) + uVar44;
  uVar54 = (uint)(ushort)(uVar8 ^ (ushort)(uVar8 == uVar56) * (uVar8 & uVar36)) * (uVar44 & 0xffff);
  uVar33 = (uVar45 & 0xffff0000) + uVar39 & 0xffff0000;
  uVar39 = (uVar41 & 0xffffff00 | (uint)bVar15) + 0xcc71d388 +
           (uint)(((uint)((int)(uint6)((uVar25 - 0x7b04140b) + (ulong)((short)uVar30 < 0) >> 0x11)
                         << 0x10) >> 0x1c & 1) != 0);
  uVar56 = (short)uVar18 + 0x1bf9;
  uVar45 = (uint)uVar47 & 0xffff | (int)(short)((char)uVar36 >> 7) << 0x10;
  uVar53 = (int)(char)uVar36 + uVar45;
  uVar8 = (short)uVar39 - 1;
  bVar14 = (byte)uVar8;
  uVar39 = uVar39 & 0xffff0000 | (uint)uVar8 & 0xffffff00 | (uint)(byte)(bVar14 >> 1 | bVar14 << 7);
  uVar8 = (((short)uVar44 << 1 | (ushort)(0x8449e407 < uVar18 || 0xfffffffe < uVar18 + 0x7bb61bf8))
          - uVar56) - 1;
  uVar18 = uVar11 | uVar36 | 0x249d9e04;
  uVar11 = uVar37 | (uint)CONCAT11(bVar16,bVar7) & 0xffffff00;
  if (SCARRY4(uVar49,uVar45) != (int)(uVar49 + uVar45) < 0) {
    uVar11 = (uint)uVar9 | 0x4dd70000;
  }
  uVar25 = ((ulong)(uVar33 | CONCAT11((char)((ulong)(uVar33 | uVar54 >> 0x10) >> 8),
                                      (char)(uVar54 >> 0x10))) | 0xc500) + (ulong)uVar39 + 1;
  bVar7 = (byte)(uVar11 >> ((byte)uVar11 & 0x1f));
  uVar59 = (uVar59 & 0xffffffff) >> (bVar7 & 0x3f) | (ulong)uVar53 << 0x40 - (bVar7 & 0x3f);
  iVar58 = (int)uVar25 + 0x63c6f5f3;
  bVar14 = (bVar7 & 0x1f) % 0x11;
  sVar10 = 0;
  cVar22 = '\0';
  if (uVar8 != 0) {
    while (cVar22 = (char)sVar10, (uVar8 >> sVar10 & 1) == 0) {
      sVar10 = sVar10 + 1;
    }
  }
  bVar15 = bVar7 + 0x21 & 0x3f;
  uVar11 = uVar18 + (uVar53 & 0x24294215) * 8;
  uVar8 = (ushort)CONCAT71((uint7)((uVar47 << 10) >> 8) | (uint7)((uVar46 << 6) >> 0x3e),bVar7) >> 1
  ;
  lVar35 = (ulong)(ushort)((ushort)(CONCAT12(uVar25 < 0xffffffff9c390a0d,(short)uVar39) >> bVar14) |
                          (short)uVar39 << 0x11 - bVar14) + 1;
  bVar7 = (bVar7 + 0x21) * '\x02' & 0x1f | cVar22 + 0x2fU & 1;
  uVar40 = (ulong)uVar11 << 1;
  bVar16 = (byte)uVar40;
  lVar48 = (long)(int)(uVar39 + ((uint)uVar9 | 0x4dd70000) + (uint)uVar59) * -0x2716828f;
  iVar19 = (int)((ulong)lVar48 >> 0x20);
  iVar19 = (int)lVar48 + 0x630974fc + (uint)(iVar19 != 0 && iVar19 != -1);
  bVar23 = (byte)iVar19;
  bVar14 = bVar23 & 7;
  uVar47 = ~(ulong)(CONCAT22((short)(iVar58 >> 0x11),
                             (short)(((ushort)uVar59 & 0xff00 |
                                     (ushort)(byte)(((char)uVar59 - (char)(iVar58 >> 1)) - 1)) *
                                     0x4c13 >> 1 | 0x8000) >> 0xf) + 0x32a67508 << bVar7 |
                   0U >> 0x20 - bVar7);
  bVar23 = (byte)uVar47 & bVar23;
  uVar47 = uVar47 & 0xffffffffffffff00;
  uVar25 = 0;
  if (uVar11 != 0) {
    while ((uVar40 >> uVar25 & 1) == 0) {
      uVar25 = uVar25 + 1;
    }
  }
  bVar29 = (byte)uVar8 >> 1 | 0x80;
  bVar7 = (char)uVar25 + 0x44;
  lVar48 = (ulong)((uint)((cVar22 + 0x2fU & 0x47) >> 1) << 0x1c |
                  (((uint)(uVar12 >> bVar15) | (uint)(uVar12 << 0x40 - bVar15)) & 0xffff0000) >> 4)
           << 1;
  uVar12 = 0;
  if ((bVar23 | 0xad) == 0) {
    uVar12 = (ulong)(uVar53 & 0x24290000);
  }
  uVar11 = (uint)lVar48 & 0xffff0000 | (uint)(ushort)lVar48;
  bVar62 = (bVar7 & 1) != 0;
  bVar15 = bVar29 - (bVar23 | 0xad);
  bVar29 = ((char)lVar35 * '\x04' + -6) - (bVar29 < (bVar23 | 0xad) || bVar15 < bVar62);
  uVar54 = (uint)uVar59 & 0xffff0000 | (uint)((ushort)lVar35 & 0xff00) | (uint)bVar29;
  sVar10 = (short)((uVar25 & 0xffffffffffffff00 | (ulong)bVar7) >> 1);
  uVar9 = (uVar56 & 0xff00) << 1 |
          (ushort)(byte)((bVar16 << bVar14 | bVar16 >> 8 - bVar14) << 1 & (byte)(uVar18 >> 0x1e));
  sVar24 = (((ushort)(((uint)uVar47 | (uint)bVar23) + (iVar19 - (uint)((uVar53 & 1) != 0)) <<
                     (bVar23 & 0x1f)) | (ushort)((uVar20 >> 0x1e) >> 0x20 - (bVar23 & 0x1f))) &
           0xe60) + uVar9 + 1;
  uVar53 = uVar11 * 2;
  bVar14 = ((bVar23 | 0xad) & 0x1f) % 0x11;
  uVar59 = CONCAT62((uint6)((uVar25 & 0xffffffffffffff00) >> 0x11),
                    sVar10 << bVar14 |
                    (ushort)(CONCAT12(CARRY4(uVar11,uVar11),sVar10) >> 0x11 - bVar14)) & 0xffffffff
           | 0xffffffff9a52c689;
  uVar56 = sVar24 * 0x40;
  bVar29 = bVar29 >> 1;
  uVar25 = (ulong)(0 >> 0x32) | ((ulong)uVar53 & 0xffff) << 0xf;
  sVar10 = 0xf;
  while (0xe3e9U >> sVar10 == 0) {
    sVar10 = sVar10 + -1;
  }
  uVar9 = ~uVar9;
  uVar12 = uVar12 - bVar29;
  uVar11 = uVar54 ^ (uint)uVar25;
  sVar1 = uVar9 + 0x720c;
  if (sVar1 == 0 || (SCARRY2(uVar9,0x720c) != SCARRY2(sVar1,0)) != sVar1 < 0) {
    uVar12 = uVar59 >> 1 & 0xffffffff;
  }
  uVar11 = uVar11 & 0xffff0000 | (uint)((ushort)uVar11 & 0xfffe);
  uVar25 = uVar25 | (byte)((ushort)sVar10 >> 10) | 0xc000;
  uVar56 = (ushort)((CONCAT22(uVar56 & 0xff00 |
                              (ushort)(byte)-((byte)uVar56 | (byte)((ushort)sVar24 >> 10)),
                              (short)uVar12) & 0x3ffeffff) / (uint)(ushort)uVar25);
  uVar12 = (uVar12 & 0xffffffffffff0000 | (ulong)uVar56) + 0x7fa46d68 +
           ((ulong)(((uint)(uVar46 << 0x10) | (uint)uVar8 & 0xffffff00 |
                    (uint)(byte)(bVar15 - bVar62)) & 0x9785c1a9) - 0x4233220d & 0xffffffffffff0000 |
           uVar59 & 0xff);
  bVar14 = (byte)(uVar59 >> 1);
  uVar8 = (ushort)bVar29;
  if ((uVar12 & 0x2837f602) != 0) {
    uVar8 = 0xe3e9;
  }
  lVar48 = -uVar25;
  uVar9 = (uVar56 == 0) * uVar8;
  uVar46 = (ulong)(ushort)(uVar8 << 0xf);
  if (-1 < (short)uVar56) {
    uVar46 = 0xffffffffffffe3e9;
  }
  uVar25 = CONCAT62((int6)(uVar47 >> 0x10),0xe3e9) << 1;
  uVar12 = uVar12 & 0xffffffffffff0000 |
           (ulong)(ushort)((short)uVar12 + (ushort)(byte)(uVar59 & 0xff));
  uVar8 = (uVar56 ^ (ushort)(uVar56 == 0) * (uVar56 & uVar9)) & 0x3fff;
  bVar7 = (byte)uVar25 & 7;
  bVar15 = (byte)lVar48;
  uVar33 = (uint)lVar48;
  uVar49 = (int)(short)(uVar8 / 0xc0 | uVar8 % 0xc0 << 8) * (int)uVar25;
  uVar20 = (uVar33 & 0xffffff00 | (uint)(byte)(bVar15 << bVar7 | bVar15 >> 8 - bVar7)) << 1;
  sVar10 = 0xf;
  uVar8 = (ushort)uVar46;
  if (uVar8 != 0) {
    while (uVar8 >> sVar10 == 0) {
      sVar10 = sVar10 + -1;
    }
  }
  uVar40 = (((ulong)uVar53 * -0x353636ca | (ulong)(byte)-bVar14) >> 1) - 0x62d9acd1 | (ulong)uVar11;
  uVar47 = 0;
  if (uVar40 != 0) {
    while ((uVar40 >> uVar47 & 1) == 0) {
      uVar47 = uVar47 + 1;
    }
  }
  uVar36 = (short)uVar25 >> ((byte)uVar25 & 0x1f);
  bVar7 = (byte)uVar36;
  uVar18 = (int)uVar12 + 0xdc07ffc7;
  uVar39 = uVar20 & 0xffffff00 |
           (uint)(byte)((char)((byte)uVar20 | (byte)(uVar46 >> 0x18) >> 7) >> 3);
  uVar54 = ((((uint)(((ulong)(uint3)((uint)((int)(((ulong)(uint3)((uVar54 << 1) >> 8) &
                                                  0xffffffff80dc9d) << 8) << 1) >> 8) & 0xd9607) <<
                    8) & 0xffff0000) >> 1) * -0x2b89afe2 | (uint)uVar9) + 0x61fb5cf5;
  uVar45 = ~(uint)CONCAT71(0x2609f6f44368cd,bVar7 | 0x15);
  uVar20 = (uint)(ushort)((short)(char)uVar49 * uVar9) * (uVar45 & 0xffff);
  uVar49 = uVar49 & 0xffff0000 | uVar20 & 0xffff;
  uVar56 = (ushort)uVar45 >> 1;
  uVar37 = (uint)(ushort)(uVar56 | (ushort)((uVar45 & 1) != 0) << 0xf);
  bVar15 = (char)uVar54 << (bVar7 & 0x1f);
  uVar60 = (ulong)(uVar54 & 0xffffff00 | (uint)bVar15);
  uVar54 = 0x1f;
  if (uVar18 != 0) {
    while (uVar18 >> uVar54 == 0) {
      uVar54 = uVar54 - 1;
    }
  }
  uVar12 = uVar12 - 0x23f80038;
  uVar27 = uVar40 & 0xffffffffffffff00 | (ulong)(uVar12 != 0);
  if (in_PF) {
    uVar11 = uVar39;
  }
  uVar20 = (uint)uVar47 >> 1 & 0xffffff00 | (uint)((uVar47 & 1) != 0) << 0x1f |
           (uint)(byte)((ulong)(ushort)(uVar20 >> 0x10) >> 8);
  if (!in_PF) {
    uVar11 = uVar20;
  }
  uVar18 = (int)(char)bVar7 + -0x465f5811 + uVar20 * 8;
  bVar23 = (byte)(uVar12 & 0xffff);
  uVar47 = (uVar49 << (bVar23 & 0x1f) | uVar49 >> 0x20 - (bVar23 & 0x1f)) * uVar60;
  uVar49 = (uint)uVar47;
  uVar38 = (ushort)uVar39;
  uVar39 = (uVar54 & 0xffffff00 | (uint)(byte)((char)uVar54 - bVar7)) >> (bVar23 & 0x1f) |
           (uVar45 & 0xffff0000 | uVar37) << 0x20 - (bVar23 & 0x1f);
  uVar51 = CONCAT71((uint7)(uVar59 >> 9),bVar14 ^ (byte)(uVar47 >> 0x20));
  uVar9 = (ushort)uVar11;
  bVar62 = SBORROW2(uVar9,0x29b) != false;
  uVar11 = uVar11 & 0xffff0000 | (uint)(ushort)(uVar9 - 0x29b);
  uVar42 = (ulong)uVar36 & 0xffffffffffffff00;
  uVar54 = uVar11 ^ (uint)(uVar49 == uVar11) * (uVar11 ^ (uint)uVar27);
  uVar49 = uVar49 ^ (uint)(uVar49 == uVar11) * (uVar49 & uVar54);
  uVar50 = uVar40 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar27 - 1);
  bVar14 = (byte)uVar18 ^ 0x83;
  uVar27 = (ulong)uVar18 ^ 0x83;
  uVar40 = (ulong)((uVar33 & 0x7fff8000) << 1 |
                  (uint)(ushort)(uVar38 << (bVar23 & 0xf) | uVar38 >> 0x10 - (bVar23 & 0xf)));
  if (bVar14 != 0) {
    uVar40 = uVar27;
  }
  uVar40 = (ulong)uVar39 + uVar40;
  uVar25 = uVar25 & 0xffffffffffff0000 | uVar12 & 0xffff;
  if (uVar40 != 0) {
    uVar25 = uVar60;
  }
  uVar9 = ((ushort)uVar20 & 0xff00 | (ushort)(0x29a < uVar9)) ^ (ushort)(1 << ((uint)uVar46 & 0x1f))
  ;
  if ((uVar46 & 1) == 0) {
    uVar9 = (ushort)uVar39;
  }
  bVar43 = (char)uVar56 >> 0x18;
  lVar48 = uVar25 << 1;
  bVar16 = (byte)lVar48 | (long)uVar25 < 0;
  bVar23 = (byte)uVar49;
  bVar29 = (byte)((ulong)lVar48 >> 8);
  bVar21 = bVar29 ^ (bVar23 == bVar29) * (bVar29 ^ (byte)(uVar9 >> 8));
  bVar7 = ((byte)lVar48 & 0x1f | (long)uVar25 < 0) % 9;
  uVar56 = (ushort)(byte)((byte)((uVar8 & 0xfe | (ushort)(bVar23 < bVar29) << 8) >> bVar7) |
                         ((byte)uVar46 & 0xfe) << 9 - bVar7);
  uVar25 = ((uVar47 & 0x3fffffff00000000 |
            (ulong)(uVar49 & 0xffffff00 |
                   (uint)(byte)(bVar23 ^ (bVar23 == bVar29) * (bVar23 & bVar21)))) /
            (ulong)((uint)lVar48 & 0xffff0000 | (uint)CONCAT11(bVar21,bVar16) | 0xc0000000) &
           0xffffffff) * (uVar12 & 0xffff0000 | uVar42 | (ulong)bVar62);
  bVar7 = (byte)uVar9;
  if (in_PF) {
    bVar7 = bVar43;
  }
  uVar33 = uVar54 & 0xffffff00 | (uint)(byte)uVar25 | 0xc0000000;
  uVar25 = (ulong)((uint)(uVar25 >> 0x20) & 0x3fffffff) << 0x20 |
           uVar25 & 0xffffff00 | (ulong)(byte)((byte)uVar25 + (char)uVar54);
  uVar47 = uVar25 / (ulong)uVar33;
  uVar25 = uVar25 % (ulong)uVar33;
  uVar11 = (uVar45 & 0xffff0000 | uVar37 & 0xffffff00 | (uint)bVar43) >> 1;
  bVar14 = ~(bVar16 ^ bVar14);
  bVar61 = (uVar25 & 1) != 0;
  uVar60 = uVar40 << (bVar14 & 0x3f) | uVar40 >> 0x40 - (bVar14 & 0x3f);
  uVar12 = uVar12 & 0xffffffffffff0000 |
           (ulong)(ushort)(((ushort)uVar42 | (ushort)bVar62) << (bVar14 & 0x1f));
  lVar48 = (uVar47 & 0xffff0000 |
           (ulong)(ushort)(((ushort)uVar47 & 0xff00 | (ushort)(byte)((char)uVar47 - (char)uVar40)) +
                          0x52e)) - (ulong)uVar39;
  uVar9 = (ushort)lVar48 ^ 1 << (uVar56 & 0xf);
  uVar20 = (uint)((long)uVar25 >> 1);
  if (!CARRY8(uVar12,uVar50) && uVar12 + uVar50 != 0) {
    uVar27 = uVar51 & 0xffffffff;
  }
  uVar49 = (uint)(uVar12 + uVar50);
  uVar36 = (ushort)uVar51 | 0xc314;
  uVar59 = uVar51 & 0xffff | (uVar59 >> 0x11) << 0x10;
  uVar25 = uVar59 | 0xc314;
  uVar39 = (uint)uVar25;
  if (0 < (short)uVar36) {
    uVar33 = uVar54 & 0xffff0000 | 0xc0000000 | (uVar11 & 0x1fffe) >> 1;
  }
  uVar38 = uVar9 & 0xff;
  uVar36 = (ushort)(byte)(((short)uVar36 < 0) << 7 | (uVar36 == 0) << 6 |
                          (((bVar15 & 0xf) + 9 & 0x10) != 0) << 4 | in_PF << 2) << 8;
  bVar62 = (uVar36 & 0x400) != 0;
  uVar37 = (int)uVar60 + 1;
  uVar31 = (ushort)uVar37;
  uVar20 = uVar33 + 0xaa + (uVar20 << 0x13 | uVar20 >> 0xd) * 2;
  bVar15 = (byte)uVar38;
  uVar54 = -((int)(short)uVar9 & 0xffff0000U | (uint)(ushort)(uVar38 | uVar36 | 0x200) & 0xffffff00
            | (uint)(byte)(bVar15 ^ (bVar15 == bVar7) *
                                    (bVar15 & (bVar7 ^ (bVar15 == bVar7) * (bVar7 ^ bVar61)))));
  uVar50 = (long)(ulong)((int)uVar50 + 0xc51b0b3e) >> ((byte)uVar20 & 0x3f);
  uVar11 = (((uVar11 | (uint)((bVar43 & 1) != 0) << 0x1f) >> 1) + 0xc16bc5bd) * 2;
  uVar13 = (uint6)((ulong)lVar48 >> 0x10) & 0xffffffff0000 |
           (uint6)(ushort)((ushort)((ulong)uVar54 >> 0x10) ^
                          (ushort)((uint)(uVar54 == uVar20) *
                                   (uVar54 & (uVar20 ^ (uint)(uVar54 == uVar20) * (uVar20 ^ uVar11))
                                   ) >> 0x10));
  sVar10 = (short)uVar33 * 0x1c06;
  uVar51 = (ulong)(uVar49 >> 9 | uVar49 << 0x17) ^ 0xffffffffd59eb27a;
  uVar9 = (ushort)bVar61 & (ushort)uVar50;
  uVar42 = (long)(int)((uint)CONCAT62(uVar13,sVar10) & 0xffffff00 | (uint)(byte)((char)sVar10 << 1))
           * (long)(int)uVar33;
  iVar58 = (int)(uVar42 >> 0x20);
  uVar47 = (ulong)(iVar58 != 0 && iVar58 != -1);
  uVar40 = uVar51 + 0x43104566;
  uVar52 = uVar40 + uVar47;
  uVar42 = ((ulong)uVar13 & 0xffffffff0000) << 0x10 | uVar42 & 0xffffffff;
  if ((0xffffffffbcefba99 < uVar51 || CARRY8(uVar40,uVar47)) || uVar52 == 0) {
    uVar42 = uVar52;
  }
  sVar10 = 0xf;
  if (uVar31 != 0) {
    while (uVar31 >> sVar10 == 0) {
      sVar10 = sVar10 + -1;
    }
  }
  bVar7 = (byte)uVar42 >> 4;
  iVar58 = 0x1f;
  if ((uint)uVar42 != 0) {
    while ((uint)uVar42 >> iVar58 == 0) {
      iVar58 = iVar58 + -1;
    }
  }
  uVar47 = (ulong)((uint)((uVar27 & 0xffffffffffff0000 |
                          (ulong)(ushort)((((ushort)uVar27 & 0xff00 | (ushort)!in_PF) + 0x566b) * 2)
                          ) >> 1) >> bVar7 | (int)uVar52 << 0x20 - bVar7);
  if (!bVar62) {
    uVar50 = (ulong)(((uVar53 & 0x7c2d0000 | (uint)(ushort)((short)uVar53 << 1)) >> 1) << 2 |
                    (uint)uVar9);
  }
  if ((ulong)(byte)((byte)uVar42 << 5 | bVar7) == 0x2c15def7) {
    uVar9 = uVar31;
  }
  if ((char)uVar25 < (char)(-1 - (char)iVar58)) {
    uVar39 = (uint)uVar59 & 0xffff0000 | (uint)uVar9;
  }
  uVar25 = (uVar60 & 0xffffffff00000000 | (ulong)uVar37) - 0x7798113c;
  uVar59 = uVar47 - (uVar52 >> 1);
  uVar36 = (short)uVar59 << 0xf;
  uVar38 = uVar36 | uVar9 >> 1;
  uVar59 = uVar59 & 0xffffffffffff0000;
  uVar40 = uVar59 | uVar38;
  uVar9 = (ushort)uVar25 >> bVar7 | (short)(uVar39 * 0x2fe083da) << 0x10 - bVar7;
  uVar12 = (((uVar46 & 0xffffffffffff0000 | (ulong)(ushort)~(uVar8 & 0xff00 | uVar56)) <<
             (bVar14 & 0x3f) | uVar12 >> 0x40 - (bVar14 & 0x3f)) & 0x30a26282) * 2;
  uVar45 = uVar39 * 0x2fe083da + -0x199c451e + (uint)(uVar12 < 0xe5163200);
  uVar8 = (short)uVar12 + 0xce00U & 0xff | 0xdf00;
  uVar53 = uVar45 & 0xffff0000;
  uVar12 = uVar40 | 0x1000000;
  lVar48 = (uVar50 & uVar47) << bVar7;
  uVar49 = (1 << (uVar11 >> 2 & 0x1f) ^ 0xffff4c00U) + 1;
  uVar37 = (int)uVar12 + 0xfbb7d02 + uVar49;
  uVar11 = uVar37 & 0xffff0000;
  uVar54 = (uint)CONCAT11((char)((ulong)uVar37 >> 8),(char)uVar37);
  uVar20 = (uint)lVar48 & 0xffffff00;
  uVar33 = ((uint)uVar40 & 0xffff) << 3;
  if (!bVar62) {
    uVar33 = (uVar53 | (ushort)((short)uVar45 + 0x1190)) >> 1;
  }
  uVar46 = (long)(int)((uint)(uVar42 << 0x1d) | (uint)(uVar12 < 0xffffffffc9b10c34)) *
           (long)(int)(uint)bVar7;
  iVar19 = (int)(uVar46 >> 0x20);
  uVar13 = (uint6)((ulong)uVar49 - 0x353b5d4f >> 0x10) & 0xffffffff0000 |
           (uint6)(ushort)(uVar46 >> 0x30);
  if (iVar19 == 0 || iVar19 == -1) {
    uVar33 = 0xf5562b2d;
  }
  lVar35 = (ulong)(uint)(iVar58 >> 1) + 0x8f6029b;
  sVar10 = 0;
  if (uVar8 != 0) {
    while ((uVar8 >> sVar10 & 1) == 0) {
      sVar10 = sVar10 + 1;
    }
  }
  uVar40 = (ulong)CONCAT22((ushort)(uVar53 >> 0x11),sVar10) | 0x8000000000000000;
  iVar58 = (uint)(ushort)uVar46 * 0x565b;
  bVar16 = (byte)uVar9;
  cVar22 = (char)uVar37 + '\x17' + bVar16;
  bVar15 = (byte)((ulong)(uVar11 | CONCAT11((byte)((ulong)(uVar11 | uVar54 & 0xffffff00) >> 8) ^
                                            (byte)((ulong)(ushort)iVar58 >> 8),cVar22)) >> 8);
  bVar14 = (char)((uint)iVar58 >> 0x10) * '\x02';
  uVar47 = CONCAT62(uVar13,(short)((uint)iVar58 >> 0x10)) & 0xffffffffffffff00;
  uVar25 = (uVar25 & 0xffffffff00000000 |
           (ulong)(((uint)uVar25 & 0xffff0000 | (uint)uVar9) ^ 0x2000)) ^
           (uVar25 >> 0x32 & 1) << 0x32;
  uVar56 = CONCAT11(bVar15 ^ ((byte)iVar58 == bVar15) * (bVar15 ^ 0x5b),cVar22) + (short)lVar35 +
           0xd15f;
  uVar27 = (ulong)(uint)((int)(uVar54 & 0xff | 0xe7c5ae00) >> 0x1b);
  bVar15 = (byte)uVar56;
  bVar23 = bVar15 ^ (bVar15 == 0x56) * (bVar15 ^ (byte)((ulong)(uVar11 | uVar56) >> 8));
  uVar46 = uVar46 & 0xffff0000 | uVar42 << 0x1d & 0xffffffff00000000 |
           (ulong)(ushort)iVar58 & 0xffffffffffffff00 |
           (ulong)(byte)((bVar15 == 0x56) * (bVar23 & 0x56) ^ 0x56);
  bVar15 = (byte)(uVar47 >> 8);
  uVar26 = CONCAT62(uVar13,CONCAT11(bVar15 << 3 | bVar15 >> 5,bVar14));
  uVar60 = uVar40 ^ (ulong)(uVar46 == uVar40) * (uVar40 ^ (ulong)uVar33 & 0xffffffffffff52cb);
  auVar5 = ZEXT816((ulong)(uVar11 | (ushort)((ushort)bVar23 << 0xb |
                                            ((ushort)uVar47 | (ushort)bVar14) >> 5)) |
                   0xc000000000000000);
  auVar3 = CONCAT88(uVar26,uVar46 ^ (ulong)(uVar46 == uVar40) * (uVar46 & uVar60)) &
           (undefined  [16])0xffffffffffffffff;
  uVar47 = uVar27 - 0xf6d3a4ac;
  uVar56 = (short)((int)(uVar20 | (byte)(CONCAT11(uVar12 < 0xffffffffc9b10c34,(char)lVar48) >> 1))
                  >> 1) + 1;
  uVar53 = CONCAT22((short)((int)uVar20 >> 0x11),uVar56);
  uVar11 = uVar11 | (ushort)bVar23 & 0x1f;
  uVar9 = (ushort)((ulong)uVar33 & 0xffffffffffff52cb);
  uVar12 = SUB168(auVar3 / auVar5,0) << 1;
  uVar46 = uVar12 & 0xff;
  if (uVar36 != 0) {
    uVar47 = 0;
  }
  uVar54 = (int)uVar12 + 0x90288c15;
  bVar15 = (byte)(uVar11 << 1) | (int)uVar11 < 0;
  uVar11 = uVar53 >> 1;
  bVar61 = (uVar54 & 1) == 0;
  uVar20 = uVar54 & 0xffffff00 | (uint)(byte)((byte)uVar54 >> 1 | ((uVar56 & 1) != 0) << 7);
  uVar56 = (short)uVar47 - (short)uVar11;
  bVar14 = bVar16 + bVar61;
  uVar12 = (ulong)uVar11;
  if (CARRY1(bVar16,bVar61) || bVar14 == 0) {
    uVar12 = uVar46 | 0xeaac0000;
  }
  uVar40 = (uVar25 & 0xff | (ulong)SUB167(auVar3 % auVar5 >> 8,0) << 8) ^ 0xffffffffadb09b53;
  if (uVar40 == 0) {
    uVar12 = uVar12 & 0xffffffffffff0000 | (ulong)(ushort)((uVar9 >> 7 | uVar9 << 9) + 1);
  }
  uVar42 = uVar60 & 0xffffffffffffff00 |
           (ulong)(byte)((byte)uVar60 & 0x7f | (0xc274e9f < uVar27 - 0xeaac560c) << 7);
  bVar23 = (byte)uVar46 & 0x3f;
  uVar27 = uVar42 >> 0x40 - bVar23;
  uVar11 = 0x1f;
  if (uVar20 != 0) {
    while (uVar20 >> uVar11 == 0) {
      uVar11 = uVar11 - 1;
    }
  }
  uVar36 = (ushort)uVar46;
  uVar46 = (ulong)(uVar54 & 0xffff0000 | (uint)(ushort)((ushort)uVar20 ^ uVar36)) *
           (~(ulong)(((uint)lVar35 & 0x3aae8800) + 1) & 0xffffffff);
  uVar40 = uVar40 & 0xffffffff00000000;
  uVar9 = (ushort)uVar46;
  uVar47 = CONCAT62((uint6)((uVar47 & 0xffffffffffff0000) >> 0x11),
                    (ushort)((uVar47 & 0xffffffffffff0000 | (ulong)uVar56 & 0xffffffffffffff00) >> 1
                            ) >> 1 | (ushort)(((char)uVar56 >> 0x1f & 1U) != 0) << 0xf) &
           0xffffffffffffff00 | 1;
  uVar56 = uVar36 - uVar9;
  uVar54 = (uint)uVar59 | 0x1000000 | (uint)(uVar38 >> 1);
  if ((short)uVar56 < 0) {
    uVar54 = (uint)uVar56 | 0xeaac0000;
  }
  iVar58 = uVar53 * 2 + 0x1aff515c;
  lVar48 = (long)(uVar40 | uVar46 >> 0x20 & 0xffffffffffff0000 |
                 (ulong)CONCAT11((byte)(uVar46 >> 0x28) ^ bVar15,(char)(uVar46 >> 0x20))) >> 1;
  uVar38 = (ushort)iVar58;
  if ((uVar46 & 0x100000000) == 0) {
    uVar42 = uVar60 & 0xffffffffffff0000 | (ulong)uVar38;
  }
  uVar31 = (((uVar8 * 2 + 0x68b7) - (ushort)CARRY1((byte)uVar39,bVar7)) * 2 | 1) ^
           1 << (uVar9 & 0xf);
  uVar8 = (ushort)(byte)((byte)iVar58 ^ (byte)uVar31);
  uVar38 = (uVar38 & 0xff00 | uVar8) >> 7 | uVar8 << 9;
  uVar20 = ((uint)uVar47 & 0xffff0000 | (uint)(ushort)-(short)uVar47) + 0x33923609;
  uVar8 = (short)uVar9 >> 0xf;
  uVar59 = (ulong)((uVar37 & 0x7fff0000) << 1 | (uint)CONCAT11(0xff,bVar15)) << 1;
  uVar53 = (uint)(0xf8fb < uVar38);
  uVar39 = uVar11 + 0xc14cc6fb + uVar53;
  bVar7 = (char)(uVar9 + 0x7701) * (char)((ulong)CONCAT22(uVar8,uVar9 + 0x7701) >> 8);
  bVar7 = bVar7 ^ (bVar7 == (byte)uVar42) * (bVar7 & (byte)uVar42);
  bVar15 = (byte)((ulong)lVar48 >> 8);
  cVar22 = bVar15 + (byte)uVar56;
  bVar16 = (byte)lVar48;
  bVar15 = (cVar22 < '\0') << 7 | (cVar22 == '\0') << 6 |
           (((uVar11 & 0xfffffff) + 0x14cc6fb + uVar53 & 0x10000000) != 0) << 4 | bVar62 << 2 | 2U |
           CARRY1(bVar15,(byte)uVar56);
  uVar33 = (uint)uVar31 << 0x1e;
  uVar31 = 0 << (bVar16 & 0x1f);
  lVar48 = uVar42 << 1;
  bVar29 = (char)uVar31 << (bVar16 & 0x1f);
  bVar21 = bVar29 ^ (bVar7 == bVar29) * (bVar29 ^ (byte)lVar48);
  uVar42 = (ulong)(uint)((int)uVar26 << 0x15) << 0xb | (ulong)uVar31 & 0xffffffffffffff00 |
           (ulong)bVar21;
  uVar53 = (int)CONCAT11(bVar15,bVar7 ^ (bVar7 == bVar29) * (bVar7 & bVar21)) * (int)(short)uVar20;
  uVar56 = (ushort)(CONCAT22(uVar8,CONCAT11(bVar15,bVar7)) >> 0xc) ^
           (ushort)(1 << ((ulong)((uint)uVar8 << 0x10 | uVar53 & 0xffff) & 0x3f));
  uVar11 = ((uint)lVar48 & 0xffff0000 | (uint)(ushort)((short)lVar48 - (uVar38 + 0x704))) >> 1;
  bVar7 = ((byte)((char)bVar16 >> 7) >> 2 ^ 0x87) & 0xf;
  bVar15 = (byte)(uVar56 << bVar7) | (byte)(uVar56 >> 0x10 - bVar7);
  bVar7 = (byte)(uVar53 & 0xffff);
  bVar16 = bVar15 ^ (bVar7 == bVar15) * bVar15;
  uVar60 = 0x3fffffffffffffff;
  auVar5 = ZEXT816((ulong)uVar11 | 0xc000000000000000);
  auVar3 = ZEXT216((ushort)(short)(char)(uVar53 >> 0x10)) << 0x40 |
           ZEXT416((uint)uVar8 << 0x10 | uVar53 & 0xff00 |
                   (uint)(byte)(bVar7 ^ (bVar7 == bVar15) * (bVar7 & bVar16)));
  auVar4 = auVar3 / auVar5;
  sVar10 = (short)(uVar20 >> 1);
  uVar8 = ~((ushort)uVar54 & 0xff00 | (ushort)((byte)((char)uVar54 + -0x65 + (uVar36 < uVar9)) >> 1)
           );
  uVar8 = uVar8 >> 6 | uVar8 << 10;
  bVar62 = (auVar4 & (undefined  [16])0x400) != (undefined  [16])0x0;
  uVar49 = (uint)bVar16 << 0x1f;
  uVar25 = uVar59 & 0xffffffff00000000 |
           (ulong)((uint)uVar59 & 0xffff0000 |
                  (uint)CONCAT11((byte)(uVar59 >> 8) >> 1 |
                                 (((uVar25 & 0xffffffffffffff00 | (ulong)bVar14) >>
                                   ((ulong)(uVar9 & 0xff) & 0x3f) & 1) != 0) << 7,(char)uVar59));
  uVar53 = uVar49 | 0xce;
  iVar58 = (int)CONCAT62(SUB166(auVar3 % auVar5 >> 0x10,0),SUB162(auVar4,0) >> 0xf);
  uVar20 = iVar58 << 1;
  uVar56 = sVar10 << 1 | (ushort)(iVar58 < 0);
  uVar59 = (ulong)(sVar10 < 0);
  lVar48 = uVar25 - 0x3669410a;
  uVar47 = lVar48 + uVar59;
  cVar22 = (char)((ulong)SUB164(auVar4,0) >> 8);
  bVar14 = (char)uVar47 - cVar22;
  uVar46 = (ulong)(((uint)((long)uVar40 >> 0x21) >> 0xb) * 0x63440000) |
           (ulong)((short)uVar39 != -0x5f78);
  if (bVar14 == 0 || (SBORROW1((char)uVar47,cVar22) != false) != (char)bVar14 < '\0') {
    uVar46 = uVar42;
  }
  if (bVar62) {
    uVar60 = (ulong)uVar31 & 0xff00 | (ulong)bVar21 | 0x3fffffffffff0000;
  }
  bVar7 = SUB161(auVar4,0);
  uVar39 = ~(uint)(((ulong)uVar11 & 0xffffffffffff0000 | 0xc000000000000000 |
                   (ulong)((ushort)uVar11 & 0xbfff)) >> 7) << (bVar7 & 0x1f) |
           (uVar39 & 0xffffff00 |
           (uint)((SCARRY8(uVar25,-0x3669410a) != SCARRY8(lVar48,uVar59)) != (long)uVar47 < 0)) >>
           0x20 - (bVar7 & 0x1f);
  uVar11 = 0;
  if (uVar33 != 0) {
    while ((uVar33 >> uVar11 & 1) == 0) {
      uVar11 = uVar11 + 1;
    }
  }
  uVar25 = (ulong)(uVar53 * 0x268c6ed9) + (ulong)uVar39;
  uVar40 = CONCAT62((uint6)(ushort)(uVar11 >> 0x10),0xe3d7);
  uVar59 = (uVar42 & 0xffffffffd00be798) >> 3;
  uVar42 = uVar60 ^ (ulong)(uVar25 == uVar60) *
                    (uVar60 ^ (uVar20 & 0xffffff00 | (uint)(byte)((char)uVar20 + 0x5f)));
  uVar9 = (ushort)uVar59 >> (bVar7 & 0x1f);
  if (((uVar25 ^ (ulong)(uVar25 == uVar60) * (uVar25 & uVar42)) & 1) == 0) {
    uVar40 = (ulong)(uVar11 & 0xffff0000 | (uint)uVar9);
  }
  uVar25 = (ulong)((ushort)((ushort)uVar47 & 0xff00 | (ushort)bVar14) != 0) << 0x20 |
           uVar42 & 0xffffffff;
  uVar59 = (uVar46 & 0xffff) + (uVar59 & 0xffffffffffff0000 | (ulong)uVar8 << 0x3d | (ulong)uVar9);
  if (!bVar62) {
    uVar59 = uVar46;
  }
  uVar6 = SUB162(auVar4 >> 0x10,0);
  uVar60 = (ulong)CONCAT22(uVar6,CONCAT11(cVar22,bVar7));
  uVar11 = (uint)(ushort)uVar59 *
           (((uint)(uVar25 >> (bVar7 & 0x1f)) | (uint)(uVar25 << 0x21 - (bVar7 & 0x1f))) & 0xffff);
  uVar33 = ~((uint)(uVar40 >> (bVar7 & 0x3f)) | (uint)(uVar40 << 0x40 - (bVar7 & 0x3f)));
  auVar5 = ZEXT816(uVar47 & 0xffffffffffff0000 | 0xc000000000000000);
  auVar3 = ZEXT1216(CONCAT48(uVar20 & 0xffff0000 | uVar11 >> 0x10,
                             uVar59 & 0xffffffffffff0000 | (ulong)(ushort)uVar11)) &
           (undefined  [16])0xffffffffffffffff;
  auVar4 = auVar3 % auVar5;
  uVar13 = SUB166(auVar3 / auVar5 >> 0x10,0) >> 0x13;
  cVar22 = (char)uVar40;
  uVar59 = (ulong)uVar33 & 0xffff;
  uVar8 = -uVar8;
  uVar9 = uVar56 + 0x3e35 & 0xff |
          (ushort)(byte)((char)((ulong)(ushort)(uVar56 + 0x3e35) >> 8) >> (bVar7 & 0x1f)) << 8;
  uVar11 = (uint)(uVar47 & 0xffffffffffff0000);
  bVar14 = (byte)uVar8 ^ SUB161(auVar4,0);
  uVar54 = uVar54 & 0xffff0000 | (uint)uVar8 & 0xffffff00 | (uint)bVar14;
  if (bVar14 != 0) {
    uVar39 = (int)(short)uVar40;
  }
  uVar45 = (uVar11 | uVar9) + (uint)uVar56 * 8;
  uVar42 = uVar60 & 0xffffffffffff0a0f;
  sVar17 = (sbyte)uVar42;
  uVar8 = (ushort)uVar59;
  uVar36 = (short)uVar39 << sVar17 | uVar8 >> 0x10 - sVar17;
  uVar38 = uVar36 >> 0xf | uVar36 << 1;
  uVar25 = (ulong)uVar13 & 0xffffffffffff0000 | 0xffffffffe0000000 |
           (ulong)(ushort)((ushort)uVar13 ^ 1 << ((short)cVar22 & 0xfU)) | 1 << (uVar60 & 0xf);
  uVar37 = (uint)uVar46 ^ ((uint)uVar59 | 0xffff0000);
  uVar36 = (short)((ushort)((uVar12 << bVar23) >> 0x10) | (ushort)(uVar27 >> 0x10)) >> 0xf;
  uVar18 = uVar45 + 0xe2a1e1db;
  uVar20 = (uint)uVar56 * 2 ^ uVar54;
  if ((int)uVar20 < 0) {
    uVar53 = uVar49 | uVar38;
  }
  uVar49 = (((int)(short)uVar40 >> sVar17) - uVar37) - 1;
  uVar12 = (long)(ulong)(uVar49 >> 0x1a | uVar49 * 0x40) >> sVar17;
  uVar49 = (uint)(ushort)(uVar9 << 2 | uVar36 >> 0xe);
  uVar44 = (uVar11 | uVar49) ^ 1 << (uVar49 & 0x1f);
  uVar31 = (short)uVar42 - 0x87a;
  lVar48 = (uVar25 & 0xffffffff) *
           (CONCAT62(SUB166(auVar4 >> 0x10,0),(short)uVar25 >> 0xf) & 0xffffffff);
  uVar49 = (uint)lVar48 ^ 9;
  iVar58 = (int)((ulong)lVar48 >> 0x20);
  uVar45 = (uVar33 | 1 << (uVar45 & 0x1f)) + iVar58 + 1;
  uVar11 = uVar54 * 0xdf113cd - uVar45;
  uVar54 = uVar49 - uVar20;
  uVar30 = CONCAT11(uVar49 < uVar20 || uVar54 == 0,(char)uVar44) | 1 << (uVar31 & 0xf);
  uVar56 = (ushort)uVar12;
  cVar28 = (char)uVar30;
  bVar15 = (char)uVar38 - cVar28;
  bVar7 = (byte)((ulong)(uVar54 & 0xffff0000 | (uint)uVar56) >> 8);
  bVar23 = (byte)(((ulong)uVar38 & 0xffffffffffffff00) >> 8);
  bVar14 = bVar7 + bVar23;
  bVar23 = (CARRY1(bVar7,bVar23) || 0xfe < bVar14) | cVar28 << 1;
  uVar33 = iVar58 << 1;
  uVar49 = uVar33 | lVar48 < 0;
  bVar7 = (bVar15 & 0x1f) % 9;
  cVar28 = (char)((ulong)uVar49 >> 8);
  uVar60 = (ulong)(uVar20 & 0xffff0000 | uVar54 & 0xff00 | (uint)(byte)((char)uVar54 + 0x33)) |
           0x2c035e0ddffa0e74;
  uVar12 = uVar12 & 0xffff0000;
  uVar25 = uVar12 >> 0x14;
  uVar20 = (uint)((uVar12 | (ushort)uVar54) << 0xd);
  uVar12 = (ulong)bVar15 & 0xffffffffffffff0f;
  sVar17 = (sbyte)uVar12;
  uVar57 = (ushort)uVar37;
  uVar32 = (ushort)uVar45 >> sVar17 | uVar57 << 0x10 - sVar17;
  lVar35 = (ulong)~CONCAT31((undefined3)(cVar22 >> 7),
                            (cVar22 + 'v') -
                            (((ushort)((ulong)lVar48 >> 0x20) >> (uVar36 & 0xf) & 1) != 0)) -
           0x9b86bbb1;
  uVar36 = ((ushort)((ulong)uVar38 & 0xffffffffffffff00) | (ushort)uVar12) >> sVar17;
  uVar12 = CONCAT44(uVar33 & 0xffff0000 |
                    (uint)CONCAT11((byte)(CONCAT11(lVar48 < 0,cVar28) >> bVar7) |
                                   cVar28 << 9 - bVar7,(char)uVar49),
                    uVar54 & 0xffff0000 |
                    (uint)(ushort)(uVar56 & 0xff | (ushort)(byte)(bVar14 + 1) << 8)) &
           0x3fffffffffffffff;
  uVar46 = uVar12 / (ulong)(uVar11 | 0xc0000000);
  uVar56 = (ushort)uVar46;
  uVar9 = uVar36 ^ (ushort)(uVar56 == uVar36) * (uVar36 ^ uVar57);
  iVar58 = CONCAT22(uVar6,uVar9);
  uVar9 = uVar56 ^ (ushort)(uVar56 == uVar36) * (uVar56 & uVar9);
  uVar46 = uVar46 & 0xffff0000;
  cVar28 = (char)uVar25;
  cVar22 = (char)uVar11 - cVar28;
  bVar7 = cVar22 - (uVar56 < uVar36);
  cVar55 = (char)uVar60;
  bVar14 = (char)uVar9 + cVar55 + 1;
  uVar8 = ((uVar8 ^ (uVar8 >> 10 & 1) << 10) & 0xff00 | (ushort)(byte)((char)uVar59 + (char)uVar31))
          + 0x3f3d;
  uVar40 = (ulong)uVar8 | 0x3fffffffffff0000;
  uVar59 = uVar12 % (ulong)(uVar11 | 0xc0000000) - 0xca4e9f27 & 0xffffffff;
  uVar12 = (uVar60 & 0xffffffffffffff00 | (ulong)(byte)(cVar55 + bVar23 + ((ushort)uVar53 <= uVar8))
           ) - (uVar46 | (ulong)uVar9 & 0xffffffffffffff00 | (ulong)bVar14);
  uVar33 = uVar11 & 0xff00 | (uint)bVar7;
  uVar54 = uVar20 & 0xffff0000 | uVar33;
  uVar59 = (uVar46 | CONCAT11(SCARRY8(uVar40,1),bVar14)) ^
           ((ulong)((uint)(uVar59 << 7) | (uint)(uVar59 >> 0x1a)) | 0xffffffff9ab22a86);
  if ((long)uVar59 < 0) {
    uVar59 = (ulong)uVar54;
  }
  uVar34 = (uVar45 & 0xffff0000 | (uint)uVar32) >> 1;
  sVar10 = (short)uVar18;
  uVar8 = sVar10 << 1 | (ushort)(sVar10 < 0);
  uVar46 = (ulong)(uVar18 & 0xffff0000 | (uint)uVar8);
  auVar5 = ZEXT816((uVar59 & 0xffffffffffff0000 |
                   (ulong)(ushort)((short)uVar59 << 1 | (ushort)((short)uVar59 < 0))) * uVar46) *
           ZEXT816(uVar40 + 1);
  uVar59 = SUB168(auVar5 >> 0x40,0);
  lVar48 = (uVar59 - 0xa31e58) - (ulong)(uVar59 != 0);
  uVar49 = ~((int)uVar40 + 0x7fe98c09U) + iVar58 * -0x80;
  if (-1 < lVar48) {
    uVar49 = uVar34;
  }
  uVar18 = (uint)lVar48;
  uVar60 = SUB168(auVar5,0) << 1;
  uVar38 = (ushort)uVar60 | (ushort)(uVar18 < 0x39ce552a);
  uVar27 = (ulong)(uVar18 + 0xc631aad6) + 1;
  sVar10 = uVar38 - uVar8;
  uVar9 = sVar10 - 1;
  uVar39 = (uVar39 & 0xffff0000 | (uint)uVar31 | (uint)lVar35) & 0xffffff00 |
           (uint)(uVar9 == 0 || (SBORROW2(uVar38,uVar8) != SBORROW2(sVar10,1)) != (short)uVar9 < 0);
  uVar42 = (ulong)-uVar39;
  uVar8 = (ushort)uVar34;
  if (uVar39 == 0) {
    uVar9 = uVar8;
  }
  uVar31 = CONCAT11((char)(uVar27 >> 8) + -1,(char)uVar27);
  uVar38 = 0xf;
  if (uVar31 != 0) {
    while (uVar31 >> uVar38 == 0) {
      uVar38 = uVar38 - 1;
    }
  }
  uVar27 = uVar27 & 0xffffffffffff0000 | (ulong)uVar31;
  if ((ushort)-uVar8 == 0 || 0 < (short)uVar8) {
    uVar27 = uVar42;
  }
  return CONCAT88(*(undefined8 *)
                   ((((ulong)&stack0xffffffffffffff90 ^ 1) & 0xffffffff00000000 |
                    (ulong)(((uint)((ulong)&stack0xffffffffffffff90 ^ 1) & ~(1 << (uVar41 & 0x1f)))
                           - 1)) + 0x58),
                  (uVar60 & 0xffffffffffff0000 | (ulong)uVar9) +
                  (uVar47 & 0xffffffff00000000 | 0xc000000000000000 |
                   (ulong)uVar44 & 0xffffffffffff0000 | (ulong)uVar30 & 0xffffffffffffff00 |
                  (ulong)bVar23) + ((long)(ulong)(uint)(iVar58 * 0x80) >> 1) + uVar27 +
                  (ulong)CONCAT22((ushort)((uVar45 & 0xffff0000) >> 0x11),-uVar8) +
                  ((ulong)uVar53 & 0xffffffffffff0000 | (ulong)uVar38) +
                  ((ulong)(uVar11 & 0xffff0000 | 0xc0000000 |
                          (uint)uVar25 & 0xffffff00 | uVar20 & 0xffff |
                          (uint)(bVar7 == 0 ||
                                (SBORROW1((char)uVar11,cVar28) != SBORROW1(cVar22,uVar56 < uVar36))
                                != (char)bVar7 < '\0')) | 0x4a9ed2b7) + uVar40 + 1 + lVar35 +
                  ((ulong)uVar49 & 0xffffffffffff0000 |
                  (ulong)(ushort)((short)uVar49 + (short)uVar33 +
                                 (ushort)(uVar59 < 0xa31e58 ||
                                         uVar59 - 0xa31e58 < (ulong)(uVar59 != 0)))) + uVar42 +
                  (ulong)(uVar54 >> 4 | (uint)bVar7 << 0x1c) +
                  (uVar12 & 0xffffffffffffff00 | (ulong)(byte)~(byte)uVar12) +
                  (ulong)(uVar37 & 0xffff0000 |
                         (uint)(ushort)(uVar57 << 0xe |
                                       (ushort)(CONCAT12((uVar32 & 1) != 0,uVar57) >> 3))) + uVar46
                  + 0x3df168a56bd48c65);
}



// WARNING: Removing unreachable block (ram,0x00403d87)
// WARNING: Removing unreachable block (ram,0x00403665)
// WARNING: Removing unreachable block (ram,0x00403386)
// WARNING: Removing unreachable block (ram,0x0040388d)
// WARNING: Removing unreachable block (ram,0x00403eff)
// WARNING: Removing unreachable block (ram,0x004035a5)

undefined  [16] log_size_10_var_002(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  uint5 uVar5;
  uint7 uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar14;
  short sVar9;
  short sVar10;
  ushort uVar11;
  uint uVar12;
  char cVar15;
  ulong uVar13;
  sbyte sVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  ushort uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  byte bVar24;
  bool bVar25;
  ushort uVar26;
  int iVar27;
  ushort uVar28;
  ushort uVar29;
  uint uVar30;
  byte bVar32;
  uint uVar31;
  uint6 uVar33;
  uint uVar34;
  ulong uVar35;
  char cVar36;
  ushort uVar37;
  uint uVar38;
  uint uVar39;
  long lVar40;
  ulong uVar41;
  uint uVar42;
  ushort uVar43;
  ulong uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  int iVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  uint uVar52;
  ulong uVar53;
  ushort uVar54;
  ushort uVar55;
  ulong uVar56;
  ushort uVar57;
  ulong uVar58;
  bool bVar59;
  bool in_PF;
  bool bVar60;
  
  uVar46 = 0x86e29eb7;
  sVar9 = 0xf;
  while (0x78baU >> sVar9 == 0) {
    sVar9 = sVar9 + -1;
  }
  if (in_PF) {
    uVar46 = 0x86e2b947;
  }
  uVar21 = CONCAT62(0xe4a75a9129fc,sVar9) + 0x560eb6888461bbb2;
  bVar24 = (byte)uVar21 & 0x1f;
  uVar38 = 0xddbbc762U >> bVar24 | -0x77febe00 << 0x20 - bVar24;
  uVar20 = ((ushort)uVar21 & 0xff00 | 0x71) ^ 0x40;
  sVar16 = (sbyte)((ulong)uVar20 & 0xffffffffffffff0f);
  uVar28 = CONCAT11((byte)uVar21,0x91 >> ((byte)uVar20 & 0x1f)) << sVar16 | 0x2a0bU >> 0x10 - sVar16
  ;
  uVar21 = uVar21 & 0xffffffffffff0000 | (ulong)uVar20 & 0xffffffffffffff0f | 0x908d23d;
  lVar40 = (ulong)(uVar38 & 0xffff0000 | (uint)(ushort)(~((ushort)(uVar38 >> 1) & 0x7fff) - uVar20))
           << 1;
  bVar24 = (byte)uVar21;
  bVar19 = (byte)lVar40;
  uVar30 = (uint)lVar40 & 0xffffff00 | (uint)(byte)(bVar19 + 5);
  uVar12 = (uint)(bVar19 < 0xfb);
  sVar9 = 0;
  if ((ushort)uVar46 != 0) {
    while (((ushort)uVar46 >> sVar9 & 1) == 0) {
      sVar9 = sVar9 + 1;
    }
  }
  uVar42 = 0;
  if (uVar30 != 0) {
    while ((uVar30 >> uVar42 & 1) == 0) {
      uVar42 = uVar42 + 1;
    }
  }
  uVar49 = (long)(int)(uVar42 & 0xffff0000 |
                      (uint)CONCAT11((((byte)(uVar21 >> 8) >> 1) - 0x21) - (bVar19 < 0xfb),
                                     (char)uVar42)) * -0x2d52;
  uVar30 = ((uint)uVar28 & 0xffffff00 | 0x5f180000 | (uint)(byte)((char)uVar28 << (bVar24 & 0x1f)))
           - 1;
  uVar53 = (ulong)((uVar12 | 0x1257726e) ^ uVar12);
  if ((int)uVar30 < 0) {
    uVar53 = (ulong)(CONCAT18((uVar38 & 1) != 0,0x3da8d7d5ad50dd86) >> 4) | 0xc000000000000000;
  }
  uVar42 = (uint)CONCAT62(0xb918bb32bdbd,sVar9);
  uVar45 = ((uint)(CONCAT18(1,0x60a038c8c3a97765) >> 0x38) | 0x52eeca00) - uVar42;
  uVar47 = 0xffffffff;
  uVar38 = SUB164(((CONCAT88(uVar49 >> 0x20,uVar49) & (undefined  [16])0xffffffffffffffff |
                   (undefined  [16])0xffff00000000) & (undefined  [16])0xffffffffffffffff) /
                  ZEXT816(uVar53 | 0xc000000000000000),0);
  uVar34 = uVar42 ^ (uint)(uVar38 == uVar42) * (uVar42 ^ 0xffffffff);
  uVar12 = uVar38 ^ (uint)(uVar38 == uVar42) * (uVar38 & uVar34);
  if ((int)uVar38 <= (int)uVar42) {
    uVar47 = (uint)uVar53 & 0xffff | 0xffff0000;
  }
  bVar14 = (byte)uVar46;
  bVar19 = bVar14 + bVar19 + 5;
  bVar17 = (byte)uVar12;
  bVar32 = (byte)((ulong)(uVar30 & 0xffffff00) >> 8) >> (bVar24 & 0x1f);
  uVar52 = (uVar46 & 0xffffff00 | (uint)bVar19) + 0xd1528c8f;
  uVar30 = uVar34 & 0xffff0000 |
           (uint)(ushort)((ushort)uVar34 >> (bVar24 & 0xf) |
                         ((ushort)bVar32 << 8) << 0x10 - (bVar24 & 0xf));
  lVar40 = (long)(int)(uVar12 & 0xffffff00 |
                      (uint)(byte)(bVar17 ^ (bVar17 == bVar14) *
                                            (bVar17 & (bVar14 ^ (bVar17 == bVar14) *
                                                                (bVar14 ^ bVar19))))) *
           (long)(int)((uint)(1 << ((ulong)uVar34 & 0x3f)) | 0x950e2939);
  uVar12 = (uint)((ulong)lVar40 >> 0x20);
  uVar20 = ((ushort)uVar45 & 0x5ca8) << 2 | (ushort)(uVar12 != 0 && uVar12 != 0xffffffff);
  uVar46 = (int)(short)(char)lVar40 * (int)(short)uVar20;
  uVar38 = (uVar12 | 0x56305fe1) & 0xffff0000;
  uVar42 = (uint)lVar40 & 0xffff0000 | uVar46 & 0xffff;
  uVar39 = uVar30 + 0x17 + uVar42 * 4;
  uVar45 = (uVar45 & 0xffff0000 | (uint)uVar20) * -0x3cb0d6ca;
  uVar12 = (int)(short)((short)uVar52 + -0x256d) * 0x569e;
  sVar9 = (short)(uVar12 >> 0x10);
  if (sVar9 != 0 && sVar9 != -1) {
    uVar45 = uVar45 & 0xffff0000 | 0x3450;
  }
  bVar24 = ((char)(uVar46 >> 0x10) + '\x01') * '\x02';
  uVar46 = uVar45 ^ (uint)(uVar42 == uVar45) * (uVar45 ^ uVar30);
  uVar30 = uVar46 * 0x3cfdaef8;
  lVar40 = ((ulong)(uVar42 ^ (uint)(uVar42 == uVar45) * (uVar42 & uVar46)) & 0xffffffffffff00ff) <<
           3;
  if (!in_PF) {
    lVar40 = 0x72ed;
  }
  uVar42 = (uVar47 | 0xa4077144) + ((uint)(uVar21 & 0xffffffffffff0000) | (uint)bVar24 << 8);
  lVar40 = lVar40 + 0x5c85e3be;
  bVar17 = (byte)lVar40;
  uVar49 = (ulong)((uVar30 & 0xffff0000 | (uint)(ushort)((short)uVar30 + (short)lVar40)) >>
                  (bVar17 & 0x3f)) |
           (ulong)(uVar52 & 0xffff0000 | uVar12 & 0xffff) << 0x40 - (bVar17 & 0x3f);
  uVar12 = (uVar47 | 0xa4077144) * 0x78f54c3c | 1 << (uVar42 & 0x1f);
  bVar14 = (byte)((ulong)lVar40 >> 8);
  bVar19 = bVar24 + bVar14;
  uVar20 = (ushort)uVar39 >> 1;
  uVar46 = 0;
  if (uVar42 != 0) {
    while ((uVar42 >> uVar46 & 1) == 0) {
      uVar46 = uVar46 + 1;
    }
  }
  uVar35 = (ulong)(uVar46 & 0xffff0000 | (uint)(ushort)((ushort)uVar46 | 0xc0));
  uVar22 = uVar35 & 0xffffffffffff3fff;
  uVar28 = (ushort)(byte)uVar22;
  uVar26 = (ushort)uVar22;
  uVar29 = uVar26 / uVar28 & 0xff;
  uVar28 = uVar26 % uVar28 << 8;
  bVar60 = (uVar28 & 0x400) != 0;
  uVar21 = ((uVar21 & 0xffffffffffff0000 | (ulong)CONCAT11(bVar19 + 1,bVar17)) - 0x7ba442ec) +
           (ulong)(uVar39 & 0xffff0000 | (uint)(uVar20 | 0x8000)) * 4;
  bVar17 = bVar17 | (byte)(1 << (uVar21 & 0x3f));
  bVar18 = bVar17 | 0xc0;
  uVar26 = (ushort)(byte)(bVar24 + bVar32) + 0x1119;
  uVar57 = (ushort)((uVar34 & 0xffff0000) >> 0x18);
  uVar11 = (ushort)uVar49;
  uVar46 = ((uint)(ushort)(((ushort)(byte)(0x2d - (CARRY1(bVar24,bVar14) || 0xfe < bVar19)) | 0x5c00
                           ) - 1) | 0x31af0000) >> (bVar17 & 0x1f);
  if (uVar11 < uVar57) {
    uVar46 = (uint)uVar21 & 0xffff0000 | 0xd;
  }
  bVar24 = (byte)uVar26 & 7;
  bVar19 = (byte)((ulong)(ushort)(((short)uVar12 +
                                   (uVar20 & 0xff00 | 0x8000 | (ushort)(byte)~(byte)uVar20) + 1 &
                                   0xff00 | uVar26 & 0xff) << 6) >> 8);
  uVar47 = (((uint)uVar49 & 0xffff0000 | (uint)(ushort)(uVar11 - uVar57)) ^ (uint)(uVar26 & 0xff)) +
           1;
  uVar12 = (uint)(ushort)((uVar26 & 0xff |
                          (ushort)(byte)(bVar19 << bVar24 | bVar19 >> 8 - bVar24) << 8) <<
                         ((byte)uVar26 & 0x1f)) -
           ((uint)CONCAT62((int6)(short)(uVar35 >> 0x10),
                           CONCAT11(((uVar47 & 0x2f60f2eb) == 0) << 6 | bVar60 << 2,
                                    (char)((uVar29 | ((ushort)(byte)((byte)((ulong)(uVar29 | uVar28)
                                                                           >> 8) |
                                                                    (byte)((ulong)uVar12 >> 8)) &
                                                     0x3f) << 8) / (ushort)bVar18) + bVar18)) |
           0x200);
  bVar24 = (byte)uVar12;
  uVar21 = (ulong)(uVar46 << (bVar24 & 0x1f)) * 0x18ca7fe1;
  bVar19 = bVar24 & 0xf;
  uVar42 = (int)((ulong)((long)(int)(uVar42 & 0xfeffffff | 0xbec55c26) * 0x1d8a30a8) >> 0x10) <<
           0x10 | 0xcc8f;
  uVar20 = (ushort)((int)uVar42 < 0);
  uVar30 = (uint)(ushort)(0x7c86 - uVar20);
  uVar46 = uVar30 | 0x73930000;
  uVar42 = uVar42 << 1 |
           (uint)(((ulong)(((uint)((uint3)(((uint)(ushort)((uVar53 | 0xc000000000000000) << 1) << 1)
                                          >> 8) & 0xff) << 8 ^ 0x7a00) << 1) << 0x36 | 0xb0) <
                 (ulong)(uVar34 >> 0x19));
  if (SBORROW2(0x7c86,uVar20) == true) {
    uVar42 = uVar38;
  }
  uVar20 = CONCAT11(bVar24,0xff) & 0xfff;
  uVar49 = (ulong)uVar12 & 0xffffffffffffff00;
  uVar53 = (ulong)(byte)(bVar19 - 1) & 0xffffffffffffff0f;
  sVar16 = (sbyte)uVar53;
  uVar35 = uVar21 & 0xffffffffffff0000 | 0xcc1f;
  uVar12 = ((uint)uVar49 & 0xffff0000 | (uint)(ushort)(((ushort)uVar49 | (ushort)uVar53) + 0x3370))
           + 0x8b196991 + uVar46 * 8;
  uVar42 = (uint)(ushort)(0U >> sVar16 |
                         ((ushort)uVar42 ^ (ushort)(uVar42 == 0) * ((ushort)uVar42 ^ 0xcc8f)) <<
                         0x10 - sVar16) * 2;
  uVar49 = (ulong)(uVar12 & ~(1 << (uVar12 & 0x1f))) & 0xffffffffffffff0f;
  uVar53 = ~((uint)(ushort)((ushort)uVar21 >> bVar19 | 0 << 0x10 - bVar19) | 0xdd5f0000) - uVar35;
  sVar16 = (sbyte)uVar49;
  uVar38 = uVar38 * -0x61fea685 >> sVar16;
  uVar20 = uVar20 >> sVar16 | uVar20 << 0x10 - sVar16;
  uVar12 = 0;
  while ((0xffffffffU >> uVar12 & 1) == 0) {
    uVar12 = uVar12 + 1;
  }
  uVar22 = (ulong)(uVar42 < (uint)uVar49) << 0x20 | 0xb0;
  uVar34 = (uint)(uVar22 << sVar16) | (uint)(uVar22 >> 0x21 - sVar16);
  uVar22 = uVar49 << sVar16 | uVar53 >> 0x40 - sVar16;
  uVar38 = uVar38 & 0xffffff00 | (uint)(byte)((char)uVar38 << 1) | 0x67252a3;
  if (uVar38 != 0) {
    uVar22 = uVar22 & 0xffffffffffff0000 | (ulong)uVar20;
  }
  uVar28 = (short)uVar22 + 0x580e;
  uVar58 = (ulong)uVar12;
  if (bVar60) {
    uVar58 = 0;
  }
  uVar35 = (ulong)((uint)uVar35 & 0xf7ffffff);
  lVar23 = (uVar22 & 0xffffffffffff0000 | (ulong)uVar28 & 0xffffffffffffff00 |
           (ulong)(byte)-(char)uVar28) * -0x1e56bf24;
  lVar40 = (ulong)uVar20 * (ulong)uVar20;
  uVar45 = (uint)lVar23 & 0xffffff00 | (uint)(byte)lVar23;
  uVar12 = (uint)(ushort)((short)lVar23 * 0x1656) | 0x25b40000 | uVar42 - (uint)uVar49;
  iVar48 = uVar38 << 1;
  cVar15 = (char)uVar12;
  bVar24 = (byte)uVar34;
  uVar38 = (uint)CONCAT62((undefined6)(cVar15 >> 7),
                          CONCAT11((byte)(cVar15 >> 7) >> 1 | (bVar24 < 0x99) << 7,cVar15));
  sVar9 = (short)lVar40;
  uVar42 = (uint)lVar40;
  uVar39 = uVar45 ^ (uint)(uVar42 == uVar45) * (uVar45 ^ (uint)uVar58);
  if ((int)uVar42 <= (int)uVar45) {
    iVar48 = 0;
  }
  iVar27 = uVar38 * 0x8000;
  bVar19 = (byte)uVar39 & 0x1f;
  uVar53 = uVar53 * 2 | (ulong)(((long)cVar15 & 0x100U) != 0) | (ulong)uVar12;
  uVar46 = ((uint)CONCAT71((uint7)(uint3)((uint3)(uVar46 >> 8) & 0xffff00 |
                                         (uint3)(byte)((byte)(uVar30 >> 8) | 0x80)),0x71) & uVar38)
           * 2 - 1;
  uVar49 = (ulong)(iVar27 + uVar12 * 4) - (long)sVar9;
  uVar38 = 0 << ((byte)uVar49 & 0x1f);
  lVar23 = ((ulong)uVar34 & 0xffffffffffffff00 | (ulong)(byte)(bVar24 + 0x67)) << 1;
  lVar40 = 0;
  if (uVar38 != 0) {
    while ((uVar38 >> lVar40 & 1) == 0) {
      lVar40 = lVar40 + 1;
    }
  }
  uVar12 = (uint)uVar49 & ~(1 << ((iVar48 << bVar19 | uVar12 >> 0x20 - bVar19) & 0x1f));
  uVar22 = (ulong)uVar12;
  uVar13 = uVar49 & 0xffffffff00000000 | uVar22;
  bVar19 = (byte)uVar46;
  bVar24 = (byte)uVar12 & 0x3f;
  uVar56 = (ulong)(CONCAT18(bVar19 != 0,lVar23) >> bVar24) | lVar23 << 0x41 - bVar24;
  bVar24 = (byte)uVar12 & 7;
  uVar46 = uVar46 & 0xffffff00 | (uint)(byte)(bVar19 << bVar24 | bVar19 >> 8 - bVar24);
  auVar2 = ZEXT816(uVar21 & 0xffffffff00000000 | uVar35 | 0xc000000000000000);
  auVar3 = ZEXT1216(CONCAT48(iVar27,(ulong)(uVar42 ^ (uint)(uVar42 == uVar45) * (uVar42 & uVar39)))
                    | (undefined  [12])0x1) & (undefined  [16])0xffffffffffffffff;
  auVar4 = auVar3 / auVar2;
  uVar35 = uVar35 & 0x3f;
  uVar21 = 1 << uVar35;
  uVar41 = uVar46 ^ uVar21;
  uVar30 = SUB164((auVar3 % auVar2 >> 0x15) >> 8,0) << 8;
  uVar44 = CONCAT62((undefined6)(sVar9 >> 0xf),sVar9 + -1) << 0xd | uVar21 >> 0x33;
  uVar21 = CONCAT71(0x3fffffffffffff,SUB161(auVar4,0) + -1) + 1;
  if (bVar60) {
    uVar30 = uVar30 & 0xffff0000 | uVar38 & 0xffff | 0xab39;
  }
  uVar58 = (uVar58 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar58 + 0x95de)) * 0x37eb4574;
  uVar6 = (uint7)(uVar13 >> 8);
  bVar24 = (byte)((uVar49 & 0xffffffff00000000) >> 0x38);
  bVar14 = (byte)((ulong)uVar38 | 0xab39);
  uVar28 = (ushort)((ulong)uVar38 | 0xab39);
  uVar42 = (uint)uVar21 & 0xffff0000 | (uint)(uVar21 >> 0xe) & 3;
  uVar45 = (int)(((uint)uVar53 & 0xffff0000 | (uint)(ushort)((short)uVar53 + 1)) + 0xa9816f6) >>
           (bVar24 & 0x1f);
  bVar32 = (byte)uVar41 >> (bVar24 & 0x1f);
  uVar29 = (ushort)(((ulong)SUB167(auVar4 >> 8,0) & 0xff) << 8) & 0x3fff;
  uVar20 = (ushort)(byte)((byte)((ulong)((ushort)uVar30 & 0x7fff) >> 8) | 0xc0);
  uVar57 = (ushort)uVar58;
  uVar26 = ~((ushort)uVar45 >> (bVar24 & 0x1f));
  uVar21 = uVar49 >> 0x38 & 0xffffffffffffff0f;
  bVar17 = (byte)uVar21;
  uVar20 = (short)((uint)(ushort)(uVar29 / uVar20 & 0xff | uVar29 % uVar20 << 8) * (uint)uVar57 >>
                  0x10) << bVar17 | uVar26 >> 0x10 - bVar17;
  uVar34 = uVar42 + 1;
  uVar49 = 0;
  if ((int)uVar34 < 0) {
    uVar49 = (ulong)((uint)uVar56 & 0xfff70000);
  }
  uVar11 = (ushort)uVar56 & (ushort)uVar12 & 0xff00 | (ushort)!bVar60;
  uVar57 = uVar57 - (((ushort)uVar41 & 0xff00 | (ushort)bVar32) >> 1 |
                    (ushort)((bVar32 & 1) != 0) << 0xf);
  bVar32 = (char)uVar57 - 0x1d;
  uVar53 = (ulong)uVar57 & 0xffffffffffffff00;
  uVar12 = (uint)(((ulong)(ushort)((short)uVar47 + 0x200d) << 0x29 |
                  (ulong)(ushort)((ushort)(byte)(-bVar19 >> 1) |
                                 (ushort)((uVar46 >> uVar35 & 1) != 0) << 0xf)) + 1 >> 0x1a) &
           0xffff0000;
  uVar46 = (((uint)uVar44 & 0xffff0000 | (uint)(ushort)((short)uVar44 << (bVar24 & 0x1f))) & uVar42)
           + (uVar30 & 0xffff0000 | (uint)uVar20);
  iVar48 = (int)(short)((ushort)uVar53 | (ushort)bVar32) * 0x3702;
  sVar9 = (short)((uint)iVar48 >> 0x10);
  uVar29 = SUB162(auVar4 >> 0x10,0) >> 8 | (ushort)(((ulong)SUB166(auVar4 >> 0x10,0) << 0x10) >> 8);
  if (sVar9 != 0 && sVar9 != -1) {
    uVar29 = uVar26;
  }
  uVar37 = (ushort)iVar48 >> 1 | uVar26 << 0xf;
  uVar43 = uVar28 >> 0xb |
           (uVar28 & 0xff00 | (ushort)(byte)(bVar14 >> (bVar24 & 7) | bVar14 << 8 - (bVar24 & 7)))
           << 6;
  uVar30 = uVar30 & 0xffff0000 | (uint)(ushort)(uVar20 & 0xff | (ushort)bVar17 << 8);
  uVar21 = ((uVar21 | (ulong)((uVar6 & 0xff0000000000) >> 0x28 | (uVar6 & 0xff00000000) >> 0x18 |
                              (uVar6 & 0xff000000) >> 8 | (uint7)uVar13 & 0xff000000 |
                              (uint7)(((uVar22 & 0xff0000) << 0x18) >> 8) |
                              (uint7)(((uVar22 & 0xff00) << 0x28) >> 8) |
                             (uint7)((uVar22 << 0x38) >> 8)) << 8) - 0x2c83b7ff) -
           (ulong)((uVar49 >> 0x1c & 1) != 0);
  uVar47 = uVar30 + 0x27887c83;
  cVar15 = (char)((ulong)(uint)(int)(short)uVar29 >> 8);
  uVar30 = CONCAT22((short)uVar29 >> 0xf,
                    uVar29 & 0xff |
                    (ushort)(byte)(cVar15 << 3 | (byte)(CONCAT11(uVar30 < 0xd877837d,cVar15) >> 6))
                    << 8);
  uVar42 = SEXT14((char)(uVar29 & 0xff));
  bVar24 = (byte)uVar21;
  uVar35 = (ulong)uVar42 << (bVar24 & 0x3f) | (ulong)(uVar42 >> 0x40 - (bVar24 & 0x3f));
  uVar42 = (uint)(byte)((char)uVar43 >> (bVar24 & 0x1f));
  uVar58 = uVar58 & 0xffffffffffff0000 | uVar53 | (ulong)(bVar32 >> 1);
  uVar5 = CONCAT14(bVar32,uVar34 & 0xffff0000 | (uint)(ushort)((ushort)uVar34 >> 1 | 0x8000)) &
          0x1ffffffff;
  uVar34 = (uint)(uVar5 >> (bVar24 & 0x1f)) | (int)uVar5 << 0x21 - (bVar24 & 0x1f);
  bVar19 = (byte)(uVar21 >> 9);
  bVar24 = bVar19 << 1;
  bVar19 = bVar19 >> 7;
  uVar21 = uVar21 << 0x37 | uVar21 >> 9 & 0xffffffffffffff00 | (ulong)(bVar24 | bVar19);
  bVar19 = bVar24 & 0x3f | bVar19;
  uVar49 = uVar21 >> bVar19 | uVar21 << 0x40 - bVar19;
  uVar57 = (ushort)uVar49;
  uVar28 = uVar57 >> 1;
  uVar21 = (ulong)(ushort)(uVar57 << 0xf | uVar28);
  uVar49 = uVar49 & 0xffffffffffff0000 | uVar21;
  bVar24 = ~(byte)uVar47 << 3 | ~(byte)uVar47 >> 5;
  uVar22 = (ulong)uVar46 & 0xffffffdfffffff00 | (ulong)(uVar46 >> 1) & 0x7f;
  uVar39 = (int)(char)uVar20 + uVar30 + 1;
  bVar19 = (byte)((ulong)(uVar47 & 0xffffff00) >> 8);
  iVar48 = CONCAT22((short)uVar29 >> 0xf,uVar29 & 0xff | (ushort)bVar19 << 8);
  uVar30 = (uint)CONCAT11(!SCARRY1(bVar19,(char)((ulong)uVar30 >> 8)),bVar24);
  bVar19 = (byte)((uVar12 | (byte)(0xb9 - (sVar9 != 0 && sVar9 != -1))) >> 1);
  iVar27 = -0x27887c83;
  if (!CARRY1(bVar24,bVar19)) {
    iVar27 = iVar48;
  }
  uVar52 = iVar27 << 1 | uVar38 >> 0x1f;
  if (uVar52 == 0 || (iVar27 < 0 != (int)uVar52 < 0) != (int)uVar52 < 0) {
    uVar22 = (ulong)uVar46 & 0xffffffdfffff0000 | uVar21;
  }
  uVar12 = (uVar12 >> 1 | uVar30 & 0xff) << 1;
  uVar46 = uVar12 >> 0x1f;
  uVar31 = uVar46 | 0x57c62ac4;
  uVar13 = (ulong)(uint7)(int7)(int3)((uint)iVar48 >> 8) << 8;
  uVar20 = (ushort)uVar35;
  uVar8 = (uint)uVar35;
  uVar7 = uVar8 & 0xffff0000;
  uVar50 = (ulong)(uVar45 & 0xffff0000 | (uint)uVar26 & 0xffffff00 | (uint)(bVar32 >> 1)) |
           0x26e74a57;
  uVar56 = (ulong)(uVar46 | 0xd7c62ac4);
  uVar21 = (ulong)(uVar47 & 0x3fff0000 | uVar30 & 0xffffff00 | (uint)(byte)(bVar24 + bVar19)) <<
           0x20 | (ulong)uVar52 & 0xff | uVar13 & 0xffffffff;
  uVar13 = uVar22 & 0xffff |
           (ulong)((uint6)(uVar13 >> 0x10) & 0xffffffff0000 |
                  (uint6)(uVar21 / uVar56 >> 0x10) & 0xffff) << 0x10;
  uVar35 = (ulong)((uVar38 & 0xffff0000 | (uint)uVar43 & 0xffffff00 | uVar42) >> 5 | uVar42 << 0x1b)
  ;
  bVar24 = (byte)uVar28 & 0xf;
  uVar28 = uVar37 >> bVar24 | uVar37 << 0x10 - bVar24;
  bVar24 = ((byte)uVar31 ^ (byte)(1 << (uVar35 & 0x3f))) + 1;
  uVar51 = (ulong)((uint)uVar50 | uVar39 & 0xffffff00);
  uVar46 = uVar34 & 0xffffff00 | (uint)((char)uVar34 + bVar24 & bVar24);
  uVar44 = uVar49 ^ (ulong)(uVar13 == uVar49) * (uVar49 ^ uVar46);
  uVar13 = uVar13 ^ (ulong)(uVar13 == uVar49) * (uVar13 & uVar44);
  bVar25 = SUB81(uVar21 % uVar56,0);
  bVar24 = (byte)(uVar13 >> 8);
  bVar59 = CARRY1(bVar25,bVar24);
  if (bVar59 || (byte)(bVar25 + bVar24) == '\0') {
    uVar35 = uVar58;
  }
  uVar29 = (ushort)uVar13 + uVar11;
  uVar26 = uVar29 + (ushort)bVar59;
  if ((!CARRY2((ushort)uVar13,uVar11) && !CARRY2(uVar29,(ushort)bVar59)) && uVar26 != 0) {
    bVar25 = !bVar60;
  }
  uVar56 = (ulong)(uVar39 >> 0xe);
  sVar10 = (short)(char)((long)(uVar13 & 0xffffffffffff0000 | (ulong)uVar26) >> 0x24);
  uVar30 = (int)(short)(((uVar7 | (ushort)(uVar20 << 0xc | uVar20 >> 5)) >> 9) << 8) * -0xf7b;
  sVar9 = (short)(uVar30 >> 0x10);
  bVar24 = ((byte)uVar44 & 0x1f | 2) % 0x11;
  uVar54 = sVar10 << bVar24 | (ushort)(CONCAT12(sVar9 != 0 && sVar9 != -1,sVar10) >> 0x11 - bVar24);
  uVar21 = uVar56 + 0x4a71236c;
  uVar49 = (uVar22 + 0x52fe4e91) * 2;
  uVar20 = (short)uVar21 + uVar28;
  uVar21 = uVar21 & 0xffffffffffff0000;
  uVar22 = (ulong)(iVar27 << 1 & 0xffff0000U |
                   (uint)(ushort)((short)uVar52 + (short)uVar50) & 0xffffff00 | (uint)(byte)-bVar25)
           * -0x663592fa;
  bVar19 = (byte)uVar54 & (byte)(uVar53 >> 8);
  lVar40 = (ulong)(((uVar12 | iVar27 < 0) & ~(uint)(1 << ((ulong)uVar31 & 0x3f))) << 0x17 |
                   (uVar38 & 0xfe000000) >> 9 |
                  (uint)(ushort)(-(short)((uVar38 & 0xffff0000 | (uint)uVar43) >> 9) >>
                                ((byte)uVar54 & 0x1f))) << 1;
  bVar24 = (char)uVar22 + 0x35;
  uVar13 = uVar22 & 0xffffffffffffff00 | (ulong)bVar24;
  uVar43 = (ushort)uVar13;
  uVar11 = (ushort)lVar40;
  uVar22 = 0xffffffffffffffff >> (bVar19 & 0x3f);
  sVar10 = (short)((uVar30 & 0xffff | (uVar8 >> 0x11) << 0x10) >> 1) >> 1;
  uVar26 = (short)uVar58 * -0x6254;
  uVar37 = (short)((ushort)uVar49 | 1) >> 1;
  uVar57 = uVar26 & 0x3fff;
  uVar29 = (ushort)(byte)((byte)uVar22 | 0xc0);
  uVar53 = (ulong)(ushort)(uVar57 / uVar29 & 0xff | uVar57 % uVar29 << 8);
  lVar23 = (uVar41 & 0xffffffffffff0000 | (ulong)uVar28) * -0x495bf87c;
  uVar33 = (uint6)((short)uVar43 >> 0xf);
  uVar12 = ((uint)uVar13 & 0xffffff00 | (uint)(byte)(bVar24 ^ (byte)uVar28)) + 0x4f2eda5b;
  uVar57 = (uVar43 & 0xff |
           (ushort)(byte)((char)((ulong)(long)(short)uVar43 >> 8) + (char)(uVar53 >> 8)) << 8) + 1;
  uVar53 = ((ulong)CONCAT22((short)uVar11 >> 0xf,uVar26) & 0xffffffffffff0000 | uVar53) &
           (uVar21 | uVar20);
  uVar35 = (uVar35 * -0x799184df >> 1) - 1;
  cVar15 = (char)uVar35;
  bVar24 = cVar15 * '\x02';
  uVar29 = (((short)((((ushort)uVar49 | 1) + 0xec8a) -
                    (ushort)(0x3881 < uVar54 || 0xfffe < (ushort)(uVar54 + 0xc77e))) >>
            (bVar19 & 0x1f)) - ~(uVar54 + 0xc77f)) - (short)uVar46;
  uVar20 = (short)uVar20 >> 1;
  uVar30 = ((uint)uVar53 & 0xffffff00 | (uint)(byte)((byte)uVar53 >> 1 | 0x80)) ^
           ((uint)(uVar41 & 0xffffffffffff0000) | (uint)(ushort)((uVar28 >> 7 | uVar28 << 9) << 1))
           + 0x88ec1dd7;
  uVar41 = CONCAT62((uint6)((CONCAT18(0x77f2720 < uVar56 + 0x51f04a8d,uVar51) >> 5) >> 0x10) |
                    (uint6)((uVar51 << 0x3c) >> 0x10),uVar29 * 0x40 | uVar29 >> 0xb);
  uVar38 = (uVar12 & 0xffe0 | 0x4000) >> 5;
  uVar46 = uVar12 & 0xffff0000 | uVar38;
  bVar19 = (byte)(uVar11 >> 5);
  uVar42 = (uint)lVar40 & 0xffff0000 | (uint)(ushort)(uVar11 >> 5 | uVar11 << 0xb) & 0xffffff00 |
           (uint)(byte)(bVar19 + (char)uVar30);
  uVar13 = uVar49 & 0xffffffffffff0000 | (ulong)uVar37 & 0xffffffffffffff00 | (ulong)bVar24;
  uVar58 = uVar35 & 0xffffffffffffff00 | (ulong)(byte)(bVar24 + (char)uVar37);
  bVar24 = (byte)lVar23 & 0x1f;
  uVar53 = (ulong)(uVar38 << 0x1f | 0x7fffffff);
  sVar9 = SUB162((ZEXT816(uVar22 & 0x3fffffffffffff00 | (ulong)(0 < (int)uVar30)) << 0x40 |
                 ZEXT416(uVar30 & 0xffffff00 | (uint)bVar19)) / ZEXT816(uVar41 | 0xc000000000000000)
                 ,0);
  uVar35 = uVar53 + 0x1aec4d3;
  uVar28 = ~(uVar54 + 0xc77f) << 1 | (ushort)(cVar15 < '\0');
  if (uVar35 != 0 && SCARRY8(uVar53,0x1aec4d2) == SCARRY8(uVar53 + 0x1aec4d2,1)) {
    uVar28 = (ushort)uVar38;
  }
  bVar17 = ((char)uVar20 + '-') -
           (0xfffffffffe513b2d < uVar53 || 0xfffffffffffffffe < uVar53 + 0x1aec4d2);
  uVar22 = (ulong)bVar17;
  uVar34 = (int)lVar23 - 1;
  uVar29 = uVar57 & 0xff;
  uVar26 = (ushort)(byte)((char)(uVar57 >> 8) << 1) << 8;
  uVar44 = CONCAT62(uVar33,uVar29 | uVar26);
  uVar53 = ((ulong)(uint)(int)sVar9 & 0xffffffffffff0000 |
           (ulong)(ushort)((sVar9 - (short)uVar35 & 0xffU) * (ushort)bVar17)) *
           (uVar35 & 0xffff0000 | uVar22);
  uVar47 = (uint)(uVar53 >> 0x20);
  bVar19 = (byte)uVar53;
  uVar38 = uVar46 >> 1;
  lVar40 = ((uVar21 | (ulong)uVar20 & 0xffffffffffffff00 | uVar22) >> 1) - 0x46f61354;
  uVar30 = (uint)CONCAT62(uVar33,uVar57);
  if (-1 < lVar40) {
    uVar30 = uVar38;
  }
  lVar23 = 0;
  uVar45 = 0;
  if (uVar44 != 0) {
    while (uVar45 = (uint)lVar23, (uVar44 >> lVar23 & 1) == 0) {
      lVar23 = lVar23 + 1;
    }
  }
  uVar42 = uVar42 >> bVar24 | uVar42 << 0x20 - bVar24 |
           (int)(uVar34 & 0xffffff00 | (uint)(byte)((char)uVar34 << 7)) >> 1;
  lVar23 = 0x3f;
  uVar20 = 0x3f;
  if (uVar13 != 0) {
    while (uVar20 = (ushort)lVar23, uVar13 >> lVar23 == 0) {
      lVar23 = lVar23 + -1;
    }
  }
  uVar45 = ((uint)uVar58 & 0xffff0000 | (uint)(ushort)((short)uVar58 << 1 | (ushort)(uVar47 != 0)))
           + uVar30 + (uint)(((uint)uVar41 & 0xffffff00 | (uint)(uVar42 == 0)) < uVar45);
  bVar24 = (byte)uVar20;
  uVar37 = (ushort)bVar17;
  uVar57 = ((ushort)(uVar53 & 0xffffff00) |
           (ushort)(byte)(bVar19 ^ (bVar19 == (byte)uVar29) * (bVar19 & (byte)uVar29))) << 1 |
           (ushort)((short)((short)((int)(((ulong)CONCAT22((ushort)(uVar7 >> 0x12),sVar10) &
                                           0xffffffffffffff00 | 0x8000000000000000 |
                                          (ulong)(byte)((char)sVar10 >> 1)) << 1) >> 0xe) << 1) < 0)
  ;
  uVar58 = (uVar49 >> 0x10) - 1;
  uVar11 = uVar57 ^ (ushort)(uVar57 == uVar37) * (uVar57 & uVar37);
  uVar21 = (ulong)(0x6551 < (ushort)(uVar28 * 2) ||
                  CARRY2(uVar28 * 2 + 0x9aae,(ushort)(uVar57 < uVar37))) << 0x20 |
           uVar35 & 0xffff0000 | uVar22;
  iVar48 = CONCAT22((short)(uVar53 >> 0x30),
                    CONCAT11((char)((ulong)uVar47 >> 8) + bVar24,(char)(uVar53 >> 0x20))) << 1;
  uVar28 = (ushort)uVar45 >> 1;
  uVar57 = uVar28 | (ushort)((uVar45 & 1) != 0) << 0xf;
  uVar34 = (uint)uVar57;
  iVar27 = uVar30 - uVar42;
  uVar30 = (int)(char)((char)lVar40 + 'n') + 0xd28570be;
  uVar20 = (uVar26 | uVar29) * 2 - (uVar20 & 0xff00 | (ushort)(iVar27 == 0));
  uVar29 = uVar20 & 0xff;
  uVar49 = 0;
  if (bVar60) {
    uVar49 = uVar58;
  }
  uVar42 = (uint)(uVar53 & 0xffffff00) & 0xffff0000 | 0x827a;
  bVar19 = (byte)uVar49 & 0x3f;
  uVar35 = (ulong)(uVar42 >> bVar19) | (ulong)uVar42 << 0x40 - bVar19;
  lVar40 = ((ulong)uVar33 << 0x10 |
            (ulong)(ushort)(uVar29 | (ushort)(byte)((byte)((ulong)uVar20 >> 8) |
                                                   (byte)((uint)iVar48 >> 8)) << 8) &
            0xffffffffffffff00 | (ulong)(byte)((char)uVar29 + (char)uVar28 + 0xa7)) - 0xa3d9ef65;
  bVar19 = (byte)lVar40;
  uVar53 = (CONCAT71((uint7)(uint3)(uVar46 >> 9) |
                     (uint7)(((ulong)((uVar12 & 0x20) != 0) << 0x3f) >> 8),(char)uVar38 << 1) -
           (ulong)(uVar45 & 0xffff0000 | uVar34)) - 1;
  if (bVar60) {
    uVar35 = uVar35 & 0xffffffffffff0000 | (ulong)uVar57;
  }
  uVar12 = (uint)uVar58;
  uVar20 = (short)uVar53 * 0x63b6;
  uVar53 = uVar53 & 0xffffffffffff0000;
  uVar22 = uVar53 | uVar20;
  uVar46 = (uint)(((ulong)CONCAT61((int6)((ulong)lVar40 >> 0x10),bVar19) & 0xffffffffffff00) << 8);
  lVar23 = 0x3f;
  sVar9 = 0x3f;
  if (uVar22 != 0) {
    while (sVar9 = (short)lVar23, uVar22 >> lVar23 == 0) {
      lVar23 = lVar23 + -1;
    }
  }
  bVar32 = (char)uVar11 - 1U & (char)(uVar30 >> 0x18) + 0x6dU;
  uVar58 = (ulong)(uVar11 & 0xff00);
  uVar13 = uVar58 | bVar32;
  uVar28 = 0xf;
  uVar29 = (ushort)uVar13;
  if (uVar29 != 0) {
    while (uVar29 >> uVar28 == 0) {
      uVar28 = uVar28 - 1;
    }
  }
  uVar38 = (uint)(ushort)(CONCAT11((bVar19 | 0xc0) >> 1,bVar19 + (char)((ulong)lVar40 >> 8)) |
                         0x8000);
  uVar42 = uVar46 | uVar38;
  uVar39 = (uint)uVar22;
  iVar1 = uVar42 - uVar39;
  uVar47 = iVar1 - 1;
  cVar15 = (char)((ushort)(((uint)(uVar21 << (bVar24 & 0x1f)) |
                           (uint)(uVar21 >> 0x21 - (bVar24 & 0x1f))) >> 1) >> 1);
  if (uVar42 < uVar39 || iVar1 == 0) {
    cVar15 = (char)uVar35;
  }
  bVar19 = (byte)((ulong)uVar47 >> 8);
  uVar52 = (uint)CONCAT11(bVar19 >> 1 | bVar19 << 7,(char)uVar47);
  uVar41 = (ulong)(long)(int)uVar12 >> 1 | 0xc000;
  uVar21 = ((ulong)(uint3)((uint)iVar48 >> 8) & 0xffffffffffff00) << 8;
  uVar22 = (ulong)(ushort)(((uint)(ushort)(sVar9 * -0x3471 & 0xffU |
                                          (ushort)(byte)(((int)uVar47 < 0) << 7 | (uVar47 == 0) << 6
                                                         | ((((uVar46 & 0xfff0000 | uVar38) -
                                                             (uVar39 & 0xfffffff)) - 1 & 0x10000000)
                                                           != 0) << 4 | bVar60 << 2 | 2U |
                                                        (uVar42 < uVar39 || iVar1 == 0)) << 8) |
                           0x33730000) % (uint)(ushort)uVar41);
  cVar36 = (char)((short)iVar27 >> 1);
  uVar46 = (int)uVar41 + (int)uVar13 + 1;
  uVar39 = (uVar45 >> 0x18 | (uVar45 & 0xff0000) >> 8 | (uVar34 & 0xff00) << 8 | uVar34 << 0x18) + 1
  ;
  uVar57 = (short)uVar46 << 1 | 1;
  uVar29 = (ushort)((uVar21 | uVar22) << 1);
  bVar14 = (byte)((ulong)(uVar29 | 1) >> 8);
  uVar30 = (uVar30 & 0xff00) << 8 | uVar30 * 0x1000000 |
           (uint)(ushort)((short)((long)(uVar35 & 0xfffffffff42c9991) >> 1) * -0x618);
  uVar26 = (ushort)(((int)cVar15 & 0xff7f0000U | (uint)(ushort)((short)cVar15 * (short)cVar36)) >> 1
                   );
  uVar11 = (CONCAT11((char)((uint)iVar27 >> 8) >> 1,cVar36 << 1 | uVar26 < uVar57) >> 1) * 0x35f5;
  uVar45 = ((uint)(ushort)((short)uVar39 << 0xf | 0x469e) << 1 | (uint)(uVar26 < uVar57)) &
           ~(1 << ((uVar52 & 0x3e) >> 1));
  bVar18 = (byte)((ulong)((uVar47 & 0xffff0000 | uVar52) >> 1) >> 8);
  cVar15 = (char)uVar11;
  uVar49 = (uVar49 & 0xffffffffffff0000 ^ 0x264e9b8 | 2) + (ulong)uVar45 + (ulong)(cVar15 < '\0');
  bVar19 = (byte)uVar49;
  iVar27 = (int)((uVar58 | (byte)~bVar32) >> 1);
  uVar46 = (uVar46 & 0xffff0000 | (uint)(ushort)(uVar57 ^ (uVar26 == uVar57) * uVar57)) >>
           (bVar19 & 0x1f) | iVar27 << 0x20 - (bVar19 & 0x1f);
  uVar38 = uVar46 & 0xffffff00;
  uVar46 = uVar38 | (byte)((char)uVar46 << 1);
  uVar34 = (int)(((uVar21 | uVar22 & 0x7fffffffffff8000) << 1 |
                 (ulong)(ushort)(uVar29 & 0xff | 1 | (ushort)(byte)(bVar14 >> 6 | bVar14 << 3) << 8)
                 ) << 1) + -0x677b48ab + uVar30;
  uVar21 = uVar53 | (ushort)((uVar20 + (ushort)(byte)(bVar17 >> (bVar24 & 7) |
                                                     bVar17 << 8 - (bVar24 & 7)) * 2 ^ 0xe77d) +
                            0x3548) | uVar49;
  auVar2 = ZEXT116(bVar18) *
           ZEXT816((ulong)(ushort)(uVar11 & 0xff00 | (ushort)(byte)(cVar15 << 1)) &
                   0xffffffffe81cbf43);
  uVar42 = (uint)uVar21;
  uVar22 = (ulong)uVar39 | 0x5ee;
  bVar24 = (byte)uVar22;
  lVar40 = CONCAT71(SUB167(auVar2 >> 8,0),SUB161(auVar2,0) << 1);
  uVar35 = (ulong)(uVar34 >> (bVar19 & 0x3f)) | (ulong)uVar34 << 0x40 - (bVar19 & 0x3f);
  uVar58 = ((ulong)(((uVar12 & 0xffff0000 | (uint)uVar28) >> (bVar19 & 0x1f)) + 0xb73fe7f1 >> 1 |
                   uVar45 << 0x1f) - lVar40) - 1;
  uVar29 = (ushort)uVar46;
  iVar48 = (int)(short)lVar40 * (int)(short)uVar29;
  uVar28 = (short)uVar21 + (ushort)uVar45 + 0x5cc2;
  uVar53 = CONCAT62(SUB166(auVar2 >> 0x50,0),(short)((uint)iVar48 >> 0x10)) ^
           1 << ((long)(char)bVar24 & 0x3fU);
  uVar49 = (ulong)(uint)((int)uVar49 - (int)uVar35) & ~(1 << (uVar35 & 0x3f));
  uVar21 = uVar53 & 0xffffffffffffff00;
  uVar53 = uVar21 | (byte)(((char)uVar53 - (char)(uVar49 >> 8)) - (bVar24 < 0xc2));
  uVar20 = (short)(iVar27 >> 1) << 3 | (ushort)uVar45 >> 0xd;
  if (uVar22 < 0x21455e4f) {
    uVar20 = uVar28;
  }
  sVar9 = (short)(uVar22 - 0x21455e4f);
  iVar27 = (int)CONCAT71((undefined7)((char)bVar24 >> 7),bVar24 + 0x3e);
  uVar34 = (uint)(ushort)(sVar9 + 0x7e + (short)uVar49 * 4) | (uint)uVar53;
  uVar26 = uVar20 << 1 | uVar29 >> 0xf;
  bVar19 = (byte)uVar34;
  bVar24 = bVar19 & 0x1f;
  uVar49 = -(ulong)uVar30 & 0xffffffff;
  bVar17 = (byte)((ulong)((ushort)uVar35 & 0xfffe) >> 8);
  bVar19 = (char)bVar19 >> 1;
  uVar30 = uVar46 + 0x8348e700 + iVar27 * 0x10;
  uVar35 = uVar58 & 0xffffffffffff0000;
  uVar29 = (short)((long)(ulong)uVar30 >> 1) + 1;
  uVar46 = ((uint)(uVar49 >> bVar24) | (uint)(uVar49 << 0x21 - bVar24)) * 3 + 0x4af27f56;
  uVar20 = uVar29 & 0xff;
  uVar29 = uVar20 | (ushort)(byte)((char)(uVar29 >> 8) - (char)(uVar21 >> 8)) << 8;
  uVar12 = (int)CONCAT71((uint7)(uint3)(uVar38 >> 8),0x7a) * 2;
  if ((short)uVar29 < 0) {
    uVar12 = (uint)uVar26;
  }
  uVar21 = uVar22 - 0x21455e4f & 0xffffffffffff0000;
  uVar49 = (ulong)(ushort)(sVar9 + 0x759c);
  auVar3 = ZEXT816(uVar21 | uVar49 | 0xc000000000000000);
  auVar2 = CONCAT88(uVar53,CONCAT62(SUB166(auVar2 >> 0x10,0),(short)iVar48)) &
           (undefined  [16])0xffffffffffffffff;
  auVar4 = auVar2 % auVar3;
  bVar24 = bVar19 & 0xf;
  uVar37 = (ushort)uVar12 << bVar24 | (ushort)uVar12 >> 0x10 - bVar24;
  uVar13 = (ulong)uVar12 & 0xffffffffffff0000 | (ulong)uVar37;
  uVar22 = (ulong)(uVar34 & 0xffffff00 | (uint)bVar19) | 0xc0;
  uVar11 = SUB162(auVar2 / auVar3,0) & 0x3fff;
  uVar57 = (ushort)((SUB164(auVar4,0) >> 0x1d & 1) != 0);
  sVar10 = (short)uVar46;
  sVar9 = sVar10 - (short)uVar22;
  uVar53 = (ulong)(bVar18 >> 1);
  if (SBORROW2(sVar10,(short)uVar22) != SBORROW2(sVar9,uVar57)) {
    uVar53 = uVar13;
  }
  uVar12 = (uVar42 & 0xffff0000 | (uint)uVar28) & 0xb30ddc19;
  uVar28 = 0;
  if (uVar26 != 0) {
    while ((uVar26 >> uVar28 & 1) == 0) {
      uVar28 = uVar28 + 1;
    }
  }
  uVar43 = uVar28 & 0xff;
  uVar34 = (uint)(ushort)(uVar43 | (ushort)(byte)((char)(uVar28 >> 8) << ((byte)uVar28 & 0x1f)) << 8
                         );
  uVar38 = (uint)uVar26 & 0xffffff00 | (uint)(byte)((char)uVar26 >> ((byte)uVar43 & 0x1f));
  uVar47 = (uVar46 & 0xffff0000 | (uint)(ushort)(sVar9 - uVar57)) &
           ((uint)(uVar22 << 0x1b) | uVar34);
  sVar9 = (short)uVar12;
  uVar46 = uVar42 & 0xb30d0000 | (uint)(ushort)(sVar9 << 1 | (ushort)(sVar9 < 0));
  uVar28 = -(short)uVar38;
  uVar34 = uVar34 & 0x1f;
  uVar42 = (uint)uVar28 | 1 << uVar34;
  uVar26 = (ushort)uVar42 ^
           (uVar11 / (ushort)(byte)uVar22 & 0xff | uVar11 % (ushort)(byte)uVar22 << 8);
  uVar41 = (ulong)SUB164(auVar4 >> 0x20,0) << 0x20 | (ulong)uVar42 & 0xffffffffffff0000 |
           (ulong)uVar26;
  uVar22 = uVar22 << 0x1b | (ulong)(ushort)(uVar43 | (ushort)((uVar28 >> uVar34 & 1) != 0) << 8);
  if (uVar26 != 0) {
    uVar22 = uVar41;
  }
  uVar26 = ((ushort)uVar58 & 0xff00 | 1) + (ushort)bVar17 + 0xcb03;
  uVar41 = uVar41 | uVar53;
  bVar24 = (byte)uVar22 | (byte)uVar41;
  uVar28 = (short)(iVar27 << 1) - 0x62f;
  cVar15 = (char)uVar20;
  if ((short)uVar28 < 0) {
    uVar41 = (ulong)(byte)(((byte)(CONCAT11(uVar13 < uVar12,bVar17) >> 2) | bVar17 << 7) >> 1);
  }
  uVar58 = uVar35 | (ulong)uVar26 & 0xffffffffffffff00 | (ulong)(byte)((byte)uVar26 | (byte)uVar53);
  uVar42 = (uint)uVar53 << 0x10 | (uint)uVar53 >> 0x10;
  uVar30 = (int)CONCAT62((int6)(uint6)(ushort)(uVar30 >> 0x10) >> 1,uVar29) - 1;
  uVar53 = ~(uVar22 & 0xffffffffffffff00 | (ulong)(byte)((char)bVar24 >> 0x1e));
  sVar9 = (short)(cVar15 >> 7);
  uVar20 = (short)cVar15 + 0xbe3b;
  uVar12 = 0;
  uVar34 = (uint)uVar13;
  if (uVar34 != 0) {
    while ((uVar34 >> uVar12 & 1) == 0) {
      uVar12 = uVar12 + 1;
    }
  }
  uVar45 = (1 << ((uint)bVar24 & 0x1f) ^ 0xffffffffU) & ~(1 << ((uint)uVar58 & 0x1f));
  uVar29 = ((ushort)uVar45 & 0xff00 | (ushort)(byte)((char)uVar45 - (char)(uVar53 >> 8))) + 0x2993;
  uVar22 = uVar21 | uVar49 & 0xffffffffffffef00 | 0xc000000000000000 |
           (ulong)(byte)((char)(uVar49 & 0xffffffffffffefff) + 0xae);
  if ((short)uVar37 < 0 != (short)(uVar37 << 1) < 0) {
    uVar22 = uVar53;
  }
  uVar26 = (ushort)(uVar41 << 1) | 1;
  bVar24 = (byte)uVar53 & 0xf;
  uVar39 = uVar12 << 0x16 | uVar12 >> 10;
  if ((uVar22 & 1) == 0) {
    uVar39 = uVar42;
  }
  uVar55 = (ushort)uVar53 & 0xff0f;
  uVar52 = (int)(uVar22 >> 1) + 0x44605950;
  uVar22 = (ulong)uVar46 - 0x923737a0;
  cVar15 = (char)(uVar20 >> 1);
  uVar41 = (ulong)(uVar47 & 0xffff0000 |
                  (uint)(ushort)(~(ushort)uVar47 >> 1 | (ushort)((uVar20 & 1) != 0) << 0xf));
  uVar13 = (ulong)uVar38 | 0x2627;
  bVar19 = (byte)uVar13 & 0x1f;
  uVar54 = (ushort)(((uint)uVar21 | (uint)(uVar49 & 0xffffffffffffefff)) * -0x4479f2fd >> bVar19) |
           (ushort)(uVar39 << 0x20 - bVar19);
  uVar57 = (short)cVar15 * (short)cVar15;
  uVar20 = uVar57 & 0xff;
  uVar11 = uVar20 | (ushort)(byte)((char)((ulong)CONCAT22(sVar9,uVar57) >> 8) - 0x29) << 8;
  sVar10 = (short)uVar13;
  uVar43 = sVar10 - uVar54;
  uVar57 = (short)uVar58 + 1;
  if (uVar43 == 0 || sVar10 < (short)uVar54) {
    uVar57 = uVar26;
  }
  uVar49 = 1 << (uVar22 & 0x3f);
  uVar13 = uVar41 | uVar49;
  uVar38 = uVar30 & 0xffff0000 |
           (uint)CONCAT11((char)uVar20,(char)((ulong)CONCAT22(sVar9,uVar11) >> 8));
  uVar44 = (ulong)(uVar39 & uVar42);
  uVar58 = (ulong)CONCAT22(sVar9,uVar11) & 0xffffffffffff0000 |
           (ulong)(ushort)((short)((ushort)((uint)(((short)uVar30 << bVar24 |
                                                   (ushort)(uVar12 >> 10) >> 0x10 - bVar24) & uVar29
                                                  & uVar26) >> 8) | 0xb600) >> 1);
  uVar12 = uVar52 >> 1 & 0x7f;
  iVar48 = ((uint)uVar43 + 0x72778391) - (uint)((uVar52 & 1) != 0);
  uVar21 = (ulong)((uVar38 >> ((uint)uVar57 & 0x1f) & 1) != 0);
  lVar40 = (ulong)uVar42 - 0xcc776802;
  lVar23 = lVar40 - uVar21;
  if ((SBORROW8((ulong)uVar42,0xcc776802) != SBORROW8(lVar40,uVar21)) != lVar23 < 0) {
    uVar58 = uVar41 | uVar49 & 0xffffffff;
  }
  uVar55 = uVar55 ^ (uVar55 >> 2 & 1) << 2;
  uVar21 = uVar58 << ((byte)iVar48 & 0x3f);
  if ((short)uVar57 < 1) {
    uVar21 = (ulong)(uVar52 & 0xffffff00 | uVar12);
  }
  uVar30 = iVar48 * 2;
  uVar49 = uVar53 & 0xffff0000 | (ulong)uVar55 & 0xffffffffffffff00 |
           (ulong)(byte)((char)uVar55 - 0x35) | 0xc000000000000000;
  auVar2 = CONCAT88((ulong)uVar45 & 0xffffffffffff0000 | 0x3fffffff00000000 | (ulong)uVar29,uVar21)
           & (undefined  [16])0xffffffffffffffff;
  return CONCAT88(param_3,(uVar22 & 0xffff |
                          (ulong)SUB166(auVar2 / ZEXT816(uVar49) >> 0x10,0) << 0x10) + (ulong)uVar38
                          + (ulong)(uVar30 & 0xffff0000 |
                                   (uint)CONCAT11(((char)((ulong)uVar30 >> 8) + -0x77) -
                                                  ((byte)uVar30 < (byte)(uVar57 - 1)),(byte)uVar30))
                          + SUB168(auVar2 % ZEXT816(uVar49),0) + (ulong)(uVar29 >> 8) + uVar13 +
                          (ulong)(uint)((int)(((ulong)uVar28 | 0x95) << 0x1a) << 1) +
                          CONCAT71((int7)(char)((uVar52 & 0xffffff00) >> 8),
                                   ((char)uVar12 - (char)uVar13) + -1) +
                          (uVar35 | (ushort)(uVar57 - 1)) + lVar23 + uVar22 +
                          (ulong)((uVar34 & 0xffff0000 | (uint)(ushort)(uVar37 << 1)) + 0x2e +
                                 uVar46) + uVar49 +
                          ((uVar44 & 0xff000000) << 8 | (uVar44 & 0xff0000) << 0x18 |
                           (uVar44 & 0xff00) << 0x28 | uVar44 << 0x38) + -0x7001d6832213e82f);
}



// WARNING: Removing unreachable block (ram,0x00404d25)
// WARNING: Removing unreachable block (ram,0x004047d1)
// WARNING: Removing unreachable block (ram,0x0040470f)
// WARNING: Removing unreachable block (ram,0x00404414)
// WARNING: Removing unreachable block (ram,0x00404274)
// WARNING: Removing unreachable block (ram,0x004043cf)
// WARNING: Removing unreachable block (ram,0x004044f4)
// WARNING: Removing unreachable block (ram,0x00404e4d)
// WARNING: Removing unreachable block (ram,0x004049b5)

undefined  [16] log_size_10_var_003(void)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  long lVar3;
  long lVar4;
  uint uVar5;
  uint3 uVar6;
  char cVar7;
  byte bVar8;
  char cVar10;
  short sVar9;
  sbyte sVar11;
  byte bVar14;
  ulong uVar12;
  ulong uVar13;
  int iVar15;
  byte bVar16;
  ushort uVar17;
  ulong uVar18;
  ushort uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  ulong uVar26;
  ulong uVar27;
  ushort uVar28;
  uint uVar29;
  uint uVar30;
  undefined8 uVar31;
  byte bVar32;
  ushort uVar33;
  uint uVar34;
  uint uVar35;
  ulong uVar36;
  ulong uVar37;
  ushort uVar38;
  short sVar39;
  uint uVar40;
  byte bVar41;
  ushort uVar42;
  ulong uVar43;
  ushort uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  ulong uVar49;
  ulong uVar50;
  bool bVar51;
  bool bVar52;
  
  iVar15 = 0x1f;
  while (0xb7c95becU >> iVar15 == 0) {
    iVar15 = iVar15 + -1;
  }
  uVar38 = SUB162(ZEXT416(0x47f8994b) >> 2,0) + 0xd802;
  uVar34 = (SUB164(ZEXT416(0x47f8994b) >> 2,0) & 0xffff0000 | (uint)uVar38 & 0xffffff00) &
           0xb5bd7a00 | (uint)(byte)(((char)uVar38 + 1U & 0x53) << 1);
  uVar38 = 0xf;
  while (0x8a60U >> uVar38 == 0) {
    uVar38 = uVar38 - 1;
  }
  uVar40 = (uVar34 | 0xc000) ^ 0x970ac1f3;
  uVar23 = uVar34 << 0x12 | 0x414bdefe;
  uVar34 = 1 << ((uint)uVar38 & 0x1f);
  uVar12 = (ulong)(uVar34 | 0x2ff09800) | 0x10000c000;
  uVar19 = (ushort)(byte)(uVar12 >> 8);
  uVar28 = 0x2105 / uVar19 & 0xff;
  bVar8 = (byte)uVar34;
  bVar16 = (bVar8 & 0x1f) % 0x11;
  uVar33 = 0x7801U >> bVar16 | 0x7801 << 0x11 - bVar16;
  uVar13 = (ulong)(uVar40 & 0xffff0000 |
                  (uint)(ushort)(((ushort)uVar40 & 0xff00 | (ushort)(uVar23 == 0)) << 1));
  cVar7 = (char)uVar28 + '\x01';
  uVar50 = (ulong)(ushort)(uVar28 | 0x2105U % uVar19 << 8) & 0xffffffffffffff00;
  uVar12 = (long)uVar12 >> (bVar8 & 0x3f);
  uVar36 = 0xac91ad470eb05220;
  uVar18 = uVar12 + uVar13;
  uVar49 = 0xfffffffff72ce64c;
  if (!CARRY8(uVar12,uVar13)) {
    uVar49 = uVar36;
  }
  cVar10 = (char)(uVar50 >> 8);
  if (!SCARRY1(cVar7,cVar10)) {
    uVar36 = 0xac91ad470eb00002;
  }
  uVar19 = (ushort)uVar18;
  uVar18 = uVar18 & 0xffffffffffff0000 | (ulong)(ushort)(uVar19 << 4 | uVar19 >> 0xc);
  uVar40 = (uint)(((ulong)(uint3)(SUB163((ZEXT816(0x16e8026757380bd) << 2) >> 8,0) |
                                  SUB163((ZEXT816(0x16e8026757380bd) >> 0x3f) >> 8,0) | 0x39b5f) &
                  0xffffffffffff00) << 8) | (uint)(ushort)(uVar38 + 0x9317);
  iVar25 = uVar40 + uVar23;
  uVar13 = uVar18 | 0xc000;
  uVar19 = (ushort)uVar50 & 0x3fff | (ushort)(byte)(cVar7 + cVar10);
  uVar38 = (ushort)(byte)(uVar13 >> 8);
  uVar49 = uVar49 | 0xc000000000000000;
  auVar1 = (ZEXT916(CONCAT18(3,CONCAT62((int6)(short)(((ulong)(uint3)((uint)iVar15 >> 8) << 8) >>
                                                     0x10),
                                        uVar19 / uVar38 & 0xff | uVar19 % uVar38 << 8))) |
           (undefined  [16])0x1380000000000000) & (undefined  [16])0xffffffffffffffff;
  auVar2 = auVar1 % ZEXT816(uVar49);
  uVar40 = uVar40 ^ 0xc5882108;
  uVar18 = (uVar18 & 0x7fffffffffffff80 | 0xc000) << 1 |
           (ulong)(byte)(((char)(uVar13 << 1) - SUB161(auVar2,0)) - 1);
  uVar34 = iVar25 - (int)uVar12;
  if (uVar34 != 0 && (SBORROW4(iVar25,(int)uVar12) != false) == (int)uVar34 < 0) {
    uVar18 = (ulong)((uint)uVar33 | 0xd3250000);
  }
  uVar23 = uVar34 + 0xf7b56d93 | (int)(uVar49 + uVar34) + 1U;
  uVar50 = uVar49 + uVar34 + 0xf63900000000c773;
  uVar37 = uVar36 << 1 | uVar50 >> 0x3f;
  uVar34 = ((uint)uVar33 & 0xffffff00 | 0xd3250000 |
           (uint)(byte)((byte)uVar33 << 7 | (byte)uVar33 >> 1)) + 0xa0ec68ca;
  sVar39 = (short)uVar37;
  uVar36 = uVar18 & 0xffffffffffff0000 | (ulong)CONCAT11((char)(uVar18 >> 8) << 1,(char)uVar18);
  uVar18 = (ulong)uVar34 & 0x3f;
  uVar13 = uVar36 & ~(1 << uVar18);
  if ((uVar36 >> uVar18 & 1) == 0) {
    uVar34 = uVar40;
  }
  uVar35 = (uint)uVar37 & 0xffff0000 | (uint)(ushort)(sVar39 + 0x2a4d);
  bVar16 = ((byte)uVar13 ^ SUB161(auVar2 >> 8,0)) - 0x12;
  uVar36 = uVar13 & 0xffffffffffffff00 | (ulong)bVar16;
  uVar46 = (uint)uVar50 & 0xffff0000 | (uint)(ushort)((short)uVar50 + 1);
  uVar28 = (short)uVar36 + 0x8ee5;
  uVar47 = uVar46 >> (bVar16 & 0x1f) | uVar46 << 0x20 - (bVar16 & 0x1f);
  sVar9 = (short)SUB161(auVar1 / ZEXT816(uVar49),0) * 0x72 *
          (short)CONCAT71(SUB167(auVar2 >> 8,0),SUB161(auVar2,0) >> 1) * uVar28;
  uVar19 = (ushort)uVar40 >> (bVar16 & 0x1f);
  uVar46 = uVar40 & 0xffff0000;
  uVar35 = uVar35 << (bVar16 & 0x1f) | uVar35 >> 0x20 - (bVar16 & 0x1f);
  uVar38 = uVar19 + 0x360;
  uVar18 = (uVar47 + uVar12 & 0xffffffffffffff00 | (ulong)(byte)((char)(uVar47 + uVar12) - 0x3e)) <<
           (bVar16 & 0x3f);
  uVar50 = uVar18 | (uVar46 | uVar19) >> 0x40 - (bVar16 & 0x3f);
  uVar33 = (ushort)uVar50;
  uVar33 = uVar33 << (bVar16 & 0xf) | uVar33 >> 0x10 - (bVar16 & 0xf);
  bVar16 = (byte)sVar9;
  uVar23 = uVar23 & 0xffff0000 | (uint)(ushort)((short)uVar23 + sVar39);
  if (bVar16 != 0) {
    uVar23 = uVar35;
  }
  uVar45 = uVar34 - uVar40 & 0xffffff00 | (uint)(byte)uVar33;
  bVar32 = (byte)((ulong)uVar38 >> 8);
  uVar36 = uVar36 | 0x3df7;
  lVar22 = (uint)((int)uVar23 >> 1) - uVar36;
  uVar36 = uVar36 & 0xffffffffffffff0f;
  sVar11 = (sbyte)uVar36;
  sVar39 = (short)uVar45;
  uVar50 = (uVar50 & 0xffffffffffff0000 |
           (ulong)(ushort)(uVar33 >> 0xf | (uVar33 & 0xff00 | (ushort)(byte)(uVar34 - uVar40)) << 1)
           ) << 5;
  uVar13 = uVar50 | uVar18 >> 0x3c;
  uVar33 = sVar39 + 0x273c;
  uVar18 = (ulong)uVar45 & 0xffffffffffff0000;
  uVar45 = (uint)uVar18;
  uVar20 = (uint)uVar33;
  uVar34 = (int)uVar36 * 0x4c00f804 + 0x3ca88f6e;
  uVar23 = (int)(short)(((ushort)(byte)(0x9d - bVar32) | 0xf400) >> sVar11 | sVar39 << 0x10 - sVar11
                       ) * 0x168;
  sVar39 = (short)(uVar23 >> 0x10);
  bVar14 = (byte)uVar34;
  bVar8 = bVar14 & 0x3f;
  bVar32 = (byte)(((uVar38 & 0xff |
                   (ushort)(byte)(bVar32 ^ (bVar16 == bVar32) * (bVar32 ^ (byte)uVar38)) << 8) &
                  (ushort)uVar35) >> 1);
  bVar16 = (byte)((ulong)uVar34 >> 8);
  uVar49 = ((ulong)(uint3)(int3)(char)((ushort)sVar9 >> 8) & 0xffffffffffff00) << 8 |
           (ulong)(ushort)(short)(char)bVar32 & 0xffffffffffffff00 |
           (ulong)(byte)(bVar32 ^ (bVar32 == bVar16) *
                                  (bVar32 & (bVar16 ^ (bVar32 == bVar16) * (bVar16 ^ bVar32))));
  bVar14 = bVar14 & 7;
  bVar32 = (byte)(uVar19 * -0x176d);
  uVar42 = (ushort)uVar13;
  uVar29 = (uint)uVar28 & ~(1 << (uVar23 & 0x1f));
  uVar23 = uVar47 & 0xffffff00 | (uint)(byte)-(char)uVar47;
  uVar34 = (uVar45 | uVar20) + 0x959acb75;
  uVar49 = uVar49 * uVar49;
  bVar16 = (byte)uVar13 & 0x1f;
  uVar34 = uVar34 >> bVar16 | uVar34 << 0x20 - bVar16;
  uVar44 = (short)uVar34 << 1 | (ushort)uVar23 >> 0xf;
  uVar34 = uVar34 & 0xffff0000;
  uVar12 = (ulong)(uVar46 | (ushort)((uVar19 * -0x176d & 0xff00 |
                                     (ushort)(byte)(bVar32 << bVar14 | bVar32 >> 8 - bVar14)) << 1))
           * -0x59ceeb81;
  bVar16 = (byte)(uVar18 >> 0x18);
  uVar30 = (uint)(byte)((char)~((byte)(((unkuint9)(sVar39 != 0 && sVar39 != -1) << 0x40 | 0x36) >>
                                      bVar8) | (byte)(0x36 << 0x41 - bVar8)) >> 1);
  lVar3 = (uVar49 & 0xffff0000 | (ulong)CONCAT11((byte)(uVar49 >> 8) >> 1,(char)uVar49)) *
          (ulong)(uVar30 + 0x6c);
  uVar40 = (uint)((ulong)lVar3 >> 0x20);
  uVar38 = (ushort)lVar3 >> ((byte)uVar13 & 0x1f);
  uVar23 = 0x6b - uVar23;
  uVar28 = uVar42 & 0xff | (ushort)(byte)((byte)((ulong)(long)(short)uVar42 >> 8) >> 1 | 0x80) << 8;
  uVar45 = (uVar45 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18 |
           (uint)(byte)(bVar16 << 4 | bVar16 >> 5);
  if (0x8c28bbd8 < uVar40) {
    uVar45 = uVar34 | (uint)uVar44;
  }
  bVar52 = (uVar38 & 0x400) != 0;
  cVar7 = (char)uVar12 + -0x35;
  uVar49 = (ulong)(uVar47 >> 0x18) << 1 | 0x1aadbbc3;
  uVar20 = ~(uint)uVar12;
  uVar18 = ((ulong)(byte)(cVar7 + (char)((ulong)uVar38 >> 8)) | 0x1d2a7900) &
           ~(1 << ((ulong)uVar23 & 0x3f));
  uVar24 = ((uint)lVar22 ^ 1 << ((uint)(byte)-(char)uVar47 & 0x1f)) - 1;
  uVar29 = ((uint)(ushort)(((ushort)uVar29 & 0xff00 | (ushort)(byte)((char)uVar29 + (char)uVar33))
                          << 1) & 0x663e7a69) + 0x64118faa + (int)uVar18 * 8;
  lVar4 = (uVar12 & 0xffffffff00000000 | (ulong)uVar20) + (ulong)uVar45 + 1;
  uVar47 = (uint)CONCAT11(cVar7,(char)uVar38 >> 10) * (uint)uVar28;
  uVar40 = uVar40 + 0x73d74427 & 0xffff0000 | uVar47 >> 0x10;
  bVar16 = (byte)uVar47;
  if (bVar52) {
    bVar16 = (byte)(uVar47 >> 0x10);
  }
  uVar47 = (uint)lVar3 & 0xffff0000 | (uint)(ushort)((ushort)bVar16 * (ushort)(byte)uVar49);
  if (uVar29 != 0) {
    uVar47 = uVar23;
  }
  uVar18 = uVar18 * uVar40;
  iVar15 = (int)(uVar18 >> 0x20);
  uVar18 = uVar18 & 0xffffffff;
  uVar45 = iVar15 + (((uVar35 & 0xffff0000 | (uint)(ushort)(short)(char)lVar22) >> 0xe) + 0x1a4a324d
                    >> 0xf);
  uVar48 = uVar45 & 0xffff0000 | (uint)CONCAT11((char)((ulong)uVar45 >> 8),(char)uVar45);
  uVar47 = iVar15 + (uVar47 & 0xffff0000 | (uint)CONCAT11(-(iVar15 != 0),(char)uVar47));
  uVar35 = (int)(short)uVar47 * -0x670e;
  uVar5 = uVar35 & 0xffff;
  sVar39 = (short)(uVar35 >> 0x10);
  uVar12 = (ulong)(sVar39 != 0 && sVar39 != -1) << 0x20 |
           CONCAT62((int6)(0x1fffffffffffffff - (ulong)(uVar46 | (ushort)-uVar19) >> 0x10),0xfb6f) &
           0xffff0000 | (ulong)(ushort)(-0x4eb << ((byte)(uVar42 & 0xff) & 0x1f));
  uVar36 = uVar12 >> 2;
  uVar46 = (uint)uVar36;
  uVar35 = (uVar24 & 0xffff0000 | (uint)((ushort)uVar24 & 0xff00)) >> 9;
  if ((short)uVar18 == -0x594a) {
    uVar35 = uVar29 * -0x400;
  }
  uVar37 = (ulong)(uVar48 * 0x3e255ae9) << 1;
  bVar8 = (byte)uVar37;
  uVar38 = CONCAT11((byte)(uVar37 >> 8) | (byte)((ulong)uVar48 >> 8),bVar8);
  uVar24 = (int)(short)uVar45 + uVar48;
  uVar43 = (ulong)uVar23 | 0xffffffffb56ca1f3;
  uVar23 = ((uint)((uVar50 & 0x1fffffffffffe00) << 7) |
           (uint)(ushort)((ushort)(uVar13 << 7) | 0x1000) & 0xffffff0f) ^ 0x1990 ^ (uint)uVar43;
  bVar14 = (byte)uVar36;
  bVar16 = (byte)uVar23;
  uVar19 = SEXT12((char)((ulong)uVar38 >> 8));
  uVar36 = (uVar37 & 0xff00000000) >> 8 | (uVar37 & 0xff000000) << 8 | (uVar37 & 0xff0000) << 0x18 |
           ((ulong)uVar38 & 0xff00) << 0x28 |
           (ulong)(byte)(bVar8 >> (bVar16 & 7) | bVar8 << 8 - (bVar16 & 7)) << 0x38;
  uVar50 = (long)((ulong)((uVar30 + 0xe939b48c) -
                         (uVar34 | (uint)uVar44 & 0xffffff00 | (uint)(byte)((char)uVar44 + 0x75)))
                  << 0x30 | (ulong)(uVar45 >> 0x10)) >> 1;
  uVar13 = uVar50 >> (bVar16 & 0x3f) | uVar50 << 0x40 - (bVar16 & 0x3f);
  uVar34 = uVar35 + 1 & 0xffff0000 | (uint)(ushort)~(ushort)(uVar35 + 1);
  uVar50 = (ulong)uVar23 - 0xbe5171c0;
  uVar35 = (int)uVar50 + 0x33 + uVar34 * 4;
  if (0xbe5171bf < uVar23) {
    uVar50 = uVar50 & 0xffffffffffff0000 | (ulong)uVar19;
  }
  uVar20 = ((((uint)uVar37 & 0xffff0000 | (uint)uVar38) + 0xd93e71fc + uVar48 * 4 & 0xffff0000 |
             (uint)(byte)(((char)bVar16 < '\0') << 7 | (bVar16 == 0) << 6 | bVar52 << 2) << 8 |
             0x200 | (uint)bVar14) -
           (((uVar20 & 0xffffff00 | (uint)(byte)((char)uVar20 + (char)lVar4 + 1)) + (int)uVar18 >> 2
            ) + 1)) - (uint)(uVar23 < 0xbe5171c0);
  uVar26 = uVar34 & uVar13;
  iVar15 = (int)(uint)uVar43 >> 1;
  bVar8 = ((byte)uVar50 & 0x1f) % 9;
  uVar21 = ~CONCAT62((int6)(lVar4 >> 0x11),uVar19);
  uVar31 = CONCAT71(0xda4b203a07758e,(char)iVar15 + '>' + (((uint)uVar13 >> 0x1e & 1) != 0));
  uVar38 = (ushort)uVar5 >> 1;
  uVar47 = ((uVar47 & 0xffff0000 | uVar5) ^ (uint)(((ulong)(uVar47 >> 0x1c) & 1) << 0x1c)) &
           0xffff0000;
  uVar45 = (uint)(uVar38 | 0x8000);
  uVar48 = uVar47 | uVar45;
  uVar27 = (ulong)CONCAT11((char)uVar20,(byte)uVar50) & 0xffffffffffff6b03;
  sVar11 = (sbyte)uVar27;
  uVar23 = uVar24 & 0xff00 | 0xffff0000 | (uVar24 & 0x80) >> 7;
  uVar30 = (uint)uVar31 ^ 0x466817fa;
  uVar34 = uVar48 + uVar30;
  cVar7 = (char)uVar38;
  uVar18 = (ulong)(ushort)((int)(short)(char)-bVar16 * (int)((uVar37 & 0xff00000000) >> 8) >> 0x11)
           * 0x10000 - 0x2943df6a;
  uVar38 = (ushort)uVar27 & ~(1 << ((ushort)uVar23 & 0xf));
  bVar41 = (byte)(uVar18 >> 8);
  bVar32 = (byte)uVar18;
  sVar39 = (((ushort)uVar49 & 0xff00 | (ushort)bVar14) - (short)uVar26) - (ushort)(0xe3 < bVar41);
  uVar49 = uVar21 & 0xffffffffffff0000 |
           (ulong)(ushort)((short)uVar21 + 0x2d2e + (ushort)CARRY4(uVar48,uVar30));
  if (sVar39 == 0) {
    uVar49 = (ulong)uVar23;
  }
  bVar14 = (byte)((ulong)uVar38 >> 8);
  bVar14 = bVar14 ^ (bVar32 == bVar14) * (bVar14 ^ bVar41);
  uVar38 = uVar38 & 0xff;
  uVar6 = ((int3)(uVar43 >> 8) >> 1 & 0xff00U) >> 8 | (uint3)iVar15 & 0xff00 |
          (uint3)((uint)(iVar15 << 0x18) >> 8);
  uVar37 = ((ulong)CONCAT61(SUB166(SEXT816((long)(-(ulong)(uVar20 & 0xffffff00 |
                                                          (uint)(byte)(uVar50 >> 8)) &
                                                  0xffffffff00000000 |
                                                 (ulong)(uint)(int)(short)(char)-bVar16)) *
                                   SEXT816((long)uVar36) >> 0x50,0),
                            (CARRY2((ushort)uVar24,-1 << sVar11 | (ushort)uVar31 >> 0x10 - sVar11) +
                            'S') - (cVar7 != '\0')) & 0xffffffffffff3b) << 8;
  bVar16 = bVar41 & ~(byte)(1 << (uVar49 & 0x3f));
  uVar23 = (uint)(ushort)(uVar49 | 0xc000);
  uVar20 = CONCAT22((ushort)uVar37 |
                    (ushort)(byte)((char)uVar38 + (((uVar36 | bVar41) >> (uVar49 & 0x3f) & 1) != 0))
                    ,CONCAT11(bVar41 + 0x1c,bVar32 ^ (bVar32 == bVar14) * (bVar32 & bVar14)));
  uVar30 = uVar20 / uVar23;
  if ((byte)uVar30 < 0x66) {
    bVar16 = (byte)uVar34;
  }
  uVar40 = ((int)CONCAT62((undefined6)((short)uVar42 >> 0xf),uVar28) - uVar40 ^ uVar29) + 1 >> 1;
  bVar52 = (uVar30 & 0x400) != 0;
  uVar29 = (uint)(uVar49 | 0xc000) & 0xce3d82bb;
  bVar32 = -(char)uVar40;
  uVar50 = uVar50 & 0xffffffffffff0000 |
           (ulong)(ushort)(uVar38 | (ushort)(byte)(bVar14 | (byte)((ulong)(ushort)(uVar38 | (ushort)
                                                  bVar14 << 8) >> 8)) << 8);
  if (SCARRY4(uVar29,uVar40 & 0xffffff00 | (uint)((byte)uVar30 < 0x65) << 0x1f | (uint)bVar32)) {
    uVar50 = uVar37 & 0xffffffffffff0000 | (ulong)(ushort)(uVar20 % uVar23);
  }
  uVar40 = (uint)uVar26 | 0xc0000000;
  uVar49 = (ulong)(uVar46 & 0x3fffff00 | (uint)((char)bVar32 < '\x01')) << 0x20 |
           uVar18 & 0xffff0000 |
           (ulong)(ushort)((ushort)uVar30 & 0xff |
                          (ushort)(byte)((byte)((ulong)(ushort)uVar30 >> 8) | bVar16 + 0x12) << 8);
  uVar36 = uVar49 / (ulong)uVar40;
  uVar23 = uVar34 >> 1;
  bVar16 = (byte)uVar50;
  uVar18 = 0x3f;
  if (uVar40 != 0) {
    while (uVar40 >> uVar18 == 0) {
      uVar18 = uVar18 - 1;
    }
  }
  uVar28 = (ushort)uVar23 & 0xff00 | (ushort)(byte)((char)uVar23 << (bVar16 & 0x1f));
  uVar20 = (((uint)(uVar49 % (ulong)uVar40) ^ 0x8e3f7786) - uVar40) - 1;
  uVar46 = uVar46 & 0xffffff00 | (uint)(uVar12 << 0x1f) | (uint)(uVar20 == 0);
  uVar40 = ((uint)uVar36 & 0xff00) << 8 | (uint)uVar36 << 0x18;
  uVar38 = (ushort)uVar50 & 0xff00 | (ushort)(byte)(((byte)sVar39 & bVar41 | bVar16) + 0x62);
  uVar49 = uVar18 >> (bVar16 & 0x3f) | uVar18 << 0x40 - (bVar16 & 0x3f);
  uVar19 = (ushort)(uVar36 >> 0x10) >> 8 & 0xdf |
           (ushort)(byte)((char)((ulong)(uVar40 | (ushort)(uVar36 >> 8) & 0xff00) >> 8) - 1) << 8;
  uVar40 = uVar40 | (ushort)(uVar19 ^ (ushort)(uVar19 == uVar28) *
                                      (uVar19 & (uVar28 ^ (ushort)(uVar19 == uVar28) *
                                                          (uVar28 ^ (((ushort)uVar13 & 0xff00 |
                                                                     (ushort)(byte)((char)uVar13 <<
                                                                                    bVar8 | (byte)((
                                                  (ushort)uVar13 & 0xff |
                                                  (ushort)((uVar43 & 1) != 0) << 8) >> 9 - bVar8)))
                                                  >> sVar11 | (short)uVar26 << 0x10 - sVar11)))));
  bVar16 = (char)((ulong)(uVar20 & 0xffff0000 |
                         (uint)(ushort)((ushort)uVar20 |
                                       1 << ((ushort)(byte)((char)uVar29 + bVar32 | 0x25) & 0xf)))
                 >> 8) - (char)(uVar50 >> 8);
  uVar18 = uVar50;
  if (-1 < (short)((ushort)bVar16 << 8)) {
    uVar18 = (ulong)uVar46;
  }
  uVar19 = (ushort)uVar49;
  uVar19 = uVar19 >> 0xc | uVar19 << 4;
  uVar20 = (uint)CONCAT21((short)((uVar20 & 0xffff0000) >> 0x10),bVar16) << 8;
  if (bVar52) {
    uVar20 = -(uVar47 | uVar45 & 0xffffff00 | (uint)(byte)-cVar7 | 0x8c11394d);
  }
  if (bVar52) {
    uVar40 = (uint)uVar18;
  }
  bVar14 = (byte)uVar18;
  bVar16 = (bVar14 & 0x1f) % 9;
  uVar30 = ((uint)uVar13 & 0xffff0000 | 0x4000000f) * 0x20;
  bVar8 = (char)uVar40 - 1;
  uVar47 = uVar40 & 0xffffff00;
  uVar29 = (int)(uVar47 | bVar8) >> 0x1d;
  cVar7 = (char)(uVar47 >> 0x18);
  uVar28 = (ushort)(uVar50 * 0x757ee344);
  bVar32 = (byte)((ulong)uVar20 >> 8) | (byte)((ulong)uVar29 >> 8);
  uVar45 = (uint)(uVar50 * 0x757ee344) & 0xffff0000 |
           (uint)(ushort)(uVar28 << (bVar14 & 0xf) | uVar28 >> 0x10 - (bVar14 & 0xf));
  if (bVar32 == 0) {
    uVar45 = uVar29;
  }
  iVar15 = (int)uVar46 >> (bVar14 & 0x1f);
  uVar28 = 0;
  if (uVar38 != 0) {
    while ((uVar38 >> uVar28 & 1) == 0) {
      uVar28 = uVar28 + 1;
    }
  }
  uVar24 = (uint)uVar49 & 0xffff0000 |
           (uint)(ushort)(uVar19 + (short)((long)(ulong)(uint)(int)(short)uVar46 >> 1));
  uVar33 = (short)uVar18 + 0x52b9;
  bVar14 = (byte)uVar33;
  iVar25 = (int)(((uint)uVar26 & 0xffffff00 | 0xc0000000 |
                 (uint)(byte)((byte)uVar26 >> bVar16 | (byte)uVar26 << 9 - bVar16)) + uVar30 <<
                 (bVar14 & 0x1f) | uVar29 >> 0x20 - (bVar14 & 0x1f)) >> 5;
  uVar48 = iVar15 << 1 | (uint)(iVar15 < 0);
  uVar29 = (uint)(((ulong)uVar6 & 0xff) << 8) >> (bVar14 & 0x1f) | uVar24 << 0x20 - (bVar14 & 0x1f);
  uVar24 = uVar24 >> (bVar14 & 0x1f) |
           ((uVar23 & 0xffff0000 | uVar34 * -0x80000000) & (uint)uVar6 << 8 | (uint)uVar28) <<
           0x20 - (bVar14 & 0x1f);
  cVar10 = (char)((ushort)((short)(cVar7 >> 5) * (short)(char)(byte)uVar48) >> 8);
  uVar34 = uVar24 & 0xffff0000;
  uVar49 = (ulong)(uVar29 & 0xffff0000 | (uint)CONCAT11(cVar10 != '\0' && cVar10 != -1,(char)uVar29)
                  ) | 1 << ((ulong)uVar19 & 0x3f);
  uVar18 = (ulong)((uint)(uVar18 >> 8) & 0xffff00 | (uint)((ulong)uVar33 >> 8)) & 0xffffffffffffff0f
  ;
  sVar11 = (sbyte)uVar18;
  uVar33 = (short)uVar49 << sVar11 |
           (~(ushort)(1 << ((ulong)(uVar45 >> 0x14) & 0x3f)) & 0xb117) >> 0x10 - sVar11;
  cVar7 = cVar7 >> 7;
  uVar23 = CONCAT22((short)((int)uVar47 >> 0x1f),(short)cVar7);
  uVar47 = ~((uint)uVar19 | (int)((int6)(uint6)(ushort)((short)uVar46 >> 0xf) >> 1) << 0x10);
  cVar7 = cVar7 + '&';
  uVar50 = CONCAT62(0x3d858db5a799,CONCAT11(cVar7,0xf3));
  uVar46 = (uint)CONCAT71((uint7)uVar6,0xb0);
  if (cVar7 != '\0') {
    uVar46 = (uint)(uVar18 << 0x15) | (uint)(ushort)((short)uVar24 + 0x15e3);
  }
  sVar39 = (short)iVar25;
  uVar18 = (ulong)(uVar30 & 0xffff0000 |
                  (uint)(ushort)(((ushort)uVar30 >> 0xc | uVar28 << 4) << 9 | (uVar28 << 4) >> 7));
  uVar29 = (uint)uVar50;
  iVar15 = uVar29 + uVar47;
  uVar50 = uVar50 & 0xffffffff;
  if (CARRY4(uVar29,uVar47)) {
    uVar18 = uVar49 & 0xffff0000 | (ulong)uVar33;
  }
  uVar40 = (uVar20 & 0xffff0000 |
           (uint)CONCAT11(bVar32,bVar8 == 0 ||
                                 (SBORROW1((char)uVar40,'\x01') != false) != (char)bVar8 < '\0') &
           0xffff00ff) * 2 + 0xcb ^ uVar23;
  bVar8 = (byte)iVar25;
  uVar49 = ((uint)uVar33 << 0x13 | ((uint)uVar49 & 0xffff0000 | (uint)uVar33) >> 0xd) & uVar50;
  uVar47 = (uint)uVar49;
  bVar16 = (char)iVar15 + (char)uVar50;
  if (-1 < (char)bVar16) {
    uVar34 = uVar34 | uVar38;
  }
  uVar50 = (ulong)(uint)(int)sVar39 - 0x3638032e;
  uVar20 = 0;
  if (uVar40 != 0) {
    while ((uVar40 >> uVar20 & 1) == 0) {
      uVar20 = uVar20 + 1;
    }
  }
  uVar38 = (ushort)uVar48 & 0xff00 | (ushort)(byte)~(byte)uVar48;
  uVar23 = uVar23 + (int)uVar18 & ~(1 << (uVar47 >> 0x18 & 0x1f));
  bVar14 = bVar8 & 0xf;
  uVar38 = uVar38 << bVar14 | uVar38 >> 0x10 - bVar14;
  bVar14 = (byte)uVar38 ^ (byte)uVar40;
  uVar36 = (ulong)uVar48 & 0xffffffffffff0000 | 0x2000000000000000 |
           (ulong)uVar38 & 0xffffffffffffff00;
  uVar12 = (long)sVar39 + (ulong)uVar34;
  lVar22 = 0x3f;
  if (uVar12 != 0) {
    while (uVar12 >> lVar22 == 0) {
      lVar22 = lVar22 + -1;
    }
  }
  uVar47 = ((uVar47 >> 0x18 | (uVar47 & 0xff0000) >> 8 | (uVar47 & 0xff00) << 8 |
            (uint)(byte)uVar49 << 0x18) & 0xc12ae1e0) + 0x53283887;
  bVar51 = (bool)((byte)uVar50 & 1);
  bVar32 = (byte)uVar50 >> 1 | bVar51 << 7;
  uVar19 = (ushort)iVar15 & 0xff00 | (ushort)bVar16;
  if (!bVar51) {
    uVar19 = (ushort)uVar50 & 0xff00 | (ushort)bVar32;
  }
  bVar16 = (char)(((char)uVar12 - (byte)(uVar23 >> 0x1d)) - bVar51) >> 1;
  uVar49 = (ulong)(uVar34 >> 1);
  if ((uVar34 & 1) != 0) {
    uVar49 = uVar49 & 0xffffffffffff0000 | uVar50 & 0xff00 | (ulong)bVar32;
  }
  bVar32 = bVar16 & 0xf;
  uVar29 = (uVar40 & 0xff00) << 8 | uVar40 << 0x18;
  uVar40 = uVar29 | (ushort)(((ushort)(uVar40 >> 0x18) | (ushort)(uVar40 >> 8) & 0xff00) >> bVar32 |
                            uVar19 << 0x10 - bVar32);
  uVar49 = uVar49 - 1;
  uVar38 = uVar38 & 0xff00 | (ushort)bVar14;
  uVar37 = uVar50 & 0xffffffffffff0000 | (ulong)(ushort)(uVar38 << bVar32 | uVar38 >> 0x10 - bVar32)
  ;
  uVar38 = (ushort)(uVar23 >> 0x1d);
  uVar34 = (uVar47 & 0xffff0000 | (uint)(ushort)((short)uVar47 >> bVar32)) + 0xfee436c9;
  auVar1 = ZEXT816((ulong)(ushort)(uVar38 * uVar38) *
                   (((ulong)(uVar46 + 0xa7fffff5) << (bVar8 & 0x3f) & 0xffffffffffffff00) +
                   (ulong)(uVar23 >> 0x1d) * 8)) * ZEXT816(uVar37);
  uVar28 = (short)uVar18 + 0xaa2b;
  uVar50 = (uVar12 & 0xffffffffffff0000 |
           (ulong)(CONCAT11((char)(uVar12 >> 8) + -1,bVar16) & 0xff0f)) * 0x2e363f04;
  uVar12 = ((ulong)uVar40 & 0xff) + 1;
  uVar19 = (ushort)(uVar20 >> 7);
  uVar38 = ((ushort)uVar34 & 0xff00 | (ushort)(byte)((byte)uVar34 ^ (byte)uVar49)) & uVar19;
  uVar13 = uVar12 & 0xffffffffffffff00 | (ulong)(uVar12 == 0);
  uVar34 = (uVar34 & 0xffff0000 |
           (uint)(ushort)(uVar38 & 0xff |
                         (ushort)(byte)((byte)((ulong)(uVar34 & 0xffff0000 | (uint)uVar38) >> 8) |
                                       (byte)uVar38) << 8)) << 1;
  uVar23 = (int)uVar37 * -2;
  uVar18 = uVar18 & 0xffffffffffff0000 | (ulong)uVar28;
  if ((char)((ulong)uVar34 >> 8) <= (char)((ulong)uVar28 >> 8)) {
    uVar18 = uVar13;
  }
  if (bVar52) {
    uVar40 = uVar29 | uVar28;
    bVar32 = (byte)uVar34;
  }
  uVar37 = (ulong)(uVar23 >> (bVar32 & 0x3f)) | (ulong)uVar23 << 0x40 - (bVar32 & 0x3f);
  uVar28 = ((ushort)uVar49 & 0xff00 | (ushort)(byte)((byte)uVar49 >> 1 | 0x80)) + 0x8e52;
  iVar15 = 0;
  uVar38 = 0;
  uVar23 = (uint)(uVar18 >> 1);
  if (uVar23 != 0) {
    while (uVar38 = (ushort)iVar15, (uVar23 >> iVar15 & 1) == 0) {
      iVar15 = iVar15 + 1;
    }
  }
  uVar43 = CONCAT71((uint7)(uint3)(uVar34 >> 8),0xb5);
  uVar36 = ~((uVar36 | (ulong)bVar14 & 0x7fffffffffffff80) << 1 |
            (ulong)(byte)((char)((uVar36 | (ulong)bVar14) << 1) +
                         ((char)uVar20 + 0x3eU ^ (byte)(1 << (uVar49 & 0x3f)))));
  uVar18 = ((ulong)(uint)(int)(char)uVar12 | 1 << ((ulong)(uint)(int)(short)uVar34 & 0x3f)) &
           0xffffffffffff0000;
  uVar23 = 0x1f;
  uVar46 = (uint)uVar43;
  if (uVar46 != 0) {
    while (uVar46 >> uVar23 == 0) {
      uVar23 = uVar23 - 1;
    }
  }
  uVar43 = (uVar20 >> 7 & 0xffff0000 | (uint)(ushort)(uVar19 - uVar38)) & uVar43;
  uVar49 = uVar49 & 0xffff0000 | (ulong)uVar28 & 0xffffffffffffff00 |
           (ulong)(byte)(((char)uVar28 + -0x2a) * '\x02');
  bVar16 = (byte)uVar38 - 1 & 0xf;
  lVar22 = 0;
  while ((0x45de825f5a9c7f7eU >> lVar22 & 1) == 0) {
    lVar22 = lVar22 + 1;
  }
  cVar7 = (char)(uVar34 >> 8);
  if (!SCARRY1(cVar7,-0x7f)) {
    uVar18 = uVar18 | 0x7f7e;
  }
  uVar33 = ~((short)uVar23 << bVar16 | (ushort)uVar49 >> 0x10 - bVar16);
  uVar28 = (ushort)(byte)(cVar7 + 0x81) << 8 | 0xb5;
  bVar14 = (byte)(uVar49 * -0x260b039c);
  bVar8 = bVar14 & 0xf;
  uVar28 = uVar28 << bVar8 | uVar28 >> 0x10 - bVar8;
  uVar46 = (uint)uVar37 & 0xffff0000 |
           (uint)(ushort)(((short)uVar37 - (short)uVar36) - (ushort)(uVar19 < uVar38)) | 0x17990773;
  iVar15 = (int)CONCAT62(SUB166(auVar1 >> 0x50,0),
                         CONCAT11(SUB161(auVar1 >> 0x48,0) >> 0xc,(char)uVar12));
  uVar19 = 0;
  if (iVar15 < 0 || (iVar15 << 1 | uVar23 >> 0x1f) == 0) {
    uVar19 = uVar28;
  }
  uVar28 = (short)uVar28 >> 1;
  uVar37 = -(ulong)(((uint)uVar43 & 0xffffff00 | (uint)(byte)((char)uVar43 >> bVar16)) + 0x37ced4f6)
  ;
  uVar47 = ((uint)uVar36 & 0xff00) << 8 | (uint)uVar36 << 0x18;
  uVar20 = (uint)(uVar18 & 0xffff0000) | 0xc000;
  bVar14 = bVar14 & 0xf;
  uVar29 = uVar46 + uVar20;
  uVar12 = uVar49 * -0x260b039c & 0xffffffffffffff00 |
           (ulong)(bVar14 & (byte)((ulong)((~uVar40 & 0xffffff00) << 1) >> 8));
  if (uVar29 == 0 || SCARRY4(uVar46,uVar20) != (int)uVar29 < 0) {
    uVar12 = uVar49;
  }
  sVar39 = (ushort)uVar49 + 0x2e04;
  uVar49 = (uVar36 >> 0x18 & 0xfe) >> 1;
  bVar16 = (byte)uVar12 & 0x1f;
  uVar46 = ((uint)uVar18 & 0xffff0000 | 0xc000) << bVar16 | uVar29 >> 0x20 - bVar16;
  bVar8 = (byte)uVar28;
  bVar16 = (char)uVar46 + 0x99;
  uVar13 = (ulong)((uint)uVar13 >> ((byte)uVar38 & 0x1f) & 0xffff0000 |
                  (uint)(ushort)((ushort)uVar46 & 0xff00 | (ushort)bVar16));
  lVar22 = (uVar18 & 0xffff0000) * uVar13;
  uVar46 = (uint)((ulong)lVar22 >> 0x20);
  uVar43 = uVar13 & 0xffffffffffffff00 | (ulong)(byte)(bVar16 >> 1 | (uVar46 != 0) << 7);
  uVar38 = (ushort)uVar29 >> 1;
  bVar32 = (char)uVar38 + 0x31;
  uVar44 = uVar38 & 0xff00 | uVar19 << 0xf | (ushort)bVar32;
  uVar19 = (short)uVar37 << 1 | 1;
  bVar16 = (byte)((ulong)lVar22 >> 0x28);
  uVar18 = (ulong)uVar46 & 0xffffffffffff0000 |
           (ulong)CONCAT11(bVar16 << (bVar8 & 7) | bVar16 >> 8 - (bVar8 & 7),
                           (char)((ulong)lVar22 >> 0x20));
  uVar13 = (uVar18 >> (bVar8 & 0x3f) | uVar18 << 0x40 - (bVar8 & 0x3f)) &
           (ulong)(uVar47 | (ushort)((ushort)(uVar36 >> 0x10) >> 8 | (ushort)(uVar36 >> 8) & 0xff00
                                    | uVar33));
  uVar46 = (uint)(ushort)uVar43;
  uVar18 = uVar12 - ((ulong)(uVar34 & 0xffff0000) | (ulong)uVar28);
  bVar16 = (byte)uVar13;
  uVar38 = (ushort)uVar13 & 0xff00 | (ushort)(byte)(bVar16 + 0x5d);
  if (!SCARRY1(bVar16,']')) {
    uVar18 = uVar18 & 0xffffffffffff0000;
  }
  uVar12 = (ulong)(((~uVar40 & 0x7fffff00 | 0x80000000) ^ 1 << ((uint)uVar12 & 0x1f)) +
                   ((uint)uVar37 & 0xffff0000 | (uint)uVar19) + 1);
  if ('\x01' < (char)((((ushort)uVar50 & 0xff00 | (ushort)uVar49) - (ushort)((short)uVar37 < 0)) +
                      -0x618e >> 8)) {
    uVar12 = uVar18;
  }
  uVar18 = (ulong)(0xa2 < bVar16) << 0x20 | uVar18 & 0xffffffff;
  uVar30 = (uint)(uVar18 >> (bVar8 & 0x1f)) | (uint)(uVar18 << 0x21 - (bVar8 & 0x1f));
  uVar40 = (int)uVar43 << 1;
  uVar50 = uVar50 & 0xffffffffffff0000;
  uVar20 = uVar40 & 0xffffff00 | (uint)(byte)uVar12;
  uVar13 = uVar12 & 0xffffffffffffff00;
  uVar36 = uVar13 | (byte)((byte)uVar40 | (byte)uVar36 >> 7);
  bVar16 = (bVar8 & 0x1f) % 0x11;
  uVar40 = uVar30 & 0xffff0000;
  uVar30 = uVar40 | (uint)(ushort)((short)uVar30 + 0x3979) & 0xffffff00 |
           (uint)(byte)(((byte)uVar49 & ~(byte)(1 << ((uint)uVar38 & 0x1f))) + (char)sVar39);
  uVar19 = uVar19 + (short)uVar36;
  uVar42 = (uVar38 - uVar19) - 1;
  auVar1 = ZEXT116(uVar38 < uVar19 || (ushort)(uVar38 - uVar19) == 0) << 0x40 |
           ZEXT416(uVar29 & 0xffff0000 | (uint)(ushort)(uVar44 >> bVar16 | uVar44 << 0x11 - bVar16))
  ;
  iVar15 = (int)sVar39 + -1;
  uVar18 = (ulong)uVar28 & 0xffffffffffffff0f;
  bVar16 = (byte)uVar18;
  sVar9 = (short)uVar18;
  bVar14 = (byte)uVar42;
  cVar7 = bVar14 - (byte)iVar15;
  bVar41 = cVar7 - 1;
  uVar49 = uVar50 | (ulong)uVar42 & 0xffffffffffffff00 | (ulong)bVar41;
  uVar18 = (long)(int)((((((uVar23 & 0xffff0000 |
                           (uint)(ushort)(uVar33 >> bVar14 | -0x4000 << 0x10 - bVar14)) & 0x7fff8000
                          ) << 1 | uVar46) ^ uVar46 & 0x10) << 1 | 1) + uVar30 * 2) * 0x62ee0400;
  uVar23 = (uint)(uVar18 >> 0x20);
  uVar18 = uVar18 & 0xffffffff;
  if (uVar23 != 0 && uVar23 != 0xffffffff) {
    uVar23 = uVar20;
  }
  uVar26 = (ulong)(uVar47 >> 0x12) & 0xffffffffffffff00 | (ulong)uVar47 << 0x2e |
           (ulong)((byte)(uVar47 >> 0x12) & bVar41);
  uVar43 = (ulong)(uVar40 | (ushort)((ushort)uVar30 >> bVar16 | sVar9 << 0x10 - bVar16)) << 9;
  uVar21 = (ulong)((uint)CONCAT62(0x8044,(ushort)(bVar14 < (byte)iVar15 || cVar7 == '\0') << 0xf |
                                         0x20cf) >> 1 | 0x80000000) ^ 0x36ca;
  cVar7 = (char)(uVar18 >> 8) - (char)uVar23;
  bVar16 = (byte)((ulong)(ushort)(sVar9 << bVar16 % 0x11 |
                                 (ushort)(CONCAT12(1,sVar9) >> 0x11 - bVar16 % 0x11)) >> 8);
  uVar27 = CONCAT44((undefined4)(sVar39 >> 0xf),iVar15) & 0xffffffffffffff00 | 0xff;
  uVar50 = (uVar50 | (ushort)((short)uVar49 + (short)(uVar20 >> 1) + (ushort)((uVar12 & 1) != 0)))
           << 0x2f;
  uVar26 = uVar26 >> (bVar16 & 0x3f) | uVar26 << 0x40 - (bVar16 & 0x3f);
  uVar40 = (((SUB164(auVar1 << (bVar8 & 0x3f),0) | SUB164(auVar1 >> 0x41 - (bVar8 & 0x3f),0)) ^
            (uint)uVar49) & uVar23) + 1;
  uVar49 = (uVar21 & 0xffffffffffff0000 |
           (ulong)(ushort)(((ushort)uVar21 & 0xff00 | (ushort)(byte)((char)uVar21 + bVar32 * '0')) *
                           2 + (short)iVar15)) - 1;
  bVar8 = (byte)((long)uVar36 >> 1);
  uVar38 = (ushort)uVar26;
  uVar50 = uVar50 >> (bVar16 & 0x3f) | uVar50 << 0x40 - (bVar16 & 0x3f);
  uVar12 = uVar49 & 0xffffffffffffff00 |
           (ulong)(byte)((byte)uVar49 << (bVar16 & 7) | (byte)uVar49 >> 8 - (bVar16 & 7));
  uVar21 = (uVar26 & 0xffffffffffff0000 | (ulong)(ushort)(uVar38 >> 0xe | uVar38 << 2)) *
           -0x37a0cd54;
  uVar28 = (ushort)uVar27;
  uVar36 = uVar50 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar50 << 1 | uVar28 >> 0xf);
  uVar33 = (ushort)uVar40;
  uVar38 = CONCAT11(cVar7,bVar16) | uVar33;
  uVar50 = 0xa07f717b0ea506fa;
  if (uVar38 == 0) {
    uVar50 = uVar43;
  }
  uVar46 = (int)CONCAT61((int6)(uVar18 >> 0x10),cVar7) << 8 ^ 1 << ((uint)uVar12 & 0x1f);
  uVar44 = (ushort)uVar46;
  uVar17 = (ushort)CONCAT71((int7)((long)uVar13 >> 9),
                            bVar8 >> (bVar16 & 7) | bVar8 << 8 - (bVar16 & 7));
  uVar17 = uVar17 ^ (ushort)(uVar44 == uVar17) * (uVar17 ^ uVar28);
  uVar42 = uVar44 ^ (ushort)(uVar44 == uVar17) * (uVar44 & uVar17);
  uVar44 = uVar38 & 0xff00 | (ushort)((short)uVar44 < (short)uVar17) | (ushort)uVar12;
  uVar18 = (ulong)(uVar34 & 0xffff0000) | (ulong)uVar44;
  uVar49 = (ulong)(uVar23 ^ (uint)uVar49) & 0xffffffffffffff00 | (ulong)(uVar44 != 0);
  if (uVar36 < uVar27) {
    uVar18 = uVar50 & 0xffffffff;
  }
  bVar16 = (byte)uVar18 & 0x3f;
  uVar50 = uVar50 << bVar16 | uVar50 >> 0x40 - bVar16;
  uVar46 = uVar46 & 0xffff0000 | (uint)(ushort)((uVar42 & 0xff) * (ushort)(byte)(uVar18 >> 8));
  uVar44 = (ushort)uVar49;
  uVar47 = (uint)uVar36 & 0xff |
           (uVar23 >> 8 & 0xffff00 | (uint)(byte)((short)uVar23 - uVar38 >> 8)) << 8;
  uVar34 = uVar46 - uVar47;
  uVar18 = uVar18 & 0xffffffffffffff00 | (ulong)(byte)((byte)uVar18 >> 1 | (uVar46 < uVar47) << 7);
  uVar23 = 0x1f;
  uVar46 = (uint)uVar27;
  if (uVar46 != 0) {
    while (uVar46 >> uVar23 == 0) {
      uVar23 = uVar23 - 1;
    }
  }
  uVar20 = (uint)(byte)((char)uVar50 + 0x2d);
  uVar12 = (ulong)(uVar34 + 0x5e1391e0 +
                  ((uint)(uVar37 & 0xffff0000) | (uint)(ushort)(uVar19 >> 8 | (short)uVar50 << 8)));
  uVar29 = (uint)CONCAT62((int6)((long)uVar13 >> 0x11),uVar17);
  uVar29 = uVar29 >> 0xe | uVar29 << 0x12;
  lVar22 = uVar12 + 1;
  if (lVar22 == 0 || SCARRY8(uVar12,1) != false) {
    uVar47 = uVar29;
  }
  uVar12 = (ulong)uVar47 - 1;
  uVar47 = (uint)((uVar12 & 1) != 0);
  iVar15 = uVar34 + 0x57b5d438 + uVar47;
  uVar36 = ((((uint)uVar50 & 0xffffff00 | uVar20) >> 1 | uVar20 << 0x1f) - uVar18) -
           (ulong)(0xa84a2bc7 < uVar34 || CARRY4(uVar34 + 0x57b5d438,uVar47));
  uVar20 = (uint)lVar22 ^ 0x5492b26e;
  cVar7 = (char)((ulong)(ushort)((short)uVar18 - 1) >> 8);
  uVar34 = iVar15 * 0x10000 | (uint)(ushort)(short)(char)((uint)iVar15 >> 0x10);
  uVar47 = uVar20 >> 1;
  uVar50 = (ulong)(uVar29 | 0x311fe20b | 1 << (uVar46 & 0x1f));
  uVar20 = (((uint)uVar43 & 0x7fff8000) << 1 | (uint)(ushort)((uVar19 >> 8) - (short)uVar20)) ^
           0x9dbbe448;
  uVar18 = (ulong)((uint)uVar49 & 0xffff0000 | (uint)(ushort)(uVar44 >> 8 | uVar44 << 8));
  if (0 < (int)uVar20) {
    uVar18 = uVar50;
  }
  uVar38 = (short)uVar36 << 1 | (ushort)((short)uVar36 < 0);
  uVar30 = uVar47 ^ (uint)(uVar34 == uVar47) * (uVar47 ^ uVar20);
  uVar29 = uVar34 ^ (uint)(uVar34 == uVar47) * (uVar34 & uVar30);
  return CONCAT88(*(undefined8 *)
                   ((ulong)(uVar35 & 0xffff0000 |
                           (uint)(ushort)((ushort)uVar35 & ~(1 << ((ushort)uVar45 & 0xf)))) + 0x58),
                  uVar29 + uVar50 + ((ulong)(ushort)(-(ushort)(uVar34 < uVar47) - uVar38) | 1) +
                  (uVar37 & 0xffff0000 | (ulong)(ushort)(short)cVar7 & 0xffffffffffffff00 |
                  (ulong)(byte)(cVar7 << 1)) + ((ulong)(uVar30 | 1) | 0x8000000000000000) +
                  (ulong)(uVar46 | 0xf91d251f) + (ulong)uVar20 + uVar18 +
                  (ulong)CONCAT31((int3)(uVar12 >> 8) >> 2,(byte)((int)uVar12 >> 2) ^ (byte)uVar29)
                  + (ulong)((int)uVar36 * 0x80 + 0xd791ed48) + (ulong)(uint)(int)(char)uVar36 +
                  (uVar36 & 0xffffffffffff0000 | (ulong)uVar38) + (ulong)(uVar23 >> 0xd) +
                  (((uVar21 & 0xffffffffffff0000 |
                    (ulong)(ushort)(((ushort)uVar21 >> 1 | uVar28 & 0x8000) ^ uVar44)) &
                   (ulong)(uint)((int)(uVar40 & 0xffff0000 | (uint)(uVar33 & uVar42)) >> 0x14)) <<
                  0x21) + -0x57c0caa92);
}



// WARNING: Removing unreachable block (ram,0x004059d1)
// WARNING: Removing unreachable block (ram,0x00405449)
// WARNING: Removing unreachable block (ram,0x0040537c)
// WARNING: Removing unreachable block (ram,0x0040571d)
// WARNING: Removing unreachable block (ram,0x00405ee5)
// WARNING: Removing unreachable block (ram,0x0040591d)
// WARNING: Removing unreachable block (ram,0x00405aa2)

undefined  [16] log_size_10_var_004(void)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  int iVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  byte bVar13;
  char cVar14;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint7 uVar15;
  byte bVar16;
  sbyte sVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined uVar21;
  ushort uVar22;
  long lVar23;
  char cVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  ushort uVar29;
  ulong uVar30;
  byte bVar31;
  short sVar32;
  uint uVar33;
  uint uVar34;
  ulong uVar35;
  ulong uVar36;
  int iVar37;
  long lVar38;
  ushort uVar39;
  uint uVar40;
  ulong uVar41;
  long lVar42;
  uint uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  short sVar47;
  ushort uVar48;
  uint uVar49;
  uint uVar50;
  byte bVar51;
  uint uVar52;
  byte bVar53;
  uint uVar54;
  ulong uVar55;
  bool in_PF;
  bool bVar56;
  
  uVar41 = 0x9417159a;
  if (in_PF) {
    uVar41 = 0x6f;
  }
  bVar16 = (byte)uVar41;
  bVar5 = (byte)(uVar41 >> 8);
  uVar22 = ((ushort)bVar16 << 8 | 0xc9) * 0x3295;
  sVar32 = 0xf;
  if (uVar22 != 0) {
    while (uVar22 >> sVar32 == 0) {
      sVar32 = sVar32 + -1;
    }
  }
  bVar13 = (bVar16 & 0x1f) % 0x11;
  lVar38 = CONCAT62(0xf96780bd1f54,~(1 << ((ushort)bVar16 & 0xf)) & 0x6275) << 1;
  bVar6 = bVar16 & 0xf;
  auVar1 = ZEXT1216(ZEXT1112(CONCAT47(0xfca << (bVar16 & 0x1f) | 0x6fU >> 0x20 - (bVar16 & 0x1f),
                                      0x57) | (undefined  [11])0xc10f00) << 8 |
                    (undefined  [12])0x59) & (undefined  [16])0xffffffffffffffff;
  auVar2 = auVar1 / ZEXT816(0xc00000005857d99b);
  uVar25 = (int)((uint)(byte)(0x3fU >> (bVar16 & 7) | '?' << 8 - (bVar16 & 7)) | 0xd20b6200) >>
           bVar6;
  uVar9 = ~(uint)CONCAT62(SUB166(auVar2 >> 0x10,0),SUB162(auVar2,0) >> 1);
  uVar46 = (ulong)(ushort)(0xd772U >> bVar6 |
                          (short)CONCAT31((undefined3)((char)uVar22 >> 7),
                                          (byte)lVar38 |
                                          (0x6275U >> ((ushort)bVar16 & 0xf) & 1) != 0) <<
                          0x10 - bVar6) | 0x2e42e7be90200000;
  if (SBORROW4(-0x8000,uVar9)) {
    uVar46 = (ulong)(ushort)((ushort)(0x1719e >> bVar13) | 0x719e << 0x11 - bVar13) |
             0x129e0b064e7a0000;
  }
  lVar38 = (ulong)(((uint)lVar38 & 0xffffff00 | (int)(char)uVar22 & 0xffU) + 1) * 2 + -0xa16e7bb7;
  bVar6 = bVar6 + (char)uVar9;
  uVar22 = (short)(char)uVar9 * 0x46;
  sVar32 = 0;
  uVar29 = (ushort)lVar38;
  if (uVar29 != 0) {
    while ((uVar29 >> sVar32 & 1) == 0) {
      sVar32 = sVar32 + 1;
    }
  }
  uVar27 = CONCAT62(SUB166(auVar1 % ZEXT816(0xc00000005857d99b) >> 0x10,0),0x62);
  if (sVar32 != 0x175f) {
    uVar27 = 0x6f;
  }
  bVar13 = bVar6 & 0x1f;
  uVar8 = uVar22 & 0xff | (ushort)(byte)~(byte)((ulong)uVar22 >> 8) << 8;
  uVar29 = 0xf;
  uVar39 = (ushort)uVar27;
  if (uVar39 != 0) {
    while (uVar39 >> uVar29 == 0) {
      uVar29 = uVar29 - 1;
    }
  }
  uVar41 = (ulong)(0x6f < uVar8) << 0x20 |
           uVar41 & 0xffffffffffff0000 |
           (ulong)CONCAT11(bVar5 << (bVar16 & 7) | bVar5 >> 8 - (bVar16 & 7),bVar16) &
           0xffffffffffffff00 | (ulong)bVar6;
  uVar36 = uVar41 >> 0x14;
  uVar18 = (uint)(uVar41 << 0xd);
  uVar54 = uVar9 & 0xffff0000 | (uint)(uVar8 | 0x8000);
  cVar14 = (char)((ulong)(uVar18 | (uint)uVar36) >> 8) << 1;
  bVar5 = (byte)uVar36;
  uVar18 = uVar18 & 0xffff0000;
  uVar49 = ((uint)uVar27 & 0xffff0000 |
           (uint)(ushort)(uVar39 << 1 |
                         (ushort)(((uint)uVar27 * -0x1f533fc6 >> ((uint)uVar8 & 0x1f) & 1) != 0))) *
           -0x333a27e2;
  bVar16 = (bVar5 & 0x1f) % 0x11;
  uVar39 = 0 << bVar16 | 0U >> 0x11 - bVar16;
  uVar33 = (uint)lVar38;
  lVar38 = (ulong)(uVar54 ^ (uint)(uVar54 == uVar33) *
                            (uVar54 & (uVar33 ^ (uint)(uVar54 == uVar33) * (uVar33 ^ uVar49)))) *
           ((ulong)uVar39 & 0xffffff00);
  uVar29 = uVar29 >> 1 | 0x8000;
  cVar4 = (char)((ulong)lVar38 >> 0x20);
  cVar24 = (char)uVar25;
  uVar25 = uVar25 & 0xffff0000;
  uVar54 = (uint)CONCAT11((char)((ulong)lVar38 >> 0x28),cVar24);
  uVar28 = (ulong)&stack0xffffffffffffff90 & 0xffffffffffff0000 |
           (ulong)(ushort)((short)register0x00000020 - 0x70U ^
                          1 << (((ushort)(0x353e6b46 >> bVar13) |
                                (ushort)((uVar9 & 0xffff0000 | (uint)uVar22) << 0x20 - bVar13)) &
                               0xf));
  bVar16 = bVar5 | (byte)((ulong)(uVar25 | uVar54) >> 8);
  uVar33 = (uVar18 | (uint)CONCAT11(cVar14,bVar5) & 0xffffff00 | (uint)bVar16 | 0x100) * 0x2eb03545;
  uVar10 = (long)(ulong)(uint)(int)cVar4 >> 9;
  uVar9 = (uint)((uVar46 ^ uVar9) << 0xf) >> 0xd;
  uVar22 = (CONCAT11(cVar14,(char)uVar10) | 0x100) + (uVar39 & 0xff00);
  bVar5 = (byte)uVar22;
  uVar41 = (ulong)(uVar18 | uVar22) & 0xffffffffffffff00;
  sVar17 = (sbyte)((ulong)bVar5 & 0xffffffffffffff0f);
  uVar55 = (uVar10 & 0xffffffffffffff00 | (ulong)bVar16) & 0xffffffffbd10ff2f;
  uVar36 = uVar10 & 0xffffffffffff0000 | (ulong)CONCAT11(!in_PF,bVar16);
  if (uVar55 != 0) {
    uVar36 = uVar27 & 0xffffffff00000000 | (ulong)(ushort)((short)cVar4 >> 0xf);
  }
  uVar18 = ((uint)uVar41 & 0xffff0000 |
           (uint)(ushort)(((ushort)uVar41 | (ushort)((ulong)bVar5 & 0xffffffffffffff0f)) << sVar17 |
                         (uVar39 & 0xff00 | 0x8b) >> 0x10 - sVar17)) >> 1;
  uVar7 = (short)uVar36 - 1;
  uVar39 = uVar7 & 0xff;
  uVar30 = (ulong)(ushort)((uVar29 ^ (ushort)((ushort)lVar38 == uVar29) * (uVar29 ^ 0x6f - uVar8))
                          << 1) | 0xffffffff353e00b8;
  bVar6 = (byte)uVar18;
  bVar16 = bVar6 & 0x3f;
  auVar1 = ZEXT116(0) << 0x40 |
           ZEXT416(uVar25 | uVar54 & 0xffffff00 | (uint)(byte)(cVar24 - (char)uVar10));
  uVar27 = SUB168(auVar1 >> bVar16,0) | SUB168(auVar1 << 0x41 - bVar16,0);
  bVar6 = bVar6 & 0x1f;
  uVar18 = uVar18 << bVar6 | 0xffffc000U >> 0x20 - bVar6;
  uVar41 = (ulong)uVar18 & 0xffffffffffffff0f;
  bVar6 = (byte)uVar41;
  uVar8 = SEXT12((char)bVar5);
  bVar31 = (byte)uVar33 >> bVar6;
  uVar33 = uVar33 & 0xffffff00;
  uVar29 = (ushort)uVar33 | (ushort)bVar31;
  uVar10 = (ulong)(uVar49 & 0xffff0000 | uVar49 >> 1 & 0x7fff) - 0x31389239;
  bVar13 = (byte)(uVar41 >> 8);
  bVar16 = (byte)uVar39 & bVar13;
  uVar25 = (uint)uVar27 >> 0x11;
  uVar22 = 0;
  if (uVar29 != 0) {
    while ((uVar29 >> uVar22 & 1) == 0) {
      uVar22 = uVar22 + 1;
    }
  }
  bVar53 = (byte)((ulong)(uVar25 | (uint)(byte)uVar27 << 0xf) >> 8);
  uVar29 = CONCAT11((char)(uVar27 >> 8),bVar13);
  uVar48 = (ushort)uVar9 >> bVar6 | uVar8 << 0x10 - bVar6;
  if (bVar13 != 0) {
    uVar48 = uVar29;
  }
  uVar27 = (ulong)CONCAT22((undefined2)((char)bVar5 >> 7),uVar8 + 0x4000);
  if (0xbfff < uVar8 && (ushort)(uVar8 + 0x4000) != 0) {
    uVar27 = (ulong)(ushort)((char)bVar5 >> 7) << 0x10;
  }
  uVar41 = uVar41 - uVar30;
  uVar30 = (ulong)(ushort)((short)uVar30 -
                          CONCAT11(bVar53 << (bVar6 & 7) | bVar53 >> 8 - (bVar6 & 7),(char)uVar25));
  uVar55 = uVar41 | uVar55;
  uVar12 = (ulong)(uint)((int)(uVar9 & 0xffff0000 | (uint)(uVar46 >> 0x31) << 0x13 | (uint)uVar48)
                        >> 0x16);
  uVar35 = (ulong)(uVar33 | bVar31) << 1 | (ulong)((uVar41 & 0x20000) != 0);
  uVar30 = (uVar30 | 0xffffffff353e0000) ^ uVar30 & 2;
  auVar1 = ZEXT816((uVar36 & 0xffffffffffff0000 |
                   (ulong)CONCAT11((byte)((ulong)(ushort)(uVar39 | (ushort)(byte)((byte)((ulong)
                                                  uVar7 >> 8) >> 1) << 8) >> 8) |
                                   (byte)((ulong)uVar29 >> 8),bVar16)) >> 1 |
                   (ulong)((bVar16 & 1) != 0) << 0x3f) * ZEXT816(uVar12);
  uVar8 = (ushort)uVar35;
  bVar16 = ((byte)uVar55 & 0x1f) % 0x11;
  uVar36 = SUB168(auVar1 >> 0x40,0) | 0xb2a9;
  uVar29 = SUB162(auVar1,0);
  uVar39 = uVar29 * -0x3ab7;
  uVar29 = uVar29 & 0x3fff;
  bVar6 = (byte)(uVar55 | 0x200c0);
  bVar5 = (byte)(uVar29 / (ushort)bVar6);
  uVar44 = (ulong)(ushort)((ushort)(((uint3)(uVar8 < 0x2948) << 0x10) >> bVar16) |
                          0 << 0x11 - bVar16) | 0x4cdaaa3d;
  uVar46 = CONCAT71((int7)(char)(uVar10 >> 8),(char)uVar10 << 2) >> 1;
  bVar16 = (byte)uVar44;
  uVar30 = uVar30 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar30 + 1);
  uVar27 = uVar27 & 0xffffffffffff0000 |
           (ulong)(ushort)((uVar39 & 0xff00 | (ushort)(byte)(((char)uVar39 - bVar16) - 1)) << 1);
  uVar25 = SEXT24((short)(uVar29 % (ushort)bVar6 << 8));
  uVar29 = (short)uVar10 + 0x13a;
  if (uVar29 == 0) {
    uVar27 = 0xffffc000;
  }
  uVar9 = uVar25 >> 0x12;
  uVar39 = (ushort)(uVar55 | 0x200c0);
  uVar39 = uVar39 << 7 | uVar39 >> 9;
  bVar31 = (byte)((int)(uint)CONCAT11((char)(uVar46 >> 8) + (char)(uVar55 >> 8),(char)uVar46) >>
                 ((byte)uVar39 & 0x1f));
  bVar13 = (byte)(uVar36 >> 8);
  uVar11 = (ulong)uVar25 & 0xffffffffffff0000 | (ulong)CONCAT11(0x2f,bVar5) & 0xffffffffffffff00 |
           (ulong)(byte)(bVar5 ^ (bVar5 == bVar13) * (bVar5 & bVar13));
  uVar11 = uVar11 ^ (ulong)(uVar11 == uVar12) *
                    (uVar11 & (uVar12 ^ (ulong)(uVar11 == uVar12) * (uVar12 ^ uVar27)));
  uVar25 = SEXT24((short)((ushort)uVar11 & 0xff00 |
                         (ushort)(byte)((byte)uVar11 << 2 | (byte)uVar11 >> 6)));
  bVar5 = (byte)(uVar41 >> 0x3b);
  uVar55 = uVar10 & 0xffffffffffff0000 | (ulong)uVar29;
  uVar45 = uVar55 | 0xc000;
  uVar46 = (ulong)uVar25 & 0xffffffffffff0000;
  uVar29 = (ushort)((uVar25 & 0xffff | ((uint)CONCAT11(bVar13,(char)uVar36 + '2') & 0x3fff) << 0x10)
                   / (uint)(ushort)uVar45) & 0xff |
           (ushort)(byte)((((ulong)uVar39 & 0xffffffffffffff00 | (ulong)bVar31) << 5) >> 8) << 8;
  uVar39 = (ushort)(((uint)uVar30 & 0xffff0000 | (uint)(ushort)((short)uVar30 + 1)) >> bVar5) |
           (ushort)(((int)((uint)(uVar22 >> 1) << 0xc & (uint)uVar36) >> (bVar31 & 0x1f)) <<
                   0x20 - bVar5);
  bVar5 = (byte)uVar39;
  uVar54 = (int)(short)uVar39 & 0xffff;
  uVar25 = (CONCAT22(uVar29 + 0x8b + uVar8 * 2,uVar29) & 0x3fffffff) /
           (uint)(ushort)((ushort)uVar54 | 0xc000);
  uVar12 = uVar11 & 0xffffffff00000000 | uVar46 | (ulong)(ushort)((short)uVar25 << 1);
  uVar41 = uVar12 - 0x97512d84;
  uVar10 = (ulong)(uVar54 | (uint)(ushort)((short)uVar39 >> 0xf) << 0x10) & 0xffffffffffffff00 |
           0xc000;
  uVar30 = (ulong)(byte)uVar54 & 0xffffffffffffff0f;
  sVar17 = (sbyte)uVar30;
  uVar54 = uVar9 | 0xc0000000;
  uVar46 = (ulong)((int)((uint)uVar46 | uVar25 & 0xffff) >> 0x1f & 0x3fffffff) << 0x20 |
           uVar41 & 0xffffffff;
  uVar36 = uVar46 / (ulong)uVar54;
  uVar22 = ((ushort)uVar44 & 0xff00 | (ushort)(byte)(bVar16 >> 7 | bVar16 << 1)) << (bVar6 & 0x1f) &
           0xff00 | (ushort)((uVar55 & 0x8dd017ca) == 0);
  uVar36 = uVar36 & 0xffff0000 | (ulong)(ushort)(short)(char)uVar36;
  bVar16 = (byte)(uVar46 % (ulong)uVar54);
  cVar14 = bVar16 + bVar5;
  uVar46 = (ulong)((uint)uVar45 & 0x8dd017ca);
  if ((CARRY1(bVar16,bVar5) || cVar14 == -1) || cVar14 == -1) {
    uVar46 = uVar36;
  }
  uVar36 = (long)(int)uVar36 * (long)(int)uVar54;
  uVar25 = (int)(short)(CONCAT11((char)(uVar36 >> 0x28) + -1,(char)(uVar36 >> 0x20)) & 0xff7d) *
           0x48f9;
  sVar32 = (short)(uVar25 >> 0x10);
  uVar49 = (uint)(ushort)(((short)uVar39 >> (bVar5 & 0x1f)) << sVar17 |
                         (ushort)uVar41 >> 0x10 - sVar17) - 1;
  uVar29 = ((ushort)(byte)(bVar5 + (char)((uVar36 & 0xffffffff) >> 8) + 1) + 0xb8da) -
           (ushort)(sVar32 != 0 && sVar32 != -1);
  bVar16 = (char)uVar29 - (char)uVar46;
  uVar29 = uVar29 & 0xff00 | (ushort)bVar16;
  sVar32 = uVar22 - uVar29;
  uVar9 = uVar9 << 10;
  uVar55 = (ulong)(bVar16 >> sVar17) | (uVar10 | uVar30) << 0x40 - sVar17;
  uVar33 = (uint)uVar55;
  uVar26 = (uVar49 & 0xffff0000 |
           (uint)(ushort)((ushort)uVar49 >> 1 | (ushort)(uVar22 < uVar29 || sVar32 == 0) << 0xf)) +
           uVar33 * 4;
  iVar37 = (uVar33 & 0xffff0000 | (uint)(ushort)((short)uVar55 << 1)) + 1;
  uVar29 = SEXT12((char)((uVar36 & 0xffffffff) >> 1));
  uVar33 = (int)uVar27 << 1;
  uVar8 = uVar29 & 0x3fff | 0xc0;
  uVar22 = uVar29 & 0xff | 0xc0;
  uVar22 = uVar8 / uVar22 & 0xff | uVar8 % uVar22 << 8;
  uVar49 = ((int)uVar10 - iVar37) - 1;
  bVar16 = (byte)((ulong)uVar22 >> 8) >> 1;
  uVar34 = (((int)uVar35 + -0x78d4f4ef) - iVar37) - (uint)(((char)sVar32 + -1 << sVar17 & 1U) != 0);
  lVar38 = 0x3f;
  iVar37 = 0x3f;
  if (uVar34 != 0) {
    while (iVar37 = (int)lVar38, uVar34 >> lVar38 == 0) {
      lVar38 = lVar38 + -1;
    }
  }
  iVar3 = (int)(short)uVar22 * (int)(short)(ushort)bVar16;
  uVar8 = (ushort)((uint)iVar3 >> 0x10);
  uVar50 = iVar37 + 0x1a72523b;
  uVar19 = uVar49 >> 0x18 | (uVar49 & 0xff0000) >> 8 | (uVar49 & 0xff00) << 8 | (uint)!in_PF << 0x18
  ;
  uVar22 = ((ushort)iVar3 & 0xff) * (uVar8 & 0xff);
  uVar27 = (ulong)uVar22 & 0x3f;
  uVar55 = (ulong)uVar34 ^ 1 << uVar27;
  bVar6 = (byte)uVar22;
  bVar5 = (byte)(uVar49 >> 0x18) & 7;
  bVar13 = (byte)((ulong)uVar22 >> 8);
  bVar31 = (byte)uVar50;
  bVar51 = bVar31 ^ (bVar6 == bVar31) * (bVar31 ^ bVar6);
  uVar10 = (ulong)uVar19 | 0xc000;
  uVar21 = (undefined)
           ((CONCAT22(uVar8 & 0xff |
                      (ushort)(byte)((char)((ulong)uVar8 >> 8) + bVar6 +
                                    ((uVar34 >> uVar27 & 1) != 0)) << 8,
                      CONCAT11(bVar13 << bVar5 | bVar13 >> 8 - bVar5,
                               bVar6 ^ (bVar6 == bVar31) * (bVar6 & bVar51))) & 0x3fffffff) %
           (uint)(ushort)uVar10);
  bVar13 = (byte)((ulong)(uint)-(int)uVar10 >> 8);
  uVar34 = (((uint)(0 >> ((byte)uVar18 & 0x1f)) << 1 | 0x54fd) << 0x1c | 0x500 |
           (uint)(uVar12 < 0x97512d84 || uVar41 == 0)) ^ uVar54 ^ uVar26;
  uVar41 = (ulong)uVar26 | 0xd6d3;
  bVar5 = (bVar13 & 0x1f) % 9;
  bVar53 = (byte)uVar41;
  uVar8 = (ushort)uVar33 >> 1 | (ushort)((int)((uint)uVar36 & 0xffff0000 | (uint)uVar29) < 0) << 0xf
  ;
  uVar29 = (ushort)(byte)(bVar13 + 0x23) + 1;
  bVar31 = (byte)((ulong)uVar29 >> 8);
  uVar22 = uVar8 + 0x93ad;
  cVar14 = (char)((uVar50 & 0xffffff00 | (uint)bVar51) >> 1);
  uVar8 = (ushort)((uVar50 & 0xfffffe00) >> 1) |
          (ushort)(byte)(cVar14 << 4 |
                        (byte)(CONCAT11(0x6c52 < uVar8 || CARRY2(uVar22,(ushort)bVar31),cVar14) >> 5
                              ));
  uVar54 = (uVar50 & 0xfffe0000) >> 1 | (uint)((bVar51 & 1) != 0) << 0x1f |
           (uint)(ushort)(uVar8 << 1 | (ushort)((short)uVar8 < 0));
  bVar6 = (byte)uVar29 & 0x1f;
  uVar49 = (uint)CONCAT71(0x404dba,0xdc < bVar13);
  uVar18 = 0x1f;
  if (uVar34 != 0) {
    while (uVar34 >> uVar18 == 0) {
      uVar18 = uVar18 - 1;
    }
  }
  uVar33 = uVar33 & 0xffff0000 | (uint)(ushort)(uVar22 + (ushort)bVar31) | uVar54;
  if (-1 < (int)uVar33) {
    uVar21 = (undefined)uVar34;
  }
  uVar41 = (ulong)((uint)uVar29 +
                  ((uint)uVar41 & 0xffffff00 | (uint)(byte)(bVar53 << bVar5 | bVar53 >> 9 - bVar5))
                  * 2) + 0x8c3245;
  uVar27 = uVar41 & 0xffffffffffff0000;
  uVar36 = (ulong)(ushort)((short)uVar41 + 0x2922);
  uVar10 = (ulong)(((uint)bVar16 | (uVar25 >> 0xf) << 0x1f) - uVar19 ^ uVar34) | 0x83a;
  bVar16 = (char)(uVar34 >> 1) + 0x12;
  uVar25 = uVar34 >> 1 & 0xffffff00;
  bVar56 = -1 < (short)(CONCAT11(0xfa,uVar21) + 0x5426);
  uVar18 = uVar18 & 0xffff0000 | (uint)(ushort)((ushort)uVar18 ^ (ushort)uVar10) & 0xffffff00 |
           (uint)bVar56;
  lVar38 = (uVar46 & 0xffffffffffff0000 | (ulong)(((ushort)(uVar46 >> 1) & 0x7fff) >> 9)) -
           0x5f0c75ff;
  sVar32 = (ushort)(byte)((long)uVar55 >> 1) + 1;
  uVar55 = CONCAT62((int6)((long)uVar55 >> 0x11),sVar32);
  uVar41 = (long)(int)lVar38 * 0x56e8c7db;
  iVar37 = (int)(uVar41 >> 0x20);
  uVar9 = (uVar9 & 0xffff0000 | uVar9 & 0xffff | 0x300) * 0x1000 + uVar54 +
          (uint)(iVar37 != 0 && iVar37 != -1);
  uVar30 = (ulong)(uVar9 & 0xffffff00 | (uint)(byte)((char)uVar9 + 0xac));
  uVar41 = (uVar41 & 0xffffffff) >> 1;
  uVar22 = (ushort)(uVar33 >> 0x1d) + (short)uVar18;
  uVar46 = uVar10 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar10 + (char)sVar32);
  if (uVar30 != 0xffffffffffffffff && SCARRY8(uVar30,1) == false) {
    uVar46 = uVar55;
  }
  uVar30 = (ulong)((int)CONCAT71((int7)((ulong)lVar38 >> 8),0x39) * 2 + 1);
  sVar32 = (short)uVar41;
  if ((long)((ulong)uVar18 & 0xff | (ulong)(uint7)(int7)(char)(uVar10 >> 8) << 8) < 0) {
    uVar30 = uVar55 & 0xffffffff;
  }
  uVar18 = uVar18 + 0xa0637e5e;
  uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 * 0x1000000;
  lVar38 = 0x3f;
  uVar9 = 0;
  if (uVar18 != 0) {
    while (uVar9 = (uint)lVar38, uVar18 >> lVar38 == 0) {
      lVar38 = lVar38 + -1;
    }
  }
  uVar54 = (uVar25 | (uint)bVar16 & 0xfffffffe) * 2;
  uVar29 = (short)((uVar27 | uVar36 & 0xffffffffffffff00 | (ulong)(byte)(((ushort)bVar56 << 8) >> 5)
                   ) << 3) - 0x79d;
  lVar38 = (ulong)(uVar18 - 1) *
           (uVar46 & 0xffff0000 |
           (ulong)(ushort)((short)uVar46 + ((ushort)uVar25 | (ushort)bVar16) + 1 | 1));
  uVar8 = (ushort)((ulong)lVar38 >> 0x10);
  cVar14 = (char)uVar22;
  uVar10 = (ulong)((uint)(byte)(bVar31 << 7) << 8 |
                  1 << (((uint)(ushort)((short)(char)((byte)(uVar49 >> bVar6) |
                                                     (byte)(uVar49 << 0x20 - bVar6)) *
                                       (short)(char)((ulong)CONCAT11(0xfa,uVar21) >> 8)) & 0x3e) >>
                       1)) << 0x1d;
  uVar39 = uVar8 >> 0xc;
  uVar22 = uVar29 ^ (ushort)(uVar39 == uVar29) *
                    (uVar29 ^ (uVar22 & 0xff00 |
                              (ushort)(byte)(cVar14 + (char)(((ulong)((int)((ulong)lVar38 >> 0x20)
                                                                     != 0) << 0x20) >> 0x1b))));
  uVar35 = (uVar27 | uVar36 & 0x1fffffffffffe000) << 3 | (ulong)uVar22;
  uVar36 = uVar55 - 0xeb580a73 & 0xffffffff00000000 | (ulong)((uint)(uVar55 - 0xeb580a73) | 0x10000)
           | 0x11c79299;
  uVar41 = ((uVar41 & 0xffffffffffff0000 | (ulong)(ushort)-sVar32) >> 8) << 9;
  iVar37 = (int)uVar36;
  bVar16 = (byte)uVar30 ^ cVar14 + 0x7fU;
  uVar27 = uVar30 & 0xffffffffffffff00 | (ulong)bVar16;
  uVar9 = uVar9 & 0xffff0000 | (uint)(ushort)((short)uVar9 << 2) & 0xffffff00 |
          (uint)((char)bVar16 < '\x01');
  uVar25 = (uint)(ushort)(uVar8 >> 0xc ^ (ushort)(uVar39 == uVar29) * (uVar39 & uVar22)) *
           (uint)(ushort)uVar27;
  uVar22 = (ushort)(uVar25 >> 0x10);
  if (uVar22 == 0) {
    uVar36 = (ulong)uVar9;
  }
  uVar25 = (int)(uVar25 & 0xffff) >> 1;
  uVar33 = (uint)(uVar36 << 1);
  uVar18 = uVar33 ^ (uint)(uVar25 == uVar33) * (uVar33 ^ (uint)uVar35);
  uVar29 = (ushort)uVar25 ^ (ushort)(uVar25 == uVar33) * ((ushort)uVar25 & (ushort)uVar18);
  uVar55 = (ulong)((((uint)uVar10 | 0xe800) + 0xe1 + iVar37 * 2 & 0xffff0000 | (uint)uVar22) +
                  0x47a966ee);
  uVar25 = 0x1f;
  if (uVar18 != 0) {
    while (uVar18 >> uVar25 == 0) {
      uVar25 = uVar25 - 1;
    }
  }
  uVar10 = uVar10 | 0xffffffff870ef8ff;
  if (0 < (long)uVar10) {
    uVar27 = 0;
  }
  uVar22 = uVar29 << 0xf | uVar29 >> 1;
  if ((byte)((byte)((ulong)(ushort)(((ushort)(byte)((char)((ulong)uVar9 >> 8) << 1) << 8) >> 1) >> 8
                   ) & (byte)(uVar55 >> 8)) == 0) {
    uVar22 = (ushort)uVar27;
  }
  uVar55 = ~uVar55;
  uVar30 = (ulong)((uint)(ushort)(sVar32 * 0x5cfd + 0xd498) | 0x39380000);
  uVar9 = (uint)uVar22 ^ 1 << ((uint)uVar10 & 0x1f);
  uVar36 = (uVar36 << 1 & 0xffffffff00000000 | (ulong)uVar18 & 0xffffffffffffff00 |
           (ulong)(byte)uVar18) & (ulong)uVar9;
  uVar10 = (ulong)uVar25 * -0x3b57f821 & 0xffffffffffffff00 |
           (ulong)(byte)((char)((ulong)uVar25 * -0x3b57f821) - (char)uVar55);
  lVar38 = 0;
  uVar25 = 0;
  if (uVar36 != 0) {
    while (uVar25 = (uint)lVar38, (uVar36 >> lVar38 & 1) == 0) {
      lVar38 = lVar38 + 1;
    }
  }
  iVar37 = (int)CONCAT71((uint7)(uVar35 >> 9),-1 < (int)uVar25) + uVar54;
  bVar16 = (byte)((ulong)(ushort)((ushort)uVar36 + (short)iVar37 * 2) >> 8);
  uVar55 = uVar55 & 0xffffffffffff0000 |
           (ulong)(ushort)((uint)((int)(short)((ushort)uVar9 | 0x10) * (int)(short)uVar54) >> 0x10);
  uVar35 = uVar41 & 0xffff | (uVar46 >> 0x21) << 0x10;
  lVar38 = uVar30 + 0x4255056c;
  uVar30 = (ulong)uVar54 + 0x3e3b9a4c + (ulong)(0xffffffffbdaafa93 < uVar30);
  lVar23 = -uVar55;
  uVar9 = iVar37 + 1;
  if ((long)uVar55 < 1) {
    uVar9 = uVar25;
  }
  uVar26 = (uint)lVar38;
  uVar18 = 1 << (uVar26 & 0x1f);
  uVar22 = (ushort)lVar38 | 0xc000;
  uVar54 = uVar18 & 0xffff | (uint)((ushort)lVar23 & 0x3fff) << 0x10;
  uVar33 = uVar54 / (uint)uVar22;
  uVar18 = uVar18 & 0xffff0000;
  uVar49 = uVar33 & 0xffff;
  bVar5 = (byte)((ulong)(uVar18 | uVar49) >> 8);
  bVar56 = (uVar33 & 0x400) != 0;
  uVar33 = (int)CONCAT71((uint7)(uVar27 >> 8) & 0xffffffffffff00 |
                         (uint7)(byte)(((ushort)uVar27 << 1) >> 8),0x6b) << 1;
  uVar34 = ((uint)uVar36 & 0xffff0000 | (uint)(ushort)uVar36) * -0x7a89be52;
  uVar50 = (uint)uVar10 & 0xffff0000 | (uint)(ushort)((short)uVar10 + (ushort)uVar49);
  uVar54 = (uint)lVar23 & 0xffff0000 | uVar54 % (uint)uVar22 |
           (uint)(1 << (((ulong)CARRY1(bVar16,bVar16) ^ 0x6242ef27d4fda091) & 0x3f));
  if (bVar56) {
    uVar54 = uVar34;
  }
  uVar52 = ~(uint)((uVar41 & 0xffffffffffff0000 |
                   CONCAT71((uint7)(byte)((ushort)((short)(uVar46 >> 0x11) << 1) >> 8),0x80)) >> 1);
  uVar29 = (ushort)(uVar54 + 0x97dc9c44);
  uVar19 = uVar50 + 0xe68176a6;
  uVar52 = (uVar52 >> 0x18 | (uVar52 & 0xff0000) >> 8 | (uVar52 & 0xff00) << 8 | uVar52 << 0x18) + 1
  ;
  if (SCARRY4(uVar50,-0x197e895a) == (int)uVar19 < 0) {
    uVar52 = uVar34;
  }
  uVar41 = (uVar35 | 0xbe) & 0x1abd2a80;
  uVar29 = uVar29 << 0xd | uVar29 >> 3;
  if (uVar41 != 0) {
    uVar29 = (ushort)uVar41;
  }
  uVar50 = 0x76040f0d - ((int)uVar52 >> 0x1f);
  uVar52 = (uVar54 + 0x97dc9c44 & 0xffff0000 | (uint)uVar29) - 1;
  uVar54 = uVar50 & 0xffffff00 | 1;
  if ((ushort)((ushort)uVar49 & (ushort)uVar41) == 0) {
    uVar19 = uVar54;
  }
  uVar29 = (ushort)(uVar30 >> 1);
  uVar44 = (-(ulong)uVar9 & 0xffffffffffff0000 | (ulong)bVar5) >> 1;
  uVar27 = (ulong)((uint)uVar44 | 0xc0000000);
  uVar36 = (ulong)(uVar52 & 0x3fff0000 | (uint)CONCAT11((char)uVar49,(char)uVar52 + -0x2c)) << 0x20
           | (ulong)(uVar18 | CONCAT11(bVar5,(char)uVar49)) & 0xffffffffffff8300 |
             (ulong)(uVar52 >> 8) & 0xff;
  uVar10 = uVar36 % uVar27;
  uVar55 = (ulong)((uVar26 & 0xffff0000 | (uint)uVar22) >> 1) << 0x1b;
  uVar46 = (((ulong)uVar34 & 0x7fffffffffff8000) << 1 | (ulong)uVar34 & 0x7fff) - 0x2b7cf200;
  uVar49 = ((int)(uVar36 / uVar27) + 0x47b77495) * -0x13935573;
  uVar12 = (ulong)(uVar33 & 0xffff0000 | (uint)(ushort)((short)uVar33 << 1)) | 0xc000;
  uVar33 = uVar19 >> 2;
  uVar36 = (uVar35 & 0x1abd2a00) >> 0xf;
  uVar35 = uVar12 >> 1;
  uVar52 = (uint)uVar36;
  uVar26 = uVar52 & 0xffffffef;
  uVar9 = (int)(short)((short)(char)((byte)((uVar49 & 0xffff |
                                            (uint)((ushort)uVar10 & 0x3fff) << 0x10) /
                                           (uint)(ushort)uVar12) ^ 0x7f) * (short)(char)uVar36) *
          (int)(short)uVar26;
  bVar16 = (byte)(uVar9 >> 0x10);
  uVar18 = uVar50 & 0xffff0000 | 0xffff;
  uVar26 = (uVar26 - ((uint)uVar10 & 0xffff0000 | uVar9 >> 0x10)) - 1;
  uVar15 = (uint7)((ulong)(uVar49 & 0xffff0000 | uVar9 & 0xffff) *
                   ((ulong)uVar19 << 0x3f | (ulong)uVar33) >> 8);
  uVar36 = CONCAT71(uVar15,0xaa);
  if ((long)uVar35 <= (long)uVar36) {
    uVar18 = uVar50 & 0xffff0000 | uVar33 & 0xffff;
  }
  uVar36 = (ulong)(uVar15 ^ (uint7)((ulong)(uVar36 == uVar35) * (uVar35 & uVar36) >> 8)) << 8;
  uVar10 = (ulong)uVar19 << 0x3f | (ulong)(uVar33 | 0x80000000);
  bVar5 = (byte)uVar18;
  uVar33 = (uint)uVar55 | (uint)(ushort)((ushort)uVar44 >> 0xf);
  uVar10 = uVar10 >> (bVar16 & 0x3f) | uVar10 << 0x40 - (bVar16 & 0x3f);
  uVar8 = (ushort)uVar10;
  uVar35 = uVar35 << (bVar16 & 0x3f);
  uVar9 = (uint)uVar36;
  uVar27 = uVar27 - (uVar25 + 0xe6209f0c & 0xffff0000 |
                    (uint)(ushort)((short)(uVar25 + 0xe6209f0c) << 1 |
                                  (ushort)((uVar52 >> 4 & 1) != 0)));
  uVar22 = (short)uVar27 * -0x5f29;
  uVar25 = ((uint)uVar30 & 0xffff0000 |
           (uint)(ushort)(((ushort)(CONCAT12((byte)uVar41 < 0x51,uVar29) >> 8) & 0xff7f) >> 3 |
                         (uVar29 & 0x7f00) << 6)) + 0x69eda61d & 0xffff0000 | (uint)uVar22;
  iVar37 = (int)uVar28 + (uVar9 & 0xffff0000 | (uint)(ushort)(short)(char)(bVar5 - 1)) * 2;
  uVar9 = uVar9 & 0xffff0000 | (uint)(ushort)((short)(char)(bVar5 - 1) * (short)iVar37);
  lVar38 = (uVar46 & 0xffffffffffff0000 |
           (ulong)(ushort)-((ushort)uVar46 & 0xff00 |
                           (ushort)(byte)((byte)uVar46 >> (bVar16 & 0x1f)))) * -0x39cb11d3;
  uVar49 = uVar33 ^ (uint)(uVar9 == uVar33) * (uVar33 ^ (uint)lVar38);
  uVar9 = uVar9 ^ (uint)(uVar9 == uVar33) * (uVar9 & uVar49);
  sVar32 = 0;
  if (uVar22 != 0) {
    while ((uVar22 >> sVar32 & 1) == 0) {
      sVar32 = sVar32 + 1;
    }
  }
  uVar41 = (ulong)(uint3)((uint)iVar37 >> 8) * 0x100;
  sVar32 = 0;
  if ((ushort)uVar18 != 0) {
    while (((ushort)uVar18 >> sVar32 & 1) == 0) {
      sVar32 = sVar32 + 1;
    }
  }
  bVar16 = (char)(uVar9 >> 8) >> 2;
  bVar6 = (byte)lVar38;
  uVar30 = (ulong)(uVar26 & 0x93910000 |
                  (uint)(ushort)(((short)(((short)uVar26 << 9 |
                                          ((ushort)uVar54 & 0xff00 | 0xa2) >> 7) & 0x99e4) >> 1) <<
                                1));
  uVar22 = (short)uVar9 >> 10 & 0xff00U | (ushort)uVar49 & 0xff;
  uVar29 = -uVar22;
  uVar46 = 0x3f;
  if (uVar35 != 0) {
    while (uVar35 >> uVar46 == 0) {
      uVar46 = uVar46 - 1;
    }
  }
  lVar38 = (~(ulong)(uVar34 >> 0x1f) & 0xffffffffffffff00 |
           (ulong)(byte)((byte)~(ulong)(uVar34 >> 0x1f) ^ bVar5)) + 1;
  uVar46 = uVar46 ^ uVar25;
  if (!bVar56) {
    uVar30 = uVar27 & 0xffff0000;
  }
  sVar47 = (short)lVar38;
  uVar55 = (uVar55 & 0xffffffff00000000 | (ulong)uVar49 & 0xffffffffffffff00 |
           (ulong)(byte)(bVar16 ^ (bVar16 == bVar6) *
                                  (bVar16 & (bVar6 ^ (bVar16 == bVar6) * (bVar6 ^ bVar5))))) ^
           1 << ((ulong)(ushort)(sVar47 + 1) & 0x3f);
  sVar32 = (short)((uVar27 & 0xffff0000) >> 0xc);
  uVar39 = (short)uVar41 + sVar32 * 4;
  lVar23 = 0x3f;
  if (uVar55 != 0) {
    while (uVar55 >> lVar23 == 0) {
      lVar23 = lVar23 + -1;
    }
  }
  uVar27 = (uVar36 & 0xffffffff00000000 | 0x20000000000 |
            (ulong)(uint)(int)(short)uVar22 & 0xffffffffffff0000 |
           (ulong)(ushort)(uVar39 & 0xff |
                          (((ushort)(((ushort)uVar55 >> ((ushort)uVar46 & 0xf) & 1) != 0) << 8) >> 5
                          ) << 8)) - 1;
  uVar54 = (uint)lVar38 & 0xffff0000 | (uint)(ushort)(sVar47 + 0xb2cf);
  uVar27 = (uVar27 & 0xffffffffffff0000 | (ulong)(ushort)(short)(char)uVar27) - 0xeb07eba1;
  uVar41 = uVar41 & ~(1 << (uVar27 & 0x3f));
  uVar15 = (uint7)((ulong)lVar23 >> 8) & 0xffffffffffff00 | (uint7)(byte)((ulong)lVar23 >> 8);
  uVar9 = 0;
  if (uVar54 != 0) {
    while ((uVar54 >> uVar9 & 1) == 0) {
      uVar9 = uVar9 + 1;
    }
  }
  uVar26 = (uint)(uVar46 >> 1) | 0xe8e9d059;
  uVar46 = uVar41 & 0xffffffffffff0000;
  uVar41 = (ulong)(ushort)((short)uVar41 << 1 | (ushort)uVar26 >> 0xf);
  uVar49 = (uint)((uVar10 & 0xffffffffffff0000 | (ulong)(ushort)(uVar8 << 3 | uVar8 >> 0xd)) >> 1);
  uVar33 = uVar49 >> 6;
  uVar49 = uVar49 << 0x1a;
  cVar14 = (char)(uVar26 >> 8) >> 7;
  sVar17 = -cVar14;
  uVar22 = (short)(ushort)uVar26 >> sVar17;
  uVar26 = uVar26 & 0xffff0000 | (uint)uVar22;
  uVar34 = uVar26 >> sVar17 | uVar26 << cVar14 + 0x20;
  sVar17 = (sbyte)((uVar46 | uVar41) << 1);
  iVar37 = (int)CONCAT71(uVar15,(char)uVar22 + '\x01');
  uVar50 = uVar54 >> sVar17 | iVar37 << 0x20 - sVar17;
  bVar16 = (char)(uVar27 >> 0x18) >> 7;
  uVar26 = (uint)((uVar27 & 0xffffffffffff0000 | (ulong)(ushort)~(ushort)uVar27) >> 0xd) & uVar9;
  uVar54 = ((uVar18 & 0xffffff00 |
            (uint)(byte)(bVar5 ^ ((byte)uVar29 == bVar5) * (bVar5 ^ (byte)((ulong)uVar29 >> 8)))) <<
            1 | (uint)uVar30 >> 0x1f) + iVar37;
  if (uVar54 == 0) {
    uVar9 = uVar9 & 0xffff0000;
  }
  uVar22 = SEXT12((char)uVar26);
  uVar26 = uVar26 & 0xffff0000;
  uVar19 = uVar26 | uVar22;
  uVar41 = ((uVar46 | uVar41 & 0x7fffffffffffff80) << 1 |
           (ulong)(byte)(sVar17 - (char)((ulong)uVar19 >> 8))) & 0xffffffffffffae15;
  if (!bVar56) {
    uVar41 = (ulong)uVar50;
  }
  uVar18 = (((int)uVar18 >> 7 & 0xfe61U) << 0x10 |
           (uint)(ushort)(((ushort)(CONCAT12((short)uVar39 < 0,uVar39) >> 8) | 0x80) >> 1 |
                         sVar32 << 10)) + (uint)(ushort)bVar16 + 1;
  lVar38 = (ulong)(uVar25 >> 0xc) + 0x38d79a67;
  uVar34 = (uVar34 & 0xffff0000 | (uint)(ushort)((short)uVar34 - 0x5c6)) & uVar18;
  uVar18 = uVar18 & 0xffff0000 |
           (uint)(ushort)((ushort)((uVar18 & 0xffff) << 0xc) | (ushort)((uVar18 & 0xffff) >> 5));
  uVar40 = (int)(uVar30 >> 1) + 0x5d08d15a;
  sVar17 = (sbyte)(uVar41 & 0xffffffffffffff0f);
  uVar7 = (short)uVar54 << sVar17 | (ushort)uVar34 >> 0x10 - sVar17;
  uVar52 = (uint)(uVar41 & 0xffffffffffffff0f);
  uVar25 = uVar52 + uVar19;
  uVar20 = uVar25 + 1;
  bVar5 = (byte)uVar20 & 0x1f;
  uVar43 = uVar18 << bVar5 |
           (uint)(CONCAT14(CARRY4(uVar52,uVar19) || 0xfffffffe < uVar25,uVar18) >> 0x21 - bVar5);
  uVar8 = (short)uVar20 + 0xb787;
  uVar29 = ((ushort)((uVar33 & 0xffffff00 | uVar49 | (uint)(byte)((char)uVar33 - 1)) >> 1) & 0x7fff)
           + 0x7811;
  bVar13 = (byte)uVar29;
  uVar39 = (ushort)lVar38;
  uVar26 = uVar26 | (ushort)(uVar22 & 0xff |
                            (ushort)(byte)(((short)(uVar39 + 0x37b9) < 0) << 7 |
                                           (uVar39 == 0xc847) << 6 |
                                           (((bVar13 & 0xf) + (bVar13 & 0xf) & 0x10) != 0) << 4 |
                                           bVar56 << 2 | 2U | uVar39 < 0xc847) << 8);
  uVar41 = (ulong)uVar26 & 0x3f;
  uVar46 = 1 << uVar41;
  uVar19 = uVar40 & 0xffff0000 |
           (uint)(ushort)((short)(uVar40 >> 1) << 1 | (ushort)((uVar26 >> uVar41 & 1) != 0));
  lVar38 = ((ulong)uVar26 | uVar46 & 0xffffffff) * lVar38;
  uVar26 = (int)((ulong)lVar38 >> 0x20) + 0x605efe7e;
  uVar39 = (short)(char)lVar38 * (short)(char)uVar50;
  cVar14 = (char)(uVar39 >> 8);
  uVar25 = (uint)(cVar14 != '\0' && cVar14 != -1);
  uVar18 = uVar19 + 0x138f5231;
  uVar52 = uVar18 - uVar25;
  uVar22 = (short)uVar50 << 1;
  uVar48 = uVar22 | (uVar19 < 0xec70adcf || uVar18 < uVar25);
  uVar25 = uVar50 & 0xffff0000;
  uVar41 = (long)(int)((uint)lVar38 & 0xffff0000 | (uint)uVar39) * (long)(int)(char)uVar50;
  uVar50 = (uint)(uVar41 >> 0x20) & 0xffff0000 |
           (uint)(ushort)((short)(uVar41 >> 0x20) << 6 | (ushort)uVar26 >> 10);
  bVar31 = (byte)(uVar9 >> 0x1b);
  uVar39 = (ushort)bVar16 + (short)(char)bVar31 * 8;
  bVar5 = (byte)uVar8;
  bVar53 = ((byte)uVar54 & 0x9a) - 0x27;
  bVar6 = (byte)uVar52;
  uVar52 = uVar52 & 0xffffff00;
  uVar18 = uVar33 & 0xffff0000 | uVar49 | (uint)uVar29 & 0xffffff00 | (uint)(byte)(bVar13 * '\x02');
  if (-1 < (int)((uVar25 | uVar48) + 0x86aa092e)) {
    uVar18 = uVar50;
  }
  uVar27 = (ulong)(bVar16 & bVar13 * '\x02') << (bVar5 & 0x3f);
  cVar14 = bVar53 + bVar5;
  uVar36 = CONCAT71(uVar15,cVar14);
  uVar54 = (uVar54 & 0xffff0000 | (uint)uVar7 & 0xffffff00 |
           (uint)(byte)((char)uVar7 + (char)((ulong)(uVar54 & 0xffff0000 | (uint)uVar7) >> 8))) >>
           (bVar5 & 0x1f) | uVar50 << 0x20 - (bVar5 & 0x1f);
  if (-1 < cVar14) {
    uVar54 = uVar52 | (byte)(bVar6 << (bVar5 & 7) | bVar6 >> 8 - (bVar5 & 7));
  }
  uVar46 = uVar46 >> 0x24 & 0xffffffffffff0000 |
           (uVar46 & 0xffffffff00000000 | uVar41 & 0xffffffff) << 0x1c |
           (ulong)(ushort)((ushort)(byte)(uVar46 >> 0x24) * (ushort)(byte)(uVar26 >> 0x18)) &
           0xffffffffffff00ff;
  uVar41 = (ulong)((uVar34 & 0xffffff00 | uVar34 >> 1 & 0x7f) ^ 0x605efe7e);
  if (!bVar56) {
    uVar41 = uVar46;
  }
  lVar23 = (long)(int)uVar46 + -0x3de80636;
  bVar5 = (byte)((long)(ulong)(uVar20 & 0xffff0000 | (uint)uVar8 & 0xffffff00 | (uint)bVar53) >> 1)
          & ~(byte)(1 << ((uint)uVar39 & 0x1f));
  uVar29 = (ushort)((uint)(int)(char)bVar31 >> 1);
  uVar33 = (uint)(uVar48 ^ uVar22 & 0x4000);
  uVar20 = uVar9 >> 0x1b ^ (uVar25 | uVar33);
  uVar9 = uVar18 << (bVar5 & 0x1f) | uVar18 >> 0x20 - (bVar5 & 0x1f);
  lVar38 = uVar41 << 3;
  uVar22 = (ushort)uVar9;
  uVar18 = uVar9 & 0xffff0000 | (uint)(ushort)(uVar22 >> 0xc | uVar22 << 4);
  lVar42 = (ulong)(uint3)(uVar52 >> 8) << 8;
  bVar16 = (byte)lVar38 & 0x1f;
  uVar19 = (uint)(byte)(uVar39 >> (bVar5 & 0x1f));
  uVar10 = (ulong)CONCAT11((byte)((ulong)lVar38 >> 8) >> 1,(byte)lVar38) & 0xffffffffffffff0f;
  uVar46 = (long)(int)((uint)lVar23 & 0xffff0000 | (uint)(ushort)((short)lVar23 * -0x4a43)) *
           (long)(int)uVar41;
  lVar23 = (ulong)(uVar43 & 0xffff0000 |
                  (uint)(ushort)(uVar29 << (bVar5 & 0xf) | uVar29 >> 0x10 - (bVar5 & 0xf))) *
           0x40000;
  bVar6 = (byte)uVar10;
  uVar50 = (uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 | uVar26 * 0x1000000)
           << bVar6;
  uVar22 = (short)uVar27 + 0xca7fU >> 9 | (short)uVar10 << 7;
  uVar34 = (uVar43 & 0xff00 | (uint)(byte)-(char)uVar46) >> bVar6;
  sVar32 = (short)uVar34;
  uVar26 = (uint)lVar42;
  uVar49 = (uint)(ushort)((ushort)lVar42 >> 7);
  uVar9 = 0;
  if ((uint)lVar23 != 0) {
    while (((uint)lVar23 >> uVar9 & 1) == 0) {
      uVar9 = uVar9 + 1;
    }
  }
  uVar40 = ((uint)lVar38 & 0xffff0000 | (uint)uVar10) - 1;
  uVar52 = (uint)CARRY4(uVar19 * 0x2000000,uVar50);
  uVar43 = (uVar26 & 0xffff0000 | uVar49) + 0x2a98ebe1 + uVar52;
  uVar10 = (ulong)uVar18 << 0x36;
  uVar55 = (ulong)(uVar18 >> 10);
  uVar30 = uVar10 | uVar55;
  if (SCARRY8(lVar23,1) == false) {
    uVar30 = uVar10 | uVar55 & 0xffffffffffff0000 | uVar41 & 0xffff;
  }
  uVar18 = (uVar50 & 0xffff0000 | (uint)(ushort)(uVar46 >> 0x20)) << 3;
  uVar50 = (uVar20 << bVar16 | uVar20 >> 0x20 - bVar16) - uVar40;
  uVar29 = uVar22 ^ 0x993d;
  uVar10 = (uVar27 & 0xffffffffffff0000 | (ulong)uVar22) ^ 0x993d;
  bVar16 = (byte)uVar40 & 0x1f;
  uVar27 = (ulong)((uVar50 & 1) != 0) << 0x20 | uVar36 & 0xffffffff;
  return CONCAT88(*(undefined8 *)(uVar28 + 0x58),
                  (ulong)(uVar9 & 0xffff0000 |
                          (uint)CONCAT11(((short)uVar29 < 0) << 7 | (uVar29 == 0) << 6 |
                                         (((uVar26 & 0xfff0000 | uVar49) + 0xa98ebe1 + uVar52 &
                                          0x10000000) != 0) << 4 | bVar56 << 2,(char)uVar9) | 0x200)
                  + (ulong)CONCAT31((uint3)(uVar54 >> 9),(byte)(uVar54 >> 1) >> (bVar5 & 0x1f)) +
                  (ulong)(uVar40 & 0xffffff00 | (uint)(byte)(((byte)uVar40 - (char)uVar18) - 1)) +
                  (uVar46 >> 0x20) +
                  (ulong)(uVar34 & 0xffff0000 |
                         (uint)(ushort)((ushort)(CONCAT12((int)(uVar19 << 0x18) < 0,sVar32) >>
                                                bVar6 % 0x11) | sVar32 << 0x11 - bVar6 % 0x11)) +
                  (uVar10 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar10 + 0x3a)) + (ulong)uVar18
                  + (ulong)uVar43 + 0x733ffff901027ee9 + lVar23 + (uVar41 & uVar36) +
                  (ulong)(uVar25 | uVar33 & 0xffffff00 | 1) + uVar30 +
                  ((ulong)(uVar50 >> 1) | (ulong)(uVar43 < 0x6b4b7744) << 0x3f) +
                  (ulong)((uint)(uVar27 << bVar16) | (uint)(uVar27 >> 0x21 - bVar16)));
}



// WARNING: Removing unreachable block (ram,0x004067e8)
// WARNING: Removing unreachable block (ram,0x004062c7)
// WARNING: Removing unreachable block (ram,0x00406057)
// WARNING: Removing unreachable block (ram,0x00406477)
// WARNING: Removing unreachable block (ram,0x00406a74)
// WARNING: Removing unreachable block (ram,0x00406a56)
// WARNING: Removing unreachable block (ram,0x0040636b)
// WARNING: Removing unreachable block (ram,0x004067f3)
// WARNING: Removing unreachable block (ram,0x00406c6e)

undefined  [16] log_size_10_var_005(void)

{
  int iVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  uint3 uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint7 uVar12;
  uint6 uVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  sbyte sVar17;
  ushort uVar18;
  char cVar20;
  uint uVar19;
  short sVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  undefined uVar25;
  char cVar27;
  uint uVar26;
  ushort uVar28;
  int iVar29;
  uint uVar30;
  ulong uVar31;
  ushort uVar32;
  uint uVar33;
  uint uVar34;
  long lVar35;
  byte bVar36;
  uint uVar37;
  ushort uVar38;
  ushort uVar39;
  uint uVar40;
  short sVar41;
  char cVar42;
  ushort uVar43;
  uint uVar44;
  ulong uVar45;
  ulong uVar46;
  uint uVar47;
  uint uVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  ushort uVar52;
  uint uVar53;
  bool bVar54;
  bool in_PF;
  
  uVar7 = 0x1a1f50a8;
  if (!in_PF) {
    uVar7 = 0x333b89da;
  }
  uVar45 = (ulong)(uVar7 ^ 0x5bbcdae1) - 0xe56a5892;
  lVar24 = 0;
  while ((0x922f010d2a6cbccfU >> lVar24 & 1) == 0) {
    lVar24 = lVar24 + 1;
  }
  uVar11 = uVar45 & 0xffffffffffff0000;
  uVar51 = uVar45 >> 1 & 0x7fff;
  uVar46 = uVar11 | uVar51 | 0xc000000000000000;
  uVar33 = ((uint)lVar24 & 0xffff0000 | (uint)(ushort)((ushort)lVar24 | 0x200)) * 8 + 0xe9468ab;
  uVar7 = (SUB164(((CONCAT88(0x4803dbb0ff661978,0x30) | (undefined  [16])0x70c0) &
                  (undefined  [16])0xffffffffffffffff) / ZEXT816(uVar46),0) + -0x458f6f9) * 2;
  bVar36 = (byte)((ulong)uVar7 >> 8);
  auVar4 = ZEXT816((ulong)uVar7) * ZEXT816(uVar46);
  uVar8 = SUB164(auVar4,0);
  uVar7 = (uint)(ushort)((ushort)(CONCAT12((uVar33 >> (uVar7 & 0x1f) & 1) != 0,0xc681) >> 0xf) |
                        0x1a04);
  uVar34 = uVar7 ^ (uint)(uVar8 == uVar7) * (uVar7 ^ 0x5daac681);
  uVar8 = uVar8 ^ (uint)(uVar8 == uVar7) * (uVar8 & uVar34);
  uVar18 = (short)(char)bVar36 + 0x7d8b;
  uVar7 = (uint)(((ulong)uVar8 & 0xffffffffffff000) << 4) |
          (uint)(ushort)(SUB162(auVar4 >> 0x40,0) & 0xff00 |
                        (ushort)(SUB161(auVar4 >> 0x40,0) & bVar36));
  iVar29 = 0x1f;
  if (uVar7 != 0) {
    while (uVar7 >> iVar29 == 0) {
      iVar29 = iVar29 + -1;
    }
  }
  uVar8 = (int)(((ulong)uVar8 & 0xe94680) << 4) * 0xaa81a2c;
  uVar7 = ((uint)(byte)((char)uVar34 + 0x3e) | 0x978c9400) + (int)(uVar11 | uVar51);
  uVar7 = uVar7 & 0xffff0000 | (uint)(ushort)((short)uVar7 + 0x8f55);
  uVar49 = (ulong)uVar7;
  uVar38 = (short)(iVar29 - 1U) + 0x57fc;
  uVar50 = (ulong)(uVar33 & 0xffff0000 | (uint)(ushort)~(ushort)uVar33 & 0xffffff00 |
                  (uint)(byte)-(char)~(ushort)uVar33);
  uVar8 = uVar8 & 0xffff0000 | (uint)(ushort)((short)uVar8 * -0x397f);
  uVar10 = (ulong)CONCAT31((int3)((int)uVar8 >> 9),(char)((ulong)(uint)((int)uVar8 >> 1) >> 8));
  uVar7 = uVar7 + 0xea;
  uVar46 = 0;
  if ((uVar38 & 0x40) == 0) {
    uVar46 = uVar51;
  }
  auVar4 = SEXT816((long)uVar10) * SEXT816((long)uVar50);
  lVar24 = SUB168(auVar4 >> 0x40,0);
  if (lVar24 == 0 || lVar24 == -1) {
    uVar49 = CONCAT62(0x41434baec126,uVar18) & 0xffffffff;
  }
  lVar24 = (ulong)(uVar7 & 0xffff0000) + 5 + uVar50;
  bVar16 = (byte)uVar18;
  bVar36 = (bVar16 & 0x1f) % 9;
  bVar6 = (byte)lVar24;
  lVar35 = (long)((ulong)uVar34 & 0xffffffffffff0000 | 0xc600) >> (bVar16 & 0x3f);
  uVar31 = (ulong)uVar34 & 0xffffffffffff0000 |
           (ulong)(ushort)(uVar18 & 0xff | 0xc600 | (ushort)uVar51);
  uVar43 = 0xf;
  uVar32 = (ushort)lVar35;
  if (uVar32 != 0) {
    while (uVar32 >> uVar43 == 0) {
      uVar43 = uVar43 - 1;
    }
  }
  uVar10 = uVar10 * uVar50 & 0xff;
  iVar1 = 0x1f;
  sVar21 = 0x1f;
  if (uVar43 != 0) {
    while (sVar21 = (short)iVar1, uVar43 >> iVar1 == 0) {
      iVar1 = iVar1 + -1;
    }
  }
  bVar14 = (byte)uVar10;
  uVar46 = (long)((ulong)((((iVar29 - 1U & 0xffff0000 | (uint)uVar38) & 0x7fffff80) << 1 |
                          (uint)uVar38 & 0x7f) >> (bVar16 & 0x3f)) |
                 uVar46 << 0x40 - (bVar16 & 0x3f)) >> (bVar14 & 0x3f);
  uVar49 = uVar49 >> (bVar14 & 0x3f) |
           (ulong)(((uint)lVar24 & 0xffffff00 | (uint)(byte)(bVar6 >> bVar36 | bVar6 << 9 - bVar36))
                   << 9 | (uint)uVar31 >> 0x17) << 0x40 - (bVar14 & 0x3f);
  uVar50 = uVar49 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar49 + bVar14 + 1);
  lVar24 = uVar31 << 10;
  uVar38 = -(short)uVar46;
  uVar43 = (ushort)uVar51 >> 0xd | sVar21 << 3;
  uVar51 = uVar11 | 0xc000000000000000;
  uVar46 = CONCAT62((undefined6)((short)uVar38 >> 0xf),
                    uVar38 >> 1 | (ushort)((uVar46 >> 0x28 & 1) != 0) << 0xf) & 0xffffffffffffff00 |
           1;
  iVar29 = (int)lVar35;
  uVar8 = iVar29 << 1;
  if (SUB164(auVar4 >> 0x50,0) * 0x10000 + 0x63016889 < uVar46) {
    uVar50 = uVar49 & 0xffffffffffff0000 | (ulong)uVar18 & 0xff00 | uVar10;
  }
  uVar18 = (ushort)(byte)-((byte)uVar8 | iVar29 < 0);
  iVar29 = ((uint)lVar24 & 0xffff0000 | (uint)(ushort)((short)lVar24 + 1)) +
           (uVar8 & 0xffff0000 |
           (uint)(ushort)(((ushort)uVar8 & 0xff00 | uVar18) >> 1 | uVar18 << 0xf)) + 1;
  uVar10 = (ulong)(uVar7 >> 0x14 | 0xc01f000);
  if (in_PF) {
    uVar10 = uVar51 | uVar43;
  }
  cVar42 = (char)(uVar51 >> 0x38);
  uVar46 = ((uVar10 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar10 - (short)uVar46)) >> 3) -
           0xa72a9f9;
  uVar7 = 0xe5284009;
  uVar11 = (ulong)(ushort)(((short)uVar43 >> 0x1f) << 9 | ((ushort)(uVar11 >> 0x28) & 0xff00) >> 7);
  uVar51 = uVar51 | uVar11;
  bVar36 = (byte)((uint)iVar29 >> 0x18);
  uVar18 = ((ushort)((uint)iVar29 >> 8) & 0xff00 | (ushort)(byte)(bVar36 >> 1 | bVar36 << 7)) +
           0xb51d;
  if (((uint)uVar51 >> 0x12 & 1) != 0) {
    uVar7 = (uint)uVar18 | 0xe5280000;
  }
  bVar36 = ((byte)uVar7 & 0x1f) % 9;
  bVar16 = (byte)uVar46;
  bVar36 = bVar16 >> bVar36 | bVar16 << 9 - bVar36;
  uVar46 = uVar46 & 0xffffffffffffff00 | (ulong)bVar36;
  uVar38 = 0xfca5;
  if (in_PF) {
    uVar38 = uVar18;
  }
  uVar51 = uVar51 >> 0xb;
  uVar8 = ((uint)(uVar50 << 0xb) & 0xffff0000 |
          (uint)(ushort)-(((ushort)((uVar50 << 0xb) >> 1) & 0x7fff) + (short)uVar7)) + 0xdff7247f;
  if (uVar8 == 0) {
    cVar42 = (char)uVar51;
  }
  sVar21 = 0;
  uVar18 = (ushort)uVar46;
  if (uVar18 != 0) {
    while ((uVar18 >> sVar21 & 1) == 0) {
      sVar21 = sVar21 + 1;
    }
  }
  uVar33 = (int)uVar51 +
           (((uVar7 & 0xffff0000 |
             (uint)(ushort)((short)(char)(uVar7 >> 8) << 1 | (ushort)((short)uVar38 < 0))) ^ 0xc1ea)
           - 1) * 4;
  iVar29 = 0x1f;
  uVar34 = (uint)uVar46;
  if (uVar34 != 0) {
    while (uVar34 >> iVar29 == 0) {
      iVar29 = iVar29 + -1;
    }
  }
  uVar19 = uVar33 + 0xbe99a27f;
  uVar51 = (ulong)(uVar8 & 0xffffff00 | (uint)(byte)((char)uVar8 - cVar42)) + 1;
  bVar16 = (byte)uVar19;
  uVar45 = uVar45 & 0xffff0000 | uVar11 & 0xffffffffffffff00;
  lVar24 = (ulong)((uint)CONCAT11((char)((ulong)uVar33 >> 8),0xfc) | 0xffff0000) << (bVar16 & 0x3f);
  uVar22 = (uint)lVar24 & 0xffffff00;
  uVar8 = 0x56bf - uVar7 & 0xffff0000 | 0xd800;
  uVar33 = uVar19 & 0xffff0000;
  uVar34 = (uint)bVar36;
  if (!in_PF) {
    uVar34 = 0;
  }
  uVar11 = -(long)(char)bVar36;
  bVar6 = (byte)uVar34;
  lVar35 = 0;
  if ((uVar33 | uVar34) != 0) {
    while (((uVar33 | uVar34) >> lVar35 & 1) == 0) {
      lVar35 = lVar35 + 1;
    }
  }
  uVar5 = SEXT13((char)((uint)CONCAT11((char)((ulong)uVar19 >> 8) + '\x01',bVar16) >> 8));
  if (in_PF) {
    uVar8 = 0x56bf - uVar7 & 0xffff0000 | uVar34;
  }
  lVar35 = (uVar51 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar51 >> 0x16)) - 0x964f152a;
  iVar29 = (int)CONCAT62((uint6)(ushort)((ushort)((uVar45 << (bVar16 & 0x1f)) >> 0x10) |
                                        (ushort)((uVar45 >> 0x21 - (bVar16 & 0x1f)) >> 0x10)),0x2d5b
                        );
  uVar18 = SEXT12((char)((ulong)uVar8 << 1));
  bVar16 = bVar6 - (char)((ulong)(ushort)(uVar18 << 0xe | uVar18 >> 3) >> 8);
  uVar7 = uVar33 | (uint)CONCAT11((char)((ulong)(uVar33 | CONCAT11(1,bVar6)) >> 8),bVar6) &
                   0xffffff00;
  uVar51 = (ulong)(iVar29 - (uVar7 | bVar16));
  sVar21 = (short)lVar35;
  uVar45 = (ulong)((((uint)((ulong)uVar8 << 1) & 0xffff0000) - iVar29) - (uint)((uVar11 & 1) != 0));
  if (!SBORROW2(sVar21,0x2c5c)) {
    uVar45 = (ulong)uVar5 << 8 ^ 0x39;
  }
  bVar14 = bVar16 * '\x10';
  bVar16 = bVar16 >> 4;
  bVar15 = bVar14 | bVar16;
  uVar8 = ((int)(uVar22 | (byte)((char)lVar24 + 0x1e)) >> 2 & 0xffffU |
           (uint)(ushort)((int)uVar22 >> 0x12) << 0x10 | 0x8000) >> (bVar14 & 0x1f | bVar16);
  uVar46 = ((ulong)(ushort)(((uint)uVar5 << 8) >> 0x10) & 0xff00) << 0x18;
  uVar38 = CONCAT11((char)((ulong)uVar7 >> 8) + -0x42,bVar15);
  uVar18 = 0;
  if (uVar38 != 0) {
    while ((uVar38 >> uVar18 & 1) == 0) {
      uVar18 = uVar18 + 1;
    }
  }
  uVar45 = uVar45 & 0xffffffffffff0000 | (ulong)uVar18;
  lVar24 = uVar45 + uVar51;
  iVar29 = (int)uVar45 +
           ((((uint)lVar35 & 0xffff0000 | (uint)(ushort)(sVar21 + 0xd3a4)) + 0xef9ef576) -
           (uint)CARRY8(uVar45,uVar51));
  bVar54 = 0xfdac37bf < iVar29 + 0x9a8de424U || 0xfffffffe < iVar29 + 0x9ce1ac64U;
  cVar42 = (bVar36 + 0x10) - bVar54;
  uVar7 = (uint)CONCAT11(bVar6 - 1,0xff) | 0xffff0000;
  if (cVar42 != '\0' && (SBORROW1(bVar36,-0x10) != SBORROW1(bVar36 + 0x10,bVar54)) == cVar42 < '\0')
  {
    uVar7 = uVar33 | uVar38;
  }
  uVar7 = uVar7 >> (bVar14 & 0x1f | bVar16);
  uVar43 = (short)uVar7 >> 0x11;
  uVar7 = uVar7 & 0xffff0000;
  uVar22 = ((uint)((ushort)(0 >> (bVar6 & 0x1f)) >> 1) * 9 + -0x38b8ff33) * -0x49cd7ee1 - 1;
  bVar16 = bVar15 * '\x02';
  uVar45 = (ulong)(uVar33 | (uint)CONCAT11((char)((ulong)(uVar33 | uVar38) >> 8) -
                                           (char)((ulong)(uVar7 | uVar43) >> 8),bVar15) & 0xffffff00
                  | (uint)bVar16);
  sVar41 = (short)((long)uVar11 >> 1);
  uVar33 = (uint)CONCAT71((undefined7)((char)bVar36 >> 7),cVar42);
  uVar44 = uVar33 << (bVar16 & 0x1f) | uVar33 >> 0x20 - (bVar16 & 0x1f);
  uVar51 = uVar45 * 0x237112f1;
  lVar35 = SUB168(SEXT816((long)uVar45) * SEXT416(0x237112f1) >> 0x40,0);
  uVar32 = ~(ushort)((uVar46 | (long)uVar11 >> 1 & 0xffffU) >> 1);
  bVar36 = (bVar16 - (char)uVar51) - 1;
  uVar43 = uVar43 << 1;
  uVar33 = uVar7 | uVar43;
  uVar34 = iVar29 + 0x9ce1ac65U & 0xffffff00 | (uint)(byte)((char)(iVar29 + 0x9ce1ac65U) << 1);
  uVar19 = -uVar34;
  uVar38 = (ushort)(uVar34 != 0) << 8;
  sVar21 = CONCAT11((byte)((ulong)uVar22 >> 8) >> 1,(char)uVar22) * 0x40;
  uVar39 = (ushort)lVar24 & 0xff00 |
           (ushort)(byte)(((char)lVar24 + (lVar35 == 0 || lVar35 == -1)) - 1);
  uVar18 = 0;
  if (uVar32 != 0) {
    while ((uVar32 >> uVar18 & 1) == 0) {
      uVar18 = uVar18 + 1;
    }
  }
  uVar45 = ((ulong)(uint3)(uVar44 >> 8) & 0xffffffffffff00) << 8;
  lVar35 = (ulong)((uint)(CONCAT14((ushort)uVar44 < 0xdd,uVar8) >> 8) | uVar8 << 0x19) -
           (uVar45 | uVar18);
  uVar52 = (ushort)(bVar36 | 0xc0);
  cVar42 = (char)(uVar38 / uVar52);
  bVar36 = bVar36 & 0xf;
  uVar34 = (uint)CONCAT62((uint6)(uVar46 >> 0x11),uVar32) | 0x100;
  uVar8 = (uint)lVar24 & 0xffff0000 | (uint)(ushort)(uVar39 << bVar36 | uVar39 >> 0x10 - bVar36);
  if (SCARRY2(sVar21,uVar32 | 0x100) == SCARRY2(sVar21 + (uVar32 | 0x100),1)) {
    uVar8 = uVar33;
  }
  uVar32 = 0;
  while ((0xe125U >> uVar32 & 1) == 0) {
    uVar32 = uVar32 + 1;
  }
  uVar22 = (uint)(uVar45 | uVar18) >> 0x1f | 0x1fe;
  uVar44 = uVar34 * -0x49f91ba6;
  uVar47 = (uint)lVar35 + 0xace1cc50;
  bVar54 = (byte)(cVar42 - 0x17U) < 0xd0;
  uVar38 = uVar38 % uVar52 << 8 | (ushort)(byte)(cVar42 + 0x19);
  uVar39 = (ushort)uVar22;
  uVar18 = uVar38 - uVar39;
  uVar38 = sVar41 << 2 | (ushort)(CONCAT12(uVar38 < uVar39 || uVar18 < bVar54,sVar41) >> 0xf);
  bVar36 = (byte)uVar38 >> ((char)uVar22 - 0x26U & 0x1f);
  uVar46 = CONCAT62((int6)((long)uVar11 >> 0x11),uVar38) & 0xffffffffffffff00 | (ulong)bVar36;
  uVar18 = SEXT12((char)((char)uVar18 - bVar54));
  uVar38 = (ushort)(lVar35 * 2) | (ushort)(lVar35 < 0);
  uVar51 = uVar51 & 0xffffffffffff0000 | (ulong)uVar32 & 0xffffffffffffff00 |
           (ulong)(byte)((byte)uVar32 >> 2);
  uVar32 = SEXT12((char)bVar36);
  uVar48 = uVar47 & 0xffff0000 | (uint)uVar32 | 0x2000000;
  iVar29 = (int)((uint)lVar35 & 0xffff) >> 7;
  uVar26 = (uint)(lVar35 * 2) & 0xffff0000 | (uint)(ushort)-uVar38;
  uVar11 = (ulong)((uint)(ushort)(uVar18 & 0xff |
                                 (ushort)(byte)((char)((ulong)uVar18 >> 8) +
                                               (char)((ulong)(ushort)((ushort)(byte)((ulong)uVar33
                                                                                    >> 8) << 8 |
                                                                     (ushort)uVar51) >> 8)) << 8) +
                  0x84b07d1e) << 1;
  uVar22 = (((uVar7 | (ushort)(uVar43 | (ushort)uVar19)) + uVar34 * 0x49f91ba6) -
           (uint)(uVar38 != 0)) * 2;
  uVar9 = (uint)uVar11;
  uVar37 = uVar26 ^ (uint)(uVar9 == uVar26) * (uVar26 ^ uVar48);
  uVar9 = uVar9 ^ (uint)(uVar9 == uVar26) * (uVar9 & uVar37);
  uVar26 = (uVar22 & 0xffffff00 | (uint)(uVar46 <= uVar45)) << 4 | uVar22 >> 0x1c;
  uVar34 = uVar44 + iVar29;
  if (!SCARRY4(uVar44,iVar29)) {
    uVar44 = uVar33;
  }
  uVar33 = 0;
  uVar53 = (uint)uVar51;
  if (uVar53 != 0) {
    while ((uVar53 >> uVar33 & 1) == 0) {
      uVar33 = uVar33 + 1;
    }
  }
  uVar53 = (uint)uVar46 & 0xffff0000;
  uVar30 = (uVar7 | uVar37 & 0xffff) ^ 1 << (uVar8 & 0x1f);
  uVar18 = (short)uVar9 + uVar32;
  uVar51 = (ulong)uVar9 & 0xffffffffffff0000;
  uVar9 = (uint)uVar51 | (uint)uVar18;
  uVar40 = uVar34 | (uVar8 | 0x8000) >> 1 | 0x80000000;
  uVar34 = (uVar53 | (ushort)((short)uVar46 + (short)uVar34)) >> 1;
  uVar7 = 0x1f;
  if (uVar9 != 0) {
    while (uVar9 >> uVar7 == 0) {
      uVar7 = uVar7 - 1;
    }
  }
  bVar36 = (byte)((ulong)uVar7 >> 8) & 0x1f;
  iVar29 = (int)((ulong)uVar33 ^ 0xb8);
  uVar37 = (uVar37 & 0xffff0000) >> bVar36 | iVar29 << 0x20 - bVar36;
  uVar25 = (undefined)uVar26;
  uVar9 = (uVar22 & 0xffff000) << 4;
  uVar22 = uVar9 | CONCAT11((char)((ulong)uVar26 >> 8),uVar25);
  uVar18 = uVar18 * 8 | (ushort)((ulong)uVar33 ^ 0xb8) >> 0xd;
  uVar11 = uVar11 & 0xffffffff00000000 | uVar51 | (ulong)uVar18 & 0xffffffffffffff00 |
           (ulong)(byte)((char)uVar18 >> 0x11);
  uVar26 = uVar22 + 0xb39dfc1e + uVar44 * 2;
  bVar36 = (byte)uVar26;
  bVar16 = bVar36 & 0x3f;
  uVar11 = uVar11 >> bVar16 | uVar11 << 0x40 - bVar16;
  uVar33 = uVar37 & 0xffffff00 | (uint)(byte)((byte)uVar37 >> 1 | 0x80);
  uVar8 = (uVar8 & 0xfffffffc | 0x8000) >> 1 | 0xfe02d864;
  if (SBORROW4(uVar30 & 0xffffff00 | (uint)(byte)~((char)uVar30 << 1),
               ~(uVar19 & 0xffff0000 |
                (uint)(ushort)((ushort)((uVar19 & 0xffff) << 0xe) | (ushort)((uVar19 & 0xffff) >> 3)
                              ))) != false) {
    uVar8 = uVar44;
  }
  uVar51 = (ulong)uVar48 * -0x26b2321d;
  lVar24 = SUB168(SEXT816((long)(ulong)uVar48) * SEXT416(-0x26b2321d) >> 0x40,0);
  bVar16 = (char)uVar44 + (char)uVar34;
  if ((SCARRY1((char)uVar44,(char)uVar34) != SCARRY1(bVar16,'\0')) != (char)bVar16 < '\0') {
    uVar34 = CONCAT22((ushort)(uVar53 >> 0x11),(short)uVar51);
  }
  uVar53 = iVar29 - uVar8;
  cVar42 = (char)uVar11;
  cVar42 = (char)((ushort)((short)cVar42 * (short)cVar42) >> 8);
  bVar36 = bVar36 & 0x3f;
  auVar4 = ZEXT116(cVar42 != '\0' && cVar42 != -1) << 0x40 |
           ZEXT416(uVar40 & 0xffff0000 |
                   (uint)(ushort)(((short)uVar40 + 0x6ab5) - (ushort)(lVar24 != 0 && lVar24 != -1)))
  ;
  uVar48 = SUB164(auVar4 >> bVar36,0) | SUB164(auVar4 << 0x41 - bVar36,0);
  uVar19 = (uint)uVar11 & 0xffff0000 ^ 1 << ((uint)uVar51 & 0x1f);
  cVar20 = (char)((ulong)uVar26 >> 8);
  cVar27 = (char)((ulong)(uVar9 | CONCAT11((char)((ulong)uVar22 >> 8),uVar25)) >> 8);
  cVar42 = cVar27 + cVar20;
  if (SCARRY1(cVar27,cVar20) != SCARRY1(cVar42,'\0')) {
    uVar33 = uVar37 & 0xffff0000 | uVar53 & 0xffff;
  }
  if (-1 < cVar42) {
    uVar48 = uVar48 & 0xffff0000 | uVar44 & 0xff00 | (uint)bVar16;
  }
  uVar39 = (short)uVar48 - 1;
  uVar38 = (ushort)uVar33 & 0xff00 | (ushort)(byte)((char)uVar33 + (char)uVar39);
  uVar37 = (uVar19 & 0xffff0000) + 0x9c + (uVar44 & 0xffffff00 | (uint)bVar16) * 2;
  uVar43 = (ushort)uVar37;
  uVar11 = uVar51 & 0xffffffffffff0000 | (ulong)uVar43;
  iVar29 = (int)uVar11;
  uVar22 = (int)uVar45 + iVar29;
  uVar44 = uVar34 * 2;
  uVar34 = uVar44 & 0xffffff00 |
           (uint)(byte)((byte)(CONCAT11(CARRY4(uVar34,uVar34),(char)uVar44) >> 4) |
                       (char)uVar44 << 5);
  uVar26 = uVar34 * -0x77cd6f75 | 1 << ((uVar7 & 0xff) + 0x6963e25 & 0x1f);
  uVar18 = (short)uVar26 + CONCAT11(cVar42,uVar25);
  uVar7 = (uVar8 | 0xe7893353) + 1;
  if (-1 < (short)uVar18) {
    uVar7 = uVar53 >> 1;
  }
  uVar8 = uVar44 & 0xffff0000 | (uint)(ushort)-(short)uVar34;
  uVar52 = (short)(uVar53 >> 1) * -0x65d0;
  uVar45 = (ulong)(uVar26 & 0xffff0000 | (uint)uVar18) & 0xffffffffffffff0f;
  uVar34 = uVar22 & 0xffff0000 |
           (uint)(ushort)((ushort)uVar22 >> (sbyte)uVar45 | (short)uVar45 << 0x10 - (sbyte)uVar45);
  uVar22 = (uint)uVar32 << 0x12 | (uVar47 & 0xc0000000) >> 0xe;
  uVar51 = (ulong)(uVar7 >> 0x19 | (uint)uVar45 << 7);
  lVar24 = 0x3f;
  iVar1 = 0x3f;
  if (uVar34 != 0) {
    while (iVar1 = (int)lVar24, uVar34 >> lVar24 == 0) {
      lVar24 = lVar24 + -1;
    }
  }
  uVar47 = (uVar33 & 0xffff0000 | (uint)(ushort)(uVar38 | (ushort)uVar7)) << 3;
  uVar44 = (uint)uVar18 & 0xe;
  uVar18 = (ushort)((uVar19 & 0xffff0000) *
                    (uVar48 & 0xffff0000 | (uint)(ushort)(uVar39 >> 1 | 0x8000)) >> 8) >> 7;
  uVar19 = uVar22 - iVar29;
  uVar11 = (ulong)((-uVar8 - (uVar37 & 0xffff0000 |
                             (uint)(ushort)(uVar43 >> 2 | ((ushort)uVar53 | uVar38) << 0xe))) -
                  (uint)(uVar22 < uVar11));
  uVar7 = ((uVar26 & 0xffff) << 0x17 | (uVar9 | uVar26 & 0xffff) >> 10) >> 1;
  uVar22 = (uint)uVar45 ^ 1 << (uVar19 & 0x1f);
  bVar36 = (byte)uVar22;
  uVar33 = (uVar34 << 6 | uVar47 >> 0x1a) >> 1;
  lVar24 = uVar51 - 0x96291b8d;
  uVar45 = (ulong)uVar8;
  if ((SBORROW8(uVar51,0x96291b8d) != false) != lVar24 < 0) {
    uVar45 = uVar11;
  }
  uVar12 = (uint7)(((ulong)((uint)(ushort)((uVar18 & 0xff |
                                           (ushort)(byte)((char)((ulong)(ushort)(uVar18 | (uVar52 & 
                                                  0xff48) << 9) >> 8) - bVar36) << 8) >> 1) |
                           0x80000000) << (bVar36 & 0x3f)) >> 8) |
           (uint7)((uVar45 >> 0x40 - (bVar36 & 0x3f)) >> 8);
  cVar42 = '\0' >> (bVar36 & 0x1f);
  bVar16 = (bVar36 & 0x1f) % 0x11;
  uVar32 = (ushort)lVar24 << bVar16 | (ushort)lVar24 >> 0x11 - bVar16;
  sVar17 = (sbyte)((ulong)bVar36 & 0xffffffffffffff0f);
  uVar38 = (ushort)((ulong)bVar36 & 0xffffffffffffff0f) >> sVar17 | (short)uVar45 << 0x10 - sVar17;
  uVar13 = (uint6)(uVar12 >> 8);
  bVar36 = (byte)uVar38;
  uVar7 = uVar7 << (bVar36 & 0x1f) |
          (uint)(CONCAT14((byte)uVar12 < 0xd2,uVar7) >> 0x21 - (bVar36 & 0x1f));
  uVar43 = (ushort)uVar7;
  uVar18 = uVar43 - 0x2f;
  uVar7 = uVar7 & 0xffff0000 | (uint)uVar18;
  if (uVar18 == 0 || SCARRY2(uVar43,-0x2f) != (short)uVar18 < 0) {
    uVar7 = uVar44;
  }
  bVar36 = bVar36 << (bVar36 & 0x1f);
  uVar44 = uVar44 ^ 0x2f6a65b5;
  uVar39 = (short)(ulong)(CONCAT18((short)uVar33 < 0,(ulong)(uVar19 >> 1)) >> 0x1c) +
           ((short)((uVar33 & 0x7fff) << 0xd) - (short)CONCAT21(uVar52 >> 8,cVar42));
  uVar10 = uVar45 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar45 - 0x1a);
  uVar51 = (ulong)uVar43 ^ 0x52760f0e;
  uVar49 = (long)uVar10 >> 9;
  bVar16 = bVar36 & 0x1f;
  uVar33 = uVar7 << bVar16 | uVar7 >> 0x20 - bVar16;
  cVar20 = (char)(((ulong)uVar13 << 0x10) >> 0x36);
  uVar45 = (ulong)((uVar22 & 0xffff0000 | (uint)uVar38 & 0xffffff00 | (uint)bVar36) &
                  ~(1 << ((uint)uVar32 & 0x1f))) << 0xf;
  uVar46 = (uVar51 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar51 + 1)) & uVar49;
  bVar16 = (byte)(uVar45 >> 0x14);
  uVar38 = (ushort)uVar46 & ~(1 << ((ushort)(uVar47 >> 1) & 0xf));
  uVar7 = (uint)uVar46 & 0xffff0000;
  uVar11 = uVar11 - (((uint)lVar24 & 0xffff0000 | (uint)uVar32 & 0xffffff00 |
                     (uint)(byte)((char)uVar32 + cVar42)) << 1);
  uVar18 = (ushort)uVar33;
  uVar18 = uVar18 ^ (ushort)(uVar18 == 0) * (uVar18 ^ uVar38);
  sVar21 = (short)((long)uVar10 >> 10) + 1;
  bVar36 = -(char)(uVar45 >> 8);
  uVar8 = (uint)uVar45 | (uint)bVar36;
  uVar51 = (uVar51 & 0xffffffffffff0000 | 0xff00) >> 0xf;
  cVar27 = (char)sVar21;
  uVar46 = CONCAT11((char)(uVar51 >> 8) + (char)((ulong)uVar18 >> 8),(char)uVar51) + uVar11 + 1;
  iVar29 = (uVar7 | (uint)uVar38) * 0x20;
  cVar42 = (char)uVar46;
  uVar51 = uVar46;
  if (cVar42 != '\0' && SCARRY1(cVar42,'\0') == cVar42 < '\0') {
    uVar51 = CONCAT62((int6)(uint6)(ushort)(uVar49 >> 0x10) >> 1,sVar21);
  }
  uVar43 = (short)iVar29 >> 0x1b;
  uVar51 = (((ulong)CONCAT61(uVar13,0x14) & 0xffffffffffff00) << 8 | uVar46 >> 8 & 0xff) * uVar51;
  bVar6 = (byte)uVar51;
  bVar36 = (bVar6 == 0) * bVar36;
  uVar34 = uVar8 * 2;
  uVar22 = (uint)(ushort)(1 << ((ushort)(byte)(bVar16 - cVar27 >> 1) & 0xf)) + 0x4048bd8e;
  uVar46 = (long)(int)((uint)uVar51 & 0xffffff00 |
                      (uint)(byte)(bVar6 ^ (bVar6 == 0) * (bVar6 & bVar36))) *
           (long)(int)(uVar47 >> 1 | 0x80000000);
  iVar23 = (int)(uVar46 >> 0x20);
  uVar51 = uVar51 & 0xffffffff00000000 | uVar46 & 0xffffffff;
  if (iVar23 != 0 && iVar23 != -1) {
    uVar51 = (ulong)uVar44 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar44 + cVar27);
  }
  iVar23 = (int)-((uint)(uVar39 >> 1) | (uint)((uVar39 & 1) != 0) << 0x1f) >>
           ((byte)(uVar45 >> 0x18) >> 7);
  auVar4 = SEXT816((long)uVar51) * SEXT816((long)(ulong)uVar34);
  uVar51 = uVar51 * (ulong)uVar34;
  uVar48 = uVar8 * 0x4767b409 + iVar23 + 1;
  uVar26 = (uint)(ushort)((ushort)bVar36 | 1 << ((ushort)(((iVar1 << 1 | 1U) << 1 | 1) << 1) & 0xf))
           | 1 << (uVar48 & 0x1f);
  uVar45 = (uVar11 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar11 + (char)uVar18 + 1)) >> 1 &
           0x7fffffff | 0xc000;
  uVar9 = (uint)uVar45;
  uVar8 = (uint)(ushort)uVar45;
  uVar19 = CONCAT22((short)SUB168(auVar4 >> 0x41,0),(short)(uVar51 >> 8)) & 0x3fff00ff;
  uVar44 = uVar19 / uVar8;
  uVar37 = ((uint)uVar51 & 0xffff0000 | uVar44 & 0xffff) + 0x3b + (uVar47 | 1) * 8;
  uVar46 = (ulong)(uVar22 & 0xffff0000 | (uint)(ushort)((short)uVar22 + 0x137d));
  uVar10 = uVar46 & 0xffffffffffffaff8;
  uVar48 = uVar48 | 0xc0000000;
  uVar45 = (ulong)(((int)SUB166(auVar4 >> 0x51,0) << 0x10 | uVar19 % uVar8) + 0xe79bf918 &
                  0x3fffffff) << 0x20 | uVar51 & 0xffff0000 | (ulong)(ushort)uVar44;
  uVar11 = uVar45 / (ulong)uVar48;
  uVar45 = uVar45 % (ulong)uVar48;
  uVar8 = 0x1f;
  if (uVar26 != 0) {
    while (uVar26 >> uVar8 == 0) {
      uVar8 = uVar8 - 1;
    }
  }
  uVar22 = (uint)uVar45 & 0xffff0000 | (uint)(byte)uVar45;
  uVar19 = (uint)CONCAT71((uint7)(uint3)((uint)iVar23 >> 8),0x3d);
  bVar36 = (byte)(uVar45 >> 8) & 7;
  bVar6 = (byte)(uVar10 >> 8);
  uVar18 = CONCAT11(bVar6 << bVar36 | bVar6 >> 8 - bVar36,(char)uVar10);
  bVar36 = (byte)uVar11 & (byte)((ulong)uVar34 >> 8);
  uVar45 = CONCAT71((int7)(int3)(uVar11 >> 8),bVar36);
  if (bVar36 == 0) {
    uVar9 = (uint)(ushort)uVar45;
  }
  uVar26 = uVar37 & 0xffff0000;
  uVar44 = uVar26 | (ushort)((short)uVar37 + 0x9103);
  bVar36 = (byte)uVar8;
  uVar37 = uVar22 >> (bVar36 & 0x1f) | uVar22 << 0x20 - (bVar36 & 0x1f);
  uVar22 = uVar48 << (bVar36 & 0x1f) | (uint)uVar45 >> 0x20 - (bVar36 & 0x1f);
  uVar51 = (ulong)((uVar19 << 6 | uVar19 >> 0x1a) >> (bVar36 & 0x3f)) |
           (uVar46 & 0xffffffffffff0000 | (ulong)uVar18) << 0x40 - (bVar36 & 0x3f);
  uVar11 = (ulong)(uVar8 >> 1);
  uVar19 = uVar22 & 0xffff0000 | (uint)(ushort)((short)uVar22 + (short)uVar51);
  uVar45 = uVar45 ^ (ulong)(uVar45 == (ulong)uVar44) * (uVar45 & (ulong)uVar44);
  uVar48 = (uint)uVar51;
  uVar22 = uVar48 << 2;
  uVar48 = uVar22 | uVar48 >> 0x1e;
  auVar4 = ZEXT816((ulong)(uVar47 | 1 | uVar19) | 0xc000000000000000);
  auVar2 = (ZEXT1216(CONCAT48((uVar37 & 0xffff0000 |
                              (uint)CONCAT11((char)((ulong)uVar37 >> 8) + '\x01',(char)uVar37)) >>
                              (bVar36 & 0x1f),
                              uVar45 & 0xffffffffffffff00 |
                              (ulong)(byte)((char)uVar45 + (char)(uVar8 >> 8)))) |
           (undefined  [16])0xffffffff98e5819c) & (undefined  [16])0xffffffffffffffff;
  auVar3 = auVar2 / auVar4;
  auVar2 = auVar2 % auVar4;
  uVar51 = SUB168(auVar2,0);
  uVar45 = (ulong)uVar19 << 7;
  if ((byte)((byte)((uVar9 ^ (uint)(1 << (uVar11 & 0x3f))) >> 7) | 0x7b) == 0) {
    uVar51 = uVar45 & 0xffffffff;
  }
  uVar18 = (short)(char)((ulong)(uVar18 & 0xb041) >> 8) * (short)SUB161(auVar3 >> 8,0);
  bVar54 = (uVar18 & 0x400) != 0;
  uVar9 = (int)CONCAT62(SUB166(auVar3 >> 0x10,0),uVar18) * 0x1d8aeb85;
  uVar19 = SUB164(auVar2,0) + 0x71ce8593;
  uVar18 = ((ushort)(uVar44 >> 0xf) & 1) << 1;
  uVar46 = CONCAT71((uint7)(uVar8 >> 1) & 0xff000000 | (uint7)(((uVar11 & 0xff0000) << 0x18) >> 8) |
                    (uint7)(((uVar11 & 0xff00) << 0x28) >> 8) | (uint7)((uVar11 << 0x38) >> 8),
                    (char)(((ulong)((uVar8 & 1) != 0) << 0x3f) >> 0x38) -
                    ((char)((uint)iVar29 >> 8) >> 0x13)) |
           uVar45 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar45 * 2);
  uVar32 = (ushort)(uVar48 >> 1);
  uVar11 = (uVar51 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar51 << 1)) >> 1;
  uVar44 = (int)uVar11 * 0x1a2d36f0;
  uVar22 = CONCAT22((ushort)(uVar22 >> 0x11),uVar32 >> 3 | uVar32 << 0xd);
  bVar36 = (byte)uVar44;
  bVar6 = (byte)uVar11;
  uVar32 = ~(ushort)uVar46;
  uVar46 = uVar46 & 0xffffffffffff0000;
  uVar8 = 0x1f;
  if (uVar19 != 0) {
    while (uVar19 >> uVar8 == 0) {
      uVar8 = uVar8 - 1;
    }
  }
  uVar19 = (uVar44 & 0xff00 |
           (uint)(byte)(bVar36 ^ (bVar36 == bVar6) *
                                 (bVar36 & (bVar6 ^ (bVar36 == bVar6) * (bVar6 ^ (byte)uVar18)))))
           >> 1;
  uVar33 = -(uint)((ushort)((ushort)(byte)((int)(((uint)(iVar29 + (int)CONCAT71((undefined7)
                                                                                (cVar20 >> 7),
                                                                                ~(cVar20 + (char)
                                                  uVar33 + (bVar16 < (byte)uVar38))) * 0x4000) >> 8
                                                 & 0xffff00) << 8) >> 0x1c) &
                           ~(1 << ((ushort)uVar48 & 0xf))) == 0);
  uVar51 = (ulong)uVar8 - 1;
  auVar4 = ZEXT816(CONCAT44((int)(uVar44 & 0xffff0000 | uVar19) >> 0x1f,(int)(short)uVar19)) *
           ZEXT816((ulong)uVar33);
  uVar11 = 0x3f;
  if (uVar22 != 0) {
    while (uVar22 >> uVar11 == 0) {
      uVar11 = uVar11 - 1;
    }
  }
  uVar10 = SUB168(auVar4 >> 0x40,0) - 0x5193c2f3U & 0xffffffffffff0000;
  uVar8 = uVar9 & 0xffff0000 | (uint)(ushort)(((short)uVar9 + 0x8ac) * 2);
  uVar39 = 0;
  if (uVar43 != 0) {
    while ((uVar43 >> uVar39 & 1) == 0) {
      uVar39 = uVar39 + 1;
    }
  }
  uVar19 = SUB164(auVar4,0);
  uVar44 = uVar8 ^ (uint)(uVar19 == uVar8) * (uVar8 ^ (uint)uVar51);
  uVar19 = uVar19 ^ (uint)(uVar19 == uVar8) * (uVar19 & uVar44);
  uVar28 = (ushort)uVar44;
  bVar36 = (byte)uVar19;
  uVar52 = 0xf;
  if (uVar28 != 0) {
    while (uVar28 >> uVar52 == 0) {
      uVar52 = uVar52 - 1;
    }
  }
  bVar6 = (byte)uVar39;
  bVar16 = bVar6 ^ (bVar36 == bVar6) * (bVar6 ^ 0xc0);
  return CONCAT88(*(undefined8 *)((ulong)(uVar34 + 0xdb0421b8) + 0x58),
                  ((ulong)uVar19 & 0xffffffffffff0000 | (ulong)(ushort)uVar19 & 0xffffffffffffff00 |
                  (ulong)(byte)(bVar36 ^ (bVar36 == bVar6) * (bVar36 & bVar16))) +
                  (ulong)(uint)uVar18 +
                  CONCAT62((uint6)(uVar10 >> 0x10) & 0xffffffff0000 |
                           (uint6)(ushort)((ushort)(uVar10 >> 0x10) | 0x1000),0x1439) +
                  (ulong)uVar44 +
                  CONCAT71((uint7)(uint3)(uVar33 >> 8) & 0xffffffffffff00 |
                           (uint7)(byte)((byte)((ulong)uVar33 >> 8) ^
                                        (byte)((ushort)(1 << (SUB162(auVar4,0) & 0xf)) >> 8)),bVar54
                          ) + (uVar46 | (ushort)(uVar32 + (short)uVar45 * -2)) +
                  (uVar11 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar11 - uVar28)) +
                  (uVar46 | uVar32) + (ulong)(uint)uVar18 +
                  (CONCAT62((uint6)(ushort)(uVar26 >> 0x10),0x4370) & 0xffffffffffff0000 | 0x4cc0) +
                  (ulong)((uVar7 | (uint)uVar38 & 0x7fff800) << 5 | (uint)uVar43) +
                  (uVar51 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar51 + bVar54 + 1)) +
                  (((ulong)(uint3)(uVar22 >> 8) & 0xffffffffffff00) << 8 | (ulong)uVar52) +
                  (uVar45 & 0xffffffffffff0000 | (ulong)uVar39 & 0xffffffffffffff00 | (ulong)bVar16)
                  + -0x1e0002157d315862);
}



// WARNING: Removing unreachable block (ram,0x00407447)
// WARNING: Removing unreachable block (ram,0x00406f8f)
// WARNING: Removing unreachable block (ram,0x00406f8a)
// WARNING: Removing unreachable block (ram,0x00406f39)
// WARNING: Removing unreachable block (ram,0x00406f6c)
// WARNING: Removing unreachable block (ram,0x0040718c)
// WARNING: Removing unreachable block (ram,0x00407704)
// WARNING: Removing unreachable block (ram,0x004077e0)
// WARNING: Removing unreachable block (ram,0x00407b44)
// WARNING: Removing unreachable block (ram,0x00407d5b)

undefined  [16] log_size_10_var_006(void)

{
  ushort uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  uint uVar4;
  byte bVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  int6 iVar10;
  sbyte sVar11;
  byte bVar12;
  long lVar13;
  ulong uVar14;
  byte bVar15;
  char cVar17;
  long lVar16;
  undefined2 uVar18;
  ushort uVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  ushort uVar24;
  uint uVar25;
  byte bVar26;
  ushort uVar27;
  ushort uVar28;
  short sVar29;
  ulong uVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  char cVar34;
  uint uVar35;
  uint uVar36;
  long lVar37;
  long lVar38;
  byte bVar39;
  ushort uVar40;
  ushort uVar41;
  uint uVar42;
  uint uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  char cVar47;
  ushort uVar48;
  ushort uVar49;
  uint uVar50;
  long lVar51;
  ulong uVar52;
  uint7 uVar53;
  ushort uVar54;
  uint uVar55;
  ushort uVar56;
  uint uVar57;
  ulong uVar58;
  byte bVar59;
  int iVar60;
  uint uVar61;
  bool bVar62;
  bool in_PF;
  bool bVar63;
  bool bVar64;
  
  auVar2 = ZEXT816(0xa8b582616338168) << 0x40 | ZEXT416(0x3cfb);
  uVar9 = SUB168(auVar2 / ZEXT816(0xc000004059aad418),0);
  uVar44 = (ulong)(uVar9 == 0x14a2245347fb6d33) * -0x26af3b4042b80059 ^ 0x14a2245347fb6d33;
  uVar9 = uVar9 ^ (ulong)(uVar9 == 0x14a2245347fb6d33) * (uVar9 & uVar44);
  bVar5 = (char)uVar9 + 0x1d;
  uVar18 = 0xf01;
  if (bVar5 == 0) {
    uVar18 = 0x2529;
  }
  bVar59 = (byte)uVar18;
  auVar2 = CONCAT88(SUB168(auVar2 % ZEXT816(0xc000004059aad418),0),
                    uVar9 & 0xffffffffffffff00 | (ulong)bVar5) & (undefined  [16])0xffffffffffffffff
  ;
  auVar3 = auVar2 / ZEXT816(0xd5188754c88df400);
  auVar2 = auVar2 % ZEXT816(0xd5188754c88df400);
  iVar20 = 0x1f;
  while (0x59aad418U >> iVar20 == 0) {
    iVar20 = iVar20 + -1;
  }
  uVar45 = uVar44 << 1 | 1;
  uVar9 = CONCAT62(SUB166(auVar3 >> 0x10,0),
                   CONCAT11(SUB161(auVar3 >> 8,0) * '\x02' + '\x01',-SUB161(auVar3,0))) - 0xf3e293e4
  ;
  uVar46 = (ulong)CONCAT11('\x04' - bVar59,0xe3) & 0xffffffffffffff0f;
  sVar11 = (sbyte)uVar46;
  uVar46 = (ulong)(ushort)((short)uVar46 << sVar11 | 0x6ef9U >> 0x10 - sVar11) & 0xffffffffffffff0f;
  sVar11 = (sbyte)uVar46;
  uVar46 = (ulong)(ushort)((short)uVar46 << sVar11 | 0x2529U >> 0x10 - sVar11) | 0x766a0f7bdb600000;
  bVar5 = SUB161(auVar2,0) >> 1 | (byte)uVar9;
  if ('\0' < (char)bVar5) {
    uVar46 = 0x766a0f7bdb606ef9;
  }
  bVar26 = (byte)uVar46;
  uVar23 = (ulong)&stack0xffffffffffffff90 ^ 1 << (uVar46 & 0x3f);
  uVar58 = (ulong)(ushort)((CONCAT22((short)CONCAT71(SUB167(auVar2 >> 8,0),bVar5),
                                     CONCAT11((char)(uVar9 >> 8) + '\x01',
                                              (byte)uVar9 + ((byte)(uVar44 << 1) | 1) + '\x01')) &
                           0x3fffffff) / 0xe529);
  uVar50 = (((uint)uVar44 & 0xffff0000 | (uint)(ushort)((short)uVar44 >> (bVar26 & 0x1f))) +
           (int)uVar45 * -2) - 1;
  bVar5 = (byte)(uVar58 >> 8);
  cVar47 = -4 - bVar5;
  bVar62 = 0x6ef9 < (ushort)CONCAT71(0x4fb4759dc4f8b5,cVar47);
  iVar20 = (int)CONCAT62(0x4fb4759dc4f8,
                         CONCAT11(-(0x77 < bVar59 || CARRY1(bVar59 + 0x88,bVar62)),cVar47)) + 1;
  uVar27 = -((ushort)(byte)(bVar59 + 0x88 + bVar62) | 0xe700) >> 1;
  uVar45 = uVar45 * -2;
  uVar42 = (uint)((uVar9 & 0xffffffffffff0000 | uVar58) << 1);
  if (uVar45 == 0) {
    uVar42 = (int)(((unkuint9)(0xfc < bVar5) << 0x40) >> 0x21) << (bVar26 & 0x1f);
  }
  uVar9 = ((ulong)(0x29 >> (bVar26 & 0x1f)) | 0xcdf2e0ecfabce500) << 1 | (ulong)(iVar20 * 2 < 0);
  uVar8 = (iVar20 * 2 & 0x7fff8000U) << 1;
  uVar35 = (uint)(ushort)((short)iVar20 << 4);
  lVar13 = (uVar46 & 0xffffffffffff0000 |
           (ulong)CONCAT11((char)(uVar46 >> 8) + (char)((ushort)uVar18 >> 8) * -2 + -1,bVar26)) -
           0x3ad3ac0d;
  uVar42 = (uVar42 & 0xffff0000) << 1;
  uVar7 = uVar42 | 1;
  cVar47 = (char)((ulong)lVar13 >> 8);
  cVar17 = (char)((ulong)(uVar8 | uVar35) >> 8);
  bVar5 = (byte)lVar13;
  uVar54 = -0x600 << (bVar5 & 0x1f);
  uVar28 = CONCAT11(cVar47 - cVar17,bVar5) ^ 0x4300;
  if ((short)uVar28 < 0) {
    uVar7 = uVar42 | (ushort)(uVar27 | (ushort)(iVar20 < 0) << 0xf);
  }
  uVar44 = 0;
  if ((int)cVar47 != 0) {
    while (((uint)(int)cVar47 >> uVar44 & 1) == 0) {
      uVar44 = uVar44 + 1;
    }
  }
  uVar61 = uVar50 >> (bVar5 & 0x3f);
  uVar46 = (uVar45 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar45 << 1 | (byte)uVar50)) <<
           (bVar5 & 0x3f) | uVar9 >> 0x40 - (bVar5 & 0x3f);
  uVar9 = uVar9 ^ 0x47333aae;
  uVar42 = 0;
  if ((uint)uVar9 != 0) {
    while (((uint)uVar9 >> uVar42 & 1) == 0) {
      uVar42 = uVar42 + 1;
    }
  }
  uVar41 = (ushort)uVar42 >> 9 & 1;
  bVar59 = (bVar5 & 0x1f) % 0x11;
  sVar29 = (short)uVar61;
  uVar48 = sVar29 << bVar59 | (ushort)(CONCAT12(uVar41 != 0,sVar29) >> 0x11 - bVar59);
  cVar34 = (char)uVar27;
  uVar25 = SEXT14(cVar34);
  lVar37 = 0;
  uVar24 = (ushort)uVar44;
  uVar27 = uVar24 + uVar54;
  uVar58 = (ulong)CONCAT22(0x6446,uVar24);
  uVar49 = uVar48 ^ uVar24;
  uVar50 = uVar61 & 0xffff0000 | (uint)uVar49;
  uVar22 = (ulong)(CONCAT22((undefined2)(cVar47 >> 7),(short)cVar47 << 1) | 1);
  bVar62 = ((uint)(int)cVar17 >> ((ulong)uVar50 & 0x1f) & 1) != 0;
  uVar45 = uVar22 - uVar58;
  iVar60 = (int)uVar45 - (uint)bVar62;
  if (uVar22 < uVar58 || uVar45 < bVar62) {
    lVar37 = 0xd401;
  }
  uVar19 = 0;
  uVar56 = (ushort)uVar46;
  if (uVar56 != 0) {
    while ((uVar56 >> uVar19 & 1) == 0) {
      uVar19 = uVar19 + 1;
    }
  }
  uVar1 = (ushort)(iVar60 < 0);
  uVar40 = (uVar56 + 0x2bff) - uVar1;
  uVar45 = (ulong)(uVar56 < 0xd401 || (ushort)(uVar56 + 0x2bff) < uVar1);
  lVar38 = lVar37 + uVar58 + uVar45;
  uVar7 = uVar7 & 0xffff0000 |
          (uint)(ushort)((short)uVar7 + CONCAT11((char)(uVar28 >> 8) << 1,bVar5) +
                        (ushort)CARRY2(uVar24,uVar54));
  if (lVar38 == 0 || SCARRY8(lVar37,uVar58) != SCARRY8(lVar37 + uVar58,uVar45)) {
    uVar7 = (uint)(uVar44 & 0xffffffffffff0000) | (uint)uVar27;
  }
  if (lVar38 == 0) {
    uVar25 = uVar35 & 0xff00 | (uint)(0x5c63 < uVar48) | (uint)(ushort)(cVar34 >> 7) << 0x10;
  }
  uVar28 = 0;
  if (uVar19 != 0) {
    while ((uVar19 >> uVar28 & 1) == 0) {
      uVar28 = uVar28 + 1;
    }
  }
  uVar61 = iVar60 * 2 & 0xffdfffffU | 1;
  sVar29 = (short)cVar17 + (short)uVar61;
  uVar35 = (uint)lVar38 ^ ((uint)lVar38 >> 0x12 & 1) << 0x12;
  uVar50 = uVar7 + (uVar42 & 0xffff0000 | (uint)(ushort)((ushort)uVar42 ^ uVar41 << 9) & 0xffffff00
                   | (uint)(byte)((byte)uVar42 >> 1 | 0x80)) ^ uVar50;
  bVar5 = (byte)uVar50;
  bVar59 = (byte)sVar29;
  bVar26 = bVar59 ^ (bVar5 == bVar59) * (bVar59 ^ (byte)uVar40);
  uVar45 = (ulong)(CONCAT22((undefined2)(cVar17 >> 7),sVar29) & 0xffffff00 | (uint)bVar26);
  uVar7 = uVar35 & 0xffffff7f;
  cVar47 = (char)uVar49 * '\x02';
  auVar2 = ZEXT416(uVar50 & 0xffffff00 | (uint)(byte)(bVar5 ^ (bVar5 == bVar59) * (bVar5 & bVar26)))
           * ZEXT816(uVar9);
  uVar50 = (uVar8 | (ushort)((((short)iVar20 * 4 & 0x3fc0U) << 2) >> 1 | 0x8000)) << 1;
  uVar42 = ((uint)uVar46 & 0xffff0000 | (uint)uVar40) - SUB164(auVar2 >> 0x40,0);
  bVar62 = (char)(cVar47 - (char)uVar9) < '\0';
  uVar8 = (uint)lVar13 & 0xffff0000 |
          (uint)CONCAT11((SBORROW1(cVar47,(char)uVar9) != false) != bVar62,0 < (short)uVar27);
  if (!bVar62) {
    uVar8 = uVar42;
  }
  iVar20 = 0;
  uVar36 = (uint)CONCAT71(SUB167(auVar2 >> 8,0),SUB161(auVar2,0) + SUB161(auVar2 >> 0x40,0));
  if (uVar36 != 0) {
    while ((uVar36 >> iVar20 & 1) == 0) {
      iVar20 = iVar20 + 1;
    }
  }
  uVar8 = (uVar8 & ~(1 << (uVar35 & 0x1f))) << 1;
  uVar36 = uVar7 | 0xc0000000;
  uVar35 = (int)(uVar8 | 1) >> 1;
  uVar46 = (ulong)((((ulong)uVar28 | 0xc000004059aa0000) >> ((ulong)uVar42 & 0x3f) & 1) != 0);
  uVar58 = (ulong)uVar50 - 0x14aacbb7;
  uVar22 = uVar58 - uVar46;
  if (in_PF) {
    uVar22 = uVar22 & 0xffffffffffff0000 | (ulong)(ushort)uVar25;
  }
  uVar44 = uVar44 & 0xffffffffffff0000 | (ulong)(ushort)-uVar27;
  if (SCARRY8(uVar45,0x625a9bc3) !=
      SCARRY8(uVar45 + 0x625a9bc3,(ulong)(uVar50 < 0x14aacbb7 || uVar58 < uVar46))) {
    uVar44 = (ulong)uVar61 << 1 | 1;
  }
  uVar46 = (uVar22 ^ (uVar22 >> 0x1e & 1) << 0x1e) >> 1;
  uVar27 = ((ushort)uVar9 & 0x1de6) - (short)uVar7;
  uVar50 = 0;
  if (uVar25 != 0) {
    while ((uVar25 >> uVar50 & 1) == 0) {
      uVar50 = uVar50 + 1;
    }
  }
  cVar47 = (char)((ulong)uVar50 >> 8);
  lVar13 = uVar46 - 0x19355366;
  uVar28 = (ushort)uVar42 & 0xff;
  uVar50 = uVar50 & 0xffff0000 |
           (uint)CONCAT11((char)((ulong)(uVar50 & 0xffff0000 |
                                        (uint)(ushort)(short)cVar47 & 0xffffff00) >> 8) + -0x80,
                          cVar47 + -0x41 + ((ushort)((ulong)uVar19 << 0xe) < 0xf9e0));
  bVar5 = (byte)uVar35;
  if ((int)uVar42 <= (int)uVar36) {
    uVar42 = (uint)uVar44;
  }
  uVar45 = (ulong)(uVar36 >> 1) | uVar46 << 0x3f;
  uVar7 = (uint)uVar23;
  uVar50 = (uVar50 >> (bVar5 & 0x3f) | uVar50 << 0x40 - (bVar5 & 0x3f)) * 8 + 0x49;
  uVar46 = (ulong)(uVar50 & 0xffff0000 |
                  (uint)CONCAT11((byte)((ulong)uVar50 >> 8) | (byte)((ulong)lVar13 >> 8),
                                 (char)uVar50));
  if (SBORROW2(uVar28,0xc9e) == false) {
    uVar42 = uVar42 & 0xffff0000 | (uint)(ushort)(uVar28 - 0xc9e);
  }
  uVar42 = uVar42 >> (bVar5 & 0x1f);
  uVar28 = 0;
  if ((ushort)lVar13 != 0) {
    while (((ushort)lVar13 >> uVar28 & 1) == 0) {
      uVar28 = uVar28 + 1;
    }
  }
  lVar37 = 0;
  uVar54 = 0;
  if (uVar45 != 0) {
    while (uVar54 = (ushort)lVar37, (uVar45 >> lVar37 & 1) == 0) {
      lVar37 = lVar37 + 1;
    }
  }
  uVar28 = uVar28 ^ (ushort)(uVar25 >> 1);
  lVar51 = (ulong)(uVar25 >> 1 | 0x80000000) + (uVar9 & 0x68430000 | (ulong)uVar27);
  lVar37 = uVar46 << 9;
  sVar29 = (short)uVar42;
  uVar41 = sVar29 + 1;
  bVar62 = SCARRY2(sVar29,1) == (short)uVar41 < 0;
  uVar58 = CONCAT71((uint7)(uVar44 >> 0x3f) | (uint7)((ulong)lVar37 >> 8),bVar62);
  uVar46 = uVar46 * (uVar58 & 0xffffffff);
  iVar20 = (int)(uVar46 >> 0x20);
  uVar9 = (ulong)CONCAT22((short)((int)uVar8 >> 0x11),
                          CONCAT11((char)((ulong)uVar35 >> 8) << (bVar5 & 0x1f),bVar5)) << 1;
  lVar38 = CONCAT62((int6)(((ulong)uVar19 << 0xe) >> 0x10),0xae8b) + -1;
  bVar5 = (byte)uVar9 & 0x3f;
  uVar9 = uVar9 & ~(1 << bVar62);
  uVar50 = ((uint)((uVar46 & 0xffff0000 | (ulong)(ushort)(short)(char)uVar46) << bVar5) |
           (uVar42 & 0xffff0000 | (uint)uVar41) >> 0x40 - bVar5) + 1;
  bVar5 = ((byte)uVar9 & 0x1f) % 0x11;
  uVar44 = (ulong)(ushort)((short)uVar9 << bVar5 |
                          (ushort)(CONCAT12((char)uVar27 != '\0',(short)uVar9) >> 0x11 - bVar5));
  cVar47 = (char)lVar51;
  uVar35 = ((uint)lVar51 & 0xffffff00 | (uint)(byte)(cVar47 << 1 | cVar47 < '\0')) + 0x8756bd89;
  uVar45 = uVar44 & 0xffffffffffffff0f;
  bVar59 = (byte)uVar45;
  uVar27 = (ushort)uVar45;
  uVar41 = 0U >> bVar59 | uVar27 << 0x10 - bVar59;
  bVar5 = (byte)uVar50;
  bVar26 = (byte)lVar38;
  bVar26 = bVar26 << (bVar59 & 7) | bVar26 >> 8 - (bVar59 & 7);
  uVar8 = iVar20 + -0xb473a2 + (int)(short)uVar41 * 4;
  uVar42 = (uint)lVar37 & 0xffff0000 |
           uVar50 & 0xff00 |
           (uint)(byte)(bVar5 ^ (bVar5 == 99) * (bVar5 & ((bVar5 == 99) * ((byte)uVar41 ^ 99) ^ 99))
                       );
  if (SBORROW2(uVar28,-0x6f3f) ==
      SBORROW2(uVar28 + 0x6f3f,
               (ushort)(((uVar50 & 0xffff0000 | (uint)(ushort)((short)uVar58 >> 5)) >>
                         (uVar44 & 0xf) & 1) != 0))) {
    uVar42 = (uint)lVar13;
  }
  uVar44 = (ulong)uVar35 << 1;
  uVar50 = iVar20 + 0x83 + uVar8 * 8;
  uVar45 = (ulong)uVar8 | 1 << (uVar44 & 0x3f);
  uVar28 = (short)((int)(uint)uVar41 >> bVar59) + 1;
  uVar45 = uVar45 << bVar59 | uVar45 >> 0x40 - bVar59;
  if (in_PF) {
    uVar45 = uVar44;
  }
  bVar5 = (char)uVar45 -
          ((byte)(((short)(uVar46 >> 0x20) << 5) << bVar59) | (byte)(uVar54 >> 0x10 - bVar59));
  uVar44 = uVar45 & 0xffffffffffffff00 | (ulong)bVar5;
  cVar47 = (char)((ulong)uVar41 >> 8);
  uVar46 = (ulong)bVar26 ^ 0xffffffffb39776b8;
  bVar5 = (bVar5 >> 1) + (char)uVar28 + 1;
  uVar25 = ((int)(uint)uVar41 >> bVar59 & 0xffff0000U | (uint)uVar28) >> 1;
  uVar8 = (uint)((bVar5 & 1) != 0);
  uVar61 = uVar42 + 0x7d192052;
  uVar57 = uVar61 - uVar8;
  uVar36 = (uint)(bVar5 >> 1) | (int)(uVar45 & 0xff) << 0x1f;
  if ((SBORROW4(uVar42 + 0x50d84b05,-0x2c40d54d) != SBORROW4(uVar61,uVar8)) == (int)uVar57 < 0) {
    uVar36 = uVar25;
  }
  if ((int)uVar57 >= 0) {
    uVar44 = uVar45 & 0xffffffffffff0000 | (ulong)uVar57 * 3 & 0xffff;
  }
  sVar29 = (short)CONCAT31((int3)cVar47,!in_PF);
  uVar28 = (ushort)(CONCAT12(uVar42 + 0x50d84b05 < 0xd3bf2ab3 || uVar61 < uVar8,sVar29) >> 0xe) |
           sVar29 << 3;
  uVar61 = CONCAT22((undefined2)(cVar47 >> 7),uVar28);
  bVar5 = bVar59 + (char)((ulong)(uVar27 | 0x400) >> 8);
  uVar42 = (uint)uVar46;
  uVar8 = uVar42 & 0x1f;
  uVar58 = (ulong)((uVar25 >> uVar8 & 1) != 0) << 0x20;
  uVar31 = uVar42 >> 1 | (uint)((uVar46 & 1) != 0) << 0x1f;
  bVar62 = (uVar44 & 0x400) != 0;
  lVar13 = 0;
  uVar42 = 0;
  if (uVar61 != 0) {
    while (uVar42 = (uint)lVar13, (uVar61 >> lVar13 & 1) == 0) {
      lVar13 = lVar13 + 1;
    }
  }
  uVar46 = CONCAT71(CONCAT61((int6)(uVar9 >> 0x10),bVar59),bVar5) >> (bVar5 & 0x3f);
  uVar27 = (short)uVar36 + 0xceb1;
  uVar22 = (ulong)(uVar50 | 0xc0000000);
  uVar9 = (ulong)(uVar42 & 0x3fffffff) << 0x20 | uVar44 & 0xffffffff;
  uVar57 = uVar57 | 0xc0000000;
  uVar45 = (ulong)((uint)(uVar58 >> 0x18) | (uint)((uVar58 | uVar45 & 0xff) << 9)) * 0x5060e2e4;
  bVar5 = (byte)uVar46;
  uVar58 = (ulong)(uVar57 >> (bVar5 & 0x3f)) | (ulong)uVar57 << 0x40 - (bVar5 & 0x3f);
  iVar20 = -(int)(((ulong)((uint)(uVar9 % uVar22) & 0x3fffffff) << 0x20 |
                  uVar9 / uVar22 & 0xffffffff) / (ulong)uVar57);
  uVar54 = (ushort)(uVar31 >> 0x13) >> (bVar5 & 0x1f);
  uVar42 = (uVar25 | 1 << uVar8) ^ 0x64a9eea1;
  if (uVar42 != 0) {
    uVar22 = (ulong)(uVar50 & 0xffff0000 | 0xc0000000 | (uint)(ushort)uVar58);
  }
  bVar5 = bVar5 * '\x02';
  uVar52 = (ulong)((uint)CONCAT62((uint6)(ushort)(uVar35 >> 0x10),0x9cbe) >> 0xf |
                  (uint)uVar27 << 0x11) - (uVar46 & 0xffffffffffffff00 | (ulong)bVar5);
  uVar9 = uVar45 & 0xffffffffffff0000 | (ulong)(ushort)((ushort)uVar45 & ~(1 << (uVar27 & 0xf)));
  if (!bVar62) {
    uVar9 = uVar22;
  }
  uVar50 = (uint)uVar9;
  uVar45 = uVar46 & 0xffffffffffffff00 | (ulong)bVar5 | 0xc0;
  uVar8 = (uint)uVar45;
  bVar59 = (byte)uVar42;
  bVar64 = SBORROW1(bVar59,-0x44) != false;
  bVar63 = (char)(bVar59 + 0x44) < '\0';
  if (bVar64 != bVar63) {
    uVar8 = (uint)uVar46 & 0xffffff00 | (uint)bVar5 | 0xc0;
  }
  uVar44 = CONCAT71(CONCAT61((uint6)(uVar44 >> 0x10) & 0xffffffff0000 |
                             (uint6)(ushort)((uint)iVar20 >> 0x10),
                             (char)(((short)iVar20 * (short)uVar46 & 0x3fffU) % (ushort)(byte)uVar45
                                   )),bVar59 != 0xbc && bVar64 == bVar63);
  uVar42 = (uint)uVar22;
  if (bVar59 < 0xbd) {
    uVar42 = (uint)lVar38 & 0xffffff00 | (uint)(bVar26 & (byte)uVar28);
  }
  uVar35 = ((int)uVar58 + 0x4281f4b6) - (uint)CARRY4((uint)uVar52,uVar42);
  iVar20 = (int)(uint)(ushort)(uVar54 >> 0xb | uVar54 << 5) >> 0xb;
  uVar46 = uVar9 * 5 - 0x4ef34e1;
  uVar45 = uVar46 & 0xffffffff;
  sVar29 = 0xf;
  cVar47 = '\x0f';
  uVar28 = (ushort)uVar45;
  if (uVar28 != 0) {
    while (cVar47 = (char)sVar29, uVar28 >> sVar29 == 0) {
      sVar29 = sVar29 + -1;
    }
  }
  uVar45 = uVar52 & 0xffffff00 | (ulong)(byte)((byte)uVar52 ^ (byte)uVar45);
  uVar61 = (uVar36 & 0xffff0000 | (uint)uVar27 & 0xffffff00 |
           (uint)(byte)(((byte)uVar27 & (char)(uVar31 >> 0x13) * -0xc & (byte)uVar42) >>
                       ((byte)uVar8 & 0x1f))) - 1;
  uVar44 = (uVar44 ^ (ulong)(uVar44 == uVar45) * (uVar44 & uVar45)) & 0xffffffffffff0000;
  uVar57 = (int)((uint)uVar52 + uVar42) >> 1;
  bVar5 = (byte)uVar8 & 0x1f;
  uVar42 = uVar57 >> bVar5 | uVar57 << 0x20 - bVar5;
  uVar25 = ((uint)uVar46 & 0xffff0000 | (uint)(ushort)(uVar28 ^ (uVar28 >> 6 & 1) << 6)) ^
           1 << iVar20;
  uVar28 = (ushort)uVar42;
  uVar27 = uVar28 & 0xfbff;
  iVar60 = uVar25 + 0xce4ba328 + ((uint)(byte)(cVar47 + 1) | 0xbd7e0000) * 8;
  uVar36 = ((uVar25 & 0xffffff00 | (uint)(byte)((char)uVar35 * '\x02')) - iVar60) - 1;
  uVar9 = uVar9 + (uVar42 & 0xffff0000 | (uint)uVar27);
  uVar42 = (uint)CONCAT62((undefined6)((short)uVar28 >> 0xf),(short)uVar27 >> 1);
  if (uVar35 < uVar42) {
    uVar50 = 0;
  }
  uVar31 = iVar60 * 2;
  bVar5 = ((byte)uVar31 | (byte)(uVar9 >> 0x18) >> 7) + 0x49;
  uVar35 = uVar35 - uVar42 >> 2;
  uVar43 = (int)uVar45 - uVar57 >> 0x1d | ((uVar61 & 0xffff0000) * -0x32e5d8e | uVar8 & 0xffff) << 3
  ;
  uVar54 = (ushort)(byte)(((byte)iVar20 & bVar62 << 1) >> 1);
  uVar57 = (uint)bVar5;
  uVar46 = (ulong)(uVar31 & 0xffffff00 | (uint)bVar5) + 0x58d996b + uVar9 * 2;
  uVar42 = uVar43 + (uVar36 & 0xffffff00 | (uint)(byte)((char)uVar36 - 1));
  uVar27 = (ushort)((uVar50 & 1) != 0);
  uVar28 = uVar54 + 0xb7e4;
  if ((uVar54 < 0x481c || uVar28 < uVar27) || uVar28 == uVar27) {
    uVar57 = 0;
  }
  lVar13 = 0;
  if (uVar43 != 0) {
    while ((uVar43 >> lVar13 & 1) == 0) {
      lVar13 = lVar13 + 1;
    }
  }
  uVar25 = uVar8 & 0xffff0000 & ~(uint)(1 << ((ulong)uVar25 & 0x3f)) & 0x8adb2f90 |
           (uint)bVar62 << 8;
  uVar27 = (short)uVar46 + 0xe42a;
  uVar58 = uVar46 & 0xffff0000 | (ulong)uVar27;
  uVar36 = uVar43 << 1 | (uint)((int)uVar43 < 0);
  lVar13 = -(ulong)((int)uVar43 < 0) - (ulong)uVar36;
  uVar50 = (int)uVar44 * uVar35;
  uVar31 = (int)lVar13 + 0x15 + (uint)uVar9;
  uVar28 = (ushort)(uVar9 >> 1) & 0x7fff;
  uVar45 = SEXT18((char)(lVar13 >> 1));
  uVar8 = (int)uVar58 + 0x7b +
          (uVar50 | (byte)(-((uVar9 & 1) != 0) - (char)((ulong)uVar25 >> 8))) * 2;
  uVar42 = (uVar42 & 0xffffff00 | uVar42 >> 1 & 0x7f) - uVar31;
  uVar46 = (ulong)((uint)uVar46 & 0xffff0000 | (uint)(uVar58 <= (ulong)uVar36));
  uVar22 = uVar58 - 0x5ac48b05;
  if (SCARRY8(uVar58,-0x5ac48b06) != SCARRY8(uVar58 - 0x5ac48b06,1)) {
    uVar46 = (lVar13 >> 1 & 0xffU | (ulong)(uint7)(lVar13 >> 9) << 8) >> 1 & 0xffffffff;
  }
  sVar29 = 0xf;
  uVar54 = (ushort)(uVar46 & 0xffffffffffff00ff);
  if (uVar54 != 0) {
    while (uVar54 >> sVar29 == 0) {
      sVar29 = sVar29 + -1;
    }
  }
  uVar43 = (uVar25 | 0x90dc < uVar28) + 1 & 0xffffff00;
  iVar20 = (int)CONCAT62(SUB166(SEXT816((long)uVar44) * SEXT816((long)(ulong)uVar35) >> 0x50,0),
                         ((short)uVar8 >> 0xf) + 1);
  uVar21 = iVar20 + (int)(uVar46 & 0xffffffffffff00ff) * 4;
  uVar4 = (uint)(ushort)((ushort)uVar42 >> 2 | (ushort)uVar42 << 0xe);
  uVar54 = (short)uVar22 + (ushort)(0x90dc < uVar28);
  uVar35 = (uint)(ushort)(uVar28 + 0x6f23) << 0x15;
  uVar25 = ((uint)uVar9 & 0xffff0000 | (uint)(ushort)(uVar28 + 0x6f23)) >> 0xb;
  lVar13 = ((ulong)((uVar61 & 0xffff0000 | uVar57) + 0x3bec74f6 + uVar50) &
           ~(1 << ((ulong)uVar42 & 0x3f))) + (ulong)(uint)(iVar20 << 1 | 1 << (uVar4 & 0x1f));
  bVar5 = (byte)((short)uVar36 << 1);
  if (bVar5 == 0x6f) {
    uVar8 = uVar43;
  }
  uVar9 = ((uVar45 << 9 | uVar45 >> 0x37) & uVar22) << 1;
  uVar48 = CONCAT11((byte)((ulong)uVar21 >> 8) | (byte)uVar21,(byte)uVar21);
  uVar21 = uVar21 & 0xffff0000;
  uVar44 = (ulong)uVar8 | uVar9 | bVar5 < 0x6f;
  uVar41 = (ushort)uVar25;
  uVar46 = ~(uVar44 >> 8 & 0xff);
  uVar28 = 0;
  if (uVar41 != 0) {
    while ((uVar41 >> uVar28 & 1) == 0) {
      uVar28 = uVar28 + 1;
    }
  }
  uVar50 = uVar31 & 0xffff0000 | (uint)uVar28;
  uVar8 = (uint)uVar44 & ~(1 << ((uint)uVar27 & 0x1f));
  uVar44 = (ulong)(CONCAT18((uVar46 & 1) != 0,(long)uVar46 >> 1) >> 0x1c);
  sVar29 = 0;
  uVar28 = (ushort)uVar8;
  if (uVar28 != 0) {
    while ((uVar28 >> sVar29 & 1) == 0) {
      sVar29 = sVar29 + 1;
    }
  }
  uVar36 = (uint)uVar44;
  uVar61 = 0x5d009c6d;
  if (0 < (int)((uVar21 | uVar48) & ((uint)lVar13 & 0xffffff00 | (uint)(byte)((char)lVar13 << 1))))
  {
    uVar61 = uVar36;
  }
  uVar49 = uVar48 ^ (ushort)(uVar28 == uVar48) * (uVar48 ^ (ushort)uVar44);
  uVar57 = uVar8 & 0xffff0000 |
           (uint)(ushort)(uVar28 ^ (ushort)(uVar28 == uVar48) * (uVar28 & uVar49)) | 1;
  uVar31 = uVar61 & 0xffff0000 |
           (uint)(ushort)((ushort)(CONCAT12(1,(short)uVar61) >> 3) | (short)uVar61 << 0xe);
  auVar2 = SEXT816((long)(uVar9 & 0xffffffff00000000 | (ulong)uVar57)) *
           SEXT816((long)(ulong)(uVar21 | uVar49));
  uVar43 = ~uVar43;
  uVar28 = SEXT12((char)uVar49);
  uVar8 = uVar36 & 0xffff0000 | (uint)uVar28;
  uVar32 = uVar31 - uVar50;
  uVar61 = SUB164(auVar2 >> 0x40,0);
  if (uVar32 != 0 && (int)uVar50 <= (int)uVar31) {
    uVar61 = uVar8;
  }
  uVar44 = (ulong)uVar50 & 0xffffffffffffff00 | (ulong)!bVar62;
  uVar9 = (ulong)(ushort)(short)SUB161(auVar2 >> 0x40,0);
  if (SBORROW4(uVar31,uVar50)) {
    uVar9 = (ulong)uVar8;
  }
  uVar48 = (ushort)uVar44;
  if (uVar32 == 0) {
    uVar44 = (ulong)uVar50 & 0xffffffffffff0000 | uVar9 & 0xffff;
  }
  uVar48 = (ushort)((0U >> (uVar48 & 0xf) & 1) != 0);
  uVar24 = uVar28 + 0x3381 + uVar48;
  uVar50 = (uint)CONCAT62((int6)(uint6)(ushort)((uVar42 & 0xffff0000) >> 0x10) >> 3,
                          (ushort)((long)(ulong)(uVar42 & 0xffff0000 | uVar4) >> 3) >> 1 |
                          (ushort)(0xcc7e < uVar28 || CARRY2(uVar28 + 0x3381,uVar48)) << 0xf);
  uVar28 = (short)uVar61 << 1;
  sVar29 = (short)(((((uVar35 | uVar25) >> 0x11) << 0x10) << ((byte)uVar43 & 0x3f)) >> 5);
  uVar48 = -(sVar29 >> 0xf);
  uVar46 = (ulong)(uVar28 | uVar48);
  bVar59 = (byte)uVar24;
  bVar26 = (byte)uVar27;
  bVar5 = bVar59 + bVar26;
  uVar42 = (uint)(ushort)((ushort)uVar44 + sVar29);
  if (!bVar62) {
    uVar42 = (uint)uVar27;
  }
  cVar47 = (char)(uVar46 >> 8);
  uVar27 = uVar28 & 0xff | uVar48;
  uVar52 = (ulong)(ushort)(uVar27 | (ushort)(byte)(cVar47 << 7 |
                                                  (byte)(CONCAT11(CARRY1(bVar59,bVar26) ||
                                                                  0xfe < bVar5,cVar47) >> 2)) << 8)
           & 0xffffffffffffff0f;
  sVar11 = (sbyte)uVar52;
  uVar19 = uVar49 >> sVar11 | 0 << 0x10 - sVar11;
  uVar56 = (ushort)uVar9 >> sVar11;
  uVar33 = ~(ulong)uVar32;
  uVar31 = -(uVar35 & 0xba00000 | (uint)(ushort)((uVar41 & 0x138d) << 1));
  uVar25 = ((uint)uVar44 & 0xffff0000 | uVar42) + 0x135fc1f;
  bVar12 = (char)uVar19 + (char)uVar33;
  uVar30 = (ulong)(ushort)(((ushort)uVar44 | 1) >> sVar11) << 1 | 1;
  uVar45 = (long)(int)((uint)(ushort)(short)(char)((char)uVar57 * (char)uVar49) * 0x80000 *
                      CONCAT31((undefined3)((char)((ulong)uVar43 >> 8) >> 7),
                               (SCARRY1(bVar59,bVar26) != SCARRY1(bVar5,'\x01')) ==
                               (char)(bVar5 + 1) < '\0')) *
           (long)(int)(uVar36 & 0xffff0000 | (uint)uVar24 & 0xffffff00 | (uint)(byte)(bVar5 + 1));
  uVar36 = uVar25 | 0xc0000000;
  uVar45 = (ulong)((uint)((uVar45 >> 0x20) << 0x1a) & 0x3fffffff) << 0x20 | uVar45 & 0xffffffff;
  uVar58 = uVar45 / (ulong)uVar36;
  uVar14 = uVar58 & 0xffffffff;
  uVar45 = uVar45 % (ulong)uVar36;
  uVar42 = (uVar61 & 0xffff0000 | (uint)uVar52) >> 1;
  uVar8 = (uint)(uVar48 != 0) << 0x1f;
  uVar57 = uVar50 + 0x4e71d13c + (int)uVar9 + (uint)((uVar44 & 1) != 0) + uVar31;
  bVar5 = (byte)uVar42 & 0x1f;
  uVar50 = (CONCAT31((uint3)(((uint)uVar54 << 0x1f) >> 8) |
                     ((uint3)(uVar22 >> 8) & 0xffff00 | (uint3)(byte)(uVar54 >> 8)) >> 1,
                     uVar50 < 0xb18e2ec4) | 0x1cc89500) << bVar5;
  uVar54 = (ushort)(byte)uVar14 * (ushort)(byte)(uVar14 >> 8);
  uVar35 = (uint)uVar58;
  uVar48 = (short)uVar57 - 1;
  lVar13 = (ulong)((uint6)(((uVar46 & 0xff00) << 0x28) >> 0x10) | (uint6)((uVar46 << 0x38) >> 0x10))
           << 0x10;
  uVar41 = uVar54 ^ uVar48;
  uVar28 = (ushort)(uVar31 >> 1);
  if (-1 < (short)uVar41) {
    uVar28 = uVar41;
  }
  cVar17 = (char)(uVar45 >> 8);
  bVar15 = (byte)uVar45;
  cVar47 = cVar17 + -0x7b;
  uVar49 = CONCAT11(cVar47,bVar15);
  uVar4 = (uint)uVar45 & 0xffff0000;
  uVar32 = uVar4 | (uint)uVar49;
  uVar43 = (uint)(ushort)(CONCAT11(((short)((ushort)uVar31 - uVar28) < 0) << 7 |
                                   ((ushort)uVar31 == uVar28) << 6 |
                                   (((ulong)(uVar21 | uVar19) + (uVar33 & 0xfffffffffffffff) &
                                    0x1000000000000000) != 0) << 4 | bVar62 << 2,
                                   cVar47 != '\0' && 'z' < cVar17) | 0x200);
  bVar59 = (byte)(((ushort)uVar50 | (ushort)(bVar12 >> 0x20 - bVar5)) << 2);
  uVar44 = (ulong)(uVar42 | uVar8) & 0xffffffffffffff0f;
  bVar26 = (byte)uVar44;
  uVar24 = (uVar48 & 0xff00 | (ushort)(byte)((char)uVar48 - (char)uVar56)) << bVar26 |
           (ushort)uVar25 >> 0x10 - bVar26;
  uVar41 = (ushort)((uVar35 & 0xffff0000 | uVar43) >> 9);
  bVar39 = (byte)uVar24;
  bVar5 = bVar39 + (byte)uVar25;
  uVar21 = ((uint)((uVar33 >> 8 & 0xffffffffffff00) << 8) |
           (uint)(ushort)((short)(char)uVar54 ^ (ushort)uVar30)) << bVar26 | uVar36 >> 0x20 - bVar26
  ;
  uVar42 = (uint)((ulong)lVar13 >> 0x30);
  uVar48 = ((ushort)(CONCAT12(CARRY1(bVar39,(byte)uVar25) || 0xfe < bVar5,(ushort)bVar12) >>
                    bVar26 % 0x11) | (ushort)bVar12 << 0x11 - bVar26 % 0x11) &
           ~(ushort)(1 << (uVar42 & 0x1f));
  bVar63 = (uVar27 & 2) != 0;
  uVar54 = (ushort)uVar44 >> 1;
  uVar27 = (ushort)bVar63;
  uVar19 = (ushort)((ulong)lVar13 >> 0x30);
  uVar28 = uVar48 + uVar19;
  bVar12 = (byte)uVar54;
  uVar55 = uVar42 << (bVar12 & 0x1f) |
           (uint)(CONCAT14(CARRY2(uVar48,uVar19) || CARRY2(uVar28,uVar27),uVar42) >>
                 0x21 - (bVar12 & 0x1f));
  bVar59 = bVar59 >> 3 | (bVar59 | (byte)(uVar25 >> 8) >> 6) << 5;
  uVar9 = (uVar9 & 0xffffffffffff0000 | (ulong)uVar56) -
          (ulong)((uVar31 & 0xffff0000) >> bVar26 | uVar32 << 0x20 - bVar26);
  uVar45 = (ulong)(uVar57 & 0xffff0000 |
                  (uint)(ushort)(uVar28 + uVar27 >> 1 | (ushort)(0x23 < bVar59) << 0xf));
  uVar27 = (ushort)(uVar36 ^ 0x9c78741a);
  uVar46 = (ulong)((uVar36 ^ 0x9c78741a) & 0xffff0000 | (uint)(ushort)(uVar27 + 0xde31)) - 1;
  uVar44 = (ulong)(((uint)uVar24 & 0xff00 | (uint)(byte)(bVar5 + 1)) >> (bVar12 & 0x3f));
  uVar42 = ((uVar61 & 0xfffe0000) >> 1 | uVar8 | (uint)(ushort)(uVar54 | (ushort)bVar63 << 0xf)) <<
           (bVar12 & 0x1f);
  uVar8 = ~((uint)uVar46 & 0xffffff00 | (uint)(uVar46 >> 1) & 0x7f);
  bVar5 = (bVar59 - 0x24) * '\x02';
  lVar13 = uVar44 - 0xedd036b5;
  uVar53 = SEXT17((char)((ulong)uVar49 >> 8));
  uVar46 = CONCAT71(uVar53,lVar13 == 0);
  uVar61 = (uint)uVar46;
  if (lVar13 == 0 || (SBORROW8(uVar44,0xedd036b5) != false) != lVar13 < 0) {
    uVar8 = uVar8 & 0xffff0000 | (uint)uVar49;
  }
  bVar59 = (byte)uVar42;
  if (bVar5 >= bVar59 && bVar5 != bVar59) {
    uVar42 = uVar32;
  }
  uVar54 = (ushort)(CONCAT12(bVar5 < bVar59,(short)uVar8) >> 2) | (short)uVar8 << 0xf;
  bVar5 = (byte)uVar42 & 7;
  uVar28 = (short)(uVar36 >> 1) >> ((byte)uVar42 & 0x1f);
  lVar37 = (long)(int)(((uVar35 & 0xfe000000) >> 9 | uVar43 << 0x17 |
                        (uint)(ushort)(uVar41 << bVar26 | uVar41 >> 0x10 - bVar26) & 0xffffff00 |
                       (uint)(byte)-(uVar27 < 0x21cf)) << 1 | uVar57 >> 0x1f) *
           (long)(int)(uVar4 | (uint)uVar49 & 0xffffff00 |
                      (uint)(byte)(bVar15 >> bVar5 | bVar15 << 8 - bVar5));
  cVar47 = (char)((ulong)lVar37 >> 0x20);
  uVar35 = (int)uVar30 + 0x830c5cff;
  uVar27 = (ushort)uVar21;
  uVar41 = uVar27 << 0xb | uVar27 >> 5;
  uVar25 = uVar21 & 0xffff0000 | (uint)uVar41;
  uVar42 = (uVar42 & 0xffffff00 | (uint)(byte)(cVar47 + (char)(uVar28 >> 1))) * 0x7c504b97;
  uVar27 = 0xf;
  if (uVar54 != 0) {
    while (uVar54 >> uVar27 == 0) {
      uVar27 = uVar27 - 1;
    }
  }
  uVar44 = uVar9 & 0xffffffffffff0000 | (ulong)uVar27;
  uVar48 = (ushort)uVar42;
  uVar48 = uVar48 ^ (uVar48 >> 3 & 1) << 3;
  uVar42 = uVar42 & 0xffff0000;
  lVar38 = (ulong)(uVar25 + ((uVar50 & 0xffff0000 |
                             (uint)(ushort)(((ushort)uVar55 & 0xff00 | (ushort)(byte)~(byte)uVar55)
                                            + (short)uVar35 + 1)) << 1 | 1) >> 1) + 0x343d673a;
  sVar29 = CONCAT11((byte)(uVar28 >> 9),cVar47 + -0x1f) + -0x5ee2;
  lVar16 = uVar44 * -0x52bb3efc;
  lVar51 = SUB168(SEXT816((long)uVar44) * SEXT416(-0x52bb3efc) >> 0x40,0);
  uVar9 = (ulong)(lVar51 != 0 && lVar51 != -1) << 0x20 | uVar9 & 0xffff0000 | (ulong)uVar27;
  uVar50 = CONCAT22((ushort)(uVar36 >> 0x12),sVar29) & 0xffffff00 | (uint)(byte)((ulong)lVar16 >> 8)
  ;
  if (!SBORROW1((char)lVar16,(char)sVar29)) {
    uVar50 = uVar61;
  }
  uVar36 = (uint)lVar38 & 0xffffff00 | (uint)(byte)((char)lVar38 - 0x12);
  uVar50 = uVar50 ^ 1 << (uVar61 & 0x1f);
  uVar44 = ((uVar45 & 0xff000000) << 8 | (uVar45 & 0xff0000) << 0x18 | (uVar45 & 0xff00) << 0x28 |
           uVar45 << 0x38) * 2;
  uVar45 = (ulong)((int)(uVar54 != 0) + 0x136e6ce9) << 0x3f;
  uVar46 = uVar46 >> 1 | uVar45;
  uVar35 = uVar35 | uVar42 | (uint)uVar48 & 0xffffff00 | (uint)(byte)~(byte)uVar48;
  if (0x6dad5023 < uVar44) {
    uVar46 = (((ulong)uVar53 & 0xfffffffffffe00) << 8) >> 1 | uVar45 |
             (ulong)((ushort)lVar37 & 0xff);
  }
  lVar51 = (ulong)((uint)(uVar9 >> 0x17) | (uint)(uVar9 << 10)) << 1;
  uVar45 = uVar46 & 0xffffffffffffff00 | (ulong)(byte)((byte)uVar46 + (char)uVar35);
  lVar38 = (uVar44 - 0x6dad5024 ^ 0xffffffffe869cd0a) << 1;
  uVar61 = (uVar42 | uVar35 & 0xff00 | (uint)(byte)uVar46) + 1;
  uVar42 = (int)lVar13 + 0x353b0b2a + uVar61 * 2;
  uVar35 = uVar50 & 0x8a50d13;
  bVar5 = (byte)(uVar35 >> 0x18);
  uVar9 = (ulong)(uVar35 >> 0x18 | (uVar50 & 0xa50000) >> 8 | uVar35 << 0x18);
  if ((uVar50 & 0x8a50d13) == 0) {
    uVar42 = uVar42 & 0xffff0000 | (uint)(ushort)lVar51;
  }
  uVar57 = uVar36 + 0xd3f4a81e;
  bVar59 = (byte)lVar13;
  if (uVar57 == 0 || (int)uVar36 < 0x2c0b57e2) {
    bVar59 = bVar5;
  }
  bVar12 = (byte)uVar42 & 7;
  lVar13 = (long)(int)lVar37 * (long)(int)uVar57;
  iVar20 = (int)((ulong)lVar13 >> 0x20);
  bVar26 = ((byte)uVar42 & 0x1f) % 9;
  bVar26 = (byte)(CONCAT11(iVar20 != 0 && iVar20 != -1,(char)uVar57) >> bVar26) |
           (char)uVar57 << 9 - bVar26;
  uVar27 = (ushort)uVar57 & 0xff00 | (ushort)bVar26;
  uVar44 = (ulong)uVar61 | 0xc000;
  sVar29 = (short)((CONCAT22((short)((ulong)lVar13 >> 0x20),(short)lVar13) & 0x3fffffff) /
                  (uint)(ushort)uVar44);
  iVar20 = (int)uVar44;
  if (!bVar62) {
    iVar20 = (int)uVar45;
  }
  iVar10 = (int6)(short)((ulong)lVar13 >> 0x10);
  sVar6 = sVar29 << 1;
  uVar31 = (((int)uVar45 + (int)((ulong)uVar42 & 0xffffffffffffff90)) - (int)CONCAT62(iVar10,sVar6))
           - (uint)(sVar29 < 0);
  uVar61 = uVar57 & 0xffff0000 | (uint)(ushort)(uVar27 + uVar41);
  uVar36 = ((int)CONCAT62(iVar10,(short)(char)sVar6 * (short)(char)(((byte)lVar38 | 1) + bVar26)) -
           uVar31) - (uint)CARRY2(uVar27,uVar41);
  bVar5 = (byte)uVar31 & bVar5;
  uVar44 = (ulong)uVar25;
  if (bVar5 == 0) {
    uVar44 = uVar9;
  }
  bVar26 = (byte)uVar36;
  uVar25 = uVar61 >> 1;
  uVar46 = 0;
  if (uVar45 != 0) {
    while ((uVar45 >> uVar46 & 1) == 0) {
      uVar46 = uVar46 + 1;
    }
  }
  uVar58 = (ulong)uVar42 & 0xffffffffffffff90 &
           (ulong)(uVar36 & 0xffffff00 | (uint)(byte)(bVar26 >> 6 | bVar26 << 2));
  bVar59 = ((bVar59 >> bVar12 | bVar59 << 8 - bVar12) - (uVar58 == 0)) - 1;
  uVar45 = ((ulong)(((uVar8 & 0xffff0000 | (uint)uVar54) >> 1 | (int)lVar37 << 0x1f) ^
                   (uVar8 & 0x800000) >> 1) - (uVar46 & 0xffffffffffffff00 | (ulong)(uVar58 == 0)))
           - (ulong)(((ushort)uVar45 >> 0xd & 1) != 0);
  uVar46 = uVar45 & 0xff;
  uVar27 = (ushort)uVar44 & 0xff00 | (ushort)uVar46;
  uVar36 = ((uint)uVar44 & 0xffff) + 0x6b543d24;
  uVar8 = (int)(uVar58 + 0x23dbb934) + 0x78a44fff >> 9;
  uVar42 = uVar36 & 0xffffff00 | (uint)(byte)((char)uVar36 + (char)uVar8);
  uVar52 = (ulong)(uVar42 + 0x7eabd9a9 +
                  ((uVar8 & 0xffffff00 | uVar36 & 0xff) &
                  ((uint)CONCAT62((int6)((ulong)lVar51 >> 0x10),0x4343) & 0xffff0000 | 0x4363)));
  uVar22 = (ulong)((iVar20 + 0x63de181f) * 2 | (uint)(iVar20 + 0x63de181f < 0));
  lVar13 = 0x3f;
  if (uVar25 != 0) {
    while (uVar25 >> lVar13 == 0) {
      lVar13 = lVar13 + -1;
    }
  }
  bVar26 = (char)uVar25 * '\x02';
  uVar57 = (int)((uint)lVar38 & 0xffff0000 | uVar36 & 0xffff) >> (bVar59 & 0x1f);
  uVar14 = (long)(char)bVar59 & ~(1 << (uVar22 & 0x3f));
  uVar8 = CONCAT31((uint3)(uVar61 >> 9),bVar26 ^ (bVar26 == 0) * bVar26);
  if (-1 < (char)bVar26) {
    uVar14 = uVar14 & 0xffffffffffff0000 | uVar44 & 0xff00 | uVar46;
  }
  bVar59 = (byte)uVar14 & 0xf;
  uVar28 = (ushort)uVar42;
  lVar13 = ((ulong)(uint3)((uint3)uVar50 & 0xd00 | (uint3)((uVar35 << 0x18) >> 8)) |
           (ulong)(byte)((char)(uVar9 >> 8) + (char)(uVar58 + 0x23dbb934 >> 8) +
                        ((uVar7 >> (uint)bVar5 & 1) != 0))) * 0x100 - uVar52;
  if (uVar27 != 0xc46e && SCARRY2(uVar27,0x3b92) == (short)(uVar27 + 0x3b92) < 0) {
    uVar52 = uVar14 & 0xffffffff;
  }
  uVar35 = ((uint)uVar45 & 0xffffff00 |
           (uint)(byte)(((char)uVar25 < '\0' == (char)bVar26 < '\0') << 1)) * 0x4fe1dd2b;
  uVar27 = (ushort)uVar57 & 0xff00 | (ushort)(byte)((char)uVar57 - 0xb);
  bVar26 = ((byte)uVar14 & 0x1f) % 0x11;
  uVar50 = (uint)(ushort)(uVar27 >> bVar26 | uVar27 << 0x11 - bVar26);
  uVar42 = (uVar31 & 0xffff0000 | (uint)(ushort)(((ushort)uVar31 & 0xff00 | (ushort)bVar5) + 1)) +
           0x1e77eb47;
  if (-1 < (int)uVar42) {
    uVar50 = uVar8 & 0xffff;
  }
  return CONCAT88(*(undefined8 *)
                   ((uVar23 & 0xffffffff00000000 | (ulong)(uVar7 & ~(1 << (uint)bVar5))) + 0x58),
                  lVar13 + uVar14 + (ulong)(byte)uVar35 * 0x100 +
                  (ulong)(uVar57 & 0xffff0000 | uVar50) + uVar22 * 3 + (ulong)uVar35 + (ulong)uVar8
                  + (ulong)uVar42 + uVar52 +
                  ((ulong)(uVar36 & 0xffff0000 |
                          (uint)(ushort)(uVar28 << bVar59 | uVar28 >> 0x10 - bVar59)) + 1 &
                   0xffffffffffff0000 | uVar52 & 0xffff) + 0x4fffffaaca4f8b9);
}



// WARNING: Removing unreachable block (ram,0x00408cfe)
// WARNING: Removing unreachable block (ram,0x004083b4)
// WARNING: Removing unreachable block (ram,0x00407e90)
// WARNING: Removing unreachable block (ram,0x004089d3)
// WARNING: Removing unreachable block (ram,0x00408d14)
// WARNING: Removing unreachable block (ram,0x004088c9)
// WARNING: Removing unreachable block (ram,0x00408162)
// WARNING: Removing unreachable block (ram,0x00408ce4)

undefined  [16] log_size_10_var_007(void)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  short sVar3;
  long lVar4;
  undefined auVar5 [16];
  uint7 uVar6;
  unkuint9 Var7;
  uint3 uVar8;
  int iVar9;
  char cVar10;
  byte bVar11;
  ushort uVar12;
  ushort uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  byte bVar20;
  sbyte sVar21;
  char cVar24;
  uint uVar22;
  ulong uVar23;
  byte bVar25;
  byte bVar26;
  short sVar27;
  uint uVar28;
  ulong uVar29;
  byte bVar30;
  byte bVar31;
  ushort uVar32;
  ushort uVar33;
  short sVar34;
  uint uVar35;
  uint uVar36;
  ulong uVar37;
  int iVar38;
  uint uVar39;
  ulong uVar40;
  ushort uVar41;
  ulong uVar42;
  int iVar43;
  uint uVar44;
  byte bVar45;
  uint uVar46;
  ulong uVar47;
  ulong uVar48;
  uint uVar49;
  uint uVar50;
  long lVar51;
  ushort uVar52;
  uint uVar53;
  ulong uVar54;
  ulong uVar55;
  ushort uVar56;
  undefined8 uVar57;
  bool bVar58;
  bool bVar59;
  
  iVar9 = (int)register0x00000020;
  lVar51 = 0;
  while ((0x42ee9041eb945b7fU >> lVar51 & 1) == 0) {
    lVar51 = lVar51 + 1;
  }
  uVar17 = SUB168(ZEXT816(0xecb017463f22c991) >> 0x17,0);
  uVar15 = uVar17 | 0x8b26440000000000;
  uVar35 = iVar9 + 0x7ef911e7;
  if ((short)((ushort)uVar35 | 0x5b7f) < 0) {
    uVar15 = uVar17 & 0xffffffffffff0000 | 0x8b2644000000bff5;
  }
  uVar13 = 0xf;
  while (0x45ccU >> uVar13 == 0) {
    uVar13 = uVar13 - 1;
  }
  uVar22 = (uint)((ulong)uVar13 | 0xd5f37526b8350000);
  uVar14 = (uint)uVar15;
  iVar38 = (int)(iVar9 + 0x7ef911ec + uVar14 * 8) >> 7;
  bVar59 = (uVar15 & 0x400) == 0;
  bVar20 = (byte)uVar35;
  uVar49 = uVar35 & 0xffff0000 | 0xffcc;
  uVar46 = (uint)(uVar14 == 0x735116a0) *
           ((0x2795000 << (bVar20 & 0x1f)) * -0xc378182 ^ 0x735116a0U) ^ 0x735116a0;
  uVar14 = uVar14 ^ (uint)(uVar14 == 0x735116a0) * (uVar14 & uVar46);
  uVar36 = uVar49 + 0x1b5efc8b;
  uVar12 = ((short)uVar14 + 0x37eb) - (ushort)(uVar49 < 0xe4a10375);
  uVar17 = uVar15 & 0xffffffff00000000 | (ulong)uVar14 & 0xffffffffffff0000;
  uVar14 = 0x96976bca;
  if (-1 < (short)uVar12) {
    uVar14 = uVar22;
  }
  uVar15 = (long)iVar38 * -0x4c2016a8;
  bVar31 = (byte)uVar15;
  iVar43 = (int)(uVar15 >> 0x20);
  bVar58 = iVar43 != 0 && iVar43 != -1;
  bVar30 = bVar31 + 0xaa;
  uVar15 = uVar15 & 0xffffff00 | (ulong)(byte)(bVar30 + bVar58);
  uVar49 = 0x14aabf00;
  if ((SCARRY1(bVar31,-0x56) != SCARRY1(bVar30,bVar58)) == (char)(bVar30 + bVar58) < '\0') {
    uVar49 = uVar22;
  }
  sVar27 = 0x6ec1;
  if (bVar31 < 0x56 && !CARRY1(bVar30,bVar58)) {
    sVar27 = (short)uVar15;
  }
  if (bVar59) {
    uVar49 = uVar14;
  }
  uVar41 = (ushort)uVar46;
  sVar27 = uVar41 + 0x93 + sVar27 * 2;
  uVar32 = ((ushort)uVar36 & 0xff00 | (ushort)(byte)(((char)uVar36 - bVar20) - 1)) >>
           (bVar20 & 0x1f);
  uVar16 = CONCAT62(0x83da885d3620,sVar27) & 0xffffffffffffff00 | (ulong)(uVar12 >> 8);
  uVar33 = sVar27 * 0x100;
  uVar56 = uVar12 & 0xff | uVar33;
  uVar29 = uVar16 << (bVar20 & 0x3f) | uVar16 >> 0x40 - (bVar20 & 0x3f);
  uVar54 = ((ulong)uVar13 | 0xd5f37526b8350000) << (bVar20 & 0x3f);
  uVar16 = (ulong)((uint)((ushort)iVar38 & 0xff | 0x800) | 0x11d60000) - 0x124d940c;
  uVar22 = (uint)(-1 < (short)uVar32) | 0xeb945900;
  lVar51 = 0x3f;
  uVar46 = 0x3f;
  if (uVar16 != 0) {
    while (uVar46 = (uint)lVar51, uVar16 >> lVar51 == 0) {
      lVar51 = lVar51 + -1;
    }
  }
  uVar53 = (uint)uVar54 >> 1;
  if ((uVar54 & 1) != 0) {
    uVar49 = uVar49 & 0xffff0000;
  }
  bVar30 = (byte)(uVar29 >> 8);
  uVar29 = uVar29 & 0xffffffffffff0000 |
           (ulong)CONCAT11(bVar30 >> (bVar20 & 7) | bVar30 << 8 - (bVar20 & 7),(char)uVar29);
  uVar15 = uVar15 ^ uVar29;
  uVar28 = (int)uVar29 >> (bVar20 & 0x1f);
  iVar38 = (uVar36 & 0xffff0000 | (uint)uVar32 & 0xffffbda9) << 5;
  bVar30 = (byte)(uVar36 >> 0x1b) | (byte)iVar38;
  uVar49 = uVar49 >> 0x12 | uVar53 << 0xe;
  uVar29 = uVar15 * -0x10ad61a5;
  bVar31 = bVar30 + 0x27;
  if (bVar31 == 0 || SCARRY1(bVar30,'\'') != false) {
    uVar29 = (ulong)uVar53;
  }
  uVar36 = uVar14 >> (bVar20 & 0x1f) | uVar14 << 0x20 - (bVar20 & 0x1f);
  uVar8 = (uint3)(uVar16 >> 8) & 0xffff00;
  uVar14 = uVar36 & 0xffff0000;
  uVar39 = ~(uint)uVar15;
  bVar20 = (byte)((ulong)(uVar14 | (uint)(ushort)((ushort)uVar36 ^ 1 << ((ushort)uVar53 & 0xf)) &
                                   0xffffff00) >> 8);
  uVar36 = uVar28 & 0xffffff00 | (uint)bVar20;
  uVar46 = uVar46 & 0xffffff00 | (uint)(byte)((byte)uVar46 >> 1 | (byte)uVar46 << 7);
  if (-1 < (int)uVar22) {
    uVar46 = uVar49;
  }
  bVar30 = (byte)(uVar35 >> 0x1e);
  uVar32 = 0x4849U >> bVar30 | (short)uVar36 << 0x10 - bVar30;
  uVar49 = uVar49 - (uVar14 | (uVar28 & 0xff) << 8);
  uVar12 = (short)(uVar12 & 0x27 | uVar33) >> 1;
  uVar33 = ((ushort)((uint)iVar38 >> 0x11) | (ushort)bVar31 << 0xf) + 0x49ae;
  uVar33 = uVar33 & 0xff00 | (ushort)(byte)((char)uVar33 << 1) | 1;
  iVar43 = -(uVar46 & 0xffffff00 | (uint)(byte)((byte)uVar46 >> 7 | (byte)uVar46 << 1));
  uVar15 = (uVar17 | uVar12) >> 1;
  cVar24 = bVar20 + ((uVar12 & 1) != 0);
  uVar36 = uVar36 + 0x951fa68;
  uVar35 = (uint)(cVar24 < '\0');
  iVar38 = iVar43 + uVar39;
  uVar44 = iVar38 + uVar35;
  uVar46 = uVar22 << 1 | 1;
  if ((SCARRY4(iVar43,uVar39) != SCARRY4(iVar38,uVar35)) == (int)uVar44 < 0) {
    uVar46 = (uint)uVar32 | 0x30810000;
  }
  sVar27 = (short)(char)uVar15 * (short)(char)(uVar15 >> 8);
  uVar17 = (ulong)((uVar32 & 1) != 0) << 0x20 |
           CONCAT62((uint6)(uVar17 >> 0x11),sVar27) & 0xffffffff;
  uVar35 = (uint)(uVar17 << bVar30) | (uint)(uVar17 >> 0x21 - bVar30);
  cVar10 = (char)uVar35 + (char)uVar36;
  uVar50 = uVar39 & 0xffffff00 | (uint)(-1 < cVar10);
  uVar15 = (ulong)CONCAT22((ushort)(uVar54 >> 0x10) >> 1,(ushort)uVar53 + uVar33) - 0x13bad109;
  uVar22 = (uint)CONCAT11(cVar24 * '\x02' | cVar24 < '\0',bVar30) + 1;
  bVar20 = (byte)uVar22;
  uVar53 = (uint)uVar15 ^ 0x4ac1;
  uVar14 = (uVar36 >> 1) + (uVar14 << bVar20 | uVar46 >> 0x20 - bVar20);
  uVar17 = (ulong)(uVar53 ^ (uint)((uVar35 & 0xffffff00 |
                                   (uint)(byte)(cVar10 * -0x80 |
                                               (byte)(CONCAT11(0x43dd < (ushort)uVar44,cVar10) >> 2)
                                               )) == uVar53) *
                            (uVar53 ^ (uVar44 & 0xffff0000 | (uint)(ushort)((ushort)uVar44 + 0xbc22)
                                      | 0x8e84955)));
  uVar13 = (short)uVar49 + ((uVar13 + uVar56 * 8) * 2 - (short)uVar28) + 0x276a & 0xff00 |
           (ushort)(byte)(bVar59 << bVar20);
  if (!bVar59) {
    uVar13 = uVar41 & 0x1ced;
  }
  if ((ulong)uVar46 == 0xffffffffba0d5152) {
    uVar50 = uVar39 & 0xffff0000 | uVar14 & 0xffff;
  }
  uVar12 = (short)uVar14 + 1;
  uVar41 = (ushort)CONCAT71((uint7)(uint3)(uVar8 | (byte)((char)((ulong)uVar56 >> 8) >> 0xf)),0x7b);
  uVar41 = uVar41 >> bVar20 | uVar41 << 0x10 - bVar20;
  uVar46 = (uVar49 + 0xe89aaf5a & 0xffff0000 |
           (uint)(ushort)(((ushort)(uVar49 + 0xe89aaf5a) ^ 0xdd) << bVar30 |
                         ((ushort)uVar29 & 0xff00 | (ushort)(uVar49 < 0x176550a6)) >> 0x10 - bVar30)
           ) >> 1 | (uint)((byte)uVar12 < bVar20) << 0x1f;
  uVar16 = ((ulong)(ushort)((uVar12 & 0xff) * (uVar41 & 0xff)) | 0xffffffffffff0000) * (ulong)uVar22
  ;
  cVar24 = (char)((ulong)uVar22 >> 8);
  uVar49 = (uint)uVar16 >> 1;
  uVar36 = CONCAT22((short)(uVar8 >> 8),uVar41 - (uVar33 - sVar27 & 0xff00));
  iVar38 = (uVar50 ^ 0xb945fddd) * 2;
  uVar15 = (uVar15 & 0xffffffff00000000 | uVar17) >> 0xf;
  bVar31 = (byte)((int)uVar14 >> 0x1c);
  uVar29 = uVar29 >> 0xf & 0x10000 | (ulong)bVar31;
  lVar51 = -((ulong)(uint)(iVar38 >> 1) ^ 0x76a7f1dc);
  bVar30 = (byte)(CONCAT11(cVar24 << bVar20 % 9 |
                           (byte)(CONCAT11((uVar16 & 0x100) != 0,cVar24) >> 9 - bVar20 % 9),bVar20)
                 >> 1);
  uVar35 = 0x1f;
  uVar14 = (uint)uVar29;
  if (uVar14 != 0) {
    while (uVar14 >> uVar35 == 0) {
      uVar35 = uVar35 - 1;
    }
  }
  uVar13 = (((short)(char)((char)uVar49 * (char)((ushort)((short)uVar13 >> 0x1f) >> 1) *
                          ((byte)(uVar46 >> bVar20) | (byte)(uVar46 << 0x20 - bVar20))) & 0xff00U |
            (ushort)bVar31) << (bVar30 & 0x1f)) * (short)uVar35;
  uVar22 = uVar49 & 0xffff0000 | (uint)((uVar16 & 1) != 0) << 0x1f |
           (uint)(ushort)(uVar13 & 0xff | (ushort)(byte)((char)(uVar13 >> 8) + 0x74) << 8);
  auVar2 = SEXT816((long)(ulong)uVar22) * SEXT816((long)(uVar15 | uVar17 << 0x32));
  uVar46 = (uint)uVar15;
  bVar30 = bVar30 - 1;
  uVar49 = uVar46 << 0x16 | uVar46 >> 10 & 0xffffff00;
  uVar35 = uVar49 | uVar35 & 0xff;
  uVar17 = (ulong)(uVar22 * uVar46 >> 1 | 0x80000000);
  uVar13 = ((short)CONCAT71(SUB167(auVar2 >> 0x48,0),SUB161(auVar2 >> 0x40,0) >> 1) + 0x78d3) * 8 |
           6;
  uVar15 = CONCAT62(0x24f,uVar13);
  auVar2 = SEXT816((long)uVar17) * SEXT816((long)(ulong)uVar35);
  uVar17 = uVar17 * (ulong)uVar35 - 0x620a4052;
  uVar39 = (int)((uint)lVar51 & 0xffff0000 | (uint)(ushort)~(ushort)lVar51) >> 1;
  bVar31 = (byte)uVar17;
  bVar20 = bVar30 ^ (bVar31 == bVar30) * (bVar30 ^ SUB161(auVar2 >> 0x40,0));
  uVar17 = uVar17 & 0xffffffffffffff00 |
           (ulong)(byte)(bVar31 ^ (bVar31 == bVar30) * (bVar31 & bVar20));
  uVar53 = uVar14 + 0xc25c7100 + SUB164(auVar2 >> 0x40,0) * 4;
  lVar51 = SUB168(SEXT816((long)uVar15) * SEXT416(0x5ac95dc1) >> 0x40,0);
  bVar20 = bVar20 & 0x3f;
  uVar17 = uVar17 << bVar20 | (ulong)(CONCAT18(lVar51 != 0 && lVar51 != -1,uVar17) >> 0x41 - bVar20)
  ;
  uVar29 = uVar29 | 0xffffffffad90dd32;
  bVar20 = ~(byte)uVar17;
  uVar46 = (uint)uVar17;
  uVar15 = (ulong)SUB167(auVar2 >> 0x48,0) << 8 ^ uVar15;
  bVar30 = (byte)uVar39;
  uVar22 = SEXT14((char)bVar30);
  uVar17 = (ulong)(uVar53 & 0xffffff00 | (uint)(byte)((byte)uVar53 >> (bVar30 & 0x1f)));
  uVar16 = uVar17 & 0xffffffffcbad863b | 0xd990;
  uVar53 = (uint)CONCAT62(0x24f,uVar13 + 1);
  iVar43 = uVar53 - uVar22;
  uVar28 = iVar43 - 1;
  if (uVar28 == 0 || (SBORROW4(uVar53,uVar22) != SBORROW4(iVar43,1)) != (int)uVar28 < 0) {
    uVar16 = uVar17 & 0xffffffffcbad0000 | uVar29 & 0xffff;
  }
  bVar31 = ((char)uVar16 - ~-(char)iVar38) - (uVar53 < uVar22 || iVar43 == 0);
  uVar53 = (uVar46 & 0xffffff00 | (uint)bVar20) - uVar36;
  uVar54 = (ulong)uVar39 + 0x2a7f678c;
  uVar17 = (ulong)(iVar9 + 0x2de642b8 + uVar14 * 4 >> 2 & 0x3fff) << 0x34 | 0xffffffffa0000 |
           (ulong)(ushort)((short)(uVar29 >> 0xc) << (bVar30 & 0x1f));
  if (uVar54 == 0 || SCARRY8((ulong)uVar39,0x2a7f678c) != false) {
    uVar17 = uVar16 & 0xffffffffffffff00 | (ulong)bVar31;
  }
  bVar31 = bVar31 * '\x02';
  uVar14 = iVar9 + -0x70 + (uint)uVar29 * 4 & 0xffff0000 |
           (uint)(ushort)(short)(char)((ulong)uVar22 >> 8);
  lVar51 = (long)(int)(uVar46 & 0xffff0000 |
                      (uint)(ushort)((ushort)bVar20 * (ushort)(byte)(uVar15 >> 8))) * -0x4c32203;
  cVar24 = (char)lVar51;
  iVar38 = (int)((ulong)lVar51 >> 0x20);
  uVar42 = ((ulong)uVar36 - 0x9a5668ee) - (ulong)(iVar38 != 0 && iVar38 != -1);
  uVar29 = (ulong)((uint)uVar29 >> (bVar30 & 0x1f) | (uVar35 | 0xbb) << 0x20 - (bVar30 & 0x1f)) ^
           1 << (uVar54 & 0x3f);
  uVar46 = (uint)uVar15 & 0xffff0000 | (uint)(ushort)((short)cVar24 >> 0xf);
  uVar39 = ~((uint)uVar42 & 0xffffff00 | (uint)(byte)((char)uVar42 << 1));
  uVar36 = (uint)(ushort)(short)cVar24 * 0x10000000;
  uVar35 = uVar53 & 0xffffff00 | (uint)bVar31;
  cVar10 = (char)(uVar17 >> 8);
  uVar15 = (ulong)(uVar36 ^ (uint)(uVar36 == uVar46) *
                            (uVar36 & (uVar46 ^ (uint)(uVar36 == uVar46) * (uVar46 ^ uVar14))) |
                  (uint)((int)uVar36 < (int)uVar46)) * (ulong)uVar14;
  uVar16 = (ulong)((uint)CONCAT11(cVar10,(char)((long)(ulong)uVar22 >> 0x1f)) | 0xb725be74);
  iVar38 = uVar39 + 0x8841570a + (int)(uVar15 >> 0x20) * 8;
  bVar20 = (char)uVar39 + (char)uVar17;
  uVar48 = 0xbebb3290;
  uVar40 = uVar29 << 1 | (ulong)((long)uVar29 < 0);
  if ((long)uVar29 < 0 == (long)uVar40 < 0) {
    uVar16 = (ulong)uVar35 | 1;
  }
  uVar37 = uVar17 & 0xffffffffffff0000 | (ulong)CONCAT11(cVar10 << 1,(char)uVar17) | 0x100;
  bVar25 = (byte)uVar16 & 0xf;
  uVar35 = uVar35 >> 3;
  uVar29 = (ulong)uVar35;
  bVar30 = (byte)uVar15;
  bVar31 = bVar20 ^ (bVar30 == bVar20) * (bVar20 ^ (bVar31 | 1));
  uVar15 = uVar15 & 0xffffff00 | (ulong)(byte)(bVar30 ^ (bVar30 == bVar20) * (bVar30 & bVar31));
  if ((short)((ushort)uVar28 & (ushort)uVar35) < 0) {
    uVar29 = 0;
  }
  uVar19 = uVar42 & 0xffffffff00000000 | (ulong)uVar39 & 0xffffffffffffff00 | (ulong)(byte)~bVar31;
  lVar18 = uVar15 * uVar37;
  uVar15 = SUB168(SEXT816((long)uVar15) * SEXT816((long)uVar37) >> 0x40,0) << 1;
  lVar51 = ((long)uVar40 >> 0x1c & 0x367a3c18U) << 1;
  uVar35 = ((uint)(uVar29 | 0x9922) & 0xffffff00 | (uint)(byte)((char)(uVar29 | 0x9922) - 1)) -
           0xf86e78;
  uVar6 = (uint7)(uVar37 >> 8);
  uVar29 = (ulong)(uVar6 >> 1) << 8;
  uVar14 = (uint)lVar18 & 0xffff0000 |
           (uint)(ushort)(CONCAT11((char)((ulong)lVar18 >> 8) + (char)(uVar37 >> 1),(char)lVar18) +
                          1U >> 10);
  uVar36 = uVar35 >> 1 |
           (uint)(ushort)((ushort)((short)cVar24 + (short)uVar17) >> bVar25 |
                         (short)iVar38 << 0x10 - bVar25) << 0x1f;
  sVar27 = 0xf;
  if ((ushort)uVar29 != 0) {
    while ((ushort)((ushort)uVar29 >> sVar27) == 0) {
      sVar27 = sVar27 + -1;
    }
  }
  if (uVar19 == uVar29) {
    uVar48 = (ulong)uVar36 & 0xffff;
  }
  uVar13 = sVar27 << 1 | (ushort)(uVar19 < uVar29);
  uVar6 = uVar6 >> 10;
  uVar46 = (uVar53 & 0xffffff00) + 0x8dfb3400 | (uint)(0x47 < (byte)((ulong)uVar6 >> 8));
  cVar24 = (char)uVar15;
  bVar20 = ((long)uVar29 < (long)uVar19) + cVar24;
  if (SCARRY1((long)uVar29 < (long)uVar19,cVar24) == SCARRY1(bVar20,'\0')) {
    uVar19 = uVar15 & 0xffff | uVar42 & 0xffffffff00000000 | (ulong)uVar39 & 0xffffffffffff0000;
  }
  uVar36 = (uVar36 & (uint)uVar6) >> 1;
  uVar17 = ((long)(int)uVar14 & 0xffffffffU) *
           (ulong)(iVar38 + 0x55a001b8U & 0xffffff00 | (uint)bVar20);
  uVar15 = uVar17 & 0xffffffff;
  uVar40 = uVar15 | (ulong)(uint)((int)uVar14 >> 0x1f) << 0x20;
  uVar29 = (ulong)(ushort)((short)uVar15 >> 0xf);
  uVar42 = (ulong)(uVar14 + 0xce) ^ 1 << ((ulong)uVar13 & 0x3f);
  uVar12 = (short)((uint)((ushort)uVar36 & 0xff00) >> 8) << 0xc;
  uVar37 = uVar42 ^ (ulong)(uVar40 == uVar42) *
                    (uVar42 ^ (((ulong)(uint3)(uVar49 >> 8) & 0xffffffffffff00) << 8 | (ulong)uVar13
                              ));
  uVar40 = uVar40 ^ (ulong)(uVar40 == uVar42) * (uVar40 & uVar37);
  bVar20 = (byte)uVar15 & 0x1f;
  uVar14 = uVar46 >> bVar20 | uVar46 << 0x20 - bVar20;
  iVar38 = 0;
  if ((uint)uVar19 != 0) {
    while (((uint)uVar19 >> iVar38 & 1) == 0) {
      iVar38 = iVar38 + 1;
    }
  }
  uVar49 = ((uint)lVar51 & 0xffff0000 |
           (uint)(ushort)((ushort)lVar51 & ~(1 << ((ushort)uVar35 & 0xf)))) + 2;
  uVar13 = (ushort)uVar17 & 0xff00 | (ushort)(byte)((byte)uVar15 << 1);
  bVar20 = (byte)uVar40;
  uVar17 = ((uVar17 >> 0x28 & 0xffff00) << 8 | uVar29) ^ 1 << ((uVar48 & 0x1f) << 1 | 1);
  bVar30 = (byte)uVar49;
  uVar35 = (uint)uVar37 & 0xffffff00 | (uint)(byte)((byte)uVar37 + bVar30);
  if ((long)uVar19 < 0 == CARRY1((byte)uVar37,bVar30)) {
    uVar12 = (ushort)uVar14;
  }
  uVar15 = (ulong)uVar36 & 0xffffffffffff0000 | (ulong)(byte)~(byte)uVar6 << 0x3f | (ulong)uVar12;
  bVar59 = CONCAT11((byte)(uVar40 >> 8) | (byte)(uVar29 >> 8),bVar20) == uVar13;
  uVar13 = uVar13 ^ (ushort)bVar59 * (uVar13 ^ uVar12);
  bVar30 = (byte)uVar17;
  uVar29 = (long)(ulong)uVar49 >> ((byte)uVar13 & 0x3f);
  uVar49 = (uint)uVar17 & 0xffffff00 |
           (uint)(byte)(bVar30 ^ ((byte)(bVar20 ^ bVar59 * (bVar20 & (byte)uVar13)) == bVar30) *
                                 (bVar30 ^ (byte)(uVar17 >> 8))) | 0x1fa66d16;
  uVar36 = uVar49 ^ (uint)(1 << ((ulong)uVar49 & 0x3f));
  if ((uVar49 >> ((ulong)uVar49 & 0x3f) & 1) != 0) {
    uVar36 = uVar36 & 0xffff0000 | (uint)uVar15 & 0xffff;
  }
  uVar46 = (uint)(uVar19 >> 1);
  uVar17 = (ulong)(uVar46 | 0xc0000000);
  uVar40 = (ulong)(uVar36 & 0x3fffffff) << 0x20 |
           CONCAT62((int6)(uVar40 >> 0x10),0x6ffd) & 0xffffffff;
  iVar38 = (int)(short)(uVar40 / uVar17) *
           (int)(short)((ushort)((short)((uVar28 & 0xffffff00 | uVar28 >> 1 & 0x7f) +
                                         (int)(char)(uVar54 | 0x6d3e) + uVar28 +
                                         (uint)((uVar54 | 0x6d3e) != 0) >> 8) << 8) >> 3);
  uVar12 = (ushort)((uint)iVar38 >> 0x10);
  uVar36 = (uVar14 >> 6) + 0xa0da76a3;
  cVar24 = (char)((ulong)uVar12 >> 8);
  bVar20 = (byte)uVar36;
  uVar41 = (short)((int)(char)bVar20 * 0x2636e7af) - uVar13;
  uVar14 = (int)(char)bVar20 * 0x2636e7af & 0xffff0000U | (uint)uVar41;
  uVar49 = SEXT24((short)iVar38);
  bVar59 = (uVar49 & 0x400) != 0;
  if ((long)uVar19 < 0 != ((uVar49 & 0x8000) != 0)) {
    uVar15 = (ulong)uVar14;
  }
  uVar42 = (ulong)(uVar46 | 0xc0000000);
  uVar54 = (CONCAT44((uint)(uVar40 % uVar17) & 0xffff0000 | (uint)uVar12,uVar49) &
           0x3fffffffffffffff) % uVar42;
  uVar49 = ((uint)uVar29 | 0x20844f41) & ~(1 << ((uint)uVar15 & 0x1f));
  uVar42 = uVar42 & 0xff;
  uVar12 = uVar13 & 0xff | (ushort)(byte)((char)((ulong)uVar13 >> 8) - 0x16) << 8;
  uVar22 = (uint)((long)(char)bVar20 + -0xdd914f45);
  uVar40 = uVar29 & 0xffffffff00000000 | (ulong)uVar49 & 0xffffffffffff0000 |
           (ulong)(ushort)((short)uVar49 + 1);
  uVar57 = CONCAT71(0x2cde28cef43007,(char)uVar41 + -0x29);
  cVar10 = (char)(uVar54 >> 8);
  bVar30 = (byte)(uVar13 & 0xff);
  bVar31 = bVar30 & 0x3f;
  uVar29 = (ulong)(ushort)(short)(char)uVar42 & ~(1 << (uVar15 & 0x3f));
  bVar25 = (byte)((long)(char)bVar20 + -0xdd914f45);
  uVar46 = uVar36 & 0xffffff00 | (uint)(byte)(bVar20 + bVar25);
  sVar27 = (short)uVar57 + -0x6c33;
  uVar17 = (ulong)CARRY1(bVar20,bVar25);
  uVar48 = uVar15 + 0x6349c484 + uVar17;
  uVar49 = (uint)(0xffffffff9cb63b7b < uVar15 || CARRY8(uVar15 + 0x6349c484,uVar17));
  uVar36 = uVar35 + 0x3444935a;
  Var7 = CONCAT18(uVar35 < 0xcbbb6ca6 || uVar36 < uVar49,
                  uVar54 & 0xffffffffffff0000 |
                  (ulong)CONCAT11(cVar10 << 1 | cVar10 < '\0',(char)uVar54));
  auVar5 = ZEXT916(Var7 >> 5);
  auVar2 = ZEXT916(Var7) << 0x3c | auVar5;
  bVar30 = bVar30 & 0x3f;
  uVar17 = (ulong)uVar46 << bVar30 | (ulong)(uVar46 >> 0x40 - bVar30);
  uVar13 = uVar12 << 1 | (ushort)uVar15 >> 0xf;
  uVar35 = (uint)uVar17;
  if ((short)uVar12 < 0 == (short)uVar13 < 0) {
    uVar22 = uVar22 & 0xffff0000 | uVar35 & 0xffff;
  }
  uVar13 = uVar13 << ((byte)uVar13 & 0x1f);
  uVar46 = (uVar14 >> bVar31 | uVar14 << 0x40 - bVar31) + 0xe99368e;
  uVar14 = (int)(short)cVar24 * 0x282e;
  uVar37 = (ulong)(uVar14 & 0xffff | (uint)(ushort)(cVar24 >> 7) << 0x10);
  sVar3 = (short)(uVar14 >> 0x10);
  bVar30 = (byte)uVar13;
  bVar20 = (bVar30 & 0x1f) % 0x11;
  bVar25 = SUB161(auVar5 >> 8,0) | (byte)((ulong)uVar13 >> 8);
  bVar31 = (byte)uVar29 ^ bVar25;
  uVar55 = uVar15 ^ 0x95;
  uVar54 = uVar48 + uVar40;
  uVar47 = uVar54 + 1;
  uVar12 = (ushort)(CARRY8(uVar48,uVar40) || 0xfffffffffffffffe < uVar54);
  sVar34 = (short)((long)(ulong)(uVar36 - uVar49) >> 1);
  sVar34 = sVar34 + -0x139;
  bVar58 = SCARRY2(sVar34,-0x139) != SCARRY2(sVar34,uVar12);
  sVar34 = sVar34 + uVar12;
  uVar14 = uVar46;
  if (bVar58 != sVar34 < 0) {
    uVar14 = uVar22;
  }
  if (sVar34 != 0) {
    uVar55 = uVar15 & 0xffffffffffff0000 | uVar47 & 0xffff;
  }
  uVar49 = ~(uint)CONCAT71(CONCAT61(SUB166(auVar2 >> 0x10,0),bVar25),bVar58 != sVar34 < 0);
  uVar15 = ~(uVar19 >> 1 ^ uVar42);
  if ((uVar14 | 0x6994aa86) == 0) {
    uVar15 = uVar17;
  }
  uVar35 = uVar35 ^ (uVar35 >> 0xc & 1) << 0xc;
  iVar38 = (int)(short)uVar35 * -0x2479;
  sVar34 = (short)((uint)iVar38 >> 0x10);
  uVar14 = (int)uVar40 + -0x474ad9fb + (uint)(sVar34 != 0 && sVar34 != -1);
  bVar30 = bVar30 ^ ((byte)(bVar31 << 1) == bVar30) * (bVar30 ^ (byte)(uVar37 >> 8));
  uVar54 = (ulong)(uVar46 - (int)uVar47);
  uVar17 = (ulong)(ushort)(((short)uVar47 -
                           (sVar27 << bVar20 |
                           (ushort)(CONCAT12(sVar3 != 0 && sVar3 != -1,sVar27) >> 0x11 - bVar20))) -
                          (ushort)(uVar55 != 0));
  uVar15 = uVar15 & 0xffffffffffffff00 | uVar15 >> 1 & 0x7f;
  bVar20 = bVar30 >> 4;
  bVar30 = bVar30 << 4;
  uVar12 = (short)iVar38 + (short)uVar15 + 1;
  if (uVar12 == 0) {
    uVar54 = uVar47 & 0xffff0000 | uVar17;
  }
  uVar36 = (int)uVar15 + 0x1067b174;
  bVar25 = bVar20 | bVar30 & 0x3f;
  uVar15 = (ulong)((int)-uVar55 + 0x7e + (uVar35 & 0xffff0000 | (uint)uVar12)) << bVar25 |
           (ulong)(uVar36 >> 0x40 - bVar25);
  lVar51 = ((uVar37 ^ 0xffffffff8f4a1d26) - 0x98e2e0e) + (ulong)(0xc3 < (byte)sVar34);
  uVar35 = (uint)uVar15 + 0x39;
  uVar33 = (ushort)-uVar55;
  bVar25 = (char)((ulong)lVar51 >> 8) + (bVar20 | bVar30) + ((uVar35 & 1) != 0);
  uVar41 = CONCAT11(bVar25,(char)lVar51);
  uVar56 = uVar41 ^ 3;
  sVar27 = (short)CONCAT71((uint7)(uint3)((uint3)((int)uVar57 + -0x757cc266 +
                                                  ((uint)uVar29 & 0xffffff00 | (uint)bVar31) >> 8) ^
                                         (uint3)((uint)(1 << (uVar14 & 0x1f)) >> 8)),0x93);
  uVar12 = (ushort)(byte)((byte)sVar34 + 0x3c >> 7);
  if (0 < sVar27) {
    uVar12 = -sVar27;
  }
  lVar18 = (uVar54 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar54 << 1)) <<
           (bVar20 | bVar30 & 0x3f);
  uVar32 = (ushort)uVar14;
  uVar39 = (uint)lVar51 & 0xffff0000 | (uint)uVar41 & 0xffffff00 |
           (uint)(byte)((char)lVar51 + '\x14' +
                       (0x813a < uVar32 || 0xfffe < (ushort)(uVar32 + 0x7ec5)));
  uVar41 = (ushort)(byte)lVar18;
  uVar54 = (uVar47 & 0xffffffffffff0000 | uVar17) - (ulong)uVar36;
  uVar46 = (uint)uVar15 >> 1;
  uVar22 = (uint)uVar12 << 0x1f | uVar46;
  uVar52 = (ushort)uVar15 << 1 | (ushort)uVar15 >> 0xf;
  uVar15 = uVar15 & 0xffffffffffff0000;
  uVar44 = (uint)uVar15 | (uint)uVar52;
  uVar28 = (uint)uVar41;
  bVar30 = (bVar20 | bVar30) + 0x18;
  uVar29 = CONCAT44(SUB164(auVar2 >> 0x20,0),uVar49 ^ (uVar49 >> 0x18 & 1) << 0x18) >>
           (bVar30 & 0x3f);
  sVar27 = (short)uVar29;
  uVar53 = uVar39 - uVar44;
  uVar17 = (ulong)(uVar39 < uVar44) << 0x20 | (long)(char)uVar49 & 0xffffffffU;
  uVar49 = (uint)(uVar17 >> (bVar30 & 0x1f)) | (uint)(uVar17 << 0x21 - (bVar30 & 0x1f));
  uVar54 = uVar54 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar54 >> 1);
  uVar17 = (ulong)(CONCAT31((uint3)(uVar36 >> 9),(char)(uVar36 >> 1) << 4) & 0xffff |
                  (uVar36 >> 0x11) << 0x10) | 0x740f;
  uVar36 = uVar28 ^ (uint)(uVar49 == uVar28) *
                    (uVar28 ^ ((uint)uVar29 & 0xffff0000 |
                              (uint)(ushort)(sVar27 << 1 | (ushort)(sVar27 < 0))));
  uVar49 = uVar49 ^ (uint)(uVar49 == uVar28) * (uVar49 & uVar36);
  if (sVar27 < 0) {
    uVar22 = (uint)uVar12 << 0x1f | uVar46 & 0xffff0000 |
             (uint)uVar56 & 0xff00 | (uint)(byte)~(byte)uVar56;
  }
  uVar40 = lVar18 - 0x448d7232;
  uVar36 = uVar36 - ((uint)uVar13 & 0xffffff00 | (uint)bVar30);
  sVar27 = (short)uVar53;
  uVar13 = sVar27 << 1 | (ushort)(sVar27 < 0);
  uVar53 = uVar53 & 0xffff0000;
  uVar42 = uVar15 | (ulong)uVar52 & 0xffffffffffffff00 | (ulong)(byte)-(char)uVar52;
  sVar27 = (short)((long)(ulong)(uVar49 & 0xffff0000 |
                                (uint)(ushort)((ushort)uVar49 & (ushort)uVar17)) >> (bVar30 & 0x3f))
  ;
  uVar56 = (ushort)(bVar25 >> 2) | (short)uVar54 << 6;
  uVar12 = (ushort)(CONCAT12((char)((ulong)(uVar53 | (uint)uVar13) >> 8) < '\0',uVar41) >> 0xd) |
           uVar41 << 4;
  uVar17 = uVar17 & 0xffffffffffffff00 |
           (ulong)(byte)(((((byte)(uVar17 >> 1) & 0x7f) - bVar30) + -1) * '\x02');
  uVar49 = (uVar14 & 0xffff0000 | (uint)(ushort)(uVar32 + 0x7ec6)) + 0xebe89d75 & 0xffff0000 |
           (uint)uVar13;
  bVar58 = (uVar40 & 1) != 0;
  uVar40 = (uVar40 >> 1 | (ulong)bVar58 << 0x3f) << (bVar30 & 0x3f) |
           uVar17 >> 0x40 - (bVar30 & 0x3f);
  uVar28 = (uint)uVar17;
  uVar46 = (uVar14 * -0x80000000 | (uint)(ushort)(sVar27 << 1 | 1)) >> 10;
  uVar22 = (uVar22 ^ (uVar14 * -0x80000000 | (uint)uVar56) ^ 1 << (uVar28 & 0x1f)) - 1;
  uVar14 = CONCAT22(sVar27 >> 0xf,uVar56) + 0xc2 + uVar49 * 2;
  bVar30 = (byte)uVar14;
  bVar31 = (byte)uVar13;
  auVar2 = ZEXT816((ulong)uVar36 | 0xc000000000000000);
  auVar5 = ZEXT816(uVar29 & 0x3fffffffffff0000 | (ulong)(ushort)((short)uVar14 >> 0xf)) << 0x40 |
           ZEXT416(uVar14 & 0xffffff00 |
                   (uint)(byte)(bVar30 ^ (bVar30 == bVar31) *
                                         (bVar30 & (bVar31 ^ (bVar30 == bVar31) *
                                                             (bVar31 ^ (char)(uVar14 >> 8) >> 7)))))
  ;
  auVar1 = auVar5 / auVar2;
  bVar30 = SUB161(auVar1 >> 8,0);
  uVar17 = (((ulong)((uint7)uVar16 & 0xff000000 | (uint7)(((uVar16 & 0xff0000) << 0x18) >> 8) |
                     (uint7)(((uVar16 & 0xff00) << 0x28) >> 8) |
                    (uint7)(((uVar16 & 0xf) << 0x38) >> 8)) << 8 |
            (ulong)CONCAT11((char)bVar30 < 'c',0x7c)) - (ulong)(uVar35 & 0xffff0000 | (uint)uVar12))
           - (ulong)(bVar30 < 99);
  sVar27 = 0xf;
  uVar13 = (ushort)uVar46;
  if (uVar13 != 0) {
    while (uVar13 >> sVar27 == 0) {
      sVar27 = sVar27 + -1;
    }
  }
  lVar51 = CONCAT62(SUB166(auVar5 % auVar2 >> 0x10,0),sVar27);
  uVar16 = lVar51 + 0xb3 +
           (ulong)(((uint)uVar54 ^ uVar28) & 0xffff0000 |
                   (uint)(ushort)(((ushort)(byte)((byte)((uVar33 >> bVar20) >> 8) |
                                                 (byte)((uVar33 << 0x10 - bVar20) >> 8)) << 8) >> 1
                                 | (ushort)bVar58 << 0xf) & 0xffffff00 | (uint)bVar59) * 8;
  bVar30 = (byte)uVar17 & 0x1f;
  uVar13 = (ushort)uVar16 & 0xff00 | (ushort)(byte)(((byte)uVar16 & (byte)uVar40) - (byte)uVar40);
  uVar49 = uVar49 - (int)uVar40;
  bVar20 = (byte)uVar17 & 0xf;
  uVar41 = uVar13 << bVar20 | uVar13 >> 0x10 - bVar20;
  uVar12 = uVar12 << 1 | (ushort)uVar40 >> 0xf;
  uVar48 = (ulong)(uVar35 & 0xffff0000 | (uint)uVar12);
  uVar54 = (ulong)((int)lVar51 + 0xa1);
  uVar29 = uVar17 & 0xffffffffffffff0f;
  sVar21 = (sbyte)uVar29;
  uVar13 = 0xf;
  uVar33 = (ushort)uVar42;
  if (uVar33 != 0) {
    while (uVar33 >> uVar13 == 0) {
      uVar13 = uVar13 - 1;
    }
  }
  uVar35 = (uVar22 & 0xffff0000 | (uint)(ushort)((ushort)uVar22 >> 1 | SUB162(auVar1,0) << 0xf)) >>
           4;
  uVar14 = uVar49 & 0xffffff00 | (uint)(byte)((byte)uVar49 >> sVar21);
  uVar47 = uVar15 | (ulong)uVar13 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar13 << sVar21);
  uVar37 = (long)(int)uVar35 * -0x793a617;
  uVar19 = uVar37 & 0xffffffff;
  iVar38 = (int)(uVar37 >> 0x20);
  uVar16 = uVar16 & 0xffffffffffff0000 | (ulong)uVar41 & 0xffffffffffffff00 |
           (ulong)(byte)((char)uVar41 << 3 |
                        (byte)((uVar41 & 0xff |
                               (ushort)(CARRY8(uVar29,uVar54) ||
                                       CARRY8(uVar29 + uVar54,(ulong)(iVar38 != 0 && iVar38 != -1)))
                               << 8) >> 6));
  uVar29 = ((ulong)uVar36 & 0xffffffffffff0000 | 0xc000000000000000 |
           (ulong)(ushort)((ushort)uVar36 >> 10 | (short)uVar35 << 6)) + uVar19 + 1;
  lVar51 = 0x3f;
  iVar38 = 0x3f;
  if (uVar29 != 0) {
    while (iVar38 = (int)lVar51, uVar29 >> lVar51 == 0) {
      lVar51 = lVar51 + -1;
    }
  }
  uVar35 = uVar14 + iVar38 + 1;
  lVar18 = (uVar40 & 0xffffffffffff0000 |
           (ulong)(ushort)((ushort)uVar40 >> 1 | (ushort)((uVar40 & 1) != 0) << 0xf)) + 0x4fce3932;
  cVar24 = (char)((ulong)uVar35 >> 8);
  uVar49 = (int)uVar19 + 0x22243bf1 + (uint)uVar47 * 2;
  uVar36 = (uint)((ulong)lVar18 >> 0x18) & 0xffff0000 |
           (uint)(ushort)((ushort)((ulong)lVar18 >> 0x18) | 0x100);
  uVar54 = (ulong)(uVar53 | (ushort)(((((ushort)((uVar46 | uVar28 << 0x16) >> bVar30) |
                                       (ushort)((int)uVar42 << 0x20 - bVar30)) << sVar21 |
                                      uVar12 >> 0x10 - sVar21) & 0x7f) << 1)) & 0xffffffffc198f6f9 |
           0x80000000000000;
  uVar40 = (ulong)(uVar14 | 0x37240aac);
  uVar14 = (uVar49 & 0xffff0000 | (uint)(ushort)((short)uVar49 - 0x772)) << 1 | 1;
  lVar51 = uVar47 + uVar54;
  uVar33 = 0xed25;
  if (!CARRY8(uVar47,uVar54)) {
    uVar33 = (ushort)lVar51;
  }
  cVar10 = (char)(((ulong)uVar13 & 0xffffffffffffff00) >> 8);
  uVar54 = uVar48 + uVar40;
  uVar49 = (uint)uVar47;
  if (CARRY8(uVar48,uVar40) || uVar54 == 0) {
    uVar49 = uVar14;
  }
  uVar40 = (long)(int)(uVar35 & 0xffff0000 | (uint)CONCAT11(cVar24,(char)uVar35) & 0xffffff00 |
                      (uint)(byte)((char)uVar35 - (char)((ulong)(ushort)((short)cVar24 >> 7) >> 8)))
           * (long)(int)uVar49;
  uVar42 = uVar48 & 0xffffffffffffff00 | (ulong)(byte)((byte)uVar12 - 0x26);
  if ((byte)uVar12 < 0x26) {
    uVar54 = uVar54 & 0xffffffffffff0000 | (ulong)(ushort)(short)cVar10;
  }
  uVar49 = ((uint)uVar17 & 0xffff430e) << 1;
  lVar4 = (uVar40 & 0xffffffff) << 1;
  uVar13 = (ushort)lVar4 | 1;
  uVar35 = (uint)uVar13 * (uint)uVar13;
  uVar17 = lVar51 * 2;
  cVar24 = (char)((ulong)(ushort)uVar35 >> 8);
  uVar46 = (int)CONCAT71((uint7)(uVar29 >> 10),(char)(uVar29 >> 2) + -0x5d) + 0xdb0ed5e6U &
           0xffff0000 | (uint)uVar33;
  if (cVar24 == '\0') {
    uVar46 = uVar36;
  }
  uVar29 = (ulong)(byte)-cVar24 << 8;
  if (bVar59) {
    uVar29 = uVar54;
  }
  uVar37 = (ulong)uVar49 - 0x3287d61d;
  uVar22 = (((uint)lVar4 & 0xffff0000 | uVar35 & 0xffff) - uVar36) - 1;
  uVar12 = (short)uVar42 + 1;
  uVar54 = uVar29 * 3 + 0x7b & 0xffffffff;
  uVar13 = (ushort)CONCAT31((undefined3)(cVar10 >> 7),(cVar10 - (char)uVar49) + -1) ^ (ushort)uVar17
  ;
  uVar49 = CONCAT22((short)(uVar15 >> 0x10) >> 7,uVar13);
  uVar48 = (ulong)uVar49;
  uVar15 = 0;
  if (uVar17 != 0) {
    while ((uVar17 >> uVar15 & 1) == 0) {
      uVar15 = uVar15 + 1;
    }
  }
  uVar47 = ~(ulong)uVar14;
  uVar53 = (int)(short)uVar22 * (int)(short)uVar29;
  uVar33 = (ushort)(uVar53 >> 0x10);
  uVar19 = (ulong)(uVar22 & 0xffff0000 | uVar53 & 0xff00 |
                  (uint)(byte)((byte)(CONCAT11(uVar33 != 0 && uVar33 != 0xffff,(char)uVar53) >> 2) |
                              (char)uVar53 << 7));
  uVar55 = uVar17 & 0xffffffffffff0000 | uVar47 & 0xffff;
  uVar15 = ~uVar15;
  iVar38 = 0;
  uVar22 = (uint)uVar55;
  if (uVar22 != 0) {
    while ((uVar22 >> iVar38 & 1) == 0) {
      iVar38 = iVar38 + 1;
    }
  }
  uVar23 = (uVar29 & 0xffffffffffffff00 |
           (ulong)(byte)((char)uVar29 - (char)((ulong)lVar18 >> 0x18))) * -0x598b8bb6;
  bVar20 = (byte)uVar23 >> ((byte)uVar23 & 0x1f);
  cVar24 = (char)(uVar23 >> 8);
  uVar29 = (ulong)(((uint)(uVar40 >> 0x21) & 0xbfff0000 | uVar35 >> 0x10 & 0x7fff8000) << 1 |
                  (uint)uVar33);
  if (CARRY2(uVar12,uVar13)) {
    uVar29 = uVar37;
  }
  cVar10 = (char)(uVar29 >> 8);
  uVar29 = uVar29 & 0xffffffffffff0000 | (ulong)CONCAT11(cVar10 << 1 | cVar10 < '\0',(char)uVar29);
  uVar19 = uVar19 ^ (ulong)(uVar19 == uVar48) *
                    (uVar19 & (uVar48 ^ (ulong)(uVar19 == uVar48) *
                                        (ulong)(uVar49 ^ uVar36 + 0x5e091144)));
  uVar40 = uVar29 * -0x3613c825;
  lVar51 = SUB168(SEXT816((long)uVar29) * SEXT416(-0x3613c825) >> 0x40,0);
  bVar30 = (bVar20 & 0x1f) % 9;
  uVar36 = iVar38 * 0x1df3f92f;
  uVar29 = uVar23 & 0xffff0000 |
           (ulong)CONCAT11((byte)(CONCAT11(lVar51 != 0 && lVar51 != -1,cVar24) >> bVar30) |
                           cVar24 << 9 - bVar30,bVar20);
  uVar49 = (uint)(uVar29 >> (bVar20 & 0x1f)) | (uint)(uVar29 << 0x21 - (bVar20 & 0x1f));
  uVar33 = (short)((long)((ulong)uVar14 & 0xff) >> 1) << ((byte)uVar49 & 0x1f);
  uVar55 = uVar55 | uVar49;
  bVar20 = (byte)uVar49 & 0xf;
  uVar56 = (ushort)uVar55;
  uVar48 = uVar55 & 0xffffffffffff0000 | (ulong)(ushort)(uVar56 >> bVar20 | uVar56 << 0x10 - bVar20)
  ;
  uVar29 = (uVar37 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar37 << 9 | (ushort)uVar54 >> 7))
           - uVar54 >> 1;
  uVar37 = uVar40 & 0xffffffffffff0000 |
           (ulong)CONCAT11((char)uVar19 + (char)(uVar40 >> 8),(char)uVar40);
  lVar51 = (uVar47 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar47 + (ushort)uVar17)) -
           0x17309c9f;
  uVar17 = uVar48 << 0x1c;
  uVar40 = (ulong)(CONCAT18((uVar36 & 1) != 0,uVar48) >> 0x25);
  uVar48 = uVar17 | uVar40;
  uVar14 = ((uint)uVar16 & 0xffff0000 |
           (uint)(ushort)((ushort)uVar16 >> 1 | (ushort)((uVar41 & 0x40) != 0) << 0xf)) + 0x1ac7015e
           >> 6 | (uint)uVar48 << 0x1a;
  uVar35 = (uint)(uVar54 - 0x27404902);
  if (uVar54 < 0x27404902 && uVar54 - 0x27404902 != 0) {
    uVar35 = (uint)uVar48;
  }
  uVar8 = (uint3)(uVar36 >> 9);
  uVar22 = ((uint)uVar19 & 0xffffff00 | (uint)uVar29 & 0xff) - 1;
  uVar41 = (ushort)((uVar46 & 0xffff2816) << 1) | (ushort)((int)(uVar46 & 0xffff2816) < 0);
  bVar20 = (byte)(int7)((long)uVar37 >> 0xb);
  iVar38 = ((uint)uVar42 & 0x7fff0000 | (uint)(ushort)(uVar12 + uVar13) | uVar49 << 0x1f) +
           (int)CONCAT71((int7)(int3)((ulong)uVar33 >> 8),((char)uVar33 - (char)uVar36) * '\x04');
  uVar12 = (ushort)lVar51;
  bVar58 = (short)(CONCAT11(bVar20 >> 1 | bVar20 << 7,(char)((long)uVar37 >> 3)) & uVar12) < 0;
  uVar49 = CONCAT31(uVar8,bVar58);
  uVar13 = (ushort)uVar22;
  uVar16 = uVar29 & 0xffffffffffffff00;
  if (bVar59) {
    uVar16 = (ulong)uVar49;
  }
  auVar2 = ZEXT416(uVar22 & 0xffff0000 |
                   (uint)(ushort)(uVar13 ^ (ushort)(uVar13 == uVar41) *
                                           (uVar13 & (uVar41 ^ (ushort)(uVar13 == uVar41) *
                                                               (uVar41 ^ uVar12))))) *
           ZEXT116((byte)iVar38);
  bVar20 = (byte)(uVar14 >> 1) >> 1;
  uVar42 = (ulong)(CONCAT31((uint3)(uVar14 >> 9),bVar20) | 0xc0245080);
  uVar29 = (ulong)(SUB164(auVar2 >> 0x40,0) & 0x3fffffff) << 0x20 | SUB168(auVar2,0) & 0xffffffff;
  uVar54 = uVar29 / uVar42;
  bVar30 = (byte)uVar54;
  uVar29 = uVar29 % uVar42;
  bVar31 = (byte)(uVar29 >> 8);
  if (!SBORROW1(bVar30,bVar31)) {
    uVar48 = uVar17 | uVar40 & 0xffffffffffff0000;
  }
  uVar17 = uVar48 & 0xffffffff;
  uVar35 = (uVar35 ^ 0xb621bcf4) & 0xffffff00 | (uVar35 ^ 0xb621bcf4) >> 1 & 0x7f;
  uVar13 = (ushort)uVar15;
  uVar14 = (uint)lVar51 & 0xffffff00 | (uint)!bVar59;
  if (uVar13 == 0) {
    uVar14 = uVar35;
  }
  uVar12 = (ushort)iVar38 & 0xff;
  if (-1 < (short)uVar13) {
    uVar12 = (ushort)uVar49;
  }
  uVar40 = 0xffffffffd248802c;
  if ((bVar20 | 0x80) == 0x3b) {
    uVar40 = uVar15 & 0xffff | 0xffffffffd2480000;
  }
  uVar42 = (ulong)uVar35 - 0xd7cfa5dd;
  bVar20 = (byte)uVar42;
  uVar37 = (ulong)(uVar14 & 0x24ae2f51);
  sVar27 = (uVar12 & (ushort)(uVar14 & 0x24ae2f51)) - uVar13;
  uVar35 = ((uint)((uVar16 & 0xffffffffffffff00) >> 7) & 0x1ffffff) + 0x5e92946c;
  auVar2 = ZEXT816(uVar54 & 0xffffff00 | (ulong)SUB164(auVar2 >> 0x20,0) << 0x20 |
                   (ulong)(byte)(bVar30 ^ (bVar30 == bVar31) *
                                          (bVar30 & (bVar31 ^ (bVar30 == bVar31) *
                                                              (bVar31 ^ (byte)uVar29))))) *
           ZEXT816(uVar37);
  bVar30 = (char)uVar35 - 1;
  if (bVar30 == 0 || (char)uVar35 < '\x01') {
    uVar37 = (ulong)(uVar14 & 0x24ae0000 | (uint)(ushort)uVar40);
  }
  bVar25 = (bVar58 << 1 | 1U) + 0x9e;
  uVar14 = (uint)uVar8 << 9;
  uVar12 = SUB162(auVar2,0) + 0x93ec;
  lVar51 = CONCAT71((uint7)(uint3)((uint3)((uint)iVar38 >> 8) & 0xffff00 |
                                   (uint3)(byte)((byte)(((short)(char)uVar17 << 1 |
                                                        (ushort)(uVar16 & 0xffffffffffffff00) >> 0xf
                                                        ) - 1 >> 9) |
                                                (byte)(((ushort)(SUB168(auVar2 >> 0x40,0) != 0) <<
                                                       0xf) >> 8)) | 0x7a8900),0x19);
  bVar31 = (byte)uVar12;
  uVar37 = -uVar37;
  uVar12 = uVar12 & 0xff00 |
           (ushort)(byte)(bVar31 ^ (bVar31 == bVar20) *
                                   (bVar31 & (bVar20 ^ (bVar31 == bVar20) * bVar20)));
  if (!bVar59) {
    uVar12 = (ushort)uVar14 | (ushort)bVar25;
  }
  uVar29 = (uVar48 & 0xffff0000 | (ulong)(ushort)((short)uVar17 << 1 | (ushort)((short)uVar17 < 0)))
           * 2 + lVar51 + 1 | 0x2b;
  uVar22 = (uint)lVar51;
  uVar46 = uVar22 << 0xd;
  uVar53 = (uint)(ushort)(sVar27 * 2 | (ushort)(sVar27 < 0)) << 0x19 |
           (uint)(ushort)(SUB162(auVar2 >> 0x40,0) << 7);
  uVar49 = (uint)(ushort)((short)uVar12 >> 0x17 | 0xc000);
  uVar36 = CONCAT22((short)(char)((short)uVar12 >> 0x17),(short)uVar12 >> 0x17) & 0x3fffffff |
           0xc000;
  uVar12 = (ushort)(uVar36 % uVar49);
  bVar45 = (char)uVar37 >> 0x19;
  uVar41 = (ushort)(uVar37 & 0xffffffffffffff00) | (ushort)bVar45;
  uVar16 = (uVar42 & 0xffffffffffffff00 | (ulong)(byte)(bVar20 - bVar30)) << 9;
  bVar26 = (byte)((ulong)uVar12 >> 8);
  bVar11 = (byte)(uVar36 / uVar49);
  uVar14 = uVar14 | (byte)(bVar25 ^ (bVar11 == bVar25) * (bVar25 ^ 0x9e));
  uVar36 = (uint)uVar40 + 0x4d;
  uVar49 = (uint)uVar15 & 0xffff0000 | (uint)(ushort)((uVar13 | 0x37) ^ 0x19);
  if ((char)uVar36 == -0x26) {
    uVar49 = (uint)uVar40;
  }
  uVar56 = (ushort)uVar49 ^ ((ushort)bVar26 | 0x9100);
  sVar27 = (short)((uVar22 >> 0x13 | uVar46) >> 1) << 1;
  uVar33 = ((ushort)uVar36 ^ 0xda) << 1;
  uVar13 = 0;
  if (uVar41 != 0) {
    while ((uVar41 >> uVar13 & 1) == 0) {
      uVar13 = uVar13 + 1;
    }
  }
  uVar15 = uVar40 & 0xffffffffffff0000 | (ulong)uVar13;
  bVar45 = bVar45 << 3 | bVar45 >> 5;
  uVar28 = (ushort)(uVar12 & 0xff | (ushort)(byte)(bVar26 + 9) << 8) + uVar14;
  uVar54 = SEXT48((int)uVar28);
  uVar22 = (uVar53 << 1 | (uint)(bVar11 < bVar25)) + 0x54952d6;
  if (uVar22 != 0) {
    uVar54 = (ulong)(uVar36 & 0xffff0000 | (uint)uVar33);
  }
  uVar12 = uVar56 ^ (ushort)(uVar33 == uVar56) * (uVar56 ^ (ushort)uVar29);
  uVar36 = (uint)uVar15;
  uVar40 = (ulong)(uVar49 & 0xffff0000 | (uint)uVar12 | uVar36);
  uVar13 = ((short)uVar54 - (short)uVar22) - 1;
  if (uVar13 != 0) {
    uVar15 = uVar40;
  }
  return CONCAT88(*(undefined8 *)
                   (((ulong)&stack0xffffffffffffff90 & 0xffffffff00000000 |
                     (ulong)(iVar9 - 0x6fU) & 0xffffffffffff0000 |
                    (ulong)(ushort)((short)(iVar9 - 0x6fU) + 1)) + 0x58),
                  (ulong)(uint)(int)(short)(uVar33 ^ (ushort)(uVar33 == uVar56) * (uVar33 & uVar12))
                  + (uVar16 & 0xffffffffffff0000 |
                    (ulong)(byte)((((byte)(uVar16 >> 8) | (byte)(uVar42 >> 0x3f)) + 0x76) -
                                 (bVar45 != 0)) << 8) + (ulong)uVar28 + uVar15 +
                  (CONCAT62((uint6)(ushort)(uVar46 >> 0x11) |
                            (uint6)(((ulong)((int)uVar53 < 0) << 0x3f) >> 0x10),sVar27) &
                   0xffffffffffffff00 | (ulong)(byte)((char)sVar27 + bVar26)) +
                  (ulong)~((uVar35 & 0xffff0000 |
                           (uint)(ushort)((((ushort)uVar35 & 0xff00 | (ushort)bVar30) + 0xeae9) -
                                         (ushort)(bVar31 < bVar20))) >> 1) * 2 +
                  (uVar54 & 0xffffffffffff0000 | (ulong)uVar13) +
                  (uVar37 & 0xffffffffffffff00 ^ (uVar37 >> 0x1a & 1) << 0x1a | (ulong)(byte)-bVar45
                  ) + uVar40 + uVar29 + (ulong)(uVar14 + uVar36 + 1) + (ulong)uVar22 +
                  (uVar17 << 0x2c) + 0x7ffffdebfa1ff0bd);
}



// WARNING: Removing unreachable block (ram,0x004091ab)
// WARNING: Removing unreachable block (ram,0x0040930d)
// WARNING: Removing unreachable block (ram,0x00409157)
// WARNING: Removing unreachable block (ram,0x00409c22)

undefined  [16] log_size_10_var_008(void)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  ulong uVar3;
  byte bVar4;
  char cVar5;
  ushort uVar6;
  short sVar7;
  short sVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  int7 iVar14;
  ulong uVar13;
  sbyte sVar15;
  ushort uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  ushort uVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  byte bVar33;
  byte bVar34;
  short sVar35;
  uint uVar36;
  long lVar37;
  byte bVar38;
  byte bVar39;
  ushort uVar40;
  ulong uVar41;
  long lVar42;
  ushort uVar43;
  byte bVar44;
  uint uVar45;
  ulong uVar46;
  uint uVar47;
  ulong uVar48;
  ushort uVar49;
  short sVar50;
  ushort uVar51;
  int iVar52;
  ulong uVar53;
  uint7 uVar54;
  byte bVar55;
  uint uVar56;
  uint uVar57;
  int iVar58;
  uint uVar59;
  bool bVar60;
  bool in_PF;
  bool bVar61;
  
  lVar37 = 0;
  while ((0x3b9fbdfffbfe741fU >> lVar37 & 1) == 0) {
    lVar37 = lVar37 + 1;
  }
  uVar25 = ((ulong)((unkuint9)0xdd59705812800000 >> 0x2a) & 0xffffffffffff0000 | 0x2c09538a4c801ac2)
           - 0x2280aba3;
  uVar23 = (ulong)(byte)((char)lVar37 - 7) | 0x9b2b8f45bdca5b00;
  uVar46 = uVar25 >> 0x1e | 0x200;
  iVar58 = 0x3a060f4e - (uint)((uVar25 >> 0x27 & 1) != 0);
  uVar21 = (ushort)iVar58;
  if (-1 < iVar58) {
    uVar21 = (ushort)uVar46;
  }
  lVar37 = SUB168(SEXT816((long)uVar46) * SEXT416(-0x7986ff85) >> 0x40,0);
  bVar4 = (char)uVar21 * '\x02';
  uVar46 = (ulong)(~((uint)uVar23 & 0xffff0000 | (uint)(ushort)((ushort)uVar23 ^ 0x10)) << 1) <<
           (bVar4 & 0x3f) | (ulong)(0x6b4bc5da >> 0x40 - (bVar4 & 0x3f));
  uVar23 = (long)(ulong)((((uint)uVar21 | 0xd9da0000) - 1) * 2) >> (bVar4 & 0x3f);
  uVar17 = (uint)CONCAT11((char)(uVar21 >> 8) + 'i',bVar4) + 0xf192269e;
  uVar25 = 0x3f;
  while (0x6b4b06b6U >> uVar25 == 0) {
    uVar25 = uVar25 - 1;
  }
  iVar58 = 0;
  while ((0xb4e4a53eU >> iVar58 & 1) == 0) {
    iVar58 = iVar58 + 1;
  }
  cVar5 = (char)(uVar46 >> 8);
  uVar21 = CONCAT11((char)(uVar23 >> 8) * '\x02' + '\x01',(char)uVar23 - cVar5) &
           ~(1 << ((ushort)uVar46 & 0xf));
  uVar27 = 0x1f;
  if (((uint)!in_PF | 0xb4e4a500) != 0) {
    while (((uint)!in_PF | 0xb4e4a500) >> uVar27 == 0) {
      uVar27 = uVar27 - 1;
    }
  }
  uVar56 = CONCAT22(((ushort)(-(((uint)(byte)((lVar37 != 0 && lVar37 != -1) + 0xa4) | 0x802a0900) +
                               0x81685b68) >> 0x10) & 0xa9c0) >> 1,1) ^ 0x2ae89688;
  uVar49 = uVar21 & 0xff | (ushort)(byte)(cVar5 + (char)((ulong)uVar17 >> 8)) << 8;
  auVar1 = ZEXT816(uVar23 & 0x3fffffffffff0000 | (ulong)uVar21 & 0xffffffffffffff00 |
                   (ulong)((uVar27 & 0x9033c3b4) == 0)) << 0x40 | ZEXT816(0x20b21ef0);
  uVar23 = SUB168(auVar1 / ZEXT816((ulong)uVar56 | 0xc000000000000000),0) *
           (SUB168(auVar1 % ZEXT816((ulong)uVar56 | 0xc000000000000000),0) & 0xffffffff);
  iVar58 = 0x1f;
  uVar40 = 0;
  if ((uint)uVar25 != 0) {
    while (uVar40 = (ushort)iVar58, (uint)uVar25 >> iVar58 == 0) {
      iVar58 = iVar58 + -1;
    }
  }
  uVar24 = uVar23 >> 0x20 ^ 0x40000000;
  sVar50 = (short)(uVar23 >> 0x20);
  bVar4 = (char)uVar17 * '\x03' + 0x36U & 0x1f;
  uVar27 = 0U >> bVar4 | 0 << 0x20 - bVar4;
  uVar29 = uVar23 & 0xffffff00 | (ulong)(byte)((char)uVar23 << 1);
  uVar56 = uVar56 & 0xffff0000 | (uint)(ushort)((ushort)uVar56 >> 5 | (ushort)uVar56 << 0xb);
  uVar17 = uVar27 & 0xffffff00;
  uVar23 = 0x3f;
  if (uVar25 != 0) {
    while (uVar25 >> uVar23 == 0) {
      uVar23 = uVar23 - 1;
    }
  }
  uVar6 = (short)uVar25 + 0x9688;
  bVar4 = (byte)(uVar25 >> 0x2b) & 0x1f;
  uVar10 = ((uint)uVar29 & 0xffff0000 | (uint)(ushort)((short)uVar29 << 1 | uVar40 >> 0xf)) >> bVar4
           | (int)uVar23 << 0x20 - bVar4;
  sVar35 = 0xf;
  if ((ushort)uVar23 != 0) {
    while ((ushort)((ushort)uVar23 >> sVar35) == 0) {
      sVar35 = sVar35 + -1;
    }
  }
  uVar25 = (uVar23 & 0xffffff00 | (ulong)(byte)((char)uVar23 - 0x18)) + (ulong)uVar10;
  uVar18 = 0;
  uVar22 = (uint)uVar25;
  if (uVar22 != 0) {
    while ((uVar22 >> uVar18 & 1) == 0) {
      uVar18 = uVar18 + 1;
    }
  }
  uVar23 = (ulong)(uVar18 >> 8) & 0xff;
  uVar22 = (uint)(ushort)(uVar49 * -0x7791);
  bVar33 = (byte)uVar18;
  uVar29 = (ulong)uVar6 << 0x33 | (ulong)(byte)((byte)(uVar6 >> 0xd) >> (bVar33 & 0x1f));
  uVar53 = -0xdde2d34d5176978 >> (bVar33 & 0x3f);
  uVar22 = (uVar22 & 0x7fff8000) << 1 | uVar22 & 0x7fff;
  bVar4 = (byte)uVar23;
  uVar28 = uVar10 & 0xffff0000 | (uint)(byte)(bVar4 + (char)((ulong)uVar49 >> 8));
  uVar57 = uVar56 ^ (uint)(uVar28 == uVar56) * (uVar56 ^ uVar22);
  uVar11 = uVar28 ^ (uint)(uVar28 == uVar56) * (uVar28 & uVar57);
  lVar37 = 0x3f;
  if (uVar29 != 0) {
    while (uVar29 >> lVar37 == 0) {
      lVar37 = lVar37 + -1;
    }
  }
  uVar47 = ((uint)!in_PF | 0xfbfe7400) * -0x32fe23a6;
  uVar49 = (short)uVar53 + 0x789d;
  uVar53 = uVar53 & 0xffffffffffff0000 | (ulong)uVar49;
  uVar36 = (int)uVar24 << 1;
  uVar40 = (ushort)uVar36;
  bVar55 = (char)uVar57 + (char)uVar47;
  uVar6 = uVar6 & 0xff00 | (ushort)(byte)('h' << (bVar33 & 0x1f));
  uVar18 = (uint)(((ulong)uVar18 | 0x100000000) >> (bVar33 & 0x1f)) |
           (uint)(((ulong)uVar18 | 0x100000000) << 0x21 - (bVar33 & 0x1f));
  uVar56 = (((uint)uVar46 & 0xffff0000 | (uint)(ushort)(uVar21 & 0xff | (ushort)bVar4 << 8)) +
           0xd441188a) - (uint)(uVar28 < uVar56);
  if (((ulong)uVar17 & 0x80594700 | (ulong)(-1 < (char)bVar55)) == 0) {
    uVar56 = (uint)uVar53;
  }
  uVar21 = (short)uVar11 * -0x3e7d;
  uVar27 = uVar27 & 0xffff0000 | (uint)(ushort)(short)(char)uVar21;
  uVar43 = uVar40 ^ (ushort)(uVar21 == uVar40) *
                    (uVar40 ^ ((ushort)uVar57 & 0xff00 | (ushort)bVar55 |
                              (ushort)uVar17 | (ushort)(-1 < (char)bVar55)));
  uVar21 = uVar21 ^ (ushort)(uVar21 == uVar40) * (uVar21 & uVar43);
  uVar46 = (ulong)uVar57 & 0xffffffffffff0000 | 0xc000000000000000;
  if (!in_PF) {
    uVar46 = (ulong)uVar27;
  }
  uVar41 = (ulong)(ushort)(uVar6 << 1 | uVar21 >> 0xf) & 0x3f;
  uVar25 = (uVar29 | 1 << uVar41) +
           (uVar25 & 0xffffffff00000000 |
           (ulong)(uint)((int)(uVar10 & 0xffff0000 | (uint)uVar23) >> 0x1f)) +
           (ulong)((uVar29 >> uVar41 & 1) != 0);
  auVar1 = ZEXT816((ulong)uVar11 & 0xffffffffffff0000 | (ulong)uVar21) * ZEXT816(uVar53);
  uVar17 = (uVar56 & 0xffffff00 |
           (uint)(byte)((byte)uVar56 | (byte)((ulong)(ushort)(short)(char)uVar49 >> 8))) +
           0x14961840;
  uVar21 = 0xf;
  if ((int)uVar10 < 0) {
    while ((ushort)((ushort)((int)uVar10 >> 0x1f) >> uVar21) == 0) {
      uVar21 = uVar21 - 1;
    }
  }
  uVar10 = (uVar27 & 0x7fff8000) << 1;
  lVar37 = (uVar24 & 0xffff0000 |
           (ulong)(ushort)((ushort)(CONCAT12((short)uVar6 < 0,sVar50) >> 0x10) | sVar50 << 1)) <<
           ((byte)uVar18 & 0x3f);
  bVar4 = (byte)uVar17;
  bVar33 = (char)lVar37 - bVar4;
  uVar6 = (ushort)SUB161(auVar1,0) * (ushort)bVar33;
  uVar56 = (uVar10 | (uint)uVar21) >> 1;
  uVar18 = uVar18 & ~(1 << ((uint)uVar25 & 0x1f));
  bVar55 = bVar4 >> 1 | bVar4 << 7;
  uVar27 = uVar18 + ((uint)lVar37 & 0xffffff00 | (uint)bVar33) + 0xe7355b23;
  bVar33 = SUB161(auVar1 >> 0x48,0);
  uVar24 = (uVar46 & 0xffffffffffff0000) << 1;
  lVar37 = (long)(int)(uVar36 & 0xffff0000 | (uint)uVar43) * 2;
  bVar4 = ((char)uVar6 << 1 | (char)uVar6 < '\0') - ((byte)uVar43 | (byte)uVar21);
  sVar50 = (uVar49 >> 1) << 0xd;
  uVar23 = lVar37 + (ulong)(uVar47 >> 1);
  uVar16 = ((ushort)((uVar22 >> 1) >> ((byte)uVar18 & 0x1f)) | 0x86fc) * -0x147e |
           1 << ((ushort)uVar25 & 0xf);
  uVar46 = (ulong)(uVar17 & 0xffff0000 |
                  (uint)CONCAT11((byte)((ulong)(uVar17 & 0xffffff00) >> 8) | bVar55,bVar55));
  bVar61 = (uVar6 & 0x400) != 0;
  uVar29 = uVar23 & 0xffffffffffff0000 | (ulong)(ushort)((ushort)uVar23 >> ((byte)uVar16 & 0x1f));
  uVar23 = (ulong)uVar6 & 0x3f00 | (ulong)bVar4 | 0xc0;
  uVar40 = (ushort)(byte)uVar23;
  uVar43 = (ushort)uVar23;
  uVar23 = uVar46 + uVar25;
  if (!SCARRY8(uVar46,uVar25)) {
    sVar50 = (short)lVar37;
  }
  uVar18 = 0xffffffff;
  auVar1 = (CONCAT88(CONCAT62(SUB166(auVar1 >> 0x50,0),
                              CONCAT11(bVar33 >> 5 | bVar33 << 4 | (byte)(uVar6 >> 8),
                                       SUB161(auVar1 >> 0x40,0) * '\x02')),
                     CONCAT62(SUB166(auVar1 >> 0x10,0),uVar43 / uVar40 & 0xff | uVar43 % uVar40 << 8
                             )) & (undefined  [16])0xffffffffffffffff) /
           ZEXT816(uVar24 | (byte)(uVar49 >> 1) | 0xc000000000000000);
  uVar17 = (uVar56 | 0x80000000) >> 0x18 | (uVar10 & 0x1fe0000) >> 9;
  uVar53 = (ulong)((uVar27 & 0xffff0000 | (uint)CONCAT11((char)((ulong)uVar27 >> 8),(char)uVar27)) *
                   2 + (uint)((uVar49 & 1) != 0) & 0xffff0000 | (uint)uVar16) - 0x647b34a0;
  bVar33 = (byte)uVar53;
  uVar46 = (ulong)CONCAT11((byte)(uVar53 >> 8) >> (bVar33 & 0x1f),bVar33);
  if (-1 < (short)(sVar50 + -0x4492)) {
    uVar29 = uVar53 & 0xffff0000 | uVar46;
  }
  if (sVar50 != 0x4492) {
    uVar18 = (uint)CONCAT62(0x3fffffffffff,(short)uVar17);
  }
  uVar27 = CONCAT31((int3)SUB161(auVar1 >> 8,0),SUB161(auVar1,0) << 1) - (int)lVar37;
  uVar48 = uVar23 & 0xffffffffffff0000 | (ulong)CONCAT11((char)(uVar23 >> 8) >> 9,(char)uVar23);
  uVar17 = (uVar17 | (uVar56 & 0xff00) << 8 | (((uint)uVar21 & 0xfe) >> 1) << 0x18) + 0xc7e695d;
  uVar41 = 0;
  if (uVar17 != 0) {
    while ((uVar17 >> uVar41 & 1) == 0) {
      uVar41 = uVar41 + 1;
    }
  }
  uVar12 = (ulong)(uVar27 & 0xffff0000 | (uint)(ushort)((short)uVar27 + 0xa12d));
  uVar46 = uVar46 & 0xffffffffffff000f;
  sVar15 = (sbyte)uVar46;
  uVar40 = ((ushort)uVar18 & 0xff00 | (ushort)(byte)((byte)uVar18 >> (bVar33 & 0x1f))) << sVar15 |
           (ushort)uVar41 >> 0x10 - sVar15;
  bVar33 = (byte)uVar17;
  uVar49 = ((ushort)(bVar33 >> sVar15) | (ushort)bVar33 << 0x10 - sVar15) >> sVar15 |
           (short)(char)(uVar12 >> 8) << 0x10 - sVar15;
  uVar21 = (short)uVar46 << 1;
  uVar27 = uVar17 & 0xffffff00 | (uint)(bVar33 >> 1);
  bVar33 = (byte)uVar40;
  uVar56 = (uint)((uVar25 >> 8 & 0xffffffffffff00) << 8) | (uint)uVar40 & 0xffffff00 |
           (uint)(byte)(bVar33 << 1);
  bVar55 = (byte)uVar49;
  auVar1 = ZEXT816(uVar12) * ZEXT816(uVar48);
  uVar17 = 0;
  if (uVar27 != 0) {
    while ((uVar27 >> uVar17 & 1) == 0) {
      uVar17 = uVar17 + 1;
    }
  }
  bVar34 = (byte)uVar21;
  uVar25 = (ulong)(0xc423d3e4 < uVar56) << 0x20 | SUB168(auVar1,0);
  uVar11 = (uint)(uVar25 << bVar34) | (uint)(uVar25 >> 0x21 - bVar34);
  uVar25 = CONCAT62(SUB166(auVar1 >> 0x50,0),(short)uVar11 >> 0xf);
  uVar57 = (uint)(uVar25 >> bVar34) | (int)uVar25 << 0x21 - bVar34;
  uVar36 = (uint)(ushort)(((ushort)bVar4 << 0xd | (uVar6 & 0xff00 | (ushort)bVar4) >> 3) + 0x3193) +
           0x3c4e8eb7;
  uVar10 = uVar57 & 0xffffff00 | (uint)bVar34;
  uVar22 = (uint)(byte)(bVar33 << 2 | bVar33 >> 6);
  uVar18 = uVar18 & 0xffff0000 | (uint)uVar40 & 0xffffff00 | uVar22;
  bVar4 = (char)uVar23 - (char)((ulong)uVar11 >> 8);
  uVar48 = uVar48 & 0xffbfffffffffff00;
  uVar25 = uVar48 | bVar4;
  bVar4 = (bVar34 + (char)uVar57) - bVar4;
  uVar28 = (uint)(ushort)(uVar49 & 0xff00 | (ushort)(byte)(bVar55 << 3 | bVar55 >> 5));
  if (-1 < (char)((byte)uVar36 ^ 0xd3)) {
    uVar28 = uVar10;
  }
  uVar21 = uVar21 | (ushort)(byte)((char)((ulong)uVar10 >> 8) - (char)(uVar48 >> 8)) << 8;
  uVar10 = uVar57 & 0xffff0000 | (uint)uVar21;
  uVar49 = ((ushort)uVar27 & 0xffd7) + (ushort)bVar4 + 1;
  uVar40 = ((((ushort)uVar36 ^ 0xd3) & 0xfbff) - uVar21) - (ushort)(((ushort)uVar36 >> 10 & 1) != 0)
  ;
  if (uVar28 + 1 == 0) {
    uVar25 = (ulong)uVar17;
  }
  uVar45 = (uint)((uVar29 & 0xffffffff00000000 | (ulong)((uint)uVar29 & 0xfdffffff)) >> 1) >>
           (bVar4 & 0x1f);
  bVar33 = -(char)uVar49;
  uVar19 = (uint)uVar53 & 0xffff0000 | (uint)CONCAT11((char)uVar25,bVar4);
  uVar23 = CONCAT71((uint7)(uint3)(uVar11 >> 8) | (uint7)(uVar25 >> 8),
                    (ulong)(uVar28 + 1 & 0xffff0000 |
                           (uint)(ushort)((ushort)bVar4 * 0xfac + (short)uVar18)) ==
                    0xffffffffd58822a3);
  uVar28 = (uint)uVar23;
  uVar56 = uVar56 + 0x49ecb4d1;
  uVar47 = 0;
  if ((int)((int)register0x00000020 - 0x71U) < 0) {
    uVar47 = uVar28;
  }
  uVar28 = uVar28 + ((uVar17 >> 0x15 | 0x16d74000) << 0xe | 0x5b5);
  uVar23 = uVar23 & 0xffffffff;
  uVar17 = uVar19 + uVar45 + 1;
  uVar59 = (uint)uVar23;
  uVar11 = ((uint)(uVar41 >> bVar34) | uVar11 << 0x40 - bVar34) * 0x4299600c + uVar59 +
           (uint)(CARRY4(uVar19,uVar45) || 0xfffffffe < uVar19 + uVar45);
  uVar6 = ~(ushort)uVar17;
  lVar37 = ((ulong)(uVar17 & 0xffff0000 | (uint)uVar6) << ((byte)uVar6 & 0x3f)) - (ulong)uVar56;
  bVar34 = (byte)lVar37;
  uVar6 = (short)uVar28 << (bVar34 & 0x1f);
  bVar60 = (bVar33 & 1) != 0;
  bVar55 = (byte)uVar6;
  bVar4 = bVar55 + bVar34;
  cVar5 = bVar4 + bVar60;
  if ((!CARRY1(bVar55,bVar34) && !CARRY1(bVar4,bVar60)) && cVar5 != '\0') {
    uVar47 = uVar59;
  }
  uVar47 = uVar47 >> (bVar34 & 0x1f);
  uVar46 = (ulong)((uVar11 & 1) != 0) << 0x20 |
           (ulong)uVar27 & 0xffffffffffff0000 |
           (ulong)(ushort)((uVar49 & 0xff00 | (ushort)bVar33) >> 1 | (ushort)bVar60 << 0xf);
  lVar42 = uVar46 << 8;
  uVar29 = (ulong)(uVar11 >> 1) << 1 | (ulong)((uVar47 & 1) != 0);
  uVar53 = (ulong)((uVar18 << 1 | (uint)((int)uVar18 < 0)) - (int)lVar37) | 9;
  uVar17 = 0x1f;
  if (uVar56 != 0) {
    while (uVar56 >> uVar17 == 0) {
      uVar17 = uVar17 - 1;
    }
  }
  uVar41 = (ulong)(uVar17 & 0xffff0000 | (uint)(ushort)((short)uVar17 - 1)) * -0x621d3ed1;
  bVar44 = ((byte)uVar45 | 0x3c) & (byte)uVar53;
  uVar27 = uVar28 & 0xffff0000 | (uint)uVar6 & 0xffffff00 | 1 << ((uint)bVar44 & 0x1f);
  uVar56 = uVar10 * -0x789ddd05;
  uVar17 = uVar57 & 0xffff0000 | (uint)uVar21 & 0xffff00ff;
  uVar48 = (uVar22 + uVar19 + 1 | uVar53) & 0xff;
  iVar52 = ((uint)lVar42 & 0xffff0000 |
           (uint)(ushort)((short)((ushort)lVar42 | (ushort)(uVar46 >> 0x19)) >> 0xe)) + 0xc3840e2f;
  uVar46 = (((ulong)(uint3)((uint3)(uVar27 >> 9) & 0xff | (uint3)(ushort)(uVar27 >> 0x11) << 8) &
            0xffffffffffffd6) << 8) << ((long)((ulong)uVar10 << 0x1a) < -0x54446b14);
  bVar55 = (byte)uVar40;
  uVar21 = (ushort)uVar48;
  iVar58 = (uVar36 & 0xffff0000 | (uint)(ushort)(uVar40 ^ 1 << (uVar21 & 0xf))) - iVar52;
  uVar49 = (ushort)(short)(char)bVar55 >> (bVar55 & 0xf) |
           (short)(char)bVar55 << 0x10 - (bVar55 & 0xf);
  uVar27 = -iVar52;
  iVar52 = iVar58 >> 1;
  uVar21 = uVar21 << 1;
  bVar33 = (byte)uVar49;
  bVar38 = (char)uVar41 << (bVar33 & 0x1f);
  uVar41 = uVar41 & 0xffffffffffffff00;
  bVar39 = ~bVar38;
  uVar53 = (((uint)uVar24 |
            (uint)(ushort)((ushort)(byte)((cVar5 == -0x34) *
                                          (((byte)((int)uVar25 << (bVar34 & 0x1f)) |
                                           (byte)(uVar47 >> 0x20 - (bVar34 & 0x1f))) ^ 0xcc) ^ 0xcc)
                          + 0xb157)) - (int)uVar29) - 1 ^ uVar53;
  uVar10 = (uint)uVar53;
  bVar4 = (bVar33 & 0x1f) % 9;
  uVar21 = uVar21 & 0xff00 |
           (ushort)(byte)((char)uVar21 << bVar4 |
                         (byte)((uVar21 & 0xff | (ushort)CARRY4(uVar17,uVar10) << 8) >> 9 - bVar4));
  uVar51 = (ushort)uVar53;
  uVar16 = uVar51 * 0x7b75;
  bVar4 = bVar39 >> (bVar33 & 7) | bVar39 << 8 - (bVar33 & 7);
  uVar6 = uVar21 >> (bVar33 & 0x1f) | uVar21 << 0x20 - (bVar33 & 0x1f);
  uVar43 = (ushort)((uVar56 & 0xffffff00 | (uint)(byte)((byte)uVar56 >> 1 | 0x80)) -
                    ((uint)uVar41 | (uint)bVar38) >> 3) ^ 0xfc;
  uVar25 = (ulong)((uint)uVar46 | 0xc0000000);
  uVar46 = uVar46 & 0xffffffff | ((ulong)(uVar17 + uVar10) & 0x3fffffff) << 0x20 | 0xc0000000;
  uVar24 = uVar46 / uVar25;
  uVar40 = (ushort)uVar24;
  uVar46 = uVar46 % uVar25;
  uVar21 = uVar43 ^ (ushort)(uVar40 == uVar43) * (uVar43 ^ uVar6);
  uVar40 = uVar40 ^ (ushort)(uVar40 == uVar43) * (uVar40 & uVar21);
  uVar17 = (uint)uVar24 & 0xffff0000;
  uVar43 = (uVar51 & (ushort)uVar23) + (short)uVar46 + 1;
  if (uVar43 != 0) {
    uVar21 = uVar6;
  }
  uVar6 = (short)uVar27 + 0x22ea;
  uVar27 = uVar27 & 0xffff0000;
  uVar56 = uVar27 | uVar6;
  uVar18 = CONCAT22((undefined2)((char)bVar55 >> 7),uVar49);
  if (uVar6 == 0) {
    uVar18 = uVar56;
  }
  sVar15 = (sbyte)((ulong)uVar18 & 0xffffffffffffff0f);
  uVar57 = (uint)uVar46;
  uVar28 = uVar57 & 0xffff0000 | (uint)(ushort)((short)uVar40 >> 0xf);
  bVar55 = (byte)((ulong)(long)(int)(uVar17 | (uint)uVar40) >> 8);
  bVar34 = (char)((uint)uVar40 >> 8) >> 7;
  bVar33 = bVar55 + bVar34;
  uVar23 = CONCAT62((int6)(short)(uVar17 >> 0x10),uVar40 & 0xff | (ushort)(byte)(bVar33 + 1) << 8);
  uVar11 = (uint)(CARRY1(bVar55,bVar34) || 0xfe < bVar33);
  uVar47 = -uVar11;
  uVar40 = (ushort)(iVar58 >> 0x11);
  uVar22 = (uint)uVar40 << 0x10;
  uVar46 = (long)((ulong)uVar18 & 0xffffffffffffff0f) >> sVar15;
  uVar24 = ((uVar41 | bVar4) >> 1 | (ulong)((bVar4 & 1) != 0) << 0x3f) >> 1 |
           (ulong)((bVar4 & 2) != 0) << 0x3f;
  bVar4 = (byte)uVar46;
  uVar51 = (short)(uVar21 << sVar15 | uVar43 >> 0x10 - sVar15) >> (bVar4 & 0x1f);
  bVar4 = bVar4 & 0x3f;
  uVar25 = uVar23 - 1 >> 1;
  uVar21 = ((ushort)iVar52 | 0x316a) >> 1;
  uVar36 = (uVar10 & 0xffff0000 | (uint)uVar43) + 0x1088102b;
  bVar34 = (char)uVar21 + 1;
  uVar10 = uVar22 | (uint)(uVar21 | 0x8000) & 0xffffff00 | (uint)bVar34;
  bVar33 = (byte)uVar25;
  bVar55 = (byte)(uVar46 >> 0x17);
  bVar34 = bVar55 ^ (bVar33 == bVar55) * (bVar55 ^ bVar34);
  iVar14 = (int7)(int3)(uVar25 >> 8);
  uVar18 = ((uVar45 & 0xffff0000 |
            (uint)(ushort)((ushort)uVar45 & 0xff00 | (ushort)(byte)(bVar44 + (char)uVar48) |
                          (ushort)uVar29)) + iVar52 + 1 << bVar4 | (uint)(uVar23 >> 0x40 - bVar4))
           << 0x19 | uVar56 >> 7;
  uVar23 = (ulong)uVar18;
  uVar17 = uVar36 ^ (uVar36 >> 1 & 1) << 1;
  lVar37 = (ulong)(uint)((int)(uVar57 & 0xffff0000 | (uint)(ushort)(short)(char)uVar43) >> 7) + 1;
  bVar38 = (byte)(uVar16 << (bVar34 & 0xf)) | (byte)(uVar16 >> 0x10 - (bVar34 & 0xf));
  cVar5 = (char)lVar37;
  uVar49 = (ushort)uVar10;
  uVar17 = (uVar17 << (bVar34 & 0x3f) |
           (uint)(CONCAT44((int)uVar36 >> 0x1f,uVar17) >> 0x40 - (bVar34 & 0x3f))) + 0xe1c41046;
  uVar25 = (ulong)(uVar36 - uVar10) +
           (ulong)((uint)lVar37 & 0xffff0000 |
                   (uint)CONCAT11((char)((ulong)lVar37 >> 8) * '\x02' - cVar5,cVar5) |
                  (uint)(ushort)(uVar49 * -0x5527 >> 1) << 0x17);
  uVar21 = (short)CONCAT71(iVar14,bVar33 ^ (bVar33 == bVar55) * (bVar33 & bVar34)) << 1;
  bVar4 = (byte)uVar21 | 1;
  uVar56 = SEXT14((char)bVar38);
  bVar55 = (byte)((ulong)(uVar17 ^ (uVar17 >> 0xc & 1) << 0xc) >> 8);
  uVar17 = (uVar47 & 0xff00) << 8;
  bVar44 = (byte)(uVar47 >> 0x18);
  bVar39 = bVar44 ^ (bVar4 == bVar44) * (bVar44 ^ cVar5 + 0x7dU);
  bVar33 = bVar4 ^ (bVar4 == bVar44) * (bVar4 & bVar39);
  if ((char)bVar4 <= (char)bVar44) {
    uVar23 = (ulong)(ushort)(uVar18 >> 0x10) << 0x10;
    uVar56 = (uint)(ushort)((char)bVar38 >> 7) << 0x10;
  }
  uVar41 = (ulong)(uVar28 + 0x6de1eec + uVar10 >> 1 | 0x80000000) - 0x12533e4d;
  uVar10 = (uVar27 | uVar6 & ((ushort)(uVar24 << (bVar34 & 0x3f)) |
                             (ushort)(uVar24 >> 0x40 - (bVar34 & 0x3f)))) + 0x4268981d;
  uVar43 = (ushort)uVar56 >> 0xd | uVar51 << 3;
  uVar46 = (ulong)uVar56 & 0xffffffffffff0000;
  uVar28 = uVar28 >> (bVar55 & 0x1f);
  uVar48 = (ulong)((uVar47 & 0xff0000) >> 8 | uVar17 | uVar11 * -0x1000000 | (uint)bVar39) | 0xd94b;
  uVar6 = uVar49 & 0xfffe | (ushort)uVar25 >> 0xf;
  uVar27 = CONCAT22(uVar40,uVar6);
  cVar5 = (char)uVar6;
  uVar56 = (int)CONCAT62((undefined6)((char)bVar38 >> 7),
                         (short)(uVar21 & 0xff00 | (ushort)bVar33) >> 0xf) + 0x460cd8af;
  bVar4 = (byte)((ulong)uVar27 >> 8);
  uVar53 = (ulong)CONCAT11(cVar5 * -2 | bVar4 & 1,bVar55);
  uVar29 = uVar53 - 0x552542e3;
  uVar24 = (ulong)(uint6)(int6)(short)((uint7)iVar14 >> 8) << 0x10 | (ulong)(bVar33 | 0x61);
  if (SBORROW8(uVar53,0x552542e3)) {
    uVar24 = (ulong)uVar56;
  }
  uVar53 = (ulong)(uint3)((uint3)(uVar27 >> 8) & 0xffff00 | (uint3)(byte)((char)bVar4 >> 1)) << 8;
  uVar23 = uVar23 & 0xffffffffffff0000 |
           (ulong)(ushort)(((uVar49 >> 1) * -0x1914 - uVar43) - (ushort)('\0' < cVar5));
  if (bVar61) {
    uVar23 = (ulong)uVar10;
  }
  bVar4 = (byte)uVar23;
  if ((uVar10 & 0x93070c8e) == 0) {
    uVar29 = uVar41 & 0xffff0000;
  }
  lVar37 = (uVar24 & 0xffff0000 | (ulong)(ushort)((ushort)(byte)uVar24 * (ushort)(byte)uVar28)) *
           (uVar46 | uVar43);
  bVar33 = ((byte)uVar29 & 0x1f) % 9;
  uVar24 = CONCAT44((undefined4)((char)uVar41 >> 7),~(int)(char)uVar41);
  sVar50 = 0;
  if ((ushort)uVar23 != 0) {
    while (((ushort)uVar23 >> sVar50 & 1) == 0) {
      sVar50 = sVar50 + 1;
    }
  }
  uVar21 = 0xf;
  uVar40 = (ushort)(uVar29 >> 0x36);
  if (uVar40 != 0) {
    while (uVar40 >> uVar21 == 0) {
      uVar21 = uVar21 - 1;
    }
  }
  uVar40 = (ushort)((CONCAT22(CONCAT11((char)((ulong)lVar37 >> 0x28) + -1,
                                       (char)((ulong)lVar37 >> 0x20)),sVar50) & 0x3fffffff) /
                   (uint)(ushort)((ushort)((int)(uVar22 >> 7) >> 1) | 0xc000));
  uVar49 = uVar43 >> 1 | 0x8000;
  uVar20 = uVar46 | uVar49;
  bVar55 = (byte)uVar29 & 0xf;
  uVar30 = (ulong)((uVar28 << 1 ^ 0xfa38111a) & 0xffff0000 | (uint)(uVar21 >> 1)) &
           ~(1 << ((ulong)uVar40 & 0x3f));
  bVar34 = bVar55 - bVar4;
  uVar12 = uVar29 & 0xffffffffffffff00;
  bVar44 = (byte)(uVar21 >> 1) >> 1 | (bVar55 < bVar4) << 7;
  uVar21 = uVar40 + uVar51;
  iVar58 = CONCAT22((short)uVar40 >> 0xf,uVar21);
  uVar10 = iVar58 + 6 + ((uint)uVar12 | (uint)bVar34) * 4;
  uVar18 = ((((uint)uVar48 ^ uVar17 & 0x100000) & 0xffff0000 |
            (uint)(ushort)((short)(((ushort)uVar48 & 0x7f80) << 1 | (ushort)(uVar56 == 0)) >> 1)) *
            -0x400 | (uint)(uVar29 >> 0x36)) * -0x47efd33c;
  bVar39 = 1U >> (bVar34 & 7) | '\x01' << 8 - (bVar34 & 7);
  uVar17 = (uint)uVar41 & 0xffff0000;
  uVar48 = (ulong)((int)CONCAT62((int6)((short)uVar40 >> 0xf),
                                 uVar21 & 0xff |
                                 (ushort)(byte)((byte)((ulong)(long)iVar58 >> 8) ^
                                               (byte)((ulong)((uint)CONCAT11(-0x67 - (char)uVar21,
                                                                             0x9e) &
                                                             ~(1 << ((uint)uVar51 & 0x1f))) >> 8))
                                 << 8) * (uint)uVar20);
  uVar13 = uVar48 * uVar20;
  uVar56 = (uint)uVar46 | (uint)bVar44;
  uVar54 = (uint7)(uVar24 >> 9);
  bVar38 = (char)(uVar24 >> 1) + 0x8a;
  uVar21 = bVar44 + uVar49 + 0x9e2d;
  bVar60 = (bVar38 & 1) != 0;
  uVar46 = CONCAT71(uVar54,bVar38) >> 1;
  bVar38 = bVar34 * '\x02' + bVar60;
  uVar24 = (uVar13 & 0xffffffffffff0000 |
           (ulong)CONCAT11(((char)bVar38 < '\0') << 7 | (bVar38 == 0) << 6 |
                           (((bVar34 & 0xf) + (bVar34 & 0xf) + bVar60 & 0x10) != 0) << 4 |
                           bVar61 << 2 | 2U |
                           (CARRY1(bVar34,bVar34) || CARRY1(bVar34 * '\x02',bVar60)),(char)uVar13))
           & ~(1 << ((ulong)uVar21 & 0x3f));
  uVar31 = uVar12 | bVar38 | 0xc000;
  uVar29 = uVar24 & 0xffffffffffff0000;
  uVar27 = (uint)uVar29 |
           (CONCAT22(SUB162(SEXT816((long)uVar48) * SEXT816((long)uVar20) >> 0x40,0),(short)uVar24)
           & 0x3fffffff) / (uint)(ushort)uVar31 >> 1 & 0x7fff;
  iVar58 = uVar27 * uVar27;
  uVar27 = (uint)CONCAT62((int6)(((uVar25 & 0xffffffffffff0000 |
                                  (ulong)(ushort)(((ushort)uVar25 & 0xff00 |
                                                  (ushort)(byte)((byte)(CONCAT11(1,(char)uVar25) >>
                                                                       bVar33) |
                                                                (char)uVar25 << 9 - bVar33)) >>
                                                  bVar55 | (short)((uVar53 & 0xffffffffffff0000 |
                                                                   (ulong)(ushort)((ushort)uVar53 >>
                                                                                   1 | 0x8000)) >>
                                                                  10) << 0x10 - bVar55)) +
                                 0x3bcb551e) - uVar13 >> 0x10),0x750f);
  bVar33 = (byte)uVar51;
  if ((uVar17 | bVar39) != 0x5c7eee6) {
    uVar27 = (int)(char)bVar34;
    bVar33 = bVar4;
  }
  uVar6 = (ushort)bVar39;
  sVar50 = (short)((char)bVar34 >> 7);
  sVar35 = (short)(char)bVar34 + (short)uVar18 + 1;
  uVar22 = CONCAT22(sVar50,sVar35);
  uVar49 = 0xf;
  if (bVar44 != 0) {
    while (bVar44 >> uVar49 == 0) {
      uVar49 = uVar49 - 1;
    }
  }
  uVar31 = (uVar30 & 0xffffffffffff0000 |
           (ulong)(ushort)(((ushort)uVar30 & 0xff00 |
                           (ushort)(byte)((char)uVar30 << 5 |
                                         (byte)(CONCAT11(uVar31 < uVar23,(char)uVar30) >> 4))) << 1)
           ) ^ uVar31;
  uVar57 = (uint)(byte)((char)bVar33 >> (bVar38 & 0x1f)) & (int)(short)uVar6;
  bVar33 = (byte)uVar10;
  lVar37 = ((ulong)(((uint7)(uVar29 >> 8) & 0xffffffff000000 |
                     (uint7)(uint3)((uint)iVar58 >> 8) & 0xffffffffffff00 |
                    (uint7)(byte)((ushort)((short)iVar58 + -1) >> 8)) >> 1) & 0xffffff) * 0x100 *
           (ulong)uVar22;
  uVar11 = (uint)lVar37;
  uVar28 = (uint)(uVar11 == uVar57) * (uVar57 ^ uVar21);
  uVar36 = uVar57 ^ uVar28;
  if (uVar11 <= uVar57) {
    uVar56 = (uint)uVar20 & 0xffff0000 | (uint)(ushort)((ulong)lVar37 >> 0x20);
  }
  uVar25 = (ulong)uVar18 + (ulong)(uVar10 & 0xffffff00 | (uint)(byte)(bVar33 >> 1 | bVar33 << 7));
  uVar18 = (uVar27 & 0xffff0000 | (uint)(ushort)((short)uVar27 << 1 | (ushort)((short)uVar27 < 0)))
           ^ uVar56;
  uVar27 = (uVar36 & 0xffffff00 | (uint)(byte)((char)uVar36 + (byte)uVar25 + 1)) << 0x12;
  auVar1 = ZEXT416((uint)(int)(char)(uVar31 - 0x107d08b8)) * ZEXT816(uVar23);
  bVar33 = -bVar38 & 0x3f;
  uVar10 = SUB164(auVar1,0);
  uVar21 = ((ushort)(uVar12 | 0xc000) | (ushort)(byte)-bVar38) ^ uVar6;
  uVar17 = ~(uVar17 | uVar49);
  if (bVar61) {
    uVar21 = (ushort)(uVar28 >> 0xe);
  }
  uVar11 = (uint)CONCAT62((uint6)((uVar31 - 0x107d08b8 >> bVar33) >> 0x10) |
                          (uint6)(((ulong)(uint)(int)(short)uVar6 << 0x40 - bVar33) >> 0x10),
                          (short)(char)((uVar12 | 0xc000) >> 8));
  bVar60 = uVar10 == uVar11;
  uVar11 = uVar11 ^ (uint)bVar60 * (uVar11 ^ uVar56);
  uVar10 = uVar10 ^ (uint)bVar60 * (uVar10 & uVar11);
  bVar33 = (byte)uVar46;
  uVar56 = (uint)CONCAT62((uint6)(ushort)(uVar27 >> 0x10),0x5db9);
  uVar28 = (uint)uVar23 & 0xffffff00 | (uint)(byte)(bVar4 - 0x18);
  if (bVar60) {
    uVar28 = SUB164(auVar1 >> 0x40,0);
  }
  bVar4 = (char)uVar10 - 1;
  uVar23 = CONCAT44(SUB164(auVar1 >> 0x20,0),uVar10) & 0xffffffffffffff00 | (ulong)bVar4;
  bVar55 = (byte)(uVar21 >> 8);
  if ((char)(bVar4 & bVar39) < '\0') {
    uVar6 = (ushort)uVar11 & 0xff00 | (ushort)(byte)((char)uVar11 + bVar55);
  }
  auVar1 = CONCAT88((long)(short)uVar28,uVar23) & (undefined  [16])0xffffffffffffffff;
  auVar2 = auVar1 / ZEXT816(uVar46 | 0xc000000000000000);
  auVar1 = auVar1 % ZEXT816(uVar46 | 0xc000000000000000);
  uVar24 = (((ulong)uVar54 & 0xfffffffffffffe) << 8) >> 1;
  uVar29 = (ulong)(bVar33 & (byte)uVar25);
  uVar53 = uVar24 | 0xc000000000000000 | uVar29;
  uVar49 = (ushort)uVar53;
  if (!bVar61) {
    uVar56 = uVar27 | uVar49;
  }
  uVar6 = uVar6 + sVar35 >> 1;
  uVar41 = uVar41 & 0xffffffff00000000 | (ulong)uVar17 & 0xffffffffffff0000;
  uVar48 = (ulong)(ushort)uVar17;
  uVar12 = uVar41 | uVar48 | 0xc000;
  uVar17 = (uint)(ushort)uVar12;
  uVar27 = CONCAT22(CONCAT11(SUB161(auVar1 >> 8,0) + -10,SUB161(auVar1,0)),SUB162(auVar2,0)) &
           0x3fffffff;
  sVar7 = (short)(uVar27 / uVar17);
  uVar16 = (short)uVar25 + 0xb479;
  uVar43 = uVar21 & 0xff | (ushort)(bVar55 & (byte)(uVar27 % uVar17)) << 8;
  sVar35 = 0;
  if (uVar43 != 0) {
    while ((uVar43 >> sVar35 & 1) == 0) {
      sVar35 = sVar35 + 1;
    }
  }
  uVar51 = 0;
  if (uVar16 != 0) {
    while ((uVar16 >> uVar51 & 1) == 0) {
      uVar51 = uVar51 + 1;
    }
  }
  sVar35 = sVar7 + uVar43;
  sVar8 = sVar35 + 1;
  uVar13 = (long)(int)CONCAT62(SUB166(auVar2 >> 0x10,0),sVar8) *
           (long)(int)CONCAT62(0x3fffffffffff,uVar51);
  uVar9 = (short)(char)(uVar13 & 0xffffffff) * (short)(char)((uVar13 & 0xffffffff) >> 8);
  cVar5 = (char)(uVar9 >> 8);
  uVar17 = uVar28 & 0xffffff00 | (uint)(SCARRY2(sVar7,uVar43) == SCARRY2(sVar35,1));
  if (cVar5 != '\0' && cVar5 != -1) {
    uVar17 = (uVar18 & 0xffff0000 | (uint)(ushort)((short)uVar23 + 0x5a + (short)uVar18)) >> 1;
  }
  uVar27 = (uint)uVar13 & 0xffff0000 | (uint)uVar9;
  if (0 < (long)((ulong)(uVar56 + 0x4ef5c8b4 & 0xffff0000 |
                        (uint)(ushort)((short)(uVar56 + 0x4ef5c8b4) + 0xec11U >> 1)) ^
                0xffffffffabd842cf)) {
    uVar27 = (uint)uVar12;
  }
  uVar56 = uVar22 * 0x2ea76d51;
  uVar30 = (ulong)(uVar56 & 0xffffff00 | (uint)(byte)((char)uVar56 + 0x4e));
  iVar58 = (uVar17 ^ 0xd02d411) + 0x10de0e6d;
  uVar12 = CONCAT62(0x3fffffffffff,uVar51 ^ uVar49);
  uVar23 = uVar25 & 0xffffffffffff0000 | (ulong)uVar16;
  if ((uVar51 ^ uVar49) == 0) {
    uVar23 = uVar25 & 0xffffffffffff0000;
  }
  uVar29 = (ulong)((uVar27 << 0xd | (uint)(byte)(uVar13 >> 0x20)) - uVar22) * (uVar24 | uVar29);
  uVar29 = (ulong)((int)(uVar29 >> 0x20) != 0) << 0x20 | uVar29 & 0xffffffff;
  uVar10 = (uint)(uVar29 >> 0x10) | (uint)(uVar29 << 0x11) | 1 << ((uint)uVar12 & 0x1f);
  bVar61 = iVar58 < 0;
  uVar17 = iVar58 * 2;
  uVar18 = uVar17 | bVar61;
  uVar27 = CONCAT31((undefined3)((char)bVar33 >> 7),bVar33 << 1 | (char)bVar33 < '\0') |
           (uint)(ushort)((short)(uVar46 >> 8) >> 7) << 0x10;
  if (bVar61 != (int)uVar18 < 0) {
    uVar27 = (uint)uVar6 & 0xffffff00 | uVar22 << 0x1f | (uint)(byte)((char)uVar6 + 0x57);
  }
  bVar33 = (char)(uVar10 >> 8) >> 7;
  uVar18 = uVar18 | 2;
  uVar29 = (ulong)uVar18;
  bVar4 = (byte)uVar10 | 0x54;
  uVar46 = (ulong)(((uint)uVar31 & 0xffff0000 |
                   (uint)(ushort)((ushort)uVar31 & 0xfffe | (ushort)(uVar25 >> 0x10) >> 0xf | 8)) <<
                  ((byte)uVar21 & 0x1f)) ^ 0xe0;
  uVar28 = (uint)uVar53 & 0xffff0000 | (uint)(ushort)(uVar49 << 1 | (ushort)((short)uVar49 < 0));
  uVar21 = (ushort)bVar4 * (ushort)bVar4 - (ushort)uVar46;
  uVar6 = (ushort)uVar27;
  uVar49 = uVar6 ^ (ushort)(uVar21 == uVar6) * (uVar6 ^ (ushort)uVar18);
  uVar24 = uVar29 * -0x763e794b;
  lVar37 = SUB168(SEXT816((long)uVar29) * SEXT416(-0x763e794b) >> 0x40,0);
  uVar53 = uVar24 & 0xffffffffffffff00 | (ulong)bVar33;
  lVar42 = (uVar12 & 0xffffffffffffff00 | (ulong)('\0' < (char)(!bVar61 ^ bVar33))) + uVar53 +
           (ulong)(lVar37 != 0 && lVar37 != -1);
  uVar25 = (ulong)((uVar10 & 0xffff0000 |
                   (uint)(ushort)(uVar21 ^ (ushort)(uVar21 == uVar6) * (uVar21 & uVar49))) *
                  (uint)uVar46);
  lVar37 = SUB168(SEXT816((long)uVar25) * SEXT816((long)uVar30) >> 0x40,0);
  uVar25 = uVar25 * uVar30;
  bVar4 = !bVar61 ^ bVar33;
  if (lVar37 != 0 && lVar37 != -1) {
    bVar4 = bVar33;
  }
  uVar10 = uVar28 << (bVar4 & 0x1f) | uVar28 >> 0x20 - (bVar4 & 0x1f);
  uVar21 = (ushort)uVar10;
  uVar10 = uVar10 & 0xffff0000 | (uint)(ushort)(uVar21 ^ (uVar21 >> 6 & 1) << 6);
  uVar48 = uVar48 & 0xffffffffffffee7a | 0xc000;
  bVar61 = (uVar23 & uVar10) != 0;
  uVar21 = 0xf;
  if ((ushort)uVar48 != 0) {
    while ((ushort)((ushort)uVar48 >> uVar21) == 0) {
      uVar21 = uVar21 - 1;
    }
  }
  bVar33 = (char)lVar42 + 5;
  uVar6 = (ushort)lVar42 & 0xff00 | (ushort)bVar33;
  if (bVar33 != 0) {
    uVar48 = uVar46 & 0xffff;
  }
  uVar28 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | ((uint)uVar49 & 0xff00) << 8 |
           (uint)uVar49 << 0x18;
  uVar18 = (uint)(uVar21 | 0x8000) * 2 | 0xad897ca6;
  uVar27 = uVar28 << 7;
  uVar49 = (ushort)(uVar56 >> 0x1a) | (ushort)uVar27;
  uVar53 = (ulong)(ushort)((short)uVar53 << 7 |
                          (ushort)CONCAT71((int7)(int3)(uVar17 >> 8),bVar61) >> 9);
  uVar21 = 0;
  if (uVar49 != 0) {
    while ((uVar49 >> uVar21 & 1) == 0) {
      uVar21 = uVar21 + 1;
    }
  }
  uVar12 = (ulong)(CONCAT22(sVar50,(ushort)CONCAT31(CONCAT21(sVar50,(char)((ulong)uVar22 >> 8) -
                                                                    (-1 < sVar8)),(char)uVar24) >> 1
                           ) * 0x20000 + 0x762944b1) | 0xc0;
  uVar16 = (short)uVar49 >> 0x16;
  uVar11 = uVar27 & 0xffff0000 | (uint)uVar16;
  uVar23 = (long)(int)((uint)uVar25 & 0xffff0000 |
                      (uint)(byte)(((CONCAT11((char)(uVar25 >> 8) << 1 | (uVar23 >> 0x19 & 1) != 0,
                                              (char)uVar25) - uVar49) - 1 & 0x3fff) %
                                  (ushort)(byte)uVar12) << 8) * (long)(int)uVar11;
  iVar58 = (int)(uVar23 >> 0x20);
  uVar12 = (ulong)(iVar58 != 0 && iVar58 != -1) << 0x20 | uVar12;
  uVar56 = uVar18 & 0xffff0000 | (uint)((ulong)uVar21 & 0xffffffffffffff0f);
  sVar15 = (sbyte)((ulong)uVar21 & 0xffffffffffffff0f);
  uVar21 = (short)uVar23 << sVar15 | uVar16 >> 0x10 - sVar15;
  uVar13 = (ulong)((uint)(iVar58 * 0xa0e947a) >> sVar15) |
           (ulong)(uint)(iVar58 * 0xa0e947a) << 0x40 - sVar15;
  uVar11 = uVar11 >> 0xc;
  uVar26 = (ulong)((uint)(uVar12 >> 2) | (uint)(uVar12 << 0x1f)) + 1;
  uVar25 = uVar23 & 0xffff0000 | uVar25 & 0xffffffff00000000 |
           (ulong)(ushort)(uVar21 ^ (ushort)(uVar21 == uVar16) * (uVar21 & uVar16));
  uVar21 = uVar6 >> 1 | (ushort)(uVar21 < uVar16) << 0xf;
  uVar43 = (short)((ushort)((uVar24 & 0xffffffffffff0000 | uVar53) >> 10) & 0xeaa9) >> sVar15;
  uVar12 = uVar53 << 0x36 | (uVar24 & 0xfffffffffc000000) >> 10;
  bVar38 = (char)(uVar27 >> 8) >> 0xe;
  uVar17 = uVar56 + 0x51bb2212;
  bVar33 = (byte)uVar17;
  uVar30 = uVar25 << bVar33 | (ulong)(CONCAT18(uVar56 < 0xae44ddee,uVar25) >> 0x41 - bVar33);
  uVar23 = uVar12 | (ulong)uVar43 | 0xc000;
  uVar56 = (uint)(ushort)uVar23;
  uVar22 = CONCAT22((short)uVar13,(short)uVar30) & 0x3fffffff;
  uVar25 = ((ulong)uVar11 & 0xffffffffffff0000 |
           (ulong)(ushort)((ushort)uVar11 >> sVar15 | uVar16 << 0x10 - sVar15)) * 5 + 0x66649f51;
  uVar11 = (uint)lVar42 & 0xffff0000 |
           (uint)(ushort)(uVar21 >> (bVar33 & 0xf) | uVar21 << 0x10 - (bVar33 & 0xf)) | 0xc0000000;
  uVar24 = ((ulong)((uint)uVar13 & 0x3fff0000 | uVar22 % uVar56) << 0x20 |
           uVar30 & 0xffff0000 | (ulong)(ushort)(uVar22 / uVar56)) / (ulong)uVar11;
  uVar13 = uVar24 & 0xffffffff;
  uVar53 = (ulong)(uVar11 + 0x75 + (int)uVar23 * 4);
  uVar23 = (ulong)uVar11 - 0x687b0e50;
  uVar31 = (ulong)(byte)((byte)uVar43 << 6 | (byte)uVar43 >> 2);
  uVar20 = uVar17 + uVar53 + (ulong)(bVar38 & 1 | bVar61);
  bVar33 = (byte)uVar23;
  bVar34 = (((char)uVar26 - (char)(uVar13 >> 8)) - bVar33) - 1;
  bVar55 = (char)uVar20 + 0x68;
  uVar21 = (short)(char)uVar13 * (short)(char)(uVar53 >> 8);
  cVar5 = (char)(uVar21 >> 8);
  uVar25 = (ulong)(cVar5 != '\0' && cVar5 != -1) << 0x20 |
           uVar25 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar25 >> 1);
  uVar17 = (uint)(uVar25 << 0xc) | (uint)(uVar25 >> 0x15);
  uVar25 = (uVar23 & 0xffffffffffffff00 | (ulong)(byte)(bVar33 >> 4 | bVar33 << 4)) << 0x28 |
           uVar23 >> 0x18 & 0xffffffffffff0000;
  uVar23 = ~(uVar30 & 0xffffffff00000000 | uVar24 & 0xffff0000 | (ulong)uVar21);
  bVar33 = bVar55 & 0x3f;
  uVar24 = uVar25 >> bVar33 | uVar25 << 0x40 - bVar33;
  uVar21 = ((ushort)uVar26 & 0xff00 | (ushort)bVar34 | 0x66) ^ 0x3e0b;
  uVar25 = (uVar26 & 0xffffffffffff0000 | uVar26 & 0xff00 | (ulong)bVar34 | 0x66) ^ 0x3e0b;
  if (uVar21 == 0) {
    uVar24 = uVar23 & 0xffffffff;
  }
  uVar53 = uVar53 << 1;
  bVar34 = (byte)uVar53 | 1;
  uVar13 = 1 << (uVar53 & 0x3f | 1);
  uVar56 = (uint)uVar46 | (uint)uVar13;
  uVar13 = uVar13 & 0xffffffff00000000;
  uVar30 = (ulong)(uVar56 ^ (uVar56 >> 0xc & 1) << 0xc);
  uVar32 = uVar13 | uVar30;
  uVar3 = (ulong)bVar55 & 0xffffffffffffff0f;
  sVar15 = (sbyte)uVar3;
  uVar21 = ((ushort)uVar20 & 0xff00 | (ushort)uVar3) << sVar15 | uVar21 >> 0x10 - sVar15;
  bVar55 = (byte)uVar21;
  bVar39 = (byte)(uVar25 >> 8);
  bVar33 = bVar34 + bVar39;
  cVar5 = (char)uVar25;
  if (bVar33 != 0 && SCARRY1(bVar34,bVar39) == (char)bVar33 < '\0') {
    uVar32 = uVar13 | uVar30 & 0xffffffffffff0000 | (ulong)(ushort)uVar17;
  }
  uVar51 = (ushort)uVar32 + 0xdb82;
  return CONCAT88(*(undefined8 *)
                   (((ulong)&stack0xffffffffffffff90 & 0xffffffff00000000 |
                    (ulong)((int)register0x00000020 - 0x71U ^ 1 << ((int)(short)uVar40 & 0x1fU))) +
                   0x58),uVar23 + (uVar26 & 0xffffffffffff0000 |
                                   (ulong)(ushort)(CONCAT11((byte)uVar53,cVar5) | 0x100) &
                                   0xffffffffffffff00 |
                                  (ulong)(byte)(cVar5 << 7 |
                                               (byte)(CONCAT11(0x247d < (ushort)uVar32 ||
                                                               CARRY2(uVar51,(ushort)CARRY1(bVar34,
                                                  bVar39)),cVar5) >> 2))) +
                         (uVar20 & 0xffffffffffff0000 | (ulong)uVar21 & 0xffffffffffffff00 |
                         (ulong)(bVar55 >> 1)) + (uVar53 & 0xffffffffffffff00 | (ulong)bVar33) +
                         (uVar32 & 0xffffffffffff0000 |
                         (ulong)(ushort)(uVar51 + (ushort)CARRY1(bVar34,bVar39))) + uVar31 +
                         ((ulong)((uVar10 + 0xb3fa7998 + (uint)((uVar41 | uVar48) < (ulong)uVar28) ^
                                  uVar18) >> 1) & 0xffffffffffff0000 | uVar23 & 0xff) +
                         (uVar24 << (bVar55 & 0x3f)) + (ulong)uVar17 +
                         (CONCAT62((uint6)((ulong)((long)uVar29 >> (bVar4 & 0x3f)) >> 0x11),
                                   ((short)uVar49 >> 0xf) << 1 | (ushort)uVar46 >> 0xf) |
                         0x8000000000000000) +
                         (uVar12 | (ulong)uVar43 & 0xffffffffffffff00 | 0xc000 | uVar31) +
                         (ulong)(uVar27 & 0xffff0000 | (uint)uVar16 & 0xffffff00 |
                                (uint)(byte)((bVar38 >> 1) + 0x99)) +
                         ((ulong)(ushort)((short)(uVar6 + 0x72bb) >> 1) & 0xffffffffffffff00) +
                         -0x52590ff7f12c4925);
}



// WARNING: Removing unreachable block (ram,0x0040a868)
// WARNING: Removing unreachable block (ram,0x0040a59e)
// WARNING: Removing unreachable block (ram,0x0040a37e)
// WARNING: Removing unreachable block (ram,0x0040a365)
// WARNING: Removing unreachable block (ram,0x0040a39a)
// WARNING: Removing unreachable block (ram,0x0040a974)

undefined  [16] log_size_10_var_009(void)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  long lVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint6 uVar11;
  undefined6 uVar12;
  byte bVar13;
  byte bVar14;
  sbyte sVar15;
  ushort uVar16;
  ushort uVar17;
  short sVar18;
  byte bVar21;
  uint uVar19;
  ulong uVar20;
  ulong uVar22;
  short sVar23;
  ulong uVar24;
  byte bVar25;
  short sVar26;
  uint uVar27;
  ushort uVar28;
  uint uVar29;
  long lVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  ulong uVar35;
  char cVar36;
  ushort uVar37;
  ushort uVar38;
  int iVar39;
  ulong uVar40;
  ulong uVar41;
  byte bVar42;
  short sVar43;
  uint uVar44;
  byte bVar45;
  uint uVar46;
  ulong uVar47;
  byte bVar48;
  ushort uVar49;
  ulong uVar50;
  bool bVar51;
  byte bVar52;
  bool in_PF;
  bool bVar53;
  
  uVar31 = 0;
  while ((0x5583ca15U >> uVar31 & 1) == 0) {
    uVar31 = uVar31 + 1;
  }
  auVar3 = ZEXT816(0x6e0a61fd0c049915) * ZEXT416(uVar31);
  bVar21 = 0xe2;
  uVar31 = SUB164(ZEXT816(0x4d46b7c057898a01) >> 0x31,0) |
           SUB164(ZEXT816(0x4d46b7c057898a01),0) << 0x10;
  uVar32 = uVar31 >> 0x11 | uVar31 << 0xf;
  uVar8 = CONCAT71(SUB167(auVar3 >> 8,0),SUB161(auVar3,0) >> 6 | SUB161(auVar3,0) << 2) - 0x77061aa4
  ;
  uVar27 = uVar32 + 0xc7ab0c81;
  uVar31 = (int)CONCAT62(SUB166(auVar3 >> 0x50,0),SUB162(auVar3,0) >> 0xf) + 1;
  if (!in_PF) {
    bVar21 = 0x15;
  }
  bVar25 = (byte)uVar27 | bVar21;
  uVar24 = (long)(int)((uint)uVar8 & 0xffffff00 | (uint)(byte)((char)uVar8 + 1)) *
           (long)(int)(uVar27 & 0xffffff00 | (uint)bVar25);
  uVar47 = (ulong)bVar21 | 0x62419c671d135000;
  uVar7 = ((uint)(byte)((char)((uVar24 & 0xffffff00) >> 8) + 0x32) | 0x400) ^ 0x97007364;
  uVar8 = uVar8 & 0xffffffff00000000 | uVar24 & 0xffffff00 |
          (ulong)(byte)(((SUB161(auVar3 >> 8,0) >> 7) + 'W' + (0x3854f37e < uVar32) ^ 1U) + 0x49);
  if ((char)((ulong)uVar7 >> 8) != '\x01') {
    uVar8 = 0xe40cadd7;
  }
  bVar13 = (byte)uVar7 | 0x7b;
  uVar9 = (ulong)CONCAT11((char)uVar24,1) & 0xffffffffffffff00 | 0x2c157bb1a9b50000 |
          (ulong)(byte)(bVar25 * '\x02' + 1);
  uVar7 = (uint)uVar47 << 0x1f;
  uVar40 = uVar9;
  if ((uVar7 | 0x4b8039ff) == 0 || (uVar7 == 0) != (uVar7 != 0)) {
    uVar40 = uVar47;
  }
  uVar32 = (uint)(ushort)((0x44e0 - ((short)uVar32 + -0x59fa)) -
                         (ushort)((uVar8 >> ((ulong)(uint)(SUB164(auVar3,0) + (int)uVar9) & 0x1f) &
                                  1) != 0));
  uVar8 = uVar8 & 0xffffffff00000000 | (ulong)(uint)(int)(short)uVar8;
  uVar9 = uVar8 - uVar47;
  uVar40 = uVar40 & 0xffffffffffffff00 | (ulong)(uVar9 != 0 && (long)uVar47 <= (long)uVar8);
  uVar32 = (uint)((CONCAT14(uVar8 < uVar47,uVar32) | 0x720e0000) >> (bVar13 & 0x1f)) |
           (uVar32 | 0x720e0000) << 0x21 - (bVar13 & 0x1f);
  uVar28 = 0x5680;
  uVar41 = (ulong)(bVar21 < 0xa4) << 0x3f | 0x72065680;
  iVar39 = (uint)(ushort)(short)(char)uVar9 * 0x14a5;
  uVar8 = (ulong)((uint7)(((ulong)((uint6)((ulong)(uVar31 & 0xffffff00 | uVar31 >> 1 & 0x7f) +
                                           0x3f69d8c8 >> 0x10) & 0xffffffff0000 |
                                  (uint6)(uVar24 >> 0x30)) << 0x10) >> 8) & 0x7d43c4c5fd28e7) << 8 |
          (ulong)(ushort)((uint)iVar39 >> 0x10);
  uVar6 = (ushort)iVar39;
  uVar37 = (short)uVar32 * 8 + 0x5763;
  uVar24 = (ulong)uVar37 | 0x7d43c4c5fd280000;
  uVar47 = (long)(int)((uint)uVar47 & 0xffffff00 | (uint)(byte)(bVar21 + 0x5c)) << (bVar13 & 0x3f) |
           uVar24 >> 0x40 - (bVar13 & 0x3f);
  uVar16 = (ushort)(uVar8 >> (bVar13 & 0x3f)) | (ushort)(uVar8 << 0x40 - (bVar13 & 0x3f));
  if ((uVar37 & 1) == 0) {
    uVar28 = 0;
  }
  bVar53 = uVar6 == uVar16;
  uVar17 = uVar16 ^ (ushort)bVar53 * (uVar16 ^ uVar28);
  uVar37 = uVar6 ^ (ushort)bVar53 * (uVar6 & uVar17);
  uVar9 = uVar9 & 0xffffffffffff0000 | (ulong)uVar37;
  bVar21 = (byte)uVar37;
  uVar31 = (uVar27 & 0xfffffe00) >> 1 | 0x80000000 | (uint)(uVar6 < uVar16);
  uVar8 = (ulong)uVar31 & 0x3f;
  uVar7 = (uint)uVar9 ^ (uint)(1 << uVar8);
  bVar51 = (uVar9 >> uVar8 & 1) != 0;
  uVar19 = (uint)uVar40 & 0xffff0000 | (uint)(ushort)((short)uVar40 - 1);
  if (!bVar51 && !bVar53) {
    uVar19 = 0x72065680;
  }
  uVar16 = uVar28 + 0xcc76 + (ushort)bVar51;
  uVar19 = uVar19 & 0xffff0000 | (uint)(ushort)-(short)uVar19;
  uVar44 = uVar32 >> (bVar13 & 0x1f) | (int)(uVar41 >> 1) << 0x20 - (bVar13 & 0x1f);
  lVar30 = (long)(int)(((uint)uVar24 >> 1) + 0x26963e15 & 0xffffff00 | (uint)bVar21) * 0x3316248a;
  iVar39 = (int)((ulong)lVar30 >> 0x20);
  bVar25 = (bVar13 & 0x1f) % 9;
  bVar45 = (byte)(CONCAT11(iVar39 != 0 && iVar39 != -1,(char)uVar47) >> bVar25) |
           (char)uVar47 << 9 - bVar25;
  uVar24 = uVar47 & 0xffffffffffffff00 | (ulong)bVar45;
  uVar19 = uVar19 >> (bVar13 & 0x1f) | uVar19 << 0x20 - (bVar13 & 0x1f);
  uVar8 = 1 << ((ulong)uVar19 & 0x3f);
  bVar25 = ((char)uVar7 == '\x1e') * (bVar21 ^ 0x1e) ^ 0x1e;
  uVar7 = uVar7 & 0xdfff0000;
  uVar31 = -uVar31;
  uVar33 = (((uint)lVar30 & 0xffffff00 | (uint)(byte)((byte)lVar30 ^ 99)) - (int)uVar24) - 1;
  bVar21 = (byte)uVar31 & 0x3f;
  auVar3 = ZEXT116(0) << 0x40 | ZEXT816((ulong)(byte)uVar17 | (uVar41 >> 0x11) << 0x10);
  uVar32 = uVar7 | (uint)(ushort)((ushort)bVar45 * 0x40) & 0xffffff00 | 99;
  sVar18 = (short)uVar8 + 0x427d;
  iVar39 = (int)((ulong)((long)(int)uVar32 * -0x3a46168c) >> 0x20);
  uVar28 = (ushort)(CONCAT12(iVar39 != 0 && iVar39 != -1,sVar18) >> 0xe) | sVar18 * 8;
  bVar13 = (byte)uVar28;
  uVar11 = SEXT26((short)(uVar31 >> 0x10));
  uVar8 = (ulong)((uVar31 & 1) != 0) << 0x20 |
          uVar8 & 0xffff0000 | (ulong)uVar28 & 0xffffffffffffff00 |
          (ulong)(byte)(bVar13 << 2 | bVar13 >> 7);
  uVar40 = CONCAT62((undefined6)((char)bVar25 >> 7),(short)(char)bVar25 << 1);
  uVar24 = uVar24 >> 1;
  uVar6 = (short)(CONCAT62(uVar11,(ushort)(byte)uVar31) >> 1) >> 1;
  bVar25 = (byte)(((ushort)uVar19 & 0x7f) << 1) | 1;
  sVar18 = (short)uVar33;
  uVar28 = uVar16 + sVar18;
  if (uVar28 != 0 && SCARRY2(uVar16,sVar18) == (short)uVar28 < 0) {
    uVar40 = (ulong)(uVar7 | uVar28);
  }
  bVar13 = (byte)uVar6;
  uVar37 = (ushort)(uVar8 >> 0x11) >> (bVar13 & 0x1f);
  bVar51 = 0xee5e < (ushort)(uVar33 >> 1);
  uVar19 = (SUB164(auVar3 << bVar21,0) | SUB164(auVar3 >> 0x41 - bVar21,0)) -
           ((uint)((((ulong)uVar11 & 0xfffffffffffe) << 0x10) >> 1) | (uint)uVar6);
  uVar33 = (uint)CONCAT62(0xa5580db0ecf9,(short)uVar28 >> 0xf);
  uVar33 = uVar33 >> (bVar13 & 0x1f) | uVar33 << 0x20 - (bVar13 & 0x1f);
  uVar31 = uVar31 - 1 & 0xffffff00 |
           (uint)(byte)((char)(uVar31 - 1) << 1 | (bVar51 >> ((ushort)uVar24 & 0xf) & 1U) != 0);
  uVar9 = (ulong)(uVar7 | (ushort)(uVar28 & 0xff |
                                  (ushort)(byte)((char)((ulong)(uVar7 | uVar28) >> 8) + (char)uVar28
                                                + 1) << 8));
  uVar7 = (uVar33 & 0xffff0000 | (uint)(ushort)-(short)uVar33) - 1;
  uVar33 = (int)uVar24 + 0x16 + uVar31 * 2;
  lVar30 = CONCAT62((undefined6)((char)((uVar27 & 0xffffff00) >> 8) >> 7),(short)uVar7);
  uVar27 = uVar33 + 0x5d1cd096 + (uVar7 & 0xffff0000 | (uint)(ushort)((short)uVar32 << 1)) * 4;
  bVar21 = (byte)uVar33;
  uVar31 = uVar31 * 2 + 0x77222f0f;
  uVar24 = bVar51 + uVar9 + 1;
  bVar45 = (byte)uVar40;
  uVar28 = 0;
  uVar6 = (ushort)uVar24;
  if (uVar6 != 0) {
    while ((uVar6 >> uVar28 & 1) == 0) {
      uVar28 = uVar28 + 1;
    }
  }
  uVar32 = (int)lVar30 +
           (uVar33 & 0xffff0000 |
           (uint)CONCAT11((byte)((ulong)(uVar33 & 0xffff0000 |
                                        (uint)CONCAT11((char)((ulong)uVar33 >> 8) + -0x4a,bVar21))
                                >> 8) ^ bVar21,bVar21));
  uVar16 = ((short)(char)((byte)(uVar16 << (bVar13 & 0xf)) | (byte)(uVar16 >> 0x10 - (bVar13 & 0xf))
                         ) * (short)(char)uVar7 & 0xffU) * (ushort)bVar45;
  cVar5 = (char)(uVar16 >> 8);
  uVar8 = (ulong)(cVar5 != '\0') << 0x20 |
          (ulong)((uint)(uVar8 << 0x10) | (uint)uVar37 & 0xffffff00 | (uint)((byte)uVar37 & bVar25))
          + 1 & 0xffffffff;
  uVar20 = lVar30 + 1;
  uVar47 = (uVar47 & 0x1fffe0000) >> 1 |
           (ulong)(ushort)(uVar16 & 0xff | (ushort)(byte)(cVar5 + (byte)uVar27) << 8);
  bVar21 = (byte)uVar27 & 0xf;
  uVar16 = uVar6 << bVar21 | uVar6 >> 0x10 - bVar21;
  uVar41 = uVar47 * uVar9;
  uVar33 = uVar32 & 0xffffff00 | (uint)(byte)((char)uVar32 + (char)uVar31);
  uVar6 = (short)uVar27 - (short)uVar41;
  auVar3 = ZEXT816((ulong)uVar31 | 0xc000000000000000);
  auVar1 = ZEXT1216(CONCAT48(SUB164(SEXT816((long)uVar47) * SEXT816((long)uVar9) >> 0x40,0) +
                             0x2c97f8e9,
                             uVar41 & 0xffffffffffffff00 |
                             (ulong)(byte)(((char)uVar41 - (char)uVar20) - 1))) &
           (undefined  [16])0xffffffffffffffff;
  auVar2 = auVar1 / auVar3;
  uVar7 = (uint)SUB162(auVar2,0) * (uint)uVar6;
  uVar47 = (ulong)uVar19 | 0xc000;
  uVar32 = (uint)(ushort)uVar47;
  uVar7 = uVar7 & 0xffff | (uint)((ushort)(uVar7 >> 0x10) & 0x3fff) << 0x10;
  uVar41 = CONCAT62(SUB166(auVar1 % auVar3 >> 0x10,0),(short)(uVar7 % uVar32)) - uVar20;
  cVar5 = (char)(uVar7 / uVar32);
  bVar13 = (byte)(uVar41 >> 8);
  bVar48 = (bVar45 ^ 0x84) * '\x02' & 0xf2;
  bVar42 = (byte)uVar6;
  bVar52 = bVar13 & 1;
  bVar21 = bVar42 - bVar48;
  bVar14 = bVar21 - bVar52;
  uVar32 = uVar27 & 0xffff0000 | (uint)uVar6 & 0xffffff00 | (uint)bVar14;
  if ((bVar48 <= bVar42 && bVar52 <= bVar21) && bVar14 != 0) {
    uVar47 = uVar40;
  }
  uVar7 = (((uVar44 & 0xffffff00 | (uint)((byte)uVar44 & bVar25)) + 0x8b573a3c & 0xffff0000 |
            (uint)uVar28 | uVar19) ^ 0x4fc568e2) << 1;
  uVar50 = (ulong)(uVar7 & 0xffffff00 | (uint)bVar45);
  bVar21 = (byte)uVar16;
  uVar24 = uVar24 & 0xffffffffffff0000 | (ulong)uVar16 & 0xffffffffffffff00 |
           (ulong)(byte)(bVar21 >> 4 | bVar21 << 4);
  bVar21 = (byte)((uVar20 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar20 >> 1)) - 0x6e06e838 >> 8
                 );
  uVar40 = (ulong)(((uint)uVar40 & 0xffffff00 | uVar7 & 0xff | uVar27 >> 0x1f) >> (bVar14 & 0x1f) |
                  uVar32 << 0x20 - (bVar14 & 0x1f)) ^ 0xd8fe;
  uVar19 = SUB164(((CONCAT88(uVar41 & 0xffffffffffff0000 |
                             (ulong)CONCAT11(bVar13 >> 1,(char)uVar41 - cVar5),
                             CONCAT62(SUB166(auVar2 >> 0x10,0),
                                      (short)(char)(cVar5 * -0x69) * (short)(char)bVar42)) |
                   (undefined  [16])0x8000) & (undefined  [16])0xffffffffffffffff) /
                  ZEXT816(uVar24 | 0xc000000000000000),0) >> (bVar14 & 0x1f);
  uVar7 = (uint)CONCAT11((byte)((ulong)uVar32 >> 8) | bVar21 << 5 | bVar21 >> 3,bVar14);
  uVar44 = (uVar31 & uVar32 * -0x5d793ce4) + 1;
  uVar32 = (uint)uVar24;
  if ((uVar33 & uVar32) == 0) {
    uVar50 = 0xffffffff;
  }
  uVar29 = (((uint)(uVar8 >> 0x17) | (uint)(uVar8 << 10)) << (bVar14 & 0x3f) |
           (uint)((uVar9 & 0x45f176f2) >> 0x40 - (bVar14 & 0x3f))) ^ 1 << (uVar7 & 0x1f);
  uVar6 = (short)(uVar9 & 0x45f176f2) >> (bVar14 & 0x1f);
  uVar20 = uVar9 & 0x45f10000 | (ulong)uVar6;
  auVar3 = ZEXT416(uVar19 & 0xffff0000 | (uint)CONCAT11(-((uVar31 & 1) != 0),(char)uVar19)) *
           ZEXT816(uVar50);
  uVar41 = uVar47 & 0xffffffff93faeaa4;
  bVar21 = (bVar14 & 0x1f) % 9;
  bVar25 = SUB161(auVar3 >> 0x48,0);
  uVar9 = (ulong)uVar31 & 0xffffffffffff0000 | 0xc000000000000000 |
          (ulong)(ushort)((ushort)uVar31 >> 1) | 0xc000;
  uVar40 = uVar40 ^ (uVar40 >> 0xf & 1) << 0xf;
  uVar28 = (short)uVar44 + (short)uVar24;
  uVar32 = ((int)CONCAT62((undefined6)((char)bVar45 >> 7),(short)(char)bVar45 + 1) << 1 |
           (uint)(CARRY4(uVar33,uVar32) || 0xfffffffe < uVar33 + uVar32)) + 0x26b1cf5b;
  iVar39 = (int)(((ulong)SUB166(auVar3 >> 0x50,0) << 0x10) >> 0x20);
  uVar8 = (ulong)(uVar27 & 0xffff0000 | uVar7) << 7;
  bVar13 = (char)uVar32 + (char)uVar41 + 1;
  uVar31 = uVar32 & 0xffffff00 | (uint)bVar13;
  uVar24 = uVar50;
  if (in_PF) {
    uVar24 = (ulong)((int)uVar9 << (bVar14 & 0x1f) |
                    (uint)CONCAT62(SUB166(auVar3 >> 0x10,0),
                                   (short)((CONCAT22(CONCAT11(bVar25 << bVar21 |
                                                              bVar25 >> 9 - bVar21,
                                                              SUB161(auVar3 >> 0x40,0)),
                                                     SUB162(auVar3,0)) & 0x3fffffff) /
                                          (uint)(ushort)uVar9)) >> 0x20 - (bVar14 & 0x1f));
  }
  uVar27 = ((int)uVar50 + (int)uVar41 * 8) * 0x400;
  sVar18 = (short)uVar29;
  uVar16 = -sVar18;
  uVar29 = uVar29 & 0xffff0000;
  if (sVar18 == 0) {
    uVar41 = uVar47 & 0xffffffff93fa0000 | (ulong)(ushort)uVar27;
  }
  if (in_PF) {
    iVar39 = 0;
  }
  uVar19 = (int)uVar20 * 0x6019f801 + (int)uVar8 + -0x471cf265 + (uVar29 | uVar16) ^ uVar27;
  uVar7 = (int)CONCAT71((uint7)(uVar20 >> 8) & 0xffffffffffff00 |
                        (uint7)(byte)((uVar6 & 0xff) * (uVar6 & 0xff) >> 8),!in_PF) * -0x2e8916a4;
  uVar29 = uVar29 | (ushort)~uVar16;
  uVar47 = (long)(int)(uVar7 & 0xffffff00 | (uint)(byte)((char)uVar7 + (char)uVar6)) *
           (long)(int)uVar31 & 0xffffffff;
  sVar18 = (short)(uVar24 ^ 0xffffffffc4cf55c3);
  uVar7 = ((uint)uVar40 & 0xffff0000 | (uint)(ushort)((short)uVar40 * -0x7b07)) + 0x1ba87062;
  if (SBORROW8(uVar47,uVar47)) {
    uVar7 = uVar29;
  }
  uVar40 = ((ulong)uVar31 & 0xffffffffffffff00 | (ulong)(byte)(bVar13 >> 1 | 0x80)) ^
           ((ulong)(uVar32 >> 0x1a) & 1) << 0x1a;
  uVar33 = uVar19 * 0x220fc515;
  uVar6 = (ushort)(uVar27 - 1 >> 1) | 0x8b2e;
  uVar32 = ((uint)(0x3fffffffffffffff - (ulong)uVar44) & 0xffffff00 |
           (uint)(0x3fffffffffffffff - (ulong)uVar44 >> 1) & 0x7f) << 2;
  uVar47 = uVar41 + 0x70485fa0 + uVar40 * 4;
  uVar31 = (uint)(byte)(uVar8 >> 8) + (int)uVar41;
  uVar7 = uVar7 & 0xffff0000;
  uVar40 = uVar40 & 0xffffffffffff0000 | uVar40 >> 1 & 0x7fff;
  uVar9 = uVar47 | 0x8000000000;
  uVar27 = uVar7 + uVar33;
  if (uVar27 == 0) {
    uVar9 = uVar47 & 0xffffffffffff0000 | 0x8000000000 |
            (ulong)(uVar44 & 0xffff0000 | (uint)uVar28) & 0xffff;
  }
  uVar46 = uVar31;
  if (!CARRY4(uVar7,uVar33)) {
    uVar46 = (int)uVar41 + uVar33;
  }
  uVar47 = (ulong)uVar46;
  if (uVar27 == 0 || (SCARRY4(uVar7,uVar33) != SCARRY4(uVar27,0)) != (int)uVar27 < 0) {
    uVar47 = uVar9;
  }
  uVar41 = ((ulong)uVar19 |
           (uVar24 ^ 0xffffffffc4cf55c3) & 0xffffffffffff0000 |
           (ulong)(ushort)((sVar18 << 1 | (ushort)(sVar18 < 0)) << 1 | 1)) + (ulong)uVar27;
  uVar28 = uVar28 + ((short)((int)uVar31 >> 0x1f) << 1 | (ushort)(iVar39 < 0));
  uVar24 = 0;
  if (uVar40 != 0) {
    while ((uVar40 >> uVar24 & 1) == 0) {
      uVar24 = uVar24 + 1;
    }
  }
  uVar40 = uVar47 * uVar40 & 0xffffffffffffff00 |
           (ulong)(byte)((byte)(uVar47 * uVar40) & (byte)(uVar8 & 0xff));
  uVar47 = CONCAT62((int6)(uVar9 >> 0x10),0x71da);
  uVar16 = (short)uVar33 << 1 | 1;
  cVar5 = (char)uVar28;
  uVar31 = uVar44 & 0xffff0000 | (uint)uVar28 & 0xffffff00 | 0xda;
  bVar21 = -(uVar41 < uVar40);
  uVar9 = uVar47 & 0xffffffffffffff00 | (ulong)bVar21;
  if (bVar21 != 0 && (SBORROW1(cVar5,cVar5) != false) == uVar41 < uVar40) {
    uVar40 = uVar24 & 0xffffffff;
  }
  cVar5 = (char)uVar16;
  uVar20 = (long)(int)uVar40 * (long)(int)uVar40;
  uVar28 = (short)(uVar8 & 0xff) << 1 | uVar6 >> 0xf;
  uVar50 = (ulong)(uVar32 >> 1 & 0xff | (uVar32 >> 9) << 8);
  if (uVar28 == 0) {
    uVar50 = uVar9;
  }
  uVar35 = uVar8 & 0xffffffffffff0000 | (ulong)uVar28 | 0xc0;
  uVar17 = (ushort)uVar20 & 0x3fff;
  uVar37 = (ushort)(byte)uVar35;
  uVar40 = uVar40 & 0xffffffff00000000 | uVar20 & 0xffff0000 |
           (ulong)(ushort)(uVar17 / uVar37 & 0xff | uVar17 % uVar37 << 8);
  lVar10 = uVar40 * uVar50;
  uVar37 = (ushort)uVar9;
  uVar47 = uVar47 & 0xffff0000;
  uVar17 = (short)uVar35 + (ushort)uVar24;
  uVar40 = (ulong)SUB167(SEXT816((long)uVar40) * SEXT816((long)uVar50) >> 0x48,0);
  uVar7 = -0x7a4ac13a >> ((byte)uVar17 & 0x1f);
  uVar32 = (uint)lVar10 & 0xbf;
  uVar27 = ((uint)uVar16 & 0xffffff00 | (uint)(byte)(cVar5 << 1 | cVar5 < '\0')) & uVar7;
  uVar9 = (ulong)(uVar31 * -0x18b8afed);
  lVar30 = 0x3f;
  if (uVar24 != 0) {
    while (uVar24 >> lVar30 == 0) {
      lVar30 = lVar30 + -1;
    }
  }
  uVar16 = ((ushort)uVar41 & (ushort)uVar32) << 2;
  if (in_PF) {
    uVar16 = (ushort)uVar24;
  }
  uVar41 = -(ulong)uVar29 & 0xffffffffffff0000 | 0x203e7e24;
  if ((long)uVar41 < 0) {
    uVar9 = (uVar40 & 0xffffff) << 8;
  }
  bVar51 = -1 < (short)uVar37;
  uVar44 = (uint)uVar47 | (uint)(ushort)(~uVar37 << 1 | (ushort)bVar51);
  uVar20 = (ulong)uVar27 << 0x3f;
  uVar33 = (uint)uVar9 & 0xffffff00 | (uint)in_PF;
  uVar19 = uVar7 >> 1;
  if (uVar20 == 0) {
    uVar19 = uVar44;
  }
  uVar37 = (ushort)(uVar33 << 1) | (ushort)((int)uVar33 < 0);
  lVar30 = (0x171ac002728e237 - uVar24 & 0xffffffffffff0000 | uVar9 & 0xff00 | (ulong)in_PF) -
           lVar30;
  uVar40 = uVar40 << 8;
  if (-1 < (int)((uint)uVar16 + 0x6bd8a629)) {
    uVar40 = uVar40 & 0xffffffffffff0000;
  }
  uVar24 = uVar24 & 0xffffffffffffff00 | (ulong)(byte)(((byte)uVar24 & 0x8b) << 1);
  bVar25 = (byte)(uVar17 & 0xff);
  bVar21 = bVar25 & 0xf;
  uVar38 = uVar37 << bVar21 | uVar37 >> 0x10 - bVar21;
  bVar21 = (bVar25 & 0x1f) % 9;
  cVar5 = (char)uVar32;
  uVar50 = (ulong)(ushort)(uVar17 & 0xff | (ushort)(byte)((char)((ulong)uVar17 >> 8) - 0x35) << 8) &
           0xffffffffffffff0f;
  sVar15 = (sbyte)uVar50;
  uVar17 = (ushort)uVar27 >> sVar15 | (short)lVar30 << 0x10 - sVar15;
  lVar4 = uVar24 + (((uint)uVar9 & 0x7fff8000) << 1 | (uint)uVar38);
  iVar39 = -(int)uVar24;
  uVar27 = ((uint)(uVar8 & 0xffffffffffff0000) | (uint)uVar50) >> sVar15 | uVar19 << 0x20 - sVar15;
  uVar49 = (ushort)(uVar44 >> 1);
  uVar37 = (ushort)(uVar47 >> 0x10);
  uVar31 = uVar31 >> 1 | (uint)bVar51 << 0x1f | 0xa59fe12f;
  uVar8 = (ulong)uVar17;
  if ((int)uVar31 < 0) {
    uVar8 = uVar40 & 0xffffffffffff0000 | (ulong)(byte)uVar17;
  }
  bVar25 = (byte)uVar27;
  uVar17 = (uVar17 & 0xff) << 1;
  uVar44 = (((uint)lVar4 & 0xffffff00 | (uint)(byte)((char)lVar4 << 1)) << (bVar25 & 0x1f)) *
           -0x53388000;
  uVar33 = ((uint)(uVar40 & 0xffffffffffff0000) | (uint)uVar17 & 0xffffff00 |
           (uint)(byte)((byte)uVar17 | bVar25)) << (bVar25 & 0x1f);
  uVar32 = (int)(short)((ushort)CONCAT71((int7)(int3)(uint3)(byte)((uVar20 != 0) << 7 |
                                                                   ((uVar7 >> 1 | uVar20) == 0) << 6
                                                                   | (((((char)uVar6 - 1U & 0xf) -
                                                                       (char)((ulong)uVar28 >> 8)) -
                                                                       1 & 0x10) != 0) << 4 |
                                                                   in_PF << 2 | 2U |
                                                                  (uVar7 & 1) != 0),(char)uVar38) ^
                       0xc1) * (int)(short)uVar33;
  uVar11 = SEXT26((short)((ulong)lVar10 >> 0x10));
  uVar24 = CONCAT62(uVar11,(short)uVar32);
  uVar47 = (ulong)(byte)((byte)(CONCAT11(bVar51,cVar5) >> bVar21) | cVar5 << 9 - bVar21) &
           ~(1 << (uVar8 & 0x3f));
  uVar40 = (ulong)(uVar31 & 0xffffff00 | (uint)(byte)((char)uVar31 << 1));
  uVar6 = ((ushort)iVar39 & 0xff00 |
          (ushort)(byte)((byte)iVar39 >> (bVar25 & 7) | (byte)iVar39 << 8 - (bVar25 & 7))) << 6;
  lVar10 = (long)(ulong)(uVar33 & 0xffff0000 | uVar32 >> 0x10) >> (bVar25 & 0x3f);
  uVar50 = uVar40 ^ (ulong)(uVar24 == uVar40) * (uVar40 ^ (lVar30 << sVar15) << 1);
  uVar11 = uVar11 ^ (uint6)((ulong)(uVar24 == uVar40) * (uVar24 & uVar50) >> 0x10);
  uVar32 = uVar44 & 0xffff0000 | (uint)(ushort)(((ushort)uVar44 >> 2) * 0x4cbf);
  uVar20 = (CONCAT22(uVar37 >> 1,uVar49 >> 10 | uVar49 << 6) << 9 | (uint)(uVar37 >> 8)) ^ uVar47;
  uVar19 = uVar19 & 0xffffff00 | (uint)(byte)(((byte)uVar19 & 0x6b) + 0x2d + ((short)uVar6 < 0));
  uVar24 = CONCAT62((uint6)(uVar41 >> 0x11),(short)(uVar41 >> 1) >> 1) & 0xffffffffffff1e4f;
  uVar7 = (uint)uVar24;
  uVar31 = uVar19 + uVar7;
  iVar34 = uVar31 + 1;
  uVar28 = ((ushort)uVar27 & 0xff00 |
           (ushort)(byte)(bVar25 << (bVar25 & 7) | bVar25 >> 8 - (bVar25 & 7))) * 2 + 0x48e4;
  bVar53 = (((ushort)((ulong)((uint)uVar16 + 0x6bd8a629) - 0xa48a15f >> 1) |
            (ushort)(1 << (uVar27 & 0x1f))) & 0x200) != 0;
  bVar25 = (char)uVar28 - 0x38;
  uVar9 = (ulong)((uint)(CONCAT14(CARRY4(uVar19,uVar7) || 0xfffffffe < uVar31,iVar34) >> 0x14) |
                 iVar34 * 0x2000) << 3;
  uVar28 = (ushort)(byte)uVar47 + 0x639c + (uVar28 & 0xff00 | (ushort)bVar25) * 8;
  uVar24 = uVar24 + 0x5064ccc;
  bVar21 = (bVar25 & 0x1f) % 0x11;
  uVar16 = (0 << bVar21 | 0U >> 0x11 - bVar21) & ((short)(char)bVar25 | (ushort)uVar20);
  uVar47 = (ulong)(uVar50 < 0xde1622b7);
  uVar40 = uVar24 - uVar20;
  sVar18 = (short)uVar11 >> 0x10;
  cVar5 = (char)uVar11;
  uVar37 = CONCAT11((SBORROW8(uVar24,uVar20) != SBORROW8(uVar40,uVar47)) ==
                    (long)(uVar40 - uVar47) < 0,cVar5);
  uVar17 = (ushort)(uVar50 - 0xde1622b7);
  uVar17 = uVar17 << 2 | uVar17 >> 0xe;
  bVar51 = (uVar28 & 1) != 0;
  uVar28 = uVar28 >> 1;
  uVar31 = (uint)bVar51;
  uVar27 = uVar32 - uVar7;
  uVar19 = uVar27 - uVar31;
  bVar21 = (byte)((ulong)(ushort)(uVar28 | (ushort)bVar51 << 0xf) >> 8);
  bVar13 = (char)uVar9 + '-' + (bVar21 < 0x3c);
  uVar6 = uVar6 & 0x7f00 |
          (ushort)(byte)((((byte)((uint)iVar39 >> 8) >> 2 | (byte)uVar6) + (char)uVar8) * '\x02');
  uVar8 = 0x3f;
  if (uVar20 != 0) {
    while (uVar20 >> uVar8 == 0) {
      uVar8 = uVar8 - 1;
    }
  }
  bVar45 = (byte)uVar8 & 0xf;
  uVar38 = uVar6 >> bVar45 | uVar6 << 0x10 - bVar45;
  cVar36 = (char)bVar25 >> ((byte)uVar8 & 0x1f);
  iVar39 = CONCAT31((undefined3)((char)bVar25 >> 7),cVar36);
  lVar30 = (uVar9 & 0xffffffffffffff00 | (ulong)bVar13) + 0xac +
           (uVar50 - 0xde1622b7 & 0xffffffffffff0000 | (ulong)uVar17 & 0xffffffffffffff00 |
           (ulong)(byte)((char)uVar17 + cVar5 + (uVar32 < uVar7 || uVar27 < uVar31)));
  bVar25 = (byte)(uVar8 | 0xc0);
  uVar6 = uVar37 / (ushort)bVar25 & 0xff;
  uVar17 = (short)(uVar28 & 0xff | (ushort)(byte)(bVar21 - 0x3c) << 8 | 4) >> (bVar25 & 0x1f);
  uVar8 = (uVar8 | 0xc0) & ~(1 << ((long)(char)uVar19 & 0x3fU));
  uVar31 = ((uint)lVar10 & 0xffff0000 |
           (uint)CONCAT11((char)((ulong)lVar10 >> 8) << 1 | (uVar24 < uVar20 || uVar40 < uVar47),
                          (char)lVar10)) + 2;
  uVar27 = CONCAT22(sVar18,uVar6 | uVar37 % (ushort)bVar25 << 8) + 0xe5 + (int)uVar8 * 8;
  uVar28 = ((short)(char)((char)uVar6 * cVar36) * (short)(char)((ulong)uVar31 >> 8) & 0xffU) *
           (ushort)(byte)uVar31;
  if ((char)(uVar28 >> 8) != '\0') {
    uVar31 = uVar31 & 0xffff0000 | (uint)(ushort)lVar30;
  }
  uVar24 = lVar30 * 0x2000;
  uVar47 = uVar24 | uVar8 >> 0x33;
  uVar7 = uVar31 ^ (uVar31 >> 0x11 & 1) << 0x11;
  uVar6 = (ushort)uVar47;
  bVar21 = (byte)uVar8 & 0x1f;
  uVar32 = CONCAT22(sVar18,uVar28 >> 1 | uVar6 << 0xf) + 1;
  uVar33 = (int)uVar47 * -0x743d7555;
  bVar45 = (byte)(uVar8 << 1) & 0xf;
  bVar45 = bVar45 >> bVar45;
  bVar25 = bVar45 & 0xf;
  uVar19 = uVar19 & 0xffff0000 |
           (uint)(ushort)((ushort)uVar19 >> bVar25 | (ushort)uVar19 << 0x10 - bVar25);
  lVar30 = (ulong)(uVar7 & 0xffff0000 | (uint)CONCAT11(~(byte)((ulong)uVar7 >> 8),(char)uVar31)) +
           (ulong)((uint)uVar16 & 0xffffff00 | (uint)(byte)((byte)uVar16 | bVar13));
  uVar31 = uVar19 - uVar27;
  if ((int)uVar31 < 0) {
    uVar47 = uVar24 & 0xffffffffffff0000 | (ulong)(ushort)uVar31;
  }
  uVar24 = (ulong)(((uint)(uVar8 << 1) & 0xffffff00 | (uint)bVar45) & 0xe72ee80);
  uVar8 = uVar24 + 1;
  if (SCARRY8(uVar24,1)) {
    uVar8 = uVar8 & 0xffffffffffff0000;
  }
  uVar7 = uVar32 >> 1 & 0xffff0000 | (uint)((uVar32 & 1) != 0) << 0x1f |
          (uint)CONCAT11(bVar53,(char)(uVar32 >> 1));
  if (bVar53) {
    uVar7 = uVar27;
  }
  uVar9 = (ulong)((uint)(CONCAT14((uVar28 & 1) != 0,iVar39) >> bVar21) | iVar39 << 0x21 - bVar21 |
                 0xc0000000);
  uVar24 = CONCAT44((uint)lVar30 & 0xffff0000 | (uint)(ushort)lVar30,uVar7) & 0x3fffffffffffffff;
  uVar40 = uVar24 % uVar9;
  bVar21 = (byte)uVar8;
  uVar41 = (uVar47 & 0xffffffffffffff00 | (ulong)(uVar19 < uVar27 || uVar31 == 0)) >>
           (bVar21 & 0x3f) | (ulong)uVar31 << 0x40 - (bVar21 & 0x3f);
  bVar25 = (byte)uVar40;
  bVar13 = (byte)((short)(uVar17 & 0xff00 | (ushort)(byte)((byte)uVar17 ^ (byte)uVar32)) >> 1);
  uVar47 = (ulong)(ushort)((((uVar38 & 0xff00 | (ushort)(byte)((char)uVar38 + 0x76)) & uVar16) -
                           (short)uVar27) - 1) | 0x8000000000000000;
  if (bVar25 < bVar13) {
    uVar47 = (ulong)uVar33;
  }
  uVar28 = (ushort)uVar33;
  if (-1 < (char)(bVar13 - bVar25)) {
    uVar28 = (ushort)uVar31;
  }
  uVar31 = (uint)(uVar24 / uVar9) >> (bVar21 & 0x1f) | uVar31 << 0x20 - (bVar21 & 0x1f);
  lVar30 = (long)uVar47 >> (bVar21 & 0x3f);
  uVar37 = (short)uVar41 - uVar28;
  iVar39 = (int)(short)((long)(ulong)uVar31 >> 1) * (int)(short)uVar8;
  uVar16 = (ushort)((uint)iVar39 >> 0x10);
  bVar25 = (bVar21 & 0x1f) % 9;
  bVar13 = (byte)(uVar8 >> 8);
  uVar24 = uVar8 & 0xffffffffffff0000 |
           (ulong)CONCAT11(bVar13 << bVar25 | bVar13 >> 9 - bVar25,bVar21) |
           1 << ((ulong)(ushort)iVar39 & 0x3f);
  uVar8 = CONCAT62((int6)(uint6)(ushort)(uVar31 >> 0x10) >> 1,(short)(char)iVar39);
  bVar13 = (byte)((uint)iVar39 >> 0x10);
  bVar25 = (byte)uVar24 & 0x1f;
  uVar32 = (uint)(uVar8 >> bVar25) | (int)uVar8 << 0x21 - bVar25;
  bVar25 = (byte)uVar32;
  bVar42 = bVar13 ^ (bVar25 == bVar13) * (bVar13 ^ 0x82);
  uVar31 = uVar32 & 0xffffff00 | (uint)(byte)(bVar25 ^ (bVar25 == bVar13) * (bVar25 & bVar42));
  uVar19 = (uint)uVar6 + 0xd0fcefb6;
  uVar7 = (uint)uVar40 & 0xffff0000 | (uint)uVar16 | 0x200000;
  bVar25 = (byte)(uVar24 >> 8);
  bVar45 = (byte)((short)(uVar28 & 0xff00 | (ushort)(byte)((char)uVar28 * '\x02')) >> 0xf);
  cVar5 = bVar45 + bVar25;
  uVar28 = 0;
  if ((!CARRY1(bVar45,bVar25) && cVar5 != -1) && cVar5 != -1) {
    uVar28 = uVar37;
  }
  bVar25 = (byte)uVar28 >> 1 | (byte)uVar28 << 7;
  uVar8 = (ulong)(ushort)((ushort)CONCAT31((undefined3)((char)bVar13 >> 7),bVar42) | 0xde82) << 1;
  uVar16 = uVar16 - (uVar28 & 0xff00 | (ushort)bVar25);
  uVar47 = (uVar41 & 0xffffffffffff0000 | (ulong)uVar37) >> 0xf;
  lVar10 = uVar24 + 1;
  uVar40 = (ulong)(uint)((int)(uVar7 + uVar31 * 8) >> 1);
  if (lVar10 != 0 && SCARRY8(uVar24,1) == lVar10 < 0) {
    uVar40 = 0;
  }
  uVar19 = -(uVar19 & 0xffff0000 | (uint)(ushort)((short)uVar19 + 1));
  uVar35 = uVar8 & 0xff | 1;
  bVar13 = (byte)lVar10;
  uVar27 = (int)((uVar27 & 0xffffff00 |
                 (uint)(byte)(((byte)uVar27 >> (bVar21 & 7) | (byte)uVar27 << 8 - (bVar21 & 7)) << 1
                             )) - (int)lVar30) >> (bVar13 & 0x1f);
  uVar28 = (ushort)uVar27 >> 1;
  uVar17 = (ushort)lVar30;
  bVar21 = (char)(uVar40 >> 8) + bVar13;
  uVar20 = (ulong)CONCAT11(bVar21 + bVar13,(byte)uVar40);
  uVar50 = uVar40 & 0xffffffffffff0000 | uVar20;
  sVar18 = (short)uVar47;
  uVar37 = (ushort)uVar31 | 1 << ((ushort)(byte)uVar40 & 0xf);
  uVar24 = (ulong)((uVar32 & 0xffff0000 |
                   (uint)(ushort)(uVar37 & 0xff |
                                 (ushort)(byte)((char)((ulong)(uVar32 & 0xffff0000 | (uint)uVar37)
                                                      >> 8) + 0x44) << 8)) + 1) + 0xd3 +
           (ulong)(uVar27 & 0xffff0000 | (uint)(ushort)(uVar28 | uVar17 << 0xf) & 0xffffff00 |
                  (uint)(byte)((char)uVar28 - 1)) * 8;
  uVar41 = 0x3f;
  if (uVar35 != 0) {
    while (uVar35 >> uVar41 == 0) {
      uVar41 = uVar41 - 1;
    }
  }
  if (!SBORROW4(uVar7,1)) {
    uVar47 = uVar41 & 0xffffffff;
  }
  uVar9 = uVar9 + lVar30 + (ulong)((uint)uVar6 < 0x2f03104a) & 0xffffffffffffff00 | (ulong)!bVar53 |
          0xc000;
  uVar28 = 0;
  if (uVar17 != 0) {
    while ((uVar17 >> uVar28 & 1) == 0) {
      uVar28 = uVar28 + 1;
    }
  }
  lVar30 = uVar50 << 1;
  cVar36 = (char)lVar30;
  bVar13 = (byte)(uVar28 >> 8);
  bVar45 = (byte)((ulong)lVar30 >> 8);
  cVar5 = bVar13 - bVar45;
  uVar6 = (short)((CONCAT22(uVar16,(ushort)(byte)(uVar20 >> 8)) & 0x3f00ffff) % (uint)(ushort)uVar9)
          + 0x9168;
  if (bVar45 <= bVar13 && cVar5 != '\0') {
    uVar6 = (((ushort)uVar8 | 1) << 1 | uVar16 >> 0xf) - sVar18;
  }
  uVar28 = (uVar28 & 0xff | (ushort)(byte)(cVar5 - 1) << 8) >> (bVar21 & 0x3f);
  uVar16 = (ushort)uVar47 + 0xed4f;
  uVar31 = (uint)((ushort)uVar47 < 0x12b1);
  uVar32 = (uint)uVar9;
  uVar27 = uVar32 + 0xa53b75b7;
  uVar7 = uVar27 + uVar31;
  sVar18 = 0xf;
  if (uVar28 != 0) {
    while (uVar28 >> sVar18 == 0) {
      sVar18 = sVar18 + -1;
    }
  }
  uVar6 = ((short)uVar41 + 0x546c + (ushort)(0x5ac48a48 < uVar32 || CARRY4(uVar27,uVar31))) * 0x80 |
          uVar6 >> 9;
  uVar19 = uVar19 >> 1 | (uint)((uVar19 & 1) != 0) << 0x1f;
  uVar37 = (uVar16 | 0x800) >> 2 | uVar16 * 0x4000;
  uVar47 = uVar47 & 0xffff0000 | (ulong)uVar37;
  uVar32 = 0xc604a47c - uVar19;
  bVar13 = (char)uVar32 * '\x02';
  uVar32 = uVar32 & 0xffffff00;
  uVar27 = uVar32 | bVar13;
  bVar21 = (char)uVar24 - (char)(((int)uVar50 + 0xfbU >> 1 & 0xff & (uint)(byte)uVar35) >> 1);
  uVar8 = uVar24 & 0xffffffffffffff00 | (ulong)bVar21;
  uVar29 = 0x78a9 - uVar27;
  uVar31 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | 0xd51c0000;
  bVar42 = (byte)(((ulong)(long)(short)(uVar6 | 0x41c0) >> 1 & 0xff) << 1);
  uVar6 = CONCAT11((bVar45 | (byte)((ulong)(uVar19 + uVar6) >> 8)) + cVar36,cVar36) >>
          (bVar42 & 0x1f | 1);
  uVar19 = (uint)((uVar40 & 0xffffffffffff0000 | uVar20 & 0x7fffffffffff8000) << 1);
  bVar45 = bVar42 & 0x1f | 1;
  uVar9 = (ulong)(uVar31 >> bVar45 | uVar31 << 0x20 - bVar45) * -0x3b8eba27;
  uVar17 = (short)uVar29 << (bVar42 & 0x1f | 1);
  sVar26 = (short)uVar8;
  uVar31 = (int)(short)(uVar28 | 1 << ((uVar16 & 0x3c) >> 2)) * (int)sVar26;
  sVar18 = (short)(uVar31 >> 0x10);
  uVar22 = ((ulong)&stack0xffffffffffffff90 & 0xffffffff00000000 |
            (ulong)((int)register0x00000020 - 0x70U & 0xffff0000) |
           (ulong)(ushort)((short)register0x00000020 - 0x6fU ^ 1 << ((ushort)uVar24 & 0xf))) ^
           1 << ((long)sVar26 & 0x3fU);
  uVar31 = (uVar31 & 0xff00 | (uint)(byte)((byte)uVar31 | (sVar18 != 0 && sVar18 != -1))) +
           (int)uVar8;
  bVar21 = bVar21 & 0x1f;
  uVar44 = 0U >> bVar21 | uVar31 << 0x20 - bVar21;
  uVar33 = uVar31 ^ (uVar31 >> 0xb & 1) << 0xb;
  uVar7 = (int)(char)((uVar24 & 0xffffffffffffff00) >> 8) << 8 | 0x37adb392;
  uVar8 = 0;
  if (uVar47 != 0) {
    while ((uVar47 >> uVar8 & 1) == 0) {
      uVar8 = uVar8 + 1;
    }
  }
  uVar16 = (ushort)uVar7;
  sVar18 = (short)((uVar33 & 0xffff0000 |
                   (uint)CONCAT11((char)((ulong)uVar33 >> 8) + 'C',(char)uVar31)) * (uVar19 | uVar6)
                  >> 0x10);
  uVar24 = (CONCAT62((int6)sVar18,uVar17 & 0xff | uVar17 << 8) & 0xffffffff) *
           ((uVar40 & 0x7fff0000 | uVar20 & 0x7fffffffffff8000) << 1 | (ulong)uVar6);
  uVar38 = (short)uVar16 >> 1;
  uVar7 = uVar7 & 0xffff0000;
  bVar45 = (char)uVar44 - 0x31;
  uVar49 = (ushort)uVar44 & 0xff00 | (ushort)bVar45;
  uVar47 = (ulong)(uVar7 | (uint)uVar38) * -0x298c2bb5;
  sVar26 = (short)uVar9;
  auVar3 = ZEXT816((ulong)uVar27 << 0x3a | 0xc2491f1784deb6ce);
  auVar1 = CONCAT88(uVar24 >> 0x20 & 0xffff0000 | uVar9 & 0xffff,
                    uVar24 & 0xffffffff | (ulong)(uint)(sVar18 >> 0xf) << 0x20) &
           (undefined  [16])0xffffffffffffffff;
  auVar2 = auVar1 / auVar3;
  uVar28 = (ushort)uVar47 >> 0xc;
  uVar31 = SUB164(auVar1 % auVar3,0) * 0x8000;
  uVar47 = uVar47 & 0xffffffffffff0000;
  uVar12 = SUB166(auVar2 >> 0x10,0);
  bVar21 = (byte)((ulong)(ushort)(uVar6 << 4 | uVar28) >> 8);
  if (bVar21 < (byte)((ulong)uVar31 >> 8)) {
    uVar47 = uVar8 & 0xffff0000 | (ulong)(ushort)(((short)uVar8 - uVar37) * 0x20 | uVar16 >> 0xb);
  }
  uVar33 = uVar31 + 0xeb6d3c89;
  bVar42 = ((int)uVar33 < 0) << 7 | (uVar33 == 0) << 6 | (((bVar13 & 0xf) - 0xe & 0x10) != 0) << 4 |
           bVar53 << 2 | 2U | uVar31 < 0x1492c377;
  uVar16 = SUB162(auVar2,0) >> ((byte)uVar38 & 0x1f) & 0xff;
  uVar46 = (uint)(bVar25 >> 1) * -0x5bebb913 & 0x452a7eb4;
  uVar27 = (uVar29 & 0xffff0000 | (uint)(ushort)(uVar17 + 0x5c35)) + 0x1c8bb134;
  if (!bVar53) {
    uVar27 = (uint)uVar47;
  }
  uVar31 = (uVar33 & 0xffff0000 | (uint)CONCAT11(uVar31 >= 0x1492c377 && uVar33 != 0,(char)uVar33))
           + 0x745dabd4;
  uVar33 = uVar31 * 0x20000;
  uVar29 = (uint)uVar9 >> 0xf;
  uVar7 = (uVar7 | (uint)uVar38 & 0xffffff00 | (uint)(byte)((byte)uVar38 + 0x43)) + 1;
  uVar8 = (ulong)((int)CONCAT62(uVar12,uVar16 | (ushort)bVar42 << 8) + (uVar33 | uVar29));
  bVar25 = (byte)uVar7;
  uVar19 = (uVar19 | (ushort)(uVar6 << 4 & 0xff | uVar28 |
                             (ushort)(bVar21 & (byte)((ulong)uVar31 >> 8)) << 8)) >> (bVar25 & 0x1f)
  ;
  cVar5 = bVar42 + (byte)uVar29;
  uVar31 = uVar33 | uVar29 & 0xffffff00 | (uint)(byte)(bVar42 + 0x74 + CARRY1(bVar42,(byte)uVar29));
  if (SCARRY2(sVar26,0x3835) == SCARRY2(sVar26 + 0x3835,1)) {
    uVar8 = uVar47 & 0xffffffff;
  }
  uVar33 = (int)(short)uVar31 + (uVar44 & 0xff00 | (uint)bVar45);
  uVar32 = ~(uVar32 | (byte)(bVar13 + 0x62));
  uVar24 = (ulong)uVar31;
  if (0x194ae0e9 < uVar46) {
    uVar24 = uVar8;
  }
  uVar44 = uVar27 & 0xffff0000 | (uint)(ushort)((short)uVar27 + uVar49);
  uVar29 = uVar46 >> 0x15 | uVar46 << 0xb;
  bVar21 = (bVar25 & 0x1f) % 0x11;
  sVar43 = (short)uVar32;
  bVar13 = (byte)uVar16;
  bVar45 = (byte)uVar19;
  bVar42 = bVar45 ^ (bVar13 == bVar45) * (bVar45 ^ (byte)((ulong)uVar19 >> 8));
  bVar13 = bVar13 ^ (bVar13 == bVar45) * (bVar13 & bVar42);
  uVar8 = uVar47 >> 8 & 0xff;
  uVar6 = (ushort)uVar29 >> (bVar25 & 0x1f);
  uVar31 = uVar46 << 0xb & 0xffff0000;
  bVar45 = bVar25 & bVar13;
  lVar30 = 0x3fffffffffffffff;
  auVar3 = (CONCAT88(uVar24,CONCAT62(uVar12,uVar16 | (ushort)(byte)-cVar5 << 8) & 0xffffffffffffff00
                            | (ulong)bVar13) & (undefined  [16])0xffffffffffffffff) %
           ZEXT816((ulong)(uVar31 | (uint)uVar6) | 0xc000000000000000);
  uVar28 = (ushort)((uVar19 & 0xffffff00) >> 0x17);
  bVar13 = (byte)((uVar19 & 0xffffff00 | (uint)bVar42) >> 7);
  sVar18 = CONCAT11(SUB161(auVar3 >> 8,0),bVar13);
  uVar27 = uVar33 << (bVar45 & 0x1f) | uVar33 >> 0x20 - (bVar45 & 0x1f);
  sVar23 = (short)uVar8;
  uVar24 = ~(ulong)(uVar32 & 0xffff0000 |
                   (uint)(ushort)(sVar43 << bVar21 |
                                 (ushort)(CONCAT12((ushort)uVar33 < 0xff24,sVar43) >> 0x11 - bVar21)
                                 ));
  if (((ushort)(byte)-cVar5 << 8 & 0x400) != 0) {
    uVar44 = 0xffffffff;
  }
  uVar8 = uVar47 & 0xffffffffffff0000 | uVar8;
  if ((char)((ulong)(uint)(int)(char)bVar13 >> 8) == SUB161(auVar3,0)) {
    uVar8 = uVar24;
  }
  uVar31 = uVar31 | (uint)uVar6 & 0xffffff00 | (uint)(byte)((byte)uVar6 | bVar13);
  if (-1 < (long)uVar8) {
    uVar31 = uVar27;
  }
  uVar49 = (short)uVar49 >> (bVar45 & 0x1f);
  bVar45 = (char)bVar45 >> 1;
  uVar32 = uVar7 & 0xffff0000 |
           (uint)CONCAT11(((char)((ulong)uVar7 >> 8) + cVar5) - (cVar5 != '\0'),bVar25) & 0xffffff00
           | (uint)bVar45;
  uVar31 = uVar31 + (int)sVar23;
  bVar42 = (byte)((uVar49 & 0xff) >> 4) | (char)uVar49 << 5;
  lVar10 = (ulong)(ushort)((char)bVar13 >> 7) * 0x10000 * uVar24;
  bVar25 = ((byte)((int)CONCAT71((int7)(int3)(uVar29 >> 8),(char)(uVar46 >> 0x15) << 1) <<
                  (bVar45 & 0x1f)) | (byte)(CONCAT22(uVar28,sVar18) >> 0x20 - (bVar45 & 0x1f))) & 2;
  bVar21 = (byte)uVar24 + bVar25;
  if (!CARRY1((byte)uVar24,bVar25) && bVar21 != 0) {
    lVar30 = CONCAT62(0x3fffffffffff,(short)uVar32);
  }
  uVar47 = 0U >> (bVar45 & 0x3f) |
           (ulong)(ushort)(uVar49 & 0xff00 | (ushort)bVar42) << 0x40 - (bVar45 & 0x3f);
  uVar40 = -~(uVar9 & 0xffffffffffff0000 | (ulong)(ushort)(sVar26 + 0x3836)) | 0xc000;
  uVar7 = (uint)(ushort)uVar40;
  uVar19 = CONCAT22((short)((ulong)(lVar10 * lVar10) >> 0x20),(short)uVar47);
  return CONCAT88(*(undefined8 *)
                   ((uVar22 & 0xffffffffffff0000 | (ulong)((short)uVar22 + 1U & 0x7fff)) + 0x58),
                  (uVar47 & 0xffffffffffff0000 | (ulong)(ushort)(uVar19 / uVar7)) +
                  (ulong)CONCAT22(uVar28,-sVar18) + (ulong)uVar32 + (ulong)(ushort)(uVar19 % uVar7)
                  + ((uVar8 << 1) >> 0x3c | (ulong)uVar32 << 4) + (ulong)(uVar27 + 0x39444cdc) +
                  lVar30 + (long)(char)uVar31 + uVar40 +
                  (ulong)((uVar44 & 0xffff0000 | uVar44 >> 1 & 0x7fff) << 0xb) + (long)sVar23 +
                  (uVar24 & 0xffffffffffffff00 | (ulong)bVar21) + (ulong)uVar31 +
                  (ulong)(ushort)(uVar49 & 0xff00 |
                                 (ushort)(byte)(bVar42 >> (bVar45 & 7) | bVar42 << 8 - (bVar45 & 7))
                                 ) + 0x6cd2998cb4ccf39f);
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


