typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    word;
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




undefined8
entry(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
     undefined param_5)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 extraout_ECX;
  undefined4 *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  byte bVar5;
  undefined8 uVar6;
  int unaff_retaddr;
  
  puVar1 = param_2;
  bVar5 = 0;
  iVar4 = 0;
  DAT_080483ef._0_1_ = 1;
  puVar3 = &param_2;
  if (-1 < unaff_retaddr + -2) {
    puVar3 = &param_3;
    param_1 = puVar1;
    if (-1 < unaff_retaddr + -3) {
      param_3 = 5;
      puVar3 = (undefined4 *)&param_5;
      pcVar2 = (code *)swi(0x80);
      iVar4 = (*pcVar2)();
      if (iVar4 < 0) {
        param_4 = 4;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar3 = (undefined4 *)&stack0x00000018;
        goto LAB_080480d8;
      }
    }
    pcVar2 = FUN_08048203;
    DAT_080483eb = iVar4;
    if ((*(char *)puVar1 == 'e') || (pcVar2 = FUN_08048312, *(char *)puVar1 == 'd')) {
      *(undefined4 *)((int)puVar3 + -4) = 0x80480d8;
      (*pcVar2)();
      goto LAB_080480d8;
    }
  }
  *(undefined4 *)((int)puVar3 + -4) = 0x15;
  *(undefined4 *)((int)puVar3 + -4) = 1;
  *(undefined4 *)((int)puVar3 + -4) = 4;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  puVar3 = (undefined4 *)((int)puVar3 + 4);
LAB_080480d8:
  puVar3[-1] = 1;
  pcVar2 = (code *)swi(0x80);
  uVar6 = (*pcVar2)();
  *puVar3 = (int)uVar6;
  puVar3[-1] = extraout_ECX;
  puVar3[-2] = (int)((ulonglong)uVar6 >> 0x20);
  puVar3[-3] = 0;
  puVar3[-4] = puVar3 + 1;
  puVar3[-5] = iVar4;
  puVar3[-6] = unaff_ESI;
  puVar3[-7] = param_1;
  param_1[-2] = 0x1f;
  param_1[-1] = 0;
  param_1[-3] = 0;
  for (iVar4 = 0x2004; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = 0;
    param_1 = param_1 + (uint)bVar5 * -2 + 1;
  }
  for (iVar4 = 0x18002; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = 0x8000;
    param_1 = param_1 + (uint)bVar5 * -2 + 1;
  }
  return CONCAT44(puVar3[-2],*puVar3);
}



undefined8 __regparm3 FUN_080480df(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *unaff_EDI;
  
  unaff_EDI[-2] = 0x1f;
  unaff_EDI[-1] = 0;
  unaff_EDI[-3] = 0;
  for (iVar1 = 0x2004; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_EDI = 0;
    unaff_EDI = unaff_EDI + 1;
  }
  for (iVar1 = 0x18002; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_EDI = 0x8000;
    unaff_EDI = unaff_EDI + 1;
  }
  return CONCAT44(param_2,param_1);
}



void __regparm3 FUN_08048104(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0x48014 + param_1 * 4);
  if (iVar1 != 0x8000) {
    iVar2 = *(int *)(unaff_EDI + 0x8010 + param_1 * 4);
    *(int *)(unaff_EDI + 0x8010 + iVar1 * 4) = iVar2;
    *(int *)(unaff_EDI + 0x48014 + iVar2 * 4) = iVar1;
    *(undefined4 *)(unaff_EDI + 0x8010 + param_1 * 4) = 0x8000;
    *(undefined4 *)(unaff_EDI + 0x48014 + param_1 * 4) = 0x8000;
  }
  return;
}



void __regparm3 FUN_0804813e(int param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_EDI;
  
  uVar2 = *(ushort *)(unaff_EDI + param_1) & 0x7fff;
  iVar1 = *(int *)(unaff_EDI + 0x28014 + uVar2 * 4);
  *(int *)(unaff_EDI + 0x28014 + uVar2 * 4) = param_1;
  *(uint *)(unaff_EDI + 0x48014 + param_1 * 4) = uVar2 + 0x8001;
  *(int *)(unaff_EDI + 0x8010 + param_1 * 4) = iVar1;
  if (iVar1 != 0x8000) {
    *(int *)(unaff_EDI + 0x48014 + iVar1 * 4) = param_1;
  }
  return;
}



void __regparm3 FUN_08048180(int param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + 0x68018) = 0;
  *(undefined4 *)(unaff_EDI + 0x6801c) = 0;
  uVar2 = 0;
  for (iVar1 = *(int *)(unaff_EDI + 0x28014 + (*(ushort *)(unaff_EDI + param_1) & 0x7fff) * 4);
      iVar1 != 0x8000; iVar1 = *(int *)(unaff_EDI + 0x8010 + iVar1 * 4)) {
    uVar2 = 0;
    do {
      if (*(char *)(unaff_EDI + iVar1 + uVar2) != *(char *)(unaff_EDI + param_1 + uVar2)) break;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x11);
    if (*(uint *)(unaff_EDI + 0x6801c) <= uVar2 && uVar2 != *(uint *)(unaff_EDI + 0x6801c)) {
      *(uint *)(unaff_EDI + 0x6801c) = uVar2;
      *(uint *)(unaff_EDI + 0x68018) = param_1 - iVar1 & 0x7fff;
    }
    if (uVar2 == 0x10) goto LAB_080481f7;
  }
  if (uVar2 == 0x10) {
LAB_080481f7:
    FUN_08048104();
  }
  return;
}



undefined8 __regparm3 FUN_08048203(undefined4 param_1,undefined4 param_2)

{
  undefined uVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar2;
  undefined4 extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar3;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  uint uVar4;
  undefined *unaff_ESI;
  undefined *puVar5;
  byte bVar6;
  undefined8 uVar7;
  
  bVar6 = 0;
  FUN_080480df();
  uVar4 = 0;
  FUN_080483bf();
  iVar2 = extraout_ECX;
  iVar3 = extraout_EDX;
  while ((iVar3 < 0x10 &&
         ((iVar2 != 0 ||
          (FUN_080483bf(), iVar2 = extraout_ECX_00, iVar3 = extraout_EDX_00, extraout_ECX_00 != 0)))
         )) {
    uVar1 = *unaff_ESI;
    iVar2 = iVar2 + -1;
    (&DAT_080503ff)[iVar3] = uVar1;
    (&DAT_080583ff)[iVar3] = uVar1;
    iVar3 = iVar3 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar6 * -2 + 1;
  }
  while (iVar3 != 0) {
    FUN_08048180();
    if (extraout_EDX_01 < DAT_080b841b) {
      DAT_080b841b = extraout_EDX_01;
    }
    if (DAT_080b841b < 3) {
      FUN_0804832b(extraout_ECX_01);
      DAT_080b841b = 1;
      FUN_08048312();
      iVar3 = extraout_EDX_02;
    }
    else {
      FUN_0804832b(extraout_ECX_01);
      FUN_08048312();
      FUN_08048312();
      iVar3 = extraout_EDX_03;
    }
    while (DAT_080b841b != 0) {
      DAT_080b841b = DAT_080b841b + -1;
      FUN_08048104();
      if ((extraout_ECX_02 != 0) || (FUN_080483bf(uVar4), puVar5 = unaff_ESI, extraout_ECX_03 != 0))
      {
        puVar5 = unaff_ESI + (uint)bVar6 * -2 + 1;
        uVar1 = *unaff_ESI;
        if (0x7fff < uVar4 + 0x10) {
          (&DAT_0805040f)[uVar4] = uVar1;
        }
        (&DAT_080503ff)[uVar4 + 0x10 & 0x7fff] = uVar1;
      }
      uVar7 = FUN_0804813e();
      iVar3 = (int)((ulonglong)uVar7 >> 0x20);
      uVar4 = (int)uVar7 + 1U & 0x7fff;
      unaff_ESI = puVar5;
    }
  }
  FUN_0804832b();
  FUN_08048312();
  FUN_080483a0();
  return CONCAT44(param_2,param_1);
}



void FUN_08048312(void)

{
  int extraout_ECX;
  
  do {
    FUN_0804832b();
  } while (-1 < extraout_ECX + -1);
  return;
}



void __regparm3 FUN_0804832b(uint param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int unaff_ESI;
  int unaff_EDI;
  int iVar5;
  
  iVar5 = unaff_EDI + -0x400c;
  if (*(int *)(unaff_EDI + -8) != 0) {
    *(uint *)(unaff_EDI + -4) =
         *(uint *)(unaff_EDI + -4) | (param_1 & 1) << ((byte)*(int *)(unaff_EDI + -8) & 0x1f);
    *(int *)(unaff_EDI + -8) = *(int *)(unaff_EDI + -8) + -1;
    return;
  }
  uVar4 = *(uint *)(unaff_EDI + -4);
  iVar1 = *(int *)(unaff_EDI + -0xc);
  uVar3 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
          (param_1 & 1 | uVar4) << 0x18;
  *(uint *)(iVar5 + iVar1 * 4) = uVar3;
  uVar4 = iVar1 + 1U & 0xfff;
  if (uVar4 == 0) {
    pcVar2 = (code *)swi(0x80);
    iVar5 = unaff_ESI;
    (*pcVar2)();
    uVar4 = uVar3;
  }
  *(uint *)(iVar5 + 0x4000) = uVar4;
  *(undefined4 *)(iVar5 + 0x4004) = 0x1f;
  *(undefined4 *)(iVar5 + 0x4008) = 0;
  return;
}



void FUN_080483a0(void)

{
  code *pcVar1;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + -0x400c + *(int *)(unaff_EDI + -0xc) * 4) =
       *(undefined4 *)(unaff_EDI + -4);
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}



undefined8 __regparm3 FUN_080483bf(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_retaddr;
  
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)(param_2);
  return CONCAT44(unaff_EBX,unaff_retaddr);
}


