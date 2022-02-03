typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef enum Elf_SectionHeaderType_ARM {
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
    SHT_GNU_versym=1879048191,
    SHT_ARM_EXIDX=1879048193,
    SHT_ARM_PREEMPTMAP=1879048194,
    SHT_ARM_ATTRIBUTES=1879048195,
    SHT_ARM_DEBUGOVERLAY=1879048196,
    SHT_ARM_OVERLAYSECTION=1879048197
} Elf_SectionHeaderType_ARM;

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

typedef enum Elf_ProgramHeaderType_ARM {
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
    PT_GNU_RELRO=1685382482,
    PT_ARM_EXIDX=1879048192
} Elf_ProgramHeaderType_ARM;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_ARM p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_ARM sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef enum Elf32_DynTag_ARM {
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
} Elf32_DynTag_ARM;

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

typedef struct Elf32_Dyn_ARM Elf32_Dyn_ARM, *PElf32_Dyn_ARM;

struct Elf32_Dyn_ARM {
    enum Elf32_DynTag_ARM d_tag;
    dword d_val;
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




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)(undefined *)0x0)();
  return iVar1;
}



void __libc_start_main(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void abort(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void _start(undefined4 param_1)

{
  undefined4 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000004,__libc_csu_init,__libc_csu_fini,param_1)
  ;
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x00008320)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00008358)
// WARNING: Removing unreachable block (ram,0x00008348)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00008384)
// WARNING: Removing unreachable block (ram,0x00008390)
// WARNING: Removing unreachable block (ram,0x00008394)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_9846 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_9846 = 1;
  return;
}



// WARNING: Removing unreachable block (ram,0x000083f0)

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



undefined * do_switch(undefined4 param_1)

{
  undefined *puVar1;
  
  switch(param_1) {
  case 0:
    printf("Hmm...");
  case 1:
    puVar1 = &DAT_0000c344;
    break;
  case 2:
    puVar1 = &DAT_0000c348;
    break;
  case 3:
    puVar1 = &DAT_0000c34c;
    break;
  case 4:
    puVar1 = &DAT_0000c350;
    break;
  case 5:
    puVar1 = &DAT_0000c354;
    break;
  case 6:
    puVar1 = &DAT_0000c358;
    break;
  case 7:
    puVar1 = &DAT_0000c35c;
    break;
  case 8:
    puVar1 = &DAT_0000c360;
    break;
  case 9:
    puVar1 = &DAT_0000c364;
    break;
  case 10:
    puVar1 = &DAT_0000c368;
    break;
  case 0xb:
    puVar1 = &DAT_0000c36c;
    break;
  case 0xc:
    puVar1 = &DAT_0000c370;
    break;
  case 0xd:
    puVar1 = &DAT_0000c374;
    break;
  case 0xe:
    puVar1 = &DAT_0000c378;
    break;
  case 0xf:
    puVar1 = &DAT_0000c37c;
    break;
  case 0x10:
    puVar1 = &DAT_0000c380;
    break;
  case 0x11:
    puVar1 = &DAT_0000c384;
    break;
  case 0x12:
    puVar1 = &DAT_0000c388;
    break;
  case 0x13:
    puVar1 = &DAT_0000c38c;
    break;
  case 0x14:
    puVar1 = &DAT_0000c390;
    break;
  case 0x15:
    puVar1 = &DAT_0000c394;
    break;
  case 0x16:
    puVar1 = &DAT_0000c398;
    break;
  case 0x17:
    puVar1 = &DAT_0000c39c;
    break;
  case 0x18:
    puVar1 = &DAT_0000c3a0;
    break;
  case 0x19:
    puVar1 = &DAT_0000c3a4;
    break;
  case 0x1a:
    puVar1 = &DAT_0000c3a8;
    break;
  case 0x1b:
    puVar1 = &DAT_0000c3ac;
    break;
  case 0x1c:
    puVar1 = &DAT_0000c3b0;
    break;
  case 0x1d:
    puVar1 = &DAT_0000c3b4;
    break;
  case 0x1e:
    puVar1 = &DAT_0000c3b8;
    break;
  case 0x1f:
    puVar1 = &DAT_0000c3bc;
    break;
  case 0x20:
    puVar1 = &DAT_0000c3c0;
    break;
  case 0x21:
    printf("Hmm...");
  case 0x22:
    puVar1 = &DAT_0000c3c4;
    break;
  case 0x23:
    puVar1 = &DAT_0000c3c8;
    break;
  case 0x24:
    puVar1 = &DAT_0000c3cc;
    break;
  case 0x25:
    puVar1 = &DAT_0000c3d0;
    break;
  case 0x26:
    puVar1 = &DAT_0000c3d4;
    break;
  case 0x27:
    puVar1 = &DAT_0000c3d8;
    break;
  case 0x28:
    puVar1 = &DAT_0000c3dc;
    break;
  case 0x29:
    puVar1 = &DAT_0000c3e0;
    break;
  case 0x2a:
    puVar1 = &DAT_0000c3e4;
    break;
  case 0x2b:
    puVar1 = &DAT_0000c3e8;
    break;
  case 0x2c:
    puVar1 = &DAT_0000c3ec;
    break;
  case 0x2d:
    puVar1 = &DAT_0000c3f0;
    break;
  case 0x2e:
    puVar1 = &DAT_0000c3f4;
    break;
  case 0x2f:
    puVar1 = &DAT_0000c3f8;
    break;
  case 0x30:
    puVar1 = &DAT_0000c3fc;
    break;
  case 0x31:
    puVar1 = &DAT_0000c400;
    break;
  case 0x32:
    puVar1 = &DAT_0000c404;
    break;
  case 0x33:
    puVar1 = &DAT_0000c408;
    break;
  case 0x34:
    puVar1 = &DAT_0000c40c;
    break;
  case 0x35:
    puVar1 = &DAT_0000c410;
    break;
  case 0x36:
    puVar1 = &DAT_0000c414;
    break;
  case 0x37:
    puVar1 = &DAT_0000c418;
    break;
  case 0x38:
    puVar1 = &DAT_0000c41c;
    break;
  case 0x39:
    puVar1 = &DAT_0000c420;
    break;
  case 0x3a:
    puVar1 = &DAT_0000c424;
    break;
  case 0x3b:
    puVar1 = &DAT_0000c428;
    break;
  case 0x3c:
    puVar1 = &DAT_0000c42c;
    break;
  case 0x3d:
    puVar1 = &DAT_0000c430;
    break;
  case 0x3e:
    puVar1 = &DAT_0000c434;
    break;
  case 0x3f:
    puVar1 = &DAT_0000c438;
    break;
  case 0x40:
    puVar1 = &DAT_0000c43c;
    break;
  case 0x41:
    puVar1 = &DAT_0000c440;
    break;
  case 0x42:
    printf("Hmm...");
  case 0x43:
    puVar1 = &DAT_0000c444;
    break;
  case 0x44:
    puVar1 = &DAT_0000c448;
    break;
  case 0x45:
    puVar1 = &DAT_0000c44c;
    break;
  case 0x46:
    puVar1 = &DAT_0000c450;
    break;
  case 0x47:
    puVar1 = &DAT_0000c454;
    break;
  case 0x48:
    puVar1 = &DAT_0000c458;
    break;
  case 0x49:
    puVar1 = &DAT_0000c45c;
    break;
  case 0x4a:
    puVar1 = &DAT_0000c460;
    break;
  case 0x4b:
    puVar1 = &DAT_0000c464;
    break;
  case 0x4c:
    puVar1 = &DAT_0000c468;
    break;
  case 0x4d:
    puVar1 = &DAT_0000c46c;
    break;
  case 0x4e:
    puVar1 = &DAT_0000c470;
    break;
  case 0x4f:
    puVar1 = &DAT_0000c474;
    break;
  case 0x50:
    puVar1 = &DAT_0000c478;
    break;
  case 0x51:
    puVar1 = &DAT_0000c47c;
    break;
  case 0x52:
    puVar1 = &DAT_0000c480;
    break;
  case 0x53:
    puVar1 = &DAT_0000c484;
    break;
  case 0x54:
    puVar1 = &DAT_0000c488;
    break;
  case 0x55:
    puVar1 = &DAT_0000c48c;
    break;
  case 0x56:
    puVar1 = &DAT_0000c490;
    break;
  case 0x57:
    puVar1 = &DAT_0000c494;
    break;
  case 0x58:
    puVar1 = &DAT_0000c498;
    break;
  case 0x59:
    puVar1 = &DAT_0000c49c;
    break;
  case 0x5a:
    puVar1 = &DAT_0000c4a0;
    break;
  case 0x5b:
    puVar1 = &DAT_0000c4a4;
    break;
  case 0x5c:
    puVar1 = &DAT_0000c4a8;
    break;
  case 0x5d:
    puVar1 = &DAT_0000c4ac;
    break;
  case 0x5e:
    puVar1 = &DAT_0000c4b0;
    break;
  case 0x5f:
    puVar1 = &DAT_0000c4b4;
    break;
  case 0x60:
    puVar1 = &DAT_0000c4b8;
    break;
  case 0x61:
    puVar1 = &DAT_0000c4bc;
    break;
  case 0x62:
    puVar1 = &DAT_0000c4c0;
    break;
  case 99:
    printf("Hmm...");
  case 100:
    puVar1 = &DAT_0000c4c4;
    break;
  case 0x65:
    puVar1 = &DAT_0000c4c8;
    break;
  case 0x66:
    puVar1 = &DAT_0000c4cc;
    break;
  case 0x67:
    puVar1 = &DAT_0000c4d0;
    break;
  case 0x68:
    puVar1 = &DAT_0000c4d4;
    break;
  case 0x69:
    puVar1 = &DAT_0000c4d8;
    break;
  case 0x6a:
    puVar1 = &DAT_0000c4dc;
    break;
  case 0x6b:
    puVar1 = &DAT_0000c4e0;
    break;
  case 0x6c:
    puVar1 = &DAT_0000c4e4;
    break;
  case 0x6d:
    puVar1 = &DAT_0000c4e8;
    break;
  case 0x6e:
    puVar1 = &DAT_0000c4ec;
    break;
  case 0x6f:
    puVar1 = &DAT_0000c4f0;
    break;
  case 0x70:
    puVar1 = &DAT_0000c4f4;
    break;
  case 0x71:
    puVar1 = &DAT_0000c4f8;
    break;
  case 0x72:
    puVar1 = &DAT_0000c4fc;
    break;
  case 0x73:
    puVar1 = &DAT_0000c500;
    break;
  case 0x74:
    puVar1 = &DAT_0000c504;
    break;
  case 0x75:
    puVar1 = &DAT_0000c508;
    break;
  case 0x76:
    puVar1 = &DAT_0000c50c;
    break;
  case 0x77:
    puVar1 = &DAT_0000c510;
    break;
  case 0x78:
    puVar1 = &DAT_0000c514;
    break;
  case 0x79:
    puVar1 = &DAT_0000c518;
    break;
  case 0x7a:
    puVar1 = &DAT_0000c51c;
    break;
  case 0x7b:
    puVar1 = &DAT_0000c520;
    break;
  case 0x7c:
    puVar1 = &DAT_0000c524;
    break;
  case 0x7d:
    puVar1 = &DAT_0000c528;
    break;
  case 0x7e:
    puVar1 = &DAT_0000c52c;
    break;
  case 0x7f:
    puVar1 = &DAT_0000c530;
    break;
  case 0x80:
    puVar1 = &DAT_0000c534;
    break;
  case 0x81:
    puVar1 = &DAT_0000c538;
    break;
  case 0x82:
    puVar1 = &DAT_0000c53c;
    break;
  case 0x83:
    puVar1 = &DAT_0000c540;
    break;
  case 0x84:
    printf("Hmm...");
  case 0x85:
    puVar1 = &DAT_0000c544;
    break;
  case 0x86:
    puVar1 = &DAT_0000c548;
    break;
  case 0x87:
    puVar1 = &DAT_0000c54c;
    break;
  case 0x88:
    puVar1 = &DAT_0000c550;
    break;
  case 0x89:
    puVar1 = &DAT_0000c554;
    break;
  case 0x8a:
    puVar1 = &DAT_0000c558;
    break;
  case 0x8b:
    puVar1 = &DAT_0000c55c;
    break;
  case 0x8c:
    puVar1 = &DAT_0000c560;
    break;
  case 0x8d:
    puVar1 = &DAT_0000c564;
    break;
  case 0x8e:
    puVar1 = &DAT_0000c568;
    break;
  case 0x8f:
    puVar1 = &DAT_0000c56c;
    break;
  case 0x90:
    puVar1 = &DAT_0000c570;
    break;
  case 0x91:
    puVar1 = &DAT_0000c574;
    break;
  case 0x92:
    puVar1 = &DAT_0000c578;
    break;
  case 0x93:
    puVar1 = &DAT_0000c57c;
    break;
  case 0x94:
    puVar1 = &DAT_0000c580;
    break;
  case 0x95:
    puVar1 = &DAT_0000c584;
    break;
  case 0x96:
    puVar1 = &DAT_0000c588;
    break;
  case 0x97:
    puVar1 = &DAT_0000c58c;
    break;
  case 0x98:
    puVar1 = &DAT_0000c590;
    break;
  case 0x99:
    puVar1 = &DAT_0000c594;
    break;
  case 0x9a:
    puVar1 = &DAT_0000c598;
    break;
  case 0x9b:
    puVar1 = &DAT_0000c59c;
    break;
  case 0x9c:
    puVar1 = &DAT_0000c5a0;
    break;
  case 0x9d:
    puVar1 = &DAT_0000c5a4;
    break;
  case 0x9e:
    puVar1 = &DAT_0000c5a8;
    break;
  case 0x9f:
    puVar1 = &DAT_0000c5ac;
    break;
  case 0xa0:
    puVar1 = &DAT_0000c5b0;
    break;
  case 0xa1:
    puVar1 = &DAT_0000c5b4;
    break;
  case 0xa2:
    puVar1 = &DAT_0000c5b8;
    break;
  case 0xa3:
    puVar1 = &DAT_0000c5bc;
    break;
  case 0xa4:
    puVar1 = &DAT_0000c5c0;
    break;
  case 0xa5:
    printf("Hmm...");
  case 0xa6:
    puVar1 = &DAT_0000c5c4;
    break;
  case 0xa7:
    puVar1 = &DAT_0000c5c8;
    break;
  case 0xa8:
    puVar1 = &DAT_0000c5cc;
    break;
  case 0xa9:
    puVar1 = &DAT_0000c5d0;
    break;
  case 0xaa:
    puVar1 = &DAT_0000c5d4;
    break;
  case 0xab:
    puVar1 = &DAT_0000c5d8;
    break;
  case 0xac:
    puVar1 = &DAT_0000c5dc;
    break;
  case 0xad:
    puVar1 = &DAT_0000c5e0;
    break;
  case 0xae:
    puVar1 = &DAT_0000c5e4;
    break;
  case 0xaf:
    puVar1 = &DAT_0000c5e8;
    break;
  case 0xb0:
    puVar1 = &DAT_0000c5ec;
    break;
  case 0xb1:
    puVar1 = &DAT_0000c5f0;
    break;
  case 0xb2:
    puVar1 = &DAT_0000c5f4;
    break;
  case 0xb3:
    puVar1 = &DAT_0000c5f8;
    break;
  case 0xb4:
    puVar1 = &DAT_0000c5fc;
    break;
  case 0xb5:
    puVar1 = &DAT_0000c600;
    break;
  case 0xb6:
    puVar1 = &DAT_0000c604;
    break;
  case 0xb7:
    puVar1 = &DAT_0000c608;
    break;
  case 0xb8:
    puVar1 = &DAT_0000c60c;
    break;
  case 0xb9:
    puVar1 = &DAT_0000c610;
    break;
  case 0xba:
    puVar1 = &DAT_0000c614;
    break;
  case 0xbb:
    puVar1 = &DAT_0000c618;
    break;
  case 0xbc:
    puVar1 = &DAT_0000c61c;
    break;
  case 0xbd:
    puVar1 = &DAT_0000c620;
    break;
  case 0xbe:
    puVar1 = &DAT_0000c624;
    break;
  case 0xbf:
    puVar1 = &DAT_0000c628;
    break;
  case 0xc0:
    puVar1 = &DAT_0000c62c;
    break;
  case 0xc1:
    puVar1 = &DAT_0000c630;
    break;
  case 0xc2:
    puVar1 = &DAT_0000c634;
    break;
  case 0xc3:
    puVar1 = &DAT_0000c638;
    break;
  case 0xc4:
    puVar1 = &DAT_0000c63c;
    break;
  case 0xc5:
    puVar1 = &DAT_0000c640;
    break;
  case 0xc6:
    printf("Hmm...");
  case 199:
    puVar1 = &DAT_0000c644;
    break;
  case 200:
    puVar1 = &DAT_0000c648;
    break;
  case 0xc9:
    puVar1 = &DAT_0000c64c;
    break;
  case 0xca:
    puVar1 = &DAT_0000c650;
    break;
  case 0xcb:
    puVar1 = &DAT_0000c654;
    break;
  case 0xcc:
    puVar1 = &DAT_0000c658;
    break;
  case 0xcd:
    puVar1 = &DAT_0000c65c;
    break;
  case 0xce:
    puVar1 = &DAT_0000c660;
    break;
  case 0xcf:
    puVar1 = &DAT_0000c664;
    break;
  case 0xd0:
    puVar1 = &DAT_0000c668;
    break;
  case 0xd1:
    puVar1 = &DAT_0000c66c;
    break;
  case 0xd2:
    puVar1 = &DAT_0000c670;
    break;
  case 0xd3:
    puVar1 = &DAT_0000c674;
    break;
  case 0xd4:
    puVar1 = &DAT_0000c678;
    break;
  case 0xd5:
    puVar1 = &DAT_0000c67c;
    break;
  case 0xd6:
    puVar1 = &DAT_0000c680;
    break;
  case 0xd7:
    puVar1 = &DAT_0000c684;
    break;
  case 0xd8:
    puVar1 = &DAT_0000c688;
    break;
  case 0xd9:
    puVar1 = &DAT_0000c68c;
    break;
  case 0xda:
    puVar1 = &DAT_0000c690;
    break;
  case 0xdb:
    puVar1 = &DAT_0000c694;
    break;
  case 0xdc:
    puVar1 = &DAT_0000c698;
    break;
  case 0xdd:
    puVar1 = &DAT_0000c69c;
    break;
  case 0xde:
    puVar1 = &DAT_0000c6a0;
    break;
  case 0xdf:
    puVar1 = &DAT_0000c6a4;
    break;
  case 0xe0:
    puVar1 = &DAT_0000c6a8;
    break;
  case 0xe1:
    puVar1 = &DAT_0000c6ac;
    break;
  case 0xe2:
    puVar1 = &DAT_0000c6b0;
    break;
  case 0xe3:
    puVar1 = &DAT_0000c6b4;
    break;
  case 0xe4:
    puVar1 = &DAT_0000c6b8;
    break;
  case 0xe5:
    puVar1 = &DAT_0000c6bc;
    break;
  case 0xe6:
    puVar1 = &DAT_0000c6c0;
    break;
  case 0xe7:
    printf("Hmm...");
  case 0xe8:
    puVar1 = &DAT_0000c6c4;
    break;
  case 0xe9:
    puVar1 = &DAT_0000c6c8;
    break;
  case 0xea:
    puVar1 = &DAT_0000c6cc;
    break;
  case 0xeb:
    puVar1 = &DAT_0000c6d0;
    break;
  case 0xec:
    puVar1 = &DAT_0000c6d4;
    break;
  case 0xed:
    puVar1 = &DAT_0000c6d8;
    break;
  case 0xee:
    puVar1 = &DAT_0000c6dc;
    break;
  case 0xef:
    puVar1 = &DAT_0000c6e0;
    break;
  case 0xf0:
    puVar1 = &DAT_0000c6e4;
    break;
  case 0xf1:
    puVar1 = &DAT_0000c6e8;
    break;
  case 0xf2:
    puVar1 = &DAT_0000c6ec;
    break;
  case 0xf3:
    puVar1 = &DAT_0000c6f0;
    break;
  case 0xf4:
    puVar1 = &DAT_0000c6f4;
    break;
  case 0xf5:
    puVar1 = &DAT_0000c6f8;
    break;
  case 0xf6:
    puVar1 = &DAT_0000c6fc;
    break;
  case 0xf7:
    puVar1 = &DAT_0000c700;
    break;
  case 0xf8:
    puVar1 = &DAT_0000c704;
    break;
  case 0xf9:
    puVar1 = &DAT_0000c708;
    break;
  case 0xfa:
    puVar1 = &DAT_0000c70c;
    break;
  case 0xfb:
    puVar1 = &DAT_0000c710;
    break;
  case 0xfc:
    puVar1 = &DAT_0000c714;
    break;
  case 0xfd:
    puVar1 = &DAT_0000c718;
    break;
  case 0xfe:
    puVar1 = &DAT_0000c71c;
    break;
  case 0xff:
    puVar1 = &DAT_0000c720;
    break;
  case 0x100:
    puVar1 = &DAT_0000c724;
    break;
  case 0x101:
    puVar1 = &DAT_0000c728;
    break;
  case 0x102:
    puVar1 = &DAT_0000c72c;
    break;
  case 0x103:
    puVar1 = &DAT_0000c730;
    break;
  case 0x104:
    puVar1 = &DAT_0000c734;
    break;
  case 0x105:
    puVar1 = &DAT_0000c738;
    break;
  case 0x106:
    puVar1 = &DAT_0000c73c;
    break;
  case 0x107:
    puVar1 = &DAT_0000c740;
    break;
  case 0x108:
    printf("Hmm...");
  case 0x109:
    puVar1 = &DAT_0000c744;
    break;
  case 0x10a:
    puVar1 = &DAT_0000c748;
    break;
  case 0x10b:
    puVar1 = &DAT_0000c74c;
    break;
  case 0x10c:
    puVar1 = &DAT_0000c750;
    break;
  case 0x10d:
    puVar1 = &DAT_0000c754;
    break;
  case 0x10e:
    puVar1 = &DAT_0000c758;
    break;
  case 0x10f:
    puVar1 = &DAT_0000c75c;
    break;
  case 0x110:
    puVar1 = &DAT_0000c760;
    break;
  case 0x111:
    puVar1 = &DAT_0000c764;
    break;
  case 0x112:
    puVar1 = &DAT_0000c768;
    break;
  case 0x113:
    puVar1 = &DAT_0000c76c;
    break;
  case 0x114:
    puVar1 = &DAT_0000c770;
    break;
  case 0x115:
    puVar1 = &DAT_0000c774;
    break;
  case 0x116:
    puVar1 = &DAT_0000c778;
    break;
  case 0x117:
    puVar1 = &DAT_0000c77c;
    break;
  case 0x118:
    puVar1 = &DAT_0000c780;
    break;
  case 0x119:
    puVar1 = &DAT_0000c784;
    break;
  case 0x11a:
    puVar1 = &DAT_0000c788;
    break;
  case 0x11b:
    puVar1 = &DAT_0000c78c;
    break;
  case 0x11c:
    puVar1 = &DAT_0000c790;
    break;
  case 0x11d:
    puVar1 = &DAT_0000c794;
    break;
  case 0x11e:
    puVar1 = &DAT_0000c798;
    break;
  case 0x11f:
    puVar1 = &DAT_0000c79c;
    break;
  case 0x120:
    puVar1 = &DAT_0000c7a0;
    break;
  case 0x121:
    puVar1 = &DAT_0000c7a4;
    break;
  case 0x122:
    puVar1 = &DAT_0000c7a8;
    break;
  case 0x123:
    puVar1 = &DAT_0000c7ac;
    break;
  case 0x124:
    puVar1 = &DAT_0000c7b0;
    break;
  case 0x125:
    puVar1 = &DAT_0000c7b4;
    break;
  case 0x126:
    puVar1 = &DAT_0000c7b8;
    break;
  case 0x127:
    puVar1 = &DAT_0000c7bc;
    break;
  case 0x128:
    puVar1 = &DAT_0000c7c0;
    break;
  case 0x129:
    printf("Hmm...");
  case 0x12a:
    puVar1 = &DAT_0000c7c4;
    break;
  case 299:
    puVar1 = &DAT_0000c7c8;
    break;
  case 300:
    puVar1 = &DAT_0000c7cc;
    break;
  case 0x12d:
    puVar1 = &DAT_0000c7d0;
    break;
  case 0x12e:
    puVar1 = &DAT_0000c7d4;
    break;
  case 0x12f:
    puVar1 = &DAT_0000c7d8;
    break;
  case 0x130:
    puVar1 = &DAT_0000c7dc;
    break;
  case 0x131:
    puVar1 = &DAT_0000c7e0;
    break;
  case 0x132:
    puVar1 = &DAT_0000c7e4;
    break;
  case 0x133:
    puVar1 = &DAT_0000c7e8;
    break;
  case 0x134:
    puVar1 = &DAT_0000c7ec;
    break;
  case 0x135:
    puVar1 = &DAT_0000c7f0;
    break;
  case 0x136:
    puVar1 = &DAT_0000c7f4;
    break;
  case 0x137:
    puVar1 = &DAT_0000c7f8;
    break;
  case 0x138:
    puVar1 = &DAT_0000c7fc;
    break;
  case 0x139:
    puVar1 = &DAT_0000c800;
    break;
  case 0x13a:
    puVar1 = &DAT_0000c804;
    break;
  case 0x13b:
    puVar1 = &DAT_0000c808;
    break;
  case 0x13c:
    puVar1 = &DAT_0000c80c;
    break;
  case 0x13d:
    puVar1 = &DAT_0000c810;
    break;
  case 0x13e:
    puVar1 = &DAT_0000c814;
    break;
  case 0x13f:
    puVar1 = &DAT_0000c818;
    break;
  case 0x140:
    puVar1 = &DAT_0000c81c;
    break;
  case 0x141:
    puVar1 = &DAT_0000c820;
    break;
  case 0x142:
    puVar1 = &DAT_0000c824;
    break;
  case 0x143:
    puVar1 = &DAT_0000c828;
    break;
  case 0x144:
    puVar1 = &DAT_0000c82c;
    break;
  case 0x145:
    puVar1 = &DAT_0000c830;
    break;
  case 0x146:
    puVar1 = &DAT_0000c834;
    break;
  case 0x147:
    puVar1 = &DAT_0000c838;
    break;
  case 0x148:
    puVar1 = &DAT_0000c83c;
    break;
  case 0x149:
    puVar1 = &DAT_0000c840;
    break;
  case 0x14a:
    printf("Hmm...");
  case 0x14b:
    puVar1 = &DAT_0000c844;
    break;
  case 0x14c:
    puVar1 = &DAT_0000c848;
    break;
  case 0x14d:
    puVar1 = &DAT_0000c84c;
    break;
  case 0x14e:
    puVar1 = &DAT_0000c850;
    break;
  case 0x14f:
    puVar1 = &DAT_0000c854;
    break;
  case 0x150:
    puVar1 = &DAT_0000c858;
    break;
  case 0x151:
    puVar1 = &DAT_0000c85c;
    break;
  case 0x152:
    puVar1 = &DAT_0000c860;
    break;
  case 0x153:
    puVar1 = &DAT_0000c864;
    break;
  case 0x154:
    puVar1 = &DAT_0000c868;
    break;
  case 0x155:
    puVar1 = &DAT_0000c86c;
    break;
  case 0x156:
    puVar1 = &DAT_0000c870;
    break;
  case 0x157:
    puVar1 = &DAT_0000c874;
    break;
  case 0x158:
    puVar1 = &DAT_0000c878;
    break;
  case 0x159:
    puVar1 = &DAT_0000c87c;
    break;
  case 0x15a:
    puVar1 = &DAT_0000c880;
    break;
  case 0x15b:
    puVar1 = &DAT_0000c884;
    break;
  case 0x15c:
    puVar1 = &DAT_0000c888;
    break;
  case 0x15d:
    puVar1 = &DAT_0000c88c;
    break;
  case 0x15e:
    puVar1 = &DAT_0000c890;
    break;
  case 0x15f:
    puVar1 = &DAT_0000c894;
    break;
  case 0x160:
    puVar1 = &DAT_0000c898;
    break;
  case 0x161:
    puVar1 = &DAT_0000c89c;
    break;
  case 0x162:
    puVar1 = &DAT_0000c8a0;
    break;
  case 0x163:
    puVar1 = &DAT_0000c8a4;
    break;
  case 0x164:
    puVar1 = &DAT_0000c8a8;
    break;
  case 0x165:
    puVar1 = &DAT_0000c8ac;
    break;
  case 0x166:
    puVar1 = &DAT_0000c8b0;
    break;
  case 0x167:
    puVar1 = &DAT_0000c8b4;
    break;
  case 0x168:
    puVar1 = &DAT_0000c8b8;
    break;
  case 0x169:
    puVar1 = &DAT_0000c8bc;
    break;
  case 0x16a:
    puVar1 = &DAT_0000c8c0;
    break;
  case 0x16b:
    printf("Hmm...");
  case 0x16c:
    puVar1 = &DAT_0000c8c4;
    break;
  case 0x16d:
    puVar1 = &DAT_0000c8c8;
    break;
  case 0x16e:
    puVar1 = &DAT_0000c8cc;
    break;
  case 0x16f:
    puVar1 = &DAT_0000c8d0;
    break;
  case 0x170:
    puVar1 = &DAT_0000c8d4;
    break;
  case 0x171:
    puVar1 = &DAT_0000c8d8;
    break;
  case 0x172:
    puVar1 = &DAT_0000c8dc;
    break;
  case 0x173:
    puVar1 = &DAT_0000c8e0;
    break;
  case 0x174:
    puVar1 = &DAT_0000c8e4;
    break;
  case 0x175:
    puVar1 = &DAT_0000c8e8;
    break;
  case 0x176:
    puVar1 = &DAT_0000c8ec;
    break;
  case 0x177:
    puVar1 = &DAT_0000c8f0;
    break;
  case 0x178:
    puVar1 = &DAT_0000c8f4;
    break;
  case 0x179:
    puVar1 = &DAT_0000c8f8;
    break;
  case 0x17a:
    puVar1 = &DAT_0000c8fc;
    break;
  case 0x17b:
    puVar1 = &DAT_0000c900;
    break;
  case 0x17c:
    puVar1 = &DAT_0000c904;
    break;
  case 0x17d:
    puVar1 = &DAT_0000c908;
    break;
  case 0x17e:
    puVar1 = &DAT_0000c90c;
    break;
  case 0x17f:
    puVar1 = &DAT_0000c910;
    break;
  case 0x180:
    puVar1 = &DAT_0000c914;
    break;
  case 0x181:
    puVar1 = &DAT_0000c918;
    break;
  case 0x182:
    puVar1 = &DAT_0000c91c;
    break;
  case 0x183:
    puVar1 = &DAT_0000c920;
    break;
  case 0x184:
    puVar1 = &DAT_0000c924;
    break;
  case 0x185:
    puVar1 = &DAT_0000c928;
    break;
  case 0x186:
    puVar1 = &DAT_0000c92c;
    break;
  case 0x187:
    puVar1 = &DAT_0000c930;
    break;
  case 0x188:
    puVar1 = &DAT_0000c934;
    break;
  case 0x189:
    puVar1 = &DAT_0000c938;
    break;
  case 0x18a:
    puVar1 = &DAT_0000c93c;
    break;
  case 0x18b:
    puVar1 = &DAT_0000c940;
    break;
  case 0x18c:
    printf("Hmm...");
  case 0x18d:
    puVar1 = &DAT_0000c944;
    break;
  case 0x18e:
    puVar1 = &DAT_0000c948;
    break;
  case 399:
    puVar1 = &DAT_0000c94c;
    break;
  case 400:
    puVar1 = &DAT_0000c950;
    break;
  case 0x191:
    puVar1 = &DAT_0000c954;
    break;
  case 0x192:
    puVar1 = &DAT_0000c958;
    break;
  case 0x193:
    puVar1 = &DAT_0000c95c;
    break;
  case 0x194:
    puVar1 = &DAT_0000c960;
    break;
  case 0x195:
    puVar1 = &DAT_0000c964;
    break;
  case 0x196:
    puVar1 = &DAT_0000c968;
    break;
  case 0x197:
    puVar1 = &DAT_0000c96c;
    break;
  case 0x198:
    puVar1 = &DAT_0000c970;
    break;
  case 0x199:
    puVar1 = &DAT_0000c974;
    break;
  case 0x19a:
    puVar1 = &DAT_0000c978;
    break;
  case 0x19b:
    puVar1 = &DAT_0000c97c;
    break;
  case 0x19c:
    puVar1 = &DAT_0000c980;
    break;
  case 0x19d:
    puVar1 = &DAT_0000c984;
    break;
  case 0x19e:
    puVar1 = &DAT_0000c988;
    break;
  case 0x19f:
    puVar1 = &DAT_0000c98c;
    break;
  case 0x1a0:
    puVar1 = &DAT_0000c990;
    break;
  case 0x1a1:
    puVar1 = &DAT_0000c994;
    break;
  case 0x1a2:
    puVar1 = &DAT_0000c998;
    break;
  case 0x1a3:
    puVar1 = &DAT_0000c99c;
    break;
  case 0x1a4:
    puVar1 = &DAT_0000c9a0;
    break;
  case 0x1a5:
    puVar1 = &DAT_0000c9a4;
    break;
  case 0x1a6:
    puVar1 = &DAT_0000c9a8;
    break;
  case 0x1a7:
    puVar1 = &DAT_0000c9ac;
    break;
  case 0x1a8:
    puVar1 = &DAT_0000c9b0;
    break;
  case 0x1a9:
    puVar1 = &DAT_0000c9b4;
    break;
  case 0x1aa:
    puVar1 = &DAT_0000c9b8;
    break;
  case 0x1ab:
    puVar1 = &DAT_0000c9bc;
    break;
  case 0x1ac:
    puVar1 = &DAT_0000c9c0;
    break;
  case 0x1ad:
    printf("Hmm...");
  case 0x1ae:
    puVar1 = &DAT_0000c9c4;
    break;
  case 0x1af:
    puVar1 = &DAT_0000c9c8;
    break;
  case 0x1b0:
    puVar1 = &DAT_0000c9cc;
    break;
  case 0x1b1:
    puVar1 = &DAT_0000c9d0;
    break;
  case 0x1b2:
    puVar1 = &DAT_0000c9d4;
    break;
  case 0x1b3:
    puVar1 = &DAT_0000c9d8;
    break;
  case 0x1b4:
    puVar1 = &DAT_0000c9dc;
    break;
  case 0x1b5:
    puVar1 = &DAT_0000c9e0;
    break;
  case 0x1b6:
    puVar1 = &DAT_0000c9e4;
    break;
  case 0x1b7:
    puVar1 = &DAT_0000c9e8;
    break;
  case 0x1b8:
    puVar1 = &DAT_0000c9ec;
    break;
  case 0x1b9:
    puVar1 = &DAT_0000c9f0;
    break;
  case 0x1ba:
    puVar1 = &DAT_0000c9f4;
    break;
  case 0x1bb:
    puVar1 = &DAT_0000c9f8;
    break;
  case 0x1bc:
    puVar1 = &DAT_0000c9fc;
    break;
  case 0x1bd:
    puVar1 = &DAT_0000ca00;
    break;
  case 0x1be:
    puVar1 = &DAT_0000ca04;
    break;
  case 0x1bf:
    puVar1 = &DAT_0000ca08;
    break;
  case 0x1c0:
    puVar1 = &DAT_0000ca0c;
    break;
  case 0x1c1:
    puVar1 = &DAT_0000ca10;
    break;
  case 0x1c2:
    puVar1 = &DAT_0000ca14;
    break;
  case 0x1c3:
    puVar1 = &DAT_0000ca18;
    break;
  case 0x1c4:
    puVar1 = &DAT_0000ca1c;
    break;
  case 0x1c5:
    puVar1 = &DAT_0000ca20;
    break;
  case 0x1c6:
    puVar1 = &DAT_0000ca24;
    break;
  case 0x1c7:
    puVar1 = &DAT_0000ca28;
    break;
  case 0x1c8:
    puVar1 = &DAT_0000ca2c;
    break;
  case 0x1c9:
    puVar1 = &DAT_0000ca30;
    break;
  case 0x1ca:
    puVar1 = &DAT_0000ca34;
    break;
  case 0x1cb:
    puVar1 = &DAT_0000ca38;
    break;
  case 0x1cc:
    puVar1 = &DAT_0000ca3c;
    break;
  case 0x1cd:
    puVar1 = &DAT_0000ca40;
    break;
  case 0x1ce:
    printf("Hmm...");
  case 0x1cf:
    puVar1 = &DAT_0000ca44;
    break;
  case 0x1d0:
    puVar1 = &DAT_0000ca48;
    break;
  case 0x1d1:
    puVar1 = &DAT_0000ca4c;
    break;
  case 0x1d2:
    puVar1 = &DAT_0000ca50;
    break;
  case 0x1d3:
    puVar1 = &DAT_0000ca54;
    break;
  case 0x1d4:
    puVar1 = &DAT_0000ca58;
    break;
  case 0x1d5:
    puVar1 = &DAT_0000ca5c;
    break;
  case 0x1d6:
    puVar1 = &DAT_0000ca60;
    break;
  case 0x1d7:
    puVar1 = &DAT_0000ca64;
    break;
  case 0x1d8:
    puVar1 = &DAT_0000ca68;
    break;
  case 0x1d9:
    puVar1 = &DAT_0000ca6c;
    break;
  case 0x1da:
    puVar1 = &DAT_0000ca70;
    break;
  case 0x1db:
    puVar1 = &DAT_0000ca74;
    break;
  case 0x1dc:
    puVar1 = &DAT_0000ca78;
    break;
  case 0x1dd:
    puVar1 = &DAT_0000ca7c;
    break;
  case 0x1de:
    puVar1 = &DAT_0000ca80;
    break;
  case 0x1df:
    puVar1 = &DAT_0000ca84;
    break;
  case 0x1e0:
    puVar1 = &DAT_0000ca88;
    break;
  case 0x1e1:
    puVar1 = &DAT_0000ca8c;
    break;
  case 0x1e2:
    puVar1 = &DAT_0000ca90;
    break;
  case 0x1e3:
    puVar1 = &DAT_0000ca94;
    break;
  case 0x1e4:
    puVar1 = &DAT_0000ca98;
    break;
  case 0x1e5:
    puVar1 = &DAT_0000ca9c;
    break;
  case 0x1e6:
    puVar1 = &DAT_0000caa0;
    break;
  case 0x1e7:
    puVar1 = &DAT_0000caa4;
    break;
  case 0x1e8:
    puVar1 = &DAT_0000caa8;
    break;
  case 0x1e9:
    puVar1 = &DAT_0000caac;
    break;
  case 0x1ea:
    puVar1 = &DAT_0000cab0;
    break;
  case 0x1eb:
    puVar1 = &DAT_0000cab4;
    break;
  case 0x1ec:
    puVar1 = &DAT_0000cab8;
    break;
  case 0x1ed:
    puVar1 = &DAT_0000cabc;
    break;
  case 0x1ee:
    puVar1 = &DAT_0000cac0;
    break;
  case 0x1ef:
    printf("Hmm...");
  case 0x1f0:
    puVar1 = &DAT_0000cac4;
    break;
  case 0x1f1:
    puVar1 = &DAT_0000cac8;
    break;
  case 0x1f2:
    puVar1 = &DAT_0000cacc;
    break;
  case 499:
    puVar1 = &DAT_0000cad0;
    break;
  case 500:
    puVar1 = &DAT_0000cad4;
    break;
  case 0x1f5:
    puVar1 = &DAT_0000cad8;
    break;
  case 0x1f6:
    puVar1 = &DAT_0000cadc;
    break;
  case 0x1f7:
    puVar1 = &DAT_0000cae0;
    break;
  case 0x1f8:
    puVar1 = &DAT_0000cae4;
    break;
  case 0x1f9:
    puVar1 = &DAT_0000cae8;
    break;
  case 0x1fa:
    puVar1 = &DAT_0000caec;
    break;
  case 0x1fb:
    puVar1 = &DAT_0000caf0;
    break;
  case 0x1fc:
    puVar1 = &DAT_0000caf4;
    break;
  case 0x1fd:
    puVar1 = &DAT_0000caf8;
    break;
  case 0x1fe:
    puVar1 = &DAT_0000cafc;
    break;
  case 0x1ff:
    puVar1 = &DAT_0000cb00;
    break;
  case 0x200:
    puVar1 = &DAT_0000cb04;
    break;
  case 0x201:
    puVar1 = &DAT_0000cb08;
    break;
  case 0x202:
    puVar1 = &DAT_0000cb0c;
    break;
  case 0x203:
    puVar1 = &DAT_0000cb10;
    break;
  case 0x204:
    puVar1 = &DAT_0000cb14;
    break;
  case 0x205:
    puVar1 = &DAT_0000cb18;
    break;
  case 0x206:
    puVar1 = &DAT_0000cb1c;
    break;
  case 0x207:
    puVar1 = &DAT_0000cb20;
    break;
  case 0x208:
    puVar1 = &DAT_0000cb24;
    break;
  case 0x209:
    puVar1 = &DAT_0000cb28;
    break;
  case 0x20a:
    puVar1 = &DAT_0000cb2c;
    break;
  case 0x20b:
    puVar1 = &DAT_0000cb30;
    break;
  case 0x20c:
    puVar1 = &DAT_0000cb34;
    break;
  case 0x20d:
    puVar1 = &DAT_0000cb38;
    break;
  case 0x20e:
    puVar1 = &DAT_0000cb3c;
    break;
  case 0x20f:
    puVar1 = &DAT_0000cb40;
    break;
  case 0x210:
    printf("Hmm...");
  case 0x211:
    puVar1 = &DAT_0000cb44;
    break;
  case 0x212:
    puVar1 = &DAT_0000cb48;
    break;
  case 0x213:
    puVar1 = &DAT_0000cb4c;
    break;
  case 0x214:
    puVar1 = &DAT_0000cb50;
    break;
  case 0x215:
    puVar1 = &DAT_0000cb54;
    break;
  case 0x216:
    puVar1 = &DAT_0000cb58;
    break;
  case 0x217:
    puVar1 = &DAT_0000cb5c;
    break;
  case 0x218:
    puVar1 = &DAT_0000cb60;
    break;
  case 0x219:
    puVar1 = &DAT_0000cb64;
    break;
  case 0x21a:
    puVar1 = &DAT_0000cb68;
    break;
  case 0x21b:
    puVar1 = &DAT_0000cb6c;
    break;
  case 0x21c:
    puVar1 = &DAT_0000cb70;
    break;
  case 0x21d:
    puVar1 = &DAT_0000cb74;
    break;
  case 0x21e:
    puVar1 = &DAT_0000cb78;
    break;
  case 0x21f:
    puVar1 = &DAT_0000cb7c;
    break;
  case 0x220:
    puVar1 = &DAT_0000cb80;
    break;
  case 0x221:
    puVar1 = &DAT_0000cb84;
    break;
  case 0x222:
    puVar1 = &DAT_0000cb88;
    break;
  case 0x223:
    puVar1 = &DAT_0000cb8c;
    break;
  case 0x224:
    puVar1 = &DAT_0000cb90;
    break;
  case 0x225:
    puVar1 = &DAT_0000cb94;
    break;
  case 0x226:
    puVar1 = &DAT_0000cb98;
    break;
  case 0x227:
    puVar1 = &DAT_0000cb9c;
    break;
  case 0x228:
    puVar1 = &DAT_0000cba0;
    break;
  case 0x229:
    puVar1 = &DAT_0000cba4;
    break;
  case 0x22a:
    puVar1 = &DAT_0000cba8;
    break;
  case 0x22b:
    puVar1 = &DAT_0000cbac;
    break;
  case 0x22c:
    puVar1 = &DAT_0000cbb0;
    break;
  case 0x22d:
    puVar1 = &DAT_0000cbb4;
    break;
  case 0x22e:
    puVar1 = &DAT_0000cbb8;
    break;
  case 0x22f:
    puVar1 = &DAT_0000cbbc;
    break;
  case 0x230:
    puVar1 = &DAT_0000cbc0;
    break;
  case 0x231:
    printf("Hmm...");
  case 0x232:
    puVar1 = &DAT_0000cbc4;
    break;
  case 0x233:
    puVar1 = &DAT_0000cbc8;
    break;
  case 0x234:
    puVar1 = &DAT_0000cbcc;
    break;
  case 0x235:
    puVar1 = &DAT_0000cbd0;
    break;
  case 0x236:
    puVar1 = &DAT_0000cbd4;
    break;
  case 0x237:
    puVar1 = &DAT_0000cbd8;
    break;
  case 0x238:
    puVar1 = &DAT_0000cbdc;
    break;
  case 0x239:
    puVar1 = &DAT_0000cbe0;
    break;
  case 0x23a:
    puVar1 = &DAT_0000cbe4;
    break;
  case 0x23b:
    puVar1 = &DAT_0000cbe8;
    break;
  case 0x23c:
    puVar1 = &DAT_0000cbec;
    break;
  case 0x23d:
    puVar1 = &DAT_0000cbf0;
    break;
  case 0x23e:
    puVar1 = &DAT_0000cbf4;
    break;
  case 0x23f:
    puVar1 = &DAT_0000cbf8;
    break;
  case 0x240:
    puVar1 = &DAT_0000cbfc;
    break;
  case 0x241:
    puVar1 = &DAT_0000cc00;
    break;
  case 0x242:
    puVar1 = &DAT_0000cc04;
    break;
  case 0x243:
    puVar1 = &DAT_0000cc08;
    break;
  case 0x244:
    puVar1 = &DAT_0000cc0c;
    break;
  case 0x245:
    puVar1 = &DAT_0000cc10;
    break;
  case 0x246:
    puVar1 = &DAT_0000cc14;
    break;
  case 0x247:
    puVar1 = &DAT_0000cc18;
    break;
  case 0x248:
    puVar1 = &DAT_0000cc1c;
    break;
  case 0x249:
    puVar1 = &DAT_0000cc20;
    break;
  case 0x24a:
    puVar1 = &DAT_0000cc24;
    break;
  case 0x24b:
    puVar1 = &DAT_0000cc28;
    break;
  case 0x24c:
    puVar1 = &DAT_0000cc2c;
    break;
  case 0x24d:
    puVar1 = &DAT_0000cc30;
    break;
  case 0x24e:
    puVar1 = &DAT_0000cc34;
    break;
  case 0x24f:
    puVar1 = &DAT_0000cc38;
    break;
  case 0x250:
    puVar1 = &DAT_0000cc3c;
    break;
  case 0x251:
    puVar1 = &DAT_0000cc40;
    break;
  case 0x252:
    printf("Hmm...");
  case 0x253:
    puVar1 = &DAT_0000cc44;
    break;
  case 0x254:
    puVar1 = &DAT_0000cc48;
    break;
  case 0x255:
    puVar1 = &DAT_0000cc4c;
    break;
  case 0x256:
    puVar1 = &DAT_0000cc50;
    break;
  case 599:
    puVar1 = &DAT_0000cc54;
    break;
  case 600:
    puVar1 = &DAT_0000cc58;
    break;
  case 0x259:
    puVar1 = &DAT_0000cc5c;
    break;
  case 0x25a:
    puVar1 = &DAT_0000cc60;
    break;
  case 0x25b:
    puVar1 = &DAT_0000cc64;
    break;
  case 0x25c:
    puVar1 = &DAT_0000cc68;
    break;
  case 0x25d:
    puVar1 = &DAT_0000cc6c;
    break;
  case 0x25e:
    puVar1 = &DAT_0000cc70;
    break;
  case 0x25f:
    puVar1 = &DAT_0000cc74;
    break;
  case 0x260:
    puVar1 = &DAT_0000cc78;
    break;
  case 0x261:
    puVar1 = &DAT_0000cc7c;
    break;
  case 0x262:
    puVar1 = &DAT_0000cc80;
    break;
  case 0x263:
    puVar1 = &DAT_0000cc84;
    break;
  case 0x264:
    puVar1 = &DAT_0000cc88;
    break;
  case 0x265:
    puVar1 = &DAT_0000cc8c;
    break;
  case 0x266:
    puVar1 = &DAT_0000cc90;
    break;
  case 0x267:
    puVar1 = &DAT_0000cc94;
    break;
  case 0x268:
    puVar1 = &DAT_0000cc98;
    break;
  case 0x269:
    puVar1 = &DAT_0000cc9c;
    break;
  case 0x26a:
    puVar1 = &DAT_0000cca0;
    break;
  case 0x26b:
    puVar1 = &DAT_0000cca4;
    break;
  case 0x26c:
    puVar1 = &DAT_0000cca8;
    break;
  case 0x26d:
    puVar1 = &DAT_0000ccac;
    break;
  case 0x26e:
    puVar1 = &DAT_0000ccb0;
    break;
  case 0x26f:
    puVar1 = &DAT_0000ccb4;
    break;
  case 0x270:
    puVar1 = &DAT_0000ccb8;
    break;
  case 0x271:
    puVar1 = &DAT_0000ccbc;
    break;
  case 0x272:
    puVar1 = &DAT_0000ccc0;
    break;
  case 0x273:
    printf("Hmm...");
  case 0x274:
    puVar1 = &DAT_0000ccc4;
    break;
  case 0x275:
    puVar1 = &DAT_0000ccc8;
    break;
  case 0x276:
    puVar1 = &DAT_0000cccc;
    break;
  case 0x277:
    puVar1 = &DAT_0000ccd0;
    break;
  case 0x278:
    puVar1 = &DAT_0000ccd4;
    break;
  case 0x279:
    puVar1 = &DAT_0000ccd8;
    break;
  case 0x27a:
    puVar1 = &DAT_0000ccdc;
    break;
  case 0x27b:
    puVar1 = &DAT_0000cce0;
    break;
  case 0x27c:
    puVar1 = &DAT_0000cce4;
    break;
  case 0x27d:
    puVar1 = &DAT_0000cce8;
    break;
  case 0x27e:
    puVar1 = &DAT_0000ccec;
    break;
  case 0x27f:
    puVar1 = &DAT_0000ccf0;
    break;
  case 0x280:
    puVar1 = &DAT_0000ccf4;
    break;
  case 0x281:
    puVar1 = &DAT_0000ccf8;
    break;
  case 0x282:
    puVar1 = &DAT_0000ccfc;
    break;
  case 0x283:
    puVar1 = &DAT_0000cd00;
    break;
  case 0x284:
    puVar1 = &DAT_0000cd04;
    break;
  case 0x285:
    puVar1 = &DAT_0000cd08;
    break;
  case 0x286:
    puVar1 = &DAT_0000cd0c;
    break;
  case 0x287:
    puVar1 = &DAT_0000cd10;
    break;
  case 0x288:
    puVar1 = &DAT_0000cd14;
    break;
  case 0x289:
    puVar1 = &DAT_0000cd18;
    break;
  case 0x28a:
    puVar1 = &DAT_0000cd1c;
    break;
  case 0x28b:
    puVar1 = &DAT_0000cd20;
    break;
  case 0x28c:
    puVar1 = &DAT_0000cd24;
    break;
  case 0x28d:
    puVar1 = &DAT_0000cd28;
    break;
  case 0x28e:
    puVar1 = &DAT_0000cd2c;
    break;
  case 0x28f:
    puVar1 = &DAT_0000cd30;
    break;
  case 0x290:
    puVar1 = &DAT_0000cd34;
    break;
  case 0x291:
    puVar1 = &DAT_0000cd38;
    break;
  case 0x292:
    puVar1 = &DAT_0000cd3c;
    break;
  case 0x293:
    puVar1 = &DAT_0000cd40;
    break;
  case 0x294:
    printf("Hmm...");
  case 0x295:
    puVar1 = &DAT_0000cd44;
    break;
  case 0x296:
    puVar1 = &DAT_0000cd48;
    break;
  case 0x297:
    puVar1 = &DAT_0000cd4c;
    break;
  case 0x298:
    puVar1 = &DAT_0000cd50;
    break;
  case 0x299:
    puVar1 = &DAT_0000cd54;
    break;
  case 0x29a:
    puVar1 = &DAT_0000cd58;
    break;
  case 0x29b:
    puVar1 = &DAT_0000cd5c;
    break;
  case 0x29c:
    puVar1 = &DAT_0000cd60;
    break;
  case 0x29d:
    puVar1 = &DAT_0000cd64;
    break;
  case 0x29e:
    puVar1 = &DAT_0000cd68;
    break;
  case 0x29f:
    puVar1 = &DAT_0000cd6c;
    break;
  case 0x2a0:
    puVar1 = &DAT_0000cd70;
    break;
  case 0x2a1:
    puVar1 = &DAT_0000cd74;
    break;
  case 0x2a2:
    puVar1 = &DAT_0000cd78;
    break;
  case 0x2a3:
    puVar1 = &DAT_0000cd7c;
    break;
  case 0x2a4:
    puVar1 = &DAT_0000cd80;
    break;
  case 0x2a5:
    puVar1 = &DAT_0000cd84;
    break;
  case 0x2a6:
    puVar1 = &DAT_0000cd88;
    break;
  case 0x2a7:
    puVar1 = &DAT_0000cd8c;
    break;
  case 0x2a8:
    puVar1 = &DAT_0000cd90;
    break;
  case 0x2a9:
    puVar1 = &DAT_0000cd94;
    break;
  case 0x2aa:
    puVar1 = &DAT_0000cd98;
    break;
  case 0x2ab:
    puVar1 = &DAT_0000cd9c;
    break;
  case 0x2ac:
    puVar1 = &DAT_0000cda0;
    break;
  case 0x2ad:
    puVar1 = &DAT_0000cda4;
    break;
  case 0x2ae:
    puVar1 = &DAT_0000cda8;
    break;
  case 0x2af:
    puVar1 = &DAT_0000cdac;
    break;
  case 0x2b0:
    puVar1 = &DAT_0000cdb0;
    break;
  case 0x2b1:
    puVar1 = &DAT_0000cdb4;
    break;
  case 0x2b2:
    puVar1 = &DAT_0000cdb8;
    break;
  case 0x2b3:
    puVar1 = &DAT_0000cdbc;
    break;
  case 0x2b4:
    puVar1 = &DAT_0000cdc0;
    break;
  case 0x2b5:
    printf("Hmm...");
  case 0x2b6:
    puVar1 = &DAT_0000cdc4;
    break;
  case 0x2b7:
    puVar1 = &DAT_0000cdc8;
    break;
  case 0x2b8:
    puVar1 = &DAT_0000cdcc;
    break;
  case 0x2b9:
    puVar1 = &DAT_0000cdd0;
    break;
  case 0x2ba:
    puVar1 = &DAT_0000cdd4;
    break;
  case 699:
    puVar1 = &DAT_0000cdd8;
    break;
  case 700:
    puVar1 = &DAT_0000cddc;
    break;
  case 0x2bd:
    puVar1 = &DAT_0000cde0;
    break;
  case 0x2be:
    puVar1 = &DAT_0000cde4;
    break;
  case 0x2bf:
    puVar1 = &DAT_0000cde8;
    break;
  case 0x2c0:
    puVar1 = &DAT_0000cdec;
    break;
  case 0x2c1:
    puVar1 = &DAT_0000cdf0;
    break;
  case 0x2c2:
    puVar1 = &DAT_0000cdf4;
    break;
  case 0x2c3:
    puVar1 = &DAT_0000cdf8;
    break;
  case 0x2c4:
    puVar1 = &DAT_0000cdfc;
    break;
  case 0x2c5:
    puVar1 = &DAT_0000ce00;
    break;
  case 0x2c6:
    puVar1 = &DAT_0000ce04;
    break;
  case 0x2c7:
    puVar1 = &DAT_0000ce08;
    break;
  case 0x2c8:
    puVar1 = &DAT_0000ce0c;
    break;
  case 0x2c9:
    puVar1 = &DAT_0000ce10;
    break;
  case 0x2ca:
    puVar1 = &DAT_0000ce14;
    break;
  case 0x2cb:
    puVar1 = &DAT_0000ce18;
    break;
  case 0x2cc:
    puVar1 = &DAT_0000ce1c;
    break;
  case 0x2cd:
    puVar1 = &DAT_0000ce20;
    break;
  case 0x2ce:
    puVar1 = &DAT_0000ce24;
    break;
  case 0x2cf:
    puVar1 = &DAT_0000ce28;
    break;
  case 0x2d0:
    puVar1 = &DAT_0000ce2c;
    break;
  case 0x2d1:
    puVar1 = &DAT_0000ce30;
    break;
  case 0x2d2:
    puVar1 = &DAT_0000ce34;
    break;
  case 0x2d3:
    puVar1 = &DAT_0000ce38;
    break;
  case 0x2d4:
    puVar1 = &DAT_0000ce3c;
    break;
  case 0x2d5:
    puVar1 = &DAT_0000ce40;
    break;
  case 0x2d6:
    printf("Hmm...");
  case 0x2d7:
    puVar1 = &DAT_0000ce44;
    break;
  case 0x2d8:
    puVar1 = &DAT_0000ce48;
    break;
  case 0x2d9:
    puVar1 = &DAT_0000ce4c;
    break;
  case 0x2da:
    puVar1 = &DAT_0000ce50;
    break;
  case 0x2db:
    puVar1 = &DAT_0000ce54;
    break;
  case 0x2dc:
    puVar1 = &DAT_0000ce58;
    break;
  case 0x2dd:
    puVar1 = &DAT_0000ce5c;
    break;
  case 0x2de:
    puVar1 = &DAT_0000ce60;
    break;
  case 0x2df:
    puVar1 = &DAT_0000ce64;
    break;
  case 0x2e0:
    puVar1 = &DAT_0000ce68;
    break;
  case 0x2e1:
    puVar1 = &DAT_0000ce6c;
    break;
  case 0x2e2:
    puVar1 = &DAT_0000ce70;
    break;
  case 0x2e3:
    puVar1 = &DAT_0000ce74;
    break;
  case 0x2e4:
    puVar1 = &DAT_0000ce78;
    break;
  case 0x2e5:
    puVar1 = &DAT_0000ce7c;
    break;
  case 0x2e6:
    puVar1 = &DAT_0000ce80;
    break;
  case 0x2e7:
    puVar1 = &DAT_0000ce84;
    break;
  case 0x2e8:
    puVar1 = &DAT_0000ce88;
    break;
  case 0x2e9:
    puVar1 = &DAT_0000ce8c;
    break;
  case 0x2ea:
    puVar1 = &DAT_0000ce90;
    break;
  case 0x2eb:
    puVar1 = &DAT_0000ce94;
    break;
  case 0x2ec:
    puVar1 = &DAT_0000ce98;
    break;
  case 0x2ed:
    puVar1 = &DAT_0000ce9c;
    break;
  case 0x2ee:
    puVar1 = &DAT_0000cea0;
    break;
  case 0x2ef:
    puVar1 = &DAT_0000cea4;
    break;
  case 0x2f0:
    puVar1 = &DAT_0000cea8;
    break;
  case 0x2f1:
    puVar1 = &DAT_0000ceac;
    break;
  case 0x2f2:
    puVar1 = &DAT_0000ceb0;
    break;
  case 0x2f3:
    puVar1 = &DAT_0000ceb4;
    break;
  case 0x2f4:
    puVar1 = &DAT_0000ceb8;
    break;
  case 0x2f5:
    puVar1 = &DAT_0000cebc;
    break;
  case 0x2f6:
    puVar1 = &DAT_0000cec0;
    break;
  case 0x2f7:
    printf("Hmm...");
  case 0x2f8:
    puVar1 = &DAT_0000cec4;
    break;
  case 0x2f9:
    puVar1 = &DAT_0000cec8;
    break;
  case 0x2fa:
    puVar1 = &DAT_0000cecc;
    break;
  case 0x2fb:
    puVar1 = &DAT_0000ced0;
    break;
  case 0x2fc:
    puVar1 = &DAT_0000ced4;
    break;
  case 0x2fd:
    puVar1 = &DAT_0000ced8;
    break;
  case 0x2fe:
    puVar1 = &DAT_0000cedc;
    break;
  case 0x2ff:
    puVar1 = &DAT_0000cee0;
    break;
  case 0x300:
    puVar1 = &DAT_0000cee4;
    break;
  case 0x301:
    puVar1 = &DAT_0000cee8;
    break;
  case 0x302:
    puVar1 = &DAT_0000ceec;
    break;
  case 0x303:
    puVar1 = &DAT_0000cef0;
    break;
  case 0x304:
    puVar1 = &DAT_0000cef4;
    break;
  case 0x305:
    puVar1 = &DAT_0000cef8;
    break;
  case 0x306:
    puVar1 = &DAT_0000cefc;
    break;
  case 0x307:
    puVar1 = &DAT_0000cf00;
    break;
  case 0x308:
    puVar1 = &DAT_0000cf04;
    break;
  case 0x309:
    puVar1 = &DAT_0000cf08;
    break;
  case 0x30a:
    puVar1 = &DAT_0000cf0c;
    break;
  case 0x30b:
    puVar1 = &DAT_0000cf10;
    break;
  case 0x30c:
    puVar1 = &DAT_0000cf14;
    break;
  case 0x30d:
    puVar1 = &DAT_0000cf18;
    break;
  case 0x30e:
    puVar1 = &DAT_0000cf1c;
    break;
  case 0x30f:
    puVar1 = &DAT_0000cf20;
    break;
  case 0x310:
    puVar1 = &DAT_0000cf24;
    break;
  case 0x311:
    puVar1 = &DAT_0000cf28;
    break;
  case 0x312:
    puVar1 = &DAT_0000cf2c;
    break;
  case 0x313:
    puVar1 = &DAT_0000cf30;
    break;
  case 0x314:
    puVar1 = &DAT_0000cf34;
    break;
  case 0x315:
    puVar1 = &DAT_0000cf38;
    break;
  case 0x316:
    puVar1 = &DAT_0000cf3c;
    break;
  case 0x317:
    puVar1 = &DAT_0000cf40;
    break;
  case 0x318:
    printf("Hmm...");
  case 0x319:
    puVar1 = &DAT_0000cf44;
    break;
  case 0x31a:
    puVar1 = &DAT_0000cf48;
    break;
  case 0x31b:
    puVar1 = &DAT_0000cf4c;
    break;
  case 0x31c:
    puVar1 = &DAT_0000cf50;
    break;
  case 0x31d:
    puVar1 = &DAT_0000cf54;
    break;
  case 0x31e:
    puVar1 = &DAT_0000cf58;
    break;
  case 799:
    puVar1 = &DAT_0000cf5c;
    break;
  case 800:
    puVar1 = &DAT_0000cf60;
    break;
  case 0x321:
    puVar1 = &DAT_0000cf64;
    break;
  case 0x322:
    puVar1 = &DAT_0000cf68;
    break;
  case 0x323:
    puVar1 = &DAT_0000cf6c;
    break;
  case 0x324:
    puVar1 = &DAT_0000cf70;
    break;
  case 0x325:
    puVar1 = &DAT_0000cf74;
    break;
  case 0x326:
    puVar1 = &DAT_0000cf78;
    break;
  case 0x327:
    puVar1 = &DAT_0000cf7c;
    break;
  case 0x328:
    puVar1 = &DAT_0000cf80;
    break;
  case 0x329:
    puVar1 = &DAT_0000cf84;
    break;
  case 0x32a:
    puVar1 = &DAT_0000cf88;
    break;
  case 0x32b:
    puVar1 = &DAT_0000cf8c;
    break;
  case 0x32c:
    puVar1 = &DAT_0000cf90;
    break;
  case 0x32d:
    puVar1 = &DAT_0000cf94;
    break;
  case 0x32e:
    puVar1 = &DAT_0000cf98;
    break;
  case 0x32f:
    puVar1 = &DAT_0000cf9c;
    break;
  case 0x330:
    puVar1 = &DAT_0000cfa0;
    break;
  case 0x331:
    puVar1 = &DAT_0000cfa4;
    break;
  case 0x332:
    puVar1 = &DAT_0000cfa8;
    break;
  case 0x333:
    puVar1 = &DAT_0000cfac;
    break;
  case 0x334:
    puVar1 = &DAT_0000cfb0;
    break;
  case 0x335:
    puVar1 = &DAT_0000cfb4;
    break;
  case 0x336:
    puVar1 = &DAT_0000cfb8;
    break;
  case 0x337:
    puVar1 = &DAT_0000cfbc;
    break;
  case 0x338:
    puVar1 = &DAT_0000cfc0;
    break;
  case 0x339:
    printf("Hmm...");
  case 0x33a:
    puVar1 = &DAT_0000cfc4;
    break;
  case 0x33b:
    puVar1 = &DAT_0000cfc8;
    break;
  case 0x33c:
    puVar1 = &DAT_0000cfcc;
    break;
  case 0x33d:
    puVar1 = &DAT_0000cfd0;
    break;
  case 0x33e:
    puVar1 = &DAT_0000cfd4;
    break;
  case 0x33f:
    puVar1 = &DAT_0000cfd8;
    break;
  case 0x340:
    puVar1 = &DAT_0000cfdc;
    break;
  case 0x341:
    puVar1 = &DAT_0000cfe0;
    break;
  case 0x342:
    puVar1 = &DAT_0000cfe4;
    break;
  case 0x343:
    puVar1 = &DAT_0000cfe8;
    break;
  case 0x344:
    puVar1 = &DAT_0000cfec;
    break;
  case 0x345:
    puVar1 = &DAT_0000cff0;
    break;
  case 0x346:
    puVar1 = &DAT_0000cff4;
    break;
  case 0x347:
    puVar1 = &DAT_0000cff8;
    break;
  case 0x348:
    puVar1 = &DAT_0000cffc;
    break;
  case 0x349:
    puVar1 = &DAT_0000d000;
    break;
  case 0x34a:
    puVar1 = &DAT_0000d004;
    break;
  case 0x34b:
    puVar1 = &DAT_0000d008;
    break;
  case 0x34c:
    puVar1 = &DAT_0000d00c;
    break;
  case 0x34d:
    puVar1 = &DAT_0000d010;
    break;
  case 0x34e:
    puVar1 = &DAT_0000d014;
    break;
  case 0x34f:
    puVar1 = &DAT_0000d018;
    break;
  case 0x350:
    puVar1 = &DAT_0000d01c;
    break;
  case 0x351:
    puVar1 = &DAT_0000d020;
    break;
  case 0x352:
    puVar1 = &DAT_0000d024;
    break;
  case 0x353:
    puVar1 = &DAT_0000d028;
    break;
  case 0x354:
    puVar1 = &DAT_0000d02c;
    break;
  case 0x355:
    puVar1 = &DAT_0000d030;
    break;
  case 0x356:
    puVar1 = &DAT_0000d034;
    break;
  case 0x357:
    puVar1 = &DAT_0000d038;
    break;
  case 0x358:
    puVar1 = &DAT_0000d03c;
    break;
  case 0x359:
    puVar1 = &DAT_0000d040;
    break;
  case 0x35a:
    printf("Hmm...");
  case 0x35b:
    puVar1 = &DAT_0000d044;
    break;
  case 0x35c:
    puVar1 = &DAT_0000d048;
    break;
  case 0x35d:
    puVar1 = &DAT_0000d04c;
    break;
  case 0x35e:
    puVar1 = &DAT_0000d050;
    break;
  case 0x35f:
    puVar1 = &DAT_0000d054;
    break;
  case 0x360:
    puVar1 = &DAT_0000d058;
    break;
  case 0x361:
    puVar1 = &DAT_0000d05c;
    break;
  case 0x362:
    puVar1 = &DAT_0000d060;
    break;
  case 0x363:
    puVar1 = &DAT_0000d064;
    break;
  case 0x364:
    puVar1 = &DAT_0000d068;
    break;
  case 0x365:
    puVar1 = &DAT_0000d06c;
    break;
  case 0x366:
    puVar1 = &DAT_0000d070;
    break;
  case 0x367:
    puVar1 = &DAT_0000d074;
    break;
  case 0x368:
    puVar1 = &DAT_0000d078;
    break;
  case 0x369:
    puVar1 = &DAT_0000d07c;
    break;
  case 0x36a:
    puVar1 = &DAT_0000d080;
    break;
  case 0x36b:
    puVar1 = &DAT_0000d084;
    break;
  case 0x36c:
    puVar1 = &DAT_0000d088;
    break;
  case 0x36d:
    puVar1 = &DAT_0000d08c;
    break;
  case 0x36e:
    puVar1 = &DAT_0000d090;
    break;
  case 0x36f:
    puVar1 = &DAT_0000d094;
    break;
  case 0x370:
    puVar1 = &DAT_0000d098;
    break;
  case 0x371:
    puVar1 = &DAT_0000d09c;
    break;
  case 0x372:
    puVar1 = &DAT_0000d0a0;
    break;
  case 0x373:
    puVar1 = &DAT_0000d0a4;
    break;
  case 0x374:
    puVar1 = &DAT_0000d0a8;
    break;
  case 0x375:
    puVar1 = &DAT_0000d0ac;
    break;
  case 0x376:
    puVar1 = &DAT_0000d0b0;
    break;
  case 0x377:
    puVar1 = &DAT_0000d0b4;
    break;
  case 0x378:
    puVar1 = &DAT_0000d0b8;
    break;
  case 0x379:
    puVar1 = &DAT_0000d0bc;
    break;
  case 0x37a:
    puVar1 = &DAT_0000d0c0;
    break;
  case 0x37b:
    printf("Hmm...");
  case 0x37c:
    puVar1 = &DAT_0000d0c4;
    break;
  case 0x37d:
    puVar1 = &DAT_0000d0c8;
    break;
  case 0x37e:
    puVar1 = &DAT_0000d0cc;
    break;
  case 0x37f:
    puVar1 = &DAT_0000d0d0;
    break;
  case 0x380:
    puVar1 = &DAT_0000d0d4;
    break;
  case 0x381:
    puVar1 = &DAT_0000d0d8;
    break;
  case 0x382:
    puVar1 = &DAT_0000d0dc;
    break;
  case 899:
    puVar1 = &DAT_0000d0e0;
    break;
  case 900:
    puVar1 = &DAT_0000d0e4;
    break;
  case 0x385:
    puVar1 = &DAT_0000d0e8;
    break;
  case 0x386:
    puVar1 = &DAT_0000d0ec;
    break;
  case 0x387:
    puVar1 = &DAT_0000d0f0;
    break;
  case 0x388:
    puVar1 = &DAT_0000d0f4;
    break;
  case 0x389:
    puVar1 = &DAT_0000d0f8;
    break;
  case 0x38a:
    puVar1 = &DAT_0000d0fc;
    break;
  case 0x38b:
    puVar1 = &DAT_0000d100;
    break;
  case 0x38c:
    puVar1 = &DAT_0000d104;
    break;
  case 0x38d:
    puVar1 = &DAT_0000d108;
    break;
  case 0x38e:
    puVar1 = &DAT_0000d10c;
    break;
  case 0x38f:
    puVar1 = &DAT_0000d110;
    break;
  case 0x390:
    puVar1 = &DAT_0000d114;
    break;
  case 0x391:
    puVar1 = &DAT_0000d118;
    break;
  case 0x392:
    puVar1 = &DAT_0000d11c;
    break;
  case 0x393:
    puVar1 = &DAT_0000d120;
    break;
  case 0x394:
    puVar1 = &DAT_0000d124;
    break;
  case 0x395:
    puVar1 = &DAT_0000d128;
    break;
  case 0x396:
    puVar1 = &DAT_0000d12c;
    break;
  case 0x397:
    puVar1 = &DAT_0000d130;
    break;
  case 0x398:
    puVar1 = &DAT_0000d134;
    break;
  case 0x399:
    puVar1 = &DAT_0000d138;
    break;
  case 0x39a:
    puVar1 = &DAT_0000d13c;
    break;
  case 0x39b:
    puVar1 = &DAT_0000d140;
    break;
  case 0x39c:
    printf("Hmm...");
  case 0x39d:
    puVar1 = &DAT_0000d144;
    break;
  case 0x39e:
    puVar1 = &DAT_0000d148;
    break;
  case 0x39f:
    puVar1 = &DAT_0000d14c;
    break;
  case 0x3a0:
    puVar1 = &DAT_0000d150;
    break;
  case 0x3a1:
    puVar1 = &DAT_0000d154;
    break;
  case 0x3a2:
    puVar1 = &DAT_0000d158;
    break;
  case 0x3a3:
    puVar1 = &DAT_0000d15c;
    break;
  case 0x3a4:
    puVar1 = &DAT_0000d160;
    break;
  case 0x3a5:
    puVar1 = &DAT_0000d164;
    break;
  case 0x3a6:
    puVar1 = &DAT_0000d168;
    break;
  case 0x3a7:
    puVar1 = &DAT_0000d16c;
    break;
  case 0x3a8:
    puVar1 = &DAT_0000d170;
    break;
  case 0x3a9:
    puVar1 = &DAT_0000d174;
    break;
  case 0x3aa:
    puVar1 = &DAT_0000d178;
    break;
  case 0x3ab:
    puVar1 = &DAT_0000d17c;
    break;
  case 0x3ac:
    puVar1 = &DAT_0000d180;
    break;
  case 0x3ad:
    puVar1 = &DAT_0000d184;
    break;
  case 0x3ae:
    puVar1 = &DAT_0000d188;
    break;
  case 0x3af:
    puVar1 = &DAT_0000d18c;
    break;
  case 0x3b0:
    puVar1 = &DAT_0000d190;
    break;
  case 0x3b1:
    puVar1 = &DAT_0000d194;
    break;
  case 0x3b2:
    puVar1 = &DAT_0000d198;
    break;
  case 0x3b3:
    puVar1 = &DAT_0000d19c;
    break;
  case 0x3b4:
    puVar1 = &DAT_0000d1a0;
    break;
  case 0x3b5:
    puVar1 = &DAT_0000d1a4;
    break;
  case 0x3b6:
    puVar1 = &DAT_0000d1a8;
    break;
  case 0x3b7:
    puVar1 = &DAT_0000d1ac;
    break;
  case 0x3b8:
    puVar1 = &DAT_0000d1b0;
    break;
  case 0x3b9:
    puVar1 = &DAT_0000d1b4;
    break;
  case 0x3ba:
    puVar1 = &DAT_0000d1b8;
    break;
  case 0x3bb:
    puVar1 = &DAT_0000d1bc;
    break;
  case 0x3bc:
    puVar1 = &DAT_0000d1c0;
    break;
  case 0x3bd:
    printf("Hmm...");
  case 0x3be:
    puVar1 = &DAT_0000d1c4;
    break;
  case 0x3bf:
    puVar1 = &DAT_0000d1c8;
    break;
  case 0x3c0:
    puVar1 = &DAT_0000d1cc;
    break;
  case 0x3c1:
    puVar1 = &DAT_0000d1d0;
    break;
  case 0x3c2:
    puVar1 = &DAT_0000d1d4;
    break;
  case 0x3c3:
    puVar1 = &DAT_0000d1d8;
    break;
  case 0x3c4:
    puVar1 = &DAT_0000d1dc;
    break;
  case 0x3c5:
    puVar1 = &DAT_0000d1e0;
    break;
  case 0x3c6:
    puVar1 = &DAT_0000d1e4;
    break;
  case 0x3c7:
    puVar1 = &DAT_0000d1e8;
    break;
  case 0x3c8:
    puVar1 = &DAT_0000d1ec;
    break;
  case 0x3c9:
    puVar1 = &DAT_0000d1f0;
    break;
  case 0x3ca:
    puVar1 = &DAT_0000d1f4;
    break;
  case 0x3cb:
    puVar1 = &DAT_0000d1f8;
    break;
  case 0x3cc:
    puVar1 = &DAT_0000d1fc;
    break;
  case 0x3cd:
    puVar1 = &DAT_0000d200;
    break;
  case 0x3ce:
    puVar1 = &DAT_0000d204;
    break;
  case 0x3cf:
    puVar1 = &DAT_0000d208;
    break;
  case 0x3d0:
    puVar1 = &DAT_0000d20c;
    break;
  case 0x3d1:
    puVar1 = &DAT_0000d210;
    break;
  case 0x3d2:
    puVar1 = &DAT_0000d214;
    break;
  case 0x3d3:
    puVar1 = &DAT_0000d218;
    break;
  case 0x3d4:
    puVar1 = &DAT_0000d21c;
    break;
  case 0x3d5:
    puVar1 = &DAT_0000d220;
    break;
  case 0x3d6:
    puVar1 = &DAT_0000d224;
    break;
  case 0x3d7:
    puVar1 = &DAT_0000d228;
    break;
  case 0x3d8:
    puVar1 = &DAT_0000d22c;
    break;
  case 0x3d9:
    puVar1 = &DAT_0000d230;
    break;
  case 0x3da:
    puVar1 = &DAT_0000d234;
    break;
  case 0x3db:
    puVar1 = &DAT_0000d238;
    break;
  case 0x3dc:
    puVar1 = &DAT_0000d23c;
    break;
  case 0x3dd:
    puVar1 = &DAT_0000d240;
    break;
  case 0x3de:
    printf("Hmm...");
  case 0x3df:
    puVar1 = &DAT_0000d244;
    break;
  case 0x3e0:
    puVar1 = &DAT_0000d248;
    break;
  case 0x3e1:
    puVar1 = &DAT_0000d24c;
    break;
  case 0x3e2:
    puVar1 = &DAT_0000d250;
    break;
  case 0x3e3:
    puVar1 = &DAT_0000d254;
    break;
  case 0x3e4:
    puVar1 = &DAT_0000d258;
    break;
  case 0x3e5:
    puVar1 = &DAT_0000d25c;
    break;
  case 0x3e6:
    puVar1 = &DAT_0000d260;
    break;
  case 999:
    puVar1 = &DAT_0000d264;
    break;
  default:
    puVar1 = &DAT_0000d268;
  }
  return puVar1;
}



undefined4 main(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0000c2f8)

void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code **ppcVar1;
  int iVar2;
  
  _init(param_1);
  iVar2 = 0;
  do {
    ppcVar1 = (code **)(&__frame_dummy_init_array_entry + iVar2);
    iVar2 = iVar2 + 1;
    (**ppcVar1)(param_1,param_2,param_3,*ppcVar1,param_4);
  } while (iVar2 != 1);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}


