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



// WARNING: Removing unreachable block (ram,0x080497cf)
// WARNING: Removing unreachable block (ram,0x08049259)
// WARNING: Removing unreachable block (ram,0x080497f9)
// WARNING: Removing unreachable block (ram,0x08049a23)
// WARNING: Removing unreachable block (ram,0x080493a1)

int log_size_10_var_000(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined3 uVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  char cVar10;
  uint uVar8;
  uint uVar9;
  sbyte sVar11;
  byte bVar12;
  char cVar14;
  int iVar13;
  uint3 uVar15;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  undefined uVar21;
  ushort uVar22;
  short sVar23;
  char cVar25;
  int iVar24;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ushort uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  ushort uVar33;
  ushort uVar34;
  ushort uVar35;
  uint uVar36;
  int iVar37;
  bool in_PF;
  bool bVar38;
  
  uVar8 = (uint)(ushort)((ushort)!in_PF << 8 | 0x53) ^ 0xf000;
  cVar14 = (char)(uVar8 >> 8);
  bVar20 = 0;
  uVar26 = ~((uint)(((ushort)uVar8 & 0x3fff) / 0xca) << 0x1f | 0x78a2fe29);
  uVar8 = 0;
  if (!in_PF) {
    uVar8 = uVar26;
  }
  bVar18 = cVar14 + 0x3b;
  if (SCARRY1(cVar14,';') == (char)bVar18 < '\0') {
    bVar20 = (byte)uVar26;
  }
  uVar33 = (short)uVar8 * 0x4539;
  uVar31 = (uint)uVar33 | 0x8e290000;
  uVar22 = (ushort)((((uint)(byte)(-bVar18 - 1) << 8 | 0x8cb0000) >> 0xf) << 5) | 1;
  uVar30 = (uint)(ushort)((ushort)(uVar8 + 0xf6b9ab61) ^ 1 << (uVar33 & 0xf));
  uVar27 = (uVar26 & 0xffff0000 | (uint)(ushort)((short)uVar26 >> 1)) + 0x67b6664;
  uVar16 = ((uint)CONCAT11((char)(-bVar18 - 1) >> 1,0x8d) | 0x8cb0000) & ~(1 << (uVar30 & 0x1f));
  bVar19 = (byte)uVar22 & (byte)uVar16;
  uVar36 = (((uint)bVar18 | 0xc2420000) << ((bVar20 & 0xf) << 1) | 0xc0) << 0x11 |
           (uint)uVar22 & 0xffffff00;
  bVar20 = bVar19 | (byte)((uint)(ushort)((ushort)bVar19 * 0x28) >> 8) & 0xfe;
  uVar9 = uVar36 | bVar20;
  uVar26 = 0x1f;
  if (uVar9 != 0) {
    while (uVar9 >> uVar26 == 0) {
      uVar26 = uVar26 - 1;
    }
  }
  uVar30 = (uVar8 + 0xf6b9ab61 & 0xffff0000 | uVar30) & 0xadfa054a;
  uVar8 = uVar16 & 0xff | ((uVar16 << 1) >> 9) << 8 | 0xc0;
  uVar33 = (ushort)uVar26 & 0x3fff;
  uVar22 = (ushort)(byte)uVar8;
  uVar16 = uVar30 ^ (uint)(uVar31 == uVar30) * (uVar30 ^ uVar8);
  lVar3 = (longlong)(int)(uVar31 ^ (uint)(uVar31 == uVar30) * (uVar31 & uVar16)) *
          (longlong)(int)uVar9;
  uVar8 = (int)lVar3 << 1;
  uVar31 = uVar16 << 1 | (uint)((bVar19 & 1) != 0);
  uVar5 = ((short)uVar8 + -0x2501) - (ushort)((int)uVar16 < 0);
  uVar8 = uVar8 & 0xffff0000;
  uVar30 = (uVar36 | bVar20 >> 1) + 0xeae44266;
  uVar6 = uVar5 & ~(1 << (uVar5 & 0xf));
  uVar36 = ~((uVar26 & 0xffff0000 | (uint)(ushort)(uVar33 / uVar22 & 0xff | uVar33 % uVar22 << 8))
             >> 1 | (uint)((uVar27 & 1) != 0) << 0x1f);
  iVar13 = (-0x33fffe54 - uVar31) - (uint)(lVar3 < 0);
  uVar26 = ~(uVar30 & 0xffffff00 | (uint)(byte)((byte)uVar30 ^ (byte)uVar5));
  if (iVar13 == 0 ||
      (SBORROW4(-0x33fffe54,uVar31) != SBORROW4(-0x33fffe54 - uVar31,(uint)(lVar3 < 0))) !=
      iVar13 < 0) {
    uVar26 = uVar8 | uVar6;
  }
  sVar7 = (short)(uVar27 >> 1) << 1;
  if (iVar13 != 0) {
    sVar7 = (short)uVar26;
  }
  iVar24 = CONCAT22((ushort)(uVar27 >> 0x11),sVar7);
  uVar5 = CONCAT11((char)((ulonglong)lVar3 >> 0x28) - 1U >> 2,(char)((ulonglong)lVar3 >> 0x20)) << 1
          | 0x258f;
  cVar10 = (char)((uint)iVar13 >> 8);
  bVar18 = (byte)uVar36;
  bVar20 = (byte)iVar13;
  cVar14 = cVar10 - bVar18;
  uVar34 = (ushort)((uVar26 & 0xffff) >> 3) & 0xff |
           (ushort)(cVar14 == '\0' || cVar10 < (char)bVar18) << 8;
  uVar8 = (uVar8 | (ushort)(uVar6 & 0xff | (ushort)!in_PF << 8)) + 0x7527d74a +
          (uint)(uVar34 < 0x2e0b);
  uVar33 = (ushort)uVar8;
  uVar22 = uVar33 << 1 | uVar33 >> 0xf;
  uVar30 = uVar8 & 0xffff0000 | (uint)uVar22;
  uVar16 = (iVar24 << (bVar20 & 0x1f) |
           (uint)(CONCAT14((short)uVar33 < 0,iVar24) >> 0x21 - (bVar20 & 0x1f))) ^ 0x515f;
  uVar8 = uVar16 << 1;
  if ((int)uVar16 < 0 == (int)uVar8 < 0) {
    uVar8 = uVar31;
  }
  uVar16 = (uVar26 & 0xffff0000 | (uint)(ushort)(uVar34 + 0xd1f5)) >> 0xc & 0xffff;
  uVar9 = uVar36 & 0xffff0000 | uVar16;
  uVar33 = (short)((uVar5 & 0xff00 | (ushort)(byte)((byte)uVar5 >> 1 | 0x80)) * 2) >>
           (bVar20 + (char)((uint)CONCAT11(cVar14,bVar20) >> 8) & 0x1f);
  uVar36 = uVar30 + 0x7f7225fd;
  if (uVar36 != 0) {
    uVar8 = uVar8 & 0xffff0000 | uVar16;
  }
  if (uVar36 == 0 || (int)uVar30 < -0x7f7225fd) {
    uVar36 = uVar36 & 0xffff0000 | (uint)uVar33;
  }
  bVar20 = (byte)uVar22 & 0x1f;
  uVar5 = (ushort)(uVar9 << bVar20) | (ushort)(CONCAT14(uVar30 < 0x808dda03,uVar9) >> 0x21 - bVar20)
  ;
  uVar30 = ((uint)(bVar18 >> 1) & 0x3fffc03) << 6;
  uVar6 = (ushort)uVar30;
  uVar16 = (int)(short)uVar22;
  if (CARRY2(uVar5,uVar6) || (ushort)(uVar5 + uVar6) == 0) {
    uVar16 = (uVar26 & 0xf0000000) >> 0xc | uVar30;
  }
  uVar31 = uVar31 & uVar36;
  uVar34 = (ushort)(uVar8 + 0x7065966e);
  uVar5 = (short)uVar16 + uVar34 + (ushort)(0x8f9a6991 < uVar8);
  uVar22 = (ushort)uVar36;
  uVar29 = (ushort)uVar31;
  uVar6 = uVar5 ^ (ushort)(uVar22 == uVar5) * (uVar5 ^ uVar29);
  uVar22 = uVar22 ^ (ushort)(uVar22 == uVar5) * (uVar22 & uVar6);
  bVar20 = (char)uVar22 + (char)((uint)uVar22 >> 8);
  bVar38 = (ushort)(uVar22 & 0xff00 | (ushort)bVar20) == uVar29;
  uVar29 = uVar29 ^ (ushort)bVar38 * (uVar29 ^ uVar33);
  uVar22 = uVar6 & 0xff | 1;
  uVar26 = uVar16 & 0xffff0000 | (uint)uVar22;
  uVar30 = (uVar36 & 0xffff0000 |
           (uint)(ushort)(short)(char)(bVar20 ^ bVar38 * (bVar20 & (byte)uVar29))) * -0x31e51d83;
  uVar36 = (uVar8 + 0x7065966e & 0xffff0000 |
           (uint)(ushort)((short)(uVar34 ^ 1 << (uVar33 & 0xf)) >> ((byte)uVar6 & 0x1f))) <<
           ((byte)uVar22 & 0x1f);
  uVar8 = 0x1f;
  if (uVar26 != 0) {
    while (uVar26 >> uVar8 == 0) {
      uVar8 = uVar8 - 1;
    }
  }
  uVar16 = uVar31 & 0xffff0000 | (uint)uVar29 | 0x20000000;
  if ((uVar31 >> 0x1d & 1) != 0 || uVar26 == 0) {
    uVar26 = uVar36;
  }
  bVar20 = (byte)uVar30;
  sVar11 = (sbyte)(uVar26 & 0xffffff03);
  uVar22 = (ushort)(uVar26 & 0xffffff03) >> sVar11 | uVar29 << 0x10 - sVar11;
  uVar1 = (longlong)(int)(uVar30 & 0xffffff00 | (uint)(byte)(bVar20 >> 1 | bVar20 << 7)) &
          0x3fffffffffffffff;
  uVar2 = uVar1 / (ulonglong)(uVar8 | 0xc0000000);
  uVar30 = (uint)(uVar1 % (ulonglong)(uVar8 | 0xc0000000));
  uVar8 = 0;
  if (uVar30 != 0) {
    while ((uVar30 >> uVar8 & 1) == 0) {
      uVar8 = uVar8 + 1;
    }
  }
  uVar31 = uVar8 & 0xff;
  uVar28 = uVar36 + (uVar26 & 0xffff0000 | (uint)uVar22 & 0xffffff00 | uVar31) + 1;
  uVar17 = -((uVar8 & 0xffffff00 | (uint)(byte)((char)uVar22 << 1 | (uVar2 & 0x100) != 0)) &
            0x5a28e0bd);
  uVar9 = uVar17 & 0xffff0000;
  uVar27 = (uVar26 & 0xffff0000 | uVar31) << 1;
  uVar8 = (uVar16 + (int)uVar2) - (uVar9 | (ushort)((short)uVar17 + uVar29 + 1));
  uVar30 = uVar27 >> 0x18;
  uVar36 = (uVar26 & 0x7f0000) << 1;
  uVar26 = uVar30 | uVar36 >> 8;
  bVar12 = (byte)(uVar27 >> 0x18);
  bVar20 = (bVar12 & 0x1f) % 0x11;
  bVar19 = (bVar12 & 0x48) + 0x25;
  uVar26 = (uVar26 | uVar31 << 0x19) + uVar26;
  uVar27 = (((uVar28 & 0xffff0000 |
             (uint)(ushort)((ushort)((uVar28 & 0xffff) << bVar20) |
                           (ushort)((uVar28 & 0xffff) >> 0x11 - bVar20))) - 1) * 0x100 <<
            (bVar12 & 0x1f) | (uVar9 | uVar30) >> 0x20 - (bVar12 & 0x1f)) << 0x16;
  uVar30 = (uVar27 | 0x7793) >> 1;
  bVar18 = (byte)uVar26;
  uVar8 = (uVar8 & 0xffff0000 | (uint)(ushort)((short)uVar8 >> (bVar12 & 0x1f))) >> 1;
  uVar28 = CONCAT22((ushort)(uVar16 >> 0x10) | (ushort)(uVar28 >> 0x10),
                    (short)uVar8 + 0x788 + (short)(uVar9 >> 1)) & 0xaec3d084;
  bVar20 = (bVar18 & 0x1f) % 9;
  uVar36 = (uint)CONCAT11((byte)((uint)CONCAT11((char)((byte)(uVar36 >> 0x10) & 0x2f) >> 1,bVar19)
                                >> 8) >> 1,bVar19) & 0xffffff00 |
           (uint)(byte)(bVar19 >> bVar20 | bVar19 << 9 - bVar20);
  uVar26 = -(uVar26 & 0xffff0000 | (uint)CONCAT11(-1 < (int)uVar28,bVar18));
  uVar16 = ((uVar8 | 0x80000000) - uVar30) - 1;
  uVar1 = CONCAT44(uVar9 >> 1 & 0xffff | (uVar17 >> 0x11) << 0x10,uVar36) & 0x3fffffffffffffff |
          0xc0000000;
  uVar1 = ((ulonglong)((uint)(uVar1 % (ulonglong)(uVar36 | 0xc0000000)) & 0x3fffffff) << 0x20 |
          uVar1 / (ulonglong)(uVar36 | 0xc0000000) & 0xffffffff) / (ulonglong)(uVar26 | 0xc0000000);
  uVar31 = uVar36 * 0x30f78b46 | 0x9576;
  bVar20 = (byte)uVar26;
  uVar33 = (ushort)(uVar27 >> 0x19);
  uVar5 = (ushort)((uVar27 & 0x1fe0000) >> 9);
  uVar30 = uVar30 << 0x18;
  bVar18 = (byte)uVar31;
  uVar26 = (uVar26 & 0xffff0000 | 0xc0000000 |
            (uint)CONCAT11((char)(uVar26 >> 8) << (bVar20 & 0x1f),bVar20) & 0xffffff00 |
           (uint)(byte)((char)(uVar1 >> 8) + bVar20 * '\x02')) ^ uVar26 & 0x40000;
  uVar8 = CONCAT22((short)(uVar1 >> 0x10),(ushort)(byte)uVar1 * (ushort)(byte)uVar1) ^ 0x7dffe825;
  uVar22 = ((ushort)uVar28 >> 1) + 0x2889;
  if ((uVar2 & 0x400) != 0) {
    uVar26 = uVar26 & 0xffff0000 | uVar16 & 0xffff;
  }
  uVar31 = (uint)CONCAT11(((char)(uVar31 >> 8) >> (bVar20 & 0x1f)) + -0x41,bVar18);
  bVar20 = (byte)(uVar8 >> 1);
  bVar19 = (byte)uVar26 & 0xf;
  bVar18 = bVar19 ^ (bVar20 == bVar19) * (bVar19 ^ bVar18);
  uVar36 = uVar36 * 0x30f78b46 & 0xffff0000 | uVar31 |
           uVar30 | (uint)(uVar33 | uVar5) & 0xffffffbf | 0x3b0000;
  uVar6 = ((short)uVar36 + 0x6727) - (ushort)((uVar33 & 1) != 0);
  uVar27 = (uVar30 | (ushort)((short)(uVar33 & 0xffbf | uVar5) >> 1) | 0x3b0000) ^
           1 << ((uint)(ushort)(uVar22 << bVar19 | uVar22 >> 0x10 - bVar19) & 0x1f);
  uVar33 = uVar6 + 0x476d;
  uVar30 = (uVar16 >> 1) * -0x2780a259;
  uVar22 = uVar33 * 0x20;
  uVar33 = uVar33 >> 0xb;
  uVar5 = (short)(CONCAT11((char)((uint)CONCAT11((char)(uVar26 >> 8) + '\x04' + (0xb892 < uVar6),
                                                 bVar18) >> 8) << 1,bVar18) | 0x100) >>
          (bVar18 & 0x1f);
  uVar16 = uVar36 & 0xffff0000 |
           (uint)(ushort)(uVar22 & 0xff | uVar33 |
                         (ushort)(byte)((char)((uint)(uVar22 | uVar33) >> 8) << 1) << 8);
  uVar1 = (ulonglong)
          ((uVar8 & 0xffff0000 |
           (uint)(ushort)((ushort)(byte)(bVar20 ^ (bVar20 == bVar19) * (bVar20 & bVar18)) *
                         (ushort)(byte)(uVar31 >> 8))) + 0xea8009) *
          (ulonglong)(uVar26 & 0xffff0000 | (uint)uVar5);
  uVar31 = ~((uint)(uVar1 >> 0x20) | 0x10);
  uVar36 = uVar16 + 0x9976fc74;
  bVar20 = ((byte)uVar5 & 0x1f) % 0x11;
  uVar8 = (uint)(uVar16 < 0x6689038c) << 0x10 | uVar30 & 0xffff;
  uVar33 = (ushort)(uVar8 >> bVar20) | (ushort)(uVar8 << 0x11 - bVar20);
  uVar30 = uVar30 & 0xffff0000;
  uVar16 = uVar30 | uVar33;
  bVar38 = (uVar1 & 0x400) != 0;
  bVar20 = ((byte)uVar5 & 0x1f) % 0x11;
  uVar8 = (uint)((uVar1 & 0x100) != 0) << 0x10 | uVar36 & 0xffff;
  uVar36 = uVar36 & 0xffff0000;
  uVar8 = (uint)(ushort)((ushort)(uVar8 << bVar20) | (ushort)(uVar8 >> 0x11 - bVar20));
  uVar22 = (ushort)(byte)uVar1 * (ushort)(byte)(uVar1 >> 8);
  uVar9 = CONCAT22((short)(uVar1 >> 0x10),uVar22);
  uVar33 = (uVar33 + 0xd39e) - (ushort)CARRY4(uVar31,uVar16);
  uVar16 = (uVar31 + uVar16) * 2 | (uint)((short)uVar27 < 0);
  uVar31 = (uint)(ushort)(uVar5 & 0xff | (ushort)(byte)~(byte)((uint)uVar5 >> 8) << 8) & 0xffffff0f;
  sVar11 = (sbyte)uVar31;
  if ((uVar16 >> (uVar8 & 0x1f) & 1) == 0) {
    uVar16 = uVar36 | uVar8;
  }
  uVar8 = uVar9 >> 2;
  uVar17 = uVar26 & 0xffff0000 | (uint)(ushort)((short)uVar31 << sVar11 | uVar33 >> 0x10 - sVar11) |
           1 << ((uint)(ushort)((short)uVar27 << 1 | uVar22 >> 0xf) & 0x1f);
  uVar26 = uVar8 & 0xffffff00 | uVar9 << 0x1e;
  uVar8 = (uint)(byte)((char)uVar8 - 1);
  uVar31 = uVar26 | uVar8;
  uVar16 = uVar16 ^ 1 << (uVar8 & 0x1f);
  iVar13 = uVar31 << 1;
  uVar6 = (ushort)((int)uVar31 < 0) + 0x6374;
  uVar22 = CONCAT11((ushort)(uVar36 >> 0x1c) != 0,(char)iVar13) >> 2;
  bVar20 = (byte)uVar22;
  bVar18 = (byte)uVar17;
  uVar36 = (uVar30 | uVar33) << (bVar18 & 0x1f) |
           ((uint)(ushort)((short)uVar17 + 0xa0d0) | 0x1980000) >> 0x20 - (bVar18 & 0x1f);
  uVar30 = uVar36 & 0xffff0000;
  bVar19 = (byte)uVar16;
  uVar8 = ((uVar26 & 0x7fff8000) << 1 |
          (uint)(ushort)(uVar22 | (ushort)(byte)~(byte)((uint)iVar13 >> 8) << 8)) + 0x4a81d55c +
          (uVar27 & 0xffff0000 | (uint)uVar6) * 2;
  uVar22 = CONCAT11((char)(uVar17 >> 8) + bVar19,bVar18) + (short)uVar8 + 1;
  uVar34 = ((short)uVar17 << 0xd | (ushort)uVar16 >> 3) & uVar22;
  uVar22 = uVar22 & 0xff;
  uVar33 = uVar22 | (ushort)((short)uVar34 < 0) << 8;
  uVar26 = uVar17 & 0xffff0000 | (uint)uVar33;
  cVar14 = (char)uVar22;
  uVar5 = CONCAT11((char)(uVar16 >> 8) + '\x01' >> 3,bVar19);
  uVar22 = CONCAT11((byte)(uVar8 >> 8) & bVar19,(char)uVar8 + cVar14);
  if ((short)uVar5 <= (short)uVar6) {
    uVar22 = uVar34;
  }
  uVar31 = uVar27 & 0xffff0000 | (uint)(uVar6 & uVar33);
  uVar36 = uVar30 | (ushort)((short)uVar36 << (bVar18 & 0x1f)) >> 1;
  iVar13 = 0;
  if (uVar26 != 0) {
    while ((uVar26 >> iVar13 & 1) == 0) {
      iVar13 = iVar13 + 1;
    }
  }
  uVar5 = (ushort)(byte)(bVar20 >> 1 | bVar20 << 7) *
          ((short)((uVar16 & 0xffff0000 | (uint)uVar5) >> 1) + 0x971eU & 0xff);
  uVar33 = uVar5 & 0xff;
  bVar18 = cVar14 - 1;
  bVar20 = (char)((uint)uVar22 >> 8) + (char)uVar33;
  if (-1 < (char)bVar20) {
    uVar36 = uVar30 | 0x8531;
  }
  uVar30 = (uint)(CONCAT14(0x9c30797a <
                           (iVar13 + 0xacc684bU & 0xffff0000 |
                           (uint)(ushort)((short)(iVar13 + 0xacc684bU) >> (bVar18 & 0x1f))),uVar36)
                 >> 0xe);
  uVar28 = (uVar8 & 0xffff0000 | (uint)(ushort)(uVar22 & 0xff | (ushort)(bVar20 | bVar18) << 8)) * 2
           + 0xac41221b;
  uVar15 = ((uint3)((uVar17 & 0xffff0000) >> 8) | (uint3)((short)uVar34 < 0)) ^ (uint3)(uVar31 >> 8)
  ;
  uVar8 = (uint)(ushort)(uVar33 | (ushort)!bVar38 << 8) * (CONCAT31(uVar15,bVar38) & 0xffff);
  uVar9 = uVar8 & 0xffff | (uint)(ushort)((short)uVar5 >> 0xf) << 0x10;
  uVar26 = uVar9 << 1;
  uVar33 = (ushort)uVar26;
  uVar22 = (ushort)(uVar8 >> 0x10);
  if (-1 < (int)uVar9) {
    uVar22 = uVar33;
  }
  uVar16 = CONCAT22((ushort)((uVar16 & 0xffff0000) >> 0x11),0x8531) & 0xffff0000;
  uVar33 = uVar33 - 1;
  uVar26 = uVar26 & 0xffff0000;
  uVar6 = CONCAT11((byte)(uVar28 >> 8) >> 4,(char)uVar28);
  iVar13 = (uVar16 | (uint)uVar22) << 1;
  cVar14 = (char)((uint)iVar13 >> 8);
  uVar9 = (uVar26 | (ushort)(uVar33 & 0xff | (ushort)(byte)((char)((uint)uVar33 >> 8) << 1) << 8))
          >> 1;
  uVar5 = CONCAT11(cVar14 << 1 | cVar14 < '\0',(char)iVar13) | uVar6;
  uVar31 = (uVar30 & 0xffff0000 | uVar36 << 0x13 |
           (uint)(ushort)((((ushort)uVar30 ^ 0x86d8) + 0x8b0c) - (ushort)((int)uVar31 < 0))) + uVar9
           + 1;
  uVar33 = CONCAT11(!bVar38,bVar38 << 7) + 0x75db;
  uVar30 = (uint)(ushort)(uVar15 >> 8) << 0x10;
  uVar8 = (uint)uVar33 & 0x1f;
  uVar17 = uVar31 ^ 1 << uVar8;
  bVar20 = (byte)uVar33;
  bVar18 = bVar20 << 1 | bVar20 >> 7;
  uVar36 = uVar30 | (uint)uVar33 & 0xffffff00 | (uint)uVar5 & 0xff;
  uVar33 = (ushort)(uVar26 >> 0x10);
  uVar8 = (int)(short)((ushort)(byte)(((char)uVar9 + -0x69) - ((uVar31 >> uVar8 & 1) != 0)) << 0xe)
          * -0x545f;
  uVar26 = uVar8 & 0xffff | (uVar27 & 0x7fff0000) << 1;
  sVar7 = (short)(uVar8 >> 0x10);
  if (sVar7 != 0 && sVar7 != -1) {
    uVar36 = uVar30 | uVar17 & 0xffff;
  }
  uVar30 = (uVar28 & 0xffff0000 | (uint)uVar6) << (bVar20 & 0x1f) | 1 << ((uint)bVar18 & 0x1f);
  uVar8 = uVar36 & 0xffff0000 | (uint)(ushort)((ushort)uVar36 >> ((byte)uVar36 & 0x1f));
  if (((uVar16 | (uint)uVar22 & 0x7fff8000) << 1 | (uint)(ushort)-(uVar5 & 0xff00 | (ushort)bVar18))
      == uVar17) {
    uVar8 = uVar17;
  }
  uVar5 = uVar33 >> 2;
  iVar24 = CONCAT31(((uint3)(uVar30 >> 8) & 0xffff00 | (uint3)(byte)((ushort)-(short)uVar30 >> 8))
                    >> 4,1);
  uVar8 = uVar8 & 0xffff0000 |
          (uint)CONCAT11((-1 < (int)(((uint)CONCAT21(uVar33 >> 1,'\0' << ((byte)uVar8 & 0x1f)) << 8)
                                    >> 1)) << 1,(byte)uVar8 - 1);
  iVar13 = 0;
  uVar22 = 0;
  if (uVar8 != 0) {
    while (uVar22 = (ushort)iVar13, (uVar8 >> iVar13 & 1) == 0) {
      iVar13 = iVar13 + 1;
    }
  }
  uVar30 = (uVar26 & 0x74f38578) + 0x39c48794;
  uVar8 = (uint)(CONCAT14(CARRY4(uVar26,uVar26),iVar24) >> 0xb);
  uVar36 = uVar30 & 0xffff0000 | (uint)(ushort)(short)(char)uVar30;
  uVar16 = (0xd0d92a49 - uVar30 & 0xffffa53a) + 0x586c6ed8;
  bVar20 = (byte)(uVar22 >> 8);
  bVar20 = bVar20 >> 2 | bVar20 << 6;
  uVar33 = (short)(char)uVar30 | 0x2a4a;
  iVar37 = CONCAT22(0xd0d9,uVar33 & 0xff | uVar22 << 8);
  uVar21 = (undefined)uVar8;
  uVar8 = iVar24 << 0x16 | uVar8 & 0xffff0000;
  uVar26 = (uint)CONCAT11(0xc1,uVar21);
  uVar31 = uVar8 | uVar26;
  iVar13 = iVar37 + uVar31;
  uVar30 = iVar13 + 1;
  if (SCARRY4(iVar37,uVar31) != SCARRY4(iVar13,1)) {
    uVar30 = CONCAT22(uVar5,uVar22 & 0xff | (ushort)bVar20 << 8);
  }
  uVar31 = (uint)CONCAT11(bVar20,(char)(uVar33 >> 8)) & 0xffffffbf;
  bVar18 = (byte)uVar30 >> 1;
  cVar14 = (char)(uVar30 >> 8);
  uVar8 = uVar8 | CONCAT11((char)(uVar26 >> 8) << 1 | (uVar30 & 1) != 0,uVar21);
  uVar28 = uVar16 ^ (uint)(uVar36 == uVar16) * (uVar16 ^ uVar8);
  uVar36 = uVar36 ^ (uint)(uVar36 == uVar16) * (uVar36 & uVar28);
  bVar19 = (byte)(uVar31 >> 8);
  bVar20 = (bVar18 & 0x1f) % 9;
  uVar22 = (ushort)bVar18 | 0x80;
  uVar33 = uVar22 | (ushort)(byte)(((cVar14 << bVar20 |
                                    (byte)(CONCAT11(bVar19 < 0xc1,cVar14) >> 9 - bVar20)) - 9) -
                                  (CONCAT11(bVar19 + 0x3f >> 1,(char)uVar31) < 0xdd04)) << 8;
  uVar8 = uVar8 - 1;
  uVar31 = uVar36 & 0xffff0000 | (uint)CONCAT11((char)(uVar36 >> 8) << 1,(char)uVar36);
  uVar36 = (uint)(ushort)((short)uVar28 + uVar33);
  uVar26 = uVar8 >> 1;
  lVar3 = (longlong)(int)uVar31 * (longlong)(int)uVar31;
  sVar7 = (short)lVar3 << ((byte)uVar22 & 0x1f);
  uVar31 = CONCAT22((short)((ulonglong)lVar3 >> 0x10),sVar7) & 0xffffff00;
  uVar9 = uVar31 | (byte)((char)sVar7 << 1) | 1;
  uVar16 = CONCAT22(uVar5,-(ushort)((uVar33 >> (((ushort)uVar26 & 0xf00) >> 8) & 1) != 0) >> 1);
  uVar27 = (uVar26 & 0xff00 | (uint)(ushort)((ushort)(uVar8 >> 0x11) | 0x8000) << 0x10 | 0x4000 |
           (uint)(byte)((char)uVar26 * '\x02')) >> 1;
  uVar17 = uVar16 ^ (uint)(uVar9 == uVar16) * (uVar16 ^ uVar9);
  uVar26 = (((uint)(ushort)((ulonglong)lVar3 >> 0x30) << 0x10) << ((byte)uVar22 & 0x1f)) +
           0x4d0d06f4 + (uint)(uVar9 < uVar16);
  uVar26 = uVar26 & ~(1 << (uVar26 & 0x1f));
  uVar36 = (uVar28 & 0xff800000) >> 7 | uVar36 << 0x19 |
           (uint)(ushort)((short)((uVar28 & 0xffff0000 | uVar36) >> 7) >> 1);
  uVar8 = uVar30 & 0xffff0000 |
          (uint)(ushort)(uVar22 | (ushort)(byte)((char)((uint)uVar33 >> 8) - (char)(uVar26 >> 8)) <<
                                  8);
  if ((int)uVar26 < 0x3864ea67) {
    uVar8 = uVar36;
  }
  bVar18 = (byte)uVar8;
  uVar22 = (ushort)uVar26 & 0xff11;
  bVar38 = 0x3864ea66 >= (int)uVar26;
  uVar30 = uVar27 + 0x1268efb0;
  uVar26 = CONCAT31((uint3)(uVar31 >> 8) ^ (uint3)((uint)(uVar9 == uVar16) * (uVar9 & uVar17) >> 8),
                    0x3864ea66 < (int)uVar26) + 1U >> 1;
  bVar19 = (byte)((uint)(ushort)(((ushort)uVar8 & 0xff00 | (ushort)(byte)(bVar18 << 5 | bVar18 >> 3)
                                 ) + 0x4a68) >> 8);
  bVar20 = bVar19 + 0x87;
  uVar4 = CONCAT21((short)(uVar8 >> 0x10),bVar20 - bVar38);
  iVar37 = (((uVar36 << (bVar18 & 0x1f) | uVar27 >> 0x20 - (bVar18 & 0x1f)) >> 1 | uVar17 << 0x1f) +
           0xaba5dd44) - (uint)(bVar19 < 0x79 || bVar20 < bVar38);
  uVar36 = (uVar30 & 0xffffff00 | (uint)(byte)((char)uVar30 >> 0xb)) + 0xefa54073;
  bVar38 = (uVar26 & 0x100) == 0;
  iVar13 = CONCAT31(uVar4,(bVar38 - (char)uVar36) + -1);
  uVar8 = ((uVar26 & 0xffff) - iVar13) - 1;
  uVar5 = (ushort)iVar37;
  uVar33 = (ushort)iVar13 | uVar5;
  bVar18 = (byte)uVar33;
  uVar31 = -(uVar8 & 0xffff0000 | (uint)(ushort)-(short)uVar8);
  uVar16 = -((uVar17 & 0xffff0000 | (uint)(ushort)(uVar22 << 1 | (ushort)((short)uVar22 < 0)) |
             CONCAT31(uVar4,bVar38)) << 1 | 1);
  bVar20 = bVar18 & 0xf;
  uVar22 = (ushort)((int)(uVar26 | 0x80000000) >> (bVar18 & 0x1f));
  iVar24 = (int)(uVar36 | 0xa5) >> 4;
  iVar13 = (int)(short)(uVar22 << bVar20 | uVar22 >> 0x10 - bVar20) * (int)(short)uVar5;
  uVar8 = CONCAT22(0x36bc,(short)((uint)iVar13 >> 0x10)) + 0xdffb19d3;
  uVar26 = iVar37 - iVar24;
  uVar30 = (uint)(ushort)(uVar33 >> 1 | 0x8000) & 0xffffff0f;
  sVar11 = (sbyte)uVar30;
  uVar22 = (ushort)uVar30 >> sVar11 | (short)uVar8 << 0x10 - sVar11;
  bVar18 = (byte)((ushort)iVar13 >> 1);
  bVar19 = bVar18 + 0x89;
  bVar20 = ((byte)uVar22 & 0x1f) % 9;
  cVar14 = (char)((uint)uVar22 >> 8);
  bVar20 = (byte)(CONCAT11(bVar18 < 0x77,cVar14) >> bVar20) | cVar14 << 9 - bVar20;
  cVar10 = (char)iVar24;
  bVar18 = cVar10 + 0x3b;
  cVar14 = bVar19 - bVar20;
  if (bVar20 <= bVar19 && cVar14 != '\0') {
    uVar31 = uVar31 & 0xffff0000 | uVar26 & 0xffff;
  }
  uVar30 = (int)(short)uVar16 * -0x5ddd;
  uVar9 = uVar30 & 0xffff;
  sVar7 = (short)(uVar30 >> 0x10);
  bVar38 = sVar7 == 0 || sVar7 == -1;
  uVar22 = (ushort)(uVar31 << 0xd) | (ushort)(uVar31 >> 0x13);
  uVar33 = uVar22 << bVar38 | uVar22 >> 0x10 - bVar38;
  uVar30 = (uint)CONCAT11(!SCARRY1(cVar10,';'),cVar14) * (uVar26 & 0xffff);
  uVar8 = (uVar8 >> 8 & 0xffff00) << 8;
  uVar27 = uVar30 & 0xffff;
  bVar19 = (char)uVar9 * '~';
  uVar22 = (ushort)(uVar30 >> 0x10);
  uVar30 = (uint)(ushort)(uVar33 + uVar22);
  bVar20 = (bVar19 & 0x1f) % 9;
  cVar14 = (char)(uVar27 >> 8);
  uVar27 = (uint)CONCAT11((byte)(CONCAT11(CARRY2(uVar33,uVar22),cVar14) >> bVar20) |
                          cVar14 << 9 - bVar20,(char)uVar27);
  uVar9 = uVar16 & 0xff7f0000 | uVar9;
  sVar7 = (short)(uVar36 >> 0x10);
  uVar22 = sVar7 >> 4;
  bVar20 = (char)(int3)((int)uVar36 >> 0xc) + (char)(uVar27 >> 8) + 1;
  bVar19 = bVar19 & 7;
  bVar19 = bVar20 >> bVar19 | bVar20 << 8 - bVar19;
  bVar20 = (byte)((uint)uVar33 >> 8) >> 1;
  uVar27 = uVar27 ^ 0xcee631b3;
  bVar38 = (uVar27 & 0x100) != 0;
  uVar36 = (uint)CONCAT11((byte)(uVar27 >> 8) >> 1,(char)uVar27);
  if (!bVar38) {
    uVar36 = CONCAT22(uVar22,CONCAT11(bVar19,bVar18));
  }
  bVar12 = bVar20 + 0x54;
  uVar16 = (uint)(bVar20 < 0xac || bVar12 < bVar38) << 0x10 | uVar36 & 0xffff;
  uVar36 = uVar30 | 0xc000;
  uVar16 = ((uint)(ushort)(uVar33 & 0xff | (ushort)(byte)(bVar12 - bVar38) << 8) & 0x3fff) << 0x10 |
           (uint)(ushort)((ushort)(uVar16 >> 0xe) | (ushort)(uVar16 << 3));
  bVar19 = bVar19 >> 1;
  uVar5 = (ushort)bVar18 << 9 | (ushort)uVar26 >> 7;
  bVar20 = (byte)(uVar16 % uVar36) | bVar19;
  uVar33 = (ushort)CONCAT31((uint3)(byte)((char)(uVar16 / uVar36 >> 8) + 1),0x16);
  if ((char)bVar20 < '\0') {
    uVar33 = (ushort)uVar26;
  }
  uVar30 = uVar31 << 0xd & 0xffff0000 | uVar30 | 0xc000;
  if (-1 < (int)uVar9) {
    uVar30 = uVar9 << 1 | (uint)((byte)((uint)(ushort)((bVar20 ^ uVar5) << 1 | 1) >> 8) & 1);
  }
  uVar31 = (uVar8 | (uint)(ushort)(uVar33 << 4 | uVar33 >> 0xc) * ((uint)uVar5 & 0x4ae716be) >> 0x10
           ) >> 10;
  sVar23 = (short)(uVar26 * -0x34da18cc);
  uVar6 = sVar23 << 1 | (ushort)(sVar23 < 0);
  uVar26 = uVar26 * -0x34da18cc & 0xffff0000;
  uVar36 = uVar31 & 0xffff;
  iVar13 = -(uint)(ushort)((short)uVar31 + (short)CONCAT21(uVar22,bVar19) * 0x100);
  uVar31 = (uint)uVar5 & 0x4ae7143a ^ uVar36;
  bVar20 = (char)uVar36 << ((byte)uVar31 & 0x1f);
  uVar31 = uVar31 & 0x4b09527c;
  uVar33 = (short)((ushort)uVar30 | 1) >> 1;
  if (uVar31 != 0) {
    uVar33 = uVar6;
  }
  uVar31 = uVar31 - 0xb805;
  uVar36 = 0x82d9;
  iVar13 = (int)(short)((CONCAT11((char)((uint)iVar13 >> 8) << 1,(char)iVar13) & 0xb80 | 0x100) << 4
                       ) * 0x3728;
  sVar23 = (short)((uint)iVar13 >> 0x10);
  if (sVar23 == 0 || sVar23 == -1) {
    uVar36 = uVar31 & 0xffff;
  }
  uVar5 = (ushort)((short)(char)bVar20 * -0x80) >> 8;
  uVar16 = (uint)(uVar33 & uVar6);
  iVar24 = (uVar30 & 0xffff0000 | uVar16) << 1;
  uVar34 = (ushort)((uVar8 & 0x3fc0000) >> 10) | (ushort)(byte)(bVar20 >> 1 | bVar20 << 7);
  sVar23 = uVar34 + 1;
  uVar33 = (ushort)iVar13;
  if (sVar23 == 0 || SCARRY2(uVar34,1) != sVar23 < 0) {
    uVar33 = uVar5;
  }
  uVar34 = (ushort)iVar24 >> 0xf;
  uVar29 = sVar23 * 2 | uVar34;
  bVar20 = (byte)((sVar23 * 2 & 0xffU | uVar34 | (ushort)(sVar23 < 0) << 8) >> 6);
  uVar8 = (uint)(ushort)(uVar33 << 1) - 1;
  uVar5 = uVar5 + 0xc349;
  iVar13 = (int)((uint)uVar22 << 0x10 | (uint)uVar29 & 0xffffff00 |
                (uint)(byte)((bVar20 | (char)uVar29 << 3) >> 2 | bVar20 << 6)) >> 1;
  uVar34 = ((short)uVar6 >> 1) + 1;
  uVar6 = (ushort)uVar8;
  cVar10 = (char)(uVar5 >> 8);
  cVar25 = (char)((uint)iVar13 >> 8);
  cVar14 = cVar25 + cVar10;
  uVar33 = CONCAT11(cVar14 + (uVar6 < 0x58c4),(char)iVar13);
  uVar22 = uVar5;
  if (SCARRY1(cVar25,cVar10) != SCARRY1(cVar14,uVar6 < 0x58c4)) {
    uVar33 = uVar6 + 0xa73c;
    uVar22 = uVar6 + 0xa73c;
  }
  uVar30 = CONCAT22((ushort)(((uVar16 & 0x7f80) << 9) >> 0x10) | (ushort)((uVar16 << 0x19) >> 0x10),
                    (ushort)((uint)iVar24 >> 0x18) + 0xd377);
  if (0x4fae < uVar22 || (ushort)(uVar22 + 0xb051) == 0) {
    uVar30 = uVar26 | uVar34;
  }
  uVar31 = uVar31 & 0xab280000;
  uVar9 = CONCAT22(sVar7 >> 5,uVar33) & 0xffffff00 | (uint)(byte)((byte)uVar33 >> 5);
  bVar18 = (byte)(uVar22 + 0xb051);
  uVar16 = uVar31 | (uint)(ushort)(short)(char)bVar18;
  iVar13 = uVar9 + uVar16;
  uVar16 = (uint)(CONCAT14(CARRY4(uVar9,uVar16),iVar13) >> 0x11);
  uVar28 = uVar16 | iVar13 * 0x10000;
  bVar20 = bVar18 | (byte)(uVar5 & 0xff);
  uVar9 = uVar31 | (uint)(ushort)(short)(char)bVar18 & 0xffffff00;
  uVar32 = (uVar36 << 1 & 0xff0000) >> 8 | (uVar36 << 1 & 0xff00) << 8 | uVar36 << 0x19;
  uVar36 = (uint)(ushort)(uVar5 & 0xff | (ushort)(byte)(cVar10 >> (bVar18 & 0x1f)) << 8) <<
           (bVar20 & 0x1f);
  uVar27 = uVar36 ^ (uint)(uVar36 == uVar32) * (uVar36 & uVar32);
  uVar17 = uVar27 & 0xffff0000 | (uint)CONCAT11((short)(ushort)uVar16 < -0x26b,(char)uVar36);
  uVar36 = uVar32 - 1;
  if (0xfd93 < (ushort)uVar16) {
    uVar36 = uVar28;
  }
  bVar18 = (byte)((int)(uVar9 | bVar20) >> 1);
  bVar20 = bVar18 & 0x1f;
  uVar32 = (uVar36 << 1) >> bVar20 | uVar17 << 0x20 - bVar20;
  uVar17 = ~uVar17;
  bVar20 = (byte)uVar17;
  uVar30 = uVar30 ^ 0x1f82;
  uVar27 = ~(uVar8 & 0xffff0000 | (uint)(ushort)((short)uVar27 >> 0xf) & 0xffffff00 |
            (uint)((char)(uVar27 >> 8) >> 7 & bVar20));
  bVar38 = (uVar17 & 0x400) != 0;
  uVar6 = CONCAT11((byte)(uVar27 >> 8) & (byte)(uVar16 >> 8),(byte)uVar27 & (byte)(uVar17 >> 8)) *
          0x2c58;
  uVar36 = (uVar26 | (uVar34 | uVar5)) << 6;
  bVar19 = (byte)uVar6;
  uVar28 = uVar28 + 0xa969ccd2;
  uVar26 = (uint)(ushort)((((ushort)uVar36 | (ushort)(uVar17 >> 0x1a)) + 0x6b4) -
                         (ushort)CARRY1(bVar18 * '\x10',bVar20));
  uVar16 = uVar36 & 0xffff0000 | uVar26;
  sVar7 = (short)uVar28;
  uVar22 = sVar7 << 1;
  uVar33 = (ushort)(sVar7 < 0);
  uVar5 = SEXT12((char)((byte)(int3)((int)uVar9 >> 9) ^ bVar19));
  uVar8 = 0;
  if (uVar16 != 0) {
    while ((uVar16 >> uVar8 & 1) == 0) {
      uVar8 = uVar8 + 1;
    }
  }
  uVar36 = uVar36 & 0x7fff0000 | uVar26;
  uVar26 = ((uint)(ushort)(CONCAT11(bVar38 << 2,(char)uVar8) | 0x200) & 0x242b) * 2 * uVar26;
  uVar34 = (ushort)(uVar26 >> 0x10);
  uVar26 = uVar26 & 0xffff;
  uVar8 = uVar26 | (uVar8 & 0x7fff0000) << 1;
  uVar35 = uVar34 & 0xff | (ushort)(uVar34 == 0) << 8;
  uVar16 = uVar36 ^ (uint)(uVar8 == uVar36) * (uVar36 ^ uVar8);
  bVar18 = (byte)uVar26;
  uVar29 = (short)(char)(bVar18 ^ (uVar8 == uVar36) * (bVar18 & (byte)uVar16)) *
           (short)(char)((byte)((uint)(uVar22 | uVar33) >> 8) & 0x29);
  uVar34 = uVar5 + uVar35;
  if (!CARRY2(uVar5,uVar35) && uVar34 != 0) {
    uVar35 = (ushort)uVar16;
    uVar29 = uVar34;
  }
  bVar18 = (byte)((uVar32 & 0xffff0000) >> 0x1e);
  uVar9 = (uVar28 & 0xffff0000 |
          (uint)(ushort)((uVar22 & 0x2911 | uVar33) +
                        (ushort)((int)((uVar27 & 0xffff0000 | (uint)uVar6 & 0xffffff00 |
                                       (uint)(byte)(bVar19 + 0x71)) +
                                       (uVar17 & 0xffffff00 | (uint)(byte)(bVar20 + 0x81)) + 1) < 0)
                        )) >> bVar18;
  uVar36 = ((uint)(ushort)((int)uVar31 >> 0x11) << 0x12 | uVar32 >> 0x1e) << bVar18;
  bVar18 = (byte)(uVar36 >> 8) | 0xc0;
  uVar26 = ((uint)(uVar35 & 0x3fff) << 0x10 | 0x753f) / (uVar36 & 0xffff | 0xc000) & 0xffff;
  bVar20 = (byte)uVar36 & 7;
  bVar20 = bVar18 << bVar20 | bVar18 >> 8 - bVar20;
  uVar22 = CONCAT11(bVar20,(byte)uVar36);
  uVar8 = 0;
  if ((uVar26 | 0x1c3a0000) != 0) {
    while (((uVar26 | 0x1c3a0000) >> uVar8 & 1) == 0) {
      uVar8 = uVar8 + 1;
    }
  }
  uVar26 = (uint)(ushort)((short)(char)uVar26 * (short)(char)(uVar26 >> 8)) & 0xffff3fff | 0xc0;
  uVar33 = (ushort)(byte)uVar26;
  uVar34 = (ushort)uVar26;
  uVar35 = (short)(uVar16 + 1) << 1 | (ushort)uVar8 >> 0xf;
  uVar16 = uVar16 + 1 & 0xffff0000 | (uint)uVar35;
  uVar6 = uVar22 >> 1;
  uVar22 = uVar22 << 0xf;
  uVar29 = (ushort)((uVar32 & 0xffff0000 | (uint)uVar29) >> 4);
  uVar26 = (uVar30 & 0xfffe0000 | 0x2000000) >> 1 | (uint)((uVar30 & 1) != 0) << 0x1f;
  bVar18 = (char)uVar6 + 0x10;
  uVar5 = (((ushort)bVar20 & 0xfe) << 8) >> 1 | uVar22 | (ushort)bVar18;
  uVar31 = ((uint)(ushort)(uVar34 / uVar33 & 0xff | uVar34 % uVar33 << 8) | 0x1c3a0000) & uVar16;
  uVar33 = uVar29 * -0x7b4f - (ushort)(((ushort)uVar8 >> 10 & 1) != 0);
  if (((uVar26 | uVar33) & 0x6883be94) == 0) {
    uVar31 = uVar31 & 0xffff0000 | (uint)(uVar6 | uVar22) & 0xff00 | (uint)bVar18;
  }
  bVar18 = (byte)((int)(uVar31 & 0xffff0000 | (uint)(ushort)((short)uVar31 + uVar33)) >> 0x16);
  uVar31 = (uint)(ushort)(uVar29 * 2 | uVar29 >> 0xf);
  uVar22 = uVar5 >> 1;
  bVar20 = ((byte)uVar22 & 0x1f) % 9;
  uVar35 = ((ushort)(byte)((bVar18 | 0xa5) << bVar20 |
                          (byte)((CONCAT11((uVar9 & 0x100) != 0,bVar18) | 0xa5) >> 9 - bVar20)) |
           0xd000) * uVar35;
  uVar5 = uVar5 >> 4;
  uVar34 = uVar22 << 0xd | uVar5;
  iVar13 = (int)(short)uVar35 * (int)(short)uVar34;
  uVar27 = (uVar32 & 0xfff00000) >> 4 | ((uVar30 | 0x2000000) >> 1) << 0x1c | uVar31 |
           1 << (uVar31 & 0x1f);
  uVar6 = (uVar22 & 0x7f8) >> 3;
  uVar30 = (uint)(ushort)(uVar6 | (ushort)(byte)((char)((uint)uVar34 >> 8) >> ((byte)uVar5 & 0x1f))
                                  << 8);
  uVar22 = (ushort)((uint)iVar13 >> 0x10) & 0xff;
  uVar31 = uVar26 | (ushort)(uVar33 * 0x100) | uVar36 & 0xffff0000 | uVar30;
  uVar26 = (uint)(ushort)(uVar22 | uVar35 * 0x100) & 0xffff01ff;
  cVar14 = (char)(uVar26 >> 8) + -0x56;
  uVar31 = uVar31 & 0xffff0000 |
           (uint)(ushort)((uVar22 | (ushort)(byte)~(byte)((uint)iVar13 >> 0x18) << 8) + 0x939d +
                         (short)uVar31 * 2);
  if (cVar14 < '\0') {
    uVar31 = uVar27;
  }
  bVar20 = ('\0' >> ((byte)uVar6 & 0x1f)) + 0x44;
  uVar22 = -(uVar6 | (ushort)(byte)((char)(uVar30 >> 8) + 0x41) << 8);
  uVar30 = uVar31 + 0xfcf2efc3 ^
           (int)(uVar8 & 0xffff0000 | (uint)CONCAT11(cVar14,(char)uVar26)) >> ((byte)uVar6 & 0x1f);
  lVar3 = (ulonglong)
          (((uint)(bVar20 >> 2) | (uint)bVar20 << 0x1e) * (uVar36 & 0xffff0000 | (uint)uVar22)) *
          (ulonglong)uVar30;
  uVar8 = (uint)((ulonglong)lVar3 >> 0x21);
  uVar26 = (uint)((char)lVar3 < '\0') << 0x1f;
  uVar36 = (uVar27 ^ (uVar27 >> 0xb & 1) << 0xb) + 1;
  bVar20 = (byte)((uVar8 | uVar26) >> 0x12);
  uVar8 = (uVar8 & 0xfc000000 | uVar26) >> 0x12 | uVar8 << 0xe |
          (uint)(byte)(bVar20 >> 4 | bVar20 << 4);
  uVar5 = (short)uVar8 + 0x73 + (short)uVar30 * 4;
  uVar33 = (ushort)((int)((((uint)uVar35 & 0xffffff00 | uVar9 & 0xffff0000 |
                           (uint)(byte)((byte)uVar35 >> 1)) + 0xa3166027) * 4 | uVar27 >> 0x1e) >> 1
                   );
  uVar22 = CONCAT11((char)((uint)uVar22 >> 8) + '%',(char)uVar22 + 'f');
  if (bVar38) {
    uVar33 = uVar22 & 0xfffe;
  }
  uVar31 = (uVar16 & 0x3fffc000) << 2;
  uVar26 = uVar31 | (ushort)((short)(char)uVar30 << 4 |
                            (ushort)(CONCAT12((uVar33 >> 1 & 1) != 0,(short)(char)uVar30) >> 0xd));
  uVar8 = uVar8 | 0xc0;
  uVar33 = (ushort)(byte)uVar8;
  uVar33 = 0xdb / uVar33 | 0xdbU % uVar33 << 8;
  uVar6 = (ushort)uVar8;
  if ((short)uVar6 < (short)uVar33) {
    uVar30 = uVar30 & 0xffff0000 | (uint)(uVar22 & 0xfffe);
  }
  bVar38 = (int)uVar36 < 0;
  uVar8 = (uVar36 & 0xffff0000 | (uint)uVar5) << 1;
  uVar22 = (ushort)uVar8 | 1;
  uVar34 = uVar22 >> bVar38 | uVar22 << 0x10 - bVar38;
  sVar7 = (short)((uVar8 & 0xffff0000 | (uint)uVar34) >> 0xc) >> bVar38;
  uVar34 = uVar34 + 1;
  uVar22 = sVar7 * sVar7;
  bVar20 = (byte)((uint)uVar22 >> 8);
  uVar30 = uVar30 + 1;
  uVar16 = (uint)(ushort)(uVar33 ^ (ushort)(uVar33 == uVar6) *
                                   (uVar33 & (uVar6 ^ (ushort)(uVar33 == uVar6) * (uVar6 ^ uVar5))))
           << 0x14 | ((uVar36 & 0x78000000) << 1) >> 0xc |
           (uint)(ushort)(uVar22 & 0xff | (ushort)(byte)(bVar20 << 7 | bVar20 >> 1) << 8) |
           0xa00413c6 | 1 << (uVar30 & 0x1f);
  uVar8 = uVar30 + uVar16 & 0xffff0000;
  uVar36 = ((uint)uVar34 - (uint)CONCAT11((short)uVar34 < 0,bVar38)) * 0x4aa711b & 0xffff;
  bVar18 = (byte)uVar36;
  bVar20 = (char)~(byte)uVar16 >> (bVar18 & 0x1f);
  uVar22 = (ushort)(uVar26 >> 0xe);
  return (uVar16 & 0xffffff00 | (uint)(byte)(bVar20 >> (bVar18 & 7) | bVar20 << 8 - (bVar18 & 7))) +
         (uVar8 | CONCAT11((char)(uVar36 >> 8) << (bVar18 & 0x1f),bVar18)) + (uVar8 | uVar36) +
         uVar26 * 2 + uVar30 +
         ((uVar30 + uVar16) * 0x40000 | (uVar31 & 0xc0000000) >> 0xe |
         (uint)(ushort)(uVar22 << (bVar18 & 0xf) | uVar22 >> 0x10 - (bVar18 & 0xf))) * 0x8000 +
         0xc76859e;
}



// WARNING: Removing unreachable block (ram,0x0804a35f)
// WARNING: Removing unreachable block (ram,0x08049fa2)
// WARNING: Removing unreachable block (ram,0x0804a19a)
// WARNING: Removing unreachable block (ram,0x0804a381)
// WARNING: Removing unreachable block (ram,0x0804a60f)
// WARNING: Removing unreachable block (ram,0x08049eae)
// WARNING: Removing unreachable block (ram,0x08049eb7)
// WARNING: Removing unreachable block (ram,0x0804a3d3)

int log_size_10_var_001(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint5 uVar4;
  byte bVar5;
  ushort uVar6;
  uint3 uVar7;
  byte bVar8;
  byte bVar9;
  sbyte sVar10;
  byte bVar11;
  ushort uVar12;
  ushort uVar13;
  short sVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ushort uVar18;
  char cVar21;
  undefined2 uVar22;
  uint uVar19;
  uint uVar20;
  byte bVar23;
  ushort uVar24;
  ushort uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ushort uVar30;
  short sVar31;
  ushort uVar32;
  short sVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  bool bVar39;
  byte in_PF;
  bool bVar40;
  
  iVar15 = 0x1f;
  while (0xdbf5c54U >> iVar15 == 0) {
    iVar15 = iVar15 + -1;
  }
  uVar27 = iVar15 << 1;
  uVar26 = (uint)(ushort)((ushort)in_PF << 8 | 0x33);
  uVar16 = 0x31a9a6e2 - (uVar27 | 1);
  uVar4 = (CONCAT14(0x31a9a6e2 < (uVar27 | 1),uVar26) | 0x8f5d0000) >> 3;
  uVar30 = (ushort)uVar4;
  uVar26 = uVar26 << 0x1e | (uint)uVar4 & 0xffff0000;
  uVar20 = uVar27 & 0xff | 0x9e1bc301;
  uVar12 = (ushort)uVar16;
  uVar25 = (ushort)uVar20;
  bVar39 = CARRY2(uVar12,uVar25);
  uVar12 = uVar12 + uVar25;
  uVar16 = uVar16 & 0xffff0000;
  if (!bVar39 && uVar12 != 0) {
    uVar20 = uVar27 & 0xffffff00;
  }
  uVar27 = ((uint)(ushort)((ushort)bVar39 + 0xc75e) | 0x8f5d0000) -
           (uVar26 | (ushort)(uVar30 << 0xe | uVar30 >> 2));
  uVar30 = (ushort)(uVar26 >> 0x10);
  uVar26 = ((uint)CONCAT11(-1 << ((byte)uVar12 & 0x1f),0xff) | 0xffff0000) << 7;
  uVar25 = (ushort)uVar26 & 0xff00 | (ushort)(byte)((char)uVar26 >> ((byte)uVar12 & 0x1f));
  bVar8 = (byte)(uVar12 >> 1);
  bVar5 = bVar8 & 0x1f;
  uVar28 = uVar27 >> bVar5 | uVar27 << 0x21 - bVar5;
  uVar12 = uVar25 - 1;
  uVar27 = 0x4cc6e347;
  if (uVar12 == 0 || (short)uVar25 < 1) {
    uVar27 = uVar26 & 0xffff0000 | (uint)uVar12;
  }
  bVar5 = (byte)((int)uVar20 >> (bVar8 & 0x1f));
  if (uVar12 == 0) {
    bVar5 = (byte)uVar28;
  }
  uVar20 = 0x1f;
  if (uVar12 >> 8 != 0) {
    while ((ushort)((uVar12 >> 8) >> uVar20) == 0) {
      uVar20 = uVar20 - 1;
    }
  }
  uVar34 = (CONCAT22(uVar30,0xb17a) & 0xffff0000 |
           (uint)(ushort)((ushort)((bVar5 & 0xe2) != 0) << 8 | 0x3d)) << 9;
  uVar36 = uVar20 & 0xffff0000 | (uVar30 >> 7 | uVar34) & 0xff00;
  uVar34 = (int)(char)((ulonglong)
                       ((longlong)(int)((uVar20 & 0xffff | uVar34 & 0xffff0000) * uVar28 >> 1) *
                       (longlong)(int)uVar16) >> 0x20);
  if (!SCARRY4(uVar28,1)) {
    uVar34 = uVar16;
  }
  uVar19 = uVar26 & 0xffff0000 | (uint)(ushort)(uVar12 ^ (uVar12 >> 6 & 1) << 6);
  uVar30 = (short)uVar27 << 1;
  bVar39 = (short)uVar27 < 0 != (short)uVar30 < 0;
  uVar35 = (uint)bVar39 << 8;
  uVar26 = uVar19 << 1;
  uVar26 = (uVar26 & 0xffff0000 |
           (uint)CONCAT11((byte)(uVar26 >> 8) >> 1 | ((int)uVar19 < 0) << 7,
                          (byte)uVar26 | (int)uVar19 < 0)) >> 1 |
           (uint)(0xae881665 < uVar28 + 1) << 0x1f;
  if ((uVar27 & 0xffff0000 | (uint)uVar30) != 0xd4fa899) {
    uVar26 = uVar28 + 0x5177e99b;
  }
  uVar27 = 0x1f;
  if (uVar36 != 0) {
    while (uVar36 >> uVar27 == 0) {
      uVar27 = uVar27 - 1;
    }
  }
  if (uVar36 == 0) {
    uVar34 = uVar34 & 0xffff0000 | uVar35;
  }
  uVar28 = 0x1f;
  if (uVar27 != 0) {
    while (uVar27 >> uVar28 == 0) {
      uVar28 = uVar28 - 1;
    }
  }
  uVar12 = (ushort)bVar39 + 0x98ed;
  uVar27 = (uint)uVar12 << 0x1d;
  uVar12 = uVar12 >> 3;
  sVar31 = (short)uVar28 * 2;
  uVar36 = uVar28 & 0xffff0000;
  uVar6 = (ushort)uVar34;
  uVar13 = (ushort)uVar35;
  uVar18 = uVar6 ^ (ushort)(uVar12 == uVar6) * (uVar6 ^ uVar13);
  uVar24 = (short)uVar26 + sVar31 + 1;
  uVar13 = uVar13 + 0xe7d;
  uVar30 = uVar24 + (ushort)((uVar20 & 0xffff0000) >> 0x19);
  uVar25 = uVar30 & 0xff;
  uVar32 = sVar31 + 0x77da;
  bVar8 = (byte)((uint)uVar13 >> 8);
  bVar5 = ((byte)uVar13 & 0x1f) % 9;
  bVar23 = -(char)uVar25;
  uVar13 = CONCAT11(0xda,(byte)((uVar13 & 0xff |
                                (ushort)(0x6e < bVar8 || 0xfe < (byte)(bVar8 + 0x91)) << 8) >> bVar5
                               ) | (byte)uVar13 << 9 - bVar5);
  uVar20 = (uint)uVar13;
  uVar35 = ((uint)(ushort)((uVar12 ^ (ushort)(uVar12 == uVar6) * (uVar12 & uVar18)) >> 1) |
           0x80000000) ^ 0x4609;
  uVar26 = (uVar26 & 0xffff0000 |
            (uint)(ushort)(uVar25 | (ushort)(byte)((byte)((uint)uVar30 >> 8) >> 1) << 8) &
            0xffffff00 | (uint)bVar23) ^ 0xf300;
  uVar22 = (short)((uVar34 & 0xffff0000 | (uint)uVar18) + (uint)uVar24 * -2 >> 0x10);
  if ((uVar35 & 0xfd29) == 0) {
    uVar22 = 0x8000;
  }
  uVar16 = uVar16 | uVar20 & 0xffffff00;
  uVar34 = (uVar35 >> 8 & 0xffff00) << 8;
  uVar29 = (uVar27 | (ushort)((uVar12 + 0x93b7) - (ushort)((short)uVar28 < 0))) & 0xddc09ccc;
  uVar30 = uVar32 | (ushort)uVar26;
  bVar8 = 0xe - (char)((int)uVar36 >> 0x1f);
  bVar5 = bVar8 % 0x11;
  uVar28 = ((uVar34 | (uint)uVar32 & 0xffffff00 | (uint)(byte)((char)uVar32 + 1)) ^ 0x1d) & 0xffff;
  uVar28 = (uint)(ushort)((ushort)(uVar28 >> bVar5) | (ushort)(uVar28 << 0x11 - bVar5));
  uVar34 = uVar34 | uVar28;
  bVar8 = bVar8 & (byte)(uVar28 >> 8);
  uVar37 = uVar26 & 0xffffff00 | 0x4000 | (uint)(byte)(bVar23 + 0x65);
  uVar35 = CONCAT22(uVar22,0xd1e9);
  bVar5 = (byte)((uint)CONCAT11(~(byte)(((uVar16 & 0x7fff9a2f) << 1) >> 8) + 0x70,bVar8) >> 8);
  uVar19 = uVar35 ^ (uint)(uVar34 == uVar35) * (uVar35 ^ uVar34);
  uVar28 = uVar34 ^ (uint)(uVar34 == uVar35) * (uVar34 & uVar19);
  if (-1 < (int)(uVar34 - uVar35)) {
    uVar37 = uVar26 & 0xffff0000 | uVar28 & 0xffff;
  }
  bVar11 = (byte)uVar28;
  bVar9 = bVar8 ^ (bVar11 == bVar8) * (bVar8 ^ (byte)(uVar37 >> 8));
  bVar23 = bVar11 ^ (bVar11 == bVar8) * (bVar11 & bVar9);
  uVar26 = (uint)CONCAT11((char)((uint)CONCAT11(bVar5 >> 2 | bVar5 << 6,bVar8) >> 8) << 1,bVar9);
  if ((uVar19 >> (uVar19 & 0x1f) & 1) == 0) {
    uVar29 = uVar27 & 0xddc00000 | uVar26;
  }
  uVar30 = (uVar30 << 1 | (ushort)((short)uVar30 < 0)) + 0x7df6;
  uVar34 = uVar36 | (uint)uVar30;
  uVar27 = uVar19 - uVar20;
  if (uVar19 < uVar20 || uVar27 == 0) {
    uVar27 = uVar27 & 0xffff0000 | (uint)uVar30;
  }
  iVar15 = ((uVar16 & 0x7fff8000) << 1 | uVar26) << (bVar9 & 0x1f);
  bVar5 = (byte)iVar15;
  uVar12 = ((short)(char)(((ushort)uVar28 & 0x3f00 | (ushort)bVar23) /
                         (ushort)(byte)((byte)((uVar37 & 0xffffff00) >> 8) | 0xc0)) & 0x1d71U) >>
           (bVar5 & 0x1f);
  uVar16 = uVar29 >> 0x13 | uVar29 << 0xd;
  if (-1 < (char)((byte)uVar27 | 0x9b)) {
    uVar16 = uVar34;
  }
  uVar25 = (((ushort)(uVar37 & 0xffffff00) |
             (ushort)(byte)((char)uVar37 + bVar23 + (bVar11 < bVar8)) | 0xc000) & 0xa5ff) + 0x9555;
  if ((uVar30 | 0xd54b) != 0) {
    uVar16 = uVar20;
  }
  bVar5 = bVar5 & 0x1f;
  uVar20 = (uVar27 | 0x9b) << bVar5 | (uVar27 | 0x9b) >> 0x20 - bVar5 | 0x58e298ba;
  uVar6 = uVar12 & 0xff;
  uVar27 = uVar16 >> 1;
  uVar26 = (uVar34 | 0xd54b) << 0x1f;
  uVar32 = (ushort)uVar27;
  uVar24 = (short)iVar15 + uVar32 + (ushort)((uVar16 & 1) != 0);
  cVar21 = (char)uVar25;
  bVar8 = (byte)uVar24;
  bVar5 = (bVar8 & 0x1f) % 9;
  uVar18 = CONCAT11(cVar21,cVar21 >> 1) & 0x1ff;
  bVar23 = (byte)(uVar18 >> bVar5) | (byte)(uVar18 << 9 - bVar5);
  uVar25 = uVar25 & 0xff00 | (ushort)bVar23;
  uVar30 = uVar30 | 0xd54b | uVar25;
  uVar6 = uVar6 | (ushort)(byte)((byte)((uint)(ushort)(uVar6 | uVar12 << 8) >> 8) & (byte)uVar20) <<
                  8;
  uVar12 = uVar30 ^ (ushort)(uVar6 == uVar30) * (uVar30 ^ uVar13 << 1);
  uVar6 = uVar6 ^ (ushort)(uVar6 == uVar30) * (uVar6 & uVar12);
  bVar5 = (char)uVar6 - 1;
  uVar16 = uVar36 | uVar12;
  if ((bVar5 & 1) != 0) {
    uVar16 = uVar27 | uVar26;
  }
  uVar12 = uVar24 & 0xff00 | (ushort)(byte)(bVar8 + 0x71);
  uVar7 = ((uint3)(uVar28 >> 8) & 0xd2b00 | (uint3)(byte)(uVar6 >> 8)) >> 1 |
          (uint3)(((uint)((bVar5 & 2) != 0) << 0x1f) >> 8);
  iVar15 = CONCAT31(uVar7,0x3e);
  uVar18 = SEXT12((char)bVar23);
  uVar30 = uVar12 + uVar18;
  cVar21 = (char)uVar30;
  uVar28 = ((uVar37 & 0xffff0000 | (uint)(ushort)(uVar25 + 0x9601)) - iVar15) -
           (uint)(0x11 < (byte)(cVar21 + 1U) ||
                 CARRY1(cVar21 - 0x11,CARRY2(uVar12,uVar18) || 0xfffe < uVar30));
  uVar34 = uVar16 << 0xc | uVar16 >> 0x14;
  uVar26 = (uVar27 & 0xffff0000 | uVar26 | (uint)(ushort)(uVar32 ^ (uVar32 >> 0xd & 1) << 0xd)) << 1
  ;
  bVar39 = (uVar28 & 0x400) == 0;
  uVar30 = (short)uVar26 << 1 | (ushort)((uVar28 & 0x100) != 0);
  uVar1 = (ulonglong)((uint)(uVar13 & 0x7fff) | 0xc0000000);
  uVar2 = CONCAT44(uVar20 & 0xffff0000 | (uint)uVar18 & 0xffffff00 |
                   (uint)(byte)((bVar23 - (char)(uVar28 >> 8)) - 1),
                   uVar28 & 0xffff | (uint)(ushort)(uVar7 >> 8) << 0x10) & 0x3fffffffffffffff;
  uVar27 = 0;
  if (uVar34 != 0) {
    while ((uVar34 >> uVar27 & 1) == 0) {
      uVar27 = uVar27 + 1;
    }
  }
  uVar1 = CONCAT44((int)(uVar2 % uVar1),(int)(short)(uVar2 / uVar1)) & 0x3fffffffffffffff;
  uVar2 = uVar1 / (ulonglong)(uVar27 | 0xc0000000);
  uVar20 = (uint)uVar2;
  uVar1 = uVar1 % (ulonglong)(uVar27 | 0xc0000000);
  uVar12 = (uVar13 & 0x7fff) * 2;
  cVar21 = (char)(uVar27 >> 8);
  if (!SBORROW1(cVar21,-0x7d)) {
    uVar20 = (uint)(ushort)(uVar2 >> 0x10) << 0x10;
  }
  uVar36 = (uint)CONCAT11(cVar21 + '}',(char)uVar27) & 0xffffff0f;
  uVar13 = (ushort)uVar1;
  uVar25 = ((short)uVar28 + (short)iVar15 & 0xff00U | (ushort)(byte)uVar20) >> (sbyte)uVar36 |
           uVar13 << 0x10 - (sbyte)uVar36;
  uVar35 = uVar34 << 4 | (uVar16 << 0xc) >> 0x1c;
  uVar16 = uVar20 & 0xffff0000 | (uint)uVar25 & 0xffffff00 |
           (uint)(byte)((char)uVar25 - (char)(uVar36 >> 8));
  uVar34 = (uVar27 & 0xffff0000 | 0xc0000000 | uVar36) + uVar16;
  uVar25 = uVar13 ^ (ushort)(uVar30 == uVar13) * (uVar13 ^ uVar30);
  uVar27 = ((uint)((uint3)(uVar28 >> 8) & 0xffff00) | (uint)!SBORROW2(uVar30,uVar13)) * 0x100;
  iVar15 = uVar27 - uVar34;
  uVar28 = ((uVar26 & 0xffff0000 | (uint)(ushort)(uVar30 + ((short)uVar16 >> 1))) - uVar35) -
           (uint)(uVar27 < uVar34);
  uVar36 = (uVar35 - ((uint)uVar12 | 0xc0000000)) - (uint)(uVar34 < 0xd84ddcd7);
  uVar20 = (uVar20 & 0xffff0000 |
           (uint)(ushort)((uVar30 ^ (ushort)(uVar30 == uVar13) * (uVar30 & uVar25)) + 0x248d)) + 1;
  sVar31 = (short)uVar20;
  uVar30 = sVar31 << 1 | (ushort)uVar34 >> 0xf;
  uVar12 = (uVar12 + 0xee39) - (ushort)(sVar31 < 0);
  uVar16 = (uint)((uVar12 & 1) != 0);
  uVar27 = uVar28 + 0x4c78cdb3;
  uVar26 = uVar27 - uVar16;
  if (bVar39) {
    uVar26 = uVar34;
  }
  bVar8 = ((char)uVar30 + -0x2e) - (uVar28 < 0xb387324d || uVar27 < uVar16);
  uVar13 = CONCAT11(bVar8 == 0,(byte)uVar34);
  bVar5 = (byte)uVar34 & 0xf;
  uVar16 = (uVar34 & 0xffff0000 | (uint)(ushort)(uVar13 << bVar5 | uVar13 >> 0x10 - bVar5)) + 1;
  bVar5 = (byte)uVar16 & 0xf;
  uVar13 = (ushort)uVar16 >> bVar5 | (ushort)uVar16 << 0x10 - bVar5;
  uVar27 = (uVar20 & 0xffff0000 | (uint)uVar30 & 0xffffff00 | (uint)bVar8) >> ((byte)uVar13 & 0x1f);
  uVar20 = ~(uVar16 & 0xffff0000 | (uint)uVar13);
  uVar13 = (ushort)uVar20;
  uVar30 = uVar13 + 0x9278;
  bVar8 = (byte)uVar30;
  bVar5 = bVar8 & 0x1f;
  uVar16 = (uint)(CONCAT14(0x6d87 < uVar13,uVar26) >> bVar5) | uVar26 << 0x21 - bVar5;
  uVar28 = (int)(uVar36 & 0xffff0000 | (uint)(ushort)((short)uVar36 * -0x3382)) >> (bVar8 & 0x1f);
  uVar26 = uVar16 & 0xffff0000 | (uint)(ushort)((short)uVar16 + 1);
  uVar16 = (uint)(uVar12 ^ uVar12 & 1) | 0xc0000000;
  if (bVar39) {
    uVar16 = uVar28;
  }
  uVar18 = (ushort)(uVar26 << 1) | (ushort)((int)uVar26 < 0);
  uVar12 = (ushort)iVar15;
  uVar26 = ((uVar20 & 0xffff0000 | (uint)uVar30) +
            (uVar16 & 0xffff0000 | (uint)((ushort)uVar16 & uVar12)) + 1) * 2;
  uVar16 = ((int)(short)((uVar27 & 0xffff0000 |
                         (uint)(ushort)((short)(char)(byte)uVar27 *
                                       (short)(char)((byte)uVar27 | 0x7e))) >> 1) *
            (int)(short)uVar18 & 0xffffU) * (uint)(uVar12 | 0x7600);
  uVar30 = (short)(char)(uVar16 & 0xffff) * (short)(char)((uVar16 & 0xffff) >> 8);
  uVar13 = (ushort)(uVar16 >> 0x10) & 0xff | (ushort)(byte)~(byte)(uVar16 >> 0x18) << 8;
  uVar12 = ((ushort)uVar26 | 1) + 0xc4eb;
  bVar5 = (byte)uVar12 & 0xf;
  iVar15 = (-CONCAT22((short)(uVar1 >> 0x10),uVar25) & 0xffff0000U | (uint)uVar13) + 0xbab4d5ef +
           ((uVar27 & 0xfffe0000) >> 1 | 0x80000000 |
           (uint)(ushort)((uVar30 & 0xff |
                          (ushort)(byte)((char)((uint)uVar30 >> 8) + (char)iVar15) << 8) << bVar5 |
                         uVar13 >> 0x10 - bVar5)) * 2;
  uVar25 = (ushort)iVar15 & 0xff;
  uVar30 = uVar12 & 0xf | (ushort)(byte)((uint)uVar13 >> 8) << 8;
  uVar12 = uVar25 * -0x2aa2 & 0xff | uVar25 * 0x5e00;
  uVar25 = uVar30 + 0x72 + uVar12 * 8;
  uVar16 = uVar26 & 0xffff0000 | (uint)uVar30 | 0xfd4a53ed;
  bVar39 = (((ushort)uVar28 | 0x989d) >> (uVar25 & 0xf) & 1) != 0;
  bVar8 = (byte)((uint)uVar12 >> 8);
  bVar5 = bVar8 + 0xb1;
  uVar27 = -(uint)(bVar8 < 0x4f || bVar5 < bVar39);
  uVar16 = (uVar16 & 0xffffff00 | (uint)(byte)(((char)uVar16 - (char)uVar27) - 1)) + 1;
  uVar16 = ((uVar16 & 0xffff0000 | (uint)(ushort)((short)uVar16 * -0x4b2b)) & 0x7fffffae) << 1;
  bVar8 = (byte)uVar16 & 0x1f;
  uVar20 = (((uint)uVar18 & 0x7fff8000) << 1 | (uint)(uVar25 & 0xfbff)) << bVar8 |
           uVar16 >> 0x20 - bVar8;
  uVar26 = (uint)CONCAT21(((ushort)((uint)iVar15 >> 0x11) |
                          (ushort)(((uint)((bVar5 - bVar39 & 1) != 0) << 0x1f) >> 0x10)) >> 1,0xff)
           << 8;
  uVar16 = 0;
  while ((0x15cdd6f0U >> uVar16 & 1) == 0) {
    uVar16 = uVar16 + 1;
  }
  uVar28 = uVar26 & 0xffff0000 | (uint)(ushort)((ushort)uVar26 | 1);
  uVar26 = 0;
  if ((uVar16 & 0xffff0000) != 0) {
    while (((uVar16 & 0xffff0000) >> uVar26 & 1) == 0) {
      uVar26 = uVar26 + 1;
    }
  }
  uVar34 = (uVar20 >> 0x10) << 0x1b;
  uVar25 = (ushort)(uVar20 >> 0x15);
  sVar31 = (short)uVar26 + -0xa3;
  bVar5 = (byte)sVar31 & 0xf;
  uVar12 = 0xff << bVar5 | 0xffU >> 0x10 - bVar5;
  sVar14 = sVar31 * 0x4bfe;
  uVar35 = uVar28 - 1;
  bVar8 = (byte)((uint)uVar12 >> 8);
  uVar30 = (ushort)(sVar14 < 0);
  bVar5 = (byte)uVar12 ^ 0x6f;
  uVar25 = (uVar25 | 1 << (uVar25 & 0xf)) + 1;
  uVar20 = (uint)uVar25;
  uVar19 = uVar34 | uVar20;
  uVar36 = (uint)(ushort)((uVar12 & 0xff | (ushort)(byte)(bVar8 + bVar5) << 8) ^ 0x6f);
  uVar28 = (uVar28 - uVar19) - (uint)CARRY1(bVar8,bVar5);
  uVar16 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8;
  sVar33 = (short)uVar16;
  uVar27 = (uint)(ushort)(sVar31 * -0x6804 & 0xffU | uVar30 |
                         (ushort)(byte)((char)((uint)(ushort)(sVar31 * -0x6804 | uVar30) >> 8) +
                                        -0x46 + (sVar14 < 0)) << 8);
  if ((byte)((char)bVar8 >> ((byte)sVar14 & 0x1f) & (char)(uVar35 >> 8) + 0x42U) == 0) {
    uVar27 = uVar16;
  }
  cVar21 = (char)(uVar28 >> 8) * '\x02' + (0x72 < (byte)uVar28);
  uVar30 = (ushort)(CONCAT12(sVar33 != 0,-sVar33) >> 9) | sVar33 * -0x100;
  if (cVar21 < '\0') {
    uVar30 = CONCAT11(cVar21,(byte)uVar28 + 0x8d);
  }
  iVar15 = (uVar28 & 0xffff0000 | (uint)((ushort)(short)(char)bVar8 >> 8)) -
           (uVar26 & 0xffff0000 | uVar27);
  sVar31 = (short)((uint)((int)(short)uVar30 * -0x2ad5) >> 0x10);
  uVar16 = (uint)(ushort)((uVar25 & 0xff) * (ushort)(byte)iVar15) + 0x212fad42 +
           (uint)(sVar31 != 0 && sVar31 != -1);
  uVar1 = (CONCAT44(iVar15,(int)(uVar16 ^ (uVar16 >> 1 & 1) << 1) >> 0xb) & 0x3fffffffffffffff) /
          (ulonglong)(uVar19 | 0xc0000000);
  uVar16 = (int)(short)uVar1 * (int)(short)uVar27;
  sVar31 = (short)(uVar16 >> 0x10);
  bVar8 = (byte)uVar27;
  bVar5 = (bVar8 & 0x1f) % 9;
  cVar21 = (char)((uVar16 & 0xffff) >> 8);
  uVar34 = uVar34 | 0xc0000000;
  uVar16 = (uVar16 & 0x3fff0000 |
           (uint)CONCAT11((byte)(CONCAT11(sVar31 != 0 && sVar31 != -1,cVar21) >> bVar5) |
                          cVar21 << 9 - bVar5,(char)(uVar16 & 0xffff))) % (uVar20 | 0xc000);
  bVar5 = (bVar8 & 0x1f) % 0x11;
  uVar27 = (uint)((byte)uVar16 < 0x2b) << 0x10 | uVar20 | 0xc000;
  uVar13 = (ushort)(uVar27 >> bVar5) | (ushort)(uVar27 << 0x11 - bVar5);
  uVar25 = CONCAT11(~((byte)(uVar35 >> 0x1c) | (byte)(((uVar35 & 0xffff00ff) << 0xc) >> 8)),
                    (char)(uVar35 >> 0x14)) >> (bVar8 & 0x1f);
  iVar17 = (uVar26 & 0xffff0000 | (uint)CONCAT11((char)(uVar16 >> 8),bVar8)) * -0x2e7d7d37;
  bVar5 = (byte)(iVar17 >> 0x1f);
  uVar16 = (((uVar36 & 0xff00) << 8 | uVar36 << 0x18 | (int)(short)uVar30 * -0x2ad5 & 0xffffU) &
           ~(1 << ((uint)uVar13 & 0x1f))) >> (bVar5 & 0x1f);
  uVar27 = (uVar16 >> (bVar5 & 0x1f) | uVar16 << 0x20 - (bVar5 & 0x1f)) << 1;
  uVar30 = (ushort)uVar27;
  bVar23 = -1 < (char)(bVar5 & (byte)uVar25) | 0xc0;
  lVar3 = (longlong)(int)(uVar19 * -0x87f6e7d) * -0x32f52f03;
  iVar38 = (int)lVar3;
  iVar15 = (int)((ulonglong)lVar3 >> 0x20);
  sVar31 = (short)((uint)iVar17 >> 0x10);
  sVar14 = sVar31 >> 0xf;
  uVar12 = sVar14 << 1 | (ushort)(iVar15 != 0 && iVar15 != -1);
  iVar15 = CONCAT22(sVar31 >> 0x1f,uVar12);
  bVar5 = (byte)uVar12 & 0x1f;
  uVar36 = (uint)(CONCAT14(sVar14 < 0,iVar15) >> bVar5) | iVar15 << 0x21 - bVar5;
  bVar39 = (uVar13 & 1) != 0;
  uVar26 = (uVar34 | (uint)uVar13) >> 1;
  uVar20 = (uint)bVar39 << 0x1f;
  bVar5 = (byte)uVar36;
  bVar8 = bVar5 & 0xf;
  uVar12 = (ushort)uVar26;
  uVar28 = CONCAT22((short)(uVar1 >> 0x10),
                    (CONCAT11((char)(0 % (ushort)bVar23),((uVar34 & 0x80000000) != 0) != bVar39) &
                     0x7fff | 0x8000 | uVar25) << bVar8 | uVar12 >> 0x10 - bVar8) * iVar38;
  uVar16 = 0x1f;
  if (bVar23 != 0) {
    while (bVar23 >> uVar16 == 0) {
      uVar16 = uVar16 - 1;
    }
  }
  uVar18 = (ushort)bVar23;
  uVar25 = (short)uVar16 - uVar18;
  uVar26 = iVar38 - (uVar26 | uVar20);
  bVar9 = (byte)uVar25;
  bVar23 = (byte)((uint)uVar25 >> 8);
  bVar11 = (byte)(uVar28 >> 8);
  uVar6 = (ushort)uVar26;
  uVar19 = (uVar27 & 0xffff0000 | (uint)(ushort)(uVar30 >> 1 | 0x8000)) ^
           (uVar27 >> 0x1b & 1) << 0x1b;
  uVar12 = uVar12 + uVar18;
  uVar35 = ((uVar16 & 0xffff0000 |
            (uint)(ushort)(CONCAT11(bVar23 << (bVar5 & 7) | bVar23 >> 8 - (bVar5 & 7),
                                    bVar9 >> (bVar5 & 7) | bVar9 << 8 - (bVar5 & 7)) |
                          1 << (uVar6 & 0xf))) - uVar19) + 0x59fe15c1;
  uVar13 = (ushort)uVar35;
  uVar25 = uVar30 + uVar13;
  uVar27 = (int)CONCAT11(bVar11 >> 7 | bVar11 << 1,(char)uVar28 + -0x38 + CARRY2(uVar30,uVar13)) *
           (int)(short)uVar18;
  uVar30 = uVar12 & 0xf;
  uVar18 = (ushort)CONCAT31(0x73f3a3,0xcf >> bVar8);
  uVar6 = (uVar6 | 1 << ((ushort)(uVar27 & 0xffff) & 0xf) | 0xa0e7) >> 1 |
          (ushort)((uVar18 >> uVar30 & 1) != 0) << 0xf;
  bVar8 = bVar8 >> 1;
  uVar13 = (ushort)(uVar36 & 0xffffff00);
  uVar28 = ((uVar28 & 0xffff0000 | uVar27 & 0xffff) >> bVar8 |
           CONCAT22(0x73f3,uVar18 & ~(1 << uVar30)) << 0x20 - bVar8) & 0xffff;
  uVar16 = (uint)uVar6 | 0xc000;
  uVar27 = (uVar27 >> 0x10 & 0x3f00 |
           (uint)(byte)((char)(uVar27 >> 0x10) + (char)((uVar36 & 0xffffff00) >> 8))) << 0x10 |
           (uint)(ushort)((ushort)(uVar28 >> bVar8 % 0x11) | (ushort)(uVar28 << 0x11 - bVar8 % 0x11)
                         );
  uVar28 = uVar27 / uVar16 & 0xffff;
  uVar37 = uVar26 & 0xffff0000 | (uint)(ushort)((uVar6 | 0xc000) - uVar25);
  cVar21 = (char)(uVar28 >> 8) + 'O';
  uVar30 = CONCAT11(cVar21,(char)uVar28);
  uVar26 = (uVar34 >> 1 | uVar20 | (uint)uVar12) * -0x4e79b401 - uVar37;
  uVar18 = (ushort)uVar26;
  uVar1 = (ulonglong)CONCAT22((short)cVar21 >> 7,uVar30 >> 7 | uVar30 << 9) *
          (ulonglong)(uVar27 % uVar16 | uVar35 & 0xffff0000);
  uVar12 = (ushort)(uVar1 >> 0x10);
  bVar5 = (char)(uVar1 >> 8) >> ((byte)((uVar13 | (ushort)bVar8) >> 1) & 0x1f);
  uVar30 = CONCAT11(bVar5,(char)uVar1);
  uVar16 = uVar19 & 0xffff0000 | (uint)(ushort)(uVar25 >> bVar8 | uVar18 << 0x10 - bVar8);
  if ((uVar1 & 0xd97e00000000) == 0 || (short)(uVar1 >> 0x20) < 0) {
    uVar16 = CONCAT22(uVar12,uVar30);
  }
  uVar37 = uVar37 + 1;
  uVar20 = (uint)(uVar1 >> 0x20) & 0xffffd900;
  uVar26 = uVar26 & 0xffff0000;
  uVar25 = uVar13 | (ushort)bVar8 & 0xfffe | (ushort)(bVar5 >> 7);
  uVar27 = (uVar37 & 0xffff0000 |
           (uint)(ushort)((ushort)((short)uVar37 << 1) >> (sbyte)uVar25 |
                         uVar25 << 0x10 - (sbyte)uVar25)) << 1;
  uVar13 = (ushort)uVar27 | uVar12 >> 0xf;
  uVar25 = uVar25 + uVar30 + 0x691a + (ushort)(0x96e5 < uVar30);
  uVar34 = uVar36 & 0xffff0000 | (uint)uVar25;
  uVar28 = CONCAT22(uVar12,uVar30 + 0x691a) & 0xffffff00;
  bVar5 = (byte)uVar25 & 0x1f;
  uVar36 = uVar16 >> bVar5 | -0x8f1786a << 0x20 - bVar5;
  uVar16 = uVar34 + 0xa39b03e;
  if (SCARRY4(uVar34,0xa39b03e) != (int)uVar16 < 0) {
    uVar16 = uVar26 | (ushort)(uVar18 << 2 | uVar18 >> 0xe);
  }
  uVar30 = uVar13 + 0xb593;
  sVar31 = CONCAT11(SCARRY2(uVar13,-0x4a6d) == (short)uVar30 < 0,0xff) - (short)uVar16;
  uVar34 = (uint)(byte)((char)uVar16 + 0x60) & 0xffffff0f;
  sVar10 = (sbyte)uVar34;
  uVar25 = uVar30 >> sVar10 | ((ushort)uVar34 | 0x100) << 0x10 - sVar10;
  iVar15 = (int)((ulonglong)
                 ((longlong)
                  (int)(CONCAT31((int3)((int)uVar28 >> 0x27),(char)((int)uVar28 >> 0x1f)) ^ 0xa9) *
                 -0x512c6e6c) >> 0x20);
  bVar39 = iVar15 == 0 || iVar15 == -1;
  uVar28 = ((uint)uVar12 << 0x10) >> 5 | (uint)((uVar18 & 0x3fff) >> 2) << 0x1b;
  uVar12 = (ushort)bVar39;
  uVar1 = (longlong)(int)uVar28 * (longlong)(int)uVar28;
  bVar5 = bVar39 % 0x11;
  uVar30 = uVar12 + 0x8a00;
  uVar30 = (uVar30 & 0xff | (ushort)(0x75ff < uVar12 || uVar30 == 0) << 8) + 1;
  uVar28 = (uint)uVar30 | 0xc000;
  uVar34 = (uint)(ushort)(((ushort)(uint)(uVar1 >> 0x21) & 0x1fff) << 1 | 1) << 0x10 |
           (uint)uVar30 | 0xc000;
  uVar26 = (uVar36 >> 0x17 |
           (uVar36 & 0xffff0000 |
           (uint)(ushort)((-(ushort)(1 < (byte)(uVar20 >> 0x1c)) >> 2 |
                          (((ushort)(uVar20 >> 0x10) | 0x20) >> 4) << 0xe) + uVar25)) << 9) -
           (uVar26 | (ushort)(sVar31 << bVar5 |
                             (ushort)(CONCAT12((uVar1 & 0x100000000) != 0,sVar31) >> 0x11 - bVar5)))
  ;
  uVar12 = (ushort)uVar26;
  uVar30 = (ushort)(uVar34 % uVar28);
  if (0x5ab4 < uVar25) {
    uVar30 = uVar12;
  }
  uVar20 = (uVar26 & 0xffff0000 | (uint)(ushort)(uVar12 + 0x36c4)) + 0x5b581ae4;
  bVar5 = (0x5ab4 < uVar25) + 0x6f;
  iVar15 = ((uVar16 & 0xffff0000 | (uint)CONCAT11(0x33,bVar5)) >> 8) << 9;
  bVar5 = (((char)sVar31 * '\x17' & 0x98U) >> (bVar5 & 0x1f)) - 1;
  iVar17 = (CONCAT22((short)(uVar1 >> 0x10),(short)(uVar34 / uVar28 >> 8)) & 0xffff00ff) * 2 + 1;
  uVar26 = (uVar27 & 0x13ed0000 |
           (uint)(ushort)((uVar30 & 0xff00 | (ushort)(byte)((char)uVar30 + (char)(uVar30 >> 8))) *
                         0x3ca0)) + 0xb855794a;
  uVar16 = iVar17 * 2;
  uVar30 = (ushort)uVar20;
  uVar20 = uVar20 & 0xffff0000 | (uint)(ushort)(uVar30 + 0xac5f);
  uVar27 = CONCAT31((uint3)((uint)iVar15 >> 8) & 0xffff00 |
                    (uint3)(byte)((byte)((uint)iVar15 >> 8) >> 1),(bVar5 & 1) != 0) * 2 +
           (uint)(0x53a1 < uVar30 || 0xfffe < (ushort)(uVar30 + 0xac5e));
  sVar31 = (short)uVar27;
  uVar13 = sVar31 << 1 | (ushort)(sVar31 < 0);
  uVar27 = uVar27 & 0xffff0000;
  lVar3 = (longlong)(int)(uVar16 & 0xffffff00 | (uint)(byte)(((byte)uVar16 | iVar17 < 0) + 1)) *
          0x43839cd0;
  iVar15 = (int)((ulonglong)lVar3 >> 0x20);
  uVar20 = uVar20 << (sbyte)uVar13 |
           (uint)(CONCAT14(iVar15 != 0 && iVar15 != -1,uVar20) >> 0x21 - (sbyte)uVar13);
  uVar18 = (ushort)uVar20;
  uVar30 = (ushort)((uVar18 >> 1 & 1) != 0);
  sVar31 = (short)lVar3 - uVar13;
  uVar12 = sVar31 - uVar30;
  uVar16 = CONCAT22((short)((ulonglong)lVar3 >> 0x10),uVar12);
  if ((SBORROW2((short)lVar3,uVar13) != SBORROW2(sVar31,uVar30)) != ((uVar12 & 0x8000) != 0)) {
    uVar16 = uVar27;
  }
  uVar34 = uVar20 & 0xffff0000 | (uint)(ushort)(uVar18 * 0xbda);
  sVar31 = (short)(uVar26 >> 1) << 1;
  bVar8 = (byte)sVar31;
  uVar30 = (CONCAT11(SCARRY2(uVar25,-0x5ab5) != (short)(uVar25 + 0xa54b) < 0,bVar5) >> 1) >>
           (bVar8 & 0x1f);
  uVar35 = (uint)uVar30 | uVar27;
  uVar36 = uVar26 >> 0x10 | (uint)(ushort)(sVar31 >> (bVar8 & 0x1f)) << 0x10;
  bVar23 = (char)bVar8 >> 1;
  uVar26 = uVar36 - uVar34;
  uVar20 = uVar26 & 0xffff0000;
  bVar8 = (byte)((uint)(ushort)(short)(char)bVar8 >> 8);
  bVar11 = bVar23 & 0xf;
  uVar12 = (ushort)((short)uVar30 >> (bVar23 & 0x1f)) >> bVar11 | uVar30 << 0x10 - bVar11;
  bVar9 = (byte)((int)(uVar16 & 0xffff0000) >> 0x1f) & 1;
  bVar5 = bVar8 + 5;
  cVar21 = bVar5 - bVar9;
  uVar28 = (uint)uVar30;
  if ((bVar8 < 0xfb || bVar5 < bVar9) || cVar21 == '\0') {
    uVar28 = uVar20 | CONCAT11(cVar21,bVar23) & 0xff0f;
  }
  uVar25 = uVar12 >> 1;
  uVar37 = (uint)(CONCAT11(cVar21 >> bVar11,bVar23) & 0xff0f);
  uVar19 = uVar35 << 1;
  uVar35 = uVar19 | (int)uVar35 < 0;
  if ((char)((char)((uint)(ushort)(short)(char)((char)uVar26 + (char)uVar30 + (uVar36 < uVar34)) >>
                   8) << bVar11) == (char)(uVar37 >> 8)) {
    uVar28 = uVar28 & 0xffff0000 | uVar37;
  }
  iVar15 = uVar35 << 1;
  if ((int)uVar35 < 0 == iVar15 < 0) {
    uVar34 = uVar27 | (ushort)(uVar25 | (ushort)((uVar12 & 1) != 0) << 0xf);
  }
  sVar10 = (sbyte)(uVar37 & 0xffffff82);
  uVar26 = uVar28 << sVar10 | uVar34 >> 0x20 - sVar10;
  uVar30 = (ushort)uVar26 >> 1;
  uVar27 = uVar27 | (ushort)(uVar25 & 0xff | (ushort)(uVar30 != 0) << 8);
  uVar30 = uVar30 + 0xca98;
  iVar17 = 0x1f;
  if (uVar27 != 0) {
    while (uVar27 >> iVar17 == 0) {
      iVar17 = iVar17 + -1;
    }
  }
  uVar28 = uVar26 & 0xffff0000 | (uint)(uVar30 ^ uVar30 & 1);
  uVar27 = (uint)((int)uVar28 < 0);
  uVar26 = (uVar20 | uVar37 & 0xffffff82) << 10;
  lVar3 = (longlong)(int)(short)((uVar16 & 0xffff0000) >> 1) * (longlong)(int)(uVar34 & 0xffff0000);
  iVar17 = (int)((ulonglong)lVar3 >> 0x20);
  uVar4 = CONCAT14(iVar17 != 0 && iVar17 != -1,uVar28 << 1 | uVar27) >> 2;
  uVar16 = (uint)uVar4 | uVar27 << 0x1f;
  uVar30 = ((ushort)uVar26 | (ushort)(uVar20 >> 0x16)) + 0x1ce3;
  uVar27 = uVar26 & 0xffff0000 | (uint)uVar30;
  bVar8 = (byte)uVar30;
  bVar5 = bVar8 & 0xf;
  uVar13 = (ushort)((ulonglong)lVar3 >> 0x10);
  uVar34 = CONCAT31((int3)((ulonglong)lVar3 >> 0x28),-(char)((ulonglong)lVar3 >> 0x20)) | 0x89ec3b6;
  bVar8 = bVar8 & 0x1f;
  uVar26 = uVar27 >> bVar8 | uVar27 << 0x20 - bVar8;
  uVar30 = (ushort)uVar26 >> 1;
  uVar26 = uVar26 & 0xffff0000;
  bVar8 = (byte)uVar30;
  bVar23 = bVar8 & 0xf;
  uVar12 = (0U >> bVar5 | 0 << 0x10 - bVar5) >> bVar23 | (short)uVar4 << 0x10 - bVar23;
  bVar8 = bVar8 & 7;
  bVar11 = (byte)(uVar12 >> 8);
  uVar12 = uVar12 & 0xff;
  uVar30 = CONCAT11((byte)((uint)(uVar30 | 0x8000) >> 8) >> bVar23 * '\x02',bVar23 * '\x02' + -0x10)
           >> 7;
  bVar9 = (char)uVar30 - (char)uVar12 & 0xf;
  iVar17 = (~uVar16 & 0x7fff846f) * 2;
  uVar28 = uVar26 | (uint)uVar30 & 0xffffff00 | (uint)(SBORROW4(iVar17,iVar17) == false);
  uVar27 = uVar28 + iVar17;
  uVar16 = uVar16 + 0x11e342d7;
  bVar5 = ((byte)uVar34 >> 3 | (byte)uVar34 << 5) + 0x22;
  bVar23 = (byte)uVar27 & 0x1f;
  uVar20 = uVar27 >> bVar23 | iVar15 << 0x20 - bVar23;
  uVar25 = (ushort)(byte)(CONCAT22(uVar13,(uVar12 | (ushort)(byte)(bVar11 << bVar8 |
                                                                  bVar11 >> 8 - bVar8) << 8) >>
                                          bVar9 | (short)uVar34 << 0x10 - bVar9) >> 1) *
           (ushort)bVar5;
  uVar27 = uVar20 & 0xffff0000;
  uVar20 = uVar20 >> 1 & 0x7fff;
  bVar39 = (uVar25 & 0x400) != 0;
  uVar16 = uVar16 & 0xffff0000 | (uint)(ushort)((short)uVar16 << 1) | 0x269833d7;
  bVar23 = (byte)uVar20;
  uVar30 = (short)uVar20 >> (bVar23 & 0x1f);
  uVar18 = uVar30 & 0xff | (ushort)(byte)((char)((uint)uVar30 >> 8) - 1) << 8;
  uVar26 = (uVar26 | (ushort)((short)uVar28 << 2)) & CONCAT22(uVar13 >> 1,uVar25);
  uVar6 = (ushort)uVar26;
  bVar40 = uVar25 == uVar6;
  uVar12 = uVar6 ^ (ushort)bVar40 * (uVar6 ^ (short)(char)bVar5);
  bVar8 = ((short)(uVar25 - uVar6) < 0) << 7 | bVar40 << 6 | ((uVar25 & 0x1000) != 0) << 4 |
          bVar39 << 2 | 2U | uVar25 < uVar6;
  uVar30 = (uVar25 ^ (ushort)bVar40 * (uVar25 & uVar12)) & 0xff;
  uVar13 = uVar30 | (ushort)bVar8 << 8;
  if (uVar6 < uVar25) {
    uVar12 = uVar18;
  }
  uVar6 = ((ushort)uVar16 >> (bVar23 & 0x1f)) << 1;
  uVar18 = uVar18 & uVar13;
  cVar21 = (char)bVar8 >> 7;
  uVar25 = CONCAT11((char)((uint)(ushort)((short)uVar13 >> 0xf) >> 8) + -0x31,cVar21);
  bVar23 = (byte)uVar30 >> 1;
  bVar11 = ((byte)uVar18 - 0x37) + ((byte)uVar18 < (byte)((uint)uVar18 >> 8));
  uVar28 = uVar27 | (uint)uVar18 & 0xffffff00 | (uint)bVar11;
  bVar11 = bVar11 & 0x1f;
  uVar36 = (uint)((int)(char)bVar5 >> 5) >> bVar11 | ((int)(char)bVar5 >> 5) << 0x20 - bVar11;
  uVar30 = uVar25 << 0xf;
  uVar20 = (uint)(ushort)((ushort)iVar15 >> 1 | uVar30);
  if (((short)(ushort)iVar15 < 0 != (uVar30 != 0)) != (uVar30 != 0)) {
    uVar28 = uVar27 | uVar20;
  }
  bVar5 = (byte)(uVar28 >> 8);
  uVar35 = uVar28 & 0xffff0000 | (uint)CONCAT11(bVar5 >> 1 | bVar5 << 7,(char)uVar28);
  uVar7 = CONCAT21((short)(uVar34 >> 0x10),cVar21);
  uVar27 = uVar26 & 0xffff0000 | 0x1000000;
  uVar36 = (uVar36 & 0xffff0000 | (uint)(ushort)((short)uVar36 + (CONCAT11(bVar8,bVar23) | 0x80)))
           << 1;
  uVar13 = (ushort)(uVar27 >> 0x16);
  uVar34 = uVar35 + 0x471272a8;
  uVar28 = (uint)(ushort)(((short)(char)(bVar23 | 0x80) &
                           ~(ushort)(1 << ((uint)(ushort)(uVar12 + 0x7b36) & 0x1f)) & 0xd1b7) +
                         uVar13) ^ 0x916a;
  uVar19 = ((uVar19 & 0x7fff8000) << 1 | 0x2000000 | uVar20) + 0x72e74598;
  uVar30 = (short)uVar36 << ((byte)uVar34 & 0x1f);
  uVar20 = uVar28 + 0x48a11acb;
  uVar26 = (uint)CONCAT11((char)((uint)(ushort)((short)CONCAT31(uVar7,cVar21 + (char)((uint)uVar25
                                                                                     >> 8)) << 1) >>
                                8) >> ((byte)uVar34 & 0x1f),uVar35 < 0xb8ed8d58 || uVar34 == 0);
  if (SCARRY4(uVar28,0x48a11acb) == (int)uVar20 < 0) {
    uVar26 = (uint)uVar30;
  }
  uVar26 = ((uint)uVar7 & 0xffff00) << 8 | uVar26;
  uVar12 = (ushort)uVar19;
  uVar28 = (uint)(ushort)(uVar12 | 1 << (uVar12 & 0xf));
  uVar35 = (uint)(ushort)~(ushort)uVar34;
  if ((uVar12 >> (uVar12 & 0xf) & 1) == 0 && uVar13 != 0xc07) {
    uVar35 = uVar20 & 0xffff;
  }
  iVar15 = 0x1f;
  uVar22 = 0x1f;
  if (uVar26 != 0) {
    while (uVar22 = (undefined2)iVar15, uVar26 >> iVar15 == 0) {
      iVar15 = iVar15 + -1;
    }
  }
  bVar5 = (byte)((ushort)uVar22 >> 8);
  if (bVar39) {
    uVar26 = uVar28;
  }
  uVar34 = (uVar34 & 0xffff0000 | uVar35) ^ 1 << (uVar35 & 0x1f);
  uVar20 = (uVar19 & 0xffff0000 | uVar28) +
           (uVar36 & 0xffff0000 | (uint)uVar30 & 0xffffb800 | (uint)bVar5);
  uVar18 = uVar6 | 0x8000;
  uVar28 = (uint)uVar18;
  uVar12 = (ushort)((short)uVar6 < 0);
  uVar13 = (ushort)uVar26;
  uVar6 = (ushort)uVar20;
  uVar25 = uVar6 + uVar13;
  if ((ushort)(uVar25 + uVar12) == 0 ||
      (SCARRY2(uVar6,uVar13) != SCARRY2(uVar25,uVar12)) != (short)(uVar25 + uVar12) < 0) {
    uVar34 = uVar34 & 0xffff0000 | uVar26 & 0xffff;
  }
  uVar26 = (uint)(CARRY2(uVar6,uVar13) || CARRY2(uVar25,uVar12)) << 0x10;
  uVar12 = (ushort)(uVar26 >> 9);
  bVar8 = (byte)uVar34 & 7;
  uVar27 = (uint)(ushort)(uVar12 | (ushort)((uVar26 | uVar27 >> 0x16) << 8)) + 0xaf8f63d5;
  uVar26 = (uVar27 & 0xffff0000 | (uint)CONCAT11(-(char)(uVar27 >> 8),(char)uVar27)) + 0x2f2a6f56;
  uVar27 = (uVar16 & 0xffff0000 | uVar28) << 8;
  uVar36 = uVar20 >> 0x18 | uVar27;
  uVar28 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18;
  uVar12 = (uVar12 << 6 | uVar18 >> 10) - 1;
  uVar30 = CONCAT11(0x65,(char)(CONCAT11((char)-(char)((uint)((int)(short)(CONCAT11(0xab,(char)
                                                  uVar22) & 0x8f41 | 0xdd00) *
                                                  (int)(short)(uVar30 & 0xb800 |
                                                              (ushort)(byte)(bVar5 >> bVar8 |
                                                                            bVar5 << 8 - bVar8))) >>
                                                  0x10) < '\x01',((byte)uVar34 & 0xf) + 0x8c) >> 1))
  ;
  uVar16 = uVar26 | 0xe5c57d7b;
  iVar15 = 0;
  if (uVar36 != 0) {
    while ((uVar36 >> iVar15 & 1) == 0) {
      iVar15 = iVar15 + 1;
    }
  }
  bVar5 = (byte)((uint)uVar12 >> 8);
  uVar13 = (ushort)(bVar5 >> 1) << 8;
  uVar19 = (iVar15 - (uVar34 & 0xffff0000 | (uint)uVar30)) - (uint)(bVar5 & 1);
  uVar25 = uVar13 >> 0xb;
  bVar5 = (byte)((uint)(ushort)(uVar25 | (uVar12 & 0xff | uVar13) << 5) >> 8);
  uVar34 = (uint)(((uVar25 | (uVar12 & 7) << 5 | (ushort)(bVar5 >> 1) << 8) << 1 |
                  (ushort)(bVar5 & 1)) & uVar30);
  uVar35 = uVar34 ^ (uint)(uVar16 == uVar34) * (uVar34 ^ uVar28);
  return (uVar16 ^ (uint)(uVar16 == uVar34) * (uVar16 & uVar35)) +
         (uVar19 & 0xffffff00 | (uint)(byte)((char)uVar19 >> 0x1f)) + uVar35 + uVar28 +
         CONCAT22((ushort)(uVar27 >> 0x11) |
                  (ushort)(((uint)((uVar20 & 0x1000000) != 0) << 0x1f) >> 0x10),
                  (short)(uVar36 >> 1) + 0x35a9) + (uint)(ushort)((short)uVar26 >> 0xf) + -0x62a6e9b
  ;
}



// WARNING: Removing unreachable block (ram,0x0804accb)
// WARNING: Removing unreachable block (ram,0x0804ab1e)
// WARNING: Removing unreachable block (ram,0x0804aed6)
// WARNING: Removing unreachable block (ram,0x0804abd7)

int log_size_10_var_002(void)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint5 uVar7;
  byte bVar8;
  ushort uVar9;
  byte bVar13;
  short sVar10;
  uint uVar11;
  char cVar14;
  uint uVar12;
  byte bVar15;
  char cVar16;
  sbyte sVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte bVar21;
  ushort uVar22;
  ushort uVar23;
  undefined2 uVar27;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  ushort uVar31;
  byte bVar34;
  uint uVar32;
  uint3 uVar35;
  int iVar33;
  ushort uVar36;
  uint uVar37;
  ushort uVar38;
  ushort uVar39;
  ushort uVar40;
  short sVar41;
  ushort uVar42;
  uint uVar43;
  bool bVar44;
  bool in_PF;
  bool bVar45;
  
  uVar6 = 0x207e;
  if (in_PF) {
    uVar6 = 0xbbde;
  }
  uVar2 = CONCAT44(0x84c0f5b0,uVar6) & 0x3fff00ffffffffff | 0xc2170000;
  uVar4 = uVar2 % 0xc21742db;
  uVar27 = (undefined2)(uVar4 >> 0x10);
  uVar22 = ~(ushort)uVar4;
  iVar33 = CONCAT22(uVar27,uVar22) * 4 + -0x1e1bfe23;
  bVar15 = (byte)iVar33 & 0x1f;
  uVar18 = iVar33 << bVar15 | 0xff82c754U >> 0x20 - bVar15;
  uVar24 = (int)((CONCAT44(CONCAT22(uVar27,uVar22 & 0xff |
                                           (ushort)(byte)((byte)(uVar22 >> 9) >>
                                                         ((byte)uVar18 & 0x1f)) << 8),
                           (int)(char)((char)(((ushort)(uVar2 / 0xc21742db) & 0x3fff) % 0xdd) >> 2))
                 & 0x3fffffffffffffff) / 0xff82c754) * -0x59ed57a2 & 0xffff;
  cVar14 = (char)(uVar24 >> 8);
  uVar22 = (ushort)uVar24 >> 4;
  bVar15 = ((byte)uVar18 & 0x1f) % 9;
  bVar28 = (byte)(cVar14 >> 7) >> 1;
  uVar9 = (ushort)(short)cVar14 >> 1 & 0xff |
          (ushort)(byte)(bVar28 << bVar15 | bVar28 >> 9 - bVar15) << 8;
  uVar24 = (uint)(ushort)(((short)uVar18 << 1) >> 0xe);
  uVar11 = CONCAT22((undefined2)(cVar14 >> 7),uVar9);
  if (in_PF) {
    uVar11 = 0;
  }
  sVar41 = (short)((uVar24 & 0xfffe | 0xc0) >> 1);
  uVar36 = (ushort)(sVar41 << 1) >> 0xc;
  uVar22 = (uVar22 | 0xb000) >> 7 | uVar22 << 9;
  uVar18 = (uVar18 & 0xffff0000 | (uint)(ushort)(sVar41 << 6 | uVar36)) + 0xe63123bc;
  uVar26 = (uVar11 & 0xffff0000) + 0x3d640000;
  uVar11 = (uint)((ushort)uVar18 & 0x2c4f);
  bVar15 = (byte)uVar18 & 0x1f;
  bVar15 = (byte)(uVar18 << bVar15) | (byte)(uVar18 >> 0x20 - bVar15);
  bVar28 = ((uVar36 & 0x3c) != 0) >> (bVar15 & 0x1f);
  uVar37 = 0x46995ea8 >> (bVar15 & 0x1f);
  uVar36 = (ushort)uVar37 ^ (ushort)bVar28;
  uVar18 = ((((uVar24 & 0xff) - (uint)(uVar9 < 0xdef6)) + -0x7ae02fd0) * 2 + 1) * 0x2230ea55;
  uVar24 = (uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18) +
           0xc30dea0e;
  uVar9 = (ushort)uVar18;
  uVar40 = uVar9 & ~(1 << (uVar36 & 0xf));
  uVar18 = uVar18 & 0xffff0000;
  bVar15 = (uVar36 != 0) % 0x11;
  uVar43 = (uint)(ushort)(uVar22 << bVar15 |
                         (ushort)(CONCAT12((uVar9 >> (uVar36 & 0xf) & 1) != 0,uVar22) >>
                                 0x11 - bVar15)) | 0xc2170000;
  uVar2 = (ulonglong)(uVar24 | 0xc0000000);
  uVar4 = (ulonglong)uVar24 | 0xc0000000;
  uVar3 = uVar4 / uVar2;
  uVar4 = uVar4 % uVar2;
  bVar15 = (byte)(uVar4 >> 8);
  uVar38 = (ushort)(uVar4 >> 0x10);
  uVar9 = (ushort)CONCAT31((int3)(uVar3 >> 8),bVar15);
  uVar23 = (ushort)(bVar15 >> 6) | (short)uVar4 << 2;
  uVar26 = (uint)(byte)((byte)uVar23 | 0x47);
  uVar22 = (ushort)bVar28 | 0x45;
  uVar24 = (CONCAT22(uVar38,uVar23) & 0xffffff00 | uVar26) * 2 +
           ((uVar37 & 0xffff0000 | (uint)(ushort)(uVar36 - 1)) << (uVar36 != 0) | 0x8ac1);
  uVar39 = (ushort)((uVar18 | uVar40) >> 1);
  uVar31 = uVar22 ^ (ushort)(uVar9 == uVar22) * (uVar22 ^ uVar39);
  uVar9 = uVar9 ^ (ushort)(uVar9 == uVar22) * (uVar9 & uVar31);
  uVar22 = uVar9 & 0xff;
  uVar36 = uVar22 | (ushort)(byte)(uVar24 >> 8) << 8;
  uVar37 = uVar24 & 0xffff0000 | (uint)(ushort)(uVar9 & 0xff00 | (ushort)(byte)uVar24);
  uVar9 = (ushort)(uVar18 >> 0x11);
  sVar41 = (short)uVar39 >> 1;
  uVar12 = CONCAT22(uVar9,sVar41);
  uVar24 = (uint)((uVar40 & 2) != 0);
  uVar11 = uVar37 - uVar12;
  uVar25 = uVar11 - uVar24;
  uVar18 = (uint)uVar23 & 0xff00 | uVar26 & 0xffffffbf | (uint)uVar38 << 0x10;
  if ((uVar37 < uVar12 || uVar11 < uVar24) || uVar25 == 0) {
    uVar18 = uVar12;
  }
  bVar8 = (byte)uVar25;
  bVar28 = bVar8 + 0x16;
  uVar23 = uVar31 & 0xff | (ushort)(byte)((uint)uVar31 >> 8) << 8;
  if ((SCARRY1(bVar8,'\x16') != SCARRY1(bVar28,'\0')) == (char)bVar28 < '\0') {
    uVar23 = uVar36;
  }
  uVar24 = (uint)(byte)((char)(bVar15 * 'v') >> 1) << 0x1b;
  if (bVar8 >= 0xea) {
    uVar24 = uVar12;
  }
  bVar15 = ((byte)uVar24 & 0x1f) % 0x11;
  uVar26 = CONCAT22(uVar9,(ushort)(CONCAT12(bVar8 < 0xea,sVar41) >> bVar15) |
                          sVar41 << 0x11 - bVar15);
  bVar15 = (byte)uVar22;
  uVar11 = CONCAT22((short)(uVar3 >> 0x10),uVar36) & 0xffffff00 |
           (uint)(byte)(bVar15 >> 1 | bVar15 << 7);
  if (-0xa39 < (short)((ushort)(uVar43 << 1) | (ushort)((int)uVar43 < 0))) {
    uVar11 = (uint)uVar23 << 1;
  }
  uVar11 = (int)uVar11 >> ((byte)uVar24 & 0x1f);
  uVar25 = (uVar25 & 0xffff0000 | (uint)bVar28) ^ (((uint)uVar23 << 1) >> 0x10 | uVar26 << 0x10);
  uVar37 = (uint)(CONCAT14(0x91a8ee6e < uVar25,uVar24) >> 0xe);
  bVar15 = (byte)uVar37 & 0x1f;
  uVar43 = uVar26 >> bVar15 | uVar26 << 0x20 - bVar15;
  uVar26 = uVar43;
  if (((uVar37 | uVar24 << 0x13) &
      (uVar11 & 0xffff0000 | (uint)CONCAT11((char)(uVar11 >> 8) + '\x01',(char)uVar11))) != 0) {
    uVar26 = (int)(char)(uVar25 + 0x6e571191 >> 8);
  }
  iVar33 = 0x1f;
  if (uVar43 != 0) {
    while (uVar43 >> iVar33 == 0) {
      iVar33 = iVar33 + -1;
    }
  }
  bVar15 = (byte)(uVar43 >> 8);
  uVar24 = (uVar43 & 0xffff0000 |
           (uint)CONCAT11(bVar15 ^ ((byte)((char)uVar11 * (char)((uint)iVar33 >> 8)) >> 4 == bVar15)
                                   * (bVar15 ^ (byte)(iVar33 + -1)),(char)uVar43)) + 0x66eb3987;
  sVar41 = (short)(iVar33 + -1);
  uVar22 = (short)uVar24 >> 0x12;
  uVar37 = uVar24 & 0xffff0000 | (uint)uVar22;
  uVar24 = (uVar26 & 0xffff0000 | (uint)(ushort)((short)uVar26 + -1 + sVar41)) + 0x57 +
           (((uVar18 & 0xffff0000 | (uint)(ushort)((short)uVar18 + (short)uVar43)) << 1 | 1) << 1 |
           1) * 4;
  cVar14 = (char)uVar24;
  uVar11 = 0x1f;
  if (uVar37 != 0) {
    while (uVar37 >> uVar11 == 0) {
      uVar11 = uVar11 - 1;
    }
  }
  uVar26 = (uVar24 & 0xffff0000 |
           (uint)(ushort)(((ushort)(byte)-cVar14 | 0x5000) + 0xa254 + (ushort)(cVar14 != '\0'))) +
           0x3f619590;
  uVar36 = sVar41 * -2;
  uVar22 = uVar22 * 2 + 0x7bfe;
  bVar15 = (byte)uVar11;
  iVar19 = CONCAT22((short)((uVar43 & 0xffff0000) >> 0x10),0x6356);
  cVar14 = (char)uVar36;
  uVar38 = SEXT12(cVar14);
  uVar24 = CONCAT22((undefined2)(cVar14 >> 7),uVar38) & 0xfffffeff;
  lVar5 = (longlong)iVar19 * -0x7c399b85;
  iVar33 = (int)((ulonglong)lVar5 >> 0x20);
  uVar37 = iVar19 + uVar24 + (uint)(iVar33 != 0 && iVar33 != -1);
  uVar9 = (CONCAT11(bVar15,bVar15) ^ ((ushort)bVar15 & 0x10) << 8) & ~(1 << ((ushort)uVar26 & 0xf))
          | uVar22;
  uVar36 = uVar36 & uVar9;
  bVar15 = (byte)uVar36 & 0xf;
  uVar23 = (ushort)uVar37;
  uVar23 = uVar23 << bVar15 | uVar23 >> 0x10 - bVar15;
  uVar18 = ((uVar11 & 0xffff0000 | (uint)(ushort)(uVar9 - uVar36)) + 0x30be22f7) -
           (uint)((uVar22 >> (((short)(uVar24 >> 2) - ((ushort)lVar5 | 1 << (uVar38 & 0xf))) -
                              (ushort)((uVar38 & 2) != 0) & 0xf) & 1) != 0);
  uVar24 = (int)(short)uVar18 *
           (int)(short)((ushort)uVar26 & 0xff00 | (ushort)(byte)((char)uVar26 + 0xd));
  uVar11 = uVar24 & 0xffff;
  uVar22 = (ushort)(uVar24 >> 0x10);
  uVar31 = (short)uVar11 + 0xf14 + uVar22 * 8;
  bVar8 = (byte)(uVar11 >> 8);
  lVar5 = (longlong)(int)(uVar37 & 0xffff0000 | (uint)uVar23) * 0x2ddd3979;
  iVar33 = (int)((ulonglong)lVar5 >> 0x20);
  uVar38 = (ushort)((ulonglong)lVar5 >> 0x10);
  bVar29 = (byte)lVar5;
  bVar34 = (char)((ulonglong)lVar5 >> 8) + bVar8 + ((int)uVar24 < 0);
  bVar28 = (byte)uVar11;
  bVar13 = bVar8 ^ (bVar28 == bVar8) * (bVar8 ^ bVar34);
  bVar15 = bVar28 ^ (bVar28 == bVar8) * (bVar28 & bVar13);
  uVar24 = uVar18 & 0xffff0000 | (uint)CONCAT11(bVar13,bVar28) & 0xffffff00 | (uint)bVar15;
  uVar9 = uVar31;
  uVar36 = 0x8000;
  if (bVar8 > bVar28) {
    uVar9 = CONCAT11(bVar34,bVar29);
    uVar36 = uVar38;
  }
  uVar22 = (uVar22 & 0x7f) << 1;
  uVar18 = uVar26 & 0xffff0000 | (uint)(ushort)(uVar22 | (ushort)(bVar8 <= bVar28) << 8);
  uVar11 = 0x1f;
  if (uVar18 != 0) {
    while (uVar18 >> uVar11 == 0) {
      uVar11 = uVar11 - 1;
    }
  }
  bVar28 = ((byte)uVar23 | 0xeb) + (char)uVar31 + (iVar33 != 0 && iVar33 != -1) >> 2;
  if (uVar24 < 0x93cee832) {
    bVar28 = bVar15;
  }
  uVar9 = uVar9 >> 1;
  bVar8 = (byte)(~uVar24 << 1) | -1 < (int)uVar24;
  bVar21 = (byte)uVar22 & (byte)uVar9;
  bVar13 = bVar8 + 0x7e;
  bVar15 = (byte)((~uVar24 << 1) >> 8);
  if ((char)bVar13 < '\0') {
    bVar28 = (byte)uVar9;
  }
  bVar1 = bVar21 + 0x57;
  bVar28 = (bVar28 - bVar21) - (bVar8 < 0x82) & 7;
  bVar21 = bVar13 | 0x40;
  uVar24 = (uVar11 ^ 1 << ((uint)CONCAT11(bVar34,bVar29) & 0x1f)) + CONCAT22(uVar36,uVar9);
  bVar8 = (byte)((uint)uVar9 >> 8);
  bVar30 = bVar21 ^ (bVar29 == bVar21) * (bVar21 ^ bVar8);
  uVar11 = CONCAT22(uVar38,CONCAT11(bVar15 << bVar28 | bVar15 >> 8 - bVar28,bVar13)) & 0xffffff00;
  uVar23 = CONCAT11(bVar34,bVar29 ^ (bVar29 == bVar21) * (bVar29 & bVar30));
  uVar38 = (ushort)(((uVar24 & 0xff00) << 8) >> 0x10) | (ushort)(uVar24 * 0x1000000 >> 0x10);
  uVar37 = CONCAT22(uVar36,uVar9) >> 1 & 0xffff |
           (uint)(ushort)(uVar36 >> 1 | (ushort)(((uint)((uVar9 & 1) != 0) << 0x1f) >> 0x10)) <<
           0x10;
  bVar8 = bVar1 + bVar8;
  uVar18 = (uint)(ushort)(uVar9 & 0xff | (ushort)bVar1 << 8);
  bVar28 = (byte)(uVar11 >> 8);
  cVar14 = bVar8 + bVar28;
  bVar15 = cVar14 + 1;
  uVar26 = uVar26 & 0xffff0000 | (uint)bVar15;
  uVar22 = (ushort)uVar11 | (ushort)bVar30;
  if ((CARRY1(bVar8,bVar28) || cVar14 == -1) || bVar15 == 0) {
    uVar22 = uVar23;
  }
  uVar22 = uVar22 + 0xb08e;
  if (SCARRY4(uVar26,uVar37) != SCARRY4(uVar26 + uVar37,1)) {
    uVar22 = uVar23;
  }
  bVar8 = (byte)(uVar18 >> 8);
  uVar22 = uVar22 & 0xff00 | (ushort)((byte)uVar22 & bVar8);
  bVar15 = (byte)(uVar9 & 0xff);
  bVar28 = bVar15 & 0xf;
  uVar9 = uVar22 >> bVar28 | uVar22 << 0x10 - bVar28;
  uVar22 = (short)(uVar37 * -0x5d0c5b86) + 0x4a72;
  uVar36 = (((ushort)(uVar24 >> 0x18) | (ushort)(uVar24 >> 8) & 0xff00) >> 6) << 10 | uVar22 >> 6;
  sVar41 = (uVar22 & 0xff) * (ushort)bVar8;
  bVar15 = bVar15 & 0x1f;
  uVar24 = uVar18 << bVar15 |
           (uint)(CONCAT14((char)((ushort)sVar41 >> 8) != '\0',uVar18) >> 0x21 - bVar15);
  bVar15 = (byte)((short)uVar36 >> 0x13);
  bVar28 = ((uVar36 | 0x2bc9) != 0) + bVar15;
  cVar14 = (char)(((uVar24 & 0xff00) >> 1) >> 8);
  uVar24 = ((uint)((uint3)(uVar24 >> 8) & 0xffff00) |
           (uint)(byte)(cVar14 << 6 | cVar14 - 0x24U >> 3)) * 0x100;
  bVar8 = bVar28 * '\b' | bVar28 >> 5;
  uVar11 = (CONCAT22(uVar38,uVar36) | 0x2bc9) >> 1;
  sVar10 = ((short)CONCAT31(CONCAT21(uVar38,(char)((ushort)bVar15 * (ushort)bVar28 >> 8) + '\v'),
                            -1 < (char)((bVar8 & ~(byte)(1 << ((uint)bVar8 & 0x1f)) & 0xe0) + 0x49))
           + -0x2db2) - (ushort)(uVar24 < 0xdf984e3e);
  uVar18 = uVar24 + 0x2067b1c2 & 0xffff0000;
  bVar28 = (byte)sVar10;
  bVar15 = (bVar28 == 0x40) * -0x41;
  bVar8 = bVar15 ^ 0x40;
  lVar5 = (ulonglong)
          (CONCAT22(uVar38,sVar10) & 0xffffff00 |
          (uint)(byte)(bVar28 ^ (bVar28 == 0x40) * (bVar28 & bVar8))) *
          (ulonglong)(uVar11 | 0x80000000);
  uVar24 = 0x1f;
  if (uVar18 != 0) {
    while (uVar18 >> uVar24 == 0) {
      uVar24 = uVar24 - 1;
    }
  }
  bVar28 = (byte)uVar24 & 0x1f;
  uVar26 = (uint)lVar5 >> bVar28 | CONCAT22(0x4f9d,(ushort)bVar8 << 8 | 0xff) << 0x20 - bVar28;
  uVar22 = (short)uVar11 << 1;
  uVar11 = (int)((uint)(ushort)(0x2db2 - (short)lVar5) | 0x25030000) >> ((byte)uVar24 & 0x1f);
  bVar8 = (byte)uVar26;
  uVar25 = uVar11 & 0xffff0000 |
           (uint)(ushort)((short)uVar11 + ((ushort)((ulonglong)lVar5 >> 0x20) & 0xe33d) +
                         (ushort)(0x23 < bVar8 || 0xfe < (byte)(bVar8 - 0x24)));
  bVar28 = ((byte)(uVar24 ^ 0x5ae9) & 0x1f) % 0x11;
  uVar35 = (uint3)(ushort)(CONCAT11((uVar22 & 0x200) != 0,bVar15) ^ 0x40) << 8 | 0xff;
  uVar36 = (short)uVar35 << bVar28 | (ushort)(uVar35 >> 0x11 - bVar28);
  uVar11 = uVar25 << 1;
  uVar37 = uVar37 * -0x5d0c5b86 & 0xffff0000 |
           (uint)(ushort)(((short)(char)(((char)sVar41 - ((byte)(uVar9 << 1) | (byte)(uVar9 >> 0xf))
                                         ) + -1) & 0xff00U) >> 6 | 0xc800);
  uVar22 = (uVar22 | 1) ^ uVar22 & 0x200 ^ 0xd3f3;
  uVar9 = (ushort)(uVar24 >> 0x11);
  cVar16 = (char)((uVar24 ^ 0x5ae9) >> 1);
  uVar36 = uVar36 ^ (uVar36 >> 4 & 1) << 4;
  bVar44 = 0x6e3ba1bf < uVar37 || 0xfffffffe < uVar37 + 0x91c45e40;
  uVar18 = (uVar26 & 0xffff0000) >> 0xf;
  cVar14 = (char)(uVar18 >> 8) + '<';
  bVar15 = (byte)((CONCAT22(uVar9,CONCAT11((uVar22 != 0) + 0x11U |
                                           (byte)((uint)(ushort)((short)((ushort)(uVar26 & 
                                                  0xffffff00) | (ushort)(byte)(bVar8 - 0x23)) >> 0xf
                                                  ) >> 8),cVar16)) & 0xffffff00 |
                  (uint)(byte)(cVar16 << 1 | bVar44)) >> 1);
  uVar22 = uVar22 >> 1;
  uVar23 = uVar22 | (ushort)bVar44 << 0xf;
  uVar24 = uVar37 + 0x91c45e41 & 0xffff0000;
  uVar37 = uVar24 | uVar37 + 0x91c45e41 >> 1 & 0x7fff;
  iVar33 = 0;
  if (uVar37 != 0) {
    while ((uVar37 >> iVar33 & 1) == 0) {
      iVar33 = iVar33 + 1;
    }
  }
  bVar28 = (bVar15 & 0x1f) % 9;
  bVar28 = (byte)(CONCAT11(uVar23 < 0xfd45,cVar14) >> bVar28) | cVar14 << 9 - bVar28;
  uVar23 = CONCAT11((short)uVar23 < -0x2ba,bVar15) + 0x67ee;
  uVar38 = (ushort)(uVar37 >> 1);
  uVar37 = uVar37 >> 1 & 0xffff;
  uVar43 = (CONCAT22(0x4f9d,uVar36) & 0x7fff8000) << 1 | uVar37;
  uVar31 = (ushort)uVar37;
  bVar15 = (byte)((uint)uVar23 >> 8);
  uVar39 = (ushort)(uVar24 >> 0x11);
  uVar40 = uVar38 - 1;
  uVar24 = (uint)(((ushort)uVar11 | (ushort)((int)uVar25 < 0) | uVar31) & uVar38);
  if ((short)uVar38 < 1) {
    uVar24 = (uint)uVar23;
  }
  uVar24 = uVar11 & 0xffff0000 | uVar24;
  iVar33 = uVar43 << 1;
  uVar11 = (uVar18 & 0xffff0000 |
            (uint)CONCAT11(-1 < (char)uVar36,(char)((uVar26 & 0xffffff00) >> 8) >> 2) << 0x12 |
           (uint)CONCAT11(CARRY1(bVar28,bVar15) || 0xfe < (byte)(bVar28 + bVar15),(char)uVar18)) +
           0xd11142b3;
  uVar26 = (uVar11 & 0xffff0000 | (uint)(ushort)(short)(char)uVar11) ^ 0xbcd86e5e;
  uVar36 = CONCAT11(uVar26 == 0,(char)uVar26) * -0x7e23;
  uVar37 = CONCAT31((uint3)(byte)(uVar36 >> 8),0x78);
  iVar19 = CONCAT22(uVar9,uVar23 * 2 | (uVar22 << 7 | uVar31) >> 0xf);
  uVar18 = CONCAT22(uVar39,uVar40) >> 1;
  uVar11 = uVar24 - iVar19;
  if (SBORROW4(uVar24,iVar19) == false) {
    iVar19 = 0;
  }
  uVar24 = CONCAT31((uint3)((uint)iVar33 >> 8) & 0xffff00 |
                    (uint3)(byte)((byte)(((ushort)iVar33 | (ushort)((int)uVar43 < 0)) + 0x8dc >> 8)
                                 & (byte)(uVar40 >> 8)),(int)uVar11 < 0);
  if (-1 < (short)((short)uVar37 + -0x1cf1)) {
    uVar24 = uVar37;
  }
  uVar31 = (ushort)uVar18;
  uVar42 = (ushort)uVar11 | uVar31;
  uVar22 = uVar36 & 0xff00 | (ushort)(uVar24 >> 8) & 0xff;
  uVar18 = (uVar18 | 0x80000000) >> 1;
  bVar28 = (byte)uVar18;
  bVar15 = bVar28 & 7;
  uVar37 = uVar37 | 1 << (((uint)uVar40 & 0x3e) >> 1);
  uVar32 = (uVar24 & 0xffff0000 | (uint)CONCAT11('x' << bVar15 | 0x78U >> 8 - bVar15,(char)uVar24))
           - 1;
  uVar23 = (ushort)uVar32 >> 1 | (ushort)((uVar32 & 1) != 0) << 0xf;
  lVar5 = (longlong)
          (int)(uVar26 & 0xffff0000 | (uint)(ushort)(uVar22 << 1 | (ushort)((short)uVar22 < 0))) *
          (longlong)(int)uVar37;
  uVar24 = (uint)((ulonglong)lVar5 >> 0x20);
  bVar28 = bVar28 & 0x1f;
  uVar24 = uVar24 << bVar28 | uVar24 >> 0x20 - bVar28;
  uVar22 = (ushort)lVar5 ^ ((ushort)lVar5 >> 8 & 1) << 8;
  uVar20 = (iVar19 << 0x1f | uVar18) + 0x4a0972df + (uint)((uVar23 >> (uVar22 & 0xf) & 1) != 0);
  uVar26 = CONCAT22((short)((ulonglong)lVar5 >> 0x10),uVar22) << 7;
  uVar26 = uVar26 ^ (uVar26 >> 0xc & 1) << 0xc;
  uVar37 = uVar37 - (uVar24 & 0xffff0000 |
                    (uint)CONCAT11((byte)(uVar24 >> 8) & (byte)uVar24,(byte)uVar24));
  uVar9 = (ushort)uVar26;
  uVar38 = (ushort)uVar37;
  uVar18 = (uint)(ushort)(uVar38 >> 8 | uVar38 << 8);
  uVar24 = (uint)(ushort)((uVar31 + uVar22 ^ 0xc5e) - (uVar42 + 0xc052));
  uVar43 = uVar26 & 0xffff0000 | (uint)(ushort)(uVar9 >> 0xd | uVar9 << 3);
  uVar12 = uVar43 ^ 1 << (uVar18 & 0x1f);
  uVar26 = uVar12 & 0xffff0000;
  uVar25 = (uVar32 & 0xffff0000 | (uint)(ushort)((uVar23 ^ 1 << (uVar22 & 0xf)) << 5)) >> 9 & 0xffff
  ;
  uVar43 = (uVar11 & 0xffff0000 |
           (uint)(ushort)(uVar42 + 0x94b5 + (ushort)((uVar43 >> (uVar18 & 0x1f) & 1) != 0))) +
           0x5117d28a;
  uVar11 = (uVar12 & 0xffff | (uVar32 >> 0x19) << 0x10) + 0x6a6f93d0;
  if ((uVar36 & 0x400) != 0) {
    uVar11 = uVar26 | uVar25;
  }
  uVar36 = (ushort)uVar43 | 1 << ((short)uVar9 >> 0xf & 0xfU);
  uVar35 = ((uint3)(uVar11 >> 8) & 0xff00) >> 8 | (uint3)uVar11 & 0xff00 |
           (uint3)((uVar11 << 0x18) >> 8);
  uVar12 = (uVar20 & 0xffff0000 | (uint)(ushort)((short)uVar20 * -0x7684)) * 2 +
           (uint)(((uVar37 & 0xffff0000 | uVar18) >> (uVar18 & 0x1f) & 1) != 0);
  uVar9 = CONCAT11(uVar12 != 0,(byte)uVar12);
  uVar37 = (uint)uVar9;
  uVar20 = uVar12 & 0xffff0000 | uVar37;
  uVar18 = (int)(short)((ushort)(uVar26 >> 0x18) | (ushort)(uVar26 >> 8)) * (int)(short)uVar9;
  uVar25 = uVar18 & 0xffff |
           (uint)(ushort)((ushort)((((uint)CONCAT11((char)(uVar25 >> 8) >> 1,(char)uVar25) & 0xff00)
                                   << 8) >> 0x10) |
                         (ushort)(((uint)(byte)(CONCAT11((uVar36 >> 10 & 1) != 0,(char)uVar25) >> 1)
                                  << 0x18) >> 0x10)) << 0x10;
  uVar32 = ((((uint)uVar39 & 0xfffe) << 0x10) >> 1 | 0x80000000 | uVar24) * -0x4936a473;
  uVar26 = uVar25 << 1;
  uVar22 = (ushort)((int)uVar25 < 0);
  uVar25 = CONCAT31(uVar35,(byte)(uVar11 >> 0x1b));
  uVar22 = ((ushort)uVar26 | uVar22) ^ uVar22;
  uVar26 = uVar26 & 0xffff0000;
  uVar11 = (uVar43 & 0xffff0000 | (uint)(uVar36 | 0x400)) * 0x3af6552 >> 1;
  uVar24 = uVar24 * -0x80000000;
  uVar43 = uVar11 | uVar24;
  if (uVar24 == 0) {
    uVar25 = CONCAT22((short)(uVar35 >> 8),
                      (ushort)(uVar18 >> 0x10) & 0xff00 |
                      (ushort)(byte)((char)(uVar18 >> 0x10) - (char)(uVar37 >> 8)));
  }
  uVar24 = uVar26 | (ushort)(uVar22 << 0xc | (ushort)(CONCAT12(uVar20 < 0xb136d5,uVar22) >> 5));
  uVar18 = (int)uVar24 >> 0x1f;
  bVar15 = (byte)uVar12 & 0x1f;
  bVar44 = (uVar22 & 0x8000) != 0;
  if (bVar44) {
    uVar24 = uVar26 | uVar37;
  }
  uVar26 = 0;
  if (uVar43 != 0) {
    while ((uVar43 >> uVar26 & 1) == 0) {
      uVar26 = uVar26 + 1;
    }
  }
  uVar36 = (ushort)uVar11 & 0xfeff;
  uVar26 = (uVar26 | 1 << (uVar32 & 0x1f)) & 0xfff7ffff;
  bVar45 = ((uVar18 << bVar15 | uVar18 >> 0x20 - bVar15) & 0x6600) == 0;
  uVar11 = CONCAT31((uint3)(uVar20 >> 8) & 0xffff00 | (uint3)(byte)(uVar9 + 0x7c89 >> 8),bVar45);
  uVar18 = (uVar25 & 0xffff0000 |
           (uint)CONCAT11((byte)(uVar25 >> 8) | (byte)uVar25,(byte)uVar25) & 0xffffb061) & uVar26;
  lVar5 = (longlong)
          (int)(uVar24 & 0xffff0000 |
               (uint)CONCAT11((char)(uVar24 >> 8) << 1 | CARRY4(uVar11,uVar26),(char)uVar24)) *
          (longlong)(int)uVar11;
  uVar24 = (uint)((ulonglong)lVar5 >> 0x20);
  uVar9 = (ushort)uVar32 + 0x2bb6;
  uVar22 = (ushort)((ulonglong)lVar5 >> 0x10);
  if (0xd449 < (ushort)uVar32 || uVar9 == 0) {
    uVar22 = (ushort)(uVar18 >> 0x10);
  }
  iVar33 = uVar18 + 0xaca1a70a;
  if (-1 < iVar33) {
    uVar24 = CONCAT22((short)((ulonglong)lVar5 >> 0x30),uVar9);
  }
  bVar15 = ((bVar45 + (char)uVar26) - (char)lVar5) - 1U & 7;
  uVar24 = uVar24 & 0xffffff00 | (uint)(byte)((byte)uVar24 << bVar15 | (byte)uVar24 >> 8 - bVar15) |
           0x20000000;
  uVar11 = (uVar32 & 0xffff0000 | (uint)uVar9) >> 1;
  uVar18 = uVar11 - uVar24;
  if ((int)uVar24 <= (int)uVar11) {
    uVar24 = ((iVar33 * 0x20000 ^ 0xce00U) & 0x7fff8000) << 1;
  }
  uVar26 = uVar18 * 3 + 0x7537dac & 0xffff;
  uVar11 = 0x1eb93619 - (uVar26 | (uint)uVar22 << 0x10);
  bVar8 = (byte)uVar11;
  uVar37 = uVar18 & 0xffff0000 | (uint)(ushort)((ushort)uVar18 >> 1 | uVar36 * -0x8000);
  uVar38 = (ushort)uVar26;
  uVar23 = (ushort)((uVar38 >> 2 & 1) != 0) + 0xb5f3;
  bVar15 = (byte)uVar23;
  bVar28 = bVar15 + 0x91;
  uVar9 = uVar36 + (ushort)uVar18 * 2;
  if (0x6e < bVar15 || bVar28 == 0) {
    uVar9 = uVar38;
  }
  uVar26 = ((uint)uVar23 & 0xffffff00 | 0x50000000 | (uint)bVar28) >> 1;
  iVar33 = CONCAT22(0x2800,(ushort)(byte)uVar26 * (ushort)(byte)(uVar26 >> 8));
  uVar26 = uVar37 >> 0xf;
  lVar5 = (longlong)iVar33 * (longlong)iVar33;
  iVar33 = (int)((ulonglong)lVar5 >> 0x20);
  if (iVar33 != 0 && iVar33 != -1) {
    uVar37 = uVar18 & 0xffff0000 |
             (uint)(byte)((char)(((uVar24 & 0xffff0000) >> 2) >> 8) + 0x1f) << 8;
  }
  uVar36 = (ushort)((uVar18 & 0xff800000) >> 0xf) | (ushort)(byte)-(char)uVar26;
  sVar41 = uVar36 + 0xb687;
  uVar35 = (uint3)((((uVar11 & 0xffffff00 |
                     (uint)(byte)(bVar8 >> (bVar8 & 7) | bVar8 << 8 - (bVar8 & 7))) >> 1) << 0x11)
                  >> 8) | (uint3)((uVar18 & 0xff800000) >> 0x17) & 0xffff00;
  bVar15 = (byte)((ushort)sVar41 >> 8);
  uVar11 = CONCAT31(uVar35 | bVar15,!bVar44);
  if ((SBORROW2(uVar36,0x4979) != false) == sVar41 < 0) {
    uVar11 = uVar11 & 0xffff | (uint)(ushort)(uVar35 >> 8) << 0x10;
  }
  uVar26 = (uVar26 & 0xffff) >> (sbyte)uVar11;
  uVar36 = (ushort)uVar26;
  uVar26 = uVar26 & 0xffff0000;
  uVar18 = uVar37 & 0xffff0000 |
           (uint)(ushort)(((short)uVar37 << 1 | uVar9 * 0xebb >> 0xf) * -0x58da);
  uVar37 = (uint)(ushort)((short)uVar11 << 1) & 0xffffff00;
  uVar18 = 0x545efc38 -
           (uVar11 & 0xffff0000 | uVar37 |
           (uint)(0 < (short)((ushort)(uVar18 << 1) | (ushort)((int)uVar18 < 0))));
  bVar28 = (char)(uVar37 >> 8) - 1;
  iVar33 = (uVar18 & 0xffff) * (uint)bVar28 * 0x100;
  uVar35 = (uint3)(uVar18 >> 8) & 0xffff00;
  uVar18 = (uint)uVar22 << 0x10 & 0xfbff0000;
  sVar41 = (ushort)bVar15 - (short)((uint)iVar33 >> 0x10);
  cVar14 = (char)((uint)iVar33 >> 0x10);
  iVar19 = CONCAT22((ushort)(uVar24 >> 0x13),sVar41 * 2 | (ushort)(sVar41 < 0));
  uVar25 = (iVar19 * 9 + 0xfc) - (uVar26 | 0x7400) >> 4;
  uVar24 = (int)(short)CONCAT31(uVar35 | (uint3)((uint)iVar33 >> 8) & 0xff,0xcd) * 0x7400;
  uVar37 = ~(((((uint)(uint3)((ulonglong)lVar5 >> 0x28) & 0xffff00) << 8 |
              (uint)(ushort)((uVar36 >> 0xb | (uVar36 & 7) << 5) * 2 + 1)) &
             ~(1 << ((uint)(ushort)bVar15 & 0x1f))) * 0x4ca33a08 & 0xffff0000 |
             (uint)CONCAT11((char)((uint)iVar33 >> 0x18) << 1,cVar14) & 0xffffff00 | 0x100 |
            (uint)(byte)(cVar14 - 0x34));
  if (-1 < (int)(iVar19 + uVar18 + 1)) {
    uVar37 = uVar18;
  }
  uVar43 = uVar25 ^ 1 << (uVar37 & 0x1f);
  uVar22 = (short)uVar25 + 0x76c8;
  uVar18 = (uVar24 & 0xffff | (uint)(ushort)(uVar35 >> 8) << 0x10) >> 1;
  if (!(bool)((bVar28 ^ 0x5f) & 1)) {
    uVar22 = (ushort)uVar43;
    uVar18 = uVar37;
  }
  uVar25 = uVar43 & 0xffff | 0xc000;
  uVar24 = (uVar24 >> 0x10 & 0x3f00 | (uint)(byte)-(char)(uVar24 >> 0x10)) << 0x10 | uVar18 & 0xffff
  ;
  uVar24 = ((uVar24 % uVar25 & 0x3fff) << 0x10 | uVar24 / uVar25 & 0xffff) / (uint)(uVar22 | 0xc000)
           & 0xffff;
  uVar25 = uVar18 & 0xffff0000 | uVar24 | uVar37;
  uVar18 = (uint)(byte)((char)(uVar25 >> 8) * '\x02') << 8;
  uVar22 = (ushort)(uVar25 == 0) | 4 |
           (ushort)(byte)((char)((uint)(ushort)((ushort)uVar37 & 0xff00 | (ushort)(uVar25 == 0) | 4)
                                >> 8) + 0x5a) << 8;
  uVar12 = uVar37 & 0xffff0000 | (uint)uVar22;
  uVar37 = (uVar43 | 0xc000) * -0x48f87aeb & 0xffff0000;
  uVar11 = uVar11 & 0xffff0000;
  if (((uVar25 & 0xffff0000 | uVar18) & 0xbc610570) != 0) {
    uVar11 = uVar37 | (uint)(ushort)(uVar22 * 0x3dc5);
  }
  uVar9 = (ushort)uVar11;
  uVar36 = (ushort)(uVar43 | 0xc000) ^ 1 << (uVar9 & 0xf);
  uVar9 = uVar9 ^ (uVar9 >> 6 & 1) << 6;
  bVar15 = (byte)uVar9 & 0xf;
  uVar38 = uVar36 >> bVar15 | uVar36 << 0x10 - bVar15;
  uVar18 = (uVar18 & 0x570) * (uint)uVar9;
  uVar36 = uVar9 >> 1 & 0x57ff;
  bVar15 = (byte)(((uint3)(uVar12 >> 0x10) | (uint3)(((uint)uVar22 << 0x18) >> 8)) >> 0xd) | 0xc0;
  uVar9 = (ushort)uVar18 & 0x3fff;
  uVar12 = (uVar12 >> 8) << 0x13 | (uint)CONCAT11(~bVar15,(short)uVar36 < (short)uVar38);
  uVar25 = (uint)(ushort)(uVar22 * 0x3dc5) & 0x1f;
  uVar9 = ((uVar9 / (ushort)bVar15 & 0xff | uVar9 % (ushort)bVar15 << 8) + uVar22 * -0x3dc5) -
          (ushort)((uVar12 >> uVar25 & 1) != 0);
  uVar23 = (ushort)((uVar26 | uVar18 >> 0x10) >> 1);
  sVar41 = uVar23 + 0x2698;
  uVar18 = (uint)(uint3)((uint3)(uVar12 >> 8) & ~(uint3)((uint)(1 << uVar25) >> 8)) << 8;
  if (uVar23 < 0xd968 && sVar41 != 0) {
    uVar18 = uVar43 & 0xffff0000 | (uint)uVar38;
  }
  uVar26 = (uint)(ushort)(uVar36 - uVar38) & 0xffffff0f;
  bVar8 = (byte)uVar26;
  uVar36 = CONCAT11(-100 - (char)(uVar26 >> 8),bVar8);
  bVar28 = (byte)(uVar18 >> 8);
  uVar7 = CONCAT14((ushort)(uVar22 * 0x66c6) < 0x83c2,
                   uVar43 & 0xffff0000 | (uint)(ushort)(uVar38 * 2 + 1)) ^ 0xa31d;
  uVar26 = (uint)(ushort)(uVar9 & 0xff | (ushort)(byte)((char)((uint)uVar9 >> 8) + 0x8c) << 8) *
           (uint)(ushort)((short)uVar24 + 0x5e82U >> bVar8 | sVar41 << 0x10 - bVar8);
  bVar15 = (byte)(uVar26 >> 0x10);
  uVar24 = CONCAT22((ushort)((uint)((int)uVar7 << 0x1a) >> 0x10) | (ushort)((uVar7 >> 7) >> 0x10),
                    uVar36 + 0x43);
  cVar14 = (char)((ushort)sVar41 >> 8);
  uVar24 = uVar24 << bVar8 | uVar24 >> 0x20 - bVar8;
  uVar25 = uVar11 & 0xffff0000 | (uint)uVar36 & 0xffffff00 | (uint)bVar28;
  uVar22 = (ushort)(uVar26 >> 0x10) & 0xff00 | (ushort)(byte)(bVar15 - bVar28);
  if ((char)(bVar28 + bVar8) < '\0') {
    uVar22 = (ushort)uVar24;
  }
  uVar18 = ((uVar18 & 0xffff0000 |
            (uint)CONCAT11(bVar28 + bVar8,
                           (byte)(CONCAT11(bVar15 < bVar28,cVar14) >> bVar8 % 9) |
                           cVar14 << 9 - bVar8 % 9)) << 1 | uVar18 >> 0x1f) << (bVar28 & 0x1f) |
           uVar25 >> 0x20 - (bVar28 & 0x1f);
  uVar9 = (short)(char)(uVar26 >> 1) * (short)(char)uVar22;
  bVar15 = (bVar28 & 0x1f) % 9;
  uVar36 = (short)uVar25 * -0x25fa;
  bVar28 = (byte)uVar36;
  bVar15 = ((byte)((uVar22 >> 8) >> bVar15) | (byte)((uVar22 >> 8) << 9 - bVar15)) & bVar28;
  uVar37 = (uVar37 | (ushort)(uVar9 & 0xff |
                              (ushort)(byte)(((char)bVar15 < '\0') << 7 | (bVar15 == 0) << 6 |
                                             (((((char)uVar18 - (char)(uVar18 >> 8) & 0xfU) -
                                               ((byte)((uint)(ushort)(uVar9 & 0xff |
                                                                     (ushort)(byte)((byte)((uint)
                                                  uVar9 >> 8) & (byte)uVar9) << 8) >> 8) & 0xf)) - 1
                                              & 0x10) != 0) << 4 | bVar44 << 2) << 8 | 0x200)) + 1;
  bVar15 = bVar28 >> (bVar28 & 7) | bVar28 << 8 - (bVar28 & 7);
  uVar26 = (uint)uVar36 & 0xffffff00;
  iVar33 = (uint)(ushort)(((ushort)uVar37 & 0xff00 | (ushort)(byte)((char)uVar37 + 0x10)) + 0x9d +
                         ((ushort)uVar26 | (ushort)bVar15)) * -0x16975fd;
  uVar18 = (uint)(ushort)((short)iVar33 * 0x4799);
  bVar28 = ((char)(uVar26 >> 8) - bVar15) - 1;
  uVar22 = (ushort)(bVar28 >> 3);
  uVar23 = ((ushort)bVar15 & 7) << 5 | uVar22;
  uVar18 = (uVar18 << 0x11 |
           (uint)(CONCAT14((char)iVar33 < '\0',uVar37 & 0xffff0000 | uVar18) >> 0x10)) << 5;
  lVar5 = (ulonglong)
          (uVar18 & 0xffff0000 | (uint)(ushort)((short)uVar18 << 1 | (ushort)uVar24 >> 0xf)) *
          (ulonglong)uVar24;
  uVar24 = uVar24 + 0xbee265a1;
  uVar36 = (ushort)((ulonglong)lVar5 >> 0x20);
  uVar9 = uVar36 >> 1;
  uVar36 = uVar36 << 0xf;
  uVar31 = (ushort)((ulonglong)lVar5 >> 0x30);
  uVar38 = uVar9 | uVar36;
  uVar26 = (uVar24 & ~(1 << ((uint)uVar38 & 0x1f))) << 1;
  uVar37 = (uint)CONCAT11((char)((uVar24 & 0xffff) >> 8) << 1,(char)(uVar24 & 0xffff)) +
           CONCAT22(uVar31,uVar38) + 1;
  uVar22 = (CONCAT11(~(((int)((ulonglong)lVar5 >> 0x20) != 0) + (char)((ulonglong)lVar5 >> 8)),
                     (char)((uVar11 & 0xffff0000 |
                            (uint)(ushort)(uVar23 | (ushort)(byte)((char)((uint)(ushort)(uVar23 | (
                                                  ushort)(byte)((uint)(ushort)(CONCAT11(bVar28,
                                                  bVar15) << 5 | uVar22) >> 8) << 8) >> 8) + 0x6a)
                                                  << 8)) >> 1)) + -1) * 2;
  uVar9 = ((short)uVar26 - (uVar9 & 0xff00 | uVar36 | (ushort)(-1 < (short)uVar22))) - 1;
  uVar18 = ((int)((uint)lVar5 >> 0x13) >> 8) * ((uint)uVar38 & 0xff00 | (uint)(-1 < (short)uVar22));
  uVar26 = (uVar26 & 0xffff0000 | (uint)uVar9) >> 1;
  uVar25 = uVar26 | 0x80000000;
  uVar36 = (ushort)uVar26;
  uVar26 = (uint)(ushort)((short)uVar37 << 1 | uVar36 >> 0xf);
  uVar11 = ((uVar11 & 0xfffe0000) >> 1 | (uint)uVar22 & 0xffffff00 |
           (uint)(byte)(((char)uVar22 + -0x5d) - (uVar9 < 0x885a))) + uVar25;
  iVar33 = 0;
  uVar22 = 0;
  if (uVar11 != 0) {
    while (uVar22 = (ushort)iVar33, (uVar11 >> iVar33 & 1) == 0) {
      iVar33 = iVar33 + 1;
    }
  }
  if ((uVar18 & 0xffff) == 0) {
    uVar22 = 0;
  }
  iVar33 = (uVar18 & 0xffff) * (uVar37 >> 0x11 | (uVar26 & 1) << 0xf);
  uVar9 = (short)uVar24 * 0x304a + uVar36 * 8 + 0xd0ef;
  uVar11 = uVar11 * 8;
  uVar22 = (short)(char)((uint)(ushort)(((ushort)iVar33 | 1 << (uVar22 & 0xf)) >> 2) >> 8) << 1;
  uVar18 = (uint)uVar22 << 0xc;
  uVar24 = 0x1f;
  if (uVar25 != 0) {
    while (uVar25 >> uVar24 == 0) {
      uVar24 = uVar24 - 1;
    }
  }
  uVar25 = (uint)(ushort)(((ushort)uVar11 ^ ((ushort)uVar11 >> 0xd & 1) << 0xd) + 1) & 0xffffff0f;
  uVar36 = (ushort)uVar18;
  sVar17 = (sbyte)uVar25;
  uVar25 = (uint)(ushort)(uVar36 >> sVar17 | ((ushort)uVar25 | uVar36) << 0x10 - sVar17);
  bVar15 = (byte)((uint)iVar33 >> 0x10);
  iVar19 = 0x1f;
  if (uVar24 != 0) {
    while (uVar24 >> iVar19 == 0) {
      iVar19 = iVar19 + -1;
    }
  }
  uVar43 = (uint)CONCAT11(0 >> (bVar15 & 0x1f),bVar15);
  uVar12 = uVar11 & 0xffff0000 | uVar18 & 0xffff0000 | uVar43;
  uVar37 = ((uVar37 & 0xffff0000 | uVar26) & 0x1fffe) << 0xf |
           (uint)(ushort)((uVar9 & 0xff00 | (ushort)(byte)((char)uVar9 << 1)) + 0x198a) | 0xc0000000
  ;
  uVar2 = CONCAT44((((uint)uVar22 & 0xffff0) << 0xc) >> 8 | (uVar25 & 0xff00) << 8 |
                   (uVar25 & 0x3f) << 0x18,
                   CONCAT22((short)((int)((uint)uVar31 << 0x17) >> 0x11),
                            CONCAT11((byte)((uint)iVar33 >> 0x1f),
                                     (bVar15 + sVar17) * '\x04' | bVar15 + sVar17 >> 6)));
  uVar18 = (uint)(uVar2 / (ulonglong)uVar37);
  uVar2 = uVar2 % (ulonglong)uVar37;
  sVar41 = (short)uVar2 << 1;
  bVar28 = (byte)sVar41 | (byte)(uVar2 >> 8) >> 7;
  uVar9 = CONCAT11(~(byte)((ushort)sVar41 >> 8),bVar28 >> (bVar15 & 7) | bVar28 << 8 - (bVar15 & 7))
  ;
  uVar26 = uVar18 ^ (uint)(uVar18 == uVar12) * (uVar18 & uVar12);
  uVar22 = uVar9 - 0x7e0;
  sVar41 = uVar22 - (uVar18 < uVar12);
  if ((uVar9 < 0x7e0 || uVar22 < (uVar18 < uVar12)) || sVar41 == 0) {
    uVar26 = uVar26 & 0xffff0000 | uVar43;
  }
  return uVar26 + uVar37 * 2 + uVar12 + CONCAT22((short)(uVar2 >> 0x10),sVar41) + iVar19 +
         ((uVar24 & 0xffff0000 | uVar24 >> 1 & 0x7fff) ^ uVar24 >> 1 & 2) +
         ((uVar11 + 0xd9beaf4b) * 2 & 0xffff0000 |
         (uint)(ushort)(-(ushort)((int)uVar37 < 0) >> 1 | (ushort)((int)uVar37 < 0) * -0x8000)) +
         -0x7d3ed738;
}



// WARNING: Removing unreachable block (ram,0x0804b777)
// WARNING: Removing unreachable block (ram,0x0804bcea)
// WARNING: Removing unreachable block (ram,0x0804b77f)
// WARNING: Removing unreachable block (ram,0x0804b804)

int log_size_10_var_003(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint3 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  sbyte sVar9;
  uint uVar10;
  int iVar11;
  uint3 uVar12;
  byte bVar13;
  short sVar14;
  ushort uVar15;
  ushort uVar16;
  byte bVar21;
  char cVar22;
  ushort uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ushort uVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  ushort uVar34;
  short sVar35;
  uint uVar36;
  ushort uVar37;
  bool bVar38;
  bool in_PF;
  bool bVar39;
  bool bVar40;
  
  iVar6 = 0x7f;
  if (!in_PF) {
    iVar6 = -1;
  }
  uVar16 = 0;
  if (SBORROW4(iVar6,iVar6) == false) {
    uVar16 = 0xffff;
  }
  sVar14 = (short)((uint)((int)(short)uVar16 * -0x18c7) >> 0x10);
  uVar15 = (ushort)((int)(short)uVar16 * -0x18c7);
  uVar30 = (ushort)(uVar15 == 0xff84) * (uVar15 ^ 0xff84) ^ 0xff84;
  uVar26 = (uint)(ushort)(uVar16 & 0xff | (ushort)(byte)((sVar14 != 0 && sVar14 != -1) << 1) << 8);
  uVar18 = uVar26 | 0x100;
  uVar10 = (uint)uVar30 | 0xffff0000;
  if (uVar18 == 0 || SCARRY4(uVar18,uVar18) != false) {
    uVar10 = 0;
  }
  uVar15 = (ushort)((short)((uVar15 ^ (ushort)(uVar15 == 0xff84) * (uVar15 & uVar30)) + 0x12be) >>
                   0xd) >> 1;
  bVar13 = (byte)((uint)uVar15 >> 8);
  bVar23 = bVar13 << 2;
  bVar39 = (bVar23 & 4) != 0;
  uVar18 = uVar10 & 0xffff0000 | (uint)CONCAT11((char)(uVar10 >> 8) << 1,(char)uVar10) | 0x9dbbee71;
  bVar8 = (byte)(uVar18 >> 8);
  uVar10 = 0xafa37ad2;
  uVar26 = (uVar26 | 0x80000100) - 1;
  bVar25 = (byte)uVar26;
  uVar31 = uVar26 & 0xffffff00 | (uint)(byte)(bVar25 >> 2 | bVar25 << 6);
  uVar26 = SEXT24((short)(((uint)(ushort)(uVar15 & 0xff | (ushort)(byte)(bVar23 | bVar13 >> 6) << 8)
                          | 0xf370000) >> 1));
  uVar27 = uVar31 ^ (uint)(uVar26 == uVar31) * (uVar31 ^ uVar26);
  uVar26 = uVar26 ^ (uint)(uVar26 == uVar31) * (uVar26 & uVar27);
  uVar16 = (short)uVar27 << 2;
  if ((uVar16 & 0x7a00) == 0) {
    uVar10 = uVar26 & 0xffff | 0xafa30000;
  }
  uVar30 = (uVar16 >> 8 & 0x7a) * 0x100 + 1;
  uVar16 = 4;
  if (-1 < (short)uVar30) {
    uVar16 = uVar30;
  }
  bVar23 = (byte)uVar30 ^ (byte)(uVar30 >> 8);
  uVar36 = uVar10 & 0xffff0000;
  uVar31 = (uVar27 & 0xffff0000 | (uint)uVar30 & 0xffffff00 | (uint)bVar23) + uVar26;
  uVar30 = CONCAT11((byte)(uVar10 >> 8) & bVar23,(char)uVar10) * 2;
  cVar5 = (char)((uint)uVar30 >> 8);
  uVar1 = (ulonglong)(uVar36 | (uint)uVar30 | 0xc0000000);
  uVar2 = CONCAT44((((uVar18 & 0xffff0000 | (uint)CONCAT11(bVar8 << 2 | bVar8 >> 7,(char)uVar18)) +
                     0x3a18a492 + (uint)((uVar15 & 1) != 0) & 0xffff0000 |
                    (uint)(ushort)((short)uVar26 >> 0xf)) & 0xfffeff00 |
                   (uint)(byte)((((char)(uVar26 >> 8) >> 7) + -0x52) - ((uVar26 >> 0xc & 1) != 0)))
                   + 0xed87b7c6 & 0xffff0000 | (uint)(ushort)(short)cVar5,
                   uVar26 & 0xffff0000 | (uint)(ushort)(short)(char)uVar26) & 0x3fffffffffffffff;
  iVar6 = (int)(uVar2 / uVar1);
  uVar2 = uVar2 % uVar1;
  uVar19 = iVar6 >> 0x1f;
  uVar27 = iVar6 << 1;
  uVar10 = (uint)CONCAT11((char)uVar27,(char)(uVar31 >> 1));
  uVar18 = (uint)(CONCAT14(0xe6555cd9 < uVar19,uVar31 & 0xffff0000 | uVar10) >> 0xc);
  uVar31 = (CONCAT22((short)(uVar2 >> 0x10),CONCAT11((byte)(uVar2 >> 8) >> 1,(char)uVar2)) >>
           ((byte)uVar30 & 0x1f)) - 0xff8c | uVar27;
  sVar14 = (short)uVar31;
  uVar26 = (int)(short)((ushort)uVar27 & 0xff00 | (ushort)(byte)((char)uVar27 - 0xd)) * (int)sVar14;
  uVar12 = (uint3)(uVar19 + 0x19aaa326 >> 8) & 0xffff00;
  uVar15 = (short)CONCAT31(uVar12 | (byte)((byte)((uint)uVar16 >> 8) >> 1),(uVar16 & 1) == 0) * 2;
  lVar3 = (longlong)(int)(uVar27 & 0xffff0000 | uVar26 & 0xffd3) *
          (longlong)CONCAT22((short)(uVar12 >> 8),uVar15 + 0x650e);
  iVar6 = (int)((ulonglong)lVar3 >> 0x20);
  uVar19 = (uVar31 & 0xffff0000 | (uint)(ushort)(sVar14 + uVar16 + (short)(uVar26 >> 0x10))) >> 1 |
           (uint)(iVar6 != 0 && iVar6 != -1) << 0x1f;
  bVar40 = SBORROW4(uVar19,1);
  uVar19 = uVar19 - 1;
  bVar13 = (byte)(uVar30 & 0xff);
  bVar23 = (bVar13 & 0x1f) % 9;
  bVar23 = (byte)lVar3 << bVar23 | (byte)lVar3 >> 9 - bVar23;
  uVar31 = CONCAT31((int3)((ulonglong)lVar3 >> 8),bVar23);
  bVar38 = (char)bVar13 < '\0';
  bVar8 = bVar13 << 1 | bVar38;
  uVar27 = uVar36 | 0xc0000000 |
           (uint)(ushort)(uVar30 & 0xff | (ushort)(byte)(cVar5 << ((byte)uVar30 & 0x1f)) << 8) &
           0xffffff00 | (uint)bVar8;
  uVar26 = (uint)uVar15;
  if (bVar38 == (char)bVar8 < '\0') {
    uVar26 = uVar27;
  }
  if (!bVar38) {
    uVar19 = uVar19 & 0xffff0000 | uVar18 & 0xff00 | (uint)bVar40;
  }
  uVar20 = CONCAT22((short)((ulonglong)lVar3 >> 0x30),(ushort)(0x961c0809 < uVar27) * -2);
  bVar13 = bVar13 << 1 & 0x1f | bVar38;
  uVar20 = uVar20 >> bVar13 | uVar20 << 0x20 - bVar13;
  uVar16 = (ushort)uVar31;
  uVar15 = ((short)uVar27 + 1U ^ (ushort)uVar18 & 0xff00) >> 1 | uVar16 << 0xf;
  sVar14 = uVar15 + (ushort)uVar20;
  uVar27 = uVar27 + 0x69e3f7f6;
  if ((CARRY2(uVar15,(ushort)uVar20) || sVar14 == -1) || sVar14 == -1) {
    uVar27 = uVar31;
  }
  uVar26 = uVar26 & ~(1 << ((uint)bVar23 & 0x1f));
  uVar27 = uVar27 & 0xffff0000;
  uVar10 = ((uVar10 << 0x15 | uVar18 & 0xffff0000 | (uint)CONCAT11(bVar39,bVar40) & 0xffffff00) +
           0x7216d9c4) - (uint)(uVar27 != 0);
  bVar23 = (byte)uVar20 | 0xc0;
  iVar6 = -uVar27;
  if (-1 < (char)bVar23) {
    iVar6 = uVar19 + uVar27;
  }
  uVar15 = CONCAT11(~(byte)(uVar20 >> 8),(byte)uVar20) | 0xc0;
  uVar20 = uVar20 & 0xffff0000;
  uVar29 = CONCAT22((short)((ulonglong)lVar3 >> 0x10),
                    (uVar16 & 0x3fff) / (ushort)bVar23 & 0xff | (ushort)(-0x2849def4 < iVar6) << 8);
  uVar30 = (ushort)uVar10;
  uVar31 = uVar26 & 0xffff0000;
  uVar18 = iVar6 + 0xf13b0204;
  uVar27 = (uVar19 + uVar27) - 1;
  bVar13 = (byte)((uint)uVar15 >> 8);
  uVar10 = uVar10 & 0xffff0000;
  uVar19 = ((uVar18 ^ (uint)(uVar29 == uVar18) * (uVar18 ^ uVar27)) >> 1) - (uVar10 | uVar30 >> 0xf)
  ;
  uVar34 = (short)((uVar31 | (ushort)((ushort)uVar26 >> 1 | uVar30 << 0xf)) >> 1) + 0x8784;
  uVar18 = CONCAT22((ushort)(uVar31 >> 0x11) | (ushort)(((uint)(uVar29 < uVar18) << 0x1f) >> 0x10),
                    uVar34);
  uVar16 = (ushort)(uVar19 >> 1);
  bVar23 = bVar13 & 0x1f;
  uVar31 = uVar18 + 0xcbb346b8;
  uVar26 = uVar10 | uVar30 >> 0xf;
  if (0x344cb947 < uVar18) {
    uVar26 = uVar20;
  }
  uVar10 = ((uVar36 | 0xc0001500) ^ (uVar20 | CONCAT11((char)uVar15 + -0x6d,bVar13))) << bVar23 |
           uVar27 >> 0x20 - bVar23;
  if (0x344cb947 >= uVar18 || uVar31 == 0) {
    uVar10 = uVar31;
  }
  uVar15 = (ushort)uVar31 << 1 | (ushort)uVar31 >> 0xf;
  uVar36 = (uint)(ushort)(uVar16 & 0x7fff ^ 1 << (uVar16 & 0xf));
  uVar18 = (int)(short)((uVar34 & 0xff) * (uVar34 & 0xff) ^ 0x6d) * (int)(short)uVar15;
  uVar16 = (ushort)(uVar18 >> 0x10);
  uVar18 = uVar18 & 0xffff;
  if (uVar16 == 0 || uVar16 == 0xffff) {
    uVar10 = uVar10 & 0xffff0000 | (uint)uVar16;
  }
  uVar28 = uVar36 & 0x1f;
  uVar29 = 1 << uVar28;
  uVar7 = uVar18 ^ uVar29;
  uVar10 = uVar10 * 2 + (uint)((uVar18 >> uVar28 & 1) != 0);
  uVar18 = uVar27 * 2 + 0xd53fb0b6;
  if (0x2ac04f49 < uVar27 * 2 || uVar18 == 0) {
    uVar7 = uVar29 & 0xffff0000 | uVar26 & 0xff;
  }
  lVar3 = (ulonglong)uVar7 * (ulonglong)(uVar20 | uVar16);
  bVar23 = (byte)((ulonglong)lVar3 >> 8);
  uVar12 = (uint3)((ulonglong)lVar3 >> 8);
  uVar20 = (uint)(uVar12 >> 0x10) | (uint)uVar12 & 0xff00 | ((uint)uVar12 & 0xff) << 0x10 |
           (uint)((byte)lVar3 <= bVar23 || (byte)((byte)lVar3 - bVar23) == '\x01') << 0x18;
  uVar29 = CONCAT22((short)(uVar26 >> 0x10),0xe4fb);
  uVar16 = CONCAT11(-(char)(uVar10 >> 8),(char)uVar10) + 1;
  uVar26 = ((uVar31 & 0xffff0000 | (uint)uVar15) & 0x7fff8000) << 1;
  uVar31 = (uint)(ushort)((short)uVar18 * 0x333a);
  uVar7 = uVar26 | uVar31;
  uVar28 = uVar29 ^ (uint)(uVar20 == uVar29) * (uVar29 ^ uVar20);
  uVar27 = uVar19 & 0xffff0000 | uVar36;
  if (uVar29 <= uVar20) {
    uVar27 = uVar7;
  }
  bVar23 = (byte)uVar16 | (byte)((ulonglong)lVar3 >> 0x20);
  bVar13 = (byte)(uVar28 >> 8);
  uVar15 = CONCAT11(bVar13 >> 1 | bVar13 << 7,(char)uVar28);
  uVar19 = uVar28 & 0xffff0000 | (uint)uVar15;
  uVar36 = 0x1f;
  if (uVar19 != 0) {
    while (uVar19 >> uVar36 == 0) {
      uVar36 = uVar36 - 1;
    }
  }
  uVar19 = uVar36 & 0xffff | 0xc000;
  uVar20 = ((uint)((ulonglong)lVar3 >> 0x20) & 0x3fff) << 0x10 | uVar36 & 0xffff | 0xc000;
  uVar29 = (uint)(ushort)((short)uVar27 >> (bVar23 & 0x1f));
  uVar27 = uVar27 & 0xffff0000 | uVar29;
  uVar18 = ((uVar18 & 0xdfff0000 | (uint)((short)uVar18 + 1U & 0xfff7)) >> 0xc | uVar31 << 0x14) <<
           1;
  uVar31 = (uVar10 & 0xffff0000 | (uint)uVar16 & 0xffffff00 | (uint)bVar23) + 0x6901a0e1;
  uVar16 = SEXT12((char)(uVar20 / uVar19));
  uVar10 = uVar36 & 0xffff0000 | (uint)(ushort)((uVar16 & 0xff) * (uVar16 & 0xff));
  uVar16 = (ushort)uVar18 >> 1;
  uVar18 = uVar18 & 0xffff0000;
  if (!bVar39) {
    uVar7 = uVar26 | uVar29;
  }
  uVar15 = uVar15 << 6 |
           (ushort)((uVar20 % uVar19 | (uint)(ushort)((ulonglong)lVar3 >> 0x30) << 0x10) >> 2) >> 10
  ;
  uVar26 = 0;
  if (uVar31 != 0) {
    while ((uVar31 >> uVar26 & 1) == 0) {
      uVar26 = uVar26 + 1;
    }
  }
  bVar13 = (byte)uVar26;
  bVar23 = (byte)uVar7 | bVar13;
  bVar8 = ((char)uVar15 - bVar23) - 1;
  uVar31 = uVar28 & 0xffff0000 | (uint)uVar15 & 0xffffff00 | (uint)bVar8;
  if (bVar8 == 0) {
    uVar31 = uVar7 & 0xffff0000 | (uint)CONCAT11(bVar23 != 0,bVar23);
  }
  uVar36 = (int)uVar10 >> (bVar13 & 0x1f);
  lVar3 = (ulonglong)
          (uVar29 ^ (uint)(uVar29 == uVar31) *
                    (uVar29 & (uVar31 ^ (uint)(uVar29 == uVar31) * (uVar31 ^ uVar10)))) *
          (ulonglong)(uVar18 | uVar16);
  uVar34 = (ushort)uVar36;
  uVar15 = uVar34 << 7;
  uVar30 = (short)lVar3 >> 1 & 0xffU | (ushort)(byte)~((char)((ulonglong)lVar3 >> 8) >> 1) << 8;
  uVar19 = uVar27 >> (bVar13 & 0x1f) | uVar27 << 0x20 - (bVar13 & 0x1f);
  uVar18 = uVar18 | (uVar16 | 0x800);
  uVar31 = CONCAT22((short)((ulonglong)lVar3 >> 0x10),uVar30) | 1 << (uVar19 & 0x1f);
  bVar23 = (char)uVar31 + 0x5b;
  uVar27 = uVar31 & 0xffffff00 | (uint)bVar23;
  iVar6 = (uint)(ushort)((short)((ulonglong)lVar3 >> 0x20) << (bVar13 & 0x1f) & 0xffU |
                        (ushort)((uVar30 & (ushort)uVar19) != 0) << 8) << 1;
  uVar10 = 0x1f;
  if (uVar27 != 0) {
    while (uVar27 >> uVar10 == 0) {
      uVar10 = uVar10 - 1;
    }
  }
  uVar16 = (short)iVar6 >> 1;
  uVar27 = uVar18 + 0xd3faf8ad;
  if (uVar27 != 0) {
    uVar27 = uVar27 & 0xffff0000 | (uint)uVar16;
  }
  uVar30 = (ushort)(uVar31 & 0xffffff00) | (ushort)(bVar23 & 0x7f) | (ushort)uVar10;
  uVar20 = uVar31 & 0xffff0000 | (uint)uVar30;
  bVar39 = 0 < (short)uVar30;
  bVar23 = bVar39 >> bVar39 | bVar39 << 8 - bVar39;
  uVar29 = uVar10 >> (bVar23 & 0x1f) | uVar20 << 0x20 - (bVar23 & 0x1f);
  uVar15 = uVar15 >> 0xe | (uVar15 | uVar34 >> 9) << 2;
  uVar27 = uVar27 >> (bVar23 & 0x1f) | uVar27 << 0x20 - (bVar23 & 0x1f);
  uVar10 = uVar29 << 10;
  if ((uVar29 >> 0x16 | uVar10) <= uVar19) {
    uVar20 = uVar31 & 0xffff0000 | (uint)uVar16;
  }
  uVar29 = uVar20 << 1 | uVar10 >> 0x1f;
  uVar31 = (uVar20 << 1 & 0xffff0000 | (uint)(ushort)((short)uVar29 + 0x2b28)) << 1;
  uVar36 = uVar36 & 0xffff0000 | (uint)(ushort)(uVar15 + 0xbbbe);
  uVar26 = CONCAT31((uint3)(((ulonglong)(uVar26 | 0xc000) << 6) >> 8) & 0xffff00 |
                    (uint3)(uVar18 >> 8) & 0xff,bVar23);
  if (uVar15 < 0x4442) {
    uVar26 = uVar19;
  }
  bVar23 = (byte)uVar31 >> 1 | (byte)(uVar10 >> 0x18) & 0x80;
  uVar16 = (ushort)uVar31 & 0xff00;
  sVar9 = (sbyte)(uVar26 & 0xffffff0f);
  uVar15 = (short)(ushort)uVar19 >> 1;
  uVar18 = (uVar19 & 0xffff0000 | (uint)uVar15) -
           ((int)(uVar27 & 0xffff0000 |
                 (uint)(ushort)((short)uVar27 * 2 + (ushort)((int)uVar20 < 0))) >> 0x1f);
  uVar28 = uVar31 & 0xffff0000 | (uint)(ushort)(~(uVar16 | bVar23 >> 1) | 1 << (uVar15 & 0xf));
  iVar11 = (int)(uVar26 & 0xffff0000 |
                (uint)(ushort)((short)(uVar26 & 0xffffff0f) << sVar9 |
                              (uVar16 | bVar23) >> 0x10 - sVar9)) >> 7;
  uVar31 = uVar36 << 7;
  uVar7 = (int)(uVar28 << 1) >> ((byte)iVar11 & 0x1f);
  uVar10 = (int)(short)uVar7 *
           (int)(short)(CONCAT11((char)((uint)iVar6 >> 8) >> 1,(int)uVar20 >= 0 && uVar29 != 0) * 2
                       + -0x65e6);
  uVar27 = uVar10 & 0xffff;
  uVar15 = (ushort)uVar27;
  uVar30 = (ushort)iVar11;
  uVar16 = uVar30 - uVar15;
  uVar34 = (ushort)((int)(uVar26 & 0xffff0000) >> 0x17);
  uVar26 = ((uVar10 >> 0x10 & 0xff) << 0x10 | uVar27) / ((uint)uVar16 | 0xc000) & 0xffff;
  uVar10 = uVar31 & 0xffff0000;
  lVar3 = (longlong)(int)(uVar7 & 0xffff0000 | uVar26) *
          (longlong)
          (int)(uVar10 | (ushort)((short)((ushort)(CONCAT14((int)uVar28 < 0,uVar36) >> 0x1a) |
                                         (ushort)uVar31) >> 1));
  uVar30 = CONCAT11((char)uVar16,uVar30 < uVar15) + 1;
  iVar6 = ((uint)lVar3 & 0xffff) * (uint)uVar30;
  uVar18 = (uVar18 & 0xffff0000 | (uint)(ushort)((short)uVar18 + (short)uVar26)) + 0x12736d7a;
  uVar15 = ~(uVar16 | 0xc000);
  uVar16 = (ushort)((uVar19 & 0xffff0000) >> 0x10) &
           ~(ushort)((uint)(1 << ((uint)uVar15 & 0x1f)) >> 0x10);
  uVar31 = CONCAT31((int3)(CONCAT22(uVar34,uVar15) >> 8),99);
  sVar14 = ((ushort)((uint)iVar6 >> 0x10) & 0xff |
           (ushort)(byte)((byte)((uint)iVar6 >> 0x18) | 99) << 8) - (uVar15 + uVar30 + -0x77ff);
  uVar27 = CONCAT22((short)((ulonglong)lVar3 >> 0x30),sVar14);
  uVar26 = uVar27 & ~(1 << ((uint)uVar30 & 0x1f));
  if ((uVar27 >> ((uint)uVar30 & 0x1f) & 1) != 0 || sVar14 == 0) {
    uVar26 = uVar31;
  }
  if (SCARRY4(uVar26,0x5a5ff4bb)) {
    uVar31 = uVar26 + 0x5a5ff4bb & 0xffff | (uint)uVar34 << 0x10;
  }
  iVar6 = (uVar10 | (ushort)((uVar30 - sVar14) + 0x6ad3)) << 1;
  uVar15 = CONCAT11((char)(sVar14 >> 0x19),(byte)sVar14 >> 2);
  uVar26 = uVar31 >> 1 & 0x7f;
  uVar10 = uVar31 & 0xffff0000 | uVar26;
  bVar23 = (byte)uVar26 & 0x1f;
  uVar10 = uVar10 >> bVar23 | uVar10 << 0x20 - bVar23;
  uVar30 = ((ushort)iVar6 & 0xb2b4) + 1;
  uVar36 = CONCAT22(uVar16 | 0xcfb9,0xb827);
  bVar23 = (byte)uVar10;
  uVar27 = uVar31 & 0xffff0000 |
           (uint)(byte)((byte)((uint)(ushort)((short)uVar26 << 0xd) >> 8) >> (bVar23 & 0x1f)) << 8;
  uVar26 = 1 << ((uint)uVar30 & 0x1f);
  if ((ushort)uVar18 < 0xb828) {
    uVar18 = uVar27 | uVar26;
  }
  uVar19 = (uint)((int)uVar18 >> (bVar23 & 0x1f)) >> (bVar23 & 0x1f);
  uVar20 = CONCAT22((short)((ulonglong)lVar3 >> 0x10),
                    (short)(char)((uint)(ushort)(uVar15 >> 6 | uVar15 << 10) >> 8)) << 1;
  uVar34 = (ushort)uVar20 & 0x3fff;
  uVar15 = (ushort)(byte)((byte)((uint)(ushort)(short)(char)(uVar31 >> 8) >> 8) | 0xc0);
  uVar31 = (uint)(ushort)(uVar34 / uVar15 & 0xff | uVar34 % uVar15 << 8);
  uVar18 = 0;
  if (uVar36 != 0) {
    while ((uVar36 >> uVar18 & 1) == 0) {
      uVar18 = uVar18 + 1;
    }
  }
  uVar10 = uVar10 << (bVar23 & 0x1f);
  bVar23 = (byte)(uVar10 >> 8);
  bVar13 = (char)((byte)uVar18 | (byte)(uVar31 >> 8)) >> ((byte)uVar10 & 0x1f);
  uVar15 = (ushort)bVar13;
  uVar31 = (uVar20 & 0xffff0000 | uVar31) << 1;
  uVar17 = (ushort)uVar19;
  uVar34 = 0x9c17;
  if ((bVar13 & 0x10) == 0) {
    uVar34 = uVar17;
  }
  uVar37 = (ushort)uVar31;
  sVar14 = (short)((uVar27 | uVar26 & 0xffffff00 | (uint)(byte)((char)uVar26 + 0xbf)) * 0x75b5e275
                  >> 0x10);
  uVar27 = (CONCAT22(uVar16,uVar34) | 0xcfb90000) & 0xfff7ffff | 0x2000000;
  uVar26 = (uint)CONCAT11(bVar23 << 7 | bVar23 >> 1,(byte)uVar10) & 0xffffff86;
  uVar26 = (uVar10 & 0xffff0000 | uVar26) >> ((byte)uVar26 & 0x1f);
  uVar16 = (short)uVar26 >> 1;
  if (-1 < (int)(uVar31 & 0xffff0000 |
                (uint)(ushort)((uVar37 & 0xff00 | (sVar14 >> 10) - uVar37 >> 8) << 5 | uVar30 >> 0xc
                              ))) {
    uVar16 = uVar17;
  }
  uVar34 = ~(ushort)((int)uVar27 >> 1) & ~(1 << ((uVar15 & 0x1e) >> 1));
  bVar23 = (byte)uVar16 & 0xf;
  uVar16 = uVar16 << bVar23 | uVar16 >> 0x10 - bVar23;
  uVar37 = uVar17 & 0xf7ff;
  uVar19 = uVar19 & 0xffff0000;
  uVar30 = uVar16 + uVar37;
  uVar36 = CONCAT22(sVar14 >> 0x1a,uVar16 + uVar34) | 0xcc2e1b2d;
  bVar23 = (byte)uVar30 & 0xf;
  uVar16 = uVar30 << bVar23 | uVar30 >> 0x10 - bVar23;
  uVar10 = CONCAT22((ushort)((uint)iVar6 >> 0x10) & 0xd5c3,0xd7ec) >> 0xe;
  bVar13 = (byte)uVar36;
  bVar23 = (byte)uVar16 & 0x1f;
  uVar31 = (uVar26 & 0xffff0000 | (uint)uVar16) >> bVar23 | (uVar19 | (uint)uVar37) << 0x20 - bVar23
  ;
  uVar26 = uVar31 << 1;
  bVar8 = (byte)uVar26;
  bVar25 = (byte)(uVar31 >> 0x1f);
  bVar24 = bVar13 >> 2 | bVar13 << 6;
  uVar12 = (uint3)(uVar36 >> 8);
  bVar13 = (bVar8 | bVar25) + bVar24;
  uVar16 = (ushort)uVar26 & 0xff00 | (ushort)bVar13;
  sVar14 = bVar24 - uVar16;
  bVar23 = (bVar13 & 0x1f) % 0x11;
  uVar4 = CONCAT12(bVar24 < uVar16,uVar17) & 0xfff7ff;
  uVar16 = (short)uVar4 << bVar23 | (ushort)(uVar4 >> 0x11 - bVar23);
  bVar23 = bVar13 << (bVar13 & 0x1f);
  uVar31 = (int)(char)((uint)(ushort)(0xd7ecU >> (bVar13 & 0xf) | -0x2814 << 0x10 - (bVar13 & 0xf))
                      >> 8) *
           ((uVar18 & 0xffff0000 |
            (uint)(ushort)(((ushort)uVar18 & 0xff00 | uVar15) >> 1 | uVar15 << 0xf)) >> 0xc |
           (uint)uVar37 << 0x14) * 2;
  uVar18 = (int)(uVar26 & 0xffff0000 | (uint)CONCAT11((uVar16 >> 1 & 1) == 0,bVar13) & 0xffffff00 |
                (uint)bVar23) >> (bVar23 & 0x1f);
  uVar16 = (short)(uVar16 | 2) >> ((byte)uVar18 & 0x1f);
  uVar26 = (uint)uVar16;
  if (0 < (short)(((ushort)uVar10 & 0xff00 | (ushort)(byte)((char)uVar10 << (bVar8 & 0x1f | bVar25))
                  ) + 0xd7ec >> 1 | 0x8000)) {
    uVar18 = uVar31;
  }
  iVar6 = 0;
  if (uVar18 != 0) {
    while ((uVar18 >> iVar6 & 1) == 0) {
      iVar6 = iVar6 + 1;
    }
  }
  uVar20 = CONCAT31(uVar12 & 0xffff00 | (uint3)(byte)((ushort)sVar14 >> 8),(sVar14 != 0) << 1);
  uVar29 = iVar6 - (uVar19 | uVar26);
  uVar16 = ((((short)uVar34 >> 1) >> (bVar8 & 0x1f | bVar25)) + 0x4e0c) - uVar16;
  uVar36 = ((int)uVar31 >> 0x1f) + 0x623e8611;
  uVar31 = uVar31 * 0x200 | (uint)(uVar12 >> 0xf);
  uVar10 = (uint)((ushort)uVar29 & 0x7fff);
  if ((uVar29 & 0x4000) != 0) {
    uVar10 = uVar26;
  }
  uVar18 = (uint)(ushort)(((ushort)uVar18 & 0xff00) >> 7 | uVar16 * 0x200) & 0xffffff0f;
  sVar9 = (sbyte)uVar18;
  uVar15 = (ushort)uVar18;
  uVar18 = uVar20 ^ (uint)(uVar31 == uVar20) * (uVar20 ^ (uVar29 & 0xffff0000 | uVar10));
  bVar25 = (byte)(uVar15 << 1);
  bVar24 = (byte)(uVar18 >> 8) >> 7;
  lVar3 = (longlong)(int)(uVar31 ^ (uint)(uVar31 == uVar20) * (uVar31 & uVar18)) *
          (longlong)
          (int)(uVar36 & 0xffff0000 |
               (uint)(ushort)((short)uVar36 << sVar9 | uVar15 >> 0x10 - sVar9));
  bVar23 = bVar25 & 7 | bVar24;
  bVar21 = (byte)((ulonglong)lVar3 >> 0x28);
  bVar8 = (byte)lVar3;
  iVar6 = (uVar19 | uVar26 & 0xfffffffd) * 2;
  bVar13 = (byte)((ulonglong)lVar3 >> 8);
  bVar39 = (iVar6 + (uint)(byte)(bVar8 + (bVar25 | bVar24) + 0x70) & 1) != 0;
  uVar15 = ((short)iVar6 -
           (CONCAT11(bVar21 >> bVar23 | bVar21 << 8 - bVar23,(char)((ulonglong)lVar3 >> 0x20)) &
           0xfffb)) - (ushort)bVar39;
  bVar23 = bVar39 + bVar13;
  uVar26 = (int)(short)(uVar15 & 0xff | (ushort)(!CARRY1(bVar39,bVar13) && bVar23 != 0) << 8) *
           (int)(short)uVar16;
  sVar14 = (short)(uVar26 >> 0x10);
  uVar31 = CONCAT22((short)((int)uVar27 >> 0x11),uVar16 >> 1 | sVar14 << 0xf);
  bVar13 = (byte)uVar26 << (bVar8 & 7) | (byte)uVar26 >> 8 - (bVar8 & 7);
  iVar6 = (uVar18 & 0xffffff00 | (uint)bVar23) << 1;
  bVar25 = (byte)(uVar18 >> 0x1f) | (byte)iVar6;
  uVar10 = CONCAT22((short)((ulonglong)lVar3 >> 0x30),sVar14) & 0xffffff00;
  uVar27 = (uVar10 | uVar26 >> 0x10 & 0xff | 0xa0) * -0x13ef795;
  uVar30 = (ushort)uVar27;
  bVar23 = (byte)(uVar10 >> 8);
  uVar16 = (short)((ushort)uVar26 & 0xff00 | (ushort)bVar13) >>
           (bVar8 & ~(byte)(1 << ((uint)bVar13 & 0x1f)) & 0x1f);
  uVar26 = (uVar27 & 0xffff0000 | (uint)(ushort)(uVar30 << 0xd | uVar30 >> 3)) - 1;
  if (0x18 < bVar23) {
    uVar26 = uVar31;
  }
  uVar30 = uVar16 & 0xff | ((ushort)(byte)(((byte)((uint)uVar16 >> 8) | 0x2f) << 1) & 0x3f) << 8;
  uVar16 = (ushort)(bVar23 != 0x19 | 0xc0);
  uVar10 = (uVar18 & 0x7fff8000) << 1;
  lVar3 = (ulonglong)
          (CONCAT22((short)uVar15 >> 0xf,uVar30 / uVar16 & 0xff | uVar30 % uVar16 << 8) + 1) *
          0x83c31941;
  uVar27 = CONCAT22((short)((ulonglong)lVar3 >> 0x30),(short)((ulonglong)lVar3 >> 0x20) << 8) << 1;
  uVar16 = (short)lVar3 << 0xf;
  cVar5 = (char)lVar3 * '\x02';
  iVar11 = CONCAT31((int3)((ulonglong)lVar3 >> 8),cVar5);
  iVar32 = uVar31 - iVar11;
  if (iVar32 != 0 && iVar11 <= (int)uVar31) {
    uVar27 = uVar27 & 0xffff0000 | (uint)CONCAT11(~(byte)((uint)iVar6 >> 8),bVar25);
  }
  uVar31 = uVar10 | CONCAT11(iVar32 < 0,bVar25);
  uVar28 = uVar31 * -0x27842b17;
  uVar20 = (uint)(byte)(bVar25 + 1) & 0xffffff0f;
  sVar9 = (sbyte)uVar20;
  uVar36 = (uint)(ushort)(((ushort)(uVar31 << 1) | (ushort)(uVar10 >> 0x1f)) << sVar9 |
                         CONCAT11((byte)(uVar27 >> 8) ^ (byte)((ulonglong)lVar3 >> 8),(byte)uVar27)
                         >> 0x10 - sVar9);
  uVar15 = (short)uVar28 + ((ushort)uVar20 | 0x1900) + 1;
  uVar19 = (iVar32 + 0xfd21e62aU & 0xffff0000 |
           (uint)(ushort)((short)(iVar32 + 0xfd21e62aU) << 6 |
                         ((ushort)((byte)uVar27 & 0xfe) << 0x10 - sVar9) >> 10)) * 2;
  uVar10 = uVar19 + 0x30896687;
  uVar31 = (int)(short)((ushort)(byte)(cVar5 + 0x7f) | 0xff00) * (int)(short)uVar16;
  uVar29 = (uVar26 & 0xffff0000 | (uint)uVar16) ^
           1 << ((uVar36 & 0xf) << 1 | (uint)(uVar19 < 0xcf769979));
  uVar19 = ((uVar28 & 0xffff0000 | (uint)uVar15) >> 1 | (uint)((uVar15 & 1) != 0) << 0x1f) *
           0x3eb793d3 & 0xffff0000;
  uVar26 = ((((uVar18 & 0x7fff8000) << 2 | uVar36) << 1) >> 0x1c | uVar10 * 0x10) + 0xede0ad04;
  uVar18 = (uVar10 | 0xac62) >> sVar9 | uVar29 << 0x20 - sVar9;
  uVar15 = (ushort)(uVar26 >> 8) & 0xff;
  uVar30 = ((ushort)uVar10 | 0xac62) & (ushort)uVar29;
  uVar10 = uVar19 | uVar30;
  sVar14 = (short)uVar18;
  uVar16 = sVar14 * 2;
  uVar18 = uVar18 & 0xffff0000;
  uVar26 = uVar26 & 0xffff00ff;
  if ((short)uVar16 < 0) {
    uVar26 = uVar29;
  }
  uVar36 = (uint)CONCAT11(uVar16 != 0,(char)uVar26);
  uVar34 = ((ushort)(uVar31 >> 0x10) & 0xff00 | uVar15) >> 7;
  uVar29 = uVar27 & 0xffff0000 | (uint)(ushort)(uVar34 | uVar15 << 9) & 0xffffff00 |
           (uint)(byte)((char)uVar34 << 1);
  uVar16 = sVar14 << 6 | uVar16 >> 0xb;
  uVar15 = uVar16 + 0x41e5;
  uVar31 = (CONCAT22((short)((ulonglong)lVar3 >> 0x10),0xff00) & 0xffff0000 | uVar31 & 0xffff) ^
           0x6400;
  if ((uVar26 & 0x89) == 0) {
    uVar31 = uVar18 | uVar15;
  }
  uVar20 = uVar20 | 0x83c30000;
  if (uVar15 < 0x2836) {
    uVar20 = uVar31;
  }
  bVar23 = (byte)(uVar31 >> 8);
  uVar31 = uVar29 - uVar10;
  uVar18 = (uVar18 | (ushort)(uVar16 + 0x19af)) + 0x68c4d3c5 + (uint)(uVar29 < uVar10);
  uVar16 = ((ushort)(byte)-((byte)uVar20 <= bVar23) << 8) >> 0xd;
  uVar15 = (ushort)uVar18 << 3;
  uVar16 = uVar16 | uVar15 & 0xff | (ushort)(byte)((char)((uint)(uVar16 | uVar15) >> 8) + 0x86) << 8
  ;
  cVar22 = (char)(uVar31 >> 8);
  cVar5 = cVar22 + -1;
  uVar10 = uVar31 & 0xffff0000 | (uint)CONCAT11(cVar5,(char)uVar31);
  if (cVar5 != '\0' && '\0' < cVar22) {
    uVar10 = uVar20 & 0xffff0000 | (uint)uVar16;
  }
  uVar15 = (ushort)((uVar18 & 1) != 0);
  uVar34 = (uVar16 + 0x92ce) - uVar15;
  uVar31 = uVar20 & 0xffff0000 |
           (uint)(ushort)(uVar34 & 0xff |
                         (ushort)(byte)((byte)((uint)uVar34 >> 8) ^ (byte)uVar34) << 8) | 0x84f0b139
  ;
  uVar36 = (uVar26 & 0xffff0000 | uVar36 & 0xffffff89) & ~(1 << (uVar36 & 9));
  uVar26 = (uint)(ushort)(uVar30 >> 1 | (short)uVar36 << 0xf);
  uVar20 = (((uVar18 & 0xffff0000 | (uint)(ushort)(((ushort)uVar18 >> 1) + (short)uVar10)) +
            0x996dfc7e) - (uint)(-(uVar16 < 0x6d32 || (ushort)(uVar16 + 0x92ce) < uVar15) & 1) |
           0x20000000) & ~(1 << (uVar26 & 0x1f));
  uVar7 = -(uVar19 | uVar26);
  bVar13 = (byte)uVar31;
  bVar13 = bVar13 >> (bVar13 & 0x1f);
  uVar31 = uVar31 & 0xffffff00;
  uVar26 = (uVar36 & 0xffffff00 | (uint)(byte)((byte)uVar36 ^ (byte)(uVar10 >> 8))) & uVar20;
  uVar16 = (short)uVar26 >> (bVar13 & 0x1f);
  uVar26 = uVar26 & 0xffff0000;
  uVar15 = (ushort)uVar7;
  uVar30 = uVar15 << 1 | uVar15 >> 0xf;
  uVar28 = uVar20 ^ 1 << ((uint)uVar30 & 0x1f);
  uVar18 = uVar10 & 0xffff0000;
  uVar19 = uVar26 | (ushort)(uVar16 + 0x69a3);
  uVar36 = (uint)bVar13 & 0xffffff0f;
  sVar9 = (sbyte)uVar36;
  uVar15 = (short)uVar28 << sVar9 | ((ushort)uVar31 | (ushort)uVar36) >> 0x10 - sVar9;
  uVar10 = (int)(uVar27 & 0xffff0000 |
                (uint)(ushort)((short)uVar29 + CONCAT11(bVar23 + 0x1a,(short)uVar10 != 1) +
                              (ushort)(((uVar26 | (uint)uVar16) >> ((uint)uVar16 & 0x1f) & 1) != 0))
                ) >> 5;
  uVar26 = (uVar31 | (byte)(sVar9 << 1)) * 2 + 1;
  if (uVar26 == uVar18 || (SBORROW4(uVar26,uVar18) != false) != (int)(uVar26 - uVar18) < 0) {
    uVar18 = uVar10;
  }
  bVar23 = (byte)uVar18;
  uVar15 = uVar15 << 8 | uVar15 >> 8;
  bVar13 = bVar23 & 0xf;
  uVar16 = (ushort)bVar13 << bVar13 | uVar15 >> 0x10 - bVar13;
  cVar5 = (char)((uint)uVar16 >> 8);
  uVar16 = uVar16 & 0xff;
  uVar30 = (uVar30 << 2 |
           (ushort)(CONCAT12((uVar20 >> ((uint)uVar30 & 0x1f) & 1) != 0,uVar30) >> 0xf)) + uVar15;
  uVar36 = uVar19 + 0xa21eff90;
  uVar26 = (uVar10 >> (bVar23 & 0x1f)) << 1;
  uVar20 = uVar26 | (uVar30 & 1) != 0;
  uVar31 = (uint)(ushort)(uVar16 | (ushort)(byte)((char)((uint)(ushort)(uVar16 | (ushort)(byte)(
                                                  cVar5 << 1 | cVar5 < '\0') << 8) >> 8) << 1) << 8
                         | 0x100) & 0xffffff22;
  uVar27 = uVar18 & 0xffff0000 | uVar36 & 0xff;
  bVar13 = (byte)(uVar31 >> 8) ^ (byte)(uVar20 + 0xfeac9db3 + (int)(char)(uVar36 >> 8) >> 8);
  uVar10 = uVar28 & 0xffff0000 | (uint)(uVar15 - CONCAT11((char)(uVar18 >> 8) >> 1,bVar23) & 0xefff)
  ;
  if (-1 < (char)bVar13) {
    uVar10 = uVar20;
  }
  uVar18 = (uint)CONCAT11(bVar13,(char)uVar31) * 0x800;
  uVar29 = uVar18 + 0xc3ec14e3;
  uVar31 = (int)((uVar7 & 0xffff0000 | (uint)uVar30) >> 1 | (uint)(uVar19 < 0x5de10070) << 0x1f) >>
           ((byte)uVar16 & 0x1f);
  if (SBORROW4(uVar18,0x3c13eb1d)) {
    uVar31 = uVar27;
  }
  cVar5 = (char)((uint)CONCAT11(uVar18 >= 0x3c13eb1d && uVar29 != 0,(char)uVar29) >> 8);
  uVar18 = (uint)CONCAT11(cVar5 << 2 | (byte)(CONCAT11(uVar18 < 0x3c13eb1d,cVar5) >> 7),(char)uVar29
                         );
  uVar19 = uVar29 & 0xffff0000 | uVar18;
  uVar16 = (ushort)uVar31 >> 6 & 1;
  uVar12 = ((uint3)(uVar19 >> 8) & 0xff00) >> 8 | (uint3)uVar19 & 0xff00 |
           (uint3)((uVar18 << 0x18) >> 8);
  sVar35 = (short)uVar20 >> 0x1e;
  uVar26 = uVar26 & 0xffff0000;
  lVar3 = (ulonglong)(uVar27 >> 1 | (uint)(uVar16 != 0) << 0x1f) * (ulonglong)uVar10;
  uVar15 = sVar35 + (short)CONCAT31(uVar12,(byte)((uVar29 & 0xffff0000) >> 0x18) |
                                           (byte)((ulonglong)lVar3 >> 0x20));
  uVar27 = ((uint)uVar12 & 0xffff00) << 8 |
           (uint)(ushort)(sVar35 << 1 | (ushort)(sVar35 < 0) | 0x1000);
  uVar18 = uVar27 + uVar10 >> 1;
  bVar23 = (byte)(uVar18 >> 8);
  sVar14 = (ushort)(byte)lVar3 * (ushort)bVar23;
  iVar6 = CONCAT22((short)((ulonglong)lVar3 >> 0x10),sVar14);
  uVar31 = (((uVar31 & 0xffff0000 | (uint)(ushort)((ushort)uVar31 ^ uVar16 << 6)) -
            (uVar26 | (uint)uVar15)) - (uint)((sVar35 << 1 & 0x1000U) != 0)) + 1;
  uVar16 = CONCAT11(bVar23 << 1 | (char)((ushort)sVar14 >> 8) != '\0',(char)uVar18);
  uVar18 = uVar18 & 0xffff0000 | (uint)CARRY4(uVar27,uVar10) << 0x1f;
  iVar11 = iVar6 + -0x4e58bbc5;
  uVar26 = uVar26 | (uint)uVar15 & 0xffffff00 | (uint)(byte)((char)uVar15 + 0xbd);
  if (iVar11 == 0 || (SBORROW4(iVar6,0x4e58bbc4) != SBORROW4(iVar6 + -0x4e58bbc4,1)) != iVar11 < 0)
  {
    uVar26 = uVar10;
  }
  uVar27 = 0;
  if (uVar26 != 0) {
    while ((uVar26 >> uVar27 & 1) == 0) {
      uVar27 = uVar27 + 1;
    }
  }
  uVar30 = (ushort)uVar10;
  uVar15 = uVar30 | 1 << (uVar30 & 0xf);
  uVar20 = uVar27 | 0xc0000000;
  uVar1 = CONCAT44(CONCAT22((ushort)(uVar26 >> 0x11),
                            (short)(uVar26 >> 1) + uVar16 +
                            (ushort)((uVar30 >> (uVar30 & 0xf) & 1) != 0)),iVar11) &
          0x3fffffffffffffff;
  uVar2 = uVar1 % (ulonglong)uVar20;
  uVar19 = (uint)uVar16 & 0xffffff0f;
  sVar9 = (sbyte)uVar19;
  uVar16 = (ushort)uVar19;
  uVar26 = uVar31 & 0xffff0000;
  if ((int)((uint)(uVar1 / (ulonglong)uVar20) | (uint)uVar2) < 0) {
    uVar19 = uVar27 & 0xffff;
  }
  iVar6 = CONCAT22((short)(uVar2 >> 0x10),
                   CONCAT11((char)(uVar2 >> 8) + '|',(char)uVar2 << ((byte)uVar19 & 0x1f))) + -1;
  uVar31 = (uint)(ushort)((short)uVar31 << sVar9 | uVar16 >> 0x10 - sVar9);
  if (iVar6 == 0) {
    uVar31 = uVar19;
  }
  uVar27 = 0x1f;
  if (uVar20 != 0) {
    while (uVar20 >> uVar27 == 0) {
      uVar27 = uVar27 - 1;
    }
  }
  uVar28 = uVar18 | uVar19 | 0xc000;
  uVar20 = (uint)((ushort)iVar6 & 0x3fff) << 0x10 | 0x1f;
  uVar29 = uVar20 % (uVar19 | 0xc000);
  bVar23 = (byte)uVar29;
  if (0xb3 < bVar23) {
    uVar28 = uVar18 | uVar27 & 0xffff;
  }
  uVar16 = (ushort)(uVar20 / (uVar19 | 0xc000));
  if (-0x4d < (char)bVar23) {
    uVar16 = uVar15;
  }
  uVar30 = ((ushort)(uVar36 >> 0x10) | (ushort)((uint)(1 << (uVar10 & 0x1f)) >> 0x10)) >> 8;
  if (0xb3 < bVar23) {
    uVar15 = uVar30;
  }
  bVar13 = (byte)uVar28;
  uVar34 = (ushort)bVar13 << (bVar13 & 0x1f);
  uVar10 = (uVar10 & 0xffff0000 | (uint)uVar15) + (uVar28 & 0xffff0000 | (uint)uVar34);
  uVar36 = (uint)(ushort)(uVar30 + 0xab86) + (uVar26 | uVar31) + (uint)(0x5479 < uVar30);
  bVar8 = (byte)uVar34;
  uVar15 = uVar16 >> (bVar8 & 0xf) | uVar16 << 0x10 - (bVar8 & 0xf);
  uVar16 = (ushort)uVar31 & 0xf;
  bVar23 = (bVar8 & 0x1f) % 9;
  uVar19 = uVar36 >> 1;
  uVar18 = (uint)uVar15 & 0xffffff00 | (uint)(byte)((char)uVar15 << (bVar8 & 0x1f)) | 0x3a760000;
  uVar15 = (ushort)uVar31 + 0x327;
  if (uVar15 != 0) {
    uVar34 = CONCAT11((char)(uVar29 >> 8) >> (bVar13 & 0x1f),
                      '\0' << bVar23 |
                      (byte)(((ushort)(((ushort)uVar10 >> uVar16 & 1) != 0) << 8) >> 9 - bVar23));
  }
  uVar31 = uVar19 & 0xff;
  uVar36 = (uVar36 >> 9) << 8;
  iVar6 = 0;
  if ((int)(short)uVar34 != 0) {
    while (((uint)(int)(short)uVar34 >> iVar6 & 1) == 0) {
      iVar6 = iVar6 + 1;
    }
  }
  uVar7 = iVar6 + 0xa2673c71U & 0xffff0000;
  bVar13 = (byte)(uVar34 & 0xff);
  bVar23 = (bVar13 & 0x1f) % 0x11;
  uVar20 = uVar31 | uVar36 & 0xffff | 0x1007c;
  uVar29 = (uVar10 & 0xffff0000 | (uint)(ushort)(((ushort)uVar10 ^ 1 << uVar16) - 1 | 0x800)) << 8;
  uVar33 = uVar29 | uVar10 >> 0x18;
  sVar14 = (short)uVar33;
  iVar6 = (int)(short)((short)(char)((byte)(iVar6 + 0xa2673c71U) & 0xac) *
                      (short)(char)((byte)uVar31 | 0x7c)) * (int)sVar14;
  uVar17 = (ushort)((uint)iVar6 >> 0x10);
  uVar16 = (ushort)iVar6 & 0xff00 | (ushort)(byte)((char)iVar6 >> (bVar13 & 0x1f));
  uVar30 = uVar16 - uVar17;
  uVar10 = ((uint)((ulonglong)((longlong)(int)uVar18 * (longlong)(int)uVar18) >> 0x20) & 0x7fff8000)
           << 1 | (uint)uVar17;
  if ((short)uVar17 <= (short)uVar16) {
    uVar10 = uVar7 | uVar30;
  }
  uVar30 = uVar30 & 0x3fff;
  uVar16 = (ushort)(byte)((uVar10 | 0xc000) >> 8);
  uVar17 = uVar30 / uVar16 & 0xff;
  return (uVar7 | (ushort)(short)(char)uVar17) +
         (uVar36 & 0xffff0000 |
         (uint)(ushort)((short)(ushort)(byte)((byte)(uVar20 << bVar23) |
                                             (byte)(uVar20 >> 0x11 - bVar23)) >> (bVar13 & 0x1f))) +
         (CONCAT22((short)uVar34 >> 0xf,
                   uVar34 & 0xff | (ushort)(byte)((byte)(uVar34 >> 8) >> ((byte)uVar34 & 0x1f)) << 8
                  ) & 0xffffff00 | (uint)(byte)((char)bVar13 >> (bVar13 & 0x1f))) +
         (uVar10 | 0xc000) + (uVar33 ^ (uVar29 >> 0xb & 1) << 0xb) +
         CONCAT22((ushort)((uVar27 & 0xffff0000) >> 0x11),
                  ((ushort)((uVar27 & 0xffff0000 |
                            (uint)(ushort)(((((ushort)uVar27 & ~(1 << ((ushort)uVar28 & 0xf))) -
                                            0x89b) + (short)uVar19) * 2 | 1)) >> 1) >> 2 |
                  sVar14 << 0xe) + (uVar17 | uVar30 % uVar16 << 8)) + (uVar26 | uVar15) + 0x20bf0bc3
  ;
}



// WARNING: Removing unreachable block (ram,0x0804c89a)
// WARNING: Removing unreachable block (ram,0x0804c5c1)
// WARNING: Removing unreachable block (ram,0x0804c2a5)
// WARNING: Removing unreachable block (ram,0x0804c298)
// WARNING: Removing unreachable block (ram,0x0804c394)
// WARNING: Removing unreachable block (ram,0x0804c921)
// WARNING: Removing unreachable block (ram,0x0804c93f)
// WARNING: Removing unreachable block (ram,0x0804cbaf)
// WARNING: Removing unreachable block (ram,0x0804c2c7)
// WARNING: Removing unreachable block (ram,0x0804cbf9)

int log_size_10_var_004(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint5 uVar5;
  ushort uVar6;
  char cVar7;
  short sVar8;
  char cVar11;
  byte bVar12;
  uint uVar9;
  undefined3 uVar13;
  uint uVar10;
  uint3 uVar14;
  byte bVar15;
  sbyte sVar16;
  byte bVar17;
  ushort uVar18;
  byte bVar21;
  short sVar19;
  ushort uVar20;
  uint3 uVar22;
  undefined uVar23;
  ushort uVar24;
  short sVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  char cVar29;
  ushort uVar30;
  byte bVar35;
  ushort uVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ushort uVar39;
  ushort uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  bool in_PF;
  bool bVar44;
  
  uVar41 = 0xab388c31;
  if (!in_PF) {
    uVar41 = 0xdd12be93;
  }
  uVar30 = (short)uVar41 + 0x525d;
  uVar9 = CONCAT22(0xdd12,(short)(char)uVar30 * -0x6d) + 0x23b9c89c;
  bVar44 = (uVar9 & 0x400) != 0;
  sVar19 = (short)uVar9 + 0x2cfd;
  uVar36 = 0x27d78ee2;
  if (sVar19 != 0) {
    uVar36 = 0x32198c7f;
  }
  uVar9 = uVar9 & 0xffff0000 | 0xfffb;
  lVar4 = (longlong)(int)uVar9 * (longlong)(int)uVar9;
  uVar26 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar36 = ((int)(uVar36 & 0xffff0000 | (uint)(ushort)((short)uVar36 + 0xa15)) >> 1 ^
           uVar26 + (int)lVar4) + 0xa036fc6a;
  uVar40 = (ushort)((ulonglong)lVar4 >> 0x20) & 0x3fff;
  uVar39 = uVar40 / 0xe8;
  uVar18 = 1 << (uVar39 & 0xf) ^ 0xffe8;
  uVar24 = (ushort)uVar36;
  bVar21 = (byte)(uVar18 & 0xff) & 0x1f;
  uVar9 = ((uVar41 & 0xffff0000) >> 1 |
          (uint)(ushort)(((ushort)((uVar41 & 0xffff0000 | (uint)uVar30) >> 1) | 0xaa00) * -0x2706))
          << bVar21 |
          ((uint)(ushort)(uVar18 & 0xff |
                         (ushort)(byte)((byte)((uint)uVar18 >> 8) >> ((byte)uVar18 & 0x1f)) << 8) |
          0xb1c80000) >> 0x20 - bVar21;
  uVar36 = ((int)(uVar36 & 0xffff0000 | (uint)(uVar24 & ~(1 << (uVar24 & 0xf)))) >> 1) << 1;
  bVar15 = (char)(CONCAT22(0x3f80,sVar19) >> 1) + -0x6a >> 1;
  bVar21 = bVar15 & 7;
  uVar41 = uVar26 & 0xffff0000 |
           (uint)(ushort)((short)bVar44 | (ushort)(byte)(0U >> bVar21 | '\0' << 8 - bVar21) << 8);
  uVar26 = uVar41 ^ (uint)(uVar41 == uVar9) * (uVar41 & uVar9);
  uVar41 = uVar26 & 0xffff0000 |
           (uint)CONCAT11(((char)(uVar26 >> 8) + '\x16') - (uVar41 < uVar9),(char)uVar26);
  bVar15 = bVar15 + 0xab;
  lVar4 = (longlong)(int)uVar41 * (longlong)(int)uVar41;
  bVar12 = (byte)((ulonglong)lVar4 >> 0x20);
  bVar21 = bVar12 + (byte)uVar9;
  uVar26 = CONCAT31((int3)((ulonglong)lVar4 >> 0x28),bVar21 + 1);
  uVar18 = (ushort)uVar26;
  uVar24 = (short)uVar18 >> 0xf;
  bVar17 = (bVar15 & 0x1f) % 0x11;
  uVar41 = (uint)(CARRY1(bVar12,(byte)uVar9) || 0xfe < bVar21) << 0x10 | uVar9 & 0xffff;
  uVar41 = CONCAT22(0x1fc0,(ushort)(uVar41 << bVar17) | (ushort)(uVar41 >> 0x11 - bVar17)) ^
           0x39ee1324;
  uVar30 = (-0x3675 - CONCAT11((char)((uint)(ushort)(uVar39 | uVar40 % 0xe8 << 8) >> 8) << 1,bVar44)
           ) * 3;
  if (uVar41 != 0) {
    uVar9 = uVar26;
  }
  uVar39 = (ushort)uVar41 & 0xeaef;
  uVar40 = uVar39 ^ (ushort)(uVar18 == uVar39) * (uVar39 ^ uVar30);
  uVar18 = uVar18 ^ (ushort)(uVar18 == uVar39) * (uVar18 & uVar40);
  uVar39 = (short)uVar9 + -0x2cfe + (ushort)(uVar24 < 0xa45);
  bVar15 = bVar15 & 0xf;
  uVar18 = uVar18 ^ 1 << ((uVar40 >> bVar15 | uVar18 << 0x10 - bVar15 | 0xc038) & 0xf);
  uVar36 = (uVar9 & 0xffff0000 | (uint)uVar39) ^
           (uVar36 & 0xffff0000 | (uint)(ushort)(((ushort)uVar36 | 1) - 1));
  uVar41 = (uint)(ushort)((short)uVar39 >> 1);
  if ((int)uVar36 < 0) {
    uVar41 = (uint)uVar18;
  }
  cVar7 = (char)uVar18;
  uVar40 = SEXT12(cVar7);
  bVar15 = (byte)((uint)uVar18 >> 8);
  bVar12 = (byte)((uint)uVar40 >> 8);
  uVar26 = (uint)(ushort)(uVar18 & 0xff | (ushort)(byte)(bVar15 - bVar12) << 8);
  bVar21 = ((byte)(uVar41 << 1) & 0x1f | 1) % 9;
  uVar9 = uVar26 | 0xc000;
  uVar26 = (uint)(uVar24 & 0x3fff) << 0x10 | uVar26 | 0xc000;
  uVar39 = (ushort)(uVar26 / uVar9) & 0x16ff;
  bVar17 = (byte)(uVar39 * -0x3ea8);
  uVar32 = (uVar36 & 0xffff0000 | (uint)uVar40 & 0xffffff00 |
           (uint)(byte)((byte)((uVar40 & 0xff | (ushort)(bVar15 < bVar12) << 8) >> bVar21) |
                       cVar7 << 9 - bVar21)) >> (bVar17 & 0x1f);
  bVar17 = bVar17 & 0xf;
  uVar40 = uVar39 * -0x3ea8 & ~(1 << ((ushort)(byte)(uVar32 >> 8) & 0xf));
  bVar15 = (byte)uVar40;
  uVar36 = (uint)CONCAT11((char)(uVar26 % uVar9) + 'k',(char)uVar32);
  uVar9 = (int)((uint)(uVar30 & 0xfffe) | 0xcdbb0000) >> (bVar15 & 0x1f);
  uVar30 = (uVar40 >> 9 | (short)uVar9 << 7) + 0x88b5;
  iVar33 = (uVar32 & 0xffff0000 | uVar36 & 0xffffff00 | (uVar36 & 0xfe) >> 1) - 1;
  uVar18 = (ushort)iVar33;
  bVar21 = (byte)uVar30;
  bVar12 = (byte)(uVar36 >> 8) >> (bVar21 & 0x1f);
  bVar21 = bVar21 & 0x1f;
  uVar41 = (uVar41 << 1 & 0xffff0000 | (uint)uVar30) << bVar21;
  uVar30 = (ushort)uVar41 | (ushort)(bVar12 >> 0x20 - bVar21);
  uVar40 = uVar30 | 0x400;
  uVar41 = uVar41 & 0xffff0000 | (uint)uVar40;
  iVar27 = (int)(short)(char)(((byte)(uVar39 << bVar17) | (byte)(uVar39 >> 0x10 - bVar17)) & bVar15
                             & bVar15) * (int)(short)uVar40;
  bVar17 = (byte)((uint)iVar27 >> 0x18);
  bVar21 = (byte)uVar30 & 0x1f;
  uVar41 = uVar41 << bVar21 | uVar41 >> 0x20 - bVar21;
  bVar21 = (byte)uVar41 & 0xf;
  uVar39 = 0x172b << bVar21 | 0x172bU >> 0x10 - bVar21;
  uVar30 = (uVar24 >> 8) << 0xc | (ushort)((ulonglong)lVar4 >> 0x34);
  if (-0x35 < (char)bVar17) {
    uVar30 = uVar18;
  }
  if (0xcb < bVar17) {
    uVar41 = uVar41 & 0xffff0000 | (uint)uVar39;
  }
  if (!SBORROW1(bVar17,-0x34)) {
    uVar30 = (ushort)uVar41;
  }
  uVar40 = bVar12 + uVar18 + 1;
  uVar24 = uVar39 >> 1 | (ushort)((uVar39 & 1) != 0) << 0xf;
  uVar36 = CONCAT31((int3)((uVar41 << ((byte)uVar41 & 0x1f)) >> 8),0xb8) + 0x7a92ba98;
  uVar5 = CONCAT14(CARRY2(uVar40,uVar18),iVar33) >> 1;
  uVar41 = (uint)uVar5;
  lVar4 = (ulonglong)CONCAT22((short)(char)iVar27 >> 0xf,(ushort)(byte)((uVar36 & 0xffffff00) >> 8))
          * (ulonglong)uVar41;
  uVar39 = (short)uVar5 +
           (short)CONCAT31((int3)((ulonglong)lVar4 >> 0x28),
                           ((char)((ulonglong)lVar4 >> 0x20) - (char)((ulonglong)lVar4 >> 0x28)) -
                           ((ushort)((ushort)(uVar36 & 0xffffff00) |
                                    (ushort)(byte)((char)uVar36 >> 1)) < uVar24));
  uVar26 = (uint)(ushort)(uVar40 + uVar18) + 0xac86e25b >> 1 | (uint)uVar24 << 0x1f;
  uVar32 = uVar9 & 0xffff0000 | (uint)uVar24 | 0x7d9d;
  uVar40 = (ushort)(uVar26 >> 0x11);
  uVar30 = (ushort)(uVar26 >> 1) ^ uVar30 - 1;
  iVar27 = 0x1f;
  sVar19 = 0x1f;
  if (uVar32 != 0) {
    while (sVar19 = (short)iVar27, uVar32 >> iVar27 == 0) {
      iVar27 = iVar27 + -1;
    }
  }
  bVar21 = (byte)(uVar39 & 0xff);
  bVar15 = bVar21 >> 3 | bVar21 << 5;
  bVar21 = (byte)((uint)(ushort)(uVar39 & 0xff |
                                (ushort)(byte)((char)((uint)uVar39 >> 8) + 0x3a) << 8) >> 8);
  lVar4 = (ulonglong)
          ((((uint)(uint3)((uint3)((ulonglong)lVar4 >> 8) >> 0xb) & 0xffff00) << 8 |
           (uint)(ushort)(uVar39 * -0x1ae7 + 0x3f86)) - 1) *
          (ulonglong)(CONCAT22(uVar40,uVar30) | 0x80000000);
  uVar36 = ~(uVar36 & 0xffff0000 | (uint)!CARRY1(bVar21,bVar15));
  bVar17 = (byte)uVar36;
  uVar39 = uVar30 >> (bVar17 & 0xf) | uVar30 << 0x10 - (bVar17 & 0xf);
  uVar30 = CONCAT11(bVar21 + bVar15 + '\b',bVar21);
  sVar25 = uVar39 - uVar30;
  sVar8 = ((short)lVar4 + -0x30ec) - (ushort)(uVar39 < uVar30 || sVar25 == 0);
  uVar39 = CONCAT11(bVar44,bVar17) & 0xff0f ^ 0x9f;
  uVar41 = uVar41 & 0xffff0000 | (uint)uVar30 & 0xffffff00 |
           (uint)(bVar21 & (byte)((uint)uVar30 >> 8));
  uVar32 = (uint)uVar24 | 0x7d9d | uVar9 & 0xffff0000 | 0xc0003ec9;
  uVar1 = CONCAT44(CONCAT22((short)((ulonglong)lVar4 >> 0x30),
                            CONCAT11((char)sVar8 < -0x7c,(char)((ulonglong)lVar4 >> 0x20))),
                   CONCAT22((short)((ulonglong)lVar4 >> 0x10),sVar8)) & 0x3fffffffffffffff;
  uVar2 = uVar1 / (ulonglong)uVar32;
  uVar1 = uVar1 % (ulonglong)uVar32;
  sVar8 = (short)uVar1;
  uVar9 = CONCAT22((short)(uVar1 >> 0x10),sVar8 << 1 | (ushort)(sVar8 < 0));
  uVar30 = uVar39 & 0xff;
  bVar21 = (byte)uVar30 & 0x1f;
  uVar26 = uVar41 << bVar21 | uVar41 >> 0x20 - bVar21;
  uVar18 = (ushort)uVar26;
  uVar30 = (uVar30 | (ushort)(byte)((char)((uint)uVar39 >> 8) << 1) << 8) ^ 1 << (uVar18 & 0xf);
  sVar8 = (short)(char)uVar2 * (short)(char)uVar30;
  cVar7 = (char)((ushort)sVar8 >> 8);
  uVar41 = uVar36 & 0xffff0000 | (uint)uVar30;
  if (cVar7 != '\0' && cVar7 != -1) {
    uVar41 = uVar26;
  }
  uVar1 = CONCAT44(uVar9 >> 4 | uVar9 << 0x1c,CONCAT22((short)(uVar2 >> 0x10),sVar8)) &
          0x3fffffffffffffff;
  uVar2 = uVar1 / (ulonglong)(uVar41 | 0xc0000000);
  uVar36 = CONCAT31((int3)(uVar1 % (ulonglong)(uVar41 | 0xc0000000) >> 8),0x3e);
  uVar13 = (undefined3)(uVar2 >> 8);
  cVar7 = (char)uVar2 >> 2;
  uVar9 = uVar26 & 0xffff0000 | (uint)(ushort)(uVar18 + sVar19);
  uVar37 = ~(CONCAT22(uVar40,sVar25 + -1 << (bVar17 & 0xf) |
                             ((ushort)((uint)uVar24 | 0x7d9d) | 0x3ec9) >> 0x10 - (bVar17 & 0xf)) |
            0x80000000);
  bVar21 = (byte)uVar41 & 0x1f;
  uVar9 = (uVar9 >> bVar21 | uVar9 << 0x20 - bVar21) + 0x3d9c27f2;
  uVar30 = (ushort)uVar9;
  uVar40 = uVar30 >> 3 | uVar30 << 0xd;
  uVar9 = uVar9 & 0xffff0000;
  uVar26 = (uint)(ushort)((short)uVar37 - 1);
  uVar43 = uVar37 & 0xffff0000 | uVar26;
  uVar41 = (uint)((uVar36 & 0x200000) != 0) << 0x10 | uVar36 & 0xffff;
  uVar39 = (ushort)(uVar41 >> 0xb) | (ushort)(uVar41 << 6);
  uVar42 = uVar36 & 0xffff0000 | 0x200000;
  uVar41 = CONCAT31(uVar13,cVar7) + 0xd1 + (uVar42 | uVar39) * 2;
  uVar30 = (ushort)CONCAT31(uVar13,cVar7 << 1 | cVar7 < '\0');
  uVar30 = uVar30 & ~(1 << (uVar30 & 0xf));
  uVar36 = uVar43 << 1;
  uVar24 = (ushort)uVar36 | 1;
  uVar32 = ((uint)(ushort)((short)uVar32 - uVar18) << 0x1f | (uVar37 & 0xfffe0000) >> 1 |
           (uint)(ushort)((ushort)(uVar43 >> 1) | 1 << (uVar30 & 0xf))) ^
           1 << ((uVar26 & 0xf) << 1 | 1);
  if ((uVar32 & 0x6026) == 0) {
    uVar41 = uVar41 & 0xffff0000 | uVar32 & 0x6026;
  }
  uVar18 = (ushort)(uVar9 >> 0x10);
  uVar41 = uVar41 + 0xc67cb321;
  uVar42 = uVar42 | (ushort)(uVar39 - 0xefa);
  bVar21 = (char)((uint)uVar40 >> 8) - 0x22;
  uVar37 = (uint)(ushort)(uVar30 + 0x953f);
  if (bVar21 == 0) {
    uVar37 = uVar42;
  }
  uVar39 = (short)uVar41 + 0xd3 + uVar40 * 4;
  uVar10 = uVar41 | 0xc000;
  uVar43 = CONCAT31(CONCAT21(uVar18,bVar21),-1 < (short)((ushort)bVar21 << 8)) & 0xffff;
  lVar4 = (ulonglong)
          (uVar9 | (CONCAT22((short)(((uint)(ushort)((ushort)(uVar42 << 1) & 0x3fff |
                                                    (ushort)((int)uVar42 < 0)) << 0x10 |
                                     (uVar37 | 0xd9608da9) & 0xffff) % (uVar41 & 0xffff | 0xc000)),
                             uVar39) & 0x3fffffff) / (uVar43 | 0xc000) & 0xffff) * (ulonglong)uVar10
  ;
  uVar30 = (short)lVar4 >> (sbyte)uVar43;
  uVar41 = (uVar43 | (uint)uVar18 << 0x10 | 0xc000) >> (sbyte)uVar43;
  if ((uVar39 | uVar24) != 0x50f7) {
    uVar41 = uVar41 & 0xffff0000 | (uVar26 & 0x7fff) << 1 | 1;
  }
  iVar27 = CONCAT22((short)((ulonglong)lVar4 >> 0x30),(short)uVar30 >> 0xf);
  uVar9 = (uint)(ushort)((short)uVar30 >> 0xf) & 0x1f;
  uVar42 = uVar10 ^ 1 << uVar9;
  uVar26 = iVar27 << 0xf;
  uVar9 = (uint)(CONCAT14((uVar10 >> uVar9 & 1) != 0,iVar27) >> 0x12);
  cVar7 = ((byte)(uVar9 >> 8) | (byte)(uVar26 >> 8)) + 1;
  uVar9 = uVar26 & 0xffff0000 | (uint)CONCAT11(cVar7,(char)uVar9);
  if (cVar7 == '\0') {
    uVar9 = CONCAT22((short)((ulonglong)lVar4 >> 0x10),uVar30);
  }
  uVar39 = CONCAT11((char)(uVar41 >> 8) + '1',(char)uVar41) + 1;
  uVar26 = uVar41 & 0xffff0000 | (uint)uVar39;
  bVar21 = (byte)uVar39;
  uVar41 = (uVar32 & 0xffff6026) >> (bVar21 & 0x1f);
  cVar7 = (char)(uVar9 >> 8);
  bVar15 = (byte)uVar9;
  uVar40 = CONCAT11(cVar7 << 1 | cVar7 < '\0',bVar15);
  bVar17 = (byte)(uVar30 >> 8);
  uVar39 = (ushort)(byte)(bVar17 >> 1 | bVar17 << 7) << 8;
  uVar18 = (ushort)uVar41;
  uVar32 = uVar41 & 0xffff0000 | (uint)(ushort)(uVar18 ^ (uVar18 >> 0xb & 1) << 0xb);
  uVar41 = uVar36 & 0xffff0000 | (uint)(ushort)((short)uVar24 >> 5);
  if ((int)uVar32 >= 0) {
    uVar41 = uVar9 & 0xffff0000 | (uint)uVar40;
  }
  bVar21 = bVar21 & 0x1f;
  uVar26 = uVar26 << bVar21 | (uint)(CONCAT14((int)uVar32 < 0,uVar26) >> 0x21 - bVar21);
  bVar17 = (byte)((uint)uVar40 >> 8);
  uVar41 = ~uVar41;
  bVar44 = (uVar39 & 0x400) != 0;
  uVar36 = (uint)CONCAT11((char)(uVar26 >> 8) - bVar17,(char)uVar26) & 0xffffff0f;
  sVar16 = (sbyte)uVar36;
  uVar18 = uVar40 + (short)uVar36;
  uVar18 = uVar18 & 0xff00 | (ushort)(byte)((char)uVar18 << 1);
  bVar12 = (byte)((uint)(ushort)(((uVar18 << (bVar15 & 0xf) | uVar18 >> 0x10 - (bVar15 & 0xf)) >> 1)
                                << 4) >> 8);
  uVar18 = ~(ushort)uVar42;
  uVar42 = uVar42 & 0xffff0000;
  lVar4 = (ulonglong)(CONCAT22((short)(uVar30 & 0xff | uVar39) >> 0xf,uVar30) & 0xffff00ff) *
          (ulonglong)(uVar42 | uVar18);
  uVar39 = CONCAT11((byte)((ulonglong)lVar4 >> 8) & (byte)lVar4,(byte)lVar4) & 0x3fff;
  uVar30 = (ushort)(bVar12 | 0xc0);
  bVar35 = (byte)((ulonglong)lVar4 >> 0x28);
  uVar40 = ((ushort)(bVar17 >> sVar16) | uVar40 << 0x10 - sVar16) >> (bVar15 & 0x1f);
  uVar36 = uVar32 << 1 & 0xffff0000 | (uint)uVar40;
  bVar21 = -(char)(uVar39 / uVar30);
  uVar37 = CONCAT22((short)((ulonglong)lVar4 >> 0x30),
                    CONCAT11(bVar35 >> 1 | bVar35 << 7,(char)((ulonglong)lVar4 >> 0x20)) * 0x1bd4) |
           0x400;
  uVar9 = CONCAT31((uint3)(byte)((char)bVar12 >> 7),0x61) + -0x627ecadf + (uint)((bVar21 & 1) != 0);
  if (bVar44) {
    uVar9 = uVar37;
  }
  uVar43 = uVar41 & 0xffff0000 | (uint)(ushort)((ushort)uVar41 | 1) | 0x800000;
  if ((uVar41 >> 0x17 & 1) != 0) {
    uVar43 = uVar37;
  }
  uVar10 = (CONCAT22((short)((ulonglong)lVar4 >> 0x10),
                     (short)(uVar39 % uVar30 << 8 | (ushort)bVar21) >> 1 | uVar18) - uVar36) - 1;
  uVar26 = ((uVar26 & 0xffff0000 |
             (uint)CONCAT11(bVar17 >> (bVar15 & 7) | bVar17 << 8 - (bVar15 & 7),bVar15) & 0xffffff00
            | (uint)(byte)((char)(bVar15 + 0x61) >> (bVar15 + 0x61 & 0x1f))) + 0x872747dd) *
           -0x17c8c50b;
  uVar30 = (short)uVar43 + 0xc9b2;
  uVar41 = (uint)uVar30;
  if ((short)uVar30 < 0) {
    uVar10 = uVar10 & 0xffff0000 | (uint)uVar30;
  }
  iVar27 = uVar37 + uVar10 + 1;
  uVar34 = uVar9 & 0xffff0000 | (uint)(ushort)(((short)uVar9 - (short)iVar27) - 1);
  uVar9 = uVar10 << 1;
  uVar37 = (uint)((int)uVar10 < 0);
  iVar33 = uVar34 - 1;
  uVar38 = iVar27 * 2;
  uVar30 = (short)uVar26 - (short)uVar38;
  if (uVar30 == 0) {
    uVar41 = uVar9 & 0xffff | uVar37;
  }
  uVar28 = uVar38 & 0xffffff00 | (uint)(byte)((byte)uVar38 + 0x10);
  uVar39 = (ushort)((uVar26 & 0xffff0000) >> 0x11) |
           (ushort)(((uint)((byte)uVar38 < 0xf0) << 0x1f) >> 0x10);
  uVar36 = uVar36 + CONCAT11(iVar33 == 0 || (int)uVar34 < 1,(char)iVar33);
  uVar32 = uVar32 << 1 & 0xffff0000;
  uVar30 = (ushort)((uVar26 & 0xffff0000 | (uint)uVar30) >> 1);
  sVar19 = uVar30 - 0x9a5;
  bVar21 = ((char)sVar19 - (char)((uVar38 & 0xffffff00) >> 8)) - (uVar30 < 0x9a5);
  uVar38 = CONCAT22(uVar39,sVar19) & 0xffffff00 | (uint)bVar21;
  uVar42 = uVar32 | (uint)(ushort)((short)uVar40 >> 6) & 0xffffff00 |
           (uint)(((uVar42 | uVar26 & 0xffff) >> 1 | uVar37 << 0x1f) != 0);
  uVar26 = uVar28 << 1;
  uVar30 = CONCAT11((char)(uVar9 >> 8) >> 1,(byte)uVar9 | (int)uVar10 < 0);
  if ((uVar38 & 0x64881a3c) != 0) {
    uVar42 = uVar32 | uVar36 & 0xffff;
  }
  bVar17 = (byte)(uVar42 >> 8);
  uVar26 = (uVar26 & 0xffffff00 | (uint)(byte)(((byte)uVar26 | (int)uVar28 < 0) + 0x48)) +
           0x22a73463 & 0xffff0000;
  bVar21 = bVar21 & 0xf;
  uVar32 = (uint)(ushort)(uVar30 << bVar21 | uVar30 >> 0x10 - bVar21);
  if (-1 < (int)((uVar43 & 0xffff0000 | uVar41) & uVar38)) {
    uVar32 = uVar36 & 0xffff;
  }
  uVar30 = CONCAT11(bVar17 >> 7 | bVar17 << 1,(char)uVar42) + 0x6646;
  if (-1 < (short)uVar30) {
    uVar38 = (uint)uVar39 << 0x10 | uVar41;
  }
  uVar41 = 0;
  if (uVar38 != 0) {
    while ((uVar38 >> uVar41 & 1) == 0) {
      uVar41 = uVar41 + 1;
    }
  }
  bVar21 = (byte)uVar41;
  uVar9 = (uVar9 & 0xffff0000 | uVar32) >> (bVar21 & 0x1f);
  uVar39 = (ushort)uVar9;
  uVar32 = (uVar42 & 0xffff0000 | (uint)uVar30) + (uVar36 & 0xffff | uVar26) +
           (uint)(0x417 < uVar39);
  uVar30 = (ushort)((uVar9 & 0xffff0000 | (uint)(ushort)(uVar39 - 0x418)) >> 1);
  uVar18 = CONCAT11((char)(uVar32 >> 8) >> (bVar21 & 0x1f),(char)uVar32) ^ (ushort)uVar32;
  uVar39 = uVar30 & 0x3fff;
  cVar7 = (char)(((uint)(ushort)((short)uVar30 >> 0xf) << 0x10) >> 0x18);
  uVar9 = (uint)(ushort)(uVar39 / (ushort)(bVar21 | 0xc0) & 0xff |
                        uVar39 % (ushort)(bVar21 | 0xc0) << 8);
  uVar39 = (ushort)(((uVar9 & 0xff00) << 8) >> 0x10) | (ushort)((uVar9 << 0x18) >> 0x10);
  uVar30 = (ushort)(byte)~(byte)(uVar36 & 0xffff);
  uVar40 = (ushort)uVar36 & 0xff00 | uVar30;
  bVar17 = (byte)((ushort)((short)cVar7 * (short)cVar7) >> 8);
  bVar21 = (char)uVar18 + bVar17;
  uVar36 = (uint)uVar18 & 0xffffff00;
  uVar9 = uVar32 & 0xffff0000 | uVar36 | (uint)bVar21;
  uVar41 = (uVar41 & 0x317f0000 |
           (uint)(ushort)(((ushort)CONCAT31(0xff,bVar44) & 0x9ff) + (ushort)(0x4ace < uVar40))) +
           0xe4aa517e;
  bVar15 = (byte)uVar41;
  bVar12 = (byte)(uVar36 >> 8);
  sVar19 = (short)uVar9;
  uVar41 = uVar41 & 0xffffff00 | (uint)(byte)(bVar15 + bVar12);
  if (!CARRY1(bVar15,bVar12)) {
    uVar41 = uVar9;
  }
  uVar40 = uVar40 + 0xb532;
  bVar15 = (byte)((uint)uVar40 >> 8);
  cVar7 = bVar17 - bVar15;
  cVar11 = cVar7 + -1;
  uVar36 = CONCAT31(CONCAT21(uVar39,cVar11),cVar11 == '\0');
  if ((bVar17 >= bVar15 && cVar7 != '\0') && cVar11 != '\0') {
    uVar36 = uVar36 & 0xffff | (uint)uVar39 << 0x10;
  }
  uVar42 = (uint)(bVar17 < bVar15 || cVar7 == '\0') << 0x10 | (int)sVar19 & 0xffffU;
  uVar39 = (ushort)(uVar42 >> 0xb);
  uVar24 = CONCAT11(bVar12 + 0xbf,bVar21) << 1 | (ushort)((char)(bVar12 + 0xbf) < '\0');
  bVar17 = (byte)uVar41 & 7;
  bVar12 = (byte)uVar24;
  uVar30 = ((ushort)uVar32 | 0x6dde) & ~(1 << (uVar30 & 0xf)) & (ushort)CONCAT31(0xff,!bVar44) & 0xf
  ;
  uVar18 = uVar40 & ~(1 << uVar30);
  bVar15 = (byte)((short)uVar41 >> 1);
  bVar21 = (bVar15 & 0x1f) % 0x11;
  uVar9 = (uint)((uVar40 >> uVar30 & 1) != 0) << 0x10 |
          (uint)uVar24 & 0xff00 | (uint)(byte)(bVar12 << bVar17 | bVar12 >> 8 - bVar17);
  uVar40 = (ushort)(uVar9 >> bVar21) | (ushort)(uVar9 << 0x11 - bVar21);
  bVar15 = bVar15 & 0x1f;
  uVar30 = (ushort)(byte)((char)uVar40 - (char)((uint)uVar18 >> 8)) & 0xf;
  uVar37 = (uVar26 | (ushort)(uVar18 | 1 << uVar30)) * 0x44f6f745;
  uVar9 = (uint)(ushort)((ushort)uVar37 >> 1 | (ushort)((uVar37 & 1) != 0) << 0xf);
  uVar26 = (((uint)(uint3)((uint3)((uVar36 << bVar15) >> 8) |
                          (uint3)((CONCAT22(sVar19 >> 0xf,
                                            uVar39 << 0xe | (uVar39 | (ushort)(uVar42 << 6)) >> 2)
                                  >> 0x20 - bVar15) >> 8)) << 8) >> 1) + 0xe64fd741;
  cVar7 = (char)((uint)uVar40 >> 8) << 1;
  uVar30 = CONCAT11(cVar7,((uVar18 >> uVar30 & 1) == 0) + 'H');
  uVar36 = uVar37 & 0xffff0000 |
           (uint)CONCAT11((char)(uVar9 >> 8) + -0xc,(char)((uVar9 & 0xfe) >> 1));
  if (bVar44) {
    uVar36 = uVar26;
  }
  uVar9 = uVar36 >> 8 & 0xf;
  sVar16 = (sbyte)uVar9;
  uVar39 = CONCAT11(-1 < cVar7,(char)uVar26 + -0x68 + ((uVar30 >> (uVar39 >> 2) & 1) != 0)) <<
           sVar16 | (uVar30 << 1 | 1) >> 0x10 - sVar16;
  bVar21 = (byte)uVar39 & (byte)(uVar39 >> 8);
  uVar26 = (uint)uVar39 & 0xffffff00 | (uint)bVar21;
  uVar9 = ~(uVar41 & 0xffff0000 | uVar9);
  uVar41 = 0x1f;
  if (uVar26 != 0) {
    while (uVar26 >> uVar41 == 0) {
      uVar41 = uVar41 - 1;
    }
  }
  uVar32 = (uVar32 & 0xffff0000 | (uint)uVar30) ^ uVar9;
  uVar30 = (short)~(uVar36 & 0xffffff41) * 2;
  uVar26 = (uint)CONCAT11(-(char)(((uint)uVar39 & 0xffffff00) >> 8),bVar21);
  uVar39 = uVar30 & 0xff;
  uVar36 = ~(uVar36 & 0xffffff41) & 0xffff0000 |
           (uint)(ushort)(uVar39 | (ushort)(byte)((char)((uint)uVar30 >> 8) -
                                                 ((char)(uVar32 >> 8) >> 1)) << 8) & 0xffffff00 |
           (uint)(byte)((char)uVar39 << ((byte)uVar9 & 0x1f));
  uVar9 = ~(uVar32 & 0xffdf0000 | (uint)(ushort)((short)uVar32 >> 9));
  iVar27 = 0x1f;
  uVar23 = 0x1f;
  if (uVar36 != 0) {
    while (uVar23 = (undefined)iVar27, uVar36 >> iVar27 == 0) {
      iVar27 = iVar27 + -1;
    }
  }
  uVar41 = uVar41 | 0x96cb854;
  uVar36 = uVar26 + 0xe42a6fe8;
  bVar21 = (byte)uVar41;
  uVar26 = (int)(uVar9 & 0xffff0000 |
                (uint)CONCAT11(((uVar26 < 0x1bd59018 || uVar36 == 0) + '\'') - (uVar26 < 0x1bd59018)
                               ,(char)uVar9)) >> (bVar21 & 0x1f);
  uVar9 = 0;
  if (uVar26 != 0) {
    while ((uVar26 >> uVar9 & 1) == 0) {
      uVar9 = uVar9 + 1;
    }
  }
  uVar30 = (ushort)uVar41 >> 1 | (ushort)uVar41 << 0xf;
  bVar21 = bVar21 << (bVar21 & 0x1f) ^ (byte)(uVar41 >> 8);
  if (bVar44) {
    uVar23 = 7;
  }
  bVar17 = bVar21 * '\x02' + 1;
  uVar39 = CONCAT11((char)bVar21 < '\0',uVar23) + 0x9af6;
  uVar26 = uVar26 & 0xffff0000 | (uint)CONCAT11(!bVar44,(char)uVar26);
  bVar21 = (bVar17 & 0x1f) % 9;
  uVar40 = uVar39 & 0xff;
  bVar17 = bVar17 & 0x1f;
  uVar32 = uVar26 << bVar17 | uVar26 >> 0x20 - bVar17;
  uVar26 = uVar41 & 0xffff0000;
  sVar19 = (short)((uint)((int)(short)uVar30 * -0x335c) >> 0x10);
  uVar42 = (uint)uVar30 << 0x11 |
           (uint)(CONCAT14(sVar19 != 0 && sVar19 != -1,uVar41 & 0xffff0000 | (uint)uVar30) >> 0x10);
  uVar41 = (uint)CONCAT11((char)uVar36,(char)uVar36);
  bVar17 = (byte)(((int)(short)uVar30 * -0x335c & 0xfeU) >> 1);
  if (((int)uVar42 >> 0xc & 0x212470faU) == 0) {
    uVar32 = uVar32 & 0xffff0000 | 0xc0b8;
  }
  uVar37 = (uVar26 | CONCAT11(1,bVar17)) * 5 + 0xd3 & 0xffff;
  uVar32 = uVar32 + 0xc7f73570;
  uVar36 = (uVar36 & 0xffff0000 | uVar41) << 1;
  bVar15 = (byte)uVar36 | 1;
  bVar12 = (byte)(uVar32 >> 8);
  bVar35 = bVar12 ^ (bVar15 == bVar12) * (bVar12 ^ (byte)uVar32);
  uVar30 = CONCAT11(bVar35,(byte)uVar32);
  bVar15 = bVar15 ^ (bVar15 == bVar12) * (bVar15 & bVar35);
  if (bVar17 == 0x39) {
    uVar37 = (uint)(ushort)(uVar39 & 0xff00 |
                           (ushort)(byte)((byte)(uVar40 << bVar21) | (byte)(uVar40 >> 9 - bVar21)));
  }
  uVar37 = uVar9 & 0xffff0000 | uVar37;
  uVar39 = (CONCAT11(1,bVar17) - 0x3d0) + (ushort)(bVar17 < 0x39);
  if (uVar39 == 0) {
    uVar30 = (ushort)((uVar41 & 0x7f80) << 1) | (ushort)bVar15;
  }
  uVar39 = uVar39 >> 5;
  bVar17 = (byte)uVar39;
  bVar21 = bVar17 & 0xf;
  uVar40 = uVar30 << bVar21 | uVar30 >> 0x10 - bVar21;
  sVar19 = (short)(char)bVar15 * (short)(char)bVar17;
  cVar7 = (char)((ushort)sVar19 >> 8);
  uVar39 = uVar39 << 4;
  cVar11 = (char)uVar40;
  uVar9 = (uVar32 & 0xffff0000 | (uint)uVar40) * 2 + 1;
  uVar30 = (short)CONCAT31((int3)(uVar9 >> 8),0xcb) + (short)cVar11;
  uVar9 = uVar9 & 0xffff0000;
  cVar29 = (char)uVar30;
  bVar17 = -cVar29;
  uVar41 = (uint)uVar30 & 0xffffff00;
  uVar1 = (ulonglong)(uVar37 | 0xc0000000);
  uVar3 = CONCAT44(CONCAT22((undefined2)(cVar11 >> 7),
                            uVar40 & 0xff |
                            (ushort)(byte)((cVar11 >> 7) + (char)(uVar41 >> 8) + (cVar29 != '\0'))
                            << 8),
                   (uVar36 & 0xffff0000 |
                   (uint)(ushort)(short)(char)((char)sVar19 << 1 | (cVar7 != '\0' && cVar7 != -1)))
                   ^ uVar37);
  uVar2 = uVar3 / uVar1;
  uVar3 = uVar3 % uVar1;
  bVar21 = (byte)uVar39;
  uVar36 = ((int)uVar42 >> 0x1f) << (bVar21 & 0x1f) |
           (uVar26 | (uint)uVar39) >> 0x20 - (bVar21 & 0x1f);
  uVar41 = (uVar9 | uVar41 | (uint)bVar17) >> 1;
  cVar7 = (char)(uVar41 >> 8);
  uVar30 = (((short)uVar3 - (short)(uVar36 * 0x7514595)) - (ushort)((bVar17 & 1) != 0)) * 0x2000;
  if ('\0' < cVar7) {
    uVar30 = (ushort)uVar36;
  }
  uVar32 = (int)(short)uVar30 * -0x765 & 0xffff;
  sVar19 = (short)((uint)((int)(short)uVar30 * -0x765) >> 0x10);
  bVar17 = (bVar21 & 0x1f) % 9;
  bVar17 = (byte)((uVar39 & 0xff | (ushort)(sVar19 != 0 && sVar19 != -1) << 8) >> bVar17) |
           bVar21 << 9 - bVar17;
  uVar42 = (uint)uVar39 & 0xffffff00;
  uVar43 = uVar36 & 0xffff0000 | (uint)(ushort)((ushort)uVar36 ^ uVar30);
  uVar37 = (uVar26 | uVar42 | (uint)bVar17) & 0xffff7075;
  bVar21 = (byte)uVar37 & 0x1f;
  uVar43 = uVar43 << bVar21 | uVar43 >> 0x20 - bVar21 | 0xc0000000;
  uVar1 = CONCAT44(CONCAT22((ushort)(uVar9 >> 0x11),CONCAT11(-cVar7,(char)uVar41)),
                   CONCAT22((short)(uVar2 >> 0x10),
                            CONCAT11((char)(uVar2 >> 8) + (char)(uVar42 >> 8) >>
                                     ((byte)uVar37 & 0x1f),(char)uVar2))) & 0x3fffffffffffffff;
  uVar2 = uVar1 / (ulonglong)uVar43;
  uVar41 = (int)(short)uVar2 * (int)(short)uVar37;
  uVar1 = CONCAT44(CONCAT22((short)(uVar1 % (ulonglong)uVar43 >> 0x10),(short)(uVar41 >> 0x10)),
                   ((uVar41 & 0xffff | (uint)(ushort)(uVar2 >> 0x10) << 0x10) + 0x70fdcb38) -
                   (uint)((int)uVar43 < 0)) & 0x3fffffffffffffff;
  uVar30 = (ushort)(uVar36 * 0x7514595 + CONCAT22((short)(uVar3 >> 0x10),uVar30) >> 0x10);
  uVar39 = CONCAT11((char)(uVar37 >> 8),bVar17) & 0xff75;
  uVar41 = CONCAT22(uVar30,0x8518) << 7;
  uVar9 = (int)(uVar1 / (ulonglong)(uVar37 | 0xc0000000)) >> (bVar17 & 0x15);
  uVar40 = ((ushort)uVar41 | uVar30 >> 9) ^ uVar39;
  uVar30 = (uVar39 | 0xb) + (short)uVar9 + 1;
  cVar7 = (char)uVar30;
  bVar21 = cVar7 + (char)(uVar9 >> 8);
  uVar36 = uVar26 | 0xc0000000 | (uint)uVar30 & 0xffffff00 | (uint)bVar21;
  if ((char)bVar21 < '\0') {
    uVar36 = uVar32 | 0xc2020000;
  }
  bVar21 = (byte)uVar36 & 0x1f;
  uVar14 = (uint3)(((uVar9 & 0xffff0000 | (uint)CONCAT11(cVar7,(char)uVar9)) >> bVar21) >> 8) |
           (uint3)((uVar36 << 0x20 - bVar21) >> 8);
  uVar42 = (int)(short)(uVar1 % (ulonglong)(uVar37 | 0xc0000000)) ^ 0x4dfd220c;
  uVar9 = CONCAT31(uVar14,bVar44);
  bVar21 = (byte)uVar36 & 0xf;
  uVar30 = (ushort)uVar32;
  uVar39 = uVar30 << bVar21 | uVar30 >> 0x10 - bVar21;
  uVar26 = (uint)(ushort)(short)(char)(uVar42 >> 8);
  uVar32 = uVar36 & 0xffff0000 | uVar26;
  lVar4 = (longlong)(int)(uVar9 >> 7 | uVar9 << 0x19) * (longlong)(int)uVar32;
  uVar30 = uVar40 & 0xf;
  sVar19 = (short)((ulonglong)lVar4 >> 0x10);
  uVar9 = (int)((ulonglong)lVar4 >> 0x20) << 0x1f;
  bVar21 = (byte)(uVar32 >> 1);
  uVar37 = (int)(uVar41 & 0xffff0000 | (uint)uVar40) >> (bVar21 & 0x1f);
  uVar41 = CONCAT22(sVar19,(short)lVar4 << 1 | (ushort)((0U >> uVar30 & 1) != 0)) << 1;
  uVar32 = (uVar36 & 0xffff0000 | uVar26 & 0xfffffe00) >> 1 | uVar9 |
           (uint)(byte)(bVar21 << 4 | bVar21 >> 4);
  uVar26 = uVar41 & 0xffffff00 |
           (uint)(byte)(((byte)uVar41 | sVar19 < 0) << (bVar21 << 4 & 0x1f | bVar21 >> 4));
  uVar41 = uVar26;
  if ((int)(uVar37 & ((uint)uVar39 | 0xc2020000)) < 0) {
    uVar32 = (uVar36 & 0xfffe0000) >> 1 | uVar9 | uVar37 & 0xffff;
    uVar41 = (uint)(ushort)((1 << uVar30) + uVar39);
  }
  bVar21 = (byte)uVar32 & 0x1f;
  uVar26 = uVar26 << bVar21 | uVar32 >> 0x20 - bVar21;
  sVar16 = (sbyte)(uVar32 & 0xffffff0f);
  uVar40 = (ushort)(uVar32 & 0xffffff0f);
  uVar30 = (ushort)uVar26 >> sVar16 | uVar40 << 0x10 - sVar16;
  uVar36 = uVar32 & 0xffff0000;
  uVar9 = (uint)(ushort)(uVar30 & 0xff | (ushort)(byte)((char)((uint)uVar30 >> 8) + 0x7e) << 8);
  uVar40 = (uVar40 & 0xfffd) * 2 + 1;
  uVar37 = ((uint)(ushort)(uVar39 - uVar30 >> 1 | (ushort)((uVar39 - uVar30 & 1) != 0) << 0xf) |
           0xc2020000) << 1;
  uVar2 = (longlong)(int)(uVar26 & 0xffff0000 | uVar9 & 0xffffff00 | (uVar9 & 0xfe) >> 1) *
          (longlong)(int)(uVar41 & 0xffff0000 | (uint)((ushort)uVar41 & 0xffdf | uVar39));
  uVar39 = (ushort)uVar37 | 1 << (uVar40 & 0xf);
  uVar37 = uVar37 & 0xffff0000 | (uint)uVar39;
  uVar9 = (uint)uVar2 & ~(1 << ((uint)(byte)((char)uVar42 + (byte)uVar32 + 0x4e) & 0x1f));
  uVar1 = (ulonglong)
          (uVar36 | (uint)uVar40 & 0xffffff00 | (uint)(byte)((char)uVar40 << 4) | 0xc0000000);
  uVar2 = uVar2 & 0x3fffffff00000000 |
          (ulonglong)(uVar9 & 0xffff0000 | (uint)(ushort)(short)(char)uVar9);
  uVar3 = uVar2 / uVar1;
  uVar30 = (ushort)uVar3 | 0x5200;
  uVar39 = uVar39 + 0x89b0;
  bVar44 = (short)(uVar30 << 4) < 0;
  uVar30 = uVar30 << 5 | (ushort)bVar44;
  iVar27 = CONCAT22((short)(uVar3 >> 0x10),uVar30) >> 1;
  uVar26 = iVar27 + 1;
  uVar9 = (uint)(uVar2 % uVar1);
  if (uVar26 != 0 && SCARRY4(iVar27,1) == (int)uVar26 < 0) {
    uVar9 = uVar37;
  }
  uVar26 = uVar26 & ~(1 << (bVar44 != (short)uVar30 < 0));
  iVar27 = 0x1f;
  if (uVar9 != 0) {
    while (uVar9 >> iVar27 == 0) {
      iVar27 = iVar27 + -1;
    }
  }
  lVar4 = (ulonglong)
          ((uVar26 & 0xffff0000 | (uint)CONCAT11((char)(uVar26 >> 8) + '+',(char)uVar26)) - uVar37 &
          0xffff0000) * (ulonglong)uVar9;
  bVar44 = (int)((ulonglong)lVar4 >> 0x20) != 0;
  uVar18 = -(ushort)bVar44;
  sVar25 = (short)((ulonglong)lVar4 >> 0x20);
  sVar19 = sVar25 << 1;
  bVar15 = ~(byte)sVar19;
  uVar30 = ((short)((uVar36 | 0xc0007fdf) >> 1) - (uVar39 & 0x5941)) - (ushort)(sVar25 < 0);
  bVar21 = (((byte)(uVar36 >> 0x18) | 0xc0) >> 1) - 0x1e;
  uVar40 = (short)uVar18 >> 0xf;
  bVar17 = bVar21 & 0x1f;
  uVar42 = CONCAT31((uint3)((((uVar32 & 0x1fe0000) >> 0x11) << 0x10) >> 0x10) |
                    (uint3)uVar30 & 0xff00 | (uint3)(((uint)uVar30 << 0x18) >> 8),bVar21) << bVar17
           | ((uVar41 & 0xffff0000 | (uint)uVar39 & 0xffff5941) << 1 |
             (iVar27 + 0x9129d3ceU ^ (uVar36 | 0xc0007fdf)) >> 0x1f) >> 0x20 - bVar17;
  bVar21 = (byte)uVar42;
  bVar17 = (byte)(uVar42 >> 8);
  uVar39 = CONCAT11(bVar17 + bVar21,bVar21);
  uVar37 = CONCAT22(uVar40,uVar18 >> 10 | (ushort)bVar44 * -0x40) << 1 | (uint)CARRY1(bVar17,bVar21)
  ;
  uVar36 = (uint)((short)uVar40 < 0) << 0x1f;
  uVar9 = (uint)lVar4 >> 1 & 0xffff0000 | uVar36;
  uVar26 = (uint)uVar39 & 0xff;
  uVar32 = uVar9 | uVar26;
  uVar43 = (uint)bVar44 * -2 | (uint)bVar44;
  uVar41 = 0;
  if (uVar32 != 0) {
    while ((uVar32 >> uVar41 & 1) == 0) {
      uVar41 = uVar41 + 1;
    }
  }
  uVar18 = (ushort)uVar37;
  uVar39 = uVar39 | uVar18;
  uVar32 = (int)((uint)(ushort)((ulonglong)lVar4 >> 0x30) << 0x10 |
                 (uint)CONCAT11((char)((ushort)sVar19 >> 8) << ((byte)uVar30 & 0x1f),bVar15) &
                 0xffffff00 | (uint)(byte)(bVar15 - 9)) >> 0x1d;
  if ((short)uVar39 < 1) {
    uVar32 = uVar41;
  }
  bVar17 = (byte)uVar26;
  iVar27 = (int)(uVar42 & 0xffff0000 | (uint)uVar39) >> 1;
  iVar27 = CONCAT22((short)((int)(uVar42 & 0xffff0000) >> 0x11),
                    CONCAT11((char)((uint)iVar27 >> 8) + -2,(char)iVar27)) + 0x6e04fc14;
  cVar7 = (char)((uint)iVar27 >> 8);
  uVar39 = CONCAT11(cVar7,bVar17) | 0x1e2;
  bVar21 = (char)iVar27 + cVar7;
  uVar22 = CONCAT21((short)((uint)iVar27 >> 0x10),(char)iVar27);
  uVar42 = uVar41 & 0xffff0000;
  uVar26 = uVar43 + 0x57ea8de8;
  uVar30 = (ushort)((ulonglong)lVar4 >> 0x10) >> 1 | (ushort)(uVar36 >> 0x10);
  if ((SCARRY4(uVar43,0x57ea8de8) != SCARRY4(uVar26,0)) != (int)uVar26 < 0) {
    uVar30 = (ushort)(uVar42 >> 0x10);
  }
  uVar38 = CONCAT31(uVar22,bVar21) & 0xffffff0f;
  bVar12 = (byte)uVar38;
  bVar15 = (byte)((uint)uVar39 >> 8);
  iVar27 = (uVar26 | 0x80000) << 1;
  uVar36 = (int)(short)((ushort)bVar17 | 0xe2 |
                       (ushort)(byte)(bVar15 >> (bVar12 & 7) | bVar15 << 8 - (bVar12 & 7)) << 8) *
           (int)(short)(ushort)uVar38;
  uVar37 = (uVar37 ^ ((uint)uVar40 & 0x800) << 0x11) & 0xffff0000;
  uVar9 = (int)(uVar9 | (ushort)(short)(char)uVar36) >> bVar12;
  uVar10 = uVar9 & 0xffff0000 | (uint)(ushort)((short)uVar9 * -0x52c4);
  uVar9 = ((uint)uVar22 & 0xffff00) << 8;
  uVar43 = CONCAT22(uVar30,0x1e6d);
  if ((((uVar32 & 0xffff0000 | (uint)(ushort)((ushort)uVar32 >> bVar12 | uVar39 << 0x10 - bVar12)) +
        uVar38 + 1 & 0xffff0000 | uVar36 >> 0x10 | 0xa200) >> ((uint)bVar21 & 0xf) & 1) == 0) {
    uVar43 = uVar10;
  }
  uVar36 = (uVar37 | (ushort)((uVar18 << 8 | (ushort)uVar38 >> 8) >> 1)) << 10;
  sVar19 = ((ushort)(uVar37 >> 0x16) | (ushort)uVar36) +
           ((ushort)iVar27 | (ushort)((int)(uVar26 | 0x80000) < 0));
  uVar36 = uVar36 & 0xffff0000;
  lVar4 = (longlong)(int)uVar10 * (longlong)(int)uVar9;
  uVar30 = (ushort)((ulonglong)lVar4 >> 0x20);
  uVar40 = (short)uVar41 - 1U ^ 1 << (uVar30 & 0xf);
  uVar41 = uVar42 | uVar40;
  uVar39 = (ushort)((uint)iVar27 >> 0x10);
  if ((byte)uVar43 < 0xd7) {
    uVar39 = (ushort)(uVar36 >> 0x10);
  }
  uVar24 = sVar19 * 2;
  uVar26 = (uVar43 & 0xffffff00 | (uint)(byte)((byte)uVar43 + 0x68 + (sVar19 < 0))) - uVar41;
  uVar31 = (ushort)(uVar26 & 0xffffff00) | 0x7c;
  uVar20 = (ushort)(byte)((char)uVar26 + 0x29) | 0x57c0;
  uVar18 = uVar24 & 0xf;
  if (uVar31 == 0x2e28) {
    uVar30 = uVar31;
  }
  uVar6 = uVar30 & 0xff;
  uVar32 = (uVar36 | uVar24) + 0xb24d59c1 + (uint)(uVar31 < 0x2e28);
  uVar36 = 0x1f;
  if (uVar41 != 0) {
    while (uVar41 >> uVar36 == 0) {
      uVar36 = uVar36 - 1;
    }
  }
  bVar21 = (byte)((uVar26 & 0xffffff00) >> 8);
  uVar24 = (byte)uVar36 * uVar6;
  uVar37 = CONCAT22((short)((ulonglong)lVar4 >> 0x30),CONCAT11(7,(char)uVar6));
  cVar7 = (char)uVar24;
  bVar17 = (byte)((uint)uVar24 >> 8);
  uVar41 = (uint)(ushort)(uVar39 >> 1 |
                         (ushort)(((uint)((uVar20 >> uVar18 & 1) != 0) << 0x1f) >> 0x10)) << 0x10;
  if (!SCARRY4((uVar9 | (ushort)(uVar20 | 1 << uVar18)) ^ 0xa09a795c,0x6682c739)) {
    uVar41 = uVar37;
  }
  uVar39 = CONCAT11(bVar17 << 3 | bVar17 >> 5,cVar7 << 1 | cVar7 < '\0');
  uVar37 = uVar37 & 0xd3cf846d;
  uVar43 = uVar37 + 0x7b3aeca0;
  uVar18 = (ushort)uVar43 & 0xff00 | (ushort)(byte)(((char)uVar43 << 1 | uVar37 < 0x84c51360) << 1);
  uVar20 = (ushort)uVar32;
  uVar24 = uVar18 ^ (ushort)(uVar39 == uVar18) * (uVar18 ^ uVar20);
  bVar17 = (byte)uVar24;
  cVar11 = (char)((uint)(ushort)((ushort)uVar37 | 1) >> 8);
  uVar26 = (uVar26 & 0xffff0000 | (uint)(byte)(bVar21 >> 1 | bVar21 << 7) << 8) + 0x5fe9cce4 +
           (uint)((uVar30 & 1) != 0);
  uVar30 = (uVar39 ^ (ushort)(uVar39 == uVar18) * (uVar39 & uVar24)) >> 1;
  bVar21 = (bVar17 & 0x1f) % 9;
  cVar7 = (char)((uint)uVar30 >> 8);
  bVar21 = (byte)(CONCAT11((uVar20 >> 3 & 1) != 0,cVar7) >> bVar21) | cVar7 << 9 - bVar21;
  uVar9 = (uint)(ushort)(uVar30 & 0xff | (ushort)(byte)(bVar21 + 1) << 8);
  if (!SCARRY1(bVar21,'\x01')) {
    cVar11 = (char)((uint)(uVar20 & 0xfff7) >> 8);
  }
  uVar37 = uVar36 & 0xffff0000 | uVar9;
  if ((char)(cVar11 + (char)(uVar9 >> 8)) != '\0') {
    uVar37 = uVar32 & 0xffff0000 | (uint)(uVar20 & 0xfff7);
  }
  bVar21 = (byte)uVar37;
  bVar15 = (byte)(uVar37 >> 8);
  bVar12 = bVar15 ^ (bVar21 == bVar15) * (bVar15 ^ (byte)(uVar26 >> 8));
  uVar37 = uVar37 & 0xffff0000;
  bVar17 = bVar17 + 0x7e;
  uVar32 = (uint)(ushort)(CONCAT11(bVar12,bVar21 ^ (bVar21 == bVar15) * (bVar21 & bVar12)) >>
                         (bVar17 & 0x1f));
  uVar26 = uVar26 | 1 << (uVar32 & 0x1f);
  cVar7 = (char)(uVar37 >> 0x18);
  cVar11 = cVar7 >> 0xf;
  uVar30 = (ushort)((int)uVar37 >> 0x2f);
  bVar21 = -cVar11;
  uVar9 = (uint)CONCAT11(cVar11,bVar17);
  uVar10 = uVar43 & 0xffff0000 | uVar9 | 0xc000;
  uVar9 = uVar9 | 0xc000;
  uVar32 = ((uint)CONCAT11(bVar21,cVar7 >> 7) & 0x3fff) << 0x10 | uVar32;
  uVar43 = uVar32 / uVar9 & 0xffff;
  uVar37 = uVar37 | uVar43;
  uVar26 = uVar26 & 0xffff0000 |
           (uint)CONCAT11((byte)(uVar26 >> 8) & bVar21,(char)uVar26) & 0xffffff00 |
           (uint)(byte)((char)uVar26 + 1);
  if (0 < (short)((ushort)uVar43 | 0x5ca2)) {
    uVar26 = uVar37 | 0x5ca2;
  }
  uVar9 = uVar32 % uVar9 & 0x1f;
  uVar32 = uVar10 ^ 1 << uVar9;
  bVar21 = (byte)uVar32 & 0x1f;
  uVar5 = CONCAT14((uVar10 >> uVar9 & 1) != 0,uVar37) | 0x5ca2;
  uVar9 = (int)uVar5 << bVar21 | (uint)(uVar5 >> 0x21 - bVar21);
  iVar27 = (uVar9 & 0xffff) * (uVar9 & 0xffff);
  bVar17 = ((char)uVar26 - (char)((uint)iVar27 >> 0x10)) - 1;
  uVar37 = (uVar41 & 0xffff0000 | uVar41 >> 1 & 0x7fff) * 0x2f339212;
  uVar39 = (ushort)iVar27 & ~(1 << ((ushort)(uVar32 >> 1) & 0xf));
  uVar22 = (uint3)(uVar32 >> 9);
  cVar7 = (char)(uVar32 >> 1) + bVar17 + '\x01';
  bVar44 = cVar7 == '\0';
  bVar21 = (byte)((uint)iVar27 >> 0x18);
  uVar26 = uVar26 & 0xffff0000 | (uint)(ushort)~((ushort)uVar26 & 0xff00 | (ushort)bVar17);
  uVar39 = uVar39 & 0xff00 | (ushort)(byte)(((byte)uVar39 | bVar21) + 1);
  uVar18 = CONCAT11(bVar21 >> 1,bVar44);
  uVar20 = (ushort)CONCAT31(uVar22,cVar7);
  uVar9 = (uint)(ushort)((short)uVar37 + uVar20);
  uVar24 = (short)(char)uVar22;
  if ((short)uVar39 < 0 == (short)(uVar39 << 1 | (ushort)((short)uVar39 < 0)) < 0) {
    uVar24 = uVar20;
  }
  uVar10 = uVar26 ^ 1 << (uVar9 & 0x1f);
  uVar43 = (uint)uVar30 << 0x10 | (uint)uVar18 & 0xffffff00 | (uint)(byte)(bVar44 + 0x47);
  if (bVar44 < 0xb9) {
    uVar43 = uVar10;
  }
  uVar36 = uVar42 | (ushort)((((uVar40 >> 0xb | (uVar6 | (ushort)(0x2e27 < (short)uVar31) << 8) << 5
                               ) + (short)uVar36 & 0xfffe) * 4 >> 1 | 0x8000) ^ 0x8000);
  if ((uVar14 & 0x200) != 0) {
    uVar36 = uVar43;
  }
  uVar43 = uVar43 ^ 0x1fa32136;
  uVar41 = uVar9 | uVar41 & 0xffff0000;
  iVar33 = uVar41 + 0x610c13a;
  bVar44 = iVar33 == 0 || (SCARRY4(uVar41,0x610c139) != SCARRY4(uVar41 + 0x610c139,1)) != iVar33 < 0
  ;
  iVar27 = (int)(short)(uVar24 & 0xff00 | (ushort)uVar43 & 0xff) * (int)(short)iVar33;
  uVar40 = (ushort)((uint)iVar27 >> 0x10);
  uVar41 = uVar43 & 0xffff0000 | (uint)uVar40 & 0xffffff00;
  uVar42 = (uint)(byte)((char)((uint)iVar27 >> 0x10) + (char)(uVar10 >> 8) +
                       (uVar40 != 0 && uVar40 != 0xffff));
  uVar38 = (int)(uVar37 & 0xffff0000 | uVar9) >> bVar44;
  uVar39 = (ushort)((iVar33 * 2 | (uint)(iVar33 < 0)) << 1) | (ushort)((uint)(iVar33 * 2) >> 0x1f);
  uVar24 = (ushort)((uVar41 | uVar42) << 1) | 1;
  uVar39 = CONCAT11(((int)uVar43 < 1) + '2',bVar44) << 1 |
           (ushort)(CARRY2(uVar39,uVar24) || 0xfffe < (ushort)(uVar39 + uVar24));
  uVar39 = uVar39 ^ 1 << (uVar39 + uVar24 * 4 & 0xf);
  uVar32 = (int)(uVar32 & 0xfffe0000 | (uint)uVar39) >> ((byte)uVar39 & 0x1f);
  uVar37 = (uVar41 & 0x7fff8000) << 1 | uVar32 & 0xffff;
  uVar41 = ((uint)uVar40 & 0x7f00 | uVar42) << 1 | 1;
  uVar42 = (uVar10 | 0xd7) << 5 | uVar38 >> 0x1b;
  uVar9 = CONCAT22(uVar30,uVar18) + -0x7dc9c4b0 + uVar26 * 4 & 0xffff0000 |
          (uint)CONCAT11(1,(char)iVar27);
  uVar41 = (int)(uVar32 & 0xffff0000 | uVar41) >> ((byte)uVar41 & 0x1f);
  uVar32 = uVar37 ^ (uint)(uVar9 == uVar37) * (uVar37 ^ uVar9);
  uVar9 = uVar9 ^ (uint)(uVar9 == uVar37) * (uVar9 & uVar32);
  bVar21 = (byte)uVar41 & 7;
  bVar17 = (byte)(uVar9 >> 8);
  uVar26 = (uVar41 & 0xffff0000 | (uint)(ushort)((short)(uVar41 >> 1) << 1 | 1)) + 1;
  uVar41 = (uint)(byte)((char)uVar26 + 0xb1) & 0xffffff0f;
  sVar16 = (sbyte)uVar41;
  return (uVar9 & 0xffff0000 | (uint)CONCAT11(bVar17 << bVar21 | bVar17 >> 8 - bVar21,(char)uVar9))
         + uVar42 + (uVar26 & 0xffffff00 | uVar41) + uVar32 +
         (uVar38 << 4 & 0xffff0000 | (uint)(ushort)((short)(uVar38 << 4) << 1 | 1)) +
         CONCAT22(0x4741,(((ushort)uVar38 ^ 0x185a) & 0x7fff | 1 << ((ushort)uVar42 & 0xf)) <<
                         sVar16 | (ushort)uVar36 >> 0x10 - sVar16) + uVar36 + -0x48b079a6;
}



// WARNING: Removing unreachable block (ram,0x0804d1a2)
// WARNING: Removing unreachable block (ram,0x0804cecc)
// WARNING: Removing unreachable block (ram,0x0804cee9)
// WARNING: Removing unreachable block (ram,0x0804d131)
// WARNING: Removing unreachable block (ram,0x0804d460)
// WARNING: Removing unreachable block (ram,0x0804d54b)
// WARNING: Removing unreachable block (ram,0x0804d07d)
// WARNING: Removing unreachable block (ram,0x0804cf54)
// WARNING: Removing unreachable block (ram,0x0804cfaa)
// WARNING: Removing unreachable block (ram,0x0804d080)

int log_size_10_var_005(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint5 uVar5;
  byte bVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  sbyte sVar12;
  byte bVar16;
  ushort uVar13;
  char cVar17;
  uint uVar14;
  uint uVar15;
  byte bVar18;
  uint3 uVar19;
  byte bVar20;
  short sVar21;
  byte bVar23;
  int iVar22;
  ushort uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  undefined2 uVar35;
  uint uVar34;
  ushort uVar36;
  uint uVar37;
  bool bVar38;
  bool bVar39;
  
  iVar22 = 0x1f;
  while (0x8555ef0fU >> iVar22 == 0) {
    iVar22 = iVar22 + -1;
  }
  uVar28 = (ushort)(byte)((char)(((uint)(ushort)((ushort)iVar22 & 0xff |
                                                (ushort)(byte)((char)((uint)iVar22 >> 8) << 3) << 8)
                                 << 1) >> 8) + 0x77);
  uVar14 = 0;
  while ((0x66U >> uVar14 & 1) == 0) {
    uVar14 = uVar14 + 1;
  }
  uVar36 = 0xb300;
  if ((uVar14 & 0x66) != 0) {
    uVar36 = uVar28;
  }
  uVar27 = (uint)(ushort)((uVar28 << 1 | 1) << 1);
  bVar11 = (byte)(uVar27 >> 8);
  bVar16 = (byte)((uVar27 & 0xfe) >> 1);
  bVar23 = bVar11 ^ (bVar11 == 1) * (bVar11 ^ bVar16);
  uVar27 = (uint)CONCAT11(bVar23,bVar16) | 0x433c000;
  uVar13 = (ushort)(((uint)(byte)((bVar11 == 1) * (bVar23 & 1) ^ 1) | 0x81b50000) << 1);
  uVar28 = (ushort)(byte)(uVar27 >> 8);
  iVar22 = uVar27 << 1;
  uVar29 = (ushort)iVar22;
  uVar36 = uVar36 << 1 | uVar29 >> 0xf;
  sVar7._1_1_ = (char)iVar22;
  if (!SCARRY2(uVar36,uVar29)) {
    sVar7._1_1_ = '\x01';
  }
  uVar27 = ((uint)(ushort)(uVar36 + uVar29) | 0xc7600000) - 1 & 0xffff0000;
  uVar37 = uVar27 | 0x4000;
  lVar4 = (ulonglong)
          (((uint)(ushort)(((uVar13 % uVar28 << 8 | uVar13 / uVar28 >> 1) >> 1) + 0xd6b1) |
           0x36a0000) << 9 | 6) * (ulonglong)uVar37;
  if (sVar7._1_1_ != '\x01') {
    uVar37 = uVar27 | (uint)((ulonglong)lVar4 >> 0x23) & 0xff;
  }
  uVar31 = (uint)(ushort)(~(((ushort)uVar14 & 0x66) << 9) + 0x8091) + 0xb3f0c44d;
  uVar28 = (short)uVar31 >> 0x1e;
  uVar37 = uVar37 + 1 & 0xfffffffe;
  uVar36 = uVar28 >> 6 | uVar28 << 10;
  uVar3 = (longlong)(int)((uint)(ushort)((ulonglong)lVar4 >> 0x10) << 0x11) * 0x2080e;
  bVar38 = (uVar3 & 0x10000000000) != 0;
  uVar28 = (ushort)(uVar3 >> 0x30);
  uVar27 = (uint)(ushort)((ushort)(byte)(0xa9 - bVar38) << 8 | 0xff);
  uVar14 = 0x1f;
  if (uVar37 != 0) {
    while (uVar37 >> uVar14 == 0) {
      uVar14 = uVar14 - 1;
    }
  }
  uVar27 = (((uVar27 & 0x3fffffc0 | 0x20000) << 2 |
            (uint)(byte)(((byte)(uint)(CONCAT14(0xa9 < bVar38,uVar27) >> 0x1f) |
                         (byte)((uVar27 | 0x20000) << 2)) - 1)) ^ 0xdb) << 1;
  uVar31 = uVar31 & 0xffff0000 | (uint)(ushort)(uVar36 - 1 >> 1 | 0x8000);
  bVar11 = (byte)uVar27 & 7 | 1;
  uVar25 = CONCAT22(0xff,uVar36 + 0x7fff) ^ (uint)(ushort)(uVar36 + 0x7fff) & 0x100;
  uVar37 = (uint)((byte)((byte)((int)(short)uVar36 << 1) | (int)(short)uVar36 < 0) < 0xfa) << 0x10 |
           uVar27 & 0xffff | 1;
  uVar36 = (ushort)(uVar37 >> 10) | (ushort)(uVar37 << 7);
  uVar32 = (uVar31 << 1 | (uint)((int)uVar31 < 0)) ^ 1 << (uVar25 & 0x1f);
  uVar37 = ((uint)CONCAT21(uVar28,0U >> bVar11 | '\0' << 8 - bVar11) << 8) >> 7;
  bVar16 = (byte)(uVar37 >> 8);
  bVar11 = (byte)uVar37;
  uVar37 = (((uint)uVar28 & 0xff80) << 0x10) >> 7;
  uVar28 = 0 >> ((byte)uVar36 & 0x1f);
  uVar27 = uVar27 & 0xffff0000 | (uint)uVar36 & 0xffffff00 |
           (uint)(byte)((byte)uVar36 ^ (byte)((uint)uVar28 >> 8));
  uVar31 = uVar37 | (uint)CONCAT11(bVar16 << 2 | bVar16 >> 6,bVar11) & 0xffffff00 |
           (uint)(byte)(bVar11 - 0x36);
  if (bVar11 < 0x36 && (byte)(bVar11 - 0x36) != 0) {
    uVar31 = uVar37 | uVar25 & 0xffff;
  }
  uVar14 = uVar14 & 0xffff0000 |
           (uint)(ushort)((short)((ushort)uVar14 >> 0xd | uVar36 << 3) >> 0x17);
  uVar8 = CONCAT22((short)uVar28 >> 0xf,uVar28 >> 1);
  uVar33 = uVar32 - uVar27;
  uVar37 = uVar14 ^ (uint)(uVar8 == uVar14) *
                    (uVar14 ^ (uVar31 & 0xffff0000 |
                              (uint)CONCAT11(~(byte)(uVar31 >> 8),(char)uVar31)));
  uVar8 = uVar8 ^ (uint)(uVar8 == uVar14) * (uVar8 & uVar37);
  uVar37 = uVar37 << 1;
  bVar11 = (byte)uVar8;
  bVar38 = ((ushort)bVar11 * (ushort)bVar11 & 0x400) != 0;
  uVar31 = (uint)((ushort)(uVar37 >> 0xe) & 3 | 0x8000);
  uVar34 = uVar37 & 0xffff0000 | uVar31;
  uVar14 = (uint)(uVar27 <= uVar32) * 0x100 + 0x29322a49;
  uVar25 = uVar33 & 0xffff0000 |
           (uint)(ushort)(~((short)uVar33 + (short)uVar25 + 1U) + (short)((int)uVar25 >> 6) * -2);
  uVar27 = uVar14 & 0x1f;
  uVar32 = uVar25 | 1 << uVar27;
  uVar27 = (((int)(short)(uVar8 >> 0x10) >> 0xf & 0x3fffU) << 0x10 |
           ((uint)((uVar25 >> uVar27 & 1) != 0) << 0x10) >> 0xd) % (uVar31 | 0xc000);
  iVar22 = (uint)CONCAT11(0xd0,(byte)((uVar34 << 10) >> 0x18) | 0x42) * 0x26812155;
  uVar28 = (ushort)iVar22;
  iVar26 = (int)(char)((char)((uint)iVar22 >> 8) >> 7);
  uVar14 = (uint)CONCAT11(((char)(uVar27 >> 8) << 1 | (short)uVar27 < 0) +
                          (char)(uVar14 * -0x3c025f76 >> 8),(char)uVar27 >> 0x1c) << 0x16 |
           uVar32 >> 10;
  uVar31 = uVar14 * 2;
  uVar14 = (uint)((int)uVar14 < 0);
  iVar22 = iVar26 + uVar31;
  uVar27 = iVar22 + uVar14;
  uVar35 = (short)(uVar32 >> 0x10);
  if ((int)uVar27 < 0) {
    uVar35 = (short)(uVar31 >> 0x10);
  }
  if (uVar27 != 0 && (SCARRY4(iVar26,uVar31) != SCARRY4(iVar22,uVar14)) == (int)uVar27 < 0) {
    uVar27 = uVar27 & 0xffff0000;
  }
  uVar25 = (uint)(byte)((char)((uVar28 >> 1 | 0x8000) >> 1) + (char)(uVar31 >> 8)) ^ 0xe;
  bVar11 = ((byte)uVar31 & 0x1f) % 0x11;
  uVar14 = (uint)((uVar25 & 1) != 0) << 0x10 | uVar31 & 0xffff;
  uVar36 = (ushort)(uVar14 << bVar11) | (ushort)(uVar14 >> 0x11 - bVar11);
  bVar11 = (byte)uVar36 & 0x1f;
  uVar33 = CONCAT22(uVar35,(short)((short)uVar31 * -0x2ffe ^ 0x47f1U) >> 6);
  uVar8 = (int)(((((uVar34 | 0xc000) << 9 | uVar37 >> 0x17) & 0xff00 |
                 (uint)(byte)((char)(uVar37 >> 0x17) << 1)) & 0xa3b5a6cd) >> 1 |
               (uint)(ushort)(short)(char)(uVar25 >> 1) << 0x1f) >> 0x1a;
  bVar39 = (int)(uVar27 & 0xffff0000) < 0;
  uVar14 = (uint)bVar39;
  uVar37 = uVar8 - uVar33;
  uVar32 = uVar37 - uVar14;
  uVar5 = CONCAT14(uVar8 < uVar33 || uVar37 < uVar14,uVar8) >> 2;
  uVar25 = (uint)CONCAT11((byte)(uVar32 >> 8) | (byte)uVar32,(byte)uVar32);
  bVar11 = ((byte)((uVar31 & 0xffff0000 | (uint)uVar36) >> bVar11) |
           (byte)((((uint)(ushort)((short)uVar28 >> 0xf) & 0x7fffff80) << 1) << 0x20 - bVar11)) & 7;
  bVar16 = (byte)(uVar5 >> 8);
  uVar14 = (uint)bVar39 << 0x10 |
           CONCAT31(0x5fe018,SBORROW4(uVar8,uVar33) == SBORROW4(uVar37,uVar14)) & 0xffff;
  uVar14 = CONCAT31(CONCAT21((short)(uVar5 >> 0x10),bVar16 << bVar11 | bVar16 >> 8 - bVar11),
                    CONCAT22(0x5fe0,(ushort)(uVar14 >> 0xc) | (ushort)(uVar14 << 5)) != 0);
  uVar37 = (uVar32 & 0xffff0000 | uVar25) * 5;
  bVar11 = (byte)((uVar25 & 0xff00) >> 8) & 0x1f;
  uVar28 = (ushort)((uVar25 & 0xff00) >> 8);
  uVar28 = uVar28 | ((ushort)(uVar14 >> bVar11) | (short)uVar14 << 0x20 - bVar11) &
                    ~(1 << (uVar28 & 0xf));
  uVar14 = SEXT14((char)(uVar25 >> 8));
  uVar27 = ~((uVar27 & 0xffff0000) << 1 | (uint)(ushort)((ushort)bVar39 << 0xf));
  bVar11 = (byte)uVar28 & 0x1f;
  uVar25 = uVar14 >> bVar11 | uVar14 << 0x21 - bVar11;
  uVar14 = (uint)uVar28 << 1;
  bVar16 = (byte)uVar14;
  uVar28 = CONCAT11((char)(uVar14 >> 8) << 1,bVar16);
  bVar23 = 0U >> (bVar16 & 7) | '\0' << 8 - (bVar16 & 7);
  uVar31 = uVar27 & 0xffff0000 | (uint)((ushort)uVar27 & uVar28);
  uVar27 = (uint)CONCAT11((byte)((uint)uVar28 >> 8) >> 1,bVar16);
  uVar14 = (uVar14 & 0xffff0000 | uVar27) >> 1;
  bVar11 = (byte)uVar14 & 0x1f;
  sVar7 = (short)(char)((byte)((uVar32 & 0xffff0000) >> bVar11) |
                       (byte)(((uint)bVar23 | 0xc000) << 0x20 - bVar11)) * (short)(char)bVar23;
  sVar7._1_1_ = (char)((ushort)sVar7 >> 8);
  uVar28 = sVar7 * 2;
  uVar36 = (ushort)(sVar7._1_1_ != '\0' && sVar7._1_1_ != -1);
  uVar31 = (uVar31 << (bVar16 & 0x1f) | uVar31 >> 0x21 - (bVar16 & 0x1f)) + 0x38706214;
  uVar14 = uVar14 & ~(1 << ((uVar27 & 0x3e) >> 1)) & 0xffffff0f;
  sVar12 = (sbyte)uVar14;
  uVar27 = uVar31 & 0xffff0000 | (uint)(ushort)((short)uVar31 + (short)uVar25 * 2 + 0xd1b3);
  uVar13 = CONCAT11((char)(uVar14 >> 8) + -1 >> 0xf,sVar12);
  uVar14 = (-(uVar37 & 0xffff0000 |
              (uint)CONCAT11((char)(uVar37 >> 8) << 1,(char)uVar37) & 0xffffff00 |
             (uint)(byte)((char)uVar37 - 0x1f)) & 0xffff0000 |
           (uint)((int)(short)(uVar28 & 0xff | uVar36 |
                              (ushort)(byte)((byte)((uint)(uVar28 | uVar36) >> 8) | bVar23) << 8) *
                 (int)(short)((ushort)bVar23 | 0x6000)) >> 0x10) >> sVar12;
  iVar22 = 0x1f;
  if (uVar25 != 0) {
    while (uVar25 >> iVar22 == 0) {
      iVar22 = iVar22 + -1;
    }
  }
  bVar11 = sVar12 << sVar12;
  uVar34 = (iVar22 << (bVar11 & 0x1f) |
           (uint)(CONCAT14(0xc10617e2 < uVar27,iVar22) >> 0x21 - (bVar11 & 0x1f))) >>
           (bVar11 & 0x1f) | ((uint)uVar13 & 0xffffff00 | (uint)bVar11) << 0x20 - (bVar11 & 0x1f);
  uVar29 = (short)uVar34 >> 0x14;
  uVar8 = (uVar14 & 0xffff0000 | (uint)(ushort)(uVar13 * -0x1984)) << 1 | uVar14 >> 0x1f | 0xc0;
  uVar36 = (ushort)(uVar27 + 0x3ef9e861) & 0x3fff;
  uVar28 = (ushort)(byte)uVar8;
  uVar14 = (uint)(ushort)(uVar36 / uVar28 & 0xff | uVar36 % uVar28 << 8);
  uVar37 = uVar27 + 0x3ef9e861 & 0xffff0000 | uVar14;
  uVar33 = uVar27 + 0x3ef9e81d ^ 1 << (uVar25 & 0x1f);
  uVar8 = uVar8 + uVar33;
  uVar27 = uVar37 << 1;
  bVar11 = (byte)uVar27 >> 1 | ((int)uVar37 < 0) << 7;
  uVar37 = CONCAT22((short)(((uint)(ushort)((ushort)bVar23 | 0x6000) << 0x12) >> 0x10),0x4c6e) &
           0xffff0000 | 0x6e00;
  uVar14 = ((uVar14 & 0x7f80) << 1 | (uint)bVar11) * (uint)uVar29;
  uVar32 = uVar14 >> 0x10;
  uVar31 = uVar8 & 0xffff0000;
  iVar26 = (int)(uVar37 | (byte)(uVar8 >> 8) & bVar11) >> 6;
  iVar22 = CONCAT22((ushort)(uVar31 >> 0x11),(short)((uVar31 | uVar32) >> 1) >> 1);
  uVar27 = ((uVar27 & 0xffff0000 | (uint)(ushort)~((ushort)uVar14 & ~(1 << ((ushort)iVar26 & 0xf))))
           - iVar22) - 1;
  bVar11 = (byte)((uint)((short)CONCAT31((int3)((int)uVar37 >> 0xe),
                                         ((char)iVar26 + 'A') - ((uVar32 & 2) != 0)) - 0x304U &
                        0xff00) >> 8);
  uVar37 = iVar22 + uVar27 + (uint)CARRY1(bVar11,bVar11);
  uVar27 = ~uVar27;
  uVar32 = uVar34 & 0xffff0000 | (uint)(uVar29 | 0x40) & 0xfffffffe;
  uVar31 = uVar33 & 0xffff0000 |
           (uint)(ushort)(((ushort)uVar33 >> 10 | (ushort)uVar33 << 6) >> 1 |
                         (ushort)(uVar25 >> 0x17) << 0xf) | 0x4cdd;
  uVar14 = (uVar27 & 0xffff0000 | uVar27 >> 1 & 0x7fff) << 9;
  uVar37 = (uVar37 & 0xffff0000 | (uint)(CONCAT11((char)(uVar37 >> 8) << 1,~(byte)uVar37) & 0xfffe))
           + 0xe79e4dc7;
  uVar25 = uVar31 ^ 0x5ad01fff;
  uVar32 = uVar32 << 1 | (uint)((int)uVar32 < 0) | 0xc0000000;
  uVar3 = CONCAT44(uVar14 & 0xffff0000 |
                   (uint)(ushort)(((ushort)uVar14 | (ushort)(uVar27 >> 0x17) & 0xff00 |
                                  (ushort)(byte)~(byte)(uVar27 >> 0x17)) + (short)uVar31 + 0xcfc),
                   uVar37 & 0xffff0000 | uVar37 >> 1 & 0x7fff) & 0x3fffffffffffff00;
  uVar27 = uVar32 << 1 | (uint)((int)uVar32 < 0);
  iVar22 = ((uint)(uVar3 / (ulonglong)uVar32) & 0xffff) * (uVar25 & 0xffff);
  uVar28 = (ushort)((uint)iVar22 >> 0x10);
  sVar7._1_1_ = (char)iVar22;
  uVar19 = (uint3)((((uint)(ushort)(uVar3 % (ulonglong)uVar32 >> 0x10) & 0xff) << 0x10) >> 0x10) |
           (uint3)uVar28 & 0xff00 | (uint3)(((uint)uVar28 << 0x18) >> 8);
  uVar14 = 0x5ad03eff;
  if ('\0' < sVar7._1_1_) {
    uVar14 = uVar27;
  }
  bVar11 = (byte)uVar14 & 0x1f;
  uVar31 = (uint)(CONCAT14(sVar7._1_1_ != '\0',uVar27) >> bVar11) | uVar27 << 0x21 - bVar11;
  uVar36 = (ushort)uVar25;
  uVar28 = (ushort)(byte)((byte)uVar14 | 0xc0);
  bVar11 = (byte)((uVar36 & 0x3fff) / uVar28);
  uVar27 = (uint)(ushort)(uVar36 + 0x5992);
  bVar39 = 0xa66d < uVar36 && (ushort)(uVar36 + 0x5992) != 0;
  uVar13 = (ushort)(uVar14 & 0xffffff00) | (ushort)bVar39;
  sVar7 = -uVar13;
  sVar21 = sVar7 + -0x1237;
  uVar37 = CONCAT22(0xc821,sVar21);
  uVar29 = (ushort)uVar31;
  if (0xedca < uVar13 || sVar7 == 0x1236) {
    uVar27 = uVar31 & 0xffff;
  }
  uVar8 = uVar37 & 0xffffff00;
  uVar33 = (uint)(byte)((char)sVar21 + bVar39);
  uVar10 = uVar8 | uVar33;
  bVar23 = (byte)((uVar14 & 0xffffff00) >> 8);
  bVar16 = bVar23 ^ (bVar11 == bVar23) * (bVar23 ^ bVar39);
  uVar28 = (uVar36 & 0x3fff) % uVar28 << 8 |
           (ushort)(byte)(bVar11 ^ (bVar11 == bVar23) * (bVar11 & bVar16));
  uVar30 = uVar29 ^ (ushort)(uVar28 == uVar29) * (uVar29 ^ uVar28);
  uVar34 = (uint)(ushort)(uVar28 ^ (ushort)(uVar28 == uVar29) * (uVar28 & uVar30));
  uVar9 = ((uVar25 & 0xffff0000 | uVar34) - uVar10) - (uint)(uVar28 < uVar29);
  uVar32 = uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8;
  uVar24 = (ushort)uVar32;
  uVar13 = CONCAT11(bVar16,bVar39) & uVar24;
  uVar14 = uVar14 & 0xffff0000 | (uint)uVar13;
  bVar11 = (char)uVar9 * (char)uVar9;
  sVar7._1_1_ = (char)(uVar8 >> 8);
  if (sVar7._1_1_ != '\0') {
    uVar10 = uVar32 | (uVar27 & 0xff00) << 8 | uVar27 << 0x18;
  }
  uVar30 = (short)((uVar31 & 0xffff0000 | (uint)uVar30) >> 1) + 0xe30f;
  sVar12 = (sbyte)uVar13;
  uVar32 = uVar10 << 5 | uVar9 >> 0x1b;
  uVar27 = 0x1f;
  if (uVar14 != 0) {
    while (uVar14 >> uVar27 == 0) {
      uVar27 = uVar27 - 1;
    }
  }
  uVar15 = uVar14 ^ (uint)(uVar27 == uVar14) * (uVar14 ^ uVar32);
  uVar10 = uVar27 ^ (uint)(uVar27 == uVar14) * (uVar27 & uVar15);
  uVar8 = uVar32;
  if (-1 < (int)(uVar27 - uVar14)) {
    uVar8 = (uint)(ushort)(uVar19 >> 8) << 0x10;
  }
  uVar13 = (uVar24 >> 1) * -0xf62 ^ 1 << ((ushort)(1 << (uVar30 & 0xf)) >> 1 & 0xf);
  lVar4 = (ulonglong)uVar10 * (ulonglong)uVar10;
  uVar27 = ((uVar31 & 0xfffe0000) >> 1 | uVar9 * -0x80000000 | (uint)uVar30) + uVar32 + 1 &
           (uint)((ulonglong)lVar4 >> 0x20);
  bVar16 = -(char)((ulonglong)lVar4 >> 8);
  uVar14 = (uVar25 & 0xffdf0000 |
           (uint)(ushort)((((uVar36 & 0xffbf) + (short)CONCAT31(uVar19,bVar38) & 0xfffe) << sVar12 |
                          CONCAT11(('\0' < sVar7._1_1_) << 7 | (sVar7._1_1_ == '\0') << 6 |
                                   ((((uVar25 & 0xfff0000 | uVar34) - (uVar37 & 0xfffff00 | uVar33))
                                     - (uint)(uVar28 < uVar29) & 0x10000000) != 0) << 4 |
                                   bVar38 << 2 | 2U | sVar7._1_1_ != '\0',bVar11 >> 2 | bVar11 * '@'
                                  ) >> 0x10 - sVar12) + 1 + (short)uVar10)) << 0xe;
  uVar28 = CONCAT11(bVar16,(char)lVar4);
  if ((bVar16 & 0x40) == 0) {
    uVar28 = (ushort)uVar15 ^ (ushort)(1 << ((uint)uVar13 & 0x1f)) ^ 0x99d3;
  }
  uVar37 = uVar27 & 0xffff0000;
  uVar32 = uVar37 | (ushort)((short)uVar27 + 0xd211);
  lVar4 = (longlong)CONCAT22((short)((ulonglong)lVar4 >> 0x10),uVar28) * (longlong)(int)uVar32;
  iVar22 = (int)((ulonglong)lVar4 >> 0x20);
  uVar27 = (uint)(CONCAT14(iVar22 != 0 && iVar22 != -1,iVar22) >> 8);
  uVar25 = uVar27 | iVar22 << 0x19;
  uVar31 = (uint)lVar4 ^ 0xfd;
  if ('\0' < (char)((byte)lVar4 ^ 0xfd)) {
    uVar32 = uVar37 | uVar31 & 0xffff;
  }
  uVar37 = 0x1f;
  if (uVar25 != 0) {
    while (uVar25 >> uVar37 == 0) {
      uVar37 = uVar37 - 1;
    }
  }
  bVar11 = (byte)uVar37;
  sVar7 = CONCAT11((char)((ulonglong)lVar4 >> 8) >> (bVar11 & 0x1f),(char)uVar31) + 1;
  uVar36 = (ushort)uVar14;
  uVar28 = ((ushort)((ulonglong)lVar4 >> 0x28) & 0xff00 |
           (ushort)(byte)((sVar7 == 0) << (bVar11 & 0x1f))) + uVar36;
  uVar14 = uVar14 >> 4;
  uVar27 = uVar27 & 0xffff0000 | iVar22 << 0x19 | (uint)uVar28 & 0xffffff00 |
           (uint)(byte)((char)uVar28 - 1);
  if ((bVar16 & 4) != 0) {
    uVar27 = uVar32;
  }
  uVar31 = uVar14 & 0xffff0000 | (uint)(ushort)~((ushort)uVar14 | 0xd657);
  uVar14 = 0x1f;
  if (uVar32 != 0) {
    while (uVar32 >> uVar14 == 0) {
      uVar14 = uVar14 - 1;
    }
  }
  uVar28 = (ushort)uVar32 >> 7 | (ushort)uVar32 << 9;
  uVar33 = (uVar37 & 0xffff0000 | (uint)CONCAT11((char)(uVar37 >> 8) >> 1,bVar11)) >> 0xb;
  uVar25 = (int)(short)uVar28 * 0x88b & 0xffff;
  sVar21 = (short)((uint)((int)(short)uVar28 * 0x88b) >> 0x10);
  if (sVar21 == 0 || sVar21 == -1) {
    uVar14 = uVar14 & 0xffff0000 |
             (uint)(ushort)((uVar13 * 2 + -0x7ae2 + sVar7) * 4 | uVar36 >> 0xe);
  }
  bVar6 = (byte)(uVar33 >> 8);
  bVar18 = (byte)(uVar25 >> 8);
  uVar36 = (short)uVar14 + -0x11b5 + CONCAT11(bVar6,(char)uVar25) * 4;
  bVar16 = ((byte)uVar33 & 0x1f) % 0x11;
  uVar25 = uVar32 & 0xffff0000 |
           (uint)(ushort)(((ushort)(CONCAT12(CARRY1(bVar6,bVar18),uVar28) >> bVar16) |
                          uVar28 << 0x11 - bVar16) * 0x4aec);
  uVar34 = CONCAT22((ushort)((uVar37 & 0xffff0000) >> 0x1b),0x6a5b);
  uVar37 = uVar34 << 5;
  uVar33 = uVar31 | 0xb780bc1c;
  bVar16 = (byte)((uVar36 & 0xff) >> 1);
  bVar20 = (0xf7 < bVar16) + 0x5f;
  bVar23 = (byte)uVar33 ^ bVar20;
  uVar33 = uVar33 & 0xffff0000;
  uVar10 = uVar33 | 0x6a00;
  lVar4 = (ulonglong)
          (uVar37 & 0xffff0000 |
          (uint)CONCAT11((char)(uVar37 >> 8),
                         (byte)((uVar14 & 0xffff0000 | (uint)(ushort)(short)(char)(bVar6 + bVar18))
                                + CONCAT22((ushort)((uVar27 >> (bVar11 & 0x1f)) >> 0x10) |
                                           (ushort)((uVar31 << 0x20 - (bVar11 & 0x1f)) >> 0x10),
                                           uVar36) >> 0x1b) | (byte)uVar37)) * (ulonglong)uVar25;
  uVar28 = (CONCAT11(-9 - bVar16,bVar20) - (short)(char)bVar23) + 0x455a;
  if (uVar28 == 0) {
    uVar28 = 0x6a00;
  }
  bVar11 = (char)bVar23 >> 8;
  uVar14 = uVar34 & 0xffff0000 | (uint)(byte)((ulonglong)lVar4 >> 0x20) << 8 | (uint)bVar11;
  bVar16 = (byte)uVar28;
  uVar25 = uVar25 << 6;
  uVar13 = (ushort)uVar25 | (ushort)((uVar32 & 0xffff0000) >> 0x1a);
  uVar34 = uVar14 - uVar10;
  uVar32 = CONCAT22((undefined2)((char)bVar23 >> 7),
                    ((short)(char)bVar23 << (bVar11 & 0x1f)) + 0x7771 + (ushort)(uVar14 < uVar10));
  bVar6 = (byte)uVar34;
  uVar27 = (uint)(ushort)(uVar28 & 0xff | (ushort)(byte)((char)(uVar28 >> 8) >> (bVar6 & 0x1f)) << 8
                         );
  uVar14 = (uVar8 & 0xffff0000 | uVar27) +
           (CONCAT22((short)((ulonglong)lVar4 >> 0x10),
                     (ushort)lVar4 >> (bVar11 & 0xf) | (ushort)lVar4 << 0x10 - (bVar11 & 0xf)) >> 1)
  ;
  bVar11 = bVar6 + (byte)uVar14;
  uVar36 = uVar28 & 0xff00 |
           (ushort)(byte)(bVar16 + 0x71 + CARRY1(bVar6,(byte)uVar14) >> 1 |
                         (bVar6 < bVar16 || (byte)(bVar6 - bVar16) < (uVar32 < 0x8ea0722e)) << 7);
  uVar29 = uVar13 + ((ushort)uVar34 & 0xff00 | (ushort)bVar11);
  uVar33 = uVar33 | (uint)uVar29;
  bVar11 = bVar11 & 0xf;
  uVar36 = uVar36 << bVar11 | uVar36 >> 0x10 - bVar11;
  uVar37 = (uint)(ushort)(((ushort)uVar14 & 0xff00 |
                          (ushort)(byte)((bVar6 - bVar16) - (uVar32 < 0x8ea0722e))) + 0x3712);
  uVar25 = (uVar25 & 0xffff0000 | (uint)uVar13) ^ 0xfdf0dad3;
  uVar31 = (uint)(byte)((char)((uVar37 & 0x1fc) >> 2) << 1);
  uVar10 = (uVar14 & 0xffff0000 | uVar37 & 0xfffffe00) >> 1 | uVar27 << 0x1f | uVar31 | 1;
  uVar31 = (uVar25 & 0xffff0000 | (uint)(ushort)((ushort)uVar25 ^ 1 << (uVar29 & 0xf))) + uVar33 &
           ~(1 << (uVar31 & 0x1f | 1));
  bVar11 = (byte)(uVar34 >> 8) >> 1;
  uVar37 = uVar31 & 0xffff0000;
  uVar31 = uVar31 >> 1 & 0x7fff;
  uVar9 = uVar37 | uVar31;
  uVar25 = (uVar33 | 0xc000) + uVar9;
  lVar4 = (longlong)
          (int)(uVar8 & 0xffff0000 |
               CONCAT22((uVar36 & 0x1f00 | (ushort)(byte)((char)uVar36 + 0x6f)) << 1,
                        uVar28 & 0xff | (ushort)(byte)((char)(uVar27 >> 8) + bVar16) << 8) /
               ((uint)uVar29 | 0xc000) & 0xffff) * (longlong)(int)uVar10;
  uVar28 = (short)uVar25 + (short)((ulonglong)lVar4 >> 0x20);
  uVar25 = uVar25 & 0xffff0000;
  if (SBORROW2(uVar28,0x527b)) {
    uVar32 = CONCAT31((uint3)bVar11,1) | (uint)(ushort)((char)bVar23 >> 7) << 0x10 | 0x8000;
  }
  if (0x527b < uVar28) {
    uVar32 = uVar9;
  }
  bVar16 = (byte)lVar4;
  bVar23 = (byte)((ulonglong)lVar4 >> 8);
  bVar11 = bVar23 ^ (bVar16 == bVar23) * (bVar23 ^ (bVar11 | 0x80));
  if ((char)bVar23 <= (char)bVar16) {
    uVar10 = (uVar14 & 0xfffe0000) >> 1 | uVar27 << 0x1f | uVar31;
  }
  bVar6 = bVar16 ^ (bVar16 == bVar23) * (bVar16 & bVar11) ^ (byte)(uVar10 >> 8);
  uVar10 = uVar10 << 1;
  uVar31 = (uint)CONCAT11(bVar11 & 0xfe | bVar16 < bVar23,bVar6) & 0xffffff00;
  uVar8 = (uint)(ushort)((ulonglong)lVar4 >> 0x10) << 0x10 | uVar31 | (uint)(byte)(bVar6 + 0xbc);
  uVar14 = (uVar10 & 0xffff | uVar25) >> 1;
  uVar27 = (uint)(byte)((char)uVar10 << 1 | (char)uVar10 < '\0');
  uVar33 = uVar8 + 0x77a4062;
  uVar34 = ~((uVar34 >> 8 & 0xffff00) << 8 | 0x101);
  bVar11 = (byte)uVar34;
  uVar9 = CONCAT22((short)(uVar37 >> 0x10),0x10fb);
  uVar36 = (ushort)uVar14;
  uVar13 = (ushort)(uVar25 >> 0x11);
  uVar28 = uVar36 * 2 + 1;
  uVar14 = (((uVar32 & 0xffff0000 | (uint)(ushort)((ushort)uVar32 ^ 1 << ((ushort)uVar10 & 0xf))) <<
             (bVar11 & 0x1f) | uVar14 >> 0x20 - (bVar11 & 0x1f)) + 0x3eb24582) * 2;
  if (uVar28 == 0) {
    uVar14 = uVar10 & 0xffffff00 | uVar27;
  }
  bVar16 = (bVar11 & 0x1f) % 0x11;
  uVar27 = (uint)(CARRY2(uVar36,uVar36) || 0xfffe < (ushort)(uVar36 * 2)) << 0x10 |
           uVar10 & 0xff00 | uVar27;
  uVar29 = (ushort)(uVar27 << bVar16) | (ushort)(uVar27 >> 0x11 - bVar16);
  uVar36 = SEXT12((char)((char)uVar33 + (char)((uint)(ushort)(short)(char)bVar11 >> 8)));
  bVar16 = bVar11 >> 1;
  uVar33 = uVar33 & 0xffff0000 | (uint)(ushort)(uVar36 ^ (uVar36 >> 7 & 1) << 7);
  bVar38 = (uVar28 & 1) != 0;
  uVar27 = CONCAT22(uVar13,uVar28) >> 1;
  uVar25 = (uint)bVar38 << 0x1f;
  uVar32 = uVar10 & 0xffff0000 |
           (uint)(ushort)(uVar29 & 0xff |
                         (ushort)(byte)((char)((uint)uVar29 >> 8) >> (bVar11 & 0x1f)) << 8);
  if (bVar38) {
    uVar32 = uVar27 | uVar25;
  }
  uVar34 = (uVar34 & 0xffffff00 | (uint)bVar16) >> 1;
  uVar10 = uVar34 | (uint)((bVar16 & 1) != 0) << 0x1f;
  bVar23 = (byte)uVar34;
  uVar3 = (ulonglong)(uVar33 | 0xc0000000);
  uVar1 = CONCAT44(CONCAT22((short)((ulonglong)lVar4 >> 0x30),
                            ~CONCAT11(uVar8 < 0xf885bf9e,(char)(uVar31 >> 8) >> 7) + 1) +
                   0xfd138854U & 0xffff0000 | (uint)(ushort)(short)(char)bVar11,uVar33) &
          0x3fff0000ffffffff | 0x96c0000000;
  uVar2 = uVar1 % uVar3;
  bVar11 = bVar23 & 0x1f;
  uVar3 = uVar1 / uVar3 & 0xffffffff;
  uVar28 = (ushort)(uVar3 << bVar11) | (ushort)(uVar3 >> 0x21 - bVar11);
  uVar32 = (int)uVar32 >> (bVar16 & 0x1f) ^ 0x1116782f;
  iVar22 = uVar10 - uVar9;
  bVar38 = uVar10 < uVar9 || iVar22 == 0;
  uVar31 = iVar22 - 1;
  cVar17 = (char)(uVar31 >> 8);
  sVar7._1_1_ = cVar17 - (char)uVar32;
  if (SBORROW1(cVar17,(char)uVar32) != SBORROW1(sVar7._1_1_,bVar38)) {
    uVar32 = uVar32 & 0xffff0000 | 0x10fb;
  }
  uVar33 = (uint)CONCAT11(sVar7._1_1_ - bVar38,(char)uVar31) & 0xffffff0f;
  sVar12 = (sbyte)uVar33;
  uVar29 = (ushort)uVar27;
  uVar36 = (short)uVar2 << sVar12 | uVar29 >> 0x10 - sVar12;
  bVar11 = (char)uVar36 >> 1;
  uVar8 = CONCAT22((short)(uVar2 >> 0x10),uVar36) & 0xffffff00;
  uVar10 = (uVar14 & 0x80d60000 |
           (uint)(ushort)((((ushort)uVar14 & 0xf70f) << 1) << (bVar23 & 0x1f))) >> sVar12 |
           uVar32 - 1 << 0x20 - sVar12;
  uVar27 = (uint)(CONCAT14((char)((short)uVar28 >> 0xf) < '\0',
                           (uVar31 & 0xffff0000 | uVar33) * -0x1c1710f1) >> 8);
  uVar14 = (int)(short)(((ushort)(uVar32 - 1) & ~(1 << (uVar28 & 0xf))) + 0x424f) * -0x32d3;
  sVar7 = (short)(uVar14 >> 0x10);
  uVar32 = (uint)(sVar7 != 0 && sVar7 != -1) << 0x10 | uVar14 & 0xffff;
  uVar34 = (uVar33 * 0x1e000000 | uVar27) ^ 0x2824;
  uVar15 = (((((uint)uVar13 & 0xfffe) << 0x10) >> 1 | uVar25 |
            (uint)(ushort)(uVar29 | (ushort)uVar8 | (ushort)bVar11)) + uVar34 + 2) * 2;
  uVar31 = (uint)(0x10fbU - (short)uVar10 & 0xffef);
  uVar37 = uVar37 | uVar31;
  uVar28 = (ushort)uVar34 >> 1;
  uVar14 = uVar15 + uVar10;
  uVar9 = uVar10 ^ (uVar10 >> 0x1e & 1) << 0x1e;
  iVar22 = (uVar33 * 0x1e000000 | uVar27 & 0xffff0000 |
            (uint)(ushort)(uVar28 & 0xff |
                          (ushort)(byte)((char)((uint)(ushort)(uVar28 | (ushort)((uVar34 & 1) != 0)
                                                                        << 0xf) >> 8) <<
                                        ((byte)uVar28 & 0x1f)) << 8) & 0xffffff00 |
           (uint)(byte)((char)(uVar28 & 0xff) + 0xb4)) + 0xe582a8ff;
  uVar25 = iVar22 * 2;
  uVar28 = (ushort)uVar25 | (ushort)((uint)iVar22 >> 0x1f);
  uVar27 = 0;
  if (uVar9 != 0) {
    while ((uVar9 >> uVar27 & 1) == 0) {
      uVar27 = uVar27 + 1;
    }
  }
  uVar31 = (uVar27 & 0xff00 | (uint)(byte)((char)uVar27 << 1)) * uVar31;
  uVar33 = uVar31 & 0xffff;
  uVar36 = uVar28 + 0xed6b;
  bVar16 = (byte)uVar36;
  uVar34 = uVar37 >> (bVar16 & 0x1f) | uVar37 << 0x20 - (bVar16 & 0x1f);
  bVar23 = (byte)(uVar10 >> 8);
  uVar37 = uVar9;
  if ((char)bVar23 < '\'') {
    uVar37 = uVar34;
  }
  bVar6 = (bVar16 & 0x1f) % 9;
  sVar7._1_1_ = (char)(uVar33 >> 8);
  cVar17 = (char)uVar37;
  uVar31 = CONCAT22((ushort)(((uint)bVar11 << 0x1e) >> 0x10) | (ushort)(uVar8 >> 0x12),
                    (ushort)(uVar31 >> 0x10) & uVar28) + 1;
  uVar13 = CONCAT11(sVar7._1_1_ << bVar6 | (byte)(CONCAT11(bVar23 < 0x27,sVar7._1_1_) >> 9 - bVar6),
                    (char)uVar33) & 0x3fff;
  uVar28 = (ushort)(byte)((byte)((uint)uVar36 >> 8) | 0xc0);
  bVar11 = (bVar16 & 0xd) * '\x02';
  uVar25 = uVar25 & 0x39680000;
  uVar8 = (uVar37 & 0xffff0000 |
          (uint)(ushort)((ushort)uVar37 << (bVar16 & 0xf) | (ushort)uVar37 >> 0x10 - (bVar16 & 0xf))
          ) << 1;
  uVar36 = (ushort)((uVar25 | bVar11) >> 1);
  bVar38 = CARRY2(uVar36,(ushort)uVar34);
  uVar36 = uVar36 + (ushort)uVar34;
  uVar27 = uVar27 & 0xffff0000 |
           (uint)(byte)((char)((uint)(ushort)(uVar13 % uVar28 << 8) >> 8) + 0xb3) << 8 |
           (uint)(uVar36 == 0);
  uVar37 = uVar34 & 0xffff0000 | (uint)(bVar16 & 0xd);
  if (!bVar38 && uVar36 != 0) {
    uVar37 = (int)cVar17;
  }
  bVar23 = (byte)(uVar36 & 0xff);
  return uVar27 + (CONCAT31((uint3)(uVar8 >> 8) & 0xffff00 | 0x200000 |
                            (uint3)(byte)((char)uVar8 << bVar11 % 9 |
                                          (byte)(CONCAT11((uVar8 >> 0x1d & 1) != 0,(char)uVar8) >>
                                                9 - bVar11 % 9) |
                                         (byte)(1 << (uVar13 / uVar28 & 0xf))),bVar38) << 10 ^
                  0xbc5U) +
         ((int)(CONCAT22((ushort)(uVar25 >> 0x11),
                         uVar36 & 0xff | (ushort)(byte)((char)(uVar36 >> 8) << 1) << 8) & 0xffffff00
               | (uint)(bVar23 | bVar38)) >> (bVar23 & 0x1f | bVar38)) +
         (uVar31 >> bVar11 | uVar31 << (bVar16 & 0xd) * -2 + 0x20) +
         CONCAT22((undefined2)(cVar17 >> 7),(short)cVar17 >> 3) +
         (CONCAT22((short)((int)((uVar14 & 0xffff0000 |
                                 (uint)(ushort)((((short)uVar14 -
                                                 (ushort)(byte)(((byte)(uVar32 >> 0xe) |
                                                                (byte)(uVar32 << 3)) - 1)) -
                                                (ushort)CARRY4(uVar15,uVar10)) * 0x100)) + uVar9) >>
                          0x1d),(short)uVar27 << 0xf) | 0x7fff) + uVar37 + -0x1754f5fa;
}



// WARNING: Removing unreachable block (ram,0x0804e358)
// WARNING: Removing unreachable block (ram,0x0804db9f)
// WARNING: Removing unreachable block (ram,0x0804db54)
// WARNING: Removing unreachable block (ram,0x0804e22a)
// WARNING: Removing unreachable block (ram,0x0804e4d6)

int log_size_10_var_006(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  short sVar7;
  uint5 uVar8;
  uint5 uVar9;
  char cVar10;
  byte bVar15;
  ushort uVar11;
  ushort uVar12;
  ushort uVar17;
  uint uVar13;
  uint uVar14;
  uint3 uVar16;
  undefined2 uVar18;
  byte bVar19;
  sbyte sVar20;
  short sVar21;
  ushort uVar22;
  uint uVar23;
  byte bVar24;
  byte bVar25;
  byte bVar29;
  int iVar26;
  int iVar27;
  uint uVar28;
  ushort uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  ushort uVar34;
  ushort uVar35;
  uint uVar36;
  uint uVar37;
  ushort uVar38;
  ushort uVar39;
  short sVar40;
  uint uVar41;
  bool bVar42;
  bool bVar43;
  
  uVar23 = 0x1f;
  while (0x22022e28U >> uVar23 == 0) {
    uVar23 = uVar23 - 1;
  }
  uVar31 = uVar23 >> 0x1e | 0x8808b8a0;
  bVar42 = (uVar23 & 1) != 0;
  uVar17 = (ushort)uVar23 >> 1;
  uVar23 = uVar23 & 0xffff0000 | (uint)(ushort)(uVar17 | (ushort)bVar42 << 0xf);
  if (((uVar17 & 0x4000) != 0) != bVar42) {
    uVar23 = uVar31;
  }
  sVar21 = (short)uVar31;
  uVar17 = sVar21 - 0xc0;
  uVar31 = 0x74d0b48f;
  if (uVar17 == 0 || SCARRY2(sVar21,-0xc0) != (short)uVar17 < 0) {
    uVar31 = 0xcbd71b91;
  }
  uVar14 = (uint)CONCAT11((byte)(uVar31 >> 8) ^ 0x1b,0x91) & 0xffff1fff;
  uVar13 = uVar14 | 0xcbd70000;
  uVar37 = (uint)(byte)((char)uVar17 + 0x5d);
  uVar37 = ((uint)uVar17 & 0xffffff00 | uVar37 | 0xa5dc000) /
           ((uint)uVar17 & 0xffffff00 | uVar37 | 0xc000) & 0xffff;
  uVar36 = 0x759e19a7 - (uint)((0xdc1cU >> ((ushort)uVar31 & 0xc) & 1) != 0);
  bVar15 = (byte)(uVar37 >> 8) >> 1;
  uVar17 = ~((ushort)uVar31 & 0x164c) >> 1;
  cVar10 = (char)uVar17;
  uVar11 = CONCAT11(bVar15,((byte)uVar37 & bVar15) + 0xa6) * (short)uVar36;
  uVar36 = uVar36 | 0x740f004e;
  uVar37 = 0x1f;
  if (uVar13 != 0) {
    while (uVar13 >> uVar37 == 0) {
      uVar37 = uVar37 - 1;
    }
  }
  uVar34 = (short)uVar36 << ((byte)uVar37 & 0x1f);
  uVar36 = uVar36 & 0xffff0000;
  uVar13 = uVar36 | uVar34;
  uVar32 = (uint)(CONCAT14(1,uVar23 & 0xffff0000) >> 0x11) & 0xfffffbff |
           (uint)(ushort)((short)uVar23 << 1 | (ushort)((short)uVar23 < 0)) << 0x10;
  uVar41 = uVar37 ^ 0xc5;
  lVar5 = (longlong)
          (int)((uint)(ushort)(uVar11 & 0xff | (ushort)(byte)((char)((uint)uVar11 >> 8) - 9) << 8) |
               0xb2290000) * (longlong)(int)uVar13;
  iVar26 = (int)(short)lVar5 * (int)(short)uVar34;
  uVar34 = (ushort)((uint)iVar26 >> 0x10);
  sVar21 = (short)((ulonglong)lVar5 >> 0x10);
  uVar11 = (-0xc0 << ((byte)uVar14 & 0x1f) | 1 << ((ushort)uVar41 & 0xf)) + 0x16d4;
  bVar15 = (byte)uVar41 & 0xf;
  uVar34 = uVar34 >> bVar15 | uVar34 << 0x10 - bVar15;
  uVar14 = CONCAT22((short)((ulonglong)lVar5 >> 0x30),uVar34) >> 9;
  uVar23 = ((uint)uVar34 & 0x100 | (uint)(byte)((char)uVar34 << 4)) >> 1;
  uVar38 = ((ushort)(byte)((char)((uint)iVar26 >> 8) + (char)(uVar34 >> 8) + ((byte)uVar41 < 0x9b))
           & 0x3f) << 8;
  uVar34 = (ushort)(byte)((byte)uVar23 | 0xc0);
  uVar34 = uVar38 / uVar34 & 0xff | uVar38 % uVar34 << 8;
  uVar41 = (uVar32 >> 1 | 0x80000000) + uVar41 ^ 0xa6fc;
  uVar38 = (ushort)uVar41;
  if ((uVar41 & 0xd96b78dc) != 0) {
    uVar13 = uVar36;
  }
  bVar19 = (byte)uVar14;
  uVar37 = (uVar37 >> 8 & 0xffff00) << 8;
  bVar15 = bVar19 >> 1;
  if (!(bool)(bVar19 & 1)) {
    uVar38 = (ushort)uVar23 | (ushort)(uVar14 << 8) | 0xc0;
  }
  iVar26 = (uVar31 & 0x4b040000 | (uint)(byte)((char)((uint)uVar17 >> 8) - 1) << 8 |
            (uint)(byte)(cVar10 << 1 | cVar10 < '\0') | uVar32) + 0xe3b5447e;
  uVar14 = iVar26 * 0x80;
  uVar41 = uVar37 | (uint)(ushort)(short)(char)bVar19 & 0xffffff00 | (uint)bVar15 | 0xc000;
  uVar23 = (uint)(ushort)(((ushort)uVar14 | (ushort)((uint)iVar26 >> 0x19)) + 0xcb5b) & 0xfffb |
           0xc000;
  uVar31 = ((((uint)(ushort)(sVar21 >> 0xf) & 0x3fff) << 0x10 |
            (uint)(ushort)(uVar34 ^ (ushort)(uVar34 == uVar38) *
                                    (uVar34 & (uVar38 ^ (ushort)(uVar34 == uVar38) *
                                                        (uVar38 ^ uVar11))))) %
            ((uint)(ushort)(short)(char)bVar19 & 0xff00 | (uint)bVar15 | 0xc000) & 0x3fff) << 0x10 |
           (int)(char)bVar15;
  uVar36 = uVar31 % uVar23;
  uVar23 = (uVar31 / uVar23 & 0xffbf) << 1;
  uVar31 = uVar23 | 1;
  uVar17 = (ushort)(uVar23 >> 0x10) ^
           (ushort)((uint)(uVar31 == ((uint)uVar11 | 0x88080000)) * ((uint)uVar11 & uVar31) >> 0x10)
  ;
  uVar31 = CONCAT22(uVar17,0xfb13);
  uVar11 = (short)uVar41 * 0x418e;
  uVar36 = (uVar36 & 0xffffff00 | (uint)(ushort)(sVar21 >> 0x1f) << 0x10 |
            (uint)(byte)((char)uVar36 + 0x93U >> 1) | uVar41) << 10;
  bVar15 = (byte)uVar11 & 0x1f;
  uVar23 = uVar31;
  if ((short)uVar36 < 1) {
    uVar23 = (uint)uVar17 << 0x10 | 0xfb13;
  }
  iVar26 = -0xf22c526 - (((uVar37 | uVar11) << bVar15 | 0xda3addf0U >> 0x20 - bVar15) & 0xffff0000);
  uVar37 = uVar14 & 0xffff0000;
  if (iVar26 == 0) {
    uVar37 = uVar13 >> 0x10 | uVar31 << 0x10;
  }
  iVar4 = (int)(short)uVar23 * (int)(short)iVar26;
  uVar34 = (ushort)((uint)iVar4 >> 0x10);
  uVar11 = uVar34 | 1;
  uVar14 = CONCAT31((int3)(uVar37 >> 8),0xb6);
  uVar17 = (ushort)(byte)iVar4 * 0xb6;
  uVar38 = (ushort)(iVar26 * 2) | (ushort)(iVar26 < 0);
  uVar23 = uVar23 & 0xffff0000 | (uint)uVar17 & 0xffffff00 | (uint)(byte)-(char)uVar17;
  sVar21 = (short)uVar14;
  uVar17 = sVar21 + uVar38;
  if (SCARRY2(sVar21,uVar38) != (short)uVar17 < 0) {
    uVar17 = (ushort)uVar23;
  }
  uVar13 = (int)(short)uVar11 * 0x4739;
  sVar21 = (short)(uVar13 >> 0x10);
  bVar43 = sVar21 != 0 && sVar21 != -1;
  bVar19 = (byte)((uVar13 & 0xffff) >> 8);
  bVar15 = (uVar11 != 0) - bVar19;
  uVar41 = (iVar26 * 2 & 0xffff0000U | uVar14 & 0xffff) + 1;
  bVar42 = uVar23 + 0x908c9a69 < (uint)((uVar11 != 0) < bVar19 || bVar15 < bVar43);
  uVar14 = (uint)(ushort)((ushort)uVar41 >> 1 | (ushort)(uVar23 < 0x6f736597 || bVar42) << 0xf);
  bVar19 = (char)(uVar13 & 0xffff) + '\x1b' + ((uVar41 & 1) != 0) >> 1;
  uVar11 = (ushort)uVar13 & 0xff00 | (ushort)bVar19;
  sVar21 = uVar11 + 1;
  if (SCARRY2(uVar11,1) != sVar21 < 0) {
    uVar31 = uVar31 & 0xffff0000 | uVar14;
  }
  iVar26 = (((uVar36 & 0x3a3b0000 | (uint)CONCAT11((char)((uint)uVar34 >> 8) + 'U',bVar15 - bVar43))
             >> 2 | uVar14 << 0x1e) >> (bVar19 & 0x1f)) +
           (uVar37 & 0xffff0000 |
           (uint)(ushort)(uVar17 & 0xff | (ushort)(uVar23 >= 0x6f736597 && !bVar42) << 8));
  uVar23 = (uVar31 & 0xffff) >> 10;
  bVar24 = (byte)iVar26;
  bVar15 = (byte)sVar21;
  bVar19 = bVar15 << (bVar15 & 7) | bVar15 >> 8 - (bVar15 & 7);
  uVar32 = (uint)(ushort)(1 << (uVar17 & 0xf) ^ 0x9b3f) + 0x84839538;
  uVar13 = CONCAT31(0x2c169,(bVar24 == 0xc5) * (bVar24 & 0xc5) ^ 0xc5) | 1 << (uVar32 & 0x1f);
  uVar36 = (uVar37 & 0xffff0000 | (uint)(ushort)((uVar17 & 0x7f) << 1 | 1)) << 1;
  bVar15 = (byte)uVar36;
  bVar24 = (bVar15 | (int)uVar37 < 0) << 3 | bVar15 >> 5;
  sVar20 = (char)((bVar19 + 0xb1) - ((int)uVar37 < 0) & 0xf) >> 1;
  uVar1 = (ulonglong)(uVar36 & 0xffffff00 | (uint)bVar24 | 0xc0000000);
  uVar2 = CONCAT44(iVar26,uVar13 & 0xffff0000 |
                          (uint)(ushort)((~(ushort)uVar13 & 0xff) * (ushort)bVar24)) &
          0x3fffffffffffffff;
  uVar3 = uVar2 / uVar1;
  uVar2 = uVar2 % uVar1;
  cVar10 = (char)uVar3;
  uVar36 = (uVar41 >> 0x18 | (uVar41 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18) >>
           (bVar19 & 0x1f) & 0xffff0000 | (uint)(byte)(uVar2 >> 8);
  bVar15 = sVar20 + 0x49;
  iVar26 = (int)((ulonglong)
                 ((longlong)
                  (int)((uVar37 & 0x7fff0000) << 1 | 0xc0000000 |
                       (uint)CONCAT11(SCARRY1(cVar10,-0x3f) != (char)(cVar10 + -0x3f) < '\0',bVar24)
                       ) * 0x7171969a) >> 0x20);
  uVar37 = (int)(uVar31 & 0xffff0000 |
                (uint)(ushort)(((ushort)uVar23 | (ushort)((uVar31 & 0xffff) << 7)) >> 1 |
                              (ushort)((uVar23 & 1) != 0) << 0xf)) >> 3;
  uVar31 = (uVar36 >> sVar20 | uVar36 << 0x21 - sVar20) << 1;
  uVar23 = 0;
  if (uVar37 != 0) {
    while ((uVar37 >> uVar23 & 1) == 0) {
      uVar23 = uVar23 + 1;
    }
  }
  bVar19 = (byte)uVar23 >> 1;
  bVar25 = bVar19 << 7 | (bVar19 | (byte)uVar23 << 7) >> 1;
  uVar37 = (uVar32 & 0xffff0000 | (uint)(ushort)((ushort)uVar32 >> 1 | 0x8000)) + 1 <<
           (bVar15 & 0x1f) |
           ((uVar31 & 0xffff0000 |
            (uint)(ushort)(((ushort)uVar31 | (ushort)(uVar2 >> 0x10) >> 0xf) + 0x25b2)) << 0xe) >>
           0x20 - (bVar15 & 0x1f);
  uVar31 = uVar37 << 0xd;
  uVar37 = uVar37 >> 0x13;
  uVar14 = CONCAT31(CONCAT21((short)(uVar3 >> 0x10),iVar26 == 0 || iVar26 == -1),
                    '\0' << (bVar15 & 0x1f)) * (uVar31 | uVar37);
  bVar24 = (byte)((ushort)bVar15 - 0xf72);
  bVar19 = bVar24 & 0xf;
  uVar36 = (uint)(ushort)((ushort)(bVar25 >> bVar19) | (ushort)bVar25 << 0x10 - bVar19);
  bVar42 = (uVar14 & 0x400) != 0;
  uVar17 = (((ushort)(byte)((byte)((uint)(ushort)((ushort)bVar15 - 0xf72) >> 8) >> (bVar24 & 0x1f))
             << 8 | 0xff) ^ 0x6b4f) + 0x5317;
  if (((uVar31 | uVar37) & 0x6aab) != 0) {
    uVar36 = (uVar31 & 0x7fff | uVar37) << 1 | 1;
  }
  uVar36 = uVar23 & 0xffff0000 | uVar36;
  bVar15 = (byte)uVar17 & 0x1f;
  uVar36 = uVar36 >> bVar15 | uVar36 << 0x20 - bVar15;
  bVar19 = (byte)(uVar37 << 1);
  uVar23 = uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8;
  uVar23 = (uint)(uVar17 < (ushort)uVar23) << 0x10 | uVar23;
  uVar37 = uVar23 >> 2;
  bVar24 = (byte)((uVar23 << 0xf) >> 8) | (byte)(uVar37 >> 8);
  uVar16 = ((uint3)(uVar14 >> 8) & 0xff00) >> 8 | (uint3)uVar14 & 0xff00 |
           (uint3)(uVar14 * 0x1000000 >> 8);
  bVar15 = bVar19 & 7 | 1;
  bVar25 = (byte)uVar37;
  bVar25 = bVar25 >> bVar15 | bVar25 << 8 - bVar15;
  bVar15 = (byte)(uVar14 >> 0x18);
  bVar43 = bVar15 == bVar24;
  bVar24 = bVar24 ^ bVar43 * (bVar24 ^ bVar25);
  bVar15 = bVar15 ^ bVar43 * (bVar15 & bVar24);
  uVar23 = (uint)uVar17 << 0x1b;
  uVar8 = CONCAT14((bVar15 & 1) == 0,(uVar31 & 0x7fff8000) << 1 | (uint)uVar17) >> 6;
  uVar31 = (uint)uVar8;
  iVar4 = -(uint)((bVar24 & 1) != 0);
  iVar26 = (uint)(ushort)(CONCAT11(bVar43,bVar19) | 1) << 1;
  uVar17 = CONCAT11(bVar24,bVar25) >> 1;
  uVar34 = uVar17 | 0x8000;
  bVar43 = (bVar25 & 1) != 0;
  uVar11 = (ushort)CONCAT31(uVar16,bVar15) >> 1 & 0xff;
  uVar37 = (uint)(bVar24 >> 1) * 5 + 0xf6;
  if (uVar34 != 0 && -1 < (char)bVar24) {
    uVar37 = uVar23 | uVar31;
  }
  bVar25 = (byte)uVar11;
  bVar15 = bVar25 - 0x3d;
  bVar19 = (byte)((uint)iVar26 >> 8);
  lVar5 = (longlong)
          (int)(CONCAT22((short)(uVar16 >> 8),
                         uVar11 | (ushort)(uVar34 != 0 && -1 < (char)bVar24) << 8) & 0xffffff00 |
               (uint)(byte)(bVar15 - bVar43)) * 0x66320416;
  iVar6 = (int)((ulonglong)lVar5 >> 0x20);
  bVar19 = (char)uVar17 + bVar19 | bVar19;
  uVar14 = (iVar4 >> 1) * 0x73f00658;
  sVar21 = CONCAT11(-(char)((uint)uVar34 >> 8),bVar19);
  iVar27 = CONCAT22((ushort)(((uVar36 & 0xff00) << 8) >> 0x10) | (ushort)((uVar36 << 0x18) >> 0x10),
                    sVar21);
  uVar17 = (ushort)((ulonglong)lVar5 >> 0x10);
  bVar24 = (byte)uVar14 & 0xf;
  uVar36 = CONCAT22(uVar17,(short)(char)lVar5 * (short)(char)lVar5) >> 1;
  lVar5 = (longlong)
          (int)((((uint)uVar17 & 0xfffe) << 0x10) >> 1 |
               (uint)CONCAT11((byte)(uVar36 >> 8) >> 1,(char)uVar36)) *
          (longlong)
          (int)(uVar37 & 0x49c90000 |
               (uint)(ushort)((((short)uVar37 - ((ushort)iVar26 | 1)) -
                               (ushort)(bVar25 < 0x3d || bVar15 < bVar43) & 0x97e2) << 6));
  iVar26 = (int)((ulonglong)lVar5 >> 0x20);
  bVar25 = (byte)((ulonglong)lVar5 >> 0x20);
  bVar15 = (byte)(uVar14 >> 8);
  bVar43 = ((ushort)CONCAT31((int3)((ulonglong)lVar5 >> 8),-0x5b - (iVar26 != 0 && iVar26 != -1)) >>
            ((ushort)bVar19 & 0xf) & 1) != 0;
  uVar23 = uVar23 | uVar31 & 0xffff0000 |
           (uint)(ushort)((short)uVar8 + -0x1947 + (ushort)(iVar6 != 0 && iVar6 != -1));
  if (!bVar43) {
    uVar23 = CONCAT22(0x96,0x2ad7U >> bVar24 | sVar21 << 0x10 - bVar24) | 0x67000000;
  }
  uVar36 = iVar27 << (bVar25 & 0x1f) | (uint)(CONCAT14(bVar43,iVar27) >> 0x21 - (bVar25 & 0x1f));
  uVar31 = uVar14 & 0xffff0000 |
           (uint)(ushort)((CONCAT11(bVar15 >> 6 | bVar15 << 2,bVar25) ^ (ushort)bVar25 & 8) +
                         (short)uVar23) | 1 << ((uint)(ushort)bVar19 & 0x1f);
  bVar15 = (byte)uVar31;
  bVar24 = (char)(uVar31 >> 8) << (bVar15 & 0x1f);
  uVar37 = ((((uint)(uint3)((ulonglong)lVar5 >> 0x28) & 0xffff00) << 8 |
            (uint)(CONCAT11((byte)((ulonglong)lVar5 >> 0x28) >> 1,(byte)uVar14) & 0xff0f)) +
           0x3abaca53) - (uint)((bVar24 & 1) != 0);
  uVar14 = (int)(uVar23 & 0xffff0000 | (uint)(ushort)((short)uVar23 << 1)) >> 3;
  uVar23 = 0x1f;
  if (uVar14 != 0) {
    while (uVar14 >> uVar23 == 0) {
      uVar23 = uVar23 - 1;
    }
  }
  uVar38 = CONCAT11((char)((byte)((uint)CONCAT11(bVar24,bVar15) >> 8) >> 1 | 0x80) >>
                    (bVar15 & 0x1f),bVar15);
  uVar11 = (short)((uVar36 & 0xffff0000) >> 0x10) + uVar38 + 1;
  uVar14 = (uVar31 & 0xffff0000 | (uint)uVar38) + 0x56142ac9;
  uVar17 = ((short)(char)((uVar36 & 0xffff0000) >> 0x10) & 0xffU) + uVar11;
  bVar24 = (byte)((uint)uVar11 >> 8);
  uVar11 = uVar11 & 0xff;
  uVar34 = (ushort)(byte)(bVar24 >> 1 | bVar24 << 7) << 8;
  bVar24 = (bVar15 & 0x1f) % 9;
  uVar36 = (uint)(ushort)((CONCAT11((char)(uVar36 >> 8) + 'I',(char)uVar36) >> 1) - 1) << 0x10 |
           (uint)(ushort)(uVar11 | uVar34 | 0x1000) & 0xffffff00 |
           (uint)(byte)((byte)((uVar11 | (ushort)((uVar34 >> 0xc & 1) != 0) << 8) >> bVar24) |
                       (char)uVar11 << 9 - bVar24);
  bVar43 = ((ushort)uVar36 & uVar17) == 0;
  uVar36 = uVar36 << 1;
  bVar24 = (byte)((uint)uVar38 >> 8);
  bVar25 = (byte)uVar37;
  uVar23 = CONCAT22((short)(iVar4 >> 0x11),(ushort)bVar19) + 0xb9c1ca3dU | uVar23;
  if (bVar25 <= bVar24) {
    uVar23 = uVar37;
  }
  uVar37 = (uVar31 & 0xffff0000 |
           (uint)CONCAT11((bVar24 - bVar25) + bVar43 + ((uVar36 >> 0xc & 1) != 0),bVar15)) << 1;
  bVar15 = (byte)uVar37;
  uVar31 = (int)(short)(uVar17 & 0xff00 | (ushort)bVar43) * (int)(short)uVar23;
  uVar11 = (ushort)uVar14;
  uVar17 = (ushort)(uVar36 >> 0x10) & 0xd9f3;
  if ((SBORROW2(uVar11,-0x78fe) != false) == (short)(uVar11 + 0x78fe) < 0) {
    uVar17 = (ushort)(uVar37 >> 0x10);
  }
  bVar19 = (bVar15 & 0x1f | 1) % 9;
  bVar15 = (byte)((CONCAT11(uVar11 < 0x8702,bVar15) | 1) >> bVar19) | (bVar15 | 1) << 9 - bVar19;
  uVar37 = (uVar37 & 0xffffff00 | (uint)bVar15) << (bVar15 & 0x1f) & 0xffff0000 | uVar31 >> 0x10;
  bVar15 = (byte)(uVar31 >> 0x10) & 0x1f;
  iVar26 = uVar23 << 0x20 - bVar15;
  uVar13 = (uVar31 & 0xffff) << ((byte)(uVar37 >> 1) & 0x1f);
  uVar37 = (uVar37 >> 9) << 8;
  uVar38 = (ushort)((uVar31 >> 0x10 & 0x1fe) >> 1) & 0xff0f;
  uVar36 = uVar37 & 0xffff0000;
  uVar31 = uVar36 | (uint)(ushort)(uVar38 | (ushort)uVar37 | 0x400) & 0xffffff00;
  sVar21 = (short)uVar13 >> 0xf;
  uVar34 = sVar21 - 1;
  uVar37 = (uint)uVar34 | 0xffff0000;
  bVar19 = (byte)uVar23;
  if (SCARRY2(sVar21,-1) == (short)uVar34 < 0) {
    uVar23 = uVar23 & 0xffff0000 | (uint)uVar34;
  }
  uVar32 = CONCAT22(uVar17,uVar34 * -0x2fe5);
  uVar34 = (short)uVar23 - uVar34;
  bVar19 = (char)uVar38 - 0x1dU >> 1 ^ bVar19;
  uVar41 = uVar31 | (uint)bVar19;
  if (bVar19 == 0) {
    uVar37 = uVar32;
    uVar41 = uVar13;
  }
  uVar32 = uVar32 | 0x700;
  if (!bVar42) {
    uVar41 = uVar23 & 0xffff0000 | (uint)uVar34;
  }
  iVar4 = 0;
  if (uVar37 != 0) {
    while ((uVar37 >> iVar4 & 1) == 0) {
      iVar4 = iVar4 + 1;
    }
  }
  uVar31 = uVar31 | (uint)bVar19 & 0xffffff70;
  uVar13 = (uVar37 & 0xff00) << 8;
  uVar33 = uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | uVar13 | uVar37 << 0x18;
  uVar41 = (int)((ulonglong)((longlong)(int)uVar41 * (longlong)(int)uVar31) >> 0x20) - uVar33;
  uVar11 = ((ushort)((uVar14 & 0xffff0000 | (uint)(ushort)(uVar11 + 0x78fe)) >> bVar15) |
           (ushort)iVar26) - 0x3ee;
  bVar15 = (char)(uVar32 >> 8) << 1 | (uVar17 & 2) != 0;
  uVar14 = CONCAT31(((uint3)(uVar32 >> 8) ^ (uint3)((((uint)uVar17 & 2) << 0x10) >> 8)) & 0xffff00 |
                    (uint3)(byte)(bVar15 ^ (byte)(((((ushort)bVar15 << 8) >> 0xe & 1) << 0xe) >> 8))
                    ,(uVar11 & 1) == 0) & ~(1 << ((uint)uVar34 & 0x1f));
  uVar17 = (((ushort)uVar31 | (ushort)uVar41) - (ushort)uVar14) - 1;
  uVar36 = uVar36 | uVar17;
  if (!bVar42) {
    uVar33 = uVar13 | uVar37 << 0x18 | uVar14 & 0xffff;
  }
  uVar34 = uVar34 | 1 << (uVar11 >> 1 & 0xf);
  bVar15 = ((byte)uVar17 & 0x1f) % 0x11;
  uVar34 = uVar34 << bVar15 |
           (ushort)(CONCAT12((uVar36 >> ((uint)uVar34 & 0x1f) & 1) != 0,uVar34) >> 0x11 - bVar15);
  uVar17 = uVar34 << 3;
  uVar31 = (uint)(ushort)((uVar17 & 0xff00 |
                           (ushort)(byte)(((byte)(uVar34 >> 0xd) | (byte)uVar17) << 1) | 1) &
                         ~(1 << (((ushort)(uVar36 << 1) | (ushort)((uVar14 & 0xffff0000) >> 0x1f)) -
                                 ((ushort)uVar14 & 0xff) & 0xf)));
  iVar26 = 0x1f;
  if (uVar33 != 0) {
    while (uVar33 >> iVar26 == 0) {
      iVar26 = iVar26 + -1;
    }
  }
  uVar37 = (uVar23 & 0xffff0000 | (uint)(ushort)((ushort)uVar41 + 0xba01)) >> 5;
  uVar13 = iVar26 * 2 + uVar33 + (uint)(iVar26 < 0);
  cVar10 = (char)uVar33;
  uVar36 = uVar37 | uVar33 << 0x1b;
  if (!bVar42) {
    uVar36 = uVar13;
  }
  uVar17 = CONCAT11(cVar10 + -0x10,cVar10 + (char)(uVar33 >> 8)) | 0x4d;
  bVar43 = (SBORROW1(cVar10,'\x0f') != SBORROW1(cVar10 + -0xf,'\x01')) != (short)uVar17 < 0;
  uVar28 = (int)(((uint)CONCAT21((short)(uVar33 >> 0x10),cVar10) & 0xffff00) << 8 | (uint)uVar17) >>
           bVar43;
  uVar32 = uVar31 * 0xfdde;
  uVar13 = (uVar13 & 0xffffff00 | (uint)(byte)(bVar43 + 0x42)) >> 1 |
           (uint)((uVar41 >> 0x1a & 1) != 0) << 0x1f;
  uVar37 = (uVar23 & 0xffe00000) >> 5 | uVar33 << 0x1b | (uint)(ushort)((short)uVar37 >> 7);
  cVar10 = (char)(uVar28 >> 8);
  uVar23 = uVar14 & 0xffff0000 | (uint)(ushort)~(uVar11 & 0xfffe);
  if (bVar42) {
    uVar23 = uVar28;
  }
  uVar14 = uVar13 ^ 1 << (uVar36 & 0x1f);
  bVar19 = (byte)uVar14;
  bVar15 = (bVar19 & 0x1f) % 9;
  sVar21 = CONCAT11((byte)(CONCAT11((uVar13 >> (uVar36 & 0x1f) & 1) != 0,cVar10) >> bVar15) |
                    cVar10 << 9 - bVar15,(char)uVar28);
  uVar33 = uVar37 >> (bVar19 & 0x1f) | uVar37 << 0x20 - (bVar19 & 0x1f);
  uVar13 = uVar23 >> (bVar19 & 0x1f) | uVar23 << 0x20 - (bVar19 & 0x1f);
  uVar31 = (uVar41 & 0xffff0000 | uVar32 >> 0x10) + uVar31 * -0x22000000;
  uVar30 = (short)uVar13 >> 1;
  uVar37 = (uVar14 & 0xffff0000 | (uint)CONCAT11((char)(uVar14 >> 8) + '!',bVar19)) * 2;
  bVar15 = (byte)uVar37;
  uVar14 = ((uVar41 & 0xffff0000 |
            (uint)(ushort)((short)(char)(uVar32 >> 0x10) & 0xffU |
                          (ushort)(byte)(((short)(sVar21 + 1) < 0) << 7 | (sVar21 == -1) << 6 |
                                         bVar42 << 2 | 2U | (byte)uVar31 & 1) << 8)) <<
            (bVar15 & 0x1f) | uVar37 >> 0x20 - (bVar15 & 0x1f)) + 0xdac8a889;
  uVar23 = (int)(short)uVar14 * (int)(short)uVar37;
  uVar35 = (ushort)uVar33;
  uVar1 = (ulonglong)(uVar13 & 0xffff0000 | (uint)uVar30 | 0xc0000000);
  uVar2 = CONCAT44((uVar31 >> 8 & 0xffff00) << 8 | (uint)(ushort)((short)(uVar23 >> 0x10) + uVar35),
                   uVar14 & 0xffff0000 |
                   (uint)(ushort)((short)((uVar23 & 0xffff) >> 1) >> (bVar15 & 0x1f))) &
          0x3fffffffffffffff;
  uVar3 = uVar2 / uVar1;
  uVar18 = (undefined2)(uVar3 >> 0x10);
  uVar12 = (ushort)(byte)uVar3 * (ushort)(byte)(uVar3 >> 8);
  bVar19 = (byte)(uVar2 % uVar1);
  bVar43 = (uVar36 & 1) != 0;
  cVar10 = (bVar19 + 0x57) - bVar43;
  uVar23 = (uVar37 & 0xffff0000 | (uint)CONCAT11((char)(uVar37 >> 8) + '\x17',bVar15)) +
           CONCAT22(uVar18,CONCAT11((cVar10 < '\0') << 7 | (cVar10 == '\0') << 6 |
                                    ((((bVar19 & 0xf) - 9) - bVar43 & 0x10) != 0) << 4 | bVar42 << 2
                                    | 2U | (bVar19 < 0xa9 || (byte)(bVar19 + 0x57) < bVar43),cVar10)
                   );
  bVar15 = (byte)uVar23;
  bVar25 = bVar19 - (cVar10 >= '\0') ^ (byte)(1 << (uVar33 >> (bVar15 & 0x1f) & 0x1f));
  uVar23 = uVar23 >> (bVar15 & 0x1f);
  bVar24 = (byte)uVar23;
  uVar13 = ((uVar36 & 0xffff) >> 1 | (uint)bVar43 << 0x1f) >> (bVar24 & 0x1f);
  bVar19 = (bVar24 & 0x1f) % 9;
  bVar29 = (byte)((char)bVar25 >> 7) >> 1;
  uVar38 = (ushort)(short)(char)bVar25 >> 1 & 0xff;
  bVar15 = (char)(uVar23 >> 8) * '\x02' + (char)uVar38;
  bVar42 = (uVar13 & 0x400) != 0;
  uVar31 = (uVar23 & 0xffff0000 |
           (uint)(ushort)(CONCAT11(bVar15,bVar24) ^ ((ushort)bVar15 & 4) << 8)) << 1;
  uVar34 = (ushort)uVar31;
  uVar39 = (ushort)uVar13 & 0x3fff;
  uVar11 = (ushort)(byte)(bVar25 + 0xb4 | 0xc0);
  uVar17 = uVar34 >> 4 & 1;
  uVar11 = (uVar39 / uVar11 & 0xff | uVar39 % uVar11 << 8) ^ (uVar34 | 1) ^ uVar17 << 4;
  bVar15 = (char)((uint)uVar11 >> 8) + 0x52;
  uVar37 = CONCAT22(uVar18,uVar11 & 0xff | (ushort)bVar15 << 8);
  uVar14 = ~((uVar28 & 0xffff0000 |
             (uint)(ushort)(uVar38 | (ushort)(byte)((byte)(CONCAT11(((short)(char)bVar25 & 1U) != 0,
                                                                    bVar29) >> bVar19) |
                                                   bVar29 << 9 - bVar19) << 8)) >> 1 |
            (uint)(uVar17 != 0) << 0x1f);
  uVar39 = (ushort)(bVar15 == 0);
  uVar22 = (ushort)uVar14;
  uVar17 = uVar22 >> 1;
  uVar14 = uVar14 & uVar37;
  iVar26 = uVar37 + 0xa52da711;
  uVar11 = (ushort)iVar26;
  uVar37 = (uVar14 ^ 0xd492) << 5;
  uVar38 = (ushort)uVar37;
  uVar34 = (ushort)((uint)iVar26 >> 0x10);
  uVar36 = (uint)(ushort)(uVar39 ^ (ushort)(uVar11 == uVar39) * (uVar39 ^ uVar17)) & 0xffffff00;
  bVar15 = (byte)(uVar36 >> 8);
  uVar39 = (ushort)(((uint)(ushort)((ushort)(((uint)(ushort)(uVar30 ^ (ushort)((ushort)(uVar12 & 
                                                  0xff | (ushort)(byte)((char)(uVar12 >> 8) * '\x02'
                                                                       + 1) << 8) == uVar30) *
                                                  (uVar30 ^ uVar35)) << 0x16) >> 0x10) |
                                   (ushort)(uVar23 >> 0x1a)) << 0x11) >> 0xf);
  uVar37 = uVar37 & 0xffff0000;
  cVar10 = (char)(bVar15 + (char)uVar17) >> 0x1e;
  uVar12 = CONCAT11(cVar10,0xb2);
  uVar30 = ~(uVar39 >> 0xe | uVar39);
  uVar23 = CONCAT31(CONCAT21(uVar34,'\0' < (char)(bVar15 | 0x88)),
                    ((uVar12 & 0xf2d4) != 0 && -1 < cVar10) << 6) & 0xffff;
  uVar23 = (uint)(uVar34 | 0x1b3d) << 0x10 |
           ((uint)(ushort)(uVar39 >> 2 | 0x1d76) << 0x10 | uVar23 | 0xc000) / (uVar23 | 0xc000) &
           0xffff;
  lVar5 = (ulonglong)uVar23 * (ulonglong)uVar23;
  uVar34 = ((ushort)(uVar14 >> 0x1b) | uVar38) << 2 | uVar38 >> 0xe;
  if (-1 < (char)((uint)uVar12 >> 8)) {
    uVar34 = uVar30;
  }
  uVar38 = CONCAT11((char)((ulonglong)lVar5 >> 0x28) + -0x29,(char)((ulonglong)lVar5 >> 0x20)) ^
           0xaf;
  uVar12 = (uVar30 ^ uVar11 + ((ushort)uVar36 | 0x2e) + 0x85d0) << 1 ^ 0xd7da;
  uVar14 = (uint)uVar38 & 0xfffff7ff;
  iVar4 = (((uVar13 & 0xffff0000 | (uint)(ushort)(uVar22 * -0x7557)) << 1) >> 0x10) * 0x30000;
  iVar26 = iVar4 + -0x76b27e43;
  cVar10 = (char)((uint)iVar26 >> 8);
  uVar41 = (uint)(ushort)((ushort)uVar14 | 0x783e) ^ 0x61a05ac;
  sVar21 = (short)uVar41;
  uVar39 = sVar21 << 1 | (ushort)(sVar21 < 0);
  uVar11 = CONCAT11(cVar10 << 1 | cVar10 < '\0',(char)iVar26) + uVar39;
  uVar23 = (uint)(byte)uVar11;
  uVar13 = ((uint)(ushort)(((uVar17 & 0xff00 | (ushort)bVar15 | 0x88) >> 1 | 0x8000) >> 1) << 0x12 |
           0x33a80000) & 0x6a82784;
  uVar36 = 0x100;
  if (uVar13 == 0) {
    uVar12 = uVar38 & 0xf7ff;
  }
  uVar32 = (iVar4 + 0x894d0000U | (uint)uVar11 & 0xffffff00 | uVar23) >> 7;
  sVar21 = (short)((int)(uVar37 | uVar34) >> 1);
  uVar11 = (ushort)((int)uVar37 >> 0x11);
  uVar17 = -sVar21;
  if (sVar21 != 0) {
    uVar36 = uVar32 & 0xffff;
  }
  iVar26 = (uVar13 << 1 | uVar36 >> 2) - (uVar23 << 0x19 | uVar32);
  cVar10 = (char)uVar32;
  uVar16 = (uint3)((uint)iVar26 >> 8) & 0xffff00;
  uVar23 = CONCAT22(uVar11,uVar17) ^ ((uint)uVar11 & 4) << 0x10;
  bVar43 = (uVar11 & 4) != 0;
  uVar38 = SEXT12(cVar10);
  uVar22 = CONCAT11(-1 - bVar43,bVar43) & 0xefc7;
  uVar34 = uVar22 * 2;
  uVar11 = uVar39 + 0xc68c;
  uVar17 = (short)cVar10 ^
           (ushort)(uVar38 == uVar17) *
           ((short)cVar10 & (uVar17 ^ (ushort)(uVar38 == uVar17) * (uVar17 ^ uVar38)));
  if (0x3973 < uVar39) {
    uVar17 = uVar11;
  }
  if (uVar11 != 0) {
    uVar17 = uVar34;
  }
  uVar37 = (int)(short)((uVar17 & 0xff) * (ushort)(byte)iVar26) * (int)(short)~uVar12;
  bVar15 = (byte)uVar34;
  uVar31 = uVar31 & 0xa7050000 | (uint)uVar34 & 0xffffff00;
  uVar36 = (((uint)(ushort)((ulonglong)lVar5 >> 0x30) << 0x10 | uVar37 >> 0x10 | 0x9505) ^ 0x5728) *
           2;
  uVar38 = (((ushort)(uVar37 >> 0x10) | 0x9505) + uVar22 * 4) * (short)uVar36;
  iVar4 = CONCAT22((undefined2)(cVar10 >> 7),uVar38);
  sVar7 = (CONCAT11(((char)(CONCAT11((byte)uVar14 < 0x4a,(char)((uint)iVar26 >> 8)) >> 2) + '%') -
                    bVar43,(byte)iVar26) | 0x2000) * 2;
  uVar39 = (~uVar12 | uVar38) + 0xda5e;
  uVar17 = (ushort)((byte)(((uint)uVar34 & 0xffffff00) >> 8) < 0x4d);
  sVar21 = sVar7 + uVar39;
  uVar12 = sVar21 + uVar17;
  uVar37 = uVar36 & 0xffff0000 | (uint)(ushort)((short)uVar38 >> 0xf);
  if (uVar12 != 0 && (SCARRY2(sVar7,uVar39) != SCARRY2(sVar21,uVar17)) == (short)uVar12 < 0) {
    uVar37 = uVar31 | (byte)((char)(bVar15 >> bVar15 | bVar15 << 8 - bVar15) >> 1);
  }
  bVar24 = (byte)((uVar31 >> 1) >> 8);
  sVar21 = (short)uVar37 + uVar11;
  bVar19 = bVar24 >> 1;
  bVar15 = bVar19 & 0x1f;
  uVar14 = iVar4 << bVar15 | (uint)(CONCAT14((uVar34 & 0x200) != 0,iVar4) >> 0x21 - bVar15);
  uVar31 = (uVar41 & 0xffff0000 | (uint)(ushort)((short)uVar37 << (bVar24 & 0x1f))) + 0xc09dc2f3;
  uVar17 = CONCAT11((char)((uint)uVar12 >> 8),((byte)uVar12 & 0x30) * -2) + 1;
  uVar36 = (ushort)((ushort)bVar19 | sVar21 * -0x8000) ^ uVar14;
  if (uVar36 == 0) {
    uVar36 = uVar31;
  }
  uVar41 = (uVar23 & 0xffff0000 | (uint)(ushort)(short)(char)uVar38) << 1 | (uint)((int)uVar23 < 0);
  iVar26 = (uint)(ushort)((int)uVar14 >> 0x19) << 0x10;
  bVar15 = (byte)(iVar26 >> 0x1d);
  bVar19 = (byte)((uint)uVar17 >> 8);
  bVar24 = bVar19 ^ (bVar15 == bVar19) * (bVar19 ^ (byte)uVar17);
  uVar14 = CONCAT31((int3)((uint3)((uint)iVar26 >> 8) |
                          (uint3)(byte)(((ushort)((int)uVar14 >> 9) & 0x3fff) %
                                       (ushort)(byte)((byte)uVar36 | 0xc0))) >> 0x1d,
                    bVar15 ^ (bVar15 == bVar19) * (bVar15 & bVar24));
  bVar15 = (byte)uVar36 & 0xf;
  uVar13 = uVar14 >> bVar15;
  uVar11 = (uVar17 & 0xff | (ushort)bVar24 << 8) << 1 |
           (ushort)((((uint)(uVar39 >> 0xc) & 0x1fffe) << 0xf) >> 1) >> 0xf;
  uVar1 = (ulonglong)(uVar36 & 0xffffff0f | 0xc0000000);
  uVar2 = CONCAT44(-(uVar37 & 0xffff0000 | (uint)CONCAT11(1,(char)sVar21)),
                   uVar13 & 0xffff0000 | (uint)(ushort)(short)(char)uVar13) & 0x3fffffffffffffff;
  uVar3 = uVar2 % uVar1;
  sVar21 = (short)uVar41;
  uVar17 = sVar21 + 0x7e66;
  bVar43 = (uVar3 & 0xad48) != 0;
  uVar37 = (uint)(uVar2 / uVar1);
  if (bVar43) {
    uVar37 = uVar41;
  }
  uVar41 = uVar36 & 0xf;
  sVar20 = (sbyte)uVar41;
  uVar13 = 0x1f;
  if ((uint)uVar3 != 0) {
    while ((uint)uVar3 >> uVar13 == 0) {
      uVar13 = uVar13 - 1;
    }
  }
  uVar11 = ((ushort)((short)CONCAT31(uVar16 | (byte)((byte)((uVar11 >> bVar15) >> 8) |
                                                    (byte)((uVar11 << 0x10 - bVar15) >> 8)),bVar43)
                    << bVar15) >> sVar20 |
           ((ushort)uVar31 >> bVar15 | (short)uVar14 << 0x10 - bVar15) << 0x10 - sVar20) << sVar20 |
           (ushort)uVar3 >> 0x10 - sVar20;
  uVar31 = CONCAT22((short)(uVar16 >> 8),uVar11) & 0xffffff00;
  uVar14 = (uint)(byte)((byte)uVar11 | (byte)uVar3);
  uVar36 = (uVar36 & 0xffffff00 | 0xc0000000 | uVar41) ^ 1 << (uVar14 & 0x1f);
  uVar14 = (uVar31 | uVar14) + 0x3a334572;
  uVar11 = (ushort)((uVar36 & 1) != 0);
  sVar7 = (short)uVar13 + -0x705a;
  sVar40 = sVar7 - uVar11;
  uVar36 = uVar36 & 0xffff0000 | (uint)(byte)((byte)uVar36 >> 1 | 0x80);
  if (sVar40 == 0 || (SBORROW2((short)uVar13,0x705a) != SBORROW2(sVar7,uVar11)) != sVar40 < 0) {
    uVar36 = uVar14;
  }
  bVar15 = (byte)uVar36;
  uVar31 = (uint)((CONCAT44(CONCAT31(0x70180d,bVar15 ^ 0x4e),
                            uVar37 & 0xffff0000 |
                            (uint)(ushort)((ushort)(byte)uVar37 * (ushort)(byte)(uVar31 >> 8))) &
                  0x3fffffffffffffff) / (ulonglong)(uVar14 | 0xc0000000));
  sVar40 = sVar40 >> (bVar15 & 0x1f);
  uVar23 = (int)(uVar23 & 0x7fff0000 | (uint)(ushort)(short)(char)uVar38 | uVar41 << 0x1f) >>
           (bVar15 & 0x1f);
  uVar11 = (sVar40 - uVar17) - 1;
  lVar5 = (ulonglong)
          (uVar31 ^ (uint)(uVar31 == uVar23) *
                    (uVar31 & (uVar23 ^ (uint)(uVar31 == uVar23) * (uVar23 ^ uVar31)))) *
          (ulonglong)(uVar36 & 0xffff0000 | (uint)uVar11);
  uVar23 = (uint)lVar5 ^ 0x3169;
  uVar31 = uVar23 & 0xffff0000 |
           (uint)(ushort)((short)((ushort)uVar23 & 0xff00 | uVar17 & 0xff) >> 1);
  bVar15 = (char)uVar23 + 0xab;
  uVar23 = (uint)((ulonglong)lVar5 >> 0x20);
  if ((char)bVar15 < '\0') {
    uVar23 = uVar31;
  }
  uVar34 = sVar40 << 1;
  iVar26 = uVar31 - (uVar13 & 0xffff0000 | (uint)(uVar34 | 1));
  uVar11 = (uVar11 & 0xff00 | (ushort)bVar42 | 0x1662) * 0x35b7;
  uVar17 = (uVar17 & 0xff00 | (ushort)bVar15) << 1;
  bVar15 = (byte)((uint)uVar11 >> 8);
  uVar11 = (uVar11 & 0xff | (ushort)(byte)(bVar15 >> 4 | bVar15 << 4) << 8) >> 7;
  uVar31 = ~CONCAT22(sVar21 >> 0xf,uVar17);
  bVar15 = (byte)(iVar26 >> 0x14);
  cVar10 = bVar15 + (char)((uint)uVar11 >> 8);
  uVar14 = uVar36 & 0xffff0000 | (uint)(ushort)(uVar11 & 0xff | (ushort)bVar15 << 8);
  uVar36 = CONCAT31((int3)(iVar26 >> 0x1c),cVar10);
  bVar43 = -1 < (char)(iVar26 >> 0x1c);
  bVar15 = ~(byte)(uVar14 + uVar23);
  uVar13 = uVar14 + uVar23 & 0xffffff00 | (uint)bVar15;
  uVar37 = ((uVar31 & 0x7fffff80) << 1) >> 6;
  uVar33 = uVar31 * -0x732ebb40 + ((uint)uVar17 & 0xff00 | (uint)bVar43) + 1;
  cVar10 = (char)uVar37 - cVar10;
  uVar31 = (uVar33 + uVar14) * 2;
  uVar32 = (uVar14 << (bVar15 & 0x1f) | uVar14 >> 0x20 - (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
  uVar41 = uVar13 ^ (uint)(uVar36 == uVar13) * (uVar13 ^ uVar32);
  uVar36 = uVar36 ^ (uint)(uVar36 == uVar13) * (uVar36 & uVar41);
  uVar31 = (uVar31 & 0xffff0000 | (uint)(ushort)-((ushort)uVar31 | (ushort)CARRY4(uVar33,uVar14))) *
           0xe232240;
  uVar41 = uVar41 ^ 0x4684;
  uVar38 = ((short)uVar31 - (uVar17 & 0xff00 | (ushort)(byte)((bVar43 + 'F') - (cVar10 < '\0')))) -
           1;
  uVar11 = (ushort)uVar41 >> 4;
  bVar24 = ~(byte)((uint)uVar17 >> 8);
  uVar34 = (ushort)(byte)((char)uVar36 << 1 | (uVar34 & 0x1000) != 0) * (ushort)(byte)(uVar36 >> 8)
           & 0xff;
  uVar17 = uVar11 & 0xff;
  uVar31 = (uVar31 & 0xffff0000 | (uint)uVar38) * -0x80;
  uVar13 = (int)((CONCAT44((int)(uVar37 & 0xffffff00 | (uint)CARRY4(uVar14,uVar23) << 0x1a |
                                (uint)(byte)(cVar10 * '\x02')) >> ((byte)uVar41 & 0x1f),
                           uVar36 & 0xffff0000 |
                           (uint)(ushort)(uVar34 | (ushort)(byte)((uint)(ushort)(uVar11 | uVar38 * 
                                                  0x1000) >> 8) << 8)) & 0x3fffffffffffffff) /
                (ulonglong)(uVar32 | 0xc0000000)) * (uVar41 & 0xffff0000 | (uint)uVar17);
  bVar19 = (byte)uVar17;
  bVar19 = bVar19 << (bVar19 & 0x1f);
  uVar41 = (uVar32 & 0xffff0000 | 0xc0000000 | uVar32 & 0xffff) ^ 0xbd71;
  bVar15 = (bVar19 & 0x1f) % 9;
  uVar23 = (uint)(byte)(bVar24 >> bVar15 | bVar24 << 9 - bVar15) << 8 | 0xc000;
  uVar38 = (ushort)uVar13 & 0x3fff;
  uVar17 = (ushort)(byte)(uVar23 >> 8);
  uVar11 = uVar38 % uVar17;
  uVar38 = uVar38 / uVar17 & 0xff;
  uVar12 = uVar11 << 8;
  uVar17 = (ushort)uVar23 >> 0xf;
  uVar39 = uVar17 | uVar34 << 1;
  bVar15 = (byte)uVar38 >> (bVar19 & 0x1f);
  uVar34 = uVar34 | 1 << (uVar17 | uVar34 << 1 & 0xf);
  uVar32 = (uVar31 >> 1 & 0xffff0000 | uVar31 >> 2 & 0x7fff) >> (bVar15 & 0x1f);
  uVar23 = (uint)(ushort)(uVar12 | bVar15 | 0xc000);
  uVar31 = (uint)uVar11 << 0x10 |
           (uint)(uVar38 | uVar12) & 0xffffff00 | (uint)(byte)(bVar15 << 4 | bVar15 >> 4);
  uVar37 = uVar31 % uVar23;
  bVar19 = (byte)uVar37;
  bVar15 = bVar19 & 0x1f;
  uVar36 = (uint)uVar39 << 0x20 - bVar15;
  uVar38 = uVar39 >> bVar15 | (ushort)uVar36;
  uVar14 = (uint)((ushort)uVar32 & (ushort)uVar41 & uVar34);
  uVar11 = (short)(uVar31 / uVar23) + (ushort)(bVar19 >> 1) + 1;
  bVar15 = (char)uVar11 + 1;
  uVar12 = -uVar38;
  uVar17 = CONCAT11((char)(uVar37 >> 8) + '.',(char)bVar15 < '\0');
  if (uVar38 == 0 && uVar12 != 0) {
    uVar17 = uVar12;
  }
  uVar31 = uVar13 & 0xffff0000 | (uint)uVar17;
  uVar23 = uVar31 + 0xbae8caed;
  uVar8 = CONCAT14(0x45173512 < uVar31,uVar32 & 0xffff0000 | uVar14) >> 2;
  uVar38 = (ushort)uVar23 ^ 0xc5;
  uVar37 = (uVar36 & 0xffff0000 | (uint)uVar12) + 0xb5056cc1;
  sVar21 = (short)uVar8;
  uVar17 = (ushort)(uVar38 == 0) * sVar21;
  uVar31 = uVar23 & 0xffff0000 | (uint)(ushort)(uVar38 ^ (ushort)(uVar38 == 0) * (uVar38 & uVar17));
  uVar23 = uVar37 & 0xffffff00;
  uVar32 = uVar41 ^ (uint)(uVar31 == uVar41) * (uVar41 ^ (uVar23 | (byte)((char)uVar37 + 0xa8)));
  uVar37 = uVar31 ^ (uint)(uVar31 == uVar41) * (uVar31 & uVar32);
  uVar23 = uVar23 | (int)uVar31 < (int)uVar41;
  bVar15 = bVar15 & 0x1f;
  uVar36 = (uint)(CONCAT14(uVar31 < uVar41,uVar37) >> bVar15) | uVar37 << 0x21 - bVar15;
  uVar1 = (ulonglong)(uVar32 < 0x2f5d476b) << 0x20 | (ulonglong)uVar34;
  uVar34 = (ushort)(uVar32 + 0xd0a2b895) >> 1;
  uVar13 = uVar23 * 0x91791be;
  bVar15 = (byte)uVar13 & 0x1f;
  uVar31 = (uint)uVar8 & 0xffff0000 | uVar14 << 0x1f;
  uVar41 = uVar31 | (ushort)(sVar21 + 0x527a);
  bVar19 = (byte)uVar36 >> ((byte)uVar13 & 0x1f);
  uVar14 = ((uint)uVar11 & 0xff) << 0x16 |
           (uint)(ushort)((uVar17 & 0xff00 | (ushort)(byte)((char)uVar17 << 1 | (char)uVar17 < '\0')
                          ) + 0xa343);
  uVar37 = uVar23 | 0xec85aedd;
  if (bVar42) {
    uVar37 = ((uint)(uVar1 << 0x15) | (uint)(uVar1 >> 0xc)) << bVar15 | uVar23 >> 0x20 - bVar15;
  }
  uVar23 = (uVar32 + 0xd0a2b895 & 0xffff0000 | (uint)(ushort)((uVar34 | 0x8000) ^ uVar34 & 0x800))
           << 7;
  uVar36 = uVar36 & 0xffff0000 | (uint)(ushort)(short)(char)bVar19;
  if (SCARRY4(uVar36,uVar14) != (int)(uVar36 + uVar14) < 0) {
    uVar37 = uVar41;
  }
  uVar36 = (uint)CARRY4(uVar36,uVar14) << 0x10 | uVar36 + uVar14 & 0xffff;
  uVar17 = (ushort)(uVar36 << 6);
  uVar11 = uVar17 | (ushort)(uVar36 >> 0xb);
  bVar15 = (byte)uVar11 ^ (byte)((uint)uVar11 >> 8);
  uVar17 = uVar17 & 0xff00 | (ushort)bVar15;
  if (-1 < (char)bVar15) {
    uVar17 = (ushort)uVar37;
  }
  if (!bVar42) {
    uVar41 = uVar31 | uVar13 & 0xff;
  }
  bVar24 = (byte)(uVar37 >> 8) | 0xc0;
  uVar11 = (uVar17 & 0x3fff) % (ushort)bVar24;
  uVar17 = (uVar17 & 0x3fff) / (ushort)bVar24 & 0xff;
  uVar34 = uVar17 | uVar11 << 8;
  uVar31 = (uint)(ushort)(((ushort)uVar41 >> 1) * 0x319a);
  uVar36 = (uVar13 & 0xffff00ff) + (uVar23 & 0xffff0000) + (uint)((uVar37 & 1) != 0);
  bVar15 = (byte)((uint)(ushort)((short)(char)bVar19 ^ uVar34) >> 8);
  uVar8 = CONCAT14(CARRY1(bVar15,bVar15) || 0xfe < (byte)(bVar15 * '\x02'),
                   uVar37 & 0xffff0000 | (uint)(ushort)(CONCAT11(bVar24 << 1,(char)uVar37) | 1)) |
          0x100;
  uVar9 = uVar8 >> 7;
  uVar38 = (short)uVar9 + 0xc2e5;
  bVar15 = (byte)uVar36 & 0x1f;
  bVar24 = (byte)uVar38;
  uVar37 = (uint)(uint3)(int3)(char)uVar11 << 8;
  uVar14 = (int)uVar8 << 0x1a | (uint)uVar9 & 0xffff0000 | (uint)uVar38 & 0xffffff00 |
           (uint)(byte)(bVar24 + (char)uVar17);
  uVar41 = ((uint)((ushort)((short)(char)bVar19 * 2) >> bVar15) |
           (uVar41 & 0xffff0000 | uVar31) << 0x20 - bVar15) ^ 0x9150f858;
  uVar13 = uVar14 << 1 | (uint)((int)uVar14 < 0);
  return (uVar37 & 0xffff0000 | (uint)(ushort)(short)(char)(~bVar24 & 0xdd)) + uVar13 +
         (((int)(short)uVar34 >> 0x1f) << 0x12 | uVar37 >> 0xf & 1) +
         (uVar36 & 0xbda1e200 | (uint)((int)uVar14 < 0 == (int)uVar13 < 0)) +
         (uVar23 & 0xffff0000 | 0x8000000) +
         ((uVar41 & 0xffff0000 | (uint)(ushort)((short)uVar41 + 0xd831)) >> 1) +
         ((uVar31 << 0x1d) >> 9 | 0x800000) + -0x6c89ade5;
}



// WARNING: Removing unreachable block (ram,0x0804e7b5)
// WARNING: Removing unreachable block (ram,0x0804ed40)
// WARNING: Removing unreachable block (ram,0x0804e788)

int log_size_10_var_007(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint5 uVar5;
  uint3 uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  sbyte sVar11;
  byte bVar12;
  byte bVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  char cVar20;
  short sVar21;
  char cVar22;
  byte bVar23;
  char cVar25;
  uint3 uVar26;
  uint uVar24;
  ushort uVar27;
  short sVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  bool in_PF;
  bool bVar37;
  bool bVar38;
  
  uVar9 = 0x7aa000a1;
  if (in_PF) {
    uVar9 = 0x7aa0de41;
  }
  sVar11 = (sbyte)(uVar9 & 0xffffff0f);
  _sVar11 = (short)(uVar9 & 0xffffff0f) << sVar11 | 0xd003U >> 0x10 - sVar11;
  bVar12 = (byte)_sVar11;
  uVar8 = (uint)_sVar11 & 0xffffff00;
  cVar22 = (char)(uVar8 >> 8);
  uVar17 = (int)(short)CONCAT31((int3)cVar22,1) * -0x97e;
  sVar21 = (short)(uVar17 >> 0x10);
  uVar17 = uVar17 & 0xffff;
  _sVar11 = (ushort)uVar17;
  uVar14 = (((ushort)uVar8 | (ushort)(byte)(bVar12 << (bVar12 & 7) | bVar12 >> 8 - (bVar12 & 7)) |
            0x20) + 0xe8b4) - (ushort)(sVar21 != 0 && sVar21 != -1);
  if (!in_PF) {
    uVar14 = _sVar11;
  }
  uVar14 = uVar14 << ((byte)uVar14 & 0x1f);
  uVar27 = CONCAT11(1,(char)uVar17);
  bVar12 = (byte)uVar14 & 0xf;
  uVar8 = (uint)uVar27 | 0x7f74802e;
  uVar17 = 0xc0a9174c;
  if (uVar8 == 0) {
    uVar17 = CONCAT22((undefined2)(cVar22 >> 7),0 << bVar12 | 0U >> 0x10 - bVar12);
  }
  uVar15 = uVar14 & 0xff00 | 0xff;
  uVar8 = (uVar8 & 0x7fffff80) << 1;
  uVar27 = (ushort)uVar8 | (uVar27 | 0x802e) & 0x7f;
  uVar7 = uVar15 + uVar27;
  uVar16 = uVar7 & 0xff;
  uVar8 = uVar8 & 0xffff0000 | (uint)uVar14 & 0xff00 | 0xfe;
  uVar33 = (uVar17 >> 1 | (uint)CARRY2(uVar15,uVar27) << 0x1f) * -0x6905e601;
  uVar27 = (ushort)uVar33 & 0xf;
  uVar17 = (int)(uVar9 & 0xffff0000 |
                (uint)(ushort)(uVar16 | (ushort)(byte)((byte)((uint)uVar7 >> 8) ^ 0xff) << 8)) >>
           ((byte)uVar16 & 0x1f);
  bVar37 = (uVar14 & 0x400) != 0;
  uVar16 = (ushort)uVar17;
  uVar7 = uVar16 >> 5;
  uVar16 = uVar7 | uVar16 << 0xb;
  lVar4 = (ulonglong)uVar8 * (ulonglong)uVar8;
  bVar12 = ((byte)uVar7 & 0x1f) % 0x11;
  uVar16 = ((ushort)(CONCAT12((int)((ulonglong)lVar4 >> 0x20) != 0,uVar16) >> bVar12) |
           uVar16 << 0x11 - bVar12) + 0xda4d;
  bVar12 = (byte)uVar16;
  uVar9 = ((uint)lVar4 ^ 0x127e) >> (bVar12 & 0x1f);
  uVar7 = (ushort)uVar9;
  if (bVar37) {
    uVar14 = uVar7;
  }
  uVar29 = ((uint)(ushort)((_sVar11 & 0xff) * 0x6002 >> 1) |
           (uint)((0xd1fcU >> uVar27 & 1) != 0) << 0x1f) << (bVar12 & 0x1f);
  uVar7 = uVar7 * (short)((int)(char)lVar4 << 1);
  uVar8 = (uVar17 & 0xffff0000 | (uint)uVar16) >> 1;
  uVar17 = (uint)((~(1 << uVar27) & 0xd1fcU) >> ((byte)uVar8 & 0x1f));
  uVar24 = uVar17 & 0xffffff7f;
  cVar22 = (char)uVar24;
  uVar17 = (uint)(cVar22 != '\0') << 0x10 | uVar17 & 0xff00 | (uint)(byte)-cVar22;
  _sVar11 = (ushort)(uVar17 >> 4) | (ushort)(uVar17 << 0xd);
  uVar27 = _sVar11 * 0x38a4;
  uVar17 = (uint)(ushort)(_sVar11 + (short)uVar8);
  uVar32 = uVar17 | 0x629f0000;
  uVar16 = uVar14 << 1 | uVar14 >> 0xf;
  _sVar11 = uVar16;
  if (uVar16 != 0) {
    _sVar11 = uVar27;
  }
  if ((short)uVar14 < 0) {
    uVar33 = uVar33 & 0xffff0000 | (uint)uVar27;
  }
  uVar26 = ((uint3)(uVar32 >> 8) & 0xff00) >> 8 | (uint3)uVar32 & 0xff00 |
           (uint3)((uVar17 << 0x18) >> 8);
  uVar32 = CONCAT31(uVar26,(char)(CONCAT11((short)uVar14 < 0,0x62) >> 6)) | 0x10;
  uVar17 = (uint)_sVar11 * -0x700f84c3;
  if ((int)((uVar29 & 0xffff0000 | (uint)(ushort)-(short)uVar29) + (uVar24 | 0x629f0000) &
            0xffff0000 | (uint)uVar27) < 0) {
    uVar32 = uVar8 & 0xffff | (uint)(ushort)(uVar26 >> 8) << 0x10;
  }
  uVar9 = ((uVar9 & 0xffff0000 |
           (uint)(ushort)(uVar7 & 0xff | (ushort)(byte)((char)((uint)uVar7 >> 8) + 0x2f) << 8)) *
           uVar29 & 0xffff0000 | uVar8 & 0xffff) * uVar17;
  uVar24 = uVar32 - 1 >> 1;
  uVar8 = (uVar9 & 0xffff0000 |
          (uint)(ushort)((short)((ushort)uVar9 >> 1 | (ushort)((uVar9 & 1) != 0) << 0xf) >> 0x1e)) -
          uVar24;
  bVar13 = (byte)(uVar24 >> 8);
  uVar15 = (ushort)(uVar32 - 1 >> 0x11);
  uVar7 = (ushort)uVar24 >> 1;
  uVar14 = ((short)uVar8 - (ushort)uVar24) - 1 | 0x40;
  uVar33 = ((uVar33 << (uVar16 == 0)) << ((byte)uVar17 & 0x1f) ^ 0x43639191) >> (bVar13 & 0x1f);
  bVar12 = bVar13 << (bVar13 & 7) | bVar13 >> 8 - (bVar13 & 7);
  uVar17 = uVar17 & 0xffff0000 | (uint)(ushort)(short)(char)bVar13 & 0xffffff00 | (uint)bVar12;
  uVar27 = (ushort)uVar17;
  sVar21 = uVar14 + uVar27;
  uVar9 = (uint)_sVar11;
  if (CARRY2(uVar14,uVar27) || sVar21 == -1) {
    uVar9 = uVar17;
  }
  uVar17 = uVar9;
  if (SBORROW2(uVar7,(short)uVar9)) {
    uVar17 = uVar33;
  }
  bVar12 = bVar12 & 0xf;
  uVar14 = (ushort)uVar33;
  _sVar11 = sVar21 + 1U >> bVar12 | uVar14 << 0x10 - bVar12;
  uVar30 = (int)(short)(ushort)bVar12 * -0x12f35c8d;
  uVar24 = uVar30 >> 0x12 & 1;
  sVar28 = (short)uVar30;
  uVar10 = (uVar8 & 0xffff0000 | (uint)_sVar11 & 0xffffff00 | (uint)(byte)((char)_sVar11 >> bVar12))
           + uVar17 + (uint)(uVar24 != 0);
  bVar12 = (byte)uVar10;
  uVar32 = uVar17 & 0xffff0000;
  uVar26 = (uint3)(uVar17 >> 8) & 0xff;
  bVar13 = (byte)uVar26;
  uVar14 = (uVar14 | 1 << (uVar14 & 0xf)) + 1;
  _sVar11 = (((short)(char)bVar12 & 0xff00U |
             (ushort)(byte)(bVar12 ^ (bVar12 == bVar13) *
                                     (bVar12 & (bVar13 ^ (bVar12 == bVar13) * bVar13)))) + 0x4bdc) -
            (ushort)(sVar28 < 0) & 0xfbff;
  sVar21 = (uVar7 - (short)uVar9 >> 8) << 2;
  uVar29 = (uint)(_sVar11 + uVar14 & _sVar11);
  uVar24 = (uVar30 ^ uVar24 << 0x12) & 0xffff0000 | uVar29;
  uVar8 = (uVar33 & 0xffff0000 | (uint)uVar14) - CONCAT22(uVar15,sVar21);
  uVar9 = (uVar32 | (ushort)(sVar28 << 1)) + 0xdff13c7e + uVar24 * 4;
  bVar13 = (byte)uVar9;
  uVar33 = uVar24 << (bVar13 & 0x1f) | uVar9 >> 0x20 - (bVar13 & 0x1f);
  uVar9 = (uVar10 & 0xffff0000 | uVar29) >> 1;
  uVar14 = sVar21 >> 1;
  cVar22 = (char)(uVar9 >> 8) >> 7;
  uVar29 = ((uint)(uint3)(uVar26 | (uint3)(((uint)(ushort)(sVar28 >> 0xf) << 0x10) >> 8)) & 0xffff00
           ) << 8 | (uint)(ushort)((short)uVar9 >> 0xf) & 0xffffff00 |
           (uint)(byte)(cVar22 << 1 | cVar22 < '\0');
  _sVar11 = (ushort)uVar29 & 0xf;
  uVar27 = (ushort)uVar33;
  uVar33 = uVar33 & 0xffff0000;
  uVar24 = (uint)(ushort)(uVar27 ^ 1 << _sVar11);
  _sVar11 = (ushort)(sVar28 << 2) >> 1 | (ushort)((uVar27 >> _sVar11 & 1) != 0) << 0xf;
  bVar12 = (bVar13 & 0x1f) % 0x11;
  uVar31 = uVar33 | uVar24 | 0xc0000000;
  uVar1 = CONCAT44(uVar29,uVar9 << (bVar13 & 0x1f) |
                          CONCAT22(uVar15,uVar14) >> 0x20 - (bVar13 & 0x1f)) & 0x3fffffffffffffff;
  uVar2 = uVar1 / (ulonglong)uVar31;
  bVar13 = (byte)uVar14 | 0x22;
  bVar23 = (byte)(uVar1 % (ulonglong)uVar31);
  _sVar11 = (short)(_sVar11 << bVar12 | _sVar11 >> 0x11 - bVar12) >> (bVar13 & 0x1f);
  uVar9 = (uint)(ushort)((ushort)uVar8 + _sVar11);
  uVar10 = (int)((uint)uVar2 | 0x20) >> 1;
  sVar21 = ((uVar14 & 0xff) - _sVar11) - (ushort)((uVar2 & 1) != 0);
  uVar29 = (uint)(ushort)(_sVar11 << 1 | 1);
  cVar22 = (char)sVar21 + -1;
  bVar12 = (bVar13 & 0x1f) % 9;
  uVar34 = CONCAT22(uVar15,sVar21) & 0xffffff00 |
           (uint)(byte)((byte)(CONCAT11((short)_sVar11 < 0,cVar22) >> bVar12) | cVar22 << 9 - bVar12
                       );
  uVar17 = uVar17 >> 0x13;
  uVar30 = CONCAT31(0xba0def,bVar13) ^ 0x8f19ff68;
  uVar9 = uVar30 + 0xdbf09306 +
          ((uVar9 << 0x1b |
           (uint)(CONCAT14(CARRY2((ushort)uVar8,_sVar11),
                           (uVar8 ^ (uVar8 >> 0x13 & 1) << 0x13) & 0xffff0000 | uVar9) >> 6)) ^
          uVar31) * 8;
  if (!bVar37) {
    uVar17 = uVar10 & 0x76ff;
  }
  uVar8 = uVar30 & 0xffff00ff;
  if ((ushort)(CONCAT11((int)(uVar32 | uVar24) < 0x797364b2,
                        ((bVar23 >> 7 | bVar23 << 2) + 0x30) * '\x02' | -(char)((int)uVar32 >> 0x1f)
                       ) >> 1 | (short)uVar34 << 0xf) == 0) {
    uVar8 = uVar34;
  }
  uVar10 = uVar10 & 0x12ff;
  uVar32 = uVar8 & 0xffff0000 | (uint)CONCAT11(1,(char)uVar8);
  uVar24 = (uint)(ushort)((ushort)((uVar17 ^ 0x4652) << 10) | (ushort)((uVar17 ^ 0x4652) >> 7)) <<
           0xf;
  uVar17 = (uint)((ushort)uVar9 & 0xfff7);
  uVar34 = uVar9 & 0xffff0000 | uVar17;
  uVar17 = uVar17 & 0x1f;
  uVar9 = uVar32 ^ 1 << uVar17;
  cVar22 = (char)uVar10;
  uVar32 = (uint)(ushort)(((ushort)uVar24 | (ushort)(uVar8 >> 0x11)) +
                         CONCAT11((char)(CONCAT11((uVar32 >> uVar17 & 1) != 0,(char)(uVar10 >> 8))
                                        >> 1),cVar22));
  uVar17 = ((uVar33 | 0xc0000000 | uVar29) >> 0xc | uVar29 << 0x14) ^ 0x428960af;
  iVar19 = uVar34 << 1;
  uVar8 = uVar32 << 0x11;
  lVar4 = (ulonglong)
          (uint)(CONCAT22((short)(uVar2 >> 0x10) >> 1,(short)(char)(cVar22 << 1 | cVar22 < '\0')) >>
                ((byte)uVar9 & 0x1f)) * (ulonglong)uVar8;
  _sVar11 = ((ushort)((uint)((ulonglong)lVar4 >> 0x20) < 0x4af9c452) << 8) >> 6;
  uVar33 = (uint)(byte)_sVar11 << 8;
  sVar11 = (sbyte)(uVar9 & 0xffffff0f);
  uVar14 = (ushort)((ulonglong)lVar4 >> 0x20) >> sVar11 | 0 << 0x10 - sVar11 | (ushort)iVar19;
  bVar12 = (byte)(uVar9 >> 0x15);
  bVar13 = (byte)((uVar9 & 0xffffff0f) >> 0x1d);
  uVar10 = (uint)CONCAT11(bVar13 >> (bVar12 & 7) | bVar13 << 8 - (bVar12 & 7),bVar12);
  uVar29 = uVar17 & 0xffff0000;
  uVar9 = (uint)(ushort)((short)uVar17 << 0xf | uVar14 >> 1);
  uVar30 = uVar29 | uVar9 | 0xc000;
  uVar9 = (((uint)uVar14 & 0x3fff) << 0x10) / (uVar9 | 0xc000);
  uVar17 = (uVar8 | uVar33) >> 7;
  iVar18 = uVar10 + 1;
  if (iVar18 == 0 || SCARRY4(uVar10,1) != false) {
    uVar30 = uVar29 | (uVar8 & 0x7fff80 | uVar33) >> 7;
  }
  uVar8 = uVar9 & 0xff00 | (uint)(ushort)((ulonglong)lVar4 >> 0x10) << 0x10 |
          (uint)(byte)((byte)uVar9 >> 1 |
                      (((uVar24 & 0xffff0000 | uVar32) >> (bVar12 & 0x1f) & 1) != 0) << 7);
  if ((uVar9 & 1) != 0 || iVar18 == 0) {
    uVar8 = uVar17;
  }
  uVar9 = ((uint)(CONCAT14(iVar19 < 0,iVar18) >> 8) & 0xffffff00) >> 1;
  uVar33 = -(uVar30 | 1 << (uVar30 & 0x1f)) & 0xffff0000 | 0x1f;
  uVar24 = uVar34 << 2 & ~(1 << (uint)(ushort)((_sVar11 << 8) >> 7));
  if (SBORROW4(uVar33,uVar33) != false) {
    uVar17 = uVar8;
  }
  uVar33 = uVar17 & 0xff00 | (uint)(byte)(!bVar37 << 4) | 0xc000;
  uVar32 = ((uint)(byte)(0x36 - (char)uVar8) | 0x1f00) << 0x10 |
           (uint)(ushort)(short)(char)((uVar17 & 0xffffff00) >> 8);
  uVar30 = uVar17 & 0xffff0000 |
           (uint)(ushort)(((ushort)(uVar17 & 0xffffff00) | (ushort)(byte)(!bVar37 << 4) | 0xc000) -
                         (short)uVar24);
  uVar10 = uVar32 % uVar33 | (uint)(ushort)((ulonglong)lVar4 >> 0x30) << 0x10 | 0x3500;
  uVar17 = uVar30 * 2;
  uVar29 = uVar9 & 0xffff0000 | iVar18 * 0x1000000;
  uVar33 = uVar8 & 0xffff0000 | (uint)(ushort)(short)(char)(uVar32 / uVar33);
  uVar8 = ((uint)(ushort)((short)uVar8 - 0x37) << 0x19 | uVar8 >> 7) ^ uVar17;
  if ((char)((byte)((int)(uVar29 | CONCAT11((char)(((ushort)((int)uVar30 < 0) << 8) >> 3),
                                            (char)uVar9)) >> 0xc) ^ (byte)uVar17) < '\x01') {
    uVar8 = uVar24;
  }
  uVar9 = uVar10 + uVar30 * -2;
  uVar24 = 0;
  if (uVar17 <= uVar10 && uVar9 != 0) {
    uVar24 = uVar8;
  }
  uVar32 = uVar9 + uVar33;
  uVar17 = uVar17 & 0xffffff00;
  uVar10 = (uint)(CARRY4(uVar9,uVar33) || uVar32 == 0);
  uVar30 = uVar17 | uVar10;
  uVar33 = (int)(short)uVar24 * -0x2b12;
  sVar21 = (short)(uVar33 >> 0x10);
  if (sVar21 != 0 && sVar21 != -1) {
    uVar32 = uVar30;
  }
  uVar34 = uVar24 & 0xffff0000 | (uint)(ushort)((short)((uVar33 & 0xfc00) >> 10) << 6);
  iVar19 = CONCAT22((short)((int)uVar29 >> 0x1c),0xff6a) - uVar8;
  cVar22 = (char)(uVar17 >> 0x10);
  uVar17 = (uint)CONCAT11(cVar22 << 1,(char)(uVar17 >> 8));
  cVar22 = ((char)uVar32 + 'L') - (cVar22 < '\0');
  uVar8 = uVar8 + iVar19;
  _sVar11 = (ushort)uVar8;
  uVar24 = SEXT24((short)iVar19);
  uVar33 = uVar17 & 0x1f;
  uVar29 = uVar24 | 1 << uVar33;
  bVar12 = ((byte)uVar29 & 0x1f) % 9;
  uVar33 = (uint)(byte)(cVar22 << bVar12 |
                       (byte)(CONCAT11((uVar24 >> uVar33 & 1) != 0,cVar22) >> 9 - bVar12));
  iVar19 = (uVar10 << 0x19 | (uint)(CONCAT14(sVar21 != 0 && sVar21 != -1,uVar30) >> 8) & 0xffff0000
           | uVar17) + 0xbe6b8b50;
  uVar17 = (uVar32 & 0xffffff00 | uVar33) + (int)(short)_sVar11;
  uVar14 = (_sVar11 & 0xfbff) - (short)iVar19;
  uVar8 = uVar8 & 0xffff0000;
  uVar30 = uVar8 | uVar14;
  uVar24 = uVar29 + uVar30 + 1;
  bVar12 = (byte)uVar24 & 0x1f;
  uVar10 = iVar19 << bVar12 | uVar34 >> 0x20 - bVar12;
  uVar29 = uVar17 & 0xffff0000 | (uint)(ushort)-(short)uVar17;
  _sVar11 = (short)(ushort)uVar9 >> 0xf;
  iVar19 = CONCAT22(_sVar11 >> 1 | (ushort)(((uint)((uVar9 & 1) != 0) << 0x1f) >> 0x10),
                    (short)(char)(CONCAT22(_sVar11,(ushort)uVar9 & 0xff | (ushort)(uVar29 == 0) << 8
                                          ) >> 1) * (short)(char)(uVar10 >> 8));
  bVar38 = -1 < (short)uVar24;
  uVar17 = uVar24 & 0xffffff00 | (uint)bVar38;
  iVar18 = iVar19 + -1;
  uVar9 = uVar34 + 0xbe86271f;
  if (iVar18 != 0 && 0 < iVar19) {
    uVar9 = uVar32 & 0xffff0000 | 0x4000000 | uVar32 & 0xff00 | uVar33;
  }
  uVar33 = (uVar10 >> 1 | (uint)((int)uVar29 < 1) << 0x1f) >> bVar38 | uVar17 << 0x20 - bVar38;
  lVar4 = (longlong)iVar18 * (longlong)(int)uVar30;
  _sVar11 = (ushort)uVar33 >> 1;
  uVar27 = (ushort)CONCAT31((int3)((ulonglong)lVar4 >> 8),
                            ((char)lVar4 - (char)((uint)(ushort)(_sVar11 | uVar14 * -0x8000) >> 8))
                            - ((uVar33 & 1) != 0)) >> 1;
  bVar12 = (char)_sVar11 >> 8;
  uVar32 = (uVar9 & 0xffff0000 |
           (uint)(ushort)((ushort)((uVar9 & 0xffff) << bVar38 % 0x11) |
                         (ushort)((uVar9 & 0xffff) >> 0x11 - bVar38 % 0x11))) + 0x703c7342;
  uVar9 = (uint)(ushort)((_sVar11 & 0xff00 | uVar14 * -0x8000 | (ushort)bVar12) >> 1 |
                        (ushort)((bVar12 & 1) != 0) << 0xf);
  uVar17 = uVar24 & 0xffff0000 | (uint)(ushort)((ushort)uVar17 | 0x4000) | 0xa3;
  uVar17 = uVar17 >> ((byte)uVar17 & 0x1f);
  uVar33 = (uVar17 & 0xffff0000 | (uint)(ushort)((short)uVar17 - uVar14)) +
           (int)((ulonglong)lVar4 >> 0x20) + (uint)((int)(uVar33 & 0xffff0000 | uVar9) < 0);
  sVar21 = ((uVar27 ^ 1 << (uVar27 & 0xf)) & 0xf852) * 2;
  _sVar11 = (ushort)(uVar32 >> 3) | 0x800;
  uVar26 = (uint3)(CONCAT22((short)((ulonglong)lVar4 >> 0x10),sVar21) >> 8) & 0xffff00;
  uVar17 = CONCAT31(uVar26 | (byte)(_sVar11 >> 8),bVar37);
  if (CONCAT22((ushort)(uVar32 >> 0x13),_sVar11 + sVar21) != 0) {
    uVar30 = uVar8 | uVar17 & 0xffff;
  }
  cVar22 = (char)uVar33 - (char)(((uVar9 << 0x13) >> 0xd) >> 8);
  uVar32 = uVar33 & 0xffffff00 | (uint)(byte)(cVar22 * '\x02' | cVar22 < '\0');
  _sVar11 = (ushort)uVar17 | 1 << ((short)((ulonglong)lVar4 >> 0x20) * 0x42e7 & 0xfU);
  uVar10 = uVar32 * -0x66823c25;
  uVar17 = (uint)_sVar11 | 0xc000;
  uVar8 = (uVar10 & 0x3fff) << 0x10 | (uint)_sVar11 | 0xc000;
  uVar32 = uVar32 + 0xb9860ff8;
  uVar33 = 0xcfca9b84;
  uVar24 = uVar32 & 0xffffff00;
  uVar29 = uVar24 | !bVar37;
  _sVar11 = (short)uVar30 + 0x10dd;
  uVar30 = (uVar30 & 0xffff0000 | (uint)_sVar11) >> 1 | (uint)((_sVar11 & 1) != 0) << 0x1f;
  iVar19 = (uVar8 / uVar17 & 0xffff | (uint)(ushort)(uVar26 >> 8) << 0x10) + 0xd48f8ce7;
  uVar9 = uVar29 * 4 + 0xb6d83e26;
  if ((byte)((uint)iVar19 >> 8) < (byte)(uVar24 >> 8)) {
    uVar33 = uVar9 & 0xffff | 0xcfca0000;
  }
  uVar33 = uVar33 << 1;
  uVar9 = uVar9 | 0xc0000000;
  uVar1 = CONCAT44(uVar8 % uVar17 | uVar10 & 0xffff0000,iVar19) & 0x3fffffffffffffff;
  uVar2 = uVar1 / (ulonglong)uVar9;
  uVar1 = uVar1 % (ulonglong)uVar9;
  cVar22 = (char)uVar1;
  uVar17 = uVar30 + 0x7b38df76;
  if (0x84c72089 < uVar30 && uVar17 != 0) {
    uVar9 = (uint)uVar1;
  }
  _sVar11 = ((ushort)uVar29 & ~(1 << ((ushort)uVar2 & 0xf))) - 1;
  bVar13 = (byte)_sVar11;
  bVar12 = bVar13 & 0xf;
  uVar8 = CONCAT22((short)(uVar1 >> 0x10),CONCAT11((char)(uVar1 >> 8) >> (bVar13 & 0x1f),cVar22));
  uVar9 = (uVar32 & 0xffff0000 | (uint)_sVar11) +
          (uVar9 & 0xffff0000 |
          (uint)(ushort)((ushort)uVar9 >> bVar12 | (ushort)uVar9 << 0x10 - bVar12));
  if (uVar9 == 0) {
    uVar17 = uVar9;
  }
  uVar32 = (uint)(ushort)(uVar2 >> 0x10) << 0x10;
  bVar12 = (byte)uVar9 & 0x1f;
  uVar27 = (ushort)((uVar8 >> bVar12) >> 0x10) | (ushort)((uVar8 << 0x20 - bVar12) >> 0x10);
  uVar8 = (int)(short)cVar22 * 0x648a;
  sVar21 = (short)(uVar8 >> 0x10);
  uVar24 = (uint)(sVar21 != 0 && sVar21 != -1) << 0x10 | uVar9 & 0xffff;
  uVar24 = (uint)(ushort)((ushort)(uVar24 >> 0xc) | (ushort)(uVar24 << 5)) & 0xffffbfff;
  _sVar11 = (short)uVar17 + 0xae07;
  bVar12 = (byte)uVar24;
  uVar29 = uVar9 & 0xffff0000 | (uint)CONCAT11((byte)(uVar24 >> 8) >> (bVar12 & 0x1f),bVar12);
  uVar14 = (ushort)uVar33 & ~(1 << ((ushort)(uVar33 & 0xffff) & 0xf));
  uVar10 = uVar33 & 0xffff0000 | (uint)uVar14;
  uVar9 = (uVar33 & 0xffff | (uint)uVar27 << 0x10) >> 1;
  uVar24 = uVar29 << 1;
  bVar12 = (byte)uVar24 & 0xf | (int)uVar29 < 0;
  uVar7 = (ushort)((uint)(CONCAT22(uVar27 >> 1,
                                   CONCAT11((char)(uVar9 >> 8) + ((byte)uVar2 & 0xfe),(char)uVar9))
                          * 2 + 1) >> 0x10) ^ (ushort)((uint)(1 << (uVar8 & 0x1f)) >> 0x10);
  uVar14 = uVar14 * -0x4e4b;
  iVar19 = (uVar24 & 0xffff0000 | (uint)(ushort)((ushort)((uVar14 >> 0xd & 1) != 0) << 0xf)) +
           0x8bc730cc;
  uVar24 = (uVar32 | 0x416c) << 2 | uVar32 >> 0x1e;
  uVar14 = (ushort)(byte)((char)(((uint3)(((uint)uVar7 << 0x10) >> 8) |
                                 (uint3)(byte)(-(uVar14 | 0x2000) >> 8)) >> 1) + 0x67) << 8 ^
           (ushort)uVar24;
  uVar27 = uVar14 & 0xff | (ushort)(byte)((char)(uVar14 >> 8) << ((byte)iVar19 & 0x1f)) << 8;
  uVar32 = CONCAT22(uVar7 >> 1,uVar27) + 1;
  bVar13 = (byte)(((ushort)iVar19 >> 1) + 0x813f >> 8);
  uVar26 = (uint3)((uint)iVar19 >> 8) & 0xffff00 | (uint3)bVar13;
  uVar9 = ((uint)((int)(uVar17 & 0xffff0000 |
                       (uint)(ushort)(_sVar11 << bVar12 | _sVar11 >> 0x10 - bVar12)) >> 0x18) >> 1 ^
          1 << ((int)((uint)(ushort)(cVar22 >> 7) << 0x10 | (uVar8 & 0xffff) >> 1) >> 0x10)) -
          uVar32;
  bVar13 = bVar13 - 0x26;
  uVar17 = CONCAT31(uVar26,bVar13) >> 1;
  cVar20 = (char)uVar32 + '\x0e';
  uVar14 = (ushort)(byte)(uVar10 >> 9) * (ushort)(byte)uVar17;
  uVar8 = uVar9 & 0xffff0000 |
          (uint)(ushort)((short)uVar9 + -0x230c + (ushort)((byte)((uint)uVar14 >> 8) < 0xd6));
  _sVar11 = (ushort)uVar17 | 0x3200;
  if (-0x6b91 < (short)_sVar11) {
    uVar8 = uVar9 & 0xffff0000 | 0x8202;
  }
  cVar25 = (char)uVar14;
  bVar12 = cVar25 + cVar20;
  uVar14 = (ushort)bVar12 | 0x100;
  if (bVar12 != 0 && (SCARRY1(cVar25,cVar20) != SCARRY1(bVar12,'\0')) == (char)bVar12 < '\0') {
    uVar8 = 0xd76c8202;
  }
  bVar37 = (bVar13 & 2) != 0;
  _sVar11 = _sVar11 >> 1;
  uVar30 = (uint)uVar26 << 8;
  uVar29 = (uint)(ushort)(_sVar11 | (ushort)bVar37 << 0xf);
  uVar16 = CONCAT11((byte)((uint)CONCAT11((char)(uVar32 >> 8) << 1,cVar20) >> 8) >> 1 | bVar37 << 7,
                    cVar20);
  uVar7 = 0x8242 - uVar16;
  bVar13 = (byte)_sVar11 & 0xf;
  uVar27 = (short)(cVar22 >> 7) - uVar27 >> bVar13 | uVar7 << 0x10 - bVar13;
  uVar14 = uVar14 ^ (ushort)(uVar14 == uVar7) *
                    (uVar14 & (uVar7 ^ (ushort)(uVar14 == uVar7) * (uVar7 ^ uVar16)));
  _sVar11 = (ushort)(uVar10 >> 1);
  uVar17 = ((uVar33 & 0xfffe0000) >> 1 | (uint)(ushort)(_sVar11 >> 0xe | _sVar11 << 2)) << 0xb;
  uVar27 = uVar27 << 10 | uVar27 >> 6;
  bVar23 = (byte)(uVar33 >> 0x16) ^ (byte)uVar14;
  uVar29 = (uVar30 >> 0x19 | ((uVar30 & 0xfffe0000) >> 1 & 0xff0000) >> 8 | (uVar29 & 0xff00) << 8 |
           (uVar29 & 0xf) << 0x18) ^ 1 << ((uint)uVar14 & 0x1f);
  cVar22 = ((byte)(uVar17 >> 8) | (byte)(uVar33 >> 0x1e)) + 1;
  uVar17 = uVar17 & 0xffff0000;
  uVar33 = (uint)CONCAT11(cVar22,bVar23);
  bVar12 = (byte)uVar29 ^ bVar23;
  uVar29 = uVar29 & 0xffffff00 | (uint)bVar12;
  bVar12 = bVar12 & 0x1f;
  uVar29 = uVar29 >> bVar12 | uVar29 << 0x21 - bVar12;
  uVar8 = (int)((uVar8 | 0x6b29dc3d) >> bVar13 | (uVar8 | 0x6b29dc3d) << 0x20 - bVar13) >> 1;
  uVar1 = (ulonglong)(uVar17 | uVar33 | 0xc0000000);
  uVar2 = CONCAT44(uVar32 & 0xffffff00 | (uint)(cVar22 < '\0'),
                   uVar24 - uVar9 & 0xffff0000 | (uint)uVar14) & 0x3fff00ffffffffff;
  uVar3 = uVar2 / uVar1;
  uVar2 = uVar2 % uVar1;
  bVar12 = (byte)uVar29 & 0x1f;
  uVar7 = (ushort)(uVar8 >> bVar12) | (ushort)(uVar8 << 0x20 - bVar12);
  uVar14 = CONCAT11((char)(uVar2 >> 8) >> 0xb,(char)uVar2);
  sVar11 = (sbyte)(uVar29 & 0xffffff0f);
  bVar12 = (byte)((short)(uVar29 & 0xffffff0f) << sVar11) | (byte)(uVar7 >> 0x10 - sVar11);
  _sVar11 = uVar14 & ~(ushort)(1 << (uVar33 & 0x1f));
  if ((CONCAT22((short)(uVar2 >> 0x10),uVar14) >> (uVar33 & 0x1f) & 1) == 0) {
    _sVar11 = uVar27;
  }
  uVar9 = (uint)CONCAT11((char)(uVar33 >> 8) + (char)_sVar11,bVar23);
  uVar7 = ((ushort)uVar3 ^ _sVar11) + (uVar7 << (bVar12 & 0xf) | uVar7 >> 0x10 - (bVar12 & 0xf));
  iVar19 = CONCAT22((ushort)(uVar9 >> 8) | (ushort)((uVar9 << 0x18) >> 0x10),
                    CONCAT11((char)(uVar17 >> 0x10) >> 1,
                             ((byte)(uVar17 >> 0x18) | 0xc0) + (char)_sVar11));
  uVar16 = SEXT12((char)uVar7);
  bVar23 = (bVar12 | 0x3b) & 0xf;
  uVar7 = uVar7 & 0x3fff;
  _sVar11 = (ushort)((bVar12 | 0x3b) != 0 | 0xc0);
  uVar14 = uVar7 / _sVar11 & 0xff;
  uVar9 = (uint)(ushort)(uVar3 >> 0x10) << 0x10;
  bVar13 = (byte)uVar14;
  bVar12 = (bVar12 | 0x3b) & 0xf;
  lVar4 = (longlong)
          (int)(uVar9 | (uVar9 | (uint)(ushort)(uVar14 | uVar7 % _sVar11 << 8) & 0xffffff00 |
                        (uint)(byte)(bVar13 << 5 | bVar13 >> 3)) >> 1 & 0x7fff) * (longlong)iVar19;
  uVar26 = (uint3)((ulonglong)lVar4 >> 8);
  uVar17 = CONCAT31(uVar26,0xf9);
  _sVar11 = (ushort)uVar17;
  uVar24 = ~((int)(CONCAT22(0x1449,uVar16) | 0x80000000) >> bVar12) + 0xb1fa897c;
  uVar9 = uVar24 >> 0xb;
  uVar14 = (ushort)(byte)-bVar12;
  uVar8 = ~CONCAT22((short)((ulonglong)lVar4 >> 0x30),(short)_sVar11 >> 0xf);
  uVar24 = uVar24 | uVar8;
  uVar9 = ((uint)(ushort)((uVar27 - 1 << bVar23 | uVar16 >> 0x10 - bVar23) >> 1) << 0x15 |
           uVar9 & 0xffff0000 | (uint)(ushort)((short)uVar9 + 0x9929)) << 5;
  uVar33 = uVar9 | uVar26 >> 0x13;
  uVar32 = iVar19 + uVar33 + (uint)((_sVar11 >> ((ushort)uVar8 & 0xf) & 1) != 0);
  uVar14 = uVar14 << 0xe | (uVar14 << 6) >> 8;
  uVar27 = -uVar14;
  uVar8 = uVar29 & 0xffff0000 | (uint)uVar27;
  uVar7 = (ushort)uVar33;
  _sVar11 = 0x7a0c;
  if (uVar14 == 0 && uVar27 != 0) {
    _sVar11 = uVar7;
  }
  bVar12 = (byte)uVar27 & 0x1f;
  uVar14 = uVar7 << 1 | (ushort)((short)uVar7 < 0);
  uVar27 = _sVar11 & 0xff00 | 0x200 | (ushort)(byte)((char)_sVar11 + 0x43);
  uVar9 = (uVar9 & 0xffff0000 | (uint)uVar14) + 0xcd95a45b & 0xffff0000;
  sVar21 = uVar27 + 0x917f;
  _sVar11 = 0;
  if (sVar21 < 0) {
    _sVar11 = uVar14;
  }
  uVar8 = (uVar8 >> bVar12 | uVar8 << 0x20 - bVar12) & 0xffff0000 |
          (uint)(uVar27 < 0x6e81 && sVar21 != 0) << 8;
  if (SCARRY2(uVar27,-0x6e81) == SCARRY2(sVar21,0)) {
    uVar14 = (ushort)uVar24;
  }
  if (uVar27 >= 0x6e81 || sVar21 == 0) {
    uVar9 = uVar9 | uVar14;
  }
  uVar24 = uVar24 + 0x4f8338b5;
  _sVar11 = _sVar11 & (ushort)uVar9;
  uVar14 = (ushort)uVar9 >> 1;
  uVar24 = uVar24 >> 1 | (uint)((uVar24 & 1) != 0) << 0x1f;
  bVar12 = (byte)uVar14;
  bVar13 = (byte)_sVar11;
  cVar22 = bVar13 - bVar12;
  _sVar11 = _sVar11 & 0xff00 | (ushort)(byte)(cVar22 - 1);
  uVar33 = (uint)(bVar13 < bVar12 || cVar22 == '\0');
  iVar19 = uVar8 + 0x8ad4c50f;
  bVar37 = SBORROW4(uVar8,0x752b3af1) != SBORROW4(iVar19,uVar33);
  uVar33 = iVar19 - uVar33;
  uVar27 = ((short)(uVar32 | 0xc000) + 0xf50) - (ushort)((uVar32 & 0x200000) != 0);
  if (uVar33 == 0 || bVar37 != (int)uVar33 < 0) {
    uVar27 = _sVar11;
  }
  uVar8 = ((uVar32 | 0xc000) ^ uVar32 & 0x200000) & 0xffff0000 | (uint)uVar27;
  if (uVar33 != 0 && bVar37 == (int)uVar33 < 0) {
    _sVar11 = uVar27;
  }
  _sVar11 = (short)uVar33 + (_sVar11 ^ uVar27) >> 1;
  uVar29 = uVar8 - uVar24;
  uVar14 = (uVar14 & 0xff00 | 0x8000 | (ushort)(byte)(bVar12 * '\x02')) + 0xa947 +
           (ushort)(uVar8 < uVar24);
  uVar24 = uVar29 * -0x29a32a7;
  bVar13 = (byte)((uint)(ushort)(_sVar11 | (ushort)CARRY1(bVar12,bVar12) << 0xf) >> 8);
  bVar12 = (char)_sVar11 << 1;
  _sVar11 = CONCAT11(bVar13 << (bVar12 & 0x1f | 1),bVar12) | 1;
  bVar12 = (byte)_sVar11;
  sVar21 = (short)uVar29 << (bVar12 & 0x1f);
  bVar12 = (bVar12 & 0x1f) % 0x11;
  uVar8 = (uint)((uVar24 & 1) != 0) << 0x10 | uVar24 & 0xffff;
  uVar8 = (uVar24 & 0xffff0000 |
          (uint)(ushort)((ushort)(uVar8 << bVar12) | (ushort)(uVar8 >> 0x11 - bVar12))) ^ 0x4b3238a4
  ;
  uVar32 = (uVar8 + 0x475073d6) - (uint)((uVar14 & 8) != 0);
  uVar8 = (uVar33 & 0xffff0000 | (uint)_sVar11 & 0xffffff00 | (uint)(uVar8 == 0)) + 0xc3607f72;
  bVar12 = (byte)uVar8 & 0xf;
  _sVar11 = (uVar14 & 0xf7 | (ushort)(bVar13 >> 1) << 8 | 0x8000) >> bVar12 |
            (short)uVar32 << 0x10 - bVar12;
  uVar32 = uVar32 ^ 0x4f0c3365;
  cVar22 = (char)_sVar11;
  bVar12 = ('\0' < cVar22) * '\b';
  uVar27 = (ushort)(CONCAT22((short)uVar14 >> 0xf,(short)uVar14 >> 0xb) >> 1);
  uVar7 = (ushort)((short)uVar14 >> 0xf) >> 1;
  uVar27 = uVar27 & ~(1 << (uVar27 & 0xf));
  uVar33 = (((uint)(ushort)(_sVar11 + 0xb175 + sVar21 * 0x313c) | 0xbbca0000) >> 1) << 3;
  uVar24 = (uint)bVar12;
  uVar14 = uVar27 << bVar12 | uVar27 >> ('\0' < cVar22) * -8 + 0x10;
  uVar9 = (uVar9 & 0xffff0000 | (uint)CONCAT11((char)((uint)_sVar11 >> 8),-cVar22) & 0xffff1dff) + 1
  ;
  cVar22 = ((byte)uVar33 | (byte)((short)uVar27 >> 0xf) >> 5) + 1;
  if ((uVar17 & 0x400) != 0) {
    uVar24 = (uint)uVar27;
  }
  bVar37 = cVar22 != '\0';
  bVar12 = -cVar22;
  uVar33 = uVar33 & 0xffffff00 | 0x10000000 | (uint)bVar12;
  uVar17 = uVar8 & 0xffff0000 | uVar24;
  if (!bVar37 && bVar12 != 0) {
    uVar17 = uVar33;
  }
  bVar12 = (byte)uVar9 + 0x3b;
  uVar8 = (uint)((byte)uVar9 < 0xc5 || bVar12 < bVar37);
  uVar10 = (uVar17 + 0x776806a1) - uVar8;
  uVar24 = uVar10 & 0xffff;
  uVar17 = (uint)(uVar17 < 0x8897f95f || uVar17 + 0x776806a1 < uVar8) << 0x10 | uVar24;
  bVar13 = (byte)(uVar24 >> 8);
  uVar24 = (uVar29 & 0xffff0000 | (uint)(ushort)(sVar21 * -0x73b1)) << (bVar13 & 0x1f);
  iVar19 = (int)(short)uVar33 * 0x282e;
  sVar21 = (short)((uint)iVar19 >> 0x10);
  uVar8 = uVar24 & 0xffff;
  _sVar11 = CONCAT11(((char)(uVar8 >> 8) - ((byte)(uVar14 << 1) | (short)uVar14 < 0)) -
                     (sVar21 != 0 && sVar21 != -1),(char)uVar8);
  iVar18 = (uVar9 & 0xff00 | (uint)(byte)(bVar12 - bVar37)) * (uint)uVar27;
  uVar9 = uVar9 & 0xffff0000;
  bVar12 = bVar13 << (bVar13 & 7) | bVar13 >> 8 - (bVar13 & 7);
  uVar8 = (uint)(ushort)((ushort)iVar19 | 4);
  bVar13 = (byte)((uint)_sVar11 >> 8);
  uVar14 = (ushort)(byte)iVar18 * (ushort)bVar13;
  uVar33 = (uint)uVar14;
  cVar22 = (char)((uint)iVar18 >> 0x10);
  uVar17 = (int)(uVar10 & 0xffff0000 |
                 (uint)(ushort)((ushort)(uVar17 >> 8) | (ushort)(uVar17 << 9)) & 0xffffff00 |
                (uint)bVar12) >> (bVar12 & 0x1f) & 0xffff0000U | (uint)bVar13;
  if (cVar22 >= '\0') {
    uVar17 = (uint)(ushort)((short)uVar27 >> 0xf) << 0x10 |
             (uint)(byte)(cVar22 << 1 | cVar22 < '\0');
  }
  uVar29 = uVar33 << 0x12;
  _sVar11 = _sVar11 >> ((byte)uVar17 & 0x1f);
  uVar34 = uVar24 << 0x1b | (uint)(_sVar11 >> 2);
  uVar24 = uVar32 >> 0x18;
  uVar1 = (ulonglong)(uVar34 < 0xf1fd80e2) << 0x20;
  lVar4 = (uVar1 | _sVar11) << 0xb;
  uVar27 = (ushort)(CONCAT22(uVar7,uVar27) >> 0xe) >> 0xd | uVar14 * 8;
  uVar30 = ((uint)lVar4 & 0xffff0000 |
           (uint)(byte)((char)((byte)((uVar1 >> 0x16) >> 8) | (byte)((ulonglong)lVar4 >> 8)) >> 0xb)
           << 8) ^ 0x1088d03a | 0x9875002d;
  bVar12 = (byte)(uVar17 & 0xff);
  _sVar11 = (ushort)uVar30;
  uVar10 = (uint)(ushort)(_sVar11 >> (bVar12 & 0xf) | _sVar11 << 0x10 - (bVar12 & 0xf));
  uVar34 = (uVar34 + 0xe027f1e) * 2;
  uVar32 = (uVar24 | (uVar32 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | (uVar8 & 0xef) << 0x18) >> 1
  ;
  sVar21 = (short)(uVar9 >> 0x10);
  uVar30 = uVar30 & 0xffff0000 | (uint)(ushort)((ushort)uVar34 | 1 << (sVar21 >> 0xf & 0xfU));
  uVar34 = (uVar34 & 0xffff0000 | uVar10) - 1;
  uVar8 = uVar30 << 1;
  if ((int)uVar30 < 0) {
    uVar34 = uVar34 & 0xffff0000 | (uint)uVar27;
  }
  uVar30 = uVar9 | (ushort)(uVar14 & 0xff | (ushort)(byte)~(byte)(uVar33 >> 8) << 8);
  uVar31 = (uint)((int)(uVar9 | uVar33) >> 0x1f) >> 1;
  uVar9 = (uVar32 | uVar10 << 0x1f) >> 1;
  uVar5 = CONCAT14((uVar24 & 2) != 0,uVar9 | (uint)CARRY2((ushort)uVar34,(ushort)uVar32) << 0x1f) >>
          6;
  uVar33 = (uint)uVar5;
  uVar24 = uVar30 >> (bVar12 & 0x1f) | uVar30 << 0x20 - (bVar12 & 0x1f);
  uVar32 = uVar17 & 0xffff000f;
  sVar11 = (sbyte)uVar32;
  bVar13 = (char)(uVar24 >> 8) - (char)(uVar31 >> 8);
  if ((bVar13 & 0x80) == 0) {
    uVar32 = uVar17 & 0xffff0000 | uVar31 & 0xffff;
  }
  uVar10 = uVar24 & 0xffff0000 | (uint)CONCAT11(bVar13,(char)uVar24);
  if ((bVar13 & 1) != 0 || (bVar13 & 0x40) != 0) {
    uVar10 = uVar31;
  }
  _sVar11 = (short)uVar31 + 0x1cb3;
  uVar10 = ((uVar10 & 0xffffff00 | (uint)(byte)((char)uVar10 << 1)) << 1 | 1) ^ 0x1fff6efc;
  uVar14 = (CONCAT11(uVar10 != 0,(char)uVar32) & 0xffb3) + 0xc554;
  uVar17 = uVar8 & 0xffff0000 |
           (uint)(ushort)(((short)uVar8 << (bVar12 & 0x1f) & (ushort)(uVar17 & 0xff)) << 10);
  if (uVar14 == 0) {
    uVar17 = uVar32 & 0xffff0000 | (uint)uVar14;
  }
  uVar8 = uVar10 & 0xffff0000 | (uint)CONCAT11(uVar14 == 0,(char)uVar10);
  bVar12 = (byte)uVar17 & 0xf;
  uVar16 = (ushort)uVar17 >> 0xe | (ushort)uVar17 << 2;
  uVar26 = (uint3)(((ulonglong)
                    (uVar32 & 0xffff0000 |
                    (uint)(ushort)(uVar14 >> bVar12 | uVar14 << 0x10 - bVar12)) << 0xb) >> 8) |
           (uint3)((ulonglong)(uVar32 >> 0x16) >> 8);
  bVar13 = (byte)uVar16;
  bVar12 = bVar13 & 0x1f;
  uVar30 = uVar8 << bVar12 | uVar8 >> 0x20 - bVar12;
  cVar20 = (char)uVar30;
  cVar25 = (char)(uVar30 >> 8);
  cVar22 = cVar25 - cVar20;
  uVar32 = (uint)(ushort)(CONCAT11(cVar22,cVar20) << 1 | 1) & 0xffff7fff;
  uVar27 = uVar27 ^ (ushort)uVar32;
  uVar8 = (((uVar33 & 0xffff0000 | uVar9 << 0x1b |
            (uint)(ushort)((ushort)uVar5 >> sVar11 | (short)uVar24 << 0x10 - sVar11)) ^
           uVar33 & 0x2000000) & 0x7fff8000) << 1;
  iVar19 = CONCAT22((ushort)(sVar21 >> 0x1f) >> 1,(ushort)(byte)((char)(uVar10 >> 8) >> 7));
  uVar33 = (uint)(ushort)((ushort)(byte)uVar26 | 1 << (uVar27 & 0xf));
  uVar9 = iVar19 * 0x1de0683f;
  uVar14 = (ushort)CONCAT31(uVar26,(SBORROW1(cVar25,cVar20) != false) == cVar22 < '\0');
  sVar21 = (short)uVar9;
  uVar24 = (((uint)uVar7 & 0xc000) << 0x10) >> 0xe | uVar29 | (uint)(ushort)((uVar27 - sVar21) - 1);
  uVar10 = uVar24 | 0xc0000000;
  uVar1 = CONCAT44(uVar9 & 0xffff0000 | (uint)(ushort)(sVar21 + (uVar14 >> 5 | uVar14 << 0xb)),
                   (uVar30 & 0xffc00000) >> 0xe | uVar33 << 0x12 |
                   (uint)(byte)~(byte)((uVar30 & 0xffff0000 | uVar32) >> 0xe)) & 0x3fffffffffffffff;
  uVar2 = uVar1 / (ulonglong)uVar10;
  uVar27 = (uVar16 >> 1 | (short)(uVar1 % (ulonglong)uVar10) << 0xf) + _sVar11;
  uVar9 = (uint)CONCAT11((char)(((uVar29 & 0xffe00000) >> 0xd) >> 8) + -0x41,
                         (char)(uVar24 >> 0xd) >> (bVar13 & 0x1f));
  uVar9 = ((iVar19 * 0x41f80000 | (uVar29 & 0xe0000000) >> 0xd | uVar9) ^ uVar9 & 0x1000) >> 1;
  uVar14 = (ushort)(uVar2 >> 8);
  if ((uVar2 & 0x100) == 0 && (uVar2 & 0x4000) == 0) {
    uVar14 = (ushort)(uVar9 >> 8);
  }
  uVar24 = uVar9 + 0xe59a4c31;
  _sVar11 = (ushort)(uVar34 >> 8) & 0xff00 | (ushort)((uint)_sVar11 >> 8);
  if (uVar9 < 0x1a65b3cf) {
    _sVar11 = uVar14 & 0xff00;
  }
  bVar12 = (byte)uVar27 & 0x1f;
  uVar17 = (uVar17 & 0xffff0000 | (uint)uVar27) << bVar12 |
           (uint)((int)uVar2 >> 0x1f) >> 0x20 - bVar12;
  bVar37 = (int)(uVar17 << 0xe) < 0;
  uVar7 = ((ushort)(uVar10 << 1) |
          (ushort)(((uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 |
                    uVar33 << 0x18) - uVar17) + -1 >> 0x1f)) << bVar37 |
          (ushort)(byte)(bVar37 >> 0x10 - bVar37);
  uVar27 = (short)(0 % (uVar24 & 0xffff | 0xc000)) * 2;
  uVar14 = _sVar11 << 0x10 - bVar37;
  bVar12 = bVar37 >> bVar37 | (byte)uVar14;
  uVar9 = (uint)uVar7 << 0x20 - (bVar12 & 0x1f);
  bVar13 = (byte)((uint)uVar27 >> 8) >> (bVar12 & 0x1f);
  bVar23 = ((byte)(uVar24 >> 8) | 0xc0) << 1;
  uVar16 = CONCAT11(bVar23,(char)uVar24);
  uVar8 = uVar24 & 0xffff0000 | (uint)uVar16;
  uVar33 = (uVar7 >> (bVar12 & 0x1f) | uVar9) + uVar8 + 1;
  uVar7 = CONCAT11(bVar13,'g' - ((int)uVar10 < 0)) << 1 | (ushort)((char)bVar13 < '\0');
  if (-1 < (short)_sVar11) {
    uVar7 = uVar16;
  }
  bVar12 = (bVar12 & 0x1f) % 0x11;
  uVar24 = uVar33 & 0xffff;
  uVar14 = (ushort)(byte)(bVar37 >> bVar37) | uVar14 & 0xff;
  sVar21 = (short)(char)uVar27;
  uVar32 = CONCAT22((short)(uVar2 >> 0x10) >> 0x1f,(short)uVar7 >> 1) >> ((byte)uVar14 & 0xf);
  cVar22 = (char)uVar32;
  _sVar11 = (ushort)(byte)(cVar22 << 1 | cVar22 < '\0');
  uVar27 = (ushort)uVar32 & 0xff00 | _sVar11;
  uVar14 = (uVar14 | uVar14 << 8) & 0xf0f;
  _sVar11 = _sVar11 & 0xf;
  uVar7 = uVar27 | 1 << _sVar11;
  iVar18 = CONCAT22((ushort)((uVar10 << 1) >> 0x10) | (ushort)(uVar9 >> 0x10),sVar21) >> 6;
  iVar19 = (int)((ulonglong)((longlong)iVar18 * -0x495bcc06) >> 0x20);
  iVar19 = ((int)(((uVar17 & 0x1fffe) << 0xf | (uint)uVar14 & 0xffffff00 |
                  (uint)(byte)((char)uVar14 << 1)) - iVar18) >> 6) + 0x69d5192b +
           (uint)(iVar19 != 0 && iVar19 != -1);
  uVar14 = (ushort)((ulonglong)((longlong)iVar18 * -0x495bcc06) >> 0x10);
  cVar25 = -(char)((ushort)bVar23 * 0x100 - sVar21 >> 8);
  uVar26 = CONCAT21((short)(((uint)((uint3)(uVar8 >> 8) & 0xffff00) << 8) >> 0x10),cVar25);
  bVar13 = (byte)(iVar19 >> 10);
  cVar20 = (char)((uint)(ushort)((ushort)(byte)((char)((uint)(ushort)(uVar7 & 0xff |
                                                                     (ushort)(byte)((char)((uint)
                                                  uVar7 >> 8) << 1 | (uVar27 >> _sVar11 & 1) != 0)
                                                  << 8) * -0x4afe1086 >> 8) << 1) << 8 &
                                ~(1 << ((short)iVar18 + 0x2355U & 0xf))) >> 8);
  cVar22 = cVar20 + cVar25;
  uVar9 = (uVar33 & 0xffff0000 |
          (uint)(ushort)(((ushort)(uVar24 << bVar12) | (ushort)(uVar24 >> 0x11 - bVar12)) << 1)) ^
          0x521f0e49;
  if ((SCARRY1(cVar20,cVar25) != SCARRY1(cVar22,'\0')) != cVar22 < '\0') {
    uVar9 = (uint)uVar14 << 0x10;
  }
  uVar6 = uVar26 >> 7;
  iVar35 = (uint)uVar14 * 0x10000;
  _sVar11 = (ushort)((uVar9 << 1) >> 0x10);
  uVar9 = (uint)uVar6 & 0xff00 | (uint)(byte)((byte)uVar6 << 5 | (byte)uVar6 >> 3) | 0xc00;
  iVar36 = iVar35 + 0x5d13ee24;
  if (iVar36 == 0) {
    uVar9 = 0;
  }
  if (iVar36 < 0) {
    iVar36 = iVar35 + 0x5d130000;
  }
  return uVar9 + (CONCAT31(uVar26,0x31) << 0x12 | (uint)uVar6 & 0xffff0000 |
                 (uint)(0 >> (bVar13 & 0x1f)) & 0xffffff00) +
         CONCAT31((int3)(iVar19 >> 0x12),bVar13 >> 1) +
         (iVar18 + 0xa34297a0U & 0xffff0000 |
         (uint)((ushort)(iVar18 + 0xa34297a0U) & 0xfffe) & 0xffff5bb3) +
         (uint)(_sVar11 ^ _sVar11 & 0x10) * 0x10000 + iVar36 + -0x2c7a4d5a;
}



// WARNING: Removing unreachable block (ram,0x0804f903)
// WARNING: Removing unreachable block (ram,0x0804f5e8)
// WARNING: Removing unreachable block (ram,0x0804f488)
// WARNING: Removing unreachable block (ram,0x0804f39c)
// WARNING: Removing unreachable block (ram,0x0804f3ca)
// WARNING: Removing unreachable block (ram,0x0804fdd9)
// WARNING: Removing unreachable block (ram,0x0804fb4b)

int log_size_10_var_008(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint3 uVar5;
  uint5 uVar6;
  ushort uVar7;
  char cVar8;
  byte bVar9;
  ushort uVar10;
  short sVar11;
  uint uVar12;
  undefined2 uVar13;
  byte bVar14;
  sbyte sVar15;
  byte bVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  uint uVar20;
  char cVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  char cVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint3 uVar35;
  uint uVar34;
  ushort uVar36;
  ushort uVar37;
  int iVar38;
  uint uVar39;
  uint uVar40;
  short sVar41;
  ushort uVar42;
  uint uVar43;
  uint uVar44;
  int iVar45;
  uint uVar46;
  bool bVar47;
  bool in_PF;
  bool bVar48;
  
  uVar39 = 0xffffb4f9;
  if (!in_PF) {
    uVar39 = 0xc4df0000;
  }
  uVar20 = uVar39 - 0xe03f;
  uVar43 = uVar39;
  if (!in_PF) {
    uVar43 = CONCAT22(0xc4df,(ushort)(0xe03e < uVar39)) | 0x8000000;
  }
  lVar4 = (longlong)(int)((uint)(byte)((0xe03e < uVar39) + 0x82) | 0xccdf0000) *
          (longlong)(int)uVar43;
  bVar9 = (byte)((uint)(ushort)((ushort)in_PF * 0x100) >> 8);
  uVar32 = (uint)(ushort)((ulonglong)lVar4 >> 0x10) << 0x10;
  bVar26 = (byte)uVar20;
  bVar14 = (char)bVar26 >> (bVar26 & 0x1f);
  uVar31 = uVar32 | (byte)((bVar9 << 3 | bVar9 >> 6) << (bVar26 & 0x1f));
  uVar43 = uVar43 & 0xffff0000 | (uint)(ushort)((ushort)uVar43 >> (bVar14 & 0x1f) | 1);
  uVar10 = (ushort)((ulonglong)lVar4 >> 0x30);
  uVar39 = uVar31 + 0x133c284b;
  uVar43 = (uint)(CONCAT14(0xecc3d7b4 < uVar31,uVar43) >> (bVar14 & 0x1f)) |
           uVar43 << 0x21 - (bVar14 & 0x1f);
  sVar11 = (short)uVar39;
  if (SCARRY2(sVar11,sVar11) != (short)(sVar11 * 2) < 0) {
    uVar32 = 0xe4310001;
  }
  uVar17 = ((ushort)uVar20 & 0xff00 | (ushort)(byte)(bVar14 - 0x3c)) - (short)uVar43;
  uVar34 = uVar20 & 0xfffd0000 | (uint)uVar17;
  uVar43 = uVar43 + uVar32;
  bVar26 = (byte)uVar17 & 0x1f;
  uVar30 = 0xdf160000U >> bVar26 | -0x20ea0000 << 0x20 - bVar26;
  uVar12 = uVar43 & 0xffff0000 | (uint)(ushort)((short)uVar43 + 0x2d1a);
  uVar43 = (uint)((uVar30 & 0x100) != 0);
  uVar31 = uVar12 + uVar34;
  uVar44 = uVar31 + uVar43;
  cVar21 = (char)((uint)uVar17 >> 8);
  bVar26 = (byte)(uVar17 & 0xff) & 0xf;
  uVar17 = (uVar17 & 0xff |
           (ushort)(byte)(cVar21 << 7 |
                         (byte)(CONCAT11(CARRY4(uVar12,uVar34) || CARRY4(uVar31,uVar43),cVar21) >> 2
                               )) << 8) >> 1;
  uVar36 = (short)uVar32 * 0x6fb1;
  bVar14 = (byte)((uint)uVar17 >> 8);
  uVar18 = uVar17 & 0xa0 | (ushort)(byte)(bVar14 << 6 | bVar14 >> 2) << 8;
  uVar42 = (ushort)uVar44;
  uVar44 = uVar44 & 0xffff0000;
  uVar22 = ((ushort)(byte)((uVar18 != 0) << 7) << 8 | 0x4e) & uVar36;
  uVar43 = ((uint)(ushort)(1 << bVar26 | 1U >> 0x10 - bVar26) | 0xe4310000) + 0x42e53a66;
  uVar17 = (uVar42 ^ uVar42 & 1) << 1;
  uVar31 = uVar44 | (uVar17 | 1);
  uVar20 = (uVar20 & 0xfffd0000 | (uint)(ushort)(uVar18 << 1)) ^ 0xb7c20033;
  uVar39 = uVar39 & 0xffff0000 | (uint)(ushort)(-uVar42 - uVar18) & 0xffffff00 |
           (uint)(byte)(-uVar42 - uVar18);
  if ((byte)((byte)((((uVar30 & 0xffff0000) >> 1 | 0x80000000) >> 0x18) << 1) |
            (byte)(((uint)uVar10 << 0x10) >> 0x1f)) == 0) {
    uVar39 = uVar31;
  }
  uVar32 = (uVar32 & 0xffff0000 | (uint)uVar36) ^ 0x8fe5;
  bVar26 = (byte)uVar20 & 0xf;
  uVar18 = (ushort)uVar20 << bVar26 | (ushort)uVar20 >> 0x10 - bVar26;
  uVar36 = (ushort)((int)uVar39 >> ((byte)uVar20 & 0x1f)) >> ((byte)uVar18 & 0x1f);
  uVar39 = uVar32 + uVar43;
  if (!CARRY4(uVar32,uVar43) && uVar39 != 0) {
    uVar18 = uVar22;
  }
  uVar34 = (uint)(ushort)(uVar18 << 1 | 1) & 0xffffff0f;
  uVar18 = (ushort)uVar43 & ~(1 << (uVar17 & 0xf | 1));
  uVar31 = (uVar43 & 0xffff0000 | (uint)uVar18) & uVar31;
  uVar32 = CONCAT22(uVar10,uVar22 << (sbyte)uVar34 | (ushort)uVar34 >> 0x10 - (sbyte)uVar34) +
           0x37e6edd5;
  uVar30 = (uVar39 & 0xffff0000 | (uint)(ushort)((short)uVar39 - uVar18)) ^ 0xf66f6145;
  uVar39 = (uVar20 & 0xffff0000 | uVar34) - uVar30;
  bVar47 = (uVar32 & 1) != 0;
  uVar32 = uVar32 >> 1;
  uVar20 = uVar39 & 0xffff00ff;
  if (bVar47) {
    uVar20 = uVar39 & 0xffff0000 | uVar32 & 0xffff;
  }
  uVar10 = (short)uVar31 + 0xa8b1;
  uVar39 = (uint)(ushort)((uVar17 | 1) + 0xe547);
  uVar30 = uVar30 & 0x852e2066;
  uVar34 = (uVar32 & 0xff00) << 8 | uVar32 << 0x18;
  if (uVar30 != 0) {
    uVar34 = uVar44 | uVar39;
  }
  uVar44 = (CONCAT22((short)uVar36 >> 0xf,
                     (ushort)(((int)(short)uVar36 & 0xffffU) >> 2) & 0xff |
                     (ushort)(byte)(((int)uVar30 < 0) << 7 | (uVar30 == 0) << 6 |
                                   (((uVar17 & 0xfff | 1) - 0xab9 & 0x1000) != 0) << 4) << 8) |
           0x200) * 0x422e39f6;
  uVar17 = (ushort)(uVar44 >> 10);
  uVar36 = uVar17 << 5 | uVar17 >> 0xb;
  bVar48 = (uVar44 & 0x400) != 0;
  uVar32 = (uint)CONCAT11(((uVar32 & 0x40000000) != 0) != bVar47,(char)uVar20) & 0xff00 |
           (uint)(byte)((char)uVar20 * '\x02');
  uVar18 = (ushort)(uVar32 >> 4) | (ushort)(uVar32 << 0xd);
  uVar32 = (uVar31 & 0xffff0000 | (uint)uVar10) ^ (uVar31 >> 0x10 & 1) << 0x10;
  uVar17 = uVar18 + uVar36;
  uVar22 = uVar17 + 1;
  uVar20 = uVar20 & 0xffff0000 | (uint)uVar22;
  if (uVar22 != 0 && (SCARRY2(uVar18,uVar36) != SCARRY2(uVar17,1)) == (short)uVar22 < 0) {
    uVar20 = uVar32;
  }
  uVar22 = (ushort)(uVar43 >> 0x11);
  uVar31 = (uint)(ushort)(0x2dc1 - (short)uVar44);
  bVar26 = (byte)uVar10 & 0xdf;
  uVar32 = uVar32 & 0xffff0000;
  uVar5 = (uint3)(uVar20 >> 8);
  uVar35 = uVar5 & 0xffff00;
  bVar47 = (byte)(uVar36 >> 1) < 0x57;
  uVar40 = CONCAT31(uVar35 | uVar5 >> 5 & 7,bVar47);
  uVar12 = uVar31 + 0x35104c78;
  uVar20 = (int)(short)uVar12 *
           (int)(short)(uVar10 & 0xff00 | (ushort)(byte)(bVar26 << bVar47 | bVar26 >> 8 - bVar47));
  uVar30 = uVar20 & 0xffff;
  bVar26 = (byte)(uVar32 >> 0x10);
  uVar32 = uVar30 << 0x10 |
           (uint)(ushort)(((ushort)(uVar32 >> 0x10) & 0xff00 |
                          (ushort)(byte)(bVar26 >> 1 | bVar26 << 7)) + 0x2bb2);
  uVar33 = uVar32 + 0xc5e6eba4;
  if (0x3a19145b < uVar32 && uVar33 != 0) {
    uVar40 = uVar40 & 0xffff | (uint)(ushort)(uVar35 >> 8) << 0x10;
  }
  uVar42 = (ushort)(uVar20 >> 0x10) & 0xff;
  uVar23 = uVar42 | (ushort)((int)uVar32 < 0x3a19145c) << 8;
  uVar24 = uVar23 - 1;
  uVar32 = uVar34 & 0xffff0000 | (uint)uVar24;
  bVar26 = (byte)((uVar12 & 0xffff0000 | uVar30) << bVar47);
  uVar20 = (uVar44 & 0xffff0000 | uVar31) << 1;
  uVar19 = (ushort)uVar20;
  uVar7 = (ushort)(uVar34 >> 0x1f);
  uVar37 = uVar19 | uVar7;
  uVar18 = (ushort)(CONCAT22(uVar22,((short)(uVar43 >> 1) + -0x633f) -
                                    (ushort)(CARRY2(uVar18,uVar36) || 0xfffe < uVar17)) >> 8);
  uVar10 = (ushort)(bVar26 < uVar18);
  uVar17 = uVar37 + 0x12a3;
  uVar10 = CONCAT11(((short)(uVar17 - uVar10) < 0) << 7 | (uVar17 == uVar10) << 6 |
                    ((((uVar19 & 0xfff | uVar7) - 0xd5d) - uVar10 & 0x1000) != 0) << 4 | bVar48 << 2
                    | 2U | (uVar37 < 0xed5d || uVar17 < uVar10),bVar26) << ((byte)uVar24 & 0x1f);
  cVar21 = (char)uVar40 + ((char)(uVar40 >> 8) - (char)uVar42) + -1;
  cVar8 = (byte)uVar10 - 0x19;
  if ((byte)uVar10 < 0x19 || cVar8 == '\0') {
    cVar21 = (char)uVar33;
  }
  bVar26 = (byte)((uint)(uVar10 & 0xff00) >> 8) >> 1;
  uVar43 = (uint)(CONCAT14((uVar10 & 0x100) != 0,uVar32) >> 0x1d);
  bVar14 = (byte)uVar43;
  uVar36 = ~(0 << bVar14 | (CONCAT11(bVar26,cVar8) | 0x8000) >> 0x10 - bVar14);
  uVar43 = ((uVar32 & 0xffffff0) << 4 | uVar43) >> bVar14;
  iVar38 = -(uVar20 & 0xffff0000 ^ 0xc402f809);
  iVar45 = (uVar39 << 0x17 | (uint)(ushort)(uVar36 * -0x1a12)) + 0x284b6f45;
  uVar17 = (ushort)uVar43;
  uVar10 = uVar17 >> 0xe;
  uVar39 = iVar45 + (uVar43 | 0x8000000) * 4;
  bVar47 = (uVar10 & 1) != 0;
  uVar43 = (((uint)uVar22 & 0xff00) << 0x10) >> 8 | (uint)uVar23 << 0x18 |
           (uint)(ushort)(((uVar18 >> 1) + uVar36 * 0x1a12) - 1);
  if (bVar47) {
    uVar43 = uVar39;
  }
  uVar31 = iVar45 * 2 | 1;
  uVar18 = (ushort)uVar39 + 0xe9f1 >> 1;
  uVar22 = (CONCAT11(0xe8U >> (bVar14 & 7) | -0x18 << 8 - (bVar14 & 7),cVar21) << 2 | uVar10) >> 1 &
           0x3fff;
  uVar10 = (ushort)(bVar26 | 0xc0);
  cVar25 = (char)((uint)(ushort)(uVar18 | (ushort)(0x160e < (ushort)uVar39) << 0xf) >> 8);
  uVar36 = uVar18 & 0xff | (ushort)(byte)(cVar25 + 0x51) << 8;
  uVar32 = uVar40 & 0xffff0000 | (uint)uVar36;
  bVar14 = (byte)(uVar17 >> 7);
  cVar21 = (char)((short)(uVar22 / uVar10 & 0xff | uVar22 % uVar10 << 8) >> 1);
  uVar20 = uVar39 & 0xffff0000 | (uint)(ushort)((short)cVar21 * (short)cVar21 * 0x400);
  uVar39 = (uVar43 & 0xffff0000 |
           (uint)(ushort)((short)uVar43 +
                          ((((short)iVar38 << 1 | 1U) + 0x97a5) - (ushort)bVar47 >> 1 | 4) &
                         ~(1 << (uVar18 & 0xf)))) - uVar32;
  uVar10 = ~(ushort)uVar39;
  uVar43 = ((uVar31 << 1 | (uint)((int)uVar31 < 0)) - 1) * 2 | 1;
  uVar36 = uVar36 & ~(1 << ((ushort)uVar43 & 0xf));
  uVar43 = uVar43 << (bVar14 & 0x1f) | uVar43 >> 0x20 - (bVar14 & 0x1f);
  cVar8 = (char)(uVar20 * 2 >> 8);
  cVar21 = cVar8 + -0x4b;
  bVar26 = 0;
  if ((SCARRY1(cVar8,-0x4b) != SCARRY1(cVar21,'\0')) != cVar21 < '\0') {
    bVar26 = bVar14;
  }
  uVar31 = uVar20 * 2 & 0xffff0000 | (uint)CONCAT11(0xff,bVar26);
  if ((char)(bVar14 ^ 0x7c) < '\0') {
    uVar31 = uVar40 & 0xffff0000 | (uint)uVar36;
  }
  uVar44 = (uVar39 & 0xffff0000 | uVar31 & 0xffff) - 1;
  uVar35 = (uint3)((uVar33 & 0xffff0000 | (uint)((short)cVar25 & 0xffU | 0xd800)) + uVar32 +
                   (uint)CARRY4(uVar20,uVar20) >> 8) & 0xa3ca7c &
           ((uint3)((uVar31 & 0xffff0000) >> 8) | (uint3)(byte)(uVar10 >> 8));
  bVar26 = (byte)((uint)uVar36 >> 8);
  cVar21 = (char)((uint)uVar10 >> 8);
  uVar10 = (ushort)(byte)(bVar26 >> 3 | bVar26 << 5) << 8;
  uVar39 = (uint)(ushort)((ushort)((uint)iVar38 >> 0x10) | 0x4000) * 0x10000 + uVar43;
  sVar11 = (short)(uVar35 >> 8);
  if (!SCARRY1(-(char)uVar44,(char)uVar35)) {
    uVar43 = uVar43 & 0xffff0000 | (uint)CONCAT11(cVar21 >> 0xb,(byte)(cVar21 >> 3) >> 1);
  }
  sVar41 = -(ushort)((uVar10 & 0x100) != 0);
  uVar17 = (ushort)uVar39;
  uVar10 = uVar36 & 0xff | uVar10;
  if (sVar41 == 0) {
    uVar10 = uVar17;
  }
  uVar17 = uVar17 >> 1;
  bVar26 = (byte)sVar41 & 0xf;
  uVar20 = uVar44 & 0xffff0000 |
           (uint)(ushort)((ushort)uVar44 >> bVar26 |
                         (short)(CONCAT22(sVar11,CONCAT11(-(char)uVar44,bVar48)) >> 1) <<
                         0x10 - bVar26);
  iVar38 = (int)(short)uVar10 * (int)(short)uVar43;
  uVar10 = (ushort)iVar38;
  bVar26 = (byte)((uint)iVar38 >> 8) >> 3;
  bVar47 = (bool)(bVar26 & 1);
  uVar18 = (uVar17 | (ushort)bVar48 << 0xf) >> 1 | (ushort)((uVar17 & 1) != 0) << 0xf;
  if (!bVar47) {
    uVar18 = uVar10 >> 3 & 0xff |
             (ushort)(byte)(((byte)((uVar10 << 0xd) >> 8) | bVar26) >> 1 | bVar47 << 7) << 8;
  }
  uVar32 = uVar39 & 0xffff0000 | (uint)uVar18;
  bVar26 = (byte)(uVar10 + 0x1a81);
  uVar39 = (uVar31 & 0xffff0000 | (uint)(ushort)(uVar10 + 0x1a81) & 0xffffff00 |
           (uint)(byte)(bVar26 << 3 | bVar26 >> 5)) + 0x9966003c;
  uVar43 = (uVar43 << 10 & 0xffff0000 |
           (uint)(ushort)(((ushort)(uint)(CONCAT14(((ushort)((uint)iVar38 >> 0x10) >> (uVar10 & 0xf)
                                                   & 1) != 0,uVar43) >> 0x17) |
                          (ushort)(uVar43 << 10)) ^ 1 << ((uVar17 & 0x1e) >> 1))) + uVar39 ^ uVar20;
  lVar4 = (ulonglong)uVar39 * (ulonglong)uVar32;
  uVar17 = (short)lVar4 >> 0xf;
  bVar14 = (byte)((ulonglong)lVar4 >> 8);
  bVar26 = (char)bVar14 >> 7 & 7;
  sVar41 = (short)uVar43;
  uVar10 = (short)(char)~bVar14;
  if (-1 < (short)(sVar41 + 0x1fb5U)) {
    uVar10 = sVar41 + 0x1fb5U;
  }
  if (-0x1fb6 < sVar41) {
    uVar10 = uVar17;
  }
  uVar20 = (((uint)(ushort)(sVar11 >> 1) << 0x10) >> 2 & 0xffff0000 | (uint)uVar10) ^
           CONCAT22((short)((int)(uVar44 & 0xffff0000) >> 0x11),~(ushort)((int)uVar20 >> 1));
  cVar21 = (char)(-0x31 << bVar26 | 0xcfU >> 8 - bVar26) >> 1;
  bVar26 = (byte)uVar20;
  uVar32 = uVar32 >> (bVar26 & 0x1f);
  sVar11 = (short)uVar32;
  bVar14 = bVar26 ^ (byte)(1 << (uVar17 & 0xf)) | (byte)(sVar41 + 0xdec4U);
  uVar30 = (uVar43 & 0xffff0000 | (uint)(ushort)(sVar41 + 0xdec4U)) ^ 0xe9d56a45;
  uVar43 = CONCAT22((short)((ulonglong)lVar4 >> 0x10),(ushort)(byte)lVar4) * 2 & 0xffff0000U |
           (uint)(ushort)(((ushort)(cVar21 == '\0') | 0xbe00) << 4 | (ushort)uVar30 >> 0xc);
  uVar31 = ~((uint)(byte)(cVar21 - 1) | 0x977d3500);
  uVar44 = (CONCAT22((short)((ulonglong)lVar4 >> 0x30),uVar17) | 0xbef2d5c) >> (bVar14 & 0x1f);
  bVar47 = CARRY4(uVar31,uVar43);
  bVar26 = -bVar47;
  uVar39 = uVar44 >> 0x16 & 1;
  uVar34 = (uVar44 & 0xffffff00 | (uint)bVar26) ^ uVar39 << 0x16;
  if (uVar39 == 0) {
    uVar34 = uVar34 & 0xffff0000 | uVar43 << (bVar14 & 0x1f) & 0xffff;
  }
  bVar27 = -(char)uVar34;
  bVar14 = (byte)(uVar34 >> 8);
  uVar39 = (uint)(ushort)(sVar11 << 3) & 0xffffff0f;
  sVar15 = (sbyte)uVar39;
  uVar10 = (ushort)uVar39;
  uVar17 = uVar10 << sVar15 | uVar10 >> 0x10 - sVar15;
  bVar14 = bVar14 ^ ((byte)((sVar11 + 0x5565U & 0xff |
                            (ushort)(bVar26 == 0 ||
                                    (SBORROW1((char)uVar44,(char)uVar44) != false) !=
                                    (bVar47 != false)) << 8) >> 4) == bVar14) *
                    (bVar14 ^ (byte)((uint)uVar17 >> 8));
  uVar44 = (uint)CONCAT11(bVar14,bVar27);
  uVar10 = (ushort)(uVar30 >> 0xb) & 0xf;
  uVar12 = uVar32 & 0xffff0000 | (uint)(ushort)(sVar11 - 1U | 1 << uVar10);
  bVar47 = (sVar11 - 1U >> uVar10 & 1) != 0;
  bVar28 = (byte)(uVar44 >> 8);
  bVar9 = -bVar28 - bVar47;
  bVar14 = -(bVar28 + (bVar14 != 0 || (byte)-bVar28 < bVar47));
  bVar16 = bVar14 ^ (bVar9 == bVar14) * (bVar14 ^ bVar27);
  uVar39 = (uVar20 & 0xffff0000 | (uint)(ushort)(uVar17 << 0xe) | (uint)bVar16) << 0xb;
  uVar20 = uVar31 + uVar43 & 0xffff0000 | (uint)bVar28 << 8;
  uVar39 = uVar39 & 0xffff0000 |
           (uint)CONCAT11((uVar39 | uVar34 >> 0x15) != uVar20,(char)(uVar34 >> 0x15));
  uVar43 = uVar39 + 1;
  bVar26 = (byte)uVar43;
  uVar32 = uVar34 & 0xffff0000 | uVar44 & 0xffffff00 | (uint)(bVar27 >> (bVar26 & 0x1f));
  uVar32 = uVar32 >> (bVar26 & 0x1f) | uVar32 << 0x20 - (bVar26 & 0x1f);
  bVar27 = (byte)((uint)CONCAT11((SCARRY4(uVar39,1) != (int)uVar43 < 0) + -1,bVar26) >> 8);
  uVar31 = uVar43 & 0xffff0000 | (uint)CONCAT11(bVar27 >> 5 | bVar27 << 3,bVar26) | 0x7df37cb3;
  bVar27 = (byte)uVar31;
  bVar26 = (bVar27 & 0x1f) % 0x11;
  uVar39 = uVar32 & 0xffff;
  uVar17 = (ushort)(uVar39 >> bVar26) | (ushort)(uVar39 << 0x11 - bVar26);
  uVar32 = uVar32 & 0xffff0000;
  lVar4 = (longlong)(int)((uVar30 << 0x15 | uVar30 >> 0xb) >> 0x11 | uVar20 << 0xf) * -0x27877710;
  iVar38 = (int)((ulonglong)lVar4 >> 0x20);
  bVar26 = bVar27 >> 1;
  uVar20 = (int)((uint)(byte)(bVar9 ^ (bVar9 == bVar14) * (bVar9 & bVar16)) << 0x1d) >>
           (bVar26 & 0x1f);
  uVar43 = (uint)CONCAT11(((char)(uVar20 >> 8) >> 1) + -0x18,(char)uVar20);
  uVar34 = (uint)lVar4 & uVar12;
  uVar18 = CONCAT11(((byte)(uVar31 >> 8) >> 1 | (iVar38 != 0 && iVar38 != -1) << 7) >>
                    (bVar26 & 0x1f),bVar26 | bVar27 << 7) << 1 | uVar17 >> 0xf;
  uVar39 = uVar34 & 0xffff0000 | (uint)uVar18;
  bVar26 = (byte)(uVar34 & 0xffff) & 0x1f;
  uVar46 = (uVar20 & 0xffff0000 | uVar43) >> bVar26 | uVar39 << 0x20 - bVar26;
  uVar31 = (uVar31 & 0xffff0000 | uVar34 & 0xffff) ^ 1 << (uVar34 & 0x1f);
  uVar10 = (short)(char)((char)uVar20 << 1) * (short)(char)(uVar43 >> 8);
  bVar26 = (byte)uVar31 & 0x1f;
  uVar44 = (uVar12 >> 1 | (uint)uVar17 << 0x1f) & uVar46;
  uVar43 = uVar32 | (uint)(ushort)(uVar10 * -0x5c80);
  uVar39 = (uVar20 & 0xffff0000 | (uint)uVar10) - uVar39;
  bVar47 = (uVar39 ^ (uVar39 >> 0x14 & 1) << 0x14) == uVar44;
  uVar40 = uVar44 ^ (uint)bVar47 * (uVar44 ^ uVar43);
  uVar17 = (ushort)uVar39 ^ (ushort)bVar47 * ((ushort)uVar39 & (ushort)uVar40);
  iVar38 = (uint)CONCAT12(bVar28,(short)uVar10 >> 0xf) * 2;
  uVar12 = (uVar34 & 0xffff0000 | (uint)(ushort)(uVar18 << 1 | (ushort)uVar44 >> 0xf)) - 1;
  uVar39 = iVar38 + 0x6afcc66a;
  uVar30 = ((uVar31 >> bVar26 | uVar31 << 0x20 - bVar26) & 0xffffde49) +
           (uVar43 | (uVar39 != 0 &&
                     (SCARRY4(iVar38,0x6afcc66a) != SCARRY4(uVar39,0)) == (int)uVar39 < 0));
  uVar17 = (ushort)((uint)((int)(short)uVar17 * (int)(short)uVar17) >> 0x10);
  uVar31 = (uint)(CONCAT14(uVar17 != 0 && uVar17 != 0xffff,uVar40) >> 0x1f);
  uVar34 = uVar12 * 0x7c2a7066;
  uVar18 = uVar17 & 0xff | (ushort)(byte)((char)((uint)uVar17 >> 8) - 0x28) << 8;
  uVar36 = (ushort)uVar12 ^ uVar18;
  uVar42 = (ushort)uVar46;
  uVar20 = (uint)CONCAT11((char)(uVar34 >> 8) >> ((byte)uVar30 & 0x1f),(char)uVar34);
  uVar22 = (ushort)((uVar40 << 2) >> 0x11) | (ushort)(((uint)((uVar31 & 1) != 0) << 0x1f) >> 0x10);
  uVar43 = uVar20 | 0xc000;
  uVar20 = ((uint)uVar18 & 0x3f00 |
           (uint)(byte)((char)(uVar17 & 0xff) << 1 | (uVar42 >> (uVar42 & 0xf) & 1) != 0)) << 0x10 |
           uVar20 | 0xc000;
  bVar26 = (byte)(uVar20 / uVar43);
  uVar20 = uVar20 % uVar43;
  uVar17 = (ushort)(byte)((byte)uVar20 ^ bVar26);
  uVar18 = (short)uVar30 >> 0x10;
  uVar44 = uVar30 & 0xffff0000;
  uVar33 = (uVar12 & 0xffff0000 | (uint)(ushort)((uVar36 | 0x10) << 1 | uVar36 >> 0xf)) &
           (uVar44 | (uint)uVar18);
  uVar42 = (uVar42 | 1 << (uVar42 & 0xf)) ^ uVar18;
  uVar43 = (uint)CONCAT11((char)((uint)(ushort)(uVar10 * -0x5c80) >> 8) + '4','h' - (uVar36 == 0));
  uVar34 = (uVar34 & 0xffff0000 | (uint)(ushort)(short)(char)(bVar26 + 0x72 >> 1 | bVar26 << 7)) &
           ~(1 << (uVar43 & 0x1f));
  uVar12 = uVar32 | uVar43 & 0xffffff00 | uVar34 & 0xff;
  bVar26 = (byte)((uint)uVar18 >> 8) & (byte)(uVar34 & 0xff);
  uVar10 = CONCAT11(bVar26,(char)(uVar30 >> 8) >> 8);
  uVar20 = (uint)(ushort)((((ushort)uVar20 & 0xff00 | uVar17) ^ uVar42) >> 2 & 0xff |
                         (ushort)(bVar26 == 0) << 8);
  uVar43 = CONCAT22(uVar22,((ushort)((uVar31 | uVar40 << 2) >> 1) & ~(1 << (uVar17 & 0xf))) + 0x20f3
                   ) >> 1;
  bVar47 = CARRY2((ushort)uVar43,uVar10);
  uVar10 = (ushort)uVar43 + uVar10;
  uVar31 = (uint)uVar10;
  if (bVar47) {
    uVar31 = uVar34 & 0xffff;
  }
  uVar31 = (((uint)uVar22 & 0xfffe) << 0x10) >> 1 | uVar20 << 0x1f | uVar31;
  uVar39 = (uVar39 & 0xfffc0000) >> 2 | uVar20;
  if (uVar10 == 0) {
    uVar39 = uVar12;
  }
  uVar20 = uVar33 << 5 | uVar33 >> 0x1b;
  if (!bVar47) {
    uVar20 = uVar44 | uVar43 & 0xffff;
  }
  uVar30 = uVar31 + uVar12;
  uVar1 = (ulonglong)(uVar30 | 0xc0000000);
  uVar2 = CONCAT44(uVar39 - 1,
                   CONCAT31(CONCAT21((short)(uVar34 >> 0x10),!bVar47),
                            SCARRY4(uVar31,uVar12) != SCARRY4(uVar30,0))) & 0x3fffffffffffffff;
  uVar3 = uVar2 / uVar1;
  uVar2 = uVar2 % uVar1;
  sVar15 = (sbyte)(uVar43 & 0xff0f);
  uVar10 = (ushort)(uVar43 & 0xff0f);
  uVar17 = uVar10 << sVar15 | uVar10 >> 0x10 - sVar15;
  bVar26 = (byte)uVar17 & 0xf;
  uVar10 = (ushort)uVar3;
  uVar13 = (undefined2)(uVar3 >> 0x10);
  sVar11 = (uVar10 >> bVar26 | uVar10 << 0x10 - bVar26) + 0x6a0;
  uVar39 = CONCAT22(uVar13,sVar11) & 0xffffff00;
  uVar6 = CONCAT14((uVar17 & 1) != 0,((uVar46 & 0xffff0000 | (uint)uVar42) ^ 0x945ad662) << 6) >>
          0x11;
  uVar10 = (ushort)uVar6;
  uVar43 = uVar39 | (byte)((char)sVar11 + 0x89) | 0xde;
  uVar18 = (ushort)CONCAT31((int3)(uVar2 >> 8),~(byte)uVar2) ^ (ushort)uVar43;
  uVar18 = uVar18 & ~(1 << (uVar18 & 0xf));
  cVar8 = (char)uVar18;
  bVar26 = (byte)((int)(uVar44 | (ushort)(uVar17 & 0xff |
                                         (ushort)(byte)((char)((uint)uVar17 >> 8) + 0x6c) << 8)) >>
                 1);
  cVar21 = (char)(uVar39 >> 8);
  uVar39 = CONCAT22((short)(uVar2 >> 0x10),uVar18) & 0xffffff00 |
           (uint)(byte)(cVar8 << 1 | cVar8 < '\0');
  if (cVar21 != '\0' || -cVar21 == '\0') {
    uVar39 = uVar12;
  }
  if ('\0' < cVar21) {
    uVar39 = CONCAT22(uVar13,CONCAT11(-cVar21,(char)uVar43));
  }
  uVar44 = uVar20 - 1 << (bVar26 << (bVar26 & 0x1f) & 0x1f);
  uVar39 = (int)uVar39 >> ((byte)uVar6 & 0x1f);
  sVar11 = (uVar10 & 0xff |
           (ushort)(byte)(((char)((uint)(int)(short)uVar10 >> 8) - (char)(uVar39 >> 8)) - 1) << 8) +
           1;
  bVar26 = (byte)sVar11 & 7;
  bVar14 = '\0' << bVar26 | 0U >> 8 - bVar26;
  bVar26 = (byte)(CONCAT22((short)uVar10 >> 0xf,sVar11) >> 7) & 0xf;
  uVar31 = -(uint)(ushort)((ushort)bVar14 << bVar26 | (ushort)(bVar14 >> 0x10 - bVar26));
  uVar39 = (uVar39 & 0xffff0000 |
           (uint)(ushort)((short)((ushort)uVar39 & 0xff00 | (ushort)(byte)((char)uVar39 >> 8)) >>
                         0x12)) ^ 0x5845ad3e;
  uVar17 = -(short)uVar12;
  if (uVar39 == 0) {
    uVar17 = (uVar10 >> 0xd | uVar10 << 3) >> 1 | (ushort)((uVar10 >> 0xd & 1) != 0) << 0xf;
  }
  lVar4 = (longlong)(int)((uVar32 | uVar17) + uVar44) * 0x729269b9;
  iVar38 = (int)((ulonglong)lVar4 >> 0x20);
  uVar32 = (uint)(iVar38 != 0 && iVar38 != -1) << 0x10 | uVar31 & 0xffff;
  cVar8 = (char)((ulonglong)lVar4 >> 8);
  uVar17 = (ushort)((ulonglong)lVar4 >> 0x10);
  bVar14 = (byte)lVar4;
  uVar10 = CONCAT11(cVar8 + -0x3a,bVar14);
  uVar34 = (uint)uVar10 & 0xff00;
  bVar26 = (byte)(uVar34 >> 8) & 7;
  uVar35 = SEXT13((char)((byte)((uVar32 << 0xd) >> 8) | (byte)((uVar32 >> 4) >> 8)));
  uVar32 = CONCAT31(uVar35,bVar14 >> bVar26 | bVar14 << 8 - bVar26);
  cVar21 = (char)((uVar31 & 0xff0) >> 4);
  uVar44 = uVar44 ^ uVar32;
  bVar14 = cVar21 << 1;
  uVar18 = (ushort)uVar44 >> (bVar14 & 0xf) | (ushort)uVar44 << 0x10 - (bVar14 & 0xf);
  uVar10 = ((short)uVar20 + 0xc474U & ~(ushort)(1 << (uVar43 & 0x1f))) - uVar10 & uVar18;
  bVar26 = (char)uVar39 * '\x02';
  if ((uVar10 >> 0xe & 1) != 0 ||
      (char)((uint)(ushort)((short)uVar32 << (bVar14 & 0x1f)) >> 8) == -0xf) {
    bVar26 = bVar14;
  }
  uVar39 = ((uint)uVar35 << 8) >> 0x15;
  uVar20 = uVar39 | (uVar44 & 0xffff0000 | (uint)uVar18) << 0xb;
  bVar9 = (bVar14 & 0x1f) % 9;
  bVar26 = (byte)(CONCAT11(((uint)uVar17 << 0x10 & 0x40000) != 0,bVar26) >> bVar9) |
           bVar26 << 9 - bVar9;
  uVar10 = uVar10 + (short)uVar20 + 1 >> 1;
  uVar43 = (uint)CONCAT11((char)((uint)(ushort)((short)(uVar34 >> 8) << 1) >> 8) << 1,bVar14) |
           0x102;
  uVar32 = (uint)uVar17 << 0x10 | (uint)(ushort)(CONCAT11(cVar8 + '?',cVar21) << 1 | 1) & 0xffffff00
           | (uint)(0x71 < bVar26);
  if ((char)(bVar26 + 0x8e) < '\0') {
    uVar43 = uVar39 | ((uint)uVar18 & 0x1f) << 0xb;
  }
  uVar39 = uVar20;
  if (SBORROW1(bVar26,'r')) {
    uVar39 = uVar32;
  }
  lVar4 = (longlong)
          (int)(uVar39 & 0xffff0000 | (uint)CONCAT11((char)(uVar39 >> 8) + '\x01',(char)uVar39)) *
          (longlong)(int)uVar43;
  iVar38 = (int)lVar4;
  uVar34 = iVar38 << 1;
  uVar31 = CONCAT22(uVar17,(ushort)uVar32 & ~(1 << (uVar10 & 0xf))) >> 1;
  bVar26 = (byte)uVar43;
  uVar39 = (uint)(uVar10 | 0xc000);
  uVar32 = (uint)(CONCAT11((char)((ulonglong)lVar4 >> 0x28) << (bVar26 & 0x1f),
                           (char)((ulonglong)lVar4 >> 0x20)) & 0x3fff) << 0x10 |
           uVar34 & 0xffff | (uint)(iVar38 < 0);
  uVar30 = uVar32 / uVar39 & 0xffff;
  uVar32 = uVar32 % uVar39;
  uVar10 = CONCAT11((byte)(uVar43 >> 8) >> (bVar26 & 0x1f),bVar26) +
           (short)(char)((byte)uVar34 | iVar38 < 0);
  cVar21 = (char)(uVar30 >> 8);
  uVar39 = (uVar34 & 0xffff0000 | (uint)CONCAT11(cVar21 + (char)(uVar32 >> 8),(char)uVar30)) >> 1;
  uVar43 = (uint)uVar10 << 0x1f;
  uVar18 = CONCAT11(cVar21,(char)uVar32) | uVar10;
  uVar32 = CONCAT22(uVar17 >> 1,
                    CONCAT11((char)(uVar31 >> 8) * '\x02',(char)uVar31) >> 1 | uVar10 * -0x8000) |
           0x80000000;
  if (-1 < (short)uVar18) {
    uVar32 = uVar39 | uVar43;
  }
  uVar31 = (uVar44 & 0xffff0000 | (uint)(ushort)((short)(char)(uVar20 >> 8) << 1)) << 0xc |
           uVar44 >> 0x15 | 1 << ((uint)uVar18 & 0x1f);
  uVar20 = (uint)uVar10 & 0xffffff00;
  bVar26 = (byte)(uVar10 >> 1);
  bVar9 = bVar26 & 0x7f;
  uVar39 = (((uVar34 & 0xfffe0000) >> 1 | uVar43 |
            (uint)(ushort)((ushort)(byte)uVar39 * (ushort)(byte)uVar32)) >> 1) + 0x83065a17;
  bVar26 = bVar26 & 7;
  uVar32 = CONCAT31((int3)(((uVar32 & 0xffff0000 |
                            (uint)CONCAT11((char)(uVar32 >> 8) - (char)(uVar20 >> 8),(byte)uVar32))
                           << 1) >> 8),0x95);
  uVar17 = -(short)uVar31;
  sVar11 = (short)(uVar39 >> 0x10);
  iVar38 = (uVar39 & 0xffff) * (uint)(ushort)((sVar11 >> 0xf) + 0xebbc);
  bVar14 = (byte)iVar38;
  uVar1 = CONCAT44(CONCAT22(sVar11 >> 0x1f,(short)((uint)iVar38 >> 0x10)),
                   uVar39 & 0xffff0000 | (uint)(ushort)((ushort)bVar14 * (ushort)bVar14)) &
          0x3fffffffffffffff;
  uVar2 = uVar1 % (ulonglong)(uVar32 | 0xc0000000);
  uVar31 = (uVar31 & 0xffff0000 | (uint)uVar17) >> 1 | uVar32 << 0x1f;
  iVar38 = (uVar20 | (byte)(bVar9 << bVar26 | bVar9 >> 8 - bVar26)) + 0xdd862aa6;
  bVar26 = (byte)iVar38;
  uVar43 = CONCAT22((short)(uVar2 >> 0x10),CONCAT11((char)(uVar2 >> 8) >> 0x13,(char)uVar2));
  uVar20 = uVar43 | 0xc000;
  bVar14 = (byte)(uVar20 >> 8);
  uVar44 = ~uVar31;
  uVar10 = (short)(char)(((ushort)((uint)(uVar1 / (ulonglong)(uVar32 | 0xc0000000)) >> 1) & 0x3fff)
                        / (ushort)bVar14) * (short)(char)((short)(char)((int)uVar39 >> 0x1f) << 5);
  uVar17 = ((ushort)uVar32 & 0xff00 | (ushort)((uVar17 & 1) == 0 && uVar31 != 0)) -
           CONCAT11(iVar38 != 0,bVar26);
  uVar39 = (CONCAT22(0x675a,(short)(char)((char)uVar18 + -1)) >> 0x12) << 1;
  if (!CARRY2(uVar17,uVar10) && (ushort)(uVar17 + uVar10) != -1) {
    uVar39 = uVar20;
  }
  uVar43 = uVar43 & 0xffffff00 | 0xc000 | (uint)(-1 < (char)(bVar26 << 4 | bVar26 >> 4 | bVar14));
  uVar39 = uVar44 + uVar39;
  iVar38 = 0x1f;
  if (uVar43 != 0) {
    while (uVar43 >> iVar38 == 0) {
      iVar38 = iVar38 + -1;
    }
  }
  uVar17 = (ushort)uVar39;
  uVar10 = CONCAT11('O' - (((ushort)uVar44 >> 0xe & 1) != 0),1) + uVar17;
  uVar43 = 0x1f;
  if (uVar39 != 0) {
    while (uVar39 >> uVar43 == 0) {
      uVar43 = uVar43 - 1;
    }
  }
  bVar47 = (uVar43 & 0x400) == 0;
  bVar14 = ~(byte)uVar10;
  uVar10 = uVar10 & 0xff00 | (ushort)bVar14 | 0x8000;
  uVar43 = (uint)uVar10 + (uint)(uVar10 >> 8) * 8;
  uVar18 = (short)uVar43 + 0xdf38;
  cVar21 = (char)((uint)uVar18 >> 8);
  uVar22 = (short)(ushort)uVar44 >> 4;
  uVar32 = uVar44 & 0xffff0000;
  uVar31 = uVar32 | (uint)uVar22;
  bVar26 = ((char)uVar18 << 1 | 1U) >> ((bVar14 | (byte)uVar44) & 0x1f);
  uVar17 = uVar17 << 1 | uVar17 >> 0xf;
  uVar20 = 0;
  if (uVar31 != 0) {
    while ((uVar31 >> uVar20 & 1) == 0) {
      uVar20 = uVar20 + 1;
    }
  }
  uVar18 = uVar17 + 0x72b1;
  uVar31 = uVar39 & 0xffff0000;
  if (uVar18 != 0) {
    uVar31 = uVar20;
  }
  uVar36 = (short)uVar20 + 0x65b6;
  uVar19 = uVar36 & 0xff00 | (ushort)(byte)((char)uVar36 + 6);
  uVar42 = uVar19 + 0x8ae4;
  bVar16 = (byte)uVar42;
  bVar9 = (bVar16 & 0x1f) % 0x11;
  uVar44 = (uint)(0x751b < uVar19) << 0x10;
  uVar36 = (ushort)(CONCAT44(uVar43 & 0xffff0000 |
                             (uint)(ushort)(((ushort)bVar26 & 0x7f) << 1 |
                                           (ushort)(byte)((byte)((uint)(ushort)(CONCAT11(cVar21 << 1
                                                                                         | cVar21 < 
                                                  '\0',bVar26) << 1) >> 8) ^
                                                  (byte)((uint)uVar36 >> 8)) << 8),
                             (uint)(ushort)(CONCAT11((SCARRY2((short)uVar20,0x65b6) !=
                                                     SCARRY2(uVar36,0)) == (short)uVar36 < 0,
                                                     ((char)(uVar10 >> 8) + -0x58) - bVar14) >> 1) |
                             (uint)uVar22 << 0x1f) / (ulonglong)(uVar31 & 0xffff0000 | 0xc0000000));
  bVar26 = bVar16 >> 5 | bVar16 << 3 & 0xf;
  uVar10 = uVar22 >> bVar26 | uVar18 << 0x10 - bVar26;
  uVar12 = uVar32 | uVar10;
  uVar34 = uVar20 & 0xffff0000 |
           (uint)(CONCAT11(~(byte)((uint)uVar42 >> 8),bVar16 >> 5 | bVar16 << 3) & 0xff0f);
  uVar43 = (uint)(ushort)(uVar36 << 5 | uVar36 >> 0xb) << 0x1a | (uVar20 & 0xffc00000) >> 6;
  uVar30 = uVar34 << bVar26 | uVar34 >> 0x20 - bVar26;
  uVar20 = (uVar39 & 0xffff0000 | (uint)uVar18) << 5;
  uVar22 = (short)uVar20 + ((ushort)uVar30 | 0x400);
  uVar20 = uVar20 & 0xffff0000;
  lVar4 = (longlong)
          (int)(uVar43 | (ushort)((short)(uVar34 >> 6) *
                                 ((ushort)(((uVar39 & 0xffff0000 | (uint)uVar17) * -0x403c5a7c &
                                           0xffffff00) << 1) | (ushort)bVar47))) *
          (longlong)(int)(uVar20 | uVar22);
  uVar17 = (ushort)(uVar43 >> 0x10) ^ (ushort)(uVar32 >> 0x10);
  uVar43 = (uint)lVar4 | 0xd400;
  uVar10 = uVar10 & 0xf;
  uVar36 = uVar22 & ~(1 << uVar10);
  bVar48 = (uVar22 >> uVar10 & 1) != 0;
  uVar39 = uVar43 >> 1 | (uint)bVar48 << 0x1f;
  if ((int)uVar43 < 0 != bVar48) {
    uVar39 = (uVar31 & 0xffff0000 | 0xc0000000 |
             (uint)(ushort)((ushort)(uVar44 << bVar9) | (ushort)(uVar44 >> 0x11 - bVar9))) + 1 ^
             0x164da44d | 0x10000000;
  }
  bVar16 = (char)(((uint)uVar18 & 0x7ff) << 5) + (byte)((ulonglong)lVar4 >> 0x3d) + 1;
  iVar38 = (int)(uVar39 ^ (uint)(uVar39 == uVar12) * (uVar39 & uVar12)) >> (bVar16 & 0x1f);
  bVar14 = (byte)((uint)iVar38 >> 8) >> (bVar16 & 0x1f);
  iVar45 = -(uVar12 << 1 | (uint)((int)uVar12 < 0));
  bVar28 = '\0' << (bVar16 & 7) | 0U >> 8 - (bVar16 & 7);
  bVar27 = (byte)uVar36;
  bVar26 = (bVar27 & 0x1f) % 0x11;
  uVar39 = (uint)(((byte)iVar38 >> 4 & 1) != 0) << 0x10 | 0xe005;
  bVar9 = (byte)((uint)(ushort)((short)iVar45 * -0x59a9) >> 8);
  bVar29 = bVar28 + bVar9;
  uVar39 = ((uint)(uint3)((uint3)(((uint)(ushort)((short)(char)(bVar14 + 1) >> 7) << 0x10) >> 9) |
                         (uint3)((uint)(CONCAT22(0xe05b,(ushort)(uVar39 << bVar26) |
                                                        (ushort)(uVar39 >> 0x11 - bVar26)) << 0x1f)
                                >> 8)) & 0xffff00) << 8 |
           (uint)CONCAT11(!CARRY1(bVar28,bVar9),CARRY1(bVar28,bVar9) || bVar29 == 0);
  if (bVar29 != 0 && SCARRY1(bVar28,bVar9) == (char)bVar29 < '\0') {
    uVar39 = iVar45 + 0xaf430df0U;
  }
  uVar43 = -CONCAT22(uVar17,(ushort)(bVar29 >> (bVar27 & 0xf)) |
                            (ushort)bVar29 << 0x10 - (bVar27 & 0xf));
  uVar32 = iVar45 + 0xaf430df0U ^ 1 << (uVar43 & 0x1f) | 0xc0000000;
  uVar2 = (ulonglong)
          CONCAT24((short)((ushort)((short)(char)bVar14 >> 7) >> 1) >> (bVar27 & 0x1f),uVar39);
  uVar1 = uVar2 / (ulonglong)uVar32;
  uVar2 = uVar2 % (ulonglong)uVar32;
  return (int)uVar1 + (uVar43 & 0xffff0000 | (uint)(ushort)((ushort)uVar43 ^ 1 << (uVar36 & 0xf))) +
         (uVar30 & 0xffff0000 | (uint)uVar36) +
         CONCAT22((short)(uVar2 >> 0x10),(short)uVar2 << 0xe | (ushort)uVar1 >> 2) + uVar32 +
         (uVar20 | (ushort)(CONCAT11(bVar47,bVar16) * 0x30e6 | uVar36 >> 0xf)) +
         iVar45 + ((uint)uVar17 << 0x10 | (uint)bVar28) * 4 + 0x2689194c;
}



// WARNING: Removing unreachable block (ram,0x080504a2)
// WARNING: Removing unreachable block (ram,0x08050284)
// WARNING: Removing unreachable block (ram,0x080507d9)
// WARNING: Removing unreachable block (ram,0x0805028f)

int log_size_10_var_009(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined3 uVar5;
  uint5 uVar6;
  byte bVar7;
  undefined2 uVar8;
  char cVar11;
  uint uVar9;
  int iVar10;
  byte bVar12;
  byte bVar13;
  sbyte sVar14;
  ushort uVar15;
  int iVar16;
  uint uVar17;
  char cVar19;
  uint uVar18;
  short sVar20;
  ushort uVar21;
  uint uVar22;
  uint uVar23;
  uint3 uVar25;
  int3 iVar26;
  uint uVar24;
  ushort uVar27;
  byte bVar29;
  uint uVar28;
  ushort uVar30;
  ushort uVar31;
  ushort uVar32;
  short sVar33;
  uint uVar34;
  ushort uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ushort uVar39;
  ushort uVar40;
  bool in_PF;
  bool bVar41;
  bool bVar42;
  
  uVar8 = 0xaa07;
  if (in_PF) {
    uVar8 = 0x8d5;
  }
  uVar22 = CONCAT22(0x5e2,uVar8);
  uVar36 = -uVar22 + 0x30f686a2;
  uVar37 = uVar36 | 0xc0000000;
  uVar1 = CONCAT44(0xcb3f08ea,
                   uVar22 & 0xffffff00 |
                   (uint)((0x30f686a3 < uVar22 || -uVar22 == -0x30f686a3) || uVar36 == 0)) &
          0x3fffffffffffffff;
  uVar2 = uVar1 / (ulonglong)uVar37;
  iVar16 = (int)(short)((ushort)uVar2 & 0xdfff) * -0x1537;
  uVar39 = 0xb71d - (short)iVar16;
  sVar20 = (short)((uint)iVar16 >> 0x10) + 0x4e;
  uVar35 = (ushort)(uVar37 << 1);
  uVar22 = (CONCAT22((short)(uVar1 % (ulonglong)uVar37 >> 0x10),sVar20) & 0xffffff00 |
            (uint)(byte)((char)sVar20 << 1) | 1) + CONCAT22(0x3b,uVar39);
  uVar30 = (uVar35 >> 0xf | 0x8516) << 1 | uVar39 >> 0xf;
  iVar16 = -0x307915ff - CONCAT22(0x3b,uVar39);
  uVar35 = uVar35 ^ 0x800;
  bVar12 = (byte)iVar16;
  bVar7 = bVar12 & 0x1f;
  uVar36 = 0x608fcccb << bVar7 | (uint)(CONCAT14(uVar30 < 0x781d,0x608fcccb) >> 0x21 - bVar7);
  bVar7 = (char)(uVar39 >> 8) + 0x2d;
  uVar5 = CONCAT21(0x3b,bVar7);
  sVar20 = (short)uVar36;
  uVar22 = uVar22 & 0xffff0000 | (uint)(ushort)((short)uVar22 + sVar20);
  bVar12 = bVar12 & 0x1f;
  uVar23 = (uint)(CONCAT14((ushort)(uVar30 + 0x87e3) < 0x612c,uVar22) >> bVar12) |
           uVar22 << 0x21 - bVar12;
  uVar22 = iVar16 * 2;
  bVar12 = ((byte)uVar22 |
           (0xf5e1 < uVar35 || CARRY2(uVar35 + 0xa1e,(ushort)((uVar30 + 0x26b7 & 0x10) != 0)))) +
           0x6f;
  uVar17 = -(uVar22 & 0xffffff00 | (uint)bVar12);
  uVar22 = ((((uint)uVar2 & 0x7fff0000 | 0x8000000) << 1) << (bVar12 & 0x1f)) + 0xf0869e8d;
  bVar41 = (uVar22 & 0x400) != 0;
  bVar12 = (byte)uVar17;
  uVar37 = (uint)(ushort)((ushort)((uVar22 << (bVar12 & 0x1f)) >> 0x10) |
                         (ushort)((uVar22 >> 0x20 - (bVar12 & 0x1f)) >> 0x10)) << 0x10;
  bVar13 = (byte)(uVar17 >> 8);
  uVar34 = ~(((uint)(ushort)(uVar30 - 0x4ea) | 0x392a0000) + 0x12354ecd);
  uVar22 = 0;
  if (uVar34 != 0) {
    while ((uVar34 >> uVar22 & 1) == 0) {
      uVar22 = uVar22 + 1;
    }
  }
  uVar34 = uVar34 + 0x9de7182c;
  uVar39 = sVar20 << 1 | (ushort)(sVar20 << 8) >> 0xf;
  uVar36 = uVar36 & 0xffff0000;
  uVar17 = uVar17 & 0xffff0000 |
           (uint)CONCAT11(bVar13 >> (bVar12 & 7) | bVar13 << 8 - (bVar12 & 7),bVar12);
  if (-1 < sVar20 && uVar39 != 0) {
    uVar17 = uVar37;
  }
  bVar12 = (byte)uVar17 & 0x1f;
  uVar22 = uVar22 >> bVar12 | CONCAT31(uVar5,0x38) << 0x20 - bVar12;
  if ((uVar36 | uVar39) == 0) {
    uVar17 = uVar37 | 0xd5ce5ec6;
  }
  uVar37 = (uint)(ushort)((ushort)(sVar20 << 1) >> 0xf | uVar39 << 1);
  uVar36 = uVar36 | uVar37;
  uVar22 = (uVar22 ^ (uVar22 >> 0xf & 1) << 0xf) & uVar36;
  uVar39 = ((ushort)uVar23 >> 8 | sVar20 << 8) - (short)uVar34;
  if (!bVar41) {
    uVar17 = uVar17 & 0xffff0000 | CONCAT31(uVar5,0x37) & 0xffff;
  }
  bVar12 = (byte)uVar17;
  uVar24 = (uint)(CONCAT14(bVar7 < 0x3a,uVar36) >> 9);
  uVar36 = 0;
  if (uVar34 != 0) {
    while ((uVar34 >> uVar36 & 1) == 0) {
      uVar36 = uVar36 + 1;
    }
  }
  uVar38 = CONCAT31(uVar5,0x37) | 0xc0;
  bVar13 = (byte)uVar38;
  bVar7 = (byte)(0x3d8c / (ushort)bVar13);
  sVar20 = (short)uVar22;
  uVar34 = uVar17 & 0xffff0000 | (uint)CONCAT11((char)(uVar17 >> 8) + -8,bVar12 | bVar13);
  uVar30 = ((short)uVar24 >> (bVar12 & 0x1f)) * 2;
  uVar24 = uVar24 & 0xffff0000 | uVar37 << 0x18 | (uint)uVar30;
  uVar37 = (uVar23 & 0xffff0000 | (uint)uVar39 & 0xffffff00 |
           (uint)(byte)-((byte)uVar39 >> (bVar12 & 0x1f))) + 0xf7456a84;
  uVar17 = uVar37 - uVar24;
  if (uVar37 < uVar24) {
    uVar17 = uVar17 & 0xffff0000 | (uint)(ushort)((ushort)uVar36 >> 1 | sVar20 << 0xf);
  }
  uVar39 = (ushort)uVar38;
  uVar39 = uVar39 | 1 << (uVar39 & 0xf);
  uVar25 = ((uint3)(uVar17 >> 8) & 0xff00) >> 8 | (uint3)uVar17 & 0xff00 |
           (uint3)((uVar17 << 0x18) >> 8);
  bVar29 = (byte)(uVar39 >> 8);
  bVar13 = (byte)(uVar17 >> 0x18);
  bVar12 = bVar13 + 0x20;
  uVar27 = (uVar39 & 0xff | (ushort)(byte)(bVar29 >> 1 | bVar29 << 7) << 8) + 0x4d37 +
           (ushort)(0xdf < bVar13);
  uVar39 = uVar27 & 0xff;
  iVar16 = uVar34 * 0x400 + CONCAT31(uVar25,bVar12) + 1;
  uVar17 = (uVar36 >> 0x15 | uVar34 << 0xb | 0x550b) + 1;
  uVar37 = CONCAT31(uVar25,bVar12 | (byte)uVar39) ^ 1 << (uVar17 & 0x1f);
  uVar30 = (short)uVar17 + uVar30 + 1;
  uVar35 = (ushort)iVar16;
  uVar15 = uVar35 + 0xc675;
  uVar25 = (uint3)((uint)iVar16 >> 8) & 0xffff00;
  bVar13 = (char)uVar15 + 0x5d;
  uVar31 = uVar15 & 0xff00 | (ushort)bVar13;
  uVar39 = (uVar39 | (ushort)(-1 < (short)uVar27) << 8) >> (bVar13 & 0x1f);
  uVar39 = uVar39 << (bVar13 & 0xf) | uVar39 >> 0x10 - (bVar13 & 0xf);
  bVar12 = (byte)(uVar39 >> 8);
  bVar29 = bVar12 ^ (bVar7 == bVar12) * (bVar12 ^ bVar7);
  bVar12 = bVar7 ^ (bVar7 == bVar12) * (bVar7 & bVar29);
  uVar36 = CONCAT22(0x3b,uVar39 & 0xff | (ushort)bVar29 << 8) << 1;
  bVar42 = (((uint)CONCAT11(0x6b,bVar7) & 0xffffff00 | 0xffff0000 | (uint)bVar12) & 0x3a5b) == 0;
  uVar39 = CONCAT11(bVar42 << 6 | (((uVar35 & 0xfff) - 0x98b & 0x1000) != 0) << 4 | bVar41 << 2,
                    bVar12) & 0xff5b | 0x200;
  if (!bVar41) {
    uVar30 = uVar15 & 0xff00 | (ushort)bVar13;
  }
  sVar33 = uVar31 + uVar39;
  uVar35 = sVar33 + 1;
  uVar23 = (uint)(ushort)((ushort)bVar12 & 0x5b |
                         (ushort)(bVar42 || SCARRY2(uVar31,uVar39) != SCARRY2(sVar33,1)) << 8);
  uVar34 = (uVar36 & 0xffff0000 | (uint)(ushort)(((ushort)uVar36 | 1) + 0x125a)) + 0x7548e5f3;
  uVar1 = (ulonglong)(uVar23 | 0xffff0000);
  uVar2 = CONCAT44(uVar37 >> 5 | uVar37 << 0x1b,uVar23) & 0x3fffffffffffffff | 0xffff0000;
  uVar3 = uVar2 / uVar1;
  uVar2 = uVar2 % uVar1;
  bVar12 = (byte)uVar35;
  bVar7 = (bVar12 & 0x1f) % 9;
  uVar37 = CONCAT31((int3)(uVar3 >> 8),
                    (char)uVar3 << bVar7 | (byte)(CONCAT11(bVar12 < 0xa6,(char)uVar3) >> 9 - bVar7))
  ;
  uVar36 = uVar34 & 0x659bb69;
  bVar29 = (byte)uVar2;
  bVar12 = bVar29 + bVar12;
  bVar7 = (byte)((uint)uVar35 >> 8);
  iVar26 = (int3)(uVar2 >> 8);
  uVar23 = CONCAT31(iVar26,bVar12);
  if ((char)bVar12 < '\0') {
    uVar36 = uVar34 & 0x6590000 | uVar23 & 0xffff;
  }
  cVar19 = bVar7 + bVar12;
  uVar39 = CONCAT11(cVar19,bVar29);
  if (cVar19 != '\0') {
    uVar37 = uVar23 & 0xffff | (uint)(ushort)(uVar3 >> 0x10) << 0x10;
  }
  uVar17 = (uVar17 & 0xffff0000 | (uint)(ushort)(uVar30 << 0xb | uVar30 >> 5)) << 1;
  uVar15 = (ushort)uVar17 | (ushort)CARRY1(bVar7,bVar12);
  uVar30 = (ushort)uVar37;
  bVar7 = (byte)((uVar30 ^ (ushort)(uVar30 == uVar39) * (uVar30 & uVar39)) >> 1);
  uVar37 = (uVar37 & 0xfffe0000) >> 1 | uVar36 << 0x1f;
  bVar12 = bVar29 >> (bVar29 & 7) | bVar29 << 8 - (bVar29 & 7);
  uVar34 = (uVar22 & 0xffff0000 | (uint)(ushort)(sVar20 - 1)) +
           (uVar37 | (ushort)(short)(char)bVar7) + (uint)(iVar26 < 0);
  uVar22 = (uVar23 & 0x7fffff80) << 1;
  uVar30 = (ushort)(iVar26 < 0);
  uVar35 = uVar15 + 0x465;
  uVar31 = uVar35 - uVar30;
  if ((SBORROW2(uVar15,-0x465) != SBORROW2(uVar35,uVar30)) == (short)uVar31 < 0) {
    uVar34 = uVar34 & 0xffff0000 | uVar36 & 0xffff;
  }
  if (uVar15 < 0xfb9b || uVar35 < uVar30) {
    uVar36 = uVar36 & 0xffff0000;
  }
  bVar29 = (bVar12 & 0x1f) % 0x11;
  uVar23 = (uint)uVar39 & 0xff00 | (uint)bVar12;
  uVar39 = (ushort)(uVar23 << bVar29) | (ushort)(uVar23 >> 0x11 - bVar29);
  sVar20 = uVar39 + 0x5c35;
  if (sVar20 != 0 && -0x5c36 < (short)uVar39) {
    uVar34 = uVar17 & 0xffff0000 | (uint)uVar31;
  }
  uVar17 = CONCAT31(uVar25 | (byte)((ushort)sVar20 >> 8),0xa3ca < uVar39 && sVar20 != 0);
  uVar30 = (ushort)(uVar22 >> 0x10);
  uVar15 = ((uVar31 & 0x101e | uVar30) - (short)((uVar24 >> (bVar13 & 0x1f)) << 1)) - 1;
  uVar35 = (short)(char)bVar7 & 0xd200;
  if ((short)(uVar35 | (byte)~(bVar7 & 0xbf)) < 0) {
    uVar17 = uVar34 & 0xffff | (uint)(ushort)(uVar25 >> 8) << 0x10;
  }
  uVar35 = CONCAT11((char)(uVar35 >> 8) + -0x45,~(bVar7 & 0xbf));
  uVar24 = (uint)uVar35;
  uVar23 = uVar17 << 1;
  cVar19 = (char)(uVar22 >> 0x10);
  uVar30 = (uVar30 & 0xff00 | (ushort)(byte)(cVar19 + 0x1a)) + 0x5986 & ~(1 << (uVar15 & 0xf));
  uVar38 = uVar22 >> 0x10 & 0xffffff00 | (uint)uVar39 << 0x10 | (uint)(byte)(cVar19 + 1);
  uVar22 = (uVar23 & 0xffff0000 |
           (uint)CONCAT11((byte)(uVar23 >> 8) >> ((byte)uVar23 & 0x1f | (int)uVar17 < 0),
                          (byte)uVar23 | (int)uVar17 < 0)) + 0x8f416666;
  iVar16 = uVar38 - (uVar37 | uVar24);
  uVar39 = (ushort)iVar16;
  if ((SBORROW4(uVar38,uVar37 | uVar24) != false) != iVar16 < 0) {
    uVar39 = uVar35;
  }
  uVar23 = (uVar37 | uVar24 & 0xffffff00 | (uVar24 & 0xfe) >> 1) ^ 0xad17;
  bVar7 = (byte)uVar22 & 0x1f;
  uVar38 = ((uVar34 ^ 0xe150a974) & 0xffff0000 | (uint)(ushort)((ushort)(uVar34 ^ 0xe150a974) | 2))
           >> bVar7 | uVar23 << 0x20 - bVar7;
  uVar31 = uVar30 & 0xe0ff | 0xc000;
  uVar17 = (uint)uVar30 & 0xe0ff | 0xc000;
  uVar23 = (uint)(uVar39 & 0x3fff) << 0x10 | uVar23 & 0xffff;
  uVar34 = uVar23 / uVar17;
  uVar15 = (ushort)((((uint)uVar15 & 0xff00) << 8) >> 0x10) |
           (ushort)(((uint)uVar15 << 0x18) >> 0x10);
  uVar35 = (short)uVar22 + 1;
  uVar39 = ((uVar31 << 1 | uVar31 >> 0xf) + 0x79b8) - (ushort)((short)uVar31 < 0) >> 1;
  bVar7 = (byte)((uint)uVar35 >> 8);
  uVar30 = (uVar39 | 0x8000) >> 7;
  uVar24 = (uint)(ushort)(uVar39 << 9 | uVar30);
  uVar39 = (ushort)(uVar23 % uVar17) >> 1;
  uVar22 = ((uVar22 & 0xffff0000 |
            (uint)(ushort)(uVar35 & 0xff | (ushort)(byte)(bVar7 >> 7 | bVar7 << 1) << 8)) ^
           1 << (uVar34 & 0x1f)) + (uVar36 & 0xffff0000 | uVar24) + 1;
  uVar17 = uVar22 | 0xc0;
  uVar35 = (ushort)uVar34 & 0x3fff;
  bVar7 = (byte)uVar17;
  bVar12 = (byte)uVar30 & (byte)uVar39;
  if (-1 < (char)bVar12) {
    uVar17 = uVar22 & 0xffff0000 |
             (uint)(ushort)((uVar35 / (ushort)bVar7 & 0xff | uVar35 % (ushort)bVar7 << 8) <<
                           (bVar7 & 0x1f));
  }
  cVar19 = (char)(uVar17 >> 8) + -0x38;
  uVar22 = (uVar36 & 0xffff0000 | uVar24 & 0xffffff00 | (uint)bVar12) + 0x8893ac09;
  uVar31 = CONCAT11((char)(uVar22 >> 8) + -0x14,(char)uVar22) ^ (ushort)uVar38;
  uVar35 = (short)((ushort)(uVar37 >> 0x10) | 0x20) >> 1;
  uVar37 = (uVar38 & 0xffff0000 |
           (uint)(((uVar39 & 0xff) << 0xd |
                  ((uVar39 & 0xff | (ushort)(byte)((uint)(ushort)(uVar39 | uVar30 << 0xf) >> 8) << 8
                   ) ^ 0x8d00) >> 3) + (short)cVar19 & 0xff00)) + 1;
  iVar16 = (int)(short)uVar35 >> 0xf;
  cVar11 = (char)((uint)iVar16 >> 8);
  uVar36 = CONCAT22(uVar15,(short)cVar11);
  uVar39 = uVar31 + 0x4852 + (ushort)(0x123c < uVar31);
  uVar22 = uVar22 & 0xffff0000 | (uint)uVar39;
  if (uVar39 != 0 &&
      (SCARRY2(uVar31 + 0xedc3,0x5a8f) != SCARRY2(uVar31 + 0x4852,(ushort)(0x123c < uVar31))) ==
      (short)uVar39 < 0) {
    uVar22 = uVar36;
  }
  uVar37 = uVar37 ^ (uVar37 >> 1 & 1) << 1;
  if ((short)uVar37 < 0) {
    uVar36 = iVar16 + 0xd1da00f5U & 0xff | (uint)uVar15 << 0x10;
  }
  uVar39 = SEXT12((char)((uint)(ushort)(CONCAT11(cVar19,(char)uVar17 << 1) << 1 | 1) >> 8));
  bVar13 = (char)-((byte)(((ushort)((uVar22 & 0xffffff00 | uVar22 >> 1 & 0x7f) >> 2) & 0x7f) << 1) |
                  (byte)(cVar11 >> 7) >> 7) >> 1;
  bVar12 = (byte)((uint)uVar39 >> 8);
  bVar7 = bVar12 - bVar13;
  uVar37 = uVar37 & 0xffffc489;
  if (bVar13 <= bVar12 && bVar7 != 0) {
    uVar37 = uVar17 & 0xffff0000 | (uint)(ushort)(uVar39 & 0xff | (ushort)bVar7 << 8);
  }
  bVar41 = (ushort)((ushort)(((uint)uVar35 << 0x11) >> 0xe) & (ushort)uVar37) != 0;
  uVar38 = uVar37 & 0xffff0000 | (uint)(ushort)((short)(ushort)uVar37 >> 0x19);
  uVar23 = uVar38 << 0xc;
  uVar37 = (int)(short)(CONCAT11((char)(uVar36 >> 8),bVar41) ^ 0x556b) * -0x3b10;
  sVar20 = (short)(uVar37 >> 0x10);
  uVar34 = (uint)(CONCAT14(sVar20 != 0 && sVar20 != -1,uVar36) >> 5);
  uVar24 = uVar36 << 0x1c | uVar34 & 0xffff0000;
  uVar23 = uVar23 & 0xffff0000 | (uint)(ushort)(((ushort)uVar23 | 0xfff) >> 1 | 0x8000);
  iVar16 = 0;
  cVar19 = '\0';
  if (uVar23 != 0) {
    while (cVar19 = (char)iVar16, (uVar23 >> iVar16 & 1) == 0) {
      iVar16 = iVar16 + 1;
    }
  }
  uVar17 = uVar38 + 0xfe +
           (uVar17 & 0xffff0000 |
           (uint)(ushort)(uVar39 & 0xff | (ushort)bVar41 << 8 | (ushort)uVar36)) * 4;
  cVar11 = (char)((uVar37 & 0xf000) >> 0xc);
  bVar7 = (byte)((uVar24 | (ushort)((short)((uVar34 & 0xfffe) >> 1) + 0xd3ba)) >> 0xe);
  uVar37 = (uint)(byte)(bVar7 ^ (bVar7 == 1) * (bVar7 ^ (cVar19 + '\x01') - cVar11)) & 0xffffff0f;
  sVar14 = (sbyte)uVar37;
  bVar7 = (byte)(((ushort)((uVar36 << 0x1c | uVar34 & 0xffc00000) >> 0xe) | (ushort)uVar37) >>
                sVar14) | cVar11 << 0x10 - sVar14;
  uVar35 = ~(ushort)uVar17;
  uVar39 = CONCAT11(bVar7,cVar11) + 0xb8e7;
  bVar12 = (byte)((uint)uVar35 >> 8);
  uVar30 = CONCAT11(bVar12 >> 7 | bVar12 << 1,(char)uVar35 + 'C');
  uVar36 = (uint)uVar30 * -0x5361fdab;
  uVar30 = (short)uVar30 >> ((byte)uVar36 & 0x1f);
  iVar16 = (uVar22 & 0xffff0000 |
           (uint)(ushort)(uVar39 & 0xff |
                         (ushort)(byte)((char)((uint)uVar39 >> 8) << (bVar7 & 0x1f)) << 8)) << 5;
  uVar39 = CONCAT11((char)((uint)iVar16 >> 8) + '\x01',
                    (byte)((uVar22 & 0xffff0000) >> 0x1c) | (byte)iVar16);
  uVar34 = (uVar17 & 0xffff0000 | (uint)(uVar35 & 0xfdff)) ^ 1 << ((uint)uVar39 & 0x1f);
  uVar37 = (uint)(ushort)((uVar30 & 0xff | (ushort)((uVar30 & 0x100) != 0) << 8) << 1);
  uVar22 = ~(1 << (uVar37 & 0x1f));
  uVar23 = (uVar24 >> 1 | 0x80000000) >> 0x11 | uVar34 << 0xf;
  uVar17 = (uVar36 & 0xffff0000 |
           (uint)(ushort)((ushort)uVar36 & 0xff | (ushort)(byte)(uVar37 >> 8) << 8)) ^
           1 << (uVar34 & 0x1f);
  uVar37 = (uint)uVar39 * (uint)uVar39 >> 0x10;
  uVar34 = uVar34 ^ (uVar34 >> 7 & 1) << 7;
  iVar16 = uVar37 - uVar23;
  uVar36 = uVar23;
  if (iVar16 != 0 && (SBORROW4(uVar37,uVar23) != false) == iVar16 < 0) {
    uVar36 = uVar34;
  }
  bVar7 = (byte)uVar17 & 0x1f;
  uVar38 = (uVar34 & 0xff00 | (uint)(byte)((byte)uVar34 >> 1 | (byte)uVar34 << 7)) << bVar7 |
           (uVar36 & 0xffff) >> 0x20 - bVar7;
  bVar12 = (byte)uVar38;
  uVar34 = uVar38 & 0xffff0000;
  bVar41 = ((short)(char)bVar12 & 0x400U) != 0;
  uVar37 = (uVar17 & 0xffffff00 | uVar38 >> 8 & 0xff) >> 1 & 0x7fff;
  bVar13 = (byte)uVar37;
  uVar6 = CONCAT14((uVar38 >> 8 & 1) != 0,uVar36) & 0xff0000ffff;
  uVar28 = (int)uVar6 << (bVar13 & 0x1f) | (uint)(uVar6 >> 0x21 - (bVar13 & 0x1f));
  uVar30 = (ushort)uVar37;
  bVar7 = (bVar13 & 0x1f) % 0x11;
  uVar36 = (uint)(uVar30 < 0xbb79) << 0x10 |
           (uint)(ushort)(short)(char)bVar12 & 0xff00 |
           (uint)(byte)(bVar12 << (bVar13 & 7) | bVar12 >> 8 - (bVar13 & 7));
  uVar39 = (ushort)(uVar36 << bVar7) | (ushort)(uVar36 >> 0x11 - bVar7);
  bVar7 = (byte)uVar39 & 0x6a;
  uVar36 = (uVar34 | (uint)uVar39 & 0xffff4600 | (uint)(byte)(bVar7 << 5 | bVar7 >> 3)) ^ 0xd6f5;
  uVar39 = (ushort)uVar23 >> 1;
  uVar24 = (uVar28 & 0xffffff00 |
           (uint)(byte)((byte)uVar28 << (bVar13 & 7) | (byte)uVar28 >> 8 - (bVar13 & 7))) >> 1 &
           0x7fff;
  bVar12 = (byte)uVar39;
  uVar30 = uVar30 ^ 1 << (uVar30 & 0xf);
  cVar19 = (char)((uint)(ushort)(uVar30 << 3 | uVar30 >> 0xd) >> 8);
  uVar36 = (uVar34 | (ushort)(CONCAT11((byte)(uVar36 >> 8) >> (bVar13 & 0x1f),
                                       (char)uVar36 + (char)uVar24) + uVar30)) << 3;
  uVar37 = (uVar17 & 0xffff0000 |
           (uint)(ushort)(uVar30 << 3 & 0xff | uVar30 >> 0xd |
                         (ushort)(byte)(cVar19 << 1 | cVar19 < '\0') << 8)) >> 1;
  bVar7 = ((byte)uVar37 & 0x1f) % 0x11;
  uVar37 = uVar37 & 0xffff;
  uVar30 = ((ushort)uVar22 & 0xa5da) + 0xb7a1 | 0x2000;
  uVar18 = uVar22 & 0xe58f0000 | (uint)uVar30;
  uVar37 = ((uVar17 & 0xfffe0000) >> 1 | (uVar38 >> 0x1d) << 0x1f |
           (uint)(ushort)((ushort)(uVar37 << bVar7) | (ushort)(uVar37 >> 0x11 - bVar7))) &
           ~(1 << ((ushort)uVar23 != 0xd685));
  bVar7 = (byte)(uVar36 >> 8);
  bVar29 = bVar7 & 1;
  uVar36 = uVar36 & 0xffff0000 |
           (uint)CONCAT11(bVar7 >> 1 | bVar29 << 7,(byte)(uVar34 >> 0x1d) | (byte)uVar36);
  sVar20 = (~(ushort)iVar16 << 0xf | uVar39 & 0xff00 |
           (ushort)(byte)(bVar12 << (bVar13 & 7) | bVar12 >> 8 - (bVar13 & 7))) + 0x652d +
           (ushort)bVar29;
  uVar22 = 0x1f;
  if (uVar18 != 0) {
    while (uVar18 >> uVar22 == 0) {
      uVar22 = uVar22 - 1;
    }
  }
  uVar39 = (ushort)((uint)((int)(int3)((uint3)(uVar28 >> 8) & 0xffff00 | (uint3)(uVar24 >> 8)) >>
                          0x14) >> 0xe) ^ 0x4ba6;
  if (!bVar41) {
    uVar39 = (ushort)uVar22;
  }
  bVar12 = (byte)uVar37;
  lVar4 = (longlong)(int)uVar36 * (longlong)(int)uVar36;
  uVar31 = (ushort)uVar22 >> 1 | 0x8000;
  uVar34 = uVar22 & 0xffff0000 | (uint)uVar31;
  bVar13 = (byte)(uVar39 << 1) | (short)uVar39 < 0 | 0xc0;
  uVar15 = (ushort)lVar4 & 0x3fff;
  uVar35 = uVar15 / (ushort)bVar13 & 0xff;
  uVar22 = (uint)lVar4 & 0xffff0000;
  bVar7 = (byte)((uint)(ushort)(uVar35 | uVar15 % (ushort)bVar13 << 8) >> 8);
  uVar39 = uVar39 << 1 & 0xff00 | (ushort)(byte)(bVar13 - 1);
  bVar13 = (byte)(uVar31 >> 7);
  uVar37 = uVar37 & 0xffff0000 |
           (uint)(ushort)((short)((ushort)(byte)(bVar12 << (bVar12 & 7) | bVar12 >> 8 - (bVar12 & 7)
                                                ) << 9 | uVar31 >> 7) >> (bVar13 & 0x1f));
  uVar36 = uVar22 | (uint)(ushort)(uVar35 | (ushort)(byte)(bVar7 << 5 | bVar7 >> 3) << 8) &
                    0xffffff00 | (uint)(byte)((char)uVar35 >> 0x1a);
  uVar23 = CONCAT22((short)((ulonglong)lVar4 >> 0x30),
                    CONCAT11(((char)bVar7 >> 0xf) + bVar13,(char)bVar7 >> 7) + -0x52b) + 0xc9634845;
  iVar16 = uVar37 - uVar18;
  uVar17 = iVar16 - 1;
  if (uVar17 == 0 || (SBORROW4(uVar37,uVar18) != SBORROW4(iVar16,1)) != (int)uVar17 < 0) {
    uVar36 = uVar22 | uVar39;
  }
  uVar31 = ((ushort)uVar17 | 0x100) + uVar31;
  uVar37 = (uVar36 & 0xffffff00 |
           (uint)(byte)((char)uVar36 << 2 | (byte)(CONCAT11(sVar20 < 0,(char)uVar36) >> 7))) ^ 0x55;
  uVar22 = uVar34 + 0xe6cf720a;
  if (uVar22 != 0 && (SBORROW4(uVar34,0x19308df6) != false) == (int)uVar22 < 0) {
    uVar22 = uVar22 & 0xffff0000 | uVar37 & 0xffff;
  }
  uVar35 = (ushort)uVar23;
  uVar34 = uVar37 & ~(1 << (uVar23 & 0x1f));
  bVar42 = (uVar37 >> (uVar23 & 0x1f) & 1) != 0;
  if (!bVar42 && (char)uVar37 != -0x58) {
    uVar30 = (ushort)uVar22;
  }
  uVar27 = (ushort)uVar34 & 0xff00 |
           (ushort)(byte)((byte)(CONCAT11(bVar42,(char)uVar34) >> 6) | (char)uVar34 << 3);
  uVar37 = ((uVar23 & 0xffff0000 | (uint)(ushort)((uVar39 << 1) << ((byte)uVar31 & 0x1f))) &
           0x7fffff80) << 1;
  lVar4 = (longlong)(int)(uVar22 * 0x5c1c5036) *
          (longlong)
          (int)(uVar37 | (byte)(bVar41 + 'b' +
                               (uVar35 < (ushort)((uVar27 + uVar30) -
                                                 ((ushort)uVar37 | (ushort)bVar41)))));
  uVar39 = (ushort)uVar22 + 1 | 1 << (uVar35 & 0xf);
  uVar21 = (ushort)((ulonglong)lVar4 >> 0x20) & 0x91a6;
  uVar15 = uVar35 << 3;
  uVar37 = (uVar17 & 0xffff0000 | (uint)uVar31 & 0xffffff00) << 0xb;
  uVar22 = (uVar22 & 0xffff0000 | (uint)uVar39) >> 1;
  uVar23 = uVar22 | (uint)((uVar39 & 1) != 0) << 0x1f;
  uVar32 = (ushort)uVar22;
  uVar40 = uVar27 + uVar32;
  bVar7 = (byte)uVar15 & 0x1f;
  uVar39 = ~(1 << (uVar40 & 0xf));
  uVar31 = uVar39 & 0xc3;
  uVar30 = uVar21 >> 9;
  uVar17 = (uint)(ushort)(uVar30 | (ushort)(byte)((uint)(ushort)(uVar21 << 7 | uVar30) >> 8) << 8);
  uVar22 = (uVar37 | (uint)uVar15) << 6;
  uVar30 = (ushort)uVar22;
  sVar33 = ((ushort)(CONCAT14(CARRY2(uVar27,uVar32),uVar23) >> bVar7) |
           (ushort)(uVar23 << 0x21 - bVar7)) + 0x89dd + (ushort)(uVar40 < 0x3cea);
  uVar27 = uVar27 - (sVar20 * 2 | (ushort)uVar36 >> 0xf);
  if (-1 < sVar33) {
    uVar27 = (ushort)(uVar37 >> 0x1a) | uVar30;
  }
  cVar19 = (char)((uint)(ushort)(uVar31 | (ushort)(byte)(((char)((uint)(uVar39 & 0xffc3) >> 8) -
                                                         (char)((uint)uVar15 >> 8)) - 1) << 8) >> 8)
  ;
  uVar36 = ((uint)((ulonglong)lVar4 >> 0x20) & 0xffff0000 | uVar17) >> 10;
  uVar17 = uVar17 << 0x16 | uVar36;
  sVar20 = sVar33 * -0x25d1 + -0x1cf7;
  bVar12 = (byte)(uVar37 >> 0x1a);
  bVar7 = bVar12 & 0x1f;
  uVar38 = (uVar34 & 0xffff0000 | (uint)uVar40) << bVar7 | uVar17 >> 0x20 - bVar7;
  uVar21 = (ushort)uVar38;
  bVar12 = bVar12 + (char)((uint)(ushort)((uVar35 >> 6) - (~uVar27 << 1 | uVar21 >> 0xf)) >> 8) +
           (sVar20 < 0);
  uVar39 = (sVar20 * 2 | (~uVar27 << 1) >> 0xf) +
           ((uVar31 | (ushort)(byte)(cVar19 << 1 | cVar19 < '\0') << 8) >> 1);
  uVar28 = (int)-(uint)(sVar20 < 0) >> (bVar12 & 0x1f);
  bVar7 = (bVar12 & 0x1f) % 0x11;
  uVar15 = uVar39 << bVar7 | uVar39 >> 0x11 - bVar7;
  uVar39 = uVar21 + ((ushort)uVar36 & 32000 ^ (ushort)uVar28);
  uVar30 = (uVar30 | (ushort)bVar12) ^ (ushort)bVar12 & 0x40;
  uVar36 = uVar22 & 0xffff0000 | (uint)uVar30;
  uVar34 = (int)(short)uVar15 & 0xffff;
  uVar24 = (uVar17 & 0x56710000 |
           (uint)(ushort)(uVar21 >> (bVar12 & 0xf) | uVar21 << 0x10 - (bVar12 & 0xf))) - 1;
  bVar7 = ((byte)uVar30 & 0x1f) % 0x11;
  uVar22 = (uint)(ushort)(uVar30 * 0x5180 | uVar39) & 0xff;
  uVar37 = uVar36 * 2;
  uVar17 = (uint)CONCAT11((char)uVar22,(char)uVar24);
  uVar35 = ((short)uVar22 << 1 | (ushort)CARRY4(uVar36,uVar36)) * 2 + 1;
  uVar23 = (uint)(uVar39 & 0xcd6f);
  bVar12 = ((byte)uVar37 & 0x1f) % 0x11;
  uVar30 = (short)uVar37 >> 1;
  uVar36 = (uVar38 & 0xffff0000 | uVar23) << 1;
  uVar39 = SEXT12((char)((byte)(uVar35 >> bVar12) | (char)uVar35 << 0x11 - bVar12));
  uVar38 = ((uint)(ushort)((short)uVar15 >> 0xf) << 0x10 | 0xcd6f) >> ((byte)uVar30 & 0x1f);
  uVar22 = 0x1f;
  if (uVar36 != 0) {
    while (uVar36 >> uVar22 == 0) {
      uVar22 = uVar22 - 1;
    }
  }
  uVar36 = (uVar37 & 0xffff0000 | (uint)uVar30) ^ 0x608f;
  bVar12 = ((short)(uVar30 ^ 0x608f) < 0) << 7 | ((uVar30 ^ 0x608f) == 0) << 6 |
           ((((uVar28 >> 1 | 0x80000000) - 1 & 0xfffffff) - (uVar24 & 0xfff0000 | uVar17) &
            0x10000000) != 0) << 4 | bVar41 << 2;
  uVar30 = uVar39 & 0xff;
  uVar28 = uVar38 >> 2;
  bVar29 = (char)uVar28 >> 8 ^ (bVar12 | 2);
  bVar13 = (byte)(uVar22 >> 8);
  uVar18 = (uVar22 & 0xffff0000 | (uint)CONCAT11(bVar13 >> 6 | bVar13 << 2,(byte)uVar22)) <<
           ((byte)uVar22 & 0x1f);
  uVar23 = (uVar17 << 0x1d | (uVar24 & 0xffff0000 | uVar17) >> 3) & ~(1 << ((uVar23 & 0xf) << 1));
  uVar37 = (uVar23 & 0xffff0000 |
           (uint)CONCAT11(((char)(uVar23 >> 8) - (char)uVar30) + -1,(char)uVar23)) << 0xe;
  uVar17 = ((CONCAT22((short)((ushort)(uVar34 >> bVar7) | (ushort)(uVar34 << 0x11 - bVar7)) >> 0xf,
                      uVar30 | (ushort)bVar12 << 8) | 0x200) >> 1 |
           (uint)((uVar39 & 1) != 0) << 0x1f) & ~(1 << ((uint)bVar29 & 0x1f));
  uVar22 = 0x1f;
  if (uVar36 != 0) {
    while (uVar36 >> uVar22 == 0) {
      uVar22 = uVar22 - 1;
    }
  }
  uVar39 = (ushort)uVar18;
  uVar34 = uVar18 & 0xffff0000 | (uint)(ushort)(uVar39 << 7 | uVar39 >> 9);
  uVar24 = uVar23 >> 0x12 | uVar37 | 0xc000;
  uVar30 = (ushort)uVar17 & 0x3fff;
  uVar39 = (ushort)(byte)(uVar24 >> 8);
  uVar37 = uVar37 & 0xffff0000;
  uVar23 = uVar34 << 1;
  uVar34 = uVar23 | (int)uVar34 < 0;
  uVar36 = uVar22 + (uVar17 & 0xffff0000 |
                    (uint)(ushort)(uVar30 / uVar39 & 0xff | uVar30 % uVar39 << 8)) + uVar36;
  uVar38 = uVar38 & 0xffff0000 | uVar28 & 0x3f00 | (uint)(bVar29 & (byte)uVar34);
  sVar20 = (short)uVar38;
  uVar39 = (short)uVar36 + 0xd51;
  uVar36 = uVar36 & 0xffff0000;
  uVar28 = uVar36 | uVar39;
  uVar22 = uVar22 ^ (uVar22 >> 0x19 & 1) << 0x19;
  uVar17 = (uVar23 & 0xffff0000 | (uint)(ushort)((short)uVar34 - sVar20)) + 1;
  bVar7 = (byte)uVar17;
  uVar23 = uVar38 << (bVar7 & 0x1f) | uVar22 >> 0x20 - (bVar7 & 0x1f);
  bVar12 = (byte)uVar23 >> (bVar7 & 0x1f);
  uVar22 = uVar22 * uVar28;
  if ((bVar12 & 1) != 0) {
    uVar22 = uVar28;
  }
  uVar34 = (((uVar37 | (ushort)(uVar39 + sVar20 * 8)) >> (bVar7 & 0x1f) |
            (uVar37 | (ushort)~(ushort)uVar24) * -0x4e98c8ce << 0x20 - (bVar7 & 0x1f)) >> 1) >>
           (bVar7 & 0x1f);
  cVar19 = (char)(uVar23 >> 8) + '\\';
  uVar37 = uVar23 & 0xffff0000 | (uint)CONCAT11(cVar19,bVar12);
  if (-1 < cVar19) {
    uVar37 = uVar34;
  }
  bVar12 = (byte)(uVar17 & 0xffff0cff);
  bVar7 = (bVar12 & 0x1f) % 0x11;
  uVar23 = (uint)(0xca8c845c < (uint)((int)uVar22 >> 0x1f)) << 0x10 | uVar34 & 0xffff;
  uVar34 = uVar34 & 0xffff0000 |
           (uint)(ushort)((ushort)(uVar23 >> bVar7) | (ushort)(uVar23 << 0x11 - bVar7));
  uVar35 = CONCAT11((byte)(uVar37 >> 8) >> (bVar12 & 0x1f),(char)uVar37);
  uVar23 = uVar37 & 0xffff0000 | (uint)uVar35;
  lVar4 = (ulonglong)uVar22 * (ulonglong)uVar34;
  uVar30 = (ushort)((ulonglong)lVar4 >> 0x30);
  sVar20 = (short)(char)((byte)lVar4 & 0xe8) >> 0xf;
  uVar37 = CONCAT22(uVar30,sVar20);
  uVar22 = 0;
  if (uVar37 != 0) {
    while ((uVar37 >> uVar22 & 1) == 0) {
      uVar22 = uVar22 + 1;
    }
  }
  uVar38 = (int)(uVar36 | uVar39 & uVar35) >> (bVar12 & 0x1f);
  uVar34 = uVar34 ^ uVar23;
  uVar24 = (uint)lVar4 >> 0x15;
  uVar36 = uVar38 ^ (uint)(uVar24 == uVar38) * (uVar38 ^ uVar23);
  uVar24 = uVar24 ^ (uint)(uVar24 == uVar38) * (uVar24 & uVar36);
  bVar41 = (uVar24 & 0x400) != 0;
  uVar39 = (ushort)(uVar17 & 0xffff0cff) ^ (ushort)uVar34;
  if (uVar39 != 0) {
    uVar37 = uVar34 & 0xffff | (uint)uVar30 << 0x10;
  }
  uVar23 = (uint)uVar39 & 0xffffff0f;
  sVar14 = (sbyte)uVar23;
  uVar30 = ((ushort)uVar24 & 0xff00 | (ushort)!bVar41) >> sVar14 | (ushort)uVar22 << 0x10 - sVar14;
  uVar36 = uVar36 | uVar37;
  uVar38 = uVar34 & 0xffff0000 | (uint)uVar39 & 0xff0f;
  uVar39 = (ushort)uVar23 >> 1;
  cVar19 = (char)((uint)(ushort)((short)uVar37 * 0x479) >> 8);
  uVar39 = (uVar39 ^ 1 << (uVar39 & 0xf)) & 0xff;
  uVar23 = (uint)(ushort)(uVar39 | (ushort)(SCARRY1(cVar19,'\x01') != (char)(cVar19 + '\x01') < '\0'
                                           ) << 8);
  sVar33 = (short)((uVar22 & 0xffff0000 | (uint)(ushort)((ushort)uVar22 >> 1)) >> 3);
  uVar35 = sVar20 - sVar33;
  uVar24 = (uVar17 & 0xffff0000 | uVar23) << ((byte)uVar39 & 0x1f);
  sVar20 = CONCAT11(0xff,(char)uVar24) + -0x6bae;
  bVar7 = (byte)sVar20;
  bVar12 = bVar7 & 0x1f;
  uVar37 = (uint)uVar30 << 0x20 - bVar12;
  uVar39 = (short)uVar36 * 2;
  uVar36 = uVar36 & 0xffff0000;
  uVar37 = CONCAT22((short)((int)uVar37 >> 0x11),
                    CONCAT11((uVar35 & 0x5bef) != 0,(char)((int)(uVar30 >> bVar12 | uVar37) >> 1)))
           + uVar38;
  bVar7 = bVar7 & 0x1f;
  uVar17 = uVar37 << bVar7 | uVar37 >> 0x20 - bVar7;
  uVar22 = (uVar22 & 0xfff80000) >> 3 | uVar23 << 0x1d;
  uVar23 = uVar22 | (ushort)(sVar33 + 0xcef3);
  uVar37 = uVar24 & 0xffff0000 | (uint)(ushort)(sVar20 + uVar39 + 1);
  if ((int)(uVar23 + 0xf50fb7a8) < 0) {
    uVar37 = uVar36 | uVar39;
  }
  iVar16 = (int)(short)((ushort)uVar17 & 0xff00 | (ushort)(byte)((char)uVar17 + 0x91)) *
           (int)(short)uVar39;
  bVar12 = (byte)(uVar37 >> 0x15);
  bVar7 = bVar12 & 0xf;
  uVar30 = (uVar39 >> bVar7 | uVar39 << 0x10 - bVar7) &
           ((ushort)(uVar37 >> 0x15) | (ushort)(uVar37 << 0xb));
  bVar42 = !CARRY1((byte)iVar16,(byte)((uint)iVar16 >> 0x18));
  uVar39 = ~((ushort)(uVar38 >> 1) & 0xe410) >> 5;
  uVar24 = (uVar34 & 0x10280000) >> 1 | (uint)(ushort)(uVar39 | (ushort)bVar42 << 0xb);
  uVar37 = (uVar37 << 0xb & 0xffff0000 | (uint)CONCAT11(bVar41,bVar12)) + uVar24;
  uVar17 = ((uint)uVar35 - 1 & 0xffff0000 |
           (uint)(ushort)((ushort)((uint)iVar16 >> 0x18) ^ 1 << (uVar39 & 0xf))) >> 1 |
           (uint)(ushort)(short)bVar42 << 0x1f;
  uVar34 = -uVar17;
  if (uVar17 != 0 || uVar34 == 0) {
    uVar23 = uVar22 | uVar37 & 0xffff;
  }
  uVar24 = uVar24 ^ uVar23;
  bVar12 = (byte)uVar37 & 0xf;
  bVar7 = (byte)((int)uVar37 >> 0x19);
  uVar22 = (uVar24 << 0x13 | uVar24 >> 0xe) -
           (uVar23 & 0xffff0000 | (uint)(ushort)((short)uVar23 >> (bVar7 & 0x1f)));
  uVar39 = ~(ushort)uVar22;
  uVar24 = uVar22 & 0xffff0000 | (uint)uVar39;
  bVar7 = bVar7 << 1;
  bVar13 = bVar7 & 0x1f | 1;
  uVar17 = (uVar34 & 0xffff0000 | (uint)(ushort)((ushort)(uVar34 == 0 || 0 < (int)uVar17) << 0xb))
           << bVar13 | uVar24 >> 0x20 - bVar13;
  bVar13 = bVar7 & 0x1f | 1;
  uVar22 = (uVar17 & 0xffff | uVar23 & 0xffff0000) << bVar13 | uVar17 >> 0x20 - bVar13;
  uVar36 = uVar36 | (ushort)(((uVar30 << bVar12 | uVar30 >> 0x10 - bVar12) << 1) >> 0xf |
                            uVar39 << 1);
  uVar30 = (ushort)uVar22;
  uVar22 = uVar22 & 0xffff0000 | (uint)(uVar30 & 0xfeff);
  if ((uVar30 >> 8 & 1) == 0) {
    uVar22 = uVar36;
  }
  uVar17 = uVar17 & 0xffffff00 | (uint)(byte)((byte)uVar17 ^ (byte)(uVar17 >> 8));
  bVar7 = bVar7 & 0x1f | 1;
  uVar17 = uVar17 << bVar7 | uVar17 >> 0x21 - bVar7;
  uVar36 = uVar36 ^ 0xefac5121;
  uVar35 = (ushort)uVar17 & ~(1 << (uVar39 & 0xf));
  uVar30 = (ushort)(uVar22 < 0xb207271e) << 8;
  uVar39 = (ushort)(uVar22 >= 0xb207271e) * (uVar30 ^ uVar35);
  uVar30 = uVar30 ^ uVar39;
  uVar35 = uVar35 * -0x5617;
  bVar7 = (char)uVar35 + 0xbd;
  uVar23 = uVar17 & 0xffff0000 | (uint)uVar35 & 0xffffff00 | (uint)bVar7;
  uVar34 = uVar36 & 0xffff0000 | (uint)(ushort)((short)uVar36 << 1);
  uVar36 = uVar23 * 0x100;
  uVar17 = uVar36 & 0xffff0000;
  if ((short)((uVar36 & 0xffff) * (uVar36 & 0xffff) >> 0x10) == 0) {
    uVar17 = uVar34;
  }
  uVar36 = uVar22 + 0x4df8d8e2 & 0xffff0000;
  uVar35 = (short)(uVar22 + 0x4df8d8e2) * 0x2000 + 0x14b1;
  uVar22 = (int)uVar17 >> 0x1f;
  if ((uVar36 | uVar35) < uVar34) {
    uVar22 = CONCAT22((short)((int)uVar37 >> 0x29),uVar30);
  }
  uVar37 = (uVar17 & 0xffffff00 | (uint)(byte)((char)uVar17 + bVar7 + (uVar34 < (uVar36 | uVar35))))
           & ~(1 << (uVar22 & 0x1f));
  uVar27 = (short)uVar37 + uVar35 + 1;
  uVar37 = uVar37 & 0xffff0000 | (uint)uVar27;
  uVar17 = (uVar24 & 0x3fffc000) << 2;
  iVar16 = uVar23 - uVar37;
  uVar37 = (uint)(uVar23 < uVar37) << 0x10 | uVar22 & 0xffff;
  uVar31 = (ushort)(uVar37 >> 2);
  uVar15 = (uVar31 | (ushort)(uVar37 << 0xf)) >> 0xb;
  bVar13 = (char)((uint)iVar16 >> 8) << 1;
  cVar19 = (char)((uint)(ushort)(uVar15 | uVar31 << 5) >> 8);
  bVar12 = (byte)uVar39;
  uVar37 = (uint)(ushort)((short)cVar19 >> 7) << 0x10;
  uVar23 = (uint)(ushort)(CONCAT11(cVar19,(char)uVar27 - (char)(uVar30 >> 8)) >> (bVar12 & 0x1f));
  uVar34 = uVar23 ^ (uint)(uVar37 == uVar23) * (uVar23 ^ (uVar36 | (uVar35 | 0x80)));
  cVar19 = (char)((uint)uVar30 >> 8);
  uVar22 = (int)((uVar22 & 0xffff0000 |
                 (uint)(ushort)(uVar15 | (uVar31 & 7) << 5 | (ushort)(byte)((uint)uVar27 >> 8) << 8)
                 ) + 0xf7138ba) >> 1;
  uVar22 = uVar22 << (bVar12 & 0x1f) | uVar22 >> 0x20 - (bVar12 & 0x1f);
  uVar24 = uVar34 | 0x3f888fc1;
  bVar7 = (byte)(((uVar30 & 0xff | (ushort)(byte)(cVar19 << 1 | cVar19 < '\0') << 8) >>
                  (bVar12 & 0x1f) | 0x3e21) << 1) & 0x1f;
  uVar36 = ((uVar36 | (uVar35 | 0x80)) << bVar7 | (uVar17 | 0x71a) >> 0x20 - bVar7) * 2 + 1;
  uVar39 = (ushort)uVar24 & 0xfeff;
  uVar38 = uVar24 & 0xffff0000 | (uint)uVar39;
  uVar22 = (uVar17 | (ushort)(0x71a - ((ushort)uVar22 & 0xff00 |
                                      (ushort)(byte)((char)uVar22 * '\x02')))) >> 1;
  uVar1 = (longlong)
          CONCAT31((uint3)(uVar37 >> 8) ^ (uint3)((uint)(uVar37 == uVar23) * (uVar37 & uVar34) >> 8)
                   | (uint3)(byte)(((ushort)(byte)('\0' << (bVar12 & 0x1f)) << 0xf) >> 8),
                   (uVar31 << 5 & 0x400) == 0) * (longlong)(int)uVar38;
  cVar11 = (char)(uVar1 >> 8);
  cVar19 = cVar11 + '\x01';
  if (SCARRY1(cVar11,'\x01') != cVar19 < '\0') {
    uVar22 = uVar36 & 0xffff | (uVar17 >> 0x11) << 0x10;
  }
  uVar30 = (short)uVar22 - uVar39;
  uVar22 = uVar22 & 0xffff0000;
  uVar17 = (uint)(uVar1 >> 0x21);
  uVar37 = 0x1f;
  if ((uVar22 | uVar30) != 0) {
    while ((uVar22 | uVar30) >> uVar37 == 0) {
      uVar37 = uVar37 - 1;
    }
  }
  uVar18 = uVar22 | (ushort)(uVar30 * 0x100 | uVar30 >> 8);
  bVar7 = (byte)(uVar17 >> 8);
  uVar34 = (CONCAT22((short)(uVar1 >> 0x10),CONCAT11(cVar19,(char)uVar1) ^ (uVar39 | 0x6b13)) >> 0xf
           ) + 0x9f8c8e49;
  uVar15 = (ushort)(uVar36 >> 1) | 0x100;
  bVar12 = ((byte)uVar34 ^ (byte)(1 << ((ushort)(byte)uVar17 & 0xf))) - (char)uVar39;
  uVar28 = (int)(uVar17 & 0xffff0000 | (uint)((uVar1 & 0x100000000) != 0) << 0x1f |
                (uint)CONCAT11(bVar7 >> 3 | bVar7 << 5,(byte)uVar17)) >>
           (((byte)uVar37 | 0x5b) & 0x1f);
  uVar17 = uVar37 & 0xff | 0x5b;
  uVar23 = uVar17 & 0xffffff0f;
  uVar30 = (ushort)uVar37 & 0xff00 | (ushort)uVar23;
  sVar14 = (sbyte)uVar23;
  uVar35 = (short)uVar28 << sVar14 | uVar15 >> 0x10 - sVar14;
  bVar42 = CONCAT11(0xa3,bVar12) == uVar35;
  uVar35 = uVar35 ^ (ushort)bVar42 * (uVar35 ^ uVar30);
  bVar7 = (byte)uVar35;
  uVar23 = ((uVar24 & 0xfeff |
             (uint)(ushort)((ushort)((uint)iVar16 >> 0x17) |
                           (ushort)(((uint)(ushort)((CONCAT11(bVar13,(char)iVar16) << 2 |
                                                    (ushort)(bVar13 >> 6)) + 1) << 0x19) >> 0x10))
             << 0x10 | 0x6b13) >> 1) - uVar18;
  bVar29 = (byte)(uVar23 >> 8);
  bVar41 = (uVar17 & 1) != 0;
  uVar30 = uVar30 >> 1;
  bVar12 = (bVar12 ^ bVar42 * (bVar12 & bVar7)) >> 1 | bVar41 << 7;
  uVar17 = uVar34 & 0xffff0000 | (uint)bVar12;
  bVar13 = (byte)((uint)(ushort)(uVar30 | (ushort)bVar41 << 0xf) >> 8);
  uVar30 = uVar30 & 0xff;
  cVar11 = (char)((uint)uVar35 >> 8);
  cVar19 = -cVar11;
  if (cVar19 != '\0' && cVar11 < '\x01') {
    uVar18 = uVar22 | (ushort)(uVar30 | (ushort)(byte)(bVar13 << 4 | bVar13 >> 4) << 8);
  }
  uVar15 = (short)uVar15 >> 5;
  bVar13 = (byte)uVar30 & 0xf;
  uVar31 = uVar15 >> bVar13 | uVar15 << 0x10 - bVar13;
  uVar34 = (uint)(ushort)(uVar30 | (ushort)bVar12 << 8) & 0xfffff0ff;
  bVar12 = (byte)uVar34;
  uVar9 = uVar17 >> (bVar12 & 0x1f) | uVar17 << 0x21 - (bVar12 & 0x1f);
  uVar38 = uVar38 | 0xc000;
  uVar22 = (uint)uVar39 | 0xc000;
  uVar17 = ((uint)uVar35 & 0x3f00 | (uint)(byte)(bVar7 << (bVar12 & 7) | bVar7 >> 8 - (bVar12 & 7)))
           << 0x10 | (uint)(ushort)((ushort)uVar9 >> (bVar12 & 0x1f));
  uVar28 = uVar17 % uVar22 | uVar28 & 0xffff0000;
  uVar28 = uVar28 << (bVar12 & 0x1f) | uVar28 >> 0x21 - (bVar12 & 0x1f);
  uVar35 = CONCAT11(cVar19 << (bVar12 & 0x1f),
                    bVar29 + (byte)uVar23 * '\x02' + CARRY1(bVar29,(byte)uVar23) >> 7);
  iVar16 = (int)(short)uVar18 * 0x94;
  sVar20 = (short)((uint)iVar16 >> 0x10);
  uVar39 = (ushort)(sVar20 != 0 && sVar20 != -1);
  uVar15 = (ushort)uVar34;
  uVar30 = uVar15 * 2 + uVar39;
  if (uVar30 == 0) {
    uVar30 = uVar35;
  }
  if (CARRY2(uVar15,uVar15) || CARRY2(uVar15 * 2,uVar39)) {
    uVar35 = CONCAT11((byte)(uVar28 >> 8) >> (bVar12 & 0x1f),(char)uVar28);
  }
  uVar36 = ((uVar23 & 0xffff0000 | (uint)uVar35) - CONCAT22((ushort)(uVar36 >> 0x11),uVar31)) * 2;
  uVar22 = (int)(short)((ushort)(uVar17 / uVar22) | 0x2c00) * (int)(short)uVar31;
  bVar7 = (byte)(uVar22 >> 0x18);
  iVar10 = ((uVar9 & 0xffff0000 | uVar22 & 0xffff) - uVar38) - (uint)(0x44 < bVar7);
  uVar37 = (uVar37 & 0xffff0000 |
           (uint)(ushort)(uVar30 & 0xff | (ushort)(byte)((byte)(uVar30 >> 8) & (byte)uVar30) << 8))
           - 1;
  uVar39 = (ushort)uVar37;
  uVar17 = -(uVar37 & 0xffff0000 | (uint)(ushort)(uVar39 << 1 | uVar39 >> 0xf));
  uVar37 = ((int)(uVar28 & 0xffff0000 |
                 (uint)(ushort)(CONCAT11(bVar7 + 0xbb,(char)(uVar22 >> 0x10)) >> 1)) >> 1) << 1;
  uVar23 = uVar37 | uVar17 >> 0x1f;
  uVar22 = (int)(short)((short)iVar16 + 0x6226U & 0xfffd) * -0x56a0;
  sVar20 = (short)(uVar22 >> 0x10);
  bVar41 = sVar20 != 0 && sVar20 != -1;
  return (uint)(ushort)(short)(char)((uint)iVar10 >> 0x10) +
         ((uVar36 & 0xffff0000 | 0x1f5) - 1 & 0xffffff00 | (uint)bVar41) +
         (uVar17 & 0xffff0000 |
         (uint)CONCAT11((((byte)(uVar17 >> 8) | 0x57) + 0x1e) - bVar41,(char)uVar17)) +
         (uVar37 & 0xffff0000 | (uint)CONCAT11(uVar23 == 0,(char)uVar23)) +
         (uVar18 & 0xffff0000 | uVar22 & 0xffff) + (uint)(uVar23 == 0) +
         (uVar24 & 0xffff0000 |
         (uint)(ushort)((short)uVar38 +
                       ((CONCAT11((char)(uVar36 >> 8) >> ((byte)uVar30 & 0x1f),(char)uVar36) &
                        0x7f80) << 1 | (ushort)(iVar10 != 0)))) + 0x7bcfe26c;
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


