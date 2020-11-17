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
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
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



// WARNING: Removing unreachable block (ram,0x08049298)
// WARNING: Removing unreachable block (ram,0x080493a1)

int log_size_7_var_000(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0x1803295U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return iVar1 + -0x18;
}



// WARNING: Removing unreachable block (ram,0x08049420)
// WARNING: Removing unreachable block (ram,0x08049450)
// WARNING: Removing unreachable block (ram,0x080494b0)
// WARNING: Removing unreachable block (ram,0x08049496)
// WARNING: Removing unreachable block (ram,0x080494bc)
// WARNING: Removing unreachable block (ram,0x080494f9)

int log_size_7_var_001(void)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar5 = 0x1f;
  while (0xffff006bU >> uVar5 == 0) {
    uVar5 = uVar5 - 1;
  }
  uVar8 = uVar5 | 0xc0000000;
  uVar1 = 0x7dbbc140 / (ulonglong)uVar8;
  iVar3 = (int)uVar1;
  uVar7 = (uint)(0x7dbbc140 % (ulonglong)uVar8);
  uVar6 = 0;
  if (uVar7 != 0) {
    while ((uVar7 >> uVar6 & 1) == 0) {
      uVar6 = uVar6 + 1;
    }
  }
  uVar7 = iVar3 + 0x2210c080;
  if ((POPCOUNT(uVar7 & 0xff) & 1U) != 0) {
    uVar8 = uVar5 & 0xffff0000 | 0xc0000000;
  }
  uVar4 = iVar3 << 1;
  uVar5 = uVar6 & 0xff | 0xffff0000;
  uVar9 = uVar5 + 0xd000e801;
  uVar5 = (uint)CONCAT11(uVar5 < 0x2fff17ff && uVar9 != 0,(char)(uVar6 & 0xff));
  uVar6 = (uVar5 | 0xffff0000) << 1;
  uVar8 = uVar8 & 0xffff0000 | (uint)CONCAT11(0x3559 < (ushort)uVar1,(char)uVar8 + '\x1f') | uVar9;
  bVar2 = ((byte)(uVar6 >> 0x18) & 0x1f) % 0x11;
  return (uVar4 & 0xffff0000 | (uint)(ushort)((ushort)(byte)uVar4 * (ushort)(byte)(uVar8 >> 8))) +
         uVar8 + (uVar6 >> 0x18 | 0xfe00 | uVar5 << 0x19) +
         (uVar9 & 0xffff0000 |
         (uint)(ushort)((ushort)((uVar9 & 0xffff) << bVar2) |
                       (ushort)((uVar9 & 0xffff) >> 0x11 - bVar2))) + uVar7 +
         ((ushort)((short)uVar6 + 0xc080) | 0x22100000 | uVar9) + 0x41ee92d3;
}



// WARNING: Removing unreachable block (ram,0x08049689)
// WARNING: Removing unreachable block (ram,0x080496fe)

undefined4 log_size_7_var_002(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804988b)
// WARNING: Removing unreachable block (ram,0x080498b5)

int log_size_7_var_003(void)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  iVar7 = 0;
  while ((0xc7d500ceU >> iVar7 & 1) == 0) {
    iVar7 = iVar7 + 1;
  }
  uVar5 = iVar7 + 0xacc684b;
  uVar4 = (uint)(CONCAT14(0x9c30797a < (uVar5 & 0xffff0000 | (uint)(ushort)((short)uVar5 >> 0xd)),
                          0x7498531) >> 0xe);
  uVar10 = (ushort)uVar4 ^ 0x86d8;
  bVar13 = (POPCOUNT(uVar10 & 0xff) & 1U) == 0;
  iVar7 = (uint)(ushort)((ushort)((POPCOUNT(uVar5 & 0xff) & 1U) != 0) << 8 | 8) * (uint)bVar13;
  uVar1 = (short)iVar7 * 2 - 1;
  iVar7 = iVar7 * 4;
  uVar1 = (ushort)(uVar1 & 0xff | (ushort)(byte)((char)((uint)uVar1 >> 8) << 1) << 8) >> 1;
  uVar6 = CONCAT11((char)((uint)iVar7 >> 8) << 1,(char)iVar7) | 0xf27;
  uVar11 = (uVar4 & 0xffff0000 | 0x29880000 | (uint)(ushort)(uVar10 + 0x8b0c)) + (uint)uVar1 + 1;
  uVar10 = CONCAT11((POPCOUNT((0x89U >> bVar13 | 0x89 << 0x10 - bVar13) + 0xbd49 & 0xff) & 1U) != 0,
                    bVar13 << 7) + 0x75db;
  uVar5 = uVar10 & 0x1f;
  uVar12 = uVar11 ^ 1 << uVar5;
  bVar2 = (byte)uVar10;
  bVar3 = bVar2 << 1 | bVar2 >> 7;
  uVar4 = uVar10 & 0xffffff00 | 0xffe90000 | uVar6 & 0xff;
  uVar5 = (short)((ushort)(byte)(((char)uVar1 + -0x69) - ((uVar11 >> uVar5 & 1) != 0)) << 0xe) *
          -0x545f;
  uVar11 = uVar5 & 0xffff | 0x70780000;
  if ((int)(short)uVar5 != uVar5) {
    uVar4 = uVar12 & 0xffff | 0xffe90000;
  }
  uVar8 = 0x51f40f27 << (bVar2 & 0x1f) | 1 << (bVar3 & 0x1f);
  uVar5 = uVar4 & 0xffff0000 | (uint)(ushort)((ushort)uVar4 >> ((byte)uVar4 & 0x1f));
  if (((ushort)-(uVar6 & 0xff00 | (ushort)bVar3) | 0xfc760000) == uVar12) {
    uVar5 = uVar12;
  }
  uVar4 = ((uint)(byte)('\0' << ((byte)uVar5 & 0x1f)) << 8) >> 1;
  iVar9 = CONCAT31((uint3)((uint3)(uVar8 >> 8) & 0xffff00 |
                          (uint3)(byte)((ushort)-(short)uVar8 >> 8)) >> 4,1);
  uVar5 = uVar5 & 0xffff0000 | (uint)CONCAT11((-1 < (int)uVar4) << 1,(byte)uVar5 - 1);
  iVar7 = 0;
  if (uVar5 != 0) {
    while ((uVar5 >> iVar7 & 1) == 0) {
      iVar7 = iVar7 + 1;
    }
  }
  return (iVar9 << 0x16 | (uint)(CONCAT14(CARRY4(uVar11,uVar11),iVar9) >> 0xb)) + iVar7 +
         (uVar11 * 2 & 0xffff0000 | (uint)(ushort)((short)(uVar11 * 2) * -0x51f1)) + uVar4 +
         0x1ecf0efd;
}



// WARNING: Removing unreachable block (ram,0x08049989)

undefined4 log_size_7_var_004(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08049bf0)

undefined4 log_size_7_var_005(void)

{
  int iVar1;
  
  iVar1 = 0;
  while ((0xffee94baU >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08049cd5)
// WARNING: Removing unreachable block (ram,0x08049cef)

int log_size_7_var_006(void)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar4 = 0;
  while ((0x65b98078U >> uVar4 & 1) == 0) {
    uVar4 = uVar4 + 1;
  }
  uVar2 = ((ushort)(CONCAT11(0x10,(char)uVar4) | 0x400) & 0x242b) * 0x100f0;
  uVar6 = (ushort)(uVar2 >> 0x10);
  uVar4 = uVar2 & 0xffff | (uVar4 & 0x7fff0000) << 1;
  uVar6 = uVar6 & 0xff | (ushort)(uVar6 == 0) << 8;
  if (uVar4 != 0x65b98078) {
    uVar4 = 0x65b98078;
  }
  uVar3 = (char)uVar4 * 9;
  uVar1 = uVar6 + 0x78;
  if (uVar6 < 0xff88 && uVar1 != 0) {
    uVar6 = (ushort)uVar4;
    uVar3 = uVar1;
  }
  uVar5 = ((uint)(uVar6 & 0x3fff) << 0x10 | 0x753f) / 0xc008;
  uVar7 = (uVar3 | 0x80560000) >> 4;
  uVar2 = 0;
  if ((uVar5 | 0x1c3a0000) != 0) {
    while (((uVar5 | 0x1c3a0000) >> uVar2 & 1) == 0) {
      uVar2 = uVar2 + 1;
    }
  }
  uVar6 = (short)(char)uVar5 * (short)(char)(uVar5 >> 8);
  uVar1 = uVar6 & 0x3fff | 0xc0;
  uVar6 = uVar6 & 0xff | 0xc0;
  uVar3 = (ushort)uVar2;
  uVar8 = uVar4 + 1 & 0xffff0000 | (uint)(ushort)((short)(uVar4 + 1) << 1 | uVar3 >> 0xf);
  uVar4 = uVar7 & 0xffff;
  uVar5 = ((ushort)(uVar1 / uVar6 & 0xff | uVar1 % uVar6 << 8) | 0x1c3a0000) & uVar8;
  uVar6 = ((short)uVar7 * -0x7b4e - (short)uVar4) - (ushort)((uVar3 >> 10 & 1) != 0);
  uVar7 = uVar6 | 0x89890000;
  if ((uVar7 & 0x6883be94) == 0) {
    uVar5 = uVar5 & 0xffff0000 | 0x6014;
  }
  return (uVar5 & 0xffff0000 | (uint)(ushort)((short)uVar5 + uVar6)) +
         (uVar2 & 0xffff0000 | (uint)(uVar3 & 0xfbff)) + uVar7 + (uVar4 | 0x48050000) + uVar8 +
         -0x3b7f62ac;
}



// WARNING: Removing unreachable block (ram,0x08049e81)

undefined4 log_size_7_var_007(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804a178)
// WARNING: Removing unreachable block (ram,0x0804a080)
// WARNING: Removing unreachable block (ram,0x0804a08d)

int log_size_7_var_008(void)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint5 uVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  iVar2 = 0x1f;
  while (0x5af56cU >> iVar2 == 0) {
    iVar2 = iVar2 + -1;
  }
  uVar10 = iVar2 << 1;
  uVar1 = 0x649d4cae - (uVar10 | 1);
  uVar4 = (CONCAT14(0x649d4cae < (uVar10 | 1),0x11e) | 0xd0110000) >> 3;
  uVar6 = (ushort)uVar4;
  uVar5 = (uint)uVar4 & 0xffff0000 | 0x80000000;
  uVar9 = uVar10 & 0xff | 0x26906901;
  uVar7 = (ushort)uVar1;
  uVar8 = (ushort)uVar9;
  bVar11 = CARRY2(uVar7,uVar8);
  uVar7 = uVar7 + uVar8;
  if (!bVar11 && uVar7 != 0) {
    uVar9 = uVar10 & 0xffffff00;
  }
  uVar10 = ((ushort)(bVar11 + 0xcf2a) | 0xd0110000) - (uVar5 | (ushort)(uVar6 << 0xe | uVar6 >> 2));
  bVar3 = (byte)(uVar7 >> 1) & 0x1f;
  return (CONCAT22((short)(uVar5 >> 0x10),0xb17a) & 0xffff7200 | 0x3d) +
         ((CONCAT11(-1 << ((byte)uVar7 & 0x1f),0xfe) | 0xffff0000) << 7 |
         (uint)(byte)('\0' >> ((byte)uVar7 & 0x1f))) + (uVar1 & 0xffff0000 | (uint)(uVar7 >> 1)) +
         uVar9 + (uVar10 >> bVar3 | uVar10 << 0x21 - bVar3) + -0x3a3c9280;
}



// WARNING: Removing unreachable block (ram,0x0804a24b)
// WARNING: Removing unreachable block (ram,0x0804a2b8)

int log_size_7_var_009(void)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  short sVar12;
  ushort uVar13;
  ushort uVar14;
  
  uVar4 = 0x1f;
  while (0xffff8e8eU >> uVar4 == 0) {
    uVar4 = uVar4 - 1;
  }
  uVar1 = 0x1f;
  if (uVar4 != 0) {
    while (uVar4 >> uVar1 == 0) {
      uVar1 = uVar1 - 1;
    }
  }
  sVar12 = (short)uVar1 * 2;
  uVar13 = sVar12 + 0x77da;
  bVar8 = -(char)(sVar12 + 0x6e3fU);
  uVar9 = ((uint)((ushort)(sVar12 + 0x6e3fU) >> 9) << 8 | 0xaf6d0000 | (uint)bVar8) ^ 0xf300;
  uVar11 = ((ushort)(0xa6d4 - ((short)uVar1 < 0)) | 0xa0000000) & 0xddc09ccc;
  uVar14 = uVar13 | (ushort)uVar9;
  bVar6 = 0xe - (char)((int)(uVar1 & 0xffff0000) >> 0x1f);
  uVar4 = (uVar13 & 0xffffff00 | (uint)(byte)((char)uVar13 + 1)) ^ 0x1d;
  bVar3 = bVar6 % 0x11;
  uVar4 = (uint)(ushort)((ushort)(uVar4 >> bVar3) | (ushort)(uVar4 << 0x11 - bVar3));
  uVar5 = uVar4 | 0x80000000;
  bVar6 = bVar6 & (byte)(uVar4 >> 8);
  uVar10 = uVar9 & 0xffffff00 | 0x4000 | (uint)(byte)(bVar8 + 0x65);
  uVar4 = CONCAT22((short)((uint)(ushort)(sVar12 + 0x6dc0) * -2 + 0x3b800000 >> 0x10),0xd1e9);
  iVar2 = uVar5 - uVar4;
  if (uVar5 != uVar4) {
    uVar5 = uVar4;
  }
  if (-1 < iVar2) {
    uVar10 = uVar9 & 0xffff0000 | uVar5 & 0xffff;
  }
  bVar8 = (byte)uVar5;
  bVar7 = bVar6 ^ (bVar8 == bVar6) * (bVar6 ^ (byte)(uVar10 >> 8));
  bVar3 = bVar8 ^ (bVar8 != bVar6) * (bVar8 ^ bVar7);
  uVar4 = (uint)CONCAT11(0x9c,bVar7);
  if ((uVar5 >> (uVar5 & 0x1f) & 1) == 0) {
    uVar11 = uVar4 | 0x80000000;
  }
  return (uVar5 & 0xffffff00 | (uint)bVar3) +
         (uVar10 & 0xffffff00 | (uint)(byte)((char)uVar10 + bVar3 + (bVar8 < bVar6))) +
         (uVar4 | 0x77010000) + uVar5 + uVar11 +
         (uVar1 & 0xffff0000 | (uint)(ushort)((uVar14 << 1 | (ushort)((short)uVar14 < 0)) + 0x7df7))
         + -0x1d701af8;
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


