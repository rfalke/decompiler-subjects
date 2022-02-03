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




// WARNING: Instruction at (ram,0x08048277) overlaps instruction at (ram,0x08048276)
// 
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint entry(void)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  undefined2 *puVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  byte bVar14;
  uint *puVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  int *piVar13;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  uint extraout_ECX_01;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  undefined uVar19;
  int iVar20;
  char *pcVar21;
  char **ppcVar22;
  undefined4 *puVar23;
  char **ppcVar24;
  undefined2 *puVar25;
  undefined2 *puVar26;
  int iVar27;
  uint *unaff_ESI;
  uint *puVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  undefined2 uVar31;
  undefined2 in_CS;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  uint in_FPUDataPointer;
  uint in_FPUInstructionPointer;
  undefined8 uVar32;
  ulonglong uVar33;
  int unaff_retaddr;
  char *pcVar8;
  
  bVar6 = 0;
  FUN_080483e9();
  puVar28 = (uint *)0x0;
  iVar27 = 0;
  ppcVar24 = (char **)&stack0x00000008;
  ppcVar22 = (char **)&stack0x00000008;
  if (unaff_retaddr == 1) goto LAB_08048079;
  while( true ) {
    pcVar21 = *ppcVar24;
    if (pcVar21 == (char *)0x0) break;
    *ppcVar24 = (char *)0x5;
    pcVar1 = (code *)swi(0x80);
    DAT_08050bc0 = pcVar21;
    iVar27 = (*pcVar1)();
    ppcVar22 = ppcVar24 + 2;
    ppcVar24 = ppcVar24 + 2;
    if (iVar27 < 0) {
LAB_08048076:
      puVar28 = (uint *)((int)puVar28 + 1);
    }
    else {
LAB_08048079:
      while( true ) {
        ppcVar22[-1] = (char *)0x3;
        pcVar1 = (code *)swi(0x80);
        uVar32 = (*pcVar1)();
        ppcVar24 = ppcVar22 + 1;
        if ((int)uVar32 < 0) goto LAB_08048076;
        if ((int)uVar32 == 0) break;
        unaff_ESI = (uint *)&DAT_08048b80;
        *ppcVar22 = (char *)0x804809c;
        FUN_08048440();
        ppcVar22 = ppcVar22 + 1;
      }
      *ppcVar22 = (char *)0x0;
      ppcVar22[-1] = (char *)extraout_ECX;
      ppcVar22[-2] = (char *)(int)((ulonglong)uVar32 >> 0x20);
      ppcVar22[-3] = (char *)iVar27;
      ppcVar22[-4] = (char *)(ppcVar22 + 1);
      ppcVar22[-5] = (char *)iVar27;
      ppcVar22[-6] = (char *)unaff_ESI;
      ppcVar22[-7] = (char *)puVar28;
      ppcVar22[-8] = (char *)0x80480a9;
      FUN_0804846a();
      ppcVar22[-8] = (char *)0x14;
      iVar27 = (int)ppcVar22[-8];
      puVar29 = (undefined4 *)&DAT_08050b94;
      pbVar11 = &DAT_08050b80;
      do {
        bVar14 = *pbVar11;
        ppcVar22[-8] = (char *)0x2;
        iVar20 = (int)ppcVar22[-8];
        puVar30 = puVar29;
        do {
          bVar2 = bVar14 >> 4;
          bVar14 = bVar14 << 4 | bVar2;
          bVar5 = bVar2 + 0x30;
          if (0x39 < bVar5) {
            bVar5 = bVar2 + 0x57;
          }
          puVar29 = (undefined4 *)((int)puVar30 + (uint)bVar6 * -2 + 1);
          *(byte *)puVar30 = bVar5;
          iVar20 = iVar20 + -1;
          puVar30 = puVar29;
        } while (iVar20 != 0);
        iVar27 = iVar27 + -1;
        pbVar11 = pbVar11 + (uint)bVar6 * -2 + 1;
      } while (iVar27 != 0);
      *puVar29 = 0xa2d2020;
      ppcVar22[-8] = (char *)0x2a;
      ppcVar22[-8] = (char *)0x1;
      ppcVar22[-8] = (char *)0x4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar23 = ppcVar22 + -6;
      ppcVar22[-7] = (char *)0x80480e7;
      FUN_080483e9();
      ppcVar22[-7] = (char *)0x2;
      if (DAT_08050bc0 != (char *)0x0) {
        ppcVar22[-7] = (char *)(extraout_ECX_00 + 0x2a);
        ppcVar22[-8] = DAT_08050bc0;
        pcVar21 = DAT_08050bc0;
        do {
          cVar7 = *pcVar21;
          pcVar21 = pcVar21 + (uint)bVar6 * -2 + 1;
        } while (cVar7 != '\0');
        ppcVar22[-8] = (char *)0x1;
        ppcVar22[-8] = (char *)0x4;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        puVar23 = ppcVar22 + -5;
        ppcVar22[-6] = (char *)0x1;
      }
      *(undefined4 *)((int)puVar23 + -4) = 1;
      *(undefined4 *)((int)puVar23 + -4) = 4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar28 = *(uint **)((int)puVar23 + 4);
      unaff_ESI = *(uint **)((int)puVar23 + 8);
      ppcVar24 = (char **)((int)puVar23 + 0x24);
    }
  }
  *ppcVar24 = (char *)0x1;
  pcVar1 = (code *)swi(0x80);
  uVar33 = (*pcVar1)();
  uVar19 = (undefined)(uVar33 >> 0x20);
  uVar3 = (uint)((uVar33 & 0xffff0000ffffff00) >> 0x20);
  puVar18 = (uint *)(uVar3 | CONCAT11(0x82,uVar19));
  bVar6 = (char)uVar33 + 8;
  pcVar8 = (char *)((uint)(uVar33 & 0xffff0000ffffff00) | (uint)bVar6);
  *pcVar8 = *pcVar8 + bVar6;
  *pcVar8 = *pcVar8 + bVar6;
  uRam00000000 = uRam00000000 & 0xffffff00 |
                 (uint)(byte)((char)uRam00000000 + (char)extraout_ECX_01);
  *unaff_ESI = *unaff_ESI + extraout_ECX_01;
  puVar15 = (uint *)((extraout_ECX_01 & 0xffffff00 |
                     (uint)(byte)((char)extraout_ECX_01 + *(byte *)puVar28)) +
                    *(int *)((int)(ppcVar24 + 2) + (int)pcVar8));
  puVar9 = (uint *)(pcVar8 + 0x7060805);
  *puVar9 = *puVar9 | (uint)puVar15;
  uVar12 = *puVar15;
  uVar10 = (uint)puVar9 | 0xf0b0e0f;
  *(undefined *)(puVar18 + uVar10 + 0x1e664201) = *(undefined *)(puVar18 + uVar10 + 0x1e664201);
  *(char *)((int)puVar18 + 7) = *(char *)((int)puVar18 + 7) + -7;
  uVar17 = *unaff_ESI;
  *puVar28 = *puVar28 | (uint)puVar15 | uVar12;
  uVar16 = ((uint)puVar15 | uVar12) + *puVar28;
  *(char *)(uVar16 * 2) = *(char *)(uVar16 * 2) + (char)uVar16;
  syscall();
  *puVar18 = *puVar18 |
             uVar10 & 0xffffff00 | (uint)(byte)((char)uVar10 + 6) | 0xa0d0108 | uVar17 | 7;
  uVar12 = _DAT_036ed9eb;
  uVar17 = uVar16 | *unaff_ESI | _DAT_82d80c08 | *puVar18;
  pbVar11 = (byte *)(_DAT_036ed9eb | 0x704060e);
  *unaff_ESI = *unaff_ESI | uVar17;
  DAT_0e020f01 = DAT_0e020f01 | (byte)uVar17;
  uVar31 = *(undefined2 *)(ppcVar24 + 5);
  *pbVar11 = *pbVar11 | (byte)pbVar11;
  uVar12 = uVar12 | 0x70d060e;
  puVar9 = (uint *)(uVar17 | *(uint *)(uVar12 + 0xc6050c07));
  *(char *)(uVar12 + (int)puVar9) = *(char *)(uVar12 + (int)puVar9) + -0x24;
  *puVar9 = *puVar9 | (uint)puVar9;
  bVar6 = (byte)puVar9 | *(byte *)puVar28;
  _DAT_0b018f17 = in_CS;
  *(byte *)unaff_ESI = *(byte *)unaff_ESI + bVar6;
  *(byte *)puVar28 = *(byte *)puVar28 | bVar6;
  uVar12 = (uVar12 & 0xffffff00 | (uint)(byte)(((byte)uVar12 | 9) + 8) | 0x70e0309) + 0xa130c15 |
           0xd0;
  pcVar8 = (char *)(uVar12 + ((uint)puVar9 & 0xffffff00 | (uint)bVar6));
  *pcVar8 = *pcVar8 + 'N';
  uVar12 = uVar12 + 0x70b0905;
  piVar13 = (int *)(uVar12 | 8);
  bVar6 = bVar6 + DAT_050e0c0a;
  puVar15 = (uint *)((uint)puVar9 & 0xffffff00 | (uint)bVar6);
  _DAT_0b018f0f = uVar31;
  _DAT_0b018f13 = pcVar21;
  *piVar13 = *piVar13 + (int)puVar15;
  _DAT_0b018f0b = uVar31;
  *(byte *)puVar28 = *(byte *)puVar28 | bVar6;
  uVar12 = (uVar12 | 0xb0b0e08) + 0x82d0060d;
  DAT_0e080550 = (char)uVar12 + 8;
  puVar9 = (uint *)(uVar12 & 0xffffff00 | (uint)DAT_0e080550);
  out(0x8b,DAT_0e080550);
  *puVar28 = *puVar28 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  puVar15 = (uint *)((uint)puVar15 | *puVar15);
  pbVar11 = (byte *)(((uint)puVar9 | 0xf0b0f02) & 0xffffff00 |
                     (uint)(byte)((char)((uint)puVar9 | 0xf0b0f02) + 5) | 0xf070607);
  *pbVar11 = *pbVar11 | (byte)puVar15;
  uVar12 = *puVar15;
  uVar17 = (uint)puVar15 & 0xffffff00 | (uint)(byte)((byte)puVar15 | *(byte *)unaff_ESI);
  uVar17 = uVar17 + *(int *)(&DAT_0b018f07 + uVar17);
  _DAT_0b018f03 = (undefined2 *)CONCAT22(DAT_0b018f03_2,uVar31);
  _DAT_0b018f07 = in_CS;
  *(undefined *)(puVar18 + -0xbb6fdff) = 0x4d;
  puVar4 = _DAT_0b018f03;
  puVar25 = _DAT_0b018f03 + 2;
  *_DAT_0b018f03 = uVar31;
  uRam00000000 = uRam00000000 | uVar17;
  uVar12 = (uint)pbVar11 | uVar12 | 0x7070f03;
  *(char *)(uVar17 + 0xa090508) = *(char *)(uVar17 + 0xa090508) + (char)uVar17;
  uVar17 = uVar17 | *unaff_ESI;
  sysret();
  pbVar11 = (byte *)((int)puVar4 + uVar17 + 4);
  *pbVar11 = *pbVar11 | (byte)uVar17;
  uVar31 = *puVar25;
  cVar7 = (char)uVar12;
  *puVar28 = *puVar28 | uVar17;
  _DAT_82d80b02 = _DAT_82d80b02 + uVar17;
  uVar12 = uVar12 & 0xffffff00 | (uint)(byte)(cVar7 + 0xe);
  if (SCARRY1(cVar7 + '\x06','\b')) {
    puVar18 = (uint *)(uVar17 | uRam00000000);
    unaff_ESI = (uint *)((uint)unaff_ESI | *puVar18);
    *(undefined2 *)puVar18 = in_FPUControlWord;
    *(undefined2 *)(puVar18 + 1) = in_FPUStatusWord;
    *(undefined2 *)(puVar18 + 2) = in_FPUTagWord;
    puVar18[5] = in_FPUDataPointer;
    puVar18[3] = in_FPUInstructionPointer;
    *(undefined2 *)((int)puVar18 + 0x12) = in_FPULastInstructionOpcode;
    uVar12 = uVar12 & 0xd3f7d921;
  }
  else {
    uVar12 = uVar12 + 0x30f0107 | *puVar28;
    *(byte *)unaff_ESI = *(byte *)unaff_ESI | (byte)uVar17;
    puVar4[2] = uVar31;
    *puVar4 = uVar31;
    puVar26 = puVar4 + -2;
    puVar4[-2] = uVar31;
    *unaff_ESI = *unaff_ESI | uVar17;
    uVar17 = uVar17 | *(uint *)(uVar12 + uVar17);
    uVar10 = uVar17 & 0xffffff00;
    uVar12 = uVar12 | 0xe82bd0d;
    bVar6 = (byte)uVar17 | DAT_07040d00 | (byte)(uVar10 >> 8);
    uVar10 = uVar10 | bVar6;
    if (bVar6 != 0) {
      if ((POPCOUNT(bVar6) & 1U) == 0) {
        puVar26 = puVar4 + -4;
        puVar4[-4] = in_CS;
      }
      puVar9 = (uint *)(uVar10 + *unaff_ESI | *unaff_ESI);
      *(byte *)unaff_ESI = *(byte *)unaff_ESI + (byte)puVar9;
      *puVar9 = *puVar9 | (uint)puVar9;
      uVar12 = (uVar12 + 0xd0a140a & 0xffffff00 | uVar12 + 0xd0a140a & 0xff | 0xd | 7) + 0x80e0f0a;
      pbVar11 = (byte *)(uVar3 | CONCAT11(0x82,uVar19));
      bVar6 = (char)uVar12 + 8;
      uVar12 = uVar12 & 0xffffff00;
      pcVar21 = (char *)(uVar12 | bVar6);
      *pcVar21 = *pcVar21 + bVar6;
      *pcVar21 = *pcVar21 + bVar6;
      syscall();
      bVar14 = (byte)puVar9 | *(byte *)((int)puVar26 + ((uint)pcVar21 | 8));
      puVar9 = (uint *)((uint)puVar9 & 0xffffff00 | (uint)bVar14);
      *puVar9 = *puVar9 | (uint)pcVar21 | 8;
      uVar12 = (uVar12 | bVar6 | 8 | 5) + 0x6070e08;
      *(undefined2 *)((int)puVar26 + -4) = uVar31;
      *pbVar11 = *pbVar11 | (byte)uVar12;
      uVar12 = uVar12 | 0x50e060d;
      *(byte *)puVar28 = *(byte *)puVar28 + bVar14;
      uVar17 = (int)puVar9 + _DAT_0b0b0b09 ^ (uint)pbVar11;
      goto LAB_080482e1;
    }
    puVar18 = (uint *)(uVar10 ^ (uint)puVar18);
  }
  uVar17 = (int)puVar18 + unaff_ESI[1];
LAB_080482e1:
  uVar12 = uVar12 + uVar17 + puVar28[*(byte *)(unaff_ESI + 2)];
  bVar6 = *(byte *)((int)unaff_ESI + 9) & 0x1f;
  return uVar12 << bVar6 | uVar12 >> 0x20 - bVar6;
}



undefined8 __regparm3 FUN_080482f3(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  code **ppcVar8;
  undefined4 *puVar9;
  undefined4 local_48 [10];
  undefined4 uStack12;
  undefined4 uStack4;
  
  puVar7 = &DAT_080484e4;
  puVar9 = local_48;
  uStack12 = param_2;
  uStack4 = param_1;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar7 = &DAT_080484e4;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  ppcVar8 = (code **)(puVar7 + 0x12);
  iVar4 = 2;
  puVar2 = &stack0xffffffe0;
  do {
    puVar6 = puVar2;
    iVar5 = 0x10;
    do {
      iVar3 = (**ppcVar8)();
      *(int *)(puVar6 + -0x28) = iVar3 + *(int *)(puVar6 + -0x18);
      puVar1 = (uint *)(puVar6 + -0x20);
      *puVar1 = *puVar1 << 10 | *puVar1 >> 0x16;
      iVar3 = (**ppcVar8)();
      *(int *)(puVar6 + -0x18) = iVar3 + *(int *)(puVar6 + -0x1c);
      puVar1 = (uint *)(puVar6 + -0x24);
      *puVar1 = *puVar1 << 10 | *puVar1 >> 0x16;
      iVar3 = (**ppcVar8)();
      *(int *)(puVar6 + -0x1c) = iVar3 + *(int *)(puVar6 + -0x20);
      puVar1 = (uint *)(puVar6 + -0x28);
      *puVar1 = *puVar1 << 10 | *puVar1 >> 0x16;
      iVar3 = (**ppcVar8)();
      *(int *)(puVar6 + -0x20) = iVar3 + *(int *)(puVar6 + -0x24);
      puVar1 = (uint *)(puVar6 + -0x18);
      *puVar1 = *puVar1 << 10 | *puVar1 >> 0x16;
      iVar3 = (**ppcVar8)();
      *(int *)(puVar6 + -0x24) = iVar3 + *(int *)(puVar6 + -0x28);
      puVar1 = (uint *)(puVar6 + -0x1c);
      *puVar1 = *puVar1 << 10 | *puVar1 >> 0x16;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar4 = iVar4 + -1;
    puVar2 = puVar6 + 0x14;
  } while (iVar4 != 0);
  iVar4 = *(int *)(puVar6 + -0x20) + *(int *)(puVar6 + -0x38) + DAT_080484e4;
  DAT_080484e4 = *(int *)(puVar6 + -0x1c) + *(int *)(puVar6 + -0x34) + DAT_080484e8;
  DAT_080484e8 = *(int *)(puVar6 + -0x18) + *(int *)(puVar6 + -0x30) + DAT_080484ec;
  DAT_080484ec = *(int *)(puVar6 + -0x28) + *(int *)(puVar6 + -0x2c) + DAT_080484f0;
  DAT_080484f0 = *(int *)(puVar6 + -0x24) + *(int *)(puVar6 + -0x3c) + DAT_080484f4;
  DAT_080484f4 = iVar4;
  return CONCAT44(uStack12,uStack4);
}



undefined8 __regparm3 FUN_080483e9(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  DAT_080484e4 = 0x67452301;
  DAT_080484e8 = 0xefcdab89;
  DAT_080484ec = 0x98badcfe;
  DAT_080484f0 = 0x10325476;
  DAT_080484f4 = 0xc3d2e1f0;
  puVar8 = &DAT_080484fc;
  DAT_080484f8 = 0;
  DAT_080484fc = 0;
  for (iVar4 = 0x10; puVar8 = puVar8 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
  }
  puVar6 = (undefined4 *)0x8048126;
  iVar4 = 10;
  do {
    uVar2 = *puVar6;
    uVar3 = puVar6[1];
    iVar5 = 0x10;
    puVar7 = puVar6 + 2;
    do {
      puVar6 = (undefined4 *)((int)puVar7 + 2);
      uVar1 = *(undefined2 *)puVar7;
      *puVar8 = uVar2;
      puVar8[1] = uVar3;
      *(undefined2 *)(puVar8 + 2) = uVar1;
      puVar8 = (undefined4 *)((int)puVar8 + 10);
      iVar5 = iVar5 + -1;
      puVar7 = puVar6;
    } while (iVar5 != 0);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return CONCAT44(param_2,param_1);
}



undefined8 __regparm3 FUN_08048440(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int extraout_ECX;
  uint extraout_EDX;
  
  if (param_3 >> 6 != 0) {
    do {
      FUN_080482f3();
      param_3 = extraout_EDX;
    } while (extraout_ECX != 1);
  }
  if ((int)(DAT_080484f8 + param_3) < DAT_080484f8) {
    DAT_080484fc = DAT_080484fc + 1;
  }
  DAT_080484f8 = DAT_080484f8 + param_3;
  return CONCAT44(param_2,param_1);
}



undefined8 __regparm3 FUN_0804846a(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 *unaff_EDI;
  byte bVar6;
  
  uVar1 = DAT_080484f8;
  bVar6 = 0;
  puVar4 = &DAT_08048b80 + (DAT_080484f8 & 0x1fc0);
  puVar5 = &DAT_08048500;
  for (uVar2 = DAT_080484f8 & 0x3f; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined *)puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  (&DAT_08048500)[uVar1 >> 2 & 0xf] =
       (&DAT_08048500)[uVar1 >> 2 & 0xf] ^ 1 << (((byte)uVar1 & 3) * '\b' + 7 & 0x1f);
  if (0x37 < (uVar1 & 0x3f)) {
    FUN_080482f3();
    puVar5 = &DAT_08048500;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  DAT_08048538 = uVar1 << 3;
  DAT_0804853c = DAT_080484fc >> 0x1d;
  FUN_080482f3();
  puVar5 = &DAT_080484e4;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *unaff_EDI = *puVar5;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    unaff_EDI = unaff_EDI + (uint)bVar6 * -2 + 1;
  }
  return CONCAT44(param_2,param_1);
}


