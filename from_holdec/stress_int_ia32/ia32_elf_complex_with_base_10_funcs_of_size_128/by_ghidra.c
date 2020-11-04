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



// WARNING: Removing unreachable block (ram,0x08049298)
// WARNING: Removing unreachable block (ram,0x080493a1)

int log_size_7_var_000(void)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  bool in_PF;
  
  uVar5 = (uint)(ushort)((ushort)!in_PF << 8 | 0x4a) ^ 0xf000;
  cVar4 = (char)(uVar5 >> 8);
  bVar2 = 0;
  uVar11 = ~((uint)(((ushort)uVar5 & 0x3fff) / 0xcd) << 0x1f | 0x1960fdc1);
  uVar5 = 0;
  if (!in_PF) {
    uVar5 = uVar11;
  }
  bVar7 = cVar4 + 0x3b;
  if (SCARRY1(cVar4,';') == (char)bVar7 < '\0') {
    bVar2 = (byte)uVar11;
  }
  uVar12 = (short)uVar5 * 0x4539;
  uVar9 = (ushort)((((uint)(byte)(-bVar7 - 1) << 8 | 0x8cb0000) >> 0xf) << 5) | 1;
  uVar3 = (uint)(ushort)((ushort)(uVar5 + 0xf6b9ab61) ^ 1 << (uVar12 & 0xf));
  uVar6 = ((uint)CONCAT11((char)(-bVar7 - 1) >> 1,0x8d) | 0x8cb0000) & ~(1 << (uVar3 & 0x1f));
  bVar8 = (byte)uVar9 & (byte)uVar6;
  uVar10 = (((uint)bVar7 | 0xc2400000) << ((bVar2 & 0xf) << 1) | 0xc0) << 0x11 |
           (uint)uVar9 & 0xffffff00 |
           (uint)(bVar8 | (byte)((uint)(ushort)((ushort)bVar8 * 0x28) >> 8) & 0xfe);
  iVar1 = 0x1f;
  if (uVar10 != 0) {
    while (uVar10 >> iVar1 == 0) {
      iVar1 = iVar1 + -1;
    }
  }
  return iVar1 + uVar10 + uVar6 + (uVar11 & 0xffff0000 | (uint)(ushort)((short)uVar11 >> 1)) +
         ((uVar5 + 0xf6b9ab61 & 0xffff0000 | uVar3) & 0xadfa054a) + ((uint)uVar12 | 0x8e290000) +
         -0xc6c5931;
}



// WARNING: Removing unreachable block (ram,0x08049450)

int log_size_7_var_001(void)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  sbyte sVar10;
  ushort uVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  ushort uVar15;
  uint uVar16;
  uint uVar17;
  ushort uVar18;
  bool in_PF;
  bool bVar19;
  
  uVar6 = ((uint)(ushort)((ushort)!in_PF << 8 | 0xfc) | 0x85d70000) + 0x7527d74b;
  uVar11 = (ushort)uVar6;
  uVar5 = uVar11 << 1 | uVar11 >> 0xf;
  _uVar5 = uVar6 & 0xffff0000 | (uint)uVar5;
  uVar7 = ((uint)(CONCAT14((short)uVar11 < 0,0x36a22905) >> 0x1b) | 0xa88a4140) ^ 0x515f;
  uVar6 = uVar7 << 1;
  if (-1 < (int)uVar7) {
    uVar6 = 0x861cc6b3;
  }
  uVar7 = _uVar5 + 0x7f7225fd;
  if (uVar7 != 0) {
    uVar6 = uVar6 & 0xffff0000 | 0xc16d;
  }
  if (uVar7 == 0 || (int)_uVar5 < -0x7f7225fd) {
    uVar7 = uVar7 & 0xffff0000 | 0xd;
  }
  bVar4 = (byte)uVar5 & 0x1f;
  uVar8 = (int)(short)uVar5;
  if (0xff3f < (ushort)((ushort)(0x6b7bc16d << bVar4) |
                       (ushort)((CONCAT14(_uVar5 < 0x808dda03,0xcc16d) & 0xff0000ffff | 0x6b7b0000)
                               >> 0x21 - bVar4))) {
    uVar8 = 0xc00c0;
  }
  uVar5 = (ushort)uVar7;
  uVar18 = uVar5 & 0xc6b3;
  uVar15 = (ushort)(uVar6 + 0x7065966e);
  uVar11 = (short)uVar8 + uVar15 + (ushort)(0x8f9a6991 < uVar6);
  uVar12 = uVar11 ^ (ushort)(uVar5 == uVar11) * (uVar11 ^ uVar18);
  uVar5 = uVar5 ^ (ushort)(uVar5 == uVar11) * (uVar5 & uVar12);
  bVar4 = (char)uVar5 + (char)((uint)uVar5 >> 8);
  bVar19 = (ushort)(uVar5 & 0xff00 | (ushort)bVar4) == uVar18;
  uVar18 = uVar18 ^ (ushort)bVar19 * (uVar18 ^ 0xd);
  uVar5 = uVar12 & 0xff | 1;
  _uVar5 = uVar8 & 0xffff0000 | (uint)uVar5;
  uVar8 = (uVar7 & 0xffff0000 | (uint)(ushort)(short)(char)(bVar4 ^ bVar19 * (bVar4 & (byte)uVar18))
          ) * -0x31e51d83;
  uVar16 = (uVar6 + 0x7065966e & 0xffff0000 |
           (uint)(ushort)((short)(uVar15 ^ 0x2000) >> ((byte)uVar12 & 0x1f))) <<
           ((byte)uVar5 & 0x1f);
  uVar6 = 0x1f;
  if (_uVar5 != 0) {
    while (_uVar5 >> uVar6 == 0) {
      uVar6 = uVar6 - 1;
    }
  }
  if (_uVar5 == 0) {
    _uVar5 = uVar16;
  }
  bVar4 = (byte)uVar8;
  sVar10 = (sbyte)(_uVar5 & 0xffffff03);
  uVar14 = uVar6 | 0xc0000000;
  uVar2 = (longlong)(int)(uVar8 & 0xffffff00 | (uint)(byte)(bVar4 >> 1 | bVar4 << 7)) &
          0x3fffffffffffffff;
  uVar3 = uVar2 / (ulonglong)uVar14;
  iVar9 = (int)uVar3;
  uVar13 = (uint)(uVar2 % (ulonglong)uVar14);
  uVar8 = 0;
  if (uVar13 != 0) {
    while ((uVar13 >> uVar8 & 1) == 0) {
      uVar8 = uVar8 + 1;
    }
  }
  if (!in_PF) {
    uVar14 = uVar6 & 0xffff0000 | 0xc0000000 | uVar16 & 0xffff;
  }
  uVar13 = iVar9 << 1;
  uVar6 = _uVar5 & 0xffff0000 |
          (uint)(ushort)((ushort)(_uVar5 & 0xffffff03) >> sVar10 | uVar18 << 0x10 - sVar10) &
          0xffffff00 | uVar8 & 0xff;
  iVar1 = uVar16 + uVar6;
  uVar17 = iVar1 + 1;
  uVar6 = (uint)CONCAT11((!CARRY4(uVar16,uVar6) && iVar1 != -1) && uVar17 != 0,(char)(uVar8 & 0xff))
  ;
  uVar8 = (_uVar5 & 0xffff0000 | uVar6) << 1;
  uVar16 = uVar14 & 0xffff0000 | (uint)CONCAT11(0x3559 < (ushort)uVar3,(char)uVar14 + '\x1f') |
           uVar17;
  bVar4 = ((byte)(uVar8 >> 0x18) & 0x1f) % 0x11;
  return (uVar13 & 0xffff0000 | (uint)(ushort)((ushort)(byte)uVar13 * (ushort)(byte)(uVar16 >> 8)))
         + uVar16 + (uVar8 >> 0x18 | ((_uVar5 & 0x7f0000) << 1) >> 8 | uVar6 << 0x19) +
         (uVar17 & 0xffff0000 |
         (uint)(ushort)((ushort)((uVar17 & 0xffff) << bVar4) |
                       (ushort)((uVar17 & 0xffff) >> 0x11 - bVar4))) +
         (uVar7 & 0x861c0000 | (uint)uVar18 | 0x20000000) + iVar9 +
         (uVar7 & 0x861c0000 | 0x20000000 | (uint)(ushort)(uVar18 + (short)uVar8) | uVar17) +
         0x41ee92d3;
}



int log_size_7_var_002(void)

{
  ulonglong uVar1;
  ushort uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  sbyte sVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  short sVar12;
  uint uVar13;
  ushort uVar14;
  uint uVar15;
  bool in_PF;
  
  uVar8 = 0xd082005a;
  if (in_PF) {
    uVar8 = 0xd0825fc7;
  }
  bVar4 = (byte)uVar8 & 0xf;
  bVar5 = bVar4 ^ (bVar4 == 0x1e) * (bVar4 ^ 0xfe);
  uVar13 = 1 << ((uint)(ushort)(0x6889 << bVar4 | 0x6889U >> 0x10 - bVar4) & 0x1f) ^ 0xc93b2007;
  uVar7 = (short)(CONCAT11((char)((uint)CONCAT11((char)(uVar8 >> 8) + '\x04',bVar5) >> 8) << 1,bVar5
                          ) | 0x100) >> (bVar5 & 0x1f);
  uVar1 = (ulonglong)
          (((uint)(ushort)((ushort)(byte)((bVar4 == 0x1e) * (bVar5 & 0x1e) ^ 0x1e) * 0xbe) |
           0x4f940000) + 0xea8009) * (ulonglong)(uVar8 & 0xffff0000 | (uint)uVar7);
  uVar10 = ~((uint)(uVar1 >> 0x20) | 0x10);
  bVar4 = ((byte)uVar7 & 0x1f) % 0x11;
  uVar14 = (ushort)(0x3415 >> bVar4) | (ushort)(0x3415 << 0x11 - bVar4);
  uVar11 = (uint)uVar14 | 0x97030000;
  bVar4 = ((byte)uVar7 & 0x1f) % 0x11;
  uVar3 = (uint)((uVar1 & 0x100) != 0) << 0x10 | 0x60c9;
  uVar3 = (uint)(ushort)((ushort)(uVar3 << bVar4) | (ushort)(uVar3 >> 0x11 - bVar4));
  uVar2 = (ushort)(byte)uVar1 * (ushort)(byte)(uVar1 >> 8);
  _uVar2 = CONCAT22((short)(uVar1 >> 0x10),uVar2);
  uVar14 = (uVar14 + 0xd39e) - (ushort)CARRY4(uVar10,uVar11);
  sVar12 = (short)uVar13;
  uVar11 = (uVar10 + uVar11) * 2 | (uint)(sVar12 < 0);
  uVar10 = (uint)(ushort)(uVar7 & 0xff | (ushort)(byte)~(byte)((uint)uVar7 >> 8) << 8) & 0xffffff0f;
  sVar6 = (sbyte)uVar10;
  if ((uVar11 >> (uVar3 & 0x1f) & 1) == 0) {
    uVar11 = uVar3 | 0x62b60000;
  }
  uVar3 = _uVar2 >> 2;
  uVar9 = uVar8 & 0xffff0000 | (uint)(ushort)((short)uVar10 << sVar6 | uVar14 >> 0x10 - sVar6) |
          1 << ((uint)(ushort)(sVar12 << 1 | uVar2 >> 0xf) & 0x1f);
  uVar15 = (uint)(ushort)((short)uVar9 + 0xa0d0) | 0x1980000;
  uVar10 = (uint)(byte)((char)uVar3 - 1);
  uVar3 = uVar3 & 0xffffff00 | _uVar2 << 0x1e | uVar10;
  uVar8 = uVar3 << 1;
  bVar4 = (byte)uVar9 & 0x1f;
  return (uVar8 & 0xffffff00 | (uint)(byte)(CONCAT11(1,(char)uVar8) >> 2)) + uVar9 +
         (uVar11 ^ 1 << (uVar10 & 0x1f)) +
         (uVar13 & 0xffff0000 | (uint)(ushort)((ushort)((int)uVar3 < 0) + 0x6374)) +
         (((uint)uVar14 | 0x97030000) << bVar4 | uVar15 >> 0x20 - bVar4) + uVar15 + -0x5b9c0384;
}



// WARNING: Removing unreachable block (ram,0x0804988b)
// WARNING: Removing unreachable block (ram,0x080498b5)

int log_size_7_var_003(void)

{
  short sVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  char cVar11;
  ushort uVar9;
  int iVar10;
  int iVar12;
  uint uVar13;
  uint uVar14;
  bool in_PF;
  
  iVar10 = 0;
  while ((0xc7d500ceU >> iVar10 & 1) == 0) {
    iVar10 = iVar10 + 1;
  }
  uVar8 = (uint)(CONCAT14(0x9c30797a <
                          (iVar10 + 0xacc684bU & 0xffff0000 |
                          (uint)(ushort)((short)(iVar10 + 0xacc684bU) >> 0xd)),0x7498531) >> 0xe);
  uVar2 = ((uint)(ushort)((ushort)!in_PF << 8 | 8) *
           ((CONCAT31(0xc7d500,in_PF) ^ 0x383c0000) & 0xffff) & 0xffff) << 1;
  uVar3 = (short)uVar2 - 1;
  iVar10 = (uVar2 & 0xffff | 0x7e3b0000) << 1;
  cVar11 = (char)((uint)iVar10 >> 8);
  uVar4 = (uVar2 & 0xffff0000 |
          (uint)(ushort)(uVar3 & 0xff | (ushort)(byte)((char)((uint)uVar3 >> 8) << 1) << 8)) >> 1;
  uVar9 = CONCAT11(cVar11 << 1 | cVar11 < '\0',(char)iVar10) | 0xf27;
  uVar13 = (uVar8 & 0xffff0000 | 0x29880000 | (uint)(ushort)(((ushort)uVar8 ^ 0x86d8) + 0x8b0c)) +
           uVar4 + 1;
  uVar3 = CONCAT11(!in_PF,in_PF >> 1 | in_PF << 7) + 0x75db;
  uVar8 = (uint)uVar3 & 0x1f;
  uVar14 = uVar13 ^ 1 << uVar8;
  bVar5 = (byte)uVar3;
  bVar6 = bVar5 << 1 | bVar5 >> 7;
  uVar7 = (uint)uVar3 & 0xffffff00 | 0xffe90000 | (uint)uVar9 & 0xff;
  uVar8 = (int)(short)((ushort)(byte)(((char)uVar4 + -0x69) - ((uVar13 >> uVar8 & 1) != 0)) << 0xe)
          * -0x545f;
  uVar4 = uVar8 & 0xffff | 0x70780000;
  sVar1 = (short)(uVar8 >> 0x10);
  if (sVar1 != 0 && sVar1 != -1) {
    uVar7 = uVar14 & 0xffff | 0xffe90000;
  }
  uVar13 = 0x51f40f27 << (bVar5 & 0x1f) | 1 << ((uint)bVar6 & 0x1f);
  uVar8 = uVar7 & 0xffff0000 | (uint)(ushort)((ushort)uVar7 >> ((byte)uVar7 & 0x1f));
  if (((uVar2 & 0x8000 | 0x7e3b0000) << 1 | (uint)(ushort)-(uVar9 & 0xff00 | (ushort)bVar6)) ==
      uVar14) {
    uVar8 = uVar14;
  }
  uVar2 = (uint)(ushort)(((ushort)(byte)('\0' << ((byte)uVar8 & 0x1f)) << 8) >> 1);
  iVar12 = CONCAT31(((uint3)(uVar13 >> 8) & 0xffff00 | (uint3)(byte)((ushort)-(short)uVar13 >> 8))
                    >> 4,1);
  uVar8 = uVar8 & 0xffff0000 | (uint)CONCAT11((-1 < (int)uVar2) << 1,(byte)uVar8 - 1);
  iVar10 = 0;
  if (uVar8 != 0) {
    while ((uVar8 >> iVar10 & 1) == 0) {
      iVar10 = iVar10 + 1;
    }
  }
  return (iVar12 << 0x16 | (uint)(CONCAT14(CARRY4(uVar4,uVar4),iVar12) >> 0xb)) + iVar10 +
         (uVar4 * 2 & 0xffff0000 | (uint)(ushort)((short)(uVar4 * 2) * -0x51f1)) + uVar2 +
         0x1ecf0efd;
}



int log_size_7_var_004(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x68b650a5;
  if (in_PF) {
    iVar1 = -0x961;
  }
  return -0x2b121 -
         (((CONCAT22((short)(iVar1 >> 0x1d),(ushort)(iVar1 >> 0xd) >> 6) | 0xff6f) ^ 0xdc80 |
          0x171e8701) << 1 | 1);
}



// WARNING: Removing unreachable block (ram,0x08049bf0)

undefined4 log_size_7_var_005(void)

{
  int iVar1;
  
  iVar1 = 0;
  while ((0xffee94baU >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return 0x43992b52;
}



// WARNING: Removing unreachable block (ram,0x08049cef)

int log_size_7_var_006(void)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar4 = 0;
  while ((0x65b98074U >> uVar4 & 1) == 0) {
    uVar4 = uVar4 + 1;
  }
  uVar1 = ((uint)(ushort)((ushort)(byte)uVar4 | 0x600) & 0x242b) * 0x100e8;
  uVar5 = (ushort)(uVar1 >> 0x10);
  uVar1 = uVar1 & 0xffff;
  uVar4 = uVar1 | (uVar4 & 0x7fff0000) << 1;
  uVar6 = uVar5 & 0xff | (ushort)(uVar5 == 0) << 8;
  uVar8 = (uint)(uVar4 == 0x65b98074) * (uVar4 ^ 0x65b98074) ^ 0x65b98074;
  bVar2 = (byte)uVar1;
  uVar3 = (short)(char)(bVar2 ^ (uVar4 == 0x65b98074) * (bVar2 & (byte)uVar8)) * 9;
  uVar5 = uVar6 + 0x40;
  if (uVar6 < 0xffc0 && uVar5 != 0) {
    uVar6 = (ushort)uVar8;
    uVar3 = uVar5;
  }
  uVar1 = ((uint)(uVar6 & 0x3fff) << 0x10 | 0x753f) / 0xc008;
  uVar7 = ((uint)uVar3 | 0x800c0000) >> 4;
  uVar4 = 0;
  if ((uVar1 | 0x1c3a0000) != 0) {
    while (((uVar1 | 0x1c3a0000) >> uVar4 & 1) == 0) {
      uVar4 = uVar4 + 1;
    }
  }
  uVar1 = (uint)(ushort)((short)(char)uVar1 * (short)(char)(uVar1 >> 8)) & 0xffff3fff | 0xc0;
  uVar5 = (ushort)(byte)uVar1;
  uVar3 = (ushort)uVar1;
  uVar6 = (ushort)uVar4;
  uVar9 = uVar8 + 1 & 0xffff0000 | (uint)(ushort)((short)(uVar8 + 1) << 1 | uVar6 >> 0xf);
  uVar1 = uVar7 & 0xffff;
  uVar8 = ((uint)(ushort)(uVar3 / uVar5 & 0xff | uVar3 % uVar5 << 8) | 0x1c3a0000) & uVar9;
  uVar5 = ((short)uVar7 * -0x7b4e - (short)uVar1) - (ushort)((uVar6 >> 10 & 1) != 0);
  uVar7 = (uint)uVar5 | 0x89890000;
  if ((uVar7 & 0x6883be94) == 0) {
    uVar8 = uVar8 & 0xffff0000 | 0x6014;
  }
  return (uVar8 & 0xffff0000 | (uint)(ushort)((short)uVar8 + uVar5)) +
         (uVar4 & 0xffff0000 | (uint)(uVar6 & 0xfbff)) + uVar7 + (uVar1 | 0x48000000) + uVar9 +
         -0x3b7f62ac;
}



// WARNING: Removing unreachable block (ram,0x08049e81)

int log_size_7_var_007(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  ushort uVar11;
  uint uVar12;
  bool bVar13;
  bool in_PF;
  
  iVar3 = 0x71721196;
  if (in_PF) {
    iVar3 = -0x571550e5;
  }
  uVar8 = 0x8cb - (ushort)iVar3;
  uVar12 = iVar3 + 0x786b9505 + (uint)(0x8cb < (ushort)iVar3);
  uVar12 = (uVar12 ^ (uVar12 >> 0xb & 1) << 0xb) + 1;
  uVar9 = uVar8 & 0xfe | (ushort)(byte)((char)(uVar8 >> 8) + 0x25) << 8;
  uVar8 = 0;
  if (in_PF) {
    uVar8 = uVar9;
  }
  uVar1 = (uint)((uVar8 >> 1 & 1) != 0) << 0x10;
  bVar13 = (int)uVar12 < 0;
  uVar11 = 0x3fe1U >> bVar13 | 0x3fe1 << 0x10 - bVar13;
  sVar5 = (short)(((uVar12 & 0x7fff0000) << 1 | (uint)uVar11) >> 0xc) >> bVar13;
  uVar11 = uVar11 + 1;
  uVar8 = sVar5 * sVar5;
  bVar4 = (byte)((uint)uVar8 >> 8);
  uVar10 = CONCAT22(0xf145,uVar9) + 1;
  uVar6 = ((uVar12 & 0x78000000) << 1) >> 0xc | 0xa0100000 |
          (uint)(ushort)(uVar8 & 0xff | (ushort)(byte)(bVar4 << 7 | bVar4 >> 1) << 8) | 0xa00413c6 |
          1 << (uVar10 & 0x1f);
  uVar12 = uVar10 + uVar6 & 0xffff0000;
  uVar2 = ((uint)uVar11 - (uint)CONCAT11((short)uVar11 < 0,bVar13)) * 0x4aa711b & 0xffff;
  bVar7 = (byte)uVar2;
  bVar4 = (char)~(byte)uVar6 >> (bVar7 & 0x1f);
  return (uVar6 & 0xffffff00 | (uint)(byte)(bVar4 >> (bVar7 & 7) | bVar4 << 8 - (bVar7 & 7))) +
         (uVar12 | CONCAT11((char)(uVar2 >> 8) << (bVar7 & 0x1f),bVar7)) + (uVar12 | uVar2) +
         ((uint)(ushort)((ushort)((uVar1 | 0x6b) << 4) | (ushort)(uVar1 >> 0xd)) | 0x786b0000) * 2 +
         uVar10 + ((uVar10 + uVar6) * 0x40000 | 0x10000 |
                  (uint)(ushort)(-0x1e54 << (bVar7 & 0xf) | 0xe1acU >> 0x10 - (bVar7 & 0xf))) *
                  0x8000 + -0x718466bd;
}



// WARNING: Removing unreachable block (ram,0x0804a178)
// WARNING: Removing unreachable block (ram,0x0804a080)
// WARNING: Removing unreachable block (ram,0x0804a08d)

int log_size_7_var_008(void)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint5 uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  byte in_PF;
  
  iVar2 = 0x1f;
  while (0x5aded2U >> iVar2 == 0) {
    iVar2 = iVar2 + -1;
  }
  uVar9 = iVar2 << 1;
  uVar4 = (uint)(ushort)((ushort)in_PF << 8 | 0x26);
  uVar1 = 0x649d4caf - (uVar9 | 1);
  uVar5 = (CONCAT14(0x649d4caf < (uVar9 | 1),uVar4) | 0xd0110000) >> 3;
  uVar4 = uVar4 << 0x1e | (uint)uVar5 & 0xffff0000;
  uVar8 = uVar9 & 0xff | 0xaac5f201;
  uVar6 = (ushort)uVar1;
  uVar7 = (ushort)uVar8;
  bVar10 = CARRY2(uVar6,uVar7);
  uVar6 = uVar6 + uVar7;
  if (!bVar10 && uVar6 != 0) {
    uVar8 = uVar9 & 0xffffff00;
  }
  uVar9 = ((uint)(ushort)((ushort)bVar10 + 0xcf2b) | 0xd0110000) -
          (uVar4 | (ushort)((ushort)uVar5 >> 2));
  bVar3 = (byte)(uVar6 >> 1) & 0x1f;
  return (CONCAT22((short)(uVar4 >> 0x10),0xb17a) & 0xffff7200 | 0x3d) +
         (((uint)CONCAT11(-1 << ((byte)uVar6 & 0x1f),0xfe) | 0xffff0000) << 7 |
         (uint)(byte)('\0' >> ((byte)uVar6 & 0x1f))) + (uVar1 & 0xffff0000 | (uint)(uVar6 >> 1)) +
         uVar8 + (uVar9 >> bVar3 | uVar9 << 0x21 - bVar3) + -0x3e713280;
}



// WARNING: Removing unreachable block (ram,0x0804a24b)
// WARNING: Removing unreachable block (ram,0x0804a2b8)

int log_size_7_var_009(void)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  short sVar14;
  ushort uVar15;
  ushort uVar16;
  
  uVar4 = 0x1f;
  while (0xffff8e00U >> uVar4 == 0) {
    uVar4 = uVar4 - 1;
  }
  uVar1 = 0x1f;
  if (uVar4 != 0) {
    while (uVar4 >> uVar1 == 0) {
      uVar1 = uVar1 - 1;
    }
  }
  sVar14 = (short)uVar1 * 2;
  uVar16 = sVar14 + 0x6e3fU & 0xff;
  uVar15 = sVar14 + 0x77da;
  bVar10 = -(char)uVar16;
  uVar11 = ((uint)(ushort)(uVar16 | (ushort)(byte)((byte)((uint)(ushort)(sVar14 + 0x6e3fU) >> 8) >>
                                                  1) << 8) & 0xffffff00 | 0xaf6d0000 | (uint)bVar10)
           ^ 0xf300;
  uVar13 = ((uint)(ushort)(0xa6d4 - (ushort)((short)uVar1 < 0)) | 0xa0000000) & 0xddc09ccc;
  uVar16 = uVar15 | (ushort)uVar11;
  bVar5 = 0xe - (char)((int)(uVar1 & 0xffff0000) >> 0x1f);
  bVar7 = bVar5 % 0x11;
  uVar4 = (((uint)uVar15 & 0xffffff00 | 0x80000000 | (uint)(byte)((char)uVar15 + 1)) ^ 0x1d) &
          0xffff;
  uVar4 = (uint)(ushort)((ushort)(uVar4 >> bVar7) | (ushort)(uVar4 << 0x11 - bVar7));
  uVar3 = uVar4 | 0x80000000;
  bVar5 = bVar5 & (byte)(uVar4 >> 8);
  uVar12 = uVar11 & 0xffffff00 | 0x4000 | (uint)(byte)(bVar10 + 0x65);
  uVar8 = CONCAT22((short)((uint)(ushort)(sVar14 + 0x6dc0) * -2 + 0x3b800000 >> 0x10),0xd1e9);
  bVar7 = (byte)((uint)CONCAT11(0x3b,bVar5) >> 8);
  uVar9 = uVar8 ^ (uint)(uVar3 == uVar8) * (uVar8 ^ uVar3);
  uVar4 = uVar3 ^ (uint)(uVar3 == uVar8) * (uVar3 & uVar9);
  if (-1 < (int)(uVar3 - uVar8)) {
    uVar12 = uVar11 & 0xffff0000 | uVar4 & 0xffff;
  }
  bVar2 = (byte)uVar4;
  bVar6 = bVar5 ^ (bVar2 == bVar5) * (bVar5 ^ (byte)(uVar12 >> 8));
  bVar10 = bVar2 ^ (bVar2 == bVar5) * (bVar2 & bVar6);
  uVar3 = (uint)CONCAT11((char)((uint)CONCAT11(bVar7 >> 2 | bVar7 << 6,bVar5) >> 8) << 1,bVar6);
  if ((uVar9 >> (uVar9 & 0x1f) & 1) == 0) {
    uVar13 = uVar3 | 0x80000000;
  }
  return (uVar4 & 0xffffff00 | (uint)bVar10) +
         (uVar12 & 0xffffff00 | (uint)(byte)((char)uVar12 + bVar10 + (bVar2 < bVar5))) +
         (uVar3 | 0x77010000) + uVar9 + uVar13 +
         (uVar1 & 0xffff0000 | (uint)(ushort)((uVar16 << 1 | (ushort)((short)uVar16 < 0)) + 0x7df7))
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


