typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned int    uint;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined5;
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

typedef struct Elf32_Dyn_x86 Elf32_Dyn_x86, *PElf32_Dyn_x86;

typedef enum Elf32_DynTag_x86 {
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
} Elf32_DynTag_x86;

struct Elf32_Dyn_x86 {
    enum Elf32_DynTag_x86 d_tag;
    dword d_val;
};

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_x86 {
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
} Elf_SectionHeaderType_x86;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_x86 sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

typedef enum Elf_ProgramHeaderType_x86 {
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
} Elf_ProgramHeaderType_x86;

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_x86 p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_pad[9];
    word e_type;
    word e_machine;
    dword e_version;
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
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




// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_08049030(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void __assert_fail(char *__assertion,char *__file,uint __line,char *__function)

{
                    // WARNING: Subroutine does not return
  __assert_fail(__assertion,__file,__line,__function);
}



undefined4 main(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar1 = log_size_7_var_000(&stack0x00000004);
  iVar2 = log_size_7_var_001();
  iVar3 = log_size_7_var_002();
  iVar4 = log_size_7_var_003();
  iVar5 = log_size_7_var_004();
  iVar6 = log_size_7_var_005();
  iVar7 = log_size_7_var_006();
  iVar8 = log_size_7_var_007();
  iVar9 = log_size_7_var_008();
  iVar10 = log_size_7_var_009();
  if (iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 == 0) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __assert_fail("sum==0","source_complex_with_base_10_funcs_of_size_128.c",0x1f,
                (char *)&__PRETTY_FUNCTION___2036);
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void _start(void)

{
  __libc_start_main(main);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
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



// WARNING: This is an inlined function

void __x86_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0804914c)
// WARNING: Removing unreachable block (ram,0x08049155)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x08049198)
// WARNING: Removing unreachable block (ram,0x080491a1)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_6844 == '\0') {
    deregister_tm_clones();
    completed_6844 = 1;
    return;
  }
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



undefined8 log_size_7_var_000(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  bool in_PF;
  
  iVar1 = 0;
  while ((0x55073f81U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  uVar2 = ((uint)CONCAT11(!in_PF + '5',0x97) | 0xe000000) + 0x3634482d;
  if (-1 < (int)uVar2) {
    uVar2 = 0x3634482c;
  }
  iVar1 = 0;
  while ((0x7f8897f2U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_EDX,iVar1 + (uVar2 & 0xffff0000 | (uint)(ushort)((short)uVar2 + 0x482c)) +
                         -0x46444939);
}



undefined8 log_size_7_var_001(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  ushort uVar10;
  byte bVar11;
  ushort uVar12;
  byte bVar13;
  short sVar14;
  ushort uVar15;
  undefined4 in_EDX;
  int iVar16;
  char cVar21;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  uint uVar20;
  ushort uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  bool in_PF;
  
  uVar20 = 0xe1cfe2bc;
  uVar9 = 0;
  while ((0x3baa8922U >> uVar9 & 1) == 0) {
    uVar9 = uVar9 + 1;
  }
  if (!in_PF) {
    uVar20 = uVar9 & 0xffff | 0xe1cf0000;
  }
  uVar1 = (CONCAT44((uint)(CONCAT14((int)uVar20 < 0,0x83fa019) >> 0x17) | 0xfe806400,0xee305a9a) ^
          0x4e25) & 0x3fffffffffffffff;
  uVar2 = uVar1 / (ulonglong)(uVar9 | 0xc0000000);
  uVar23 = ((uint)(CONCAT14((uVar1 % (ulonglong)(uVar9 | 0xc0000000) & 1) != 0,0xb28e) >> 8) |
           0x6d5b00) >> 0xe | 0xdd947000;
  lVar3 = (longlong)CONCAT22((short)(uVar2 >> 0x10),(short)(char)uVar2) * (longlong)(int)uVar23;
  iVar16 = (int)((ulonglong)lVar3 >> 0x20);
  uVar9 = (uint)(CONCAT14(iVar16 != 0 && iVar16 != -1,0xd277728) >> 8);
  uVar12 = ((ushort)((uVar9 | 0x50000000) >> 1) | 0x4000) - (short)(char)lVar3;
  uVar4 = (uVar9 & 0xfffe0000 | 0x50000000) >> 1 | 0x80000000;
  iVar16 = CONCAT22((short)((ulonglong)lVar3 >> 0x10),(ushort)(byte)((uint)uVar12 >> 8));
  bVar11 = (byte)uVar12;
  bVar11 = bVar11 >> (bVar11 & 7) | bVar11 << 8 - (bVar11 & 7);
  uVar15 = (ushort)((ulonglong)lVar3 >> 0x20);
  bVar11 = bVar11 & 0x1f;
  uVar9 = (uint)(CONCAT14(1,iVar16) >> bVar11) | iVar16 << 0x21 - bVar11;
  uVar25 = uVar9 & 0xffff0000;
  cVar21 = (char)(uVar15 * -0x3830 >> 8);
  uVar12 = (uVar12 & 0xff00 | (ushort)bVar11) - 0x213;
  uVar17 = (uVar15 * -0x3830 & 0xff |
           (ushort)(byte)((byte)(CONCAT11((ushort)uVar9 < uVar15,cVar21) >> 6) | cVar21 << 3) << 8)
           << 3;
  uVar5 = (uVar20 & 0x7fff8000) << 1;
  sVar14 = uVar15 + 0x5bd0 + (ushort)(((char)lVar3 >> 7 & 1U) != 0);
  uVar24 = SEXT24((short)uVar12);
  uVar7 = (ushort)((int)uVar23 >> 1);
  uVar15 = uVar17 & 0xff00 | (ushort)(byte)((char)uVar17 + 0x3f);
  bVar13 = (byte)((uint)uVar12 >> 8);
  uVar9 = CONCAT22((short)((ulonglong)lVar3 >> 0x30),sVar14) & 0xffffff00 |
          (uint)(byte)((char)sVar14 - bVar13);
  sVar14 = uVar15 - uVar12;
  bVar11 = (byte)uVar12;
  cVar21 = (char)((uint)(ushort)((sVar14 + -1) * 2) >> 8);
  uVar17 = ~(ushort)((((uint)(CONCAT14(uVar15 < uVar12 || sVar14 == 0,uVar9) >> (bVar11 & 0x1f)) |
                      uVar9 << 0x21 - (bVar11 & 0x1f)) << 1) >> 0x10);
  uVar9 = (int)CONCAT11((char)((uVar24 & 0xffff) >> 8) >> 0xb,(char)(uVar24 & 0xffff)) *
          (int)(short)uVar12;
  uVar15 = (ushort)(uVar9 >> 0x10);
  uVar9 = uVar9 & 0xffff;
  bVar11 = (bVar11 & 0x1f) % 0x11;
  uVar20 = (uint)((uVar24 >> ((uint)uVar15 & 0x1f) & 1) != 0) << 0x10 |
           CONCAT31((uint3)(byte)(cVar21 << 1 | cVar21 < '\0'),0x80);
  uVar18 = (ushort)(uVar20 << bVar11) | (ushort)(uVar20 >> 0x11 - bVar11);
  uVar19 = (ushort)((uVar5 | uVar18) >> 1);
  uVar18 = (uVar12 & 0xfadf) + uVar12 +
           (ushort)(uVar19 < 0x170 || (ushort)(uVar19 - 0x170) < (ushort)((uVar18 & 1) != 0));
  uVar20 = uVar24 | 1 << ((uint)uVar15 & 0x1f);
  if (CONCAT22(uVar17,uVar15) < 0x11b12f60) {
    uVar20 = uVar25 | uVar9;
  }
  uVar6 = (ushort)uVar9;
  uVar23 = uVar20 & 0xffff0000 | (uint)(ushort)((short)uVar20 << (bVar11 & 0x1f));
  uVar20 = ~CONCAT22(0xeeca,(uVar7 & ~(1 << (uVar7 & 0xf))) + 0xe43e);
  uVar9 = (uint)(uVar6 | 0x10);
  uVar7 = (ushort)(uVar25 >> 0x18) | (ushort)(uVar25 >> 8);
  uVar25 = uVar23 >> (bVar11 & 0x1f) | uVar23 << 0x20 - (bVar11 & 0x1f);
  uVar22 = uVar18 ^ (ushort)(uVar7 == uVar18) * (uVar18 ^ (ushort)uVar25);
  uVar8 = uVar7 ^ (ushort)(uVar7 == uVar18) * (uVar7 & uVar22);
  uVar10 = (short)(ushort)(uVar5 >> 0x11) >> 1;
  uVar19 = uVar12 & 0xff | (ushort)(bVar13 >> (bVar11 & 0x1f)) << 8;
  if (!in_PF) {
    uVar19 = uVar8 & 0xff;
  }
  return CONCAT44(in_EDX,(int)(short)((uVar10 >> 8 | (ushort)((((uint)uVar10 & 0xff) << 0x10) >> 8))
                                     * 2) +
                         (CONCAT22((ushort)(((uVar9 & 0xff00) << 8) >> 0x10) |
                                   (ushort)((uVar9 << 0x18) >> 0x10),uVar8) & 0xffff00ff) +
                         (uVar4 | (ushort)((uVar19 - (uVar8 & 0xff)) -
                                          (ushort)((uVar4 | uVar19) < 0x83f6d10))) +
                         CONCAT22(uVar17,(uVar15 << 4 | uVar6 >> 0xc) + uVar8 +
                                         (ushort)(uVar7 < uVar18) & 0xff | (ushort)!in_PF << 8) +
                         (CONCAT22((ushort)(((uVar20 & 0xff00) << 8) >> 0x10) |
                                   (ushort)((uVar20 << 0x18) >> 0x10),
                                   (((ushort)(uVar20 >> 0x18) | (ushort)(uVar20 >> 8) & 0xff00) ^
                                   uVar12) + 1) >> 1 | 0x80000000) +
                         ((uVar25 ^ 1 << ((uint)uVar22 & 0x1f)) << 1 | 1) + -0x2f8e43c1);
}



// WARNING: Removing unreachable block (ram,0x08049685)
// WARNING: Removing unreachable block (ram,0x08049688)
// WARNING: Removing unreachable block (ram,0x08049655)
// WARNING: Removing unreachable block (ram,0x080496b2)

undefined8 log_size_7_var_002(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xf3013b62);
}



undefined8 log_size_7_var_003(void)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  longlong lVar4;
  int iVar5;
  uint3 uVar6;
  byte bVar7;
  ushort uVar8;
  char cVar10;
  ushort uVar9;
  sbyte sVar11;
  ushort uVar12;
  uint uVar13;
  undefined uVar14;
  ushort uVar15;
  undefined4 in_EDX;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  byte bVar19;
  short sVar20;
  char cVar24;
  byte bVar25;
  ushort uVar21;
  uint uVar22;
  uint uVar23;
  ushort uVar26;
  uint uVar27;
  ushort uVar28;
  ushort uVar29;
  uint uVar30;
  bool bVar31;
  bool in_PF;
  
  uVar22 = 0xcb000343;
  if (!in_PF) {
    uVar22 = 0xcb004daa;
  }
  uVar1 = ~(1 << ((uVar22 | 0x479294a2) & 0x1f));
  uVar26 = (ushort)uVar1;
  uVar16 = (CONCAT22(0x9d5a,((ushort)(byte)((-0x30 - (char)uVar22) * '\x02') << 8 | 0xe1) - 1) &
           0xffffff00) << 1;
  uVar23 = (uVar22 | 0x479294a2) & 0xffff0000 | 0x20c2;
  uVar8 = (ushort)uVar16 | 0x53;
  uVar1 = uVar1 & 0xa6c10000;
  uVar12 = 0x3284 - (uVar26 & 0xefae);
  uVar28 = uVar8 + 1;
  bVar31 = uVar23 < 0xabc05ad;
  uVar23 = uVar23 + 0xf543fa53;
  bVar25 = (byte)uVar23;
  bVar18 = bVar25 + 0xf + bVar31;
  sVar20 = CONCAT11((char)(uVar23 >> 8) + -0x11,bVar18);
  bVar7 = (byte)((uint)uVar12 >> 8);
  bVar19 = bVar7 + 0xa7;
  uVar9 = sVar20 << 0xb;
  uVar6 = CONCAT12(bVar7 < 0x59 || bVar19 < (0xfe < bVar18),sVar20) >> 6;
  uVar21 = (ushort)uVar6;
  uVar26 = (short)uVar26 >> 0xf;
  cVar24 = (char)((uint)(uVar9 | uVar21) >> 8);
  sVar20 = uVar8 + 0x6a6e;
  uVar22 = uVar16 & 0xffff0000 | (uint)uVar28;
  if (uVar28 < 0x9593 && sVar20 != 0) {
    uVar22 = CONCAT22(0x7080,sVar20);
  }
  uVar8 = (ushort)(byte)(((char)bVar18 < '\0') << 7 | (bVar18 == 0) << 6 |
                         (((bVar25 & 0xf) + 0xf + bVar31 & 0x10) != 0) << 4 | in_PF << 2 | 2U |
                        (0xf0 < bVar25 || CARRY1(bVar25 + 0xf,bVar31))) << 8 ^ (short)cVar24;
  uVar16 = (uint)(ushort)(uVar12 & 0xff | (ushort)(byte)(bVar19 - (0xfe < bVar18)) << 8) |
           0xef5d0000;
  if ((short)uVar8 < 1) {
    uVar16 = CONCAT22(0x7080,sVar20);
  }
  uVar27 = (uint)(int)cVar24 >> 1 & 0xffff;
  bVar19 = (byte)(uVar27 >> 8);
  bVar7 = bVar19 | 0xc0;
  uVar8 = uVar8 & 0x3fff;
  uVar12 = uVar8 / (ushort)bVar7 & 0xff;
  lVar4 = (longlong)(int)uVar16 * -0x4700d3e;
  iVar5 = (int)((ulonglong)lVar4 >> 0x20);
  cVar10 = (char)((uint)(ushort)(uVar12 | uVar8 % (ushort)bVar7 << 8) >> 8);
  uVar8 = uVar12 | (ushort)(byte)((byte)(CONCAT11(iVar5 != 0 && iVar5 != -1,cVar10) >> 3) |
                                 cVar10 << 6) << 8;
  uVar29 = (short)(uVar22 + 1) * -0x187c;
  uVar14 = (undefined)uVar27;
  uVar28 = (ushort)((ulonglong)lVar4 >> 0x10);
  uVar13 = CONCAT22(uVar28,CONCAT11(uVar14,(char)lVar4));
  uVar27 = (uint)CONCAT11(bVar7 >> 1 | bVar19 << 7,uVar14) & 0xffffff00;
  uVar15 = (ushort)uVar27 | (ushort)(byte)((ulonglong)lVar4 >> 8);
  bVar19 = (char)uVar6 + (char)((uint)uVar8 >> 8) + 1;
  uVar16 = uVar13 << 0x12;
  uVar13 = uVar13 >> 0xe | uVar16;
  if ((short)(uVar15 & uVar29) < 0) {
    uVar13 = (((uint)uVar28 & 0xc000) << 0x10) >> 0xe | uVar16 | (uint)uVar26;
  }
  uVar12 = uVar8 >> 6 | uVar12 << 10;
  uVar16 = (uint)(ushort)((ushort)uVar13 ^ uVar15) & 0xffffff0f;
  uVar13 = uVar13 & 0xffff0000 | uVar16;
  sVar11 = (sbyte)uVar16;
  uVar8 = uVar26 >> sVar11 | uVar29 << 0x10 - sVar11;
  uVar28 = uVar8 ^ (ushort)(uVar12 == uVar8) * (uVar8 ^ uVar15);
  uVar26 = uVar12 ^ (ushort)(uVar12 == uVar8) * (uVar12 & uVar28);
  uVar29 = (short)uVar29 >> sVar11;
  uVar30 = uVar22 + 1 & 0xffff0000 | (uint)uVar29;
  uVar16 = (((uint)uVar26 & 0xffffff00 | 0x78660000 |
            (uint)(byte)((byte)((uVar26 & 0xff | (ushort)((bVar19 & 8) != 0) << 8) >> 4) |
                        (char)uVar26 << 5)) ^ 0x1800) + 1;
  uVar13 = uVar13 << sVar11 | uVar13 >> 0x21 - sVar11;
  bVar7 = (byte)uVar16;
  bVar25 = (byte)((uint)(uVar9 | uVar21 & 0xff00) >> 8);
  bVar25 = bVar25 ^ (bVar7 == bVar25) * (bVar25 ^ (byte)(uVar27 >> 8));
  bVar18 = bVar7 ^ (bVar7 == bVar25) * (bVar7 & bVar25);
  uVar22 = (uint)(ushort)((short)uVar13 << 1 | (ushort)(bVar7 < bVar25)) & 0xffffff0f;
  sVar11 = (sbyte)uVar22;
  uVar27 = uVar1 | (ushort)(uVar28 << sVar11 |
                           ((ushort)(uVar16 & 0xffffff00) | (ushort)bVar18) >> 0x10 - sVar11);
  bVar7 = (byte)((ushort)uVar22 >> 1) & 0x1f;
  uVar9 = (ushort)(((uVar16 & 0xffff0000 |
                    (uint)CONCAT11(-(char)((uVar16 & 0xffffff00) >> 8),bVar18)) << 1 |
                   uVar13 >> 0x1f) >> bVar7) | (ushort)(uVar30 << 0x20 - bVar7);
  iVar5 = 0x1f;
  if (uVar27 != 0) {
    while (uVar27 >> iVar5 == 0) {
      iVar5 = iVar5 + -1;
    }
  }
  iVar2 = (int)(short)uVar9 * (int)(short)uVar9;
  bVar7 = (byte)((ushort)((short)iVar5 << ((byte)iVar5 & 0x1f)) >> 8);
  uVar9 = (ushort)iVar2 << 1 | (ushort)iVar2 >> 0xf;
  uVar22 = (int)(short)uVar9 & 0xffffU | 0xc000;
  uVar16 = ((uint)(ushort)((ushort)((uint)iVar2 >> 0x10) & 0xff | (ushort)bVar7 << 8) & 0x3fff) <<
           0x10 | (int)(short)uVar9 & 0xffffU | 0xc000;
  uVar27 = uVar16 / uVar22;
  uVar13 = uVar16 % uVar22 | (uint)(((int)cVar24 & 1U) != 0) << 0x1f;
  uVar17 = uVar13 + 0x54d863be;
  cVar24 = (char)(uVar27 >> 8);
  sVar3 = (short)((uint)((int)(short)uVar29 * 0x4579) >> 0x10);
  uVar21 = (((ushort)bVar25 << 8 | (ushort)uVar27 & 0xff) + 0x758f) - (ushort)(cVar24 < '\0');
  uVar22 = (int)CONCAT11(cVar24 << 1 | (sVar3 != 0 && sVar3 != -1),
                         (char)uVar27 + (bVar19 & 0xf7) * '\x02') * (int)(short)uVar17;
  uVar16 = uVar22 >> 0x10;
  uVar22 = uVar22 & 0xffff;
  return CONCAT44(in_EDX,CONCAT22((short)uVar9 >> 0xf,
                                  CONCAT11((char)(uVar22 >> 8) >> 0x15,(char)uVar22)) +
                         (uVar23 & 0xffff0000 |
                         (uint)(ushort)(uVar21 & 0xff |
                                       (ushort)(byte)((char)((uint)uVar21 >> 8) +
                                                     (char)(uVar17 >> 8)) << 8)) +
                         ((int)(CONCAT31(CONCAT21((short)(((uint)((uint3)((uint)iVar5 >> 8) &
                                                                 0xffff00) << 8) >> 0x10),
                                                  bVar7 + (char)((uint)iVar2 >> 0x18)),
                                         SCARRY4(uVar13,0x54d863be) << 1) | 1) >> 1 &
                         ~(1 << (uVar16 & 0x1f))) + (uVar17 & 0xffff0000 | uVar16) +
                         (uVar1 | (int)(short)uVar29 * 0x4579 & 0xffffU) + uVar30 +
                         CONCAT22(0x7080,sVar20 + uVar28 + (ushort)(uVar12 < uVar8) | uVar29) +
                         -0x6ba675f1);
}



undefined8 log_size_7_var_004(void)

{
  longlong lVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  byte bVar5;
  char cVar7;
  int iVar6;
  ushort uVar8;
  undefined4 in_EDX;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  short sVar13;
  short sVar14;
  uint uVar15;
  ushort uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  
  uVar12 = 0;
  while ((0xb865877cU >> uVar12 & 1) == 0) {
    uVar12 = uVar12 + 1;
  }
  bVar5 = (byte)(uVar12 ^ 0x40d651de);
  bVar2 = (bVar5 & 0x1f) % 0x11;
  uVar8 = (ushort)(0 << bVar2) | (ushort)(0 >> 0x11 - bVar2);
  cVar7 = (char)(uVar8 >> 8);
  uVar17 = uVar12 >> 1;
  uVar3 = (ushort)(CONCAT22(0x7254,uVar8) >> 8) & 0xf;
  bVar2 = (~(byte)(1 << uVar3) & 0x10) % 0x11;
  uVar10 = (uint)((0x5e10U >> uVar3 & 1) != 0) << 0x10 | CONCAT22(0x7254,uVar8) >> 8 & 0xffff;
  bVar9 = (byte)uVar17 & 0xbf;
  uVar3 = ~((short)(uVar12 ^ 0x40d651de) >> (bVar5 & 0x1f)) & ~(ushort)(1 << (uVar17 & 0x1f));
  uVar10 = (uint)(ushort)((ushort)(uVar10 >> bVar2) | (ushort)(uVar10 << 0x11 - bVar2)) & 0xfffffffe
  ;
  uVar19 = uVar10 | 0xcd720000;
  uVar15 = 0x2e6d0000;
  if ((char)bVar9 < cVar7) {
    uVar15 = uVar12 & 0xffff0000 | uVar17 & 0x7f00 | (uint)(byte)(bVar9 - cVar7);
  }
  iVar6 = ((uint)uVar8 & 0xff00) * 0xb569;
  cVar7 = (char)((uint)iVar6 >> 8);
  uVar12 = ((uint)((ushort)((uint)iVar6 >> 0x10) & 0x3fff) << 0x10 |
           CONCAT31((int3)cVar7,-1 < (int)((uint)uVar3 | 0xb610000)) & 0xffff) /
           (uint)(ushort)((short)uVar10 << 1 | 0xc000);
  iVar6 = uVar19 * 0x52979fcc;
  uVar17 = (uint)uVar3 & 0xfffffffe | 0xb610000;
  uVar10 = uVar17 * 0x56b47a5a;
  lVar1 = (longlong)(int)(uVar12 & 0xffff | (uint)(ushort)(cVar7 >> 7) << 0x10 | 0x200000) *
          (longlong)(int)uVar15;
  cVar7 = (char)((uint)iVar6 >> 8);
  uVar10 = uVar10 & 0xffff0000 |
           (uint)CONCAT11((char)(uVar10 >> 8) + (char)uVar10 + ((int)(uVar17 * -0x54a5c2d3) < 0) +
                          -0x5f,(char)uVar10);
  uVar8 = (ushort)((uint)iVar6 >> 0x10);
  uVar4 = (ushort)lVar1;
  uVar3 = (ushort)(((uint)(uVar3 >> 1) | 0xb610000) + 0x576bee68 >> 0x10);
  uVar16 = uVar3 >> 5;
  uVar4 = uVar4 ^ (ushort)(uVar4 == uVar16) *
                  (uVar4 & (uVar3 >> 5 ^
                           (ushort)(uVar4 == uVar16) * (uVar16 ^ (ushort)((ulonglong)lVar1 >> 0x20))
                           ));
  uVar3 = (CONCAT11(cVar7 + ((byte)iVar6 >> ((byte)iVar6 & 0x1f)),cVar7 + 'T') ^ 0x110c ^
          1 << (uVar4 & 0xf)) >> 7;
  uVar11 = uVar10 + 0x68bff577;
  uVar10 = (uint)(0x97400a88 < uVar10) << 0x10 | uVar11 & 0xffff;
  uVar17 = uVar19 << 2 | 1;
  bVar5 = (byte)uVar3;
  bVar2 = bVar5 & 0xf;
  uVar4 = uVar4 >> bVar2 | uVar4 << 0x10 - bVar2;
  bVar2 = (byte)uVar4;
  uVar20 = uVar17 >> (bVar5 & 0x1f);
  uVar10 = (uVar11 & 0xffff0000 |
           (uint)(ushort)(((ushort)(uVar10 << 2) | (ushort)(uVar10 >> 0xf)) + (short)uVar17)) << 0xc
  ;
  uVar18 = uVar11 >> 0x14 | uVar10;
  uVar19 = CONCAT22(uVar8,0x7967);
  uVar8 = uVar8 >> 0xf;
  uVar17 = CONCAT22((short)((ulonglong)lVar1 >> 0x10),uVar4) & 0xffffff00 |
           (uint)(byte)(bVar2 << 6 | bVar2 >> 2);
  if ((uVar12 & 0x400) == 0) {
    uVar17 = uVar19;
  }
  if ((int)uVar18 < 0) {
    uVar17 = uVar20 - 1;
  }
  uVar12 = (uVar11 >> 0x14 & 0xf) << 1 | (uint)uVar8;
  uVar11 = uVar17 + 1 | 1 << uVar12;
  uVar20 = uVar20 + 0xed2d44c4 + (uint)((uVar17 + 1 >> uVar12 & 1) != 0);
  uVar4 = CONCAT11((char)(uVar11 >> 8) + -1,(char)uVar11);
  uVar17 = (uint)(ushort)((ushort)(uVar18 << 1) | uVar8 | uVar4);
  uVar15 = (int)(uVar15 << 7) >> 0x1c;
  cVar7 = (char)(-uVar19 >> 8);
  uVar12 = (uint)uVar3 & 0xff ^ 0xd7a34cc5;
  uVar19 = uVar15 << 7 | uVar15 >> 0x19;
  iVar6 = (int)((ulonglong)((longlong)(int)uVar12 * 0x782e1d1d) >> 0x20);
  sVar13 = (short)uVar19;
  sVar14 = (short)(uVar19 | 0xa2e34e7f);
  uVar3 = sVar14 + 0x2175;
  bVar21 = SBORROW2(sVar14,-0x2175) != false;
  uVar15 = (uint)uVar3;
  if (uVar3 == 0 || bVar21 != (short)uVar3 < 0) {
    uVar15 = uVar17;
  }
  uVar12 = uVar12 << 6;
  return CONCAT44(in_EDX,(int)sVar13 +
                         (uVar12 & 0xffffff00 |
                         (uint)(byte)(((byte)uVar12 | (byte)(uVar20 >> 0x1a)) + (char)uVar19)) +
                         ~CONCAT22((undefined2)(cVar7 >> 7),
                                   (((short)cVar7 - ((short)uVar4 >> 3)) -
                                    (ushort)(iVar6 != 0 && iVar6 != -1) & 0xff00 |
                                   (ushort)(byte)(((bVar21 == (short)uVar3 < 0) -
                                                  (char)((uint)(int)sVar13 >> 8)) - 1)) + 1) +
                         ((uint)(ushort)(sVar13 >> 0xf) | 0xd7a30000) +
                         ((uVar19 | 0xa2e34e7f) & 0xffff0000 | uVar15) +
                         ((uVar10 & 0x7fff8000) << 1 | uVar17) +
                         ((uVar20 >> 1 & 0xffff | (uVar20 >> 0x11) << 0x10) ^ 0x42bd) + -0x37b138bc)
  ;
}



// WARNING: Removing unreachable block (ram,0x08049c16)
// WARNING: Removing unreachable block (ram,0x08049bd1)

undefined8 log_size_7_var_005(void)

{
  uint uVar1;
  undefined4 in_EDX;
  
  uVar1 = 0x1f;
  while (0xca126e3aU >> uVar1 == 0) {
    uVar1 = uVar1 - 1;
  }
  return CONCAT44(in_EDX,(uVar1 & 0xffff0000 | 0x13a) +
                         ((uint)(ushort)(1 << ((ushort)(byte)((byte)uVar1 ^ 0x20) & 0xf) | 0x1b2c) |
                         0x8aee0000) + 0x7511639a);
}



// WARNING: Removing unreachable block (ram,0x08049cfe)

undefined8 log_size_7_var_006(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  short sVar6;
  uint uVar5;
  uint uVar7;
  byte bVar8;
  undefined4 in_EDX;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  ushort uVar12;
  undefined4 uVar13;
  char cVar16;
  uint uVar14;
  uint uVar15;
  short sVar17;
  uint uVar18;
  ushort uVar19;
  uint uVar20;
  ushort uVar21;
  uint uVar22;
  bool in_PF;
  bool bVar23;
  bool bVar24;
  
  uVar20 = (uint)CONCAT11(!in_PF,0xec) | 0x117a0000;
  uVar22 = uVar20 + 0xc5d58a1d;
  uVar13 = 0x53535925;
  if (uVar20 < 0x3a2a75e3 && uVar22 != 0) {
    uVar13 = 0xc1670000;
  }
  uVar12 = (short)uVar13 << 1;
  uVar5 = (uint)(byte)((char)uVar12 << 1);
  uVar21 = (ushort)uVar22 << 1 | (ushort)uVar22 >> 0xf;
  uVar15 = (uint)uVar12 & 0xff00 | uVar5;
  uVar18 = uVar15 | 0x7cca0000;
  uVar4 = uVar20 << 1 | 0x9309;
  uVar7 = 0xcab41fff;
  uVar9 = (uint)(uVar4 == 0xb9b0ee44) * (uVar4 ^ 0xb9b0ee44) ^ 0xb9b0ee44;
  uVar4 = uVar4 ^ (uint)(uVar4 == 0xb9b0ee44) * (uVar4 & uVar9);
  uVar20 = (uint)CONCAT11((byte)(uVar9 >> 8) >> 1,(char)uVar9);
  cVar16 = (char)(uVar4 >> 8);
  bVar11 = (char)uVar4 + cVar16;
  if ((SCARRY1((char)uVar4,cVar16) != SCARRY1(bVar11,'\0')) != (char)bVar11 < '\0') {
    uVar7 = uVar20 | 0xcab40000;
  }
  uVar4 = uVar4 & 0xffffff00 | (uint)bVar11;
  if ((char)bVar11 >= '\0') {
    uVar4 = uVar7;
  }
  cVar16 = -0x2d >> ((byte)uVar7 & 0x1f);
  bVar11 = ((byte)uVar7 & 0x1f) % 9;
  uVar14 = CONCAT22((short)((uint)uVar13 >> 0x10),0xd3a3) & 0xffff0000 |
           (uint)CONCAT11((byte)(CONCAT11((ushort)(uVar21 + 0x66e4) < 0x7618,cVar16) >> bVar11) |
                          cVar16 << 9 - bVar11,0xf3) | 0x4f633fd3;
  uVar9 = uVar7 ^ (uint)(uVar4 == uVar7) * (uVar7 ^ (uVar9 & 0xffff0000 | uVar20));
  lVar3 = (ulonglong)(uVar4 ^ (uint)(uVar4 == uVar7) * (uVar4 & uVar9)) * (ulonglong)uVar18;
  uVar4 = (uint)CONCAT11((char)(uVar14 >> 8) + '\r',(char)uVar14);
  uVar14 = uVar14 & 0xffff0000 | uVar4;
  uVar20 = 1 << ((uint)((ulonglong)lVar3 >> 0x20) & 0x1f);
  bVar11 = (byte)(uVar9 << 1);
  uVar20 = (uint)((CONCAT14((int)uVar9 < 0,uVar20) ^ 0xf6b2e001) >> (bVar11 & 0x1f)) |
           (uVar20 ^ 0xf6b2e001) << 0x21 - (bVar11 & 0x1f);
  uVar19 = (ushort)uVar20;
  uVar7 = (uVar9 << 1) >> (bVar11 & 0x1f) | uVar18 << 0x20 - (bVar11 & 0x1f);
  sVar6 = (short)((ulonglong)lVar3 >> 0x10);
  uVar12 = (ushort)lVar3 & (ushort)uVar7;
  lVar3 = (longlong)
          (int)(uVar20 & 0xffff0000 |
               (uint)(ushort)(uVar19 >> (bVar11 & 0xf) | uVar19 << 0x10 - (bVar11 & 0xf))) *
          -0x3553a58a;
  iVar2 = (int)((ulonglong)lVar3 >> 0x20);
  cVar16 = (char)(uVar12 >> 8);
  sVar17 = (short)uVar15;
  uVar20 = CONCAT22(sVar6,CONCAT11(cVar16 + (char)uVar12,cVar16) * sVar17) << 1;
  uVar20 = uVar20 & 0xffffff00 | (uint)(byte)(((byte)uVar20 | sVar6 < 0) & (byte)(uVar4 >> 8));
  uVar15 = uVar14 | 1 << (uVar5 & 0x1f);
  uVar12 = CONCAT11(iVar2 != 0 && iVar2 != -1,(char)uVar7) >> 1;
  uVar5 = uVar20 + 0xfd5ff956;
  bVar24 = (int)uVar5 < 0;
  bVar23 = uVar5 != 0;
  if (SCARRY4(uVar20,-0x2a006aa) != bVar24) {
    uVar5 = uVar5 & 0xffff0000 | uVar15 & 0xffff;
  }
  uVar4 = (uint)(ushort)(sVar17 + (short)uVar20) | 0x7cca0000;
  if (bVar23) {
    uVar4 = uVar5;
  }
  bVar10 = (char)uVar15 - 0x16;
  lVar1 = (longlong)(int)uVar5 * (longlong)(int)uVar5;
  uVar5 = (uint)lVar1;
  bVar11 = (char)uVar15 - 0x17;
  uVar9 = uVar15 & 0xffffff00 | (uint)bVar11;
  bVar23 = bVar11 == 0;
  bVar8 = (byte)((ulonglong)lVar1 >> 0x20);
  bVar11 = (byte)uVar12;
  if (bVar23 || (char)bVar10 < '\x01') {
    bVar11 = bVar8;
  }
  if (((uVar12 | (ushort)(SCARRY4(uVar20,-0x2a006aa) != bVar24) << 8) >> ((ushort)bVar10 & 0xf) & 1)
      != 0 || bVar23) {
    uVar9 = uVar15 & 0xffff0000 | (uint)(ushort)((ulonglong)lVar1 >> 0x20);
  }
  if ((uVar5 >> ((uint)((ulonglong)lVar1 >> 0x20) & 0x1f) & 1) != 0) {
    uVar5 = uVar9 & 0xffff | (uint)(ushort)((ulonglong)lVar1 >> 0x10) << 0x10;
  }
  uVar15 = CONCAT22((short)((ulonglong)lVar1 >> 0x30),
                    CONCAT11(SCARRY1((char)uVar9,'h') == SCARRY1((char)uVar9 + 'h','\0'),bVar8)) >>
           (bVar11 & 0x1f);
  uVar20 = (uint)(ushort)(((ushort)uVar9 >> 0xe | (short)uVar15 << 2) + 0x8621);
  return CONCAT44(in_EDX,uVar5 + (uVar9 & 0xffff0000 | uVar20) +
                         ((uVar7 & 0xfffe0000) >> 1 | (uint)((uVar7 & 1) != 0) << 0x1f |
                         (uint)CONCAT11(bVar23 || (char)bVar10 < '\x01',bVar11)) +
                         (uVar15 & 0xffffff00 | (uint)(byte)((byte)uVar15 | (byte)(uVar20 >> 8))) +
                         uVar4 + (int)lVar3 +
                         (uVar22 & 0xffff0000 | (uint)(ushort)(uVar21 - 0xf34)) + uVar14 +
                         -0x29e74a44);
}



// WARNING: Removing unreachable block (ram,0x08049e29)
// WARNING: Removing unreachable block (ram,0x08049f7a)
// WARNING: Removing unreachable block (ram,0x08049ea8)
// WARNING: Removing unreachable block (ram,0x08049f88)

undefined8 log_size_7_var_007(void)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  undefined4 in_EDX;
  uint uVar4;
  
  uVar1 = 0x1f;
  while (0xfffe0000U >> uVar1 == 0) {
    uVar1 = uVar1 - 1;
  }
  uVar2 = (short)uVar1 << 1;
  bVar3 = (byte)uVar2;
  uVar4 = ((uint)uVar2 & 0xff00 | (uint)(byte)(bVar3 << 5 | bVar3 >> 3) | 0x13ec0000) + 0x4198f677;
  return CONCAT44(in_EDX,(uVar1 & 0xffff0000) + ((int)(uVar1 & 0xffff0000 | 0x931) >> 0x1f) +
                         (uVar4 & 0xffff0000 | (uint)(ushort)((ushort)uVar4 >> 1 | 0x8000)) +
                         -0x5584fb9f);
}



// WARNING: Removing unreachable block (ram,0x0804a059)
// WARNING: Removing unreachable block (ram,0x0804a0e2)

undefined8 log_size_7_var_008(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  undefined4 in_EDX;
  
  uVar3 = 0x1f;
  while (0x9c400072U >> uVar3 == 0) {
    uVar3 = uVar3 - 1;
  }
  uVar2 = 0;
  while ((0x4dbfa583U >> uVar2 & 1) == 0) {
    uVar2 = uVar2 + 1;
  }
  uVar3 = (uVar3 & 0xffff0000 | (uint)(ushort)((ushort)uVar3 ^ 0x40)) << 1;
  uVar4 = (ushort)(uVar2 >> 0x10);
  iVar1 = (uVar3 & 0xffdf0000 |
          (uint)(ushort)((short)((ushort)uVar3 | uVar4 >> 0xf) >>
                        ((byte)(uVar2 & 0xffff5fe4) & 0x1f))) - 0x9a30;
  iVar5 = CONCAT31(CONCAT21(uVar4,-0x6b - (char)((uint)(ushort)((short)(uVar2 & 0xffff5fe4) + 0x22f6
                                                               ) >> 8)),1);
  uVar3 = iVar1 * 8 + 0x9d3fb395;
  return CONCAT44(in_EDX,iVar5 + iVar1 +
                         (uVar3 & 0xffff0000 | (uint)(ushort)((short)uVar3 + 0x876a)) +
                         CONCAT22(0x9400,~(1 << ((ushort)iVar5 & 0xf)) & 0x10d8) + -0x2f95daa5);
}



// WARNING: Removing unreachable block (ram,0x0804a1b5)
// WARNING: Removing unreachable block (ram,0x0804a2e8)
// WARNING: Removing unreachable block (ram,0x0804a1c9)
// WARNING: Removing unreachable block (ram,0x0804a230)
// WARNING: Removing unreachable block (ram,0x0804a29e)

undefined8 log_size_7_var_009(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xea37b338);
}



// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int __libc_csu_init(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  EVP_PKEY_CTX *in_stack_ffffffe4;
  
  _init(in_stack_ffffffe4);
  iVar2 = 0;
  do {
    iVar1 = (*(code *)(&__frame_dummy_init_array_entry)[iVar2])(param_1,param_2);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 1);
  return iVar1;
}



void __libc_csu_fini(void)

{
  return;
}



// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void _fini(void)

{
  return;
}


