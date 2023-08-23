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



// WARNING: Removing unreachable block (ram,0x080497cf)
// WARNING: Removing unreachable block (ram,0x08049259)
// WARNING: Removing unreachable block (ram,0x080497f9)
// WARNING: Removing unreachable block (ram,0x08049a23)
// WARNING: Removing unreachable block (ram,0x080492f7)
// WARNING: Removing unreachable block (ram,0x080493a1)
// WARNING: Removing unreachable block (ram,0x080493cb)

int log_size_10_var_000(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined5 uVar4;
  undefined3 uVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  undefined2 uVar14;
  int3 iVar13;
  int iVar12;
  byte bVar15;
  byte bVar16;
  sbyte sVar17;
  char cVar22;
  ushort uVar18;
  byte bVar23;
  short sVar19;
  char cVar24;
  int iVar20;
  undefined2 uVar26;
  uint3 uVar25;
  undefined4 uVar21;
  undefined uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  short sVar31;
  short sVar32;
  char cVar34;
  int iVar33;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ushort uVar39;
  uint uVar40;
  undefined2 uVar42;
  int iVar41;
  ushort uVar43;
  ushort uVar44;
  uint uVar45;
  uint uVar46;
  int iVar47;
  bool bVar48;
  
  for (uVar35 = 0x1f; 0x61803200U >> uVar35 == 0; uVar35 = uVar35 - 1) {
  }
  uVar8 = (ushort)(uVar35 & 0xffff3fff);
  uVar45 = ~(CONCAT22((short)((uVar35 & 0xffff3fff) >> 0x10),
                      CONCAT11((char)(uVar8 % 0xc0),(char)(uVar8 / 0xc0))) >> 1 | 0x80000000);
  bVar6 = (byte)uVar45;
  cVar22 = -bVar6 + -1;
  uVar28 = CONCAT11(cVar22 == '\0' || -1 < (char)bVar6,0x5f);
  iVar10 = CONCAT22(0xa07d,CONCAT11((POPCOUNT(cVar22) & 1U) != 0,0xfe)) + 0x7527d74a +
           (uint)(uVar28 < 0x2e0b);
  uVar43 = (ushort)iVar10;
  uVar8 = uVar43 << 1 | uVar43 >> 0xf;
  uVar36 = CONCAT22((short)((uint)iVar10 >> 0x10),uVar8);
  uVar35 = (((uint)(CONCAT14((short)uVar43 < 0,0x6ec9afe) >> 0x16) | 0x64d7f000) ^ 0x515f) << 1;
  if (-1 < (int)uVar35) {
    uVar35 = 0x49700280;
  }
  sVar9 = (short)(CONCAT22(0xa07d,uVar28 + 0xd1f5) >> 0xc);
  uVar43 = 0x4bce >> (-bVar6 + 0x2a & 0x1f);
  uVar11 = uVar36 + 0x7f7225fd;
  if (uVar11 != 0) {
    uVar35 = CONCAT22((short)(uVar35 >> 0x10),sVar9);
  }
  if (uVar11 == 0 || (int)uVar36 < -0x7f7225fd) {
    uVar11 = CONCAT22((short)(uVar11 >> 0x10),uVar43);
  }
  bVar7 = (byte)uVar8 & 0x1f;
  uVar28 = sVar9 << bVar7 |
           (ushort)(CONCAT14(uVar36 < 0x808dda03,CONCAT22((short)(uVar45 >> 0x10),sVar9)) >>
                   0x21 - bVar7);
  uVar45 = CONCAT22(10,(ushort)(bVar6 >> 1) << 6) & 0xffff00ff;
  uVar18 = (ushort)uVar45;
  uVar36 = (int)(short)uVar8;
  if (CARRY2(uVar28,uVar18) || (ushort)(uVar28 + uVar18) == 0) {
    uVar36 = uVar45;
  }
  uVar30 = (ushort)(uVar35 + 0x7065966e);
  uVar28 = (short)uVar36 + uVar30 + (ushort)(0x8f9a6991 < uVar35);
  uVar8 = (ushort)uVar11;
  uVar39 = (ushort)(uVar11 & 0x49700280);
  uVar18 = uVar28 ^ (ushort)(uVar8 == uVar28) * (uVar28 ^ uVar39);
  uVar14 = (undefined2)(uVar11 >> 0x10);
  uVar8 = uVar8 ^ (ushort)(uVar8 != uVar28) * (uVar8 ^ uVar18);
  bVar6 = (char)uVar8 + (char)(uVar8 >> 8);
  uVar45 = CONCAT22((short)(uVar36 >> 0x10),uVar18) & 0xffff00ff;
  bVar48 = (ushort)CONCAT31((int3)(CONCAT22(uVar14,uVar8) >> 8),bVar6) == uVar39;
  uVar39 = uVar39 ^ (ushort)bVar48 * (uVar39 ^ uVar43);
  uVar36 = uVar45 | 1;
  iVar10 = CONCAT22(uVar14,(short)(char)(bVar6 ^ !bVar48 * (bVar6 ^ (byte)uVar39))) * -0x31e51d83;
  uVar45 = CONCAT22((short)(uVar35 + 0x7065966e >> 0x10),
                    (short)(uVar30 ^ 1 << (uVar43 & 0xf)) >> ((byte)uVar18 & 0x1f)) <<
           ((byte)uVar45 & 0x1f | 1);
  uVar35 = 0x1f;
  if (uVar36 != 0) {
    for (; uVar36 >> uVar35 == 0; uVar35 = uVar35 - 1) {
    }
  }
  uVar11 = CONCAT22((short)((uVar11 & 0x49700280) >> 0x10),uVar39) | 0x20000000;
  if (uVar36 == 0) {
    uVar36 = uVar45;
  }
  bVar6 = (byte)iVar10;
  iVar13 = (int3)((uint)iVar10 >> 8);
  uVar36 = uVar36 & 0xffffff03;
  uVar14 = (undefined2)(uVar36 >> 0x10);
  uVar8 = (ushort)uVar36 >> (sbyte)uVar36 | uVar39 << 0x10 - (sbyte)uVar36;
  uVar1 = CONCAT44((int)iVar13 >> 0x17,CONCAT31(iVar13,bVar6 >> 1 | bVar6 << 7)) &
          0x3fffffffffffffff;
  uVar2 = uVar1 / (uVar35 | 0xc0000000);
  uVar35 = (uint)(uVar1 % (ulonglong)(uVar35 | 0xc0000000));
  iVar10 = 0;
  if (uVar35 != 0) {
    for (; (uVar35 >> iVar10 & 1) == 0; iVar10 = iVar10 + 1) {
    }
  }
  bVar15 = (byte)iVar10;
  uVar36 = uVar45 + CONCAT31((int3)(CONCAT22(uVar14,uVar8) >> 8),bVar15) + 1;
  iVar10 = -(CONCAT31((int3)((uint)iVar10 >> 8),(char)uVar8 << 1 | (uVar2 & 0x100) != 0) &
            0x5a28e0bd);
  uVar28 = (ushort)((uint)iVar10 >> 0x10);
  iVar20 = CONCAT22(uVar14,(ushort)bVar15) << 1;
  iVar10 = (uVar11 + (int)uVar2) - CONCAT22(uVar28,(short)iVar10 + uVar39 + 1);
  uVar43 = (ushort)((uint)iVar20 >> 0x10);
  uVar35 = (uint)(uVar43 >> 8) | ((uVar43 & 0xff) << 0x10) >> 8;
  uVar8 = (ushort)(uVar36 >> 0x10);
  bVar23 = (byte)((uint)iVar20 >> 0x18);
  bVar6 = (bVar23 & 0x1f) % 0x11;
  uVar36 = uVar36 & 0xffff;
  bVar7 = (char)(uVar35 & 0xe2ce2f48) + 0x25;
  iVar20 = (uVar35 | (uint)(ushort)bVar15 << 0x19) + uVar35;
  uVar37 = ((CONCAT22(uVar8,(ushort)(uVar36 << bVar6) | (ushort)(uVar36 >> 0x11 - bVar6)) + -1) *
            0x100 << (bVar23 & 0x1f) | CONCAT22(uVar28,uVar43 >> 8) >> 0x20 - (bVar23 & 0x1f)) <<
           0x16;
  uVar38 = (uVar37 | 0x7793) >> 1;
  bVar15 = (byte)iVar20;
  uVar36 = CONCAT22((short)((uint)iVar10 >> 0x10),(short)iVar10 >> (bVar23 & 0x1f)) >> 1;
  sVar9 = (short)(((uint)uVar28 << 0x10) >> 1);
  uVar46 = CONCAT22((ushort)(uVar11 >> 0x10) | uVar8,(short)uVar36 + 0x788 + sVar9) & 0xaec3d084;
  bVar6 = (bVar15 & 0x1f) % 9;
  uVar35 = (uint)CONCAT11((byte)((char)((uVar35 & 0xe2ce2f48) >> 8) >> 1) >> 1,
                          bVar7 >> bVar6 | bVar7 << 9 - bVar6);
  uVar45 = -CONCAT22((short)((uint)iVar20 >> 0x10),CONCAT11(-1 < (int)uVar46,bVar15));
  uVar40 = ((uVar36 | 0x80000000) - uVar38) - 1;
  uVar1 = (CONCAT44(CONCAT22(uVar28 >> 1,sVar9),uVar35) ^ 0x1000000000) & 0x3fffffffffffffff |
          0xc0000000;
  uVar1 = ((ulonglong)((uint)(uVar1 % (ulonglong)(uVar35 | 0xc0000000)) & 0x3fffffff) << 0x20 |
          uVar1 / (uVar35 | 0xc0000000) & 0xffffffff) / (ulonglong)(uVar45 | 0xc0000000);
  uVar11 = uVar35 * 0x30f78b46 | 0x9576;
  bVar7 = (byte)uVar45;
  bVar23 = (char)(uVar45 >> 8) << (bVar7 & 0x1f);
  uVar43 = (ushort)(uVar37 >> 0x19);
  uVar28 = (ushort)((uVar37 & 0x1fe0000) >> 9);
  uVar18 = (ushort)(uVar38 >> 8) & 0xff | (ushort)((uVar38 << 0x18) >> 0x10);
  bVar6 = (char)(uVar1 >> 8) + bVar7 * '\x02';
  bVar15 = (byte)uVar11;
  uVar45 = CONCAT31((int3)(CONCAT22((short)((uVar45 | 0xc0000000) >> 0x10),CONCAT11(bVar23,bVar7))
                          >> 8),bVar6) ^ 0x40000;
  uVar36 = CONCAT22((short)(uVar1 >> 0x10),(ushort)(byte)uVar1 * (ushort)(byte)uVar1) ^ 0x7dffe825;
  uVar8 = ((ushort)uVar46 >> 1) + 0x2889;
  if ((POPCOUNT(bVar6 & bVar23) & 1U) == 0) {
    uVar45 = CONCAT22((short)(uVar45 >> 0x10),(short)uVar40);
  }
  bVar6 = ((char)(uVar11 >> 8) >> (bVar7 & 0x1f)) + 0xbf;
  uVar45 = uVar45 & 0xffffff0f;
  bVar23 = (byte)uVar45;
  bVar7 = (byte)((ushort)uVar36 >> 1);
  bVar16 = bVar23 ^ (bVar7 == bVar23) * (bVar23 ^ bVar15);
  uVar35 = CONCAT22((short)(uVar35 * 0x30f78b46 >> 0x10),CONCAT11(bVar6,bVar15)) |
           CONCAT22(uVar18,uVar43 | uVar28) & 0xffffffbf;
  uVar30 = ((short)uVar35 + 0x6727) - (ushort)((uVar43 & 1) != 0);
  uVar11 = CONCAT22(uVar18,(short)(uVar43 & 0xffbf | uVar28) >> 1) ^
           1 << ((ushort)(uVar8 << bVar23 | uVar8 >> 0x10 - bVar23) & 0x1f);
  sVar31 = uVar30 + 0x476d;
  uVar26 = (undefined2)(uVar45 >> 0x10);
  uVar37 = (uVar40 >> 1) * -0x2780a259;
  sVar9 = sVar31 * 0x20;
  uVar14 = (undefined2)(uVar11 >> 0x10);
  sVar19 = (short)(CONCAT11(((char)(uVar45 >> 8) + '\x04' + (0xb892 < uVar30)) * '\x02',bVar16) |
                  0x100) >> (bVar16 & 0x1f);
  uVar35 = CONCAT22((short)(uVar35 >> 0x10),
                    CONCAT11((char)((ushort)sVar9 >> 8) << 1,
                             (byte)sVar9 | (byte)((ushort)sVar31 >> 0xb)));
  uVar1 = (ulonglong)
          (CONCAT22((short)(uVar36 >> 0x10),
                    (ushort)(byte)(bVar7 ^ (bVar7 != bVar23) * (bVar7 ^ bVar16)) * (ushort)bVar6) +
          0xea8009) * (ulonglong)CONCAT22(uVar26,sVar19);
  uVar45 = ~((uint)(uVar1 >> 0x20) | 0x10);
  uVar36 = uVar35 + 0x9976fc74;
  bVar7 = (byte)sVar19;
  bVar6 = (bVar7 & 0x1f) % 0x11;
  uVar35 = (uint)(uVar35 < 0x6689038c) << 0x10 | uVar37 & 0xffff;
  uVar18 = (ushort)(uVar35 >> bVar6) | (ushort)(uVar35 << 0x11 - bVar6);
  uVar42 = (undefined2)(uVar37 >> 0x10);
  uVar37 = CONCAT22(uVar42,uVar18);
  bVar6 = (bVar7 & 0x1f) % 0x11;
  uVar35 = (uint)((uVar1 & 0x100) != 0) << 0x10 | uVar36 & 0xffff;
  uVar43 = (ushort)(uVar35 << bVar6) | (ushort)(uVar35 >> 0x11 - bVar6);
  uVar28 = (ushort)(uVar36 >> 0x10);
  uVar8 = (ushort)(byte)uVar1 * (ushort)(byte)(uVar1 >> 8);
  uVar36 = CONCAT22((short)(uVar1 >> 0x10),uVar8);
  uVar18 = (uVar18 + 0xd39e) - (ushort)CARRY4(uVar45,uVar37);
  uVar35 = (uVar45 + uVar37) * 2 | (uint)((short)uVar11 < 0);
  uVar45 = CONCAT31((int3)(CONCAT22(uVar26,CONCAT11(~(byte)((ushort)sVar19 >> 8),bVar7)) >> 8),bVar7
                   ) & 0xffffff0f;
  if ((uVar35 >> (uVar43 & 0x1f) & 1) == 0) {
    uVar35 = CONCAT22(uVar28,uVar43);
  }
  uVar37 = uVar36 >> 2;
  uVar36 = uVar37 | uVar36 << 0x1e;
  uVar45 = CONCAT22((short)(uVar45 >> 0x10),
                    (short)uVar45 << (sbyte)uVar45 | uVar18 >> 0x10 - (sbyte)uVar45) |
           1 << ((ushort)((short)uVar11 << 1 | uVar8 >> 0xf) & 0x1f);
  bVar6 = (char)uVar37 - 1;
  uVar35 = uVar35 ^ 1 << (bVar6 & 0x1f);
  iVar10 = CONCAT31((int3)(uVar36 >> 8),bVar6) << 1;
  uVar30 = ((int)uVar36 < 0) + 0x6374;
  bVar6 = (byte)(CONCAT11(uVar28 >> 0xc != 0,(char)iVar10) >> 2);
  bVar7 = (byte)uVar45;
  uVar37 = CONCAT22(uVar42,uVar18) << (bVar7 & 0x1f) |
           CONCAT22(0x198,(short)uVar45 + -0x5f30) >> 0x20 - (bVar7 & 0x1f);
  bVar23 = (byte)uVar35;
  iVar10 = CONCAT22((short)((uint)iVar10 >> 0x10),CONCAT11(~(byte)((uint)iVar10 >> 8),bVar6)) +
           0x4a81d55c + CONCAT22(uVar14,uVar30) * 2;
  uVar8 = CONCAT11((char)(uVar45 >> 8) + bVar23,bVar7) + (short)iVar10 + 1;
  uVar18 = ((short)uVar45 * 0x2000 | (ushort)uVar35 >> 3) & uVar8;
  cVar22 = (char)uVar8;
  uVar43 = CONCAT11((short)uVar18 < 0,cVar22);
  uVar36 = CONCAT22((short)(uVar45 >> 0x10),uVar43);
  uVar28 = (ushort)(uVar35 >> 0x10);
  sVar9 = CONCAT11((char)((char)(uVar35 >> 8) + '\x01') >> 3,bVar23);
  uVar8 = CONCAT11((byte)((uint)iVar10 >> 8) & bVar23,(char)iVar10 + cVar22);
  if (sVar9 <= (short)uVar30) {
    uVar8 = uVar18;
  }
  iVar12 = CONCAT22(uVar14,uVar30 & uVar43);
  uVar43 = (ushort)((short)uVar37 << (bVar7 & 0x1f)) >> 1;
  iVar20 = 0;
  if (uVar36 != 0) {
    for (; (uVar36 >> iVar20 & 1) == 0; iVar20 = iVar20 + 1) {
    }
  }
  sVar9 = (ushort)(byte)(bVar6 >> 1 | bVar6 << 7) *
          ((short)(CONCAT22(uVar28,sVar9) >> 1) + 0x971eU & 0xff);
  uVar35 = iVar20 + 0xacc684b;
  sVar19 = sVar9 >> 0xf;
  cVar24 = (char)sVar9;
  bVar6 = (char)(uVar8 >> 8) + cVar24;
  if (-1 < (char)bVar6) {
    uVar43 = 0x8531;
  }
  iVar41 = CONCAT22((short)(uVar37 >> 0x10),uVar43);
  uVar4 = CONCAT14(0x9c30797a <
                   CONCAT22((short)(uVar35 >> 0x10),(short)uVar35 >> (cVar22 - 1U & 0x1f)),iVar41);
  iVar33 = CONCAT22((short)((uint)iVar10 >> 0x10),CONCAT11(bVar6 | cVar22 - 1U,(char)uVar8)) * 2 +
           -0x53bedde5;
  uVar25 = (uint3)(uVar36 >> 8) ^ (uint3)((uint)iVar12 >> 8);
  uVar8 = (ushort)(uint)((uint5)uVar4 >> 0xe) ^ 0x86d8;
  bVar48 = (POPCOUNT(uVar8 & 0xff) & 1U) == 0;
  iVar10 = (uint)CONCAT11((POPCOUNT(uVar35 & 0xff) & 1U) != 0,cVar24) *
           (CONCAT31(uVar25,bVar48) & 0xffff);
  iVar20 = CONCAT22(sVar19,(short)iVar10) << 1;
  sVar31 = (short)iVar20;
  sVar9 = (short)((uint)iVar10 >> 0x10);
  if (-1 < sVar19) {
    sVar9 = sVar31;
  }
  uVar43 = (ushort)((uint)iVar20 >> 0x10);
  sVar31 = sVar31 + -1;
  uVar18 = CONCAT11((byte)((uint)iVar33 >> 8) >> 4,(char)iVar33);
  iVar10 = CONCAT22(uVar28 >> 1,sVar9) << 1;
  cVar22 = (char)((uint)iVar10 >> 8);
  uVar26 = (undefined2)((uint)iVar10 >> 0x10);
  iVar12 = iVar12 << 1;
  uVar30 = (ushort)iVar12 | 1;
  uVar14 = (undefined2)(uVar25 >> 8);
  uVar35 = CONCAT22(uVar43,CONCAT11((char)((ushort)sVar31 >> 8) << 1,(char)sVar31)) >> 1;
  uVar28 = CONCAT11(cVar22 << 1 | cVar22 < '\0',(char)iVar10) | uVar18;
  uVar36 = CONCAT22((ushort)((uint5)uVar4 >> 0x1e) | (ushort)((uint)(iVar41 << 0x13) >> 0x10),
                    (uVar8 + 0x8b0c) - (ushort)((int)uVar11 < 0)) + uVar35 + 1;
  uVar8 = (short)CONCAT31((int3)(CONCAT22(uVar14,CONCAT11((POPCOUNT((uVar30 >> bVar48 |
                                                                    uVar30 << 0x10 - bVar48) +
                                                                    0xbd49 & 0xff) & 1U) != 0,bVar48
                                                         )) >> 8),bVar48 << 7) + 0x75db;
  uVar45 = uVar36 ^ 1 << (uVar8 & 0x1f);
  bVar6 = (byte)uVar8;
  bVar7 = bVar6 << 1 | bVar6 >> 7;
  uVar21 = CONCAT31((int3)(CONCAT22(uVar14,uVar8) >> 8),(char)uVar28);
  iVar10 = (short)((ushort)(byte)(((char)uVar35 + -0x69) - ((uVar36 >> (uVar8 & 0x1f) & 1) != 0)) <<
                  0xe) * -0x545f;
  sVar9 = (short)iVar10;
  uVar35 = CONCAT22((short)((uint)iVar12 >> 0x10),sVar9);
  if (sVar9 != iVar10) {
    uVar21 = CONCAT22(uVar14,(short)uVar45);
  }
  uVar11 = CONCAT22((short)((uint)iVar33 >> 0x10),uVar18) << (bVar6 & 0x1f) | 1 << (bVar7 & 0x1f);
  uVar36 = CONCAT22((short)((uint)uVar21 >> 0x10),(ushort)uVar21 >> ((byte)uVar21 & 0x1f));
  if (CONCAT22(uVar26,-(short)CONCAT31((int3)(CONCAT22(uVar26,uVar28) >> 8),bVar7)) == uVar45) {
    uVar36 = uVar45;
  }
  iVar20 = CONCAT31((uint3)(CONCAT22((short)(uVar11 >> 0x10),-(short)uVar11) >> 0xc),1);
  uVar36 = CONCAT22((short)(uVar36 >> 0x10),
                    CONCAT11((-1 < (int)(((uint)CONCAT21(uVar43 >> 1,'\0' << ((byte)uVar36 & 0x1f))
                                         << 8) >> 1)) << 1,(byte)uVar36 - 1));
  iVar10 = 0;
  if (uVar36 != 0) {
    for (; (uVar36 >> iVar10 & 1) == 0; iVar10 = iVar10 + 1) {
    }
  }
  iVar12 = (uVar35 & 0x74f38578) + 0x39c48794;
  uVar4 = CONCAT14(CARRY4(uVar35,uVar35),iVar20);
  uVar28 = (ushort)((uint)(iVar20 << 0x16) >> 0x10) | (ushort)((uint5)uVar4 >> 0x1b);
  uVar35 = CONCAT22((short)((uint)iVar12 >> 0x10),(short)(char)iVar12);
  uVar45 = (0xd0d92a49U - iVar12 & 0xffffa53a) + 0x586c6ed8;
  bVar6 = (byte)((uint)iVar10 >> 8);
  bVar6 = bVar6 >> 2 | bVar6 << 6;
  uVar8 = (short)(char)iVar12 | 0x2a4a;
  iVar12 = CONCAT22(0xd0d9,CONCAT11((char)iVar10,(char)uVar8));
  uVar27 = (undefined)(uint)((uint5)uVar4 >> 0xb);
  iVar33 = CONCAT22(uVar28,CONCAT11(0xc1,uVar27));
  iVar20 = iVar12 + iVar33;
  uVar36 = iVar20 + 1;
  if (SCARRY4(iVar12,iVar33) != SCARRY4(iVar20,1)) {
    uVar36 = CONCAT22(uVar43 >> 2,CONCAT11(bVar6,(char)iVar10));
  }
  uVar37 = CONCAT11(bVar6,(char)(uVar8 >> 8)) & 0xffffffbf;
  bVar6 = (byte)uVar36 >> 1;
  uVar38 = CONCAT22(uVar28,CONCAT11((uVar36 & 1) != 0,uVar27)) | 0x8200;
  uVar11 = uVar38;
  if (uVar35 != uVar45) {
    uVar35 = uVar45;
    uVar11 = uVar45;
  }
  bVar23 = (byte)(uVar37 >> 8);
  bVar7 = (bVar6 & 0x1f) % 9;
  cVar22 = (char)(uVar36 >> 8);
  cVar22 = ((cVar22 << bVar7 | (byte)(CONCAT11(bVar23 < 0xc1,cVar22) >> 9 - bVar7)) - 9) -
           (CONCAT11((byte)(bVar23 + 0x3f) >> 1,(char)uVar37) < 0xdd04);
  uVar28 = CONCAT11(cVar22,bVar6) | 0x80;
  uVar38 = uVar38 - 1;
  iVar10 = CONCAT22((short)(uVar35 >> 0x10),CONCAT11((char)(uVar35 >> 8) << 1,(char)uVar35));
  uVar30 = (ushort)(uVar11 >> 0x10);
  uVar11 = CONCAT22(uVar30,(short)uVar11 + uVar28);
  uVar35 = uVar38 >> 1;
  uVar8 = (ushort)(uVar38 >> 0x11);
  uVar18 = (ushort)uVar35;
  lVar3 = (longlong)iVar10 * (longlong)iVar10;
  sVar9 = (short)lVar3 << (bVar6 & 0x1f);
  uVar45 = CONCAT31((int3)(CONCAT22((short)((ulonglong)lVar3 >> 0x10),sVar9) >> 8),(char)sVar9 << 1)
           | 1;
  cVar24 = (char)uVar35;
  uVar35 = CONCAT31((int3)(CONCAT22(uVar8,uVar18) >> 8),cVar24 * '\x02') | 0x80004000;
  if (SCARRY1(cVar24,cVar24) != SCARRY1(cVar24 * '\x02','\0')) {
    uVar35 = CONCAT22(uVar8,(short)uVar35) | 0x80000000;
  }
  uVar37 = CONCAT22(uVar43 >> 2,(ushort)-(ushort)((uVar28 >> ((uVar18 & 0xf00) >> 8) & 1) != 0) >> 1
                   );
  bVar48 = uVar45 < uVar37;
  if (uVar45 != uVar37) {
    uVar45 = uVar37;
  }
  uVar37 = (((uint)(ushort)((ulonglong)lVar3 >> 0x30) << 0x10) << (bVar6 & 0x1f)) + 0x4d0d06f4 +
           (uint)bVar48;
  uVar37 = uVar37 & ~(1 << (uVar37 & 0x1f));
  uVar11 = CONCAT22(uVar30 >> 7 | (ushort)((uVar11 << 0x19) >> 0x10),(short)(uVar11 >> 7) >> 1);
  uVar36 = CONCAT22((short)(uVar36 >> 0x10),CONCAT11(cVar22 - (char)(uVar37 >> 8),bVar6)) | 0x80;
  if ((int)uVar37 < 0x3864ea67) {
    uVar36 = uVar11;
  }
  bVar7 = (byte)uVar36;
  uVar8 = (ushort)uVar37 & 0xff11;
  bVar48 = 0x3864ea66 >= (int)uVar37;
  iVar10 = (uVar35 >> 1) + 0x1268efb0;
  uVar37 = CONCAT31((int3)(uVar45 >> 8),0x3864ea66 < (int)uVar37) + 1U >> 1;
  bVar23 = (byte)((ushort)((short)CONCAT31((int3)(uVar36 >> 8),bVar7 << 5 | bVar7 >> 3) + 0x4a68) >>
                 8);
  bVar6 = bVar23 + 0x87;
  uVar5 = CONCAT21((short)(uVar36 >> 0x10),bVar6 - bVar48);
  iVar47 = (((uVar11 << (bVar7 & 0x1f) | (uVar35 >> 1) >> 0x20 - (bVar7 & 0x1f)) >> 1) + 0xaba5dd44)
           - (uint)(bVar23 < 0x79 || bVar6 < bVar48);
  uVar36 = CONCAT31((int3)((uint)iVar10 >> 8),(char)iVar10 >> 0xb) + 0xefa54073;
  bVar48 = (uVar37 & 0x100) == 0;
  iVar10 = CONCAT31(uVar5,(bVar48 - (char)uVar36) + -1);
  iVar20 = ((uVar37 & 0xffff) - iVar10) + -1;
  uVar28 = (ushort)iVar47;
  uVar43 = (ushort)iVar10 | uVar28;
  bVar7 = (byte)uVar43;
  iVar33 = -CONCAT22((short)((uint)iVar20 >> 0x10),-(short)iVar20);
  iVar41 = -((CONCAT22((short)(uVar45 >> 0x10),uVar8 << 1 | (ushort)((short)uVar8 < 0)) |
             CONCAT31(uVar5,bVar48)) << 1 | 1);
  bVar6 = bVar7 & 0xf;
  uVar8 = (ushort)((int)(uVar37 | 0x80000000) >> (bVar7 & 0x1f));
  iVar12 = (int)(uVar36 | 0xa5) >> 4;
  iVar20 = (int)(short)(uVar8 << bVar6 | uVar8 >> 0x10 - bVar6) * (int)(short)uVar28;
  iVar10 = CONCAT22(0x36bc,(short)((uint)iVar20 >> 0x10)) + -0x2004e62d;
  uVar35 = iVar47 - iVar12;
  uVar8 = uVar43 >> 1 & 0xff0f;
  sVar17 = (sbyte)uVar8;
  uVar8 = (uVar8 | 0x8000) >> sVar17 | (short)iVar10 << 0x10 - sVar17;
  bVar7 = (byte)((ushort)iVar20 >> 1);
  bVar23 = bVar7 + 0x89;
  bVar6 = ((byte)uVar8 & 0x1f) % 9;
  cVar22 = (char)(uVar8 >> 8);
  bVar6 = (byte)(CONCAT11(bVar7 < 0x77,cVar22) >> bVar6) | cVar22 << 9 - bVar6;
  cVar24 = (char)iVar12;
  cVar22 = bVar23 - bVar6;
  if (bVar6 <= bVar23 && cVar22 != '\0') {
    iVar33 = CONCAT22((short)((uint)iVar33 >> 0x10),(ushort)uVar35);
  }
  iVar20 = (short)iVar41 * -0x5ddd;
  bVar48 = (short)iVar20 == iVar20;
  uVar8 = (ushort)(iVar33 << 0xd) | (ushort)((uint)iVar33 >> 0x13);
  uVar28 = uVar8 << bVar48 | uVar8 >> 0x10 - bVar48;
  uVar45 = (uint)CONCAT11(!SCARRY1(cVar24,';'),cVar22) * (uVar35 & 0xffff);
  uVar43 = (ushort)(uVar45 >> 0x10);
  uVar45 = uVar45 & 0xffff;
  bVar7 = (char)iVar20 * '~';
  uVar8 = uVar28 + uVar43;
  bVar6 = (bVar7 & 0x1f) % 9;
  cVar22 = (char)(uVar45 >> 8);
  bVar6 = (byte)(CONCAT11(CARRY2(uVar28,uVar43),cVar22) >> bVar6) | cVar22 << 9 - bVar6;
  uVar11 = CONCAT22((short)((uint)iVar41 >> 0x10),(short)iVar20) & 0xff7fffff;
  sVar9 = (short)(uVar36 >> 0x10);
  sVar31 = sVar9 >> 4;
  bVar23 = (char)(int3)((int)uVar36 >> 0xc) + bVar6 + 1;
  bVar7 = bVar7 & 7;
  bVar23 = bVar23 >> bVar7 | bVar23 << 8 - bVar7;
  sVar19 = CONCAT11(bVar23,cVar24 + ';');
  bVar7 = (byte)(uVar28 >> 9);
  uVar36 = CONCAT11(bVar6,(char)uVar45) ^ 0xcee631b3;
  bVar48 = (uVar36 & 0x100) != 0;
  uVar36 = (uint)CONCAT11((byte)(uVar36 >> 8) >> 1,(char)uVar36);
  if (!bVar48) {
    uVar36 = CONCAT22(sVar31,sVar19);
  }
  bVar6 = bVar7 + 0x54;
  uVar45 = (uint)(bVar7 < 0xac || bVar6 < bVar48) << 0x10 | uVar36 & 0xffff;
  uVar36 = uVar8 | 0xc000;
  uVar45 = (CONCAT11(bVar6 - bVar48,(char)uVar28) & 0x3fff) << 0x10 |
           (uint)(ushort)((ushort)(uVar45 >> 0xe) | (ushort)(uVar45 << 3));
  bVar23 = bVar23 >> 1;
  uVar43 = sVar19 << 9 | (ushort)uVar35 >> 7;
  bVar6 = (byte)(uVar45 % uVar36) | bVar23;
  uVar36 = CONCAT31((uint3)(byte)((char)(uVar45 / uVar36 >> 8) + 1),0x16);
  if ((char)bVar6 < '\0') {
    uVar36 = uVar35;
  }
  uVar45 = CONCAT22((short)((uint)(iVar33 << 0xd) >> 0x10),uVar8) | 0xc000;
  if (-1 < (int)uVar11) {
    uVar45 = uVar11 << 1 | (uint)((byte)((ushort)((bVar6 ^ uVar43) << 1) >> 8) & 1);
  }
  uVar36 = CONCAT22((short)((uint)iVar10 >> 0x10),
                    (short)((uint)(ushort)((ushort)uVar36 << 4 | (ushort)uVar36 >> 0xc) *
                            (uVar43 & 0x4ae716be) >> 0x10)) >> 10;
  sVar19 = (short)(uVar35 * -0x34da18cc);
  uVar18 = (ushort)(uVar35 * -0x34da18cc >> 0x10);
  uVar28 = sVar19 << 1 | (ushort)(sVar19 < 0);
  iVar10 = -(uint)(ushort)((short)uVar36 + (short)CONCAT21(sVar31,bVar23) * 0x100);
  uVar35 = uVar43 & 0x4ae7143a ^ uVar36 & 0xffff;
  bVar6 = (char)uVar36 << ((byte)uVar35 & 0x1f);
  uVar35 = uVar35 & 0x4b09527c;
  uVar8 = (short)((ushort)uVar45 | 1) >> 1;
  if (uVar35 != 0) {
    uVar8 = uVar28;
  }
  uVar35 = uVar35 - 0xb805;
  uVar11 = 0x82d9;
  iVar10 = (short)((CONCAT11((char)((uint)iVar10 >> 8) << 1,(char)iVar10) & 0xb80 | 0x100) << 4) *
           0x3728;
  uVar43 = (ushort)iVar10;
  if ((short)uVar43 == iVar10) {
    uVar11 = uVar35 & 0xffff;
  }
  uVar30 = (ushort)((char)bVar6 * -0x80) >> 8;
  iVar20 = CONCAT22((short)(uVar45 >> 0x10),uVar8 & uVar28);
  iVar10 = iVar20 << 1;
  sVar32 = (short)CONCAT31((int3)(CONCAT22(sVar31,(short)uVar36) >> 8),bVar6 >> 1 | bVar6 << 7);
  sVar19 = sVar32 + 1;
  if (sVar19 == 0 || SCARRY2(sVar32,1) != sVar19 < 0) {
    uVar43 = uVar30;
  }
  uVar39 = sVar19 * 2 | (ushort)iVar10 >> 0xf;
  cVar22 = (char)uVar39;
  bVar6 = (byte)(CONCAT11(sVar19 < 0,cVar22) >> 6);
  uVar35 = CONCAT31((int3)(uVar35 >> 8),1) & 0xab284dd1;
  sVar17 = (sbyte)uVar35;
  iVar12 = (ushort)(uVar43 << 1) - 1;
  uVar43 = (uVar30 ^ 0x800) + 0xc349;
  iVar33 = CONCAT31((int3)(CONCAT22(sVar31,uVar39) >> 8),
                    (byte)(bVar6 | cVar22 << 3) >> 2 | bVar6 << 6) >> 1;
  uVar44 = ((short)uVar28 >> sVar17) + 1;
  uVar29 = (ushort)iVar12;
  cVar24 = (char)(uVar43 >> 8);
  cVar34 = (char)((uint)iVar33 >> 8);
  cVar22 = cVar34 + cVar24;
  uVar39 = CONCAT11(cVar22 + (uVar29 < 0x58c4),(char)iVar33);
  uVar30 = uVar43;
  if (SCARRY1(cVar34,cVar24) != SCARRY1(cVar22,uVar29 < 0x58c4)) {
    uVar39 = uVar29 + 0xa73c;
    uVar30 = uVar29 + 0xa73c;
  }
  uVar29 = (byte)((uint)iVar10 >> 0x18) + 0xd377;
  uVar8 = (ushort)((((uVar8 & uVar28) & 0x7f80) << 1) >> 8) |
          (ushort)((uint)(iVar20 << 0x19) >> 0x10);
  if (0x4fae < uVar30 || (ushort)(uVar30 + 0xb051) == 0) {
    uVar29 = uVar44;
    uVar8 = uVar18;
  }
  sVar19 = (short)(uVar35 >> 0x10);
  uVar35 = CONCAT31((int3)(CONCAT22(sVar9 >> 5,uVar39) >> 8),(byte)uVar39 >> (sVar17 + 0x84U & 0x1f)
                   );
  bVar7 = (byte)(uVar30 + 0xb051);
  uVar36 = CONCAT22(sVar19,(short)(char)bVar7);
  iVar10 = uVar35 + uVar36;
  uVar35 = (uint)(CONCAT14(CARRY4(uVar35,uVar36),iVar10) >> 0x11);
  uVar45 = uVar35 | iVar10 * 0x10000;
  iVar13 = (int3)(uVar36 >> 8);
  bVar6 = bVar7 | (byte)uVar43;
  uVar11 = (uVar11 << 1 & 0xff0000) >> 8 | (uVar11 << 1 & 0xff00) << 8 | uVar11 << 0x19;
  uVar36 = (uint)CONCAT11(cVar24 >> (bVar7 & 0x1f),(byte)uVar43) << (bVar6 & 0x1f);
  if (uVar36 != uVar11) {
    uVar36 = uVar11;
  }
  uVar37 = CONCAT22((short)(uVar36 >> 0x10),CONCAT11((short)(ushort)uVar35 < -0x26b,(char)uVar36));
  uVar11 = uVar11 - 1;
  if (0xfd93 < (ushort)uVar35) {
    uVar11 = uVar45;
  }
  bVar7 = (byte)(CONCAT31(iVar13,bVar6) >> 1);
  bVar6 = bVar7 & 0x1f;
  uVar30 = (ushort)(((uVar11 << 1) >> bVar6) >> 0x10) | (ushort)((uVar37 << 0x20 - bVar6) >> 0x10);
  uVar37 = ~uVar37;
  bVar6 = (byte)uVar37;
  uVar11 = CONCAT22(uVar8,uVar29) ^ 0x1f82;
  uVar36 = ~CONCAT31((int3)(CONCAT22((short)((uint)iVar12 >> 0x10),(short)uVar36 >> 0xf) >> 8),
                     (char)(uVar36 >> 8) >> 7 & bVar6);
  uVar14 = (undefined2)(uVar36 >> 0x10);
  sVar9 = (short)CONCAT31((int3)(CONCAT22(uVar14,CONCAT11((byte)(uVar36 >> 8) & (byte)(uVar35 >> 8),
                                                          (byte)uVar36)) >> 8),
                          (byte)uVar36 & (byte)(uVar37 >> 8)) * 0x2c58;
  iVar10 = CONCAT22(uVar18,uVar44 | uVar43) << 6;
  bVar23 = (byte)sVar9;
  iVar20 = uVar45 + 0xa969ccd2;
  uVar35 = uVar11 | 0x2000000;
  uVar18 = (((ushort)iVar10 | (ushort)(uVar37 >> 0x1a)) + 0x6b4) -
           (ushort)CARRY1(bVar7 * '\x10',bVar6);
  uVar36 = CONCAT22((short)((uint)iVar10 >> 0x10),uVar18);
  sVar31 = (short)iVar20;
  uVar8 = sVar31 << 1;
  uVar43 = (ushort)(sVar31 < 0);
  uVar28 = (ushort)(char)((byte)(iVar13 >> 1) ^ bVar23);
  iVar10 = 0;
  if (uVar36 != 0) {
    for (; (uVar36 >> iVar10 & 1) == 0; iVar10 = iVar10 + 1) {
    }
  }
  uVar38 = CONCAT22((short)((uint)iVar20 >> 0x10),uVar8 | uVar43) & 0xffff2911;
  uVar8 = CONCAT11(((POPCOUNT(uVar8 & 0x11 | uVar43) & 1U) == 0) << 2,(char)iVar10);
  iVar20 = (uVar8 & 0x242b) * 2 * (uint)uVar18;
  uVar45 = CONCAT22((short)((uint)(CONCAT22((short)((uint)iVar10 >> 0x10),uVar8) << 1) >> 0x10),
                    (short)iVar20);
  uVar8 = CONCAT11((short)((uint)iVar20 >> 0x10) == 0,(char)((uint)iVar20 >> 0x10));
  if (uVar45 != (uVar36 & 0x7fffffff)) {
    uVar45 = uVar36 & 0x7fffffff;
  }
  bVar48 = CARRY2(uVar28,uVar8);
  sVar31 = uVar28 + uVar8;
  sVar32 = sVar31;
  if (bVar48 || sVar31 == 0) {
    sVar32 = (short)(char)uVar45 * (short)(char)(uVar38 >> 8);
  }
  if (!bVar48 && sVar31 != 0) {
    uVar8 = (ushort)uVar45;
  }
  bVar7 = (byte)(uVar30 >> 0xe);
  uVar38 = CONCAT22((short)(uVar38 >> 0x10),
                    (short)uVar38 +
                    (ushort)(CONCAT31((int3)(CONCAT22(uVar14,sVar9) >> 8),bVar23 + 0x71) +
                             CONCAT31((int3)(uVar37 >> 8),bVar6 + 0x81) + 1 < 0)) >> bVar7;
  uVar37 = ((uint)(ushort)(sVar19 >> 1) << 0x12 | (uint)(uVar30 >> 0xe)) << bVar7;
  bVar7 = (byte)(uVar37 >> 8) | 0xc0;
  uVar36 = CONCAT22(0x1c3a,(short)(((uint)(uVar8 & 0x3fff) << 0x10 | 0x753f) /
                                  (uVar37 & 0xffff | 0xc000)));
  bVar6 = (byte)uVar37 & 7;
  uVar14 = (undefined2)(uVar37 >> 0x10);
  uVar8 = CONCAT11(bVar7 << bVar6 | bVar7 >> 8 - bVar6,(byte)uVar37);
  iVar10 = 0;
  if (uVar36 != 0) {
    for (; (uVar36 >> iVar10 & 1) == 0; iVar10 = iVar10 + 1) {
    }
  }
  uVar29 = (ushort)(uVar45 + 1 >> 0x10);
  uVar39 = (short)(uVar45 + 1) << 1 | (ushort)iVar10 >> 0xf;
  uVar43 = uVar8 >> 1;
  uVar18 = (ushort)(CONCAT22(uVar30,sVar32) >> 4);
  uVar28 = uVar18 * -0x7b4f - (ushort)(((ushort)iVar10 >> 10 & 1) != 0);
  uVar8 = (ushort)CONCAT31((int3)(CONCAT22(uVar14,uVar43 | uVar8 << 0xf) >> 8),(char)uVar43 + '\x10'
                          );
  bVar7 = (byte)((short)(uVar29 & 0x1c3a) >> 6);
  uVar18 = uVar18 << 1 | uVar18 >> 0xf;
  uVar43 = uVar8 >> 1;
  bVar6 = ((byte)uVar43 & 0x1f) % 9;
  sVar9 = (short)CONCAT31(0xd0,(bVar7 | 0xa5) << bVar6 |
                               (byte)((ushort)(CONCAT11((uVar38 & 0x100) != 0,bVar7) | 0xa5) >>
                                     9 - bVar6)) * uVar39;
  uVar8 = uVar8 >> 4;
  uVar43 = uVar43 << 0xd | uVar8;
  iVar20 = (int)sVar9 * (int)(short)uVar43;
  uVar45 = CONCAT22(uVar30 >> 4 | (ushort)(((uVar35 >> 1) << 0x1c) >> 0x10),uVar18) |
           1 << (uVar18 & 0x1f);
  bVar6 = (byte)uVar8;
  cVar24 = (char)(uVar43 >> 8) >> (bVar6 & 0x1f);
  uVar27 = (undefined)((uint)iVar20 >> 0x10);
  uVar35 = CONCAT22((ushort)(uVar35 >> 0x11) | (ushort)(((uint)((uVar11 & 1) != 0) << 0x1f) >> 0x10)
                    ,uVar28 * 0x100) | CONCAT22(uVar14,CONCAT11(cVar24,bVar6));
  uVar36 = CONCAT22((short)((uint)iVar10 >> 0x10),CONCAT11((byte)sVar9,uVar27)) & 0xffff01ff;
  cVar22 = (char)(uVar36 >> 8) + -0x56;
  uVar35 = CONCAT22((short)(uVar35 >> 0x10),
                    CONCAT11(~(byte)((uint)iVar20 >> 0x18),uVar27) + -0x6c63 + (short)uVar35 * 2);
  if (cVar22 < '\0') {
    uVar35 = uVar45;
  }
  uVar11 = CONCAT31((int3)(CONCAT22((short)uVar28 >> 0xf,uVar28 * 0x1000 | uVar28 >> 4) >> 8),
                    ((char)(uVar28 >> 4) >> (bVar6 & 0x1f)) + 'D');
  sVar19 = -CONCAT11(cVar24 + 'A',bVar6);
  uVar37 = uVar35 + 0xfcf2efc3 ^
           CONCAT22((short)(uVar36 >> 0x10),CONCAT11(cVar22,(char)uVar36)) >> (bVar6 & 0x1f);
  lVar3 = (ulonglong)((uVar11 >> 2 | uVar11 << 0x1e) * CONCAT22(uVar14,sVar19)) * (ulonglong)uVar37;
  uVar35 = (uint)((ulonglong)lVar3 >> 0x21);
  uVar36 = uVar35 | (uint)((char)lVar3 < '\0') << 0x1f;
  uVar8 = (ushort)((uint)(CONCAT22(uVar29,uVar39) << 2) >> 0x10);
  iVar10 = (uVar45 ^ 0x800) + 1;
  uVar25 = (uint3)(uVar36 >> 0x1a) | (uint3)((uVar35 << 0xe) >> 8);
  bVar6 = (byte)(uVar36 >> 0x12);
  bVar6 = bVar6 >> 4 | bVar6 << 4;
  uVar18 = (short)CONCAT31(uVar25,bVar6) + 0x73 + (short)uVar37 * 4;
  uVar28 = (ushort)((int)((CONCAT31((int3)(CONCAT22((short)(uVar38 >> 0x10),sVar9) >> 8),
                                    (byte)sVar9 >> 1) + -0x5ce99fd9) * 4 | uVar45 >> 0x1e) >> 1);
  cVar22 = (char)((ushort)sVar19 >> 8) + '%';
  uVar43 = CONCAT11(cVar22,(char)sVar19 + 'f');
  if ((POPCOUNT(cVar22) & 1U) == 0) {
    uVar28 = uVar43 & 0xfffe;
  }
  uVar35 = CONCAT22(uVar8,(short)(char)uVar37 << 4 |
                          (ushort)(CONCAT12((uVar28 >> 1 & 1) != 0,(short)(char)uVar37) >> 0xd));
  uVar36 = CONCAT31(uVar25,bVar6) | 0xc0;
  uVar28 = (ushort)(byte)uVar36;
  uVar28 = CONCAT11((char)(0xdb % uVar28),(char)(0xdb / uVar28));
  uVar30 = (ushort)uVar36;
  if ((short)uVar30 < (short)uVar28) {
    uVar37 = CONCAT22((short)(uVar37 >> 0x10),uVar43) & 0xfffffffe;
  }
  bVar48 = iVar10 < 0;
  iVar10 = CONCAT22((short)((uint)iVar10 >> 0x10),uVar18) << 1;
  uVar43 = (ushort)iVar10 | 1;
  uVar39 = (ushort)((uint)iVar10 >> 0x10);
  uVar43 = uVar43 >> bVar48 | uVar43 << 0x10 - bVar48;
  sVar9 = (short)(CONCAT22(uVar39,uVar43) >> 0xc) >> bVar48;
  sVar19 = uVar43 + 1;
  sVar9 = sVar9 * sVar9;
  bVar6 = (byte)((ushort)sVar9 >> 8);
  iVar10 = (CONCAT22(uVar39,sVar19) - CONCAT22(uVar14,CONCAT11(sVar19 < 0,bVar48))) * 0x4aa711b;
  uVar37 = uVar37 + 1;
  uVar36 = CONCAT22((ushort)(((uint)(ushort)(uVar28 ^ (ushort)(uVar28 != uVar30) *
                                                      (uVar28 ^ uVar30 ^ (ushort)(uVar28 == uVar30)
                                                                         * (uVar30 ^ uVar18))) <<
                             0x14) >> 0x10) | uVar39 >> 0xc,
                    CONCAT11(bVar6 << 7 | bVar6 >> 1,(char)sVar9)) | 0xa00413c6 |
           1 << (uVar37 & 0x1f);
  uVar14 = (undefined2)(uVar37 + uVar36 >> 0x10);
  bVar7 = (byte)iVar10;
  bVar6 = (char)~(byte)uVar36 >> (bVar7 & 0x1f);
  uVar43 = (ushort)(uVar35 >> 0xe);
  return CONCAT31((int3)(uVar36 >> 8),bVar6 >> (bVar7 & 7) | bVar6 << 8 - (bVar7 & 7)) +
         CONCAT22(uVar14,CONCAT11((char)((uint)iVar10 >> 8) << (bVar7 & 0x1f),bVar7)) +
         CONCAT22(uVar14,(short)iVar10) + uVar35 * 2 + uVar37 +
         CONCAT22(uVar8 >> 0xe,uVar43 << (bVar7 & 0xf) | uVar43 >> 0x10 - (bVar7 & 0xf)) * 0x8000 +
         0xc76859e;
}



// WARNING: Removing unreachable block (ram,0x0804a19a)
// WARNING: Removing unreachable block (ram,0x08049fa2)
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
  byte bVar6;
  uint uVar7;
  uint3 uVar9;
  int iVar8;
  undefined2 uVar10;
  undefined2 uVar11;
  byte bVar12;
  byte bVar13;
  sbyte sVar14;
  ushort uVar15;
  short sVar16;
  undefined2 uVar17;
  byte bVar21;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  ushort uVar22;
  char cVar23;
  ushort uVar24;
  ushort uVar25;
  byte bVar28;
  int iVar26;
  ushort uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  short sVar34;
  short sVar35;
  ushort uVar36;
  ushort uVar37;
  int iVar38;
  uint uVar39;
  uint uVar40;
  int iVar41;
  bool bVar42;
  undefined4 uVar27;
  
  for (iVar26 = 0x1f; 0xdbf60a3U >> iVar26 == 0; iVar26 = iVar26 + -1) {
  }
  uVar30 = iVar26 << 1 | 1;
  uVar4 = CONCAT14(0x31a9a6e1 < uVar30,0x8f5d012c) >> 3;
  uVar10 = (undefined2)(uVar4 >> 0x10);
  uVar24 = (ushort)uVar4;
  uVar19 = CONCAT31(0xa51e03,(char)uVar30);
  uVar15 = (ushort)(0x31a9a6e1 - uVar30);
  uVar36 = (ushort)uVar19;
  bVar42 = CARRY2(uVar15,uVar36);
  uVar15 = uVar15 + uVar36;
  if (!bVar42 && uVar15 != 0) {
    uVar19 = iVar26 << 1 & 0xffffff00;
  }
  uVar31 = CONCAT22(0x8f5d,bVar42 + 0xc75d) - CONCAT22(uVar10,uVar24 << 0xe | uVar24 >> 2);
  iVar26 = CONCAT22(0xffff,CONCAT11(-1 << ((byte)uVar15 & 0x1f),0xff)) << 7;
  uVar7 = CONCAT22(uVar10,0xb13d) & 0xffff72ff;
  bVar12 = (byte)(uVar15 >> 1);
  bVar6 = bVar12 & 0x1f;
  uVar31 = uVar31 >> bVar6 | uVar31 << 0x21 - bVar6;
  sVar34 = (short)CONCAT31((int3)((uint)iVar26 >> 8),(char)iVar26 >> ((byte)uVar15 & 0x1f));
  uVar10 = (undefined2)((uint)iVar26 >> 0x10);
  uVar24 = sVar34 - 1;
  uVar27 = CONCAT22(uVar10,uVar24);
  uVar20 = 0x24a91747;
  if (uVar24 == 0 || sVar34 < 1) {
    uVar20 = uVar27;
  }
  bVar6 = (byte)((int)uVar19 >> (bVar12 & 0x1f));
  if (uVar24 == 0) {
    bVar6 = (byte)uVar31;
  }
  iVar38 = 0x1f;
  if (uVar24 >> 8 != 0) {
    for (; (ushort)((uVar24 >> 8) >> iVar38) == 0; iVar38 = iVar38 + -1) {
    }
  }
  iVar8 = CONCAT22((short)(uVar7 >> 0x10),CONCAT11((bVar6 & 0xe2) != 0,(char)uVar7)) << 9;
  uVar30 = 0x31a9a6e1 - uVar30 & 0xffff0000;
  uVar15 = (ushort)((uint)iVar38 >> 0x10);
  uVar7 = CONCAT22(uVar15,(short)CONCAT31((int3)((uint)iVar8 >> 8),(char)((uint)iVar8 >> 8)));
  uVar19 = (int)(char)((ulonglong)
                       ((longlong)
                        (int)(CONCAT22((short)((uint)iVar8 >> 0x10),(short)iVar38) * uVar31 >> 1) *
                       (longlong)(int)uVar30) >> 0x20);
  if (!SCARRY4(uVar31,1)) {
    uVar19 = uVar30;
  }
  uVar11 = (undefined2)(uVar30 >> 0x10);
  sVar34 = (short)uVar20 << 1;
  bVar42 = (short)uVar20 < 0 != sVar34 < 0;
  iVar38 = (CONCAT22(uVar10,(short)CONCAT31((int3)((uint)uVar27 >> 8),(char)uVar24)) ^ 0x40) << 1;
  uVar30 = CONCAT22((short)((uint)iVar38 >> 0x10),
                    CONCAT11((byte)((uint)iVar38 >> 8) >> 1 | (iVar26 < 0) << 7,(char)iVar38)) >> 1
           | (uint)(0xae881665 < uVar31 + 1) << 0x1f;
  if (CONCAT22((short)((uint)uVar20 >> 0x10),sVar34) != 0xd4fa899) {
    uVar30 = uVar31 + 0x5177e99b;
  }
  uVar31 = 0x1f;
  if (uVar7 != 0) {
    for (; uVar7 >> uVar31 == 0; uVar31 = uVar31 - 1) {
    }
  }
  if (uVar7 == 0) {
    uVar19 = (uint)CONCAT21((short)(uVar19 >> 0x10),bVar42) << 8;
  }
  iVar26 = 0x1f;
  if (uVar31 != 0) {
    for (; uVar31 >> iVar26 == 0; iVar26 = iVar26 + -1) {
    }
  }
  uVar24 = (ushort)(bVar42 + 0x98ed) >> 3;
  uVar36 = (short)CONCAT21(uVar11,bVar42) * 0x100;
  uVar17 = (undefined2)((uint)iVar26 >> 0x10);
  sVar35 = (short)iVar26 * 2;
  uVar37 = (ushort)uVar19;
  uVar22 = uVar37 ^ (ushort)(uVar24 == uVar37) * (uVar37 ^ uVar36);
  uVar10 = (undefined2)(uVar30 >> 0x10);
  uVar25 = (short)uVar30 + sVar35 + 1;
  sVar16 = uVar36 + 0xe7d;
  sVar34 = uVar25 + (uVar15 >> 9);
  uVar36 = sVar35 + 0x77da;
  bVar21 = (byte)((ushort)sVar16 >> 8);
  uVar7 = CONCAT22(uVar11,sVar16) & 0xffff00ff;
  bVar12 = (byte)uVar7;
  bVar6 = (bVar12 & 0x1f) % 9;
  cVar23 = -(char)sVar34;
  uVar15 = CONCAT11(0xda,(byte)(CONCAT11(0x6e < bVar21 || 0xfe < (byte)(bVar21 + 0x91),bVar12) >>
                               bVar6) | bVar12 << 9 - bVar6);
  uVar30 = ((ushort)(uVar24 ^ (ushort)(uVar24 != uVar37) * (uVar24 ^ uVar22)) >> 1 | 0x80000000) ^
           0x4609;
  uVar31 = CONCAT22(uVar10,CONCAT11((byte)((ushort)sVar34 >> 9),cVar23)) ^ 0xf300;
  uVar19 = CONCAT22((short)(uVar19 >> 0x10),uVar22) + (uint)uVar25 * -2 & 0xffff0000;
  if ((uVar30 & 0xfd29) == 0) {
    uVar19 = uVar30;
  }
  uVar30 = (uint)uVar15;
  iVar38 = (CONCAT22((short)(uVar7 >> 0x10),uVar15) >> 8 & 0x7fff9a) << 9;
  bVar21 = ~(byte)((uint)iVar38 >> 8);
  uVar32 = CONCAT22((short)(((uint)(ushort)(bVar42 + 0x98ed) << 0x1d) >> 0x10),
                    (uVar24 + 0x93b7) - (ushort)((short)iVar26 < 0)) & 0xddc09ccc;
  uVar37 = uVar36 | (ushort)uVar31;
  bVar12 = 0xe - (char)(iVar26 >> 0x1f);
  uVar7 = CONCAT11((char)(uVar36 >> 8),(char)uVar36 + '\x01') ^ 0x1d;
  bVar6 = bVar12 % 0x11;
  uVar24 = (ushort)(uVar7 >> bVar6) | (ushort)(uVar7 << 0x11 - bVar6);
  uVar7 = uVar24 | 0x80000000;
  bVar12 = bVar12 & (byte)(uVar24 >> 8);
  uVar31 = CONCAT31((int3)(uVar31 >> 8),cVar23 + 'e') | 0x4000;
  uVar19 = CONCAT22((short)(uVar19 >> 0x10),0xd1e9);
  iVar26 = uVar7 - uVar19;
  if (uVar7 != uVar19) {
    uVar7 = uVar19;
  }
  if (-1 < iVar26) {
    uVar31 = CONCAT22(uVar10,(short)uVar7);
  }
  bVar6 = (byte)uVar7;
  bVar28 = (byte)(uVar31 >> 8);
  bVar13 = bVar12 ^ (bVar6 == bVar12) * (bVar12 ^ bVar28);
  bVar5 = bVar6 ^ (bVar6 != bVar12) * (bVar6 ^ bVar13);
  uVar10 = CONCAT11(((byte)(bVar21 + 0x70) >> 2 | bVar21 << 6) << 1,bVar13);
  if ((uVar7 >> (uVar7 & 0x1f) & 1) == 0) {
    uVar32 = CONCAT22((short)(uVar32 >> 0x10),uVar10);
  }
  uVar19 = CONCAT22((short)(uVar7 >> 0x10),(short)CONCAT31((int3)(uVar7 >> 8),bVar5)) & 0xffff3fff;
  uVar19 = CONCAT22((short)(uVar19 >> 0x10),(ushort)uVar19 / (ushort)(bVar28 | 0xc0)) & 0xffff00ff;
  uVar24 = (uVar37 << 1 | (ushort)((short)uVar37 < 0)) + 0x7df6;
  uVar39 = (CONCAT22((short)(uVar31 >> 0x10),
                     CONCAT11(bVar28,(char)uVar31 + bVar5 + (bVar6 < bVar12))) | 0xc000) &
           0xffffa5ff;
  uVar31 = uVar7 - uVar30;
  if (uVar7 < uVar30 || uVar31 == 0) {
    uVar31 = CONCAT22((short)(uVar31 >> 0x10),uVar24);
  }
  iVar26 = CONCAT22((short)((uint)iVar38 >> 0x10),uVar10) << (bVar13 & 0x1f);
  uVar7 = CONCAT22((short)(uVar19 >> 0x10),(short)(char)uVar19) & 0xd2b1d71;
  bVar6 = (byte)iVar26;
  uVar19 = uVar32 >> 0x13 | uVar32 << 0xd;
  if (-1 < (char)((byte)uVar31 | 0x9b)) {
    uVar19 = CONCAT22(uVar17,uVar24);
  }
  uVar10 = (undefined2)(uVar39 >> 0x10);
  sVar34 = (short)uVar39 + -0x6aab;
  if ((uVar24 | 0xd54b) != 0) {
    uVar19 = uVar30;
  }
  bVar12 = bVar6 & 0x1f;
  uVar30 = (uVar31 | 0x9b) << bVar12 | (uVar31 | 0x9b) >> 0x20 - bVar12 | 0x58e298ba;
  bVar12 = (byte)((ushort)uVar7 >> (bVar6 & 0x1f));
  uVar31 = uVar19 >> 1 | (CONCAT22(uVar17,uVar24) | 0xd54b) << 0x1f;
  sVar16 = (short)iVar26 + (short)(uVar19 >> 1) + (ushort)((uVar19 & 1) != 0);
  cVar23 = (char)sVar34;
  bVar21 = (byte)sVar16;
  bVar6 = (bVar21 & 0x1f) % 9;
  uVar36 = CONCAT11(cVar23,cVar23 >> 1) & 0x1ff;
  bVar5 = (byte)(uVar36 >> bVar6) | (byte)(uVar36 << 9 - bVar6);
  uVar36 = (ushort)CONCAT31((int3)(CONCAT22(uVar10,sVar34) >> 8),bVar5);
  uVar37 = uVar24 | 0xd54b | uVar36;
  uVar24 = CONCAT11(bVar12 & (byte)uVar30,bVar12);
  uVar22 = uVar37 ^ (ushort)(uVar24 == uVar37) * (uVar37 ^ uVar15 << 1);
  uVar24 = uVar24 ^ (ushort)(uVar24 != uVar37) * (uVar24 ^ uVar22);
  bVar6 = (char)uVar24 - 1;
  uVar19 = CONCAT22(uVar17,uVar22);
  if ((bVar6 & 1) != 0) {
    uVar19 = uVar31;
  }
  uVar37 = CONCAT11((char)((ushort)sVar16 >> 8),bVar21 + 0x71);
  uVar9 = (uint3)(CONCAT22((short)(uVar7 >> 0x10),uVar24) >> 9) |
          (uint3)(((uint)((bVar6 >> 1 & 1) != 0) << 0x1f) >> 8);
  iVar38 = CONCAT31(uVar9,0x3e);
  uVar22 = (ushort)(char)bVar5;
  uVar24 = uVar37 + uVar22;
  cVar23 = (char)uVar24;
  uVar7 = (CONCAT22(uVar10,uVar36 + 0x9601) - iVar38) -
          (uint)(0x11 < (byte)(cVar23 + 1U) ||
                CARRY1(cVar23 - 0x11,CARRY2(uVar37,uVar22) || 0xfffe < uVar24));
  uVar32 = uVar19 << 0xc | uVar19 >> 0x14;
  iVar26 = (uVar31 ^ 0x2000) << 1;
  uVar24 = (short)iVar26 << 1 | (ushort)((uVar7 & 0x100) != 0);
  uVar1 = (ulonglong)(uVar15 & 0x7fff | 0xc0000000);
  uVar2 = CONCAT44(CONCAT31((int3)(CONCAT22((short)(uVar30 >> 0x10),uVar22) >> 8),
                            (bVar5 - (char)(uVar7 >> 8)) + -1),
                   CONCAT22((short)(uVar9 >> 8),(short)uVar7)) & 0x3fffffffffffffff;
  uVar30 = 0;
  if (uVar32 != 0) {
    for (; (uVar32 >> uVar30 & 1) == 0; uVar30 = uVar30 + 1) {
    }
  }
  uVar31 = uVar30 | 0xc0000000;
  uVar1 = CONCAT44((int)(uVar2 % uVar1),(int)(short)(uVar2 / uVar1)) & 0x3fffffffffffffff;
  uVar2 = uVar1 / uVar31;
  iVar8 = (int)uVar2;
  uVar1 = uVar1 % (ulonglong)uVar31;
  sVar34 = (uVar15 & 0x7fff) * 2;
  cVar23 = (char)(uVar30 >> 8);
  if (!SBORROW1(cVar23,-0x7d)) {
    iVar8 = (uint)(ushort)(uVar2 >> 0x10) << 0x10;
  }
  uVar10 = (undefined2)((uint)iVar8 >> 0x10);
  uVar31 = CONCAT31((int3)(CONCAT22((short)(uVar31 >> 0x10),CONCAT11(cVar23 + '}',(char)uVar30)) >>
                          8),(char)uVar30) & 0xffffff0f;
  uVar36 = (ushort)uVar1;
  uVar15 = CONCAT11((char)((ushort)((short)uVar7 + (short)iVar38) >> 8),(char)iVar8) >>
           (sbyte)uVar31 | uVar36 << 0x10 - (sbyte)uVar31;
  uVar30 = uVar32 << 4 | (uVar19 << 0xc) >> 0x1c;
  iVar38 = CONCAT31((int3)(CONCAT22(uVar10,uVar15) >> 8),(char)uVar15 - (char)(uVar31 >> 8));
  uVar31 = uVar31 + iVar38;
  uVar15 = uVar36 ^ (ushort)(uVar24 == uVar36) * (uVar36 ^ uVar24);
  uVar19 = (uint)CONCAT21((short)(uVar7 >> 0x10),!SBORROW2(uVar24,uVar36)) * 0x100;
  iVar8 = uVar19 - uVar31;
  uVar32 = (CONCAT22((short)((uint)iVar26 >> 0x10),uVar24 + ((short)iVar38 >> 1)) - uVar30) -
           (uint)(uVar19 < uVar31);
  iVar38 = (uVar30 - CONCAT22(0xc000,sVar34)) - (uint)(uVar31 < 0xd84ddcd7);
  iVar26 = CONCAT22(uVar10,(uVar24 ^ (ushort)(uVar24 != uVar36) * (uVar24 ^ uVar15)) + 0x248d) + 1;
  sVar16 = (short)iVar26;
  uVar24 = sVar16 << 1 | (ushort)uVar31 >> 0xf;
  uVar36 = (sVar34 + -0x11c7) - (ushort)(sVar16 < 0);
  uVar19 = (uint)((uVar36 & 1) != 0);
  uVar30 = uVar32 + 0x4c78cdb3;
  uVar7 = uVar30 - uVar19;
  if ((POPCOUNT(uVar7 & 0xff) & 1U) != 0) {
    uVar7 = uVar31;
  }
  cVar23 = ((char)uVar24 + -0x2e) - (uVar32 < 0xb387324d || uVar30 < uVar19);
  uVar37 = CONCAT11(cVar23 == '\0',(byte)uVar31);
  bVar6 = (byte)uVar31 & 0xf;
  iVar18 = CONCAT22((short)(uVar31 >> 0x10),uVar37 << bVar6 | uVar37 >> 0x10 - bVar6) + 1;
  bVar6 = (byte)iVar18 & 0xf;
  uVar37 = (ushort)iVar18 >> bVar6 | (ushort)iVar18 << 0x10 - bVar6;
  uVar30 = CONCAT31((int3)(CONCAT22((short)((uint)iVar26 >> 0x10),uVar24) >> 8),cVar23) >>
           ((byte)uVar37 & 0x1f);
  uVar31 = ~CONCAT22((short)((uint)iVar18 >> 0x10),uVar37);
  uVar24 = (ushort)uVar31;
  sVar34 = uVar24 + 0x9278;
  bVar12 = (byte)sVar34;
  bVar6 = bVar12 & 0x1f;
  uVar7 = (uint)(CONCAT14(0x6d87 < uVar24,uVar7) >> bVar6) | uVar7 << 0x21 - bVar6;
  bVar6 = (byte)uVar30;
  uVar32 = CONCAT22((short)((uint)iVar38 >> 0x10),(short)iVar38 * -0x3382) >> (bVar12 & 0x1f);
  uVar24 = (short)uVar7 + 1;
  uVar19 = CONCAT22(0xc000,uVar36) ^ 1;
  if ((POPCOUNT(uVar24 & 0xff) & 1U) != 0) {
    uVar19 = uVar32;
  }
  uVar37 = uVar24 * 2 | (ushort)((int)uVar7 < 0);
  uVar36 = (ushort)iVar8;
  uVar24 = (ushort)(uVar30 >> 0x10);
  iVar38 = (CONCAT22((short)(uVar31 >> 0x10),sVar34) +
            CONCAT22((short)(uVar19 >> 0x10),(ushort)uVar19 & uVar36) + 1) * 2;
  iVar26 = ((int)(short)(CONCAT22(uVar24,(short)(char)bVar6 * (short)(char)(bVar6 | 0x7e)) >> 1) *
            (int)(short)uVar37 & 0xffffU) * (uint)(uVar36 | 0x7600);
  sVar34 = (short)(char)iVar26 * (short)(char)((uint)iVar26 >> 8);
  bVar6 = ~(byte)((uint)iVar26 >> 0x18);
  uVar36 = CONCAT11(bVar6,(char)((uint)iVar26 >> 0x10));
  sVar16 = ((ushort)iVar38 | 1) + 0xc4eb;
  uVar19 = CONCAT31((int3)(CONCAT22((short)((uint)iVar38 >> 0x10),sVar16) >> 8),(char)sVar16) &
           0xffffff0f;
  sVar14 = (sbyte)uVar19;
  iVar26 = CONCAT22((short)((uint)-CONCAT22((short)(uVar1 >> 0x10),uVar15) >> 0x10),uVar36) +
           -0x454b2a11 +
           CONCAT22(uVar24 >> 1,
                    CONCAT11((char)((ushort)sVar34 >> 8) + (char)iVar8,(char)sVar34) << sVar14 |
                    uVar36 >> 0x10 - sVar14) * 2;
  sVar16 = CONCAT11(bVar6,sVar14);
  bVar6 = (char)iVar26 * '^';
  sVar34 = (short)(char)((uint)iVar26 >> 8) << 1;
  uVar36 = sVar16 + 0x72 + CONCAT11(bVar6,bVar6) * 8;
  uVar19 = CONCAT22((short)(uVar19 >> 0x10),sVar16) | 0xfd4a53ed;
  bVar42 = ((ushort)((ushort)uVar32 | 0x989d) >> (uVar36 & 0xf) & 1) != 0;
  uVar7 = -(uint)(bVar6 < 0x4f || (byte)(bVar6 + 0xb1) < bVar42);
  iVar38 = CONCAT31((int3)(uVar19 >> 8),((char)uVar19 - (char)uVar7) + -1) + 1;
  uVar24 = CONCAT11((char)((ushort)sVar34 >> 8),-(char)sVar34) & ~(ushort)(1 << (uVar36 & 0x1f));
  uVar15 = (ushort)((ushort)((uint)iVar26 >> 0x11) |
                   (ushort)(((uint)((bVar6 + ((bVar6 + 0xb1) - bVar42) & 1) != 0) << 0x1f) >> 0x10))
           >> 1;
  uVar19 = (CONCAT22((short)((uint)iVar38 >> 0x10),(short)iVar38 * -0x4b2b) & 0x7fffffae) << 1;
  bVar6 = (byte)uVar19 & 0x1f;
  uVar31 = (CONCAT22((short)(((uint)uVar37 << 1) >> 0x10),uVar36) & 0xfffffbff) << bVar6 |
           uVar19 >> 0x20 - bVar6;
  uVar19 = (ushort)(uVar24 * uVar24 * -0x3da2) + 0x15cdd6f0;
  uVar30 = 0;
  if (uVar19 != 0) {
    for (; (uVar19 >> uVar30 & 1) == 0; uVar30 = uVar30 + 1) {
    }
  }
  uVar19 = CONCAT22(uVar15,(short)CONCAT21(uVar15,0xff) << 8) | 1;
  iVar26 = 0;
  if ((uVar30 & 0xffff0000) != 0) {
    for (; ((uVar30 & 0xffff0000) >> iVar26 & 1) == 0; iVar26 = iVar26 + 1) {
    }
  }
  uVar15 = (ushort)(uVar31 >> 0x15);
  uVar10 = (undefined2)((uint)iVar26 >> 0x10);
  sVar34 = (short)iVar26 + -0xa3;
  bVar6 = (byte)sVar34 & 0xf;
  uVar24 = 0xff << bVar6 | 0xffU >> 0x10 - bVar6;
  sVar16 = sVar34 * 0x4bfe;
  iVar26 = uVar19 - 1;
  bVar5 = (byte)(uVar24 >> 8);
  uVar36 = (ushort)((uint)iVar26 >> 0x10);
  bVar12 = (byte)uVar24;
  bVar21 = bVar12 ^ 0x6f;
  uVar37 = (uVar15 | 1 << (uVar15 & 0xf)) + 1;
  uVar30 = CONCAT22((short)(((uVar31 >> 0x10) << 0x1b) >> 0x10),uVar37);
  bVar6 = bVar5 + bVar21;
  iVar38 = (uVar19 - uVar30) - (uint)CARRY1(bVar5,bVar21);
  uVar24 = (ushort)(uVar7 >> 0x18);
  uVar22 = uVar24 | (ushort)(((uVar7 >> 0x10 & 0xff) << 0x10) >> 8);
  uVar15 = CONCAT11((char)((ushort)(sVar34 * -0x6804) >> 8) + -0x46 + (sVar16 < 0),
                    (byte)(sVar34 * -0x6804) | sVar16 < 0);
  if ((byte)((char)bVar5 >> ((byte)sVar16 & 0x1f) & (char)((uint)iVar26 >> 8) + 0x42U) == 0) {
    uVar15 = uVar22;
  }
  cVar23 = (char)((uint)iVar38 >> 8) * '\x02' + (0x72 < (byte)iVar38);
  uVar24 = (ushort)(CONCAT12(uVar22 != 0,-uVar22) >> 9) | uVar24 * -0x100;
  if (cVar23 < '\0') {
    uVar24 = CONCAT11(cVar23,(byte)iVar38 + 0x8d);
  }
  iVar38 = CONCAT22((short)((uint)iVar38 >> 0x10),(ushort)(short)(char)bVar5 >> 8) -
           CONCAT22(uVar10,uVar15);
  sVar34 = (short)((short)uVar24 * -0x2ad5);
  uVar31 = uVar30 | 0xc0000000;
  uVar1 = (CONCAT44(iVar38,(int)((ushort)((uVar37 & 0xff) * (ushort)(byte)iVar38) + 0x212fad42 +
                                 (uint)((int)sVar34 != (short)uVar24 * -0x2ad5) ^ 2) >> 0xb) &
          0x3fffffffffffffff) / (ulonglong)uVar31;
  iVar38 = (int)(short)uVar1 * (int)(short)uVar15;
  bVar5 = (byte)uVar15;
  bVar21 = (bVar5 & 0x1f) % 9;
  cVar23 = (char)((uint)iVar38 >> 8);
  uVar19 = (CONCAT22((short)((uint)iVar38 >> 0x10),
                     CONCAT11((byte)(CONCAT11((short)iVar38 != iVar38,cVar23) >> bVar21) |
                              cVar23 << 9 - bVar21,(char)iVar38)) & 0x3fffffff) % (uVar37 | 0xc000);
  bVar21 = (bVar5 & 0x1f) % 0x11;
  uVar7 = (uint)((byte)uVar19 < 0x2b) << 0x10 | uVar37 | 0xc000;
  uVar37 = (ushort)(uVar7 >> bVar21) | (ushort)(uVar7 << 0x11 - bVar21);
  uVar36 = CONCAT11(~((byte)((uint)iVar26 >> 0x1c) |
                     (byte)((uint)(CONCAT22(uVar36,(ushort)(byte)iVar26) << 0xc) >> 8)),
                    (char)(uVar36 >> 4)) >> (bVar5 & 0x1f);
  iVar38 = CONCAT22(uVar10,CONCAT11((char)(uVar19 >> 8),bVar5)) * -0x2e7d7d37;
  bVar21 = (byte)(iVar38 >> 0x1f);
  uVar19 = (CONCAT22((ushort)bVar6 |
                     (ushort)(((uint)(ushort)(CONCAT11(bVar6,bVar12) ^ 0x6f) << 0x18) >> 0x10),
                     sVar34) & ~(1 << (uVar37 & 0x1f))) >> (bVar21 & 0x1f);
  iVar8 = (uVar19 >> (bVar21 & 0x1f) | uVar19 << 0x20 - (bVar21 & 0x1f)) << 1;
  uVar24 = (ushort)iVar8;
  bVar12 = -1 < (char)(bVar21 & (byte)uVar36) | 0xc0;
  uVar7 = CONCAT22((short)(uVar1 >> 0x10),uVar36) & 0xffff3fff;
  lVar3 = (longlong)(int)(uVar30 * -0x87f6e7d) * -0x32f52f03;
  iVar26 = (int)lVar3;
  sVar34 = (short)(iVar38 >> 0x1f);
  uVar15 = sVar34 << 1 | (ushort)(iVar26 != lVar3);
  iVar38 = CONCAT22(sVar34,uVar15);
  bVar6 = (byte)uVar15 & 0x1f;
  bVar42 = (uVar37 & 1) != 0;
  uVar19 = CONCAT22((short)(uVar31 >> 0x10),uVar37) >> 1;
  uVar32 = uVar19 | (uint)bVar42 << 0x1f;
  uVar30 = ((uint)(CONCAT14(sVar34 < 0,iVar38) >> bVar6) | iVar38 << 0x21 - bVar6) & 0xffffff0f;
  bVar6 = (byte)uVar30;
  uVar15 = (ushort)uVar19;
  iVar18 = CONCAT22((short)(uVar7 >> 0x10),
                    (CONCAT11((char)((ushort)uVar7 % (ushort)bVar12),
                              ((uVar31 & 0x80000000) != 0) != bVar42) & 0x7fff | 0x8000 | uVar36) <<
                    bVar6 | uVar15 >> 0x10 - bVar6) * iVar26;
  iVar38 = 0x1f;
  if (bVar12 != 0) {
    for (; bVar12 >> iVar38 == 0; iVar38 = iVar38 + -1) {
    }
  }
  uVar22 = (ushort)bVar12;
  sVar34 = (short)iVar38 - uVar22;
  iVar26 = iVar26 - uVar32;
  bVar21 = (byte)sVar34;
  bVar5 = (byte)((ushort)sVar34 >> 8);
  bVar12 = (byte)((uint)iVar18 >> 8);
  uVar11 = (undefined2)((uint)iVar18 >> 0x10);
  uVar25 = (ushort)iVar26;
  uVar39 = (CONCAT22((short)((uint)iVar8 >> 0x10),uVar24 >> 1) | 0x8000) ^ 0x8000000;
  uVar15 = uVar15 + uVar22;
  iVar38 = (CONCAT22((short)((uint)iVar38 >> 0x10),
                     CONCAT11(bVar5 << (bVar6 & 7) | bVar5 >> 8 - (bVar6 & 7),
                              bVar21 >> (bVar6 & 7) | bVar21 << 8 - (bVar6 & 7)) |
                     1 << (uVar25 & 0xf)) - uVar39) + 0x59fe15c1;
  uVar37 = (ushort)iVar38;
  uVar36 = uVar24 + uVar37;
  uVar10 = (undefined2)((uint)iVar38 >> 0x10);
  iVar38 = (int)(short)CONCAT31((int3)(CONCAT22(uVar11,CONCAT11(bVar12 >> 7 | bVar12 << 1,
                                                                (char)iVar18)) >> 8),
                                (char)iVar18 + -0x38 + CARRY2(uVar24,uVar37)) * (int)(short)uVar22;
  uVar24 = uVar15 & 0xf;
  uVar37 = (ushort)CONCAT31(0x73f3a3,0xcf >> bVar6);
  uVar22 = (ushort)(uVar25 | 1 << ((ushort)iVar38 & 0xf) | 0xa0e7) >> 1 |
           (ushort)((uVar37 >> uVar24 & 1) != 0) << 0xf;
  bVar6 = bVar6 >> 1;
  uVar7 = (CONCAT22(uVar11,(ushort)iVar38) >> bVar6 |
          CONCAT22(0x73f3,uVar37 & ~(1 << uVar24)) << 0x20 - bVar6) & 0xffff;
  uVar19 = uVar22 | 0xc000;
  uVar7 = (CONCAT31((int3)(CONCAT22(uVar10,(short)((uint)iVar38 >> 0x10)) >> 8),
                    (char)((uint)iVar38 >> 0x10) + (char)(uVar30 >> 8)) & 0x3fff) << 0x10 |
          (uint)(ushort)((ushort)(uVar7 >> bVar6 % 0x11) | (ushort)(uVar7 << 0x11 - bVar6 % 0x11));
  uVar31 = uVar7 / uVar19 & 0xffff;
  iVar38 = CONCAT22((short)((uint)iVar26 >> 0x10),(uVar22 | 0xc000) - uVar36);
  cVar23 = (char)(uVar31 >> 8) + 'O';
  uVar24 = CONCAT11(cVar23,(char)uVar31);
  iVar26 = CONCAT22((short)(uVar32 >> 0x10),uVar15) * -0x4e79b401 - iVar38;
  uVar22 = (ushort)iVar26;
  uVar37 = (ushort)CONCAT31((int3)(uVar30 >> 8),bVar6);
  uVar11 = (undefined2)(uVar30 >> 0x10);
  uVar1 = (ulonglong)CONCAT22((short)cVar23 >> 7,uVar24 >> 7 | uVar24 << 9) *
          (ulonglong)CONCAT22(uVar10,(short)(uVar7 % uVar19));
  uVar15 = (ushort)(uVar1 >> 0x10);
  bVar12 = (char)(uVar1 >> 8) >> ((byte)(uVar37 >> 1) & 0x1f);
  uVar24 = CONCAT11(bVar12,(char)uVar1);
  uVar30 = (uint)(uVar1 >> 0x20) & 0xffffd97e;
  uVar19 = CONCAT22((short)(uVar39 >> 0x10),uVar36 >> bVar6 | uVar22 << 0x10 - bVar6);
  if ((uVar1 & 0xd97e00000000) == 0 || (short)(uVar1 >> 0x20) < 0) {
    uVar19 = CONCAT22(uVar15,uVar24);
  }
  iVar38 = iVar38 + 1;
  uVar10 = (undefined2)((uint)iVar26 >> 0x10);
  uVar36 = uVar37 & 0xfffe | (ushort)(bVar12 >> 7);
  sVar14 = (sbyte)uVar36;
  sVar34 = (short)CONCAT31((int3)(CONCAT22(uVar11,uVar36) >> 8),sVar14);
  iVar26 = CONCAT22((short)((uint)iVar38 >> 0x10),
                    (ushort)((short)iVar38 << 1) >> sVar14 | sVar34 << 0x10 - sVar14) << 1;
  uVar36 = (ushort)iVar26 | uVar15 >> 0xf;
  sVar34 = sVar34 + uVar24 + 0x691a + (ushort)(0x96e5 < uVar24);
  iVar8 = CONCAT22(uVar11,sVar34);
  bVar6 = (byte)sVar34 & 0x1f;
  uVar24 = (ushort)((uVar19 >> bVar6) >> 0x10) |
           (ushort)((uint)(-0x8f1786a << 0x20 - bVar6) >> 0x10);
  iVar38 = iVar8 + 0xa39b03e;
  if (SCARRY4(iVar8,0xa39b03e) != iVar38 < 0) {
    iVar38 = CONCAT22(uVar10,uVar22 << 2 | uVar22 >> 0xe);
  }
  uVar37 = uVar36 + 0xb593;
  sVar16 = CONCAT11(SCARRY2(uVar36,-0x4a6d) == (short)uVar37 < 0,0xff) - (short)iVar38;
  uVar32 = CONCAT31((int3)(CONCAT22((short)((uint)iVar38 >> 0x10),CONCAT11(1,(char)iVar38)) >> 8),
                    (char)iVar38 + '`') & 0xffffff0f;
  uVar36 = uVar37 >> (sbyte)uVar32 | (short)uVar32 << 0x10 - (sbyte)uVar32;
  lVar3 = (longlong)(int)(CONCAT31((int3)(short)uVar15 >> 0x17,(char)(uVar1 >> 0x18) >> 7) ^ 0xa9) *
          -0x512c6e6c;
  bVar42 = (int)lVar3 == lVar3;
  uVar19 = ((uint)uVar15 << 0x10) >> 5 | CONCAT22(0xffff,(uVar22 & 0x3fff) >> 2 & 0xff) << 0x1b;
  uVar15 = (ushort)bVar42;
  uVar1 = (longlong)(int)uVar19 * (longlong)(int)uVar19;
  bVar6 = bVar42 % 0x11;
  sVar34 = uVar15 + 0x8a00;
  uVar15 = CONCAT11(0x75ff < uVar15 || sVar34 == 0,(char)sVar34) + 1;
  uVar19 = uVar15 | 0xc000;
  uVar7 = (uint)(ushort)(((ushort)(uint)(uVar1 >> 0x21) & 0x1fff) << 1 | 1) << 0x10 |
          uVar15 | 0xc000;
  uVar31 = uVar7 % uVar19;
  uVar30 = ((uint)(uVar24 >> 7) |
           CONCAT22(uVar24,((ushort)-(ushort)(1 < (byte)(uVar30 >> 0x1c)) >> 2 |
                           ((ushort)((ushort)(uVar30 >> 0x10) | 0x20) >> 4) << 0xe) + uVar36) << 9)
           - CONCAT22(uVar10,sVar16 << bVar6 |
                             (ushort)(CONCAT12((uVar1 & 0x100000000) != 0,sVar16) >> 0x11 - bVar6));
  if (0x5ab4 < uVar36) {
    uVar31 = uVar30 & 0xffff;
  }
  iVar41 = CONCAT22((short)(uVar30 >> 0x10),(short)uVar30 + 0x36c4) + 0x5b581ae4;
  bVar6 = (0x5ab4 < uVar36) + 0x6f;
  iVar38 = (CONCAT22((short)(uVar32 >> 0x10),CONCAT11(0x33,bVar6)) >> 8) << 9;
  bVar6 = (((char)sVar16 * '\x17' & 0x98U) >> (bVar6 & 0x1f)) - 1;
  iVar8 = (CONCAT22((short)(uVar1 >> 0x10),(ushort)(uVar7 / uVar19) >> 8) ^ 0x8000) * 2 + 1;
  iVar18 = (CONCAT22((short)((uint)iVar26 >> 0x10),
                     (short)CONCAT31((int3)(uVar31 >> 8),(char)uVar31 + (char)(uVar31 >> 8)) *
                     0x3ca0) & 0x13edffff) + 0xb855794a;
  iVar26 = iVar8 * 2;
  uVar24 = (ushort)iVar41;
  iVar41 = CONCAT22((short)((uint)iVar41 >> 0x10),uVar24 + 0xac5f);
  iVar38 = CONCAT31((int3)(CONCAT22((short)((uint)iVar38 >> 0x10),(ushort)iVar38 >> 1) >> 8),
                    (bVar6 & 1) != 0) * 2 +
           (uint)(0x53a1 < uVar24 || 0xfffe < (ushort)(uVar24 + 0xac5e));
  uVar11 = (undefined2)((uint)iVar38 >> 0x10);
  uVar15 = (short)iVar38 << 1 | (ushort)((short)iVar38 < 0);
  lVar3 = (longlong)CONCAT31((int3)((uint)iVar26 >> 8),((byte)iVar26 | iVar8 < 0) + 1) * 0x43839cd0;
  uVar19 = iVar41 << (sbyte)uVar15 |
           (uint)(CONCAT14((int)lVar3 != lVar3,iVar41) >> 0x21 - (sbyte)uVar15);
  uVar37 = (ushort)((uint)iVar18 >> 0x10);
  uVar22 = (ushort)uVar19;
  uVar24 = (ushort)((uVar22 >> 1 & 1) != 0);
  sVar34 = (short)lVar3 - uVar15;
  uVar10 = (short)((ulonglong)lVar3 >> 0x10);
  if ((SBORROW2((short)lVar3,uVar15) != SBORROW2(sVar34,uVar24)) !=
      ((sVar34 - uVar24 & 0x8000) != 0)) {
    uVar10 = uVar11;
  }
  uVar30 = CONCAT22((short)(uVar19 >> 0x10),uVar22 * 0xbda);
  bVar12 = (byte)iVar18;
  uVar24 = (ushort)(CONCAT11(SCARRY2(uVar36,-0x5ab5) != (short)(uVar36 + 0xa54b) < 0,bVar6) >> 1) >>
           (bVar12 & 0x1f);
  uVar7 = (uint)uVar37 | CONCAT22(uVar37,(short)iVar18 >> (bVar12 & 0x1f)) << 0x10;
  bVar6 = (char)bVar12 >> 1;
  iVar26 = uVar7 - uVar30;
  uVar19 = CONCAT31((int3)(CONCAT22((short)((uint)iVar26 >> 0x10),
                                    (short)CONCAT31((int3)(CONCAT22(uVar10,(short)(char)bVar12) >> 8
                                                          ),bVar6)) >> 8),bVar6) & 0xffffff0f;
  sVar14 = (sbyte)uVar19;
  uVar36 = (ushort)((short)uVar24 >> (bVar6 & 0x1f)) >> sVar14 | uVar24 << 0x10 - sVar14;
  bVar21 = (byte)((short)uVar10 >> 0xf) & 1;
  bVar12 = (byte)(uVar19 >> 8);
  bVar6 = bVar12 + 5;
  uVar15 = (ushort)(uVar19 >> 0x10);
  cVar23 = bVar6 - bVar21;
  uVar19 = (uint)uVar24;
  if ((bVar12 < 0xfb || bVar6 < bVar21) || cVar23 == '\0') {
    uVar19 = CONCAT22(uVar15,CONCAT11(cVar23,sVar14));
  }
  uVar37 = uVar36 >> 1;
  uVar17 = CONCAT11(cVar23 >> sVar14,sVar14);
  uVar31 = CONCAT22(uVar11,uVar24) << 1 | (uint)(iVar38 < 0);
  if ((char)(((char)((char)iVar26 + (char)uVar24 + (uVar7 < uVar30)) >> 7) << sVar14) ==
      cVar23 >> sVar14) {
    uVar19 = CONCAT22((short)(uVar19 >> 0x10),uVar17);
  }
  uVar7 = CONCAT31((int3)(CONCAT22(uVar15,uVar17) >> 8),sVar14) & 0xffffff82;
  iVar26 = uVar31 << 1;
  if ((int)uVar31 < 0 == iVar26 < 0) {
    uVar30 = CONCAT22(uVar11,uVar37 | (ushort)((uVar36 & 1) != 0) << 0xf);
  }
  bVar6 = (byte)(uVar7 >> 8);
  uVar31 = uVar19 << (sbyte)uVar7 | uVar30 >> 0x20 - (sbyte)uVar7;
  uVar24 = (ushort)uVar31 >> 1;
  uVar19 = CONCAT22(uVar11,CONCAT11(uVar24 != 0,(char)uVar37));
  iVar38 = 0x1f;
  if (uVar19 != 0) {
    for (; uVar19 >> iVar38 == 0; iVar38 = iVar38 + -1) {
    }
  }
  lVar3 = (longlong)
          (int)(short)(CONCAT22(uVar10,(short)(CONCAT11(-1 < (short)(ushort)uVar31,bVar6) |
                                              1 << (bVar6 & 0xf)) >> 0x13) >> 1) *
          (longlong)(int)(uVar30 & 0xffff0000);
  uVar4 = CONCAT14((int)lVar3 != lVar3,CONCAT22((short)(uVar31 >> 0x10),uVar24 + 0xca98) << 1) >> 2;
  uVar31 = (uint)uVar4 | (uint)((int)uVar31 < 0) << 0x1f;
  sVar34 = ((ushort)(uVar7 << 10) | uVar15 >> 6) + 0x1ce3;
  uVar19 = CONCAT22((short)((uVar7 << 10) >> 0x10),sVar34);
  bVar12 = (byte)sVar34;
  bVar6 = bVar12 & 0xf;
  uVar15 = (ushort)((ulonglong)lVar3 >> 0x10);
  uVar7 = CONCAT31((int3)((ulonglong)lVar3 >> 0x28),-(char)((ulonglong)lVar3 >> 0x20)) | 0x89ec3b6;
  bVar12 = bVar12 & 0x1f;
  uVar19 = uVar19 >> bVar12 | uVar19 << 0x20 - bVar12;
  uVar24 = (ushort)uVar19 >> 1;
  uVar19 = CONCAT31((int3)(CONCAT22((short)(uVar19 >> 0x10),uVar24) >> 8),(char)uVar24) & 0xffffff0f
  ;
  bVar5 = (byte)uVar19;
  uVar24 = (ushort)(0U >> bVar6 | 0 << 0x10 - bVar6) >> bVar5 | (short)uVar4 << 0x10 - bVar5;
  bVar21 = (byte)(uVar24 >> 8);
  cVar23 = (char)uVar24;
  sVar14 = bVar5 * '\x02';
  uVar10 = (undefined2)(uVar19 >> 0x10);
  sVar34 = (short)CONCAT31((int3)(CONCAT22(uVar10,CONCAT11((byte)((byte)(uVar19 >> 8) | 0x80) >>
                                                           sVar14,sVar14)) >> 8),sVar14 + -0x10) >>
           7;
  uVar30 = CONCAT31((int3)(CONCAT22(uVar10,sVar34) >> 8),(char)sVar34 - cVar23) & 0xffffff0f;
  iVar38 = (~uVar31 & 0x7fff846f) * 2;
  iVar8 = CONCAT31((int3)(uVar30 >> 8),SBORROW4(iVar38,iVar38) == false);
  uVar11 = (undefined2)(uVar7 >> 0x10);
  uVar19 = iVar8 + iVar38;
  iVar38 = uVar31 + 0x11e342d7;
  bVar6 = ((byte)uVar7 >> 3 | (byte)uVar7 << 5) + 0x22;
  bVar12 = (byte)uVar19 & 0x1f;
  uVar19 = uVar19 >> bVar12 | iVar26 << 0x20 - bVar12;
  uVar37 = uVar15 >> 1;
  uVar36 = (ushort)(byte)(CONCAT22(uVar15,CONCAT11(bVar21 << (bVar5 & 7) | bVar21 >> 8 - (bVar5 & 7)
                                                   ,cVar23) >> (sbyte)uVar30 |
                                          (short)uVar7 << 0x10 - (sbyte)uVar30) >> 1) *
           (ushort)bVar6;
  uVar10 = (undefined2)(uVar19 >> 0x10);
  uVar24 = (ushort)uVar19 >> 1;
  uVar19 = CONCAT22((short)((uint)iVar38 >> 0x10),(short)iVar38 << 1) | 0x269833d7;
  bVar5 = (byte)uVar24;
  uVar25 = (ushort)(uVar19 >> 0x10);
  sVar34 = (short)uVar24 >> (bVar5 & 0x1f);
  uVar22 = CONCAT11((char)((ushort)sVar34 >> 8) + -1,(char)sVar34);
  uVar30 = CONCAT22((short)(uVar30 >> 0x10),(short)iVar8 << 2) & CONCAT22(uVar37,uVar36);
  uVar29 = (ushort)uVar30;
  uVar24 = uVar36 - uVar29;
  bVar42 = uVar24 == 0;
  uVar15 = uVar29 ^ (ushort)bVar42 * (uVar29 ^ (short)(char)bVar6);
  bVar12 = (byte)uVar36 ^ !bVar42 * ((byte)uVar36 ^ (byte)uVar15);
  bVar21 = ((short)uVar24 < 0) << 7 | bVar42 << 6 | ((uVar36 & 0x1000) != 0) << 4 |
           ((POPCOUNT(uVar24 & 0xff) & 1U) == 0) << 2 | 2U | uVar36 < uVar29;
  uVar24 = CONCAT11(bVar21,bVar12);
  if (uVar36 >= uVar29 && !bVar42) {
    uVar15 = uVar22;
  }
  uVar29 = ((ushort)uVar19 >> (bVar5 & 0x1f)) << 1;
  uVar22 = uVar22 & uVar24;
  cVar23 = (char)bVar21 >> 7;
  bVar12 = bVar12 >> 1;
  bVar21 = ((byte)uVar22 - 0x37) + ((byte)uVar22 < (byte)(uVar22 >> 8));
  uVar20 = CONCAT31((int3)(CONCAT22(uVar10,uVar22) >> 8),bVar21);
  bVar21 = bVar21 & 0x1f;
  uVar19 = (uint)((int)(char)bVar6 >> 5) >> bVar21 | ((int)(char)bVar6 >> 5) << 0x20 - bVar21;
  uVar36 = CONCAT11(cVar23 + -0x31,cVar23) << 0xf;
  uVar22 = (ushort)iVar26 >> 1 | uVar36;
  if (((short)(ushort)iVar26 < 0 != (uVar36 != 0)) != (uVar36 != 0)) {
    uVar20 = CONCAT22(uVar10,uVar22);
  }
  bVar6 = (byte)((uint)uVar20 >> 8);
  uVar7 = CONCAT22((short)((uint)uVar20 >> 0x10),CONCAT11(bVar6 >> 1 | bVar6 << 7,(char)uVar20));
  uVar36 = (ushort)(uVar30 >> 0x10) | 0x100;
  iVar8 = CONCAT22((short)(uVar19 >> 0x10),
                   (short)uVar19 +
                   ((ushort)CONCAT31((int3)(CONCAT22(uVar37,uVar24) >> 8),bVar12) | 0x80)) << 1;
  uVar19 = CONCAT22(uVar37,(short)(char)(bVar12 | 0x80)) &
           ~(1 << ((ushort)(uVar15 + 0x7b36) & 0x1f)) & 0x8ccdd1b7;
  uVar24 = uVar36 >> 6;
  iVar38 = uVar7 + 0x471272a8;
  uVar19 = CONCAT22((short)(uVar19 >> 0x10),(short)uVar19 + uVar24) ^ 0x916a;
  iVar18 = (CONCAT22((short)((uint)iVar26 >> 0x10),uVar22) | 0x2000000) + 0x72e74598;
  sVar16 = (short)iVar8 << ((byte)iVar38 & 0x1f);
  iVar26 = uVar19 + 0x48a11acb;
  sVar34 = CONCAT11((char)((ushort)((short)CONCAT31(CONCAT21(uVar11,cVar23),cVar23 + cVar23 + -0x31)
                                   << 1) >> 8) >> ((byte)iVar38 & 0x1f),
                    uVar7 < 0xb8ed8d58 || iVar38 == 0);
  if (SCARRY4(uVar19,0x48a11acb) == iVar26 < 0) {
    sVar34 = sVar16;
  }
  uVar19 = CONCAT22(uVar11,sVar34);
  uVar22 = (ushort)iVar18;
  uVar37 = uVar22 | 1 << (uVar22 & 0xf);
  uVar15 = ~(ushort)iVar38;
  if ((uVar22 >> (uVar22 & 0xf) & 1) == 0 && uVar24 != 0xc07) {
    uVar15 = (ushort)iVar26;
  }
  iVar26 = 0x1f;
  if (uVar19 != 0) {
    for (; uVar19 >> iVar26 == 0; iVar26 = iVar26 + -1) {
    }
  }
  bVar6 = (byte)((ushort)sVar16 >> 8);
  uVar30 = CONCAT22((short)((uint)iVar8 >> 0x10),CONCAT11(bVar6,(char)((uint)iVar26 >> 8))) &
           0xffffb8ff;
  if ((POPCOUNT(bVar6 & 0xb8) & 1U) == 0) {
    uVar19 = CONCAT22(uVar11,uVar37);
  }
  uVar31 = CONCAT22((short)((uint)iVar38 >> 0x10),uVar15) ^ 1 << (uVar15 & 0x1f);
  uVar7 = CONCAT22((short)((uint)iVar18 >> 0x10),uVar37) + uVar30;
  uVar22 = uVar29 | 0x8000;
  uVar32 = CONCAT22(uVar25,uVar29) | 0x8000;
  uVar24 = (ushort)((short)uVar29 < 0);
  uVar37 = (ushort)uVar19;
  uVar29 = (ushort)uVar7;
  uVar15 = uVar29 + uVar37;
  if ((ushort)(uVar15 + uVar24) == 0 ||
      (SCARRY2(uVar29,uVar37) != SCARRY2(uVar15,uVar24)) != (short)(uVar15 + uVar24) < 0) {
    uVar31 = CONCAT22((short)(uVar31 >> 0x10),uVar37);
  }
  uVar36 = uVar36 >> 6;
  uVar24 = (ushort)(CONCAT12(CARRY2(uVar29,uVar37) || CARRY2(uVar15,uVar24),uVar36) >> 9) |
           uVar36 << 8;
  bVar12 = (byte)(uVar31 & 0xffffff0f);
  bVar6 = bVar12 & 7;
  iVar38 = uVar24 + 0xaf8f63d5;
  uVar39 = CONCAT22((short)((uint)iVar38 >> 0x10),CONCAT11(-(char)((uint)iVar38 >> 8),(char)iVar38))
           + 0x2f2a6f56;
  uVar7 = uVar7 >> 0x18;
  uVar40 = uVar7 | uVar32 << 8;
  uVar33 = (uint)(uVar25 >> 8) | ((uVar25 & 0xff) << 0x10) >> 8 | (uVar22 & 0xff00) << 8 |
           (uint)uVar22 << 0x18;
  sVar34 = (uVar24 << 6 | uVar22 >> 10) - 1;
  uVar24 = CONCAT11(0x65,(char)(CONCAT11((char)-(char)((uint)((int)(short)(CONCAT11(0xab,(char)
                                                  iVar26) & 0x8f41 | 0xdd00) *
                                                  (int)(short)CONCAT31((int3)(uVar30 >> 8),
                                                                       (byte)uVar30 >> bVar6 |
                                                                       (byte)uVar30 << 8 - bVar6))
                                                  >> 0x10) < '\x01',bVar12 + 0x8c) >> 1));
  uVar19 = uVar39 | 0xe5c57d7b;
  iVar26 = 0;
  if (uVar40 != 0) {
    for (; (uVar40 >> iVar26 & 1) == 0; iVar26 = iVar26 + 1) {
    }
  }
  bVar6 = (byte)((ushort)sVar34 >> 8);
  iVar26 = (iVar26 - CONCAT22((short)((uVar31 & 0xffffff0f) >> 0x10),uVar24)) - (uint)(bVar6 & 1);
  sVar34 = CONCAT11(bVar6 >> 1,(char)sVar34) << 5;
  bVar12 = (byte)((ushort)sVar34 >> 8);
  uVar31 = (uint)((CONCAT11(bVar12 >> 1,bVar6 >> 4 | (byte)sVar34) << 1 | (ushort)(bVar12 & 1)) &
                 uVar24);
  uVar30 = uVar33;
  if (uVar19 != uVar31) {
    uVar19 = uVar31;
    uVar30 = uVar31;
  }
  return uVar19 + CONCAT31((int3)((uint)iVar26 >> 8),(char)iVar26 >> 0x1f) + uVar30 + uVar33 +
         CONCAT22((ushort)(uVar32 >> 8) >> 1 | (ushort)(((uint)((uVar7 & 1) != 0) << 0x1f) >> 0x10),
                  (short)(uVar40 >> 1) + 0x35a9) + (uint)(ushort)((short)uVar39 >> 0xf) + -0x62a6e9b
  ;
}



// WARNING: Removing unreachable block (ram,0x0804accb)
// WARNING: Removing unreachable block (ram,0x0804ab1e)
// WARNING: Removing unreachable block (ram,0x0804aed6)
// WARNING: Removing unreachable block (ram,0x0804abd7)
// WARNING: Removing unreachable block (ram,0x0804ac8b)
// WARNING: Removing unreachable block (ram,0x0804ac8f)
// WARNING: Removing unreachable block (ram,0x0804acc8)

int log_size_10_var_002(void)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint5 uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  ushort uVar8;
  byte bVar12;
  uint uVar9;
  byte bVar13;
  int iVar10;
  uint uVar11;
  undefined2 uVar15;
  undefined3 uVar14;
  undefined2 uVar16;
  char cVar17;
  sbyte sVar18;
  ushort uVar19;
  short sVar20;
  uint3 uVar21;
  char cVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  int iVar26;
  undefined4 uVar27;
  undefined2 uVar28;
  byte bVar29;
  byte bVar30;
  ushort uVar31;
  int iVar32;
  byte bVar34;
  byte bVar35;
  uint uVar33;
  ushort uVar36;
  ushort uVar37;
  ushort uVar38;
  ushort uVar39;
  int iVar40;
  ushort uVar42;
  uint uVar41;
  ushort uVar43;
  int iVar44;
  uint uVar45;
  bool bVar46;
  
  for (iVar10 = 0x1f; 0x41f43a8dU >> iVar10 == 0; iVar10 = iVar10 + -1) {
  }
  iVar40 = CONCAT22(0x41f4,CONCAT11(((byte)((char)((uint)iVar10 >> 8) * -0x76) >> 4 == 0x3a) *
                                    ((byte)(iVar10 + -1) ^ 0x3a) ^ 0x3a,0x8d)) + 0x66eb3987;
  sVar24 = (short)(iVar10 + -1);
  uVar37 = (short)iVar40 >> 0x12;
  uVar11 = CONCAT22((short)((uint)iVar40 >> 0x10),uVar37);
  iVar10 = CONCAT22(0x41f4,sVar24 + 0x3a8c) + 0x1f475203;
  uVar15 = (undefined2)((uint)iVar10 >> 0x10);
  cVar7 = (char)iVar10;
  iVar10 = 0x1f;
  if (uVar11 != 0) {
    for (; uVar11 >> iVar10 == 0; iVar10 = iVar10 + -1) {
    }
  }
  sVar23 = (short)CONCAT31((int3)(CONCAT22(uVar15,CONCAT11(0x50,cVar7)) >> 8),-cVar7) + -0x5dac +
           (ushort)(cVar7 != '\0');
  if (sVar23 < 0) {
    uVar11 = (uint)uVar37;
  }
  iVar26 = CONCAT22(uVar15,sVar23) + 0x3f619590;
  uVar19 = sVar24 * -2;
  uVar37 = (short)uVar11 * 2 + 0x7bfe;
  cVar7 = (char)uVar19;
  uVar42 = (ushort)cVar7;
  uVar11 = CONCAT22(cVar7 >> 7,uVar42) & 0xfffffeff;
  iVar32 = uVar11 + 0x41f46357;
  uVar8 = (CONCAT11((char)iVar10,(char)iVar10) ^ 0x1000) & ~(1 << ((ushort)iVar26 & 0xf)) | uVar37;
  uVar19 = uVar19 & uVar8;
  bVar13 = (byte)uVar19 & 0xf;
  uVar31 = (ushort)iVar32;
  uVar31 = uVar31 << bVar13 | uVar31 >> 0x10 - bVar13;
  iVar40 = (CONCAT22((short)((uint)iVar10 >> 0x10),uVar8 - uVar19) + 0x30be22f7) -
           (uint)((uVar37 >> (((short)(uVar11 >> 2) - (1 << (uVar42 & 0xf) | 0x5252U)) -
                              (ushort)((uVar42 & 2) != 0) & 0xf) & 1) != 0);
  iVar10 = (int)(short)iVar40 * (int)(short)CONCAT31((int3)((uint)iVar26 >> 8),(char)iVar26 + '\r');
  uVar15 = (undefined2)((uint)iVar26 >> 0x10);
  sVar24 = (short)((uint)iVar10 >> 0x10);
  uVar37 = (short)iVar10 + 0xf14 + sVar24 * 8;
  lVar2 = (longlong)CONCAT22((short)((uint)iVar32 >> 0x10),uVar31) * 0x2ddd3979;
  bVar5 = (byte)((uint)iVar10 >> 8);
  uVar19 = (ushort)((ulonglong)lVar2 >> 0x10);
  bVar29 = (byte)lVar2;
  bVar34 = (char)((ulonglong)lVar2 >> 8) + bVar5 + (iVar10 < 0);
  uVar11 = (uint)((byte)(((byte)uVar31 | 0xeb) + (char)uVar37 + ((int)lVar2 != lVar2)) >> 2);
  bVar13 = (byte)iVar10;
  bVar12 = bVar5 ^ (bVar13 == bVar5) * (bVar5 ^ bVar34);
  uVar33 = CONCAT31((int3)(CONCAT22((short)((uint)iVar40 >> 0x10),CONCAT11(bVar12,bVar13)) >> 8),
                    bVar13 ^ (bVar13 != bVar5) * (bVar13 ^ bVar12));
  uVar8 = 0x8000;
  if (bVar5 > bVar13) {
    uVar37 = CONCAT11(bVar34,bVar29);
    uVar8 = uVar19;
  }
  bVar12 = (byte)(sVar24 << 1);
  uVar41 = CONCAT22(uVar15,CONCAT11(bVar5 <= bVar13,bVar12));
  uVar9 = 0x1f;
  if (uVar41 != 0) {
    for (; uVar41 >> uVar9 == 0; uVar9 = uVar9 - 1) {
    }
  }
  if (uVar33 < 0x93cee832) {
    uVar11 = uVar33 & 0xffff;
  }
  uVar31 = uVar37 >> 1;
  uVar41 = CONCAT22(uVar8,uVar31);
  bVar5 = (byte)(~uVar33 << 1) | -1 < iVar40;
  bVar13 = (byte)uVar31;
  bVar12 = bVar12 & bVar13;
  bVar6 = bVar5 + 0x7e;
  if ((char)bVar6 < '\0') {
    uVar11 = uVar41;
  }
  bVar1 = bVar12 + 0x57;
  bVar5 = ((char)uVar11 - bVar12) - (bVar5 < 0x82) & 7;
  bVar12 = (byte)((~uVar33 << 1) >> 8);
  bVar35 = bVar12 << bVar5 | bVar12 >> 8 - bVar5;
  bVar12 = bVar6 | 0x40;
  iVar10 = (uVar9 ^ 1 << (CONCAT11(bVar34,bVar29) & 0x1f)) + uVar41;
  bVar5 = (byte)(uVar37 >> 9);
  bVar30 = bVar12 ^ (bVar29 == bVar12) * (bVar12 ^ bVar5);
  uVar33 = (uint)CONCAT11(bVar34,bVar29 ^ (bVar29 != bVar12) * (bVar29 ^ bVar30));
  uVar37 = (ushort)((uint)iVar10 >> 8);
  uVar42 = uVar37 & 0xff | (ushort)((uint)(iVar10 * 0x1000000) >> 0x10);
  iVar26 = CONCAT22(uVar8 >> 1 | (ushort)(((uint)((uVar31 & 1) != 0) << 0x1f) >> 0x10),
                    (short)(uVar41 >> 1));
  bVar5 = bVar1 + bVar5;
  cVar7 = bVar5 + bVar35;
  cVar22 = cVar7 + '\x01';
  iVar40 = CONCAT31((int3)(CONCAT22(uVar15,(ushort)bVar1) >> 8),cVar22);
  uVar11 = CONCAT31((int3)(CONCAT22(uVar19,CONCAT11(bVar35,bVar6)) >> 8),bVar30);
  if ((CARRY1(bVar5,bVar35) || cVar7 == -1) || cVar22 == '\0') {
    uVar11 = uVar33;
  }
  uVar11 = (uint)(ushort)((short)(uVar11 + 0x5c983819) + 0x7875);
  if (SCARRY4(iVar40,iVar26) != SCARRY4(iVar40 + iVar26,1)) {
    uVar11 = uVar33;
  }
  uVar8 = (ushort)CONCAT31((int3)(uVar11 >> 8),(byte)uVar11 & bVar1);
  uVar19 = uVar8 >> (bVar13 & 0xf) | uVar8 << 0x10 - (bVar13 & 0xf);
  uVar8 = (short)(iVar26 * -0x5d0c5b86) + 0x4a72;
  uVar37 = ((ushort)((ushort)(byte)((uint)iVar10 >> 0x18) | uVar37 & 0xff00) >> 6) << 10 |
           uVar8 >> 6;
  sVar24 = (uVar8 & 0xff) * (ushort)bVar1;
  uVar3 = (ulonglong)((char)((ushort)sVar24 >> 8) != '\0') << 0x20 |
          (ulonglong)CONCAT11(bVar1,bVar13);
  uVar21 = (uint3)((uVar3 << (bVar13 & 0x1f)) >> 8) |
           (uint3)((uVar3 >> 0x21 - (bVar13 & 0x1f)) >> 8);
  bVar13 = (byte)((short)uVar37 >> 0xf);
  bVar12 = ((uVar37 | 0x2bc9) != 0) + bVar13;
  bVar5 = (byte)uVar21 >> 1;
  uVar11 = (uint)CONCAT21((short)(uVar21 >> 8),bVar5 << 6 | (byte)(bVar5 - 0x24) >> 3) * 0x100;
  bVar5 = bVar12 * '\b' | bVar12 >> 5;
  uVar33 = (CONCAT22(uVar42,uVar37) | 0x2bc9) >> 1;
  sVar23 = ((short)CONCAT31(CONCAT21(uVar42,(char)((ushort)((ushort)bVar13 * (ushort)bVar12) >> 8) +
                                            '\v'),
                            -1 < (char)((bVar5 & ~(byte)(1 << (bVar5 & 0x1f)) & 0xe0) + 0x49)) +
           -0x2db2) - (ushort)(uVar11 < 0xdf984e3e);
  uVar9 = uVar11 + 0x2067b1c2 & 0xffff0000;
  bVar13 = (byte)sVar23;
  bVar5 = (bVar13 == 0x40) * -0x41 ^ 0x40;
  sVar20 = CONCAT11(bVar5,0xff);
  lVar2 = (ulonglong)
          CONCAT31((int3)(CONCAT22(uVar42,sVar23) >> 8),bVar13 ^ (bVar13 != 0x40) * (bVar13 ^ bVar5)
                  ) * (ulonglong)(uVar33 | 0x80000000);
  uVar11 = 0x1f;
  if (uVar9 != 0) {
    for (; uVar9 >> uVar11 == 0; uVar11 = uVar11 - 1) {
    }
  }
  bVar13 = (byte)uVar11 & 0x1f;
  uVar9 = (uint)lVar2 >> bVar13 | CONCAT22(0x4f9d,sVar20) << 0x20 - bVar13;
  uVar37 = (short)uVar33 << 1;
  iVar44 = CONCAT22(0x2503,0x2db2 - (short)lVar2) >> ((byte)uVar11 & 0x1f);
  bVar13 = ((byte)(uVar11 ^ 0x5ae9) & 0x1f) % 0x11;
  uVar31 = sVar20 << bVar13 | (ushort)(CONCAT12((uVar37 & 0x200) != 0,sVar20) >> 0x11 - bVar13);
  iVar32 = CONCAT22((short)((uint)iVar44 >> 0x10),
                    (short)iVar44 + ((ushort)((ulonglong)lVar2 >> 0x20) & 0xe33d) +
                    (ushort)(0x23 < (byte)uVar9 || 0xfe < (byte)((byte)uVar9 - 0x24))) << 1;
  uVar8 = (ushort)(uVar9 >> 0x10);
  uVar41 = (CONCAT22((short)((uint)(iVar26 * -0x5d0c5b86) >> 0x10),
                     ((short)(char)(((char)sVar24 - ((byte)(uVar19 << 1) | (byte)(uVar19 >> 0xf))) +
                                   -1) & 0xff00U) >> 6) | 0xc800) ^ 2;
  uVar42 = (uVar37 | 1) ^ 0xd1f3;
  uVar19 = (ushort)(uVar11 >> 0x11);
  cVar17 = (char)((uVar11 ^ 0x5ae9) >> 1);
  cVar7 = (char)(uVar9 >> 8);
  uVar33 = CONCAT22(uVar8,CONCAT11(-1 < (char)uVar31,cVar7 >> 2));
  uVar11 = uVar33 >> 0xf;
  cVar22 = (char)(uVar11 >> 8) + '<';
  uVar37 = uVar42 >> 1;
  uVar36 = uVar37 | (ushort)(0x6e3ba1bf < uVar41 || 0xfffffffe < uVar41 + 0x91c45e40) << 0xf;
  iVar40 = CONCAT22(0x4f9d,uVar31) << 1;
  uVar9 = CONCAT22(uVar19,(ushort)CONCAT31((int3)(CONCAT22(uVar19,CONCAT11((uVar42 != 0) + 0x11U |
                                                                           cVar7 >> 7,cVar17)) >> 8)
                                           ,cVar17 << 1) >> 1) & 0xffff00ff;
  uVar19 = (ushort)(uVar41 + 0x91c45e41 >> 0x10);
  uVar41 = CONCAT22(uVar19,(ushort)(uVar41 + 0x91c45e41) >> 1);
  iVar10 = 0;
  if (uVar41 != 0) {
    for (; (uVar41 >> iVar10 & 1) == 0; iVar10 = iVar10 + 1) {
    }
  }
  bVar5 = (byte)uVar9;
  bVar13 = (bVar5 & 0x1f) % 9;
  bVar13 = (byte)(CONCAT11(uVar36 < 0xfd45,cVar22) >> bVar13) | cVar22 << 9 - bVar13;
  uVar42 = CONCAT11((short)uVar36 < -0x2ba,bVar5) + 0x67ee;
  uVar36 = (ushort)(uVar41 >> 1);
  bVar5 = (byte)(uVar42 >> 8);
  uVar38 = uVar36 - 1;
  uVar31 = ((ushort)iVar32 | (ushort)(iVar44 < 0) | uVar36) & uVar36;
  if ((short)uVar36 < 1) {
    uVar31 = uVar42;
  }
  iVar26 = CONCAT22((short)((uint)iVar40 >> 0x10),uVar36) << 1;
  iVar10 = CONCAT22(uVar8 >> 0xf | (ushort)((uVar33 << 0x12) >> 0x10),
                    CONCAT11(CARRY1(bVar13,bVar5) || 0xfe < (byte)(bVar13 + bVar5),(char)uVar11)) +
           -0x2eeebd4d;
  uVar11 = CONCAT22((short)((uint)iVar10 >> 0x10),(short)(char)iVar10) ^ 0xbcd86e5e;
  uVar15 = (undefined2)(uVar11 >> 0x10);
  uVar14 = (undefined3)(CONCAT22(uVar15,CONCAT11(uVar11 == 0,(char)uVar11) * -0x7e23) >> 8);
  uVar11 = CONCAT22(uVar19 >> 1,uVar38) >> 1;
  uVar41 = uVar11 | 0x80000000;
  iVar10 = CONCAT22((short)((uint)iVar32 >> 0x10),uVar31) -
           CONCAT22((short)(uVar9 >> 0x10),uVar42 * 2 | (ushort)(uVar37 << 7 | uVar36) >> 0xf);
  uVar9 = CONCAT31(uVar14,0x78) & 0xffff;
  uVar33 = CONCAT31((int3)(CONCAT22((short)((uint)iVar26 >> 0x10),
                                    ((ushort)iVar26 | (ushort)(iVar40 < 0)) + 0x8dc & 0xff00 &
                                    uVar38) >> 8),iVar10 < 0);
  if (-1 < (short)((short)uVar9 + -0x1cf1)) {
    uVar33 = uVar9;
  }
  uVar39 = (ushort)uVar11;
  uVar43 = (ushort)iVar10 | uVar39;
  uVar11 = uVar41 >> 1;
  bVar5 = (byte)uVar11;
  bVar13 = bVar5 & 7;
  sVar24 = (short)CONCAT31(uVar14,(char)(uVar33 >> 8));
  uVar9 = uVar9 | 1 << ((uVar38 & 0x3e) >> 1);
  uVar33 = CONCAT22((short)(uVar33 >> 0x10),
                    CONCAT11('x' << bVar13 | 0x78U >> 8 - bVar13,(char)uVar33)) - 1;
  uVar42 = (ushort)(uVar33 >> 0x10);
  uVar31 = (ushort)uVar33 >> 1 | (ushort)((uVar33 & 1) != 0) << 0xf;
  lVar2 = (longlong)CONCAT22(uVar15,sVar24 << 1 | (ushort)(sVar24 < 0)) * (longlong)(int)uVar9;
  uVar33 = (uint)((ulonglong)lVar2 >> 0x20);
  bVar5 = bVar5 & 0x1f;
  uVar33 = uVar33 << bVar5 | uVar33 >> 0x20 - bVar5;
  uVar19 = (ushort)lVar2 ^ 0x100;
  uVar37 = uVar19 & 0xf;
  iVar26 = uVar11 + 0x4a0972df + (uint)((uVar31 >> uVar37 & 1) != 0);
  iVar40 = ((uint)lVar2 ^ 0x100) << 7;
  uVar8 = (ushort)iVar40;
  iVar32 = uVar9 - CONCAT22((short)(uVar33 >> 0x10),
                            CONCAT11((byte)(uVar33 >> 8) & (byte)uVar33,(byte)uVar33));
  uVar36 = (ushort)iVar32;
  uVar36 = uVar36 >> 8 | uVar36 << 8;
  iVar44 = CONCAT22((short)(uVar41 >> 0x10),(uVar39 + uVar19 ^ 0xc5e) - (uVar43 + 0xc052));
  uVar19 = (short)iVar26 * -0x7684;
  uVar9 = CONCAT22(uVar42,(uVar31 ^ 1 << uVar37) << 5) >> 9;
  uVar11 = CONCAT22((short)((uint)iVar40 >> 0x10),uVar8 >> 0xd | uVar8 << 3);
  uVar33 = uVar11 ^ 1 << (uVar36 & 0x1f);
  uVar37 = (ushort)(uVar33 >> 0x10);
  iVar40 = CONCAT22((short)((uint)iVar10 >> 0x10),
                    uVar43 + 0x94b5 + (ushort)((uVar11 >> (uVar36 & 0x1f) & 1) != 0)) + 0x5117d28a;
  iVar10 = CONCAT22(uVar42 >> 9,(short)uVar33) + 0x6a6f93d0;
  if ((POPCOUNT(uVar19 & (ushort)uVar9 & 0xff) & 1U) == 0) {
    iVar10 = CONCAT22(uVar37,(ushort)uVar9);
  }
  uVar42 = (ushort)iVar40 | 1 << ((short)uVar8 >> 0xf & 0xfU);
  uVar21 = (uint3)((ushort)((uint)iVar10 >> 0x10) & 0xff) | (uint3)iVar10 & 0xff00 |
           (uint3)((uint)(iVar10 << 0x18) >> 8);
  uVar8 = (ushort)(CONCAT22(uVar37,CONCAT11((char)(uVar9 >> 8) >> 1,(char)uVar9)) >> 8);
  uVar31 = uVar8 & 0xff |
           (ushort)(((uint)(byte)(CONCAT11((uVar42 >> 10 & 1) != 0,(char)uVar9) >> 1) << 0x18) >>
                   0x10);
  iVar32 = CONCAT22((short)((uint)iVar26 >> 0x10),uVar19) * 2 +
           (uint)((CONCAT22((short)((uint)iVar32 >> 0x10),uVar36) >> (uVar36 & 0x1f) & 1) != 0);
  uVar15 = (undefined2)((uint)iVar32 >> 0x10);
  uVar19 = CONCAT11(iVar32 != 0,(byte)iVar32);
  uVar11 = (int)(short)(uVar37 >> 8 | uVar8 & 0xff00) * (int)(short)uVar19;
  uVar41 = iVar44 * -0x4936a473;
  iVar26 = CONCAT22(uVar31,(short)uVar11) << 1;
  uVar37 = (ushort)iVar26 | (ushort)((short)uVar31 < 0);
  uVar27 = CONCAT31(uVar21,(byte)((uint)iVar10 >> 0x1b));
  sVar24 = (short)((uint)iVar26 >> 0x10);
  uVar33 = (CONCAT22((short)((uint)iVar40 >> 0x10),uVar42) | 0x400) * 0x3af6552 >> 1;
  uVar9 = iVar44 * -0x80000000;
  uVar45 = uVar33 | uVar9;
  if (uVar9 == 0) {
    uVar27 = CONCAT22((short)(uVar21 >> 8),
                      CONCAT11((char)(uVar11 >> 0x18),(char)(uVar11 >> 0x10) - (iVar32 != 0)));
  }
  uVar8 = (uVar37 ^ 1) << 0xc;
  uVar9 = (int)sVar24 >> 0xf;
  bVar13 = (byte)iVar32 & 0x1f;
  uVar37 = uVar8 | (ushort)(CONCAT12(CONCAT22(uVar15,uVar19) < 0xb136d5,uVar37) >> 5);
  if ((uVar11 & 0x4000) != 0) {
    uVar37 = uVar19;
  }
  uVar11 = 0;
  if (uVar45 != 0) {
    for (; (uVar45 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
    }
  }
  uVar31 = (ushort)uVar33 & 0xfeff;
  uVar45 = (uVar11 | 1 << (uVar41 & 0x1f)) & 0xfff7ffff;
  bVar46 = ((uVar9 << bVar13 | uVar9 >> 0x20 - bVar13) & 0x6600) == 0;
  uVar11 = CONCAT31((int3)(CONCAT22(uVar15,uVar19 + 0x7c89) >> 8),bVar46);
  uVar33 = CONCAT22((short)((uint)uVar27 >> 0x10),
                    CONCAT11((byte)((uint)uVar27 >> 8) | (byte)uVar27,(byte)uVar27)) & 0xffffb061 &
           uVar45;
  lVar2 = (longlong)
          CONCAT22(sVar24,CONCAT11((char)(uVar37 >> 8) << 1 | CARRY4(uVar11,uVar45),(char)uVar37)) *
          (longlong)(int)uVar11;
  uVar27 = (undefined4)((ulonglong)lVar2 >> 0x20);
  sVar24 = (ushort)uVar41 + 0x2bb6;
  uVar11 = (uint)lVar2;
  if (0xd449 < (ushort)uVar41 || sVar24 == 0) {
    uVar11 = uVar33;
  }
  iVar10 = uVar33 + 0xaca1a70a;
  if (-1 < iVar10) {
    uVar27 = CONCAT22((short)((ulonglong)lVar2 >> 0x30),sVar24);
  }
  bVar13 = ((bVar46 + (char)uVar45) - (char)lVar2) - 1U & 7;
  uVar33 = CONCAT31((int3)((uint)uVar27 >> 8),(byte)uVar27 << bVar13 | (byte)uVar27 >> 8 - bVar13) |
           0x20000000;
  uVar37 = (ushort)(uVar11 >> 0x10);
  uVar11 = CONCAT22((short)(uVar41 >> 0x10),sVar24) >> 1;
  iVar40 = uVar11 - uVar33;
  if ((int)uVar33 <= (int)uVar11) {
    uVar33 = ((iVar10 * 0x20000 ^ 0xce00U) & 0x7fff8000) << 1;
  }
  uVar19 = (ushort)iVar40;
  uVar42 = uVar19 * 3 + 0x7dac;
  iVar10 = 0x1eb93619 - CONCAT22(uVar37,uVar42);
  bVar5 = (byte)iVar10;
  uVar15 = (undefined2)((uint)iVar40 >> 0x10);
  uVar11 = CONCAT22(uVar15,uVar19 >> 1 | uVar31 * -0x8000);
  sVar24 = ((uVar42 >> 2 & 1) != 0) + 0xb5f3;
  bVar13 = (byte)sVar24;
  cVar7 = bVar13 + 0x91;
  uVar19 = uVar31 + uVar19 * 2;
  if (0x6e < bVar13 || cVar7 == '\0') {
    uVar19 = uVar42;
  }
  uVar9 = CONCAT31((int3)(CONCAT22(0x5000,sVar24) >> 8),cVar7) >> 1;
  iVar40 = CONCAT22(0x2800,(ushort)(byte)uVar9 * (ushort)(byte)(uVar9 >> 8));
  uVar9 = uVar11 >> 0xf;
  uVar41 = (CONCAT31((int3)((uint)iVar10 >> 8),bVar5 >> (bVar5 & 7) | bVar5 << 8 - (bVar5 & 7)) >> 1
           ) << 0x11 | uVar9;
  lVar2 = (longlong)iVar40 * (longlong)iVar40;
  if ((int)lVar2 != lVar2) {
    uVar11 = (uint)CONCAT21(uVar15,(char)(((uVar33 & 0xffff0000) >> 2) >> 8) + '\x1f') << 8;
  }
  sVar24 = (short)CONCAT31((int3)(uVar41 >> 8),-(char)uVar9);
  uVar31 = sVar24 + 0xb687;
  uVar15 = (undefined2)(uVar41 >> 0x10);
  uVar27 = CONCAT31((int3)(CONCAT22(uVar15,uVar31) >> 8),(POPCOUNT(uVar31 & 0xff) & 1U) != 0);
  if ((SBORROW2(sVar24,0x4979) != false) == (short)uVar31 < 0) {
    uVar27 = CONCAT22(uVar15,(short)uVar27);
  }
  uVar9 = (uVar9 & 0xffff) >> (sbyte)uVar27;
  sVar24 = (short)uVar27 << 1;
  uVar15 = (undefined2)((uint)uVar27 >> 0x10);
  uVar11 = 0x545efc38 -
           CONCAT31((int3)(CONCAT22(uVar15,sVar24) >> 8),
                    0 < (short)(((short)uVar11 << 1 | (ushort)(uVar19 * 0xebb) >> 0xf) * 0x4e4c |
                               (ushort)((int)uVar11 < 0)));
  uVar16 = (undefined2)(uVar11 >> 0x10);
  bVar13 = (char)((ushort)sVar24 >> 8) - 1;
  iVar40 = (uVar11 & 0xffff) * (uint)bVar13 * 0x100;
  uVar41 = (uVar37 & 0xfbff) * 0x10000;
  sVar24 = (uVar31 >> 8) - (short)((uint)iVar40 >> 0x10);
  cVar7 = (char)((uint)iVar40 >> 0x10);
  iVar26 = CONCAT22((ushort)((uVar33 & 0xffff0000) >> 0x13),sVar24 * 2 | (ushort)(sVar24 < 0));
  uVar33 = (iVar26 * 9 + 0xfc) - (uVar9 & 0xffff0000 | 0x7400) >> 4;
  iVar10 = (short)CONCAT31((int3)(CONCAT22(uVar16,(short)iVar40) >> 8),0xcd) * 0x7400;
  uVar28 = (undefined2)(uVar9 >> 0x10);
  uVar11 = ~(CONCAT31((int3)(CONCAT22((short)((CONCAT22((short)((ulonglong)lVar2 >> 0x30),
                                                        ((ushort)uVar9 >> 0xb |
                                                        ((ushort)uVar9 & 7) << 5) * 2 + 1) &
                                              ~(1 << (uVar31 >> 8 & 0x1f))) * 0x4ca33a08 >> 0x10),
                                      CONCAT11((char)((uint)iVar40 >> 0x18) << 1,cVar7)) >> 8),
                      cVar7 + -0x34) | 0x100);
  if (-1 < (int)(iVar26 + uVar41 + 1)) {
    uVar11 = uVar41;
  }
  uVar9 = uVar33 ^ 1 << (uVar11 & 0x1f);
  uVar37 = (short)uVar33 + 0x76c8;
  uVar33 = CONCAT22(uVar16,(short)iVar10) >> 1;
  if (!(bool)((bVar13 ^ 0x5f) & 1)) {
    uVar37 = (ushort)uVar9;
    uVar33 = uVar11;
  }
  uVar41 = uVar9 & 0xffff | 0xc000;
  uVar45 = (CONCAT31((int3)(CONCAT22(uVar28,(short)((uint)iVar10 >> 0x10)) >> 8),
                     -(char)((uint)iVar10 >> 0x10)) & 0x3fff) << 0x10 | uVar33 & 0xffff;
  sVar24 = (short)(((uVar45 % uVar41 & 0x3fff) << 0x10 | uVar45 / uVar41 & 0xffff) /
                  (uint)(uVar37 | 0xc000));
  uVar33 = CONCAT22((short)(uVar33 >> 0x10),sVar24) | uVar11;
  uVar31 = (ushort)(uVar11 >> 0x10);
  uVar21 = CONCAT21((short)(uVar33 >> 0x10),(char)(uVar33 >> 8) * '\x02');
  uVar37 = CONCAT11((char)(uVar11 >> 8) + 'Z',uVar33 == 0);
  uVar19 = uVar37 | 4;
  uVar11 = CONCAT22(uVar31,uVar37);
  uVar16 = (undefined2)((uVar9 | 0xc000) * -0x48f87aeb >> 0x10);
  uVar37 = 0;
  if ((uVar21 & 0xbc6105) != 0) {
    uVar37 = uVar19 * 0x3dc5;
    uVar15 = uVar16;
  }
  uVar42 = (ushort)(uVar9 | 0xc000) ^ 1 << (uVar37 & 0xf);
  uVar37 = uVar37 ^ 0x40;
  bVar13 = (byte)uVar37 & 0xf;
  uVar42 = uVar42 >> bVar13 | uVar42 << 0x10 - bVar13;
  iVar10 = (uVar21 & 5) * 0x100 * (uint)uVar37;
  uVar41 = CONCAT22(uVar15,uVar37 >> 1) & 0xffff57ff;
  sVar23 = (short)uVar41;
  sVar20 = sVar23 - uVar42;
  bVar13 = (byte)((uint3)((uint3)uVar31 | (uint3)(((uVar11 | 4) << 0x18) >> 8)) >> 0xd) | 0xc0;
  uVar37 = (ushort)iVar10 & 0x3fff;
  uVar33 = (ushort)(uVar19 * 0x3dc5) & 0x1f;
  sVar23 = (CONCAT11((char)(uVar37 % (ushort)bVar13),(char)(uVar37 / bVar13)) + uVar19 * -0x3dc5) -
           (ushort)((CONCAT22((short)(((uVar11 >> 8) << 0x13) >> 0x10),
                              CONCAT11(~bVar13,sVar23 < (short)uVar42)) >> uVar33 & 1) != 0);
  uVar37 = (ushort)(CONCAT22(uVar28,(short)((uint)iVar10 >> 0x10)) >> 1);
  sVar25 = uVar37 + 0x2698;
  bVar13 = ~bVar13 & ~(byte)((uint)(1 << uVar33) >> 8);
  if (uVar37 < 0xd968 && sVar25 != 0) {
    bVar13 = (byte)(uVar42 >> 8);
  }
  uVar11 = CONCAT31((int3)(CONCAT22((short)(uVar41 >> 0x10),sVar20) >> 8),(char)sVar20) & 0xffffff0f
  ;
  sVar18 = (sbyte)uVar11;
  uVar31 = (ushort)(uVar11 >> 0x10);
  sVar20 = CONCAT11(-100 - (char)(uVar11 >> 8),sVar18);
  uVar4 = CONCAT14((ushort)(uVar19 * 0x66c6) < 0x83c2,
                   CONCAT22((short)(uVar9 >> 0x10),uVar42 * 2 + 1)) ^ 0xa31d;
  uVar33 = (uint)CONCAT11((char)((ushort)sVar23 >> 8) + -0x74,(char)sVar23) *
           (uint)(ushort)((ushort)(sVar24 + 0x5e82U) >> sVar18 | sVar25 << 0x10 - sVar18);
  uVar11 = CONCAT22((ushort)((uint)((int)uVar4 << 0x1a) >> 0x10) | (ushort)((uVar4 >> 7) >> 0x10),
                    sVar20 + 0x43);
  uVar11 = uVar11 << sVar18 | uVar11 >> 0x20 - sVar18;
  uVar37 = CONCAT11((char)(uVar33 >> 0x18),(char)(uVar33 >> 0x10) - bVar13);
  if ((char)(bVar13 + sVar18) < '\0') {
    uVar37 = (ushort)uVar11;
  }
  uVar33 = CONCAT22(uVar16,(short)(char)(uVar33 >> 1) * (short)(char)uVar37) & 0xffff00ff;
  bVar5 = (bVar13 & 0x1f) % 9;
  sVar24 = (short)CONCAT31((int3)(CONCAT22(uVar31,sVar20) >> 8),bVar13) * -0x25fa;
  bVar13 = (byte)sVar24;
  bVar5 = ((byte)((uVar37 >> 8) >> bVar5) | (byte)((uVar37 >> 8) << 9 - bVar5)) & bVar13;
  iVar10 = (CONCAT22((short)(uVar33 >> 0x10),
                     CONCAT11(((char)bVar5 < '\0') << 7 | (bVar5 == 0) << 6 |
                              ((uVar8 & 0x1000) != 0) << 4 | ((POPCOUNT(bVar5) & 1U) == 0) << 2,
                              (char)uVar33)) | 0x200) + 1;
  bVar13 = bVar13 >> (bVar13 & 7) | bVar13 << 8 - (bVar13 & 7);
  sVar23 = (short)CONCAT31((int3)((uint)iVar10 >> 8),(char)iVar10 + '\x10') + 0x9d +
           (short)CONCAT31((int3)(CONCAT22(uVar31,sVar24) >> 8),bVar13);
  iVar10 = CONCAT22((short)((uint)iVar10 >> 0x10),sVar23 * 0x50cb);
  bVar5 = ((char)((ushort)sVar24 >> 8) - bVar13) - 1;
  sVar24 = CONCAT11(bVar5,bVar13) << 5;
  iVar10 = (iVar10 << 0x11 | (uint)(CONCAT14((char)((char)sVar23 * '\x03') < '\0',iVar10) >> 0x10))
           << 5;
  lVar2 = (ulonglong)
          CONCAT22((short)((uint)iVar10 >> 0x10),(short)iVar10 << 1 | (ushort)uVar11 >> 0xf) *
          (ulonglong)uVar11;
  uVar11 = uVar11 + 0xbee265a1;
  uVar37 = (ushort)((ulonglong)lVar2 >> 0x20);
  uVar8 = (ushort)((ulonglong)lVar2 >> 0x30);
  uVar37 = uVar37 >> 1 | uVar37 << 0xf;
  iVar40 = CONCAT22(uVar8,uVar37);
  iVar10 = (uVar11 & ~(1 << (uVar37 & 0x1f))) << 1;
  iVar26 = (uint)CONCAT11((char)((uVar11 & 0xffff) >> 8) << 1,(char)(uVar11 & 0xffff)) + iVar40 + 1;
  sVar24 = (CONCAT11(~(((int)((ulonglong)lVar2 >> 0x20) != 0) + (char)((ulonglong)lVar2 >> 8)),
                     (char)(CONCAT22(uVar31,CONCAT11((char)((ushort)sVar24 >> 8) + 'j',
                                                     (byte)sVar24 | bVar5 >> 3)) >> 1)) + -1) * 2;
  uVar33 = CONCAT31((int3)((uint)iVar40 >> 8),-1 < sVar24);
  uVar42 = ((short)iVar10 - (short)uVar33) - 1;
  uVar33 = ((int)((uint)lVar2 >> 0x13) >> 8) * (uVar33 & 0xffff);
  uVar9 = CONCAT22((short)((uint)iVar10 >> 0x10),uVar42) >> 1;
  uVar41 = uVar9 | 0x80000000;
  uVar36 = (ushort)uVar9;
  uVar19 = (ushort)((uint)iVar26 >> 0x10);
  uVar37 = (short)iVar26 << 1 | uVar36 >> 0xf;
  uVar9 = CONCAT31((int3)(CONCAT22(uVar31 >> 1,sVar24) >> 8),
                   ((char)sVar24 + -0x5d) - (uVar42 < 0x885a)) + uVar41;
  iVar10 = 0;
  if (uVar9 != 0) {
    for (; (uVar9 >> iVar10 & 1) == 0; iVar10 = iVar10 + 1) {
    }
  }
  uVar31 = (ushort)iVar10;
  if ((uVar33 & 0xffff) == 0) {
    uVar31 = (ushort)uVar33;
  }
  iVar10 = (uVar33 & 0xffff) * ((uint)(uVar19 >> 1) | (uVar37 & 1) << 0xf);
  uVar15 = (undefined2)((uint)(CONCAT22(uVar19,uVar37) << 0xf) >> 0x10);
  uVar37 = (ushort)iVar10 | 1 << (uVar31 & 0xf);
  sVar24 = (short)uVar11 * 0x304a + uVar36 * 8 + -0x2f11;
  sVar24 = (short)CONCAT31((int3)(CONCAT22(uVar15,sVar24) >> 8),(char)sVar24 << 1);
  uVar9 = uVar9 * 8;
  uVar11 = uVar11 * -0x1a699f6c | (uint)((uVar37 >> 1 & 1) != 0);
  if ((POPCOUNT(sVar24 - 1U & 0xff) & 1U) != 0) {
    uVar11 = uVar9;
  }
  uVar37 = (short)(char)(byte)(uVar37 >> 10) << 1;
  uVar45 = (uint)uVar37 << 0xc;
  uVar33 = 0x1f;
  if (uVar41 != 0) {
    for (; uVar41 >> uVar33 == 0; uVar33 = uVar33 - 1) {
    }
  }
  uVar9 = CONCAT22((short)(uVar9 >> 0x10),((ushort)uVar9 ^ 0x2000) + 1) & 0xffffff0f;
  uVar41 = uVar9 | uVar45;
  sVar18 = (sbyte)uVar9;
  uVar19 = (ushort)uVar45 >> sVar18 | (short)uVar41 << 0x10 - sVar18;
  bVar13 = (byte)((uint)iVar10 >> 0x10);
  iVar40 = 0x1f;
  if (uVar33 != 0) {
    for (; uVar33 >> iVar40 == 0; iVar40 = iVar40 + -1) {
    }
  }
  uVar16 = CONCAT11(0 >> (bVar13 & 0x1f),bVar13);
  uVar41 = CONCAT22((short)(uVar41 >> 0x10),uVar16);
  uVar45 = CONCAT22(uVar15,sVar24 + 0x198a) | 0xc0000000;
  uVar3 = CONCAT44(((uVar37 & 0xffff0) << 0xc) >> 8 | (uVar19 & 0xff00) << 8 |
                   (uVar19 & 0x3f) << 0x18,
                   CONCAT22((short)((int)((uint)uVar8 << 0x17) >> 0x11),
                            CONCAT11((byte)((uint)iVar10 >> 0x1f),
                                     (bVar13 + sVar18) * '\x04' | (byte)(bVar13 + sVar18) >> 6)));
  uVar9 = (uint)(uVar3 / uVar45);
  uVar3 = uVar3 % (ulonglong)uVar45;
  sVar24 = (short)uVar3 << 1;
  bVar5 = (byte)sVar24 | (byte)(uVar3 >> 8) >> 7;
  uVar37 = CONCAT11(~(byte)((ushort)sVar24 >> 8),bVar5 >> (bVar13 & 7) | bVar5 << 8 - (bVar13 & 7));
  bVar46 = uVar9 < uVar41;
  if (uVar9 != uVar41) {
    uVar9 = uVar41;
  }
  uVar8 = uVar37 - 0x7e0;
  sVar24 = uVar8 - bVar46;
  if ((uVar37 < 0x7e0 || uVar8 < bVar46) || sVar24 == 0) {
    uVar9 = CONCAT22((short)(uVar9 >> 0x10),uVar16);
  }
  return uVar9 + uVar45 * 2 + uVar41 + CONCAT22((short)(uVar3 >> 0x10),sVar24) + iVar40 +
         (CONCAT22((short)(uVar33 >> 0x10),(ushort)uVar33 >> 1) ^ 2) +
         CONCAT22((short)((uVar11 + 0xd9beaf4b) * 2 >> 0x10),
                  (ushort)-(ushort)((int)uVar45 < 0) >> 1 | (ushort)((int)uVar45 < 0) * -0x8000) +
         -0x7d3ed738;
}



// WARNING: Removing unreachable block (ram,0x0804b777)
// WARNING: Removing unreachable block (ram,0x0804bcea)
// WARNING: Removing unreachable block (ram,0x0804b77f)
// WARNING: Removing unreachable block (ram,0x0804b804)
// WARNING: Removing unreachable block (ram,0x0804b761)
// WARNING: Removing unreachable block (ram,0x0804b83b)
// WARNING: Removing unreachable block (ram,0x0804b8c4)
// WARNING: Removing unreachable block (ram,0x0804b8a4)
// WARNING: Removing unreachable block (ram,0x0804b90f)
// WARNING: Removing unreachable block (ram,0x0804b932)
// WARNING: Removing unreachable block (ram,0x0804b9d6)
// WARNING: Removing unreachable block (ram,0x0804b9d3)
// WARNING: Removing unreachable block (ram,0x0804ba26)
// WARNING: Removing unreachable block (ram,0x0804ba4f)
// WARNING: Removing unreachable block (ram,0x0804ba9c)
// WARNING: Removing unreachable block (ram,0x0804bac0)
// WARNING: Removing unreachable block (ram,0x0804bb39)
// WARNING: Removing unreachable block (ram,0x0804baf4)
// WARNING: Removing unreachable block (ram,0x0804baf7)

int log_size_10_var_003(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  undefined3 uVar12;
  undefined2 uVar13;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined2 uVar14;
  byte bVar15;
  byte bVar16;
  sbyte sVar17;
  undefined uVar18;
  ushort uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint3 uVar23;
  byte bVar24;
  short sVar25;
  ushort uVar26;
  char cVar29;
  short sVar27;
  int iVar28;
  char cVar30;
  byte bVar31;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  short sVar35;
  undefined2 uVar36;
  short sVar37;
  int iVar38;
  int iVar39;
  ushort uVar40;
  uint uVar41;
  uint uVar42;
  undefined2 uVar44;
  int iVar43;
  bool bVar45;
  
  for (uVar22 = 0x1f; 0xff0072fbU >> uVar22 == 0; uVar22 = uVar22 - 1) {
  }
  uVar42 = uVar22 & 0xffff | 0xc000;
  uVar8 = uVar22 & 0xffff | 0xc000;
  bVar15 = (byte)(uVar8 / uVar42);
  uVar32 = (ushort)(uVar8 % uVar42 >> 2) >> 10 | 0xbec0;
  for (uVar42 = 0; (0x4add3532U >> uVar42 & 1) == 0; uVar42 = uVar42 + 1) {
  }
  bVar4 = (byte)uVar42;
  cVar30 = ((char)uVar32 - (bVar4 | 0x34)) + -1;
  uVar8 = CONCAT31((int3)(CONCAT22(0xff00,uVar32) >> 8),cVar30);
  if (cVar30 == '\0') {
    uVar8 = CONCAT22(0x9768,CONCAT11((bVar4 | 0x34) != 0,bVar4) | 0x34);
  }
  uVar7 = 0;
  if (uVar8 != 0) {
    uVar7 = uVar8;
  }
  iVar38 = CONCAT22((short)(uVar22 >> 0x10),(ushort)bVar15 * (ushort)bVar15) >> (bVar4 & 0x1f);
  lVar3 = (ulonglong)uVar7 * 0x6827c8b;
  uVar19 = (ushort)iVar38;
  uVar32 = uVar19 << 7;
  uVar5 = CONCAT11(~((char)((ulonglong)lVar3 >> 8) >> 1),(char)((short)lVar3 >> 1));
  uVar41 = 0x15a20000U >> (bVar4 & 0x1f) | 0x15a20000 << 0x20 - (bVar4 & 0x1f);
  uVar8 = CONCAT22((short)((ulonglong)lVar3 >> 0x10),uVar5) | 1 << (uVar41 & 0x1f);
  uVar12 = (undefined3)(uVar8 >> 8);
  cVar30 = (char)uVar8 + '[';
  uVar7 = CONCAT31(uVar12,cVar30);
  iVar39 = (uint)CONCAT11((uVar5 & (ushort)uVar41) != 0,
                          (char)((short)((ulonglong)lVar3 >> 0x20) << (bVar4 & 0x1f))) << 1;
  uVar22 = 0x1f;
  if (uVar7 != 0) {
    for (; uVar7 >> uVar22 == 0; uVar22 = uVar22 - 1) {
    }
  }
  sVar25 = (short)iVar39 >> 1;
  uVar7 = CONCAT22(0xda7d,sVar25);
  uVar13 = (undefined2)(uVar8 >> 0x10);
  uVar5 = (ushort)CONCAT31(uVar12,cVar30) & 0xff7f | (ushort)uVar22;
  iVar43 = CONCAT22(uVar13,uVar5);
  bVar45 = 0 < (short)uVar5;
  bVar15 = bVar45 >> bVar45 | bVar45 << 8 - bVar45;
  uVar8 = uVar22 >> (bVar15 & 0x1f) | iVar43 << 0x20 - (bVar15 & 0x1f);
  uVar32 = uVar32 >> 0xe | (uVar32 | uVar19 >> 9) << 2;
  uVar22 = uVar8 << 10;
  if ((uVar8 >> 0x16 | uVar22) <= uVar41) {
    iVar43 = CONCAT22(uVar13,sVar25);
  }
  uVar9 = iVar43 << 1 | uVar22 >> 0x1f;
  uVar8 = CONCAT22((short)((uint)(iVar43 << 1) >> 0x10),(short)uVar9 + 0x2b28) << 1;
  uVar10 = uVar8 | uVar22 >> 0x1f;
  iVar38 = CONCAT22((short)((uint)iVar38 >> 0x10),uVar32 + 0xbbbe);
  uVar22 = CONCAT31((int3)(CONCAT22((short)(((uVar42 | 0xc000) << 6) >> 0x10),0x7c8b) >> 8),bVar15)
           | 0x800;
  if (uVar32 < 0x4442) {
    uVar22 = uVar41;
  }
  bVar4 = (byte)uVar10;
  uVar12 = (undefined3)(uVar8 >> 8);
  bVar4 = bVar4 >> 1 | bVar4 << 7;
  uVar22 = uVar22 & 0xffffff0f;
  sVar6 = (short)(uVar22 >> 0x10);
  uVar5 = (ushort)(uVar41 >> 0x10);
  uVar32 = (short)(ushort)uVar41 >> 1;
  iVar21 = CONCAT22(uVar5,uVar32) -
           ((int)(short)((ushort)((uVar7 >> (bVar15 & 0x1f)) >> 0x10) |
                        (ushort)((uVar7 << 0x20 - (bVar15 & 0x1f)) >> 0x10)) >> 0xf);
  iVar20 = CONCAT22(sVar6,(short)uVar22 << (sbyte)uVar22 |
                          (ushort)CONCAT31(uVar12,bVar4) >> 0x10 - (sbyte)uVar22) >> 7;
  iVar28 = iVar38 << 7;
  iVar11 = (CONCAT22((short)(uVar8 >> 0x10),
                     ~(ushort)CONCAT31(uVar12,bVar4 >> 1) | 1 << (uVar32 & 0xf)) << 1) >>
           ((byte)iVar20 & 0x1f);
  uVar22 = (int)(short)iVar11 *
           (int)(short)(CONCAT11((char)((uint)iVar39 >> 8) >> 1,-1 < iVar43 && uVar9 != 0) * 2 +
                       -0x65e6);
  uVar19 = (ushort)iVar20;
  uVar32 = uVar19 - (ushort)uVar22;
  sVar6 = sVar6 >> 7;
  sVar25 = (short)(((uVar22 >> 0x10 & 0xff) << 0x10 | uVar22 & 0xffff) / (uVar32 | 0xc000));
  uVar13 = (undefined2)((uint)iVar28 >> 0x10);
  lVar3 = (longlong)CONCAT22((short)((uint)iVar11 >> 0x10),sVar25) *
          (longlong)
          CONCAT22(uVar13,(short)((ushort)(CONCAT14((int)uVar10 < 0,iVar38) >> 0x1a) |
                                 (ushort)iVar28) >> 1);
  uVar19 = CONCAT11((char)uVar32,uVar19 < (ushort)uVar22) + 1;
  uVar42 = CONCAT22((short)((uint)iVar21 >> 0x10),(short)iVar21 + sVar25) + 0x12736d7a;
  uVar32 = ~(uVar32 | 0xc000);
  uVar5 = uVar5 & ~(ushort)((uint)(1 << (uVar32 & 0x1f)) >> 0x10);
  uVar8 = CONCAT31((int3)(CONCAT22(sVar6,uVar32) >> 8),99);
  sVar25 = ((ushort)(((uint)lVar3 & 0xffff) * (uint)uVar19 >> 0x10) | 0x6300) -
           (uVar32 + uVar19 + -0x77ff);
  uVar7 = CONCAT22((short)((ulonglong)lVar3 >> 0x30),sVar25);
  uVar22 = uVar7 & ~(1 << (uVar19 & 0x1f));
  if ((uVar7 >> (uVar19 & 0x1f) & 1) != 0 || sVar25 == 0) {
    uVar22 = uVar8;
  }
  if (SCARRY4(uVar22,0x5a5ff4bb)) {
    uVar8 = CONCAT22(sVar6,(short)uVar22 + -0xb45);
  }
  bVar15 = (byte)(sVar25 >> 0xf);
  bVar4 = (byte)uVar8 >> 1;
  uVar14 = (undefined2)(uVar8 >> 0x10);
  uVar22 = CONCAT22(uVar14,(ushort)bVar4);
  iVar39 = (CONCAT22(uVar13,(uVar19 - sVar25) + 0x6ad3) & 0x6ae1d95a) << 1;
  uVar7 = uVar22 >> (bVar4 & 0x1f) | uVar22 << 0x20 - (bVar4 & 0x1f);
  uVar9 = CONCAT22(uVar5 | 0xcfb9,0xb827);
  bVar16 = (byte)uVar7;
  uVar22 = 1 << ((ushort)((short)iVar39 + 1) & 0x1f);
  uVar41 = (uint)CONCAT21(uVar14,(byte)((ushort)((ushort)bVar4 << 0xd) >> 8) >> (bVar16 & 0x1f)) <<
           8 | uVar22;
  if ((ushort)uVar42 < 0xb828) {
    uVar42 = uVar41;
  }
  uVar42 = (uint)((int)uVar42 >> (bVar16 & 0x1f)) >> (bVar16 & 0x1f);
  iVar43 = (CONCAT22((short)((ulonglong)lVar3 >> 0x10),
                     (short)(char)(bVar15 >> 6 |
                                  (byte)((ushort)(CONCAT11(bVar15,(byte)sVar25 >> 2) << 10) >> 8)))
           & 0x7fff9fff) << 1;
  uVar32 = (ushort)(byte)((char)(uVar8 >> 8) >> 7 | 0xc0);
  uVar19 = (ushort)iVar43;
  bVar15 = (byte)(uVar19 % uVar32);
  iVar38 = 0;
  if (uVar9 != 0) {
    for (; (uVar9 >> iVar38 & 1) == 0; iVar38 = iVar38 + 1) {
    }
  }
  iVar21 = uVar7 << (bVar16 & 0x1f);
  bVar16 = (byte)((uint)iVar21 >> 8);
  bVar4 = (byte)iVar21;
  bVar24 = (char)((byte)iVar38 | bVar15) >> (bVar4 & 0x1f);
  uVar40 = (ushort)uVar42;
  uVar34 = 0x9c17;
  if ((bVar24 & 0x10) == 0) {
    uVar34 = uVar40;
  }
  uVar7 = (CONCAT22(uVar5,uVar34) | 0xcfb90000) & 0xfff7ffff | 0x2000000;
  uVar8 = CONCAT31((int3)(CONCAT22((short)((uint)iVar21 >> 0x10),
                                   CONCAT11(bVar16 << 7 | bVar16 >> 1,bVar4)) >> 8),bVar4) &
          0xffffff86;
  uVar8 = uVar8 >> ((byte)uVar8 & 0x1f);
  uVar26 = (ushort)CONCAT31((int3)((uint)iVar38 >> 8),bVar24);
  uVar5 = uVar26 >> 1;
  uVar34 = (short)uVar8 >> 1;
  if (-1 < CONCAT22((short)((uint)iVar43 >> 0x10),CONCAT11(bVar15,(char)(uVar19 / uVar32))) << 1) {
    uVar34 = uVar40;
  }
  uVar33 = ~(ushort)((int)uVar7 >> 1) & ~(1 << (uVar5 & 0xf));
  bVar15 = (byte)uVar34 & 0xf;
  uVar32 = uVar34 << bVar15 | uVar34 >> 0x10 - bVar15;
  uVar9 = CONCAT22((short)((uint)iVar39 >> 0x10),0xd7ec);
  uVar19 = uVar32 + (uVar40 & 0xf7ff);
  uVar41 = CONCAT22((short)(CONCAT31((int3)(uVar41 >> 8),(char)uVar22 + -0x41) * 0x75b5e275 >> 0x1f)
                    ,uVar32 + uVar33) | 0xcc2e1b2d;
  bVar15 = (byte)uVar19 & 0xf;
  uVar32 = uVar19 << bVar15 | uVar19 >> 0x10 - bVar15;
  bVar24 = (byte)uVar41;
  bVar15 = (byte)uVar32 & 0x1f;
  uVar22 = CONCAT22((short)(uVar8 >> 0x10),uVar32) >> bVar15 |
           (uVar42 & 0xfffff7ff) << 0x20 - bVar15;
  iVar39 = uVar22 << 1;
  bVar4 = (byte)iVar39;
  bVar16 = (byte)(uVar22 >> 0x1f);
  bVar31 = bVar24 >> 2 | bVar24 << 6;
  bVar24 = (bVar4 | bVar16) + bVar31;
  uVar32 = (ushort)CONCAT31((int3)((uint)iVar39 >> 8),bVar24);
  sVar25 = bVar31 - uVar32;
  uVar23 = (uint3)(CONCAT22((short)(uVar41 >> 0x10),sVar25) >> 8);
  bVar15 = (bVar24 & 0x1f) % 0x11;
  uVar32 = (uVar40 & 0xf7ff) << bVar15 |
           (ushort)((CONCAT12(bVar31 < uVar32,uVar40) & 0xfff7ff) >> 0x11 - bVar15);
  bVar15 = bVar24 << (bVar24 & 0x1f);
  uVar8 = (int)(char)((byte)((0xd7ecU >> (bVar24 & 0xf)) >> 8) |
                     (byte)((ushort)(-0x2814 << 0x10 - (bVar24 & 0xf)) >> 8)) *
          (CONCAT22((short)((uint)iVar38 >> 0x10),uVar5 | uVar26 << 0xf) >> 0xc |
          (uVar42 & 0xfffff7ff) << 0x14) * 2;
  uVar22 = CONCAT31((int3)(CONCAT22((short)((uint)iVar39 >> 0x10),
                                    CONCAT11((uVar32 >> 1 & 1) == 0,bVar24)) >> 8),bVar15) >>
           (bVar15 & 0x1f);
  uVar32 = (short)(uVar32 | 2) >> ((byte)uVar22 & 0x1f);
  uVar42 = CONCAT22((short)(uVar42 >> 0x10),uVar32);
  if (0 < (short)((ushort)((short)CONCAT31((uint3)(uVar9 >> 0x16),
                                           (char)(uVar9 >> 0xe) << (bVar4 & 0x1f | bVar16)) +
                          0xd7ecU) >> 1 | 0x8000)) {
    uVar22 = uVar8;
  }
  iVar39 = 0;
  if (uVar22 != 0) {
    for (; (uVar22 >> iVar39 & 1) == 0; iVar39 = iVar39 + 1) {
    }
  }
  uVar41 = CONCAT31(uVar23,(sVar25 != 0) << 1);
  uVar9 = iVar39 - uVar42;
  uVar19 = ((((short)uVar33 >> 1) >> (bVar4 & 0x1f | bVar16)) + 0x4e0c) - uVar32;
  iVar39 = ((int)uVar8 >> 0x1f) + 0x623e8611;
  uVar8 = uVar8 * 0x200 | (uint)(uVar23 >> 0xf);
  uVar5 = (ushort)uVar9 & 0x7fff;
  if ((uVar9 & 0x4000) != 0) {
    uVar5 = uVar32;
  }
  uVar9 = CONCAT22((short)(uVar9 >> 0x10),uVar5);
  uVar32 = ((ushort)uVar22 & 0xff00) >> 7 & 0xff0f;
  uVar5 = uVar32 | uVar19 * 0x200;
  sVar17 = (sbyte)uVar32;
  if (uVar8 != uVar41) {
    uVar8 = uVar41;
    uVar9 = uVar41;
  }
  bVar24 = -((char)(uVar9 >> 8) >> 7);
  lVar3 = (longlong)(int)uVar8 *
          (longlong)
          CONCAT22((short)((uint)iVar39 >> 0x10),(short)iVar39 << sVar17 | uVar5 >> 0x10 - sVar17);
  bVar15 = (byte)(uVar5 << 1) & 7 | bVar24;
  bVar31 = (byte)((ulonglong)lVar3 >> 0x28);
  bVar16 = (byte)lVar3;
  iVar39 = (uVar42 & 0xfffffffd) * 2;
  bVar4 = (byte)((ulonglong)lVar3 >> 8);
  bVar45 = (iVar39 + (uint)(byte)(bVar16 + bVar24 + 0x70) & 1) != 0;
  sVar25 = ((short)iVar39 -
           (CONCAT11(bVar31 >> bVar15 | bVar31 << 8 - bVar15,(char)((ulonglong)lVar3 >> 0x20)) &
           0xfffb)) - (ushort)bVar45;
  cVar30 = bVar45 + bVar4;
  sVar6 = sVar25 >> 0xf;
  iVar39 = (int)CONCAT11(!CARRY1(bVar45,bVar4) && cVar30 != '\0',(char)sVar25) * (int)(short)uVar19;
  sVar25 = (short)((uint)iVar39 >> 0x10);
  iVar43 = CONCAT22((short)((int)uVar7 >> 0x11),uVar19 >> 1 | sVar25 << 0xf);
  bVar15 = (byte)iVar39 << (bVar16 & 7) | (byte)iVar39 >> 8 - (bVar16 & 7);
  iVar38 = CONCAT31((int3)(uVar9 >> 8),cVar30) << 1;
  bVar4 = (byte)(uVar9 >> 0x1f) | (byte)iVar38;
  iVar21 = (CONCAT31((int3)(CONCAT22((short)((ulonglong)lVar3 >> 0x30),sVar25) >> 8),
                     (char)((uint)iVar39 >> 0x10)) | 0xa0) * -0x13ef795;
  uVar32 = (ushort)iVar21;
  sVar25 = (short)CONCAT31((int3)(CONCAT22(sVar6,(short)iVar39) >> 8),bVar15) >>
           (bVar16 & ~(byte)(1 << (bVar15 & 0x1f)) & 0x1f);
  bVar15 = (byte)((uint)iVar39 >> 0x18);
  iVar39 = CONCAT22((short)((uint)iVar21 >> 0x10),uVar32 << 0xd | uVar32 >> 3) + -1;
  if (0x18 < bVar15) {
    iVar39 = iVar43;
  }
  uVar22 = CONCAT22(sVar6,CONCAT11(((byte)((ushort)sVar25 >> 8) | 0x2f) << 1,(char)sVar25)) &
           0xffff3fff;
  uVar32 = (ushort)(bVar15 != 0x19 | 0xc0);
  uVar5 = (ushort)uVar22;
  uVar19 = (ushort)((uint)iVar38 >> 0x10);
  lVar3 = (ulonglong)
          (CONCAT22((short)(uVar22 >> 0x10),CONCAT11((char)(uVar5 % uVar32),(char)(uVar5 / uVar32)))
          + 1) * 0x83c31941;
  iVar28 = CONCAT22((short)((ulonglong)lVar3 >> 0x30),(short)((ulonglong)lVar3 >> 0x20) << 8) << 1;
  sVar25 = (short)lVar3 << 0xf;
  cVar30 = (char)lVar3 * '\x02';
  iVar21 = CONCAT31((int3)((ulonglong)lVar3 >> 8),cVar30);
  iVar11 = iVar43 - iVar21;
  if (iVar11 != 0 && iVar21 <= iVar43) {
    iVar28 = CONCAT22((short)((uint)iVar28 >> 0x10),CONCAT11(~(byte)((uint)iVar38 >> 8),bVar4));
  }
  iVar43 = CONCAT22(uVar19,CONCAT11(iVar11 < 0,bVar4));
  uVar32 = CONCAT11((byte)((uint)iVar28 >> 8) ^ (byte)((ulonglong)lVar3 >> 8),(char)iVar28);
  iVar21 = iVar43 * -0x27842b17;
  iVar43 = iVar43 << 1;
  uVar42 = CONCAT31(0x83c319,bVar4 + 1) & 0xffffff0f;
  bVar15 = (byte)uVar42;
  uVar5 = ((ushort)iVar43 | uVar19 >> 0xf) << bVar15 | uVar32 >> 0x10 - bVar15;
  uVar19 = (short)iVar21 + (short)uVar42 + 1;
  uVar14 = (undefined2)((ulonglong)lVar3 >> 0x10);
  uVar8 = CONCAT22((short)((uint)iVar28 >> 0x10),uVar32) & 0xfffffdfe;
  uVar7 = CONCAT22((short)((uint)(iVar11 + -0x2de19d6) >> 0x10),
                   (short)(iVar11 + -0x2de19d6) << 6 |
                   (ushort)((ushort)(byte)uVar8 << 0x10 - bVar15) >> 10) * 2;
  uVar22 = uVar7 + 0x30896687;
  uVar13 = (undefined2)(uVar8 >> 0x10);
  iVar38 = (int)(short)CONCAT31((int3)(CONCAT22(uVar14,0xff00) >> 8),cVar30 + '\x7f') * (int)sVar25;
  uVar8 = CONCAT22((short)((uint)iVar39 >> 0x10),sVar25) ^
          1 << ((uVar5 & 0xf) << 1 | (uint)(uVar7 < 0xcf769979));
  iVar39 = (CONCAT22((short)((uint)iVar21 >> 0x10),uVar19) >> 1 | (uint)((uVar19 & 1) != 0) << 0x1f)
           * 0x3eb793d3;
  uVar44 = (undefined2)((uint)iVar39 >> 0x10);
  uVar19 = (ushort)uVar22 | 0xac62;
  uVar32 = (ushort)iVar39 & 0xfffe;
  if ((POPCOUNT(uVar19 & 0xff) & 1U) != 0) {
    uVar32 = uVar19;
  }
  iVar39 = ((uint)(CONCAT22((short)((uint)iVar43 >> 0x10),uVar5) << 1) >> 0x1c | uVar22 * 0x10) +
           0xede0ad04;
  uVar22 = (uVar22 | 0xac62) >> bVar15 | uVar8 << 0x20 - bVar15;
  uVar19 = (ushort)CONCAT31((int3)(CONCAT22(uVar13,(short)((uint)iVar38 >> 0x10)) >> 8),
                            (char)((uint)iVar39 >> 8));
  uVar32 = uVar32 & (ushort)uVar8;
  uVar7 = CONCAT22(uVar44,uVar32);
  sVar25 = (short)uVar22;
  uVar36 = (undefined2)(uVar22 >> 0x10);
  uVar5 = sVar25 * 2;
  uVar22 = CONCAT22((short)((uint)iVar39 >> 0x10),(ushort)(byte)iVar39);
  if ((short)uVar5 < 0) {
    uVar22 = uVar8;
  }
  uVar34 = uVar19 >> 7;
  uVar8 = CONCAT31((int3)(CONCAT22(uVar13,uVar34 | uVar19 << 9) >> 8),(char)uVar34 << 1);
  uVar19 = sVar25 << 6 | uVar5 >> 0xb;
  uVar34 = uVar19 + 0x41e5;
  uVar41 = CONCAT22(uVar14,(short)iVar38) ^ 0x6400;
  if ((uVar22 & 0x89) == 0) {
    uVar41 = CONCAT22(uVar36,uVar34);
  }
  uVar42 = CONCAT22((short)(uVar42 >> 0x10),(ushort)bVar15);
  if (uVar34 < 0x2836) {
    uVar42 = uVar41;
  }
  bVar15 = (byte)(uVar41 >> 8);
  uVar14 = (undefined2)(uVar42 >> 0x10);
  iVar39 = uVar8 - uVar7;
  uVar7 = CONCAT22(uVar36,uVar19 + 0x19af) + 0x68c4d3c5 + (uint)(uVar8 < uVar7);
  sVar25 = (ushort)uVar7 << 3;
  uVar19 = CONCAT11((char)((ushort)sVar25 >> 8) + -0x7a,
                    (byte)-((byte)uVar42 <= bVar15) >> 5 | (byte)sVar25);
  cVar29 = (char)((uint)iVar39 >> 8);
  cVar30 = cVar29 + -1;
  uVar42 = CONCAT22((short)((uint)iVar39 >> 0x10),CONCAT11(cVar30,(char)iVar39));
  if (cVar30 != '\0' && '\0' < cVar29) {
    uVar42 = CONCAT22(uVar14,uVar19);
  }
  uVar34 = (ushort)((uVar7 & 1) != 0);
  sVar25 = (uVar19 + 0x92ce) - uVar34;
  bVar4 = (byte)sVar25;
  uVar41 = CONCAT22(uVar14,CONCAT11((byte)((ushort)sVar25 >> 8) ^ bVar4,bVar4)) | 0x84f0b139;
  uVar22 = CONCAT31((int3)(CONCAT22((short)(uVar22 >> 0x10),CONCAT11(uVar5 != 0,(char)uVar22)) >> 8)
                    ,(char)uVar22) & 0xffffff89 & ~(1 << (uVar22 & 9));
  uVar32 = uVar32 >> 1 | (short)uVar22 << 0xf;
  uVar9 = ((CONCAT22((short)(uVar7 >> 0x10),((ushort)uVar7 >> 1) + (short)uVar42) + -0x66920382) -
           (uint)(-(uVar19 < 0x6d32 || (ushort)(uVar19 + 0x92ce) < uVar34) & 1) | 0x20000000) &
          ~(1 << (uVar32 & 0x1f));
  iVar43 = -CONCAT22(uVar44,uVar32);
  bVar4 = (byte)uVar41 >> ((byte)uVar41 & 0x1f);
  uVar22 = CONCAT31((int3)(uVar22 >> 8),(byte)uVar22 ^ (byte)(uVar42 >> 8)) & uVar9;
  uVar14 = (undefined2)(uVar22 >> 0x10);
  uVar32 = (short)uVar22 >> (bVar4 & 0x1f);
  uVar5 = (ushort)iVar43;
  uVar19 = uVar5 << 1 | uVar5 >> 0xf;
  uVar10 = uVar9 ^ 1 << (uVar19 & 0x1f);
  uVar7 = CONCAT22(uVar14,uVar32 + 0x69a3);
  uVar22 = CONCAT31((int3)(CONCAT22((short)(uVar41 >> 0x10),CONCAT11((char)(uVar41 >> 8),bVar4)) >>
                          8),bVar4) & 0xffffff0f;
  sVar17 = (sbyte)uVar22;
  uVar5 = (short)uVar10 << sVar17 | (ushort)uVar22 >> 0x10 - sVar17;
  uVar8 = CONCAT22(uVar13,(short)uVar8 + CONCAT11(bVar15 + 0x1a,(short)uVar42 != 1) +
                          (ushort)((CONCAT22(uVar14,uVar32) >> (uVar32 & 0x1f) & 1) != 0)) >> 5;
  iVar38 = CONCAT31((int3)(uVar22 >> 8),sVar17 << 1) * 2 + 1;
  iVar39 = iVar38 + (uVar42 >> 0x10) * -0x10000;
  uVar22 = uVar42 & 0xffff0000;
  if (iVar39 == 0 || (SBORROW4(iVar38,uVar42 & 0xffff0000) != false) != iVar39 < 0) {
    uVar22 = uVar8;
  }
  bVar15 = (byte)uVar22;
  uVar5 = uVar5 << 8 | uVar5 >> 8;
  bVar4 = bVar15 & 0xf;
  uVar32 = (ushort)bVar4 << bVar4 | uVar5 >> 0x10 - bVar4;
  uVar19 = (uVar19 << 2 | (ushort)(CONCAT12((uVar9 >> (uVar19 & 0x1f) & 1) != 0,uVar19) >> 0xf)) +
           uVar5;
  iVar39 = uVar7 + 0xa21eff90;
  uVar42 = (uVar8 >> (bVar15 & 0x1f)) << 1;
  uVar9 = uVar42 | (uVar19 & 1) != 0;
  uVar41 = (ushort)(CONCAT11(((char)(uVar32 >> 8) << 1 | (short)uVar32 < 0) << 1,(byte)uVar32) |
                   0x100) & 0xffffff22;
  uVar8 = CONCAT22((short)(uVar22 >> 0x10),(ushort)(byte)iVar39);
  bVar4 = (byte)(uVar41 >> 8) ^ (byte)(uVar9 + 0xfeac9db3 + (int)(char)((uint)iVar39 >> 8) >> 8);
  uVar22 = CONCAT22((short)(uVar10 >> 0x10),uVar5 - CONCAT11((char)(uVar22 >> 8) >> 1,bVar15)) &
           0xffffefff;
  if (-1 < (char)bVar4) {
    uVar22 = uVar9;
  }
  uVar41 = (uint)CONCAT11(bVar4,(char)uVar41) * 0x800;
  iVar38 = uVar41 + 0xc3ec14e3;
  uVar7 = (int)(CONCAT22((short)((uint)iVar43 >> 0x10),uVar19) >> 1 |
               (uint)(uVar7 < 0x5de10070) << 0x1f) >> ((byte)uVar32 & 0x1f);
  if (SBORROW4(uVar41,0x3c13eb1d)) {
    uVar7 = uVar8;
  }
  bVar45 = uVar41 >= 0x3c13eb1d && iVar38 != 0;
  uVar32 = CONCAT11(bVar45 << 2 | (byte)(CONCAT11(uVar41 < 0x3c13eb1d,bVar45) >> 7),(char)iVar38);
  uVar23 = (uint3)((ushort)((uint)iVar38 >> 0x10) & 0xff) | uVar32 & 0xff00 |
           (uint3)(((uint)uVar32 << 0x18) >> 8);
  sVar37 = (short)uVar9 >> 0x1e;
  lVar3 = (ulonglong)(uVar8 >> 1 | (uint)(((ushort)uVar7 >> 6 & 1) != 0) << 0x1f) *
          (ulonglong)uVar22;
  sVar25 = sVar37 + (short)CONCAT31(uVar23,(byte)((uint)iVar38 >> 0x18) |
                                           (byte)((ulonglong)lVar3 >> 0x20));
  iVar21 = CONCAT22((short)(uVar42 >> 0x10),sVar25);
  uVar41 = CONCAT22((short)(uVar23 >> 8),sVar37 << 1 | (ushort)(sVar37 < 0)) | 0x1000;
  uVar42 = uVar41 + uVar22;
  uVar8 = uVar42 >> 1;
  bVar15 = (byte)(uVar8 >> 8);
  sVar6 = (ushort)(byte)lVar3 * (ushort)bVar15;
  iVar38 = CONCAT22((short)((ulonglong)lVar3 >> 0x10),sVar6);
  iVar28 = (((uVar7 ^ 0x40) - iVar21) - (uint)((sVar37 << 1 & 0x1000U) != 0)) + 1;
  uVar18 = (undefined)uVar8;
  sVar6 = CONCAT11(bVar15 << 1 | (char)((ushort)sVar6 >> 8) != '\0',uVar18);
  iVar43 = iVar38 + -0x4e58bbc5;
  uVar8 = CONCAT31((int3)((uint)iVar21 >> 8),(char)sVar25 + -0x43);
  if (iVar43 == 0 || (SBORROW4(iVar38,0x4e58bbc4) != SBORROW4(iVar38 + -0x4e58bbc4,1)) != iVar43 < 0
     ) {
    uVar8 = uVar22;
  }
  uVar7 = 0;
  if (uVar8 != 0) {
    for (; (uVar8 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
    }
  }
  uVar5 = (ushort)uVar22;
  uVar32 = uVar5 | 1 << (uVar5 & 0xf);
  uVar9 = uVar7 | 0xc0000000;
  uVar1 = CONCAT44(CONCAT22((ushort)(uVar8 >> 0x11),
                            (short)(uVar8 >> 1) + sVar6 +
                            (ushort)((uVar5 >> (uVar5 & 0xf) & 1) != 0)),iVar43) &
          0x3fffffffffffffff;
  uVar2 = uVar1 % (ulonglong)uVar9;
  uVar42 = CONCAT31((int3)(CONCAT22((ushort)(uVar42 >> 0x11) |
                                    (ushort)(((uint)CARRY4(uVar41,uVar22) << 0x1f) >> 0x10),sVar6)
                          >> 8),uVar18) & 0xffffff0f;
  sVar17 = (sbyte)uVar42;
  uVar5 = (ushort)uVar42;
  uVar13 = (undefined2)((uint)iVar28 >> 0x10);
  if ((int)((uint)(uVar1 / uVar9) | (uint)uVar2) < 0) {
    uVar42 = CONCAT22((short)(uVar42 >> 0x10),(short)uVar7);
  }
  iVar38 = CONCAT22((short)(uVar2 >> 0x10),
                    CONCAT11((char)(uVar2 >> 8) + '|',(char)uVar2 << ((byte)uVar42 & 0x1f))) + -1;
  uVar5 = (short)iVar28 << sVar17 | uVar5 >> 0x10 - sVar17;
  if (iVar38 == 0) {
    uVar5 = (ushort)uVar42;
  }
  iVar43 = 0x1f;
  if (uVar9 != 0) {
    for (; uVar9 >> iVar43 == 0; iVar43 = iVar43 + -1) {
    }
  }
  uVar8 = uVar42 & 0xffff | 0xc000;
  uVar7 = (uint)((ushort)iVar38 & 0x3fff) << 0x10 | 0x1f;
  uVar41 = uVar7 % uVar8;
  bVar15 = (byte)uVar41;
  if (0xb3 < bVar15) {
    uVar42 = CONCAT22((short)(uVar42 >> 0x10),(ushort)iVar43);
  }
  uVar19 = (ushort)(uVar7 / uVar8);
  if (-0x4d < (char)bVar15) {
    uVar19 = uVar32;
  }
  uVar34 = (ushort)((ushort)((uint)iVar39 >> 0x10) | (ushort)((uint)(1 << (uVar22 & 0x1f)) >> 0x10))
           >> 8;
  if (0xb3 < bVar15) {
    uVar32 = uVar34;
  }
  uVar40 = (ushort)((uint)iVar43 >> 0x10);
  bVar4 = (byte)uVar42;
  sVar25 = (ushort)bVar4 << (bVar4 & 0x1f);
  uVar8 = CONCAT22((short)(uVar42 >> 0x10),sVar25);
  iVar39 = CONCAT22((short)(uVar22 >> 0x10),uVar32) + uVar8;
  uVar22 = (uint)(ushort)(uVar34 + 0xab86) + CONCAT22(uVar13,uVar5) + (uint)(0x5479 < uVar34);
  bVar16 = (byte)sVar25;
  uVar32 = uVar19 >> (bVar16 & 0xf) | uVar19 << 0x10 - (bVar16 & 0xf);
  uVar19 = (ushort)iVar39;
  uVar34 = (ushort)((uint)iVar39 >> 0x10);
  bVar15 = (bVar16 & 0x1f) % 9;
  iVar39 = CONCAT22(0x3a76,CONCAT11((char)(uVar32 >> 8),(char)uVar32 << (bVar16 & 0x1f)));
  if ((ushort)(uVar5 + 0x327) != 0) {
    uVar8 = (uint)CONCAT11((char)(uVar41 >> 8) >> (bVar4 & 0x1f),
                           '\0' << bVar15 |
                           (byte)((ushort)((ushort)((uVar19 >> (uVar5 & 0xf) & 1) != 0) << 8) >>
                                 9 - bVar15));
  }
  sVar25 = (short)uVar8;
  bVar15 = (byte)(uVar22 >> 1);
  iVar38 = 0;
  if ((int)sVar25 != 0) {
    for (; ((uint)(int)sVar25 >> iVar38 & 1) == 0; iVar38 = iVar38 + 1) {
    }
  }
  uVar41 = iVar38 + 0xa2673c71U & 0xffffafac;
  bVar16 = (byte)uVar8;
  uVar14 = (undefined2)(uVar41 >> 0x10);
  bVar4 = (bVar16 & 0x1f) % 0x11;
  uVar7 = CONCAT31((uint3)(uVar22 >> 9),bVar15) & 0xffff | 0x1007c;
  uVar9 = (CONCAT22(uVar34,(uVar19 ^ 1 << (uVar5 & 0xf)) - 1) | 0x800) << 8 | (uint)(uVar34 >> 8);
  sVar35 = (short)uVar9;
  iVar38 = (int)(short)((short)(char)uVar41 * (short)(char)(bVar15 | 0x7c)) * (int)sVar35;
  sVar27 = (short)((uint)iVar38 >> 0x10);
  sVar37 = (short)CONCAT31((int3)(CONCAT22(uVar14,(short)iVar38) >> 8),
                           (char)iVar38 >> (bVar16 & 0x1f));
  sVar6 = sVar37 - sVar27;
  uVar41 = CONCAT22((short)((uint)((int)((ulonglong)((longlong)iVar39 * (longlong)iVar39) >> 0x20)
                                  << 1) >> 0x10),sVar27);
  if (sVar27 <= sVar37) {
    uVar41 = CONCAT22(uVar14,sVar6);
  }
  uVar10 = CONCAT22(uVar14,sVar6) & 0xffff3fff;
  uVar32 = (ushort)(byte)((uVar41 | 0xc000) >> 8);
  uVar19 = (ushort)uVar10;
  cVar30 = (char)(uVar19 / uVar32);
  return CONCAT22((short)(uVar10 >> 0x10),(short)cVar30) +
         CONCAT22((ushort)(uVar22 >> 0x11),
                  (short)(ushort)(byte)((byte)(uVar7 << bVar4) | (byte)(uVar7 >> 0x11 - bVar4)) >>
                  (bVar16 & 0x1f)) +
         CONCAT31((int3)(CONCAT22(sVar25 >> 0xf,
                                  CONCAT11((byte)(uVar8 >> 8) >> (bVar16 & 0x1f),bVar16)) >> 8),
                  (char)bVar16 >> (bVar16 & 0x1f)) + (uVar41 | 0xc000) + (uVar9 ^ 0x800) +
         CONCAT22(uVar40 >> 1,
                  ((ushort)(CONCAT22(uVar40,((((ushort)iVar43 & ~(1 << ((ushort)uVar42 & 0xf))) -
                                             0x89b) + (short)(uVar22 >> 1)) * 2) >> 1) >> 2 |
                  sVar35 << 0xe) + CONCAT11((char)(uVar19 % uVar32),cVar30)) +
         CONCAT22(uVar13,uVar5 + 0x327) + 0x20bf0bc3;
}



// WARNING: Removing unreachable block (ram,0x0804c921)
// WARNING: Removing unreachable block (ram,0x0804c394)
// WARNING: Removing unreachable block (ram,0x0804c298)
// WARNING: Removing unreachable block (ram,0x0804c2a5)
// WARNING: Removing unreachable block (ram,0x0804c5c1)
// WARNING: Removing unreachable block (ram,0x0804c89a)
// WARNING: Removing unreachable block (ram,0x0804c93f)
// WARNING: Removing unreachable block (ram,0x0804cbaf)
// WARNING: Removing unreachable block (ram,0x0804c97b)
// WARNING: Removing unreachable block (ram,0x0804c2c7)
// WARNING: Removing unreachable block (ram,0x0804c984)
// WARNING: Removing unreachable block (ram,0x0804c384)
// WARNING: Removing unreachable block (ram,0x0804c47e)
// WARNING: Removing unreachable block (ram,0x0804c5c5)

int log_size_10_var_004(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  short sVar5;
  uint5 uVar6;
  byte bVar7;
  short sVar8;
  char cVar12;
  int iVar9;
  char cVar11;
  ushort uVar13;
  undefined2 uVar14;
  int iVar10;
  undefined2 uVar15;
  sbyte sVar16;
  short sVar17;
  byte bVar22;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint3 uVar23;
  char cVar26;
  undefined4 uVar24;
  byte bVar27;
  int iVar25;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  int iVar31;
  int iVar32;
  undefined2 uVar37;
  uint uVar33;
  byte bVar35;
  uint uVar34;
  undefined3 uVar36;
  uint uVar38;
  ushort uVar39;
  ushort uVar40;
  uint uVar41;
  bool bVar42;
  
  for (iVar31 = 0x1f; 0xffffff9dU >> iVar31 == 0; iVar31 = iVar31 + -1) {
  }
  iVar31 = CONCAT22(0x2c2c,(short)iVar31) + 0x3d9c27f2;
  uVar28 = (ushort)iVar31;
  uVar14 = (undefined2)((uint)iVar31 >> 0x10);
  uVar28 = uVar28 >> 3 | uVar28 << 0xd;
  bVar22 = (char)(uVar28 >> 8) - 0x22;
  bVar42 = -1 < (short)((ushort)bVar22 << 8);
  uVar19 = CONCAT31(CONCAT21(uVar14,bVar22),bVar42);
  uVar18 = 0x80b6;
  if (bVar22 == 0) {
    uVar18 = 0xe37000c1;
  }
  uVar28 = uVar28 * 4 + 0xc036;
  lVar4 = (ulonglong)
          CONCAT22(uVar14,(short)((CONCAT22((short)(((uVar18 | 0xd9608da9) & 0xffff | 0x1830000) %
                                                   0xff63),uVar28) & 0x3fffffff) /
                                 (uVar19 & 0xffff | 0xc000))) * 0xcb64ff63;
  sVar8 = (short)lVar4 >> bVar42;
  uVar18 = (CONCAT22(uVar14,(short)uVar19) | 0xc000) >> bVar42;
  if ((uVar28 | 0x21) != 0x50f7) {
    uVar18 = CONCAT22((short)(uVar18 >> 0x10),0x20) | 1;
  }
  iVar9 = CONCAT22((short)((ulonglong)lVar4 >> 0x30),sVar8 >> 0xf);
  uVar19 = (ushort)(sVar8 >> 0xf) & 0x1f;
  uVar41 = 1 << uVar19 ^ 0xcb64ff63;
  iVar31 = iVar9 << 0xf;
  uVar19 = (uint)(CONCAT14((0xcb64ff63U >> uVar19 & 1) != 0,iVar9) >> 0x12);
  cVar26 = ((byte)(uVar19 >> 8) | (byte)((uint)iVar31 >> 8)) + 1;
  uVar24 = CONCAT22((short)((uint)iVar31 >> 0x10),CONCAT11(cVar26,(char)uVar19));
  if (cVar26 == '\0') {
    uVar24 = CONCAT22((short)((ulonglong)lVar4 >> 0x10),sVar8);
  }
  sVar17 = CONCAT11((char)(uVar18 >> 8) + '1',(char)uVar18) + 1;
  iVar31 = CONCAT22((short)(uVar18 >> 0x10),sVar17);
  bVar22 = (byte)sVar17;
  cVar26 = (char)((uint)uVar24 >> 8);
  bVar35 = (byte)uVar24;
  bVar27 = cVar26 << 1 | cVar26 < '\0';
  sVar17 = CONCAT11(bVar27,bVar35);
  bVar7 = (byte)((ushort)sVar8 >> 8);
  uVar19 = 0x8a6f0002U >> (bVar22 & 0x1f) ^ 0x800;
  uVar14 = (undefined2)((uVar19 << 1) >> 0x10);
  uVar18 = 0x29bc0001;
  if ((int)uVar19 >= 0) {
    uVar18 = CONCAT22((short)((uint)uVar24 >> 0x10),sVar17);
  }
  bVar22 = bVar22 & 0x1f;
  uVar19 = iVar31 << bVar22 | (uint)(CONCAT14((int)uVar19 < 0,iVar31) >> 0x21 - bVar22);
  uVar21 = CONCAT31((int3)(CONCAT22((short)(uVar19 >> 0x10),
                                    CONCAT11((char)(uVar19 >> 8) - bVar27,(char)uVar19)) >> 8),
                    (char)uVar19) & 0xffffff0f;
  sVar5 = sVar17 + (short)uVar21;
  uVar28 = CONCAT11((char)((ushort)sVar5 >> 8),(char)sVar5 << 1);
  bVar22 = (byte)((ushort)(((ushort)(uVar28 << (bVar35 & 0xf) | uVar28 >> 0x10 - (bVar35 & 0xf)) >>
                           1) << 4) >> 8);
  uVar37 = (undefined2)(uVar41 >> 0x10);
  uVar40 = ~(ushort)uVar41;
  lVar4 = (ulonglong)(CONCAT22((short)(char)(bVar7 >> 1 | bVar7 << 7) >> 7,sVar8) & 0xffff00ff) *
          (ulonglong)CONCAT22(uVar37,uVar40);
  uVar19 = CONCAT22((short)((ulonglong)lVar4 >> 0x10),
                    CONCAT11((byte)((ulonglong)lVar4 >> 8) & (byte)lVar4,(byte)lVar4)) & 0xffff3fff;
  uVar28 = (ushort)(bVar22 | 0xc0);
  uVar13 = (ushort)uVar19;
  cVar26 = (char)(uVar13 / uVar28);
  uVar15 = (undefined2)(uVar19 >> 0x10);
  uVar39 = (ushort)((ushort)(bVar27 >> (sbyte)uVar21) | sVar17 << 0x10 - (sbyte)uVar21) >>
           (bVar35 & 0x1f);
  iVar31 = CONCAT22(uVar14,uVar39);
  bVar7 = -cVar26;
  uVar41 = CONCAT22((short)((ulonglong)lVar4 >> 0x30),
                    CONCAT11((byte)((ulonglong)lVar4 >> 0x28) >> 1,(char)((ulonglong)lVar4 >> 0x20))
                    * 0x1bd4) | 0x400;
  uVar40 = (short)CONCAT31((int3)(CONCAT22(uVar15,CONCAT11((char)(uVar13 % uVar28),cVar26)) >> 8),
                           bVar7) >> 1 | uVar40;
  uVar19 = CONCAT31((uint3)(byte)((char)bVar22 >> 7),0x61) + -0x627ecadf + (uint)((bVar7 & 1) != 0);
  if ((POPCOUNT(uVar40 & 0xff) & 1U) == 0) {
    uVar19 = uVar41;
  }
  uVar33 = ~uVar18 | 0x800001;
  if ((~uVar18 & 0x800000) != 0) {
    uVar33 = uVar41;
  }
  iVar9 = (CONCAT22(uVar15,uVar40) - iVar31) + -1;
  iVar20 = (CONCAT31((int3)(CONCAT22((short)(uVar21 >> 0x10),
                                     CONCAT11(bVar27 >> (bVar35 & 7) | bVar27 << 8 - (bVar35 & 7),
                                              bVar35)) >> 8),
                     (char)(bVar35 + 0x61) >> (bVar35 + 0x61 & 0x1f)) + -0x78d8b823) * -0x17c8c50b;
  uVar28 = (short)uVar33 + 0xc9b2;
  if ((short)uVar28 < 0) {
    iVar9 = CONCAT22((short)((uint)iVar9 >> 0x10),uVar28);
  }
  iVar25 = uVar41 + iVar9 + 1;
  iVar10 = CONCAT22((short)(uVar19 >> 0x10),((short)uVar19 - (short)iVar25) + -1);
  sVar8 = (short)iVar20;
  uVar18 = iVar9 << 1;
  uVar19 = uVar18 | iVar9 < 0;
  iVar32 = iVar10 + -1;
  iVar25 = iVar25 * 2;
  uVar13 = (ushort)((uint)iVar20 >> 0x10);
  sVar17 = sVar8 - (short)iVar25;
  if (sVar17 == 0) {
    uVar28 = (ushort)uVar19;
  }
  uVar40 = uVar13 >> 1 | (ushort)(((uint)((byte)iVar25 < 0xf0) << 0x1f) >> 0x10);
  iVar31 = iVar31 + (uint)CONCAT11(iVar32 == 0 || iVar10 < 1,(char)iVar32);
  uVar13 = (ushort)(CONCAT22(uVar13,sVar17) >> 1);
  sVar17 = uVar13 - 0x9a5;
  bVar22 = ((char)sVar17 - (char)((uint)iVar25 >> 8)) - (uVar13 < 0x9a5);
  uVar41 = CONCAT31((int3)(CONCAT22(uVar40,sVar17) >> 8),bVar22);
  uVar24 = CONCAT31((int3)(CONCAT22(uVar14,(short)uVar39 >> 6) >> 8),
                    (CONCAT22(uVar37,sVar8) >> 1 | (uint)(iVar9 < 0) << 0x1f) != 0);
  iVar9 = CONCAT31((int3)((uint)iVar25 >> 8),(byte)iVar25 + 0x10) << 1;
  uVar13 = CONCAT11((char)(uVar18 >> 8) >> 1,(char)uVar19);
  uVar39 = (ushort)iVar31;
  if ((uVar41 & 0x64881a3c) != 0) {
    uVar24 = CONCAT22(uVar14,uVar39);
  }
  uVar14 = (undefined2)
           ((uint)(CONCAT31((int3)((uint)iVar9 >> 8),((byte)iVar9 | iVar25 < 0) + 0x48) + 0x22a73463
                  ) >> 0x10);
  bVar7 = (byte)((uint)uVar24 >> 8);
  iVar9 = CONCAT22(uVar14,uVar39);
  bVar22 = bVar22 & 0xf;
  uVar13 = uVar13 << bVar22 | uVar13 >> 0x10 - bVar22;
  if (-1 < (int)(CONCAT22((short)(uVar33 >> 0x10),uVar28) & uVar41)) {
    uVar13 = uVar39;
  }
  sVar8 = CONCAT11(bVar7 >> 7 | bVar7 << 1,(char)uVar24) + 0x6646;
  if (-1 < sVar8) {
    uVar41 = CONCAT22(uVar40,uVar28);
  }
  iVar20 = 0;
  if (uVar41 != 0) {
    for (; (uVar41 >> iVar20 & 1) == 0; iVar20 = iVar20 + 1) {
    }
  }
  bVar22 = (byte)iVar20;
  uVar18 = CONCAT22((short)(uVar18 >> 0x10),uVar13) >> (bVar22 & 0x1f);
  uVar13 = (ushort)uVar18;
  iVar25 = CONCAT22((short)((uint)uVar24 >> 0x10),sVar8) + iVar9 + (uint)(0x417 < uVar13);
  uVar37 = (undefined2)((uint)iVar25 >> 0x10);
  uVar39 = CONCAT11((char)((uint)iVar25 >> 8) >> (bVar22 & 0x1f),(char)iVar25) ^ (ushort)iVar25;
  uVar18 = (int)(short)(CONCAT22((short)(uVar18 >> 0x10),uVar13 - 0x418) >> 1) & 0xffff3fff;
  uVar13 = (ushort)uVar18;
  uVar13 = uVar13 % (ushort)(bVar22 | 0xc0) |
           (ushort)(((uint)(uVar13 / (bVar22 | 0xc0) & 0xff) << 0x18) >> 0x10);
  cVar26 = (char)(uVar18 >> 0x18);
  uVar15 = (undefined2)((uint)iVar20 >> 0x10);
  uVar40 = (ushort)CONCAT31((int3)((uint)iVar9 >> 8),~(byte)iVar31);
  uVar36 = CONCAT21(uVar15,0xff);
  bVar42 = (POPCOUNT(-(uVar28 & 0x7fff) & 0xff) & 1U) != 0;
  bVar22 = (byte)((ushort)((short)cVar26 * (short)cVar26) >> 8);
  cVar26 = (char)uVar39 + bVar22;
  uVar19 = CONCAT31((int3)(CONCAT22(uVar37,uVar39) >> 8),cVar26);
  iVar31 = (CONCAT22(uVar15,((ushort)CONCAT31(uVar36,!bVar42) & 0x9ff) + (ushort)(0x4ace < uVar40))
           & 0x317fffff) + 0xe4aa517e;
  bVar7 = (byte)iVar31;
  bVar35 = (byte)(uVar39 >> 8);
  uVar18 = CONCAT31((int3)((uint)iVar31 >> 8),bVar7 + bVar35);
  if (!CARRY1(bVar7,bVar35)) {
    uVar18 = uVar19;
  }
  uVar28 = uVar40 + 0xb532;
  bVar7 = (byte)(uVar28 >> 8);
  cVar12 = bVar22 - bVar7;
  cVar11 = cVar12 + -1;
  iVar31 = CONCAT31(CONCAT21(uVar13,cVar11),cVar11 == '\0');
  if ((bVar22 >= bVar7 && cVar12 != '\0') && cVar11 != '\0') {
    iVar31 = CONCAT22(uVar13,(short)iVar31);
  }
  uVar21 = (uint)(bVar22 < bVar7 || cVar12 == '\0') << 0x10 | uVar19 & 0xffff;
  uVar39 = (ushort)(uVar21 >> 0xb);
  uVar29 = CONCAT11(bVar35 + 0xbf,cVar26) << 1 | (ushort)((char)(bVar35 + 0xbf) < '\0');
  bVar7 = (byte)uVar18 & 7;
  bVar27 = (byte)uVar29;
  uVar13 = ((ushort)iVar25 | 0x6dde) & ~(1 << (uVar40 & 0xf)) & (ushort)CONCAT31(uVar36,bVar42) &
           0xf;
  uVar40 = uVar28 & ~(1 << uVar13);
  bVar35 = (byte)((short)uVar18 >> 1);
  bVar22 = (bVar35 & 0x1f) % 0x11;
  uVar41 = (uint)((uVar28 >> uVar13 & 1) != 0) << 0x10 |
           CONCAT31((int3)(CONCAT22(uVar37,uVar29) >> 8),bVar27 << bVar7 | bVar27 >> 8 - bVar7) &
           0xffff;
  uVar13 = (ushort)(uVar41 >> bVar22) | (ushort)(uVar41 << 0x11 - bVar22);
  bVar35 = bVar35 & 0x1f;
  uVar28 = (byte)((char)uVar13 - (char)(uVar40 >> 8)) & 0xf;
  iVar9 = CONCAT22(uVar14,uVar40 | 1 << uVar28) * 0x44f6f745;
  uVar41 = (((uint)(uint3)((uint3)((uint)(iVar31 << bVar35) >> 8) |
                          (uint3)((CONCAT22((short)uVar19 >> 0xf,
                                            uVar39 << 0xe |
                                            (ushort)(uVar39 | (ushort)(uVar21 << 6)) >> 2) >>
                                  0x20 - bVar35) >> 8)) << 8) >> 1) + 0xe64fd741;
  cVar26 = (char)(uVar13 >> 8) << 1;
  uVar28 = CONCAT11(cVar26,((uVar40 >> uVar28 & 1) == 0) + 'H');
  uVar19 = CONCAT22((short)((uint)iVar9 >> 0x10),
                    CONCAT11(((byte)((uint)iVar9 >> 8) >> 1) - 0xc,(byte)((ushort)iVar9 >> 1) >> 1))
  ;
  if ((POPCOUNT((byte)(uVar41 >> 8) & 0xe6) & 1U) == 0) {
    uVar19 = uVar41;
  }
  uVar21 = CONCAT22((short)(uVar18 >> 0x10),(ushort)(byte)(uVar19 >> 8)) & 0xffffff0f;
  sVar16 = (sbyte)uVar21;
  uVar13 = CONCAT11(-1 < cVar26,(char)uVar41 + -0x68 + ((uVar28 >> (uVar39 >> 2) & 1) != 0)) <<
           sVar16 | (ushort)(uVar28 << 1 | 1) >> 0x10 - sVar16;
  bVar7 = (byte)(uVar13 >> 8);
  bVar22 = (byte)uVar13 & bVar7;
  uVar13 = CONCAT11(bVar7,bVar22);
  uVar21 = ~uVar21;
  uVar18 = 0x1f;
  if (uVar13 != 0) {
    for (; uVar13 >> uVar18 == 0; uVar18 = uVar18 - 1) {
    }
  }
  sVar8 = (short)~(uVar19 & 0xffffff41) * 2;
  uVar41 = (uint)CONCAT11(-bVar7,bVar22);
  uVar33 = (CONCAT22(uVar37,uVar28) ^ uVar21) & 0xffdfffff;
  cVar26 = (char)sVar8;
  uVar19 = CONCAT31((int3)(CONCAT22((short)(~(uVar19 & 0xffffff41) >> 0x10),
                                    CONCAT11((char)((ushort)sVar8 >> 8) - ((char)(uVar33 >> 8) >> 1)
                                             ,cVar26)) >> 8),cVar26 << ((byte)uVar21 & 0x1f));
  uVar21 = ~CONCAT22((short)(uVar33 >> 0x10),(short)uVar33 >> 9);
  iVar31 = 0x1f;
  if (uVar19 != 0) {
    for (; uVar19 >> iVar31 == 0; iVar31 = iVar31 + -1) {
    }
  }
  uVar18 = uVar18 | 0x96cb854;
  iVar31 = uVar41 + 0xe42a6fe8;
  bVar22 = (byte)uVar18;
  uVar19 = CONCAT22((short)(uVar21 >> 0x10),
                    CONCAT11(((uVar41 < 0x1bd59018 || iVar31 == 0) + '\'') - (uVar41 < 0x1bd59018),
                             (char)uVar21)) >> (bVar22 & 0x1f);
  iVar9 = 0;
  if (uVar19 != 0) {
    for (; (uVar19 >> iVar9 & 1) == 0; iVar9 = iVar9 + 1) {
    }
  }
  uVar13 = (ushort)(uVar18 >> 0x10);
  uVar28 = (ushort)uVar18 >> 1 | (ushort)uVar18 << 0xf;
  iVar25 = CONCAT22(uVar13,uVar28);
  bVar22 = (bVar22 << (bVar22 & 0x1f) ^ (byte)(uVar18 >> 8)) * '\x02' + 1;
  uVar18 = CONCAT22((short)(uVar19 >> 0x10),
                    CONCAT11((POPCOUNT((uint)bVar22) & 1U) != 0,(char)uVar19));
  bVar22 = bVar22 & 0x1f;
  uVar18 = uVar18 << bVar22 | uVar18 >> 0x20 - bVar22;
  iVar20 = (short)uVar28 * -0x335c;
  uVar19 = iVar25 << 0x11 | (uint)(CONCAT14((short)iVar20 != iVar20,iVar25) >> 0x10);
  if (((int)uVar19 >> 0xc & 0x212470faU) == 0) {
    uVar18 = CONCAT22((short)(uVar18 >> 0x10),0xc0b8);
  }
  iVar20 = uVar18 + 0xc7f73570;
  iVar31 = CONCAT22((short)((uint)iVar31 >> 0x10),CONCAT11((char)iVar31,(char)iVar31)) << 1;
  bVar22 = (byte)iVar31 | 1;
  bVar7 = (byte)((uint)iVar20 >> 8);
  bVar35 = bVar7 ^ (bVar22 == bVar7) * (bVar7 ^ (byte)iVar20);
  uVar39 = CONCAT11(bVar35,(byte)iVar20);
  uVar18 = CONCAT22((short)((uint)iVar9 >> 0x10),0x5d3);
  uVar28 = uVar39 >> 7;
  uVar40 = (char)(bVar22 ^ (bVar22 != bVar7) * (bVar22 ^ bVar35)) * -0x17;
  cVar26 = (char)uVar28;
  iVar9 = CONCAT22((short)((uint)iVar20 >> 0x10),uVar39 << 9 | uVar28) * 2 + 1;
  sVar8 = (short)CONCAT31((int3)((uint)iVar9 >> 8),0xcb) + (short)cVar26;
  uVar39 = (ushort)((uint)iVar9 >> 0x10);
  bVar22 = -(char)sVar8;
  uVar1 = (ulonglong)(uVar18 | 0xc0000000);
  uVar3 = CONCAT44(CONCAT22(cVar26 >> 7,
                            CONCAT11((cVar26 >> 7) + (char)((ushort)sVar8 >> 8) +
                                     ((char)sVar8 != '\0'),cVar26)),
                   CONCAT22((short)((uint)iVar31 >> 0x10),
                            (short)(char)((byte)((uVar40 & 0xff) << 1) |
                                         (short)(char)uVar40 != uVar40)) ^ uVar18);
  uVar2 = uVar3 / uVar1;
  uVar3 = uVar3 % uVar1;
  iVar31 = (((int)uVar19 >> 0x1f) << 0x10 | (uint)uVar13) * 0x7514595;
  uVar18 = CONCAT31((int3)(CONCAT22(uVar39,sVar8) >> 8),bVar22) >> 1;
  cVar26 = (char)(uVar18 >> 8);
  uVar28 = (((short)uVar3 - (short)iVar31) - (ushort)((bVar22 & 1) != 0)) * 0x2000;
  if ('\0' < cVar26) {
    uVar28 = uVar13;
  }
  uVar29 = uVar28 * -0x765;
  uVar21 = CONCAT22((short)((int)uVar19 >> 0x1f),uVar13 ^ uVar28);
  uVar19 = CONCAT22(uVar13,(short)CONCAT31((int3)(CONCAT22(uVar13,0x7e90) >> 8),1)) & 0xffff7075;
  uVar41 = uVar19 | 0x40;
  bVar22 = (byte)uVar41;
  uVar21 = uVar21 << (bVar22 & 0x1f) | uVar21 >> 0x20 - (bVar22 & 0x1f) | 0xc0000000;
  uVar1 = CONCAT44(CONCAT22(uVar39 >> 1,CONCAT11(-cVar26,(char)uVar18)),
                   CONCAT22((short)(uVar2 >> 0x10),
                            CONCAT11((char)((char)(uVar2 >> 8) + '~') >> (bVar22 & 0x1f),(char)uVar2
                                    ))) & 0x3fffffffffffffff;
  uVar2 = uVar1 / uVar21;
  uVar13 = (ushort)uVar41;
  iVar9 = (int)(short)uVar2 * (int)(short)uVar13;
  uVar19 = uVar19 | 0xc0000040;
  uVar1 = CONCAT44(CONCAT22((short)(uVar1 % (ulonglong)uVar21 >> 0x10),(short)((uint)iVar9 >> 0x10))
                   ,(CONCAT22((short)(uVar2 >> 0x10),(short)iVar9) + 0x70fdcb38) -
                    (uint)((int)uVar21 < 0)) & 0x3fffffffffffffff;
  uVar28 = (ushort)((uint)(iVar31 + CONCAT22((short)(uVar3 >> 0x10),uVar28)) >> 0x10);
  uVar14 = (undefined2)(uVar19 >> 0x10);
  iVar31 = CONCAT22(uVar28,0x8518) << 7;
  iVar20 = (int)(uVar1 / uVar19) >> (bVar22 & 0x1f);
  uVar40 = ((ushort)iVar31 | uVar28 >> 9) ^ uVar13;
  uVar28 = ((ushort)CONCAT31((int3)(CONCAT22(uVar14,uVar13) >> 8),bVar22) | 0xb) + (short)iVar20 + 1
  ;
  cVar26 = (char)uVar28 + (char)((uint)iVar20 >> 8);
  iVar9 = CONCAT31((int3)(CONCAT22(uVar14,uVar28) >> 8),cVar26);
  if (cVar26 < '\0') {
    iVar9 = CONCAT22(0xc202,uVar29);
  }
  bVar22 = (byte)iVar9 & 0x1f;
  uVar34 = (int)(short)(uVar1 % (ulonglong)uVar19) ^ 0x4dfd220c;
  uVar19 = CONCAT31((uint3)((CONCAT22((short)((uint)iVar20 >> 0x10),
                                      CONCAT11((char)uVar28,(char)iVar20)) >> bVar22) >> 8) |
                    (uint3)((uint)(iVar9 << 0x20 - bVar22) >> 8),(POPCOUNT(uVar28 & 0xff) & 1U) == 0
                   );
  bVar22 = (byte)iVar9 & 0xf;
  uVar13 = uVar29 << bVar22 | uVar29 >> 0x10 - bVar22;
  cVar26 = (char)(uVar34 >> 8);
  uVar18 = CONCAT22((short)((uint)iVar9 >> 0x10),(short)cVar26);
  lVar4 = (longlong)(int)(uVar19 >> 7 | uVar19 << 0x19) * (longlong)(int)uVar18;
  uVar28 = uVar40 & 0xf;
  sVar8 = (short)((ulonglong)lVar4 >> 0x10);
  uVar18 = uVar18 >> 1;
  uVar21 = uVar18 | (int)((ulonglong)lVar4 >> 0x20) << 0x1f;
  bVar22 = (byte)uVar18;
  uVar19 = CONCAT22((short)((uint)iVar31 >> 0x10),uVar40) >> (bVar22 & 0x1f);
  iVar31 = CONCAT22(sVar8,(short)lVar4 << 1 | (ushort)((0U >> uVar28 & 1) != 0)) << 1;
  uVar33 = CONCAT31((int3)(uVar21 >> 8),bVar22 << 4 | bVar22 >> 4);
  uVar41 = CONCAT31((int3)((uint)iVar31 >> 8),
                    ((byte)iVar31 | sVar8 < 0) << (bVar22 << 4 & 0x1f | bVar22 >> 4));
  uVar18 = uVar41;
  if ((int)(uVar19 & CONCAT22(0xc202,uVar13)) < 0) {
    uVar33 = CONCAT22((short)(uVar21 >> 0x10),(short)uVar19);
    uVar18 = (uint)(ushort)((1 << uVar28) + uVar13);
  }
  uVar28 = (ushort)(uVar34 >> 0x10);
  sVar8 = CONCAT11(cVar26 + -0x59,(char)uVar34 + 'O') + (short)uVar33;
  uVar36 = (undefined3)(CONCAT22(uVar28,sVar8) >> 8);
  bVar22 = (char)sVar8 - 1;
  if ((POPCOUNT(bVar22) & 1U) != 0) {
    uVar19 = CONCAT31(uVar36,bVar22);
  }
  bVar7 = (byte)uVar33 & 0x1f;
  uVar41 = uVar41 << bVar7 | uVar33 >> 0x20 - bVar7;
  uVar33 = uVar33 & 0xffffff0f;
  uVar40 = (ushort)uVar41 >> (sbyte)uVar33 | (ushort)uVar33 << 0x10 - (sbyte)uVar33;
  uVar14 = (undefined2)((uVar18 & 0xffffffdf) >> 0x10);
  uVar39 = ((ushort)uVar33 & 0xfffd) * 2 + 1;
  iVar31 = CONCAT22(0xc202,(ushort)(uVar13 - uVar40) >> 1 |
                           (ushort)((uVar13 - uVar40 & 1) != 0) << 0xf) << 1;
  lVar4 = (longlong)
          CONCAT31((int3)(CONCAT22((short)(uVar41 >> 0x10),
                                   CONCAT11((char)(uVar40 >> 8) + '~',(byte)uVar40)) >> 8),
                   (byte)uVar40 >> 1) *
          (longlong)CONCAT22(uVar14,(ushort)(uVar18 & 0xffffffdf) | uVar13);
  uVar29 = (ushort)iVar31 | 1 << (uVar39 & 0xf);
  uVar21 = CONCAT22((short)((uint)iVar31 >> 0x10),uVar29);
  uVar18 = (uint)lVar4 & ~(1 << (bVar22 & 0x1f));
  uVar41 = CONCAT31((int3)(CONCAT22((short)(uVar33 >> 0x10),uVar39) >> 8),(char)uVar39 << 4) |
           0xc0000000;
  uVar1 = CONCAT44((int)((ulonglong)lVar4 >> 0x20),
                   CONCAT22((short)(uVar18 >> 0x10),(short)(char)uVar18)) & 0x3fffffffffffffff;
  uVar2 = uVar1 / uVar41;
  uVar39 = (ushort)uVar2 | 0x5200;
  uVar29 = uVar29 + 0x89b0;
  bVar42 = (short)(uVar39 << 4) < 0;
  uVar39 = uVar39 << 5 | (ushort)bVar42;
  bVar42 = bVar42 != (short)uVar39 < 0;
  iVar20 = CONCAT31(uVar36,bVar42);
  iVar31 = (CONCAT22((ushort)(uVar19 >> 0x11),
                     (short)(uVar19 >> 1) + 0x8d6 + (ushort)(uVar13 < uVar40)) | 0x200) * 2 +
           -0x3217354 + iVar20 * 2;
  iVar9 = CONCAT22((short)(uVar2 >> 0x10),uVar39) >> 1;
  uVar19 = iVar9 + 1;
  uVar18 = (uint)(uVar1 % (ulonglong)uVar41);
  if (uVar19 != 0 && SCARRY4(iVar9,1) == (int)uVar19 < 0) {
    uVar18 = uVar21;
  }
  uVar39 = (ushort)(uVar41 >> 0x10);
  uVar19 = uVar19 & ~(1 << bVar42);
  uVar19 = CONCAT22((short)(uVar19 >> 0x10),CONCAT11((char)(uVar19 >> 8) + '+',(char)uVar19));
  uVar13 = (short)iVar31 << 1;
  uVar33 = CONCAT22((short)((uint)iVar31 >> 0x10),uVar13);
  iVar31 = uVar19 - uVar21;
  uVar19 = (uint)(CONCAT14(uVar19 < uVar21,uVar33) >> 0x19);
  uVar21 = uVar19 | (uVar33 | 1) << 8;
  uVar40 = (ushort)iVar31;
  uVar30 = (ushort)iVar20;
  uVar40 = uVar40 ^ (ushort)(uVar40 != uVar30) *
                    (uVar40 ^ uVar30 ^ (ushort)(uVar40 == uVar30) * (uVar30 ^ uVar40));
  if (-1 < (int)uVar21 && (uVar21 << 1 | (uint)(uVar28 >> 0xf)) != 0) {
    uVar40 = 0;
  }
  uVar21 = 0x1f;
  if (uVar18 != 0) {
    for (; uVar18 >> uVar21 == 0; uVar21 = uVar21 - 1) {
    }
  }
  sVar8 = (ushort)(byte)((uint)uVar40 *
                         ((uVar19 | (uVar13 & 0x7f | 1) << 8) << 1 | (uint)(uVar28 >> 0xf)) >> 0x10)
          * 0xad;
  uVar19 = (uint)uVar28 << 0x10;
  if ((char)((ushort)sVar8 >> 8) == '\0') {
    uVar19 = uVar18;
  }
  uVar28 = uVar29 & 0x5941;
  if (uVar28 != 0) {
    uVar19 = uVar21;
  }
  uVar33 = CONCAT22(uVar39,(short)CONCAT31((int3)(CONCAT22(uVar39,0x7fff) >> 8),0xff)) & 0xffffffdf;
  uVar1 = (ulonglong)CONCAT22((short)((uint)iVar31 >> 0x10),sVar8) * (ulonglong)uVar18;
  bVar42 = (int)(uVar1 >> 0x20) != 0;
  uVar18 = (uint)bVar42;
  uVar13 = (ushort)bVar42;
  uVar40 = -uVar13;
  sVar17 = (short)(uVar1 >> 0x20);
  uVar28 = ((short)(uVar33 >> 1) - uVar28) - (ushort)(sVar17 < 0);
  uVar33 = (CONCAT22(uVar14,uVar29) & 0xffff5941) << 1 | (uVar21 + 0x9129d3ce ^ uVar33) >> 0x1f;
  uVar21 = (CONCAT22((short)(uVar19 >> 0x10),CONCAT11((byte)(uVar19 >> 8) >> 1,(char)uVar19)) |
           0x8000) & ~(1 << ((int)(short)uVar40 & 0x1fU));
  bVar22 = (byte)(uVar41 >> 0x19) - 0x1e;
  bVar7 = bVar22 & 0x1f;
  uVar19 = CONCAT31((uint3)(uVar39 >> 1 & 0xff) | uVar28 & 0xff00 |
                    (uint3)(((uint)uVar28 << 0x18) >> 8),bVar22) << bVar7 | uVar33 >> 0x20 - bVar7;
  bVar22 = (byte)uVar19;
  bVar7 = (byte)(uVar19 >> 8);
  sVar8 = (short)(uVar19 >> 0x10);
  iVar31 = CONCAT22((short)uVar40 >> 0xf,uVar40 >> 10 | uVar13 * -0x40) << 1;
  uVar13 = (ushort)iVar31 | (ushort)CARRY1(bVar7,bVar22);
  uVar41 = (uint)uVar1 >> 1 | (uint)((short)uVar40 >> 0xf < 0) << 0x1f;
  uVar19 = CONCAT22((short)(uVar21 >> 0x10),(short)uVar21 + 0x29f1);
  if ((uVar1 & 1) == 0) {
    uVar19 = uVar41;
  }
  uVar40 = (ushort)uVar19;
  uVar19 = CONCAT22((short)(uVar19 >> 0x10),uVar40 * 2);
  if (!CARRY2(uVar40,uVar40) && (ushort)(uVar40 * 2) != 0) {
    uVar19 = uVar33;
  }
  uVar14 = (undefined2)(uVar41 >> 0x10);
  uVar41 = CONCAT22(uVar14,(ushort)bVar22);
  uVar18 = uVar18 * -2 | (uint)(uVar18 != 0);
  iVar9 = 0;
  if (uVar41 != 0) {
    for (; (uVar41 >> iVar9 & 1) == 0; iVar9 = iVar9 + 1) {
    }
  }
  uVar40 = CONCAT11(bVar7 + bVar22,bVar22) | uVar13;
  iVar20 = (int)CONCAT21((short)(uVar1 >> 0x30),
                         (char)((ushort)(sVar17 << 1) >> 8) << ((byte)uVar28 & 0x1f)) >> 0x15;
  if ((short)uVar40 < 1) {
    iVar20 = iVar9;
  }
  iVar25 = CONCAT22(sVar8,uVar40) >> 1;
  iVar25 = CONCAT22(sVar8 >> 1,CONCAT11((char)((uint)iVar25 >> 8) + -2,(char)iVar25)) + 0x6e04fc14;
  bVar35 = (byte)((uint)iVar25 >> 8);
  bVar7 = (char)iVar25 + bVar35;
  uVar37 = (undefined2)((uint)iVar9 >> 0x10);
  uVar41 = uVar18 + 0x57ea8de8;
  uVar15 = (short)(uVar19 >> 0x10);
  if ((SCARRY4(uVar18,0x57ea8de8) != SCARRY4(uVar41,0)) != (int)uVar41 < 0) {
    uVar15 = uVar37;
  }
  uVar19 = CONCAT31(CONCAT21((short)((uint)iVar25 >> 0x10),(char)iVar25),bVar7) & 0xffffff0f;
  bVar27 = (byte)uVar19;
  uVar18 = (uVar41 | 0x80000) << 1 | (uint)((int)(uVar41 | 0x80000) < 0);
  iVar25 = (int)(short)(CONCAT11((bVar35 | 1) >> (bVar27 & 7) | (bVar35 | 1) << 8 - (bVar27 & 7),
                                 bVar22) | 0xe2) * (int)(short)(ushort)uVar19;
  uVar28 = (ushort)((uint)iVar31 >> 0x10);
  iVar31 = CONCAT22(uVar14,(short)(char)iVar25) >> bVar27;
  iVar10 = CONCAT22((short)((uint)iVar31 >> 0x10),(short)iVar31 * -0x52c4);
  uVar40 = (ushort)(uVar19 >> 0x10);
  iVar31 = CONCAT22(uVar15,0x1e6d);
  if (((CONCAT22((short)(CONCAT22((short)((uint)iVar20 >> 0x10),
                                  (ushort)iVar20 >> bVar27 |
                                  (CONCAT11(bVar35,bVar22) | 0x1e2) << 0x10 - bVar27) + uVar19 + 1
                        >> 0x10),(short)((uint)iVar25 >> 0x10)) | 0xa200) >> (bVar7 & 0xf) & 1) == 0
     ) {
    iVar31 = iVar10;
  }
  iVar20 = CONCAT22(uVar28,(ushort)(uVar13 << 8 | (ushort)uVar19 >> 8) >> 1) << 10;
  sVar8 = ((uVar28 ^ 0x1000) >> 6 | (ushort)iVar20) + (short)uVar18;
  uVar14 = (undefined2)((uint)iVar20 >> 0x10);
  lVar4 = (longlong)iVar10 * (longlong)(int)((uint)uVar40 << 0x10);
  uVar28 = (ushort)((ulonglong)lVar4 >> 0x20);
  uVar13 = (short)iVar9 - 1U ^ 1 << (uVar28 & 0xf);
  uVar19 = CONCAT22(uVar37,uVar13);
  if ((byte)iVar31 < 0xd7) {
    uVar18 = CONCAT22(uVar14,sVar8);
  }
  iVar31 = CONCAT31((int3)((uint)iVar31 >> 8),(byte)iVar31 + 0x68 + (sVar8 < 0)) - uVar19;
  uVar29 = (ushort)CONCAT31((int3)(CONCAT22(uVar40,0x577c) >> 8),(char)iVar31 + ')') | 0xc0;
  uVar39 = sVar8 * 2 & 0xf;
  uVar30 = (ushort)CONCAT31((int3)((uint)iVar31 >> 8),0x7c);
  if (uVar30 == 0x2e28) {
    uVar28 = 0x2e28;
  }
  uVar41 = CONCAT22(uVar14,sVar8 * 2) + -0x4db2a63f + (uint)(uVar30 < 0x2e28);
  iVar9 = 0x1f;
  if (uVar19 != 0) {
    for (; uVar19 >> iVar9 == 0; iVar9 = iVar9 + -1) {
    }
  }
  sVar8 = (ushort)(byte)iVar9 * (uVar28 & 0xff);
  uVar19 = CONCAT22((short)((ulonglong)lVar4 >> 0x30),CONCAT11(7,(char)uVar28));
  bVar22 = (byte)((uint)iVar31 >> 8);
  cVar26 = (char)sVar8;
  uVar18 = (uint)(ushort)((ushort)(uVar18 >> 0x11) |
                         (ushort)(((uint)((uVar29 >> uVar39 & 1) != 0) << 0x1f) >> 0x10)) << 0x10;
  if (!SCARRY4(CONCAT22(uVar40,uVar29 | 1 << uVar39) ^ 0xa09a795c,0x6682c739)) {
    uVar18 = uVar19;
  }
  bVar7 = (byte)((ushort)sVar8 >> 8);
  uVar40 = CONCAT11(bVar7 << 3 | bVar7 >> 5,cVar26 << 1 | cVar26 < '\0');
  uVar19 = uVar19 & 0xd3cf846d;
  iVar20 = uVar19 + 0x7b3aeca0;
  uVar39 = (ushort)CONCAT31((int3)((uint)iVar20 >> 8),((char)iVar20 << 1 | uVar19 < 0x84c51360) << 1
                           );
  uVar29 = uVar39 ^ (ushort)(uVar40 == uVar39) * (uVar39 ^ (ushort)uVar41);
  uVar40 = uVar40 ^ (ushort)(uVar40 != uVar39) * (uVar40 ^ uVar29);
  uVar21 = CONCAT22((short)((uint)iVar20 >> 0x10),uVar29) & 0xffff00ff;
  uVar33 = (uint)CONCAT21((short)((uint)iVar31 >> 0x10),bVar22 >> 1 | bVar22 << 7) * 0x100 +
           0x5fe9cce4 + (uint)((uVar28 & 1) != 0);
  uVar14 = (undefined2)(uVar18 >> 0x10);
  bVar22 = (byte)uVar21;
  bVar7 = (bVar22 & 0x1f) % 9;
  bVar35 = (byte)(uVar40 >> 9);
  bVar7 = (byte)(CONCAT11(((ushort)uVar41 >> 3 & 1) != 0,bVar35) >> bVar7) | bVar35 << 9 - bVar7;
  cVar12 = bVar7 + 1;
  cVar26 = (char)(uVar19 >> 8);
  if (!SCARRY1(bVar7,'\x01')) {
    cVar26 = (char)(uVar41 >> 8);
  }
  uVar19 = CONCAT22((short)((uint)iVar9 >> 0x10),CONCAT11(cVar12,(char)(uVar40 >> 1)));
  if ((char)(cVar26 + cVar12) != '\0') {
    uVar19 = uVar41 & 0xfffffff7;
  }
  bVar7 = (byte)uVar19;
  bVar35 = (byte)(uVar19 >> 8);
  sVar8 = (short)(uVar19 >> 0x10);
  bVar27 = bVar35 ^ (bVar7 == bVar35) * (bVar35 ^ (byte)(uVar33 >> 8));
  bVar22 = bVar22 + 0x7e;
  uVar40 = (short)CONCAT31((int3)(CONCAT22(sVar8,CONCAT11(bVar27,bVar7)) >> 8),
                           bVar7 ^ (bVar7 != bVar35) * (bVar7 ^ bVar27)) >> (bVar22 & 0x1f);
  uVar33 = uVar33 | 1 << (uVar40 & 0x1f);
  cVar26 = (char)((uint)((int)sVar8 >> 0xf) >> 8);
  bVar7 = -cVar26;
  uVar39 = CONCAT11(cVar26,bVar22);
  uVar34 = CONCAT22((short)(uVar21 >> 0x10),uVar39) | 0xc000;
  uVar19 = uVar39 | 0xc000;
  uVar41 = (CONCAT11(bVar7,(char)((int)sVar8 >> 0xf)) & 0x3fff) << 0x10 | (uint)uVar40;
  uVar40 = (ushort)(uVar41 / uVar19);
  uVar21 = CONCAT22(sVar8,uVar40);
  uVar33 = CONCAT31((int3)(CONCAT22((short)(uVar33 >> 0x10),
                                    CONCAT11((byte)(uVar33 >> 8) & bVar7,(char)uVar33)) >> 8),
                    (char)uVar33 + '\x01');
  if (0 < (short)(uVar40 | 0x5ca2)) {
    uVar33 = uVar21 | 0x5ca2;
  }
  uVar19 = uVar41 % uVar19 & 0x1f;
  uVar41 = uVar34 ^ 1 << uVar19;
  bVar22 = (byte)uVar41 & 0x1f;
  uVar6 = CONCAT14((uVar34 >> uVar19 & 1) != 0,uVar21) | 0x5ca2;
  uVar19 = (int)uVar6 << bVar22 | (uint)(uVar6 >> 0x21 - bVar22);
  iVar31 = (uVar19 & 0xffff) * (uVar19 & 0xffff);
  cVar12 = ((char)uVar33 - (char)((uint)iVar31 >> 0x10)) + -1;
  iVar20 = CONCAT22(uVar14,(ushort)uVar18 >> 1) * 0x2f339212;
  uVar39 = (ushort)iVar31 & ~(1 << ((ushort)(uVar41 >> 1) & 0xf));
  uVar23 = (uint3)(uVar41 >> 9);
  cVar26 = (char)(uVar41 >> 1) + cVar12 + '\x01';
  bVar42 = cVar26 == '\0';
  uVar18 = CONCAT22((short)(uVar33 >> 0x10),~(ushort)CONCAT31((int3)(uVar33 >> 8),cVar12));
  bVar22 = (byte)((uint)iVar31 >> 0x18);
  iVar31 = CONCAT22(sVar8 >> 0xf,CONCAT11(bVar22 >> 1,bVar42));
  sVar17 = (short)CONCAT31(uVar23,cVar26);
  uVar40 = (short)iVar20 + sVar17;
  uVar15 = (undefined2)(iVar31 + -0x7dc9c4b0 + uVar18 * 4 >> 0x10);
  sVar8 = (short)(char)uVar23;
  if ((short)uVar39 < 0 ==
      (short)(CONCAT11((char)(uVar39 >> 8),((byte)uVar39 | bVar22) + 1) << 1 |
             (ushort)((short)uVar39 < 0)) < 0) {
    sVar8 = sVar17;
  }
  uVar18 = uVar18 ^ 1 << (uVar40 & 0x1f);
  uVar19 = CONCAT31((int3)((uint)iVar31 >> 8),bVar42 + 'G');
  if (bVar42 < 0xb9) {
    uVar19 = uVar18;
  }
  uVar21 = (CONCAT22(uVar37,(ushort)(((uVar13 >> 0xb |
                                      CONCAT11(0x2e27 < (short)uVar30,(char)uVar28) << 5) +
                                      (short)iVar9 & 0xfffe) * 4) >> 1) | 0x8000) ^ 0x8000;
  if ((POPCOUNT(bVar42 + 'G') & 1U) == 0) {
    uVar21 = uVar19;
  }
  uVar19 = uVar19 ^ 0x1fa32136;
  iVar31 = CONCAT22(uVar14,uVar40);
  iVar9 = iVar31 + 0x610c13a;
  bVar42 = iVar9 == 0 || (SCARRY4(iVar31,0x610c139) != SCARRY4(iVar31 + 0x610c139,1)) != iVar9 < 0;
  iVar31 = (int)(short)CONCAT31((int3)(CONCAT22(uVar15,sVar8) >> 8),(char)uVar19) *
           (int)(short)iVar9;
  uVar38 = CONCAT22((short)((uint)iVar20 >> 0x10),uVar40) >> bVar42;
  uVar28 = (ushort)((iVar9 * 2 | (uint)(iVar9 < 0)) << 1) | (ushort)((uint)(iVar9 * 2) >> 0x1f);
  uVar33 = CONCAT31((int3)(CONCAT22((short)(uVar19 >> 0x10),(short)((uint)iVar31 >> 0x10)) >> 8),
                    (char)((uint)iVar31 >> 0x10) + (char)(uVar18 >> 8) + ((short)iVar31 != iVar31))
           << 1;
  uVar34 = uVar33 | 1;
  uVar13 = (ushort)uVar34;
  iVar9 = CONCAT22((ushort)(uVar41 >> 0x11),CONCAT11(((int)uVar19 < 1) + '2',bVar42)) << 1;
  uVar28 = (ushort)iVar9 | (ushort)(CARRY2(uVar28,uVar13) || 0xfffe < (ushort)(uVar28 + uVar13));
  uVar28 = uVar28 ^ 1 << (uVar28 + uVar13 * 4 & 0xf);
  iVar9 = CONCAT22((short)((uint)iVar9 >> 0x10),uVar28) >> ((byte)uVar28 & 0x1f);
  iVar20 = CONCAT22((short)(uVar33 >> 0x10),(short)iVar9);
  uVar19 = (uVar18 | 0xd7) << 5 | uVar38 >> 0x1b;
  iVar31 = CONCAT22(uVar15,CONCAT11(1,(char)iVar31));
  uVar18 = CONCAT22((short)((uint)iVar9 >> 0x10),uVar13) >> ((byte)uVar34 & 0x1f);
  if (iVar31 != iVar20) {
    iVar31 = iVar20;
  }
  bVar22 = (byte)uVar18 & 7;
  bVar7 = (byte)((uint)iVar31 >> 8);
  iVar9 = (uVar18 & 0xfffffffe | 1) + 1;
  uVar18 = CONCAT31((int3)((uint)iVar9 >> 8),(char)iVar9 + -0x4f) & 0xffffff0f;
  sVar16 = (sbyte)uVar18;
  return CONCAT22((short)((uint)iVar31 >> 0x10),
                  CONCAT11(bVar7 << bVar22 | bVar7 >> 8 - bVar22,(char)iVar31)) + uVar19 + uVar18 +
         iVar31 + (CONCAT22((short)((uVar38 << 4) >> 0x10),(short)(uVar38 << 4) << 1) | 1) +
         CONCAT22(0x4741,(((ushort)uVar38 ^ 0x185a) & 0x7fff | 1 << ((ushort)uVar19 & 0xf)) <<
                         sVar16 | (ushort)uVar21 >> 0x10 - sVar16) + uVar21 + -0x48b079a6;
}



// WARNING: Removing unreachable block (ram,0x0804d54b)
// WARNING: Removing unreachable block (ram,0x0804d460)
// WARNING: Removing unreachable block (ram,0x0804d131)
// WARNING: Removing unreachable block (ram,0x0804cee9)
// WARNING: Removing unreachable block (ram,0x0804cecc)
// WARNING: Removing unreachable block (ram,0x0804d1a2)
// WARNING: Removing unreachable block (ram,0x0804d629)
// WARNING: Removing unreachable block (ram,0x0804d080)
// WARNING: Removing unreachable block (ram,0x0804cfaa)
// WARNING: Removing unreachable block (ram,0x0804cf54)
// WARNING: Removing unreachable block (ram,0x0804d07d)
// WARNING: Removing unreachable block (ram,0x0804d72e)

int log_size_10_var_005(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint5 uVar6;
  byte bVar7;
  byte bVar11;
  short sVar8;
  uint uVar9;
  int iVar10;
  undefined2 uVar13;
  uint3 uVar12;
  sbyte sVar14;
  ushort uVar15;
  char cVar17;
  undefined2 uVar18;
  uint uVar16;
  byte bVar21;
  undefined4 uVar19;
  uint3 uVar22;
  uint uVar20;
  byte bVar23;
  byte bVar24;
  short sVar25;
  byte bVar27;
  char cVar28;
  int iVar26;
  ushort uVar29;
  uint uVar30;
  uint uVar31;
  ushort uVar32;
  ushort uVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  ushort uVar39;
  undefined2 uVar40;
  undefined2 uVar41;
  uint uVar38;
  ushort uVar42;
  ushort uVar43;
  uint uVar44;
  bool bVar45;
  
  for (iVar26 = 0x1f; 0x8555eb01U >> iVar26 == 0; iVar26 = iVar26 + -1) {
  }
  sVar8 = CONCAT11(0x80,(char)(((uint)CONCAT11((char)((uint)iVar26 >> 8) << 3,(char)iVar26) << 1) >>
                              8) + 'w');
  for (uVar44 = 0; (0xf6U >> uVar44 & 1) == 0; uVar44 = uVar44 + 1) {
  }
  uVar29 = (ushort)uVar44 & 0xf6;
  sVar25 = -0x4d00;
  if ((uVar44 & 0xf6) != 0) {
    sVar25 = sVar8;
  }
  sVar8 = (sVar8 << 1 | 1U) << 1;
  bVar23 = (byte)sVar8 >> 1;
  bVar11 = (byte)((ushort)sVar8 >> 8);
  bVar27 = bVar11 ^ (bVar11 == 1) * (bVar11 ^ bVar23);
  uVar44 = CONCAT22(0xc33,CONCAT11(bVar27,bVar23)) | 0xc000;
  iVar26 = (CONCAT31(0x1b500,(bVar11 != 1) * (bVar27 ^ 1)) ^ 1) << 1;
  uVar32 = (ushort)(byte)(uVar44 >> 8);
  uVar15 = (ushort)iVar26;
  bVar23 = (byte)(uVar15 / uVar32);
  uVar43 = (ushort)((uint)iVar26 >> 0x10);
  iVar26 = uVar44 << 1;
  uVar33 = (ushort)iVar26;
  uVar42 = sVar25 << 1 | uVar33 >> 0xf;
  if (!SCARRY2(uVar42,uVar33)) {
    iVar26 = 1;
  }
  uVar13 = (undefined2)((uint)(CONCAT22(0xc760,uVar42 + uVar33) + -1) >> 0x10);
  uVar44 = CONCAT22(uVar13,0x4000);
  lVar4 = (ulonglong)
          ((uint)(uVar43 >> 7) |
          CONCAT22(uVar43,((ushort)CONCAT31((int3)(CONCAT22(uVar43,CONCAT11((char)(uVar15 % uVar32),
                                                                            bVar23)) >> 8),
                                            bVar23 >> 1) >> 1) + 0xd6b1) << 9) * (ulonglong)uVar44;
  if ((char)iVar26 != '\x01') {
    uVar44 = CONCAT22(uVar13,(ushort)(byte)(uint)((ulonglong)lVar4 >> 0x23));
  }
  iVar34 = (ushort)(~(uVar29 << 9 | uVar29 >> 7) + 0x8091) + 0xb3f0c44d;
  uVar29 = (short)iVar34 >> 0x1e;
  uVar44 = uVar44 + 1 & 0xfffffffe;
  uVar32 = uVar29 >> 6 | uVar29 << 10;
  uVar2 = (longlong)(int)((uint)(ushort)((ulonglong)lVar4 >> 0x10) << 0x11) * 0x2080e;
  bVar45 = (uVar2 & 0x10000000000) != 0;
  uVar29 = (ushort)(uVar2 >> 0x30);
  iVar36 = CONCAT22(2,CONCAT11(-0x57 - bVar45,0xff));
  iVar10 = iVar36 << 2;
  iVar26 = 0x1f;
  if (uVar44 != 0) {
    for (; uVar44 >> iVar26 == 0; iVar26 = iVar26 + -1) {
    }
  }
  uVar44 = (CONCAT31((int3)((uint)iVar10 >> 8),
                     ((byte)(uint)(CONCAT14(0xa9 < bVar45,iVar36) >> 0x1f) | (byte)iVar10) - 1) ^
           0xdb) << 1;
  bVar23 = (byte)uVar44 & 7 | 1;
  uVar30 = CONCAT22(0xff,uVar32 + 0x7fff) ^ 0x100;
  uVar9 = (uint)((byte)((byte)((int)(short)uVar32 << 1) | (short)uVar32 < 0) < 0xfa) << 0x10 |
          uVar44 & 0xffff | 1;
  uVar15 = (ushort)(uVar9 >> 10) | (ushort)(uVar9 << 7);
  uVar35 = ((CONCAT22((short)((uint)iVar34 >> 0x10),(ushort)(uVar32 - 1) >> 1) | 0x8000) << 1 |
           (uint)(iVar34 < 0)) ^ 1 << (uVar30 & 0x1f);
  uVar9 = ((uint)CONCAT21(uVar29,0U >> bVar23 | '\0' << 8 - bVar23) << 8) >> 7;
  uVar29 = uVar29 >> 7;
  bVar23 = (byte)uVar9;
  uVar32 = 0 >> ((byte)uVar15 & 0x1f);
  uVar44 = CONCAT31((int3)(CONCAT22((short)(uVar44 >> 0x10),uVar15) >> 8),
                    (byte)uVar15 ^ (byte)(uVar32 >> 8));
  uVar19 = CONCAT31((int3)(CONCAT22(uVar29,CONCAT11((char)(uVar9 >> 8) << 2,bVar23)) >> 8),
                    bVar23 - 0x36);
  if (bVar23 < 0x36 && (byte)(bVar23 - 0x36) != '\0') {
    uVar19 = CONCAT22(uVar29,(short)uVar30);
  }
  iVar34 = CONCAT22((short)((uint)iVar26 >> 0x10),
                    (short)((ushort)iVar26 >> 0xd | uVar15 << 3) >> 0x17);
  iVar10 = (uint)CONCAT21((short)((uint)uVar19 >> 0x10),~(byte)((uint)uVar19 >> 8)) << 8;
  iVar26 = CONCAT22((short)uVar32 >> 0xf,uVar32 >> 1);
  iVar36 = uVar35 - uVar44;
  if (iVar26 != iVar34) {
    iVar26 = iVar34;
    iVar10 = iVar34;
  }
  uVar32 = (ushort)((uint)(iVar10 << 1) >> 0x10);
  uVar29 = (ushort)(iVar10 << 1) >> 0xe;
  sVar8 = (short)((uint)iVar26 >> 0x10);
  uVar44 = (uint)(uVar44 <= uVar35) * 0x100 + 0x29322a49;
  uVar35 = CONCAT22((short)((uint)iVar36 >> 0x10),
                    ~((short)iVar36 + (short)uVar30 + 1U) + (short)((int)uVar30 >> 6) * -2);
  uVar9 = uVar44 & 0x1f;
  uVar30 = uVar35 | 1 << uVar9;
  uVar9 = (((int)sVar8 >> 0xf & 0x3fffU) << 0x10 |
          ((uint)((uVar35 >> uVar9 & 1) != 0) << 0x10) >> 0xd) % ((uVar29 | 0x8000) | 0xc000);
  iVar36 = CONCAT22(sVar8,CONCAT11(0xd0,(byte)(((CONCAT22(uVar32,uVar29) | 0x8000) << 10) >> 0x18) |
                                        0x42)) * 0x26812155;
  iVar34 = (int)(char)((char)((uint)iVar36 >> 8) >> 7);
  uVar44 = (uint)CONCAT11(((char)(uVar9 >> 8) << 1 | (short)uVar9 < 0) +
                          (char)(uVar44 * -0x3c025f76 >> 8),(char)uVar9 >> 0x1c) << 0x16 |
           uVar30 >> 10;
  uVar9 = (CONCAT22((short)((uint)iVar36 >> 0x10),(ushort)iVar36 >> 1) | 0x8000) >> 1;
  uVar35 = uVar44 * 2;
  uVar44 = (uint)((int)uVar44 < 0);
  iVar10 = iVar34 + uVar35;
  uVar31 = iVar10 + uVar44;
  if ((int)uVar31 < 0) {
    uVar30 = uVar35;
  }
  if (uVar31 != 0 && (SCARRY4(iVar34,uVar35) != SCARRY4(iVar10,uVar44)) == (int)uVar31 < 0) {
    uVar31 = CONCAT22((short)(uVar31 >> 0x10),(short)uVar9);
  }
  uVar9 = (byte)((char)uVar9 + (char)(uVar35 >> 8)) ^ 0xe;
  bVar23 = ((byte)uVar35 & 0x1f) % 0x11;
  uVar44 = (uint)((uVar9 & 1) != 0) << 0x10 | uVar35 & 0xffff;
  uVar15 = (ushort)(uVar44 << bVar23) | (ushort)(uVar44 >> 0x11 - bVar23);
  bVar23 = (byte)uVar15 & 0x1f;
  uVar37 = CONCAT22((short)(uVar30 >> 0x10),(short)((short)uVar35 * -0x2ffe ^ 0x47f1U) >> 6);
  uVar30 = (int)((CONCAT31((int3)(((uint)uVar29 << 9) >> 8),(char)(uVar32 >> 7) << 1) & 0xa3b5a6cd)
                 >> 1 | (uint)(ushort)(short)(char)(uVar9 >> 1) << 0x1f) >> 0x1a;
  bVar45 = (int)uVar31 < 0;
  uVar44 = (uint)bVar45;
  uVar9 = uVar30 - uVar37;
  iVar10 = uVar9 - uVar44;
  uVar6 = CONCAT14(uVar30 < uVar37 || uVar9 < uVar44,uVar30) >> 2;
  uVar32 = (ushort)((uint)iVar10 >> 0x10);
  bVar11 = (byte)((uint)iVar10 >> 8) | (byte)iVar10;
  uVar29 = CONCAT11(bVar11,(byte)iVar10);
  bVar23 = ((byte)(CONCAT22((short)(uVar35 >> 0x10),uVar15) >> bVar23) |
           (byte)((((ushort)((short)(ushort)iVar36 >> 0xf) & 0x7fffff80) << 1) << 0x20 - bVar23)) &
           7;
  bVar27 = (byte)(uVar6 >> 8);
  uVar44 = (uint)bVar45 << 0x10 |
           CONCAT31(0x5fe018,SBORROW4(uVar30,uVar37) == SBORROW4(uVar9,uVar44)) & 0xffff;
  uVar9 = CONCAT31(CONCAT21((short)(uVar6 >> 0x10),bVar27 << bVar23 | bVar27 >> 8 - bVar23),
                   CONCAT22(0x5fe0,(ushort)(uVar44 >> 0xc) | (ushort)(uVar44 << 5)) != 0);
  iVar10 = CONCAT22(uVar32,uVar29) * 5;
  uVar44 = uVar29 & 0xff00;
  bVar23 = (byte)(uVar44 >> 8) & 0x1f;
  uVar29 = (ushort)(uVar44 >> 8);
  uVar29 = uVar29 | ((ushort)(uVar9 >> bVar23) | (short)uVar9 << 0x20 - bVar23) &
                    ~(1 << (uVar29 & 0xf));
  uVar44 = ~CONCAT22((short)(((uVar31 >> 0x10) << 0x11) >> 0x10),(ushort)bVar45 << 0xf);
  bVar23 = (byte)uVar29 & 0x1f;
  uVar35 = (uint)(int)(char)bVar11 >> bVar23 | (int)(char)bVar11 << 0x21 - bVar23;
  uVar9 = (uint)uVar29 << 1;
  bVar11 = (byte)uVar9;
  bVar27 = 0U >> (bVar11 & 7) | '\0' << 8 - (bVar11 & 7);
  uVar30 = CONCAT22((short)(uVar44 >> 0x10),
                    (ushort)uVar44 & CONCAT11((char)(uVar9 >> 8) << 1,bVar11));
  uVar44 = (uVar9 & 0xffff7fff ^ 0x100000) >> 1;
  bVar23 = (byte)uVar44 & 0x1f;
  sVar8 = (short)(char)((byte)(((uint)uVar32 << 0x10) >> bVar23) |
                       (byte)((bVar27 | 0xc000) << 0x20 - bVar23)) * (short)(char)bVar27;
  iVar36 = (uVar30 << (bVar11 & 0x1f) | uVar30 >> 0x21 - (bVar11 & 0x1f)) + 0x38706214;
  uVar44 = uVar44 & ~(1 << ((((ushort)uVar9 & 0x7fff) & 0x3e) >> 1)) & 0xffffff0f;
  sVar14 = (sbyte)uVar44;
  uVar9 = CONCAT22((short)((uint)iVar36 >> 0x10),(short)iVar36 + (short)uVar35 * 2 + -0x2e4d);
  sVar25 = CONCAT11((char)((char)(uVar44 >> 8) + -1) >> 0xf,sVar14);
  uVar29 = (ushort)((CONCAT22((short)((uint)-CONCAT31((int3)(CONCAT22((short)((uint)iVar10 >> 0x10),
                                                                      CONCAT11((char)((uint)iVar10
                                                                                     >> 8) << 1,
                                                                               (char)iVar10)) >> 8),
                                                      (char)iVar10 + -0x1f) >> 0x10),
                              (short)((uint)((int)CONCAT11((byte)((ushort)(sVar8 * 2) >> 8) | bVar27
                                                           ,(byte)(sVar8 * 2) | (char)sVar8 != sVar8
                                                          ) * (int)(short)CONCAT11(0x60,bVar27)) >>
                                     0x10)) >> sVar14) >> 0x10);
  iVar10 = 0x1f;
  if (uVar35 != 0) {
    for (; uVar35 >> iVar10 == 0; iVar10 = iVar10 + -1) {
    }
  }
  bVar23 = sVar14 << sVar14;
  uVar37 = (iVar10 << (bVar23 & 0x1f) |
           (uint)(CONCAT14(0xc10617e2 < uVar9,iVar10) >> 0x21 - (bVar23 & 0x1f))) >> (bVar23 & 0x1f)
           | CONCAT31((int3)(CONCAT22((short)(uVar44 >> 0x10),sVar25) >> 8),bVar23) <<
             0x20 - (bVar23 & 0x1f);
  uVar32 = (short)uVar37 >> 0x14;
  uVar30 = CONCAT22(uVar29,sVar25 * -0x1984) << 1 | (uint)(uVar29 >> 0xf) | 0xc0;
  uVar44 = uVar9 + 0x3ef9e861 & 0xffff3fff;
  uVar29 = (ushort)(byte)uVar30;
  uVar31 = uVar9 + 0x3ef9e81d ^ 1 << (uVar35 & 0x1f);
  iVar36 = uVar30 + uVar31;
  uVar22 = (uint3)(((uint)CONCAT11(0x60,bVar27) << 0x12) >> 8);
  iVar10 = CONCAT22((short)(uVar44 >> 0x10),
                    CONCAT11((char)((ushort)uVar44 % uVar29),(char)((ushort)uVar44 / uVar29))) << 1;
  bVar23 = (byte)iVar10 >> 1 | ((int)uVar44 < 0) << 7;
  uVar44 = (CONCAT31((int3)((uint)iVar10 >> 8),bVar23) & 0xffff) * (uint)uVar32;
  uVar29 = (ushort)((uint)iVar36 >> 0x10);
  iVar34 = (int)(CONCAT31(uVar22,(byte)((uint)iVar36 >> 8) & bVar23) | 0x6e00) >> 6;
  iVar36 = CONCAT22(uVar29 >> 1,(short)(CONCAT22(uVar29,(short)(uVar44 >> 0x10)) >> 1) >> 1);
  uVar9 = (CONCAT22((short)((uint)iVar10 >> 0x10),~((ushort)uVar44 & ~(1 << ((ushort)iVar34 & 0xf)))
                   ) - iVar36) - 1;
  bVar23 = (byte)((ushort)((short)CONCAT31((int3)(uVar22 | 0x6e) >> 6,
                                           ((char)iVar34 + 'A') - ((uVar44 & 0x20000) != 0)) +
                          -0x304) >> 8);
  iVar36 = iVar36 + uVar9 + (uint)CARRY1(bVar23,bVar23);
  uVar9 = ~uVar9;
  uVar29 = (ushort)(uVar9 >> 0x10);
  uVar37 = CONCAT22((short)(uVar37 >> 0x10),uVar32) & 0xfffffffe | 0x40;
  uVar13 = (undefined2)((uint)iVar36 >> 0x10);
  uVar44 = CONCAT22((short)(uVar31 >> 0x10),
                    (ushort)((ushort)uVar31 >> 10 | (ushort)uVar31 << 6) >> 1 |
                    (ushort)(uVar35 >> 0x17) << 0xf) | 0x4cdd;
  iVar10 = CONCAT22(uVar29,CONCAT11((byte)(uVar9 >> 8) >> 1,(char)((ushort)uVar9 >> 1))) << 9;
  iVar36 = (CONCAT22(uVar13,(short)CONCAT31((int3)(CONCAT22(uVar13,CONCAT11((char)((uint)iVar36 >> 8
                                                                                  ) << 1,
                                                                            (byte)iVar36)) >> 8),
                                            ~(byte)iVar36)) & 0xfffffffe) + 0xe79e4dc7;
  uVar30 = uVar44 ^ 0x5ad01fff;
  uVar35 = uVar37 << 1 | (uint)((int)uVar37 < 0) | 0xc0000000;
  uVar2 = CONCAT44(CONCAT22((short)((uint)iVar10 >> 0x10),
                            (short)CONCAT31((uint3)((uint)iVar10 >> 8) |
                                            (uint3)(byte)(uVar9 >> 0x1f),~(byte)(uVar29 >> 7)) +
                            (short)uVar44 + 0xcfc),
                   CONCAT22((short)((uint)iVar36 >> 0x10),(ushort)iVar36 >> 1)) & 0x3fffffffffffff00
  ;
  uVar9 = uVar35 << 1 | (uint)((int)uVar35 < 0);
  iVar10 = ((uint)(uVar2 / uVar35) & 0xffff) * (uVar30 & 0xffff);
  uVar29 = (ushort)((uint)iVar10 >> 0x10);
  cVar28 = (char)iVar10;
  uVar22 = (uint3)((ushort)(uVar2 % (ulonglong)uVar35 >> 0x10) & 0xff) | uVar29 & 0xff00 |
           (uint3)(((uint)uVar29 << 0x18) >> 8);
  uVar44 = 0x5ad03eff;
  if ('\0' < cVar28) {
    uVar44 = uVar9;
  }
  bVar23 = (byte)uVar44 & 0x1f;
  uVar9 = (uint)(CONCAT14(cVar28 != '\0',uVar9) >> bVar23) | uVar9 << 0x21 - bVar23;
  uVar43 = (ushort)(uVar30 >> 0x10);
  uVar29 = (ushort)(byte)((byte)uVar44 | 0xc0);
  uVar15 = (ushort)(uVar30 & 0xffff3fff);
  bVar23 = (byte)(uVar15 / uVar29);
  uVar13 = (undefined2)((uVar30 & 0xffff3fff) >> 0x10);
  uVar32 = (ushort)uVar30 + 0x5992;
  bVar45 = 0xa66d < (ushort)uVar30 && uVar32 != 0;
  uVar33 = (ushort)CONCAT31((int3)(uVar44 >> 8),bVar45);
  sVar8 = -uVar33;
  sVar25 = sVar8 + -0x1237;
  uVar42 = (ushort)uVar9;
  if (0xedca < uVar33 || sVar8 == 0x1236) {
    uVar32 = uVar42;
  }
  uVar35 = CONCAT31((int3)(CONCAT22(0xc821,sVar25) >> 8),(char)sVar25 + bVar45);
  bVar27 = (byte)(uVar44 >> 8);
  bVar11 = bVar27 ^ (bVar23 == bVar27) * (bVar27 ^ bVar45);
  uVar15 = (ushort)CONCAT31((int3)(CONCAT22(uVar13,CONCAT11((char)(uVar15 % uVar29),bVar23)) >> 8),
                            bVar23 ^ (bVar23 != bVar27) * (bVar23 ^ bVar11));
  uVar29 = uVar15 - uVar42;
  uVar39 = (ushort)(uVar9 >> 0x10);
  uVar33 = uVar42 ^ (ushort)(uVar29 == 0) * (uVar42 ^ uVar15);
  iVar10 = (CONCAT22(uVar13,uVar15 ^ (ushort)(uVar29 != 0) * (uVar15 ^ uVar33)) - uVar35) -
           (uint)(uVar15 < uVar42);
  uVar9 = (uint)(uVar43 >> 8) | ((uVar43 & 0xff) << 0x10) >> 8;
  uVar43 = (ushort)uVar9;
  uVar15 = CONCAT11(bVar11,bVar45) & uVar43;
  bVar23 = (char)iVar10 * (char)iVar10;
  uVar30 = CONCAT22((short)((uVar30 & 0xffffffbf) >> 0x10),
                    (short)(uVar30 & 0xffffffbf) +
                    (short)CONCAT31(uVar22,(POPCOUNT(uVar29 & 0xff) & 1U) == 0)) & 0xffdfffff;
  cVar17 = (char)((ushort)sVar25 >> 8);
  cVar28 = -cVar17;
  if (cVar28 != '\0') {
    uVar35 = uVar9 | (uVar32 & 0xff00) << 8 | (uint)uVar32 << 0x18;
  }
  uVar29 = (short)(CONCAT22(uVar39,uVar33) >> 1) + 0xe30f;
  uVar12 = (uint3)(CONCAT22((short)((uint)iVar10 >> 0x10),
                            CONCAT11(('\0' < cVar17) << 7 | (cVar28 == '\0') << 6 |
                                     (((ushort)(byte)iVar26 * (ushort)(byte)iVar26 & 0x1000) != 0)
                                     << 4 | ((POPCOUNT(cVar28) & 1U) == 0) << 2 | 2U |
                                     cVar17 != '\0',bVar23)) >> 8);
  sVar14 = (sbyte)uVar15;
  uVar9 = CONCAT31((int3)(CONCAT22((short)(uVar44 >> 0x10),uVar15) >> 8),sVar14);
  uVar35 = uVar35 << 5 | (uint)(uVar12 >> 0x13);
  uVar44 = 0x1f;
  if (uVar9 != 0) {
    for (; uVar9 >> uVar44 == 0; uVar44 = uVar44 - 1) {
    }
  }
  sVar8 = 1 << (uVar29 & 0xf);
  uVar37 = CONCAT31((int3)(CONCAT22((short)(uVar22 >> 8),sVar8) >> 8),(byte)sVar8 >> 1);
  iVar26 = uVar44 - uVar9;
  uVar31 = uVar35;
  if (uVar44 != uVar9) {
    uVar44 = uVar9;
    uVar31 = uVar9;
  }
  uVar9 = uVar35;
  if (-1 < iVar26) {
    uVar9 = uVar37;
  }
  uVar32 = (uVar43 >> 1) * -0xf62 ^ 1 << ((ushort)uVar37 & 0xf);
  lVar4 = (ulonglong)uVar44 * (ulonglong)uVar44;
  uVar13 = (undefined2)(uVar9 >> 0x10);
  uVar9 = CONCAT22(uVar39 >> 1 | (ushort)((uint)(iVar10 * -0x80000000) >> 0x10),uVar29) + uVar35 + 1
          & (uint)((ulonglong)lVar4 >> 0x20);
  bVar11 = -(char)((ulonglong)lVar4 >> 8);
  uVar44 = CONCAT22((short)(uVar30 >> 0x10),
                    (((ushort)uVar30 & 0xfffe) << sVar14 |
                    (ushort)CONCAT31(uVar12,bVar23 >> 2 | bVar23 * '@') >> 0x10 - sVar14) + 1 +
                    (short)uVar44) << 0xe;
  uVar29 = CONCAT11(bVar11,(char)lVar4);
  if ((bVar11 & 0x40) == 0) {
    uVar29 = (ushort)uVar31 ^ (ushort)(1 << (uVar32 & 0x1f)) ^ 0x99d3;
  }
  uVar40 = (undefined2)(uVar9 >> 0x10);
  uVar35 = CONCAT22(uVar40,(short)uVar9 + -0x2def);
  uVar2 = (longlong)CONCAT22((short)((ulonglong)lVar4 >> 0x10),uVar29) * (longlong)(int)uVar35;
  uVar5 = (ulonglong)((longlong)(int)(uint)uVar2 != uVar2) << 0x20 | uVar2 >> 0x20;
  uVar30 = (uint)(uVar5 >> 8) | (uint)(uVar5 << 0x19);
  uVar9 = (uint)uVar2 ^ 0xfd;
  if ('\0' < (char)((byte)uVar2 ^ 0xfd)) {
    uVar35 = CONCAT22(uVar40,(short)uVar9);
  }
  iVar26 = 0x1f;
  if (uVar30 != 0) {
    for (; uVar30 >> iVar26 == 0; iVar26 = iVar26 + -1) {
    }
  }
  bVar23 = (byte)iVar26;
  sVar25 = CONCAT11((char)(uVar2 >> 8) >> (bVar23 & 0x1f),(char)uVar9) + 1;
  sVar8 = (short)CONCAT31((int3)(uVar30 >> 8),(sVar25 == 0) << (bVar23 & 0x1f)) + (ushort)uVar44;
  uVar29 = (ushort)((uint)iVar26 >> 0x10);
  uVar9 = CONCAT22((ushort)(uVar44 >> 0x14),~((ushort)(uVar44 >> 4) | 0xd657));
  iVar10 = 0x1f;
  if (uVar35 != 0) {
    for (; uVar35 >> iVar10 == 0; iVar10 = iVar10 + -1) {
    }
  }
  uVar43 = (ushort)(uVar35 >> 0x10);
  uVar15 = (ushort)uVar35 >> 7 | (ushort)uVar35 << 9;
  uVar35 = CONCAT22(uVar29,CONCAT11((char)((uint)iVar26 >> 8) >> 1,bVar23)) >> 0xb;
  iVar26 = (short)uVar15 * 0x88b;
  if ((short)iVar26 == iVar26) {
    iVar10 = CONCAT22((short)((uint)iVar10 >> 0x10),
                      (uVar32 * 2 + -0x7ae2 + sVar25) * 4 | (ushort)uVar44 >> 0xe);
  }
  bVar7 = (byte)(uVar35 >> 8);
  bVar21 = (byte)((uint)iVar26 >> 8);
  uVar29 = uVar29 >> 0xb;
  uVar32 = (short)iVar10 + -0x11b5 + CONCAT11(bVar7,(char)iVar26) * 4;
  bVar11 = ((byte)uVar35 & 0x1f) % 0x11;
  uVar44 = CONCAT22(uVar43,((ushort)(CONCAT12(CARRY1(bVar7,bVar21),uVar15) >> bVar11) |
                           uVar15 << 0x11 - bVar11) * 0x4aec);
  bVar11 = (byte)((uVar32 & 0xff) >> 1);
  uVar35 = uVar9 | 0xb780bc1c;
  bVar24 = (0xf7 < bVar11) + 0x5f;
  uVar40 = (undefined2)(uVar35 >> 0x10);
  bVar27 = (byte)uVar35 ^ bVar24;
  lVar4 = (ulonglong)
          ((uint)(CONCAT22((short)((uint)iVar10 >> 0x10),(short)(char)(bVar7 + bVar21)) +
                 CONCAT22((ushort)((CONCAT31((int3)(CONCAT22((short)(uVar30 >> 0x10),sVar8) >> 8),
                                             (char)sVar8 + -1) >> (bVar23 & 0x1f)) >> 0x10) |
                          (ushort)((uVar9 << 0x20 - (bVar23 & 0x1f)) >> 0x10),uVar32)) >> 0x1b |
          CONCAT22(uVar29,0x6a5b) << 5) * (ulonglong)uVar44;
  sVar8 = ((short)CONCAT31(CONCAT21(uVar13,-9 - bVar11),bVar24) - (short)(char)bVar27) + 0x455a;
  if (sVar8 == 0) {
    sVar8 = 0x6a00;
  }
  bVar23 = (char)bVar27 >> 8;
  uVar9 = CONCAT31((int3)(CONCAT22(uVar29,CONCAT11((char)((ulonglong)lVar4 >> 0x20),bVar27)) >> 8),
                   bVar23);
  uVar35 = uVar44 << 6 | (uint)(uVar43 >> 10);
  iVar10 = uVar9 - CONCAT22(uVar40,0x6a00);
  uVar9 = CONCAT22((char)bVar27 >> 7,
                   ((short)(char)bVar27 << (bVar23 & 0x1f)) + 0x7771 +
                   (ushort)(uVar9 < CONCAT22(uVar40,0x6a00)));
  bVar11 = (byte)iVar10;
  cVar17 = (char)((ushort)sVar8 >> 8);
  bVar7 = (byte)sVar8;
  cVar28 = cVar17 >> (bVar11 & 0x1f);
  iVar36 = CONCAT22(uVar13,CONCAT11(cVar28,bVar7));
  iVar26 = iVar36 + (CONCAT22((short)((ulonglong)lVar4 >> 0x10),
                              (ushort)lVar4 >> (bVar23 & 0xf) |
                              (ushort)lVar4 << 0x10 - (bVar23 & 0xf)) >> 1);
  bVar23 = bVar11 + (byte)iVar26;
  uVar29 = CONCAT11(cVar17,(byte)(bVar7 + 0x71 + CARRY1(bVar11,(byte)iVar26)) >> 1 |
                           (bVar11 < bVar7 || (byte)(bVar11 - bVar7) < (uVar9 < 0x8ea0722e)) << 7);
  uVar43 = (short)uVar35 + (short)CONCAT31((int3)((uint)iVar10 >> 8),bVar23);
  bVar23 = bVar23 & 0xf;
  uVar29 = uVar29 << bVar23 | uVar29 >> 0x10 - bVar23;
  uVar32 = (ushort)((uint)iVar26 >> 0x10);
  uVar44 = CONCAT22(uVar32,(short)CONCAT31((int3)((uint)iVar26 >> 8),
                                           (bVar11 - bVar7) - (uVar9 < 0x8ea0722e)) + 0x3712) >> 1;
  uVar35 = uVar35 ^ 0xfdf0dad3;
  uVar30 = uVar44 & 0xfffffffe | iVar36 << 0x1f | 1;
  uVar44 = CONCAT22((short)(uVar35 >> 0x10),(ushort)uVar35 ^ 1 << (uVar43 & 0xf)) +
           CONCAT22(uVar40,uVar43) & ~(1 << (((byte)uVar44 & 0xfe) & 0x1f | 1));
  bVar23 = (byte)((uint)iVar10 >> 8) >> 1;
  uVar18 = (undefined2)((uint)iVar10 >> 0x10);
  uVar41 = (undefined2)(uVar44 >> 0x10);
  uVar15 = (ushort)uVar44 >> 1;
  uVar44 = CONCAT22(uVar41,uVar15);
  iVar26 = (CONCAT22(uVar40,uVar43) | 0xc000) + uVar44;
  lVar4 = (longlong)
          CONCAT22(uVar13,(short)(CONCAT22((CONCAT11((char)(uVar29 >> 8),(char)uVar29 + 'o') &
                                           0x1fff) << 1,CONCAT11(cVar28 + bVar7,bVar7)) /
                                 (uVar43 | 0xc000))) * (longlong)(int)uVar30;
  uVar29 = (short)iVar26 + (short)((ulonglong)lVar4 >> 0x20);
  uVar43 = (ushort)((uint)iVar26 >> 0x10);
  if (SBORROW2(uVar29,0x527b)) {
    uVar9 = CONCAT22((char)bVar27 >> 7,(short)CONCAT31(CONCAT21(uVar18,bVar23),1)) | 0x8000;
  }
  if (0x527b < uVar29) {
    uVar9 = uVar44;
  }
  bVar11 = (byte)lVar4;
  bVar27 = (byte)((ulonglong)lVar4 >> 8);
  bVar23 = bVar27 ^ (bVar11 == bVar27) * (bVar27 ^ (bVar23 | 0x80));
  if ((char)bVar27 <= (char)bVar11) {
    uVar30 = CONCAT22(uVar32 >> 1,uVar15);
  }
  bVar7 = bVar11 ^ (bVar11 != bVar27) * (bVar11 ^ bVar23) ^ (byte)(uVar30 >> 8);
  bVar23 = bVar23 & 0xfe | bVar11 < bVar27;
  iVar10 = uVar30 << 1;
  uVar30 = CONCAT31((int3)(CONCAT22((short)((ulonglong)lVar4 >> 0x10),CONCAT11(bVar23,bVar7)) >> 8),
                    bVar7 + 0xbc);
  uVar44 = CONCAT22(uVar43,(ushort)iVar10) >> 1;
  uVar31 = CONCAT31((int3)((uint)iVar10 >> 8),(char)iVar10 << 1 | (char)iVar10 < '\0');
  iVar26 = uVar30 + 0x77a4062;
  uVar35 = ~CONCAT22(uVar18,0x101);
  bVar11 = (byte)uVar35;
  uVar32 = (ushort)uVar44;
  uVar29 = uVar32 * 2 + 1;
  uVar44 = ((CONCAT22((short)(uVar9 >> 0x10),(ushort)uVar9 ^ 1 << ((ushort)iVar10 & 0xf)) <<
             (bVar11 & 0x1f) | uVar44 >> 0x20 - (bVar11 & 0x1f)) + 0x3eb24582) * 2;
  if (uVar29 == 0) {
    uVar44 = uVar31;
  }
  bVar27 = (bVar11 & 0x1f) % 0x11;
  uVar9 = (uint)(CARRY2(uVar32,uVar32) || 0xfffe < (ushort)(uVar32 * 2)) << 0x10 | uVar31 & 0xffff;
  uVar32 = (ushort)(uVar9 << bVar27) | (ushort)(uVar9 >> 0x11 - bVar27);
  bVar27 = bVar11 >> 1;
  uVar31 = CONCAT22((short)((uint)iVar26 >> 0x10),(short)(char)((char)iVar26 + ((char)bVar11 >> 7)))
  ;
  bVar45 = (uVar29 & 1) != 0;
  uVar9 = CONCAT22(uVar43 >> 1,uVar29) >> 1;
  uVar38 = uVar9 | (uint)bVar45 << 0x1f;
  uVar37 = CONCAT22((short)((uint)iVar10 >> 0x10),
                    CONCAT11((char)(uVar32 >> 8) >> (bVar11 & 0x1f),(char)uVar32));
  if (bVar45) {
    uVar37 = uVar38;
  }
  uVar35 = CONCAT31((int3)(uVar35 >> 8),bVar27) >> 1;
  uVar16 = uVar35 | (uint)((bVar27 & 1) != 0) << 0x1f;
  bVar11 = (byte)uVar35;
  uVar2 = (ulonglong)(uVar31 ^ 0x80 | 0xc0000000);
  uVar5 = (CONCAT44(CONCAT22((short)((uint)(CONCAT22((short)((ulonglong)lVar4 >> 0x30),
                                                     ~CONCAT11(uVar30 < 0xf885bf9e,(char)bVar23 >> 7
                                                              ) + 1) + -0x2ec77ac) >> 0x10),0x96),
                    uVar31) ^ 0x80) & 0x3fffffffffffffff | 0xc0000000;
  uVar1 = uVar5 % uVar2;
  bVar23 = bVar11 & 0x1f;
  uVar2 = uVar5 / uVar2 & 0xffffffff;
  uVar29 = (ushort)(uVar2 << bVar23) | (ushort)(uVar2 >> 0x21 - bVar23);
  uVar30 = (int)uVar37 >> (bVar27 & 0x1f) ^ 0x1116782f;
  iVar26 = uVar16 - CONCAT22(uVar41,0x10fb);
  bVar45 = uVar16 < CONCAT22(uVar41,0x10fb) || iVar26 == 0;
  iVar26 = iVar26 + -1;
  cVar17 = (char)((uint)iVar26 >> 8);
  cVar28 = cVar17 - (char)uVar30;
  if (SBORROW1(cVar17,(char)uVar30) != SBORROW1(cVar28,bVar45)) {
    uVar30 = CONCAT22((short)(uVar30 >> 0x10),0x10fb);
  }
  uVar35 = CONCAT31((int3)(CONCAT22((short)((uint)iVar26 >> 0x10),
                                    CONCAT11(cVar28 - bVar45,(char)iVar26)) >> 8),(char)iVar26) &
           0xffffff0f;
  sVar14 = (sbyte)uVar35;
  uVar43 = (ushort)uVar9;
  uVar15 = (ushort)(uVar1 >> 0x10);
  uVar32 = (short)uVar1 << sVar14 | uVar43 >> 0x10 - sVar14;
  iVar34 = CONCAT31((int3)(CONCAT22(uVar15,uVar32) >> 8),(char)uVar32 >> 1);
  uVar31 = (CONCAT22((short)((uVar44 & 0x80d6f70f) >> 0x10),
                     ((short)(uVar44 & 0x80d6f70f) << 1) << (bVar11 & 0x1f)) ^ 0x40000000) >> sVar14
           | uVar30 - 1 << 0x20 - sVar14;
  uVar9 = uVar35 * 0x1e000000 |
          (uint)(CONCAT14((char)((short)uVar29 >> 0xf) < '\0',uVar35 * -0x1c1710f1) >> 8);
  uVar44 = (short)(((ushort)(uVar30 - 1) & ~(1 << (uVar29 & 0xf))) + 0x424f) * -0x32d3;
  uVar44 = (uint)((int)(short)uVar44 != uVar44) << 0x10 | uVar44 & 0xffff;
  uVar30 = uVar9 ^ 0x2824;
  uVar37 = (CONCAT22((short)(uVar38 >> 0x10),uVar43 | (ushort)iVar34) + uVar30 + 2) * 2;
  uVar29 = 0x10fb - (short)uVar31;
  uVar38 = CONCAT22(uVar41,uVar29) & 0xffffffef;
  bVar23 = (byte)((ushort)uVar30 >> 1);
  iVar26 = uVar37 + uVar31;
  uVar35 = uVar31 ^ 0x40000000;
  iVar10 = CONCAT31((int3)(CONCAT22((short)(uVar9 >> 0x10),
                                    CONCAT11(((byte)(uVar30 >> 8) >> 1 |
                                             (byte)((ushort)((ushort)((uVar30 & 1) != 0) << 0xf) >>
                                                   8)) << (bVar23 & 0x1f),bVar23)) >> 8),
                    bVar23 + 0xb4) + -0x1a7d5701;
  iVar36 = iVar10 * 2;
  uVar32 = (ushort)iVar36 | (ushort)((uint)iVar10 >> 0x1f);
  iVar10 = 0;
  if (uVar35 != 0) {
    for (; (uVar35 >> iVar10 & 1) == 0; iVar10 = iVar10 + 1) {
    }
  }
  iVar3 = (CONCAT31((int3)((uint)iVar10 >> 8),(char)iVar10 << 1) & 0xffff) * (uint)(uVar29 & 0xffef)
  ;
  sVar8 = uVar32 + 0xed6b;
  bVar23 = (byte)sVar8;
  uVar30 = uVar38 >> (bVar23 & 0x1f) | uVar38 << 0x20 - (bVar23 & 0x1f);
  bVar11 = (byte)(uVar31 >> 8);
  uVar9 = uVar35;
  if ((char)bVar11 < '\'') {
    uVar9 = uVar30;
  }
  bVar27 = (bVar23 & 0x1f) % 9;
  cVar28 = (char)((uint)iVar3 >> 8);
  cVar17 = (char)uVar9;
  uVar38 = CONCAT31((int3)(CONCAT22((short)((uint)iVar36 >> 0x10),sVar8) >> 8),bVar23) & 0xffffff0f;
  sVar14 = (sbyte)uVar38;
  uVar20 = CONCAT22((ushort)((uint)(iVar34 << 0x1e) >> 0x10) | uVar15 >> 2,
                    (ushort)((uint)iVar3 >> 0x10) & uVar32) + 1;
  uVar16 = CONCAT22((short)(uVar38 >> 0x10),CONCAT11((char)(uVar38 >> 8),sVar14 << 1)) | 0xc000;
  uVar38 = CONCAT22((short)((uint)iVar10 >> 0x10),
                    CONCAT11(cVar28 << bVar27 | (byte)(CONCAT11(bVar11 < 0x27,cVar28) >> 9 - bVar27)
                             ,(char)iVar3)) & 0xffff3fff;
  uVar29 = (ushort)(byte)(uVar16 >> 8);
  uVar32 = (ushort)uVar38;
  uVar16 = uVar16 & 0x396852bb;
  uVar43 = (ushort)(uVar16 >> 0x10);
  bVar23 = (byte)uVar16;
  uVar9 = CONCAT22((short)(uVar9 >> 0x10),(ushort)uVar9 << sVar14 | (ushort)uVar9 >> 0x10 - sVar14)
          << 1;
  uVar15 = (ushort)(CONCAT22(uVar43,(ushort)bVar23) >> 1);
  bVar45 = CARRY2(uVar15,(ushort)uVar30);
  sVar8 = uVar15 + (ushort)uVar30;
  iVar10 = CONCAT31(CONCAT21((short)(uVar38 >> 0x10),(char)(uVar32 % uVar29) + -0x4d),sVar8 == 0);
  iVar36 = CONCAT22((short)(uVar30 >> 0x10),uVar15);
  if (!bVar45 && sVar8 != 0) {
    iVar36 = (int)cVar17;
  }
  bVar11 = (byte)sVar8;
  return iVar10 + (CONCAT31((int3)(CONCAT22((short)(uVar9 >> 0x10),
                                            ((ushort)(byte)((char)uVar9 << bVar23 % 9 |
                                                           (byte)(CONCAT11((uVar9 >> 0x1d & 1) != 0,
                                                                           (char)uVar9) >>
                                                                 9 - bVar23 % 9)) |
                                            1 << (uVar32 / uVar29 & 0xf)) << 8) >> 8),bVar45) << 10
                  ^ 0xbc5U) +
         (CONCAT31((int3)(CONCAT22(uVar43 >> 1,CONCAT11((char)((ushort)sVar8 >> 8) << 1,bVar11)) >>
                         8),bVar11 | bVar45) >> (bVar11 & 0x1f | bVar45)) +
         (uVar20 >> bVar23 | uVar20 << 0x20 - bVar23) + CONCAT22(cVar17 >> 7,(short)cVar17 >> 3) +
         (CONCAT22((short)((int)(CONCAT22((short)((uint)iVar26 >> 0x10),
                                          (((short)iVar26 -
                                           (ushort)(byte)(((byte)(uVar44 >> 0xe) |
                                                          (byte)(uVar44 << 3)) - 1)) -
                                          (ushort)CARRY4(uVar37,uVar31)) * 0x100) + uVar35) >> 0x1d)
                   ,(short)iVar10 << 0xf) | 0x7fff) + iVar36 + -0x1754f5fa;
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
  longlong lVar4;
  longlong lVar5;
  uint5 uVar6;
  uint5 uVar7;
  char cVar8;
  char cVar9;
  byte bVar15;
  short sVar10;
  ushort uVar11;
  uint uVar12;
  uint3 uVar16;
  int iVar13;
  undefined2 uVar18;
  undefined4 uVar14;
  undefined3 uVar17;
  sbyte sVar19;
  byte bVar20;
  ushort uVar21;
  short sVar22;
  byte bVar23;
  undefined2 uVar24;
  ushort uVar25;
  ushort uVar26;
  undefined2 uVar27;
  byte bVar28;
  byte bVar29;
  ushort uVar30;
  byte bVar34;
  ushort uVar31;
  int iVar32;
  int iVar33;
  undefined2 uVar35;
  ushort uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  short sVar40;
  ushort uVar41;
  uint uVar42;
  uint uVar43;
  short sVar44;
  uint uVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  
  for (uVar12 = 0x1f; 0x22022e28U >> uVar12 == 0; uVar12 = uVar12 - 1) {
  }
  uVar37 = uVar12 >> 0x1e | 0x8808b8a0;
  bVar46 = (uVar12 & 1) != 0;
  uVar30 = (ushort)uVar12 >> 1;
  uVar12 = CONCAT22((short)(uVar12 >> 0x10),uVar30 | (ushort)bVar46 << 0xf);
  if (((uVar30 & 0x4000) != 0) != bVar46) {
    uVar12 = uVar37;
  }
  iVar32 = CONCAT22((short)(uVar12 >> 0x10),(short)uVar12 << 1 | (ushort)((short)uVar12 < 0));
  sVar40 = (short)uVar37;
  sVar10 = sVar40 + -0xc0;
  uVar12 = 0x74d0b48f;
  if (sVar10 == 0 || SCARRY2(sVar40,-0xc0) != sVar10 < 0) {
    uVar12 = 0xcbd71b91;
  }
  uVar39 = CONCAT22(0xcbd7,CONCAT11((byte)(uVar12 >> 8) ^ 0x1b,0x91)) & 0xffff1fff;
  uVar37 = CONCAT31((int3)(CONCAT22(0xb229,sVar10) >> 8),(char)sVar10 + ']');
  uVar37 = (uVar37 & 0xffff | 0xa5dc000) / (uVar37 & 0xffff | 0xc000);
  uVar30 = (ushort)(uVar12 & 0x4b04164c);
  uVar42 = 0x759e19a7 - ((0xdc1cU >> (uVar30 & 0xf) & 1) != 0);
  bVar20 = (byte)uVar37;
  bVar15 = (byte)(uVar37 >> 8) >> 1;
  uVar30 = ~uVar30;
  cVar8 = (char)(uVar30 >> 1);
  sVar10 = (short)CONCAT31((int3)(CONCAT22(0xb229,CONCAT11(bVar15,bVar20)) >> 8),
                           (bVar20 & bVar15) + 0xa6) * (short)uVar42;
  uVar42 = uVar42 | 0x740f004e;
  uVar37 = 0x1f;
  if (uVar39 != 0) {
    for (; uVar39 >> uVar37 == 0; uVar37 = uVar37 - 1) {
    }
  }
  uVar31 = (ushort)(uVar42 >> 0x10);
  sVar40 = (short)uVar42 << ((byte)uVar37 & 0x1f);
  uVar38 = CONCAT22(uVar31,sVar40);
  uVar43 = (uint)(CONCAT14(1,iVar32) >> 0x11) & 0xfffffbff | iVar32 << 0x10;
  uVar42 = uVar37 ^ 0xc5;
  lVar4 = (longlong)CONCAT22(0xb229,CONCAT11((char)((ushort)sVar10 >> 8) + -9,(char)sVar10)) *
          (longlong)(int)uVar38;
  iVar32 = (int)(short)lVar4 * (int)sVar40;
  uVar25 = (ushort)((uint)iVar32 >> 0x10);
  uVar21 = (-0xc0 << ((byte)uVar39 & 0x1f) | 1 << ((ushort)uVar42 & 0xf)) + 0x16d4;
  uVar45 = CONCAT22(0x8808,uVar21);
  bVar20 = (byte)uVar42 & 0xf;
  uVar25 = uVar25 >> bVar20 | uVar25 << 0x10 - bVar20;
  uVar16 = (uint3)(CONCAT22((short)((ulonglong)lVar4 >> 0x30),uVar25) >> 8);
  bVar20 = (byte)(CONCAT31(uVar16,(char)uVar25 << 4) >> 1);
  uVar16 = uVar16 >> 1;
  uVar39 = CONCAT21((short)((ulonglong)lVar4 >> 0x10),
                    (char)((uint)iVar32 >> 8) + (char)(uVar25 >> 8) + ((byte)uVar42 < 0x9b)) &
           0xffff3f;
  uVar25 = (ushort)(bVar20 | 0xc0);
  uVar26 = (ushort)(uVar39 << 8);
  sVar10 = (short)(uVar39 >> 8);
  uVar25 = CONCAT11((char)(uVar26 % uVar25),(char)(uVar26 / uVar25));
  uVar39 = (uVar43 >> 1 | 0x80000000) + uVar42 ^ 0xa6fc;
  if ((uVar39 & 0xd96b78dc) != 0) {
    uVar38 = (uint)uVar31 << 0x10;
  }
  uVar18 = (undefined2)(uVar37 >> 0x10);
  bVar15 = (byte)uVar16;
  uVar37 = CONCAT31((int3)(CONCAT22(uVar18,(short)(char)bVar15) >> 8),bVar15 >> 1);
  if (!(bool)(bVar15 & 1)) {
    uVar39 = CONCAT31(uVar16,bVar20) & 0xffff | 0xc0;
  }
  iVar32 = (CONCAT31((int3)(CONCAT22((short)((uVar12 & 0x4b04164c) >> 0x10),
                                     CONCAT11((byte)(uVar30 >> 9) - 1,cVar8)) >> 8),
                     cVar8 << 1 | cVar8 < '\0') | uVar43) + 0xe3b5447e;
  uVar30 = (ushort)uVar39;
  uVar42 = iVar32 * 0x80;
  uVar43 = CONCAT22(uVar18,(short)uVar37) | 0xc000;
  uVar12 = (ushort)(((ushort)uVar42 | (ushort)((uint)iVar32 >> 0x19)) + 0xcb5b) & 0xfffb | 0xc000;
  uVar37 = ((((int)sVar10 >> 0xf & 0x3fffU) << 0x10 |
            (uint)(ushort)(uVar25 ^ (ushort)(uVar25 != uVar30) *
                                    (uVar25 ^ uVar30 ^ (ushort)(uVar25 == uVar30) *
                                                       (uVar30 ^ uVar21)))) %
            (uVar37 & 0xffff | 0xc000) & 0x3fff) << 0x10 | (int)(char)(bVar15 >> 1);
  uVar39 = uVar37 % uVar12;
  uVar12 = (uVar37 / uVar12 & 0xffbf) << 1 | 1;
  if (uVar12 != uVar45) {
    uVar12 = uVar45;
  }
  uVar24 = (undefined2)(uVar12 >> 0x10);
  uVar37 = CONCAT22(uVar24,0xfb13);
  sVar40 = (short)uVar43 * 0x418e;
  bVar20 = (byte)sVar40 & 0x1f;
  iVar32 = (uint)(ushort)((ushort)((uint)(CONCAT22(uVar18,sVar40) << bVar20) >> 0x10) |
                         (ushort)((0xda3addf0U >> 0x20 - bVar20) >> 0x10)) * -0x10000 + -0xf22c526;
  uVar12 = uVar42 & 0xffff0000;
  if (iVar32 == 0) {
    uVar12 = uVar38 >> 0x10 | uVar37 << 0x10;
  }
  iVar33 = (short)iVar32 * -0x4ed;
  uVar21 = (ushort)((uint)iVar33 >> 0x10) | 1;
  sVar40 = ((ushort)iVar33 & 0xff) * 0xb6;
  uVar25 = (ushort)(iVar32 * 2) | (ushort)(iVar32 < 0);
  uVar42 = CONCAT31((int3)(CONCAT22(uVar24,sVar40) >> 8),-(char)sVar40);
  sVar40 = (short)CONCAT31((int3)(uVar12 >> 8),0xb6);
  uVar30 = sVar40 + uVar25;
  uVar18 = (undefined2)(uVar12 >> 0x10);
  if (SCARRY2(sVar40,uVar25) != (short)uVar30 < 0) {
    uVar30 = (ushort)uVar42;
  }
  iVar13 = (short)uVar21 * 0x4739;
  bVar47 = (short)iVar13 != iVar13;
  bVar15 = (byte)((uint)iVar13 >> 8);
  bVar20 = (uVar21 != 0) - bVar15;
  uVar45 = CONCAT22((short)((uint)(iVar32 * 2) >> 0x10),sVar40) + 1;
  bVar46 = uVar42 + 0x908c9a69 < (uint)((uVar21 != 0) < bVar15 || bVar20 < bVar47);
  uVar25 = (ushort)(uVar45 >> 0x10);
  uVar21 = (ushort)uVar45 >> 1 | (ushort)(uVar42 < 0x6f736597 || bVar46) << 0xf;
  bVar15 = (char)((char)iVar13 + '\x1b' + ((uVar45 & 1) != 0)) >> 1;
  sVar40 = (short)CONCAT31((int3)((uint)iVar13 >> 8),bVar15);
  sVar22 = sVar40 + 1;
  if (SCARRY2(sVar40,1) != sVar22 < 0) {
    uVar37 = CONCAT22(uVar24,uVar21);
  }
  iVar32 = (((CONCAT22((short)(((CONCAT31((int3)(CONCAT22(sVar10 >> 0xf,(short)uVar39) >> 8),
                                          (byte)((char)uVar39 + 0x93U) >> 1) | uVar43) << 10) >>
                              0x10),CONCAT11((char)((uint)iVar33 >> 0x18) + 'U',bVar20 - bVar47)) &
             0x3a3bffff) >> 2 | CONCAT22(uVar25,uVar21) << 0x1e) >> (bVar15 & 0x1f)) +
           CONCAT22(uVar18,CONCAT11(uVar42 >= 0x6f736597 && !bVar46,(char)uVar30));
  uVar39 = (uVar37 & 0xffff) >> 10;
  bVar28 = (byte)iVar32;
  bVar20 = (byte)sVar22;
  bVar15 = bVar20 << (bVar20 & 7) | bVar20 >> 8 - (bVar20 & 7);
  uVar38 = (ushort)(1 << (uVar30 & 0xf) ^ 0x9b3f) + 0x84839538;
  uVar42 = CONCAT31(0x2c169,(bVar28 != 0xc5) * (bVar28 ^ 0xc5) ^ 0xc5) | 1 << (uVar38 & 0x1f);
  iVar33 = CONCAT22(uVar18,(ushort)(byte)((char)uVar30 << 1 | 1)) << 1;
  bVar20 = (byte)iVar33;
  bVar28 = (bVar20 | (int)uVar12 < 0) << 3 | bVar20 >> 5;
  sVar19 = (char)((bVar15 + 0xb1) - ((int)uVar12 < 0) & 0xf) >> 1;
  uVar45 = CONCAT31((int3)((uint)iVar33 >> 8),bVar28) | 0xc0000000;
  uVar1 = CONCAT44(iVar32,CONCAT22((short)(uVar42 >> 0x10),(~(ushort)uVar42 & 0xff) * (ushort)bVar28
                                  )) & 0x3fffffffffffffff;
  uVar2 = uVar1 / uVar45;
  uVar1 = uVar1 % (ulonglong)uVar45;
  cVar8 = (char)uVar2;
  uVar12 = CONCAT22((short)((((uint)(uVar25 >> 8) | ((uVar25 & 0xff) << 0x10) >> 8 |
                              (uVar21 & 0xff00) << 8 | (uint)uVar21 << 0x18) >> (bVar15 & 0x1f)) >>
                           0x10),(ushort)(byte)(uVar1 >> 8));
  bVar20 = sVar19 + 0x49;
  lVar4 = (longlong)
          CONCAT22((short)(uVar45 >> 0x10),
                   CONCAT11(SCARRY1(cVar8,-0x3f) != (char)(cVar8 + -0x3f) < '\0',bVar28)) *
          0x7171969a;
  uVar37 = CONCAT22((short)(uVar37 >> 0x10),
                    (ushort)((ushort)uVar39 | (ushort)((uVar37 & 0xffff) << 7)) >> 1 |
                    (ushort)((uVar39 & 1) != 0) << 0xf) >> 3;
  iVar33 = (uVar12 >> sVar19 | uVar12 << 0x21 - sVar19) << 1;
  iVar32 = 0;
  if (uVar37 != 0) {
    for (; (uVar37 >> iVar32 & 1) == 0; iVar32 = iVar32 + 1) {
    }
  }
  bVar15 = (byte)iVar32 >> 1;
  bVar29 = bVar15 << 7 | (byte)(bVar15 | (byte)iVar32 << 7) >> 1;
  uVar12 = (CONCAT22((short)(uVar38 >> 0x10),(ushort)uVar38 >> 1) | 0x8000) + 1 << (bVar20 & 0x1f) |
           (uint)(CONCAT22((short)((uint)iVar33 >> 0x10),
                           ((ushort)iVar33 | (ushort)(uVar1 >> 0x10) >> 0xf) + 0x25b2) << 0xe) >>
           0x20 - (bVar20 & 0x1f);
  uVar12 = uVar12 << 0xd | uVar12 >> 0x13;
  uVar37 = CONCAT31(CONCAT21((short)(uVar2 >> 0x10),(int)lVar4 == lVar4),'\0' << (bVar20 & 0x1f)) *
           uVar12;
  uVar12 = uVar12 << 1;
  bVar28 = (byte)(bVar20 - 0xf72);
  bVar15 = bVar28 & 0xf;
  bVar46 = (uVar37 & 0x1000) != 0;
  uVar30 = ((ushort)CONCAT31((uint3)(byte)((byte)((ushort)(bVar20 - 0xf72) >> 8) >> (bVar28 & 0x1f))
                             ,0xff) ^ 0x6b4f) + 0x5317;
  uVar21 = (ushort)(bVar29 >> bVar15) | (ushort)bVar29 << 0x10 - bVar15;
  if ((uVar12 & 0xd556) != 0) {
    uVar21 = (ushort)uVar12;
  }
  uVar39 = CONCAT22((short)((uint)iVar32 >> 0x10),uVar21);
  bVar20 = (byte)uVar30 & 0x1f;
  uVar45 = uVar39 >> bVar20 | uVar39 << 0x20 - bVar20;
  iVar32 = CONCAT22((short)(uVar12 >> 0x10),uVar30);
  uVar39 = uVar45 >> 0x18 | (uVar45 & 0xff0000) >> 8;
  uVar39 = (uint)(uVar30 < (ushort)uVar39) << 0x10 | uVar39;
  uVar42 = uVar39 >> 2;
  bVar28 = (byte)((uVar39 << 0xf) >> 8) | (byte)(uVar42 >> 8);
  uVar16 = (uint3)((ushort)(uVar37 >> 0x10) & 0xff) | (uint3)uVar37 & 0xff00 |
           (uint3)(uVar37 * 0x1000000 >> 8);
  bVar20 = (byte)uVar12 & 7;
  bVar15 = (byte)uVar42;
  bVar15 = bVar15 >> bVar20 | bVar15 << 8 - bVar20;
  bVar20 = (byte)(uVar37 >> 0x18);
  bVar47 = bVar20 == bVar28;
  bVar28 = bVar28 ^ bVar47 * (bVar28 ^ bVar15);
  bVar20 = bVar20 ^ !bVar47 * (bVar20 ^ bVar28);
  uVar21 = CONCAT11(bVar47,(byte)uVar12);
  uVar6 = CONCAT14((bVar20 & 1) == 0,iVar32) >> 6;
  uVar37 = iVar32 << 0x1b | (uint)uVar6;
  iVar32 = -(uint)((bVar28 & 1) != 0);
  uVar30 = CONCAT11(bVar28,bVar15) >> 1;
  uVar25 = uVar30 | 0x8000;
  bVar47 = (bVar15 & 1) != 0;
  bVar20 = (byte)((ushort)CONCAT31(uVar16,bVar20) >> 1);
  uVar12 = (uint)(bVar28 >> 1) * 5 + 0xf6;
  if (uVar25 != 0 && -1 < (char)bVar28) {
    uVar12 = uVar37;
  }
  uVar42 = CONCAT22((short)(uVar12 >> 0x10),
                    ((short)uVar12 - (uVar21 << 1 | 1)) -
                    (ushort)(bVar20 < 0x3d || (byte)(bVar20 - 0x3d) < bVar47)) & 0x49c997e2;
  bVar15 = (byte)(((uVar21 & 0x7f80) << 1) >> 8);
  lVar5 = (longlong)
          CONCAT31((int3)(CONCAT22((short)(uVar16 >> 8),
                                   CONCAT11(uVar25 != 0 && -1 < (char)bVar28,bVar20)) >> 8),
                   (bVar20 - 0x3d) - bVar47) * 0x66320416;
  bVar15 = (char)uVar30 + bVar15 | bVar15;
  sVar10 = CONCAT11(-(char)(uVar25 >> 8),bVar15);
  iVar33 = CONCAT22((ushort)(uVar45 >> 8) & 0xff | (ushort)((uVar45 << 0x18) >> 0x10),sVar10);
  uVar30 = (ushort)((ulonglong)lVar5 >> 0x10);
  uVar39 = (iVar32 >> 1) * 0x73f00658 & 0xffffff0f;
  sVar19 = (sbyte)uVar39;
  uVar12 = CONCAT22(uVar30,(short)(char)lVar5 * (short)(char)lVar5) >> 1;
  lVar4 = (longlong)CONCAT22(uVar30 >> 1,CONCAT11((byte)(uVar12 >> 8) >> 1,(char)uVar12)) *
          (longlong)CONCAT22((short)(uVar42 >> 0x10),(short)uVar42 << 6);
  bVar28 = (byte)((ulonglong)lVar4 >> 0x20);
  bVar20 = (byte)(uVar39 >> 8);
  bVar47 = ((ushort)CONCAT31((int3)((ulonglong)lVar4 >> 8),-0x5b - ((int)lVar4 != lVar4)) >>
            (bVar15 & 0xf) & 1) != 0;
  uVar30 = (short)uVar6 + -0x1947 + (ushort)((int)lVar5 != lVar5);
  uVar18 = (short)(uVar37 >> 0x10);
  if (!bVar47) {
    uVar30 = 0x2ad7U >> sVar19 | sVar10 << 0x10 - sVar19;
    uVar18 = 0x6796;
  }
  bVar29 = bVar28 & 0x1f;
  uVar42 = iVar33 << bVar29 | (uint)(CONCAT14(bVar47,iVar33) >> 0x21 - bVar29);
  uVar21 = (ushort)(uVar42 >> 0x10);
  uVar12 = CONCAT22((short)(uVar39 >> 0x10),
                    (CONCAT11(bVar20 >> 6 | bVar20 << 2,bVar28) ^ 8) + uVar30) |
           1 << ((ushort)bVar15 & 0x1f);
  bVar20 = (byte)uVar12;
  uVar24 = (undefined2)(uVar12 >> 0x10);
  bVar28 = (char)(uVar12 >> 8) << (bVar20 & 0x1f);
  uVar37 = (CONCAT22((short)((ulonglong)lVar4 >> 0x30),
                     CONCAT11((byte)((ulonglong)lVar4 >> 0x28) >> 1,sVar19)) + 0x3abaca53) -
           (uint)((bVar28 & 1) != 0);
  uVar39 = CONCAT22(uVar18,uVar30 << 1) >> 3;
  uVar12 = 0x1f;
  if (uVar39 != 0) {
    for (; uVar39 >> uVar12 == 0; uVar12 = uVar12 - 1) {
    }
  }
  bVar23 = (char)(bVar28 >> 1 | 0x80) >> (bVar20 & 0x1f);
  sVar10 = uVar21 + CONCAT11(bVar23,bVar20) + 1;
  iVar33 = CONCAT22(uVar24,CONCAT11(bVar23,bVar20)) + 0x56142ac9;
  uVar30 = (uVar21 & 0xff) + sVar10;
  bVar34 = (byte)((ushort)sVar10 >> 8);
  bVar29 = bVar34 >> 1;
  cVar8 = (char)sVar10;
  bVar28 = (bVar20 & 0x1f) % 9;
  uVar39 = CONCAT31((int3)(CONCAT22((CONCAT11((char)(uVar42 >> 8) + 'I',(char)uVar42) >> 1) + -1,
                                    CONCAT11(bVar29 | bVar34 << 7,cVar8)) >> 8),
                    (byte)(CONCAT11((bVar29 & 0x10) != 0,cVar8) >> bVar28) | cVar8 << 9 - bVar28);
  uVar42 = uVar39 | 0x1000;
  bVar47 = ((ushort)uVar42 & uVar30) == 0;
  bVar28 = (byte)uVar37;
  uVar12 = CONCAT22((short)(iVar32 >> 0x11),(ushort)bVar15) + 0xb9c1ca3dU | uVar12;
  if (bVar28 <= bVar23) {
    uVar12 = uVar37;
  }
  uVar42 = CONCAT22(uVar24,CONCAT11((bVar23 - bVar28) + bVar47 + (((uVar42 << 1) >> 0xc & 1) != 0),
                                    bVar20)) << 1;
  uVar45 = uVar42 | 1;
  uVar37 = (int)CONCAT11((char)(uVar30 >> 8),bVar47) * (int)(short)uVar12;
  uVar30 = (ushort)iVar33;
  uVar39 = (uVar39 & 0x6cf9d110) << 1;
  if ((SBORROW2(uVar30,-0x78fe) != false) == (short)(uVar30 + 0x78fe) < 0) {
    uVar39 = uVar45;
  }
  bVar15 = (byte)uVar45;
  bVar20 = (bVar15 & 0x1f) % 9;
  bVar20 = (byte)(CONCAT11(uVar30 < 0x8702,bVar15) >> bVar20) | bVar15 << 9 - bVar20;
  uVar42 = CONCAT22((short)((uint)(CONCAT31((int3)(uVar42 >> 8),bVar20) << (bVar20 & 0x1f)) >> 0x10)
                    ,(short)(uVar37 >> 0x10));
  bVar20 = (byte)(uVar37 >> 0x10) & 0x1f;
  iVar32 = uVar12 << 0x20 - bVar20;
  bVar15 = (byte)(uVar42 >> 1);
  uVar45 = (uVar37 & 0xffff) << (bVar15 & 0x1f);
  uVar42 = CONCAT31((uint3)(uVar42 >> 9),bVar15) & 0xffffff0f;
  uVar18 = (undefined2)(uVar39 >> 0x10);
  sVar40 = (short)uVar45 >> 0xf;
  sVar10 = sVar40 + -1;
  uVar37 = CONCAT22(0xffff,sVar10);
  bVar15 = (byte)uVar12;
  if (SCARRY2(sVar40,-1) == sVar10 < 0) {
    uVar12 = CONCAT22((short)(uVar12 >> 0x10),sVar10);
  }
  uVar25 = sVar10 * -0x2fe5;
  uVar24 = (undefined2)(uVar12 >> 0x10);
  uVar21 = (short)uVar12 - sVar10;
  bVar15 = (byte)((char)uVar42 - 0x1dU) >> 1 ^ bVar15;
  uVar38 = CONCAT31((int3)(uVar42 >> 8),bVar15) | 0x400;
  uVar12 = uVar38;
  if (bVar15 == 0) {
    uVar37 = CONCAT22(uVar18,uVar25);
    uVar12 = uVar45;
  }
  cVar8 = (char)((uVar25 | 0x700) >> 8);
  if (cVar8 == '\0' || (short)(uVar25 | 0x700) < 0) {
    uVar38 = CONCAT22((short)(uVar42 >> 0x10),(short)uVar38);
  }
  if ((POPCOUNT(cVar8) & 1U) != 0) {
    uVar12 = CONCAT22(uVar24,uVar21);
  }
  iVar13 = 0;
  if (uVar37 != 0) {
    for (; (uVar37 >> iVar13 & 1) == 0; iVar13 = iVar13 + 1) {
    }
  }
  uVar38 = uVar38 & 0xffffff70;
  uVar42 = uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 | uVar37 << 0x18;
  uVar12 = (int)((ulonglong)((longlong)(int)uVar12 * (longlong)(int)uVar38) >> 0x20) - uVar42;
  uVar26 = ((ushort)(CONCAT22((short)((uint)iVar33 >> 0x10),uVar30 + 0x78fe) >> bVar20) |
           (ushort)iVar32) - 0x3ee;
  uVar27 = (undefined2)(uVar12 >> 0x10);
  uVar37 = (CONCAT31((int3)(CONCAT22(uVar18,(short)CONCAT21(uVar18,((byte)(uVar25 >> 8) | 7) << 1 |
                                                                   (uVar39 & 0x20000) != 0) << 8) >>
                           8),(uVar26 & 1) == 0) ^ 0x24000) & ~(1 << (uVar21 & 0x1f));
  uVar30 = (((ushort)uVar38 | (ushort)uVar12) - (short)uVar37) - 1;
  if ((POPCOUNT(uVar30 & 0xff) & 1U) != 0) {
    uVar42 = CONCAT22((short)(uVar42 >> 0x10),(short)uVar37);
  }
  uVar21 = uVar21 | 1 << (uVar26 >> 1 & 0xf);
  bVar20 = ((byte)uVar30 & 0x1f) % 0x11;
  uVar21 = uVar21 << bVar20 |
           (ushort)(CONCAT12((CONCAT22((short)(uVar38 >> 0x10),uVar30) >> (uVar21 & 0x1f) & 1) != 0,
                             uVar21) >> 0x11 - bVar20);
  uVar21 = uVar21 >> 0xd | uVar21 << 3;
  iVar32 = 0x1f;
  if (uVar42 != 0) {
    for (; uVar42 >> iVar32 == 0; iVar32 = iVar32 + -1) {
    }
  }
  uVar39 = CONCAT22(uVar24,(ushort)uVar12 + 0xba01) >> 5;
  uVar43 = uVar39 | uVar42 << 0x1b;
  uVar38 = iVar32 * 2 + uVar42 + (uint)(iVar32 < 0);
  cVar8 = (char)uVar42;
  bVar20 = cVar8 + (char)(uVar42 >> 8);
  uVar45 = uVar43;
  if ((POPCOUNT(bVar20 | 0x4d) & 1U) != 0) {
    uVar45 = uVar38;
  }
  uVar25 = CONCAT11(cVar8 + -0x10,bVar20);
  bVar47 = (SBORROW1(cVar8,'\x0f') != SBORROW1(cVar8 + -0xf,'\x01')) != (short)(uVar25 | 0x4d) < 0;
  uVar42 = (int)(CONCAT22((short)(uVar42 >> 0x10),uVar25) | 0x4d) >> bVar47;
  uVar37 = (uint)(ushort)(((ushort)CONCAT31((int3)(CONCAT22(uVar27,uVar21) >> 8),(char)uVar21 << 1)
                          | 1) & ~(1 << ((uVar30 * 2 | (ushort)(uVar37 >> 0x1f)) -
                                         (ushort)(byte)uVar37 & 0xf)));
  iVar32 = uVar37 * 0xfdde;
  uVar12 = CONCAT31((int3)(uVar38 >> 8),bVar47 + 'B') >> 1 |
           (uint)((uVar12 & 0x4000000) != 0) << 0x1f;
  uVar38 = CONCAT22((short)(uVar43 >> 0x10),(short)uVar39 >> 7);
  cVar8 = (char)(uVar42 >> 8);
  uVar39 = uVar12 ^ 1 << (uVar45 & 0x1f);
  bVar15 = (byte)uVar39;
  bVar20 = (bVar15 & 0x1f) % 9;
  uVar35 = (undefined2)(uVar42 >> 0x10);
  uVar43 = uVar38 >> (bVar15 & 0x1f) | uVar38 << 0x20 - (bVar15 & 0x1f);
  uVar38 = uVar42 >> (bVar15 & 0x1f) | uVar42 << 0x20 - (bVar15 & 0x1f);
  iVar33 = CONCAT22(uVar27,(short)((uint)iVar32 >> 0x10)) +
           CONCAT31((int3)(uVar37 * -0x22000000 >> 8),cVar8);
  uVar36 = (short)uVar38 >> 1;
  uVar31 = CONCAT11((byte)(CONCAT11((uVar12 >> (uVar45 & 0x1f) & 1) != 0,cVar8) >> bVar20) |
                    cVar8 << 9 - bVar20,(char)uVar42) + 1;
  uVar12 = CONCAT22((short)(uVar39 >> 0x10),CONCAT11((char)(uVar39 >> 8) + '!',bVar15)) * 2;
  bVar20 = (byte)uVar12;
  iVar13 = (CONCAT22(uVar27,CONCAT11(((short)uVar31 < 0) << 7 | (uVar31 == 0) << 6 | bVar46 << 4 |
                                     ((POPCOUNT(uVar31 & 0xff) & 1U) == 0) << 2 | 2U |
                                     (byte)iVar33 & 1,(char)((uint)iVar32 >> 0x10))) <<
            (bVar20 & 0x1f) | uVar12 >> 0x20 - (bVar20 & 0x1f)) + 0xdac8a889;
  iVar32 = (int)(short)iVar13 * (int)(short)uVar12;
  uVar11 = (ushort)uVar43;
  uVar1 = (ulonglong)(CONCAT22((short)(uVar38 >> 0x10),uVar36) | 0xc0000000);
  uVar2 = CONCAT44(CONCAT22((short)((uint)iVar33 >> 0x10),(short)((uint)iVar32 >> 0x10) + uVar11),
                   CONCAT22((short)((uint)iVar13 >> 0x10),
                            (short)((ushort)iVar32 >> 1) >> (bVar20 & 0x1f))) & 0x3fffffffffffffff;
  uVar3 = uVar2 / uVar1;
  uVar18 = (undefined2)(uVar3 >> 0x10);
  sVar40 = (ushort)(byte)uVar3 * (ushort)(byte)(uVar3 >> 8);
  bVar15 = (byte)(uVar2 % uVar1);
  bVar48 = (uVar45 & 1) != 0;
  cVar8 = (bVar15 + 0x57) - bVar48;
  bVar47 = cVar8 >= '\0';
  uVar12 = CONCAT22((short)(uVar12 >> 0x10),CONCAT11((char)(uVar12 >> 8) + '\x17',bVar20)) +
           CONCAT22(uVar18,CONCAT11((cVar8 < '\0') << 7 | (cVar8 == '\0') << 6 | bVar46 << 4 |
                                    ((POPCOUNT(cVar8) & 1U) == 0) << 2 | 2U |
                                    (bVar15 < 0xa9 || (byte)(bVar15 + 0x57) < bVar48),cVar8));
  bVar20 = (byte)uVar12;
  bVar28 = bVar15 - bVar47 ^ (byte)(1 << (uVar43 >> (bVar20 & 0x1f) & 0x1f));
  uVar12 = uVar12 >> (bVar20 & 0x1f);
  uVar25 = (ushort)(uVar12 >> 0x10);
  bVar15 = (byte)uVar12;
  uVar39 = ((uVar45 & 0xffff) >> 1 | (uint)bVar48 << 0x1f) >> (bVar15 & 0x1f);
  bVar20 = (bVar15 & 0x1f) % 9;
  bVar29 = (byte)((char)bVar28 >> 7) >> 1;
  cVar9 = (char)((ushort)(short)(char)bVar28 >> 1);
  iVar32 = (CONCAT22(uVar25,CONCAT11((char)(uVar12 >> 8) * '\x02' + cVar9,bVar15)) ^ 0x400) << 1;
  uVar21 = (ushort)iVar32;
  uVar12 = CONCAT22(uVar18,(short)uVar39) & 0xffff3fff;
  uVar30 = (ushort)(byte)(bVar28 + 0xb4 | 0xc0);
  uVar26 = (ushort)uVar12;
  uVar24 = (undefined2)((uint)iVar32 >> 0x10);
  uVar30 = CONCAT11((char)(uVar26 % uVar30),(char)(uVar26 / uVar30)) ^ (uVar21 | 1) ^ 0x10;
  cVar8 = (char)(uVar30 >> 8) + 'R';
  uVar12 = CONCAT22((short)(uVar12 >> 0x10),CONCAT11(cVar8,(char)uVar30));
  uVar37 = ~(CONCAT22(uVar35,CONCAT11((byte)(CONCAT11(((short)(char)bVar28 & 1U) != 0,bVar29) >>
                                            bVar20) | bVar29 << 9 - bVar20,cVar9)) >> 1 |
            (uint)((uVar21 >> 4 & 1) != 0) << 0x1f);
  uVar26 = (ushort)(cVar8 == '\0');
  uVar21 = (ushort)((uint)(CONCAT22((short)(uVar39 >> 0x10),(ushort)uVar37 * -0x7557) << 1) >> 0x10)
  ;
  uVar39 = uVar37 & uVar12;
  iVar32 = uVar12 + 0xa52da711;
  uVar30 = (ushort)iVar32;
  cVar8 = (char)((ushort)uVar37 >> 1);
  bVar20 = (byte)(uVar37 >> 8) >> 1;
  iVar33 = (uVar39 ^ 0xd492) << 5;
  uVar41 = (ushort)(uVar39 >> 0x1b) | (ushort)iVar33;
  sVar10 = (ushort)(uVar30 == uVar26) * (uVar26 ^ CONCAT11(bVar20,cVar8));
  uVar18 = (undefined2)((uint)iVar32 >> 0x10);
  bVar28 = (byte)((ushort)sVar10 >> 8);
  uVar12 = CONCAT31((int3)(CONCAT22(uVar24,CONCAT11(bVar28 + cVar8,0x2e)) >> 8),0x2e) & 0xffffff0f;
  sVar19 = (sbyte)uVar12;
  uVar31 = (ushort)((uint)(CONCAT22((ushort)(((uint)(ushort)(uVar36 ^ (ushort)(CONCAT11((char)((
                                                  ushort)sVar40 >> 8) * '\x02' + '\x01',(char)sVar40
                                                  ) == uVar36) * (uVar36 ^ uVar11)) << 0x16) >> 0x10
                                            ) | uVar25 >> 10,
                                    (short)CONCAT31((int3)(CONCAT22(uVar35,uVar31) >> 8),bVar47) +
                                    0x849) << 1) >> 0xf);
  uVar26 = 0x2e45 << sVar19 | uVar31 >> 0x10 - sVar19;
  bVar15 = sVar19 + 0xa4;
  sVar40 = (short)((uint)iVar33 >> 0x10);
  cVar8 = (char)(uVar12 >> 8) >> 0x1e;
  uVar25 = CONCAT11(cVar8,bVar15);
  uVar14 = CONCAT22((short)(uVar12 >> 0x10),uVar25);
  bVar46 = (uVar25 & 0xf2d4) != 0 && -1 < cVar8;
  uVar31 = ~(uVar31 >> sVar19 | uVar26 << 0x10 - sVar19);
  uVar12 = CONCAT31(CONCAT21(uVar18,'\0' < (char)(bVar28 | 0x88)),
                    bVar46 >> (bVar15 & 7) | bVar46 << 8 - (bVar15 & 7));
  uVar12 = CONCAT22(uVar18,(short)(((uint)((uVar26 | 0x5d76) & 0x3fff) << 0x10 |
                                   uVar12 & 0xffff | 0xc000) / (uVar12 & 0xffff | 0xc000))) |
           0x1b3d0000;
  lVar4 = (ulonglong)uVar12 * (ulonglong)uVar12;
  uVar12 = CONCAT31((int3)((uint)uVar14 >> 8),bVar15) & 0xffffff0f;
  sVar19 = (sbyte)uVar12;
  uVar12 = CONCAT22((short)(uVar12 >> 0x10),(short)((uint)uVar14 >> 8) << 8) & 0xffff9778;
  uVar25 = uVar41 << (bVar15 & 0xf) | uVar41 >> 0x10 - (bVar15 & 0xf);
  if (-1 < (char)(uVar12 >> 8)) {
    uVar25 = uVar31;
  }
  uVar26 = (ushort)(((uint)((ushort)(CONCAT11(bVar20,bVar28) | 0x88) >> 2) << 0x12) >> 0x10) |
           0x33a8;
  uVar39 = CONCAT22((short)((ulonglong)lVar4 >> 0x30),
                    CONCAT11((char)((ulonglong)lVar4 >> 0x28) +
                             (((byte)((ushort)(0 << sVar19) >> 8) |
                              (byte)((uVar31 >> 0x10 - sVar19) >> 8)) & 1) + -0x29,
                             (char)((ulonglong)lVar4 >> 0x20))) ^ 0xaf;
  uVar31 = (ushort)(((uint)uVar31 ^
                    CONCAT22(uVar21,uVar30 + (short)CONCAT31((int3)(CONCAT22(uVar24,sVar10) >> 8),
                                                             0x2e) + -0x7a30)) << 1) ^ 0xd7da;
  uVar42 = uVar39 & 0xfffff7ff;
  iVar32 = (uint)uVar21 * 0x30000 + -0x76b27e43;
  cVar8 = (char)((uint)iVar32 >> 8);
  uVar30 = ((ushort)uVar42 | 0x783e) ^ 0x5ac;
  uVar21 = uVar30 << 1 | (ushort)((short)uVar30 < 0);
  sVar10 = CONCAT11(cVar8 << 1 | cVar8 < '\0',(char)iVar32) + uVar21;
  uVar37 = CONCAT31((int3)(CONCAT22((short)((uint)iVar32 >> 0x10),sVar10) >> 8),(char)sVar10);
  uVar30 = 0x100;
  if ((uVar26 & 0x6a8) == 0) {
    uVar31 = (ushort)uVar39 & 0xf7ff;
  }
  uVar39 = uVar37 >> 7;
  sVar10 = (short)(CONCAT22(sVar40,uVar25) >> 1);
  uVar36 = sVar40 >> 1;
  uVar25 = -sVar10;
  if (sVar10 != 0) {
    uVar30 = (ushort)uVar39;
  }
  iVar32 = CONCAT22((short)(((uVar26 & 0x6a8) << 0x11) >> 0x10),uVar30 >> 2) -
           (uVar37 << 0x19 | uVar39);
  cVar8 = (char)uVar39;
  bVar46 = (uVar36 & 4) != 0;
  uVar11 = (ushort)cVar8;
  uVar12 = CONCAT22((short)(uVar12 >> 0x10),CONCAT11(-1 - bVar46,bVar46)) & 0xa705efc7;
  sVar10 = (short)uVar12;
  uVar26 = sVar10 * 2;
  uVar30 = uVar21 + 0xc68c;
  uVar25 = (short)cVar8 ^
           (ushort)(uVar11 != uVar25) *
           ((short)cVar8 ^ uVar25 ^ (ushort)(uVar11 == uVar25) * (uVar25 ^ uVar11));
  if (0x3973 < uVar21) {
    uVar25 = uVar30;
  }
  if (uVar30 != 0) {
    uVar25 = uVar26;
  }
  uVar21 = (ushort)((uint)((int)(short)((uVar25 & 0xff) * (ushort)(byte)iVar32) *
                          (int)(short)~uVar31) >> 0x10);
  bVar20 = (byte)uVar26;
  uVar16 = (uint3)(CONCAT22((short)(uVar12 >> 0x10),uVar26) >> 8);
  iVar33 = ((CONCAT22((short)(uVar42 >> 0x10),uVar21) | 0x9505) ^ 0x5728) * 2;
  uVar25 = ((uVar21 | 0x9505) + sVar10 * 4) * (short)iVar33;
  iVar13 = CONCAT22(cVar8 >> 7,uVar25);
  sVar40 = (CONCAT11(((char)(CONCAT11((byte)uVar42 < 0x4a,(char)((uint)iVar32 >> 8)) >> 2) + '%') -
                     bVar46,(byte)iVar32) | 0x2000) * 2;
  uVar31 = (~uVar31 | uVar25) + 0xda5e;
  uVar21 = (ushort)((byte)(uVar26 >> 8) < 0x4d);
  sVar10 = sVar40 + uVar31;
  sVar22 = sVar10 + uVar21;
  uVar14 = CONCAT22((short)((uint)iVar33 >> 0x10),(short)uVar25 >> 0xf);
  if (sVar22 != 0 && (SCARRY2(sVar40,uVar31) != SCARRY2(sVar10,uVar21)) == sVar22 < 0) {
    uVar14 = CONCAT31(uVar16,(char)(bVar20 >> bVar20 | bVar20 << 8 - bVar20) >> 1);
  }
  uVar12 = ((uint)uVar16 << 8) >> 1;
  bVar28 = (byte)(uVar12 >> 8);
  sVar10 = (short)uVar14 + uVar30;
  uVar39 = CONCAT31((int3)(CONCAT22((short)((uint)iVar32 >> 0x10),sVar22) >> 8),(char)sVar22) &
           0xffffff30;
  uVar37 = CONCAT22(uVar36,(short)(char)uVar25) ^ 0x40000;
  bVar15 = bVar28 >> 1;
  bVar20 = bVar15 & 0x1f;
  uVar42 = iVar13 << bVar20 | (uint)(CONCAT14((uVar12 & 0x100) != 0,iVar13) >> 0x21 - bVar20);
  uVar12 = CONCAT22(0x61a,(short)uVar14 << (bVar28 & 0x1f)) + 0xc09dc2f3;
  uVar18 = (undefined2)(uVar39 >> 0x10);
  sVar40 = (short)CONCAT31((int3)(uVar39 >> 8),(char)uVar39 * -2) + 1;
  uVar39 = (ushort)((ushort)bVar15 | sVar10 * -0x8000) ^ uVar42;
  if (uVar39 == 0) {
    uVar39 = uVar12;
  }
  uVar43 = uVar37 << 1 | (uint)((short)(uVar36 ^ 4) < 0);
  bVar20 = (byte)((int)uVar42 >> 0x1f);
  bVar28 = (byte)((ushort)sVar40 >> 8);
  bVar15 = (byte)sVar40;
  bVar29 = bVar28 ^ (bVar20 == bVar28) * (bVar28 ^ bVar15);
  uVar42 = CONCAT31((int3)(short)((int)uVar42 >> 0x19) >> 0xf,
                    bVar20 ^ (bVar20 != bVar28) * (bVar20 ^ bVar29));
  sVar19 = (sbyte)(uVar39 & 0xffffff0f);
  uVar45 = uVar42 >> sVar19;
  uVar30 = CONCAT11(bVar29,bVar15) << 1 | (ushort)(((uVar31 >> 0xc & 0x1fffe) << 0xf) >> 1) >> 0xf;
  uVar38 = uVar39 & 0xffffff0f | 0xc0000000;
  uVar1 = CONCAT44(-CONCAT22((short)((uint)uVar14 >> 0x10),CONCAT11(1,(char)sVar10)),
                   CONCAT22((short)(uVar45 >> 0x10),(short)(char)uVar45)) & 0x3fffffffffffffff;
  uVar2 = uVar1 % (ulonglong)uVar38;
  sVar40 = (short)uVar43;
  sVar10 = sVar40 + 0x7e66;
  sVar40 = sVar40 >> 0xf;
  bVar46 = (uVar2 & 0xad48) != 0;
  uVar39 = (uint)(uVar1 / uVar38);
  if (bVar46) {
    uVar39 = uVar43;
  }
  iVar32 = 0x1f;
  if ((uint)uVar2 != 0) {
    for (; (uint)uVar2 >> iVar32 == 0; iVar32 = iVar32 + -1) {
    }
  }
  uVar45 = CONCAT31((int3)(uVar38 >> 8),sVar19);
  uVar21 = ((ushort)((short)CONCAT31((int3)(CONCAT22(uVar18,uVar30 >> sVar19 |
                                                            uVar30 << 0x10 - sVar19) >> 8),bVar46)
                    << sVar19) >> sVar19 |
           ((ushort)uVar12 >> sVar19 | (short)uVar42 << 0x10 - sVar19) << 0x10 - sVar19) << sVar19 |
           (ushort)uVar2 >> 0x10 - sVar19;
  bVar20 = (byte)uVar21 | (byte)uVar2;
  uVar12 = uVar45 ^ 1 << (bVar20 & 0x1f);
  uVar42 = CONCAT31((int3)(CONCAT22(uVar18,uVar21) >> 8),bVar20) + 0x3a334572;
  uVar30 = (ushort)((uVar12 & 1) != 0);
  sVar22 = (short)iVar32 + -0x705a;
  sVar44 = sVar22 - uVar30;
  uVar12 = CONCAT31((int3)(uVar12 >> 8),(byte)uVar12 >> 1) & 0xffff00ff | 0x80;
  if (sVar44 == 0 || (SBORROW2((short)iVar32,0x705a) != SBORROW2(sVar22,uVar30)) != sVar44 < 0) {
    uVar12 = uVar42;
  }
  bVar20 = (byte)uVar12;
  uVar42 = uVar42 | 0xc0000000;
  uVar39 = (uint)((CONCAT44(CONCAT31(0x70180d,bVar20 ^ 0x4e),
                            CONCAT22((short)(uVar39 >> 0x10),(ushort)(byte)uVar39 * (uVar21 >> 8)))
                  & 0x3fffffffffffffff) / (ulonglong)uVar42);
  sVar44 = sVar44 >> (bVar20 & 0x1f);
  uVar37 = (int)(uVar37 & 0x7fffffff | uVar45 << 0x1f) >> (bVar20 & 0x1f);
  uVar18 = (undefined2)(uVar12 >> 0x10);
  if (uVar39 != uVar37) {
    uVar39 = uVar37;
  }
  uVar45 = CONCAT22(uVar18,(sVar44 - sVar10) + -1);
  lVar4 = (ulonglong)uVar39 * (ulonglong)uVar45;
  uVar30 = (short)uVar39 + 0xac64;
  uVar12 = (uint)lVar4 ^ 0x3169;
  uVar37 = CONCAT22((short)((ulonglong)lVar4 >> 0x10),
                    (short)CONCAT31((int3)(uVar12 >> 8),(char)sVar10) >> 1);
  cVar8 = (char)uVar12 + -0x55;
  uVar12 = (uint)((ulonglong)lVar4 >> 0x20);
  if (cVar8 < '\0') {
    uVar12 = uVar37;
  }
  uVar21 = sVar44 << 1;
  uVar39 = CONCAT22((short)((uint)iVar32 >> 0x10),uVar21) | 1;
  iVar32 = uVar37 - uVar39;
  uVar26 = (ushort)CONCAT31((int3)(CONCAT22(sVar40,sVar10) >> 8),cVar8);
  uVar25 = (uVar30 - ((short)(char)(uVar42 >> 0x18) >> 7)) + 1;
  if (iVar32 == 0 || (SBORROW4(uVar37,uVar39) != false) != iVar32 < 0) {
    uVar25 = uVar26;
  }
  sVar22 = ((ushort)CONCAT31((int3)(uVar45 >> 8),(POPCOUNT(uVar25 & uVar30 & 0xff) & 1U) == 0) |
           0x1662) * 0x35b7;
  sVar10 = uVar26 << 1;
  bVar20 = (byte)((ushort)sVar22 >> 8);
  bVar15 = bVar20 >> 4 | bVar20 << 4;
  bVar20 = (byte)((ushort)sVar10 >> 8);
  uVar45 = ~CONCAT22(sVar40,sVar10);
  cVar9 = (char)(iVar32 >> 0x14);
  cVar8 = cVar9 - ((char)bVar15 >> 7);
  uVar39 = CONCAT22(uVar18,CONCAT11(cVar9,(char)(CONCAT11(bVar15,(char)sVar22) >> 7)));
  uVar37 = CONCAT31((int3)(iVar32 >> 0x1c),cVar8);
  bVar46 = -1 < (char)(iVar32 >> 0x1c);
  uVar16 = (uint3)((uVar45 << 1) >> 8);
  uVar38 = CONCAT31(uVar16,CARRY4(uVar39,uVar12));
  bVar15 = ~(byte)(uVar39 + uVar12);
  uVar42 = CONCAT31((int3)(uVar39 + uVar12 >> 8),bVar15);
  uVar43 = uVar45 * -0x732ebb40 + (uint)CONCAT11(bVar20,bVar46) + 1;
  cVar8 = (char)(uVar38 >> 6) - cVar8;
  iVar32 = (uVar43 + uVar39) * 2;
  uVar45 = (uVar39 << (bVar15 & 0x1f) | uVar39 >> 0x20 - (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
  uVar12 = uVar45;
  if (uVar37 != uVar42) {
    uVar37 = uVar42;
    uVar12 = uVar42;
  }
  iVar32 = CONCAT22((short)((uint)iVar32 >> 0x10),-((ushort)iVar32 | (ushort)CARRY4(uVar43,uVar39)))
           * 0xe232240;
  bVar29 = ((char)uVar37 << 1 | (uVar21 & 0x1000) != 0) * (char)(uVar37 >> 8);
  sVar10 = ((short)iVar32 - CONCAT11(bVar20,(bVar46 + 'F') - (cVar8 < '\0'))) + -1;
  uVar30 = (ushort)(uVar12 ^ 0x4684) >> 4;
  uVar21 = uVar30 | sVar10 * 0x1000;
  bVar28 = (byte)uVar30;
  uVar43 = CONCAT22((short)((uint)iVar32 >> 0x10),sVar10) * -0x80;
  bVar28 = bVar28 << (bVar28 & 0x1f);
  uVar42 = CONCAT22((short)((uVar45 | 0xc0000000) >> 0x10),(short)uVar45) ^ 0xbd71;
  bVar15 = (bVar28 & 0x1f) % 9;
  uVar39 = (uint)(byte)((byte)~bVar20 >> bVar15 | ~bVar20 << 9 - bVar15) << 8 | 0xc000;
  uVar12 = (int)((CONCAT44(CONCAT31(uVar16 >> 6 | (uint3)((uVar38 << 0x1a) >> 8),cVar8 * '\x02') >>
                           ((byte)(uVar12 ^ 0x4684) & 0x1f),
                           CONCAT22((short)(uVar37 >> 0x10),CONCAT11((char)(uVar21 >> 8),bVar29))) &
                 0x3fffffffffffffff) / (ulonglong)(uVar45 | 0xc0000000)) *
           (CONCAT22((short)(uVar12 >> 0x10),uVar21) & 0xffff00ff) & 0xffff3fff;
  uVar30 = (ushort)(byte)(uVar39 >> 8);
  uVar21 = (ushort)uVar12;
  bVar20 = (byte)(uVar21 / uVar30);
  uVar18 = (undefined2)(uVar12 >> 0x10);
  uVar14 = CONCAT22(uVar18,CONCAT11((char)(uVar21 % uVar30),bVar20));
  uVar30 = (ushort)uVar39 >> 0xf;
  uVar21 = (ushort)bVar29 << 1;
  uVar25 = uVar30 | uVar21;
  uVar17 = (undefined3)((uint)uVar14 >> 8);
  bVar20 = bVar20 >> (bVar28 & 0x1f);
  uVar12 = CONCAT31(uVar17,bVar20) & 0xffff;
  uVar26 = (ushort)bVar29 | 1 << (uVar30 | uVar21 & 0xf);
  uVar45 = CONCAT22((ushort)(uVar43 >> 0x11),(ushort)(uVar43 >> 1) >> 1) >> ((byte)uVar12 & 0x1f);
  uVar12 = (uint)(ushort)((ushort)uVar12 | 0xc000);
  uVar37 = (uint)((ushort)((uint)uVar14 >> 8) & 0xff) << 0x10 |
           CONCAT31(uVar17,bVar20 << 4 | bVar20 >> 4) & 0xffff;
  uVar39 = uVar37 % uVar12;
  bVar15 = (byte)uVar39;
  bVar20 = bVar15 & 0x1f;
  iVar32 = (uint)uVar25 << 0x20 - bVar20;
  uVar21 = uVar25 >> bVar20 | (ushort)iVar32;
  iVar33 = CONCAT22((short)(uVar45 >> 0x10),(ushort)uVar45 & (ushort)uVar42 & uVar26);
  uVar30 = (short)(uVar37 / uVar12) + (ushort)(bVar15 >> 1) + 1;
  bVar20 = (char)uVar30 + 1;
  sVar40 = -uVar21;
  sVar10 = CONCAT11((char)(uVar39 >> 8) + '.',(char)bVar20 < '\0');
  if (uVar21 == 0 && sVar40 != 0) {
    sVar10 = sVar40;
  }
  uVar12 = CONCAT22(uVar18,sVar10);
  iVar13 = uVar12 + 0xbae8caed;
  uVar6 = CONCAT14(0x45173512 < uVar12,iVar33) >> 2;
  uVar31 = (ushort)(uVar6 >> 0x10) | (ushort)((uint)(iVar33 << 0x1f) >> 0x10);
  uVar25 = (ushort)iVar13 ^ 0xc5;
  iVar32 = CONCAT22((short)((uint)iVar32 >> 0x10),sVar40) + -0x4afa933f;
  sVar10 = (short)uVar6;
  uVar21 = (ushort)(uVar25 == 0) * sVar10;
  uVar18 = (undefined2)(((uVar30 & 0xffff00ff) << 0x16) >> 0x10);
  uVar39 = CONCAT22((short)((uint)iVar13 >> 0x10),uVar25 ^ (ushort)(uVar25 != 0) * (uVar25 ^ uVar21)
                   );
  uVar17 = (undefined3)((uint)iVar32 >> 8);
  uVar37 = CONCAT31(uVar17,(char)iVar32 + -0x58);
  uVar12 = uVar39;
  if (uVar39 != uVar42) {
    uVar12 = uVar42;
    uVar37 = uVar42;
  }
  uVar45 = CONCAT31(uVar17,(int)uVar39 < (int)uVar42);
  bVar20 = bVar20 & 0x1f;
  uVar39 = (uint)(CONCAT14(uVar39 < uVar42,uVar12) >> bVar20) | uVar12 << 0x21 - bVar20;
  uVar1 = (ulonglong)(uVar37 < 0x2f5d476b) << 0x20 | (ulonglong)uVar26;
  bVar15 = (byte)(uVar45 * 0x91791be);
  uVar38 = CONCAT22(uVar31,sVar10 + 0x527a);
  bVar20 = (byte)uVar39 >> (bVar15 & 0x1f);
  uVar30 = (short)CONCAT31((int3)(CONCAT22(uVar18,uVar21) >> 8),
                           (char)uVar21 << 1 | (char)uVar21 < '\0') + 0xa343;
  uVar42 = CONCAT22(uVar18,uVar30);
  uVar12 = uVar45 | 0xec85aedd;
  if ((POPCOUNT(uVar30 & 0xff) & 1U) == 0) {
    uVar12 = ((uint)(uVar1 << 0x15) | (uint)(uVar1 >> 0xc)) << (bVar15 & 0x1f) |
             uVar45 >> 0x20 - (bVar15 & 0x1f);
  }
  uVar30 = (ushort)((((CONCAT22((short)(uVar37 + 0xd0a2b895 >> 0x10),
                                (ushort)(uVar37 + 0xd0a2b895) >> 1) | 0x8000) ^ 0x800) << 7) >> 0x10
                   );
  uVar37 = CONCAT22((short)(uVar39 >> 0x10),(short)(char)bVar20);
  if (SCARRY4(uVar37,uVar42) != (int)(uVar37 + uVar42) < 0) {
    uVar12 = uVar38;
  }
  uVar37 = (uint)CARRY4(uVar37,uVar42) << 0x10 | uVar37 + uVar42 & 0xffff;
  iVar32 = uVar37 << 6;
  bVar29 = (byte)((uint)iVar32 >> 8);
  bVar28 = ((byte)iVar32 | (byte)(uVar37 >> 0xb)) ^ bVar29;
  uVar37 = (uint)CONCAT11(bVar29,bVar28);
  if (-1 < (char)bVar28) {
    uVar37 = uVar12;
  }
  if ((POPCOUNT(bVar28) & 1U) != 0) {
    uVar38 = CONCAT22(uVar31,(ushort)bVar15);
  }
  bVar23 = (byte)(uVar12 >> 8) | 0xc0;
  uVar21 = (ushort)uVar37 & 0x3fff;
  cVar8 = (char)(uVar21 / bVar23);
  bVar28 = (byte)(uVar21 % (ushort)bVar23);
  bVar29 = (char)bVar20 >> 7 ^ bVar28;
  iVar33 = CONCAT22((short)(uVar38 >> 0x10),((ushort)uVar38 >> 1) * 0x319a);
  iVar32 = CONCAT22((short)(uVar45 * 0x91791be >> 0x10),(ushort)bVar15) + (uint)uVar30 * 0x10000 +
           (uint)((uVar12 & 1) != 0);
  uVar6 = CONCAT14(CARRY1(bVar29,bVar29) || 0xfe < (byte)(bVar29 * '\x02'),
                   CONCAT22((short)(uVar12 >> 0x10),CONCAT11(bVar23 << 1,(char)uVar12))) | 0x101;
  uVar7 = uVar6 >> 7;
  uVar37 = (int)uVar6 << 0x1a | (uint)uVar7;
  sVar10 = (short)uVar7 + -0x3d1b;
  bVar15 = (byte)iVar32 & 0x1f;
  bVar29 = (byte)sVar10;
  uVar42 = ((uint)((ushort)((char)bVar20 * 2) >> bVar15) | iVar33 << 0x20 - bVar15) ^ 0x9150f858;
  uVar45 = CONCAT22((short)((uint)(iVar33 << 0x1d) >> 0x10),1);
  uVar21 = (ushort)CONCAT31((int3)(char)bVar28,~bVar29);
  uVar39 = CONCAT31((int3)(CONCAT22((short)(uVar37 >> 0x10),sVar10) >> 8),bVar29 + cVar8) << 1 |
           (uint)((int)uVar37 < 0);
  uVar12 = CONCAT22((char)bVar28 >> 7,uVar21) & 0xfffff4dd;
  return CONCAT22((short)(uVar12 >> 0x10),(short)(char)uVar12) + uVar39 +
         CONCAT22((short)((uint)(((int)CONCAT11(bVar28,cVar8) >> 0x1f) << 0x12) >> 0x10),
                  uVar21 >> 0xf) +
         (CONCAT31((int3)((uint)iVar32 >> 8),(int)uVar37 < 0 == (int)uVar39 < 0) & 0xbda1e2ff) +
         ((uint)uVar30 << 0x10 | 0x8000000) +
         (CONCAT22((short)(uVar42 >> 0x10),(short)uVar42 + -0x27cf) >> 1) +
         (uVar45 >> 9 | uVar45 << 0x17) + -0x6c89ade5;
}



// WARNING: Removing unreachable block (ram,0x0804e7b5)
// WARNING: Removing unreachable block (ram,0x0804e766)
// WARNING: Removing unreachable block (ram,0x0804f2a7)
// WARNING: Removing unreachable block (ram,0x0804e788)
// WARNING: Removing unreachable block (ram,0x0804e7cf)
// WARNING: Removing unreachable block (ram,0x0804e843)
// WARNING: Removing unreachable block (ram,0x0804e89a)
// WARNING: Removing unreachable block (ram,0x0804e8e4)
// WARNING: Removing unreachable block (ram,0x0804e9f2)
// WARNING: Removing unreachable block (ram,0x0804e9e9)
// WARNING: Removing unreachable block (ram,0x0804e9f7)
// WARNING: Removing unreachable block (ram,0x0804ea84)
// WARNING: Removing unreachable block (ram,0x0804ea88)
// WARNING: Removing unreachable block (ram,0x0804eac4)
// WARNING: Removing unreachable block (ram,0x0804eb01)
// WARNING: Removing unreachable block (ram,0x0804eb0f)
// WARNING: Removing unreachable block (ram,0x0804eb73)
// WARNING: Removing unreachable block (ram,0x0804ec46)
// WARNING: Removing unreachable block (ram,0x0804ec7a)
// WARNING: Removing unreachable block (ram,0x0804ed70)
// WARNING: Removing unreachable block (ram,0x0804edeb)
// WARNING: Removing unreachable block (ram,0x0804ee81)
// WARNING: Removing unreachable block (ram,0x0804eee9)
// WARNING: Removing unreachable block (ram,0x0804eeec)
// WARNING: Removing unreachable block (ram,0x0804ef20)
// WARNING: Removing unreachable block (ram,0x0804ef26)
// WARNING: Removing unreachable block (ram,0x0804f00d)
// WARNING: Removing unreachable block (ram,0x0804f0ff)
// WARNING: Removing unreachable block (ram,0x0804f2fb)
// WARNING: Removing unreachable block (ram,0x0804f2ff)
// WARNING: Removing unreachable block (ram,0x0804f2c3)

undefined4 log_size_10_var_007(void)

{
  return 0x49a841ff;
}



// WARNING: Removing unreachable block (ram,0x0804f903)
// WARNING: Removing unreachable block (ram,0x0804f5e8)
// WARNING: Removing unreachable block (ram,0x0804f4a7)
// WARNING: Removing unreachable block (ram,0x0804f488)
// WARNING: Removing unreachable block (ram,0x0804f39c)
// WARNING: Removing unreachable block (ram,0x0804f3ca)
// WARNING: Removing unreachable block (ram,0x0804fdd9)
// WARNING: Removing unreachable block (ram,0x0804f38c)
// WARNING: Removing unreachable block (ram,0x0804fb4b)
// WARNING: Removing unreachable block (ram,0x0804f445)
// WARNING: Removing unreachable block (ram,0x0804f4e1)
// WARNING: Removing unreachable block (ram,0x0804f57b)
// WARNING: Removing unreachable block (ram,0x0804f593)
// WARNING: Removing unreachable block (ram,0x0804f5c9)
// WARNING: Removing unreachable block (ram,0x0804f6ef)
// WARNING: Removing unreachable block (ram,0x0804f865)
// WARNING: Removing unreachable block (ram,0x0804f819)
// WARNING: Removing unreachable block (ram,0x0804f869)
// WARNING: Removing unreachable block (ram,0x0804f9ba)
// WARNING: Removing unreachable block (ram,0x0804fa56)
// WARNING: Removing unreachable block (ram,0x0804fa31)
// WARNING: Removing unreachable block (ram,0x0804fa59)
// WARNING: Removing unreachable block (ram,0x0804fa5d)
// WARNING: Removing unreachable block (ram,0x0804fad6)
// WARNING: Removing unreachable block (ram,0x0804fb21)
// WARNING: Removing unreachable block (ram,0x0804fb76)
// WARNING: Removing unreachable block (ram,0x0804fbae)
// WARNING: Removing unreachable block (ram,0x0804fbb2)
// WARNING: Removing unreachable block (ram,0x0804fcb9)
// WARNING: Removing unreachable block (ram,0x0804fce5)
// WARNING: Removing unreachable block (ram,0x0804fd5c)

int log_size_10_var_008(void)

{
  short sVar1;
  short sVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ushort uVar6;
  byte bVar8;
  char cVar9;
  byte bVar10;
  ushort uVar11;
  uint uVar7;
  byte bVar12;
  sbyte sVar13;
  byte bVar14;
  byte bVar15;
  undefined2 uVar17;
  uint uVar16;
  byte bVar18;
  char cVar19;
  undefined3 uVar20;
  ushort uVar21;
  int iVar22;
  uint uVar23;
  ushort uVar24;
  uint uVar25;
  uint uVar26;
  bool bVar27;
  
  for (iVar22 = 0x1f; 0xc9aeff00U >> iVar22 == 0; iVar22 = iVar22 + -1) {
  }
  for (iVar22 = 0x1f; 0x380233afU >> iVar22 == 0; iVar22 = iVar22 + -1) {
  }
  for (uVar7 = 0; (0x38020000U >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
  }
  sVar1 = (short)uVar7 + 0x65b6;
  uVar17 = (undefined2)(uVar7 >> 0x10);
  uVar25 = uVar7 & 0xffff0000 | 0xc0000000;
  uVar21 = (ushort)CONCAT31((int3)(CONCAT22(uVar17,sVar1) >> 8),(char)sVar1 + '\x06');
  sVar2 = uVar21 + 0x8ae4;
  bVar12 = (byte)sVar2;
  bVar14 = (bVar12 & 0x1f) % 0x11;
  uVar16 = (uint)(0x751b < uVar21) << 0x10;
  uVar6 = (ushort)((ulonglong)
                   CONCAT24((ushort)(byte)((byte)((ushort)sVar1 >> 8) ^ 0x94) << 8,
                            (uint)(ushort)(CONCAT11((SCARRY2((short)uVar7,0x65b6) !=
                                                    SCARRY2(sVar1,0)) == sVar1 < 0,0xdb) >> 1)) /
                  (ulonglong)uVar25);
  uVar7 = CONCAT31((int3)(CONCAT22(uVar17,sVar2) >> 8),bVar12 >> 5 | bVar12 << 3) & 0xffffff0f;
  sVar13 = (sbyte)uVar7;
  uVar21 = 0U >> sVar13 | -0x25f1 << 0x10 - sVar13;
  uVar23 = CONCAT22(0x3802,uVar21);
  uVar26 = CONCAT22((short)(uVar25 >> 0x10),
                    (ushort)(uVar16 << bVar14) | (ushort)(uVar16 >> 0x11 - bVar14)) + 1;
  uVar11 = (ushort)(uVar7 >> 0x10);
  uVar7 = CONCAT22(uVar11,CONCAT11(~(byte)(uVar7 >> 8),sVar13));
  uVar11 = (ushort)(((uint)(ushort)(uVar6 << 5 | uVar6 >> 0xb) << 0x1a) >> 0x10) | uVar11 >> 6;
  uVar16 = uVar7 << sVar13 | uVar7 >> 0x20 - sVar13;
  uVar6 = ((ushort)uVar16 | 0x400) + 0x41e0;
  uVar25 = CONCAT22((short)(uVar16 >> 0x10),0x41e0) & 0xffff00ff;
  lVar5 = (longlong)
          CONCAT22(uVar11,(short)(uVar7 >> 6) *
                          (short)CONCAT31(0x98edc4,(POPCOUNT(uVar26 & 0xff) & 1U) != 0)) *
          (longlong)CONCAT22(0x5b,uVar6);
  uVar16 = (uint)lVar5 | 0xd400;
  uVar21 = uVar21 & 0xf;
  uVar24 = uVar6 & ~(1 << uVar21);
  bVar27 = (uVar6 >> uVar21 & 1) != 0;
  uVar7 = uVar16 >> 1 | (uint)bVar27 << 0x1f;
  if ((int)uVar16 < 0 != bVar27) {
    uVar7 = uVar26 ^ 0x164da44d | 0x10000000;
  }
  bVar14 = (char)uVar25 + (byte)((ulonglong)lVar5 >> 0x3d) + 1;
  if (uVar7 != uVar23) {
    uVar7 = uVar23;
  }
  uVar7 = (int)uVar7 >> (bVar14 & 0x1f);
  bVar8 = (byte)(uVar7 >> 8) >> (bVar14 & 0x1f);
  iVar22 = uVar23 * -2;
  uVar20 = (undefined3)(((uint)(uVar11 ^ 0x3802) << 0x10) >> 8);
  bVar18 = '\0' << (bVar14 & 7) | 0U >> 8 - (bVar14 & 7);
  cVar9 = bVar8 + 1;
  bVar15 = (byte)uVar24;
  bVar12 = (bVar15 & 0x1f) % 0x11;
  uVar7 = (uint)((uVar7 & 0x10) != 0) << 0x10 | 0xe005;
  bVar10 = (byte)((ushort)((short)iVar22 * -0x59a9) >> 8);
  cVar19 = bVar18 + bVar10;
  uVar7 = CONCAT22((ushort)((short)cVar9 >> 7) >> 1 |
                   (ushort)((uint)(CONCAT22(0xe05b,(ushort)(uVar7 << bVar12) |
                                                   (ushort)(uVar7 >> 0x11 - bVar12)) << 0x1f) >>
                           0x10),
                   CONCAT11(!CARRY1(bVar18,bVar10),CARRY1(bVar18,bVar10) || cVar19 == '\0'));
  if (cVar19 != '\0' && SCARRY1(bVar18,bVar10) == cVar19 < '\0') {
    uVar7 = iVar22 + 0xaf430df0U;
  }
  uVar21 = (ushort)CONCAT31(uVar20,cVar19);
  uVar16 = -(CONCAT22(uVar11,uVar21 >> (bVar15 & 0xf) | uVar21 << 0x10 - (bVar15 & 0xf)) ^
            0x38020000);
  uVar23 = iVar22 + 0xaf430df0U ^ 1 << (uVar16 & 0x1f) | 0xc0000000;
  uVar4 = (ulonglong)
          CONCAT24((short)((ushort)((short)(char)bVar8 >> 7) >> 1) >> (bVar15 & 0x1f),uVar7);
  uVar3 = uVar4 / uVar23;
  uVar4 = uVar4 % (ulonglong)uVar23;
  return (int)uVar3 + CONCAT22((short)(uVar16 >> 0x10),(ushort)uVar16 ^ 1 << (uVar24 & 0xf)) +
         CONCAT22((short)(uVar25 >> 0x10),uVar24) +
         CONCAT22((short)(uVar4 >> 0x10),(short)uVar4 << 0xe | (ushort)uVar3 >> 2) + uVar23 +
         CONCAT22(0x5b,CONCAT11((POPCOUNT(cVar9) & 1U) != 0,bVar14) * 0x30e6 | uVar24 >> 0xf) +
         iVar22 + CONCAT31(uVar20,bVar18) * 4 + 0x2689194c;
}



// WARNING: Removing unreachable block (ram,0x080507d9)
// WARNING: Removing unreachable block (ram,0x08050284)
// WARNING: Removing unreachable block (ram,0x080504a2)
// WARNING: Removing unreachable block (ram,0x0805088b)
// WARNING: Removing unreachable block (ram,0x08050043)
// WARNING: Removing unreachable block (ram,0x08050031)
// WARNING: Removing unreachable block (ram,0x0805028f)
// WARNING: Removing unreachable block (ram,0x08050080)

int log_size_10_var_009(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint5 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar10;
  byte bVar11;
  ushort uVar12;
  short sVar13;
  short sVar14;
  char cVar19;
  char cVar20;
  undefined2 uVar21;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  char cVar24;
  uint uVar22;
  int3 iVar25;
  int iVar23;
  undefined3 uVar26;
  ushort uVar27;
  int iVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  short sVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  ushort uVar38;
  uint uVar39;
  byte bVar40;
  bool bVar41;
  sbyte sVar9;
  
  for (uVar22 = 0; (0xb4a0abeeU >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
  }
  uVar34 = (uVar22 ^ 0x8000) & 0x47e69763;
  for (uVar22 = 0; (0x5287c41aU >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
  }
  uVar33 = (uVar22 >> 0x15 | 0xa7c7fd0b) + 1;
  uVar22 = 1 << (uVar33 & 0x1f) ^ 0x6698e9ae;
  uVar1 = ((ulonglong)CONCAT43(uVar22 >> 5 | uVar22 << 0x1b,0xffff00) & 0x3fffffffffffff) << 8 |
          0xc0000000;
  uVar2 = uVar1 / 0xffff0000;
  uVar1 = uVar1 % 0xffff0000;
  uVar5 = CONCAT31((int3)(uVar2 >> 8),(char)uVar2 << 2 | (byte)(CONCAT11(1,(char)uVar2) >> 7));
  uVar22 = 0x418b848;
  bVar7 = (byte)uVar1;
  bVar8 = bVar7 + 0x54;
  iVar25 = (int3)(uVar1 >> 8);
  uVar21 = (undefined2)CONCAT31(iVar25,bVar8);
  if ((char)bVar8 < '\0') {
    uVar22 = CONCAT22(0x418,uVar21);
  }
  uVar12 = CONCAT11(bVar7 - 0xb,bVar7);
  if ((byte)(bVar7 - 0xb) != '\0') {
    uVar5 = CONCAT22((short)(uVar2 >> 0x10),uVar21);
  }
  iVar28 = CONCAT22((short)(uVar33 >> 0x10),0x9c5a) << 1;
  uVar29 = (ushort)iVar28 | (ushort)(0x5e < bVar8);
  uVar27 = (ushort)uVar5;
  uVar31 = (ushort)((uint)uVar5 >> 0x10);
  uVar33 = CONCAT22(uVar31 >> 1 | (ushort)((uVar22 << 0x1f) >> 0x10),
                    (short)(char)(CONCAT22(uVar31,uVar27 ^ (ushort)(uVar27 != uVar12) *
                                                           (uVar27 ^ uVar12)) >> 1));
  bVar7 = bVar7 >> (bVar7 & 7) | bVar7 << 8 - (bVar7 & 7);
  iVar23 = CONCAT31(iVar25,bVar8) << 1;
  uVar34 = CONCAT22((short)(uVar34 >> 0x10),(short)uVar34 + -1) + uVar33 + (uint)(iVar25 < 0);
  uVar27 = (ushort)(iVar25 < 0);
  uVar31 = uVar29 + 0x465;
  uVar30 = uVar31 - uVar27;
  if ((SBORROW2(uVar29,-0x465) != SBORROW2(uVar31,uVar27)) == (short)uVar30 < 0) {
    uVar34 = CONCAT22((short)(uVar34 >> 0x10),(short)uVar22);
  }
  if (uVar29 < 0xfb9b || uVar31 < uVar27) {
    uVar22 = uVar22 & 0xffff0000;
  }
  bVar8 = (bVar7 & 0x1f) % 0x11;
  uVar16 = CONCAT31((int3)(CONCAT22(0x3a7c,uVar12) >> 8),bVar7) & 0xffff;
  uVar12 = (ushort)(uVar16 << bVar8) | (ushort)(uVar16 >> 0x11 - bVar8);
  sVar13 = uVar12 + 0x5c35;
  if (sVar13 != 0 && -0x5c36 < (short)uVar12) {
    uVar34 = CONCAT22((short)((uint)iVar28 >> 0x10),uVar30);
  }
  iVar28 = CONCAT31((int3)(CONCAT22(0x3a7c,sVar13) >> 8),0xa3ca < uVar12 && sVar13 != 0);
  uVar33 = uVar33 & 0xffffffbf;
  uVar21 = (undefined2)(uVar22 >> 0x10);
  uVar27 = (ushort)((uint)iVar23 >> 0x10);
  uVar30 = (uVar30 & 0x101e | uVar27) + 0xe737;
  uVar31 = CONCAT11((char)(uVar33 >> 8),~(byte)uVar33);
  uVar29 = uVar31 & 0xd2ff;
  uVar22 = CONCAT22((short)(uVar33 >> 0x10),uVar31) & 0xffffd2ff;
  if ((short)uVar29 < 0) {
    iVar28 = CONCAT22(0x3a7c,(short)uVar34);
  }
  uVar6 = (undefined2)(uVar22 >> 0x10);
  bVar8 = (byte)uVar22;
  uVar31 = CONCAT11((char)(uVar29 >> 8) + -0x45,bVar8);
  iVar17 = CONCAT22(uVar6,uVar31);
  iVar28 = iVar28 << 1;
  cVar20 = (char)((uint)iVar23 >> 0x10);
  uVar27 = (short)CONCAT31((int3)(CONCAT22(uVar21,uVar27) >> 8),cVar20 + '\x1a') + 0x5986U &
           ~(1 << (uVar30 & 0xf));
  iVar23 = CONCAT31((uint3)(byte)((uint)iVar23 >> 0x18) |
                    (uint3)((uint)(CONCAT22(0x3a7c,uVar12) << 0x10) >> 8),cVar20 + '\x01');
  uVar33 = CONCAT22(uVar21,uVar27) & 0xffffe0ff;
  iVar28 = CONCAT22((short)((uint)iVar28 >> 0x10),
                    CONCAT11((byte)((uint)iVar28 >> 8) >> ((byte)iVar28 & 0x1f),(byte)iVar28)) +
           -0x70be999a;
  uVar22 = iVar23 - iVar17;
  if ((SBORROW4(iVar23,iVar17) != false) != (int)uVar22 < 0) {
    uVar22 = (uint)uVar31;
  }
  uVar16 = CONCAT22(uVar6,(short)CONCAT31((int3)((uint)iVar17 >> 8),bVar8 >> 1)) ^ 0xad17;
  bVar8 = (byte)iVar28 & 0x1f;
  uVar35 = (uVar34 ^ 0xe150a974 | 2) >> bVar8 | uVar16 << 0x20 - bVar8;
  uVar12 = (ushort)uVar33 | 0xc000;
  uVar34 = uVar27 & 0xe0ff | 0xc000;
  uVar22 = (uint)((ushort)uVar22 & 0x3fff) << 0x10 | uVar16 & 0xffff;
  uVar16 = uVar22 / uVar34;
  uVar29 = uVar30 >> 8 | (ushort)(((uint)uVar30 << 0x18) >> 0x10);
  sVar13 = (short)iVar28 + 1;
  uVar12 = (ushort)(((uVar12 << 1 | uVar12 >> 0xf) + 0x79b8) - (ushort)((short)uVar12 < 0)) >> 1;
  bVar8 = (byte)((ushort)sVar13 >> 8);
  uVar27 = (uVar12 | 0x8000) >> 7;
  iVar23 = CONCAT22((short)(uVar33 >> 0x10),uVar12 << 9 | uVar27);
  uVar12 = (ushort)(uVar22 % uVar34) >> 1;
  uVar34 = (CONCAT22((short)((uint)iVar28 >> 0x10),CONCAT11(bVar8 >> 7 | bVar8 << 1,(char)sVar13)) ^
           1 << (uVar16 & 0x1f)) + iVar23 + 1;
  uVar33 = uVar34 | 0xc0;
  uVar22 = CONCAT22(uVar6,(short)uVar16) & 0xffff3fff;
  bVar8 = (byte)uVar33;
  uVar31 = (ushort)uVar22;
  bVar7 = (byte)uVar27 & (byte)uVar12;
  if (-1 < (char)bVar7) {
    uVar33 = CONCAT22((short)(uVar34 >> 0x10),
                      CONCAT11((char)(uVar31 % (ushort)bVar8),(char)(uVar31 / bVar8)) <<
                      (bVar8 & 0x1f));
  }
  uVar21 = (undefined2)(uVar33 >> 0x10);
  cVar20 = (char)uVar33;
  cVar19 = (char)(uVar33 >> 8) + -0x38;
  iVar28 = CONCAT31((int3)((uint)iVar23 >> 8),bVar7) + -0x776c53f7;
  uVar30 = CONCAT11((char)((uint)iVar28 >> 8) + -0x14,(char)iVar28) ^ (ushort)uVar35;
  uVar31 = (short)((ushort)(uVar22 >> 0x10) | 0x20) >> 1;
  uVar22 = (CONCAT22((short)(uVar35 >> 0x10),
                     (uVar12 << 0xd | (ushort)((uVar12 | uVar27 << 0xf) ^ 0x8d00) >> 3) +
                     (short)cVar19) & 0xffffff00) + 1;
  iVar23 = (int)(short)uVar31 >> 0xf;
  cVar24 = (char)((uint)iVar23 >> 8);
  iVar17 = CONCAT22(uVar29,(short)cVar24);
  sVar13 = uVar30 + 0x4852 + (ushort)(0x123c < uVar30);
  iVar28 = CONCAT22((short)((uint)iVar28 >> 0x10),sVar13);
  if (sVar13 != 0 &&
      (SCARRY2(uVar30 + 0xedc3,0x5a8f) != SCARRY2(uVar30 + 0x4852,(ushort)(0x123c < uVar30))) ==
      sVar13 < 0) {
    iVar28 = iVar17;
  }
  sVar13 = (short)CONCAT31((int3)(CONCAT22(uVar21,CONCAT11(cVar19,cVar20)) >> 8),
                           cVar20 << 1 | cVar20 < '\0') << 1;
  uVar34 = CONCAT22(uVar21,sVar13) | 1;
  uVar12 = (ushort)(((uint)uVar31 << 0x11) >> 0xe);
  uVar27 = (ushort)uVar22;
  if ((short)uVar27 < 0) {
    iVar17 = CONCAT22(uVar29,(ushort)(byte)((char)iVar23 - 0xb));
  }
  if (POPCOUNT(uVar27 & 0x89) != '\0') {
    uVar34 = CONCAT22(uVar21,(short)(char)((ushort)sVar13 >> 8));
  }
  bVar7 = (char)-((byte)(((ushort)CONCAT31((int3)((uint)iVar28 >> 8),(byte)iVar28 >> 1) >> 2) << 1)
                 | (byte)(cVar24 >> 7) >> 7) >> 1;
  bVar8 = (byte)(uVar34 >> 8);
  uVar21 = (undefined2)(uVar34 >> 0x10);
  cVar20 = bVar8 - bVar7;
  uVar22 = uVar22 & 0xffffc489;
  if (bVar7 <= bVar8 && cVar20 != '\0') {
    uVar22 = CONCAT22(uVar21,CONCAT11(cVar20,(char)uVar34));
  }
  uVar27 = uVar12 & (ushort)uVar22;
  iVar23 = (int)(short)uVar12;
  if ((POPCOUNT(uVar27 & 0xff) & 1U) != 0) {
    iVar23 = iVar17;
  }
  iVar36 = CONCAT22((short)(uVar22 >> 0x10),(short)(ushort)uVar22 >> 0x19);
  iVar18 = iVar36 << 0xc;
  iVar15 = (short)(CONCAT11((char)((uint)iVar23 >> 8),uVar27 != 0) ^ 0x556b) * -0x3b10;
  uVar4 = CONCAT14((short)iVar15 != iVar15,iVar17) >> 5;
  uVar12 = (ushort)((uint)(iVar17 << 0x1c) >> 0x10) | (ushort)(uVar4 >> 0x10);
  uVar22 = CONCAT22((short)((uint)iVar18 >> 0x10),
                    (ushort)CONCAT31((uint3)((uint)iVar18 >> 8) | 0xf,0xfe) >> 1) | 0x8000;
  uVar33 = CONCAT22(uVar12,((ushort)uVar4 >> 1) + 0xd3ba);
  iVar23 = 0;
  if (uVar22 != 0) {
    for (; (uVar22 >> iVar23 & 1) == 0; iVar23 = iVar23 + 1) {
    }
  }
  iVar17 = iVar36 + 0xfe + CONCAT22(uVar21,CONCAT11(uVar27 != 0,(char)uVar34) | (ushort)iVar17) * 4;
  bVar8 = (byte)((uint)iVar15 >> 8);
  bVar7 = (byte)(uVar33 >> 0xe);
  bVar11 = bVar8 >> 4;
  uVar22 = CONCAT31((uint3)(uVar33 >> 0x16),
                    bVar7 ^ (bVar7 == 1) * (bVar7 ^ ((char)iVar23 + '\x01') - (bVar8 >> 4))) &
           0xffffff0f;
  sVar9 = (sbyte)uVar22;
  bVar8 = (byte)((ushort)uVar22 >> sVar9) | bVar11 << 0x10 - sVar9;
  uVar29 = ~(ushort)iVar17;
  sVar13 = CONCAT11(bVar8,bVar11) + -0x4719;
  bVar7 = (byte)(uVar29 >> 8);
  uVar27 = CONCAT11(bVar7 >> 7 | bVar7 << 1,(char)uVar29 + 'C');
  iVar15 = (uint)uVar27 * -0x5361fdab;
  bVar7 = (byte)iVar15;
  uVar27 = (short)uVar27 >> (bVar7 & 0x1f);
  iVar23 = (uint)CONCAT11((char)((ushort)sVar13 >> 8) << (bVar8 & 0x1f),(char)sVar13) << 5;
  uVar31 = CONCAT11((char)((uint)iVar23 >> 8) + '\x01',(byte)((uint)iVar28 >> 0x1c) | (byte)iVar23);
  uVar37 = CONCAT22((short)((uint)iVar17 >> 0x10),uVar29) & 0xfffffdff ^ 1 << (uVar31 & 0x1f);
  uVar27 = CONCAT11((uVar27 & 0x100) != 0,(char)uVar27) << 1;
  uVar39 = ~(1 << (uVar27 & 0x1f)) & 0xe58fa5da;
  uVar35 = (((uint)uVar12 << 0x10) >> 1 | 0x80000000) >> 0x11 | uVar37 << 0xf;
  uVar21 = (undefined2)(uVar39 >> 0x10);
  uVar16 = CONCAT22((short)((uint)iVar15 >> 0x10),CONCAT11((char)(uVar27 >> 8),bVar7)) ^
           1 << (uVar37 & 0x1f);
  uVar34 = (uint)uVar31 * (uint)uVar31 >> 0x10;
  uVar33 = (uVar37 ^ 0x80) & 0xffff;
  bVar8 = (byte)uVar33;
  iVar28 = uVar34 - uVar35;
  uVar22 = uVar35;
  if (iVar28 != 0 && (SBORROW4(uVar34,uVar35) != false) == iVar28 < 0) {
    uVar22 = uVar37 ^ 0x80;
  }
  bVar7 = (byte)uVar16 & 0x1f;
  uVar34 = CONCAT31((int3)(uVar33 >> 8),bVar8 >> 1 | bVar8 << 7) << bVar7 |
           (uVar22 & 0xffff) >> 0x20 - bVar7;
  bVar7 = (byte)uVar34;
  uVar6 = (undefined2)(uVar34 >> 0x10);
  uVar12 = (ushort)CONCAT31((int3)(uVar16 >> 8),(char)(uVar34 >> 8)) >> 1;
  uVar30 = (ushort)(uVar16 >> 0x10);
  bVar11 = (byte)uVar12;
  uVar4 = CONCAT14((uVar34 & 0x100) != 0,uVar22) & 0xff0000ffff;
  uVar33 = (int)uVar4 << (bVar11 & 0x1f) | (uint)(uVar4 >> 0x21 - (bVar11 & 0x1f));
  bVar8 = (bVar11 & 0x1f) % 0x11;
  uVar22 = (uint)(uVar12 < 0xbb79) << 0x10 |
           CONCAT31((int3)(CONCAT22(uVar6,(short)(char)bVar7) >> 8),
                    bVar7 << (bVar11 & 7) | bVar7 >> 8 - (bVar11 & 7)) & 0xffff;
  uVar34 = CONCAT22(uVar6,(ushort)(uVar22 << bVar8) | (ushort)(uVar22 >> 0x11 - bVar8)) & 0xffff466a
  ;
  uVar31 = (ushort)(uVar34 >> 0x10);
  uVar22 = CONCAT22(uVar31,(short)CONCAT31((int3)(uVar34 >> 8),(byte)uVar34 << 5 | (byte)uVar34 >> 3
                                          )) ^ 0xd6f5;
  uVar27 = (ushort)CONCAT31((int3)(uVar33 >> 8),
                            (byte)uVar33 << (bVar11 & 7) | (byte)uVar33 >> 8 - (bVar11 & 7)) >> 1;
  bVar10 = (byte)((ushort)uVar35 >> 1);
  cVar20 = (char)uVar22;
  uVar12 = uVar12 ^ 1 << (uVar12 & 0xf);
  uVar29 = uVar12 << 3 | uVar12 >> 0xd;
  iVar23 = CONCAT22(uVar31,(short)CONCAT31((int3)(CONCAT22(uVar31,CONCAT11((byte)(uVar22 >> 8) >>
                                                                           (bVar11 & 0x1f),cVar20))
                                                 >> 8),cVar20 + (char)uVar27) + uVar12) << 3;
  uVar22 = CONCAT22(uVar30,CONCAT11((char)((ushort)(uVar12 << 3) >> 8) << 1 | (short)uVar29 < 0,
                                    (char)uVar29)) >> 1;
  bVar8 = ((byte)uVar22 & 0x1f) % 0x11;
  uVar22 = uVar22 & 0xffff;
  uVar16 = CONCAT22(uVar21,(short)uVar39 + -0x485f) | 0x2000;
  uVar22 = CONCAT22(uVar30 >> 1 | (ushort)(((uint)(uVar31 >> 0xd) << 0x1f) >> 0x10),
                    (ushort)(uVar22 << bVar8) | (ushort)(uVar22 >> 0x11 - bVar8)) &
           ~(1 << ((ushort)uVar35 != 0xd685));
  bVar8 = (byte)((uint)iVar23 >> 8);
  bVar40 = bVar8 & 1;
  iVar23 = CONCAT22((short)((uint)iVar23 >> 0x10),
                    CONCAT11(bVar8 >> 1 | bVar40 << 7,(byte)(uVar34 >> 0x1d) | (byte)iVar23));
  sVar13 = CONCAT11((byte)((ushort)(~(ushort)iVar28 << 0xf) >> 8) | (byte)(uVar35 >> 8) >> 1,
                    bVar10 << (bVar11 & 7) | bVar10 >> 8 - (bVar11 & 7)) + 0x652d + (ushort)bVar40;
  iVar28 = 0x1f;
  if (uVar16 != 0) {
    for (; uVar16 >> iVar28 == 0; iVar28 = iVar28 + -1) {
    }
  }
  uVar12 = (ushort)((uint)((int)(int3)(CONCAT22((short)(uVar33 >> 0x10),uVar27) >> 8) >> 0x14) >>
                   0xe) ^ 0x4ba6;
  if ((POPCOUNT(uVar12 & 0xff) & 1U) != 0) {
    uVar12 = (ushort)iVar28;
  }
  bVar11 = (byte)uVar22;
  lVar3 = (longlong)iVar23 * (longlong)iVar23;
  uVar27 = (ushort)iVar28 >> 1;
  uVar31 = uVar27 | 0x8000;
  uVar33 = CONCAT22((short)((uint)iVar28 >> 0x10),uVar27) | 0x8000;
  bVar10 = (byte)(uVar12 << 1) | (short)uVar12 < 0 | 0xc0;
  uVar34 = (uint)lVar3 & 0xffff3fff;
  uVar27 = (ushort)uVar34;
  cVar20 = (char)(uVar27 / bVar10);
  uVar6 = (undefined2)(uVar34 >> 0x10);
  bVar8 = (byte)(uVar27 % (ushort)bVar10);
  uVar27 = uVar31 >> 7;
  sVar32 = CONCAT11((char)((ushort)(uVar12 << 1) >> 8),bVar10 - 1);
  bVar10 = (byte)uVar27;
  iVar23 = CONCAT22((short)(uVar22 >> 0x10),
                    (short)((ushort)(byte)(bVar11 << (bVar11 & 7) | bVar11 >> 8 - (bVar11 & 7)) << 9
                           | uVar27) >> (bVar10 & 0x1f));
  uVar5 = CONCAT31((int3)(CONCAT22(uVar6,CONCAT11(bVar8 << 5 | bVar8 >> 3,cVar20)) >> 8),
                   cVar20 >> 0x1a);
  uVar22 = CONCAT22((short)((ulonglong)lVar3 >> 0x30),
                    CONCAT11(((char)bVar8 >> 7) + bVar10,(char)bVar8 >> 7) + -0x52b) + 0xc9634845;
  iVar28 = iVar23 - uVar16;
  iVar17 = iVar28 + -1;
  if (iVar17 == 0 || (SBORROW4(iVar23,uVar16) != SBORROW4(iVar28,1)) != iVar17 < 0) {
    uVar5 = CONCAT22(uVar6,sVar32);
  }
  sVar14 = ((ushort)iVar17 | 0x100) + uVar31;
  uVar34 = CONCAT31((int3)((uint)uVar5 >> 8),
                    (char)uVar5 << 2 | (byte)(CONCAT11(sVar13 < 0,(char)uVar5) >> 7)) ^ 0x55;
  iVar28 = uVar33 + 0xe6cf720a;
  if (iVar28 != 0 && (SBORROW4(uVar33,0x19308df6) != false) == iVar28 < 0) {
    iVar28 = CONCAT22((short)((uint)iVar28 >> 0x10),(short)uVar34);
  }
  uVar27 = (ushort)(uVar22 >> 0x10);
  uVar12 = (ushort)uVar22;
  bVar41 = (uVar34 >> (uVar22 & 0x1f) & 1) != 0;
  uVar22 = uVar34 & ~(1 << (uVar22 & 0x1f));
  if (!bVar41 && (char)uVar34 != -0x58) {
    uVar16 = CONCAT22(uVar21,(short)iVar28);
  }
  uVar31 = (ushort)CONCAT31((int3)(uVar22 >> 8),
                            (byte)(CONCAT11(bVar41,(char)uVar22) >> 6) | (char)uVar22 << 3);
  uVar29 = (sVar32 << 1) << ((byte)sVar14 & 0x1f);
  bVar41 = (POPCOUNT((uVar29 & 0x7f) << 1 | (uint)(uVar27 >> 0xf)) & 1U) == 0;
  uVar26 = (undefined3)((uint)(CONCAT22(uVar27,uVar29) << 1) >> 8);
  uVar27 = (short)iVar28 + 1U | 1 << (uVar12 & 0xf);
  uVar33 = (uint)((ulonglong)
                  ((longlong)(iVar28 * 0x5c1c5036) *
                  (longlong)
                  CONCAT31(uVar26,bVar41 + 'b' +
                                  (uVar12 < (ushort)((uVar31 + (short)uVar16) -
                                                    (short)CONCAT31(uVar26,bVar41))))) >> 0x20) &
           0xffff91a6;
  iVar23 = (CONCAT22((short)((uint)iVar17 >> 0x10),sVar14) >> 8) << 0x13;
  sVar32 = uVar12 << 3;
  uVar30 = (ushort)((uint)iVar23 >> 0x10);
  uVar34 = CONCAT22((short)((uint)iVar28 >> 0x10),uVar27) >> 1;
  uVar16 = uVar34 | (uint)((uVar27 & 1) != 0) << 0x1f;
  uVar27 = (ushort)uVar34;
  uVar38 = uVar31 + uVar27;
  bVar8 = (byte)sVar32 & 0x1f;
  uVar29 = ~(1 << (uVar38 & 0xf)) & 0xffc3;
  cVar20 = ((char)(uVar29 >> 8) - (char)((ushort)sVar32 >> 8)) + -1;
  uVar34 = CONCAT22((short)(uVar33 >> 0x10),
                    CONCAT11((char)((ushort)((short)uVar33 << 7) >> 8),(byte)(uVar33 >> 8) >> 1));
  iVar28 = CONCAT22(uVar30,sVar32) << 6;
  sVar32 = ((ushort)(CONCAT14(CARRY2(uVar31,uVar27),uVar16) >> bVar8) |
           (ushort)(uVar16 << 0x21 - bVar8)) + 0x89dd + (ushort)(uVar38 < 0x3cea);
  uVar27 = uVar31 - (sVar13 * 2 | (ushort)uVar5 >> 0xf);
  if (-1 < sVar32) {
    uVar27 = uVar30 >> 10 | (ushort)iVar28;
  }
  uVar34 = uVar34 << 0x16 | uVar34 >> 10;
  sVar13 = sVar32 * -0x25d1 + -0x1cf7;
  bVar11 = (byte)((uint)iVar23 >> 0x1a);
  bVar8 = bVar11 & 0x1f;
  uVar16 = CONCAT22((short)(uVar22 >> 0x10),uVar38) << bVar8 | uVar34 >> 0x20 - bVar8;
  uVar30 = (ushort)uVar16;
  uVar22 = (uint)(sVar13 < 0);
  bVar11 = bVar11 + (char)((ushort)((uVar12 >> 6) - (~uVar27 << 1 | uVar30 >> 0xf)) >> 8) +
           (uVar22 != 0);
  uVar12 = (sVar13 * 2 | (ushort)(~uVar27 << 1) >> 0xf) +
           (CONCAT11(cVar20 * '\x02' | cVar20 < '\0',(char)uVar29) >> 1);
  uVar34 = uVar34 >> 8 & 0x56717d;
  bVar8 = (bVar11 & 0x1f) % 0x11;
  uVar29 = uVar12 << bVar8 | uVar12 >> 0x11 - bVar8;
  uVar12 = uVar30 + ((ushort)(uVar34 << 8) ^ (ushort)((int)-uVar22 >> (bVar11 & 0x1f)));
  uVar27 = (ushort)CONCAT31((int3)((uint)iVar28 >> 8),bVar11);
  uVar31 = uVar27 ^ 0x40;
  uVar22 = CONCAT22((short)((uint)iVar28 >> 0x10),uVar27) ^ 0x40;
  iVar28 = CONCAT22((short)(uVar34 >> 8),uVar30 >> (bVar11 & 0xf) | uVar30 << 0x10 - (bVar11 & 0xf))
           + -1;
  bVar8 = ((byte)uVar31 & 0x1f) % 0x11;
  uVar33 = CONCAT22((short)uVar29 >> 0xf,uVar31 * 0x5180 | uVar12) & 0xffff00ff;
  bVar11 = (byte)uVar33;
  iVar23 = uVar22 * 2;
  uVar34 = CONCAT22((short)((uint)iVar28 >> 0x10),CONCAT11(bVar11,(char)iVar28));
  uVar27 = ((ushort)bVar11 << 1 | (ushort)CARRY4(uVar22,uVar22)) * 2 + 1;
  bVar11 = ((byte)iVar23 & 0x1f) % 0x11;
  bVar11 = (byte)(uVar27 >> bVar11) | (char)uVar27 << 0x11 - bVar11;
  uVar27 = (short)iVar23 >> 1;
  uVar22 = (CONCAT22((short)(uVar16 >> 0x10),uVar12) & 0xffffcd6f) << 1;
  uVar33 = CONCAT22((short)(uVar33 >> 0x10),0xcd6f) >> ((byte)uVar27 & 0x1f);
  iVar28 = 0x1f;
  if (uVar22 != 0) {
    for (; uVar22 >> iVar28 == 0; iVar28 = iVar28 + -1) {
    }
  }
  uVar31 = uVar27 ^ 0x608f;
  uVar35 = CONCAT22((short)((uint)iVar23 >> 0x10),uVar27) ^ 0x608f;
  uVar16 = CONCAT22((short)(uVar29 >> bVar8 | uVar29 << 0x11 - bVar8) >> 0xf,
                    CONCAT11(((short)uVar31 < 0) << 7 | (uVar31 == 0) << 6 |
                             (((short)(char)bVar7 & 0x1000U) != 0) << 4 |
                             ((POPCOUNT(uVar31 & 0xff) & 1U) == 0) << 2,bVar11)) | 0x200;
  uVar27 = (ushort)uVar33 >> 2;
  bVar7 = (char)uVar27 >> 8 ^ (byte)(uVar16 >> 8);
  bVar8 = (byte)((uint)iVar28 >> 8);
  iVar28 = CONCAT22((short)((uint)iVar28 >> 0x10),CONCAT11(bVar8 >> 6 | bVar8 << 2,(byte)iVar28)) <<
           ((byte)iVar28 & 0x1f);
  uVar22 = (uVar34 << 0x1d | uVar34 >> 3) & ~(1 << (((uVar12 & 0xcd6f) & 0xf) << 1));
  uVar12 = (ushort)(uVar22 >> 0x10);
  uVar34 = CONCAT22(uVar12,CONCAT11(((char)(uVar22 >> 8) - bVar11) + -1,(char)uVar22)) << 0xe;
  uVar22 = 0x1f;
  if (uVar35 != 0) {
    for (; uVar35 >> uVar22 == 0; uVar22 = uVar22 - 1) {
    }
  }
  uVar39 = uVar12 >> 2 | uVar34 | 0xc000;
  uVar16 = (uVar16 >> 1 | (uint)((bVar11 & 1) != 0) << 0x1f) & ~(1 << (bVar7 & 0x1f)) & 0xffff3fff;
  uVar12 = (ushort)(byte)(uVar39 >> 8);
  uVar31 = (ushort)uVar16;
  uVar21 = (undefined2)(uVar34 >> 0x10);
  uVar34 = CONCAT22((short)((uint)iVar28 >> 0x10),(ushort)iVar28 << 7 | (ushort)iVar28 >> 9) << 1;
  uVar37 = uVar34 | iVar28 < 0;
  iVar28 = uVar22 + CONCAT22((short)(uVar16 >> 0x10),
                             CONCAT11((char)(uVar31 % uVar12),(char)(uVar31 / uVar12))) + uVar35;
  iVar23 = CONCAT31((int3)(CONCAT22((short)(uVar33 >> 0x10),uVar27) >> 8),bVar7 & (byte)uVar37);
  sVar13 = (short)iVar23;
  uVar6 = (undefined2)((uint)iVar28 >> 0x10);
  uVar12 = (short)iVar28 + 0xd51;
  uVar16 = CONCAT22(uVar6,uVar12);
  uVar34 = CONCAT22((short)(uVar34 >> 0x10),(short)uVar37 - sVar13) + 1;
  bVar8 = (byte)uVar34;
  uVar33 = iVar23 << (bVar8 & 0x1f) | (uVar22 ^ 0x2000000) >> 0x20 - (bVar8 & 0x1f);
  bVar7 = (byte)uVar33 >> (bVar8 & 0x1f);
  uVar22 = (uVar22 ^ 0x2000000) * uVar16;
  if ((bVar7 & 1) != 0) {
    uVar22 = uVar16;
  }
  uVar16 = ((CONCAT22(uVar21,uVar12 + sVar13 * 8) >> (bVar8 & 0x1f) |
            CONCAT22(uVar21,~(ushort)uVar39) * -0x4e98c8ce << 0x20 - (bVar8 & 0x1f)) >> 1) >>
           (bVar8 & 0x1f);
  uVar34 = uVar34 & 0xffff0cff;
  cVar20 = (char)(uVar33 >> 8) + '\\';
  uVar33 = CONCAT22((short)(uVar33 >> 0x10),CONCAT11(cVar20,bVar7));
  if (-1 < cVar20) {
    uVar33 = uVar16;
  }
  bVar7 = (byte)uVar34;
  bVar8 = (bVar7 & 0x1f) % 0x11;
  uVar35 = (uint)(0xca8c845c < (uint)((int)uVar22 >> 0x1f)) << 0x10 | uVar16 & 0xffff;
  uVar16 = CONCAT22((short)(uVar16 >> 0x10),
                    (ushort)(uVar35 >> bVar8) | (ushort)(uVar35 << 0x11 - bVar8));
  uVar27 = CONCAT11((byte)(uVar33 >> 8) >> (bVar7 & 0x1f),(char)uVar33);
  uVar33 = CONCAT22((short)(uVar33 >> 0x10),uVar27);
  lVar3 = (ulonglong)uVar22 * (ulonglong)uVar16;
  uVar21 = (undefined2)((ulonglong)lVar3 >> 0x30);
  sVar13 = (short)(char)((byte)lVar3 & 0xe8) >> 0xf;
  uVar22 = CONCAT22(uVar21,sVar13);
  iVar28 = 0;
  if (uVar22 != 0) {
    for (; (uVar22 >> iVar28 & 1) == 0; iVar28 = iVar28 + 1) {
    }
  }
  uVar37 = CONCAT22(uVar6,uVar12 & uVar27) >> (bVar7 & 0x1f);
  uVar16 = uVar16 ^ uVar33;
  uVar35 = (uint)lVar3 >> 0x15;
  if (uVar35 != uVar37) {
    uVar35 = uVar37;
    uVar33 = uVar37;
  }
  uVar27 = (ushort)uVar16;
  uVar12 = (ushort)uVar34 ^ uVar27;
  if (uVar12 != 0) {
    uVar22 = CONCAT22(uVar21,uVar27);
  }
  uVar37 = CONCAT31((int3)(CONCAT22((short)(uVar34 >> 0x10),uVar12) >> 8),(char)uVar12) & 0xffffff0f
  ;
  uVar34 = CONCAT22((short)(uVar35 >> 0x10),
                    (ushort)CONCAT31((int3)(uVar35 >> 8),(POPCOUNT(uVar12 & 0xff) & 1U) != 0) >>
                    (sbyte)uVar37 | (ushort)iVar28 << 0x10 - (sbyte)uVar37);
  uVar16 = CONCAT22((short)(uVar16 >> 0x10),(ushort)uVar37);
  uVar12 = (ushort)uVar37 >> 1;
  bVar8 = (byte)uVar12 ^ (byte)(1 << (uVar12 & 0xf));
  uVar12 = (ushort)((uint)iVar28 >> 0x10);
  cVar20 = (char)((ushort)((short)uVar22 * 0x479) >> 8);
  iVar23 = CONCAT22((short)(uVar37 >> 0x10),
                    CONCAT11(SCARRY1(cVar20,'\x01') != (char)(cVar20 + '\x01') < '\0',bVar8));
  uVar27 = uVar12 >> 3 | (ushort)((uint)(iVar23 << 0x1d) >> 0x10);
  sVar32 = (short)(CONCAT22(uVar12,(ushort)iVar28 >> 1) >> 3);
  uVar12 = sVar13 - sVar32;
  iVar23 = iVar23 << (bVar8 & 0x1f);
  sVar13 = CONCAT11(0xff,(char)iVar23) + -0x6bae;
  bVar8 = (byte)sVar13;
  bVar7 = bVar8 & 0x1f;
  uVar34 = uVar34 >> bVar7 | uVar34 << 0x20 - bVar7;
  uVar21 = (undefined2)((uVar33 | uVar22) >> 0x10);
  uVar31 = (short)(uVar33 | uVar22) * 2;
  uVar22 = CONCAT22((short)((int)uVar34 >> 0x11),
                    CONCAT11((uVar12 & 0x5bef) != 0,(char)((int)uVar34 >> 1))) + uVar16;
  bVar8 = bVar8 & 0x1f;
  uVar34 = uVar22 << bVar8 | uVar22 >> 0x20 - bVar8;
  uVar33 = CONCAT22(uVar27,sVar32 + -0x310d);
  uVar22 = CONCAT22((short)((uint)iVar23 >> 0x10),sVar13 + uVar31 + 1);
  if ((int)(uVar33 + 0xf50fb7a8) < 0) {
    uVar22 = CONCAT22(uVar21,uVar31);
  }
  iVar28 = (int)(short)CONCAT31((int3)(uVar34 >> 8),(char)uVar34 + -0x6f) * (int)(short)uVar31;
  bVar7 = (byte)(uVar22 >> 0x15);
  bVar8 = bVar7 & 0xf;
  uVar34 = uVar16 >> 1 & 0x814e410;
  uVar30 = (uVar31 >> bVar8 | uVar31 << 0x10 - bVar8) &
           ((ushort)(uVar22 >> 0x15) | (ushort)(uVar22 << 0xb));
  bVar8 = (byte)((uint)iVar28 >> 0x18);
  bVar41 = !CARRY1((byte)iVar28,bVar8);
  uVar6 = (undefined2)(uVar34 >> 0x10);
  uVar31 = (ushort)~(ushort)uVar34 >> 5;
  uVar29 = uVar31 | (ushort)bVar41 << 0xb;
  iVar23 = CONCAT22((short)((uVar22 << 0xb) >> 0x10),
                    CONCAT11((POPCOUNT((byte)iVar28 + bVar8) & 1U) == 0,bVar7)) +
           CONCAT22(uVar6,uVar29);
  uVar22 = CONCAT22((short)(uVar12 - 1 >> 0x10),(ushort)((uint)iVar28 >> 0x18) ^ 1 << (uVar31 & 0xf)
                   ) >> 1 | (uint)(ushort)(short)bVar41 << 0x1f;
  iVar28 = -uVar22;
  if (uVar22 != 0 || iVar28 == 0) {
    uVar33 = CONCAT22(uVar27,(short)iVar23);
  }
  uVar34 = CONCAT22(uVar6,uVar29) ^ uVar33;
  bVar7 = (byte)iVar23 & 0xf;
  bVar8 = (byte)(iVar23 >> 0x19);
  uVar6 = (undefined2)(uVar33 >> 0x10);
  iVar17 = (uVar34 << 0x13 | uVar34 >> 0xe) - CONCAT22(uVar6,(short)uVar33 >> (bVar8 & 0x1f));
  uVar12 = ~(ushort)iVar17;
  uVar33 = CONCAT22((short)((uint)iVar17 >> 0x10),uVar12);
  sVar13 = (short)(iVar23 >> 0x1f);
  bVar8 = bVar8 << 1;
  bVar11 = bVar8 & 0x1f | 1;
  uVar34 = CONCAT22((short)((uint)iVar28 >> 0x10),(ushort)(iVar28 == 0 || 0 < (int)uVar22) << 0xb)
           << bVar11 | uVar33 >> 0x20 - bVar11;
  bVar11 = bVar8 & 0x1f | 1;
  uVar16 = CONCAT22(uVar6,(short)uVar34) << bVar11 | uVar34 >> 0x20 - bVar11;
  uVar35 = CONCAT22(uVar21,(ushort)((uVar30 << bVar7 | uVar30 >> 0x10 - bVar7) << 1) >> 0xf |
                           uVar12 << 1);
  uVar22 = uVar16 & 0xfffffeff;
  if (((ushort)uVar16 >> 8 & 1) == 0) {
    uVar22 = uVar35;
  }
  uVar34 = CONCAT31((int3)(uVar34 >> 8),(byte)uVar34 ^ (byte)(uVar34 >> 8));
  bVar8 = bVar8 & 0x1f | 1;
  uVar34 = uVar34 << bVar8 | uVar34 >> 0x21 - bVar8;
  uVar35 = uVar35 ^ 0xefac5121;
  uVar29 = (ushort)uVar34 & ~(1 << (uVar12 & 0xf));
  uVar27 = (ushort)(uVar22 < 0xb207271e);
  uVar12 = (ushort)(uVar27 == 0) * (uVar27 * 0x100 ^ uVar29);
  uVar31 = uVar27 * 0x100 ^ uVar12;
  sVar32 = (uVar27 != 0) * uVar31;
  sVar14 = uVar29 * -0x5617;
  cVar20 = (char)sVar14 + -0x43;
  uVar16 = CONCAT31((int3)(CONCAT22((short)(uVar34 >> 0x10),sVar14) >> 8),cVar20);
  uVar35 = CONCAT22((short)(uVar35 >> 0x10),(short)uVar35 << 1);
  uVar34 = CONCAT22(sVar13,CONCAT11((char)((ushort)sVar32 >> 8) * '\x02' + '\x01',(char)sVar32)) *
           uVar16;
  iVar28 = (uVar34 & 0xffff) * (uVar34 & 0xffff);
  uVar34 = CONCAT22((short)(uVar34 >> 0x10),(short)iVar28);
  if ((short)((uint)iVar28 >> 0x10) == 0) {
    uVar34 = uVar35;
  }
  uVar27 = (ushort)((uVar33 << 2) >> 0x10);
  uVar21 = (undefined2)(uVar22 + 0x4df8d8e2 >> 0x10);
  sVar32 = (short)(uVar22 + 0x4df8d8e2) * 0x2000 + 0x14b1;
  uVar22 = (int)uVar34 >> 0x1f;
  if (CONCAT22(uVar21,sVar32) < uVar35) {
    uVar22 = CONCAT22(sVar13,uVar31);
  }
  uVar34 = CONCAT31((int3)(uVar34 >> 8),(char)uVar34 + cVar20 + (uVar35 < CONCAT22(uVar21,sVar32)))
           & ~(1 << (uVar22 & 0x1f));
  sVar14 = (short)uVar34 + sVar32 + 1;
  uVar34 = CONCAT22((short)(uVar34 >> 0x10),sVar14);
  iVar28 = uVar16 - uVar34;
  uVar34 = (uint)(uVar16 < uVar34) << 0x10 | uVar22 & 0xffff;
  uVar33 = uVar34 >> 2;
  cVar20 = (char)(uVar31 >> 8);
  sVar13 = (short)uVar33 << 5;
  uVar29 = (ushort)((uint)iVar28 >> 0x10);
  bVar7 = (char)((uint)iVar28 >> 8) << 1;
  cVar19 = (char)((ushort)sVar13 >> 8);
  uVar35 = CONCAT22(uVar21,sVar32) | 0x80;
  bVar8 = (byte)uVar12;
  uVar16 = (uint)(ushort)((short)cVar19 >> 7) << 0x10;
  uVar37 = (uint)(ushort)(CONCAT11(cVar19,(char)sVar14 - cVar20) >> (bVar8 & 0x1f));
  if (uVar16 != uVar37) {
    uVar16 = uVar37;
    uVar35 = uVar37;
  }
  uVar22 = CONCAT22((short)(uVar22 >> 0x10),
                    CONCAT11((char)((ushort)sVar14 >> 8),
                             (byte)((byte)(uVar33 >> 8) | (byte)((uVar34 << 0xf) >> 8)) >> 3 |
                             (byte)sVar13)) + 0xf7138ba >> 1;
  uVar22 = uVar22 << (bVar8 & 0x1f) | uVar22 >> 0x20 - (bVar8 & 0x1f);
  uVar12 = (ushort)CONCAT31((int3)(uVar16 >> 8),(char)uVar16 << (bVar8 & 0x1f));
  uVar35 = uVar35 | 0x3f888fc1;
  bVar8 = (byte)((CONCAT11(cVar20 << 1 | (short)uVar31 < 0,bVar8) >> (bVar8 & 0x1f) | 0x3e21) << 1)
          & 0x1f;
  uVar34 = ((CONCAT22(uVar21,sVar32) | 0x80) << bVar8 | CONCAT22(uVar27,0x71a) >> 0x20 - bVar8) * 2
           + 1;
  uVar31 = (ushort)uVar35 & 0xfeff;
  uVar22 = CONCAT22(uVar27,0x71a - (short)CONCAT31((int3)(uVar22 >> 8),(char)uVar22 * '\x02')) >> 1;
  uVar1 = (longlong)
          CONCAT31((int3)(CONCAT22((short)(uVar16 >> 0x10),uVar12 << 0xf | uVar12 >> 1) >> 8),1) *
          (longlong)(int)(uVar35 & 0xfffffeff);
  cVar20 = (char)(uVar1 >> 8);
  cVar19 = cVar20 + '\x01';
  if (SCARRY1(cVar20,'\x01') != cVar19 < '\0') {
    uVar22 = CONCAT22(uVar27 >> 1,(short)uVar34);
  }
  uVar12 = (short)uVar22 - uVar31;
  uVar21 = (undefined2)(uVar22 >> 0x10);
  uVar33 = (uint)(uVar1 >> 0x21);
  uVar22 = 0x1f;
  if (CONCAT22(uVar21,uVar12) != 0) {
    for (; CONCAT22(uVar21,uVar12) >> uVar22 == 0; uVar22 = uVar22 - 1) {
    }
  }
  iVar15 = CONCAT22(uVar21,uVar12 * 0x100 | uVar12 >> 8);
  bVar10 = (byte)(uVar33 >> 8);
  bVar11 = (byte)uVar33;
  iVar23 = (CONCAT22((short)(uVar1 >> 0x10),CONCAT11(cVar19,(char)uVar1) ^ (uVar31 | 0x6b13)) >> 0xf
           ) + -0x607371b7;
  uVar27 = (ushort)(uVar34 >> 1) | 0x100;
  bVar8 = ((byte)iVar23 ^ (byte)(1 << (bVar11 & 0xf))) - (char)uVar31;
  iVar17 = CONCAT22((ushort)(uVar1 >> 0x31) |
                    (ushort)(((uint)((uVar1 & 0x100000000) != 0) << 0x1f) >> 0x10),
                    CONCAT11(bVar10 >> 3 | bVar10 << 5,bVar11)) >> (((byte)uVar22 | 0x5b) & 0x1f);
  uVar33 = (uVar22 | 0x5b) & 0xffffff0f;
  uVar6 = (undefined2)((uint)iVar17 >> 0x10);
  uVar12 = (short)iVar17 << (sbyte)uVar33 | uVar27 >> 0x10 - (sbyte)uVar33;
  bVar41 = CONCAT11(0xa3,bVar8) == uVar12;
  uVar12 = uVar12 ^ (ushort)bVar41 * (uVar12 ^ (ushort)uVar33);
  bVar11 = (byte)uVar12;
  iVar28 = ((CONCAT22(uVar29 >> 7 |
                      (ushort)((uint)(CONCAT22(uVar29,(CONCAT11(bVar7,(char)iVar28) << 2 |
                                                      (ushort)(bVar7 >> 6)) + 1) << 0x19) >> 0x10),
                      (ushort)uVar35) & 0xfffffeff | 0x6b13) >> 1) - iVar15;
  bVar40 = (byte)((uint)iVar28 >> 8);
  bVar7 = (byte)(uVar33 >> 8) >> 1;
  bVar8 = (byte)(bVar8 ^ !bVar41 * (bVar8 ^ bVar11)) >> 1;
  uVar22 = CONCAT31((int3)((uint)iVar23 >> 8),bVar8) & 0xffff00ff | 0x80;
  bVar10 = (byte)((ushort)uVar33 >> 1);
  cVar19 = (char)(uVar12 >> 8);
  cVar20 = -cVar19;
  if (cVar20 != '\0' && cVar19 < '\x01') {
    iVar15 = CONCAT22(uVar21,CONCAT11(bVar7 << 4 | (bVar7 | 0x80) >> 4,bVar10));
  }
  uVar27 = (short)uVar27 >> 5;
  uVar30 = uVar27 >> (bVar10 & 0xf) | uVar27 << 0x10 - (bVar10 & 0xf);
  uVar16 = CONCAT22((short)(uVar33 >> 0x10),CONCAT11(bVar8,bVar10)) & 0xfffff0ff;
  uVar29 = (ushort)uVar16 | 0x8000;
  bVar8 = (byte)uVar16;
  uVar37 = uVar22 >> (bVar8 & 0x1f) | uVar22 << 0x21 - (bVar8 & 0x1f);
  uVar39 = uVar35 & 0xfffffeff | 0xc000;
  uVar22 = (CONCAT31((int3)(CONCAT22(uVar6,uVar12) >> 8),
                     bVar11 << (bVar8 & 7) | bVar11 >> 8 - (bVar8 & 7)) & 0x3fff) << 0x10 |
           (uint)(ushort)((ushort)uVar37 >> (bVar8 & 0x1f));
  uVar33 = CONCAT22(uVar6,(short)(uVar22 % (uVar31 | 0xc000)));
  uVar33 = uVar33 << (bVar8 & 0x1f) | uVar33 >> 0x21 - (bVar8 & 0x1f);
  sVar32 = CONCAT11(cVar20 << (bVar8 & 0x1f),
                    (byte)(bVar40 + (byte)iVar28 * '\x02' + CARRY1(bVar40,(byte)iVar28)) >> 7);
  iVar23 = (short)iVar15 * 0x94;
  sVar14 = (short)iVar23;
  uVar12 = (ushort)(sVar14 != iVar23);
  uVar27 = (ushort)uVar16 * 2;
  sVar13 = uVar27 + uVar12;
  if (sVar13 == 0) {
    sVar13 = sVar32;
  }
  if (CARRY2(uVar29,uVar29) || CARRY2(uVar27,uVar12)) {
    sVar32 = CONCAT11((byte)(uVar33 >> 8) >> (bVar8 & 0x1f),(char)uVar33);
  }
  iVar23 = (CONCAT22((short)((uint)iVar28 >> 0x10),sVar32) -
           CONCAT22((ushort)(uVar34 >> 0x11),uVar30)) * 2;
  bVar8 = (byte)sVar13;
  uVar21 = (undefined2)((uint)iVar23 >> 0x10);
  iVar28 = (int)(short)((ushort)(uVar22 / (uVar31 | 0xc000)) | 0x2c00) * (int)(short)uVar30;
  bVar7 = (byte)((uint)iVar28 >> 0x18);
  iVar17 = (CONCAT22((short)(uVar37 >> 0x10),(short)iVar28) - uVar39) - (uint)(0x44 < bVar7);
  iVar18 = CONCAT22((short)(uVar16 >> 0x10),CONCAT11((byte)((ushort)sVar13 >> 8) & bVar8,bVar8)) +
           -1;
  uVar12 = (ushort)iVar18;
  uVar16 = CONCAT22((short)((uint)iVar15 >> 0x10),sVar14 + 0x6226) & 0xfffffffd;
  uVar34 = -CONCAT22((short)((uint)iVar18 >> 0x10),uVar12 << 1 | uVar12 >> 0xf);
  uVar22 = (CONCAT22((short)(uVar33 >> 0x10),
                     CONCAT11(bVar7 + 0xbb,(char)((uint)iVar28 >> 0x10)) >> 1) >> 1) << 1;
  uVar33 = uVar22 | uVar34 >> 0x1f;
  iVar28 = (short)uVar16 * -0x56a0;
  bVar41 = (short)iVar28 != iVar28;
  return (uint)(ushort)(short)(char)((uint)iVar17 >> 0x10) +
         CONCAT31((int3)((uint)(CONCAT22(uVar21,0x1f5) + -1) >> 8),bVar41) +
         CONCAT22((short)(uVar34 >> 0x10),
                  CONCAT11((((byte)(uVar34 >> 8) | 0x57) + 0x1e) - bVar41,(char)uVar34)) +
         CONCAT22((short)(uVar22 >> 0x10),CONCAT11(uVar33 == 0,(char)uVar33)) +
         CONCAT22((short)(uVar16 >> 0x10),(short)iVar28) + (uint)(uVar33 == 0) +
         CONCAT22((short)(uVar35 >> 0x10),
                  (short)uVar39 +
                  (short)CONCAT31((int3)(CONCAT22(uVar21,CONCAT11((char)((uint)iVar23 >> 8) >>
                                                                  (bVar8 & 0x1f),(char)iVar23) << 1)
                                        >> 8),iVar17 != 0)) + 0x7bcfe26c;
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


