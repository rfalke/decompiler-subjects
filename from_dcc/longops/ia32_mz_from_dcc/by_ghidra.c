typedef unsigned char   undefined;

typedef unsigned int    uint;
typedef unsigned char    undefined1;
typedef unsigned int    undefined2;
typedef unsigned long    undefined4;
typedef unsigned int    word;
typedef struct OLD_IMAGE_DOS_HEADER OLD_IMAGE_DOS_HEADER, *POLD_IMAGE_DOS_HEADER;

struct OLD_IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
};

typedef struct OLD_IMAGE_DOS_RELOC OLD_IMAGE_DOS_RELOC, *POLD_IMAGE_DOS_RELOC;

struct OLD_IMAGE_DOS_RELOC {
    word offset;
    word segment;
};




// WARNING: Stack frame is not setup normally: Input value of stackpointer is not used
// WARNING: This function may have set the stack pointer

void entry(void)

{
  int *piVar1;
  uint *puVar2;
  byte *pbVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  char cVar7;
  undefined2 uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  int iVar13;
  undefined *puVar14;
  int *piVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  uint uVar23;
  byte *pbVar24;
  int *piVar25;
  int *piVar26;
  int iVar27;
  undefined *puVar28;
  undefined2 unaff_ES;
  undefined2 uVar29;
  undefined4 uVar30;
  
  puVar14 = (undefined *)&DAT_111b_0080;
                    // WARNING: Read-only address (ram,0x000101f8) is written
  uRam000101f8 = 0x111b;
  pcVar6 = (code *)swi(0x21);
  uVar30 = (*pcVar6)();
  uVar29 = s_Turbo_C___Copyright__c__1988_Bor_111b_0004._40_2_;
  iVar11 = DAT_111b_0002;
  iVar12 = (int)((ulong)uVar30 >> 0x10);
  *(undefined2 *)&DAT_111b_0092 = (int)uVar30;
  *(undefined2 *)&DAT_111b_0090 = unaff_ES;
  *(undefined2 *)&DAT_111b_008c = uVar29;
  *(int *)&DAT_111b_00ac = iVar11;
  *(undefined2 *)&DAT_111b_0096 = 0xffff;
  *(undefined2 *)(puVar14 + -2) = 0x2e;
  FUN_1000_0162();
  uVar30 = *(undefined4 *)&DAT_111b_008a;
  uVar29 = (undefined2)((ulong)uVar30 >> 0x10);
  piVar25 = (int *)uVar30;
  uVar10 = 0x7fff;
  piVar26 = piVar25;
  do {
    if (((*piVar26 == 0x3738) && (iVar13 = piVar26[1], (char)iVar13 == '=')) &&
       (piVar1 = (int *)&DAT_111b_0096, *piVar1 = *piVar1 + 1,
       ((byte)((uint)iVar13 >> 8) & 0xdf) == 0x59)) {
      piVar1 = (int *)&DAT_111b_0096;
      *piVar1 = *piVar1 + 1;
    }
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      piVar1 = piVar26;
      piVar26 = (int *)((int)piVar26 + 1);
    } while ((char)uVar30 != *(char *)piVar1);
    if (uVar10 == 0) goto LAB_1000_00be;
    piVar25 = (int *)((int)piVar25 + 1);
  } while (*(char *)piVar26 != (char)uVar30);
  *(int *)&DAT_111b_008a = -(uVar10 | 0x8000);
  *(uint *)&DAT_111b_008e = (int)piVar25 * 2 + 8U & 0xfff8;
  uVar23 = iVar11 - iVar12;
  uVar10 = *(uint *)&DAT_111b_020a;
  if (uVar10 < 0x200) {
    uVar10 = 0x200;
    *(undefined2 *)&DAT_111b_020a = 0x200;
  }
  if ((uVar10 < 0xfb8a) && (puVar2 = (uint *)&DAT_111b_0208, !CARRY2(uVar10 + 0x476,*puVar2))) {
    bVar9 = 4;
    uVar10 = (uVar10 + 0x476 + *puVar2 >> 4) + 1;
    if (uVar10 <= uVar23) {
      if (((*(int *)&DAT_111b_020a == 0) || (*(int *)&DAT_111b_0208 == 0)) &&
         (uVar10 = 0x1000, uVar23 < 0x1001)) {
        uVar10 = uVar23;
      }
      iVar13 = uVar10 + iVar12;
      *(int *)&DAT_111b_00a4 = iVar13;
      *(int *)&DAT_111b_00a8 = iVar13;
      iVar13 = iVar13 - *(int *)&DAT_111b_0090;
      piVar15 = (int *)(puVar14 + -2);
      *(uint *)(puVar14 + -2) = uVar10;
      pcVar6 = (code *)swi(0x21);
      (*pcVar6)();
      iVar27 = *piVar15 << (bVar9 & 0x1f);
      puVar28 = (undefined *)&DAT_111b_0430;
      for (iVar11 = 0x46; iVar11 != 0; iVar11 = iVar11 + -1) {
        puVar4 = puVar28;
        puVar28 = puVar28 + 1;
        *puVar4 = 0;
      }
      *(undefined2 *)(iVar27 + -2) = 0x1000;
      pcVar5 = *(code **)&DAT_111b_0422;
      puVar16 = (undefined *)(iVar27 + -4);
      *(undefined2 *)(iVar27 + -4) = 0xf8;
      (*pcVar5)();
      puVar17 = puVar16 + -2;
      *(undefined2 *)(puVar16 + -2) = 0xfb;
      FUN_1000_032f();
      *(undefined2 *)(puVar17 + -2) = 0xfe;
      FUN_1000_041a();
      pcVar6 = (code *)swi(0x1a);
      (*pcVar6)();
      *(undefined2 *)&DAT_111b_0098 = extraout_DX_00;
      *(int *)&DAT_111b_009a = iVar11;
      pcVar5 = *(code **)&DAT_111b_0426;
      puVar18 = puVar17 + -2;
      *(undefined2 *)(puVar17 + -2) = 0x10e;
      (*pcVar5)();
      *(undefined2 *)(puVar18 + -2) = *(undefined2 *)&DAT_111b_0088;
      *(undefined2 *)(puVar18 + -4) = *(undefined2 *)&DAT_111b_0086;
      *(undefined2 *)(puVar18 + -6) = *(undefined2 *)&DAT_111b_0084;
      *(undefined2 *)(puVar18 + -8) = 0x11d;
      uVar29 = FUN_1000_01fa();
      *(undefined2 *)(puVar18 + -8) = uVar29;
      *(undefined2 *)(puVar18 + -10) = 0x121;
      FUN_1000_02fa();
      *(undefined2 *)(puVar18 + -10) = 0x129;
      FUN_1000_01a5();
      *(undefined2 *)(puVar18 + -10) = 0x1000;
      pcVar6 = pcRam00000424;
      puVar19 = puVar18 + -0xc;
      *(undefined2 *)(puVar18 + -0xc) = 0x12e;
      (*pcVar6)();
      iVar11 = 0;
      pbVar24 = (byte *)0x0;
      iVar12 = 0x2f;
      do {
        pbVar3 = pbVar24;
        iVar11 = CONCAT11((char)((uint)iVar11 >> 8) + CARRY1((byte)iVar11,*pbVar3),
                          (byte)iVar11 + *pbVar3);
        pbVar24 = pbVar24 + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      if (iVar11 != 0xd37) {
        *(undefined2 *)(puVar19 + -2) = 0x14f;
        FUN_1000_01da();
      }
      pcVar6 = (code *)swi(0x21);
      puVar28 = puVar19;
      (*pcVar6)();
      *(undefined2 *)(puVar28 + -2) = 0x1f1;
      FUN_1000_01da();
      *(undefined2 *)(puVar28 + -2) = 3;
      puVar20 = puVar28 + -4;
      *(undefined2 *)(puVar28 + -4) = 0x1f8;
      cVar7 = FUN_1000_0121();
      pbVar3 = pbVar24 + iVar13;
      *pbVar3 = *pbVar3 + cVar7;
      *(undefined **)(puVar20 + -2) = puVar19;
      *(undefined2 *)(puVar20 + -8) = 0;
      *(undefined2 *)(puVar20 + -10) = 0xff;
      *(undefined2 *)(puVar20 + -4) = 0;
      *(undefined2 *)(puVar20 + -6) = 0x8f;
      uVar10 = *(uint *)(puVar20 + -10);
      uVar23 = *(uint *)(puVar20 + -6);
      *(uint *)(puVar20 + -4) =
           *(int *)(puVar20 + -8) + *(int *)(puVar20 + -4) +
           (uint)CARRY2(uVar10,*(uint *)(puVar20 + -6));
      *(uint *)(puVar20 + -6) = uVar10 + uVar23;
      uVar10 = *(uint *)(puVar20 + -10);
      uVar23 = *(uint *)(puVar20 + -6);
      *(uint *)(puVar20 + -8) =
           (*(int *)(puVar20 + -8) - *(int *)(puVar20 + -4)) -
           (uint)(uVar10 < *(uint *)(puVar20 + -6));
      *(uint *)(puVar20 + -10) = uVar10 - uVar23;
      uVar29 = *(undefined2 *)(puVar20 + -8);
      *(undefined2 *)(puVar20 + -0xc) = 0x1000;
      *(undefined2 *)(puVar20 + -0xe) = 0x249;
      uVar8 = FUN_1000_08c3();
      *(undefined2 *)(puVar20 + -8) = uVar29;
      *(undefined2 *)(puVar20 + -10) = uVar8;
      *(undefined2 *)(puVar20 + -0xc) = *(undefined2 *)(puVar20 + -8);
      *(undefined2 *)(puVar20 + -0xe) = *(undefined2 *)(puVar20 + -10);
      *(undefined2 *)(puVar20 + -0x10) = *(undefined2 *)(puVar20 + -4);
      *(undefined2 *)(puVar20 + -0x12) = *(undefined2 *)(puVar20 + -6);
      *(undefined2 *)(puVar20 + -0x14) = 0x1000;
      puVar21 = puVar20 + -0x16;
      *(undefined2 *)(puVar20 + -0x16) = 0x260;
      uVar30 = FUN_1000_10c6();
      *(int *)(puVar20 + -4) = (int)((ulong)uVar30 >> 0x10);
      *(int *)(puVar20 + -6) = (int)uVar30;
      *(undefined2 *)(puVar21 + -2) = *(undefined2 *)(puVar20 + -8);
      *(undefined2 *)(puVar21 + -4) = *(undefined2 *)(puVar20 + -10);
      *(undefined2 *)(puVar21 + -6) = *(undefined2 *)(puVar20 + -4);
      *(undefined2 *)(puVar21 + -8) = *(undefined2 *)(puVar20 + -6);
      *(undefined2 *)(puVar21 + -10) = 0x1000;
      puVar22 = puVar21 + -0xc;
      *(undefined2 *)(puVar21 + -0xc) = 0x277;
      uVar30 = FUN_1000_10cf();
      *(int *)(puVar20 + -4) = (int)((ulong)uVar30 >> 0x10);
      *(int *)(puVar20 + -6) = (int)uVar30;
      uVar29 = *(undefined2 *)(puVar20 + -8);
      *(undefined2 *)(puVar22 + -2) = 0x1000;
      *(undefined2 *)(puVar22 + -4) = 0x28a;
      uVar8 = FUN_1000_1187();
      *(undefined2 *)(puVar20 + -8) = uVar29;
      *(undefined2 *)(puVar20 + -10) = uVar8;
      uVar29 = *(undefined2 *)(puVar20 + -4);
      *(undefined2 *)(puVar22 + -2) = 0x1000;
      *(undefined2 *)(puVar22 + -4) = 0x29e;
      uVar8 = FUN_1000_1169();
      *(undefined2 *)(puVar20 + -4) = uVar29;
      *(undefined2 *)(puVar20 + -6) = uVar8;
      *(undefined2 *)(puVar22 + -2) = *(undefined2 *)(puVar20 + -4);
      *(undefined2 *)(puVar22 + -4) = *(undefined2 *)(puVar20 + -6);
      *(undefined2 *)(puVar22 + -6) = *(undefined2 *)(puVar20 + -8);
      *(undefined2 *)(puVar22 + -8) = *(undefined2 *)(puVar20 + -10);
      *(undefined2 *)(puVar22 + -10) = 0x194;
      *(undefined2 *)(puVar22 + -0xc) = 0x2b7;
      FUN_1000_097b();
      return;
    }
  }
LAB_1000_00be:
  FUN_1000_01e2();
  return;
}



void FUN_1000_0121(undefined *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 extraout_DX;
  int in_BX;
  byte *pbVar10;
  undefined4 uVar11;
  
  FUN_1000_01a5();
  (*pcRam00000424)(0x1000);
  iVar4 = 0;
  pbVar10 = (byte *)0x0;
  iVar8 = 0x2f;
  do {
    pbVar1 = pbVar10;
    iVar4 = CONCAT11((char)((uint)iVar4 >> 8) + CARRY1((byte)iVar4,*pbVar1),(byte)iVar4 + *pbVar1);
    pbVar10 = pbVar10 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (iVar4 != 0xd37) {
    FUN_1000_01da();
  }
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  param_1 = (undefined *)0x1f1;
  FUN_1000_01da();
  param_1 = (undefined *)0x3;
  cVar3 = FUN_1000_0121();
  pbVar1 = pbVar10 + in_BX;
  *pbVar1 = *pbVar1 + cVar3;
  uVar5 = 0x18e;
  uVar9 = 0xffff;
  param_1 = (undefined *)register0x00000010;
  uVar6 = FUN_1000_08c3(0xff71,0xffff);
  uVar11 = FUN_1000_10c6(0x1000,uVar5,0,uVar6,uVar9);
  FUN_1000_10cf(0x1000,uVar11,uVar6,uVar9);
  uVar6 = FUN_1000_1187();
  uVar5 = extraout_DX;
  uVar7 = FUN_1000_1169();
  FUN_1000_097b(0x194,uVar6,uVar9,uVar7,uVar5);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl16near FUN_1000_0162(void)

{
  code *pcVar1;
  undefined2 in_BX;
  undefined2 unaff_ES;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  unique0x10000025 = in_BX;
  DAT_111b_0076 = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_111b_0078 = in_BX;
  DAT_111b_007a = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_111b_007c = in_BX;
  DAT_111b_007e = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_111b_0080 = in_BX;
  DAT_111b_0082 = unaff_ES;
  (*pcVar1)();
  return;
}



void __cdecl16near FUN_1000_01a5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



void __cdecl16far FUN_1000_01d2(void)

{
  DAT_111b_0096 = 0;
  return;
}



void __cdecl16near FUN_1000_01d9(void)

{
  return;
}



void __cdecl16near FUN_1000_01da(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



void FUN_1000_01e2(void)

{
  char *pcVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 extraout_DX;
  int in_BX;
  int unaff_SI;
  undefined4 uVar7;
  
  FUN_1000_01da();
  cVar2 = FUN_1000_0121(3);
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + cVar2;
  uVar6 = 0xffff;
  uVar3 = FUN_1000_08c3(0xff71,0xffff);
  uVar7 = FUN_1000_10c6(0x1000,0x18e,0,uVar3,uVar6);
  FUN_1000_10cf(0x1000,uVar7,uVar3,uVar6);
  uVar4 = FUN_1000_1187();
  uVar3 = extraout_DX;
  uVar5 = FUN_1000_1169();
  FUN_1000_097b(0x194,uVar4,uVar6,uVar5,uVar3);
  return;
}



void __cdecl16near FUN_1000_01fa(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 extraout_DX;
  undefined4 uVar5;
  
  uVar4 = 0xffff;
  uVar1 = FUN_1000_08c3(0xff71,0xffff);
  uVar5 = FUN_1000_10c6(0x1000,0x18e,0,uVar1,uVar4);
  FUN_1000_10cf(0x1000,uVar5,uVar1,uVar4);
  uVar2 = FUN_1000_1187();
  uVar1 = extraout_DX;
  uVar3 = FUN_1000_1169();
  FUN_1000_097b(0x194,uVar2,uVar4,uVar3,uVar1);
  return;
}



undefined2 FUN_1000_02be(uint param_1)

{
  if ((int)param_1 < 0) {
    if (-param_1 < 0x23 || param_1 == 0xffdd) {
      DAT_111b_0094 = -param_1;
      DAT_111b_01a6 = 0xffff;
      return 0xffff;
    }
  }
  else if (param_1 < 0x59) goto LAB_1000_02d1;
  param_1 = 0x57;
LAB_1000_02d1:
  DAT_111b_01a6 = param_1;
  DAT_111b_0094 = (int)*(char *)(param_1 + 0x1a8);
  return 0xffff;
}



void __cdecl16near FUN_1000_02f9(void)

{
  return;
}



void __cdecl16near FUN_1000_02fa(void)

{
  int iVar1;
  
  while (iVar1 = DAT_111b_020c + -1, DAT_111b_020c != 0) {
    DAT_111b_020c = iVar1;
    (**(code **)(iVar1 * 2 + 0x430))();
  }
  DAT_111b_020c = iVar1;
  (*DAT_111b_0202)();
  (*DAT_111b_0204)();
  (*DAT_111b_0206)();
  FUN_1000_0121();
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack

void FUN_1000_032f(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  byte bVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int extraout_DX;
  int extraout_DX_00;
  char **ppcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  bool bVar12;
  undefined uVar13;
  code *in_stack_00000000;
  uint auStack_4 [2];
  
  DAT_1000_032b = 0x111b;
  pcVar9 = (char *)(DAT_111b_008a + 2);
  uVar6 = 1;
  uVar11 = DAT_111b_0090;
  DAT_1000_0329 = in_stack_00000000;
  if (2 < DAT_111b_0092) {
    uVar6 = 0x7f;
    pcVar10 = pcVar9;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar1 = pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (*pcVar1 != '\0');
    if (uVar6 == 0) goto LAB_1000_03e0;
    uVar6 = uVar6 ^ 0x7f;
    uVar11 = DAT_111b_008c;
  }
  puVar5 = (undefined *)(*(byte *)&DAT_111b_0080 + 2 + uVar6 & 0xfffe);
  iVar3 = -(int)puVar5;
  pcVar10 = &stack0x0000 + iVar3;
  if (puVar5 <= &stack0x0000) {
    *(uint *)((int)auStack_4 + iVar3 + 2) = uVar6;
    while (uVar6 - 1 != 0) {
      pcVar2 = pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar1 = pcVar9;
      pcVar9 = pcVar9 + 1;
      *pcVar2 = *pcVar1;
      uVar6 = uVar6 - 1;
    }
    bVar12 = false;
    *pcVar10 = '\0';
    uVar13 = uVar6 == 0;
LAB_1000_039c:
    *(undefined2 *)((int)auStack_4 + iVar3) = 0x39f;
    bVar4 = 0;
    FUN_1000_03b8();
    iVar7 = extraout_DX;
    if (bVar12 || (bool)uVar13) {
      do {
        uVar11 = DAT_1000_032b;
        if (bVar12) {
          iVar7 = *(int *)((int)auStack_4 + iVar3 + 2) + iVar7;
          *(uint *)&DAT_111b_0084 = uVar6;
          ppcVar8 = (char **)(&stack0x0000 + (uVar6 + 1) * -2);
          if (&stack0x0000 < (undefined *)((uVar6 + 1) * 2)) goto LAB_1000_03e0;
          *(int **)&DAT_111b_0086 = (int *)ppcVar8;
          goto LAB_1000_0400;
        }
        *(undefined2 *)((int)auStack_4 + iVar3) = 0x3a6;
        bVar4 = 0;
        FUN_1000_03b8();
        iVar7 = extraout_DX_00;
      } while (!bVar12 && !(bool)uVar13);
    }
    if ((bVar4 != 0x20) && (bVar4 != 0xd)) goto code_r0x000103b0;
    goto LAB_1000_03b4;
  }
LAB_1000_03e0:
  FUN_1000_01e2();
  return;
code_r0x000103b0:
  bVar12 = bVar4 < 9;
  uVar13 = bVar4 == 9;
  if ((bool)uVar13) {
LAB_1000_03b4:
    bVar12 = false;
    uVar13 = true;
  }
  goto LAB_1000_039c;
  while( true ) {
    *ppcVar8 = (char *)register0x00000010;
    ppcVar8 = ppcVar8 + 1;
    do {
      pcVar1 = (char *)register0x00000010;
      register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 1);
      bVar12 = *pcVar1 != '\0';
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0 && bVar12);
    if (bVar12) break;
LAB_1000_0400:
    if (iVar7 == 0) break;
  }
  *ppcVar8 = (char *)0x0;
                    // WARNING: Could not recover jumptable at 0x00010415. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_1000_0329)();
  return;
}



int __cdecl16near FUN_1000_03b8(void)

{
  char cVar1;
  undefined uVar2;
  int in_AX;
  int iVar3;
  int in_CX;
  char *unaff_SI;
  undefined *unaff_DI;
  undefined2 unaff_ES;
  
  uVar2 = (undefined)in_AX;
  if (in_AX != 0) {
    *unaff_DI = uVar2;
  }
  iVar3 = in_AX << 8;
  if (in_CX != 0) {
    cVar1 = *unaff_SI;
    iVar3 = CONCAT11(uVar2,cVar1 + -0x22);
    if ((((char)(cVar1 + -0x22) != '\0') && (iVar3 = CONCAT11(uVar2,cVar1), cVar1 == '\\')) &&
       (unaff_SI[1] == '\"')) {
      iVar3 = CONCAT11(uVar2,unaff_SI[1]);
    }
  }
  return iVar3;
}



void __cdecl16near FUN_1000_041a(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined2 uVar3;
  char *pcVar4;
  char **ppcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar6 = DAT_111b_008a;
  pcVar4 = (char *)FUN_1000_0569();
  uVar3 = DAT_111b_008c;
  if (pcVar4 != (char *)0x0) {
    pcVar7 = (char *)0x0;
    pcVar8 = pcVar4;
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      pcVar2 = pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar1 = pcVar7;
      pcVar7 = pcVar7 + 1;
      *pcVar2 = *pcVar1;
    }
    ppcVar5 = (char **)FUN_1000_0569(DAT_111b_008e);
    DAT_111b_0088 = ppcVar5;
    if (ppcVar5 != (char **)0x0) {
      iVar6 = -1;
      do {
        *ppcVar5 = pcVar4;
        ppcVar5 = ppcVar5 + 1;
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar1 = pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (*pcVar1 != '\0');
        if (*pcVar4 == '\0') {
          *ppcVar5 = (char *)0x0;
          return;
        }
      } while( true );
    }
  }
  FUN_1000_01e2();
  return;
}



bool __cdecl16near FUN_1000_0464(undefined2 param_1)

{
  bool bVar1;
  
  bVar1 = DAT_111b_020c != 0x20;
  if (bVar1) {
    *(undefined2 *)(DAT_111b_020c * 2 + 0x430) = param_1;
    DAT_111b_020c = DAT_111b_020c + 1;
  }
  return !bVar1;
}



void __cdecl16near FUN_1000_048a(int param_1)

{
  int iVar1;
  
  DAT_111b_0472 = *(int *)(param_1 + 6);
  if (DAT_111b_0472 == param_1) {
    DAT_111b_0472 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    *(int *)(DAT_111b_0472 + 4) = iVar1;
    *(int *)(iVar1 + 6) = DAT_111b_0472;
  }
  return;
}



int * __cdecl16near FUN_1000_04b8(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = param_1;
  *piVar1 = *piVar1 - param_2;
  piVar3 = (int *)(*param_1 + (int)param_1);
  *piVar3 = param_2 + 1;
  piVar3[1] = (int)param_1;
  piVar2 = piVar3;
  if (DAT_111b_0470 != param_1) {
    *(int **)((int)piVar3 + param_2 + 2) = piVar3;
    piVar2 = DAT_111b_0470;
  }
  DAT_111b_0470 = piVar2;
  return piVar3 + 2;
}



int * __cdecl16near FUN_1000_04f2(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_1000_0600(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar1[1] = (int)DAT_111b_0470;
    *piVar1 = param_1 + 1;
    piVar2 = piVar1 + 2;
    DAT_111b_0470 = piVar1;
  }
  return piVar2;
}



int * __cdecl16near FUN_1000_052f(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1000_0600(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar1 = (int *)0x0;
  }
  else {
    DAT_111b_0470 = piVar1;
    DAT_111b_0474 = piVar1;
    *piVar1 = param_1 + 1;
    piVar1 = piVar1 + 2;
  }
  return piVar1;
}



uint * __cdecl16near FUN_1000_0569(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  if ((param_1 == 0) || (0xfff4 < param_1)) {
    puVar2 = (uint *)0x0;
  }
  else {
    uVar3 = param_1 + 0xb & 0xfff8;
    if (DAT_111b_0474 == 0) {
      puVar2 = (uint *)FUN_1000_052f(uVar3);
    }
    else {
      puVar2 = DAT_111b_0472;
      if (DAT_111b_0472 != (uint *)0x0) {
        do {
          if (uVar3 + 0x28 <= *puVar2) {
            puVar2 = (uint *)FUN_1000_04b8(puVar2,uVar3);
            return puVar2;
          }
          if (uVar3 <= *puVar2) {
            FUN_1000_048a(puVar2);
            puVar1 = puVar2;
            *puVar1 = *puVar1 + 1;
            return puVar2 + 2;
          }
          puVar2 = (uint *)puVar2[3];
        } while (puVar2 != DAT_111b_0472);
      }
      puVar2 = (uint *)FUN_1000_04f2(uVar3);
    }
  }
  return puVar2;
}



undefined2 __cdecl16near FUN_1000_05dc(undefined *param_1)

{
  undefined2 uVar1;
  undefined auStack_102 [256];
  
  if (param_1 < auStack_102) {
    DAT_111b_009e = param_1;
    uVar1 = 0;
  }
  else {
    DAT_111b_0094 = 8;
    uVar1 = 0xffff;
  }
  return uVar1;
}



uint __cdecl16near FUN_1000_0600(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 + DAT_111b_009e;
  if ((param_2 + (uint)CARRY2(param_1,DAT_111b_009e) + (uint)(0xfeff < uVar1) == 0) &&
     ((undefined *)(uVar1 + 0x100) < &stack0xfffe)) {
    LOCK();
    UNLOCK();
    uVar2 = DAT_111b_009e;
    DAT_111b_009e = uVar1;
  }
  else {
    DAT_111b_0094 = 8;
    uVar2 = 0xffff;
  }
  return uVar2;
}



void __cdecl16near FUN_1000_0634(undefined2 param_1)

{
  FUN_1000_05dc(param_1);
  return;
}



void __cdecl16near FUN_1000_0642(int param_1)

{
  FUN_1000_0600(param_1,param_1 >> 0xf);
  return;
}



// WARNING: Removing unreachable block (ram,0x000106fe)
// WARNING: Removing unreachable block (ram,0x0001074c)

int __cdecl16near FUN_1000_0654(int param_1,char *param_2,int param_3)

{
  uint *puVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int local_8a;
  char *local_86;
  char local_84 [130];
  
  if (param_3 + 1U < 2) {
    param_3 = 0;
  }
  else if ((*(uint *)(param_1 * 2 + 0x34e) & 0x8000) == 0) {
    puVar1 = (uint *)(param_1 * 2 + 0x34e);
    *puVar1 = *puVar1 & 0xfdff;
    local_86 = param_2;
    local_8a = param_3;
    pcVar5 = local_84;
    while (local_8a != 0) {
      local_8a = local_8a + -1;
      pcVar2 = local_86 + 1;
      cVar3 = *local_86;
      if (cVar3 == '\n') {
        *pcVar5 = '\r';
        pcVar5 = pcVar5 + 1;
      }
      *pcVar5 = cVar3;
      pcVar5 = pcVar5 + 1;
      local_86 = pcVar2;
      if (0x7f < (int)pcVar5 - (int)local_84) {
        iVar6 = (int)pcVar5 - (int)local_84;
        iVar4 = FUN_1000_0767(param_1,local_84,iVar6);
        if (iVar4 != iVar6) {
          return ((param_3 - local_8a) + iVar4) - iVar6;
        }
        pcVar5 = local_84;
      }
    }
    iVar4 = (int)pcVar5 - (int)local_84;
    if ((iVar4 != 0) && (iVar6 = FUN_1000_0767(param_1,local_84,iVar4), iVar6 != iVar4)) {
      param_3 = (param_3 + iVar6) - iVar4;
    }
  }
  else {
    param_3 = FUN_1000_0767(param_1,param_2,param_3);
  }
  return param_3;
}



undefined2 __cdecl16near FUN_1000_0767(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined uVar4;
  
  uVar4 = 0;
  if ((*(uint *)(param_1 * 2 + 0x34e) & 0x800) != 0) {
    uVar4 = 0;
    FUN_1000_07ad(param_1,0,0,2);
  }
  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  if ((bool)uVar4) {
    uVar3 = FUN_1000_02be();
  }
  else {
    puVar1 = (uint *)(param_1 * 2 + 0x34e);
    *puVar1 = *puVar1 | 0x1000;
  }
  return uVar3;
}



void __cdecl16near FUN_1000_07ad(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  
  puVar1 = (uint *)(param_1 * 2 + 0x34e);
  bVar3 = false;
  *puVar1 = *puVar1 & 0xfdff;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (bVar3) {
    FUN_1000_02be();
  }
  return;
}



char * FUN_1000_07d8(char param_1,char param_2,uint param_3,char *param_4,uint param_5,uint param_6)

{
  char *pcVar1;
  byte bVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  byte local_24 [34];
  
  pcVar7 = param_4;
  if ((param_3 < 0x25) && (1 < (byte)param_3)) {
    if (((int)param_6 < 0) && (param_2 != '\0')) {
      *param_4 = '-';
      pcVar7 = param_4 + 1;
      bVar8 = param_5 != 0;
      param_5 = -param_5;
      param_6 = -(uint)bVar8 - param_6;
    }
    pbVar6 = local_24;
    if (param_6 == 0) goto LAB_1000_0822;
    do {
      uVar3 = (ulong)param_6;
      param_6 = param_6 / param_3;
      uVar3 = uVar3 % (ulong)param_3 << 0x10 | (ulong)param_5;
      param_5 = (uint)(uVar3 / param_3);
      *pbVar6 = (byte)(uVar3 % (ulong)param_3);
      pbVar6 = pbVar6 + 1;
    } while (param_6 != 0);
    while (param_5 != 0) {
LAB_1000_0822:
      *pbVar6 = (byte)(param_5 % param_3);
      pbVar6 = pbVar6 + 1;
      param_5 = param_5 / param_3;
    }
    iVar5 = (int)pbVar6 - (int)local_24;
    do {
      pbVar6 = pbVar6 + -1;
      bVar2 = *pbVar6;
      if (bVar2 < 10) {
        cVar4 = bVar2 + 0x30;
      }
      else {
        cVar4 = (bVar2 - 10) + param_1;
      }
      pcVar1 = pcVar7;
      pcVar7 = pcVar7 + 1;
      *pcVar1 = cVar4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *pcVar7 = '\0';
  return param_4;
}



void __cdecl16near FUN_1000_0857(int param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 10) {
    iVar1 = param_1 >> 0xf;
  }
  else {
    iVar1 = 0;
  }
  FUN_1000_07d8(0x61,1,param_3,param_2,param_1,iVar1);
  return;
}



void __cdecl16near
FUN_1000_0880(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  uint in_AX;
  
  FUN_1000_07d8(0x61,in_AX & 0xff00,param_4,param_3,param_1,param_2);
  return;
}



void __cdecl16near
FUN_1000_089c(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  FUN_1000_07d8(0x61,param_4 == 10,param_4,param_3,param_1,param_2);
  return;
}



int __cdecl16far FUN_1000_08c3(void)

{
  int in_AX;
  int in_BX;
  
  return in_AX * in_BX;
}



void FUN_1000_08dc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_1000_01e2();
  return;
}



undefined2 __cdecl16near FUN_1000_08fd(int *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  
  if ((int *)param_1[7] == param_1) {
    if (*param_1 < 0) {
      iVar5 = param_1[3] + *param_1 + 1;
      piVar1 = param_1;
      *piVar1 = *piVar1 - iVar5;
      iVar4 = param_1[4];
      param_1[5] = iVar4;
      iVar4 = FUN_1000_0654((int)*(char *)(param_1 + 2),iVar4,iVar5);
      if ((iVar4 == iVar5) || ((param_1[1] & 0x200U) != 0)) {
        uVar3 = 0;
      }
      else {
        puVar2 = (uint *)(param_1 + 1);
        *puVar2 = *puVar2 | 0x10;
        uVar3 = 0xffff;
      }
    }
    else {
      if ((((param_1[1] & 8U) != 0) || (param_1[5] == (int)param_1 + 5)) &&
         (*param_1 = 0, param_1[5] == (int)param_1 + 5)) {
        param_1[5] = param_1[4];
      }
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0xffff;
  }
  return uVar3;
}



void __cdecl16near FUN_1000_097b(undefined2 param_1)

{
  FUN_1000_0ba3(&stack0x0004,param_1,0x21e,0xab1);
  return;
}



void __cdecl16near FUN_1000_0994(char param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  *piVar1 = *piVar1 + -1;
  FUN_1000_09ad((int)param_1,param_2);
  return;
}



uint __cdecl16near FUN_1000_09ad(byte param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = param_2;
  bVar3 = param_1;
  while( true ) {
    piVar1 = piVar4;
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (SCARRY2(iVar5,1) != *piVar1 < 0) {
      piVar1 = piVar4 + 5;
      *piVar1 = *piVar1 + 1;
      *(byte *)(piVar4[5] + -1) = bVar3;
      if (((piVar4[1] & 8U) != 0) &&
         (((bVar3 == 10 || (bVar3 == 0xd)) && (iVar5 = FUN_1000_08fd(piVar4), iVar5 != 0)))) {
        return 0xffff;
      }
      return (uint)bVar3;
    }
    piVar1 = piVar4;
    *piVar1 = *piVar1 + -1;
    if (((piVar4[1] & 0x90U) != 0) || ((piVar4[1] & 2U) == 0)) {
      puVar2 = (uint *)(piVar4 + 1);
      *puVar2 = *puVar2 | 0x10;
      return 0xffff;
    }
    puVar2 = (uint *)(piVar4 + 1);
    *puVar2 = *puVar2 | 0x100;
    if (piVar4[3] == 0) break;
    if (*piVar4 == 0) {
      *piVar4 = -1 - piVar4[3];
    }
    else {
      iVar5 = FUN_1000_08fd(piVar4);
      if (iVar5 != 0) {
        return 0xffff;
      }
    }
  }
  if (((((bVar3 == 10) && ((piVar4[1] & 0x40U) == 0)) &&
       (iVar5 = FUN_1000_0767((int)*(char *)(piVar4 + 2),0x3a8,1), iVar5 != 1)) ||
      (iVar5 = FUN_1000_0767((int)*(char *)(piVar4 + 2),&param_1,1), iVar5 != 1)) &&
     ((piVar4[1] & 0x200U) == 0)) {
    puVar2 = (uint *)(piVar4 + 1);
    *puVar2 = *puVar2 | 0x10;
    return 0xffff;
  }
  return (uint)bVar3;
}



void __cdecl16near FUN_1000_0a9b(undefined2 param_1)

{
  FUN_1000_09ad(param_1,0x21e);
  return;
}



uint FUN_1000_0ab1(int *param_1,uint param_2,undefined2 *param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_2;
  if ((param_1[1] & 8U) == 0) {
    if ((((param_1[1] & 0x40U) == 0) || (param_1[3] == 0)) || (param_2 <= (uint)param_1[3])) {
      do {
        if (uVar4 == 0) {
          return param_2;
        }
        piVar1 = param_1;
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + 1;
        if (SCARRY2(iVar3,1) == *piVar1 < 0) {
          uVar5 = FUN_1000_0994(*param_3,param_1);
        }
        else {
          bVar2 = *(byte *)param_3;
          piVar1 = param_1 + 5;
          *piVar1 = *piVar1 + 1;
          *(byte *)(param_1[5] + -1) = bVar2;
          uVar5 = (uint)bVar2;
        }
        param_3 = (undefined2 *)((int)param_3 + 1);
        uVar4 = uVar4 - 1;
      } while (uVar5 != 0xffff);
      param_2 = 0;
    }
    else if ((*param_1 == 0) || (iVar3 = FUN_1000_08fd(param_1), iVar3 == 0)) {
      uVar4 = FUN_1000_0767((int)*(char *)(param_1 + 2),param_3,param_2);
      if (uVar4 < param_2) {
        param_2 = 0;
      }
    }
    else {
      param_2 = 0;
    }
  }
  else {
    do {
      if (uVar4 == 0) {
        return param_2;
      }
      iVar3 = FUN_1000_09ad((int)(char)*(byte *)param_3,param_1);
      uVar4 = uVar4 - 1;
      param_3 = (undefined2 *)((int)param_3 + 1);
    } while (iVar3 != -1);
    param_2 = 0;
  }
  return param_2;
}



void thunk_FUN_1000_08dc(void)

{
                    // WARNING: Could not recover jumptable at 0x00010b74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_111b_0428)();
  return;
}



void FUN_1000_0b78(undefined2 param_1)

{
  byte bVar1;
  undefined *unaff_DI;
  undefined2 unaff_ES;
  
  bVar1 = (byte)((uint)param_1 >> 8);
  *unaff_DI = *(undefined *)(ulong)((bVar1 >> 4) + 0x3b1);
  unaff_DI[1] = *(undefined *)(ulong)((bVar1 & 0xf) + 0x3b1);
  unaff_DI[2] = *(undefined *)(ulong)((byte)((byte)param_1 >> 4) + 0x3b1);
  unaff_DI[3] = *(undefined *)(ulong)(((byte)param_1 & 0xf) + 0x3b1);
  return;
}



void FUN_1000_0ba3(void)

{
  undefined2 unaff_SI;
  
  FUN_1000_0bfd(unaff_SI);
  return;
}



void __cdecl16near FUN_1000_0bbc(void)

{
  char *pcVar1;
  int iVar2;
  char *unaff_DI;
  undefined2 unaff_ES;
  
  iVar2 = -1;
  do {
    if (iVar2 == 0) {
      return;
    }
    iVar2 = iVar2 + -1;
    pcVar1 = unaff_DI;
    unaff_DI = unaff_DI + 1;
  } while (*pcVar1 != '\0');
  return;
}



void __cdecl16near FUN_1000_0bc9(void)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  undefined in_AL;
  int iVar4;
  int unaff_BP;
  undefined *unaff_DI;
  undefined2 unaff_SS;
  
  *unaff_DI = in_AL;
  pcVar1 = (char *)(unaff_BP + -0x55);
  cVar3 = *pcVar1;
  *pcVar1 = *pcVar1 + -1;
  if (*pcVar1 != '\0' && SBORROW1(cVar3,'\x01') == *pcVar1 < '\0') {
    iVar4 = (**(code **)(unaff_BP + 10))
                      (*(undefined2 *)(unaff_BP + 8),unaff_DI + (1 - (unaff_BP + -0x54)),
                       unaff_BP + -0x54);
    if (iVar4 == 0) {
      *(undefined2 *)(unaff_BP + -2) = 1;
    }
    *(undefined *)(unaff_BP + -0x55) = 0x50;
    piVar2 = (int *)(unaff_BP + -0x58);
    *piVar2 = (int)(unaff_DI + (1 - (unaff_BP + -0x54)) + *piVar2);
  }
  return;
}



void __cdecl16near FUN_1000_0bd1(void)

{
  int *piVar1;
  int iVar2;
  int unaff_BP;
  int unaff_DI;
  int iVar3;
  undefined2 unaff_SS;
  
  iVar3 = unaff_DI - (unaff_BP + -0x54);
  iVar2 = (**(code **)(unaff_BP + 10))(*(undefined2 *)(unaff_BP + 8),iVar3,unaff_BP + -0x54);
  if (iVar2 == 0) {
    *(undefined2 *)(unaff_BP + -2) = 1;
  }
  *(undefined *)(unaff_BP + -0x55) = 0x50;
  piVar1 = (int *)(unaff_BP + -0x58);
  *piVar1 = *piVar1 + iVar3;
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack

undefined2 FUN_1000_0bfd(void)

{
  char *pcVar1;
  int *piVar2;
  uint *puVar3;
  undefined *puVar4;
  char cVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  char cVar11;
  uint *puVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  uint uVar15;
  byte bVar18;
  int iVar16;
  int iVar17;
  int extraout_DX;
  int extraout_DX_00;
  int extraout_DX_01;
  char cVar19;
  int iVar20;
  int unaff_BP;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  int *piVar24;
  undefined *puVar25;
  uint *puVar26;
  int *piVar27;
  uint uVar28;
  uint unaff_SS;
  
  *(int *)(unaff_BP + -0x96) = unaff_BP + -0x54;
LAB_1000_0c06:
  pcVar23 = *(char **)(unaff_BP + -0x96);
LAB_1000_0c0a:
  pcVar21 = *(char **)(unaff_BP + 6);
LAB_1000_0c0d:
  pcVar22 = pcVar21 + 1;
  cVar11 = *pcVar21;
  if (cVar11 == '\0') goto LAB_1000_10a2;
  if (cVar11 == '%') {
    *(char **)(unaff_BP + -0x8a) = pcVar22;
    pcVar1 = pcVar22;
    pcVar22 = pcVar21 + 2;
    cVar11 = *pcVar1;
    if (cVar11 != '%') goto code_r0x00010c2f;
  }
  *pcVar23 = cVar11;
  pcVar23 = pcVar23 + 1;
  pcVar1 = (char *)(unaff_BP + -0x55);
  cVar11 = *pcVar1;
  *pcVar1 = *pcVar1 + -1;
  pcVar21 = pcVar22;
  if (*pcVar1 == '\0' || SBORROW1(cVar11,'\x01') != *pcVar1 < '\0') {
    FUN_1000_0bd1();
  }
  goto LAB_1000_0c0d;
code_r0x00010c2f:
  *(char **)(unaff_BP + -0x96) = pcVar23;
  uVar15 = 0;
  *(undefined2 *)(unaff_BP + -0x8c) = 0;
  *(undefined2 *)(unaff_BP + -0x98) = 0;
  *(undefined *)(unaff_BP + -0x8d) = 0;
  *(undefined2 *)(unaff_BP + -0x92) = 0xffff;
  *(undefined2 *)(unaff_BP + -0x90) = 0xffff;
  do {
    if (0x5f < (byte)(cVar11 - 0x20U)) goto switchD_1000_0c70_caseD_13;
    cVar5 = *(char *)((byte)(cVar11 - 0x20U) + 0x3c1);
    cVar19 = cVar5 * '\x02';
    bVar18 = (byte)(uVar15 >> 8);
    uVar28 = unaff_SS;
    switch(cVar5) {
    case '\0':
      if (bVar18 != 0) goto switchD_1000_0c70_caseD_13;
      if (*(char *)(unaff_BP + -0x8d) != '+') {
        *(char *)(unaff_BP + -0x8d) = cVar11;
      }
      break;
    case '\x01':
      if (bVar18 != 0) goto switchD_1000_0c70_caseD_13;
      puVar3 = (uint *)(unaff_BP + -0x98);
      *puVar3 = *puVar3 | 1;
      break;
    case '\x02':
      uVar14 = *(undefined2 *)*(undefined2 *)(unaff_BP + 4);
      piVar2 = (int *)(unaff_BP + 4);
      *piVar2 = *piVar2 + 2;
      if (bVar18 < 2) {
        *(undefined2 *)(unaff_BP + -0x92) = uVar14;
        uVar15 = 0x300;
      }
      else {
        if (bVar18 != 4) goto switchD_1000_0c70_caseD_13;
        *(undefined2 *)(unaff_BP + -0x90) = uVar14;
        uVar15 = 0x500;
      }
      break;
    case '\x03':
      if (bVar18 != 0) goto switchD_1000_0c70_caseD_13;
      puVar3 = (uint *)(unaff_BP + -0x98);
      *puVar3 = *puVar3 | 2;
      break;
    case '\x04':
      if (3 < bVar18) goto switchD_1000_0c70_caseD_13;
      uVar15 = 0x400;
      break;
    case '\x05':
switchD_1000_0c70_caseD_5:
      if (bVar18 < 3) {
        uVar15 = 0x200;
        LOCK();
        piVar2 = (int *)(unaff_BP + -0x92);
        iVar20 = *piVar2;
        *piVar2 = (int)(char)(cVar11 + -0x30);
        UNLOCK();
        if (-1 < iVar20) {
          piVar2 = (int *)(unaff_BP + -0x92);
          *piVar2 = *piVar2 + iVar20 * 10;
        }
      }
      else {
        if (bVar18 != 4) {
switchD_1000_0c70_caseD_13:
          pcVar23 = *(char **)(unaff_BP + -0x8a);
          do {
            FUN_1000_0bc9();
            pcVar1 = pcVar23;
            pcVar23 = pcVar23 + 1;
          } while (*pcVar1 != '\0');
LAB_1000_10a2:
          if (*(char *)(unaff_BP + -0x55) < 'P') {
            FUN_1000_0bd1();
          }
          if (*(int *)(unaff_BP + -2) == 0) {
            uVar14 = *(undefined2 *)(unaff_BP + -0x58);
          }
          else {
            uVar14 = 0xffff;
          }
          return uVar14;
        }
        LOCK();
        piVar2 = (int *)(unaff_BP + -0x90);
        iVar20 = *piVar2;
        *piVar2 = (int)(char)(cVar11 + -0x30);
        UNLOCK();
        if (-1 < iVar20) {
          piVar2 = (int *)(unaff_BP + -0x90);
          *piVar2 = *piVar2 + iVar20 * 10;
        }
      }
      break;
    case '\x06':
      puVar3 = (uint *)(unaff_BP + -0x98);
      *puVar3 = *puVar3 | 0x10;
      uVar15 = 0x500;
      break;
    case '\a':
      puVar3 = (uint *)(unaff_BP + -0x98);
      *puVar3 = *puVar3 | 0x100;
      puVar3 = (uint *)(unaff_BP + -0x98);
      *puVar3 = *puVar3 & 0xffef;
      uVar15 = 0x500;
      break;
    case '\b':
      puVar3 = (uint *)(unaff_BP + -0x98);
      *puVar3 = *puVar3 & 0xffef;
      puVar3 = (uint *)(unaff_BP + -0x98);
      *puVar3 = *puVar3 | 0x80;
      uVar15 = 0x500;
      break;
    case '\t':
      if (bVar18 != 0) goto switchD_1000_0c70_caseD_5;
      if ((*(uint *)(unaff_BP + -0x98) & 2) == 0) {
        puVar3 = (uint *)(unaff_BP + -0x98);
        *puVar3 = *puVar3 | 8;
        uVar15 = 0x100;
      }
      break;
    case '\n':
      goto switchD_1000_0c70_caseD_a;
    case '\v':
      uVar14 = CONCAT11(8,cVar19);
      goto LAB_1000_0daa;
    case '\f':
      uVar14 = CONCAT11(10,cVar19);
      goto LAB_1000_0daf;
    case '\r':
      uVar14 = CONCAT11(0x10,cVar11 + -0x17);
LAB_1000_0daa:
      *(undefined *)(unaff_BP + -0x8d) = 0;
LAB_1000_0daf:
      *(undefined *)(unaff_BP + -0x93) = 0;
      *(char *)(unaff_BP + -0x94) = cVar11;
      piVar27 = *(int **)(unaff_BP + 4);
      iVar20 = *piVar27;
      iVar16 = 0;
      goto LAB_1000_0dd2;
    case '\x0e':
      *(char *)(unaff_BP + -0x94) = cVar11;
      *(char **)(unaff_BP + 6) = pcVar22;
      puVar25 = (undefined *)(unaff_BP + -0x88);
      puVar6 = (undefined2 *)*(int *)(unaff_BP + 4);
      uVar14 = *puVar6;
      *(undefined2 **)(unaff_BP + 4) = puVar6 + 1;
      if ((*(uint *)(unaff_BP + -0x98) & 0x20) != 0) {
        uVar13 = puVar6[1];
        *(undefined2 **)(unaff_BP + 4) = puVar6 + 2;
        FUN_1000_0b78(uVar13,uVar14);
        puVar4 = puVar25;
        puVar25 = (undefined *)(unaff_BP + -0x87);
        *puVar4 = 0x3a;
      }
      FUN_1000_0b78();
      *puVar25 = 0;
      *(undefined *)(unaff_BP + -0x93) = 0;
      puVar3 = (uint *)(unaff_BP + -0x98);
      *puVar3 = *puVar3 & 0xfffb;
      puVar26 = (uint *)(unaff_BP + -0x88);
      uVar15 = (int)puVar25 - (int)puVar26;
      goto LAB_1000_0f57;
    case '\x0f':
      *(char **)(unaff_BP + 6) = pcVar22;
      *(char *)(unaff_BP + -0x94) = cVar11;
      uVar14 = *(undefined2 *)(unaff_BP + 4);
      uVar15 = *(uint *)(unaff_BP + -0x90);
      if ((int)uVar15 < 0) {
        uVar15 = 6;
      }
      uVar7 = *(uint *)(unaff_BP + -0x98);
      uVar8 = *(uint *)(unaff_BP + -0x98);
      if ((uVar8 & 0x80) == 0) {
        if ((uVar8 & 0x100) == 0) {
          *(undefined2 *)(unaff_BP + -4) = 8;
          uVar13 = 6;
        }
        else {
          uVar13 = 8;
          *(undefined2 *)(unaff_BP + -4) = 10;
        }
      }
      else {
        uVar13 = 2;
        *(undefined2 *)(unaff_BP + -4) = 4;
      }
      thunk_FUN_1000_08dc(uVar13,uVar7 & 1,cVar11,unaff_BP + -0x87,uVar15,uVar14);
      piVar2 = (int *)(unaff_BP + 4);
      *piVar2 = *piVar2 + *(int *)(unaff_BP + -4);
      puVar26 = (uint *)(unaff_BP + -0x87);
      goto LAB_1000_0f57;
    case '\x10':
      *(char **)(unaff_BP + 6) = pcVar22;
      *(char *)(unaff_BP + -0x94) = cVar11;
      uVar15 = **(uint **)(unaff_BP + 4);
      piVar2 = (int *)(unaff_BP + 4);
      *piVar2 = *piVar2 + 2;
      puVar26 = (uint *)(unaff_BP + -0x87);
      *puVar26 = uVar15 & 0xff;
      uVar15 = 1;
      goto LAB_1000_0f98;
    case '\x11':
      *(char **)(unaff_BP + 6) = pcVar22;
      *(char *)(unaff_BP + -0x94) = cVar11;
      puVar9 = (undefined4 *)*(undefined2 *)(unaff_BP + 4);
      if ((*(uint *)(unaff_BP + -0x98) & 0x20) == 0) {
        puVar26 = *(uint **)puVar9;
        piVar2 = (int *)(unaff_BP + 4);
        *piVar2 = *piVar2 + 2;
        uVar28 = 0x111b;
        puVar12 = puVar26;
      }
      else {
        uVar10 = *puVar9;
        uVar28 = (uint)((ulong)uVar10 >> 0x10);
        puVar26 = (uint *)uVar10;
        piVar2 = (int *)(unaff_BP + 4);
        *piVar2 = *piVar2 + 4;
        puVar12 = (uint *)(uVar28 | (uint)puVar26);
      }
      if (puVar12 == (uint *)0x0) {
        uVar28 = 0x111b;
        puVar26 = (uint *)0x3aa;
      }
      FUN_1000_0bbc();
      puVar3 = (uint *)(unaff_BP + -0x90);
      if (*puVar3 <= uVar15 && uVar15 != *puVar3) {
        uVar15 = *(uint *)(unaff_BP + -0x90);
      }
      goto LAB_1000_0f98;
    case '\x12':
      *(char **)(unaff_BP + 6) = pcVar22;
      puVar9 = (undefined4 *)*(undefined2 *)(unaff_BP + 4);
      if ((*(uint *)(unaff_BP + -0x98) & 0x20) == 0) {
        piVar27 = *(int **)puVar9;
        piVar2 = (int *)(unaff_BP + 4);
        *piVar2 = *piVar2 + 2;
        uVar14 = 0x111b;
      }
      else {
        uVar10 = *puVar9;
        uVar14 = (undefined2)((ulong)uVar10 >> 0x10);
        piVar27 = (int *)uVar10;
        piVar2 = (int *)(unaff_BP + 4);
        *piVar2 = *piVar2 + 4;
      }
      *piVar27 = (uint)(byte)(0x50 - *(char *)(unaff_BP + -0x55)) + *(int *)(unaff_BP + -0x58);
      goto LAB_1000_0c06;
    default:
      goto switchD_1000_0c70_caseD_13;
    case '\x16':
      puVar3 = (uint *)(unaff_BP + -0x98);
      *puVar3 = *puVar3 & 0xffdf;
      uVar15 = 0x500;
      break;
    case '\x17':
      puVar3 = (uint *)(unaff_BP + -0x98);
      *puVar3 = *puVar3 | 0x20;
      uVar15 = 0x500;
    }
    pcVar1 = pcVar22;
    pcVar22 = pcVar22 + 1;
    cVar11 = *pcVar1;
  } while( true );
switchD_1000_0c70_caseD_a:
  uVar14 = CONCAT11(10,cVar19);
  *(undefined *)(unaff_BP + -0x93) = 1;
  *(char *)(unaff_BP + -0x94) = cVar11;
  piVar27 = *(int **)(unaff_BP + 4);
  iVar20 = *piVar27;
  iVar16 = iVar20 >> 0xf;
LAB_1000_0dd2:
  piVar24 = piVar27 + 1;
  *(char **)(unaff_BP + 6) = pcVar22;
  if ((*(uint *)(unaff_BP + -0x98) & 0x10) != 0) {
    iVar16 = *piVar24;
    piVar24 = piVar27 + 2;
  }
  *(int **)(unaff_BP + 4) = piVar24;
  puVar26 = (uint *)(unaff_BP + -0x87);
  if ((iVar20 == 0) && (iVar16 == 0)) {
    if (*(int *)(unaff_BP + -0x90) == 0) {
      pcVar23 = *(char **)(unaff_BP + -0x96);
      iVar20 = *(int *)(unaff_BP + -0x92);
      if ((iVar20 != 0) && (iVar20 != -1)) {
        do {
          FUN_1000_0bc9();
          iVar20 = iVar20 + -1;
        } while (iVar20 != 0);
      }
      goto LAB_1000_0c0a;
    }
  }
  else {
    puVar3 = (uint *)(unaff_BP + -0x98);
    *puVar3 = *puVar3 | 4;
  }
  FUN_1000_07d8(uVar14,*(undefined *)(unaff_BP + -0x93),(char)((uint)uVar14 >> 8),puVar26,iVar20,
                iVar16);
  if (*(int *)(unaff_BP + -0x90) < 1) {
LAB_1000_0f57:
    if (((*(uint *)(unaff_BP + -0x98) & 8) == 0) || (*(int *)(unaff_BP + -0x92) < 1))
    goto LAB_1000_0f79;
  }
  FUN_1000_0bbc();
  if (*(char *)puVar26 == '-') {
    uVar15 = uVar15 - 1;
  }
  if (extraout_DX - uVar15 != 0 && (int)uVar15 <= extraout_DX) {
    *(int *)(unaff_BP + -0x8c) = extraout_DX - uVar15;
  }
LAB_1000_0f79:
  cVar11 = *(char *)(unaff_BP + -0x8d);
  if ((cVar11 != '\0') && (*(char *)puVar26 != '-')) {
    piVar2 = (int *)(unaff_BP + -0x8c);
    iVar20 = *piVar2;
    *piVar2 = *piVar2 + -1;
    piVar2 = (int *)(unaff_BP + -0x8c);
    *piVar2 = *piVar2 + (uint)(iVar20 == 0);
    puVar26 = (uint *)((int)puVar26 + -1);
    *(char *)puVar26 = cVar11;
  }
  FUN_1000_0bbc();
LAB_1000_0f98:
  pcVar23 = *(char **)(unaff_BP + -0x96);
  iVar20 = *(int *)(unaff_BP + -0x92);
  if ((*(uint *)(unaff_BP + -0x98) & 5) == 5) {
    cVar11 = *(char *)(unaff_BP + -0x94);
    if (cVar11 == 'o') {
      if (*(int *)(unaff_BP + -0x8c) < 1) {
        *(undefined2 *)(unaff_BP + -0x8c) = 1;
      }
    }
    else if ((cVar11 == 'x') || (cVar11 == 'X')) {
      puVar3 = (uint *)(unaff_BP + -0x98);
      *puVar3 = *puVar3 | 0x40;
      iVar20 = iVar20 + -2;
      piVar2 = (int *)(unaff_BP + -0x8c);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -2;
      if (SBORROW2(iVar16,2) != *piVar2 < 0) {
        *(undefined2 *)(unaff_BP + -0x8c) = 0;
      }
    }
  }
  iVar16 = uVar15 + *(int *)(unaff_BP + -0x8c);
  if ((*(uint *)(unaff_BP + -0x98) & 2) == 0) {
    for (; iVar16 < iVar20; iVar20 = iVar20 + -1) {
      FUN_1000_0bc9();
    }
  }
  if ((*(uint *)(unaff_BP + -0x98) & 0x40) != 0) {
    FUN_1000_0bc9();
    FUN_1000_0bc9();
  }
  iVar17 = *(int *)(unaff_BP + -0x8c);
  if (0 < iVar17) {
    iVar16 = iVar16 - iVar17;
    iVar20 = iVar20 - iVar17;
    cVar11 = *(char *)puVar26;
    if (((cVar11 == '-') || (cVar11 == ' ')) || (cVar11 == '+')) {
      puVar26 = (uint *)((int)puVar26 + 1);
      FUN_1000_0bc9();
      iVar16 = iVar16 + -1;
      iVar20 = iVar20 + -1;
      iVar17 = extraout_DX_00;
    }
    for (; iVar17 != 0; iVar17 = iVar17 + -1) {
      FUN_1000_0bc9();
      iVar16 = extraout_DX_01;
    }
  }
  if (iVar16 != 0) {
    iVar20 = iVar20 - iVar16;
    do {
      puVar3 = puVar26;
      puVar26 = (uint *)((int)puVar26 + 1);
      *pcVar23 = *(char *)puVar3;
      pcVar23 = pcVar23 + 1;
      pcVar1 = (char *)(unaff_BP + -0x55);
      cVar11 = *pcVar1;
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0' || SBORROW1(cVar11,'\x01') != *pcVar1 < '\0') {
        FUN_1000_0bd1();
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  if (0 < iVar20) {
    do {
      FUN_1000_0bc9();
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  goto LAB_1000_0c0a;
}



void FUN_1000_10c6(void)

{
  FUN_1000_10d7();
  return;
}



void FUN_1000_10cf(void)

{
  FUN_1000_10d7();
  return;
}



undefined4 __stdcall16far FUN_1000_10d7(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint in_CX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  if ((param_4 == 0) && ((param_2 == 0 || (param_3 == 0)))) {
    uVar1 = (uint)(CONCAT22(param_2,param_1) / (ulong)param_3);
    if ((in_CX & 2) != 0) {
      uVar1 = (uint)(CONCAT22(param_2,param_1) % (ulong)param_3);
    }
    param_2 = 0;
  }
  else {
    if ((in_CX & 1) == 0) {
      if ((int)param_2 < 0) {
        bVar5 = param_1 != 0;
        param_1 = -param_1;
        param_2 = -(uint)bVar5 - param_2;
        in_CX = in_CX | 0xc;
      }
      if ((int)param_4 < 0) {
        bVar5 = param_3 != 0;
        param_3 = -param_3;
        param_4 = -(uint)bVar5 - param_4;
        in_CX = in_CX ^ 4;
      }
    }
    iVar2 = 0x20;
    uVar4 = 0;
    uVar3 = 0;
    do {
      bVar5 = (int)param_1 < 0;
      param_1 = param_1 * 2;
      bVar6 = (int)param_2 < 0;
      param_2 = param_2 << 1 | (uint)bVar5;
      bVar5 = (int)uVar3 < 0;
      uVar3 = uVar3 << 1 | (uint)bVar6;
      uVar4 = uVar4 << 1 | (uint)bVar5;
      if ((param_4 <= uVar4) && ((param_4 < uVar4 || (param_3 <= uVar3)))) {
        bVar5 = uVar3 < param_3;
        uVar3 = uVar3 - param_3;
        uVar4 = (uVar4 - param_4) - (uint)bVar5;
        param_1 = param_1 + 1;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    uVar1 = param_1;
    if ((in_CX & 2) != 0) {
      in_CX = in_CX >> 1;
      uVar1 = uVar3;
      param_2 = uVar4;
    }
    if ((in_CX & 4) != 0) {
      bVar5 = uVar1 != 0;
      uVar1 = -uVar1;
      param_2 = -(uint)bVar5 - param_2;
    }
  }
  return CONCAT22(param_2,uVar1);
}



uint __cdecl16far FUN_1000_1169(void)

{
  uint in_AX;
  byte in_CL;
  int in_DX;
  
  if (in_CL < 0x10) {
    return in_AX >> (in_CL & 0x1f) | in_DX << (0x10 - in_CL & 0x1f);
  }
  return in_DX >> (in_CL - 0x10 & 0x1f);
}



int __cdecl16far FUN_1000_1187(void)

{
  int in_AX;
  byte in_CL;
  
  if (in_CL < 0x10) {
    return in_AX << (in_CL & 0x1f);
  }
  return 0;
}


