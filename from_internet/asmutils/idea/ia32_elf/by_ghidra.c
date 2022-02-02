typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
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




undefined8 __regparm3 FUN_0804804c(uint param_1,undefined4 param_2)

{
  ulonglong uVar1;
  ushort unaff_BX;
  
  if (param_1 == 0) {
    param_1 = (uint)unaff_BX;
  }
  else if (unaff_BX != 0) {
    uVar1 = CONCAT44(param_1,(param_1 & 0xffff) * (uint)unaff_BX) & 0xffff0000ffffffff;
    return CONCAT44(param_2,(uint)(uVar1 % 0x10001) & 0xffff |
                            (uint)(ushort)(uVar1 / 0x10001 >> 0x10) << 0x10);
  }
  return CONCAT44(param_2,param_1 & 0xffff0000 | (uint)(ushort)(1 - (short)param_1));
}



undefined8 __regparm3 FUN_08048077(uint param_1,undefined4 param_2)

{
  uint uVar1;
  
  param_1 = param_1 & 0xffff;
  uVar1 = param_1;
  if (param_1 != 0) {
    uVar1 = 0xffff;
    do {
      if ((int)(((ulonglong)param_1 * (ulonglong)uVar1) % 0x10001) == 1) break;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return CONCAT44(param_2,uVar1);
}



undefined8 __regparm3 FUN_0804809c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  ushort *unaff_ESI;
  ushort *unaff_EDI;
  ushort *puVar3;
  
  puVar3 = unaff_EDI;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *unaff_ESI;
    unaff_ESI = unaff_ESI + 1;
    puVar3 = puVar3 + 1;
  }
  uVar2 = 1;
  iVar1 = 0;
  do {
    *puVar3 = unaff_EDI[iVar1 + (uVar2 & 7)] << 9 | unaff_EDI[iVar1 + ((uVar2 & 7) + 1 & 7)] >> 7;
    iVar1 = iVar1 + (uint)((uVar2 & 7) == 0) * 8;
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
  } while ((int)uVar2 < 0x2d);
  return CONCAT44(param_2,param_1);
}



undefined8 __regparm3 FUN_080480e3(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_ESI;
  undefined2 *unaff_EDI;
  undefined4 *puVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  byte bVar9;
  
  bVar9 = 0;
  uVar2 = FUN_08048077();
  psVar6 = unaff_EDI + (uint)bVar9 * -2 + 1;
  *unaff_EDI = uVar2;
  psVar7 = psVar6 + (uint)bVar9 * -2 + 1;
  *psVar6 = -*(short *)(unaff_ESI + 0x62);
  uVar1 = (uint)bVar9;
  *psVar7 = -*(short *)(unaff_ESI + 100);
  sVar3 = FUN_08048077();
  puVar5 = (undefined4 *)(psVar7 + uVar1 * -2 + 1 + (uint)bVar9 * -2 + 1);
  psVar7[uVar1 * -2 + 1] = sVar3;
  iVar4 = 0x2a;
  do {
    uVar1 = (uint)bVar9;
    *puVar5 = *(undefined4 *)(unaff_ESI + 8 + iVar4 * 2);
    uVar2 = FUN_08048077();
    psVar6 = (short *)((int)(puVar5 + uVar1 * -2 + 1) + (uint)bVar9 * -4 + 2);
    *(undefined2 *)(puVar5 + uVar1 * -2 + 1) = uVar2;
    psVar7 = psVar6 + (uint)bVar9 * -2 + 1;
    *psVar6 = -*(short *)(unaff_ESI + 4 + extraout_ECX * 2);
    uVar1 = (uint)bVar9;
    *psVar7 = -*(short *)(unaff_ESI + 2 + extraout_ECX * 2);
    sVar3 = FUN_08048077();
    puVar5 = (undefined4 *)(psVar7 + uVar1 * -2 + 1 + (uint)bVar9 * -2 + 1);
    psVar7[uVar1 * -2 + 1] = sVar3;
    iVar4 = extraout_ECX_00 + -6;
  } while (iVar4 != 0);
  uVar1 = (uint)bVar9;
  *puVar5 = *(undefined4 *)(unaff_ESI + 8);
  psVar6 = (short *)(unaff_ESI + 2 + (uint)bVar9 * -4);
  uVar2 = FUN_08048077();
  psVar7 = (short *)((int)(puVar5 + uVar1 * -2 + 1) + (uint)bVar9 * -4 + 2);
  *(undefined2 *)(puVar5 + uVar1 * -2 + 1) = uVar2;
  psVar8 = psVar7 + (uint)bVar9 * -2 + 1;
  *psVar7 = -*psVar6;
  *psVar8 = -psVar6[(uint)bVar9 * -2 + 1];
  sVar3 = FUN_08048077();
  psVar8[(uint)bVar9 * -2 + 1] = sVar3;
  return CONCAT44(param_2,param_1);
}



undefined8 __regparm3 FUN_0804816c(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined2 uVar9;
  int iVar10;
  undefined2 extraout_CX;
  ushort extraout_DX;
  undefined2 extraout_DX_00;
  int unaff_ESI;
  undefined2 *unaff_EDI;
  byte bVar11;
  
  bVar11 = 0;
  iVar10 = 8;
  do {
    uVar1 = (uint)bVar11;
    FUN_0804804c();
    uVar2 = (uint)bVar11;
    uVar3 = (uint)bVar11;
    uVar4 = (uint)bVar11;
    FUN_0804804c();
    uVar5 = (uint)bVar11;
    sVar7 = FUN_0804804c();
    unaff_ESI = unaff_ESI + uVar1 * -4 + uVar2 * -4 + uVar3 * -4 + uVar4 * -4 + uVar5 * -4 + 0xc +
                (uint)bVar11 * -4;
    sVar8 = FUN_0804804c();
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  FUN_0804804c();
  sVar6 = *(short *)(unaff_ESI + 2 + (uint)bVar11 * -4);
  uVar9 = FUN_0804804c();
  *unaff_EDI = extraout_CX;
  unaff_EDI[1] = (extraout_DX ^ sVar7 + sVar8) + sVar6;
  unaff_EDI[2] = extraout_DX_00;
  unaff_EDI[3] = uVar9;
  return CONCAT44(param_2,param_1);
}



void __regparm3 FUN_0804820a(undefined4 param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 unaff_EDI;
  undefined8 uVar6;
  undefined4 auStack12 [3];
  
  auStack12[2] = param_1;
  puVar4 = auStack12 + 1;
  auStack12[1] = param_1;
  while( true ) {
    *(undefined4 *)((int)puVar4 + -4) = 7;
    iVar3 = *(int *)((int)puVar4 + -4);
    do {
      *(undefined *)((int)puVar4 + iVar3) = 0x2a;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    *(undefined4 *)((int)puVar4 + -4) = 8;
    puVar2 = puVar4;
    do {
      puVar5 = puVar2;
      puVar5[-1] = 3;
      pcVar1 = (code *)swi(0x80);
      uVar6 = (*pcVar1)();
      iVar3 = (int)uVar6;
      if (iVar3 < 0) {
        return;
      }
      puVar2 = puVar5 + 1;
    } while (iVar3 != 0);
    if ((int)((ulonglong)uVar6 >> 0x20) - iVar3 == 8) break;
    *puVar5 = unaff_EDI;
    puVar5[-1] = 0x804823b;
    FUN_0804816c();
    puVar5[-1] = 8;
    puVar5[-1] = 1;
    puVar5[-1] = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    unaff_EDI = puVar5[1];
    puVar4 = puVar5 + 2;
  }
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x08048305) overlaps instruction at (ram,0x08048304)
// 

void entry(undefined4 param_1,char *param_2,char *param_3,int param_4)

{
  byte *pbVar1;
  char cVar2;
  code *pcVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  byte extraout_CH;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  char *pcVar8;
  
  puVar11 = &param_3;
  if ((param_2 == (char *)0x0) ||
     (((cVar2 = *param_2, cVar2 != 'e' && (puVar11 = &param_3, cVar2 != 'd')) ||
      (puVar11 = &param_4, DAT_080483cf = cVar2, param_3 == (char *)0x0)))) {
    *(undefined4 *)((int)puVar11 + -4) = 0x19;
    *(undefined4 *)((int)puVar11 + -4) = 2;
    *(undefined4 *)((int)puVar11 + -4) = 4;
    pcVar3 = (code *)swi(0x80);
    iVar9 = (*pcVar3)();
    piVar12 = (int *)((int)puVar11 + 4);
  }
  else {
    iVar9 = 0x10;
    pcVar8 = "";
    do {
      if (*param_3 == '\0') break;
      *pcVar8 = *param_3;
      iVar9 = iVar9 + -1;
      param_3 = param_3 + 1;
      pcVar8 = pcVar8 + 1;
    } while (iVar9 != 0);
    param_3 = (char *)0x8048282;
    FUN_0804809c();
    if (DAT_080483cf != 'e') {
      param_3 = (char *)0x8048297;
      FUN_080480e3();
    }
    piVar4 = &param_4;
    piVar10 = &param_4;
    if (param_4 == 0) goto LAB_080482b1;
    do {
      iVar9 = *piVar10;
      piVar12 = piVar10 + 1;
      if (iVar9 == 0) break;
      *piVar10 = 5;
      pcVar3 = (code *)swi(0x80);
      iVar9 = (*pcVar3)();
      piVar12 = piVar10 + 2;
      piVar4 = piVar10 + 2;
      if (iVar9 < 0) break;
LAB_080482b1:
      piVar12 = piVar4;
      *(undefined4 *)((int)piVar12 + -4) = 0x80482b9;
      iVar9 = FUN_0804820a();
      piVar10 = piVar12;
    } while (-1 < iVar9);
  }
  *(undefined4 *)((int)piVar12 + -4) = 1;
  pcVar3 = (code *)swi(0x80);
  uVar6 = (*pcVar3)();
  pbVar7 = (byte *)(uVar6 & 0xffffff20);
  pbVar1 = (byte *)(iVar9 + 0x65);
  *pbVar1 = *pbVar1 & extraout_CH;
  bVar5 = (byte)pbVar7;
  if (-1 < (char)*pbVar1) {
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  bVar5 = bVar5 | *pbVar7;
  pcVar8 = (char *)(uVar6 & 0xffffff00 | (uint)bVar5);
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


