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




void _PROCEDURE_LINKAGE_TABLE_(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _cleanup(EVP_PKEY_CTX *ctx)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

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



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

void abort(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _start(void)

{
  int __status;
  __func *in_EDX;
  EVP_PKEY_CTX *local_res0;
  undefined *puVar1;
  undefined *puVar2;
  
  atexit(_cleanup);
  atexit(in_EDX);
  atexit(_fini);
  environ = &stack0x00000008 + (int)local_res0 * 4;
  puVar1 = &stack0x00000004;
  puVar2 = environ;
  _init(local_res0);
  __fpstart(local_res0,puVar1,puVar2);
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
  __deregister_frame_info(&cie_0804a5ac);
  return;
}



void fini_dummy(void)

{
  return;
}



void frame_dummy(void)

{
  __register_frame_info(&cie_0804a5ac,object_7);
  return;
}



void init_dummy(void)

{
  return;
}



int add5(int param_1)

{
  return param_1 + 5;
}



int add10(int param_1)

{
  return param_1 + 10;
}



int add15(int param_1)

{
  return param_1 + 0xf;
}



void printarg(undefined4 param_1)

{
  printf("Fifty five is %d\n",param_1);
  return;
}



undefined4 main(void)

{
  undefined4 uVar1;
  
  uVar1 = add15(0x19);
  uVar1 = add10(uVar1);
  uVar1 = add5(uVar1);
  printarg(uVar1);
  return 0;
}



byte * decode_uleb128(byte *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = 0;
  while( true ) {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar3 = uVar3 | ((uint)bVar1 & 0x7f) << ((byte)iVar2 & 0x1f);
    if (-1 < (char)bVar1) break;
    iVar2 = iVar2 + 7;
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
    local_8 = local_8 | ((uint)bVar1 & 0x7f) << ((byte)uVar2 & 0x1f);
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
    iVar1 = (int)param_1 + *param_1;
    param_1 = (int *)(iVar1 + 4);
    iVar1 = *(int *)(iVar1 + 4);
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
  iVar3 = *param_1;
  iVar2 = *param_3;
  while (iVar3 != 0) {
    iVar4 = iVar2;
    if ((param_1[1] != 0) && (param_1[2] != 0)) {
      iVar4 = iVar2 + 1;
      fde_insert(param_2,iVar2,param_1);
      uVar1 = param_1[2];
      if (uVar1 < local_8) {
        local_8 = uVar1;
      }
      if (local_c < uVar1 + param_1[3]) {
        local_c = uVar1 + param_1[3];
      }
    }
    iVar3 = (int)param_1 + *param_1;
    param_1 = (int *)(iVar3 + 4);
    iVar3 = *(int *)(iVar3 + 4);
    iVar2 = iVar4;
  }
  *param_3 = iVar2;
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
  else {
    if (*piVar3 != 0) {
      do {
        add_fdes(*piVar3,pvVar2,&local_10,&local_c,&local_8);
        piVar3 = piVar3 + 1;
      } while (*piVar3 != 0);
    }
  }
  *(void **)(param_1 + 3) = pvVar2;
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
  int iVar3;
  uint uVar4;
  char *pcVar5;
  byte *pbVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  int local_8;
  
  param_1 = param_1 - (*(int *)(param_1 + 4) + -4);
  pcVar8 = (char *)(param_1 + 9);
  *param_2 = pcVar8;
  iVar3 = 1;
  bVar10 = true;
  pcVar7 = pcVar8;
  pcVar9 = "";
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar10 = *pcVar7 == *pcVar9;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar10);
  if (!bVar10) {
    iVar3 = 3;
    bVar10 = true;
    pcVar7 = "eh";
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar10 = *pcVar8 == *pcVar7;
      pcVar8 = pcVar8 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar10);
    if ((!bVar10) && (*(char *)(param_1 + 9) != 'z')) {
      return (byte *)0;
    }
  }
  pcVar8 = *param_2;
  uVar4 = 0xffffffff;
  pcVar7 = pcVar8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  pcVar7 = pcVar8 + (~uVar4 - 1);
  pcVar5 = pcVar7 + 1;
  iVar3 = 3;
  bVar10 = true;
  pcVar9 = "eh";
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar10 = *pcVar8 == *pcVar9;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar10);
  if (bVar10) {
    param_2[1] = *(char **)(pcVar7 + 1);
    pcVar5 = pcVar7 + 5;
  }
  else {
    param_2[1] = (char *)0x0;
  }
  uVar2 = decode_uleb128(pcVar5,param_2 + 2);
  pbVar6 = (byte *)decode_sleb128(uVar2,param_2 + 3);
  param_2[4] = (char *)(uint)*pbVar6;
  pbVar6 = pbVar6 + 1;
  if (**param_2 == 'z') {
    iVar3 = decode_uleb128(pbVar6,&local_8);
    pbVar6 = (byte *)(iVar3 + local_8);
  }
  return pbVar6;
}



// WARNING: Could not reconcile some variable overlaps

int * execute_cfa_insn(int *param_1,undefined4 *param_2,int param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *__ptr;
  undefined4 *puVar7;
  byte local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  bVar1 = *(byte *)param_1;
  uVar2 = (uint)bVar1;
  piVar5 = (int *)((byte *)param_1 + 1);
  local_14 = bVar1 & 0x40;
  if ((bVar1 & 0x40) == 0) {
    if ((char)bVar1 < '\0') {
      local_c = uVar2 & 0x3f;
      piVar5 = (int *)decode_uleb128(piVar5,&local_8);
      iVar6 = *(int *)(param_3 + 0xc);
      *(undefined *)(local_c + 0x5c + (int)param_2) = 1;
      param_2[local_c + 4] = local_8 * iVar6;
    }
    else {
      if ((bVar1 & 0xc0) == 0) {
        switch(bVar1) {
        case 0:
        case 7:
        case 8:
          break;
        case 1:
          *param_4 = *piVar5;
          piVar5 = (int *)((byte *)param_1 + 5);
          break;
        case 2:
          *param_4 = *param_4 + (uint)*(byte *)piVar5;
          piVar5 = (int *)((byte *)param_1 + 2);
          break;
        case 3:
          *param_4 = *param_4 + (uint)*(ushort *)piVar5;
          piVar5 = (int *)((byte *)param_1 + 3);
          break;
        case 4:
          *param_4 = *param_4 + *piVar5;
          piVar5 = (int *)((byte *)param_1 + 5);
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
          iVar6 = 0x1d;
          __ptr = param_2;
          puVar7 = puVar4;
          while (iVar6 != 0) {
            iVar6 = iVar6 + -1;
            *puVar7 = *__ptr;
            __ptr = __ptr + 1;
            puVar7 = puVar7 + 1;
          }
          *(undefined4 **)(param_2 + 0x1c) = puVar4;
          break;
        case 0xb:
          __ptr = (undefined4 *)param_2[0x1c];
          iVar6 = 0x1d;
          puVar7 = __ptr;
          while (iVar6 != 0) {
            iVar6 = iVar6 + -1;
            *param_2 = *puVar7;
            puVar7 = puVar7 + 1;
            param_2 = param_2 + 1;
          }
          free(__ptr);
          break;
        case 0xc:
          uVar3 = decode_uleb128(piVar5,&local_c);
          piVar5 = (int *)decode_uleb128(uVar3,&local_8);
          *(undefined2 *)(param_2 + 0x16) = (undefined2)local_c;
          param_2[2] = local_8;
          break;
        case 0xd:
          piVar5 = (int *)decode_uleb128(piVar5,&local_c);
          *(undefined2 *)(param_2 + 0x16) = (undefined2)local_c;
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
  *(undefined4 **)(param_2 + 5) = objects;
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
  *(undefined4 **)(param_2 + 5) = objects;
  objects = param_2;
  return;
}



void __deregister_frame_info(int param_1)

{
  int *piVar1;
  int **ppiVar2;
  bool bVar3;
  
  ppiVar2 = (int **)&objects;
  bVar3 = objects != 0;
  while( true ) {
    if (!bVar3) {
                    // WARNING: Subroutine does not return
      abort();
    }
    piVar1 = *ppiVar2;
    if (piVar1[2] == param_1) break;
    ppiVar2 = (int **)(piVar1 + 5);
    bVar3 = piVar1[5] != 0;
  }
  *ppiVar2 = (int *)piVar1[5];
  if (*piVar1 != 0) {
    free((void *)piVar1[3]);
  }
  return;
}



int * __frame_state_for(uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint local_94;
  int local_90;
  int local_8c [22];
  undefined2 local_32;
  char *local_18;
  undefined4 local_14;
  undefined2 local_8;
  
  piVar3 = (int *)find_fde(param_1);
  piVar2 = piVar3;
  if (piVar3 != (int *)0x0) {
    piVar2 = (int *)extract_cie_info(piVar3,&local_18);
    if (piVar2 != (int *)0x0) {
      memset(local_8c,0,0x74);
      local_32 = local_8;
      local_8c[1] = local_14;
      piVar4 = (int *)((int)piVar3 - (piVar3[1] + -4));
      iVar1 = *piVar4;
      while (piVar2 < (int *)((int)piVar4 + iVar1 + 4)) {
        piVar2 = (int *)execute_cfa_insn(piVar2,local_8c,&local_18,0);
      }
      piVar2 = piVar3 + 4;
      if (*local_18 == 'z') {
        iVar1 = decode_uleb128(piVar2,&local_90);
        piVar2 = (int *)(iVar1 + local_90);
      }
      piVar4 = (int *)((int)piVar3 + *piVar3 + 4);
      local_94 = piVar3[2];
      if (piVar2 < piVar4) {
        do {
          if (param_1 < local_94) break;
          piVar2 = (int *)execute_cfa_insn(piVar2,local_8c,&local_18,&local_94);
        } while (piVar2 < piVar4);
      }
      iVar1 = 0x1c;
      piVar3 = local_8c;
      piVar4 = param_2;
      while (piVar2 = param_2, iVar1 != 0) {
        iVar1 = iVar1 + -1;
        *piVar4 = *piVar3;
        piVar3 = piVar3 + 1;
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



// WARNING: Control flow encountered bad instruction data

void __DTOR_END__(void)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  int *in_EAX;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  byte bVar8;
  char cVar9;
  byte *in_ECX;
  int in_EDX;
  char **unaff_EBX;
  int unaff_EBP;
  char *unaff_ESI;
  int *unaff_EDI;
  
  bVar2 = (byte)in_EAX;
  *(byte *)in_EAX = *(byte *)in_EAX + bVar2;
  bVar4 = *(byte *)in_EAX;
  *(byte *)in_EAX = *(byte *)in_EAX + bVar2;
  *(byte *)in_EAX = *(byte *)in_EAX + bVar2 + CARRY1(bVar4,bVar2);
  *(byte *)in_EAX = *(byte *)in_EAX + bVar2;
  *(byte *)in_EAX = *(byte *)in_EAX + bVar2;
  *(byte *)in_EAX = *(byte *)in_EAX + bVar2;
  do {
    *in_EAX = *in_EAX + (int)in_EAX;
    piVar7 = (int *)((int)((int)in_EAX + 0xc) + (int)in_ECX);
    *piVar7 = *piVar7 + (int)unaff_EDI;
    bVar2 = (char)in_EAX + 4;
    uVar1 = (uint)in_EAX & 0xffffff00;
    _bVar2 = (byte *)(uVar1 | bVar2);
    *in_ECX = bVar2;
    *_bVar2 = *_bVar2 + bVar2;
    bVar4 = *_bVar2;
    *_bVar2 = *_bVar2 + bVar2;
    *_bVar2 = (*_bVar2 - bVar2) - CARRY1(bVar4,bVar2);
    *_bVar2 = *_bVar2 + bVar2;
    cVar3 = in(0x89);
    pcVar5 = (char *)(uVar1 | (byte)(cVar3 + 8U));
    *pcVar5 = *pcVar5 + cVar3 + 8U;
    bVar4 = cVar3 + 9;
    _bVar4 = (char *)(uVar1 | bVar4);
    *_bVar4 = *_bVar4 + bVar4;
    bVar8 = (byte)in_ECX;
    *unaff_ESI = *unaff_ESI + bVar8;
    *(byte *)(unaff_EBP + 0x20402) = *(byte *)(unaff_EBP + 0x20402) | bVar4;
    *_bVar4 = *_bVar4 + bVar4;
    _bVar4 = (char *)((uint)_bVar4 | 0x10405);
    *_bVar4 = *_bVar4 + (char)_bVar4;
    pcVar5 = *unaff_EBX;
    *unaff_EBX = _bVar4;
    cVar3 = (char)pcVar5;
    bVar4 = cVar3 + 1;
    uVar1 = (uint)pcVar5 & 0xffffff00;
    pcVar5 = (char *)(uVar1 | bVar4);
    *pcVar5 = *pcVar5 + bVar4;
    unaff_ESI[0x2c000004] = unaff_ESI[0x2c000004] + bVar4;
    *pcVar5 = *pcVar5 + bVar4;
    *pcVar5 = *pcVar5 + bVar8;
    *pcVar5 = *pcVar5 + bVar4;
    *(byte *)(in_EDX + 0x590804) = *(byte *)(in_EDX + 0x590804) & bVar8;
    *pcVar5 = *pcVar5 + bVar4;
    bVar4 = cVar3 + 2;
    pcVar5 = (char *)(uVar1 | bVar4);
    *pcVar5 = *pcVar5 + bVar4;
    *unaff_ESI = *unaff_ESI + bVar8;
    *(byte *)(unaff_EBP + 0x20402) = *(byte *)(unaff_EBP + 0x20402) | bVar4;
    *pcVar5 = *pcVar5 + bVar4;
    piVar6 = (int *)((uint)pcVar5 | 0x40405);
    *(char *)piVar6 = *(char *)piVar6 + (char)piVar6;
    piVar7 = *(int **)(&stack0x00000000 + (int)piVar6);
    *(int **)(&stack0x00000000 + (int)piVar6) = piVar6;
    *piVar7 = *piVar7 + (int)piVar7;
    *(byte *)piVar7 = *(char *)piVar7 + (byte)piVar7;
    bVar2 = bRam002c0000;
    in_EAX = (int *)((uint)piVar7 & 0xffffff00 | (uint)bRam002c0000);
    bVar4 = *(byte *)in_EAX + bRam002c0000;
    bRam002c0000 = (byte)piVar7;
    *(byte *)in_EAX = bVar4;
    bVar4 = *(byte *)in_EAX;
    *(byte *)in_EAX = *(byte *)in_EAX + bVar2;
  } while (SCARRY1(bVar4,bVar2) != (char)*(byte *)in_EAX < '\0');
  bVar2 = bVar2 + 8;
  _bVar4 = (char *)((uint)piVar7 & 0xffffff00 | (uint)bVar2);
  *_bVar4 = *_bVar4 + bVar2;
  in_ECX[(int)_bVar4] = in_ECX[(int)_bVar4] + bVar2;
  *_bVar4 = *_bVar4 + bVar2;
  *unaff_ESI = *unaff_ESI + bVar8;
  *(byte *)(unaff_EBP + 0x20402) = *(byte *)(unaff_EBP + 0x20402) | bVar2;
  *_bVar4 = *_bVar4 + bVar2;
  _bVar4 = (char *)((uint)_bVar4 | 0x40405);
  *_bVar4 = *_bVar4 + (char)_bVar4;
  pcVar5 = pcRam00000104;
  cVar3 = (char)pcRam00000104;
  pcRam00000104 = _bVar4;
  unaff_ESI[0x1c000006] = unaff_ESI[0x1c000006] + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  cVar9 = (char)((uint)in_ECX >> 8);
  pcVar5[-0x2c000000] = pcVar5[-0x2c000000] + cVar9;
  bVar4 = pcVar5[(int)in_ECX];
  pcVar5 = (char *)((uint)pcVar5 & 0xffffff00 | (uint)bVar4);
  *pcVar5 = *pcVar5 + bVar4;
  in_ECX[(int)pcVar5] = in_ECX[(int)pcVar5] + bVar4;
  *pcVar5 = *pcVar5 + bVar4;
  *unaff_ESI = *unaff_ESI + bVar8;
  *(byte *)(unaff_EBP + 0x20402) = *(byte *)(unaff_EBP + 0x20402) | bVar4;
  *pcVar5 = *pcVar5 + bVar4;
  bVar4 = (char)((uint)pcVar5 | 0x5005) + bVar8;
  uVar1 = ((uint)pcVar5 | 0x5005) & 0xffffff00;
  *(char *)(uVar1 | bVar4) = *(char *)(uVar1 | bVar4) + bVar4;
  *(byte *)(unaff_EBX + (int)in_ECX) = *(char *)(unaff_EBX + (int)in_ECX) + bVar4;
  pcVar5 = (char *)(uVar1 | (byte)(bVar4 + 8));
  *pcVar5 = *pcVar5 + bVar4 + 8;
  bVar4 = bVar4 + 9;
  _bVar4 = (char *)(uVar1 | bVar4);
  *_bVar4 = *_bVar4 + bVar4;
  *unaff_ESI = *unaff_ESI + bVar8;
  *(byte *)(unaff_EBP + 0x20402) = *(byte *)(unaff_EBP + 0x20402) | bVar4;
  *_bVar4 = *_bVar4 + bVar4;
  _bVar4 = (char *)((uint)_bVar4 | 0x40405);
  *_bVar4 = *_bVar4 + (char)_bVar4;
  pcVar5 = pcRam00000104;
  cVar3 = (char)pcRam00000104;
  pcRam00000104 = _bVar4;
  unaff_ESI[0x10406] = unaff_ESI[0x10406] + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *unaff_EDI = *unaff_EDI + 4;
  *pcVar5 = *pcVar5 + cVar3;
  bVar4 = cVar3 + 4;
  piVar7 = (int *)((uint)pcVar5 & 0xffffff00 | (uint)bVar4);
  *piVar7 = *piVar7 + (int)piVar7;
  *(byte *)piVar7 = *(char *)piVar7 + bVar4;
  (&stack0xfffffffc)[(int)piVar7] = (&stack0xfffffffc)[(int)piVar7] | bVar4;
  *(byte *)piVar7 = *(char *)piVar7 + bVar4;
  *unaff_ESI = *unaff_ESI + cVar9;
  pcVar5 = (char *)((uint)(uint *)((uint)piVar7 | 4) | *(uint *)((uint)piVar7 | 4));
  cVar3 = (char)pcVar5;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *(undefined *)((uint)pcVar5 & 0xffffff00) = *(undefined *)((uint)pcVar5 & 0xffffff00);
  pcVar5 = (char *)((uint)pcVar5 & 0xffffff00 | 0xff);
  *pcVar5 = *pcVar5 + -1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


