typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    word;
typedef ulong size_t;

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

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

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Rela Elf32_Rela, *PElf32_Rela;

struct Elf32_Rela {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
    dword r_addend; // a constant addend used to compute the relocatable field value
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

typedef enum Elf32_DynTag {
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
} Elf32_DynTag;

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




// WARNING: Removing unreachable block (ram,0x00010974)
// WARNING: Removing unreachable block (ram,0x0001096c)
// WARNING: Removing unreachable block (ram,0x0001099c)
// WARNING: Removing unreachable block (ram,0x0001095c)

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



// WARNING: Removing unreachable block (ram,0x000109b4)
// WARNING: Removing unreachable block (ram,0x00010a20)

undefined4 __do_global_dtors_aux(undefined4 param_1)

{
  code **ppcVar1;
  int iVar2;
  
  iVar2 = *(int *)p_2;
  ppcVar1 = (code **)p_2;
  while (iVar2 != 0) {
    p_2 = (undefined *)(ppcVar1 + 1);
    (**ppcVar1)();
    iVar2 = *(int *)p_2;
    ppcVar1 = (code **)p_2;
  }
  p_2 = (undefined *)ppcVar1;
  __deregister_frame_info(&cie_000219a0);
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00010a30)
// WARNING: Removing unreachable block (ram,0x00010a34)

undefined4 fini_dummy(undefined4 param_1)

{
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00010a3c)
// WARNING: Removing unreachable block (ram,0x00010a64)

undefined4 frame_dummy(undefined4 param_1)

{
  __register_frame_info(&cie_000219a0,object_7);
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00010a74)
// WARNING: Removing unreachable block (ram,0x00010a78)

undefined4 init_dummy(undefined4 param_1)

{
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00010a9c)
// WARNING: Removing unreachable block (ram,0x00010ad0)
// WARNING: Removing unreachable block (ram,0x00010b00)
// WARNING: Removing unreachable block (ram,0x00010b34)
// WARNING: Removing unreachable block (ram,0x00010b64)
// WARNING: Removing unreachable block (ram,0x00010b94)
// WARNING: Removing unreachable block (ram,0x00010bc4)
// WARNING: Removing unreachable block (ram,0x00010a80)
// WARNING: Removing unreachable block (ram,0x00010bac)
// WARNING: Removing unreachable block (ram,0x00010b7c)
// WARNING: Removing unreachable block (ram,0x00010b4c)
// WARNING: Removing unreachable block (ram,0x00010b18)
// WARNING: Removing unreachable block (ram,0x00010ae8)
// WARNING: Removing unreachable block (ram,0x00010ab8)
// WARNING: Removing unreachable block (ram,0x00010a90)

undefined4 main(void)

{
  int iVar1;
  bool bVar2;
  uint local_18;
  int local_14 [5];
  
  scanf("%d",local_14);
  scanf("%d",&local_18);
  bVar2 = local_14[0] == 5;
  if (bVar2) {
    printf("Equal\n");
    bVar2 = local_14[0] == 5;
  }
  if (!bVar2) {
    printf("Not Equal\n");
  }
  if (local_14[0] < 5) {
    printf("Greater\n");
  }
  iVar1 = -local_14[0];
  if (iVar1 == -5 || 5 < local_14[0]) {
    printf("Less or Equal\n");
    iVar1 = -local_14[0];
  }
  if (iVar1 + 5 < 0 == SBORROW4(5,local_14[0])) {
    printf("Greater or Equal\n");
  }
  if (5 < local_14[0]) {
    printf("Less\n");
  }
  if (local_18 < 5) {
    printf("Greater Unsigned\n");
  }
  if (4 < local_18) {
    printf("Less or Equal Unsigned\n");
  }
  if (local_18 < 6) {
    printf("Carry Clear\n");
  }
  if (5 < local_18) {
    printf("Carry Set\n");
  }
  if (-1 < 5 - local_14[0]) {
    printf("Minus\n");
  }
  if (5 - local_14[0] < 0) {
    printf("Plus\n");
  }
  return 0;
}



void decode_uleb128(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = 0;
  uVar3 = 0;
  while( true ) {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar3 = uVar3 | (bVar1 & 0x7f) << (bVar2 & 0x1f);
    if ((bVar1 & 0x80) == 0) break;
    bVar2 = bVar2 + 7;
  }
  *param_2 = uVar3;
  return;
}



void decode_sleb128(byte *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar3 = uVar3 | (bVar1 & 0x7f) << ((byte)uVar2 & 0x1f);
    uVar2 = uVar2 + 7;
  } while ((bVar1 & 0x80) != 0);
  if ((uVar2 < 0x20) && ((bVar1 & 0x40) != 0)) {
    uVar3 = uVar3 | -1 << ((byte)uVar2 & 0x1f);
  }
  *param_2 = uVar3;
  return;
}



void fde_insert(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + param_2 * 4) = param_3;
  if (param_2 != 0) {
    piVar1 = (int *)(param_2 * 4 + param_1);
    do {
      iVar2 = *piVar1;
      param_2 = param_2 + -1;
      if (-1 < *(int *)(iVar2 + 8) - *(int *)(piVar1[-1] + 8)) {
        return;
      }
      *piVar1 = piVar1[-1];
      piVar1[-1] = iVar2;
      piVar1 = piVar1 + -1;
    } while (param_2 != 0);
  }
  return;
}



int count_fdes(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  iVar3 = 0;
  while (iVar1 != 0) {
    if (param_1[1] == 0) {
      iVar2 = *param_1;
    }
    else {
      if (param_1[2] != 0) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = *param_1;
    }
    iVar1 = *(int *)((int)param_1 + iVar2 + 4);
    param_1 = (int *)((int)param_1 + iVar2 + 4);
  }
  return iVar3;
}



// WARNING: Removing unreachable block (ram,0x00010cf0)
// WARNING: Removing unreachable block (ram,0x00010d30)

int * add_fdes(int *param_1,undefined4 param_2,int *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar4 = *param_3;
  uVar6 = *param_4;
  iVar1 = *param_1;
  uVar5 = *param_5;
  while (iVar1 != 0) {
    if (param_1[1] == 0) {
      iVar2 = *param_1;
    }
    else {
      if (param_1[2] != 0) {
        fde_insert(param_2,iVar4,param_1);
        uVar3 = param_1[2];
        iVar4 = iVar4 + 1;
        if (uVar3 < uVar6) {
          uVar6 = uVar3;
        }
        if (uVar5 < uVar3 + param_1[3]) {
          uVar5 = uVar3 + param_1[3];
        }
      }
      iVar2 = *param_1;
    }
    iVar1 = *(int *)((int)param_1 + iVar2 + 4);
    param_1 = (int *)((int)param_1 + iVar2 + 4);
  }
  *param_3 = iVar4;
  *param_4 = uVar6;
  *param_5 = uVar5;
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00010df8)
// WARNING: Removing unreachable block (ram,0x00010e44)
// WARNING: Removing unreachable block (ram,0x00010d8c)
// WARNING: Removing unreachable block (ram,0x00010e78)
// WARNING: Removing unreachable block (ram,0x00010db4)
// WARNING: Removing unreachable block (ram,0x00010de4)

undefined4 * frame_init(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14 [5];
  
  piVar1 = (int *)param_1[3];
  if (piVar1 == (int *)0x0) {
    local_14[0] = count_fdes(param_1[2]);
  }
  else {
    local_14[0] = 0;
    if (*piVar1 != 0) {
      do {
        iVar2 = count_fdes(*piVar1);
        piVar1 = piVar1 + 1;
        local_14[0] = local_14[0] + iVar2;
      } while (*piVar1 != 0);
      param_1[4] = local_14[0];
      goto LAB_00010df8;
    }
  }
  param_1[4] = local_14[0];
LAB_00010df8:
  pvVar3 = malloc(local_14[0] << 2);
  local_18 = 0xffffffff;
  local_1c = 0;
  local_14[0] = 0;
  piVar1 = (int *)param_1[3];
  if (piVar1 == (int *)0x0) {
    add_fdes(param_1[2],pvVar3,local_14,&local_18,&local_1c);
  }
  else {
    iVar2 = *piVar1;
    local_18 = 0xffffffff;
    while (iVar2 != 0) {
      add_fdes(*piVar1,pvVar3,local_14,&local_18,&local_1c);
      piVar1 = piVar1 + 1;
      iVar2 = *piVar1;
    }
  }
  param_1[3] = pvVar3;
  *param_1 = local_18;
  param_1[1] = local_1c;
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00010e9c)
// WARNING: Removing unreachable block (ram,0x00010edc)

int find_fde(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  bool bVar7;
  
  bVar7 = objects == (uint *)0x0;
  puVar5 = objects;
  if (!bVar7) {
    uVar1 = *objects;
    while( true ) {
      if (uVar1 == 0) {
        frame_init(puVar5);
        uVar1 = *puVar5;
      }
      if (param_1 < uVar1) {
        puVar5 = (uint *)puVar5[5];
      }
      else {
        puVar5 = (uint *)puVar5[5];
      }
      if (puVar5 == (uint *)0x0) break;
      uVar1 = *puVar5;
    }
    bVar7 = true;
  }
  if (!bVar7) {
    uVar1 = puVar5[4];
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar4 = uVar1;
      do {
        uVar2 = uVar1 >> 1;
        iVar6 = *(int *)(puVar5[3] + uVar2 * 4);
        if ((*(uint *)(iVar6 + 8) <= param_1) &&
           (uVar3 = uVar2 + 1, uVar2 = uVar4,
           param_1 <= *(uint *)(iVar6 + 8) + *(int *)(iVar6 + 0xc))) {
          return iVar6;
        }
        uVar1 = uVar3 + uVar2;
        uVar4 = uVar2;
      } while (uVar3 < uVar2);
    }
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00010ff8)
// WARNING: Removing unreachable block (ram,0x00011060)
// WARNING: Removing unreachable block (ram,0x00011094)
// WARNING: Removing unreachable block (ram,0x00010f84)
// WARNING: Removing unreachable block (ram,0x00011068)
// WARNING: Removing unreachable block (ram,0x00011018)
// WARNING: Removing unreachable block (ram,0x00010fd0)
// WARNING: Removing unreachable block (ram,0x00010fb4)

byte * extract_cie_info(int param_1,char **param_2)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  byte *pbVar5;
  char *pcVar6;
  int local_14 [5];
  
  pcVar1 = (char *)((param_1 - *(int *)(param_1 + 4)) + 0xd);
  *param_2 = pcVar1;
  iVar2 = strcmp(pcVar1,"");
  if (((iVar2 == 0) || (iVar2 = strcmp(*param_2,"eh"), iVar2 == 0)) ||
     (pbVar5 = (byte *)0x0, **param_2 == 'z')) {
    sVar3 = strlen(*param_2);
    pcVar1 = *param_2 + sVar3;
    pcVar6 = pcVar1 + 1;
    iVar2 = strcmp(*param_2,"eh");
    if (iVar2 == 0) {
      param_2[1] = (char *)((uint)(byte)pcVar1[4] |
                           (uint)(byte)pcVar1[3] << 8 |
                           (uint)(byte)pcVar1[2] << 0x10 | (uint)(byte)pcVar1[1] << 0x18);
      pcVar6 = pcVar1 + 5;
    }
    else {
      param_2[1] = (char *)0x0;
    }
    uVar4 = decode_uleb128(pcVar6,param_2 + 2);
    pbVar5 = (byte *)decode_sleb128(uVar4,param_2 + 3);
    param_2[4] = (char *)(uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
    if (**param_2 == 'z') {
      iVar2 = decode_uleb128(pbVar5,local_14);
      pbVar5 = (byte *)(iVar2 + local_14[0]);
    }
  }
  return pbVar5;
}



// WARNING: Removing unreachable block (ram,0x00011430)
// WARNING: Removing unreachable block (ram,0x00011374)
// WARNING: Removing unreachable block (ram,0x0001134c)
// WARNING: Removing unreachable block (ram,0x000113dc)
// WARNING: Removing unreachable block (ram,0x000113b8)
// WARNING: Removing unreachable block (ram,0x00011308)
// WARNING: Removing unreachable block (ram,0x00011290)
// WARNING: Removing unreachable block (ram,0x000112ac)
// WARNING: Removing unreachable block (ram,0x000110ac)
// WARNING: Removing unreachable block (ram,0x00011298)
// WARNING: Removing unreachable block (ram,0x000112e0)
// WARNING: Removing unreachable block (ram,0x00011300)
// WARNING: Removing unreachable block (ram,0x000113a8)
// WARNING: Removing unreachable block (ram,0x000113d4)
// WARNING: Removing unreachable block (ram,0x00011344)
// WARNING: Removing unreachable block (ram,0x00011390)
// WARNING: Removing unreachable block (ram,0x000110c4)

void execute_cfa_insn(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  undefined8 in_o0_1;
  void *__dest;
  uint *in_o3;
  void *pvVar5;
  ushort *puVar6;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 uStack22;
  undefined4 uStack20;
  
  pbVar3 = (byte *)((ulonglong)in_o0_1 >> 0x20);
  __dest = (void *)in_o0_1;
  bVar1 = *pbVar3;
  puVar6 = (ushort *)(pbVar3 + 1);
  if ((bVar1 & 0x40) != 0) {
    uVar4 = bVar1 & 0x3f;
    _umul();
    *in_o3 = *in_o3 + uVar4;
    return;
  }
  uVar4 = bVar1 & 0x3f;
  if ((bVar1 & 0x80) != 0) {
    local_18 = 0;
    uStack22 = (undefined2)uVar4;
LAB_00011298:
    decode_uleb128();
    _umul();
    *(undefined *)((int)__dest + CONCAT22(local_18,uStack22) + 0x1ac) = 1;
    *(undefined4 *)((int)__dest + CONCAT22(local_18,uStack22) * 4 + 0x10) = uStack20;
    return;
  }
  if ((bVar1 & 0xc0) != 0) {
    *(undefined *)((int)__dest + uVar4 + 0x1ac) = 0;
    return;
  }
  switch(bVar1) {
  case 0:
  case 7:
  case 8:
    break;
  case 1:
    uVar4 = (uint)pbVar3[4] |
            (uint)pbVar3[3] << 8 | (uint)pbVar3[2] << 0x10 | (uint)*(byte *)puVar6 << 0x18;
    goto LAB_00011280;
  case 2:
    *in_o3 = *in_o3 + (uint)*(byte *)puVar6;
    break;
  case 3:
    *in_o3 = *in_o3 + (uint)*puVar6;
    break;
  case 4:
    uVar4 = *in_o3 + ((uint)pbVar3[4] |
                     (uint)pbVar3[3] << 8 | (uint)pbVar3[2] << 0x10 | (uint)*(byte *)puVar6 << 0x18)
    ;
LAB_00011280:
    *in_o3 = uVar4;
    break;
  case 5:
    decode_uleb128();
    goto LAB_00011298;
  case 6:
    decode_uleb128();
    *(undefined *)((int)__dest + CONCAT22(local_18,uStack22) + 0x1ac) = 0;
    break;
  case 9:
    decode_uleb128();
    decode_uleb128();
    *(undefined *)((int)__dest + CONCAT22(local_18,uStack22) + 0x1ac) = 2;
    *(undefined4 *)((int)__dest + (int)CONCAT62(CONCAT42(local_1c,local_18),uStack22) * 4 + 0x10) =
         local_1c;
    break;
  case 10:
    pvVar5 = malloc(0x218);
    memcpy(pvVar5,__dest,0x218);
    *(void **)((int)__dest + 0x214) = pvVar5;
    break;
  case 0xb:
    pvVar5 = *(void **)((int)__dest + 0x214);
    memcpy(__dest,pvVar5,0x218);
    free(pvVar5);
    break;
  case 0xc:
    decode_uleb128();
    decode_uleb128();
    *(undefined2 *)((int)__dest + 0x1a8) = uStack22;
    *(undefined4 *)((int)__dest + 8) = uStack20;
    break;
  case 0xd:
    decode_uleb128();
    *(undefined2 *)((int)__dest + 0x1a8) = uStack22;
    break;
  case 0xe:
    decode_uleb128();
    *(undefined4 *)((int)__dest + 8) = uStack20;
    break;
  default:
                    // WARNING: Subroutine does not return
    abort();
  case 0x2d:
    local_18 = 0;
    uStack22 = 0x10;
    do {
      *(undefined *)((int)__dest + CONCAT22(local_18,uStack22) + 0x1ac) = 1;
      iVar2 = CONCAT22(local_18,uStack22);
      *(int *)((int)__dest + iVar2 * 4 + 0x10) = (iVar2 + -0x10) * 4;
      uVar4 = iVar2 + 1;
      local_18 = (undefined2)(uVar4 >> 0x10);
      uStack22 = (undefined2)uVar4;
    } while (uVar4 < 0x20);
    break;
  case 0x2e:
    decode_uleb128();
    *(undefined4 *)((int)__dest + 0xc) = uStack20;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00011458)
// WARNING: Removing unreachable block (ram,0x00011498)

undefined4 __register_frame_info(undefined4 param_1,undefined4 *param_2)

{
  param_2[2] = param_1;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = objects;
  objects = param_2;
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000114a0)
// WARNING: Removing unreachable block (ram,0x000114e0)

undefined4 __register_frame_info_table(undefined4 param_1,undefined4 *param_2)

{
  param_2[2] = param_1;
  param_2[3] = param_1;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[4] = 0;
  param_2[5] = objects;
  objects = param_2;
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000114e8)
// WARNING: Removing unreachable block (ram,0x00011540)

int __deregister_frame_info(int param_1)

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
    bVar3 = (int *)piVar1[5] != (int *)0x0;
    ppiVar2 = (int **)(piVar1 + 5);
  }
  *ppiVar2 = (int *)piVar1[5];
  if (*piVar1 != 0) {
    free((void *)piVar1[3]);
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000115a0)
// WARNING: Removing unreachable block (ram,0x00011618)
// WARNING: Removing unreachable block (ram,0x0001167c)
// WARNING: Removing unreachable block (ram,0x00011568)
// WARNING: Removing unreachable block (ram,0x0001165c)
// WARNING: Removing unreachable block (ram,0x000115e8)
// WARNING: Removing unreachable block (ram,0x00011580)
// WARNING: Removing unreachable block (ram,0x0001156c)

void * __frame_state_for(uint param_1,void *param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint local_248;
  int local_244;
  undefined auStack576 [536];
  char *local_28 [10];
  
  piVar1 = (int *)find_fde(param_1);
  if (piVar1 != (int *)0x0) {
    uVar2 = extract_cie_info(piVar1,local_28);
    if (uVar2 != 0) {
      memset(auStack576,0,0x218);
      piVar3 = (int *)((int)piVar1 - (piVar1[1] + -4));
      iVar4 = *piVar3;
      while (uVar2 < (uint)((int)piVar3 + iVar4 + 4)) {
        uVar2 = execute_cfa_insn(uVar2,auStack576,local_28,0);
      }
      piVar3 = piVar1 + 4;
      if (*local_28[0] == 'z') {
        iVar4 = decode_uleb128(piVar3,&local_244);
        piVar3 = (int *)(iVar4 + local_244);
      }
      iVar4 = *piVar1;
      local_248 = piVar1[2];
      while ((piVar3 < (int *)((int)piVar1 + iVar4 + 4) && (local_248 <= param_1))) {
        piVar3 = (int *)execute_cfa_insn(piVar3,auStack576,local_28,&local_248);
      }
      memcpy(param_2,auStack576,0x214);
      return param_2;
    }
  }
  return (void *)0x0;
}



// WARNING: Removing unreachable block (ram,0x00011690)

undefined4 __do_global_ctors_aux(undefined4 param_1)

{
  code *pcVar1;
  code **ppcVar2;
  bool bVar3;
  
  bVar3 = force_to_data != -1;
  ppcVar2 = (code **)&force_to_data;
  while (bVar3) {
    pcVar1 = *ppcVar2;
    ppcVar2 = ppcVar2 + -1;
    (*pcVar1)();
    bVar3 = *ppcVar2 != (code *)0xffffffff;
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000116e4)
// WARNING: Removing unreachable block (ram,0x000116e8)

undefined4 init_dummy(undefined4 param_1)

{
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000116fc)
// WARNING: Removing unreachable block (ram,0x000116f0)
// WARNING: Removing unreachable block (ram,0x000116f4)

int _init(EVP_PKEY_CTX *ctx)

{
  frame_dummy();
  __do_global_ctors_aux();
  return (int)ctx;
}



// WARNING: Removing unreachable block (ram,0x0001170c)
// WARNING: Removing unreachable block (ram,0x00011710)

undefined4 _fini(undefined4 param_1)

{
  __do_global_dtors_aux();
  return param_1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int atexit(__func *__func)

{
  IllegalInstructionTrap(0x21844);
  return (int)__func;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
  IllegalInstructionTrap(0x21850);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _exit(int __status)

{
  IllegalInstructionTrap(0x2185c);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int scanf(char *__format,...)

{
  IllegalInstructionTrap(0x21868);
  return (int)__format;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  IllegalInstructionTrap(0x21874);
  return (int)__format;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  IllegalInstructionTrap(0x21880);
  return (void *)__size;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  IllegalInstructionTrap(0x2188c);
  return (int)__s1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t strlen(char *__s)

{
  IllegalInstructionTrap(0x21898);
  return (size_t)__s;
}



void _umul(void)

{
  IllegalInstructionTrap(0x218a4);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  IllegalInstructionTrap(0x218b0);
  return __dest;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  IllegalInstructionTrap(0x218bc);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void abort(void)

{
  IllegalInstructionTrap(0x218c8);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  IllegalInstructionTrap(0x218d4);
  return __s;
}



void __DTOR_END__(void)

{
  IllegalInstructionTrap(0);
  return;
}


