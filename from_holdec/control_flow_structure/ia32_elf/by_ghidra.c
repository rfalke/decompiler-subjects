typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
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

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

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

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
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



void FUN_080482d0(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



void _start(void)

{
  __libc_start_main(main);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: This is an inlined function

void __x86_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0804835f)
// WARNING: Removing unreachable block (ram,0x08048368)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x08048398)
// WARNING: Removing unreachable block (ram,0x080483a1)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_6532 == '\0') {
    deregister_tm_clones();
    completed_6532 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x080483f9)

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



void initConditions(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  iVar2 = in_EAX;
  do {
    iVar1 = iVar2 + 1;
    *(int *)(&DAT_0806103c + (iVar1 - in_EAX) * 4) = iVar2;
    iVar2 = iVar1;
  } while (iVar1 != in_EAX + 1000);
  return;
}



undefined4 test_1_blocks_variant_0_edges_2(void)

{
  puts("block 2");
  puts("exit block");
  return 0;
}



undefined4 FUN_0804844c(void)

{
  puts("block 2");
  puts("exit block");
  return 0;
}



undefined4 test_1_blocks_variant_1_edges_3(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    uVar1 = FUN_08048470();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08048470(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    uVar1 = FUN_08048470();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 test_2_blocks_variant_0_edges_3(void)

{
  puts("block 2");
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 FUN_0804849d(void)

{
  puts("block 2");
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 test_2_blocks_variant_1_edges_4(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  puts("block 3");
  if (conditions._100_4_ != 0) {
    uVar1 = FUN_080484d0();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_080484d0(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  puts("block 3");
  if (conditions._100_4_ != 0) {
    uVar1 = FUN_080484d0();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 test_2_blocks_variant_2_edges_4(void)

{
  puts("block 2");
  do {
    puts("block 3");
  } while (conditions._100_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_0804850c(void)

{
  puts("block 2");
  do {
    puts("block 3");
  } while (conditions._100_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_2_blocks_variant_3_edges_4(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 3");
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08048548(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 3");
  }
  puts("exit block");
  return 0;
}



undefined4 test_2_blocks_variant_4_edges_4(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 3");
    uVar1 = FUN_08048584();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08048584(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 3");
    uVar1 = FUN_08048584();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 test_2_blocks_variant_5_edges_4(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  do {
    puts("block 3");
  } while( true );
}



undefined4 FUN_080485c0(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  do {
    puts("block 3");
  } while( true );
}



undefined4 test_2_blocks_variant_6_edges_4(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 FUN_080485fc(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 test_2_blocks_variant_7_edges_5(void)

{
  do {
    puts("block 2");
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ != 0);
  } while( true );
}



undefined4 FUN_08048638(void)

{
  do {
    puts("block 2");
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ != 0);
  } while( true );
}



undefined4 test_2_blocks_variant_8_edges_5(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 3");
    if (conditions._104_4_ != 0) {
      uVar1 = FUN_0804867d();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804867d(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 3");
    if (conditions._104_4_ != 0) {
      uVar1 = FUN_0804867d();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_2_blocks_variant_9_edges_5(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  while (iVar1 != 0) {
    puts("block 3");
    iVar1 = conditions._104_4_;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_080486c2(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  while (iVar1 != 0) {
    puts("block 3");
    iVar1 = conditions._104_4_;
  }
  puts("exit block");
  return 0;
}



undefined4 test_2_blocks_variant_10_edges_5(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
    } while (conditions._104_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08048707(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
    } while (conditions._104_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_2_blocks_variant_11_edges_5(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  puts("block 3");
  if (conditions._104_4_ != 0) {
    uVar1 = FUN_0804874c();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804874c(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  puts("block 3");
  if (conditions._104_4_ != 0) {
    uVar1 = FUN_0804874c();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 test_2_blocks_variant_12_edges_5(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_08048791(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_2_blocks_variant_13_edges_5(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080487c3;
  } while (conditions._104_4_ == 0);
  puts("block 3");
LAB_080487c3:
  puts("exit block");
  return 0;
}



undefined4 FUN_080487d6(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080487c3;
  } while (conditions._104_4_ == 0);
  puts("block 3");
LAB_080487c3:
  puts("exit block");
  return 0;
}



undefined4 test_2_blocks_variant_14_edges_5(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  puts("block 3");
  uVar1 = FUN_0804881b();
  return uVar1;
}



undefined4 FUN_0804881b(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  puts("block 3");
  uVar1 = FUN_0804881b();
  return uVar1;
}



undefined4 test_2_blocks_variant_15_edges_5(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
  } while( true );
}



undefined4 FUN_08048860(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
  } while( true );
}



undefined4 test_2_blocks_variant_16_edges_6(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08048892;
    } while (conditions._108_4_ != 0);
  }
LAB_08048892:
  puts("exit block");
  return 0;
}



undefined4 FUN_080488a5(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08048892;
    } while (conditions._108_4_ != 0);
  }
LAB_08048892:
  puts("exit block");
  return 0;
}



undefined4 test_2_blocks_variant_17_edges_6(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_080488f3(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_2_blocks_variant_18_edges_6(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804892e;
  } while (conditions._104_4_ == 0);
  puts("block 3");
  if (conditions._108_4_ != 0) {
    uVar1 = FUN_08048941();
    return uVar1;
  }
LAB_0804892e:
  puts("exit block");
  return 0;
}



undefined4 FUN_08048941(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804892e;
  } while (conditions._104_4_ == 0);
  puts("block 3");
  if (conditions._108_4_ != 0) {
    uVar1 = FUN_08048941();
    return uVar1;
  }
LAB_0804892e:
  puts("exit block");
  return 0;
}



undefined4 test_2_blocks_variant_19_edges_6(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804897c;
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
LAB_0804897c:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804898f(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804897c;
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
LAB_0804897c:
  puts("exit block");
  return 0;
}



undefined4 test_2_blocks_variant_20_edges_6(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 3");
      iVar1 = conditions._108_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_080489dd(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 3");
      iVar1 = conditions._108_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_2_blocks_variant_21_edges_7(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 3");
      iVar1 = conditions._112_4_;
      if (conditions._108_4_ == 0) goto LAB_08048a18;
    }
  }
LAB_08048a18:
  puts("exit block");
  return 0;
}



undefined4 FUN_08048a2b(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 3");
      iVar1 = conditions._112_4_;
      if (conditions._108_4_ == 0) goto LAB_08048a18;
    }
  }
LAB_08048a18:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_0_edges_4(void)

{
  puts("block 2");
  puts("block 3");
  puts("block 4");
  puts("exit block");
  return 0;
}



undefined4 FUN_08048a82(void)

{
  puts("block 2");
  puts("block 3");
  puts("block 4");
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_1_edges_5(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  puts("block 3");
  puts("block 4");
  if (conditions._100_4_ != 0) {
    uVar1 = FUN_08048ac4();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08048ac4(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  puts("block 3");
  puts("block 4");
  if (conditions._100_4_ != 0) {
    uVar1 = FUN_08048ac4();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_2_edges_5(void)

{
  puts("block 2");
  do {
    puts("block 3");
    puts("block 4");
  } while (conditions._100_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_08048b0f(void)

{
  puts("block 2");
  do {
    puts("block 3");
    puts("block 4");
  } while (conditions._100_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_3_edges_5(void)

{
  puts("block 2");
  puts("block 3");
  do {
    puts("block 4");
  } while (conditions._100_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_08048b5a(void)

{
  puts("block 2");
  puts("block 3");
  do {
    puts("block 4");
  } while (conditions._100_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_4_edges_5(void)

{
  puts("block 2");
  puts("block 3");
  if (conditions._100_4_ != 0) {
    puts("block 4");
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08048ba5(void)

{
  puts("block 2");
  puts("block 3");
  if (conditions._100_4_ != 0) {
    puts("block 4");
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_5_edges_5(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  puts("block 3");
  if (conditions._100_4_ != 0) {
    puts("block 4");
    uVar1 = FUN_08048bf0();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08048bf0(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  puts("block 3");
  if (conditions._100_4_ != 0) {
    puts("block 4");
    uVar1 = FUN_08048bf0();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_6_edges_5(void)

{
  puts("block 2");
  while( true ) {
    puts("block 3");
    if (conditions._100_4_ == 0) break;
    puts("block 4");
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08048c3b(void)

{
  puts("block 2");
  while( true ) {
    puts("block 3");
    if (conditions._100_4_ == 0) break;
    puts("block 4");
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_7_edges_5(void)

{
  puts("block 2");
  puts("block 3");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  do {
    puts("block 4");
  } while( true );
}



undefined4 FUN_08048c86(void)

{
  puts("block 2");
  puts("block 3");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  do {
    puts("block 4");
  } while( true );
}



undefined4 test_3_blocks_variant_8_edges_5(void)

{
  do {
    puts("block 2");
    puts("block 3");
  } while (conditions._100_4_ == 0);
  puts("block 4");
  puts("exit block");
  return 0;
}



undefined4 FUN_08048cd1(void)

{
  do {
    puts("block 2");
    puts("block 3");
  } while (conditions._100_4_ == 0);
  puts("block 4");
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_9_edges_5(void)

{
  puts("block 2");
  do {
    puts("block 3");
  } while (conditions._100_4_ == 0);
  puts("block 4");
  puts("exit block");
  return 0;
}



undefined4 FUN_08048d1c(void)

{
  puts("block 2");
  do {
    puts("block 3");
  } while (conditions._100_4_ == 0);
  puts("block 4");
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_10_edges_5(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 3");
    puts("block 4");
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08048d67(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 3");
    puts("block 4");
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_11_edges_5(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 3");
    puts("block 4");
    uVar1 = FUN_08048db2();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08048db2(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 3");
    puts("block 4");
    uVar1 = FUN_08048db2();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_12_edges_5(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  do {
    puts("block 3");
    puts("block 4");
  } while( true );
}



undefined4 FUN_08048dfd(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  do {
    puts("block 3");
    puts("block 4");
  } while( true );
}



undefined4 test_3_blocks_variant_13_edges_5(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 3");
    do {
      puts("block 4");
    } while( true );
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08048e48(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 3");
    do {
      puts("block 4");
    } while( true );
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_14_edges_5(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  puts("block 3");
  puts("block 4");
  puts("exit block");
  return 0;
}



undefined4 FUN_08048e93(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  puts("block 3");
  puts("block 4");
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_15_edges_5(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("block 3");
  }
  else {
    puts("block 4");
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08048ede(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("block 3");
  }
  else {
    puts("block 4");
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_16_edges_5(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 4");
    uVar1 = FUN_08048f29();
    return uVar1;
  }
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 FUN_08048f29(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 4");
    uVar1 = FUN_08048f29();
    return uVar1;
  }
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_17_edges_5(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 4");
  }
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 FUN_08048f74(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 4");
  }
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_18_edges_5(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("block 3");
    puts("exit block");
    return 0;
  }
  do {
    puts("block 4");
  } while( true );
}



undefined4 FUN_08048fbf(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("block 3");
    puts("exit block");
    return 0;
  }
  do {
    puts("block 4");
  } while( true );
}



undefined4 test_3_blocks_variant_19_edges_6(void)

{
  do {
    puts("block 2");
    do {
      puts("block 3");
      puts("block 4");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ != 0);
  } while( true );
}



undefined4 FUN_0804900a(void)

{
  do {
    puts("block 2");
    do {
      puts("block 3");
      puts("block 4");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_20_edges_6(void)

{
  do {
    puts("block 2");
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ != 0);
  } while( true );
}



undefined4 FUN_0804905e(void)

{
  do {
    puts("block 2");
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_21_edges_6(void)

{
  puts("block 2");
  do {
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ != 0);
  } while( true );
}



undefined4 FUN_080490b2(void)

{
  puts("block 2");
  do {
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_22_edges_6(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  puts("block 3");
  if (conditions._100_4_ != 0) {
    puts("block 4");
    if (conditions._104_4_ != 0) {
      uVar1 = FUN_08049106();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08049106(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  puts("block 3");
  if (conditions._100_4_ != 0) {
    puts("block 4");
    if (conditions._104_4_ != 0) {
      uVar1 = FUN_08049106();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_23_edges_6(void)

{
  puts("block 2");
  do {
    puts("block 3");
    if (conditions._100_4_ == 0) break;
    puts("block 4");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_0804915a(void)

{
  puts("block 2");
  do {
    puts("block 3");
    if (conditions._100_4_ == 0) break;
    puts("block 4");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_24_edges_6(void)

{
  int iVar1;
  
  puts("block 2");
  puts("block 3");
  iVar1 = conditions._100_4_;
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._104_4_;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_080491ae(void)

{
  int iVar1;
  
  puts("block 2");
  puts("block 3");
  iVar1 = conditions._100_4_;
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._104_4_;
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_25_edges_6(void)

{
  do {
    puts("block 2");
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      puts("block 4");
    } while (conditions._104_4_ != 0);
  } while( true );
}



undefined4 FUN_08049202(void)

{
  do {
    puts("block 2");
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      puts("block 4");
    } while (conditions._104_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_26_edges_6(void)

{
  while( true ) {
    puts("block 2");
    puts("block 3");
    if (conditions._100_4_ == 0) break;
    do {
      puts("block 4");
    } while (conditions._104_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08049256(void)

{
  while( true ) {
    puts("block 2");
    puts("block 3");
    if (conditions._100_4_ == 0) break;
    do {
      puts("block 4");
    } while (conditions._104_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_27_edges_6(void)

{
  puts("block 2");
  while (puts("block 3"), conditions._100_4_ != 0) {
    do {
      puts("block 4");
    } while (conditions._104_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_080492aa(void)

{
  puts("block 2");
  while (puts("block 3"), conditions._100_4_ != 0) {
    do {
      puts("block 4");
    } while (conditions._104_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_28_edges_6(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    puts("block 3");
  } while (conditions._100_4_ == 0);
  puts("block 4");
  if (conditions._104_4_ != 0) {
    uVar1 = FUN_080492fe();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_080492fe(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    puts("block 3");
  } while (conditions._100_4_ == 0);
  puts("block 4");
  if (conditions._104_4_ != 0) {
    uVar1 = FUN_080492fe();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_29_edges_6(void)

{
  do {
    puts("block 2");
    while (puts("block 3"), conditions._100_4_ != 0) {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_08049352(void)

{
  do {
    puts("block 2");
    while (puts("block 3"), conditions._100_4_ != 0) {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_30_edges_6(void)

{
  do {
    puts("block 2");
    puts("block 3");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_080493a6(void)

{
  do {
    puts("block 2");
    puts("block 3");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_31_edges_6(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  do {
    puts("block 3");
  } while (conditions._100_4_ == 0);
  puts("block 4");
  if (conditions._104_4_ != 0) {
    uVar1 = FUN_080493fa();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_080493fa(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  do {
    puts("block 3");
  } while (conditions._100_4_ == 0);
  puts("block 4");
  if (conditions._104_4_ != 0) {
    uVar1 = FUN_080493fa();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_32_edges_6(void)

{
  puts("block 2");
  do {
    do {
      puts("block 3");
    } while (conditions._100_4_ == 0);
    puts("block 4");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_0804944e(void)

{
  puts("block 2");
  do {
    do {
      puts("block 3");
    } while (conditions._100_4_ == 0);
    puts("block 4");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_33_edges_6(void)

{
  puts("block 2");
  do {
    puts("block 3");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_080494a2(void)

{
  puts("block 2");
  do {
    puts("block 3");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_34_edges_6(void)

{
  do {
    puts("block 2");
    puts("block 3");
    if (conditions._100_4_ == 0) goto LAB_080494e3;
  } while (conditions._104_4_ == 0);
  puts("block 4");
LAB_080494e3:
  puts("exit block");
  return 0;
}



undefined4 FUN_080494f6(void)

{
  do {
    puts("block 2");
    puts("block 3");
    if (conditions._100_4_ == 0) goto LAB_080494e3;
  } while (conditions._104_4_ == 0);
  puts("block 4");
LAB_080494e3:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_35_edges_6(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    puts("block 3");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  puts("block 4");
  uVar1 = FUN_0804954a();
  return uVar1;
}



undefined4 FUN_0804954a(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    puts("block 3");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  puts("block 4");
  uVar1 = FUN_0804954a();
  return uVar1;
}



undefined4 test_3_blocks_variant_36_edges_6(void)

{
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._104_4_ == 0) break;
      puts("block 4");
    }
  } while( true );
}



undefined4 FUN_0804959e(void)

{
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._104_4_ == 0) break;
      puts("block 4");
    }
  } while( true );
}



undefined4 test_3_blocks_variant_37_edges_6(void)

{
  do {
    puts("block 2");
    puts("block 3");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    puts("block 4");
  } while( true );
}



undefined4 FUN_080495f2(void)

{
  do {
    puts("block 2");
    puts("block 3");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    puts("block 4");
  } while( true );
}



undefined4 test_3_blocks_variant_38_edges_6(void)

{
  puts("block 2");
  do {
    puts("block 3");
    if (conditions._100_4_ == 0) goto LAB_08049633;
  } while (conditions._104_4_ == 0);
  puts("block 4");
LAB_08049633:
  puts("exit block");
  return 0;
}



undefined4 FUN_08049646(void)

{
  puts("block 2");
  do {
    puts("block 3");
    if (conditions._100_4_ == 0) goto LAB_08049633;
  } while (conditions._104_4_ == 0);
  puts("block 4");
LAB_08049633:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_39_edges_6(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  do {
    puts("block 3");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  puts("block 4");
  uVar1 = FUN_0804969a();
  return uVar1;
}



undefined4 FUN_0804969a(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  do {
    puts("block 3");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  puts("block 4");
  uVar1 = FUN_0804969a();
  return uVar1;
}



undefined4 test_3_blocks_variant_40_edges_6(void)

{
  puts("block 2");
  while( true ) {
    puts("block 3");
    if (conditions._100_4_ == 0) break;
    if (conditions._104_4_ != 0) {
      puts("block 4");
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_080496ee(void)

{
  puts("block 2");
  while( true ) {
    puts("block 3");
    if (conditions._100_4_ == 0) break;
    if (conditions._104_4_ != 0) {
      puts("block 4");
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_41_edges_6(void)

{
  puts("block 2");
  do {
    puts("block 3");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    puts("block 4");
  } while( true );
}



undefined4 FUN_08049742(void)

{
  puts("block 2");
  do {
    puts("block 3");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    puts("block 4");
  } while( true );
}



undefined4 test_3_blocks_variant_42_edges_6(void)

{
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) break;
      if (conditions._104_4_ != 0) {
        puts("block 4");
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_08049796(void)

{
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) break;
      if (conditions._104_4_ != 0) {
        puts("block 4");
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_43_edges_6(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 3");
    puts("block 4");
    if (conditions._104_4_ != 0) {
      uVar1 = FUN_080497ea();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_080497ea(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 3");
    puts("block 4");
    if (conditions._104_4_ != 0) {
      uVar1 = FUN_080497ea();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_44_edges_6(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  while (iVar1 != 0) {
    puts("block 3");
    puts("block 4");
    iVar1 = conditions._104_4_;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804983e(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  while (iVar1 != 0) {
    puts("block 3");
    puts("block 4");
    iVar1 = conditions._104_4_;
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_45_edges_6(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 3");
    do {
      puts("block 4");
    } while (conditions._104_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08049892(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 3");
    do {
      puts("block 4");
    } while (conditions._104_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_46_edges_6(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
      puts("block 4");
    } while (conditions._104_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_080498e6(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
      puts("block 4");
    } while (conditions._104_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_47_edges_6(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    puts("block 3");
    do {
      puts("block 4");
    } while (conditions._104_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804993a(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    puts("block 3");
    do {
      puts("block 4");
    } while (conditions._104_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_48_edges_6(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  do {
    puts("block 3");
    do {
      puts("block 4");
    } while (conditions._104_4_ != 0);
  } while( true );
}



undefined4 FUN_0804998e(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  do {
    puts("block 3");
    do {
      puts("block 4");
    } while (conditions._104_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_49_edges_6(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 3");
    if (conditions._104_4_ != 0) {
      puts("block 4");
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_080499e2(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 3");
    if (conditions._104_4_ != 0) {
      puts("block 4");
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_50_edges_6(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 3");
    if (conditions._104_4_ != 0) {
      puts("block 4");
      uVar1 = FUN_08049a36();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08049a36(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 3");
    if (conditions._104_4_ != 0) {
      puts("block 4");
      uVar1 = FUN_08049a36();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_51_edges_6(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      puts("block 4");
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08049a8a(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      puts("block 4");
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_52_edges_6(void)

{
  puts("block 2");
  if ((conditions._100_4_ != 0) && (puts("block 3"), conditions._104_4_ != 0)) {
    do {
      puts("block 4");
    } while( true );
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08049ade(void)

{
  puts("block 2");
  if ((conditions._100_4_ != 0) && (puts("block 3"), conditions._104_4_ != 0)) {
    do {
      puts("block 4");
    } while( true );
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_53_edges_6(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08049b1f;
    puts("block 3");
  } while (conditions._104_4_ == 0);
  puts("block 4");
LAB_08049b1f:
  puts("exit block");
  return 0;
}



undefined4 FUN_08049b32(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08049b1f;
    puts("block 3");
  } while (conditions._104_4_ == 0);
  puts("block 4");
LAB_08049b1f:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_54_edges_6(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    puts("block 3");
  } while (conditions._104_4_ == 0);
  puts("block 4");
  uVar1 = FUN_08049b86();
  return uVar1;
}



undefined4 FUN_08049b86(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    puts("block 3");
  } while (conditions._104_4_ == 0);
  puts("block 4");
  uVar1 = FUN_08049b86();
  return uVar1;
}



undefined4 test_3_blocks_variant_55_edges_6(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      puts("block 4");
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08049bda(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      puts("block 4");
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_56_edges_6(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    puts("block 3");
  } while (conditions._104_4_ == 0);
  do {
    puts("block 4");
  } while( true );
}



undefined4 FUN_08049c2e(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    puts("block 3");
  } while (conditions._104_4_ == 0);
  do {
    puts("block 4");
  } while( true );
}



undefined4 test_3_blocks_variant_57_edges_6(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    puts("block 4");
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08049c82(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    puts("block 4");
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_58_edges_6(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  do {
    puts("block 3");
  } while (conditions._104_4_ == 0);
  puts("block 4");
  uVar1 = FUN_08049cd6();
  return uVar1;
}



undefined4 FUN_08049cd6(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  do {
    puts("block 3");
  } while (conditions._104_4_ == 0);
  puts("block 4");
  uVar1 = FUN_08049cd6();
  return uVar1;
}



undefined4 test_3_blocks_variant_59_edges_6(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  do {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    puts("block 4");
  } while( true );
}



undefined4 FUN_08049d2a(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  do {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    puts("block 4");
  } while( true );
}



undefined4 test_3_blocks_variant_60_edges_6(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  do {
    puts("block 3");
  } while (conditions._104_4_ == 0);
  do {
    puts("block 4");
  } while( true );
}



undefined4 FUN_08049d7e(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  do {
    puts("block 3");
  } while (conditions._104_4_ == 0);
  do {
    puts("block 4");
  } while( true );
}



undefined4 test_3_blocks_variant_61_edges_6(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  puts("block 3");
  puts("block 4");
  if (conditions._104_4_ != 0) {
    uVar1 = FUN_08049dd2();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08049dd2(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  puts("block 3");
  puts("block 4");
  if (conditions._104_4_ != 0) {
    uVar1 = FUN_08049dd2();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_62_edges_6(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    puts("block 4");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_08049e26(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    puts("block 4");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_63_edges_6(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  puts("block 3");
  do {
    puts("block 4");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_08049e7a(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  puts("block 3");
  do {
    puts("block 4");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_64_edges_6(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  puts("block 3");
  if (conditions._104_4_ != 0) {
    puts("block 4");
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08049ece(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  puts("block 3");
  if (conditions._104_4_ != 0) {
    puts("block 4");
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_65_edges_6(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  puts("block 3");
  if (conditions._104_4_ != 0) {
    puts("block 4");
    uVar1 = FUN_08049f22();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08049f22(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  puts("block 3");
  if (conditions._104_4_ != 0) {
    puts("block 4");
    uVar1 = FUN_08049f22();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_66_edges_6(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  while (puts("block 3"), conditions._104_4_ != 0) {
    puts("block 4");
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08049f76(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  while (puts("block 3"), conditions._104_4_ != 0) {
    puts("block 4");
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_67_edges_6(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  puts("block 3");
  if (conditions._104_4_ == 0) {
    puts("exit block");
    return 0;
  }
  do {
    puts("block 4");
  } while( true );
}



undefined4 FUN_08049fca(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  puts("block 3");
  if (conditions._104_4_ == 0) {
    puts("exit block");
    return 0;
  }
  do {
    puts("block 4");
  } while( true );
}



undefined4 test_3_blocks_variant_68_edges_6(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
  } while (conditions._104_4_ == 0);
  puts("block 4");
  puts("exit block");
  return 0;
}



undefined4 FUN_0804a01e(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
  } while (conditions._104_4_ == 0);
  puts("block 4");
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_69_edges_6(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._104_4_ == 0);
  puts("block 4");
  puts("exit block");
  return 0;
}



undefined4 FUN_0804a072(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._104_4_ == 0);
  puts("block 4");
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_70_edges_6(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("block 3");
  }
  else {
    puts("block 4");
    if (conditions._104_4_ != 0) {
      uVar1 = FUN_0804a0c6();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804a0c6(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("block 3");
  }
  else {
    puts("block 4");
    if (conditions._104_4_ != 0) {
      uVar1 = FUN_0804a0c6();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_71_edges_6(void)

{
  puts("block 2");
  if ((conditions._100_4_ == 0) || (puts("block 4"), conditions._104_4_ != 0)) {
    puts("block 3");
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804a11a(void)

{
  puts("block 2");
  if ((conditions._100_4_ == 0) || (puts("block 4"), conditions._104_4_ != 0)) {
    puts("block 3");
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_72_edges_6(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("block 3");
  }
  else {
    do {
      puts("block 4");
    } while (conditions._104_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804a16e(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("block 3");
  }
  else {
    do {
      puts("block 4");
    } while (conditions._104_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_73_edges_6(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) break;
    puts("block 4");
  } while (conditions._104_4_ == 0);
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 FUN_0804a1c2(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) break;
    puts("block 4");
  } while (conditions._104_4_ == 0);
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_74_edges_6(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 4");
    } while (conditions._104_4_ != 0);
  }
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 FUN_0804a216(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 4");
    } while (conditions._104_4_ != 0);
  }
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_75_edges_6(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._104_4_;
  }
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 FUN_0804a26a(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._104_4_;
  }
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_76_edges_6(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("block 3");
    uVar1 = FUN_0804a2be();
    return uVar1;
  }
  puts("block 4");
  if (conditions._104_4_ != 0) {
    uVar1 = FUN_0804a2be();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804a2be(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("block 3");
    uVar1 = FUN_0804a2be();
    return uVar1;
  }
  puts("block 4");
  if (conditions._104_4_ != 0) {
    uVar1 = FUN_0804a2be();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_77_edges_6(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if ((conditions._100_4_ != 0) && (puts("block 4"), conditions._104_4_ == 0)) {
    puts("exit block");
    return 0;
  }
  puts("block 3");
  uVar1 = FUN_0804a312();
  return uVar1;
}



undefined4 FUN_0804a312(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if ((conditions._100_4_ != 0) && (puts("block 4"), conditions._104_4_ == 0)) {
    puts("exit block");
    return 0;
  }
  puts("block 3");
  uVar1 = FUN_0804a312();
  return uVar1;
}



undefined4 test_3_blocks_variant_78_edges_6(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("block 3");
    uVar1 = FUN_0804a366();
    return uVar1;
  }
  do {
    puts("block 4");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_0804a366(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("block 3");
    uVar1 = FUN_0804a366();
    return uVar1;
  }
  do {
    puts("block 4");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_79_edges_6(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ == 0) {
    do {
      puts("block 3");
    } while( true );
  }
  puts("block 4");
  if (conditions._104_4_ != 0) {
    uVar1 = FUN_0804a3ba();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804a3ba(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ == 0) {
    do {
      puts("block 3");
    } while( true );
  }
  puts("block 4");
  if (conditions._104_4_ != 0) {
    uVar1 = FUN_0804a3ba();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_80_edges_6(void)

{
  puts("block 2");
  if ((conditions._100_4_ != 0) && (puts("block 4"), conditions._104_4_ == 0)) {
    puts("exit block");
    return 0;
  }
  do {
    puts("block 3");
  } while( true );
}



undefined4 FUN_0804a40e(void)

{
  puts("block 2");
  if ((conditions._100_4_ != 0) && (puts("block 4"), conditions._104_4_ == 0)) {
    puts("exit block");
    return 0;
  }
  do {
    puts("block 3");
  } while( true );
}



undefined4 test_3_blocks_variant_81_edges_6(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    do {
      puts("block 3");
    } while( true );
  }
  do {
    puts("block 4");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_0804a462(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    do {
      puts("block 3");
    } while( true );
  }
  do {
    puts("block 4");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_82_edges_6(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("block 3");
  }
  puts("block 4");
  if (conditions._104_4_ == 0) {
    puts("exit block");
    return 0;
  }
  uVar1 = FUN_0804a4b6();
  return uVar1;
}



undefined4 FUN_0804a4b6(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("block 3");
  }
  puts("block 4");
  if (conditions._104_4_ == 0) {
    puts("exit block");
    return 0;
  }
  uVar1 = FUN_0804a4b6();
  return uVar1;
}



undefined4 test_3_blocks_variant_83_edges_6(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) goto LAB_0804a522;
  while (puts("block 4"), conditions._104_4_ != 0) {
LAB_0804a522:
    puts("block 3");
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804a50a(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) goto LAB_0804a522;
  while (puts("block 4"), conditions._104_4_ != 0) {
LAB_0804a522:
    puts("block 3");
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_84_edges_6(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("block 3");
  }
  do {
    puts("block 4");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_0804a55e(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("block 3");
  }
  do {
    puts("block 4");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_85_edges_6(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804a59f;
  } while (conditions._104_4_ == 0);
  puts("block 3");
  puts("block 4");
LAB_0804a59f:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804a5b2(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804a59f;
  } while (conditions._104_4_ == 0);
  puts("block 3");
  puts("block 4");
LAB_0804a59f:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_86_edges_6(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  puts("block 3");
  puts("block 4");
  uVar1 = FUN_0804a606();
  return uVar1;
}



undefined4 FUN_0804a606(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  puts("block 3");
  puts("block 4");
  uVar1 = FUN_0804a606();
  return uVar1;
}



undefined4 test_3_blocks_variant_87_edges_6(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
    puts("block 4");
  } while( true );
}



undefined4 FUN_0804a65a(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
    puts("block 4");
  } while( true );
}



undefined4 test_3_blocks_variant_88_edges_6(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  puts("block 3");
  do {
    puts("block 4");
  } while( true );
}



undefined4 FUN_0804a6ae(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  puts("block 3");
  do {
    puts("block 4");
  } while( true );
}



undefined4 test_3_blocks_variant_89_edges_6(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      puts("block 3");
    }
    else {
      puts("block 4");
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804a702(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      puts("block 3");
    }
    else {
      puts("block 4");
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_90_edges_6(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 4");
      uVar1 = FUN_0804a756();
      return uVar1;
    }
    puts("block 3");
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804a756(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 4");
      uVar1 = FUN_0804a756();
      return uVar1;
    }
    puts("block 3");
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_91_edges_6(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 4");
    }
    puts("block 3");
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804a7aa(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 4");
    }
    puts("block 3");
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_92_edges_6(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      do {
        puts("block 4");
      } while( true );
    }
    puts("block 3");
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804a7fe(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      do {
        puts("block 4");
      } while( true );
    }
    puts("block 3");
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_93_edges_6(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  if (conditions._104_4_ != 0) {
    puts("block 4");
    uVar1 = FUN_0804a852();
    return uVar1;
  }
  puts("block 3");
  uVar1 = FUN_0804a852();
  return uVar1;
}



undefined4 FUN_0804a852(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  if (conditions._104_4_ != 0) {
    puts("block 4");
    uVar1 = FUN_0804a852();
    return uVar1;
  }
  puts("block 3");
  uVar1 = FUN_0804a852();
  return uVar1;
}



undefined4 test_3_blocks_variant_94_edges_6(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 4");
    }
    puts("block 3");
    uVar1 = FUN_0804a8a6();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804a8a6(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 4");
    }
    puts("block 3");
    uVar1 = FUN_0804a8a6();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_95_edges_6(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  if (conditions._104_4_ == 0) {
    puts("block 3");
    uVar1 = FUN_0804a8fa();
    return uVar1;
  }
  do {
    puts("block 4");
  } while( true );
}



undefined4 FUN_0804a8fa(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  if (conditions._104_4_ == 0) {
    puts("block 3");
    uVar1 = FUN_0804a8fa();
    return uVar1;
  }
  do {
    puts("block 4");
  } while( true );
}



undefined4 test_3_blocks_variant_96_edges_6(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 4");
    }
    do {
      puts("block 3");
    } while( true );
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804a94e(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 4");
    }
    do {
      puts("block 3");
    } while( true );
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_97_edges_6(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  if (conditions._104_4_ == 0) {
    do {
      puts("block 3");
    } while( true );
  }
  do {
    puts("block 4");
  } while( true );
}



undefined4 FUN_0804a9a2(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  if (conditions._104_4_ == 0) {
    do {
      puts("block 3");
    } while( true );
  }
  do {
    puts("block 4");
  } while( true );
}



undefined4 test_3_blocks_variant_98_edges_6(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  if (conditions._104_4_ == 0) goto LAB_0804aa17;
  do {
    puts("block 4");
LAB_0804aa17:
    puts("block 3");
  } while( true );
}



undefined4 FUN_0804a9f6(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  if (conditions._104_4_ == 0) goto LAB_0804aa17;
  do {
    puts("block 4");
LAB_0804aa17:
    puts("block 3");
  } while( true );
}



undefined4 test_3_blocks_variant_99_edges_6(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) {
    puts("block 3");
  }
  else {
    puts("block 4");
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804aa4a(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) {
    puts("block 3");
  }
  else {
    puts("block 4");
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_100_edges_6(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ != 0) {
    puts("block 4");
    uVar1 = FUN_0804aa9e();
    return uVar1;
  }
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 FUN_0804aa9e(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ != 0) {
    puts("block 4");
    uVar1 = FUN_0804aa9e();
    return uVar1;
  }
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_101_edges_6(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ != 0) {
    puts("block 4");
  }
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 FUN_0804aaf2(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ != 0) {
    puts("block 4");
  }
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_102_edges_6(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) {
    puts("block 3");
    puts("exit block");
    return 0;
  }
  do {
    puts("block 4");
  } while( true );
}



undefined4 FUN_0804ab46(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) {
    puts("block 3");
    puts("exit block");
    return 0;
  }
  do {
    puts("block 4");
  } while( true );
}



undefined4 test_3_blocks_variant_103_edges_7(void)

{
FUN_0804ab9a:
  puts("block 2");
  do {
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._104_4_ == 0) goto FUN_0804ab9a;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0804ab9a(void)

{
code_r0x0804ab9a:
  puts("block 2");
  do {
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._104_4_ == 0) goto code_r0x0804ab9a;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_104_edges_7(void)

{
  do {
    puts("block 2");
    do {
      puts("block 3");
      if ((conditions._100_4_ == 0) || (puts("block 4"), conditions._104_4_ == 0)) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0804abf7(void)

{
  do {
    puts("block 2");
    do {
      puts("block 3");
      if ((conditions._100_4_ == 0) || (puts("block 4"), conditions._104_4_ == 0)) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_105_edges_7(void)

{
  while( true ) {
    puts("block 2");
    puts("block 3");
    if (conditions._100_4_ == 0) break;
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) goto LAB_0804ac41;
    } while (conditions._108_4_ != 0);
  }
LAB_0804ac41:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804ac54(void)

{
  while( true ) {
    puts("block 2");
    puts("block 3");
    if (conditions._100_4_ == 0) break;
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) goto LAB_0804ac41;
    } while (conditions._108_4_ != 0);
  }
LAB_0804ac41:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_106_edges_7(void)

{
  puts("block 2");
  while (puts("block 3"), conditions._100_4_ != 0) {
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) goto LAB_0804ac9e;
    } while (conditions._108_4_ != 0);
  }
LAB_0804ac9e:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804acb1(void)

{
  puts("block 2");
  while (puts("block 3"), conditions._100_4_ != 0) {
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) goto LAB_0804ac9e;
    } while (conditions._108_4_ != 0);
  }
LAB_0804ac9e:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_107_edges_7(void)

{
FUN_0804ad0e:
  puts("block 2");
  do {
    puts("block 3");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) goto FUN_0804ad0e;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0804ad0e(void)

{
code_r0x0804ad0e:
  puts("block 2");
  do {
    puts("block 3");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) goto code_r0x0804ad0e;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_108_edges_7(void)

{
  do {
    puts("block 2");
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) break;
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0804ad6b(void)

{
  do {
    puts("block 2");
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) break;
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_109_edges_7(void)

{
  do {
    do {
      puts("block 2");
      puts("block 3");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0804adc8(void)

{
  do {
    do {
      puts("block 2");
      puts("block 3");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_110_edges_7(void)

{
  do {
    puts("block 2");
    while (puts("block 3"), conditions._100_4_ != 0) {
      do {
        puts("block 4");
        if (conditions._104_4_ == 0) {
          puts("exit block");
          return 0;
        }
      } while (conditions._108_4_ != 0);
    }
  } while( true );
}



undefined4 FUN_0804ae25(void)

{
  do {
    puts("block 2");
    while (puts("block 3"), conditions._100_4_ != 0) {
      do {
        puts("block 4");
        if (conditions._104_4_ == 0) {
          puts("exit block");
          return 0;
        }
      } while (conditions._108_4_ != 0);
    }
  } while( true );
}



undefined4 test_3_blocks_variant_111_edges_7(void)

{
  do {
    puts("block 2");
    do {
      do {
        puts("block 3");
      } while (conditions._100_4_ == 0);
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0804ae82(void)

{
  do {
    puts("block 2");
    do {
      do {
        puts("block 3");
      } while (conditions._100_4_ == 0);
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_112_edges_7(void)

{
  do {
    puts("block 2");
    do {
      puts("block 3");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0804aedf(void)

{
  do {
    puts("block 2");
    do {
      puts("block 3");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_113_edges_7(void)

{
  puts("block 2");
  do {
    do {
      puts("block 3");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0804af3c(void)

{
  puts("block 2");
  do {
    do {
      puts("block 3");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_114_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    puts("block 3");
    if (conditions._100_4_ == 0) goto LAB_0804af86;
  } while (conditions._104_4_ == 0);
  puts("block 4");
  if (conditions._108_4_ != 0) {
    uVar1 = FUN_0804af99();
    return uVar1;
  }
LAB_0804af86:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804af99(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    puts("block 3");
    if (conditions._100_4_ == 0) goto LAB_0804af86;
  } while (conditions._104_4_ == 0);
  puts("block 4");
  if (conditions._108_4_ != 0) {
    uVar1 = FUN_0804af99();
    return uVar1;
  }
LAB_0804af86:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_115_edges_7(void)

{
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) goto LAB_0804afe3;
      if (conditions._104_4_ == 0) break;
      puts("block 4");
      if (conditions._108_4_ == 0) {
LAB_0804afe3:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_0804aff6(void)

{
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) goto LAB_0804afe3;
      if (conditions._104_4_ == 0) break;
      puts("block 4");
      if (conditions._108_4_ == 0) {
LAB_0804afe3:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_116_edges_7(void)

{
  do {
    puts("block 2");
    puts("block 3");
    if (conditions._100_4_ == 0) goto LAB_0804b040;
  } while (conditions._104_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._108_4_ != 0);
LAB_0804b040:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804b053(void)

{
  do {
    puts("block 2");
    puts("block 3");
    if (conditions._100_4_ == 0) goto LAB_0804b040;
  } while (conditions._104_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._108_4_ != 0);
LAB_0804b040:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_117_edges_7(void)

{
  do {
    puts("block 2");
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while ((conditions._104_4_ != 0) && (puts("block 4"), conditions._108_4_ != 0));
  } while( true );
}



undefined4 FUN_0804b0b0(void)

{
  do {
    puts("block 2");
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while ((conditions._104_4_ != 0) && (puts("block 4"), conditions._108_4_ != 0));
  } while( true );
}



undefined4 test_3_blocks_variant_118_edges_7(void)

{
  int iVar1;
  
  while( true ) {
    puts("block 2");
    puts("block 3");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) break;
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._108_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804b10d(void)

{
  int iVar1;
  
  while( true ) {
    puts("block 2");
    puts("block 3");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) break;
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._108_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_119_edges_7(void)

{
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._104_4_ == 0) break;
      do {
        puts("block 4");
      } while (conditions._108_4_ != 0);
    }
  } while( true );
}



undefined4 FUN_0804b16a(void)

{
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._104_4_ == 0) break;
      do {
        puts("block 4");
      } while (conditions._108_4_ != 0);
    }
  } while( true );
}



undefined4 test_3_blocks_variant_120_edges_7(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  do {
    puts("block 3");
    if (conditions._100_4_ == 0) goto LAB_0804b1b4;
  } while (conditions._104_4_ == 0);
  puts("block 4");
  if (conditions._108_4_ != 0) {
    uVar1 = FUN_0804b1c7();
    return uVar1;
  }
LAB_0804b1b4:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804b1c7(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  do {
    puts("block 3");
    if (conditions._100_4_ == 0) goto LAB_0804b1b4;
  } while (conditions._104_4_ == 0);
  puts("block 4");
  if (conditions._108_4_ != 0) {
    uVar1 = FUN_0804b1c7();
    return uVar1;
  }
LAB_0804b1b4:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_121_edges_7(void)

{
  puts("block 2");
  do {
    puts("block 3");
    if (conditions._100_4_ == 0) break;
  } while ((conditions._104_4_ == 0) || (puts("block 4"), conditions._108_4_ != 0));
  puts("exit block");
  return 0;
}



undefined4 FUN_0804b224(void)

{
  puts("block 2");
  do {
    puts("block 3");
    if (conditions._100_4_ == 0) break;
  } while ((conditions._104_4_ == 0) || (puts("block 4"), conditions._108_4_ != 0));
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_122_edges_7(void)

{
  puts("block 2");
  do {
    puts("block 3");
    if (conditions._100_4_ == 0) goto LAB_0804b26e;
  } while (conditions._104_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._108_4_ != 0);
LAB_0804b26e:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804b281(void)

{
  puts("block 2");
  do {
    puts("block 3");
    if (conditions._100_4_ == 0) goto LAB_0804b26e;
  } while (conditions._104_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._108_4_ != 0);
LAB_0804b26e:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_123_edges_7(void)

{
  do {
    puts("block 2");
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while ((conditions._104_4_ == 0) || (puts("block 4"), conditions._108_4_ != 0));
  } while( true );
}



undefined4 FUN_0804b2de(void)

{
  do {
    puts("block 2");
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while ((conditions._104_4_ == 0) || (puts("block 4"), conditions._108_4_ != 0));
  } while( true );
}



undefined4 test_3_blocks_variant_124_edges_7(void)

{
  do {
    puts("block 2");
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0804b33b(void)

{
  do {
    puts("block 2");
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_125_edges_7(void)

{
  int iVar1;
  
  puts("block 2");
  while (puts("block 3"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._108_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804b398(void)

{
  int iVar1;
  
  puts("block 2");
  while (puts("block 3"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._108_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_126_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) break;
      if (conditions._104_4_ != 0) {
        puts("block 4");
        if (conditions._108_4_ != 0) {
          uVar1 = FUN_0804b3f5();
          return uVar1;
        }
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_0804b3f5(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) break;
      if (conditions._104_4_ != 0) {
        puts("block 4");
        if (conditions._108_4_ != 0) {
          uVar1 = FUN_0804b3f5();
          return uVar1;
        }
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_127_edges_7(void)

{
  do {
    puts("block 2");
    while (puts("block 3"), conditions._100_4_ != 0) {
      if ((conditions._104_4_ != 0) && (puts("block 4"), conditions._108_4_ == 0)) {
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_0804b452(void)

{
  do {
    puts("block 2");
    while (puts("block 3"), conditions._100_4_ != 0) {
      if ((conditions._104_4_ != 0) && (puts("block 4"), conditions._108_4_ == 0)) {
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_128_edges_7(void)

{
  do {
    puts("block 2");
    while (puts("block 3"), conditions._100_4_ != 0) {
      if (conditions._104_4_ != 0) {
        do {
          puts("block 4");
        } while (conditions._108_4_ != 0);
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_0804b4af(void)

{
  do {
    puts("block 2");
    while (puts("block 3"), conditions._100_4_ != 0) {
      if (conditions._104_4_ != 0) {
        do {
          puts("block 4");
        } while (conditions._108_4_ != 0);
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_129_edges_7(void)

{
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) goto LAB_0804b4f9;
      if (conditions._104_4_ == 0) break;
      if (conditions._108_4_ != 0) {
        puts("block 4");
LAB_0804b4f9:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_0804b50c(void)

{
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) goto LAB_0804b4f9;
      if (conditions._104_4_ == 0) break;
      if (conditions._108_4_ != 0) {
        puts("block 4");
LAB_0804b4f9:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_130_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._104_4_ == 0) break;
      if (conditions._108_4_ != 0) {
        puts("block 4");
        uVar1 = FUN_0804b569();
        return uVar1;
      }
    }
  } while( true );
}



undefined4 FUN_0804b569(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._104_4_ == 0) break;
      if (conditions._108_4_ != 0) {
        puts("block 4");
        uVar1 = FUN_0804b569();
        return uVar1;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_131_edges_7(void)

{
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._104_4_ == 0) break;
      if (conditions._108_4_ != 0) {
        puts("block 4");
      }
    }
  } while( true );
}



undefined4 FUN_0804b5c6(void)

{
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._104_4_ == 0) break;
      if (conditions._108_4_ != 0) {
        puts("block 4");
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_132_edges_7(void)

{
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._104_4_ == 0) break;
      if (conditions._108_4_ != 0) {
        do {
          puts("block 4");
        } while( true );
      }
    }
  } while( true );
}



undefined4 FUN_0804b623(void)

{
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._104_4_ == 0) break;
      if (conditions._108_4_ != 0) {
        do {
          puts("block 4");
        } while( true );
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_133_edges_7(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
      puts("block 4");
      if (conditions._104_4_ == 0) goto LAB_0804b66d;
    } while (conditions._108_4_ != 0);
  }
LAB_0804b66d:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804b680(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
      puts("block 4");
      if (conditions._104_4_ == 0) goto LAB_0804b66d;
    } while (conditions._108_4_ != 0);
  }
LAB_0804b66d:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_134_edges_7(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) goto LAB_0804b6ca;
    } while (conditions._108_4_ != 0);
  }
LAB_0804b6ca:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804b6dd(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) goto LAB_0804b6ca;
    } while (conditions._108_4_ != 0);
  }
LAB_0804b6ca:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_135_edges_7(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
LAB_0804b727:
    puts("exit block");
    return 0;
  }
  do {
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) goto LAB_0804b727;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0804b73a(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
LAB_0804b727:
    puts("exit block");
    return 0;
  }
  do {
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) goto LAB_0804b727;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_136_edges_7(void)

{
FUN_0804b797:
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  do {
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) goto FUN_0804b797;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0804b797(void)

{
code_r0x0804b797:
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  do {
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) goto code_r0x0804b797;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_137_edges_7(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 3");
    if (conditions._104_4_ != 0) {
      puts("block 4");
      if (conditions._108_4_ != 0) {
        uVar1 = FUN_0804b7f4();
        return uVar1;
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804b7f4(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 3");
    if (conditions._104_4_ != 0) {
      puts("block 4");
      if (conditions._108_4_ != 0) {
        uVar1 = FUN_0804b7f4();
        return uVar1;
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_138_edges_7(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  while ((iVar1 != 0 && (puts("block 3"), conditions._104_4_ != 0))) {
    puts("block 4");
    iVar1 = conditions._108_4_;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804b851(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  while ((iVar1 != 0 && (puts("block 3"), conditions._104_4_ != 0))) {
    puts("block 4");
    iVar1 = conditions._108_4_;
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_139_edges_7(void)

{
  int iVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 3");
    iVar1 = conditions._104_4_;
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._108_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804b8ae(void)

{
  int iVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    puts("block 3");
    iVar1 = conditions._104_4_;
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._108_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_140_edges_7(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0804b8f8;
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
LAB_0804b8f8:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804b90b(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0804b8f8;
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
LAB_0804b8f8:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_141_edges_7(void)

{
  while ((puts("block 2"), conditions._100_4_ != 0 && (puts("block 3"), conditions._104_4_ != 0))) {
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804b968(void)

{
  while ((puts("block 2"), conditions._100_4_ != 0 && (puts("block 3"), conditions._104_4_ != 0))) {
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_142_edges_7(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      do {
        puts("block 4");
      } while (conditions._108_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804b9c5(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      do {
        puts("block 4");
      } while (conditions._108_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_143_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804ba0f;
    puts("block 3");
  } while (conditions._104_4_ == 0);
  puts("block 4");
  if (conditions._108_4_ != 0) {
    uVar1 = FUN_0804ba22();
    return uVar1;
  }
LAB_0804ba0f:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804ba22(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804ba0f;
    puts("block 3");
  } while (conditions._104_4_ == 0);
  puts("block 4");
  if (conditions._108_4_ != 0) {
    uVar1 = FUN_0804ba22();
    return uVar1;
  }
LAB_0804ba0f:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_144_edges_7(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_0804ba6c;
    }
  }
LAB_0804ba6c:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804ba7f(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_0804ba6c;
    }
  }
LAB_0804ba6c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_145_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804bac9;
    puts("block 3");
  } while (conditions._104_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._108_4_ != 0);
LAB_0804bac9:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804badc(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804bac9;
    puts("block 3");
  } while (conditions._104_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._108_4_ != 0);
LAB_0804bac9:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_146_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) break;
      puts("block 4");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0804bb39(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) break;
      puts("block 4");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_147_edges_7(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    puts("block 3");
    iVar1 = conditions._104_4_;
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._108_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804bb96(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    puts("block 3");
    iVar1 = conditions._104_4_;
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._108_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_148_edges_7(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      do {
        puts("block 4");
      } while (conditions._108_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804bbf3(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      do {
        puts("block 4");
      } while (conditions._108_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_149_edges_7(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    puts("block 4");
    if (conditions._108_4_ != 0) {
      uVar1 = FUN_0804bc50();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804bc50(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    puts("block 4");
    if (conditions._108_4_ != 0) {
      uVar1 = FUN_0804bc50();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_150_edges_7(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  while (iVar1 != 0) {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    puts("block 4");
    iVar1 = conditions._108_4_;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804bcad(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  while (iVar1 != 0) {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    puts("block 4");
    iVar1 = conditions._108_4_;
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_151_edges_7(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804bd0a(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_152_edges_7(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      do {
        puts("block 3");
      } while (conditions._104_4_ == 0);
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804bd67(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      do {
        puts("block 3");
      } while (conditions._104_4_ == 0);
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_153_edges_7(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804bdc4(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_154_edges_7(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  do {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0804be21(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  do {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_155_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804be6b;
    puts("block 3");
    if (conditions._104_4_ == 0) goto LAB_0804be6b;
  } while (conditions._108_4_ == 0);
  puts("block 4");
LAB_0804be6b:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804be7e(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804be6b;
    puts("block 3");
    if (conditions._104_4_ == 0) goto LAB_0804be6b;
  } while (conditions._108_4_ == 0);
  puts("block 4");
LAB_0804be6b:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_156_edges_7(void)

{
  undefined4 uVar1;
  
  while( true ) {
    puts("block 2");
    if (conditions._100_4_ == 0) break;
    puts("block 3");
    if (conditions._104_4_ == 0) break;
    if (conditions._108_4_ != 0) {
      puts("block 4");
      uVar1 = FUN_0804bedb();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804bedb(void)

{
  undefined4 uVar1;
  
  while( true ) {
    puts("block 2");
    if (conditions._100_4_ == 0) break;
    puts("block 3");
    if (conditions._104_4_ == 0) break;
    if (conditions._108_4_ != 0) {
      puts("block 4");
      uVar1 = FUN_0804bedb();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_157_edges_7(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0804bf25;
      if (conditions._108_4_ == 0) break;
      puts("block 4");
    }
  }
LAB_0804bf25:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804bf38(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0804bf25;
      if (conditions._108_4_ == 0) break;
      puts("block 4");
    }
  }
LAB_0804bf25:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_158_edges_7(void)

{
  while ((puts("block 2"), conditions._100_4_ != 0 && (puts("block 3"), conditions._104_4_ != 0))) {
    if (conditions._108_4_ != 0) {
      do {
        puts("block 4");
      } while( true );
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804bf95(void)

{
  while ((puts("block 2"), conditions._100_4_ != 0 && (puts("block 3"), conditions._104_4_ != 0))) {
    if (conditions._108_4_ != 0) {
      do {
        puts("block 4");
      } while( true );
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_159_edges_7(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0804bfdf;
    } while (conditions._108_4_ == 0);
    puts("block 4");
  }
LAB_0804bfdf:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804bff2(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0804bfdf;
    } while (conditions._108_4_ == 0);
    puts("block 4");
  }
LAB_0804bfdf:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_160_edges_7(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) {
        puts("block 4");
        uVar1 = FUN_0804c04f();
        return uVar1;
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804c04f(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) {
        puts("block 4");
        uVar1 = FUN_0804c04f();
        return uVar1;
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_161_edges_7(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) {
        puts("block 4");
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804c0ac(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) {
        puts("block 4");
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_162_edges_7(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) {
        do {
          puts("block 4");
        } while( true );
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804c109(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) {
        do {
          puts("block 4");
        } while( true );
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_163_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0804c153:
      puts("exit block");
      return 0;
    }
    while (puts("block 3"), conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) {
        puts("block 4");
        goto LAB_0804c153;
      }
    }
  } while( true );
}



undefined4 FUN_0804c166(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0804c153:
      puts("exit block");
      return 0;
    }
    while (puts("block 3"), conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) {
        puts("block 4");
        goto LAB_0804c153;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_164_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    while (puts("block 3"), conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) {
        puts("block 4");
        uVar1 = FUN_0804c1c3();
        return uVar1;
      }
    }
  } while( true );
}



undefined4 FUN_0804c1c3(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    while (puts("block 3"), conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) {
        puts("block 4");
        uVar1 = FUN_0804c1c3();
        return uVar1;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_165_edges_7(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) {
        puts("block 4");
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804c220(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) {
        puts("block 4");
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_166_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    while (puts("block 3"), conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) {
        do {
          puts("block 4");
        } while( true );
      }
    }
  } while( true );
}



undefined4 FUN_0804c27d(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    while (puts("block 3"), conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) {
        do {
          puts("block 4");
        } while( true );
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_167_edges_7(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0804c2da(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_168_edges_7(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0804c337(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_169_edges_7(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0804c394(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_170_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  puts("block 3");
  if (conditions._104_4_ != 0) {
    puts("block 4");
    if (conditions._108_4_ != 0) {
      uVar1 = FUN_0804c3f1();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804c3f1(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  puts("block 3");
  if (conditions._104_4_ != 0) {
    puts("block 4");
    if (conditions._108_4_ != 0) {
      uVar1 = FUN_0804c3f1();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_171_edges_7(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) break;
    puts("block 4");
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_0804c44e(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) break;
    puts("block 4");
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_172_edges_7(void)

{
  int iVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  puts("block 3");
  iVar1 = conditions._104_4_;
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._108_4_;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804c4ab(void)

{
  int iVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  puts("block 3");
  iVar1 = conditions._104_4_;
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._108_4_;
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_173_edges_7(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      puts("block 4");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0804c508(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      puts("block 4");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_174_edges_7(void)

{
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
    if (conditions._104_4_ == 0) break;
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804c565(void)

{
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
    if (conditions._104_4_ == 0) break;
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_175_edges_7(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  while (puts("block 3"), conditions._104_4_ != 0) {
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804c5c2(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  while (puts("block 3"), conditions._104_4_ != 0) {
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_176_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
  } while (conditions._104_4_ == 0);
  puts("block 4");
  if (conditions._108_4_ != 0) {
    uVar1 = FUN_0804c61f();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804c61f(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
  } while (conditions._104_4_ == 0);
  puts("block 4");
  if (conditions._108_4_ != 0) {
    uVar1 = FUN_0804c61f();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_177_edges_7(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while (puts("block 3"), conditions._104_4_ != 0) {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_0804c67c(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while (puts("block 3"), conditions._104_4_ != 0) {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_178_edges_7(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
  } while (conditions._104_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_0804c6d9(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
  } while (conditions._104_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_179_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._104_4_ == 0);
  puts("block 4");
  if (conditions._108_4_ == 0) {
    puts("exit block");
    return 0;
  }
  uVar1 = FUN_0804c736();
  return uVar1;
}



undefined4 FUN_0804c736(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._104_4_ == 0);
  puts("block 4");
  if (conditions._108_4_ == 0) {
    puts("exit block");
    return 0;
  }
  uVar1 = FUN_0804c736();
  return uVar1;
}



undefined4 test_3_blocks_variant_180_edges_7(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    puts("block 4");
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_0804c793(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    puts("block 4");
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_181_edges_7(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._104_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_0804c7f0(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._104_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_182_edges_7(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
    if (conditions._104_4_ == 0) goto LAB_0804c83a;
  } while (conditions._108_4_ == 0);
  puts("block 4");
LAB_0804c83a:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804c84d(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
    if (conditions._104_4_ == 0) goto LAB_0804c83a;
  } while (conditions._108_4_ == 0);
  puts("block 4");
LAB_0804c83a:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_183_edges_7(void)

{
  undefined4 uVar1;
  
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
    if (conditions._104_4_ == 0) break;
    if (conditions._108_4_ != 0) {
      puts("block 4");
      uVar1 = FUN_0804c8aa();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804c8aa(void)

{
  undefined4 uVar1;
  
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
    if (conditions._104_4_ == 0) break;
    if (conditions._108_4_ != 0) {
      puts("block 4");
      uVar1 = FUN_0804c8aa();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_184_edges_7(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) break;
      puts("block 4");
    }
  } while( true );
}



undefined4 FUN_0804c907(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) break;
      puts("block 4");
    }
  } while( true );
}



undefined4 test_3_blocks_variant_185_edges_7(void)

{
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
    if (conditions._104_4_ == 0) break;
    if (conditions._108_4_ != 0) {
      do {
        puts("block 4");
      } while( true );
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804c964(void)

{
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
    if (conditions._104_4_ == 0) break;
    if (conditions._108_4_ != 0) {
      do {
        puts("block 4");
      } while( true );
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_186_edges_7(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) goto LAB_0804c9ae;
  } while (conditions._108_4_ == 0);
  puts("block 4");
LAB_0804c9ae:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804c9c1(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) goto LAB_0804c9ae;
  } while (conditions._108_4_ == 0);
  puts("block 4");
LAB_0804c9ae:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_187_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._108_4_ == 0);
  puts("block 4");
  uVar1 = FUN_0804ca1e();
  return uVar1;
}



undefined4 FUN_0804ca1e(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._108_4_ == 0);
  puts("block 4");
  uVar1 = FUN_0804ca1e();
  return uVar1;
}



undefined4 test_3_blocks_variant_188_edges_7(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  while (puts("block 3"), conditions._104_4_ != 0) {
    if (conditions._108_4_ != 0) {
      puts("block 4");
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804ca7b(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  while (puts("block 3"), conditions._104_4_ != 0) {
    if (conditions._108_4_ != 0) {
      puts("block 4");
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_189_edges_7(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._108_4_ == 0);
  do {
    puts("block 4");
  } while( true );
}



undefined4 FUN_0804cad8(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._108_4_ == 0);
  do {
    puts("block 4");
  } while( true );
}



undefined4 test_3_blocks_variant_190_edges_7(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while (puts("block 3"), conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) {
        puts("block 4");
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_0804cb35(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while (puts("block 3"), conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) {
        puts("block 4");
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_191_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) break;
    puts("block 4");
    if (conditions._104_4_ == 0) goto LAB_0804cb7f;
  } while (conditions._108_4_ == 0);
  puts("block 3");
LAB_0804cb7f:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804cb92(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) break;
    puts("block 4");
    if (conditions._104_4_ == 0) goto LAB_0804cb7f;
  } while (conditions._108_4_ == 0);
  puts("block 3");
LAB_0804cb7f:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_192_edges_7(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) goto LAB_0804cbdc;
    } while (conditions._108_4_ != 0);
  }
  puts("block 3");
LAB_0804cbdc:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804cbef(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) goto LAB_0804cbdc;
    } while (conditions._108_4_ != 0);
  }
  puts("block 3");
LAB_0804cbdc:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_193_edges_7(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  do {
    if (iVar1 == 0) {
      puts("block 3");
      break;
    }
    puts("block 4");
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_0804cc4c(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  do {
    if (iVar1 == 0) {
      puts("block 3");
      break;
    }
    puts("block 4");
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_194_edges_7(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while (puts("block 4"), conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) goto LAB_0804cc96;
    }
  }
LAB_0804cc96:
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 FUN_0804cca9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while (puts("block 4"), conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) goto LAB_0804cc96;
    }
  }
LAB_0804cc96:
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_195_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) break;
    puts("block 4");
    if (conditions._104_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._108_4_ == 0);
  puts("block 3");
  uVar1 = FUN_0804cd06();
  return uVar1;
}



undefined4 FUN_0804cd06(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) break;
    puts("block 4");
    if (conditions._104_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._108_4_ == 0);
  puts("block 3");
  uVar1 = FUN_0804cd06();
  return uVar1;
}



undefined4 test_3_blocks_variant_196_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("block 3");
      uVar1 = FUN_0804cd63();
      return uVar1;
    }
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0804cd63(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("block 3");
      uVar1 = FUN_0804cd63();
      return uVar1;
    }
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_197_edges_7(void)

{
  int iVar1;
  undefined4 uVar2;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  do {
    if (iVar1 == 0) {
      puts("block 3");
      uVar2 = FUN_0804cdc0();
      return uVar2;
    }
    puts("block 4");
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_0804cdc0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  do {
    if (iVar1 == 0) {
      puts("block 3");
      uVar2 = FUN_0804cdc0();
      return uVar2;
    }
    puts("block 4");
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_198_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) break;
    puts("block 4");
    if (conditions._104_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._108_4_ == 0);
  do {
    puts("block 3");
  } while( true );
}



undefined4 FUN_0804ce1d(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) break;
    puts("block 4");
    if (conditions._104_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._108_4_ == 0);
  do {
    puts("block 3");
  } while( true );
}



undefined4 test_3_blocks_variant_199_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      do {
        puts("block 3");
      } while( true );
    }
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0804ce7a(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      do {
        puts("block 3");
      } while( true );
    }
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_200_edges_7(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  do {
    if (iVar1 == 0) {
      do {
        puts("block 3");
      } while( true );
    }
    puts("block 4");
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_0804ced7(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  do {
    if (iVar1 == 0) {
      do {
        puts("block 3");
      } while( true );
    }
    puts("block 4");
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_201_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804cf4c;
    while( true ) {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) break;
LAB_0804cf4c:
      puts("block 3");
    }
  } while( true );
}



undefined4 FUN_0804cf34(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804cf4c;
    while( true ) {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) break;
LAB_0804cf4c:
      puts("block 3");
    }
  } while( true );
}



undefined4 test_3_blocks_variant_202_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("block 3");
    }
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0804cf91(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("block 3");
    }
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_203_edges_7(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  do {
    if (iVar1 == 0) {
      puts("block 3");
    }
    puts("block 4");
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_0804cfee(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  do {
    if (iVar1 == 0) {
      puts("block 3");
    }
    puts("block 4");
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_204_edges_7(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("block 3");
    if (conditions._104_4_ != 0) {
      uVar1 = FUN_0804d04b();
      return uVar1;
    }
  }
  else {
    puts("block 4");
    if (conditions._108_4_ != 0) {
      uVar1 = FUN_0804d04b();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804d04b(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("block 3");
    if (conditions._104_4_ != 0) {
      uVar1 = FUN_0804d04b();
      return uVar1;
    }
  }
  else {
    puts("block 4");
    if (conditions._108_4_ != 0) {
      uVar1 = FUN_0804d04b();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_205_edges_7(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (((conditions._100_4_ == 0) || (puts("block 4"), conditions._108_4_ != 0)) &&
     (puts("block 3"), conditions._104_4_ != 0)) {
    uVar1 = FUN_0804d0a8();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804d0a8(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (((conditions._100_4_ == 0) || (puts("block 4"), conditions._108_4_ != 0)) &&
     (puts("block 3"), conditions._104_4_ != 0)) {
    uVar1 = FUN_0804d0a8();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_206_edges_7(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("block 3");
    if (conditions._104_4_ != 0) {
      uVar1 = FUN_0804d105();
      return uVar1;
    }
  }
  else {
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804d105(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("block 3");
    if (conditions._104_4_ != 0) {
      uVar1 = FUN_0804d105();
      return uVar1;
    }
  }
  else {
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_207_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) break;
    puts("block 4");
  } while (conditions._108_4_ == 0);
  puts("block 3");
  if (conditions._104_4_ == 0) {
    puts("exit block");
    return 0;
  }
  uVar1 = FUN_0804d162();
  return uVar1;
}



undefined4 FUN_0804d162(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) break;
    puts("block 4");
  } while (conditions._108_4_ == 0);
  puts("block 3");
  if (conditions._104_4_ == 0) {
    puts("exit block");
    return 0;
  }
  uVar1 = FUN_0804d162();
  return uVar1;
}



undefined4 test_3_blocks_variant_208_edges_7(void)

{
  undefined4 uVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("block 3");
  if (conditions._104_4_ == 0) {
    puts("exit block");
    return 0;
  }
  uVar1 = FUN_0804d1bf();
  return uVar1;
}



undefined4 FUN_0804d1bf(void)

{
  undefined4 uVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("block 3");
  if (conditions._104_4_ == 0) {
    puts("exit block");
    return 0;
  }
  uVar1 = FUN_0804d1bf();
  return uVar1;
}



undefined4 test_3_blocks_variant_209_edges_7(void)

{
  int iVar1;
  undefined4 uVar2;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._108_4_;
  }
  puts("block 3");
  if (conditions._104_4_ != 0) {
    uVar2 = FUN_0804d21c();
    return uVar2;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804d21c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._108_4_;
  }
  puts("block 3");
  if (conditions._104_4_ != 0) {
    uVar2 = FUN_0804d21c();
    return uVar2;
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_210_edges_7(void)

{
  int iVar1;
  
  puts("block 2");
  if (conditions._100_4_ == 0) goto LAB_0804d291;
  puts("block 4");
  iVar1 = conditions._108_4_;
  while (iVar1 != 0) {
LAB_0804d291:
    puts("block 3");
    iVar1 = conditions._104_4_;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804d279(void)

{
  int iVar1;
  
  puts("block 2");
  if (conditions._100_4_ == 0) goto LAB_0804d291;
  puts("block 4");
  iVar1 = conditions._108_4_;
  while (iVar1 != 0) {
LAB_0804d291:
    puts("block 3");
    iVar1 = conditions._104_4_;
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_211_edges_7(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    do {
      puts("block 3");
    } while (conditions._104_4_ != 0);
  }
  else {
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804d2d6(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    do {
      puts("block 3");
    } while (conditions._104_4_ != 0);
  }
  else {
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_212_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) break;
    puts("block 4");
  } while (conditions._108_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_0804d333(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) break;
    puts("block 4");
  } while (conditions._108_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_213_edges_7(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  do {
    puts("block 3");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_0804d390(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  do {
    puts("block 3");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_214_edges_7(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._108_4_;
  }
  do {
    puts("block 3");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_0804d3ed(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._108_4_;
  }
  do {
    puts("block 3");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_215_edges_7(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) goto LAB_0804d462;
  do {
    puts("block 4");
    if (conditions._108_4_ == 0) break;
LAB_0804d462:
    puts("block 3");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_0804d44a(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) goto LAB_0804d462;
  do {
    puts("block 4");
    if (conditions._108_4_ == 0) break;
LAB_0804d462:
    puts("block 3");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_216_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804d4bf;
    while (puts("block 4"), conditions._108_4_ != 0) {
LAB_0804d4bf:
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_0804d4a7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804d4bf;
    while (puts("block 4"), conditions._108_4_ != 0) {
LAB_0804d4bf:
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_217_edges_7(void)

{
  while ((puts("block 2"), conditions._100_4_ != 0 || (puts("block 3"), conditions._104_4_ != 0))) {
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804d504(void)

{
  while ((puts("block 2"), conditions._100_4_ != 0 || (puts("block 3"), conditions._104_4_ != 0))) {
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_218_edges_7(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) goto LAB_0804d579;
  do {
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
LAB_0804d579:
    puts("block 3");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_0804d561(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) goto LAB_0804d579;
  do {
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
LAB_0804d579:
    puts("block 3");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_219_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804d5ab;
  } while (conditions._104_4_ == 0);
  puts("block 3");
  puts("block 4");
  if (conditions._108_4_ != 0) {
    uVar1 = FUN_0804d5be();
    return uVar1;
  }
LAB_0804d5ab:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804d5be(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804d5ab;
  } while (conditions._104_4_ == 0);
  puts("block 3");
  puts("block 4");
  if (conditions._108_4_ != 0) {
    uVar1 = FUN_0804d5be();
    return uVar1;
  }
LAB_0804d5ab:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_220_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804d608;
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
    puts("block 4");
  } while (conditions._108_4_ != 0);
LAB_0804d608:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804d61b(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804d608;
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
    puts("block 4");
  } while (conditions._108_4_ != 0);
LAB_0804d608:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_221_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804d665;
  } while (conditions._104_4_ == 0);
  puts("block 3");
  do {
    puts("block 4");
  } while (conditions._108_4_ != 0);
LAB_0804d665:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804d678(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804d665;
  } while (conditions._104_4_ == 0);
  puts("block 3");
  do {
    puts("block 4");
  } while (conditions._108_4_ != 0);
LAB_0804d665:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_222_edges_7(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 3");
      puts("block 4");
      iVar1 = conditions._108_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804d6d5(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 3");
      puts("block 4");
      iVar1 = conditions._108_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_223_edges_7(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 3");
      do {
        puts("block 4");
      } while (conditions._108_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804d732(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 3");
      do {
        puts("block 4");
      } while (conditions._108_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_224_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0804d78f(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_225_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804d7d9;
  } while (conditions._104_4_ == 0);
  puts("block 3");
  if (conditions._108_4_ != 0) {
    puts("block 4");
  }
LAB_0804d7d9:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804d7ec(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804d7d9;
  } while (conditions._104_4_ == 0);
  puts("block 3");
  if (conditions._108_4_ != 0) {
    puts("block 4");
  }
LAB_0804d7d9:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_226_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804d836;
  } while (conditions._104_4_ == 0);
  puts("block 3");
  if (conditions._108_4_ != 0) {
    puts("block 4");
    uVar1 = FUN_0804d849();
    return uVar1;
  }
LAB_0804d836:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804d849(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804d836;
  } while (conditions._104_4_ == 0);
  puts("block 3");
  if (conditions._108_4_ != 0) {
    puts("block 4");
    uVar1 = FUN_0804d849();
    return uVar1;
  }
LAB_0804d836:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_227_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804d893;
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), conditions._108_4_ != 0) {
    puts("block 4");
  }
LAB_0804d893:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804d8a6(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804d893;
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), conditions._108_4_ != 0) {
    puts("block 4");
  }
LAB_0804d893:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_228_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804d8f0;
  } while (conditions._104_4_ == 0);
  puts("block 3");
  if (conditions._108_4_ != 0) {
    do {
      puts("block 4");
    } while( true );
  }
LAB_0804d8f0:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804d903(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804d8f0;
  } while (conditions._104_4_ == 0);
  puts("block 3");
  if (conditions._108_4_ != 0) {
    do {
      puts("block 4");
    } while( true );
  }
LAB_0804d8f0:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_229_edges_7(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) goto LAB_0804d94d;
    } while (conditions._104_4_ == 0);
    puts("block 3");
  } while (conditions._108_4_ == 0);
  puts("block 4");
LAB_0804d94d:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804d960(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) goto LAB_0804d94d;
    } while (conditions._104_4_ == 0);
    puts("block 3");
  } while (conditions._108_4_ == 0);
  puts("block 4");
LAB_0804d94d:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_230_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    puts("block 3");
  } while (conditions._108_4_ == 0);
  puts("block 4");
  uVar1 = FUN_0804d9bd();
  return uVar1;
}



undefined4 FUN_0804d9bd(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    puts("block 3");
  } while (conditions._108_4_ == 0);
  puts("block 4");
  uVar1 = FUN_0804d9bd();
  return uVar1;
}



undefined4 test_3_blocks_variant_231_edges_7(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while (puts("block 3"), conditions._108_4_ != 0) {
        puts("block 4");
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804da1a(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while (puts("block 3"), conditions._108_4_ != 0) {
        puts("block 4");
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_232_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while ((conditions._104_4_ == 0) || (puts("block 3"), conditions._108_4_ == 0));
  do {
    puts("block 4");
  } while( true );
}



undefined4 FUN_0804da77(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while ((conditions._104_4_ == 0) || (puts("block 3"), conditions._108_4_ == 0));
  do {
    puts("block 4");
  } while( true );
}



undefined4 test_3_blocks_variant_233_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804dac1;
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._108_4_ == 0);
  puts("block 4");
LAB_0804dac1:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804dad4(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804dac1;
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._108_4_ == 0);
  puts("block 4");
LAB_0804dac1:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_234_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._108_4_ == 0);
  puts("block 4");
  uVar1 = FUN_0804db31();
  return uVar1;
}



undefined4 FUN_0804db31(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._108_4_ == 0);
  puts("block 4");
  uVar1 = FUN_0804db31();
  return uVar1;
}



undefined4 test_3_blocks_variant_235_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    do {
      puts("block 3");
    } while (conditions._108_4_ == 0);
    puts("block 4");
  } while( true );
}



undefined4 FUN_0804db8e(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    do {
      puts("block 3");
    } while (conditions._108_4_ == 0);
    puts("block 4");
  } while( true );
}



undefined4 test_3_blocks_variant_236_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._108_4_ == 0);
  do {
    puts("block 4");
  } while( true );
}



undefined4 FUN_0804dbeb(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._108_4_ == 0);
  do {
    puts("block 4");
  } while( true );
}



undefined4 test_3_blocks_variant_237_edges_7(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      puts("block 3");
    }
    else {
      puts("block 4");
      if (conditions._108_4_ != 0) {
        uVar1 = FUN_0804dc48();
        return uVar1;
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804dc48(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      puts("block 3");
    }
    else {
      puts("block 4");
      if (conditions._108_4_ != 0) {
        uVar1 = FUN_0804dc48();
        return uVar1;
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_238_edges_7(void)

{
  puts("block 2");
  if ((conditions._100_4_ != 0) &&
     ((conditions._104_4_ == 0 || (puts("block 4"), conditions._108_4_ != 0)))) {
    puts("block 3");
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804dca5(void)

{
  puts("block 2");
  if ((conditions._100_4_ != 0) &&
     ((conditions._104_4_ == 0 || (puts("block 4"), conditions._108_4_ != 0)))) {
    puts("block 3");
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_239_edges_7(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      puts("block 3");
    }
    else {
      do {
        puts("block 4");
      } while (conditions._108_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804dd02(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      puts("block 3");
    }
    else {
      do {
        puts("block 4");
      } while (conditions._108_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_240_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804dd4c;
  } while ((conditions._104_4_ != 0) && (puts("block 4"), conditions._108_4_ == 0));
  puts("block 3");
LAB_0804dd4c:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804dd5f(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804dd4c;
  } while ((conditions._104_4_ != 0) && (puts("block 4"), conditions._108_4_ == 0));
  puts("block 3");
LAB_0804dd4c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_241_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0804dda9:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) {
      puts("block 3");
      goto LAB_0804dda9;
    }
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0804ddbc(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0804dda9:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) {
      puts("block 3");
      goto LAB_0804dda9;
    }
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_242_edges_7(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  if (conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._108_4_;
    }
    puts("block 3");
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804de19(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  if (conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._108_4_;
    }
    puts("block 3");
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_243_edges_7(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      puts("block 3");
      uVar1 = FUN_0804de76();
      return uVar1;
    }
    puts("block 4");
    if (conditions._108_4_ != 0) {
      uVar1 = FUN_0804de76();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804de76(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      puts("block 3");
      uVar1 = FUN_0804de76();
      return uVar1;
    }
    puts("block 4");
    if (conditions._108_4_ != 0) {
      uVar1 = FUN_0804de76();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_244_edges_7(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if ((conditions._100_4_ != 0) &&
     ((conditions._104_4_ == 0 || (puts("block 4"), conditions._108_4_ != 0)))) {
    puts("block 3");
    uVar1 = FUN_0804ded3();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804ded3(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if ((conditions._100_4_ != 0) &&
     ((conditions._104_4_ == 0 || (puts("block 4"), conditions._108_4_ != 0)))) {
    puts("block 3");
    uVar1 = FUN_0804ded3();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_245_edges_7(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      puts("block 3");
      uVar1 = FUN_0804df30();
      return uVar1;
    }
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804df30(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      puts("block 3");
      uVar1 = FUN_0804df30();
      return uVar1;
    }
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_246_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while ((conditions._104_4_ != 0) && (puts("block 4"), conditions._108_4_ == 0));
  puts("block 3");
  uVar1 = FUN_0804df8d();
  return uVar1;
}



undefined4 FUN_0804df8d(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while ((conditions._104_4_ != 0) && (puts("block 4"), conditions._108_4_ == 0));
  puts("block 3");
  uVar1 = FUN_0804df8d();
  return uVar1;
}



undefined4 test_3_blocks_variant_247_edges_7(void)

{
  undefined4 uVar1;
  
  while( true ) {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) break;
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("block 3");
  uVar1 = FUN_0804dfea();
  return uVar1;
}



undefined4 FUN_0804dfea(void)

{
  undefined4 uVar1;
  
  while( true ) {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) break;
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("block 3");
  uVar1 = FUN_0804dfea();
  return uVar1;
}



undefined4 test_3_blocks_variant_248_edges_7(void)

{
  int iVar1;
  undefined4 uVar2;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._108_4_;
  }
  puts("block 3");
  uVar2 = FUN_0804e047();
  return uVar2;
}



undefined4 FUN_0804e047(void)

{
  int iVar1;
  undefined4 uVar2;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._108_4_;
  }
  puts("block 3");
  uVar2 = FUN_0804e047();
  return uVar2;
}



undefined4 test_3_blocks_variant_249_edges_7(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      do {
        puts("block 3");
      } while( true );
    }
    puts("block 4");
    if (conditions._108_4_ != 0) {
      uVar1 = FUN_0804e0a4();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804e0a4(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      do {
        puts("block 3");
      } while( true );
    }
    puts("block 4");
    if (conditions._108_4_ != 0) {
      uVar1 = FUN_0804e0a4();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_250_edges_7(void)

{
  puts("block 2");
  if ((conditions._100_4_ != 0) &&
     ((conditions._104_4_ == 0 || (puts("block 4"), conditions._108_4_ != 0)))) {
    do {
      puts("block 3");
    } while( true );
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804e101(void)

{
  puts("block 2");
  if ((conditions._100_4_ != 0) &&
     ((conditions._104_4_ == 0 || (puts("block 4"), conditions._108_4_ != 0)))) {
    do {
      puts("block 3");
    } while( true );
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_251_edges_7(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      do {
        puts("block 3");
      } while( true );
    }
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804e15e(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      do {
        puts("block 3");
      } while( true );
    }
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_252_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while ((conditions._104_4_ != 0) && (puts("block 4"), conditions._108_4_ == 0));
  do {
    puts("block 3");
  } while( true );
}



undefined4 FUN_0804e1bb(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while ((conditions._104_4_ != 0) && (puts("block 4"), conditions._108_4_ == 0));
  do {
    puts("block 3");
  } while( true );
}



undefined4 test_3_blocks_variant_253_edges_7(void)

{
  while( true ) {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) break;
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  do {
    puts("block 3");
  } while( true );
}



undefined4 FUN_0804e218(void)

{
  while( true ) {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) break;
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  do {
    puts("block 3");
  } while( true );
}



undefined4 test_3_blocks_variant_254_edges_7(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._108_4_;
  }
  do {
    puts("block 3");
  } while( true );
}



undefined4 FUN_0804e275(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._108_4_;
  }
  do {
    puts("block 3");
  } while( true );
}



undefined4 test_3_blocks_variant_255_edges_7(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      puts("block 3");
    }
    puts("block 4");
    if (conditions._108_4_ != 0) {
      uVar1 = FUN_0804e2d2();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804e2d2(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      puts("block 3");
    }
    puts("block 4");
    if (conditions._108_4_ != 0) {
      uVar1 = FUN_0804e2d2();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_256_edges_7(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_0804e350;
    while (puts("block 4"), conditions._108_4_ != 0) {
LAB_0804e350:
      puts("block 3");
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804e32f(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_0804e350;
    while (puts("block 4"), conditions._108_4_ != 0) {
LAB_0804e350:
      puts("block 3");
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_257_edges_7(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      puts("block 3");
    }
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804e38c(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      puts("block 3");
    }
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_258_edges_7(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_0804e40a;
    while (puts("block 4"), conditions._108_4_ != 0) {
LAB_0804e40a:
      puts("block 3");
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804e3e9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_0804e40a;
    while (puts("block 4"), conditions._108_4_ != 0) {
LAB_0804e40a:
      puts("block 3");
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_259_edges_7(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      puts("block 3");
    }
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804e446(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      puts("block 3");
    }
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_260_edges_7(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  if (conditions._104_4_ == 0) goto LAB_0804e4c4;
  do {
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
LAB_0804e4c4:
    puts("block 3");
  } while( true );
}



undefined4 FUN_0804e4a3(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  if (conditions._104_4_ == 0) goto LAB_0804e4c4;
  do {
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
LAB_0804e4c4:
    puts("block 3");
  } while( true );
}



undefined4 test_3_blocks_variant_261_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) {
    puts("block 3");
  }
  else {
    puts("block 4");
    if (conditions._108_4_ != 0) {
      uVar1 = FUN_0804e500();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804e500(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) {
    puts("block 3");
  }
  else {
    puts("block 4");
    if (conditions._108_4_ != 0) {
      uVar1 = FUN_0804e500();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_262_edges_7(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if ((conditions._104_4_ == 0) || (puts("block 4"), conditions._108_4_ != 0)) {
    puts("block 3");
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804e55d(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if ((conditions._104_4_ == 0) || (puts("block 4"), conditions._108_4_ != 0)) {
    puts("block 3");
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_263_edges_7(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) {
    puts("block 3");
  }
  else {
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804e5ba(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) {
    puts("block 3");
  }
  else {
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_264_edges_7(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
  } while ((conditions._104_4_ != 0) && (puts("block 4"), conditions._108_4_ == 0));
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 FUN_0804e617(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
  } while ((conditions._104_4_ != 0) && (puts("block 4"), conditions._108_4_ == 0));
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_265_edges_7(void)

{
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 FUN_0804e674(void)

{
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    do {
      puts("block 4");
    } while (conditions._108_4_ != 0);
  }
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_266_edges_7(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
  } while (conditions._100_4_ == 0);
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._108_4_;
  }
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 FUN_0804e6d1(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
  } while (conditions._100_4_ == 0);
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._108_4_;
  }
  puts("block 3");
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_267_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ != 0) {
    puts("block 4");
    if (conditions._108_4_ != 0) {
      uVar1 = FUN_0804e72e();
      return uVar1;
    }
    puts("exit block");
    return 0;
  }
  puts("block 3");
  uVar1 = FUN_0804e72e();
  return uVar1;
}



undefined4 FUN_0804e72e(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ != 0) {
    puts("block 4");
    if (conditions._108_4_ != 0) {
      uVar1 = FUN_0804e72e();
      return uVar1;
    }
    puts("exit block");
    return 0;
  }
  puts("block 3");
  uVar1 = FUN_0804e72e();
  return uVar1;
}



undefined4 test_3_blocks_variant_268_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if ((conditions._104_4_ != 0) && (puts("block 4"), conditions._108_4_ == 0)) {
    puts("exit block");
    return 0;
  }
  puts("block 3");
  uVar1 = FUN_0804e78b();
  return uVar1;
}



undefined4 FUN_0804e78b(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if ((conditions._104_4_ != 0) && (puts("block 4"), conditions._108_4_ == 0)) {
    puts("exit block");
    return 0;
  }
  puts("block 3");
  uVar1 = FUN_0804e78b();
  return uVar1;
}



undefined4 test_3_blocks_variant_269_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) {
    puts("block 3");
    uVar1 = FUN_0804e7e8();
    return uVar1;
  }
  do {
    puts("block 4");
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_0804e7e8(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) {
    puts("block 3");
    uVar1 = FUN_0804e7e8();
    return uVar1;
  }
  do {
    puts("block 4");
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_270_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ != 0) {
    puts("block 4");
    if (conditions._108_4_ != 0) {
      uVar1 = FUN_0804e845();
      return uVar1;
    }
    puts("exit block");
    return 0;
  }
  do {
    puts("block 3");
  } while( true );
}



undefined4 FUN_0804e845(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ != 0) {
    puts("block 4");
    if (conditions._108_4_ != 0) {
      uVar1 = FUN_0804e845();
      return uVar1;
    }
    puts("exit block");
    return 0;
  }
  do {
    puts("block 3");
  } while( true );
}



undefined4 test_3_blocks_variant_271_edges_7(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if ((conditions._104_4_ != 0) && (puts("block 4"), conditions._108_4_ == 0)) {
    puts("exit block");
    return 0;
  }
  do {
    puts("block 3");
  } while( true );
}



undefined4 FUN_0804e8a2(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if ((conditions._104_4_ != 0) && (puts("block 4"), conditions._108_4_ == 0)) {
    puts("exit block");
    return 0;
  }
  do {
    puts("block 3");
  } while( true );
}



undefined4 test_3_blocks_variant_272_edges_7(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) {
    do {
      puts("block 3");
    } while( true );
  }
  do {
    puts("block 4");
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_0804e8ff(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) {
    do {
      puts("block 3");
    } while( true );
  }
  do {
    puts("block 4");
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_273_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) {
    puts("block 3");
  }
  puts("block 4");
  if (conditions._108_4_ == 0) {
    puts("exit block");
    return 0;
  }
  uVar1 = FUN_0804e95c();
  return uVar1;
}



undefined4 FUN_0804e95c(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) {
    puts("block 3");
  }
  puts("block 4");
  if (conditions._108_4_ == 0) {
    puts("exit block");
    return 0;
  }
  uVar1 = FUN_0804e95c();
  return uVar1;
}



undefined4 test_3_blocks_variant_274_edges_7(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) goto LAB_0804e9da;
  while (puts("block 4"), conditions._108_4_ != 0) {
LAB_0804e9da:
    puts("block 3");
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804e9b9(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) goto LAB_0804e9da;
  while (puts("block 4"), conditions._108_4_ != 0) {
LAB_0804e9da:
    puts("block 3");
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_275_edges_7(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) {
    puts("block 3");
  }
  do {
    puts("block 4");
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_0804ea16(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) {
    puts("block 3");
  }
  do {
    puts("block 4");
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_276_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804ea60;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    puts("block 3");
  }
  else {
    puts("block 4");
  }
LAB_0804ea60:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804ea73(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804ea60;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    puts("block 3");
  }
  else {
    puts("block 4");
  }
LAB_0804ea60:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_277_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804eabd;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ != 0) {
    puts("block 4");
    uVar1 = FUN_0804ead0();
    return uVar1;
  }
  puts("block 3");
LAB_0804eabd:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804ead0(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804eabd;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ != 0) {
    puts("block 4");
    uVar1 = FUN_0804ead0();
    return uVar1;
  }
  puts("block 3");
LAB_0804eabd:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_278_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804eb1a;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ != 0) {
    puts("block 4");
  }
  puts("block 3");
LAB_0804eb1a:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804eb2d(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804eb1a;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ != 0) {
    puts("block 4");
  }
  puts("block 3");
LAB_0804eb1a:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_279_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804eb77;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ != 0) {
    do {
      puts("block 4");
    } while( true );
  }
  puts("block 3");
LAB_0804eb77:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804eb8a(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804eb77;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ != 0) {
    do {
      puts("block 4");
    } while( true );
  }
  puts("block 3");
LAB_0804eb77:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_280_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ != 0) {
    puts("block 4");
    uVar1 = FUN_0804ebe7();
    return uVar1;
  }
  puts("block 3");
  uVar1 = FUN_0804ebe7();
  return uVar1;
}



undefined4 FUN_0804ebe7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ != 0) {
    puts("block 4");
    uVar1 = FUN_0804ebe7();
    return uVar1;
  }
  puts("block 3");
  uVar1 = FUN_0804ebe7();
  return uVar1;
}



undefined4 test_3_blocks_variant_281_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ != 0) {
    puts("block 4");
  }
  puts("block 3");
  uVar1 = FUN_0804ec44();
  return uVar1;
}



undefined4 FUN_0804ec44(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ != 0) {
    puts("block 4");
  }
  puts("block 3");
  uVar1 = FUN_0804ec44();
  return uVar1;
}



undefined4 test_3_blocks_variant_282_edges_7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    puts("block 3");
    uVar1 = FUN_0804eca1();
    return uVar1;
  }
  do {
    puts("block 4");
  } while( true );
}



undefined4 FUN_0804eca1(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    puts("block 3");
    uVar1 = FUN_0804eca1();
    return uVar1;
  }
  do {
    puts("block 4");
  } while( true );
}



undefined4 test_3_blocks_variant_283_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ != 0) {
    puts("block 4");
  }
  do {
    puts("block 3");
  } while( true );
}



undefined4 FUN_0804ecfe(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ != 0) {
    puts("block 4");
  }
  do {
    puts("block 3");
  } while( true );
}



undefined4 test_3_blocks_variant_284_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    do {
      puts("block 3");
    } while( true );
  }
  do {
    puts("block 4");
  } while( true );
}



undefined4 FUN_0804ed5b(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    do {
      puts("block 3");
    } while( true );
  }
  do {
    puts("block 4");
  } while( true );
}



undefined4 test_3_blocks_variant_285_edges_7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) goto LAB_0804ede2;
  do {
    puts("block 4");
LAB_0804ede2:
    puts("block 3");
  } while( true );
}



undefined4 FUN_0804edb8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) goto LAB_0804ede2;
  do {
    puts("block 4");
LAB_0804ede2:
    puts("block 3");
  } while( true );
}



undefined4 test_3_blocks_variant_286_edges_8(void)

{
FUN_0804ee15:
  puts("block 2");
  while (puts("block 3"), conditions._100_4_ != 0) {
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) goto LAB_0804ee02;
      if (conditions._108_4_ == 0) goto FUN_0804ee15;
    } while (conditions._112_4_ != 0);
  }
LAB_0804ee02:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804ee15(void)

{
code_r0x0804ee15:
  puts("block 2");
  while (puts("block 3"), conditions._100_4_ != 0) {
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) goto LAB_0804ee02;
      if (conditions._108_4_ == 0) goto code_r0x0804ee15;
    } while (conditions._112_4_ != 0);
  }
LAB_0804ee02:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_287_edges_8(void)

{
FUN_0804ee7b:
  do {
    puts("block 2");
    while (puts("block 3"), conditions._100_4_ != 0) {
      do {
        puts("block 4");
        if (conditions._104_4_ == 0) {
          puts("exit block");
          return 0;
        }
        if (conditions._108_4_ == 0) goto FUN_0804ee7b;
      } while (conditions._112_4_ != 0);
    }
  } while( true );
}



undefined4 FUN_0804ee7b(void)

{
code_r0x0804ee7b:
  do {
    puts("block 2");
    while (puts("block 3"), conditions._100_4_ != 0) {
      do {
        puts("block 4");
        if (conditions._104_4_ == 0) {
          puts("exit block");
          return 0;
        }
        if (conditions._108_4_ == 0) goto code_r0x0804ee7b;
      } while (conditions._112_4_ != 0);
    }
  } while( true );
}



undefined4 test_3_blocks_variant_288_edges_8(void)

{
FUN_0804eee1:
  puts("block 2");
  do {
    do {
      puts("block 3");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) goto FUN_0804eee1;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0804eee1(void)

{
code_r0x0804eee1:
  puts("block 2");
  do {
    do {
      puts("block 3");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) goto code_r0x0804eee1;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_289_edges_8(void)

{
  do {
    puts("block 2");
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) {
LAB_0804ef34:
        puts("exit block");
        return 0;
      }
      if (conditions._104_4_ == 0) break;
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_0804ef34;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0804ef47(void)

{
  do {
    puts("block 2");
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) {
LAB_0804ef34:
        puts("exit block");
        return 0;
      }
      if (conditions._104_4_ == 0) break;
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_0804ef34;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_290_edges_8(void)

{
  int iVar1;
  int iVar2;
  
  do {
    puts("block 2");
    puts("block 3");
    iVar1 = conditions._104_4_;
    iVar2 = conditions._100_4_;
    while( true ) {
      if (iVar2 == 0) {
        puts("exit block");
        return 0;
      }
      if (iVar1 == 0) break;
      puts("block 4");
      iVar1 = conditions._112_4_;
      iVar2 = conditions._108_4_;
    }
  } while( true );
}



undefined4 FUN_0804efad(void)

{
  int iVar1;
  int iVar2;
  
  do {
    puts("block 2");
    puts("block 3");
    iVar1 = conditions._104_4_;
    iVar2 = conditions._100_4_;
    while( true ) {
      if (iVar2 == 0) {
        puts("exit block");
        return 0;
      }
      if (iVar1 == 0) break;
      puts("block 4");
      iVar1 = conditions._112_4_;
      iVar2 = conditions._108_4_;
    }
  } while( true );
}



undefined4 test_3_blocks_variant_291_edges_8(void)

{
FUN_0804f013:
  puts("block 2");
  do {
    puts("block 3");
    if (conditions._100_4_ == 0) {
LAB_0804f000:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) goto FUN_0804f013;
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_0804f000;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0804f013(void)

{
code_r0x0804f013:
  puts("block 2");
  do {
    puts("block 3");
    if (conditions._100_4_ == 0) {
LAB_0804f000:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) goto code_r0x0804f013;
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_0804f000;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_292_edges_8(void)

{
FUN_0804f079:
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._104_4_ == 0) break;
      do {
        puts("block 4");
        if (conditions._108_4_ == 0) goto FUN_0804f079;
      } while (conditions._112_4_ != 0);
    }
  } while( true );
}



undefined4 FUN_0804f079(void)

{
code_r0x0804f079:
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._104_4_ == 0) break;
      do {
        puts("block 4");
        if (conditions._108_4_ == 0) goto code_r0x0804f079;
      } while (conditions._112_4_ != 0);
    }
  } while( true );
}



undefined4 test_3_blocks_variant_293_edges_8(void)

{
  do {
    puts("block 2");
    do {
      do {
        puts("block 3");
        if (conditions._100_4_ == 0) {
LAB_0804f0cc:
          puts("exit block");
          return 0;
        }
      } while (conditions._104_4_ == 0);
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_0804f0cc;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0804f0df(void)

{
  do {
    puts("block 2");
    do {
      do {
        puts("block 3");
        if (conditions._100_4_ == 0) {
LAB_0804f0cc:
          puts("exit block");
          return 0;
        }
      } while (conditions._104_4_ == 0);
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_0804f0cc;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_294_edges_8(void)

{
  do {
    puts("block 2");
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) goto LAB_0804f132;
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) {
LAB_0804f132:
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0804f145(void)

{
  do {
    puts("block 2");
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) goto LAB_0804f132;
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) {
LAB_0804f132:
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_295_edges_8(void)

{
  int iVar1;
  
  puts("block 2");
  while (puts("block 3"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._112_4_;
      if (conditions._108_4_ == 0) goto LAB_0804f198;
    }
  }
LAB_0804f198:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804f1ab(void)

{
  int iVar1;
  
  puts("block 2");
  while (puts("block 3"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._112_4_;
      if (conditions._108_4_ == 0) goto LAB_0804f198;
    }
  }
LAB_0804f198:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_296_edges_8(void)

{
FUN_0804f211:
  puts("block 2");
  do {
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto FUN_0804f211;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0804f211(void)

{
code_r0x0804f211:
  puts("block 2");
  do {
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto code_r0x0804f211;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_297_edges_8(void)

{
FUN_0804f277:
  do {
    puts("block 2");
    do {
      do {
        puts("block 3");
        if (conditions._100_4_ == 0) goto FUN_0804f277;
      } while (conditions._104_4_ == 0);
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0804f277(void)

{
code_r0x0804f277:
  do {
    puts("block 2");
    do {
      do {
        puts("block 3");
        if (conditions._100_4_ == 0) goto code_r0x0804f277;
      } while (conditions._104_4_ == 0);
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_298_edges_8(void)

{
FUN_0804f2dd:
  do {
    puts("block 2");
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) goto FUN_0804f2dd;
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0804f2dd(void)

{
code_r0x0804f2dd:
  do {
    puts("block 2");
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) goto code_r0x0804f2dd;
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_299_edges_8(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    while (puts("block 3"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._112_4_;
        if (conditions._108_4_ == 0) {
          puts("exit block");
          return 0;
        }
      }
    }
  } while( true );
}



undefined4 FUN_0804f343(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    while (puts("block 3"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._112_4_;
        if (conditions._108_4_ == 0) {
          puts("exit block");
          return 0;
        }
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_300_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) goto LAB_0804f396;
      if (conditions._104_4_ == 0) break;
      if (conditions._108_4_ != 0) {
        puts("block 4");
        if (conditions._112_4_ != 0) {
          uVar1 = FUN_0804f3a9();
          return uVar1;
        }
LAB_0804f396:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_0804f3a9(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) goto LAB_0804f396;
      if (conditions._104_4_ == 0) break;
      if (conditions._108_4_ != 0) {
        puts("block 4");
        if (conditions._112_4_ != 0) {
          uVar1 = FUN_0804f3a9();
          return uVar1;
        }
LAB_0804f396:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_301_edges_8(void)

{
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) goto LAB_0804f3fc;
      if (conditions._104_4_ == 0) break;
      if ((conditions._108_4_ != 0) && (puts("block 4"), conditions._112_4_ == 0)) {
LAB_0804f3fc:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_0804f40f(void)

{
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) goto LAB_0804f3fc;
      if (conditions._104_4_ == 0) break;
      if ((conditions._108_4_ != 0) && (puts("block 4"), conditions._112_4_ == 0)) {
LAB_0804f3fc:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_302_edges_8(void)

{
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) goto LAB_0804f462;
      if (conditions._104_4_ == 0) break;
      if (conditions._108_4_ != 0) {
        do {
          puts("block 4");
        } while (conditions._112_4_ != 0);
LAB_0804f462:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_0804f475(void)

{
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) goto LAB_0804f462;
      if (conditions._104_4_ == 0) break;
      if (conditions._108_4_ != 0) {
        do {
          puts("block 4");
        } while (conditions._112_4_ != 0);
LAB_0804f462:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_303_edges_8(void)

{
  do {
    puts("block 2");
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while ((conditions._104_4_ != 0) &&
            ((conditions._108_4_ == 0 || (puts("block 4"), conditions._112_4_ != 0))));
  } while( true );
}



undefined4 FUN_0804f4db(void)

{
  do {
    puts("block 2");
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while ((conditions._104_4_ != 0) &&
            ((conditions._108_4_ == 0 || (puts("block 4"), conditions._112_4_ != 0))));
  } while( true );
}



undefined4 test_3_blocks_variant_304_edges_8(void)

{
FUN_0804f541:
  do {
    puts("block 2");
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._104_4_ == 0) goto FUN_0804f541;
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0804f541(void)

{
code_r0x0804f541:
  do {
    puts("block 2");
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._104_4_ == 0) goto code_r0x0804f541;
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_305_edges_8(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._108_4_;
      if (conditions._104_4_ == 0) break;
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._112_4_;
      }
    }
  } while( true );
}



undefined4 FUN_0804f5a7(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    while( true ) {
      puts("block 3");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._108_4_;
      if (conditions._104_4_ == 0) break;
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._112_4_;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_306_edges_8(void)

{
FUN_0804f60d:
  puts("block 2");
  if (conditions._100_4_ == 0) {
LAB_0804f5fa:
    puts("exit block");
    return 0;
  }
  do {
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) goto LAB_0804f5fa;
      if (conditions._108_4_ == 0) goto FUN_0804f60d;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0804f60d(void)

{
code_r0x0804f60d:
  puts("block 2");
  if (conditions._100_4_ == 0) {
LAB_0804f5fa:
    puts("exit block");
    return 0;
  }
  do {
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) goto LAB_0804f5fa;
      if (conditions._108_4_ == 0) goto code_r0x0804f60d;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_307_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
      if ((conditions._104_4_ == 0) || (puts("block 4"), conditions._108_4_ == 0))
      goto LAB_0804f660;
    } while (conditions._112_4_ != 0);
  }
LAB_0804f660:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804f673(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
      if ((conditions._104_4_ == 0) || (puts("block 4"), conditions._108_4_ == 0))
      goto LAB_0804f660;
    } while (conditions._112_4_ != 0);
  }
LAB_0804f660:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_308_edges_8(void)

{
  while ((puts("block 2"), conditions._100_4_ != 0 && (puts("block 3"), conditions._104_4_ != 0))) {
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_0804f6c6;
    } while (conditions._112_4_ != 0);
  }
LAB_0804f6c6:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804f6d9(void)

{
  while ((puts("block 2"), conditions._100_4_ != 0 && (puts("block 3"), conditions._104_4_ != 0))) {
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_0804f6c6;
    } while (conditions._112_4_ != 0);
  }
LAB_0804f6c6:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_309_edges_8(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      do {
        puts("block 4");
        if (conditions._108_4_ == 0) goto LAB_0804f72c;
      } while (conditions._112_4_ != 0);
    }
  }
LAB_0804f72c:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804f73f(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      do {
        puts("block 4");
        if (conditions._108_4_ == 0) goto LAB_0804f72c;
      } while (conditions._112_4_ != 0);
    }
  }
LAB_0804f72c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_310_edges_8(void)

{
FUN_0804f7a5:
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      do {
        puts("block 4");
        if (conditions._108_4_ == 0) goto FUN_0804f7a5;
      } while (conditions._112_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804f7a5(void)

{
code_r0x0804f7a5:
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      do {
        puts("block 4");
        if (conditions._108_4_ == 0) goto code_r0x0804f7a5;
      } while (conditions._112_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_311_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0804f7f8:
      puts("exit block");
      return 0;
    }
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) break;
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_0804f7f8;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0804f80b(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0804f7f8:
      puts("exit block");
      return 0;
    }
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) break;
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_0804f7f8;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_312_edges_8(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    puts("block 3");
    iVar1 = conditions._104_4_;
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._112_4_;
      if (conditions._108_4_ == 0) goto LAB_0804f85e;
    }
  }
LAB_0804f85e:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804f871(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    puts("block 3");
    iVar1 = conditions._104_4_;
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._112_4_;
      if (conditions._108_4_ == 0) goto LAB_0804f85e;
    }
  }
LAB_0804f85e:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_313_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      do {
        puts("block 4");
        if (conditions._108_4_ == 0) goto LAB_0804f8c4;
      } while (conditions._112_4_ != 0);
    }
  }
LAB_0804f8c4:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804f8d7(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      do {
        puts("block 4");
        if (conditions._108_4_ == 0) goto LAB_0804f8c4;
      } while (conditions._112_4_ != 0);
    }
  }
LAB_0804f8c4:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_314_edges_8(void)

{
FUN_0804f93d:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    while (puts("block 3"), conditions._104_4_ != 0) {
      do {
        puts("block 4");
        if (conditions._108_4_ == 0) goto FUN_0804f93d;
      } while (conditions._112_4_ != 0);
    }
  } while( true );
}



undefined4 FUN_0804f93d(void)

{
code_r0x0804f93d:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    while (puts("block 3"), conditions._104_4_ != 0) {
      do {
        puts("block 4");
        if (conditions._108_4_ == 0) goto code_r0x0804f93d;
      } while (conditions._112_4_ != 0);
    }
  } while( true );
}



undefined4 test_3_blocks_variant_315_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      do {
        puts("block 3");
      } while (conditions._104_4_ == 0);
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_0804f990;
    } while (conditions._112_4_ != 0);
  }
LAB_0804f990:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804f9a3(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      do {
        puts("block 3");
      } while (conditions._104_4_ == 0);
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_0804f990;
    } while (conditions._112_4_ != 0);
  }
LAB_0804f990:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_316_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_0804f9f6;
    } while (conditions._112_4_ != 0);
  }
LAB_0804f9f6:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804fa09(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_0804f9f6;
    } while (conditions._112_4_ != 0);
  }
LAB_0804f9f6:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_317_edges_8(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
LAB_0804fa5c:
    puts("exit block");
    return 0;
  }
  do {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_0804fa5c;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0804fa6f(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) {
LAB_0804fa5c:
    puts("exit block");
    return 0;
  }
  do {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_0804fa5c;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_318_edges_8(void)

{
FUN_0804fad5:
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  do {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto FUN_0804fad5;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0804fad5(void)

{
code_r0x0804fad5:
  puts("block 2");
  if (conditions._100_4_ == 0) {
    puts("exit block");
    return 0;
  }
  do {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto code_r0x0804fad5;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_319_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804fb28;
    puts("block 3");
    if (conditions._104_4_ == 0) goto LAB_0804fb28;
  } while (conditions._108_4_ == 0);
  puts("block 4");
  if (conditions._112_4_ != 0) {
    uVar1 = FUN_0804fb3b();
    return uVar1;
  }
LAB_0804fb28:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804fb3b(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0804fb28;
    puts("block 3");
    if (conditions._104_4_ == 0) goto LAB_0804fb28;
  } while (conditions._108_4_ == 0);
  puts("block 4");
  if (conditions._112_4_ != 0) {
    uVar1 = FUN_0804fb3b();
    return uVar1;
  }
LAB_0804fb28:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_320_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0804fb8e;
      if (conditions._108_4_ == 0) break;
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0804fb8e;
    }
  }
LAB_0804fb8e:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804fba1(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0804fb8e;
      if (conditions._108_4_ == 0) break;
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0804fb8e;
    }
  }
LAB_0804fb8e:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_321_edges_8(void)

{
  do {
    puts("block 2");
    if ((conditions._100_4_ == 0) || (puts("block 3"), conditions._104_4_ == 0)) goto LAB_0804fbf4;
  } while (conditions._108_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._112_4_ != 0);
LAB_0804fbf4:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804fc07(void)

{
  do {
    puts("block 2");
    if ((conditions._100_4_ == 0) || (puts("block 3"), conditions._104_4_ == 0)) goto LAB_0804fbf4;
  } while (conditions._108_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._112_4_ != 0);
LAB_0804fbf4:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_322_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0804fc5a;
    } while ((conditions._108_4_ != 0) && (puts("block 4"), conditions._112_4_ != 0));
  }
LAB_0804fc5a:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804fc6d(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0804fc5a;
    } while ((conditions._108_4_ != 0) && (puts("block 4"), conditions._112_4_ != 0));
  }
LAB_0804fc5a:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_323_edges_8(void)

{
  int iVar1;
  
  while ((puts("block 2"), conditions._100_4_ != 0 &&
         (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0))) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._112_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804fcd3(void)

{
  int iVar1;
  
  while ((puts("block 2"), conditions._100_4_ != 0 &&
         (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0))) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._112_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_324_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0804fd26;
      if (conditions._108_4_ == 0) break;
      do {
        puts("block 4");
      } while (conditions._112_4_ != 0);
    }
  }
LAB_0804fd26:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804fd39(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0804fd26;
      if (conditions._108_4_ == 0) break;
      do {
        puts("block 4");
      } while (conditions._112_4_ != 0);
    }
  }
LAB_0804fd26:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_325_edges_8(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0804fd8c;
    } while (conditions._108_4_ == 0);
    puts("block 4");
    if (conditions._112_4_ != 0) {
      uVar1 = FUN_0804fd9f();
      return uVar1;
    }
  }
LAB_0804fd8c:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804fd9f(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0804fd8c;
    } while (conditions._108_4_ == 0);
    puts("block 4");
    if (conditions._112_4_ != 0) {
      uVar1 = FUN_0804fd9f();
      return uVar1;
    }
  }
LAB_0804fd8c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_326_edges_8(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  while (iVar1 != 0) {
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0804fdf2;
    } while (conditions._108_4_ == 0);
    puts("block 4");
    iVar1 = conditions._112_4_;
  }
LAB_0804fdf2:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804fe05(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  while (iVar1 != 0) {
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0804fdf2;
    } while (conditions._108_4_ == 0);
    puts("block 4");
    iVar1 = conditions._112_4_;
  }
LAB_0804fdf2:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_327_edges_8(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0804fe58;
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
LAB_0804fe58:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804fe6b(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0804fe58;
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
LAB_0804fe58:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_328_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0804febe;
    } while ((conditions._108_4_ == 0) || (puts("block 4"), conditions._112_4_ != 0));
  }
LAB_0804febe:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804fed1(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0804febe;
    } while ((conditions._108_4_ == 0) || (puts("block 4"), conditions._112_4_ != 0));
  }
LAB_0804febe:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_329_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0804ff24;
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
LAB_0804ff24:
  puts("exit block");
  return 0;
}



undefined4 FUN_0804ff37(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0804ff24;
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
LAB_0804ff24:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_330_edges_8(void)

{
  int iVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._112_4_;
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0804ff9d(void)

{
  int iVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._112_4_;
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_331_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0804fff0:
      puts("exit block");
      return 0;
    }
    while (puts("block 3"), conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) {
        puts("block 4");
        if (conditions._112_4_ != 0) {
          uVar1 = FUN_08050003();
          return uVar1;
        }
        goto LAB_0804fff0;
      }
    }
  } while( true );
}



undefined4 FUN_08050003(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0804fff0:
      puts("exit block");
      return 0;
    }
    while (puts("block 3"), conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) {
        puts("block 4");
        if (conditions._112_4_ != 0) {
          uVar1 = FUN_08050003();
          return uVar1;
        }
        goto LAB_0804fff0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_332_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      if ((conditions._108_4_ != 0) && (puts("block 4"), conditions._112_4_ == 0))
      goto LAB_08050056;
    }
  }
LAB_08050056:
  puts("exit block");
  return 0;
}



undefined4 FUN_08050069(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      if ((conditions._108_4_ != 0) && (puts("block 4"), conditions._112_4_ == 0))
      goto LAB_08050056;
    }
  }
LAB_08050056:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_333_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) goto LAB_08050108;
    }
  }
LAB_080500bc:
  puts("exit block");
  return 0;
LAB_08050108:
  do {
    puts("block 4");
  } while (conditions._112_4_ != 0);
  goto LAB_080500bc;
}



undefined4 FUN_080500cf(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) goto LAB_08050108;
    }
  }
LAB_080500bc:
  puts("exit block");
  return 0;
LAB_08050108:
  do {
    puts("block 4");
  } while (conditions._112_4_ != 0);
  goto LAB_080500bc;
}



undefined4 test_3_blocks_variant_334_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) break;
    } while ((conditions._108_4_ == 0) || (puts("block 4"), conditions._112_4_ != 0));
  } while( true );
}



undefined4 FUN_08050135(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) break;
    } while ((conditions._108_4_ == 0) || (puts("block 4"), conditions._112_4_ != 0));
  } while( true );
}



undefined4 test_3_blocks_variant_335_edges_8(void)

{
FUN_0805019b:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto FUN_0805019b;
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0805019b(void)

{
code_r0x0805019b:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto code_r0x0805019b;
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_336_edges_8(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    while (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._112_4_;
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08050201(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    while (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._112_4_;
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_337_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08050254;
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        puts("block 4");
        goto LAB_08050254;
      }
    }
  }
LAB_08050254:
  puts("exit block");
  return 0;
}



undefined4 FUN_08050267(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08050254;
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        puts("block 4");
        goto LAB_08050254;
      }
    }
  }
LAB_08050254:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_338_edges_8(void)

{
  undefined4 uVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_080502ba;
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        puts("block 4");
        uVar1 = FUN_080502cd();
        return uVar1;
      }
    }
  }
LAB_080502ba:
  puts("exit block");
  return 0;
}



undefined4 FUN_080502cd(void)

{
  undefined4 uVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_080502ba;
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        puts("block 4");
        uVar1 = FUN_080502cd();
        return uVar1;
      }
    }
  }
LAB_080502ba:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_339_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08050320;
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        puts("block 4");
      }
    }
  }
LAB_08050320:
  puts("exit block");
  return 0;
}



undefined4 FUN_08050333(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08050320;
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        puts("block 4");
      }
    }
  }
LAB_08050320:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_340_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08050386;
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        do {
          puts("block 4");
        } while( true );
      }
    }
  }
LAB_08050386:
  puts("exit block");
  return 0;
}



undefined4 FUN_08050399(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08050386;
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        do {
          puts("block 4");
        } while( true );
      }
    }
  }
LAB_08050386:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_341_edges_8(void)

{
FUN_080503ff:
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) goto FUN_080503ff;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_080503ff(void)

{
code_r0x080503ff:
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) goto code_r0x080503ff;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_342_edges_8(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if ((conditions._104_4_ == 0) || (puts("block 4"), conditions._108_4_ == 0)) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_08050465(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if ((conditions._104_4_ == 0) || (puts("block 4"), conditions._108_4_ == 0)) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_343_edges_8(void)

{
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
    if (conditions._104_4_ == 0) break;
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_080504b8;
    } while (conditions._112_4_ != 0);
  }
LAB_080504b8:
  puts("exit block");
  return 0;
}



undefined4 FUN_080504cb(void)

{
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
    if (conditions._104_4_ == 0) break;
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_080504b8;
    } while (conditions._112_4_ != 0);
  }
LAB_080504b8:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_344_edges_8(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  while (puts("block 3"), conditions._104_4_ != 0) {
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_0805051e;
    } while (conditions._112_4_ != 0);
  }
LAB_0805051e:
  puts("exit block");
  return 0;
}



undefined4 FUN_08050531(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  while (puts("block 3"), conditions._104_4_ != 0) {
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_0805051e;
    } while (conditions._112_4_ != 0);
  }
LAB_0805051e:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_345_edges_8(void)

{
FUN_08050597:
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) {
      puts("exit block");
      return 0;
    }
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto FUN_08050597;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_08050597(void)

{
code_r0x08050597:
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) {
      puts("exit block");
      return 0;
    }
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto code_r0x08050597;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_346_edges_8(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) break;
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_080505fd(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) break;
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_347_edges_8(void)

{
  do {
    do {
      do {
        puts("block 2");
      } while (conditions._100_4_ == 0);
      puts("block 3");
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_08050663(void)

{
  do {
    do {
      do {
        puts("block 2");
      } while (conditions._100_4_ == 0);
      puts("block 3");
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_348_edges_8(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while (puts("block 3"), conditions._104_4_ != 0) {
      do {
        puts("block 4");
        if (conditions._108_4_ == 0) {
          puts("exit block");
          return 0;
        }
      } while (conditions._112_4_ != 0);
    }
  } while( true );
}



undefined4 FUN_080506c9(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while (puts("block 3"), conditions._104_4_ != 0) {
      do {
        puts("block 4");
        if (conditions._108_4_ == 0) {
          puts("exit block");
          return 0;
        }
      } while (conditions._112_4_ != 0);
    }
  } while( true );
}



undefined4 test_3_blocks_variant_349_edges_8(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      do {
        puts("block 3");
      } while (conditions._104_4_ == 0);
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0805072f(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      do {
        puts("block 3");
      } while (conditions._104_4_ == 0);
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_350_edges_8(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_08050795(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_351_edges_8(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_080507fb(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_352_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
    if (conditions._104_4_ == 0) goto LAB_0805084e;
  } while (conditions._108_4_ == 0);
  puts("block 4");
  if (conditions._112_4_ != 0) {
    uVar1 = FUN_08050861();
    return uVar1;
  }
LAB_0805084e:
  puts("exit block");
  return 0;
}



undefined4 FUN_08050861(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
    if (conditions._104_4_ == 0) goto LAB_0805084e;
  } while (conditions._108_4_ == 0);
  puts("block 4");
  if (conditions._112_4_ != 0) {
    uVar1 = FUN_08050861();
    return uVar1;
  }
LAB_0805084e:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_353_edges_8(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_080508b4;
      if (conditions._108_4_ == 0) break;
      puts("block 4");
      if (conditions._112_4_ == 0) {
LAB_080508b4:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_080508c7(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_080508b4;
      if (conditions._108_4_ == 0) break;
      puts("block 4");
      if (conditions._112_4_ == 0) {
LAB_080508b4:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_354_edges_8(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
    if (conditions._104_4_ == 0) goto LAB_0805091a;
  } while (conditions._108_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._112_4_ != 0);
LAB_0805091a:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805092d(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
    if (conditions._104_4_ == 0) goto LAB_0805091a;
  } while (conditions._108_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._112_4_ != 0);
LAB_0805091a:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_355_edges_8(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while ((conditions._108_4_ != 0) && (puts("block 4"), conditions._112_4_ != 0));
  } while( true );
}



undefined4 FUN_08050993(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while ((conditions._108_4_ != 0) && (puts("block 4"), conditions._112_4_ != 0));
  } while( true );
}



undefined4 test_3_blocks_variant_356_edges_8(void)

{
  int iVar1;
  
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
    iVar1 = conditions._108_4_;
    if (conditions._104_4_ == 0) break;
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._112_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_080509f9(void)

{
  int iVar1;
  
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
    iVar1 = conditions._108_4_;
    if (conditions._104_4_ == 0) break;
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._112_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_357_edges_8(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) break;
      do {
        puts("block 4");
      } while (conditions._112_4_ != 0);
    }
  } while( true );
}



undefined4 FUN_08050a5f(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) break;
      do {
        puts("block 4");
      } while (conditions._112_4_ != 0);
    }
  } while( true );
}



undefined4 test_3_blocks_variant_358_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) goto LAB_08050ab2;
  } while (conditions._108_4_ == 0);
  puts("block 4");
  if (conditions._112_4_ != 0) {
    uVar1 = FUN_08050ac5();
    return uVar1;
  }
LAB_08050ab2:
  puts("exit block");
  return 0;
}



undefined4 FUN_08050ac5(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) goto LAB_08050ab2;
  } while (conditions._108_4_ == 0);
  puts("block 4");
  if (conditions._112_4_ != 0) {
    uVar1 = FUN_08050ac5();
    return uVar1;
  }
LAB_08050ab2:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_359_edges_8(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) break;
  } while ((conditions._108_4_ == 0) || (puts("block 4"), conditions._112_4_ != 0));
  puts("exit block");
  return 0;
}



undefined4 FUN_08050b2b(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) break;
  } while ((conditions._108_4_ == 0) || (puts("block 4"), conditions._112_4_ != 0));
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_360_edges_8(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) goto LAB_08050b7e;
  } while (conditions._108_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._112_4_ != 0);
LAB_08050b7e:
  puts("exit block");
  return 0;
}



undefined4 FUN_08050b91(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) goto LAB_08050b7e;
  } while (conditions._108_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._112_4_ != 0);
LAB_08050b7e:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_361_edges_8(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while ((conditions._108_4_ == 0) || (puts("block 4"), conditions._112_4_ != 0));
  } while( true );
}



undefined4 FUN_08050bf7(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while ((conditions._108_4_ == 0) || (puts("block 4"), conditions._112_4_ != 0));
  } while( true );
}



undefined4 test_3_blocks_variant_362_edges_8(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_08050c5d(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_363_edges_8(void)

{
  int iVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  while (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._112_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08050cc3(void)

{
  int iVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  while (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._112_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_364_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while (puts("block 3"), conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) {
        puts("block 4");
        if (conditions._112_4_ == 0) {
          puts("exit block");
          return 0;
        }
        uVar1 = FUN_08050d29();
        return uVar1;
      }
    }
  } while( true );
}



undefined4 FUN_08050d29(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while (puts("block 3"), conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) {
        puts("block 4");
        if (conditions._112_4_ == 0) {
          puts("exit block");
          return 0;
        }
        uVar1 = FUN_08050d29();
        return uVar1;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_365_edges_8(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while (puts("block 3"), conditions._104_4_ != 0) {
      if ((conditions._108_4_ != 0) && (puts("block 4"), conditions._112_4_ == 0)) {
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_08050d8f(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while (puts("block 3"), conditions._104_4_ != 0) {
      if ((conditions._108_4_ != 0) && (puts("block 4"), conditions._112_4_ == 0)) {
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_366_edges_8(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while (puts("block 3"), conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) {
        do {
          puts("block 4");
        } while (conditions._112_4_ != 0);
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_08050df5(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while (puts("block 3"), conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) {
        do {
          puts("block 4");
        } while (conditions._112_4_ != 0);
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_367_edges_8(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08050e48;
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        puts("block 4");
LAB_08050e48:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_08050e5b(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08050e48;
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        puts("block 4");
LAB_08050e48:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_368_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        puts("block 4");
        uVar1 = FUN_08050ec1();
        return uVar1;
      }
    }
  } while( true );
}



undefined4 FUN_08050ec1(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        puts("block 4");
        uVar1 = FUN_08050ec1();
        return uVar1;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_369_edges_8(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        puts("block 4");
      }
    }
  } while( true );
}



undefined4 FUN_08050f27(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        puts("block 4");
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_370_edges_8(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        do {
          puts("block 4");
        } while( true );
      }
    }
  } while( true );
}



undefined4 FUN_08050f8d(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        do {
          puts("block 4");
        } while( true );
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_371_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 4");
      if (conditions._104_4_ == 0) goto LAB_08050fe0;
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ == 0) goto LAB_0805100b;
    }
  }
LAB_0805100b:
  puts("block 3");
LAB_08050fe0:
  puts("exit block");
  return 0;
}



undefined4 FUN_08050ff3(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 4");
      if (conditions._104_4_ == 0) goto LAB_08050fe0;
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ == 0) goto LAB_0805100b;
    }
  }
LAB_0805100b:
  puts("block 3");
LAB_08050fe0:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_372_edges_8(void)

{
  undefined4 uVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ == 0) goto LAB_08051071;
    }
  }
LAB_08051071:
  puts("block 3");
  uVar1 = FUN_08051059();
  return uVar1;
}



undefined4 FUN_08051059(void)

{
  undefined4 uVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ == 0) goto LAB_08051071;
    }
  }
LAB_08051071:
  puts("block 3");
  uVar1 = FUN_08051059();
  return uVar1;
}



undefined4 test_3_blocks_variant_373_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ == 0) goto LAB_080510d7;
    }
  }
LAB_080510d7:
  do {
    puts("block 3");
  } while( true );
}



undefined4 FUN_080510bf(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ == 0) goto LAB_080510d7;
    }
  }
LAB_080510d7:
  do {
    puts("block 3");
  } while( true );
}



undefined4 test_3_blocks_variant_374_edges_8(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    do {
      if (iVar1 == 0) {
        puts("block 3");
      }
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._112_4_;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_08051125(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    do {
      if (iVar1 == 0) {
        puts("block 3");
      }
      puts("block 4");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._112_4_;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_375_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) break;
    puts("block 4");
    if (conditions._108_4_ == 0) goto LAB_08051178;
  } while (conditions._112_4_ == 0);
  puts("block 3");
  if (conditions._104_4_ != 0) {
    uVar1 = FUN_0805118b();
    return uVar1;
  }
LAB_08051178:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805118b(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) break;
    puts("block 4");
    if (conditions._108_4_ == 0) goto LAB_08051178;
  } while (conditions._112_4_ == 0);
  puts("block 3");
  if (conditions._104_4_ != 0) {
    uVar1 = FUN_0805118b();
    return uVar1;
  }
LAB_08051178:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_376_edges_8(void)

{
  undefined4 uVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_080511de;
    } while (conditions._112_4_ != 0);
  }
  puts("block 3");
  if (conditions._104_4_ != 0) {
    uVar1 = FUN_080511f1();
    return uVar1;
  }
LAB_080511de:
  puts("exit block");
  return 0;
}



undefined4 FUN_080511f1(void)

{
  undefined4 uVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_080511de;
    } while (conditions._112_4_ != 0);
  }
  puts("block 3");
  if (conditions._104_4_ != 0) {
    uVar1 = FUN_080511f1();
    return uVar1;
  }
LAB_080511de:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_377_edges_8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  do {
    if (iVar1 == 0) {
      puts("block 3");
      if (conditions._104_4_ != 0) {
        uVar2 = FUN_08051257();
        return uVar2;
      }
      break;
    }
    puts("block 4");
    iVar1 = conditions._112_4_;
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_08051257(void)

{
  int iVar1;
  undefined4 uVar2;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  do {
    if (iVar1 == 0) {
      puts("block 3");
      if (conditions._104_4_ != 0) {
        uVar2 = FUN_08051257();
        return uVar2;
      }
      break;
    }
    puts("block 4");
    iVar1 = conditions._112_4_;
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_378_edges_8(void)

{
  undefined4 uVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    while (puts("block 4"), conditions._108_4_ != 0) {
      if (conditions._112_4_ == 0) goto LAB_080512d5;
    }
  }
LAB_080512d5:
  puts("block 3");
  if (conditions._104_4_ == 0) {
    puts("exit block");
    return 0;
  }
  uVar1 = FUN_080512bd();
  return uVar1;
}



undefined4 FUN_080512bd(void)

{
  undefined4 uVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    while (puts("block 4"), conditions._108_4_ != 0) {
      if (conditions._112_4_ == 0) goto LAB_080512d5;
    }
  }
LAB_080512d5:
  puts("block 3");
  if (conditions._104_4_ == 0) {
    puts("exit block");
    return 0;
  }
  uVar1 = FUN_080512bd();
  return uVar1;
}



undefined4 test_3_blocks_variant_379_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) break;
    puts("block 4");
    if (conditions._108_4_ == 0) goto LAB_08051310;
  } while (conditions._112_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._104_4_ != 0);
LAB_08051310:
  puts("exit block");
  return 0;
}



undefined4 FUN_08051323(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) break;
    puts("block 4");
    if (conditions._108_4_ == 0) goto LAB_08051310;
  } while (conditions._112_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._104_4_ != 0);
LAB_08051310:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_380_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08051376;
    } while (conditions._112_4_ != 0);
  }
  do {
    puts("block 3");
  } while (conditions._104_4_ != 0);
LAB_08051376:
  puts("exit block");
  return 0;
}



undefined4 FUN_08051389(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08051376;
    } while (conditions._112_4_ != 0);
  }
  do {
    puts("block 3");
  } while (conditions._104_4_ != 0);
LAB_08051376:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_381_edges_8(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  do {
    if (iVar1 == 0) goto LAB_08051407;
    puts("block 4");
    iVar1 = conditions._112_4_;
  } while (conditions._108_4_ != 0);
LAB_080513dc:
  puts("exit block");
  return 0;
LAB_08051407:
  do {
    puts("block 3");
  } while (conditions._104_4_ != 0);
  goto LAB_080513dc;
}



undefined4 FUN_080513ef(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  do {
    if (iVar1 == 0) goto LAB_08051407;
    puts("block 4");
    iVar1 = conditions._112_4_;
  } while (conditions._108_4_ != 0);
LAB_080513dc:
  puts("exit block");
  return 0;
LAB_08051407:
  do {
    puts("block 3");
  } while (conditions._104_4_ != 0);
  goto LAB_080513dc;
}



undefined4 test_3_blocks_variant_382_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while (puts("block 4"), conditions._108_4_ != 0) {
      if (conditions._112_4_ == 0) goto LAB_0805146d;
    }
  }
LAB_0805146d:
  do {
    puts("block 3");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_08051455(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while (puts("block 4"), conditions._108_4_ != 0) {
      if (conditions._112_4_ == 0) goto LAB_0805146d;
    }
  }
LAB_0805146d:
  do {
    puts("block 3");
  } while (conditions._104_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_383_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080514d3;
    while( true ) {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_080514a8;
      if (conditions._112_4_ == 0) break;
LAB_080514d3:
      puts("block 3");
      if (conditions._104_4_ == 0) {
LAB_080514a8:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_080514bb(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080514d3;
    while( true ) {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_080514a8;
      if (conditions._112_4_ == 0) break;
LAB_080514d3:
      puts("block 3");
      if (conditions._104_4_ == 0) {
LAB_080514a8:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_384_edges_8(void)

{
  while ((puts("block 2"), conditions._100_4_ != 0 || (puts("block 3"), conditions._104_4_ != 0))) {
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_0805150e;
    } while (conditions._112_4_ != 0);
  }
LAB_0805150e:
  puts("exit block");
  return 0;
}



undefined4 FUN_08051521(void)

{
  while ((puts("block 2"), conditions._100_4_ != 0 || (puts("block 3"), conditions._104_4_ != 0))) {
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_0805150e;
    } while (conditions._112_4_ != 0);
  }
LAB_0805150e:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_385_edges_8(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) goto LAB_0805159f;
  do {
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08051574;
    } while (conditions._112_4_ != 0);
LAB_0805159f:
    puts("block 3");
  } while (conditions._104_4_ != 0);
LAB_08051574:
  puts("exit block");
  return 0;
}



undefined4 FUN_08051587(void)

{
  puts("block 2");
  if (conditions._100_4_ == 0) goto LAB_0805159f;
  do {
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08051574;
    } while (conditions._112_4_ != 0);
LAB_0805159f:
    puts("block 3");
  } while (conditions._104_4_ != 0);
LAB_08051574:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_386_edges_8(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    do {
      if ((iVar1 == 0) && (puts("block 3"), conditions._104_4_ == 0)) {
        puts("exit block");
        return 0;
      }
      puts("block 4");
      iVar1 = conditions._112_4_;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_080515ed(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    do {
      if ((iVar1 == 0) && (puts("block 3"), conditions._104_4_ == 0)) {
        puts("exit block");
        return 0;
      }
      puts("block 4");
      iVar1 = conditions._112_4_;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_387_edges_8(void)

{
  int iVar1;
  
  while( true ) {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805166b;
    puts("block 4");
    iVar1 = conditions._112_4_;
    if (conditions._108_4_ == 0) break;
    while (iVar1 != 0) {
LAB_0805166b:
      puts("block 3");
      iVar1 = conditions._104_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08051653(void)

{
  int iVar1;
  
  while( true ) {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805166b;
    puts("block 4");
    iVar1 = conditions._112_4_;
    if (conditions._108_4_ == 0) break;
    while (iVar1 != 0) {
LAB_0805166b:
      puts("block 3");
      iVar1 = conditions._104_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_388_edges_8(void)

{
  do {
    while (puts("block 2"), conditions._100_4_ == 0) {
      do {
        puts("block 3");
      } while (conditions._104_4_ != 0);
    }
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_080516b9(void)

{
  do {
    while (puts("block 2"), conditions._100_4_ == 0) {
      do {
        puts("block 3");
      } while (conditions._104_4_ != 0);
    }
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_389_edges_8(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._112_4_;
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    }
    do {
      puts("block 3");
    } while (conditions._104_4_ != 0);
  } while( true );
}



undefined4 FUN_0805171f(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._112_4_;
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    }
    do {
      puts("block 3");
    } while (conditions._104_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_390_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805179d;
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._112_4_ == 0) break;
LAB_0805179d:
      puts("block 3");
    } while (conditions._104_4_ != 0);
  } while( true );
}



undefined4 FUN_08051785(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805179d;
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._112_4_ == 0) break;
LAB_0805179d:
      puts("block 3");
    } while (conditions._104_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_391_edges_8(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("block 3");
      iVar1 = conditions._104_4_;
      goto joined_r0x08051817;
    }
    do {
      puts("block 4");
      iVar1 = conditions._112_4_;
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
joined_r0x08051817:
    } while (iVar1 != 0);
  } while( true );
}



undefined4 FUN_080517eb(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("block 3");
      iVar1 = conditions._104_4_;
      goto joined_r0x08051817;
    }
    do {
      puts("block 4");
      iVar1 = conditions._112_4_;
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
joined_r0x08051817:
    } while (iVar1 != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_392_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08051869;
    do {
      do {
        puts("block 4");
        if (conditions._108_4_ == 0) {
          puts("exit block");
          return 0;
        }
      } while (conditions._112_4_ != 0);
LAB_08051869:
      puts("block 3");
    } while (conditions._104_4_ != 0);
  } while( true );
}



undefined4 FUN_08051851(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08051869;
    do {
      do {
        puts("block 4");
        if (conditions._108_4_ == 0) {
          puts("exit block");
          return 0;
        }
      } while (conditions._112_4_ != 0);
LAB_08051869:
      puts("block 3");
    } while (conditions._104_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_393_edges_8(void)

{
  int iVar1;
  
FUN_080518b7:
  puts("block 2");
  iVar1 = conditions._100_4_;
  do {
    if (iVar1 != 0) {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._112_4_ == 0) goto FUN_080518b7;
    }
    puts("block 3");
    iVar1 = conditions._104_4_;
  } while( true );
}



undefined4 FUN_080518b7(void)

{
  int iVar1;
  
code_r0x080518b7:
  puts("block 2");
  iVar1 = conditions._100_4_;
  do {
    if (iVar1 != 0) {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._112_4_ == 0) goto code_r0x080518b7;
    }
    puts("block 3");
    iVar1 = conditions._104_4_;
  } while( true );
}



undefined4 test_3_blocks_variant_394_edges_8(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    while (iVar1 == 0) {
      puts("block 3");
      iVar1 = conditions._104_4_;
    }
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0805191d(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    while (iVar1 == 0) {
      puts("block 3");
      iVar1 = conditions._104_4_;
    }
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_395_edges_8(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  do {
    while (iVar1 == 0) {
      puts("block 3");
      iVar1 = conditions._104_4_;
    }
    puts("block 4");
    iVar1 = conditions._112_4_;
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_08051983(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  do {
    while (iVar1 == 0) {
      puts("block 3");
      iVar1 = conditions._104_4_;
    }
    puts("block 4");
    iVar1 = conditions._112_4_;
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_396_edges_8(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 3");
      puts("block 4");
      iVar1 = conditions._112_4_;
      if (conditions._108_4_ == 0) goto LAB_080519d6;
    }
  }
LAB_080519d6:
  puts("exit block");
  return 0;
}



undefined4 FUN_080519e9(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 3");
      puts("block 4");
      iVar1 = conditions._112_4_;
      if (conditions._108_4_ == 0) goto LAB_080519d6;
    }
  }
LAB_080519d6:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_397_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 3");
      do {
        puts("block 4");
        if (conditions._108_4_ == 0) goto LAB_08051a3c;
      } while (conditions._112_4_ != 0);
    }
  }
LAB_08051a3c:
  puts("exit block");
  return 0;
}



undefined4 FUN_08051a4f(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 3");
      do {
        puts("block 4");
        if (conditions._108_4_ == 0) goto LAB_08051a3c;
      } while (conditions._112_4_ != 0);
    }
  }
LAB_08051a3c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_398_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08051aa2:
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08051aa2;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_08051ab5(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08051aa2:
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08051aa2;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_399_edges_8(void)

{
FUN_08051b1b:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto FUN_08051b1b;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_08051b1b(void)

{
code_r0x08051b1b:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto code_r0x08051b1b;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_400_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08051b6e;
  } while (conditions._104_4_ == 0);
  puts("block 3");
  if (conditions._108_4_ != 0) {
    puts("block 4");
    if (conditions._112_4_ != 0) {
      uVar1 = FUN_08051b81();
      return uVar1;
    }
  }
LAB_08051b6e:
  puts("exit block");
  return 0;
}



undefined4 FUN_08051b81(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08051b6e;
  } while (conditions._104_4_ == 0);
  puts("block 3");
  if (conditions._108_4_ != 0) {
    puts("block 4");
    if (conditions._112_4_ != 0) {
      uVar1 = FUN_08051b81();
      return uVar1;
    }
  }
LAB_08051b6e:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_401_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08051bd4;
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
    if (conditions._108_4_ == 0) break;
    puts("block 4");
  } while (conditions._112_4_ != 0);
LAB_08051bd4:
  puts("exit block");
  return 0;
}



undefined4 FUN_08051be7(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08051bd4;
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
    if (conditions._108_4_ == 0) break;
    puts("block 4");
  } while (conditions._112_4_ != 0);
LAB_08051bd4:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_402_edges_8(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08051c3a;
  } while (conditions._104_4_ == 0);
  puts("block 3");
  iVar1 = conditions._108_4_;
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._112_4_;
  }
LAB_08051c3a:
  puts("exit block");
  return 0;
}



undefined4 FUN_08051c4d(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08051c3a;
  } while (conditions._104_4_ == 0);
  puts("block 3");
  iVar1 = conditions._108_4_;
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._112_4_;
  }
LAB_08051c3a:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_403_edges_8(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_08051ca0;
      puts("block 4");
      iVar1 = conditions._112_4_;
    }
  }
LAB_08051ca0:
  puts("exit block");
  return 0;
}



undefined4 FUN_08051cb3(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_08051ca0;
      puts("block 4");
      iVar1 = conditions._112_4_;
    }
  }
LAB_08051ca0:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_404_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 3");
      if (conditions._108_4_ == 0) break;
      do {
        puts("block 4");
      } while (conditions._112_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08051d19(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 3");
      if (conditions._108_4_ == 0) break;
      do {
        puts("block 4");
      } while (conditions._112_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_405_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08051d6c;
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), conditions._108_4_ != 0) {
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
LAB_08051d6c:
  puts("exit block");
  return 0;
}



undefined4 FUN_08051d7f(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08051d6c;
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), conditions._108_4_ != 0) {
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
LAB_08051d6c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_406_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) goto LAB_08051dd2;
    } while (conditions._104_4_ == 0);
    puts("block 3");
  } while (conditions._108_4_ == 0);
  puts("block 4");
  if (conditions._112_4_ != 0) {
    uVar1 = FUN_08051de5();
    return uVar1;
  }
LAB_08051dd2:
  puts("exit block");
  return 0;
}



undefined4 FUN_08051de5(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) goto LAB_08051dd2;
    } while (conditions._104_4_ == 0);
    puts("block 3");
  } while (conditions._108_4_ == 0);
  puts("block 4");
  if (conditions._112_4_ != 0) {
    uVar1 = FUN_08051de5();
    return uVar1;
  }
LAB_08051dd2:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_407_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while (puts("block 3"), conditions._108_4_ != 0) {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_08051e38;
      }
    }
  }
LAB_08051e38:
  puts("exit block");
  return 0;
}



undefined4 FUN_08051e4b(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while (puts("block 3"), conditions._108_4_ != 0) {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_08051e38;
      }
    }
  }
LAB_08051e38:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_408_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08051e9e;
  } while ((conditions._104_4_ == 0) || (puts("block 3"), conditions._108_4_ == 0));
  do {
    puts("block 4");
  } while (conditions._112_4_ != 0);
LAB_08051e9e:
  puts("exit block");
  return 0;
}



undefined4 FUN_08051eb1(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08051e9e;
  } while ((conditions._104_4_ == 0) || (puts("block 3"), conditions._108_4_ == 0));
  do {
    puts("block 4");
  } while (conditions._112_4_ != 0);
LAB_08051e9e:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_409_edges_8(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    do {
      puts("block 3");
      if (conditions._108_4_ == 0) break;
      puts("block 4");
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_08051f17(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    do {
      puts("block 3");
      if (conditions._108_4_ == 0) break;
      puts("block 4");
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_410_edges_8(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 3");
      iVar1 = conditions._108_4_;
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._112_4_;
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08051f7d(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 3");
      iVar1 = conditions._108_4_;
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._112_4_;
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_411_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while (puts("block 3"), conditions._108_4_ != 0) {
        do {
          puts("block 4");
        } while (conditions._112_4_ != 0);
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08051fe3(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while (puts("block 3"), conditions._108_4_ != 0) {
        do {
          puts("block 4");
        } while (conditions._112_4_ != 0);
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_412_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08052036;
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._108_4_ == 0);
  puts("block 4");
  if (conditions._112_4_ != 0) {
    uVar1 = FUN_08052049();
    return uVar1;
  }
LAB_08052036:
  puts("exit block");
  return 0;
}



undefined4 FUN_08052049(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08052036;
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._108_4_ == 0);
  puts("block 4");
  if (conditions._112_4_ != 0) {
    uVar1 = FUN_08052049();
    return uVar1;
  }
LAB_08052036:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_413_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805209c;
  } while (conditions._104_4_ == 0);
  do {
    do {
      puts("block 3");
    } while (conditions._108_4_ == 0);
    puts("block 4");
  } while (conditions._112_4_ != 0);
LAB_0805209c:
  puts("exit block");
  return 0;
}



undefined4 FUN_080520af(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805209c;
  } while (conditions._104_4_ == 0);
  do {
    do {
      puts("block 3");
    } while (conditions._108_4_ == 0);
    puts("block 4");
  } while (conditions._112_4_ != 0);
LAB_0805209c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_414_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08052102;
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._108_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._112_4_ != 0);
LAB_08052102:
  puts("exit block");
  return 0;
}



undefined4 FUN_08052115(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08052102;
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._108_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._112_4_ != 0);
LAB_08052102:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_415_edges_8(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      do {
        puts("block 3");
      } while (conditions._108_4_ == 0);
      puts("block 4");
      iVar1 = conditions._112_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0805217b(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      do {
        puts("block 3");
      } while (conditions._108_4_ == 0);
      puts("block 4");
      iVar1 = conditions._112_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_416_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      do {
        puts("block 3");
      } while (conditions._108_4_ == 0);
      do {
        puts("block 4");
      } while (conditions._112_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_080521e1(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      do {
        puts("block 3");
      } while (conditions._108_4_ == 0);
      do {
        puts("block 4");
      } while (conditions._112_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_417_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    do {
      puts("block 3");
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_08052247(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    do {
      puts("block 3");
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_418_edges_8(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) goto LAB_0805229a;
    } while (conditions._104_4_ == 0);
    puts("block 3");
    if (conditions._108_4_ == 0) goto LAB_0805229a;
  } while (conditions._112_4_ == 0);
  puts("block 4");
LAB_0805229a:
  puts("exit block");
  return 0;
}



undefined4 FUN_080522ad(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) goto LAB_0805229a;
    } while (conditions._104_4_ == 0);
    puts("block 3");
    if (conditions._108_4_ == 0) goto LAB_0805229a;
  } while (conditions._112_4_ == 0);
  puts("block 4");
LAB_0805229a:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_419_edges_8(void)

{
  undefined4 uVar1;
  
  while( true ) {
    puts("block 2");
    if (conditions._100_4_ == 0) break;
    if (conditions._104_4_ != 0) {
      puts("block 3");
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        puts("block 4");
        uVar1 = FUN_08052313();
        return uVar1;
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08052313(void)

{
  undefined4 uVar1;
  
  while( true ) {
    puts("block 2");
    if (conditions._100_4_ == 0) break;
    if (conditions._104_4_ != 0) {
      puts("block 3");
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        puts("block 4");
        uVar1 = FUN_08052313();
        return uVar1;
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_420_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_08052366;
        if (conditions._112_4_ == 0) break;
        puts("block 4");
      }
    }
  }
LAB_08052366:
  puts("exit block");
  return 0;
}



undefined4 FUN_08052379(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_08052366;
        if (conditions._112_4_ == 0) break;
        puts("block 4");
      }
    }
  }
LAB_08052366:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_421_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 3");
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        do {
          puts("block 4");
        } while( true );
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_080523df(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 3");
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        do {
          puts("block 4");
        } while( true );
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_422_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08052432;
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
    if (conditions._108_4_ == 0) goto LAB_08052432;
  } while (conditions._112_4_ == 0);
  puts("block 4");
LAB_08052432:
  puts("exit block");
  return 0;
}



undefined4 FUN_08052445(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08052432;
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
    if (conditions._108_4_ == 0) goto LAB_08052432;
  } while (conditions._112_4_ == 0);
  puts("block 4");
LAB_08052432:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_423_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08052498;
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), conditions._108_4_ != 0) {
    if (conditions._112_4_ != 0) {
      puts("block 4");
      uVar1 = FUN_080524ab();
      return uVar1;
    }
  }
LAB_08052498:
  puts("exit block");
  return 0;
}



undefined4 FUN_080524ab(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08052498;
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), conditions._108_4_ != 0) {
    if (conditions._112_4_ != 0) {
      puts("block 4");
      uVar1 = FUN_080524ab();
      return uVar1;
    }
  }
LAB_08052498:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_424_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080524fe;
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), conditions._108_4_ != 0) {
    if (conditions._112_4_ != 0) {
      puts("block 4");
    }
  }
LAB_080524fe:
  puts("exit block");
  return 0;
}



undefined4 FUN_08052511(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080524fe;
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), conditions._108_4_ != 0) {
    if (conditions._112_4_ != 0) {
      puts("block 4");
    }
  }
LAB_080524fe:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_425_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08052564;
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), conditions._108_4_ != 0) {
    if (conditions._112_4_ != 0) {
      do {
        puts("block 4");
      } while( true );
    }
  }
LAB_08052564:
  puts("exit block");
  return 0;
}



undefined4 FUN_08052577(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08052564;
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), conditions._108_4_ != 0) {
    if (conditions._112_4_ != 0) {
      do {
        puts("block 4");
      } while( true );
    }
  }
LAB_08052564:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_426_edges_8(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_080525ca:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    while (puts("block 3"), conditions._108_4_ != 0) {
      if (conditions._112_4_ != 0) {
        puts("block 4");
        goto LAB_080525ca;
      }
    }
  } while( true );
}



undefined4 FUN_080525dd(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_080525ca:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    while (puts("block 3"), conditions._108_4_ != 0) {
      if (conditions._112_4_ != 0) {
        puts("block 4");
        goto LAB_080525ca;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_427_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    while (puts("block 3"), conditions._108_4_ != 0) {
      if (conditions._112_4_ != 0) {
        puts("block 4");
        uVar1 = FUN_08052643();
        return uVar1;
      }
    }
  } while( true );
}



undefined4 FUN_08052643(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    while (puts("block 3"), conditions._108_4_ != 0) {
      if (conditions._112_4_ != 0) {
        puts("block 4");
        uVar1 = FUN_08052643();
        return uVar1;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_428_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while (puts("block 3"), conditions._108_4_ != 0) {
        if (conditions._112_4_ != 0) {
          puts("block 4");
        }
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_080526a9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while (puts("block 3"), conditions._108_4_ != 0) {
        if (conditions._112_4_ != 0) {
          puts("block 4");
        }
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_429_edges_8(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    while (puts("block 3"), conditions._108_4_ != 0) {
      if (conditions._112_4_ != 0) {
        do {
          puts("block 4");
        } while( true );
      }
    }
  } while( true );
}



undefined4 FUN_0805270f(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    while (puts("block 3"), conditions._108_4_ != 0) {
      if (conditions._112_4_ != 0) {
        do {
          puts("block 4");
        } while( true );
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_430_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08052762;
    if (conditions._104_4_ == 0) break;
    puts("block 4");
    if (conditions._108_4_ == 0) goto LAB_08052762;
  } while (conditions._112_4_ == 0);
  puts("block 3");
LAB_08052762:
  puts("exit block");
  return 0;
}



undefined4 FUN_08052775(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08052762;
    if (conditions._104_4_ == 0) break;
    puts("block 4");
    if (conditions._108_4_ == 0) goto LAB_08052762;
  } while (conditions._112_4_ == 0);
  puts("block 3");
LAB_08052762:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_431_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_080527c8:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) {
      puts("block 3");
      goto LAB_080527c8;
    }
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_080527c8;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_080527db(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_080527c8:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) {
      puts("block 3");
      goto LAB_080527c8;
    }
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_080527c8;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_432_edges_8(void)

{
  int iVar1;
  int iVar2;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  iVar2 = conditions._100_4_;
  do {
    if (iVar2 == 0) {
LAB_0805282e:
      puts("exit block");
      return 0;
    }
    if (iVar1 == 0) {
      puts("block 3");
      goto LAB_0805282e;
    }
    puts("block 4");
    iVar1 = conditions._112_4_;
    iVar2 = conditions._108_4_;
  } while( true );
}



undefined4 FUN_08052841(void)

{
  int iVar1;
  int iVar2;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  iVar2 = conditions._100_4_;
  do {
    if (iVar2 == 0) {
LAB_0805282e:
      puts("exit block");
      return 0;
    }
    if (iVar1 == 0) {
      puts("block 3");
      goto LAB_0805282e;
    }
    puts("block 4");
    iVar1 = conditions._112_4_;
    iVar2 = conditions._108_4_;
  } while( true );
}



undefined4 test_3_blocks_variant_433_edges_8(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
LAB_08052894:
      puts("exit block");
      return 0;
    }
    do {
      if (iVar1 == 0) {
        puts("block 3");
        goto LAB_08052894;
      }
      puts("block 4");
      iVar1 = conditions._112_4_;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_080528a7(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
LAB_08052894:
      puts("exit block");
      return 0;
    }
    do {
      if (iVar1 == 0) {
        puts("block 3");
        goto LAB_08052894;
      }
      puts("block 4");
      iVar1 = conditions._112_4_;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_434_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_080528fa:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) break;
    puts("block 4");
    if (conditions._108_4_ == 0) goto LAB_080528fa;
  } while (conditions._112_4_ == 0);
  puts("block 3");
  uVar1 = FUN_0805290d();
  return uVar1;
}



undefined4 FUN_0805290d(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_080528fa:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) break;
    puts("block 4");
    if (conditions._108_4_ == 0) goto LAB_080528fa;
  } while (conditions._112_4_ == 0);
  puts("block 3");
  uVar1 = FUN_0805290d();
  return uVar1;
}



undefined4 test_3_blocks_variant_435_edges_8(void)

{
  undefined4 uVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      puts("block 3");
      uVar1 = FUN_08052973();
      return uVar1;
    }
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08052960;
    } while (conditions._112_4_ != 0);
  }
LAB_08052960:
  puts("exit block");
  return 0;
}



undefined4 FUN_08052973(void)

{
  undefined4 uVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      puts("block 3");
      uVar1 = FUN_08052973();
      return uVar1;
    }
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08052960;
    } while (conditions._112_4_ != 0);
  }
LAB_08052960:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_436_edges_8(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  iVar2 = conditions._100_4_;
  while( true ) {
    if (iVar2 == 0) {
      puts("exit block");
      return 0;
    }
    if (iVar1 == 0) break;
    puts("block 4");
    iVar1 = conditions._112_4_;
    iVar2 = conditions._108_4_;
  }
  puts("block 3");
  uVar3 = FUN_080529d9();
  return uVar3;
}



undefined4 FUN_080529d9(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  iVar2 = conditions._100_4_;
  while( true ) {
    if (iVar2 == 0) {
      puts("exit block");
      return 0;
    }
    if (iVar1 == 0) break;
    puts("block 4");
    iVar1 = conditions._112_4_;
    iVar2 = conditions._108_4_;
  }
  puts("block 3");
  uVar3 = FUN_080529d9();
  return uVar3;
}



undefined4 test_3_blocks_variant_437_edges_8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    do {
      if (iVar1 == 0) {
        puts("block 3");
        uVar2 = FUN_08052a3f();
        return uVar2;
      }
      puts("block 4");
      iVar1 = conditions._112_4_;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_08052a3f(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    do {
      if (iVar1 == 0) {
        puts("block 3");
        uVar2 = FUN_08052a3f();
        return uVar2;
      }
      puts("block 4");
      iVar1 = conditions._112_4_;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_438_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08052a92:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) break;
    puts("block 4");
    if (conditions._108_4_ == 0) goto LAB_08052a92;
  } while (conditions._112_4_ == 0);
  do {
    puts("block 3");
  } while( true );
}



undefined4 FUN_08052aa5(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08052a92:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) break;
    puts("block 4");
    if (conditions._108_4_ == 0) goto LAB_08052a92;
  } while (conditions._112_4_ == 0);
  do {
    puts("block 3");
  } while( true );
}



undefined4 test_3_blocks_variant_439_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      do {
        puts("block 3");
      } while( true );
    }
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08052af8;
    } while (conditions._112_4_ != 0);
  }
LAB_08052af8:
  puts("exit block");
  return 0;
}



undefined4 FUN_08052b0b(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      do {
        puts("block 3");
      } while( true );
    }
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08052af8;
    } while (conditions._112_4_ != 0);
  }
LAB_08052af8:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_440_edges_8(void)

{
  int iVar1;
  int iVar2;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  iVar2 = conditions._100_4_;
  while( true ) {
    if (iVar2 == 0) {
      puts("exit block");
      return 0;
    }
    if (iVar1 == 0) break;
    puts("block 4");
    iVar1 = conditions._112_4_;
    iVar2 = conditions._108_4_;
  }
  do {
    puts("block 3");
  } while( true );
}



undefined4 FUN_08052b71(void)

{
  int iVar1;
  int iVar2;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  iVar2 = conditions._100_4_;
  while( true ) {
    if (iVar2 == 0) {
      puts("exit block");
      return 0;
    }
    if (iVar1 == 0) break;
    puts("block 4");
    iVar1 = conditions._112_4_;
    iVar2 = conditions._108_4_;
  }
  do {
    puts("block 3");
  } while( true );
}



undefined4 test_3_blocks_variant_441_edges_8(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    do {
      if (iVar1 == 0) {
        do {
          puts("block 3");
        } while( true );
      }
      puts("block 4");
      iVar1 = conditions._112_4_;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_08052bd7(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    do {
      if (iVar1 == 0) {
        do {
          puts("block 3");
        } while( true );
      }
      puts("block 4");
      iVar1 = conditions._112_4_;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_442_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_08052c5e;
    while( true ) {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08052c2a;
      if (conditions._112_4_ == 0) break;
LAB_08052c5e:
      puts("block 3");
    }
  }
LAB_08052c2a:
  puts("exit block");
  return 0;
}



undefined4 FUN_08052c3d(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_08052c5e;
    while( true ) {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08052c2a;
      if (conditions._112_4_ == 0) break;
LAB_08052c5e:
      puts("block 3");
    }
  }
LAB_08052c2a:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_443_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      puts("block 3");
    }
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08052c90;
    } while (conditions._112_4_ != 0);
  }
LAB_08052c90:
  puts("exit block");
  return 0;
}



undefined4 FUN_08052ca3(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      puts("block 3");
    }
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08052c90;
    } while (conditions._112_4_ != 0);
  }
LAB_08052c90:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_444_edges_8(void)

{
  int iVar1;
  int iVar2;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  iVar2 = conditions._100_4_;
  while (iVar2 != 0) {
    if (iVar1 == 0) {
      puts("block 3");
    }
    puts("block 4");
    iVar1 = conditions._112_4_;
    iVar2 = conditions._108_4_;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08052d09(void)

{
  int iVar1;
  int iVar2;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  iVar2 = conditions._100_4_;
  while (iVar2 != 0) {
    if (iVar1 == 0) {
      puts("block 3");
    }
    puts("block 4");
    iVar1 = conditions._112_4_;
    iVar2 = conditions._108_4_;
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_445_edges_8(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      if (iVar1 == 0) {
        puts("block 3");
      }
      puts("block 4");
      iVar1 = conditions._112_4_;
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08052d6f(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      if (iVar1 == 0) {
        puts("block 3");
      }
      puts("block 4");
      iVar1 = conditions._112_4_;
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_446_edges_8(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      puts("block 3");
      if (conditions._108_4_ != 0) {
        uVar1 = FUN_08052dd5();
        return uVar1;
      }
    }
    else {
      puts("block 4");
      if (conditions._112_4_ != 0) {
        uVar1 = FUN_08052dd5();
        return uVar1;
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08052dd5(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      puts("block 3");
      if (conditions._108_4_ != 0) {
        uVar1 = FUN_08052dd5();
        return uVar1;
      }
    }
    else {
      puts("block 4");
      if (conditions._112_4_ != 0) {
        uVar1 = FUN_08052dd5();
        return uVar1;
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_447_edges_8(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if ((conditions._100_4_ != 0) &&
     (((conditions._104_4_ == 0 || (puts("block 4"), conditions._112_4_ != 0)) &&
      (puts("block 3"), conditions._108_4_ != 0)))) {
    uVar1 = FUN_08052e3b();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08052e3b(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if ((conditions._100_4_ != 0) &&
     (((conditions._104_4_ == 0 || (puts("block 4"), conditions._112_4_ != 0)) &&
      (puts("block 3"), conditions._108_4_ != 0)))) {
    uVar1 = FUN_08052e3b();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_448_edges_8(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      puts("block 3");
      if (conditions._108_4_ != 0) {
        uVar1 = FUN_08052ea1();
        return uVar1;
      }
    }
    else {
      do {
        puts("block 4");
      } while (conditions._112_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08052ea1(void)

{
  undefined4 uVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      puts("block 3");
      if (conditions._108_4_ != 0) {
        uVar1 = FUN_08052ea1();
        return uVar1;
      }
    }
    else {
      do {
        puts("block 4");
      } while (conditions._112_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_449_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08052ef4;
  } while ((conditions._104_4_ != 0) && (puts("block 4"), conditions._112_4_ == 0));
  puts("block 3");
  if (conditions._108_4_ != 0) {
    uVar1 = FUN_08052f07();
    return uVar1;
  }
LAB_08052ef4:
  puts("exit block");
  return 0;
}



undefined4 FUN_08052f07(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08052ef4;
  } while ((conditions._104_4_ != 0) && (puts("block 4"), conditions._112_4_ == 0));
  puts("block 3");
  if (conditions._108_4_ != 0) {
    uVar1 = FUN_08052f07();
    return uVar1;
  }
LAB_08052ef4:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_450_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08052f5a:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) {
      puts("block 3");
      if (conditions._108_4_ != 0) {
        uVar1 = FUN_08052f6d();
        return uVar1;
      }
      goto LAB_08052f5a;
    }
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_08052f6d(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08052f5a:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) {
      puts("block 3");
      if (conditions._108_4_ != 0) {
        uVar1 = FUN_08052f6d();
        return uVar1;
      }
      goto LAB_08052f5a;
    }
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_451_edges_8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  if (conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._112_4_;
    }
    puts("block 3");
    if (conditions._108_4_ != 0) {
      uVar2 = FUN_08052fd3();
      return uVar2;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08052fd3(void)

{
  int iVar1;
  undefined4 uVar2;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  if (conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._112_4_;
    }
    puts("block 3");
    if (conditions._108_4_ != 0) {
      uVar2 = FUN_08052fd3();
      return uVar2;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_452_edges_8(void)

{
  int iVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_0805305a;
    puts("block 4");
    iVar1 = conditions._112_4_;
    while (iVar1 != 0) {
LAB_0805305a:
      puts("block 3");
      iVar1 = conditions._108_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08053039(void)

{
  int iVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_0805305a;
    puts("block 4");
    iVar1 = conditions._112_4_;
    while (iVar1 != 0) {
LAB_0805305a:
      puts("block 3");
      iVar1 = conditions._108_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_453_edges_8(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      do {
        puts("block 3");
      } while (conditions._108_4_ != 0);
    }
    else {
      do {
        puts("block 4");
      } while (conditions._112_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0805309f(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      do {
        puts("block 3");
      } while (conditions._108_4_ != 0);
    }
    else {
      do {
        puts("block 4");
      } while (conditions._112_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_454_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080530f2;
  } while ((conditions._104_4_ != 0) && (puts("block 4"), conditions._112_4_ == 0));
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
LAB_080530f2:
  puts("exit block");
  return 0;
}



undefined4 FUN_08053105(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080530f2;
  } while ((conditions._104_4_ != 0) && (puts("block 4"), conditions._112_4_ == 0));
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
LAB_080530f2:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_455_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_0805318c;
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
LAB_08053158:
  puts("exit block");
  return 0;
LAB_0805318c:
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
  goto LAB_08053158;
}



undefined4 FUN_0805316b(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_0805318c;
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
LAB_08053158:
  puts("exit block");
  return 0;
LAB_0805318c:
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
  goto LAB_08053158;
}



undefined4 test_3_blocks_variant_456_edges_8(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  if (conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._112_4_;
    }
    do {
      puts("block 3");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_080531d1(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  if (conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._112_4_;
    }
    do {
      puts("block 3");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_457_edges_8(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_08053258;
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) break;
LAB_08053258:
      puts("block 3");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08053237(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_08053258;
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) break;
LAB_08053258:
      puts("block 3");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_458_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_080532be;
    while (puts("block 4"), conditions._112_4_ != 0) {
LAB_080532be:
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_0805328a;
    }
  }
LAB_0805328a:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805329d(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_080532be;
    while (puts("block 4"), conditions._112_4_ != 0) {
LAB_080532be:
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_0805328a;
    }
  }
LAB_0805328a:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_459_edges_8(void)

{
  while ((puts("block 2"), conditions._100_4_ != 0 &&
         ((conditions._104_4_ != 0 || (puts("block 3"), conditions._108_4_ != 0))))) {
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08053303(void)

{
  while ((puts("block 2"), conditions._100_4_ != 0 &&
         ((conditions._104_4_ != 0 || (puts("block 3"), conditions._108_4_ != 0))))) {
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_460_edges_8(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_0805338a;
    do {
      do {
        puts("block 4");
      } while (conditions._112_4_ != 0);
LAB_0805338a:
      puts("block 3");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08053369(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_0805338a;
    do {
      do {
        puts("block 4");
      } while (conditions._112_4_ != 0);
LAB_0805338a:
      puts("block 3");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_461_edges_8(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_080533f0;
    puts("block 4");
    iVar1 = conditions._112_4_;
    while (iVar1 != 0) {
LAB_080533f0:
      puts("block 3");
      iVar1 = conditions._108_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_080533cf(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_080533f0;
    puts("block 4");
    iVar1 = conditions._112_4_;
    while (iVar1 != 0) {
LAB_080533f0:
      puts("block 3");
      iVar1 = conditions._108_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_462_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      do {
        puts("block 3");
      } while (conditions._108_4_ != 0);
    }
    else {
      do {
        puts("block 4");
      } while (conditions._112_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08053435(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      do {
        puts("block 3");
      } while (conditions._108_4_ != 0);
    }
    else {
      do {
        puts("block 4");
      } while (conditions._112_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_463_edges_8(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._112_4_;
    }
    do {
      puts("block 3");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0805349b(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._112_4_;
    }
    do {
      puts("block 3");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_464_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) goto LAB_08053522;
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) break;
LAB_08053522:
      puts("block 3");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_08053501(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) goto LAB_08053522;
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) break;
LAB_08053522:
      puts("block 3");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_465_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_08053588;
    do {
      do {
        puts("block 4");
      } while (conditions._112_4_ != 0);
LAB_08053588:
      puts("block 3");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08053567(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_08053588;
    do {
      do {
        puts("block 4");
      } while (conditions._112_4_ != 0);
LAB_08053588:
      puts("block 3");
    } while (conditions._108_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_466_edges_8(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  if (conditions._100_4_ != 0) {
    do {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._108_4_;
      }
      puts("block 4");
      iVar1 = conditions._112_4_;
    } while( true );
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_080535cd(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  if (conditions._100_4_ != 0) {
    do {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._108_4_;
      }
      puts("block 4");
      iVar1 = conditions._112_4_;
    } while( true );
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_467_edges_8(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    puts("block 4");
    if (conditions._108_4_ == 0) goto LAB_08053620;
  } while (conditions._112_4_ == 0);
  puts("block 3");
LAB_08053620:
  puts("exit block");
  return 0;
}



undefined4 FUN_08053633(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    puts("block 4");
    if (conditions._108_4_ == 0) goto LAB_08053620;
  } while (conditions._112_4_ == 0);
  puts("block 3");
LAB_08053620:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_468_edges_8(void)

{
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08053686;
    } while (conditions._112_4_ != 0);
  }
  puts("block 3");
LAB_08053686:
  puts("exit block");
  return 0;
}



undefined4 FUN_08053699(void)

{
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08053686;
    } while (conditions._112_4_ != 0);
  }
  puts("block 3");
LAB_08053686:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_469_edges_8(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
  } while (conditions._100_4_ == 0);
  do {
    if (iVar1 == 0) {
      puts("block 3");
      break;
    }
    puts("block 4");
    iVar1 = conditions._112_4_;
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_080536ff(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
  } while (conditions._100_4_ == 0);
  do {
    if (iVar1 == 0) {
      puts("block 3");
      break;
    }
    puts("block 4");
    iVar1 = conditions._112_4_;
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_470_edges_8(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (iVar1 == 0) {
        puts("block 3");
        puts("exit block");
        return 0;
      }
      puts("block 4");
      iVar1 = conditions._112_4_;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_08053765(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (iVar1 == 0) {
        puts("block 3");
        puts("exit block");
        return 0;
      }
      puts("block 4");
      iVar1 = conditions._112_4_;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_471_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    puts("block 4");
    if (conditions._108_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._112_4_ == 0);
  puts("block 3");
  uVar1 = FUN_080537cb();
  return uVar1;
}



undefined4 FUN_080537cb(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    puts("block 4");
    if (conditions._108_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._112_4_ == 0);
  puts("block 3");
  uVar1 = FUN_080537cb();
  return uVar1;
}



undefined4 test_3_blocks_variant_472_edges_8(void)

{
  undefined4 uVar1;
  
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  }
  puts("block 3");
  uVar1 = FUN_08053831();
  return uVar1;
}



undefined4 FUN_08053831(void)

{
  undefined4 uVar1;
  
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  }
  puts("block 3");
  uVar1 = FUN_08053831();
  return uVar1;
}



undefined4 test_3_blocks_variant_473_edges_8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
  } while (conditions._100_4_ == 0);
  do {
    if (iVar1 == 0) {
      puts("block 3");
      uVar2 = FUN_08053897();
      return uVar2;
    }
    puts("block 4");
    iVar1 = conditions._112_4_;
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_08053897(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
  } while (conditions._100_4_ == 0);
  do {
    if (iVar1 == 0) {
      puts("block 3");
      uVar2 = FUN_08053897();
      return uVar2;
    }
    puts("block 4");
    iVar1 = conditions._112_4_;
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_474_edges_8(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    puts("block 4");
    if (conditions._108_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._112_4_ == 0);
  do {
    puts("block 3");
  } while( true );
}



undefined4 FUN_080538fd(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    puts("block 4");
    if (conditions._108_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._112_4_ == 0);
  do {
    puts("block 3");
  } while( true );
}



undefined4 test_3_blocks_variant_475_edges_8(void)

{
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  }
  do {
    puts("block 3");
  } while( true );
}



undefined4 FUN_08053963(void)

{
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  }
  do {
    puts("block 3");
  } while( true );
}



undefined4 test_3_blocks_variant_476_edges_8(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
  } while (conditions._100_4_ == 0);
  do {
    if (iVar1 == 0) {
      do {
        puts("block 3");
      } while( true );
    }
    puts("block 4");
    iVar1 = conditions._112_4_;
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_080539c9(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
  } while (conditions._100_4_ == 0);
  do {
    if (iVar1 == 0) {
      do {
        puts("block 3");
      } while( true );
    }
    puts("block 4");
    iVar1 = conditions._112_4_;
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_477_edges_8(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) goto LAB_08053a50;
    while( true ) {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._112_4_ == 0) break;
LAB_08053a50:
      puts("block 3");
    }
  } while( true );
}



undefined4 FUN_08053a2f(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) goto LAB_08053a50;
    while( true ) {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._112_4_ == 0) break;
LAB_08053a50:
      puts("block 3");
    }
  } while( true );
}



undefined4 test_3_blocks_variant_478_edges_8(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) {
      puts("block 3");
    }
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_08053a95(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) {
      puts("block 3");
    }
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_479_edges_8(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
  } while (conditions._100_4_ == 0);
  do {
    if (iVar1 == 0) {
      puts("block 3");
    }
    puts("block 4");
    iVar1 = conditions._112_4_;
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_08053afb(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
  } while (conditions._100_4_ == 0);
  do {
    if (iVar1 == 0) {
      puts("block 3");
    }
    puts("block 4");
    iVar1 = conditions._112_4_;
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_480_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) {
    puts("block 3");
    if (conditions._108_4_ != 0) {
      uVar1 = FUN_08053b61();
      return uVar1;
    }
  }
  else {
    puts("block 4");
    if (conditions._112_4_ != 0) {
      uVar1 = FUN_08053b61();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08053b61(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) {
    puts("block 3");
    if (conditions._108_4_ != 0) {
      uVar1 = FUN_08053b61();
      return uVar1;
    }
  }
  else {
    puts("block 4");
    if (conditions._112_4_ != 0) {
      uVar1 = FUN_08053b61();
      return uVar1;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_481_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (((conditions._104_4_ == 0) || (puts("block 4"), conditions._112_4_ != 0)) &&
     (puts("block 3"), conditions._108_4_ != 0)) {
    uVar1 = FUN_08053bc7();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08053bc7(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (((conditions._104_4_ == 0) || (puts("block 4"), conditions._112_4_ != 0)) &&
     (puts("block 3"), conditions._108_4_ != 0)) {
    uVar1 = FUN_08053bc7();
    return uVar1;
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_482_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) {
    puts("block 3");
    if (conditions._108_4_ != 0) {
      uVar1 = FUN_08053c2d();
      return uVar1;
    }
  }
  else {
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08053c2d(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) {
    puts("block 3");
    if (conditions._108_4_ != 0) {
      uVar1 = FUN_08053c2d();
      return uVar1;
    }
  }
  else {
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_483_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
  } while ((conditions._104_4_ != 0) && (puts("block 4"), conditions._112_4_ == 0));
  puts("block 3");
  if (conditions._108_4_ == 0) {
    puts("exit block");
    return 0;
  }
  uVar1 = FUN_08053c93();
  return uVar1;
}



undefined4 FUN_08053c93(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
  } while ((conditions._104_4_ != 0) && (puts("block 4"), conditions._112_4_ == 0));
  puts("block 3");
  if (conditions._108_4_ == 0) {
    puts("exit block");
    return 0;
  }
  uVar1 = FUN_08053c93();
  return uVar1;
}



undefined4 test_3_blocks_variant_484_edges_8(void)

{
  undefined4 uVar1;
  
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
  puts("block 3");
  if (conditions._108_4_ == 0) {
    puts("exit block");
    return 0;
  }
  uVar1 = FUN_08053cf9();
  return uVar1;
}



undefined4 FUN_08053cf9(void)

{
  undefined4 uVar1;
  
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
  puts("block 3");
  if (conditions._108_4_ == 0) {
    puts("exit block");
    return 0;
  }
  uVar1 = FUN_08053cf9();
  return uVar1;
}



undefined4 test_3_blocks_variant_485_edges_8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
  } while (conditions._100_4_ == 0);
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._112_4_;
  }
  puts("block 3");
  if (conditions._108_4_ == 0) {
    puts("exit block");
    return 0;
  }
  uVar2 = FUN_08053d5f();
  return uVar2;
}



undefined4 FUN_08053d5f(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
  } while (conditions._100_4_ == 0);
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._112_4_;
  }
  puts("block 3");
  if (conditions._108_4_ == 0) {
    puts("exit block");
    return 0;
  }
  uVar2 = FUN_08053d5f();
  return uVar2;
}



undefined4 test_3_blocks_variant_486_edges_8(void)

{
  int iVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) goto LAB_08053de6;
  puts("block 4");
  iVar1 = conditions._112_4_;
  while (iVar1 != 0) {
LAB_08053de6:
    puts("block 3");
    iVar1 = conditions._108_4_;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08053dc5(void)

{
  int iVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) goto LAB_08053de6;
  puts("block 4");
  iVar1 = conditions._112_4_;
  while (iVar1 != 0) {
LAB_08053de6:
    puts("block 3");
    iVar1 = conditions._108_4_;
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_487_edges_8(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) {
    do {
      puts("block 3");
    } while (conditions._108_4_ != 0);
  }
  else {
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08053e2b(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) {
    do {
      puts("block 3");
    } while (conditions._108_4_ != 0);
  }
  else {
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_488_edges_8(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
  } while ((conditions._104_4_ != 0) && (puts("block 4"), conditions._112_4_ == 0));
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_08053e91(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
  } while ((conditions._104_4_ != 0) && (puts("block 4"), conditions._112_4_ == 0));
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_489_edges_8(void)

{
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_08053ef7(void)

{
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_490_edges_8(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
  } while (conditions._100_4_ == 0);
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._112_4_;
  }
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_08053f5d(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
  } while (conditions._100_4_ == 0);
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._112_4_;
  }
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_491_edges_8(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) goto LAB_08053fe4;
  do {
    puts("block 4");
    if (conditions._112_4_ == 0) break;
LAB_08053fe4:
    puts("block 3");
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_08053fc3(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) goto LAB_08053fe4;
  do {
    puts("block 4");
    if (conditions._112_4_ == 0) break;
LAB_08053fe4:
    puts("block 3");
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_492_edges_8(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) goto LAB_0805404a;
    while (puts("block 4"), conditions._112_4_ != 0) {
LAB_0805404a:
      puts("block 3");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_08054029(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) goto LAB_0805404a;
    while (puts("block 4"), conditions._112_4_ != 0) {
LAB_0805404a:
      puts("block 3");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_493_edges_8(void)

{
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if ((conditions._104_4_ == 0) && (puts("block 3"), conditions._108_4_ == 0)) break;
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0805408f(void)

{
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if ((conditions._104_4_ == 0) && (puts("block 3"), conditions._108_4_ == 0)) break;
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_494_edges_8(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) goto LAB_08054116;
  do {
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
LAB_08054116:
    puts("block 3");
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_080540f5(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) goto LAB_08054116;
  do {
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
LAB_08054116:
    puts("block 3");
  } while (conditions._108_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_495_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08054148;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    puts("block 3");
  }
  else {
    puts("block 4");
    if (conditions._112_4_ != 0) {
      uVar1 = FUN_0805415b();
      return uVar1;
    }
  }
LAB_08054148:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805415b(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08054148;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    puts("block 3");
  }
  else {
    puts("block 4");
    if (conditions._112_4_ != 0) {
      uVar1 = FUN_0805415b();
      return uVar1;
    }
  }
LAB_08054148:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_496_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080541ae;
  } while (conditions._104_4_ == 0);
  if ((conditions._108_4_ == 0) || (puts("block 4"), conditions._112_4_ != 0)) {
    puts("block 3");
  }
LAB_080541ae:
  puts("exit block");
  return 0;
}



undefined4 FUN_080541c1(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080541ae;
  } while (conditions._104_4_ == 0);
  if ((conditions._108_4_ == 0) || (puts("block 4"), conditions._112_4_ != 0)) {
    puts("block 3");
  }
LAB_080541ae:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_497_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08054214;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    puts("block 3");
  }
  else {
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
LAB_08054214:
  puts("exit block");
  return 0;
}



undefined4 FUN_08054227(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08054214;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    puts("block 3");
  }
  else {
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
LAB_08054214:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_498_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805427a;
  } while ((conditions._104_4_ == 0) ||
          ((conditions._108_4_ != 0 && (puts("block 4"), conditions._112_4_ == 0))));
  puts("block 3");
LAB_0805427a:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805428d(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805427a;
  } while ((conditions._104_4_ == 0) ||
          ((conditions._108_4_ != 0 && (puts("block 4"), conditions._112_4_ == 0))));
  puts("block 3");
LAB_0805427a:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_499_edges_8(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_080542e0:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) {
      puts("block 3");
      goto LAB_080542e0;
    }
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_080542f3(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_080542e0:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) {
      puts("block 3");
      goto LAB_080542e0;
    }
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_500_edges_8(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08054346;
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._112_4_;
  }
  puts("block 3");
LAB_08054346:
  puts("exit block");
  return 0;
}



undefined4 FUN_08054359(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08054346;
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._112_4_;
  }
  puts("block 3");
LAB_08054346:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_501_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080543ac;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    puts("block 3");
    uVar1 = FUN_080543bf();
    return uVar1;
  }
  puts("block 4");
  if (conditions._112_4_ != 0) {
    uVar1 = FUN_080543bf();
    return uVar1;
  }
LAB_080543ac:
  puts("exit block");
  return 0;
}



undefined4 FUN_080543bf(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080543ac;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    puts("block 3");
    uVar1 = FUN_080543bf();
    return uVar1;
  }
  puts("block 4");
  if (conditions._112_4_ != 0) {
    uVar1 = FUN_080543bf();
    return uVar1;
  }
LAB_080543ac:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_502_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08054412;
  } while (conditions._104_4_ == 0);
  if ((conditions._108_4_ == 0) || (puts("block 4"), conditions._112_4_ != 0)) {
    puts("block 3");
    uVar1 = FUN_08054425();
    return uVar1;
  }
LAB_08054412:
  puts("exit block");
  return 0;
}



undefined4 FUN_08054425(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08054412;
  } while (conditions._104_4_ == 0);
  if ((conditions._108_4_ == 0) || (puts("block 4"), conditions._112_4_ != 0)) {
    puts("block 3");
    uVar1 = FUN_08054425();
    return uVar1;
  }
LAB_08054412:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_503_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08054478;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    puts("block 3");
    uVar1 = FUN_0805448b();
    return uVar1;
  }
  do {
    puts("block 4");
  } while (conditions._112_4_ != 0);
LAB_08054478:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805448b(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08054478;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    puts("block 3");
    uVar1 = FUN_0805448b();
    return uVar1;
  }
  do {
    puts("block 4");
  } while (conditions._112_4_ != 0);
LAB_08054478:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_504_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while ((conditions._104_4_ == 0) ||
          ((conditions._108_4_ != 0 && (puts("block 4"), conditions._112_4_ == 0))));
  puts("block 3");
  uVar1 = FUN_080544f1();
  return uVar1;
}



undefined4 FUN_080544f1(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while ((conditions._104_4_ == 0) ||
          ((conditions._108_4_ != 0 && (puts("block 4"), conditions._112_4_ == 0))));
  puts("block 3");
  uVar1 = FUN_080544f1();
  return uVar1;
}



undefined4 test_3_blocks_variant_505_edges_8(void)

{
  undefined4 uVar1;
  
  while( true ) {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) break;
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
  puts("block 3");
  uVar1 = FUN_08054557();
  return uVar1;
}



undefined4 FUN_08054557(void)

{
  undefined4 uVar1;
  
  while( true ) {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) break;
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
  puts("block 3");
  uVar1 = FUN_08054557();
  return uVar1;
}



undefined4 test_3_blocks_variant_506_edges_8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._112_4_;
  }
  puts("block 3");
  uVar2 = FUN_080545bd();
  return uVar2;
}



undefined4 FUN_080545bd(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._112_4_;
  }
  puts("block 3");
  uVar2 = FUN_080545bd();
  return uVar2;
}



undefined4 test_3_blocks_variant_507_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08054610;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    do {
      puts("block 3");
    } while( true );
  }
  puts("block 4");
  if (conditions._112_4_ != 0) {
    uVar1 = FUN_08054623();
    return uVar1;
  }
LAB_08054610:
  puts("exit block");
  return 0;
}



undefined4 FUN_08054623(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08054610;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    do {
      puts("block 3");
    } while( true );
  }
  puts("block 4");
  if (conditions._112_4_ != 0) {
    uVar1 = FUN_08054623();
    return uVar1;
  }
LAB_08054610:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_508_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08054676;
  } while (conditions._104_4_ == 0);
  if ((conditions._108_4_ == 0) || (puts("block 4"), conditions._112_4_ != 0)) {
    do {
      puts("block 3");
    } while( true );
  }
LAB_08054676:
  puts("exit block");
  return 0;
}



undefined4 FUN_08054689(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08054676;
  } while (conditions._104_4_ == 0);
  if ((conditions._108_4_ == 0) || (puts("block 4"), conditions._112_4_ != 0)) {
    do {
      puts("block 3");
    } while( true );
  }
LAB_08054676:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_509_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080546dc;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    do {
      puts("block 3");
    } while( true );
  }
  do {
    puts("block 4");
  } while (conditions._112_4_ != 0);
LAB_080546dc:
  puts("exit block");
  return 0;
}



undefined4 FUN_080546ef(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080546dc;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    do {
      puts("block 3");
    } while( true );
  }
  do {
    puts("block 4");
  } while (conditions._112_4_ != 0);
LAB_080546dc:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_510_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while ((conditions._104_4_ == 0) ||
          ((conditions._108_4_ != 0 && (puts("block 4"), conditions._112_4_ == 0))));
  do {
    puts("block 3");
  } while( true );
}



undefined4 FUN_08054755(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while ((conditions._104_4_ == 0) ||
          ((conditions._108_4_ != 0 && (puts("block 4"), conditions._112_4_ == 0))));
  do {
    puts("block 3");
  } while( true );
}



undefined4 test_3_blocks_variant_511_edges_8(void)

{
  while( true ) {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) break;
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
  do {
    puts("block 3");
  } while( true );
}



undefined4 FUN_080547bb(void)

{
  while( true ) {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) break;
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
  }
  do {
    puts("block 3");
  } while( true );
}



undefined4 test_3_blocks_variant_512_edges_8(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._112_4_;
  }
  do {
    puts("block 3");
  } while( true );
}



undefined4 FUN_08054821(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._112_4_;
  }
  do {
    puts("block 3");
  } while( true );
}



undefined4 test_3_blocks_variant_513_edges_8(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08054874;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    puts("block 3");
  }
  puts("block 4");
  if (conditions._112_4_ != 0) {
    uVar1 = FUN_08054887();
    return uVar1;
  }
LAB_08054874:
  puts("exit block");
  return 0;
}



undefined4 FUN_08054887(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08054874;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    puts("block 3");
  }
  puts("block 4");
  if (conditions._112_4_ != 0) {
    uVar1 = FUN_08054887();
    return uVar1;
  }
LAB_08054874:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_514_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080548da;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) goto LAB_08054917;
  while (puts("block 4"), conditions._112_4_ != 0) {
LAB_08054917:
    puts("block 3");
  }
LAB_080548da:
  puts("exit block");
  return 0;
}



undefined4 FUN_080548ed(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080548da;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) goto LAB_08054917;
  while (puts("block 4"), conditions._112_4_ != 0) {
LAB_08054917:
    puts("block 3");
  }
LAB_080548da:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_515_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08054940;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    puts("block 3");
  }
  do {
    puts("block 4");
  } while (conditions._112_4_ != 0);
LAB_08054940:
  puts("exit block");
  return 0;
}



undefined4 FUN_08054953(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08054940;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    puts("block 3");
  }
  do {
    puts("block 4");
  } while (conditions._112_4_ != 0);
LAB_08054940:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_516_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) goto LAB_080549e3;
      while (puts("block 4"), conditions._112_4_ != 0) {
LAB_080549e3:
        puts("block 3");
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_080549b9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) goto LAB_080549e3;
      while (puts("block 4"), conditions._112_4_ != 0) {
LAB_080549e3:
        puts("block 3");
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_517_edges_8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) {
        puts("block 3");
      }
      do {
        puts("block 4");
      } while (conditions._112_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08054a1f(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) {
        puts("block 3");
      }
      do {
        puts("block 4");
      } while (conditions._112_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_518_edges_8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) goto LAB_08054aaf;
  do {
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
LAB_08054aaf:
    puts("block 3");
  } while( true );
}



undefined4 FUN_08054a85(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) goto LAB_08054aaf;
  do {
    do {
      puts("block 4");
    } while (conditions._112_4_ != 0);
LAB_08054aaf:
    puts("block 3");
  } while( true );
}



undefined4 test_3_blocks_variant_519_edges_9(void)

{
FUN_08054aeb:
  puts("block 2");
  do {
    puts("block 3");
    if (conditions._100_4_ == 0) {
LAB_08054ad8:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) goto FUN_08054aeb;
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08054ad8;
      if (conditions._112_4_ == 0) goto FUN_08054aeb;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_08054aeb(void)

{
code_r0x08054aeb:
  puts("block 2");
  do {
    puts("block 3");
    if (conditions._100_4_ == 0) {
LAB_08054ad8:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) goto code_r0x08054aeb;
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08054ad8;
      if (conditions._112_4_ == 0) goto code_r0x08054aeb;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_520_edges_9(void)

{
  int iVar1;
  
FUN_08054b5a:
  puts("block 2");
  do {
    puts("block 3");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
LAB_08054b47:
      puts("exit block");
      return 0;
    }
    while (iVar1 != 0) {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08054b47;
      iVar1 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto FUN_08054b5a;
    }
  } while( true );
}



undefined4 FUN_08054b5a(void)

{
  int iVar1;
  
code_r0x08054b5a:
  puts("block 2");
  do {
    puts("block 3");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
LAB_08054b47:
      puts("exit block");
      return 0;
    }
    while (iVar1 != 0) {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08054b47;
      iVar1 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto code_r0x08054b5a;
    }
  } while( true );
}



undefined4 test_3_blocks_variant_521_edges_9(void)

{
  int iVar1;
  
FUN_08054bc9:
  do {
    puts("block 2");
    while (puts("block 3"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        if (conditions._108_4_ == 0) {
          puts("exit block");
          return 0;
        }
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) goto FUN_08054bc9;
      }
    }
  } while( true );
}



undefined4 FUN_08054bc9(void)

{
  int iVar1;
  
code_r0x08054bc9:
  do {
    puts("block 2");
    while (puts("block 3"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        if (conditions._108_4_ == 0) {
          puts("exit block");
          return 0;
        }
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) goto code_r0x08054bc9;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_522_edges_9(void)

{
FUN_08054c38:
  do {
    puts("block 2");
    do {
      do {
        puts("block 3");
        if (conditions._100_4_ == 0) {
LAB_08054c25:
          puts("exit block");
          return 0;
        }
        if (conditions._104_4_ == 0) goto FUN_08054c38;
      } while (conditions._108_4_ == 0);
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08054c25;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_08054c38(void)

{
code_r0x08054c38:
  do {
    puts("block 2");
    do {
      do {
        puts("block 3");
        if (conditions._100_4_ == 0) {
LAB_08054c25:
          puts("exit block");
          return 0;
        }
        if (conditions._104_4_ == 0) goto code_r0x08054c38;
      } while (conditions._108_4_ == 0);
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08054c25;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_523_edges_9(void)

{
FUN_08054ca7:
  do {
    puts("block 2");
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) goto LAB_08054c94;
      if (conditions._104_4_ == 0) goto FUN_08054ca7;
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) {
LAB_08054c94:
        puts("exit block");
        return 0;
      }
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_08054ca7(void)

{
code_r0x08054ca7:
  do {
    puts("block 2");
    do {
      puts("block 3");
      if (conditions._100_4_ == 0) goto LAB_08054c94;
      if (conditions._104_4_ == 0) goto code_r0x08054ca7;
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) {
LAB_08054c94:
        puts("exit block");
        return 0;
      }
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_524_edges_9(void)

{
  int iVar1;
  
FUN_08054d16:
  puts("block 2");
  do {
    puts("block 3");
    if (conditions._100_4_ == 0) {
LAB_08054d03:
      puts("exit block");
      return 0;
    }
    iVar1 = conditions._108_4_;
    if (conditions._104_4_ == 0) goto FUN_08054d16;
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_08054d03;
    }
  } while( true );
}



undefined4 FUN_08054d16(void)

{
  int iVar1;
  
code_r0x08054d16:
  puts("block 2");
  do {
    puts("block 3");
    if (conditions._100_4_ == 0) {
LAB_08054d03:
      puts("exit block");
      return 0;
    }
    iVar1 = conditions._108_4_;
    if (conditions._104_4_ == 0) goto code_r0x08054d16;
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_08054d03;
    }
  } while( true );
}



undefined4 test_3_blocks_variant_525_edges_9(void)

{
  int iVar1;
  int iVar2;
  
FUN_08054d85:
  puts("block 2");
  do {
    puts("block 3");
    iVar1 = conditions._108_4_;
    iVar2 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    while( true ) {
      if (iVar2 == 0) goto FUN_08054d85;
      if (iVar1 == 0) break;
      puts("block 4");
      iVar1 = conditions._116_4_;
      iVar2 = conditions._112_4_;
    }
  } while( true );
}



undefined4 FUN_08054d85(void)

{
  int iVar1;
  int iVar2;
  
code_r0x08054d85:
  puts("block 2");
  do {
    puts("block 3");
    iVar1 = conditions._108_4_;
    iVar2 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    while( true ) {
      if (iVar2 == 0) goto code_r0x08054d85;
      if (iVar1 == 0) break;
      puts("block 4");
      iVar1 = conditions._116_4_;
      iVar2 = conditions._112_4_;
    }
  } while( true );
}



undefined4 test_3_blocks_variant_526_edges_9(void)

{
FUN_08054df4:
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      do {
        puts("block 4");
        if (conditions._108_4_ == 0) goto LAB_08054de1;
        if (conditions._112_4_ == 0) goto FUN_08054df4;
      } while (conditions._116_4_ != 0);
    }
  }
LAB_08054de1:
  puts("exit block");
  return 0;
}



undefined4 FUN_08054df4(void)

{
code_r0x08054df4:
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), conditions._104_4_ != 0) {
      do {
        puts("block 4");
        if (conditions._108_4_ == 0) goto LAB_08054de1;
        if (conditions._112_4_ == 0) goto code_r0x08054df4;
      } while (conditions._116_4_ != 0);
    }
  }
LAB_08054de1:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_527_edges_9(void)

{
FUN_08054e63:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08054e50:
      puts("exit block");
      return 0;
    }
    while (puts("block 3"), conditions._104_4_ != 0) {
      do {
        puts("block 4");
        if (conditions._108_4_ == 0) goto LAB_08054e50;
        if (conditions._112_4_ == 0) goto FUN_08054e63;
      } while (conditions._116_4_ != 0);
    }
  } while( true );
}



undefined4 FUN_08054e63(void)

{
code_r0x08054e63:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08054e50:
      puts("exit block");
      return 0;
    }
    while (puts("block 3"), conditions._104_4_ != 0) {
      do {
        puts("block 4");
        if (conditions._108_4_ == 0) goto LAB_08054e50;
        if (conditions._112_4_ == 0) goto code_r0x08054e63;
      } while (conditions._116_4_ != 0);
    }
  } while( true );
}



undefined4 test_3_blocks_variant_528_edges_9(void)

{
FUN_08054ed2:
  puts("block 2");
  if (conditions._100_4_ == 0) {
LAB_08054ebf:
    puts("exit block");
    return 0;
  }
  do {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08054ebf;
      if (conditions._112_4_ == 0) goto FUN_08054ed2;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_08054ed2(void)

{
code_r0x08054ed2:
  puts("block 2");
  if (conditions._100_4_ == 0) {
LAB_08054ebf:
    puts("exit block");
    return 0;
  }
  do {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08054ebf;
      if (conditions._112_4_ == 0) goto code_r0x08054ed2;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_529_edges_9(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08054f2e:
      puts("exit block");
      return 0;
    }
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08054f2e;
      if (conditions._108_4_ == 0) break;
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08054f2e;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_08054f41(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08054f2e:
      puts("exit block");
      return 0;
    }
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08054f2e;
      if (conditions._108_4_ == 0) break;
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08054f2e;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_530_edges_9(void)

{
  int iVar1;
  
  while ((puts("block 2"), conditions._100_4_ != 0 &&
         (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0))) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_08054f9d;
    }
  }
LAB_08054f9d:
  puts("exit block");
  return 0;
}



undefined4 FUN_08054fb0(void)

{
  int iVar1;
  
  while ((puts("block 2"), conditions._100_4_ != 0 &&
         (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0))) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_08054f9d;
    }
  }
LAB_08054f9d:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_531_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0805500c;
      if (conditions._108_4_ == 0) break;
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_0805500c;
      } while (conditions._116_4_ != 0);
    }
  }
LAB_0805500c:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805501f(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0805500c;
      if (conditions._108_4_ == 0) break;
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_0805500c;
      } while (conditions._116_4_ != 0);
    }
  }
LAB_0805500c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_532_edges_9(void)

{
FUN_0805508e:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805507b:
      puts("exit block");
      return 0;
    }
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0805507b;
      if (conditions._108_4_ == 0) break;
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto FUN_0805508e;
      } while (conditions._116_4_ != 0);
    }
  } while( true );
}



undefined4 FUN_0805508e(void)

{
code_r0x0805508e:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805507b:
      puts("exit block");
      return 0;
    }
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0805507b;
      if (conditions._108_4_ == 0) break;
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto code_r0x0805508e;
      } while (conditions._116_4_ != 0);
    }
  } while( true );
}



undefined4 test_3_blocks_variant_533_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      do {
        puts("block 3");
        if (conditions._104_4_ == 0) goto LAB_080550ea;
      } while (conditions._108_4_ == 0);
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_080550ea;
    } while (conditions._116_4_ != 0);
  }
LAB_080550ea:
  puts("exit block");
  return 0;
}



undefined4 FUN_080550fd(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      do {
        puts("block 3");
        if (conditions._104_4_ == 0) goto LAB_080550ea;
      } while (conditions._108_4_ == 0);
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_080550ea;
    } while (conditions._116_4_ != 0);
  }
LAB_080550ea:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_534_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08055159;
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08055159;
    } while (conditions._116_4_ != 0);
  }
LAB_08055159:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805516c(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08055159;
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08055159;
    } while (conditions._116_4_ != 0);
  }
LAB_08055159:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_535_edges_9(void)

{
  int iVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) goto LAB_080551c8;
      }
    }
  }
LAB_080551c8:
  puts("exit block");
  return 0;
}



undefined4 FUN_080551db(void)

{
  int iVar1;
  
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) goto LAB_080551c8;
      }
    }
  }
LAB_080551c8:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_536_edges_9(void)

{
  int iVar1;
  
FUN_0805524a:
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) goto FUN_0805524a;
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0805524a(void)

{
  int iVar1;
  
code_r0x0805524a:
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) goto code_r0x0805524a;
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_537_edges_9(void)

{
FUN_080552b9:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_080552a6:
      puts("exit block");
      return 0;
    }
    do {
      do {
        puts("block 3");
        if (conditions._104_4_ == 0) goto FUN_080552b9;
      } while (conditions._108_4_ == 0);
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_080552a6;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_080552b9(void)

{
code_r0x080552b9:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_080552a6:
      puts("exit block");
      return 0;
    }
    do {
      do {
        puts("block 3");
        if (conditions._104_4_ == 0) goto code_r0x080552b9;
      } while (conditions._108_4_ == 0);
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_080552a6;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_538_edges_9(void)

{
FUN_08055328:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08055315:
      puts("exit block");
      return 0;
    }
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto FUN_08055328;
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08055315;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_08055328(void)

{
code_r0x08055328:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08055315:
      puts("exit block");
      return 0;
    }
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto code_r0x08055328;
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08055315;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_539_edges_9(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    while (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) goto LAB_08055384;
      }
    }
  }
LAB_08055384:
  puts("exit block");
  return 0;
}



undefined4 FUN_08055397(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    while (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) goto LAB_08055384;
      }
    }
  }
LAB_08055384:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_540_edges_9(void)

{
  int iVar1;
  
FUN_08055406:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    while (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) goto FUN_08055406;
      }
    }
  } while( true );
}



undefined4 FUN_08055406(void)

{
  int iVar1;
  
code_r0x08055406:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    while (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) goto code_r0x08055406;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_541_edges_9(void)

{
  undefined4 uVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08055462;
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        puts("block 4");
        if (conditions._116_4_ != 0) {
          uVar1 = FUN_08055475();
          return uVar1;
        }
        goto LAB_08055462;
      }
    }
  }
LAB_08055462:
  puts("exit block");
  return 0;
}



undefined4 FUN_08055475(void)

{
  undefined4 uVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08055462;
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        puts("block 4");
        if (conditions._116_4_ != 0) {
          uVar1 = FUN_08055475();
          return uVar1;
        }
        goto LAB_08055462;
      }
    }
  }
LAB_08055462:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_542_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_080554d1;
      if (conditions._108_4_ == 0) break;
      if ((conditions._112_4_ != 0) && (puts("block 4"), conditions._116_4_ == 0))
      goto LAB_080554d1;
    }
  }
LAB_080554d1:
  puts("exit block");
  return 0;
}



undefined4 FUN_080554e4(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_080554d1;
      if (conditions._108_4_ == 0) break;
      if ((conditions._112_4_ != 0) && (puts("block 4"), conditions._116_4_ == 0))
      goto LAB_080554d1;
    }
  }
LAB_080554d1:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_543_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08055540;
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) goto LAB_08055595;
    }
  }
LAB_08055540:
  puts("exit block");
  return 0;
LAB_08055595:
  do {
    puts("block 4");
  } while (conditions._116_4_ != 0);
  goto LAB_08055540;
}



undefined4 FUN_08055553(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08055540;
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) goto LAB_08055595;
    }
  }
LAB_08055540:
  puts("exit block");
  return 0;
LAB_08055595:
  do {
    puts("block 4");
  } while (conditions._116_4_ != 0);
  goto LAB_08055540;
}



undefined4 test_3_blocks_variant_544_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_080555af;
    } while ((conditions._108_4_ != 0) &&
            ((conditions._112_4_ == 0 || (puts("block 4"), conditions._116_4_ != 0))));
  }
LAB_080555af:
  puts("exit block");
  return 0;
}



undefined4 FUN_080555c2(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_080555af;
    } while ((conditions._108_4_ != 0) &&
            ((conditions._112_4_ == 0 || (puts("block 4"), conditions._116_4_ != 0))));
  }
LAB_080555af:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_545_edges_9(void)

{
FUN_08055631:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805561e:
      puts("exit block");
      return 0;
    }
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0805561e;
      if (conditions._108_4_ == 0) goto FUN_08055631;
    } while (conditions._112_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_08055631(void)

{
code_r0x08055631:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805561e:
      puts("exit block");
      return 0;
    }
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0805561e;
      if (conditions._108_4_ == 0) goto code_r0x08055631;
    } while (conditions._112_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_546_edges_9(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0805568d;
      iVar1 = conditions._112_4_;
      if (conditions._108_4_ == 0) break;
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._116_4_;
      }
    }
  }
LAB_0805568d:
  puts("exit block");
  return 0;
}



undefined4 FUN_080556a0(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0805568d;
      iVar1 = conditions._112_4_;
      if (conditions._108_4_ == 0) break;
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._116_4_;
      }
    }
  }
LAB_0805568d:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_547_edges_9(void)

{
FUN_0805570f:
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  while (puts("block 3"), conditions._104_4_ != 0) {
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_080556fc;
      if (conditions._112_4_ == 0) goto FUN_0805570f;
    } while (conditions._116_4_ != 0);
  }
LAB_080556fc:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805570f(void)

{
code_r0x0805570f:
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  while (puts("block 3"), conditions._104_4_ != 0) {
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_080556fc;
      if (conditions._112_4_ == 0) goto code_r0x0805570f;
    } while (conditions._116_4_ != 0);
  }
LAB_080556fc:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_548_edges_9(void)

{
FUN_0805577e:
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while (puts("block 3"), conditions._104_4_ != 0) {
      do {
        puts("block 4");
        if (conditions._108_4_ == 0) {
          puts("exit block");
          return 0;
        }
        if (conditions._112_4_ == 0) goto FUN_0805577e;
      } while (conditions._116_4_ != 0);
    }
  } while( true );
}



undefined4 FUN_0805577e(void)

{
code_r0x0805577e:
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while (puts("block 3"), conditions._104_4_ != 0) {
      do {
        puts("block 4");
        if (conditions._108_4_ == 0) {
          puts("exit block");
          return 0;
        }
        if (conditions._112_4_ == 0) goto code_r0x0805577e;
      } while (conditions._116_4_ != 0);
    }
  } while( true );
}



undefined4 test_3_blocks_variant_549_edges_9(void)

{
FUN_080557ed:
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._112_4_ == 0) goto FUN_080557ed;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_080557ed(void)

{
code_r0x080557ed:
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    do {
      puts("block 3");
    } while (conditions._104_4_ == 0);
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._112_4_ == 0) goto code_r0x080557ed;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_550_edges_9(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) {
LAB_08055849:
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) break;
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08055849;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_0805585c(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) {
LAB_08055849:
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) break;
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08055849;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_551_edges_9(void)

{
  int iVar1;
  int iVar2;
  
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
    iVar1 = conditions._108_4_;
    iVar2 = conditions._104_4_;
    while( true ) {
      if (iVar2 == 0) {
        puts("exit block");
        return 0;
      }
      if (iVar1 == 0) break;
      puts("block 4");
      iVar1 = conditions._116_4_;
      iVar2 = conditions._112_4_;
    }
  } while( true );
}



undefined4 FUN_080558cb(void)

{
  int iVar1;
  int iVar2;
  
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    puts("block 3");
    iVar1 = conditions._108_4_;
    iVar2 = conditions._104_4_;
    while( true ) {
      if (iVar2 == 0) {
        puts("exit block");
        return 0;
      }
      if (iVar1 == 0) break;
      puts("block 4");
      iVar1 = conditions._116_4_;
      iVar2 = conditions._112_4_;
    }
  } while( true );
}



undefined4 test_3_blocks_variant_552_edges_9(void)

{
FUN_0805593a:
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) {
LAB_08055927:
      puts("exit block");
      return 0;
    }
    if (conditions._108_4_ == 0) goto FUN_0805593a;
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08055927;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_0805593a(void)

{
code_r0x0805593a:
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) {
LAB_08055927:
      puts("exit block");
      return 0;
    }
    if (conditions._108_4_ == 0) goto code_r0x0805593a;
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08055927;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_553_edges_9(void)

{
FUN_080559a9:
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) break;
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto FUN_080559a9;
      } while (conditions._116_4_ != 0);
    }
  } while( true );
}



undefined4 FUN_080559a9(void)

{
code_r0x080559a9:
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) break;
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto code_r0x080559a9;
      } while (conditions._116_4_ != 0);
    }
  } while( true );
}



undefined4 test_3_blocks_variant_554_edges_9(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      do {
        puts("block 3");
        if (conditions._104_4_ == 0) {
LAB_08055a05:
          puts("exit block");
          return 0;
        }
      } while (conditions._108_4_ == 0);
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08055a05;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_08055a18(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      do {
        puts("block 3");
        if (conditions._104_4_ == 0) {
LAB_08055a05:
          puts("exit block");
          return 0;
        }
      } while (conditions._108_4_ == 0);
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08055a05;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_555_edges_9(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08055a74;
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) {
LAB_08055a74:
        puts("exit block");
        return 0;
      }
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_08055a87(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08055a74;
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) {
LAB_08055a74:
        puts("exit block");
        return 0;
      }
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_556_edges_9(void)

{
  int iVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  while (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_08055ae3;
    }
  }
LAB_08055ae3:
  puts("exit block");
  return 0;
}



undefined4 FUN_08055af6(void)

{
  int iVar1;
  
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  while (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_08055ae3;
    }
  }
LAB_08055ae3:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_557_edges_9(void)

{
FUN_08055b65:
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto FUN_08055b65;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_08055b65(void)

{
code_r0x08055b65:
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto code_r0x08055b65;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_558_edges_9(void)

{
FUN_08055bd4:
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      do {
        puts("block 3");
        if (conditions._104_4_ == 0) goto FUN_08055bd4;
      } while (conditions._108_4_ == 0);
      puts("block 4");
      if (conditions._112_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_08055bd4(void)

{
code_r0x08055bd4:
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      do {
        puts("block 3");
        if (conditions._104_4_ == 0) goto code_r0x08055bd4;
      } while (conditions._108_4_ == 0);
      puts("block 4");
      if (conditions._112_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_559_edges_9(void)

{
FUN_08055c43:
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto FUN_08055c43;
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_08055c43(void)

{
code_r0x08055c43:
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto code_r0x08055c43;
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_560_edges_9(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) {
          puts("exit block");
          return 0;
        }
      }
    }
  } while( true );
}



undefined4 FUN_08055cb2(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) {
          puts("exit block");
          return 0;
        }
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_561_edges_9(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08055d0e;
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        puts("block 4");
        if (conditions._116_4_ != 0) {
          uVar1 = FUN_08055d21();
          return uVar1;
        }
LAB_08055d0e:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_08055d21(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08055d0e;
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        puts("block 4");
        if (conditions._116_4_ != 0) {
          uVar1 = FUN_08055d21();
          return uVar1;
        }
LAB_08055d0e:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_562_edges_9(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08055d7d;
      if (conditions._108_4_ == 0) break;
      if ((conditions._112_4_ != 0) && (puts("block 4"), conditions._116_4_ == 0)) {
LAB_08055d7d:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_08055d90(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08055d7d;
      if (conditions._108_4_ == 0) break;
      if ((conditions._112_4_ != 0) && (puts("block 4"), conditions._116_4_ == 0)) {
LAB_08055d7d:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_563_edges_9(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08055dec;
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        do {
          puts("block 4");
        } while (conditions._116_4_ != 0);
LAB_08055dec:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_08055dff(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08055dec;
      if (conditions._108_4_ == 0) break;
      if (conditions._112_4_ != 0) {
        do {
          puts("block 4");
        } while (conditions._116_4_ != 0);
LAB_08055dec:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_564_edges_9(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while ((conditions._108_4_ != 0) &&
            ((conditions._112_4_ == 0 || (puts("block 4"), conditions._116_4_ != 0))));
  } while( true );
}



undefined4 FUN_08055e6e(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while ((conditions._108_4_ != 0) &&
            ((conditions._112_4_ == 0 || (puts("block 4"), conditions._116_4_ != 0))));
  } while( true );
}



undefined4 test_3_blocks_variant_565_edges_9(void)

{
FUN_08055edd:
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) goto FUN_08055edd;
    } while (conditions._112_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_08055edd(void)

{
code_r0x08055edd:
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._108_4_ == 0) goto code_r0x08055edd;
    } while (conditions._112_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_566_edges_9(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._112_4_;
      if (conditions._108_4_ == 0) break;
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._116_4_;
      }
    }
  } while( true );
}



undefined4 FUN_08055f4c(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._112_4_;
      if (conditions._108_4_ == 0) break;
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._116_4_;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_567_edges_9(void)

{
  undefined4 uVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08055fa8;
      if (conditions._112_4_ == 0) break;
      if (conditions._116_4_ == 0) goto LAB_08055fd3;
    }
  }
LAB_08055fd3:
  puts("block 3");
  if (conditions._104_4_ != 0) {
    uVar1 = FUN_08055fbb();
    return uVar1;
  }
LAB_08055fa8:
  puts("exit block");
  return 0;
}



undefined4 FUN_08055fbb(void)

{
  undefined4 uVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08055fa8;
      if (conditions._112_4_ == 0) break;
      if (conditions._116_4_ == 0) goto LAB_08055fd3;
    }
  }
LAB_08055fd3:
  puts("block 3");
  if (conditions._104_4_ != 0) {
    uVar1 = FUN_08055fbb();
    return uVar1;
  }
LAB_08055fa8:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_568_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08056017;
      if (conditions._112_4_ == 0) break;
      if (conditions._116_4_ == 0) goto LAB_08056042;
    }
  }
LAB_08056042:
  do {
    puts("block 3");
  } while (conditions._104_4_ != 0);
LAB_08056017:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805602a(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08056017;
      if (conditions._112_4_ == 0) break;
      if (conditions._116_4_ == 0) goto LAB_08056042;
    }
  }
LAB_08056042:
  do {
    puts("block 3");
  } while (conditions._104_4_ != 0);
LAB_08056017:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_569_edges_9(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    do {
      if (((iVar1 == 0) && (puts("block 3"), conditions._104_4_ == 0)) ||
         (puts("block 4"), conditions._108_4_ == 0)) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_08056099(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    do {
      if (((iVar1 == 0) && (puts("block 3"), conditions._104_4_ == 0)) ||
         (puts("block 4"), conditions._108_4_ == 0)) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_570_edges_9(void)

{
  int iVar1;
  
FUN_08056108:
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    do {
      if (iVar1 == 0) goto LAB_08056120;
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
LAB_08056120:
  do {
    puts("block 3");
  } while (conditions._104_4_ != 0);
  goto FUN_08056108;
}



undefined4 FUN_08056108(void)

{
  int iVar1;
  
code_r0x08056108:
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    do {
      if (iVar1 == 0) goto LAB_08056120;
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
LAB_08056120:
  do {
    puts("block 3");
  } while (conditions._104_4_ != 0);
  goto code_r0x08056108;
}



undefined4 test_3_blocks_variant_571_edges_9(void)

{
FUN_08056177:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805618f;
    do {
      do {
        puts("block 4");
        if (conditions._108_4_ == 0) {
          puts("exit block");
          return 0;
        }
        if (conditions._112_4_ == 0) goto FUN_08056177;
      } while (conditions._116_4_ != 0);
LAB_0805618f:
      puts("block 3");
    } while (conditions._104_4_ != 0);
  } while( true );
}



undefined4 FUN_08056177(void)

{
code_r0x08056177:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805618f;
    do {
      do {
        puts("block 4");
        if (conditions._108_4_ == 0) {
          puts("exit block");
          return 0;
        }
        if (conditions._112_4_ == 0) goto code_r0x08056177;
      } while (conditions._116_4_ != 0);
LAB_0805618f:
      puts("block 3");
    } while (conditions._104_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_572_edges_9(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    do {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._104_4_;
      }
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_080561e6(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    do {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._104_4_;
      }
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_573_edges_9(void)

{
  int iVar1;
  int iVar2;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805626d;
    puts("block 4");
    iVar1 = conditions._116_4_;
    iVar2 = conditions._112_4_;
    while( true ) {
      if (iVar2 == 0) {
        puts("exit block");
        return 0;
      }
      if (iVar1 == 0) break;
LAB_0805626d:
      puts("block 3");
      iVar1 = conditions._108_4_;
      iVar2 = conditions._104_4_;
    }
  } while( true );
}



undefined4 FUN_08056255(void)

{
  int iVar1;
  int iVar2;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805626d;
    puts("block 4");
    iVar1 = conditions._116_4_;
    iVar2 = conditions._112_4_;
    while( true ) {
      if (iVar2 == 0) {
        puts("exit block");
        return 0;
      }
      if (iVar1 == 0) break;
LAB_0805626d:
      puts("block 3");
      iVar1 = conditions._108_4_;
      iVar2 = conditions._104_4_;
    }
  } while( true );
}



undefined4 test_3_blocks_variant_574_edges_9(void)

{
  do {
    while (puts("block 2"), conditions._100_4_ != 0) {
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_080562b1;
      } while (conditions._116_4_ != 0);
    }
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) {
LAB_080562b1:
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_080562c4(void)

{
  do {
    while (puts("block 2"), conditions._100_4_ != 0) {
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_080562b1;
      } while (conditions._116_4_ != 0);
    }
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) {
LAB_080562b1:
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_575_edges_9(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_08056320;
    }
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) {
LAB_08056320:
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_08056333(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_08056320;
    }
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) {
LAB_08056320:
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_576_edges_9(void)

{
  int iVar1;
  
FUN_080563a2:
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    do {
      if (iVar1 == 0) goto LAB_080563ba;
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
LAB_080563ba:
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._108_4_ != 0);
  goto FUN_080563a2;
}



undefined4 FUN_080563a2(void)

{
  int iVar1;
  
code_r0x080563a2:
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    do {
      if (iVar1 == 0) goto LAB_080563ba;
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
LAB_080563ba:
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._108_4_ != 0);
  goto code_r0x080563a2;
}



undefined4 test_3_blocks_variant_577_edges_9(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08056429;
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) {
LAB_080563fe:
        puts("exit block");
        return 0;
      }
      if (conditions._116_4_ == 0) break;
LAB_08056429:
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_080563fe;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_08056411(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08056429;
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) {
LAB_080563fe:
        puts("exit block");
        return 0;
      }
      if (conditions._116_4_ == 0) break;
LAB_08056429:
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_080563fe;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_578_edges_9(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08056498;
    do {
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) {
LAB_0805646d:
          puts("exit block");
          return 0;
        }
      } while (conditions._116_4_ != 0);
LAB_08056498:
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0805646d;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_08056480(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08056498;
    do {
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) {
LAB_0805646d:
          puts("exit block");
          return 0;
        }
      } while (conditions._116_4_ != 0);
LAB_08056498:
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0805646d;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_579_edges_9(void)

{
FUN_080564ef:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08056507;
    do {
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto FUN_080564ef;
      } while (conditions._116_4_ != 0);
LAB_08056507:
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_080564ef(void)

{
code_r0x080564ef:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08056507;
    do {
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto code_r0x080564ef;
      } while (conditions._116_4_ != 0);
LAB_08056507:
      puts("block 3");
      if (conditions._104_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_580_edges_9(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  do {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_0805654b;
    }
    puts("block 3");
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ != 0);
LAB_0805654b:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805655e(void)

{
  int iVar1;
  
  puts("block 2");
  iVar1 = conditions._100_4_;
  do {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_0805654b;
    }
    puts("block 3");
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ != 0);
LAB_0805654b:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_581_edges_9(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    do {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._108_4_;
        if (conditions._104_4_ == 0) {
          puts("exit block");
          return 0;
        }
      }
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_080565cd(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    do {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._108_4_;
        if (conditions._104_4_ == 0) {
          puts("exit block");
          return 0;
        }
      }
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_582_edges_9(void)

{
FUN_0805663c:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08056629:
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08056629;
      if (conditions._112_4_ == 0) goto FUN_0805663c;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_0805663c(void)

{
code_r0x0805663c:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08056629:
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
    do {
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08056629;
      if (conditions._112_4_ == 0) goto code_r0x0805663c;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_583_edges_9(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 3");
      if ((conditions._108_4_ == 0) ||
         (puts("block 4"), iVar1 = conditions._116_4_, conditions._112_4_ == 0)) goto LAB_08056698;
    }
  }
LAB_08056698:
  puts("exit block");
  return 0;
}



undefined4 FUN_080566ab(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 3");
      if ((conditions._108_4_ == 0) ||
         (puts("block 4"), iVar1 = conditions._116_4_, conditions._112_4_ == 0)) goto LAB_08056698;
    }
  }
LAB_08056698:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_584_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 3");
      if (conditions._108_4_ == 0) break;
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_08056707;
      } while (conditions._116_4_ != 0);
    }
  }
LAB_08056707:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805671a(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 3");
      if (conditions._108_4_ == 0) break;
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_08056707;
      } while (conditions._116_4_ != 0);
    }
  }
LAB_08056707:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_585_edges_9(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08056776;
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), conditions._108_4_ != 0) {
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08056776;
    } while (conditions._116_4_ != 0);
  }
LAB_08056776:
  puts("exit block");
  return 0;
}



undefined4 FUN_08056789(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08056776;
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), conditions._108_4_ != 0) {
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08056776;
    } while (conditions._116_4_ != 0);
  }
LAB_08056776:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_586_edges_9(void)

{
FUN_080567f8:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_080567e5:
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), conditions._108_4_ != 0) {
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto FUN_080567f8;
    } while (conditions._116_4_ != 0);
  }
  goto LAB_080567e5;
}



undefined4 FUN_080567f8(void)

{
code_r0x080567f8:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_080567e5:
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), conditions._108_4_ != 0) {
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto code_r0x080567f8;
    } while (conditions._116_4_ != 0);
  }
  goto LAB_080567e5;
}



undefined4 test_3_blocks_variant_587_edges_9(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_08056854:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    do {
      puts("block 3");
      if (conditions._108_4_ == 0) break;
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08056854;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_08056867(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_08056854:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    do {
      puts("block 3");
      if (conditions._108_4_ == 0) break;
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08056854;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_588_edges_9(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 3");
      iVar1 = conditions._108_4_;
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) goto LAB_080568c3;
      }
    }
  }
LAB_080568c3:
  puts("exit block");
  return 0;
}



undefined4 FUN_080568d6(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 3");
      iVar1 = conditions._108_4_;
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) goto LAB_080568c3;
      }
    }
  }
LAB_080568c3:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_589_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while (puts("block 3"), conditions._108_4_ != 0) {
        do {
          puts("block 4");
          if (conditions._112_4_ == 0) goto LAB_08056932;
        } while (conditions._116_4_ != 0);
      }
    }
  }
LAB_08056932:
  puts("exit block");
  return 0;
}



undefined4 FUN_08056945(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while (puts("block 3"), conditions._108_4_ != 0) {
        do {
          puts("block 4");
          if (conditions._112_4_ == 0) goto LAB_08056932;
        } while (conditions._116_4_ != 0);
      }
    }
  }
LAB_08056932:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_590_edges_9(void)

{
FUN_080569b4:
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    while (puts("block 3"), conditions._108_4_ != 0) {
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto FUN_080569b4;
      } while (conditions._116_4_ != 0);
    }
  } while( true );
}



undefined4 FUN_080569b4(void)

{
code_r0x080569b4:
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    while (puts("block 3"), conditions._108_4_ != 0) {
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto code_r0x080569b4;
      } while (conditions._116_4_ != 0);
    }
  } while( true );
}



undefined4 test_3_blocks_variant_591_edges_9(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      do {
        puts("block 3");
      } while (conditions._108_4_ == 0);
      puts("block 4");
      iVar1 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_08056a10;
    }
  }
LAB_08056a10:
  puts("exit block");
  return 0;
}



undefined4 FUN_08056a23(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      do {
        puts("block 3");
      } while (conditions._108_4_ == 0);
      puts("block 4");
      iVar1 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_08056a10;
    }
  }
LAB_08056a10:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_592_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      do {
        puts("block 3");
      } while (conditions._108_4_ == 0);
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_08056a7f;
      } while (conditions._116_4_ != 0);
    }
  }
LAB_08056a7f:
  puts("exit block");
  return 0;
}



undefined4 FUN_08056a92(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      do {
        puts("block 3");
      } while (conditions._108_4_ == 0);
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_08056a7f;
      } while (conditions._116_4_ != 0);
    }
  }
LAB_08056a7f:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_593_edges_9(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08056aee:
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    do {
      puts("block 3");
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08056aee;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_08056b01(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08056aee:
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    do {
      puts("block 3");
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08056aee;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_594_edges_9(void)

{
FUN_08056b70:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    do {
      puts("block 3");
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto FUN_08056b70;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_08056b70(void)

{
code_r0x08056b70:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    do {
      puts("block 3");
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto code_r0x08056b70;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_595_edges_9(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) goto LAB_08056bcc;
    } while (conditions._104_4_ == 0);
    puts("block 3");
    if (conditions._108_4_ == 0) goto LAB_08056bcc;
  } while (conditions._112_4_ == 0);
  puts("block 4");
  if (conditions._116_4_ != 0) {
    uVar1 = FUN_08056bdf();
    return uVar1;
  }
LAB_08056bcc:
  puts("exit block");
  return 0;
}



undefined4 FUN_08056bdf(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) goto LAB_08056bcc;
    } while (conditions._104_4_ == 0);
    puts("block 3");
    if (conditions._108_4_ == 0) goto LAB_08056bcc;
  } while (conditions._112_4_ == 0);
  puts("block 4");
  if (conditions._116_4_ != 0) {
    uVar1 = FUN_08056bdf();
    return uVar1;
  }
LAB_08056bcc:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_596_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_08056c3b;
        if (conditions._112_4_ == 0) break;
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_08056c3b;
      }
    }
  }
LAB_08056c3b:
  puts("exit block");
  return 0;
}



undefined4 FUN_08056c4e(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_08056c3b;
        if (conditions._112_4_ == 0) break;
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_08056c3b;
      }
    }
  }
LAB_08056c3b:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_597_edges_9(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) goto LAB_08056caa;
    } while (conditions._104_4_ == 0);
    puts("block 3");
    if (conditions._108_4_ == 0) goto LAB_08056caa;
  } while (conditions._112_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._116_4_ != 0);
LAB_08056caa:
  puts("exit block");
  return 0;
}



undefined4 FUN_08056cbd(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) goto LAB_08056caa;
    } while (conditions._104_4_ == 0);
    puts("block 3");
    if (conditions._108_4_ == 0) goto LAB_08056caa;
  } while (conditions._112_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._116_4_ != 0);
LAB_08056caa:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_598_edges_9(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
LAB_08056d19:
      puts("exit block");
      return 0;
    }
    while (iVar1 != 0) {
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_08056d19;
      if (conditions._112_4_ == 0) break;
      puts("block 4");
      iVar1 = conditions._116_4_;
    }
  } while( true );
}



undefined4 FUN_08056d2c(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
LAB_08056d19:
      puts("exit block");
      return 0;
    }
    while (iVar1 != 0) {
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_08056d19;
      if (conditions._112_4_ == 0) break;
      puts("block 4");
      iVar1 = conditions._116_4_;
    }
  } while( true );
}



undefined4 test_3_blocks_variant_599_edges_9(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 3");
      iVar1 = conditions._112_4_;
      if (conditions._108_4_ == 0) break;
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._116_4_;
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08056d9b(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 3");
      iVar1 = conditions._112_4_;
      if (conditions._108_4_ == 0) break;
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._116_4_;
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_600_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_08056df7;
        if (conditions._112_4_ == 0) break;
        do {
          puts("block 4");
        } while (conditions._116_4_ != 0);
      }
    }
  }
LAB_08056df7:
  puts("exit block");
  return 0;
}



undefined4 FUN_08056e0a(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_08056df7;
        if (conditions._112_4_ == 0) break;
        do {
          puts("block 4");
        } while (conditions._116_4_ != 0);
      }
    }
  }
LAB_08056df7:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_601_edges_9(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08056e66;
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
    if (conditions._108_4_ == 0) goto LAB_08056e66;
  } while (conditions._112_4_ == 0);
  puts("block 4");
  if (conditions._116_4_ != 0) {
    uVar1 = FUN_08056e79();
    return uVar1;
  }
LAB_08056e66:
  puts("exit block");
  return 0;
}



undefined4 FUN_08056e79(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08056e66;
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
    if (conditions._108_4_ == 0) goto LAB_08056e66;
  } while (conditions._112_4_ == 0);
  puts("block 4");
  if (conditions._116_4_ != 0) {
    uVar1 = FUN_08056e79();
    return uVar1;
  }
LAB_08056e66:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_602_edges_9(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08056ed5;
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
    if (conditions._108_4_ == 0) break;
  } while ((conditions._112_4_ == 0) || (puts("block 4"), conditions._116_4_ != 0));
LAB_08056ed5:
  puts("exit block");
  return 0;
}



undefined4 FUN_08056ee8(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08056ed5;
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
    if (conditions._108_4_ == 0) break;
  } while ((conditions._112_4_ == 0) || (puts("block 4"), conditions._116_4_ != 0));
LAB_08056ed5:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_603_edges_9(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08056f44;
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
    if (conditions._108_4_ == 0) goto LAB_08056f44;
  } while (conditions._112_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._116_4_ != 0);
LAB_08056f44:
  puts("exit block");
  return 0;
}



undefined4 FUN_08056f57(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08056f44;
  } while (conditions._104_4_ == 0);
  do {
    puts("block 3");
    if (conditions._108_4_ == 0) goto LAB_08056f44;
  } while (conditions._112_4_ == 0);
  do {
    puts("block 4");
  } while (conditions._116_4_ != 0);
LAB_08056f44:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_604_edges_9(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      do {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_08056fb3;
      } while (conditions._112_4_ == 0);
      puts("block 4");
      iVar1 = conditions._116_4_;
    }
  }
LAB_08056fb3:
  puts("exit block");
  return 0;
}



undefined4 FUN_08056fc6(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      do {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_08056fb3;
      } while (conditions._112_4_ == 0);
      puts("block 4");
      iVar1 = conditions._116_4_;
    }
  }
LAB_08056fb3:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_605_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      do {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_08057022;
      } while (conditions._112_4_ == 0);
      do {
        puts("block 4");
      } while (conditions._116_4_ != 0);
    }
  }
LAB_08057022:
  puts("exit block");
  return 0;
}



undefined4 FUN_08057035(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      do {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_08057022;
      } while (conditions._112_4_ == 0);
      do {
        puts("block 4");
      } while (conditions._116_4_ != 0);
    }
  }
LAB_08057022:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_606_edges_9(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08057091;
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), iVar1 = conditions._112_4_, conditions._108_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._116_4_;
    }
  }
LAB_08057091:
  puts("exit block");
  return 0;
}



undefined4 FUN_080570a4(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08057091;
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), iVar1 = conditions._112_4_, conditions._108_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._116_4_;
    }
  }
LAB_08057091:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_607_edges_9(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_08057100:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    while (puts("block 3"), conditions._108_4_ != 0) {
      if (conditions._112_4_ != 0) {
        puts("block 4");
        if (conditions._116_4_ != 0) {
          uVar1 = FUN_08057113();
          return uVar1;
        }
        goto LAB_08057100;
      }
    }
  } while( true );
}



undefined4 FUN_08057113(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_08057100:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    while (puts("block 3"), conditions._108_4_ != 0) {
      if (conditions._112_4_ != 0) {
        puts("block 4");
        if (conditions._116_4_ != 0) {
          uVar1 = FUN_08057113();
          return uVar1;
        }
        goto LAB_08057100;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_608_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while (puts("block 3"), conditions._108_4_ != 0) {
        if ((conditions._112_4_ != 0) && (puts("block 4"), conditions._116_4_ == 0))
        goto LAB_0805716f;
      }
    }
  }
LAB_0805716f:
  puts("exit block");
  return 0;
}



undefined4 FUN_08057182(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while (puts("block 3"), conditions._108_4_ != 0) {
        if ((conditions._112_4_ != 0) && (puts("block 4"), conditions._116_4_ == 0))
        goto LAB_0805716f;
      }
    }
  }
LAB_0805716f:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_609_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while (puts("block 3"), conditions._108_4_ != 0) {
        if (conditions._112_4_ != 0) goto LAB_08057233;
      }
    }
  }
LAB_080571de:
  puts("exit block");
  return 0;
LAB_08057233:
  do {
    puts("block 4");
  } while (conditions._116_4_ != 0);
  goto LAB_080571de;
}



undefined4 FUN_080571f1(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while (puts("block 3"), conditions._108_4_ != 0) {
        if (conditions._112_4_ != 0) goto LAB_08057233;
      }
    }
  }
LAB_080571de:
  puts("exit block");
  return 0;
LAB_08057233:
  do {
    puts("block 4");
  } while (conditions._116_4_ != 0);
  goto LAB_080571de;
}



undefined4 test_3_blocks_variant_610_edges_9(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    do {
      puts("block 3");
      if (conditions._108_4_ == 0) break;
    } while ((conditions._112_4_ == 0) || (puts("block 4"), conditions._116_4_ != 0));
  } while( true );
}



undefined4 FUN_08057260(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    do {
      puts("block 3");
      if (conditions._108_4_ == 0) break;
    } while ((conditions._112_4_ == 0) || (puts("block 4"), conditions._116_4_ != 0));
  } while( true );
}



undefined4 test_3_blocks_variant_611_edges_9(void)

{
FUN_080572cf:
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    do {
      puts("block 3");
      if (conditions._108_4_ == 0) goto FUN_080572cf;
    } while (conditions._112_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_080572cf(void)

{
code_r0x080572cf:
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    do {
      puts("block 3");
      if (conditions._108_4_ == 0) goto code_r0x080572cf;
    } while (conditions._112_4_ == 0);
    do {
      puts("block 4");
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_612_edges_9(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while (puts("block 3"), iVar1 = conditions._112_4_, conditions._108_4_ != 0) {
        while (iVar1 != 0) {
          puts("block 4");
          iVar1 = conditions._116_4_;
        }
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0805733e(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while (puts("block 3"), iVar1 = conditions._112_4_, conditions._108_4_ != 0) {
        while (iVar1 != 0) {
          puts("block 4");
          iVar1 = conditions._116_4_;
        }
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_613_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805739a;
        if (conditions._112_4_ == 0) break;
        if (conditions._116_4_ != 0) {
          puts("block 4");
          goto LAB_0805739a;
        }
      }
    }
  }
LAB_0805739a:
  puts("exit block");
  return 0;
}



undefined4 FUN_080573ad(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805739a;
        if (conditions._112_4_ == 0) break;
        if (conditions._116_4_ != 0) {
          puts("block 4");
          goto LAB_0805739a;
        }
      }
    }
  }
LAB_0805739a:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_614_edges_9(void)

{
  undefined4 uVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_08057409;
        if (conditions._112_4_ == 0) break;
        if (conditions._116_4_ != 0) {
          puts("block 4");
          uVar1 = FUN_0805741c();
          return uVar1;
        }
      }
    }
  }
LAB_08057409:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805741c(void)

{
  undefined4 uVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_08057409;
        if (conditions._112_4_ == 0) break;
        if (conditions._116_4_ != 0) {
          puts("block 4");
          uVar1 = FUN_0805741c();
          return uVar1;
        }
      }
    }
  }
LAB_08057409:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_615_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_08057478;
        if (conditions._112_4_ == 0) break;
        if (conditions._116_4_ != 0) {
          puts("block 4");
        }
      }
    }
  }
LAB_08057478:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805748b(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_08057478;
        if (conditions._112_4_ == 0) break;
        if (conditions._116_4_ != 0) {
          puts("block 4");
        }
      }
    }
  }
LAB_08057478:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_616_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_080574e7;
        if (conditions._112_4_ == 0) break;
        if (conditions._116_4_ != 0) {
          do {
            puts("block 4");
          } while( true );
        }
      }
    }
  }
LAB_080574e7:
  puts("exit block");
  return 0;
}



undefined4 FUN_080574fa(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_080574e7;
        if (conditions._112_4_ == 0) break;
        if (conditions._116_4_ != 0) {
          do {
            puts("block 4");
          } while( true );
        }
      }
    }
  }
LAB_080574e7:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_617_edges_9(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
LAB_08057556:
      puts("exit block");
      return 0;
    }
    do {
      if (iVar1 == 0) {
        puts("block 3");
        goto LAB_08057556;
      }
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08057556;
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_08057569(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
LAB_08057556:
      puts("exit block");
      return 0;
    }
    do {
      if (iVar1 == 0) {
        puts("block 3");
        goto LAB_08057556;
      }
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08057556;
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_618_edges_9(void)

{
  int iVar1;
  undefined4 uVar2;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      if (iVar1 == 0) {
        puts("block 3");
        uVar2 = FUN_080575d8();
        return uVar2;
      }
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_080575c5;
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  }
LAB_080575c5:
  puts("exit block");
  return 0;
}



undefined4 FUN_080575d8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      if (iVar1 == 0) {
        puts("block 3");
        uVar2 = FUN_080575d8();
        return uVar2;
      }
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_080575c5;
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  }
LAB_080575c5:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_619_edges_9(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      if (iVar1 == 0) {
        do {
          puts("block 3");
        } while( true );
      }
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08057634;
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  }
LAB_08057634:
  puts("exit block");
  return 0;
}



undefined4 FUN_08057647(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      if (iVar1 == 0) {
        do {
          puts("block 3");
        } while( true );
      }
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_08057634;
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  }
LAB_08057634:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_620_edges_9(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      if (iVar1 == 0) {
        puts("block 3");
      }
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_080576a3;
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  }
LAB_080576a3:
  puts("exit block");
  return 0;
}



undefined4 FUN_080576b6(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      if (iVar1 == 0) {
        puts("block 3");
      }
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_080576a3;
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  }
LAB_080576a3:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_621_edges_9(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08057712;
    if (conditions._104_4_ == 0) break;
    puts("block 4");
    if (conditions._112_4_ == 0) goto LAB_08057712;
  } while (conditions._116_4_ == 0);
  puts("block 3");
  if (conditions._108_4_ != 0) {
    uVar1 = FUN_08057725();
    return uVar1;
  }
LAB_08057712:
  puts("exit block");
  return 0;
}



undefined4 FUN_08057725(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08057712;
    if (conditions._104_4_ == 0) break;
    puts("block 4");
    if (conditions._112_4_ == 0) goto LAB_08057712;
  } while (conditions._116_4_ == 0);
  puts("block 3");
  if (conditions._108_4_ != 0) {
    uVar1 = FUN_08057725();
    return uVar1;
  }
LAB_08057712:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_622_edges_9(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08057781:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) {
      puts("block 3");
      if (conditions._108_4_ != 0) {
        uVar1 = FUN_08057794();
        return uVar1;
      }
      goto LAB_08057781;
    }
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08057781;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_08057794(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08057781:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) {
      puts("block 3");
      if (conditions._108_4_ != 0) {
        uVar1 = FUN_08057794();
        return uVar1;
      }
      goto LAB_08057781;
    }
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08057781;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_623_edges_9(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  iVar2 = conditions._100_4_;
  do {
    if (iVar2 == 0) {
LAB_080577f0:
      puts("exit block");
      return 0;
    }
    if (iVar1 == 0) {
      puts("block 3");
      if (conditions._108_4_ != 0) {
        uVar3 = FUN_08057803();
        return uVar3;
      }
      goto LAB_080577f0;
    }
    puts("block 4");
    iVar1 = conditions._116_4_;
    iVar2 = conditions._112_4_;
  } while( true );
}



undefined4 FUN_08057803(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  iVar2 = conditions._100_4_;
  do {
    if (iVar2 == 0) {
LAB_080577f0:
      puts("exit block");
      return 0;
    }
    if (iVar1 == 0) {
      puts("block 3");
      if (conditions._108_4_ != 0) {
        uVar3 = FUN_08057803();
        return uVar3;
      }
      goto LAB_080577f0;
    }
    puts("block 4");
    iVar1 = conditions._116_4_;
    iVar2 = conditions._112_4_;
  } while( true );
}



undefined4 test_3_blocks_variant_624_edges_9(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
LAB_0805785f:
      puts("exit block");
      return 0;
    }
    do {
      if (iVar1 == 0) {
        puts("block 3");
        if (conditions._108_4_ != 0) {
          uVar2 = FUN_08057872();
          return uVar2;
        }
        goto LAB_0805785f;
      }
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_08057872(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
LAB_0805785f:
      puts("exit block");
      return 0;
    }
    do {
      if (iVar1 == 0) {
        puts("block 3");
        if (conditions._108_4_ != 0) {
          uVar2 = FUN_08057872();
          return uVar2;
        }
        goto LAB_0805785f;
      }
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_625_edges_9(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080578ce;
    if (conditions._104_4_ == 0) break;
    puts("block 4");
    if (conditions._112_4_ == 0) goto LAB_080578ce;
  } while (conditions._116_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
LAB_080578ce:
  puts("exit block");
  return 0;
}



undefined4 FUN_080578e1(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080578ce;
    if (conditions._104_4_ == 0) break;
    puts("block 4");
    if (conditions._112_4_ == 0) goto LAB_080578ce;
  } while (conditions._116_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
LAB_080578ce:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_626_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_08057971;
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805793d;
    } while (conditions._116_4_ != 0);
  }
LAB_0805793d:
  puts("exit block");
  return 0;
LAB_08057971:
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
  goto LAB_0805793d;
}



undefined4 FUN_08057950(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_08057971;
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805793d;
    } while (conditions._116_4_ != 0);
  }
LAB_0805793d:
  puts("exit block");
  return 0;
LAB_08057971:
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
  goto LAB_0805793d;
}



undefined4 test_3_blocks_variant_627_edges_9(void)

{
  int iVar1;
  int iVar2;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  iVar2 = conditions._100_4_;
  while (iVar2 != 0) {
    if (iVar1 == 0) goto LAB_080579e0;
    puts("block 4");
    iVar1 = conditions._116_4_;
    iVar2 = conditions._112_4_;
  }
LAB_080579ac:
  puts("exit block");
  return 0;
LAB_080579e0:
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
  goto LAB_080579ac;
}



undefined4 FUN_080579bf(void)

{
  int iVar1;
  int iVar2;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  iVar2 = conditions._100_4_;
  while (iVar2 != 0) {
    if (iVar1 == 0) goto LAB_080579e0;
    puts("block 4");
    iVar1 = conditions._116_4_;
    iVar2 = conditions._112_4_;
  }
LAB_080579ac:
  puts("exit block");
  return 0;
LAB_080579e0:
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
  goto LAB_080579ac;
}



undefined4 test_3_blocks_variant_628_edges_9(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      if (iVar1 == 0) goto LAB_08057a4f;
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  }
LAB_08057a1b:
  puts("exit block");
  return 0;
LAB_08057a4f:
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
  goto LAB_08057a1b;
}



undefined4 FUN_08057a2e(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      if (iVar1 == 0) goto LAB_08057a4f;
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  }
LAB_08057a1b:
  puts("exit block");
  return 0;
LAB_08057a4f:
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
  goto LAB_08057a1b;
}



undefined4 test_3_blocks_variant_629_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_08057abe;
    while( true ) {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08057a8a;
      if (conditions._116_4_ == 0) break;
LAB_08057abe:
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_08057a8a;
    }
  }
LAB_08057a8a:
  puts("exit block");
  return 0;
}



undefined4 FUN_08057a9d(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_08057abe;
    while( true ) {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08057a8a;
      if (conditions._116_4_ == 0) break;
LAB_08057abe:
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_08057a8a;
    }
  }
LAB_08057a8a:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_630_edges_9(void)

{
  while ((puts("block 2"), conditions._100_4_ != 0 &&
         ((conditions._104_4_ != 0 || (puts("block 3"), conditions._108_4_ != 0))))) {
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08057af9;
    } while (conditions._116_4_ != 0);
  }
LAB_08057af9:
  puts("exit block");
  return 0;
}



undefined4 FUN_08057b0c(void)

{
  while ((puts("block 2"), conditions._100_4_ != 0 &&
         ((conditions._104_4_ != 0 || (puts("block 3"), conditions._108_4_ != 0))))) {
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08057af9;
    } while (conditions._116_4_ != 0);
  }
LAB_08057af9:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_631_edges_9(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_08057b9c;
    do {
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_08057b68;
      } while (conditions._116_4_ != 0);
LAB_08057b9c:
      puts("block 3");
    } while (conditions._108_4_ != 0);
  }
LAB_08057b68:
  puts("exit block");
  return 0;
}



undefined4 FUN_08057b7b(void)

{
  puts("block 2");
  if (conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_08057b9c;
    do {
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_08057b68;
      } while (conditions._116_4_ != 0);
LAB_08057b9c:
      puts("block 3");
    } while (conditions._108_4_ != 0);
  }
LAB_08057b68:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_632_edges_9(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      if ((iVar1 == 0) && (puts("block 3"), conditions._108_4_ == 0)) goto LAB_08057bd7;
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  }
LAB_08057bd7:
  puts("exit block");
  return 0;
}



undefined4 FUN_08057bea(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      if ((iVar1 == 0) && (puts("block 3"), conditions._108_4_ == 0)) goto LAB_08057bd7;
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  }
LAB_08057bd7:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_633_edges_9(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_08057c7a;
    puts("block 4");
    iVar1 = conditions._116_4_;
    if (conditions._112_4_ == 0) break;
    while (iVar1 != 0) {
LAB_08057c7a:
      puts("block 3");
      iVar1 = conditions._108_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08057c59(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_08057c7a;
    puts("block 4");
    iVar1 = conditions._116_4_;
    if (conditions._112_4_ == 0) break;
    while (iVar1 != 0) {
LAB_08057c7a:
      puts("block 3");
      iVar1 = conditions._108_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_634_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      do {
        puts("block 3");
      } while (conditions._108_4_ != 0);
    }
    else {
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_08057cb5;
      } while (conditions._116_4_ != 0);
    }
  }
LAB_08057cb5:
  puts("exit block");
  return 0;
}



undefined4 FUN_08057cc8(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      do {
        puts("block 3");
      } while (conditions._108_4_ != 0);
    }
    else {
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_08057cb5;
      } while (conditions._116_4_ != 0);
    }
  }
LAB_08057cb5:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_635_edges_9(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_08057d24;
    }
    do {
      puts("block 3");
    } while (conditions._108_4_ != 0);
  }
LAB_08057d24:
  puts("exit block");
  return 0;
}



undefined4 FUN_08057d37(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_08057d24;
    }
    do {
      puts("block 3");
    } while (conditions._108_4_ != 0);
  }
LAB_08057d24:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_636_edges_9(void)

{
  int iVar1;
  
FUN_08057da6:
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    do {
      if (iVar1 == 0) goto LAB_08057dc7;
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
LAB_08057dc7:
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
  goto FUN_08057da6;
}



undefined4 FUN_08057da6(void)

{
  int iVar1;
  
code_r0x08057da6:
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    do {
      if (iVar1 == 0) goto LAB_08057dc7;
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
LAB_08057dc7:
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
  goto code_r0x08057da6;
}



undefined4 test_3_blocks_variant_637_edges_9(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08057e02:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) goto LAB_08057e36;
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08057e02;
      if (conditions._116_4_ == 0) break;
LAB_08057e36:
      puts("block 3");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_08057e15(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08057e02:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) goto LAB_08057e36;
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08057e02;
      if (conditions._116_4_ == 0) break;
LAB_08057e36:
      puts("block 3");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_638_edges_9(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) goto LAB_08057ebd;
    puts("block 3");
    iVar1 = conditions._108_4_;
    while (iVar1 != 0) {
LAB_08057ebd:
      puts("block 4");
      iVar1 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_08057e71;
    }
  }
LAB_08057e71:
  puts("exit block");
  return 0;
}



undefined4 FUN_08057e84(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) goto LAB_08057ebd;
    puts("block 3");
    iVar1 = conditions._108_4_;
    while (iVar1 != 0) {
LAB_08057ebd:
      puts("block 4");
      iVar1 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_08057e71;
    }
  }
LAB_08057e71:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_639_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_08057f14;
    do {
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_08057ee0;
      } while (conditions._116_4_ != 0);
LAB_08057f14:
      puts("block 3");
    } while (conditions._108_4_ != 0);
  }
LAB_08057ee0:
  puts("exit block");
  return 0;
}



undefined4 FUN_08057ef3(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_08057f14;
    do {
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_08057ee0;
      } while (conditions._116_4_ != 0);
LAB_08057f14:
      puts("block 3");
    } while (conditions._108_4_ != 0);
  }
LAB_08057ee0:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_640_edges_9(void)

{
FUN_08057f62:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) goto LAB_08057f83;
    do {
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto FUN_08057f62;
      } while (conditions._116_4_ != 0);
LAB_08057f83:
      puts("block 3");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_08057f62(void)

{
code_r0x08057f62:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) goto LAB_08057f83;
    do {
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto code_r0x08057f62;
      } while (conditions._116_4_ != 0);
LAB_08057f83:
      puts("block 3");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_641_edges_9(void)

{
  int iVar1;
  
FUN_08057fd1:
  puts("block 2");
  iVar1 = conditions._104_4_;
  if (conditions._100_4_ == 0) {
LAB_08057fbe:
    puts("exit block");
    return 0;
  }
  do {
    if (iVar1 != 0) {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08057fbe;
      if (conditions._116_4_ == 0) goto FUN_08057fd1;
    }
    puts("block 3");
    iVar1 = conditions._108_4_;
  } while( true );
}



undefined4 FUN_08057fd1(void)

{
  int iVar1;
  
code_r0x08057fd1:
  puts("block 2");
  iVar1 = conditions._104_4_;
  if (conditions._100_4_ == 0) {
LAB_08057fbe:
    puts("exit block");
    return 0;
  }
  do {
    if (iVar1 != 0) {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08057fbe;
      if (conditions._116_4_ == 0) goto code_r0x08057fd1;
    }
    puts("block 3");
    iVar1 = conditions._108_4_;
  } while( true );
}



undefined4 test_3_blocks_variant_642_edges_9(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 == 0) {
      puts("block 3");
      iVar1 = conditions._108_4_;
    }
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805802d;
    } while (conditions._116_4_ != 0);
  }
LAB_0805802d:
  puts("exit block");
  return 0;
}



undefined4 FUN_08058040(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 == 0) {
      puts("block 3");
      iVar1 = conditions._108_4_;
    }
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805802d;
    } while (conditions._116_4_ != 0);
  }
LAB_0805802d:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_643_edges_9(void)

{
  int iVar1;
  int iVar2;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  iVar2 = conditions._100_4_;
  while (iVar2 != 0) {
    while (iVar1 == 0) {
      puts("block 3");
      iVar1 = conditions._108_4_;
    }
    puts("block 4");
    iVar1 = conditions._116_4_;
    iVar2 = conditions._112_4_;
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_080580af(void)

{
  int iVar1;
  int iVar2;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  iVar2 = conditions._100_4_;
  while (iVar2 != 0) {
    while (iVar1 == 0) {
      puts("block 3");
      iVar1 = conditions._108_4_;
    }
    puts("block 4");
    iVar1 = conditions._116_4_;
    iVar2 = conditions._112_4_;
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_644_edges_9(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._108_4_;
      }
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0805811e(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._108_4_;
      }
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_645_edges_9(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (iVar1 == 0) {
        puts("block 3");
LAB_0805817a:
        puts("exit block");
        return 0;
      }
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_0805817a;
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0805818d(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (iVar1 == 0) {
        puts("block 3");
LAB_0805817a:
        puts("exit block");
        return 0;
      }
      puts("block 4");
      if (conditions._108_4_ == 0) goto LAB_0805817a;
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_646_edges_9(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (iVar1 == 0) {
        puts("block 3");
        uVar2 = FUN_080581fc();
        return uVar2;
      }
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_080581fc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (iVar1 == 0) {
        puts("block 3");
        uVar2 = FUN_080581fc();
        return uVar2;
      }
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_647_edges_9(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (iVar1 == 0) {
        do {
          puts("block 3");
        } while( true );
      }
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0805826b(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (iVar1 == 0) {
        do {
          puts("block 3");
        } while( true );
      }
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_648_edges_9(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (iVar1 == 0) {
        puts("block 3");
      }
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_080582da(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (iVar1 == 0) {
        puts("block 3");
      }
      puts("block 4");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_649_edges_9(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    puts("block 4");
    if (conditions._112_4_ == 0) goto LAB_08058336;
  } while (conditions._116_4_ == 0);
  puts("block 3");
  if (conditions._108_4_ != 0) {
    uVar1 = FUN_08058349();
    return uVar1;
  }
LAB_08058336:
  puts("exit block");
  return 0;
}



undefined4 FUN_08058349(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    puts("block 4");
    if (conditions._112_4_ == 0) goto LAB_08058336;
  } while (conditions._116_4_ == 0);
  puts("block 3");
  if (conditions._108_4_ != 0) {
    uVar1 = FUN_08058349();
    return uVar1;
  }
LAB_08058336:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_650_edges_9(void)

{
  undefined4 uVar1;
  
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_080583a5;
    } while (conditions._116_4_ != 0);
  }
  puts("block 3");
  if (conditions._108_4_ != 0) {
    uVar1 = FUN_080583b8();
    return uVar1;
  }
LAB_080583a5:
  puts("exit block");
  return 0;
}



undefined4 FUN_080583b8(void)

{
  undefined4 uVar1;
  
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_080583a5;
    } while (conditions._116_4_ != 0);
  }
  puts("block 3");
  if (conditions._108_4_ != 0) {
    uVar1 = FUN_080583b8();
    return uVar1;
  }
LAB_080583a5:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_651_edges_9(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
  } while (conditions._100_4_ == 0);
  do {
    if (iVar1 == 0) {
      puts("block 3");
      if (conditions._108_4_ != 0) {
        uVar2 = FUN_08058427();
        return uVar2;
      }
      break;
    }
    puts("block 4");
    iVar1 = conditions._116_4_;
  } while (conditions._112_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_08058427(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
  } while (conditions._100_4_ == 0);
  do {
    if (iVar1 == 0) {
      puts("block 3");
      if (conditions._108_4_ != 0) {
        uVar2 = FUN_08058427();
        return uVar2;
      }
      break;
    }
    puts("block 4");
    iVar1 = conditions._116_4_;
  } while (conditions._112_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_652_edges_9(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (iVar1 == 0) {
        puts("block 3");
        if (conditions._108_4_ == 0) {
          puts("exit block");
          return 0;
        }
        uVar2 = FUN_08058496();
        return uVar2;
      }
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_08058496(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (iVar1 == 0) {
        puts("block 3");
        if (conditions._108_4_ == 0) {
          puts("exit block");
          return 0;
        }
        uVar2 = FUN_08058496();
        return uVar2;
      }
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_653_edges_9(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    puts("block 4");
    if (conditions._112_4_ == 0) goto LAB_080584f2;
  } while (conditions._116_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
LAB_080584f2:
  puts("exit block");
  return 0;
}



undefined4 FUN_08058505(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    puts("block 4");
    if (conditions._112_4_ == 0) goto LAB_080584f2;
  } while (conditions._116_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
LAB_080584f2:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_654_edges_9(void)

{
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08058561;
    } while (conditions._116_4_ != 0);
  }
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
LAB_08058561:
  puts("exit block");
  return 0;
}



undefined4 FUN_08058574(void)

{
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) break;
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08058561;
    } while (conditions._116_4_ != 0);
  }
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
LAB_08058561:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_655_edges_9(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
  } while (conditions._100_4_ == 0);
  do {
    if (iVar1 == 0) goto LAB_08058604;
    puts("block 4");
    iVar1 = conditions._116_4_;
  } while (conditions._112_4_ != 0);
LAB_080585d0:
  puts("exit block");
  return 0;
LAB_08058604:
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
  goto LAB_080585d0;
}



undefined4 FUN_080585e3(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
  } while (conditions._100_4_ == 0);
  do {
    if (iVar1 == 0) goto LAB_08058604;
    puts("block 4");
    iVar1 = conditions._116_4_;
  } while (conditions._112_4_ != 0);
LAB_080585d0:
  puts("exit block");
  return 0;
LAB_08058604:
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
  goto LAB_080585d0;
}



undefined4 test_3_blocks_variant_656_edges_9(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (iVar1 == 0) {
        do {
          puts("block 3");
        } while (conditions._108_4_ != 0);
        puts("exit block");
        return 0;
      }
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_08058652(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (iVar1 == 0) {
        do {
          puts("block 3");
        } while (conditions._108_4_ != 0);
        puts("exit block");
        return 0;
      }
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_657_edges_9(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) goto LAB_080586e2;
    while( true ) {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_080586ae;
      if (conditions._116_4_ == 0) break;
LAB_080586e2:
      puts("block 3");
      if (conditions._108_4_ == 0) {
LAB_080586ae:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_080586c1(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) goto LAB_080586e2;
    while( true ) {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_080586ae;
      if (conditions._116_4_ == 0) break;
LAB_080586e2:
      puts("block 3");
      if (conditions._108_4_ == 0) {
LAB_080586ae:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_658_edges_9(void)

{
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if ((conditions._104_4_ == 0) && (puts("block 3"), conditions._108_4_ == 0)) break;
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805871d;
    } while (conditions._116_4_ != 0);
  }
LAB_0805871d:
  puts("exit block");
  return 0;
}



undefined4 FUN_08058730(void)

{
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if ((conditions._104_4_ == 0) && (puts("block 3"), conditions._108_4_ == 0)) break;
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805871d;
    } while (conditions._116_4_ != 0);
  }
LAB_0805871d:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_659_edges_9(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) goto LAB_080587c0;
  do {
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805878c;
    } while (conditions._116_4_ != 0);
LAB_080587c0:
    puts("block 3");
  } while (conditions._108_4_ != 0);
LAB_0805878c:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805879f(void)

{
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  if (conditions._104_4_ == 0) goto LAB_080587c0;
  do {
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805878c;
    } while (conditions._116_4_ != 0);
LAB_080587c0:
    puts("block 3");
  } while (conditions._108_4_ != 0);
LAB_0805878c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_660_edges_9(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if ((iVar1 == 0) && (puts("block 3"), conditions._108_4_ == 0)) {
        puts("exit block");
        return 0;
      }
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0805880e(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if ((iVar1 == 0) && (puts("block 3"), conditions._108_4_ == 0)) {
        puts("exit block");
        return 0;
      }
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_661_edges_9(void)

{
  int iVar1;
  
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ != 0) break;
    do {
      puts("block 3");
      iVar1 = conditions._108_4_;
joined_r0x080588d3:
    } while (iVar1 != 0);
  }
  puts("block 4");
  iVar1 = conditions._116_4_;
  if (conditions._112_4_ != 0) goto joined_r0x080588d3;
  puts("exit block");
  return 0;
}



undefined4 FUN_0805887d(void)

{
  int iVar1;
  
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ != 0) break;
    do {
      puts("block 3");
      iVar1 = conditions._108_4_;
joined_r0x080588d3:
    } while (iVar1 != 0);
  }
  puts("block 4");
  iVar1 = conditions._116_4_;
  if (conditions._112_4_ != 0) goto joined_r0x080588d3;
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_662_edges_9(void)

{
  do {
    while( true ) {
      do {
        puts("block 2");
      } while (conditions._100_4_ == 0);
      if (conditions._104_4_ != 0) break;
      do {
        puts("block 3");
      } while (conditions._108_4_ != 0);
    }
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_080588ec(void)

{
  do {
    while( true ) {
      do {
        puts("block 2");
      } while (conditions._100_4_ == 0);
      if (conditions._104_4_ != 0) break;
      do {
        puts("block 3");
      } while (conditions._108_4_ != 0);
    }
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_663_edges_9(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._116_4_;
      if (conditions._112_4_ == 0) {
        puts("exit block");
        return 0;
      }
    }
    do {
      puts("block 3");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0805895b(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._116_4_;
      if (conditions._112_4_ == 0) {
        puts("exit block");
        return 0;
      }
    }
    do {
      puts("block 3");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_664_edges_9(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) goto LAB_080589eb;
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._116_4_ == 0) break;
LAB_080589eb:
      puts("block 3");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_080589ca(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) goto LAB_080589eb;
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._116_4_ == 0) break;
LAB_080589eb:
      puts("block 3");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_665_edges_9(void)

{
  do {
    do {
      do {
        puts("block 2");
      } while (conditions._100_4_ == 0);
    } while ((conditions._104_4_ == 0) && (puts("block 3"), conditions._108_4_ == 0));
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_08058a39(void)

{
  do {
    do {
      do {
        puts("block 2");
      } while (conditions._100_4_ == 0);
    } while ((conditions._104_4_ == 0) && (puts("block 3"), conditions._108_4_ == 0));
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_666_edges_9(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) goto LAB_08058ac9;
    do {
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) {
          puts("exit block");
          return 0;
        }
      } while (conditions._116_4_ != 0);
LAB_08058ac9:
      puts("block 3");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_08058aa8(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) goto LAB_08058ac9;
    do {
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) {
          puts("exit block");
          return 0;
        }
      } while (conditions._116_4_ != 0);
LAB_08058ac9:
      puts("block 3");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_667_edges_9(void)

{
  int iVar1;
  
FUN_08058b17:
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
  } while (conditions._100_4_ == 0);
  do {
    if (iVar1 != 0) {
      puts("block 4");
      if (conditions._112_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._116_4_ == 0) goto FUN_08058b17;
    }
    puts("block 3");
    iVar1 = conditions._108_4_;
  } while( true );
}



undefined4 FUN_08058b17(void)

{
  int iVar1;
  
code_r0x08058b17:
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
  } while (conditions._100_4_ == 0);
  do {
    if (iVar1 != 0) {
      puts("block 4");
      if (conditions._112_4_ == 0) {
        puts("exit block");
        return 0;
      }
      if (conditions._116_4_ == 0) goto code_r0x08058b17;
    }
    puts("block 3");
    iVar1 = conditions._108_4_;
  } while( true );
}



undefined4 test_3_blocks_variant_668_edges_9(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    while (iVar1 == 0) {
      puts("block 3");
      iVar1 = conditions._108_4_;
    }
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_08058b86(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    while (iVar1 == 0) {
      puts("block 3");
      iVar1 = conditions._108_4_;
    }
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_669_edges_9(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
  } while (conditions._100_4_ == 0);
  do {
    while (iVar1 == 0) {
      puts("block 3");
      iVar1 = conditions._108_4_;
    }
    puts("block 4");
    iVar1 = conditions._116_4_;
  } while (conditions._112_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 FUN_08058bf5(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
  } while (conditions._100_4_ == 0);
  do {
    while (iVar1 == 0) {
      puts("block 3");
      iVar1 = conditions._108_4_;
    }
    puts("block 4");
    iVar1 = conditions._116_4_;
  } while (conditions._112_4_ != 0);
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_670_edges_9(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) goto LAB_08058c51;
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) break;
    puts("block 4");
    if (conditions._112_4_ == 0) goto LAB_08058c51;
  } while (conditions._116_4_ == 0);
  puts("block 3");
LAB_08058c51:
  puts("exit block");
  return 0;
}



undefined4 FUN_08058c64(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) goto LAB_08058c51;
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) break;
    puts("block 4");
    if (conditions._112_4_ == 0) goto LAB_08058c51;
  } while (conditions._116_4_ == 0);
  puts("block 3");
LAB_08058c51:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_671_edges_9(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_08058cc0:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) {
      puts("block 3");
      goto LAB_08058cc0;
    }
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08058cc0;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_08058cd3(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_08058cc0:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) {
      puts("block 3");
      goto LAB_08058cc0;
    }
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_08058cc0;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_672_edges_9(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08058d2f;
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  do {
    if (iVar1 == 0) {
      puts("block 3");
      break;
    }
    puts("block 4");
    iVar1 = conditions._116_4_;
  } while (conditions._112_4_ != 0);
LAB_08058d2f:
  puts("exit block");
  return 0;
}



undefined4 FUN_08058d42(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08058d2f;
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  do {
    if (iVar1 == 0) {
      puts("block 3");
      break;
    }
    puts("block 4");
    iVar1 = conditions._116_4_;
  } while (conditions._112_4_ != 0);
LAB_08058d2f:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_673_edges_9(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_08058d9e:
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._108_4_;
    } while (conditions._104_4_ == 0);
    do {
      if (iVar1 == 0) {
        puts("block 3");
        goto LAB_08058d9e;
      }
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_08058db1(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_08058d9e:
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._108_4_;
    } while (conditions._104_4_ == 0);
    do {
      if (iVar1 == 0) {
        puts("block 3");
        goto LAB_08058d9e;
      }
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_674_edges_9(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_08058e0d:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) break;
    puts("block 4");
    if (conditions._112_4_ == 0) goto LAB_08058e0d;
  } while (conditions._116_4_ == 0);
  puts("block 3");
  uVar1 = FUN_08058e20();
  return uVar1;
}



undefined4 FUN_08058e20(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_08058e0d:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) break;
    puts("block 4");
    if (conditions._112_4_ == 0) goto LAB_08058e0d;
  } while (conditions._116_4_ == 0);
  puts("block 3");
  uVar1 = FUN_08058e20();
  return uVar1;
}



undefined4 test_3_blocks_variant_675_edges_9(void)

{
  undefined4 uVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) {
        puts("block 3");
        uVar1 = FUN_08058e8f();
        return uVar1;
      }
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_08058e7c;
      } while (conditions._116_4_ != 0);
    }
  }
LAB_08058e7c:
  puts("exit block");
  return 0;
}



undefined4 FUN_08058e8f(void)

{
  undefined4 uVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) {
        puts("block 3");
        uVar1 = FUN_08058e8f();
        return uVar1;
      }
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_08058e7c;
      } while (conditions._116_4_ != 0);
    }
  }
LAB_08058e7c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_676_edges_9(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08058eeb;
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  do {
    if (iVar1 == 0) {
      puts("block 3");
      uVar2 = FUN_08058efe();
      return uVar2;
    }
    puts("block 4");
    iVar1 = conditions._116_4_;
  } while (conditions._112_4_ != 0);
LAB_08058eeb:
  puts("exit block");
  return 0;
}



undefined4 FUN_08058efe(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08058eeb;
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  do {
    if (iVar1 == 0) {
      puts("block 3");
      uVar2 = FUN_08058efe();
      return uVar2;
    }
    puts("block 4");
    iVar1 = conditions._116_4_;
  } while (conditions._112_4_ != 0);
LAB_08058eeb:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_677_edges_9(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._108_4_;
    } while (conditions._104_4_ == 0);
    do {
      if (iVar1 == 0) {
        puts("block 3");
        uVar2 = FUN_08058f6d();
        return uVar2;
      }
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_08058f6d(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._108_4_;
    } while (conditions._104_4_ == 0);
    do {
      if (iVar1 == 0) {
        puts("block 3");
        uVar2 = FUN_08058f6d();
        return uVar2;
      }
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_678_edges_9(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_08058fc9:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) break;
    puts("block 4");
    if (conditions._112_4_ == 0) goto LAB_08058fc9;
  } while (conditions._116_4_ == 0);
  do {
    puts("block 3");
  } while( true );
}



undefined4 FUN_08058fdc(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_08058fc9:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) break;
    puts("block 4");
    if (conditions._112_4_ == 0) goto LAB_08058fc9;
  } while (conditions._116_4_ == 0);
  do {
    puts("block 3");
  } while( true );
}



undefined4 test_3_blocks_variant_679_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) {
        do {
          puts("block 3");
        } while( true );
      }
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_08059038;
      } while (conditions._116_4_ != 0);
    }
  }
LAB_08059038:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805904b(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) {
        do {
          puts("block 3");
        } while( true );
      }
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_08059038;
      } while (conditions._116_4_ != 0);
    }
  }
LAB_08059038:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_680_edges_9(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080590a7;
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  do {
    if (iVar1 == 0) {
      do {
        puts("block 3");
      } while( true );
    }
    puts("block 4");
    iVar1 = conditions._116_4_;
  } while (conditions._112_4_ != 0);
LAB_080590a7:
  puts("exit block");
  return 0;
}



undefined4 FUN_080590ba(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080590a7;
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  do {
    if (iVar1 == 0) {
      do {
        puts("block 3");
      } while( true );
    }
    puts("block 4");
    iVar1 = conditions._116_4_;
  } while (conditions._112_4_ != 0);
LAB_080590a7:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_681_edges_9(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._108_4_;
    } while (conditions._104_4_ == 0);
    do {
      if (iVar1 == 0) {
        do {
          puts("block 3");
        } while( true );
      }
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_08059129(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._108_4_;
    } while (conditions._104_4_ == 0);
    do {
      if (iVar1 == 0) {
        do {
          puts("block 3");
        } while( true );
      }
      puts("block 4");
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_682_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) goto LAB_080591c2;
      while( true ) {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_08059185;
        if (conditions._116_4_ == 0) break;
LAB_080591c2:
        puts("block 3");
      }
    }
  }
LAB_08059185:
  puts("exit block");
  return 0;
}



undefined4 FUN_08059198(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) goto LAB_080591c2;
      while( true ) {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_08059185;
        if (conditions._116_4_ == 0) break;
LAB_080591c2:
        puts("block 3");
      }
    }
  }
LAB_08059185:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_683_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) {
        puts("block 3");
      }
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_080591f4;
      } while (conditions._116_4_ != 0);
    }
  }
LAB_080591f4:
  puts("exit block");
  return 0;
}



undefined4 FUN_08059207(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) {
        puts("block 3");
      }
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_080591f4;
      } while (conditions._116_4_ != 0);
    }
  }
LAB_080591f4:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_684_edges_9(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08059263;
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  do {
    if (iVar1 == 0) {
      puts("block 3");
    }
    puts("block 4");
    iVar1 = conditions._116_4_;
  } while (conditions._112_4_ != 0);
LAB_08059263:
  puts("exit block");
  return 0;
}



undefined4 FUN_08059276(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08059263;
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  do {
    if (iVar1 == 0) {
      puts("block 3");
    }
    puts("block 4");
    iVar1 = conditions._116_4_;
  } while (conditions._112_4_ != 0);
LAB_08059263:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_685_edges_9(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      if (iVar1 == 0) {
        puts("block 3");
      }
      puts("block 4");
      iVar1 = conditions._116_4_;
      iVar2 = conditions._112_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_080592e5(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      if (iVar1 == 0) {
        puts("block 3");
      }
      puts("block 4");
      iVar1 = conditions._116_4_;
      iVar2 = conditions._112_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_686_edges_9(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08059341;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    puts("block 3");
    if (conditions._112_4_ != 0) {
      uVar1 = FUN_08059354();
      return uVar1;
    }
  }
  else {
    puts("block 4");
    if (conditions._116_4_ != 0) {
      uVar1 = FUN_08059354();
      return uVar1;
    }
  }
LAB_08059341:
  puts("exit block");
  return 0;
}



undefined4 FUN_08059354(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08059341;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    puts("block 3");
    if (conditions._112_4_ != 0) {
      uVar1 = FUN_08059354();
      return uVar1;
    }
  }
  else {
    puts("block 4");
    if (conditions._116_4_ != 0) {
      uVar1 = FUN_08059354();
      return uVar1;
    }
  }
LAB_08059341:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_687_edges_9(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080593b0;
  } while (conditions._104_4_ == 0);
  if (((conditions._108_4_ == 0) || (puts("block 4"), conditions._116_4_ != 0)) &&
     (puts("block 3"), conditions._112_4_ != 0)) {
    uVar1 = FUN_080593c3();
    return uVar1;
  }
LAB_080593b0:
  puts("exit block");
  return 0;
}



undefined4 FUN_080593c3(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080593b0;
  } while (conditions._104_4_ == 0);
  if (((conditions._108_4_ == 0) || (puts("block 4"), conditions._116_4_ != 0)) &&
     (puts("block 3"), conditions._112_4_ != 0)) {
    uVar1 = FUN_080593c3();
    return uVar1;
  }
LAB_080593b0:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_688_edges_9(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805941f;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    puts("block 3");
    if (conditions._112_4_ != 0) {
      uVar1 = FUN_08059432();
      return uVar1;
    }
  }
  else {
    do {
      puts("block 4");
    } while (conditions._116_4_ != 0);
  }
LAB_0805941f:
  puts("exit block");
  return 0;
}



undefined4 FUN_08059432(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805941f;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    puts("block 3");
    if (conditions._112_4_ != 0) {
      uVar1 = FUN_08059432();
      return uVar1;
    }
  }
  else {
    do {
      puts("block 4");
    } while (conditions._116_4_ != 0);
  }
LAB_0805941f:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_689_edges_9(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805948e;
  } while ((conditions._104_4_ == 0) ||
          ((conditions._108_4_ != 0 && (puts("block 4"), conditions._116_4_ == 0))));
  puts("block 3");
  if (conditions._112_4_ != 0) {
    uVar1 = FUN_080594a1();
    return uVar1;
  }
LAB_0805948e:
  puts("exit block");
  return 0;
}



undefined4 FUN_080594a1(void)

{
  undefined4 uVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805948e;
  } while ((conditions._104_4_ == 0) ||
          ((conditions._108_4_ != 0 && (puts("block 4"), conditions._116_4_ == 0))));
  puts("block 3");
  if (conditions._112_4_ != 0) {
    uVar1 = FUN_080594a1();
    return uVar1;
  }
LAB_0805948e:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_690_edges_9(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_080594fd:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) {
      puts("block 3");
      if (conditions._112_4_ != 0) {
        uVar1 = FUN_08059510();
        return uVar1;
      }
      goto LAB_080594fd;
    }
    do {
      puts("block 4");
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_08059510(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_080594fd:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) {
      puts("block 3");
      if (conditions._112_4_ != 0) {
        uVar1 = FUN_08059510();
        return uVar1;
      }
      goto LAB_080594fd;
    }
    do {
      puts("block 4");
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_691_edges_9(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805956c;
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._116_4_;
  }
  puts("block 3");
  if (conditions._112_4_ != 0) {
    uVar2 = FUN_0805957f();
    return uVar2;
  }
LAB_0805956c:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805957f(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805956c;
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._116_4_;
  }
  puts("block 3");
  if (conditions._112_4_ != 0) {
    uVar2 = FUN_0805957f();
    return uVar2;
  }
LAB_0805956c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_692_edges_9(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080595db;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) goto LAB_08059618;
  puts("block 4");
  iVar1 = conditions._116_4_;
  while (iVar1 != 0) {
LAB_08059618:
    puts("block 3");
    iVar1 = conditions._112_4_;
  }
LAB_080595db:
  puts("exit block");
  return 0;
}



undefined4 FUN_080595ee(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080595db;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) goto LAB_08059618;
  puts("block 4");
  iVar1 = conditions._116_4_;
  while (iVar1 != 0) {
LAB_08059618:
    puts("block 3");
    iVar1 = conditions._112_4_;
  }
LAB_080595db:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_693_edges_9(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805964a;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    do {
      puts("block 3");
    } while (conditions._112_4_ != 0);
  }
  else {
    do {
      puts("block 4");
    } while (conditions._116_4_ != 0);
  }
LAB_0805964a:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805965d(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805964a;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) {
    do {
      puts("block 3");
    } while (conditions._112_4_ != 0);
  }
  else {
    do {
      puts("block 4");
    } while (conditions._116_4_ != 0);
  }
LAB_0805964a:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_694_edges_9(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080596b9;
  } while ((conditions._104_4_ == 0) ||
          ((conditions._108_4_ != 0 && (puts("block 4"), conditions._116_4_ == 0))));
  do {
    puts("block 3");
  } while (conditions._112_4_ != 0);
LAB_080596b9:
  puts("exit block");
  return 0;
}



undefined4 FUN_080596cc(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_080596b9;
  } while ((conditions._104_4_ == 0) ||
          ((conditions._108_4_ != 0 && (puts("block 4"), conditions._116_4_ == 0))));
  do {
    puts("block 3");
  } while (conditions._112_4_ != 0);
LAB_080596b9:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_695_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) goto LAB_08059765;
      do {
        puts("block 4");
      } while (conditions._116_4_ != 0);
    }
  }
LAB_08059728:
  puts("exit block");
  return 0;
LAB_08059765:
  do {
    puts("block 3");
  } while (conditions._112_4_ != 0);
  goto LAB_08059728;
}



undefined4 FUN_0805973b(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) goto LAB_08059765;
      do {
        puts("block 4");
      } while (conditions._116_4_ != 0);
    }
  }
LAB_08059728:
  puts("exit block");
  return 0;
LAB_08059765:
  do {
    puts("block 3");
  } while (conditions._112_4_ != 0);
  goto LAB_08059728;
}



undefined4 test_3_blocks_variant_696_edges_9(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08059797;
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._116_4_;
  }
  do {
    puts("block 3");
  } while (conditions._112_4_ != 0);
LAB_08059797:
  puts("exit block");
  return 0;
}



undefined4 FUN_080597aa(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08059797;
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  while (iVar1 != 0) {
    puts("block 4");
    iVar1 = conditions._116_4_;
  }
  do {
    puts("block 3");
  } while (conditions._112_4_ != 0);
LAB_08059797:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_697_edges_9(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08059806;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) goto LAB_08059843;
  do {
    puts("block 4");
    if (conditions._116_4_ == 0) break;
LAB_08059843:
    puts("block 3");
  } while (conditions._112_4_ != 0);
LAB_08059806:
  puts("exit block");
  return 0;
}



undefined4 FUN_08059819(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08059806;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) goto LAB_08059843;
  do {
    puts("block 4");
    if (conditions._116_4_ == 0) break;
LAB_08059843:
    puts("block 3");
  } while (conditions._112_4_ != 0);
LAB_08059806:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_698_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) goto LAB_080598b2;
      while (puts("block 4"), conditions._116_4_ != 0) {
LAB_080598b2:
        puts("block 3");
        if (conditions._112_4_ == 0) goto LAB_08059875;
      }
    }
  }
LAB_08059875:
  puts("exit block");
  return 0;
}



undefined4 FUN_08059888(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) goto LAB_080598b2;
      while (puts("block 4"), conditions._116_4_ != 0) {
LAB_080598b2:
        puts("block 3");
        if (conditions._112_4_ == 0) goto LAB_08059875;
      }
    }
  }
LAB_08059875:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_699_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if ((conditions._108_4_ == 0) && (puts("block 3"), conditions._112_4_ == 0)) break;
      do {
        puts("block 4");
      } while (conditions._116_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_080598f7(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if ((conditions._108_4_ == 0) && (puts("block 3"), conditions._112_4_ == 0)) break;
      do {
        puts("block 4");
      } while (conditions._116_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_700_edges_9(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08059953;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) goto LAB_08059990;
  do {
    do {
      puts("block 4");
    } while (conditions._116_4_ != 0);
LAB_08059990:
    puts("block 3");
  } while (conditions._112_4_ != 0);
LAB_08059953:
  puts("exit block");
  return 0;
}



undefined4 FUN_08059966(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_08059953;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) goto LAB_08059990;
  do {
    do {
      puts("block 4");
    } while (conditions._116_4_ != 0);
LAB_08059990:
    puts("block 3");
  } while (conditions._112_4_ != 0);
LAB_08059953:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_701_edges_9(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) goto LAB_080599ff;
      puts("block 4");
      iVar1 = conditions._116_4_;
      while (iVar1 != 0) {
LAB_080599ff:
        puts("block 3");
        iVar1 = conditions._112_4_;
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_080599d5(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) goto LAB_080599ff;
      puts("block 4");
      iVar1 = conditions._116_4_;
      while (iVar1 != 0) {
LAB_080599ff:
        puts("block 3");
        iVar1 = conditions._112_4_;
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_702_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) {
        do {
          puts("block 3");
        } while (conditions._112_4_ != 0);
      }
      else {
        do {
          puts("block 4");
        } while (conditions._116_4_ != 0);
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08059a44(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) {
        do {
          puts("block 3");
        } while (conditions._112_4_ != 0);
      }
      else {
        do {
          puts("block 4");
        } while (conditions._116_4_ != 0);
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_703_edges_9(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    iVar1 = conditions._108_4_;
    if (conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._116_4_;
      }
      do {
        puts("block 3");
      } while (conditions._112_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08059ab3(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    iVar1 = conditions._108_4_;
    if (conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._116_4_;
      }
      do {
        puts("block 3");
      } while (conditions._112_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_704_edges_9(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) goto LAB_08059b4c;
    do {
      puts("block 4");
      if (conditions._116_4_ == 0) break;
LAB_08059b4c:
      puts("block 3");
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_08059b22(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) goto LAB_08059b4c;
    do {
      puts("block 4");
      if (conditions._116_4_ == 0) break;
LAB_08059b4c:
      puts("block 3");
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_705_edges_9(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) goto LAB_08059bbb;
      do {
        do {
          puts("block 4");
        } while (conditions._116_4_ != 0);
LAB_08059bbb:
        puts("block 3");
      } while (conditions._112_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08059b91(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) goto LAB_08059bbb;
      do {
        do {
          puts("block 4");
        } while (conditions._116_4_ != 0);
LAB_08059bbb:
        puts("block 3");
      } while (conditions._112_4_ != 0);
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_706_edges_9(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  do {
    while (iVar1 == 0) {
      puts("block 3");
      iVar1 = conditions._112_4_;
    }
    puts("block 4");
    iVar1 = conditions._116_4_;
  } while( true );
}



undefined4 FUN_08059c00(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  do {
    while (iVar1 == 0) {
      puts("block 3");
      iVar1 = conditions._112_4_;
    }
    puts("block 4");
    iVar1 = conditions._116_4_;
  } while( true );
}



undefined4 test_3_blocks_variant_707_edges_10(void)

{
  int iVar1;
  int iVar2;
  
FUN_08059c6f:
  puts("block 2");
  while (puts("block 3"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while( true ) {
      if (iVar2 == 0) goto FUN_08059c6f;
      if (iVar1 == 0) break;
      puts("block 4");
      iVar1 = conditions._120_4_;
      iVar2 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_08059c5c;
    }
  }
LAB_08059c5c:
  puts("exit block");
  return 0;
}



undefined4 FUN_08059c6f(void)

{
  int iVar1;
  int iVar2;
  
code_r0x08059c6f:
  puts("block 2");
  while (puts("block 3"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while( true ) {
      if (iVar2 == 0) goto code_r0x08059c6f;
      if (iVar1 == 0) break;
      puts("block 4");
      iVar1 = conditions._120_4_;
      iVar2 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_08059c5c;
    }
  }
LAB_08059c5c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_708_edges_10(void)

{
FUN_08059ce7:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08059cd4:
      puts("exit block");
      return 0;
    }
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08059cd4;
      if (conditions._108_4_ == 0) break;
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_08059cd4;
        if (conditions._116_4_ == 0) goto FUN_08059ce7;
      } while (conditions._120_4_ != 0);
    }
  } while( true );
}



undefined4 FUN_08059ce7(void)

{
code_r0x08059ce7:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08059cd4:
      puts("exit block");
      return 0;
    }
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08059cd4;
      if (conditions._108_4_ == 0) break;
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_08059cd4;
        if (conditions._116_4_ == 0) goto code_r0x08059ce7;
      } while (conditions._120_4_ != 0);
    }
  } while( true );
}



undefined4 test_3_blocks_variant_709_edges_10(void)

{
  int iVar1;
  
FUN_08059d5f:
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_08059d4c;
        iVar1 = conditions._120_4_;
        if (conditions._116_4_ == 0) goto FUN_08059d5f;
      }
    }
  }
LAB_08059d4c:
  puts("exit block");
  return 0;
}



undefined4 FUN_08059d5f(void)

{
  int iVar1;
  
code_r0x08059d5f:
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_08059d4c;
        iVar1 = conditions._120_4_;
        if (conditions._116_4_ == 0) goto code_r0x08059d5f;
      }
    }
  }
LAB_08059d4c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_710_edges_10(void)

{
  int iVar1;
  
FUN_08059dd7:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08059dc4:
      puts("exit block");
      return 0;
    }
    while (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_08059dc4;
        iVar1 = conditions._120_4_;
        if (conditions._116_4_ == 0) goto FUN_08059dd7;
      }
    }
  } while( true );
}



undefined4 FUN_08059dd7(void)

{
  int iVar1;
  
code_r0x08059dd7:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08059dc4:
      puts("exit block");
      return 0;
    }
    while (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_08059dc4;
        iVar1 = conditions._120_4_;
        if (conditions._116_4_ == 0) goto code_r0x08059dd7;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_711_edges_10(void)

{
FUN_08059e4f:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08059e3c:
      puts("exit block");
      return 0;
    }
    do {
      do {
        puts("block 3");
        if (conditions._104_4_ == 0) goto LAB_08059e3c;
        if (conditions._108_4_ == 0) goto FUN_08059e4f;
      } while (conditions._112_4_ == 0);
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_08059e3c;
    } while (conditions._120_4_ != 0);
  } while( true );
}



undefined4 FUN_08059e4f(void)

{
code_r0x08059e4f:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08059e3c:
      puts("exit block");
      return 0;
    }
    do {
      do {
        puts("block 3");
        if (conditions._104_4_ == 0) goto LAB_08059e3c;
        if (conditions._108_4_ == 0) goto code_r0x08059e4f;
      } while (conditions._112_4_ == 0);
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_08059e3c;
    } while (conditions._120_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_712_edges_10(void)

{
FUN_08059ec7:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08059eb4:
      puts("exit block");
      return 0;
    }
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08059eb4;
      if (conditions._108_4_ == 0) goto FUN_08059ec7;
    } while (conditions._112_4_ == 0);
    do {
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_08059eb4;
    } while (conditions._120_4_ != 0);
  } while( true );
}



undefined4 FUN_08059ec7(void)

{
code_r0x08059ec7:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_08059eb4:
      puts("exit block");
      return 0;
    }
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08059eb4;
      if (conditions._108_4_ == 0) goto code_r0x08059ec7;
    } while (conditions._112_4_ == 0);
    do {
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_08059eb4;
    } while (conditions._120_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_713_edges_10(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08059f2c;
      iVar1 = conditions._112_4_;
      if (conditions._108_4_ == 0) break;
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._120_4_;
        if (conditions._116_4_ == 0) goto LAB_08059f2c;
      }
    }
  }
LAB_08059f2c:
  puts("exit block");
  return 0;
}



undefined4 FUN_08059f3f(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    while( true ) {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_08059f2c;
      iVar1 = conditions._112_4_;
      if (conditions._108_4_ == 0) break;
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._120_4_;
        if (conditions._116_4_ == 0) goto LAB_08059f2c;
      }
    }
  }
LAB_08059f2c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_714_edges_10(void)

{
  int iVar1;
  int iVar2;
  
FUN_08059fb7:
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), iVar1 = conditions._112_4_, iVar2 = conditions._108_4_,
          conditions._104_4_ != 0) {
      while( true ) {
        if (iVar2 == 0) goto FUN_08059fb7;
        if (iVar1 == 0) break;
        puts("block 4");
        iVar1 = conditions._120_4_;
        iVar2 = conditions._116_4_;
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_08059fb7(void)

{
  int iVar1;
  int iVar2;
  
code_r0x08059fb7:
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), iVar1 = conditions._112_4_, iVar2 = conditions._108_4_,
          conditions._104_4_ != 0) {
      while( true ) {
        if (iVar2 == 0) goto code_r0x08059fb7;
        if (iVar1 == 0) break;
        puts("block 4");
        iVar1 = conditions._120_4_;
        iVar2 = conditions._116_4_;
      }
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_715_edges_10(void)

{
FUN_0805a02f:
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) {
LAB_0805a01c:
      puts("exit block");
      return 0;
    }
    if (conditions._108_4_ == 0) goto FUN_0805a02f;
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805a01c;
      if (conditions._116_4_ == 0) goto FUN_0805a02f;
    } while (conditions._120_4_ != 0);
  } while( true );
}



undefined4 FUN_0805a02f(void)

{
code_r0x0805a02f:
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) {
LAB_0805a01c:
      puts("exit block");
      return 0;
    }
    if (conditions._108_4_ == 0) goto code_r0x0805a02f;
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805a01c;
      if (conditions._116_4_ == 0) goto code_r0x0805a02f;
    } while (conditions._120_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_716_edges_10(void)

{
  int iVar1;
  
FUN_0805a0a7:
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    iVar1 = conditions._108_4_;
    if (conditions._104_4_ == 0) {
LAB_0805a094:
      puts("exit block");
      return 0;
    }
    while (iVar1 != 0) {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805a094;
      iVar1 = conditions._120_4_;
      if (conditions._116_4_ == 0) goto FUN_0805a0a7;
    }
  } while( true );
}



undefined4 FUN_0805a0a7(void)

{
  int iVar1;
  
code_r0x0805a0a7:
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    iVar1 = conditions._108_4_;
    if (conditions._104_4_ == 0) {
LAB_0805a094:
      puts("exit block");
      return 0;
    }
    while (iVar1 != 0) {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805a094;
      iVar1 = conditions._120_4_;
      if (conditions._116_4_ == 0) goto code_r0x0805a0a7;
    }
  } while( true );
}



undefined4 test_3_blocks_variant_717_edges_10(void)

{
  int iVar1;
  
FUN_0805a11f:
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        if (conditions._112_4_ == 0) {
          puts("exit block");
          return 0;
        }
        iVar1 = conditions._120_4_;
        if (conditions._116_4_ == 0) goto FUN_0805a11f;
      }
    }
  } while( true );
}



undefined4 FUN_0805a11f(void)

{
  int iVar1;
  
code_r0x0805a11f:
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    while (puts("block 3"), iVar1 = conditions._108_4_, conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        if (conditions._112_4_ == 0) {
          puts("exit block");
          return 0;
        }
        iVar1 = conditions._120_4_;
        if (conditions._116_4_ == 0) goto code_r0x0805a11f;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_718_edges_10(void)

{
FUN_0805a197:
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      do {
        puts("block 3");
        if (conditions._104_4_ == 0) {
LAB_0805a184:
          puts("exit block");
          return 0;
        }
        if (conditions._108_4_ == 0) goto FUN_0805a197;
      } while (conditions._112_4_ == 0);
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805a184;
    } while (conditions._120_4_ != 0);
  } while( true );
}



undefined4 FUN_0805a197(void)

{
code_r0x0805a197:
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      do {
        puts("block 3");
        if (conditions._104_4_ == 0) {
LAB_0805a184:
          puts("exit block");
          return 0;
        }
        if (conditions._108_4_ == 0) goto code_r0x0805a197;
      } while (conditions._112_4_ == 0);
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805a184;
    } while (conditions._120_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_719_edges_10(void)

{
FUN_0805a20f:
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0805a1fc;
      if (conditions._108_4_ == 0) goto FUN_0805a20f;
    } while (conditions._112_4_ == 0);
    do {
      puts("block 4");
      if (conditions._116_4_ == 0) {
LAB_0805a1fc:
        puts("exit block");
        return 0;
      }
    } while (conditions._120_4_ != 0);
  } while( true );
}



undefined4 FUN_0805a20f(void)

{
code_r0x0805a20f:
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    do {
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0805a1fc;
      if (conditions._108_4_ == 0) goto code_r0x0805a20f;
    } while (conditions._112_4_ == 0);
    do {
      puts("block 4");
      if (conditions._116_4_ == 0) {
LAB_0805a1fc:
        puts("exit block");
        return 0;
      }
    } while (conditions._120_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_720_edges_10(void)

{
  int iVar1;
  
FUN_0805a287:
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) {
LAB_0805a274:
      puts("exit block");
      return 0;
    }
    iVar1 = conditions._112_4_;
    if (conditions._108_4_ == 0) goto FUN_0805a287;
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._120_4_;
      if (conditions._116_4_ == 0) goto LAB_0805a274;
    }
  } while( true );
}



undefined4 FUN_0805a287(void)

{
  int iVar1;
  
code_r0x0805a287:
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) {
LAB_0805a274:
      puts("exit block");
      return 0;
    }
    iVar1 = conditions._112_4_;
    if (conditions._108_4_ == 0) goto code_r0x0805a287;
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._120_4_;
      if (conditions._116_4_ == 0) goto LAB_0805a274;
    }
  } while( true );
}



undefined4 test_3_blocks_variant_721_edges_10(void)

{
  int iVar1;
  int iVar2;
  
FUN_0805a2ff:
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    iVar1 = conditions._112_4_;
    iVar2 = conditions._108_4_;
    if (conditions._104_4_ == 0) {
      puts("exit block");
      return 0;
    }
    while( true ) {
      if (iVar2 == 0) goto FUN_0805a2ff;
      if (iVar1 == 0) break;
      puts("block 4");
      iVar1 = conditions._120_4_;
      iVar2 = conditions._116_4_;
    }
  } while( true );
}



undefined4 FUN_0805a2ff(void)

{
  int iVar1;
  int iVar2;
  
code_r0x0805a2ff:
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  do {
    puts("block 3");
    iVar1 = conditions._112_4_;
    iVar2 = conditions._108_4_;
    if (conditions._104_4_ == 0) {
      puts("exit block");
      return 0;
    }
    while( true ) {
      if (iVar2 == 0) goto code_r0x0805a2ff;
      if (iVar1 == 0) break;
      puts("block 4");
      iVar1 = conditions._120_4_;
      iVar2 = conditions._116_4_;
    }
  } while( true );
}



undefined4 test_3_blocks_variant_722_edges_10(void)

{
  int iVar1;
  
FUN_0805a377:
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    do {
      if (iVar1 == 0) goto LAB_0805a38f;
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805a364;
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
LAB_0805a38f:
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) {
LAB_0805a364:
      puts("exit block");
      return 0;
    }
  } while (conditions._108_4_ != 0);
  goto FUN_0805a377;
}



undefined4 FUN_0805a377(void)

{
  int iVar1;
  
code_r0x0805a377:
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    do {
      if (iVar1 == 0) goto LAB_0805a38f;
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805a364;
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
LAB_0805a38f:
  do {
    puts("block 3");
    if (conditions._104_4_ == 0) {
LAB_0805a364:
      puts("exit block");
      return 0;
    }
  } while (conditions._108_4_ != 0);
  goto code_r0x0805a377;
}



undefined4 test_3_blocks_variant_723_edges_10(void)

{
FUN_0805a3ef:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805a407;
    do {
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) {
LAB_0805a3dc:
          puts("exit block");
          return 0;
        }
        if (conditions._116_4_ == 0) goto FUN_0805a3ef;
      } while (conditions._120_4_ != 0);
LAB_0805a407:
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0805a3dc;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0805a3ef(void)

{
code_r0x0805a3ef:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805a407;
    do {
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) {
LAB_0805a3dc:
          puts("exit block");
          return 0;
        }
        if (conditions._116_4_ == 0) goto code_r0x0805a3ef;
      } while (conditions._120_4_ != 0);
LAB_0805a407:
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0805a3dc;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_724_edges_10(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    do {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._108_4_;
        if (conditions._104_4_ == 0) {
LAB_0805a454:
          puts("exit block");
          return 0;
        }
      }
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805a454;
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_0805a467(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    do {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._108_4_;
        if (conditions._104_4_ == 0) {
LAB_0805a454:
          puts("exit block");
          return 0;
        }
      }
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805a454;
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_725_edges_10(void)

{
  int iVar1;
  
FUN_0805a4df:
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    do {
      while (iVar1 != 0) {
        puts("block 4");
        if (conditions._112_4_ == 0) {
          puts("exit block");
          return 0;
        }
        iVar1 = conditions._120_4_;
        if (conditions._116_4_ == 0) goto FUN_0805a4df;
      }
      puts("block 3");
      iVar1 = conditions._108_4_;
    } while (conditions._104_4_ != 0);
  } while( true );
}



undefined4 FUN_0805a4df(void)

{
  int iVar1;
  
code_r0x0805a4df:
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    do {
      while (iVar1 != 0) {
        puts("block 4");
        if (conditions._112_4_ == 0) {
          puts("exit block");
          return 0;
        }
        iVar1 = conditions._120_4_;
        if (conditions._116_4_ == 0) goto code_r0x0805a4df;
      }
      puts("block 3");
      iVar1 = conditions._108_4_;
    } while (conditions._104_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_726_edges_10(void)

{
FUN_0805a557:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805a544:
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), conditions._108_4_ != 0) {
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805a544;
      if (conditions._116_4_ == 0) goto FUN_0805a557;
    } while (conditions._120_4_ != 0);
  }
  goto LAB_0805a544;
}



undefined4 FUN_0805a557(void)

{
code_r0x0805a557:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805a544:
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), conditions._108_4_ != 0) {
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805a544;
      if (conditions._116_4_ == 0) goto code_r0x0805a557;
    } while (conditions._120_4_ != 0);
  }
  goto LAB_0805a544;
}



undefined4 test_3_blocks_variant_727_edges_10(void)

{
FUN_0805a5cf:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805a5bc:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ != 0) {
      while (puts("block 3"), conditions._108_4_ != 0) {
        do {
          puts("block 4");
          if (conditions._112_4_ == 0) goto LAB_0805a5bc;
          if (conditions._116_4_ == 0) goto FUN_0805a5cf;
        } while (conditions._120_4_ != 0);
      }
    }
  } while( true );
}



undefined4 FUN_0805a5cf(void)

{
code_r0x0805a5cf:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805a5bc:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ != 0) {
      while (puts("block 3"), conditions._108_4_ != 0) {
        do {
          puts("block 4");
          if (conditions._112_4_ == 0) goto LAB_0805a5bc;
          if (conditions._116_4_ == 0) goto code_r0x0805a5cf;
        } while (conditions._120_4_ != 0);
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_728_edges_10(void)

{
FUN_0805a647:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805a634:
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    do {
      puts("block 3");
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805a634;
      if (conditions._116_4_ == 0) goto FUN_0805a647;
    } while (conditions._120_4_ != 0);
  } while( true );
}



undefined4 FUN_0805a647(void)

{
code_r0x0805a647:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805a634:
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  do {
    do {
      puts("block 3");
    } while (conditions._108_4_ == 0);
    do {
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805a634;
      if (conditions._116_4_ == 0) goto code_r0x0805a647;
    } while (conditions._120_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_729_edges_10(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805a6ac:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    do {
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_0805a6ac;
      if (conditions._112_4_ == 0) break;
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805a6ac;
    } while (conditions._120_4_ != 0);
  } while( true );
}



undefined4 FUN_0805a6bf(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805a6ac:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    do {
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_0805a6ac;
      if (conditions._112_4_ == 0) break;
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805a6ac;
    } while (conditions._120_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_730_edges_10(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 3");
      iVar1 = conditions._112_4_;
      iVar2 = conditions._108_4_;
      while( true ) {
        if (iVar2 == 0) goto LAB_0805a724;
        if (iVar1 == 0) break;
        puts("block 4");
        iVar1 = conditions._120_4_;
        iVar2 = conditions._116_4_;
      }
    }
  }
LAB_0805a724:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805a737(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      puts("block 3");
      iVar1 = conditions._112_4_;
      iVar2 = conditions._108_4_;
      while( true ) {
        if (iVar2 == 0) goto LAB_0805a724;
        if (iVar1 == 0) break;
        puts("block 4");
        iVar1 = conditions._120_4_;
        iVar2 = conditions._116_4_;
      }
    }
  }
LAB_0805a724:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_731_edges_10(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805a79c;
        if (conditions._112_4_ == 0) break;
        do {
          puts("block 4");
          if (conditions._116_4_ == 0) goto LAB_0805a79c;
        } while (conditions._120_4_ != 0);
      }
    }
  }
LAB_0805a79c:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805a7af(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805a79c;
        if (conditions._112_4_ == 0) break;
        do {
          puts("block 4");
          if (conditions._116_4_ == 0) goto LAB_0805a79c;
        } while (conditions._120_4_ != 0);
      }
    }
  }
LAB_0805a79c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_732_edges_10(void)

{
FUN_0805a827:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805a814:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805a814;
        if (conditions._112_4_ == 0) break;
        do {
          puts("block 4");
          if (conditions._116_4_ == 0) goto FUN_0805a827;
        } while (conditions._120_4_ != 0);
      }
    }
  } while( true );
}



undefined4 FUN_0805a827(void)

{
code_r0x0805a827:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805a814:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805a814;
        if (conditions._112_4_ == 0) break;
        do {
          puts("block 4");
          if (conditions._116_4_ == 0) goto code_r0x0805a827;
        } while (conditions._120_4_ != 0);
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_733_edges_10(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      do {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805a88c;
      } while (conditions._112_4_ == 0);
      puts("block 4");
      iVar1 = conditions._120_4_;
      if (conditions._116_4_ == 0) goto LAB_0805a88c;
    }
  }
LAB_0805a88c:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805a89f(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      do {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805a88c;
      } while (conditions._112_4_ == 0);
      puts("block 4");
      iVar1 = conditions._120_4_;
      if (conditions._116_4_ == 0) goto LAB_0805a88c;
    }
  }
LAB_0805a88c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_734_edges_10(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      do {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805a904;
      } while (conditions._112_4_ == 0);
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805a904;
      } while (conditions._120_4_ != 0);
    }
  }
LAB_0805a904:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805a917(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      do {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805a904;
      } while (conditions._112_4_ == 0);
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805a904;
      } while (conditions._120_4_ != 0);
    }
  }
LAB_0805a904:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_735_edges_10(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805a97c;
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), iVar1 = conditions._112_4_, conditions._108_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._120_4_;
      if (conditions._116_4_ == 0) goto LAB_0805a97c;
    }
  }
LAB_0805a97c:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805a98f(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805a97c;
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), iVar1 = conditions._112_4_, conditions._108_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._120_4_;
      if (conditions._116_4_ == 0) goto LAB_0805a97c;
    }
  }
LAB_0805a97c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_736_edges_10(void)

{
  int iVar1;
  
FUN_0805aa07:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805a9f4:
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), iVar1 = conditions._112_4_, conditions._108_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._120_4_;
      if (conditions._116_4_ == 0) goto FUN_0805aa07;
    }
  }
  goto LAB_0805a9f4;
}



undefined4 FUN_0805aa07(void)

{
  int iVar1;
  
code_r0x0805aa07:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805a9f4:
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), iVar1 = conditions._112_4_, conditions._108_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._120_4_;
      if (conditions._116_4_ == 0) goto code_r0x0805aa07;
    }
  }
  goto LAB_0805a9f4;
}



undefined4 test_3_blocks_variant_737_edges_10(void)

{
FUN_0805aa7f:
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805aa6c:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    do {
      do {
        puts("block 3");
        if (conditions._108_4_ == 0) goto FUN_0805aa7f;
      } while (conditions._112_4_ == 0);
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805aa6c;
    } while (conditions._120_4_ != 0);
  } while( true );
}



undefined4 FUN_0805aa7f(void)

{
code_r0x0805aa7f:
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805aa6c:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    do {
      do {
        puts("block 3");
        if (conditions._108_4_ == 0) goto code_r0x0805aa7f;
      } while (conditions._112_4_ == 0);
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805aa6c;
    } while (conditions._120_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_738_edges_10(void)

{
FUN_0805aaf7:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805aae4:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ != 0) {
      do {
        puts("block 3");
        if (conditions._108_4_ == 0) goto FUN_0805aaf7;
      } while (conditions._112_4_ == 0);
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805aae4;
      } while (conditions._120_4_ != 0);
    }
  } while( true );
}



undefined4 FUN_0805aaf7(void)

{
code_r0x0805aaf7:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805aae4:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ != 0) {
      do {
        puts("block 3");
        if (conditions._108_4_ == 0) goto code_r0x0805aaf7;
      } while (conditions._112_4_ == 0);
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805aae4;
      } while (conditions._120_4_ != 0);
    }
  } while( true );
}



undefined4 test_3_blocks_variant_739_edges_10(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while (puts("block 3"), iVar1 = conditions._112_4_, conditions._108_4_ != 0) {
        while (iVar1 != 0) {
          puts("block 4");
          iVar1 = conditions._120_4_;
          if (conditions._116_4_ == 0) goto LAB_0805ab5c;
        }
      }
    }
  }
LAB_0805ab5c:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805ab6f(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while (puts("block 3"), iVar1 = conditions._112_4_, conditions._108_4_ != 0) {
        while (iVar1 != 0) {
          puts("block 4");
          iVar1 = conditions._120_4_;
          if (conditions._116_4_ == 0) goto LAB_0805ab5c;
        }
      }
    }
  }
LAB_0805ab5c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_740_edges_10(void)

{
  int iVar1;
  
FUN_0805abe7:
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    while (puts("block 3"), iVar1 = conditions._112_4_, conditions._108_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._120_4_;
        if (conditions._116_4_ == 0) goto FUN_0805abe7;
      }
    }
  } while( true );
}



undefined4 FUN_0805abe7(void)

{
  int iVar1;
  
code_r0x0805abe7:
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    while (puts("block 3"), iVar1 = conditions._112_4_, conditions._108_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._120_4_;
        if (conditions._116_4_ == 0) goto code_r0x0805abe7;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_741_edges_10(void)

{
  undefined4 uVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805ac4c;
        if (conditions._112_4_ == 0) break;
        if (conditions._116_4_ != 0) {
          puts("block 4");
          if (conditions._120_4_ != 0) {
            uVar1 = FUN_0805ac5f();
            return uVar1;
          }
          goto LAB_0805ac4c;
        }
      }
    }
  }
LAB_0805ac4c:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805ac5f(void)

{
  undefined4 uVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805ac4c;
        if (conditions._112_4_ == 0) break;
        if (conditions._116_4_ != 0) {
          puts("block 4");
          if (conditions._120_4_ != 0) {
            uVar1 = FUN_0805ac5f();
            return uVar1;
          }
          goto LAB_0805ac4c;
        }
      }
    }
  }
LAB_0805ac4c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_742_edges_10(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805acc4;
        if (conditions._112_4_ == 0) break;
        if ((conditions._116_4_ != 0) && (puts("block 4"), conditions._120_4_ == 0))
        goto LAB_0805acc4;
      }
    }
  }
LAB_0805acc4:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805acd7(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805acc4;
        if (conditions._112_4_ == 0) break;
        if ((conditions._116_4_ != 0) && (puts("block 4"), conditions._120_4_ == 0))
        goto LAB_0805acc4;
      }
    }
  }
LAB_0805acc4:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_743_edges_10(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805ad3c;
        if (conditions._112_4_ == 0) break;
        if (conditions._116_4_ != 0) goto LAB_0805ad9a;
      }
    }
  }
LAB_0805ad3c:
  puts("exit block");
  return 0;
LAB_0805ad9a:
  do {
    puts("block 4");
  } while (conditions._120_4_ != 0);
  goto LAB_0805ad3c;
}



undefined4 FUN_0805ad4f(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805ad3c;
        if (conditions._112_4_ == 0) break;
        if (conditions._116_4_ != 0) goto LAB_0805ad9a;
      }
    }
  }
LAB_0805ad3c:
  puts("exit block");
  return 0;
LAB_0805ad9a:
  do {
    puts("block 4");
  } while (conditions._120_4_ != 0);
  goto LAB_0805ad3c;
}



undefined4 test_3_blocks_variant_744_edges_10(void)

{
  int iVar1;
  
FUN_0805adc7:
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
LAB_0805adb4:
      puts("exit block");
      return 0;
    }
    while (iVar1 != 0) {
      do {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805adb4;
        if (conditions._112_4_ == 0) goto FUN_0805adc7;
      } while (conditions._116_4_ == 0);
      puts("block 4");
      iVar1 = conditions._120_4_;
    }
  } while( true );
}



undefined4 FUN_0805adc7(void)

{
  int iVar1;
  
code_r0x0805adc7:
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
LAB_0805adb4:
      puts("exit block");
      return 0;
    }
    while (iVar1 != 0) {
      do {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805adb4;
        if (conditions._112_4_ == 0) goto code_r0x0805adc7;
      } while (conditions._116_4_ == 0);
      puts("block 4");
      iVar1 = conditions._120_4_;
    }
  } while( true );
}



undefined4 test_3_blocks_variant_745_edges_10(void)

{
FUN_0805ae3f:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805ae2c:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ != 0) {
      do {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805ae2c;
        if (conditions._112_4_ == 0) goto FUN_0805ae3f;
      } while (conditions._116_4_ == 0);
      do {
        puts("block 4");
      } while (conditions._120_4_ != 0);
    }
  } while( true );
}



undefined4 FUN_0805ae3f(void)

{
code_r0x0805ae3f:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805ae2c:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ != 0) {
      do {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805ae2c;
        if (conditions._112_4_ == 0) goto code_r0x0805ae3f;
      } while (conditions._116_4_ == 0);
      do {
        puts("block 4");
      } while (conditions._120_4_ != 0);
    }
  } while( true );
}



undefined4 test_3_blocks_variant_746_edges_10(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805aea4;
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) break;
        while (iVar1 != 0) {
          puts("block 4");
          iVar1 = conditions._120_4_;
        }
      }
    }
  }
LAB_0805aea4:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805aeb7(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805aea4;
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) break;
        while (iVar1 != 0) {
          puts("block 4");
          iVar1 = conditions._120_4_;
        }
      }
    }
  }
LAB_0805aea4:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_747_edges_10(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
LAB_0805af1c:
      puts("exit block");
      return 0;
    }
    do {
      if (iVar1 == 0) {
        puts("block 3");
        if (conditions._108_4_ != 0) {
          uVar2 = FUN_0805af2f();
          return uVar2;
        }
        goto LAB_0805af1c;
      }
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805af1c;
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_0805af2f(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
LAB_0805af1c:
      puts("exit block");
      return 0;
    }
    do {
      if (iVar1 == 0) {
        puts("block 3");
        if (conditions._108_4_ != 0) {
          uVar2 = FUN_0805af2f();
          return uVar2;
        }
        goto LAB_0805af1c;
      }
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805af1c;
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_748_edges_10(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      if (iVar1 == 0) goto LAB_0805afc8;
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805af94;
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  }
LAB_0805af94:
  puts("exit block");
  return 0;
LAB_0805afc8:
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
  goto LAB_0805af94;
}



undefined4 FUN_0805afa7(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      if (iVar1 == 0) goto LAB_0805afc8;
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805af94;
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  }
LAB_0805af94:
  puts("exit block");
  return 0;
LAB_0805afc8:
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
  goto LAB_0805af94;
}



undefined4 test_3_blocks_variant_749_edges_10(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      if (((iVar1 == 0) && (puts("block 3"), conditions._108_4_ == 0)) ||
         (puts("block 4"), conditions._112_4_ == 0)) goto LAB_0805b00c;
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  }
LAB_0805b00c:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805b01f(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      if (((iVar1 == 0) && (puts("block 3"), conditions._108_4_ == 0)) ||
         (puts("block 4"), conditions._112_4_ == 0)) goto LAB_0805b00c;
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  }
LAB_0805b00c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_750_edges_10(void)

{
  int iVar1;
  
FUN_0805b097:
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
LAB_0805b084:
      puts("exit block");
      return 0;
    }
    do {
      if (iVar1 == 0) goto LAB_0805b0b8;
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805b084;
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
LAB_0805b0b8:
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
  goto FUN_0805b097;
}



undefined4 FUN_0805b097(void)

{
  int iVar1;
  
code_r0x0805b097:
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
LAB_0805b084:
      puts("exit block");
      return 0;
    }
    do {
      if (iVar1 == 0) goto LAB_0805b0b8;
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805b084;
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
LAB_0805b0b8:
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
  goto code_r0x0805b097;
}



undefined4 test_3_blocks_variant_751_edges_10(void)

{
FUN_0805b10f:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805b0fc:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) goto LAB_0805b130;
    do {
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_0805b0fc;
        if (conditions._116_4_ == 0) goto FUN_0805b10f;
      } while (conditions._120_4_ != 0);
LAB_0805b130:
      puts("block 3");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0805b10f(void)

{
code_r0x0805b10f:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805b0fc:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) goto LAB_0805b130;
    do {
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) goto LAB_0805b0fc;
        if (conditions._116_4_ == 0) goto code_r0x0805b10f;
      } while (conditions._120_4_ != 0);
LAB_0805b130:
      puts("block 3");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_752_edges_10(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._108_4_;
      }
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805b174;
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  }
LAB_0805b174:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805b187(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._108_4_;
      }
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805b174;
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  }
LAB_0805b174:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_753_edges_10(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_0805b220;
    puts("block 4");
    iVar1 = conditions._120_4_;
    iVar2 = conditions._116_4_;
    while( true ) {
      if (iVar2 == 0) goto LAB_0805b1ec;
      if (iVar1 == 0) break;
LAB_0805b220:
      puts("block 3");
      iVar1 = conditions._112_4_;
      iVar2 = conditions._108_4_;
    }
  }
LAB_0805b1ec:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805b1ff(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_0805b220;
    puts("block 4");
    iVar1 = conditions._120_4_;
    iVar2 = conditions._116_4_;
    while( true ) {
      if (iVar2 == 0) goto LAB_0805b1ec;
      if (iVar1 == 0) break;
LAB_0805b220:
      puts("block 3");
      iVar1 = conditions._112_4_;
      iVar2 = conditions._108_4_;
    }
  }
LAB_0805b1ec:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_754_edges_10(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      do {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805b264;
      } while (conditions._112_4_ != 0);
    }
    else {
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805b264;
      } while (conditions._120_4_ != 0);
    }
  }
LAB_0805b264:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805b277(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) {
      do {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805b264;
      } while (conditions._112_4_ != 0);
    }
    else {
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805b264;
      } while (conditions._120_4_ != 0);
    }
  }
LAB_0805b264:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_755_edges_10(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._120_4_;
      if (conditions._116_4_ == 0) goto LAB_0805b2dc;
    }
    do {
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_0805b2dc;
    } while (conditions._112_4_ != 0);
  }
LAB_0805b2dc:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805b2ef(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._120_4_;
      if (conditions._116_4_ == 0) goto LAB_0805b2dc;
    }
    do {
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_0805b2dc;
    } while (conditions._112_4_ != 0);
  }
LAB_0805b2dc:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_756_edges_10(void)

{
  int iVar1;
  
FUN_0805b367:
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      if (iVar1 == 0) goto LAB_0805b388;
      puts("block 4");
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  }
LAB_0805b354:
  puts("exit block");
  return 0;
  while (conditions._112_4_ != 0) {
LAB_0805b388:
    puts("block 3");
    if (conditions._108_4_ == 0) goto LAB_0805b354;
  }
  goto FUN_0805b367;
}



undefined4 FUN_0805b367(void)

{
  int iVar1;
  
code_r0x0805b367:
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      if (iVar1 == 0) goto LAB_0805b388;
      puts("block 4");
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  }
LAB_0805b354:
  puts("exit block");
  return 0;
  while (conditions._112_4_ != 0) {
LAB_0805b388:
    puts("block 3");
    if (conditions._108_4_ == 0) goto LAB_0805b354;
  }
  goto code_r0x0805b367;
}



undefined4 test_3_blocks_variant_757_edges_10(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805b3cc:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) goto LAB_0805b400;
    do {
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805b3cc;
      if (conditions._120_4_ == 0) break;
LAB_0805b400:
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_0805b3cc;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0805b3df(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805b3cc:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) goto LAB_0805b400;
    do {
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805b3cc;
      if (conditions._120_4_ == 0) break;
LAB_0805b400:
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_0805b3cc;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_758_edges_10(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_0805b478;
    do {
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805b444;
      } while (conditions._120_4_ != 0);
LAB_0805b478:
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_0805b444;
    } while (conditions._112_4_ != 0);
  }
LAB_0805b444:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805b457(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ == 0) goto LAB_0805b478;
    do {
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805b444;
      } while (conditions._120_4_ != 0);
LAB_0805b478:
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_0805b444;
    } while (conditions._112_4_ != 0);
  }
LAB_0805b444:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_759_edges_10(void)

{
FUN_0805b4cf:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805b4bc:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) goto LAB_0805b4f0;
    do {
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto FUN_0805b4cf;
      } while (conditions._120_4_ != 0);
LAB_0805b4f0:
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_0805b4bc;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0805b4cf(void)

{
code_r0x0805b4cf:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805b4bc:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) goto LAB_0805b4f0;
    do {
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto code_r0x0805b4cf;
      } while (conditions._120_4_ != 0);
LAB_0805b4f0:
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_0805b4bc;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_760_edges_10(void)

{
  int iVar1;
  int iVar2;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  iVar2 = conditions._100_4_;
  while (iVar2 != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._120_4_;
      if (conditions._116_4_ == 0) goto LAB_0805b534;
    }
    puts("block 3");
    iVar1 = conditions._112_4_;
    iVar2 = conditions._108_4_;
  }
LAB_0805b534:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805b547(void)

{
  int iVar1;
  int iVar2;
  
  puts("block 2");
  iVar1 = conditions._104_4_;
  iVar2 = conditions._100_4_;
  while (iVar2 != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._120_4_;
      if (conditions._116_4_ == 0) goto LAB_0805b534;
    }
    puts("block 3");
    iVar1 = conditions._112_4_;
    iVar2 = conditions._108_4_;
  }
LAB_0805b534:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_761_edges_10(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._112_4_;
        if (conditions._108_4_ == 0) goto LAB_0805b5ac;
      }
      puts("block 4");
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  }
LAB_0805b5ac:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805b5bf(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._112_4_;
        if (conditions._108_4_ == 0) goto LAB_0805b5ac;
      }
      puts("block 4");
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  }
LAB_0805b5ac:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_762_edges_10(void)

{
  int iVar1;
  
FUN_0805b637:
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    do {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._120_4_;
        if (conditions._116_4_ == 0) goto FUN_0805b637;
      }
      puts("block 3");
      iVar1 = conditions._112_4_;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0805b637(void)

{
  int iVar1;
  
code_r0x0805b637:
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    do {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._120_4_;
        if (conditions._116_4_ == 0) goto code_r0x0805b637;
      }
      puts("block 3");
      iVar1 = conditions._112_4_;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_763_edges_10(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (iVar1 == 0) {
        puts("block 3");
        if (conditions._108_4_ != 0) {
          uVar2 = FUN_0805b6af();
          return uVar2;
        }
LAB_0805b69c:
        puts("exit block");
        return 0;
      }
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805b69c;
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_0805b6af(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (iVar1 == 0) {
        puts("block 3");
        if (conditions._108_4_ != 0) {
          uVar2 = FUN_0805b6af();
          return uVar2;
        }
LAB_0805b69c:
        puts("exit block");
        return 0;
      }
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805b69c;
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_764_edges_10(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (iVar1 == 0) {
        do {
          puts("block 3");
        } while (conditions._108_4_ != 0);
LAB_0805b714:
        puts("exit block");
        return 0;
      }
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805b714;
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_0805b727(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (iVar1 == 0) {
        do {
          puts("block 3");
        } while (conditions._108_4_ != 0);
LAB_0805b714:
        puts("exit block");
        return 0;
      }
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805b714;
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_765_edges_10(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (((iVar1 == 0) && (puts("block 3"), conditions._108_4_ == 0)) ||
         (puts("block 4"), conditions._112_4_ == 0)) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_0805b79f(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (((iVar1 == 0) && (puts("block 3"), conditions._108_4_ == 0)) ||
         (puts("block 4"), conditions._112_4_ == 0)) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_766_edges_10(void)

{
  int iVar1;
  
FUN_0805b817:
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (iVar1 == 0) goto LAB_0805b838;
      puts("block 4");
      if (conditions._112_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
LAB_0805b838:
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
  goto FUN_0805b817;
}



undefined4 FUN_0805b817(void)

{
  int iVar1;
  
code_r0x0805b817:
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (iVar1 == 0) goto LAB_0805b838;
      puts("block 4");
      if (conditions._112_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
LAB_0805b838:
  do {
    puts("block 3");
  } while (conditions._108_4_ != 0);
  goto code_r0x0805b817;
}



undefined4 test_3_blocks_variant_767_edges_10(void)

{
FUN_0805b88f:
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) goto LAB_0805b8b0;
    do {
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) {
          puts("exit block");
          return 0;
        }
        if (conditions._116_4_ == 0) goto FUN_0805b88f;
      } while (conditions._120_4_ != 0);
LAB_0805b8b0:
      puts("block 3");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0805b88f(void)

{
code_r0x0805b88f:
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) goto LAB_0805b8b0;
    do {
      do {
        puts("block 4");
        if (conditions._112_4_ == 0) {
          puts("exit block");
          return 0;
        }
        if (conditions._116_4_ == 0) goto code_r0x0805b88f;
      } while (conditions._120_4_ != 0);
LAB_0805b8b0:
      puts("block 3");
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_768_edges_10(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._108_4_;
      }
      puts("block 4");
      if (conditions._112_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_0805b907(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._108_4_;
      }
      puts("block 4");
      if (conditions._112_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_769_edges_10(void)

{
  int iVar1;
  
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ != 0) break;
    do {
      puts("block 3");
      iVar1 = conditions._112_4_;
      if (conditions._108_4_ == 0) goto LAB_0805b96c;
joined_r0x0805b9de:
    } while (iVar1 != 0);
  }
  puts("block 4");
  iVar1 = conditions._120_4_;
  if (conditions._116_4_ != 0) goto joined_r0x0805b9de;
LAB_0805b96c:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805b97f(void)

{
  int iVar1;
  
  while( true ) {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ != 0) break;
    do {
      puts("block 3");
      iVar1 = conditions._112_4_;
      if (conditions._108_4_ == 0) goto LAB_0805b96c;
joined_r0x0805b9de:
    } while (iVar1 != 0);
  }
  puts("block 4");
  iVar1 = conditions._120_4_;
  if (conditions._116_4_ != 0) goto joined_r0x0805b9de;
LAB_0805b96c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_770_edges_10(void)

{
  do {
    while( true ) {
      do {
        puts("block 2");
      } while (conditions._100_4_ == 0);
      if (conditions._104_4_ == 0) break;
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805b9e4;
      } while (conditions._120_4_ != 0);
    }
    do {
      puts("block 3");
      if (conditions._108_4_ == 0) {
LAB_0805b9e4:
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0805b9f7(void)

{
  do {
    while( true ) {
      do {
        puts("block 2");
      } while (conditions._100_4_ == 0);
      if (conditions._104_4_ == 0) break;
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805b9e4;
      } while (conditions._120_4_ != 0);
    }
    do {
      puts("block 3");
      if (conditions._108_4_ == 0) {
LAB_0805b9e4:
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_771_edges_10(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._120_4_;
      if (conditions._116_4_ == 0) goto LAB_0805ba5c;
    }
    do {
      puts("block 3");
      if (conditions._108_4_ == 0) {
LAB_0805ba5c:
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0805ba6f(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._120_4_;
      if (conditions._116_4_ == 0) goto LAB_0805ba5c;
    }
    do {
      puts("block 3");
      if (conditions._108_4_ == 0) {
LAB_0805ba5c:
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_772_edges_10(void)

{
  int iVar1;
  
FUN_0805bae7:
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (iVar1 == 0) goto LAB_0805bb08;
      puts("block 4");
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
LAB_0805bb08:
  do {
    puts("block 3");
    if (conditions._108_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._112_4_ != 0);
  goto FUN_0805bae7;
}



undefined4 FUN_0805bae7(void)

{
  int iVar1;
  
code_r0x0805bae7:
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (iVar1 == 0) goto LAB_0805bb08;
      puts("block 4");
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
LAB_0805bb08:
  do {
    puts("block 3");
    if (conditions._108_4_ == 0) {
      puts("exit block");
      return 0;
    }
  } while (conditions._112_4_ != 0);
  goto code_r0x0805bae7;
}



undefined4 test_3_blocks_variant_773_edges_10(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) goto LAB_0805bb80;
    do {
      puts("block 4");
      if (conditions._116_4_ == 0) {
LAB_0805bb4c:
        puts("exit block");
        return 0;
      }
      if (conditions._120_4_ == 0) break;
LAB_0805bb80:
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_0805bb4c;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0805bb5f(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) goto LAB_0805bb80;
    do {
      puts("block 4");
      if (conditions._116_4_ == 0) {
LAB_0805bb4c:
        puts("exit block");
        return 0;
      }
      if (conditions._120_4_ == 0) break;
LAB_0805bb80:
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_0805bb4c;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_774_edges_10(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) goto LAB_0805bbf8;
    do {
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) {
LAB_0805bbc4:
          puts("exit block");
          return 0;
        }
      } while (conditions._120_4_ != 0);
LAB_0805bbf8:
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_0805bbc4;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0805bbd7(void)

{
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) goto LAB_0805bbf8;
    do {
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) {
LAB_0805bbc4:
          puts("exit block");
          return 0;
        }
      } while (conditions._120_4_ != 0);
LAB_0805bbf8:
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_0805bbc4;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_775_edges_10(void)

{
FUN_0805bc4f:
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) goto LAB_0805bc70;
    do {
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto FUN_0805bc4f;
      } while (conditions._120_4_ != 0);
LAB_0805bc70:
      puts("block 3");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0805bc4f(void)

{
code_r0x0805bc4f:
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) goto LAB_0805bc70;
    do {
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto code_r0x0805bc4f;
      } while (conditions._120_4_ != 0);
LAB_0805bc70:
      puts("block 3");
      if (conditions._108_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_776_edges_10(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
  } while (conditions._100_4_ == 0);
  do {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._120_4_;
      if (conditions._116_4_ == 0) goto LAB_0805bcb4;
    }
    puts("block 3");
    iVar1 = conditions._112_4_;
  } while (conditions._108_4_ != 0);
LAB_0805bcb4:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805bcc7(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
  } while (conditions._100_4_ == 0);
  do {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._120_4_;
      if (conditions._116_4_ == 0) goto LAB_0805bcb4;
    }
    puts("block 3");
    iVar1 = conditions._112_4_;
  } while (conditions._108_4_ != 0);
LAB_0805bcb4:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_777_edges_10(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._112_4_;
        if (conditions._108_4_ == 0) {
          puts("exit block");
          return 0;
        }
      }
      puts("block 4");
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_0805bd3f(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._112_4_;
        if (conditions._108_4_ == 0) {
          puts("exit block");
          return 0;
        }
      }
      puts("block 4");
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_778_edges_10(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805bda4:
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._108_4_;
    } while (conditions._104_4_ == 0);
    do {
      if (iVar1 == 0) {
        puts("block 3");
        goto LAB_0805bda4;
      }
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805bda4;
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_0805bdb7(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805bda4:
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._108_4_;
    } while (conditions._104_4_ == 0);
    do {
      if (iVar1 == 0) {
        puts("block 3");
        goto LAB_0805bda4;
      }
      puts("block 4");
      if (conditions._112_4_ == 0) goto LAB_0805bda4;
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_779_edges_10(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      if (iVar1 == 0) {
        puts("block 3");
        uVar3 = FUN_0805be2f();
        return uVar3;
      }
      puts("block 4");
      iVar1 = conditions._120_4_;
      iVar2 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_0805be1c;
    }
  }
LAB_0805be1c:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805be2f(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      if (iVar1 == 0) {
        puts("block 3");
        uVar3 = FUN_0805be2f();
        return uVar3;
      }
      puts("block 4");
      iVar1 = conditions._120_4_;
      iVar2 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_0805be1c;
    }
  }
LAB_0805be1c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_780_edges_10(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      if (iVar1 == 0) {
        do {
          puts("block 3");
        } while( true );
      }
      puts("block 4");
      iVar1 = conditions._120_4_;
      iVar2 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_0805be94;
    }
  }
LAB_0805be94:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805bea7(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      if (iVar1 == 0) {
        do {
          puts("block 3");
        } while( true );
      }
      puts("block 4");
      iVar1 = conditions._120_4_;
      iVar2 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_0805be94;
    }
  }
LAB_0805be94:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_781_edges_10(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      if (iVar1 == 0) {
        puts("block 3");
      }
      puts("block 4");
      iVar1 = conditions._120_4_;
      iVar2 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_0805bf0c;
    }
  }
LAB_0805bf0c:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805bf1f(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      if (iVar1 == 0) {
        puts("block 3");
      }
      puts("block 4");
      iVar1 = conditions._120_4_;
      iVar2 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_0805bf0c;
    }
  }
LAB_0805bf0c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_782_edges_10(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) goto LAB_0805bf84;
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) break;
    puts("block 4");
    if (conditions._116_4_ == 0) goto LAB_0805bf84;
  } while (conditions._120_4_ == 0);
  puts("block 3");
  if (conditions._112_4_ != 0) {
    uVar1 = FUN_0805bf97();
    return uVar1;
  }
LAB_0805bf84:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805bf97(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) goto LAB_0805bf84;
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) break;
    puts("block 4");
    if (conditions._116_4_ == 0) goto LAB_0805bf84;
  } while (conditions._120_4_ == 0);
  puts("block 3");
  if (conditions._112_4_ != 0) {
    uVar1 = FUN_0805bf97();
    return uVar1;
  }
LAB_0805bf84:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_783_edges_10(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805bffc:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) {
      puts("block 3");
      if (conditions._112_4_ != 0) {
        uVar1 = FUN_0805c00f();
        return uVar1;
      }
      goto LAB_0805bffc;
    }
    do {
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805bffc;
    } while (conditions._120_4_ != 0);
  } while( true );
}



undefined4 FUN_0805c00f(void)

{
  undefined4 uVar1;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805bffc:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) {
      puts("block 3");
      if (conditions._112_4_ != 0) {
        uVar1 = FUN_0805c00f();
        return uVar1;
      }
      goto LAB_0805bffc;
    }
    do {
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805bffc;
    } while (conditions._120_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_784_edges_10(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805c074;
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  do {
    if (iVar1 == 0) {
      puts("block 3");
      if (conditions._112_4_ != 0) {
        uVar2 = FUN_0805c087();
        return uVar2;
      }
      break;
    }
    puts("block 4");
    iVar1 = conditions._120_4_;
  } while (conditions._116_4_ != 0);
LAB_0805c074:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805c087(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805c074;
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  do {
    if (iVar1 == 0) {
      puts("block 3");
      if (conditions._112_4_ != 0) {
        uVar2 = FUN_0805c087();
        return uVar2;
      }
      break;
    }
    puts("block 4");
    iVar1 = conditions._120_4_;
  } while (conditions._116_4_ != 0);
LAB_0805c074:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_785_edges_10(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805c0ec:
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._108_4_;
    } while (conditions._104_4_ == 0);
    do {
      if (iVar1 == 0) {
        puts("block 3");
        if (conditions._112_4_ != 0) {
          uVar2 = FUN_0805c0ff();
          return uVar2;
        }
        goto LAB_0805c0ec;
      }
      puts("block 4");
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_0805c0ff(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805c0ec:
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._108_4_;
    } while (conditions._104_4_ == 0);
    do {
      if (iVar1 == 0) {
        puts("block 3");
        if (conditions._112_4_ != 0) {
          uVar2 = FUN_0805c0ff();
          return uVar2;
        }
        goto LAB_0805c0ec;
      }
      puts("block 4");
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_786_edges_10(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) goto LAB_0805c164;
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) break;
    puts("block 4");
    if (conditions._116_4_ == 0) goto LAB_0805c164;
  } while (conditions._120_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._112_4_ != 0);
LAB_0805c164:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805c177(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) goto LAB_0805c164;
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) break;
    puts("block 4");
    if (conditions._116_4_ == 0) goto LAB_0805c164;
  } while (conditions._120_4_ == 0);
  do {
    puts("block 3");
  } while (conditions._112_4_ != 0);
LAB_0805c164:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_787_edges_10(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) goto LAB_0805c219;
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805c1dc;
      } while (conditions._120_4_ != 0);
    }
  }
LAB_0805c1dc:
  puts("exit block");
  return 0;
LAB_0805c219:
  do {
    puts("block 3");
  } while (conditions._112_4_ != 0);
  goto LAB_0805c1dc;
}



undefined4 FUN_0805c1ef(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) goto LAB_0805c219;
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805c1dc;
      } while (conditions._120_4_ != 0);
    }
  }
LAB_0805c1dc:
  puts("exit block");
  return 0;
LAB_0805c219:
  do {
    puts("block 3");
  } while (conditions._112_4_ != 0);
  goto LAB_0805c1dc;
}



undefined4 test_3_blocks_variant_788_edges_10(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805c254;
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  do {
    if (iVar1 == 0) goto LAB_0805c291;
    puts("block 4");
    iVar1 = conditions._120_4_;
  } while (conditions._116_4_ != 0);
LAB_0805c254:
  puts("exit block");
  return 0;
LAB_0805c291:
  do {
    puts("block 3");
  } while (conditions._112_4_ != 0);
  goto LAB_0805c254;
}



undefined4 FUN_0805c267(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805c254;
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  do {
    if (iVar1 == 0) goto LAB_0805c291;
    puts("block 4");
    iVar1 = conditions._120_4_;
  } while (conditions._116_4_ != 0);
LAB_0805c254:
  puts("exit block");
  return 0;
LAB_0805c291:
  do {
    puts("block 3");
  } while (conditions._112_4_ != 0);
  goto LAB_0805c254;
}



undefined4 test_3_blocks_variant_789_edges_10(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      if (iVar1 == 0) goto LAB_0805c309;
      puts("block 4");
      iVar1 = conditions._120_4_;
      iVar2 = conditions._116_4_;
    }
  }
LAB_0805c2cc:
  puts("exit block");
  return 0;
LAB_0805c309:
  do {
    puts("block 3");
  } while (conditions._112_4_ != 0);
  goto LAB_0805c2cc;
}



undefined4 FUN_0805c2df(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      if (iVar1 == 0) goto LAB_0805c309;
      puts("block 4");
      iVar1 = conditions._120_4_;
      iVar2 = conditions._116_4_;
    }
  }
LAB_0805c2cc:
  puts("exit block");
  return 0;
LAB_0805c309:
  do {
    puts("block 3");
  } while (conditions._112_4_ != 0);
  goto LAB_0805c2cc;
}



undefined4 test_3_blocks_variant_790_edges_10(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) goto LAB_0805c381;
      while( true ) {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805c344;
        if (conditions._120_4_ == 0) break;
LAB_0805c381:
        puts("block 3");
        if (conditions._112_4_ == 0) goto LAB_0805c344;
      }
    }
  }
LAB_0805c344:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805c357(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) goto LAB_0805c381;
      while( true ) {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805c344;
        if (conditions._120_4_ == 0) break;
LAB_0805c381:
        puts("block 3");
        if (conditions._112_4_ == 0) goto LAB_0805c344;
      }
    }
  }
LAB_0805c344:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_791_edges_10(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if ((conditions._108_4_ == 0) && (puts("block 3"), conditions._112_4_ == 0)) break;
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805c3bc;
      } while (conditions._120_4_ != 0);
    }
  }
LAB_0805c3bc:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805c3cf(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if ((conditions._108_4_ == 0) && (puts("block 3"), conditions._112_4_ == 0)) break;
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805c3bc;
      } while (conditions._120_4_ != 0);
    }
  }
LAB_0805c3bc:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_792_edges_10(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805c434;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) goto LAB_0805c471;
  do {
    do {
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805c434;
    } while (conditions._120_4_ != 0);
LAB_0805c471:
    puts("block 3");
  } while (conditions._112_4_ != 0);
LAB_0805c434:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805c447(void)

{
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805c434;
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ == 0) goto LAB_0805c471;
  do {
    do {
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805c434;
    } while (conditions._120_4_ != 0);
LAB_0805c471:
    puts("block 3");
  } while (conditions._112_4_ != 0);
LAB_0805c434:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_793_edges_10(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      if ((iVar1 == 0) && (puts("block 3"), conditions._112_4_ == 0)) goto LAB_0805c4ac;
      puts("block 4");
      iVar1 = conditions._120_4_;
      iVar2 = conditions._116_4_;
    }
  }
LAB_0805c4ac:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805c4bf(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      if ((iVar1 == 0) && (puts("block 3"), conditions._112_4_ == 0)) goto LAB_0805c4ac;
      puts("block 4");
      iVar1 = conditions._120_4_;
      iVar2 = conditions._116_4_;
    }
  }
LAB_0805c4ac:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_794_edges_10(void)

{
FUN_0805c537:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805c524:
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ != 0) {
    puts("block 4");
    if (conditions._116_4_ == 0) goto LAB_0805c524;
    if (conditions._120_4_ == 0) goto FUN_0805c537;
  }
  do {
    puts("block 3");
  } while (conditions._112_4_ != 0);
  goto FUN_0805c537;
}



undefined4 FUN_0805c537(void)

{
code_r0x0805c537:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805c524:
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ != 0) {
    puts("block 4");
    if (conditions._116_4_ == 0) goto LAB_0805c524;
    if (conditions._120_4_ == 0) goto code_r0x0805c537;
  }
  do {
    puts("block 3");
  } while (conditions._112_4_ != 0);
  goto code_r0x0805c537;
}



undefined4 test_3_blocks_variant_795_edges_10(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) {
        do {
          puts("block 3");
        } while (conditions._112_4_ != 0);
      }
      else {
        do {
          puts("block 4");
          if (conditions._116_4_ == 0) goto LAB_0805c59c;
        } while (conditions._120_4_ != 0);
      }
    }
  }
LAB_0805c59c:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805c5af(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) {
        do {
          puts("block 3");
        } while (conditions._112_4_ != 0);
      }
      else {
        do {
          puts("block 4");
          if (conditions._116_4_ == 0) goto LAB_0805c59c;
        } while (conditions._120_4_ != 0);
      }
    }
  }
LAB_0805c59c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_796_edges_10(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    iVar1 = conditions._108_4_;
    if (conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._120_4_;
        if (conditions._116_4_ == 0) goto LAB_0805c614;
      }
      do {
        puts("block 3");
      } while (conditions._112_4_ != 0);
    }
  }
LAB_0805c614:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805c627(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    iVar1 = conditions._108_4_;
    if (conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._120_4_;
        if (conditions._116_4_ == 0) goto LAB_0805c614;
      }
      do {
        puts("block 3");
      } while (conditions._112_4_ != 0);
    }
  }
LAB_0805c614:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_797_edges_10(void)

{
  int iVar1;
  
FUN_0805c69f:
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._108_4_;
    } while (conditions._104_4_ == 0);
    do {
      if (iVar1 == 0) goto LAB_0805c6c9;
      puts("block 4");
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
LAB_0805c6c9:
  do {
    puts("block 3");
  } while (conditions._112_4_ != 0);
  goto FUN_0805c69f;
}



undefined4 FUN_0805c69f(void)

{
  int iVar1;
  
code_r0x0805c69f:
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._108_4_;
    } while (conditions._104_4_ == 0);
    do {
      if (iVar1 == 0) goto LAB_0805c6c9;
      puts("block 4");
      iVar1 = conditions._120_4_;
    } while (conditions._116_4_ != 0);
  } while( true );
LAB_0805c6c9:
  do {
    puts("block 3");
  } while (conditions._112_4_ != 0);
  goto code_r0x0805c69f;
}



undefined4 test_3_blocks_variant_798_edges_10(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805c704:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) goto LAB_0805c741;
    do {
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805c704;
      if (conditions._120_4_ == 0) break;
LAB_0805c741:
      puts("block 3");
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0805c717(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805c704:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) goto LAB_0805c741;
    do {
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805c704;
      if (conditions._120_4_ == 0) break;
LAB_0805c741:
      puts("block 3");
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_799_edges_10(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) goto LAB_0805c7d1;
      puts("block 3");
      iVar1 = conditions._112_4_;
      while (iVar1 != 0) {
LAB_0805c7d1:
        puts("block 4");
        iVar1 = conditions._120_4_;
        if (conditions._116_4_ == 0) goto LAB_0805c77c;
      }
    }
  }
LAB_0805c77c:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805c78f(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ != 0) goto LAB_0805c7d1;
      puts("block 3");
      iVar1 = conditions._112_4_;
      while (iVar1 != 0) {
LAB_0805c7d1:
        puts("block 4");
        iVar1 = conditions._120_4_;
        if (conditions._116_4_ == 0) goto LAB_0805c77c;
      }
    }
  }
LAB_0805c77c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_800_edges_10(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) goto LAB_0805c831;
      do {
        do {
          puts("block 4");
          if (conditions._116_4_ == 0) goto LAB_0805c7f4;
        } while (conditions._120_4_ != 0);
LAB_0805c831:
        puts("block 3");
      } while (conditions._112_4_ != 0);
    }
  }
LAB_0805c7f4:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805c807(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) goto LAB_0805c831;
      do {
        do {
          puts("block 4");
          if (conditions._116_4_ == 0) goto LAB_0805c7f4;
        } while (conditions._120_4_ != 0);
LAB_0805c831:
        puts("block 3");
      } while (conditions._112_4_ != 0);
    }
  }
LAB_0805c7f4:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_801_edges_10(void)

{
FUN_0805c87f:
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) goto LAB_0805c8a9;
    do {
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto FUN_0805c87f;
      } while (conditions._120_4_ != 0);
LAB_0805c8a9:
      puts("block 3");
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0805c87f(void)

{
code_r0x0805c87f:
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) goto LAB_0805c8a9;
    do {
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto code_r0x0805c87f;
      } while (conditions._120_4_ != 0);
LAB_0805c8a9:
      puts("block 3");
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_802_edges_10(void)

{
  int iVar1;
  
FUN_0805c8f7:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805c8e4:
      puts("exit block");
      return 0;
    }
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  do {
    if (iVar1 != 0) {
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805c8e4;
      if (conditions._120_4_ == 0) goto FUN_0805c8f7;
    }
    puts("block 3");
    iVar1 = conditions._112_4_;
  } while( true );
}



undefined4 FUN_0805c8f7(void)

{
  int iVar1;
  
code_r0x0805c8f7:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805c8e4:
      puts("exit block");
      return 0;
    }
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  do {
    if (iVar1 != 0) {
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805c8e4;
      if (conditions._120_4_ == 0) goto code_r0x0805c8f7;
    }
    puts("block 3");
    iVar1 = conditions._112_4_;
  } while( true );
}



undefined4 test_3_blocks_variant_803_edges_10(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    iVar1 = conditions._108_4_;
    if (conditions._104_4_ != 0) {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._112_4_;
      }
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805c95c;
      } while (conditions._120_4_ != 0);
    }
  }
LAB_0805c95c:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805c96f(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    iVar1 = conditions._108_4_;
    if (conditions._104_4_ != 0) {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._112_4_;
      }
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805c95c;
      } while (conditions._120_4_ != 0);
    }
  }
LAB_0805c95c:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_804_edges_10(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805c9d4;
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  do {
    while (iVar1 == 0) {
      puts("block 3");
      iVar1 = conditions._112_4_;
    }
    puts("block 4");
    iVar1 = conditions._120_4_;
  } while (conditions._116_4_ != 0);
LAB_0805c9d4:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805c9e7(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805c9d4;
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  do {
    while (iVar1 == 0) {
      puts("block 3");
      iVar1 = conditions._112_4_;
    }
    puts("block 4");
    iVar1 = conditions._120_4_;
  } while (conditions._116_4_ != 0);
LAB_0805c9d4:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_805_edges_10(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._112_4_;
      }
      puts("block 4");
      iVar1 = conditions._120_4_;
      iVar2 = conditions._116_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 FUN_0805ca5f(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._112_4_;
      }
      puts("block 4");
      iVar1 = conditions._120_4_;
      iVar2 = conditions._116_4_;
    }
  }
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_806_edges_11(void)

{
  int iVar1;
  int iVar2;
  
FUN_0805cad7:
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), iVar1 = conditions._112_4_, iVar2 = conditions._108_4_,
          conditions._104_4_ != 0) {
      while( true ) {
        if (iVar2 == 0) goto FUN_0805cad7;
        if (iVar1 == 0) break;
        puts("block 4");
        iVar1 = conditions._124_4_;
        iVar2 = conditions._120_4_;
        if (conditions._116_4_ == 0) goto LAB_0805cac4;
      }
    }
  }
LAB_0805cac4:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805cad7(void)

{
  int iVar1;
  int iVar2;
  
code_r0x0805cad7:
  puts("block 2");
  if (conditions._100_4_ != 0) {
    while (puts("block 3"), iVar1 = conditions._112_4_, iVar2 = conditions._108_4_,
          conditions._104_4_ != 0) {
      while( true ) {
        if (iVar2 == 0) goto code_r0x0805cad7;
        if (iVar1 == 0) break;
        puts("block 4");
        iVar1 = conditions._124_4_;
        iVar2 = conditions._120_4_;
        if (conditions._116_4_ == 0) goto LAB_0805cac4;
      }
    }
  }
LAB_0805cac4:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_807_edges_11(void)

{
  int iVar1;
  int iVar2;
  
FUN_0805cb58:
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  while (puts("block 3"), iVar1 = conditions._112_4_, iVar2 = conditions._108_4_,
        conditions._104_4_ != 0) {
    while( true ) {
      if (iVar2 == 0) goto FUN_0805cb58;
      if (iVar1 == 0) break;
      puts("block 4");
      iVar1 = conditions._124_4_;
      iVar2 = conditions._120_4_;
      if (conditions._116_4_ == 0) goto LAB_0805cb45;
    }
  }
LAB_0805cb45:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805cb58(void)

{
  int iVar1;
  int iVar2;
  
code_r0x0805cb58:
  do {
    puts("block 2");
  } while (conditions._100_4_ == 0);
  while (puts("block 3"), iVar1 = conditions._112_4_, iVar2 = conditions._108_4_,
        conditions._104_4_ != 0) {
    while( true ) {
      if (iVar2 == 0) goto code_r0x0805cb58;
      if (iVar1 == 0) break;
      puts("block 4");
      iVar1 = conditions._124_4_;
      iVar2 = conditions._120_4_;
      if (conditions._116_4_ == 0) goto LAB_0805cb45;
    }
  }
LAB_0805cb45:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_808_edges_11(void)

{
  int iVar1;
  
FUN_0805cbd9:
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    do {
      while (iVar1 != 0) {
        puts("block 4");
        if (conditions._116_4_ == 0) {
LAB_0805cbc6:
          puts("exit block");
          return 0;
        }
        iVar1 = conditions._124_4_;
        if (conditions._120_4_ == 0) goto FUN_0805cbd9;
      }
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0805cbc6;
      iVar1 = conditions._112_4_;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0805cbd9(void)

{
  int iVar1;
  
code_r0x0805cbd9:
  do {
    puts("block 2");
    iVar1 = conditions._100_4_;
    do {
      while (iVar1 != 0) {
        puts("block 4");
        if (conditions._116_4_ == 0) {
LAB_0805cbc6:
          puts("exit block");
          return 0;
        }
        iVar1 = conditions._124_4_;
        if (conditions._120_4_ == 0) goto code_r0x0805cbd9;
      }
      puts("block 3");
      if (conditions._104_4_ == 0) goto LAB_0805cbc6;
      iVar1 = conditions._112_4_;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_809_edges_11(void)

{
FUN_0805cc5a:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805cc47:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805cc47;
        if (conditions._112_4_ == 0) break;
        do {
          puts("block 4");
          if (conditions._116_4_ == 0) goto LAB_0805cc47;
          if (conditions._120_4_ == 0) goto FUN_0805cc5a;
        } while (conditions._124_4_ != 0);
      }
    }
  } while( true );
}



undefined4 FUN_0805cc5a(void)

{
code_r0x0805cc5a:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805cc47:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805cc47;
        if (conditions._112_4_ == 0) break;
        do {
          puts("block 4");
          if (conditions._116_4_ == 0) goto LAB_0805cc47;
          if (conditions._120_4_ == 0) goto code_r0x0805cc5a;
        } while (conditions._124_4_ != 0);
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_810_edges_11(void)

{
  int iVar1;
  
FUN_0805ccdb:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805ccc8:
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), iVar1 = conditions._112_4_, conditions._108_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805ccc8;
      iVar1 = conditions._124_4_;
      if (conditions._120_4_ == 0) goto FUN_0805ccdb;
    }
  }
  goto LAB_0805ccc8;
}



undefined4 FUN_0805ccdb(void)

{
  int iVar1;
  
code_r0x0805ccdb:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805ccc8:
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), iVar1 = conditions._112_4_, conditions._108_4_ != 0) {
    while (iVar1 != 0) {
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805ccc8;
      iVar1 = conditions._124_4_;
      if (conditions._120_4_ == 0) goto code_r0x0805ccdb;
    }
  }
  goto LAB_0805ccc8;
}



undefined4 test_3_blocks_variant_811_edges_11(void)

{
  int iVar1;
  
FUN_0805cd5c:
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805cd49:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    while (puts("block 3"), iVar1 = conditions._112_4_, conditions._108_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805cd49;
        iVar1 = conditions._124_4_;
        if (conditions._120_4_ == 0) goto FUN_0805cd5c;
      }
    }
  } while( true );
}



undefined4 FUN_0805cd5c(void)

{
  int iVar1;
  
code_r0x0805cd5c:
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805cd49:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    while (puts("block 3"), iVar1 = conditions._112_4_, conditions._108_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805cd49;
        iVar1 = conditions._124_4_;
        if (conditions._120_4_ == 0) goto code_r0x0805cd5c;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_812_edges_11(void)

{
FUN_0805cddd:
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805cdca:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    do {
      do {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805cdca;
        if (conditions._112_4_ == 0) goto FUN_0805cddd;
      } while (conditions._116_4_ == 0);
      puts("block 4");
      if (conditions._120_4_ == 0) goto LAB_0805cdca;
    } while (conditions._124_4_ != 0);
  } while( true );
}



undefined4 FUN_0805cddd(void)

{
code_r0x0805cddd:
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805cdca:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    do {
      do {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805cdca;
        if (conditions._112_4_ == 0) goto code_r0x0805cddd;
      } while (conditions._116_4_ == 0);
      puts("block 4");
      if (conditions._120_4_ == 0) goto LAB_0805cdca;
    } while (conditions._124_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_813_edges_11(void)

{
FUN_0805ce5e:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805ce4b:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ != 0) {
      do {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805ce4b;
        if (conditions._112_4_ == 0) goto FUN_0805ce5e;
      } while (conditions._116_4_ == 0);
      do {
        puts("block 4");
        if (conditions._120_4_ == 0) goto LAB_0805ce4b;
      } while (conditions._124_4_ != 0);
    }
  } while( true );
}



undefined4 FUN_0805ce5e(void)

{
code_r0x0805ce5e:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805ce4b:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ != 0) {
      do {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805ce4b;
        if (conditions._112_4_ == 0) goto code_r0x0805ce5e;
      } while (conditions._116_4_ == 0);
      do {
        puts("block 4");
        if (conditions._120_4_ == 0) goto LAB_0805ce4b;
      } while (conditions._124_4_ != 0);
    }
  } while( true );
}



undefined4 test_3_blocks_variant_814_edges_11(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805cecc;
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) break;
        while (iVar1 != 0) {
          puts("block 4");
          iVar1 = conditions._124_4_;
          if (conditions._120_4_ == 0) goto LAB_0805cecc;
        }
      }
    }
  }
LAB_0805cecc:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805cedf(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      while( true ) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805cecc;
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) break;
        while (iVar1 != 0) {
          puts("block 4");
          iVar1 = conditions._124_4_;
          if (conditions._120_4_ == 0) goto LAB_0805cecc;
        }
      }
    }
  }
LAB_0805cecc:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_815_edges_11(void)

{
  int iVar1;
  int iVar2;
  
FUN_0805cf60:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805cf4d:
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), iVar1 = conditions._116_4_, iVar2 = conditions._112_4_,
        conditions._108_4_ != 0) {
    while( true ) {
      if (iVar2 == 0) goto FUN_0805cf60;
      if (iVar1 == 0) break;
      puts("block 4");
      iVar1 = conditions._124_4_;
      iVar2 = conditions._120_4_;
    }
  }
  goto LAB_0805cf4d;
}



undefined4 FUN_0805cf60(void)

{
  int iVar1;
  int iVar2;
  
code_r0x0805cf60:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805cf4d:
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), iVar1 = conditions._116_4_, iVar2 = conditions._112_4_,
        conditions._108_4_ != 0) {
    while( true ) {
      if (iVar2 == 0) goto code_r0x0805cf60;
      if (iVar1 == 0) break;
      puts("block 4");
      iVar1 = conditions._124_4_;
      iVar2 = conditions._120_4_;
    }
  }
  goto LAB_0805cf4d;
}



undefined4 test_3_blocks_variant_816_edges_11(void)

{
  int iVar1;
  
FUN_0805cfe1:
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      if (iVar1 == 0) goto LAB_0805d002;
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805cfce;
      iVar1 = conditions._124_4_;
    } while (conditions._120_4_ != 0);
  }
LAB_0805cfce:
  puts("exit block");
  return 0;
  while (conditions._112_4_ != 0) {
LAB_0805d002:
    puts("block 3");
    if (conditions._108_4_ == 0) goto LAB_0805cfce;
  }
  goto FUN_0805cfe1;
}



undefined4 FUN_0805cfe1(void)

{
  int iVar1;
  
code_r0x0805cfe1:
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      if (iVar1 == 0) goto LAB_0805d002;
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805cfce;
      iVar1 = conditions._124_4_;
    } while (conditions._120_4_ != 0);
  }
LAB_0805cfce:
  puts("exit block");
  return 0;
  while (conditions._112_4_ != 0) {
LAB_0805d002:
    puts("block 3");
    if (conditions._108_4_ == 0) goto LAB_0805cfce;
  }
  goto code_r0x0805cfe1;
}



undefined4 test_3_blocks_variant_817_edges_11(void)

{
FUN_0805d062:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805d04f:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) goto LAB_0805d083;
    do {
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805d04f;
        if (conditions._120_4_ == 0) goto FUN_0805d062;
      } while (conditions._124_4_ != 0);
LAB_0805d083:
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_0805d04f;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0805d062(void)

{
code_r0x0805d062:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805d04f:
      puts("exit block");
      return 0;
    }
    if (conditions._104_4_ == 0) goto LAB_0805d083;
    do {
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805d04f;
        if (conditions._120_4_ == 0) goto code_r0x0805d062;
      } while (conditions._124_4_ != 0);
LAB_0805d083:
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_0805d04f;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_818_edges_11(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._112_4_;
        if (conditions._108_4_ == 0) goto LAB_0805d0d0;
      }
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805d0d0;
      iVar1 = conditions._124_4_;
    } while (conditions._120_4_ != 0);
  }
LAB_0805d0d0:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805d0e3(void)

{
  int iVar1;
  
  while (puts("block 2"), iVar1 = conditions._104_4_, conditions._100_4_ != 0) {
    do {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._112_4_;
        if (conditions._108_4_ == 0) goto LAB_0805d0d0;
      }
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805d0d0;
      iVar1 = conditions._124_4_;
    } while (conditions._120_4_ != 0);
  }
LAB_0805d0d0:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_819_edges_11(void)

{
  int iVar1;
  
FUN_0805d164:
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
LAB_0805d151:
      puts("exit block");
      return 0;
    }
    do {
      while (iVar1 != 0) {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805d151;
        iVar1 = conditions._124_4_;
        if (conditions._120_4_ == 0) goto FUN_0805d164;
      }
      puts("block 3");
      iVar1 = conditions._112_4_;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 FUN_0805d164(void)

{
  int iVar1;
  
code_r0x0805d164:
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
LAB_0805d151:
      puts("exit block");
      return 0;
    }
    do {
      while (iVar1 != 0) {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805d151;
        iVar1 = conditions._124_4_;
        if (conditions._120_4_ == 0) goto code_r0x0805d164;
      }
      puts("block 3");
      iVar1 = conditions._112_4_;
    } while (conditions._108_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_820_edges_11(void)

{
  int iVar1;
  
FUN_0805d1e5:
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (iVar1 == 0) goto LAB_0805d206;
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805d1d2;
      iVar1 = conditions._124_4_;
    } while (conditions._120_4_ != 0);
  } while( true );
LAB_0805d206:
  do {
    puts("block 3");
    if (conditions._108_4_ == 0) {
LAB_0805d1d2:
      puts("exit block");
      return 0;
    }
  } while (conditions._112_4_ != 0);
  goto FUN_0805d1e5;
}



undefined4 FUN_0805d1e5(void)

{
  int iVar1;
  
code_r0x0805d1e5:
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      if (iVar1 == 0) goto LAB_0805d206;
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805d1d2;
      iVar1 = conditions._124_4_;
    } while (conditions._120_4_ != 0);
  } while( true );
LAB_0805d206:
  do {
    puts("block 3");
    if (conditions._108_4_ == 0) {
LAB_0805d1d2:
      puts("exit block");
      return 0;
    }
  } while (conditions._112_4_ != 0);
  goto code_r0x0805d1e5;
}



undefined4 test_3_blocks_variant_821_edges_11(void)

{
FUN_0805d266:
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) goto LAB_0805d287;
    do {
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) {
LAB_0805d253:
          puts("exit block");
          return 0;
        }
        if (conditions._120_4_ == 0) goto FUN_0805d266;
      } while (conditions._124_4_ != 0);
LAB_0805d287:
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_0805d253;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0805d266(void)

{
code_r0x0805d266:
  do {
    do {
      puts("block 2");
    } while (conditions._100_4_ == 0);
    if (conditions._104_4_ == 0) goto LAB_0805d287;
    do {
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) {
LAB_0805d253:
          puts("exit block");
          return 0;
        }
        if (conditions._120_4_ == 0) goto code_r0x0805d266;
      } while (conditions._124_4_ != 0);
LAB_0805d287:
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_0805d253;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_822_edges_11(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._112_4_;
        if (conditions._108_4_ == 0) {
LAB_0805d2d4:
          puts("exit block");
          return 0;
        }
      }
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805d2d4;
      iVar1 = conditions._124_4_;
    } while (conditions._120_4_ != 0);
  } while( true );
}



undefined4 FUN_0805d2e7(void)

{
  int iVar1;
  
  do {
    do {
      puts("block 2");
      iVar1 = conditions._104_4_;
    } while (conditions._100_4_ == 0);
    do {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._112_4_;
        if (conditions._108_4_ == 0) {
LAB_0805d2d4:
          puts("exit block");
          return 0;
        }
      }
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805d2d4;
      iVar1 = conditions._124_4_;
    } while (conditions._120_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_823_edges_11(void)

{
  int iVar1;
  int iVar2;
  
FUN_0805d368:
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    iVar2 = conditions._100_4_;
    while (iVar2 != 0) {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._112_4_;
        if (conditions._108_4_ == 0) goto FUN_0805d368;
      }
      puts("block 4");
      iVar1 = conditions._124_4_;
      iVar2 = conditions._120_4_;
      if (conditions._116_4_ == 0) {
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_0805d368(void)

{
  int iVar1;
  int iVar2;
  
code_r0x0805d368:
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    iVar2 = conditions._100_4_;
    while (iVar2 != 0) {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._112_4_;
        if (conditions._108_4_ == 0) goto code_r0x0805d368;
      }
      puts("block 4");
      iVar1 = conditions._124_4_;
      iVar2 = conditions._120_4_;
      if (conditions._116_4_ == 0) {
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_824_edges_11(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805d3d6:
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._108_4_;
    } while (conditions._104_4_ == 0);
    do {
      if (iVar1 == 0) {
        puts("block 3");
        if (conditions._112_4_ != 0) {
          uVar2 = FUN_0805d3e9();
          return uVar2;
        }
        goto LAB_0805d3d6;
      }
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805d3d6;
      iVar1 = conditions._124_4_;
    } while (conditions._120_4_ != 0);
  } while( true );
}



undefined4 FUN_0805d3e9(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805d3d6:
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._108_4_;
    } while (conditions._104_4_ == 0);
    do {
      if (iVar1 == 0) {
        puts("block 3");
        if (conditions._112_4_ != 0) {
          uVar2 = FUN_0805d3e9();
          return uVar2;
        }
        goto LAB_0805d3d6;
      }
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805d3d6;
      iVar1 = conditions._124_4_;
    } while (conditions._120_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_825_edges_11(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      if (iVar1 == 0) goto LAB_0805d494;
      puts("block 4");
      iVar1 = conditions._124_4_;
      iVar2 = conditions._120_4_;
      if (conditions._116_4_ == 0) goto LAB_0805d457;
    }
  }
LAB_0805d457:
  puts("exit block");
  return 0;
LAB_0805d494:
  do {
    puts("block 3");
  } while (conditions._112_4_ != 0);
  goto LAB_0805d457;
}



undefined4 FUN_0805d46a(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      if (iVar1 == 0) goto LAB_0805d494;
      puts("block 4");
      iVar1 = conditions._124_4_;
      iVar2 = conditions._120_4_;
      if (conditions._116_4_ == 0) goto LAB_0805d457;
    }
  }
LAB_0805d457:
  puts("exit block");
  return 0;
LAB_0805d494:
  do {
    puts("block 3");
  } while (conditions._112_4_ != 0);
  goto LAB_0805d457;
}



undefined4 test_3_blocks_variant_826_edges_11(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      if (((iVar1 == 0) && (puts("block 3"), conditions._112_4_ == 0)) ||
         (puts("block 4"), iVar1 = conditions._124_4_, iVar2 = conditions._120_4_,
         conditions._116_4_ == 0)) goto LAB_0805d4d8;
    }
  }
LAB_0805d4d8:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805d4eb(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      if (((iVar1 == 0) && (puts("block 3"), conditions._112_4_ == 0)) ||
         (puts("block 4"), iVar1 = conditions._124_4_, iVar2 = conditions._120_4_,
         conditions._116_4_ == 0)) goto LAB_0805d4d8;
    }
  }
LAB_0805d4d8:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_827_edges_11(void)

{
  int iVar1;
  
FUN_0805d56c:
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805d559:
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._108_4_;
    } while (conditions._104_4_ == 0);
    do {
      if (iVar1 == 0) goto LAB_0805d596;
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805d559;
      iVar1 = conditions._124_4_;
    } while (conditions._120_4_ != 0);
  } while( true );
LAB_0805d596:
  do {
    puts("block 3");
  } while (conditions._112_4_ != 0);
  goto FUN_0805d56c;
}



undefined4 FUN_0805d56c(void)

{
  int iVar1;
  
code_r0x0805d56c:
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805d559:
        puts("exit block");
        return 0;
      }
      iVar1 = conditions._108_4_;
    } while (conditions._104_4_ == 0);
    do {
      if (iVar1 == 0) goto LAB_0805d596;
      puts("block 4");
      if (conditions._116_4_ == 0) goto LAB_0805d559;
      iVar1 = conditions._124_4_;
    } while (conditions._120_4_ != 0);
  } while( true );
LAB_0805d596:
  do {
    puts("block 3");
  } while (conditions._112_4_ != 0);
  goto code_r0x0805d56c;
}



undefined4 test_3_blocks_variant_828_edges_11(void)

{
FUN_0805d5ed:
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805d5da:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) goto LAB_0805d617;
    do {
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805d5da;
        if (conditions._120_4_ == 0) goto FUN_0805d5ed;
      } while (conditions._124_4_ != 0);
LAB_0805d617:
      puts("block 3");
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0805d5ed(void)

{
code_r0x0805d5ed:
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805d5da:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) goto LAB_0805d617;
    do {
      do {
        puts("block 4");
        if (conditions._116_4_ == 0) goto LAB_0805d5da;
        if (conditions._120_4_ == 0) goto code_r0x0805d5ed;
      } while (conditions._124_4_ != 0);
LAB_0805d617:
      puts("block 3");
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_829_edges_11(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._112_4_;
      }
      puts("block 4");
      iVar1 = conditions._124_4_;
      iVar2 = conditions._120_4_;
      if (conditions._116_4_ == 0) goto LAB_0805d65b;
    }
  }
LAB_0805d65b:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805d66e(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._112_4_;
      }
      puts("block 4");
      iVar1 = conditions._124_4_;
      iVar2 = conditions._120_4_;
      if (conditions._116_4_ == 0) goto LAB_0805d65b;
    }
  }
LAB_0805d65b:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_830_edges_11(void)

{
FUN_0805d6ef:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805d6dc:
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ != 0) {
    puts("block 4");
    if (conditions._120_4_ == 0) goto LAB_0805d6dc;
    if (conditions._124_4_ == 0) goto FUN_0805d6ef;
  }
  do {
    puts("block 3");
    if (conditions._112_4_ == 0) goto LAB_0805d6dc;
  } while (conditions._116_4_ != 0);
  goto FUN_0805d6ef;
}



undefined4 FUN_0805d6ef(void)

{
code_r0x0805d6ef:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805d6dc:
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  if (conditions._108_4_ != 0) {
    puts("block 4");
    if (conditions._120_4_ == 0) goto LAB_0805d6dc;
    if (conditions._124_4_ == 0) goto code_r0x0805d6ef;
  }
  do {
    puts("block 3");
    if (conditions._112_4_ == 0) goto LAB_0805d6dc;
  } while (conditions._116_4_ != 0);
  goto code_r0x0805d6ef;
}



undefined4 test_3_blocks_variant_831_edges_11(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) {
        do {
          puts("block 3");
          if (conditions._112_4_ == 0) goto LAB_0805d75d;
        } while (conditions._116_4_ != 0);
      }
      else {
        do {
          puts("block 4");
          if (conditions._120_4_ == 0) goto LAB_0805d75d;
        } while (conditions._124_4_ != 0);
      }
    }
  }
LAB_0805d75d:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805d770(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) {
        do {
          puts("block 3");
          if (conditions._112_4_ == 0) goto LAB_0805d75d;
        } while (conditions._116_4_ != 0);
      }
      else {
        do {
          puts("block 4");
          if (conditions._120_4_ == 0) goto LAB_0805d75d;
        } while (conditions._124_4_ != 0);
      }
    }
  }
LAB_0805d75d:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_832_edges_11(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    iVar1 = conditions._108_4_;
    if (conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._124_4_;
        if (conditions._120_4_ == 0) goto LAB_0805d7de;
      }
      do {
        puts("block 3");
        if (conditions._112_4_ == 0) goto LAB_0805d7de;
      } while (conditions._116_4_ != 0);
    }
  }
LAB_0805d7de:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805d7f1(void)

{
  int iVar1;
  
  while (puts("block 2"), conditions._100_4_ != 0) {
    iVar1 = conditions._108_4_;
    if (conditions._104_4_ != 0) {
      while (iVar1 != 0) {
        puts("block 4");
        iVar1 = conditions._124_4_;
        if (conditions._120_4_ == 0) goto LAB_0805d7de;
      }
      do {
        puts("block 3");
        if (conditions._112_4_ == 0) goto LAB_0805d7de;
      } while (conditions._116_4_ != 0);
    }
  }
LAB_0805d7de:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_833_edges_11(void)

{
  int iVar1;
  int iVar2;
  
FUN_0805d872:
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      if (iVar1 == 0) goto LAB_0805d89c;
      puts("block 4");
      iVar1 = conditions._124_4_;
      iVar2 = conditions._120_4_;
    }
  }
LAB_0805d85f:
  puts("exit block");
  return 0;
  while (conditions._116_4_ != 0) {
LAB_0805d89c:
    puts("block 3");
    if (conditions._112_4_ == 0) goto LAB_0805d85f;
  }
  goto FUN_0805d872;
}



undefined4 FUN_0805d872(void)

{
  int iVar1;
  int iVar2;
  
code_r0x0805d872:
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      if (iVar1 == 0) goto LAB_0805d89c;
      puts("block 4");
      iVar1 = conditions._124_4_;
      iVar2 = conditions._120_4_;
    }
  }
LAB_0805d85f:
  puts("exit block");
  return 0;
  while (conditions._116_4_ != 0) {
LAB_0805d89c:
    puts("block 3");
    if (conditions._112_4_ == 0) goto LAB_0805d85f;
  }
  goto code_r0x0805d872;
}



undefined4 test_3_blocks_variant_834_edges_11(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805d8e0:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) goto LAB_0805d91d;
    do {
      puts("block 4");
      if (conditions._120_4_ == 0) goto LAB_0805d8e0;
      if (conditions._124_4_ == 0) break;
LAB_0805d91d:
      puts("block 3");
      if (conditions._112_4_ == 0) goto LAB_0805d8e0;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_0805d8f3(void)

{
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805d8e0:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) goto LAB_0805d91d;
    do {
      puts("block 4");
      if (conditions._120_4_ == 0) goto LAB_0805d8e0;
      if (conditions._124_4_ == 0) break;
LAB_0805d91d:
      puts("block 3");
      if (conditions._112_4_ == 0) goto LAB_0805d8e0;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_835_edges_11(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) goto LAB_0805d99e;
      do {
        do {
          puts("block 4");
          if (conditions._120_4_ == 0) goto LAB_0805d961;
        } while (conditions._124_4_ != 0);
LAB_0805d99e:
        puts("block 3");
        if (conditions._112_4_ == 0) goto LAB_0805d961;
      } while (conditions._116_4_ != 0);
    }
  }
LAB_0805d961:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805d974(void)

{
  while (puts("block 2"), conditions._100_4_ != 0) {
    if (conditions._104_4_ != 0) {
      if (conditions._108_4_ == 0) goto LAB_0805d99e;
      do {
        do {
          puts("block 4");
          if (conditions._120_4_ == 0) goto LAB_0805d961;
        } while (conditions._124_4_ != 0);
LAB_0805d99e:
        puts("block 3");
        if (conditions._112_4_ == 0) goto LAB_0805d961;
      } while (conditions._116_4_ != 0);
    }
  }
LAB_0805d961:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_836_edges_11(void)

{
FUN_0805d9f5:
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805d9e2:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) goto LAB_0805da1f;
    do {
      do {
        puts("block 4");
        if (conditions._120_4_ == 0) goto FUN_0805d9f5;
      } while (conditions._124_4_ != 0);
LAB_0805da1f:
      puts("block 3");
      if (conditions._112_4_ == 0) goto LAB_0805d9e2;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_0805d9f5(void)

{
code_r0x0805d9f5:
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805d9e2:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) goto LAB_0805da1f;
    do {
      do {
        puts("block 4");
        if (conditions._120_4_ == 0) goto code_r0x0805d9f5;
      } while (conditions._124_4_ != 0);
LAB_0805da1f:
      puts("block 3");
      if (conditions._112_4_ == 0) goto LAB_0805d9e2;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_837_edges_11(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805da63;
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  do {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._124_4_;
      if (conditions._120_4_ == 0) goto LAB_0805da63;
    }
    puts("block 3");
    iVar1 = conditions._116_4_;
  } while (conditions._112_4_ != 0);
LAB_0805da63:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805da76(void)

{
  int iVar1;
  
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) goto LAB_0805da63;
    iVar1 = conditions._108_4_;
  } while (conditions._104_4_ == 0);
  do {
    while (iVar1 != 0) {
      puts("block 4");
      iVar1 = conditions._124_4_;
      if (conditions._120_4_ == 0) goto LAB_0805da63;
    }
    puts("block 3");
    iVar1 = conditions._116_4_;
  } while (conditions._112_4_ != 0);
LAB_0805da63:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_838_edges_11(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) goto LAB_0805dae4;
      }
      puts("block 4");
      iVar1 = conditions._124_4_;
      iVar2 = conditions._120_4_;
    }
  }
LAB_0805dae4:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805daf7(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) goto LAB_0805dae4;
      }
      puts("block 4");
      iVar1 = conditions._124_4_;
      iVar2 = conditions._120_4_;
    }
  }
LAB_0805dae4:
  puts("exit block");
  return 0;
}



undefined4 test_3_blocks_variant_839_edges_11(void)

{
  int iVar1;
  int iVar2;
  
FUN_0805db78:
  do {
    puts("block 2");
    iVar1 = conditions._108_4_;
    iVar2 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    while (iVar2 != 0) {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) goto FUN_0805db78;
      }
      puts("block 4");
      iVar1 = conditions._124_4_;
      iVar2 = conditions._120_4_;
    }
  } while( true );
}



undefined4 FUN_0805db78(void)

{
  int iVar1;
  int iVar2;
  
code_r0x0805db78:
  do {
    puts("block 2");
    iVar1 = conditions._108_4_;
    iVar2 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
      puts("exit block");
      return 0;
    }
    while (iVar2 != 0) {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) goto code_r0x0805db78;
      }
      puts("block 4");
      iVar1 = conditions._124_4_;
      iVar2 = conditions._120_4_;
    }
  } while( true );
}



undefined4 test_3_blocks_variant_840_edges_12(void)

{
  int iVar1;
  int iVar2;
  
FUN_0805dbf9:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805dbe6:
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), iVar1 = conditions._116_4_, iVar2 = conditions._112_4_,
        conditions._108_4_ != 0) {
    while( true ) {
      if (iVar2 == 0) goto FUN_0805dbf9;
      if (iVar1 == 0) break;
      puts("block 4");
      iVar1 = conditions._128_4_;
      iVar2 = conditions._124_4_;
      if (conditions._120_4_ == 0) goto LAB_0805dbe6;
    }
  }
  goto LAB_0805dbe6;
}



undefined4 FUN_0805dbf9(void)

{
  int iVar1;
  int iVar2;
  
code_r0x0805dbf9:
  do {
    puts("block 2");
    if (conditions._100_4_ == 0) {
LAB_0805dbe6:
      puts("exit block");
      return 0;
    }
  } while (conditions._104_4_ == 0);
  while (puts("block 3"), iVar1 = conditions._116_4_, iVar2 = conditions._112_4_,
        conditions._108_4_ != 0) {
    while( true ) {
      if (iVar2 == 0) goto code_r0x0805dbf9;
      if (iVar1 == 0) break;
      puts("block 4");
      iVar1 = conditions._128_4_;
      iVar2 = conditions._124_4_;
      if (conditions._120_4_ == 0) goto LAB_0805dbe6;
    }
  }
  goto LAB_0805dbe6;
}



undefined4 test_3_blocks_variant_841_edges_12(void)

{
  int iVar1;
  
FUN_0805dc83:
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
LAB_0805dc70:
      puts("exit block");
      return 0;
    }
    do {
      while (iVar1 != 0) {
        puts("block 4");
        if (conditions._120_4_ == 0) goto LAB_0805dc70;
        iVar1 = conditions._128_4_;
        if (conditions._124_4_ == 0) goto FUN_0805dc83;
      }
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_0805dc70;
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 FUN_0805dc83(void)

{
  int iVar1;
  
code_r0x0805dc83:
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    if (conditions._100_4_ == 0) {
LAB_0805dc70:
      puts("exit block");
      return 0;
    }
    do {
      while (iVar1 != 0) {
        puts("block 4");
        if (conditions._120_4_ == 0) goto LAB_0805dc70;
        iVar1 = conditions._128_4_;
        if (conditions._124_4_ == 0) goto code_r0x0805dc83;
      }
      puts("block 3");
      if (conditions._108_4_ == 0) goto LAB_0805dc70;
      iVar1 = conditions._116_4_;
    } while (conditions._112_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_842_edges_12(void)

{
  int iVar1;
  int iVar2;
  
FUN_0805dd0d:
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    iVar2 = conditions._100_4_;
    while (iVar2 != 0) {
      while (iVar1 == 0) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805dcfa;
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) goto FUN_0805dd0d;
      }
      puts("block 4");
      iVar1 = conditions._128_4_;
      iVar2 = conditions._124_4_;
      if (conditions._120_4_ == 0) {
LAB_0805dcfa:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_0805dd0d(void)

{
  int iVar1;
  int iVar2;
  
code_r0x0805dd0d:
  do {
    puts("block 2");
    iVar1 = conditions._104_4_;
    iVar2 = conditions._100_4_;
    while (iVar2 != 0) {
      while (iVar1 == 0) {
        puts("block 3");
        if (conditions._108_4_ == 0) goto LAB_0805dcfa;
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) goto code_r0x0805dd0d;
      }
      puts("block 4");
      iVar1 = conditions._128_4_;
      iVar2 = conditions._124_4_;
      if (conditions._120_4_ == 0) {
LAB_0805dcfa:
        puts("exit block");
        return 0;
      }
    }
  } while( true );
}



undefined4 test_3_blocks_variant_843_edges_12(void)

{
  int iVar1;
  int iVar2;
  
FUN_0805dd97:
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      if (iVar1 == 0) goto LAB_0805ddc1;
      puts("block 4");
      iVar1 = conditions._128_4_;
      iVar2 = conditions._124_4_;
      if (conditions._120_4_ == 0) goto LAB_0805dd84;
    }
  }
LAB_0805dd84:
  puts("exit block");
  return 0;
  while (conditions._116_4_ != 0) {
LAB_0805ddc1:
    puts("block 3");
    if (conditions._112_4_ == 0) goto LAB_0805dd84;
  }
  goto FUN_0805dd97;
}



undefined4 FUN_0805dd97(void)

{
  int iVar1;
  int iVar2;
  
code_r0x0805dd97:
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      if (iVar1 == 0) goto LAB_0805ddc1;
      puts("block 4");
      iVar1 = conditions._128_4_;
      iVar2 = conditions._124_4_;
      if (conditions._120_4_ == 0) goto LAB_0805dd84;
    }
  }
LAB_0805dd84:
  puts("exit block");
  return 0;
  while (conditions._116_4_ != 0) {
LAB_0805ddc1:
    puts("block 3");
    if (conditions._112_4_ == 0) goto LAB_0805dd84;
  }
  goto code_r0x0805dd97;
}



undefined4 test_3_blocks_variant_844_edges_12(void)

{
FUN_0805de21:
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805de0e:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) goto LAB_0805de4b;
    do {
      do {
        puts("block 4");
        if (conditions._120_4_ == 0) goto LAB_0805de0e;
        if (conditions._124_4_ == 0) goto FUN_0805de21;
      } while (conditions._128_4_ != 0);
LAB_0805de4b:
      puts("block 3");
      if (conditions._112_4_ == 0) goto LAB_0805de0e;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 FUN_0805de21(void)

{
code_r0x0805de21:
  do {
    do {
      puts("block 2");
      if (conditions._100_4_ == 0) {
LAB_0805de0e:
        puts("exit block");
        return 0;
      }
    } while (conditions._104_4_ == 0);
    if (conditions._108_4_ == 0) goto LAB_0805de4b;
    do {
      do {
        puts("block 4");
        if (conditions._120_4_ == 0) goto LAB_0805de0e;
        if (conditions._124_4_ == 0) goto code_r0x0805de21;
      } while (conditions._128_4_ != 0);
LAB_0805de4b:
      puts("block 3");
      if (conditions._112_4_ == 0) goto LAB_0805de0e;
    } while (conditions._116_4_ != 0);
  } while( true );
}



undefined4 test_3_blocks_variant_845_edges_12(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) goto LAB_0805de98;
      }
      puts("block 4");
      iVar1 = conditions._128_4_;
      iVar2 = conditions._124_4_;
      if (conditions._120_4_ == 0) goto LAB_0805de98;
    }
  }
LAB_0805de98:
  puts("exit block");
  return 0;
}



undefined4 FUN_0805deab(void)

{
  int iVar1;
  int iVar2;
  
  while (puts("block 2"), iVar1 = conditions._108_4_, iVar2 = conditions._104_4_,
        conditions._100_4_ != 0) {
    while (iVar2 != 0) {
      while (iVar1 == 0) {
        puts("block 3");
        iVar1 = conditions._116_4_;
        if (conditions._112_4_ == 0) goto LAB_0805de98;
      }
      puts("block 4");
      iVar1 = conditions._128_4_;
      iVar2 = conditions._124_4_;
      if (conditions._120_4_ == 0) goto LAB_0805de98;
    }
  }
LAB_0805de98:
  puts("exit block");
  return 0;
}



// WARNING: Type propagation algorithm not settling

undefined4 test_3_blocks_variant_846_edges_12(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
FUN_0805df35:
  puts("block 2");
  iVar1 = conditions._104_4_;
  iVar2 = conditions._108_4_;
  iVar3 = conditions._100_4_;
  do {
    if (iVar3 == 0) {
      puts("exit block");
      return 0;
    }
    while( true ) {
      if (iVar1 == 0) goto FUN_0805df35;
      if (iVar2 != 0) break;
      puts("block 3");
      iVar2 = conditions._116_4_;
      iVar1 = conditions._112_4_;
    }
    puts("block 4");
    iVar1 = conditions._124_4_;
    iVar2 = conditions._128_4_;
    iVar3 = conditions._120_4_;
  } while( true );
}



// WARNING: Type propagation algorithm not settling

undefined4 FUN_0805df35(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
code_r0x0805df35:
  puts("block 2");
  iVar1 = conditions._104_4_;
  iVar2 = conditions._108_4_;
  iVar3 = conditions._100_4_;
  do {
    if (iVar3 == 0) {
      puts("exit block");
      return 0;
    }
    while( true ) {
      if (iVar1 == 0) goto code_r0x0805df35;
      if (iVar2 != 0) break;
      puts("block 3");
      iVar2 = conditions._116_4_;
      iVar1 = conditions._112_4_;
    }
    puts("block 4");
    iVar1 = conditions._124_4_;
    iVar2 = conditions._128_4_;
    iVar3 = conditions._120_4_;
  } while( true );
}



// WARNING: Type propagation algorithm not settling

undefined4 test_3_blocks_variant_847_edges_13(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
FUN_0805dfbf:
  puts("block 2");
  iVar1 = conditions._104_4_;
  iVar2 = conditions._108_4_;
  iVar3 = conditions._100_4_;
  while (iVar3 != 0) {
    while( true ) {
      if (iVar1 == 0) goto FUN_0805dfbf;
      if (iVar2 != 0) break;
      puts("block 3");
      iVar2 = conditions._120_4_;
      iVar1 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_0805dfac;
    }
    puts("block 4");
    iVar1 = conditions._128_4_;
    iVar2 = conditions._132_4_;
    iVar3 = conditions._124_4_;
  }
LAB_0805dfac:
  puts("exit block");
  return 0;
}



// WARNING: Type propagation algorithm not settling

undefined4 FUN_0805dfbf(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
code_r0x0805dfbf:
  puts("block 2");
  iVar1 = conditions._104_4_;
  iVar2 = conditions._108_4_;
  iVar3 = conditions._100_4_;
  while (iVar3 != 0) {
    while( true ) {
      if (iVar1 == 0) goto code_r0x0805dfbf;
      if (iVar2 != 0) break;
      puts("block 3");
      iVar2 = conditions._120_4_;
      iVar1 = conditions._116_4_;
      if (conditions._112_4_ == 0) goto LAB_0805dfac;
    }
    puts("block 4");
    iVar1 = conditions._128_4_;
    iVar2 = conditions._132_4_;
    iVar3 = conditions._124_4_;
  }
LAB_0805dfac:
  puts("exit block");
  return 0;
}



undefined4 main(void)

{
  initConditions();
  test_1_blocks_variant_0_edges_2();
  test_1_blocks_variant_1_edges_3();
  test_2_blocks_variant_0_edges_3();
  test_2_blocks_variant_1_edges_4();
  test_2_blocks_variant_2_edges_4();
  test_2_blocks_variant_3_edges_4();
  test_2_blocks_variant_4_edges_4();
  test_2_blocks_variant_5_edges_4();
  test_2_blocks_variant_6_edges_4();
  test_2_blocks_variant_7_edges_5();
  test_2_blocks_variant_8_edges_5();
  test_2_blocks_variant_9_edges_5();
  test_2_blocks_variant_10_edges_5();
  test_2_blocks_variant_11_edges_5();
  test_2_blocks_variant_12_edges_5();
  test_2_blocks_variant_13_edges_5();
  test_2_blocks_variant_14_edges_5();
  test_2_blocks_variant_15_edges_5();
  test_2_blocks_variant_16_edges_6();
  test_2_blocks_variant_17_edges_6();
  test_2_blocks_variant_18_edges_6();
  test_2_blocks_variant_19_edges_6();
  test_2_blocks_variant_20_edges_6();
  test_2_blocks_variant_21_edges_7();
  test_3_blocks_variant_0_edges_4();
  test_3_blocks_variant_1_edges_5();
  test_3_blocks_variant_2_edges_5();
  test_3_blocks_variant_3_edges_5();
  test_3_blocks_variant_4_edges_5();
  test_3_blocks_variant_5_edges_5();
  test_3_blocks_variant_6_edges_5();
  test_3_blocks_variant_7_edges_5();
  test_3_blocks_variant_8_edges_5();
  test_3_blocks_variant_9_edges_5();
  test_3_blocks_variant_10_edges_5();
  test_3_blocks_variant_11_edges_5();
  test_3_blocks_variant_12_edges_5();
  test_3_blocks_variant_13_edges_5();
  test_3_blocks_variant_14_edges_5();
  test_3_blocks_variant_15_edges_5();
  test_3_blocks_variant_16_edges_5();
  test_3_blocks_variant_17_edges_5();
  test_3_blocks_variant_18_edges_5();
  test_3_blocks_variant_19_edges_6();
  test_3_blocks_variant_20_edges_6();
  test_3_blocks_variant_21_edges_6();
  test_3_blocks_variant_22_edges_6();
  test_3_blocks_variant_23_edges_6();
  test_3_blocks_variant_24_edges_6();
  test_3_blocks_variant_25_edges_6();
  test_3_blocks_variant_26_edges_6();
  test_3_blocks_variant_27_edges_6();
  test_3_blocks_variant_28_edges_6();
  test_3_blocks_variant_29_edges_6();
  test_3_blocks_variant_30_edges_6();
  test_3_blocks_variant_31_edges_6();
  test_3_blocks_variant_32_edges_6();
  test_3_blocks_variant_33_edges_6();
  test_3_blocks_variant_34_edges_6();
  test_3_blocks_variant_35_edges_6();
  test_3_blocks_variant_36_edges_6();
  test_3_blocks_variant_37_edges_6();
  test_3_blocks_variant_38_edges_6();
  test_3_blocks_variant_39_edges_6();
  test_3_blocks_variant_40_edges_6();
  test_3_blocks_variant_41_edges_6();
  test_3_blocks_variant_42_edges_6();
  test_3_blocks_variant_43_edges_6();
  test_3_blocks_variant_44_edges_6();
  test_3_blocks_variant_45_edges_6();
  test_3_blocks_variant_46_edges_6();
  test_3_blocks_variant_47_edges_6();
  test_3_blocks_variant_48_edges_6();
  test_3_blocks_variant_49_edges_6();
  test_3_blocks_variant_50_edges_6();
  test_3_blocks_variant_51_edges_6();
  test_3_blocks_variant_52_edges_6();
  test_3_blocks_variant_53_edges_6();
  test_3_blocks_variant_54_edges_6();
  test_3_blocks_variant_55_edges_6();
  test_3_blocks_variant_56_edges_6();
  test_3_blocks_variant_57_edges_6();
  test_3_blocks_variant_58_edges_6();
  test_3_blocks_variant_59_edges_6();
  test_3_blocks_variant_60_edges_6();
  test_3_blocks_variant_61_edges_6();
  test_3_blocks_variant_62_edges_6();
  test_3_blocks_variant_63_edges_6();
  test_3_blocks_variant_64_edges_6();
  test_3_blocks_variant_65_edges_6();
  test_3_blocks_variant_66_edges_6();
  test_3_blocks_variant_67_edges_6();
  test_3_blocks_variant_68_edges_6();
  test_3_blocks_variant_69_edges_6();
  test_3_blocks_variant_70_edges_6();
  test_3_blocks_variant_71_edges_6();
  test_3_blocks_variant_72_edges_6();
  test_3_blocks_variant_73_edges_6();
  test_3_blocks_variant_74_edges_6();
  test_3_blocks_variant_75_edges_6();
  test_3_blocks_variant_76_edges_6();
  test_3_blocks_variant_77_edges_6();
  test_3_blocks_variant_78_edges_6();
  test_3_blocks_variant_79_edges_6();
  test_3_blocks_variant_80_edges_6();
  test_3_blocks_variant_81_edges_6();
  test_3_blocks_variant_82_edges_6();
  test_3_blocks_variant_83_edges_6();
  test_3_blocks_variant_84_edges_6();
  test_3_blocks_variant_85_edges_6();
  test_3_blocks_variant_86_edges_6();
  test_3_blocks_variant_87_edges_6();
  test_3_blocks_variant_88_edges_6();
  test_3_blocks_variant_89_edges_6();
  test_3_blocks_variant_90_edges_6();
  test_3_blocks_variant_91_edges_6();
  test_3_blocks_variant_92_edges_6();
  test_3_blocks_variant_93_edges_6();
  test_3_blocks_variant_94_edges_6();
  test_3_blocks_variant_95_edges_6();
  test_3_blocks_variant_96_edges_6();
  test_3_blocks_variant_97_edges_6();
  test_3_blocks_variant_98_edges_6();
  test_3_blocks_variant_99_edges_6();
  test_3_blocks_variant_100_edges_6();
  test_3_blocks_variant_101_edges_6();
  test_3_blocks_variant_102_edges_6();
  test_3_blocks_variant_103_edges_7();
  test_3_blocks_variant_104_edges_7();
  test_3_blocks_variant_105_edges_7();
  test_3_blocks_variant_106_edges_7();
  test_3_blocks_variant_107_edges_7();
  test_3_blocks_variant_108_edges_7();
  test_3_blocks_variant_109_edges_7();
  test_3_blocks_variant_110_edges_7();
  test_3_blocks_variant_111_edges_7();
  test_3_blocks_variant_112_edges_7();
  test_3_blocks_variant_113_edges_7();
  test_3_blocks_variant_114_edges_7();
  test_3_blocks_variant_115_edges_7();
  test_3_blocks_variant_116_edges_7();
  test_3_blocks_variant_117_edges_7();
  test_3_blocks_variant_118_edges_7();
  test_3_blocks_variant_119_edges_7();
  test_3_blocks_variant_120_edges_7();
  test_3_blocks_variant_121_edges_7();
  test_3_blocks_variant_122_edges_7();
  test_3_blocks_variant_123_edges_7();
  test_3_blocks_variant_124_edges_7();
  test_3_blocks_variant_125_edges_7();
  test_3_blocks_variant_126_edges_7();
  test_3_blocks_variant_127_edges_7();
  test_3_blocks_variant_128_edges_7();
  test_3_blocks_variant_129_edges_7();
  test_3_blocks_variant_130_edges_7();
  test_3_blocks_variant_131_edges_7();
  test_3_blocks_variant_132_edges_7();
  test_3_blocks_variant_133_edges_7();
  test_3_blocks_variant_134_edges_7();
  test_3_blocks_variant_135_edges_7();
  test_3_blocks_variant_136_edges_7();
  test_3_blocks_variant_137_edges_7();
  test_3_blocks_variant_138_edges_7();
  test_3_blocks_variant_139_edges_7();
  test_3_blocks_variant_140_edges_7();
  test_3_blocks_variant_141_edges_7();
  test_3_blocks_variant_142_edges_7();
  test_3_blocks_variant_143_edges_7();
  test_3_blocks_variant_144_edges_7();
  test_3_blocks_variant_145_edges_7();
  test_3_blocks_variant_146_edges_7();
  test_3_blocks_variant_147_edges_7();
  test_3_blocks_variant_148_edges_7();
  test_3_blocks_variant_149_edges_7();
  test_3_blocks_variant_150_edges_7();
  test_3_blocks_variant_151_edges_7();
  test_3_blocks_variant_152_edges_7();
  test_3_blocks_variant_153_edges_7();
  test_3_blocks_variant_154_edges_7();
  test_3_blocks_variant_155_edges_7();
  test_3_blocks_variant_156_edges_7();
  test_3_blocks_variant_157_edges_7();
  test_3_blocks_variant_158_edges_7();
  test_3_blocks_variant_159_edges_7();
  test_3_blocks_variant_160_edges_7();
  test_3_blocks_variant_161_edges_7();
  test_3_blocks_variant_162_edges_7();
  test_3_blocks_variant_163_edges_7();
  test_3_blocks_variant_164_edges_7();
  test_3_blocks_variant_165_edges_7();
  test_3_blocks_variant_166_edges_7();
  test_3_blocks_variant_167_edges_7();
  test_3_blocks_variant_168_edges_7();
  test_3_blocks_variant_169_edges_7();
  test_3_blocks_variant_170_edges_7();
  test_3_blocks_variant_171_edges_7();
  test_3_blocks_variant_172_edges_7();
  test_3_blocks_variant_173_edges_7();
  test_3_blocks_variant_174_edges_7();
  test_3_blocks_variant_175_edges_7();
  test_3_blocks_variant_176_edges_7();
  test_3_blocks_variant_177_edges_7();
  test_3_blocks_variant_178_edges_7();
  test_3_blocks_variant_179_edges_7();
  test_3_blocks_variant_180_edges_7();
  test_3_blocks_variant_181_edges_7();
  test_3_blocks_variant_182_edges_7();
  test_3_blocks_variant_183_edges_7();
  test_3_blocks_variant_184_edges_7();
  test_3_blocks_variant_185_edges_7();
  test_3_blocks_variant_186_edges_7();
  test_3_blocks_variant_187_edges_7();
  test_3_blocks_variant_188_edges_7();
  test_3_blocks_variant_189_edges_7();
  test_3_blocks_variant_190_edges_7();
  test_3_blocks_variant_191_edges_7();
  test_3_blocks_variant_192_edges_7();
  test_3_blocks_variant_193_edges_7();
  test_3_blocks_variant_194_edges_7();
  test_3_blocks_variant_195_edges_7();
  test_3_blocks_variant_196_edges_7();
  test_3_blocks_variant_197_edges_7();
  test_3_blocks_variant_198_edges_7();
  test_3_blocks_variant_199_edges_7();
  test_3_blocks_variant_200_edges_7();
  test_3_blocks_variant_201_edges_7();
  test_3_blocks_variant_202_edges_7();
  test_3_blocks_variant_203_edges_7();
  test_3_blocks_variant_204_edges_7();
  test_3_blocks_variant_205_edges_7();
  test_3_blocks_variant_206_edges_7();
  test_3_blocks_variant_207_edges_7();
  test_3_blocks_variant_208_edges_7();
  test_3_blocks_variant_209_edges_7();
  test_3_blocks_variant_210_edges_7();
  test_3_blocks_variant_211_edges_7();
  test_3_blocks_variant_212_edges_7();
  test_3_blocks_variant_213_edges_7();
  test_3_blocks_variant_214_edges_7();
  test_3_blocks_variant_215_edges_7();
  test_3_blocks_variant_216_edges_7();
  test_3_blocks_variant_217_edges_7();
  test_3_blocks_variant_218_edges_7();
  test_3_blocks_variant_219_edges_7();
  test_3_blocks_variant_220_edges_7();
  test_3_blocks_variant_221_edges_7();
  test_3_blocks_variant_222_edges_7();
  test_3_blocks_variant_223_edges_7();
  test_3_blocks_variant_224_edges_7();
  test_3_blocks_variant_225_edges_7();
  test_3_blocks_variant_226_edges_7();
  test_3_blocks_variant_227_edges_7();
  test_3_blocks_variant_228_edges_7();
  test_3_blocks_variant_229_edges_7();
  test_3_blocks_variant_230_edges_7();
  test_3_blocks_variant_231_edges_7();
  test_3_blocks_variant_232_edges_7();
  test_3_blocks_variant_233_edges_7();
  test_3_blocks_variant_234_edges_7();
  test_3_blocks_variant_235_edges_7();
  test_3_blocks_variant_236_edges_7();
  test_3_blocks_variant_237_edges_7();
  test_3_blocks_variant_238_edges_7();
  test_3_blocks_variant_239_edges_7();
  test_3_blocks_variant_240_edges_7();
  test_3_blocks_variant_241_edges_7();
  test_3_blocks_variant_242_edges_7();
  test_3_blocks_variant_243_edges_7();
  test_3_blocks_variant_244_edges_7();
  test_3_blocks_variant_245_edges_7();
  test_3_blocks_variant_246_edges_7();
  test_3_blocks_variant_247_edges_7();
  test_3_blocks_variant_248_edges_7();
  test_3_blocks_variant_249_edges_7();
  test_3_blocks_variant_250_edges_7();
  test_3_blocks_variant_251_edges_7();
  test_3_blocks_variant_252_edges_7();
  test_3_blocks_variant_253_edges_7();
  test_3_blocks_variant_254_edges_7();
  test_3_blocks_variant_255_edges_7();
  test_3_blocks_variant_256_edges_7();
  test_3_blocks_variant_257_edges_7();
  test_3_blocks_variant_258_edges_7();
  test_3_blocks_variant_259_edges_7();
  test_3_blocks_variant_260_edges_7();
  test_3_blocks_variant_261_edges_7();
  test_3_blocks_variant_262_edges_7();
  test_3_blocks_variant_263_edges_7();
  test_3_blocks_variant_264_edges_7();
  test_3_blocks_variant_265_edges_7();
  test_3_blocks_variant_266_edges_7();
  test_3_blocks_variant_267_edges_7();
  test_3_blocks_variant_268_edges_7();
  test_3_blocks_variant_269_edges_7();
  test_3_blocks_variant_270_edges_7();
  test_3_blocks_variant_271_edges_7();
  test_3_blocks_variant_272_edges_7();
  test_3_blocks_variant_273_edges_7();
  test_3_blocks_variant_274_edges_7();
  test_3_blocks_variant_275_edges_7();
  test_3_blocks_variant_276_edges_7();
  test_3_blocks_variant_277_edges_7();
  test_3_blocks_variant_278_edges_7();
  test_3_blocks_variant_279_edges_7();
  test_3_blocks_variant_280_edges_7();
  test_3_blocks_variant_281_edges_7();
  test_3_blocks_variant_282_edges_7();
  test_3_blocks_variant_283_edges_7();
  test_3_blocks_variant_284_edges_7();
  test_3_blocks_variant_285_edges_7();
  test_3_blocks_variant_286_edges_8();
  test_3_blocks_variant_287_edges_8();
  test_3_blocks_variant_288_edges_8();
  test_3_blocks_variant_289_edges_8();
  test_3_blocks_variant_290_edges_8();
  test_3_blocks_variant_291_edges_8();
  test_3_blocks_variant_292_edges_8();
  test_3_blocks_variant_293_edges_8();
  test_3_blocks_variant_294_edges_8();
  test_3_blocks_variant_295_edges_8();
  test_3_blocks_variant_296_edges_8();
  test_3_blocks_variant_297_edges_8();
  test_3_blocks_variant_298_edges_8();
  test_3_blocks_variant_299_edges_8();
  test_3_blocks_variant_300_edges_8();
  test_3_blocks_variant_301_edges_8();
  test_3_blocks_variant_302_edges_8();
  test_3_blocks_variant_303_edges_8();
  test_3_blocks_variant_304_edges_8();
  test_3_blocks_variant_305_edges_8();
  test_3_blocks_variant_306_edges_8();
  test_3_blocks_variant_307_edges_8();
  test_3_blocks_variant_308_edges_8();
  test_3_blocks_variant_309_edges_8();
  test_3_blocks_variant_310_edges_8();
  test_3_blocks_variant_311_edges_8();
  test_3_blocks_variant_312_edges_8();
  test_3_blocks_variant_313_edges_8();
  test_3_blocks_variant_314_edges_8();
  test_3_blocks_variant_315_edges_8();
  test_3_blocks_variant_316_edges_8();
  test_3_blocks_variant_317_edges_8();
  test_3_blocks_variant_318_edges_8();
  test_3_blocks_variant_319_edges_8();
  test_3_blocks_variant_320_edges_8();
  test_3_blocks_variant_321_edges_8();
  test_3_blocks_variant_322_edges_8();
  test_3_blocks_variant_323_edges_8();
  test_3_blocks_variant_324_edges_8();
  test_3_blocks_variant_325_edges_8();
  test_3_blocks_variant_326_edges_8();
  test_3_blocks_variant_327_edges_8();
  test_3_blocks_variant_328_edges_8();
  test_3_blocks_variant_329_edges_8();
  test_3_blocks_variant_330_edges_8();
  test_3_blocks_variant_331_edges_8();
  test_3_blocks_variant_332_edges_8();
  test_3_blocks_variant_333_edges_8();
  test_3_blocks_variant_334_edges_8();
  test_3_blocks_variant_335_edges_8();
  test_3_blocks_variant_336_edges_8();
  test_3_blocks_variant_337_edges_8();
  test_3_blocks_variant_338_edges_8();
  test_3_blocks_variant_339_edges_8();
  test_3_blocks_variant_340_edges_8();
  test_3_blocks_variant_341_edges_8();
  test_3_blocks_variant_342_edges_8();
  test_3_blocks_variant_343_edges_8();
  test_3_blocks_variant_344_edges_8();
  test_3_blocks_variant_345_edges_8();
  test_3_blocks_variant_346_edges_8();
  test_3_blocks_variant_347_edges_8();
  test_3_blocks_variant_348_edges_8();
  test_3_blocks_variant_349_edges_8();
  test_3_blocks_variant_350_edges_8();
  test_3_blocks_variant_351_edges_8();
  test_3_blocks_variant_352_edges_8();
  test_3_blocks_variant_353_edges_8();
  test_3_blocks_variant_354_edges_8();
  test_3_blocks_variant_355_edges_8();
  test_3_blocks_variant_356_edges_8();
  test_3_blocks_variant_357_edges_8();
  test_3_blocks_variant_358_edges_8();
  test_3_blocks_variant_359_edges_8();
  test_3_blocks_variant_360_edges_8();
  test_3_blocks_variant_361_edges_8();
  test_3_blocks_variant_362_edges_8();
  test_3_blocks_variant_363_edges_8();
  test_3_blocks_variant_364_edges_8();
  test_3_blocks_variant_365_edges_8();
  test_3_blocks_variant_366_edges_8();
  test_3_blocks_variant_367_edges_8();
  test_3_blocks_variant_368_edges_8();
  test_3_blocks_variant_369_edges_8();
  test_3_blocks_variant_370_edges_8();
  test_3_blocks_variant_371_edges_8();
  test_3_blocks_variant_372_edges_8();
  test_3_blocks_variant_373_edges_8();
  test_3_blocks_variant_374_edges_8();
  test_3_blocks_variant_375_edges_8();
  test_3_blocks_variant_376_edges_8();
  test_3_blocks_variant_377_edges_8();
  test_3_blocks_variant_378_edges_8();
  test_3_blocks_variant_379_edges_8();
  test_3_blocks_variant_380_edges_8();
  test_3_blocks_variant_381_edges_8();
  test_3_blocks_variant_382_edges_8();
  test_3_blocks_variant_383_edges_8();
  test_3_blocks_variant_384_edges_8();
  test_3_blocks_variant_385_edges_8();
  test_3_blocks_variant_386_edges_8();
  test_3_blocks_variant_387_edges_8();
  test_3_blocks_variant_388_edges_8();
  test_3_blocks_variant_389_edges_8();
  test_3_blocks_variant_390_edges_8();
  test_3_blocks_variant_391_edges_8();
  test_3_blocks_variant_392_edges_8();
  test_3_blocks_variant_393_edges_8();
  test_3_blocks_variant_394_edges_8();
  test_3_blocks_variant_395_edges_8();
  test_3_blocks_variant_396_edges_8();
  test_3_blocks_variant_397_edges_8();
  test_3_blocks_variant_398_edges_8();
  test_3_blocks_variant_399_edges_8();
  test_3_blocks_variant_400_edges_8();
  test_3_blocks_variant_401_edges_8();
  test_3_blocks_variant_402_edges_8();
  test_3_blocks_variant_403_edges_8();
  test_3_blocks_variant_404_edges_8();
  test_3_blocks_variant_405_edges_8();
  test_3_blocks_variant_406_edges_8();
  test_3_blocks_variant_407_edges_8();
  test_3_blocks_variant_408_edges_8();
  test_3_blocks_variant_409_edges_8();
  test_3_blocks_variant_410_edges_8();
  test_3_blocks_variant_411_edges_8();
  test_3_blocks_variant_412_edges_8();
  test_3_blocks_variant_413_edges_8();
  test_3_blocks_variant_414_edges_8();
  test_3_blocks_variant_415_edges_8();
  test_3_blocks_variant_416_edges_8();
  test_3_blocks_variant_417_edges_8();
  test_3_blocks_variant_418_edges_8();
  test_3_blocks_variant_419_edges_8();
  test_3_blocks_variant_420_edges_8();
  test_3_blocks_variant_421_edges_8();
  test_3_blocks_variant_422_edges_8();
  test_3_blocks_variant_423_edges_8();
  test_3_blocks_variant_424_edges_8();
  test_3_blocks_variant_425_edges_8();
  test_3_blocks_variant_426_edges_8();
  test_3_blocks_variant_427_edges_8();
  test_3_blocks_variant_428_edges_8();
  test_3_blocks_variant_429_edges_8();
  test_3_blocks_variant_430_edges_8();
  test_3_blocks_variant_431_edges_8();
  test_3_blocks_variant_432_edges_8();
  test_3_blocks_variant_433_edges_8();
  test_3_blocks_variant_434_edges_8();
  test_3_blocks_variant_435_edges_8();
  test_3_blocks_variant_436_edges_8();
  test_3_blocks_variant_437_edges_8();
  test_3_blocks_variant_438_edges_8();
  test_3_blocks_variant_439_edges_8();
  test_3_blocks_variant_440_edges_8();
  test_3_blocks_variant_441_edges_8();
  test_3_blocks_variant_442_edges_8();
  test_3_blocks_variant_443_edges_8();
  test_3_blocks_variant_444_edges_8();
  test_3_blocks_variant_445_edges_8();
  test_3_blocks_variant_446_edges_8();
  test_3_blocks_variant_447_edges_8();
  test_3_blocks_variant_448_edges_8();
  test_3_blocks_variant_449_edges_8();
  test_3_blocks_variant_450_edges_8();
  test_3_blocks_variant_451_edges_8();
  test_3_blocks_variant_452_edges_8();
  test_3_blocks_variant_453_edges_8();
  test_3_blocks_variant_454_edges_8();
  test_3_blocks_variant_455_edges_8();
  test_3_blocks_variant_456_edges_8();
  test_3_blocks_variant_457_edges_8();
  test_3_blocks_variant_458_edges_8();
  test_3_blocks_variant_459_edges_8();
  test_3_blocks_variant_460_edges_8();
  test_3_blocks_variant_461_edges_8();
  test_3_blocks_variant_462_edges_8();
  test_3_blocks_variant_463_edges_8();
  test_3_blocks_variant_464_edges_8();
  test_3_blocks_variant_465_edges_8();
  test_3_blocks_variant_466_edges_8();
  test_3_blocks_variant_467_edges_8();
  test_3_blocks_variant_468_edges_8();
  test_3_blocks_variant_469_edges_8();
  test_3_blocks_variant_470_edges_8();
  test_3_blocks_variant_471_edges_8();
  test_3_blocks_variant_472_edges_8();
  test_3_blocks_variant_473_edges_8();
  test_3_blocks_variant_474_edges_8();
  test_3_blocks_variant_475_edges_8();
  test_3_blocks_variant_476_edges_8();
  test_3_blocks_variant_477_edges_8();
  test_3_blocks_variant_478_edges_8();
  test_3_blocks_variant_479_edges_8();
  test_3_blocks_variant_480_edges_8();
  test_3_blocks_variant_481_edges_8();
  test_3_blocks_variant_482_edges_8();
  test_3_blocks_variant_483_edges_8();
  test_3_blocks_variant_484_edges_8();
  test_3_blocks_variant_485_edges_8();
  test_3_blocks_variant_486_edges_8();
  test_3_blocks_variant_487_edges_8();
  test_3_blocks_variant_488_edges_8();
  test_3_blocks_variant_489_edges_8();
  test_3_blocks_variant_490_edges_8();
  test_3_blocks_variant_491_edges_8();
  test_3_blocks_variant_492_edges_8();
  test_3_blocks_variant_493_edges_8();
  test_3_blocks_variant_494_edges_8();
  test_3_blocks_variant_495_edges_8();
  test_3_blocks_variant_496_edges_8();
  test_3_blocks_variant_497_edges_8();
  test_3_blocks_variant_498_edges_8();
  test_3_blocks_variant_499_edges_8();
  test_3_blocks_variant_500_edges_8();
  test_3_blocks_variant_501_edges_8();
  test_3_blocks_variant_502_edges_8();
  test_3_blocks_variant_503_edges_8();
  test_3_blocks_variant_504_edges_8();
  test_3_blocks_variant_505_edges_8();
  test_3_blocks_variant_506_edges_8();
  test_3_blocks_variant_507_edges_8();
  test_3_blocks_variant_508_edges_8();
  test_3_blocks_variant_509_edges_8();
  test_3_blocks_variant_510_edges_8();
  test_3_blocks_variant_511_edges_8();
  test_3_blocks_variant_512_edges_8();
  test_3_blocks_variant_513_edges_8();
  test_3_blocks_variant_514_edges_8();
  test_3_blocks_variant_515_edges_8();
  test_3_blocks_variant_516_edges_8();
  test_3_blocks_variant_517_edges_8();
  test_3_blocks_variant_518_edges_8();
  test_3_blocks_variant_519_edges_9();
  test_3_blocks_variant_520_edges_9();
  test_3_blocks_variant_521_edges_9();
  test_3_blocks_variant_522_edges_9();
  test_3_blocks_variant_523_edges_9();
  test_3_blocks_variant_524_edges_9();
  test_3_blocks_variant_525_edges_9();
  test_3_blocks_variant_526_edges_9();
  test_3_blocks_variant_527_edges_9();
  test_3_blocks_variant_528_edges_9();
  test_3_blocks_variant_529_edges_9();
  test_3_blocks_variant_530_edges_9();
  test_3_blocks_variant_531_edges_9();
  test_3_blocks_variant_532_edges_9();
  test_3_blocks_variant_533_edges_9();
  test_3_blocks_variant_534_edges_9();
  test_3_blocks_variant_535_edges_9();
  test_3_blocks_variant_536_edges_9();
  test_3_blocks_variant_537_edges_9();
  test_3_blocks_variant_538_edges_9();
  test_3_blocks_variant_539_edges_9();
  test_3_blocks_variant_540_edges_9();
  test_3_blocks_variant_541_edges_9();
  test_3_blocks_variant_542_edges_9();
  test_3_blocks_variant_543_edges_9();
  test_3_blocks_variant_544_edges_9();
  test_3_blocks_variant_545_edges_9();
  test_3_blocks_variant_546_edges_9();
  test_3_blocks_variant_547_edges_9();
  test_3_blocks_variant_548_edges_9();
  test_3_blocks_variant_549_edges_9();
  test_3_blocks_variant_550_edges_9();
  test_3_blocks_variant_551_edges_9();
  test_3_blocks_variant_552_edges_9();
  test_3_blocks_variant_553_edges_9();
  test_3_blocks_variant_554_edges_9();
  test_3_blocks_variant_555_edges_9();
  test_3_blocks_variant_556_edges_9();
  test_3_blocks_variant_557_edges_9();
  test_3_blocks_variant_558_edges_9();
  test_3_blocks_variant_559_edges_9();
  test_3_blocks_variant_560_edges_9();
  test_3_blocks_variant_561_edges_9();
  test_3_blocks_variant_562_edges_9();
  test_3_blocks_variant_563_edges_9();
  test_3_blocks_variant_564_edges_9();
  test_3_blocks_variant_565_edges_9();
  test_3_blocks_variant_566_edges_9();
  test_3_blocks_variant_567_edges_9();
  test_3_blocks_variant_568_edges_9();
  test_3_blocks_variant_569_edges_9();
  test_3_blocks_variant_570_edges_9();
  test_3_blocks_variant_571_edges_9();
  test_3_blocks_variant_572_edges_9();
  test_3_blocks_variant_573_edges_9();
  test_3_blocks_variant_574_edges_9();
  test_3_blocks_variant_575_edges_9();
  test_3_blocks_variant_576_edges_9();
  test_3_blocks_variant_577_edges_9();
  test_3_blocks_variant_578_edges_9();
  test_3_blocks_variant_579_edges_9();
  test_3_blocks_variant_580_edges_9();
  test_3_blocks_variant_581_edges_9();
  test_3_blocks_variant_582_edges_9();
  test_3_blocks_variant_583_edges_9();
  test_3_blocks_variant_584_edges_9();
  test_3_blocks_variant_585_edges_9();
  test_3_blocks_variant_586_edges_9();
  test_3_blocks_variant_587_edges_9();
  test_3_blocks_variant_588_edges_9();
  test_3_blocks_variant_589_edges_9();
  test_3_blocks_variant_590_edges_9();
  test_3_blocks_variant_591_edges_9();
  test_3_blocks_variant_592_edges_9();
  test_3_blocks_variant_593_edges_9();
  test_3_blocks_variant_594_edges_9();
  test_3_blocks_variant_595_edges_9();
  test_3_blocks_variant_596_edges_9();
  test_3_blocks_variant_597_edges_9();
  test_3_blocks_variant_598_edges_9();
  test_3_blocks_variant_599_edges_9();
  test_3_blocks_variant_600_edges_9();
  test_3_blocks_variant_601_edges_9();
  test_3_blocks_variant_602_edges_9();
  test_3_blocks_variant_603_edges_9();
  test_3_blocks_variant_604_edges_9();
  test_3_blocks_variant_605_edges_9();
  test_3_blocks_variant_606_edges_9();
  test_3_blocks_variant_607_edges_9();
  test_3_blocks_variant_608_edges_9();
  test_3_blocks_variant_609_edges_9();
  test_3_blocks_variant_610_edges_9();
  test_3_blocks_variant_611_edges_9();
  test_3_blocks_variant_612_edges_9();
  test_3_blocks_variant_613_edges_9();
  test_3_blocks_variant_614_edges_9();
  test_3_blocks_variant_615_edges_9();
  test_3_blocks_variant_616_edges_9();
  test_3_blocks_variant_617_edges_9();
  test_3_blocks_variant_618_edges_9();
  test_3_blocks_variant_619_edges_9();
  test_3_blocks_variant_620_edges_9();
  test_3_blocks_variant_621_edges_9();
  test_3_blocks_variant_622_edges_9();
  test_3_blocks_variant_623_edges_9();
  test_3_blocks_variant_624_edges_9();
  test_3_blocks_variant_625_edges_9();
  test_3_blocks_variant_626_edges_9();
  test_3_blocks_variant_627_edges_9();
  test_3_blocks_variant_628_edges_9();
  test_3_blocks_variant_629_edges_9();
  test_3_blocks_variant_630_edges_9();
  test_3_blocks_variant_631_edges_9();
  test_3_blocks_variant_632_edges_9();
  test_3_blocks_variant_633_edges_9();
  test_3_blocks_variant_634_edges_9();
  test_3_blocks_variant_635_edges_9();
  test_3_blocks_variant_636_edges_9();
  test_3_blocks_variant_637_edges_9();
  test_3_blocks_variant_638_edges_9();
  test_3_blocks_variant_639_edges_9();
  test_3_blocks_variant_640_edges_9();
  test_3_blocks_variant_641_edges_9();
  test_3_blocks_variant_642_edges_9();
  test_3_blocks_variant_643_edges_9();
  test_3_blocks_variant_644_edges_9();
  test_3_blocks_variant_645_edges_9();
  test_3_blocks_variant_646_edges_9();
  test_3_blocks_variant_647_edges_9();
  test_3_blocks_variant_648_edges_9();
  test_3_blocks_variant_649_edges_9();
  test_3_blocks_variant_650_edges_9();
  test_3_blocks_variant_651_edges_9();
  test_3_blocks_variant_652_edges_9();
  test_3_blocks_variant_653_edges_9();
  test_3_blocks_variant_654_edges_9();
  test_3_blocks_variant_655_edges_9();
  test_3_blocks_variant_656_edges_9();
  test_3_blocks_variant_657_edges_9();
  test_3_blocks_variant_658_edges_9();
  test_3_blocks_variant_659_edges_9();
  test_3_blocks_variant_660_edges_9();
  test_3_blocks_variant_661_edges_9();
  test_3_blocks_variant_662_edges_9();
  test_3_blocks_variant_663_edges_9();
  test_3_blocks_variant_664_edges_9();
  test_3_blocks_variant_665_edges_9();
  test_3_blocks_variant_666_edges_9();
  test_3_blocks_variant_667_edges_9();
  test_3_blocks_variant_668_edges_9();
  test_3_blocks_variant_669_edges_9();
  test_3_blocks_variant_670_edges_9();
  test_3_blocks_variant_671_edges_9();
  test_3_blocks_variant_672_edges_9();
  test_3_blocks_variant_673_edges_9();
  test_3_blocks_variant_674_edges_9();
  test_3_blocks_variant_675_edges_9();
  test_3_blocks_variant_676_edges_9();
  test_3_blocks_variant_677_edges_9();
  test_3_blocks_variant_678_edges_9();
  test_3_blocks_variant_679_edges_9();
  test_3_blocks_variant_680_edges_9();
  test_3_blocks_variant_681_edges_9();
  test_3_blocks_variant_682_edges_9();
  test_3_blocks_variant_683_edges_9();
  test_3_blocks_variant_684_edges_9();
  test_3_blocks_variant_685_edges_9();
  test_3_blocks_variant_686_edges_9();
  test_3_blocks_variant_687_edges_9();
  test_3_blocks_variant_688_edges_9();
  test_3_blocks_variant_689_edges_9();
  test_3_blocks_variant_690_edges_9();
  test_3_blocks_variant_691_edges_9();
  test_3_blocks_variant_692_edges_9();
  test_3_blocks_variant_693_edges_9();
  test_3_blocks_variant_694_edges_9();
  test_3_blocks_variant_695_edges_9();
  test_3_blocks_variant_696_edges_9();
  test_3_blocks_variant_697_edges_9();
  test_3_blocks_variant_698_edges_9();
  test_3_blocks_variant_699_edges_9();
  test_3_blocks_variant_700_edges_9();
  test_3_blocks_variant_701_edges_9();
  test_3_blocks_variant_702_edges_9();
  test_3_blocks_variant_703_edges_9();
  test_3_blocks_variant_704_edges_9();
  test_3_blocks_variant_705_edges_9();
  test_3_blocks_variant_706_edges_9();
  test_3_blocks_variant_707_edges_10();
  test_3_blocks_variant_708_edges_10();
  test_3_blocks_variant_709_edges_10();
  test_3_blocks_variant_710_edges_10();
  test_3_blocks_variant_711_edges_10();
  test_3_blocks_variant_712_edges_10();
  test_3_blocks_variant_713_edges_10();
  test_3_blocks_variant_714_edges_10();
  test_3_blocks_variant_715_edges_10();
  test_3_blocks_variant_716_edges_10();
  test_3_blocks_variant_717_edges_10();
  test_3_blocks_variant_718_edges_10();
  test_3_blocks_variant_719_edges_10();
  test_3_blocks_variant_720_edges_10();
  test_3_blocks_variant_721_edges_10();
  test_3_blocks_variant_722_edges_10();
  test_3_blocks_variant_723_edges_10();
  test_3_blocks_variant_724_edges_10();
  test_3_blocks_variant_725_edges_10();
  test_3_blocks_variant_726_edges_10();
  test_3_blocks_variant_727_edges_10();
  test_3_blocks_variant_728_edges_10();
  test_3_blocks_variant_729_edges_10();
  test_3_blocks_variant_730_edges_10();
  test_3_blocks_variant_731_edges_10();
  test_3_blocks_variant_732_edges_10();
  test_3_blocks_variant_733_edges_10();
  test_3_blocks_variant_734_edges_10();
  test_3_blocks_variant_735_edges_10();
  test_3_blocks_variant_736_edges_10();
  test_3_blocks_variant_737_edges_10();
  test_3_blocks_variant_738_edges_10();
  test_3_blocks_variant_739_edges_10();
  test_3_blocks_variant_740_edges_10();
  test_3_blocks_variant_741_edges_10();
  test_3_blocks_variant_742_edges_10();
  test_3_blocks_variant_743_edges_10();
  test_3_blocks_variant_744_edges_10();
  test_3_blocks_variant_745_edges_10();
  test_3_blocks_variant_746_edges_10();
  test_3_blocks_variant_747_edges_10();
  test_3_blocks_variant_748_edges_10();
  test_3_blocks_variant_749_edges_10();
  test_3_blocks_variant_750_edges_10();
  test_3_blocks_variant_751_edges_10();
  test_3_blocks_variant_752_edges_10();
  test_3_blocks_variant_753_edges_10();
  test_3_blocks_variant_754_edges_10();
  test_3_blocks_variant_755_edges_10();
  test_3_blocks_variant_756_edges_10();
  test_3_blocks_variant_757_edges_10();
  test_3_blocks_variant_758_edges_10();
  test_3_blocks_variant_759_edges_10();
  test_3_blocks_variant_760_edges_10();
  test_3_blocks_variant_761_edges_10();
  test_3_blocks_variant_762_edges_10();
  test_3_blocks_variant_763_edges_10();
  test_3_blocks_variant_764_edges_10();
  test_3_blocks_variant_765_edges_10();
  test_3_blocks_variant_766_edges_10();
  test_3_blocks_variant_767_edges_10();
  test_3_blocks_variant_768_edges_10();
  test_3_blocks_variant_769_edges_10();
  test_3_blocks_variant_770_edges_10();
  test_3_blocks_variant_771_edges_10();
  test_3_blocks_variant_772_edges_10();
  test_3_blocks_variant_773_edges_10();
  test_3_blocks_variant_774_edges_10();
  test_3_blocks_variant_775_edges_10();
  test_3_blocks_variant_776_edges_10();
  test_3_blocks_variant_777_edges_10();
  test_3_blocks_variant_778_edges_10();
  test_3_blocks_variant_779_edges_10();
  test_3_blocks_variant_780_edges_10();
  test_3_blocks_variant_781_edges_10();
  test_3_blocks_variant_782_edges_10();
  test_3_blocks_variant_783_edges_10();
  test_3_blocks_variant_784_edges_10();
  test_3_blocks_variant_785_edges_10();
  test_3_blocks_variant_786_edges_10();
  test_3_blocks_variant_787_edges_10();
  test_3_blocks_variant_788_edges_10();
  test_3_blocks_variant_789_edges_10();
  test_3_blocks_variant_790_edges_10();
  test_3_blocks_variant_791_edges_10();
  test_3_blocks_variant_792_edges_10();
  test_3_blocks_variant_793_edges_10();
  test_3_blocks_variant_794_edges_10();
  test_3_blocks_variant_795_edges_10();
  test_3_blocks_variant_796_edges_10();
  test_3_blocks_variant_797_edges_10();
  test_3_blocks_variant_798_edges_10();
  test_3_blocks_variant_799_edges_10();
  test_3_blocks_variant_800_edges_10();
  test_3_blocks_variant_801_edges_10();
  test_3_blocks_variant_802_edges_10();
  test_3_blocks_variant_803_edges_10();
  test_3_blocks_variant_804_edges_10();
  test_3_blocks_variant_805_edges_10();
  test_3_blocks_variant_806_edges_11();
  test_3_blocks_variant_807_edges_11();
  test_3_blocks_variant_808_edges_11();
  test_3_blocks_variant_809_edges_11();
  test_3_blocks_variant_810_edges_11();
  test_3_blocks_variant_811_edges_11();
  test_3_blocks_variant_812_edges_11();
  test_3_blocks_variant_813_edges_11();
  test_3_blocks_variant_814_edges_11();
  test_3_blocks_variant_815_edges_11();
  test_3_blocks_variant_816_edges_11();
  test_3_blocks_variant_817_edges_11();
  test_3_blocks_variant_818_edges_11();
  test_3_blocks_variant_819_edges_11();
  test_3_blocks_variant_820_edges_11();
  test_3_blocks_variant_821_edges_11();
  test_3_blocks_variant_822_edges_11();
  test_3_blocks_variant_823_edges_11();
  test_3_blocks_variant_824_edges_11();
  test_3_blocks_variant_825_edges_11();
  test_3_blocks_variant_826_edges_11();
  test_3_blocks_variant_827_edges_11();
  test_3_blocks_variant_828_edges_11();
  test_3_blocks_variant_829_edges_11();
  test_3_blocks_variant_830_edges_11();
  test_3_blocks_variant_831_edges_11();
  test_3_blocks_variant_832_edges_11();
  test_3_blocks_variant_833_edges_11();
  test_3_blocks_variant_834_edges_11();
  test_3_blocks_variant_835_edges_11();
  test_3_blocks_variant_836_edges_11();
  test_3_blocks_variant_837_edges_11();
  test_3_blocks_variant_838_edges_11();
  test_3_blocks_variant_839_edges_11();
  test_3_blocks_variant_840_edges_12();
  test_3_blocks_variant_841_edges_12();
  test_3_blocks_variant_842_edges_12();
  test_3_blocks_variant_843_edges_12();
  test_3_blocks_variant_844_edges_12();
  test_3_blocks_variant_845_edges_12();
  test_3_blocks_variant_846_edges_12();
  test_3_blocks_variant_847_edges_13();
  return 0;
}



// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void __libc_csu_init(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  EVP_PKEY_CTX *in_stack_ffffffe4;
  
  _init(in_stack_ffffffe4);
  iVar1 = 0;
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[iVar1])(param_1,param_2,param_3);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 1);
  return;
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


