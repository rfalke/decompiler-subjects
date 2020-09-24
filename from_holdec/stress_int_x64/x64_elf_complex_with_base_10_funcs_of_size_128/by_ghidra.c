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



// WARNING: Removing unreachable block (ram,0x0040131a)
// WARNING: Removing unreachable block (ram,0x00401313)
// WARNING: Removing unreachable block (ram,0x00401337)

undefined  [16] log_size_7_var_000(void)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ushort uVar5;
  char cVar6;
  short sVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  bool in_PF;
  
  uVar1 = 0x1f;
  while (0x4e6bce6eU >> uVar1 == 0) {
    uVar1 = uVar1 - 1;
  }
  uVar10 = 0xba93213a;
  if (in_PF) {
    uVar10 = 0xb2830000;
  }
  uVar4 = (uVar10 | 0xcd53cf03) & 0xffff0000;
  _uVar2 = 0x3f;
  uVar2 = 0x3f;
  if (uVar4 != 0) {
    while (uVar2 = (uint)_uVar2, uVar4 >> _uVar2 == 0) {
      _uVar2 = _uVar2 + -1;
    }
  }
  uVar3 = (((ulong)uVar2 & 0x3fffffff) << 0x20 | 0xc02150b7) / 0xc02150b7;
  sVar7 = (short)((ulong)uVar1 + 0x3c807806f1400003);
  uVar5 = CONCAT11(((char)uVar3 >> 0x11) + -0x5a,0xf);
  uVar8 = (ulong)(ushort)(sVar7 + 0xcf03U) | 0x6f0f964cd530000;
  uVar9 = 0x378a4ee1;
  if ((ushort)(sVar7 + 0xcf03U) == 0) {
    uVar9 = uVar3 & 0xffff0000 | 0xffa6;
  }
  uVar1 = ((uint)((ulong)uVar1 + 0x3c807806f1400003) & 0xffff0000 | 0xcf03) - (int)uVar8;
  cVar6 = (char)uVar1;
  return CONCAT88(*(undefined8 *)(((ulong)&stack0xffffffffffffff90 & 0xdfffffffffffffff) + 0x58),
                  (uVar3 & 0xffff0000) + ((ulong)uVar5 & 0xff) +
                  (CONCAT62(0x6c1b47fc67d1,uVar5) & 0xffffffffffffff00 ^ 0xac20160042f8a900) +
                  (((ulong)(long)sVar7 >> 1) * 8 + 0x9f41ac7c & 0xffffffff00000000) +
                  (ulong)(uVar1 & 0xffffff00 | (uint)(byte)(cVar6 << 1 | cVar6 < '\0')) + uVar8 +
                  uVar9 * 2 + ((ulong)(long)sVar7 >> 2) +
                  (ulong)((uVar10 | 0xcd53cf03) & 0xffff0000) + 0x3913d49d7aae8424);
}



undefined  [16] log_size_7_var_001(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auVar1 [16];
  byte bVar2;
  char cVar3;
  ushort uVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  short sVar9;
  ushort uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool in_PF;
  
  uVar10 = 0;
  while ((0x5f64U >> uVar10 & 1) == 0) {
    uVar10 = uVar10 + 1;
  }
  lVar11 = CONCAT62(0x5cc3b4f2cd36,uVar10 & 0xffdf) * 0x70c39d2a;
  uVar10 = (short)lVar11 << 0xb | 0x3aa;
  uVar14 = (((uint)lVar11 & 0xffff0000 | (uint)uVar10 | 0xed9755c) & 0x7fff8000) << 1;
  uVar13 = uVar14 | 0x6301;
  uVar12 = ((uint)(ushort)(uVar10 + 0xe9f1) | 0x3edb0000) + 0x881f5ee2;
  lVar11 = 0;
  while ((0xc2960679ce3336b4U >> lVar11 & 1) == 0) {
    lVar11 = lVar11 + 1;
  }
  sVar9 = (short)uVar12 * 0x526c;
  if (in_PF) {
    uVar13 = uVar14 | 0x6320;
  }
  _cVar3 = (ulong)!in_PF | 0xc9272100;
  lVar11 = 0;
  while ((0xffffffa8U >> lVar11 & 1) == 0) {
    lVar11 = lVar11 + 1;
  }
  auVar1 = ((ZEXT1016(CONCAT28(0xcd3,0xd22cd323311920e0)) & (undefined  [16])0xffffffffffffffff |
            (undefined  [16])0xc000000000000000) & (undefined  [16])0xffffffffffffffff) /
           ZEXT816(0xd22cd323311920e0);
  uVar4 = SUB162(auVar1,0) & 0x3fff;
  uVar10 = uVar4 / 0xe8;
  cVar3 = (char)((ulong)(ushort)(uVar10 | uVar4 % 0xe8 << 8) >> 8);
  uVar5 = SUB168(auVar1,0) & 0xffffffffffff0000 |
          (ulong)(ushort)(uVar10 | (ushort)(byte)(cVar3 + 1) << 8);
  uVar8 = 0xfffffe78;
  if (!SCARRY1(cVar3,'\x01')) {
    uVar8 = 0x3fffffffffff0001;
  }
  uVar14 = uVar13 & 0xffffff00 | (uint)(byte)((char)uVar13 << 1);
  uVar7 = _cVar3 ^ (ulong)(uVar5 == _cVar3) * (_cVar3 ^ uVar5);
  uVar5 = uVar5 ^ (ulong)(uVar5 == _cVar3) * (uVar5 & uVar7);
  bVar6 = (byte)uVar7;
  bVar2 = (bVar6 & 0x1f) % 9;
  cVar3 = (char)uVar5;
  _cVar3 = uVar5 & 0xffffffffffffff00 |
           (ulong)(byte)(cVar3 << bVar2 |
                        (byte)(CONCAT11(0xfffe < uVar14 || 0xfffffffe < uVar14 - 0xffff,cVar3) >>
                              9 - bVar2));
  uVar10 = 0;
  uVar4 = (ushort)_cVar3;
  if (uVar4 != 0) {
    while ((uVar4 >> uVar10 & 1) == 0) {
      uVar10 = uVar10 + 1;
    }
  }
  uVar13 = 0x1f;
  while (0xfa3314acU >> uVar13 == 0) {
    uVar13 = uVar13 - 1;
  }
  return CONCAT88(param_3,_cVar3 + (uVar8 & 0xffffffffffff0000 | (ulong)CONCAT11(0x40,(char)uVar8))
                          + uVar7 + (ulong)(uVar13 & 0xffff0000 |
                                           (uint)CONCAT11((char)((ulong)uVar13 >> 8) <<
                                                          (bVar6 & 0x1f),(char)uVar13)) +
                          (ulong)((CONCAT22(0xff,sVar9) & 0xffffff00 | (uint)(byte)~(byte)sVar9) <<
                                 1) + ((ulong)uVar10 | 0x620000) + (ulong)uVar12 +
                          ((long)(ulong)(uVar14 - 0xfffe) >> (bVar6 & 0x3f)) + -0x4000000288a73cc8);
}



// WARNING: Removing unreachable block (ram,0x004018bc)
// WARNING: Removing unreachable block (ram,0x004018a6)
// WARNING: Removing unreachable block (ram,0x00401833)
// WARNING: Removing unreachable block (ram,0x004018e9)

undefined  [16] log_size_7_var_002(void)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  byte bVar4;
  ulong uVar5;
  char cVar8;
  uint uVar6;
  ulong uVar7;
  byte bVar9;
  long lVar10;
  char cVar11;
  uint uVar12;
  long lVar13;
  char cVar14;
  ushort uVar15;
  ushort uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  
  lVar13 = 0x3f;
  while (0x4c7ccfe768b6c589U >> lVar13 == 0) {
    lVar13 = lVar13 + -1;
  }
  auVar2 = (CONCAT88(0x29ebafb31ce20152,0x6151513c) | (undefined  [16])0xb3ab2bf900000000) &
           (undefined  [16])0xffffffffffffffff;
  cVar14 = 'W';
  uVar6 = SUB164(auVar2 / ZEXT816(0xc62108b125394349),0);
  uVar1 = uVar6 + 0xceb88206;
  uVar15 = (ushort)uVar1 >> 0xf | 0xa1a4;
  uVar18 = ((uint)(uVar6 < 0x31477dfa && uVar1 != 0) | 0xaf835800) * 0x7621350f ^ 0x68b6c589;
  uVar6 = (uint)(SUB168(auVar2 % ZEXT816(0xc62108b125394349),0) >> 1);
  uVar12 = uVar6 + 0x1f0a1408;
  bVar20 = uVar12 != 0;
  uVar7 = (ulong)(uVar1 & 0xffff0000 | (uint)CONCAT11((char)((ulong)uVar1 >> 8) << 1,(char)uVar1));
  if (bVar20) {
    uVar7 = 0xa4b69745d94fcdc0;
  }
  if (!bVar20 || (SCARRY4(uVar6,0x1f0a1407) != SCARRY4(uVar6 + 0x1f0a1407,1)) != (int)uVar12 < 0) {
    uVar7 = 0x3fffffffffffffff;
  }
  if ((0xe0f5ebf8 < uVar6 || uVar6 + 0x1f0a1407 == -1) || !bVar20) {
    cVar14 = -0x40;
  }
  uVar17 = uVar18 << 0x1f | 0x345b62c4;
  cVar8 = (char)(uVar7 >> 8) + 'I';
  uVar16 = (ushort)(byte)((char)uVar15 - (char)(uVar17 >> 0x18)) | 0xa100;
  uVar1 = CONCAT22(0x2f5f,uVar15) << 8;
  uVar6 = uVar1 | (byte)(((char)uVar7 == '/') * (cVar14 * '\x02' ^ 0x2fU) ^ 0x2f);
  lVar10 = ((ulong)CONCAT11((byte)uVar12 ^ 0xcd,0xc0) & 0xffffffffffffff0f | 0xa4b69745d94f0000) +
           lVar13 + -0x3aee80fde009a06d;
  bVar9 = (byte)lVar10;
  bVar4 = bVar9 & 0x1f;
  uVar5 = ((ulong)uVar18 & 0xff) << 0x18;
  uVar19 = (uint)(uVar5 >> bVar4) | (uint)(uVar5 << 0x21 - bVar4);
  uVar18 = (uint)(ushort)-uVar16 | 0x2f5f0000;
  if (0 < (short)uVar16) {
    uVar6 = uVar1 & 0xffff0000 | 0xff76;
  }
  uVar1 = (int)(lVar13 + -0x3aee80fde009a06d) - uVar18;
  lVar13 = -0x3aee80fde0092795;
  if (uVar1 != 0) {
    lVar13 = 0xdd2bcd71;
  }
  uVar15 = CONCAT11((char)(CONCAT11(1,(char)(uVar12 >> 8)) >> 1),0x53) >> 1;
  uVar6 = uVar6 & 0xffffff00 | (uint)(byte)((byte)uVar6 & (byte)uVar19);
  lVar3 = SUB168(SEXT816(-0x39def74edac6f4cf) * SEXT416(-0x676b9138) >> 0x40,0);
  bVar20 = lVar3 != 0 && lVar3 != -1;
  cVar11 = (char)uVar15;
  cVar14 = cVar8 + cVar11;
  return CONCAT88(*(undefined8 *)
                   (((ulong)&stack0xffffffffffffff90 & 0xffffffff00000000 |
                    (ulong)((int)register0x00000020 - 0x70U & 0xfffbffff)) + 0x58),
                  (ulong)((((uint)(uVar7 >> 8) & 0xffffff00 | (uint)(byte)(cVar14 + bVar20)) << 8)
                          >> 1 | 0x80000000) +
                  ((ulong)CONCAT11(0x5e,(char)((ulong)uVar12 >> 8) - 0x38U | 0xc) | 0x12c50000) +
                  ((ulong)(uVar12 & 0xffff0000 | (uint)(uVar15 | 0x8000)) & 0xffffffffffffff00 |
                  (ulong)(SCARRY1(cVar8,cVar11) == SCARRY1(cVar14,bVar20))) +
                  (ulong)(uVar18 - 0x770) + (~(1 << ((ulong)uVar1 & 0x3f)) & 0xad540d227b3cc48U) +
                  lVar10 + (ulong)uVar18 + (ulong)uVar6 +
                  ((ulong)((uint)(ushort)((ushort)((uVar17 >> 0x18 | 0x5b00) >> 1) | 0xcd71) |
                          0xc4620000) << (bVar9 & 0x3f)) + (ulong)(uVar6 << 1) * 0x40000 +
                  (ulong)(uVar19 & 0xffff0000 | (uint)(ushort)((ushort)uVar19 >> 1 | 0x8000)) +
                  lVar13 * 3 + 0x3014ba52f80bf0eb);
}



// WARNING: Removing unreachable block (ram,0x00401ba6)
// WARNING: Removing unreachable block (ram,0x00401afe)
// WARNING: Removing unreachable block (ram,0x00401aa6)
// WARNING: Removing unreachable block (ram,0x00401afa)
// WARNING: Removing unreachable block (ram,0x00401b23)
// WARNING: Removing unreachable block (ram,0x00401c21)
// WARNING: Removing unreachable block (ram,0x00401b6f)

undefined  [16] log_size_7_var_003(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auVar1 [16];
  ulong uVar2;
  ushort uVar3;
  
  auVar1 = (ZEXT416(0x87b8865d) * ZEXT816(0x1f7a540455298ed5) & (undefined  [16])0xffffffffffffffff)
           * ZEXT816(0x57daa51d3e597740);
  uVar3 = SUB162(auVar1,0) & 0x3fff;
  uVar2 = (SUB168(auVar1,0) & 0xffffffffffff0000 | (ulong)(ushort)(uVar3 / 0xfb | uVar3 % 0xfb << 8)
          ) * 2;
  return CONCAT88(param_3,uVar2 + (uVar2 & 0xffff) +
                          (ulong)(0xe173c476 - (uint)(SUB168(auVar1 >> 0x40,0) != 0)) +
                          0x3583ec264344af70);
}



// WARNING: Removing unreachable block (ram,0x00401e90)

undefined  [16] log_size_7_var_004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  long lVar6;
  uint5 uVar7;
  uint uVar8;
  unkuint9 Var9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  byte bVar14;
  ulong uVar15;
  ushort uVar16;
  byte bVar17;
  
  iVar3 = 0;
  while ((0xe373c033U >> iVar3 & 1) == 0) {
    iVar3 = iVar3 + 1;
  }
  sVar5 = 0xf;
  while (0xea32U >> sVar5 == 0) {
    sVar5 = sVar5 + -1;
  }
  uVar15 = CONCAT62(0x40533ca67dd1,sVar5) & 0xffffffffffffff00;
  uVar2 = uVar15 - 0x2ff8e34;
  uVar4 = 0;
  while ((0xab8d9e87U >> uVar4 & 1) == 0) {
    uVar4 = uVar4 + 1;
  }
  uVar16 = (short)uVar2 + 0x72b3;
  _uVar16 = (uint)(uVar2 & 0xffffffffffff0000) | (uint)uVar16;
  bVar10 = (char)((uVar4 | 0x40000) >> 10);
  bVar10 = bVar10 << 1 | bVar10 < '\0';
  bVar14 = ((SCARRY8(uVar15,-0x2ff8e34) == SCARRY8(uVar2,0)) + bVar10) - 1;
  lVar6 = (ulong)(uVar4 << 0x17 | (uVar4 & 0xfc000000) >> 10 |
                 (uint)CONCAT11((char)((ulong)(uVar4 << 0x17 | (uVar4 & 0xfffc0000 | 0x40000) >> 10)
                                      >> 8) >> 1,-bVar10)) * 0xb33e0de0;
  sVar5 = (short)((ulong)lVar6 >> 0x20);
  uVar15 = CONCAT62(0xe373,uVar16);
  iVar3 = 0x1f;
  while (0x9aU >> iVar3 == 0) {
    iVar3 = iVar3 + -1;
  }
  uVar11 = (ulong)(uint)(int)(short)lVar6;
  uVar4 = iVar3 + _uVar16;
  uVar12 = uVar11 * -0x11b0b16098;
  uVar7 = CONCAT14(5,_uVar16) & 0x1ffffffff;
  _uVar16 = (int)uVar7 << 8;
  uVar16 = (ushort)_uVar16;
  uVar13 = (uint)CONCAT62(SUB166(SEXT816((long)uVar11) * SEXT816(-0x11b0b16098) >> 0x50,0),0xff9f);
  uVar13 = uVar13 ^ (uVar13 >> 0xe & 1) << 0xe;
  uVar8 = _uVar16 & 0xffff0000 |
          (uint)(ushort)(uVar16 >> 10 | (uVar16 | (ushort)(uVar7 >> 0x19)) << 6);
  _uVar16 = (int)sVar5 + uVar8;
  bVar1 = (uVar15 & 0xb8791848) != 0 && -1 < (int)uVar15;
  bVar17 = (byte)uVar4;
  bVar10 = (byte)(uVar13 >> 8);
  Var9 = CONCAT18(bVar10 < 0x9f,(long)sVar5) & 0xffffffff;
  return CONCAT88(param_3,uVar12 + ((ulong)(Var9 >> 0x18) | (long)Var9 << 0x29) +
                          ((ulong)bVar1 | 0xffffffee4f4e9f00) +
                          ((ulong)uVar13 & 0xffffffffffff0000 | (ulong)CONCAT11(bVar10 + 0x61,0x9f))
                          + ((ulong)&stack0xffffffffffffff90 & 0xffff0000 | uVar12 >> 8 & 0xff) +
                          ((ulong)(((uint)(ushort)(sVar5 * 8 + 0x1279) | 0x9ca60000) ^ 1) |
                          0x4f6b63a200000000) +
                          (CONCAT62(0x87f9ca1d0660,(short)(char)bVar14) & 0xffffffffffffff00 |
                          (ulong)(byte)(bVar14 >> 1 | CARRY4((int)sVar5,uVar8) << 7)) * 2 + uVar15 +
                          (uVar2 & 0xffffffffffff0000 | 0x9a) +
                          (ulong)(uVar4 & 0xffffff00 |
                                 (uint)(byte)(bVar17 << bVar1 | bVar17 >> 8 - bVar1)) +
                          (ulong)((_uVar16 >> 1 & 0xffff | (_uVar16 >> 0x11) << 0x10) ^ 0x9a) +
                          0x604dcb8c4770ed15);
}



// WARNING: Removing unreachable block (ram,0x00402067)
// WARNING: Removing unreachable block (ram,0x0040201e)
// WARNING: Removing unreachable block (ram,0x004020d5)

undefined  [16] log_size_7_var_005(void)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  int iVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  ushort uVar7;
  ushort uVar8;
  long lVar9;
  byte bVar10;
  uint uVar11;
  ushort uVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  bool bVar19;
  bool in_PF;
  
  lVar9 = -0x56de2baf0b7045bd;
  if (in_PF) {
    lVar9 = 0x57cc;
  }
  uVar16 = 0xdecdabe6;
  uVar7 = (ushort)(lVar9 << 1) | 0x279f;
  if (-1 < (short)uVar7) {
    uVar16 = 0xdecd57cc;
  }
  lVar9 = SUB168(SEXT816(0x7778c6ab32db8dd9) * SEXT816(0x1c9df1b49ef8ab60) >> 0x40,0);
  bVar10 = (lVar9 != 0 && lVar9 != -1) | 0x52;
  uVar5 = uVar7 & 0xff;
  uVar12 = 0x884 >> ((byte)uVar5 & 0x1f);
  uVar8 = (uVar5 | (ushort)(byte)((ulong)(ushort)(uVar5 | (ushort)(byte)(((char)((ulong)uVar7 >> 8)
                                                                         - bVar10) - 1) << 8) >> 8)
                   << 8) ^ 0xd300;
  uVar17 = ((ulong)(uVar16 >> ((byte)uVar7 & 0x3f)) - 0x4892c667 >> 1) - 0x5dcd4ef3 &
           0xffffffffffffff00 | (ulong)uVar12 & 0xff;
  lVar9 = 0x3f;
  while (0xb655e17358fd5a22U >> lVar9 == 0) {
    lVar9 = lVar9 + -1;
  }
  uVar13 = (ushort)bVar10 | 0xc5b1;
  bVar10 = ((byte)uVar5 & 0x1f) % 0x11;
  uVar7 = uVar8 & 0xff;
  uVar4 = (uint)(ushort)((uVar12 << bVar10 | uVar12 >> 0x11 - bVar10) * -0x4812);
  bVar19 = (byte)((ulong)(ushort)(uVar7 | (ushort)SUB161(SEXT816(0x7778c6ab32db8dd9) *
                                                         SEXT816(0x1c9df1b49ef8ab60) >> 0x40,0) << 8
                                 ) >> 8) < 0x21;
  bVar10 = (byte)uVar7;
  uVar14 = (uint)CONCAT71((int7)((ulong)lVar9 >> 8),0x68) >> (bVar10 & 0x1f);
  uVar16 = uVar14 << 1;
  uVar15 = (0x46afc7f2 - (uint)bVar19) * 2 | (uint)uVar17 >> 0x1f;
  uVar16 = uVar16 & 0xffffff00 | uVar16 & 0xff | (uint)((int)uVar14 < 0);
  iVar3 = (int)((ulong)((long)(int)((uVar4 | 0x50c10000) >> 4 | uVar4 << 0x1c) * -0x728287e0) >>
               0x20);
  uVar7 = 1 << ((ushort)(byte)((ulong)uVar8 >> 8) & 0xf) | 0x85b;
  if (iVar3 == 0 || iVar3 == -1) {
    uVar7 = 8;
  }
  uVar14 = (uint)(uVar13 >> 1);
  uVar4 = uVar15 + ((uint)(SBORROW8(-0xfe3c589b950380e,(ulong)bVar19) != false) ^ 0x6d0c5100);
  uVar6 = ((uint)(ushort)(uVar13 + (0x4000 >> (bVar10 & 0x1f))) | 0xbb610000) >> 6;
  uVar18 = uVar17 | 0xc000000000000000;
  auVar1 = ZEXT1216(CONCAT48(uVar4 + 0xe995d3cd + uVar6 * 4,
                             (long)((ulong)(ushort)((short)uVar17 * -0x6dd0) | 0xc639a6fd124d0000)
                             >> 0x26)) & (undefined  [16])0xffffffffffffffff;
  auVar2 = auVar1 % ZEXT816(uVar18);
  uVar11 = uVar14 - 1;
  return CONCAT88(*(undefined8 *)
                   (((ulong)&stack0xffffffffffffff90 & 0xffffffffffff0000 |
                    (ulong)(ushort)((short)register0x00000020 - 0x6f)) + 0x58),
                  SUB168(auVar1 / ZEXT816(uVar18),0) +
                  ((ulong)((uint)uVar7 | 0x60400000) - (ulong)uVar14) +
                  (ulong)(uVar11 + SUB164(auVar2,0)) + SUB168(auVar2,0) + (ulong)uVar11 +
                  (ulong)uVar6 +
                  ((ulong)(ushort)((ushort)(byte)((char)(0x31U >> (bVar10 & 0x1f)) >> 0x14) | 0x9900
                                  ) | 0x1c9df1b49ef80000) +
                  ((ulong)uVar16 & 0xffffffffffff0000 | (ulong)((ushort)uVar16 & 0xff23)) +
                  (ulong)uVar15 + (ulong)uVar4 + uVar18 + -0x587563444c3e10fc);
}



// WARNING: Removing unreachable block (ram,0x0040246d)
// WARNING: Removing unreachable block (ram,0x00402380)
// WARNING: Removing unreachable block (ram,0x00402363)
// WARNING: Removing unreachable block (ram,0x0040239f)
// WARNING: Removing unreachable block (ram,0x004024c1)

undefined  [16] log_size_7_var_006(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  bool in_PF;
  
  uVar3 = 0x9df6264;
  lVar8 = 0;
  while ((0x26940609U >> lVar8 & 1) == 0) {
    lVar8 = lVar8 + 1;
  }
  uVar5 = (uint)lVar8 ^ 0xc488f848;
  if (uVar5 == 0) {
    uVar3 = 0x9dfdce1;
  }
  uVar6 = (ulong)uVar5 - 0xfec89710;
  uVar2 = uVar6 >> 0x1e;
  uVar7 = 0xda206238;
  if (uVar3 < 0x51a3a0a2) {
    uVar7 = 0xda200000;
  }
  uVar4 = (ushort)uVar2;
  iVar1 = (uint)uVar4 * (uint)uVar4;
  uVar6 = uVar6 << 0x22 | uVar2 & 0xffffffffffff0000 | (ulong)(ushort)iVar1;
  uVar2 = uVar6 + 0x4ef7d65de;
  lVar8 = 0xfec89710;
  if (in_PF) {
    lVar8 = 0xa1adc2c2;
  }
  return CONCAT88(param_3,uVar6 + (uVar7 & 0xffffffffffff0000 | (ulong)(ushort)((uint)iVar1 >> 0x10)
                                  ) + lVar8 + (ulong)uVar3 +
                          (uVar2 & 0xffffffffffff0000 | uVar2 >> 2 & 0x3fff) + -0x6b8136aa87b42100);
}



undefined  [16] log_size_7_var_007(void)

{
  ulong uVar1;
  undefined auVar2 [16];
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ushort uVar8;
  ulong uVar9;
  byte bVar10;
  ushort uVar11;
  ushort uVar12;
  long lVar13;
  uint6 uVar15;
  ulong uVar14;
  ushort uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  byte bVar21;
  uint uVar22;
  ulong uVar23;
  bool in_PF;
  
  uVar23 = 0xc61c8693b252b0cf;
  uVar22 = 0;
  while ((0xe065fe00U >> uVar22 & 1) == 0) {
    uVar22 = uVar22 + 1;
  }
  auVar2 = SEXT816(0x2f87c40480002321) * SEXT816(0x372e1f7e18203b2a);
  lVar13 = SUB168(auVar2 >> 0x40,0);
  if (lVar13 != 0 && lVar13 != -1) {
    uVar22 = uVar22 & 0xffff0000 | 0xb0cf;
  }
  if (!in_PF) {
    uVar23 = 0x56c52d52;
  }
  uVar11 = SUB162(auVar2 >> 0x40,0);
  uVar15 = SUB166(auVar2 >> 0x50,0);
  uVar8 = (ushort)CONCAT71(0x78482eaf391d48,in_PF);
  uVar12 = uVar11 & 0xff | (uVar11 >> 9) << 8;
  bVar21 = '*' - (char)uVar23 >> 6;
  uVar16 = (ushort)(uVar8 == 0xe556) * 0x5599 ^ 0xe556;
  uVar11 = (short)uVar22 + 0x78fa;
  uVar6 = (uint)(byte)(((byte)uVar16 ^ bVar21) + (char)uVar11);
  uVar9 = ((ulong)(ushort)((uVar8 ^ (ushort)(uVar8 == 0xe556) * (uVar8 & uVar16)) - 1) | 0x391d0000)
          ^ 0x80000000000000;
  uVar1 = 0;
  if (uVar9 != 0) {
    while ((uVar9 >> uVar1 & 1) == 0) {
      uVar1 = uVar1 + 1;
    }
  }
  uVar5 = ((uint)uVar16 & 0xffffff00 | 0x290000 | uVar6) >> 1;
  uVar17 = ((ulong)uVar22 & 0xffffffffffff0000 | (ulong)uVar11) ^ 0xffffffffc9ffa85a;
  uVar9 = uVar9 * 0xfbf8188;
  uVar7 = (CONCAT62(uVar15,uVar12) & 0xffffffff) >> 1;
  uVar3 = uVar7 & 0x7fff;
  uVar18 = (int)CONCAT62(0x19a736232a5a,(uVar12 << 1) >> 0xf | 0x1ee) << 1 |
           (uint)(uVar1 & 0xffffffffffff0000) >> 0x1f;
  uVar22 = (uint)uVar9;
  bVar10 = (byte)uVar3;
  uVar20 = SEXT14(SUB161(auVar2 >> 0x40,0));
  uVar19 = uVar18 ^ (uint)(uVar22 == uVar18) * (uVar18 ^ (uint)uVar23);
  uVar3 = (long)(int)(((int)uVar22 >> 0x1f) - (int)uVar17 & 0xffff0000U | (uint)(byte)(uVar3 >> 8))
          * -0x345bfba6;
  uVar14 = uVar3 & 0xffffffff;
  iVar4 = (int)(uVar3 >> 0x20);
  uVar3 = (ulong)uVar20 << 0x40 - (bVar10 & 0x3f);
  uVar9 = uVar9 & 0xffffffff00000000 |
          (ulong)(uint)(int)(short)((ushort)uVar9 ^
                                   (ushort)(uVar22 == uVar18) * ((ushort)uVar9 & (ushort)uVar19));
  uVar22 = ((uint)bVar21 << (bVar10 & 0x3f) | (uint)(bVar21 >> 0x40 - (bVar10 & 0x3f))) >>
           (bVar10 & 0x1f);
  uVar9 = uVar9 ^ (ulong)(uVar9 == uVar23) *
                  (uVar9 & (uVar23 ^ (ulong)(uVar9 == uVar23) * (uVar23 ^ uVar22)));
  uVar23 = (ulong)(uVar22 & 0xffffff00 | (uint)(byte)(uVar17 | 0x93ee45b4)) + 0x2229f6e1;
  return CONCAT88(*(undefined8 *)
                   ((((ulong)&stack0xffffffffffffff90 ^ 0x80000000000000) & 0xffffffffffff0000 |
                    (ulong)(ushort)((short)register0x00000020 - 0x6f)) + 0x58),
                  uVar9 + (uVar5 | uVar6 << 0x1f) +
                  (((ulong)uVar15 & 0xffff) << 0x10 |
                  (ulong)(ushort)(((ushort)uVar7 & 0x7f00 |
                                  (ushort)(byte)(bVar10 << 6 | bVar10 >> 2)) & (ushort)uVar5)) +
                  uVar14 + (uVar14 << 0x20) + (uVar23 & 0xffff) +
                  ((ulong)(uVar19 & 0xffffff00 |
                          (uint)(byte)((byte)uVar19 >> 1 | (iVar4 != 0 && iVar4 != -1) << 7)) &
                  0xffff) + (ulong)(uint)(int)(short)uVar9 + lVar13 +
                  ((uVar1 & 0xffffffffffff0000) >> 0xf | (uVar17 & 0xff) << 0x32) +
                  ((uVar17 | 0x93ee45b4) & 0xffffffffffffff00 | (ulong)(byte)uVar22) +
                  (uVar3 & 0xffffffff00000000 |
                  (ulong)((uVar20 >> (bVar10 & 0x3f) | (uint)uVar3) & 0xfffff7ff)) + uVar23 +
                  -0x443c79db290c90ff);
}



undefined  [16] log_size_7_var_008(void)

{
  long lVar1;
  undefined auVar2 [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ushort uVar7;
  ushort uVar8;
  ulong uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ushort uVar22;
  ushort uVar23;
  int iVar24;
  short sVar25;
  bool in_PF;
  bool bVar26;
  
  uVar3 = (int)CONCAT62(0xb74310877501,((ushort)!in_PF << 8 | 0xe0) ^ 0x35) << 1;
  uVar11 = uVar3 | 1;
  uVar20 = 0x3f;
  while (0x68d9c5ed94da49ffU >> uVar20 == 0) {
    uVar20 = uVar20 - 1;
  }
  uVar17 = CONCAT62(0xabf118d7448b,0xde80 >> ((byte)uVar11 & 0x1f));
  auVar2 = ZEXT816(uVar20) * ZEXT816(uVar17);
  uVar20 = ((ulong)((SUB164(auVar2 >> 0x48,0) & 0x3fffff) << 8) << 0x20 |
           SUB168(auVar2,0) & 0xffffffff) / 0xfba58c1d;
  uVar22 = (ushort)uVar20 & 0xff;
  lVar1 = (ulong)uVar11 * 3 + 0xf4;
  uVar18 = (uVar17 & 0xffffffff) - (ulong)uVar11;
  uVar21 = 0xb8fc6bb81c693c29;
  uVar8 = uVar22 * 2 + 0x25cf & 0xf;
  uVar7 = uVar22 & ~(1 << uVar8);
  uVar9 = uVar20 & 0xffffffffffff0000 | (ulong)SUB164(auVar2 >> 0x20,0) << 0x20;
  _uVar7 = uVar9 | uVar7;
  uVar6 = (ulong)((uVar18 >> 1 & 1) != 0) | 0x13ff26ced8914000;
  uVar17 = uVar6 << 1;
  uVar20 = 0x3f;
  if (_uVar7 != 0) {
    while (_uVar7 >> uVar20 == 0) {
      uVar20 = uVar20 - 1;
    }
  }
  lVar19 = 0;
  uVar23 = 0;
  if (uVar6 != 0) {
    while (uVar23 = (ushort)lVar19, (uVar17 >> lVar19 & 1) == 0) {
      lVar19 = lVar19 + 1;
    }
  }
  uVar14 = (ushort)uVar11 ^ 1 << (uVar23 & 0xf);
  uVar16 = -0x26a22604 >> ((byte)uVar23 & 0x1f);
  bVar10 = (byte)uVar23 & 0xf;
  uVar11 = (uint)(ushort)((short)lVar1 - 1);
  cVar13 = (char)uVar14;
  sVar25 = (short)uVar17;
  lVar19 = -CONCAT62((int6)(((ulong)(uint3)(((uint3)(uVar18 >> 8) >> 1 |
                                            (uint3)(((uint)((uVar22 >> uVar8 & 1) != 0) << 0x1f) >>
                                                   8)) >> 1) << 8) >> 0x10),0x8bd);
  if (!in_PF) {
    uVar21 = (ulong)uVar16;
  }
  uVar15 = (uint)lVar1 & 0xffff0000 | uVar11 & 0xfffffffe;
  lVar1 = 0x3f;
  if (uVar21 != 0) {
    while (uVar21 >> lVar1 == 0) {
      lVar1 = lVar1 + -1;
    }
  }
  iVar24 = uVar15 + 0xaba200f9;
  uVar4 = iVar24 * 0x800;
  uVar5 = (uint)(CONCAT14((uVar20 >> 0x11 & 1) != 0,iVar24) >> 0x16);
  uVar17 = (ulong)(ushort)((ushort)(byte)((byte)uVar21 | 0xe6) | 0x100);
  uVar12 = ((uint)uVar20 & 0xfffdffff) * -0x60906b52;
  uVar22 = (ushort)uVar4 | (ushort)uVar5 & 0xff00 | (ushort)(byte)((char)uVar5 + 0x60);
  uVar20 = (ulong)(((uint)lVar19 & 0xffff0000 | (uint)(ushort)((short)lVar19 + 0xc3ec)) + 0xed943942
                  );
  uVar23 = uVar22 * 2;
  uVar8 = (ushort)(byte)((char)uVar7 >> 0x17);
  bVar26 = uVar8 == uVar23;
  uVar7 = uVar23 ^ (ushort)bVar26 * (uVar23 ^ (ushort)uVar12 & 0xa41);
  uVar9 = uVar9 | (ushort)((uVar8 ^ (ushort)bVar26 * (uVar8 & uVar7)) & 0xff |
                          (ushort)(byte)(((short)(uVar8 + uVar22 * -2) < 0) << 7 | bVar26 << 6 |
                                         ((uVar17 + 0xfffffff84fbebf5 + (ulong)((short)uVar22 < 0) &
                                          0x1000000000000000) != 0) << 4 | in_PF << 2 | 2U |
                                        uVar8 < uVar23) << 8);
  return CONCAT88(*(undefined8 *)
                   ((((ulong)&stack0xffffffffffffff90 & 0xffffffffffff0000 |
                     (ulong)(ushort)((short)register0x00000020 - 0x70U ^ 0x80)) ^ 0x4000000000000) +
                   0x58),uVar9 * uVar20 + ((ulong)uVar12 & 0xffffffffffff0000) +
                         SUB168(SEXT816((long)uVar9) * SEXT816((long)uVar20) >> 0x40,0) +
                         (ulong)(((uVar3 & 0xffff0000 | (uint)uVar14 & 0xffffff00 |
                                  (uint)(byte)(cVar13 << 1)) >> bVar10) >> 1) + (ulong)uVar15 +
                         (CONCAT62(0x68d9c5ed94da,0x4a01U >> bVar10 | 0x4a01 << 0x10 - bVar10) &
                          0xfff7ffff | 0x68d9c5ed00000000) + (ulong)uVar16 + uVar20 +
                         (ulong)(uVar16 + 0xe7 & 0xffffff00 | uVar11 & 0xfe) + uVar21 +
                         uVar17 + (ulong)((short)uVar22 < 0) + -0x2802cd0c16798fbe +
                         (ulong)(uVar4 & 0xffff0000 | (uint)uVar7) +
                         ((ulong)(ushort)(sVar25 << bVar10 % 0x11 |
                                         (ushort)(CONCAT12(cVar13 < '\0',sVar25) >>
                                                 0x11 - bVar10 % 0x11)) | 0x27fe4d9db1220000));
}



// WARNING: Removing unreachable block (ram,0x00402c24)

undefined  [16] log_size_7_var_009(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ushort uVar6;
  uint uVar7;
  ulong uVar8;
  undefined2 uVar9;
  ushort uVar10;
  bool in_PF;
  
  uVar8 = 0x971eef69;
  uVar9 = 0x3498;
  if (!in_PF) {
    uVar9 = 0x923f;
    uVar8 = 0x6cc60603a028e909;
  }
  uVar2 = 0x1f;
  while (0x7282d070U >> uVar2 == 0) {
    uVar2 = uVar2 - 1;
  }
  uVar7 = ((uint)(-0x485e3c55 < (int)uVar2) | 0xb697a200) + 0x7282d070;
  uVar3 = (uVar7 & 0xffff) * 0x960c;
  uVar4 = (ulong)uVar7 << 1;
  uVar6 = (short)uVar4 + 0xed76;
  uVar5 = ((ulong)((uint)CONCAT11((char)((ulong)(uVar3 >> 0x10 | 0x9c780000) >> 8),
                                  (char)(uVar3 >> 0x10)) | 0x9c780000) | 0xc500) + 0xcc71d444;
  uVar10 = (ushort)(CONCAT12(uVar5 < 0xffffffff9c390a0d,0xd443) >> 0x10) | 0xa886;
  uVar1 = 0;
  if (uVar6 != 0) {
    while ((uVar6 >> uVar1 & 1) == 0) {
      uVar1 = uVar1 + 1;
    }
  }
  return CONCAT88(*(undefined8 *)
                   (((ulong)&stack0xffffffffffffff90 & 0xffffffff00000000 |
                    (ulong)((int)register0x00000020 - 0x70U & 0xefffffff)) + 0x58),
                  CONCAT62(0x1da4f,(short)(char)uVar10) +
                  (ulong)(uint)((int)uVar5 + 0x63c6f5f3 >> 1) + (ulong)(uVar2 >> 1) * 0x800 +
                  (uVar4 & 0xffffffffffff0000 | (ulong)uVar6) + ((ulong)uVar1 | 0x802d0000) +
                  -0x77b67ec460df20f2 +
                  ((CONCAT62(0x800000000000,uVar9) | 0x775b8f47676f0000) & 0xffffff00 |
                  0xf75b8f4710000001) + (ulong)((uint)uVar10 | 0xcc710000) +
                  (uVar8 >> 0x11 | uVar8 << 0x2f));
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


