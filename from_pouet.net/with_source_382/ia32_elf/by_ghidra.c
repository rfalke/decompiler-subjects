typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned short    word;
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

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
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

typedef ulong size_t;




// WARNING: Unknown calling convention yet parameter storage is locked

void srand(uint __seed)

{
  srand(__seed);
  return;
}



void SDL_ShowCursor(void)

{
  SDL_ShowCursor();
  return;
}



void SDL_GetTicks(void)

{
  SDL_GetTicks();
  return;
}



void SDL_PollEvent(void)

{
  SDL_PollEvent();
  return;
}



void SDL_SetVideoMode(void)

{
  SDL_SetVideoMode();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



void SDL_Flip(void)

{
  SDL_Flip();
  return;
}



void SDL_Quit(void)

{
  SDL_Quit();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int rand(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

float powf(float __x,float __y)

{
  float10 extraout_ST0;
  
  powf(__x,__y);
  return (float)extraout_ST0;
}



float10 __regparm3 FUN_08048438(float *param_1,float *param_2)

{
  return (float10)param_1[2] * (float10)param_2[2] +
         (float10)param_1[1] * (float10)param_2[1] + (float10)*param_1 * (float10)*param_2;
}



void __regparm3 FUN_0804844d(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1[2];
  *param_3 = param_1[1] * param_2[2] - param_2[1] * fVar1;
  fVar2 = *param_1;
  param_3[1] = fVar1 * *param_2 - param_2[2] * fVar2;
  param_3[2] = fVar2 * param_2[1] - param_1[1] * *param_2;
  return;
}



void __regparm3 FUN_0804847f(float *param_1,float *param_2,float *param_3)

{
  *param_3 = *param_1 - *param_2;
  param_3[1] = param_1[1] - param_2[1];
  param_3[2] = param_1[2] - param_2[2];
  return;
}



float10 FUN_08048498(void)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_08048438();
  return SQRT(fVar1);
}



void __regparm3 FUN_080484a2(float *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_08048438();
  fVar1 = (float10)1.0 / SQRT(fVar1);
  *param_1 = (float)((float10)*param_1 * fVar1);
  param_1[1] = (float)((float10)param_1[1] * fVar1);
  param_1[2] = (float)(fVar1 * (float10)param_1[2]);
  return;
}



void __regparm3 FUN_080484ca(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int local_20;
  
  uVar9 = 0;
  srand(0x539);
  do {
    iVar7 = 0;
    do {
      piVar1 = (int *)(param_1 + (uVar9 * 0x100 + iVar7) * 4);
      *piVar1 = 0xffffff;
      if (param_2 == '\0') {
        uVar3 = iVar7 + 100U ^ uVar9;
LAB_0804855e:
        iVar4 = uVar3 * 0x10101;
LAB_08048564:
        *piVar1 = iVar4;
      }
      else {
        if (param_2 == '\x01') {
          if ((9 < iVar7 % 0x14) || (iVar4 = 0xff0000, 9 < (int)uVar9 % 0x14)) {
            iVar4 = 0xff00ff;
          }
          goto LAB_08048564;
        }
        if ((byte)(param_2 - 2U) < 2) {
          iVar4 = rand();
          uVar3 = iVar4 % 0x40 + 0xc0;
          if (param_2 != '\x02') goto LAB_0804855e;
          iVar4 = uVar3 * 0x100;
          goto LAB_08048564;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0x100);
    uVar9 = uVar9 + 1;
    if (uVar9 == 0x100) {
      if (param_2 == '\x04') {
        iVar7 = 0;
        do {
          iVar4 = 0;
          do {
            iVar8 = 0;
            iVar6 = iVar7;
            do {
              local_20 = 0;
              iVar5 = iVar4;
              do {
                local_20 = local_20 + 1;
                *(undefined4 *)(param_1 + (iVar6 * 0x100 + iVar5) * 4) = 0xff0000;
                iVar2 = iVar6 * 0x100 + 0x1000 + iVar5;
                iVar5 = iVar5 + 1;
                *(undefined4 *)(param_1 + 0x40 + iVar2 * 4) = 0xff0000;
              } while (local_20 != 0x10);
              iVar8 = iVar8 + 1;
              iVar6 = iVar6 + 1;
            } while (iVar8 != 0x10);
            iVar4 = iVar4 + 0x20;
          } while (iVar4 != 0x100);
          iVar7 = iVar7 + 0x20;
        } while (iVar7 != 0x100);
      }
      return;
    }
  } while( true );
}



void * __regparm1
FUN_08048613(void *param_1_00,float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            ,undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  float fStack262284;
  undefined4 uStack262280;
  undefined4 uStack262276;
  undefined4 uStack262212;
  undefined4 uStack262208;
  float fStack262204;
  undefined4 uStack262200;
  undefined4 uStack262196;
  undefined4 uStack262192;
  undefined4 uStack262188;
  undefined uStack262160;
  
  uStack262200 = param_5;
  fStack262284 = param_1;
  uStack262280 = param_2;
  fStack262204 = -param_1;
  uStack262212 = param_2;
  uStack262196 = param_6;
  uStack262276 = param_3;
  uStack262208 = param_3;
  uStack262160 = 2;
  uStack262192 = param_7;
  uStack262188 = param_4;
  FUN_0804844d();
  FUN_080484ca();
  memcpy(param_1_00,&fStack262284,0x40080);
  return param_1_00;
}



void * __regparm1
FUN_080486ba(void *param_1_00,undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4
            ,undefined4 param_5,undefined4 param_6)

{
  undefined4 uStack262284;
  undefined4 uStack262280;
  undefined4 uStack262276;
  float fStack262260;
  undefined4 uStack262256;
  undefined4 uStack262252;
  undefined4 uStack262212;
  undefined4 uStack262208;
  float fStack262204;
  undefined4 uStack262172;
  undefined4 uStack262168;
  undefined4 uStack262164;
  undefined uStack262160;
  undefined uStack262159;
  
  uStack262284 = param_1;
  fStack262260 = param_4;
  uStack262256 = param_5;
  fStack262204 = -param_4;
  uStack262212 = param_5;
  uStack262280 = param_2;
  uStack262252 = param_6;
  uStack262208 = param_6;
  uStack262160 = 1;
  uStack262276 = param_3;
  uStack262159 = 0;
  uStack262172 = 0x3f470a3d;
  uStack262168 = 0x3e8b4396;
  uStack262164 = 0xc;
  FUN_0804844d();
  FUN_080484ca();
  memcpy(param_1_00,&uStack262284,0x40080);
  return param_1_00;
}



void * __regparm1
FUN_08048775(void *param_1_00,undefined4 param_1,undefined4 param_2,undefined4 param_3,
            undefined4 param_4)

{
  undefined4 uStack262280;
  undefined4 uStack262276;
  undefined4 uStack262272;
  undefined4 uStack262220;
  undefined4 uStack262216;
  undefined4 uStack262212;
  undefined4 uStack262208;
  undefined4 uStack262204;
  undefined4 uStack262200;
  undefined4 uStack262184;
  undefined4 uStack262168;
  undefined4 uStack262164;
  undefined4 uStack262160;
  undefined uStack262156;
  undefined uStack262155;
  
  uStack262220 = 0x3f800000;
  uStack262204 = 0x3f800000;
  uStack262156 = 0;
  uStack262184 = param_4;
  uStack262216 = 0;
  uStack262212 = 0;
  uStack262208 = 0;
  uStack262200 = 0;
  uStack262155 = 1;
  uStack262168 = 0x3f2d70a4;
  uStack262164 = 0x3f45a1cb;
  uStack262280 = param_1;
  uStack262160 = 0x52;
  uStack262276 = param_2;
  uStack262272 = param_3;
  FUN_080484ca();
  memcpy(param_1_00,&uStack262280,0x40080);
  return param_1_00;
}



void __regparm3
FUN_0804881d(int param_1_00,int param_2_00,int param_3_00,float param_1,float param_2,float param_3,
            int param_4)

{
  float fVar1;
  int iVar2;
  undefined auStack262300 [262284];
  
  FUN_08048775(param_1,param_2,param_3,(float)param_1_00);
  memcpy(&DAT_0940c8a0 + param_4 * 0x40080,auStack262300,0x40080);
  if (param_2_00 < 1) goto LAB_08048a84;
  if (param_3_00 == 1) {
    iVar2 = param_4 + 2;
    fVar1 = (float)((param_1_00 * 3) / 2);
    FUN_0804881d(param_1 - fVar1,param_2,param_3,param_4 + 1);
    FUN_0804881d(param_1,fVar1 + param_2,param_3,iVar2);
LAB_08048986:
    param_4 = iVar2 + 1;
    FUN_0804881d(param_1,param_2 - (float)((param_1_00 * 3) / 2),param_3,param_4);
    if (param_3_00 != 5) {
LAB_080489dc:
      param_4 = param_4 + 1;
      FUN_0804881d(param_1,param_2,(float)((param_1_00 * 3) / 2) + param_3,param_4);
      if (param_3_00 == 6) goto LAB_08048a84;
    }
  }
  else {
    fVar1 = (float)((param_1_00 * 3) / 2);
    FUN_0804881d(param_1 + fVar1,param_2,param_3,param_4 + 1);
    iVar2 = param_4 + 2;
    if (param_3_00 == 2) {
      param_4 = param_4 + 3;
      FUN_0804881d(param_1,param_2 + fVar1,param_3,iVar2);
      FUN_0804881d(param_1,param_2 - fVar1,param_3,param_4);
      goto LAB_080489dc;
    }
    FUN_0804881d(param_1 - fVar1,param_2,param_3,iVar2);
    iVar2 = param_4 + 3;
    if (param_3_00 == 3) {
      param_4 = param_4 + 4;
      FUN_0804881d(param_1,param_2 - fVar1,param_3,iVar2);
      FUN_0804881d(param_1,param_2,param_3 + fVar1,param_4);
    }
    else {
      FUN_0804881d(param_1,param_2 + fVar1,param_3,iVar2);
      if (param_3_00 != 4) goto LAB_08048986;
      param_4 = param_4 + 4;
      FUN_0804881d(param_1,param_2,param_3 + fVar1,param_4);
    }
  }
  param_4 = param_4 + 1;
  FUN_0804881d(param_1,param_2,param_3 - (float)((param_1_00 * 3) / 2),param_4);
LAB_08048a84:
  FUN_080486ba(0,0x42200000,0,0,0xbf800000,0,param_4,param_4);
  memcpy(&DAT_0944c920 + param_4 * 0x40080,auStack262300,0x40080);
  return;
}



float10 __regparm2 FUN_08048c66(int param_1_00,int param_2_00,undefined4 param_1,int param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float local_5c;
  float local_58;
  float local_54;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  param_1_00 = param_1_00 + param_2_00 * 0x40080;
  cVar3 = *(char *)(param_1_00 + 0x7c);
  if (cVar3 == '\0') {
    if (param_2 == 0) {
      local_5c = *(float *)(param_1_00 + 100);
      fVar4 = (float10)FUN_08048438();
      if (fVar4 < (float10)0) goto LAB_08048eb0;
    }
    else {
      FUN_0804847f();
      fVar4 = (float10)FUN_08048438();
      if (fVar4 < (float10)0) goto LAB_08048eb0;
      fVar1 = *(float *)(param_1_00 + 0x60);
      fVar5 = (float10)FUN_08048438();
      local_5c = (float)((float10)(fVar1 * fVar1) - fVar5);
      fVar4 = (float10)(float)fVar4;
    }
    fVar5 = fVar4 * fVar4 + (float10)local_5c;
    if ((float10)0 < fVar5) {
      return fVar4 - SQRT(fVar5);
    }
    goto LAB_08048eb0;
  }
  if (cVar3 == '\x01') {
    if (param_2 == 0) {
      fVar5 = (float10)FUN_08048438();
      fVar5 = (float10)*(float *)(param_1_00 + 0x6c) / fVar5;
    }
    else {
      fVar4 = (float10)FUN_08048438();
      fVar1 = *(float *)(param_1_00 + 0x68);
      fVar5 = (float10)FUN_08048438();
      fVar5 = (float10)(float)((float10)fVar1 - fVar4) / fVar5;
    }
  }
  else {
    if (cVar3 != '\x02') goto LAB_08048eb0;
    FUN_0804847f();
    FUN_0804844d();
    fVar1 = SQRT(local_38 * local_38 + local_3c * local_3c + local_40 * local_40);
    if ((0.0 < fVar1) && (fVar1 < 0.003)) {
      fVar4 = (float10)FUN_08048438();
      fVar5 = (float10)local_34 - (float10)*(float *)(param_1_00 + 0x54) * fVar4;
      fVar6 = (float10)local_30 - (float10)*(float *)(param_1_00 + 0x58) * fVar4;
      fVar4 = (float10)local_2c - fVar4 * (float10)*(float *)(param_1_00 + 0x5c);
      fVar4 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5);
      if (fVar4 <= (float10)*(float *)(param_1_00 + 0x60)) {
        return fVar4;
      }
      goto LAB_08048eb0;
    }
    FUN_080484a2();
    fVar4 = (float10)FUN_08048438();
    local_58 = (float)((uint)(float)fVar4 & 0x7fffffff);
    if (*(float *)(param_1_00 + 0x60) < local_58) goto LAB_08048eb0;
    FUN_0804844d();
    fVar4 = (float10)FUN_08048438();
    local_54 = (float)((uint)(float)fVar4 ^ 0x80000000);
    FUN_0804844d();
    FUN_080484a2();
    fVar2 = *(float *)(param_1_00 + 0x60);
    fVar4 = (float10)FUN_08048438();
    fVar5 = (float10)(local_54 / fVar1) -
            ABS((float10)SQRT(fVar2 * fVar2 - local_58 * local_58) / fVar4);
  }
  if ((float10)0.003 < fVar5) {
    return fVar5;
  }
LAB_08048eb0:
  return (float10)-1.0;
}



float * __regparm3
FUN_08048ebe(float *param_1_00,int param_2_00,int param_3_00,float *param_1,float *param_2,
            int param_3,undefined4 param_4)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 uVar4;
  undefined2 extraout_var_01;
  uint uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  ushort uVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  float local_60;
  float local_5c;
  float local_58;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  
  iVar7 = -1;
  fVar10 = (float10)1e+20;
  pfVar8 = param_1_00;
  for (iVar6 = 0; iVar6 < param_3_00; iVar6 = iVar6 + 1) {
    fVar12 = (float10)FUN_08048c66(param_2,param_4,pfVar8,pfVar8);
    fVar10 = (float10)(float)fVar10;
    fVar11 = (float10)0;
    pfVar8 = (float *)CONCAT22(extraout_var,
                               (ushort)(fVar12 < fVar11) << 8 | (ushort)(fVar12 == fVar11) << 0xe);
    if ((fVar12 >= fVar11 && (fVar12 == fVar11) == 0) &&
       (pfVar8 = (float *)CONCAT22(extraout_var,
                                   (ushort)(fVar12 < fVar10) << 8 |
                                   (ushort)(fVar12 == fVar10) << 0xe), fVar12 < fVar10)) {
      iVar7 = iVar6;
      fVar10 = fVar12;
    }
  }
  if (iVar7 == -1) {
    *param_1_00 = 0.0;
    param_1_00[1] = 0.0;
    param_1_00[2] = 0.0;
  }
  else {
    pfVar8 = (float *)(param_2_00 + iVar7 * 0x40080);
    fVar11 = fVar10 * (float10)*param_2 + (float10)*param_1;
    pfVar8[3] = (float)fVar11;
    fVar12 = (float10)param_2[1] * fVar10 + (float10)param_1[1];
    pfVar8[4] = (float)fVar12;
    fVar10 = fVar10 * (float10)param_2[2] + (float10)param_1[2];
    pfVar8[5] = (float)fVar10;
    if (*(char *)(pfVar8 + 0x1f) == '\0') {
      pfVar8[6] = (float)((fVar11 - (float10)*pfVar8) / (float10)pfVar8[0x18]);
      pfVar8[7] = (float)((fVar12 - (float10)pfVar8[1]) / (float10)pfVar8[0x18]);
      pfVar8[8] = (float)((fVar10 - (float10)pfVar8[2]) / (float10)pfVar8[0x18]);
    }
    if (*(char *)(pfVar8 + 0x1f) == '\x02') {
      FUN_0804847f();
      FUN_080484a2();
    }
    FUN_0804847f();
    fVar11 = (float10)FUN_08048498();
    FUN_080484a2();
    iVar7 = 0;
    fVar12 = (float10)FUN_08048438();
    fVar10 = (float10)0;
    uVar4 = CONCAT22(extraout_var_00,
                     (ushort)(fVar12 < fVar10) << 8 | (ushort)(fVar12 == fVar10) << 0xe);
    if (fVar12 < fVar10) {
LAB_0804904a:
      uVar9 = 0;
      local_5c = 0.0;
    }
    else {
      for (; uVar9 = 0, iVar7 < param_3_00; iVar7 = iVar7 + 1) {
        fVar13 = (float10)FUN_08048c66(&local_40,1,uVar4,uVar4);
        fVar10 = (float10)0.001;
        uVar9 = (ushort)(fVar13 < fVar10) << 8 | (ushort)(fVar13 == fVar10) << 0xe;
        if ((fVar13 >= fVar10 && (fVar13 == fVar10) == 0) &&
           (fVar10 = (float10)(float)fVar11,
           uVar9 = (ushort)(fVar13 < fVar10) << 8 | (ushort)(fVar13 == fVar10) << 0xe,
           fVar13 < fVar10)) goto LAB_0804904a;
        uVar4 = CONCAT22(extraout_var_01,uVar9);
      }
      FUN_0804847f();
      fVar10 = (float10)FUN_08048498();
      local_40 = (float)((float10)local_40 / fVar10);
      local_3c = (float)((float10)local_3c / fVar10);
      local_38 = (float)((float10)local_38 / fVar10);
      fVar1 = pfVar8[0x1c];
      fVar14 = (float)(int)pfVar8[0x1e];
      fVar10 = (float10)FUN_08048438();
      fVar14 = powf((float)fVar10,fVar14);
      local_5c = fVar14 * pfVar8[0x1d] + (float)fVar12 * fVar1;
    }
    if (*(char *)(pfVar8 + 0x1f) == '\0') {
      fVar10 = (float10)FUN_08048438();
      fVar10 = -fVar10;
      fVar11 = (float10)fpatan(SQRT((float10)1 - fVar10 * fVar10),fVar10);
      iVar6 = (int)ROUND((float10)81.4874 * fVar11);
      fVar10 = (float10)FUN_08048438();
      fVar11 = (float10)fsin((float10)(float)fVar11);
      fVar10 = fVar10 / fVar11;
      fVar10 = (float10)fpatan(SQRT((float10)1 - fVar10 * fVar10),fVar10);
      iVar7 = (int)ROUND(fVar10 * (float10)40.74366);
      fVar10 = (float10)FUN_08048438();
      if ((float10)0 < fVar10) {
        iVar7 = 0x100 - iVar7;
      }
    }
    else {
      fVar10 = (float10)FUN_08048438();
      do {
        fVar10 = fVar10 - (fVar10 / (float10)256.0) * (float10)256.0;
      } while ((uVar9 & 0x400) != 0);
      uVar5 = (int)ROUND(fVar10) >> 0x1f;
      iVar7 = (uVar5 ^ (int)ROUND(fVar10)) - uVar5;
      fVar10 = (float10)FUN_08048438();
      do {
        fVar10 = fVar10 - (fVar10 / (float10)256.0) * (float10)256.0;
      } while ((uVar9 & 0x400) != 0);
      uVar5 = (int)ROUND(fVar10) >> 0x1f;
      iVar6 = (uVar5 ^ (int)ROUND(fVar10)) - uVar5;
    }
    iVar7 = iVar6 * 0x100 + iVar7;
    bVar2 = *(byte *)((int)pfVar8 + iVar7 * 4 + 0x82);
    bVar3 = *(byte *)((int)pfVar8 + iVar7 * 4 + 0x81);
    pfVar8[0xb] = (float)(uint)*(byte *)(pfVar8 + iVar7 + 0x20);
    local_5c = local_5c + 0.3;
    local_60 = (float)(uint)bVar2 * local_5c;
    pfVar8[9] = local_60;
    local_58 = (float)(uint)bVar3 * local_5c;
    pfVar8[10] = local_58;
    local_5c = local_5c * pfVar8[0xb];
    pfVar8[0xb] = local_5c;
    if ((0 < param_3) && (*(char *)((int)pfVar8 + 0x7d) == '\x01')) {
      fVar10 = (float10)FUN_08048438();
      fVar10 = fVar10 + fVar10;
      local_34 = (float)((float10)*param_2 - fVar10 * (float10)pfVar8[6]);
      local_30 = (float)((float10)param_2[1] - (float10)pfVar8[7] * fVar10);
      local_2c = (float)((float10)param_2[2] - (float10)pfVar8[8] * fVar10);
      FUN_080484a2();
      FUN_08048ebe(pfVar8 + 3,&local_34,param_3 + -1,1);
      local_60 = local_28 * 0.6 + local_60;
      local_58 = local_24 * 0.6 + local_58;
      local_5c = local_20 * 0.6 + local_5c;
    }
    if (255.0 < local_60) {
      local_60 = 255.0;
    }
    *param_1_00 = local_60;
    if (255.0 < local_58) {
      local_58 = 255.0;
    }
    param_1_00[1] = local_58;
    if (255.0 < local_5c) {
      local_5c = 255.0;
    }
    param_1_00[2] = local_5c;
  }
  return param_1_00;
}



void __regparm3 FUN_0804938f(int param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float local_28;
  float local_24;
  float local_20;
  
  for (iVar3 = 0; iVar3 < param_2; iVar3 = iVar3 + 1) {
    FUN_0804847f();
    if (*(char *)(param_1 + 0x7c) == '\0') {
      fVar1 = *(float *)(param_1 + 0x60);
      fVar5 = (float10)FUN_08048438();
      *(float *)(param_1 + 100) = (float)((float10)(fVar1 * fVar1) - fVar5);
    }
    if (*(char *)(param_1 + 0x7c) == '\x01') {
      fVar5 = (float10)FUN_08048438();
      *(float *)(param_1 + 0x6c) = (float)fVar5;
      fVar5 = (float10)FUN_08048438();
      *(float *)(param_1 + 0x68) = (float)fVar5;
    }
    param_1 = param_1 + 0x40080;
  }
  iVar3 = 0;
  puVar4 = &DAT_0964cd20;
  do {
    FUN_08048ebe(&DAT_0824a50c,puVar4,2,0);
    iVar2 = (int)ROUND(local_24) * 0x100 + (int)ROUND(local_28) * 0x10000 + (int)ROUND(local_20);
    *(int *)(param_3 + 4 + iVar3 * 4) = iVar2;
    *(int *)(param_3 + iVar3 * 4) = iVar2;
    iVar3 = iVar3 + 2;
    puVar4 = puVar4 + 6;
  } while (iVar3 != 0x30000);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  code *pcVar1;
  float10 fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  undefined4 uVar11;
  int iStack262356;
  char *pcStack262348;
  int iStack262344;
  int iStack262336;
  undefined auStack262332 [262284];
  char local_30 [32];
  
  iVar7 = 0;
  iVar4 = SDL_SetVideoMode(0x200,0x180,0x20,0xc0000001);
  uVar11 = *(undefined4 *)(iVar4 + 0x14);
  SDL_ShowCursor(0);
  iStack262336 = -0xc0;
  _DAT_0824a514 = 0xc2f00000;
  do {
    iVar9 = -0x100;
    pfVar6 = (float *)(&DAT_0964cd20 + iVar7 * 3);
    do {
      fVar3 = (float)iVar9;
      iVar9 = iVar9 + 1;
      *pfVar6 = fVar3;
      pfVar6[1] = (float)iStack262336;
      pfVar6[2] = 512.0;
      pfVar6 = pfVar6 + 3;
      FUN_080484a2(iVar4,uVar11);
    } while (iVar9 != 0x100);
    iVar7 = iVar7 + 0x200;
    iStack262336 = iStack262336 + 1;
  } while (iVar7 != 0x30000);
  iStack262356 = 0;
  iVar7 = -10;
  iStack262344 = 0;
  do {
    iVar9 = -0x2d;
    pcStack262348 = &DAT_08049a40 + iStack262344;
    do {
      if (*pcStack262348 == '\x01') {
        iVar8 = iStack262356 * 0x40080;
        FUN_08048775((float)iVar9,(float)iVar7,0xc1c80000,0x40000000);
        memcpy(&DAT_0824a520 + iVar8,auStack262332,0x40080);
        iStack262356 = iStack262356 + 1;
        (&DAT_0824a59d)[iVar8] = 0;
      }
      iVar9 = iVar9 + 4;
      pcStack262348 = pcStack262348 + 1;
    } while (iVar9 != 0x2f);
    iVar7 = iVar7 + 4;
    iStack262344 = iStack262344 + 0x17;
  } while (iVar7 != 0xe);
  FUN_080486ba(0,0,0xc1200000,0,0,0xbf800000,0xe,0xe);
  memcpy(&DAT_0938c7a0,auStack262332,0x40080);
  FUN_08048775(0,0x41f00000,0xc20c0000,0x41700000);
  memcpy(&DAT_093cc820,auStack262332,0x40080);
  FUN_0804881d(0,0xc2c80000,0xc1f00000,0);
  FUN_080486ba(0,0x41f00000,0,0,0xbf800000,0);
  memcpy(&DAT_0804a100,auStack262332,0x40080);
  FUN_080486ba(0,0xc1a00000,0,0,0x3f800000,0);
  memcpy(&DAT_0808a180,auStack262332,0x40080);
  FUN_080486ba(0xc2480000,0,0,0x3f800000,0,0);
  memcpy(&DAT_080ca200,auStack262332,0x40080);
  FUN_080486ba(0x42480000,0,0,0xbf800000,0,0);
  memcpy(&DAT_0810a280,auStack262332,0x40080);
  FUN_080486ba(0,0,0x42200000,0,0,0xbf800000);
  memcpy(&DAT_0814a300,auStack262332,0x40080);
  FUN_08048775(0,0x41800000,0xc1a00000,0x41700000);
  memcpy(&DAT_0818a380,auStack262332,0x40080);
  FUN_08048613(0xc1f00000,0x41f00000,0xc1a00000,0x41200000,0,0xbf800000,0);
  memcpy(&DAT_081ca400,auStack262332,0x40080);
  iVar8 = 0;
  FUN_08048613(0x41f00000,0x41f00000,0xc1a00000,0x41200000,0,0xbf800000,0);
  iVar7 = 0;
  memcpy(&DAT_0820a480,auStack262332,0x40080);
  _DAT_0824a508 = -120.0;
  iVar9 = SDL_GetTicks();
  while ((iVar5 = SDL_GetTicks(), (uint)(iVar5 - iVar9) < 14000 && (local_30[0] != '\x02'))) {
    fVar2 = (float10)fcos((float10)iVar8 * (float10)0.01745328);
    fVar10 = (float10)fsin((float10)iVar8 * (float10)0.01745328);
    _DAT_0824a500 = (float)(fVar2 * (float10)30.0);
    _DAT_0824a504 = (float)((float10)30.0 * fVar10);
    if (iVar7 < 0x32) {
      iVar5 = 0;
      do {
        *(float *)((int)&DAT_0940c8a4 + iVar5) = *(float *)((int)&DAT_0940c8a4 + iVar5) + 2.0;
        iVar5 = iVar5 + 0x40080;
      } while (iVar5 != 0x1c0380);
    }
    iVar7 = iVar7 + 1;
    iVar8 = iVar8 + 4;
    FUN_0804938f();
    SDL_Flip(iVar4);
    SDL_PollEvent(local_30);
  }
  iVar8 = SDL_GetTicks();
  iVar9 = iVar7 * 2;
  while ((iVar5 = SDL_GetTicks(), (uint)(iVar5 - iVar8) < 14000 && (local_30[0] != '\x02'))) {
    fVar10 = (float10)iVar9;
    iVar7 = iVar7 + 1;
    iVar9 = iVar9 + 2;
    _DAT_0824a504 = -10.0;
    fVar2 = (float10)fcos(fVar10 * (float10)0.01745328);
    fVar10 = (float10)fsin(fVar10 * (float10)0.01745328);
    _DAT_0824a500 = (float)(fVar2 * (float10)20.0);
    _DAT_0824a508 = (float)((float10)20.0 * fVar10);
    FUN_0804938f();
    SDL_Flip(iVar4);
    SDL_PollEvent(local_30);
  }
  iVar9 = SDL_GetTicks();
  iVar7 = iVar7 * 4;
  _DAT_0824a508 = -120.0;
  while ((iVar8 = SDL_GetTicks(), (uint)(iVar8 - iVar9) < 14000 && (local_30[0] != '\x02'))) {
    fVar10 = (float10)iVar7;
    iVar7 = iVar7 + 4;
    fVar2 = (float10)fcos(fVar10 * (float10)0.01745328);
    fVar10 = (float10)fsin(fVar10 * (float10)0.01745328);
    _DAT_0824a500 = (float)(fVar2 * (float10)30.0);
    _DAT_0824a504 = (float)((float10)30.0 * fVar10);
    FUN_0804938f();
    SDL_Flip(iVar4);
    SDL_PollEvent(local_30);
  }
  SDL_Quit();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}


