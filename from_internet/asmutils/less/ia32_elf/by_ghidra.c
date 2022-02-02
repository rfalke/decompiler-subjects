typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
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




void FUN_080480a4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_080480b5(void)

{
  code *pcVar1;
  int iVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *puVar3;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar5 = (undefined4 *)&stack0x00000004;
  FUN_080480a4();
  do {
    *(undefined4 *)((int)puVar5 + -4) = 1;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar6 = (undefined4 *)((int)puVar5 + 0xc);
    if (*(int *)((int)puVar5 + 4) != 1) {
      *(undefined4 *)((int)puVar5 + 0xc) = 5;
      pcVar1 = (code *)swi(0x80);
      DAT_080483a9 = (*pcVar1)();
      puVar6 = (undefined4 *)((int)puVar5 + 0x14);
      if (DAT_080483a9 < 0) {
        *(undefined4 *)((int)puVar5 + 0x10) = 1;
        *(undefined4 *)((int)puVar5 + 0x10) = 1;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        puVar6 = (undefined4 *)((int)puVar5 + 0x18);
      }
    }
    puVar6[-1] = 0x36;
    pcVar1 = (code *)swi(0x80);
    iVar2 = (*pcVar1)();
    puVar5 = puVar6 + 1;
  } while (-1 < iVar2);
  *puVar6 = 1;
  *puVar6 = 0x36;
  pcVar1 = (code *)swi(0x80);
  uVar9 = (*pcVar1)();
  puVar3 = (undefined4 *)((ulonglong)uVar9 >> 0x20);
  *(short *)puVar3 = *(short *)puVar3 + -1;
  if ((int)uVar9 != 0) {
    *puVar3 = 0x500018;
  }
  puVar6[1] = 2;
  puVar6[1] = 0x36;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar6[2] = 2;
  puVar6[2] = 0x36;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  _DAT_08048435 = _DAT_08048435 & 0xfffffff4;
  puVar6[3] = 2;
  puVar6[3] = 0x36;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar7 = puVar6 + 5;
  puVar6[4] = 0x8048166;
  FUN_08048289();
  puVar6[4] = 0x804816b;
  FUN_080482d0();
LAB_0804816b:
  puVar7[-1] = 1;
  puVar7[-1] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  *puVar7 = 0x8048182;
  FUN_0804831e();
  *puVar7 = 1;
  *puVar7 = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar7[1] = 0x80481a3;
  FUN_0804836c();
  puVar7[1] = extraout_EDX + 1;
  DAT_080483ad = 0x2f;
  *puVar7 = 0x80481b3;
  FUN_0804836c();
  puVar7[1] = 1;
  puVar7[1] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar7[2] = 1;
  puVar7[2] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar3 = puVar7 + 4;
  do {
    puVar8 = puVar3;
    DAT_0804844d = 0;
    puVar8[-1] = 4;
    puVar8[-1] = 2;
    puVar8[-1] = 3;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar7 = puVar8 + 1;
    piVar4 = &DAT_0804804c;
    do {
      if (*extraout_ECX == *piVar4) {
        pcVar1 = (code *)piVar4[1];
        *puVar8 = 0x8048217;
        (*pcVar1)();
        DAT_08048455 = extraout_EDX_00;
        DAT_08048459 = extraout_ECX_00;
        goto LAB_0804816b;
      }
      piVar4 = piVar4 + 2;
      puVar3 = puVar8 + 1;
    } while (piVar4 != (int *)FUN_080480a4);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  code *pcVar1;
  int iVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *puVar3;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  
  while( true ) {
    piVar5 = (int *)((int)register0x00000010 + 8);
    if (*(int *)register0x00000010 != 1) {
      *(undefined4 *)((int)register0x00000010 + 8) = 5;
      pcVar1 = (code *)swi(0x80);
      DAT_080483a9 = (*pcVar1)();
      piVar5 = (int *)((int)register0x00000010 + 0x10);
      if (DAT_080483a9 < 0) {
        *(undefined4 *)((int)register0x00000010 + 0xc) = 1;
        *(undefined4 *)((int)register0x00000010 + 0xc) = 1;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        piVar5 = (int *)((int)register0x00000010 + 0x14);
      }
    }
    piVar5[-1] = 0x36;
    pcVar1 = (code *)swi(0x80);
    iVar2 = (*pcVar1)();
    if (iVar2 < 0) break;
    *piVar5 = 1;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    register0x00000010 = (BADSPACEBASE *)(piVar5 + 2);
  }
  *piVar5 = 1;
  *piVar5 = 0x36;
  pcVar1 = (code *)swi(0x80);
  uVar8 = (*pcVar1)();
  puVar3 = (undefined4 *)((ulonglong)uVar8 >> 0x20);
  *(short *)puVar3 = *(short *)puVar3 + -1;
  if ((int)uVar8 != 0) {
    *puVar3 = 0x500018;
  }
  piVar5[1] = 2;
  piVar5[1] = 0x36;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  piVar5[2] = 2;
  piVar5[2] = 0x36;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  _DAT_08048435 = _DAT_08048435 & 0xfffffff4;
  piVar5[3] = 2;
  piVar5[3] = 0x36;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar6 = piVar5 + 5;
  piVar5[4] = 0x8048166;
  FUN_08048289();
  piVar5[4] = 0x804816b;
  FUN_080482d0();
LAB_0804816b:
  puVar6[-1] = 1;
  puVar6[-1] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  *puVar6 = 0x8048182;
  FUN_0804831e();
  *puVar6 = 1;
  *puVar6 = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar6[1] = 0x80481a3;
  FUN_0804836c();
  puVar6[1] = extraout_EDX + 1;
  DAT_080483ad = 0x2f;
  *puVar6 = 0x80481b3;
  FUN_0804836c();
  puVar6[1] = 1;
  puVar6[1] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar6[2] = 1;
  puVar6[2] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar3 = puVar6 + 4;
  do {
    puVar7 = puVar3;
    DAT_0804844d = 0;
    puVar7[-1] = 4;
    puVar7[-1] = 2;
    puVar7[-1] = 3;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar6 = puVar7 + 1;
    piVar4 = &DAT_0804804c;
    do {
      if (*extraout_ECX == *piVar4) {
        pcVar1 = (code *)piVar4[1];
        *puVar7 = 0x8048217;
        (*pcVar1)();
        DAT_08048455 = extraout_EDX_00;
        DAT_08048459 = extraout_ECX_00;
        goto LAB_0804816b;
      }
      piVar4 = piVar4 + 2;
      puVar3 = puVar7 + 1;
    } while (piVar4 != (int *)FUN_080480a4);
  } while( true );
}



undefined8 FUN_08048289(void)

{
  code *pcVar1;
  int iVar2;
  int extraout_EDX;
  undefined **ppuVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int aiStack44 [2];
  undefined *puStack36;
  
  puVar6 = (undefined4 *)&DAT_0804a45d;
  ppuVar3 = &puStack36;
  puStack36 = &DAT_0804a45d;
  do {
    ((int *)ppuVar3)[-1] = 3;
    pcVar1 = (code *)swi(0x80);
    iVar2 = (*pcVar1)();
    piVar5 = (int *)ppuVar3 + 1;
    if (iVar2 == 0) break;
    *ppuVar3 = (undefined *)iVar2;
    ((int *)ppuVar3)[-1] = iVar2;
    ((int *)ppuVar3)[-2] = 0x2d;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    piVar4 = (int *)ppuVar3 + 1;
    puVar7 = &DAT_0804845d;
    for (iVar2 = (int)*ppuVar3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar6 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    piVar5 = (int *)ppuVar3 + 2;
    ppuVar3 = (undefined **)((int *)ppuVar3 + 2);
  } while (extraout_EDX == *piVar4);
  DAT_08048451 = puVar6;
  *puVar6 = *piVar5;
  return CONCAT44(piVar5[6],piVar5[8]);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_080482d0(void)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int extraout_ECX;
  ushort uVar4;
  undefined *puVar5;
  char **ppcVar6;
  char *pcVar7;
  char **ppcVar8;
  byte bVar9;
  undefined4 uStack36;
  
  puVar5 = &stack0xffffffe0;
  bVar9 = 0;
  iVar3 = (int)DAT_08048451 + -0x804a45d;
  uVar4 = 0;
  ppcVar6 = DAT_08048451;
  pcVar7 = &DAT_0804a45d;
  ppcVar8 = DAT_08048451;
  do {
    uVar1 = (uint)bVar9;
    if (*pcVar7 == '\n') {
LAB_080482fb:
      ppcVar6 = ppcVar6 + 1;
      if ((int)ppcVar8 <= (int)ppcVar6) {
        ppcVar8 = ppcVar8 + 0x100;
        *(undefined4 *)(puVar5 + -4) = 0x2d;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar5 = puVar5 + 4;
        iVar3 = extraout_ECX;
      }
      *ppcVar6 = pcVar7 + uVar1 * -2 + 1;
      DAT_08048455 = DAT_08048455 + 1;
      uVar4 = 0;
    }
    else {
      if (*pcVar7 == '\t') {
        uVar4 = uVar4 | 7;
      }
      uVar4 = uVar4 + 1;
      if (_DAT_080483ff <= (short)uVar4) goto LAB_080482fb;
    }
    iVar3 = iVar3 + -1;
    pcVar7 = pcVar7 + uVar1 * -2 + 1;
    if (iVar3 == 0) {
      return CONCAT44(*(undefined4 *)(puVar5 + 0x14),*(undefined4 *)(puVar5 + 0x1c));
    }
  } while( true );
}



void FUN_0804831e(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int aiStack16 [4];
  
  iVar4 = DAT_08048459 * 4;
  iVar5 = DAT_08048451 + iVar4;
  uVar3 = DAT_08048455 - DAT_08048459;
  if ((int)(uint)DAT_080483fd < DAT_08048455 - DAT_08048459) {
    uVar3 = (uint)DAT_080483fd;
  }
  do {
    *(uint *)((int)register0x00000010 + -4) = uVar3;
    *(int *)((int)register0x00000010 + -8) = iVar4;
    *(undefined4 *)((int)register0x00000010 + -0xc) = *(undefined4 *)(iVar5 + 4);
    *(undefined4 *)((int)register0x00000010 + -0x10) = 1;
    *(undefined4 *)((int)register0x00000010 + -0x10) = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    if (*(char *)(*(int *)((int)register0x00000010 + -8) + -1) != '\n') {
      *(undefined4 *)((int)register0x00000010 + -8) = 0x8048364;
      FUN_080480a4();
    }
    iVar5 = iVar5 + 4;
    iVar4 = *(int *)((int)register0x00000010 + -4);
    iVar2 = *(int *)register0x00000010;
    register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4);
    uVar3 = iVar2 - 1;
  } while (uVar3 != 0);
  return;
}



void __regparm3 FUN_0804836c(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined *unaff_EDI;
  undefined4 uStack4;
  
  uStack4 = 10;
  iVar2 = 0;
  if (param_1 == 0) {
    uStack4 = 0x30;
    iVar2 = 1;
    puVar1 = &uStack4;
    iVar3 = iVar2;
  }
  else {
    for (; puVar1 = (undefined4 *)register0x00000010, iVar3 = iVar2, param_1 != 0;
        param_1 = param_1 / 10) {
      puVar4 = (uint *)((int)register0x00000010 + -4);
      register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + -4);
      *puVar4 = param_1 % 10 | 0x30;
      iVar2 = iVar2 + 1;
    }
  }
  do {
    puVar5 = puVar1;
    *unaff_EDI = (char)*puVar5;
    iVar2 = iVar2 + -1;
    puVar1 = puVar5 + 1;
    unaff_EDI = unaff_EDI + 1;
  } while (iVar2 != 0);
  puVar5[6] = iVar3;
  return;
}


