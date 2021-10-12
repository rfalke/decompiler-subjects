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
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRENT=1879040003,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELSZ=1610612752,
    DT_AUDIT=1879047932,
    DT_AUXILIARY=2147483645,
    DT_BIND_NOW=24,
    DT_CHECKSUM=1879047672,
    DT_CONFIG=1879047930,
    DT_DEBUG=21,
    DT_DEPAUDIT=1879047931,
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
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_REL=17,
    DT_RELA=7,
    DT_RELACOUNT=1879048185,
    DT_RELAENT=9,
    DT_RELASZ=8,
    DT_RELCOUNT=1879048186,
    DT_RELENT=19,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_RELRSZ=35,
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
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
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

typedef struct Gnu_BuildId Gnu_BuildId, *PGnu_BuildId;

struct Gnu_BuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Build-id vendor name
    byte description[20]; // Build-id value
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
// WARNING: Removing unreachable block (ram,0x080492f7)
// WARNING: Removing unreachable block (ram,0x080493a1)
// WARNING: Removing unreachable block (ram,0x080493cb)

int log_size_10_var_000(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined3 uVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  short sVar8;
  char cVar12;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  sbyte sVar13;
  byte bVar14;
  byte bVar15;
  char cVar19;
  ushort uVar16;
  uint uVar17;
  uint uVar18;
  uint3 uVar20;
  ushort uVar21;
  int iVar22;
  undefined uVar23;
  short sVar24;
  char cVar28;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar29;
  uint uVar30;
  ushort uVar31;
  uint uVar32;
  uint uVar33;
  ushort uVar34;
  ushort uVar35;
  uint uVar36;
  int iVar37;
  bool bVar38;
  
  for (uVar10 = 0x1f; 0x61803294U >> uVar10 == 0; uVar10 = uVar10 - 1) {
  }
  uVar7 = (ushort)uVar10 & 0x3fff;
  uVar36 = ~((uVar10 & 0xffff0000 | (uint)(ushort)(uVar7 / 0xcc | uVar7 % 0xcc << 8)) >> 1 |
            0x80000000);
  bVar5 = (byte)uVar36;
  cVar19 = -bVar5 + -1;
  bVar38 = (POPCOUNT(cVar19) & 1U) != 0;
  uVar21 = CONCAT11(cVar19 == '\0' || -1 < (char)bVar5,0x9f);
  uVar10 = ((ushort)((ushort)bVar38 << 8 | 0xfe) | 0x153e0000) + 0x7527d74a +
           (uint)(uVar21 < 0x2e0b);
  uVar34 = (ushort)uVar10;
  uVar7 = uVar34 << 1 | uVar34 >> 0xf;
  uVar18 = uVar10 & 0xffff0000 | (uint)uVar7;
  uVar10 = (((uint)(CONCAT14((short)uVar34 < 0,0x6ec0cfe) >> 0x16) | 0x6067f000) ^ 0x515f) << 1;
  if (-1 < (int)uVar10) {
    uVar10 = 0x49700280;
  }
  uVar11 = ((ushort)(uVar21 + 0xd1f5) | 0x153e0000) >> 0xc & 0xffff;
  uVar29 = uVar36 & 0xffff0000 | uVar11;
  uVar34 = 0x4bee >> (-bVar5 + 0x2a & 0x1f);
  uVar36 = uVar18 + 0x7f7225fd;
  if (uVar36 != 0) {
    uVar10 = uVar10 & 0xffff0000 | uVar11;
  }
  if (uVar36 == 0 || (int)uVar18 < -0x7f7225fd) {
    uVar36 = uVar36 & 0xffff0000 | (uint)uVar34;
  }
  bVar15 = (byte)uVar7 & 0x1f;
  uVar21 = (ushort)(uVar29 << bVar15) |
           (ushort)(CONCAT14(uVar18 < 0x808dda03,uVar29) >> 0x21 - bVar15);
  uVar18 = (ushort)(CONCAT11(bVar38,bVar5 >> 1) << 6) & 0xffff00ff;
  uVar16 = (ushort)uVar18;
  uVar11 = (int)(short)uVar7;
  if (CARRY2(uVar21,uVar16) || (ushort)(uVar21 + uVar16) == 0) {
    uVar11 = uVar18 | 0x10000;
  }
  uVar7 = (ushort)uVar36;
  uVar31 = uVar7 & 0x280;
  uVar35 = (ushort)(uVar10 + 0x7065966e);
  uVar21 = (short)uVar11 + uVar35 + (ushort)(0x8f9a6991 < uVar10);
  uVar16 = uVar21 ^ (ushort)(uVar7 == uVar21) * (uVar21 ^ uVar31);
  uVar7 = uVar7 ^ (ushort)(uVar7 != uVar21) * (uVar7 ^ uVar16);
  bVar5 = (char)uVar7 + (char)((uint)uVar7 >> 8);
  bVar38 = (ushort)(uVar7 & 0xff00 | (ushort)bVar5) == uVar31;
  uVar31 = uVar31 ^ (ushort)bVar38 * (uVar31 ^ uVar34);
  uVar7 = uVar16 & 0xff | 1;
  uVar18 = uVar11 & 0xffff0000 | (uint)uVar7;
  uVar11 = (uVar36 & 0xffff0000 |
           (uint)(ushort)(short)(char)(bVar5 ^ !bVar38 * (bVar5 ^ (byte)uVar31))) * -0x31e51d83;
  uVar29 = (uVar10 + 0x7065966e & 0xffff0000 |
           (uint)(ushort)((short)(uVar35 ^ 1 << (uVar34 & 0xf)) >> ((byte)uVar16 & 0x1f))) <<
           ((byte)uVar7 & 0x1f);
  uVar10 = 0x1f;
  if (uVar18 != 0) {
    for (; uVar18 >> uVar10 == 0; uVar10 = uVar10 - 1) {
    }
  }
  uVar36 = uVar36 & 0x49700000 | (uint)uVar31 | 0x20000000;
  if (uVar18 == 0) {
    uVar18 = uVar29;
  }
  bVar5 = (byte)uVar11;
  sVar13 = (sbyte)(uVar18 & 0xffffff03);
  uVar7 = (ushort)(uVar18 & 0xffffff03) >> sVar13 | uVar31 << 0x10 - sVar13;
  uVar1 = (longlong)(int)(uVar11 & 0xffffff00 | (uint)(byte)(bVar5 >> 1 | bVar5 << 7)) &
          0x3fffffffffffffff;
  uVar2 = uVar1 / (uVar10 | 0xc0000000);
  uVar11 = (uint)(uVar1 % (ulonglong)(uVar10 | 0xc0000000));
  uVar10 = 0;
  if (uVar11 != 0) {
    for (; (uVar11 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
    }
  }
  uVar30 = uVar29 + (uVar18 & 0xffff0000 | uVar7 & 0xffffff00 | uVar10 & 0xff) + 1;
  uVar11 = -((uVar10 & 0xffffff00 | (uint)(byte)((char)uVar7 << 1 | (uVar2 & 0x100) != 0)) &
            0x5a28e0bd);
  uVar32 = uVar11 & 0xffff0000;
  uVar17 = (uVar18 & 0xffff0000) << 1;
  uVar11 = (uVar36 + (int)uVar2) - (uVar32 | (ushort)((short)uVar11 + uVar31 + 1));
  uVar29 = uVar17 >> 0x18;
  uVar25 = (uVar18 & 0x7f0000) << 1;
  uVar18 = uVar29 | uVar25 >> 8;
  bVar14 = (byte)(uVar17 >> 0x18);
  bVar5 = (bVar14 & 0x1f) % 0x11;
  uVar7 = (ushort)(uVar32 >> 0x10);
  bVar6 = (bVar14 & 0x48) + 0x25;
  uVar18 = (uVar18 | (uVar10 & 0xff) << 0x19) + uVar18;
  uVar17 = (((uVar30 & 0xffff0000 |
             (uint)(ushort)((ushort)((uVar30 & 0xffff) << bVar5) |
                           (ushort)((uVar30 & 0xffff) >> 0x11 - bVar5))) - 1) * 0x100 <<
            (bVar14 & 0x1f) | (uVar32 | uVar29) >> 0x20 - (bVar14 & 0x1f)) << 0x16;
  uVar10 = (uVar17 | 0x7793) >> 1;
  bVar15 = (byte)uVar18;
  uVar11 = (uVar11 & 0xffff0000 | (uint)(ushort)((short)uVar11 >> (bVar14 & 0x1f))) >> 1;
  uVar30 = CONCAT22((ushort)(uVar36 >> 0x10) | (ushort)(uVar30 >> 0x10),
                    (short)uVar11 + 0x788 + (short)(uVar32 >> 1)) & 0xaec3d084;
  bVar5 = (bVar15 & 0x1f) % 9;
  uVar36 = CONCAT11((byte)((char)((byte)(uVar25 >> 0x10) & 0x2f) >> 1) >> 1,bVar6) & 0xffffff00 |
           (uint)(byte)(bVar6 >> bVar5 | bVar6 << 9 - bVar5);
  uVar29 = -(uVar18 & 0xffff0000 | (uint)CONCAT11(-1 < (int)uVar30,bVar15));
  uVar32 = ((uVar11 | 0x80000000) - uVar10) - 1;
  uVar1 = (CONCAT44(((uVar7 & 1) << 0x10) >> 1 | (uint)(uVar7 >> 1) << 0x10,uVar36) ^ 0x1000000000)
          & 0x3fffffffffffffff | 0xc0000000;
  uVar1 = ((ulonglong)((uint)(uVar1 % (ulonglong)(uVar36 | 0xc0000000)) & 0x3fffffff) << 0x20 |
          uVar1 / (uVar36 | 0xc0000000) & 0xffffffff) / (ulonglong)(uVar29 | 0xc0000000);
  uVar25 = uVar36 * 0x30f78b46 | 0x9576;
  bVar15 = (byte)uVar29;
  uVar34 = (ushort)(uVar17 >> 0x19);
  uVar21 = (ushort)((uVar17 & 0x1fe0000) >> 9);
  uVar10 = uVar10 << 0x18;
  bVar5 = (char)(uVar1 >> 8) + bVar15 * '\x02';
  bVar6 = (byte)uVar25;
  uVar18 = CONCAT11((char)(uVar29 >> 8) << (bVar15 & 0x1f),bVar15) & 0xffffff00;
  uVar29 = (uVar29 & 0xffff0000 | 0xc0000000 | uVar18 | (uint)bVar5) ^ 0x40000;
  uVar11 = CONCAT22((short)(uVar1 >> 0x10),(ushort)(byte)uVar1 * (ushort)(byte)uVar1) ^ 0x7dffe825;
  uVar7 = ((ushort)uVar30 >> 1) + 0x2889;
  if ((POPCOUNT(bVar5 & (byte)(uVar18 >> 8)) & 1U) == 0) {
    uVar29 = uVar29 & 0xffff0000 | uVar32 & 0xffff;
  }
  uVar18 = (uint)CONCAT11(((char)(uVar25 >> 8) >> (bVar15 & 0x1f)) + -0x41,bVar6);
  bVar5 = (byte)(uVar11 >> 1);
  bVar15 = (byte)uVar29 & 0xf;
  bVar6 = bVar15 ^ (bVar5 == bVar15) * (bVar15 ^ bVar6);
  uVar25 = uVar36 * 0x30f78b46 & 0xffff0000 | uVar18 |
           uVar10 | (uVar34 | uVar21) & 0xffffffbf | 0x3b0000;
  uVar16 = ((short)uVar25 + 0x6727) - (ushort)((uVar34 & 1) != 0);
  uVar17 = (uVar10 | (ushort)((short)(uVar34 & 0xffbf | uVar21) >> 1) | 0x3b0000) ^
           1 << ((ushort)(uVar7 << bVar15 | uVar7 >> 0x10 - bVar15) & 0x1f);
  uVar21 = uVar16 + 0x476d;
  uVar36 = (uVar32 >> 1) * -0x2780a259;
  uVar7 = uVar21 * 0x20;
  uVar34 = (short)(CONCAT11(((char)(uVar29 >> 8) + '\x04' + (0xb892 < uVar16)) * '\x02',bVar6) |
                  0x100) >> (bVar6 & 0x1f);
  uVar10 = uVar25 & 0xffff0000 |
           (uint)(ushort)(uVar7 & 0xff | uVar21 >> 0xb |
                         (ushort)(byte)((char)((uint)uVar7 >> 8) << 1) << 8);
  uVar1 = (ulonglong)
          ((uVar11 & 0xffff0000 |
           (uint)(ushort)((ushort)(byte)(bVar5 ^ (bVar5 != bVar15) * (bVar5 ^ bVar6)) *
                         (ushort)(byte)(uVar18 >> 8))) + 0xea8009) *
          (ulonglong)(uVar29 & 0xffff0000 | (uint)uVar34);
  uVar11 = ~((uint)(uVar1 >> 0x20) | 0x10);
  uVar18 = uVar10 + 0x9976fc74;
  bVar5 = ((byte)uVar34 & 0x1f) % 0x11;
  uVar10 = (uint)(uVar10 < 0x6689038c) << 0x10 | uVar36 & 0xffff;
  uVar21 = (ushort)(uVar10 >> bVar5) | (ushort)(uVar10 << 0x11 - bVar5);
  uVar36 = uVar36 & 0xffff0000;
  uVar32 = uVar36 | uVar21;
  bVar5 = ((byte)uVar34 & 0x1f) % 0x11;
  uVar10 = (uint)((uVar1 & 0x100) != 0) << 0x10 | uVar18 & 0xffff;
  uVar18 = uVar18 & 0xffff0000;
  uVar10 = (uint)(ushort)((ushort)(uVar10 << bVar5) | (ushort)(uVar10 >> 0x11 - bVar5));
  uVar7 = (ushort)(byte)uVar1 * (ushort)(byte)(uVar1 >> 8);
  uVar25 = CONCAT22((short)(uVar1 >> 0x10),uVar7);
  uVar21 = (uVar21 + 0xd39e) - (ushort)CARRY4(uVar11,uVar32);
  uVar11 = (uVar11 + uVar32) * 2 | (uint)((short)uVar17 < 0);
  sVar13 = (sbyte)(uVar34 & 0xf);
  if ((uVar11 >> (uVar10 & 0x1f) & 1) == 0) {
    uVar11 = uVar18 | uVar10;
  }
  uVar10 = uVar25 >> 2;
  uVar32 = uVar29 & 0xffff0000 |
           (uint)(ushort)((uVar34 & 0xf | (ushort)(byte)~(byte)((uint)uVar34 >> 8) << 8) << sVar13 |
                         uVar21 >> 0x10 - sVar13) |
           1 << ((ushort)((short)uVar17 << 1 | uVar7 >> 0xf) & 0x1f);
  uVar29 = uVar10 & 0xffffff00 | uVar25 << 0x1e;
  uVar10 = (uint)(byte)((char)uVar10 - 1);
  uVar25 = uVar29 | uVar10;
  uVar11 = uVar11 ^ 1 << (uVar10 & 0x1f);
  iVar22 = uVar25 << 1;
  uVar16 = ((int)uVar25 < 0) + 0x6374;
  uVar7 = CONCAT11((ushort)(uVar18 >> 0x1c) != 0,(char)iVar22) >> 2;
  bVar15 = (byte)uVar32;
  uVar25 = (uVar36 | uVar21) << (bVar15 & 0x1f) |
           ((ushort)((short)uVar32 + 0xa0d0) | 0x1980000) >> 0x20 - (bVar15 & 0x1f);
  uVar18 = uVar25 & 0xffff0000;
  bVar6 = (byte)uVar11;
  uVar10 = ((uVar29 & 0x7fff8000) << 1 |
           (uint)(ushort)(uVar7 | (ushort)(byte)~(byte)((uint)iVar22 >> 8) << 8)) + 0x4a81d55c +
           (uVar17 & 0xffff0000 | (uint)uVar16) * 2;
  uVar34 = CONCAT11((char)(uVar32 >> 8) + bVar6,bVar15) + (short)uVar10 + 1;
  uVar35 = ((short)uVar32 << 0xd | (ushort)uVar11 >> 3) & uVar34;
  uVar34 = uVar34 & 0xff;
  uVar21 = uVar34 | (ushort)((short)uVar35 < 0) << 8;
  uVar36 = uVar32 & 0xffff0000 | (uint)uVar21;
  bVar5 = (byte)uVar7;
  cVar19 = (char)uVar34;
  uVar34 = CONCAT11((char)((char)(uVar11 >> 8) + '\x01') >> 3,bVar6);
  uVar7 = CONCAT11((byte)(uVar10 >> 8) & bVar6,(char)uVar10 + cVar19);
  if ((short)uVar34 <= (short)uVar16) {
    uVar7 = uVar35;
  }
  uVar29 = uVar17 & 0xffff0000 | (uint)(uVar16 & uVar21);
  uVar25 = uVar18 | (ushort)((short)uVar25 << (bVar15 & 0x1f)) >> 1;
  iVar22 = 0;
  if (uVar36 != 0) {
    for (; (uVar36 >> iVar22 & 1) == 0; iVar22 = iVar22 + 1) {
    }
  }
  uVar21 = (ushort)(byte)(bVar5 >> 1 | bVar5 << 7) * ((uVar34 >> 1) + 0x971e & 0xff);
  uVar36 = iVar22 + 0xacc684b;
  uVar34 = uVar21 & 0xff;
  bVar15 = cVar19 - 1;
  bVar5 = (char)((uint)uVar7 >> 8) + (char)uVar34;
  if (-1 < (char)bVar5) {
    uVar25 = uVar18 | 0x8531;
  }
  uVar30 = (uint)(CONCAT14(0x9c30797a <
                           (uVar36 & 0xffff0000 | (uint)(ushort)((short)uVar36 >> (bVar15 & 0x1f))),
                           uVar25) >> 0xe);
  uVar26 = (uVar10 & 0xffff0000 | (uint)(ushort)(uVar7 & 0xff | (ushort)(bVar5 | bVar15) << 8)) * 2
           + 0xac41221b;
  uVar20 = ((uint3)((uVar32 & 0xffff0000) >> 8) | (uint3)((short)uVar35 < 0)) ^ (uint3)(uVar29 >> 8)
  ;
  uVar16 = (ushort)uVar30 ^ 0x86d8;
  bVar38 = (POPCOUNT(uVar16 & 0xff) & 1U) == 0;
  uVar10 = (uint)(ushort)(uVar34 | (ushort)((POPCOUNT(uVar36 & 0xff) & 1U) != 0) << 8) *
           (CONCAT31(uVar20,bVar38) & 0xffff);
  uVar36 = uVar10 & 0xffff | (uint)(ushort)((short)uVar21 >> 0xf) << 0x10;
  uVar18 = uVar36 << 1;
  uVar34 = (ushort)uVar18;
  uVar7 = (ushort)(uVar10 >> 0x10);
  if (-1 < (int)uVar36) {
    uVar7 = uVar34;
  }
  uVar34 = uVar34 - 1;
  uVar18 = uVar18 & 0xffff0000;
  uVar35 = CONCAT11((byte)(uVar26 >> 8) >> 4,(char)uVar26);
  iVar22 = (uint)uVar7 << 1;
  cVar19 = (char)((uint)iVar22 >> 8);
  uVar31 = (ushort)(uVar29 << 1) | 1;
  uVar32 = (uVar18 | (ushort)(uVar34 & 0xff | (ushort)(byte)((char)((uint)uVar34 >> 8) << 1) << 8))
           >> 1;
  uVar21 = CONCAT11(cVar19 << 1 | cVar19 < '\0',(char)iVar22) | uVar35;
  uVar25 = (uVar30 & 0xffff0000 | uVar25 << 0x13 |
           (uint)(ushort)((uVar16 + 0x8b0c) - (ushort)((int)uVar29 < 0))) + uVar32 + 1;
  uVar34 = CONCAT11((POPCOUNT((uVar31 >> bVar38 | uVar31 << 0x10 - bVar38) + 0xbd49 & 0xff) & 1U) !=
                    0,bVar38 << 7) + 0x75db;
  uVar36 = (uint)(ushort)(uVar20 >> 8) << 0x10;
  uVar10 = uVar34 & 0x1f;
  uVar30 = uVar25 ^ 1 << uVar10;
  bVar5 = (byte)uVar34;
  bVar15 = bVar5 << 1 | bVar5 >> 7;
  uVar29 = uVar36 | uVar34 & 0xffffff00 | uVar21 & 0xff;
  uVar10 = (short)((ushort)(byte)(((char)uVar32 + -0x69) - ((uVar25 >> uVar10 & 1) != 0)) << 0xe) *
           -0x545f;
  uVar25 = (uVar17 & 0x7fff0000) << 1 | uVar10 & 0xffff;
  if ((int)(short)uVar10 != uVar10) {
    uVar29 = uVar36 | uVar30 & 0xffff;
  }
  uVar36 = (uVar26 & 0xffff0000 | (uint)uVar35) << (bVar5 & 0x1f) | 1 << (bVar15 & 0x1f);
  uVar10 = uVar29 & 0xffff0000 | (uint)(ushort)((ushort)uVar29 >> ((byte)uVar29 & 0x1f));
  if (((CONCAT22((ushort)(uVar11 >> 0x11),0x8531) & 0xffff0000 | uVar7 & 0x7fff8000) << 1 |
      (uint)(ushort)-(uVar21 & 0xff00 | (ushort)bVar15)) == uVar30) {
    uVar10 = uVar30;
  }
  uVar18 = ((uint)CONCAT21((ushort)(uVar18 >> 0x11),'\0' << ((byte)uVar10 & 0x1f)) << 8) >> 1;
  iVar27 = CONCAT31((uint3)((uint3)(uVar36 >> 8) & 0xffff00 |
                           (uint3)(byte)((ushort)-(short)uVar36 >> 8)) >> 4,1);
  uVar10 = uVar10 & 0xffff0000 | (uint)CONCAT11((-1 < (int)uVar18) << 1,(byte)uVar10 - 1);
  iVar22 = 0;
  if (uVar10 != 0) {
    for (; (uVar10 >> iVar22 & 1) == 0; iVar22 = iVar22 + 1) {
    }
  }
  uVar36 = (uVar25 & 0x74f38578) + 0x39c48794;
  uVar10 = (uint)(CONCAT14(CARRY4(uVar25,uVar25),iVar27) >> 0xb);
  uVar11 = uVar36 & 0xffff0000 | (uint)(ushort)(short)(char)uVar36;
  uVar32 = (0xd0d92a49 - uVar36 & 0xffffa53a) + 0x586c6ed8;
  bVar5 = (byte)((uint)iVar22 >> 8);
  bVar5 = bVar5 >> 2 | bVar5 << 6;
  uVar7 = (short)(char)uVar36 | 0x2a4a;
  iVar37 = CONCAT22(0xd0d9,uVar7 & 0xff | (ushort)(byte)iVar22 << 8);
  uVar23 = (undefined)uVar10;
  uVar10 = iVar27 << 0x16 | uVar10 & 0xffff0000;
  uVar36 = (uint)CONCAT11(0xc1,uVar23);
  uVar25 = uVar10 | uVar36;
  iVar27 = iVar37 + uVar25;
  uVar29 = iVar27 + 1;
  if (SCARRY4(iVar37,uVar25) != SCARRY4(iVar27,1)) {
    uVar29 = uVar18 & 0xffff0000 | (uint)CONCAT11(bVar5,(byte)iVar22);
  }
  uVar25 = CONCAT11(bVar5,(char)(uVar7 >> 8)) & 0xffffffbf;
  bVar5 = (byte)uVar29 >> 1;
  cVar19 = (char)(uVar29 >> 8);
  uVar10 = uVar10 | CONCAT11((char)(uVar36 >> 8) << 1 | (uVar29 & 1) != 0,uVar23);
  uVar36 = uVar10;
  if (uVar11 != uVar32) {
    uVar11 = uVar32;
    uVar36 = uVar32;
  }
  bVar6 = (byte)(uVar25 >> 8);
  bVar15 = (bVar5 & 0x1f) % 9;
  uVar7 = bVar5 | 0x80;
  uVar34 = uVar7 | (ushort)(byte)(((cVar19 << bVar15 |
                                   (byte)(CONCAT11(bVar6 < 0xc1,cVar19) >> 9 - bVar15)) - 9) -
                                 (CONCAT11((byte)(bVar6 + 0x3f) >> 1,(char)uVar25) < 0xdd04)) << 8;
  uVar10 = uVar10 - 1;
  uVar32 = uVar11 & 0xffff0000 | (uint)CONCAT11((char)(uVar11 >> 8) << 1,(char)uVar11);
  uVar25 = (uint)(ushort)((short)uVar36 + uVar34);
  uVar11 = uVar10 >> 1;
  lVar3 = (longlong)(int)uVar32 * (longlong)(int)uVar32;
  sVar8 = (short)lVar3 << ((byte)uVar7 & 0x1f);
  uVar32 = CONCAT22((short)((ulonglong)lVar3 >> 0x10),sVar8) & 0xffffff00 |
           (uint)(byte)((char)sVar8 << 1) | 1;
  uVar18 = uVar18 & 0xffff0000 |
           (uint)((ushort)-(ushort)((uVar34 >> (((ushort)uVar11 & 0xf00) >> 8) & 1) != 0) >> 1);
  uVar10 = (uVar11 & 0xff00 | (uint)(ushort)((ushort)(uVar10 >> 0x11) | 0x8000) << 0x10 | 0x4000 |
           (uint)(byte)((char)uVar11 * '\x02')) >> 1;
  bVar38 = uVar32 < uVar18;
  if (uVar32 != uVar18) {
    uVar32 = uVar18;
  }
  uVar11 = (((uint)(ushort)((ulonglong)lVar3 >> 0x30) << 0x10) << ((byte)uVar7 & 0x1f)) + 0x4d0d06f4
           + (uint)bVar38;
  uVar11 = uVar11 & ~(1 << (uVar11 & 0x1f));
  uVar36 = (uVar36 & 0xff800000) >> 7 | uVar25 << 0x19 |
           (uint)(ushort)((short)((uVar36 & 0xffff0000 | uVar25) >> 7) >> 1);
  uVar18 = uVar29 & 0xffff0000 |
           (uint)(ushort)(uVar7 | (ushort)(byte)((char)((uint)uVar34 >> 8) - (char)(uVar11 >> 8)) <<
                                  8);
  if ((int)uVar11 < 0x3864ea67) {
    uVar18 = uVar36;
  }
  bVar15 = (byte)uVar18;
  uVar7 = (ushort)uVar11 & 0xff11;
  bVar38 = 0x3864ea66 >= (int)uVar11;
  uVar29 = uVar10 + 0x1268efb0;
  uVar11 = (uVar32 & 0xffffff00 | (uint)(0x3864ea66 < (int)uVar11)) + 1 >> 1;
  bVar6 = (byte)((uint)(ushort)(((ushort)uVar18 & 0xff00 | (ushort)(byte)(bVar15 << 5 | bVar15 >> 3)
                                ) + 0x4a68) >> 8);
  bVar5 = bVar6 + 0x87;
  uVar4 = CONCAT21((short)(uVar18 >> 0x10),bVar5 - bVar38);
  iVar37 = (((uVar36 << (bVar15 & 0x1f) | uVar10 >> 0x20 - (bVar15 & 0x1f)) >> 1) + 0xaba5dd44) -
           (uint)(bVar6 < 0x79 || bVar5 < bVar38);
  uVar36 = (uVar29 & 0xffffff00 | (uint)(byte)((char)uVar29 >> 0xb)) + 0xefa54073;
  bVar38 = (uVar11 & 0x100) == 0;
  iVar22 = CONCAT31(uVar4,(bVar38 - (char)uVar36) + -1);
  uVar10 = ((uVar11 & 0xffff) - iVar22) - 1;
  uVar21 = (ushort)iVar37;
  uVar34 = (ushort)iVar22 | uVar21;
  bVar15 = (byte)uVar34;
  uVar29 = -(uVar10 & 0xffff0000 | (uint)(ushort)-(short)uVar10);
  uVar25 = -((uVar32 & 0xffff0000 | (uint)(ushort)(uVar7 << 1 | (ushort)((short)uVar7 < 0)) |
             CONCAT31(uVar4,bVar38)) << 1 | 1);
  bVar5 = bVar15 & 0xf;
  uVar7 = (ushort)((int)(uVar11 | 0x80000000) >> (bVar15 & 0x1f));
  iVar27 = (int)(uVar36 | 0xa5) >> 4;
  iVar22 = (int)(short)(uVar7 << bVar5 | uVar7 >> 0x10 - bVar5) * (int)(short)uVar21;
  uVar10 = CONCAT22(0x36bc,(short)((uint)iVar22 >> 0x10)) + 0xdffb19d3;
  uVar18 = iVar37 - iVar27;
  uVar7 = uVar34 >> 1 & 0xff0f;
  sVar13 = (sbyte)uVar7;
  uVar7 = (uVar7 | 0x8000) >> sVar13 | (short)uVar10 << 0x10 - sVar13;
  bVar15 = (byte)((ushort)iVar22 >> 1);
  bVar6 = bVar15 + 0x89;
  bVar5 = ((byte)uVar7 & 0x1f) % 9;
  cVar19 = (char)((uint)uVar7 >> 8);
  bVar5 = (byte)(CONCAT11(bVar15 < 0x77,cVar19) >> bVar5) | cVar19 << 9 - bVar5;
  cVar12 = (char)iVar27;
  bVar15 = cVar12 + 0x3b;
  cVar19 = bVar6 - bVar5;
  if (bVar5 <= bVar6 && cVar19 != '\0') {
    uVar29 = uVar29 & 0xffff0000 | uVar18 & 0xffff;
  }
  uVar11 = (short)uVar25 * -0x5ddd;
  bVar38 = (int)(short)uVar11 == uVar11;
  uVar7 = (ushort)(uVar29 << 0xd) | (ushort)(uVar29 >> 0x13);
  uVar34 = uVar7 << bVar38 | uVar7 >> 0x10 - bVar38;
  uVar32 = (uint)CONCAT11(!SCARRY1(cVar12,';'),cVar19) * (uVar18 & 0xffff);
  uVar10 = (uVar10 >> 8 & 0xffff00) << 8;
  uVar17 = uVar32 & 0xffff;
  bVar6 = (char)uVar11 * '~';
  uVar7 = (ushort)(uVar32 >> 0x10);
  uVar32 = (uint)(ushort)(uVar34 + uVar7);
  bVar5 = (bVar6 & 0x1f) % 9;
  cVar19 = (char)(uVar17 >> 8);
  uVar17 = (uint)CONCAT11((byte)(CONCAT11(CARRY2(uVar34,uVar7),cVar19) >> bVar5) |
                          cVar19 << 9 - bVar5,(char)uVar17);
  uVar11 = uVar25 & 0xff7f0000 | uVar11 & 0xffff;
  sVar8 = (short)(uVar36 >> 0x10);
  uVar7 = sVar8 >> 4;
  bVar5 = (char)(int3)((int)uVar36 >> 0xc) + (char)(uVar17 >> 8) + 1;
  bVar6 = bVar6 & 7;
  bVar6 = bVar5 >> bVar6 | bVar5 << 8 - bVar6;
  bVar5 = (byte)((uint)uVar34 >> 8) >> 1;
  uVar17 = uVar17 ^ 0xcee631b3;
  bVar38 = (uVar17 & 0x100) != 0;
  uVar36 = (uint)CONCAT11((byte)(uVar17 >> 8) >> 1,(char)uVar17);
  if (!bVar38) {
    uVar36 = CONCAT22(uVar7,CONCAT11(bVar6,bVar15));
  }
  bVar14 = bVar5 + 0x54;
  uVar25 = (uint)(bVar5 < 0xac || bVar14 < bVar38) << 0x10 | uVar36 & 0xffff;
  uVar36 = uVar32 | 0xc000;
  uVar25 = ((ushort)(uVar34 & 0xff | (ushort)(byte)(bVar14 - bVar38) << 8) & 0x3fff) << 0x10 |
           (uint)(ushort)((ushort)(uVar25 >> 0xe) | (ushort)(uVar25 << 3));
  bVar6 = bVar6 >> 1;
  uVar34 = (ushort)bVar15 << 9 | (ushort)uVar18 >> 7;
  bVar5 = (byte)(uVar25 % uVar36) | bVar6;
  uVar36 = CONCAT31((uint3)(byte)((char)(uVar25 / uVar36 >> 8) + 1),0x16);
  if ((char)bVar5 < '\0') {
    uVar36 = uVar18;
  }
  uVar29 = uVar29 << 0xd & 0xffff0000 | uVar32 | 0xc000;
  if (-1 < (int)uVar11) {
    uVar29 = uVar11 << 1 | (uint)((byte)((uint)(ushort)((bVar5 ^ uVar34) << 1) >> 8) & 1);
  }
  uVar11 = (uVar10 | (uint)(ushort)((ushort)uVar36 << 4 | (ushort)uVar36 >> 0xc) *
                     (uVar34 & 0x4ae716be) >> 0x10) >> 10;
  sVar24 = (short)(uVar18 * -0x34da18cc);
  uVar21 = sVar24 << 1 | (ushort)(sVar24 < 0);
  uVar18 = uVar18 * -0x34da18cc & 0xffff0000;
  uVar36 = uVar11 & 0xffff;
  iVar22 = -(uint)(ushort)((short)uVar11 + (short)CONCAT21(uVar7,bVar6) * 0x100);
  uVar11 = uVar34 & 0x4ae7143a ^ uVar36;
  bVar5 = (char)uVar36 << ((byte)uVar11 & 0x1f);
  uVar11 = uVar11 & 0x4b09527c;
  uVar34 = (short)((ushort)uVar29 | 1) >> 1;
  if (uVar11 != 0) {
    uVar34 = uVar21;
  }
  uVar11 = uVar11 - 0xb805;
  uVar36 = 0x82d9;
  iVar22 = (short)((CONCAT11((char)((uint)iVar22 >> 8) << 1,(char)iVar22) & 0xb80 | 0x100) << 4) *
           0x3728;
  uVar16 = (ushort)iVar22;
  if ((short)uVar16 == iVar22) {
    uVar36 = uVar11 & 0xffff;
  }
  uVar35 = (ushort)((char)bVar5 * -0x80) >> 8;
  uVar25 = (uint)(uVar34 & uVar21);
  iVar22 = (uVar29 & 0xffff0000 | uVar25) << 1;
  uVar34 = (ushort)((uVar10 & 0x3fc0000) >> 10) | (ushort)(byte)(bVar5 >> 1 | bVar5 << 7);
  sVar24 = uVar34 + 1;
  if (sVar24 == 0 || SCARRY2(uVar34,1) != sVar24 < 0) {
    uVar16 = uVar35;
  }
  uVar31 = sVar24 * 2 | (ushort)iVar22 >> 0xf;
  bVar5 = (byte)((ushort)(sVar24 * 2 & 0xffU | (ushort)(sVar24 < 0) << 8) >> 6);
  uVar10 = (ushort)(uVar16 << 1) - 1;
  uVar34 = (uVar35 ^ 0x800) + 0xc349;
  iVar27 = (int)((uint)uVar7 << 0x10 | uVar31 & 0xffffff00 |
                (uint)(byte)((byte)(bVar5 | (char)uVar31 << 3) >> 2 | bVar5 << 6)) >> 1;
  uVar35 = ((short)uVar21 >> 1) + 1;
  uVar16 = (ushort)uVar10;
  cVar12 = (char)(uVar34 >> 8);
  cVar28 = (char)((uint)iVar27 >> 8);
  cVar19 = cVar28 + cVar12;
  uVar21 = CONCAT11(cVar19 + (uVar16 < 0x58c4),(char)iVar27);
  uVar7 = uVar34;
  if (SCARRY1(cVar28,cVar12) != SCARRY1(cVar19,uVar16 < 0x58c4)) {
    uVar21 = uVar16 + 0xa73c;
    uVar7 = uVar16 + 0xa73c;
  }
  uVar29 = CONCAT22((ushort)(((uVar25 & 0x7f80) << 9) >> 0x10) | (ushort)((uVar25 << 0x19) >> 0x10),
                    (ushort)((uint)iVar22 >> 0x18) + 0xd377);
  if (0x4fae < uVar7 || (ushort)(uVar7 + 0xb051) == 0) {
    uVar29 = uVar18 | uVar35;
  }
  uVar11 = uVar11 & 0xab280000;
  uVar32 = CONCAT22(sVar8 >> 5,uVar21) & 0xffffff00 | (uint)(byte)((byte)uVar21 >> 5);
  bVar15 = (byte)(uVar7 + 0xb051);
  uVar25 = uVar11 | (ushort)(short)(char)bVar15;
  iVar22 = uVar32 + uVar25;
  uVar25 = (uint)(CONCAT14(CARRY4(uVar32,uVar25),iVar22) >> 0x11);
  uVar17 = uVar25 | iVar22 * 0x10000;
  bVar5 = bVar15 | (byte)(uVar34 & 0xff);
  uVar32 = uVar11 | (ushort)(short)(char)bVar15 & 0xffffff00;
  uVar30 = (uVar36 << 1 & 0xff0000) >> 8 | (uVar36 << 1 & 0xff00) << 8 | uVar36 << 0x19;
  uVar36 = (uint)(ushort)(uVar34 & 0xff | (ushort)(byte)(cVar12 >> (bVar15 & 0x1f)) << 8) <<
           (bVar5 & 0x1f);
  if (uVar36 != uVar30) {
    uVar36 = uVar30;
  }
  uVar26 = uVar36 & 0xffff0000 | (uint)CONCAT11((short)(ushort)uVar25 < -0x26b,(char)uVar36);
  uVar30 = uVar30 - 1;
  if (0xfd93 < (ushort)uVar25) {
    uVar30 = uVar17;
  }
  bVar15 = (byte)((int)(uVar32 | bVar5) >> 1);
  bVar5 = bVar15 & 0x1f;
  uVar33 = (uVar30 << 1) >> bVar5 | uVar26 << 0x20 - bVar5;
  uVar26 = ~uVar26;
  bVar5 = (byte)uVar26;
  uVar29 = uVar29 ^ 0x1f82;
  uVar30 = ~(uVar10 & 0xffff0000 | (ushort)((short)uVar36 >> 0xf) & 0xffffff00 |
            (uint)((char)(uVar36 >> 8) >> 7 & bVar5));
  uVar16 = CONCAT11((byte)(uVar30 >> 8) & (byte)(uVar25 >> 8),(byte)uVar30 & (byte)(uVar26 >> 8)) *
           0x2c58;
  uVar36 = (uVar18 | (uVar35 | uVar34)) << 6;
  bVar6 = (byte)uVar16;
  uVar17 = uVar17 + 0xa969ccd2;
  uVar18 = (uint)(ushort)((((ushort)uVar36 | (ushort)(uVar26 >> 0x1a)) + 0x6b4) -
                         (ushort)CARRY1(bVar15 * '\x10',bVar5));
  uVar25 = uVar36 & 0xffff0000 | uVar18;
  sVar8 = (short)uVar17;
  uVar7 = sVar8 << 1;
  uVar34 = (ushort)(sVar8 < 0);
  uVar21 = SEXT12((char)((byte)(int3)((int)uVar32 >> 9) ^ bVar6));
  uVar10 = 0;
  if (uVar25 != 0) {
    for (; (uVar25 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
    }
  }
  uVar36 = uVar36 & 0x7fff0000 | uVar18;
  uVar18 = (CONCAT11(((POPCOUNT(uVar7 & 0x11 | uVar34) & 1U) == 0) << 2,(char)uVar10) & 0x242b) * 2
           * uVar18;
  uVar35 = (ushort)(uVar18 >> 0x10);
  uVar10 = uVar18 & 0xffff | (uVar10 & 0x7fff0000) << 1;
  uVar35 = uVar35 & 0xff | (ushort)(uVar35 == 0) << 8;
  if (uVar10 != uVar36) {
    uVar10 = uVar36;
  }
  uVar9 = (short)(char)uVar10 * (short)(char)((byte)((uint)uVar7 >> 8) & 0x29);
  uVar31 = uVar21 + uVar35;
  if (!CARRY2(uVar21,uVar35) && uVar31 != 0) {
    uVar35 = (ushort)uVar10;
    uVar9 = uVar31;
  }
  bVar15 = (byte)((uVar33 & 0xffff0000) >> 0x1e);
  uVar25 = (uVar17 & 0xffff0000 |
           (uint)(ushort)((uVar7 & 0x2911 | uVar34) +
                         (ushort)((int)((uVar30 & 0xffff0000 | uVar16 & 0xffffff00 |
                                        (uint)(byte)(bVar6 + 0x71)) +
                                        (uVar26 & 0xffffff00 | (uint)(byte)(bVar5 + 0x81)) + 1) < 0)
                         )) >> bVar15;
  uVar11 = ((uint)(ushort)((int)uVar11 >> 0x11) << 0x12 | uVar33 >> 0x1e) << bVar15;
  bVar15 = (byte)(uVar11 >> 8) | 0xc0;
  uVar36 = ((uint)(uVar35 & 0x3fff) << 0x10 | 0x753f) / (uVar11 & 0xffff | 0xc000) & 0xffff;
  bVar5 = (byte)uVar11 & 7;
  bVar5 = bVar15 << bVar5 | bVar15 >> 8 - bVar5;
  uVar7 = CONCAT11(bVar5,(byte)uVar11);
  uVar18 = 0;
  if ((uVar36 | 0x1c3a0000) != 0) {
    for (; ((uVar36 | 0x1c3a0000) >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
    }
  }
  uVar34 = (short)(char)uVar36 * (short)(char)(uVar36 >> 8);
  uVar35 = uVar34 & 0x3fff | 0xc0;
  uVar34 = uVar34 & 0xff | 0xc0;
  uVar31 = (short)(uVar10 + 1) << 1 | (ushort)uVar18 >> 0xf;
  uVar32 = uVar10 + 1 & 0xffff0000 | (uint)uVar31;
  uVar16 = uVar7 >> 1;
  uVar7 = uVar7 << 0xf;
  uVar9 = (ushort)((uVar33 & 0xffff0000 | (uint)uVar9) >> 4);
  uVar10 = (uVar29 & 0xfffe0000 | 0x2000000) >> 1 | (uint)((uVar29 & 1) != 0) << 0x1f;
  bVar15 = (char)uVar16 + 0x10;
  uVar21 = (ushort)((bVar5 & 0xfe) << 8) >> 1 | uVar7 | (ushort)bVar15;
  uVar36 = ((ushort)(uVar35 / uVar34 & 0xff | uVar35 % uVar34 << 8) | 0x1c3a0000) & uVar32;
  uVar34 = uVar9 * -0x7b4f - (ushort)(((ushort)uVar18 >> 10 & 1) != 0);
  if (((uVar10 | uVar34) & 0x6883be94) == 0) {
    uVar36 = uVar36 & 0xffff0000 | (uVar16 | uVar7) & 0xff00 | (uint)bVar15;
  }
  bVar15 = (byte)((int)(uVar36 & 0xffff0000 | (uint)(ushort)((short)uVar36 + uVar34)) >> 0x16);
  uVar36 = (uint)(ushort)(uVar9 * 2 | uVar9 >> 0xf);
  uVar7 = uVar21 >> 1;
  bVar5 = ((byte)uVar7 & 0x1f) % 9;
  uVar31 = ((byte)((bVar15 | 0xa5) << bVar5 |
                  (byte)((ushort)(bVar15 | 0xa5 | (ushort)((uVar25 & 0x100) != 0) << 8) >> 9 - bVar5
                        )) | 0xd000) * uVar31;
  uVar21 = uVar21 >> 4;
  uVar7 = uVar7 << 0xd | uVar21;
  iVar22 = (int)(short)uVar31 * (int)(short)uVar7;
  uVar17 = (uVar33 & 0xfff00000) >> 4 | (uVar29 >> 1) << 0x1c | uVar36 | 1 << (uVar36 & 0x1f);
  uVar16 = uVar21 & 0xff;
  uVar36 = (uint)(ushort)(uVar16 | (ushort)(byte)((char)((uint)uVar7 >> 8) >> ((byte)uVar21 & 0x1f))
                                   << 8);
  uVar7 = (ushort)((uint)iVar22 >> 0x10) & 0xff;
  uVar29 = uVar10 | (ushort)(uVar34 * 0x100) | uVar11 & 0xffff0000 | uVar36;
  uVar10 = (ushort)(uVar7 | uVar31 * 0x100) & 0xffff01ff;
  cVar19 = (char)(uVar10 >> 8) + -0x56;
  uVar29 = uVar29 & 0xffff0000 |
           (uint)(ushort)((uVar7 | (ushort)(byte)~(byte)((uint)iVar22 >> 0x18) << 8) + 0x939d +
                         (short)uVar29 * 2);
  if (cVar19 < '\0') {
    uVar29 = uVar17;
  }
  uVar30 = (uint)(byte)(((char)(uVar34 >> 4) >> ((byte)uVar16 & 0x1f)) + 0x44);
  uVar7 = -(uVar16 | (ushort)(byte)((char)(uVar36 >> 8) + 0x41) << 8);
  uVar36 = uVar29 + 0xfcf2efc3 ^
           (int)(uVar18 & 0xffff0000 | (uint)CONCAT11(cVar19,(char)uVar10)) >> ((byte)uVar16 & 0x1f)
  ;
  lVar3 = (ulonglong)
          (((CONCAT22((short)uVar34 >> 0xf,uVar34 * 0x1000 | uVar34 >> 4) & 0xffffff00 | uVar30) >>
            2 | uVar30 << 0x1e) * (uVar11 & 0xffff0000 | (uint)uVar7)) * (ulonglong)uVar36;
  uVar18 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar10 = uVar18 >> 1;
  uVar11 = (uVar17 ^ 0x800) + 1;
  bVar5 = (byte)(uVar18 >> 0x13);
  uVar10 = (uVar10 & 0xfc000000 | (uint)((char)lVar3 < '\0') << 0x1f) >> 0x12 | uVar10 << 0xe |
           (uint)(byte)(bVar5 >> 4 | bVar5 << 4);
  uVar21 = (short)uVar10 + 0x73 + (short)uVar36 * 4;
  uVar34 = (ushort)((int)(((uVar31 & 0xffffff00 | uVar25 & 0xffff0000 |
                           (uint)(byte)((byte)uVar31 >> 1)) + 0xa3166027) * 4 | uVar17 >> 0x1e) >> 1
                   );
  cVar19 = (char)((uint)uVar7 >> 8) + '%';
  uVar7 = CONCAT11(cVar19,(char)uVar7 + 'f');
  if ((POPCOUNT(cVar19) & 1U) == 0) {
    uVar34 = uVar7 & 0xfffe;
  }
  uVar29 = (uVar32 & 0x3fffc000) << 2;
  uVar18 = uVar29 | (ushort)((short)(char)uVar36 << 4 |
                            (ushort)(CONCAT12((uVar34 >> 1 & 1) != 0,(short)(char)uVar36) >> 0xd));
  uVar10 = uVar10 | 0xc0;
  uVar34 = (ushort)(byte)uVar10;
  uVar34 = 0xdb / uVar34 | 0xdbU % uVar34 << 8;
  uVar16 = (ushort)uVar10;
  if ((short)uVar16 < (short)uVar34) {
    uVar36 = uVar36 & 0xffff0000 | (uint)(uVar7 & 0xfffe);
  }
  bVar38 = (int)uVar11 < 0;
  uVar10 = (uVar11 & 0xffff0000 | (uint)uVar21) << 1;
  uVar7 = (ushort)uVar10 | 1;
  uVar35 = uVar7 >> bVar38 | uVar7 << 0x10 - bVar38;
  sVar8 = (short)((uVar10 & 0xffff0000 | (uint)uVar35) >> 0xc) >> bVar38;
  uVar35 = uVar35 + 1;
  uVar7 = sVar8 * sVar8;
  bVar5 = (byte)((uint)uVar7 >> 8);
  uVar36 = uVar36 + 1;
  uVar25 = (uint)(ushort)(uVar34 ^ (ushort)(uVar34 != uVar16) *
                                   (uVar34 ^ uVar16 ^ (ushort)(uVar34 == uVar16) * (uVar16 ^ uVar21)
                                   )) << 0x14 | ((uVar11 & 0x78000000) << 1) >> 0xc |
           (uint)(ushort)(uVar7 & 0xff | (ushort)(byte)(bVar5 << 7 | bVar5 >> 1) << 8) | 0xa00413c6
           | 1 << (uVar36 & 0x1f);
  uVar10 = uVar36 + uVar25 & 0xffff0000;
  uVar11 = ((uint)uVar35 - (uint)CONCAT11((short)uVar35 < 0,bVar38)) * 0x4aa711b & 0xffff;
  bVar15 = (byte)uVar11;
  bVar5 = (char)~(byte)uVar25 >> (bVar15 & 0x1f);
  uVar7 = (ushort)(uVar18 >> 0xe);
  return (uVar25 & 0xffffff00 | (uint)(byte)(bVar5 >> (bVar15 & 7) | bVar5 << 8 - (bVar15 & 7))) +
         (uVar10 | CONCAT11((char)(uVar11 >> 8) << (bVar15 & 0x1f),bVar15)) + (uVar10 | uVar11) +
         uVar18 * 2 + uVar36 +
         ((uVar29 & 0xc0000000) >> 0xe |
         (uint)(ushort)(uVar7 << (bVar15 & 0xf) | uVar7 >> 0x10 - (bVar15 & 0xf))) * 0x8000 +
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
  uint uVar5;
  byte bVar6;
  uint3 uVar7;
  byte bVar8;
  byte bVar9;
  sbyte sVar10;
  ushort uVar11;
  ushort uVar12;
  short sVar13;
  byte bVar16;
  int iVar14;
  uint uVar15;
  ushort uVar17;
  char cVar19;
  uint uVar18;
  byte bVar20;
  ushort uVar21;
  ushort uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ushort uVar29;
  short sVar30;
  ushort uVar31;
  short sVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  bool bVar36;
  
  for (iVar14 = 0x1f; 0xdbf60a3U >> iVar14 == 0; iVar14 = iVar14 + -1) {
  }
  uVar25 = iVar14 << 1;
  uVar15 = 0x31a9a6e1 - (uVar25 | 1);
  uVar4 = (CONCAT14(0x31a9a6e1 < (uVar25 | 1),300) | 0x8f5d0000) >> 3;
  uVar29 = (ushort)uVar4;
  uVar18 = (uint)uVar4 & 0xffff0000;
  uVar24 = uVar25 & 0xff | 0xa51e0301;
  uVar11 = (ushort)uVar15;
  uVar12 = (ushort)uVar24;
  bVar36 = CARRY2(uVar11,uVar12);
  uVar11 = uVar11 + uVar12;
  uVar15 = uVar15 & 0xffff0000;
  if (!bVar36 && uVar11 != 0) {
    uVar24 = uVar25 & 0xffffff00;
  }
  uVar25 = ((ushort)(bVar36 + 0xc75d) | 0x8f5d0000) -
           (uVar18 | (ushort)(uVar29 << 0xe | uVar29 >> 2));
  uVar23 = (CONCAT11(-1 << ((byte)uVar11 & 0x1f),0xff) | 0xffff0000) << 7;
  uVar29 = (ushort)uVar23 & 0xff00 | (ushort)(byte)((char)uVar23 >> ((byte)uVar11 & 0x1f));
  bVar8 = (byte)(uVar11 >> 1);
  bVar6 = bVar8 & 0x1f;
  uVar26 = uVar25 >> bVar6 | uVar25 << 0x21 - bVar6;
  uVar11 = uVar29 - 1;
  uVar25 = 0x24a91747;
  if (uVar11 == 0 || (short)uVar29 < 1) {
    uVar25 = uVar23 & 0xffff0000 | (uint)uVar11;
  }
  bVar6 = (byte)((int)uVar24 >> (bVar8 & 0x1f));
  if (uVar11 == 0) {
    bVar6 = (byte)uVar26;
  }
  uVar24 = 0x1f;
  if (uVar11 >> 8 != 0) {
    for (; (ushort)((uVar11 >> 8) >> uVar24) == 0; uVar24 = uVar24 - 1) {
    }
  }
  uVar28 = (uint)(ushort)((ushort)((bVar6 & 0xe2) != 0) << 8 | 0x3d);
  uVar18 = (CONCAT22((short)(uVar18 >> 0x10),0xb17a) & 0xffff0000 | uVar28) << 9;
  uVar28 = uVar24 & 0xffff0000 | (uVar28 & 0x7f) << 9 | uVar18 >> 8 & 0xff;
  uVar18 = (int)(char)((ulonglong)
                       ((longlong)(int)((uVar24 & 0xffff | uVar18 & 0xffff0000) * uVar26 >> 1) *
                       (longlong)(int)uVar15) >> 0x20);
  if (!SCARRY4(uVar26,1)) {
    uVar18 = uVar15;
  }
  uVar27 = uVar23 & 0xffff0000 | (uint)(uVar11 ^ 0x40);
  uVar29 = (short)uVar25 << 1;
  bVar36 = (short)uVar25 < 0 != (short)uVar29 < 0;
  uVar33 = (uint)bVar36 << 8;
  uVar23 = uVar27 << 1;
  uVar23 = (uVar23 & 0xffff0000 |
           (uint)CONCAT11((byte)(uVar23 >> 8) >> 1 | ((int)uVar27 < 0) << 7,(char)uVar23)) >> 1 |
           (uint)(0xae881665 < uVar26 + 1) << 0x1f;
  if ((uVar25 & 0xffff0000 | (uint)uVar29) != 0xd4fa899) {
    uVar23 = uVar26 + 0x5177e99b;
  }
  uVar25 = 0x1f;
  if (uVar28 != 0) {
    for (; uVar28 >> uVar25 == 0; uVar25 = uVar25 - 1) {
    }
  }
  if (uVar28 == 0) {
    uVar18 = uVar18 & 0xffff0000 | uVar33;
  }
  uVar26 = 0x1f;
  if (uVar25 != 0) {
    for (; uVar25 >> uVar26 == 0; uVar26 = uVar26 - 1) {
    }
  }
  uVar11 = bVar36 + 0x98ed;
  uVar25 = (uint)uVar11 << 0x1d;
  uVar11 = uVar11 >> 3;
  sVar30 = (short)uVar26 * 2;
  uVar28 = uVar26 & 0xffff0000;
  uVar22 = (ushort)uVar18;
  uVar12 = (ushort)uVar33;
  uVar17 = uVar22 ^ (ushort)(uVar11 == uVar22) * (uVar22 ^ uVar12);
  uVar21 = (short)uVar23 + sVar30 + 1;
  uVar12 = uVar12 + 0xe7d;
  uVar29 = uVar21 + (ushort)((uVar24 & 0xffff0000) >> 0x19);
  uVar31 = sVar30 + 0x77da;
  bVar8 = (byte)((uint)uVar12 >> 8);
  bVar6 = ((byte)uVar12 & 0x1f) % 9;
  bVar20 = -(char)uVar29;
  uVar12 = CONCAT11(0xda,(byte)((ushort)(uVar12 & 0xff |
                                        (ushort)(0x6e < bVar8 || 0xfe < (byte)(bVar8 + 0x91)) << 8)
                               >> bVar6) | (byte)uVar12 << 9 - bVar6);
  uVar24 = (uint)uVar12;
  uVar33 = ((ushort)(uVar11 ^ (ushort)(uVar11 != uVar22) * (uVar11 ^ uVar17)) >> 1 | 0x80000000) ^
           0x4609;
  uVar23 = (uVar23 & 0xffff0000 | (uint)(uVar29 >> 9) << 8 | (uint)bVar20) ^ 0xf300;
  uVar18 = (uVar18 & 0xffff0000 | (uint)uVar17) + (uint)uVar21 * -2 & 0xffff0000;
  if ((uVar33 & 0xfd29) == 0) {
    uVar18 = uVar33;
  }
  uVar15 = uVar15 | uVar24 & 0xffffff00;
  bVar16 = ~(byte)(((uVar15 & 0x7fff9a2f) << 1) >> 8);
  uVar27 = (uVar25 | (ushort)((uVar11 + 0x93b7) - (ushort)((short)uVar26 < 0))) & 0xddc09ccc;
  uVar29 = uVar31 | (ushort)uVar23;
  bVar8 = 0xe - (char)((int)uVar28 >> 0x1f);
  uVar26 = (uVar31 & 0xffffff00 | (uint)(byte)((char)uVar31 + 1)) ^ 0x1d;
  bVar6 = bVar8 % 0x11;
  uVar26 = (uint)(ushort)((ushort)(uVar26 >> bVar6) | (ushort)(uVar26 << 0x11 - bVar6));
  uVar33 = (uVar33 >> 8 & 0xffff00) << 8 | uVar26;
  bVar8 = bVar8 & (byte)(uVar26 >> 8);
  uVar26 = uVar23 & 0xffffff00 | 0x4000 | (uint)(byte)(bVar20 + 0x65);
  uVar18 = CONCAT22((short)(uVar18 >> 0x10),0xd1e9);
  iVar14 = uVar33 - uVar18;
  if (uVar33 != uVar18) {
    uVar33 = uVar18;
  }
  if (-1 < iVar14) {
    uVar26 = uVar23 & 0xffff0000 | uVar33 & 0xffff;
  }
  bVar20 = (byte)uVar33;
  bVar9 = bVar8 ^ (bVar20 == bVar8) * (bVar8 ^ (byte)(uVar26 >> 8));
  bVar6 = bVar20 ^ (bVar20 != bVar8) * (bVar20 ^ bVar9);
  uVar18 = (uint)CONCAT11(((byte)(bVar16 + 0x70) >> 2 | bVar16 << 6) << 1,bVar9);
  if ((uVar33 >> (uVar33 & 0x1f) & 1) == 0) {
    uVar27 = uVar25 & 0xddc00000 | uVar18;
  }
  uVar29 = (uVar29 << 1 | (ushort)((short)uVar29 < 0)) + 0x7df6;
  uVar23 = uVar28 | uVar29;
  uVar25 = uVar33 - uVar24;
  if (uVar33 < uVar24 || uVar25 == 0) {
    uVar25 = uVar25 & 0xffff0000 | (uint)uVar29;
  }
  iVar14 = ((uVar15 & 0x7fff8000) << 1 | uVar18) << (bVar9 & 0x1f);
  bVar16 = (byte)iVar14;
  uVar11 = ((short)(char)((ushort)((ushort)uVar33 & 0x3f00 | (ushort)bVar6) /
                         (ushort)(byte)((byte)((uVar26 & 0xffffff00) >> 8) | 0xc0)) & 0x1d71U) >>
           (bVar16 & 0x1f);
  uVar15 = uVar27 >> 0x13 | uVar27 << 0xd;
  if (-1 < (char)((byte)uVar25 | 0x9b)) {
    uVar15 = uVar23;
  }
  uVar22 = (((ushort)(uVar26 & 0xffffff00) | (ushort)(byte)((char)uVar26 + bVar6 + (bVar20 < bVar8))
            | 0xc000) & 0xa5ff) + 0x9555;
  if ((uVar29 | 0xd54b) != 0) {
    uVar15 = uVar24;
  }
  bVar16 = bVar16 & 0x1f;
  uVar18 = (uVar25 | 0x9b) << bVar16 | (uVar25 | 0x9b) >> 0x20 - bVar16 | 0x58e298ba;
  uVar25 = uVar15 >> 1;
  uVar21 = (short)iVar14 + (ushort)uVar25 + (ushort)((uVar15 & 1) != 0);
  cVar19 = (char)uVar22;
  bVar8 = (byte)uVar21;
  bVar6 = (bVar8 & 0x1f) % 9;
  uVar17 = CONCAT11(cVar19,cVar19 >> 1) & 0x1ff;
  bVar20 = (byte)(uVar17 >> bVar6) | (byte)(uVar17 << 9 - bVar6);
  uVar22 = uVar22 & 0xff00 | (ushort)bVar20;
  uVar17 = uVar29 | 0xd54b | uVar22;
  uVar29 = uVar11 & 0xff |
           (ushort)(byte)((byte)((uint)(ushort)(uVar11 << 8) >> 8) & (byte)uVar18) << 8;
  uVar11 = uVar17 ^ (ushort)(uVar29 == uVar17) * (uVar17 ^ uVar12 << 1);
  uVar29 = uVar29 ^ (ushort)(uVar29 != uVar17) * (uVar29 ^ uVar11);
  bVar6 = (char)uVar29 - 1;
  uVar15 = uVar28 | uVar11;
  if ((bVar6 & 1) != 0) {
    uVar15 = uVar25 | (uVar23 | 0xd54b) << 0x1f;
  }
  uVar11 = uVar21 & 0xff00 | (ushort)(byte)(bVar8 + 0x71);
  uVar7 = (uint3)((uint3)(uVar33 >> 8) & 0xd2b00 | (uint3)(byte)(uVar29 >> 8)) >> 1 |
          (uint3)(((uint)((bVar6 & 2) != 0) << 0x1f) >> 8);
  iVar14 = CONCAT31(uVar7,0x3e);
  uVar17 = SEXT12((char)bVar20);
  uVar29 = uVar11 + uVar17;
  cVar19 = (char)uVar29;
  uVar24 = ((uVar26 & 0xffff0000 | (uint)(ushort)(uVar22 + 0x9601)) - iVar14) -
           (uint)(0x11 < (byte)(cVar19 + 1U) ||
                 CARRY1(cVar19 - 0x11,CARRY2(uVar11,uVar17) || 0xfffe < uVar29));
  uVar29 = (ushort)uVar25 ^ 0x2000;
  uVar23 = uVar15 << 0xc | uVar15 >> 0x14;
  uVar11 = uVar29 << 2 | (ushort)((uVar24 & 0x100) != 0);
  uVar1 = (ulonglong)(uVar12 & 0x7fff | 0xc0000000);
  uVar2 = CONCAT44(uVar18 & 0xffff0000 | uVar17 & 0xffffff00 |
                   (uint)(byte)((bVar20 - (char)(uVar24 >> 8)) - 1),
                   uVar24 & 0xffff | (uint)(ushort)(uVar7 >> 8) << 0x10) & 0x3fffffffffffffff;
  uVar18 = 0;
  if (uVar23 != 0) {
    for (; (uVar23 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
    }
  }
  uVar1 = CONCAT44((int)(uVar2 % uVar1),(int)(short)(uVar2 / uVar1)) & 0x3fffffffffffffff;
  uVar2 = uVar1 / (uVar18 | 0xc0000000);
  uVar26 = (uint)uVar2;
  uVar1 = uVar1 % (ulonglong)(uVar18 | 0xc0000000);
  uVar12 = (uVar12 & 0x7fff) * 2;
  cVar19 = (char)(uVar18 >> 8);
  if (!SBORROW1(cVar19,-0x7d)) {
    uVar26 = (uint)(ushort)(uVar2 >> 0x10) << 0x10;
  }
  uVar28 = CONCAT11(cVar19 + '}',(char)uVar18) & 0xffffff0f;
  uVar17 = (ushort)uVar1;
  uVar22 = (ushort)((short)uVar24 + (short)iVar14 & 0xff00U | (ushort)(byte)uVar26) >> (sbyte)uVar28
           | uVar17 << 0x10 - (sbyte)uVar28;
  uVar33 = uVar23 << 4 | (uVar15 << 0xc) >> 0x1c;
  uVar15 = uVar26 & 0xffff0000 | uVar22 & 0xffffff00 |
           (uint)(byte)((char)uVar22 - (char)(uVar28 >> 8));
  uVar23 = (uVar18 & 0xffff0000 | 0xc0000000 | uVar28) + uVar15;
  uVar22 = uVar17 ^ (ushort)(uVar11 == uVar17) * (uVar17 ^ uVar11);
  uVar18 = ((uint)((uint3)(uVar24 >> 8) & 0xffff00) | (uint)!SBORROW2(uVar11,uVar17)) * 0x100;
  iVar14 = uVar18 - uVar23;
  uVar28 = (((uVar25 & 0xffff0000 | uVar29 & 0x7fff8000) << 1 |
            (uint)(ushort)(uVar11 + ((short)uVar15 >> 1))) - uVar33) - (uint)(uVar18 < uVar23);
  uVar33 = (uVar33 - (uVar12 | 0xc0000000)) - (uint)(uVar23 < 0xd84ddcd7);
  uVar24 = (uVar26 & 0xffff0000 |
           (uint)(ushort)((uVar11 ^ (ushort)(uVar11 != uVar17) * (uVar11 ^ uVar22)) + 0x248d)) + 1;
  sVar30 = (short)uVar24;
  uVar29 = sVar30 << 1 | (ushort)uVar23 >> 0xf;
  uVar11 = (uVar12 + 0xee39) - (ushort)(sVar30 < 0);
  uVar15 = (uint)((uVar11 & 1) != 0);
  uVar25 = uVar28 + 0x4c78cdb3;
  uVar18 = uVar25 - uVar15;
  if ((POPCOUNT(uVar18 & 0xff) & 1U) != 0) {
    uVar18 = uVar23;
  }
  bVar8 = ((char)uVar29 + -0x2e) - (uVar28 < 0xb387324d || uVar25 < uVar15);
  uVar12 = CONCAT11(bVar8 == 0,(byte)uVar23);
  bVar6 = (byte)uVar23 & 0xf;
  uVar15 = (uVar23 & 0xffff0000 | (uint)(ushort)(uVar12 << bVar6 | uVar12 >> 0x10 - bVar6)) + 1;
  bVar6 = (byte)uVar15 & 0xf;
  uVar12 = (ushort)uVar15 >> bVar6 | (ushort)uVar15 << 0x10 - bVar6;
  uVar25 = (uVar24 & 0xffff0000 | uVar29 & 0xffffff00 | (uint)bVar8) >> ((byte)uVar12 & 0x1f);
  uVar24 = ~(uVar15 & 0xffff0000 | (uint)uVar12);
  uVar12 = (ushort)uVar24;
  uVar29 = uVar12 + 0x9278;
  bVar8 = (byte)uVar29;
  bVar6 = bVar8 & 0x1f;
  uVar15 = (uint)(CONCAT14(0x6d87 < uVar12,uVar18) >> bVar6) | uVar18 << 0x21 - bVar6;
  uVar23 = (int)(uVar33 & 0xffff0000 | (uint)(ushort)((short)uVar33 * -0x3382)) >> (bVar8 & 0x1f);
  uVar12 = (short)uVar15 + 1;
  uVar18 = uVar15 & 0xffff0000 | (uint)uVar12;
  uVar15 = uVar11 ^ 1 | 0xc0000000;
  if ((POPCOUNT(uVar12 & 0xff) & 1U) != 0) {
    uVar15 = uVar23;
  }
  uVar17 = (ushort)(uVar18 << 1) | (ushort)((int)uVar18 < 0);
  uVar11 = (ushort)iVar14;
  uVar18 = ((uVar24 & 0xffff0000 | (uint)uVar29) +
            (uVar15 & 0xffff0000 | (uint)((ushort)uVar15 & uVar11)) + 1) * 2;
  uVar15 = ((int)(short)((uVar25 & 0xffff0000 |
                         (uint)(ushort)((short)(char)(byte)uVar25 *
                                       (short)(char)((byte)uVar25 | 0x7e))) >> 1) *
            (int)(short)uVar17 & 0xffffU) * (uint)(uVar11 | 0x7600);
  uVar29 = (short)(char)(uVar15 & 0xffff) * (short)(char)((uVar15 & 0xffff) >> 8);
  uVar12 = (ushort)(uVar15 >> 0x10) & 0xff | (ushort)(byte)~(byte)(uVar15 >> 0x18) << 8;
  uVar11 = ((ushort)uVar18 | 1) + 0xc4eb;
  bVar6 = (byte)uVar11 & 0xf;
  iVar14 = (-CONCAT22((short)(uVar1 >> 0x10),uVar22) & 0xffff0000U | (uint)uVar12) + 0xbab4d5ef +
           ((uVar25 >> 0x11) << 0x10 |
           (uint)(ushort)((uVar29 & 0xff |
                          (ushort)(byte)((char)((uint)uVar29 >> 8) + (char)iVar14) << 8) << bVar6 |
                         uVar12 >> 0x10 - bVar6)) * 2;
  uVar22 = (ushort)iVar14 & 0xff;
  uVar29 = uVar11 & 0xf | (ushort)(byte)((uint)uVar12 >> 8) << 8;
  uVar12 = uVar22 * -0x2aa2 & 0xff | uVar22 * 0x5e00;
  uVar11 = (short)(char)((uint)iVar14 >> 8) << 1;
  uVar22 = uVar29 + 0x72 + uVar12 * 8;
  uVar15 = uVar18 & 0xffff0000 | (uint)uVar29 | 0xfd4a53ed;
  bVar36 = ((ushort)((ushort)uVar23 | 0x989d) >> (uVar22 & 0xf) & 1) != 0;
  bVar8 = (byte)((uint)uVar12 >> 8);
  bVar6 = bVar8 + 0xb1;
  uVar18 = -(uint)(bVar8 < 0x4f || bVar6 < bVar36);
  uVar15 = (uVar15 & 0xffffff00 | (uint)(byte)(((char)uVar15 - (char)uVar18) - 1)) + 1;
  uVar29 = (uVar11 & 0xff00 | (ushort)(byte)-(char)uVar11) & ~(ushort)(1 << (uVar22 & 0x1f));
  uVar15 = ((uVar15 & 0xffff0000 | (uint)(ushort)((short)uVar15 * -0x4b2b)) & 0x7fffffae) << 1;
  bVar8 = (byte)uVar15 & 0x1f;
  uVar23 = ((uVar17 & 0x7fff8000) << 1 | (uint)(uVar22 & 0xfbff)) << bVar8 | uVar15 >> 0x20 - bVar8;
  uVar24 = (uint)CONCAT21((ushort)((ushort)((uint)iVar14 >> 0x11) |
                                  (ushort)(((uint)((bVar6 - bVar36 & 1) != 0) << 0x1f) >> 0x10)) >>
                          1,0xff) << 8;
  uVar15 = (ushort)(uVar29 * uVar29 * -0x3da2) + 0x15cdd6f0;
  uVar25 = 0;
  if (uVar15 != 0) {
    for (; (uVar15 >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
    }
  }
  uVar24 = uVar24 & 0xffff0000 | (uint)(ushort)((ushort)uVar24 | 1);
  uVar15 = 0;
  if ((uVar25 & 0xffff0000) != 0) {
    for (; ((uVar25 & 0xffff0000) >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
    }
  }
  uVar26 = (uVar23 >> 0x10) << 0x1b;
  uVar11 = (ushort)(uVar23 >> 0x15);
  sVar30 = (short)uVar15 + -0xa3;
  bVar6 = (byte)sVar30 & 0xf;
  uVar29 = 0xff << bVar6 | 0xffU >> 0x10 - bVar6;
  sVar13 = sVar30 * 0x4bfe;
  uVar33 = uVar24 - 1;
  bVar8 = (byte)((uint)uVar29 >> 8);
  bVar6 = (byte)uVar29 ^ 0x6f;
  uVar11 = (uVar11 | 1 << (uVar11 & 0xf)) + 1;
  uVar23 = (uint)uVar11;
  uVar27 = uVar26 | uVar23;
  uVar28 = (uint)(ushort)((uVar29 & 0xff | (ushort)(byte)(bVar8 + bVar6) << 8) ^ 0x6f);
  uVar24 = (uVar24 - uVar27) - (uint)CARRY1(bVar8,bVar6);
  uVar25 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8;
  sVar32 = (short)uVar25;
  uVar18 = (uint)(ushort)(sVar30 * -0x6804 & 0xffU | (ushort)(sVar13 < 0) |
                         (ushort)(byte)((char)((uint)(ushort)(sVar30 * -0x6804) >> 8) + -0x46 +
                                       (sVar13 < 0)) << 8);
  if ((byte)((char)bVar8 >> ((byte)sVar13 & 0x1f) & (char)(uVar33 >> 8) + 0x42U) == 0) {
    uVar18 = uVar25;
  }
  cVar19 = (char)(uVar24 >> 8) * '\x02' + (0x72 < (byte)uVar24);
  uVar29 = (ushort)(CONCAT12(sVar32 != 0,-sVar32) >> 9) | sVar32 * -0x100;
  if (cVar19 < '\0') {
    uVar29 = CONCAT11(cVar19,(byte)uVar24 + 0x8d);
  }
  iVar14 = (uVar24 & 0xffff0000 | (uint)((ushort)(short)(char)bVar8 >> 8)) -
           (uVar15 & 0xffff0000 | uVar18);
  uVar24 = (short)uVar29 * -0x2ad5;
  uVar1 = (CONCAT44(iVar14,(int)((ushort)((uVar11 & 0xff) * (ushort)(byte)iVar14) + 0x212fad42 +
                                 (uint)((int)(short)uVar24 != uVar24) ^ 2) >> 0xb) &
          0x3fffffffffffffff) / (ulonglong)(uVar27 | 0xc0000000);
  uVar25 = (int)(short)uVar1 * (int)(short)uVar18;
  bVar8 = (byte)uVar18;
  bVar6 = (bVar8 & 0x1f) % 9;
  cVar19 = (char)((uVar25 & 0xffff) >> 8);
  uVar26 = uVar26 | 0xc0000000;
  uVar25 = (uVar25 & 0x3fff0000 |
           (uint)CONCAT11((byte)(CONCAT11((int)(short)uVar25 != uVar25,cVar19) >> bVar6) |
                          cVar19 << 9 - bVar6,(char)(uVar25 & 0xffff))) % (uVar23 | 0xc000);
  bVar6 = (bVar8 & 0x1f) % 0x11;
  uVar18 = (uint)((byte)uVar25 < 0x2b) << 0x10 | uVar23 | 0xc000;
  uVar22 = (ushort)(uVar18 >> bVar6) | (ushort)(uVar18 << 0x11 - bVar6);
  uVar12 = CONCAT11(~((byte)(uVar33 >> 0x1c) | (byte)(((uVar33 & 0xffff00ff) << 0xc) >> 8)),
                    (char)(uVar33 >> 0x14)) >> (bVar8 & 0x1f);
  iVar14 = (uVar15 & 0xffff0000 | (uint)CONCAT11((char)(uVar25 >> 8),bVar8)) * -0x2e7d7d37;
  bVar6 = (byte)(iVar14 >> 0x1f);
  uVar15 = (((uVar28 & 0xff00) << 8 | uVar28 << 0x18 | uVar24 & 0xffff) & ~(1 << (uVar22 & 0x1f)))
           >> (bVar6 & 0x1f);
  uVar25 = (uVar15 >> (bVar6 & 0x1f) | uVar15 << 0x20 - (bVar6 & 0x1f)) << 1;
  uVar29 = (ushort)uVar25;
  bVar20 = -1 < (char)(bVar6 & (byte)uVar12) | 0xc0;
  lVar3 = (longlong)(int)(uVar27 * -0x87f6e7d) * -0x32f52f03;
  iVar35 = (int)lVar3;
  sVar30 = (short)((uint)iVar14 >> 0x10);
  sVar13 = sVar30 >> 0xf;
  uVar11 = sVar13 << 1 | (ushort)(iVar35 != lVar3);
  iVar14 = CONCAT22(sVar30 >> 0x1f,uVar11);
  bVar6 = (byte)uVar11 & 0x1f;
  uVar28 = (uint)(CONCAT14(sVar13 < 0,iVar14) >> bVar6) | iVar14 << 0x21 - bVar6;
  bVar36 = (uVar22 & 1) != 0;
  uVar18 = (uVar26 | uVar22) >> 1;
  uVar24 = (uint)bVar36 << 0x1f;
  bVar6 = (byte)uVar28;
  bVar8 = bVar6 & 0xf;
  uVar11 = (ushort)uVar18;
  uVar23 = CONCAT22((short)(uVar1 >> 0x10),
                    (CONCAT11((char)((uVar12 & 0x3fff) % (ushort)bVar20),
                              ((uVar26 & 0x80000000) != 0) != bVar36) & 0x7fff | 0x8000 | uVar12) <<
                    bVar8 | uVar11 >> 0x10 - bVar8) * iVar35;
  uVar15 = 0x1f;
  if (bVar20 != 0) {
    for (; bVar20 >> uVar15 == 0; uVar15 = uVar15 - 1) {
    }
  }
  uVar17 = (ushort)bVar20;
  uVar12 = (short)uVar15 - uVar17;
  uVar18 = iVar35 - (uVar18 | uVar24);
  bVar9 = (byte)uVar12;
  bVar20 = (byte)((uint)uVar12 >> 8);
  bVar16 = (byte)(uVar23 >> 8);
  uVar21 = (ushort)uVar18;
  uVar27 = (uVar25 & 0xffff0000 | (uint)(ushort)(uVar29 >> 1 | 0x8000)) ^ 0x8000000;
  uVar11 = uVar11 + uVar17;
  uVar33 = ((uVar15 & 0xffff0000 |
            (uint)(ushort)(CONCAT11(bVar20 << (bVar6 & 7) | bVar20 >> 8 - (bVar6 & 7),
                                    bVar9 >> (bVar6 & 7) | bVar9 << 8 - (bVar6 & 7)) |
                          1 << (uVar21 & 0xf))) - uVar27) + 0x59fe15c1;
  uVar22 = (ushort)uVar33;
  uVar12 = uVar29 + uVar22;
  uVar25 = (int)CONCAT11(bVar16 >> 7 | bVar16 << 1,(char)uVar23 + -0x38 + CARRY2(uVar29,uVar22)) *
           (int)(short)uVar17;
  uVar29 = uVar11 & 0xf;
  uVar22 = (ushort)CONCAT31(0x73f3a3,0xcf >> bVar8);
  uVar17 = (ushort)(uVar21 | 1 << ((ushort)(uVar25 & 0xffff) & 0xf) | 0xa0e7) >> 1 |
           (ushort)((uVar22 >> uVar29 & 1) != 0) << 0xf;
  bVar20 = bVar8 >> 1;
  uVar23 = ((uVar23 & 0xffff0000 | uVar25 & 0xffff) >> bVar20 |
           CONCAT22(0x73f3,uVar22 & ~(1 << uVar29)) << 0x20 - bVar20) & 0xffff;
  uVar15 = uVar17 | 0xc000;
  uVar25 = (uVar25 >> 0x10 & 0x3f00 |
           (uint)(byte)((char)(uVar25 >> 0x10) + (char)((uVar28 & 0xffffff00) >> 8))) << 0x10 |
           (uint)(ushort)((ushort)(uVar23 >> bVar20 % 0x11) |
                         (ushort)(uVar23 << 0x11 - bVar20 % 0x11));
  uVar23 = uVar25 / uVar15 & 0xffff;
  uVar34 = uVar18 & 0xffff0000 | (uint)(ushort)((uVar17 | 0xc000) - uVar12);
  cVar19 = (char)(uVar23 >> 8) + 'O';
  uVar29 = CONCAT11(cVar19,(char)uVar23);
  uVar18 = (uVar26 >> 1 | uVar24 | (uint)uVar11) * -0x4e79b401 - uVar34;
  uVar22 = (ushort)uVar18;
  uVar1 = (ulonglong)CONCAT22((short)cVar19 >> 7,uVar29 >> 7 | uVar29 << 9) *
          (ulonglong)(uVar25 % uVar15 | uVar33 & 0xffff0000);
  uVar11 = (ushort)(uVar1 >> 0x10);
  bVar6 = (char)(uVar1 >> 8) >> (bVar8 >> 2);
  uVar29 = CONCAT11(bVar6,(char)uVar1);
  uVar15 = uVar27 & 0xffff0000 | (uint)(ushort)(uVar12 >> bVar20 | uVar22 << 0x10 - bVar20);
  if ((uVar1 & 0xd97e00000000) == 0 || (short)(uVar1 >> 0x20) < 0) {
    uVar15 = CONCAT22(uVar11,uVar29);
  }
  uVar34 = uVar34 + 1;
  uVar24 = (uint)(uVar1 >> 0x20) & 0xffffd900;
  uVar18 = uVar18 & 0xffff0000;
  uVar12 = (ushort)(uVar28 & 0xffffff00) | bVar20 & 0xfffe | (ushort)(bVar6 >> 7);
  uVar25 = (uVar34 & 0xffff0000 |
           (uint)(ushort)((ushort)((short)uVar34 << 1) >> (sbyte)uVar12 |
                         uVar12 << 0x10 - (sbyte)uVar12)) << 1;
  uVar17 = (ushort)uVar25 | uVar11 >> 0xf;
  uVar12 = uVar12 + uVar29 + 0x691a + (ushort)(0x96e5 < uVar29);
  uVar26 = uVar28 & 0xffff0000 | (uint)uVar12;
  uVar23 = CONCAT22(uVar11,uVar29 + 0x691a) & 0xffffff00;
  bVar6 = (byte)uVar12 & 0x1f;
  uVar28 = uVar15 >> bVar6 | -0x8f1786a << 0x20 - bVar6;
  uVar15 = uVar26 + 0xa39b03e;
  if (SCARRY4(uVar26,0xa39b03e) != (int)uVar15 < 0) {
    uVar15 = uVar18 | (ushort)(uVar22 << 2 | uVar22 >> 0xe);
  }
  uVar12 = uVar17 + 0xb593;
  sVar30 = CONCAT11(SCARRY2(uVar17,-0x4a6d) == (short)uVar12 < 0,0xff) - (short)uVar15;
  uVar29 = (byte)((char)uVar15 + 0x60) & 0xff0f;
  sVar10 = (sbyte)uVar29;
  uVar12 = uVar12 >> sVar10 | (uVar29 | 0x100) << 0x10 - sVar10;
  lVar3 = (longlong)(int)(CONCAT31((int3)((int)uVar23 >> 0x27),(char)((int)uVar23 >> 0x1f)) ^ 0xa9)
          * -0x512c6e6c;
  bVar36 = (int)lVar3 == lVar3;
  uVar23 = ((uint)uVar11 << 0x10) >> 5 | (uint)((uVar22 & 0x3fff) >> 2) << 0x1b;
  uVar11 = (ushort)bVar36;
  uVar1 = (longlong)(int)uVar23 * (longlong)(int)uVar23;
  bVar6 = bVar36 % 0x11;
  uVar29 = uVar11 + 0x8a00;
  uVar29 = (uVar29 & 0xff | (ushort)(0x75ff < uVar11 || uVar29 == 0) << 8) + 1;
  uVar23 = uVar29 | 0xc000;
  uVar26 = (uint)(ushort)(((ushort)(uint)(uVar1 >> 0x21) & 0x1fff) << 1 | 1) << 0x10 |
           uVar29 | 0xc000;
  uVar18 = (uVar28 >> 0x17 |
           (uVar28 & 0xffff0000 |
           (uint)(ushort)(((ushort)-(ushort)(1 < (byte)(uVar24 >> 0x1c)) >> 2 |
                          ((ushort)((ushort)(uVar24 >> 0x10) | 0x20) >> 4) << 0xe) + uVar12)) << 9)
           - (uVar18 | (ushort)(sVar30 << bVar6 |
                               (ushort)(CONCAT12((uVar1 & 0x100000000) != 0,sVar30) >> 0x11 - bVar6)
                               ));
  uVar11 = (ushort)uVar18;
  uVar29 = (ushort)(uVar26 % uVar23);
  if (0x5ab4 < uVar12) {
    uVar29 = uVar11;
  }
  uVar24 = (uVar18 & 0xffff0000 | (uint)(ushort)(uVar11 + 0x36c4)) + 0x5b581ae4;
  bVar6 = (0x5ab4 < uVar12) + 0x6f;
  iVar14 = ((uVar15 & 0xffff0000 | (uint)CONCAT11(0x33,bVar6)) >> 8) << 9;
  bVar6 = (((char)sVar30 * '\x17' & 0x98U) >> (bVar6 & 0x1f)) - 1;
  iVar35 = (CONCAT22((short)(uVar1 >> 0x10),(short)(uVar26 / uVar23 >> 8)) & 0xffff00ff ^ 0x8000) *
           2 + 1;
  uVar18 = (uVar25 & 0x13ed0000 |
           (uint)(ushort)((uVar29 & 0xff00 | (ushort)(byte)((char)uVar29 + (char)(uVar29 >> 8))) *
                         0x3ca0)) + 0xb855794a;
  uVar15 = iVar35 * 2;
  uVar29 = (ushort)uVar24;
  uVar24 = uVar24 & 0xffff0000 | (uint)(ushort)(uVar29 + 0xac5f);
  uVar25 = CONCAT31((uint3)((uint)iVar14 >> 8) & 0xffff00 |
                    (uint3)(byte)((byte)((uint)iVar14 >> 8) >> 1),(bVar6 & 1) != 0) * 2 +
           (uint)(0x53a1 < uVar29 || 0xfffe < (ushort)(uVar29 + 0xac5e));
  sVar30 = (short)uVar25;
  uVar22 = sVar30 << 1 | (ushort)(sVar30 < 0);
  uVar25 = uVar25 & 0xffff0000;
  lVar3 = (longlong)(int)(uVar15 & 0xffffff00 | (uint)(byte)(((byte)uVar15 | iVar35 < 0) + 1)) *
          0x43839cd0;
  uVar24 = uVar24 << (sbyte)uVar22 |
           (uint)(CONCAT14((int)lVar3 != lVar3,uVar24) >> 0x21 - (sbyte)uVar22);
  uVar17 = (ushort)uVar24;
  uVar29 = (ushort)((uVar17 >> 1 & 1) != 0);
  sVar30 = (short)lVar3 - uVar22;
  uVar11 = sVar30 - uVar29;
  uVar15 = CONCAT22((short)((ulonglong)lVar3 >> 0x10),uVar11);
  if ((SBORROW2((short)lVar3,uVar22) != SBORROW2(sVar30,uVar29)) != ((uVar11 & 0x8000) != 0)) {
    uVar15 = uVar25 | uVar22;
  }
  uVar26 = uVar24 & 0xffff0000 | (uint)(ushort)(uVar17 * 0xbda);
  sVar30 = (short)(uVar18 >> 1) << 1;
  bVar8 = (byte)sVar30;
  uVar29 = (ushort)(CONCAT11(SCARRY2(uVar12,-0x5ab5) != (short)(uVar12 + 0xa54b) < 0,bVar6) >> 1) >>
           (bVar8 & 0x1f);
  uVar28 = uVar18 >> 0x10 | (uint)(ushort)(sVar30 >> (bVar8 & 0x1f)) << 0x10;
  bVar20 = (char)bVar8 >> 1;
  uVar18 = uVar28 - uVar26;
  uVar24 = uVar18 & 0xffff0000;
  bVar8 = (byte)((uint)(ushort)(short)(char)bVar8 >> 8);
  bVar16 = bVar20 & 0xf;
  uVar11 = (ushort)((short)uVar29 >> (bVar20 & 0x1f)) >> bVar16 | uVar29 << 0x10 - bVar16;
  bVar9 = (byte)((int)(uVar15 & 0xffff0000) >> 0x1f) & 1;
  bVar6 = bVar8 + 5;
  cVar19 = bVar6 - bVar9;
  uVar23 = (uint)uVar29;
  if ((bVar8 < 0xfb || bVar6 < bVar9) || cVar19 == '\0') {
    uVar23 = uVar24 | CONCAT11(cVar19,bVar20) & 0xff0f;
  }
  uVar12 = uVar11 >> 1;
  uVar27 = (uint)(CONCAT11(cVar19 >> bVar16,bVar20) & 0xff0f);
  uVar33 = (uVar25 | uVar29) << 1;
  uVar34 = uVar33 | (int)(uVar25 | uVar22) < 0;
  if ((char)((char)((uint)(ushort)(short)(char)((char)uVar18 + (char)uVar29 + (uVar28 < uVar26)) >>
                   8) << bVar16) == (char)(uVar27 >> 8)) {
    uVar23 = uVar23 & 0xffff0000 | uVar27;
  }
  uVar27 = uVar27 & 0xffffff82;
  iVar14 = uVar34 << 1;
  if ((int)uVar34 < 0 == iVar14 < 0) {
    uVar26 = uVar25 | (ushort)(uVar12 | (ushort)((uVar11 & 1) != 0) << 0xf);
  }
  bVar6 = (byte)(uVar27 >> 8);
  uVar18 = uVar23 << (sbyte)uVar27 | uVar26 >> 0x20 - (sbyte)uVar27;
  uVar11 = (ushort)uVar18;
  uVar29 = uVar11 >> 1;
  uVar25 = uVar25 | (ushort)(uVar12 & 0xff | (ushort)(uVar29 != 0) << 8);
  iVar35 = 0x1f;
  if (uVar25 != 0) {
    for (; uVar25 >> iVar35 == 0; iVar35 = iVar35 + -1) {
    }
  }
  uVar18 = uVar18 & 0xffff0000 | (uint)(ushort)(uVar29 + 0xca98 ^ 1);
  uVar25 = (uVar24 | uVar27) << 10;
  lVar3 = (longlong)
          (int)(short)((uVar15 & 0xffff0000 |
                       (uint)(ushort)((short)(CONCAT11(-1 < (short)uVar11,bVar6) |
                                             1 << (bVar6 & 0xf)) >> 0x13)) >> 1) *
          (longlong)(int)(uVar26 & 0xffff0000);
  uVar4 = CONCAT14((int)lVar3 != lVar3,uVar18 << 1) >> 2;
  uVar15 = (uint)uVar4 | (uint)((int)uVar18 < 0) << 0x1f;
  uVar29 = ((ushort)uVar25 | (ushort)(uVar24 >> 0x16)) + 0x1ce3;
  uVar25 = uVar25 & 0xffff0000 | (uint)uVar29;
  bVar8 = (byte)uVar29;
  bVar6 = bVar8 & 0xf;
  uVar12 = (ushort)((ulonglong)lVar3 >> 0x10);
  uVar26 = CONCAT31((int3)((ulonglong)lVar3 >> 0x28),-(char)((ulonglong)lVar3 >> 0x20)) | 0x89ec3b6;
  bVar8 = bVar8 & 0x1f;
  uVar18 = uVar25 >> bVar8 | uVar25 << 0x20 - bVar8;
  uVar29 = (ushort)uVar18 >> 1;
  uVar18 = uVar18 & 0xffff0000;
  bVar8 = (byte)uVar29;
  bVar20 = bVar8 & 0xf;
  uVar11 = (ushort)(0U >> bVar6 | 0 << 0x10 - bVar6) >> bVar20 | (short)uVar4 << 0x10 - bVar20;
  bVar8 = bVar8 & 7;
  bVar16 = (byte)(uVar11 >> 8);
  uVar11 = uVar11 & 0xff;
  uVar29 = CONCAT11((byte)((uint)(uVar29 | 0x8000) >> 8) >> bVar20 * '\x02',bVar20 * '\x02' + -0x10)
           >> 7;
  bVar9 = (char)uVar29 - (char)uVar11 & 0xf;
  iVar35 = (~uVar15 & 0x7fff846f) * 2;
  uVar23 = uVar18 | uVar29 & 0xffffff00 | (uint)(SBORROW4(iVar35,iVar35) == false);
  uVar25 = uVar23 + iVar35;
  uVar15 = uVar15 + 0x11e342d7;
  bVar6 = ((byte)uVar26 >> 3 | (byte)uVar26 << 5) + 0x22;
  bVar20 = (byte)uVar25 & 0x1f;
  uVar24 = uVar25 >> bVar20 | iVar14 << 0x20 - bVar20;
  uVar17 = uVar12 >> 1;
  uVar12 = (ushort)(byte)(CONCAT22(uVar12,(ushort)(uVar11 | (ushort)(byte)(bVar16 << bVar8 |
                                                                          bVar16 >> 8 - bVar8) << 8)
                                          >> bVar9 | (short)uVar26 << 0x10 - bVar9) >> 1) *
           (ushort)bVar6;
  uVar25 = uVar24 & 0xffff0000;
  uVar24 = uVar24 >> 1 & 0x7fff;
  uVar15 = uVar15 & 0xffff0000 | (uint)(ushort)((short)uVar15 << 1) | 0x269833d7;
  bVar20 = (byte)uVar24;
  uVar29 = (short)uVar24 >> (bVar20 & 0x1f);
  uVar21 = uVar29 & 0xff | (ushort)(byte)((char)((uint)uVar29 >> 8) - 1) << 8;
  uVar18 = (uVar18 | (ushort)((short)uVar23 << 2)) & CONCAT22(uVar17,uVar12);
  uVar31 = (ushort)uVar18;
  uVar29 = uVar12 - uVar31;
  bVar36 = uVar29 == 0;
  uVar11 = uVar31 ^ (ushort)bVar36 * (uVar31 ^ (short)(char)bVar6);
  bVar8 = ((short)uVar29 < 0) << 7 | bVar36 << 6 | ((uVar12 & 0x1000) != 0) << 4 |
          ((POPCOUNT(uVar29 & 0xff) & 1U) == 0) << 2 | 2U | uVar12 < uVar31;
  uVar29 = (uVar12 ^ (ushort)!bVar36 * (uVar12 ^ uVar11)) & 0xff;
  uVar22 = uVar29 | (ushort)bVar8 << 8;
  if (uVar12 >= uVar31 && !bVar36) {
    uVar11 = uVar21;
  }
  uVar31 = ((ushort)uVar15 >> (bVar20 & 0x1f)) << 1;
  uVar21 = uVar21 & uVar22;
  cVar19 = (char)bVar8 >> 7;
  uVar12 = CONCAT11((char)((uint)(ushort)((short)uVar22 >> 0xf) >> 8) + -0x31,cVar19);
  bVar20 = (byte)uVar29 >> 1;
  bVar16 = ((byte)uVar21 - 0x37) + ((byte)uVar21 < (byte)((uint)uVar21 >> 8));
  uVar23 = uVar25 | uVar21 & 0xffffff00 | (uint)bVar16;
  bVar16 = bVar16 & 0x1f;
  uVar28 = (uint)((int)(char)bVar6 >> 5) >> bVar16 | ((int)(char)bVar6 >> 5) << 0x20 - bVar16;
  uVar29 = uVar12 << 0xf;
  uVar24 = (uint)(ushort)((ushort)iVar14 >> 1 | uVar29);
  if (((short)(ushort)iVar14 < 0 != (uVar29 != 0)) != (uVar29 != 0)) {
    uVar23 = uVar25 | uVar24;
  }
  bVar6 = (byte)(uVar23 >> 8);
  uVar23 = uVar23 & 0xffff0000 | (uint)CONCAT11(bVar6 >> 1 | bVar6 << 7,(char)uVar23);
  uVar25 = uVar18 & 0xffff0000 | 0x1000000;
  uVar18 = CONCAT22(uVar17,(short)(char)(bVar20 | 0x80)) &
           ~(1 << ((ushort)(uVar11 + 0x7b36) & 0x1f));
  uVar27 = (uVar28 & 0xffff0000 | (uint)(ushort)((short)uVar28 + (CONCAT11(bVar8,bVar20) | 0x80)))
           << 1;
  uVar22 = (ushort)(uVar25 >> 0x16);
  uVar28 = uVar23 + 0x471272a8;
  uVar18 = (uVar18 & 0x8ccd0000 | (uint)(ushort)(((ushort)uVar18 & 0xd1b7) + uVar22)) ^ 0x916a;
  uVar33 = ((uVar33 & 0x7fff8000) << 1 | 0x2000000 | uVar24) + 0x72e74598;
  uVar11 = (short)uVar27 << ((byte)uVar28 & 0x1f);
  uVar24 = uVar18 + 0x48a11acb;
  uVar29 = CONCAT11((char)((ushort)(CONCAT11(cVar19,cVar19 + (char)((uint)uVar12 >> 8)) << 1) >> 8)
                    >> ((byte)uVar28 & 0x1f),uVar23 < 0xb8ed8d58 || uVar28 == 0);
  if (SCARRY4(uVar18,0x48a11acb) == (int)uVar24 < 0) {
    uVar29 = uVar11;
  }
  uVar26 = uVar26 & 0xffff0000 | (uint)uVar29;
  uVar29 = (ushort)uVar33;
  uVar18 = (uint)(ushort)(uVar29 | 1 << (uVar29 & 0xf));
  uVar23 = (uint)(ushort)~(ushort)uVar28;
  if ((uVar29 >> (uVar29 & 0xf) & 1) == 0 && uVar22 != 0xc07) {
    uVar23 = uVar24 & 0xffff;
  }
  uVar24 = 0x1f;
  if (uVar26 != 0) {
    for (; uVar26 >> uVar24 == 0; uVar24 = uVar24 - 1) {
    }
  }
  uVar5 = uVar11 & 0xffffff00;
  uVar34 = uVar24 >> 8 & 0xff;
  if ((POPCOUNT((byte)(uVar5 >> 8) & 0xb8) & 1U) == 0) {
    uVar26 = uVar18;
  }
  uVar28 = (uVar28 & 0xffff0000 | uVar23) ^ 1 << (uVar23 & 0x1f);
  uVar18 = (uVar33 & 0xffff0000 | uVar18) + (uVar27 & 0xffff0000 | uVar11 & 0xffffb800 | uVar34);
  uVar22 = uVar31 | 0x8000;
  uVar23 = (uint)uVar22;
  uVar29 = (ushort)((short)uVar31 < 0);
  uVar12 = (ushort)uVar26;
  uVar17 = (ushort)uVar18;
  uVar11 = uVar17 + uVar12;
  if ((ushort)(uVar11 + uVar29) == 0 ||
      (SCARRY2(uVar17,uVar12) != SCARRY2(uVar11,uVar29)) != (short)(uVar11 + uVar29) < 0) {
    uVar28 = uVar28 & 0xffff0000 | uVar26 & 0xffff;
  }
  uVar29 = (ushort)(((uint)(CARRY2(uVar17,uVar12) || CARRY2(uVar11,uVar29)) << 0x10) >> 9) |
           (ushort)((uVar25 >> 0x16) << 8);
  bVar6 = (byte)uVar28 & 7;
  bVar8 = (byte)uVar34;
  uVar25 = uVar29 + 0xaf8f63d5;
  uVar26 = (uVar25 & 0xffff0000 | (uint)CONCAT11(-(char)(uVar25 >> 8),(char)uVar25)) + 0x2f2a6f56;
  uVar18 = uVar18 >> 0x18;
  uVar25 = (uVar15 & 0xffff0000 | uVar23) << 8;
  uVar33 = uVar18 | uVar25;
  uVar23 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 | uVar23 << 0x18;
  uVar11 = (uVar29 << 6 | uVar22 >> 10) - 1;
  uVar29 = CONCAT11(0x65,(char)(CONCAT11((char)-(char)((uint)((int)(short)(CONCAT11(0xab,(char)
                                                  uVar24) & 0x8f41 | 0xdd00) *
                                                  (int)(short)((ushort)uVar5 & 0xb800 |
                                                              (ushort)(byte)(bVar8 >> bVar6 |
                                                                            bVar8 << 8 - bVar6))) >>
                                                  0x10) < '\x01',((byte)uVar28 & 0xf) + 0x8c) >> 1))
  ;
  uVar15 = uVar26 | 0xe5c57d7b;
  iVar14 = 0;
  if (uVar33 != 0) {
    for (; (uVar33 >> iVar14 & 1) == 0; iVar14 = iVar14 + 1) {
    }
  }
  bVar6 = (byte)((uint)uVar11 >> 8);
  uVar12 = (ushort)(bVar6 >> 1) << 8;
  uVar27 = (iVar14 - (uVar28 & 0xffff0000 | (uint)uVar29)) - (uint)(bVar6 & 1);
  bVar6 = (byte)((uint)(ushort)((uVar11 & 0xff | uVar12) << 5) >> 8);
  uVar24 = (uint)(((uVar12 >> 0xb | (uVar11 & 7) << 5 | (ushort)(bVar6 >> 1) << 8) << 1 |
                  (ushort)(bVar6 & 1)) & uVar29);
  uVar28 = uVar23;
  if (uVar15 != uVar24) {
    uVar15 = uVar24;
    uVar28 = uVar24;
  }
  return uVar15 + (uVar27 & 0xffffff00 | (uint)(byte)((char)uVar27 >> 0x1f)) + uVar28 + uVar23 +
         CONCAT22((ushort)(uVar25 >> 0x11) | (ushort)(((uint)((uVar18 & 1) != 0) << 0x1f) >> 0x10),
                  (short)(uVar33 >> 1) + 0x35a9) + (uint)(ushort)((short)uVar26 >> 0xf) + -0x62a6e9b
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
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint5 uVar5;
  byte bVar6;
  ushort uVar7;
  byte bVar12;
  short sVar8;
  short sVar9;
  uint uVar10;
  char cVar13;
  uint uVar11;
  char cVar14;
  sbyte sVar15;
  ushort uVar16;
  byte bVar18;
  uint uVar17;
  byte bVar19;
  ushort uVar20;
  uint uVar21;
  uint uVar22;
  byte bVar23;
  ushort uVar24;
  byte bVar29;
  byte bVar30;
  ushort uVar25;
  uint uVar26;
  uint uVar27;
  uint3 uVar31;
  int iVar28;
  ushort uVar32;
  uint uVar33;
  ushort uVar34;
  uint uVar35;
  ushort uVar36;
  ushort uVar37;
  uint uVar38;
  uint uVar39;
  bool bVar40;
  
  for (iVar28 = 0x1f; 0x41f43a8dU >> iVar28 == 0; iVar28 = iVar28 + -1) {
  }
  uVar35 = ((ushort)((ushort)(byte)(((byte)((char)((uint)iVar28 >> 8) * -0x76) >> 4 == 0x3a) *
                                    ((byte)(iVar28 + -1) ^ 0x3a) ^ 0x3a) << 8 | 0x8d) | 0x41f40000)
           + 0x66eb3987;
  sVar8 = (short)(iVar28 + -1);
  uVar10 = (uint)(ushort)((short)uVar35 >> 0x12);
  uVar26 = uVar35 & 0xffff0000 | uVar10;
  uVar35 = ((ushort)(sVar8 + 0x3a8c) | 0x41f40000) + 0x1f475203;
  cVar13 = (char)uVar35;
  uVar38 = 0x1f;
  if (uVar26 != 0) {
    for (; uVar26 >> uVar38 == 0; uVar38 = uVar38 - 1) {
    }
  }
  uVar20 = ((byte)-cVar13 | 0x5000) + 0xa254 + (ushort)(cVar13 != '\0');
  if ((short)uVar20 < 0) {
    uVar26 = uVar10;
  }
  uVar21 = (uVar35 & 0xffff0000 | (uint)uVar20) + 0x3f619590;
  uVar16 = sVar8 * -2;
  uVar20 = (short)uVar26 * 2 + 0x7bfe;
  cVar13 = (char)uVar16;
  uVar25 = SEXT12(cVar13);
  uVar35 = CONCAT22((undefined2)(cVar13 >> 7),uVar25) & 0xfffffeff;
  uVar26 = uVar35 + 0x41f46357;
  uVar7 = (CONCAT11((char)uVar38,(char)uVar38) ^ 0x1000) & ~(1 << ((ushort)uVar21 & 0xf)) | uVar20;
  uVar16 = uVar16 & uVar7;
  bVar18 = (byte)uVar16 & 0xf;
  uVar24 = (ushort)uVar26;
  uVar24 = uVar24 << bVar18 | uVar24 >> 0x10 - bVar18;
  uVar10 = ((uVar38 & 0xffff0000 | (uint)(ushort)(uVar7 - uVar16)) + 0x30be22f7) -
           (uint)((uVar20 >> (((short)(uVar35 >> 2) - (1 << (uVar25 & 0xf) | 0x5252U)) -
                              (ushort)((uVar25 & 2) != 0) & 0xf) & 1) != 0);
  uVar35 = (int)(short)uVar10 *
           (int)(short)((ushort)uVar21 & 0xff00 | (ushort)(byte)((char)uVar21 + 0xd));
  uVar38 = uVar35 & 0xffff;
  uVar20 = (ushort)(uVar35 >> 0x10);
  uVar32 = (short)uVar38 + 0xf14 + uVar20 * 8;
  lVar4 = (longlong)(int)(uVar26 & 0xffff0000 | (uint)uVar24) * 0x2ddd3979;
  bVar6 = (byte)(uVar38 >> 8);
  uVar25 = (ushort)((ulonglong)lVar4 >> 0x10);
  bVar23 = (byte)lVar4;
  bVar29 = (char)((ulonglong)lVar4 >> 8) + bVar6 + ((int)uVar35 < 0);
  bVar18 = (byte)uVar38;
  bVar12 = bVar6 ^ (bVar18 == bVar6) * (bVar6 ^ bVar29);
  uVar35 = (uint)(byte)(bVar18 ^ (bVar18 != bVar6) * (bVar18 ^ bVar12));
  uVar38 = uVar10 & 0xffff0000 | CONCAT11(bVar12,bVar18) & 0xffffff00 | uVar35;
  uVar7 = uVar32;
  uVar16 = 0x8000;
  if (bVar6 > bVar18) {
    uVar7 = CONCAT11(bVar29,bVar23);
    uVar16 = uVar25;
  }
  uVar20 = (uVar20 & 0x7f) << 1;
  uVar26 = uVar21 & 0xffff0000 | (uint)(ushort)(uVar20 | (ushort)(bVar6 <= bVar18) << 8);
  uVar10 = 0x1f;
  if (uVar26 != 0) {
    for (; uVar26 >> uVar10 == 0; uVar10 = uVar10 - 1) {
    }
  }
  uVar26 = (uint)((byte)(((byte)uVar24 | 0xeb) + (char)uVar32 + ((int)lVar4 != lVar4)) >> 2);
  if (uVar38 < 0x93cee832) {
    uVar26 = uVar35;
  }
  uVar7 = uVar7 >> 1;
  uVar35 = CONCAT22(uVar16,uVar7);
  bVar6 = (byte)(~uVar38 << 1) | -1 < (int)uVar38;
  bVar19 = (byte)uVar20 & (byte)uVar7;
  bVar12 = bVar6 + 0x7e;
  bVar18 = (byte)((~uVar38 << 1) >> 8);
  if ((char)bVar12 < '\0') {
    uVar26 = uVar35;
  }
  bVar1 = bVar19 + 0x57;
  bVar6 = ((char)uVar26 - bVar19) - (bVar6 < 0x82) & 7;
  bVar30 = bVar18 << bVar6 | bVar18 >> 8 - bVar6;
  bVar12 = bVar12 | 0x40;
  uVar38 = (uVar10 ^ 1 << (CONCAT11(bVar29,bVar23) & 0x1f)) + uVar35;
  bVar18 = (byte)((uint)uVar7 >> 8);
  bVar19 = bVar12 ^ (bVar23 == bVar12) * (bVar12 ^ bVar18);
  uVar24 = CONCAT11(bVar29,bVar23 ^ (bVar23 != bVar12) * (bVar23 ^ bVar19));
  uVar32 = (ushort)(((uVar38 & 0xff00) << 8) >> 0x10) | (ushort)(uVar38 * 0x1000000 >> 0x10);
  uVar26 = uVar35 >> 1 & 0xffff |
           (uint)(ushort)(uVar16 >> 1 | (ushort)(((uint)((uVar7 & 1) != 0) << 0x1f) >> 0x10)) <<
           0x10;
  bVar18 = bVar1 + bVar18;
  uVar35 = (uint)(ushort)(uVar7 & 0xff | (ushort)bVar1 << 8);
  cVar13 = bVar18 + bVar30;
  bVar6 = cVar13 + 1;
  uVar10 = uVar21 & 0xffff0000 | (uint)bVar6;
  uVar20 = (short)CONCAT21(uVar25,bVar30) << 8 | (ushort)bVar19;
  if ((CARRY1(bVar18,bVar30) || cVar13 == -1) || bVar6 == 0) {
    uVar20 = uVar24;
  }
  uVar20 = uVar20 + 0xb08e;
  if (SCARRY4(uVar10,uVar26) != SCARRY4(uVar10 + uVar26,1)) {
    uVar20 = uVar24;
  }
  bVar12 = (byte)(uVar35 >> 8);
  uVar20 = uVar20 & 0xff00 | (ushort)((byte)uVar20 & bVar12);
  bVar18 = (byte)(uVar7 & 0xff);
  bVar6 = bVar18 & 0xf;
  uVar7 = uVar20 >> bVar6 | uVar20 << 0x10 - bVar6;
  uVar20 = (short)(uVar26 * -0x5d0c5b86) + 0x4a72;
  uVar16 = ((ushort)((ushort)(uVar38 >> 0x18) | (ushort)(uVar38 >> 8) & 0xff00) >> 6) << 10 |
           uVar20 >> 6;
  sVar8 = (uVar20 & 0xff) * (ushort)bVar12;
  bVar18 = bVar18 & 0x1f;
  uVar35 = uVar35 << bVar18 |
           (uint)(CONCAT14((char)((ushort)sVar8 >> 8) != '\0',uVar35) >> 0x21 - bVar18);
  bVar18 = (byte)((short)uVar16 >> 0x13);
  bVar6 = ((uVar16 | 0x2bc9) != 0) + bVar18;
  cVar13 = (char)(((uVar35 & 0xff00) >> 1) >> 8);
  uVar35 = ((uint)((uint3)(uVar35 >> 8) & 0xffff00) |
           (uint)(byte)(cVar13 << 6 | (byte)(cVar13 - 0x24U) >> 3)) * 0x100;
  bVar12 = bVar6 * '\b' | bVar6 >> 5;
  uVar38 = (CONCAT22(uVar32,uVar16) | 0x2bc9) >> 1;
  sVar9 = ((short)CONCAT31(CONCAT21(uVar32,(char)((ushort)((ushort)bVar18 * (ushort)bVar6) >> 8) +
                                           '\v'),
                           -1 < (char)((bVar12 & ~(byte)(1 << (bVar12 & 0x1f)) & 0xe0) + 0x49)) +
          -0x2db2) - (ushort)(uVar35 < 0xdf984e3e);
  uVar10 = uVar35 + 0x2067b1c2 & 0xffff0000;
  bVar6 = (byte)sVar9;
  bVar18 = (bVar6 == 0x40) * -0x41;
  bVar12 = bVar18 ^ 0x40;
  lVar4 = (ulonglong)
          (CONCAT22(uVar32,sVar9) & 0xffffff00 |
          (uint)(byte)(bVar6 ^ (bVar6 != 0x40) * (bVar6 ^ bVar12))) *
          (ulonglong)(uVar38 | 0x80000000);
  uVar35 = 0x1f;
  if (uVar10 != 0) {
    for (; uVar10 >> uVar35 == 0; uVar35 = uVar35 - 1) {
    }
  }
  bVar6 = (byte)uVar35 & 0x1f;
  uVar21 = (uint)lVar4 >> bVar6 | CONCAT22(0x4f9d,(ushort)bVar12 << 8 | 0xff) << 0x20 - bVar6;
  uVar20 = (short)uVar38 << 1;
  uVar38 = (int)((ushort)(0x2db2 - (short)lVar4) | 0x25030000) >> ((byte)uVar35 & 0x1f);
  bVar12 = (byte)uVar21;
  uVar33 = uVar38 & 0xffff0000 |
           (uint)(ushort)((short)uVar38 + ((ushort)((ulonglong)lVar4 >> 0x20) & 0xe33d) +
                         (ushort)(0x23 < bVar12 || 0xfe < (byte)(bVar12 - 0x24)));
  bVar6 = ((byte)(uVar35 ^ 0x5ae9) & 0x1f) % 0x11;
  uVar31 = (uint3)(ushort)(CONCAT11((uVar20 >> 9 & 1) != 0,bVar18) ^ 0x40) << 8 | 0xff;
  uVar16 = (short)uVar31 << bVar6 | (ushort)(uVar31 >> 0x11 - bVar6);
  uVar38 = uVar33 << 1;
  uVar26 = uVar26 * -0x5d0c5b86 & 0xffff0000 |
           (uint)(ushort)((((short)(char)(((char)sVar8 - ((byte)(uVar7 << 1) | (byte)(uVar7 >> 0xf))
                                          ) + -1) & 0xff00U) >> 6 | 0xc800) ^ 2);
  uVar20 = (uVar20 | 1) ^ 0xd1f3;
  uVar7 = (ushort)(uVar35 >> 0x11);
  cVar14 = (char)((uVar35 ^ 0x5ae9) >> 1);
  uVar35 = (uVar21 & 0xffff0000) >> 0xf;
  cVar13 = (char)(uVar35 >> 8) + '<';
  bVar18 = (byte)((CONCAT22(uVar7,CONCAT11((uVar20 != 0) + 0x11U |
                                           (byte)((uint)(ushort)((short)((ushort)(uVar21 & 
                                                  0xffffff00) | (ushort)(byte)(bVar12 - 0x23)) >>
                                                  0xf) >> 8),cVar14)) & 0xffffff00 |
                  (uint)(byte)(cVar14 << 1)) >> 1);
  uVar20 = uVar20 >> 1;
  uVar24 = uVar20 | (ushort)(0x6e3ba1bf < uVar26 || 0xfffffffe < uVar26 + 0x91c45e40) << 0xf;
  uVar10 = uVar26 + 0x91c45e41 & 0xffff0000;
  uVar26 = uVar10 | uVar26 + 0x91c45e41 >> 1 & 0x7fff;
  iVar28 = 0;
  if (uVar26 != 0) {
    for (; (uVar26 >> iVar28 & 1) == 0; iVar28 = iVar28 + 1) {
    }
  }
  bVar6 = (bVar18 & 0x1f) % 9;
  bVar6 = (byte)(CONCAT11(uVar24 < 0xfd45,cVar13) >> bVar6) | cVar13 << 9 - bVar6;
  uVar24 = CONCAT11((short)uVar24 < -0x2ba,bVar18) + 0x67ee;
  uVar25 = (ushort)(uVar26 >> 1);
  uVar26 = uVar26 >> 1 & 0xffff;
  uVar39 = (CONCAT22(0x4f9d,uVar16) & 0x7fff8000) << 1 | uVar26;
  uVar32 = (ushort)uVar26;
  bVar18 = (byte)((uint)uVar24 >> 8);
  uVar36 = (ushort)(uVar10 >> 0x11);
  uVar34 = uVar25 - 1;
  uVar10 = (uint)(((ushort)uVar38 | (ushort)((int)uVar33 < 0) | uVar32) & uVar25);
  if ((short)uVar25 < 1) {
    uVar10 = (uint)uVar24;
  }
  iVar28 = uVar39 << 1;
  uVar35 = (uVar35 & 0xffff0000 |
            (uint)CONCAT11(-1 < (char)uVar16,(char)((uVar21 & 0xffffff00) >> 8) >> 2) << 0x12 |
           (uint)CONCAT11(CARRY1(bVar6,bVar18) || 0xfe < (byte)(bVar6 + bVar18),(char)uVar35)) +
           0xd11142b3;
  uVar21 = (uVar35 & 0xffff0000 | (uint)(ushort)(short)(char)uVar35) ^ 0xbcd86e5e;
  uVar16 = CONCAT11(uVar21 == 0,(char)uVar21) * -0x7e23;
  uVar33 = CONCAT31((uint3)(byte)(uVar16 >> 8),0x78);
  uVar26 = CONCAT22(uVar36,uVar34) >> 1;
  uVar35 = (uVar38 & 0xffff0000 | uVar10) -
           CONCAT22(uVar7,uVar24 * 2 | (ushort)(uVar20 << 7 | uVar32) >> 0xf);
  uVar38 = CONCAT31((uint3)((uint)iVar28 >> 8) & 0xffff00 |
                    (uint3)(byte)((byte)((ushort)(((ushort)iVar28 | (ushort)((int)uVar39 < 0)) +
                                                 0x8dc) >> 8) & (byte)(uVar34 >> 8)),(int)uVar35 < 0
                   );
  if (-1 < (short)((short)uVar33 + -0x1cf1)) {
    uVar38 = uVar33;
  }
  uVar32 = (ushort)uVar26;
  uVar37 = (ushort)uVar35 | uVar32;
  uVar20 = uVar16 & 0xff00 | (ushort)(byte)(uVar38 >> 8);
  uVar10 = (uVar26 | 0x80000000) >> 1;
  bVar6 = (byte)uVar10;
  bVar18 = bVar6 & 7;
  uVar33 = uVar33 | 1 << ((uVar34 & 0x3e) >> 1);
  uVar27 = (uVar38 & 0xffff0000 | (uint)CONCAT11('x' << bVar18 | 0x78U >> 8 - bVar18,(char)uVar38))
           - 1;
  uVar24 = (ushort)uVar27 >> 1 | (ushort)((uVar27 & 1) != 0) << 0xf;
  lVar4 = (longlong)
          (int)(uVar21 & 0xffff0000 | (uint)(ushort)(uVar20 << 1 | (ushort)((short)uVar20 < 0))) *
          (longlong)(int)uVar33;
  uVar38 = (uint)((ulonglong)lVar4 >> 0x20);
  bVar6 = bVar6 & 0x1f;
  uVar38 = uVar38 << bVar6 | uVar38 >> 0x20 - bVar6;
  uVar7 = (ushort)lVar4 ^ 0x100;
  uVar20 = uVar7 & 0xf;
  uVar17 = uVar10 + 0x4a0972df + (uint)((uVar24 >> uVar20 & 1) != 0);
  uVar26 = ((uint)lVar4 ^ 0x100) << 7 ^ 0x1000;
  uVar33 = uVar33 - (uVar38 & 0xffff0000 |
                    (uint)CONCAT11((byte)(uVar38 >> 8) & (byte)uVar38,(byte)uVar38));
  uVar16 = (ushort)uVar26;
  uVar25 = (ushort)uVar33;
  uVar10 = (uint)(ushort)(uVar25 >> 8 | uVar25 << 8);
  uVar38 = (uint)(ushort)((uVar32 + uVar7 ^ 0xc5e) - (uVar37 + 0xc052));
  uVar7 = (short)uVar17 * -0x7684;
  uVar39 = uVar26 & 0xffff0000 | (uint)(ushort)(uVar16 >> 0xd | uVar16 << 3);
  uVar11 = uVar39 ^ 1 << (uVar10 & 0x1f);
  uVar26 = uVar11 & 0xffff0000;
  uVar21 = (uVar27 & 0xffff0000 | (uint)(ushort)((uVar24 ^ 1 << uVar20) << 5)) >> 9 & 0xffff;
  uVar39 = (uVar35 & 0xffff0000 |
           (uint)(ushort)(uVar37 + 0x94b5 + (ushort)((uVar39 >> (uVar10 & 0x1f) & 1) != 0))) +
           0x5117d28a;
  uVar35 = (uVar11 & 0xffff | (uVar27 >> 0x19) << 0x10) + 0x6a6f93d0;
  if ((POPCOUNT(uVar7 & (ushort)uVar21 & 0xff) & 1U) == 0) {
    uVar35 = uVar26 | uVar21;
  }
  uVar16 = (ushort)uVar39 | 1 << ((short)uVar16 >> 0xf & 0xfU);
  uVar31 = ((uint3)(uVar35 >> 8) & 0xff00) >> 8 | (uint3)uVar35 & 0xff00 |
           (uint3)((uVar35 << 0x18) >> 8);
  uVar11 = (uVar17 & 0xffff0000 | (uint)uVar7) * 2 +
           (uint)(((uVar33 & 0xffff0000 | uVar10) >> (uVar10 & 0x1f) & 1) != 0);
  uVar7 = CONCAT11(uVar11 != 0,(byte)uVar11);
  uVar33 = (uint)uVar7;
  uVar17 = uVar11 & 0xffff0000 | uVar33;
  uVar10 = (int)(short)((ushort)(uVar26 >> 0x18) | (ushort)(uVar26 >> 8)) * (int)(short)uVar7;
  uVar21 = uVar10 & 0xffff |
           (uint)(ushort)((ushort)(((CONCAT11((char)(uVar21 >> 8) >> 1,(char)uVar21) & 0xff00) << 8)
                                  >> 0x10) |
                         (ushort)(((uint)(byte)(CONCAT11((uVar16 >> 10 & 1) != 0,(char)uVar21) >> 1)
                                  << 0x18) >> 0x10)) << 0x10;
  uVar27 = (((uVar36 & 0xfffe) << 0x10) >> 1 | 0x80000000 | uVar38) * -0x4936a473;
  uVar26 = uVar21 << 1;
  uVar20 = (ushort)uVar26 | (ushort)((int)uVar21 < 0);
  uVar21 = CONCAT31(uVar31,(byte)(uVar35 >> 0x1b));
  uVar26 = uVar26 & 0xffff0000;
  uVar35 = (uVar39 & 0xffff0000 | (uint)(uVar16 | 0x400)) * 0x3af6552 >> 1;
  uVar38 = uVar38 * -0x80000000;
  uVar39 = uVar35 | uVar38;
  if (uVar38 == 0) {
    uVar21 = CONCAT22((short)(uVar31 >> 8),
                      (ushort)(uVar10 >> 0x10) & 0xff00 |
                      (ushort)(byte)((char)(uVar10 >> 0x10) - (char)(uVar33 >> 8)));
  }
  uVar16 = (uVar20 ^ 1) << 0xc;
  uVar38 = uVar26 | (ushort)(uVar16 | (ushort)(CONCAT12(uVar17 < 0xb136d5,uVar20) >> 5));
  uVar22 = (int)uVar38 >> 0x1f;
  bVar18 = (byte)uVar11 & 0x1f;
  if ((uVar10 & 0x4000) != 0) {
    uVar38 = uVar26 | uVar33;
  }
  uVar10 = 0;
  if (uVar39 != 0) {
    for (; (uVar39 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
    }
  }
  uVar24 = (ushort)uVar35 & 0xfeff;
  uVar26 = (uVar10 | 1 << (uVar27 & 0x1f)) & 0xfff7ffff;
  bVar40 = ((uVar22 << bVar18 | uVar22 >> 0x20 - bVar18) & 0x6600) == 0;
  uVar35 = CONCAT31((uint3)(uVar17 >> 8) & 0xffff00 | (uint3)(byte)((ushort)(uVar7 + 0x7c89) >> 8),
                    bVar40);
  uVar10 = (uVar21 & 0xffff0000 |
           CONCAT11((byte)(uVar21 >> 8) | (byte)uVar21,(byte)uVar21) & 0xffffb061) & uVar26;
  lVar4 = (longlong)
          (int)(uVar38 & 0xffff0000 |
               (uint)CONCAT11((char)(uVar38 >> 8) << 1 | CARRY4(uVar35,uVar26),(char)uVar38)) *
          (longlong)(int)uVar35;
  uVar38 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar20 = (ushort)uVar27 + 0x2bb6;
  uVar35 = (uint)lVar4;
  if (0xd449 < (ushort)uVar27 || uVar20 == 0) {
    uVar35 = uVar10;
  }
  iVar28 = uVar10 + 0xaca1a70a;
  if (-1 < iVar28) {
    uVar38 = CONCAT22((short)((ulonglong)lVar4 >> 0x30),uVar20);
  }
  bVar18 = ((bVar40 + (char)uVar26) - (char)lVar4) - 1U & 7;
  uVar38 = uVar38 & 0xffffff00 | (uint)(byte)((byte)uVar38 << bVar18 | (byte)uVar38 >> 8 - bVar18) |
           0x20000000;
  uVar10 = (uVar27 & 0xffff0000 | (uint)uVar20) >> 1;
  uVar26 = uVar10 - uVar38;
  if ((int)uVar38 <= (int)uVar10) {
    uVar38 = iVar28 * 0x40000;
  }
  uVar21 = uVar26 * 3 + 0x7537dac & 0xffff;
  uVar10 = 0x1eb93619 - uVar21;
  bVar12 = (byte)uVar10;
  uVar33 = uVar26 & 0xffff0000 | (uint)(ushort)((ushort)uVar26 >> 1 | uVar24 * -0x8000);
  uVar25 = (ushort)uVar21;
  uVar7 = ((uVar25 >> 2 & 1) != 0) + 0xb5f3;
  bVar18 = (byte)uVar7;
  bVar6 = bVar18 + 0x91;
  uVar20 = uVar24 + (ushort)uVar26 * 2;
  if (0x6e < bVar18 || bVar6 == 0) {
    uVar20 = uVar25;
  }
  uVar21 = (uVar7 & 0xffffff00 | (uint)bVar6) >> 1;
  iVar28 = CONCAT22(0x2800,(ushort)(byte)uVar21 * (ushort)(byte)(uVar21 >> 8));
  uVar21 = uVar33 >> 0xf;
  lVar4 = (longlong)iVar28 * (longlong)iVar28;
  if ((int)lVar4 != lVar4) {
    uVar33 = uVar26 & 0xffff0000 | 0x1f00;
  }
  uVar24 = (ushort)((uVar26 & 0xff800000) >> 0xf) | (ushort)(byte)-(char)uVar21;
  uVar7 = uVar24 + 0xb687;
  uVar31 = (uint3)((((uVar10 & 0xffffff00 |
                     (uint)(byte)(bVar12 >> (bVar12 & 7) | bVar12 << 8 - (bVar12 & 7))) >> 1) <<
                   0x11) >> 8) | (uint3)((uVar26 & 0xff800000) >> 0x17) & 0xffff00;
  bVar18 = (byte)(uVar7 >> 8);
  uVar10 = CONCAT31(uVar31 | bVar18,(POPCOUNT(uVar7 & 0xff) & 1U) != 0);
  if ((SBORROW2(uVar24,0x4979) != false) == (short)uVar7 < 0) {
    uVar10 = uVar10 & 0xffff | (uint)(ushort)(uVar31 >> 8) << 0x10;
  }
  uVar26 = (uVar21 & 0xffff) >> (sbyte)uVar10;
  uVar7 = (ushort)uVar26;
  uVar26 = uVar26 & 0xffff0000;
  uVar21 = uVar33 & 0xffff0000 |
           (uint)(ushort)(((short)uVar33 << 1 | (ushort)(uVar20 * 0xebb) >> 0xf) * -0x58da);
  uVar31 = (uint3)(uVar10 >> 8) & 0xffff00;
  bVar6 = (byte)((ushort)((short)uVar10 << 1) >> 8);
  uVar10 = 0x545efc38 -
           CONCAT31(uVar31 | bVar6,0 < (short)((ushort)(uVar21 << 1) | (ushort)((int)uVar21 < 0)));
  bVar6 = bVar6 - 1;
  iVar28 = (uVar10 & 0xffff) * (uint)bVar6 * 0x100;
  sVar8 = (ushort)bVar18 - (short)((uint)iVar28 >> 0x10);
  cVar13 = (char)((uint)iVar28 >> 0x10);
  iVar2 = CONCAT22((ushort)(uVar38 >> 0x13),sVar8 * 2 | (ushort)(sVar8 < 0));
  uVar33 = (iVar2 * 9 + 0xfc) - (uVar26 | 0x7400) >> 4;
  uVar38 = (short)CONCAT31((uint3)((uint)iVar28 >> 8) & 0xff,0xcd) * 0x7400;
  uVar21 = ~(((((uint3)((ulonglong)lVar4 >> 0x28) & 0xffff00) << 8 |
              (uint)(ushort)((uVar7 >> 0xb | (uVar7 & 7) << 5) * 2 + 1)) &
             ~(1 << ((ushort)bVar18 & 0x1f))) * 0x4ca33a08 & 0xffff0000 |
             CONCAT11((char)((uint)iVar28 >> 0x18) << 1,cVar13) & 0xffffff00 | 0x100 |
            (uint)(byte)(cVar13 - 0x34));
  if (-1 < (int)(iVar2 + (uVar35 & 0xfbff0000) + 1)) {
    uVar21 = uVar35 & 0xfbff0000;
  }
  uVar39 = uVar33 ^ 1 << (uVar21 & 0x1f);
  uVar20 = (short)uVar33 + 0x76c8;
  uVar35 = (uVar38 & 0xffff | uVar10 & 0xffff0000) >> 1;
  if (!(bool)((bVar6 ^ 0x5f) & 1)) {
    uVar20 = (ushort)uVar39;
    uVar35 = uVar21;
  }
  uVar10 = uVar39 & 0xffff | 0xc000;
  uVar38 = (uVar38 >> 0x10 & 0x3f00 | (uint)(byte)-(char)(uVar38 >> 0x10)) << 0x10 | uVar35 & 0xffff
  ;
  uVar38 = ((uVar38 % uVar10 & 0x3fff) << 0x10 | uVar38 / uVar10 & 0xffff) / (uint)(uVar20 | 0xc000)
           & 0xffff;
  uVar33 = uVar35 & 0xffff0000 | uVar38 | uVar21;
  uVar35 = (uint)(byte)((char)(uVar33 >> 8) * '\x02') << 8;
  uVar20 = uVar33 == 0 | 4 |
           (ushort)(byte)((char)((uint)((ushort)uVar21 & 0xff00) >> 8) + 0x5a) << 8;
  uVar11 = uVar21 & 0xffff0000 | (uint)uVar20;
  uVar10 = (uVar39 | 0xc000) * -0x48f87aeb & 0xffff0000;
  uVar21 = (uint)(ushort)(uVar31 >> 8) << 0x10;
  if (((uVar33 & 0xffff0000 | uVar35) & 0xbc610570) != 0) {
    uVar21 = uVar10 | (ushort)(uVar20 * 0x3dc5);
  }
  uVar24 = (ushort)(uVar39 | 0xc000) ^ 1 << ((ushort)uVar21 & 0xf);
  uVar7 = (ushort)uVar21 ^ 0x40;
  bVar18 = (byte)uVar7 & 0xf;
  uVar32 = uVar24 >> bVar18 | uVar24 << 0x10 - bVar18;
  uVar35 = (uVar35 & 0x570) * (uint)uVar7;
  uVar24 = uVar7 >> 1 & 0x57ff;
  bVar18 = (byte)((uint3)((uint3)(uVar11 >> 0x10) | (uint3)(((uint)uVar20 << 0x18) >> 8)) >> 0xd) |
           0xc0;
  uVar7 = (ushort)uVar35 & 0x3fff;
  uVar11 = (uVar11 >> 8) << 0x13 | (uint)CONCAT11(~bVar18,(short)uVar24 < (short)uVar32);
  uVar33 = (ushort)(uVar20 * 0x3dc5) & 0x1f;
  uVar7 = ((uVar7 / bVar18 & 0xff | uVar7 % (ushort)bVar18 << 8) + uVar20 * -0x3dc5) -
          (ushort)((uVar11 >> uVar33 & 1) != 0);
  uVar25 = (ushort)((uVar26 | uVar35 >> 0x10) >> 1);
  sVar8 = uVar25 + 0x2698;
  uVar35 = (uint)(uint3)((uint3)(uVar11 >> 8) & ~(uint3)((uint)(1 << uVar33) >> 8)) << 8;
  if (uVar25 < 0xd968 && sVar8 != 0) {
    uVar35 = (uint)uVar32;
  }
  uVar26 = (ushort)(uVar24 - uVar32) & 0xffffff0f;
  sVar15 = (sbyte)uVar26;
  bVar18 = 0x9c - (char)(uVar26 >> 8);
  cVar13 = (char)(uVar35 >> 8);
  uVar5 = CONCAT14((ushort)(uVar20 * 0x66c6) < 0x83c2,
                   uVar39 & 0xffff0000 | (uint)(ushort)(uVar32 * 2 + 1)) ^ 0xa31d;
  uVar26 = (uint)(ushort)(uVar7 & 0xff | (ushort)(byte)((char)((uint)uVar7 >> 8) + 0x8c) << 8) *
           (uint)(ushort)((ushort)((short)uVar38 + 0x5e82U) >> sVar15 | sVar8 << 0x10 - sVar15);
  uVar38 = CONCAT22((ushort)((uint)((int)uVar5 << 0x1a) >> 0x10) | (ushort)((uVar5 >> 7) >> 0x10),
                    CONCAT11(bVar18,sVar15) + 0x43);
  uVar38 = uVar38 << sVar15 | uVar38 >> 0x20 - sVar15;
  uVar35 = uVar35 >> 8 & 0xff;
  uVar20 = (ushort)(uVar26 >> 0x10) & 0xff00 | (ushort)(byte)((char)(uVar26 >> 0x10) - cVar13);
  if ((char)(cVar13 + sVar15) < '\0') {
    uVar20 = (ushort)uVar38;
  }
  bVar6 = ((byte)uVar35 & 0x1f) % 9;
  uVar7 = ((ushort)bVar18 << 8 | (ushort)uVar35) * -0x25fa;
  bVar18 = (byte)uVar7;
  bVar6 = ((byte)((uVar20 >> 8) >> bVar6) | (byte)((uVar20 >> 8) << 9 - bVar6)) & bVar18;
  iVar28 = (uVar10 | (ushort)((short)(char)(uVar26 >> 1) * (short)(char)uVar20 & 0xffU |
                             (ushort)(byte)(((char)bVar6 < '\0') << 7 | (bVar6 == 0) << 6 |
                                            ((uVar16 & 0x1000) != 0) << 4 |
                                           ((POPCOUNT(bVar6) & 1U) == 0) << 2) << 8) | 0x200) + 1;
  bVar18 = bVar18 >> (bVar18 & 7) | bVar18 << 8 - (bVar18 & 7);
  uVar35 = uVar7 & 0xffffff00;
  sVar8 = ((ushort)iVar28 & 0xff00 | (ushort)(byte)((char)iVar28 + 0x10)) + 0x9d +
          ((ushort)uVar35 | (ushort)bVar18);
  bVar6 = ((char)(uVar35 >> 8) - bVar18) - 1;
  uVar35 = ((uint)(ushort)(sVar8 * 0x50cb) << 0x11 |
           (uint)(CONCAT14((char)((char)sVar8 * '\x03') < '\0',iVar28) >> 0x10)) << 5;
  lVar4 = (ulonglong)
          (uVar35 & 0xffff0000 | (uint)(ushort)((short)uVar35 << 1 | (ushort)uVar38 >> 0xf)) *
          (ulonglong)uVar38;
  uVar38 = uVar38 + 0xbee265a1;
  uVar7 = (ushort)((ulonglong)lVar4 >> 0x20);
  uVar20 = uVar7 >> 1;
  uVar7 = uVar7 << 0xf;
  uVar25 = (ushort)((ulonglong)lVar4 >> 0x30);
  uVar24 = uVar20 | uVar7;
  uVar10 = (uVar38 & ~(1 << (uVar24 & 0x1f))) << 1;
  uVar33 = (uint)CONCAT11((char)((uVar38 & 0xffff) >> 8) << 1,(char)(uVar38 & 0xffff)) +
           CONCAT22(uVar25,uVar24) + 1;
  uVar16 = (((ushort)((bVar18 & 7) << 5 | (ushort)(bVar6 >> 3) |
                     (ushort)(byte)((char)((uint)(ushort)(CONCAT11(bVar6,bVar18) << 5) >> 8) + 0x6a)
                     << 8) >> 1 & 0xff |
            (ushort)(byte)~(((int)((ulonglong)lVar4 >> 0x20) != 0) + (char)((ulonglong)lVar4 >> 8))
            << 8) - 1) * 2;
  uVar20 = ((short)uVar10 - (uVar20 & 0xff00 | uVar7 | (ushort)(-1 < (short)uVar16))) - 1;
  uVar35 = ((int)((uint)lVar4 >> 0x13) >> 8) * (uVar24 & 0xff00 | (uint)(-1 < (short)uVar16));
  uVar10 = (uVar10 & 0xffff0000 | (uint)uVar20) >> 1;
  uVar39 = uVar10 | 0x80000000;
  uVar7 = (ushort)uVar10;
  uVar10 = (uint)(ushort)((short)uVar33 << 1 | uVar7 >> 0xf);
  uVar26 = ((uVar21 & 0xfffe0000) >> 1 | uVar16 & 0xffffff00 |
           (uint)(byte)(((char)uVar16 + -0x5d) - (uVar20 < 0x885a))) + uVar39;
  iVar28 = 0;
  if (uVar26 != 0) {
    for (; (uVar26 >> iVar28 & 1) == 0; iVar28 = iVar28 + 1) {
    }
  }
  uVar20 = (ushort)iVar28;
  if ((uVar35 & 0xffff) == 0) {
    uVar20 = 0;
  }
  iVar28 = (uVar35 & 0xffff) * (uVar33 >> 0x11 | (uVar10 & 1) << 0xf);
  uVar20 = (ushort)iVar28 | 1 << (uVar20 & 0xf);
  uVar7 = (short)uVar38 * 0x304a + uVar7 * 8 + 0xd0ef;
  uVar7 = uVar7 & 0xff00 | (ushort)(byte)((char)uVar7 << 1);
  uVar26 = uVar26 * 8;
  uVar35 = uVar38 * -0x1a699f6c | (uint)((uVar20 >> 1 & 1) != 0);
  if ((POPCOUNT(uVar7 - 1 & 0xff) & 1U) != 0) {
    uVar35 = uVar26;
  }
  uVar20 = (short)(char)((uint)(uVar20 >> 2) >> 8) << 1;
  uVar21 = (uint)uVar20 << 0xc;
  uVar38 = 0x1f;
  if (uVar39 != 0) {
    for (; uVar39 >> uVar38 == 0; uVar38 = uVar38 - 1) {
    }
  }
  uVar16 = ((ushort)uVar26 ^ 0x2000) + 1 & 0xff0f;
  uVar24 = (ushort)uVar21;
  sVar15 = (sbyte)uVar16;
  uVar39 = (uint)(ushort)(uVar24 >> sVar15 | (uVar16 | uVar24) << 0x10 - sVar15);
  bVar18 = (byte)((uint)iVar28 >> 0x10);
  iVar2 = 0x1f;
  if (uVar38 != 0) {
    for (; uVar38 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  uVar11 = (uint)CONCAT11(0 >> (bVar18 & 0x1f),bVar18);
  uVar26 = uVar26 & 0xffff0000 | uVar21 & 0xffff0000 | uVar11;
  uVar21 = ((uVar33 & 0xffff0000 | uVar10) & 0x1fffe) << 0xf | (uint)(ushort)(uVar7 + 0x198a) |
           0xc0000000;
  uVar3 = CONCAT44(((uVar20 & 0xffff0) << 0xc) >> 8 | (uVar39 & 0xff00) << 8 |
                   (uVar39 & 0x3f) << 0x18,
                   CONCAT22((short)((int)((uint)uVar25 << 0x17) >> 0x11),
                            CONCAT11((byte)((uint)iVar28 >> 0x1f),
                                     (bVar18 + sVar15) * '\x04' | (byte)(bVar18 + sVar15) >> 6)));
  uVar10 = (uint)(uVar3 / uVar21);
  uVar3 = uVar3 % (ulonglong)uVar21;
  sVar8 = (short)uVar3 << 1;
  bVar6 = (byte)sVar8 | (byte)(uVar3 >> 8) >> 7;
  uVar20 = CONCAT11(~(byte)((ushort)sVar8 >> 8),bVar6 >> (bVar18 & 7) | bVar6 << 8 - (bVar18 & 7));
  bVar40 = uVar10 < uVar26;
  if (uVar10 != uVar26) {
    uVar10 = uVar26;
  }
  uVar7 = uVar20 - 0x7e0;
  sVar8 = uVar7 - bVar40;
  if ((uVar20 < 0x7e0 || uVar7 < bVar40) || sVar8 == 0) {
    uVar10 = uVar10 & 0xffff0000 | uVar11;
  }
  return uVar10 + uVar21 * 2 + uVar26 + CONCAT22((short)(uVar3 >> 0x10),sVar8) + iVar2 +
         ((uVar38 & 0xffff0000 | uVar38 >> 1 & 0x7fff) ^ 2) +
         ((uVar35 + 0xd9beaf4b) * 2 & 0xffff0000 |
         (uint)(ushort)((ushort)-(ushort)((int)uVar21 < 0) >> 1 |
                       (ushort)((int)uVar21 < 0) * -0x8000)) + -0x7d3ed738;
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
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte bVar6;
  uint3 uVar7;
  char cVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  sbyte sVar14;
  byte bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint3 uVar19;
  ushort uVar20;
  short sVar21;
  char cVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  ushort uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  ushort uVar31;
  short sVar32;
  uint uVar33;
  ushort uVar34;
  uint uVar35;
  int iVar36;
  bool bVar37;
  
  for (uVar18 = 0x1f; 0xff0072fbU >> uVar18 == 0; uVar18 = uVar18 - 1) {
  }
  uVar17 = uVar18 & 0xffff | 0xc000;
  uVar10 = uVar18 & 0xffff | 0xc000;
  uVar12 = 0;
  uVar9 = SEXT12((char)(uVar10 / uVar17));
  uVar26 = (ushort)(uVar10 % uVar17 >> 2) >> 10 | 0xbec0;
  for (uVar17 = 0; (0x4add3532U >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
  }
  bVar13 = (byte)uVar17;
  bVar23 = ((char)uVar26 - (bVar13 | 0x34)) - 1;
  uVar10 = uVar26 & 0xffffff00 | 0xff000000 | (uint)bVar23;
  if (bVar23 == 0) {
    uVar10 = (ushort)(CONCAT11((bVar13 | 0x34) != 0,bVar13) | 0x34) | 0x97680000;
  }
  if (uVar10 != 0) {
    uVar12 = uVar10;
  }
  uVar33 = (int)(uVar18 & 0xffff0000 | (uint)(ushort)((uVar9 & 0xff) * (uVar9 & 0xff))) >>
           (bVar13 & 0x1f);
  lVar5 = (ulonglong)uVar12 * 0x6827c8b;
  uVar31 = (ushort)uVar33;
  uVar9 = uVar31 << 7;
  uVar26 = (short)lVar5 >> 1 & 0xffU | (ushort)(byte)~((char)((ulonglong)lVar5 >> 8) >> 1) << 8;
  uVar35 = 0x15a20000U >> (bVar13 & 0x1f) | 0x15a20000 << 0x20 - (bVar13 & 0x1f);
  uVar10 = CONCAT22((short)((ulonglong)lVar5 >> 0x10),uVar26) | 1 << (uVar35 & 0x1f);
  bVar23 = (char)uVar10 + 0x5b;
  uVar12 = uVar10 & 0xffffff00 | (uint)bVar23;
  iVar36 = (uint)(ushort)((short)((ulonglong)lVar5 >> 0x20) << (bVar13 & 0x1f) & 0xffU |
                         (ushort)((uVar26 & (ushort)uVar35) != 0) << 8) << 1;
  uVar18 = 0x1f;
  if (uVar12 != 0) {
    for (; uVar12 >> uVar18 == 0; uVar18 = uVar18 - 1) {
    }
  }
  uVar20 = (short)iVar36 >> 1;
  uVar28 = uVar20 | 0xda7d0000;
  uVar26 = (ushort)(uVar10 & 0xffffff00) | (ushort)(bVar23 & 0x7f) | (ushort)uVar18;
  uVar12 = uVar10 & 0xffff0000 | (uint)uVar26;
  bVar37 = 0 < (short)uVar26;
  bVar13 = bVar37 >> bVar37 | bVar37 << 8 - bVar37;
  uVar27 = uVar18 >> (bVar13 & 0x1f) | uVar12 << 0x20 - (bVar13 & 0x1f);
  uVar9 = uVar9 >> 0xe | (uVar9 | uVar31 >> 9) << 2;
  uVar28 = uVar28 >> (bVar13 & 0x1f) | uVar28 << 0x20 - (bVar13 & 0x1f);
  uVar18 = uVar27 << 10;
  if ((uVar27 >> 0x16 | uVar18) <= uVar35) {
    uVar12 = uVar10 & 0xffff0000 | (uint)uVar20;
  }
  uVar27 = uVar12 << 1 | uVar18 >> 0x1f;
  uVar10 = (uVar12 << 1 & 0xffff0000 | (uint)(ushort)((short)uVar27 + 0x2b28)) << 1;
  uVar33 = uVar33 & 0xffff0000 | (uint)(ushort)(uVar9 + 0xbbbe);
  uVar17 = (uVar17 & 0x3fffc00 | 0xc000) << 6 | (uint)bVar13 | 0x7c00;
  if (uVar9 < 0x4442) {
    uVar17 = uVar35;
  }
  bVar13 = (byte)uVar10 >> 1 | (byte)(uVar18 >> 0x18) & 0x80;
  uVar9 = (ushort)uVar10 & 0xff00;
  sVar14 = (sbyte)(uVar17 & 0xffffff0f);
  uVar26 = (short)(ushort)uVar35 >> 1;
  uVar28 = (uVar35 & 0xffff0000 | (uint)uVar26) -
           ((int)(uVar28 & 0xffff0000 |
                 (uint)(ushort)((short)uVar28 * 2 + (ushort)((int)uVar12 < 0))) >> 0x1f);
  uVar30 = uVar10 & 0xffff0000 | (uint)(ushort)(~(uVar9 | bVar13 >> 1) | 1 << (uVar26 & 0xf));
  iVar16 = (int)(uVar17 & 0xffff0000 |
                (uint)(ushort)((short)(uVar17 & 0xffffff0f) << sVar14 |
                              (ushort)(uVar9 | bVar13) >> 0x10 - sVar14)) >> 7;
  uVar10 = uVar33 << 7;
  uVar11 = (int)(uVar30 << 1) >> ((byte)iVar16 & 0x1f);
  uVar18 = (int)(short)uVar11 *
           (int)(short)(CONCAT11((char)((uint)iVar36 >> 8) >> 1,(int)uVar12 >= 0 && uVar27 != 0) * 2
                       + -0x65e6);
  uVar12 = uVar18 & 0xffff;
  uVar26 = (ushort)uVar12;
  uVar31 = (ushort)iVar16;
  uVar9 = uVar31 - uVar26;
  uVar20 = (ushort)((int)(uVar17 & 0xffff0000) >> 0x17);
  uVar18 = ((uVar18 >> 0x10 & 0xff) << 0x10 | uVar12) / (uVar9 | 0xc000) & 0xffff;
  uVar17 = uVar10 & 0xffff0000;
  lVar5 = (longlong)(int)(uVar11 & 0xffff0000 | uVar18) *
          (longlong)
          (int)(uVar17 | (ushort)((short)((ushort)(CONCAT14((int)uVar30 < 0,uVar33) >> 0x1a) |
                                         (ushort)uVar10) >> 1));
  uVar31 = CONCAT11((char)uVar9,uVar31 < uVar26) + 1;
  iVar36 = ((uint)lVar5 & 0xffff) * (uint)uVar31;
  uVar10 = (uVar28 & 0xffff0000 | (uint)(ushort)((short)uVar28 + (short)uVar18)) + 0x12736d7a;
  uVar26 = ~(uVar9 | 0xc000);
  uVar9 = (ushort)((uVar35 & 0xffff0000) >> 0x10) & ~(ushort)((uint)(1 << (uVar26 & 0x1f)) >> 0x10);
  uVar12 = CONCAT31((int3)(CONCAT22(uVar20,uVar26) >> 8),99);
  sVar21 = ((ushort)((uint)iVar36 >> 0x10) & 0xff |
           (ushort)(byte)((byte)((uint)iVar36 >> 0x18) | 99) << 8) - (uVar26 + uVar31 + -0x77ff);
  uVar33 = CONCAT22((short)((ulonglong)lVar5 >> 0x30),sVar21);
  uVar18 = uVar33 & ~(1 << (uVar31 & 0x1f));
  if ((uVar33 >> (uVar31 & 0x1f) & 1) != 0 || sVar21 == 0) {
    uVar18 = uVar12;
  }
  if (SCARRY4(uVar18,0x5a5ff4bb)) {
    uVar12 = uVar18 + 0x5a5ff4bb & 0xffff | (uint)uVar20 << 0x10;
  }
  iVar36 = (uVar17 | (ushort)((uVar31 - sVar21) + 0x6ad3)) << 1;
  uVar26 = CONCAT11((char)(sVar21 >> 0x19),(byte)sVar21 >> 2);
  uVar18 = uVar12 >> 1 & 0x7f;
  uVar17 = uVar12 & 0xffff0000 | uVar18;
  bVar13 = (byte)uVar18 & 0x1f;
  uVar17 = uVar17 >> bVar13 | uVar17 << 0x20 - bVar13;
  uVar31 = ((ushort)iVar36 & 0xb2b4) + 1;
  uVar35 = CONCAT22(uVar9 | 0xcfb9,0xb827);
  bVar13 = (byte)uVar17;
  uVar33 = uVar12 & 0xffff0000 |
           (uint)(byte)((byte)((uint)(ushort)((short)uVar18 << 0xd) >> 8) >> (bVar13 & 0x1f)) << 8;
  uVar18 = 1 << (uVar31 & 0x1f);
  if ((ushort)uVar10 < 0xb828) {
    uVar10 = uVar33 | uVar18;
  }
  uVar27 = (uint)((int)uVar10 >> (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
  uVar28 = CONCAT22((short)((ulonglong)lVar5 >> 0x10),
                    (short)(char)((uint)(ushort)(uVar26 >> 6 | uVar26 << 10) >> 8)) << 1;
  uVar20 = (ushort)uVar28 & 0x3fff;
  uVar26 = (ushort)(byte)((byte)((uint)(ushort)(short)(char)(uVar12 >> 8) >> 8) | 0xc0);
  uVar12 = (uint)(ushort)(uVar20 / uVar26 & 0xff | uVar20 % uVar26 << 8);
  uVar10 = 0;
  if (uVar35 != 0) {
    for (; (uVar35 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
    }
  }
  uVar17 = uVar17 << (bVar13 & 0x1f);
  bVar13 = (byte)(uVar17 >> 8);
  bVar23 = (char)((byte)uVar10 | (byte)(uVar12 >> 8)) >> ((byte)uVar17 & 0x1f);
  uVar12 = (uVar28 & 0xffff0000 | uVar12) << 1;
  uVar20 = (ushort)uVar27;
  uVar26 = 0x9c17;
  if ((bVar23 & 0x10) == 0) {
    uVar26 = uVar20;
  }
  uVar34 = (ushort)uVar12;
  sVar21 = (short)((uVar33 | uVar18 & 0xffffff00 | (uint)(byte)((char)uVar18 + 0xbf)) * 0x75b5e275
                  >> 0x10);
  uVar33 = (CONCAT22(uVar9,uVar26) | 0xcfb90000) & 0xfff7ffff | 0x2000000;
  uVar18 = CONCAT11(bVar13 << 7 | bVar13 >> 1,(byte)uVar17) & 0xffffff86;
  uVar18 = (uVar17 & 0xffff0000 | uVar18) >> ((byte)uVar18 & 0x1f);
  uVar9 = (short)uVar18 >> 1;
  if (-1 < (int)(uVar12 & 0xffff0000 |
                (uint)(ushort)((uVar34 & 0xff00 | (ushort)((sVar21 >> 10) - uVar34) >> 8) << 5 |
                              uVar31 >> 0xc))) {
    uVar9 = uVar20;
  }
  uVar31 = ~(ushort)((int)uVar33 >> 1) & ~(1 << ((bVar23 & 0x1e) >> 1));
  bVar13 = (byte)uVar9 & 0xf;
  uVar9 = uVar9 << bVar13 | uVar9 >> 0x10 - bVar13;
  uVar34 = uVar20 & 0xf7ff;
  uVar27 = uVar27 & 0xffff0000;
  uVar26 = uVar9 + uVar34;
  uVar35 = CONCAT22(sVar21 >> 0x1a,uVar9 + uVar31) | 0xcc2e1b2d;
  bVar13 = (byte)uVar26 & 0xf;
  uVar9 = uVar26 << bVar13 | uVar26 >> 0x10 - bVar13;
  uVar17 = CONCAT22((ushort)((uint)iVar36 >> 0x10) & 0xd5c3,0xd7ec) >> 0xe;
  bVar15 = (byte)uVar35;
  bVar13 = (byte)uVar9 & 0x1f;
  uVar12 = (uVar18 & 0xffff0000 | (uint)uVar9) >> bVar13 | (uVar27 | uVar34) << 0x20 - bVar13;
  uVar18 = uVar12 << 1;
  bVar25 = (byte)uVar18;
  bVar6 = (byte)(uVar12 >> 0x1f);
  bVar24 = bVar15 >> 2 | bVar15 << 6;
  uVar19 = (uint3)(uVar35 >> 8);
  bVar15 = (bVar25 | bVar6) + bVar24;
  uVar9 = (ushort)uVar18 & 0xff00 | (ushort)bVar15;
  sVar21 = bVar24 - uVar9;
  bVar13 = (bVar15 & 0x1f) % 0x11;
  uVar7 = CONCAT12(bVar24 < uVar9,uVar20) & 0xfff7ff;
  uVar9 = (short)uVar7 << bVar13 | (ushort)(uVar7 >> 0x11 - bVar13);
  bVar13 = bVar15 << (bVar15 & 0x1f);
  uVar12 = (int)(char)((uint)(ushort)(0xd7ecU >> (bVar15 & 0xf) | -0x2814 << 0x10 - (bVar15 & 0xf))
                      >> 8) *
           ((uVar10 & 0xffff0000 |
            (uint)(ushort)(((ushort)uVar10 & 0xff00) >> 1 | (ushort)bVar23 << 0xf)) >> 0xc |
           (uint)uVar34 << 0x14) * 2;
  uVar10 = (int)(uVar18 & 0xffff0000 | CONCAT11((uVar9 >> 1 & 1) == 0,bVar15) & 0xffffff00 |
                (uint)bVar13) >> (bVar13 & 0x1f);
  uVar9 = (short)(uVar9 | 2) >> ((byte)uVar10 & 0x1f);
  uVar18 = (uint)uVar9;
  if (0 < (short)((ushort)(((ushort)uVar17 & 0xff00 |
                           (ushort)(byte)((char)uVar17 << (bVar25 & 0x1f | bVar6))) + 0xd7ec) >> 1 |
                 0x8000)) {
    uVar10 = uVar12;
  }
  iVar36 = 0;
  if (uVar10 != 0) {
    for (; (uVar10 >> iVar36 & 1) == 0; iVar36 = iVar36 + 1) {
    }
  }
  uVar28 = CONCAT31(uVar19 & 0xffff00 | (uint3)(byte)((ushort)sVar21 >> 8),(sVar21 != 0) << 1);
  uVar27 = iVar36 - (uVar27 | uVar18);
  uVar9 = ((((short)uVar31 >> 1) >> (bVar25 & 0x1f | bVar6)) + 0x4e0c) - uVar9;
  uVar35 = ((int)uVar12 >> 0x1f) + 0x623e8611;
  uVar12 = uVar12 * 0x200 | (uint)(uVar19 >> 0xf);
  uVar17 = (uint)((ushort)uVar27 & 0x7fff);
  if ((uVar27 & 0x4000) != 0) {
    uVar17 = uVar18;
  }
  uVar17 = uVar27 & 0xffff0000 | uVar17;
  uVar26 = ((ushort)uVar10 & 0xff00) >> 7 & 0xff0f;
  uVar31 = uVar26 | uVar9 * 0x200;
  sVar14 = (sbyte)uVar26;
  if (uVar12 != uVar28) {
    uVar12 = uVar28;
    uVar17 = uVar28;
  }
  bVar15 = -((char)(uVar17 >> 8) >> 7);
  lVar5 = (longlong)(int)uVar12 *
          (longlong)
          (int)(uVar35 & 0xffff0000 |
               (uint)(ushort)((short)uVar35 << sVar14 | uVar31 >> 0x10 - sVar14));
  bVar13 = (byte)(uVar31 << 1) & 7 | bVar15;
  bVar25 = (byte)((ulonglong)lVar5 >> 0x28);
  bVar23 = (byte)lVar5;
  iVar36 = (uVar18 & 0xfffffffd) * 2;
  bVar37 = (iVar36 + (uint)(byte)(bVar23 + bVar15 + 0x70) & 1) != 0;
  uVar26 = ((short)iVar36 -
           (CONCAT11(bVar25 >> bVar13 | bVar25 << 8 - bVar13,(char)((ulonglong)lVar5 >> 0x20)) &
           0xfffb)) - (ushort)bVar37;
  bVar15 = (byte)((uint)(ushort)lVar5 >> 8);
  bVar13 = bVar37 + bVar15;
  uVar18 = (int)(short)(uVar26 & 0xff | (ushort)(!CARRY1(bVar37,bVar15) && bVar13 != 0) << 8) *
           (int)(short)uVar9;
  sVar21 = (short)(uVar18 >> 0x10);
  uVar12 = CONCAT22((short)((int)uVar33 >> 0x11),uVar9 >> 1 | sVar21 << 0xf);
  bVar15 = (byte)uVar18 << (bVar23 & 7) | (byte)uVar18 >> 8 - (bVar23 & 7);
  iVar36 = (uVar17 & 0xffffff00 | (uint)bVar13) << 1;
  bVar25 = (byte)(uVar17 >> 0x1f) | (byte)iVar36;
  uVar10 = CONCAT22((short)((ulonglong)lVar5 >> 0x30),sVar21) & 0xffffff00;
  uVar33 = (uVar10 | uVar18 >> 0x10 & 0xff | 0xa0) * -0x13ef795;
  uVar31 = (ushort)uVar33;
  bVar13 = (byte)(uVar10 >> 8);
  uVar9 = (short)((ushort)uVar18 & 0xff00 | (ushort)bVar15) >>
          (bVar23 & ~(byte)(1 << (bVar15 & 0x1f)) & 0x1f);
  uVar18 = (uVar33 & 0xffff0000 | (uint)(ushort)(uVar31 << 0xd | uVar31 >> 3)) - 1;
  if (0x18 < bVar13) {
    uVar18 = uVar12;
  }
  uVar31 = uVar9 & 0xff | ((byte)(((byte)((uint)uVar9 >> 8) | 0x2f) << 1) & 0x3f) << 8;
  uVar9 = (ushort)(bVar13 != 0x19 | 0xc0);
  uVar10 = (uVar17 & 0x7fff8000) << 1;
  lVar5 = (ulonglong)
          (CONCAT22((short)uVar26 >> 0xf,uVar31 / uVar9 & 0xff | uVar31 % uVar9 << 8) + 1) *
          0x83c31941;
  uVar33 = CONCAT22((short)((ulonglong)lVar5 >> 0x30),(short)((ulonglong)lVar5 >> 0x20) << 8) << 1;
  uVar9 = (short)lVar5 << 0xf;
  cVar8 = (char)lVar5 * '\x02';
  iVar16 = CONCAT31((int3)((ulonglong)lVar5 >> 8),cVar8);
  iVar29 = uVar12 - iVar16;
  if (iVar29 != 0 && iVar16 <= (int)uVar12) {
    uVar33 = uVar33 & 0xffff0000 | (uint)CONCAT11(~(byte)((uint)iVar36 >> 8),bVar25);
  }
  uVar28 = uVar10 | CONCAT11(iVar29 < 0,bVar25);
  uVar11 = uVar28 * -0x27842b17;
  uVar27 = (byte)(bVar25 + 1) & 0xffffff0f;
  sVar14 = (sbyte)uVar27;
  uVar26 = (short)uVar11 + ((ushort)uVar27 | 0x1900) + 1;
  uVar30 = (iVar29 + 0xfd21e62aU & 0xffff0000 |
           (uint)(ushort)((short)(iVar29 + 0xfd21e62aU) << 6 |
                         (ushort)((ushort)((byte)uVar33 & 0xfe) << 0x10 - sVar14) >> 10)) * 2;
  uVar12 = uVar30 + 0x30896687;
  uVar35 = (int)(short)((byte)(cVar8 + 0x7f) | 0xff00) * (int)(short)uVar9;
  uVar10 = (uVar18 & 0xffff0000 | (uint)uVar9) ^
           1 << (((ushort)(((ushort)(uVar28 << 1) | (ushort)(uVar10 >> 0x1f)) << sVar14 |
                          CONCAT11((byte)(uVar33 >> 8) ^ (byte)((ulonglong)lVar5 >> 8),(byte)uVar33)
                          >> 0x10 - sVar14) & 0xf) << 1 | (uint)(uVar30 < 0xcf769979));
  uVar28 = ((uVar11 & 0xffff0000 | (uint)uVar26) >> 1 | (uint)((uVar26 & 1) != 0) << 0x1f) *
           0x3eb793d3;
  uVar18 = uVar28 & 0xffff0000;
  uVar28 = uVar18 | (ushort)uVar28 & 0xfffe;
  if ((POPCOUNT(((ushort)uVar12 | 0xac62) & 0xff) & 1U) != 0) {
    uVar28 = uVar18 | uVar12 & 0xffff | 0xac62;
  }
  uVar18 = (((uVar17 & 0x7fff8000) << 3) >> 0x1c | uVar12 * 0x10) + 0xede0ad04;
  uVar17 = (uVar12 | 0xac62) >> sVar14 | uVar10 << 0x20 - sVar14;
  uVar26 = (ushort)(uVar18 >> 8) & 0xff;
  uVar31 = (ushort)uVar28 & (ushort)uVar10;
  uVar12 = uVar28 & 0xffff0000 | (uint)uVar31;
  sVar21 = (short)uVar17;
  uVar9 = sVar21 * 2;
  uVar17 = uVar17 & 0xffff0000;
  uVar18 = uVar18 & 0xffff00ff;
  if ((short)uVar9 < 0) {
    uVar18 = uVar10;
  }
  uVar10 = (uint)CONCAT11(uVar9 != 0,(char)uVar18);
  uVar20 = ((ushort)(uVar35 >> 0x10) & 0xff00 | uVar26) >> 7;
  uVar30 = uVar33 & 0xffff0000 | (ushort)(uVar20 | uVar26 << 9) & 0xffffff00 |
           (uint)(byte)((char)uVar20 << 1);
  uVar9 = sVar21 << 6 | uVar9 >> 0xb;
  uVar26 = uVar9 + 0x41e5;
  uVar35 = (CONCAT22((short)((ulonglong)lVar5 >> 0x10),0xff00) & 0xffff0000 | uVar35 & 0xffff) ^
           0x6400;
  if ((uVar18 & 0x89) == 0) {
    uVar35 = uVar17 | uVar26;
  }
  uVar27 = uVar27 | 0x83c30000;
  if (uVar26 < 0x2836) {
    uVar27 = uVar35;
  }
  bVar13 = (byte)(uVar35 >> 8);
  uVar35 = uVar30 - uVar12;
  uVar12 = (uVar17 | (ushort)(uVar9 + 0x19af)) + 0x68c4d3c5 + (uint)(uVar30 < uVar12);
  uVar9 = (ushort)uVar12 << 3;
  uVar9 = (ushort)((ushort)(byte)-((byte)uVar27 <= bVar13) << 8) >> 0xd | uVar9 & 0xff |
          (ushort)(byte)((char)((uint)uVar9 >> 8) + 0x86) << 8;
  cVar22 = (char)(uVar35 >> 8);
  cVar8 = cVar22 + -1;
  uVar17 = uVar35 & 0xffff0000 | (uint)CONCAT11(cVar8,(char)uVar35);
  if (cVar8 != '\0' && '\0' < cVar22) {
    uVar17 = uVar27 & 0xffff0000 | (uint)uVar9;
  }
  uVar26 = (ushort)((uVar12 & 1) != 0);
  uVar20 = (uVar9 + 0x92ce) - uVar26;
  uVar35 = uVar27 & 0xffff0000 |
           (uint)(ushort)(uVar20 & 0xff |
                         (ushort)(byte)((byte)((uint)uVar20 >> 8) ^ (byte)uVar20) << 8) | 0x84f0b139
  ;
  uVar10 = (uVar18 & 0xffff0000 | uVar10 & 0xffffff89) & ~(1 << (uVar10 & 9));
  uVar18 = (uint)(ushort)(uVar31 >> 1 | (short)uVar10 << 0xf);
  uVar27 = (((uVar12 & 0xffff0000 | (uint)(ushort)(((ushort)uVar12 >> 1) + (short)uVar17)) +
            0x996dfc7e) - (uint)(-(uVar9 < 0x6d32 || (ushort)(uVar9 + 0x92ce) < uVar26) & 1) |
           0x20000000) & ~(1 << (uVar18 & 0x1f));
  uVar11 = -(uVar28 & 0xffff0000 | uVar18);
  bVar23 = (byte)uVar35;
  bVar23 = bVar23 >> (bVar23 & 0x1f);
  uVar35 = uVar35 & 0xffffff00;
  uVar18 = (uVar10 & 0xffffff00 | (uint)(byte)((byte)uVar10 ^ (byte)(uVar17 >> 8))) & uVar27;
  uVar26 = (short)uVar18 >> (bVar23 & 0x1f);
  uVar18 = uVar18 & 0xffff0000;
  uVar9 = (ushort)uVar11;
  uVar31 = uVar9 << 1 | uVar9 >> 0xf;
  uVar28 = uVar27 ^ 1 << (uVar31 & 0x1f);
  uVar10 = uVar17 & 0xffff0000;
  uVar12 = uVar18 | (ushort)(uVar26 + 0x69a3);
  uVar9 = bVar23 & 0xff0f;
  sVar14 = (sbyte)uVar9;
  uVar9 = (short)uVar28 << sVar14 | (ushort)((ushort)uVar35 | uVar9) >> 0x10 - sVar14;
  uVar17 = (int)(uVar33 & 0xffff0000 |
                (uint)(ushort)((short)uVar30 + CONCAT11(bVar13 + 0x1a,(short)uVar17 != 1) +
                              (ushort)(((uVar18 | uVar26) >> (uVar26 & 0x1f) & 1) != 0))) >> 5;
  uVar18 = (uVar35 | (byte)(sVar14 << 1)) * 2 + 1;
  if (uVar18 == uVar10 || (SBORROW4(uVar18,uVar10) != false) != (int)(uVar18 - uVar10) < 0) {
    uVar10 = uVar17;
  }
  bVar13 = (byte)uVar10;
  uVar26 = uVar9 << 8 | uVar9 >> 8;
  bVar23 = bVar13 & 0xf;
  uVar9 = (ushort)bVar23 << bVar23 | uVar26 >> 0x10 - bVar23;
  cVar8 = (char)((uint)uVar9 >> 8);
  uVar9 = uVar9 & 0xff;
  uVar31 = (uVar31 << 2 | (ushort)(CONCAT12((uVar27 >> (uVar31 & 0x1f) & 1) != 0,uVar31) >> 0xf)) +
           uVar26;
  uVar27 = uVar12 + 0xa21eff90;
  uVar18 = (uVar17 >> (bVar13 & 0x1f)) << 1;
  uVar30 = uVar18 | (uVar31 & 1) != 0;
  uVar33 = (ushort)(uVar9 | (ushort)(byte)((cVar8 << 1 | cVar8 < '\0') << 1) << 8 | 0x100) &
           0xffffff22;
  uVar35 = uVar10 & 0xffff0000 | uVar27 & 0xff;
  bVar23 = (byte)(uVar33 >> 8) ^ (byte)(uVar30 + 0xfeac9db3 + (int)(char)(uVar27 >> 8) >> 8);
  uVar17 = uVar28 & 0xffff0000 | (uint)(uVar26 - CONCAT11((char)(uVar10 >> 8) >> 1,bVar13) & 0xefff)
  ;
  if (-1 < (char)bVar23) {
    uVar17 = uVar30;
  }
  uVar10 = (uint)CONCAT11(bVar23,(char)uVar33) * 0x800;
  uVar33 = uVar10 + 0xc3ec14e3;
  uVar12 = (int)((uVar11 & 0xffff0000 | (uint)uVar31) >> 1 | (uint)(uVar12 < 0x5de10070) << 0x1f) >>
           ((byte)uVar9 & 0x1f);
  if (SBORROW4(uVar10,0x3c13eb1d)) {
    uVar12 = uVar35;
  }
  bVar37 = uVar10 >= 0x3c13eb1d && uVar33 != 0;
  uVar10 = (uint)CONCAT11(bVar37 << 2 | (byte)(CONCAT11(uVar10 < 0x3c13eb1d,bVar37) >> 7),
                          (char)uVar33);
  uVar28 = uVar33 & 0xffff0000 | uVar10;
  uVar19 = ((uint3)(uVar28 >> 8) & 0xff00) >> 8 | (uint3)uVar28 & 0xff00 |
           (uint3)((uVar10 << 0x18) >> 8);
  sVar32 = (short)uVar30 >> 0x1e;
  uVar18 = uVar18 & 0xffff0000;
  lVar5 = (ulonglong)(uVar35 >> 1 | (uint)(((ushort)uVar12 >> 6 & 1) != 0) << 0x1f) *
          (ulonglong)uVar17;
  uVar9 = sVar32 + (short)CONCAT31(uVar19,(byte)((uVar33 & 0xffff0000) >> 0x18) |
                                          (byte)((ulonglong)lVar5 >> 0x20));
  uVar33 = (uVar19 & 0xffff00) << 8 | (uint)(ushort)(sVar32 << 1 | (ushort)(sVar32 < 0) | 0x1000);
  uVar10 = uVar33 + uVar17 >> 1;
  bVar13 = (byte)(uVar10 >> 8);
  sVar21 = (ushort)(byte)lVar5 * (ushort)bVar13;
  iVar36 = CONCAT22((short)((ulonglong)lVar5 >> 0x10),sVar21);
  uVar12 = (((uVar12 & 0xffff0000 | (uint)(ushort)((ushort)uVar12 ^ 0x40)) - (uVar18 | uVar9)) -
           (uint)((sVar32 << 1 & 0x1000U) != 0)) + 1;
  uVar26 = CONCAT11(bVar13 << 1 | (char)((ushort)sVar21 >> 8) != '\0',(char)uVar10);
  iVar16 = iVar36 + -0x4e58bbc5;
  uVar18 = uVar18 | uVar9 & 0xffffff00 | (uint)(byte)((char)uVar9 + 0xbd);
  if (iVar16 == 0 || (SBORROW4(iVar36,0x4e58bbc4) != SBORROW4(iVar36 + -0x4e58bbc4,1)) != iVar16 < 0
     ) {
    uVar18 = uVar17;
  }
  uVar35 = 0;
  if (uVar18 != 0) {
    for (; (uVar18 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
    }
  }
  uVar9 = (ushort)uVar17;
  uVar28 = uVar17 & 0xffff0000 | (uint)(ushort)(uVar9 | 1 << (uVar9 & 0xf));
  uVar11 = uVar35 | 0xc0000000;
  uVar3 = CONCAT44(CONCAT22((ushort)(uVar18 >> 0x11),
                            (short)(uVar18 >> 1) + uVar26 +
                            (ushort)((uVar9 >> (uVar9 & 0xf) & 1) != 0)),iVar16) &
          0x3fffffffffffffff;
  uVar4 = uVar3 % (ulonglong)uVar11;
  uVar30 = uVar26 & 0xffffff0f;
  sVar14 = (sbyte)uVar30;
  uVar9 = (ushort)uVar30;
  uVar18 = uVar12 & 0xffff0000;
  if ((int)((uint)(uVar3 / uVar11) | (uint)uVar4) < 0) {
    uVar30 = uVar35 & 0xffff;
  }
  iVar36 = CONCAT22((short)(uVar4 >> 0x10),
                    CONCAT11((char)(uVar4 >> 8) + '|',(char)uVar4 << ((byte)uVar30 & 0x1f))) + -1;
  uVar12 = (uint)(ushort)((short)uVar12 << sVar14 | uVar9 >> 0x10 - sVar14);
  if (iVar36 == 0) {
    uVar12 = uVar30;
  }
  uVar35 = 0x1f;
  if (uVar11 != 0) {
    for (; uVar11 >> uVar35 == 0; uVar35 = uVar35 - 1) {
    }
  }
  uVar11 = uVar30 | 0xc000;
  uVar1 = (uint)((ushort)iVar36 & 0x3fff) << 0x10 | 0x1f;
  uVar2 = uVar1 % uVar11;
  bVar13 = (byte)uVar2;
  if (0xb3 < bVar13) {
    uVar30 = uVar35 & 0xffff;
  }
  uVar11 = uVar1 / uVar11;
  if (-0x4d < (char)bVar13) {
    uVar11 = uVar28;
  }
  uVar9 = (ushort)((ushort)(uVar27 >> 0x10) | (ushort)((uint)(1 << (uVar17 & 0x1f)) >> 0x10)) >> 8;
  if (0xb3 < bVar13) {
    uVar28 = uVar17 & 0xffff0000 | (uint)uVar9;
  }
  bVar23 = (byte)uVar30;
  uVar26 = (ushort)bVar23 << (bVar23 & 0x1f);
  uVar17 = uVar10 & 0xffff0000 | (uint)CARRY4(uVar33,uVar17) << 0x1f | (uint)uVar26;
  uVar28 = uVar28 + uVar17;
  uVar33 = (uint)(ushort)(uVar9 + 0xab86) + (uVar18 | uVar12) + (uint)(0x5479 < uVar9);
  bVar15 = (byte)uVar26;
  uVar26 = (ushort)uVar11 >> (bVar15 & 0xf) | (ushort)uVar11 << 0x10 - (bVar15 & 0xf);
  uVar9 = (ushort)uVar12 & 0xf;
  bVar13 = (bVar15 & 0x1f) % 9;
  uVar27 = uVar33 >> 1;
  uVar10 = uVar26 & 0xffffff00 | (uint)(byte)((char)uVar26 << (bVar15 & 0x1f)) | 0x3a760000;
  uVar26 = (ushort)uVar12 + 0x327;
  if (uVar26 != 0) {
    uVar17 = (uint)CONCAT11((char)(uVar2 >> 8) >> (bVar23 & 0x1f),
                            '\0' << bVar13 |
                            (byte)((ushort)((ushort)(((ushort)uVar28 >> uVar9 & 1) != 0) << 8) >>
                                  9 - bVar13));
  }
  sVar21 = (short)uVar17;
  uVar12 = uVar27 & 0xff;
  uVar33 = (uVar33 >> 9) << 8;
  iVar36 = 0;
  if ((int)sVar21 != 0) {
    for (; ((uint)(int)sVar21 >> iVar36 & 1) == 0; iVar36 = iVar36 + 1) {
    }
  }
  bVar23 = (byte)uVar17;
  uVar1 = iVar36 + 0xa2673c71U & 0xffff0000;
  bVar13 = (bVar23 & 0x1f) % 0x11;
  uVar11 = uVar12 | uVar33 & 0xffff | 0x1007c;
  uVar28 = (uVar28 & 0xffff0000 | (uint)(ushort)(((ushort)uVar28 ^ 1 << uVar9) - 1 | 0x800)) << 8 |
           uVar28 >> 0x18;
  sVar32 = (short)uVar28;
  iVar36 = (int)(short)((short)(char)((byte)(iVar36 + 0xa2673c71U) & 0xac) *
                       (short)(char)((byte)uVar12 | 0x7c)) * (int)sVar32;
  uVar20 = (ushort)((uint)iVar36 >> 0x10);
  uVar9 = (ushort)iVar36 & 0xff00 | (ushort)(byte)((char)iVar36 >> (bVar23 & 0x1f));
  uVar31 = uVar9 - uVar20;
  uVar10 = ((uint)((ulonglong)((longlong)(int)uVar10 * (longlong)(int)uVar10) >> 0x20) & 0x7fff8000)
           << 1 | (uint)uVar20;
  if ((short)uVar20 <= (short)uVar9) {
    uVar10 = uVar1 | uVar31;
  }
  uVar31 = uVar31 & 0x3fff;
  uVar9 = (ushort)(byte)((uVar10 | 0xc000) >> 8);
  uVar20 = uVar31 / uVar9 & 0xff;
  return (uVar1 | (ushort)(short)(char)uVar20) +
         (uVar33 & 0xffff0000 |
         (uint)(ushort)((short)(ushort)(byte)((byte)(uVar11 << bVar13) |
                                             (byte)(uVar11 >> 0x11 - bVar13)) >> (bVar23 & 0x1f))) +
         CONCAT31(CONCAT21(sVar21 >> 0xf,(byte)(uVar17 >> 8) >> (bVar23 & 0x1f)),
                  (char)bVar23 >> (bVar23 & 0x1f)) + (uVar10 | 0xc000) + (uVar28 ^ 0x800) +
         CONCAT22((ushort)((uVar35 & 0xffff0000) >> 0x11),
                  ((ushort)((uVar35 & 0xffff0000 |
                            (uint)(ushort)(((((ushort)uVar35 & ~(1 << ((ushort)uVar30 & 0xf))) -
                                            0x89b) + (short)uVar27) * 2)) >> 1) >> 2 | sVar32 << 0xe
                  ) + (uVar20 | uVar31 % uVar9 << 8)) + (uVar18 | uVar26) + 0x20bf0bc3;
}



// WARNING: Removing unreachable block (ram,0x0804c921)
// WARNING: Removing unreachable block (ram,0x0804c394)
// WARNING: Removing unreachable block (ram,0x0804c298)
// WARNING: Removing unreachable block (ram,0x0804c2a5)
// WARNING: Removing unreachable block (ram,0x0804c5c1)
// WARNING: Removing unreachable block (ram,0x0804c89a)
// WARNING: Removing unreachable block (ram,0x0804c93f)
// WARNING: Removing unreachable block (ram,0x0804cbaf)
// WARNING: Removing unreachable block (ram,0x0804c2c7)
// WARNING: Removing unreachable block (ram,0x0804c384)
// WARNING: Removing unreachable block (ram,0x0804c47e)
// WARNING: Removing unreachable block (ram,0x0804c5c5)

int log_size_10_var_004(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint5 uVar5;
  ushort uVar6;
  byte bVar7;
  char cVar11;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  sbyte sVar12;
  byte bVar13;
  byte bVar17;
  ushort uVar14;
  short sVar15;
  uint uVar16;
  uint3 uVar18;
  undefined uVar19;
  byte bVar20;
  short sVar21;
  ushort uVar22;
  char cVar25;
  byte bVar26;
  int iVar23;
  uint uVar24;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  byte bVar34;
  ushort uVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  ushort uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ushort uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  bool bVar43;
  
  for (uVar31 = 0x1f; 0xffffff9dU >> uVar31 == 0; uVar31 = uVar31 - 1) {
  }
  uVar31 = (uVar31 & 0xffff | 0x2c2c0000) + 0x3d9c27f2;
  uVar14 = (ushort)uVar31;
  uVar27 = uVar14 >> 3 | uVar14 << 0xd;
  uVar31 = uVar31 & 0xffff0000;
  uVar14 = (ushort)(uVar31 >> 0x10);
  bVar17 = (char)((uint)uVar27 >> 8) - 0x22;
  uVar41 = 0x80b6;
  if (bVar17 == 0) {
    uVar41 = 0xe37000c1;
  }
  uVar28 = uVar27 * 4 + 0xc036;
  uVar9 = CONCAT31(CONCAT21(uVar14,bVar17),-1 < (short)((ushort)bVar17 << 8)) & 0xffff;
  lVar4 = (ulonglong)
          (uVar31 | (CONCAT22((short)(((uVar41 | 0xd9608da9) & 0xffff | 0x1830000) % 0xff63),uVar28)
                    & 0x3fffffff) / (uVar9 | 0xc000) & 0xffff) * 0xcb64ff63;
  uVar27 = (short)lVar4 >> (sbyte)uVar9;
  uVar31 = (uVar9 | (uint)uVar14 << 0x10 | 0xc000) >> (sbyte)uVar9;
  if ((uVar28 | 0x21) != 0x50f7) {
    uVar31 = uVar31 & 0xffff0000 | 0x21;
  }
  iVar23 = CONCAT22((short)((ulonglong)lVar4 >> 0x30),(short)uVar27 >> 0xf);
  uVar41 = (ushort)((short)uVar27 >> 0xf) & 0x1f;
  uVar40 = 1 << uVar41 ^ 0xcb64ff63;
  uVar9 = iVar23 << 0xf;
  uVar41 = (uint)(CONCAT14((0xcb64ff63U >> uVar41 & 1) != 0,iVar23) >> 0x12);
  cVar25 = ((byte)(uVar41 >> 8) | (byte)(uVar9 >> 8)) + 1;
  uVar41 = uVar9 & 0xffff0000 | (uint)CONCAT11(cVar25,(char)uVar41);
  if (cVar25 == '\0') {
    uVar41 = CONCAT22((short)((ulonglong)lVar4 >> 0x10),uVar27);
  }
  uVar14 = CONCAT11((char)(uVar31 >> 8) + '1',(char)uVar31) + 1;
  uVar9 = uVar31 & 0xffff0000 | (uint)uVar14;
  bVar17 = (byte)uVar14;
  uVar31 = 0x8a6f0002 >> (bVar17 & 0x1f);
  cVar25 = (char)(uVar41 >> 8);
  bVar20 = (byte)uVar41;
  uVar14 = CONCAT11(cVar25 << 1 | cVar25 < '\0',bVar20);
  bVar13 = (byte)(uVar27 >> 8);
  uVar33 = uVar31 & 0xffff0000 | (uint)(ushort)((ushort)uVar31 ^ 0x800);
  uVar31 = 0x29bc0001;
  if ((int)uVar33 >= 0) {
    uVar31 = uVar41 & 0xffff0000 | (uint)uVar14;
  }
  bVar17 = bVar17 & 0x1f;
  uVar16 = uVar9 << bVar17 | (uint)(CONCAT14((int)uVar33 < 0,uVar9) >> 0x21 - bVar17);
  bVar7 = (byte)((uint)uVar14 >> 8);
  uVar31 = ~uVar31;
  uVar28 = CONCAT11((char)(uVar16 >> 8) - bVar7,(char)uVar16) & 0xff0f;
  sVar12 = (sbyte)uVar28;
  uVar28 = uVar14 + uVar28;
  uVar28 = uVar28 & 0xff00 | (ushort)(byte)((char)uVar28 << 1);
  bVar26 = (byte)((uint)(ushort)(((ushort)(uVar28 << (bVar20 & 0xf) |
                                          uVar28 >> 0x10 - (bVar20 & 0xf)) >> 1) << 4) >> 8);
  uVar39 = ~(ushort)uVar40;
  uVar40 = uVar40 & 0xffff0000;
  lVar4 = (ulonglong)
          (CONCAT22((short)(uVar27 & 0xff | (ushort)(byte)(bVar13 >> 1 | bVar13 << 7) << 8) >> 0xf,
                    uVar27) & 0xffff00ff) * (ulonglong)(uVar40 | uVar39);
  uVar28 = CONCAT11((byte)((ulonglong)lVar4 >> 8) & (byte)lVar4,(byte)lVar4) & 0x3fff;
  uVar27 = (ushort)(bVar26 | 0xc0);
  uVar14 = (ushort)((ushort)(bVar7 >> sVar12) | uVar14 << 0x10 - sVar12) >> (bVar20 & 0x1f);
  uVar41 = uVar33 << 1 & 0xffff0000 | (uint)uVar14;
  bVar17 = -(char)(uVar28 / uVar27);
  uVar24 = CONCAT22((short)((ulonglong)lVar4 >> 0x30),
                    CONCAT11((byte)((ulonglong)lVar4 >> 0x28) >> 1,(char)((ulonglong)lVar4 >> 0x20))
                    * 0x1bd4) | 0x400;
  uVar39 = (short)(uVar28 % uVar27 << 8 | (ushort)bVar17) >> 1 | uVar39;
  uVar9 = CONCAT31((uint3)(byte)((char)bVar26 >> 7),0x61) + -0x627ecadf + (uint)((bVar17 & 1) != 0);
  if ((POPCOUNT(uVar39 & 0xff) & 1U) == 0) {
    uVar9 = uVar24;
  }
  uVar42 = uVar31 & 0xffff0000 | (uint)(ushort)((ushort)uVar31 | 1) | 0x800000;
  if ((uVar31 >> 0x17 & 1) != 0) {
    uVar42 = uVar24;
  }
  uVar8 = (CONCAT22((short)((ulonglong)lVar4 >> 0x10),uVar39) - uVar41) - 1;
  uVar16 = ((uVar16 & 0xffff0000 |
             CONCAT11(bVar7 >> (bVar20 & 7) | bVar7 << 8 - (bVar20 & 7),bVar20) & 0xffffff00 |
            (uint)(byte)((char)(bVar20 + 0x61) >> (bVar20 + 0x61 & 0x1f))) + 0x872747dd) *
           -0x17c8c50b;
  uVar27 = (short)uVar42 + 0xc9b2;
  uVar31 = (uint)uVar27;
  if ((short)uVar27 < 0) {
    uVar8 = uVar8 & 0xffff0000 | (uint)uVar27;
  }
  iVar23 = uVar24 + uVar8 + 1;
  uVar37 = uVar9 & 0xffff0000 | (uint)(ushort)(((short)uVar9 - (short)iVar23) - 1);
  uVar9 = uVar8 << 1;
  uVar24 = (uint)((int)uVar8 < 0);
  iVar32 = uVar37 - 1;
  uVar38 = iVar23 * 2;
  uVar27 = (short)uVar16 - (short)uVar38;
  if (uVar27 == 0) {
    uVar31 = uVar9 & 0xffff | uVar24;
  }
  uVar36 = uVar42 & 0xffff0000 | uVar31;
  uVar10 = uVar38 & 0xffffff00 | (uint)(byte)((byte)uVar38 + 0x10);
  uVar28 = (ushort)((uVar16 & 0xffff0000) >> 0x11) |
           (ushort)(((uint)((byte)uVar38 < 0xf0) << 0x1f) >> 0x10);
  uVar41 = uVar41 + CONCAT11(iVar32 == 0 || (int)uVar37 < 1,(char)iVar32);
  uVar33 = uVar33 << 1 & 0xffff0000;
  uVar27 = (ushort)((uVar16 & 0xffff0000 | (uint)uVar27) >> 1);
  sVar15 = uVar27 - 0x9a5;
  bVar17 = ((char)sVar15 - (char)((uVar38 & 0xffffff00) >> 8)) - (uVar27 < 0x9a5);
  uVar42 = CONCAT22(uVar28,sVar15) & 0xffffff00 | (uint)bVar17;
  uVar16 = uVar33 | (ushort)((short)uVar14 >> 6) & 0xffffff00 |
           (uint)(((uVar40 | uVar16 & 0xffff) >> 1 | uVar24 << 0x1f) != 0);
  uVar40 = uVar10 << 1;
  uVar14 = CONCAT11((char)(uVar9 >> 8) >> 1,(byte)uVar9 | (int)uVar8 < 0);
  if ((uVar42 & 0x64881a3c) != 0) {
    uVar16 = uVar33 | uVar41 & 0xffff;
  }
  bVar13 = (byte)(uVar16 >> 8);
  uVar40 = (uVar40 & 0xffffff00 | (uint)(byte)(((byte)uVar40 | (int)uVar10 < 0) + 0x48)) +
           0x22a73463 & 0xffff0000;
  bVar17 = bVar17 & 0xf;
  uVar33 = (uint)(ushort)(uVar14 << bVar17 | uVar14 >> 0x10 - bVar17);
  if (-1 < (int)(uVar36 & uVar42)) {
    uVar33 = uVar41 & 0xffff;
  }
  uVar14 = CONCAT11(bVar13 >> 7 | bVar13 << 1,(char)uVar16) + 0x6646;
  if (-1 < (short)uVar14) {
    uVar42 = (uint)uVar28 << 0x10 | uVar31;
  }
  uVar31 = 0;
  if (uVar42 != 0) {
    for (; (uVar42 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
    }
  }
  bVar17 = (byte)uVar31;
  uVar9 = (uVar9 & 0xffff0000 | uVar33) >> (bVar17 & 0x1f);
  uVar27 = (ushort)uVar9;
  uVar33 = (uVar16 & 0xffff0000 | (uint)uVar14) + (uVar41 & 0xffff | uVar40) +
           (uint)(0x417 < uVar27);
  uVar14 = (ushort)((uVar9 & 0xffff0000 | (uint)(ushort)(uVar27 - 0x418)) >> 1);
  uVar39 = CONCAT11((char)(uVar33 >> 8) >> (bVar17 & 0x1f),(char)uVar33) ^ (ushort)uVar33;
  uVar27 = uVar14 & 0x3fff;
  cVar25 = (char)(((uint)(ushort)((short)uVar14 >> 0xf) << 0x10) >> 0x18);
  uVar9 = (uint)(ushort)(uVar27 / (bVar17 | 0xc0) & 0xff | uVar27 % (ushort)(bVar17 | 0xc0) << 8);
  uVar27 = (ushort)(((uVar9 & 0xff00) << 8) >> 0x10) | (ushort)((uVar9 << 0x18) >> 0x10);
  uVar14 = (ushort)(byte)~(byte)(uVar41 & 0xffff);
  uVar28 = (ushort)uVar41 & 0xff00 | uVar14;
  bVar43 = (POPCOUNT(-((ushort)(uVar36 << 1) >> 1) & 0xff) & 1U) != 0;
  bVar13 = (byte)((ushort)((short)cVar25 * (short)cVar25) >> 8);
  bVar17 = (char)uVar39 + bVar13;
  uVar41 = uVar39 & 0xffffff00;
  uVar9 = uVar33 & 0xffff0000 | uVar41 | (uint)bVar17;
  uVar31 = (uVar31 & 0x317f0000 |
           (uint)(ushort)(((ushort)CONCAT31(0xff,!bVar43) & 0x9ff) + (ushort)(0x4ace < uVar28))) +
           0xe4aa517e;
  bVar20 = (byte)uVar31;
  bVar7 = (byte)(uVar41 >> 8);
  sVar15 = (short)uVar9;
  uVar31 = uVar31 & 0xffffff00 | (uint)(byte)(bVar20 + bVar7);
  if (!CARRY1(bVar20,bVar7)) {
    uVar31 = uVar9;
  }
  uVar28 = uVar28 + 0xb532;
  bVar20 = (byte)((uint)uVar28 >> 8);
  cVar25 = bVar13 - bVar20;
  cVar11 = cVar25 + -1;
  uVar41 = CONCAT31(CONCAT21(uVar27,cVar11),cVar11 == '\0');
  if ((bVar13 >= bVar20 && cVar25 != '\0') && cVar11 != '\0') {
    uVar41 = uVar41 & 0xffff | (uint)uVar27 << 0x10;
  }
  uVar16 = (uint)(bVar13 < bVar20 || cVar25 == '\0') << 0x10 | (int)sVar15 & 0xffffU;
  uVar27 = (ushort)(uVar16 >> 0xb);
  uVar29 = CONCAT11(bVar7 + 0xbf,bVar17) << 1 | (ushort)((char)(bVar7 + 0xbf) < '\0');
  bVar13 = (byte)uVar31 & 7;
  bVar7 = (byte)uVar29;
  uVar14 = ((ushort)uVar33 | 0x6dde) & ~(1 << (uVar14 & 0xf)) & (ushort)CONCAT31(0xff,bVar43) & 0xf;
  uVar39 = uVar28 & ~(1 << uVar14);
  bVar20 = (byte)((short)uVar31 >> 1);
  bVar17 = (bVar20 & 0x1f) % 0x11;
  uVar9 = (uint)((uVar28 >> uVar14 & 1) != 0) << 0x10 |
          uVar29 & 0xff00 | (uint)(byte)(bVar7 << bVar13 | bVar7 >> 8 - bVar13);
  uVar28 = (ushort)(uVar9 >> bVar17) | (ushort)(uVar9 << 0x11 - bVar17);
  bVar20 = bVar20 & 0x1f;
  uVar14 = (byte)((char)uVar28 - (char)((uint)uVar39 >> 8)) & 0xf;
  uVar24 = (uVar40 | (ushort)(uVar39 | 1 << uVar14)) * 0x44f6f745;
  uVar9 = uVar24 >> 1;
  uVar40 = (((uint)(uint3)((uint3)((uVar41 << bVar20) >> 8) |
                          (uint3)((CONCAT22(sVar15 >> 0xf,
                                            uVar27 << 0xe |
                                            (ushort)(uVar27 | (ushort)(uVar16 << 6)) >> 2) >>
                                  0x20 - bVar20) >> 8)) << 8) >> 1) + 0xe64fd741;
  cVar25 = (char)((uint)uVar28 >> 8) << 1;
  uVar14 = CONCAT11(cVar25,((uVar39 >> uVar14 & 1) == 0) + 'H');
  uVar41 = uVar24 & 0xffff0000 |
           (uint)CONCAT11(((byte)(uVar9 >> 8) & 0x7f) - 0xc,(char)((uVar9 & 0xfe) >> 1));
  if ((POPCOUNT((byte)(uVar40 >> 8) & 0xe6) & 1U) == 0) {
    uVar41 = uVar40;
  }
  uVar9 = uVar41 >> 8 & 0xf;
  sVar12 = (sbyte)uVar9;
  uVar27 = CONCAT11(-1 < cVar25,(char)uVar40 + -0x68 + ((uVar14 >> (uVar27 >> 2) & 1) != 0)) <<
           sVar12 | (ushort)(uVar14 << 1 | 1) >> 0x10 - sVar12;
  bVar17 = (byte)uVar27 & (byte)(uVar27 >> 8);
  uVar40 = uVar27 & 0xffffff00 | (uint)bVar17;
  uVar9 = ~(uVar31 & 0xffff0000 | uVar9);
  uVar31 = 0x1f;
  if (uVar40 != 0) {
    for (; uVar40 >> uVar31 == 0; uVar31 = uVar31 - 1) {
    }
  }
  uVar33 = (uVar33 & 0xffff0000 | (uint)uVar14) ^ uVar9;
  uVar14 = (short)~(uVar41 & 0xffffff41) * 2;
  uVar40 = (uint)CONCAT11(-(char)((uVar27 & 0xffffff00) >> 8),bVar17);
  uVar41 = ~(uVar41 & 0xffffff41) & 0xffff0000 |
           (uint)(byte)((char)((uint)uVar14 >> 8) - ((char)(uVar33 >> 8) >> 1)) << 8 |
           (uint)(byte)((char)uVar14 << ((byte)uVar9 & 0x1f));
  uVar9 = ~(uVar33 & 0xffdf0000 | (uint)(ushort)((short)uVar33 >> 9));
  iVar23 = 0x1f;
  if (uVar41 != 0) {
    for (; uVar41 >> iVar23 == 0; iVar23 = iVar23 + -1) {
    }
  }
  uVar19 = (undefined)iVar23;
  uVar33 = uVar31 | 0x96cb854;
  uVar41 = uVar40 + 0xe42a6fe8;
  bVar17 = (byte)uVar33;
  uVar40 = (int)(uVar9 & 0xffff0000 |
                (uint)CONCAT11(((uVar40 < 0x1bd59018 || uVar41 == 0) + '\'') - (uVar40 < 0x1bd59018)
                               ,(char)uVar9)) >> (bVar17 & 0x1f);
  uVar9 = 0;
  if (uVar40 != 0) {
    for (; (uVar40 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
    }
  }
  uVar14 = (ushort)uVar33 >> 1 | (ushort)uVar33 << 0xf;
  bVar17 = bVar17 << (bVar17 & 0x1f) ^ (byte)(uVar33 >> 8);
  if ((POPCOUNT(bVar17) & 1U) == 0) {
    uVar19 = 7;
  }
  bVar13 = bVar17 * '\x02' + 1;
  uVar27 = CONCAT11((char)bVar17 < '\0',uVar19) + 0x9af6;
  uVar40 = uVar40 & 0xffff0000 | (uint)CONCAT11((POPCOUNT((uint)bVar13) & 1U) != 0,(char)uVar40);
  bVar17 = (bVar13 & 0x1f) % 9;
  bVar20 = (byte)uVar27;
  uVar16 = uVar40 << (bVar13 & 0x1f) | uVar40 >> 0x20 - (bVar13 & 0x1f);
  uVar40 = (short)uVar14 * -0x335c;
  uVar33 = uVar33 & 0xffff0000;
  uVar24 = (uint)uVar14 << 0x11 |
           ((uint)(CONCAT14((int)(short)uVar40 != uVar40,uVar31) >> 8) | 0x96cb8) >> 8;
  uVar31 = (uint)CONCAT11((char)uVar41,(char)uVar41);
  bVar13 = (byte)((uVar40 & 0xfe) >> 1);
  if (((int)uVar24 >> 0xc & 0x212470faU) == 0) {
    uVar16 = uVar16 & 0xffff0000 | 0xc0b8;
  }
  uVar40 = (uint)CONCAT11(1,bVar13) * 5 + 0xd3;
  uVar16 = uVar16 + 0xc7f73570;
  uVar41 = (uVar41 & 0xffff0000 | uVar31) << 1;
  bVar7 = (byte)uVar41 | 1;
  bVar26 = (byte)(uVar16 >> 8);
  bVar34 = bVar26 ^ (bVar7 == bVar26) * (bVar26 ^ (byte)uVar16);
  uVar14 = CONCAT11(bVar34,(byte)uVar16);
  bVar7 = bVar7 ^ (bVar7 != bVar26) * (bVar7 ^ bVar34);
  if (bVar13 == 0x39) {
    uVar40 = (uint)(ushort)(uVar27 & 0xff00 |
                           (ushort)(byte)(bVar20 << bVar17 | bVar20 >> 9 - bVar17));
  }
  uVar40 = uVar9 & 0xffff0000 | uVar40;
  uVar27 = (CONCAT11(1,bVar13) - 0x3d0) + (ushort)(bVar13 < 0x39);
  if (uVar27 == 0) {
    uVar14 = (ushort)((uVar31 & 0x7f80) << 1) | (ushort)bVar7;
  }
  uVar27 = uVar27 >> 5;
  bVar13 = (byte)uVar27;
  bVar17 = bVar13 & 0xf;
  uVar39 = uVar14 << bVar17 | uVar14 >> 0x10 - bVar17;
  uVar28 = (short)(char)bVar7 * (short)(char)bVar13;
  uVar27 = uVar27 << 4;
  cVar25 = (char)uVar39;
  uVar9 = (uVar16 & 0xffff0000 | (uint)uVar39) * 2 + 1;
  uVar14 = (short)CONCAT31((int3)(uVar9 >> 8),0xcb) + (short)cVar25;
  uVar9 = uVar9 & 0xffff0000;
  cVar11 = (char)uVar14;
  bVar13 = -cVar11;
  uVar31 = uVar14 & 0xffffff00;
  uVar1 = (ulonglong)(uVar40 | 0xc0000000);
  uVar3 = CONCAT44(CONCAT22((undefined2)(cVar25 >> 7),
                            uVar39 & 0xff |
                            (ushort)(byte)((cVar25 >> 7) + (char)(uVar31 >> 8) + (cVar11 != '\0'))
                            << 8),
                   (uVar41 & 0xffff0000 |
                   (uint)(ushort)(short)(char)((byte)((uVar28 & 0xff) << 1) |
                                              (short)(char)uVar28 != uVar28)) ^ uVar40);
  uVar2 = uVar3 / uVar1;
  uVar3 = uVar3 % uVar1;
  bVar17 = (byte)uVar27;
  uVar41 = ((int)uVar24 >> 0x1f) << (bVar17 & 0x1f) | (uVar33 | uVar27) >> 0x20 - (bVar17 & 0x1f);
  uVar31 = (uVar9 | uVar31 | (uint)bVar13) >> 1;
  cVar25 = (char)(uVar31 >> 8);
  uVar14 = (((short)uVar3 - (short)(uVar41 * 0x7514595)) - (ushort)((bVar13 & 1) != 0)) * 0x2000;
  if ('\0' < cVar25) {
    uVar14 = (ushort)uVar41;
  }
  uVar40 = (short)uVar14 * -0x765;
  bVar13 = (bVar17 & 0x1f) % 9;
  bVar13 = (byte)((ushort)(uVar27 & 0xff | (ushort)((int)(short)uVar40 != uVar40) << 8) >> bVar13) |
           bVar17 << 9 - bVar13;
  uVar16 = uVar27 & 0xffffff00;
  uVar42 = uVar41 & 0xffff0000 | (uint)(ushort)((ushort)uVar41 ^ uVar14);
  uVar24 = (uVar33 | uVar16 | (uint)bVar13) & 0xffff7075;
  bVar17 = (byte)uVar24 & 0x1f;
  uVar42 = uVar42 << bVar17 | uVar42 >> 0x20 - bVar17 | 0xc0000000;
  uVar1 = CONCAT44(CONCAT22((ushort)(uVar9 >> 0x11),CONCAT11(-cVar25,(char)uVar31)),
                   CONCAT22((short)(uVar2 >> 0x10),
                            CONCAT11((char)((char)(uVar2 >> 8) + (char)(uVar16 >> 8)) >>
                                     ((byte)uVar24 & 0x1f),(char)uVar2))) & 0x3fffffffffffffff;
  uVar2 = uVar1 / uVar42;
  uVar31 = (int)(short)uVar2 * (int)(short)uVar24;
  uVar1 = CONCAT44(CONCAT22((short)(uVar1 % (ulonglong)uVar42 >> 0x10),(short)(uVar31 >> 0x10)),
                   ((uVar31 & 0xffff | (uint)(ushort)(uVar2 >> 0x10) << 0x10) + 0x70fdcb38) -
                   (uint)((int)uVar42 < 0)) & 0x3fffffffffffffff;
  uVar14 = (ushort)(uVar41 * 0x7514595 + CONCAT22((short)(uVar3 >> 0x10),uVar14) >> 0x10);
  uVar27 = CONCAT11((char)(uVar24 >> 8),bVar13) & 0xff75;
  uVar31 = CONCAT22(uVar14,0x8518) << 7;
  uVar41 = SEXT24((short)(uVar1 % (ulonglong)(uVar24 | 0xc0000000)));
  uVar16 = (int)(uVar1 / (uVar24 | 0xc0000000)) >> (bVar13 & 0x15);
  uVar28 = ((ushort)uVar31 | uVar14 >> 9) ^ uVar27;
  uVar14 = (uVar27 | 0xb) + (short)uVar16 + 1;
  bVar17 = (char)uVar14 + (char)(uVar16 >> 8);
  uVar9 = uVar33 | 0xc0000000 | uVar14 & 0xffffff00 | (uint)bVar17;
  if ((char)bVar17 < '\0') {
    uVar9 = uVar40 & 0xffff | 0xc2020000;
  }
  bVar17 = (byte)uVar9 & 0x1f;
  uVar42 = uVar41 ^ 0x4dfd220c;
  uVar16 = CONCAT31((uint3)(((uVar16 & 0xffff0000 | (uint)CONCAT11((char)uVar14,(char)uVar16)) >>
                            bVar17) >> 8) | (uint3)((uVar9 << 0x20 - bVar17) >> 8),
                    (POPCOUNT(uVar14 & 0xff) & 1U) == 0);
  bVar17 = (byte)uVar9 & 0xf;
  uVar27 = (short)uVar40 << bVar17 | (ushort)(uVar40 & 0xffff) >> 0x10 - bVar17;
  cVar25 = (char)(uVar42 >> 8);
  uVar33 = (uint)(ushort)(short)cVar25;
  uVar24 = uVar9 & 0xffff0000 | uVar33;
  lVar4 = (longlong)(int)(uVar16 >> 7 | uVar16 << 0x19) * (longlong)(int)uVar24;
  uVar14 = uVar28 & 0xf;
  sVar15 = (short)((ulonglong)lVar4 >> 0x10);
  uVar40 = (int)((ulonglong)lVar4 >> 0x20) << 0x1f;
  bVar17 = (byte)(uVar24 >> 1);
  uVar16 = (int)(uVar31 & 0xffff0000 | (uint)uVar28) >> (bVar17 & 0x1f);
  uVar31 = CONCAT22(sVar15,(short)lVar4 << 1 | (ushort)((0U >> uVar14 & 1) != 0)) << 1;
  uVar24 = (uVar9 & 0xffff0000 | uVar33 & 0xfffffe00) >> 1 | uVar40 |
           (uint)(byte)(bVar17 << 4 | bVar17 >> 4);
  uVar33 = uVar31 & 0xffffff00 |
           (uint)(byte)(((byte)uVar31 | sVar15 < 0) << (bVar17 << 4 & 0x1f | bVar17 >> 4));
  uVar31 = uVar33;
  if ((int)(uVar16 & (uVar27 | 0xc2020000)) < 0) {
    uVar24 = (uVar9 & 0xfffe0000) >> 1 | uVar40 | uVar16 & 0xffff;
    uVar31 = (uint)(ushort)((1 << uVar14) + uVar27);
  }
  uVar14 = CONCAT11(cVar25 + -0x59,(char)uVar42 + 'O') + (short)uVar24;
  bVar17 = (char)uVar14 - 1;
  uVar9 = uVar42 & 0xffff0000 | uVar14 & 0xffffff00;
  if ((POPCOUNT(bVar17) & 1U) != 0) {
    uVar16 = uVar9 | bVar17;
  }
  bVar13 = (byte)uVar24 & 0x1f;
  uVar8 = uVar33 << bVar13 | uVar24 >> 0x20 - bVar13;
  sVar12 = (sbyte)(uVar24 & 0xffffff0f);
  uVar28 = (ushort)(uVar24 & 0xffffff0f);
  uVar14 = (ushort)uVar8 >> sVar12 | uVar28 << 0x10 - sVar12;
  uVar33 = uVar24 & 0xffff0000;
  uVar40 = (uint)(ushort)(uVar14 & 0xff | (ushort)(byte)((char)((uint)uVar14 >> 8) + 0x7e) << 8);
  uVar28 = (uVar28 & 0xfffd) * 2 + 1;
  uVar38 = ((ushort)((ushort)(uVar27 - uVar14) >> 1 | (ushort)((uVar27 - uVar14 & 1) != 0) << 0xf) |
           0xc2020000) << 1;
  uVar2 = (longlong)(int)(uVar8 & 0xffff0000 | uVar40 & 0xffffff00 | (uVar40 & 0xfe) >> 1) *
          (longlong)(int)(uVar31 & 0xffff0000 | (uint)((ushort)uVar31 & 0xffdf | uVar27));
  uVar39 = (ushort)uVar38 | 1 << (uVar28 & 0xf);
  uVar38 = uVar38 & 0xffff0000 | (uint)uVar39;
  uVar40 = (uint)uVar2 & ~(1 << (bVar17 & 0x1f));
  uVar1 = (ulonglong)(uVar33 | uVar28 & 0xffffff00 | (uint)(byte)((char)uVar28 << 4) | 0xc0000000);
  uVar2 = uVar2 & 0x3fffffff00000000 |
          (ulonglong)(uVar40 & 0xffff0000 | (uint)(ushort)(short)(char)uVar40);
  uVar3 = uVar2 / uVar1;
  uVar28 = (ushort)uVar3 | 0x5200;
  uVar39 = uVar39 + 0x89b0;
  bVar43 = (short)(uVar28 << 4) < 0;
  uVar28 = uVar28 << 5 | (ushort)bVar43;
  bVar43 = bVar43 != (short)uVar28 < 0;
  uVar9 = uVar9 | bVar43;
  uVar40 = (CONCAT22((ushort)(uVar16 >> 0x11),
                     (short)(uVar16 >> 1) + 0x8d6 + (ushort)(uVar27 < uVar14)) | 0x200) * 2 +
           -0x3217354 + uVar9 * 2;
  iVar23 = CONCAT22((short)(uVar3 >> 0x10),uVar28) >> 1;
  uVar8 = iVar23 + 1;
  uVar16 = (uint)(uVar2 % uVar1);
  if (uVar8 != 0 && SCARRY4(iVar23,1) == (int)uVar8 < 0) {
    uVar16 = uVar38;
  }
  uVar8 = uVar8 & ~(1 << bVar43);
  uVar37 = uVar8 & 0xffff0000 | (uint)CONCAT11((char)(uVar8 >> 8) + '+',(char)uVar8);
  uVar8 = (uint)(ushort)((short)uVar40 << 1 | 1);
  uVar36 = uVar40 & 0xffff0000 | uVar8;
  uVar10 = uVar37 - uVar38;
  uVar40 = (uint)(CONCAT14(uVar37 < uVar38,uVar36) >> 0x19);
  uVar38 = uVar40 | uVar36 << 8;
  uVar14 = (ushort)uVar10;
  uVar27 = (ushort)uVar9;
  uVar9 = (uint)(ushort)(uVar14 ^ (ushort)(uVar14 != uVar27) *
                                  (uVar14 ^ uVar27 ^ (ushort)(uVar14 == uVar27) * (uVar27 ^ uVar14))
                        );
  uVar41 = uVar41 >> 0x1f;
  if (-1 < (int)uVar38 && (uVar38 << 1 | uVar41) != 0) {
    uVar9 = 0;
  }
  uVar38 = 0x1f;
  if (uVar16 != 0) {
    for (; uVar16 >> uVar38 == 0; uVar38 = uVar38 - 1) {
    }
  }
  uVar14 = (ushort)(byte)(uVar9 * ((uVar40 | (uVar8 & 0x7f) << 8) << 1 | uVar41) >> 0x10) * 0xad;
  uVar41 = uVar42 & 0xffff0000;
  if ((char)(uVar14 >> 8) == '\0') {
    uVar41 = uVar16;
  }
  if ((uVar39 & 0x5941) != 0) {
    uVar41 = uVar38;
  }
  uVar1 = (ulonglong)(uVar10 & 0xffff0000 | (uint)uVar14) * (ulonglong)uVar16;
  bVar43 = (int)(uVar1 >> 0x20) != 0;
  uVar9 = (uint)bVar43;
  uVar14 = (ushort)bVar43;
  uVar29 = -uVar14;
  sVar21 = (short)(uVar1 >> 0x20);
  sVar15 = sVar21 << 1;
  bVar20 = ~(byte)sVar15;
  uVar27 = ((short)((uVar33 | 0xc0007fdf) >> 1) - (uVar39 & 0x5941)) - (ushort)(sVar21 < 0);
  uVar42 = (uVar31 & 0xffff0000 | uVar39 & 0xffff5941) << 1 |
           (uVar38 + 0x9129d3ce ^ (uVar33 | 0xc0007fdf)) >> 0x1f;
  uVar40 = (uVar41 & 0xffff0000 |
           (uint)(ushort)(CONCAT11((byte)(uVar41 >> 8) >> 1,(char)uVar41) | 0x8000)) &
           ~(1 << ((int)(short)uVar29 & 0x1fU));
  bVar17 = ((byte)((byte)(uVar33 >> 0x18) | 0xc0) >> 1) - 0x1e;
  bVar13 = bVar17 & 0x1f;
  uVar33 = CONCAT31((uint3)((((uVar24 & 0x1fe0000) >> 0x11) << 0x10) >> 0x10) | uVar27 & 0xff00 |
                    (uint3)(((uint)uVar27 << 0x18) >> 8),bVar17) << bVar13 | uVar42 >> 0x20 - bVar13
  ;
  bVar17 = (byte)uVar33;
  bVar13 = (byte)(uVar33 >> 8);
  uVar28 = CONCAT11(bVar13 + bVar17,bVar17);
  uVar16 = CONCAT22((short)uVar29 >> 0xf,uVar29 >> 10 | uVar14 * -0x40) << 1 |
           (uint)CARRY1(bVar13,bVar17);
  uVar31 = (uint)uVar1 >> 1;
  uVar41 = (uint)((short)uVar29 >> 0xf < 0) << 0x1f;
  uVar40 = uVar40 & 0xffff0000 | (uint)(ushort)((short)uVar40 + 0x29f1);
  if ((uVar1 & 1) == 0) {
    uVar40 = uVar31 | uVar41;
  }
  uVar24 = uVar40 & 0xffff0000;
  if (!CARRY2((ushort)uVar40,(ushort)uVar40) && (uVar40 & 0x7fff) != 0) {
    uVar24 = uVar42;
  }
  uVar41 = uVar31 & 0xffff0000 | uVar41;
  uVar40 = uVar28 & 0xff;
  uVar42 = uVar41 | uVar40;
  uVar9 = uVar9 * -2 | (uint)(uVar9 != 0);
  uVar31 = 0;
  if (uVar42 != 0) {
    for (; (uVar42 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
    }
  }
  uVar14 = (ushort)uVar16;
  uVar28 = uVar28 | uVar14;
  uVar42 = (int)((uint)(ushort)(uVar1 >> 0x30) << 0x10 |
                 CONCAT11((char)((ushort)sVar15 >> 8) << ((byte)uVar27 & 0x1f),bVar20) & 0xffffff00
                | (uint)(byte)(bVar20 - 9)) >> 0x1d;
  if ((short)uVar28 < 1) {
    uVar42 = uVar31;
  }
  bVar13 = (byte)uVar40;
  iVar23 = (int)(uVar33 & 0xffff0000 | (uint)uVar28) >> 1;
  iVar23 = CONCAT22((short)((int)(uVar33 & 0xffff0000) >> 0x11),
                    CONCAT11((char)((uint)iVar23 >> 8) + -2,(char)iVar23)) + 0x6e04fc14;
  cVar25 = (char)((uint)iVar23 >> 8);
  uVar27 = CONCAT11(cVar25,bVar13) | 0x1e2;
  bVar17 = (char)iVar23 + cVar25;
  uVar18 = CONCAT21((short)((uint)iVar23 >> 0x10),(char)iVar23);
  uVar33 = uVar31 & 0xffff0000;
  uVar40 = uVar9 + 0x57ea8de8;
  if ((SCARRY4(uVar9,0x57ea8de8) != SCARRY4(uVar40,0)) != (int)uVar40 < 0) {
    uVar24 = uVar33;
  }
  uVar37 = CONCAT31(uVar18,bVar17) & 0xffffff0f;
  bVar7 = (byte)uVar37;
  bVar20 = (byte)((uint)uVar27 >> 8);
  uVar8 = (uVar40 | 0x80000) << 1 | (uint)((int)(uVar40 | 0x80000) < 0);
  uVar9 = (int)(short)(bVar13 | 0xe2 |
                      (ushort)(byte)(bVar20 >> (bVar7 & 7) | bVar20 << 8 - (bVar7 & 7)) << 8) *
          (int)(short)(ushort)uVar37;
  uVar40 = (uVar16 ^ 0x10000800) & 0xffff0000;
  uVar41 = (int)(uVar41 | (ushort)(short)(char)uVar9) >> bVar7;
  uVar38 = uVar41 & 0xffff0000 | (uint)(ushort)((short)uVar41 * -0x52c4);
  uVar41 = (uVar18 & 0xffff00) << 8;
  uVar16 = CONCAT22((short)(uVar24 >> 0x10),0x1e6d);
  if ((((uVar42 & 0xffff0000 | (uint)(ushort)((ushort)uVar42 >> bVar7 | uVar27 << 0x10 - bVar7)) +
        uVar37 + 1 & 0xffff0000 | uVar9 >> 0x10 | 0xa200) >> (bVar17 & 0xf) & 1) == 0) {
    uVar16 = uVar38;
  }
  uVar9 = (uVar40 | (ushort)(uVar14 << 8 | (ushort)uVar37 >> 8) >> 1) << 10;
  sVar15 = ((ushort)(uVar40 >> 0x16) | (ushort)uVar9) + (short)uVar8;
  uVar9 = uVar9 & 0xffff0000;
  lVar4 = (longlong)(int)uVar38 * (longlong)(int)uVar41;
  uVar14 = (ushort)((ulonglong)lVar4 >> 0x20);
  uVar27 = (short)uVar31 - 1U ^ 1 << (uVar14 & 0xf);
  uVar31 = uVar33 | uVar27;
  if ((byte)uVar16 < 0xd7) {
    uVar8 = uVar9;
  }
  uVar39 = sVar15 * 2;
  uVar40 = (uVar16 & 0xffffff00 | (uint)(byte)((byte)uVar16 + 0x68 + (sVar15 < 0))) - uVar31;
  uVar30 = (ushort)(uVar40 & 0xffffff00) | 0x7c;
  uVar29 = (byte)((char)uVar40 + 0x29) | 0x57c0;
  uVar28 = uVar39 & 0xf;
  if (uVar30 == 0x2e28) {
    uVar14 = uVar30;
  }
  uVar6 = uVar14 & 0xff;
  uVar16 = (uVar9 | uVar39) + 0xb24d59c1 + (uint)(uVar30 < 0x2e28);
  uVar9 = 0x1f;
  if (uVar31 != 0) {
    for (; uVar31 >> uVar9 == 0; uVar9 = uVar9 - 1) {
    }
  }
  bVar17 = (byte)((uVar40 & 0xffffff00) >> 8);
  uVar39 = (byte)uVar9 * uVar6;
  uVar22 = CONCAT11(7,(char)uVar6);
  uVar24 = CONCAT22((short)((ulonglong)lVar4 >> 0x30),uVar22);
  cVar25 = (char)uVar39;
  bVar13 = (byte)((uint)uVar39 >> 8);
  uVar31 = (uint)(ushort)((ushort)(uVar8 >> 0x11) |
                         (ushort)(((uint)((uVar29 >> uVar28 & 1) != 0) << 0x1f) >> 0x10)) << 0x10;
  if (!SCARRY4((uVar41 | (ushort)(uVar29 | 1 << uVar28)) ^ 0xa09a795c,0x6682c739)) {
    uVar31 = uVar24;
  }
  uVar28 = CONCAT11(bVar13 << 3 | bVar13 >> 5,cVar25 << 1 | cVar25 < '\0');
  uVar24 = uVar24 & 0xd3cf846d;
  uVar42 = uVar24 + 0x7b3aeca0;
  uVar39 = (ushort)uVar42 & 0xff00 | (ushort)(byte)(((char)uVar42 << 1 | uVar24 < 0x84c51360) << 1);
  uVar35 = (ushort)uVar16;
  uVar29 = uVar39 ^ (ushort)(uVar28 == uVar39) * (uVar39 ^ uVar35);
  bVar13 = (byte)uVar29;
  bVar20 = (byte)((uint)uVar22 >> 8) & 0x84;
  uVar40 = (uVar40 & 0xffff0000 | (uint)(byte)(bVar17 >> 1 | bVar17 << 7) << 8) + 0x5fe9cce4 +
           (uint)((uVar14 & 1) != 0);
  uVar14 = (ushort)(uVar28 ^ (ushort)(uVar28 != uVar39) * (uVar28 ^ uVar29)) >> 1;
  bVar17 = (bVar13 & 0x1f) % 9;
  cVar25 = (char)((uint)uVar14 >> 8);
  bVar17 = (byte)(CONCAT11((uVar35 >> 3 & 1) != 0,cVar25) >> bVar17) | cVar25 << 9 - bVar17;
  uVar41 = (uint)(ushort)(uVar14 & 0xff | (ushort)(byte)(bVar17 + 1) << 8);
  if (!SCARRY1(bVar17,'\x01')) {
    bVar20 = (byte)((uint)(uVar35 & 0xfff7) >> 8);
  }
  uVar24 = uVar9 & 0xffff0000 | uVar41;
  if ((byte)(bVar20 + (char)(uVar41 >> 8)) != '\0') {
    uVar24 = uVar16 & 0xffff0000 | (uint)(uVar35 & 0xfff7);
  }
  bVar17 = (byte)uVar24;
  bVar7 = (byte)(uVar24 >> 8);
  bVar20 = bVar7 ^ (bVar17 == bVar7) * (bVar7 ^ (byte)(uVar40 >> 8));
  uVar24 = uVar24 & 0xffff0000;
  bVar13 = bVar13 + 0x7e;
  uVar16 = (uint)(ushort)(CONCAT11(bVar20,bVar17 ^ (bVar17 != bVar7) * (bVar17 ^ bVar20)) >>
                         (bVar13 & 0x1f));
  uVar40 = uVar40 | 1 << (uVar16 & 0x1f);
  cVar25 = (char)(uVar24 >> 0x18);
  cVar11 = cVar25 >> 0xf;
  uVar14 = (ushort)((int)uVar24 >> 0x2f);
  bVar17 = -cVar11;
  uVar41 = (uint)CONCAT11(cVar11,bVar13);
  uVar8 = uVar42 & 0xffff0000 | uVar41 | 0xc000;
  uVar41 = uVar41 | 0xc000;
  uVar16 = (CONCAT11(bVar17,cVar25 >> 7) & 0x3fff) << 0x10 | uVar16;
  uVar42 = uVar16 / uVar41 & 0xffff;
  uVar24 = uVar24 | uVar42;
  uVar40 = uVar40 & 0xffff0000 | CONCAT11((byte)(uVar40 >> 8) & bVar17,(char)uVar40) & 0xffffff00 |
           (uint)(byte)((char)uVar40 + 1);
  if (0 < (short)((ushort)uVar42 | 0x5ca2)) {
    uVar40 = uVar24 | 0x5ca2;
  }
  uVar41 = uVar16 % uVar41 & 0x1f;
  uVar16 = uVar8 ^ 1 << uVar41;
  bVar17 = (byte)uVar16 & 0x1f;
  uVar5 = CONCAT14((uVar8 >> uVar41 & 1) != 0,uVar24) | 0x5ca2;
  uVar41 = (int)uVar5 << bVar17 | (uint)(uVar5 >> 0x21 - bVar17);
  iVar23 = (uVar41 & 0xffff) * (uVar41 & 0xffff);
  bVar13 = ((char)uVar40 - (char)((uint)iVar23 >> 0x10)) - 1;
  uVar24 = (uVar31 & 0xffff0000 | uVar31 >> 1 & 0x7fff) * 0x2f339212;
  uVar28 = (ushort)iVar23 & ~(1 << ((ushort)(uVar16 >> 1) & 0xf));
  uVar18 = (uint3)(uVar16 >> 9);
  cVar25 = (char)(uVar16 >> 1) + bVar13 + '\x01';
  bVar43 = cVar25 == '\0';
  bVar17 = (byte)((uint)iVar23 >> 0x18);
  uVar40 = uVar40 & 0xffff0000 | (uint)(ushort)~((ushort)uVar40 & 0xff00 | (ushort)bVar13);
  uVar28 = uVar28 & 0xff00 | (ushort)(byte)(((byte)uVar28 | bVar17) + 1);
  uVar22 = CONCAT11(bVar17 >> 1,bVar43);
  uVar29 = (ushort)CONCAT31(uVar18,cVar25);
  uVar41 = (uint)(ushort)((short)uVar24 + uVar29);
  uVar39 = (short)(char)uVar18;
  if ((short)uVar28 < 0 == (short)(uVar28 << 1 | (ushort)((short)uVar28 < 0)) < 0) {
    uVar39 = uVar29;
  }
  uVar8 = uVar40 ^ 1 << (uVar41 & 0x1f);
  uVar42 = (uint)uVar14 << 0x10 | uVar22 & 0xffffff00 | (uint)(byte)(bVar43 + 0x47U);
  if (bVar43 < 0xb9) {
    uVar42 = uVar8;
  }
  uVar9 = uVar33 | (ushort)(((ushort)(((uVar27 >> 0xb |
                                       (uVar6 | (ushort)(0x2e27 < (short)uVar30) << 8) << 5) +
                                       (short)uVar9 & 0xfffe) * 4) >> 1 | 0x8000) ^ 0x8000);
  if ((POPCOUNT(bVar43 + 0x47U) & 1U) == 0) {
    uVar9 = uVar42;
  }
  uVar42 = uVar42 ^ 0x1fa32136;
  uVar31 = uVar41 | uVar31 & 0xffff0000;
  iVar23 = uVar31 + 0x610c13a;
  bVar43 = iVar23 == 0 || (SCARRY4(uVar31,0x610c139) != SCARRY4(uVar31 + 0x610c139,1)) != iVar23 < 0
  ;
  uVar31 = (int)(short)(uVar39 & 0xff00 | (ushort)uVar42 & 0xff) * (int)(short)iVar23;
  uVar33 = uVar42 & 0xffff0000 | uVar31 >> 0x10 & 0xffffff00;
  uVar38 = (uint)(byte)((char)(uVar31 >> 0x10) + (char)(uVar8 >> 8) + ((int)(short)uVar31 != uVar31)
                       );
  uVar37 = (int)(uVar24 & 0xffff0000 | uVar41) >> bVar43;
  uVar27 = (ushort)((iVar23 * 2 | (uint)(iVar23 < 0)) << 1) | (ushort)((uint)(iVar23 * 2) >> 0x1f);
  uVar28 = (ushort)((uVar33 | uVar38) << 1) | 1;
  uVar27 = CONCAT11(((int)uVar42 < 1) + '2',bVar43) << 1 |
           (ushort)(CARRY2(uVar27,uVar28) || 0xfffe < (ushort)(uVar27 + uVar28));
  uVar27 = uVar27 ^ 1 << (uVar27 + uVar28 * 4 & 0xf);
  uVar16 = (int)(uVar16 & 0xfffe0000 | (uint)uVar27) >> ((byte)uVar27 & 0x1f);
  uVar33 = (uVar33 & 0x7fff8000) << 1 | uVar16 & 0xffff;
  uVar41 = (uVar31 >> 0x10 & 0x7f00 | uVar38) << 1 | 1;
  uVar24 = (uVar8 | 0xd7) << 5 | uVar37 >> 0x1b;
  uVar31 = CONCAT22(uVar14,uVar22) + -0x7dc9c4b0 + uVar40 * 4 & 0xffff0000 |
           (uint)CONCAT11(1,(char)uVar31);
  uVar41 = (int)(uVar16 & 0xffff0000 | uVar41) >> ((byte)uVar41 & 0x1f);
  if (uVar31 != uVar33) {
    uVar31 = uVar33;
  }
  bVar17 = (byte)uVar41 & 7;
  bVar13 = (byte)(uVar31 >> 8);
  uVar40 = (uVar41 & 0xffff0000 | (uint)(ushort)((short)(uVar41 >> 1) << 1 | 1)) + 1;
  uVar41 = (byte)((char)uVar40 + 0xb1) & 0xffffff0f;
  sVar12 = (sbyte)uVar41;
  return (uVar31 & 0xffff0000 | (uint)CONCAT11(bVar13 << bVar17 | bVar13 >> 8 - bVar17,(char)uVar31)
         ) + uVar24 + (uVar40 & 0xffffff00 | uVar41) + uVar31 +
         (uVar37 << 4 & 0xffff0000 | (uint)(ushort)((short)(uVar37 << 4) << 1 | 1)) +
         CONCAT22(0x4741,(((ushort)uVar37 ^ 0x185a) & 0x7fff | 1 << ((ushort)uVar24 & 0xf)) <<
                         sVar12 | (ushort)uVar9 >> 0x10 - sVar12) + uVar9 + -0x48b079a6;
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
  longlong lVar3;
  ulonglong uVar4;
  uint5 uVar5;
  byte bVar6;
  short sVar7;
  byte bVar9;
  char cVar10;
  uint uVar8;
  byte bVar11;
  sbyte sVar12;
  char cVar14;
  uint uVar13;
  byte bVar15;
  uint3 uVar16;
  byte bVar17;
  short sVar18;
  byte bVar21;
  int iVar19;
  uint uVar20;
  ushort uVar22;
  int iVar23;
  uint uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  ushort uVar33;
  uint uVar34;
  uint uVar35;
  bool bVar36;
  
  for (iVar19 = 0x1f; 0x8555eb01U >> iVar19 == 0; iVar19 = iVar19 + -1) {
  }
  uVar25 = (ushort)(byte)((char)(((uint)CONCAT11((char)((uint)iVar19 >> 8) << 3,(char)iVar19) << 1)
                                >> 8) + 0x77);
  for (uVar35 = 0; (0xf6U >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
  }
  uVar22 = (ushort)uVar35 & 0xf6;
  uVar33 = 0xb300;
  if ((uVar35 & 0xf6) != 0) {
    uVar33 = uVar25;
  }
  uVar35 = (uint)(ushort)((uVar25 << 1 | 1) << 1);
  bVar11 = (byte)(uVar35 >> 8);
  bVar9 = (byte)((uVar35 & 0xfe) >> 1);
  bVar21 = bVar11 ^ (bVar11 == 1) * (bVar11 ^ bVar9);
  uVar27 = (ushort)(byte)((bVar11 != 1) * (bVar21 ^ 1) ^ 1) << 1;
  uVar35 = CONCAT11(bVar21,bVar9) | 0x433c000;
  uVar25 = (ushort)(byte)(uVar35 >> 8);
  iVar19 = uVar35 << 1;
  uVar26 = (ushort)iVar19;
  uVar33 = uVar33 << 1 | uVar26 >> 0xf;
  if (!SCARRY2(uVar33,uVar26)) {
    iVar19 = 1;
  }
  uVar35 = ((ushort)(uVar33 + uVar26) | 0xc7600000) - 1 & 0xffff0000;
  uVar13 = uVar35 | 0x4000;
  lVar3 = (ulonglong)
          (((ushort)(((ushort)(uVar27 % uVar25 << 8 | uVar27 / uVar25 >> 1 & 0x7f) >> 1) + 0xd6b1) |
           0x36a0000) << 9 | 6) * (ulonglong)uVar13;
  if ((char)iVar19 != '\x01') {
    uVar13 = uVar35 | (uint)((ulonglong)lVar3 >> 0x23) & 0xff;
  }
  uVar28 = (ushort)(~(uVar22 << 9 | uVar22 >> 7) + 0x8091) + 0xb3f0c44d;
  uVar25 = (short)uVar28 >> 0x1e;
  uVar34 = uVar13 + 1 & 0xfffffffe;
  uVar33 = uVar25 >> 6 | uVar25 << 10;
  uVar2 = (longlong)(int)((uint)(ushort)((ulonglong)lVar3 >> 0x10) << 0x11) * 0x2080e;
  bVar36 = (uVar2 & 0x10000000000) != 0;
  uVar25 = (ushort)(uVar2 >> 0x30);
  uVar13 = (uint)(ushort)((ushort)(byte)(0xa9 - bVar36) << 8 | 0xff);
  uVar35 = 0x1f;
  if (uVar34 != 0) {
    for (; uVar34 >> uVar35 == 0; uVar35 = uVar35 - 1) {
    }
  }
  uVar13 = (((uVar13 & 0x3fffffc0 | 0x20000) << 2 |
            (uint)(byte)(((byte)(uint)(CONCAT14(0xa9 < bVar36,uVar13) >> 0x1f) | 0xfc) - 1)) ^ 0xdb)
           << 1;
  uVar29 = uVar28 & 0xffff0000 | (uint)(ushort)((ushort)(uVar33 - 1) >> 1 | 0x8000);
  bVar11 = (byte)uVar13 & 7 | 1;
  uVar34 = CONCAT22(0xff,uVar33 + 0x7fff) ^ 0x100;
  uVar28 = (uint)((byte)((byte)((int)(short)uVar33 << 1) | (short)uVar33 < 0) < 0xfa) << 0x10 |
           uVar13 & 0xffff | 1;
  uVar22 = (ushort)(uVar28 >> 10) | (ushort)(uVar28 << 7);
  uVar29 = (uVar29 << 1 | (uint)((int)uVar29 < 0)) ^ 1 << (uVar34 & 0x1f);
  uVar28 = ((uint)CONCAT21(uVar25,0U >> bVar11 | '\0' << 8 - bVar11) << 8) >> 7;
  bVar11 = (char)(uVar28 >> 8) << 2;
  uVar33 = 0 >> ((byte)uVar22 & 0x1f);
  uVar13 = uVar13 & 0xffff0000 | uVar22 & 0xffffff00 |
           (uint)(byte)((byte)uVar22 ^ (byte)((uint)uVar33 >> 8));
  if ((byte)uVar28 < 0x36) {
    bVar11 = (byte)(uVar34 >> 8);
  }
  uVar8 = uVar35 & 0xffff0000 | (uint)(ushort)((short)((ushort)uVar35 >> 0xd | uVar22 << 3) >> 0x17)
  ;
  uVar35 = ((uVar25 & 0xff80) << 0x10) >> 7 | (uint)(byte)~bVar11 << 8;
  uVar28 = CONCAT22((short)uVar33 >> 0xf,uVar33 >> 1);
  uVar30 = uVar29 - uVar13;
  if (uVar28 != uVar8) {
    uVar28 = uVar8;
    uVar35 = uVar8;
  }
  uVar35 = uVar35 << 1;
  uVar8 = (uint)((ushort)(uVar35 >> 0xe) & 3 | 0x8000);
  uVar13 = (uint)(uVar13 <= uVar29) * 0x100 + 0x29322a49;
  uVar30 = uVar30 & 0xffff0000 |
           (uint)(ushort)(~((short)uVar30 + (short)uVar34 + 1U) + (short)((int)uVar34 >> 6) * -2);
  uVar34 = uVar13 & 0x1f;
  uVar29 = uVar30 | 1 << uVar34;
  uVar34 = (((int)(short)(uVar28 >> 0x10) >> 0xf & 0x3fffU) << 0x10 |
           ((uint)((uVar30 >> uVar34 & 1) != 0) << 0x10) >> 0xd) % (uVar8 | 0xc000);
  iVar19 = (uint)CONCAT11(0xd0,(byte)(((uVar35 & 0xffff0000 | uVar8) << 10) >> 0x18) | 0x42) *
           0x26812155;
  uVar25 = (ushort)iVar19;
  iVar23 = (int)(char)((char)((uint)iVar19 >> 8) >> 7);
  uVar13 = (uint)CONCAT11(((char)(uVar34 >> 8) << 1 | (short)uVar34 < 0) +
                          (char)(uVar13 * -0x3c025f76 >> 8),(char)uVar34 >> 0x1c) << 0x16 |
           uVar29 >> 10;
  uVar30 = uVar13 * 2;
  uVar13 = (uint)((int)uVar13 < 0);
  iVar19 = iVar23 + uVar30;
  uVar34 = iVar19 + uVar13;
  if ((int)uVar34 < 0) {
    uVar29 = uVar30;
  }
  if (uVar34 != 0 && (SCARRY4(iVar23,uVar30) != SCARRY4(iVar19,uVar13)) == (int)uVar34 < 0) {
    uVar34 = uVar34 & 0xffff0000;
  }
  uVar20 = (byte)((char)(uVar25 >> 2) + (char)(uVar30 >> 8)) ^ 0xe;
  bVar11 = ((byte)uVar30 & 0x1f) % 0x11;
  uVar13 = (uint)((uVar20 & 1) != 0) << 0x10 | uVar30 & 0xffff;
  uVar33 = (ushort)(uVar13 << bVar11) | (ushort)(uVar13 >> 0x11 - bVar11);
  bVar11 = (byte)uVar33 & 0x1f;
  uVar24 = uVar29 & 0xffff0000 | (uint)(ushort)((short)((short)uVar30 * -0x2ffe ^ 0x47f1U) >> 6);
  uVar20 = (int)(((uVar8 & 0x7f) << 9 | (byte)((char)(uVar35 >> 0x17) << 1) & 0xa3b5a6cd) >> 1 |
                (uint)(ushort)(short)(char)(uVar20 >> 1) << 0x1f) >> 0x1a;
  bVar36 = (int)(uVar34 & 0xffff0000) < 0;
  uVar35 = (uint)bVar36;
  uVar13 = uVar20 - uVar24;
  uVar8 = uVar13 - uVar35;
  uVar5 = CONCAT14(uVar20 < uVar24 || uVar13 < uVar35,uVar20) >> 2;
  uVar29 = (uint)CONCAT11((byte)(uVar8 >> 8) | (byte)uVar8,(byte)uVar8);
  bVar11 = ((byte)((uVar30 & 0xffff0000 | (uint)uVar33) >> bVar11) |
           (byte)((((ushort)((short)uVar25 >> 0xf) & 0x7fffff80) << 1) << 0x20 - bVar11)) & 7;
  bVar9 = (byte)(uVar5 >> 8);
  uVar35 = (uint)bVar36 << 0x10 |
           CONCAT31(0x5fe018,SBORROW4(uVar20,uVar24) == SBORROW4(uVar13,uVar35)) & 0xffff;
  uVar35 = CONCAT31(CONCAT21((short)(uVar5 >> 0x10),bVar9 << bVar11 | bVar9 >> 8 - bVar11),
                    CONCAT22(0x5fe0,(ushort)(uVar35 >> 0xc) | (ushort)(uVar35 << 5)) != 0);
  uVar13 = (uVar8 & 0xffff0000 | uVar29) * 5;
  bVar11 = (byte)((uVar29 & 0xff00) >> 8) & 0x1f;
  uVar25 = (ushort)((uVar29 & 0xff00) >> 8);
  uVar25 = uVar25 | ((ushort)(uVar35 >> bVar11) | (short)uVar35 << 0x20 - bVar11) &
                    ~(1 << (uVar25 & 0xf));
  uVar35 = SEXT14((char)(uVar29 >> 8));
  uVar34 = ~((uVar34 & 0xffff0000) << 1 | (uint)(ushort)((ushort)bVar36 << 0xf));
  bVar11 = (byte)uVar25 & 0x1f;
  uVar30 = uVar35 >> bVar11 | uVar35 << 0x21 - bVar11;
  uVar35 = (uint)uVar25 << 1;
  bVar9 = (byte)uVar35;
  uVar25 = CONCAT11((char)(uVar35 >> 8) << 1,bVar9);
  bVar21 = 0U >> (bVar9 & 7) | '\0' << 8 - (bVar9 & 7);
  uVar29 = uVar34 & 0xffff0000 | (uint)((ushort)uVar34 & uVar25);
  uVar34 = (uint)CONCAT11((byte)((uint)uVar25 >> 8) >> 1,bVar9);
  uVar35 = (uVar35 & 0xffff0000 ^ 0x100000 | uVar34) >> 1;
  bVar11 = (byte)uVar35 & 0x1f;
  sVar7 = (short)(char)((byte)((uVar8 & 0xffff0000) >> bVar11) |
                       (byte)((bVar21 | 0xc000) << 0x20 - bVar11)) * (short)(char)bVar21;
  uVar35 = uVar35 & ~(1 << ((uVar34 & 0x3e) >> 1));
  uVar29 = (uVar29 << (bVar9 & 0x1f) | uVar29 >> 0x21 - (bVar9 & 0x1f)) + 0x38706214;
  uVar34 = uVar35 & 0xffffff0f;
  sVar12 = (sbyte)uVar34;
  uVar29 = uVar29 & 0xffff0000 | (uint)(ushort)((short)uVar29 + (short)uVar30 * 2 + 0xd1b3);
  uVar25 = CONCAT11((char)((char)(uVar34 >> 8) + -1) >> 0xf,sVar12);
  uVar13 = (-(uVar13 & 0xffff0000 | CONCAT11((char)(uVar13 >> 8) << 1,(char)uVar13) & 0xffffff00 |
             (uint)(byte)((char)uVar13 - 0x1f)) & 0xffff0000 |
           (uint)((int)(short)(sVar7 * 2 & 0xffU | (ushort)((char)sVar7 != sVar7) |
                              (ushort)(byte)((byte)((uint)(ushort)(sVar7 * 2) >> 8) | bVar21) << 8)
                 * (int)(short)(bVar21 | 0x6000)) >> 0x10) >> sVar12;
  iVar19 = 0x1f;
  if (uVar30 != 0) {
    for (; uVar30 >> iVar19 == 0; iVar19 = iVar19 + -1) {
    }
  }
  bVar11 = sVar12 << sVar12;
  uVar31 = (iVar19 << (bVar11 & 0x1f) |
           (uint)(CONCAT14(0xc10617e2 < uVar29,iVar19) >> 0x21 - (bVar11 & 0x1f))) >>
           (bVar11 & 0x1f) |
           (uVar35 & 0xffff0000 | uVar25 & 0xffffff00 | (uint)bVar11) << 0x20 - (bVar11 & 0x1f);
  uVar22 = (short)uVar31 >> 0x14;
  uVar20 = (uVar13 & 0xffff0000 | (uint)(ushort)(uVar25 * -0x1984)) << 1 | uVar13 >> 0x1f | 0xc0;
  uVar33 = (ushort)(uVar29 + 0x3ef9e861) & 0x3fff;
  uVar25 = (ushort)(byte)uVar20;
  uVar35 = (uint)(ushort)(uVar33 / uVar25 & 0xff | uVar33 % uVar25 << 8);
  uVar34 = uVar29 + 0x3ef9e861 & 0xffff0000 | uVar35;
  uVar24 = uVar29 + 0x3ef9e81d ^ 1 << (uVar30 & 0x1f);
  uVar20 = uVar20 + uVar24;
  uVar13 = uVar34 << 1;
  bVar11 = (byte)uVar13 >> 1 | ((int)uVar34 < 0) << 7;
  uVar34 = CONCAT22((short)(((uint)(ushort)(bVar21 | 0x6000) << 0x12) >> 0x10),0x4c6e) & 0xffff0000
           | 0x6e00;
  uVar35 = ((uVar35 & 0x7f80) << 1 | (uint)bVar11) * (uint)uVar22;
  uVar8 = uVar35 >> 0x10;
  uVar29 = uVar20 & 0xffff0000;
  iVar23 = (int)(uVar34 | (byte)(uVar20 >> 8) & bVar11) >> 6;
  iVar19 = CONCAT22((ushort)(uVar29 >> 0x11),(short)((uVar29 | uVar8) >> 1) >> 1);
  uVar13 = ((uVar13 & 0xffff0000 | (uint)(ushort)~((ushort)uVar35 & ~(1 << ((ushort)iVar23 & 0xf))))
           - iVar19) - 1;
  bVar11 = (byte)((uint)((short)CONCAT31((int3)((int)uVar34 >> 0xe),
                                         ((char)iVar23 + 'A') - ((uVar8 & 2) != 0)) - 0x304U &
                        0xff00) >> 8);
  uVar34 = iVar19 + uVar13 + (uint)CARRY1(bVar11,bVar11);
  uVar13 = ~uVar13;
  uVar8 = uVar31 & 0xffff0000 | (uVar22 | 0x40) & 0xfffffffe;
  uVar29 = uVar24 & 0xffff0000 |
           (uint)(ushort)((ushort)((ushort)uVar24 >> 10 | (ushort)uVar24 << 6) >> 1 |
                         (ushort)(uVar30 >> 0x17) << 0xf) | 0x4cdd;
  uVar35 = (uVar13 & 0xffff0000 | uVar13 >> 1 & 0x7fff) << 9;
  uVar34 = (uVar34 & 0xffff0000 | (uint)(CONCAT11((char)(uVar34 >> 8) << 1,~(byte)uVar34) & 0xfffe))
           + 0xe79e4dc7;
  uVar30 = uVar29 ^ 0x5ad01fff;
  uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0) | 0xc0000000;
  uVar2 = CONCAT44(uVar35 & 0xffff0000 |
                   (uint)(ushort)(((ushort)uVar35 | (ushort)(uVar13 >> 0x17) & 0xff00 |
                                  (ushort)(byte)~(byte)(uVar13 >> 0x17)) + (short)uVar29 + 0xcfc),
                   uVar34 & 0xffff0000 | uVar34 >> 1 & 0x7fff) & 0x3fffffffffffff00;
  uVar13 = uVar8 << 1 | (uint)((int)uVar8 < 0);
  iVar19 = ((uint)(uVar2 / uVar8) & 0xffff) * (uVar30 & 0xffff);
  uVar25 = (ushort)((uint)iVar19 >> 0x10);
  cVar10 = (char)iVar19;
  uVar16 = (uint3)((((ushort)(uVar2 % (ulonglong)uVar8 >> 0x10) & 0xff) << 0x10) >> 0x10) |
           uVar25 & 0xff00 | (uint3)(((uint)uVar25 << 0x18) >> 8);
  uVar35 = 0x5ad03eff;
  if ('\0' < cVar10) {
    uVar35 = uVar13;
  }
  bVar11 = (byte)uVar35 & 0x1f;
  uVar34 = (uint)(CONCAT14(cVar10 != '\0',uVar13) >> bVar11) | uVar13 << 0x21 - bVar11;
  uVar33 = (ushort)uVar30;
  uVar25 = (ushort)(byte)((byte)uVar35 | 0xc0);
  bVar11 = (byte)((uVar33 & 0x3fff) / uVar25);
  uVar13 = (uint)(ushort)(uVar33 + 0x5992);
  bVar36 = 0xa66d < uVar33 && (ushort)(uVar33 + 0x5992) != 0;
  uVar22 = (ushort)(uVar35 & 0xffffff00) | (ushort)bVar36;
  sVar7 = -uVar22;
  sVar18 = sVar7 + -0x1237;
  uVar27 = (ushort)uVar34;
  if (0xedca < uVar22 || sVar7 == 0x1236) {
    uVar13 = uVar34 & 0xffff;
  }
  uVar8 = CONCAT22(0xc821,sVar18) & 0xffffff00;
  uVar20 = uVar8 | (byte)((char)sVar18 + bVar36);
  bVar9 = (byte)((uVar35 & 0xffffff00) >> 8);
  bVar21 = bVar9 ^ (bVar11 == bVar9) * (bVar9 ^ bVar36);
  uVar22 = (uVar33 & 0x3fff) % uVar25 << 8 |
           (ushort)(byte)(bVar11 ^ (bVar11 != bVar9) * (bVar11 ^ bVar21));
  uVar25 = uVar22 - uVar27;
  uVar26 = uVar27 ^ (ushort)(uVar25 == 0) * (uVar27 ^ uVar22);
  uVar24 = ((uVar30 & 0xffff0000 |
            (uint)(ushort)(uVar22 ^ (ushort)(uVar25 != 0) * (uVar22 ^ uVar26))) - uVar20) -
           (uint)(uVar22 < uVar27);
  uVar29 = uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8;
  uVar27 = (ushort)uVar29;
  uVar22 = CONCAT11(bVar21,bVar36) & uVar27;
  uVar35 = uVar35 & 0xffff0000 | (uint)uVar22;
  bVar11 = (char)uVar24 * (char)uVar24;
  cVar14 = (char)(uVar8 >> 8);
  cVar10 = -cVar14;
  if (cVar10 != '\0') {
    uVar20 = uVar29 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
  }
  uVar26 = (short)((uVar34 & 0xffff0000 | (uint)uVar26) >> 1) + 0xe30f;
  sVar12 = (sbyte)uVar22;
  uVar29 = uVar20 << 5 | uVar24 >> 0x1b;
  uVar13 = 0x1f;
  if (uVar35 != 0) {
    for (; uVar35 >> uVar13 == 0; uVar13 = uVar13 - 1) {
    }
  }
  iVar19 = uVar13 - uVar35;
  uVar8 = uVar29;
  if (uVar13 != uVar35) {
    uVar13 = uVar35;
    uVar8 = uVar35;
  }
  uVar35 = uVar29;
  if (-1 < iVar19) {
    uVar35 = (uint)(ushort)(uVar16 >> 8) << 0x10;
  }
  uVar22 = (uVar27 >> 1) * -0xf62 ^ 1 << ((ushort)(1 << (uVar26 & 0xf)) >> 1 & 0xf);
  lVar3 = (ulonglong)uVar13 * (ulonglong)uVar13;
  uVar34 = ((uVar34 & 0xfffe0000) >> 1 | uVar24 * -0x80000000 | (uint)uVar26) + uVar29 + 1 &
           (uint)((ulonglong)lVar3 >> 0x20);
  bVar9 = -(char)((ulonglong)lVar3 >> 8);
  uVar13 = (uVar30 & 0xffdf0000 |
           (uint)(ushort)((((uVar33 & 0xffbf) +
                            (short)CONCAT31(uVar16,(POPCOUNT(uVar25 & 0xff) & 1U) == 0) & 0xfffe) <<
                           sVar12 | CONCAT11(('\0' < cVar14) << 7 | (cVar10 == '\0') << 6 |
                                             (((ushort)(byte)uVar28 * (ushort)(byte)uVar28 & 0x1000)
                                             != 0) << 4 | ((POPCOUNT(cVar10) & 1U) == 0) << 2 | 2U |
                                             cVar14 != '\0',bVar11 >> 2 | bVar11 * '@') >>
                                    0x10 - sVar12) + 1 + (short)uVar13)) << 0xe;
  uVar25 = CONCAT11(bVar9,(char)lVar3);
  if ((bVar9 & 0x40) == 0) {
    uVar25 = (ushort)uVar8 ^ (ushort)(1 << (uVar22 & 0x1f)) ^ 0x99d3;
  }
  uVar28 = uVar34 & 0xffff0000;
  uVar20 = uVar28 | (ushort)((short)uVar34 + 0xd211);
  uVar2 = (longlong)CONCAT22((short)((ulonglong)lVar3 >> 0x10),uVar25) * (longlong)(int)uVar20;
  uVar4 = (ulonglong)((longlong)(int)(uint)uVar2 != uVar2) << 0x20 | uVar2 >> 0x20;
  uVar34 = (uint)(uVar4 >> 8);
  uVar29 = (uint)(uVar4 << 0x19);
  uVar8 = uVar34 | uVar29;
  uVar30 = (uint)uVar2 ^ 0xfd;
  if ('\0' < (char)((byte)uVar2 ^ 0xfd)) {
    uVar20 = uVar28 | uVar30 & 0xffff;
  }
  uVar28 = 0x1f;
  if (uVar8 != 0) {
    for (; uVar8 >> uVar28 == 0; uVar28 = uVar28 - 1) {
    }
  }
  bVar11 = (byte)uVar28;
  sVar7 = CONCAT11((char)(uVar2 >> 8) >> (bVar11 & 0x1f),(char)uVar30) + 1;
  uVar33 = (ushort)uVar13;
  uVar25 = ((ushort)(uVar2 >> 0x28) & 0xff00 | (ushort)(byte)((sVar7 == 0) << (bVar11 & 0x1f))) +
           uVar33;
  uVar13 = uVar13 >> 4;
  uVar30 = uVar13 & 0xffff0000 | (uint)(ushort)~((ushort)uVar13 | 0xd657);
  uVar13 = 0x1f;
  if (uVar20 != 0) {
    for (; uVar20 >> uVar13 == 0; uVar13 = uVar13 - 1) {
    }
  }
  uVar27 = (ushort)uVar20 >> 7 | (ushort)uVar20 << 9;
  uVar24 = (uVar28 & 0xffff0000 | (uint)CONCAT11((char)(uVar28 >> 8) >> 1,bVar11)) >> 0xb;
  uVar8 = (short)uVar27 * 0x88b;
  if ((int)(short)uVar8 == uVar8) {
    uVar13 = uVar13 & 0xffff0000 |
             (uint)(ushort)((uVar22 * 2 + -0x7ae2 + sVar7) * 4 | uVar33 >> 0xe);
  }
  bVar6 = (byte)(uVar24 >> 8);
  bVar15 = (byte)((uVar8 & 0xffff) >> 8);
  uVar33 = (short)uVar13 + -0x11b5 + CONCAT11(bVar6,(char)(uVar8 & 0xffff)) * 4;
  bVar9 = ((byte)uVar24 & 0x1f) % 0x11;
  uVar8 = uVar20 & 0xffff0000 |
          (uint)(ushort)(((ushort)(CONCAT12(CARRY1(bVar6,bVar15),uVar27) >> bVar9) |
                         uVar27 << 0x11 - bVar9) * 0x4aec);
  uVar31 = CONCAT22((ushort)((uVar28 & 0xffff0000) >> 0x1b),0x6a5b);
  uVar28 = uVar31 << 5;
  uVar24 = uVar30 | 0xb780bc1c;
  bVar9 = (byte)((uVar33 & 0xff) >> 1);
  bVar17 = (0xf7 < bVar9) + 0x5f;
  bVar21 = (byte)uVar24 ^ bVar17;
  uVar24 = uVar24 & 0xffff0000;
  uVar32 = uVar24 | 0x6a00;
  lVar3 = (ulonglong)
          (uVar28 & 0xffff0000 |
          (uint)CONCAT11((char)(uVar28 >> 8),
                         (byte)((uVar13 & 0xffff0000 | (uint)(ushort)(short)(char)(bVar6 + bVar15))
                                + CONCAT22((ushort)(((uVar34 & 0xffff0000 | uVar29 |
                                                      uVar25 & 0xffffff00 |
                                                     (uint)(byte)((char)uVar25 - 1)) >>
                                                    (bVar11 & 0x1f)) >> 0x10) |
                                           (ushort)((uVar30 << 0x20 - (bVar11 & 0x1f)) >> 0x10),
                                           uVar33) >> 0x1b) | (byte)uVar28)) * (ulonglong)uVar8;
  uVar25 = (CONCAT11(-9 - bVar9,bVar17) - (short)(char)bVar21) + 0x455a;
  if (uVar25 == 0) {
    uVar25 = 0x6a00;
  }
  bVar11 = (char)bVar21 >> 8;
  uVar13 = uVar31 & 0xffff0000 | (uint)(byte)((ulonglong)lVar3 >> 0x20) << 8 | (uint)bVar11;
  bVar9 = (byte)uVar25;
  uVar8 = uVar8 << 6;
  uVar22 = (ushort)uVar8 | (ushort)((uVar20 & 0xffff0000) >> 0x1a);
  uVar31 = uVar13 - uVar32;
  uVar20 = CONCAT22((undefined2)((char)bVar21 >> 7),
                    ((short)(char)bVar21 << (bVar11 & 0x1f)) + 0x7771 + (ushort)(uVar13 < uVar32));
  bVar6 = (byte)uVar31;
  uVar28 = (uint)(ushort)(uVar25 & 0xff | (ushort)(byte)((char)(uVar25 >> 8) >> (bVar6 & 0x1f)) << 8
                         );
  uVar13 = (uVar35 & 0xffff0000 | uVar28) +
           (CONCAT22((short)((ulonglong)lVar3 >> 0x10),
                     (ushort)lVar3 >> (bVar11 & 0xf) | (ushort)lVar3 << 0x10 - (bVar11 & 0xf)) >> 1)
  ;
  bVar11 = bVar6 + (byte)uVar13;
  uVar33 = uVar25 & 0xff00 |
           (ushort)(byte)((byte)(bVar9 + 0x71 + CARRY1(bVar6,(byte)uVar13)) >> 1 |
                         (bVar6 < bVar9 || (byte)(bVar6 - bVar9) < (uVar20 < 0x8ea0722e)) << 7);
  uVar27 = uVar22 + ((ushort)uVar31 & 0xff00 | (ushort)bVar11);
  uVar24 = uVar24 | uVar27;
  bVar11 = bVar11 & 0xf;
  uVar33 = uVar33 << bVar11 | uVar33 >> 0x10 - bVar11;
  uVar34 = (uint)(ushort)(((ushort)uVar13 & 0xff00 |
                          (ushort)(byte)((bVar6 - bVar9) - (uVar20 < 0x8ea0722e))) + 0x3712);
  uVar30 = (uVar8 & 0xffff0000 | (uint)uVar22) ^ 0xfdf0dad3;
  uVar29 = (uint)(byte)((char)((uVar34 & 0x1fc) >> 2) << 1);
  uVar8 = (uVar13 & 0xffff0000 | uVar34 & 0xfffffe00) >> 1 | uVar28 << 0x1f | uVar29 | 1;
  uVar29 = (uVar30 & 0xffff0000 | (uint)(ushort)((ushort)uVar30 ^ 1 << (uVar27 & 0xf))) + uVar24 &
           ~(1 << (uVar29 & 0x1f | 1));
  bVar11 = (byte)(uVar31 >> 8) >> 1;
  uVar34 = uVar29 & 0xffff0000;
  uVar29 = uVar29 >> 1 & 0x7fff;
  uVar32 = uVar34 | uVar29;
  uVar30 = (uVar24 | 0xc000) + uVar32;
  lVar3 = (longlong)
          (int)(uVar35 & 0xffff0000 |
               CONCAT22((uVar33 & 0x1f00 | (ushort)(byte)((char)uVar33 + 0x6f)) << 1,
                        uVar25 & 0xff | (ushort)(byte)((char)(uVar28 >> 8) + bVar9) << 8) /
               (uVar27 | 0xc000) & 0xffff) * (longlong)(int)uVar8;
  uVar25 = (short)uVar30 + (short)((ulonglong)lVar3 >> 0x20);
  uVar30 = uVar30 & 0xffff0000;
  if (SBORROW2(uVar25,0x527b)) {
    uVar20 = CONCAT31((uint3)bVar11,1) | (uint)(ushort)((char)bVar21 >> 7) << 0x10 | 0x8000;
  }
  if (0x527b < uVar25) {
    uVar20 = uVar32;
  }
  bVar9 = (byte)lVar3;
  bVar21 = (byte)((ulonglong)lVar3 >> 8);
  bVar11 = bVar21 ^ (bVar9 == bVar21) * (bVar21 ^ (bVar11 | 0x80));
  if ((char)bVar21 <= (char)bVar9) {
    uVar8 = (uVar13 & 0xfffe0000) >> 1 | uVar29;
  }
  bVar6 = bVar9 ^ (bVar9 != bVar21) * (bVar9 ^ bVar11) ^ (byte)(uVar8 >> 8);
  uVar8 = uVar8 << 1;
  uVar28 = CONCAT11(bVar11 & 0xfe | bVar9 < bVar21,bVar6) & 0xffffff00;
  uVar29 = (uint)(ushort)((ulonglong)lVar3 >> 0x10) << 0x10 | uVar28 | (uint)(byte)(bVar6 + 0xbc);
  uVar35 = (uVar8 & 0xffff | uVar30) >> 1;
  uVar13 = (uint)(byte)((char)uVar8 << 1 | (char)uVar8 < '\0');
  uVar24 = uVar29 + 0x77a4062;
  uVar31 = ~((uVar31 >> 8 & 0xffff00) << 8 | 0x101);
  bVar11 = (byte)uVar31;
  uVar32 = CONCAT22((short)(uVar34 >> 0x10),0x10fb);
  uVar33 = (ushort)uVar35;
  uVar22 = (ushort)(uVar30 >> 0x11);
  uVar25 = uVar33 * 2 + 1;
  uVar35 = (((uVar20 & 0xffff0000 | (uint)(ushort)((ushort)uVar20 ^ 1 << ((ushort)uVar8 & 0xf))) <<
             (bVar11 & 0x1f) | uVar35 >> 0x20 - (bVar11 & 0x1f)) + 0x3eb24582) * 2;
  if (uVar25 == 0) {
    uVar35 = uVar8 & 0xffffff00 | uVar13;
  }
  bVar9 = (bVar11 & 0x1f) % 0x11;
  uVar13 = (uint)(CARRY2(uVar33,uVar33) || 0xfffe < (ushort)(uVar33 * 2)) << 0x10 |
           uVar8 & 0xff00 | uVar13;
  uVar33 = (ushort)(uVar13 << bVar9) | (ushort)(uVar13 >> 0x11 - bVar9);
  bVar9 = bVar11 >> 1;
  uVar20 = uVar24 & 0xffff0000 |
           (uint)(ushort)((short)(char)((char)uVar24 +
                                       (char)((uint)(ushort)(short)(char)bVar11 >> 8)) ^ 0x80);
  bVar36 = (uVar25 & 1) != 0;
  uVar13 = CONCAT22(uVar22,uVar25) >> 1;
  uVar30 = uVar8 & 0xffff0000 |
           (uint)(ushort)(uVar33 & 0xff |
                         (ushort)(byte)((char)((uint)uVar33 >> 8) >> (bVar11 & 0x1f)) << 8);
  if (bVar36) {
    uVar30 = uVar13 | (uint)bVar36 << 0x1f;
  }
  uVar8 = (uVar31 & 0xffffff00 | (uint)bVar9) >> 1;
  uVar24 = uVar8 | (uint)((bVar9 & 1) != 0) << 0x1f;
  bVar21 = (byte)uVar8;
  uVar2 = (ulonglong)(uVar20 | 0xc0000000);
  uVar4 = CONCAT44(CONCAT22((short)((ulonglong)lVar3 >> 0x30),
                            ~CONCAT11(uVar29 < 0xf885bf9e,(char)(uVar28 >> 8) >> 7) + 1) +
                   -0x2ec77ac,uVar20) & 0x3fff0000ffffffff | 0x96c0000000;
  uVar1 = uVar4 % uVar2;
  bVar11 = bVar21 & 0x1f;
  uVar2 = uVar4 / uVar2 & 0xffffffff;
  uVar25 = (ushort)(uVar2 << bVar11) | (ushort)(uVar2 >> 0x21 - bVar11);
  uVar29 = (int)uVar30 >> (bVar9 & 0x1f) ^ 0x1116782f;
  iVar19 = uVar24 - uVar32;
  bVar36 = uVar24 < uVar32 || iVar19 == 0;
  uVar28 = iVar19 - 1;
  cVar14 = (char)(uVar28 >> 8);
  cVar10 = cVar14 - (char)uVar29;
  if (SBORROW1(cVar14,(char)uVar29) != SBORROW1(cVar10,bVar36)) {
    uVar29 = uVar29 & 0xffff0000 | 0x10fb;
  }
  uVar8 = CONCAT11(cVar10 - bVar36,(char)uVar28) & 0xffffff0f;
  sVar12 = (sbyte)uVar8;
  uVar27 = (ushort)uVar13;
  uVar33 = (short)uVar1 << sVar12 | uVar27 >> 0x10 - sVar12;
  bVar9 = (char)uVar33 >> 1;
  uVar30 = CONCAT22((short)(uVar1 >> 0x10),uVar33) & 0xffffff00;
  uVar24 = ((uVar35 & 0x80d60000 |
            (uint)(ushort)((((ushort)uVar35 & 0xf70f) << 1) << (bVar21 & 0x1f))) ^ 0x40000000) >>
           sVar12 | uVar29 - 1 << 0x20 - sVar12;
  uVar13 = (uint)(CONCAT14((char)((short)uVar25 >> 0xf) < '\0',
                           (uVar28 & 0xffff0000 | uVar8) * -0x1c1710f1) >> 8);
  uVar35 = (short)(((ushort)(uVar29 - 1) & ~(1 << (uVar25 & 0xf))) + 0x424f) * -0x32d3;
  uVar29 = (uint)((int)(short)uVar35 != uVar35) << 0x10 | uVar35 & 0xffff;
  uVar20 = (uVar8 * 0x1e000000 | uVar13) ^ 0x2824;
  uVar32 = ((((uVar22 & 0xfffe) << 0x10) >> 1 |
            (uint)(ushort)(uVar27 | (ushort)uVar30 | (ushort)bVar9)) + uVar20 + 2) * 2;
  uVar28 = (uint)(0x10fbU - (short)uVar24 & 0xffef);
  uVar34 = uVar34 | uVar28;
  uVar25 = (ushort)uVar20 >> 1;
  bVar11 = (byte)uVar25;
  uVar35 = uVar32 + uVar24;
  uVar31 = uVar24 ^ 0x40000000;
  iVar23 = (uVar8 * 0x1e000000 | uVar13 & 0xffff0000 |
            (uint)(byte)((char)((uint)(ushort)(uVar25 | (ushort)((uVar20 & 1) != 0) << 0xf) >> 8) <<
                        (bVar11 & 0x1f)) << 8 | (uint)(byte)(bVar11 + 0xb4)) + 0xe582a8ff;
  iVar19 = iVar23 * 2;
  uVar25 = (ushort)iVar19 | (ushort)((uint)iVar23 >> 0x1f);
  uVar13 = 0;
  if (uVar31 != 0) {
    for (; (uVar31 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
    }
  }
  uVar28 = (uVar13 & 0xff00 | (uint)(byte)((char)uVar13 << 1)) * uVar28;
  uVar8 = uVar28 & 0xffff;
  uVar33 = uVar25 + 0xed6b;
  bVar11 = (byte)uVar33;
  uVar20 = uVar34 >> (bVar11 & 0x1f) | uVar34 << 0x20 - (bVar11 & 0x1f);
  bVar21 = (byte)(uVar24 >> 8);
  uVar34 = uVar31;
  if ((char)bVar21 < '\'') {
    uVar34 = uVar20;
  }
  bVar6 = (bVar11 & 0x1f) % 9;
  cVar10 = (char)(uVar8 >> 8);
  cVar14 = (char)uVar34;
  uVar30 = CONCAT22((ushort)(((uint)bVar9 << 0x1e) >> 0x10) | (ushort)(uVar30 >> 0x12),
                    (ushort)(uVar28 >> 0x10) & uVar25) + 1;
  uVar22 = CONCAT11(cVar10 << bVar6 | (byte)(CONCAT11(bVar21 < 0x27,cVar10) >> 9 - bVar6),
                    (char)uVar8) & 0x3fff;
  uVar25 = (ushort)(byte)((byte)((uint)uVar33 >> 8) | 0xc0);
  bVar21 = bVar11 & 0xd;
  uVar34 = (uVar34 & 0xffff0000 |
           (uint)(ushort)((ushort)uVar34 << (bVar11 & 0xf) | (ushort)uVar34 >> 0x10 - (bVar11 & 0xf)
                         )) << 1;
  bVar9 = (byte)(bVar21 * '\x02') % 9;
  bVar36 = CARRY2((ushort)bVar21,(ushort)uVar20);
  sVar7 = (ushort)bVar21 + (ushort)uVar20;
  uVar13 = uVar13 & 0xffff0000 |
           (uint)(byte)((char)((uint)(ushort)(uVar22 % uVar25 << 8) >> 8) + 0xb3) << 8 |
           (uint)(sVar7 == 0);
  uVar28 = uVar20 & 0xffff0000 | (uint)(bVar11 & 0xd);
  if (!bVar36 && sVar7 != 0) {
    uVar28 = (int)cVar14;
  }
  return uVar13 + (CONCAT31((uint3)(uVar34 >> 8) & 0xffff00 |
                            (uint3)(byte)((char)uVar34 << bVar9 |
                                          (byte)(CONCAT11((uVar34 >> 0x1d & 1) != 0,(char)uVar34) >>
                                                9 - bVar9) | (byte)(1 << (uVar22 / uVar25 & 0xf))),
                            bVar36) << 10 ^ 0xbc5U) +
         (CONCAT31(CONCAT21(((ushort)((uint)iVar19 >> 0x10) & 0x3968) >> 1,
                            (char)((ushort)sVar7 >> 8) << 1),(byte)sVar7 | bVar36) >>
         ((byte)sVar7 & 0x1f | bVar36)) + (uVar30 >> bVar21 * '\x02' | uVar30 << bVar21 * -2 + 0x20)
         + CONCAT22((undefined2)(cVar14 >> 7),(short)cVar14 >> 3) +
         (CONCAT22((short)((int)((uVar35 & 0xffff0000 |
                                 (uint)(ushort)((((short)uVar35 -
                                                 (ushort)(byte)(((byte)(uVar29 >> 0xe) |
                                                                (byte)(uVar29 << 3)) - 1)) -
                                                (ushort)CARRY4(uVar32,uVar24)) * 0x100)) + uVar31)
                          >> 0x1d),(short)uVar13 << 0xf) | 0x7fff) + uVar28 + -0x1754f5fa;
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
  longlong lVar6;
  short sVar7;
  uint5 uVar8;
  uint5 uVar9;
  char cVar10;
  byte bVar18;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined2 uVar19;
  byte bVar20;
  sbyte sVar21;
  short sVar22;
  ushort uVar23;
  byte bVar24;
  byte bVar25;
  int iVar26;
  int iVar27;
  ushort uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  ushort uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  ushort uVar36;
  ushort uVar37;
  short sVar38;
  uint uVar39;
  bool bVar40;
  bool bVar41;
  
  for (uVar15 = 0x1f; 0x22022e28U >> uVar15 == 0; uVar15 = uVar15 - 1) {
  }
  uVar29 = uVar15 >> 0x1e | 0x8808b8a0;
  bVar40 = (uVar15 & 1) != 0;
  uVar12 = (ushort)uVar15 >> 1;
  uVar15 = uVar15 & 0xffff0000 | (uint)(ushort)(uVar12 | (ushort)bVar40 << 0xf);
  if (((uVar12 & 0x4000) != 0) != bVar40) {
    uVar15 = uVar29;
  }
  sVar22 = (short)uVar29;
  uVar12 = sVar22 - 0xc0;
  uVar29 = 0x74d0b48f;
  if (uVar12 == 0 || SCARRY2(sVar22,-0xc0) != (short)uVar12 < 0) {
    uVar29 = 0xcbd71b91;
  }
  uVar17 = CONCAT11((byte)(uVar29 >> 8) ^ 0x1b,0x91) & 0xffff1fff;
  uVar16 = uVar17 | 0xcbd70000;
  uVar34 = (uint)(byte)((char)uVar12 + 0x5d);
  uVar34 = (uVar12 & 0xffffff00 | uVar34 | 0xa5dc000) / (uVar12 & 0xffffff00 | uVar34 | 0xc000) &
           0xffff;
  uVar33 = 0x759e19a7 - ((0xdc1cU >> ((ushort)uVar29 & 0xc) & 1) != 0);
  bVar18 = (byte)(uVar34 >> 8) >> 1;
  uVar12 = (ushort)~((ushort)uVar29 & 0x164c) >> 1;
  cVar10 = (char)uVar12;
  uVar11 = CONCAT11(bVar18,((byte)uVar34 & bVar18) + 0xa6) * (short)uVar33;
  uVar33 = uVar33 | 0x740f004e;
  uVar34 = 0x1f;
  if (uVar16 != 0) {
    for (; uVar16 >> uVar34 == 0; uVar34 = uVar34 - 1) {
    }
  }
  uVar32 = (short)uVar33 << ((byte)uVar34 & 0x1f);
  uVar33 = uVar33 & 0xffff0000;
  uVar16 = uVar33 | uVar32;
  uVar31 = (uint)(CONCAT14(1,uVar15 & 0xffff0000) >> 0x11) & 0xfffffbff |
           (uint)(ushort)((short)uVar15 << 1 | (ushort)((short)uVar15 < 0)) << 0x10;
  uVar39 = uVar34 ^ 0xc5;
  lVar5 = (longlong)
          (int)((ushort)(uVar11 & 0xff | (ushort)(byte)((char)((uint)uVar11 >> 8) - 9) << 8) |
               0xb2290000) * (longlong)(int)uVar16;
  iVar26 = (int)(short)lVar5 * (int)(short)uVar32;
  uVar32 = (ushort)((uint)iVar26 >> 0x10);
  sVar22 = (short)((ulonglong)lVar5 >> 0x10);
  uVar11 = (-0xc0 << ((byte)uVar17 & 0x1f) | 1 << ((ushort)uVar39 & 0xf)) + 0x16d4;
  uVar30 = uVar11 | 0x88080000;
  bVar18 = (byte)uVar39 & 0xf;
  uVar32 = uVar32 >> bVar18 | uVar32 << 0x10 - bVar18;
  uVar17 = CONCAT22((short)((ulonglong)lVar5 >> 0x30),uVar32) >> 9;
  uVar15 = (uVar32 & 0x100 | (uint)(byte)((char)uVar32 << 4)) >> 1;
  uVar36 = ((byte)((char)((uint)iVar26 >> 8) + (char)(uVar32 >> 8) + ((byte)uVar39 < 0x9b)) & 0x3f)
           << 8;
  uVar32 = (ushort)(byte)((byte)uVar15 | 0xc0);
  uVar32 = uVar36 / uVar32 & 0xff | uVar36 % uVar32 << 8;
  uVar39 = (uVar31 >> 1 | 0x80000000) + uVar39 ^ 0xa6fc;
  if ((uVar39 & 0xd96b78dc) != 0) {
    uVar16 = uVar33;
  }
  bVar20 = (byte)uVar17;
  uVar34 = (uVar34 >> 8 & 0xffff00) << 8;
  bVar18 = bVar20 >> 1;
  if (!(bool)(bVar20 & 1)) {
    uVar39 = uVar15 | (uVar17 & 0xff) << 8 | 0xc0;
  }
  iVar26 = (uVar29 & 0x4b040000 | (uint)(byte)((char)((uint)uVar12 >> 8) - 1) << 8 |
            (uint)(byte)(cVar10 << 1 | cVar10 < '\0') | uVar31) + 0xe3b5447e;
  uVar12 = (ushort)uVar39;
  uVar17 = iVar26 * 0x80;
  uVar39 = uVar34 | (ushort)(short)(char)bVar20 & 0xffffff00 | (uint)bVar18 | 0xc000;
  uVar15 = (ushort)(((ushort)uVar17 | (ushort)((uint)iVar26 >> 0x19)) + 0xcb5b) & 0xfffb | 0xc000;
  uVar29 = ((((ushort)(sVar22 >> 0xf) & 0x3fff) << 0x10 |
            (uint)(ushort)(uVar32 ^ (ushort)(uVar32 != uVar12) *
                                    (uVar32 ^ uVar12 ^ (ushort)(uVar32 == uVar12) *
                                                       (uVar12 ^ uVar11)))) %
            ((ushort)(short)(char)bVar20 & 0xff00 | (uint)bVar18 | 0xc000) & 0x3fff) << 0x10 |
           (int)(char)bVar18;
  uVar33 = uVar29 % uVar15;
  uVar15 = (uVar29 / uVar15 & 0xffbf) << 1 | 1;
  if (uVar15 != uVar30) {
    uVar15 = uVar30;
  }
  uVar12 = (ushort)(uVar15 >> 0x10);
  uVar29 = CONCAT22(uVar12,0xfb13);
  uVar11 = (short)uVar39 * 0x418e;
  uVar33 = (uVar33 & 0xffffff00 | (uint)(ushort)(sVar22 >> 0x1f) << 0x10 |
            (uint)((byte)((char)uVar33 + 0x93U) >> 1) | uVar39) << 10;
  bVar18 = (byte)uVar11 & 0x1f;
  uVar15 = uVar29;
  if ((short)uVar33 < 1) {
    uVar15 = (uint)uVar12 << 0x10 | 0xfb13;
  }
  iVar26 = -0xf22c526 - (((uVar34 | uVar11) << bVar18 | 0xda3addf0U >> 0x20 - bVar18) & 0xffff0000);
  uVar34 = uVar17 & 0xffff0000;
  if (iVar26 == 0) {
    uVar34 = uVar16 >> 0x10 | uVar29 << 0x10;
  }
  iVar4 = (int)(short)uVar15 * (int)(short)iVar26;
  uVar32 = (ushort)((uint)iVar4 >> 0x10);
  uVar11 = uVar32 | 1;
  uVar17 = CONCAT31((int3)(uVar34 >> 8),0xb6);
  uVar12 = (ushort)(byte)iVar4 * 0xb6;
  uVar36 = (ushort)(iVar26 * 2) | (ushort)(iVar26 < 0);
  uVar15 = uVar15 & 0xffff0000 | uVar12 & 0xffffff00 | (uint)(byte)-(char)uVar12;
  sVar22 = (short)uVar17;
  uVar12 = sVar22 + uVar36;
  if (SCARRY2(sVar22,uVar36) != (short)uVar12 < 0) {
    uVar12 = (ushort)uVar15;
  }
  uVar16 = (short)uVar11 * 0x4739;
  bVar41 = (int)(short)(ushort)uVar16 != uVar16;
  bVar20 = (byte)((uVar16 & 0xffff) >> 8);
  bVar18 = (uVar11 != 0) - bVar20;
  uVar39 = (iVar26 * 2 & 0xffff0000U | uVar17 & 0xffff) + 1;
  bVar40 = uVar15 + 0x908c9a69 < (uint)((uVar11 != 0) < bVar20 || bVar18 < bVar41);
  uVar17 = (uint)(ushort)((ushort)uVar39 >> 1 | (ushort)(uVar15 < 0x6f736597 || bVar40) << 0xf);
  bVar20 = (char)((char)(uVar16 & 0xffff) + '\x1b' + ((uVar39 & 1) != 0)) >> 1;
  uVar11 = (ushort)uVar16 & 0xff00 | (ushort)bVar20;
  sVar22 = uVar11 + 1;
  if (SCARRY2(uVar11,1) != sVar22 < 0) {
    uVar29 = uVar29 & 0xffff0000 | uVar17;
  }
  iVar26 = (((uVar33 & 0x3a3b0000 | (uint)CONCAT11((char)((uint)uVar32 >> 8) + 'U',bVar18 - bVar41))
             >> 2 | uVar17 << 0x1e) >> (bVar20 & 0x1f)) +
           (uVar34 & 0xffff0000 |
           (uint)(ushort)(uVar12 & 0xff | (ushort)(uVar15 >= 0x6f736597 && !bVar40) << 8));
  uVar15 = (uVar29 & 0xffff) >> 10;
  bVar24 = (byte)iVar26;
  bVar18 = (byte)sVar22;
  bVar20 = bVar18 << (bVar18 & 7) | bVar18 >> 8 - (bVar18 & 7);
  uVar30 = (ushort)(1 << (uVar12 & 0xf) ^ 0x9b3f) + 0x84839538;
  uVar16 = CONCAT31(0x2c169,(bVar24 != 0xc5) * (bVar24 ^ 0xc5) ^ 0xc5) | 1 << (uVar30 & 0x1f);
  uVar33 = (uVar34 & 0xffff0000 | (uint)(ushort)((uVar12 & 0x7f) << 1 | 1)) << 1;
  bVar18 = (byte)uVar33;
  bVar24 = (bVar18 | (int)uVar34 < 0) << 3 | bVar18 >> 5;
  sVar21 = (char)((bVar20 + 0xb1) - ((int)uVar34 < 0) & 0xf) >> 1;
  uVar1 = (ulonglong)(uVar33 & 0xffffff00 | (uint)bVar24 | 0xc0000000);
  uVar2 = CONCAT44(iVar26,uVar16 & 0xffff0000 |
                          (uint)(ushort)((~(ushort)uVar16 & 0xff) * (ushort)bVar24)) &
          0x3fffffffffffffff;
  uVar3 = uVar2 / uVar1;
  uVar2 = uVar2 % uVar1;
  cVar10 = (char)uVar3;
  uVar33 = (uVar39 >> 0x18 | (uVar39 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18) >>
           (bVar20 & 0x1f) & 0xffff0000 | (uint)(byte)(uVar2 >> 8);
  bVar18 = sVar21 + 0x49;
  lVar5 = (longlong)
          (int)((uVar34 & 0x7fff0000) << 1 | 0xc0000000 |
               (uint)CONCAT11(SCARRY1(cVar10,-0x3f) != (char)(cVar10 + -0x3f) < '\0',bVar24)) *
          0x7171969a;
  uVar34 = (int)(uVar29 & 0xffff0000 |
                (uint)(ushort)((ushort)((ushort)uVar15 | (ushort)((uVar29 & 0xffff) << 7)) >> 1 |
                              (ushort)((uVar15 & 1) != 0) << 0xf)) >> 3;
  uVar29 = (uVar33 >> sVar21 | uVar33 << 0x21 - sVar21) << 1;
  uVar15 = 0;
  if (uVar34 != 0) {
    for (; (uVar34 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
    }
  }
  bVar20 = (byte)uVar15 >> 1;
  bVar25 = bVar20 << 7 | (byte)(bVar20 | (byte)uVar15 << 7) >> 1;
  uVar34 = (uVar30 & 0xffff0000 | (uint)(ushort)((ushort)uVar30 >> 1 | 0x8000)) + 1 <<
           (bVar18 & 0x1f) |
           ((uVar29 & 0xffff0000 |
            (uint)(ushort)(((ushort)uVar29 | (ushort)(uVar2 >> 0x10) >> 0xf) + 0x25b2)) << 0xe) >>
           0x20 - (bVar18 & 0x1f);
  uVar29 = uVar34 << 0xd;
  uVar34 = uVar34 >> 0x13;
  uVar17 = CONCAT31(CONCAT21((short)(uVar3 >> 0x10),(int)lVar5 == lVar5),'\0' << (bVar18 & 0x1f)) *
           (uVar29 | uVar34);
  bVar24 = (byte)(bVar18 - 0xf72);
  bVar20 = bVar24 & 0xf;
  uVar33 = (uint)(ushort)((ushort)(bVar25 >> bVar20) | (ushort)bVar25 << 0x10 - bVar20);
  bVar40 = (uVar17 & 0x1000) != 0;
  uVar12 = (((ushort)(byte)((byte)((uint)(ushort)(bVar18 - 0xf72) >> 8) >> (bVar24 & 0x1f)) << 8 |
            0xff) ^ 0x6b4f) + 0x5317;
  if (((uVar29 | uVar34) & 0x6aab) != 0) {
    uVar33 = (uVar29 & 0x7fff | uVar34) << 1 | 1;
  }
  uVar33 = uVar15 & 0xffff0000 | uVar33;
  bVar18 = (byte)uVar12 & 0x1f;
  uVar33 = uVar33 >> bVar18 | uVar33 << 0x20 - bVar18;
  bVar20 = (byte)(uVar34 << 1);
  uVar15 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8;
  uVar15 = (uint)(uVar12 < (ushort)uVar15) << 0x10 | uVar15;
  uVar34 = uVar15 >> 2;
  bVar24 = (byte)((uVar15 << 0xf) >> 8) | (byte)(uVar34 >> 8);
  bVar18 = bVar20 & 7 | 1;
  bVar25 = (byte)uVar34;
  bVar25 = bVar25 >> bVar18 | bVar25 << 8 - bVar18;
  bVar18 = (byte)(uVar17 >> 0x18);
  bVar41 = bVar18 == bVar24;
  bVar24 = bVar24 ^ bVar41 * (bVar24 ^ bVar25);
  bVar18 = bVar18 ^ !bVar41 * (bVar18 ^ bVar24);
  uVar15 = (uint)uVar12 << 0x1b;
  uVar8 = CONCAT14((bVar18 & 1) == 0,(uVar29 & 0x7fff8000) << 1 | (uint)uVar12) >> 6;
  uVar29 = (uint)uVar8;
  iVar4 = -(uint)((bVar24 & 1) != 0);
  iVar26 = (uint)(ushort)(CONCAT11(bVar41,bVar20) | 1) << 1;
  uVar12 = CONCAT11(bVar24,bVar25) >> 1;
  uVar11 = uVar12 | 0x8000;
  bVar41 = (bVar25 & 1) != 0;
  bVar18 = (byte)((ushort)CONCAT31(((uint3)(uVar17 >> 8) & 0xff00) >> 8,bVar18) >> 1);
  uVar34 = (uint)(bVar24 >> 1) * 5 + 0xf6;
  if (uVar11 != 0 && -1 < (char)bVar24) {
    uVar34 = uVar15 | uVar29;
  }
  bVar20 = bVar18 - 0x3d;
  bVar25 = (byte)((uint)iVar26 >> 8);
  lVar6 = (longlong)
          CONCAT31((uint3)uVar17 & 0xff00 | (uint3)(uVar17 * 0x1000000 >> 8) |
                   (uint3)(uVar11 != 0 && -1 < (char)bVar24),bVar20 - bVar41) * 0x66320416;
  bVar25 = (char)uVar12 + bVar25 | bVar25;
  uVar17 = (iVar4 >> 1) * 0x73f00658;
  sVar22 = CONCAT11(-(char)((uint)uVar11 >> 8),bVar25);
  iVar27 = CONCAT22((ushort)(((uVar33 & 0xff00) << 8) >> 0x10) | (ushort)((uVar33 << 0x18) >> 0x10),
                    sVar22);
  uVar12 = (ushort)((ulonglong)lVar6 >> 0x10);
  bVar24 = (byte)uVar17 & 0xf;
  uVar33 = CONCAT22(uVar12,(short)(char)lVar6 * (short)(char)lVar6) >> 1;
  lVar5 = (longlong)
          (int)(((uVar12 & 0xfffe) << 0x10) >> 1 |
               (uint)CONCAT11((byte)(uVar33 >> 8) >> 1,(char)uVar33)) *
          (longlong)
          (int)(uVar34 & 0x49c90000 |
               (uint)(ushort)((((short)uVar34 - ((ushort)iVar26 | 1)) -
                               (ushort)(bVar18 < 0x3d || bVar20 < bVar41) & 0x97e2) << 6));
  bVar20 = (byte)((ulonglong)lVar5 >> 0x20);
  bVar18 = (byte)(uVar17 >> 8);
  bVar41 = ((ushort)CONCAT31((int3)((ulonglong)lVar5 >> 8),-0x5b - ((int)lVar5 != lVar5)) >>
            (bVar25 & 0xf) & 1) != 0;
  uVar15 = uVar15 | uVar29 & 0xffff0000 |
           (uint)(ushort)((short)uVar8 + -0x1947 + (ushort)((int)lVar6 != lVar6));
  if (!bVar41) {
    uVar15 = CONCAT22(0x96,0x2ad7U >> bVar24 | sVar22 << 0x10 - bVar24) | 0x67000000;
  }
  bVar24 = bVar20 & 0x1f;
  uVar33 = iVar27 << bVar24 | (uint)(CONCAT14(bVar41,iVar27) >> 0x21 - bVar24);
  uVar29 = uVar17 & 0xffff0000 |
           (uint)(ushort)((CONCAT11(bVar18 >> 6 | bVar18 << 2,bVar20) ^ 8) + (short)uVar15) |
           1 << ((ushort)bVar25 & 0x1f);
  bVar18 = (byte)uVar29;
  bVar20 = (char)(uVar29 >> 8) << (bVar18 & 0x1f);
  uVar34 = ((((uint3)((ulonglong)lVar5 >> 0x28) & 0xffff00) << 8 |
            (uint)(CONCAT11((byte)((ulonglong)lVar5 >> 0x28) >> 1,(byte)uVar17) & 0xff0f)) +
           0x3abaca53) - (uint)((bVar20 & 1) != 0);
  uVar17 = (int)(uVar15 & 0xffff0000 | (uint)(ushort)((short)uVar15 << 1)) >> 3;
  uVar15 = 0x1f;
  if (uVar17 != 0) {
    for (; uVar17 >> uVar15 == 0; uVar15 = uVar15 - 1) {
    }
  }
  uVar11 = CONCAT11((char)(bVar20 >> 1 | 0x80) >> (bVar18 & 0x1f),bVar18);
  uVar32 = (short)((uVar33 & 0xffff0000) >> 0x10) + uVar11 + 1;
  uVar17 = (uVar29 & 0xffff0000 | (uint)uVar11) + 0x56142ac9;
  uVar12 = ((short)(char)((uVar33 & 0xffff0000) >> 0x10) & 0xffU) + uVar32;
  bVar20 = (byte)((uint)uVar32 >> 8);
  bVar24 = bVar20 >> 1 | bVar20 << 7;
  bVar20 = (bVar18 & 0x1f) % 9;
  uVar33 = (uint)CONCAT21((CONCAT11((char)(uVar33 >> 8) + 'I',(char)uVar33) >> 1) + -1,bVar24) << 8
           | 0x1000 |
           (uint)(byte)((byte)((ushort)(uVar32 & 0xff |
                                       (ushort)(((ushort)((ushort)bVar24 << 8) >> 0xc & 1) != 0) <<
                                       8) >> bVar20) | (char)(uVar32 & 0xff) << 9 - bVar20);
  bVar41 = ((ushort)uVar33 & uVar12) == 0;
  uVar33 = uVar33 << 1;
  bVar20 = (byte)((uint)uVar11 >> 8);
  bVar24 = (byte)uVar34;
  uVar15 = CONCAT22((short)(iVar4 >> 0x11),(ushort)bVar25) + 0xb9c1ca3dU | uVar15;
  if (bVar24 <= bVar20) {
    uVar15 = uVar34;
  }
  uVar34 = (uVar29 & 0xffff0000 |
           (uint)CONCAT11((bVar20 - bVar24) + bVar41 + ((uVar33 >> 0xc & 1) != 0),bVar18)) << 1;
  uVar16 = uVar34 | 1;
  uVar29 = (int)(short)(uVar12 & 0xff00 | (ushort)bVar41) * (int)(short)uVar15;
  uVar12 = (ushort)uVar17;
  uVar33 = uVar33 & 0xd9f3a220;
  if ((SBORROW2(uVar12,-0x78fe) != false) == (short)(uVar12 + 0x78fe) < 0) {
    uVar33 = uVar16;
  }
  bVar20 = (byte)uVar16;
  bVar18 = (bVar20 & 0x1f) % 9;
  bVar18 = (byte)(CONCAT11(uVar12 < 0x8702,bVar20) >> bVar18) | bVar20 << 9 - bVar18;
  uVar34 = (uVar34 & 0xffffff00 | (uint)bVar18) << (bVar18 & 0x1f) & 0xffff0000 | uVar29 >> 0x10;
  bVar18 = (byte)(uVar29 >> 0x10) & 0x1f;
  iVar26 = uVar15 << 0x20 - bVar18;
  uVar30 = (uVar29 & 0xffff) << ((byte)(uVar34 >> 1) & 0x1f);
  uVar34 = (uVar34 >> 9) << 8;
  uVar16 = uVar34 & 0xffff0000;
  uVar34 = uVar16 | (ushort)((ushort)uVar34 | 0x400);
  sVar22 = (short)uVar30 >> 0xf;
  uVar11 = sVar22 - 1;
  uVar39 = uVar11 | 0xffff0000;
  bVar20 = (byte)uVar15;
  if (SCARRY2(sVar22,-1) == (short)uVar11 < 0) {
    uVar15 = uVar15 & 0xffff0000 | (uint)uVar11;
  }
  uVar32 = uVar11 * -0x2fe5;
  uVar11 = (short)uVar15 - uVar11;
  bVar20 = (byte)(((byte)((uVar29 >> 0x10 & 0x1fe) >> 1) & 0xf) - 0x1d) >> 1 ^ bVar20;
  uVar29 = uVar34 | bVar20;
  if (bVar20 == 0) {
    uVar39 = uVar33 & 0xffff0000 | (uint)uVar32;
    uVar29 = uVar30;
  }
  if ((POPCOUNT((byte)(uVar32 >> 8) | 7) & 1U) != 0) {
    uVar29 = uVar15 & 0xffff0000 | (uint)uVar11;
  }
  iVar4 = 0;
  if (uVar39 != 0) {
    for (; (uVar39 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
    }
  }
  uVar34 = uVar34 | bVar20 & 0xffffff70;
  uVar30 = (uVar39 & 0xff00) << 8;
  uVar31 = uVar39 >> 0x18 | (uVar39 & 0xff0000) >> 8 | uVar30 | uVar39 << 0x18;
  uVar29 = (int)((ulonglong)((longlong)(int)uVar29 * (longlong)(int)uVar34) >> 0x20) - uVar31;
  uVar36 = ((ushort)((uVar17 & 0xffff0000 | (uint)(ushort)(uVar12 + 0x78fe)) >> bVar18) |
           (ushort)iVar26) - 0x3ee;
  uVar33 = ((uVar33 & 0xffff0000 |
            (uint)(byte)(((byte)((uint)uVar32 >> 8) | 7) << 1 | (uVar33 & 0x20000) != 0) << 8) ^
            0x24000 | (uint)((uVar36 & 1) == 0)) & ~(1 << (uVar11 & 0x1f));
  uVar12 = (((ushort)uVar34 | (ushort)uVar29) - (ushort)uVar33) - 1;
  uVar16 = uVar16 | uVar12;
  if ((POPCOUNT(uVar12 & 0xff) & 1U) != 0) {
    uVar31 = uVar30 | uVar39 << 0x18 | uVar33 & 0xffff;
  }
  uVar11 = uVar11 | 1 << (uVar36 >> 1 & 0xf);
  bVar18 = ((byte)uVar12 & 0x1f) % 0x11;
  uVar11 = uVar11 << bVar18 |
           (ushort)(CONCAT12((uVar16 >> (uVar11 & 0x1f) & 1) != 0,uVar11) >> 0x11 - bVar18);
  uVar12 = uVar11 << 3;
  uVar34 = (uint)(ushort)((uVar12 & 0xff00 |
                           (ushort)(byte)(((byte)(uVar11 >> 0xd) | (byte)uVar12) << 1) | 1) &
                         ~(1 << (((ushort)(uVar16 << 1) | (ushort)(uVar33 >> 0x1f)) -
                                 ((ushort)uVar33 & 0xff) & 0xf)));
  iVar26 = 0x1f;
  if (uVar31 != 0) {
    for (; uVar31 >> iVar26 == 0; iVar26 = iVar26 + -1) {
    }
  }
  uVar33 = (uVar15 & 0xffff0000 | (uint)(ushort)((ushort)uVar29 + 0xba01)) >> 5;
  uVar16 = iVar26 * 2 + uVar31 + (uint)(iVar26 < 0);
  cVar10 = (char)uVar31;
  bVar18 = cVar10 + (char)(uVar31 >> 8);
  uVar17 = uVar33;
  if ((POPCOUNT(bVar18 | 0x4d) & 1U) != 0) {
    uVar17 = uVar16;
  }
  uVar12 = CONCAT11(cVar10 + -0x10,bVar18);
  bVar41 = (SBORROW1(cVar10,'\x0f') != SBORROW1(cVar10 + -0xf,'\x01')) != (short)(uVar12 | 0x4d) < 0
  ;
  uVar30 = (int)((CONCAT21((short)(uVar31 >> 0x10),cVar10) & 0xffff00) << 8 | (uint)uVar12 | 0x4d)
           >> bVar41;
  uVar39 = uVar34 * 0xfdde;
  uVar16 = (uVar16 & 0xffffff00 | (uint)(byte)(bVar41 + 0x42)) >> 1 |
           (uint)((uVar29 >> 0x1a & 1) != 0) << 0x1f;
  uVar33 = (uVar15 & 0xffe00000) >> 5 | uVar31 << 0x1b | (uint)(ushort)((short)uVar33 >> 7);
  bVar24 = (byte)(uVar30 >> 8);
  uVar15 = uVar16 ^ 1 << (uVar17 & 0x1f);
  bVar20 = (byte)uVar15;
  bVar18 = (bVar20 & 0x1f) % 9;
  uVar35 = uVar33 >> (bVar20 & 0x1f) | uVar33 << 0x20 - (bVar20 & 0x1f);
  uVar31 = uVar30 >> (bVar20 & 0x1f) | uVar30 << 0x20 - (bVar20 & 0x1f);
  uVar34 = (uVar29 & 0xffff0000 | uVar39 >> 0x10) + (uVar34 * -0x22000000 | (uint)bVar24);
  uVar28 = (short)uVar31 >> 1;
  uVar12 = CONCAT11((byte)(CONCAT11((uVar16 >> (uVar17 & 0x1f) & 1) != 0,bVar24) >> bVar18) |
                    bVar24 << 9 - bVar18,(char)uVar30) + 1;
  uVar33 = (uVar15 & 0xffff0000 | (uint)CONCAT11((char)(uVar15 >> 8) + '!',bVar20)) * 2;
  bVar18 = (byte)uVar33;
  uVar29 = ((uVar29 & 0xffff0000 |
            (uint)(ushort)((short)(char)(uVar39 >> 0x10) & 0xffU |
                          (ushort)(byte)(((short)uVar12 < 0) << 7 | (uVar12 == 0) << 6 | bVar40 << 4
                                         | ((POPCOUNT(uVar12 & 0xff) & 1U) == 0) << 2 | 2U |
                                        (byte)uVar34 & 1) << 8)) << (bVar18 & 0x1f) |
           uVar33 >> 0x20 - (bVar18 & 0x1f)) + 0xdac8a889;
  uVar15 = (int)(short)uVar29 * (int)(short)uVar33;
  uVar23 = (ushort)uVar35;
  uVar1 = (ulonglong)(uVar31 & 0xffff0000 | (uint)uVar28 | 0xc0000000);
  uVar2 = CONCAT44((uVar34 >> 8 & 0xffff00) << 8 | (uint)(ushort)((short)(uVar15 >> 0x10) + uVar23),
                   uVar29 & 0xffff0000 |
                   (uint)(ushort)((short)((uVar15 & 0xffff) >> 1) >> (bVar18 & 0x1f))) &
          0x3fffffffffffffff;
  uVar3 = uVar2 / uVar1;
  uVar19 = (undefined2)(uVar3 >> 0x10);
  uVar13 = (ushort)(byte)uVar3 * (ushort)(byte)(uVar3 >> 8);
  bVar20 = (byte)(uVar2 % uVar1);
  bVar41 = (uVar17 & 1) != 0;
  cVar10 = (bVar20 + 0x57) - bVar41;
  uVar15 = (uVar33 & 0xffff0000 | (uint)CONCAT11((char)(uVar33 >> 8) + '\x17',bVar18)) +
           CONCAT22(uVar19,CONCAT11((cVar10 < '\0') << 7 | (cVar10 == '\0') << 6 | bVar40 << 4 |
                                    ((POPCOUNT(cVar10) & 1U) == 0) << 2 | 2U |
                                    (bVar20 < 0xa9 || (byte)(bVar20 + 0x57) < bVar41),cVar10));
  bVar18 = (byte)uVar15;
  bVar24 = bVar20 - (cVar10 >= '\0') ^ (byte)(1 << (uVar35 >> (bVar18 & 0x1f) & 0x1f));
  uVar15 = uVar15 >> (bVar18 & 0x1f);
  bVar20 = (byte)uVar15;
  uVar16 = ((uVar17 & 0xffff) >> 1 | (uint)bVar41 << 0x1f) >> (bVar20 & 0x1f);
  bVar18 = (bVar20 & 0x1f) % 9;
  bVar25 = (byte)((char)bVar24 >> 7) >> 1;
  uVar32 = (ushort)(short)(char)bVar24 >> 1 & 0xff;
  uVar29 = (uVar15 & 0xffff0000 |
           (uint)(ushort)(CONCAT11((char)(uVar15 >> 8) * '\x02' + (char)uVar32,bVar20) ^ 0x400)) <<
           1;
  uVar11 = (ushort)uVar29;
  uVar36 = (ushort)uVar16 & 0x3fff;
  uVar12 = (ushort)(byte)(bVar24 + 0xb4 | 0xc0);
  uVar12 = (uVar36 / uVar12 & 0xff | uVar36 % uVar12 << 8) ^ (uVar11 | 1) ^ 0x10;
  bVar20 = (char)((uint)uVar12 >> 8) + 0x52;
  uVar34 = CONCAT22(uVar19,uVar12 & 0xff | (ushort)bVar20 << 8);
  uVar17 = ~((uVar30 & 0xffff0000 |
             (uint)(ushort)(uVar32 | (ushort)(byte)((byte)(CONCAT11(((short)(char)bVar24 & 1U) != 0,
                                                                    bVar25) >> bVar18) |
                                                   bVar25 << 9 - bVar18) << 8)) >> 1 |
            (uint)((uVar11 >> 4 & 1) != 0) << 0x1f);
  uVar14 = (ushort)(bVar20 == 0);
  uVar37 = (ushort)uVar17;
  uVar12 = uVar37 >> 1;
  uVar17 = uVar17 & uVar34;
  iVar26 = uVar34 + 0xa52da711;
  uVar11 = (ushort)iVar26;
  uVar34 = (uVar17 ^ 0xd492) << 5;
  uVar36 = (ushort)uVar34;
  uVar32 = (ushort)((uint)iVar26 >> 0x10);
  uVar33 = (ushort)((ushort)(uVar11 == uVar14) * (uVar14 ^ uVar12)) & 0xffffff00;
  bVar18 = (byte)(uVar33 >> 8);
  uVar14 = (ushort)(((uint)(ushort)((ushort)(((uint)(ushort)(uVar28 ^ (ushort)((ushort)(uVar13 & 
                                                  0xff | (ushort)(byte)((char)(uVar13 >> 8) * '\x02'
                                                                       + 1) << 8) == uVar28) *
                                                  (uVar28 ^ uVar23)) << 0x16) >> 0x10) |
                                   (ushort)(uVar15 >> 0x1a)) << 0x11) >> 0xf);
  uVar34 = uVar34 & 0xffff0000;
  cVar10 = (char)(bVar18 + (char)uVar12) >> 0x1e;
  uVar13 = CONCAT11(cVar10,0xb2);
  uVar28 = ~(uVar14 >> 0xe | uVar14);
  uVar15 = CONCAT31(CONCAT21(uVar32,'\0' < (char)(bVar18 | 0x88)),
                    ((uVar13 & 0xf2d4) != 0 && -1 < cVar10) << 6) & 0xffff;
  uVar15 = (uint)(uVar32 | 0x1b3d) << 0x10 |
           ((uint)(ushort)(uVar14 >> 2 | 0x1d76) << 0x10 | uVar15 | 0xc000) / (uVar15 | 0xc000) &
           0xffff;
  lVar5 = (ulonglong)uVar15 * (ulonglong)uVar15;
  uVar32 = ((ushort)(uVar17 >> 0x1b) | uVar36) << 2 | uVar36 >> 0xe;
  if (-1 < (char)((uint)uVar13 >> 8)) {
    uVar32 = uVar28;
  }
  uVar14 = CONCAT11((char)((ulonglong)lVar5 >> 0x28) + -0x29,(char)((ulonglong)lVar5 >> 0x20)) ^
           0xaf;
  uVar36 = (uVar28 ^ uVar11 + ((ushort)uVar33 | 0x2e) + 0x85d0) << 1 ^ 0xd7da;
  uVar13 = uVar14 & 0xf7ff;
  iVar4 = (((uVar16 & 0xffff0000 | (uint)(ushort)(uVar37 * -0x7557)) << 1) >> 0x10) * 0x30000;
  iVar26 = iVar4 + -0x76b27e43;
  cVar10 = (char)((uint)iVar26 >> 8);
  uVar39 = (uVar13 | 0x783e) ^ 0x61a05ac;
  sVar22 = (short)uVar39;
  uVar37 = sVar22 << 1 | (ushort)(sVar22 < 0);
  uVar11 = CONCAT11(cVar10 << 1 | cVar10 < '\0',(char)iVar26) + uVar37;
  uVar33 = (uint)(byte)uVar11;
  uVar15 = ((uint)((ushort)(uVar12 & 0xff00 | (ushort)bVar18 | 0x88) >> 2) << 0x12 | 0x33a80000) <<
           1;
  uVar17 = uVar15 & 0xd500000;
  uVar16 = uVar17 | 0x100;
  if ((uVar15 & 0xd504f08) == 0) {
    uVar36 = uVar14 & 0xf7ff;
  }
  uVar15 = (iVar4 + 0x894d0000U | uVar11 & 0xffffff00 | uVar33) >> 7;
  sVar22 = (short)((int)(uVar34 | uVar32) >> 1);
  uVar11 = (ushort)((int)uVar34 >> 0x11);
  uVar12 = -sVar22;
  if (sVar22 != 0) {
    uVar16 = uVar17 | uVar15 & 0xffff;
  }
  uVar34 = (uVar16 & 0xffff0000 | uVar16 >> 2 & 0x3fff) - (uVar33 << 0x19 | uVar15);
  cVar10 = (char)uVar15;
  bVar40 = (uVar11 & 4) != 0;
  uVar28 = SEXT12(cVar10);
  uVar23 = CONCAT11(-1 - bVar40,bVar40) & 0xefc7;
  uVar14 = uVar23 * 2;
  uVar32 = uVar37 + 0xc68c;
  uVar12 = (short)cVar10 ^
           (ushort)(uVar28 != uVar12) *
           ((short)cVar10 ^ uVar12 ^ (ushort)(uVar28 == uVar12) * (uVar12 ^ uVar28));
  if (0x3973 < uVar37) {
    uVar12 = uVar32;
  }
  if (uVar32 != 0) {
    uVar12 = uVar14;
  }
  uVar15 = (int)(short)((uVar12 & 0xff) * (ushort)(byte)uVar34) * (int)(short)~uVar36;
  bVar18 = (byte)uVar14;
  uVar29 = (uVar29 >> 0x10 & 0xa705) << 0x10 | uVar14 & 0xffffff00;
  uVar33 = (((uint)(ushort)((ulonglong)lVar5 >> 0x30) << 0x10 | uVar15 >> 0x10 | 0x9505) ^ 0x5728) *
           2;
  uVar37 = (((ushort)(uVar15 >> 0x10) | 0x9505) + uVar23 * 4) * (short)uVar33;
  iVar26 = CONCAT22((undefined2)(cVar10 >> 7),uVar37);
  sVar7 = (CONCAT11(((char)(CONCAT11((byte)uVar13 < 0x4a,(char)(uVar34 >> 8)) >> 2) + '%') - bVar40,
                    (byte)uVar34) | 0x2000) * 2;
  uVar13 = (~uVar36 | uVar37) + 0xda5e;
  uVar12 = (ushort)((byte)((uVar14 & 0xffffff00) >> 8) < 0x4d);
  sVar22 = sVar7 + uVar13;
  uVar36 = sVar22 + uVar12;
  uVar15 = uVar33 & 0xffff0000 | (uint)(ushort)((short)uVar37 >> 0xf);
  if (uVar36 != 0 && (SCARRY2(sVar7,uVar13) != SCARRY2(sVar22,uVar12)) == (short)uVar36 < 0) {
    uVar15 = uVar29 | (byte)((char)(bVar18 >> bVar18 | bVar18 << 8 - bVar18) >> 1);
  }
  bVar24 = (byte)((uVar29 >> 1) >> 8);
  sVar22 = (short)uVar15 + uVar32;
  uVar33 = CONCAT22(uVar11,(short)(char)uVar37) ^ 0x40000;
  bVar20 = bVar24 >> 1;
  bVar18 = bVar20 & 0x1f;
  uVar16 = iVar26 << bVar18 | (uint)(CONCAT14((uVar14 & 0x200) != 0,iVar26) >> 0x21 - bVar18);
  uVar29 = (uVar39 & 0xffff0000 | (uint)(ushort)((short)uVar15 << (bVar24 & 0x1f))) + 0xc09dc2f3;
  uVar12 = CONCAT11((char)((uint)uVar36 >> 8),((byte)uVar36 & 0x30) * -2) + 1;
  uVar17 = (ushort)((ushort)bVar20 | sVar22 * -0x8000) ^ uVar16;
  if (uVar17 == 0) {
    uVar17 = uVar29;
  }
  uVar30 = uVar33 << 1 | (uint)((short)(uVar11 ^ 4) < 0);
  iVar26 = (uint)(ushort)((int)uVar16 >> 0x19) << 0x10;
  bVar18 = (byte)(iVar26 >> 0x1d);
  bVar24 = (byte)((uint)uVar12 >> 8);
  bVar20 = bVar24 ^ (bVar18 == bVar24) * (bVar24 ^ (byte)uVar12);
  uVar16 = CONCAT31((int3)((uint3)((uint)iVar26 >> 8) |
                          (uint3)(byte)(((ushort)((int)uVar16 >> 9) & 0x3fff) %
                                       (ushort)(byte)((byte)uVar17 | 0xc0))) >> 0x1d,
                    bVar18 ^ (bVar18 != bVar24) * (bVar18 ^ bVar20));
  bVar18 = (byte)uVar17 & 0xf;
  uVar39 = uVar16 >> bVar18;
  uVar11 = (uVar12 & 0xff | (ushort)bVar20 << 8) << 1 |
           (ushort)(((uVar13 >> 0xc & 0x1fffe) << 0xf) >> 1) >> 0xf;
  uVar1 = (ulonglong)(uVar17 & 0xffffff0f | 0xc0000000);
  uVar2 = CONCAT44(-(uVar15 & 0xffff0000 | (uint)CONCAT11(1,(char)sVar22)),
                   uVar39 & 0xffff0000 | (uint)(ushort)(short)(char)uVar39) & 0x3fffffffffffffff;
  uVar3 = uVar2 % uVar1;
  sVar22 = (short)uVar30;
  uVar12 = sVar22 + 0x7e66;
  bVar40 = (uVar3 & 0xad48) != 0;
  uVar15 = (uint)(uVar2 / uVar1);
  if (bVar40) {
    uVar15 = uVar30;
  }
  uVar30 = uVar17 & 0xf;
  sVar21 = (sbyte)uVar30;
  uVar39 = 0x1f;
  if ((uint)uVar3 != 0) {
    for (; (uint)uVar3 >> uVar39 == 0; uVar39 = uVar39 - 1) {
    }
  }
  uVar11 = ((ushort)(CONCAT11((byte)((uVar11 >> bVar18) >> 8) |
                              (byte)((ushort)(uVar11 << 0x10 - bVar18) >> 8),bVar40) << bVar18) >>
            sVar21 | ((ushort)uVar29 >> bVar18 | (short)uVar16 << 0x10 - bVar18) << 0x10 - sVar21)
           << sVar21 | (ushort)uVar3 >> 0x10 - sVar21;
  uVar16 = uVar11 & 0xffffff00;
  uVar29 = (uint)(byte)((byte)uVar11 | (byte)uVar3);
  uVar17 = (uVar17 & 0xffffff00 | 0xc0000000 | uVar30) ^ 1 << (uVar29 & 0x1f);
  uVar34 = (uVar34 & 0xffff0000 | uVar16 | uVar29) + 0x3a334572;
  uVar11 = (ushort)((uVar17 & 1) != 0);
  sVar7 = (short)uVar39 + -0x705a;
  sVar38 = sVar7 - uVar11;
  uVar29 = uVar17 & 0xffff0000 | (uint)(byte)((byte)uVar17 >> 1 | 0x80);
  if (sVar38 == 0 || (SBORROW2((short)uVar39,0x705a) != SBORROW2(sVar7,uVar11)) != sVar38 < 0) {
    uVar29 = uVar34;
  }
  bVar18 = (byte)uVar29;
  uVar34 = uVar34 | 0xc0000000;
  uVar15 = (uint)((CONCAT44(CONCAT31(0x70180d,bVar18 ^ 0x4e),
                            uVar15 & 0xffff0000 |
                            (uint)(ushort)((ushort)(byte)uVar15 * (ushort)(byte)(uVar16 >> 8))) &
                  0x3fffffffffffffff) / (ulonglong)uVar34);
  sVar38 = sVar38 >> (bVar18 & 0x1f);
  uVar33 = (int)(uVar33 & 0x7fffffff | uVar30 << 0x1f) >> (bVar18 & 0x1f);
  if (uVar15 != uVar33) {
    uVar15 = uVar33;
  }
  uVar11 = (sVar38 - uVar12) - 1;
  lVar5 = (ulonglong)uVar15 * (ulonglong)(uVar29 & 0xffff0000 | (uint)uVar11);
  uVar32 = (short)uVar15 + 0xac64;
  uVar15 = (uint)lVar5 ^ 0x3169;
  uVar33 = uVar15 & 0xffff0000 |
           (uint)(ushort)((short)((ushort)uVar15 & 0xff00 | uVar12 & 0xff) >> 1);
  bVar18 = (char)uVar15 + 0xab;
  uVar12 = uVar12 & 0xff00 | (ushort)bVar18;
  uVar15 = (uint)((ulonglong)lVar5 >> 0x20);
  if ((char)bVar18 < '\0') {
    uVar15 = uVar33;
  }
  uVar36 = sVar38 << 1;
  uVar17 = uVar39 & 0xffff0000 | (uint)(uVar36 | 1);
  iVar26 = uVar33 - uVar17;
  uVar13 = (uVar32 - (short)((int)uVar34 >> 0x1f)) + 1;
  if (iVar26 == 0 || (SBORROW4(uVar33,uVar17) != false) != iVar26 < 0) {
    uVar13 = uVar12;
  }
  uVar11 = (uVar11 & 0xff00 | (ushort)((POPCOUNT(uVar13 & uVar32 & 0xff) & 1U) == 0) | 0x1662) *
           0x35b7;
  uVar12 = uVar12 << 1;
  bVar18 = (byte)((uint)uVar11 >> 8);
  uVar11 = (ushort)(uVar11 & 0xff | (ushort)(byte)(bVar18 >> 4 | bVar18 << 4) << 8) >> 7;
  uVar17 = ~CONCAT22(sVar22 >> 0xf,uVar12);
  bVar18 = (byte)(iVar26 >> 0x14);
  cVar10 = bVar18 + (char)((uint)uVar11 >> 8);
  uVar16 = uVar29 & 0xffff0000 | (uint)(ushort)(uVar11 & 0xff | (ushort)bVar18 << 8);
  uVar33 = CONCAT31((int3)(iVar26 >> 0x1c),cVar10);
  bVar40 = -1 < (char)(iVar26 >> 0x1c);
  bVar18 = ~(byte)(uVar16 + uVar15);
  uVar39 = uVar16 + uVar15 & 0xffffff00 | (uint)bVar18;
  uVar34 = ((uVar17 & 0x7fffff80) << 1) >> 6;
  uVar31 = uVar17 * -0x732ebb40 + (uVar12 & 0xff00 | (uint)bVar40) + 1;
  cVar10 = (char)uVar34 - cVar10;
  uVar29 = (uVar31 + uVar16) * 2;
  uVar30 = (uVar16 << (bVar18 & 0x1f) | uVar16 >> 0x20 - (bVar18 & 0x1f)) >> (bVar18 & 0x1f);
  uVar17 = uVar30;
  if (uVar33 != uVar39) {
    uVar33 = uVar39;
    uVar17 = uVar39;
  }
  uVar29 = (uVar29 & 0xffff0000 | (uint)(ushort)-((ushort)uVar29 | (ushort)CARRY4(uVar31,uVar16))) *
           0xe232240;
  uVar17 = uVar17 ^ 0x4684;
  uVar32 = ((short)uVar29 - (uVar12 & 0xff00 | (ushort)(byte)((bVar40 + 'F') - (cVar10 < '\0')))) -
           1;
  uVar11 = (ushort)uVar17 >> 4;
  bVar24 = ~(byte)((uint)uVar12 >> 8);
  uVar36 = (ushort)(byte)((char)uVar33 << 1 | (uVar36 & 0x1000) != 0) * (ushort)(byte)(uVar33 >> 8)
           & 0xff;
  uVar12 = uVar11 & 0xff;
  uVar29 = (uVar29 & 0xffff0000 | (uint)uVar32) * -0x80;
  uVar16 = (int)((CONCAT44((int)(uVar34 & 0xffffff00 | (uint)CARRY4(uVar16,uVar15) << 0x1a |
                                (uint)(byte)(cVar10 * '\x02')) >> ((byte)uVar17 & 0x1f),
                           uVar33 & 0xffff0000 |
                           (uint)(ushort)(uVar36 | (ushort)(byte)((uint)(ushort)(uVar11 | uVar32 * 
                                                  0x1000) >> 8) << 8)) & 0x3fffffffffffffff) /
                (ulonglong)(uVar30 | 0xc0000000)) * (uVar17 & 0xffff0000 | (uint)uVar12);
  bVar20 = (byte)uVar12;
  bVar20 = bVar20 << (bVar20 & 0x1f);
  uVar39 = (uVar30 & 0xffff0000 | 0xc0000000 | uVar30 & 0xffff) ^ 0xbd71;
  bVar18 = (bVar20 & 0x1f) % 9;
  uVar15 = (uint)(byte)(bVar24 >> bVar18 | bVar24 << 9 - bVar18) << 8 | 0xc000;
  uVar14 = (ushort)uVar16 & 0x3fff;
  uVar12 = (ushort)(byte)(uVar15 >> 8);
  uVar11 = uVar14 % uVar12;
  uVar13 = uVar11 << 8;
  uVar32 = (ushort)uVar15 >> 0xf;
  uVar37 = uVar32 | uVar36 << 1;
  bVar18 = (byte)(uVar14 / uVar12) >> (bVar20 & 0x1f);
  uVar36 = uVar36 | 1 << (uVar32 | uVar36 << 1 & 0xf);
  uVar30 = (uVar29 >> 1 & 0xffff0000 | uVar29 >> 2 & 0x7fff) >> (bVar18 & 0x1f);
  uVar15 = (uint)(ushort)(uVar13 | bVar18 | 0xc000);
  uVar29 = (uint)uVar11 << 0x10 | (uint)uVar13 | (uint)(byte)(bVar18 << 4 | bVar18 >> 4);
  uVar34 = uVar29 % uVar15;
  bVar20 = (byte)uVar34;
  bVar18 = bVar20 & 0x1f;
  uVar33 = (uint)uVar37 << 0x20 - bVar18;
  uVar32 = uVar37 >> bVar18 | (ushort)uVar33;
  uVar17 = (uint)((ushort)uVar30 & (ushort)uVar39 & uVar36);
  uVar11 = (short)(uVar29 / uVar15) + (ushort)(bVar20 >> 1) + 1;
  bVar18 = (char)uVar11 + 1;
  uVar13 = -uVar32;
  uVar12 = CONCAT11((char)(uVar34 >> 8) + '.',(char)bVar18 < '\0');
  if (uVar32 == 0 && uVar13 != 0) {
    uVar12 = uVar13;
  }
  uVar29 = uVar16 & 0xffff0000 | (uint)uVar12;
  uVar15 = uVar29 + 0xbae8caed;
  uVar8 = CONCAT14(0x45173512 < uVar29,uVar30 & 0xffff0000 | uVar17) >> 2;
  uVar32 = (ushort)uVar15 ^ 0xc5;
  uVar29 = (uVar33 & 0xffff0000 | (uint)uVar13) + 0xb5056cc1;
  sVar22 = (short)uVar8;
  uVar12 = (ushort)(uVar32 == 0) * sVar22;
  uVar33 = uVar15 & 0xffff0000 | (uint)(ushort)(uVar32 ^ (ushort)(uVar32 != 0) * (uVar32 ^ uVar12));
  uVar15 = uVar29 & 0xffffff00;
  uVar34 = uVar15 | (byte)((char)uVar29 + 0xa8);
  uVar29 = uVar33;
  if (uVar33 != uVar39) {
    uVar29 = uVar39;
    uVar34 = uVar39;
  }
  uVar15 = uVar15 | (int)uVar33 < (int)uVar39;
  bVar18 = bVar18 & 0x1f;
  uVar16 = (uint)(CONCAT14(uVar33 < uVar39,uVar29) >> bVar18) | uVar29 << 0x21 - bVar18;
  uVar1 = (ulonglong)(uVar34 < 0x2f5d476b) << 0x20 | (ulonglong)uVar36;
  uVar39 = uVar15 * 0x91791be;
  bVar18 = (byte)uVar39 & 0x1f;
  uVar29 = (uint)uVar8 & 0xffff0000 | uVar17 << 0x1f;
  uVar30 = uVar29 | (ushort)(sVar22 + 0x527a);
  bVar20 = (byte)uVar16 >> ((byte)uVar39 & 0x1f);
  uVar12 = (uVar12 & 0xff00 | (ushort)(byte)((char)uVar12 << 1 | (char)uVar12 < '\0')) + 0xa343;
  uVar17 = (uVar11 & 0xff) << 0x16 | (uint)uVar12;
  uVar33 = uVar15 | 0xec85aedd;
  if ((POPCOUNT(uVar12 & 0xff) & 1U) == 0) {
    uVar33 = ((uint)(uVar1 << 0x15) | (uint)(uVar1 >> 0xc)) << bVar18 | uVar15 >> 0x20 - bVar18;
  }
  uVar15 = (uVar34 + 0xd0a2b895 & 0xffff0000 |
           (uint)(ushort)(((ushort)(uVar34 + 0xd0a2b895) >> 1 | 0x8000) ^ 0x800)) << 7;
  uVar34 = uVar16 & 0xffff0000 | (uint)(ushort)(short)(char)bVar20;
  if (SCARRY4(uVar34,uVar17) != (int)(uVar34 + uVar17) < 0) {
    uVar33 = uVar30;
  }
  uVar34 = (uint)CARRY4(uVar34,uVar17) << 0x10 | uVar34 + uVar17 & 0xffff;
  uVar12 = (ushort)(uVar34 << 6);
  uVar11 = uVar12 | (ushort)(uVar34 >> 0xb);
  bVar18 = (byte)uVar11 ^ (byte)((uint)uVar11 >> 8);
  uVar34 = (uint)(ushort)(uVar12 & 0xff00 | (ushort)bVar18);
  if (-1 < (char)bVar18) {
    uVar34 = uVar33;
  }
  if ((POPCOUNT(bVar18) & 1U) != 0) {
    uVar30 = uVar29 | uVar39 & 0xff;
  }
  bVar24 = (byte)(uVar33 >> 8) | 0xc0;
  uVar11 = (ushort)uVar34 & 0x3fff;
  uVar12 = uVar11 % (ushort)bVar24;
  uVar11 = uVar11 / bVar24 & 0xff;
  uVar32 = uVar11 | uVar12 << 8;
  uVar29 = (uint)(ushort)(((ushort)uVar30 >> 1) * 0x319a);
  uVar17 = (uVar39 & 0xffff00ff) + (uVar15 & 0xffff0000) + (uint)((uVar33 & 1) != 0);
  bVar18 = (byte)((uint)(ushort)((short)(char)bVar20 ^ uVar32) >> 8);
  uVar8 = CONCAT14(CARRY1(bVar18,bVar18) || 0xfe < (byte)(bVar18 * '\x02'),
                   uVar33 & 0xffff0000 | (uint)(ushort)(CONCAT11(bVar24 << 1,(char)uVar33) | 1)) |
          0x100;
  uVar9 = uVar8 >> 7;
  uVar36 = (short)uVar9 + 0xc2e5;
  bVar18 = (byte)uVar17 & 0x1f;
  bVar24 = (byte)uVar36;
  uVar34 = (uint)(uint3)(int3)(char)uVar12 << 8;
  uVar33 = (int)uVar8 << 0x1a | (uint)uVar9 & 0xffff0000 | uVar36 & 0xffffff00 |
           (uint)(byte)(bVar24 + (char)uVar11);
  uVar39 = ((uint)((ushort)((char)bVar20 * 2) >> bVar18) |
           (uVar30 & 0xffff0000 | uVar29) << 0x20 - bVar18) ^ 0x9150f858;
  uVar16 = uVar33 << 1 | (uint)((int)uVar33 < 0);
  return (uVar34 & 0xffff0000 | (uint)(ushort)(short)(char)(~bVar24 & 0xdd)) + uVar16 +
         (((int)(short)uVar32 >> 0x1f) << 0x12 | uVar34 >> 0xf & 1) +
         (uVar17 & 0xbda1e200 | (uint)((int)uVar33 < 0 == (int)uVar16 < 0)) +
         (uVar15 & 0xffff0000 | 0x8000000) +
         ((uVar39 & 0xffff0000 | (uint)(ushort)((short)uVar39 + 0xd831)) >> 1) +
         ((uVar29 << 0x1d) >> 9 | 0x800000) + -0x6c89ade5;
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
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte bVar8;
  int iVar6;
  char cVar9;
  byte bVar10;
  uint uVar7;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  ushort uVar18;
  int iVar19;
  uint uVar20;
  ushort uVar21;
  uint uVar22;
  bool bVar23;
  
  for (iVar6 = 0x1f; 0xc9aeff00U >> iVar6 == 0; iVar6 = iVar6 + -1) {
  }
  for (iVar6 = 0x1f; 0x380233afU >> iVar6 == 0; iVar6 = iVar6 + -1) {
  }
  for (uVar2 = 0; (0x38020000U >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
  }
  uVar18 = (short)uVar2 + 0x65b6;
  uVar21 = uVar18 & 0xff00 | (ushort)(byte)((char)uVar18 + 6);
  uVar1 = uVar21 + 0x8ae4;
  bVar11 = (byte)uVar1;
  bVar12 = (bVar11 & 0x1f) % 0x11;
  uVar7 = (uint)(0x751b < uVar21) << 0x10;
  uVar21 = (ushort)((ulonglong)
                    CONCAT24((ushort)(byte)((byte)((uint)uVar18 >> 8) ^ 0x94) << 8,
                             (uint)(ushort)(CONCAT11((SCARRY2((short)uVar2,0x65b6) !=
                                                     SCARRY2(uVar18,0)) == (short)uVar18 < 0,0xdb)
                                           >> 1)) / (ulonglong)(uVar2 & 0xffff0000 | 0xc0000000));
  bVar8 = bVar11 >> 5 | bVar11 << 3 & 0xf;
  uVar18 = 0U >> bVar8 | -0x25f1 << 0x10 - bVar8;
  uVar20 = uVar18 | 0x38020000;
  uVar22 = (uVar2 & 0xffff0000 | 0xc0000000 |
           (uint)(ushort)((ushort)(uVar7 << bVar12) | (ushort)(uVar7 >> 0x11 - bVar12))) + 1;
  uVar7 = uVar2 & 0xffff0000 |
          (uint)(CONCAT11(~(byte)((uint)uVar1 >> 8),bVar11 >> 5 | bVar11 << 3) & 0xff0f);
  uVar2 = (uint)(ushort)(uVar21 << 5 | uVar21 >> 0xb) << 0x1a | (uVar2 & 0xffc00000) >> 6;
  uVar14 = uVar7 << bVar8 | uVar7 >> 0x20 - bVar8;
  uVar1 = ((ushort)uVar14 | 0x400) + 0x41e0;
  lVar5 = (longlong)
          (int)(uVar2 | (ushort)((short)(uVar7 >> 6) *
                                ((POPCOUNT(uVar22 & 0xff) & 1U) != 0 | 0xc400))) *
          (longlong)(int)(uVar1 | 0x5b0000);
  uVar17 = (uint)lVar5 | 0xd400;
  uVar18 = uVar18 & 0xf;
  uVar21 = uVar1 & ~(1 << uVar18);
  bVar23 = (uVar1 >> uVar18 & 1) != 0;
  uVar7 = uVar17 >> 1 | (uint)bVar23 << 0x1f;
  if ((int)uVar17 < 0 != bVar23) {
    uVar7 = uVar22 ^ 0x164da44d | 0x10000000;
  }
  bVar12 = (byte)((ulonglong)lVar5 >> 0x3d) - 0x1f;
  if (uVar7 != uVar20) {
    uVar7 = uVar20;
  }
  iVar6 = (int)uVar7 >> (bVar12 & 0x1f);
  bVar8 = (byte)((uint)iVar6 >> 8) >> (bVar12 & 0x1f);
  iVar19 = uVar20 * -2;
  bVar15 = '\0' << (bVar12 & 7) | 0U >> 8 - (bVar12 & 7);
  cVar9 = bVar8 + 1;
  bVar13 = (byte)uVar21;
  bVar11 = (bVar13 & 0x1f) % 0x11;
  uVar7 = (uint)(((byte)iVar6 >> 4 & 1) != 0) << 0x10 | 0xe005;
  bVar10 = (byte)((uint)(ushort)((short)iVar19 * -0x59a9) >> 8);
  bVar16 = bVar15 + bVar10;
  uVar7 = ((uint3)((uint3)(((uint)(ushort)((short)cVar9 >> 7) << 0x10) >> 9) |
                  (uint3)((uint)(CONCAT22(0xe05b,(ushort)(uVar7 << bVar11) |
                                                 (ushort)(uVar7 >> 0x11 - bVar11)) << 0x1f) >> 8)) &
          0xffff00) << 8 |
          (uint)CONCAT11(!CARRY1(bVar15,bVar10),CARRY1(bVar15,bVar10) || bVar16 == 0);
  if (bVar16 != 0 && SCARRY1(bVar15,bVar10) == (char)bVar16 < '\0') {
    uVar7 = iVar19 + 0xaf430df0U;
  }
  uVar17 = -((uVar2 | (ushort)((ushort)(bVar16 >> (bVar13 & 0xf)) |
                              (ushort)bVar16 << 0x10 - (bVar13 & 0xf))) ^ 0x38020000);
  uVar20 = iVar19 + 0xaf430df0U ^ 1 << (uVar17 & 0x1f) | 0xc0000000;
  uVar4 = (ulonglong)
          CONCAT24((short)((ushort)((short)(char)bVar8 >> 7) >> 1) >> (bVar13 & 0x1f),uVar7);
  uVar3 = uVar4 / uVar20;
  uVar4 = uVar4 % (ulonglong)uVar20;
  return (int)uVar3 + (uVar17 & 0xffff0000 | (uint)(ushort)((ushort)uVar17 ^ 1 << (uVar21 & 0xf))) +
         (uVar14 & 0xffff0000 | (uint)uVar21) +
         CONCAT22((short)(uVar4 >> 0x10),(short)uVar4 << 0xe | (ushort)uVar3 >> 2) + uVar20 +
         ((ushort)(CONCAT11((POPCOUNT(cVar9) & 1U) != 0,bVar12) * 0x30e6 | uVar21 >> 0xf) | 0x5b0000
         ) + iVar19 + ((uint)(ushort)((ushort)(uVar2 >> 0x10) ^ 0x3802) << 0x10 | (uint)bVar15) * 4
         + 0x2689194c;
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
  char cVar6;
  int iVar5;
  byte bVar7;
  sbyte sVar8;
  byte bVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  uint uVar13;
  char cVar16;
  uint uVar14;
  uint uVar15;
  short sVar17;
  uint uVar18;
  int3 iVar20;
  int iVar19;
  byte bVar21;
  byte bVar22;
  uint uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  short sVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  ushort uVar33;
  byte bVar34;
  bool bVar35;
  bool bVar36;
  
  for (uVar13 = 0; (0xb4a0abeeU >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
  }
  for (uVar18 = 0; (0x5287c41aU >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
  }
  uVar28 = (uVar18 >> 0x15 | 0xa7c7fd0b) + 1;
  uVar18 = 1 << (uVar28 & 0x1f) ^ 0x6698e9ae;
  uVar1 = ((ulonglong)(uVar18 >> 5 | uVar18 << 0x1b) & 0x3fffffff) << 0x20 | 0xffff0000;
  uVar2 = uVar1 / 0xffff0000;
  uVar1 = uVar1 % 0xffff0000;
  uVar31 = CONCAT31((int3)(uVar2 >> 8),(char)uVar2 << 2 | (byte)(CONCAT11(1,(char)uVar2) >> 7));
  uVar18 = 0x418b848;
  bVar7 = (byte)uVar1;
  bVar22 = bVar7 + 0x54;
  iVar20 = (int3)(uVar1 >> 8);
  uVar14 = CONCAT31(iVar20,bVar22);
  if ((char)bVar22 < '\0') {
    uVar18 = uVar14 & 0xffff | 0x4180000;
  }
  uVar10 = CONCAT11(bVar7 - 0xb,bVar7);
  if ((byte)(bVar7 - 0xb) != '\0') {
    uVar31 = uVar14 & 0xffff | (uint)(ushort)(uVar2 >> 0x10) << 0x10;
  }
  uVar28 = (uVar28 & 0xffff0000 | 0x9c5a) << 1;
  uVar24 = (ushort)uVar28 | (ushort)(0x5e < bVar22);
  uVar11 = (ushort)uVar31;
  bVar22 = (byte)((ushort)(uVar11 ^ (ushort)(uVar11 != uVar10) * (uVar11 ^ uVar10)) >> 1);
  uVar31 = (uVar31 & 0xfffe0000) >> 1 | uVar18 << 0x1f;
  bVar7 = bVar7 >> (bVar7 & 7) | bVar7 << 8 - (bVar7 & 7);
  uVar29 = ((uVar13 ^ 0x8000) & 0x47e60000 |
           (uint)(ushort)(((ushort)(uVar13 ^ 0x8000) & 0x9763) - 1)) +
           (uVar31 | (ushort)(short)(char)bVar22) + (uint)(iVar20 < 0);
  uVar13 = (uVar14 & 0x7fffff80) << 1;
  uVar11 = (ushort)(iVar20 < 0);
  uVar12 = uVar24 + 0x465;
  uVar25 = uVar12 - uVar11;
  if ((SBORROW2(uVar24,-0x465) != SBORROW2(uVar12,uVar11)) == (short)uVar25 < 0) {
    uVar29 = uVar29 & 0xffff0000 | uVar18 & 0xffff;
  }
  if (uVar24 < 0xfb9b || uVar12 < uVar11) {
    uVar18 = uVar18 & 0xffff0000;
  }
  bVar21 = (bVar7 & 0x1f) % 0x11;
  uVar14 = uVar10 & 0xff00 | (uint)bVar7;
  uVar10 = (ushort)(uVar14 << bVar21) | (ushort)(uVar14 >> 0x11 - bVar21);
  uVar11 = uVar10 + 0x5c35;
  if (uVar11 != 0 && -0x5c36 < (short)uVar10) {
    uVar29 = uVar28 & 0xffff0000 | (uint)uVar25;
  }
  uVar14 = (uint)(ushort)(uVar11 & 0xff00 | (ushort)(0xa3ca < uVar10 && uVar11 != 0));
  uVar11 = (ushort)(uVar13 >> 0x10);
  uVar24 = (uVar25 & 0x101e | uVar11) + 0xe737;
  uVar12 = (short)(char)bVar22 & 0xd200;
  if ((short)(uVar12 | (byte)~(bVar22 & 0xbf)) < 0) {
    uVar14 = uVar29 & 0xffff;
  }
  uVar28 = (uint)CONCAT11((char)(uVar12 >> 8) + -0x45,~(bVar22 & 0xbf));
  bVar22 = (byte)(uVar14 << 1);
  cVar16 = (char)(uVar13 >> 0x10);
  uVar11 = (uVar11 & 0xff00 | (ushort)(byte)(cVar16 + 0x1a)) + 0x5986 & ~(1 << (uVar24 & 0xf));
  uVar32 = uVar13 >> 0x10 & 0xffffff00 | (uint)uVar10 << 0x10 | (uint)(byte)(cVar16 + 1);
  uVar13 = ((uVar14 & 0x7fff8000 | 0x3a7c0000) << 1 |
           (uint)CONCAT11((byte)((uVar14 << 1) >> 8) >> (bVar22 & 0x1f),bVar22)) + 0x8f416666;
  uVar14 = uVar32 - (uVar31 | uVar28);
  if ((SBORROW4(uVar32,uVar31 | uVar28) != false) != (int)uVar14 < 0) {
    uVar14 = uVar28;
  }
  uVar32 = (uVar31 | uVar28 & 0xffffff00 | (uVar28 & 0xfe) >> 1) ^ 0xad17;
  bVar22 = (byte)uVar13 & 0x1f;
  uVar30 = ((uVar29 ^ 0xe150a974) & 0xffff0000 | (uint)(ushort)((ushort)(uVar29 ^ 0xe150a974) | 2))
           >> bVar22 | uVar32 << 0x20 - bVar22;
  uVar10 = uVar11 & 0xe0ff | 0xc000;
  uVar28 = uVar11 & 0xe0ff | 0xc000;
  uVar14 = (uint)((ushort)uVar14 & 0x3fff) << 0x10 | uVar32 & 0xffff;
  uVar29 = uVar14 / uVar28;
  uVar24 = (ushort)(((uVar24 & 0xff00) << 8) >> 0x10) | (ushort)(((uint)uVar24 << 0x18) >> 0x10);
  uVar12 = (short)uVar13 + 1;
  uVar10 = (ushort)(((uVar10 << 1 | uVar10 >> 0xf) + 0x79b8) - (ushort)((short)uVar10 < 0)) >> 1;
  bVar22 = (byte)((uint)uVar12 >> 8);
  uVar11 = (uVar10 | 0x8000) >> 7;
  uVar32 = (uint)(ushort)(uVar10 << 9 | uVar11);
  uVar10 = (ushort)(uVar14 % uVar28) >> 1;
  uVar13 = ((uVar13 & 0xffff0000 |
            (uint)(ushort)(uVar12 & 0xff | (ushort)(byte)(bVar22 >> 7 | bVar22 << 1) << 8)) ^
           1 << (uVar29 & 0x1f)) + (uVar18 & 0xffff0000 | uVar32) + 1;
  uVar14 = uVar13 | 0xc0;
  uVar12 = (ushort)uVar29 & 0x3fff;
  bVar22 = (byte)uVar14;
  bVar7 = (byte)uVar11 & (byte)uVar10;
  if (-1 < (char)bVar7) {
    uVar14 = uVar13 & 0xffff0000 |
             (uint)(ushort)((uVar12 / bVar22 & 0xff | uVar12 % (ushort)bVar22 << 8) <<
                           (bVar22 & 0x1f));
  }
  cVar16 = (char)(uVar14 >> 8) + -0x38;
  uVar13 = (uVar18 & 0xffff0000 | uVar32 & 0xffffff00 | (uint)bVar7) + 0x8893ac09;
  uVar25 = CONCAT11((char)(uVar13 >> 8) + -0x14,(char)uVar13) ^ (ushort)uVar30;
  uVar12 = (short)((ushort)(uVar31 >> 0x10) | 0x20) >> 1;
  uVar31 = (uVar30 & 0xffff0000 |
           (uint)(((uVar10 & 0xff) << 0xd |
                  (ushort)((uVar10 & 0xff |
                           (ushort)(byte)((uint)(ushort)(uVar10 | uVar11 << 0xf) >> 8) << 8) ^
                          0x8d00) >> 3) + (short)cVar16 & 0xff00)) + 1;
  iVar19 = (int)(short)uVar12 >> 0xf;
  cVar6 = (char)((uint)iVar19 >> 8);
  uVar18 = CONCAT22(uVar24,(short)cVar6);
  uVar10 = uVar25 + 0x4852 + (ushort)(0x123c < uVar25);
  uVar13 = uVar13 & 0xffff0000 | (uint)uVar10;
  if (uVar10 != 0 &&
      (SCARRY2(uVar25 + 0xedc3,0x5a8f) != SCARRY2(uVar25 + 0x4852,(ushort)(0x123c < uVar25))) ==
      (short)uVar10 < 0) {
    uVar13 = uVar18;
  }
  uVar11 = CONCAT11(cVar16,(char)uVar14 << 1 | (char)uVar14 < '\0') << 1 | 1;
  uVar10 = (ushort)(((uint)uVar12 << 0x11) >> 0xe);
  uVar12 = (ushort)uVar31;
  if ((short)uVar12 < 0) {
    uVar18 = iVar19 + 0xd1da00f5U & 0xff | (uint)uVar24 << 0x10;
  }
  if (POPCOUNT(uVar12 & 0x89) != '\0') {
    uVar11 = SEXT12((char)((uint)uVar11 >> 8));
  }
  bVar21 = (char)-((byte)(((ushort)((uVar13 & 0xffffff00 | uVar13 >> 1 & 0x7f) >> 2) & 0x7f) << 1) |
                  (byte)(cVar6 >> 7) >> 7) >> 1;
  bVar22 = (byte)(uVar11 >> 8);
  bVar7 = bVar22 - bVar21;
  uVar31 = uVar31 & 0xffffc489;
  if (bVar21 <= bVar22 && bVar7 != 0) {
    uVar31 = uVar14 & 0xffff0000 | (uint)(ushort)(uVar11 & 0xff | (ushort)bVar7 << 8);
  }
  uVar12 = uVar10 & (ushort)uVar31;
  uVar28 = (int)(short)uVar10;
  if ((POPCOUNT(uVar12 & 0xff) & 1U) != 0) {
    uVar28 = uVar18;
  }
  uVar32 = uVar31 & 0xffff0000 | (uint)(ushort)((short)(ushort)uVar31 >> 0x19);
  uVar31 = uVar32 << 0xc;
  iVar5 = (short)(CONCAT11((char)(uVar28 >> 8),uVar12 != 0) ^ 0x556b) * -0x3b10;
  uVar28 = (uint)(CONCAT14((short)(ushort)iVar5 != iVar5,uVar18) >> 5);
  uVar29 = uVar18 << 0x1c | uVar28 & 0xffff0000;
  uVar31 = uVar31 & 0xffff0000 | (uint)(ushort)((ushort)((ushort)uVar31 | 0xffe) >> 1 | 0x8000);
  iVar19 = 0;
  if (uVar31 != 0) {
    for (; (uVar31 >> iVar19 & 1) == 0; iVar19 = iVar19 + 1) {
    }
  }
  uVar31 = uVar32 + 0xfe +
           (uVar14 & 0xffff0000 |
           (uint)(ushort)(uVar11 & 0xff | (ushort)(uVar12 != 0) << 8 | (ushort)uVar18)) * 4;
  uVar11 = (ushort)iVar5 >> 0xc;
  bVar22 = (byte)((uVar29 | (ushort)((short)((uVar28 & 0xfffe) >> 1) + 0xd3ba)) >> 0xe);
  uVar10 = (byte)(bVar22 ^ (bVar22 == 1) *
                           (bVar22 ^ ((char)iVar19 + '\x01') - ((byte)((uint)iVar5 >> 8) >> 4))) &
           0xff0f;
  sVar8 = (sbyte)uVar10;
  uVar12 = (ushort)((ushort)((uVar18 << 0x1c | uVar28 & 0xffc00000) >> 0xe) | uVar10) >> sVar8 |
           (uVar11 | 0x100) << 0x10 - sVar8;
  uVar24 = ~(ushort)uVar31;
  uVar10 = (uVar11 | uVar12 << 8) + 0xb8e7;
  bVar22 = (byte)((uint)uVar24 >> 8);
  uVar11 = CONCAT11(bVar22 >> 7 | bVar22 << 1,(char)uVar24 + 'C');
  uVar18 = (uint)uVar11 * -0x5361fdab;
  uVar11 = (short)uVar11 >> ((byte)uVar18 & 0x1f);
  iVar19 = (uint)(ushort)(uVar10 & 0xff |
                         (ushort)(byte)((char)(uVar10 >> 8) << ((byte)uVar12 & 0x1f)) << 8) << 5;
  uVar10 = CONCAT11((char)((uint)iVar19 >> 8) + '\x01',(byte)(uVar13 >> 0x1c) | (byte)iVar19);
  uVar32 = (uVar31 & 0xffff0000 | (uint)(uVar24 & 0xfdff)) ^ 1 << (uVar10 & 0x1f);
  uVar31 = (uint)(ushort)((uVar11 & 0xff | (ushort)((uVar11 & 0x100) != 0) << 8) << 1);
  uVar13 = ~(1 << (uVar31 & 0x1f));
  uVar28 = (uVar29 >> 1 | 0x80000000) >> 0x11 | uVar32 << 0xf;
  uVar14 = (uVar18 & 0xffff0000 |
           (uint)(ushort)((ushort)uVar18 & 0xff | (ushort)(byte)(uVar31 >> 8) << 8)) ^
           1 << (uVar32 & 0x1f);
  uVar31 = (uint)uVar10 * (uint)uVar10 >> 0x10;
  uVar32 = uVar32 ^ 0x80;
  iVar19 = uVar31 - uVar28;
  uVar18 = uVar28;
  if (iVar19 != 0 && (SBORROW4(uVar31,uVar28) != false) == iVar19 < 0) {
    uVar18 = uVar32;
  }
  bVar22 = (byte)uVar14 & 0x1f;
  uVar30 = (uVar32 & 0xff00 | (uint)(byte)((byte)uVar32 >> 1 | (byte)uVar32 << 7)) << bVar22 |
           (uVar18 & 0xffff) >> 0x20 - bVar22;
  bVar7 = (byte)uVar30;
  uVar31 = (uVar14 & 0xffffff00 | uVar30 >> 8 & 0xff) >> 1 & 0x7fff;
  bVar21 = (byte)uVar31;
  uVar4 = CONCAT14((uVar30 >> 8 & 1) != 0,uVar18) & 0xff0000ffff;
  uVar23 = (int)uVar4 << (bVar21 & 0x1f) | (uint)(uVar4 >> 0x21 - (bVar21 & 0x1f));
  uVar11 = (ushort)uVar31;
  bVar22 = (bVar21 & 0x1f) % 0x11;
  uVar18 = (uint)(uVar11 < 0xbb79) << 0x10 |
           (ushort)(short)(char)bVar7 & 0xff00 |
           (uint)(byte)(bVar7 << (bVar21 & 7) | bVar7 >> 8 - (bVar21 & 7));
  uVar10 = (ushort)(uVar18 << bVar22) | (ushort)(uVar18 >> 0x11 - bVar22);
  bVar22 = (byte)uVar10 & 0x6a;
  uVar18 = (uVar10 & 0xffff4600 | (uint)(byte)(bVar22 << 5 | bVar22 >> 3)) ^ 0xd6f5;
  uVar10 = (ushort)uVar28 >> 1;
  uVar29 = (uVar23 & 0xffffff00 |
           (uint)(byte)((byte)uVar23 << (bVar21 & 7) | (byte)uVar23 >> 8 - (bVar21 & 7))) >> 1 &
           0x7fff;
  bVar9 = (byte)uVar10;
  uVar11 = uVar11 ^ 1 << (uVar11 & 0xf);
  cVar16 = (char)((uint)(ushort)(uVar11 << 3) >> 8);
  uVar18 = (uVar30 & 0xffff0000 |
           (uint)(ushort)(CONCAT11((byte)(uVar18 >> 8) >> (bVar21 & 0x1f),
                                   (char)uVar18 + (char)uVar29) + uVar11)) << 3;
  uVar31 = (uVar14 & 0xffff0000 |
           (uint)(ushort)(uVar11 << 3 & 0xff | uVar11 >> 0xd |
                         (ushort)(byte)(cVar16 << 1 | cVar16 < '\0') << 8)) >> 1;
  bVar22 = ((byte)uVar31 & 0x1f) % 0x11;
  uVar31 = uVar31 & 0xffff;
  uVar32 = uVar13 & 0xe58f0000 | (uint)(ushort)(((ushort)uVar13 & 0xa5da) + 0xb7a1 | 0x2000);
  uVar31 = ((uVar14 & 0xfffe0000) >> 1 | (uVar30 >> 0x1d) << 0x1f |
           (uint)(ushort)((ushort)(uVar31 << bVar22) | (ushort)(uVar31 >> 0x11 - bVar22))) &
           ~(1 << ((ushort)uVar28 != 0xd685));
  bVar22 = (byte)(uVar18 >> 8);
  bVar34 = bVar22 & 1;
  uVar18 = uVar18 & 0xffff0000 |
           (uint)CONCAT11(bVar22 >> 1 | bVar34 << 7,
                          (byte)((uVar30 & 0xffff0000) >> 0x1d) | (byte)uVar18);
  sVar17 = (~(ushort)iVar19 << 0xf | uVar10 & 0xff00 |
           (ushort)(byte)(bVar9 << (bVar21 & 7) | bVar9 >> 8 - (bVar21 & 7))) + 0x652d +
           (ushort)bVar34;
  uVar13 = 0x1f;
  if (uVar32 != 0) {
    for (; uVar32 >> uVar13 == 0; uVar13 = uVar13 - 1) {
    }
  }
  uVar10 = (ushort)((uint)((int)(int3)((uint3)(uVar23 >> 8) & 0xffff00 | (uint3)(uVar29 >> 8)) >>
                          0x14) >> 0xe) ^ 0x4ba6;
  if ((POPCOUNT(uVar10 & 0xff) & 1U) != 0) {
    uVar10 = (ushort)uVar13;
  }
  bVar21 = (byte)uVar31;
  lVar3 = (longlong)(int)uVar18 * (longlong)(int)uVar18;
  uVar12 = (ushort)uVar13 >> 1 | 0x8000;
  uVar29 = uVar13 & 0xffff0000 | (uint)uVar12;
  bVar34 = (byte)(uVar10 << 1) | (short)uVar10 < 0 | 0xc0;
  uVar11 = (ushort)lVar3 & 0x3fff;
  uVar13 = (uint)lVar3 & 0xffff0000;
  bVar22 = (byte)((uint)(ushort)(uVar11 % (ushort)bVar34 << 8) >> 8);
  uVar10 = uVar10 << 1 & 0xff00 | (ushort)(byte)(bVar34 - 1);
  bVar9 = (byte)(uVar12 >> 7);
  uVar31 = uVar31 & 0xffff0000 |
           (uint)(ushort)((short)((ushort)(byte)(bVar21 << (bVar21 & 7) | bVar21 >> 8 - (bVar21 & 7)
                                                ) << 9 | uVar12 >> 7) >> (bVar9 & 0x1f));
  uVar18 = uVar13 | (uint)(byte)(bVar22 << 5 | bVar22 >> 3) << 8 |
           (uint)(byte)((char)(uVar11 / bVar34) >> 0x1a);
  uVar28 = CONCAT22((short)((ulonglong)lVar3 >> 0x30),
                    CONCAT11(((char)bVar22 >> 0xf) + bVar9,(char)bVar22 >> 7) + -0x52b) + 0xc9634845
  ;
  iVar19 = uVar31 - uVar32;
  uVar14 = iVar19 - 1;
  if (uVar14 == 0 || (SBORROW4(uVar31,uVar32) != SBORROW4(iVar19,1)) != (int)uVar14 < 0) {
    uVar18 = uVar13 | uVar10;
  }
  uVar12 = ((ushort)uVar14 | 0x100) + uVar12;
  uVar31 = (uVar18 & 0xffffff00 |
           (uint)(byte)((char)uVar18 << 2 | (byte)(CONCAT11(sVar17 < 0,(char)uVar18) >> 7))) ^ 0x55;
  uVar13 = uVar29 + 0xe6cf720a;
  if (uVar13 != 0 && (SBORROW4(uVar29,0x19308df6) != false) == (int)uVar13 < 0) {
    uVar13 = uVar13 & 0xffff0000 | uVar31 & 0xffff;
  }
  uVar11 = (ushort)uVar28;
  bVar35 = (uVar31 >> (uVar28 & 0x1f) & 1) != 0;
  uVar29 = uVar31 & ~(1 << (uVar28 & 0x1f));
  if (!bVar35 && (char)uVar31 != -0x58) {
    uVar32 = uVar13 & 0xffff;
  }
  uVar24 = (ushort)uVar29 & 0xff00 |
           (ushort)(byte)((byte)(CONCAT11(bVar35,(char)uVar29) >> 6) | (char)uVar29 << 3);
  uVar31 = (uint)(ushort)((uVar10 << 1) << ((byte)uVar12 & 0x1f));
  bVar35 = (POPCOUNT((uVar31 & 0x7f) << 1 | uVar28 >> 0x1f) & 1U) == 0;
  uVar31 = ((uVar28 & 0xffff0000 | uVar31) & 0x7fffff80) << 1;
  lVar3 = (longlong)(int)(uVar13 * 0x5c1c5036) *
          (longlong)
          (int)(uVar31 | (byte)(bVar35 + 'b' +
                               (uVar11 < (ushort)((uVar24 + (short)uVar32) -
                                                 ((ushort)uVar31 | (ushort)bVar35)))));
  uVar10 = (short)uVar13 + 1U | 1 << (uVar11 & 0xf);
  uVar25 = (ushort)((ulonglong)lVar3 >> 0x20) & 0x91a6;
  uVar14 = (uVar14 & 0xffff0000 | uVar12 & 0xffffff00) << 0xb;
  uVar12 = uVar11 << 3;
  uVar13 = (uVar13 & 0xffff0000 | (uint)uVar10) >> 1;
  uVar28 = uVar13 | (uint)((uVar10 & 1) != 0) << 0x1f;
  uVar26 = (ushort)uVar13;
  uVar33 = uVar24 + uVar26;
  bVar22 = (byte)uVar12 & 0x1f;
  uVar10 = ~(1 << (uVar33 & 0xf));
  cVar16 = ((char)((uint)(uVar10 & 0xffc3) >> 8) - (char)((uint)uVar12 >> 8)) + -1;
  uVar31 = (uint)(ushort)(uVar25 >> 9 | (ushort)(byte)((uint)(ushort)(uVar25 << 7) >> 8) << 8);
  uVar13 = (uVar14 | uVar12) << 6;
  uVar12 = (ushort)uVar13;
  sVar27 = ((ushort)(CONCAT14(CARRY2(uVar24,uVar26),uVar28) >> bVar22) |
           (ushort)(uVar28 << 0x21 - bVar22)) + 0x89dd + (ushort)(uVar33 < 0x3cea);
  uVar24 = uVar24 - (sVar17 * 2 | (ushort)uVar18 >> 0xf);
  if (-1 < sVar27) {
    uVar24 = (ushort)(uVar14 >> 0x1a) | uVar12;
  }
  uVar28 = ((uint)((ulonglong)lVar3 >> 0x20) & 0xffff0000 | uVar31) >> 10;
  uVar31 = uVar31 << 0x16 | uVar28;
  sVar17 = sVar27 * -0x25d1 + -0x1cf7;
  bVar21 = (byte)(uVar14 >> 0x1a);
  bVar22 = bVar21 & 0x1f;
  uVar30 = (uVar29 & 0xffff0000 | (uint)uVar33) << bVar22 | uVar31 >> 0x20 - bVar22;
  uVar25 = (ushort)uVar30;
  uVar18 = (uint)(sVar17 < 0);
  bVar21 = bVar21 + (char)((uint)(ushort)((uVar11 >> 6) - (~uVar24 << 1 | uVar25 >> 0xf)) >> 8) +
           (uVar18 != 0);
  uVar10 = (sVar17 * 2 | (ushort)(~uVar24 << 1) >> 0xf) +
           ((ushort)(uVar10 & 0xc3 | (ushort)(byte)(cVar16 * '\x02' | cVar16 < '\0') << 8) >> 1);
  bVar22 = (bVar21 & 0x1f) % 0x11;
  uVar24 = uVar10 << bVar22 | uVar10 >> 0x11 - bVar22;
  uVar10 = uVar25 + ((ushort)uVar28 & 32000 ^ (ushort)((int)-uVar18 >> (bVar21 & 0x1f)));
  uVar11 = (uVar12 | bVar21) ^ 0x40;
  uVar13 = uVar13 & 0xffff0000 | (uint)uVar11;
  uVar29 = (int)(short)uVar24 & 0xffff;
  uVar32 = (uVar31 & 0x56710000 |
           (uint)(ushort)(uVar25 >> (bVar21 & 0xf) | uVar25 << 0x10 - (bVar21 & 0xf))) - 1;
  bVar22 = ((byte)uVar11 & 0x1f) % 0x11;
  uVar11 = (uVar11 * 0x5180 | uVar10) & 0xff;
  uVar31 = uVar13 * 2;
  uVar14 = (uint)CONCAT11((char)uVar11,(char)uVar32);
  uVar12 = (uVar11 << 1 | (ushort)CARRY4(uVar13,uVar13)) * 2 + 1;
  uVar28 = (uint)(uVar10 & 0xcd6f);
  bVar21 = ((byte)uVar31 & 0x1f) % 0x11;
  uVar11 = (short)uVar31 >> 1;
  uVar18 = (uVar30 & 0xffff0000 | uVar28) << 1;
  uVar10 = SEXT12((char)((byte)(uVar12 >> bVar21) | (char)uVar12 << 0x11 - bVar21));
  uVar30 = ((uint)(ushort)((short)uVar24 >> 0xf) << 0x10 | 0xcd6f) >> ((byte)uVar11 & 0x1f);
  uVar13 = 0x1f;
  if (uVar18 != 0) {
    for (; uVar18 >> uVar13 == 0; uVar13 = uVar13 - 1) {
    }
  }
  uVar12 = uVar11 ^ 0x608f;
  uVar18 = (uVar31 & 0xffff0000 | (uint)uVar11) ^ 0x608f;
  uVar11 = uVar10 & 0xff;
  uVar23 = CONCAT22((short)((ushort)(uVar29 >> bVar22) | (ushort)(uVar29 << 0x11 - bVar22)) >> 0xf,
                    uVar11 | (ushort)(byte)(((short)uVar12 < 0) << 7 | (uVar12 == 0) << 6 |
                                            (((short)(char)bVar7 & 0x1000U) != 0) << 4 |
                                           ((POPCOUNT(uVar12 & 0xff) & 1U) == 0) << 2) << 8) | 0x200
  ;
  uVar29 = uVar30 >> 2;
  bVar7 = (char)uVar29 >> 8 ^ (byte)(uVar23 >> 8);
  bVar22 = (byte)(uVar13 >> 8);
  uVar15 = (uVar13 & 0xffff0000 | (uint)CONCAT11(bVar22 >> 6 | bVar22 << 2,(byte)uVar13)) <<
           ((byte)uVar13 & 0x1f);
  uVar28 = (uVar14 << 0x1d | (uVar32 & 0xffff0000 | uVar14) >> 3) & ~(1 << ((uVar28 & 0xf) << 1));
  uVar31 = (uVar28 & 0xffff0000 |
           (uint)CONCAT11(((char)(uVar28 >> 8) - (char)uVar11) + -1,(char)uVar28)) << 0xe;
  uVar14 = (uVar23 >> 1 | (uint)((uVar10 & 1) != 0) << 0x1f) & ~(1 << (bVar7 & 0x1f));
  uVar13 = 0x1f;
  if (uVar18 != 0) {
    for (; uVar18 >> uVar13 == 0; uVar13 = uVar13 - 1) {
    }
  }
  uVar10 = (ushort)uVar15;
  uVar32 = uVar15 & 0xffff0000 | (uint)(ushort)(uVar10 << 7 | uVar10 >> 9);
  uVar23 = uVar28 >> 0x12 | uVar31 | 0xc000;
  uVar11 = (ushort)uVar14 & 0x3fff;
  uVar10 = (ushort)(byte)(uVar23 >> 8);
  uVar31 = uVar31 & 0xffff0000;
  uVar28 = uVar32 << 1;
  uVar32 = uVar28 | (int)uVar32 < 0;
  uVar18 = uVar13 + (uVar14 & 0xffff0000 |
                    (uint)(ushort)(uVar11 / uVar10 & 0xff | uVar11 % uVar10 << 8)) + uVar18;
  uVar29 = uVar30 & 0xffff0000 | uVar29 & 0x3f00 | (uint)(bVar7 & (byte)uVar32);
  sVar17 = (short)uVar29;
  uVar10 = (short)uVar18 + 0xd51;
  uVar18 = uVar18 & 0xffff0000;
  uVar30 = uVar18 | uVar10;
  uVar14 = (uVar28 & 0xffff0000 | (uint)(ushort)((short)uVar32 - sVar17)) + 1;
  bVar22 = (byte)uVar14;
  uVar28 = uVar29 << (bVar22 & 0x1f) | (uVar13 ^ 0x2000000) >> 0x20 - (bVar22 & 0x1f);
  bVar7 = (byte)uVar28 >> (bVar22 & 0x1f);
  uVar13 = (uVar13 ^ 0x2000000) * uVar30;
  if ((bVar7 & 1) != 0) {
    uVar13 = uVar30;
  }
  uVar29 = (((uVar31 | (ushort)(uVar10 + sVar17 * 8)) >> (bVar22 & 0x1f) |
            (uVar31 | (ushort)~(ushort)uVar23) * -0x4e98c8ce << 0x20 - (bVar22 & 0x1f)) >> 1) >>
           (bVar22 & 0x1f);
  cVar16 = (char)(uVar28 >> 8) + '\\';
  uVar31 = uVar28 & 0xffff0000 | (uint)CONCAT11(cVar16,bVar7);
  if (-1 < cVar16) {
    uVar31 = uVar29;
  }
  bVar7 = (byte)(uVar14 & 0xffff0cff);
  bVar22 = (bVar7 & 0x1f) % 0x11;
  uVar28 = (uint)(0xca8c845c < (uint)((int)uVar13 >> 0x1f)) << 0x10 | uVar29 & 0xffff;
  uVar29 = uVar29 & 0xffff0000 |
           (uint)(ushort)((ushort)(uVar28 >> bVar22) | (ushort)(uVar28 << 0x11 - bVar22));
  uVar12 = CONCAT11((byte)(uVar31 >> 8) >> (bVar7 & 0x1f),(char)uVar31);
  uVar31 = uVar31 & 0xffff0000 | (uint)uVar12;
  lVar3 = (ulonglong)uVar13 * (ulonglong)uVar29;
  uVar11 = (ushort)((ulonglong)lVar3 >> 0x30);
  sVar17 = (short)(char)((byte)lVar3 & 0xe8) >> 0xf;
  uVar28 = CONCAT22(uVar11,sVar17);
  uVar13 = 0;
  if (uVar28 != 0) {
    for (; (uVar28 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
    }
  }
  uVar32 = (int)(uVar18 | uVar10 & uVar12) >> (bVar7 & 0x1f);
  uVar29 = uVar29 ^ uVar31;
  uVar18 = (uint)lVar3 >> 0x15;
  if (uVar18 != uVar32) {
    uVar18 = uVar32;
    uVar31 = uVar32;
  }
  uVar10 = (ushort)(uVar14 & 0xffff0cff) ^ (ushort)uVar29;
  if (uVar10 != 0) {
    uVar28 = uVar29 & 0xffff | (uint)uVar11 << 0x10;
  }
  uVar30 = uVar10 & 0xffffff0f;
  sVar8 = (sbyte)uVar30;
  uVar32 = uVar18 & 0xffff0000 |
           (uint)(ushort)((ushort)((ushort)uVar18 & 0xff00 |
                                  (ushort)((POPCOUNT(uVar10 & 0xff) & 1U) != 0)) >> sVar8 |
                         (ushort)uVar13 << 0x10 - sVar8);
  uVar23 = uVar29 & 0xffff0000 | uVar10 & 0xff0f;
  uVar10 = (ushort)uVar30 >> 1;
  cVar16 = (char)((uint)(ushort)((short)uVar28 * 0x479) >> 8);
  uVar10 = (uVar10 ^ 1 << (uVar10 & 0xf)) & 0xff;
  uVar18 = (uint)(ushort)(uVar10 | (ushort)(SCARRY1(cVar16,'\x01') != (char)(cVar16 + '\x01') < '\0'
                                           ) << 8);
  sVar27 = (short)((uVar13 & 0xffff0000 | (uint)(ushort)((ushort)uVar13 >> 1)) >> 3);
  uVar11 = sVar17 - sVar27;
  uVar30 = (uVar14 & 0xffff0000 | uVar18) << ((byte)uVar10 & 0x1f);
  sVar17 = CONCAT11(0xff,(char)uVar30) + -0x6bae;
  bVar22 = (byte)sVar17;
  bVar7 = bVar22 & 0x1f;
  uVar14 = uVar32 >> bVar7 | uVar32 << 0x20 - bVar7;
  uVar10 = (short)(uVar31 | uVar28) * 2;
  uVar31 = (uVar31 | uVar28) & 0xffff0000;
  uVar14 = CONCAT22((short)((int)uVar14 >> 0x11),
                    CONCAT11((uVar11 & 0x5bef) != 0,(char)((int)uVar14 >> 1))) + uVar23;
  bVar22 = bVar22 & 0x1f;
  uVar14 = uVar14 << bVar22 | uVar14 >> 0x20 - bVar22;
  uVar13 = (uVar13 & 0xfff80000) >> 3 | uVar18 << 0x1d;
  uVar28 = uVar13 | (ushort)(sVar27 + 0xcef3);
  uVar18 = uVar30 & 0xffff0000 | (uint)(ushort)(sVar17 + uVar10 + 1);
  if ((int)(uVar28 + 0xf50fb7a8) < 0) {
    uVar18 = uVar31 | uVar10;
  }
  iVar19 = (int)(short)((ushort)uVar14 & 0xff00 | (ushort)(byte)((char)uVar14 + 0x91)) *
           (int)(short)uVar10;
  bVar7 = (byte)(uVar18 >> 0x15);
  bVar22 = bVar7 & 0xf;
  uVar12 = (uVar10 >> bVar22 | uVar10 << 0x10 - bVar22) &
           ((ushort)(uVar18 >> 0x15) | (ushort)(uVar18 << 0xb));
  bVar22 = (byte)((uint)iVar19 >> 0x18);
  bVar35 = !CARRY1((byte)iVar19,bVar22);
  uVar10 = (ushort)~((ushort)(uVar23 >> 1) & 0xe410) >> 5;
  uVar32 = (uVar29 & 0x10280000) >> 1 | (uint)(ushort)(uVar10 | (ushort)bVar35 << 0xb);
  uVar18 = (uVar18 << 0xb & 0xffff0000 |
           (uint)CONCAT11((POPCOUNT((byte)iVar19 + bVar22) & 1U) == 0,bVar7)) + uVar32;
  uVar14 = (uVar11 - 1 & 0xffff0000 |
           (uint)(ushort)((ushort)((uint)iVar19 >> 0x18) ^ 1 << (uVar10 & 0xf))) >> 1 |
           (uint)(ushort)(short)bVar35 << 0x1f;
  uVar29 = -uVar14;
  if (uVar14 != 0 || uVar29 == 0) {
    uVar28 = uVar13 | uVar18 & 0xffff;
  }
  uVar32 = uVar32 ^ uVar28;
  bVar7 = (byte)uVar18 & 0xf;
  bVar22 = (byte)((int)uVar18 >> 0x19);
  uVar13 = (uVar32 << 0x13 | uVar32 >> 0xe) -
           (uVar28 & 0xffff0000 | (uint)(ushort)((short)uVar28 >> (bVar22 & 0x1f)));
  uVar10 = ~(ushort)uVar13;
  uVar32 = uVar13 & 0xffff0000 | (uint)uVar10;
  sVar17 = (short)((int)uVar18 >> 0x29);
  bVar22 = bVar22 << 1;
  bVar21 = bVar22 & 0x1f | 1;
  uVar18 = (uVar29 & 0xffff0000 | (uint)(ushort)((ushort)(uVar29 == 0 || 0 < (int)uVar14) << 0xb))
           << bVar21 | uVar32 >> 0x20 - bVar21;
  bVar21 = bVar22 & 0x1f | 1;
  uVar13 = (uVar18 & 0xffff | uVar28 & 0xffff0000) << bVar21 | uVar18 >> 0x20 - bVar21;
  uVar31 = uVar31 | (ushort)((ushort)((uVar12 << bVar7 | uVar12 >> 0x10 - bVar7) << 1) >> 0xf |
                            uVar10 << 1);
  uVar11 = (ushort)uVar13;
  uVar13 = uVar13 & 0xffff0000 | (uint)(uVar11 & 0xfeff);
  if ((uVar11 >> 8 & 1) == 0) {
    uVar13 = uVar31;
  }
  uVar18 = uVar18 & 0xffffff00 | (uint)(byte)((byte)uVar18 ^ (byte)(uVar18 >> 8));
  bVar22 = bVar22 & 0x1f | 1;
  uVar18 = uVar18 << bVar22 | uVar18 >> 0x21 - bVar22;
  uVar31 = uVar31 ^ 0xefac5121;
  uVar24 = (ushort)uVar18 & ~(1 << (uVar10 & 0xf));
  uVar12 = (ushort)(uVar13 < 0xb207271e) << 8;
  bVar35 = uVar13 >= 0xb207271e;
  uVar10 = (ushort)bVar35 * (uVar12 ^ uVar24);
  uVar12 = uVar12 ^ uVar10;
  uVar11 = !bVar35 * uVar12;
  uVar24 = uVar24 * -0x5617;
  bVar22 = (char)uVar24 + 0xbd;
  uVar14 = uVar18 & 0xffff0000 | uVar24 & 0xffffff00 | (uint)bVar22;
  uVar28 = uVar31 & 0xffff0000 | (uint)(ushort)((short)uVar31 << 1);
  uVar31 = CONCAT22(sVar17,uVar11 & 0xff |
                           (ushort)(byte)((char)((uint)uVar11 >> 8) * '\x02' + 1) << 8) * uVar14;
  uVar18 = (uVar31 & 0xffff) * (uVar31 & 0xffff);
  uVar31 = uVar31 & 0xffff0000 | uVar18 & 0xffff;
  if ((short)(uVar18 >> 0x10) == 0) {
    uVar31 = uVar28;
  }
  uVar18 = uVar13 + 0x4df8d8e2 & 0xffff0000;
  uVar11 = (short)(uVar13 + 0x4df8d8e2) * 0x2000 + 0x14b1;
  uVar13 = (int)uVar31 >> 0x1f;
  if ((uVar18 | uVar11) < uVar28) {
    uVar13 = CONCAT22(sVar17,uVar12);
  }
  uVar31 = (uVar31 & 0xffffff00 | (uint)(byte)((char)uVar31 + bVar22 + (uVar28 < (uVar18 | uVar11)))
           ) & ~(1 << (uVar13 & 0x1f));
  uVar25 = (short)uVar31 + uVar11 + 1;
  uVar31 = uVar31 & 0xffff0000 | (uint)uVar25;
  uVar28 = (uVar32 & 0x3fffc000) << 2;
  iVar19 = uVar14 - uVar31;
  uVar31 = (uint)(uVar14 < uVar31) << 0x10 | uVar13 & 0xffff;
  uVar24 = (ushort)(uVar31 >> 2);
  bVar7 = (char)((uint)iVar19 >> 8) << 1;
  cVar16 = (char)((uint)(ushort)(uVar24 << 5) >> 8);
  uVar29 = uVar18 | (uVar11 | 0x80);
  bVar22 = (byte)uVar10;
  uVar14 = (uint)(ushort)((short)cVar16 >> 7) << 0x10;
  uVar32 = (uint)(ushort)(CONCAT11(cVar16,(char)uVar25 - (char)(uVar12 >> 8)) >> (bVar22 & 0x1f));
  if (uVar14 != uVar32) {
    uVar14 = uVar32;
    uVar29 = uVar32;
  }
  cVar16 = (char)((uint)uVar12 >> 8);
  uVar13 = (int)((uVar13 & 0xffff0000 |
                 (uint)(ushort)((ushort)(uVar24 | (ushort)(uVar31 << 0xf)) >> 0xb |
                                (uVar24 & 7) << 5 | (ushort)(byte)((uint)uVar25 >> 8) << 8)) +
                0xf7138ba) >> 1;
  uVar13 = uVar13 << (bVar22 & 0x1f) | uVar13 >> 0x20 - (bVar22 & 0x1f);
  uVar29 = uVar29 | 0x3f888fc1;
  bVar21 = (byte)(((ushort)(uVar12 & 0xff | (ushort)(byte)(cVar16 << 1 | cVar16 < '\0') << 8) >>
                   (bVar22 & 0x1f) | 0x3e21) << 1) & 0x1f;
  uVar18 = ((uVar18 | (uVar11 | 0x80)) << bVar21 | (uVar28 | 0x71a) >> 0x20 - bVar21) * 2 + 1;
  uVar10 = (ushort)uVar29 & 0xfeff;
  uVar31 = uVar29 & 0xffff0000 | (uint)uVar10;
  uVar13 = (uVar28 | (ushort)(0x71a - ((ushort)uVar13 & 0xff00 |
                                      (ushort)(byte)((char)uVar13 * '\x02')))) >> 1;
  uVar1 = (longlong)
          CONCAT31((uint3)((uVar14 & 0xffffff00) >> 8) & 0xffff00 |
                   (uint3)(byte)((byte)((ushort)((ushort)(byte)((char)uVar14 << (bVar22 & 0x1f)) <<
                                                0xf) >> 8) | (byte)((uVar14 & 0xffffff00) >> 8) >> 1
                                ),1) * (longlong)(int)uVar31;
  cVar6 = (char)(uVar1 >> 8);
  cVar16 = cVar6 + '\x01';
  if (SCARRY1(cVar6,'\x01') != cVar16 < '\0') {
    uVar13 = uVar18 & 0xffff | (uVar28 >> 0x11) << 0x10;
  }
  uVar11 = (short)uVar13 - uVar10;
  uVar13 = uVar13 & 0xffff0000;
  uVar28 = (uint)(uVar1 >> 0x21);
  uVar14 = 0x1f;
  if ((uVar13 | uVar11) != 0) {
    for (; (uVar13 | uVar11) >> uVar14 == 0; uVar14 = uVar14 - 1) {
    }
  }
  uVar15 = uVar13 | (ushort)(uVar11 * 0x100 | uVar11 >> 8);
  bVar22 = (byte)(uVar28 >> 8);
  uVar30 = (CONCAT22((short)(uVar1 >> 0x10),CONCAT11(cVar16,(char)uVar1) ^ (uVar10 | 0x6b13)) >> 0xf
           ) + 0x9f8c8e49;
  uVar24 = (ushort)(uVar18 >> 1) | 0x100;
  bVar21 = ((byte)uVar30 ^ (byte)(1 << ((byte)uVar28 & 0xf))) - (char)uVar10;
  uVar23 = (int)(uVar28 & 0xffff0000 | (uint)((uVar1 & 0x100000000) != 0) << 0x1f |
                (uint)CONCAT11(bVar22 >> 3 | bVar22 << 5,(byte)uVar28)) >>
           (((byte)uVar14 | 0x5b) & 0x1f);
  uVar28 = uVar14 & 0xff | 0x5b;
  uVar32 = uVar28 & 0xffffff0f;
  uVar11 = (ushort)uVar14 & 0xff00 | (ushort)uVar32;
  sVar8 = (sbyte)uVar32;
  uVar12 = (short)uVar23 << sVar8 | uVar24 >> 0x10 - sVar8;
  bVar36 = CONCAT11(0xa3,bVar21) == uVar12;
  uVar12 = uVar12 ^ (ushort)bVar36 * (uVar12 ^ uVar11);
  bVar22 = (byte)uVar12;
  uVar32 = ((uVar29 & 0xfeff |
             (uint)(ushort)((ushort)((uint)iVar19 >> 0x17) |
                           (ushort)(((uint)(ushort)((CONCAT11(bVar7,(char)iVar19) << 2 |
                                                    (ushort)(bVar7 >> 6)) + 1) << 0x19) >> 0x10)) <<
             0x10 | 0x6b13) >> 1) - uVar15;
  bVar9 = (byte)(uVar32 >> 8);
  bVar35 = (uVar28 & 1) != 0;
  uVar11 = uVar11 >> 1;
  bVar7 = (byte)(bVar21 ^ !bVar36 * (bVar21 ^ bVar22)) >> 1 | bVar35 << 7;
  uVar28 = uVar30 & 0xffff0000 | (uint)bVar7;
  bVar21 = (byte)((uint)(ushort)(uVar11 | (ushort)bVar35 << 0xf) >> 8);
  uVar11 = uVar11 & 0xff;
  cVar6 = (char)((uint)uVar12 >> 8);
  cVar16 = -cVar6;
  if (cVar16 != '\0' && cVar6 < '\x01') {
    uVar15 = uVar13 | (ushort)(uVar11 | (ushort)(byte)(bVar21 << 4 | bVar21 >> 4) << 8);
  }
  uVar24 = (short)uVar24 >> 5;
  bVar21 = (byte)uVar11;
  uVar25 = uVar24 >> (bVar21 & 0xf) | uVar24 << 0x10 - (bVar21 & 0xf);
  uVar11 = uVar11 | (bVar7 & 0xf0) << 8;
  uVar30 = uVar28 >> (bVar21 & 0x1f) | uVar28 << 0x21 - (bVar21 & 0x1f);
  uVar31 = uVar31 | 0xc000;
  uVar13 = uVar10 | 0xc000;
  uVar28 = (uVar12 & 0x3f00 | (uint)(byte)(bVar22 << (bVar21 & 7) | bVar22 >> 8 - (bVar21 & 7))) <<
           0x10 | (uint)(ushort)((ushort)uVar30 >> (bVar21 & 0x1f));
  uVar23 = uVar28 % uVar13 | uVar23 & 0xffff0000;
  uVar23 = uVar23 << (bVar21 & 0x1f) | uVar23 >> 0x21 - (bVar21 & 0x1f);
  uVar24 = CONCAT11(cVar16 << (bVar21 & 0x1f),
                    (byte)(bVar9 + (byte)uVar32 * '\x02' + CARRY1(bVar9,(byte)uVar32)) >> 7);
  iVar19 = (short)uVar15 * 0x94;
  sVar17 = (short)iVar19;
  uVar10 = (ushort)(sVar17 != iVar19);
  uVar12 = uVar11 * 2 + uVar10;
  if (uVar12 == 0) {
    uVar12 = uVar24;
  }
  if (CARRY2(uVar11,uVar11) || CARRY2(uVar11 * 2,uVar10)) {
    uVar24 = CONCAT11((byte)(uVar23 >> 8) >> (bVar21 & 0x1f),(char)uVar23);
  }
  iVar19 = ((uVar32 & 0xffff0000 | (uint)uVar24) - CONCAT22((ushort)(uVar18 >> 0x11),uVar25)) * 2;
  uVar13 = (int)(short)((ushort)(uVar28 / uVar13) | 0x2c00) * (int)(short)uVar25;
  bVar22 = (byte)(uVar13 >> 0x18);
  iVar5 = ((uVar30 & 0xffff0000 | uVar13 & 0xffff) - uVar31) - (uint)(0x44 < bVar22);
  uVar18 = (uVar14 & 0xffff0000 |
           (uint)(ushort)(uVar12 & 0xff | (ushort)(byte)((byte)(uVar12 >> 8) & (byte)uVar12) << 8))
           - 1;
  uVar10 = (ushort)uVar18;
  uVar14 = -(uVar18 & 0xffff0000 | (uint)(ushort)(uVar10 << 1 | uVar10 >> 0xf));
  uVar18 = ((int)(uVar23 & 0xffff0000 |
                 (uint)(ushort)(CONCAT11(bVar22 + 0xbb,(char)(uVar13 >> 0x10)) >> 1)) >> 1) << 1;
  uVar28 = uVar18 | uVar14 >> 0x1f;
  uVar13 = (short)(sVar17 + 0x6226U & 0xfffd) * -0x56a0;
  bVar35 = (int)(short)uVar13 != uVar13;
  return (uint)(ushort)(short)(char)((uint)iVar5 >> 0x10) +
         (CONCAT22((short)((uint)iVar19 >> 0x10),0x1f5) - 1U & 0xffffff00 | (uint)bVar35) +
         (uVar14 & 0xffff0000 |
         (uint)CONCAT11((((byte)(uVar14 >> 8) | 0x57) + 0x1e) - bVar35,(char)uVar14)) +
         (uVar18 & 0xffff0000 | (uint)CONCAT11(uVar28 == 0,(char)uVar28)) +
         (uVar15 & 0xffff0000 | uVar13 & 0xffff) + (uint)(uVar28 == 0) +
         (uVar29 & 0xffff0000 |
         (uint)(ushort)((short)uVar31 +
                       ((CONCAT11((char)((uint)iVar19 >> 8) >> ((byte)uVar12 & 0x1f),(char)iVar19) &
                        0x7f80) << 1 | (ushort)(iVar5 != 0)))) + 0x7bcfe26c;
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


