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

typedef struct NoteAbiTag NoteAbiTag, *PNoteAbiTag;

struct NoteAbiTag {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    dword abiType; // 0 == Linux
    dword requiredKernelVersion[3]; // Major.minor.patch
};

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

typedef enum Elf_ProgramHeaderType_x86 {
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

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
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



// WARNING: Unknown calling convention -- yet parameter storage is locked

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

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,__libc_csu_init,__libc_csu_fini,param_1,auStack_4)
  ;
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
  
  for (iVar1 = 0x1f; 0x1803295U >> iVar1 == 0; iVar1 = iVar1 + -1) {
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
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  uint uVar11;
  uint uVar12;
  int iVar10;
  
  for (uVar11 = 0x1f; 0xffff006bU >> uVar11 == 0; uVar11 = uVar11 - 1) {
  }
  uVar11 = uVar11 | 0xc0000000;
  uVar1 = 0x7dbbc140 / (ulonglong)uVar11;
  uVar8 = (uint)(0x7dbbc140 % (ulonglong)uVar11);
  iVar9 = 0;
  if (uVar8 != 0) {
    for (; (uVar8 >> iVar9 & 1) == 0; iVar9 = iVar9 + 1) {
    }
  }
  uVar8 = (int)uVar1 + 0x2210c080;
  if ((POPCOUNT(uVar8 & 0xff) & 1U) != 0) {
    uVar11 = CONCAT22((short)(uVar11 >> 0x10),0xe800);
  }
  iVar3 = (int)uVar1 << 1;
  uVar5 = CONCAT31(0xffff00,(char)iVar9);
  uVar12 = uVar5 + 0xd000e801;
  uVar4 = CONCAT11(uVar5 < 0x2fff17ff && uVar12 != 0,(char)iVar9);
  iVar9 = -(CONCAT31((int3)((uint)iVar9 >> 8),(uVar1 & 0x100) != 0) & 0x5a28e0bd);
  sVar7 = (short)iVar9 + -0x3f7f;
  iVar10 = CONCAT22((short)((uint)iVar9 >> 0x10),sVar7);
  iVar9 = CONCAT22(0xffff,uVar4) << 1;
  uVar11 = CONCAT22((short)(uVar11 >> 0x10),CONCAT11(0x3559 < (ushort)uVar1,(char)uVar11 + '\x1f'))
           | uVar12;
  uVar6 = (ushort)((uint)iVar9 >> 0x10);
  bVar2 = ((byte)((uint)iVar9 >> 0x18) & 0x1f) % 0x11;
  return CONCAT22((short)((uint)iVar3 >> 0x10),(ushort)(byte)iVar3 * (ushort)(byte)(uVar11 >> 8)) +
         uVar11 + ((uint)(uVar6 >> 8) | ((uVar6 & 0xff) << 0x10) >> 8 | (uint)uVar4 << 0x19) +
         CONCAT31((int3)((uint)iVar10 >> 8),(char)sVar7) +
         CONCAT22((short)(uVar12 >> 0x10),
                  (ushort)((uVar12 & 0xffff) << bVar2) | (ushort)((uVar12 & 0xffff) >> 0x11 - bVar2)
                 ) + (uVar8 - iVar10) + (CONCAT22(0x2210,(short)iVar9 + -0x3f80) | uVar12) +
         0x41ee92d3;
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
  int iVar1;
  undefined5 uVar2;
  ushort uVar3;
  short sVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined2 uVar9;
  uint uVar10;
  short sVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  
  for (iVar1 = 0; (0xc7d500ceU >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
  }
  uVar7 = iVar1 + 0xacc684b;
  uVar2 = CONCAT14(0x9c30797a < CONCAT22((short)(uVar7 >> 0x10),(short)uVar7 >> 0xd),0x7498531);
  uVar12 = (ushort)(uint)((uint5)uVar2 >> 0xe) ^ 0x86d8;
  bVar15 = (POPCOUNT(uVar12 & 0xff) & 1U) == 0;
  sVar11 = CONCAT11((POPCOUNT(uVar7 & 0xff) & 1U) != 0,8) * (ushort)bVar15 * 2;
  sVar4 = sVar11 + -1;
  iVar8 = CONCAT22(0x7e3b,sVar11) << 1;
  uVar9 = (undefined2)((uint)iVar8 >> 0x10);
  uVar3 = CONCAT11((char)((ushort)sVar4 >> 8) << 1,(char)sVar4) >> 1;
  uVar13 = (CONCAT22((ushort)((uint5)uVar2 >> 0x1e),uVar12 + 0x8b0c) | 0x29880000) + (uint)uVar3 + 1
  ;
  uVar12 = (short)CONCAT31((int3)(CONCAT22(0xffe9,CONCAT11((POPCOUNT((0x89U >> bVar15 |
                                                                     0x89 << 0x10 - bVar15) + 0xbd49
                                                                     & 0xff) & 1U) != 0,bVar15)) >>
                                 8),bVar15 << 7) + 0x75db;
  uVar14 = uVar13 ^ 1 << (uVar12 & 0x1f);
  bVar5 = (byte)uVar12;
  bVar6 = bVar5 << 1 | bVar5 >> 7;
  uVar7 = CONCAT31((int3)(CONCAT22(0xffe9,uVar12) >> 8),(char)iVar8) | 0x27;
  iVar1 = (short)((ushort)(byte)(((char)uVar3 + -0x69) - ((uVar13 >> (uVar12 & 0x1f) & 1) != 0)) <<
                 0xe) * -0x545f;
  sVar11 = (short)iVar1;
  uVar13 = CONCAT22(0x7078,sVar11);
  if (sVar11 != iVar1) {
    uVar7 = CONCAT22(0xffe9,(short)uVar14);
  }
  uVar10 = 0x51f40f27 << (bVar5 & 0x1f) | 1 << (bVar6 & 0x1f);
  uVar7 = CONCAT22((short)(uVar7 >> 0x10),(ushort)uVar7 >> ((byte)uVar7 & 0x1f));
  if (CONCAT22(uVar9,-((ushort)CONCAT31((int3)(CONCAT22(uVar9,CONCAT11((char)((uint)iVar8 >> 8) << 1
                                                                       ,(char)iVar8)) >> 8),bVar6) |
                      0xf00)) == uVar14) {
    uVar7 = uVar14;
  }
  uVar14 = (uint)((ushort)((ushort)(byte)('\0' << ((byte)uVar7 & 0x1f)) << 8) >> 1);
  iVar8 = CONCAT31((uint3)(CONCAT22((short)(uVar10 >> 0x10),-(short)uVar10) >> 0xc),1);
  uVar7 = CONCAT22((short)(uVar7 >> 0x10),CONCAT11((-1 < (int)uVar14) << 1,(byte)uVar7 - 1));
  iVar1 = 0;
  if (uVar7 != 0) {
    for (; (uVar7 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  return (iVar8 << 0x16 | (uint)(CONCAT14(CARRY4(uVar13,uVar13),iVar8) >> 0xb)) + iVar1 +
         CONCAT22((short)(uVar13 * 2 >> 0x10),(short)(uVar13 * 2) * -0x51f1) + uVar14 + 0x1ecf0efd;
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
  
  for (iVar1 = 0; (0x94baU >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
  }
  return 0xf4f80000;
}



// WARNING: Removing unreachable block (ram,0x08049cd5)
// WARNING: Removing unreachable block (ram,0x08049cef)

int log_size_7_var_006(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  short sVar8;
  uint uVar9;
  
  for (iVar1 = 0; (0x65b98078U >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
  }
  iVar1 = ((ushort)(CONCAT11(0x10,(char)iVar1) | 0x400) & 0x242b) * 0x100f0;
  uVar7 = CONCAT11((short)((uint)iVar1 >> 0x10) == 0,(char)((uint)iVar1 >> 0x10));
  sVar4 = uVar7 + 0x78;
  sVar8 = sVar4;
  if (0xff87 < uVar7 || sVar4 == 0) {
    sVar8 = 0x438;
  }
  if (0xff87 >= uVar7 && sVar4 != 0) {
    uVar7 = 0x8078;
  }
  uVar6 = ((uint)(uVar7 & 0x3fff) << 0x10 | 0x753f) / 0xc008;
  uVar5 = CONCAT22(0x1c3a,(short)uVar6);
  uVar3 = CONCAT22(0x8056,sVar8) >> 4;
  uVar2 = 0;
  if (uVar5 != 0) {
    for (; (uVar5 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  sVar4 = (short)(char)uVar6 * (short)(char)(uVar6 >> 8);
  uVar6 = CONCAT22(0x1c3a,(ushort)CONCAT31((int3)(CONCAT22(0x1c3a,sVar4) >> 8),(char)sVar4) | 0xc0)
          & 0xffff3fff;
  uVar9 = CONCAT22(0x65b9,(ushort)uVar2 >> 0xf | 0xf2);
  uVar6 = CONCAT22((short)(uVar6 >> 0x10),
                   CONCAT11((char)((ushort)uVar6 % (ushort)(byte)uVar6),
                            (char)((ushort)uVar6 / (ushort)(byte)uVar6))) & uVar9;
  sVar4 = (short)uVar3 * -0x7b4f - (ushort)(((ushort)uVar2 >> 10 & 1) != 0);
  uVar5 = CONCAT22(0x8000,sVar4) | 0x9890000;
  if ((uVar5 & 0x6883be94) == 0) {
    uVar6 = CONCAT22((short)(uVar6 >> 0x10),0x6014);
  }
  return CONCAT22((short)(uVar6 >> 0x10),(short)uVar6 + sVar4) + (uVar2 & 0xfffffbff) + uVar5 +
         (uVar3 | 0x40000000) + uVar9 + -0x3b7f62ac;
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
  int iVar1;
  byte bVar2;
  uint5 uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  for (iVar1 = 0x1f; 0x5af56cU >> iVar1 == 0; iVar1 = iVar1 + -1) {
  }
  uVar9 = iVar1 << 1 | 1;
  uVar3 = CONCAT14(0x649d4cae < uVar9,0xd011011e) >> 3;
  uVar4 = (ushort)(uVar3 >> 0x10);
  uVar5 = (ushort)uVar3;
  uVar8 = CONCAT31(0x269069,(char)uVar9);
  uVar6 = (ushort)(0x649d4cae - uVar9);
  uVar7 = (ushort)uVar8;
  bVar11 = CARRY2(uVar6,uVar7);
  uVar6 = uVar6 + uVar7;
  if (!bVar11 && uVar6 != 0) {
    uVar8 = iVar1 << 1 & 0xffffff00;
  }
  uVar10 = CONCAT22(0xd011,bVar11 + 0xcf2a) -
           (CONCAT22(uVar4,uVar5 << 0xe | uVar5 >> 2) | 0x80000000);
  bVar2 = (byte)(uVar6 >> 1) & 0x1f;
  return (CONCAT22(uVar4 | 0x8000,0xb13d) & 0xffff72ff) +
         CONCAT31((int3)((uint)(CONCAT22(0xffff,CONCAT11(-1 << ((byte)uVar6 & 0x1f),0xfe)) << 7) >>
                        8),'\0' >> ((byte)uVar6 & 0x1f)) +
         CONCAT22((short)(0x649d4cae - uVar9 >> 0x10),uVar6 >> 1) + uVar8 +
         (uVar10 >> bVar2 | uVar10 << 0x21 - bVar2) + -0x3a3c9280;
}



// WARNING: Removing unreachable block (ram,0x0804a24b)
// WARNING: Removing unreachable block (ram,0x0804a2b8)

int log_size_7_var_009(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  undefined2 uVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  short sVar13;
  ushort uVar14;
  ushort uVar15;
  byte bVar4;
  
  for (uVar5 = 0x1f; 0xffff8e8eU >> uVar5 == 0; uVar5 = uVar5 - 1) {
  }
  iVar1 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  sVar13 = (short)iVar1 * 2;
  uVar14 = sVar13 + 0x77da;
  cVar10 = -(char)(sVar13 + 0x6e3f);
  uVar9 = CONCAT22(0xaf6d,CONCAT11((byte)((ushort)(sVar13 + 0x6e3f) >> 9),cVar10)) ^ 0xf300;
  uVar12 = CONCAT22(0xa000,-0x592c - (ushort)((short)iVar1 < 0)) & 0xddc09ccc;
  uVar15 = uVar14 | (ushort)uVar9;
  bVar6 = 0xe - (char)(iVar1 >> 0x1f);
  uVar5 = CONCAT11((char)(uVar14 >> 8),(char)uVar14 + '\x01') ^ 0x1d;
  bVar3 = bVar6 % 0x11;
  uVar14 = (ushort)(uVar5 >> bVar3) | (ushort)(uVar5 << 0x11 - bVar3);
  uVar5 = uVar14 | 0x80000000;
  bVar6 = bVar6 & (byte)(uVar14 >> 8);
  uVar11 = CONCAT31((int3)(uVar9 >> 8),cVar10 + 'e') | 0x4000;
  uVar9 = CONCAT22((short)((uint)(ushort)(sVar13 + 0x6dc0) * -2 + 0x3b800000 >> 0x10),0xd1e9);
  iVar2 = uVar5 - uVar9;
  if (uVar5 != uVar9) {
    uVar5 = uVar9;
  }
  if (-1 < iVar2) {
    uVar11 = CONCAT22(0xaf6d,(short)uVar5);
  }
  bVar4 = (byte)uVar5;
  bVar7 = bVar6 ^ (bVar4 == bVar6) * (bVar6 ^ (byte)(uVar11 >> 8));
  bVar3 = bVar4 ^ (bVar4 != bVar6) * (bVar4 ^ bVar7);
  uVar8 = CONCAT11(0x9c,bVar7);
  if ((uVar5 >> (uVar5 & 0x1f) & 1) == 0) {
    uVar12 = CONCAT22((short)(uVar12 >> 0x10),uVar8);
  }
  return CONCAT31((int3)(uVar5 >> 8),bVar3) +
         CONCAT31((int3)(uVar11 >> 8),(char)uVar11 + bVar3 + (bVar4 < bVar6)) +
         CONCAT22(0x7701,uVar8) + uVar5 + uVar12 +
         CONCAT22((short)((uint)iVar1 >> 0x10),(uVar15 << 1 | (ushort)((short)uVar15 < 0)) + 0x7df7)
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


