typedef unsigned char   undefined;

typedef unsigned int    uint;
typedef unsigned char    undefined1;
typedef unsigned int    undefined2;



// WARNING: Stack frame is not setup normally: Input value of stackpointer is not used
// WARNING: This function may have set the stack pointer

void entry(void)

{
  int *piVar1;
  uint *puVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined *puVar5;
  uint uVar6;
  code *pcVar7;
  char cVar8;
  int iVar9;
  undefined2 uVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined *puVar14;
  int *piVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  byte *unaff_SI;
  int *piVar21;
  int *piVar22;
  undefined *puVar23;
  int iVar24;
  undefined2 unaff_ES;
  undefined2 uVar25;
  undefined2 uVar26;
  undefined4 uVar27;
  
  uVar26 = 0x163;
  puVar14 = (undefined *)&DAT_111b_0080;
                    // WARNING: Read-only address (ram,0x000101f8) is written
  uRam000101f8 = 0x111b;
  pcVar7 = (code *)swi(0x21);
  uVar27 = (*pcVar7)();
  uVar25 = s_Turbo_C___Copyright__c__1988_Bor_111b_0004._40_2_;
  puVar20 = DAT_111b_0002;
  iVar9 = (int)((ulong)uVar27 >> 0x10);
  *(undefined2 *)&DAT_111b_0092 = (int)uVar27;
  *(undefined2 *)&DAT_111b_0090 = unaff_ES;
  *(undefined2 *)&DAT_111b_008c = uVar25;
  *(undefined **)(int *)&DAT_111b_00ac = puVar20;
  *(undefined2 *)&DAT_111b_0096 = 0xffff;
  *(undefined2 *)(puVar14 + -2) = 0x2e;
  FUN_1000_0162();
  uVar27 = *(undefined4 *)&DAT_111b_008a;
  uVar25 = (undefined2)((ulong)uVar27 >> 0x10);
  piVar21 = (int *)uVar27;
  uVar12 = 0x7fff;
  piVar22 = piVar21;
  do {
    if (((*piVar22 == 0x3738) && (iVar13 = piVar22[1], (char)iVar13 == '=')) &&
       (piVar1 = (int *)&DAT_111b_0096, *piVar1 = *piVar1 + 1,
       ((byte)((uint)iVar13 >> 8) & 0xdf) == 0x59)) {
      piVar1 = (int *)&DAT_111b_0096;
      *piVar1 = *piVar1 + 1;
    }
    do {
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      piVar1 = piVar22;
      piVar22 = (int *)((int)piVar22 + 1);
    } while ((char)uVar27 != *(char *)piVar1);
    if (uVar12 == 0) goto LAB_1000_01e9;
    piVar21 = (int *)((int)piVar21 + 1);
  } while (*(char *)piVar22 != (char)uVar27);
  *(int *)&DAT_111b_008a = -(uVar12 | 0x8000);
  piVar21 = (int *)((int)piVar21 * 2 + 8U & 0xfff8);
  *(int **)&DAT_111b_008e = piVar21;
  puVar20 = puVar20 + -iVar9;
  uVar12 = *(uint *)&DAT_111b_020a;
  if (uVar12 < 0x200) {
    uVar12 = 0x200;
    *(undefined2 *)&DAT_111b_020a = 0x200;
  }
  if ((uVar12 < 0xfb8a) && (puVar2 = (uint *)&DAT_111b_0208, !CARRY2(uVar12 + 0x476,*puVar2))) {
    bVar11 = 4;
    puVar23 = (undefined *)((uVar12 + 0x476 + *puVar2 >> 4) + 1);
    if (puVar23 <= puVar20) {
      if (((*(int *)&DAT_111b_020a == 0) || (*(int *)&DAT_111b_0208 == 0)) &&
         (puVar23 = (undefined *)0x1000, puVar20 < (undefined *)0x1001)) {
        puVar23 = puVar20;
      }
      puVar20 = puVar23 + iVar9;
      *(undefined **)(int *)&DAT_111b_00a4 = puVar20;
      *(undefined **)(int *)&DAT_111b_00a8 = puVar20;
      piVar21 = (int *)(puVar20 + -*(int *)&DAT_111b_0090);
      piVar15 = (int *)(puVar14 + -2);
      *(undefined **)(puVar14 + -2) = puVar23;
      pcVar7 = (code *)swi(0x21);
      (*pcVar7)();
      iVar24 = *piVar15 << (bVar11 & 0x1f);
      puVar20 = (undefined *)&DAT_111b_0430;
      iVar13 = 0x46;
      while (iVar13 != 0) {
        iVar13 = iVar13 + -1;
        puVar5 = puVar20;
        puVar20 = puVar20 + 1;
        *puVar5 = 0;
      }
      *(undefined2 *)(iVar24 + -2) = 0x1000;
      puVar16 = (undefined *)(iVar24 + -4);
      *(undefined2 *)(iVar24 + -4) = 0xf8;
      (**(code **)&DAT_111b_0422)();
      puVar17 = puVar16 + -2;
      *(undefined2 *)(puVar16 + -2) = 0xfb;
      FUN_1000_032f();
      *(undefined2 *)(puVar17 + -2) = 0xfe;
      FUN_1000_041a();
      pcVar7 = (code *)swi(0x1a);
      (*pcVar7)();
      *(undefined2 *)&DAT_111b_0098 = extraout_DX_00;
      *(int *)&DAT_111b_009a = iVar13;
      puVar18 = puVar17 + -2;
      *(undefined2 *)(puVar17 + -2) = 0x10e;
      (**(code **)&DAT_111b_0426)();
      *(undefined2 *)(puVar18 + -2) = *(undefined2 *)&DAT_111b_0088;
      *(undefined2 *)(puVar18 + -4) = *(undefined2 *)&DAT_111b_0086;
      *(undefined2 *)(puVar18 + -6) = *(undefined2 *)&DAT_111b_0084;
      *(undefined2 *)(puVar18 + -8) = 0x11d;
      uVar25 = FUN_1000_01fa();
      *(undefined2 *)(puVar18 + -8) = uVar25;
      *(undefined2 *)(puVar18 + -10) = 0x121;
      FUN_1000_02fa();
      *(undefined2 *)(puVar18 + -10) = 0x129;
      FUN_1000_01a5();
      *(undefined2 *)(puVar18 + -10) = 0x1000;
      puVar20 = puVar18 + -0xc;
      *(undefined2 *)(puVar18 + -0xc) = 0x12e;
      (*pcRam00000424)();
      iVar9 = 0;
      unaff_SI = (byte *)0x0;
      iVar13 = 0x2f;
      do {
        pbVar3 = unaff_SI;
        iVar9 = CONCAT11((char)((uint)iVar9 >> 8) + CARRY1((byte)iVar9,*pbVar3),
                         (byte)iVar9 + *pbVar3);
        unaff_SI = unaff_SI + 1;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      if (iVar9 != 0xd37) {
        *(undefined2 *)(puVar20 + -2) = 0x14f;
        FUN_1000_01da();
      }
      pcVar7 = (code *)swi(0x21);
      puVar14 = puVar20;
      (*pcVar7)();
      uVar26 = extraout_DX;
    }
  }
LAB_1000_01e9:
  *(undefined2 *)(puVar14 + -2) = 0x1f1;
  FUN_1000_01da();
  *(undefined2 *)(puVar14 + -2) = 3;
  puVar19 = puVar14 + -4;
  *(undefined2 *)(puVar14 + -4) = 0x1f8;
  cVar8 = FUN_1000_0121();
  pcVar4 = (char *)((int)piVar21 + (int)unaff_SI);
  *pcVar4 = *pcVar4 + cVar8;
  *(undefined **)(puVar19 + -2) = puVar20;
  *(undefined2 *)(puVar19 + -8) = 0;
  *(undefined2 *)(puVar19 + -10) = 0xff;
  *(undefined2 *)(puVar19 + -4) = 0;
  *(undefined2 *)(puVar19 + -6) = 0x8f;
  uVar12 = *(uint *)(puVar19 + -10);
  uVar6 = *(uint *)(puVar19 + -6);
  *(uint *)(puVar19 + -4) =
       *(int *)(puVar19 + -8) + *(int *)(puVar19 + -4) +
       (uint)CARRY2(uVar12,*(uint *)(puVar19 + -6));
  *(uint *)(puVar19 + -6) = uVar12 + uVar6;
  uVar12 = *(uint *)(puVar19 + -10);
  uVar6 = *(uint *)(puVar19 + -6);
  *(uint *)(puVar19 + -8) =
       (*(int *)(puVar19 + -8) - *(int *)(puVar19 + -4)) - (uint)(uVar12 < *(uint *)(puVar19 + -6));
  *(uint *)(puVar19 + -10) = uVar12 - uVar6;
  uVar25 = *(undefined2 *)(puVar19 + -8);
  *(undefined2 *)(puVar19 + -0xc) = 0x1000;
  *(undefined2 *)(puVar19 + -0xe) = 0x249;
  uVar10 = FUN_1000_08c3();
  *(undefined2 *)(puVar19 + -8) = uVar25;
  *(undefined2 *)(puVar19 + -10) = uVar10;
  *(undefined2 *)(puVar19 + -0xc) = *(undefined2 *)(puVar19 + -8);
  *(undefined2 *)(puVar19 + -0xe) = *(undefined2 *)(puVar19 + -10);
  *(undefined2 *)(puVar19 + -0x10) = *(undefined2 *)(puVar19 + -4);
  *(undefined2 *)(puVar19 + -0x12) = *(undefined2 *)(puVar19 + -6);
  *(undefined2 *)(puVar19 + -0x14) = 0x1000;
  *(undefined2 *)(puVar19 + -0x16) = 0x260;
  uVar27 = FUN_1000_10c6();
  *(int *)(puVar19 + -4) = (int)((ulong)uVar27 >> 0x10);
  *(int *)(puVar19 + -6) = (int)uVar27;
  *(undefined2 *)(puVar19 + -0xc) = *(undefined2 *)(puVar19 + -8);
  *(undefined2 *)(puVar19 + -0xe) = *(undefined2 *)(puVar19 + -10);
  *(undefined2 *)(puVar19 + -0x10) = *(undefined2 *)(puVar19 + -4);
  *(undefined2 *)(puVar19 + -0x12) = *(undefined2 *)(puVar19 + -6);
  *(undefined2 *)(puVar19 + -0x14) = 0x1000;
  *(undefined2 *)(puVar19 + -0x16) = 0x277;
  uVar27 = FUN_1000_10cf();
  *(int *)(puVar19 + -4) = (int)((ulong)uVar27 >> 0x10);
  *(int *)(puVar19 + -6) = (int)uVar27;
  uVar25 = *(undefined2 *)(puVar19 + -8);
  *(undefined2 *)(puVar19 + -0xc) = 0x1000;
  *(undefined2 *)(puVar19 + -0xe) = 0x28a;
  uVar10 = FUN_1000_1187();
  *(undefined2 *)(puVar19 + -8) = uVar25;
  *(undefined2 *)(puVar19 + -10) = uVar10;
  uVar25 = *(undefined2 *)(puVar19 + -4);
  *(undefined2 *)(puVar19 + -0xc) = 0x1000;
  *(undefined2 *)(puVar19 + -0xe) = 0x29e;
  uVar10 = FUN_1000_1169();
  *(undefined2 *)(puVar19 + -4) = uVar25;
  *(undefined2 *)(puVar19 + -6) = uVar10;
  *(undefined2 *)(puVar19 + -0xc) = *(undefined2 *)(puVar19 + -4);
  *(undefined2 *)(puVar19 + -0xe) = *(undefined2 *)(puVar19 + -6);
  *(undefined2 *)(puVar19 + -0x10) = *(undefined2 *)(puVar19 + -8);
  *(undefined2 *)(puVar19 + -0x12) = *(undefined2 *)(puVar19 + -10);
  *(undefined2 *)(puVar19 + -0x14) = 0x194;
  *(undefined2 *)(puVar19 + -0x16) = 0x2b7;
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
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  int in_BX;
  byte *pbVar11;
  undefined4 uVar12;
  
  FUN_1000_01a5();
  (*pcRam00000424)(0x1000);
  iVar4 = 0;
  pbVar11 = (byte *)0x0;
  iVar8 = 0x2f;
  do {
    pbVar1 = pbVar11;
    iVar4 = CONCAT11((char)((uint)iVar4 >> 8) + CARRY1((byte)iVar4,*pbVar1),(byte)iVar4 + *pbVar1);
    pbVar11 = pbVar11 + 1;
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
  pbVar1 = pbVar11 + in_BX;
  *pbVar1 = *pbVar1 + cVar3;
  uVar5 = 0x18e;
  uVar7 = 0;
  uVar9 = 0xffff;
  param_1 = (undefined *)register0x00000010;
  uVar6 = FUN_1000_08c3(0xff71,0xffff);
  uVar12 = FUN_1000_10c6(uVar5,uVar7,uVar6,uVar9);
  uVar12 = FUN_1000_10cf(uVar12,uVar6,uVar9);
  uVar10 = (undefined2)((ulong)uVar12 >> 0x10);
  uVar7 = FUN_1000_1187(uVar6,uVar9,(int)uVar12);
  uVar5 = FUN_1000_1169(uVar7,uVar9);
  FUN_1000_097b(0x194,uVar7,uVar9,uVar5,uVar10);
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



void __cdecl16near FUN_1000_01fa(void)

{
  undefined2 local_6;
  undefined2 local_a;
  undefined2 local_4;
  undefined2 local_8;
  undefined2 uVar1;
  undefined4 uVar2;
  
  local_6 = 0x18e;
  local_4 = 0;
  local_8 = 0xffff;
  local_a = FUN_1000_08c3(0xff71,0xffff);
  uVar2 = FUN_1000_10c6(local_6,local_4,local_a,local_8);
  uVar2 = FUN_1000_10cf(uVar2,local_a,local_8);
  uVar1 = (undefined2)((ulong)uVar2 >> 0x10);
  local_4 = FUN_1000_1187(local_a,local_8,uVar2);
  local_6 = FUN_1000_1169(local_4,local_8);
  FUN_1000_097b(0x194,local_4,local_8,local_6,uVar1);
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
  else {
    if (param_1 < 0x59) goto LAB_1000_02d1;
  }
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
  char cVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  uint uVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  undefined2 uVar12;
  int extraout_DX;
  int extraout_DX_00;
  undefined *puVar13;
  char **ppcVar14;
  char *pcVar15;
  char *pcVar16;
  char **ppcVar17;
  undefined2 unaff_SS;
  bool bVar18;
  bool bVar19;
  undefined4 uVar20;
  code *in_stack_00000000;
  char **ppcStack4;
  char **ppcStack2;
  
  DAT_1000_032b = 0x111b;
  uVar8 = (uint)*(byte *)&DAT_111b_0080;
  puVar13 = (undefined *)(uVar8 + 1);
  pcVar15 = (char *)(DAT_111b_008a + 2);
  uVar10 = 1;
  ppcVar17 = DAT_111b_0090;
  ppcVar14 = DAT_111b_0090;
  DAT_1000_0329 = in_stack_00000000;
  if (2 < (byte)DAT_111b_0092) {
    uVar10 = 0x7f;
    pcVar16 = pcVar15;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar1 = pcVar16;
      pcVar16 = pcVar16 + 1;
    } while (*pcVar1 != '\0');
    if (uVar10 == 0) goto LAB_1000_01e2;
    uVar10 = uVar10 ^ 0x7f;
    ppcVar17 = DAT_111b_008c;
  }
  puVar9 = (undefined *)(uVar8 + 2 + uVar10 & 0xfffe);
  iVar3 = -(int)puVar9;
  pcVar16 = &stack0x0000 + iVar3;
  if (puVar9 <= register0x00000010) {
    *(uint *)((int)&ppcStack2 + iVar3) = uVar10;
    while (uVar10 - 1 != 0) {
      pcVar2 = pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar1 = pcVar15;
      pcVar15 = pcVar15 + 1;
      *pcVar2 = *pcVar1;
      uVar10 = uVar10 - 1;
    }
    bVar18 = false;
    *pcVar16 = '\0';
    bVar19 = uVar10 == 0;
LAB_1000_039c:
    *(char ***)((int)&ppcStack4 + iVar3) = 0x39f;
    bVar5 = FUN_1000_03b8();
    iVar11 = extraout_DX;
    if (bVar18 || bVar19) {
      do {
        uVar6 = DAT_1000_032b;
        if (bVar18) {
          iVar11 = *(uint *)((int)&ppcStack2 + iVar3) + iVar11;
          *(uint *)&DAT_111b_0084 = uVar10;
          puVar13 = (undefined *)((uVar10 + 1) * 2);
          ppcVar14 = (char **)(&stack0x0000 + (uVar10 + 1) * -2);
          pcVar15 = (char *)register0x00000010;
          if (register0x00000010 < puVar13) goto LAB_1000_01e2;
          *(char ***)(int **)&DAT_111b_0086 = ppcVar14;
          goto LAB_1000_0400;
        }
        *(char ***)((int)&ppcStack4 + iVar3) = 0x3a6;
        bVar5 = FUN_1000_03b8();
        iVar11 = extraout_DX_00;
      } while (!bVar18 && !bVar19);
    }
    if ((bVar5 != 0x20) && (bVar5 != 0xd)) goto code_r0x000103b0;
    goto LAB_1000_03b4;
  }
LAB_1000_01e2:
  ppcStack2 = (char **)0x1f1;
  FUN_1000_01da();
  ppcStack2 = (char **)0x3;
  ppcStack4 = (char **)0x1f8;
  cVar4 = FUN_1000_0121();
  pcVar1 = puVar13 + (int)pcVar15;
  *pcVar1 = *pcVar1 + cVar4;
  uVar6 = 0x18e;
  ppcStack4 = (char **)0x0;
  uVar12 = 0xffff;
  ppcStack2 = ppcVar14;
  uVar7 = FUN_1000_08c3(0xff71,0xffff);
  uVar20 = FUN_1000_10c6(uVar6,ppcStack4,uVar7,uVar12);
  ppcStack4 = (char **)((ulong)uVar20 >> 0x10);
  uVar20 = FUN_1000_10cf(uVar20,uVar7,uVar12);
  ppcStack4 = (char **)((ulong)uVar20 >> 0x10);
  uVar6 = FUN_1000_1187(uVar7,uVar12,(int)uVar20);
  uVar7 = FUN_1000_1169(uVar6,uVar12);
  FUN_1000_097b(0x194,uVar6,uVar12,uVar7,ppcStack4);
  return;
code_r0x000103b0:
  bVar18 = bVar5 < 9;
  bVar19 = bVar5 == 9;
  if (bVar19) {
LAB_1000_03b4:
    bVar18 = false;
    bVar19 = true;
  }
  goto LAB_1000_039c;
  while( true ) {
    *(BADSPACEBASE **)ppcVar14 = register0x00000010;
    ppcVar14 = ppcVar14 + 1;
    do {
      pcVar1 = (char *)register0x00000010;
      register0x00000010 = (BADSPACEBASE *)((char *)register0x00000010 + 1);
      bVar18 = *pcVar1 != '\0';
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0 && bVar18);
    if (bVar18) break;
LAB_1000_0400:
    if (iVar11 == 0) break;
  }
  *ppcVar14 = (char *)0x0;
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
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  char **in_BX;
  char *unaff_SI;
  char *pcVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined2 uVar12;
  
  iVar6 = DAT_111b_008a;
  pcVar10 = (char *)FUN_1000_0569();
  uVar12 = DAT_111b_008c;
  if (pcVar10 != (char *)0x0) {
    unaff_SI = (char *)0x0;
    pcVar9 = pcVar10;
    while (iVar6 != 0) {
      iVar6 = iVar6 + -1;
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar1 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      *pcVar2 = *pcVar1;
    }
    uVar12 = 0x111b;
    in_BX = (char **)FUN_1000_0569(DAT_111b_008e);
    DAT_111b_0088 = in_BX;
    if (in_BX != (char **)0x0) {
      iVar6 = -1;
      do {
        *in_BX = pcVar10;
        in_BX = in_BX + 1;
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar1 = pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (*pcVar1 != '\0');
        if (*pcVar10 == '\0') {
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
  uVar4 = 0x18e;
  uVar12 = 0;
  uVar7 = 0xffff;
  uVar5 = FUN_1000_08c3(0xff71,0xffff);
  uVar11 = FUN_1000_10c6(uVar4,uVar12,uVar5,uVar7);
  uVar11 = FUN_1000_10cf(uVar11,uVar5,uVar7);
  uVar8 = (undefined2)((ulong)uVar11 >> 0x10);
  uVar12 = FUN_1000_1187(uVar5,uVar7,uVar11);
  uVar4 = FUN_1000_1169(uVar12,uVar7);
  FUN_1000_097b(0x194,uVar12,uVar7,uVar4,uVar8);
  return;
}



uint __cdecl16near FUN_1000_0464(undefined2 param_1)

{
  bool bVar1;
  
  bVar1 = DAT_111b_020c != 0x20;
  if (bVar1) {
    *(undefined2 *)(DAT_111b_020c * 2 + 0x430) = param_1;
    DAT_111b_020c = DAT_111b_020c + 1;
  }
  return (uint)!bVar1;
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
  *(int **)(piVar3 + 1) = param_1;
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
    *(int **)(piVar1 + 1) = DAT_111b_0470;
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
  undefined2 uVar2;
  uint uVar3;
  uint *puVar4;
  
  if ((param_1 == 0) || (0xfff4 < param_1)) {
    uVar2 = 0;
  }
  else {
    uVar3 = param_1 + 0xb & 0xfff8;
    if (DAT_111b_0474 == 0) {
      uVar2 = FUN_1000_052f(uVar3);
    }
    else {
      puVar4 = DAT_111b_0472;
      if (DAT_111b_0472 != (uint *)0x0) {
        do {
          if (uVar3 + 0x28 <= *puVar4) {
            uVar2 = FUN_1000_04b8(puVar4,uVar3);
            return (uint *)uVar2;
          }
          if (uVar3 <= *puVar4) {
            FUN_1000_048a(puVar4);
            puVar1 = puVar4;
            *puVar1 = *puVar1 + 1;
            return puVar4 + 2;
          }
          puVar4 = (uint *)puVar4[3];
        } while (puVar4 != DAT_111b_0472);
      }
      uVar2 = FUN_1000_04f2(uVar3);
    }
  }
  return (uint *)uVar2;
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

char * __cdecl16near FUN_1000_0654(int param_1,char *param_2,char *param_3)

{
  uint *puVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *local_8a;
  char *local_86;
  char local_84 [130];
  
  if (param_3 + 1 < (char *)0x2) {
    param_3 = (char *)0x0;
  }
  else {
    if ((*(uint *)(param_1 * 2 + 0x34e) & 0x8000) == 0) {
      puVar1 = (uint *)(param_1 * 2 + 0x34e);
      *puVar1 = *puVar1 & 0xfdff;
      local_86 = param_2;
      local_8a = param_3;
      pcVar4 = local_84;
      while (local_8a != (char *)0x0) {
        local_8a = local_8a + -1;
        pcVar3 = local_86 + 1;
        cVar2 = *local_86;
        if (cVar2 == '\n') {
          *pcVar4 = '\r';
          pcVar4 = pcVar4 + 1;
        }
        *pcVar4 = cVar2;
        pcVar4 = pcVar4 + 1;
        local_86 = pcVar3;
        if (0x7f < (int)(pcVar4 + -(int)local_84)) {
          pcVar4 = pcVar4 + -(int)local_84;
          pcVar3 = (char *)FUN_1000_0767(param_1,local_84,pcVar4);
          if (pcVar3 != pcVar4) {
            return pcVar3 + (int)(param_3 + (-(int)pcVar4 - (int)local_8a));
          }
          pcVar4 = local_84;
        }
      }
      pcVar4 = pcVar4 + -(int)local_84;
      if ((pcVar4 != (char *)0x0) &&
         (pcVar3 = (char *)FUN_1000_0767(param_1,local_84,pcVar4), pcVar3 != pcVar4)) {
        param_3 = pcVar3 + (int)(param_3 + -(int)pcVar4);
      }
    }
    else {
      param_3 = (char *)FUN_1000_0767(param_1,param_2,param_3);
    }
  }
  return param_3;
}



undefined2 __cdecl16near FUN_1000_0767(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined2 uVar3;
  bool bVar4;
  
  bVar4 = false;
  if ((*(uint *)(param_1 * 2 + 0x34e) & 0x800) != 0) {
    bVar4 = false;
    FUN_1000_07ad(param_1,0,0,2);
  }
  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  if (bVar4) {
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
  byte *pbVar5;
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
      param_5 = (uint)(uVar3 / (ulong)param_3);
      *pbVar6 = (byte)(uVar3 % (ulong)param_3);
      pbVar6 = pbVar6 + 1;
    } while (param_6 != 0);
    while (param_5 != 0) {
LAB_1000_0822:
      *pbVar6 = (byte)(param_5 % param_3);
      pbVar6 = pbVar6 + 1;
      param_5 = param_5 / param_3;
    }
    pbVar5 = pbVar6 + -(int)local_24;
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
      pbVar5 = pbVar5 + -1;
    } while (pbVar5 != (byte *)0x0);
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
  FUN_1000_07d8(param_1 & 0xff00 | 0x61,CONCAT11((char)(param_1 >> 8),1),param_3,param_2,param_1,
                iVar1);
  return;
}



void __cdecl16near
FUN_1000_0880(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  uint in_AX;
  
  FUN_1000_07d8(CONCAT11((char)(in_AX >> 8),0x61),in_AX & 0xff00,param_4,param_3,param_1,param_2);
  return;
}



void __cdecl16near
FUN_1000_089c(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  FUN_1000_07d8(0x61,(uint)(param_4 == 10),param_4,param_3,param_1,param_2);
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
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 extraout_DX;
  int iVar8;
  int unaff_SI;
  undefined4 uVar9;
  
  iVar8 = 2;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  FUN_1000_01da();
  cVar3 = FUN_1000_0121();
  pcVar1 = (char *)(iVar8 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar3;
  uVar7 = 0xffff;
  uVar4 = FUN_1000_08c3(0xff71);
  uVar9 = FUN_1000_10c6(0x18e,0,uVar4,uVar7);
  FUN_1000_10cf(uVar9,uVar4,uVar7);
  uVar5 = FUN_1000_1187();
  uVar4 = extraout_DX;
  uVar6 = FUN_1000_1169(uVar5);
  FUN_1000_097b(0x194,uVar5,uVar7,uVar6,uVar4);
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



uint __cdecl16near FUN_1000_09ad(undefined param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  byte local_3;
  
  piVar3 = param_2;
  local_3 = param_1;
  while( true ) {
    piVar1 = piVar3;
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (SCARRY2(iVar4,1) != *piVar1 < 0) {
      piVar1 = piVar3 + 5;
      *piVar1 = *piVar1 + 1;
      *(byte *)(piVar3[5] + -1) = local_3;
      if (((piVar3[1] & 8U) != 0) &&
         (((local_3 == 10 || (local_3 == 0xd)) && (iVar4 = FUN_1000_08fd(piVar3), iVar4 != 0)))) {
        return 0xffff;
      }
      return (uint)local_3;
    }
    piVar1 = piVar3;
    *piVar1 = *piVar1 + -1;
    if (((piVar3[1] & 0x90U) != 0) || ((piVar3[1] & 2U) == 0)) {
      puVar2 = (uint *)(piVar3 + 1);
      *puVar2 = *puVar2 | 0x10;
      return 0xffff;
    }
    puVar2 = (uint *)(piVar3 + 1);
    *puVar2 = *puVar2 | 0x100;
    if (piVar3[3] == 0) break;
    if (*piVar3 == 0) {
      *piVar3 = -1 - piVar3[3];
    }
    else {
      iVar4 = FUN_1000_08fd(piVar3);
      if (iVar4 != 0) {
        return 0xffff;
      }
    }
  }
  if (((((local_3 == 10) && ((piVar3[1] & 0x40U) == 0)) &&
       (iVar4 = FUN_1000_0767((int)*(char *)(piVar3 + 2),0x3a8,1), iVar4 != 1)) ||
      (iVar4 = FUN_1000_0767((int)*(char *)(piVar3 + 2),&param_1,1), iVar4 != 1)) &&
     ((piVar3[1] & 0x200U) == 0)) {
    puVar2 = (uint *)(piVar3 + 1);
    *puVar2 = *puVar2 | 0x10;
    return 0xffff;
  }
  return (uint)local_3;
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
    else {
      if ((*param_1 == 0) || (iVar3 = FUN_1000_08fd(param_1), iVar3 == 0)) {
        uVar4 = FUN_1000_0767((int)*(char *)(param_1 + 2),param_3,param_2);
        if (uVar4 < param_2) {
          param_2 = 0;
        }
      }
      else {
        param_2 = 0;
      }
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
  *unaff_DI = *(undefined *)(ulong)((uint)(bVar1 >> 4) + 0x3b1);
  unaff_DI[1] = *(undefined *)(ulong)((uint)(bVar1 & 0xf) + 0x3b1);
  unaff_DI[2] = *(undefined *)(ulong)((uint)(byte)((byte)param_1 >> 4) + 0x3b1);
  unaff_DI[3] = *(undefined *)(ulong)((uint)((byte)param_1 & 0xf) + 0x3b1);
  return;
}



int FUN_1000_0ba3(undefined4 *param_1,byte *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte *pbVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  uint *puVar14;
  char *pcVar15;
  uint *puVar16;
  uint *puVar17;
  byte bVar19;
  int iVar18;
  char *pcVar20;
  int extraout_DX;
  int extraout_DX_00;
  int extraout_DX_01;
  char cVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined4 *puVar25;
  uint *puVar26;
  int *piVar27;
  uint uVar28;
  undefined2 uVar29;
  uint unaff_SS;
  uint local_9a;
  byte local_95;
  uint *local_94;
  uint *local_92;
  byte local_8f;
  int local_8e;
  undefined local_8a;
  uint local_89 [23];
  int local_5a;
  char local_57;
  byte local_56 [80];
  int local_6;
  int local_4;
  
  local_5a = 0;
  local_57 = 'P';
  local_4 = 0;
  pbVar24 = local_56;
LAB_1000_0c0d:
  pbVar23 = param_2 + 1;
  bVar13 = *param_2;
  if (bVar13 != 0) {
    pbVar22 = pbVar23;
    if (bVar13 == 0x25) {
      pbVar22 = param_2 + 2;
      bVar13 = *pbVar23;
      if (bVar13 != 0x25) {
        puVar17 = (uint *)0x0;
        local_8e = 0;
        local_9a = 0;
        bVar11 = false;
        bVar10 = false;
        bVar9 = false;
        bVar8 = false;
        bVar5 = false;
        bVar6 = false;
        local_8f = 0;
        local_94 = (uint *)0xffff;
        local_92 = (uint *)0xffff;
        do {
          bVar12 = false;
          if (0x5f < (byte)(bVar13 - 0x20)) goto LAB_1000_109a;
          cVar4 = *(char *)((uint)(byte)(bVar13 - 0x20) + 0x3c1);
          cVar21 = cVar4 * '\x02';
          bVar19 = (byte)((uint)puVar17 >> 8);
          param_2 = pbVar22;
          uVar28 = unaff_SS;
          puVar16 = local_94;
          puVar26 = local_92;
          switch(cVar4) {
          case '\0':
            if (bVar19 != 0) goto LAB_1000_109a;
            if (local_8f != 0x2b) {
              local_8f = bVar13;
            }
            break;
          case '\x01':
            if (bVar19 != 0) goto LAB_1000_109a;
            local_9a = local_9a | 1;
            break;
          case '\x02':
            puVar26 = *(uint **)param_1;
            param_1 = (undefined4 *)((int)param_1 + 2);
            if (bVar19 < 2) {
              puVar17 = (uint *)0x300;
              puVar16 = puVar26;
              puVar26 = local_92;
            }
            else {
              if (bVar19 != 4) goto LAB_1000_109a;
              puVar17 = (uint *)0x500;
            }
            break;
          case '\x03':
            if (bVar19 != 0) goto LAB_1000_109a;
            local_9a = local_9a | 2;
            bVar6 = true;
            break;
          case '\x04':
            if (3 < bVar19) goto LAB_1000_109a;
            puVar17 = (uint *)0x400;
            break;
          case '\x05':
switchD_1000_0c70_caseD_5:
            puVar14 = (uint *)(int)(char)(bVar13 - 0x30);
            if (bVar19 < 3) {
              puVar17 = (uint *)0x200;
              puVar16 = puVar14;
              if (-1 < (int)local_94) {
                puVar16 = puVar14 + (int)local_94 * 5;
              }
            }
            else {
              if (bVar19 != 4) goto LAB_1000_109a;
              puVar26 = puVar14;
              if (-1 < (int)local_92) {
                puVar26 = puVar14 + (int)local_92 * 5;
              }
            }
            break;
          case '\x06':
            local_9a = local_9a | 0x10;
            bVar5 = true;
            puVar17 = (uint *)0x500;
            break;
          case '\a':
            local_9a = local_9a & 0xffef | 0x100;
            bVar11 = true;
            bVar5 = false;
            puVar17 = (uint *)0x500;
            break;
          case '\b':
            local_9a = local_9a & 0xffef | 0x80;
            bVar10 = true;
            bVar5 = false;
            puVar17 = (uint *)0x500;
            break;
          case '\t':
            if (bVar19 != 0) goto switchD_1000_0c70_caseD_5;
            if (!bVar6) {
              local_9a = local_9a | 8;
              bVar8 = true;
              puVar17 = (uint *)0x100;
            }
            break;
          case '\n':
            goto switchD_1000_0c70_caseD_a;
          case '\v':
            uVar29 = CONCAT11(8,cVar21);
            goto LAB_1000_0daa;
          case '\f':
            uVar29 = CONCAT11(10,cVar21);
            goto LAB_1000_0daf;
          case '\r':
            uVar29 = CONCAT11(0x10,bVar13 - 0x17);
LAB_1000_0daa:
            local_8f = 0;
LAB_1000_0daf:
            local_95 = 0;
            pcVar15 = *(char **)param_1;
            pcVar20 = (char *)0x0;
            goto LAB_1000_0dd2;
          case '\x0e':
            puVar17 = (uint *)&local_8a;
            puVar25 = (undefined4 *)((int)param_1 + 2);
            if (bVar9) {
              FUN_1000_0b78(*(char **)(undefined4 *)((int)param_1 + 2),*(char **)param_1);
              puVar17 = local_89;
              local_8a = 0x3a;
              puVar25 = param_1 + 1;
            }
            param_1 = puVar25;
            FUN_1000_0b78();
            *(undefined *)puVar17 = 0;
            puVar26 = (uint *)&local_8a;
            puVar17 = (uint *)((int)puVar17 - (int)puVar26);
            goto LAB_1000_0f57;
          case '\x0f':
            puVar17 = local_92;
            if ((int)local_92 < 0) {
              puVar17 = (uint *)(s_Turbo_C___Copyright__c__1988_Bor_111b_0004 + 2);
            }
            if (bVar10) {
              uVar29 = 2;
              local_6 = 4;
            }
            else {
              if (bVar11) {
                uVar29 = 8;
                local_6 = 10;
              }
              else {
                local_6 = 8;
                uVar29 = 6;
              }
            }
            thunk_FUN_1000_08dc(uVar29,local_9a & 1,(uint)bVar13,local_89,puVar17,param_1);
            puVar26 = local_89;
            param_1 = (undefined4 *)((int)param_1 + local_6);
            goto LAB_1000_0f57;
          case '\x10':
            puVar1 = param_1;
            param_1 = (undefined4 *)((int)param_1 + 2);
            puVar26 = local_89;
            local_89[0] = (uint)*(char **)puVar1 & 0xff;
            puVar17 = (uint *)0x1;
            goto LAB_1000_0f98;
          case '\x11':
            if (bVar9) {
              uVar7 = *param_1;
              uVar28 = (uint)((ulong)uVar7 >> 0x10);
              puVar26 = (uint *)uVar7;
              param_1 = param_1 + 1;
              puVar16 = (uint *)(uVar28 | (uint)puVar26);
            }
            else {
              puVar26 = *(uint **)param_1;
              param_1 = (undefined4 *)((int)param_1 + 2);
              uVar28 = 0x111b;
              puVar16 = puVar26;
            }
            if (puVar16 == (uint *)0x0) {
              uVar28 = 0x111b;
              puVar26 = (uint *)0x3aa;
            }
            FUN_1000_0bbc();
            if (local_92 < puVar17) {
              puVar17 = local_92;
            }
            goto LAB_1000_0f98;
          case '\x12':
            if (bVar9) {
              uVar7 = *param_1;
              uVar29 = (undefined2)((ulong)uVar7 >> 0x10);
              piVar27 = (int *)uVar7;
              param_1 = param_1 + 1;
            }
            else {
              piVar27 = *(int **)param_1;
              param_1 = (undefined4 *)((int)param_1 + 2);
              uVar29 = 0x111b;
            }
            *piVar27 = (uint)(byte)(0x50 - local_57) + local_5a;
            goto LAB_1000_0c0d;
          default:
            goto LAB_1000_109a;
          case '\x16':
            local_9a = local_9a & 0xffdf;
            bVar9 = false;
            puVar17 = (uint *)0x500;
            break;
          case '\x17':
            local_9a = local_9a | 0x20;
            bVar9 = true;
            puVar17 = (uint *)0x500;
          }
          local_92 = puVar26;
          local_94 = puVar16;
          pbVar3 = pbVar22;
          pbVar22 = pbVar22 + 1;
          bVar13 = *pbVar3;
        } while( true );
      }
    }
    *pbVar24 = bVar13;
    pbVar24 = pbVar24 + 1;
    cVar4 = local_57 + -1;
    bVar6 = local_57 < '\x01';
    param_2 = pbVar22;
    local_57 = cVar4;
    if (cVar4 == '\0' || bVar6) {
      FUN_1000_0bd1();
    }
    goto LAB_1000_0c0d;
  }
  goto LAB_1000_10a2;
switchD_1000_0c70_caseD_a:
  uVar29 = CONCAT11(10,cVar21);
  local_95 = 1;
  pcVar15 = *(char **)param_1;
  pcVar20 = (char *)((int)pcVar15 >> 0xf);
LAB_1000_0dd2:
  puVar25 = (undefined4 *)((int)param_1 + 2);
  if (bVar5) {
    pcVar20 = *(char **)puVar25;
    puVar25 = param_1 + 1;
  }
  puVar26 = local_89;
  param_1 = puVar25;
  if ((pcVar15 == (char *)0x0) && (pcVar20 == (char *)0x0)) {
    if (local_92 == (uint *)0x0) {
      if ((local_94 != (uint *)0x0) && (local_94 != (uint *)0xffff)) {
        do {
          FUN_1000_0bc9();
          local_94 = (uint *)((int)local_94 + -1);
        } while (local_94 != (uint *)0x0);
      }
      goto LAB_1000_0c0d;
    }
  }
  else {
    local_9a = local_9a | 4;
  }
  FUN_1000_07d8(uVar29,(uint)local_95,(int)(char)((uint)uVar29 >> 8),puVar26,pcVar15,pcVar20);
  if ((int)local_92 < 1) {
LAB_1000_0f57:
    if ((!bVar8) || ((int)local_94 < 1)) goto LAB_1000_0f79;
  }
  FUN_1000_0bbc();
  if (*(byte *)puVar26 == 0x2d) {
    puVar17 = (uint *)((int)puVar17 + -1);
  }
  if (extraout_DX - (int)puVar17 != 0 && (int)puVar17 <= extraout_DX) {
    local_8e = extraout_DX - (int)puVar17;
  }
LAB_1000_0f79:
  if ((local_8f != 0) && (*(byte *)puVar26 != 0x2d)) {
    local_8e = local_8e + -1 + (uint)(local_8e == 0);
    puVar26 = (uint *)((int)puVar26 + -1);
    *(byte *)puVar26 = local_8f;
  }
  FUN_1000_0bbc();
LAB_1000_0f98:
  if ((local_9a & 5) == 5) {
    if (bVar13 == 0x6f) {
      if (local_8e < 1) {
        local_8e = 1;
      }
    }
    else {
      if ((bVar13 == 0x78) || (bVar13 == 0x58)) {
        bVar12 = true;
        local_94 = local_94 + -1;
        bVar5 = local_8e < 2;
        local_8e = local_8e + -2;
        if (bVar5) {
          local_8e = 0;
        }
      }
    }
  }
  iVar18 = (int)puVar17 + local_8e;
  if (!bVar6) {
    while (iVar18 < (int)local_94) {
      FUN_1000_0bc9();
      local_94 = (uint *)((int)local_94 + -1);
    }
  }
  if (bVar12) {
    FUN_1000_0bc9();
    FUN_1000_0bc9();
  }
  if (0 < local_8e) {
    iVar18 = iVar18 - local_8e;
    local_94 = (uint *)((int)local_94 - local_8e);
    bVar13 = *(byte *)puVar26;
    if (((bVar13 == 0x2d) || (bVar13 == 0x20)) || (bVar13 == 0x2b)) {
      puVar26 = (uint *)((int)puVar26 + 1);
      FUN_1000_0bc9();
      iVar18 = iVar18 + -1;
      local_94 = (uint *)((int)local_94 + -1);
      local_8e = extraout_DX_00;
    }
    while (local_8e != 0) {
      FUN_1000_0bc9();
      local_8e = local_8e + -1;
      iVar18 = extraout_DX_01;
    }
  }
  if (iVar18 != 0) {
    local_94 = (uint *)((int)local_94 - iVar18);
    do {
      puVar2 = puVar26;
      puVar26 = (uint *)((int)puVar26 + 1);
      *pbVar24 = *(byte *)puVar2;
      pbVar24 = pbVar24 + 1;
      cVar4 = local_57 + -1;
      bVar6 = local_57 < '\x01';
      local_57 = cVar4;
      if (cVar4 == '\0' || bVar6) {
        FUN_1000_0bd1();
      }
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
  }
  if (0 < (int)local_94) {
    do {
      FUN_1000_0bc9();
      local_94 = (uint *)((int)local_94 + -1);
    } while (local_94 != (uint *)0x0);
  }
  goto LAB_1000_0c0d;
LAB_1000_109a:
  do {
    FUN_1000_0bc9();
    pbVar3 = pbVar23;
    pbVar23 = pbVar23 + 1;
  } while (*pbVar3 != 0);
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
    *(undefined **)piVar2 = unaff_DI + (1 - (unaff_BP + -0x54)) + *piVar2;
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

undefined4 __stdcall16far FUN_1000_10c6(int param_1,uint param_2,uint param_3,uint param_4)

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



undefined4 __stdcall16far FUN_1000_10cf(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  uVar3 = 2;
  if ((param_4 == 0) && ((param_2 == 0 || (param_3 == 0)))) {
    param_1 = (uint)(CONCAT22(param_2,param_1) % (ulong)param_3);
    param_2 = 0;
  }
  else {
    if ((int)param_2 < 0) {
      bVar5 = param_1 != 0;
      param_1 = -param_1;
      param_2 = -(uint)bVar5 - param_2;
      uVar3 = 0xe;
    }
    if ((int)param_4 < 0) {
      bVar5 = param_3 != 0;
      param_3 = -param_3;
      param_4 = -(uint)bVar5 - param_4;
      uVar3 = uVar3 ^ 4;
    }
    iVar1 = 0x20;
    uVar4 = 0;
    uVar2 = 0;
    do {
      bVar5 = (int)param_1 < 0;
      param_1 = param_1 * 2;
      bVar6 = (int)param_2 < 0;
      param_2 = param_2 << 1 | (uint)bVar5;
      bVar5 = (int)uVar2 < 0;
      uVar2 = uVar2 << 1 | (uint)bVar6;
      uVar4 = uVar4 << 1 | (uint)bVar5;
      if ((param_4 <= uVar4) && ((param_4 < uVar4 || (param_3 <= uVar2)))) {
        bVar5 = uVar2 < param_3;
        uVar2 = uVar2 - param_3;
        uVar4 = (uVar4 - param_4) - (uint)bVar5;
        param_1 = param_1 + 1;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if ((uVar3 & 2) != 0) {
      uVar3 = uVar3 >> 1;
      param_1 = uVar2;
      param_2 = uVar4;
    }
    if ((uVar3 & 4) != 0) {
      bVar5 = param_1 != 0;
      param_1 = -param_1;
      param_2 = -(uint)bVar5 - param_2;
    }
  }
  return CONCAT22(param_2,param_1);
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


