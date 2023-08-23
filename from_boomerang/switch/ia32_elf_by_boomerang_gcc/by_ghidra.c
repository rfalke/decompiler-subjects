typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef ulong size_t;

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

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

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




void _PROCEDURE_LINKAGE_TABLE_(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _cleanup(EVP_PKEY_CTX *ctx)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int atexit(__func *__func)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void __fpstart(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void exit(int __status)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * malloc(size_t __size)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void free(void *__ptr)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void abort(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void processEntry _start(__func *param_1,EVP_PKEY_CTX *param_2)

{
  int __status;
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  atexit(_cleanup);
  atexit(param_1);
  pcVar3 = _fini;
  atexit(_fini);
  environ = &stack0x00000008 + (int)param_2 * 4;
  puVar1 = &stack0x00000004;
  puVar2 = environ;
  _init(param_2);
  __fpstart(param_2,puVar1,puVar2,pcVar3,param_1,uVar4,uVar5);
  __status = main();
                    // WARNING: Subroutine does not return
  exit(__status);
}



void _mcount(void)

{
  return;
}



void gcc2_compiled_(void)

{
  code *pcVar1;
  
  while (*(int *)p_2 != 0) {
    pcVar1 = *(code **)p_2;
    p_2 = p_2 + 4;
    (*pcVar1)();
  }
  __deregister_frame_info(&cie_0804a56c);
  return;
}



void fini_dummy(void)

{
  return;
}



void frame_dummy(void)

{
  __register_frame_info(&cie_0804a56c,object_7);
  return;
}



void init_dummy(void)

{
  return;
}



undefined4 main(undefined4 param_1)

{
  char *__format;
  
  switch(param_1) {
  case 2:
    __format = "Two!\n";
    break;
  case 3:
    __format = "Three!\n";
    break;
  case 4:
    __format = "Four!\n";
    break;
  case 5:
    __format = "Five!\n";
    break;
  case 6:
    __format = "Six!\n";
    break;
  case 7:
    __format = "Seven!\n";
    break;
  default:
    __format = "Other!\n";
  }
  printf(__format);
  return 0;
}



byte * decode_uleb128(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = 0;
  bVar2 = 0;
  while( true ) {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar3 = uVar3 | (bVar1 & 0x7f) << (bVar2 & 0x1f);
    if (-1 < (char)bVar1) break;
    bVar2 = bVar2 + 7;
  }
  *param_2 = uVar3;
  return param_1;
}



byte * decode_sleb128(byte *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  uVar2 = 0;
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    local_8 = local_8 | (bVar1 & 0x7f) << ((byte)uVar2 & 0x1f);
    uVar2 = uVar2 + 7;
  } while ((char)bVar1 < '\0');
  if ((uVar2 < 0x20) && ((bVar1 & 0x40) != 0)) {
    local_8 = local_8 | -1 << ((byte)uVar2 & 0x1f);
  }
  *param_2 = local_8;
  return param_1;
}



void fde_insert(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined4 *)(param_1 + param_2 * 4) = param_3;
  if (param_2 != 0) {
    piVar3 = (int *)(param_1 + param_2 * 4);
    do {
      iVar1 = *piVar3;
      iVar2 = *(int *)(param_1 + -4 + param_2 * 4);
      if (-1 < *(int *)(iVar1 + 8) - *(int *)(iVar2 + 8)) {
        return;
      }
      *piVar3 = iVar2;
      *(int *)(param_1 + -4 + param_2 * 4) = iVar1;
      piVar3 = piVar3 + -1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



int count_fdes(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *param_1;
  while (iVar1 != 0) {
    if ((param_1[1] != 0) && (param_1[2] != 0)) {
      iVar2 = iVar2 + 1;
    }
    iVar1 = *(int *)((int)param_1 + *param_1 + 4);
    param_1 = (int *)((int)param_1 + *param_1 + 4);
  }
  return iVar2;
}



void add_fdes(int *param_1,undefined4 param_2,int *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_c;
  uint local_8;
  
  local_8 = *param_4;
  local_c = *param_5;
  iVar2 = *param_1;
  iVar3 = *param_3;
  while (iVar2 != 0) {
    iVar4 = iVar3;
    if ((param_1[1] != 0) && (param_1[2] != 0)) {
      iVar4 = iVar3 + 1;
      fde_insert(param_2,iVar3,param_1);
      uVar1 = param_1[2];
      if (uVar1 < local_8) {
        local_8 = uVar1;
      }
      if (local_c < uVar1 + param_1[3]) {
        local_c = uVar1 + param_1[3];
      }
    }
    iVar2 = *(int *)((int)param_1 + *param_1 + 4);
    iVar3 = iVar4;
    param_1 = (int *)((int)param_1 + *param_1 + 4);
  }
  *param_3 = iVar3;
  *param_4 = local_8;
  *param_5 = local_c;
  return;
}



void frame_init(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar3 = (int *)param_1[3];
  if (piVar3 == (int *)0x0) {
    local_10 = count_fdes(param_1[2]);
  }
  else {
    local_10 = 0;
    iVar1 = *piVar3;
    while (iVar1 != 0) {
      iVar1 = count_fdes(*piVar3);
      local_10 = local_10 + iVar1;
      piVar3 = piVar3 + 1;
      iVar1 = *piVar3;
    }
  }
  param_1[4] = local_10;
  pvVar2 = malloc(local_10 << 2);
  local_c = 0xffffffff;
  local_8 = 0;
  local_10 = 0;
  piVar3 = (int *)param_1[3];
  if (piVar3 == (int *)0x0) {
    add_fdes(param_1[2],pvVar2,&local_10,&local_c,&local_8);
  }
  else if (*piVar3 != 0) {
    do {
      add_fdes(*piVar3,pvVar2,&local_10,&local_c,&local_8);
      piVar3 = piVar3 + 1;
    } while (*piVar3 != 0);
  }
  param_1[3] = pvVar2;
  *param_1 = local_c;
  param_1[1] = local_8;
  return;
}



int find_fde(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint local_8;
  
  puVar3 = objects;
  if (objects != (uint *)0x0) {
    do {
      if (*puVar3 == 0) {
        frame_init(puVar3);
      }
    } while (((param_1 <= *puVar3 && *puVar3 != param_1) ||
             (puVar3[1] < param_1 || puVar3[1] == param_1)) &&
            (puVar3 = (uint *)puVar3[5], puVar3 != (uint *)0x0));
    if (puVar3 != (uint *)0x0) {
      uVar4 = 0;
      local_8 = puVar3[4];
      if (local_8 != 0) {
        do {
          uVar2 = local_8 + uVar4 >> 1;
          iVar1 = *(int *)(puVar3[3] + uVar2 * 4);
          if (*(uint *)(iVar1 + 8) <= param_1) {
            if (param_1 <= *(uint *)(iVar1 + 8) + *(int *)(iVar1 + 0xc)) {
              return iVar1;
            }
            uVar4 = uVar2 + 1;
            uVar2 = local_8;
          }
          local_8 = uVar2;
        } while (uVar4 < local_8);
      }
    }
  }
  return 0;
}



byte * extract_cie_info(int param_1,char **param_2)

{
  char cVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  int local_8;
  
  param_1 = param_1 - (*(int *)(param_1 + 4) + -4);
  pcVar6 = (char *)(param_1 + 9);
  *param_2 = pcVar6;
  iVar4 = 1;
  bVar9 = true;
  pcVar7 = pcVar6;
  pcVar8 = "";
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar9 = *pcVar7 == *pcVar8;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  } while (bVar9);
  if (!bVar9) {
    iVar4 = 3;
    bVar9 = true;
    pcVar7 = "eh";
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar9 = *pcVar6 == *pcVar7;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar9);
    if ((!bVar9) && (*(char *)(param_1 + 9) != 'z')) {
      return (byte *)0x0;
    }
  }
  pcVar6 = *param_2;
  uVar5 = 0xffffffff;
  pcVar7 = pcVar6;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar4 = 3;
  bVar9 = true;
  pcVar7 = pcVar6;
  pcVar8 = "eh";
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar9 = *pcVar7 == *pcVar8;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  } while (bVar9);
  if (bVar9) {
    param_2[1] = *(char **)(pcVar6 + uVar5);
    uVar5 = uVar5 + 4;
  }
  else {
    param_2[1] = (char *)0x0;
  }
  uVar2 = decode_uleb128(pcVar6 + uVar5,param_2 + 2);
  pbVar3 = (byte *)decode_sleb128(uVar2,param_2 + 3);
  param_2[4] = (char *)(uint)*pbVar3;
  pbVar3 = pbVar3 + 1;
  if (**param_2 == 'z') {
    iVar4 = decode_uleb128(pbVar3,&local_8);
    pbVar3 = (byte *)(iVar4 + local_8);
  }
  return pbVar3;
}



int * execute_cfa_insn(int *param_1,undefined4 *param_2,int param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  bVar1 = *(byte *)param_1;
  uVar2 = (uint)bVar1;
  piVar5 = (int *)((int)param_1 + 1);
  local_14 = bVar1 & 0x40;
  if ((bVar1 & 0x40) == 0) {
    if ((char)bVar1 < '\0') {
      local_c = uVar2 & 0x3f;
      piVar5 = (int *)decode_uleb128(piVar5,&local_8);
      iVar6 = *(int *)(param_3 + 0xc);
      *(undefined *)(local_c + 0x5c + (int)param_2) = 1;
      param_2[local_c + 4] = local_8 * iVar6;
    }
    else if ((bVar1 & 0xc0) == 0) {
      switch(uVar2) {
      case 0:
      case 7:
      case 8:
        break;
      case 1:
        *param_4 = *piVar5;
        piVar5 = (int *)((int)param_1 + 5);
        break;
      case 2:
        *param_4 = *param_4 + (uint)*(byte *)piVar5;
        piVar5 = (int *)((int)param_1 + 2);
        break;
      case 3:
        *param_4 = *param_4 + (uint)*(ushort *)piVar5;
        piVar5 = (int *)((int)param_1 + 3);
        break;
      case 4:
        *param_4 = *param_4 + *piVar5;
        piVar5 = (int *)((int)param_1 + 5);
        break;
      case 5:
        uVar3 = decode_uleb128(piVar5,&local_c);
        piVar5 = (int *)decode_uleb128(uVar3,&local_8);
        iVar6 = *(int *)(param_3 + 0xc);
        *(undefined *)(local_c + 0x5c + (int)param_2) = 1;
        param_2[local_c + 4] = local_8 * iVar6;
        break;
      case 6:
        piVar5 = (int *)decode_uleb128(piVar5,&local_c);
        *(undefined *)(local_c + 0x5c + (int)param_2) = 0;
        break;
      case 9:
        uVar3 = decode_uleb128(piVar5,&local_c);
        piVar5 = (int *)decode_uleb128(uVar3,&local_10);
        *(undefined *)(local_c + 0x5c + (int)param_2) = 2;
        param_2[local_c + 4] = local_10;
        break;
      case 10:
        puVar4 = (undefined4 *)malloc(0x74);
        puVar7 = param_2;
        puVar8 = puVar4;
        for (iVar6 = 0x1d; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        param_2[0x1c] = puVar4;
        break;
      case 0xb:
        puVar7 = (undefined4 *)param_2[0x1c];
        puVar8 = puVar7;
        for (iVar6 = 0x1d; iVar6 != 0; iVar6 = iVar6 + -1) {
          *param_2 = *puVar8;
          puVar8 = puVar8 + 1;
          param_2 = param_2 + 1;
        }
        free(puVar7);
        break;
      case 0xc:
        uVar3 = decode_uleb128(piVar5,&local_c);
        piVar5 = (int *)decode_uleb128(uVar3,&local_8);
        *(undefined2 *)(param_2 + 0x16) = (undefined2)local_c;
        param_2[2] = local_8;
        break;
      case 0xd:
        piVar5 = (int *)decode_uleb128(piVar5,&local_c);
        *(short *)(param_2 + 0x16) = (short)local_c;
        break;
      case 0xe:
        piVar5 = (int *)decode_uleb128(piVar5,&local_8);
        param_2[2] = local_8;
        break;
      default:
                    // WARNING: Subroutine does not return
        abort();
      case 0x2d:
        local_c = 0x10;
        do {
          *(undefined *)(local_c + 0x5c + (int)param_2) = 1;
          param_2[local_c + 4] = local_c * 4 + -0x40;
          local_c = local_c + 1;
        } while (local_c < 0x20);
        break;
      case 0x2e:
        piVar5 = (int *)decode_uleb128(piVar5,&local_8);
        param_2[3] = local_8;
      }
    }
    else {
      *(byte *)((uVar2 & 0x3f) + 0x5c + (int)param_2) = local_14;
    }
  }
  else {
    *param_4 = *param_4 + (uVar2 & 0x3f) * *(int *)(param_3 + 8);
  }
  param_1 = piVar5;
  return param_1;
}



void __register_frame_info(undefined4 param_1,undefined4 *param_2)

{
  param_2[2] = param_1;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = objects;
  objects = param_2;
  return;
}



void __register_frame_info_table(undefined4 param_1,undefined4 *param_2)

{
  param_2[2] = param_1;
  param_2[3] = param_1;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[4] = 0;
  param_2[5] = objects;
  objects = param_2;
  return;
}



void __deregister_frame_info(int param_1)

{
  int **ppiVar1;
  int *piVar2;
  bool bVar3;
  
  ppiVar1 = (int **)&objects;
  bVar3 = objects != 0;
  while( true ) {
    if (!bVar3) {
                    // WARNING: Subroutine does not return
      abort();
    }
    piVar2 = *ppiVar1;
    if (piVar2[2] == param_1) break;
    ppiVar1 = (int **)(piVar2 + 5);
    bVar3 = piVar2[5] != 0;
  }
  *ppiVar1 = (int *)piVar2[5];
  if (*piVar2 != 0) {
    free((void *)piVar2[3]);
  }
  return;
}



int * __frame_state_for(uint param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint local_94;
  int local_90;
  int local_8c [22];
  undefined2 local_32;
  char *local_18;
  undefined4 local_14;
  undefined2 local_8;
  
  piVar1 = (int *)find_fde(param_1);
  piVar2 = piVar1;
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)extract_cie_info(piVar1,&local_18);
    if (piVar2 != (int *)0x0) {
      memset(local_8c,0,0x74);
      local_32 = local_8;
      local_8c[1] = local_14;
      piVar4 = (int *)((int)piVar1 - (piVar1[1] + -4));
      iVar3 = *piVar4;
      for (; piVar2 < (int *)((int)piVar4 + iVar3 + 4);
          piVar2 = (int *)execute_cfa_insn(piVar2,local_8c,&local_18,0)) {
      }
      piVar2 = piVar1 + 4;
      if (*local_18 == 'z') {
        iVar3 = decode_uleb128(piVar2,&local_90);
        piVar2 = (int *)(iVar3 + local_90);
      }
      piVar4 = (int *)((int)piVar1 + *piVar1 + 4);
      local_94 = piVar1[2];
      if (piVar2 < piVar4) {
        do {
          if (param_1 < local_94) break;
          piVar2 = (int *)execute_cfa_insn(piVar2,local_8c,&local_18,&local_94);
        } while (piVar2 < piVar4);
      }
      piVar1 = local_8c;
      piVar4 = param_2;
      for (iVar3 = 0x1c; piVar2 = param_2, iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar4 = *piVar1;
        piVar1 = piVar1 + 1;
        piVar4 = piVar4 + 1;
      }
    }
  }
  return piVar2;
}



void gcc2_compiled_(void)

{
  code **ppcVar1;
  bool bVar2;
  
  ppcVar1 = (code **)&force_to_data;
  bVar2 = force_to_data != -1;
  while (bVar2) {
    (**ppcVar1)();
    ppcVar1 = ppcVar1 + -1;
    bVar2 = *ppcVar1 != (code *)0xffffffff;
  }
  return;
}



void init_dummy(void)

{
  return;
}



int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  frame_dummy();
  iVar1 = gcc2_compiled_();
  return iVar1;
}



void _fini(void)

{
  gcc2_compiled_();
  return;
}


