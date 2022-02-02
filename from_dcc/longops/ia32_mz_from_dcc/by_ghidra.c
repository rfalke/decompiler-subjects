typedef unsigned char   undefined;

typedef unsigned int    uint;
typedef unsigned char    undefined1;
typedef unsigned int    undefined2;
typedef unsigned long    undefined4;



// WARNING: Stack frame is not setup normally: Input value of stackpointer is not used
// WARNING: This function may have set the stack pointer

void entry(void)

{
  int *piVar1;
  uint *puVar2;
  byte *pbVar3;
  undefined *puVar4;
  code *pcVar5;
  uint uVar6;
  code *pcVar7;
  char cVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined *puVar13;
  int *piVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  byte *unaff_SI;
  int *piVar25;
  int *piVar26;
  undefined *puVar27;
  int iVar28;
  undefined2 unaff_ES;
  undefined2 uVar29;
  undefined2 uVar30;
  undefined4 uVar31;
  
  uVar30 = 0x163;
  puVar13 = (undefined *)&DAT_111b_0080;
                    // WARNING: Read-only address (ram,0x000101f8) is written
  uRam000101f8 = 0x111b;
  pcVar7 = (code *)swi(0x21);
  uVar31 = (*pcVar7)();
  uVar29 = s_Turbo_C___Copyright__c__1988_Bor_111b_0004._40_2_;
  puVar24 = DAT_111b_0002;
  iVar9 = (int)((ulong)uVar31 >> 0x10);
  *(undefined2 *)&DAT_111b_0092 = (int)uVar31;
  *(undefined2 *)&DAT_111b_0090 = unaff_ES;
  *(undefined2 *)&DAT_111b_008c = uVar29;
  *(int *)&DAT_111b_00ac = (int)puVar24;
  *(undefined2 *)&DAT_111b_0096 = 0xffff;
  *(undefined2 *)(puVar13 + -2) = 0x2e;
  FUN_1000_0162();
  uVar31 = *(undefined4 *)&DAT_111b_008a;
  uVar29 = (undefined2)((ulong)uVar31 >> 0x10);
  piVar25 = (int *)uVar31;
  uVar11 = 0x7fff;
  piVar26 = piVar25;
  do {
    if (((*piVar26 == 0x3738) && (iVar12 = piVar26[1], (char)iVar12 == '=')) &&
       (piVar1 = (int *)&DAT_111b_0096, *piVar1 = *piVar1 + 1,
       ((byte)((uint)iVar12 >> 8) & 0xdf) == 0x59)) {
      piVar1 = (int *)&DAT_111b_0096;
      *piVar1 = *piVar1 + 1;
    }
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      piVar1 = piVar26;
      piVar26 = (int *)((int)piVar26 + 1);
    } while ((char)uVar31 != *(char *)piVar1);
    if (uVar11 == 0) goto LAB_1000_01e9;
    piVar25 = (int *)((int)piVar25 + 1);
  } while (*(char *)piVar26 != (char)uVar31);
  *(int *)&DAT_111b_008a = -(uVar11 | 0x8000);
  piVar25 = (int *)((int)piVar25 * 2 + 8U & 0xfff8);
  *(int **)&DAT_111b_008e = piVar25;
  puVar24 = puVar24 + -iVar9;
  uVar11 = *(uint *)&DAT_111b_020a;
  if (uVar11 < 0x200) {
    uVar11 = 0x200;
    *(undefined2 *)&DAT_111b_020a = 0x200;
  }
  if ((uVar11 < 0xfb8a) && (puVar2 = (uint *)&DAT_111b_0208, !CARRY2(uVar11 + 0x476,*puVar2))) {
    bVar10 = 4;
    puVar27 = (undefined *)((uVar11 + 0x476 + *puVar2 >> 4) + 1);
    if (puVar27 <= puVar24) {
      if (((*(int *)&DAT_111b_020a == 0) || (*(int *)&DAT_111b_0208 == 0)) &&
         (puVar27 = (undefined *)0x1000, puVar24 < (undefined *)0x1001)) {
        puVar27 = puVar24;
      }
      puVar24 = puVar27 + iVar9;
      *(int *)&DAT_111b_00a4 = (int)puVar24;
      *(int *)&DAT_111b_00a8 = (int)puVar24;
      piVar25 = (int *)(puVar24 + -*(int *)&DAT_111b_0090);
      piVar14 = (int *)(puVar13 + -2);
      *(undefined **)(puVar13 + -2) = puVar27;
      pcVar7 = (code *)swi(0x21);
      (*pcVar7)();
      iVar28 = *piVar14 << (bVar10 & 0x1f);
      puVar24 = (undefined *)&DAT_111b_0430;
      for (iVar12 = 0x46; iVar12 != 0; iVar12 = iVar12 + -1) {
        puVar4 = puVar24;
        puVar24 = puVar24 + 1;
        *puVar4 = 0;
      }
      *(undefined2 *)(iVar28 + -2) = 0x1000;
      pcVar5 = *(code **)&DAT_111b_0422;
      puVar15 = (undefined *)(iVar28 + -4);
      *(undefined2 *)(iVar28 + -4) = 0xf8;
      (*pcVar5)();
      puVar16 = puVar15 + -2;
      *(undefined2 *)(puVar15 + -2) = 0xfb;
      FUN_1000_032f();
      *(undefined2 *)(puVar16 + -2) = 0xfe;
      FUN_1000_041a();
      pcVar7 = (code *)swi(0x1a);
      (*pcVar7)();
      *(undefined2 *)&DAT_111b_0098 = extraout_DX_00;
      *(int *)&DAT_111b_009a = iVar12;
      pcVar5 = *(code **)&DAT_111b_0426;
      puVar17 = puVar16 + -2;
      *(undefined2 *)(puVar16 + -2) = 0x10e;
      (*pcVar5)();
      *(undefined2 *)(puVar17 + -2) = *(undefined2 *)&DAT_111b_0088;
      *(undefined2 *)(puVar17 + -4) = *(undefined2 *)&DAT_111b_0086;
      *(undefined2 *)(puVar17 + -6) = *(undefined2 *)&DAT_111b_0084;
      *(undefined2 *)(puVar17 + -8) = 0x11d;
      uVar29 = FUN_1000_01fa();
      *(undefined2 *)(puVar17 + -8) = uVar29;
      *(undefined2 *)(puVar17 + -10) = 0x121;
      FUN_1000_02fa();
      *(undefined2 *)(puVar17 + -10) = 0x129;
      FUN_1000_01a5();
      *(undefined2 *)(puVar17 + -10) = 0x1000;
      pcVar7 = pcRam00000424;
      puVar24 = puVar17 + -0xc;
      *(undefined2 *)(puVar17 + -0xc) = 0x12e;
      (*pcVar7)();
      iVar9 = 0;
      unaff_SI = (byte *)0x0;
      iVar12 = 0x2f;
      do {
        pbVar3 = unaff_SI;
        iVar9 = CONCAT11((char)((uint)iVar9 >> 8) + CARRY1((byte)iVar9,*pbVar3),
                         (byte)iVar9 + *pbVar3);
        unaff_SI = unaff_SI + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      if (iVar9 != 0xd37) {
        *(undefined2 *)(puVar24 + -2) = 0x14f;
        FUN_1000_01da();
      }
      pcVar7 = (code *)swi(0x21);
      puVar13 = puVar24;
      (*pcVar7)();
      uVar30 = extraout_DX;
    }
  }
LAB_1000_01e9:
  *(undefined2 *)(puVar13 + -2) = 0x1f1;
  FUN_1000_01da();
  *(undefined2 *)(puVar13 + -2) = 3;
  puVar18 = puVar13 + -4;
  *(undefined2 *)(puVar13 + -4) = 0x1f8;
  cVar8 = FUN_1000_0121();
  pbVar3 = (byte *)((int)piVar25 + (int)unaff_SI);
  *pbVar3 = *pbVar3 + cVar8;
  *(undefined **)(puVar18 + -2) = puVar24;
  *(undefined2 *)(puVar18 + -8) = 0;
  *(undefined2 *)(puVar18 + -10) = 0xff;
  *(undefined2 *)(puVar18 + -4) = 0;
  *(undefined2 *)(puVar18 + -6) = 0x8f;
  uVar11 = *(uint *)(puVar18 + -10);
  uVar6 = *(uint *)(puVar18 + -6);
  *(uint *)(puVar18 + -4) =
       *(int *)(puVar18 + -8) + *(int *)(puVar18 + -4) +
       (uint)CARRY2(uVar11,*(uint *)(puVar18 + -6));
  *(uint *)(puVar18 + -6) = uVar11 + uVar6;
  uVar11 = *(uint *)(puVar18 + -10);
  uVar6 = *(uint *)(puVar18 + -6);
  *(uint *)(puVar18 + -8) =
       (*(int *)(puVar18 + -8) - *(int *)(puVar18 + -4)) - (uint)(uVar11 < *(uint *)(puVar18 + -6));
  *(uint *)(puVar18 + -10) = uVar11 - uVar6;
  *(undefined2 *)(puVar18 + -0xc) = 0x1000;
  puVar19 = puVar18 + -0xe;
  *(undefined2 *)(puVar18 + -0xe) = 0x249;
  uVar31 = FUN_1000_08c3();
  *(int *)(puVar18 + -8) = (int)((ulong)uVar31 >> 0x10);
  *(int *)(puVar18 + -10) = (int)uVar31;
  *(undefined2 *)(puVar19 + -2) = *(undefined2 *)(puVar18 + -8);
  *(undefined2 *)(puVar19 + -4) = *(undefined2 *)(puVar18 + -10);
  *(undefined2 *)(puVar19 + -6) = *(undefined2 *)(puVar18 + -4);
  *(undefined2 *)(puVar19 + -8) = *(undefined2 *)(puVar18 + -6);
  *(undefined2 *)(puVar19 + -10) = 0x1000;
  puVar20 = puVar19 + -0xc;
  *(undefined2 *)(puVar19 + -0xc) = 0x260;
  uVar31 = FUN_1000_10c6();
  *(int *)(puVar18 + -4) = (int)((ulong)uVar31 >> 0x10);
  *(int *)(puVar18 + -6) = (int)uVar31;
  *(undefined2 *)(puVar20 + -2) = *(undefined2 *)(puVar18 + -8);
  *(undefined2 *)(puVar20 + -4) = *(undefined2 *)(puVar18 + -10);
  *(undefined2 *)(puVar20 + -6) = *(undefined2 *)(puVar18 + -4);
  *(undefined2 *)(puVar20 + -8) = *(undefined2 *)(puVar18 + -6);
  *(undefined2 *)(puVar20 + -10) = 0x1000;
  puVar21 = puVar20 + -0xc;
  *(undefined2 *)(puVar20 + -0xc) = 0x277;
  uVar31 = FUN_1000_10cf();
  *(int *)(puVar18 + -4) = (int)((ulong)uVar31 >> 0x10);
  *(int *)(puVar18 + -6) = (int)uVar31;
  *(undefined2 *)(puVar21 + -2) = 0x1000;
  puVar22 = puVar21 + -4;
  *(undefined2 *)(puVar21 + -4) = 0x28a;
  uVar31 = FUN_1000_1187();
  *(int *)(puVar18 + -8) = (int)((ulong)uVar31 >> 0x10);
  *(int *)(puVar18 + -10) = (int)uVar31;
  *(undefined2 *)(puVar22 + -2) = 0x1000;
  puVar23 = puVar22 + -4;
  *(undefined2 *)(puVar22 + -4) = 0x29e;
  uVar31 = FUN_1000_1169();
  *(int *)(puVar18 + -4) = (int)((ulong)uVar31 >> 0x10);
  *(int *)(puVar18 + -6) = (int)uVar31;
  *(undefined2 *)(puVar23 + -2) = *(undefined2 *)(puVar18 + -4);
  *(undefined2 *)(puVar23 + -4) = *(undefined2 *)(puVar18 + -6);
  *(undefined2 *)(puVar23 + -6) = *(undefined2 *)(puVar18 + -8);
  *(undefined2 *)(puVar23 + -8) = *(undefined2 *)(puVar18 + -10);
  *(undefined2 *)(puVar23 + -10) = 0x194;
  *(undefined2 *)(puVar23 + -0xc) = 0x2b7;
  FUN_1000_097b();
  return;
}



void FUN_1000_0121(undefined *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  int in_BX;
  byte *pbVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined2 uVar10;
  
  FUN_1000_01a5();
  (*pcRam00000424)(0x1000);
  iVar4 = 0;
  pbVar7 = (byte *)0x0;
  iVar6 = 0x2f;
  do {
    pbVar1 = pbVar7;
    iVar4 = CONCAT11((char)((uint)iVar4 >> 8) + CARRY1((byte)iVar4,*pbVar1),(byte)iVar4 + *pbVar1);
    pbVar7 = pbVar7 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (iVar4 != 0xd37) {
    FUN_1000_01da();
  }
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  param_1 = (undefined *)0x1f1;
  FUN_1000_01da();
  param_1 = (undefined *)0x3;
  cVar3 = FUN_1000_0121();
  pbVar1 = pbVar7 + in_BX;
  *pbVar1 = *pbVar1 + cVar3;
  uVar5 = 0x18e;
  uVar10 = 0;
  param_1 = (undefined *)register0x00000010;
  uVar8 = FUN_1000_08c3(0x1000,0xff71,0xffff);
  uVar9 = FUN_1000_10c6(0x1000,uVar5,uVar10,uVar8);
  FUN_1000_10cf(0x1000,uVar9,uVar8);
  uVar8 = FUN_1000_1187(0x1000);
  uVar9 = FUN_1000_1169(0x1000);
  FUN_1000_097b(0x194,uVar8,uVar9);
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
  _DAT_111b_0076 = unaff_ES;
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



void FUN_1000_01d2(void)

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



void __cdecl16near FUN_1000_01fa(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1000_08c3(0x1000,0xff71,0xffff);
  uVar2 = FUN_1000_10c6(0x1000,0x18e,0,uVar1);
  FUN_1000_10cf(0x1000,uVar2,uVar1);
  uVar1 = FUN_1000_1187(0x1000);
  uVar2 = FUN_1000_1169(0x1000);
  FUN_1000_097b(0x194,uVar1,uVar2);
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
  DAT_111b_0094 = (int)*(char *)(param_1 + 0x1a8);
  DAT_111b_01a6 = param_1;
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
  undefined2 uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  char **extraout_DX;
  int extraout_DX_00;
  int extraout_DX_01;
  char **ppcVar12;
  char *pcVar13;
  char *pcVar14;
  char **ppcVar15;
  undefined2 unaff_SS;
  bool bVar16;
  undefined uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  code *in_stack_00000000;
  char **appcStack4 [2];
  
  DAT_1000_032b = 0x111b;
  uVar7 = (uint)*(byte *)&DAT_111b_0080;
  puVar8 = (undefined *)(uVar7 + 1);
  pcVar13 = (char *)(DAT_111b_008a + 2);
  uVar10 = 1;
  ppcVar15 = DAT_111b_0090;
  ppcVar12 = DAT_111b_0090;
  DAT_1000_0329 = in_stack_00000000;
  if (2 < (byte)DAT_111b_0092) {
    uVar10 = 0x7f;
    pcVar14 = pcVar13;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar1 = pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (*pcVar1 != '\0');
    if (uVar10 == 0) goto LAB_1000_01e2;
    uVar10 = uVar10 ^ 0x7f;
    ppcVar15 = DAT_111b_008c;
  }
  puVar9 = (undefined *)(uVar7 + 2 + uVar10 & 0xfffe);
  iVar3 = -(int)puVar9;
  pcVar14 = &stack0x0000 + iVar3;
  if (puVar9 <= register0x00000010) {
    *(uint *)((int)appcStack4 + iVar3 + 2) = uVar10;
    while (uVar10 - 1 != 0) {
      pcVar2 = pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar1 = pcVar13;
      pcVar13 = pcVar13 + 1;
      *pcVar2 = *pcVar1;
      uVar10 = uVar10 - 1;
    }
    bVar16 = false;
    *pcVar14 = '\0';
    uVar17 = uVar10 == 0;
LAB_1000_039c:
    *(undefined2 *)((int)appcStack4 + iVar3) = 0x39f;
    bVar6 = FUN_1000_03b8();
    iVar11 = extraout_DX_00;
    if (bVar16 || (bool)uVar17) {
      do {
        uVar4 = DAT_1000_032b;
        if (bVar16) {
          iVar11 = *(int *)((int)appcStack4 + iVar3 + 2) + iVar11;
          *(uint *)&DAT_111b_0084 = uVar10;
          puVar8 = (undefined *)((uVar10 + 1) * 2);
          ppcVar12 = (char **)(&stack0x0000 + (uVar10 + 1) * -2);
          pcVar13 = (char *)register0x00000010;
          if (register0x00000010 < puVar8) goto LAB_1000_01e2;
          *(int **)&DAT_111b_0086 = (int *)ppcVar12;
          goto LAB_1000_0400;
        }
        *(undefined2 *)((int)appcStack4 + iVar3) = 0x3a6;
        bVar6 = FUN_1000_03b8();
        iVar11 = extraout_DX_01;
      } while (!bVar16 && !(bool)uVar17);
    }
    if ((bVar6 != 0x20) && (bVar6 != 0xd)) goto code_r0x000103b0;
    goto LAB_1000_03b4;
  }
LAB_1000_01e2:
  appcStack4[1] = (char **)0x1f1;
  FUN_1000_01da();
  appcStack4[1] = (char **)0x3;
  appcStack4[0] = (char **)0x1f8;
  cVar5 = FUN_1000_0121();
  pcVar1 = puVar8 + (int)pcVar13;
  *pcVar1 = *pcVar1 + cVar5;
  appcStack4[0] = (char **)0x0;
  appcStack4[1] = ppcVar12;
  uVar18 = FUN_1000_08c3(0x1000,0xff71,0xffff);
  uVar19 = FUN_1000_10c6(0x1000,0x18e,appcStack4[0],uVar18);
  appcStack4[0] = (char **)((ulong)uVar19 >> 0x10);
  FUN_1000_10cf(0x1000,uVar19,uVar18);
  appcStack4[0] = extraout_DX;
  uVar18 = FUN_1000_1187(0x1000);
  uVar19 = FUN_1000_1169(0x1000);
  appcStack4[0] = (char **)((ulong)uVar19 >> 0x10);
  FUN_1000_097b(0x194,uVar18,uVar19);
  return;
code_r0x000103b0:
  bVar16 = bVar6 < 9;
  uVar17 = bVar6 == 9;
  if ((bool)uVar17) {
LAB_1000_03b4:
    bVar16 = false;
    uVar17 = true;
  }
  goto LAB_1000_039c;
  while( true ) {
    *ppcVar12 = (char *)register0x00000010;
    ppcVar12 = ppcVar12 + 1;
    do {
      pcVar1 = (char *)register0x00000010;
      register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 1);
      bVar16 = *pcVar1 != '\0';
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0 && bVar16);
    if (bVar16) break;
LAB_1000_0400:
    if (iVar11 == 0) break;
  }
  *ppcVar12 = (char *)0x0;
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
  char cVar3;
  char *pcVar4;
  int iVar5;
  char **in_BX;
  char *unaff_SI;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  
  iVar5 = DAT_111b_008a;
  pcVar4 = (char *)FUN_1000_0569();
  uVar9 = DAT_111b_008c;
  if (pcVar4 != (char *)0x0) {
    unaff_SI = (char *)0x0;
    pcVar6 = pcVar4;
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar2 = pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar1 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      *pcVar2 = *pcVar1;
    }
    uVar9 = 0x111b;
    in_BX = (char **)FUN_1000_0569(DAT_111b_008e);
    DAT_111b_0088 = in_BX;
    if (in_BX != (char **)0x0) {
      iVar5 = -1;
      do {
        *in_BX = pcVar4;
        in_BX = in_BX + 1;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar1 = pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (*pcVar1 != '\0');
        if (*pcVar4 == '\0') {
          *in_BX = (char *)0x0;
          return;
        }
      } while( true );
    }
  }
  FUN_1000_01da();
  cVar3 = FUN_1000_0121(3);
  pcVar1 = (char *)((int)in_BX + (int)unaff_SI);
  *pcVar1 = *pcVar1 + cVar3;
  uVar9 = 0;
  uVar7 = FUN_1000_08c3(0x1000,0xff71,0xffff);
  uVar8 = FUN_1000_10c6(0x1000,0x18e,uVar9,uVar7);
  FUN_1000_10cf(0x1000,uVar8,uVar7);
  uVar7 = FUN_1000_1187(0x1000);
  uVar8 = FUN_1000_1169(0x1000);
  FUN_1000_097b(0x194,uVar7,uVar8);
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
  undefined auStack258 [256];
  
  if (param_1 < auStack258) {
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
  if ((param_2 + (uint)CARRY2(param_1,DAT_111b_009e) + (uint)(0xfeff < uVar1) != 0) ||
     (uVar2 = DAT_111b_009e, &stack0xfffe <= (undefined *)(uVar1 + 0x100))) {
    DAT_111b_0094 = 8;
    uVar2 = 0xffff;
    uVar1 = DAT_111b_009e;
  }
  DAT_111b_009e = uVar1;
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
  char cVar2;
  char *pcVar3;
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
      pcVar3 = local_86 + 1;
      cVar2 = *local_86;
      if (cVar2 == '\n') {
        *pcVar5 = '\r';
        pcVar5 = pcVar5 + 1;
      }
      *pcVar5 = cVar2;
      pcVar5 = pcVar5 + 1;
      local_86 = pcVar3;
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



void __cdecl16near FUN_1000_0857(uint param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 10) {
    iVar1 = (int)param_1 >> 0xf;
  }
  else {
    iVar1 = 0;
  }
  FUN_1000_07d8(param_1 & 0xff00 | 0x61,1,param_3,param_2,param_1,iVar1);
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



ulong FUN_1000_08c3(void)

{
  uint in_AX;
  int in_CX;
  int in_DX;
  uint in_BX;
  
  if (in_DX != 0) {
    in_DX = in_DX * in_BX;
  }
  if (in_CX != 0) {
    in_DX = in_DX + in_CX * in_AX;
  }
  return (ulong)in_AX * (ulong)in_BX & 0xffff |
         (ulong)(uint)((int)((ulong)in_AX * (ulong)in_BX >> 0x10) + in_DX) << 0x10;
}



void FUN_1000_08dc(void)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int unaff_SI;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar4 = 2;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  FUN_1000_01da();
  cVar3 = FUN_1000_0121();
  pcVar1 = (char *)(iVar4 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar3;
  uVar5 = FUN_1000_08c3(0x1000,0xff71);
  uVar6 = FUN_1000_10c6(0x1000,0x18e,0,uVar5);
  FUN_1000_10cf(0x1000,uVar6,uVar5);
  uVar5 = FUN_1000_1187(0x1000);
  uVar6 = FUN_1000_1169(0x1000);
  FUN_1000_097b(0x194,uVar5,uVar6);
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



int FUN_1000_0ba3(undefined4 *param_1,char *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  char *pcVar14;
  char cVar15;
  char *pcVar16;
  char *pcVar17;
  uint *puVar18;
  char *pcVar19;
  byte bVar20;
  char *pcVar21;
  int extraout_DX;
  int extraout_DX_00;
  char *extraout_DX_01;
  char cVar22;
  char *pcVar23;
  undefined4 *puVar24;
  uint *puVar25;
  int *piVar26;
  uint uVar27;
  undefined2 uVar28;
  uint unaff_SS;
  uint local_9a;
  undefined local_95;
  char *local_94;
  char *local_92;
  char local_8f;
  int local_8e;
  undefined local_8a;
  uint local_89 [23];
  int local_5a;
  char local_57;
  char local_56 [80];
  int local_6;
  int local_4;
  
  local_5a = 0;
  local_57 = 'P';
  local_4 = 0;
  pcVar23 = local_56;
LAB_1000_0c0d:
  pcVar17 = param_2 + 1;
  cVar15 = *param_2;
  if (cVar15 != '\0') {
    pcVar21 = pcVar17;
    if (cVar15 == '%') {
      pcVar21 = param_2 + 2;
      cVar15 = *pcVar17;
      if (cVar15 != '%') {
        pcVar19 = (char *)0x0;
        local_8e = 0;
        local_9a = 0;
        bVar12 = false;
        bVar11 = false;
        bVar10 = false;
        bVar9 = false;
        bVar6 = false;
        bVar7 = false;
        local_8f = '\0';
        local_94 = (char *)0xffff;
        local_92 = (char *)0xffff;
        do {
          bVar13 = false;
          if (0x5f < (byte)(cVar15 - 0x20U)) goto LAB_1000_109a;
          cVar4 = *(char *)((byte)(cVar15 - 0x20U) + 0x3c1);
          cVar22 = cVar4 * '\x02';
          bVar20 = (byte)((uint)pcVar19 >> 8);
          param_2 = pcVar21;
          uVar27 = unaff_SS;
          pcVar14 = local_94;
          pcVar5 = local_92;
          switch(cVar4) {
          case '\0':
            if (bVar20 != 0) goto LAB_1000_109a;
            if (local_8f != '+') {
              local_8f = cVar15;
            }
            break;
          case '\x01':
            if (bVar20 != 0) goto LAB_1000_109a;
            local_9a = 1;
            break;
          case '\x02':
            pcVar5 = *(char **)param_1;
            param_1 = (undefined4 *)((int)param_1 + 2);
            if (bVar20 < 2) {
              pcVar19 = (char *)0x300;
              pcVar14 = pcVar5;
              pcVar5 = local_92;
            }
            else {
              if (bVar20 != 4) goto LAB_1000_109a;
              pcVar19 = (char *)0x500;
            }
            break;
          case '\x03':
            if (bVar20 != 0) goto LAB_1000_109a;
            bVar7 = true;
            break;
          case '\x04':
            if (3 < bVar20) goto LAB_1000_109a;
            pcVar19 = (char *)0x400;
            break;
          case '\x05':
switchD_1000_0c70_caseD_5:
            pcVar16 = (char *)(int)(char)(cVar15 + -0x30);
            if (bVar20 < 3) {
              pcVar19 = (char *)0x200;
              pcVar14 = pcVar16;
              if (-1 < (int)local_94) {
                pcVar14 = pcVar16 + (int)local_94 * 10;
              }
            }
            else {
              if (bVar20 != 4) goto LAB_1000_109a;
              pcVar5 = pcVar16;
              if (-1 < (int)local_92) {
                pcVar5 = pcVar16 + (int)local_92 * 10;
              }
            }
            break;
          case '\x06':
            bVar6 = true;
            pcVar19 = (char *)0x500;
            break;
          case '\a':
            bVar12 = true;
            bVar6 = false;
            pcVar19 = (char *)0x500;
            break;
          case '\b':
            bVar11 = true;
            bVar6 = false;
            pcVar19 = (char *)0x500;
            break;
          case '\t':
            if (bVar20 != 0) goto switchD_1000_0c70_caseD_5;
            if (!bVar7) {
              bVar9 = true;
              pcVar19 = (char *)0x100;
            }
            break;
          case '\n':
            goto switchD_1000_0c70_caseD_a;
          case '\v':
            uVar28 = CONCAT11(8,cVar22);
            goto LAB_1000_0daa;
          case '\f':
            uVar28 = CONCAT11(10,cVar22);
            goto LAB_1000_0daf;
          case '\r':
            uVar28 = CONCAT11(0x10,cVar15 + -0x17);
LAB_1000_0daa:
            local_8f = '\0';
LAB_1000_0daf:
            local_95 = 0;
            pcVar17 = *(char **)param_1;
            pcVar21 = (char *)0x0;
            goto LAB_1000_0dd2;
          case '\x0e':
            puVar18 = (uint *)&local_8a;
            puVar24 = (undefined4 *)((int)param_1 + 2);
            if (bVar10) {
              FUN_1000_0b78(*(char **)(undefined4 *)((int)param_1 + 2),*(char **)param_1);
              puVar18 = local_89;
              local_8a = 0x3a;
              puVar24 = param_1 + 1;
            }
            param_1 = puVar24;
            FUN_1000_0b78();
            *(undefined *)puVar18 = 0;
            puVar25 = (uint *)&local_8a;
            pcVar19 = (char *)((int)puVar18 - (int)puVar25);
            goto LAB_1000_0f57;
          case '\x0f':
            pcVar19 = local_92;
            if ((int)local_92 < 0) {
              pcVar19 = (char *)((int)s_Turbo_C___Copyright__c__1988_Bor_111b_0004 + 2);
            }
            if (bVar11) {
              uVar28 = 2;
              local_6 = 4;
            }
            else if (bVar12) {
              uVar28 = 8;
              local_6 = 10;
            }
            else {
              local_6 = 8;
              uVar28 = 6;
            }
            thunk_FUN_1000_08dc(uVar28,local_9a,cVar15,local_89,pcVar19,param_1);
            puVar25 = local_89;
            param_1 = (undefined4 *)((int)param_1 + local_6);
            goto LAB_1000_0f57;
          case '\x10':
            puVar1 = param_1;
            param_1 = (undefined4 *)((int)param_1 + 2);
            puVar25 = local_89;
            local_89[0] = (uint)*(char **)puVar1 & 0xff;
            pcVar19 = (char *)0x1;
            goto LAB_1000_0f98;
          case '\x11':
            if (bVar10) {
              uVar8 = *param_1;
              uVar27 = (uint)((ulong)uVar8 >> 0x10);
              puVar25 = (uint *)uVar8;
              param_1 = param_1 + 1;
              puVar18 = (uint *)(uVar27 | (uint)puVar25);
            }
            else {
              puVar25 = *(uint **)param_1;
              param_1 = (undefined4 *)((int)param_1 + 2);
              uVar27 = 0x111b;
              puVar18 = puVar25;
            }
            if (puVar18 == (uint *)0x0) {
              uVar27 = 0x111b;
              puVar25 = (uint *)0x3aa;
            }
            FUN_1000_0bbc();
            if (local_92 < pcVar19) {
              pcVar19 = local_92;
            }
            goto LAB_1000_0f98;
          case '\x12':
            if (bVar10) {
              uVar8 = *param_1;
              uVar28 = (undefined2)((ulong)uVar8 >> 0x10);
              piVar26 = (int *)uVar8;
              param_1 = param_1 + 1;
            }
            else {
              piVar26 = *(int **)param_1;
              param_1 = (undefined4 *)((int)param_1 + 2);
              uVar28 = 0x111b;
            }
            *piVar26 = (uint)(byte)(0x50 - local_57) + local_5a;
            goto LAB_1000_0c0d;
          default:
            goto LAB_1000_109a;
          case '\x16':
            bVar10 = false;
            pcVar19 = (char *)0x500;
            break;
          case '\x17':
            bVar10 = true;
            pcVar19 = (char *)0x500;
          }
          local_92 = pcVar5;
          local_94 = pcVar14;
          pcVar3 = pcVar21;
          pcVar21 = pcVar21 + 1;
          cVar15 = *pcVar3;
        } while( true );
      }
    }
    *pcVar23 = cVar15;
    pcVar23 = pcVar23 + 1;
    cVar15 = local_57 + -1;
    bVar7 = local_57 < '\x01';
    param_2 = pcVar21;
    local_57 = cVar15;
    if (cVar15 == '\0' || bVar7) {
      FUN_1000_0bd1();
    }
    goto LAB_1000_0c0d;
  }
  goto LAB_1000_10a2;
switchD_1000_0c70_caseD_a:
  uVar28 = CONCAT11(10,cVar22);
  local_95 = 1;
  pcVar17 = *(char **)param_1;
  pcVar21 = (char *)((int)pcVar17 >> 0xf);
LAB_1000_0dd2:
  puVar24 = (undefined4 *)((int)param_1 + 2);
  if (bVar6) {
    pcVar21 = *(char **)puVar24;
    puVar24 = param_1 + 1;
  }
  puVar25 = local_89;
  param_1 = puVar24;
  if ((pcVar17 == (char *)0x0) && (pcVar21 == (char *)0x0)) {
    if (local_92 == (char *)0x0) {
      if ((local_94 != (char *)0x0) && (local_94 != (char *)0xffff)) {
        do {
          FUN_1000_0bc9();
          local_94 = local_94 + -1;
        } while (local_94 != (char *)0x0);
      }
      goto LAB_1000_0c0d;
    }
  }
  else {
    local_9a = local_9a | 4;
  }
  FUN_1000_07d8(uVar28,local_95,(char)((uint)uVar28 >> 8),puVar25,pcVar17,pcVar21);
  if ((int)local_92 < 1) {
LAB_1000_0f57:
    if ((!bVar9) || ((int)local_94 < 1)) goto LAB_1000_0f79;
  }
  FUN_1000_0bbc();
  if (*(char *)puVar25 == '-') {
    pcVar19 = pcVar19 + -1;
  }
  if (extraout_DX - (int)pcVar19 != 0 && (int)pcVar19 <= extraout_DX) {
    local_8e = extraout_DX - (int)pcVar19;
  }
LAB_1000_0f79:
  if ((local_8f != '\0') && (*(char *)puVar25 != '-')) {
    local_8e = local_8e + -1 + (uint)(local_8e == 0);
    puVar25 = (uint *)((int)puVar25 + -1);
    *(char *)puVar25 = local_8f;
  }
  FUN_1000_0bbc();
LAB_1000_0f98:
  if (local_9a == 5) {
    if (cVar15 == 'o') {
      if (local_8e < 1) {
        local_8e = 1;
      }
    }
    else if ((cVar15 == 'x') || (cVar15 == 'X')) {
      bVar13 = true;
      local_94 = local_94 + -2;
      bVar6 = local_8e < 2;
      local_8e = local_8e + -2;
      if (bVar6) {
        local_8e = 0;
      }
    }
  }
  pcVar19 = pcVar19 + local_8e;
  if (!bVar7) {
    for (; (int)pcVar19 < (int)local_94; local_94 = local_94 + -1) {
      FUN_1000_0bc9();
    }
  }
  if (bVar13) {
    FUN_1000_0bc9();
    FUN_1000_0bc9();
  }
  if (0 < local_8e) {
    pcVar19 = pcVar19 + -local_8e;
    local_94 = local_94 + -local_8e;
    cVar15 = *(char *)puVar25;
    if (((cVar15 == '-') || (cVar15 == ' ')) || (cVar15 == '+')) {
      puVar25 = (uint *)((int)puVar25 + 1);
      FUN_1000_0bc9();
      pcVar19 = pcVar19 + -1;
      local_94 = local_94 + -1;
      local_8e = extraout_DX_00;
    }
    for (; local_8e != 0; local_8e = local_8e + -1) {
      FUN_1000_0bc9();
      pcVar19 = extraout_DX_01;
    }
  }
  if (pcVar19 != (char *)0x0) {
    local_94 = local_94 + -(int)pcVar19;
    do {
      puVar2 = puVar25;
      puVar25 = (uint *)((int)puVar25 + 1);
      *pcVar23 = *(char *)puVar2;
      pcVar23 = pcVar23 + 1;
      cVar15 = local_57 + -1;
      bVar7 = local_57 < '\x01';
      local_57 = cVar15;
      if (cVar15 == '\0' || bVar7) {
        FUN_1000_0bd1();
      }
      pcVar19 = pcVar19 + -1;
    } while (pcVar19 != (char *)0x0);
  }
  if (0 < (int)local_94) {
    do {
      FUN_1000_0bc9();
      local_94 = local_94 + -1;
    } while (local_94 != (char *)0x0);
  }
  goto LAB_1000_0c0d;
LAB_1000_109a:
  do {
    FUN_1000_0bc9();
    pcVar3 = pcVar17;
    pcVar17 = pcVar17 + 1;
  } while (*pcVar3 != '\0');
LAB_1000_10a2:
  if (local_57 < 'P') {
    FUN_1000_0bd1();
  }
  if (local_4 != 0) {
    local_5a = -1;
  }
  return local_5a;
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



// WARNING: Removing unreachable block (ram,0x00011163)
// WARNING: Removing unreachable block (ram,0x00011142)

undefined4 FUN_1000_10c6(undefined2 param_1_00,int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  if ((param_4 == 0) && ((param_2 == 0 || (param_3 == 0)))) {
    param_1 = (int)(CONCAT22(param_2,param_1) / (ulong)param_3);
    param_2 = 0;
  }
  else {
    bVar6 = (int)param_2 < 0;
    if (bVar6) {
      bVar4 = param_1 != 0;
      param_1 = -param_1;
      param_2 = -(uint)bVar4 - param_2;
    }
    if ((int)param_4 < 0) {
      bVar4 = param_3 != 0;
      param_3 = -param_3;
      param_4 = -(uint)bVar4 - param_4;
      bVar6 = !bVar6;
    }
    iVar1 = 0x20;
    uVar3 = 0;
    uVar2 = 0;
    do {
      bVar4 = param_1 < 0;
      param_1 = param_1 * 2;
      bVar5 = (int)param_2 < 0;
      param_2 = param_2 << 1 | (uint)bVar4;
      bVar4 = (int)uVar2 < 0;
      uVar2 = uVar2 << 1 | (uint)bVar5;
      uVar3 = uVar3 << 1 | (uint)bVar4;
      if ((param_4 <= uVar3) && ((param_4 < uVar3 || (param_3 <= uVar2)))) {
        bVar4 = uVar2 < param_3;
        uVar2 = uVar2 - param_3;
        uVar3 = (uVar3 - param_4) - (uint)bVar4;
        param_1 = param_1 + 1;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if (bVar6) {
      bVar6 = param_1 != 0;
      param_1 = -param_1;
      param_2 = -(uint)bVar6 - param_2;
    }
  }
  return CONCAT22(param_2,param_1);
}



undefined4 FUN_1000_10cf(undefined2 param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  uVar3 = 2;
  if ((param_5 == 0) && ((param_3 == 0 || (param_4 == 0)))) {
    param_2 = (uint)(CONCAT22(param_3,param_2) % (ulong)param_4);
    param_3 = 0;
  }
  else {
    if ((int)param_3 < 0) {
      bVar5 = param_2 != 0;
      param_2 = -param_2;
      param_3 = -(uint)bVar5 - param_3;
      uVar3 = 0xe;
    }
    if ((int)param_5 < 0) {
      bVar5 = param_4 != 0;
      param_4 = -param_4;
      param_5 = -(uint)bVar5 - param_5;
      uVar3 = uVar3 ^ 4;
    }
    iVar1 = 0x20;
    uVar4 = 0;
    uVar2 = 0;
    do {
      bVar5 = (int)param_2 < 0;
      param_2 = param_2 * 2;
      bVar6 = (int)param_3 < 0;
      param_3 = param_3 << 1 | (uint)bVar5;
      bVar5 = (int)uVar2 < 0;
      uVar2 = uVar2 << 1 | (uint)bVar6;
      uVar4 = uVar4 << 1 | (uint)bVar5;
      if ((param_5 <= uVar4) && ((param_5 < uVar4 || (param_4 <= uVar2)))) {
        bVar5 = uVar2 < param_4;
        uVar2 = uVar2 - param_4;
        uVar4 = (uVar4 - param_5) - (uint)bVar5;
        param_2 = param_2 + 1;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if ((uVar3 & 2) != 0) {
      uVar3 = uVar3 >> 1;
      param_2 = uVar2;
      param_3 = uVar4;
    }
    if ((uVar3 & 4) != 0) {
      bVar5 = param_2 != 0;
      param_2 = -param_2;
      param_3 = -(uint)bVar5 - param_3;
    }
  }
  return CONCAT22(param_3,param_2);
}



undefined4 FUN_1000_1169(void)

{
  uint in_AX;
  byte in_CL;
  int in_DX;
  
  if (in_CL < 0x10) {
    return CONCAT22(in_DX >> (in_CL & 0x1f),in_AX >> (in_CL & 0x1f) | in_DX << (0x10 - in_CL & 0x1f)
                   );
  }
  return CONCAT22(in_DX >> 0xf,in_DX >> (in_CL - 0x10 & 0x1f));
}



long FUN_1000_1187(void)

{
  uint in_AX;
  byte in_CL;
  int in_DX;
  
  if (in_CL < 0x10) {
    return CONCAT22(in_DX << (in_CL & 0x1f) | in_AX >> (0x10 - in_CL & 0x1f),in_AX << (in_CL & 0x1f)
                   );
  }
  return (ulong)(in_AX << (in_CL - 0x10 & 0x1f)) << 0x10;
}


