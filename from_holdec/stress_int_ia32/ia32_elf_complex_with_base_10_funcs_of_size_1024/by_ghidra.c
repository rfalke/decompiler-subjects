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
  
  iVar1 = log_size_10_var_000(&stack0x00000004);
  iVar2 = log_size_10_var_001();
  iVar3 = log_size_10_var_002();
  iVar4 = log_size_10_var_003();
  iVar5 = log_size_10_var_004();
  iVar6 = log_size_10_var_005();
  iVar7 = log_size_10_var_006();
  iVar8 = log_size_10_var_007();
  iVar9 = log_size_10_var_008();
  iVar10 = log_size_10_var_009();
  if (iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 == 0) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __assert_fail("sum==0","source_complex_with_base_10_funcs_of_size_1024.c",0x1f,
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



// WARNING: Removing unreachable block (ram,0x08049aa8)
// WARNING: Removing unreachable block (ram,0x080495f6)
// WARNING: Removing unreachable block (ram,0x08049314)
// WARNING: Removing unreachable block (ram,0x080495f9)
// WARNING: Removing unreachable block (ram,0x08049d9b)

undefined8 log_size_10_var_000(void)

{
  undefined2 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  uint5 uVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  sbyte sVar13;
  ushort uVar14;
  byte bVar17;
  ushort uVar15;
  uint uVar16;
  byte bVar18;
  ushort uVar19;
  short sVar20;
  undefined4 in_EDX;
  int iVar21;
  char cVar22;
  ushort uVar23;
  ushort uVar24;
  char cVar30;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  byte bVar29;
  uint uVar28;
  uint uVar31;
  ushort uVar33;
  uint uVar32;
  uint uVar34;
  int iVar35;
  ushort uVar36;
  ushort uVar37;
  short sVar38;
  short sVar39;
  uint uVar40;
  uint uVar41;
  bool bVar42;
  bool bVar43;
  bool in_PF;
  bool bVar44;
  
  iVar10 = 0;
  while ((0x6d42aa00U >> iVar10 & 1) == 0) {
    iVar10 = iVar10 + 1;
  }
  uVar16 = ((uint)CONCAT11(!in_PF + '5',0x90) | 0x84000000) + 0xc673e739;
  if (-1 < (int)uVar16) {
    uVar16 = 0xc673e738;
  }
  uVar11 = 0;
  while ((0x6a2790e0U >> uVar11 & 1) == 0) {
    uVar11 = uVar11 + 1;
  }
  uVar19 = (short)uVar16 + 0xe738;
  bVar7 = (byte)(uVar16 >> 0x11);
  uVar24 = 0xd6a3;
  if ((uVar11 >> 0x10 & 1) != 0) {
    uVar24 = uVar19;
  }
  uVar9 = (CONCAT31(0x6a2790,-0x20 >> (bVar7 & 0x1f)) & 0xffff) *
          ((uVar16 & 0x1fe0000) >> 0x11 | 0xc000);
  uVar36 = (ushort)((short)(uVar9 >> 0x10) != 0) << 0xf | 0x6738;
  uVar14 = CONCAT11((byte)(uVar16 >> 0x19),(char)uVar11);
  uVar16 = ((uVar11 ^ 0x10000) & 0xffff0000 | (uint)uVar14) + (uVar9 & 0xffff | 0x6a270000) * 4;
  uVar14 = CONCAT11((char)(uVar11 >> 8),bVar7) - uVar14;
  bVar7 = (byte)(uVar9 & 0xffff);
  uVar37 = (ushort)uVar9 & 0xff00 | (ushort)(byte)(bVar7 >> 1 | bVar7 << 7);
  uVar25 = CONCAT22(0xc673,uVar36) * 0xccb3ebf;
  uVar15 = (ushort)uVar16;
  uVar23 = (short)uVar25 << 1 | 1;
  uVar9 = ((uint)(ushort)(uVar37 << 1 | (ushort)((short)uVar37 < 0)) | 0x6a270000) - 1 <<
          ((byte)uVar14 & 0x1f);
  uVar37 = (uVar36 ^ 0x200) + 0x9680;
  uVar11 = CONCAT22(uVar19,uVar14 & 0xff | (ushort)(byte)((char)((uint)uVar14 >> 8) + 1) << 8) << 1;
  bVar7 = (byte)uVar11;
  bVar8 = (byte)(((uint)uVar19 << 0x10) >> 0x1f);
  uVar37 = uVar37 ^ (uVar37 >> 5 & 1) << 5;
  uVar40 = CONCAT22(0xc673,uVar37);
  uVar19 = (ushort)uVar9;
  uVar9 = uVar9 & 0xffff0000 | (uint)(ushort)(uVar19 ^ 1 << (uVar15 & 0xf));
  bVar42 = (uVar19 >> (uVar15 & 0xf) & 1) != 0;
  uVar25 = uVar25 & 0xffff0000 | (uint)uVar23 & 0xffffff00 | uVar11 >> 8 & 0xff;
  bVar12 = (bVar7 | bVar8) << 1 | bVar42;
  if ((int)uVar25 < (int)uVar40) {
    uVar9 = (int)uVar9 >> 0x1f;
  }
  iVar10 = 0;
  if (uVar25 != 0) {
    while ((uVar25 >> iVar10 & 1) == 0) {
      iVar10 = iVar10 + 1;
    }
  }
  uVar34 = (uVar16 & 0xffff | (uint)uVar24 << 0x10) * -0x534f03f2 & ~(1 << (uVar16 & 0x1f));
  bVar17 = (byte)uVar23 ^ bVar12;
  if ((char)bVar17 < '\0') {
    uVar25 = uVar16;
  }
  uVar14 = (short)uVar25 + 0x4897;
  uVar19 = (ushort)((uVar9 & 0xffff) * (uVar34 & 0xffff) >> 0x12);
  uVar24 = uVar19 & 0xff;
  uVar24 = uVar24 | (ushort)(byte)((char)((uint)(ushort)(uVar24 | (ushort)(byte)(((char)((uint)
                                                  uVar19 >> 8) - (char)uVar14) - 1) << 8) >> 8) >>
                                  0xe) << 8;
  bVar29 = (byte)((uint)uVar14 >> 8);
  bVar18 = (bVar7 & 3 | bVar8) << 1 | bVar42;
  uVar9 = uVar11 & 0xffff0000 |
          (uint)CONCAT11(bVar17 << 1 | (0x5f46c9c2 < uVar34 || 0xfffffffe < uVar34 + 0xa0b9363d),
                         bVar12) & 0xffffff00 |
          (uint)(byte)(bVar12 << ((bVar7 & 0xf | bVar8) << 1 | bVar42));
  bVar7 = bVar29 >> 4 | bVar29 << 4;
  uVar19 = uVar14 + uVar24;
  uVar25 = uVar25 & 0xffff0000 | (uint)uVar19;
  if (uVar19 == 0 || SCARRY2(uVar14,uVar24) != (short)uVar19 < 0) {
    uVar9 = uVar11 & 0xffff0000 | (uint)uVar14;
  }
  uVar19 = CONCAT11(((byte)((char)bVar29 >> 7) >> bVar18 | ((char)bVar29 >> 7) << 8 - bVar18) +
                    bVar7 + CARRY2(uVar14,uVar24),bVar7) + 0x73f4;
  bVar8 = (byte)((uint)(ushort)(uVar14 ^ (uVar14 >> 2 & 1) << 2) + 0xdd516098 >> 8);
  bVar7 = (byte)uVar9 & 0x1f;
  uVar40 = (uVar40 ^ 0x200000) & 0xffff0000 | (uint)(ushort)((short)uVar37 >> 1) |
           (uint)(CONCAT14(0xa8 < bVar8 || 0xfe < (byte)(bVar8 + 0x57),uVar25) >> bVar7) |
           uVar25 << 0x21 - bVar7;
  bVar42 = (uVar19 & 0x400) == 0;
  bVar7 = (byte)uVar9 & 0x1f;
  uVar25 = (uint)(int)(short)uVar9 >> bVar7 | (int)(short)uVar9 << 0x20 - bVar7;
  uVar11 = 0x1f;
  if (uVar40 != 0) {
    while (uVar40 >> uVar11 == 0) {
      uVar11 = uVar11 - 1;
    }
  }
  uVar9 = ~uVar9;
  bVar7 = (byte)uVar25 & 0x1f;
  uVar40 = uVar40 >> bVar7 | uVar40 << 0x20 - bVar7;
  uVar34 = (uint)(ushort)((short)uVar11 + (ushort)(uVar15 != 0) & 0xff | (ushort)bVar42 << 8);
  uVar40 = (uVar40 ^ 1 << ((uint)(ushort)(uVar15 ^ (ushort)(uVar15 == 0) * (uVar15 ^ (ushort)uVar40)
                                         ) & 0x1f)) << 1;
  uVar41 = uVar40 | 1;
  uVar9 = CONCAT22((ushort)(((uVar9 & 0xff00) << 8) >> 0x10) | (ushort)((uVar9 << 0x18) >> 0x10),
                   (((ushort)(uVar9 >> 0x18) | (ushort)(uVar9 >> 8) & 0xff00) ^ (ushort)uVar25) + 1)
          >> 1 | 0xfed00b32;
  uVar24 = (ushort)uVar9;
  uVar11 = (uVar11 & 0xffff0000 | uVar34) >> 4;
  uVar9 = uVar9 & 0xffff0000 | 0xffff;
  if (!bVar42) {
    uVar9 = uVar34 << 0x1c | uVar11;
  }
  bVar12 = (byte)uVar11;
  lVar4 = (longlong)
          (int)((uint)(ushort)((short)(((uint)(ushort)((int)(((uint)(ushort)((char)bVar29 >> 7) <<
                                                              0x10 | (uint)uVar19 & 0x7fff800) << 5)
                                                      >> 0x11) << 0x10) >> 8) * 2 - (short)uVar41)
               << 1) * (longlong)(int)(char)bVar12;
  uVar19 = (short)uVar9 + 0xd5c0;
  bVar8 = (byte)lVar4;
  bVar17 = bVar12 ^ (bVar8 == bVar12) * bVar12;
  bVar7 = bVar17 >> 1;
  if ('\0' < (char)(bVar7 | 0x80)) {
    uVar41 = uVar40 & 0xffff0000 | (uint)bVar7 | 0x80;
  }
  bVar8 = bVar8 ^ (bVar8 == bVar12) * (bVar8 & bVar17) | 2;
  bVar12 = (byte)uVar19;
  uVar24 = ((ushort)bVar7 | 0x80) ^
           (ushort)((int)(uVar9 & 0xffff0000 |
                          (uint)(ushort)((short)uVar9 << 5 |
                                        (0xffff - (uVar24 >> 2 | uVar24 << 0xe) >> (bVar12 & 0x1f))
                                        >> 0xb) | 0xad46dc1a) >> (bVar12 & 0x1f));
  uVar11 = CONCAT22((short)(uVar11 >> 8) >> 7,uVar24);
  lVar4 = (ulonglong)
          CONCAT22((short)((ulonglong)lVar4 >> 0x10),
                   CONCAT11(-1 < (short)uVar24,bVar8 << (bVar12 & 7) | bVar8 >> 8 - (bVar12 & 7))) *
          (ulonglong)uVar11;
  iVar10 = (int)lVar4;
  uVar11 = uVar11 >> 1;
  uVar37 = uVar19 * 2 | (ushort)((short)uVar19 < 0);
  uVar9 = iVar10 + 1;
  uVar9 = uVar9 & 0xffff0000 | (uint)CONCAT11(SCARRY4(iVar10,1) == (int)uVar9 < 0,(char)uVar9);
  bVar7 = (byte)uVar37 & 0xf;
  uVar24 = (short)uVar41 + 0x7385;
  if ((short)((ulonglong)lVar4 >> 0x20) < (short)uVar11) {
    uVar24 = uVar19 << bVar7 | uVar19 >> 0x10 - bVar7;
  }
  uVar40 = uVar11 ^ (uint)(uVar9 == uVar11) * (uVar11 ^ uVar37);
  uVar9 = uVar9 ^ (uint)(uVar9 == uVar11) * (uVar9 & uVar40);
  bVar7 = (byte)uVar37 & 0xf;
  uVar19 = (ushort)uVar9;
  uVar19 = uVar19 << bVar7 | uVar19 >> 0x10 - bVar7;
  uVar37 = uVar37 + 0x12 + uVar19;
  lVar4 = (longlong)(int)(uVar9 & 0xffff0000 | (uint)uVar19) *
          (longlong)(int)(uVar41 & 0xffff0000 | (uint)uVar24);
  uVar19 = (ushort)((ulonglong)lVar4 >> 0x10);
  uVar16 = (uVar16 & 0xffff0000 | (uint)uVar37) * 10 + 0x1d;
  uVar37 = uVar37 * -0x16b2;
  uVar11 = (uint)(ushort)(CONCAT11((byte)(uVar40 >> 8) >> 1,-(char)uVar40) | 0x8000);
  uVar9 = uVar16 & 0xffff0000 | (uint)(ushort)((short)uVar16 + 0xab8c) | 0xd9;
  uVar16 = (((uint)uVar19 << 0x11 |
            (uint)(ushort)(short)(char)((byte)((ulonglong)lVar4 >> 8) & 0xfe | (short)uVar19 < 0)) +
           0xe22b3a1f) - uVar9;
  uVar25 = ((uint)((ulonglong)lVar4 >> 0x20) | 0x9600) ^ 1 << (uVar9 & 0x1f);
  if ((int)uVar25 < 0 != (int)(uVar25 << 1 | (uint)((int)uVar25 < 0)) < 0) {
    uVar11 = uVar16 & 0xff00 | (uint)((int)uVar16 < 0);
  }
  uVar9 = (uint)(byte)((char)uVar9 >> 0x1d) + 0xdd809614;
  uVar26 = (uVar40 & 0xffff0000 | uVar11) ^ 1 << (uVar9 & 0x1f);
  uVar25 = (uVar41 & 0xffff0000 | 0xffff) + 0xe6f2a4da;
  bVar8 = (char)uVar9 - 0x14;
  uVar9 = uVar25 >> 4;
  uVar25 = uVar25 * 0x10000000;
  bVar7 = (bVar8 & 0x1f) % 0x11;
  uVar11 = (uint)CARRY2((ushort)uVar9,uVar37) << 0x10 | uVar26 & 0xffff;
  uVar34 = uVar26 & 0xffff0000;
  uVar19 = (ushort)(uVar11 >> bVar7) | (ushort)(uVar11 << 0x11 - bVar7);
  if (-1 < (short)((ushort)uVar9 + uVar37 + 0xd2 +
                  (ushort)(((char)(((ushort)uVar16 & 0x3f00 | 1) / (ushort)(bVar8 | 0xc0)) + 0x65U
                            >> 3 & 1) != 0))) {
    uVar19 = (ushort)(byte)-(char)uVar40;
  }
  uVar40 = (uVar34 | uVar19) * -0x61ad1c0f;
  bVar7 = (char)((int)(uVar16 & 0xffff0000) >> 0x27) - 1;
  uVar11 = (int)(short)uVar37;
  if (!bVar42) {
    uVar11 = uVar16 & 0xffff0000;
  }
  uVar24 = (ushort)uVar40;
  uVar19 = CONCAT11(0x8c,(char)uVar19 + 'u') >> (bVar7 & 0x1f);
  bVar42 = (bVar8 & 1) != 0;
  uVar41 = (uint)bVar7 << 1;
  uVar37 = (short)((uVar9 & 0xffff0000 | uVar25) >> 6) << ((byte)uVar41 & 0x1f | bVar42);
  uVar19 = CONCAT11((char)((uint)uVar19 >> 8) << (bVar7 & 0x1f),(char)uVar19 + -1) + 0xbc03;
  uVar31 = 0 << (bVar7 & 0x1f) & 0xffffff00;
  if ((uVar37 & 1) == 0) {
    uVar31 = uVar11;
  }
  uVar28 = uVar41 & 0xffffff00 | uVar41 & 0xff | (uint)bVar42 | 0xc0;
  bVar12 = (byte)uVar28;
  bVar8 = (byte)(((ushort)CONCAT31((uint3)(byte)(uVar19 >> 8),0x71) & 0x3fff) / (ushort)bVar12);
  uVar27 = uVar34 | 0x43fc | uVar28;
  bVar18 = (char)(uVar31 >> 0x11) + 1;
  bVar7 = ((byte)(uVar31 >> 0x19) | (byte)((uVar28 << 0xf) >> 8)) + 0x11;
  uVar37 = (ushort)(((uVar9 & 0xffc00000 | uVar25) >> 6 | (uint)uVar37) >> 1) >> 1;
  sVar39 = (short)uVar27;
  uVar14 = sVar39 << 0xf;
  bVar17 = (byte)((uVar41 & 0xffffff00) >> 8);
  uVar31 = (int)(uVar11 & 0xffff0000 |
                (uint)(ushort)(((short)uVar11 + -0x4875) - (ushort)(bVar17 < bVar8))) >> 5;
  uVar40 = uVar40 & 0xffff0000 |
           (uint)(ushort)((short)(uVar24 & ~(1 << (uVar24 & 0xf))) >> ((byte)uVar41 & 0x1f | bVar42)
                         );
  if ((int)uVar31 < -0x1fbe96b4) {
    uVar40 = uVar27;
  }
  uVar23 = uVar37 & 0xff00 | uVar14;
  uVar15 = CONCAT11(bVar17 - bVar8,bVar12) + 1;
  bVar8 = (byte)uVar15;
  bVar29 = (byte)((uint)(ushort)((short)(uVar23 | (ushort)(((uint)(uVar37 | uVar14) & 0xfe) >> 1))
                                >> 8) >> 8) >> (bVar8 & 0x1f);
  bVar17 = bVar18 << (bVar8 & 7) | bVar18 >> 8 - (bVar8 & 7);
  bVar18 = bVar7 | 0xc0;
  uVar37 = (ushort)(byte)(uVar16 >> 0x1b);
  uVar24 = uVar37 / (ushort)bVar18;
  uVar16 = (uVar40 & 0xffff0000 |
           (uint)(ushort)((ushort)uVar40 >> (bVar12 & 0xf) | (ushort)uVar40 << 0x10 - (bVar12 & 0xf)
                         )) + 1;
  lVar4 = (longlong)(int)(uint)uVar15 * -0x4700d3e;
  iVar10 = (int)((ulonglong)lVar4 >> 0x20);
  cVar30 = (char)((uint)(ushort)(uVar24 | uVar37 % (ushort)bVar18 << 8) >> 8);
  uVar37 = (ushort)(byte)((byte)(CONCAT11(iVar10 != 0 && iVar10 != -1,cVar30) >> 3) | cVar30 << 6)
           << 8;
  uVar40 = uVar16 & 0xffff0000;
  uVar36 = (short)uVar16 * -0x187c;
  uVar14 = (ushort)((ulonglong)lVar4 >> 0x10);
  uVar27 = CONCAT22(uVar14,CONCAT11(bVar17,(char)lVar4));
  uVar28 = (uint)CONCAT11(bVar18 >> 1 | bVar7 * -0x80,bVar17) & 0xffffff00;
  uVar15 = (ushort)uVar28 | (ushort)(byte)((ulonglong)lVar4 >> 8);
  bVar7 = ((char)(uVar23 >> 8) >> (bVar8 & 0x1f)) + (char)((uint)(uVar24 | uVar37) >> 8) + 1;
  uVar16 = uVar27 << 0x12;
  uVar27 = uVar27 >> 0xe | uVar16;
  if ((short)(uVar15 & uVar36) < 0) {
    uVar27 = (((uint)uVar14 & 0xc000) << 0x10) >> 0xe | uVar16 | uVar31 & 0xffff;
  }
  uVar24 = uVar37 >> 6 | uVar24 << 10;
  uVar16 = (uint)(ushort)((ushort)uVar27 ^ uVar15) & 0xffffff0f;
  uVar27 = uVar27 & 0xffff0000 | uVar16;
  sVar13 = (sbyte)uVar16;
  uVar33 = (ushort)((int)(uVar11 & 0xffff0000) >> 0x15);
  uVar14 = (ushort)uVar31 >> sVar13 | uVar36 << 0x10 - sVar13;
  uVar23 = uVar14 ^ (ushort)(uVar24 == uVar14) * (uVar14 ^ uVar15);
  uVar37 = uVar24 ^ (ushort)(uVar24 == uVar14) * (uVar24 & uVar23);
  uVar36 = (short)uVar36 >> sVar13;
  uVar32 = uVar40 | uVar36;
  uVar11 = (uint)(ushort)(CONCAT11((char)((uint)(uVar37 & 0xff00) >> 8),
                                   (byte)((uVar37 & 0xff | (ushort)((bVar7 & 8) != 0) << 8) >> 4) |
                                   (char)uVar37 << 5) ^ 0x1800) + 1;
  uVar31 = uVar27 << sVar13 | uVar27 >> 0x21 - sVar13;
  bVar8 = (byte)uVar11;
  bVar17 = bVar29 ^ (bVar8 == bVar29) * (bVar29 ^ (byte)(uVar28 >> 8));
  bVar12 = bVar8 ^ (bVar8 == bVar29) * (bVar8 & bVar17);
  uVar16 = (uint)(ushort)((short)uVar31 << 1 | (ushort)(bVar8 < bVar29)) & 0xffffff0f;
  sVar13 = (sbyte)uVar16;
  uVar28 = CONCAT22(uVar33,uVar23 << sVar13 |
                           ((ushort)(uVar11 & 0xffffff00) | (ushort)bVar12) >> 0x10 - sVar13);
  bVar8 = (byte)((ushort)uVar16 >> 1) & 0x1f;
  uVar37 = (ushort)(((uVar11 & 0xffff0000 |
                     (uint)CONCAT11(-(char)((uVar11 & 0xffffff00) >> 8),bVar12)) << 1 |
                    uVar31 >> 0x1f) >> bVar8) | (ushort)(uVar32 << 0x20 - bVar8);
  iVar10 = 0x1f;
  if (uVar28 != 0) {
    while (uVar28 >> iVar10 == 0) {
      iVar10 = iVar10 + -1;
    }
  }
  iVar35 = (int)(short)uVar37 * (int)(short)uVar37;
  bVar8 = (byte)((ushort)((short)iVar10 << ((byte)iVar10 & 0x1f)) >> 8);
  uVar37 = (ushort)iVar35 << 1 | (ushort)iVar35 >> 0xf;
  uVar16 = (int)(short)uVar37 & 0xffffU | 0xc000;
  uVar11 = ((uint)(ushort)((ushort)((uint)iVar35 >> 0x10) & 0xff | (ushort)bVar8 << 8) & 0x3fff) <<
           0x10 | (int)(short)uVar37 & 0xffffU | 0xc000;
  uVar31 = uVar11 / uVar16;
  uVar28 = uVar11 % uVar16 | (uVar41 | 0xc0) << 0xf;
  iVar21 = uVar28 + 0x54d863be;
  cVar30 = (char)(uVar31 >> 8);
  uVar11 = (int)(short)uVar36 * 0x4579 & 0xffff;
  uVar41 = uVar11 | (uint)uVar33 << 0x10;
  sVar20 = (short)((uint)((int)(short)uVar36 * 0x4579) >> 0x10);
  uVar15 = (((ushort)bVar17 << 8 | (ushort)uVar31 & 0xff) + 0x758f) - (ushort)(cVar30 < '\0');
  uVar27 = (uVar9 & 0xff800000 | uVar25) >> 7 | (uint)uVar19 << 0x1f |
           (uint)(ushort)(uVar15 & 0xff |
                         (ushort)(byte)((char)((uint)uVar15 >> 8) + (char)((uint)iVar21 >> 8)) << 8)
  ;
  uVar16 = (int)CONCAT11(cVar30 << 1 | (sVar20 != 0 && sVar20 != -1),
                         (char)uVar31 + (bVar7 & 0xf7) * '\x02') * (int)(short)iVar21;
  uVar9 = uVar16 >> 0x10;
  uVar16 = uVar16 & 0xffff;
  uVar31 = (int)(CONCAT31(CONCAT21((short)(((uint)((uint3)((uint)iVar10 >> 8) & 0xffff00) << 8) >>
                                          0x10),bVar8 + (char)((uint)iVar35 >> 0x18)),
                          SCARRY4(uVar28,0x54d863be) << 1) | 1) >> 1 & ~(1 << (uVar9 & 0x1f));
  uVar25 = CONCAT22((short)uVar37 >> 0xf,CONCAT11((char)(uVar16 >> 8) >> 0x15,(char)uVar16)) |
           1 << (uVar9 & 0x1f);
  bVar7 = (byte)uVar31 & 0x1f;
  uVar28 = (uint)(CONCAT14(uVar41 < uVar31,uVar27) >> bVar7) | uVar27 << 0x21 - bVar7;
  uVar34 = uVar31 << 0xd | (uVar26 & 0xf8000000) >> 0x13 |
           (uint)(byte)((char)(uVar26 >> 0x13) +
                       ((byte)((uVar31 << 0xd) >> 8) | (byte)(uVar34 >> 0x1b)));
  cVar30 = (char)(uVar25 >> 8);
  uVar9 = (uint)CONCAT11(cVar30,(char)uVar28);
  uVar16 = (uVar28 & 0xffff0000 | uVar9) + 0xe14d1f9f;
  uVar11 = (uint)(ushort)(CONCAT11(cVar30 + (char)(uVar28 >> 8),(char)uVar25) + (short)uVar11);
  if (0 < (short)((ushort)uVar34 | 0xee49)) {
    uVar11 = uVar16 & 0xffff;
  }
  uVar25 = -(uVar25 & 0xffff0000 | uVar11);
  uVar11 = (uVar34 | 0xee49) << 3;
  cVar30 = (char)(uVar11 >> 8);
  uVar16 = (uint)CONCAT11((char)uVar28,(byte)uVar11 | (byte)(uVar16 >> 0x1d));
  uVar19 = (sVar39 + uVar23 + (ushort)(uVar24 < uVar14) | uVar36) << 1 &
           ~(ushort)(1 << (uVar11 >> 8 & 0x1f));
  uVar11 = (uVar25 & 0xffff0000 |
           (uint)(ushort)((ushort)uVar25 >> 1 | (ushort)((uVar25 & 1) != 0) << 0xf)) &
           ~(1 << (uVar16 & 0x1f));
  cVar22 = (char)(uVar16 >> 8);
  if (cVar30 < cVar22) {
    uVar41 = uVar28 & 0xffff0000 | uVar9 & 0xffffff00 | (uint)(byte)(cVar30 - cVar22);
  }
  uVar14 = ((ushort)(uVar40 >> 0x11) | (ushort)(((uint)((uVar36 & 1) != 0) << 0x1f) >> 0x10)) >> 4;
  iVar35 = CONCAT22(uVar14,uVar19);
  iVar10 = ((uVar32 >> 1 & 0xffff0) >> 4) * uVar16;
  cVar30 = (char)((uint)iVar10 >> 8);
  uVar16 = ((uint)((ushort)((uint)iVar10 >> 0x10) & 0x3fff) << 0x10 |
           CONCAT31((int3)cVar30,-1 < (short)uVar14) & 0xffff) /
           (uint)(ushort)((short)uVar11 << 1 | 0xc000);
  iVar10 = uVar11 * 0x52979fcc;
  bVar42 = (uVar16 & 0x400) != 0;
  uVar9 = iVar35 * 0x56b47a5a;
  lVar4 = (longlong)(int)(uVar16 & 0xffff | (uint)(ushort)(cVar30 >> 7) << 0x10 | 0x200000) *
          (longlong)(int)uVar41;
  cVar30 = (char)((uint)iVar10 >> 8);
  uVar16 = uVar9 & 0xffff0000 |
           (uint)CONCAT11((char)(uVar9 >> 8) + (char)uVar9 + (iVar35 * -0x54a5c2d3 < 0) + -0x5f,
                          (char)uVar9);
  uVar24 = (ushort)((uint)iVar10 >> 0x10);
  uVar37 = (ushort)lVar4;
  uVar19 = (ushort)((uint)(CONCAT22(uVar14,uVar19 >> 1) + 0x576bee68) >> 0x10);
  uVar14 = uVar19 >> 5;
  uVar37 = uVar37 ^ (ushort)(uVar37 == uVar14) *
                    (uVar37 & (uVar19 >> 5 ^
                              (ushort)(uVar37 == uVar14) *
                              (uVar14 ^ (ushort)((ulonglong)lVar4 >> 0x20))));
  uVar19 = (CONCAT11(cVar30 + ((byte)iVar10 >> ((byte)iVar10 & 0x1f)),cVar30 + 'T') ^ 0x110c ^
           1 << (uVar37 & 0xf)) >> 7;
  uVar25 = uVar16 + 0x68bff577;
  uVar16 = (uint)(0x97400a88 < uVar16) << 0x10 | uVar25 & 0xffff;
  uVar11 = uVar11 >> 0x1f | uVar11 << 2;
  bVar8 = (byte)uVar19;
  bVar7 = bVar8 & 0xf;
  uVar37 = uVar37 >> bVar7 | uVar37 << 0x10 - bVar7;
  bVar7 = (byte)uVar37;
  uVar34 = uVar11 >> (bVar8 & 0x1f);
  uVar16 = (uVar25 & 0xffff0000 |
           (uint)(ushort)(((ushort)(uVar16 << 2) | (ushort)(uVar16 >> 0xf)) + (short)uVar11)) << 0xc
  ;
  uVar40 = uVar25 >> 0x14 | uVar16;
  uVar9 = CONCAT22(uVar24,0x7967);
  uVar24 = uVar24 >> 0xf;
  uVar11 = CONCAT22((short)((ulonglong)lVar4 >> 0x10),uVar37) & 0xffffff00 |
           (uint)(byte)(bVar7 << 6 | bVar7 >> 2);
  if (!bVar42) {
    uVar11 = uVar9;
  }
  if ((int)uVar40 < 0) {
    uVar11 = uVar34 - 1;
  }
  uVar25 = (uVar25 >> 0x14 & 0xf) << 1 | (uint)uVar24;
  uVar31 = uVar11 + 1 | 1 << uVar25;
  uVar27 = uVar34 + 0xed2d44c4 + (uint)((uVar11 + 1 >> uVar25 & 1) != 0);
  uVar34 = (int)(uVar41 << 7) >> 0x1c;
  uVar25 = uVar34 << 7;
  uVar34 = uVar34 >> 0x19;
  uVar28 = uVar25 | uVar34;
  uVar37 = (ushort)uVar28;
  uVar41 = ((uint)uVar19 & 0xff ^ 0xd7a34cc5) << 6;
  uVar9 = ~CONCAT22((undefined2)((char)(-uVar9 >> 8) >> 7),
                    (ushort)(byte)((((SBORROW2(uVar37 | 0x4e7f,-0x2175) != false) ==
                                    (short)((uVar37 | 0x4e7f) + 0x2175) < 0) -
                                   (char)((uint)(int)(short)uVar37 >> 8)) - 1) + 1);
  uVar26 = uVar41 & 0xffffff00;
  uVar11 = uVar9 & 0x1f;
  uVar23 = (((ushort)(uVar40 << 1) | uVar24 | CONCAT11((char)(uVar31 >> 8) + -1,(char)uVar31)) +
           0xcd95) - (ushort)(((uVar26 | (byte)(((byte)uVar41 | (byte)(uVar27 >> 0x1a)) +
                                               (char)uVar28)) >> uVar11 & 1) != 0);
  uVar11 = (uint)(uint3)((uint3)(uVar26 >> 8) ^ (uint3)((uint)(1 << uVar11) >> 8)) << 8;
  uVar14 = (short)uVar11 >> 1;
  iVar10 = ((uint)(ushort)((short)uVar37 >> 0xf) | 0xd7a30000) + 0x84065119;
  uVar24 = uVar23 * 0x349a;
  uVar37 = uVar24 | 1;
  uVar9 = uVar9 & 0xffff0000;
  lVar4 = (longlong)(int)(uVar11 & 0xffff0000 | (uint)uVar14) * 0x2c3b48e2;
  iVar35 = (int)((ulonglong)lVar4 >> 0x20);
  sVar39 = (short)(iVar10 >> 0x11);
  uVar40 = CONCAT22(sVar39,CONCAT11(iVar35 == 0 || iVar35 == -1,(char)(iVar10 >> 1)));
  uVar19 = uVar14 + uVar37;
  uVar11 = (uint)(uVar23 >> 1);
  if ((SCARRY2(uVar14,uVar37) != SCARRY2(uVar19,0)) != (short)uVar19 < 0) {
    uVar11 = uVar9 | (uint)uVar24 | 1;
  }
  uVar34 = (uVar40 - ((uVar16 & 0x7fff8000) << 1 |
                     (uint)(ushort)~(ushort)((uVar25 & 0xffff | uVar34) >> 1))) + 1;
  uVar16 = (uint)uVar24 & 0xffffff00;
  uVar25 = uVar9 | uVar16 | 0x59f4;
  if (-1 < (short)((ushort)uVar16 | 0x59f4)) {
    uVar25 = uVar9 | uVar34 & 0xffff;
  }
  uVar24 = (ushort)uVar11 >> 1;
  uVar37 = ((short)lVar4 + uVar37 + (ushort)CARRY2(uVar14,uVar37)) * -0x8000;
  uVar14 = uVar24 | uVar37;
  uVar9 = uVar11 & 0xffff0000 | (uint)uVar14;
  bVar43 = (uVar11 & 1) != 0;
  bVar44 = (short)(ushort)uVar11 < 0 != (uVar37 != 0);
  uVar40 = uVar40 & 0xffffff00 | (uint)bVar43;
  uVar16 = (int)(((uVar27 >> 1 & 0xffff | (uVar27 >> 0x11) << 0x10) ^ 0x42bd) << 1 | 1) >>
           ((byte)uVar25 & 0x1f);
  if (uVar14 != 0) {
    uVar16 = uVar40;
  }
  uVar34 = uVar34 + uVar9 + 1;
  sVar38 = (short)uVar16;
  uVar14 = sVar38 + 0x160a;
  uVar37 = (short)((ushort)uVar25 & 0xff00 | (ushort)bVar44) >> bVar44;
  sVar20 = ((ushort)uVar40 >> 1 | (ushort)bVar43 << 0xf) - 1;
  uVar40 = (uint)uVar19;
  if (sVar20 != 0) {
    uVar40 = uVar34;
  }
  iVar10 = 0;
  if (uVar9 != 0) {
    while ((uVar9 >> iVar10 & 1) == 0) {
      iVar10 = iVar10 + 1;
    }
  }
  uVar41 = CONCAT22(sVar39,sVar20) >> ((byte)uVar37 & 0x1f);
  bVar7 = ((byte)uVar37 & 0x1f) % 9;
  iVar35 = uVar34 + (uVar41 & 0xffff0000 | (uint)CONCAT11((char)(uVar41 >> 8) >> 1,(char)uVar41)) +
           1;
  iVar10 = (uVar40 & 0xffffff00 | (uint)(byte)~(byte)uVar40) + 0x3a816021;
  bVar43 = iVar35 < 0;
  bVar8 = (byte)iVar10;
  cVar22 = bVar8 + 0x5f + bVar43;
  cVar30 = (char)((uint)iVar10 >> 8);
  uVar40 = (uint)(ushort)((ushort)(iVar35 * 2) | (ushort)bVar43);
  uVar9 = (ushort)(CONCAT11((cVar22 < '\0') << 7 | (cVar22 == '\0') << 6 |
                            (((bVar8 & 0xf) + 0xf + bVar43 & 0x10) != 0) << 4 | bVar42 << 2 | 2U |
                            (0xa0 < bVar8 || CARRY1(bVar8 + 0x5f,bVar43)),
                            (byte)((uVar24 & 0xff | (ushort)(uVar37 < 0x5fd9) << 8) >> bVar7) |
                            (char)uVar24 << 9 - bVar7) * uVar14) * uVar40;
  uVar34 = uVar41 & 0xffff0000 | uVar9 >> 0x10;
  bVar7 = (byte)((short)uVar37 >> 0x13) & (byte)((uint)(ushort)((short)uVar37 >> 0x13) >> 8);
  uVar25 = uVar25 & 0xffff0000 | (uint)(ushort)((short)uVar37 >> 0x13) & 0xffffff00 | (uint)bVar7;
  uVar34 = (uint)((CONCAT14((uVar41 >> 0x10 & 8) != 0,uVar34) | 0x80000) >> (bVar7 & 0x1f)) |
           (uVar34 | 0x80000) << 0x21 - (bVar7 & 0x1f);
  uVar11 = (uVar11 & 0xffff0000 | (uint)(ushort)((short)uVar9 << 1)) << 1;
  uVar40 = (iVar35 * 2 & 0xffff0000U | uVar40) & iVar35 * 0x4b8d631a;
  uVar9 = uVar25 >> (bVar7 & 0x1f) | uVar25 << 0x21 - (bVar7 & 0x1f);
  uVar19 = (ushort)uVar11 & 0xe898;
  bVar7 = (byte)uVar9 & 0x1f;
  uVar24 = (ushort)uVar9 & 0x28ff;
  bVar8 = (char)uVar24 * '\x02' & 0x1f;
  uVar25 = (uVar40 >> bVar7 | uVar40 << 0x20 - bVar7) >> bVar8 | uVar34 << 0x20 - bVar8;
  uVar11 = uVar11 & 0xffff0000 | (uint)(ushort)(uVar19 - (ushort)uVar34);
  if (uVar19 < (ushort)uVar34) {
    uVar11 = uVar34;
  }
  uVar40 = (int)(short)uVar11 * (int)(short)(iVar35 * 0x4b8d631a);
  uVar19 = (ushort)(uVar40 >> 0x10);
  uVar40 = uVar11 & 0xffff0000 | uVar40 & 0xffff;
  uVar11 = uVar9 & 0xffff0000 | (uint)uVar24;
  if (SCARRY2(uVar19,-0x1253) == SCARRY2(uVar19 + 0xedad,1)) {
    uVar11 = uVar25;
  }
  uVar9 = SEXT14(cVar30);
  if (-1 < (int)uVar40) {
    uVar11 = uVar11 & 0xffff0000 | (uint)uVar14;
  }
  sVar39 = sVar38 + 0xafd;
  uVar16 = uVar16 & 0xdfff0000;
  if ((SCARRY2(uVar14,-0xb0e) != SCARRY2(sVar38 + 0xafcU,1)) != sVar39 < 0) {
    uVar9 = uVar25 & 0xffff | (uint)(ushort)(cVar30 >> 7) << 0x10;
  }
  uVar34 = (uint)CONCAT11(((char)(uVar11 >> 8) - ((short)(uVar19 + 0xedae) < 0)) -
                          (0xb0d < uVar14 || 0xfffe < (ushort)(sVar38 + 0xafcU)),(byte)uVar11);
  if (!SBORROW2(sVar39,sVar39)) {
    uVar9 = uVar9 & 0xffff0000 | uVar34;
  }
  uVar41 = uVar9 & 0xffff0000;
  uVar9 = (uVar40 << 1 | (uint)(0x1252 < uVar19 || 0xfffe < (ushort)(uVar19 + 0xedad))) *
          (uVar41 | CONCAT11((char)(uVar9 >> 8) >> ((byte)uVar11 & 0x1f),(char)uVar9));
  uVar34 = uVar34 & 0xffffff0f;
  bVar7 = (byte)uVar34;
  uVar40 = (uVar9 << bVar7 | uVar9 >> 0x20 - bVar7) + uVar41;
  uVar41 = uVar41 ^ 0x19d6730b;
  uVar9 = uVar41 >> 0xc & 0xf;
  bVar8 = (byte)(uVar34 >> 8);
  uVar19 = ((short)(char)uVar40 & 0xffU) * (ushort)(byte)uVar9;
  iVar10 = 0x1f;
  uVar1 = 0;
  if (uVar16 != 0) {
    while (uVar1 = (undefined2)((uint)iVar10 >> 0x10), uVar16 >> iVar10 == 0) {
      iVar10 = iVar10 + -1;
    }
  }
  uVar28 = uVar16 >> bVar7 | uVar16 << 0x20 - bVar7;
  uVar16 = ((uint)uVar19 & 0xff00 | (uint)(byte)((char)uVar19 + 0x10)) * (uVar28 & 0xffff);
  uVar26 = uVar25 >> 1 | (uint)((char)(uVar19 >> 8) != '\0') << 0x1f | 0x20000;
  uVar19 = (short)uVar9 - 1;
  uVar34 = (uint)(ushort)(uVar19 & 0xff | (ushort)(byte)~(byte)((uint)uVar19 >> 8) << 8);
  uVar40 = ~((uVar40 & 0xffff0000 | uVar16 & 0xffff) * 0x5bc37382);
  uVar9 = (uVar41 & 0xffff0000 | uVar34) >> 0xc;
  uVar31 = (int)(uVar26 >> 1) >> 1;
  uVar34 = uVar34 << 0x14 | (uVar41 & 0xf0000000) >> 0xc |
           (uint)CONCAT11((char)(uVar9 >> 8) + -0x28,(char)uVar9);
  uVar41 = uVar28 & 0xffff0000 |
           (uint)(ushort)((short)uVar28 + -0x2f6b + (ushort)((uVar25 >> 1 & 1) != 0)) | 0xc0000000;
  uVar2 = CONCAT44(CONCAT22(uVar1,(short)(uVar16 >> 0x10)) * 2,uVar40) & 0x3ffffffffbff0000;
  uVar3 = uVar2 % (ulonglong)uVar41;
  uVar16 = (uint)(uVar2 / (ulonglong)uVar41) >> 1;
  bVar12 = (byte)(uVar34 >> 1);
  cVar30 = (char)uVar16;
  uVar25 = uVar16 & 0xffff0000 | (uVar34 | 1) << 0x1f | (uint)CONCAT11(!bVar42,cVar30);
  uVar16 = (uint)CARRY1(bVar12,(byte)uVar3);
  uVar28 = uVar41 + uVar25 + uVar16;
  uVar9 = CONCAT31((uint3)(uVar34 >> 9),bVar12 + (byte)uVar3);
  if ((!CARRY4(uVar41,uVar25) && !CARRY4(uVar41 + uVar25,uVar16)) && uVar28 != 0) {
    uVar9 = uVar31;
  }
  bVar12 = ((char)(uVar3 >> 8) + cVar30 + '\x01') * '\x02';
  uVar41 = CONCAT22((short)(uVar3 >> 0x10),(ushort)uVar3 & 0xff | (ushort)bVar12 << 8);
  uVar19 = (short)uVar9 << 1;
  uVar34 = uVar11 & 0xffff0000 |
           (uint)(ushort)((ushort)(byte)(((byte)((uint)(ushort)((short)(uVar34 >> 1) * 0x1e00) >> 8)
                                         >> 1) << 5) << 8 | 1);
  uVar16 = uVar25 << 1;
  if (bVar12 < 2) {
    uVar16 = uVar41;
  }
  uVar25 = (uint)(byte)((char)uVar19 << 1);
  uVar24 = (ushort)uVar28 << 1 | (ushort)uVar28 >> 0xf;
  uVar27 = (uint)uVar19 & 0xff00 | uVar25;
  uVar32 = uVar27 | (uint)(ushort)((ushort)((uVar11 & 0xffff0000 |
                                             (uint)CONCAT11(bVar8 >> (bVar7 & 7) |
                                                            bVar8 << 8 - (bVar7 & 7),bVar7) &
                                             0xffffff00 | (uint)((int)uVar26 < 0)) * -0x78ce9953 >>
                                           0x11) |
                                  (ushort)(((uint)((uVar40 >> 0x1a & 1) != 0) << 0x1f) >> 0x10)) <<
                    0x10;
  uVar16 = uVar16 | 0x9309;
  uVar40 = -uVar34;
  uVar26 = uVar41 ^ (uint)(uVar16 == uVar41) * (uVar41 ^ uVar16);
  uVar16 = uVar16 ^ (uint)(uVar16 == uVar41) * (uVar16 & uVar26);
  sVar39 = (short)uVar40 * -0x33a3;
  uVar11 = (uint)CONCAT11((byte)(uVar26 >> 8) >> 1,(char)uVar26);
  bVar8 = (byte)((ushort)sVar39 >> 8);
  cVar30 = (char)(uVar16 >> 8);
  bVar7 = (char)uVar16 + cVar30;
  if ((SCARRY1((char)uVar16,cVar30) != SCARRY1(bVar7,'\0')) != (char)bVar7 < '\0') {
    uVar40 = uVar40 & 0xffff0000 | uVar11;
  }
  uVar16 = uVar16 & 0xffffff00 | (uint)bVar7;
  if ((char)bVar7 >= '\0') {
    uVar16 = uVar40;
  }
  cVar30 = (char)bVar8 >> ((byte)uVar40 & 0x1f);
  bVar7 = ((byte)uVar40 & 0x1f) % 9;
  uVar41 = uVar9 & 0xffff0000 |
           (uint)CONCAT11((byte)(CONCAT11((ushort)(uVar24 + 0x66e4) < 0x7618,cVar30) >> bVar7) |
                          cVar30 << 9 - bVar7,(byte)sVar39 | bVar8) | 0x4f633fd3;
  uVar9 = uVar40 ^ (uint)(uVar16 == uVar40) * (uVar40 ^ (uVar26 & 0xffff0000 | uVar11));
  lVar4 = (ulonglong)(uVar16 ^ (uint)(uVar16 == uVar40) * (uVar16 & uVar9)) * (ulonglong)uVar32;
  uVar11 = (uint)CONCAT11((char)(uVar41 >> 8) + '\r',(char)uVar41);
  uVar40 = uVar41 & 0xffff0000 | uVar11;
  uVar16 = uVar31 + uVar34 ^ 1 << ((uint)((ulonglong)lVar4 >> 0x20) & 0x1f);
  bVar7 = (byte)(uVar9 << 1);
  uVar16 = (uint)(CONCAT14((int)uVar9 < 0,uVar16) >> (bVar7 & 0x1f)) |
           uVar16 << 0x21 - (bVar7 & 0x1f);
  uVar37 = (ushort)uVar16;
  uVar9 = (uVar9 << 1) >> (bVar7 & 0x1f) | uVar32 << 0x20 - (bVar7 & 0x1f);
  sVar39 = (short)((ulonglong)lVar4 >> 0x10);
  uVar19 = (ushort)lVar4 & (ushort)uVar9;
  lVar4 = (longlong)
          (int)(uVar16 & 0xffff0000 |
               (uint)(ushort)(uVar37 >> (bVar7 & 0xf) | uVar37 << 0x10 - (bVar7 & 0xf))) *
          -0x3553a58a;
  iVar10 = (int)((ulonglong)lVar4 >> 0x20);
  cVar30 = (char)(uVar19 >> 8);
  uVar16 = CONCAT22(sVar39,CONCAT11(cVar30 + (char)uVar19,cVar30) * (short)uVar27) << 1;
  uVar16 = uVar16 & 0xffffff00 | (uint)(byte)(((byte)uVar16 | sVar39 < 0) & (byte)(uVar11 >> 8));
  uVar11 = (uVar28 & 0xffff0000 | (uint)(ushort)(uVar24 - 0xf34)) + uVar40 + 1;
  uVar40 = uVar40 | 1 << (uVar25 & 0x1f);
  bVar44 = SCARRY4(uVar16,-0x2a006aa);
  uVar16 = uVar16 + 0xfd5ff956;
  bVar43 = (int)uVar16 < 0;
  if (bVar44 != bVar43) {
    uVar16 = uVar16 & 0xffff0000 | uVar40 & 0xffff;
  }
  uVar19 = CONCAT11(iVar10 != 0 && iVar10 != -1,(char)uVar9) >> 1 | (ushort)(bVar44 != bVar43) << 8;
  uVar25 = (uint)uVar19;
  bVar7 = (char)uVar40 - 0x16;
  lVar5 = (longlong)(int)uVar16 * (longlong)(int)uVar16;
  uVar16 = (uint)((ulonglong)lVar5 >> 0x20);
  bVar8 = (char)uVar40 - 0x17;
  if (bVar8 == 0 || (char)bVar7 < '\x01') {
    uVar25 = uVar16 & 0xffff;
  }
  uVar24 = (ushort)uVar40 & 0xff00 | (ushort)bVar8;
  if ((uVar19 >> ((ushort)bVar7 & 0xf) & 1) != 0 || bVar8 == 0) {
    uVar24 = (ushort)((ulonglong)lVar5 >> 0x20);
  }
  bVar7 = (byte)uVar25;
  uVar19 = (ushort)lVar5;
  if (((uint)lVar5 >> (uVar16 & 0x1f) & 1) != 0) {
    uVar19 = uVar24;
  }
  uVar41 = CONCAT22((short)((ulonglong)lVar5 >> 0x30),
                    CONCAT11(SCARRY1((char)uVar24,'h') == SCARRY1((char)uVar24 + 'h','\0'),
                             (char)((ulonglong)lVar5 >> 0x20))) >> (bVar7 & 0x1f);
  bVar12 = (byte)((uint)(ushort)((uVar24 >> 0xe | (ushort)uVar41 << 2) + 0x8621) >> 8);
  uVar24 = (((ushort)uVar41 & 0xff00 | (ushort)(byte)(((byte)uVar41 | bVar12) + (char)(uVar19 >> 8))
            ) ^ 0xc500) + 0xa922;
  cVar30 = (char)((uint)uVar24 >> 8);
  bVar8 = ((char)uVar19 + cVar30) - 7;
  uVar19 = (ushort)uVar11;
  uVar34 = (uint)(ushort)(uVar19 << 0xd | uVar19 >> 3);
  uVar26 = (uVar11 & 0xffff0000 | uVar34) << 4;
  sVar13 = (sbyte)(uVar25 & 0xffff000f);
  uVar19 = (uVar24 & 0xff | (ushort)(byte)(cVar30 >> (bVar7 & 0x1f)) << 8) >> sVar13 |
           (short)CONCAT31((int3)(char)bVar12,bVar8) << 0x10 - sVar13;
  uVar11 = (uint)(ushort)((uVar19 >> 0xe | uVar19 << 2) << 1);
  uVar40 = CONCAT22((undefined2)((char)bVar12 >> 7),(ushort)bVar8 * (ushort)bVar12) << 1;
  uVar24 = (short)uVar40 << 1;
  uVar40 = uVar40 & 0xffff0000;
  uVar19 = (short)(uVar25 & 0xffff000f) + 0x719d;
  uVar37 = -((short)(uVar26 >> 1) >> 0xf);
  iVar10 = (int)((ulonglong)((longlong)(int)(uVar41 & 0xffff0000 | uVar11) * 0x601f1aac) >> 0x20);
  bVar8 = ((byte)uVar19 & 0x1f) % 9;
  bVar8 = (byte)uVar19 << bVar8 |
          (byte)((uVar19 & 0xff | (ushort)(iVar10 != 0 && iVar10 != -1) << 8) >> 9 - bVar8);
  uVar6 = CONCAT14(1,CONCAT22((short)((ulonglong)lVar4 >> 0x10),
                              (ushort)lVar4 >> (bVar7 & 0xf) | (ushort)lVar4 << 0x10 - (bVar7 & 0xf)
                             )) ^ 0xdc78ff15;
  uVar31 = (int)uVar6 << (bVar8 & 0x1f) | (uint)(uVar6 >> 0x21 - (bVar8 & 0x1f));
  sVar39 = ((ushort)((uint)uVar19 & 0xffffff00) | (ushort)bVar8) << (bVar8 & 0x1f);
  uVar14 = (ushort)uVar31;
  bVar7 = (((byte)sVar39 | 8) - (char)uVar31) - 1;
  uVar16 = (uVar34 & 0xfff) << 4 | 0xc001;
  uVar11 = (uVar11 & 0x3fff) << 0x10 |
           (uint)(ushort)((ushort)((uVar40 | (ushort)((uVar24 & 0x7f | 1) << 1 | uVar37 |
                                                     (ushort)(byte)((char)((uint)(ushort)((uVar24 | 
                                                  1) << 1 | uVar37) >> 8) >> 1) << 8)) >> 1) >> 1 |
                         sVar39 << 0xf);
  uVar25 = uVar11 % uVar16;
  uVar25 = (uint)(ushort)((ushort)uVar25 >> 1 | (ushort)((uVar25 & 1) != 0) << 0xf);
  bVar7 = bVar7 ^ ((byte)(uVar11 / uVar16) == bVar7) * (bVar7 ^ (byte)(uVar25 >> 8));
  uVar34 = (uVar34 & 0xfff) << 4 | 0xc001;
  bVar7 = (bVar7 << (bVar7 & 7) | bVar7 >> 8 - (bVar7 & 7)) & 0x1f;
  uVar28 = (uVar26 & 0xffff0000 | uVar25 & 0xff00 | (uVar25 & 0xfe) >> 1) >> bVar7 |
           (uVar41 & 0xffff0000 | uVar34) << 0x20 - bVar7;
  uVar25 = (uint)(ushort)((short)uVar28 >> 0x14);
  uVar27 = uVar28 & 0xffff0000 | uVar25;
  uVar16 = (uint)((uVar14 >> 0xe & 1) != 0);
  uVar11 = uVar27 + 0xeb848ca7;
  iVar10 = uVar11 + uVar16;
  uVar41 = (int)(char)(((uint)uVar19 & 0xffffff00) >> 8) ^ 0xe8d6d093;
  sVar39 = (short)uVar41;
  uVar19 = sVar39 << 1;
  uVar41 = uVar41 & 0xffff0000;
  uVar26 = (uint)(ushort)(uVar19 | sVar39 < 0);
  uVar25 = (uVar9 & 0xfffe0000) >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f |
           (uint)(ushort)(((uVar14 & 0xbfff) << 1 | (ushort)((short)(uVar14 & 0xbfff) < 0)) +
                         (uVar14 * -0x46e4 & 0xff |
                         (ushort)(byte)((iVar10 == 0) << 6 |
                                        (((uVar28 & 0xfff0000 | uVar25) + 0xb848ca7 + uVar16 &
                                         0x10000000) != 0) << 4 | bVar42 << 2 | 2U |
                                       (0x147b7358 < uVar27 || CARRY4(uVar11,uVar16))) << 8) +
                         (short)uVar34 * -0xbac) & 0xffff5aff;
  uVar16 = (uint)(ushort)((ushort)(uVar40 >> 0x11) | (ushort)(((uint)(uVar37 != 0) << 0x1f) >> 0x10)
                         ) << 0x10;
  uVar25 = uVar25 ^ (uint)(uVar16 == uVar25) * (uVar25 ^ uVar16);
  bVar7 = (byte)uVar25;
  uVar11 = (uVar41 | uVar26) << 0x20 - (bVar7 & 0x1f);
  uVar34 = (ushort)((uVar19 >> 0xf | 0xeb6) >> (bVar7 & 0x1f)) | uVar11;
  uVar16 = 0xffff << (bVar7 & 0x1f) | 0xffffU >> 0x21 - (bVar7 & 0x1f);
  uVar24 = (ushort)uVar16;
  uVar24 = uVar24 >> (bVar7 & 0xf) | uVar24 << 0x10 - (bVar7 & 0xf);
  uVar9 = (uint)uVar24;
  uVar40 = uVar16 & 0xffff0000 | uVar9;
  uVar16 = 0x1f;
  if (uVar40 != 0) {
    while (uVar40 >> uVar16 == 0) {
      uVar16 = uVar16 - 1;
    }
  }
  uVar37 = (ushort)uVar34 >> 1;
  uVar23 = (ushort)((uVar34 & 1) != 0) << 0xf;
  bVar42 = (uVar37 & 1) != 0;
  uVar40 = uVar40 ^ uVar9 & 0x800;
  uVar15 = (ushort)uVar25 ^ ((ushort)uVar25 >> 5 & 1) << 5;
  uVar19 = (short)uVar16 << 1 | uVar19 >> 0xf;
  bVar12 = (byte)uVar15;
  bVar8 = (byte)uVar19;
  return CONCAT44(in_EDX,(uVar16 & 0xffff0000 | uVar26) +
                         (uVar11 & 0xffff0000 |
                         (uint)(ushort)(((uVar37 & 0xfe00 | uVar23) >> 1 | (ushort)bVar42 << 0xf |
                                        (ushort)(byte)(((char)((uVar37 | uVar23) >> 1) -
                                                       (char)(uVar9 >> 8)) - bVar42)) <<
                                       (bVar12 & 0x1f))) +
                         (uVar25 & 0xffff0000 |
                         (uint)((ushort)((short)uVar15 >> (bVar12 & 0x1f)) >> 1)) +
                         (uVar40 & 0xffff0000 |
                         (uint)(ushort)(uVar24 & 0xff | (ushort)(byte)((char)(uVar40 >> 8) - 1) << 8
                                       )) +
                         (uVar41 | (uint)uVar19 & 0xff00 | (uint)(byte)(bVar8 << 5 | bVar8 >> 3)) +
                         (uint)(ushort)((ushort)(uVar31 >> 0x10) |
                                       (ushort)((uint)(1 << ((uint)(uVar14 & ~(1 << (uVar14 * 
                                                  -0x46e4 & 0xf))) & 0x1f)) >> 0x10)) * 0x10000 +
                         (iVar10 * 2 & 0xffff0000U | (uint)(ushort)(0 << (bVar7 & 0x1f))) +
                         -0x697ca56b);
}



// WARNING: Removing unreachable block (ram,0x0804a0cd)
// WARNING: Removing unreachable block (ram,0x08049f0c)
// WARNING: Removing unreachable block (ram,0x0804a3f6)
// WARNING: Removing unreachable block (ram,0x0804a6ac)

undefined8 log_size_10_var_001(void)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  char cVar7;
  short sVar4;
  uint uVar5;
  uint uVar6;
  sbyte sVar8;
  ushort uVar9;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  uint uVar10;
  uint3 uVar15;
  ushort uVar16;
  undefined4 in_EDX;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  byte bVar20;
  short sVar21;
  char cVar22;
  ushort uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  uint uVar30;
  int iVar31;
  bool bVar32;
  bool bVar33;
  
  uVar18 = 0x1f;
  while (0x70db4244U >> uVar18 == 0) {
    uVar18 = uVar18 - 1;
  }
  uVar6 = 0;
  while ((0xe0cdd045U >> uVar6 & 1) == 0) {
    uVar6 = uVar6 + 1;
  }
  uVar18 = (uVar18 & 0xffff0000 | (uint)(ushort)((ushort)uVar18 ^ 1)) << 1;
  uVar9 = (ushort)(uVar6 >> 0x10);
  uVar18 = (uVar18 & 0xffdf0000 |
           (uint)(ushort)((short)((ushort)uVar18 | uVar9 >> 0xf) >>
                         ((byte)(uVar6 & 0xffff5fe4) & 0x1f))) - 0xd854;
  bVar11 = (-(char)((uint)(ushort)((short)(uVar6 & 0xffff5fe4) + 0x22f6) >> 8) & 0xefU) - 1;
  iVar31 = uVar18 * 8 + 0x70dcb795;
  uVar30 = (uint)(ushort)((short)iVar31 + 0x876a);
  uVar6 = ~(1 << (uVar30 & 0x1f));
  uVar17 = uVar6 & 0x5c198d36;
  uVar27 = (ushort)((uint)iVar31 >> 0x18) | (ushort)((uint)iVar31 >> 8) & 0xff00;
  uVar18 = (uint)(((ushort)uVar17 >> 5 & 1) != 0) << 0x10 | uVar18 & 0xffff;
  bVar12 = bVar11 ^ 0xad;
  if (bVar12 == 0 || (short)((ushort)bVar12 << 8) < 0) {
    uVar17 = uVar6 & 0x5c190000 | (uint)(ushort)((ushort)(uVar18 << 0xb) | (ushort)(uVar18 >> 6));
  }
  uVar18 = uVar17 & 0x74a852c;
  if (uVar18 == 0) {
    uVar27 = (ushort)uVar17 & 0x852c;
  }
  uVar10 = CONCAT31(CONCAT21(uVar9,bVar11),0xb7) ^ 0xad00;
  uVar27 = uVar27 >> 1 | (short)uVar10 << 0xf;
  uVar18 = (uint)CONCAT11((char)(uVar18 >> 8) + ')',(char)uVar18);
  uVar17 = uVar17 & 0x74a0000 | uVar18;
  uVar10 = uVar10 ^ uVar17;
  uVar30 = CONCAT22((ushort)(((uVar30 & 0xff00) << 8) >> 0x10) | (ushort)((uVar30 << 0x18) >> 0x10),
                    uVar27) ^ (uint)uVar27 & 0x10;
  uVar6 = 0x70dcb7d0;
  if ((uVar17 & 0xc733bc16) != 0) {
    uVar6 = uVar30;
  }
  uVar18 = uVar18 << 0x14;
  uVar23 = -0x46c4 >> ((byte)uVar10 & 0x1f);
  uVar17 = (uint)(ushort)(((ushort)uVar6 & 0xff) - 1);
  uVar25 = uVar6 & 0xffff0000 | uVar17;
  uVar5 = (uint)(uVar25 == 0xffffb7b7) * (uVar6 & 0xffff0000 | uVar17 & 0xffffb7b7) ^ 0xffffb7b7;
  uVar27 = (ushort)(uVar10 >> 6) & 0xff00 | (ushort)(uVar10 >> 0xb) & 7;
  uVar9 = -uVar27;
  uVar30 = CONCAT22((short)(uVar30 + 0x53a3ffa3 >> 0x10),0x1774) - (uVar18 | 0xc58bf7e1) &
           0xffff0000 | (uint)uVar9;
  bVar12 = (byte)uVar9;
  bVar11 = (bVar12 & 0x1f) % 0x11;
  uVar6 = (uint)(uVar27 != 0) << 0x10 | 0xf7e1;
  uVar19 = (int)(uVar18 | 0xc58b0000 |
                (uint)(ushort)((ushort)(uVar6 >> bVar11) | (ushort)(uVar6 << 0x11 - bVar11))) >>
           (bVar12 & 0x1f);
  uVar6 = (uVar5 & 0xffff0000 | (uint)(ushort)((short)uVar5 + 0xc35 + (ushort)(0xffffb7b7 < uVar25))
          ) + 0x6bff007a;
  iVar31 = uVar30 - 1;
  uVar30 = uVar6 & 0xffff0000 |
           (uint)(ushort)((CONCAT11(0 < (int)uVar30,(char)uVar6) + -0x39f8) -
                         (ushort)(0x50 < (byte)((uint)(ushort)((uVar9 & 0xff00 |
                                                               (ushort)(byte)(bVar12 ^ (byte)((uint)
                                                  uVar9 >> 8))) << 1) >> 8)));
  uVar18 = uVar30 + (uVar19 & 0xffff0000 | (uint)CONCAT11(~(byte)(uVar19 >> 8),(char)uVar19)) * 2;
  uVar27 = (short)uVar18 + 0xbabb;
  uVar18 = uVar18 & 0xffff0000;
  uVar30 = uVar30 >> 1;
  uVar17 = ((uVar17 & 0xfe) >> 1) << 0x1f;
  uVar10 = (uint)(ushort)(uVar23 >> 1 | (ushort)((uVar23 & 1) != 0) << 0xf) | 0x94000000;
  if ((short)iVar31 == 0) {
    uVar10 = uVar30 | uVar17;
  }
  bVar11 = (byte)uVar27 & 0xf;
  uVar9 = (short)uVar30 + 4;
  uVar30 = (uint)(ushort)(uVar27 & 0xff | (ushort)(uVar9 == 0) << 8);
  uVar5 = uVar10 >> 1 & 0x7fff;
  uVar6 = (((uVar6 & 0xfffe0000) >> 1 | uVar17 | (uint)uVar9) + 0x3e15e40e) -
          (uint)((uVar10 & 1) != 0);
  bVar12 = (byte)uVar6;
  bVar3 = bVar12 + 0xa0;
  uVar6 = uVar6 & 0xffffff00 | (uint)bVar3;
  if (bVar12 < 0x60 || bVar3 == 0) {
    uVar6 = uVar18 | uVar30;
  }
  uVar9 = (0 << bVar11 | 0U >> 0x10 - bVar11 | 0xf412) &
          ~(1 << ((ushort)(uVar6 & 0xffffffed) & 0xf));
  uVar29 = (ushort)uVar6 & 0xff00 |
           (ushort)(byte)((char)((byte)(uVar6 & 0xffffffed) >> 1 | 0x80) >> 1);
  uVar30 = uVar30 & 0xffffff0f;
  bVar33 = (uVar6 & 0x400) == 0;
  uVar23 = uVar9 >> 1 & 0x7f;
  uVar23 = uVar23 | (ushort)(byte)((char)((uint)(uVar9 & 0xff00 | uVar23) >> 8) << (sbyte)uVar30) <<
                    8;
  uVar9 = (ushort)uVar30 >> 1;
  iVar24 = ((uVar10 & 0xffff0000 | (uint)(ushort)~(ushort)uVar5) << ((byte)uVar9 & 0x1f)) +
           0x9f92ef9;
  uVar18 = (uVar18 | (ushort)(uVar9 | (ushort)((uVar27 & 1) != 0) << 0xf)) + 0x6d4e5751;
  uVar27 = (short)uVar18 >> 1;
  sVar4 = (short)uVar23 >> 0xf;
  uVar17 = CONCAT22(sVar4,(ushort)(CONCAT22(sVar4,uVar23 * 0x455) >> 1) >> ((byte)uVar27 & 0x1f));
  uVar10 = (~(1 << (uint)(CONCAT22(~(ushort)((uint)iVar31 >> 0x10),
                                   (ushort)(byte)((uint)(ushort)((short)((int)(uVar19 & 0xffff0000)
                                                                        >> 0x1a) << 0xc | 0x1a) >> 8
                                                 )) << 10 < 0)) & 0x7ffffe50U) >> 0x1b |
           (uVar10 & 0xffff0000 | uVar5) << 5 | uVar17;
  uVar9 = (ushort)uVar10;
  uVar30 = uVar18 & 0xffff0000 | (uint)uVar27 & 0xffffff00 | (uint)bVar33;
  sVar4 = (short)iVar24;
  uVar18 = (uint)(ushort)((uVar29 - uVar9) + sVar4 + (ushort)(uVar29 < uVar9));
  uVar6 = uVar6 & 0xffff0000 | uVar18;
  cVar22 = (char)(uVar18 >> 8);
  lVar1 = (ulonglong)uVar6 * (ulonglong)uVar6;
  uVar9 = ((short)((ulonglong)lVar1 >> 0x20) - uVar9) - 1 & ~(1 << ((ushort)lVar1 & 0xf));
  uVar27 = (short)(char)lVar1 * (short)(char)uVar9;
  uVar17 = uVar17 | 0x298e042b;
  uVar18 = uVar17 << bVar33 | uVar17 >> 0x21 - bVar33;
  bVar11 = cVar22 >> 7;
  uVar9 = uVar9 & 0xff | (ushort)bVar11 << 8;
  if ((short)uVar9 < 0) {
    uVar18 = uVar18 & 0xffff0000 | (uint)(ushort)(short)cVar22;
  }
  uVar6 = uVar30 << bVar33 | uVar30 >> 0x21 - bVar33;
  uVar30 = CONCAT22((short)((ulonglong)lVar1 >> 0x30),uVar9) << 1;
  bVar11 = bVar11 >> 1 | bVar11 << 7;
  uVar9 = -(short)uVar30;
  uVar30 = uVar30 & 0xffff0000;
  uVar17 = (uVar10 << 9 | uVar10 >> 0x17) ^ (uVar30 | uVar9);
  if (0 < (int)uVar17) {
    uVar18 = uVar18 & 0xffff0000 | (uint)uVar27;
  }
  uVar23 = sVar4 * 0x10 | (ushort)((uint)iVar24 >> 0x1c);
  bVar12 = (byte)uVar6 & 0x1f;
  uVar30 = (uVar30 | uVar9 & ~(1 << (CONCAT11(bVar11,cVar22) >> 1 & 0xfU))) >> bVar12 |
           uVar18 << 0x20 - bVar12;
  sVar4 = (short)uVar30;
  if (SCARRY2(sVar4,1)) {
    uVar27 = (ushort)uVar17;
  }
  uVar10 = (uVar30 & 0xffff0000 | (uint)(ushort)(sVar4 + 1)) + 0x648fc330;
  uVar30 = (uint)((ushort)uVar10 & uVar23);
  uVar6 = uVar6 & 0xffffff0f;
  sVar8 = (sbyte)uVar6;
  uVar17 = uVar17 & 0xffff0000 | (uint)(ushort)((ushort)uVar17 << 1 | 1);
  uVar9 = (((short)uVar18 << 3) << sVar8 | uVar27 >> 0x10 - sVar8) + 0x84e3;
  uVar5 = uVar18 & 0xffff0000 | (uint)uVar9;
  uVar18 = CONCAT31(CONCAT21((undefined2)(cVar22 >> 7),((char)bVar11 >> 1) << 1) ^
                    (uint3)((uint)(1 << (uVar30 & 0x1f)) >> 8),-1 < (short)uVar9);
  uVar6 = uVar6 + uVar5;
  sVar21 = (short)uVar18;
  sVar4 = uVar23 + sVar21;
  uVar9 = sVar4 + 1;
  if (SCARRY2(uVar23,sVar21) == SCARRY2(sVar4,1)) {
    uVar18 = uVar17;
  }
  uVar30 = uVar30 & 0xffffff00;
  uVar23 = (ushort)(CONCAT22((short)((ulonglong)lVar1 >> 0x10),uVar27) + uVar5 >> 0x10);
  uVar6 = (uVar6 & 0xffff0000 | (uint)(ushort)((short)uVar6 + 0xd8de) | uVar18) +
          (uVar10 & 0xffff0000 | uVar30);
  if ((uVar27 & 1) != 0) {
    uVar17 = uVar18;
  }
  cVar7 = (char)(uVar18 >> 8);
  cVar22 = cVar7 + -0x5e;
  uVar29 = CONCAT11(cVar22,(char)uVar18);
  uVar27 = (ushort)uVar30;
  if ((SBORROW1(cVar7,']') != SBORROW1(cVar7 + -0x5d,'\x01')) != cVar22 < '\0') {
    uVar27 = uVar29;
  }
  uVar30 = (uint)uVar29 & 0xffffff00;
  uVar10 = (uVar6 & 0xffff0000 |
           (uint)CONCAT11((char)(uVar6 >> 8) >> ((byte)uVar6 & 0x1f),(byte)uVar6)) >> 1;
  bVar11 = (byte)(uVar10 >> 8);
  iVar31 = CONCAT22((ushort)((uVar6 & 0xffff0000) >> 0x11),
                    CONCAT11(bVar11 >> 1 | bVar11 << 7,(char)uVar10));
  uVar27 = ((short)(CONCAT22(0x4d6c,(ushort)((short)(char)uVar27 == -0x6994) * (uVar27 ^ 0x966c) ^
                                    0x966c) >> 1) + 0x5c54) * 0x40;
  uVar28 = uVar27 | (ushort)uVar30 >> 10;
  uVar10 = (int)((uint)uVar23 << 0x10) >> 0x1f;
  uVar6 = iVar31 + 0xb1e56ce4;
  bVar12 = (byte)uVar6;
  bVar11 = (bVar12 & 0x1f) % 9;
  cVar7 = (char)(uVar30 >> 8);
  uVar18 = uVar18 & 0xffff0000 |
           (uint)(ushort)((CONCAT11(cVar7 << bVar11 |
                                    (byte)(CONCAT11(iVar31 - 1U < 0x4e1a931a || iVar31 == 0x4e1a931b
                                                    ,cVar7) >> 9 - bVar11),cVar22) + 0x4ed6) -
                         (ushort)((uVar27 >> 9 & 1) != 0));
  uVar27 = (short)uVar6 << 1;
  iVar31 = uVar17 - uVar10;
  uVar30 = (uint)(CONCAT14(uVar17 < uVar10 || iVar31 == 0,uVar18) >> (bVar12 & 0x1f)) |
           uVar18 << 0x21 - (bVar12 & 0x1f);
  uVar29 = (ushort)uVar30;
  uVar18 = (uint)(ushort)(uVar27 & 0xff00 |
                         (ushort)(byte)(((byte)uVar27 | (byte)(uVar9 >> 0xf)) << 1)) +
           CONCAT22(0x26b6,uVar28) + (uint)(((ushort)((short)uVar23 >> 0xf) >> 4 & 1) != 0);
  uVar23 = (ushort)uVar18;
  uVar27 = uVar9;
  if (!SBORROW2(uVar23,uVar9)) {
    uVar27 = uVar29;
  }
  if (uVar23 < uVar9) {
    uVar18 = CONCAT22(0x26b6,uVar28);
  }
  uVar5 = iVar31 - 1U & ~(1 << ((uint)uVar28 & 0x1f));
  uVar9 = (short)uVar18 << 1;
  uVar17 = (uVar18 & 0xffff0000 |
           (uint)(ushort)((uVar9 & 0xff00 |
                          (ushort)(byte)((((byte)uVar9 | (short)uVar18 < 0) - bVar12) - 1)) * uVar29
                         )) >> (bVar12 & 0x1f) | uVar6 << 0x20 - (bVar12 & 0x1f);
  bVar11 = (byte)uVar17;
  uVar10 = uVar30 & 0xffff0000 |
           ((uint)(ushort)(uVar29 << (bVar12 & 0xf) | uVar29 >> 0x10 - (bVar12 & 0xf)) & 0xfe) >> 1;
  uVar9 = -((ushort)uVar5 & 0x2728);
  uVar18 = (uint)CONCAT11(((byte)(uVar6 >> 8) | 0xef) << 1,bVar12) & 0xffff6adb;
  iVar31 = 0x1f;
  if (uVar10 != 0) {
    while (uVar10 >> iVar31 == 0) {
      iVar31 = iVar31 + -1;
    }
  }
  uVar25 = (uVar30 >> 0x11) << 0x10;
  bVar12 = (byte)uVar18 & 0xf;
  uVar30 = (uint)(ushort)(uVar9 >> bVar12 | uVar9 << 0x10 - bVar12);
  uVar9 = (short)uVar18 * -0x35b8;
  uVar18 = (uVar5 & 0xc0000000) >> 0xe | uVar30 << 0x12;
  uVar30 = (uint)(ushort)(~(ushort)((uVar5 & 0xc9270000 | uVar30) >> 0xe) << 1);
  uVar26 = uVar18 | uVar30;
  uVar19 = 0 >> ((byte)uVar9 & 0x1f);
  cVar22 = (char)((uint)uVar9 >> 8);
  bVar3 = (byte)uVar19 | (byte)(uVar19 >> 8);
  bVar12 = (byte)(uVar9 & 0xff);
  uVar5 = uVar6 & 0xffef0000 |
          (uint)(ushort)(uVar9 & 0xff | (ushort)(byte)(cVar22 << 1 | cVar22 < '\0') << 8) &
          0xffffff00 | (uint)(byte)(bVar12 ^ (bVar12 == 0) * bVar12);
  uVar10 = (uint)(byte)((bVar3 << 7 | bVar3 >> 1) + ((uVar6 >> 0x14 & 1) != 0)) << 8;
  uVar29 = ~uVar28 ^ ((ushort)uVar17 & 0xff00 | (ushort)(byte)((bVar11 << 7 | bVar11 >> 1) + 0x4c) |
                     uVar27 - 1) | (ushort)uVar5;
  uVar9 = (ushort)((uVar6 & 0xffef0000) >> 0x11);
  uVar27 = (ushort)(uVar5 >> 1) & ~(1 << (uVar29 & 0xf));
  uVar6 = uVar10 << ((byte)uVar27 & 0x1f);
  lVar1 = (ulonglong)(uVar6 & 0xffff0000 | (uint)(ushort)((short)uVar6 + 1)) *
          (ulonglong)((uVar19 & 0xffff0000 | uVar10) ^ 1 << ((uVar25 & 0x1f0000) >> 0x10));
  uVar23 = (ushort)((ulonglong)lVar1 >> 0x20) & 0x80ff;
  cVar22 = (char)(uVar23 >> 8);
  uVar6 = CONCAT22(0x26b6,uVar29) + 0x1d4e0865;
  if ((short)uVar23 < 0) {
    uVar6 = CONCAT22(uVar9,uVar27);
  }
  cVar7 = (char)(uVar27 >> 8);
  bVar11 = cVar7 >> 0x17 & 0x1f;
  uVar10 = (int)(short)lVar1 << bVar11 | uVar6 >> 0x20 - bVar11;
  uVar27 = (ushort)uVar10 >> 1;
  uVar27 = uVar27 & 0xff00 | 0x8000 |
           (ushort)(byte)((byte)uVar27 & (byte)((uint)(uVar27 | 0x8000) >> 8));
  uVar15 = ((uint3)(((uint)uVar9 << 0x10) >> 8) | (uint3)(byte)(cVar7 >> 0x1f)) ^
           (uint3)(uVar25 >> 0x18);
  uVar23 = (ushort)uVar6;
  uVar29 = uVar23 ^ (ushort)(uVar27 == uVar23) * (uVar23 ^ uVar27);
  uVar9 = uVar27 ^ (ushort)(uVar27 == uVar23) * (uVar27 & uVar29);
  uVar17 = (uint)uVar15 << 8;
  uVar5 = (uVar25 & 0xff0000) >> 0x10 | uVar17;
  bVar12 = (byte)((uVar25 & 0xff0000) >> 0x10);
  bVar11 = (bVar12 & 0x1f) % 9;
  iVar31 = 0;
  if (uVar5 != 0) {
    while ((uVar5 >> iVar31 & 1) == 0) {
      iVar31 = iVar31 + 1;
    }
  }
  bVar20 = (byte)((uint)uVar9 >> 8);
  uVar5 = (uVar6 & 0xffff0000 | (uint)(ushort)(uVar29 >> 1 | 0x8000)) + 0xd62a15b1;
  bVar3 = (byte)uVar15;
  uVar6 = (uVar10 & 0xffff0000 |
          (uint)(ushort)(uVar9 & 0xff |
                        (ushort)(byte)(bVar20 << (bVar12 & 7) | bVar20 >> 8 - (bVar12 & 7)) << 8))
          << 1;
  uVar10 = CONCAT22((ushort)(((uVar30 & 0x7f80) << 9) >> 0x10) |
                    (ushort)((((uVar30 & 0x7f) << 1 | (uint)((int)uVar26 < 0)) << 0x18) >> 0x10),
                    ~((ushort)((uVar26 << 1) >> 0x18) | (ushort)((uVar26 << 1) >> 8) & 0xff00));
  uVar6 = uVar6 & 0xffff0000 |
          (uint)CONCAT11(((char)(uVar6 >> 8) << 1) >> (bVar12 & 0x1f),(char)uVar6);
  uVar30 = uVar6 << (bVar12 & 0x1f) | uVar6 >> 0x21 - (bVar12 & 0x1f);
  uVar6 = uVar5 >> 1 & 0x7fff;
  if ((uVar5 & 1) != 0) {
    uVar26 = uVar18 | uVar6;
  }
  uVar18 = uVar26 << (bVar12 & 0x1f) | uVar26 >> 0x21 - (bVar12 & 0x1f);
  bVar32 = (uVar18 & 1) != 0;
  uVar25 = uVar18 >> 1 | (uint)bVar32 << 0x1f;
  uVar18 = (uint)bVar32;
  uVar19 = uVar25 + 0x92306f08;
  uVar26 = (uVar19 - uVar18) - 1;
  uVar18 = (uint)(uVar25 < 0x6dcf90f8 || uVar19 < uVar18);
  uVar19 = uVar26 + uVar10;
  uVar25 = uVar19 + uVar18;
  uVar18 = (uint)(CARRY4(uVar26,uVar10) || CARRY4(uVar19,uVar18)) << 0x10 | uVar30 & 0xffff;
  uVar19 = uVar18 >> 6;
  uVar9 = (ushort)(uVar18 << 0xb);
  uVar29 = (ushort)uVar19;
  bVar13 = bVar3 + 0x53;
  uVar17 = uVar17 & 0xffff0000;
  bVar20 = (byte)uVar19;
  bVar14 = bVar13 ^ (bVar20 == bVar13) * (bVar13 ^ (byte)((uint)(uVar9 | uVar29) >> 8));
  uVar2 = (ulonglong)(bVar20 < bVar13) << 0x20 | (ulonglong)CONCAT11(bVar3 | bVar12,bVar12);
  iVar24 = ((uint)(uVar2 >> 3) | (uint)(uVar2 << 0x1e)) -
           ((uint)((ulonglong)lVar1 >> 0x20) & 0xffff0000 |
           ((uint)CONCAT11((byte)(CONCAT11(uVar27 < uVar23,cVar22) >> bVar11) | cVar22 << 9 - bVar11
                           ,(char)((ulonglong)lVar1 >> 0x20)) & 0x25fe) >> 1);
  uVar23 = (ushort)iVar24;
  uVar27 = (ushort)uVar25;
  uVar19 = (uVar25 & 0xffff0000 | (uint)(ushort)(uVar27 - 0x8aa)) + uVar10 + (uint)(uVar27 < 0x8aa);
  uVar28 = -CONCAT11(bVar14,bVar12 - 1);
  uVar18 = (uint)(ushort)((uVar9 | uVar29 & 0xff00 |
                          (ushort)(byte)(bVar20 ^ (bVar20 == bVar13) * (bVar20 & bVar14))) * uVar23
                          * 2 | (ushort)(uVar23 < 0xea5d));
  lVar1 = (longlong)(int)((uVar30 & 0xffff0000 | uVar18) >> 9 | uVar18 << 0x17) *
          (longlong)(int)(uVar17 | uVar28);
  uVar29 = (ushort)lVar1 & 0x3fff;
  uVar27 = (ushort)(byte)((byte)((ulonglong)lVar1 >> 0x28) | 0xc0);
  uVar9 = uVar29 / uVar27 & 0xff;
  uVar27 = uVar29 % uVar27 << 8;
  uVar28 = uVar28 ^ uVar23;
  bVar11 = (byte)uVar9;
  bVar12 = (byte)((uint)uVar28 >> 8);
  bVar3 = bVar12 ^ (bVar11 == bVar12) * (bVar12 ^ (byte)((uint)(uVar9 | uVar27) >> 8));
  uVar28 = uVar28 & 0xff;
  uVar18 = (uint)(ushort)(uVar28 | (ushort)bVar3 << 8);
  uVar9 = (uVar27 | (byte)(bVar11 ^ (bVar11 == bVar12) * (bVar11 & bVar3))) + (short)uVar6 + 0x2896;
  uVar16 = (ushort)(((uVar18 & 0xff00) << 8) >> 0x10) | (ushort)((uVar18 << 0x18) >> 0x10);
  uVar27 = (short)uVar6 + ((ushort)(uVar17 >> 0x18) | (ushort)(uVar17 >> 8));
  uVar6 = uVar6 | (uint)uVar16 << 0x10;
  uVar18 = uVar19 & 0xffff0000 |
           (uint)(ushort)(((ushort)uVar19 >> 1 | (ushort)((uVar19 & 1) != 0) << 0xf) - uVar9);
  lVar1 = (longlong)(int)((uint)lVar1 & 0xffff0000 | (uint)uVar9) *
          (longlong)(int)(uVar5 & 0xffff0000 | (uint)uVar27);
  uVar17 = uVar18 << 1 | (uint)((int)uVar18 < 0);
  uVar18 = uVar6 | 0xb45b;
  bVar11 = (byte)uVar18;
  uVar10 = uVar10 >> (bVar11 & 0x1f);
  uVar5 = uVar5 & 0xffff0000 | (uint)(uVar27 | 0x2000);
  uVar29 = (ushort)((ulonglong)lVar1 >> 0x10);
  uVar23 = CONCAT11((char)(uVar18 >> 8) -
                    (((char)((uint)(uVar23 & 0xfdff) >> 8) + 0xa9U & (byte)uVar28) + 0x99),bVar11);
  uVar30 = (uint)(uint3)((uint3)(uVar6 >> 8) &
                        (uint3)(((uint)(ushort)((ulonglong)lVar1 >> 0x30) << 0x10) >> 8)) << 8;
  uVar9 = -(short)lVar1 & 0x3fff;
  uVar27 = (ushort)(byte)((byte)((uint)uVar23 >> 8) | 0xc0);
  uVar27 = uVar9 / uVar27 & 0xff | uVar9 % uVar27 << 8;
  uVar18 = (int)(short)uVar27 * (int)(short)uVar27;
  uVar9 = (ushort)(uVar18 >> 0x10);
  uVar6 = (uint)uVar29 << 0x10 | uVar18 & 0xff00;
  uVar27 = ((ushort)((uVar6 | (byte)(((char)uVar18 + -0x23) - (uVar9 != 0 && uVar9 != 0xffff))) << 1
                    ) | (ushort)(uVar30 >> 0x1f)) >> (bVar11 & 0x1f);
  uVar18 = ((uVar6 & 0x7fff8000) << 1 | (uint)uVar27) >> 1 | (uint)((uVar27 & 1) != 0) << 0x1f;
  uVar6 = uVar5 ^ (uint)(uVar18 == uVar5) * (uVar5 ^ uVar10);
  uVar18 = uVar18 ^ (uint)(uVar18 == uVar5) * (uVar18 & uVar6);
  uVar27 = (ushort)uVar10 >> 0xe;
  uVar5 = uVar10 & 0xffff0000 | (uint)uVar27;
  uVar10 = uVar6 & 0xffff0000 | (uint)((short)uVar6 >> 1 & 0xffdf);
  iVar31 = ((uVar18 & 0xff) << 8 | uVar18 >> 0x18) * (uint)(ushort)((uVar9 & 0x7f) << 1);
  uVar9 = (ushort)((uint)iVar31 >> 0x10);
  bVar11 = (byte)((((ushort)(uVar17 >> (bVar11 & 0x1f)) | (ushort)(uVar17 << 0x20 - (bVar11 & 0x1f))
                   ) * 2 + 1 & 0xff) >> 1) & 0x1f;
  uVar17 = CONCAT22(uVar16,uVar23) | 0xe7c4ca56;
  uVar6 = CONCAT22((ushort)((uint)iVar24 >> 0x10) | uVar29,uVar27) + 0xf2422b04;
  uVar18 = uVar10 << bVar11 | uVar10 >> 0x20 - bVar11;
  if (bVar33) {
    uVar18 = uVar30 | uVar9;
  }
  uVar29 = CONCAT11((char)(uVar6 >> 8) + '|',(char)uVar6);
  uVar28 = (short)uVar18 + uVar29;
  uVar18 = uVar18 & 0xffff0000 | (uint)uVar28;
  uVar23 = (ushort)iVar31;
  if ((short)uVar28 < 0) {
    uVar23 = uVar27;
  }
  uVar10 = uVar5 - uVar18;
  uVar23 = uVar23 & 0xff00 | (ushort)(byte)(uVar5 < uVar18 | (char)uVar23 << 1);
  uVar27 = (ushort)(uVar18 >> 9);
  uVar18 = (uint)uVar29 & 0xff;
  uVar10 = (uVar10 & 0xffff0000 | uVar18) ^ (uVar10 >> 0x1b & 1) << 0x1b;
  uVar17 = (uVar17 & 0xffff0000 | uVar17 >> 1 & 0x7fff) * 2 + (uint)((uVar6 & 1) != 0);
  bVar11 = (byte)((uint)iVar31 >> 0x10);
  uVar6 = uVar6 & 0xffff0000 | (uint)(uVar9 | 0x2e00) & 0xffffff00 |
          (uint)(byte)(bVar11 << 2 | bVar11 >> 7);
  sVar4 = (short)uVar18;
  uVar5 = uVar10 & 0xffff0000 | (uint)(ushort)(sVar4 + 1);
  uVar18 = ((uint)uVar29 | uVar30) >> 1;
  if (SCARRY2(sVar4,1) != false) {
    uVar18 = uVar5;
  }
  uVar5 = uVar5 ^ uVar10 & 0x80000000;
  uVar28 = (ushort)uVar6;
  uVar9 = (ushort)((short)uVar23 < 0);
  uVar29 = uVar27 - uVar28;
  uVar16 = ((ushort)((uVar17 & 0xffffc8d5) << 0xb) | (ushort)(uVar17 >> 0x15)) + 0x1de1 +
           (ushort)((-uVar18 & 1) != 0);
  uVar6 = ((uVar6 - uVar5) - (uint)(uVar27 < uVar28 || uVar29 < uVar9)) * 0x20000;
  uVar30 = (int)uVar5 >> 0xf;
  uVar27 = (short)(char)((ushort)((short)uVar23 >> 0xf) >> 1) * 0x1b;
  if (0xda8f < uVar27) {
    uVar30 = CONCAT22((short)((int)uVar5 >> 0x1f),uVar16);
  }
  cVar22 = (char)((uint)(ushort)(uVar27 + 0x7a17) >> 8);
  uVar28 = (ushort)(byte)(cVar22 << 1 | cVar22 < '\0') << 8;
  uVar23 = uVar28 >> 9 & 1;
  uVar28 = (uVar27 + 0x7a17 & 0xff | uVar28) ^ uVar23 << 9;
  cVar7 = (char)((uint)uVar28 >> 8);
  uVar28 = uVar28 & 0xff;
  uVar10 = (uint)(byte)(((uVar27 < 0xda8f) + '\x01') - (cVar22 >= '\0')) & 0xffff2f0e;
  cVar22 = (char)uVar10;
  uVar16 = uVar16 | 0xc000;
  uVar18 = (-uVar18 >> 0x1f) << 0x10 |
           (uint)(ushort)(uVar28 | (ushort)(byte)(cVar7 << 4 |
                                                 (byte)(CONCAT11(uVar23 != 0,cVar7) >> 5)) << 8) &
           0xffffff00 | (uint)(byte)((char)uVar28 + cVar22);
  uVar17 = uVar18 % (uint)uVar16;
  uVar27 = 0x8e05 - (uVar29 - uVar9 | 1 << (short)uVar10);
  bVar12 = (byte)uVar17;
  bVar32 = 0xfe < (byte)(bVar12 + 0x1d);
  bVar11 = bVar12 + 0x1e;
  uVar9 = uVar16;
  if ((0xe2 >= bVar12 && !bVar32) && bVar11 != 0) {
    uVar9 = (ushort)uVar17 & 0xff00 | (ushort)bVar11;
  }
  uVar18 = ((uVar18 / (uint)uVar16 & 0xffff) + 0x6a2c32d5) - (uint)(0xe2 < bVar12 || bVar32);
  bVar3 = (byte)uVar18;
  bVar12 = (bVar3 == 0) * (char)(uVar18 >> 8);
  uVar28 = CONCAT11(bVar12,cVar22);
  bVar3 = bVar3 ^ (bVar3 == 0) * (bVar3 & bVar12);
  uVar23 = uVar27 & 0xff;
  uVar29 = (ushort)bVar3 * (ushort)bVar12;
  uVar17 = (uint)(ushort)(uVar23 | (ushort)(byte)((char)((uint)uVar27 >> 8) +
                                                  (char)((uVar18 & 0xffffff00) >> 8) +
                                                 (0xa858 < uVar9)) << 8) & 0xffffff0f;
  sVar8 = (sbyte)uVar17;
  uVar27 = CONCAT11(((uVar18 & 0xffffff00 | (uint)bVar3) >> ((uint)uVar28 & 0x1f) & 1) == 0,bVar11)
           >> sVar8 |
           (uVar29 & 0xff | (ushort)(byte)((char)((uint)uVar29 >> 8) - (char)uVar23) << 8) <<
           0x10 - sVar8;
  uVar18 = 0;
  if (uVar27 != 0) {
    while ((uVar27 >> uVar18 & 1) == 0) {
      uVar18 = uVar18 + 1;
    }
  }
  uVar9 = (ushort)uVar17;
  uVar23 = uVar9 + 0x41e;
  uVar17 = (uint)(ushort)((ushort)(CONCAT12(0xfbe1 < uVar9,uVar28) >> 7) | uVar28 << 10);
  uVar10 = uVar6 | uVar17;
  cVar22 = (char)((uint)uVar23 >> 8);
  uVar19 = SEXT14(cVar22);
  bVar11 = (byte)uVar23;
  uVar5 = 0xa8e6e2a9U >> (bVar11 & 0x1f) | uVar10 << 0x20 - (bVar11 & 0x1f);
  uVar17 = uVar17 & 0xffffff00;
  uVar30 = ((uVar30 & 0xffff0000) >> 5) + 0xa939c04b;
  if ((int)uVar30 < 0) {
    uVar19 = uVar5 & 0xffff | (uint)(ushort)(cVar22 >> 7) << 0x10;
  }
  sVar4 = (ushort)(byte)uVar18 * (ushort)(byte)(uVar17 >> 8);
  uVar10 = (uint)(CONCAT14((char)((ushort)sVar4 >> 8) != '\0',uVar10) >> 0xd);
  bVar12 = (byte)sVar4;
  bVar3 = (byte)uVar10;
  uVar18 = uVar18 & 0xffff0000 |
           (uint)CONCAT11(bVar12 != bVar3 && (char)bVar3 <= (char)bVar12,
                          bVar12 ^ (bVar12 == bVar3) * (bVar12 & bVar3));
  uVar6 = ((uVar6 | uVar17 | 1) << 0x14 | uVar10) >> (bVar11 & 0x1f);
  uVar17 = (uVar18 ^ (uint)(uVar18 == uVar19) * (uVar18 & uVar19)) >> (bVar11 & 0x1f) |
           uVar5 << 0x20 - (bVar11 & 0x1f);
  bVar12 = (bVar11 & 0x1f) % 9;
  bVar3 = (byte)(uVar6 >> 8);
  uVar25 = (uVar6 & 0xffff0000 | (uint)CONCAT11(bVar3 >> bVar12 | bVar3 << 9 - bVar12,(char)uVar6))
           & uVar17;
  uVar6 = (int)((uint)uVar23 | 0xa4dd0000) >> (bVar11 & 0x1f);
  uVar18 = (uVar17 & 0xffff) * (uVar17 & 0xffff);
  uVar29 = (ushort)(uVar18 >> 0x10);
  uVar23 = (ushort)uVar6;
  uVar9 = uVar23 + 0x5feb;
  uVar6 = uVar6 & 0xffff0000;
  uVar28 = (short)uVar30 + 0x597 + (ushort)(0xa014 < uVar23 || CARRY2(uVar9,(ushort)(uVar29 != 0)));
  uVar9 = (ushort)((uVar6 | (ushort)(uVar9 + (ushort)(uVar29 != 0))) >> 6) >> 1;
  uVar10 = CONCAT22((ushort)(uVar6 >> 0x16),uVar9);
  uVar23 = (ushort)(uVar19 >> 0x10) ^ (ushort)((uint)(1 << (uVar18 & 0x1f)) >> 0x10);
  uVar6 = (uVar30 & 0xffff0000 | (uint)uVar28) >> 1 |
          (uint)((uVar19 >> (uVar18 & 0x1f) & 1) != 0) << 0x1f;
  if ((uVar28 & 1) != 0) {
    uVar6 = uVar10;
  }
  bVar11 = (byte)uVar9;
  uVar27 = (ushort)((uVar25 & 0xff00 |
                    (uint)(byte)((byte)uVar25 |
                                (char)((uint)(ushort)(((short)uVar27 >> 1) << 3) >> 8) - 0x2eU)) <<
                   6);
  uVar9 = (ushort)((uVar25 & 0xff00) >> 0xb);
  uVar5 = ~uVar5 >> 1 | (uint)((~uVar5 & 1) != 0) << 0x1f;
  uVar30 = ((uVar10 & 0xffffff00 | (uint)(byte)(bVar11 >> (bVar11 & 7) | bVar11 << 8 - (bVar11 & 7))
            ) ^ 0xf5) + 1;
  uVar10 = (uVar6 & 0xffff0000 | (uint)(ushort)((ushort)uVar6 ^ 1 << ((ushort)uVar6 & 0xf))) &
           (uVar17 & 0xffff0000 | uVar18 & 0xffff);
  uVar6 = ((uint)(uVar23 >> 8) | (((uint)uVar23 & 0xff) << 0x10) >> 8 | (uint)(uVar29 >> 8) << 0x18)
          - (uint)uVar29;
  if (-1 < (int)uVar10) {
    uVar6 = uVar5;
  }
  uVar23 = (ushort)((int)(uVar17 & 0xffff0000) >> 0x1f);
  bVar11 = (byte)uVar30 & 0x1f;
  uVar26 = uVar5 >> bVar11 | uVar6 << 0x20 - bVar11;
  uVar17 = uVar26 + (uVar25 & 0xffff0000 |
                    (uint)(ushort)(uVar27 & 0xff | uVar9 |
                                  (ushort)(byte)((char)((uint)(uVar27 | uVar9) >> 8) * '\x02' +
                                                (0xb174 < uVar23 ||
                                                0xfffe < (ushort)(uVar23 + 0x4e8b))) << 8));
  bVar11 = (byte)uVar30 & 0x1f;
  uVar10 = uVar10 << bVar11 | uVar10 >> 0x20 - bVar11;
  uVar27 = (short)uVar30 * 0x1853;
  uVar5 = uVar30 & 0xffff0000;
  bVar11 = (byte)uVar27;
  bVar11 = bVar11 >> (bVar11 & 0x1f);
  uVar19 = (uint)uVar27 & 0xffffff00;
  uVar27 = (ushort)uVar10;
  uVar25 = (int)(uVar10 & 0xffff0000 | (uint)(ushort)(uVar27 << 1 | uVar27 >> 0xf)) >>
           (bVar11 & 0x1f);
  uVar10 = (uVar5 | uVar19 | (uint)bVar11) +
           (uVar26 & 0xffff0000 | (uint)CONCAT11(~(byte)(uVar26 >> 8) | bVar11,(char)uVar26));
  iVar31 = 0;
  uVar27 = 0;
  if (uVar17 != 0) {
    while (uVar27 = (ushort)iVar31, (uVar17 >> iVar31 & 1) == 0) {
      iVar31 = iVar31 + 1;
    }
  }
  uVar9 = (short)(char)((char)uVar18 << 1 | (char)uVar18 < '\0') * (short)(char)(uVar19 >> 8);
  bVar11 = (byte)uVar10;
  bVar11 = (bVar11 << (bVar11 & 7) | bVar11 >> 8 - (bVar11 & 7)) + 0x94;
  cVar22 = (char)(uVar27 >> 8);
  bVar12 = -cVar22;
  uVar29 = (short)(CONCAT11(1,bVar12) >> (bVar11 & 0x1f)) >> 1;
  bVar20 = (char)uVar29 + 0x6b;
  uVar23 = ((ushort)uVar10 & 0xff00 | (ushort)bVar11) >> (bVar11 & 0x1f);
  uVar10 = uVar10 & 0xffff0000;
  bVar11 = ((byte)uVar23 & 0x1f) % 9;
  bVar3 = (byte)((uint)uVar23 >> 8);
  uVar6 = uVar6 & 0xffff | 0x61d6;
  uVar18 = (uVar25 & 0xffff0000 |
           ((uint)((uVar27 & 0xff00 | (ushort)(cVar22 != '\0')) &
                   ((uVar9 & 0xff00 | uVar9 >> 1 & 0x7f | 0x9f80) ^ (ushort)bVar12) & 0x3fff) <<
            0x10 | uVar25 & 0xffff) / ((uint)uVar29 & 0xff00 | (uint)bVar20 | 0xc000) & 0xffff) *
           (uVar10 | uVar6);
  uVar9 = CONCAT11(-((byte)((uint)uVar29 >> 8) | 0xc0),bVar20) & ~(1 << (uVar23 & 0xf));
  uVar29 = (uVar23 & 0xff | (ushort)(byte)(bVar3 << bVar11 | bVar3 >> 9 - bVar11) << 8) ^ 1;
  uVar27 = (ushort)(uVar18 >> 0x15);
  bVar11 = (byte)uVar6 & 0xf;
  bVar11 = ((byte)uVar6 - (char)(uVar18 >> 0x15)) -
           (((uVar29 >> bVar11 | uVar29 << 0x10 - bVar11) & 0x200) != 0);
  uVar6 = uVar10 | uVar6 & 0xffffff00 | (uint)bVar11;
  bVar11 = bVar11 & 0x1f;
  uVar17 = (uint)(CONCAT14((int)(uVar25 & (uVar10 | (uint)uVar23) ^ 0x93b5) < 0,uVar6) >> bVar11) |
           uVar6 << 0x21 - bVar11;
  bVar11 = (byte)uVar17;
  uVar6 = (uint)(byte)(bVar11 << 5 | bVar11 >> 3);
  uVar17 = uVar17 & 0xffffff00 | uVar6;
  bVar32 = (ushort)(uVar27 | (short)uVar18 * 0x800) == uVar9;
  uVar9 = uVar9 ^ (ushort)bVar32 * (uVar9 ^ (ushort)uVar17);
  bVar11 = (byte)uVar27;
  bVar12 = (byte)uVar9;
  uVar17 = uVar17 ^ uVar6 & 2;
  bVar3 = (byte)uVar17;
  uVar18 = (uVar17 & 0xffff0000 |
           (uint)(ushort)(CONCAT11((bVar11 ^ bVar32 * (bVar11 & bVar12)) << 1,bVar3) | 0x100)) +
           0xc6ada154;
  bVar11 = (byte)uVar18;
  bVar20 = bVar11 & 0xf | 1;
  uVar27 = (ushort)CONCAT31((uint3)(byte)((char)((uint)uVar9 >> 8) + ';' +
                                         (CARRY1(bVar12,bVar3) || 0xfe < (byte)(bVar12 + bVar3))),
                            0xe4) >> bVar20 | 0 << 0x10 - bVar20;
  uVar27 = (uVar27 & 0xff | (ushort)(byte)-(char)((short)uVar27 >> 0xc) << 8) << bVar20;
  cVar22 = (char)(uVar27 >> 8);
  uVar6 = (uint)CONCAT11((char)((uint)CONCAT11((char)(uVar18 >> 8) << (bVar11 & 0x1f),bVar11) >> 8)
                         << 1,bVar20 + 0xab);
  bVar11 = (char)(uVar6 >> 8) + 1;
  uVar6 = (uVar18 & 0xffff0000 | uVar6) >> 1;
  uVar10 = (uint)(ushort)((short)(ushort)bVar11 >> 1 | (ushort)(byte)-((bVar11 & 1) != 0) << 8) - 1;
  uVar17 = (uint)(uint3)((uint3)(uVar5 >> 8) |
                        (uint3)(byte)(cVar22 << 5 |
                                     (byte)(CONCAT11((bVar20 + 0xab & 1) != 0,cVar22) >> 4))) << 8 |
           0x400;
  uVar18 = CONCAT22((ushort)((uVar18 & 0xffff0000) >> 0x11),
                    CONCAT11(((char)(uVar6 >> 8) + -0x7f) - ((uVar27 & 0x4000) != 0),(char)uVar6));
  if (bVar33) {
    uVar18 = uVar17;
  }
  bVar11 = (byte)uVar18 & 7;
  bVar12 = '\x01' << bVar11 | 1U >> 8 - bVar11;
  uVar6 = uVar10 & 0xffff0000 |
          (uint)CONCAT11((byte)(uVar10 >> 8) >> 1,(short)((ushort)uVar10 ^ 0xc3) < 0) | 0x8000;
  iVar31 = (uVar18 & 0xfffff4ff) - (uint)bVar12;
  bVar33 = (uVar18 & 0xfffff4ff) < (uint)bVar12 || iVar31 == 0;
  uVar10 = iVar31 - 1;
  uVar27 = (short)uVar17 << 1 | (ushort)bVar33;
  uVar18 = (uint)(uVar6 == 0xffff2f1a) * ((uVar5 | uVar27) ^ 0xffff2f1a) ^ 0xffff2f1a;
  uVar6 = uVar6 ^ (uint)(uVar6 == 0xffff2f1a) * (uVar6 & uVar18);
  bVar11 = (byte)uVar10 & 0xf;
  uVar29 = (short)uVar18 << bVar11 | 0xd1aaU >> 0x10 - bVar11;
  uVar30 = uVar30 & 0xffff0000 | (uint)uVar27 & 0xffffff00 | (uint)(byte)(bVar33 - 0x2d);
  uVar18 = ((uint)(uVar30 < 0xa5f7dd5b) << 0x10 | uVar10 & 0xff00) >> 7;
  bVar11 = (byte)uVar18;
  uVar9 = (ushort)uVar6 >> (bVar11 & 0x1f);
  uVar6 = uVar6 & 0xffff0000;
  sVar4 = (short)uVar30;
  uVar23 = sVar4 + 1;
  uVar27 = (ushort)(bVar12 >> 1);
  if (uVar23 == 0 || SCARRY2(sVar4,1) != (short)uVar23 < 0) {
    uVar27 = (ushort)uVar18;
  }
  uVar28 = uVar29 ^ (ushort)(uVar9 == uVar29) * (uVar29 ^ uVar27);
  uVar9 = uVar9 ^ (ushort)(uVar9 == uVar29) * (uVar9 & uVar28);
  uVar30 = uVar6 | uVar9;
  iVar31 = 0x1f;
  if (uVar30 != 0) {
    while (uVar30 >> iVar31 == 0) {
      iVar31 = iVar31 + -1;
    }
  }
  uVar30 = CONCAT22(uVar27,uVar9);
  iVar24 = uVar30 % (uVar18 | 0xc000) - 1;
  uVar18 = uVar30 / (uVar18 | 0xc000) & 0xff;
  uVar28 = uVar28 << (bVar11 & 0x1f);
  sVar4 = (short)iVar24;
  uVar27 = 3 - sVar4;
  if (uVar27 != 0 && sVar4 < 4) {
    uVar27 = uVar28;
  }
  uVar29 = (ushort)(byte)((bVar11 - (char)iVar24) - 1);
  uVar9 = uVar29 - uVar28;
  uVar30 = uVar10 & 0xffff0000 | (uint)uVar9;
  if ((short)uVar9 < 0) {
    uVar18 = iVar31 + 0xe82d674fU & 0xffff;
  }
  uVar9 = uVar23 & 0xff;
  uVar16 = (short)(char)uVar18 * (short)(char)uVar9;
  bVar12 = (byte)uVar16;
  bVar3 = (byte)((uint)(ushort)(uVar9 | (ushort)(byte)((char)((uint)uVar23 >> 8) << 1 |
                                                      (0xe0 < (byte)uVar28 ||
                                                      CARRY1((byte)uVar28 + 0x1f,uVar29 < uVar28)))
                                        << 8) >> 8);
  bVar11 = bVar3 + bVar12;
  uVar17 = uVar5 | (ushort)(uVar9 | (ushort)bVar11 << 8);
  if (CARRY1(bVar3,bVar12) || bVar11 == 0) {
    uVar17 = uVar30;
  }
  return CONCAT44(in_EDX,(uVar6 | (uint)uVar16 & 0xffffff00 | (uint)bVar3) + uVar17 + uVar30 +
                         ((int)(uVar6 | uVar18) >> 0x1f) + (int)(short)uVar23 +
                         CONCAT22(0xffff,uVar27) +
                         (iVar31 + 0xe82d674fU & 0xffff0000 | (uint)(ushort)((int)uVar6 >> 0x1f)) +
                         0x280bfcd);
}



// WARNING: Removing unreachable block (ram,0x0804b246)
// WARNING: Removing unreachable block (ram,0x0804b261)

undefined8 log_size_10_var_002(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint5 uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar12;
  uint uVar11;
  byte bVar13;
  sbyte sVar14;
  sbyte sVar15;
  byte bVar16;
  ushort uVar17;
  ushort uVar18;
  byte bVar26;
  ushort uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  char cVar25;
  uint uVar24;
  byte bVar27;
  short sVar28;
  short sVar29;
  undefined4 in_EDX;
  int iVar30;
  uint3 uVar31;
  undefined2 uVar32;
  ushort uVar33;
  uint uVar34;
  byte bVar38;
  int iVar35;
  uint uVar36;
  uint uVar37;
  ushort uVar39;
  ushort uVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  bool in_PF;
  
  uVar9 = 0x43ec3328;
  if (0x93 < ((byte)((uint)((CONCAT22(0xffff,CONCAT11(in_PF,0xff)) >> 1) << 7) >> 8) & 0xf8)) {
    uVar9 = 0x43ec54e4;
  }
  uVar7 = (ushort)(byte)((byte)(((ushort)uVar9 | 0x40) >> 1) | 0x83);
  uVar17 = uVar7 * -0x5ab1;
  uVar18 = uVar17 + 0x56f7;
  bVar26 = ((byte)uVar18 & 0x1f) % 9;
  bVar13 = (byte)((uVar18 & 0xff | (ushort)(0xa908 < uVar17) << 8) >> bVar26) |
           (byte)uVar18 << 9 - bVar26;
  bVar26 = bVar13 & 0xf;
  uVar10 = ((uVar9 >> 0x11) << 0x10 | (uint)(ushort)(uVar7 * 0x83)) ^ 0xdf17b8b2;
  uVar9 = (uint)bVar13 & 0xffffff0f;
  uVar7 = (ushort)uVar9;
  uVar18 = uVar18 & 0xff00 | uVar7;
  bVar13 = (byte)uVar9;
  uVar17 = uVar17 << bVar13 | 0x7231U >> 0x10 - bVar13;
  uVar20 = CONCAT22(0x7ff3,uVar17) | 0x80000000;
  uVar9 = 0;
  if (uVar20 != 0) {
    while ((uVar20 >> uVar9 & 1) == 0) {
      uVar9 = uVar9 + 1;
    }
  }
  uVar10 = (uVar10 & 0xffff0000 | (uint)CONCAT11((char)(uVar10 >> 8) + -8,(char)uVar10)) >> bVar13;
  uVar40 = uVar18 + 0xde0;
  uVar20 = 0x75f08c9f;
  if ((ushort)((0x36a2 << bVar26 | 0x36a2U >> 0x10 - bVar26) << 0xd | 0x230 |
              1 << ((ushort)uVar10 & 0xf)) == 0x3777) {
    uVar20 = (uint)uVar17 | 0x75f00000;
  }
  uVar34 = (uint)uVar40 & 0xffffff00 | 0xffa90000;
  bVar27 = (byte)(uVar10 >> 8);
  uVar17 = (short)(ushort)uVar10 >> bVar13;
  uVar18 = uVar18 ^ uVar7 & 2;
  sVar14 = (sbyte)uVar18;
  bVar26 = sVar14 * '\x02';
  uVar24 = (uint)((ushort)((short)uVar20 << sVar14) >> bVar26);
  uVar34 = ((int)(uVar34 | (byte)((byte)uVar40 ^ (byte)uVar10)) >> 9 & 0xffU |
           (uint)(uint3)((int)uVar34 >> 0x11) << 8) ^ (uint)uVar17;
  iVar35 = (uVar20 & 0xffff0000 | uVar24) << 1;
  lVar4 = (longlong)
          (int)(uVar10 & 0xffff0000 |
               (uint)(ushort)((short)(char)((byte)(CONCAT11(bVar27 << (bVar13 & 7) |
                                                            bVar27 >> 8 - (bVar13 & 7),(byte)uVar10)
                                                  >> 1) >> sVar14) * (short)(char)uVar17)) *
          (longlong)iVar35;
  iVar30 = (int)((ulonglong)lVar4 >> 0x20);
  uVar10 = (uint)(CONCAT14(iVar30 != 0 && iVar30 != -1,uVar34) >> bVar26) |
           uVar34 << sVar14 * -2 + 0x21;
  uVar7 = (short)lVar4 - 0x530;
  sVar28 = (short)(uint3)((ulonglong)lVar4 >> 0x2f);
  if (-1 < (char)((byte)uVar10 & (byte)(uVar10 >> 8))) {
    sVar28 = (short)uVar9;
  }
  uVar17 = (short)iVar35 + sVar28;
  uVar34 = (uVar20 & 0xffff0000 | uVar24 & 0x7fff8000) << 1;
  uVar37 = uVar34 | (ushort)(uVar17 + (short)uVar10 + -0x269d);
  sVar14 = (sbyte)((uint)bVar26 & 0xffffff0f);
  uVar17 = uVar17 >> sVar14 | uVar17 << 0x10 - sVar14;
  uVar20 = ((uint)uVar18 & 0xffffff00 | 0xbb570000 | (uint)bVar26 & 0xffffff0f | 0x20000) &
           ~(1 << ((uint)uVar7 & 0x1f));
  sVar15 = (sbyte)uVar20;
  uVar24 = (uint)(ushort)(uVar17 ^ 1 << sVar15);
  cVar25 = (char)((uint)CONCAT11((char)(uVar20 >> 8) << 1,sVar15) >> 8);
  uVar21 = (uVar20 & 0xffff0000 |
           (uint)CONCAT11(cVar25 << 6 | (byte)(CONCAT11((uVar17 >> sVar15 & 1) != 0,cVar25) >> 3),
                          sVar15)) * -0x14a2374f;
  uVar20 = 0x1f;
  if (uVar21 != 0) {
    while (uVar21 >> uVar20 == 0) {
      uVar20 = uVar20 - 1;
    }
  }
  uVar22 = uVar21 | 0xc0000000;
  uVar1 = CONCAT44(uVar10 & 0xffff0000 | uVar24,
                   (uint)(ushort)((ulonglong)lVar4 >> 0x10) << 0x10 |
                   (uint)uVar7 & 0xff00 | (uint)(byte)((char)uVar7 << sVar15)) & 0x3fffffffffffffff;
  uVar2 = uVar1 / (ulonglong)uVar22;
  uVar1 = uVar1 % (ulonglong)uVar22;
  bVar38 = (byte)(uVar24 >> 8);
  bVar26 = (byte)uVar21 & 0x1f;
  sVar28 = (short)(uVar2 >> 0x10);
  uVar21 = CONCAT22(sVar28,CONCAT11((char)(uVar2 >> 8) + '>',(char)uVar2)) >> 0xd;
  iVar35 = (uVar10 & 0xffff0000 |
           (uint)((ushort)(CONCAT11(bVar38 + 0xac,!SBORROW1(bVar38,'T')) * -0x5faf) >> 1)) << 1;
  uVar18 = (((ushort)((uVar9 & 0xffff) << 1) | (ushort)((uVar34 >> 0x1b & 1) != 0)) << sVar14 |
            uVar7 >> 0x10 - sVar14 | 0x400) * 0x35a8 >> 1;
  uVar23 = (uVar22 >> 0xc | uVar20 << 0x14) & ~(1 << ((uint)uVar1 & 0x1f));
  cVar25 = (char)iVar35;
  uVar40 = CONCAT11((char)((uint)iVar35 >> 8) << 1,cVar25);
  bVar16 = (byte)(uVar23 & 0xffffff0f);
  uVar24 = (uint)(ushort)(uVar1 >> 0x10) << 0x10;
  uVar34 = (uint)CONCAT11((char)((uVar23 & 0xffffff0f) >> 8) + -1,bVar16);
  uVar11 = (uVar10 & 0x7fff0000) << 1 | (uint)uVar40 & 0xffffff00 |
           (uint)(byte)((cVar25 - (char)((uint)uVar40 >> 8)) - 1);
  uVar10 = CONCAT22(sVar28 >> 0xd,((short)uVar21 + (ushort)(byte)uVar1 & 0xff) * (ushort)bVar16) ^
           0xec4ea216;
  uVar22 = uVar10 >> 1;
  uVar36 = (uVar11 << bVar16 | uVar11 >> 0x20 - bVar16) ^ 0x4d8f35f5;
  bVar13 = (byte)uVar22;
  bVar27 = (byte)(uVar22 >> 8);
  bVar12 = bVar27 ^ (bVar13 == bVar27) * (bVar27 ^ (byte)(uVar34 >> 8));
  uVar22 = CONCAT22((ushort)(uVar10 >> 0x11),CONCAT11(bVar12,bVar13)) & 0xffffff00 |
           (uint)(byte)(bVar13 ^ (bVar13 == bVar27) * (bVar13 & bVar12));
  bVar13 = (byte)uVar21 >> bVar16;
  uVar10 = uVar21 & 0xff00;
  uVar11 = uVar22 - uVar36;
  cVar25 = (char)(uVar36 >> 8);
  uVar7 = (ushort)(byte)uVar36 & 0xf;
  uVar17 = 0xea9 - ((short)uVar1 + 0xf6 + (short)uVar23 * 2 >> 0xf);
  if ((uVar18 >> uVar7 & 1) != 0) {
    uVar17 = (ushort)uVar10 | (ushort)bVar13;
  }
  uVar34 = (uVar23 & 0xffff0000 | uVar34) << bVar16;
  uVar9 = -(uVar9 & 0xffff0000 | (uint)(ushort)(uVar18 ^ 1 << uVar7));
  if (uVar9 == 0) {
    uVar9 = uVar21 & 0xff00 | (uint)bVar13;
  }
  uVar21 = CONCAT22((ushort)((CONCAT14(bVar38 < 0x54,uVar37) >> bVar26) >> 0x10) |
                    (ushort)((uVar37 << 0x21 - bVar26) >> 0x10),
                    uVar17 & CONCAT11(cVar25 << bVar16 % 9 |
                                      (byte)(CONCAT11(uVar22 < uVar36,cVar25) >> 9 - bVar16 % 9),
                                      (byte)uVar36)) + 0xe4e060d6;
  uVar7 = ((ushort)(byte)uVar11 * (ushort)(byte)(uVar10 >> 8) & 0xff | (ushort)bVar13 << 8) + 0xf19;
  cVar25 = (char)(uVar34 >> 8) + '\x01';
  uVar10 = uVar10 | uVar24;
  if ((uVar9 & 1) == 0 && cVar25 != '\0') {
    uVar10 = uVar24;
  }
  uVar23 = uVar20 & 0xffff0000 |
           (uint)(ushort)((((ushort)uVar20 | 0x43dd) >> bVar16 | uVar40 << 0x10 - bVar16) + 0x62f7);
  uVar24 = uVar34 & 0xffff0000 | (uint)CONCAT11(cVar25,(char)uVar34) | 0xc000;
  bVar41 = (uVar34 & 1) != 0;
  uVar18 = (ushort)uVar24 >> 1;
  bVar26 = (byte)uVar18;
  uVar37 = (uVar34 & 0xffff0000 | (uint)(ushort)(uVar18 | (ushort)bVar41 << 0xf) & 0xffffff00 |
           (uint)(byte)(bVar26 + 7 + bVar41)) ^ 0x5453;
  uVar22 = (uVar36 & 0xffff0000 | (uint)uVar7) ^ uVar23;
  uVar9 = uVar11 & 0xffff0000 |
          (uint)(ushort)((uVar7 & 0x3f00 |
                         (ushort)((uVar9 >> 1 & 1) == 0 && (uVar9 >> 1 | uVar34 << 0x1f) != 0)) /
                         (ushort)(byte)(uVar24 >> 8) & 0xff |
                         (ushort)(byte)(((int)(uVar22 & uVar21) < 0) << 7 |
                                        ((uVar22 & uVar21) == 0) << 6 |
                                        (((bVar26 & 0xf) + 7 + bVar41 & 0x10) != 0) << 4 |
                                       in_PF << 2) << 8 | 0x200);
  bVar26 = (byte)uVar37 & 0x1f;
  uVar24 = uVar37 << bVar26 | uVar21 >> 0x20 - bVar26;
  bVar26 = (byte)uVar24 & 0x1f;
  uVar34 = uVar9 >> bVar26 | uVar9 << 0x20 - bVar26;
  bVar41 = CARRY4(uVar21,uVar34) || 0xfffffffe < uVar21 + uVar34;
  bVar13 = (byte)(uVar22 >> 8);
  bVar26 = bVar13 + 0x38;
  uVar7 = (short)uVar24 * -0x50ad;
  bVar27 = (byte)((uint)uVar7 >> 8);
  iVar35 = (uVar34 & 0xffff) * (uint)bVar27;
  uVar18 = (ushort)((uint)iVar35 >> 0x10);
  uVar7 = uVar7 & 0xff;
  uVar9 = (uint)(ushort)(uVar7 | (ushort)(byte)(bVar27 + 1) << 8);
  uVar37 = (uVar23 + 0x41 +
           (int)(CONCAT14(199 < bVar13 || CARRY1(bVar26,bVar41),
                          uVar22 & 0xffff0000 | (uint)CONCAT11(bVar26 + bVar41,(char)uVar22)) >> 3)
           * 4) * 0x4000;
  bVar13 = (byte)uVar7;
  uVar10 = (uVar10 & 0xffff0000 | (uint)(ushort)(uVar18 >> 3 | uVar18 << 0xd)) >> (bVar13 & 0x1f) |
           (uVar24 & 0xffff0000 | uVar9) << 0x20 - (bVar13 & 0x1f);
  uVar34 = (int)(uVar21 + uVar34 + 1 & 0xffff0000 | (uint)bVar27) >> (bVar13 & 0x1f);
  bVar26 = (bVar13 & 0x1f) % 9;
  uVar40 = (ushort)uVar10;
  uVar18 = ((byte)(((char)((byte)((uint)iVar35 >> 8) >> 1) >> 3) << bVar26 |
                  (byte)((ushort)((short)((ushort)iVar35 >> 1) >> 0xb) >> 9 - bVar26)) - uVar40) -
           (ushort)((char)(uVar37 >> 8) < '\0');
  bVar26 = (byte)((uint)(ushort)(uVar7 | (ushort)(byte)((char)(uVar9 >> 8) >> (bVar13 & 0x1f)) << 8)
                 >> 8);
  uVar21 = (uVar20 & 0xc530000 | (uVar23 & 0xc536f9c) >> 1 & 0x7fff) >> (bVar13 & 0x1f) |
           uVar10 << 0x20 - (bVar13 & 0x1f);
  uVar17 = (short)(uVar7 | (ushort)(byte)(bVar26 << 6 | bVar26 >> 2) << 8) >> 3;
  uVar7 = uVar18 & 0xff | (ushort)(byte)((char)(uVar18 >> 8) + '>' << ((byte)uVar17 & 0x1f)) << 8;
  uVar9 = (uint)uVar7 | 0xc000;
  uVar10 = (uint)(uVar40 & 0x3fff) << 0x10 | (uint)uVar7 | 0xc000;
  uVar20 = uVar10 % uVar9;
  uVar40 = (ushort)uVar21 & 0x5d97;
  uVar18 = (-0xa6b - (short)(uVar10 / uVar9)) +
           (ushort)((ushort)((ushort)uVar20 & 0xff00 | (ushort)(byte)((char)uVar20 + 0x5c)) <=
                   (ushort)uVar34);
  uVar20 = uVar24 & 0xffff0000 | (uint)((uVar17 & 0xff00 | uVar18 & 0x1c) & uVar40);
  uVar9 = ((uVar37 & 0xffff0000 | (uint)(ushort)(uVar17 * 9)) & ~(1 << ((uint)uVar17 & 0x1f)) &
          0xffff00ff) + 0xb564b672;
  uVar7 = (ushort)uVar9;
  uVar40 = uVar40 & uVar7;
  uVar7 = uVar7 + 0x786a;
  uVar10 = CONCAT22((short)(uVar18 & 0xff00 | uVar17 & 0xff) >> 0xf,
                    (uVar17 & 0xff) << 8 | uVar7 >> 8);
  uVar18 = ((ushort)(uVar20 << 1) | (ushort)((int)uVar20 < 0)) << 1;
  bVar26 = (byte)uVar18 & 0x1f;
  uVar10 = uVar10 << bVar26 | uVar10 >> 0x20 - bVar26;
  lVar4 = (ulonglong)uVar10 * (ulonglong)uVar10;
  uVar18 = uVar18 ^ 1 << (uVar40 & 0xf);
  uVar7 = (short)uVar7 >> 0x14;
  bVar26 = (byte)((uint)uVar18 >> 8);
  bVar26 = bVar26 >> 6 | bVar26 << 2;
  uVar10 = (uVar9 & 0xffff0000 | (uint)uVar7) ^ 0xa4c4b2b4;
  uVar9 = ~((uint)(ushort)((ulonglong)lVar4 >> 0x10) << 0x10);
  if ((byte)(bVar26 * '\x02') == 0) {
    uVar9 = uVar34;
  }
  uVar17 = CONCAT11(!SCARRY1(bVar26,bVar26),(char)uVar10) << 7;
  uVar20 = uVar10 & 0xffff0000 | (uint)uVar17;
  uVar9 = uVar9 | 0x54895ae7;
  uVar39 = (ushort)(uVar34 >> 0x1b);
  uVar33 = (ushort)(uVar34 >> 0xb) | (uVar18 & 0xff | (ushort)(byte)(bVar26 * '\x02') << 8) + 0xca24
  ;
  if (in_PF) {
    uVar33 = uVar17;
  }
  uVar34 = 0;
  if (uVar20 != 0) {
    while ((uVar20 >> uVar34 & 1) == 0) {
      uVar34 = uVar34 + 1;
    }
  }
  uVar20 = (uint)CONCAT11((char)(uVar9 >> 8) + 'V',(char)uVar9);
  bVar26 = (byte)((uint)uVar17 >> 8);
  uVar19 = uVar33 + (short)((uint)((int)(short)lVar4 * (int)(short)uVar7) >> 0x10) * 4;
  uVar37 = uVar20 & 0xffff3fff | 0xc0;
  uVar7 = (ushort)(byte)uVar37;
  uVar8 = (ushort)uVar37;
  uVar17 = uVar8 / uVar7;
  uVar37 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | ((uint)uVar19 & 0xff00) << 8 |
           (uint)uVar19 << 0x18;
  uVar7 = (uVar17 & 0xff | uVar8 % uVar7 << 8) >> 1;
  uVar18 = (ushort)(CONCAT22((short)((ulonglong)lVar4 >> 0x30),
                             (ushort)(byte)((ulonglong)lVar4 >> 0x20)) +
                    ((uVar24 & 0x7fff0000) << 1 | (uint)uVar18) >> 0x11) |
           (ushort)((uVar17 & 1) != 0) << 0xf;
  uVar20 = (uVar21 & 0x3840000) >> 1 | uVar20 << 0x1f |
           (uint)(ushort)((ushort)((uVar21 & 0x3850000 | (uint)(uVar40 & 0x1124)) >> 1) ^
                         (ushort)(byte)(bVar26 >> 7 | bVar26 << 1) << 8);
  bVar26 = (byte)((int)uVar37 >> 0x14);
  uVar17 = 0x1853 >> (bVar26 & 0x1f);
  uVar10 = uVar34 & 0xffff0000 | (uint)uVar17;
  sVar28 = (short)(uVar37 >> 0x10);
  iVar35 = 0;
  cVar25 = '\0';
  if (uVar18 != 0) {
    while (cVar25 = (char)((uint)iVar35 >> 8), (uVar18 >> iVar35 & 1) == 0) {
      iVar35 = iVar35 + 1;
    }
  }
  bVar13 = ((char)((uint)uVar7 >> 8) - cVar25) - 1;
  uVar24 = (uint)(ushort)(uVar7 & 0xff | (ushort)bVar13 << 8) & 0xffffffdf;
  bVar41 = (bVar13 & 4) != 0;
  uVar34 = (uVar9 & 0xffff0000 | uVar24) >> 0xc;
  bVar13 = (byte)uVar34;
  uVar21 = (uint)(ushort)((short)uVar24 * uVar17 | 0x2000) << 0x16;
  uVar37 = CONCAT22(sVar28 >> 0x14,CONCAT11(((char)uVar19 >> 4) + -0x6c,bVar26) * -0x1284) << 1 | 1;
  uVar9 = 0;
  if (uVar21 != 0) {
    while ((uVar21 >> uVar9 & 1) == 0) {
      uVar9 = uVar9 + 1;
    }
  }
  bVar27 = (byte)uVar37 & 0x1f;
  uVar37 = uVar37 >> bVar27 | uVar37 << 0x20 - bVar27;
  bVar12 = (byte)uVar37;
  bVar27 = (bVar12 & 0x1f) % 9;
  uVar7 = CONCAT11(0x1f,(char)(uVar37 >> 8)) & 0x1ff;
  uVar22 = CONCAT22((ushort)(((ulonglong)uVar20 << (bVar26 & 0x1f)) >> 0x10) |
                    (ushort)((ulonglong)(uVar20 >> 0x21 - (bVar26 & 0x1f)) >> 0x10),
                    (ushort)(byte)uVar24 << 1);
  uVar24 = ((((uint)uVar39 & 0xfffe) << 0x10) >> 1 |
           (uint)(ushort)((((short)(CONCAT22(uVar39,uVar33) >> 1) << 2 & sVar28 >> 4) >> 1) << 1 | 1
                         )) + 0xf8bf1771;
  uVar20 = (uVar10 << (bVar12 & 0x1f) | uVar10 >> 0x20 - (bVar12 & 0x1f)) ^ 0x93665bcc;
  uVar10 = (uVar9 & 0xff00) << 8 | (uint)(byte)((char)uVar9 << 1) << 0x18 |
           uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 & 0xffffbcff;
  uVar9 = (uint)CONCAT11((byte)(uVar7 >> bVar27) | (byte)(uVar7 << 9 - bVar27),bVar12) & 0xffffff0f;
  sVar14 = (sbyte)uVar9;
  uVar7 = (short)uVar24 << sVar14 | (ushort)uVar9 >> 0x10 - sVar14;
  uVar9 = 0x1f;
  if (uVar20 != 0) {
    while (uVar20 >> uVar9 == 0) {
      uVar9 = uVar9 - 1;
    }
  }
  bVar26 = bVar12 & 0xf;
  uVar24 = (uVar24 & 0xffff0000 | (uint)(ushort)(uVar7 >> bVar26 | uVar7 << 0x10 - bVar26)) << 1;
  uVar7 = (ushort)uVar24;
  uVar11 = uVar24 & 0xffff0000 | (uint)(ushort)(uVar7 >> bVar26 | uVar7 << 0x10 - bVar26);
  uVar40 = (short)uVar20 * 0x4960;
  uVar18 = (CONCAT11(0xd9,bVar12) & 0xff0f) >> 1;
  uVar7 = ((ushort)uVar9 >> 5) - 0xe7;
  uVar24 = uVar10 - uVar11;
  uVar17 = (ushort)(uint)((ulonglong)
                          (uVar21 | (ushort)((((ushort)uVar34 & 0xff00 |
                                              (ushort)(byte)(bVar13 >> 5 | bVar13 << 3)) >> 1) +
                                            0x8b3f)) * (ulonglong)uVar22 >> 0x21);
  if ((SBORROW4(uVar10,uVar11) != false) != (int)uVar24 < 0) {
    uVar17 = uVar40;
  }
  uVar33 = (ushort)uVar24 & uVar40;
  uVar10 = uVar22 + (uVar20 & 0xffff0000 | (uint)uVar40) * 2;
  bVar13 = (byte)uVar10 & 0xf;
  bVar26 = (char)((uVar10 & 0xff0e) >> 1) - (char)uVar18;
  iVar35 = (uint)(ushort)(short)(char)(((uint)uVar7 & 0xffffff00 | (uint)(byte)((char)uVar7 + 0x9d))
                                      >> 1) * (uint)(ushort)(uVar17 + 0x727a);
  uVar7 = (short)iVar35 >> (bVar26 & 0x1f);
  uVar24 = (uVar24 & 0xffff0000 | (uint)uVar33 | uVar10 & 0xffff0000 | (uint)uVar18) >>
           (bVar26 & 0x1f);
  bVar27 = (byte)((uint)iVar35 >> 0x10);
  bVar12 = (byte)((uint)iVar35 >> 0x18) >> (bVar26 & 0x1f);
  uVar34 = (uint)CONCAT11((char)(uVar24 >> 8) << (bVar26 & 0x1f),(char)uVar24) & 0xffffff00;
  bVar26 = (byte)uVar7;
  uVar7 = (uVar7 & 0xff00 | (ushort)(byte)(bVar26 ^ (bVar26 == bVar27) * (bVar26 & bVar27))) << 1;
  uVar20 = ((int)(uVar20 & 0xffff0000 | (uint)(ushort)(uVar40 << bVar13 | uVar33 >> 0x10 - bVar13))
           >> 1) << 1;
  uVar21 = uVar20 | 1;
  uVar20 = uVar20 & 0x1f | 1;
  uVar11 = uVar21 | 1 << uVar20;
  uVar7 = (uVar7 & 0xff00 | (ushort)(byte)(((byte)uVar7 | 1) + 0x84)) + 0x823f +
          (ushort)((uVar21 >> uVar20 & 1) != 0);
  uVar24 = uVar24 & 0xffff0000 | uVar34 | (uint)((byte)((char)uVar24 >> 2) >> 1);
  bVar42 = ((ushort)uVar24 >> 5 & 1) != 0;
  bVar26 = (byte)uVar7;
  bVar13 = bVar26 - bVar12;
  bVar43 = bVar26 < bVar12 || bVar13 < bVar42;
  bVar26 = (byte)(uVar34 >> 8);
  cVar25 = bVar26 + bVar43;
  uVar20 = (uint)(uint3)(CONCAT21((ushort)(uVar37 >> 0x11),(char)((uint)uVar7 >> 8)) | 0x800000) <<
           8;
  if (cVar25 != '\0') {
    uVar20 = uVar22 + 0x96c7cab1;
  }
  lVar4 = (ulonglong)((uVar9 >> 0x11) << 0x10 | (uint)CONCAT11(cVar25,bVar13 - bVar42)) *
          (ulonglong)uVar24;
  uVar31 = (uint3)((ulonglong)lVar4 >> 0x28);
  bVar27 = (char)((ulonglong)lVar4 >> 0x20) + 0x53;
  uVar21 = CONCAT31(uVar31,bVar27);
  uVar9 = (uint)lVar4 >> 1;
  uVar37 = ((uint)(CONCAT14(CARRY1(bVar26,bVar43),uVar11) >> 0xb) | uVar11 << 0x16) + 0x59870295;
  cVar25 = (char)uVar9;
  bVar13 = ((uVar21 & 0x6aaf) != 0) + 0x86;
  uVar34 = (uint)(ushort)(CONCAT11(-(char)(uVar9 >> 8),cVar25 << 1 | cVar25 < '\0') *
                         ((ushort)(((uint)uVar31 & 0xff) << 8) | 0x400 |
                         (ushort)(byte)((bVar27 & bVar26) + 0xbb)));
  bVar26 = bVar13 + bVar26;
  bVar27 = bVar26 & 0xf;
  uVar7 = (ushort)((short)uVar18 >> (bVar13 & 0x1f)) >> bVar27 |
          (short)(uVar22 + 0x96c7cab1) << 0x10 - bVar27 | 0x2000;
  sVar28 = CONCAT11(0xdd,(byte)((ulonglong)lVar4 >> 0x18) >> 1 | (byte)((uVar21 << 0x1f) >> 0x18));
  uVar11 = (uVar37 & 0xfffe0000) >> 1 | (uint)uVar18 << 0x1f |
           ((uVar37 & 0xffff0000 | (uint)(ushort)((short)uVar37 << 1)) >> 1 & 0xf800) >> 0xb;
  uVar21 = (uint)(ushort)((short)(uVar24 | 0x8ea3) + 0x2a +
                         (uVar7 << 1 | (ushort)((short)uVar7 < 0)) * 8);
  uVar37 = (uint)(CONCAT11((char)(uVar20 >> 8) + '+',bVar26) & 0xff0f);
  uVar5 = (longlong)(int)uVar11 * 0x349af71a;
  iVar35 = (int)(uVar5 >> 0x20);
  uVar22 = (uint)(ushort)~(ushort)((uVar10 & 0xffff0000 | uVar21) >> 0xf);
  uVar9 = (ushort)((ushort)(CONCAT12(iVar35 != 0 && iVar35 != -1,sVar28) >> bVar27 % 0x11) |
                  sVar28 << 0x11 - bVar27 % 0x11) * uVar22;
  sVar28 = (short)(uVar9 >> 0x10);
  iVar35 = (uVar21 << 0x11 | (uVar10 & 0x80000000) >> 0xf | uVar22) + 0xbebfb9d9 +
           (uint)(sVar28 != 0);
  uVar1 = (ulonglong)(uVar20 & 0xffff0000 | uVar37 | 0xc0000000);
  uVar2 = CONCAT44(CONCAT22((short)((ulonglong)lVar4 >> 0x30),sVar28),
                   (uVar34 & 0xff00) << 8 | uVar34 << 0x18 | uVar9 & 0xffff) & 0x3fffffffffffffff;
  uVar3 = uVar2 / uVar1;
  uVar7 = CONCAT11((byte)(uVar37 >> 8) & (byte)uVar3,bVar26) & 0xff0f;
  uVar9 = uVar20 & 0xffff0000 | 0xc0000000;
  sVar29 = (short)(uVar2 % uVar1);
  sVar28 = sVar29 + -0x720c;
  if ((SCARRY2(sVar29,-0x720c) != SCARRY2(sVar28,0)) != sVar28 < 0) {
    uVar11 = uVar9 | uVar7;
  }
  uVar20 = (uVar24 | 0x8ea3) << 1;
  uVar17 = (ushort)(uVar3 >> 0x10);
  uVar7 = uVar7 - 1;
  uVar34 = (uint)(ushort)(((ushort)uVar20 | uVar17 >> 0xf) >> ((byte)uVar7 & 0x1f));
  uVar33 = -(short)iVar35;
  bVar26 = (byte)uVar7 & 0x1f;
  uVar1 = (ulonglong)(iVar35 != 0) << 0x20 | uVar5 >> 6 & 0x3ffffff;
  uVar24 = (uint)(uVar1 << bVar26) | (uint)(uVar1 >> 0x21 - bVar26);
  uVar10 = (CONCAT31((int3)(uVar3 >> 8),(byte)uVar3 << 1) & 0xffff | 1) * uVar34;
  bVar26 = (byte)(uVar10 & 0xffff);
  uVar18 = CONCAT11(((short)(uVar33 + 0x8870) < 0) << 7 | (uVar33 == 0x7790) << 6 |
                    ((((byte)((uVar10 & 0xffff) >> 8) & 0xf) + 3 & 0x10) != 0) << 4 | bVar41 << 2 |
                    2U | 0x778f < uVar33,bVar26);
  uVar40 = uVar7 & 0xff | (ushort)(byte)((char)((uint)uVar7 >> 8) + (char)(uVar34 >> 8) + 1) << 8;
  bVar13 = (byte)(uVar7 & 0xff);
  uVar7 = (ushort)(uVar10 >> 0x10) & 0xff |
          (ushort)(byte)((byte)(uVar10 >> 0x18) >> (bVar13 & 0x1f)) << 8;
  uVar10 = (uint)uVar17 << 0x10 | (uint)uVar18 & 0xffffff00 |
           (uint)(byte)(bVar26 >> 1 | (uVar18 < (ushort)(uVar33 + 0x8870)) << 7);
  sVar28 = (short)uVar10;
  sVar29 = (short)((uVar20 & 0xffff0000 | uVar34) >> 7);
  uVar20 = uVar24 << (bVar13 & 0x1f) | uVar24 >> 0x20 - (bVar13 & 0x1f);
  if (SCARRY2(sVar29,sVar28) != (short)(sVar29 + sVar28) < 0) {
    uVar20 = (int)sVar28;
  }
  bVar42 = (uVar20 >> 0x18 & 1) != 0;
  if (bVar42) {
    uVar10 = uVar11;
  }
  bVar26 = (byte)(uVar10 >> 8);
  uVar40 = (ushort)(CONCAT12(bVar42,uVar40) >> 0xf) | (uVar40 | 0x10) << 2;
  uVar21 = (uVar20 & 0xfeff0000 | (uint)(ushort)((ushort)uVar20 >> 5 | (ushort)uVar20 << 0xb)) +
           0x912ad701;
  uVar18 = CONCAT11(~bVar26,bVar42);
  uVar10 = uVar10 & 0xffff0000;
  uVar20 = (uVar11 & 0xffff0000 | (uint)bVar26) >> 1;
  bVar26 = (byte)uVar40 & 0x1f;
  uVar9 = (uVar9 | uVar40) >> bVar26 |
          CONCAT22((short)uVar17 >> 0x1f,
                   (uVar7 << (bVar13 & 0xf) | uVar7 >> 0x10 - (bVar13 & 0xf)) << 10) <<
          0x20 - bVar26;
  sVar29 = (short)uVar21;
  uVar34 = CONCAT22((short)uVar17 >> 0x1f,(ushort)(sVar29 * 0x5eb1) >> 9 | (short)uVar20 << 7);
  bVar26 = (byte)uVar9;
  bVar13 = bVar26 & 0x1f;
  uVar9 = uVar20 >> bVar13 | uVar9 << 0x20 - bVar13;
  bVar26 = bVar26 & 0x1f;
  uVar9 = (uVar9 & 0xffff0000 | (uint)(ushort)((short)uVar9 >> 1)) + (uVar10 | uVar18);
  uVar20 = (int)(short)uVar18 * (int)(short)uVar18;
  uVar24 = (int)sVar28 & (uVar10 | uVar20 & 0xa2ff);
  bVar27 = (byte)uVar9;
  bVar13 = (byte)(uVar20 & 0xa2ff);
  uVar21 = uVar21 & 0xffff0000 | (uint)(ushort)-sVar29;
  uVar34 = CONCAT22((ushort)((uVar34 << bVar26) >> 0x10) |
                    (ushort)((uVar34 >> 0x20 - bVar26) >> 0x10),(short)((int)uVar20 >> 0x20)) ^
           0x70362810;
  uVar10 = uVar10 | uVar20 & 0xa200 |
           (uint)(byte)((bVar13 >> (bVar27 & 7) | bVar13 << 8 - (bVar27 & 7)) << 1);
  uVar10 = uVar10 >> (bVar27 & 0x1f) | uVar10 << 0x20 - (bVar27 & 0x1f);
  uVar20 = uVar21 ^ (uint)(uVar10 == uVar21) * (uVar21 ^ (byte)(bVar42 << 1));
  uVar37 = uVar20 << (bVar27 & 0x1f) |
           (uint)(CONCAT14(uVar10 < uVar21,uVar20) >> 0x21 - (bVar27 & 0x1f));
  sVar28 = (short)(((uVar34 & 0x3fff) << 0x10 |
                   (uVar10 ^ (uint)(uVar10 == uVar21) * (uVar10 & uVar20)) & 0xffff) %
                  (uVar9 & 0xffff | 0xc000));
  uVar10 = SEXT24(sVar28);
  uVar7 = ((ushort)uVar9 | 0xc000) ^ 1 << ((ushort)uVar9 & 0xf);
  uVar37 = uVar37 ^ 1 << (uVar37 & 0x1f);
  uVar22 = uVar37 ^ (uint)(uVar10 == uVar37) *
                    (uVar37 ^ (uVar34 & 0xffff0000 | (uint)(ushort)(sVar28 >> 0xf)));
  uVar10 = uVar10 ^ (uint)(uVar10 == uVar37) * (uVar10 & uVar22);
  sVar28 = (short)uVar24;
  bVar13 = (byte)uVar7;
  bVar26 = (bVar13 & 0x1f) % 9;
  cVar25 = (char)uVar10;
  iVar35 = (uVar10 & 0xffffff00 |
           (uint)(byte)((byte)(CONCAT11(sVar28 < 0,cVar25) >> bVar26) | cVar25 << 9 - bVar26)) <<
           (bVar13 & 0x1f);
  uVar10 = uVar24 & 0xffff0000 | (uint)(ushort)(sVar28 << 1 | (ushort)(sVar28 < 0)) | 0xbac6;
  uVar9 = (uVar9 & 0xffff0000 | (uint)uVar7) << (bVar13 & 0x1f);
  lVar4 = (longlong)iVar35 * (longlong)iVar35;
  uVar32 = (undefined2)((ulonglong)lVar4 >> 0x30);
  sVar28 = ((short)CONCAT31((int3)((ulonglong)lVar4 >> 8),(char)lVar4 + -0x29) * -0x5e27 + 0x73c0) -
           (ushort)(0x5eeb8cf5 < uVar22 + 0x8f1914f8);
  cVar25 = (char)uVar9;
  iVar35 = (uVar9 & 0xffffff00 | (uint)(byte)(cVar25 << 1) | 1) << 1;
  bVar26 = (byte)iVar35;
  bVar13 = bVar26 | cVar25 < '\0';
  uVar40 = (ushort)uVar10;
  uVar10 = ~(CONCAT22(uVar32,(short)(char)((char)sVar28 + (char)(sVar28 >> 0xf) + '\x01') *
                             (short)(char)bVar13) ^ uVar10) << 1 | 1;
  uVar18 = sVar28 >> 0xf & ~(1 << (uVar40 & 0xf)) ^ (ushort)uVar10;
  uVar34 = (uVar9 & 0x7fff8000) << 1;
  uVar9 = (uint)CONCAT11((char)((uint)iVar35 >> 8) + -0x1a,bVar13);
  bVar26 = bVar26 & 0x1f | cVar25 < '\0';
  uVar20 = 0x11c1aU >> bVar26 | (uVar34 | uVar9) << 0x20 - bVar26;
  cVar25 = (char)((uint)uVar18 >> 8);
  bVar26 = (char)(uVar9 >> 8) - cVar25;
  uVar7 = CONCAT11(bVar26 + 0x94,bVar13) + (short)uVar20 + (ushort)(bVar26 < 0x6c);
  uVar10 = (int)uVar10 >> 0x1d;
  uVar21 = uVar20 & 0xffff0000 |
           (uint)CONCAT11((char)(uVar20 >> 8) >> ((byte)uVar7 & 0x1f),(char)uVar20);
  uVar18 = uVar18 & 0xff;
  uVar24 = (uint)(ushort)(uVar18 | (ushort)(byte)-cVar25 << 8);
  uVar7 = uVar7 >> 1;
  uVar17 = uVar7 | (uVar40 + 0xa1ff) * -0x8000;
  uVar9 = uVar10 & 0xfffffa0b;
  bVar13 = (byte)uVar7;
  bVar27 = (byte)uVar18;
  bVar26 = bVar13 + bVar27;
  uVar20 = uVar34 | (uint)uVar17 & 0xffffff00 | (uint)bVar26;
  bVar26 = bVar26 & 0x1f;
  uVar11 = -(uVar21 << bVar26 | (uint)(CONCAT14(CARRY1(bVar13,bVar27),uVar21) >> 0x21 - bVar26));
  uVar21 = (uint)(ushort)(CONCAT11((byte)(uVar9 >> 8) >> 1,(char)uVar9) | 0x8000);
  uVar9 = (uVar20 | 0xfd67) + 0x893b1e97 + (uint)(0x5e00 < uVar40);
  uVar10 = (uVar22 + 0x302d8802 & 0xffff0000 | (uint)(uVar17 >> 8)) - (uVar10 & 0xffff0000 | uVar21)
  ;
  uVar6 = (uint5)uVar20 | 0xfd67;
  uVar37 = (uVar21 & 0xfe) >> 1;
  uVar22 = uVar9 & 0xffff0000;
  uVar20 = (uint)uVar6 >> 1;
  uVar9 = (uVar22 | (ushort)((short)uVar9 + (short)uVar6)) >> 1;
  uVar22 = (uVar9 & 0xffff |
           (uint)(ushort)((ushort)(uVar22 >> 0x11) |
                         (ushort)(((uint)(0x5e00 >= uVar40) << 0x1f) >> 0x10)) << 0x10) ^ 0x11b3;
  uVar23 = uVar22 | 1 << (uVar20 & 0x1f);
  bVar42 = (uVar22 >> (uVar20 & 0x1f) & 1) != 0 || (short)uVar9 == 0x11b3;
  if ((char)(uVar21 >> 8) == 'T') {
    uVar11 = uVar11 & 0xffff0000 | uVar20 & 0xffff;
  }
  if (bVar41) {
    uVar10 = uVar10 & 0xffff0000 | uVar24 & 0xff00 | (uint)bVar42;
  }
  uVar18 = (short)uVar20 - (short)uVar23 >> 1;
  uVar40 = CONCAT11((char)(uVar24 >> 8),(char)uVar11) ^ uVar18;
  bVar26 = (byte)uVar18 & 0xf;
  uVar17 = CONCAT11((char)(uVar11 >> 8),bVar42) << bVar26 | uVar40 >> 0x10 - bVar26;
  uVar7 = (ushort)(uVar23 >> 8);
  uVar33 = (ushort)(uVar23 >> 0x18) | uVar7 & 0xff00;
  uVar34 = (uVar34 >> 0x11) << 0x10;
  uVar20 = (uint)(ushort)(uVar18 & 0xf | uVar17 << 8);
  uVar24 = uVar11 & 0xffff0000 | (uint)uVar40 | 1 << uVar37;
  uVar9 = (uVar21 & 0xff00 | uVar37) * (uint)uVar17;
  if (SBORROW2((short)uVar24,0x4f57)) {
    uVar10 = uVar34 | uVar20;
  }
  bVar41 = (uVar9 & 0x400) != 0;
  uVar17 = (ushort)uVar9 & 0x49ff;
  bVar13 = (byte)((uVar18 & 0xf | (ushort)((uVar24 & 1) != 0) << 8) >> 2);
  uVar37 = (uint)(ushort)((0U >> bVar26 | 0 << 0x10 - bVar26) << 1 | uVar7 >> 0xf) + 0x8a7bbd0d;
  uVar22 = CONCAT22((ushort)(((uVar23 & 0xff00) << 8) >> 0x10) | (ushort)((uVar23 << 0x18) >> 0x10),
                    uVar33 >> (bVar13 & 0xf) | uVar33 << 0x10 - (bVar13 & 0xf)) >> (bVar13 & 0x1f);
  uVar21 = (uVar34 | uVar20 & 0xffffff00 | (uint)(byte)((byte)uVar18 << 7 | bVar13)) ^
           (int)(short)uVar17;
  bVar26 = (byte)uVar17;
  bVar27 = (byte)(~(uVar24 >> 1) >> 8);
  bVar13 = bVar27 ^ (bVar26 == bVar27) * (bVar27 ^ (byte)((uint)(int)(short)uVar17 >> 8));
  uVar40 = (ushort)uVar37;
  uVar33 = (short)uVar22 - uVar40;
  uVar7 = (short)CONCAT31((int3)(char)(uVar17 >> 8),bVar26 ^ (bVar26 == bVar27) * (bVar26 & bVar13))
          << 4;
  uVar18 = uVar7 >> 1;
  uVar9 = ((CONCAT22(uVar32,sVar28) & 0x7fff8000) << 1 | (uint)(ushort)((int)uVar9 >> 0x11)) << 1;
  uVar20 = (uint)CONCAT21((short)(~(uVar24 >> 1) >> 0x10),bVar13) << 8;
  if ((byte)((byte)(uVar7 >> 9) + (char)uVar18) == -1) {
    uVar20 = uVar37;
  }
  uVar7 = (uVar18 & 0xff) * 0x91;
  uVar24 = (uint)uVar7;
  cVar25 = (char)(uVar21 >> 8);
  uVar34 = uVar34 | CONCAT11(cVar25 << 1 | cVar25 < '\0',(char)uVar21);
  uVar21 = uVar34 ^ (uint)(uVar24 == uVar34) * (uVar34 ^ uVar24);
  uVar34 = (uint)(uVar24 == uVar34) * (uVar24 & uVar21);
  uVar7 = uVar7 ^ (ushort)uVar34;
  uVar11 = CONCAT31((int3)(uVar20 >> 8),0x91) ^ 0x92904818;
  uVar17 = uVar40 ^ (ushort)(uVar7 == uVar40) * (uVar40 ^ uVar33);
  uVar7 = uVar7 ^ (ushort)(uVar7 == uVar40) * (uVar7 & uVar17);
  uVar24 = uVar11 << 2;
  uVar20 = (uVar22 & 0xffff0000 | (uint)uVar33) >> 1;
  uVar10 = uVar10 | uVar34 & 0xffff0000 | (uint)uVar7;
  uVar18 = ((short)uVar21 + 0x7033) -
           (ushort)((uVar9 & 0xffffff00 | (uint)(byte)((byte)uVar9 << 3 | (byte)uVar9 >> 5)) <
                   uVar10);
  uVar21 = uVar21 & 0xffff0000;
  uVar37 = (uVar37 & 0xffff0000 | (uint)uVar17) << 0xe;
  uVar34 = uVar21 | (ushort)(uVar18 >> 1 | uVar18 * -0x8000);
  bVar13 = (byte)((int)uVar34 >> 0x13);
  bVar26 = bVar13 & 0xf;
  uVar18 = uVar7 << bVar26 | uVar7 >> 0x10 - bVar26;
  bVar26 = (byte)uVar18;
  bVar12 = (byte)((uint)(ushort)(short)(char)uVar7 >> 8);
  bVar27 = bVar12 ^ (bVar26 == bVar12) * (bVar12 ^ bVar26);
  uVar7 = ((short)(char)uVar7 & 0xffU | (ushort)bVar27 << 8) - (short)uVar20;
  iVar35 = ((uint)uVar18 & 0xffffff00 |
           (uint)(byte)(bVar26 ^ (bVar26 == bVar12) * (bVar26 & bVar27))) * 2 + -0x44776d3a;
  uVar20 = (uVar20 | (uint)((int)(uVar11 << 1) < 0) << 0x1f) +
           CONCAT31((int3)((int)uVar34 >> 0x1b),bVar13 - 0x26) + 0x8d33afe9;
  uVar18 = uVar7 & 0xff |
           (ushort)(byte)((char)((uint)uVar7 >> 8) + 'o' + ((byte)((uint)iVar35 >> 8) & 1)) << 8;
  uVar7 = (ushort)((int)uVar21 >> 0x23);
  uVar34 = uVar24 & 0xffff0000 | (uint)(byte)((char)(uVar24 >> 8) << 1) << 8;
  if (!bVar41) {
    uVar34 = uVar20;
  }
  uVar40 = (ushort)uVar34 >> 0xc |
           (short)CONCAT31(CONCAT21(uVar7,~(byte)((int)uVar21 >> 0x1b)),bVar41) << 4;
  bVar26 = (byte)uVar40;
  uVar24 = (uint)(2 < bVar26) << 0x10 | uVar20 & 0xffff;
  uVar22 = (uint)(ushort)((ushort)(uVar24 >> 6) | (ushort)(uVar24 << 0xb));
  bVar13 = bVar41 << bVar41 | bVar41 >> 8 - bVar41;
  uVar24 = uVar37 >> 0x18;
  uVar21 = 1 << (uVar24 & 0x1f);
  uVar11 = uVar24 | (((uint)uVar17 & 0x3fc) << 0xe) >> 8 |
           (uint)(ushort)(((ushort)uVar37 & 0x7e9b) * -0x1de3) << 8 | uVar21;
  bVar27 = bVar26 - 3 << (bVar13 & 0x1f);
  bVar26 = (byte)(CONCAT11((CONCAT11((byte)((uint)(ushort)(short)(char)iVar35 >> 8) >> 6,
                                     (char)iVar35 >> bVar41) << (bVar13 & 0x1f) & 1U) != 0,
                           (char)((uint)uVar40 >> 8)) >> 3);
  uVar24 = (uint)(ushort)((ushort)iVar35 ^ uVar18);
  uVar23 = uVar10 & 0xffff0000 | uVar24;
  uVar10 = (uVar9 & 0xffff0000 | (uint)uVar18) << 1;
  uVar37 = (uVar34 & 0xffff0000 | (uint)CONCAT11(bVar26 + bVar13,bVar27)) >> 1 |
           (uint)((bVar27 & 1) != 0) << 0x1f;
  uVar37 = uVar37 ^ (uint)((uint)(byte)(((0U >> ((ushort)uVar11 & 0xf) & 1) != 0) << 7) * 0x100 ==
                          uVar37) * (uVar37 ^ uVar23);
  uVar9 = uVar11 + 0xb016b53c;
  uVar17 = (ushort)uVar9;
  uVar18 = CONCAT11((char)(uVar10 >> 8) + '8',(byte)uVar10 | (byte)(uVar21 >> 0x1f)) ^
           (uVar17 << 1 | (ushort)(0x4fe94ac3 < uVar11));
  uVar34 = (((uint)uVar7 << 0x10 | (uint)bVar26) - uVar37) - 1;
  uVar7 = (ushort)(uint)(((uint5)((short)uVar17 < 0) << 0x20) >> 0x15) | (ushort)(1 << (uVar22 & 2))
  ;
  uVar20 = (uVar20 & 0xffff0000 | uVar22 & 0xffff5c62) >> ((byte)uVar34 & 0x1f);
  if ((uVar18 >> 4 & 1) != 0) {
    uVar37 = uVar37 & 0xffff0000 | (uint)(uVar18 | 0x10);
  }
  uVar40 = (short)uVar20 + -0x3f5b + (short)uVar37 * 4;
  uVar18 = uVar40 & 0xff;
  uVar21 = (uint)(ushort)((uVar17 & 0x7fff) >> 1 | (ushort)((uVar9 & 1) != 0) << 0xf);
  uVar11 = (uVar10 & 0xffff0000 |
            (uint)(ushort)(uVar18 | (ushort)(byte)((byte)((uint)uVar40 >> 8) >>
                                                  ((byte)uVar34 & 0x1f)) << 8) & 0xffffff00 |
           (uint)(byte)((char)uVar18 >> 0xb)) + 0xbbeae45c;
  uVar10 = (uVar34 & 0xffff0000 | (uint)(ushort)((short)uVar34 << 1)) + 0x85577c07;
  uVar18 = ((short)uVar10 + uVar7) - (ushort)((uVar20 & 1) != 0);
  uVar34 = uVar10 & 0xffff0000 | (uint)uVar18 & 0xffffff00;
  uVar10 = (uint)(byte)((char)uVar18 << 1);
  uVar22 = uVar34 | uVar10;
  bVar41 = (-uVar7 & 0x100) != 0;
  bVar26 = ((byte)(uVar22 << 1) & 0x1f | bVar41) % 0x11;
  uVar10 = (uint)((int)uVar22 < 0) << 0x10 | ((uint)uVar18 & 0x7f00 | uVar10) << 1 | (uint)bVar41;
  bVar27 = (byte)(uVar10 >> bVar26) | (byte)(uVar10 << 0x11 - bVar26);
  uVar10 = uVar11 & 0xffffff00 | ~uVar37 & 0xff;
  uVar24 = (int)(uVar23 >> 0xf | uVar24 << 0x11) >> (bVar27 & 0x1f);
  uVar22 = uVar10 >> (bVar27 & 0x1f) | uVar10 << 0x20 - (bVar27 & 0x1f);
  uVar10 = uVar24 & 0xffff0000;
  uVar24 = (uint)(ushort)((short)uVar24 >> 1);
  uVar7 = (ushort)uVar22;
  uVar22 = uVar22 & 0xffff0000;
  uVar20 = CONCAT22((ushort)(uVar20 >> 0x11),(short)(uVar20 >> 1) + -1);
  uVar40 = ((ushort)((~uVar37 & 0xffffff00 | uVar11 & 0xff) >> (bVar27 & 0x1f)) |
           (ushort)((uVar10 | uVar24) << 0x20 - (bVar27 & 0x1f))) - 1;
  uVar24 = uVar24 & 0xffff87bd;
  uVar10 = uVar24 << 0x16 | (uVar10 | uVar24) >> 10;
  uVar17 = (ushort)(uVar22 >> 0x11) | (ushort)((uVar20 << 0x1f) >> 0x10);
  bVar13 = (byte)uVar40 & 7;
  bVar12 = (byte)((uint)uVar40 >> 8);
  bVar26 = (byte)uVar40 & 0x1f;
  uVar10 = uVar10 << bVar26 | uVar10 >> 0x21 - bVar26;
  uVar18 = (ushort)CONCAT21(uVar17,(byte)(((uVar22 | (ushort)(uVar7 >> (bVar27 & 0xf) |
                                                             uVar7 << 0x10 - (bVar27 & 0xf))) >> 1)
                                         >> 8) >> 1);
  uVar7 = (uVar17 >> 8 | uVar18 & 0xff00) - 0xe57;
  bVar26 = (char)((uVar40 & 0xff | (ushort)(byte)(bVar12 << bVar13 | bVar12 >> 8 - bVar13) << 8) >>
                 2) + -0x2a + (char)uVar7 * '\x04';
  uVar17 = (uVar40 >> 1 & 0xff) * (uVar7 >> 8);
  if ((char)(uVar17 >> 8) != '\0') {
    bVar26 = (byte)uVar17;
  }
  uVar20 = (int)(uVar20 | 0x80000000) >> ((((byte)uVar10 ^ 0xd1) & 0xf) << 1 | 1);
  if (bVar26 != 0) {
    uVar17 = CONCAT11(bVar26 != 0,bVar26);
  }
  uVar24 = (uVar9 >> 0x11 | uVar21 << 0xf) << 1 | uVar10 & 1;
  uVar9 = (uVar10 << 0x1f | (uint)uVar17) * -0x19b82fcf;
  iVar35 = (uVar20 >> 0x1a | uVar20 << 6) * 2;
  bVar13 = (byte)uVar9;
  if ((bVar13 >> 1 & 1) != 0) {
    uVar24 = uVar21 << 0x10 |
             (uVar9 & 0xffffff00 | (uint)(byte)(bVar13 >> 1 | bVar13 << 7)) >> 1 & 0xffff;
  }
  uVar20 = (uVar34 & 0x7fff8000) << 1 | (uint)bVar26 << 8 | 0x8ddb95ae;
  uVar10 = uVar20 & 0xffff0000;
  uVar20 = (uint)(ushort)((short)uVar20 << 3);
  uVar39 = (ushort)(iVar35 >> 5);
  uVar40 = (uVar7 | 0x21e3) ^ uVar39;
  uVar34 = uVar20 & 0xff00;
  uVar21 = uVar34 >> 8;
  uVar33 = (ushort)((char)(uVar9 >> 8) >> 7);
  bVar26 = (byte)((char)bVar13 >> 0xf) >> 1;
  bVar13 = ((char)bVar13 >> 0xf) << 7;
  bVar27 = bVar26 | bVar13;
  bVar41 = ((bVar26 & 0x40) != 0) != (bVar13 != 0);
  uVar7 = (ushort)(uVar34 >> 8);
  sVar28 = (short)(iVar35 >> 0x15);
  uVar17 = CONCAT11((char)(uVar20 >> 8) - (char)uVar40,bVar41);
  uVar9 = CONCAT31(((uint3)((uVar9 & 0xffffff00) >> 9) | 0x800000) &
                   ((uint3)(CONCAT22(uVar18,uVar40) >> 8) & 0xffff | 0xf40000),(char)(uVar40 >> 8))
          * ((uint)uVar33 << 0x10 | (uint)bVar27);
  uVar18 = uVar17 << bVar41;
  if ((uVar9 & 0x400) == 0) {
    uVar9 = uVar9 & 0xffff0000 | (uint)uVar18;
  }
  lVar4 = (longlong)(int)uVar9 * (longlong)(int)uVar21;
  uVar22 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar34 = (uint)lVar4;
  uVar20 = CONCAT22(sVar28,uVar7 + 0xb8d7 + uVar39 & uVar7);
  uVar37 = uVar34 ^ (uint)(uVar34 == uVar22) *
                    (uVar34 & (uVar22 ^ (uint)(uVar34 == uVar22) * (uVar22 ^ uVar20)));
  uVar9 = uVar20;
  if (SBORROW4(uVar34,uVar22) == ((uVar37 & 0x8000) != 0)) {
    uVar20 = uVar37;
    uVar9 = CONCAT22(sVar28,(ushort)((int)uVar24 >> 1) ^ uVar17);
  }
  uVar34 = uVar10 | (uint)bVar27 << 8;
  uVar24 = uVar34 * 0x3511e8db;
  uVar7 = (short)uVar9 << 1 | 1;
  cVar25 = (char)(uVar20 >> 8) + (char)((int)uVar20 >> 0x27) + ((short)uVar9 < 0);
  if ((uVar18 & 0x4000) != 0) {
    uVar21 = uVar9 & 0xffff0000 | (uint)uVar7;
  }
  uVar34 = (CONCAT22(uVar33,uVar18 >> 8) >> 1 | 0x20) + uVar34 + 1;
  uVar18 = (ushort)(byte)((char)uVar34 + 1);
  uVar33 = (ushort)uVar21;
  uVar40 = ((ushort)uVar34 & 0xff00 | uVar18) & 0x2bd3;
  uVar9 = (uVar9 & 0xffff0000 | (uint)(ushort)-uVar7) + 1;
  uVar17 = (short)cVar25 >> 7;
  if ((uVar37 & 0x400) != 0) {
    uVar17 = uVar40;
  }
  if (-1 < (int)uVar9) {
    uVar17 = (ushort)uVar9;
  }
  uVar37 = ((uint)(uint3)((int)uVar20 >> 0x27) & 0xffff00) << 8;
  uVar22 = uVar37 | (uint)(ushort)~uVar17 & 0xffffff00 | (uint)(byte)((char)~uVar17 >> 0x19);
  uVar39 = (short)uVar24 + uVar7 + 0xa583;
  uVar10 = (uVar10 | (ushort)((short)((ushort)(byte)(bVar27 - 1) << 8) >> 1)) -
           (uVar34 & 0xffff0000 | (uint)uVar40 | 0xed00);
  uVar17 = (short)uVar22 * -0x33db;
  uVar9 = (uVar9 & 0xffff0000 | (uint)(ushort)((ushort)uVar9 - 300)) & ~(1 << ((uint)uVar17 & 0x1f))
  ;
  bVar26 = (byte)uVar10;
  uVar17 = (short)uVar17 >> (bVar26 & 0x1f);
  uVar40 = (ushort)uVar9;
  uVar36 = uVar9 & 0xffff0000 | (uint)(ushort)(uVar40 ^ (uVar40 >> 7 & 1) << 7);
  uVar9 = (uVar20 & 0xffff0000 |
          (uint)(ushort)(((CONCAT11(cVar25,(char)uVar20) - uVar33) - (ushort)(uVar7 != 0)) * 0x20 >>
                         7 & ~(1 << (uVar18 & 3)))) << (bVar26 & 0x1f);
  uVar22 = ((uVar22 ^ (uVar37 >> 0x18 & 1) << 0x18) & 0xffff0000 |
           (uint)(ushort)(uVar17 >> (bVar26 & 0xf) | uVar17 << 0x10 - (bVar26 & 0xf))) & uVar9;
  uVar37 = -(uVar9 & 0xffff0000 | 0xffff);
  uVar23 = ((uVar24 & 0xffff0000 | (uint)(ushort)(uVar39 * 0x4000 | uVar39 >> 2)) ^ 0xe4e) + uVar37
           + 1;
  uVar7 = CONCAT11(~(byte)(uVar10 >> 8),bVar26) + uVar33 ^ 1 << ((ushort)uVar22 & 0xf);
  bVar26 = (byte)uVar7;
  uVar9 = (uint)(ushort)(short)(char)((byte)((short)uVar37 << 2) | (byte)(uVar37 >> 8) >> 6);
  sVar28 = (short)(uVar36 + 0x31ae5eec) + 1;
  uVar20 = uVar23 >> 1 & 0x7fff;
  uVar18 = ((ushort)(byte)((char)(uVar9 * uVar9 >> 0x18) << 1) << 8) >> 0xc | (uVar33 ^ 0xfffc) << 4
  ;
  uVar24 = (uint)CONCAT11((byte)(CONCAT11(0xce51a114 < uVar36 || 0xfffffffe < uVar36 + 0x31ae5eeb,
                                          0xc9) >> 2) | 0x80,0x7c) & 0xffffff00;
  uVar11 = CONCAT22((short)((uVar34 & 0xffff0000) >> 0x10),0xc9f9) & 0xffff0000 | uVar24 |
           (uint)(byte)(0x7c - bVar26);
  uVar9 = (uint)(ushort)(uVar33 ^ 0xfffc | 1 << ((ushort)uVar20 & 0xf));
  bVar26 = bVar26 & 0xf;
  uVar7 = uVar7 ^ (ushort)uVar11;
  uVar34 = uVar37 & 0xdb6f0000 | (uint)(ushort)-(ushort)((short)(sVar28 * 0x371e) < 0) | 0xdf26e938;
  uVar37 = (uVar22 & 0xffff0000 | (uint)(ushort)(uVar18 >> bVar26 | uVar18 << 0x10 - bVar26)) >> 1 |
           (uint)((short)uVar7 < 0) << 0x1f;
  iVar35 = uVar37 - uVar34;
  uVar18 = SEXT12((char)(uVar24 >> 8));
  return CONCAT44(in_EDX,uVar34 + uVar11 + (uVar10 & 0xffff0000 | (uint)(ushort)(uVar7 << 1)) +
                         ((iVar35 - 1U >> 8 & 0xffff00) << 8 |
                         (uint)(ushort)(uVar18 & 0xff |
                                       (ushort)(byte)(((char)((uint)uVar18 >> 8) + 'q') -
                                                     (uVar37 < uVar34 || iVar35 == 0)) << 8)) +
                         (uVar23 & 0xffff0000 | uVar20) +
                         (uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                         uVar9 << 0x18) +
                         (uVar36 + 0x31ae5eec & 0xffff0000 | (uint)(ushort)(sVar28 * 0x6e3c)) +
                         0x6e8b1d62);
}



// WARNING: Removing unreachable block (ram,0x0804bc4a)
// WARNING: Removing unreachable block (ram,0x0804b5ad)
// WARNING: Removing unreachable block (ram,0x0804b996)
// WARNING: Removing unreachable block (ram,0x0804be2d)
// WARNING: Removing unreachable block (ram,0x0804be5a)
// WARNING: Removing unreachable block (ram,0x0804b601)
// WARNING: Removing unreachable block (ram,0x0804beb3)
// WARNING: Removing unreachable block (ram,0x0804be9c)
// WARNING: Removing unreachable block (ram,0x0804b673)
// WARNING: Removing unreachable block (ram,0x0804b64f)
// WARNING: Removing unreachable block (ram,0x0804be51)
// WARNING: Removing unreachable block (ram,0x0804bfb6)
// WARNING: Removing unreachable block (ram,0x0804bfde)

undefined8 log_size_10_var_003(void)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint5 uVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  sbyte sVar14;
  ushort uVar15;
  char cVar16;
  ushort uVar17;
  short sVar18;
  undefined4 in_EDX;
  uint uVar19;
  byte bVar20;
  byte bVar21;
  char cVar22;
  byte bVar23;
  ushort uVar24;
  ushort uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  short sVar30;
  short sVar31;
  undefined2 uVar34;
  uint uVar32;
  uint uVar33;
  ushort uVar35;
  ushort uVar36;
  uint uVar37;
  uint uVar38;
  byte bVar39;
  bool bVar40;
  
  uVar11 = 0;
  while ((0xe85966aaU >> uVar11 & 1) == 0) {
    uVar11 = uVar11 + 1;
  }
  iVar26 = 0x1f;
  while (0x8c20e6faU >> iVar26 == 0) {
    iVar26 = iVar26 + -1;
  }
  uVar35 = (ushort)uVar11 & 0xfffb;
  uVar37 = (uVar11 & 0xffff0000 | (uint)uVar35) + 0x20;
  uVar4 = CONCAT14((byte)((char)iVar26 + (char)uVar35) < 5,0x20) >> 5;
  uVar11 = uVar37 & 0xffff0000;
  uVar35 = (ushort)((uVar11 | (ushort)((short)uVar37 << 1)) >> 1);
  uVar34 = (short)(uVar4 >> 0x10);
  if ((((ushort)uVar4 & ~(1 << (uVar35 & 0xf)) ^ 0xfaf6) & 1) == 0) {
    uVar34 = 0x9bda;
  }
  uVar17 = uVar35 * 2 >> 5;
  uVar10 = (int)(short)(uVar35 * 2) >> 0xb | 0x9c0ace0f;
  uVar37 = (int)(short)uVar10 * 0x4a69;
  iVar26 = (uVar37 >> 0x10 | 0x1d0000) + 0x34160096;
  uVar27 = iVar26 * 2;
  uVar37 = uVar10 & 0xffff0000 | uVar37 & 0xffff;
  if (iVar26 != 0) {
    uVar37 = 0x1374a69;
  }
  lVar2 = (ulonglong)uVar37 * 0x4fab;
  uVar36 = (uVar35 << 0xc | uVar17) >> 1;
  uVar8 = (short)(char)lVar2 * (short)(char)((ulonglong)lVar2 >> 0x28);
  uVar35 = (uVar17 & 0x1e) >> 1;
  uVar37 = (uint)(ushort)((ushort)((ulonglong)lVar2 >> 0x20) >> 2) & 0x1f;
  bVar13 = (byte)(1 << uVar37) | 0xab;
  uVar27 = ((uVar27 & 0x7fff80) << 9 |
           (uint)CONCAT11((0xaabU >> uVar37 & 1) != 0 |
                          ((byte)((uint)(iVar26 * 0x400) >> 8) | (byte)(uVar27 >> 0x1f)) << 1,
                          (char)(uVar27 >> 0x17))) >> (bVar13 & 0x1f);
  uVar37 = (int)(short)(uVar8 & 0xff00 |
                       (ushort)(byte)((char)uVar8 << 1 | (uVar36 >> uVar35 & 1) != 0)) *
           (int)(short)uVar27;
  uVar17 = (ushort)(uVar37 >> 0x10);
  if (uVar17 == 0 || uVar17 == 0xffff) {
    bVar13 = (byte)uVar27;
  }
  uVar27 = uVar27 << (bVar13 & 0x1f);
  uVar10 = uVar27 | uVar17 >> 0x20 - (bVar13 & 0x1f);
  uVar38 = CONCAT22((ushort)(uVar11 >> 0x11),(uVar36 & ~(1 << uVar35)) + 1) >> (bVar13 & 0x1f) |
           (uint)uVar17 << 0x20 - (bVar13 & 0x1f);
  iVar26 = (uVar37 & 0xffff) * 0xa694;
  uVar8 = (ushort)((uint)iVar26 >> 0x10);
  uVar11 = SEXT24((short)iVar26);
  uVar11 = uVar11 << (bVar13 & 0xf) * '\x02' | uVar11 >> (bVar13 & 0xf) * -2 + 0x20;
  uVar17 = (ushort)uVar11 & 0x3fff;
  uVar35 = (ushort)(byte)((byte)uVar10 | 0xc0);
  uVar36 = uVar8 + 0xbca3;
  uVar32 = CONCAT22(uVar34,0x95) | 0x28430cb5;
  uVar37 = (uVar11 & 0xffff0000 | (uint)(ushort)(uVar17 / uVar35 & 0xff | uVar17 % uVar35 << 8)) *
           (uint)uVar8;
  uVar17 = 0 >> (bVar13 * -4 & 0x1f);
  uVar19 = CONCAT22(0x137,uVar17);
  bVar13 = bVar13 * -4 - 1;
  uVar11 = uVar37 & 0xffff0000;
  uVar35 = uVar36 >> 8;
  uVar3 = (ulonglong)(uVar11 | CONCAT11(bVar13 != 0,(char)uVar37)) * (ulonglong)uVar38;
  sVar30 = (short)(uVar32 >> 2) + CONCAT11((char)(uVar10 >> 8),bVar13);
  bVar13 = bVar13 & 0xf;
  uVar10 = uVar27 & 0xffff0000 |
           (uint)(ushort)((uVar35 | (ushort)(byte)((char)((uint)(ushort)(uVar35 | (ushort)(byte)((
                                                  byte)((uint)(ushort)(uVar36 * 0x100 | uVar35) >> 8
                                                       ) | (byte)((int)uVar11 >> 0x1f)) << 8) >> 8)
                                                  + 0x1b) << 8) << bVar13 | uVar17 >> 0x10 - bVar13)
           | 0xc0000000;
  uVar6 = CONCAT44((uint)(uVar3 >> 0x21),
                   CONCAT22((short)(uVar3 >> 0x10),
                            (short)uVar3 << 1 | (ushort)((uVar3 & 0x100000000) != 0))) &
          0x3fffffffffffffff;
  uVar3 = uVar6 / (ulonglong)uVar10;
  uVar11 = uVar10 * -0x47e4a069;
  uVar37 = uVar11 & 0xffff0000 | (uint)CONCAT11((char)(uVar11 >> 8) << 1,(char)uVar11);
  uVar36 = (short)uVar3 >> 0xf;
  uVar27 = uVar37 + uVar19;
  sVar18 = CONCAT11(((char)(uVar3 >> 8) >> 1) + -0x14,(char)uVar3);
  uVar11 = (uVar19 | 1 << ((uint)(ushort)((ushort)bVar13 + 0xda24) & 0x1f)) + uVar38;
  sVar31 = (sVar30 - sVar18) + -1;
  uVar35 = sVar18 + sVar31;
  cVar22 = (char)(uVar38 >> 8);
  uVar17 = (ushort)CONCAT31((int3)cVar22,(char)uVar38 << 1) >> 1;
  uVar8 = uVar17 | (ushort)((char)uVar38 < '\0') << 0xf;
  bVar13 = -((byte)uVar35 | (byte)(1 << (uVar35 & 0xf)));
  uVar27 = (uVar27 & 0xffff0000 |
           (uint)(ushort)(((ushort)uVar27 & 0xff00 | (ushort)(byte)(SCARRY4(uVar37,uVar19) + 0x9c))
                          + 0x8ed4 + (ushort)CARRY2(uVar36,uVar36) >> 1 | sVar30 * -0x8000)) << 1;
  uVar24 = (ushort)uVar27 | 1;
  uVar37 = CONCAT22((ushort)(uVar32 >> 0x12),sVar31 - uVar8);
  uVar9 = (ushort)uVar11;
  uVar35 = uVar24 + uVar9;
  uVar25 = uVar35 + 1;
  bVar20 = (char)uVar25 << 1 | (CARRY2(uVar24,uVar9) || 0xfffe < uVar35);
  uVar19 = uVar27 & 0xffff0000 | (uint)uVar25 & 0xffffff00 | (uint)bVar20;
  bVar23 = (byte)(uVar8 >> 8);
  bVar20 = bVar23 ^ (bVar13 == bVar23) * (bVar23 ^ bVar20);
  uVar17 = uVar17 & 0xff;
  uVar27 = (uint)(ushort)(uVar3 >> 0x10) << 0x10 | (uint)(ushort)(short)(char)bVar13 & 0xffffff00 |
           (uint)(byte)(bVar13 ^ (bVar13 == bVar23) * (bVar13 & bVar20));
  if (!SBORROW1(bVar13,bVar23)) {
    uVar27 = uVar37;
  }
  uVar37 = uVar37 + uVar19;
  uVar32 = CONCAT22((undefined2)(cVar22 >> 7),uVar17 | (ushort)bVar20 << 8) << ((byte)uVar17 & 0x1f)
  ;
  iVar26 = (uVar27 & 0xffffff00 | (uint)(byte)((byte)uVar27 << 5 | (byte)uVar27 >> 3)) * uVar37;
  sVar14 = (sbyte)(uVar32 & 0xffffff0f);
  uVar24 = (ushort)uVar37 >> sVar14 | (ushort)uVar37 << 0x10 - sVar14;
  cVar22 = (char)iVar26;
  bVar13 = cVar22 >> 0xf;
  uVar10 = (uVar19 | CONCAT22((short)(uVar6 % (ulonglong)uVar10 >> 0x10),uVar36 * 2)) << sVar14;
  bVar20 = (byte)(uVar10 >> 8);
  uVar27 = (uint)(ushort)(((ushort)((uint)iVar26 >> 8) & 0xff00 ^ 0xa2e0) >> 10 |
                         CONCAT11(bVar20,cVar22 >> 7) << 6) ^ 0x77b6e278;
  uVar17 = (short)(uVar32 & 0xffffff0f) + 0xa247U & 0xff00 | 0xff;
  uVar8 = CONCAT11(bVar13 >> 1 | bVar13 << 7,(char)uVar10);
  uVar35 = uVar8 + uVar17;
  uVar25 = CONCAT11(-1 < (short)uVar35,0xff);
  uVar17 = (ushort)CARRY2(uVar8,uVar17);
  uVar8 = uVar25 - uVar24;
  uVar15 = uVar8 - uVar17;
  uVar36 = (ushort)bVar13;
  if (uVar25 < uVar24 || uVar8 < uVar17) {
    uVar36 = uVar35;
  }
  uVar17 = (ushort)uVar27;
  if (!SBORROW4((uint)bVar20,uVar11 & 0xffff0000 | (uint)(uVar9 >> ((byte)uVar32 & 0x1f)))) {
    uVar24 = uVar17;
  }
  bVar13 = (char)uVar27 + 0xac;
  uVar11 = CONCAT22(0x118b,1 << (uVar17 & 0xf) | 0x4e71);
  if (0xb3 < bVar20) {
    uVar11 = uVar37 & 0xffff0000 | (uint)(ushort)(uVar24 >> 1 | 0x8000);
  }
  bVar23 = (byte)uVar15;
  uVar8 = (short)uVar11 >> (bVar23 & 0x1f);
  uVar11 = uVar11 & 0xffff0000 | (uint)uVar8;
  uVar37 = uVar11 * -0x2f8a1cc9;
  bVar20 = (byte)(uVar37 >> 8);
  bVar20 = bVar20 << 6 | bVar20 >> 2;
  uVar27 = uVar37 & 0xffff0000 | (uint)(ushort)((ushort)bVar20 | CONCAT11(bVar20,(char)uVar37) << 8)
           | 0xcd6b;
  uVar17 = ((ushort)((uVar10 & 0xffff0000 | (uint)uVar35 & 0xffffff00 |
                     (uint)(byte)((byte)uVar35 >> 1 | 0x80)) >> 1) & 0x7fff) + 0xb1c3;
  bVar20 = (byte)uVar17;
  bVar39 = bVar20 & 1;
  bVar21 = bVar20 >> 1 | bVar39 << 7;
  bVar39 = (char)uVar27 + 'k' + bVar39;
  bVar20 = bVar13 << (bVar23 & 7) | bVar13 >> 8 - (bVar23 & 7);
  bVar13 = (byte)((uint)(ushort)(short)(char)bVar13 >> 8);
  uVar35 = -uVar36;
  if (uVar36 == 0) {
    uVar35 = (ushort)bVar21;
  }
  uVar32 = (uVar32 & 0xffff0000 | (uint)(ushort)(short)(char)((uint)uVar15 >> 8)) ^
           1 << ((uint)uVar35 & 0x1f);
  cVar22 = bVar21 - 1;
  bVar21 = bVar39 * '\x10' | bVar39 >> 4;
  uVar19 = (uint)CONCAT11((char)(uVar27 >> 8) << 1,bVar39) & 0xffffff00;
  uVar36 = (ushort)uVar19 | (ushort)bVar21;
  uVar27 = uVar32 & 0xffff0000 |
           (uint)(ushort)((ushort)(byte)((char)uVar32 - 1) << 0xb | uVar8 >> 5) |
           1 << ((uint)bVar21 & 0x1f);
  bVar39 = (byte)uVar27 & 0x1f;
  uVar32 = uVar27 >> bVar39 | uVar27 << 0x20 - bVar39;
  iVar26 = (uVar10 & 0xffff0000 | (uint)CONCAT11((char)((uint)uVar17 >> 8) + cVar22,cVar22)) +
           0xa4caebe2;
  uVar35 = (short)(((ulonglong)(uVar38 & 0xffff0000 | (uint)(ushort)((ushort)uVar38 | 0x1000)) << 5)
                  >> 0x10) >> 6;
  uVar8 = SEXT12((char)iVar26);
  uVar11 = uVar11 * 2;
  uVar17 = (uVar8 == 0) * uVar8;
  uVar27 = (uint)(ushort)(uVar35 ^ (ushort)(CONCAT11(bVar13 >> (bVar23 & 7) |
                                                     bVar13 << 8 - (bVar23 & 7),
                                                     bVar20 << 6 | bVar20 >> 2) == uVar35) *
                                   (uVar35 ^ uVar36)) << 0x1a;
  uVar8 = uVar8 ^ (ushort)(uVar8 == 0) * (uVar8 & uVar17);
  bVar39 = (byte)(uVar32 >> 8);
  bVar21 = (byte)(uVar19 >> 8);
  bVar23 = (byte)uVar32;
  uVar35 = (ushort)CARRY1(bVar39,bVar21);
  uVar24 = uVar36 * 2 + uVar35;
  bVar13 = bVar23 & 0x1f;
  uVar32 = iVar26 << bVar13 |
           (uint)(CONCAT14(CARRY2(uVar36,uVar36) || CARRY2(uVar36 * 2,uVar35),iVar26) >>
                 0x21 - bVar13);
  uVar10 = (uint)CONCAT11(bVar39 + bVar21,bVar23) & ~(1 << ((int)(char)bVar20 & 0x1fU));
  cVar22 = (char)((uint)uVar8 >> 8);
  uVar38 = (int)(char)bVar20 | uVar11;
  uVar36 = (short)((uVar37 & 0xffff0000 | (uint)uVar24 & 0xffffff00 | (uint)(byte)((char)uVar24 + 1)
                   ) >> 3) + 0x83bc;
  uVar19 = uVar10 & 0xffffff0f;
  uVar24 = ((ushort)uVar32 >> 5 | (short)uVar10 << 0xb) >> (sbyte)uVar19 |
           uVar36 << 0x10 - (sbyte)uVar19;
  uVar35 = (short)uVar11 + uVar24;
  uVar10 = uVar11 & 0xffff0000 | (uint)uVar35;
  if ((SCARRY2((short)uVar11,uVar24) != SCARRY2(uVar35,0)) == (short)uVar35 < 0) {
    uVar38 = uVar38 & 0xffff0000 | (uint)uVar8 & 0xff00;
  }
  uVar35 = (short)uVar19 << 4;
  bVar13 = (byte)uVar35 | (byte)(uVar19 >> 8) >> 4;
  cVar16 = bVar13 - cVar22;
  bVar20 = cVar16 - 1;
  uVar24 = uVar17 >> 0xe | uVar17 * 8;
  uVar19 = (uint)uVar24;
  lVar2 = (ulonglong)(uint)(int)(short)(uVar8 & 0xff00) *
          (ulonglong)
          ((uVar37 >> 0x13) << 0x10 |
          (uint)(ushort)((uVar36 & 0xff00 |
                          (ushort)(SBORROW1(bVar13,cVar22) == SBORROW1(cVar16,'\x01')) | 0xf10d) +
                        CONCAT11((char)((uint)uVar35 >> 8) + cVar22 + '\x01',bVar20)));
  bVar20 = ~bVar20;
  uVar11 = 0;
  if (uVar10 != 0) {
    while ((uVar10 >> uVar11 & 1) == 0) {
      uVar11 = uVar11 + 1;
    }
  }
  uVar11 = uVar11 >> 1;
  uVar37 = (int)((ulonglong)lVar2 >> 0x20) << 0x1f;
  bVar40 = SCARRY4(uVar38,1) != (int)(uVar38 + 1) < 0;
  bVar13 = bVar20 >> 1;
  bVar20 = bVar13 | bVar20 << 7;
  uVar33 = (uint)CONCAT11(uVar37 != 0,bVar20);
  uVar12 = uVar11 & 0xffffff00 | uVar37 | (uVar11 & 0xfe) >> 1;
  uVar35 = uVar24 >> 1 | 0x8000;
  if ((uVar17 >> 0xe & 1) != 0) {
    uVar12 = uVar11 & 0xffff0000 | uVar37 | uVar19;
  }
  bVar39 = (byte)(uVar33 >> 8);
  bVar23 = bVar40 + bVar39;
  bVar13 = bVar13 & 0x1f;
  uVar12 = (uint)(CONCAT14(CARRY1(bVar40,bVar39) || 0xfe < bVar23,uVar12) >> bVar13) |
           uVar12 << 0x21 - bVar13;
  uVar11 = CONCAT22((short)((ulonglong)lVar2 >> 0x30),
                    CONCAT11(bVar23 + 1,(char)((ulonglong)lVar2 >> 0x20)));
  if ((ushort)(uVar38 + 1 >> 0x1a) <= uVar24) {
    uVar11 = uVar33;
  }
  uVar17 = (short)uVar12 - 0xcbfU >> 1;
  uVar12 = (uVar12 & 0xffff0000 |
           (uint)(ushort)(uVar17 & 0xff |
                         (ushort)(byte)((char)((uint)(uVar17 | 0x8000) >> 8) + (char)(uVar19 >> 8))
                         << 8)) + 1;
  uVar38 = (uint)CONCAT11(uVar37 != 0,bVar20 >> 1) & 0xffffff0f;
  sVar14 = (sbyte)uVar38;
  iVar26 = (uVar11 & 0xffff0000 | (uint)((ushort)uVar11 & uVar24)) << 1;
  uVar17 = (short)((int)uVar27 >> 0x1e) - 1;
  uVar19 = (int)(uVar27 | uVar19) >> 0x1e & 0xffff0000U | (uint)uVar17;
  uVar37 = (uVar12 & 0xffff0000 | (uint)(ushort)((ushort)uVar12 >> sVar14 | uVar35 << 0x10 - sVar14)
           ) + 0x7d2a871f;
  uVar27 = uVar37 << sVar14 | uVar37 >> 0x20 - sVar14;
  uVar12 = (uint)(int)(short)uVar17 >> sVar14 | iVar26 << 0x20 - sVar14;
  uVar10 = (uVar10 << 1) << sVar14 | (uVar10 << 1) >> 0x20 - sVar14;
  uVar37 = (uint)CONCAT11(0x4c,(char)uVar27);
  uVar27 = uVar27 & 0xffff0000 | uVar37;
  if ((int)uVar27 >> 8 == 0) {
    uVar38 = uVar10 & 0xffff;
  }
  bVar13 = (byte)uVar38 & 0x1f;
  uVar28 = uVar19 >> bVar13 | uVar19 << 0x21 - bVar13;
  uVar19 = (uint)(ushort)((short)iVar26 << 8);
  uVar35 = -uVar35;
  uVar33 = uVar12 & 0xffff0000;
  uVar5 = uVar28 & 0xffff0000;
  uVar17 = ~(ushort)uVar12;
  if (-1 < (short)((ushort)uVar10 ^ 0x5173)) {
    uVar17 = uVar35;
  }
  bVar13 = (byte)(uVar38 >> 8);
  bVar40 = bVar13 < 0xd4;
  cVar22 = bVar13 + 0x2c;
  if (!bVar40) {
    uVar17 = (ushort)(uVar27 >> 8);
  }
  uVar27 = uVar38 | 0xa391f970;
  bVar7 = SUB41(uVar37 >> 8,0);
  if (uVar27 == 0) {
    bVar7 = bVar40;
  }
  bVar13 = (byte)uVar27 & 0x1f;
  uVar10 = uVar27 >> bVar13 | uVar27 << 0x20 - bVar13;
  bVar23 = bVar40 ^ (bVar7 == bVar40) * (bVar40 ^ (byte)(uVar19 >> 8));
  bVar13 = ((byte)uVar10 & 0x1f) % 0x11;
  uVar37 = (uint)(bVar7 < bVar40) << 0x10 | uVar10 & 0xffff;
  uVar36 = (ushort)(uVar37 >> bVar13) | (ushort)(uVar37 << 0x11 - bVar13);
  uVar8 = uVar36 >> 9;
  uVar36 = uVar36 << 7;
  uVar25 = uVar8 | uVar36;
  uVar24 = ((ushort)bVar23 & 1) << 7 | uVar17 >> 9;
  uVar37 = (uint)(ushort)(uVar24 | (ushort)(byte)((char)((uint)(ushort)(((CONCAT11((byte)uVar38,
                                                                                   (char)uVar28) &
                                                                         0x7f80) << 1 |
                                                                        (ushort)bVar23) << 7 |
                                                                       uVar17 >> 9) >> 8) + -0x33 +
                                                 ((uVar35 & 1) != 0)) << 8);
  bVar20 = (byte)((uVar5 | uVar37) >> 3);
  uVar38 = uVar5 | (ushort)(uVar24 | (ushort)bVar20 << 8);
  bVar13 = (byte)uVar25;
  uVar27 = (uint)(byte)(bVar7 ^ (bVar7 == bVar40) * (bVar7 & bVar23)) << 0x1d |
           (uVar28 & 0xfff80000) >> 3 |
           (uint)CONCAT11((char)(((uVar5 | uVar37 & 0xfffff800) >> 3) >> 8) << (bVar13 & 0x1f),
                          bVar20 + (char)(uVar37 >> 8));
  uVar11 = (uVar11 & 0xffff0000) << 1 | uVar19 | (uint)(byte)(cVar22 * '\x02' | cVar22 < '\0');
  bVar13 = bVar13 & 0x1f;
  uVar38 = (uint)(CONCAT14(cVar22 < '\0',uVar38) >> bVar13) | uVar38 << 0x21 - bVar13;
  bVar13 = (byte)((uint)uVar25 >> 8);
  uVar19 = uVar10 & 0xffff0000 |
           (uint)(ushort)(uVar8 | uVar36 & 0xff | (ushort)(byte)(bVar13 >> 1 | bVar13 << 7) << 8);
  uVar36 = (ushort)uVar38;
  uVar8 = uVar36 << 6;
  uVar36 = uVar36 >> 10;
  uVar37 = (uint)(uVar8 | uVar36);
  uVar27 = uVar27 ^ (uint)(uVar27 == uVar11) *
                    (uVar27 & (uVar11 ^ (uint)(uVar27 == uVar11) * (uVar11 ^ uVar19)));
  uVar11 = uVar27 & 0xffff0000 | (uint)CONCAT11((char)(uVar27 >> 8) + -0x42,(char)uVar27);
  uVar35 = uVar17 + (short)((uVar32 & 0xffff0000 | (uint)uVar35) >> 1) + 2;
  lVar2 = (ulonglong)uVar11 * (ulonglong)uVar11;
  uVar11 = (uVar33 | uVar35) + (uVar38 & 0xffff0000 | uVar37);
  iVar26 = (int)uVar19 >> 1;
  uVar27 = ~(uVar33 | (ushort)(uVar35 >> 1 | 0x8000));
  uVar24 = (short)lVar2 - 0xe49U & 0x3fb9;
  uVar35 = (ushort)(byte)((byte)((ulonglong)lVar2 >> 0x20) | 0xc0);
  uVar17 = uVar24 / uVar35;
  uVar35 = uVar17 & 0xff | uVar24 % uVar35 << 8;
  uVar37 = (uint)(ushort)(uVar8 & 0xff | uVar36 | (ushort)(byte)((char)(uVar37 >> 8) + 0x18) << 8) ^
           0xe54b443a;
  cVar22 = (char)((uint)(ushort)((short)iVar26 << 3) >> 8);
  cVar16 = (char)((uint)iVar26 >> 8);
  bVar13 = (byte)(uVar37 >> 8);
  sVar18 = (short)((int)(uVar10 & 0xffff0000) >> 0x11);
  uVar8 = (short)uVar35 >> 0xf;
  uVar10 = (int)cVar16 << 1;
  if ((int)cVar16 < 0 != (int)uVar10 < 0) {
    cVar22 = (char)(uVar27 >> 8);
  }
  uVar24 = CONCAT11(cVar16 + 0x31U,(byte)iVar26) + 1;
  uVar36 = CONCAT11(bVar13 << 5 | bVar13 >> 3,(char)uVar37) >> ((byte)iVar26 & 0x1f) & 0xff00;
  uVar37 = CONCAT22(sVar18,uVar24) +
           (uVar10 & 0xffff0000 | (uint)(ushort)((short)uVar10 << 1 | (ushort)((short)uVar10 < 0)));
  uVar24 = uVar24 >> ((byte)uVar37 & 0x1f);
  uVar10 = uVar37 >> 8 & 0xff;
  uVar19 = CONCAT22(sVar18,~uVar24) + (uVar11 & 0xffff | (uint)uVar8 << 0x10);
  bVar13 = (byte)(uVar11 >> 8);
  bVar20 = (byte)((uint)(ushort)(uVar36 << 1) >> 8);
  if ((short)uVar36 < 0) {
    bVar20 = bVar13;
  }
  uVar32 = uVar27 & 0xffff0000 | 0x100000;
  bVar39 = (byte)uVar11;
  bVar21 = (byte)(uVar19 >> 8);
  bVar23 = bVar39 ^ (bVar39 == bVar21) *
                    (bVar39 & (bVar21 ^ (bVar39 == bVar21) * (bVar21 ^ (byte)uVar19)));
  uVar36 = (short)uVar27 << 3 | (ushort)(bVar39 < bVar21);
  uVar38 = uVar32 | (uint)uVar36;
  bVar20 = ((bVar23 ^ (bVar23 == bVar20) *
                      (bVar23 & (bVar20 ^ (bVar23 == bVar20) * (bVar20 ^ bVar13)))) + 4) -
           (bVar23 < bVar20);
  uVar27 = uVar19 & 0xffff0000;
  if (bVar13 == 0) {
    uVar27 = uVar37 & 0xffff0000 | uVar10;
  }
  bVar23 = (byte)uVar10;
  uVar19 = CONCAT22(sVar18,uVar24) >> (bVar23 & 0x1f) | uVar38 << 0x20 - (bVar23 & 0x1f);
  cVar1 = bVar13 - bVar23;
  if (cVar1 != '\0') {
    uVar19 = uVar19 & 0xffff0000 | (uint)CONCAT11(cVar1,bVar20);
  }
  uVar12 = CONCAT22(uVar8,CONCAT11((char)((uint)CONCAT11(cVar1,bVar20) >> 8) << 1 | cVar1 < '\0',
                                   bVar20)) + 0xf9bf8b09;
  uVar8 = (ushort)uVar19;
  uVar10 = (uint)(ushort)(uVar36 + (short)uVar10);
  uVar4 = CONCAT14((char)((uVar27 ^ 1 << ((uint)bVar20 & 0x1f)) >> 0x17) < '\0',-(uVar32 | uVar10))
          >> 5;
  uVar32 = (uVar12 & 0xffffff00 | (uint)(byte)((char)uVar12 << 2)) & 0x30a36670;
  uVar27 = uVar32 >> 1;
  uVar9 = (ushort)uVar4;
  uVar37 = ((uVar37 & 0xffff0000 |
            (uint)(ushort)(uVar36 + uVar9 + (ushort)((int)(uVar32 * -0x20a84a2f) < 0))) + 0x8d0ba87b
           ) * 2;
  bVar39 = (byte)(1 << (uVar9 & 0xf));
  uVar25 = (short)((ushort)uVar27 & 0xff00 | (ushort)(byte)((char)uVar27 + 0x58)) >> 1;
  uVar27 = uVar27 & 0xffff0000 | (uint)uVar36 << 0x1f;
  uVar32 = uVar27 | uVar25;
  bVar20 = (byte)uVar25;
  bVar13 = bVar39 - bVar20;
  uVar12 = (((uint)uVar4 | uVar10 * -0x10000000) - ((int)uVar32 >> 0x1f)) - (uint)(bVar39 < bVar20);
  bVar20 = bVar13 & 0xf;
  uVar37 = ((uVar37 & 0xffff0000 | (uint)(ushort)(short)(char)bVar39) ^ (uVar37 >> 0x10 & 1) << 0x10
           ) & 0xffffff00 | (uint)bVar13 | 0xbe51;
  uVar36 = (short)((int)uVar32 >> 1) << 1;
  bVar13 = (byte)uVar36;
  bVar39 = (byte)((uint)uVar36 >> 8);
  bVar40 = bVar13 == bVar39;
  bVar23 = ((char)(bVar13 - bVar39) < '\0') << 7 | bVar40 << 6 |
           ((((((((short)((ushort)(((uVar11 & 0xffff0000 |
                                    (uint)(ushort)((short)uVar11 +
                                                   ((((uVar17 & 0x7f) << 1 |
                                                     (ushort)(byte)((char)((uVar35 << 1) >> 8) +
                                                                    cVar22 + 1) << 8) >> 1) + 0x932
                                                   & 0xff) * (ushort)(byte)(cVar16 + 0x31U) >> 5 |
                                                  uVar24 << 0xb)) << 4) << (bVar23 & 0x1f)) |
                         (ushort)(uVar38 >> 0x20 - (bVar23 & 0x1f))) >> 1) + uVar9 * 2) - uVar8) * 2
               & 0xfff | uVar9 >> 0xf) - ((ushort)((int)uVar27 >> 0x1f) & 0xfff)) - 1 & 0x1000) != 0
           ) << 4 | 2U | bVar13 < bVar39;
  uVar27 = uVar12 + (uVar19 & 0x7fff0000 | (uint)(ushort)(uVar8 >> bVar20 | uVar8 << 0x10 - bVar20))
  ;
  uVar10 = uVar37 << 1 | 0xbf1f73ed;
  uVar35 = CONCAT11(bVar23 + 0x42,
                    bVar13 ^ bVar40 * (bVar13 & (bVar39 ^ bVar40 * (bVar39 ^ (byte)uVar37))));
  bVar40 = (uVar10 & 0xb9) != 0;
  uVar19 = -(uVar27 & 0xff00 | (uint)(byte)((byte)(uVar27 & 0xffff) >> 1 | 0x80));
  sVar18 = (short)((uVar19 + 0x88117811 + uVar27 * 4 & 0xffff) * (uint)uVar35 >> 0x10);
  uVar37 = CONCAT22((short)(char)bVar23 >> 7,uVar35) << 1;
  uVar32 = (int)uVar27 >> 1;
  uVar17 = sVar18 - 1;
  uVar35 = (short)uVar32 * 3;
  uVar11 = 0x1f;
  if (uVar32 != 0) {
    while (uVar32 >> uVar11 == 0) {
      uVar11 = uVar11 - 1;
    }
  }
  uVar8 = (ushort)((uVar37 | sVar18 != 0) << 1) | (ushort)(uVar12 >> 0x1f);
  uVar38 = uVar10 & 0xffffff00 | (uint)bVar40 | 0x990f;
  uVar27 = (uVar12 | uVar27 & 0xffff) << 1;
  bVar13 = (byte)uVar38;
  uVar10 = (uVar11 & 0xffff0000 | (uint)(ushort)((short)uVar11 + (short)uVar32)) >> bVar13;
  uVar17 = (uVar17 >> bVar40 | uVar17 << 0x10 - bVar40) + (short)uVar38 + 1;
  uVar11 = uVar38 & 0xffffff00;
  uVar36 = uVar8 * 2 | uVar35;
  uVar10 = CONCAT31((uint3)(uVar10 >> 8) & 0xffff00 |
                    (uint3)(byte)((ushort)((short)uVar10 >> bVar13) >> 8),!CARRY2(uVar8,uVar8)) |
           uVar27;
  uVar17 = uVar17 & 0xff00 | (ushort)(byte)((char)uVar17 - 0x36);
  if ((char)(uVar10 >> 8) != '\0') {
    uVar17 = (ushort)(uVar11 >> 0x18) | (ushort)(uVar11 >> 8) & 0xff00;
  }
  bVar23 = (byte)(uVar11 >> 0x18);
  bVar20 = bVar23 & 0xf;
  uVar32 = (uint)(ushort)(uVar36 << bVar20 | uVar36 >> 0x10 - bVar20);
  uVar12 = ((uint)(uVar17 & 0x3fff) << 0x10 | uVar10 & 0xffff) / (uVar32 | 0xc000) & 0xffff;
  sVar18 = CONCAT11((char)((uint)uVar35 >> 8) + 'L',(char)uVar35 >> 2);
  uVar35 = (short)uVar27 + 0xcef2;
  uVar17 = -sVar18;
  uVar11 = (uVar19 & 0xffff0000 |
            (uint)(ushort)(uVar17 & 0xff | (ushort)(sVar18 == 0 && uVar17 != 0) << 8) | 0x58e7881d)
           << 1;
  uVar27 = ~((uVar37 & 0x7fff8000) << 1 | uVar32 | 0xc000);
  uVar37 = 0xdf92b9d7;
  if ((char)uVar35 < '\0') {
    uVar37 = uVar27;
  }
  uVar19 = uVar11;
  if ((uVar35 & 0xb4) == 0) {
    uVar19 = (int)(uVar10 & 0xffff0000 | uVar12) >> 0x1f;
  }
  uVar17 = (ushort)((uVar27 & 0xffff) >> 9);
  uVar8 = (ushort)((uVar27 & 0xffff) << 8);
  uVar36 = uVar17 | uVar8;
  uVar35 = uVar35 >> 9 | uVar36 << 7;
  bVar20 = (byte)((uint)uVar35 >> 8);
  bVar39 = bVar20 & 1;
  uVar25 = (~(ushort)uVar37 + 0x211f) - (ushort)bVar39;
  uVar32 = (uint)CONCAT11(bVar20 >> 1 | bVar39 << 7,(char)uVar35 + -0x24) & 0xffffff0f;
  uVar36 = (ushort)((uint)((int)(short)((short)(char)((byte)uVar12 >> 1 | bVar23 << 7) *
                                       (short)(char)uVar11) * (int)(short)uVar36) >> 0x10) &
           (ushort)uVar32;
  uVar35 = (ushort)(byte)((char)uVar36 >> (sbyte)uVar32);
  uVar11 = ((uVar38 & 0xff00) << 8 | (uint)(bVar13 >> bVar13) << 0x18 | uVar32) +
           (uVar10 & 0xffff0000 | (uint)(ushort)(1 << (uVar35 & 0xf)));
  uVar32 = uVar19 & 0xffff0000;
  iVar26 = (uint)uVar25 * 5;
  uVar24 = ((ushort)uVar19 | 0xc000) << 1;
  uVar10 = (uVar11 & 0xffff0000 |
           (uint)CONCAT11((byte)(uVar11 >> 8) | (byte)((uint)uVar25 >> 8),(byte)uVar11)) -
           (uVar32 | uVar24);
  bVar40 = uVar10 == 0;
  uVar19 = ((uVar37 & 0xffff0000 | (uint)(ushort)(uVar25 + (uVar36 & 0xff00 | uVar35))) <<
           ((byte)uVar11 & 0x1f)) * -0x2f7822be;
  bVar20 = (byte)uVar24 >> bVar40;
  uVar11 = (uVar10 & 0xffffff00 | (uint)bVar40) >> bVar40;
  uVar37 = (uint)(ushort)((uVar24 & 0xfc00 | (ushort)bVar20) >> 1 |
                         (ushort)((short)((short)uVar19 * -0x67c5) < 0) << 0xf);
  cVar22 = (char)((uVar19 & 0xffffff00) >> 8);
  uVar4 = (uint5)(uVar32 | uVar37) & 0xff0000ffff;
  uVar35 = 1 << ((short)cVar22 & 0xfU);
  uVar36 = (ushort)(byte)(((char)(uVar11 >> 8) + -0xb) - ((byte)iVar26 & 1)) << 8 ^ uVar35;
  bVar13 = (byte)uVar35;
  uVar38 = (uVar27 & 0xffff0000 | (uint)(ushort)((uVar17 | uVar8 & 0xfbff) + 0xa47a)) ^
           1 << ((uint)uVar36 & 0x1f);
  uVar35 = SEXT12((char)bVar13);
  uVar24 = (ushort)(uVar38 >> 0x11) | (ushort)(((uint)((uint)uVar4 < uVar38) << 0x1f) >> 0x10);
  uVar27 = uVar19 & 0xffff0000 |
           (uint)(ushort)(((ushort)(uVar19 & 0xffffff00) | (ushort)(byte)((char)uVar19 + 9)) >>
                         (bVar13 & 0x1f)) | 1 << ((uint)uVar35 & 0x1f);
  uVar10 = uVar11 & 0xffff0000 | (uint)(uVar36 >> 0xe);
  uVar11 = (uint)((uVar27 & 1) != 0) << 0x10 | ((uint)uVar35 & 1) << 0xf | uVar27 >> 0x11;
  uVar17 = (ushort)(uVar11 >> 8) | (ushort)(uVar11 << 9);
  uVar27 = (CONCAT22(~(ushort)(((uint)(uint3)(int3)(char)((uint)iVar26 >> 8) << 8) >> 0x10),uVar35)
           & 0x1fffe) << 0xf | (uint)uVar17;
  lVar2 = (longlong)(int)(uVar32 | CONCAT11((char)(uVar37 >> 8) + -0x7a,bVar20 >> 1)) * -0x4f2e3f5e;
  iVar26 = (int)((ulonglong)lVar2 >> 0x20);
  bVar13 = (byte)(uVar36 >> 0xe) % 9;
  cVar16 = (char)((ulonglong)lVar2 >> 8);
  sVar30 = (short)((ulonglong)lVar2 >> 0x10);
  sVar18 = CONCAT11(cVar16 << bVar13 |
                    (byte)(CONCAT11(iVar26 != 0 && iVar26 != -1,cVar16) >> 9 - bVar13),(char)lVar2);
  uVar11 = (uint)(int)cVar22 >> 7;
  uVar35 = (ushort)uVar11 >> 8;
  uVar36 = uVar35 | sVar18 << 8;
  uVar11 = uVar11 & 0xffff0000 | (int)cVar22 << 0x19;
  bVar40 = uVar27 == uVar10;
  uVar37 = uVar10 ^ (uint)bVar40 * (uVar10 ^ (uVar11 | uVar36));
  iVar26 = CONCAT31((uint3)(uVar27 >> 8) ^ (uint3)((uint)bVar40 * (uVar27 & uVar37) >> 8),
                    !bVar40 && (int)uVar10 <= (int)uVar27);
  bVar13 = (byte)((uVar38 >> 1) >> 8) & (byte)((short)uVar24 >> 10);
  bVar20 = (byte)uVar37;
  uVar8 = sVar18 << (bVar20 & 0x1f);
  iVar29 = CONCAT22(sVar30,uVar8);
  bVar23 = (byte)(iVar29 >> 1);
  cVar22 = bVar23 + 3;
  uVar11 = uVar11 | (ushort)(uVar35 << 0xd | (ushort)(CONCAT12((uVar8 & 1) != 0,uVar36) >> 4));
  if (-1 < cVar22) {
    uVar11 = uVar37;
  }
  uVar25 = (short)uVar24 >> 0x12;
  uVar24 = (ushort)((short)uVar24 >> 2) >> 1 | (ushort)(bVar23 < 0xfd) << 0xf;
  uVar10 = iVar26 * 2;
  bVar39 = bVar20 >> 6 | bVar20 << 2;
  bVar23 = bVar20 >> 6 | bVar20 << 2 & 0x1f;
  uVar19 = (uint)(CONCAT14(CARRY1(bVar13,bVar39),uVar11) >> bVar23) | uVar11 << 0x21 - bVar23;
  uVar11 = CONCAT22(sVar30 >> 1,
                    (ushort)CONCAT31((int3)(iVar29 >> 9),cVar22) | 1 << ((ushort)iVar26 & 0xf)) >>
           (bVar20 & 0x1f) ^ 0xbe771ae7;
  uVar11 = (uVar11 & 0xffff0000 | (uint)CONCAT11((char)(uVar11 >> 8) + bVar13 + bVar39,(char)uVar11)
           ) - CONCAT22(uVar25,uVar24);
  uVar27 = (uVar37 & 0xffff0000 | uVar19 & 0xffff) >> 1;
  uVar8 = (ushort)uVar11 >> 1;
  uVar11 = uVar11 & 0xffff0000;
  sVar18 = (short)uVar10;
  uVar36 = sVar18 << 1 | (ushort)(sVar18 < 0);
  uVar35 = (uVar17 + 0xb + ((ushort)uVar4 >> 7 | (short)(uVar38 >> 1) << 9)) - uVar36;
  bVar13 = (byte)uVar36;
  bVar23 = (byte)((uint)uVar36 >> 8);
  bVar20 = bVar23 ^ (bVar13 == bVar23) * (bVar23 ^ (byte)uVar8);
  cVar22 = (bVar13 ^ (bVar13 == bVar23) * (bVar13 & bVar20)) + 0xbd;
  uVar17 = uVar8 & 0xff | (ushort)(byte)(-(char)(uVar27 >> 8) - 1) << 8;
  bVar23 = (byte)uVar27;
  uVar37 = (uVar37 & 0xffff0000 | uVar19 & 0xfe00) >> 1 | 0x80000000 | (uint)(byte)(bVar23 << 1);
  bVar13 = (bVar23 << 1 & 0x1f) % 9;
  uVar27 = uVar10 & 0xffff0000 | (uint)CONCAT11(bVar20,sVar18 < 0) & 0xffffff00 |
           (uint)(byte)((byte)(CONCAT11((char)bVar23 < '\0',cVar22) >> bVar13) |
                       cVar22 << 9 - bVar13);
  uVar10 = uVar37 ^ (uint)(uVar27 == uVar37) * (uVar37 ^ CONCAT22(uVar25,uVar24 + 1) & 0xffff04f1);
  uVar27 = uVar27 ^ (uint)(uVar27 == uVar37) * (uVar27 & uVar10);
  uVar8 = (ushort)uVar10;
  uVar36 = (uVar8 & 0xff00 | (ushort)(uVar8 != 0)) * 0x2830;
  iVar26 = (uVar19 & 0xfffb0000) +
           (uVar27 & 0xffff0000 | (uint)CONCAT11((byte)(uVar27 >> 8) >> (uVar8 != 0),(char)uVar27))
           * (uint)uVar35;
  uVar37 = (uVar11 | ((uVar11 | (byte)(((byte)(uVar17 << (bVar23 & 0xf)) |
                                       (byte)(uVar17 >> 0x10 - (bVar23 & 0xf))) + 0x5f)) ^ 0x6c) &
                     0xffff) ^ 0xb5c4;
  if (iVar26 < 0 == iVar26 * 2 < 0) {
    uVar37 = uVar11 | uVar36;
  }
  uVar35 = ~uVar35;
  uVar3 = (ulonglong)(uint)(int)(short)((short)((uVar19 & 0xfffb0000) >> 9) * uVar36) *
          (ulonglong)uVar36;
  uVar11 = -(int)(uVar3 >> 0x20);
  uVar27 = uVar37 & 0xffff0000;
  uVar17 = ((short)uVar11 - (ushort)(byte)(uVar11 >> 8)) - 1;
  bVar13 = (byte)((uint)(ushort)((short)uVar37 << 10) >> 8);
  uVar37 = uVar27 | (uint)(byte)(bVar13 ^ (bVar13 == 0) *
                                          (bVar13 ^ (byte)((uVar3 >> 8 & 0xffffff) * 0x100 *
                                                           (ulonglong)
                                                           (uVar11 & 0xffff0000 | (uint)uVar17) >>
                                                          0x28))) << 8;
  uVar11 = 0;
  if (uVar17 >> 8 != 0) {
    while (((uVar17 >> 8) >> uVar11 & 1) == 0) {
      uVar11 = uVar11 + 1;
    }
  }
  iVar26 = (int)uVar37 >> 7;
  uVar12 = CONCAT22(uVar25,uVar35 >> 6) >> ((byte)uVar11 & 0x1f);
  uVar37 = uVar37 << 1;
  uVar36 = (ushort)(uVar27 >> 0x10);
  uVar8 = uVar36 >> 0xf;
  uVar10 = (uint)(ushort)((short)((uint)uVar17 >> 8) << 4);
  bVar13 = (byte)iVar26;
  bVar23 = (byte)((uint)iVar26 >> 8);
  bVar20 = bVar23 ^ (bVar13 == bVar23) * (bVar23 ^ (byte)(uVar37 >> 8));
  uVar24 = CONCAT11(bVar20,bVar13);
  uVar38 = CONCAT22((short)uVar36 >> 7,uVar24);
  bVar13 = bVar13 ^ (bVar13 == bVar23) * (bVar13 & bVar20);
  uVar19 = uVar37 | (byte)((byte)(uVar27 >> 0x1f) << 1);
  bVar20 = (byte)(uVar11 >> 8);
  uVar27 = (uint)(byte)(bVar13 ^ (bVar13 == bVar20) * (bVar13 & bVar20));
  uVar32 = uVar38 & 0xffffff00 | uVar27;
  uVar17 = (ushort)(CONCAT14(bVar13 < bVar20,uVar32) >> 0x18);
  uVar9 = uVar17 >> 6 | (ushort)(uVar32 << 3);
  sVar14 = (sbyte)(uVar11 & 0xffffff0f);
  uVar32 = uVar12 & 0xffff0000;
  uVar36 = (ushort)(((uint)uVar24 & 0x1f00 | uVar27) << 3);
  uVar27 = uVar10 + 0xaa30599c;
  cVar22 = (char)((uVar11 & 0xffffff0f) >> 8);
  iVar26 = (int)(uVar11 & 0xffff0000 |
                (uint)CONCAT11(cVar22 << 3 | (byte)(CONCAT11(uVar10 < 0x55cfa664,cVar22) >> 6),
                               sVar14)) >> sVar14;
  uVar24 = (ushort)uVar27;
  uVar24 = uVar24 ^ (uVar24 >> 0xc & 1) << 0xc;
  bVar13 = (byte)iVar26 & 0xf;
  uVar36 = uVar36 >> 0xd | (uVar17 >> 6 | uVar36) << 3;
  uVar17 = uVar9 - uVar36;
  bVar13 = (byte)(uVar8 << bVar13) | (byte)(uVar8 >> 0x10 - bVar13);
  if (!SBORROW2(uVar9,uVar36)) {
    bVar13 = (byte)((uint)iVar26 >> 0x18);
  }
  uVar8 = uVar17 >> 1;
  uVar17 = (uVar8 | (ushort)((uVar17 & 1) != 0) << 0xf) >> 6;
  uVar11 = (uVar38 & 0x1fffe000) << 3 | (uint)(ushort)(uVar8 << 10 | uVar17) & 0xffffff00 |
           (uint)(byte)((char)uVar17 + 0x5e);
  if ((uVar11 & 0xf4376f0a) != 0) {
    uVar19 = uVar37 & 0xffff0000 | ((uint)uVar36 & 0x7fff) << 1;
  }
  uVar33 = ((CONCAT22(uVar25,uVar35) ^ (((uint)uVar25 << 0x10) >> 0x15 & 1) << 0x15) & 0xffff0000 |
           (uint)uVar36) << 2 | uVar12 >> 0x1f;
  uVar11 = uVar11 - 1;
  uVar35 = uVar24 + (ushort)uVar19;
  uVar17 = uVar35 + 1;
  cVar22 = (char)uVar11 + 'o' + (CARRY2(uVar24,(ushort)uVar19) || 0xfffe < uVar35);
  uVar37 = ((uint)((ushort)(byte)(bVar13 + 5) * 5 & uVar17) & 0xffff00ff) >> 4;
  uVar10 = uVar11 & 0xffffff00 | (uint)(byte)(cVar22 + 1);
  uVar12 = uVar19 + 0x8dca82b3 +
           (uint)(CARRY4(uVar33,uVar32) || CARRY4(uVar33 + uVar32,(uint)(cVar22 != -1)));
  uVar17 = uVar17 * 2;
  uVar19 = uVar27 & 0xffff0000 | (uint)uVar17;
  uVar35 = SEXT12((char)(uVar12 >> 8));
  uVar38 = uVar33 << 0x1c | uVar37;
  uVar27 = ((uVar32 + uVar19) - uVar10) - 1 >> 0x1f | uVar12 * 2;
  if ((uVar17 >> (uVar17 & 0xf) & 1) == 0) {
    uVar27 = uVar38;
  }
  uVar19 = (uVar11 & 0xffff0000 | (uint)(ushort)((short)uVar10 * -0x73f1)) - uVar12 | uVar19;
  uVar8 = (ushort)uVar37;
  iVar26 = uVar38 - uVar19;
  uVar11 = (uint)(ushort)(uVar8 + CONCAT11((char)((uint)iVar26 >> 8) >> 0xb,(char)iVar26 + '\x16'));
  uVar10 = (uint)(CONCAT14(((uVar17 ^ uVar8) + 0xc43f & 1) != 0,uVar33 << 0x1c | uVar11) >> 0x1b) |
           uVar11 << 6;
  uVar11 = uVar27 + ((uVar12 >> 8 & 0xffff00) << 8 |
                    (uint)(ushort)(uVar35 & 0xff |
                                  (ushort)(byte)((byte)((uint)uVar35 >> 8) >> 1) << 8)) * 2;
  uVar27 = ~(uVar27 >> 0x1f | 0xfffffffe);
  uVar37 = uVar11 & 0x7fff0000 | uVar11 >> 1 & 0x7fff;
  uVar11 = 0;
  if (uVar10 != 0) {
    while ((uVar10 >> uVar11 & 1) == 0) {
      uVar11 = uVar11 + 1;
    }
  }
  sVar18 = (short)uVar11;
  uVar11 = uVar11 & 0xffff0000 | (uint)(ushort)-sVar18;
  if (sVar18 != 0 || -sVar18 == 0) {
    uVar11 = uVar27;
  }
  uVar17 = (ushort)(CONCAT14(sVar18 != 0,uVar11) >> 0x18) | (ushort)(uVar11 << 9);
  uVar19 = uVar19 & 0xffff0000 | 0xf6;
  uVar32 = (uVar27 >> 0x11 | 0xff878000) & uVar19;
  uVar35 = uVar17 + 0xdf00;
  bVar13 = ((byte)uVar32 & 0x1f) % 9;
  bVar13 = '\0' << bVar13 | (byte)(((ushort)(0x20ff < uVar17) << 8) >> 9 - bVar13);
  uVar10 = uVar37 << 0xb;
  uVar38 = (uVar37 | 0x80000000) >> 0x15 | uVar10;
  lVar2 = (ulonglong)uVar19 * (ulonglong)uVar38;
  uVar27 = uVar27 + 1;
  uVar37 = (uint)lVar2;
  if ((int)((ulonglong)lVar2 >> 0x20) == 0 && uVar27 != 0) {
    uVar37 = uVar27;
  }
  uVar17 = (ushort)uVar38;
  uVar38 = (int)uVar37 >> 1;
  uVar19 = uVar27 + uVar32;
  if (uVar19 == 0) {
    uVar38 = (uint)(ushort)((int)uVar37 >> 0x11) << 0x10;
  }
  sVar18 = (short)uVar38 - uVar35;
  uVar8 = sVar18 + 0x8373;
  return CONCAT44(in_EDX,(uVar38 & 0xffff0000 |
                         (uint)(ushort)(uVar8 & 0xff |
                                       (ushort)(byte)(((char)((uint)uVar8 >> 8) + -0x41) -
                                                     (0x7c8b < (ushort)(sVar18 - 1U))) << 8)) +
                         (uint)(byte)(((char)(bVar13 ^ (byte)((((uint)(bVar13 >> 1) & 1) << 9) >> 8)
                                             ) >> ((byte)uVar32 & 0x1f)) + 0x4f) * 0x100 +
                         (uVar27 & 0xffff0000 |
                          (uint)CONCAT11(SCARRY4(uVar27,uVar32) == (int)uVar19 < 0,(byte)uVar27) &
                          0xffffff00 | (uint)((byte)uVar27 & bVar13)) +
                         CONCAT22((short)((ulonglong)lVar2 >> 0x30),(short)(char)bVar13) +
                         (uVar19 & 0xffff0000 | (uint)(ushort)((short)uVar19 << 1)) +
                         (uVar11 << 9 & 0xffff0000 | (uint)uVar35) * 2 +
                         (uVar10 & 0xffff0000 | (uint)(ushort)(uVar17 ^ (uVar17 >> 10 & 1) << 10)) +
                         -0x5e44e337);
}



// WARNING: Removing unreachable block (ram,0x0804c780)
// WARNING: Removing unreachable block (ram,0x0804c493)
// WARNING: Removing unreachable block (ram,0x0804c152)
// WARNING: Removing unreachable block (ram,0x0804c241)
// WARNING: Removing unreachable block (ram,0x0804c6c9)
// WARNING: Removing unreachable block (ram,0x0804ca49)
// WARNING: Removing unreachable block (ram,0x0804c2f7)
// WARNING: Removing unreachable block (ram,0x0804c911)

undefined8 log_size_10_var_004(void)

{
  short sVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  short sVar6;
  uint5 uVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  short sVar11;
  ushort uVar12;
  uint uVar13;
  char cVar16;
  char cVar17;
  undefined4 uVar14;
  uint uVar15;
  byte bVar18;
  sbyte sVar19;
  char cVar23;
  byte bVar24;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ushort uVar25;
  undefined4 in_EDX;
  uint uVar26;
  uint3 uVar27;
  uint uVar28;
  ushort uVar31;
  ushort uVar32;
  uint uVar29;
  uint uVar30;
  ushort uVar33;
  ushort uVar34;
  uint uVar35;
  int iVar36;
  ushort uVar37;
  ushort uVar38;
  ushort uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  bool bVar43;
  bool bVar44;
  bool in_PF;
  bool bVar45;
  
  sVar11 = -0x210c;
  if (in_PF) {
    sVar11 = 0x4471;
  }
  uVar31 = ~(1 << (sVar11 + 0x4dffU >> 1 & 0xf));
  uVar33 = uVar31 & 0x2c80;
  uVar21 = 0xb338c600;
  if ((uVar31 & 0x2c00) == 0) {
    uVar21 = (uint)uVar33 | 0xb3380000;
  }
  iVar36 = 0x1f;
  while (0xd5fa80bfU >> iVar36 == 0) {
    iVar36 = iVar36 + -1;
  }
  lVar5 = (longlong)iVar36 * (longlong)(int)((uint)uVar33 | 0x80000000);
  uVar31 = (short)((ulonglong)lVar5 >> 0x20) + 0x4741;
  sVar11 = (short)((ulonglong)lVar5 >> 0x30);
  uVar22 = CONCAT22(sVar11 >> 1,
                    (short)(CONCAT22(sVar11,uVar31) >> 1) + -0x7f41 + (ushort)((uVar31 & 1) != 0));
  uVar20 = uVar21 >> 0x13 | (uVar21 ^ 0xa9) << 0xd;
  iVar36 = 0;
  if (uVar22 != 0) {
    while ((uVar22 >> iVar36 & 1) == 0) {
      iVar36 = iVar36 + 1;
    }
  }
  bVar43 = !in_PF;
  bVar9 = (byte)(uVar21 >> 0x13);
  bVar18 = bVar9 & 0x1f;
  uVar21 = uVar20 >> bVar18 | uVar20 << 0x20 - bVar18;
  bVar18 = (char)uVar21 >> 0x15;
  uVar31 = (uVar33 >> (bVar9 & 0x1f)) << 4;
  if (0xb3 < bVar43) {
    uVar31 = 0x80bf;
  }
  bVar9 = (bVar18 & 0x1f) % 9;
  uVar20 = ((uint)CONCAT11((byte)(CONCAT11(bVar43 < 0xb4,in_PF) >> bVar9) | in_PF << 9 - bVar9,
                           bVar43 + 'L') | 0xe9080000) ^ 0x3f6c74;
  iVar36 = (uVar21 & 0xffffff00 | (uint)bVar18) - ((uint)uVar31 | 0x80000000);
  uVar21 = iVar36 + 0x54b957a2;
  uVar22 = (uVar21 & 0xffff0000 |
           (uint)CONCAT11((SBORROW4(iVar36 + -1,-0x54b957a3) != false) != (int)uVar21 < 0,
                          (char)uVar21)) ^ 0xd9ac60b7;
  uVar33 = (short)uVar22 + 0x3181;
  bVar18 = (byte)(uVar20 >> 8);
  uVar28 = (uVar20 & 0xffff0000 | (uint)CONCAT11(bVar18 >> 3 | bVar18 << 5,(char)uVar20)) ^
           0x3f05550a;
  uVar20 = 0x22d2;
  iVar36 = (int)(short)(uVar22 & 0xffff) * 0x22d2;
  uVar40 = (uVar22 & 0xffff | 0x3f0000) << ((byte)uVar33 & 0x1f);
  uVar21 = uVar28 << 1;
  uVar33 = (uVar33 & 0xffd0) >> 1;
  uVar35 = (int)((uint)uVar31 | 0x80000000) >> 0x12 ^ (uVar22 & 0xffff0000 | (uint)uVar33);
  if (uVar35 == 0) {
    uVar40 = 0x22d2;
  }
  uVar12 = CONCAT11((uVar33 & 0x4000) == 0,(byte)iVar36) & ~(1 << ((ushort)(byte)iVar36 & 0xf)) ^
           ((ushort)((uint)iVar36 >> 0x10) & 0xff00 |
           (ushort)(byte)((char)((uint)iVar36 >> 0x10) >> 0x1c));
  uVar40 = uVar40 & (uint)uVar12;
  uVar39 = (ushort)uVar40;
  uVar31 = uVar33 & 0xff |
           (ushort)(byte)((char)((uint)uVar33 >> 8) + (char)((uint)uVar12 >> 8)) << 8;
  uVar12 = (uVar12 & 0xff) * (ushort)(byte)((uint)uVar31 >> 8);
  uVar13 = SEXT24((short)uVar12);
  uVar28 = uVar21 & 0xffff0000 |
           (uint)CONCAT11((char)(uVar21 >> 8) + -0x5d,
                          (char)((byte)uVar21 | (int)uVar28 < 0) >> ((byte)(uVar33 & 0xff) & 0x1f));
  uVar21 = 0x1f;
  if (uVar13 != 0) {
    while (uVar13 >> uVar21 == 0) {
      uVar21 = uVar21 - 1;
    }
  }
  cVar10 = (char)(uVar13 >> 8);
  bVar18 = cVar10 << 1 | cVar10 < '\0';
  if (cVar10 >= '\0') {
    uVar21 = uVar21 & 0xffff0000 | (uint)uVar31;
    uVar20 = uVar35 & 0xffff;
  }
  uVar20 = (uVar20 | 0xabf50000) * 0x2db20a94;
  uVar33 = (short)uVar20 + 0x9db0;
  uVar20 = uVar20 & 0xffff0000;
  uVar2 = (ulonglong)(uVar20 | (uint)uVar33 | 0xc0000000);
  uVar3 = CONCAT44(uVar21,CONCAT22((short)uVar12 >> 0xf,
                                   uVar12 & 0xff |
                                   (ushort)(byte)(bVar18 << 1 |
                                                 (short)(uVar12 & 0xff | (ushort)bVar18 << 8) < 0)
                                   << 8)) & 0x3fffffffffffffff;
  uVar4 = uVar3 / uVar2;
  if (uVar31 <= uVar39) {
    uVar31 = uVar39;
  }
  cVar10 = (char)(uVar31 >> 8);
  bVar18 = cVar10 + 1;
  uVar12 = (ushort)(uVar35 >> 8);
  uVar31 = uVar31 & 0xff | (ushort)bVar18 << 8;
  if (SCARRY1(cVar10,'\x01') != (char)bVar18 < '\0') {
    uVar31 = uVar12;
  }
  sVar11 = (short)uVar4;
  iVar36 = (int)sVar11 * (int)sVar11;
  uVar25 = (ushort)((uint)iVar36 >> 0x10);
  _uVar25 = CONCAT22((short)(uVar3 % uVar2 >> 0x10),uVar25);
  uVar25 = (ushort)iVar36 & uVar25;
  uVar21 = uVar28 + _uVar25;
  if (SCARRY4(uVar28,_uVar25)) {
    uVar21 = (int)uVar35 >> 8;
  }
  uVar13 = uVar20 | 0xc0000000 | (uint)(uVar33 >> 1);
  uVar20 = uVar22 & 0xffff0000 | (uint)(ushort)(uVar31 >> 1 | uVar31 << 0xf) | 1 << (uVar40 & 0x1f);
  uVar21 = uVar21 | 1 << (((uint)uVar33 & 0x3e) >> 1);
  bVar18 = (byte)uVar20 & 0x1f;
  uVar28 = uVar20 >> bVar18 | uVar13 << 0x20 - bVar18;
  sVar11 = (short)uVar21;
  uVar22 = (uint)(ushort)(sVar11 << 1 | (ushort)(sVar11 < 0));
  uVar20 = CONCAT22((short)(uVar4 >> 0x10),uVar25 << 8 | uVar25 >> 8) << 5;
  uVar31 = (ushort)(((uVar22 & 0xff00) << 8) >> 0x10) | (ushort)((uVar22 << 0x18) >> 0x10);
  cVar16 = (char)(uVar20 >> 8);
  cVar23 = (char)(uVar28 >> 8);
  cVar10 = -cVar16 + cVar23;
  cVar17 = cVar10 + (cVar16 != '\0');
  uVar22 = (uint)CONCAT11(cVar17,(byte)uVar20 | (byte)((int)uVar35 >> 0x20) >> 3);
  if (cVar17 != '\0' && (SCARRY1(-cVar16,cVar23) != SCARRY1(cVar10,cVar16 != '\0')) == cVar17 < '\0'
     ) {
    uVar28 = (int)uVar35 >> 8;
  }
  uVar33 = uVar39 << 1 | 1;
  bVar9 = (byte)uVar28;
  bVar18 = bVar9 & 0x1f;
  uVar35 = CONCAT22((short)((int)uVar35 >> 0x18),uVar12 + 0x1a30) & uVar28;
  uVar21 = ((uint)CONCAT21(uVar31,(char)(uVar21 >> 0x10) + -0x26) & 0x67) << 8 |
           (uint)uVar31 << 0x10;
  if (-1 < (int)uVar35) {
    uVar21 = uVar28;
  }
  if (!in_PF) {
    uVar21 = uVar35;
  }
  if (0x6292 < uVar33) {
    uVar28 = uVar28 & 0xffff0000 | (uint)CONCAT11((char)(uVar22 >> 8) >> 0xf,(char)uVar21);
  }
  uVar40 = -((uint)(ushort)(uVar33 + 0x9d6d) << 0x12 | (uint)(ushort)(uVar33 + 0x9d6d >> 0xe));
  iVar36 = ((int)uVar13 >> (bVar9 & 0x1f) & 0xffffU |
           (uint)(ushort)((ushort)(((uVar20 & 0xffff0000 | uVar22) >> bVar18) >> 0x10) |
                         (ushort)(((uint)uVar33 << 0x20 - bVar18) >> 0x10)) << 0x10) + 0x299cd787;
  uVar28 = uVar28 & uVar40;
  sVar11 = (short)(iVar36 - uVar28);
  uVar20 = SEXT24(sVar11);
  if (iVar36 - uVar28 != 0) {
    uVar20 = uVar21 * -0x3f08000 & 0xffff | (uint)(ushort)(sVar11 >> 0xf) << 0x10;
  }
  uVar33 = (ushort)(iVar36 >> 0x2f);
  uVar21 = uVar21 * -0x3f08000 | 0xd3120c00;
  bVar18 = (byte)(uVar21 >> 8);
  uVar31 = CONCAT11(bVar18,(char)(iVar36 >> 0x1f));
  uVar21 = (uVar21 << 3) >> 0xe;
  uVar22 = (uVar35 & 0xffff0000 | (uint)(ushort)bVar18) * 0x5de983e8;
  if (in_PF) {
    uVar22 = (uint)(int)(short)(ushort)bVar18 >> 1;
  }
  uVar35 = uVar28 & 0xffff0000 |
           (uint)(ushort)((short)(((ushort)uVar28 & 0xff00) >> 1 | (short)uVar40 << 0xf) >> 1);
  uVar12 = (ushort)(uVar22 * 0x230d02f9);
  uVar13 = 0x11338941 - (CONCAT22(uVar33,uVar31) | 2);
  uVar40 = (uint)uVar33 << 0x10 | (uint)uVar31 & 0xff | 2;
  bVar18 = (byte)((int)(uVar20 - 1) >> 0x11);
  uVar21 = (uint)(byte)((bVar18 == 0xff) *
                        (bVar18 ^ (bVar18 == 0xff) *
                                  (bVar18 ^ (byte)((uint)(ushort)~((ushort)(uint)(CONCAT14(CARRY2((
                                                  ushort)uVar22,
                                                  ((ushort)uVar21 & 0xff00 |
                                                  (ushort)(byte)((char)uVar21 - 0x2f)) >> 1 |
                                                  (short)uVar20 << 0xf),uVar40) >> 0x17) |
                                                  (ushort)(uVar40 << 10)) >> 8))) ^ 0xff) |
           0xffffff00;
  lVar5 = (longlong)(int)uVar21 * (longlong)(int)uVar21;
  bVar18 = (byte)((int)uVar35 >> 1) | (byte)lVar5;
  uVar21 = (uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 * 0x1000000)
           & (uint)((ulonglong)lVar5 >> 0x20);
  if (bVar18 != 0) {
    uVar21 = (uint)lVar5;
  }
  sVar11 = (short)CONCAT31((int3)((int)uVar35 >> 9),bVar18);
  uVar39 = (ushort)uVar21;
  uVar31 = sVar11 << 1 | uVar39 >> 0xf;
  iVar36 = CONCAT22((short)((int)(uVar28 & 0xffff0000) >> 0x11),uVar31);
  bVar18 = (byte)uVar31 & 0x1f;
  uVar28 = iVar36 << bVar18 | (uint)(CONCAT14(sVar11 < 0,iVar36) >> 0x21 - bVar18);
  bVar8 = (byte)lVar5 | (byte)((ulonglong)lVar5 >> 8);
  bVar18 = (byte)uVar28;
  bVar9 = bVar18 >> 7;
  bVar18 = bVar18 << 2;
  uVar35 = 0x5c204470 >> (bVar9 | bVar18 & 0x1f);
  uVar33 = (short)uVar39 >> (bVar9 | bVar18 & 0x1f);
  sVar11 = (short)((uVar22 * 0x230d02f9 & 0xffff0000 | (uint)(ushort)(uVar12 | 1 << (uVar12 & 0xf)))
                   * 0xa218870 >> 0x10);
  uVar12 = ~(sVar11 >> 0xd);
  uVar31 = uVar33 << 5;
  uVar25 = uVar33 >> 0xb | uVar31;
  bVar24 = bVar9 | bVar18 & 0xf;
  uVar33 = (ushort)uVar35 >> bVar24 | uVar12 << 0x10 - bVar24;
  uVar20 = CONCAT31((int3)((ulonglong)lVar5 >> 8),bVar8);
  if (!SCARRY1((char)(uVar28 >> 8),bVar8)) {
    uVar20 = uVar21 & 0xffff0000 | (uint)uVar25;
  }
  uVar15 = uVar21 & 0xffff0000 | (uint)(ushort)((short)uVar25 >> 0x17);
  uVar21 = (uVar20 & 0xffff) * (uint)uVar12;
  uVar22 = uVar21 & 0xffff;
  uVar28 = (uVar35 & 0xffff0000 | (uint)(ushort)(uVar33 << 0xb | uVar33 >> 5)) >>
           (bVar9 | bVar18 & 0xf);
  uVar22 = (int)(uVar20 & 0xffff0000 |
                ((uint)((ushort)(uVar21 >> 0x10) & 0x3fff) << 0x10 | uVar22 | 0xc000) /
                (uVar22 | 0xc000) & 0xffff) >> 0x1f;
  bVar8 = bVar9 | bVar18 & 0xf;
  uVar13 = ((int)(short)uVar39 << bVar24 ^ uVar20) << 0x1a & ~(1 << (uVar22 & 0x1f));
  bVar24 = (byte)uVar28;
  lVar5 = (longlong)(int)(uVar28 & 0xffffff00 | (uint)(byte)(bVar24 >> 3 | bVar24 << 5)) *
          -0x6415390a;
  iVar36 = (int)((ulonglong)lVar5 >> 0x20);
  uVar21 = ((uint)(CONCAT14(iVar36 != 0 && iVar36 != -1,uVar22) >> 4) | uVar22 << 0x1d) << 1;
  uVar20 = uVar21 | (uVar22 << 0x1d) >> 0x1f;
  uVar22 = (CONCAT22(sVar11 >> 0x1d,uVar12) >> bVar8 | -0x1fb5511d << 0x20 - bVar8) >> bVar8 |
           uVar20 << 0x20 - bVar8;
  bVar8 = (byte)uVar20;
  uVar12 = ((ushort)uVar21 & 0xff00 | (ushort)(byte)(bVar8 << 5 | bVar8 >> 4)) + 0xb8b4;
  uVar33 = CONCAT11((char)lVar5,bVar9 | bVar18) & 0xff0f;
  uVar40 = (uVar22 & 0xffff0000 | (uint)(ushort)((ushort)uVar22 | 1)) ^ 0x9c3b;
  bVar18 = (byte)uVar33;
  uVar35 = ((uint)lVar5 | 0x1e00) << bVar18;
  uVar22 = (uint)bVar18 << 8;
  uVar20 = (uint)uVar33 & 0xff00;
  uVar28 = (uint)(ushort)((ushort)uVar22 | (ushort)(uVar20 >> 8)) ^ 0x59;
  bVar9 = (char)((uVar22 | uVar20 >> 8) >> 1) + 6;
  uVar20 = (uVar22 & 0xfe00) >> 1 | (uint)bVar9;
  uVar33 = (ushort)((uVar21 & 0xffff0000) >> 0x11);
  bVar8 = (char)(uint3)((uVar21 & 0xffff0000) >> 9) >> 0x12;
  bVar18 = (byte)((short)uVar31 >> 0x17);
  uVar21 = uVar28;
  if (uVar20 <= uVar15) {
    uVar21 = uVar40;
  }
  sVar19 = (sbyte)(uVar21 & 0xffffff0f);
  uVar31 = (short)(uVar21 & 0xffffff0f) << sVar19 | ((ushort)bVar8 << 8) >> 0x10 - sVar19;
  bVar18 = bVar9 ^ (uVar20 == uVar15) *
                   (bVar9 & (bVar18 ^ (uVar20 == uVar15) * (bVar18 ^ (byte)uVar28)));
  if (SCARRY2(uVar31,1) == (short)(uVar31 + 1) < 0) {
    bVar18 = 1;
  }
  uVar31 = CONCAT11((char)(uVar35 >> 8),1);
  bVar9 = (bVar18 == 0) * bVar8;
  uVar22 = (uVar35 & 0xffff0000 | (uint)uVar31) + 0xece95f52;
  uVar21 = (uint)(ushort)((short)(char)(bVar18 ^ (bVar18 == 0) * (bVar18 & bVar9)) | 0xc000);
  uVar20 = (((uint)bVar8 & 0x3f) << 8 | (uint)bVar9) << 0x10 | (uint)bVar9 << 8;
  uVar28 = uVar40 << 1 | 0xc0000000;
  uVar2 = CONCAT44(uVar20 % uVar21 | (uint)uVar33 << 0x10,
                   (uint)CONCAT21(uVar33,bVar8) << 0x10 | uVar20 / uVar21 & 0xffff) &
          0x3fffffffffffffff;
  uVar3 = uVar2 / (ulonglong)uVar28;
  uVar2 = uVar2 % (ulonglong)uVar28;
  uVar33 = (ushort)uVar22 & 0x852;
  sVar11 = (short)uVar3 - uVar33;
  uVar21 = CONCAT31((int3)(char)((uint)(ushort)((ushort)((uVar13 | uVar12 & 0xff00) * -0x401337b4 >>
                                                        1) & 0x7fff ^ uVar31 | 0x1000) >> 8),0xe3);
  if (sVar11 != 0) {
    uVar21 = (uint)uVar2;
  }
  bVar9 = (byte)uVar21;
  uVar33 = uVar33 >> (bVar9 & 0xf) | uVar33 << 0x10 - (bVar9 & 0xf);
  uVar22 = uVar22 & 0x2c750000;
  bVar18 = (char)((uint)uVar33 >> 8) + bVar9;
  uVar33 = uVar33 & 0xff;
  uVar39 = uVar33 | (ushort)bVar18 << 8;
  uVar20 = 0xdcef878a -
           ((int)((uVar13 | (ushort)((uVar12 >> 0xc | (uVar31 + 0x571d) * 0x40) + uVar31 + 0x571d))
                 << 1) >> 0xc);
  uVar12 = (short)uVar20 << 1 | 1;
  uVar35 = uVar20 & 0xffff0000 | (uint)uVar12;
  uVar31 = ((CONCAT11((char)(uVar21 >> 8) << 1,bVar9) | 0x100) ^ 0x823c) + 0x1707;
  uVar4 = (ulonglong)(uVar35 | 0xc0000000);
  uVar2 = CONCAT44(CONCAT22((short)(uVar2 >> 0x10),(ushort)uVar2 & uVar39),
                   CONCAT22((short)(uVar3 >> 0x10),sVar11)) & 0x3fffffffffffffff;
  uVar3 = uVar2 / uVar4;
  lVar5 = (ulonglong)
          (((uint)((ushort)(uVar2 % uVar4) & 0x3fff) << 0x10 | (uint)uVar3 & 0xffff) /
           (uint)(ushort)((short)(uVar28 << 1) << 3 | 0xc000) & 0xffff |
          (uint)(ushort)(uVar3 >> 0x10) << 0x10) * (ulonglong)(uVar22 | uVar39);
  uVar28 = uVar21 & 0xffff0000 |
           (uint)(ushort)(uVar31 & 0xff | (ushort)(byte)((char)((uint)uVar31 >> 8) + 0x38) << 8);
  uVar20 = uVar28 >> 1;
  bVar8 = (byte)uVar20;
  uVar20 = (uint)((ulonglong)lVar5 >> 0x20) >> (bVar8 & 0x1f) | uVar20 << 0x20 - (bVar8 & 0x1f);
  uVar12 = (ushort)((byte)((char)((ulonglong)lVar5 >> 8) << 1) >> 5) | uVar12 << 3;
  uVar14 = CONCAT22((short)((ulonglong)lVar5 >> 0x10),uVar12);
  uVar35 = uVar35 << 7;
  cVar10 = (char)uVar12;
  bVar9 = bVar8 >> 1 & 0x1f;
  uVar40 = uVar35 << bVar9 | uVar35 >> 0x20 - bVar9;
  bVar9 = (byte)uVar33;
  uVar33 = CONCAT11(bVar18,bVar9 >> 2 | bVar9 << 7);
  uVar32 = SEXT12(cVar10);
  uVar25 = (short)cVar10 ^ (ushort)(uVar33 == uVar32) * ((short)cVar10 ^ (ushort)uVar20);
  uVar35 = CONCAT22((undefined2)(cVar10 >> 7),uVar25);
  uVar31 = (ushort)CONCAT31((uint3)(uVar28 >> 9),bVar8 >> 2);
  sVar11 = (uVar31 | 0x80) + ((short)uVar40 << 1 | (ushort)(uVar33 < uVar32));
  uVar31 = uVar31 | 0x80;
  uVar39 = (ushort)((uVar21 & 0xffff0000) >> 0x11);
  iVar36 = uVar35 + 0x49336bd3;
  if (!in_PF) {
    uVar31 = uVar12 & 0xfe44;
  }
  bVar9 = (byte)sVar11;
  bVar18 = bVar9 & 0x1f;
  uVar7 = CONCAT14((byte)((uVar20 + 0xe653438b) - (uint)(uVar35 < 0xb6cc942d) >> 8) < 100,
                   uVar22 | (ushort)(uVar33 ^ (ushort)(uVar33 == uVar32) * (uVar33 & uVar25)));
  uVar25 = (ushort)(iVar36 >> 1);
  uVar2 = (ulonglong)(uVar25 < 0x7524) << 0x20 |
          ((ulonglong)(uVar7 >> bVar18) | (ulonglong)uVar7 << 0x21 - bVar18) & 0xffffffff;
  lVar5 = uVar2 << 7;
  uVar12 = (ushort)(uVar2 >> 0x1a) | (ushort)lVar5;
  uVar33 = uVar12 | 0x8000;
  uVar25 = (uVar25 + 0x8adc) * 2 | 1;
  uVar34 = uVar25 + 0xd5ef;
  uVar7 = CONCAT14(uVar25 < 0x2a11,uVar14) & 0xff00000044;
  uVar21 = (int)uVar7 << 0x17 | (uint)(uVar7 >> 10);
  uVar27 = (uint3)((uint)uVar14 >> 8) & 0xb53000;
  sVar6 = (short)((uint)((int)(short)uVar34 * -0x111e) >> 0x10);
  sVar1 = uVar31 - uVar33;
  uVar37 = sVar1 - 1;
  uVar25 = (ushort)CONCAT31((uint3)((uint)((int)(short)uVar34 * -0x111e) >> 8) & 0xff | uVar27,
                            (uVar33 <= uVar31 && sVar1 != 0) && uVar37 != 0);
  uVar31 = uVar25 - uVar34;
  uVar32 = (ushort)(uVar27 >> 8);
  uVar33 = CONCAT11(sVar6 != 0 && sVar6 != -1,0xe0);
  if (uVar25 < uVar34) {
    uVar33 = uVar34;
  }
  uVar28 = ~(uVar40 & 0xffff0000 | (uint)uVar37);
  uVar12 = ((short)(char)uVar12 + -0x46e1) - (ushort)((byte)uVar31 & 1);
  bVar45 = (uVar12 & 0x400) != 0;
  uVar22 = (CONCAT22(uVar39,sVar11) & 0xffffff00 | (uint)bVar9) & 0xffffba04;
  bVar43 = uVar12 < 0x795d;
  uVar20 = (uint)lVar5 & 0xffff0000 | (uint)(ushort)(uVar12 + 0x86a3);
  uVar12 = uVar31 & 0xff00 | (ushort)bVar43;
  uVar28 = uVar28 ^ 1 << (uVar28 & 0x1f);
  _uVar25 = uVar20 * 2;
  if (SCARRY4(uVar20,uVar20) != _uVar25 < 0) {
    uVar21 = uVar21 | uVar28 & 0xffff;
  }
  uVar28 = uVar28 | 1 << bVar43;
  uVar37 = uVar33 & 0x1a | (ushort)(byte)((char)(uVar33 >> 8) - 1) << 8;
  sVar19 = (sbyte)uVar22;
  uVar28 = uVar28 << sVar19 | uVar28 >> 0x20 - sVar19;
  uVar20 = (CONCAT22((short)(iVar36 >> 0x11),uVar34) + -0x193e6c8d) * 2;
  uVar33 = (ushort)uVar22;
  uVar34 = (ushort)uVar28;
  uVar25 = uVar33 - uVar34;
  bVar9 = (byte)uVar25;
  uVar38 = uVar34 >> (bVar9 & 0xf) | uVar34 << 0x10 - (bVar9 & 0xf);
  bVar44 = CARRY2((ushort)_uVar25 & 0xff00 | (ushort)(byte)((char)_uVar25 << 1 | uVar33 < uVar34),
                  uVar25);
  bVar8 = (byte)((uint)uVar25 >> 8);
  bVar18 = bVar8 + bVar9;
  uVar34 = (ushort)((uVar20 | uVar32 >> 0xf) << 1) | uVar12;
  uVar20 = (uVar20 & 0x7fff8000) << 1 | (uint)uVar34;
  uVar33 = uVar25 & 0xff |
           (ushort)(byte)((char)((uint)(ushort)(uVar25 & 0xff | (ushort)(byte)(bVar18 + bVar44) << 8
                                               ) >> 8) + -0x12 +
                         (uVar37 < 0xa8ac ||
                         (ushort)(uVar37 + 0x5754) <
                         (ushort)(CARRY1(bVar8,bVar9) || CARRY1(bVar18,bVar44)))) << 8;
  if (-1 < (short)uVar34) {
    uVar33 = uVar38;
  }
  uVar31 = CONCAT11((byte)(uVar31 >> 8) >> ((byte)uVar33 & 0x1f),bVar43);
  uVar22 = uVar20 << 1;
  uVar35 = (uint)(ushort)(((ushort)uVar21 | 0x80) << 1 | 1);
  uVar42 = uVar21 & 0xffff0000 | uVar35;
  uVar12 = uVar12 ^ 0xdb8a;
  uVar40 = CONCAT22(uVar32,uVar31 >> 3 | uVar31 << 0xd) << 1 |
           (uint)((uVar12 >> (uVar12 & 0xf) & 1) != 0);
  iVar36 = CONCAT22(uVar39,uVar33 - 0xf47);
  uVar13 = iVar36 * 0x40b78055;
  uVar21 = (uVar22 & 0xffff0000 |
           (uint)(ushort)-(((ushort)uVar22 | (ushort)((int)uVar20 < 0)) - uVar33)) + 0x60f34b44 +
           iVar36 * 0x2de0154;
  bVar18 = (byte)(uVar33 - 0xf47) & 0x1f;
  uVar29 = uVar40 >> bVar18 | uVar40 << 0x20 - bVar18;
  uVar31 = ((ushort)uVar29 & 0xff) >> 1;
  uVar41 = ((uVar28 & 0xffff0000 | (uint)(ushort)((short)uVar38 >> 1)) & uVar21) <<
           ((byte)uVar31 & 0x1f);
  uVar15 = uVar42 * -0x1208e90f;
  uVar20 = (uint)uVar31 + 0x85726eb5;
  uVar28 = (uint)(ushort)((short)uVar41 << 1);
  uVar31 = -(short)uVar20;
  uVar40 = (uint)uVar31;
  uVar21 = uVar21 & 0xffff0000;
  bVar8 = (byte)uVar31;
  uVar26 = (uVar13 & 0xffff0000 |
           ((uint)(byte)((char)(uVar13 >> 8) * '\x02' + ((uVar29 & 1) != 0)) & 0xffff26) << 8) <<
           (bVar8 & 0x1f);
  bVar43 = uVar15 - uVar29 == 0;
  uVar30 = uVar29 ^ (uint)bVar43 * (uVar29 ^ uVar26);
  uVar22 = (uVar15 ^ (uint)bVar43 * (uVar15 & uVar30)) << 1;
  bVar9 = (byte)uVar22 | (byte)(uVar21 >> 0x1f);
  uVar13 = (uint)CONCAT11((char)(uVar22 >> 8) + -0x34,bVar9);
  uVar20 = (uVar20 & 0xffff0000 | uVar40) ^ uVar40 & 2;
  bVar24 = (byte)(uVar40 >> 8);
  bVar18 = (char)uVar20 - bVar24;
  uVar26 = (int)uVar26 >> (bVar18 & 0x1f);
  uVar15 = (uVar30 & 0xffff0000 | (uint)CONCAT11(!SBORROW4(uVar15,uVar29),(char)uVar30) & 0xffffff00
           | (uint)(byte)((char)uVar30 >> (bVar8 & 0x1f))) * -0x3d95267e;
  uVar40 = uVar26 + 0xfbf30fae;
  if (0x40cf051 < uVar26 || uVar40 == 0) {
    uVar28 = uVar15 & 0xffff;
  }
  uVar26 = (uint)CONCAT11((byte)(uVar15 >> 8) >> (bVar18 & 0x1f),(char)uVar15);
  uVar20 = uVar20 & 0xffff0000 | (uint)CONCAT11(bVar24 ^ bVar9,bVar18) |
           uVar22 & 0xffff0000 | uVar13;
  bVar18 = (byte)uVar20 & 0x1f;
  uVar15 = (uVar20 & 0xffff0000 | (uint)CONCAT11(uVar20 == 0,(byte)uVar20)) >> bVar18 |
           (uVar15 & 0xffff0000 | uVar26) << 0x20 - bVar18;
  uVar29 = ~(uVar21 | (ushort)((ushort)uVar29 * -0x2532 | 0x4000));
  uVar26 = uVar26 << 0x1e | uVar15 & 0xff;
  uVar21 = uVar41 >> 0x11;
  uVar20 = (uVar41 & 0xffff0000 | uVar28) << 0xf;
  bVar9 = (CARRY4(uVar42,uVar26) | 0x56U) - 1;
  bVar18 = (char)(uVar15 >> 8) + bVar9 + 1;
  uVar15 = uVar15 & 0xffff0000 | (uint)bVar18 << 8;
  uVar28 = uVar42 + uVar26;
  if (SBORROW1((char)(uVar13 >> 8),(char)(uVar35 >> 8))) {
    uVar28 = uVar15;
  }
  uVar35 = (uVar40 & 0xffff0000 | 0x6700 | (uint)bVar9 | 0x7e00) + 0x96efca3c;
  if (-1 < (int)uVar35) {
    uVar21 = uVar28 & 0xffff;
  }
  uVar28 = (uVar22 >> 0x19 | uVar15 << 7) & uVar35;
  uVar31 = (ushort)uVar29;
  uVar21 = (uVar21 | uVar20) << 4;
  iVar36 = (uVar28 & 0xffff0000 | (uint)(ushort)((ushort)uVar28 | uVar31) | 0xe600) - 1;
  bVar18 = (char)((((ushort)(uVar35 < uVar28) << 8) >> 1 | (ushort)bVar18 << 8) >> 1) + (char)iVar36
  ;
  uVar22 = (uint)(ushort)(uVar31 << 0xf | uVar31 >> 1);
  uVar31 = ((ushort)uVar21 | (ushort)(uVar20 >> 0x1c)) + CONCAT11(!bVar45,bVar18) + 1;
  uVar21 = uVar21 & 0xffff0000;
  uVar20 = (uint)((uint3)((uint)iVar36 >> 8) & 0xffff00) << 8;
  if (bVar45) {
    uVar20 = uVar20 | (ushort)((((short)(((uint)bVar18 | 0x100) >> 1) + 0xeb7dU & 7) << 5 | 0xae00)
                              ^ 0x2000);
  }
  uVar22 = (uVar29 & 0xffff0000 | uVar22) + (uVar21 | uVar31) +
           (uint)((((uint)(byte)((uVar35 == uVar28) + -0x7a + ((bVar18 & 1) != 0)) |
                   1 << (uVar22 & 0x1f)) & 1) != 0) + 0x3d68ae77;
  uVar31 = uVar31 * 2;
  uVar28 = uVar20;
  if ((uVar31 & 0x6ac3) == 0) {
    uVar28 = 0x3d68ae77;
  }
  uVar33 = (short)uVar28 << 1 | 1;
  bVar18 = (byte)uVar33 & 0x1f;
  uVar35 = (uVar21 | uVar31) << bVar18 | (uVar21 | uVar31) >> 0x20 - bVar18;
  uVar40 = (uVar28 & 0xffff0000 | (uint)uVar33) >> 1;
  if ((SBORROW2(uVar31,0x502d) != SBORROW2(uVar31 + 0xafd3,1)) == (short)(uVar31 + 0xafd2) < 0) {
    uVar40 = uVar22 & 0xffff | (uVar28 >> 0x11) << 0x10;
  }
  uVar33 = -(ushort)uVar40 >> 1 |
           (-(short)uVar35 & 0x3f00U | (ushort)(byte)((byte)-(short)uVar35 >> ((byte)uVar40 & 0x1f))
           ) / 0xc0 << 0xf;
  uVar22 = (uVar22 >> 1 & 0x3d68aee2) << 1;
  bVar18 = (byte)uVar40 & 0xf;
  uVar31 = (uVar31 + 0xafd2 | 0x385a) & uVar33;
  uVar28 = (uint)(ushort)((ushort)(byte)(((short)uVar31 < 0) << 7 | (uVar31 == 0) << 6 |
                                         ((-((ushort)uVar40 & 0xfff) & 0x1000) != 0) << 4 |
                                        bVar45 << 2) << 8 | 0x277);
  uVar35 = uVar28 << 0x18 | (uVar35 & 0xff000000) >> 8 |
           (uint)(ushort)(CONCAT11((char)(uVar35 >> 0x10) >> 1,(char)(uVar28 >> 8)) << 2);
  uVar13 = ((uint)uVar33 ^ 1 << ((uVar28 & 0x1f00) >> 8)) << 1;
  uVar21 = uVar21 | (ushort)((short)uVar31 >> 6);
  lVar5 = (longlong)(int)uVar35 * (longlong)(int)uVar35;
  uVar35 = (uint)((ulonglong)lVar5 >> 0x20);
  iVar36 = uVar21 - uVar35;
  uVar39 = (short)iVar36 - 1;
  uVar28 = (int)lVar5 << 1;
  uVar31 = (ushort)(uVar28 & 0xffffff00) |
           (ushort)(byte)(((byte)uVar28 | (byte)((ulonglong)lVar5 >> 0x18) >> 7) +
                          (char)(uVar28 >> 8) + ((int)lVar5 < 0));
  uVar33 = (ushort)((int)uVar40 >> 0x1c);
  uVar12 = uVar33 ^ (ushort)(uVar31 == uVar33) * (uVar33 ^ uVar39);
  uVar28 = uVar28 & 0xffff0000 |
           (uint)CONCAT11(((byte)((uVar28 & 0xffffff00) >> 8) ^
                          (byte)((ushort)(uVar31 == uVar33) * (uVar31 & uVar12) >> 8)) + 0x8b,1);
  uVar22 = uVar22 & 0xffff0000 | (uint)(ushort)((((ushort)uVar22 | 1) + (short)lVar5) * 2);
  uVar31 = (ushort)((ulonglong)lVar5 >> 0x28);
  uVar25 = uVar31 & 0xff |
           (ushort)(((uint)(byte)((byte)((ulonglong)lVar5 >> 0x20) >> 1 |
                                 (uVar21 < uVar35 || iVar36 == 0) << 7) << 0x18) >> 0x10);
  uVar35 = uVar22 ^ (uint)(uVar28 == uVar22) * (uVar22 ^ uVar12);
  uVar28 = uVar28 ^ (uint)(uVar28 == uVar22) * (uVar28 & uVar35);
  uVar21 = uVar20 & 0xffff0000 |
           (uint)(byte)((char)((((uint)(ushort)(0xff77U >> bVar18 | -0x89 << 0x10 - bVar18) & 0xfe00
                                ) >> 1) >> 8) >> 6) << 8;
  uVar22 = (uint)(CONCAT14(1,uVar21) >> 0x1d);
  uVar33 = ((ushort)uVar28 & 0xff00 |
            (ushort)(byte)((byte)uVar28 >> ((byte)((ulonglong)lVar5 >> 0x38) & 0x1f)) | 0xf200) &
           (ushort)uVar13;
  iVar36 = (int)(short)((ushort)((ulonglong)lVar5 >> 0x38) | uVar31 & 0xff00) * -0x3833;
  sVar11 = (short)((uint)iVar36 >> 0x10);
  uVar31 = uVar33 >> 1;
  uVar28 = CONCAT22(uVar25,uVar12) & 0xfffdffff;
  bVar18 = (byte)uVar22;
  bVar9 = bVar18 & 1;
  uVar21 = uVar21 << 4 | (uint)(byte)(bVar18 >> 1 | bVar9 << 7);
  if ((uVar22 & 1) == 0) {
    uVar31 = (ushort)uVar21;
  }
  uVar22 = CONCAT22((short)(uVar35 >> 0x10),0xa8bd);
  if (bVar45) {
    uVar22 = uVar13 & 0xffff0000 | uVar35 & 0xffff;
  }
  uVar21 = uVar28 + uVar21;
  uVar12 = (ushort)uVar28;
  uVar33 = (((((short)iVar36 - uVar33) - (ushort)(sVar11 != 0 && sVar11 != -1)) -
            (short)(uVar35 & 0xffff)) - (ushort)bVar9 | 0x40) << 1 | uVar12 >> 0xf;
  uVar13 = ((uint)uVar25 & 0xfffd) << 0x10 |
           (uint)(ushort)(uVar12 ^ (ushort)(uVar39 == uVar12) * (uVar12 ^ uVar33));
  uVar28 = (uint)uVar33 & 0xffffff0f;
  sVar19 = (sbyte)uVar28;
  uVar33 = (ushort)uVar21 >> sVar19 | uVar31 << 0x10 - sVar19;
  uVar15 = uVar21 & 0xffff0000 | (uint)uVar33;
  uVar33 = uVar33 + uVar31 * 4;
  uVar35 = (uVar20 & 0xfff0000) << 4;
  uVar21 = uVar13 * 2;
  uVar22 = uVar22 ^ 2;
  bVar9 = (byte)uVar33;
  bVar18 = (char)(uVar28 >> 8) - bVar9;
  uVar40 = uVar22 * -0x425a25aa;
  uVar20 = uVar13 * 0x1fb40a64 & 0xffff0000;
  uVar28 = uVar20;
  if (-1 < (int)(uVar20 + uVar22 * 0x425a25aa)) {
    uVar28 = uVar40;
  }
  bVar8 = (bVar18 & 0x1f) % 0x11;
  uVar20 = (uint)(uVar20 < uVar40) << 0x10 | (uint)((int)uVar40 < (int)uVar20) << 8;
  uVar31 = (ushort)(uVar20 << bVar8) | (ushort)(uVar20 >> 0x11 - bVar8);
  uVar12 = (ushort)uVar21;
  uVar20 = (uint)(ushort)(uVar12 << 0xd | uVar12 >> 3);
  bVar8 = (byte)((uint)bVar18 & 0xffffff0f);
  uVar12 = (ushort)uVar28 >> bVar8 | uVar31 << 0x10 - bVar8;
  bVar24 = (byte)((uint)uVar12 >> 8);
  uVar13 = uVar28 & 0xffff0000 | (uint)uVar31;
  if ((short)(uVar31 + (uVar12 & 0xff |
                       (ushort)(byte)(bVar24 >> (bVar8 & 7) | bVar24 << 8 - (bVar8 & 7)) << 8)) < 0)
  {
    uVar20 = uVar40 & 0xffff;
  }
  uVar27 = ((uint3)(uVar13 >> 8) & 0xff00) >> 8 | (uint3)uVar13 & 0xff00 |
           (uint3)(((uint)uVar31 << 0x18) >> 8);
  uVar40 = (uint)uVar33 & 0xffffff00;
  bVar8 = (char)((uVar28 & 0xffff0000) >> 0x18) << 1;
  bVar9 = ~bVar9 - 1;
  uVar12 = (ushort)uVar40 | (ushort)bVar9;
  uVar33 = (ushort)(uVar27 >> 8);
  uVar31 = (ushort)CONCAT31(uVar27,bVar8) & 0x7575;
  uVar22 = uVar22 * 0x7b4bb4ac;
  uVar27 = (uint3)(uVar35 >> 8) | (uint3)(byte)(uVar12 + uVar31 >> 8);
  uVar28 = (uint)(ushort)((ushort)uVar20 & 0xfffe | (ushort)CARRY2(uVar12,uVar31));
  if ((short)(uVar40 | bVar9) < 1) {
    uVar28 = uVar40 | bVar9;
  }
  uVar31 = (ushort)((((uint)(ushort)(short)(char)bVar8 & 0x3fff) << 0x10 |
                    (uint)(ushort)(CONCAT11((char)(uVar40 >> 8) + '!',bVar9) * 0x5955)) /
                   ((uint)(ushort)(short)(char)bVar8 | 0xc000));
  uVar12 = ((ushort)uVar22 | (ushort)((uVar20 & 1) != 0) | 0x9d58) - 0x5b6;
  uVar31 = uVar31 << (bVar8 & 0xf) | uVar31 >> 0x10 - (bVar8 & 0xf);
  cVar10 = (char)((uint)uVar31 >> 8);
  uVar31 = uVar31 & 0xff | (ushort)(byte)-cVar10 << 8;
  uVar20 = (int)(short)uVar31 * (int)(short)uVar31;
  uVar40 = (uVar21 & 0xffff0000 | uVar28) & (uVar22 & 0xffff0000 | (uint)uVar12);
  uVar22 = (uVar22 & 0xffff0000 | (uint)(uVar12 & 0xefff)) << 1 | uVar22 >> 0x1f;
  uVar21 = 0;
  if (uVar22 != 0) {
    while ((uVar22 >> uVar21 & 1) == 0) {
      uVar21 = uVar21 + 1;
    }
  }
  uVar13 = (CONCAT31((int3)((uVar20 & 0xffff) >> 8),0x75) | (uint)uVar33 << 0x10) >> 6;
  uVar35 = (uVar35 | (uint)(ushort)((ushort)CONCAT31(uVar27,cVar10 == '\0') >> 1 |
                                   (ushort)(cVar10 == '\0') << 0xf) & 0xffffff00 |
           (uint)((ushort)((~((short)(((ushort)(uVar15 << sVar19) |
                                      (ushort)(uVar15 >> 0x20 - sVar19)) + 1 |
                                     (ushort)((uint)bVar18 & 0xffffff0f) | (ushort)bVar18 << 8) >>
                             (bVar8 & 0x1f)) | (ushort)(1 << (uVar28 & 0x1f))) << 1 |
                          (ushort)(uVar20 & 0xffff) >> 0xf) != 0)) * 2;
  uVar28 = (uint)((int)uVar40 < 0);
  uVar15 = uVar21 + uVar13 + uVar28;
  uVar40 = uVar40 << 1 | (uint)((int)uVar40 < 0);
  if ((!CARRY4(uVar21,uVar13) && !CARRY4(uVar21 + uVar13,uVar28)) && uVar15 != 0) {
    uVar40 = (uint)uVar27 << 0xd;
  }
  uVar2 = (ulonglong)((uint)uVar27 << 0xd | 0xc0000000);
  uVar3 = CONCAT44(CONCAT22((undefined2)((char)bVar8 >> 7),
                            (ushort)(uVar20 >> 0x10) & 0xff |
                            (ushort)((byte)(uVar20 >> 0x18) & 0xfe) << 8) * 0x200 + -1,
                   uVar15 & 0xffff | (((uint)uVar33 << 0x10) >> 0x16) << 0x10) & 0x3fffffffffffffff;
  uVar4 = uVar3 / uVar2;
  uVar21 = (uint)(uVar3 % uVar2);
  uVar20 = (uint)uVar4 & 0xa62a65bb ^ uVar40;
  if (0 < (int)uVar20) {
    uVar21 = uVar40 & 0xffff;
  }
  uVar35 = uVar35 & 0xffff0000 |
           (uint)CONCAT11(((byte)(uVar35 >> 8) | (byte)uVar4) + 0x42,(char)uVar35);
  uVar28 = ((uint)CONCAT21((short)(uVar20 >> 0x10),
                           ((((short)uVar22 + 0xdacbU & 0xfff) + 0x2d2 & 0x1000) != 0) << 4 | 0x40U
                           | bVar45 << 2) << 8 | 0x200) ^ (uVar15 & 0xffff0000 | uVar13 & 0xffff);
  uVar26 = uVar35 ^ (uint)(uVar28 == uVar35) * (uVar35 ^ uVar28);
  uVar28 = uVar28 ^ (uint)(uVar28 == uVar35) * (uVar28 & uVar26);
  uVar20 = uVar28 & 0xffff0000;
  uVar28 = (int)(short)uVar28 * (int)(short)((ushort)uVar21 & 0xf700) & 0xffff;
  uVar31 = ~((short)uVar26 + 0xefaeU);
  uVar21 = ((uint)uVar27 & 0x7fff8) << 0xd | 0xc0000000 |
           (uint)((ushort)(uVar21 >> 8) & 0xff & (short)uVar22 + 0x6d9dU);
  cVar10 = (char)((uint)uVar31 >> 8);
  if (!SCARRY1(cVar10,-0x78)) {
    uVar40 = uVar20 | uVar28;
  }
  uVar12 = (ushort)uVar28;
  uVar25 = (ushort)(uVar13 & 0xffff);
  uVar39 = uVar25 ^ (ushort)(uVar12 == uVar25) * (uVar25 ^ (ushort)uVar40);
  uVar22 = uVar15 & 0xffff0000 | (uint)uVar39;
  uVar13 = -(uVar26 & 0xffff0000 |
            (uint)(ushort)(uVar31 & 0xff | (ushort)(byte)(cVar10 + 0x88) << 8));
  uVar28 = uVar22 << 1;
  uVar31 = (ushort)uVar28;
  uVar33 = (ushort)((int)uVar22 < 0);
  uVar22 = (uVar40 + 0xc1a9ce4b + uVar13 & 0xffffff00) + 0x844ef54a;
  uVar20 = ((uVar40 ^ (uint)(((uVar20 | (ushort)(uVar12 ^ (ushort)(uVar12 == uVar25) *
                                                          (uVar12 & uVar39))) ^ 0x300) == uVar40) *
                      (uVar40 ^ 0xc1c30000)) + 1) * 2;
  uVar12 = CONCAT11((char)(uVar22 >> 8) << 1,(char)uVar22) & ~(1 << (uVar31 & 0xf | uVar33));
  uVar35 = uVar21 + 0xcaa98f47;
  bVar18 = ((byte)uVar35 & 0x1f) % 0x11;
  uVar12 = (ushort)(CONCAT12(0x355670b9 < uVar21 || 0xfffffffe < uVar21 + 0xcaa98f46,uVar12) >>
                   bVar18) | uVar12 << 0x11 - bVar18;
  uVar21 = uVar35 & 0xffff;
  uVar15 = uVar28 & 0xffff0000 | (uint)(ushort)((short)(uVar31 | uVar33) >> 0x10);
  uVar40 = uVar35 & 0xffffff0f;
  uVar28 = (uVar13 >> 1 & 0x7fff) >> 8;
  if (!SBORROW2(uVar12,0x111a)) {
    uVar28 = uVar21;
  }
  uVar13 = uVar21 ^ (uint)(uVar28 == uVar21) * (uVar21 ^ uVar15);
  return CONCAT44(in_EDX,(uVar28 ^ (uint)(uVar28 == uVar21) * (uVar28 & uVar13)) +
                         (uVar22 & 0xffff0000 | (uint)(ushort)(uVar12 + 0xeee6)) + uVar40 + uVar13 +
                         ((uint)(ushort)(0U >> (sbyte)uVar40 | (short)uVar40 << 0x10 - (sbyte)uVar40
                                        ) | 0xc1c30000) +
                         (uVar20 & 0xffff0000 |
                         (uint)(ushort)((ushort)uVar20 >> ((byte)uVar35 & 0x1f))) + uVar15 +
                         0x5bfab9a4);
}



// WARNING: Removing unreachable block (ram,0x0804d4cb)
// WARNING: Removing unreachable block (ram,0x0804cdea)
// WARNING: Removing unreachable block (ram,0x0804d84c)
// WARNING: Removing unreachable block (ram,0x0804d888)
// WARNING: Removing unreachable block (ram,0x0804cdaf)
// WARNING: Removing unreachable block (ram,0x0804d0dc)

undefined8 log_size_10_var_005(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint5 uVar5;
  uint3 uVar6;
  char cVar7;
  byte bVar8;
  undefined uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  sbyte sVar17;
  byte bVar18;
  sbyte sVar19;
  ushort uVar20;
  ushort uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  byte bVar25;
  ushort uVar26;
  short sVar27;
  undefined4 in_EDX;
  uint uVar28;
  undefined2 uVar30;
  uint uVar29;
  ushort uVar31;
  byte bVar35;
  short sVar32;
  uint uVar33;
  uint uVar34;
  ushort uVar36;
  uint uVar37;
  uint uVar38;
  bool bVar39;
  bool in_PF;
  
  uVar22 = 0x1f;
  while (0xb42ef4baU >> uVar22 == 0) {
    uVar22 = uVar22 - 1;
  }
  uVar13 = 1 << (uVar22 & 0x1f) | 0xfa710047;
  uVar10 = (short)(char)uVar13 * (short)(char)uVar13;
  uVar34 = (uint)(byte)uVar10;
  uVar22 = (uVar13 & 0xffff0000 | (uint)uVar10 & 0xffffff00 | uVar34) >> 1;
  bVar8 = (byte)(uVar22 >> 8);
  cVar7 = (char)uVar22;
  bVar25 = cVar7 + 0x8a;
  uVar23 = (uint)bVar25 | 0xacaaa200;
  uVar10 = (~(ushort)(1 << ((uVar34 & 0x3e) >> 1)) & 0xed00) * 2 + 1;
  uVar22 = (uVar13 & 0xfffe0000) >> 1;
  uVar34 = (uint)CONCAT11(bVar8 + 0xa2,cVar7);
  if (!in_PF) {
    uVar34 = 0xed00;
  }
  uVar21 = uVar10 & 0xff;
  uVar10 = uVar21 | (ushort)(byte)(((char)((uint)uVar10 >> 8) + 't') - (0x5d < bVar8)) << 8;
  sVar17 = (sbyte)uVar21;
  uVar37 = 0x6ee2ed00 << sVar17 | uVar23 >> 0x20 - sVar17;
  uVar24 = (uint)(ushort)((ushort)uVar23 >> 1 | (ushort)((bVar25 & 1) != 0) << 0xf) | 0xacaa0000;
  uVar38 = uVar22 | uVar34 & 0xffffff00 | (uint)(byte)((char)uVar34 + (char)(uVar34 >> 8));
  uVar23 = uVar37 >> 1;
  uVar34 = (uVar23 & 0xffff0000 | (uint)((ushort)uVar23 & 0x7fff)) >> 1;
  uVar13 = (uint)((short)(ushort)uVar23 < 0) << 0x1f;
  uVar28 = uVar34 | uVar13;
  uVar33 = uVar24 + 0xf41cd2cc;
  if (uVar24 < 0xbe32d34 || uVar33 == 0) {
    uVar28 = (uVar23 & 0xfffe0000) >> 1 | uVar13 | uVar34 & 0xffff;
  }
  uVar13 = 0x6ee2ed00 << sVar17 | uVar38 >> 0x20 - sVar17;
  sVar27 = (short)uVar38;
  uVar22 = uVar22 | uVar28 & 0xffff;
  uVar23 = uVar28 & 0xffff0000 | (uint)(ushort)((short)uVar28 + sVar27);
  uVar34 = (uint)uVar10;
  if (!SCARRY2((short)uVar28,sVar27)) {
    uVar34 = 0x16003020;
  }
  if (!in_PF) {
    uVar34 = uVar33 & 0xffff0000 | (uint)((ushort)uVar33 & uVar10);
  }
  uVar38 = 1 << (uVar13 & 0x1f) | 0x16003020;
  if (uVar22 < uVar23) {
    uVar37 = uVar37 & 0xffff0000 | uVar38 & 0xffff;
  }
  uVar22 = uVar22 ^ 0xf4;
  if ((char)((byte)(uVar28 & 0xffff) ^ 0xf4) < '\0') {
    uVar13 = uVar34 << 1;
  }
  uVar21 = (ushort)(uVar37 >> 0x11);
  bVar25 = (byte)(uVar34 << 1) & 0x1f;
  uVar28 = uVar22 >> bVar25 | uVar22 << 0x20 - bVar25;
  uVar24 = CONCAT22(uVar21,(short)(uVar37 >> 1) * 2) | 0x80000000;
  uVar20 = (short)(uVar13 * 0x561cbd46) + 0x26c5;
  bVar25 = (byte)uVar20 & 0x1f;
  uVar38 = uVar38 >> bVar25 | uVar24 << 0x20 - bVar25;
  bVar25 = ((byte)uVar20 & 0x1f) % 0x11;
  uVar34 = (uint)((char)(uVar23 + 0xead0d4bc >> 8) != '\0') << 0x10 | uVar28 & 0xffff;
  uVar11 = (ushort)(uVar34 >> bVar25) | (ushort)(uVar34 << 0x11 - bVar25);
  uVar28 = uVar28 & 0xfeff0000;
  sVar27 = (short)uVar38;
  uVar10 = sVar27 * 2;
  bVar25 = (byte)((uint)(ushort)(((ushort)uVar22 | 0x4e6f) - 0xc07 >> 1) >> 8);
  if (sVar27 < 0) {
    bVar25 = (byte)((uint)uVar20 >> 8);
  }
  uVar22 = uVar13 * 0x561cbd46 & 0xffff0000 | (uint)uVar20;
  if (!in_PF) {
    uVar22 = (int)(uVar28 | uVar11) >> 0x1f;
  }
  uVar36 = ((ushort)(uVar24 >> 1) | 0x100) + (short)uVar22;
  bVar25 = (byte)((int)uVar28 >> 0x1f) | bVar25;
  uVar11 = ~uVar11 & 0xff;
  uVar26 = uVar11 | (ushort)('\0' < (char)bVar25) << 8;
  uVar20 = (ushort)(uVar13 >> 5);
  if (-1 < (char)bVar25) {
    uVar20 = uVar10;
  }
  uVar12 = (short)(char)uVar11 * (short)(char)((uint)uVar26 >> 8);
  uVar34 = (uVar38 & 0xffff0000 | (uint)uVar10) * -0x761d1413 & 0xffffff00;
  bVar25 = (byte)uVar22 & 0x1f;
  uVar22 = uVar22 >> bVar25 | uVar34 << 0x20 - bVar25;
  lVar4 = (longlong)(int)uVar22 * 0x4bcce275;
  iVar14 = (int)((ulonglong)lVar4 >> 0x20);
  uVar31 = (ushort)lVar4;
  uVar11 = uVar20 >> 1 | 0x8000;
  if (iVar14 != 0 && iVar14 != -1) {
    uVar11 = uVar31;
  }
  uVar20 = uVar36 ^ (ushort)(uVar12 == uVar36) * (uVar36 ^ uVar11);
  uVar28 = uVar28 | (ushort)(uVar12 ^ (ushort)(uVar12 == uVar36) * (uVar12 & uVar20));
  uVar13 = uVar28 << 1;
  uVar38 = (((((uint)uVar21 & 0xfffe) << 0x10 | 0x80000000) >> 1 | (uint)uVar20) - (int)lVar4) -
           (uint)((int)uVar28 < 0);
  bVar8 = ~(byte)uVar13;
  uVar23 = (uint)(byte)(-(char)uVar22 >> (-(char)uVar22 & 0x1fU)) & 0xffffff0f;
  sVar17 = (sbyte)uVar23;
  uVar21 = ((ushort)(byte)~(byte)(uVar22 >> 8) << 8 | (ushort)uVar23) << sVar17 |
           ((ushort)uVar34 | 0xda3a) >> 0x10 - sVar17;
  uVar10 = (short)uVar38 * 0x1ef3 - ((uVar10 - uVar26) + uVar31 + 0x60c5);
  bVar25 = (byte)((uint)(ushort)(uVar31 + 0xde64) >> 8);
  uVar13 = uVar13 & 0xffffff00 | (uint)(byte)(bVar8 ^ (bVar8 == bVar25) * (bVar8 & bVar25));
  uVar34 = ((int)(uint)bVar8 >> 2) << 1;
  bVar25 = ((byte)uVar21 & 0x1f) % 9;
  bVar18 = (byte)((uint)uVar21 >> 8);
  uVar22 = uVar22 & 0xffff0000 |
           (uint)(ushort)(uVar21 & 0xff |
                         (ushort)(byte)(bVar18 >> bVar25 | bVar18 << 9 - bVar25) << 8);
  uVar23 = uVar22 ^ (uint)(uVar13 == uVar22) * (uVar22 ^ uVar13);
  uVar13 = uVar13 ^ (uint)(uVar13 == uVar22) * (uVar13 & uVar23);
  uVar22 = 0;
  if (uVar13 != 0) {
    while ((uVar13 >> uVar22 & 1) == 0) {
      uVar22 = uVar22 + 1;
    }
  }
  bVar35 = (byte)uVar34;
  uVar21 = (short)(char)bVar35 * (short)(char)(uVar23 >> 8);
  iVar14 = (uint)(ushort)(uVar21 * 0x20 | uVar21 >> 0xc) + 0x3ad4236d;
  bVar25 = (char)uVar22 + 1;
  uVar24 = uVar22 & 0xffff0000 |
           (uint)CONCAT11((char)((uVar22 & 0xffffff00) >> 8) + (char)((uint)iVar14 >> 8),bVar25);
  uVar28 = (uint)(ushort)((short)((ushort)(uVar22 & 0xffffff00) | (ushort)bVar25) >> 0xf) << 0x10;
  uVar33 = uVar24 ^ 0x25;
  bVar25 = (byte)uVar33;
  bVar18 = bVar25 & 7;
  uVar21 = (ushort)(byte)(bVar35 >> bVar18 | bVar35 << 8 - bVar18) | 0x6000;
  bVar25 = bVar25 & 0x1f;
  uVar5 = CONCAT14((uVar28 >> 0x1c & 1) != 0,uVar24) ^ 0x25;
  uVar24 = (uint)(uVar5 >> bVar25) | (int)uVar5 << 0x21 - bVar25;
  uVar22 = uVar24 + 0xa23aa639 + ((int)(uint)bVar8 >> 2) * 8;
  uVar26 = (ushort)iVar14;
  uVar36 = uVar21 ^ (ushort)(uVar26 == uVar21) * (uVar21 ^ (ushort)uVar34);
  uVar20 = (ushort)uVar34;
  if (uVar21 <= uVar26) {
    uVar20 = uVar36;
  }
  uVar37 = uVar24 & 0xffff00ff;
  bVar25 = (byte)(uVar22 >> 8) | 0x9c;
  uVar16 = uVar28 & 0xefff0000 | (uint)(uVar36 >> 2);
  cVar7 = (char)uVar22;
  uVar26 = CONCAT11(bVar25 + cVar7,cVar7);
  uVar21 = (uVar11 << ((byte)uVar23 & 0x1f)) + (short)uVar13 + 1;
  if (SCARRY1(bVar25,cVar7)) {
    uVar21 = uVar26;
  }
  bVar18 = (byte)uVar37;
  uVar26 = uVar26 >> (bVar18 & 0x1f);
  uVar38 = ~((uVar38 & 0xffff0000 | (uint)(ushort)(uVar10 ^ (uVar10 >> 0xd & 1) << 0xd)) +
             (uVar34 | uVar28) >> 0x18 | uVar33 << 8);
  uVar13 = uVar37 * 0x2bec64f3;
  bVar8 = (byte)uVar13;
  bVar35 = (byte)uVar26;
  bVar25 = bVar35 ^ (bVar8 == bVar35) * (bVar35 ^ (byte)((uint)uVar26 >> 8));
  uVar10 = uVar26 & 0xff00 | (ushort)bVar25;
  bVar25 = bVar8 ^ (bVar8 == bVar35) * (bVar8 & bVar25);
  uVar23 = uVar13 & 0xffffff00 | (uint)bVar25;
  uVar34 = uVar16 << (bVar18 & 0x1f) | uVar16 >> 0x20 - (bVar18 & 0x1f);
  if ((char)(bVar8 - bVar35) < '\0') {
    uVar34 = uVar23;
  }
  uVar38 = uVar38 & 0xffff0000 | (uint)(ushort)((short)uVar38 << 1 | ~uVar20 >> 0xf);
  uVar11 = (short)uVar34 - (short)uVar23 & 0xff;
  uVar23 = uVar22 & 0xffff0000 |
           (uint)(ushort)(uVar10 ^ (ushort)((ushort)((uVar13 & 0xffff0000 |
                                                     (uint)(ushort)(CONCAT11((byte)((uVar13 & 
                                                  0xffffff00) >> 8) >> 1,bVar25) | 0x8000)) >> 1) ==
                                           uVar10) *
                                   (uVar10 ^ (uVar11 | (ushort)((bVar25 & 1) == 0) << 8)));
  uVar22 = uVar24 & 0xffff0000 |
           (uint)(ushort)((ushort)uVar37 >> (bVar18 & 0xf) | (ushort)uVar37 << 0x10 - (bVar18 & 0xf)
                         );
  uVar13 = uVar22 + uVar23 + 1;
  iVar14 = (int)((ulonglong)((longlong)(int)uVar23 * 0x187fe9ff) >> 0x20);
  if (iVar14 == 0 || iVar14 == -1) {
    uVar13 = uVar13 & 0xffff0000 | (uint)(ushort)((short)(uVar22 << 4) * 2);
  }
  uVar10 = (short)uVar13 + (uVar21 & 0x7fff);
  uVar1 = (ulonglong)(uVar13 & 0xffff0000 | (uint)uVar10 | 0xc0000000);
  uVar2 = CONCAT44(uVar23,(int)(short)((short)((longlong)(int)uVar23 * 0x187fe9ff) + uVar11)) &
          0x3fffffffffffffff;
  uVar13 = (uint)(uVar2 / uVar1);
  uVar21 = (uVar21 & 0x7fff) * 2;
  bVar25 = (byte)uVar10;
  uVar22 = ((uint)(uVar2 % uVar1) & 0xfffffffb) << (bVar25 & 0x1f) |
           uVar13 >> 0x20 - (bVar25 & 0x1f);
  uVar13 = uVar13 | 0x840cf7fe;
  cVar7 = (char)uVar22;
  uVar10 = (short)(char)uVar13 * (short)cVar7;
  uVar34 = uVar34 & 0xffff0000 | (uint)CONCAT11((char)((uint)uVar10 >> 8),~(byte)uVar11 + cVar7);
  uVar10 = (uVar10 & 0xff) * ((ushort)uVar22 & 0xff00 | (ushort)(byte)~(byte)uVar11);
  uVar22 = uVar38 >> (bVar18 & 0x1f) | uVar38 << 0x20 - (bVar18 & 0x1f);
  if (uVar21 == 0x4de5) {
    uVar22 = uVar34;
  }
  uVar11 = uVar10 & 0xff;
  uVar10 = (ushort)(byte)(((char)((uint)uVar10 >> 8) - bVar25) -
                         (0x4de5 < uVar21 || 0xfffe < (ushort)(uVar21 + 0xb21a))) << 8;
  uVar23 = (uint)(uVar11 | uVar10);
  uVar34 = uVar34 ^ 0x48cf5149;
  uVar38 = uVar23 & 0xff;
  uVar23 = uVar13 & 0xffff0000 |
           (uint)(ushort)(uVar11 | (ushort)(byte)((char)(uVar23 >> 8) << (bVar25 * '\x02' & 0x1f))
                                   << 8) & 0xffffff00 |
           (uint)(byte)((char)uVar11 << 1 | (char)uVar11 < '\0');
  uVar13 = 0;
  if (uVar22 != 0) {
    while ((uVar22 >> uVar13 & 1) == 0) {
      uVar13 = uVar13 + 1;
    }
  }
  uVar22 = uVar34 & 0xffffff00;
  uVar24 = uVar38 ^ (uint)(uVar23 == uVar38) * (uVar38 ^ uVar13 & 0xffffff0f);
  uVar1 = (longlong)
          (int)(uVar13 & 0xffff0000 |
               ((uVar13 & 0xffff |
                (uint)(ushort)~CONCAT11((((byte)((ulonglong)
                                                 (uVar23 ^ (uint)(uVar23 == uVar38) *
                                                           (uVar23 & uVar24)) * (ulonglong)uVar24 >>
                                                0x28) >> 1) - (char)(uVar22 >> 8)) + -0x1f,
                                        (uVar10 & 0x400) == 0) << 0x10) & 0x3fffff0f) /
               (uVar24 & 0xffff | 0xc000) & 0xffff) *
          (longlong)(int)((uVar22 | (byte)((char)uVar34 + 0x55)) >> 1);
  uVar10 = (ushort)(uVar1 >> 0x20);
  uVar38 = (uint)((ushort)(uVar1 >> 8) & 0xff | 0x8010);
  uVar28 = uVar38 | 0xc0000000;
  uVar1 = (ulonglong)(CONCAT22((short)(uVar1 >> 0x30),uVar10 << 4 | uVar10 >> 0xc) & 0x3fffffff) <<
          0x20 | uVar1 & 0xffffffff;
  uVar2 = uVar1 / (ulonglong)uVar28;
  bVar25 = (byte)(uVar2 >> 8);
  cVar7 = (char)uVar2;
  uVar23 = CONCAT22((short)(uVar2 >> 0x10),CONCAT11(bVar25 >> 5 | bVar25 << 3,cVar7));
  uVar22 = (uVar13 & 0xffff0000) + (int)(uVar1 % (ulonglong)uVar28);
  bVar25 = ((byte)uVar22 & 0x1f) % 9;
  uVar34 = uVar23 & 0xffffff00;
  uVar10 = (ushort)uVar34 |
           (ushort)(byte)(cVar7 << bVar25 |
                         (byte)(CONCAT11(((uVar13 & 0xffff0000) >> (uVar38 & 0x1f) & 1) != 0,cVar7)
                               >> 9 - bVar25));
  uVar21 = (ushort)uVar22;
  uVar11 = uVar21 ^ (ushort)(uVar10 == uVar21) * (uVar21 ^ uVar10);
  uVar6 = (uint3)(uVar34 >> 8) & 0xffff00;
  bVar25 = ((byte)uVar11 & 0x1f) % 0x11;
  uVar20 = uVar11 << bVar25 | (ushort)(CONCAT12(uVar10 < uVar21,uVar11) >> 0x11 - bVar25);
  iVar14 = 0;
  if (uVar28 != 0) {
    while ((uVar28 >> iVar14 & 1) == 0) {
      iVar14 = iVar14 + 1;
    }
  }
  bVar25 = (char)uVar20 + 0xb7;
  uVar13 = (uint)uVar20 & 0xffffff00;
  uVar28 = uVar22 & 0xffff0000 | uVar13 | (uint)bVar25;
  uVar20 = (ushort)(byte)((byte)(uVar38 >> 8) >> 1) << 8 | 0x8000;
  iVar14 = 0;
  if (uVar28 != 0) {
    while ((uVar28 >> iVar14 & 1) == 0) {
      iVar14 = iVar14 + 1;
    }
  }
  uVar38 = (int)(short)(uVar6 >> 8) >> 0xf;
  bVar18 = (byte)(uVar13 >> 8);
  bVar8 = bVar18 - 0x33;
  if (SCARRY1(bVar18,-0x33) != (char)bVar8 < '\0') {
    uVar20 = (ushort)uVar38;
  }
  iVar15 = (int)(short)~(ushort)CONCAT31(uVar6 | (byte)((byte)(uVar34 >> 8) ^
                                                       (byte)((ushort)(uVar10 == uVar21) *
                                                              (uVar10 & uVar11) >> 8)),
                                         SBORROW2(uVar10,uVar21));
  lVar4 = (longlong)iVar15 * (longlong)iVar15;
  uVar11 = (short)lVar4 >> 0x17;
  uVar5 = CONCAT14((bVar25 & 1) != 0,uVar38 >> 8) & 0xff000000ff;
  uVar38 = (int)uVar5 << 0xe;
  bVar25 = (byte)(CONCAT11(bVar8,bVar25) >> 1) >> 4;
  uVar37 = uVar38 & 0xffff0000;
  uVar30 = (undefined2)((ulonglong)lVar4 >> 0x30);
  sVar27 = -(uVar20 & 0xff00 | (ushort)(byte)((ulonglong)lVar4 >> 0x20) & 0xffdf);
  uVar34 = CONCAT22(uVar30,sVar27) & 0xffffff00 | (uint)(byte)sVar27 | 0xc0;
  uVar26 = uVar11 & 0x3fff;
  uVar10 = (ushort)(byte)uVar34;
  uVar21 = uVar26 / uVar10;
  uVar34 = CONCAT22(uVar30,(ushort)uVar34 | 1 << (uVar21 & 0xf)) >> 2;
  uVar10 = (uVar21 & 0xff | uVar26 % uVar10 << 8) << 1 | uVar20 >> 0xf;
  uVar13 = ((0x7a0e64da - ((uVar24 | 0xc000) >> 5 | uVar23 << 0x1c)) - (uint)(0x32 < bVar18) &
            0xffff0000 | (uint)(byte)(uVar20 >> 8) << 1) + 0x271784a4;
  uVar20 = (ushort)(iVar14 >> 1);
  sVar32 = (short)(iVar14 >> 0x11);
  uVar21 = uVar20 ^ (ushort)(uVar10 == uVar20) *
                    (uVar20 ^ ((ushort)uVar34 & 0xff00 | (ushort)(byte)((char)uVar34 << 4)));
  uVar23 = (uVar13 & 0xffff0000 | (uint)(ushort)((short)uVar13 * 0xc43)) << 1;
  uVar26 = (short)uVar23 + 1;
  uVar23 = uVar23 & 0xffff0000;
  bVar18 = (byte)(((((ushort)bVar8 & 0xfe) << 8) >> 1 | (ushort)bVar25) >> 1);
  bVar8 = bVar18 & 0xf;
  sVar27 = (short)(uVar21 << 1 | (ushort)((short)uVar21 < 0)) >> 7;
  uVar16 = CONCAT22((short)((ulonglong)lVar4 >> 0x10),
                    uVar10 ^ (ushort)(uVar10 == uVar20) * (uVar10 & uVar21)) &
           CONCAT22(sVar32,sVar27);
  uVar28 = (uint)(ushort)(CONCAT11(1,bVar18) << 5);
  uVar10 = (uVar26 >> bVar8 | uVar26 << 0x10 - bVar8) & 0x6ef0 | 0x3327;
  uVar24 = (uint)(ushort)(uVar10 << 1);
  uVar13 = (uVar16 & 0xffff) * uVar28;
  uVar33 = uVar13 & 0xffff;
  uVar34 = CONCAT22((ushort)(uVar37 >> 0x10) ^ 0xc000,0x66d2) + 0xcebaf176;
  uVar22 = (uint)CONCAT11(((uVar22 & 0xffff0000 | uVar28) & uVar34) != 0,(char)(uVar13 >> 0x10));
  bVar39 = (char)((char)(uVar33 >> 8) + '2') < '\0';
  if (bVar39) {
    uVar22 = uVar34 & 0xffff;
  }
  uVar13 = (uVar16 & 0xffff0000 | (uint)CONCAT11((uVar34 >> (uVar24 & 0x1f) & 1) == 0,(char)uVar33))
           ^ 1 << (uVar34 & 0x1f);
  uVar29 = ((uint)(CONCAT14(bVar39,uVar22) >> 0x1e) | uVar22 << 3) + (uVar23 | uVar24);
  uVar22 = (uint)(ushort)-(((ushort)uVar38 | (ushort)(uint)(uVar5 >> 0x13)) << bVar25 |
                          uVar11 >> 0x10 - bVar25);
  uVar16 = uVar22 & 0xffffff00;
  uVar24 = uVar13 << 2;
  uVar28 = (uVar24 & 0xffff | uVar13 >> 0x1e) * ((int)(char)uVar34 & 0xffffU);
  uVar24 = uVar24 & 0xffff0000;
  bVar25 = (byte)((uVar22 & 0xfe) >> 1);
  uVar33 = (uint)(bVar25 >> (bVar25 & 0x1f));
  uVar37 = uVar37 | uVar16 | uVar33;
  uVar21 = CONCAT11((byte)(uVar34 >> 8) >> 1,(char)uVar34) * 2 + 0x4b31;
  uVar22 = ((CONCAT22(sVar32,sVar27) & 0x7fff8000) << 1 | 0xd56f) - (uVar24 | uVar28 & 0x96be);
  uVar13 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8;
  uVar38 = (uVar22 & 0xff00) << 8;
  bVar25 = (byte)(uVar16 >> 8);
  uVar23 = uVar23 | (ushort)(uVar10 * -0x3e33) | 0xc0000000;
  uVar1 = (CONCAT44((uVar28 >> 0x10) << 0x1a | (uVar29 & 0xffc00000) >> 6 |
                    (uint)(ushort)((ushort)((uVar29 & 0xffff0000 | uVar28 >> 0x10) >> 6) | 0x400),
                    uVar24 | uVar28 & 0xffff) & 0x3fffffffffff96be) / (ulonglong)uVar23;
  uVar34 = 0x1f;
  if (uVar37 != 0) {
    while (uVar37 >> uVar34 == 0) {
      uVar34 = uVar34 - 1;
    }
  }
  uVar24 = (int)(((ulonglong)(uVar34 & 0x3fffffff) << 0x20 | uVar1 & 0xffffffff) %
                (ulonglong)(uVar13 | uVar38 | uVar22 * 0x1000000 | 0xc0000000)) << (bVar25 & 0x1f);
  uVar10 = (ushort)uVar13;
  uVar13 = uVar38 | uVar22 * 0x1000000 | 0xc0000000;
  uVar38 = (uint)(ushort)(uVar10 << 0xc | uVar10 >> 4);
  uVar28 = uVar24 & 0xffff;
  uVar34 = uVar33 << 0x19 | (uint)(CONCAT14(uVar34 < (uint)uVar1,uVar37) >> 8) & 0xffff0000 | uVar28
  ;
  bVar8 = (byte)uVar28;
  uVar33 = uVar23 >> (bVar8 & 0x1f);
  uVar10 = (short)-uVar23 * (short)((int)uVar24 >> 1);
  uVar22 = 0x1f;
  if (uVar34 != 0) {
    while (uVar34 >> uVar22 == 0) {
      uVar22 = uVar22 - 1;
    }
  }
  bVar18 = (byte)((uint)uVar10 >> 8);
  bVar35 = ((byte)((uint)uVar21 >> 8) | bVar18) & (byte)(uVar28 >> 8);
  uVar34 = (uint)CONCAT11(bVar35 != 0,bVar8);
  uVar11 = (short)uVar33 << 1 | (ushort)uVar28 >> 0xf;
  uVar24 = (uint)uVar11;
  uVar23 = -uVar23 & 0xffff0000 | (uint)(ushort)(uVar10 & 0xff | (ushort)(byte)(bVar18 + 0x53) << 8)
  ;
  uVar10 = (ushort)uVar28 & ~(ushort)(1 << (uVar38 & 0x1f)) & 0xa6c6;
  uVar28 = (uint)CONCAT11(bVar35,(char)((byte)uVar21 | bVar25) >> (bVar8 & 0x1f)) * 0x800;
  if (-1 < (short)uVar11) {
    uVar24 = uVar28 & 0xffff;
  }
  uVar24 = uVar33 & 0xffff0000 | uVar24;
  iVar14 = uVar23 * 2;
  uVar33 = (uint)(CONCAT14((uVar22 >> 0x18 & 1) != 0,uVar24) >> (bVar8 & 0x1f)) |
           uVar24 << 0x21 - (bVar8 & 0x1f);
  uVar24 = (uint)(byte)(bVar8 >> (bVar8 & 7) | bVar8 << 8 - (bVar8 & 7));
  uVar28 = uVar28 + uVar23 * -2;
  uVar23 = (uVar13 | uVar38) & 0x6029d68c;
  if (uVar23 == 0) {
    uVar28 = uVar34 & 0xff00 | uVar24;
  }
  iVar15 = (uVar34 & 0xffffff00 | uVar24) + 1;
  uVar21 = (ushort)(uVar33 >> 1);
  bVar25 = (char)((uint)iVar15 >> 8) << 1;
  bVar8 = (byte)iVar15;
  uVar11 = CONCAT11(bVar25 ^ ((byte)iVar14 == bVar25) * (bVar25 ^ bVar8),bVar8);
  uVar20 = uVar21 & 0x7fff ^ 1 << (uVar21 & 0xf);
  uVar38 = (uint)(ushort)(uVar11 << (bVar8 & 0xf) | uVar11 >> 0x10 - (bVar8 & 0xf)) ^ 0x26;
  bVar25 = (byte)uVar38 & 0xf;
  uVar21 = uVar10 << bVar25 | uVar10 >> 0x10 - bVar25;
  uVar34 = CONCAT22((ushort)((uint)iVar14 >> 0x11),(short)uVar23 + -0x1d6c + uVar10 * 8) ^
           1 << ((uint)uVar20 & 0x1f);
  uVar13 = uVar13 & 0x60290000 | uVar23 >> 1 & 0x7fff;
  uVar10 = (ushort)uVar38;
  if ((int)(uVar13 + (uint)uVar21) < 0) {
    uVar10 = uVar21;
  }
  cVar7 = (char)(uVar34 >> 8);
  bVar25 = ((byte)uVar10 & 0xf) << 1 |
           0x2b15 < CONCAT11(((byte)(uVar28 + 0x399b99bd >> 8) >> 1 | 0x80) >> (bVar8 & 0x1f),
                             (char)(uVar28 + 0x399b99bd));
  uVar11 = CONCAT11((char)((uint)CONCAT11(cVar7,bVar25) >> 8) << 1,bVar25);
  uVar20 = (ushort)(byte)(-(char)uVar20 & 0x7fU | ((uVar11 >> ((ushort)bVar25 & 0xf) & 1) != 0) << 7
                         );
  uVar26 = (uVar11 | 1 << ((ushort)bVar25 & 0xf)) ^ uVar20;
  uVar36 = uVar26 << 1 | (ushort)((short)uVar26 < 0);
  bVar8 = (byte)uVar36;
  bVar25 = (bVar8 & 0x1f) % 0x11;
  uVar23 = uVar33 & 0xffff0000 |
           (uint)(ushort)((ushort)(CONCAT12(((ushort)(short)cVar7 >> 1 & 1) != 0,uVar20) >> bVar25)
                         | uVar20 << 0x11 - bVar25);
  iVar14 = 0x1f;
  uVar11 = 0x1f;
  if (uVar23 != 0) {
    while (uVar11 = (ushort)iVar14, uVar23 >> iVar14 == 0) {
      iVar14 = iVar14 + -1;
    }
  }
  uVar20 = uVar11 & 0xff00 | (ushort)(byte)((char)uVar11 + 1);
  uVar11 = (short)cVar7 & 0xfffd;
  if ((uVar34 & 0xffff0000 | (uint)(ushort)(uVar10 & 0xff00 | (ushort)(byte)uVar34) | 0x77deec48) !=
      0) {
    uVar11 = uVar20;
  }
  uVar34 = (int)(short)uVar20 + 1;
  uVar22 = ((uVar22 & 0xff00) << 8 | uVar22 << 0x18 | (uint)uVar11) + 0x57c8b5c3;
  uVar10 = (short)uVar22 + 0x4860;
  uVar21 = (short)((uint)(ushort)((ushort)(byte)(((char)((uint)(ushort)((ushort)(byte)uVar34 *
                                                                       ((uVar21 << 1 |
                                                                        (ushort)CARRY4(uVar13,(uint)
                                                  uVar21)) >> ((byte)uVar26 & 0x1f) & 0xff)) >> 8) +
                                                  -0x62 >> 0x12) << (bVar8 & 0x1f)) << 8 | 1) >> 8)
           << 0xf | uVar10 * 4 >> 1;
  uVar13 = ~((uint)uVar21 & 0xf |
            (uint)(uint3)((uint3)(((uint)uVar36 << 0x18) >> 8) |
                          ((uint3)(uVar34 >> 8) & 0xff0000) >> 8 | (uint3)(byte)(uVar21 >> 8) | 0x75
                         ) << 8);
  uVar23 = (uVar22 & 0xffff0000 | (uint)uVar10) * -4 & 0xffff0000 | 0x557;
  uVar34 = (uVar34 & 0xffff0000 | 0x27a2) ^ uVar23;
  uVar22 = (uVar34 & 0xffff) * (uVar34 & 0xffff);
  uVar13 = ((uVar13 & 0xffff0000 |
            (uint)(ushort)(((ushort)uVar13 | 0xd8e4) ^ 1 << ((ushort)uVar34 & 0xf))) + 0xb607cc88) -
           (uint)((short)(uVar22 >> 0x10) != 0);
  uVar10 = (ushort)(byte)(uVar22 & 0xffff) * (ushort)(byte)((uVar22 & 0xffff) >> 8);
  uVar22 = (uint)CONCAT11(0xaa,(char)(uVar22 >> 0x18));
  uVar23 = (uint)((uint3)(uVar23 >> 8) & 0xffff00) << 8 | (uVar22 & 0x7fff) << 1;
  iVar14 = 0x1f;
  if (uVar23 != 0) {
    while (uVar23 >> iVar14 == 0) {
      iVar14 = iVar14 + -1;
    }
  }
  uVar38 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8;
  uVar28 = (uVar13 & 0xff00) << 8;
  uVar1 = (ulonglong)(uVar38 | uVar28 | uVar13 * 0x1000000 | 0xc0000000);
  uVar2 = CONCAT44(uVar23,(uVar34 & 0xffff0000 |
                          (uint)(ushort)(uVar10 & 0xff |
                                        (ushort)(byte)((byte)((uint)uVar10 >> 8) |
                                                      (byte)(uVar22 >> 8)) << 8)) >>
                          ((byte)(uVar13 >> 0x18) & 0x1f)) & 0x3fffffffffffffff;
  uVar3 = uVar2 / uVar1;
  uVar2 = uVar2 % uVar1;
  sVar27 = (short)uVar38;
  uVar21 = sVar27 << 1;
  cVar7 = (char)uVar2;
  iVar14 = (int)uVar3 >> 1;
  uVar23 = CONCAT31((int3)(uVar2 >> 8),(byte)(CONCAT11(sVar27 < 0,cVar7) >> 4) | cVar7 << 5) << 4;
  iVar14 = CONCAT22((short)(uVar3 >> 0x10) >> 1,
                    CONCAT11((char)((uint)iVar14 >> 8) + -1,(char)iVar14));
  uVar38 = iVar14 * -0x1a511ec4 & 0xffff;
  uVar10 = (ushort)(byte)((byte)uVar21 ^ (byte)(uVar23 >> 8));
  uVar22 = 0x1f;
  if (uVar38 != 0) {
    while (uVar38 >> uVar22 == 0) {
      uVar22 = uVar22 - 1;
    }
  }
  uVar10 = (uVar21 & 0xff00 | uVar10) ^ uVar10 & 2;
  uVar26 = (ushort)uVar22;
  uVar24 = iVar14 + 0xfb8e8c2b;
  uVar21 = (short)uVar38 + 0xb3a8U >> 1;
  bVar25 = (byte)uVar10 & 0x1f;
  uVar5 = CONCAT14(uVar26 < 0xf4d2,~uVar23 & 0xffff0000 | (uint)(ushort)(uVar26 * 0xa64)) | 0xbe26;
  uVar33 = (int)uVar5 << bVar25 | (uint)(uVar5 >> 0x21 - bVar25);
  uVar23 = (uint)uVar10 & 0xffffff0f;
  sVar17 = (sbyte)uVar23;
  bVar8 = (byte)(uVar33 >> 8);
  uVar11 = (ushort)uVar24 & 0x3f00 | (ushort)bVar8;
  uVar10 = uVar11 / 0xc0;
  uVar20 = ((short)uVar23 - uVar21) - 1;
  sVar27 = (short)uVar21 >> ((byte)uVar20 & 0x1f);
  bVar25 = (byte)uVar20 & 0x1f;
  uVar28 = (uVar33 & 0xffff0000 | (uint)(ushort)(CONCAT11(bVar8 + (char)uVar24,(char)uVar33) >> 1))
           << bVar25 | (uVar28 | uVar13 * 0x1000000 | 0xc0000000 | (uint)uVar20) >> 0x20 - bVar25;
  bVar25 = ((byte)(uVar20 >> 1) & 0x1f) % 9;
  uVar23 = (uint)(ushort)((short)uVar28 << 1);
  iVar14 = (uVar24 & 0xffff0000 | (uint)(ushort)(uVar10 | uVar11 % 0xc0 << 8) & 0xffffff00 |
           (uint)(byte)((byte)((uVar10 | (ushort)((uVar20 & 1) != 0) << 8) >> bVar25) |
                       (char)uVar10 << 9 - bVar25)) << ((byte)(((uint)uVar20 & 0xb466) >> 1) & 0x1f)
  ;
  iVar15 = (uVar22 & 0xffff0000 | (uint)(ushort)(uVar26 + 0xb2e)) + 1;
  uVar22 = (uint)(ushort)((short)uVar38 + 1 << sVar17 | (ushort)uVar33 >> 0x10 - sVar17) *
           -0xcc27276;
  uVar22 = uVar22 & 0xffff0000 | (uint)(ushort)((short)uVar22 + (short)iVar15);
  uVar13 = uVar22 >> 7;
  uVar22 = ~uVar22;
  uVar10 = sVar27 + 0x1151;
  uVar38 = uVar28 & 0x7fff0000 | uVar23;
  if (uVar10 != 0 && (SCARRY2(sVar27,0x1151) != SCARRY2(uVar10,0)) == (short)uVar10 < 0) {
    uVar38 = uVar22;
  }
  bVar25 = ((char)(((uint)CONCAT11((char)((uint)iVar14 >> 8) + (char)(uVar23 >> 8),(char)iVar14) <<
                   4) >> 8) - (char)uVar13) - 1;
  uVar11 = CONCAT11(bVar25,(short)((ushort)bVar25 << 8) < 0);
  uVar21 = (short)uVar13 + 0x7502;
  uVar22 = uVar22 + 0x2fb886f9;
  bVar8 = (byte)uVar21;
  uVar24 = uVar22 >> (bVar8 & 0x1f) | uVar22 << 0x20 - (bVar8 & 0x1f);
  bVar25 = (bVar8 & 0x1f) % 0x11;
  uVar20 = ((ushort)uVar38 << 8 | (ushort)uVar38 >> 8) * 2;
  bVar18 = (byte)((uint)uVar21 >> 8);
  uVar22 = (uint)(int)(short)(uVar11 << bVar25 | uVar11 >> 0x11 - bVar25) >> 1;
  bVar35 = (char)uVar20 - 0x3e;
  uVar13 = (uint)uVar20 & 0xffffff00;
  uVar28 = uVar38 & 0xffff0000 | uVar13 | (uint)bVar35;
  bVar25 = (char)uVar22 << ((byte)(uVar21 & 0xff) & 0x1f);
  uVar23 = (uint)CONCAT11((char)(uVar22 >> 8) + '\x01',(char)uVar22) & 0xff00;
  uVar38 = CONCAT22((ushort)((uint)iVar15 >> 0x10) | (ushort)(uVar38 >> 0x10),
                    (uVar21 & 0xff |
                    (ushort)(byte)(bVar18 << (bVar8 & 7) | bVar18 >> 8 - (bVar8 & 7)) << 8) *
                    -0x5f74) >> 1 | uVar28;
  if (uVar38 == 0) {
    uVar24 = uVar24 & 0xffff0000 | (uint)uVar20 & 0xff00 | (uint)bVar35;
  }
  cVar7 = (char)(uVar13 >> 8);
  bVar8 = (byte)(uVar23 >> 8);
  uVar28 = uVar28 - 1;
  uVar21 = (short)cVar7 << 1;
  uVar11 = (ushort)((uVar22 & 0xffff0000 |
                    (uint)CONCAT11(((char)(bVar8 - bVar35) < '\0') << 7 | (bVar8 == bVar35) << 6 |
                                   ((((ushort)uVar38 & 0xfff) - 0xfad & 0x1000) != 0) << 4 |
                                   ((uVar34 & 0x400) != 0) << 2 | 2U | bVar8 < bVar35,bVar25)) >> 6)
           >> ((byte)uVar21 & 0x1f);
  uVar13 = uVar28 >> 1;
  uVar37 = CONCAT22((undefined2)(cVar7 >> 7),
                    uVar21 & 0xff | (ushort)(byte)((char)(uVar21 >> 8) << 1) << 8) & 0xffffff0f;
  bVar18 = (char)((int)uVar37 >> 1) - 1;
  uVar21 = (ushort)((uVar24 >> (uVar24 & 0x1f) & 1) != 0) + 0x85c9;
  uVar22 = (uint)(ushort)((ushort)uVar24 >> 1 | 0x8000);
  bVar8 = (bVar18 & 0x1f) % 0x11;
  uVar34 = uVar22 | 0xc000;
  uVar13 = (uVar13 & 0x3f00 | (uint)(byte)((byte)uVar13 >> 1 | 0x80)) << 0x10 | (uint)uVar21;
  uVar33 = uVar13 / uVar34 & 0xffff;
  uVar9 = (undefined)uVar33;
  uVar16 = ~(((uVar23 | bVar25) ^ 1) + 0xe50c393d);
  bVar18 = bVar18 | (byte)(uVar16 >> 8);
  iVar15 = CONCAT31((int3)((int)uVar37 >> 9),bVar18);
  iVar14 = (uint)(ushort)(CONCAT11((byte)((uint)CONCAT11((char)(uVar33 >> 8) + -0x2d,uVar9) >> 8) >>
                                   1,uVar9) | 0x8000) * (uVar16 & 0xffff);
  uVar33 = -iVar15;
  uVar37 = (uVar33 & 0xffffff00 | (uint)(uVar33 == 0 || iVar15 != 0)) + 0x806395;
  uVar23 = (int)(short)iVar14 * (int)(short)((uint)iVar14 >> 0x10);
  uVar22 = ((uVar24 & 0xffff0000 | uVar22 | 0xc000) << ((byte)uVar37 & 0x1f)) +
           (uVar16 & 0xffff0000 | uVar23 >> 0x10);
  uVar24 = CONCAT22((short)((int)(uVar38 & 0xffff0000) >> 0x1a),
                    (short)((int)(uVar38 & 0xffff0000 |
                                 (uint)(ushort)((ushort)(CONCAT12((uVar24 & 1) != 0,uVar11) >> bVar8
                                                        ) | uVar11 << 0x11 - bVar8)) >> 10) +
                    (ushort)uVar37 + 1) + 1;
  uVar23 = (uVar16 & 0xffff0000 |
           (uint)CONCAT11((char)(uVar23 >> 0x18) + 'F',
                          (char)((CONCAT11((byte)((ushort)((short)uVar16 >> (bVar18 & 0x1f)) >> 9),
                                           uVar33 != 0 && iVar15 == 0) | 0x8000) + 0x10a >> 8))) <<
           1;
  uVar11 = ~(ushort)uVar37;
  bVar25 = (char)uVar11 + (char)uVar23;
  bVar8 = (bVar25 * '\x04' & 0x1f | bVar25 >> 6) % 9;
  bVar18 = (byte)(uVar23 >> 8);
  uVar38 = (uint)(byte)(bVar25 * '\x04' | bVar25 >> 6) & 0xffffff0f;
  uVar11 = uVar11 & 0xff00 | (ushort)uVar38;
  sVar17 = (sbyte)uVar38;
  sVar27 = (short)uVar22;
  uVar6 = CONCAT21((ushort)(uVar28 >> 0x11) |
                   (ushort)(((uint)((uVar13 % uVar34 & 1) != 0) << 0x1f) >> 0x10),
                   (uVar21 & 0x400) == 0);
  uVar21 = uVar11 << 1 | (ushort)((short)uVar11 < 0);
  sVar19 = (sbyte)uVar21;
  uVar13 = ((((uint)(ushort)~uVar10 & 0xf3ea0) << 0xc) >> (bVar25 & 0x1f)) >> sVar19 |
           uVar24 << 0x20 - sVar19;
  bVar25 = sVar19 << 3 & 0x1f;
  uVar34 = (uVar23 & 0xffff0000 |
           (uint)(ushort)(CONCAT11(bVar18 >> bVar8 | bVar18 << 9 - bVar8,(char)uVar23) >> sVar17 |
                         sVar27 << 0x10 - sVar17)) << bVar25 |
           (uVar37 & 0xffff0000 | (uint)uVar21 & 0xffffff00 | (uint)(byte)(sVar19 << 3)) >>
           0x20 - bVar25;
  iVar14 = CONCAT22((short)uVar34 >> 0xf,(short)uVar34 >> 0x14);
  cVar7 = (char)(int3)(iVar14 >> 10);
  uVar10 = CONCAT11(cVar7 << 1 | cVar7 < '\0',~(byte)(iVar14 >> 2)) >> 5;
  bVar8 = (byte)uVar10;
  bVar25 = bVar8 & 7;
  bVar18 = (byte)(uVar34 >> 8);
  uVar21 = uVar10 << 8 | 0x3b;
  sVar32 = (short)((int)(uVar34 & 0xffff0000 |
                        (uint)CONCAT11(bVar18 >> bVar25 | bVar18 << 8 - bVar25,(char)uVar34)) >> 1);
  bVar39 = (short)((int)(uVar34 & 0xffff0000) >> 0x11) < 0;
  uVar23 = (((uint)uVar6 & 0xffff00) << 8 |
           (uint)(ushort)(((short)CONCAT31(uVar6,SBORROW4(uVar13,0x750b06f) !=
                                                 SBORROW4(uVar13 + 0xf8af4f91,1)) - uVar21) - 1 ^
                         sVar27 << 1)) ^ uVar13 + 0xf8af4f90;
  uVar13 = uVar13 + 0xf8af4f90 & 0xffff0000;
  uVar10 = (sVar32 << 4 | (ushort)bVar39) * 4;
  uVar11 = uVar10 - 0x70d;
  bVar25 = ((byte)uVar23 & 0x1f) % 0x11;
  uVar34 = (uint)(uVar10 < 0x70d) << 0x10 | uVar23 & 0xffff;
  uVar10 = (ushort)(uVar34 >> bVar25) | (ushort)(uVar34 << 0x11 - bVar25);
  bVar25 = (byte)uVar23 & 0x1f;
  uVar13 = uVar13 << bVar25 | uVar13 >> 0x20 - bVar25;
  sVar27 = uVar21 * 2;
  uVar21 = uVar10 * 0x5434;
  uVar38 = uVar23 & 0xffff0000 | (uint)uVar21;
  uVar34 = 0x1f;
  if (uVar38 != 0) {
    while (uVar38 >> uVar34 == 0) {
      uVar34 = uVar34 - 1;
    }
  }
  uVar12 = (ushort)uVar13;
  uVar20 = uVar12 & 0xf;
  bVar25 = ((byte)uVar34 & 0x1f) % 0x11;
  uVar36 = (ushort)((uVar24 & 0xffff0000) >> 0x14);
  uVar26 = ~(ushort)((uVar24 & 0xffff0000 |
                     (uint)(ushort)((ushort)uVar24 >> 1 | (ushort)uVar24 << 0xf)) >> 4);
  uVar22 = uVar22 & 0xffff0000 | ((uint)(ushort)(sVar32 << 3) & 0x7f) << 1 | (uint)bVar39;
  if (uVar38 < 0xca02e9cf) {
    uVar22 = CONCAT22(uVar36,uVar26);
  }
  sVar27 = (short)(CONCAT22((short)(char)bVar8 >> 7,
                            ((ushort)(CONCAT12((uVar11 >> uVar20 & 1) != 0,sVar27) >> bVar25) |
                            sVar27 << 0x11 - bVar25) * 2) >> ((byte)uVar34 & 0x1f));
  uVar31 = (ushort)(sVar27 == 0) * sVar27 - uVar26;
  uVar12 = uVar12 | (ushort)uVar22;
  uVar13 = uVar13 & 0xffff0000;
  uVar38 = CONCAT22(uVar36,uVar26 >> 1);
  bVar25 = (byte)uVar31;
  bVar8 = bVar25 & 0x1f;
  bVar25 = bVar25 >> 4;
  uVar10 = uVar10 * -0x5798;
  uVar26 = (CONCAT11((byte)((uint)uVar31 >> 8) >> 1,bVar25) | 0x8000) >> bVar25 | 0 << 0x10 - bVar25
  ;
  uVar36 = uVar26 - 0x509;
  uVar23 = uVar23 & 0xffff0000 | (uint)(ushort)((uVar10 | (short)uVar21 < 0) << 9 | uVar10 >> 7);
  if (uVar36 == 0 || (short)(uVar26 - 0x508) < 1) {
    uVar23 = (uint)(ushort)(uVar11 | 1 << uVar20) << 0x10 | 0x700;
  }
  bVar25 = (byte)uVar36 & 0xf;
  uVar23 = (uVar23 + 0xa95cf0f2) - (uint)((uVar36 & 1) != 0);
  uVar28 = uVar23 & 0xffff0000;
  uVar24 = (uint)(ushort)((short)uVar23 + 0x525) & 0xffffff00;
  uVar33 = ~(((uVar38 >> bVar8 | uVar38 << 0x20 - bVar8) & 0xffff0000 ^ 0x6933) & 0x42360445);
  uVar21 = CONCAT11((char)uVar33,7);
  uVar10 = uVar21 + 0x8013;
  uVar23 = (uint)(uVar21 < 0x7fed);
  cVar7 = (char)(uVar24 >> 8);
  uVar21 = (ushort)uVar24;
  uVar38 = (uint)(ushort)(uVar21 << 1 | uVar21 >> 0xf);
  uVar21 = 1 << (uVar10 & 0xf);
  uVar26 = (uVar12 << bVar25 | uVar12 >> 0x10 - bVar25) & 7 | uVar21;
  uVar24 = (uVar13 | uVar26) * 0x700e1a5a;
  uVar22 = (uVar22 | 0x80000) + 0x458f2695;
  uVar11 = (short)(char)uVar10 * (short)cVar7;
  bVar25 = (byte)(uVar21 >> 3) | (byte)(uVar11 >> 8);
  uVar21 = (short)uVar24 << 0xd | (uVar21 & 0xf800) >> 3;
  uVar10 = (ushort)(((uVar28 | uVar38) >> ((uint)uVar11 & 0x1f) & 1) != 0);
  uVar20 = uVar11 + 0xcd0 + uVar10;
  uVar1 = (ulonglong)(~(uint)uVar20 | 0xc0000000);
  uVar2 = CONCAT44(uVar28 | uVar38 & 0xffffff00 |
                   (uint)(uVar20 != 0 &&
                         (SCARRY2(uVar11,0xcd0) != SCARRY2(uVar11 + 0xcd0,uVar10)) ==
                         (short)uVar20 < 0),~(uint)uVar20) & 0x3fffffffffffffff | 0xc0000000;
  uVar3 = uVar2 / uVar1;
  bVar39 = (bVar25 & 0xca) != 0;
  uVar38 = ((uint)CONCAT21((short)((uint)((int)((uVar34 & 0xffff0000 |
                                                (uint)(ushort)((short)uVar36 >> 1)) << 9 |
                                               uVar34 >> 0x17) >> ((byte)(uVar34 >> 0x17) & 0x1f))
                                  >> 0x10),cVar7) & 0xffff00) << 8;
  uVar28 = uVar24 & 0xffff0000 |
           (uint)(ushort)((uVar21 | (ushort)bVar25 & 0xffca) << 5 | uVar21 >> 0xb);
  uVar34 = 0x1f;
  if (uVar28 != 0) {
    while (uVar28 >> uVar34 == 0) {
      uVar34 = uVar34 - 1;
    }
  }
  uVar23 = CONCAT22((short)((ushort)((uVar33 + 0xed3c0fff) - uVar23 >> 0x11) |
                           (ushort)(((uint)(uVar33 + 1 < 0x12c3f002 || uVar33 + 0xed3c0fff < uVar23)
                                    << 0x1f) >> 0x10)) >> 0x17,(uVar21 | (ushort)bVar25) + 0x44f1)
           >> 1;
  bVar18 = (byte)(uVar38 >> 0x17);
  bVar8 = (bVar18 & 0x1f) % 0x11;
  uVar34 = (uVar34 & 0xffff0000 | (uint)(ushort)((short)uVar34 >> 1)) & 0xb6292b8a;
  sVar27 = (short)(uVar22 >> 0x10);
  return CONCAT44(in_EDX,(uVar34 << 0x1c | uVar34 >> 4) +
                         (CONCAT22((short)(uVar3 >> 0x10),CONCAT11(-1 < (char)bVar25,(char)uVar3))
                         >> 6) + (((uVar38 | CONCAT11((cVar7 >> 1) << 1 | cVar7 >> 1 < '\0',bVar39))
                                  & 0x7fff80) << 9 |
                                 (uint)(ushort)(CONCAT11(bVar39,bVar18) | 0x8000)) +
                         (((uVar22 & 0xffff | (uint)(ushort)(uVar2 % uVar1 >> 0x10) << 0x10) ^
                          0x8fa4) << 1 | (uint)((uVar38 >> 0x17 & 0x100) != 0)) +
                         ((uVar23 >> bVar39 | uVar23 << 0x20 - bVar39) << 1 | uVar38 >> 0x1f) +
                         (CONCAT22(sVar27 >> 0x18,sVar27 >> 8) & 0xffffaed2) +
                         (uVar13 | (ushort)(uVar26 << bVar8 | uVar26 >> 0x11 - bVar8)) + 0x4306e4c1)
  ;
}



// WARNING: Removing unreachable block (ram,0x0804dbae)
// WARNING: Removing unreachable block (ram,0x0804d9e3)
// WARNING: Removing unreachable block (ram,0x0804dbf1)
// WARNING: Removing unreachable block (ram,0x0804dc5a)
// WARNING: Removing unreachable block (ram,0x0804e109)
// WARNING: Removing unreachable block (ram,0x0804da65)
// WARNING: Removing unreachable block (ram,0x0804daa6)
// WARNING: Removing unreachable block (ram,0x0804dae5)
// WARNING: Removing unreachable block (ram,0x0804dafe)
// WARNING: Removing unreachable block (ram,0x0804dc3e)
// WARNING: Removing unreachable block (ram,0x0804dbed)
// WARNING: Removing unreachable block (ram,0x0804dd3f)
// WARNING: Removing unreachable block (ram,0x0804dd04)

undefined8 log_size_10_var_006(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint5 uVar4;
  char cVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  sbyte sVar10;
  byte bVar11;
  ushort uVar12;
  ushort uVar13;
  byte bVar16;
  uint uVar14;
  int iVar15;
  byte bVar17;
  undefined uVar18;
  undefined4 in_EDX;
  int iVar19;
  uint uVar20;
  undefined2 uVar21;
  char cVar22;
  byte bVar23;
  char cVar28;
  ushort uVar24;
  short sVar25;
  byte bVar27;
  uint uVar26;
  ushort uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  ushort uVar34;
  ushort uVar35;
  uint uVar36;
  bool bVar37;
  bool in_PF;
  bool bVar38;
  
  uVar6 = CONCAT11(in_PF << 2 | 0x93,0xe8);
  uVar14 = (uint)(ushort)((uVar6 ^ (ushort)(uVar6 == 0xe22c) * (uVar6 & 0xe22c)) >> 1) * 0xf5d8;
  uVar30 = uVar14 >> 0x18 & 0xffffff0f;
  sVar10 = (sbyte)uVar30;
  bVar27 = (((byte)(((ushort)uVar30 | 0xb900) >> sVar10) | (byte)(-0x2e7f << 0x10 - sVar10)) & 0x13)
           % 0x11;
  uVar6 = 0x82;
  if (in_PF) {
    uVar6 = 0x8a;
  }
  uVar6 = (ushort)(((uint)(uVar6 >> 1) << 0x18) >> 0x10);
  uVar30 = (int)((uint)uVar6 << 0x10) >> 1;
  uVar34 = (ushort)(((CONCAT22(0x554f,((ushort)(CONCAT12(0xb0 < (byte)(uVar14 >> 0x10),0x19f3) >>
                                               bVar27) | 0x19f3 << 0x11 - bVar27) + 0xd2b1) ^ 0x4a44
                     ) << 1) >> 8);
  if ((short)uVar34 < 0) {
    uVar30 = CONCAT22((short)uVar6 >> 1,0x8000) | 0x6958;
  }
  uVar14 = 0xb42fb460;
  if (!in_PF) {
    uVar14 = 0xb42f0000;
  }
  uVar31 = uVar30 & ~(1 << (uVar14 >> 0x1f | 0x10));
  uVar26 = 0x1f;
  if ((uVar14 & 0xffff0000) != 0) {
    while ((uVar14 & 0xffff0000) >> uVar26 == 0) {
      uVar26 = uVar26 - 1;
    }
  }
  uVar32 = uVar31 & 0xffff0000 | (uint)(ushort)((short)uVar31 << 9 | 0x4000);
  uVar34 = (uVar34 & 0xfffb) << 1 | (ushort)((uVar32 >> (uVar26 & 0x1f) & 1) != 0);
  sVar7 = -uVar34;
  uVar31 = (uint)(ushort)(sVar7 - 0x201);
  bVar27 = (byte)uVar26;
  uVar6 = (ushort)(short)(char)((char)((int)(0x81 - uVar30) >> 1) * -2) >> (bVar27 & 0x1f);
  uVar31 = ((uVar31 | 0xffd50000) << (bVar27 & 0x1f) |
           (uint)((CONCAT14(0xfe00 < uVar34 || sVar7 == 0x200,uVar31) | 0xffd50000) >>
                 0x21 - (bVar27 & 0x1f))) >> (bVar27 & 0x1f);
  uVar34 = uVar6 << 1 | uVar6 >> 0xf;
  if (((short)uVar6 < 0 != (short)uVar34 < 0) != (short)uVar34 < 0) {
    uVar26 = uVar32 ^ 1 << (uVar26 & 0x1f);
  }
  sVar7 = (short)uVar26 + (short)uVar31;
  uVar32 = uVar31 + CONCAT22((short)((int)(0x81 - uVar30) >> 0x11),uVar34);
  bVar27 = (byte)((uVar26 & 0xffff0000) >> 0x18) & 0xf;
  sVar25 = (short)((uVar26 & 0xffff0000) >> 0x10);
  uVar6 = sVar25 >> 8;
  uVar34 = uVar6 >> bVar27 | uVar6 << 0x10 - bVar27;
  uVar26 = uVar31 & 0xffff0000 | (uint)CONCAT11((char)(uVar31 >> 8) << 1,(char)uVar31);
  uVar30 = uVar26 >> 0xd;
  bVar27 = (byte)(uVar30 >> 8) ^ 0xab;
  cVar28 = bVar27 + ((short)uVar30 != -0x5402) + -0x3c;
  uVar30 = (int)sVar7 << 0xd;
  uVar6 = (uVar34 & 0xff00 | (ushort)bVar27) + ((ushort)(sVar7 >> 0xf) >> 3 | (ushort)uVar30);
  uVar30 = uVar30 & 0xffff0000;
  uVar36 = uVar30 | (uint)uVar34 & 0xff00 | (uint)bVar27;
  uVar34 = (short)((uVar32 * 0x20 |
                   (uint)(CONCAT14((((uint)(ushort)~((ushort)(uVar14 >> 0x1f) | 0xd2b0) | 0xb9d70000
                                    ) >> (uVar32 & 0x1f) & 1) != 0,uVar32) >> 0x1c)) << 1) + 0x5dfc;
  uVar14 = (CONCAT31(CONCAT21((ushort)(((uVar26 | 0x100) << 0x13) >> 0x10) |
                              (ushort)((uVar31 & 0xffff0000) >> 0x1d),cVar28),-1 < cVar28) -
           CONCAT22(sVar25 >> 0x18,uVar6)) - 1U ^ 0xf014bcaa;
  uVar26 = uVar14 & 0xffff0000 | (uint)CONCAT11((char)(uVar14 >> 8) + 'u',(char)uVar14);
  iVar15 = 0x1f;
  if (uVar26 != 0) {
    while (uVar26 >> iVar15 == 0) {
      iVar15 = iVar15 + -1;
    }
  }
  uVar31 = (int)uVar26 >> 0x1f ^ uVar36;
  cVar5 = (char)(uVar31 >> 8);
  cVar22 = (char)uVar34;
  cVar28 = cVar5 + cVar22;
  if ((SCARRY1(cVar5,cVar22) != SCARRY1(cVar28,'\0')) == cVar28 < '\0') {
    uVar36 = uVar30 | CONCAT11(cVar28,(char)uVar31);
  }
  bVar27 = (char)((uint)uVar34 >> 8) + 0x96;
  uVar12 = (uVar6 & 0xff00 | (ushort)(byte)((byte)uVar6 ^ (char)((uint)uVar6 >> 8) >> 7)) * 0x314a;
  uVar6 = (ushort)(byte)((char)((uint)uVar12 >> 8) + 0x77) << 8;
  uVar34 = (ushort)((uVar36 & 0xffff) >> 7);
  uVar31 = uVar36 & 0xffff0000 | (uint)(ushort)(uVar34 | (ushort)((uVar36 & 0xffff) << 10));
  uVar30 = (uint)bVar27 & 0xffffff5e | (uint)(uint3)((char)bVar27 >> 7) << 8;
  uVar6 = (uVar6 & 0xfe00) >> 1 | (short)iVar15 << 0xf |
          (ushort)(byte)(((char)((uVar12 & 0xff | uVar6) >> 1) + -0x69) * '\x02');
  iVar19 = 0;
  bVar27 = 0;
  if (uVar30 != 0) {
    while (bVar27 = (byte)iVar19, (uVar30 >> iVar19 & 1) == 0) {
      iVar19 = iVar19 + 1;
    }
  }
  uVar12 = (ushort)uVar30;
  if (!(bool)(bVar27 & 1)) {
    uVar12 = uVar6 | 1;
  }
  uVar34 = ((ushort)(byte)((byte)((int)uVar26 >> 1) >> 1) & 0xffef |
           (ushort)((byte)(int3)((int)uVar26 >> 9) & 0xfe) << 8) ^ 1 << (uVar34 & 0xf);
  bVar17 = (byte)((uint)uVar6 >> 8);
  bVar27 = (byte)uVar34;
  uVar6 = uVar34 & 0xff00 |
          (ushort)(byte)(bVar27 ^ (bVar27 == (byte)uVar12) * (bVar27 & (byte)uVar12)) | 4 |
          1 << (uVar12 & 0xf);
  uVar14 = CONCAT22((short)((int)(uVar14 & 0xffff0000) >> 0x11),uVar6);
  sVar25 = (uVar12 | 0x1000) + 0x3c14;
  sVar7 = sVar25 * 2;
  bVar23 = (byte)sVar7 | (uint)(uVar12 | 0x1000) < 0x5ff4c3ec;
  bVar27 = (byte)((ushort)sVar7 >> 8);
  if (SCARRY1(bVar23,-0xe) != SCARRY1(bVar23 - 0xe,sVar25 < 0)) {
    bVar27 = (byte)((uint)uVar6 >> 8);
  }
  uVar30 = 0x1f;
  if (uVar31 != 0) {
    while (uVar31 >> uVar30 == 0) {
      uVar30 = uVar30 - 1;
    }
  }
  lVar3 = (ulonglong)uVar14 * (ulonglong)uVar14;
  uVar14 = (uint)lVar3;
  if (bVar27 <= (byte)(bVar17 >> 1 | bVar17 << 7)) {
    uVar14 = uVar30 & 0xffff | (uint)(ushort)((ulonglong)lVar3 >> 0x10) << 0x10;
  }
  uVar31 = uVar31 + 0x35e62aca;
  uVar32 = (iVar15 + 0xe3df973fU & 0xffff0000 |
           (uint)(ushort)((ushort)(iVar15 + 0xe3df973fU) >> 1 |
                         (ushort)((int)((ulonglong)lVar3 >> 0x20) != 0) << 0xf)) + uVar31 + 1;
  uVar26 = SEXT14((char)(uVar14 >> 8));
  lVar3 = (longlong)(int)(uVar14 & 0xffff0000 | (uint)(ushort)((short)uVar14 * 0x7339)) *
          (longlong)(int)uVar31;
  bVar38 = (uint)lVar3 == uVar26;
  uVar26 = uVar26 ^ (uint)bVar38 * (uVar26 ^ uVar31);
  sVar7 = CONCAT11((char)(uVar26 >> 8) << 1 | (uVar32 & 1) != 0,(char)uVar26);
  iVar15 = (int)((ulonglong)lVar3 >> 0x20) * 0x485a8472;
  uVar34 = (ushort)lVar3 ^ (ushort)bVar38 * ((ushort)lVar3 & (ushort)uVar26) ^ (ushort)uVar30;
  uVar6 = (ushort)(uVar32 >> 0x11);
  if (uVar34 == 0) {
    uVar6 = (ushort)((uint)iVar15 >> 0x10);
  }
  bVar27 = (byte)((ulonglong)lVar3 >> 0x20);
  iVar19 = CONCAT31((int3)((ulonglong)lVar3 >> 0x28),bVar27 >> 6 | bVar27 << 2) + 1;
  cVar28 = (char)((ushort)(sVar7 + -1) >> 8);
  uVar14 = CONCAT22(uVar6,sVar7 * -0x5c35);
  if (-1 < (char)((char)((uint)iVar19 >> 8) + -99)) {
    uVar14 = uVar31 & 0xffff0000 | (uint)(((ushort)uVar31 ^ uVar34 << 1) & 0xfffe);
  }
  cVar5 = (char)((ushort)(short)(char)~(byte)iVar19 >> 1);
  uVar12 = (short)uVar14 - 1;
  uVar34 = (ushort)(cVar28 >> 7);
  uVar26 = CONCAT31((int3)cVar28,(char)((uint)iVar15 >> 8)) & 0xffff;
  uVar32 = uVar14 & 0xffff0000 | uVar26;
  uVar36 = uVar30 << 0x18 ^ 1 << ((int)cVar5 & 0x1fU);
  iVar15 = CONCAT22(uVar34,uVar12) << 1;
  bVar17 = (byte)iVar15;
  uVar6 = (short)cVar5 * (short)cVar5 & 0xff00;
  bVar27 = (bVar17 & 0x1f) % 9;
  bVar23 = (byte)((uint)iVar15 >> 8);
  uVar29 = (ushort)uVar26;
  uVar26 = (CONCAT22((undefined2)(cVar5 >> 7),uVar6 + uVar29) + 0x107b46f6) -
           (uint)CARRY2(uVar6,uVar29);
  uVar14 = uVar32 << 1;
  uVar31 = uVar14 | (uVar26 & 0x100) != 0;
  bVar38 = (int)uVar32 < 0 != (int)uVar31 < 0;
  uVar30 = ((uint)uVar12 & 0x7fff8000 | (uint)uVar34 << 0x10) << 1 |
           (uint)CONCAT11((bVar23 << bVar27 | bVar23 >> 9 - bVar27) + 0x35,bVar17);
  uVar6 = ((ushort)uVar26 & 0xff00 | (ushort)(byte)((char)uVar26 + 0x2d)) + 0x474d;
  uVar32 = uVar30 << bVar38 | uVar30 >> 0x20 - bVar38;
  bVar27 = (char)((uint)uVar6 >> 8) + (char)uVar6;
  uVar30 = (uint)(ushort)(uVar6 & 0xff | (ushort)bVar27 << 8);
  if (bVar27 == 0) {
    uVar31 = uVar14 & 0xffff0000 | uVar30;
  }
  uVar8 = (uVar26 & 0xffff0000 | uVar30) + 0xc28bc47d;
  sVar10 = bVar38 * '\x02';
  cVar28 = (char)(uVar8 >> 8) * '\x02';
  bVar27 = (byte)uVar32;
  bVar27 = bVar27 >> sVar10 | bVar27 << bVar38 * -2 + 8;
  uVar14 = (uint)(ushort)((ushort)uVar32 & 0xff00 | (ushort)bVar27 | 0xc000);
  uVar30 = ((uint)CONCAT11((char)(uVar31 >> 8) >> sVar10,(char)uVar31) & 0x3fff) << 0x10 |
           (uint)CONCAT11(cVar28,(char)uVar8);
  uVar32 = uVar30 % uVar14;
  uVar31 = uVar32 | uVar31 & 0xffff0000;
  bVar27 = bVar27 | 0xe7;
  sVar7 = (short)(uVar30 / uVar14) + -1;
  if (sVar7 < 0) {
    bVar27 = (byte)uVar32;
  }
  uVar14 = uVar31 >> sVar10 | uVar31 << bVar38 * -2 + 0x20;
  uVar31 = uVar14 << sVar10 | uVar14 >> bVar38 * -2 + 0x20;
  uVar6 = (short)(char)(((char)sVar7 - ((bVar27 ^ 0x9f) - 0x3f)) + -1) *
          (short)((uVar26 & 0x400) != 0);
  bVar27 = (cVar28 != '\0') >> sVar10;
  uVar32 = 0x5f059439;
  uVar30 = SEXT14((char)bVar27);
  uVar14 = uVar30 << 0xf;
  uVar26 = uVar31 + 1;
  if (SCARRY4(uVar31,1)) {
    uVar32 = uVar36 >> 0x11 | uVar14 & 0xffff | 0x5f050000;
  }
  bVar17 = (byte)uVar6;
  bVar38 = (uVar6 & 0x400) != 0;
  cVar28 = bVar17 - bVar27;
  bVar23 = cVar28 - 1;
  uVar31 = (uint)(bVar17 < bVar27 || cVar28 == '\0');
  uVar33 = uVar32 + uVar30 + uVar31;
  if (uVar33 != 0 && (SCARRY4(uVar32,uVar30) != SCARRY4(uVar32 + uVar30,uVar31)) == (int)uVar33 < 0)
  {
    uVar30 = uVar26 & 0xffffff00 | (uint)(byte)((char)uVar26 + 0x98);
  }
  uVar34 = ((ushort)(uVar36 >> 0x11) | (ushort)uVar14) ^ 0xde6c;
  uVar6 = (short)uVar30 + -0x5225 + uVar34;
  uVar34 = (uVar34 >> 0xd) + 0x5a3;
  uVar32 = CONCAT22(0xcd5c,uVar34 >> 7 | 0xd800);
  uVar30 = -(uVar30 & 0xffff0000 | (uint)uVar6 & 0xffffff00 | 1);
  uVar36 = CONCAT22((ushort)((uVar33 & 0xffff0000 | (uint)(ushort)((uVar6 & 0xff) * -0x6fef)) + 1 >>
                            0x10) & 0xbfff,0xda7d);
  uVar6 = (ushort)(byte)((bVar23 >> 1 | bVar23 * -0x80) + 0x94) * 0x82;
  uVar33 = -(uVar14 & 0xffff0000 | (uint)uVar34) | uVar36;
  uVar1 = (CONCAT44((uint)(ushort)((ushort)(uVar26 >> 0x10) & (ushort)((uVar8 & 0xffff0000) >> 0x10)
                                  ) << 0x10,
                    uVar8 & 0xffff0000 |
                    (uint)(ushort)(uVar6 & 0xff | (ushort)(byte)~(byte)(uVar6 >> 8) << 8)) |
          0x1be00000000) & 0x3fff00ffffffffff;
  uVar2 = uVar1 / (ulonglong)(uVar36 | 0xc0000000);
  uVar1 = uVar1 % (ulonglong)(uVar36 | 0xc0000000);
  uVar6 = ((ushort)(uVar32 >> 9) | 0xf900) + 0x531f;
  uVar12 = (short)uVar1 << ((byte)uVar6 & 0x1f);
  uVar31 = (uint)uVar2 ^
           (uVar30 & 0xffff0000 | (uint)(ushort)((ushort)uVar30 >> 0xd | (short)uVar2 << 3));
  uVar32 = uVar32 << 0x17 | 0x660000 | (uint)uVar6 & 0xffff510e;
  uVar6 = (ushort)(byte)((char)uVar12 + 0x23);
  uVar34 = (short)((uint)uVar12 >> 8) << 1 | (ushort)(0x8b < (byte)((char)uVar12 + 0xafU));
  uVar14 = (uint)(uVar31 < 0x66f6da8b);
  uVar30 = uVar32 - (ushort)(uVar34 * 2);
  uVar26 = uVar30 - uVar14;
  uVar32 = ((uVar36 & 0xffff0000 | 0xc0000000 |
            (uint)(ushort)((ushort)CARRY2(uVar34,uVar34) + 0xbb22)) + 0xfef92faa) -
           (uint)(uVar32 < (ushort)(uVar34 * 2) || uVar30 < uVar14);
  uVar34 = (short)uVar32 + 0x42 + (uVar12 & 0xfd00 | uVar6) * 4;
  bVar27 = (byte)uVar26 & 0x1f;
  uVar14 = ((CONCAT22((short)(uVar1 >> 0x10),uVar12 & 0xff00 | uVar6) & 0xfffffdff) >> bVar27 |
           (uVar31 + 0x99092575 & 0xffff0000 | (uint)uVar34) << 0x20 - bVar27) >> 1;
  uVar30 = uVar26 + uVar14;
  uVar14 = (int)(char)(uVar14 >> 8) >> ((byte)uVar30 & 0x1f);
  uVar12 = ((ushort)uVar26 | 0x2000) ^ (ushort)uVar26 & 0x800;
  uVar26 = uVar26 & 0xffff0000;
  uVar6 = (short)uVar30 + (short)uVar14;
  bVar37 = uVar34 != 0;
  uVar34 = -uVar34;
  if (bVar37) {
    uVar14 = uVar26 | uVar12;
  }
  bVar17 = (byte)(uVar14 >> 8);
  bVar27 = bVar17 + (byte)uVar34;
  cVar28 = bVar27 + bVar37;
  uVar29 = CONCAT11(cVar28,(char)uVar14);
  if ((CARRY1(bVar17,(byte)uVar34) || CARRY1(bVar27,bVar37)) || cVar28 == '\0') {
    uVar29 = uVar34;
  }
  uVar31 = uVar14 & 0xffff0000 | (uint)uVar29;
  bVar23 = (byte)uVar6 & 0x1f;
  uVar32 = uVar32 & 0xffff0000 | (uint)((ushort)uVar33 & uVar12);
  uVar30 = (uVar30 & 0xffff0000 | (uint)uVar6) + 0x2a1427a0;
  bVar17 = (byte)uVar30;
  bVar27 = bVar17 & 0x1f;
  uVar33 = uVar33 ^ 0xd59d20dd;
  uVar14 = (uint)CONCAT11(1,bVar17);
  iVar15 = (ushort)(uVar34 & 0xff00 | (ushort)(0 < (int)uVar33)) * uVar14;
  uVar34 = (ushort)((uint)iVar15 >> 0x10);
  uVar30 = (uVar26 | uVar34) + (uVar30 & 0xffff0000 | uVar14);
  bVar16 = (byte)((uint)iVar15 >> 0x10);
  uVar29 = (ushort)((uVar32 << bVar27 | uVar32 >> 0x20 - bVar27) >> (bVar16 & 0x1f)) |
           (ushort)(uVar33 << 0x20 - (bVar16 & 0x1f));
  bVar17 = (char)(uVar30 >> 8) << 1;
  bVar27 = (bVar16 & 0x1f) % 9;
  uVar6 = (ushort)uVar33 | 0xc000;
  uVar14 = ((int)(uVar30 & 0xffff0000 |
                 (uint)CONCAT11(bVar17 << bVar27 | bVar17 >> 9 - bVar27,(char)uVar30)) >> 1 &
           0x3fffU) << 0x10 | (uint)uVar6;
  cVar28 = (char)(uVar14 / (uint)uVar6);
  bVar27 = ~((byte)((char)((byte)((uVar31 << bVar23) >> 8) | (byte)((uVar31 >> 0x20 - bVar23) >> 8))
                   >> 1) >> 1 | (byte)(uVar34 << 7));
  uVar13 = uVar34 << 7 & 0xff00 |
           (ushort)(byte)(bVar27 << (bVar16 & 7) | bVar27 >> 8 - (bVar16 & 7));
  bVar27 = (byte)((uint)iVar15 >> 0x18);
  uVar12 = (ushort)(byte)(bVar27 << (bVar16 & 7) | bVar27 >> 8 - (bVar16 & 7)) << 8;
  uVar24 = -uVar13;
  uVar29 = (ushort)(byte)((uint)(ushort)((short)cVar28 * (short)cVar28) -
                          (uint)(ushort)(uVar29 + (ushort)iVar15 + 0x6f58 +
                                        (ushort)CARRY2(uVar29,(ushort)iVar15)) >> 8) << 8;
  uVar33 = uVar33 << ((byte)(uVar34 & 0xff) & 0x1f);
  uVar1 = (ulonglong)
          (CONCAT31((uint3)(((uint)(ushort)((int)(uVar30 & 0xffff0000) >> 0x11) << 0x10) >> 8) |
                    (uint3)(byte)((byte)(uVar14 % (uint)uVar6 >> 8) &
                                 ~(byte)((ushort)(1 << (uVar34 & 0xf)) >> 8)),
                    uVar13 != 0 || uVar24 == 0) & 0x3fffffff) << 0x20 | 0x43fbd3bf;
  uVar2 = uVar1 / (ulonglong)(uVar33 | 0xc0000000);
  uVar1 = uVar1 % (ulonglong)(uVar33 | 0xc0000000);
  uVar6 = (uVar34 & 0xff | uVar12) >> 1;
  sVar7 = (short)uVar1;
  uVar34 = sVar7 << 0xf;
  uVar13 = uVar6 | uVar34;
  uVar30 = uVar33 & 0xffff0000 | 0xc0000000 | uVar33 & 0xffff | 0xc000;
  uVar14 = (CONCAT22(sVar7,(ushort)uVar2 >> 1) & 0x3fffffff | 0x8000) / (uVar33 & 0xffff | 0xc000);
  uVar29 = uVar29 >> 0xd | (uVar24 & 0xff | uVar29) << 3;
  if ((uVar1 & 0x3fff) != 0) {
    uVar29 = uVar13;
  }
  cVar28 = (char)(uVar13 >> 8);
  bVar27 = (byte)uVar6;
  bVar17 = cVar28 >> 7;
  uVar31 = CONCAT22((undefined2)(cVar28 >> 7),
                    (ushort)(short)cVar28 >> (bVar27 & 0xf) | (short)cVar28 << 0x10 - (bVar27 & 0xf)
                   ) >> 0xf;
  uVar14 = (int)(short)((short)(char)((char)uVar14 >> (bVar27 & 0x1f)) * (short)(char)(uVar14 >> 8))
           * (int)(short)uVar30;
  sVar7 = (short)(uVar14 >> 0x10);
  uVar36 = -((uVar26 | (ushort)((uVar12 & 0xfe00) >> 1 | uVar34 |
                                (ushort)(byte)((bVar27 + 0x65) - (bVar17 < 0x78)) | (ushort)uVar31))
             >> 1 | (uint)(sVar7 != 0 && sVar7 != -1) << 0x1f);
  uVar32 = ((uint)(ushort)(uVar2 >> 0x10) << 0x10 | uVar14 & 0xffff) + 0x5daacb32;
  uVar6 = ((ushort)uVar36 & 0xff00 | (ushort)(byte)((char)uVar36 - 0x10)) + 0x6f79;
  uVar26 = (uint)uVar29 << 0x10 | (uint)CONCAT11(bVar17 + 0x71,bVar17) & 0xffffff00;
  bVar17 = (byte)((uVar26 | (byte)(bVar17 >> 1 | 0x80)) << 1);
  bVar27 = (byte)(((uint)uVar29 << 0x10) >> 0x1f);
  bVar16 = (byte)(uVar32 >> 8);
  bVar23 = bVar16 >> 1;
  uVar4 = CONCAT14(bVar16,uVar31 - 1) & 0x1ffffffff;
  uVar6 = uVar6 >> ((byte)uVar6 & 0x1f);
  uVar14 = (uVar32 & 0xffff0000 | (uint)CONCAT11(bVar23,(char)uVar32)) >> 1;
  uVar32 = uVar14 | (uint)((uVar32 & 1) != 0) << 0x1f;
  bVar16 = (char)((uint)uVar6 >> 8) - (char)uVar6;
  uVar34 = CONCAT11(bVar16 == 0,bVar17 | bVar27);
  uVar31 = uVar36 & 0xffff0000 |
           (uint)CONCAT11(0xcf,(char)((uVar6 & 0xff | (ushort)bVar16 << 8) >> 1)) |
           1 << ((uint)uVar34 & 0x1f);
  bVar16 = (byte)(uVar31 >> 8);
  cVar28 = (char)uVar31;
  sVar25 = CONCAT11(bVar16 >> 3 | bVar16 << 5,cVar28);
  uVar30 = (int)(short)uVar34 + uVar30;
  sVar7 = uVar34 + sVar25;
  uVar6 = sVar7 + 1;
  uVar12 = (ushort)uVar14;
  if ((SCARRY2(uVar34,sVar25) != SCARRY2(sVar7,1)) == (short)uVar6 < 0) {
    uVar6 = uVar12;
  }
  uVar31 = uVar31 & 0xffff0000 | (uint)CONCAT11(bVar38,cVar28) & 0xffffff00 |
           (uint)(byte)(cVar28 << 1);
  uVar14 = 0;
  if (uVar32 != 0) {
    while ((uVar32 >> uVar14 & 1) == 0) {
      uVar14 = uVar14 + 1;
    }
  }
  bVar16 = bVar17 & 0x1f | bVar27;
  uVar14 = uVar14 >> bVar16 | uVar14 << 0x20 - bVar16;
  bVar27 = bVar17 & 0x1f | bVar27;
  uVar32 = uVar31 << bVar27 | uVar31 >> 0x20 - bVar27;
  uVar26 = ((uVar26 & 0x7fff8000) << 1 | (uint)uVar34) & uVar14;
  bVar27 = (byte)uVar26 & 0x1f;
  uVar31 = (uint)(CONCAT14((byte)uVar30 < 0x74,uVar26) >> bVar27) | uVar26 << 0x21 - bVar27;
  bVar27 = (byte)uVar14;
  bVar16 = (byte)uVar31;
  cVar28 = (char)bVar27 >> 7;
  uVar26 = uVar32 << 0xc;
  uVar34 = CONCAT11(cVar28,bVar27 >> (bVar16 & 0x1f)) | 0xca00;
  uVar29 = (ushort)uVar31;
  uVar34 = uVar34 ^ (ushort)(uVar34 == uVar12) *
                    (uVar34 & (uVar12 ^ (ushort)(uVar34 == uVar12) * (uVar12 ^ uVar29)));
  uVar12 = ((ushort)(uVar32 >> 0x14) | (ushort)uVar26) ^ 0x8290;
  uVar31 = ~CONCAT22((ushort)(uVar4 >> 0x1b) | (ushort)((uint)((int)uVar4 << 0x16) >> 0x10),
                     (short)(char)bVar23 >> 2);
  uVar34 = (short)(uVar34 & 0xff00 | (ushort)(byte)((char)uVar34 << 1)) >> (bVar16 & 0x1f);
  uVar14 = CONCAT22((short)cVar28 >> 7,uVar34) << 1;
  bVar23 = (byte)uVar14;
  cVar28 = (-1 < (short)uVar12) + bVar23;
  bVar17 = (byte)(uVar30 >> 8);
  bVar27 = (bVar16 & 0x1f) % 9;
  bVar11 = (byte)(uVar12 >> (bVar16 & 0x1f));
  uVar30 = uVar30 & 0xfff70000 |
           (uint)CONCAT11((byte)((CONCAT11(CARRY1(-1 < (short)uVar12,bVar23),bVar17) & 0xfffb) >>
                                bVar27) | (bVar17 & 0xfb) << 9 - bVar27,cVar28) & 0xffffff00 |
           (uint)(byte)(cVar28 - 1);
  uVar14 = uVar14 ^ 1 << (((uint)uVar34 & 0xf) << 1);
  uVar34 = -(short)uVar14;
  uVar14 = uVar14 & 0xffff0000;
  uVar12 = (ushort)uVar31;
  iVar15 = 0;
  if (uVar30 != 0) {
    while ((uVar30 >> iVar15 & 1) == 0) {
      iVar15 = iVar15 + 1;
    }
  }
  uVar30 = uVar30 - (ushort)(uVar6 + 1);
  uVar13 = (short)~(uVar14 | uVar34) - 1;
  uVar32 = ~(uVar14 | uVar34) & 0xffff0000;
  sVar7 = (short)((uint)(int)(short)uVar29 >> 1);
  uVar33 = (uVar32 | uVar13) * -0x18f45095;
  bVar27 = !bVar38 * '\x02' - 2;
  bVar17 = (byte)(CONCAT11(1 < (byte)(!bVar38 * '\x02'),(char)uVar30 << 1) >> 1);
  uVar8 = uVar14 | uVar30 & 0xff00 | (uint)bVar17;
  uVar36 = (uint)(ushort)(((uVar34 & 0x7f00) << 1 | (ushort)bVar27) << 1 |
                         (sVar7 << 1 | (ushort)(sVar7 < 0)) + 1 >> 0xf);
  uVar20 = uVar30 & 0xffff0000 | uVar36;
  uVar36 = uVar36 << 0x19 | uVar20 >> 8;
  uVar30 = uVar26 & 0x930a0000 |
           (uint)(byte)(((((bVar11 >> 1 | bVar11 << 7) - (char)(uVar6 + 1) & 0xf9) >>
                         (bVar16 + 0x44 & 0x1f)) - 0x2e) + ((char)uVar30 < '\0')) | 0x4000;
  if ((ushort)(((uVar12 << 3 | uVar12 >> 0xd) + uVar34) * 2 | (ushort)uVar8 >> 0xf) == 0) {
    uVar30 = uVar36;
  }
  bVar23 = (byte)uVar30;
  uVar9 = (uint)CONCAT11(0xab,bVar23);
  uVar26 = 0x1f;
  if (uVar8 != 0) {
    while (uVar8 >> uVar26 == 0) {
      uVar26 = uVar26 - 1;
    }
  }
  bVar16 = (byte)uVar33;
  bVar11 = bVar16 ^ (bVar17 == bVar16) * (bVar16 ^ bVar23);
  uVar6 = (short)uVar26 + (short)(uVar20 >> 8);
  uVar34 = uVar13 * 8 | uVar6 >> 0xd;
  sVar7 = uVar6 + uVar34 + (ushort)((bVar27 & 0x80) != 0);
  uVar6 = (ushort)(byte)(bVar17 ^ (bVar17 == bVar16) * (bVar17 & bVar11)) *
          (ushort)(byte)(uVar9 >> 8);
  bVar27 = (byte)uVar6;
  bVar17 = (byte)(uVar36 >> 1);
  bVar17 = bVar17 ^ (bVar27 == bVar17) * (bVar17 ^ (byte)((uint)uVar6 >> 8));
  uVar8 = uVar14 | (uint)uVar6 & 0xffffff00 |
          (uint)(byte)(bVar27 ^ (bVar27 == bVar17) * (bVar27 & bVar17));
  uVar14 = (uVar33 & 0xffff0000 | (uint)CONCAT11((char)(uVar33 >> 8) + '\x01',bVar16) & 0xffffff00 |
           (uint)bVar11) ^ 1 << (uVar9 & 0x1f);
  uVar33 = -(uVar30 & 0xffff0000 | uVar9 & 0xffffff00 | (uint)(byte)(bVar23 << 1));
  bVar23 = (char)uVar33 + 1;
  bVar27 = (byte)(uVar14 >> 8);
  uVar30 = uVar32 | uVar34;
  if (bVar38) {
    uVar30 = uVar8;
  }
  uVar6 = (ushort)(CONCAT12(CARRY1(bVar23,bVar27),sVar7) >> 4);
  uVar29 = sVar7 * 0x2000 | uVar6;
  bVar16 = (byte)uVar14;
  uVar34 = (ushort)uVar14 & 0xff00 |
           (ushort)(byte)(bVar16 >> (bVar16 & 7) | bVar16 << 8 - (bVar16 & 7));
  uVar12 = -uVar34;
  uVar14 = uVar14 & 0xffff0000;
  uVar8 = (int)(uVar8 >> 1 | (uint)(uVar34 != 0) << 0x1f) >> ((byte)uVar12 & 0x1f);
  uVar32 = CONCAT22((ushort)(uVar36 >> 0x11),
                    CONCAT11((char)(uint3)(uVar36 >> 9) >> ((byte)uVar12 & 0x1f),bVar17));
  if ((uVar26 & 0xffff0000 | (uint)uVar29) == 0) {
    uVar32 = uVar14 | (uint)uVar12;
  }
  cVar28 = (char)(((ushort)uVar8 & 0x3ffd) / (ushort)(byte)((byte)(uVar33 >> 8) | 0xc0));
  uVar32 = uVar32 + 0x357d0b2f;
  uVar31 = uVar32 + (uVar31 & 0xffff0000);
  uVar34 = uVar12 + CONCAT11((char)((uint)uVar12 >> 8),bVar23 + bVar27);
  uVar36 = (uint)(ushort)(uVar12 & 0xff | (ushort)(-1 < (short)uVar34) << 8);
  bVar27 = (byte)uVar31 & 1;
  uVar13 = (ushort)uVar31 & 0xff00 | (ushort)(byte)((byte)uVar31 >> 1 | bVar27 << 7);
  bVar27 = ((char)(uVar12 & 0xff) - (char)(uVar36 >> 8)) - bVar27;
  if (bVar27 != 0) {
    uVar13 = (ushort)uVar30;
  }
  uVar24 = (ushort)uVar32 >> 1 | (ushort)((uVar32 & 1) != 0) << 0xf;
  uVar32 = uVar32 & 0xffff0000 | (uint)uVar24;
  uVar12 = -uVar13;
  uVar31 = uVar31 & 0xffff0000 | uVar36 & 0xffffff00 | (uint)bVar27;
  if (uVar13 == 0 && uVar12 != 0) {
    uVar31 = uVar14 | uVar34;
  }
  cVar5 = (char)uVar12;
  cVar22 = (char)((uint)uVar12 >> 8);
  if (cVar22 <= cVar5) {
    uVar30 = uVar33 & 0xffff0000 | (uint)uVar12;
  }
  uVar36 = (uint)(ushort)(uVar12 & 0xff | (ushort)(cVar5 < cVar22) << 8);
  uVar12 = (short)uVar30 + 0xacb2;
  uVar8 = uVar8 & 0xffff0000;
  iVar15 = (uVar33 & 0xffff0000 | uVar36) << 1;
  bVar27 = (byte)iVar15 | 1;
  uVar20 = uVar8 | (uint)(ushort)(short)cVar28 & 0xffffff00;
  uVar9 = uVar20 | (byte)-cVar28;
  uVar26 = uVar26 & 0xffff0000 | (uint)(ushort)((short)(uVar29 ^ uVar6 & 2) >> 1);
  if (!bVar38) {
    uVar26 = uVar9;
  }
  uVar14 = (uVar14 | (uint)(ushort)(uVar34 & 0xff | (ushort)(cVar22 <= cVar5) << 8) & 0xffffff00 |
           (uint)(byte)((byte)(uVar34 & 0xff) & (byte)((uint)iVar15 >> 8))) * 2;
  bVar17 = (char)((int)uVar9 >> 1) >> (sbyte)uVar14 ^ (byte)uVar31;
  cVar28 = (char)((uint)(ushort)((short)uVar31 + (ushort)uVar26) >> 8);
  bVar23 = -cVar28;
  bVar16 = bVar27 - 1;
  if (cVar28 != '\0') {
    uVar12 = (ushort)((uVar36 & 0x7f80) << 1) | (ushort)bVar16;
  }
  uVar36 = (uVar33 & 0x7fff0000) << 1;
  sVar7 = (short)((int)uVar8 >> 0x11);
  uVar34 = (ushort)uVar14 ^ 1 << (uVar12 & 0xf);
  uVar6 = ((ushort)CONCAT31((int3)((int)uVar20 >> 9),bVar17) >> 1) << ((byte)uVar34 & 0x1f);
  bVar17 = (bVar23 >> 1 | ((bVar17 & 1) != 0) << 7) ^ 0x16;
  uVar31 = uVar31 & 0xffff0000 | (uint)CONCAT11(bVar17 >> 1,bVar23);
  uVar14 = uVar14 & 0xffff0000 | (uint)(uVar34 ^ uVar34 & 1);
  if ((char)bVar17 < '\0') {
    uVar14 = uVar30 & 0xffff0000 | (uint)(uVar12 | 0x8000);
  }
  uVar13 = (ushort)uVar26 >> ((byte)uVar14 & 0x1f);
  uVar9 = uVar26 & 0xffff0000 | (uint)uVar13;
  uVar8 = (uVar36 | CONCAT11((char)bVar27 < '\x01',bVar16)) >> 1;
  uVar29 = (ushort)(uVar36 >> 0x11) | (ushort)(((uint)((bVar16 & 1) != 0) << 0x1f) >> 0x10);
  uVar26 = uVar31 + uVar32;
  uVar20 = uVar26 + 1;
  uVar33 = uVar9 << 5;
  uVar34 = (ushort)uVar14 ^ 1 << ((ushort)uVar8 & 0xf);
  cVar28 = (char)uVar8 >> 1;
  uVar36 = CONCAT22(sVar7,uVar6) << 4;
  uVar35 = (ushort)((uVar30 & 0xffff0000) >> 0x1c) | (ushort)uVar36;
  bVar27 = (byte)uVar34;
  bVar17 = bVar27 & 0xf;
  uVar26 = uVar33 & 0xffff0000 |
           (uint)(ushort)(((ushort)uVar33 |
                          (ushort)(CONCAT14(CARRY4(uVar31,uVar32) || 0xfffffffe < uVar26,uVar9) >>
                                  0x1c)) >> bVar17 | CONCAT11(0x14,cVar28) << 0x10 - bVar17);
  uVar12 = uVar34 & 0xff00 | (ushort)(byte)((char)bVar27 >> 0x13);
  uVar34 = uVar12 ^ (ushort)(uVar6 == uVar12) * (uVar12 ^ uVar24);
  uVar30 = CONCAT22(sVar7,uVar6 ^ (ushort)(uVar6 == uVar12) * (uVar6 & uVar34));
  if (!SBORROW2(uVar6,uVar12)) {
    uVar30 = uVar20;
  }
  uVar36 = uVar36 & 0xffff0000;
  uVar32 = uVar36 | (ushort)(uVar35 << 1 | (ushort)((short)uVar35 < 0));
  bVar27 = ((byte)uVar34 & 0x1f) % 9;
  cVar5 = (char)((uint)uVar34 >> 8);
  uVar34 = uVar34 & 0xff;
  bVar23 = (byte)uVar34;
  uVar31 = CONCAT22(uVar29,CONCAT11(-(uVar6 < uVar12),cVar28)) & 0xffffa2bf;
  lVar3 = (longlong)
          (int)((uVar30 * (uVar20 & 0xffffff00 | (uint)(byte)((byte)uVar20 + 9)) + 0x72cf246c >>
                (bVar23 & 0x1f)) + 0x36a7a419) * (longlong)(int)uVar32;
  bVar17 = (byte)((short)lVar3 << 1) | 1;
  cVar28 = bVar17 << 1;
  uVar21 = (undefined2)((ulonglong)lVar3 >> 0x30);
  uVar18 = (undefined)((ulonglong)lVar3 >> 0x20);
  uVar30 = CONCAT22(uVar21,CONCAT11(-((char)bVar17 < '\0'),uVar18)) & 0xffffff00;
  uVar24 = CONCAT11(uVar18,(char)uVar31);
  uVar6 = (ushort)(byte)((char)(uVar31 >> 8) << (bVar23 & 0x1f));
  uVar12 = (ushort)uVar30 | uVar6;
  uVar4 = CONCAT14((uVar13 & 0x8000) != 0,
                   uVar14 & 0xffff0000 |
                   (uint)(ushort)(uVar34 | (ushort)(byte)~(byte)((uint)(ushort)(uVar34 | (ushort)(
                                                  byte)((byte)(CONCAT11((byte)uVar20 < 0xf7,cVar5)
                                                              >> bVar27) | cVar5 << 9 - bVar27) << 8
                                                  ) >> 8) << 8));
  uVar1 = (ulonglong)uVar4 << (bVar23 & 0x1f) | (ulonglong)(uVar4 >> 0x21 - (bVar23 & 0x1f));
  bVar17 = (byte)(cVar28 >> 7) >> 1 | (byte)((uVar6 << 0xf) >> 8);
  bVar27 = ((byte)uVar1 & 0x1f) % 0x11;
  uVar34 = uVar24 >> bVar27 | uVar24 << 0x11 - bVar27;
  uVar14 = (uint)((uVar34 >> (uVar34 & 0xf) & 1) != 0) << 0x10;
  bVar23 = (byte)(uVar30 >> 8);
  bVar27 = bVar23 & 0xf;
  uVar6 = (ushort)CONCAT31((int3)(char)bVar17,(char)((ushort)(short)cVar28 >> 1) + '\x01');
  uVar6 = uVar6 << bVar27 | uVar6 >> 0x10 - bVar27;
  iVar15 = CONCAT31((int3)(uVar1 >> 8),bVar23 << 7) + -0x389e669d;
  sVar7 = (short)((uVar36 | uVar14 >> 6) >> 1);
  uVar30 = iVar15 * 2 | (uint)(iVar15 < 0);
  uVar31 = (int)uVar30 >> ((byte)uVar30 & 0x1f);
  return CONCAT44(in_EDX,CONCAT22((undefined2)((char)bVar17 >> 7),uVar6 ^ uVar6 & 0x8000) +
                         CONCAT22(uVar29,uVar34 & 0xff | (ushort)!bVar38 << 8) +
                         (uVar31 & 0xffff0000 | (uint)(ushort)((short)(uVar14 >> 7) << 1 | 1)) +
                         CONCAT22(uVar21,uVar12 << 1 | (ushort)((short)uVar12 < 0)) + uVar30 +
                         CONCAT22(sVar7 >> 0xf,sVar7 + (short)uVar31) +
                         (uVar26 << 1 | (uint)((int)uVar26 < 0)) + uVar32 + 0x285ff891);
}



// WARNING: Removing unreachable block (ram,0x0804e610)

undefined8 log_size_10_var_007(void)

{
  longlong lVar1;
  ulonglong uVar2;
  uint5 uVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar7;
  byte bVar8;
  uint uVar6;
  byte bVar9;
  sbyte sVar10;
  byte bVar12;
  ushort uVar11;
  char cVar13;
  short sVar14;
  byte bVar15;
  undefined4 in_EDX;
  char cVar16;
  byte bVar17;
  byte bVar18;
  ushort uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint3 uVar25;
  uint uVar24;
  ushort uVar26;
  uint uVar27;
  uint uVar28;
  ushort uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  short sVar33;
  ushort uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  bool in_PF;
  bool bVar39;
  
  uVar31 = 0x7bebc870;
  if (in_PF) {
    uVar31 = 0x4394daf7;
  }
  uVar27 = (int)(uVar31 * -0x54cb60b5) >> 1 ^ 1 << (uVar31 >> 1 & 0x1f);
  uVar3 = CONCAT14((uVar31 >> 1 & 0x100) != 0,0x4394daf7) | 0xc000;
  iVar23 = 0x1f;
  while (0xedff3001U >> iVar23 == 0) {
    iVar23 = iVar23 + -1;
  }
  uVar35 = (uint)(ushort)((short)iVar23 << 6 | 0x20);
  uVar31 = (int)CONCAT11((char)(uVar27 >> 8) >> 0x1f,(char)uVar27) * (int)(short)uVar27;
  sVar14 = (short)(uVar31 >> 0x10);
  uVar31 = uVar31 & 0xffff;
  cVar16 = (char)(uVar31 >> 8);
  iVar23 = (uVar27 & 0xffff0000 | (uint)CONCAT11(-(sVar14 != 0 && sVar14 != -1),(char)uVar31)) +
           0x74061528;
  bVar9 = (byte)iVar23;
  uVar25 = (uint3)((uint)iVar23 >> 8) & 0xffff00;
  bVar9 = (byte)((ushort)bVar9 * (ushort)bVar9 >> 8);
  uVar35 = (uint)(ushort)((ushort)(((uVar35 & 0xff00) << 8) >> 0x10) |
                         (ushort)((uVar35 << 0x18) >> 0x10)) << 0x10 | 0x22;
  uVar4 = (ushort)CONCAT31(uVar25 | bVar9,bVar9 == 0);
  uVar26 = uVar4 >> 6;
  uVar4 = uVar26 | uVar4 << 10;
  bVar9 = (SBORROW1(cVar16,cVar16) != false) + 1;
  uVar27 = (uint)uVar4 * (uint)uVar4 & 0xffff | (uint)(ushort)(uVar25 >> 8) << 0x10;
  uVar31 = 0;
  if (uVar27 != 0) {
    while ((uVar27 >> uVar31 & 1) == 0) {
      uVar31 = uVar31 + 1;
    }
  }
  uVar27 = (uint)(uVar3 >> 0x17) & 0xffffff00 | (int)uVar3 << 10 | (uint)bVar9;
  if (in_PF) {
    uVar27 = (uint)(byte)((char)((uint)uVar4 * (uint)uVar4 >> 0x10) + 1) | 0xff0000;
  }
  bVar12 = (byte)uVar27 & 0x1f;
  uVar35 = uVar35 >> bVar12 | uVar35 << 0x20 - bVar12;
  uVar2 = (ulonglong)uVar31 * (ulonglong)uVar35;
  lVar1 = (longlong)
          (CONCAT22(0x2230,uVar26 & 0xff | (ushort)(byte)(((char)(uVar4 >> 8) << bVar9) + 0x7a) << 8
                   ) + (int)uVar2) * -0x50819cec;
  iVar23 = (int)((ulonglong)lVar1 >> 0x20);
  uVar25 = (uint3)((ulonglong)lVar1 >> 8);
  cVar16 = (char)lVar1 + -0x17 + (iVar23 != 0 && iVar23 != -1);
  iVar23 = (uint)(ushort)((ushort)uVar2 >> 1 | (ushort)((uVar2 & 1) != 0) << 0xf) *
           (CONCAT31(uVar25,cVar16) & 0xffff);
  uVar22 = CONCAT22((short)(uVar2 >> 0x30),(short)((uint)iVar23 >> 0x10));
  bVar12 = (byte)((uint)iVar23 >> 0x18);
  bVar9 = (byte)((uint)(ushort)-(short)uVar27 >> 8);
  uVar2 = (ulonglong)((uint)(ushort)(uVar2 >> 0x10) << 0x10 | (uint)bVar12) * (ulonglong)uVar22;
  uVar31 = (uint)(ushort)(-(short)uVar27 & 0xffU | (ushort)(byte)(bVar9 << 3 | bVar9 >> 5) << 8) &
           0xffffff0f;
  sVar14 = (short)(uVar35 >> 0x10);
  uVar20 = CONCAT31(uVar25 & 0xffff00 | (uint3)(byte)((cVar16 - bVar12) - 1),
                    (char)((ulonglong)lVar1 >> 8)) | 0x4977ee9f;
  uVar30 = -0x336aaf16 << (sbyte)uVar31;
  uVar26 = (short)uVar2 + 0xeac4U >> 1;
  uVar29 = (short)uVar30 << 1;
  uVar35 = (uVar27 & 0xffff0000 | uVar31) * 0x8000 - 1;
  uVar21 = uVar20 & 0xffffff00 | (uint)(byte)((char)uVar20 + 0x6b) | 0x48;
  uVar4 = uVar26 & 0x3fff;
  uVar31 = (int)(short)(uVar26 | (ushort)((uVar2 & 0x100000) != 0) << 0xf) & 0xffff0000;
  uVar26 = (ushort)(((uint)(ushort)(uVar4 / 0xc0 | uVar4 % 0xc0 << 8) | 0xc00000) /
                   ((uint)uVar29 | 0xc000));
  bVar9 = (byte)uVar35 & 0xf;
  sVar33 = ((sVar14 >> 5 | (ushort)(uVar2 >> 0x20)) & 0xfdff) - 1;
  uVar27 = uVar31 | (ushort)(uVar26 << bVar9 | uVar26 >> 0x10 - bVar9);
  if (sVar33 == 0) {
    uVar27 = uVar31;
  }
  uVar36 = CONCAT22(sVar14 >> 0x15,sVar33) ^ 1 << ((uint)uVar29 & 0x1f);
  uVar28 = CONCAT22((short)((uVar22 << 7) >> 0x10),0x1119) + 0xaa051e8;
  lVar1 = (longlong)(int)-uVar27 * (longlong)(int)uVar36;
  uVar26 = (ushort)uVar28 & (ushort)uVar21 & ~(1 << ((ushort)((ulonglong)lVar1 >> 0x20) & 0xf));
  uVar31 = uVar36 >> 0xd;
  uVar21 = (int)(uVar20 & 0xffff0000 |
                (uint)(CONCAT11((char)((ulonglong)lVar1 >> 0x28),(char)uVar21) & 0x7fff)) >> 1;
  uVar22 = CONCAT22((short)((ulonglong)lVar1 >> 0x30),
                    CONCAT11((char)((uVar20 & 0xffffff00) >> 8),(char)((ulonglong)lVar1 >> 0x20)) +
                    0x3661) & 0xffffff00;
  uVar20 = uVar22 | 1;
  uVar27 = (uVar21 + 0x334a9170) * 2;
  iVar23 = 0;
  sVar14 = 0;
  if (uVar20 != 0) {
    while (sVar14 = (short)iVar23, (uVar20 >> iVar23 & 1) == 0) {
      iVar23 = iVar23 + 1;
    }
  }
  uVar6 = SEXT24(sVar14);
  uVar21 = (uVar30 & 0xffff0000 |
           (uint)(ushort)(((uVar29 | 0xc004) - (short)uVar31) -
                         (ushort)(0xccb56e90 < uVar21 || 0xfffffffe < uVar21 + 0x334a916f))) &
           ~(1 << ((uVar31 & 0x3e) >> 1));
  if ((uVar6 & 0x100) == 0) {
    uVar6 = (uint)(ushort)(sVar14 >> 0xf) << 0x10;
  }
  uVar30 = (uint)(((ushort)uVar21 & 0xa62c) >> 1);
  uVar21 = ((uVar6 & 0xffffff00 | (uint)(byte)((char)uVar6 - 0x1b)) << 1 | uVar6 >> 0x1f) ^
           (uVar21 & 0xffff0000 | uVar30);
  uVar20 = ((uVar28 & 0xffff0000 | (uint)(ushort)(uVar26 << 1)) >> 1 |
            (uint)((short)uVar26 < 0) << 0x1f | uVar20) + 0x79f9903c;
  bVar39 = (uVar21 & 0x400) != 0;
  uVar31 = ((uVar31 & 0xfffe0000 | uVar36 << 0x13) >> 1 | 0x80000000 |
           (uint)(ushort)(short)(char)(uVar22 >> 8)) - (uVar35 & 0xffff0000 | 1);
  uVar26 = (ushort)uVar31;
  uVar35 = (uint)(ushort)(((short)uVar20 - uVar26) - 1);
  if ((byte)((byte)uVar21 | 0x23) == 0) {
    uVar35 = uVar30;
  }
  uVar22 = uVar21 & 0xffff | 0x23;
  uVar30 = uVar22 >> 3;
  lVar1 = (longlong)
          (int)(uVar21 & 0xffff0000 |
                (uint)(ushort)((ushort)uVar30 | (ushort)(uVar22 << 0xe)) & 0xffffff00 |
               (uint)(byte)((char)uVar30 << 1)) * (longlong)(int)(uVar20 & 0xffff0000 | uVar35);
  uVar27 = uVar27 & 0xffff0000 | uVar27 >> 0xe & 3;
  uVar22 = uVar27 << 1 | (uint)(ushort)((ushort)((ulonglong)lVar1 >> 0x10) >> 0xf);
  uVar31 = uVar31 & 0x7edd0000 | (uint)(ushort)((uVar26 & 0x1e40) << 1);
  if (((int)uVar27 < 0 != (int)uVar22 < 0) != (int)uVar22 < 0) {
    uVar31 = 0xf1800000;
  }
  uVar26 = CONCAT11((byte)((ulonglong)lVar1 >> 8) >> 1,(char)lVar1) + 0xc975;
  cVar16 = (char)(uVar26 >> 8);
  uVar4 = uVar26 & 0xff | (ushort)(byte)(cVar16 << 1 | 0x32a684af < uVar31) << 8;
  uVar22 = uVar20 & 0x7fff0000 | uVar35 | 0x2c9def7b;
  uVar27 = uVar22 << 0x19;
  uVar35 = ((uint)(ushort)((ushort)(byte)(cVar16 + 0x6d) << 8 | 0x16) | 0xf1800000) * -0x32beb77b;
  bVar8 = (byte)uVar35;
  uVar29 = (ushort)(uVar31 >> 0x15);
  uVar34 = uVar29 >> (bVar8 & 0xf) | uVar29 << 0x10 - (bVar8 & 0xf);
  uVar29 = (ushort)((uint)(int)(short)uVar4 >> 8) & 0xff;
  uVar31 = (int)(short)uVar4 * (int)(short)uVar4;
  bVar12 = (byte)((uVar31 & 0xffff) >> 8);
  bVar9 = (char)(uVar31 >> 0x18) - bVar12;
  uVar27 = (uVar27 | uVar22 >> 7) << 1 | uVar27 >> 0x1f;
  if (bVar9 != 0) {
    uVar27 = uVar35;
  }
  bVar15 = (byte)(uVar31 & 0xffff);
  bVar9 = bVar12 ^ (bVar15 == bVar12) * (bVar12 ^ bVar9);
  uVar22 = ((uint)(ushort)((short)uVar4 >> 0xf) << 0x10 | (uint)CONCAT11(bVar9,bVar15) & 0xffffff00
           | (uint)(byte)(bVar15 ^ (bVar15 == bVar12) * (bVar15 & bVar9))) >> 1;
  sVar14 = uVar34 - 1;
  bVar9 = (byte)(CONCAT11(bVar39,(char)(uVar31 >> 0x10) + -0x67) + -0x69d5 >> 0x18);
  uVar19 = uVar29 >> (bVar8 & 0xf) |
           CONCAT11((char)(uVar22 >> 8) + -0x10,(char)uVar22) + uVar29 << 0x10 - (bVar8 & 0xf);
  uVar4 = ((ushort)uVar35 & 0x9a08) >> 5;
  bVar15 = bVar9 >> 1 | bVar9 << 7;
  uVar29 = uVar4 & 0xff;
  uVar19 = uVar19 ^ 1 << (uVar19 & 0xf);
  bVar12 = (byte)((uint)(ushort)(uVar29 | (ushort)(byte)((char)((uint)(ushort)(uVar4 | sVar14 * 
                                                  0x800) >> 8) >> 0xb) << 8) >> 8) ^ bVar15;
  bVar9 = (byte)((uVar19 & 0xff00 | (ushort)(byte)((char)uVar19 << 1)) >> 3);
  if (-1 < (char)bVar12) {
    bVar9 = (byte)uVar29;
  }
  bVar18 = (byte)sVar14;
  bVar17 = bVar9 ^ (bVar18 == bVar9) * (bVar9 ^ bVar12);
  uVar31 = 0;
  if (uVar27 != 0) {
    while ((uVar27 >> uVar31 & 1) == 0) {
      uVar31 = uVar31 + 1;
    }
  }
  uVar31 = uVar31 | 0x8598f865;
  uVar35 = (uVar35 & 0xa1ca0000 | (uint)(ushort)(uVar29 | (ushort)bVar12 << 8)) ^ uVar31;
  bVar12 = (byte)(uVar35 >> 1);
  uVar4 = ((ushort)(byte)(bVar15 + 0x98) << 8 ^ 0x27) << 1;
  uVar4 = uVar4 & 0xff00 | (ushort)(byte)((char)uVar4 * '\x02' + 1);
  uVar4 = uVar4 << (bVar12 & 0xf) | uVar4 >> 0x10 - (bVar12 & 0xf);
  uVar29 = (uVar4 & 0xff00 | (ushort)(byte)((char)uVar4 >> 0x18)) - 1;
  uVar4 = CONCAT11(bVar39,bVar17 + (char)uVar31 + (0x67 < bVar15)) - (short)uVar31;
  if (uVar4 != 0) {
    uVar4 = ((short)(uVar34 + ((short)(uVar26 >> 1 | 0x8000) >> (bVar8 & 0x1f)) + 0x797b) >> 1) +
            0xdd0e;
  }
  uVar34 = (ushort)(byte)(bVar18 ^ (bVar18 == bVar9) * (bVar18 & bVar17)) + 0x98 & 0xff |
           (ushort)!bVar39 << 8;
  uVar19 = uVar34 + 1;
  uVar26 = (short)((int)(((uVar27 & 0xcfa1968e) >> 1) << 0x14 | (uVar27 & 0xcfa1968e) >> 0xe) >>
                  (bVar12 & 0x1f)) * 0x3023;
  if (SCARRY2(uVar34,1)) {
    uVar26 = uVar29;
  }
  cVar16 = (char)((byte)((uint)CONCAT11((char)((uint)uVar4 >> 8),bVar12) >> 8) >> 1) >>
           (bVar12 & 0x1f);
  uVar27 = uVar35 & 0xffff0000 | (uint)CONCAT11(cVar16,bVar12);
  uVar4 = uVar19 & 0xff00 | (ushort)(byte)((char)uVar19 >> 1);
  uVar29 = uVar29 & 0xff00 | (ushort)(byte)-(char)uVar29 | 1 << ((ushort)bVar12 & 0xf);
  if (SCARRY1(bVar12,'\x01')) {
    uVar29 = uVar26 + uVar19 +
             (ushort)((short)((uVar31 & 0xffff0000 | (uint)(ushort)((short)uVar31 << 1)) >> 1) < 0)
             >> (bVar12 & 0x1f);
  }
  uVar26 = CONCAT11(cVar16,bVar12 + 1) + 0xa23a;
  uVar34 = (ushort)(byte)((uint)uVar29 | 0xc0);
  uVar19 = uVar4 / uVar34 & 0xff;
  uVar34 = uVar19 | uVar4 % uVar34 << 8;
  uVar27 = uVar27 >> (bVar12 & 0x1f) | uVar27 << 0x20 - (bVar12 & 0x1f);
  uVar4 = (short)(((short)(char)bVar12 & 0xfff7U) + uVar4) >> 1;
  uVar31 = -((uint)uVar26 & 0xffffff00 | (uint)(byte)((char)uVar26 >> 1)) & 0xffff;
  uVar26 = (ushort)(uVar31 << 2) | (ushort)(uVar31 >> 0xf);
  bVar8 = (byte)uVar26;
  bVar9 = bVar8 + 0xb2;
  uVar31 = CONCAT22((undefined2)((char)bVar12 >> 7),uVar4);
  if ((char)bVar9 < '\0') {
    uVar31 = uVar27;
  }
  bVar12 = (byte)uVar27 & 0x1f;
  uVar30 = (uint)(int)(short)uVar34 >> bVar12 | uVar27 << 0x20 - bVar12;
  uVar2 = (ulonglong)
          ((CONCAT22((ushort)((uint)uVar29 | 0xc0) & uVar4,
                     uVar19 | (ushort)(byte)((char)((uint)uVar34 >> 8) + 0x35) << 8) & 0x3fffffff) /
           (uint)(uVar26 | 0xc000) & 0xff00 | (uint)(0x4d < bVar8 && bVar9 != 0)) *
          (ulonglong)uVar31;
  uVar22 = (uint)uVar2;
  uVar20 = uVar27 << 1 | 1;
  uVar21 = CONCAT31((int3)(uVar2 >> 0x28),(byte)(uVar2 >> 0x20) >> 1 | ((int)uVar27 < 0) << 7);
  uVar35 = uVar21 & ~(1 << (uVar31 & 0x1f));
  if ((uVar21 >> (uVar31 & 0x1f) & 1) == 0) {
    uVar35 = uVar22;
  }
  uVar26 = (short)uVar31 + (short)uVar20 + 1;
  bVar12 = (byte)uVar20 & 7;
  bVar12 = (byte)uVar35 << bVar12 | (byte)uVar35 >> 8 - bVar12;
  if ((uVar2 & 0x7b00) != 0) {
    uVar26 = (ushort)uVar35 & 0xff00 | (ushort)bVar12;
  }
  uVar20 = uVar30 << (bVar9 & 0xf) | uVar30 >> 0x20 - (bVar9 & 0xf);
  uVar4 = (ushort)uVar20;
  uVar36 = uVar20 & 0xffff0000 |
           (uint)(ushort)(uVar4 << (bVar9 & 0xf) | uVar4 >> 0x10 - (bVar9 & 0xf));
  sVar14 = (short)((ulonglong)((longlong)(int)uVar36 * -0x48bde9c3) >> 8) << 9;
  uVar4 = (ushort)uVar30 & 0xff;
  uVar26 = (ushort)(((uVar31 & 0xffff0000 | (uint)(uVar26 & (bVar9 & 0xef))) << (bVar9 & 0xf)) >> 1)
  ;
  uVar29 = uVar26 - uVar4;
  uVar26 = (bVar9 & 0xef) + uVar29 + (ushort)(uVar26 < uVar4);
  uVar27 = uVar27 << 1 & 0xffff0000 | (uint)uVar26 & 0xffffff00 | (uint)(byte)-(char)uVar26;
  uVar31 = (uint)uVar29 << 1;
  uVar20 = uVar27 ^ (uint)(uVar22 == uVar27) * (uVar27 ^ uVar36);
  uVar27 = (uVar22 ^ (uint)(uVar22 == uVar27) * (uVar22 & uVar20)) * 2;
  bVar12 = (char)uVar20 + bVar12;
  uVar21 = uVar20 & 0xffffff00 | (uint)(byte)(bVar12 << (bVar12 & 0x1f));
  uVar28 = uVar21 ^ 0xbd25;
  uVar22 = uVar30 & 0xff;
  if (-1 < (short)((ushort)uVar21 ^ 0xbd25)) {
    uVar22 = uVar27;
  }
  uVar27 = uVar27 + 0x896456ee >> 1;
  uVar21 = uVar22 & 0xffff0000;
  uVar30 = uVar31 & 0x1f;
  uVar6 = uVar27 ^ 1 << uVar30;
  if ((uVar27 >> uVar30 & 1) != 0) {
    uVar28 = uVar20 & 0xffff0000 | uVar31 & 0xffff;
  }
  bVar9 = (byte)uVar28 & 0x1f;
  uVar27 = uVar36 << bVar9 | (uVar21 | (ushort)((ushort)uVar22 | 1)) >> 0x20 - bVar9;
  uVar4 = CONCAT11(0xac,(char)((short)uVar6 >> 1));
  uVar31 = uVar6 & 0xffff0000 | (uint)uVar4;
  uVar26 = ((ushort)uVar28 ^ 1 << ((ushort)uVar27 & 0xf)) & (ushort)uVar27;
  uVar20 = uVar27 ^ (uint)(uVar31 == uVar27) *
                    (uVar27 ^ CONCAT31((int3)((uint3)(CONCAT22((short)((ulonglong)
                                                                       ((longlong)(int)uVar36 *
                                                                       -0x48bde9c3) >> 0x10),sVar14)
                                                     >> 8) & 0xffff00 |
                                             (uint3)(byte)(sVar14 >> 0x15)) >> 8,1));
  uVar31 = uVar31 ^ (uint)(uVar31 == uVar27) * (uVar31 & uVar20);
  uVar29 = uVar26 & 0xff |
           (ushort)(byte)((char)((uint)(ushort)(uVar26 & 0xff |
                                               (ushort)(byte)((char)((uint)uVar26 >> 8) <<
                                                             ((byte)uVar26 & 0x1f)) << 8) >> 8) -
                         0x25) << 8;
  uVar27 = (uint)(uint3)(CONCAT21((short)(uVar31 >> 0x10),
                                  (byte)(uVar31 >> 8) >> 1 | (uVar4 < 0xf4b1) << 7) ^
                        (uint3)((uint)(1 << ((uint)uVar29 & 0x1f)) >> 8)) << 8;
  uVar26 = (ushort)uVar27 >> 6;
  uVar27 = uVar27 & 0xffff0000;
  uVar22 = uVar27 | uVar26;
  uVar31 = 0x1f;
  if (uVar22 != 0) {
    while (uVar22 >> uVar31 == 0) {
      uVar31 = uVar31 - 1;
    }
  }
  uVar11 = uVar29 + 1 | 0xcfd5;
  uVar19 = SEXT12((char)((short)uVar26 >> 1));
  bVar9 = (char)uVar11 + 1;
  iVar23 = (int)(short)uVar19 * -0x302b;
  uVar26 = (ushort)((uint)iVar23 >> 0x10);
  uVar29 = (ushort)iVar23;
  uVar34 = (ushort)(uVar29 == 0xcfd5) * (uVar26 ^ 0xcfd5) ^ 0xcfd5;
  uVar5 = uVar29 ^ (ushort)(uVar29 == 0xcfd5) * (uVar29 & uVar34);
  if (SBORROW2(uVar29,-0x302b)) {
    uVar34 = uVar5;
  }
  iVar23 = (uVar31 & 0xffff0000 | (uint)uVar19 & 0xffffff00 | (uint)(-1 < (char)bVar9)) + 0x73503db4
  ;
  uVar29 = uVar5 - uVar34;
  if (iVar23 < 0) {
    uVar29 = uVar34;
  }
  uVar19 = (ushort)(uVar27 >> 0x10);
  uVar5 = (ushort)iVar23;
  uVar4 = (uVar4 + 0xb4f & (short)uVar20 - 0xa5bU >> 1) + 0x314a;
  if ((short)uVar29 < (short)uVar26) {
    uVar4 = uVar5;
  }
  uVar26 = uVar26 + 0x9188;
  uVar27 = uVar35 & 0xffff0000 | (uint)uVar26;
  uVar31 = ~(uVar28 & 0xffff0000 | (uint)uVar11 & 0xffffff00 | (uint)bVar9) & 0xffffff0f;
  sVar10 = (sbyte)uVar31;
  uVar31 = uVar31 * 0x515b4811;
  uVar11 = (uVar4 - 0xbd0) * 0xf10;
  uVar35 = (uVar20 & 0xffff0000 | (uint)uVar34) ^
           1 << ((uint)(ushort)(uVar5 >> sVar10 | uVar34 << 0x10 - sVar10) & 0x1f);
  bVar9 = (byte)uVar26 & 0x1f;
  iVar23 = (uVar27 >> bVar9 | uVar27 << 0x20 - bVar9) << 1;
  uVar27 = (uVar31 >> 0x1d | (uVar31 & 0xffff0000 | (uint)uVar26) << 3) ^ 1;
  bVar9 = (byte)uVar27;
  bVar9 = bVar9 << (bVar9 & 7) | bVar9 >> 8 - (bVar9 & 7);
  uVar4 = (ushort)uVar35 & 0xff00 | (ushort)(uVar35 >> 1) & 0x7f;
  uVar26 = uVar11 + 0x954a;
  sVar10 = (sbyte)((uint)bVar9 & 0xffffff0f);
  uVar29 = uVar4 >> sVar10 | uVar4 << 0x10 - sVar10;
  uVar4 = ((ushort)uVar27 & 0xff00 | (ushort)((uint)bVar9 & 0xffffff0f) | 0x400) >> sVar10 |
          (short)(char)bVar9 << 0x10 - sVar10;
  uVar31 = (uVar21 | uVar11) * -0xeddcc90 & 0xffff0000;
  uVar28 = uVar31 | CONCAT11((byte)((uint)iVar23 >> 8) >> (bVar9 & 0x1f),(byte)iVar23 < 0xde);
  uVar21 = uVar21 | (ushort)(uVar26 + uVar29);
  bVar12 = (byte)uVar4;
  uVar20 = uVar35 & 0xffff0000 | (uint)uVar26 & 0xffffff00 |
           (uint)(byte)((~(byte)uVar26 - bVar12) - CARRY2(uVar26,uVar29));
  uVar35 = (uVar35 & 0xffff0000 | (uint)((ushort)(short)(char)bVar9 >> 7)) >> (bVar12 & 0x1f);
  uVar22 = (uVar27 & 0xffff0000 | (uint)uVar4) ^ uVar21;
  uVar27 = CONCAT22((uVar19 ^ uVar19 & 8) >> 1,0x1349) & 0xffffff00 | 0x35;
  uVar30 = uVar35 ^ (uint)(uVar27 == uVar35) * (uVar35 ^ uVar27);
  uVar27 = uVar27 ^ (uint)(uVar27 == uVar35) * (uVar27 & uVar30);
  uVar26 = (ushort)uVar27;
  uVar29 = (ushort)uVar20;
  uVar4 = uVar26 ^ (ushort)(uVar26 == uVar29) * (uVar26 & uVar29);
  uVar27 = uVar27 & 0xffff0000;
  uVar35 = uVar27 | uVar4;
  if (uVar26 == uVar29) {
    uVar21 = uVar28;
  }
  uVar36 = 0x1f;
  if (uVar35 != 0) {
    while (uVar35 >> uVar36 == 0) {
      uVar36 = uVar36 - 1;
    }
  }
  uVar26 = (ushort)uVar30;
  uVar29 = uVar26 ^ (ushort)(uVar4 == uVar26) * (uVar26 ^ (ushort)uVar22);
  uVar4 = uVar4 ^ (ushort)(uVar4 == uVar26) * (uVar4 & uVar29);
  uVar35 = uVar22 >> 0xd;
  uVar6 = (uVar20 & 0x7fff807f) << 1;
  uVar26 = uVar4 >> 1 | (ushort)((uVar4 & 1) != 0) << 0xf;
  uVar20 = uVar30 & 0xffff0000 | (uint)(uVar29 >> 1) | 0x9c53f451;
  if (!bVar39) {
    uVar20 = uVar27 | uVar26;
  }
  uVar26 = uVar26 + 0x18f3;
  uVar4 = uVar26 & 0xff | (ushort)(byte)((char)((uint)uVar26 >> 8) >> 0x1f) << 8;
  uVar29 = (ushort)uVar20;
  uVar26 = 1 << (uVar29 & 0xf);
  uVar34 = (ushort)(uVar28 >> 1) ^ uVar26;
  uVar27 = CONCAT22((short)uVar4 >> 0xf,uVar4 + 0xd56f);
  if (SBORROW2(uVar4,0x2a91)) {
    uVar27 = uVar36 & 0xffffff00 | (uint)((short)(uVar21 >> ((byte)uVar22 & 0x1f)) != 0);
  }
  bVar12 = (byte)uVar35;
  bVar9 = (bVar12 & 0x1f) % 9;
  cVar13 = (char)(uVar35 >> 8);
  uVar35 = uVar35 & 0xffff0000 | uVar22 << 0x13;
  cVar16 = (char)uVar27;
  uVar19 = CONCAT11((ushort)(uVar4 + 0xd56f) != 0,(char)uVar6) >> 1;
  cVar7 = (char)(uVar27 >> 8);
  lVar1 = (longlong)(int)(uVar27 & 0xffff0000 | (uint)CONCAT11(cVar16 + cVar7,cVar16)) *
          (longlong)CONCAT31((undefined3)(cVar16 >> 7),cVar7);
  uVar27 = uVar35 | (uint)CONCAT11((byte)(CONCAT11(uVar4 < 0x2a91,cVar13) >> bVar9) |
                                   cVar13 << 9 - bVar9,bVar12) & 0xffffff00 |
           (uint)(byte)((bVar12 & 0xf) + 0xb6);
  sVar14 = (short)((ulonglong)lVar1 >> 0x20);
  uVar4 = sVar14 + uVar34 * -0x79dd;
  if ((SBORROW2(sVar14,uVar34 * 0x79dd) != false) == (short)uVar4 < 0) {
    uVar27 = uVar35 | uVar4;
  }
  bVar9 = (byte)uVar27;
  uVar4 = (short)(uVar4 & 0xff | (ushort)(byte)-(char)(uVar4 >> 8) << 8) >> (bVar9 & 0x1f);
  uVar5 = uVar29 + 0x4c35;
  uVar22 = uVar20 & 0xffff0000 | (uint)uVar5;
  bVar8 = (byte)(uVar4 >> 8);
  uVar35 = ((uVar6 & 0xffff0000 |
             (uint)(ushort)(uVar19 | (ushort)(byte)((byte)((uint)(ushort)(uVar19 | uVar26 << 0xf) >>
                                                          8) >> (bVar12 & 0xf)) << 8) |
            CONCAT22((ushort)(uVar31 >> 0x11),uVar34)) & 0x1fffe0) << 0xb ^ uVar22;
  uVar31 = 0x1f;
  if (uVar35 != 0) {
    while (uVar35 >> uVar31 == 0) {
      uVar31 = uVar31 - 1;
    }
  }
  uVar21 = CONCAT22((short)((ulonglong)lVar1 >> 0x30),
                    uVar4 & 0xff | (ushort)(byte)(bVar8 << 5 | bVar8 >> 3) << 8) << (bVar9 & 0x1f) |
           uVar22 >> 0x20 - (bVar9 & 0x1f);
  bVar8 = (byte)(uVar21 >> 8);
  bVar12 = (char)uVar21 << (bVar9 & 0x1f);
  uVar22 = (uint)CONCAT11(bVar8 >> (bVar9 & 7) | bVar8 << 8 - (bVar9 & 7),(char)uVar21) & 0xffffff00
  ;
  uVar26 = ((ushort)uVar31 & 0xff00 | (ushort)(uVar31 >> 1) & 0x7f) + 0x8870;
  uVar21 = uVar21 & 0xffff0000 |
           (uint)CONCAT11(((uVar21 & 0xffff0000 | uVar22 | (uint)bVar12) >> ((uint)uVar26 & 0x1f) &
                          1) == 0 && (char)(uVar22 >> 8) != -1,bVar12);
  uVar26 = (short)uVar26 >> 1;
  uVar30 = CONCAT22((ushort)(((uVar20 & 0xffff0000 | (uint)(ushort)(uVar29 + 0x55e3)) >>
                             (bVar9 & 0x1f)) >> 0x10) |
                    (ushort)(((uVar35 & 0xffff0000 | (uint)(ushort)(uVar29 + 0x4c36)) <<
                             0x20 - (bVar9 & 0x1f)) >> 0x10),(ushort)bVar9 + 0x4273);
  uVar3 = CONCAT14((char)((uint)(ushort)(uVar29 + 0x4c36) >> 8),uVar27) & 0x1ffffffff;
  uVar27 = (uint)(uVar3 >> 0x12);
  uVar20 = (int)uVar3 << 0xf | uVar27;
  bVar9 = (byte)uVar27 & 0xf;
  uVar4 = uVar5 >> bVar9 | uVar5 << 0x10 - bVar9;
  uVar22 = uVar31 & 0xffff0000 | (uint)uVar26 & 0xffffff00 | (uint)(byte)~(byte)uVar26;
  uVar27 = uVar30;
  if (uVar20 < uVar30) {
    uVar27 = uVar22;
  }
  uVar31 = uVar31 & 0xffff0000 | (uint)(ushort)((ushort)uVar22 ^ 1 << (uVar4 & 0xf));
  if (uVar30 == uVar20) {
    uVar31 = uVar27;
  }
  bVar9 = (byte)uVar31;
  bVar12 = (byte)(uVar31 >> 8);
  bVar8 = bVar12 ^ (bVar9 == bVar12) * (bVar12 ^ 0x14);
  bVar15 = (byte)(uVar20 >> 2);
  uVar30 = uVar21 << (bVar15 & 0x1f);
  uVar22 = ((uint)CONCAT11(bVar8,bVar9) & 0xff00 |
           (uint)(byte)(bVar9 ^ (bVar9 == bVar12) * (bVar9 & bVar8))) * (uVar30 & 0xffff);
  uVar26 = (ushort)uVar22;
  uVar11 = (ushort)uVar30;
  uVar19 = uVar11 ^ (ushort)(uVar26 == uVar11) * (uVar11 ^ (ushort)(uVar20 >> 2));
  uVar34 = uVar26 ^ (ushort)(uVar26 == uVar11) * (uVar26 & uVar19);
  uVar29 = uVar5 * 0x200;
  if (uVar11 < uVar26) {
    uVar29 = uVar4;
  }
  bVar9 = ((char)uVar34 - (char)((uint)uVar19 >> 8)) - 1;
  uVar20 = (uVar31 & 0xffff0000 | (uint)uVar34 & 0xffffff00 | (uint)bVar9) >> 1 |
           (uint)((bVar9 & 1) != 0) << 0x1f;
  uVar28 = uVar30 & 0xffff0000 |
           (uint)(ushort)((uVar19 & 0xff00 | (ushort)(byte)((byte)uVar19 << 7 | (byte)uVar19 >> 1))
                         + 0xcc76);
  uVar26 = (uVar29 | 0x8039) + 0x3f17;
  uVar35 = (uVar21 + CONCAT22((short)((uVar35 & 0xffff0000) >> 0x10),0x3214) >> 8 & 0xffff00) << 8 |
           uVar22 >> 0x11;
  uVar20 = uVar20 ^ (uint)(uVar20 == uVar35) * (uVar20 & uVar35);
  uVar29 = uVar29 & uVar26;
  uVar31 = (uint)uVar29;
  if (bVar39) {
    uVar26 = (ushort)uVar27;
  }
  bVar9 = bVar15 & (byte)uVar4 & 0xf;
  uVar4 = (ushort)uVar20 >> bVar9 | uVar26 << 0x10 - bVar9;
  uVar34 = (short)uVar4 >> 0xf;
  cVar16 = (char)(uVar28 >> 1);
  uVar27 = (uVar20 & 0xffff0000 | (uint)uVar4) >> 1 | uVar31 << 0x1f;
  uVar35 = (int)(uVar35 + uVar31 & 0xffff0000 | (uint)uVar34) >> 1 | 0x40000;
  uVar19 = (short)CONCAT31((uint3)(uVar28 >> 9),
                           (byte)(CONCAT11((uVar34 & 1) != 0,cVar16) >> bVar9 % 9) |
                           cVar16 << 9 - bVar9 % 9) + -0x6918 + (ushort)(uVar35 < 0x58763553);
  uVar31 = uVar31 + (uVar35 + 0xa789caad) * 2;
  bVar9 = (byte)uVar31 & 0x1f;
  uVar35 = uVar27 << bVar9 | uVar27 >> 0x20 - bVar9;
  uVar34 = uVar19 >> 1;
  uVar5 = uVar34 | (ushort)((uVar29 & 1) != 0) << 0xf;
  bVar12 = (byte)uVar31 >> 1;
  uVar4 = CONCAT11((char)(uVar31 >> 8) >> (bVar12 & 0x1f),bVar12) & 0xffdf;
  bVar9 = ((byte)uVar4 & 0x1f) % 9;
  cVar16 = (char)((uint)uVar4 >> 8);
  uVar27 = (uint)(ushort)((ushort)bVar12 & 0xdf |
                         (ushort)(byte)(cVar16 << bVar9 |
                                       (byte)(CONCAT11((bVar12 & 0x20) != 0,cVar16) >> 9 - bVar9))
                         << 8) & 0xffffff0f;
  uVar22 = uVar31 & 0xffff0000 | uVar27;
  sVar10 = (sbyte)uVar27;
  uVar29 = (short)(char)uVar19 - (uVar29 >> 1) << sVar10 | (uVar29 >> 1) >> 0x10 - sVar10;
  iVar23 = 0;
  uVar4 = 0;
  if (uVar22 != 0) {
    while (uVar4 = (ushort)iVar23, (uVar22 >> iVar23 & 1) == 0) {
      iVar23 = iVar23 + 1;
    }
  }
  uVar3 = CONCAT14((uVar4 >> 0xd & 1) != 0,
                   uVar35 & 0xffff0000 | (uint)CONCAT11((byte)(uVar35 >> 8) >> 1,(char)uVar35)) |
          0x3a00;
  uVar34 = uVar34 & 0xf;
  uVar4 = (ushort)uVar27 | 1 << uVar34;
  bVar9 = ((byte)uVar4 & 0x1f) % 0x11;
  uVar4 = uVar4 << bVar9 |
          (ushort)(CONCAT12(((ushort)uVar27 >> uVar34 & 1) != 0,uVar4) >> 0x11 - bVar9);
  uVar27 = ((uint)(uVar3 >> sVar10) | (int)uVar3 << 0x21 - sVar10) *
           (uint)(ushort)((short)uVar5 >> 1) * 2;
  uVar22 = (uint)(ushort)((short)uVar5 >> 1) * -0x2cc07bc9;
  sVar14 = (short)uVar22 + 0x406f;
  bVar9 = (byte)uVar4 & 0xf;
  uVar20 = CONCAT22((ushort)((uVar30 & 0xffff0000) >> 0x11),uVar5 >> bVar9 | uVar5 << 0x10 - bVar9)
           ^ 0xcbdf;
  uVar34 = uVar4 & 0xff | (ushort)(byte)((byte)((uint)uVar4 >> 8) >> 1) << 8;
  uVar4 = uVar34 + uVar29;
  uVar5 = (ushort)(CONCAT12((uVar27 & 8) != 0,sVar14) >> 10) | sVar14 * 0x80;
  uVar19 = (uVar4 & 0xff | (ushort)(byte)((char)((uint)uVar4 >> 8) + 0x34) << 8) * -0x5ee4 & uVar34;
  uVar4 = uVar5 + uVar19;
  uVar22 = uVar22 & 0xffff0000 | (uint)uVar4;
  if (uVar4 == 0 || (SCARRY2(uVar5,uVar19) != SCARRY2(uVar4,0)) != (short)uVar4 < 0) {
    uVar22 = uVar27 & 0xffff0000 |
             (uint)(ushort)((ushort)uVar27 | (ushort)((0U >> ((uint)uVar29 & 0x1f) & 1) != 0)) &
             0xfffffff7;
  }
  uVar25 = (uint3)(uVar20 >> 9) | (uint3)(((uint)((uVar20 & 1) != 0) << 0x1f) >> 8);
  uVar28 = (uint)(ushort)((short)(char)uVar20 + 0x683e) & 0xffffedc7;
  uVar21 = ((uint)uVar34 | ((int)(short)uVar26 * 0x55cd & 0xe000U) << 3) + uVar22;
  bVar9 = (byte)uVar28;
  uVar30 = uVar22 & 0xffff0000 | (uint)(ushort)((ushort)uVar22 >> (bVar9 & 0x1f));
  bVar9 = bVar9 & 0x1f;
  uVar31 = (uVar31 & 0xffff0000 | uVar28) << bVar9 | uVar30 >> 0x20 - bVar9;
  sVar14 = (short)uVar31;
  uVar26 = sVar14 << 1 | (ushort)(sVar14 < 0);
  uVar28 = uVar31 & 0xffff0000 | (uint)uVar26;
  uVar4 = (ushort)CONCAT31(uVar25,(char)(uVar20 >> 1) << 1) | 1;
  uVar29 = uVar4 ^ (ushort)(uVar19 == uVar4) * (uVar4 ^ uVar19);
  bVar8 = (byte)uVar29;
  uVar31 = (uint)bVar8 & 0xffffff3a;
  bVar12 = (byte)uVar26;
  bVar9 = bVar12 & 0x1f;
  uVar36 = uVar21 >> bVar9 | uVar21 << 0x20 - bVar9;
  uVar26 = SEXT12((char)(((byte)uVar19 ^ (uVar19 == uVar4) * ((byte)uVar19 & bVar8)) - (char)uVar31)
                 );
  uVar27 = uVar27 & 0xffff0000 | (uint)uVar26;
  uVar31 = (CONCAT22((short)(uVar25 >> 8),uVar29) & 0xffffff00 | uVar31) - uVar30;
  uVar21 = uVar31 ^ (uint)(uVar27 == uVar31) * (uVar31 ^ 0xe2649766);
  uVar27 = uVar27 ^ (uint)(uVar27 == uVar31) * (uVar27 & uVar21);
  bVar12 = bVar12 & 0x1f;
  uVar20 = uVar28 | 0x35cd05d1;
  uVar31 = (uint)CONCAT11((char)(uVar20 >> 8) + -0x68,(char)uVar20);
  bVar9 = (byte)((uint)(ushort)((short)uVar26 >> 0xf) >> 8);
  if ((uVar35 & 0x400) != 0) {
    uVar30 = uVar22 & 0xffff0000 | uVar31;
    bVar9 = (byte)((0xe2649766U >> bVar12) >> 8) | (byte)((uVar28 << 0x20 - bVar12) >> 8);
  }
  uVar26 = (ushort)uVar30 | (ushort)uVar36;
  bVar12 = (char)uVar27 + 0x4d;
  uVar31 = uVar20 & 0xffff0000 | uVar31;
  if ((uVar21 >> 0x13 & 1) != 0 || bVar12 == 0) {
    uVar31 = uVar36;
  }
  uVar27 = (uVar27 & 0xffff0000 |
            (uint)CONCAT11((char)(uVar27 >> 8) + bVar9,(char)uVar27) & 0xffffff00 | (uint)bVar12) +
           uVar36;
  uVar31 = (uVar31 & 0xffff4fff) << 1;
  bVar8 = (byte)uVar27;
  bVar9 = (byte)uVar31;
  bVar12 = bVar9 ^ (bVar8 == bVar9) * (bVar9 ^ (byte)uVar21);
  bVar8 = bVar8 ^ (bVar8 == bVar9) * (bVar8 & bVar12);
  bVar9 = (char)(uVar27 >> 8) << 1;
  bVar39 = (bVar9 & 4) != 0;
  uVar6 = -((uVar31 & 0xffffff00 | (uint)bVar12) & 0xf5c2f8eb);
  uVar24 = ~(uVar21 & 0xffff0000 | (uint)CONCAT11((char)(uVar21 >> 8) + -5,(byte)uVar21));
  uVar4 = (ushort)(uVar36 >> 0x18) | (ushort)(uVar36 >> 8) & 0xff00;
  uVar28 = (uint)CONCAT11(bVar39,(char)uVar6) & 0xffff00ff;
  bVar15 = (byte)uVar28;
  bVar12 = bVar15 & 0xf;
  uVar29 = uVar4 >> bVar12 | uVar4 << 0x10 - bVar12;
  uVar4 = (ushort)bVar8;
  uVar34 = uVar29 ^ (ushort)(uVar4 == uVar29) * (uVar29 ^ uVar26);
  uVar32 = CONCAT22((ushort)(((uVar36 & 0xff00) << 8) >> 0x10) | (ushort)((uVar36 << 0x18) >> 0x10),
                    uVar34);
  uVar4 = uVar4 ^ (ushort)(uVar4 == uVar29) * (uVar4 & uVar34);
  bVar18 = ~(byte)uVar24;
  uVar22 = (uint)CONCAT11((char)(uVar24 >> 8) + !bVar39,bVar18);
  lVar1 = (longlong)
          (int)(uVar27 & 0xffff0000 | (uint)uVar4 & 0xffffff00 | (uint)(byte)((char)uVar4 + bVar18))
          * (longlong)(int)uVar32;
  uVar37 = uVar30 & 0xffff0000 | (uint)uVar26 | 0x12ea37a7;
  uVar31 = (int)lVar1 + (uVar24 & 0xffff0000 | uVar22) + 1;
  bVar12 = (byte)(uVar31 >> 8);
  cVar16 = bVar12 - bVar18;
  uVar30 = uVar31 & 0xffff0000 | (uint)CONCAT11(cVar16 + -1,(char)uVar31);
  uVar31 = (uint)(bVar12 < bVar18 || cVar16 == '\0');
  uVar35 = uVar37 + 0x79a1c390;
  uVar38 = uVar35 + uVar31;
  uVar20 = uVar30 << 5;
  uVar21 = (uint)(ushort)(CONCAT11(bVar9 | (uVar36 & 0xffff) != 0,bVar8) + 0x7817U >> 3 |
                         (short)((ulonglong)lVar1 >> 0x20) << 0xd);
  uVar35 = ((uVar20 & 0xffff0000 |
            (uint)(ushort)(((ushort)uVar20 |
                           (ushort)(CONCAT14(0x865e3c6f < uVar37 || CARRY4(uVar35,uVar31),uVar30) >>
                                   0x1c)) ^ (ushort)uVar20 & 0x8000)) & ~(1 << (uVar21 & 0x1f))) - 1
  ;
  cVar16 = (char)(((uVar6 & 0xffff0000 | uVar28) >> (bVar15 & 0x1f)) >> 8) + -0x78;
  bVar9 = cVar16 * '\x02' | cVar16 < '\0';
  uVar26 = (ushort)bVar9 << 8;
  uVar31 = (uVar27 & 0xffff0000 | uVar21) - 1;
  if (bVar39) {
    uVar31 = uVar31 & 0xffff0000 | (uint)bVar9 << 8;
  }
  uVar4 = ((ushort)((int)uVar20 >> 0x1f) & 0xff00 | (ushort)(byte)((int)uVar20 >> 0x1f)) ^
          (ushort)uVar31;
  uVar29 = (ushort)uVar31 | 1 << ((ushort)uVar38 & 0xf);
  uVar27 = (uVar24 & 0xffff0000 | (uint)(ushort)(CONCAT11(-(char)(uVar22 >> 8),bVar18) >> 1)) << 1;
  uVar21 = (uint)(ushort)(uVar29 ^ (uVar29 >> 0xe & 1) << 0xe) << 1;
  iVar23 = ((uVar32 | 1 << ((uint)uVar34 & 0x1f)) ^ 1) + 1;
  uVar20 = (CONCAT22((ushort)(uVar38 >> 0x11),(ushort)(byte)(uVar38 >> 1)) - iVar23) - 1;
  bVar12 = (byte)(uVar20 >> 1) & 0xf;
  uVar4 = CONCAT11((byte)((uint)uVar4 >> 8) | (byte)(uVar27 >> 8),-(char)uVar4) << bVar12 |
          uVar26 >> 0x10 - bVar12;
  uVar29 = (short)uVar27 << bVar12 | uVar4 >> 0x10 - bVar12;
  uVar22 = iVar23 * 2;
  cVar16 = (char)uVar29 + 'J';
  bVar8 = (byte)(uVar20 >> 9);
  bVar9 = (byte)((uint)uVar29 >> 8);
  if (cVar16 == '\0' || (SCARRY1((char)uVar29,'J') != SCARRY1(cVar16,'\0')) != cVar16 < '\0') {
    bVar9 = bVar8;
  }
  bVar15 = bVar9 << 2 | (bVar9 | 0xc0) >> 6;
  uVar30 = uVar22 & 0xffff0000;
  uVar20 = (uVar21 & 0xffff0000 | (uint)(((ushort)uVar21 | 0x8000) & uVar29)) >> 1;
  uVar21 = (uint)(ushort)((ushort)(bVar15 >> 1) << 8 | 0xda) << 1;
  bVar9 = (byte)(CONCAT11(((uVar35 & 0xffff0000 |
                           (uint)CONCAT11((byte)(uVar35 >> 8) >> 1,(char)uVar35)) + 0x635aa4d8 &
                           0xffff0000 |
                           (uint)CONCAT11(bVar8 << (bVar12 + 0x80 & 0x1f),bVar12 + 0x80) &
                           0xffffff00 | (uint)(byte)(bVar12 * '\x02')) < 0xbbc4fb81,(char)uVar21) >>
                2);
  bVar12 = (bVar12 * '\x02' + 0x7f) * bVar9;
  uVar29 = uVar26 | CONCAT11(bVar15,0xda) | 0x80;
  uVar26 = (ushort)((uVar21 & 0xffffff00 | (uint)bVar9) >> 1);
  uVar35 = (uVar27 & 0x7fff0000 | (uint)(ushort)(uVar26 + 0x7c7a)) >> 1;
  uVar21 = uVar35 | 1 << (((uint)uVar29 & 0xf) << 1 | (uint)(uVar26 < 0x8386));
  uVar27 = uVar20 << 0xf;
  uVar26 = (ushort)(((uVar30 | (ushort)(((((short)((ushort)uVar22 | (ushort)((short)uVar4 < 0)) >>
                                          0x15) + -0x5761) - uVar29) - (ushort)((bVar12 & 1) != 0)))
                    << ((byte)uVar35 & 0x1f)) >> 0x11);
  uVar34 = (ushort)uVar20;
  uVar34 = uVar34 ^ (uVar34 >> 7 & 1) << 7;
  uVar31 = uVar31 & 0x7fff0000;
  uVar27 = (uVar27 & 0xffff0000 | (uint)(ushort)(uVar26 << 6 | (uVar26 | (ushort)uVar27) >> 10)) +
           0xaa956559;
  uVar19 = uVar34 & 0xfffe | 1;
  uVar29 = (ushort)uVar27 | uVar19;
  bVar8 = (byte)uVar21;
  bVar9 = bVar8 & 7;
  bVar15 = (byte)(uVar21 >> 8);
  uVar35 = (uint)CONCAT11(bVar15 >> bVar9 | bVar15 << 8 - bVar9,bVar8) | 0xc0;
  uVar26 = (ushort)((int)((uint)(ushort)((short)(ushort)bVar12 >> 1) << 0x18) >> 0x1e);
  bVar9 = (byte)uVar35;
  uVar4 = (ushort)uVar35;
  uVar4 = uVar4 >> (bVar9 & 0xf) | uVar4 << 0x10 - (bVar9 & 0xf);
  uVar35 = uVar31 | (ushort)(uVar19 + 0x374d);
  uVar26 = uVar4 & (uVar26 / (ushort)bVar9 | uVar26 % (ushort)bVar9 << 8);
  bVar12 = (byte)((uint)uVar4 >> 8);
  bVar39 = 0xfe < (byte)(bVar12 + 0x4d);
  bVar9 = (byte)uVar4;
  if ((0xb2 >= bVar12 && !bVar39) && bVar12 != 0xb2) {
    uVar35 = uVar31 | 1;
  }
  uVar22 = (uint)(0xb2 < bVar12 || bVar39) << 0x10 | uVar35 & 0xffff;
  uVar35 = uVar35 & 0xffff0000 | (uint)(ushort)((ushort)(uVar22 << 0xb) | (ushort)(uVar22 >> 6));
  iVar23 = 0x1f;
  if (uVar35 != 0) {
    while (uVar35 >> iVar23 == 0) {
      iVar23 = iVar23 + -1;
    }
  }
  bVar12 = (byte)uVar26;
  bVar8 = (byte)((uint)uVar26 >> 8);
  bVar15 = bVar8 ^ (bVar12 == bVar8) * (bVar8 ^ bVar12);
  uVar26 = (ushort)((int)(uint)CONCAT11(bVar15,~(bVar12 ^ (bVar12 == bVar8) * (bVar12 & bVar15))) >>
                   1);
  uVar4 = CONCAT11('\0' << (bVar9 & 7) | 0U >> 8 - (bVar9 & 7),bVar15);
  uVar19 = (uVar26 | 0xc000) ^ uVar26 & 0x10;
  uVar26 = (ushort)((((uint)uVar29 & 0x700 | (uint)(byte)((byte)uVar29 >> (bVar9 & 0x1f))) << 0x13 |
                    (uint)(ushort)(uVar26 >> (bVar9 & 0xf) | uVar26 << 0x10 - (bVar9 & 0xf))) %
                   (uint)(uVar26 | 0xc000)) >> 1;
  uVar35 = 0;
  while ((0x6138c4a3U >> uVar35 & 1) == 0) {
    uVar35 = uVar35 + 1;
  }
  uVar5 = uVar26 & 0xff | (ushort)(byte)(uVar35 >> 8) << 8;
  uVar26 = CONCAT11((char)((uint)uVar26 >> 8),(byte)uVar35 << 7 | (byte)uVar35 >> 2);
  uVar11 = uVar5 ^ (ushort)(uVar26 == uVar5) * (uVar5 ^ uVar4);
  return CONCAT44(in_EDX,(uVar35 & 0xffff0000 |
                         (uint)(ushort)(uVar26 ^ (ushort)(uVar26 == uVar5) * (uVar26 & uVar11))) +
                         (uint)uVar4 +
                         (((uVar27 & 0xffff0000 | (uint)uVar29 & 0xffffff00) & 0x1fffe000) << 3 |
                         (uint)uVar11) + (uint)uVar19 +
                         (uint)(ushort)(((ushort)(CONCAT12((ushort)(((short)(uVar30 >> 1) -
                                                                    (short)((uVar31 | uVar34) >> 1))
                                                                   - 1U) < (ushort)bVar15,1) >> 3) |
                                        0x4000) ^ uVar19) + -0x74af40f0);
}



// WARNING: Removing unreachable block (ram,0x0804fca1)
// WARNING: Removing unreachable block (ram,0x0804f1cc)
// WARNING: Removing unreachable block (ram,0x0804f23a)
// WARNING: Removing unreachable block (ram,0x0804f2cb)
// WARNING: Removing unreachable block (ram,0x0804f5d5)
// WARNING: Removing unreachable block (ram,0x0804fca8)
// WARNING: Removing unreachable block (ram,0x0804f358)
// WARNING: Removing unreachable block (ram,0x0804f28a)
// WARNING: Removing unreachable block (ram,0x0804f37a)
// WARNING: Removing unreachable block (ram,0x0804f74d)

undefined8 log_size_10_var_008(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  short sVar5;
  char cVar6;
  byte bVar7;
  byte bVar13;
  ushort uVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar14;
  sbyte sVar15;
  uint uVar16;
  byte bVar17;
  byte bVar18;
  undefined4 in_EDX;
  uint uVar19;
  int iVar20;
  undefined uVar21;
  ushort uVar22;
  ushort uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  ushort uVar29;
  ushort uVar30;
  uint uVar31;
  uint uVar32;
  ushort uVar33;
  ushort uVar34;
  uint uVar35;
  bool bVar36;
  bool in_PF;
  bool bVar37;
  
  iVar20 = 0;
  while ((0xfef60127U >> iVar20 & 1) == 0) {
    iVar20 = iVar20 + 1;
  }
  iVar20 = ((uint)((CONCAT44(iVar20 + 0x10a0500U & 0xffff0000 | 1,0x2100) & 0x3fffffffffffffff |
                   0xfef00000) / 0xfef02100) & 0xffff) * 0x33d6;
  uVar22 = (ushort)((uint)iVar20 >> 0x10);
  uVar10 = (int)(short)((ushort)iVar20 >> 7) + 0xf2e8ae31;
  uVar33 = 0x11e7;
  if (-1 < (char)((byte)(((uint)(ushort)((uVar22 ^ (uVar22 >> 2 & 1) << 2) << 7) << 1) >> 8) | 0x15)
     ) {
    uVar33 = 0x68e4;
  }
  bVar14 = (byte)(uVar33 & 0xfffe) & 7;
  bVar17 = (byte)((uVar33 & 0xfffe) >> 8);
  cVar6 = (char)(uVar10 >> 0x18);
  bVar7 = cVar6 >> 7;
  bVar13 = (cVar6 >> 0xf) + bVar7;
  uVar11 = uVar10 & 0xffff0000 |
           (uint)CONCAT11((short)((uVar33 & 0xfe |
                                  (ushort)(byte)(bVar17 << bVar14 | bVar17 >> 8 - bVar14) << 8) * 2
                                 + 1) < 0,(char)uVar10) | 0x10000;
  uVar12 = (uint)(in_PF + 3U & bVar7);
  uVar24 = (uVar12 | 0x1c00) << 1 | uVar10 >> 0x1f;
  if (uVar24 != 0) {
    uVar11 = uVar10 & 0xffff0000 | 0x10000 | (uVar12 | 0x1c00) << 1 | uVar10 >> 0x1f;
  }
  bVar14 = (bVar7 & 0x1f) % 9;
  iVar20 = 0;
  if (uVar24 != 0) {
    while ((uVar24 >> iVar20 & 1) == 0) {
      iVar20 = iVar20 + 1;
    }
  }
  uVar22 = (ushort)(uVar10 & 0xffff);
  uVar12 = ((uint)(CONCAT11(bVar13 << bVar14 | bVar13 >> 9 - bVar14,bVar7) & 0x3fff) << 0x10 |
           uVar11 >> 0x10 | 0xc000) / (uVar11 >> 0x10 | 0xc000);
  uVar24 = uVar12 & 0xffff;
  uVar25 = -(((uint)(ushort)(uVar22 << 4 | uVar22 >> 0xc) | 0xf6f90000) + 0x47ef79c0);
  bVar13 = (byte)(uVar25 >> 8);
  uVar16 = iVar20 + 0x1968ac10U & 0xffff0000 | (uint)(ushort)(short)(char)bVar13;
  uVar25 = (uVar25 << (bVar13 & 0x1f) | uVar25 >> 0x20 - (bVar13 & 0x1f)) & uVar16;
  uVar25 = uVar25 & 0xffff0000 |
           (uint)CONCAT11((char)(uVar25 >> 8) >> 0xf,(char)uVar25) & 0xffffff00 |
           (uint)(byte)((char)uVar25 - 0xd) | 0x56d355c9;
  uVar10 = ((uVar10 & 0xffff | 0xf6f90000) + 0x8d4556c2 | 1 << (uVar12 & 0x1f)) & 0xffff0000;
  uVar31 = uVar10 << (bVar13 & 0x1f) | uVar10 >> 0x20 - (bVar13 & 0x1f);
  uVar16 = uVar16 + 0xb188dc96;
  uVar22 = (short)uVar31 - 0x5c1;
  uVar3 = (ulonglong)
          CONCAT24(0xe20b,uVar11 << 0x10 |
                          (uint)(ushort)~CONCAT11((char)(uVar24 >> 8) >> 1,(char)uVar24)) |
          0xb1e000000000000;
  uVar1 = uVar3 / 0xe5f0fa1e;
  bVar13 = (byte)uVar16 & 7;
  bVar14 = (byte)(uVar16 >> 8);
  uVar19 = ~(uint)(uVar3 % 0xe5f0fa1e);
  uVar33 = (ushort)uVar1;
  uVar29 = uVar22 ^ (ushort)(uVar33 == uVar22) * (uVar22 ^ uVar33);
  uVar11 = CONCAT22((short)(uVar1 >> 0x10),uVar33 ^ (ushort)(uVar33 == uVar22) * (uVar33 & uVar29));
  uVar22 = (short)uVar25 + 0xd497;
  uVar25 = uVar25 & 0xffff0000;
  uVar10 = uVar25 | (uint)uVar22 & 0xffffff00 | (uint)(byte)((char)uVar22 + 0x5f);
  uVar24 = uVar16 & 0xffff0000 |
           (uint)CONCAT11((bVar14 << bVar13 | bVar14 >> 8 - bVar13) - 0x2c,(byte)uVar16);
  uVar16 = uVar24 ^ (uint)(uVar11 == uVar24) * (uVar24 ^ uVar10);
  uVar12 = uVar11 ^ (uint)(uVar11 == uVar24) * (uVar11 & uVar16);
  uVar33 = (ushort)uVar19;
  uVar22 = ((short)uVar10 - (ushort)uVar16) - (ushort)CARRY2(uVar33,(ushort)(uVar11 < uVar24));
  uVar12 = uVar12 ^ (uVar12 >> 0x15 & 1) << 0x15;
  uVar10 = uVar12 >> 1;
  bVar13 = (byte)(uVar10 >> 8) ^ (byte)((uint)uVar22 >> 8);
  sVar9 = CONCAT11(bVar13,(char)uVar10);
  uVar10 = uVar10 & 0xffff0000 | (uint)((uVar12 & 1) != 0) << 0x1f;
  uVar22 = uVar22 + sVar9;
  uVar12 = 0;
  if (in_PF) {
    uVar12 = uVar16;
  }
  uVar27 = (uint)(ushort)(uVar29 + 0x59fa) + 0x207f86c1;
  uVar8 = sVar9 << 1 | (ushort)uVar16 >> 0xf;
  bVar14 = ((byte)uVar16 & 0x1f) % 0x11;
  uVar26 = (uint)((char)bVar13 < '\0') << 0x10 | uVar12 & 0xffff;
  uVar31 = (uVar31 & 0xffff0000 | (uint)(ushort)(uVar29 + 0x59fb)) & ~(1 << (uVar27 & 0x1f));
  uVar23 = uVar22 ^ (ushort)(uVar8 == uVar22) * (uVar22 ^ (ushort)uVar27);
  uVar8 = uVar8 ^ (ushort)(uVar8 == uVar22) * (uVar8 & uVar23);
  uVar29 = uVar8 & 0xbfff;
  bVar13 = (byte)((uint)uVar23 >> 8);
  uVar22 = (ushort)uVar31;
  uVar30 = uVar22 >> (bVar13 & 0xf) | uVar22 << 0x10 - (bVar13 & 0xf);
  uVar22 = ((ushort)(uVar26 << bVar14) | (ushort)(uVar26 >> 0x11 - bVar14)) << 1 | uVar30 >> 0xf;
  if (-1 < (char)bVar13) {
    uVar22 = (ushort)uVar27;
  }
  sVar9 = (short)(char)uVar29 * (short)(char)bVar13;
  uVar19 = (uVar25 | (ushort)((uVar23 & 0xff | (ushort)(byte)(bVar13 << 1) << 8) << 1 |
                             (ushort)(byte)(((char)(((uVar19 & 0xffff0000 |
                                                     (uint)(byte)((char)((uint)(ushort)(uVar33 + (
                                                  ushort)(uVar11 < uVar24)) >> 8) >> 1) << 8) >> 1)
                                                  >> 8) + (char)((uint)uVar8 >> 8)) - 1U >> 7))) >>
           (bVar13 & 0x1f);
  uVar11 = (int)sVar9 * (int)sVar9;
  uVar24 = uVar11 >> 0x10;
  uVar25 = uVar16 & 0xffff0000 | (uint)(ushort)(short)(char)bVar13 | uVar19;
  uVar11 = (uVar10 | uVar11 & 0xffff) ^ 1 << (uVar24 & 0x1f);
  uVar27 = (int)uVar27 >> ((byte)uVar25 & 0x1f);
  uVar10 = (((uint)(uint3)((int3)((uint3)(uVar10 >> 8) | (uint3)(byte)(uVar29 >> 8)) >> 0x1f) &
            0xffff00) << 8 | uVar24) + 0xbf410bf2;
  if ((int)uVar10 < 0) {
    uVar25 = uVar31 & 0xffff0000 | (uint)(uVar30 >> 1);
  }
  uVar10 = uVar10 & uVar11;
  bVar14 = (byte)(uVar11 >> 8);
  bVar7 = (byte)(uVar19 >> 8);
  bVar13 = ((byte)uVar25 & 0x1f) % 9;
  cVar6 = (char)(uVar25 >> 8);
  uVar24 = (uint)CONCAT11((byte)(CONCAT11(CARRY1(bVar14,bVar7),cVar6) >> bVar13) |
                          cVar6 << 9 - bVar13,(byte)uVar25) & 0xffffff0f;
  bVar13 = (byte)uVar24;
  bVar17 = (byte)(uVar24 >> 8);
  sVar9 = (short)uVar27;
  uVar16 = uVar27 & 0xffff0000 | (uint)(ushort)(sVar9 << 1 | (ushort)(sVar9 < 0));
  uVar11 = uVar11 & 0xffff0000 | (uint)CONCAT11((char)(bVar14 + bVar7) >> bVar13,(char)uVar11);
  uVar24 = (uVar25 & 0xffff0000 |
           (uint)CONCAT11((bVar17 << (bVar13 & 7) | bVar17 >> 8 - (bVar13 & 7)) * -2,bVar13)) <<
           bVar13 | uVar11 >> 0x20 - bVar13;
  bVar14 = (byte)uVar24 & 0x1f;
  uVar24 = uVar24 | 0xc0000000;
  uVar1 = CONCAT44((uVar10 & 0xffff0000 |
                   (uint)(ushort)((ushort)uVar10 >> bVar13 | uVar22 << 0x10 - bVar13)) * -0x43fbb6a0
                   ,uVar11) & 0x3fffffffffffffff;
  uVar3 = uVar1 % (ulonglong)uVar24;
  uVar25 = uVar24 + (int)uVar3;
  uVar11 = (int)(uVar1 / (ulonglong)uVar24) + 0x1774403a;
  uVar10 = (uVar19 & 0xffff | 0x17) & 0xed;
  uVar33 = (ushort)uVar10;
  uVar29 = uVar33 | (ushort)uVar25 & 0xff00;
  uVar8 = (ushort)(uVar11 >> 0x11) | (ushort)(((uint)((uVar11 & 1) != 0) << 0x1f) >> 0x10);
  uVar12 = (uVar12 >> 0x15 | (uint)uVar8 << 0x1b) << ((byte)uVar10 & 0x1f);
  uVar22 = (uVar29 | 0xc000) >> 9;
  uVar33 = (uVar33 & 1) << 7 | uVar22;
  uVar29 = uVar33 | (ushort)(byte)((byte)((uint)(ushort)(uVar29 << 7 | uVar22) >> 8) >> 1) << 8;
  uVar25 = uVar25 & 0xffff0000 | (uint)uVar29;
  bVar17 = (byte)uVar33;
  bVar13 = bVar17 & 7;
  uVar11 = (uint)uVar8 << 0x10 | (uint)(byte)('\0' << bVar13 | 0U >> 8 - bVar13) << 8;
  uVar24 = (((uint)(ushort)((ushort)(((uVar16 >> bVar14 | uVar16 << 0x20 - bVar14) << 0x15) >> 0x10)
                           | (ushort)((int)((uint)(uint3)(uVar3 >> 8) << 0xd) >> 0x11) >> 0xb) <<
            0x10) >> 0x11) << 0x10;
  cVar6 = (char)((uint)uVar29 >> 8);
  bVar13 = (char)uVar12 >> 1;
  uVar12 = uVar12 & 0xff00;
  uVar10 = uVar12 | uVar24;
  uVar11 = uVar11 ^ (uint)(uVar11 == (uVar10 | bVar13)) * (uVar10 & uVar11);
  uVar10 = (uint)(byte)((char)((short)cVar6 << 1) >> 1);
  uVar11 = uVar11 & 0xffff0000 | (uint)(byte)~(byte)(uVar11 >> 8) << 8;
  uVar22 = (ushort)uVar12;
  uVar16 = uVar19 & 0xffff0000 | uVar10 | 0xc000;
  uVar10 = uVar10 | 0xc000;
  uVar12 = ((uint)(ushort)((uVar22 | (byte)(bVar13 + 0xa6)) << 3 | uVar22 >> 0xd) & 0x3fff) << 0x10
           | (uVar11 ^ (uint)(uVar11 == uVar25) * (uVar11 & uVar25)) & 0xffff;
  uVar11 = uVar12 / uVar10;
  iVar20 = (int)((uVar12 % uVar10 | uVar24 & 0xfffd0000) >> (bVar17 & 0x1f) & 0xffff0000 |
                (uVar11 & 0xff00) * (uVar11 & 0xff00) >> 0x10) >> ((byte)(uVar29 ^ 0xe9ff) & 0x1f);
  bVar14 = (byte)((uint)(ushort)((uVar29 ^ 0xe9ff) & 0xff00 ^ (short)cVar6) >> 8);
  bVar13 = (byte)iVar20 & 0x1f;
  uVar22 = (ushort)(uVar16 >> bVar13) | (ushort)(uVar16 << 0x20 - bVar13);
  uVar12 = (uint)(ushort)(uVar22 ^ (uVar22 == 0) * uVar22);
  uVar10 = uVar12 << 1;
  uVar33 = (ushort)iVar20;
  uVar22 = uVar33 | 0x1f;
  uVar33 = uVar33 & 0xff | 0x1f;
  uVar12 = uVar12 << 0x19;
  uVar29 = ~CONCAT11((bVar14 >> 1) << 2 | bVar14 >> 7,(char)uVar10);
  bVar14 = (byte)uVar33;
  bVar13 = bVar14 & 0xf;
  uVar29 = uVar29 << bVar13 | uVar29 >> 0x10 - bVar13;
  uVar24 = (int)-(uVar10 >> 8 & 0xff) >> (bVar14 & 0x1f);
  uVar33 = (short)cVar6 << 1 |
           uVar33 | (ushort)(byte)(((byte)((uint)uVar22 >> 8) ^ 0xe4) >> ((byte)uVar22 & 0x1f)) << 8
  ;
  uVar11 = (uint)uVar33;
  uVar22 = uVar29 >> 1 & 0x7f;
  uVar16 = uVar24 & 0xff;
  uVar10 = uVar11 * 2 + 0x840b58b6;
  uVar25 = uVar12 | 0xfffe;
  cVar6 = (char)((uint)(ushort)(uVar29 & 0xff00 | uVar22 | 0x80) >> 8);
  if (SCARRY1(cVar6,(char)uVar16) != SCARRY1(cVar6 + (char)uVar16,'\0')) {
    uVar25 = uVar12 | uVar10 & 0xffff;
  }
  uVar12 = (uint)(ushort)((ushort)uVar25 >> ((byte)uVar10 & 0x1f)) & 0xfffffff5;
  sVar9 = (ushort)uVar16 - (uVar22 | 0xa180);
  uVar22 = (ushort)(byte)(((byte)uVar22 | 0x80) >> 1 |
                         ((ushort)uVar16 < (uVar22 | 0xa180) || sVar9 == 0) << 7) | 0xa100;
  bVar13 = (byte)((int)uVar10 >> ((byte)uVar10 & 0x1f));
  if (0x34c6c89e < (uVar25 & 0xffff0000 | (uint)CONCAT11((char)(uVar12 >> 8) >> 1,(char)uVar12))) {
    uVar22 = 0xfffe;
  }
  bVar14 = bVar13 & 4;
  uVar25 = ((uVar16 | 0x8000000) >> 1 | (uint)((uVar24 & 1) != 0) << 0x1f) << bVar14;
  uVar10 = uVar25 | uVar33 >> 0x20 - bVar14;
  lVar4 = (longlong)(int)(uint)(ushort)(sVar9 - 1) * (longlong)(int)uVar10;
  uVar16 = (uint)lVar4;
  uVar12 = (uVar16 & 0xff00) << 8;
  uVar29 = (ushort)uVar10;
  bVar13 = ((bVar13 & 0xe4) + 0x88 + (lVar4 < 0) & 0x1f) % 0x11;
  uVar10 = (uint)((uVar22 & 1) != 0) << 0x10;
  uVar33 = (ushort)(uVar10 >> bVar13) | (ushort)(uVar10 << 0x11 - bVar13);
  bVar13 = (byte)((uint)uVar33 >> 8);
  uVar10 = CONCAT31(CONCAT21((short)((((uint)((ulonglong)lVar4 >> 0x20) & 0x7fff8000) << 1) >> 0x10)
                             ,(char)uVar33),bVar13) >> (bVar13 & 0x1f);
  uVar22 = uVar29 + (uVar22 >> 1 | uVar29 << 0xf);
  uVar25 = uVar25 & 0xffff0000;
  uVar24 = (CONCAT22((undefined2)((char)bVar13 >> 7),CONCAT11((byte)((char)bVar13 >> 7) >> 1,bVar13)
                    ) & 0xffff20ff) << 1;
  uVar19 = (uVar10 & 0xffff0000 | uVar10 >> 1 & 0x7fff) & (uVar25 | uVar22);
  bVar13 = (byte)uVar24 >> 2;
  bVar14 = (byte)uVar24 << 6 | bVar13;
  uVar25 = (uVar25 | (uVar22 | uVar29)) >> (bVar13 & 0x1f);
  uVar10 = 0x1f;
  if (uVar19 != 0) {
    while (uVar19 >> uVar10 == 0) {
      uVar10 = uVar10 - 1;
    }
  }
  uVar33 = (ushort)uVar25;
  uVar22 = (ushort)(((uVar10 & 0xff00) << 8) >> 0x10) | (ushort)((uVar10 << 0x18) >> 0x10);
  uVar31 = CONCAT22(0xd09d,CONCAT11((char)(uVar24 >> 8) + -0x2a,0x34)) * 2;
  uVar27 = (uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | uVar12 | uVar16 << 0x18) ^ 0xe06d;
  uVar26 = (uint)(ushort)((short)(uVar33 >> 5 | uVar33 << 0xb) >> 1);
  uVar35 = uVar24 & 0xffff0000 | (uint)CONCAT11(0x7b,bVar14) & 0xffffff00 |
           (uint)(byte)((char)bVar14 >> 0xb);
  uVar12 = uVar12 | uVar16 << 0x18 |
           (uint)CONCAT11((char)(uVar27 >> 8) + -0x5d + ((short)uVar22 < 0) + (char)uVar31,
                          (char)uVar27);
  uVar16 = (CONCAT22(uVar22,(short)(uVar10 >> 8)) & 0x7fff8000) << 1 | (uVar19 & 0xff0000) >> 0x10;
  uVar31 = uVar31 ^ 0xef24;
  bVar13 = (char)bVar14 >> 0xb & 0x1f;
  uVar1 = (ulonglong)(uVar12 | 0xc0000000);
  uVar3 = CONCAT44(uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                   ((uint)(byte)((char)uVar19 + bVar14) & 0x3f) << 0x18,uVar12) | 0xc0000000;
  uVar24 = (uint)(uVar3 / uVar1);
  uVar3 = uVar3 % uVar1;
  uVar24 = uVar24 ^ (uint)(uVar24 == uVar31) * (uVar24 & uVar31);
  uVar10 = (uVar25 & 0xffff0000 | uVar26) >> 0xc;
  uVar12 = uVar31 >> 9;
  bVar14 = (byte)(uVar12 >> 8);
  cVar6 = bVar14 - 0x17;
  if (0x16 < bVar14 && cVar6 != '\0') {
    uVar11 = uVar10 & 0xffff;
  }
  uVar25 = uVar31 >> 1 & 0x7f;
  uVar32 = (uVar26 << 0x14 | uVar10) << 1 | 1;
  bVar14 = (byte)((uVar31 & 0xffffff00) >> 8);
  uVar21 = (undefined)uVar25;
  uVar22 = CONCAT11(bVar14 >> 1,uVar21);
  uVar33 = (short)uVar32 - 1;
  uVar12 = ((uVar35 << bVar13 | uVar35 >> 0x20 - bVar13) << 0x17 | uVar12 & 0xffff0000 |
           (uint)CONCAT11(cVar6,(byte)uVar12)) << ((byte)uVar12 & 0x1f);
  bVar13 = (byte)uVar12;
  uVar10 = uVar31 & 0xffff0000 | (uint)CONCAT11((byte)((uint)uVar22 >> 8) >> (bVar13 & 0x1f),uVar21)
  ;
  uVar27 = uVar10 >> (bVar13 & 0x1f) | uVar10 << 0x20 - (bVar13 & 0x1f);
  uVar10 = uVar12 & 0xffff0000 | (uint)(ushort)((ushort)uVar12 ^ ((ushort)uVar12 >> 0xc & 1) << 0xc)
  ;
  uVar19 = uVar10 << (bVar13 & 0x1f) | uVar10 >> 0x20 - (bVar13 & 0x1f);
  uVar10 = (uVar11 << 7 & 0xfffe |
           (uint)(CONCAT14(SBORROW4(uVar24,uVar16) < (byte)uVar3,uVar11) >> 0x1a)) >> 1;
  uVar35 = uVar11 << 7 & 0xffff0000 | uVar10;
  sVar9 = (uVar33 ^ uVar33 & 0x400) + 0xce9;
  uVar33 = (ushort)uVar19;
  uVar29 = (ushort)uVar27 | uVar33;
  sVar5 = CONCAT11((char)(uVar12 >> 8) << 1,(short)uVar29 < 0);
  uVar26 = CONCAT22((short)(uVar3 >> 0x10),sVar5 - sVar9);
  uVar22 = ((ushort)(uVar24 >> 0x10) ^
           (ushort)((uint)(uVar24 == uVar16) * (uVar24 & uVar16) >> 0x10)) + uVar22 +
           (ushort)(bVar14 & 1) & 0xff;
  cVar6 = (char)uVar22;
  uVar12 = (uVar31 & 0xffffff00 | uVar25) << 0x10 |
           (uint)(ushort)(uVar22 | (ushort)((short)(sVar5 - sVar9) != 0 && sVar9 <= sVar5) << 8) &
           0xffffff00 | (uint)(byte)(cVar6 << 1);
  uVar16 = (uVar16 ^ uVar32) + uVar35 + (uint)(cVar6 < '\0');
  uVar24 = uVar12 ^ 0x4400;
  uVar25 = (uVar26 - uVar24) - 1;
  uVar11 = uVar27 & 0xffff0000 | (uint)(ushort)((uVar29 & 0xff | (ushort)(sVar5 < sVar9) << 8) >> 1)
  ;
  if ((uVar19 & 0xcfb9f9) == 0) {
    uVar11 = uVar19;
  }
  uVar35 = (uVar35 - uVar24) - 1;
  uVar31 = uVar11 & 0xffffff00 | (uint)(byte)((char)uVar11 >> 1);
  sVar9 = (short)uVar35 >> 4;
  uVar22 = uVar33 << 1 | (ushort)((short)uVar33 < 0) | 2;
  bVar13 = (byte)uVar22 & 0x1f;
  uVar33 = (ushort)(uVar31 << bVar13) |
           (ushort)(CONCAT14((uVar33 << 1 & 2) != 0,uVar31) >> 0x21 - bVar13);
  uVar31 = (uint)(ushort)(uVar22 << 1) & 0xffffff0f;
  sVar15 = (sbyte)uVar31;
  uVar22 = uVar33 >> 1;
  uVar12 = uVar12 ^ 0xab7d2f2b;
  uVar27 = uVar12 & 0xffff0000 | (uint)CONCAT11((char)(uVar12 >> 8) + -7,(char)uVar12);
  uVar12 = uVar19 & 0xffff0000 | (uint)CONCAT11((byte)(uVar31 >> 8) >> 1,sVar15);
  uVar1 = (CONCAT44((uVar25 & 0xffffff00 | (uint)(byte)((char)uVar25 + (char)uVar11 + 1)) << 0x11 |
                    uVar25 >> 0xf & 0xffffff00 | (uint)(byte)((char)(uVar25 >> 0xf) * '\x02'),uVar27
                   ) & 0x3fffffffffffffff | 0xc0000000) / (ulonglong)(uVar27 | 0xc0000000);
  uVar11 = ((uVar26 & 0x3fffc0) << 10 | (uint)(ushort)((short)uVar10 << 1 | uVar33 >> 0xf)) << 9 |
           (uint)uVar1 >> 0x17;
  iVar20 = uVar11 + 0x3d162697;
  uVar10 = uVar16 & 0xffff0000 |
           (uint)(ushort)(((short)uVar16 << sVar15 | (ushort)uVar24 >> 0x10 - sVar15) - sVar9 >> 0xd
                         | (short)(char)uVar1 << 3);
  if ((SBORROW4(uVar11,-0x3d162697) != SBORROW4(iVar20,(uint)(sVar9 < 0))) ==
      (int)(iVar20 - (uint)(sVar9 < 0)) < 0) {
    uVar10 = uVar12;
  }
  lVar4 = (longlong)CONCAT22((short)(uVar1 >> 0x10),(short)(char)uVar1) *
          (longlong)(int)(uVar35 & 0xffff0000 | (uint)(ushort)(sVar9 << 1));
  uVar33 = (short)lVar4 * 5 + 0x51d0;
  uVar11 = CONCAT31((int3)((ulonglong)lVar4 >> 8),
                    (byte)(CONCAT11((uVar33 >> 0xb & 1) != 0,(char)lVar4) >> 4) | (char)lVar4 << 5);
  uVar24 = uVar11 & 0xffff | (uint)(ushort)((ulonglong)lVar4 >> 0x10) << 0x10 | 0x4aae;
  if (0 < (short)((ushort)uVar11 | 0x4aae)) {
    uVar12 = uVar24;
  }
  bVar13 = (byte)uVar12 & 0x1f;
  uVar24 = uVar24 << bVar13 | uVar24 >> 0x21 - bVar13;
  uVar25 = (uint)((ulonglong)lVar4 >> 0x20) ^ 0x12;
  uVar11 = (uVar35 & 0xffff0000 | (uint)(ushort)~(sVar9 << 1)) << 3;
  uVar29 = (ushort)uVar12 >> 1;
  uVar8 = (ushort)uVar24 << 0xf;
  if ((uVar29 | uVar8) != 0 && ((short)(ushort)uVar12 < 0 != (uVar8 != 0)) == (uVar8 != 0)) {
    uVar25 = uVar24 & 0xffff | (uint)(ushort)((ulonglong)lVar4 >> 0x30) << 0x10;
  }
  uVar29 = uVar29 & 0x661f;
  uVar30 = (ushort)((uVar10 & 0xffff) << 2) | (ushort)((uVar10 & 0xffff) >> 0xf);
  uVar16 = uVar11 >> 6;
  uVar11 = (uVar35 >> 0x1d | uVar11) << 0x1a;
  uVar19 = uVar16 | uVar11;
  uVar23 = (ushort)uVar25;
  uVar8 = ((ushort)uVar24 & 0xff00) << 2 | uVar29 >> 0xe;
  if ((char)((uVar25 >> 0xc) >> 8) == '>') {
    uVar8 = uVar23;
  }
  uVar29 = uVar29 * -0x5e3d;
  uVar8 = uVar8 ^ (ushort)uVar16;
  uVar31 = uVar12 & 0xffff0000 |
           (uint)(ushort)(uVar29 & 0xff | (ushort)(byte)~(byte)((uint)uVar29 >> 8) << 8);
  if (-1 < (int)uVar31) {
    uVar19 = uVar16 & 0xffff0000 | uVar11 | (uint)uVar8;
  }
  bVar13 = (char)(uVar31 >> 1) - (char)uVar19;
  iVar20 = ((uint)(ushort)(((short)(uVar22 & 0xff |
                                    (ushort)(byte)((char)((uint)uVar22 >> 8) << 1) << 8 | 0x100) >>
                           sVar15) >> 1) << 0x14 | uVar25 >> 0xc) + 0xad72004a;
  uVar31 = iVar20 * 2 | (uint)(iVar20 < 0);
  uVar16 = (uVar24 & 0xffff0000 | (uint)uVar8) + 0xf78f6ff7;
  sVar9 = uVar30 + uVar23;
  uVar8 = (short)uVar33 >> 0x1e | 0xc000;
  uVar11 = ((uint)uVar30 & 0x3fff) << 0x10 |
           (uint)CONCAT11((char)(uVar16 >> 8) << 1 | uVar23 < (uVar33 & 0xf7ff),(char)uVar16);
  uVar22 = (ushort)(uVar11 / (uint)uVar8);
  uVar11 = uVar11 % (uint)uVar8;
  uVar22 = uVar22 ^ (uVar22 >> 5 & 1) << 5;
  uVar26 = uVar31 ^ 1 << (uVar19 & 0x1f);
  bVar13 = (bVar13 >> 5 | (bVar13 & 3) << 3) % 0x11;
  uVar29 = (ushort)(CONCAT12((uVar31 >> (uVar19 & 0x1f) & 1) != 0,sVar9) >> bVar13) |
           sVar9 << 0x11 - bVar13;
  sVar9 = (short)uVar19 + -0x679d;
  bVar18 = (byte)uVar26;
  uVar24 = (uint)(ushort)(sVar9 * 2 | (ushort)(sVar9 < 0));
  lVar4 = (longlong)
          (int)(uVar16 & 0xffff0000 |
               (uint)(ushort)(uVar22 & 0xff | (ushort)(byte)((char)((uint)uVar22 >> 8) >> 1) << 8))
          * (longlong)
            (int)(uVar25 & 0xffff0000 | (uint)CONCAT11((char)(uVar11 >> 8) >> 1,(char)uVar11));
  cVar6 = (char)((ulonglong)lVar4 >> 0x28);
  bVar17 = (byte)((ulonglong)lVar4 >> 0x20);
  bVar7 = (byte)(uVar24 >> 8);
  bVar13 = bVar17 + bVar7;
  iVar20 = ((uVar19 & 0xffff0000 | uVar24) + 0xafba2ad9) - (uint)((byte)(cVar6 >> 7) < 7);
  sVar9 = (short)iVar20;
  uVar11 = iVar20 + 0x1eec4bb4;
  uVar22 = (ushort)(sVar9 * 0x12df) >> 10;
  uVar33 = uVar22 | sVar9 * -0x4840;
  bVar14 = (byte)uVar11 & 0x1f;
  uVar24 = (uVar26 & 0xffffff00 | (uint)(byte)(bVar18 << 7 | bVar18 >> 1)) << bVar14 |
           uVar11 >> 0x20 - bVar14;
  uVar23 = (short)(ushort)((uVar12 & 0xffff0000) >> 0x11) >> 0xd;
  uVar12 = uVar11 & 0xffff0000 |
           (uint)(ushort)((ushort)uVar11 & 0xff00 ^ ((ushort)uVar11 >> 0xb & 1) << 0xb);
  lVar4 = (longlong)
          (int)(((uint)((ulonglong)lVar4 >> 0x20) & 0xffff0000 |
                 (uint)CONCAT11(cVar6 + -0x67,bVar17) & 0xffffff00 | (uint)(byte)(bVar13 + 1)) +
                0xd628a4a + (uint)(CARRY1(bVar17,bVar7) || 0xfe < bVar13) & 0xffff0000 |
               (uint)(ushort)(uVar33 ^ (ushort)(uVar33 == uVar23) * (uVar22 & uVar23))) *
          (longlong)(int)uVar12;
  iVar20 = ((uint)lVar4 & 0xffff) * (uint)uVar8;
  uVar22 = (ushort)((uint)iVar20 >> 0x10);
  uVar25 = (uint)uVar23 + 0xb29d80d0;
  uVar12 = uVar12 + (uVar10 & 0xffff0000 | (uint)uVar29);
  uVar33 = uVar22 >> ((byte)uVar12 & 0x1e);
  bVar13 = (byte)(uVar33 >> 8);
  uVar23 = uVar33 & 0xff | (ushort)(byte)(bVar13 >> 1 | bVar13 << 7) << 8;
  bVar13 = (byte)((uVar24 & 0xffffff00 |
                  (uint)(byte)((char)uVar24 << 4 | (byte)(CONCAT11(uVar22 != 0,(char)uVar24) >> 5)))
                 >> 1);
  uVar8 = (ushort)uVar12 & 0xfe;
  uVar22 = uVar8 | (ushort)bVar13 << 8;
  uVar11 = ~(uVar10 & 0xffff0000 | (uint)(ushort)((uVar29 - (short)iVar20) * 2));
  bVar13 = ((char)bVar13 >> 7) + 0xc;
  uVar30 = (ushort)bVar13 * 0x100;
  uVar33 = (ushort)((uVar25 & 1) == 0 && bVar13 != 0);
  uVar29 = uVar33 * 0x100;
  sVar9 = uVar30 + uVar33 * -0x100;
  uVar10 = CONCAT22((short)((ushort)(byte)('\0' << ((byte)uVar8 & 0x1f)) << 8) >> 0xf,uVar29);
  if (uVar30 < uVar29 || sVar9 == 0) {
    uVar10 = uVar12 & 0xffff0000 | (uint)uVar22;
  }
  uVar22 = uVar22 << 1;
  uVar33 = uVar22 | (uVar30 < uVar29 || sVar9 == 0);
  sVar9 = (sVar9 - uVar23) + -2;
  uVar16 = (uint)uVar33 | 0xc000;
  uVar19 = ((uint)uVar23 & 0x3fff) << 0x10 | uVar10 & 0xffff;
  uVar31 = uVar19 / uVar16;
  uVar26 = uVar31 & 0xffff;
  uVar19 = uVar19 % uVar16;
  uVar16 = (uVar19 | (uint)(ushort)((ulonglong)lVar4 >> 0x30) << 0x10) ^ uVar19 & 0x1000;
  uVar29 = (ushort)uVar16;
  uVar8 = (ushort)uVar11;
  uVar23 = uVar8 - uVar29;
  bVar13 = ((byte)uVar33 & 0x1f) % 0x11;
  uVar29 = sVar9 << bVar13 | (ushort)(CONCAT12(uVar8 < uVar29,sVar9) >> 0x11 - bVar13);
  uVar16 = uVar16 << 3;
  uVar12 = (((uint)uVar33 & 0xff |
            (uint)(uint3)((uint3)((uVar12 & 0xffff0000) >> 8) | (uint3)(byte)(uVar22 >> 8) | 0xc0)
            << 8) ^ 0x6d) + 0x410dced;
  uVar19 = uVar12 & 0xffff0000;
  uVar31 = (uVar25 & 0xffff0000 | (uint)((ushort)uVar25 & 0x7fff)) >> ((byte)uVar33 & 0x1f) |
           0xb648df02 | 1 << (uVar31 & 0x1f);
  uVar1 = (ulonglong)(uVar19 | uVar26 | 0xc0000000);
  uVar3 = CONCAT44(uVar16 & 0xffffff00 | uVar16 >> 1 & 0x7f,uVar10 & 0xffff0000 | uVar12 & 0xffff) &
          0x3fffffffffffffff;
  uVar11 = ~((uVar11 & 0xffff0000 | (uint)uVar23) << 2);
  bVar37 = (uVar3 / uVar1 & 0x400) != 0;
  uVar10 = uVar11 >> 1 & 0x7f;
  sVar9 = (short)uVar26 + ((ushort)(uVar11 & 0xffffff00) | (ushort)uVar10);
  bVar13 = (byte)uVar10;
  uVar24 = ((uVar24 >> 0x11) << 0x10 | 0x80000000 |
           (uint)(ushort)(uVar29 >> (bVar13 & 0xf) | uVar29 << 0x10 - (bVar13 & 0xf))) ^ 0x616840cf;
  uVar25 = uVar19 | 0xc0000000 | (uint)(ushort)(sVar9 * 2 | 1);
  uVar12 = (uint)CONCAT11('t' - (sVar9 < 0),(char)bVar13 >> 1) * (uVar11 & 0xff00 | uVar10);
  uVar10 = 0;
  if (uVar25 != 0) {
    while ((uVar25 >> uVar10 & 1) == 0) {
      uVar10 = uVar10 + 1;
    }
  }
  uVar26 = (uVar31 & 0xffff0000 | (uint)(ushort)((ushort)uVar31 ^ 1 << (uVar23 & 0xf))) + uVar24;
  uVar25 = (uint)CONCAT11((char)((uVar11 & 0xffffff00) >> 8) + (char)uVar12 + '\x0e',bVar13);
  uVar1 = CONCAT44((int)(uVar3 % uVar1) + 0x91aa0765U & 0xffff0000 | uVar12 >> 0x10,
                   uVar26 * -0x778abde3) & 0x3fffffffffffffff;
  uVar3 = uVar1 / (ulonglong)(uVar10 | 0xc0000000);
  uVar1 = uVar1 % (ulonglong)(uVar10 | 0xc0000000);
  bVar14 = (bVar13 & 0x1f) % 0x11;
  uVar16 = (uint)(byte)uVar1;
  uVar31 = uVar11 & 0xffff0000 | uVar25 & 0xffffff00 | uVar16;
  uVar11 = (uint)uVar3;
  uVar12 = uVar11 & 0xffff | 0xc000;
  uVar11 = (uint)(ushort)((ushort)bVar13 | ((ushort)(uVar1 >> 8) & 0x3f) << 8) << 0x10 |
           uVar11 & 0xffff | 0xc000;
  uVar22 = (ushort)(uVar3 >> 0x10);
  uVar19 = uVar11 / uVar12 & 0xffff;
  uVar33 = ((ushort)((uVar10 & 0x6cf6) >> bVar14) | (ushort)((uVar10 & 0x6cf6) << 0x11 - bVar14)) +
           0x50bf;
  if (uVar33 == 0) {
    uVar24 = uVar24 & 0xffff0000 | uVar25 & 0xff00 | uVar16;
  }
  uVar11 = ((uVar10 & 0xc1db0000 | 0xc0000000 | (uint)uVar33) + 0x7ee63330) -
           (uint)((uVar11 % uVar12 & 1) != 0);
  uVar33 = CONCAT11((char)(uVar19 >> 8) >> 1,(char)uVar19);
  uVar8 = (ushort)~uVar24;
  uVar29 = uVar8 + 0xbfd6;
  uVar12 = ~uVar24 & 0xffff0000 | (uint)uVar29;
  uVar10 = uVar26 & 0xffff0000 | (uint)(ushort)((short)uVar26 + 0x2d8);
  if (0x4029 < uVar8 && uVar29 != 0) {
    uVar10 = CONCAT22(uVar22,uVar33);
  }
  uVar16 = (uint)uVar33 & 0xffff00ff;
  uVar24 = uVar11 >> 0x1c & 1;
  bVar13 = (byte)uVar16;
  uVar33 = (ushort)bVar13 * (ushort)bVar13;
  uVar33 = uVar33 & 0xff | (ushort)(byte)((char)((uint)uVar33 >> 8) + 0x8e) << 8;
  uVar19 = uVar31 + CONCAT22(uVar22,uVar33);
  uVar25 = (uint)uVar33 | 0xc000;
  uVar16 = (uint)(ushort)((((ushort)uVar31 ^ 1 << ((ushort)uVar16 & 0xf)) & 0x1fff) << 1 |
                         (ushort)(uVar24 != 0)) << 0x10 | (uint)uVar33 | 0xc000;
  uVar31 = uVar12 ^ 0x617897ea;
  bVar13 = (byte)uVar19 & 0x1f;
  uVar31 = uVar31 >> bVar13 | uVar31 << 0x20 - bVar13;
  uVar33 = (ushort)uVar19 | 1 << ((ushort)uVar19 & 0xf);
  iVar20 = ((uVar10 & uVar12) * -0xa16194c | 1 << (uVar16 % uVar25 & 0x1f)) - 1;
  lVar4 = (longlong)
          (int)(((uint)uVar22 << 0x10) >> 0x14 |
               ((uint)uVar22 << 0x10 | uVar16 / uVar25 & 0xffff) << 0xc) * (longlong)(int)uVar31;
  bVar17 = (byte)((ulonglong)lVar4 >> 0x20) >> 1;
  uVar22 = uVar33 & 0xff;
  uVar10 = uVar19 & 0xffff0000 | (uint)(ushort)(uVar22 | (ushort)(byte)(uVar31 >> 8) << 8);
  uVar29 = CONCAT11((char)((uint)uVar33 >> 8),(byte)uVar31);
  bVar13 = (byte)uVar22 & 0x1f;
  uVar10 = uVar10 >> bVar13 | uVar10 << 0x20 - bVar13;
  bVar14 = (byte)uVar10;
  bVar13 = bVar14 & 7;
  bVar17 = bVar17 << bVar13 | bVar17 >> 8 - bVar13;
  bVar13 = (char)((short)lVar4 << 1) + bVar17 + 1;
  bVar7 = (byte)((uint)uVar29 >> 8);
  sVar9 = (short)((uint)iVar20 >> 0x10);
  uVar12 = CONCAT31((int3)((ulonglong)lVar4 >> 0x28),bVar17) + (uVar31 & 0xffff0000 | (uint)uVar29)
           + (uint)CARRY1(bVar13,bVar7) & 0xffffff00 | (uint)!SBORROW2(sVar9,-0x99f);
  uVar10 = (uVar10 & 0xffffff00 | (uint)(bVar14 & bVar17)) - uVar12;
  uVar25 = uVar11 ^ uVar24 << 0x1c | 0xc0000000;
  uVar1 = CONCAT44(CONCAT22((short)((ulonglong)lVar4 >> 0x10),
                            (ushort)(byte)(bVar13 + bVar7) << 8 | (ushort)uVar10 >> 8),uVar12) &
          0x3fffffffffffffff;
  uVar3 = uVar1 / (ulonglong)uVar25;
  uVar22 = 1 << (uVar23 * -0x22ea >> 1 & 0xf);
  uVar12 = (int)(uVar1 % (ulonglong)uVar25) - 1U & 0xffff0000;
  uVar33 = (ushort)(byte)((byte)uVar31 | 0xc0);
  uVar8 = (ushort)((int)uVar25 >> 1);
  uVar33 = ((uVar29 & 0x3fff) / uVar33 & 0xff | (uVar29 & 0x3fff) % uVar33 << 8) &
           ~(1 << (uVar8 & 0xf));
  uVar11 = (uint)(ushort)(((uVar22 | 0x1d27) & 0xff00 | (ushort)(byte)~((byte)uVar22 | 0x27)) *
                         0x71ae);
  uVar24 = (uint)(ushort)((ushort)(uVar3 >> 0x10) >> 1 |
                         (ushort)(((uint)((uVar3 & 1) != 0) << 0x1f) >> 0x10)) << 0x10 |
           (uint)uVar33 & 0xffffff00 | (uint)(byte)((byte)uVar33 | (byte)(uVar11 >> 8));
  uVar16 = iVar20 * 0x10000 | ((uint)(ushort)(sVar9 + 0x99f) & 0x2ed0) >> 1;
  uVar19 = uVar16 ^ (uint)(uVar24 == uVar16) * (uVar16 ^ (uVar12 | uVar11));
  uVar24 = uVar24 ^ (uint)(uVar24 == uVar16) * (uVar24 & uVar19);
  uVar11 = uVar24 & 0xffff0000 | uVar11;
  uVar24 = uVar24 & 0xffff;
  cVar6 = (char)(uVar24 >> 8);
  uVar25 = ~((uint)(ushort)((int)uVar25 >> 0x11) << 0x10 | 0x80000 | (uint)(ushort)~uVar8);
  uVar1 = (ulonglong)(uVar11 | 0xc0000000);
  uVar3 = CONCAT44(uVar12 | 0x400000 |
                   (uint)(ushort)(CONCAT11(cVar6 << 1 | cVar6 < '\0',(char)uVar24) | 0x80),uVar11) &
          0x3fffffffffffffff | 0xc0000000;
  uVar2 = uVar3 / uVar1;
  uVar12 = (((uVar10 & 0xffffff00 | (uint)(byte)((byte)uVar10 >> 1 | (byte)uVar10 << 7)) & 0x3fffc)
            << 0xe | 0xff00) & 0xfffd6400;
  uVar24 = uVar25 * -0x16c65efc;
  bVar13 = (char)uVar2 << 1 | (uVar19 >> 1) + 0x8dae7fca < 0xef18bae7;
  uVar10 = (uVar24 & 0xffff0000 | (uint)(ushort)-(short)uVar24) << 7;
  bVar36 = (short)(uVar3 % uVar1 >> 0x10) < 0;
  uVar11 = uVar10 & 0xffff0000;
  bVar17 = ~bVar13 & (bVar36 | 0x52U);
  uVar29 = 0xffff - ((ushort)(uVar24 >> 0x1a) | (ushort)uVar10);
  bVar14 = (byte)(uVar25 & 0xffff);
  bVar7 = (bVar36 | 0x52U) ^ bVar14;
  uVar8 = (CONCAT11((byte)(uVar2 >> 8) ^ bVar13,bVar17) >> 1 | (ushort)((bVar17 & 1) != 0) << 0xf |
          0x80) - ((ushort)bVar7 | 0x1f00);
  sVar9 = (ushort)(byte)(uVar12 >> 8) + 1;
  uVar24 = uVar11 | 0xffff;
  uVar10 = 1 << (uVar25 & 0x1f);
  bVar17 = (byte)uVar10;
  bVar13 = bVar17 & 0xf;
  bVar17 = bVar17 - 1;
  uVar22 = CONCAT11(bVar14,bVar7);
  uVar33 = (ushort)(uVar25 & 0xffff) & 0xff00 | 0x1f;
  if ((char)bVar17 < '\0') {
    uVar33 = 0xffff;
  }
  uVar16 = CONCAT22((short)(uVar2 >> 0x10),uVar22) & (uVar25 & 0xffff0000 | (uint)uVar8);
  if ((int)uVar16 < 0) {
    uVar22 = uVar33;
  }
  uVar10 = (uVar12 ^ uVar10) & 0xffffff00 | (uint)bVar17;
  if (uVar16 != 0) {
    uVar10 = uVar24;
  }
  bVar18 = (char)uVar8 + 0x84;
  bVar17 = (byte)uVar10 >> 1;
  uVar23 = sVar9 + ((ushort)uVar10 & 0xff);
  iVar28 = (int)uVar24 >> (bVar17 & 0x1f);
  uVar24 = (int)(short)uVar22 + 0x53b63d77;
  bVar7 = (byte)(uVar24 >> 8);
  bVar14 = bVar18 + bVar7;
  uVar16 = (uint)(byte)(bVar14 + 1);
  uVar33 = ((ushort)uVar10 & 0xff00 | (ushort)(byte)(((byte)uVar10 << 7 | bVar17) - 1)) >> 1;
  uVar22 = (ushort)uVar24 & 0xf;
  uVar30 = uVar23 | 1 << uVar22;
  bVar17 = (byte)uVar33;
  uVar34 = (uVar29 >> bVar13 | uVar29 << 0x10 - bVar13) + 0x597c;
  uVar12 = (uVar25 & 0xffff0000 | (uint)(uVar8 & 0x7f00) | uVar16) + 0x761fdaa0;
  uVar29 = (short)(sVar9 * 0x10 & ~(ushort)(1 << (uVar16 & 0x1f))) >> (bVar17 & 0x1f);
  bVar13 = (char)uVar12 << (bVar17 & 0x1f);
  iVar20 = ((uint)(ushort)(uVar30 & 0xff | (ushort)(byte)((char)(uVar30 >> 8) << 1) << 8) | 0x100) +
           1;
  uVar19 = ((uint)(CONCAT14((uVar23 >> uVar22 & 1) != 0,iVar28) >> (bVar17 & 0x1f)) |
           iVar28 << 0x21 - (bVar17 & 0x1f)) &
           (uVar10 & 0xffff0000 |
           (uint)(ushort)(uVar33 | (ushort)(CARRY1(bVar18,bVar7) || 0xfe < bVar14) << 0xf));
  if (uVar19 != 0) {
    uVar24 = uVar19;
  }
  iVar28 = (uVar12 & 0xffffff00 | (uint)bVar13) << 6;
  bVar14 = (byte)((uVar10 & 0xffff0000) >> 0x1a);
  bVar17 = (byte)((uVar12 & 0xffffff00) >> 8);
  uVar22 = (short)(char)uVar24 * (short)(char)bVar17;
  uVar10 = (uVar19 & 0xffff3176) << 1;
  uVar31 = uVar10 & 0xffff0000;
  uVar26 = (int)(uVar31 | uVar22) >> 4;
  uVar33 = CONCAT11(bVar17 >> 1 | bVar17 << 7,bVar13) & ~(1 << (uVar34 & 0xf));
  bVar13 = (byte)(uVar22 + ((ushort)uVar10 | (ushort)((int)(uVar19 & 0xffff3176) < 0)) >>
                 (bVar14 & 0x1f));
  bVar7 = (byte)((uint)iVar20 >> 8);
  bVar17 = bVar7 ^ (bVar13 == bVar7) * (bVar7 ^ (byte)iVar20);
  iVar20 = CONCAT31(CONCAT21((short)((uint)iVar20 >> 0x10),bVar17),bVar37 + -1);
  sVar9 = uVar33 + uVar29;
  uVar22 = CONCAT11((sVar9 < 0) << 7 | (sVar9 == 0) << 6 |
                    (((uVar25 & 0xfff0000 | (uint)(uVar8 & 0x7f00) | uVar16) + 0x61fdaa0 &
                     0x10000000) != 0) << 4 | bVar37 << 2 | 2U | CARRY2(uVar33,uVar29),
                    bVar13 ^ (bVar13 == bVar7) * (bVar13 & bVar17));
  uVar33 = (ushort)iVar28 & 0xff00 |
           (ushort)(byte)((bVar14 | (byte)iVar28) & (byte)((uint)uVar22 >> 8));
  if (bVar37) {
    uVar26 = CONCAT22((short)((int)uVar31 >> 0x14),uVar22);
  }
  uVar29 = uVar33 + 0x518c;
  uVar10 = (uVar12 & 0x3fffc00) << 6;
  uVar25 = uVar10 | uVar29;
  uVar24 = (uVar24 & 0xffff0000 | (uint)uVar22) - iVar20;
  if (SCARRY2(uVar33,0x518b) != SCARRY2(uVar33 + 0x518b,1)) {
    uVar24 = uVar25;
  }
  uVar16 = (uint)CONCAT11((byte)(uVar24 >> 8) >> ((byte)uVar29 & 0x1f),(char)uVar24);
  uVar19 = (uVar12 & 0xffff0000 | (uint)(ushort)((short)iVar20 + 0x372f + sVar9)) >> 7;
  return CONCAT44(in_EDX,((((uVar16 & 0xff00) << 8 | uVar16 << 0x18 |
                           (uint)CONCAT11(uVar19 != 0,(char)(uVar24 >> 0x18))) +
                           (iVar20 - uVar25 & 0xffff0000 | (uint)uVar34) +
                           (uVar10 | uVar29 & ~(1 << (uVar29 & 0xf))) +
                           CONCAT22((ushort)((uVar12 & 0xffff0000) >> 0x17),
                                    CONCAT11((char)(uVar19 >> 8) + '&',(char)uVar19)) +
                          (uVar26 & 0xffff0000 | (uint)(ushort)((short)uVar26 + 0x256a))) -
                         (uVar11 | (uint)uVar34)) + 0x325322c0);
}



// WARNING: Removing unreachable block (ram,0x08050571)
// WARNING: Removing unreachable block (ram,0x08050263)
// WARNING: Removing unreachable block (ram,0x0805090f)
// WARNING: Removing unreachable block (ram,0x0804fe76)
// WARNING: Removing unreachable block (ram,0x0804febe)
// WARNING: Removing unreachable block (ram,0x0804ff73)

undefined8 log_size_10_var_009(void)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar9;
  uint uVar7;
  uint3 uVar10;
  uint uVar8;
  sbyte sVar11;
  ushort uVar12;
  char cVar16;
  byte bVar17;
  byte bVar18;
  uint uVar13;
  byte bVar15;
  ushort uVar19;
  uint uVar14;
  ushort uVar20;
  byte bVar21;
  ushort uVar22;
  short sVar23;
  undefined4 in_EDX;
  uint uVar24;
  uint uVar25;
  int iVar26;
  byte bVar29;
  uint uVar27;
  uint uVar28;
  ushort uVar30;
  uint uVar31;
  uint uVar32;
  ushort uVar33;
  ushort uVar34;
  short sVar35;
  uint uVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  
  iVar26 = 0x1f;
  while (0x8d9175fcU >> iVar26 == 0) {
    iVar26 = iVar26 + -1;
  }
  iVar26 = 0x1f;
  while (0xeecbdf41U >> iVar26 == 0) {
    iVar26 = iVar26 + -1;
  }
  iVar26 = 0x1f;
  while (0x8d900db9U >> iVar26 == 0) {
    iVar26 = iVar26 + -1;
  }
  uVar7 = iVar26 * 0x5639b22a;
  iVar1 = 0x1f;
  while (0x3e00aa77U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  bVar15 = (byte)(uVar7 >> 8);
  bVar38 = (uVar7 & 0x400) != 0;
  bVar37 = (uVar7 & 0x100) != 0;
  bVar9 = bVar15 + 0x59;
  uVar8 = 0x3e00aa77;
  if (bVar15 < 0xa7 || bVar9 < bVar37) {
    uVar8 = 0x8d900d00;
  }
  uVar7 = uVar7 & 0xffff0000 | (uint)CONCAT11(bVar9 - bVar37,(char)uVar7);
  if (bVar38) {
    uVar7 = 0xffffeaa3;
  }
  uVar24 = (int)((uint)CONCAT11((char)(((short)iVar26 << 7 | 0x5dU) >> 1),0xab) | 0x67970000) >>
           0x19;
  uVar13 = uVar24 + 0x8d903400;
  uVar24 = (uint)(CONCAT14(0x726fcbff < uVar24,uVar7) >> 0x12);
  uVar27 = uVar24 | uVar7 << 0xf;
  bVar9 = (byte)uVar13;
  uVar13 = uVar13 & 0xffff0000;
  uVar28 = (uint)CONCAT11(1,bVar9);
  bVar9 = bVar9 & 0x1f;
  uVar36 = 0xffffeaa3U >> bVar9 | -0x155d << 0x20 - bVar9;
  uVar19 = (ushort)(((uVar28 & 0xff00) << 8) >> 0x10) | (ushort)((uVar28 << 0x18) >> 0x10);
  uVar12 = ~((ushort)(uVar13 >> 0x18) | (ushort)(uVar13 >> 8));
  uVar22 = 0x66 - (short)uVar27;
  bVar9 = (char)(uVar12 >> 8) - 0x23;
  uVar12 = uVar12 & 0xff;
  bVar21 = (char)uVar22 + 0x44;
  bVar15 = bVar9 ^ (bVar9 == 0x9d) * (bVar9 ^ 0x44);
  uVar13 = CONCAT22(uVar19,uVar12 | (ushort)bVar15 << 8);
  bVar18 = (byte)(uVar27 >> 8);
  uVar28 = 0x730aa274;
  if (SCARRY1(bVar21,bVar18)) {
    uVar28 = uVar36;
  }
  bVar29 = (byte)uVar12;
  bVar17 = (bVar29 & 0x1f) % 0x11;
  uVar8 = (uint)CARRY1(bVar21,bVar18) << 0x10 | uVar8 & 0xffff;
  uVar25 = uVar13 & 0xffffff00 | (uint)bVar29;
  uVar27 = (uint)uVar22 & 0xffffff00 | (uint)(byte)((bVar21 + bVar18) * '\x02') | 1;
  if (bVar29 != 0) {
    uVar27 = uVar28;
  }
  uVar13 = uVar13 >> 0xc;
  if ((uVar27 & 0x60b6f42e) == 0) {
    uVar25 = (uint)uVar19 << 0x10 | uVar36 & 0xffff;
  }
  uVar12 = (ushort)uVar25 &
           (((ushort)(byte)((bVar9 == 0x9d) * (bVar15 & 0x9d) ^ 0x9d) * (ushort)(byte)uVar24 ^
            0x739e) & 0x70a7) + 0x45e4 & 0x13;
  bVar9 = (byte)uVar27;
  uVar24 = (uint)(bVar18 | bVar9) << 8;
  uVar13 = (((uint)(ushort)(((ushort)(uVar8 << bVar17) | (ushort)(uVar8 >> 0x11 - bVar17)) >> 1) <<
             0x14 | uVar13) >> 4 | uVar13 << 0x1c) >> (sbyte)uVar12;
  uVar8 = (uint)uVar12;
  if (bVar38) {
    uVar8 = uVar24;
  }
  uVar14 = uVar25 & 0xffff0000 | uVar8 | 0x5baf;
  uVar24 = ~((uVar7 << 0xf & 0xffff0000 | uVar24) << ((byte)uVar14 & 0x1f));
  uVar19 = ((ushort)(byte)((char)((bVar9 - 0xd) -
                                 (0xadc6 < CONCAT11((char)(uVar27 >> 8) + '\x01',bVar9))) >>
                          (sbyte)uVar8) << 8 | (ushort)uVar14 >> 8) * 0xaf;
  uVar12 = (short)uVar24 * 2;
  bVar9 = (byte)((uint)uVar19 >> 8);
  uVar22 = ~(uVar12 + (ushort)(uVar36 < uVar28));
  uVar7 = (uint)CARRY2(uVar12,(ushort)(uVar36 < uVar28));
  uVar8 = uVar13 + 0x1672bfd0;
  uVar13 = (uint)(0xe98d402f < uVar13 || CARRY4(uVar8,uVar7)) << 0x10 | uVar28 & 0xffff;
  uVar12 = (ushort)(uVar13 << 4) | (ushort)(uVar13 >> 0xd);
  bVar15 = (byte)uVar22;
  uVar13 = (uVar24 & 0xffff0000 | (uint)uVar22 & 0xffffff00 |
           (uint)(byte)(bVar15 >> 1 | bVar15 << 7)) +
           (uint)(ushort)(uVar19 & 0xff | (ushort)(byte)(bVar9 >> 6 | bVar9 << 2) << 8) + 1;
  bVar9 = (byte)((uVar25 & 0xffff0000) >> 0x19);
  bVar21 = 0 >> (bVar9 & 0x1f);
  bVar15 = bVar9 & 0xf;
  uVar24 = uVar13 & 0xffff0000 |
           (uint)(ushort)(CONCAT11((byte)(uVar13 >> 8) >> (bVar9 & 0x1f),(char)uVar13) << bVar15 |
                         ((ushort)bVar21 << 8) >> 0x10 - bVar15);
  uVar36 = uVar24 >> bVar15 | uVar24 << 0x20 - bVar15;
  uVar24 = (int)(short)(((ushort)~(int)(short)uVar13 | 0x10) + uVar12 + 1) *
           (int)(short)((ushort)bVar21 << 9);
  uVar13 = ~(int)(short)uVar13 & 0xffff0000U | uVar24 & 0xffff;
  uVar27 = uVar13 << 1 | (uint)((int)uVar13 < 0);
  uVar36 = uVar36 & 0xffff0000 | (uint)(ushort)((short)uVar36 + 0x34f6);
  uVar13 = (uVar28 & 0xffff0000 | (uint)uVar12) + 0xd3bf210a;
  uVar28 = uVar36 ^ (uint)(uVar27 == uVar36) * (uVar36 ^ uVar13);
  uVar27 = uVar27 ^ (uint)(uVar27 == uVar36) * (uVar27 & uVar28);
  uVar24 = (uVar27 & 0xff00 | (uint)(byte)((char)uVar27 - (char)uVar28)) * (uVar24 >> 0x10);
  uVar28 = (uVar27 & 0xffff0000 | uVar24 & 0xffff) * 0x3c84b92c;
  uVar24 = (uVar28 & 0xffff0000 |
           (uint)CONCAT11((char)(((((uint)bVar21 & 0x7fff80) << 9 | uVar24 >> 0x10 & 0xffffff00) >>
                                 1) >> 8),(char)uVar28)) << 1;
  bVar9 = (char)(uVar24 >> 8) - 1;
  bVar37 = (bVar9 & 4) == 0;
  uVar24 = (uVar24 & 0xffff0000 |
           (uint)CONCAT11(bVar9,(byte)uVar24 |
                                (byte)((int)((uVar8 + uVar7 & 0xffff0000) << 2) >> 0x2c) >> 7)) +
           0x648cb226;
  sVar35 = CONCAT11((char)(uVar24 >> 8) + (char)(uVar28 >> 8),(char)uVar24);
  uVar7 = (int)sVar35 * (int)sVar35;
  uVar8 = uVar7 >> 0x10;
  uVar7 = uVar7 & 0xffff;
  uVar7 = (uint)CONCAT11((char)(uVar7 >> 8) + -1,(char)uVar7);
  uVar27 = uVar24 & 0xffff0000 | uVar7;
  uVar28 = uVar27 * 2;
  uVar12 = (ushort)(byte)uVar28 * (ushort)(byte)uVar28;
  uVar36 = (uVar13 & 0xffff0000 | (uint)(ushort)((ushort)uVar13 | 0x1000)) * 0x58888800;
  uVar12 = 0x41cc - (ushort)((uVar12 >> (uVar12 & 0xf) & 1) != 0);
  uVar7 = CONCAT22((ushort)(((uVar8 & 0xff00) << 8) >> 0x10) | (ushort)((uVar8 << 0x18) >> 0x10),
                   CONCAT11((char)(uVar36 >> 8),(char)(uVar7 >> 8) >> 7)) + 0xcc88dbe1;
  uVar24 = ((uint)uVar12 | 0x37490000) + (uVar28 & 0xffff0000);
  uVar8 = (int)(short)uVar12 *
          (int)(short)(((ushort)(uVar13 >> 0x1c) + (short)uVar28 + (ushort)CARRY4(uVar27,uVar27)) *
                      2);
  uVar13 = uVar8 & 0xffff | 0x37493c00;
  if ((uVar36 & 0x20000000) != 0) {
    uVar13 = uVar24;
  }
  uVar13 = -(uVar13 >> 0x18 | uVar13 << 8);
  uVar12 = (ushort)uVar13 >> 1;
  uVar7 = (uVar7 & 0xfffe0000) >> 1 | (uVar24 >> 3) << 0x1f |
          (uint)(ushort)~(ushort)((uVar7 & 0xffff0000 |
                                  (uint)(ushort)((ushort)(uVar8 >> 0x10) ^ 0x9b)) >> 1);
  iVar26 = 0;
  if (uVar7 != 0) {
    while ((uVar7 >> iVar26 & 1) == 0) {
      iVar26 = iVar26 + 1;
    }
  }
  uVar24 = uVar24 & 0xffdf0000;
  bVar9 = (byte)((uint)(ushort)(uVar12 | (ushort)((uVar13 & 1) != 0) << 0xf) >> 8);
  uVar7 = 0x1f;
  if (bVar9 != 0) {
    while (bVar9 >> uVar7 == 0) {
      uVar7 = uVar7 - 1;
    }
  }
  uVar28 = (uint)CONCAT11(1,(char)((int)(uint)bVar9 >> 1));
  iVar1 = -(int)(short)(uVar12 & 0xff | (ushort)(byte)(bVar9 + 0x4d) << 8);
  sVar23 = (short)((uint)iVar1 >> 0x10);
  sVar35 = sVar23 + -0x1216;
  bVar39 = SCARRY2(sVar23,-0x1216) != SCARRY2(sVar35,0);
  bVar38 = sVar35 < 0;
  uVar12 = (ushort)iVar1 & 0xff00 | (ushort)(bVar39 != bVar38);
  uVar8 = (uint)(uint3)((uint3)(byte)((byte)((uint)iVar1 >> 8) ^ 0xff) | 0x7c) << 8;
  if (bVar37) {
    uVar8 = uVar24;
  }
  uVar8 = uVar8 | (sVar35 == 0 || bVar39 != bVar38);
  if (sVar35 != 0 && bVar39 == bVar38) {
    uVar8 = uVar24;
  }
  uVar19 = (ushort)((short)uVar12 < 0);
  uVar12 = uVar12 << 1 | uVar19;
  uVar14 = uVar24 | 0xfdb1a286;
  uVar30 = (ushort)(iVar26 * -0x7aab70fe);
  uVar20 = (ushort)uVar7;
  sVar11 = (sbyte)uVar8;
  uVar28 = uVar28 << sVar11 |
           (uint)(CONCAT14(0x2d53 < uVar20 || 0xfffe < (ushort)(uVar20 + 0xd2ac),uVar28) >>
                 0x21 - sVar11);
  uVar22 = (short)uVar12 >> 0xf & ~(1 << ((ushort)uVar28 & 0xf));
  uVar33 = uVar30 ^ (uVar30 >> 9 & 1) << 9 ^ (uVar30 >> 0xc & 1) << 0xc;
  uVar28 = uVar28 >> 1;
  uVar30 = uVar20 + 0xd2ad >> 7 | uVar22 << 9;
  uVar25 = uVar7 & 0xffff0000 | (uint)uVar30;
  uVar7 = (uVar8 & 0xffff0000 |
          (uint)(ushort)((ushort)uVar8 >> 8 | ((ushort)(bVar39 != bVar38) << 1 | uVar19) << 8)) << 1
  ;
  uVar27 = uVar7 | (uint)(iVar26 * -0x7aab70fe) >> 0x1f;
  uVar36 = (uVar28 & 0xffff0000 | (uint)(ushort)(uVar20 + 0xd2ad) << 0x1f |
           (uint)CONCAT11((char)(uVar28 >> 8) >> 0xf,(byte)uVar28 ^ (byte)(uVar22 >> 8))) ^
           uVar28 & 0x1000000 ^ uVar27;
  uVar19 = uVar22 & 0xff | (ushort)(uVar36 != 0) << 8;
  bVar9 = (byte)uVar27;
  bVar15 = (byte)(uVar7 >> 8);
  uVar28 = (uVar8 & 0x7fff0000) << 1;
  uVar22 = ((ushort)(byte)((char)((uint)uVar12 >> 8) >> sVar11) & 0x3f) << 8;
  uVar12 = (ushort)(byte)((byte)(uVar36 >> 8) | 0xc0);
  uVar27 = uVar13 & 0xffff0000 | (uint)(ushort)(uVar22 / uVar12 & 0xff | uVar22 % uVar12 << 8);
  uVar7 = uVar27 + uVar25;
  uVar13 = (uint)CONCAT11((char)(uVar7 >> 8) << 1,(byte)uVar7);
  uVar8 = (uint)uVar19 << 0x20 - (bVar9 & 0x1f);
  uVar36 = uVar19 >> (bVar9 & 0x1f) | uVar8;
  uVar27 = (uint)(ushort)(uVar33 << 3 | (ushort)(CONCAT12(CARRY4(uVar27,uVar25),uVar33) >> 0xe)) &
           (uint)(ushort)(uVar30 + 0xe0) & 0xffffffb9 ^ 1 << (uVar36 & 0x1f);
  uVar28 = (uVar28 >> 0x14 |
           (uVar28 | CONCAT11(bVar15 >> (bVar9 & 7) | bVar15 << 8 - (bVar9 & 7),bVar9)) << 0xd) ^
           0xdc79;
  bVar9 = (byte)uVar27;
  if (bVar37) {
    uVar14 = uVar24 | 0xfdb10000 | uVar28 & 0xffff;
  }
  uVar12 = (short)uVar28 * 0x515;
  uVar25 = ((uVar7 & 0xffff0000 | uVar13) & 0x7fff8) << 0xd;
  uVar24 = ((int)uVar14 >> 1) << 2;
  uVar14 = (uint)(int)(char)bVar9 >> (bVar9 & 0x1f) | (int)(char)bVar9 << 0x21 - (bVar9 & 0x1f);
  uVar19 = (ushort)uVar24 & 0xfd98 | 0x40;
  uVar24 = uVar24 & 0xffff0000;
  uVar32 = uVar24 | uVar19;
  uVar31 = uVar28 | 1 << (uVar14 & 0x1f) | uVar32;
  uVar27 = (uint)(ushort)(CONCAT11((char)(uVar27 >> 8) * '\x02',bVar9) | 0x16);
  uVar7 = (((uint)(ushort)((ushort)uVar36 ^ (uVar30 ^ 1 << ((ushort)(byte)uVar7 & 0xf)) * 0x78fe) &
           0x3f00) << 0x10 | (uVar13 & 7) << 0xd) %
          (uVar36 * 0x1e4fe0da >> 0x14 | (uVar28 & 0xf) << 0xc | 0xc000) & 0xffff00ff;
  if (bVar37) {
    uVar7 = uVar27;
  }
  uVar13 = uVar25 | (uint)uVar12 & 0xffffff00 | (uint)(byte)((char)uVar12 >> 1);
  if (!bVar37) {
    uVar27 = uVar13;
  }
  uVar22 = (ushort)uVar31;
  uVar2 = (ulonglong)(uVar32 | 0xc0000000);
  uVar3 = CONCAT44((uVar7 | uVar8 & 0xffff0000) - (uVar25 | (uint)uVar12),uVar13) &
          0x3fffffffffffffff;
  uVar4 = uVar3 / uVar2;
  uVar7 = 1 << (uVar27 & 0x1f);
  uVar12 = (ushort)(byte)uVar4 * (ushort)(byte)uVar7;
  uVar7 = ((uint)((short)uVar22 < (short)((ushort)uVar14 & 0xff00)) << 8 | uVar7) ^ uVar7 & 0x8000;
  uVar2 = (CONCAT44(CONCAT22((short)(uVar3 % uVar2 >> 0x10),(short)(char)uVar12 << 1) + 0x35535e03,
                    CONCAT22((short)(uVar4 >> 0x10),uVar12 & 0xff | (uVar12 >> 9) << 8)) &
          0x3fffffffffffffff) / (ulonglong)(uVar31 | 0xc0000000);
  uVar12 = (short)(((ushort)uVar7 ^ (ushort)(1 << (uVar7 & 0x1f))) & 0xff1d ^ 1 << (uVar22 & 0xf))
           >> 0x1b;
  uVar10 = (uint3)(uVar2 >> 8);
  uVar30 = uVar22 | (ushort)CONCAT31(uVar10,(char)uVar2 << 1);
  uVar7 = (uVar24 | 0xc0000000 | (uint)(uVar19 >> 1)) ^ 0xf484e236;
  uVar8 = uVar7 & 0xffff0000;
  uVar33 = (ushort)(uVar7 >> 1) & 0x7fff;
  uVar20 = (ushort)(((uint)(ushort)((uVar12 ^ uVar12 & 8) >> 1) << 0x1b) >> 0x10) |
           (ushort)((short)uVar22 >> 0xf) >> 5;
  bVar37 = (uVar2 & 0x400) != 0;
  bVar9 = (char)(uVar33 * -0x66d5 >> 8) << 1;
  uVar12 = uVar33 * -0x66d5 & 0xff;
  bVar15 = (byte)uVar12;
  uVar24 = (uVar31 & 0xffff0000 | 0xc0000000 |
           (uint)(ushort)(uVar30 << (bVar15 & 0xf) | uVar30 >> 0x10 - (bVar15 & 0xf))) + 0x99a933cd;
  bVar15 = bVar15 << (bVar15 & 0x1f);
  lVar5 = (longlong)(int)((uint)uVar10 << 8) *
          (longlong)
          (int)(CONCAT22(uVar20,uVar12 | (ushort)bVar9 << 8) & 0xffffff00 | (uint)bVar15 | 0x100);
  uVar19 = ~(uVar22 & 0xff | (uVar22 & 0xff) << 8) ^ uVar33;
  uVar12 = uVar33 - 0xa96 & 0xf;
  uVar30 = uVar19 ^ 1 << uVar12;
  uVar7 = CONCAT22(uVar20,CONCAT11((byte)((char)(bVar9 | 1) >> (bVar15 & 0x1f)) >> 1 |
                                   ((uVar19 >> uVar12 & 1) != 0) << 7,bVar15)) +
          (int)((ulonglong)lVar5 >> 0x20);
  uVar22 = uVar30 * 0x4000 - 0xb20;
  uVar13 = CONCAT22((short)(uVar8 >> 0x10),0x8316);
  bVar9 = (byte)uVar7;
  uVar24 = (uVar24 & 0x7eff0000 | (uint)(ushort)((short)uVar24 + 0x6319) | 0x8b1f) << 1 & uVar13;
  uVar12 = (((ushort)lVar5 >> 1 & 0xff) * (uVar30 & 0xff) | 2000) + uVar22;
  cVar16 = (char)((uint)uVar22 >> 8);
  uVar22 = uVar22 & 0xff;
  uVar19 = uVar22 | (ushort)(byte)(cVar16 << 1) << 8;
  if (cVar16 < '\0' != (short)uVar19 < 0) {
    uVar13 = uVar8 | uVar12;
  }
  bVar21 = ((char)((uint)uVar19 >> 8) + -8) - (cVar16 < '\0');
  uVar19 = uVar22 | (ushort)bVar21 << 8;
  if (!bVar37) {
    uVar24 = uVar24 & 0xffff0000 | (uint)(ushort)((short)uVar12 >> 0xf);
  }
  uVar33 = 0 >> (bVar9 & 0x1f);
  uVar30 = (ushort)uVar24 & ~(1 << ((ushort)uVar24 & 0xf));
  uVar28 = (uint)uVar30;
  uVar36 = (uVar24 & 0xffff0000 | uVar28) & 0x45ddb88;
  uVar12 = ((ushort)uVar13 >> 1 | 0x8000) >> 0xd | uVar19 << 3;
  uVar8 = uVar36 * -0x3ae6f8d3 | 0x7660384b;
  uVar25 = uVar13 & 0xffff0000 | (uint)(ushort)((uVar12 << 1 | (ushort)(0xf9 < bVar21)) + 0x3cf7);
  uVar13 = (uVar7 & 0xffff0000 | (uint)CONCAT11((byte)(uVar7 >> 8) | bVar15,bVar9)) ^ 0x5961;
  uVar8 = (uVar8 & 0xffff0000 |
          (uint)CONCAT11(-1 < (short)(((uVar22 | (ushort)(byte)((char)((uint)uVar19 >> 8) + 6) << 8)
                                      + 0x2bf4) - (ushort)((short)uVar12 < 0)),(char)uVar8)) >> 1;
  bVar38 = (uVar13 & 1) != 0;
  uVar12 = (ushort)uVar13 >> 1;
  cVar16 = (char)((uint)(ushort)(uVar12 | (ushort)bVar38 << 0xf) >> 8);
  uVar27 = uVar8 >> ((char)uVar12 >> 1 & 0x1fU);
  uVar13 = uVar27 & 0xffff0000;
  iVar26 = 0x1f;
  if (uVar25 != 0) {
    while (uVar25 >> iVar26 == 0) {
      iVar26 = iVar26 + -1;
    }
  }
  uVar25 = (((uint)uVar20 << 0x10) >> 9 & 0x7fff00) << 8;
  uVar7 = (((uint)(ushort)(uVar33 << (bVar9 & 0xf) | uVar33 >> 0x10 - (bVar9 & 0xf)) ^ 0xbe24) -
          (uVar8 & 0xffff)) - (uint)bVar38 ^
          (uint)(uint3)((uint3)((uVar7 & 0xffff0000) >> 8) |
                       (uint3)(byte)((cVar16 << 1 | cVar16 < '\0') - (char)uVar27)) << 8;
  uVar27 = uVar7 + 0xb2e95a94 + (uint)(0x7169bb28 < uVar7 || 0xfffffffe < uVar7 + 0x8e9644d7);
  uVar7 = uVar27 & 0xffff;
  uVar27 = uVar27 & 0xffff0000;
  sVar35 = (short)uVar36;
  bVar9 = ((byte)uVar30 & 0x88) * '\x02' + 1;
  uVar12 = CONCAT11(bVar9 == 0,1);
  uVar14 = CONCAT22((ushort)((((uVar36 * -0x3ae6f8d3 & 0x10000) >> 1) << 8) >> 0x10) |
                    (ushort)(((uint)(byte)((char)(uVar8 & 0xffff) + (char)(uVar8 >> 8)) << 0x18) >>
                            0x10),uVar12);
  uVar8 = uVar13 | uVar28 & 0xdb00 | (uint)bVar9;
  if (-1 < (char)bVar9) {
    uVar8 = uVar13;
  }
  lVar6 = (ulonglong)uVar8 *
          (ulonglong)
          (uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 |
          (uint)((uVar14 >> ((uint)uVar12 & 0x1f) & 1) != 0) << 0x18);
  uVar12 = (ushort)(uVar14 * -0x50e9d3da >> 0x10);
  lVar5 = (longlong)(int)lVar6 * (longlong)(int)uVar36;
  uVar8 = (uint)lVar5 ^ 0x266db744;
  cVar16 = (char)((ulonglong)lVar5 >> 0x20);
  uVar13 = ((uVar8 & 0xffff0000 | (uint)(ushort)((short)(char)uVar8 * (short)(cVar16 >> 7))) ^ 0x201
           ) >> 1;
  uVar14 = (uint)(uVar12 >> 1) << 0x10 | 0x80000000;
  uVar8 = 1 << (uVar13 & 0x1f);
  uVar25 = CONCAT22((undefined2)(cVar16 >> 7),
                    (((short)cVar16 | 0x4000U) -
                    (short)CONCAT31(CONCAT21(uVar12,(char)((ulonglong)lVar6 >> 0x18) >> 0xf) >> 1,
                                    !bVar37)) + -1) << 1;
  uVar36 = -(uVar14 | uVar8);
  uVar13 = (uint)CONCAT11((char)(uVar13 >> 8) + '\x01',(char)uVar8);
  cVar16 = (char)(uVar36 >> 8);
  uVar28 = uVar28 & 0xdb88;
  if ((short)uVar25 != 1) {
    uVar28 = uVar13;
  }
  uVar28 = uVar24 & 0x45d0000 | uVar28;
  uVar24 = (int)(short)((short)cVar16 & 0xffU | (ushort)(byte)-(cVar16 >> 7 & 0xbfU) << 8) *
           (int)sVar35;
  bVar21 = (byte)(uVar24 >> 0x11);
  uVar20 = (ushort)uVar24 & 0x3fff;
  uVar12 = (ushort)(bVar21 & 0x7f | 0xc0);
  uVar13 = uVar25 & 0xffff0000 | uVar13 & 0xff00;
  uVar13 = uVar13 >> (bVar21 & 0x1f) | uVar13 << 0x20 - (bVar21 & 0x1f);
  uVar30 = (ushort)(CONCAT14((uVar20 / uVar12 & 0x20) != 0,uVar28) >> (bVar21 & 0x1f)) |
           (ushort)(uVar28 << 0x21 - (bVar21 & 0x1f));
  uVar19 = sVar35 << 1;
  uVar22 = uVar30 >> 0xf;
  uVar33 = uVar19 | uVar22;
  sVar23 = (short)((int)uVar27 >> 0x14);
  uVar34 = (short)((int)(uVar27 | (ushort)((ushort)(uVar7 << 3) | (ushort)(uVar7 >> 0xe))) >> 4) +
           0x59ef + (ushort)(sVar35 < 0);
  uVar28 = CONCAT22(sVar23,uVar34);
  uVar13 = (uVar13 & 0xffff0000 |
           (uint)CONCAT11((char)(uVar13 >> 8) >> (bVar21 & 0x1f),(char)uVar13)) << 1;
  uVar12 = ((ushort)(((uint)(ushort)(cVar16 >> 7) << 0x10) >> 8) |
           (ushort)((uint)(ushort)(uVar20 % uVar12 << 8) >> 8)) >> (bVar21 & 0xf) |
           uVar33 << 0x10 - (bVar21 & 0xf);
  bVar15 = (byte)(uVar36 >> 0x16);
  uVar20 = (ushort)uVar13;
  bVar9 = (bVar15 & 0x1f) % 9;
  bVar9 = (char)uVar33 << bVar9 |
          (byte)((uVar19 & 0xff | uVar22 | (ushort)CARRY2(uVar20,uVar33) << 8) >> 9 - bVar9);
  uVar7 = ((uint)uVar12 & 0x7fffff80) << 1 | (uint)(byte)((char)uVar12 * '\x02' - 0x34);
  if ((bVar9 & 1) != 0) {
    uVar7 = uVar13 & 0xffff0000 |
            (uint)(ushort)((uVar20 + uVar33 +
                           ((short)((ushort)((uVar14 | uVar8 & 0xffff0000 |
                                             (uint)(ushort)((ushort)((byte)(uVar24 >> 0x18) < 0xb) *
                                                           -2)) >> (bVar21 & 0x1f)) &
                                   ~(1 << (uVar30 & 0xf))) >> 0xb)) * -0x3f43);
  }
  iVar26 = uVar28 * -0x1a6f05ef;
  uVar22 = (ushort)uVar7 & 0x3fff;
  uVar12 = (ushort)(byte)(((char)((uVar19 & 0xff00 | (ushort)bVar9) >> 1) - bVar15) + 'S' +
                          ((uVar34 >> ((ushort)bVar15 & 0xf) & 1) != 0) | 0xc0);
  uVar13 = (uint)(ushort)(uVar22 / uVar12 & 0xff | uVar22 % uVar12 << 8);
  uVar24 = uVar7 & 0xffff0000 | uVar13;
  uVar12 = (ushort)(CONCAT22(sVar23,(short)(uVar34 ^ 1 << ((ushort)bVar15 & 0xf)) >> (bVar15 & 0x1f)
                            ) >> 1) >> 1;
  uVar28 = uVar28 ^ 0xe5b0ead9;
  uVar8 = 0;
  if (uVar24 != 0) {
    while ((uVar24 >> uVar8 & 1) == 0) {
      uVar8 = uVar8 + 1;
    }
  }
  uVar19 = (short)uVar8 + (short)((uint)iVar26 >> 0x10);
  uVar24 = (uint)uVar12 | 0xc000;
  uVar13 = (uVar8 & 0x3fff) << 0x10 | uVar13;
  uVar8 = uVar13 / uVar24 & 0xffff;
  uVar30 = (ushort)uVar28;
  uVar33 = uVar12 << 4 | uVar30 >> 0xc;
  bVar15 = (byte)uVar19;
  bVar15 = bVar15 ^ bVar15 & 8;
  bVar21 = (byte)uVar8;
  bVar18 = (byte)((uint)uVar19 >> 8);
  bVar17 = bVar18 ^ (bVar21 == bVar18) * (bVar18 ^ (byte)(uVar8 >> 8));
  iVar26 = CONCAT22((ushort)iVar26 & 0xff00 | (ushort)(byte)((char)iVar26 - 0x19),
                    (short)(uVar13 % uVar24) * -0x5f4d);
  uVar24 = uVar28 * 0x6d3845c + iVar26 + 1;
  uVar12 = (ushort)((uVar28 & 1) != 0);
  uVar8 = (uint)(ushort)(uVar30 >> 1 | uVar12 << 0xf);
  sVar35 = uVar33 + 0xb10a;
  bVar9 = ((byte)uVar24 & 0x1f) % 0x11;
  uVar13 = iVar26 + 0x406039dd;
  uVar22 = CONCAT11(bVar37,bVar21 ^ (bVar21 == bVar18) * (bVar21 & bVar17)) +
           CONCAT11(bVar17,bVar15 << (bVar15 & 7) | bVar15 >> 8 - (bVar15 & 7));
  uVar20 = uVar22 & 0xfffe;
  bVar15 = (byte)uVar20;
  bVar21 = (byte)(uVar13 >> 8);
  uVar19 = (ushort)uVar24 & 0xff00 | (ushort)(byte)((byte)uVar24 + 0x80);
  if ((char)((byte)uVar13 & bVar21) < '\0') {
    uVar19 = uVar20;
  }
  bVar18 = (byte)(uVar19 >> 8);
  bVar17 = bVar18 ^ (bVar15 == bVar18) * (bVar18 ^ (byte)uVar19);
  uVar10 = CONCAT12(bVar15 < bVar18,uVar19 & 0xff | (ushort)bVar17 << 8) >> 3;
  uVar20 = (ushort)uVar10;
  uVar34 = ((ushort)uVar24 & 0xff00 | (ushort)bVar21) ^ 1 << (uVar20 & 0xf);
  uVar12 = uVar34 << 1 | uVar12;
  uVar36 = (uVar7 & 0xdfff0000 |
           (uint)(ushort)((uVar22 & 0xff00 |
                          (ushort)(byte)(bVar15 ^ (bVar15 == bVar18) * (bVar15 & bVar17))) + 0xd519
                         + (ushort)((short)uVar34 < 0))) ^ 0x4ab7443d;
  uVar27 = ((uint)(ushort)((uVar19 & 0xff) << 0xe | uVar20) & 0xffffff00 |
           (uint)(byte)((char)uVar10 - 1)) + 0x2cb7c84f & 0xffff0000;
  uVar7 = uVar36 & 0xffffff00;
  uVar25 = uVar24 & 0xffff0000 | (uint)uVar12 | 0xc0;
  uVar36 = (uint)CONCAT21((short)(uVar7 >> 0x10),
                          (char)(((ushort)uVar7 & 0x3fff |
                                 (ushort)(byte)((byte)uVar36 ^
                                               ((byte)(CONCAT12(uVar33 < 0x4ef6,sVar35) >> bVar9) |
                                               (byte)(sVar35 << 0x11 - bVar9)))) %
                                (ushort)(byte)uVar25)) << 8;
  uVar7 = (uint)(ushort)((short)((ushort)((short)uVar36 >> 0xf) >> 0xf | uVar30 & 0xfffe) >> 1);
  sVar35 = (short)uVar25;
  bVar15 = (byte)((uint)uVar12 >> 8);
  bVar9 = bVar15 & (byte)(uVar7 >> 8);
  uVar25 = CONCAT22((undefined2)((char)uVar12 >> 7),(ushort)(short)(char)uVar12 >> 1 | sVar35 << 0xf
                   );
  if ('\0' < (char)bVar9) {
    uVar25 = uVar13 & 0xffff0000 | uVar7;
  }
  if (bVar9 == 0) {
    uVar36 = uVar28 & 0xffff0000 | uVar8;
  }
  uVar12 = SEXT12((char)bVar15);
  uVar13 = uVar36 & 0xffff0000 | (uint)uVar12 & 0xffffff7f;
  uVar19 = (ushort)((uVar8 << 0x16) >> 0x18) + 0xcec3 + (ushort)((uVar12 >> 7 & 1) != 0);
  uVar12 = sVar35 - (uVar12 & 0xff7f);
  uVar7 = 0;
  if ((int)uVar36 < 0) {
    while (((uint)((int)uVar36 >> 0x1f) >> uVar7 & 1) == 0) {
      uVar7 = uVar7 + 1;
    }
  }
  uVar8 = (uint)uVar19 + uVar25 + 1;
  uVar22 = uVar12 & 0xff;
  uVar28 = -uVar13;
  uVar20 = (ushort)uVar7 & 0xff00 | (ushort)(byte)((byte)uVar7 >> 1 | (uVar13 != 0) << 7);
  uVar13 = uVar24 & 0xffff0000 |
           (uint)(ushort)(uVar22 | (ushort)(byte)((char)((uint)uVar12 >> 8) << 1) << 8) & 0xffffff00
           | (uint)(byte)((char)uVar22 << 1 | uVar20 < 0xe335) | 0x100;
  uVar7 = (uVar7 & 0xffff0000 | (uint)(ushort)(uVar20 + 0x1ccb)) ^ 0x2d58178;
  bVar38 = (byte)(uVar7 >> 8) < (byte)uVar28;
  if (!bVar38) {
    uVar27 = uVar27 | uVar28 & 0xffff;
    uVar28 = uVar8;
  }
  uVar7 = (uint)(uVar7 < 0x988f012a || uVar7 + 0x6770fed6 < (uint)bVar38) << 0x10 | uVar27 & 0xffff;
  uVar24 = uVar7 >> 6;
  uVar36 = (uint)(ushort)((ushort)uVar24 | (ushort)(uVar7 << 0xb));
  lVar5 = (longlong)(int)uVar28 * (longlong)(int)(uVar27 & 0xffff0000 | uVar36);
  uVar7 = uVar13 + (uint)lVar5;
  uVar28 = uVar7 + 1;
  bVar15 = (char)uVar24 + (char)((ulonglong)lVar5 >> 0x20) + 1;
  uVar24 = uVar28 & 0xffffff00 | uVar28 >> 1 & 0x7f;
  iVar26 = (uint)(ushort)((short)(char)lVar5 * (short)(char)((ulonglong)lVar5 >> 0x28)) *
           ((uint)((ulonglong)lVar5 >> 0x20) & 0xffff);
  uVar28 = uVar24 + 0x7835b56f;
  uVar12 = ((short)iVar26 + 0x6916) - (ushort)(uVar24 < 0x87ca4a91);
  lVar6 = (longlong)
          (int)((uint)(ushort)((ulonglong)lVar5 >> 0x10) << 0x10 | (uint)uVar12 & 0xffffff00 |
               (uint)(byte)((char)uVar12 + (char)((uint)iVar26 >> 0x18))) * (longlong)(int)uVar28;
  bVar9 = (bVar15 & 0x1f) % 9;
  cVar16 = (char)(uVar28 >> 8);
  uVar25 = (uVar28 & 0xffff0000 |
           (uint)CONCAT11(cVar16 << bVar9 |
                          (byte)(CONCAT11((ushort)((ulonglong)lVar6 >> 0x20) < 0xb3e,cVar16) >>
                                9 - bVar9),(char)uVar28)) << 1 ^ 0x1100;
  uVar24 = (uint)(uVar19 >> 1) | 0xc000;
  uVar28 = ((uint)((ulonglong)lVar6 >> 0x20) & 0x3fff) << 0x10 | (uint)lVar6 & 0xffff;
  uVar14 = (uVar8 * 0x20000 | uVar8 >> 0xf) >> 1 | uVar28 / uVar24 << 0x1f;
  uVar27 = uVar27 & 0xffff0000 | uVar36 & 0xffffff00 |
           (uint)(byte)(bVar15 | (byte)((ulonglong)lVar6 >> 0x28));
  if (!bVar37) {
    uVar27 = uVar14;
  }
  uVar36 = (uint)((ushort)((short)(0U >> (bVar15 & 0xf) | 0 << 0x10 - (bVar15 & 0xf)) >> 1) >> 0xf)
           | uVar25 << 0x11;
  bVar15 = (byte)uVar27 & 0x1f;
  uVar28 = uVar28 % uVar24 | (uint)(ushort)((ulonglong)lVar6 >> 0x30) << 0x10 | 0x8600;
  uVar24 = uVar28 * 0x266bd4c8 + 0xd8826bec;
  uVar7 = (uVar25 - ((uint)(CARRY4(uVar13,(uint)lVar5) || 0xfffffffe < uVar7) << 0x1f |
                    uVar27 & 0xffff0000)) - (uVar28 >> 1);
  uVar13 = uVar24 & 0xffff0000 | (uint)((ushort)((short)uVar24 << 1) >> 3);
  uVar19 = (ushort)(uVar8 >> 0x10);
  uVar12 = uVar19 + 0xde9b;
  bVar9 = (byte)uVar27 & 0x1f;
  uVar24 = uVar13 << bVar9 | (uint)(CONCAT14(0x2164 < uVar19,uVar13) >> 0x21 - bVar9);
  uVar13 = uVar27 >> 0xb & 0x1f;
  uVar19 = ((short)uVar24 - (ushort)(uVar12 < 0xefe3)) + 0xe2cf;
  if (-1 < (short)uVar19) {
    uVar12 = uVar19;
  }
  uVar28 = CONCAT22((ushort)((uVar36 << bVar15) >> 0x10) |
                    (ushort)((uVar36 >> 0x20 - bVar15) >> 0x10),uVar12) | 0x2b160000;
  uVar19 = uVar19 * 2 | (ushort)((short)uVar19 < 0);
  bVar9 = (byte)uVar13;
  bVar15 = bVar9 & 7;
  cVar16 = (char)(uVar7 >> 8);
  bVar9 = bVar9 & 0xf;
  uVar22 = (ushort)(uVar28 >> 1);
  uVar12 = (ushort)uVar13;
  lVar5 = (ulonglong)(uVar24 & 0xffff0000 | (uint)(ushort)(uVar19 + uVar12)) *
          (ulonglong)(uint)((int)uVar14 >> 1);
  bVar17 = (byte)((ulonglong)lVar5 >> 0x28);
  bVar29 = (byte)(CONCAT11(CARRY2(uVar19,uVar12),cVar16) >> 6) | cVar16 << 3 | bVar17;
  uVar13 = CONCAT22((ushort)(uVar28 >> 0x11) |
                    (ushort)(((uint)((uVar8 >> 0xf & 2) != 0) << 0x1f) >> 0x10),
                    uVar22 >> bVar9 | uVar22 << 0x10 - bVar9) + 0x3bd46457 >> 1;
  uVar8 = uVar13 << 3;
  uVar13 = uVar13 >> 0x1d;
  uVar28 = uVar8 | uVar13;
  uVar20 = (ushort)((ulonglong)lVar5 >> 0x10);
  bVar21 = (byte)((uint)uVar19 & 0xffffff0f);
  uVar24 = (uint)CONCAT11((char)((ulonglong)lVar5 >> 8) + -0x68,(char)lVar5) & 0x3f00 |
           (uint)(byte)((char)lVar5 + bVar21) | 0xc0;
  uVar12 = (ushort)(byte)uVar24;
  uVar22 = (ushort)uVar24;
  iVar26 = (uint)(ushort)(uVar22 / uVar12 & 0xff | uVar22 % uVar12 << 8) * (uVar8 & 0xffff | uVar13)
  ;
  cVar16 = (char)((uint)iVar26 >> 8);
  sVar35 = (short)((uint)uVar19 & 0xffffff0f);
  uVar13 = (uVar27 & 0xffff0000 | (uint)(ushort)(sVar35 << 1 | (ushort)(sVar35 < 0))) ^ 0xb93d9bd0;
  bVar9 = (byte)uVar13 & 0x1f;
  uVar36 = uVar28 << bVar9 | uVar28 >> 0x20 - bVar9;
  bVar9 = (byte)uVar13 & 7;
  bVar18 = (byte)(uVar13 >> 8);
  bVar18 = bVar18 << bVar9 | bVar18 >> 8 - bVar9;
  uVar24 = (CONCAT22((short)(((ulonglong)
                              CONCAT22((short)((ulonglong)lVar5 >> 0x30),
                                       CONCAT11(bVar17 << (bVar21 & 7) | bVar17 >> 8 - (bVar21 & 7),
                                                (char)((ulonglong)lVar5 >> 0x20))) << 0xb) >> 0x10),
                     (short)((uint)iVar26 >> 0x10)) >> bVar21) * -0x3bbb4854;
  bVar9 = cVar16 + bVar18;
  bVar38 = SCARRY1(cVar16,bVar18) != SCARRY1(bVar9,'\0');
  cVar16 = (char)(uVar24 >> 8);
  bVar37 = cVar16 < '\0';
  bVar39 = bVar37 != (short)((ushort)(byte)(cVar16 << 1 | bVar37) << 8) < 0;
  uVar8 = (uint)bVar29 + CONCAT31(CONCAT21(uVar20,bVar9),bVar38) + (uint)bVar37;
  uVar27 = uVar8 & 0xffff0000 |
           (uint)(ushort)((ushort)uVar8 >> bVar39 | (short)uVar36 << 0x10 - bVar39);
  uVar8 = (uint)CONCAT11(bVar9 >> 1 | bVar9 * -0x80,bVar38) & 0xffffff00;
  uVar19 = -CONCAT11(bVar29,(byte)uVar7 >> bVar15 | (byte)uVar7 << 8 - bVar15);
  uVar25 = uVar36 | 0xc0000000;
  uVar2 = (CONCAT44(uVar24 & 0xffff0000 | (uint)(ushort)(short)(char)((byte)(uVar8 >> 8) ^ 0xe7),
                    (uint)uVar20 << 0x10 | uVar8 | (uint)(byte)(bVar38 << 5)) ^ 0xe700) &
          0x3fffffffffffffff;
  uVar3 = uVar2 / (ulonglong)uVar25;
  uVar24 = (uint)(uVar2 % (ulonglong)uVar25);
  uVar8 = uVar24 << 0xf;
  uVar28 = uVar24 >> 0x11 | uVar8;
  uVar24 = ((uVar13 & 0xffff0000 | (uint)CONCAT11(bVar18 << bVar39,bVar39)) >> bVar39 |
           uVar27 << 0x20 - bVar39) & uVar28;
  uVar12 = (short)uVar28 >> ((byte)uVar24 & 0x1f);
  uVar13 = (uint)(ushort)(uVar12 & 0xff | (ushort)(byte)((char)((uint)uVar12 >> 8) >> 0xd) << 8);
  uVar24 = uVar24 * -0x7d3b4e2;
  bVar9 = (byte)uVar3;
  bVar15 = (byte)uVar24;
  bVar21 = bVar15 ^ (bVar9 == bVar15) * (bVar15 ^ (byte)(uVar13 >> 8));
  uVar8 = (uVar8 & 0xffff0000 | uVar13) + 0x3416c540;
  return CONCAT44(in_EDX,CONCAT31((int3)(uVar3 >> 8),
                                  (char)(bVar9 ^ (bVar9 == bVar15) * (bVar9 & bVar21)) >>
                                  (bVar21 & 0x1f)) +
                         (uVar7 & 0xffff0000 |
                         (uint)(ushort)(uVar19 & 0xff |
                                       (ushort)(byte)((char)((uint)uVar19 >> 8) - 1) << 8)) +
                         (uVar24 & 0xffff0000 |
                         (uint)(ushort)(((ushort)bVar21 & 0x7f) << 1 |
                                       (ushort)(byte)((char)((uint)(ushort)(((ushort)uVar24 & 0xff00
                                                                            | (ushort)bVar21) << 1)
                                                            >> 8) + 1) << 8)) +
                         ((int)(uVar8 & 0xffffff00 | (uint)(byte)((char)uVar8 + (char)(uVar8 >> 8)))
                         >> 0xd) + CONCAT22((short)((int)uVar14 >> 0x11),0x7360) +
                         ((uVar27 >> 1 | uVar36 << 0x1f) >> 1) + uVar25 + -0x2cc101b4);
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


