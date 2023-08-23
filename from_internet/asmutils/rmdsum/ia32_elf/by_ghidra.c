typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned short    word;
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

uint processEntry entry(undefined4 param_1,int param_2)

{
  code *pcVar1;
  undefined2 *puVar2;
  char cVar3;
  byte bVar11;
  int iVar4;
  uint *puVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  int *piVar10;
  undefined3 uVar12;
  byte bVar13;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  undefined uVar18;
  int iVar19;
  undefined2 uVar20;
  char *pcVar21;
  char **ppcVar22;
  undefined4 *puVar23;
  char **ppcVar24;
  undefined2 *puVar25;
  undefined2 *puVar26;
  int iVar27;
  uint *in_ESI;
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
  char *pcVar5;
  
  bVar13 = 0;
  FUN_080483e9();
  puVar28 = (uint *)0x0;
  iVar27 = 0;
  ppcVar24 = (char **)&stack0x00000008;
  ppcVar22 = (char **)&stack0x00000008;
  if (param_2 == 1) goto LAB_08048079;
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
        in_ESI = (uint *)&DAT_08048b80;
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
      ppcVar22[-6] = (char *)in_ESI;
      ppcVar22[-7] = (char *)puVar28;
      ppcVar22[-8] = (char *)0x80480a9;
      FUN_0804846a();
      ppcVar22[-8] = (char *)0x14;
      iVar27 = (int)ppcVar22[-8];
      puVar29 = (undefined4 *)&DAT_08050b94;
      pbVar8 = &DAT_08050b80;
      do {
        bVar11 = *pbVar8;
        ppcVar22[-8] = (char *)0x2;
        iVar19 = (int)ppcVar22[-8];
        iVar4 = (uint)bVar11 << 8;
        puVar30 = puVar29;
        do {
          bVar11 = (byte)((uint)iVar4 >> 8);
          bVar11 = bVar11 << 4 | bVar11 >> 4;
          uVar9 = CONCAT11(bVar11,bVar11) & 0xffffff0f;
          cVar3 = (char)uVar9;
          bVar11 = cVar3 + 0x30;
          if (0x39 < bVar11) {
            bVar11 = cVar3 + 0x57;
          }
          iVar4 = CONCAT31((int3)(uVar9 >> 8),bVar11);
          puVar29 = (undefined4 *)((int)puVar30 + (uint)bVar13 * -2 + 1);
          *(byte *)puVar30 = bVar11;
          iVar19 = iVar19 + -1;
          puVar30 = puVar29;
        } while (iVar19 != 0);
        iVar27 = iVar27 + -1;
        pbVar8 = pbVar8 + (uint)bVar13 * -2 + 1;
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
          cVar3 = *pcVar21;
          pcVar21 = pcVar21 + (uint)bVar13 * -2 + 1;
        } while (cVar3 != '\0');
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
      in_ESI = *(uint **)((int)puVar23 + 8);
      ppcVar24 = (char **)((int)puVar23 + 0x24);
    }
  }
  *ppcVar24 = (char *)0x1;
  pcVar1 = (code *)swi(0x80);
  uVar32 = (*pcVar1)();
  uVar20 = (undefined2)((ulonglong)uVar32 >> 0x30);
  uVar18 = (undefined)((ulonglong)uVar32 >> 0x20);
  puVar17 = (uint *)CONCAT22(uVar20,CONCAT11(0x82,uVar18));
  cVar3 = (char)uVar32 + '\b';
  pcVar5 = (char *)CONCAT31((int3)((ulonglong)uVar32 >> 8),cVar3);
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  uRam00000000 = CONCAT31(uRam00000000._1_3_,(char)uRam00000000 + (char)extraout_ECX_01);
  *in_ESI = *in_ESI + extraout_ECX_01;
  puVar14 = (uint *)(CONCAT31((int3)((uint)extraout_ECX_01 >> 8),
                              (char)extraout_ECX_01 + *(byte *)puVar28) +
                    *(int *)((int)(ppcVar24 + 2) + (int)pcVar5));
  puVar6 = (uint *)(pcVar5 + 0x7060805);
  *puVar6 = *puVar6 | (uint)puVar14;
  uVar9 = *puVar14;
  uVar7 = (uint)puVar6 | 0xf0b0e0f;
  *(undefined *)(puVar17 + uVar7 + 0x1e664201) = *(undefined *)(puVar17 + uVar7 + 0x1e664201);
  *(char *)((int)puVar17 + 7) = *(char *)((int)puVar17 + 7) + -7;
  uVar16 = *in_ESI;
  *puVar28 = *puVar28 | (uint)puVar14 | uVar9;
  uVar15 = ((uint)puVar14 | uVar9) + *puVar28;
  *(char *)(uVar15 * 2) = *(char *)(uVar15 * 2) + (char)uVar15;
  syscall();
  *puVar17 = *puVar17 | CONCAT31((int3)(uVar7 >> 8),(char)uVar7 + '\x06') | 0xa0d0108 | uVar16 | 7;
  uVar9 = _DAT_036ed9eb;
  uVar16 = uVar15 | *in_ESI | _DAT_82d80c08 | *puVar17;
  pbVar8 = (byte *)(_DAT_036ed9eb | 0x704060e);
  *in_ESI = *in_ESI | uVar16;
  DAT_0e020f01 = DAT_0e020f01 | (byte)uVar16;
  uVar31 = *(undefined2 *)(ppcVar24 + 5);
  *pbVar8 = *pbVar8 | (byte)pbVar8;
  uVar9 = uVar9 | 0x70d060e;
  puVar6 = (uint *)(uVar16 | *(uint *)(uVar9 + 0xc6050c07));
  *(char *)(uVar9 + (int)puVar6) = *(char *)(uVar9 + (int)puVar6) + -0x24;
  *puVar6 = *puVar6 | (uint)puVar6;
  uVar12 = (undefined3)((uint)puVar6 >> 8);
  bVar13 = (byte)puVar6 | *(byte *)puVar28;
  _DAT_0b018f17 = in_CS;
  *(byte *)in_ESI = *(byte *)in_ESI + bVar13;
  *(byte *)puVar28 = *(byte *)puVar28 | bVar13;
  uVar9 = (CONCAT31((int3)(uVar9 >> 8),((byte)uVar9 | 9) + 8) | 0x70e0309) + 0xa130c15 | 0xd0;
  pcVar5 = (char *)(uVar9 + CONCAT31(uVar12,bVar13));
  *pcVar5 = *pcVar5 + 'N';
  uVar9 = uVar9 + 0x70b0905;
  piVar10 = (int *)(uVar9 | 8);
  bVar13 = bVar13 + DAT_050e0c0a;
  puVar14 = (uint *)CONCAT31(uVar12,bVar13);
  _DAT_0b018f0f = uVar31;
  _DAT_0b018f13 = pcVar21;
  *piVar10 = *piVar10 + (int)puVar14;
  _DAT_0b018f0b = uVar31;
  *(byte *)puVar28 = *(byte *)puVar28 | bVar13;
  iVar27 = (uVar9 | 0xb0b0e08) + 0x82d0060d;
  DAT_0e080550 = (char)iVar27 + '\b';
  puVar6 = (uint *)CONCAT31((int3)((uint)iVar27 >> 8),DAT_0e080550);
  out(0x8b,DAT_0e080550);
  *puVar28 = *puVar28 | (uint)puVar6;
  *puVar6 = *puVar6 | (uint)puVar6;
  puVar14 = (uint *)((uint)puVar14 | *puVar14);
  pbVar8 = (byte *)(CONCAT31((int3)(((uint)puVar6 | 0xf0b0f02) >> 8),
                             (char)((uint)puVar6 | 0xf0b0f02) + '\x05') | 0xf070607);
  *pbVar8 = *pbVar8 | (byte)puVar14;
  uVar9 = *puVar14;
  iVar27 = CONCAT31((int3)((uint)puVar14 >> 8),(byte)puVar14 | *(byte *)in_ESI);
  uVar16 = iVar27 + *(int *)(&DAT_0b018f07 + iVar27);
  _DAT_0b018f03 = (undefined2 *)CONCAT22(DAT_0b018f03_2,uVar31);
  _DAT_0b018f07 = in_CS;
  *(undefined *)(puVar17 + -0xbb6fdff) = 0x4d;
  puVar2 = _DAT_0b018f03;
  puVar25 = _DAT_0b018f03 + 2;
  *_DAT_0b018f03 = uVar31;
  uRam00000000 = uRam00000000 | uVar16;
  uVar9 = (uint)pbVar8 | uVar9 | 0x7070f03;
  *(char *)(uVar16 + 0xa090508) = *(char *)(uVar16 + 0xa090508) + (char)uVar16;
  uVar16 = uVar16 | *in_ESI;
  sysret();
  pbVar8 = (byte *)((int)puVar2 + uVar16 + 4);
  *pbVar8 = *pbVar8 | (byte)uVar16;
  uVar31 = *puVar25;
  cVar3 = (char)uVar9;
  *puVar28 = *puVar28 | uVar16;
  _DAT_82d80b02 = _DAT_82d80b02 + uVar16;
  uVar9 = CONCAT31((int3)(uVar9 >> 8),cVar3 + '\x0e');
  if (SCARRY1(cVar3 + '\x06','\b')) {
    puVar17 = (uint *)(uVar16 | uRam00000000);
    in_ESI = (uint *)((uint)in_ESI | *puVar17);
    *(undefined2 *)puVar17 = in_FPUControlWord;
    *(undefined2 *)(puVar17 + 1) = in_FPUStatusWord;
    *(undefined2 *)(puVar17 + 2) = in_FPUTagWord;
    puVar17[5] = in_FPUDataPointer;
    puVar17[3] = in_FPUInstructionPointer;
    *(undefined2 *)((int)puVar17 + 0x12) = in_FPULastInstructionOpcode;
    uVar9 = uVar9 & 0xd3f7d921;
  }
  else {
    uVar9 = uVar9 + 0x30f0107 | *puVar28;
    *(byte *)in_ESI = *(byte *)in_ESI | (byte)uVar16;
    puVar2[2] = uVar31;
    *puVar2 = uVar31;
    puVar26 = puVar2 + -2;
    puVar2[-2] = uVar31;
    *in_ESI = *in_ESI | uVar16;
    uVar16 = uVar16 | *(uint *)(uVar9 + uVar16);
    uVar9 = uVar9 | 0xe82bd0d;
    bVar13 = (byte)uVar16 | DAT_07040d00 | (byte)(uVar16 >> 8);
    uVar16 = CONCAT31((int3)(uVar16 >> 8),bVar13);
    if (bVar13 != 0) {
      if ((POPCOUNT(bVar13) & 1U) == 0) {
        puVar26 = puVar2 + -4;
        puVar2[-4] = in_CS;
      }
      puVar6 = (uint *)(uVar16 + *in_ESI | *in_ESI);
      *(byte *)in_ESI = *(byte *)in_ESI + (byte)puVar6;
      *puVar6 = *puVar6 | (uint)puVar6;
      iVar27 = (uVar9 + 0xd0a140a | 0xf) + 0x80e0f0a;
      pbVar8 = (byte *)CONCAT22(uVar20,CONCAT11(0x82,uVar18));
      uVar12 = (undefined3)((uint)iVar27 >> 8);
      cVar3 = (char)iVar27 + '\b';
      pcVar21 = (char *)CONCAT31(uVar12,cVar3);
      *pcVar21 = *pcVar21 + cVar3;
      *pcVar21 = *pcVar21 + cVar3;
      uVar9 = CONCAT31(uVar12,cVar3) | 8;
      syscall();
      bVar13 = (byte)puVar6 | *(byte *)((int)puVar26 + uVar9);
      puVar6 = (uint *)CONCAT31((int3)((uint)puVar6 >> 8),bVar13);
      *puVar6 = *puVar6 | uVar9;
      uVar9 = (CONCAT31(uVar12,(char)uVar9) | 5) + 0x6070e08;
      *(undefined2 *)((int)puVar26 + -4) = uVar31;
      *pbVar8 = *pbVar8 | (byte)uVar9;
      uVar9 = uVar9 | 0x50e060d;
      *(byte *)puVar28 = *(byte *)puVar28 + bVar13;
      uVar16 = (int)puVar6 + _DAT_0b0b0b09 ^ (uint)pbVar8;
      goto LAB_080482e1;
    }
    puVar17 = (uint *)(uVar16 ^ (uint)puVar17);
  }
  uVar16 = (int)puVar17 + in_ESI[1];
LAB_080482e1:
  uVar9 = uVar9 + uVar16 + puVar28[*(byte *)(in_ESI + 2)];
  bVar13 = *(byte *)((int)in_ESI + 9) & 0x1f;
  return uVar9 << bVar13 | uVar9 >> 0x20 - bVar13;
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
  undefined4 uStack_c;
  undefined4 uStack_4;
  
  puVar7 = &DAT_080484e4;
  puVar9 = local_48;
  uStack_c = param_2;
  uStack_4 = param_1;
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
  iVar4 = *(int *)(puVar6 + -0x1c) + *(int *)(puVar6 + -0x34) + DAT_080484e8;
  DAT_080484e8 = *(int *)(puVar6 + -0x18) + *(int *)(puVar6 + -0x30) + DAT_080484ec;
  DAT_080484ec = *(int *)(puVar6 + -0x28) + *(int *)(puVar6 + -0x2c) + DAT_080484f0;
  DAT_080484f0 = *(int *)(puVar6 + -0x24) + *(int *)(puVar6 + -0x3c) + DAT_080484f4;
  DAT_080484f4 = *(int *)(puVar6 + -0x20) + *(int *)(puVar6 + -0x38) + DAT_080484e4;
  DAT_080484e4 = iVar4;
  return CONCAT44(uStack_c,uStack_4);
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


