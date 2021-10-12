typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    word;
typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType_AARCH64 {
    SHT_AARCH64_ATTRIBUTES=1879048195,
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
} Elf_SectionHeaderType_AARCH64;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_AARCH64 sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

typedef enum Elf_ProgramHeaderType_AARCH64 {
    PT_AARCH64_ARCHEXT=1879048192,
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
} Elf_ProgramHeaderType_AARCH64;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType_AARCH64 p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Dyn_AARCH64 Elf64_Dyn_AARCH64, *PElf64_Dyn_AARCH64;

typedef enum Elf64_DynTag_AARCH64 {
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
} Elf64_DynTag_AARCH64;

struct Elf64_Dyn_AARCH64 {
    enum Elf64_DynTag_AARCH64 d_tag;
    qword d_val;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct Gnu_BuildId Gnu_BuildId, *PGnu_BuildId;

struct Gnu_BuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Build-id vendor name
    byte description[20]; // Build-id value
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
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



void FUN_00100680(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
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



// WARNING: Unknown calling convention yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



int main(void)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  int extraout_w8;
  ulong uVar9;
  
  uVar5 = 7;
  uVar8 = 9;
  uVar9 = 0;
  do {
    iVar1 = (int)uVar9;
    uVar4 = (uint)uVar5;
    uVar6 = (uint)uVar8;
    if (uVar6 == 1) {
      iVar2 = 0;
      uVar7 = uVar6;
    }
    else {
      uVar9 = (ulong)(uVar4 + 1);
      uVar3 = (ulong)((uVar4 - 1) - (uVar4 & 0xfffffffe));
      iVar2 = 0;
      do {
        iVar1 = (int)uVar9;
        uVar9 = (ulong)(iVar1 - 2);
        iVar1 = fib(iVar1);
        uVar4 = (uint)uVar5;
        iVar2 = iVar2 + iVar1;
      } while ((int)uVar9 != (int)uVar3);
      uVar6 = uVar4 & 1;
      iVar1 = extraout_w8;
      uVar7 = (uint)uVar8;
    }
    uVar5 = (ulong)(uVar4 - 2);
    uVar9 = (ulong)(iVar1 + iVar2 + uVar6);
    uVar8 = (ulong)(uVar7 - 2);
  } while (uVar4 - 2 != 0xfffffffd);
  printf("%i\n",uVar9);
  return 0;
}



void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1)
  ;
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x001007c4)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x001007e8)
// WARNING: Removing unreachable block (ram,0x001007f4)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00100824)
// WARNING: Removing unreachable block (ram,0x00100830)

void register_tm_clones(void)

{
  return;
}



void FUN_0010083c(void)

{
  if (completed_7433 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_7433 = '\x01';
  }
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_7433 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_7433 = '\x01';
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void frame_dummy(void)

{
  if (___JCR_END__ == 0) {
    register_tm_clones();
    return;
  }
  _Jv_RegisterClasses();
  register_tm_clones();
  return;
}



int fib(int x)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint x_00;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (x < 2) {
    local_8 = 0;
  }
  else {
    local_38 = x - 3;
    local_3c = x - 1;
    uVar4 = local_38 - (x - 2U & 0xfffffffe);
    local_8 = 0;
    do {
      if (local_3c == 1) {
        local_c = 0;
        uVar9 = local_3c;
      }
      else {
        local_24 = local_3c - 1;
        local_20 = local_3c - 3;
        local_c = 0;
        local_50 = local_3c;
        do {
          if (local_24 == 1) {
            local_18 = 0;
            uVar9 = local_24;
          }
          else {
            local_44 = local_50 - 2;
            local_40 = local_50 - 4;
            uVar9 = local_40 - (local_20 & 0xfffffffe);
            local_18 = 0;
            do {
              if (local_44 == 1) {
                local_10 = 0;
                uVar8 = local_44;
              }
              else {
                local_2c = local_44 - 1;
                local_28 = local_44 - 3;
                local_10 = 0;
                local_54 = local_44;
                do {
                  if (local_2c == 1) {
                    local_1c = 0;
                    uVar8 = local_2c;
                  }
                  else {
                    local_4c = local_54 - 2;
                    local_48 = local_54 - 4;
                    uVar8 = local_48 - (local_28 & 0xfffffffe);
                    local_1c = 0;
                    do {
                      if (local_4c == 1) {
                        local_14 = 0;
                        uVar13 = local_4c;
                      }
                      else {
                        local_34 = local_4c - 1;
                        local_30 = local_4c - 3;
                        local_14 = 0;
                        local_58 = local_4c;
                        do {
                          if (local_34 == 1) {
                            iVar14 = 0;
                            uVar13 = local_34;
                          }
                          else {
                            uVar1 = local_58 - 2;
                            uVar13 = local_58 - 4;
                            uVar5 = uVar13 - (local_30 & 0xfffffffe);
                            iVar14 = 0;
                            do {
                              if (uVar1 == 1) {
                                iVar15 = 0;
                                uVar12 = uVar1;
                              }
                              else {
                                uVar12 = uVar1 - 1;
                                uVar11 = uVar1 - 3;
                                iVar15 = 0;
                                uVar7 = uVar1;
                                do {
                                  uVar2 = uVar7 - 2;
                                  if (uVar12 == 1) {
                                    iVar10 = 0;
                                    uVar7 = uVar12;
                                  }
                                  else {
                                    iVar10 = 0;
                                    x_00 = uVar2;
                                    do {
                                      uVar3 = x_00 - 2;
                                      iVar6 = fib(x_00);
                                      iVar10 = iVar10 + iVar6;
                                      x_00 = uVar3;
                                    } while ((uVar7 - 4) - (uVar11 & 0xfffffffe) != uVar3);
                                    uVar7 = uVar11 & 1;
                                  }
                                  iVar15 = iVar15 + uVar7 + iVar10;
                                  uVar12 = uVar12 - 2;
                                  uVar11 = uVar11 - 2;
                                  uVar7 = uVar2;
                                } while (1 < (int)uVar2);
                                uVar12 = uVar13 & 1;
                              }
                              uVar1 = uVar1 - 2;
                              uVar13 = uVar13 - 2;
                              iVar14 = iVar14 + uVar12 + iVar15;
                            } while (uVar5 != uVar1);
                            uVar13 = local_30 & 1;
                          }
                          local_58 = local_58 - 2;
                          local_14 = local_14 + uVar13 + iVar14;
                          local_34 = local_34 - 2;
                          local_30 = local_30 - 2;
                        } while (1 < (int)local_58);
                        uVar13 = local_48 & 1;
                      }
                      local_4c = local_4c - 2;
                      local_1c = local_1c + local_14 + uVar13;
                      local_48 = local_48 - 2;
                    } while (uVar8 != local_4c);
                    uVar8 = local_28 & 1;
                  }
                  local_54 = local_54 - 2;
                  local_10 = local_10 + local_1c + uVar8;
                  local_2c = local_2c - 2;
                  local_28 = local_28 - 2;
                } while (1 < (int)local_54);
                uVar8 = local_40 & 1;
              }
              local_18 = local_18 + uVar8 + local_10;
              local_44 = local_44 - 2;
              local_40 = local_40 - 2;
            } while (uVar9 != local_44);
            uVar9 = local_20 & 1;
          }
          local_50 = local_50 - 2;
          local_c = local_c + uVar9 + local_18;
          local_24 = local_24 - 2;
          local_20 = local_20 - 2;
        } while (1 < (int)local_50);
        uVar9 = local_38 & 1;
      }
      local_3c = local_3c - 2;
      local_8 = local_8 + local_c + uVar9;
      local_38 = local_38 - 2;
    } while (uVar4 != local_3c);
    x = x - 2U & 1;
  }
  return local_8 + x;
}



undefined8 __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  undefined8 uVar2;
  long lVar3;
  
  _init(param_1);
  lVar3 = 0;
  do {
    ppcVar1 = (code **)(&__frame_dummy_init_array_entry + lVar3);
    lVar3 = lVar3 + 1;
    uVar2 = (**ppcVar1)((ulong)param_1 & 0xffffffff,param_2,param_3);
  } while (lVar3 != 1);
  return uVar2;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}


