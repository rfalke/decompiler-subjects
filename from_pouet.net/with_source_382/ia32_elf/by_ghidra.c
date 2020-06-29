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

typedef ulong size_t;




void thunk_FUN_0804839e(void)

{
                    // WARNING: Could not recover jumptable at 0x08048398. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_FUN_0804a0bc)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0804839e(void)

{
                    // WARNING: Could not recover jumptable at 0x0804838e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0804a0b8)(0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void thunk_FUN_080483ae(void)

{
                    // WARNING: Could not recover jumptable at 0x080483a8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0804a0c0)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_080483ae(void)

{
                    // WARNING: Could not recover jumptable at 0x0804838e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0804a0b8)(8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void thunk_FUN_080483be(void)

{
                    // WARNING: Could not recover jumptable at 0x080483b8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0804a0c4)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_080483be(void)

{
                    // WARNING: Could not recover jumptable at 0x0804838e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0804a0b8)(0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void thunk_FUN_080483ce(void)

{
                    // WARNING: Could not recover jumptable at 0x080483c8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0804a0c8)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_080483ce(void)

{
                    // WARNING: Could not recover jumptable at 0x0804838e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0804a0b8)(0x18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void thunk_FUN_080483de(void)

{
                    // WARNING: Could not recover jumptable at 0x080483d8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0804a0cc)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_080483de(void)

{
                    // WARNING: Could not recover jumptable at 0x0804838e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0804a0b8)(0x20);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void thunk_FUN_080483ee(void)

{
                    // WARNING: Could not recover jumptable at 0x080483e8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0804a0d0)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_080483ee(void)

{
                    // WARNING: Could not recover jumptable at 0x0804838e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0804a0b8)(0x28);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void thunk_FUN_080483fe(void)

{
                    // WARNING: Could not recover jumptable at 0x080483f8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0804a0d4)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_080483fe(void)

{
                    // WARNING: Could not recover jumptable at 0x0804838e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0804a0b8)(0x30);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void thunk_FUN_0804840e(void)

{
                    // WARNING: Could not recover jumptable at 0x08048408. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0804a0d8)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0804840e(void)

{
                    // WARNING: Could not recover jumptable at 0x0804838e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0804a0b8)(0x38);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void thunk_FUN_0804841e(void)

{
                    // WARNING: Could not recover jumptable at 0x08048418. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0804a0dc)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0804841e(void)

{
                    // WARNING: Could not recover jumptable at 0x0804838e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0804a0b8)(0x40);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void thunk_FUN_0804842e(void)

{
                    // WARNING: Could not recover jumptable at 0x08048428. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0804a0e0)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0804842e(void)

{
                    // WARNING: Could not recover jumptable at 0x0804838e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0804a0b8)(0x48);
  return;
}



float10 FUN_08048438(void)

{
  float *in_EAX;
  float *in_EDX;
  
  return (float10)in_EAX[2] * (float10)in_EDX[2] +
         (float10)in_EAX[1] * (float10)in_EDX[1] + (float10)*in_EAX * (float10)*in_EDX;
}



void FUN_0804844d(void)

{
  float fVar1;
  float fVar2;
  float *in_EAX;
  float *in_ECX;
  float *in_EDX;
  
  fVar1 = in_EAX[2];
  *in_ECX = in_EAX[1] * in_EDX[2] - in_EDX[1] * fVar1;
  fVar2 = *in_EAX;
  in_ECX[1] = fVar1 * *in_EDX - in_EDX[2] * fVar2;
  in_ECX[2] = fVar2 * in_EDX[1] - in_EAX[1] * *in_EDX;
  return;
}



void FUN_0804847f(void)

{
  float *in_EAX;
  float *in_ECX;
  float *in_EDX;
  
  *in_ECX = *in_EAX - *in_EDX;
  in_ECX[1] = in_EAX[1] - in_EDX[1];
  in_ECX[2] = in_EAX[2] - in_EDX[2];
  return;
}



float10 FUN_08048498(void)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_08048438();
  return SQRT(fVar1);
}



void FUN_080484a2(void)

{
  float *in_EAX;
  float10 fVar1;
  
  fVar1 = (float10)FUN_08048438();
  fVar1 = (float10)1.00000000 / SQRT(fVar1);
  *in_EAX = (float)((float10)*in_EAX * fVar1);
  in_EAX[1] = (float)((float10)in_EAX[1] * fVar1);
  in_EAX[2] = (float)(fVar1 * (float10)in_EAX[2]);
  return;
}



void FUN_080484ca(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  char in_DL;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int local_20;
  
  uVar9 = 0;
  thunk_FUN_0804839e(0x539);
  do {
    iVar7 = 0;
    do {
      piVar1 = (int *)(in_EAX + (uVar9 * 0x100 + iVar7) * 4);
      *piVar1 = 0xffffff;
      if (in_DL == '\0') {
        uVar3 = iVar7 + 100U ^ uVar9;
LAB_0804855e:
        iVar4 = uVar3 * 0x10101;
LAB_08048564:
        *piVar1 = iVar4;
      }
      else {
        if (in_DL == '\x01') {
          if ((9 < iVar7 % 0x14) || (iVar4 = 0xff0000, 9 < (int)uVar9 % 0x14)) {
            iVar4 = 0xff00ff;
          }
          goto LAB_08048564;
        }
        if ((byte)(in_DL - 2U) < 2) {
          iVar4 = thunk_FUN_0804841e();
          uVar3 = iVar4 % 0x40 + 0xc0;
          if (in_DL != '\x02') goto LAB_0804855e;
          iVar4 = uVar3 * 0x100;
          goto LAB_08048564;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0x100);
    uVar9 = uVar9 + 1;
    if (uVar9 == 0x100) {
      if (in_DL == '\x04') {
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
                *(undefined4 *)(in_EAX + (iVar6 * 0x100 + iVar5) * 4) = 0xff0000;
                iVar2 = iVar6 * 0x100 + 0x1000 + iVar5;
                iVar5 = iVar5 + 1;
                *(undefined4 *)(in_EAX + 0x40 + iVar2 * 4) = 0xff0000;
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



void FUN_08048613(void)

{
  FUN_0804844d();
  FUN_080484ca();
  thunk_FUN_080483ee();
  return;
}



void FUN_080486ba(void)

{
  FUN_0804844d();
  FUN_080484ca();
  thunk_FUN_080483ee();
  return;
}



void FUN_08048775(void)

{
  FUN_080484ca();
  thunk_FUN_080483ee();
  return;
}



void FUN_0804881d(float param_1,float param_2,float param_3,int param_4)

{
  float fVar1;
  int in_EAX;
  int in_ECX;
  int in_EDX;
  int iVar2;
  undefined auStack262300 [262284];
  
  FUN_08048775(param_1,param_2,param_3,(float)in_EAX);
  thunk_FUN_080483ee(&DAT_0940c8a0 + param_4 * 0x40080,auStack262300,0x40080);
  if (in_EDX < 1) goto LAB_08048a84;
  if (in_ECX == 1) {
    iVar2 = param_4 + 2;
    fVar1 = (float)((in_EAX * 3) / 2);
    FUN_0804881d(param_1 - fVar1,param_2,param_3,param_4 + 1);
    FUN_0804881d(param_1,fVar1 + param_2,param_3,iVar2);
LAB_08048986:
    param_4 = iVar2 + 1;
    FUN_0804881d(param_1,param_2 - (float)((in_EAX * 3) / 2),param_3,param_4);
    if (in_ECX != 5) {
LAB_080489dc:
      param_4 = param_4 + 1;
      FUN_0804881d(param_1,param_2,(float)((in_EAX * 3) / 2) + param_3,param_4);
      if (in_ECX == 6) goto LAB_08048a84;
    }
  }
  else {
    fVar1 = (float)((in_EAX * 3) / 2);
    FUN_0804881d(param_1 + fVar1,param_2,param_3,param_4 + 1);
    iVar2 = param_4 + 2;
    if (in_ECX == 2) {
      param_4 = param_4 + 3;
      FUN_0804881d(param_1,param_2 + fVar1,param_3,iVar2);
      FUN_0804881d(param_1,param_2 - fVar1,param_3,param_4);
      goto LAB_080489dc;
    }
    FUN_0804881d(param_1 - fVar1,param_2,param_3,iVar2);
    iVar2 = param_4 + 3;
    if (in_ECX == 3) {
      param_4 = param_4 + 4;
      FUN_0804881d(param_1,param_2 - fVar1,param_3,iVar2);
      FUN_0804881d(param_1,param_2,param_3 + fVar1,param_4);
    }
    else {
      FUN_0804881d(param_1,param_2 + fVar1,param_3,iVar2);
      if (in_ECX != 4) goto LAB_08048986;
      param_4 = param_4 + 4;
      FUN_0804881d(param_1,param_2,param_3 + fVar1,param_4);
    }
  }
  param_4 = param_4 + 1;
  FUN_0804881d(param_1,param_2,param_3 - (float)((in_EAX * 3) / 2),param_4);
LAB_08048a84:
  FUN_080486ba(0,0x42200000,0,0,0xbf800000,0,param_4,param_4);
  thunk_FUN_080483ee(&DAT_0944c920 + param_4 * 0x40080,auStack262300,0x40080);
  return;
}



float10 FUN_08048c66(undefined4 param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int in_EAX;
  int in_EDX;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_5c;
  float local_58;
  float local_54;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  iVar1 = in_EAX + in_EDX * 0x40080;
  cVar4 = *(char *)(iVar1 + 0x7c);
  if (cVar4 == '\0') {
    if (param_2 == 0) {
      local_5c = *(float *)(iVar1 + 100);
      fVar5 = (float10)FUN_08048438();
      if (fVar5 < (float10)0) goto LAB_08048eb0;
    }
    else {
      FUN_0804847f();
      fVar5 = (float10)FUN_08048438();
      if (fVar5 < (float10)0) goto LAB_08048eb0;
      fVar2 = *(float *)(iVar1 + 0x60);
      fVar6 = (float10)FUN_08048438();
      local_5c = (float)((float10)(fVar2 * fVar2) - fVar6);
      fVar5 = (float10)(float)fVar5;
    }
    fVar6 = fVar5 * fVar5 + (float10)local_5c;
    if ((float10)0 < fVar6) {
      return fVar5 - SQRT(fVar6);
    }
    goto LAB_08048eb0;
  }
  if (cVar4 == '\x01') {
    if (param_2 == 0) {
      fVar6 = (float10)FUN_08048438();
      fVar6 = (float10)*(float *)(iVar1 + 0x6c) / fVar6;
    }
    else {
      fVar5 = (float10)FUN_08048438();
      fVar2 = *(float *)(iVar1 + 0x68);
      fVar6 = (float10)FUN_08048438();
      fVar6 = (float10)(float)((float10)fVar2 - fVar5) / fVar6;
    }
  }
  else {
    if (cVar4 != '\x02') goto LAB_08048eb0;
    FUN_0804847f();
    FUN_0804844d();
    fVar2 = SQRT(local_38 * local_38 + local_3c * local_3c + local_40 * local_40);
    if ((0.00000000 < fVar2) && (fVar2 < 0.00300000)) {
      fVar5 = (float10)FUN_08048438();
      fVar6 = (float10)local_34 - (float10)*(float *)(iVar1 + 0x54) * fVar5;
      fVar7 = (float10)local_30 - (float10)*(float *)(iVar1 + 0x58) * fVar5;
      fVar5 = (float10)local_2c - fVar5 * (float10)*(float *)(iVar1 + 0x5c);
      fVar5 = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6);
      if (fVar5 <= (float10)*(float *)(iVar1 + 0x60)) {
        return fVar5;
      }
      goto LAB_08048eb0;
    }
    FUN_080484a2();
    fVar5 = (float10)FUN_08048438();
    local_58 = (float)((uint)(float)fVar5 & 0x7fffffff);
    if (*(float *)(iVar1 + 0x60) < local_58) goto LAB_08048eb0;
    FUN_0804844d();
    fVar5 = (float10)FUN_08048438();
    local_54 = (float)((uint)(float)fVar5 ^ 0x80000000);
    FUN_0804844d();
    FUN_080484a2();
    fVar3 = *(float *)(iVar1 + 0x60);
    fVar5 = (float10)FUN_08048438();
    fVar6 = (float10)(local_54 / fVar2) -
            ABS((float10)SQRT(fVar3 * fVar3 - local_58 * local_58) / fVar5);
  }
  if ((float10)0.00300000 < fVar6) {
    return fVar6;
  }
LAB_08048eb0:
  return (float10)-1.00000000;
}



float * FUN_08048ebe(float *param_1,float *param_2,int param_3,undefined4 param_4)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  float *in_EAX;
  undefined2 extraout_var;
  float *pfVar4;
  undefined2 extraout_var_00;
  undefined4 uVar5;
  undefined2 extraout_var_01;
  int in_ECX;
  int in_EDX;
  uint uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  ushort uVar13;
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
  
  iVar8 = -1;
  iVar7 = 0;
  fVar9 = (float10)100000002004087734272.00000000;
  pfVar4 = in_EAX;
  while (iVar7 < in_ECX) {
    fVar11 = (float10)FUN_08048c66(param_2,param_4,pfVar4,pfVar4);
    fVar9 = (float10)(float)fVar9;
    fVar10 = (float10)0;
    pfVar4 = (float *)CONCAT22(extraout_var,
                               (ushort)(fVar11 < fVar10) << 8 | (ushort)(fVar11 == fVar10) << 0xe);
    if ((fVar10 < fVar11) &&
       (pfVar4 = (float *)CONCAT22(extraout_var,
                                   (ushort)(fVar11 < fVar9) << 8 | (ushort)(fVar11 == fVar9) << 0xe)
       , fVar11 < fVar9)) {
      iVar8 = iVar7;
      fVar9 = fVar11;
    }
    iVar7 = iVar7 + 1;
  }
  if (iVar8 == -1) {
    *in_EAX = 0.00000000;
    in_EAX[1] = 0.00000000;
    in_EAX[2] = 0.00000000;
  }
  else {
    pfVar4 = (float *)(in_EDX + iVar8 * 0x40080);
    fVar10 = fVar9 * (float10)*param_2 + (float10)*param_1;
    pfVar4[3] = (float)fVar10;
    fVar11 = (float10)param_2[1] * fVar9 + (float10)param_1[1];
    pfVar4[4] = (float)fVar11;
    fVar9 = fVar9 * (float10)param_2[2] + (float10)param_1[2];
    pfVar4[5] = (float)fVar9;
    if (*(char *)(pfVar4 + 0x1f) == '\0') {
      pfVar4[6] = (float)((fVar10 - (float10)*pfVar4) / (float10)pfVar4[0x18]);
      pfVar4[7] = (float)((fVar11 - (float10)pfVar4[1]) / (float10)pfVar4[0x18]);
      pfVar4[8] = (float)((fVar9 - (float10)pfVar4[2]) / (float10)pfVar4[0x18]);
    }
    if (*(char *)(pfVar4 + 0x1f) == '\x02') {
      FUN_0804847f();
      FUN_080484a2();
    }
    FUN_0804847f();
    fVar10 = (float10)FUN_08048498();
    FUN_080484a2();
    iVar8 = 0;
    fVar11 = (float10)FUN_08048438();
    fVar9 = (float10)0;
    uVar5 = CONCAT22(extraout_var_00,
                     (ushort)(fVar11 < fVar9) << 8 | (ushort)(fVar11 == fVar9) << 0xe);
    if (fVar11 < fVar9) {
LAB_0804904a:
      uVar13 = 0;
      fVar9 = (float10)0;
    }
    else {
      while (uVar13 = 0, iVar8 < in_ECX) {
        fVar12 = (float10)FUN_08048c66(&local_40,1,uVar5,uVar5);
        fVar9 = (float10)0.00100000;
        uVar13 = (ushort)(fVar12 < fVar9) << 8 | (ushort)(fVar12 == fVar9) << 0xe;
        if ((fVar9 < fVar12) &&
           (fVar9 = (float10)(float)fVar10,
           uVar13 = (ushort)(fVar12 < fVar9) << 8 | (ushort)(fVar12 == fVar9) << 0xe, fVar12 < fVar9
           )) goto LAB_0804904a;
        uVar5 = CONCAT22(extraout_var_01,uVar13);
        iVar8 = iVar8 + 1;
      }
      FUN_0804847f();
      fVar9 = (float10)FUN_08048498();
      local_40 = (float)((float10)local_40 / fVar9);
      local_3c = (float)((float10)local_3c / fVar9);
      local_38 = (float)((float10)local_38 / fVar9);
      fVar1 = pfVar4[0x1c];
      fVar9 = (float10)FUN_08048438((float)(int)pfVar4[0x1e]);
      fVar9 = (float10)thunk_FUN_0804842e((float)fVar9);
      fVar9 = fVar9 * (float10)pfVar4[0x1d] + (float10)((float)fVar11 * fVar1);
    }
    if (*(char *)(pfVar4 + 0x1f) == '\0') {
      fVar10 = (float10)FUN_08048438();
      fVar10 = -fVar10;
      fVar11 = (float10)fpatan(SQRT((float10)1 - fVar10 * fVar10),fVar10);
      iVar7 = (int)ROUND((float10)81.48739624 * fVar11);
      fVar10 = (float10)FUN_08048438();
      fVar11 = (float10)fsin((float10)(float)fVar11);
      fVar10 = fVar10 / fVar11;
      fVar10 = (float10)fpatan(SQRT((float10)1 - fVar10 * fVar10),fVar10);
      iVar8 = (int)ROUND(fVar10 * (float10)40.74366379);
      fVar10 = (float10)FUN_08048438();
      if ((float10)0 < fVar10) {
        iVar8 = 0x100 - iVar8;
      }
    }
    else {
      fVar10 = (float10)FUN_08048438();
      do {
        fVar10 = fVar10 - (fVar10 / (float10)256.00000000) * (float10)256.00000000;
      } while ((uVar13 & 0x400) != 0);
      uVar6 = (int)ROUND(fVar10) >> 0x1f;
      iVar8 = (uVar6 ^ (int)ROUND(fVar10)) - uVar6;
      fVar10 = (float10)FUN_08048438();
      do {
        fVar10 = fVar10 - (fVar10 / (float10)256.00000000) * (float10)256.00000000;
      } while ((uVar13 & 0x400) != 0);
      uVar6 = (int)ROUND(fVar10) >> 0x1f;
      iVar7 = (uVar6 ^ (int)ROUND(fVar10)) - uVar6;
    }
    iVar8 = iVar7 * 0x100 + iVar8;
    bVar2 = *(byte *)((int)pfVar4 + iVar8 * 4 + 0x82);
    bVar3 = *(byte *)((int)pfVar4 + iVar8 * 4 + 0x81);
    pfVar4[0xb] = (float)(uint)*(byte *)(pfVar4 + iVar8 + 0x20);
    local_5c = (float)fVar9 + 0.30000001;
    local_60 = (float)(uint)bVar2 * local_5c;
    pfVar4[9] = local_60;
    local_58 = (float)(uint)bVar3 * local_5c;
    pfVar4[10] = local_58;
    local_5c = local_5c * pfVar4[0xb];
    pfVar4[0xb] = local_5c;
    if ((0 < param_3) && (*(char *)((int)pfVar4 + 0x7d) == '\x01')) {
      fVar9 = (float10)FUN_08048438();
      fVar9 = fVar9 + fVar9;
      local_34 = (float)((float10)*param_2 - fVar9 * (float10)pfVar4[6]);
      local_30 = (float)((float10)param_2[1] - (float10)pfVar4[7] * fVar9);
      local_2c = (float)((float10)param_2[2] - (float10)pfVar4[8] * fVar9);
      FUN_080484a2();
      FUN_08048ebe(pfVar4 + 3,&local_34,param_3 + -1,1);
      local_60 = local_28 * 0.60000002 + local_60;
      local_58 = local_24 * 0.60000002 + local_58;
      local_5c = local_20 * 0.60000002 + local_5c;
    }
    if (255.00000000 < local_60) {
      local_60 = 255.00000000;
    }
    *in_EAX = local_60;
    if (255.00000000 < local_58) {
      local_58 = 255.00000000;
    }
    in_EAX[1] = local_58;
    if (255.00000000 < local_5c) {
      local_5c = 255.00000000;
    }
    in_EAX[2] = local_5c;
  }
  return in_EAX;
}



void FUN_0804938f(void)

{
  float fVar1;
  int in_EAX;
  int in_ECX;
  int iVar2;
  int in_EDX;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float local_28;
  float local_24;
  float local_20;
  
  iVar3 = 0;
  while (iVar3 < in_EDX) {
    FUN_0804847f();
    if (*(char *)(in_EAX + 0x7c) == '\0') {
      fVar1 = *(float *)(in_EAX + 0x60);
      fVar5 = (float10)FUN_08048438();
      *(float *)(in_EAX + 100) = (float)((float10)(fVar1 * fVar1) - fVar5);
    }
    if (*(char *)(in_EAX + 0x7c) == '\x01') {
      fVar5 = (float10)FUN_08048438();
      *(float *)(in_EAX + 0x6c) = (float)fVar5;
      fVar5 = (float10)FUN_08048438();
      *(float *)(in_EAX + 0x68) = (float)fVar5;
    }
    iVar3 = iVar3 + 1;
    in_EAX = in_EAX + 0x40080;
  }
  iVar3 = 0;
  puVar4 = &DAT_0964cd20;
  do {
    FUN_08048ebe(&DAT_0824a50c,puVar4,2,0);
    iVar2 = (int)ROUND(local_24) * 0x100 + (int)ROUND(local_28) * 0x10000 + (int)ROUND(local_20);
    *(int *)(in_ECX + 4 + iVar3 * 4) = iVar2;
    *(int *)(in_ECX + iVar3 * 4) = iVar2;
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
  iVar4 = thunk_FUN_080483de(0x200,0x180,0x20,0xc0000001);
  uVar11 = *(undefined4 *)(iVar4 + 0x14);
  thunk_FUN_080483ae(0);
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
      pfVar6[2] = 512.00000000;
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
        thunk_FUN_080483ee(&DAT_0824a520 + iVar8,auStack262332,0x40080);
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
  thunk_FUN_080483ee(&DAT_0938c7a0,auStack262332,0x40080);
  FUN_08048775(0,0x41f00000,0xc20c0000,0x41700000);
  thunk_FUN_080483ee(&DAT_093cc820,auStack262332,0x40080);
  FUN_0804881d(0,0xc2c80000,0xc1f00000,0);
  FUN_080486ba(0,0x41f00000,0,0,0xbf800000,0);
  thunk_FUN_080483ee(&DAT_0804a100,auStack262332,0x40080);
  FUN_080486ba(0,0xc1a00000,0,0,0x3f800000,0);
  thunk_FUN_080483ee(&DAT_0808a180,auStack262332,0x40080);
  FUN_080486ba(0xc2480000,0,0,0x3f800000,0,0);
  thunk_FUN_080483ee(&DAT_080ca200,auStack262332,0x40080);
  FUN_080486ba(0x42480000,0,0,0xbf800000,0,0);
  thunk_FUN_080483ee(&DAT_0810a280,auStack262332,0x40080);
  FUN_080486ba(0,0,0x42200000,0,0,0xbf800000);
  thunk_FUN_080483ee(&DAT_0814a300,auStack262332,0x40080);
  FUN_08048775(0,0x41800000,0xc1a00000,0x41700000);
  thunk_FUN_080483ee(&DAT_0818a380,auStack262332,0x40080);
  FUN_08048613(0xc1f00000,0x41f00000,0xc1a00000,0x41200000,0,0xbf800000,0);
  thunk_FUN_080483ee(&DAT_081ca400,auStack262332,0x40080);
  iVar8 = 0;
  FUN_08048613(0x41f00000,0x41f00000,0xc1a00000,0x41200000,0,0xbf800000,0);
  iVar7 = 0;
  thunk_FUN_080483ee(&DAT_0820a480,auStack262332,0x40080);
  _DAT_0824a508 = -120.00000000;
  iVar9 = thunk_FUN_080483be();
  while ((iVar5 = thunk_FUN_080483be(), (uint)(iVar5 - iVar9) < 14000 && (local_30[0] != '\x02'))) {
    fVar2 = (float10)fcos((float10)iVar8 * (float10)0.01745328);
    fVar10 = (float10)fsin((float10)iVar8 * (float10)0.01745328);
    _DAT_0824a500 = (float)(fVar2 * (float10)30.00000000);
    _DAT_0824a504 = (float)((float10)30.00000000 * fVar10);
    if (iVar7 < 0x32) {
      iVar5 = 0;
      do {
        *(float *)((int)&DAT_0940c8a4 + iVar5) = *(float *)((int)&DAT_0940c8a4 + iVar5) + 2.00000000
        ;
        iVar5 = iVar5 + 0x40080;
      } while (iVar5 != 0x1c0380);
    }
    iVar7 = iVar7 + 1;
    iVar8 = iVar8 + 4;
    FUN_0804938f();
    thunk_FUN_080483fe(iVar4);
    thunk_FUN_080483ce(local_30);
  }
  iVar8 = thunk_FUN_080483be();
  iVar9 = iVar7 * 2;
  while ((iVar5 = thunk_FUN_080483be(), (uint)(iVar5 - iVar8) < 14000 && (local_30[0] != '\x02'))) {
    fVar10 = (float10)iVar9;
    iVar7 = iVar7 + 1;
    iVar9 = iVar9 + 2;
    _DAT_0824a504 = -10.00000000;
    fVar2 = (float10)fcos(fVar10 * (float10)0.01745328);
    fVar10 = (float10)fsin(fVar10 * (float10)0.01745328);
    _DAT_0824a500 = (float)(fVar2 * (float10)20.00000000);
    _DAT_0824a508 = (float)((float10)20.00000000 * fVar10);
    FUN_0804938f();
    thunk_FUN_080483fe(iVar4);
    thunk_FUN_080483ce(local_30);
  }
  iVar9 = thunk_FUN_080483be();
  iVar7 = iVar7 * 4;
  _DAT_0824a508 = -120.00000000;
  while ((iVar8 = thunk_FUN_080483be(), (uint)(iVar8 - iVar9) < 14000 && (local_30[0] != '\x02'))) {
    fVar10 = (float10)iVar7;
    iVar7 = iVar7 + 4;
    fVar2 = (float10)fcos(fVar10 * (float10)0.01745328);
    fVar10 = (float10)fsin(fVar10 * (float10)0.01745328);
    _DAT_0824a500 = (float)(fVar2 * (float10)30.00000000);
    _DAT_0824a504 = (float)((float10)30.00000000 * fVar10);
    FUN_0804938f();
    thunk_FUN_080483fe(iVar4);
    thunk_FUN_080483ce(local_30);
  }
  thunk_FUN_0804840e();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}


