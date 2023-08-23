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

typedef struct Elf32_Rela Elf32_Rela, *PElf32_Rela;

struct Elf32_Rela {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
    dword r_addend; // a constant addend used to compute the relocatable field value
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




// WARNING: Removing unreachable block (ram,0x00010aa0)
// WARNING: Removing unreachable block (ram,0x00010a98)
// WARNING: Removing unreachable block (ram,0x00010ac8)
// WARNING: Removing unreachable block (ram,0x00010a88)

void _start(void)

{
  __func *unaff_g1;
  EVP_PKEY_CTX *ctx;
  int __status;
  int local_res40;
  undefined auStackX_44 [4];
  undefined auStackX_48 [20];
  
  if (unaff_g1 != (__func *)0x0) {
    atexit(unaff_g1);
  }
  ctx = (EVP_PKEY_CTX *)atexit(_fini);
  _init(ctx);
  environ = auStackX_44 + local_res40 * 4 + 4;
  __status = main(local_res40,auStackX_44);
                    // WARNING: Subroutine does not return
  exit(__status);
}



// WARNING: Removing unreachable block (ram,0x00010ae0)
// WARNING: Removing unreachable block (ram,0x00010b4c)

undefined4 __do_global_dtors_aux(undefined4 param_1)

{
  code **ppcVar1;
  int iVar2;
  
  iVar2 = *(int *)p_2;
  ppcVar1 = (code **)p_2;
  while (iVar2 != 0) {
    p_2 = (undefined *)(ppcVar1 + 1);
    (**ppcVar1)();
    ppcVar1 = (code **)p_2;
    iVar2 = *(int *)p_2;
  }
  p_2 = (undefined *)ppcVar1;
  __deregister_frame_info(&cie_00021a5c);
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00010b5c)
// WARNING: Removing unreachable block (ram,0x00010b60)

undefined4 fini_dummy(undefined4 param_1)

{
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00010b68)
// WARNING: Removing unreachable block (ram,0x00010b90)

undefined4 frame_dummy(undefined4 param_1)

{
  __register_frame_info(&cie_00021a5c,object_7);
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00010ba0)
// WARNING: Removing unreachable block (ram,0x00010ba4)

undefined4 init_dummy(undefined4 param_1)

{
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00010bac)
// WARNING: Removing unreachable block (ram,0x00010cec)

bool main(int param_1)

{
  code *pcVar1;
  char *__format;
  code *pcVar2;
  
  if (param_1 < 2) {
    pcVar2 = func8;
    pcVar1 = func8;
  }
  else {
    pcVar2 = func7;
    pcVar1 = func7;
  }
  if (pcVar2 != pcVar1) {
    __format = "Failed!\n";
  }
  else {
    __format = "Pass\n";
  }
  printf(__format);
  return pcVar2 != pcVar1;
}



void func1(void)

{
  return;
}



void func2(void)

{
  return;
}



void func3(void)

{
  return;
}



void func4(void)

{
  return;
}



void func5(void)

{
  return;
}



void func6(void)

{
  return;
}



void func7(void)

{
  return;
}



void func8(void)

{
  return;
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
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = *param_1;
  while (iVar2 != 0) {
    if (param_1[1] == 0) {
      iVar2 = *param_1;
    }
    else {
      if (param_1[2] != 0) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = *param_1;
    }
    piVar1 = (int *)((int)param_1 + iVar2 + 4);
    param_1 = (int *)((int)param_1 + iVar2 + 4);
    iVar2 = *piVar1;
  }
  return iVar3;
}



// WARNING: Removing unreachable block (ram,0x00010e60)
// WARNING: Removing unreachable block (ram,0x00010ea0)

int * add_fdes(int *param_1,undefined4 param_2,int *param_3,uint *param_4,uint *param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar4 = *param_3;
  uVar6 = *param_4;
  uVar5 = *param_5;
  iVar2 = *param_1;
  while (iVar2 != 0) {
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
    piVar1 = (int *)((int)param_1 + iVar2 + 4);
    param_1 = (int *)((int)param_1 + iVar2 + 4);
    iVar2 = *piVar1;
  }
  *param_3 = iVar4;
  *param_4 = uVar6;
  *param_5 = uVar5;
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00010f68)
// WARNING: Removing unreachable block (ram,0x00010fb4)
// WARNING: Removing unreachable block (ram,0x00010efc)
// WARNING: Removing unreachable block (ram,0x00010fe8)
// WARNING: Removing unreachable block (ram,0x00010f24)
// WARNING: Removing unreachable block (ram,0x00010f54)

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
      goto LAB_00010f68;
    }
  }
  param_1[4] = local_14[0];
LAB_00010f68:
  pvVar3 = malloc(local_14[0] << 2);
  local_18 = 0xffffffff;
  local_1c = 0;
  local_14[0] = 0;
  piVar1 = (int *)param_1[3];
  if (piVar1 == (int *)0x0) {
    add_fdes(param_1[2],pvVar3,local_14,&local_18,&local_1c);
  }
  else {
    local_18 = 0xffffffff;
    iVar2 = *piVar1;
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



// WARNING: Removing unreachable block (ram,0x0001100c)
// WARNING: Removing unreachable block (ram,0x0001104c)

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
    puVar5 = (uint *)0x0;
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



// WARNING: Removing unreachable block (ram,0x00011168)
// WARNING: Removing unreachable block (ram,0x000111d0)
// WARNING: Removing unreachable block (ram,0x00011204)
// WARNING: Removing unreachable block (ram,0x000110f4)
// WARNING: Removing unreachable block (ram,0x000111d8)
// WARNING: Removing unreachable block (ram,0x00011188)
// WARNING: Removing unreachable block (ram,0x00011140)
// WARNING: Removing unreachable block (ram,0x00011124)

byte * extract_cie_info(int param_1,char **param_2)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int local_14 [5];
  
  pcVar1 = (char *)((param_1 - *(int *)(param_1 + 4)) + 0xd);
  *param_2 = pcVar1;
  iVar2 = strcmp(pcVar1,"");
  if (((iVar2 == 0) || (iVar2 = strcmp(*param_2,"eh"), iVar2 == 0)) ||
     (pbVar6 = (byte *)0x0, **param_2 == 'z')) {
    sVar3 = strlen(*param_2);
    pcVar1 = *param_2;
    iVar2 = sVar3 + 1;
    iVar4 = strcmp(pcVar1,"eh");
    if (iVar4 == 0) {
      param_2[1] = (char *)((uint)(byte)pcVar1[sVar3 + 4] |
                           (uint)(byte)pcVar1[sVar3 + 3] << 8 |
                           (uint)(byte)pcVar1[sVar3 + 2] << 0x10 |
                           (uint)(byte)pcVar1[sVar3 + 1] << 0x18);
      iVar2 = sVar3 + 5;
    }
    else {
      param_2[1] = (char *)0x0;
    }
    uVar5 = decode_uleb128(pcVar1 + iVar2,param_2 + 2);
    pbVar6 = (byte *)decode_sleb128(uVar5,param_2 + 3);
    param_2[4] = (char *)(uint)*pbVar6;
    pbVar6 = pbVar6 + 1;
    if (**param_2 == 'z') {
      iVar2 = decode_uleb128(pbVar6,local_14);
      pbVar6 = (byte *)(iVar2 + local_14[0]);
    }
  }
  return pbVar6;
}



// WARNING: Removing unreachable block (ram,0x000115a0)
// WARNING: Removing unreachable block (ram,0x000114e4)
// WARNING: Removing unreachable block (ram,0x000114bc)
// WARNING: Removing unreachable block (ram,0x0001154c)
// WARNING: Removing unreachable block (ram,0x00011528)
// WARNING: Removing unreachable block (ram,0x00011478)
// WARNING: Removing unreachable block (ram,0x00011400)
// WARNING: Removing unreachable block (ram,0x0001141c)
// WARNING: Removing unreachable block (ram,0x0001121c)
// WARNING: Removing unreachable block (ram,0x00011408)
// WARNING: Removing unreachable block (ram,0x00011450)
// WARNING: Removing unreachable block (ram,0x00011470)
// WARNING: Removing unreachable block (ram,0x00011518)
// WARNING: Removing unreachable block (ram,0x00011544)
// WARNING: Removing unreachable block (ram,0x000114b4)
// WARNING: Removing unreachable block (ram,0x00011500)
// WARNING: Removing unreachable block (ram,0x00011234)

ushort * execute_cfa_insn(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 in_o0_1;
  void *__dest;
  uint *in_o3;
  void *pvVar6;
  ushort *puVar7;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined4 uStack_14;
  
  pbVar2 = (byte *)((ulonglong)in_o0_1 >> 0x20);
  __dest = (void *)in_o0_1;
  bVar1 = *pbVar2;
  puVar7 = (ushort *)(pbVar2 + 1);
  if ((bVar1 & 0x40) != 0) {
    iVar3 = _umul(bVar1 & 0x3f);
    *in_o3 = *in_o3 + iVar3;
    return puVar7;
  }
  uVar4 = bVar1 & 0x3f;
  if ((bVar1 & 0x80) != 0) {
    local_18 = 0;
    uStack_16 = (undefined2)uVar4;
LAB_00011408:
    puVar7 = (ushort *)decode_uleb128();
    uVar5 = _umul(uStack_14);
    *(undefined *)((int)__dest + CONCAT22(local_18,uStack_16) + 0x1ac) = 1;
    *(undefined4 *)((int)__dest + CONCAT22(local_18,uStack_16) * 4 + 0x10) = uVar5;
    return puVar7;
  }
  if ((bVar1 & 0xc0) != 0) {
    *(undefined *)((int)__dest + uVar4 + 0x1ac) = 0;
    return puVar7;
  }
  switch(bVar1) {
  case 0:
  case 7:
  case 8:
    break;
  case 1:
    uVar4 = (uint)pbVar2[4] |
            (uint)pbVar2[3] << 8 | (uint)pbVar2[2] << 0x10 | (uint)*(byte *)puVar7 << 0x18;
    goto LAB_000113f0;
  case 2:
    *in_o3 = *in_o3 + (uint)*(byte *)puVar7;
    puVar7 = (ushort *)(pbVar2 + 2);
    break;
  case 3:
    *in_o3 = *in_o3 + (uint)*puVar7;
    puVar7 = (ushort *)(pbVar2 + 3);
    break;
  case 4:
    uVar4 = *in_o3 + ((uint)pbVar2[4] |
                     (uint)pbVar2[3] << 8 | (uint)pbVar2[2] << 0x10 | (uint)*(byte *)puVar7 << 0x18)
    ;
LAB_000113f0:
    *in_o3 = uVar4;
    puVar7 = (ushort *)(pbVar2 + 5);
    break;
  case 5:
    decode_uleb128(puVar7);
    goto LAB_00011408;
  case 6:
    puVar7 = (ushort *)decode_uleb128(puVar7);
    *(undefined *)((int)__dest + CONCAT22(local_18,uStack_16) + 0x1ac) = 0;
    break;
  case 9:
    decode_uleb128(puVar7);
    puVar7 = (ushort *)decode_uleb128();
    *(undefined *)((int)__dest + CONCAT22(local_18,uStack_16) + 0x1ac) = 2;
    *(undefined4 *)((int)__dest + (int)CONCAT62(CONCAT42(local_1c,local_18),uStack_16) * 4 + 0x10) =
         local_1c;
    break;
  case 10:
    pvVar6 = malloc(0x218);
    memcpy(pvVar6,__dest,0x218);
    *(void **)((int)__dest + 0x214) = pvVar6;
    break;
  case 0xb:
    pvVar6 = *(void **)((int)__dest + 0x214);
    memcpy(__dest,pvVar6,0x218);
    free(pvVar6);
    break;
  case 0xc:
    decode_uleb128(puVar7);
    puVar7 = (ushort *)decode_uleb128();
    *(undefined2 *)((int)__dest + 0x1a8) = uStack_16;
    *(undefined4 *)((int)__dest + 8) = uStack_14;
    break;
  case 0xd:
    puVar7 = (ushort *)decode_uleb128(puVar7);
    *(undefined2 *)((int)__dest + 0x1a8) = uStack_16;
    break;
  case 0xe:
    puVar7 = (ushort *)decode_uleb128(puVar7);
    *(undefined4 *)((int)__dest + 8) = uStack_14;
    break;
  default:
                    // WARNING: Subroutine does not return
    abort();
  case 0x2d:
    uVar4 = 0x10;
    do {
      *(undefined *)((int)__dest + uVar4 + 0x1ac) = 1;
      *(uint *)((int)__dest + uVar4 * 4 + 0x10) = (uVar4 - 0x10) * 4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x20);
    break;
  case 0x2e:
    puVar7 = (ushort *)decode_uleb128(puVar7);
    *(undefined4 *)((int)__dest + 0xc) = uStack_14;
  }
  return puVar7;
}



// WARNING: Removing unreachable block (ram,0x000115c8)
// WARNING: Removing unreachable block (ram,0x00011608)

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



// WARNING: Removing unreachable block (ram,0x00011610)
// WARNING: Removing unreachable block (ram,0x00011650)

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



// WARNING: Removing unreachable block (ram,0x00011658)
// WARNING: Removing unreachable block (ram,0x000116b0)

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



// WARNING: Removing unreachable block (ram,0x00011710)
// WARNING: Removing unreachable block (ram,0x00011788)
// WARNING: Removing unreachable block (ram,0x000117ec)
// WARNING: Removing unreachable block (ram,0x000116d8)
// WARNING: Removing unreachable block (ram,0x000117cc)
// WARNING: Removing unreachable block (ram,0x00011758)
// WARNING: Removing unreachable block (ram,0x000116f0)
// WARNING: Removing unreachable block (ram,0x000116dc)

void * __frame_state_for(uint param_1,void *param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint local_248;
  int local_244;
  undefined auStack_240 [536];
  char *local_28 [10];
  
  piVar1 = (int *)find_fde(param_1);
  if (piVar1 != (int *)0x0) {
    uVar2 = extract_cie_info(piVar1,local_28);
    if (uVar2 != 0) {
      memset(auStack_240,0,0x218);
      piVar3 = (int *)((int)piVar1 - (piVar1[1] + -4));
      iVar4 = *piVar3;
      for (; uVar2 < (uint)((int)piVar3 + iVar4 + 4);
          uVar2 = execute_cfa_insn(uVar2,auStack_240,local_28,0)) {
      }
      piVar3 = piVar1 + 4;
      if (*local_28[0] == 'z') {
        iVar4 = decode_uleb128(piVar3,&local_244);
        piVar3 = (int *)(iVar4 + local_244);
      }
      iVar4 = *piVar1;
      local_248 = piVar1[2];
      while ((piVar3 < (int *)((int)piVar1 + iVar4 + 4) && (local_248 <= param_1))) {
        piVar3 = (int *)execute_cfa_insn(piVar3,auStack_240,local_28,&local_248);
      }
      memcpy(param_2,auStack_240,0x214);
      return param_2;
    }
  }
  return (void *)0x0;
}



// WARNING: Removing unreachable block (ram,0x00011800)

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



// WARNING: Removing unreachable block (ram,0x00011854)
// WARNING: Removing unreachable block (ram,0x00011858)

undefined4 init_dummy(undefined4 param_1)

{
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x0001186c)
// WARNING: Removing unreachable block (ram,0x00011860)
// WARNING: Removing unreachable block (ram,0x00011864)

int _init(EVP_PKEY_CTX *ctx)

{
  frame_dummy();
  __do_global_ctors_aux();
  return (int)ctx;
}



// WARNING: Removing unreachable block (ram,0x0001187c)
// WARNING: Removing unreachable block (ram,0x00011880)

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



// WARNING: Unknown calling convention -- yet parameter storage is locked

int atexit(__func *__func)

{
  IllegalInstructionTrap(0x2190c);
  return (int)__func;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void exit(int __status)

{
  IllegalInstructionTrap(0x21918);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int __status)

{
  IllegalInstructionTrap(0x21924);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  IllegalInstructionTrap(0x21930);
  return (int)__format;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * malloc(size_t __size)

{
  IllegalInstructionTrap(0x2193c);
  return (void *)__size;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  IllegalInstructionTrap(0x21948);
  return (int)__s1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *__s)

{
  IllegalInstructionTrap(0x21954);
  return (size_t)__s;
}



void _umul(void)

{
  IllegalInstructionTrap(0x21960);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  IllegalInstructionTrap(0x2196c);
  return __dest;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void free(void *__ptr)

{
  IllegalInstructionTrap(0x21978);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void abort(void)

{
  IllegalInstructionTrap(0x21984);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  IllegalInstructionTrap(0x21990);
  return __s;
}


