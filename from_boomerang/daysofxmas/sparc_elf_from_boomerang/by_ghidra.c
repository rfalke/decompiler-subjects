typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef enum Elf_ProgramHeaderType {
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
} Elf_ProgramHeaderType;

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

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType {
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
} Elf_SectionHeaderType;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef enum Elf32_DynTag {
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
} Elf32_DynTag;

typedef struct Elf32_Rela Elf32_Rela, *PElf32_Rela;

struct Elf32_Rela {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
    dword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf32_Dyn Elf32_Dyn, *PElf32_Dyn;

struct Elf32_Dyn {
    enum Elf32_DynTag d_tag;
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




// WARNING: Removing unreachable block (ram,0x0001050c)
// WARNING: Removing unreachable block (ram,0x00010504)
// WARNING: Removing unreachable block (ram,0x00010534)
// WARNING: Removing unreachable block (ram,0x000104f4)

void _start(void)

{
  __func *unaff_g1;
  EVP_PKEY_CTX *ctx;
  int __status;
  int local_res40;
  undefined auStackX68 [4];
  undefined auStackX72 [20];
  
  if (unaff_g1 != (__func *)0x0) {
    atexit(unaff_g1);
  }
  ctx = (EVP_PKEY_CTX *)atexit(_fini);
  _init(ctx);
  environ = auStackX68 + local_res40 * 4 + 4;
  __status = main(local_res40,auStackX68);
                    // WARNING: Subroutine does not return
  exit(__status);
}



// WARNING: This is an inlined function

void FUN_0001054c(void)

{
  return;
}



// WARNING: Inlined function: FUN_0001054c
// WARNING: Removing unreachable block (ram,0x000105e0)
// WARNING: Removing unreachable block (ram,0x00010554)
// WARNING: Removing unreachable block (ram,0x00010560)

undefined4 __do_global_dtors_aux(undefined4 param_1)

{
  code *pcVar1;
  
  if (completed_1 == '\0') {
    pcVar1 = *(code **)p_0;
    while (pcVar1 != (code *)0x0) {
      p_0 = p_0 + 4;
      (*pcVar1)();
      pcVar1 = *(code **)p_0;
    }
    FUN_00020ba0(&__FRAME_END__);
    completed_1 = '\x01';
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00010604)
// WARNING: Removing unreachable block (ram,0x0001060c)

undefined4 call___do_global_dtors_aux(undefined4 param_1)

{
  return param_1;
}



// WARNING: Inlined function: FUN_0001054c
// WARNING: Removing unreachable block (ram,0x00010614)
// WARNING: Removing unreachable block (ram,0x0001064c)
// WARNING: Removing unreachable block (ram,0x00010620)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined *
frame_dummy(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
           undefined4 param_5,undefined4 param_6)

{
  undefined *puVar1;
  
  FUN_00020bac(&__FRAME_END__,object_2);
  if (___JCR_END__ == 0) {
    return &__JCR_END__;
  }
  puVar1 = (undefined *)FUN_00020bb8(&__JCR_END__,param_2,param_3,param_4,param_5,param_6);
  return puVar1;
}



// WARNING: Removing unreachable block (ram,0x00010698)
// WARNING: Removing unreachable block (ram,0x000106a0)

undefined4 call_frame_dummy(undefined4 param_1)

{
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000107c4)
// WARNING: Removing unreachable block (ram,0x00010758)
// WARNING: Removing unreachable block (ram,0x0001072c)
// WARNING: Removing unreachable block (ram,0x00010718)
// WARNING: Removing unreachable block (ram,0x000106a8)
// WARNING: Removing unreachable block (ram,0x000106d8)
// WARNING: Removing unreachable block (ram,0x0001076c)
// WARNING: Removing unreachable block (ram,0x00010740)
// WARNING: Removing unreachable block (ram,0x000107b4)
// WARNING: Removing unreachable block (ram,0x00010848)

uint main(int param_1,int param_2,char *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  if (param_1 < 2) {
    if (param_1 < 0) {
      if (param_1 < -0x48) {
        pcVar5 = 
        "@n\'+,#\'/*{}w+/w#cdnr/+,{}r/*de}+,/*{*+,/w{%+,/w#q#n+,/#{l,+,/n{n+,/+#n+,/#;#q#n+,/+k#;*+,/\'r :\'d*\'3,}{w+K w\'K:\'+}e#\';dq#\'l q#\'+d\'K#!/+k#;q#\'r}eKK#}w\'r}eKK{nl]\'/#;#q#n\'){)#}w\'){){nl]\'/+#n\';d}rw\' i;# ){nl]!/n{n#\'; r{#w\'r nc{nl]\'/#{l,+\'K {rw\' iK{;[{nl]\'/w#q#n\'wk nw\' iwk{KK{nl]!/w{%\'l##w#\' i; :{nl]\'/*{q#\'ld;r\'}{nlwb!/*de}\'c ;;{nl\'-{}rw]\'/+,}##\'*}#nc,\',#nw]\'/+kd\'+e}+;#\'rdq#w! nr\'/ \') }+}{rl#\'{n\' \')# }\'+}##(!!/"
        ;
        iVar2 = param_2;
      }
      else if (param_1 < -0x32) {
        pcVar5 = param_3 + 1;
        if (param_2 == *param_3) {
          __iob._16_4_ = __iob._16_4_ + -1;
          if (-1 < __iob._16_4_) {
            bVar1 = param_3[0x1f];
            *__iob._20_4_ = bVar1;
            __iob._20_4_ = __iob._20_4_ + 1;
            return (uint)bVar1;
          }
          uVar3 = __flsbuf((int)param_3[0x1f],0x20cf0,pcVar5);
          return uVar3;
        }
        iVar2 = -0x41;
        param_1 = param_2;
      }
      else {
        pcVar5 = param_3 + 1;
        iVar2 = (param_1 + 1) - (uint)(*param_3 != 0x2f);
        param_1 = param_2;
      }
    }
    else {
      if (param_1 < 1) {
        if (*param_3 != 0x2f) {
          uVar4 = main(0xffffffc3,(int)*param_3,
                       "!ek;dc i@bK\'(q)-[w]*%n+r3#l,{}:\nuwloca-O;m .vpbks,fxntdCeghiry");
          iVar2 = main(0,uVar4,param_3 + 1);
          if (iVar2 == 0) {
            return 0;
          }
        }
        return 1;
      }
      pcVar5 = "%s";
      iVar2 = 2;
      param_1 = 2;
    }
  }
  else {
    if (param_1 < 3) {
      iVar2 = main(0xffffffaa,0,param_3 + 1);
      iVar2 = main(0xffffffa9,1 - param_2,param_3 + iVar2);
      main(0xffffffb1,0xfffffff3,param_3 + iVar2);
    }
    if (param_1 < param_2) {
      main(param_1 + 1,param_2,param_3);
    }
    iVar2 = main(0xffffffa2,param_1 + -0x1b,param_3);
    if (iVar2 == 0) {
      return 0x10;
    }
    if (param_1 != 2) {
      return 0x10;
    }
    if (0xc < param_2) {
      return 9;
    }
    pcVar5 = "%s %d %d\n";
    iVar2 = 2;
    param_1 = param_2 + 1;
  }
  uVar3 = main(iVar2,param_1,pcVar5);
  return uVar3;
}



// WARNING: This is an inlined function

void FUN_00010890(void)

{
  return;
}



// WARNING: Inlined function: FUN_00010890
// WARNING: Removing unreachable block (ram,0x00010898)
// WARNING: Removing unreachable block (ram,0x000108a4)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __do_global_ctors_aux(undefined4 param_1)

{
  code *pcVar1;
  code **ppcVar2;
  bool bVar3;
  
  bVar3 = ___CTOR_LIST__ != (code *)0xffffffff;
  ppcVar2 = (code **)&__CTOR_LIST__;
  pcVar1 = ___CTOR_LIST__;
  while (bVar3) {
    ppcVar2 = ppcVar2 + -1;
    (*pcVar1)();
    pcVar1 = *ppcVar2;
    bVar3 = pcVar1 != (code *)0xffffffff;
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000108e8)
// WARNING: Removing unreachable block (ram,0x000108f0)

undefined4 call___do_global_ctors_aux(undefined4 param_1)

{
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00010904)
// WARNING: Removing unreachable block (ram,0x000108f8)
// WARNING: Removing unreachable block (ram,0x000108fc)

int _init(EVP_PKEY_CTX *ctx)

{
  frame_dummy();
  __do_global_ctors_aux();
  return (int)ctx;
}



// WARNING: Removing unreachable block (ram,0x00010914)
// WARNING: Removing unreachable block (ram,0x00010918)

undefined4 _fini(undefined4 param_1)

{
  __do_global_dtors_aux();
  return param_1;
}



void _PROCEDURE_LINKAGE_TABLE_(void)

{
  IllegalInstructionTrap(0);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int atexit(__func *__func)

{
  IllegalInstructionTrap(0x20b7c);
  return (int)__func;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
  IllegalInstructionTrap(0x20b88);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _exit(int __status)

{
  IllegalInstructionTrap(0x20b94);
  return;
}



void FUN_00020ba0(void)

{
  IllegalInstructionTrap(0x21008);
  return;
}



void FUN_00020bac(void)

{
  IllegalInstructionTrap(0x21004);
  return;
}



void FUN_00020bb8(void)

{
  IllegalInstructionTrap(0x21000);
  return;
}



void __flsbuf(void)

{
  IllegalInstructionTrap(0x20bc4);
  return;
}


