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
} Elf64_DynTag;

typedef enum Elf_ProgramHeaderType {
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
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
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



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x00401364)
// WARNING: Removing unreachable block (ram,0x0040125d)
// WARNING: Removing unreachable block (ram,0x004013ac)
// WARNING: Removing unreachable block (ram,0x00401390)
// WARNING: Removing unreachable block (ram,0x00401378)
// WARNING: Removing unreachable block (ram,0x004013c4)

void log_size_10_var_000(void)

{
  short sVar1;
  
  sVar1 = 0;
  while ((0x419U >> sVar1 & 1) == 0) {
    sVar1 = sVar1 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x00402241)

void log_size_10_var_001(void)

{
  char cVar1;
  short sVar2;
  long lVar3;
  uint uVar4;
  byte bVar8;
  ushort uVar5;
  ulong uVar6;
  ulong uVar7;
  char cVar11;
  uint uVar9;
  ulong uVar10;
  int iVar12;
  ulong uVar13;
  char in_AF;
  
  bVar8 = in_AF << 4 | 0x83;
  iVar12 = -0x24517d00;
  uVar5 = ((ushort)bVar8 << 8 | 0xc1) * -0xcc6;
  if (((uint)bVar8 << 8 | 0xd8b60000) != 0x8b69063f) {
    iVar12 = -0x2451dac4;
  }
  uVar7 = (ulong)(uVar5 & 0xffffff00 | 0x9be80000 | (uint)(byte)((char)uVar5 << 1) | 1) * 0x442066c9
  ;
  uVar6 = uVar7 & 0xffffffff;
  cVar11 = (char)(uVar7 >> 0x28);
  uVar4 = iVar12 + 0xd2727107U & 0xffffff00 | (uint)(byte)(uVar6 >> 8);
  cVar1 = -0x4e - (char)uVar6;
  uVar9 = (uint)CONCAT71(0xffffffffffffd9,cVar1);
  if (cVar1 != '\0' && (SBORROW1(-0x4e,(char)uVar6) != false) == cVar1 < '\0') {
    uVar9 = 0x2a657673;
  }
  uVar6 = (ulong)(uint)((int)uVar6 << 0xb);
  uVar6 = uVar6 & 0xffffffffffff0000 |
          (ulong)(byte)(((byte)(uVar6 >> 8) & 0x31) >> 1 | (0xfc1122c8 < uVar9) << 7) << 8;
  uVar9 = CONCAT22((short)(uVar7 >> 0x30),
                   CONCAT11(cVar11 * -0x80 | (byte)-cVar11 >> 2,(char)(uVar7 >> 0x20)) >> 6) ^
          0x3c2ee30c;
  uVar7 = (ulong)uVar9;
  uVar13 = (ulong)((byte)iVar12 < 0xca) << 0x3f | 0x71bc32b7bfbeebe0;
  uVar10 = uVar7 ^ (ulong)(uVar6 == uVar7) * (ulong)(uVar9 ^ uVar4);
  uVar7 = (uVar6 ^ (ulong)(uVar6 != uVar7) * (uVar6 ^ uVar10)) >> 5;
  lVar3 = 0x3f;
  while (0xfffff8e48b690006U >> lVar3 == 0) {
    lVar3 = lVar3 + -1;
  }
  uVar6 = (uVar7 & 0xffffffffffff0000 |
          (ulong)(ushort)((CONCAT22((ushort)uVar10 & 0xff00 |
                                    (ushort)(byte)((char)uVar10 -
                                                  (char)((uint)(ushort)((short)uVar4 << 1) >> 8)),
                                    (short)uVar7) & 0x3fffffff) / 0xc000)) << 0x17;
  uVar7 = 0;
  if (uVar13 != 0) {
    while ((uVar13 >> uVar7 & 1) == 0) {
      uVar7 = uVar7 + 1;
    }
  }
  uVar5 = (ushort)(uVar6 >> 0x10) ^
          (ushort)((ulong)(uVar6 != uVar7) *
                   (uVar6 ^ uVar7 ^ (ulong)(uVar6 == uVar7) * (uVar7 ^ 0x33a7cb85)) >> 0x10);
  sVar2 = 0xf;
  if ((short)uVar5 < 0) {
    while ((ushort)((short)uVar5 >> 0xf) >> sVar2 == 0) {
      sVar2 = sVar2 + -1;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x00403176)

void log_size_10_var_002(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x00404195)
// WARNING: Removing unreachable block (ram,0x0040425f)
// WARNING: Removing unreachable block (ram,0x00404346)

void log_size_10_var_003(void)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  char in_AF;
  
  uVar3 = (ulong)CONCAT11(in_AF << 4,0x73) & 0x272f;
  uVar3 = CONCAT62(0xe34a07cf36af,
                   (short)((uint)CONCAT11(((byte)(uVar3 >> 8) | 2) + 0x69,(char)uVar3) * 0x3223 >>
                          0x10)) + 0x8470ffff;
  uVar4 = (uVar3 & 0xffffffffffff0000 |
          (ulong)CONCAT11((byte)(uVar3 >> 8) & (byte)uVar3,(byte)uVar3)) & 0xffffe8ed;
  uVar3 = 0x3f;
  if (uVar4 != 0) {
    while (uVar4 >> uVar3 == 0) {
      uVar3 = uVar3 - 1;
    }
  }
  uVar2 = (((ushort)((ushort)(uVar3 < 0xffffe8ee) << 0xf | 0x7fff) | 0x84700000) ^ 0x6a456c44) >> 1;
  lVar1 = 0x3f;
  if (uVar2 != 0) {
    while (uVar2 >> lVar1 == 0) {
      lVar1 = lVar1 + -1;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x004050ae)
// WARNING: Removing unreachable block (ram,0x004050cb)
// WARNING: Removing unreachable block (ram,0x004050e3)

void log_size_10_var_004(void)

{
  long lVar1;
  
  lVar1 = 0x3f;
  while (0x9638161f78676efeU >> lVar1 == 0) {
    lVar1 = lVar1 + -1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x0040606c)
// WARNING: Removing unreachable block (ram,0x0040607e)

void log_size_10_var_005(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x00407089)

void log_size_10_var_006(void)

{
  long lVar1;
  
  lVar1 = 0;
  while ((0x56a497da9a5610e4U >> lVar1 & 1) == 0) {
    lVar1 = lVar1 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void log_size_10_var_007(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x00408e32)
// WARNING: Removing unreachable block (ram,0x00408e12)
// WARNING: Removing unreachable block (ram,0x00408e16)
// WARNING: Removing unreachable block (ram,0x00408e69)
// WARNING: Removing unreachable block (ram,0x00408e46)

void log_size_10_var_008(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x00409de7)
// WARNING: Removing unreachable block (ram,0x00409dcc)
// WARNING: Removing unreachable block (ram,0x00409e50)

void log_size_10_var_009(void)

{
  short sVar1;
  uint uVar2;
  long lVar3;
  
  sVar1 = 0;
  while ((0x1989U >> sVar1 & 1) == 0) {
    sVar1 = sVar1 + 1;
  }
  uVar2 = 0;
  while ((0x9978202aU >> uVar2 & 1) == 0) {
    uVar2 = uVar2 + 1;
  }
  uVar2 = uVar2 & 0xffffff00 | (uint)(byte)((char)uVar2 - 0xd);
  lVar3 = 0x3f;
  if (uVar2 != 0) {
    while (uVar2 >> lVar3 == 0) {
      lVar3 = lVar3 + -1;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
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


