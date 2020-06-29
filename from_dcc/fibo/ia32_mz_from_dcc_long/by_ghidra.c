typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;
typedef unsigned long    undefined4;



// WARNING (jumptable): Stack frame is not setup normally: Input value of stackpointer is not used
// WARNING: Stack frame is not setup normally: Input value of stackpointer is not used
// WARNING: This function may have set the stack pointer

void entry(void)

{
  int *piVar1;
  char *pcVar2;
  undefined *puVar3;
  int *piVar4;
  code *pcVar5;
  int **ppiVar6;
  int *piVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  undefined2 uVar12;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  int extraout_DX_01;
  int extraout_DX_02;
  undefined *puVar13;
  int *piVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  int *piVar19;
  int *piVar20;
  int **ppiVar21;
  int *unaff_SI;
  int *piVar22;
  int *piVar23;
  uint uVar24;
  int iVar25;
  undefined *puVar26;
  undefined2 unaff_ES;
  undefined2 uVar27;
  int *piVar28;
  bool bVar29;
  bool bVar30;
  undefined4 uVar31;
  
  piVar28 = (int *)0x2c9;
  puVar13 = (undefined *)0xe6;
                    // WARNING (jumptable): Read-only address (ram,0x000101c7) is written
                    // WARNING: Read-only address (ram,0x000101c7) is written
  uRam000101c7 = 0x126b;
  pcVar5 = (code *)swi(0x21);
  uVar31 = (*pcVar5)();
  uVar27 = s_Turbo_C___Copyright__c__1988_Bor_126b_0004._40_2_;
  iVar11 = DAT_126b_0002;
  uVar12 = (undefined2)((ulong)uVar31 >> 0x10);
  *(undefined2 *)&DAT_126b_007d = (int)uVar31;
  *(undefined2 *)&DAT_126b_007b = unaff_ES;
  *(undefined2 *)&DAT_126b_0077 = uVar27;
  *(int *)&DAT_126b_0091 = iVar11;
  *(undefined2 *)&DAT_126b_0081 = 0xffff;
  *(undefined2 *)(puVar13 + -2) = 0x2e;
  FUN_1000_012f();
  uVar31 = *(undefined4 *)&DAT_126b_0075;
  uVar27 = (undefined2)((ulong)uVar31 >> 0x10);
  piVar23 = (int *)uVar31;
  uVar10 = 0x7fff;
  piVar22 = piVar23;
  do {
    if (((*piVar22 == 0x3738) && (iVar25 = piVar22[1], (char)iVar25 == '=')) &&
       (piVar1 = (int *)&DAT_126b_0081, *piVar1 = *piVar1 + 1,
       ((byte)((uint)iVar25 >> 8) & 0xdf) == 0x59)) {
      piVar1 = (int *)&DAT_126b_0081;
      *piVar1 = *piVar1 + 1;
    }
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      piVar1 = piVar22;
      piVar22 = (int *)((int)piVar22 + 1);
    } while ((char)uVar31 != *(char *)piVar1);
    piVar19 = (int *)puVar13;
    if (uVar10 == 0) goto LAB_1000_01b6;
    piVar23 = (int *)((int)piVar23 + 1);
  } while (*(char *)piVar22 != (char)uVar31);
  *(int *)&DAT_126b_0075 = -(uVar10 | 0x8000);
  piVar23 = (int *)((int)piVar23 * 4 + 0x10U & 0xfff0);
  *(int **)&DAT_126b_0079 = piVar23;
  uVar10 = *(uint *)&DAT_126b_0142;
  if (uVar10 < 0x200) {
    uVar10 = 0x200;
    *(undefined2 *)&DAT_126b_0142 = 0x200;
  }
  bVar9 = 4;
  uVar24 = (uVar10 >> 4) + 1;
  if (uVar24 <= iVar11 - 0x2c9U) {
    iVar11 = (uVar10 >> 4) + 0x2ca;
    *(int *)&DAT_126b_0089 = iVar11;
    *(int *)&DAT_126b_008d = iVar11;
    piVar23 = (int *)(iVar11 - *(int *)&DAT_126b_007b);
    piVar14 = (int *)(puVar13 + -2);
    *(uint *)(puVar13 + -2) = uVar24;
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)();
    iVar25 = *piVar14 << (bVar9 & 0x1f);
    puVar26 = (undefined *)&DAT_12bf_0014;
    iVar11 = 0x80;
    while (iVar11 != 0) {
      iVar11 = iVar11 + -1;
      puVar3 = puVar26;
      puVar26 = puVar26 + 1;
      *puVar3 = 0;
    }
    *(undefined2 *)(iVar25 + -2) = 0x1000;
    puVar15 = (undefined *)(iVar25 + -4);
    *(undefined2 *)(iVar25 + -4) = 0xd3;
    (**(code **)&DAT_126b_053e)();
    *(undefined2 *)(puVar15 + -2) = 0x1000;
    puVar16 = puVar15 + -4;
    *(undefined2 *)(puVar15 + -4) = 0xd8;
    FUN_1000_01d1();
    *(undefined2 *)(puVar16 + -2) = 0x1000;
    *(undefined2 *)(puVar16 + -4) = 0xdd;
    FUN_1000_02cf();
    pcVar5 = (code *)swi(0x1a);
    (*pcVar5)();
    *(undefined2 *)&DAT_126b_0083 = extraout_DX_00;
    *(int *)&DAT_126b_0085 = iVar11;
    *(undefined2 *)(puVar16 + -2) = 0x1000;
    puVar17 = puVar16 + -4;
    *(undefined2 *)(puVar16 + -4) = 0xee;
    (**(code **)&DAT_12bf_0002)();
    *(undefined2 *)(puVar17 + -2) = *(undefined2 *)&DAT_126b_0073;
    *(undefined2 *)(puVar17 + -4) = *(undefined2 *)&DAT_126b_0071;
    *(undefined2 *)(puVar17 + -6) = *(undefined2 *)&DAT_126b_006f;
    *(undefined2 *)(puVar17 + -8) = *(undefined2 *)&DAT_126b_006d;
    *(undefined2 *)(puVar17 + -10) = *(undefined2 *)&DAT_126b_006b;
    *(undefined2 *)(puVar17 + -0xc) = 0x1000;
    *(undefined2 *)(puVar17 + -0xe) = 0x107;
    uVar27 = FUN_103c_0002();
    *(undefined2 *)(puVar17 + -0xc) = uVar27;
    *(undefined2 *)(puVar17 + -0xe) = 0x103c;
    *(undefined2 *)(puVar17 + -0x10) = 0x10d;
    FUN_104a_000a();
    *(undefined2 *)(puVar17 + -0xe) = 0x1000;
    *(undefined2 *)(puVar17 + -0x10) = 0x117;
    FUN_1000_0172();
    *(undefined2 *)(puVar17 + -0xe) = 0x1000;
    puVar18 = puVar17 + -0x10;
    *(undefined2 *)(puVar17 + -0x10) = 0x11c;
    (*pcRam00000540)();
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)();
    piVar19 = (int *)puVar18;
    piVar28 = (int *)extraout_DX;
  }
LAB_1000_01b6:
  do {
    piVar19[-1] = 0x1be;
    FUN_1000_01a7();
    piVar19[-1] = 3;
    piVar19[-2] = 0x1000;
    piVar20 = piVar19 + -3;
    piVar19[-3] = 0x1c7;
    cVar8 = FUN_1000_010d();
    pcVar2 = (char *)((int)piVar23 + (int)unaff_SI);
    *pcVar2 = *pcVar2 + cVar8;
    pcVar2 = (char *)((int)piVar23 + (int)unaff_SI);
    *pcVar2 = *pcVar2 + cVar8;
    pcVar2 = (char *)((int)piVar23 + (int)unaff_SI);
    *pcVar2 = *pcVar2 + cVar8;
    pcVar2 = (char *)((int)piVar23 + (int)unaff_SI);
    *pcVar2 = *pcVar2 + cVar8;
    pcVar2 = (char *)((int)piVar23 + (int)unaff_SI);
    *pcVar2 = *pcVar2 + cVar8;
                    // WARNING (jumptable): Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101c9) is written
    uRam000101c9 = *piVar20;
                    // WARNING (jumptable): Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
    uRam000101cb = piVar20[1];
                    // WARNING (jumptable): Read-only address (ram,0x000101cd) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
    uRam000101cd = 0;
    uVar24 = (uint)*(byte *)((int)&DAT_126b_007f + 1);
    piVar23 = (int *)(uVar24 + 1);
    unaff_SI = (int *)(iRam00000075 + 2);
    uVar10 = 1;
    uVar27 = uRam0000007b;
    if (2 < bRam0000007d) {
      uVar10 = 0x7f;
      piVar22 = unaff_SI;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        piVar1 = piVar22;
        piVar22 = (int *)((int)piVar22 + 1);
      } while (*(char *)piVar1 != '\0');
      piVar19 = piVar20 + 2;
      if (uVar10 == 0) goto LAB_1000_01b6;
      uVar10 = uVar10 ^ 0x7f;
      uVar27 = uRam00000077;
    }
    puVar26 = (undefined *)(uVar24 + 2 + uVar10 & 0xfffe);
    piVar22 = (int *)((int)piVar20 + (2 - (int)puVar26));
    piVar19 = piVar20 + 1;
    if (puVar26 <= piVar20 + 1) {
      piVar22[-1] = uVar10;
      piVar23 = piVar22;
      while (uVar10 - 1 != 0) {
        piVar4 = piVar23;
        piVar23 = (int *)((int)piVar23 + 1);
        piVar1 = unaff_SI;
        unaff_SI = (int *)((int)unaff_SI + 1);
        *(char *)piVar4 = *(char *)piVar1;
        uVar10 = uVar10 - 1;
      }
      bVar29 = false;
      *(char *)piVar23 = '\0';
      bVar30 = uVar10 == 0;
LAB_1000_0243:
      piVar22[-2] = 0x246;
      bVar9 = FUN_1000_025f();
      iVar11 = extraout_DX_01;
      if (bVar29 || bVar30) {
        do {
          if (bVar29) {
            iVar11 = piVar22[-1] + iVar11;
            piVar23 = (int *)((uVar10 + 1) * 4);
            ppiVar21 = (int **)(piVar22 + (uVar10 + 1) * 0x7ffe);
            piVar19 = piVar22;
            unaff_SI = piVar22;
            uRam0000006b = uVar10;
            ppiVar6 = ppiVar21;
            piVar7 = piVar28;
            if (piVar23 <= piVar22) goto LAB_1000_02af;
            goto LAB_1000_01b6;
          }
          piVar22[-2] = 0x24d;
          bVar9 = FUN_1000_025f();
          iVar11 = extraout_DX_02;
        } while (!bVar29 && !bVar30);
      }
      if ((bVar9 != 0x20) && (bVar9 != 0xd)) break;
      goto LAB_1000_025b;
    }
  } while( true );
  bVar29 = bVar9 < 9;
  bVar30 = bVar9 == 9;
  if (bVar30) {
LAB_1000_025b:
    bVar29 = false;
    bVar30 = true;
  }
  goto LAB_1000_0243;
  while( true ) {
    *ppiVar21 = piVar22;
    ppiVar21[1] = piVar28;
    ppiVar21 = ppiVar21 + 2;
    do {
      piVar1 = piVar22;
      piVar22 = (int *)((int)piVar22 + 1);
      bVar29 = *(char *)piVar1 != '\0';
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0 && bVar29);
    ppiVar6 = ppiRam0000006d;
    piVar7 = piRam0000006f;
    if (bVar29) break;
LAB_1000_02af:
    piRam0000006f = piVar7;
    ppiRam0000006d = ppiVar6;
    if (iVar11 == 0) break;
  }
  *ppiVar21 = (int *)0x0;
  ppiVar21[1] = (int *)0x0;
                    // WARNING: Treating indirect jump as call
  (*(code *)0x0)();
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack

void FUN_1000_010d(undefined2 param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  code *pcVar4;
  int iVar5;
  undefined2 uVar6;
  char **ppcVar7;
  char *pcVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  undefined *puVar12;
  uint uVar13;
  int iVar14;
  int extraout_DX;
  int extraout_DX_00;
  undefined2 *in_BX;
  char **ppcVar15;
  undefined2 *unaff_SI;
  undefined2 *puVar16;
  undefined2 *puVar17;
  undefined2 uVar18;
  char *unaff_SS;
  bool bVar19;
  bool bVar20;
  
  FUN_1000_0172();
  (*pcRam00000540)(0x1000);
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  uVar6 = uRam000101cd;
LAB_1000_01b6:
  do {
    uRam000101cd = uVar6;
    param_1 = 0x1be;
    FUN_1000_01a7();
    param_1 = 3;
    cVar9 = FUN_1000_010d();
    pcVar1 = (char *)((int)in_BX + (int)unaff_SI);
    *pcVar1 = *pcVar1 + cVar9;
    pcVar1 = (char *)((int)in_BX + (int)unaff_SI);
    *pcVar1 = *pcVar1 + cVar9;
    pcVar1 = (char *)((int)in_BX + (int)unaff_SI);
    *pcVar1 = *pcVar1 + cVar9;
    pcVar1 = (char *)((int)in_BX + (int)unaff_SI);
    *pcVar1 = *pcVar1 + cVar9;
    pcVar1 = (char *)((int)in_BX + (int)unaff_SI);
    *pcVar1 = *pcVar1 + cVar9;
                    // WARNING (jumptable): Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101c9) is written
    uRam000101c9 = param_1;
                    // WARNING (jumptable): Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
    uRam000101cb = param_2;
                    // WARNING (jumptable): Read-only address (ram,0x000101cd) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
    uRam000101cd = 0;
    uVar11 = (uint)*(byte *)((int)&DAT_126b_007f + 1);
    in_BX = (undefined2 *)(uVar11 + 1);
    unaff_SI = (undefined2 *)(iRam00000075 + 2);
    uVar13 = 1;
    uVar18 = uRam0000007b;
    if (2 < bRam0000007d) {
      uVar13 = 0x7f;
      puVar16 = unaff_SI;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        puVar2 = puVar16;
        puVar16 = (undefined2 *)((int)puVar16 + 1);
      } while (*(char *)puVar2 != '\0');
      uVar6 = 0;
      if (uVar13 == 0) goto LAB_1000_01b6;
      uVar13 = uVar13 ^ 0x7f;
      uVar18 = uRam00000077;
    }
    puVar12 = (undefined *)(uVar11 + 2 + uVar13 & 0xfffe);
    iVar5 = -(int)puVar12;
    puVar16 = (undefined2 *)((int)&param_2 + iVar5);
    uVar6 = uRam000101cd;
    if (puVar12 <= &param_2) {
      *(uint *)((int)&param_1 + iVar5) = uVar13;
      puVar17 = puVar16;
      while (uVar13 - 1 != 0) {
        puVar3 = puVar17;
        puVar17 = (undefined2 *)((int)puVar17 + 1);
        puVar2 = unaff_SI;
        unaff_SI = (undefined2 *)((int)unaff_SI + 1);
        *(char *)puVar3 = *(char *)puVar2;
        uVar13 = uVar13 - 1;
      }
      bVar19 = false;
      *(char *)puVar17 = '\0';
      bVar20 = uVar13 == 0;
LAB_1000_0243:
      *(undefined2 *)(&stack0x0000 + iVar5) = 0x246;
      bVar10 = FUN_1000_025f();
      iVar14 = extraout_DX;
      if (bVar19 || bVar20) {
        do {
          if (bVar19) {
            iVar14 = *(int *)((int)&param_1 + iVar5) + iVar14;
            in_BX = (undefined2 *)((uVar13 + 1) * 4);
            ppcVar15 = (char **)(puVar16 + (uVar13 + 1) * 0x7ffe);
            unaff_SI = puVar16;
            uVar6 = uRam000101cd;
            uRam0000006b = uVar13;
            ppcVar7 = ppcVar15;
            pcVar8 = unaff_SS;
            if (in_BX <= puVar16) goto LAB_1000_02af;
            goto LAB_1000_01b6;
          }
          *(undefined2 *)(&stack0x0000 + iVar5) = 0x24d;
          bVar10 = FUN_1000_025f();
          iVar14 = extraout_DX_00;
        } while (!bVar19 && !bVar20);
      }
      if ((bVar10 != 0x20) && (bVar10 != 0xd)) break;
      goto LAB_1000_025b;
    }
  } while( true );
  bVar19 = bVar10 < 9;
  bVar20 = bVar10 == 9;
  if (bVar20) {
LAB_1000_025b:
    bVar19 = false;
    bVar20 = true;
  }
  goto LAB_1000_0243;
  while( true ) {
    *(undefined2 **)ppcVar15 = puVar16;
    ppcVar15[1] = unaff_SS;
    ppcVar15 = ppcVar15 + 2;
    do {
      puVar2 = puVar16;
      puVar16 = (undefined2 *)((int)puVar16 + 1);
      bVar19 = *(char *)puVar2 != '\0';
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0 && bVar19);
    ppcVar7 = ppcRam0000006d;
    pcVar8 = pcRam0000006f;
    if (bVar19) break;
LAB_1000_02af:
    pcRam0000006f = pcVar8;
    ppcRam0000006d = ppcVar7;
    if (iVar14 == 0) break;
  }
  *ppcVar15 = (char *)0x0;
  ppcVar15[1] = (char *)0x0;
                    // WARNING: Treating indirect jump as call
  (*(code *)0x0)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl16near FUN_1000_012f(void)

{
  code *pcVar1;
  undefined2 in_BX;
  undefined2 unaff_ES;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  unique0x10000025 = in_BX;
  DAT_126b_005d = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_126b_005f = in_BX;
  DAT_126b_0061 = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_126b_0063 = in_BX;
  DAT_126b_0065 = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_126b_0067 = in_BX;
  DAT_126b_0069 = unaff_ES;
  (*pcVar1)();
  return;
}



void __cdecl16far FUN_1000_0172(void)

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



void __cdecl16far FUN_1000_019f(void)

{
  DAT_126b_0081 = 0;
  return;
}



void __cdecl16far FUN_1000_01a6(void)

{
  return;
}



void __cdecl16near FUN_1000_01a7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack

void FUN_1000_01d1(undefined2 param_1)

{
  char *pcVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  char **ppcVar5;
  char *pcVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  int extraout_DX;
  int extraout_DX_00;
  undefined2 *puVar13;
  char **ppcVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  char *unaff_SS;
  undefined2 uVar17;
  bool bVar18;
  bool bVar19;
  undefined2 uVar20;
  undefined2 in_stack_00000000;
  undefined2 uStack4;
  undefined2 uStack2;
  
                    // WARNING (jumptable): Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101c9) is written
  uVar17 = 0x126b;
  uRam000101c9 = in_stack_00000000;
  do {
                    // WARNING (jumptable): Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
    uRam000101cb = param_1;
                    // WARNING (jumptable): Read-only address (ram,0x000101cd) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
    uVar20 = *(undefined2 *)&DAT_126b_007b;
    uVar9 = (uint)*(byte *)((int)&DAT_126b_007f + 1);
    puVar13 = (undefined2 *)(uVar9 + 1);
    puVar15 = (undefined2 *)(*(int *)&DAT_126b_0075 + 2);
    uVar11 = 1;
    uRam000101cd = uVar17;
    if (*(byte *)&DAT_126b_007d < 3) {
LAB_1000_0214:
      puVar10 = (undefined *)(uVar9 + 2 + uVar11 & 0xfffe);
      iVar4 = -(int)puVar10;
      puVar16 = (undefined2 *)((int)&param_1 + iVar4);
      if (puVar10 <= &param_1) {
        *(uint *)(&stack0x0000 + iVar4) = uVar11;
        puVar13 = puVar16;
        while (uVar11 - 1 != 0) {
          puVar3 = puVar13;
          puVar13 = (undefined2 *)((int)puVar13 + 1);
          puVar2 = puVar15;
          puVar15 = (undefined2 *)((int)puVar15 + 1);
          *(char *)puVar3 = *(char *)puVar2;
          uVar11 = uVar11 - 1;
        }
        bVar18 = false;
        *(char *)puVar13 = '\0';
        bVar19 = uVar11 == 0;
LAB_1000_0243:
        *(undefined2 *)((int)&uStack2 + iVar4) = 0x246;
        bVar8 = FUN_1000_025f();
        iVar12 = extraout_DX;
        if (bVar18 || bVar19) {
          do {
            if (bVar18) {
              iVar12 = *(int *)(&stack0x0000 + iVar4) + iVar12;
              puVar13 = (undefined2 *)((uVar11 + 1) * 4);
              ppcVar14 = (char **)(puVar16 + (uVar11 + 1) * 0x7ffe);
              puVar15 = puVar16;
              uRam0000006b = uVar11;
              ppcVar5 = ppcVar14;
              pcVar6 = unaff_SS;
              if (puVar13 <= puVar16) goto LAB_1000_02af;
              goto LAB_1000_01af;
            }
            *(undefined2 *)((int)&uStack2 + iVar4) = 0x24d;
            bVar8 = FUN_1000_025f();
            iVar12 = extraout_DX_00;
          } while (!bVar18 && !bVar19);
        }
        if ((bVar8 != 0x20) && (bVar8 != 0xd)) break;
        goto LAB_1000_025b;
      }
    }
    else {
      uVar20 = *(undefined2 *)&DAT_126b_0077;
      uVar11 = 0x7f;
      puVar16 = puVar15;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        puVar2 = puVar16;
        puVar16 = (undefined2 *)((int)puVar16 + 1);
      } while (*(char *)puVar2 != '\0');
      if (uVar11 != 0) {
        uVar11 = uVar11 ^ 0x7f;
        goto LAB_1000_0214;
      }
    }
LAB_1000_01af:
    uVar17 = 0;
    FUN_1000_01a7();
    uVar20 = 3;
    uStack2 = 0x1000;
    uStack4 = 0x1c7;
    cVar7 = FUN_1000_010d();
    pcVar1 = (char *)((int)puVar13 + (int)puVar15);
    *pcVar1 = *pcVar1 + cVar7;
    pcVar1 = (char *)((int)puVar13 + (int)puVar15);
    *pcVar1 = *pcVar1 + cVar7;
    pcVar1 = (char *)((int)puVar13 + (int)puVar15);
    *pcVar1 = *pcVar1 + cVar7;
    pcVar1 = (char *)((int)puVar13 + (int)puVar15);
    *pcVar1 = *pcVar1 + cVar7;
    pcVar1 = (char *)((int)puVar13 + (int)puVar15);
    *pcVar1 = *pcVar1 + cVar7;
    uRam000101c9 = uVar20;
  } while( true );
  bVar18 = bVar8 < 9;
  bVar19 = bVar8 == 9;
  if (bVar19) {
LAB_1000_025b:
    bVar18 = false;
    bVar19 = true;
  }
  goto LAB_1000_0243;
  while( true ) {
    *(undefined2 **)ppcVar14 = puVar16;
    ppcVar14[1] = unaff_SS;
    ppcVar14 = ppcVar14 + 2;
    do {
      puVar2 = puVar16;
      puVar16 = (undefined2 *)((int)puVar16 + 1);
      bVar18 = *(char *)puVar2 != '\0';
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0 && bVar18);
    ppcVar5 = ppcRam0000006d;
    pcVar6 = pcRam0000006f;
    if (bVar18) break;
LAB_1000_02af:
    pcRam0000006f = pcVar6;
    ppcRam0000006d = ppcVar5;
    if (iVar12 == 0) break;
  }
  *ppcVar14 = (char *)0x0;
  ppcVar14[1] = (char *)0x0;
                    // WARNING: Treating indirect jump as call
  (*(code *)0x0)();
  return;
}



int __cdecl16near FUN_1000_025f(void)

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



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack

void __cdecl16far FUN_1000_02cf(void)

{
  char *pcVar1;
  int **ppiVar2;
  int **ppiVar3;
  int *piVar4;
  int *piVar5;
  int **ppiVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int extraout_DX;
  int extraout_DX_00;
  uint in_DX;
  int **ppiVar14;
  int **ppiVar15;
  int **ppiVar16;
  int **unaff_SI;
  int *piVar17;
  undefined2 uVar18;
  int *unaff_SS;
  bool bVar19;
  bool bVar20;
  uint uStack6;
  undefined2 uStack4;
  int *piStack2;
  
  piVar17 = (int *)0x0;
  piStack2 = DAT_126b_0077;
  uStack4 = DAT_126b_0079;
  uStack6 = 0x1000;
  ppiVar14 = (int **)FUN_1050_000c();
  piVar5 = piStack2;
  piStack2 = (int *)0x126b;
  DAT_126b_0071 = ppiVar14;
  DAT_126b_0073 = in_DX;
  if (((uint)ppiVar14 | in_DX) != 0) {
    iVar13 = -1;
    do {
      ppiVar16 = ppiVar14;
      *ppiVar16 = piVar17;
      ppiVar16[1] = piVar5;
      do {
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        piVar4 = piVar17;
        piVar17 = (int *)((int)piVar17 + 1);
      } while (*(char *)piVar4 != '\0');
      ppiVar14 = ppiVar16 + 2;
      if (*(char *)piVar17 == '\0') {
        ppiVar16[2] = (int *)0x0;
        ppiVar16[3] = (int *)0x0;
        return;
      }
    } while( true );
  }
LAB_1000_01af:
  do {
    uStack4 = 0x1be;
    FUN_1000_01a7();
    uStack4 = 3;
    uStack6 = 0x1000;
    cVar7 = FUN_1000_010d();
    pcVar1 = (char *)((int)ppiVar14 + (int)unaff_SI);
    *pcVar1 = *pcVar1 + cVar7;
    pcVar1 = (char *)((int)ppiVar14 + (int)unaff_SI);
    *pcVar1 = *pcVar1 + cVar7;
    pcVar1 = (char *)((int)ppiVar14 + (int)unaff_SI);
    *pcVar1 = *pcVar1 + cVar7;
    pcVar1 = (char *)((int)ppiVar14 + (int)unaff_SI);
    *pcVar1 = *pcVar1 + cVar7;
    pcVar1 = (char *)((int)ppiVar14 + (int)unaff_SI);
    *pcVar1 = *pcVar1 + cVar7;
                    // WARNING (jumptable): Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101c9) is written
    uRam000101c9 = uStack4;
                    // WARNING (jumptable): Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
    piRam000101cb = piStack2;
                    // WARNING (jumptable): Read-only address (ram,0x000101cd) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
    uRam000101cd = 0;
    uVar9 = (uint)*(byte *)((int)&DAT_126b_007f + 1);
    ppiVar14 = (int **)(uVar9 + 1);
    unaff_SI = (int **)(iRam00000075 + 2);
    uVar11 = 1;
    uVar18 = uRam0000007b;
    if (2 < bRam0000007d) {
      uVar11 = 0x7f;
      ppiVar16 = unaff_SI;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        ppiVar2 = ppiVar16;
        ppiVar16 = (int **)((int)ppiVar16 + 1);
      } while (*(char *)ppiVar2 != '\0');
      if (uVar11 == 0) goto LAB_1000_01af;
      uVar11 = uVar11 ^ 0x7f;
      uVar18 = uRam00000077;
    }
    puVar10 = (undefined *)(uVar9 + 2 + uVar11 & 0xfffe);
    iVar13 = -(int)puVar10;
    ppiVar16 = (int **)((int)&piStack2 + iVar13);
    if (puVar10 <= &piStack2) {
      *(uint *)((int)(&uStack6 + 1) + iVar13) = uVar11;
      ppiVar14 = ppiVar16;
      while (uVar11 - 1 != 0) {
        ppiVar3 = ppiVar14;
        ppiVar14 = (int **)((int)ppiVar14 + 1);
        ppiVar2 = unaff_SI;
        unaff_SI = (int **)((int)unaff_SI + 1);
        *(undefined *)ppiVar3 = *(undefined *)ppiVar2;
        uVar11 = uVar11 - 1;
      }
      bVar19 = false;
      *(undefined *)ppiVar14 = 0;
      bVar20 = uVar11 == 0;
LAB_1000_0243:
      *(uint *)((int)&uStack6 + iVar13) = 0x246;
      bVar8 = FUN_1000_025f();
      iVar12 = extraout_DX;
      if (bVar19 || bVar20) {
        do {
          if (bVar19) {
            iVar12 = *(uint *)((int)(&uStack6 + 1) + iVar13) + iVar12;
            ppiVar14 = (int **)((uVar11 + 1) * 4);
            ppiVar15 = ppiVar16 + (uVar11 + 1) * 0x7ffe;
            unaff_SI = ppiVar16;
            uRam0000006b = uVar11;
            ppiVar6 = ppiVar15;
            piVar17 = unaff_SS;
            if (ppiVar14 <= ppiVar16) goto LAB_1000_02af;
            goto LAB_1000_01af;
          }
          *(uint *)((int)&uStack6 + iVar13) = 0x24d;
          bVar8 = FUN_1000_025f();
          iVar12 = extraout_DX_00;
        } while (!bVar19 && !bVar20);
      }
      if ((bVar8 != 0x20) && (bVar8 != 0xd)) break;
      goto LAB_1000_025b;
    }
  } while( true );
  bVar19 = bVar8 < 9;
  bVar20 = bVar8 == 9;
  if (bVar20) {
LAB_1000_025b:
    bVar19 = false;
    bVar20 = true;
  }
  goto LAB_1000_0243;
  while( true ) {
    *(int ***)ppiVar15 = ppiVar16;
    ppiVar15[1] = unaff_SS;
    ppiVar15 = ppiVar15 + 2;
    do {
      ppiVar2 = ppiVar16;
      ppiVar16 = (int **)((int)ppiVar16 + 1);
      bVar19 = *(char *)ppiVar2 != '\0';
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0 && bVar19);
    ppiVar6 = ppiRam0000006d;
    piVar17 = piRam0000006f;
    if (bVar19) break;
LAB_1000_02af:
    piRam0000006f = piVar17;
    ppiRam0000006d = ppiVar6;
    if (iVar12 == 0) break;
  }
  *ppiVar15 = (int *)0x0;
  ppiVar15[1] = (int *)0x0;
                    // WARNING: Treating indirect jump as call
  (*(code *)0x0)();
  return;
}



uint __cdecl16far FUN_1000_0313(void)

{
  undefined2 in_AX;
  int in_CX;
  undefined2 in_BX;
  
  if (in_CX < 0) {
    return (uint)(byte)((char)in_AX - (~(byte)in_BX + 1)) & 0xf;
  }
  return (uint)(byte)((char)in_AX + (byte)in_BX) & 0xf;
}



uint __cdecl16far FUN_1000_036e(void)

{
  uint in_AX;
  
  return in_AX & 0xf;
}



void FUN_1000_03ba(void)

{
                    // WARNING: Could not recover jumptable at 0x000103ba. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(ulong)DAT_12bf_000c)();
  return;
}



void __cdecl16far FUN_103c_0002(void)

{
  undefined2 uVar1;
  int iVar2;
  int local_6;
  undefined2 local_4;
  
  FUN_113d_000e(0x94,0x126b);
  FUN_11f1_0007(0xb1,0x126b,&local_6);
  iVar2 = 1;
  while (iVar2 <= local_6) {
    FUN_113d_000e(0xb4,0x126b);
    FUN_11f1_0007(0xc3,0x126b,&local_4);
    uVar1 = FUN_103c_007c(local_4);
    FUN_113d_000e(0xc6,0x126b,local_4,uVar1);
    iVar2 = iVar2 + 1;
  }
  FUN_104a_000a(0);
  return;
}



int __cdecl16far FUN_103c_007c(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 3) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_103c_007c(param_1 + -1);
    iVar2 = FUN_103c_007c(param_1 + -2);
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}



undefined2 __stdcall16far FUN_1046_000e(uint param_1)

{
  if ((int)param_1 < 0) {
    if (-param_1 < 0x23 || param_1 == 0xffdd) {
      DAT_126b_007f = -param_1;
      DAT_126b_00da = 0xffff;
      return 0xffff;
    }
  }
  else {
    if (param_1 < 0x59) goto LAB_1046_0021;
  }
  param_1 = 0x57;
LAB_1046_0021:
  DAT_126b_007f = (int)*(char *)(param_1 + 0xdc);
  DAT_126b_00da = param_1;
  return 0xffff;
}



void __cdecl16far FUN_1046_0049(void)

{
  return;
}



void __cdecl16far FUN_104a_000a(undefined2 param_1)

{
  int iVar1;
  code **ppcVar2;
  
  while (iVar1 = DAT_126b_0144 + -1, DAT_126b_0144 != 0) {
    ppcVar2 = (code **)(iVar1 * 4 + 0x554);
    DAT_126b_0144 = iVar1;
    (**ppcVar2)(0x1000);
  }
  DAT_126b_0144 = iVar1;
  (*DAT_126b_0136)(0x1000);
  (*DAT_126b_013a)(0x1000);
  (*DAT_126b_013e)(0x1000);
  FUN_1000_010d(0x1000,param_1);
  return;
}



uint __cdecl16far FUN_104a_003d(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = DAT_126b_0144 != 0x20;
  if (bVar2) {
    iVar1 = DAT_126b_0144 * 4;
    *(undefined2 *)(iVar1 + 0x556) = param_2;
    *(undefined2 *)(iVar1 + 0x554) = param_1;
    DAT_126b_0144 = DAT_126b_0144 + 1;
  }
  return (uint)!bVar2;
}



void __cdecl16far FUN_1050_000c(undefined2 param_1)

{
  FUN_1050_020d(param_1,0);
  return;
}



void __cdecl16far FUN_1050_0021(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  bool bVar4;
  undefined2 uStack10;
  undefined2 uStack8;
  int local_6;
  undefined2 local_4;
  
  bVar4 = (undefined *)register0x00000010 ==
          (undefined *)(s_Turbo_C___Copyright__c__1988_Bor_126b_0004 + 2);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  DAT_126b_0150 = *(undefined2 *)((int)param_1 + 0xe);
  DAT_126b_014e = *(int *)((int)param_1 + 0xc);
  uStack8 = 0x1000;
  uStack10 = 0x544;
  FUN_1000_036e();
  uVar3 = DAT_126b_0150;
  iVar2 = DAT_126b_014e;
  if (bVar4) {
    DAT_126b_014e = 0;
    DAT_126b_0150 = 0;
  }
  else {
    uVar1 = *(undefined4 *)((int)param_1 + 8);
    local_4 = (undefined2)((ulong)uVar1 >> 0x10);
    local_6 = (int)uVar1;
    *(undefined2 *)(DAT_126b_014e + 10) = local_4;
    *(int *)(iVar2 + 8) = local_6;
    iVar2 = DAT_126b_014e;
    *(undefined2 *)(local_6 + 0xe) = DAT_126b_0150;
    *(int *)(local_6 + 0xc) = iVar2;
  }
  return;
}



int __cdecl16far FUN_1050_0089(uint *param_1,uint param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  bool bVar7;
  int *local_6;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = *param_1;
  *param_1 = *param_1 - param_2;
  piVar1 = (int *)((int)param_1 + 2);
  *piVar1 = (*piVar1 - param_3) - (uint)(uVar2 < param_2);
  uVar5 = uVar6;
  iVar3 = FUN_1000_0313();
  local_6 = (int *)CONCAT22(uVar5,iVar3);
  param_3 = param_3 + (uint)(0xfffe < param_2);
  bVar7 = param_3 == 0;
  *(int *)(iVar3 + 2) = param_3;
  *local_6 = param_2 + 1;
  *(undefined2 *)(iVar3 + 6) = uVar6;
  *(int *)(iVar3 + 4) = (int)param_1;
  FUN_1000_036e();
  iVar4 = iVar3;
  if (!bVar7) {
    uVar6 = uVar5;
    iVar4 = FUN_1000_0313();
    *(undefined2 *)(iVar4 + 6) = uVar5;
    *(int *)(iVar4 + 4) = iVar3;
    iVar4 = DAT_126b_014a;
    uVar5 = DAT_126b_014c;
  }
  DAT_126b_014c = uVar5;
  DAT_126b_014a = iVar4;
  return iVar3 + 8;
}



int __cdecl16far FUN_1050_0139(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_DX;
  int *local_6;
  
  iVar1 = FUN_1081_00e3(param_1,param_2);
  local_6 = (int *)CONCAT22(in_DX,iVar1);
  if ((in_DX == -1) && (iVar1 == -1)) {
    iVar2 = 0;
  }
  else {
    *(int *)(iVar1 + 6) = DAT_126b_014c;
    *(int *)(iVar1 + 4) = DAT_126b_014a;
    *(int *)(iVar1 + 2) = param_2 + (uint)(0xfffe < param_1);
    *local_6 = param_1 + 1;
    iVar2 = iVar1 + 8;
    DAT_126b_014a = iVar1;
    DAT_126b_014c = in_DX;
  }
  return iVar2;
}



int __cdecl16far FUN_1050_01a7(uint param_1,int param_2)

{
  int iVar1;
  int in_DX;
  int *local_6;
  
  iVar1 = FUN_1081_00e3(param_1,param_2);
  local_6 = (int *)CONCAT22(in_DX,iVar1);
  if ((in_DX == -1) && (iVar1 == -1)) {
    iVar1 = 0;
  }
  else {
    DAT_126b_0146 = iVar1;
    DAT_126b_0148 = in_DX;
    DAT_126b_014a = iVar1;
    DAT_126b_014c = in_DX;
    *(int *)(iVar1 + 2) = param_2 + (uint)(0xfffe < param_1);
    *local_6 = param_1 + 1;
    iVar1 = iVar1 + 8;
  }
  return iVar1;
}



int __cdecl16far FUN_1050_020d(uint param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  uint *local_6;
  
  if ((param_1 | param_2) == 0) {
    uVar3 = 0;
  }
  else {
    param_2 = param_2 + (0xffe8 < param_1);
    uVar4 = param_1 + 0x17 & 0xfff0;
    bVar7 = true;
    FUN_1000_036e();
    if (bVar7) {
      uVar3 = FUN_1050_01a7(uVar4,param_2);
    }
    else {
      local_6 = (uint *)CONCAT22(DAT_126b_0150,DAT_126b_014e);
      bVar7 = true;
      FUN_1000_036e();
      while (!bVar7) {
        uVar3 = (undefined2)((ulong)local_6 >> 0x10);
        iVar6 = (int)local_6;
        uVar2 = *(uint *)(iVar6 + 2);
        uVar5 = param_2 + (0xffcf < uVar4);
        if ((uVar5 <= uVar2) && ((uVar2 != uVar5 || (uVar4 + 0x30 <= *local_6)))) {
          uVar3 = FUN_1050_0089(iVar6,uVar3,uVar4,param_2);
          return uVar3;
        }
        uVar2 = *(uint *)(iVar6 + 2);
        bVar7 = uVar2 == param_2;
        if ((param_2 <= uVar2) && ((!bVar7 || (bVar7 = *local_6 == uVar4, uVar4 <= *local_6)))) {
          FUN_1050_0021(iVar6,uVar3);
          uVar4 = *local_6;
          *local_6 = *local_6 + 1;
          piVar1 = (int *)(iVar6 + 2);
          *piVar1 = *piVar1 + (uint)(0xfffe < uVar4);
          return iVar6 + 8;
        }
        local_6 = *(uint **)(iVar6 + 0xc);
        FUN_1000_036e();
      }
      uVar3 = FUN_1050_0139(uVar4,param_2);
    }
  }
  return uVar3;
}



undefined2 FUN_1081_000c(undefined4 param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  
  uVar1 = (param_1._2_2_ - DAT_126b_007b) + 0x40;
  if (uVar1 >> 6 == DAT_126b_0152) {
    uVar2 = 1;
    DAT_126b_008b = (int)param_1;
    DAT_126b_008d = param_1._2_2_;
  }
  else {
    uVar1 = uVar1 & 0xffc0;
    if (DAT_126b_0091 < uVar1 + DAT_126b_007b) {
      uVar1 = DAT_126b_0091 - DAT_126b_007b;
    }
    iVar3 = FUN_1098_0004(DAT_126b_007b,uVar1);
    if (iVar3 == -1) {
      DAT_126b_0152 = uVar1 >> 6;
      DAT_126b_008d = param_1._2_2_;
      uVar2 = 1;
      DAT_126b_008b = (int)param_1;
    }
    else {
      DAT_126b_0091 = DAT_126b_007b + iVar3;
      DAT_126b_008f = 0;
      uVar2 = 0;
    }
  }
  return uVar2;
}



undefined2 __cdecl16far FUN_1081_009c(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  bool in_CF;
  bool in_ZF;
  
  FUN_1000_036e();
  if (((!in_CF) && (FUN_1000_036e(), in_CF || in_ZF)) &&
     (iVar1 = FUN_1081_000c(param_1,param_2), iVar1 != 0)) {
    return 0;
  }
  return 0xffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __cdecl16far FUN_1081_00e3(int param_1,uint param_2)

{
  undefined2 uVar1;
  undefined2 local_a;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  bVar3 = param_2 < 0x10;
  bVar4 = param_2 == 0x10;
  if ((int)param_2 < 0x10) {
LAB_1081_00ff:
    local_a = FUN_1000_0313();
    FUN_1000_036e(local_a,DAT_126b_008d);
    if ((bVar3) || (FUN_1000_036e(local_a,DAT_126b_008d), !bVar3 && !bVar4)) {
      uVar1 = 0xffff;
    }
    else {
      uVar1 = (undefined2)_DAT_126b_008b;
      iVar2 = FUN_1081_000c(local_a,DAT_126b_008d);
      if (iVar2 == 0) {
        uVar1 = 0xffff;
      }
    }
  }
  else {
    if ((int)param_2 < 0x11) {
      bVar3 = false;
      bVar4 = param_1 == 0;
      if (bVar4) goto LAB_1081_00ff;
    }
    uVar1 = 0xffff;
  }
  return uVar1;
}



undefined2 __cdecl16far FUN_1098_0004(undefined2 param_1,undefined2 param_2)

{
  code *pcVar1;
  undefined2 uVar2;
  bool in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (in_CF) {
    FUN_1046_000e(uVar2);
  }
  else {
    param_2 = 0xffff;
  }
  return param_2;
}



// WARNING: Could not reconcile some variable overlaps

int FUN_109a_0004(int *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  char *local_6;
  
  iVar4 = *param_1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  if ((*(uint *)((int)param_1 + 2) & 0x40) == 0) {
    local_6 = *(char **)((int)param_1 + 0xc);
    iVar2 = iVar4;
    while (pcVar1 = local_6, iVar3 = iVar2 + -1, iVar2 != 0) {
      local_6 = (char *)((ulong)local_6 & 0xffff0000 | (ulong)((int)local_6 + 1));
      iVar2 = iVar3;
      if (*pcVar1 == '\n') {
        iVar4 = iVar4 + 1;
      }
    }
  }
  return iVar4;
}



undefined2 __cdecl16far FUN_109a_0052(int *param_1,uint param_3,int param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar2 = FUN_112f_0006((int)param_1,param_1._2_2_);
  if (iVar2 == 0) {
    if ((param_5 == 1) && (0 < *param_1)) {
      uVar4 = FUN_109a_0004((int)param_1,param_1._2_2_);
      bVar6 = param_3 < uVar4;
      param_3 = param_3 - uVar4;
      param_4 = (param_4 - ((int)uVar4 >> 0xf)) - (uint)bVar6;
    }
    puVar1 = (uint *)((int)param_1 + 2);
    *puVar1 = *puVar1 & 0xfe5f;
    *param_1 = 0;
    iVar2 = *(int *)((int)param_1 + 10);
    uVar3 = *(undefined2 *)((int)param_1 + 8);
    *(int *)((int)param_1 + 0xe) = iVar2;
    *(undefined2 *)((int)param_1 + 0xc) = uVar3;
    iVar5 = FUN_1115_000d((int)*(char *)((int)param_1 + 4),param_3,param_4,param_5);
    if ((iVar2 == -1) && (iVar5 == -1)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0xffff;
  }
  return uVar3;
}



int __cdecl16far FUN_109a_00e0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_112f_0006((int)param_1,param_1._2_2_);
  if (iVar1 == 0) {
    iVar1 = FUN_1262_0005((int)*(char *)((int)param_1 + 4));
    if (0 < *param_1) {
      iVar2 = FUN_109a_0004((int)param_1,param_1._2_2_);
      iVar1 = iVar1 - iVar2;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



void __cdecl16near FUN_10ae_0007(void)

{
  int iVar1;
  int local_6;
  
  local_6 = 0x256;
  iVar1 = 0x14;
  while (iVar1 != 0) {
    if ((*(uint *)(local_6 + 2) & 0x300) == 0x300) {
      FUN_112f_0006(local_6,0x126b);
    }
    local_6 = local_6 + 0x14;
    iVar1 = iVar1 + -1;
  }
  return;
}



undefined2 FUN_10ae_0047(int *param_1)

{
  uint *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  if ((*(uint *)(iVar6 + 2) & 0x200) != 0) {
    FUN_10ae_0007();
  }
  uVar2 = *(undefined2 *)(iVar6 + 6);
  uVar3 = *(undefined2 *)(iVar6 + 10);
  uVar4 = *(undefined2 *)(iVar6 + 8);
  *(undefined2 *)(iVar6 + 0xe) = uVar3;
  *(undefined2 *)(iVar6 + 0xc) = uVar4;
  iVar5 = FUN_10ec_0006((int)*(char *)(iVar6 + 4),uVar4,uVar3,uVar2);
  *param_1 = iVar5;
  if (iVar5 < 1) {
    if (*param_1 == 0) {
      *(uint *)(iVar6 + 2) = *(uint *)(iVar6 + 2) & 0xfe7f | 0x20;
    }
    else {
      *param_1 = 0;
      puVar1 = (uint *)(iVar6 + 2);
      *puVar1 = *puVar1 | 0x10;
    }
    uVar7 = 0xffff;
  }
  else {
    puVar1 = (uint *)(iVar6 + 2);
    *puVar1 = *puVar1 & 0xffdf;
    uVar7 = 0;
  }
  return uVar7;
}



void __cdecl16far FUN_10ae_00d9(int *param_1)

{
  *param_1 = *param_1 + 1;
  FUN_10ae_00f3(param_1._0_2_,param_1._2_2_);
  return;
}



uint __cdecl16far FUN_10ae_00f3(int *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  byte local_3;
  
  while( true ) {
    iVar4 = *param_1;
    *param_1 = *param_1 + -1;
    iVar5 = (int)param_1;
    uVar6 = (undefined2)((ulong)param_1 >> 0x10);
    if (SBORROW2(iVar4,1) == *param_1 < 0) {
      piVar1 = (int *)(iVar5 + 0xc);
      *piVar1 = *piVar1 + 1;
      uVar3 = *(undefined4 *)(iVar5 + 0xc);
      return (uint)*(byte *)((int)uVar3 + -1);
    }
    iVar4 = *param_1;
    *param_1 = *param_1 + 1;
    if ((SCARRY2(iVar4,1) != *param_1 < 0) || ((*(uint *)(iVar5 + 2) & 0x110) != 0)) break;
    while (puVar2 = (uint *)(iVar5 + 2), *puVar2 = *puVar2 | 0x80, *(int *)(iVar5 + 6) == 0) {
      if ((DAT_126b_040e != 0) || (iVar5 != 0x256)) {
        while( true ) {
          if ((*(uint *)(iVar5 + 2) & 0x200) != 0) {
            FUN_10ae_0007();
          }
          iVar4 = FUN_10f8_000b((int)*(char *)(iVar5 + 4),&local_3);
          if (iVar4 != 1) break;
          if ((local_3 != 0xd) || ((*(uint *)(iVar5 + 2) & 0x40) != 0)) {
            puVar2 = (uint *)(iVar5 + 2);
            *puVar2 = *puVar2 & 0xffdf;
            return (uint)local_3;
          }
        }
        iVar4 = FUN_1128_0006((int)*(char *)(iVar5 + 4));
        if (iVar4 == 1) {
          *(uint *)(iVar5 + 2) = *(uint *)(iVar5 + 2) & 0xfe7f | 0x20;
        }
        else {
          puVar2 = (uint *)(iVar5 + 2);
          *puVar2 = *puVar2 | 0x10;
        }
        return 0xffff;
      }
      iVar4 = FUN_10d3_0008((int)*(char *)0x25a);
      if (iVar4 == 0) {
        puVar2 = (uint *)0x258;
        *puVar2 = *puVar2 & 0xfdff;
      }
      FUN_10d4_000a(0x256,uVar6,0,0,(uint)((*(uint *)0x258 & 0x200) != 0),0x200);
    }
    iVar4 = FUN_10ae_0047(iVar5,uVar6);
    if (iVar4 != 0) {
      return 0xffff;
    }
  }
  puVar2 = (uint *)(iVar5 + 2);
  *puVar2 = *puVar2 | 0x10;
  return 0xffff;
}



uint __cdecl16far FUN_10d3_0008(void)

{
  code *pcVar1;
  uint extraout_DX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return extraout_DX & 0x80;
}



undefined2 __cdecl16far
FUN_10d4_000a(int *param_1,uint param_2,uint param_3,int param_2_00,uint param_3_00)

{
  uint *puVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (((*(int *)(iVar3 + 0x12) == iVar3) && (param_2_00 < 3)) && (param_3_00 < 0x8000)) {
    if ((DAT_126b_0410 == 0) && (iVar3 == 0x26a)) {
      DAT_126b_0410 = 1;
    }
    else {
      if ((DAT_126b_040e == 0) && (iVar3 == 0x256)) {
        DAT_126b_040e = 1;
      }
    }
    if (*param_1 != 0) {
      FUN_109a_0052(iVar3,uVar4,0,0,1);
    }
    if ((*(uint *)(iVar3 + 2) & 4) != 0) {
      FUN_11bf_0000(*(undefined2 *)(iVar3 + 8),*(undefined2 *)(iVar3 + 10));
    }
    puVar1 = (uint *)(iVar3 + 2);
    *puVar1 = *puVar1 & 0xfff3;
    *(undefined2 *)(iVar3 + 6) = 0;
    *(uint *)(iVar3 + 10) = uVar4;
    *(int *)(iVar3 + 8) = iVar3 + 5;
    *(uint *)(iVar3 + 0xe) = uVar4;
    *(int *)(iVar3 + 0xc) = iVar3 + 5;
    if ((param_2_00 != 2) && (param_3_00 != 0)) {
      DAT_126b_0138 = 0x10e8;
      DAT_126b_0136 = 0xc;
      if ((param_2 | param_3) == 0) {
        param_3 = uVar4;
        param_2 = FUN_1050_000c(param_3_00);
        if ((param_3 | param_2) == 0) {
          return 0xffff;
        }
        puVar1 = (uint *)(iVar3 + 2);
        *puVar1 = *puVar1 | 4;
      }
      *(uint *)(iVar3 + 0xe) = param_3;
      *(uint *)(iVar3 + 0xc) = param_2;
      *(uint *)(iVar3 + 10) = param_3;
      *(uint *)(iVar3 + 8) = param_2;
      *(uint *)(iVar3 + 6) = param_3_00;
      if (param_2_00 == 1) {
        puVar1 = (uint *)(iVar3 + 2);
        *puVar1 = *puVar1 | 8;
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffff;
  }
  return uVar2;
}



char * __cdecl16far FUN_10ec_0006(int param_1,undefined4 param_2,int param_4)

{
  uint *puVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char local_3;
  
  if ((param_4 + 1U < 2) || ((*(uint *)(param_1 * 2 + 0x3e6) & 0x200) != 0)) {
    pcVar4 = (char *)0x0;
  }
  else {
    do {
      iVar5 = FUN_10f8_000b(param_1,(char *)param_2,param_2._2_2_,param_4);
      if (iVar5 + 1U < (uint)&DAT_126b_0002) {
        return (char *)iVar5;
      }
      pcVar6 = (char *)param_2;
      pcVar3 = (char *)param_2;
      if ((*(uint *)(param_1 * 2 + 0x3e6) & 0x8000) != 0) {
        return (char *)iVar5;
      }
      do {
        while( true ) {
          pcVar4 = pcVar3;
          cVar2 = *pcVar6;
          if (cVar2 == '\x1a') {
            FUN_1115_000d(param_1,-iVar5,-(uint)(iVar5 != 0),2);
            puVar1 = (uint *)(param_1 * 2 + 0x3e6);
            *puVar1 = *puVar1 | 0x200;
            goto LAB_10ec_00bf;
          }
          if (cVar2 == '\r') break;
          *pcVar4 = cVar2;
          iVar5 = iVar5 + -1;
          pcVar6 = pcVar6 + 1;
          pcVar3 = pcVar4 + 1;
          if (iVar5 == 0) goto LAB_10ec_0095;
        }
        iVar5 = iVar5 + -1;
        pcVar6 = pcVar6 + 1;
        pcVar3 = pcVar4;
      } while (iVar5 != 0);
      FUN_10f8_000b(param_1,&local_3);
      *pcVar4 = local_3;
LAB_10ec_0095:
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 == (char *)param_2);
LAB_10ec_00bf:
    pcVar4 = pcVar4 + -(int)(char *)param_2;
  }
  return pcVar4;
}



void __cdecl16far FUN_10f8_000b(void)

{
  code *pcVar1;
  bool in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (in_CF) {
    FUN_1046_000e();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00011095)
// WARNING: Removing unreachable block (ram,0x000110f8)
// WARNING: Could not reconcile some variable overlaps

undefined * __cdecl16far FUN_10fa_000b(int param_1,ulong param_2,int param_4)

{
  uint *puVar1;
  char cVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  undefined2 unaff_SS;
  int local_90;
  int local_8c;
  char *local_88;
  undefined local_84 [130];
  
  if (param_4 + 1U < 2) {
    param_4 = 0;
  }
  else {
    if ((*(uint *)(param_1 * 2 + 0x3e6) & 0x8000) == 0) {
      puVar1 = (uint *)(param_1 * 2 + 0x3e6);
      *puVar1 = *puVar1 & 0xfdff;
      local_88 = (char *)(param_2 & 0xffff | (ulong)param_2._2_2_ << 0x10);
      local_8c = param_4;
      _local_90 = (char *)CONCAT22(unaff_SS,local_84);
      while (pcVar4 = local_88, local_8c != 0) {
        local_8c = local_8c + -1;
        local_88 = (char *)((ulong)local_88 & 0xffff0000 | (ulong)((int)local_88 + 1));
        cVar2 = *pcVar4;
        if (cVar2 == '\n') {
          *_local_90 = '\r';
          _local_90 = (char *)((ulong)_local_90 & 0xffff0000 | (ulong)(local_90 + 1));
        }
        *_local_90 = cVar2;
        puVar3 = (undefined *)(local_90 + 1);
        _local_90 = (char *)((ulong)_local_90 & 0xffff0000 | ZEXT24(puVar3));
        puVar5 = local_84;
        if ((puVar3 >= puVar5) &&
           ((puVar3 < puVar5 || ((undefined *)&DAT_126b_007f < puVar3 + -(int)puVar5)))) {
          puVar5 = (undefined *)FUN_1111_0001(param_1,local_84);
          if (puVar5 != puVar3 + -(int)local_84) {
            return puVar5 + param_4 + (-(int)(puVar3 + -(int)local_84) - local_8c);
          }
          _local_90 = (char *)CONCAT22(unaff_SS,local_84);
        }
      }
      local_90 = local_90 - (int)local_84;
      if ((local_90 != 0) && (iVar6 = FUN_1111_0001(param_1,local_84), iVar6 != local_90)) {
        param_4 = param_4 + (iVar6 - local_90);
      }
    }
    else {
      param_4 = FUN_1111_0001(param_1,(undefined2)param_2,param_2._2_2_,param_4);
    }
  }
  return (undefined *)param_4;
}



undefined2 __cdecl16far FUN_1111_0001(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined2 uVar3;
  bool bVar4;
  undefined2 in_stack_00000000;
  
  bVar4 = false;
  if ((*(uint *)(param_1 * 2 + 0x3e6) & 0x800) != 0) {
    bVar4 = false;
    FUN_1115_000d(param_1,0,0,2);
  }
  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  if (bVar4) {
    uVar3 = FUN_1046_000e();
  }
  else {
    puVar1 = (uint *)(param_1 * 2 + 0x3e6);
    *puVar1 = *puVar1 | 0x1000;
  }
  return uVar3;
}



void __cdecl16far FUN_1115_000d(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  
  puVar1 = (uint *)(param_1 * 2 + 0x3e6);
  bVar3 = false;
  *puVar1 = *puVar1 & 0xfdff;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (bVar3) {
    FUN_1046_000e();
  }
  return;
}



undefined * __stdcall16far
FUN_1118_000a(char param_1,char param_2,uint param_3,undefined *param_4,uint param_5,uint param_6)

{
  char *pcVar1;
  byte bVar2;
  ulong uVar3;
  char cVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  bool bVar9;
  byte local_24 [34];
  
  uVar8 = (undefined2)((ulong)param_4 >> 0x10);
  pcVar7 = (char *)param_4;
  if ((param_3 < 0x25) && (1 < (byte)param_3)) {
    if (((int)param_6 < 0) && (param_2 != '\0')) {
      *param_4 = 0x2d;
      pcVar7 = pcVar7 + 1;
      bVar9 = param_5 != 0;
      param_5 = -param_5;
      param_6 = -(uint)bVar9 - param_6;
    }
    pbVar6 = local_24;
    if (param_6 == 0) goto LAB_1118_0054;
    do {
      uVar3 = (ulong)param_6;
      param_6 = param_6 / param_3;
      uVar3 = uVar3 % (ulong)param_3 << 0x10 | (ulong)param_5;
      param_5 = (uint)(uVar3 / (ulong)param_3);
      *pbVar6 = (byte)(uVar3 % (ulong)param_3);
      pbVar6 = pbVar6 + 1;
    } while (param_6 != 0);
    while (param_5 != 0) {
LAB_1118_0054:
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



void __cdecl16far FUN_1118_008e(uint param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  
  if (param_4 == 10) {
    iVar1 = (int)param_1 >> 0xf;
  }
  else {
    iVar1 = 0;
  }
  FUN_1118_000a(param_1 & 0xff00 | 0x61,CONCAT11((char)(param_1 >> 8),1),param_4,param_2,param_3,
                param_1,iVar1);
  return;
}



void __cdecl16far
FUN_1118_00bb(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  uint in_AX;
  
  FUN_1118_000a(CONCAT11((char)(in_AX >> 8),0x61),in_AX & 0xff00,param_5,param_3,param_4,param_1,
                param_2);
  return;
}



void __cdecl16far
FUN_1118_00db(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             int param_5)

{
  FUN_1118_000a(0x61,(uint)(param_5 == 10),param_5,param_3,param_4,param_1,param_2);
  return;
}



// WARNING: Removing unreachable block (ram,0x000112dc)

undefined2 __cdecl16far FUN_1128_0006(int param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  bool bVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong uVar6;
  
  bVar3 = false;
  if ((*(uint *)(param_1 * 2 + 0x3e6) & 0x200) != 0) {
    return 1;
  }
  pcVar1 = (code *)swi(0x21);
  uVar4 = (*pcVar1)();
  uVar2 = (undefined2)uVar4;
  if (!bVar3) {
    if ((uVar4 & 0x800000) != 0) {
      return 0;
    }
    bVar3 = false;
    pcVar1 = (code *)swi(0x21);
    uVar5 = (*pcVar1)();
    uVar2 = (undefined2)uVar5;
    if (!bVar3) {
      bVar3 = false;
      pcVar1 = (code *)swi(0x21);
      uVar4 = (*pcVar1)((int)((ulong)uVar5 >> 0x10));
      uVar2 = (undefined2)uVar4;
      if (!bVar3) {
        pcVar1 = (code *)swi(0x21);
        uVar6 = (*pcVar1)();
        uVar2 = (undefined2)uVar6;
        if (!bVar3) {
          if (uVar6 < uVar4) {
            return 0;
          }
          return 1;
        }
      }
    }
  }
  uVar2 = FUN_1046_000e(uVar2);
  return uVar2;
}



undefined2 __cdecl16far FUN_112f_0006(int *param_1)

{
  uint *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (int)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  if (*(int *)(iVar5 + 0x12) != iVar5) {
    return 0xffff;
  }
  if (*param_1 < 0) {
    iVar6 = *(int *)(iVar5 + 6) + *param_1 + 1;
    *param_1 = *param_1 - iVar6;
    uVar2 = *(undefined2 *)(iVar5 + 10);
    uVar3 = *(undefined2 *)(iVar5 + 8);
    *(undefined2 *)(iVar5 + 0xe) = uVar2;
    *(undefined2 *)(iVar5 + 0xc) = uVar3;
    iVar4 = FUN_10fa_000b((int)*(char *)(iVar5 + 4),uVar3,uVar2,iVar6);
    if ((iVar4 != iVar6) && ((*(uint *)(iVar5 + 2) & 0x200) == 0)) {
      puVar1 = (uint *)(iVar5 + 2);
      *puVar1 = *puVar1 | 0x10;
      return 0xffff;
    }
    return 0;
  }
  if ((*(uint *)(iVar5 + 2) & 8) == 0) {
    if (*(int *)(iVar5 + 0xe) != iVar7) {
      return 0;
    }
    if (*(int *)(iVar5 + 0xc) != iVar5 + 5) {
      return 0;
    }
  }
  *param_1 = 0;
  if ((*(int *)(iVar5 + 0xe) == iVar7) && (*(int *)(iVar5 + 0xc) == iVar5 + 5)) {
    uVar2 = *(undefined2 *)(iVar5 + 8);
    *(undefined2 *)(iVar5 + 0xe) = *(undefined2 *)(iVar5 + 10);
    *(undefined2 *)(iVar5 + 0xc) = uVar2;
  }
  return 0;
}



void __cdecl16far FUN_113d_000e(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_SS;
  
  FUN_1167_0037(&stack0x0008,unaff_SS,param_1,param_2,0x26a,0x126b,0x181,0x1140);
  return;
}



void __cdecl16far FUN_1140_0002(char param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  FUN_1140_0021((int)param_1,param_2._0_2_,param_2._2_2_);
  return;
}



uint __cdecl16far FUN_1140_0021(undefined param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 uVar5;
  byte local_3;
  
  local_3 = param_1;
  while( true ) {
    iVar4 = *param_2;
    *param_2 = *param_2 + 1;
    if (SCARRY2(iVar4,1) != *param_2 < 0) break;
    *param_2 = *param_2 + -1;
    if (((*(uint *)((int)param_2 + 2) & 0x90) != 0) || ((*(uint *)((int)param_2 + 2) & 2) == 0)) {
      puVar2 = (uint *)((int)param_2 + 2);
      *puVar2 = *puVar2 | 0x10;
      return 0xffff;
    }
    puVar2 = (uint *)((int)param_2 + 2);
    *puVar2 = *puVar2 | 0x100;
    if (*(int *)((int)param_2 + 6) == 0) {
      if ((((local_3 == 10) && ((*(uint *)((int)param_2 + 2) & 0x40) == 0)) &&
          (iVar4 = FUN_1111_0001((int)*(char *)((int)param_2 + 4),0x444,0x126b,1), iVar4 != 1)) ||
         (iVar4 = FUN_1111_0001((int)*(char *)((int)param_2 + 4),&param_1), iVar4 != 1)) {
        uVar5 = (undefined2)((ulong)param_2 >> 0x10);
        if ((*(uint *)((int)param_2 + 2) & 0x200) == 0) {
          puVar2 = (uint *)((int)param_2 + 2);
          *puVar2 = *puVar2 | 0x10;
          return 0xffff;
        }
      }
      return (uint)local_3;
    }
    if (*param_2 == 0) {
      *param_2 = -1 - *(int *)((int)param_2 + 6);
    }
    else {
      iVar4 = FUN_112f_0006((int)param_2,param_2._2_2_);
      if (iVar4 != 0) {
        return 0xffff;
      }
    }
  }
  piVar1 = (int *)((int)param_2 + 0xc);
  *piVar1 = *piVar1 + 1;
  uVar3 = *(undefined4 *)((int)param_2 + 0xc);
  *(byte *)((int)uVar3 + -1) = local_3;
  if (((*(uint *)((int)param_2 + 2) & 8) != 0) &&
     (((local_3 == 10 || (local_3 == 0xd)) &&
      (iVar4 = FUN_112f_0006((int)param_2,param_2._2_2_), iVar4 != 0)))) {
    return 0xffff;
  }
  return (uint)local_3;
}



void __cdecl16far FUN_1140_0168(undefined2 param_1)

{
  FUN_1140_0021(param_1,0x26a,0x126b);
  return;
}



uint __stdcall16far FUN_1140_0181(int *param_1,uint param_2,byte *param_3)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined2 uVar9;
  
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar8 = (int)param_1;
  uVar6 = param_2;
  if ((*(uint *)(iVar8 + 2) & 8) == 0) {
    if ((((*(uint *)(iVar8 + 2) & 0x40) == 0) || (*(int *)(iVar8 + 6) == 0)) ||
       (param_2 <= *(uint *)(iVar8 + 6))) {
      do {
        pbVar4 = param_3;
        if (uVar6 == 0) {
          return param_2;
        }
        iVar5 = *param_1;
        *param_1 = *param_1 + 1;
        if (SCARRY2(iVar5,1) == *param_1 < 0) {
          param_3 = (byte *)((ulong)param_3 & 0xffff0000 | (ulong)((int)param_3 + 1));
          uVar7 = FUN_1140_0002(uVar6 & 0xff00 | (uint)*pbVar4,iVar8,uVar9);
        }
        else {
          param_3 = (byte *)((ulong)param_3 & 0xffff0000 | (ulong)((int)param_3 + 1));
          bVar2 = *pbVar4;
          piVar1 = (int *)(iVar8 + 0xc);
          *piVar1 = *piVar1 + 1;
          uVar3 = *(undefined4 *)(iVar8 + 0xc);
          *(byte *)((int)uVar3 + -1) = bVar2;
          uVar7 = (uint)bVar2;
        }
        uVar6 = uVar6 - 1;
      } while (uVar7 != 0xffff);
      param_2 = 0;
    }
    else {
      if ((*param_1 == 0) || (iVar5 = FUN_112f_0006(iVar8,uVar9), iVar5 == 0)) {
        uVar6 = FUN_1111_0001((int)*(char *)(iVar8 + 4),(int)param_3,param_3._2_2_,param_2);
        if (uVar6 < param_2) {
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
      pbVar4 = param_3;
      if (uVar6 == 0) {
        return param_2;
      }
      param_3 = (byte *)((ulong)param_3 & 0xffff0000 | (ulong)((int)param_3 + 1));
      iVar5 = FUN_1140_0021((int)(char)*pbVar4,iVar8,uVar9);
      uVar6 = uVar6 - 1;
    } while (iVar5 != -1);
    param_2 = 0;
  }
  return param_2;
}



void FUN_1167_000c(undefined2 param_1)

{
  byte bVar1;
  undefined *unaff_DI;
  undefined2 unaff_ES;
  
  bVar1 = (byte)((uint)param_1 >> 8);
  *unaff_DI = *(undefined *)(ulong)((uint)(bVar1 >> 4) + 0x44d);
  unaff_DI[1] = *(undefined *)(ulong)((uint)(bVar1 & 0xf) + 0x44d);
  unaff_DI[2] = *(undefined *)(ulong)((uint)(byte)((byte)param_1 >> 4) + 0x44d);
  unaff_DI[3] = *(undefined *)(ulong)((uint)((byte)param_1 & 0xf) + 0x44d);
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x000116ad) overlaps instruction at (ram,0x000116aa)
// 
// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack
// WARNING: Removing unreachable block (ram,0x00011040)
// WARNING: Removing unreachable block (ram,0x000110f8)
// WARNING: Removing unreachable block (ram,0x0001104b)
// WARNING: Removing unreachable block (ram,0x00011051)
// WARNING: Removing unreachable block (ram,0x00011095)
// WARNING: Could not reconcile some variable overlaps

undefined * __stdcall16far
FUN_1167_0037(uint *param_1,undefined4 param_2,undefined2 param_3,undefined *param_4,int *param_5,
             undefined2 param_6)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  undefined *puVar4;
  int *piVar5;
  byte bVar6;
  code *pcVar7;
  undefined2 uVar8;
  byte *pbVar9;
  int **ppiVar10;
  char cVar11;
  byte bVar12;
  undefined2 uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint extraout_DX;
  undefined2 extraout_DX_00;
  int extraout_DX_01;
  int extraout_DX_02;
  int extraout_DX_03;
  int extraout_DX_04;
  int *piVar19;
  undefined *puVar20;
  int **ppiVar21;
  int *piVar22;
  int unaff_SI;
  int *piVar23;
  int *piVar24;
  undefined *puVar25;
  undefined2 unaff_ES;
  undefined2 uVar26;
  int *unaff_SS;
  bool bVar27;
  bool bVar28;
  ulong uVar29;
  undefined4 uVar30;
  undefined2 in_stack_00000054;
  char cStack0055;
  undefined *puStack160;
  undefined2 local_9a;
  int *local_98;
  undefined2 local_94;
  undefined2 local_92;
  int iStack144;
  int *local_8c;
  byte bStack137;
  byte *pbStack136;
  undefined auStack132 [42];
  undefined2 local_5a;
  char local_57;
  int local_56 [21];
  undefined local_2b;
  int iStack42;
  int iStack40;
  undefined2 uStack36;
  undefined4 local_a;
  undefined4 local_6;
  
  uVar13 = 0x126b;
  puVar25 = &stack0xfffe;
code_r0x000116b0:
  local_5a = 0;
  local_57 = 'P';
  local_6 = (uint *)((ulong)local_6 & 0xffff);
  piVar24 = local_56;
  uVar26 = (undefined2)((ulong)param_2 >> 0x10);
  piVar23 = (int *)param_2;
  local_98 = piVar24;
LAB_1167_00a6:
  piVar19 = (int *)((int)piVar23 + 1);
  bVar12 = *(byte *)piVar23;
  if (bVar12 == 0) goto LAB_1167_055c;
  piVar22 = piVar19;
  if (bVar12 == 0x25) {
    piVar22 = piVar23 + 1;
    bVar12 = *(byte *)piVar19;
    local_8c = piVar19;
    if (bVar12 != 0x25) goto code_r0x0001173b;
  }
  *(byte *)piVar24 = bVar12;
  piVar24 = (int *)((int)piVar24 + 1);
  cVar11 = local_57 + -1;
  bVar27 = local_57 < '\x01';
  piVar23 = piVar22;
  local_57 = cVar11;
  if (cVar11 == '\0' || bVar27) {
    FUN_1167_0066();
  }
  goto LAB_1167_00a6;
LAB_11f4_003a:
  piVar24 = (int *)((int)piVar22 + 1);
  bVar12 = *(byte *)piVar22;
  if (bVar12 == 0) {
    return (undefined *)iStack42;
  }
  if (bVar12 == 0x25) {
    uStack36 = 0xffff;
    local_2b = 0x20;
    piVar22 = piVar22 + 1;
    uVar15 = SEXT12((char)*(byte *)piVar24);
    if ((int)uVar15 < 0) {
      return (undefined *)iStack42;
    }
    bVar12 = *(byte *)(uVar15 + 0x4be);
    puVar25 = (undefined *)(uint)bVar12;
    param_5 = piVar22;
    if (0x15 < bVar12) {
LAB_11f4_0460:
      puStack160 = param_4;
      (*(code *)param_2)(0x1000,0xffff);
      return (undefined *)(iStack42 - (uint)(iStack42 == 0));
    }
    piVar19 = (int *)((int)puVar25 * 2);
    puVar20 = &stack0xfffe;
    uVar26 = param_6;
    switch(bVar12) {
    case 0:
      break;
    case 1:
                    // WARNING: Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
      return puVar25;
    case 2:
      pcVar1 = &stack0xfffe + (int)piVar22;
      *pcVar1 = *pcVar1 + bVar12;
      puVar20 = &stack0xfffe;
      break;
    case 3:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case 4:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case 5:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case 6:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    default:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case 8:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case 10:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case 0xc:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case 0xe:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case 0xf:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case 0x10:
      *(undefined2 *)((int)piVar19 + uVar15) = 0x30b4;
      goto switchD_1000_201e_caseD_13;
    case 0x11:
      uVar13 = param_6;
      while( true ) {
        *(byte *)piVar19 = (byte)puVar25;
        puVar25 = (undefined *)(iStack144 + 1);
        _iStack144 = (undefined *)((ulong)_iStack144 & 0xffff0000 | ZEXT24(puVar25));
code_r0x0001104c:
        puVar20 = auStack132;
        if ((puVar25 >= puVar20) &&
           ((puVar25 < puVar20 || ((undefined *)&DAT_126b_007f < puVar25 + -(int)puVar20)))) {
          puVar25 = (undefined *)(iStack144 - (int)auStack132);
          puStack160 = puVar25;
          puVar20 = (undefined *)FUN_1111_0001((code *)param_1,auStack132);
          if (puVar20 != puVar25) {
            return puVar20 + (((int)param_2._2_2_ - (int)local_8c) - (int)puVar25);
          }
          _iStack144 = (undefined *)CONCAT22(unaff_SS,auStack132);
        }
        pbVar9 = pbStack136;
        if (local_8c == (int *)0x0) break;
        local_8c = (int *)((int)local_8c + -1);
        pbStack136 = (byte *)((ulong)pbStack136 & 0xffff0000 | (ulong)((int)pbStack136 + 1));
        bStack137 = *pbVar9;
        if (bStack137 == 10) {
          *_iStack144 = 0xd;
          _iStack144 = (undefined *)((ulong)_iStack144 & 0xffff0000 | (ulong)(iStack144 + 1));
        }
        puVar25 = (undefined *)(uint)bStack137;
        piVar19 = (int *)_iStack144;
        uVar13 = (int)((ulong)_iStack144 >> 0x10);
      }
      puVar25 = (undefined *)(iStack144 - (int)auStack132);
      if (puVar25 != (undefined *)0x0) {
        puStack160 = puVar25;
        puVar20 = (undefined *)FUN_1111_0001((code *)param_1,auStack132);
        if (puVar20 != puVar25) {
          param_2._2_2_ = puVar20 + (int)(param_2._2_2_ + -(int)puVar25);
        }
      }
                    // WARNING: Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
      return param_2._2_2_;
    case 0x12:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case 0x13:
      goto switchD_1000_201e_caseD_13;
    case 0x14:
      goto code_r0x0001104c;
    case 0x15:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    goto switchD_1000_201e_caseD_0;
  }
  iVar16 = (int)(char)bVar12;
  iStack40 = iStack40 + 1;
  puStack160 = param_4;
  uVar30 = (*(code *)param_1)(0x1000);
  iVar18 = (int)((ulong)uVar30 >> 0x10);
  iVar17 = (int)uVar30;
  if (iVar17 < 0) goto LAB_11f4_0460;
  piVar22 = piVar24;
  if ((iVar16 < 0) || (*(char *)(iVar16 + 0x4be) != '\x01')) {
    if (iVar17 != iVar16) {
      puStack160 = param_4;
      (*(code *)param_2)(0x1000,iVar17);
                    // WARNING: Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
      return (undefined *)iStack42;
    }
  }
  else {
    while ((-1 < (char)iVar17 && (*(char *)(iVar17 + 0x4be) == '\x01'))) {
      iStack40 = iStack40 + 1;
      puStack160 = param_4;
      iVar17 = (*(code *)param_1)(0x1000);
      if (iVar17 < 1) goto LAB_11f4_0460;
    }
    puStack160 = param_4;
    (*(code *)param_2)(0x1000,iVar17);
    iStack40 = iStack40 + -1;
    iVar18 = extraout_DX_03;
  }
  goto LAB_11f4_003a;
switchD_1000_201e_caseD_13:
  pcVar7 = (code *)swi(0x21);
  uVar29 = (*pcVar7)();
  puVar25 = DAT_126b_0002;
code_r0x00010010:
  uVar8 = s_Turbo_C___Copyright__c__1988_Bor_126b_0004._40_2_;
  uVar13 = (undefined2)(uVar29 >> 0x10);
  *(undefined2 *)&DAT_126b_007d = (int)uVar29;
  *(undefined2 *)&DAT_126b_007b = uVar26;
  *(undefined2 *)&DAT_126b_0077 = uVar8;
  *(undefined **)(undefined2 *)&DAT_126b_0091 = puVar25;
  *(undefined2 *)&DAT_126b_0081 = 0xffff;
  puStack160 = (undefined *)0x2e;
  FUN_1000_012f();
  uVar30 = *(undefined4 *)&DAT_126b_0075;
  uVar26 = (undefined2)((ulong)uVar30 >> 0x10);
  piVar24 = (int *)uVar30;
code_r0x00010032:
  uVar15 = 0x7fff;
  piVar19 = piVar24;
  piVar23 = piVar24;
  do {
    if (((*piVar23 == 0x3738) && (iVar18 = piVar23[1], (char)iVar18 == '=')) &&
       (piVar3 = (int *)&DAT_126b_0081, *piVar3 = *piVar3 + 1,
       ((byte)((uint)iVar18 >> 8) & 0xdf) == 0x59)) {
      piVar3 = (int *)&DAT_126b_0081;
      *piVar3 = *piVar3 + 1;
    }
    do {
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      piVar3 = piVar23;
      piVar23 = (int *)((int)piVar23 + 1);
    } while ((byte)piVar24 != *(byte *)piVar3);
    if (uVar15 == 0) goto LAB_1000_01b6;
    piVar19 = (int *)((int)piVar19 + 1);
  } while (*(byte *)piVar23 != (byte)piVar24);
  *(int *)&DAT_126b_0075 = -(uVar15 | 0x8000);
  piVar19 = (int *)((int)piVar19 * 4 + 0x10U & 0xfff0);
  *(int **)&DAT_126b_0079 = piVar19;
  uVar15 = *(uint *)&DAT_126b_0142;
  iVar18 = (int)unaff_SS;
  puVar20 = puVar25 + -(int)unaff_SS;
switchD_1000_201e_caseD_0:
  if (uVar15 < 0x200) {
    uVar15 = 0x200;
    *(undefined2 *)&DAT_126b_0142 = 0x200;
  }
  bVar12 = 4;
  puStack160 = (undefined *)((uVar15 >> 4) + 1);
  if (puStack160 <= puVar20) {
    puVar25 = puStack160 + iVar18;
    *(undefined **)(int *)&DAT_126b_0089 = puVar25;
    *(undefined **)(int *)&DAT_126b_008d = puVar25;
    piVar19 = (int *)(puVar25 + -*(int *)&DAT_126b_007b);
    pcVar7 = (code *)swi(0x21);
    (*pcVar7)();
    piVar24 = (int *)(unaff_SI << (bVar12 & 0x1f));
    uVar15 = extraout_DX;
switchD_1000_177f_caseD_e:
    puVar25 = (undefined *)&DAT_12bf_0014;
    iVar18 = 0x80;
    while (iVar18 != 0) {
      iVar18 = iVar18 + -1;
      puVar4 = puVar25;
      puVar25 = puVar25 + 1;
      *puVar4 = 0;
    }
    piVar24[-1] = 0x1000;
    (**(code **)&DAT_126b_053e)();
    FUN_1000_01d1();
    FUN_1000_02cf();
    pcVar7 = (code *)swi(0x1a);
    (*pcVar7)();
    *(undefined2 *)&DAT_126b_0083 = extraout_DX_00;
    *(int *)&DAT_126b_0085 = iVar18;
    local_98 = (int *)0x1000;
    local_9a = 0xee;
    (**(code **)&DAT_12bf_0002)();
    local_98 = *(int **)&DAT_126b_0073;
    local_9a = *(undefined2 *)&DAT_126b_0071;
    unaff_ES = *(undefined2 *)&DAT_126b_006d;
    puStack160 = (undefined *)*(undefined2 *)&DAT_126b_006b;
    FUN_103c_0002();
    FUN_104a_000a();
    FUN_1000_0172();
    (*pcRam00000540)(0x1000);
    pcVar7 = (code *)swi(0x21);
    (*pcVar7)();
    unaff_SS = (int *)uVar15;
  }
LAB_1000_01b6:
  do {
    puStack160 = (undefined *)0x1be;
    FUN_1000_01a7();
    puStack160 = (undefined *)0x3;
    cVar11 = FUN_1000_010d();
    pcVar1 = (char *)((int)piVar19 + (int)piVar22);
    *pcVar1 = *pcVar1 + cVar11;
    pcVar1 = (char *)((int)piVar19 + (int)piVar22);
    *pcVar1 = *pcVar1 + cVar11;
    pcVar1 = (char *)((int)piVar19 + (int)piVar22);
    *pcVar1 = *pcVar1 + cVar11;
    pcVar1 = (char *)((int)piVar19 + (int)piVar22);
    *pcVar1 = *pcVar1 + cVar11;
    pcVar1 = (char *)((int)piVar19 + (int)piVar22);
    *pcVar1 = *pcVar1 + cVar11;
                    // WARNING (jumptable): Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101c9) is written
    puRam000101c9 = puStack160;
                    // WARNING (jumptable): Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
                    // WARNING (jumptable): Read-only address (ram,0x000101cd) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
    uRam000101cd = 0;
    uVar14 = (uint)*(byte *)((int)&DAT_126b_007f + 1);
    piVar19 = (int *)(uVar14 + 1);
    piVar22 = (int *)(iRam00000075 + 2);
    uVar15 = 1;
    uVar13 = uRam0000007b;
    uRam000101cb = unaff_ES;
    if (2 < bRam0000007d) {
      uVar15 = 0x7f;
      piVar24 = piVar22;
      do {
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        piVar3 = piVar24;
        piVar24 = (int *)((int)piVar24 + 1);
      } while (*(byte *)piVar3 != 0);
      if (uVar15 == 0) goto LAB_1000_01b6;
      uVar15 = uVar15 ^ 0x7f;
      uVar13 = uRam00000077;
    }
    puVar25 = (undefined *)(uVar14 + 2 + uVar15 & 0xfffe);
    iVar18 = -(int)puVar25;
    piVar24 = (int *)(&stack0xff62 + iVar18);
    if (puVar25 <= &stack0xff62) {
      *(uint *)(undefined **)((int)&puStack160 + iVar18) = uVar15;
      piVar23 = piVar24;
      while (uVar15 - 1 != 0) {
        piVar5 = piVar23;
        piVar23 = (int *)((int)piVar23 + 1);
        piVar3 = piVar22;
        piVar22 = (int *)((int)piVar22 + 1);
        *(byte *)piVar5 = *(byte *)piVar3;
        uVar15 = uVar15 - 1;
      }
      bVar27 = false;
      *(byte *)piVar23 = 0;
      bVar28 = uVar15 == 0;
LAB_1000_0243:
      *(undefined2 *)(&stack0xff5e + iVar18) = 0x246;
      bVar12 = FUN_1000_025f();
      iVar16 = extraout_DX_01;
      if (bVar27 || bVar28) {
        do {
          if (bVar27) {
            iVar16 = (int)*(undefined **)((int)&puStack160 + iVar18) + iVar16;
            piVar19 = (int *)((uVar15 + 1) * 4);
            ppiVar21 = (int **)(piVar24 + (uVar15 + 1) * 0x7ffe);
            piVar22 = piVar24;
            uRam0000006b = uVar15;
            ppiVar10 = ppiVar21;
            piVar23 = unaff_SS;
            if (piVar24 < piVar19) goto LAB_1000_01b6;
            goto LAB_1000_02af;
          }
          *(undefined2 *)(&stack0xff5e + iVar18) = 0x24d;
          bVar12 = FUN_1000_025f();
          iVar16 = extraout_DX_02;
        } while (!bVar27 && !bVar28);
      }
      if ((bVar12 != 0x20) && (bVar12 != 0xd)) break;
      goto LAB_1000_025b;
    }
  } while( true );
  bVar27 = bVar12 < 9;
  bVar28 = bVar12 == 9;
  if (bVar28) {
LAB_1000_025b:
    bVar27 = false;
    bVar28 = true;
  }
  goto LAB_1000_0243;
  while( true ) {
    *ppiVar21 = piVar24;
    ppiVar21[1] = unaff_SS;
    ppiVar21 = ppiVar21 + 2;
    do {
      piVar3 = piVar24;
      piVar24 = (int *)((int)piVar24 + 1);
      bVar27 = *(byte *)piVar3 != 0;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0 && bVar27);
    ppiVar10 = ppiRam0000006d;
    piVar23 = piRam0000006f;
    if (bVar27) break;
LAB_1000_02af:
    piRam0000006f = piVar23;
    ppiRam0000006d = ppiVar10;
    if (iVar16 == 0) break;
  }
  *ppiVar21 = (int *)0x0;
  ppiVar21[1] = (int *)0x0;
                    // WARNING: Treating indirect jump as call
  uVar13 = (*(code *)0x0)();
  return (undefined *)uVar13;
code_r0x0001173b:
  local_9a = 0x20;
  _iStack144 = (undefined *)((ulong)_iStack144 & 0xff);
  local_94 = 0xffff;
  local_92 = 0xffff;
  uVar15 = (uint)bVar12;
  local_98 = piVar24;
  if (0x5f < (byte)(bVar12 - 0x20)) {
LAB_1167_0553:
    do {
      FUN_1167_005d();
      piVar3 = piVar19;
      piVar19 = (int *)((int)piVar19 + 1);
    } while (*(byte *)piVar3 != 0);
LAB_1167_055c:
    if (local_57 < 'P') {
      FUN_1167_0066();
    }
    if (local_6._2_2_ != 0) {
      local_5a = 0xffff;
    }
    return (undefined *)local_5a;
  }
  bVar6 = *(byte *)((uint)(byte)(bVar12 - 0x20) + 0x45d);
  uVar14 = (uint)bVar6;
  if (0x17 < bVar6) goto LAB_1167_0553;
  piVar19 = (int *)(uVar14 * 2);
  switch(bVar6) {
  case 0:
    iRam00012877 = *(int *)(&stack0xfffe + (int)piVar22) * 0x2e;
    goto switchD_1000_201e_caseD_13;
  case 1:
    piVar19[6] = uVar14;
    if ((piVar24 != (int *)&DAT_126b_0002) && (piVar22 != (int *)0x0)) {
      DAT_126b_0138 = 0x10e8;
      DAT_126b_0136 = 0xc;
      if (((uint)(code *)param_2 | (uint)param_2._2_2_) == 0) {
        uVar14 = FUN_1050_000c(piVar22);
        param_2 = CONCAT22(uVar15,uVar14);
        if ((uVar15 | uVar14) == 0) {
          return (undefined *)0xffff;
        }
        puVar2 = (uint *)((int)param_1 + 2);
        *puVar2 = *puVar2 | 4;
      }
      uVar13 = (undefined2)((ulong)param_1 >> 0x10);
      iVar18 = (int)param_1;
      *(undefined **)(undefined2 *)(iVar18 + 0xe) = param_2._2_2_;
      *(code **)(undefined2 *)(iVar18 + 0xc) = (code *)param_2;
      *(undefined **)(undefined2 *)(iVar18 + 10) = param_2._2_2_;
      *(code **)(undefined2 *)(iVar18 + 8) = (code *)param_2;
      *(int **)(iVar18 + 6) = piVar22;
      if (piVar24 == (int *)0x1) {
        puVar2 = (uint *)(iVar18 + 2);
        *puVar2 = *puVar2 | 8;
      }
    }
    return (undefined *)0;
  case 2:
    if (bVar6 != 0) {
      return (undefined *)uVar14;
    }
    cStack0055 = cStack0055 + bVar12;
    unaff_ES = uVar26;
    goto code_r0x000116b0;
  case 3:
    out(*(byte *)piVar22,uVar15);
    puVar2 = (uint *)((int)piVar19 + (int)((int)piVar23 + 3));
    uVar15 = *puVar2;
    piVar3 = piVar24 + 7;
    *(byte *)piVar3 = *(byte *)piVar3 + CARRY2(uVar14,*puVar2);
    DAT_126b_014e = 0;
    DAT_126b_0150 = 0;
    return (undefined *)(uVar14 + uVar15);
  case 4:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 5:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 6:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 7:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 8:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 9:
    uVar29 = (ulong)CONCAT12(bVar12,(uint)(byte)(bVar6 + *(char *)((int)piVar19 + (int)piVar22)));
    puVar25 = &stack0xfffe;
    goto code_r0x00010010;
  case 10:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 0xb:
    goto code_r0x00010032;
  case 0xc:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 0xd:
    in(uVar15);
    uVar26 = (undefined2)((ulong)param_1 >> 0x10);
    uVar15 = *param_1;
    *param_1 = *param_1 - 1;
    piVar3 = (int *)((int)param_1 + 2);
    *piVar3 = *piVar3 - (uint)(uVar15 == 0);
    uVar13 = FUN_1000_0313();
    local_a = (uint *)CONCAT22(uVar26,uVar13);
    local_6 = *(uint **)((int)param_1 + 4);
    bVar27 = (*local_6 & 1) == 0;
    if ((!bVar27) || (FUN_1000_036e(), bVar27)) {
      FUN_11bf_0012((code *)param_1,param_1._2_2_);
      goto LAB_11bf_02ae;
    }
    iVar18 = *(int *)((int)param_1 + 2);
    uVar15 = *param_1;
    uVar26 = (undefined2)((ulong)local_6 >> 0x10);
    piVar19 = (int *)local_6;
    uVar14 = *local_6;
    *local_6 = *local_6 + uVar15;
    piVar3 = piVar19 + 1;
    *piVar3 = *piVar3 + iVar18 + (uint)CARRY2(uVar14,uVar15);
    uVar13 = (undefined2)((ulong)local_a >> 0x10);
    *(undefined2 *)((int)local_a + 6) = uVar26;
    *(int **)((int)local_a + 4) = piVar19;
    break;
  case 0xe:
    goto switchD_1000_177f_caseD_e;
  case 0xf:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 0x10:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 0x11:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 0x12:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 0x13:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 0x14:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 0x15:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 0x16:
    FUN_1000_03ba(0x1000,piVar24,uVar26);
    iVar18 = extraout_DX_04;
    piVar22 = param_5;
    goto LAB_11f4_003a;
  case 0x17:
  }
  param_1 = (uint *)CONCAT22(uVar26,piVar19);
LAB_11bf_02ae:
  uVar15 = *local_a & 1;
  if (uVar15 == 0) {
    uVar15 = FUN_11bf_00b1((code *)param_1,param_1._2_2_,(undefined2)local_a,local_a._2_2_);
  }
  return (undefined *)uVar15;
}



void __cdecl16near FUN_1167_005d(void)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  code **ppcVar4;
  undefined in_AL;
  int iVar5;
  int unaff_BP;
  undefined *unaff_DI;
  undefined2 unaff_SS;
  
  *unaff_DI = in_AL;
  pcVar1 = (char *)(unaff_BP + -0x55);
  cVar3 = *pcVar1;
  *pcVar1 = *pcVar1 + -1;
  if (*pcVar1 != '\0' && SBORROW1(cVar3,'\x01') == *pcVar1 < '\0') {
    ppcVar4 = (code **)(unaff_BP + 0x12);
    iVar5 = (**ppcVar4)(0x1000,*(undefined2 *)(unaff_BP + 0xe),*(undefined2 *)(unaff_BP + 0x10),
                        unaff_DI + (1 - (unaff_BP + -0x54)),unaff_BP + -0x54);
    if (iVar5 == 0) {
      *(undefined2 *)(unaff_BP + -2) = 1;
    }
    *(undefined *)(unaff_BP + -0x55) = 0x50;
    piVar2 = (int *)(unaff_BP + -0x58);
    *(undefined **)piVar2 = unaff_DI + (1 - (unaff_BP + -0x54)) + *piVar2;
  }
  return;
}



void __cdecl16near FUN_1167_0066(void)

{
  int *piVar1;
  code **ppcVar2;
  int iVar3;
  int unaff_BP;
  int unaff_DI;
  int iVar4;
  undefined2 unaff_SS;
  
  iVar4 = unaff_DI - (unaff_BP + -0x54);
  ppcVar2 = (code **)(unaff_BP + 0x12);
  iVar3 = (**ppcVar2)(0x1000,*(undefined2 *)(unaff_BP + 0xe),*(undefined2 *)(unaff_BP + 0x10),iVar4,
                      unaff_BP + -0x54);
  if (iVar3 == 0) {
    *(undefined2 *)(unaff_BP + -2) = 1;
  }
  *(undefined *)(unaff_BP + -0x55) = 0x50;
  piVar1 = (int *)(unaff_BP + -0x58);
  *piVar1 = *piVar1 + iVar4;
  return;
}



void __cdecl16far FUN_11bf_0000(undefined2 param_1,undefined2 param_2)

{
  FUN_11bf_02da(param_1,param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl16far FUN_11bf_0012(ulong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  bool bVar4;
  
  bVar4 = true;
  FUN_1000_036e();
  if (bVar4) {
    _DAT_126b_014e = param_1 & 0xffff | (ulong)param_1._2_2_ << 0x10;
    *(uint *)((int)param_1 + 10) = param_1._2_2_;
    *(int *)((int)param_1 + 8) = (int)param_1;
    *(uint *)((int)param_1 + 0xe) = param_1._2_2_;
    *(int *)((int)param_1 + 0xc) = (int)param_1;
  }
  else {
    uVar3 = (undefined2)(_DAT_126b_014e >> 0x10);
    iVar2 = (int)_DAT_126b_014e;
    uVar1 = *(undefined4 *)(iVar2 + 0xc);
    *(uint *)(iVar2 + 0xe) = param_1._2_2_;
    *(int *)(iVar2 + 0xc) = (int)param_1;
    uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
    iVar2 = (int)uVar1;
    *(uint *)(iVar2 + 10) = param_1._2_2_;
    *(int *)(iVar2 + 8) = (int)param_1;
    *(undefined2 *)((int)param_1 + 0xe) = uVar3;
    *(int *)((int)param_1 + 0xc) = iVar2;
    *(undefined2 *)((int)param_1 + 10) = DAT_126b_0150;
    *(undefined2 *)((int)param_1 + 8) = DAT_126b_014e;
  }
  return;
}



void __cdecl16far FUN_11bf_00b1(uint *param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  bool bVar9;
  
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  iVar4 = *(int *)((int)param_2 + 2);
  uVar2 = *param_2;
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  uVar3 = *param_1;
  *param_1 = *param_1 + uVar2;
  piVar1 = (int *)(iVar6 + 2);
  *piVar1 = *piVar1 + iVar4 + (uint)CARRY2(uVar3,uVar2);
  bVar9 = *piVar1 == 0;
  FUN_1000_036e();
  if (!bVar9) {
    uVar5 = uVar7;
    iVar4 = FUN_1000_0313();
    *(undefined2 *)(iVar4 + 6) = uVar8;
    *(int *)(iVar4 + 4) = iVar6;
    iVar6 = DAT_126b_014a;
    uVar8 = DAT_126b_014c;
  }
  DAT_126b_014c = uVar8;
  DAT_126b_014a = iVar6;
  FUN_1050_0021((int)param_2,uVar7);
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl16far FUN_11bf_0129(void)

{
  undefined2 uVar1;
  bool bVar2;
  undefined4 local_6;
  
  bVar2 = (undefined *)register0x00000010 ==
          (undefined *)(s_Turbo_C___Copyright__c__1988_Bor_126b_0004 + 2);
  FUN_1000_036e();
  if (bVar2) {
    FUN_1081_009c(DAT_126b_0146,DAT_126b_0148);
    _DAT_126b_014a = (uint *)0x0;
    DAT_126b_0148 = 0;
    DAT_126b_0146 = 0;
  }
  else {
    uVar1 = (undefined2)((ulong)_DAT_126b_014a >> 0x10);
    local_6 = *(uint **)((int)_DAT_126b_014a + 4);
    bVar2 = (*local_6 & 1) == 0;
    if (bVar2) {
      local_6._2_2_ = (undefined2)((ulong)local_6 >> 0x10);
      FUN_1050_0021((int)local_6,local_6._2_2_);
      FUN_1000_036e();
      if (bVar2) {
        _DAT_126b_014a = (uint *)0x0;
        DAT_126b_0148 = 0;
        DAT_126b_0146 = 0;
      }
      else {
        _DAT_126b_014a = *(uint **)((int)local_6 + 4);
      }
      FUN_1081_009c((int)local_6,local_6._2_2_);
    }
    else {
      FUN_1081_009c((int)_DAT_126b_014a,uVar1);
      _DAT_126b_014a = local_6;
    }
  }
  return;
}



void FUN_11bf_020e(undefined2 param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 uVar8;
  uint uVar9;
  bool bVar10;
  uint *puStack10;
  
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  iVar7 = (int)param_2;
  uVar3 = *param_2;
  *param_2 = *param_2 - 1;
  piVar1 = (int *)(iVar7 + 2);
  *piVar1 = *piVar1 - (uint)(uVar3 == 0);
  uVar6 = uVar8;
  iVar5 = FUN_1000_0313();
  puStack10 = (uint *)CONCAT22(uVar6,iVar5);
  puVar4 = *(uint **)(iVar7 + 4);
  bVar10 = (*puVar4 & 1) == 0;
  if (bVar10) {
    FUN_1000_036e();
    if (!bVar10) {
      iVar7 = *(int *)(iVar7 + 2);
      uVar3 = *param_2;
      uVar9 = (uint)((ulong)puVar4 >> 0x10);
      uVar2 = *puVar4;
      *puVar4 = *puVar4 + uVar3;
      piVar1 = (int *)((int)puVar4 + 2);
      *piVar1 = *piVar1 + iVar7 + (uint)CARRY2(uVar2,uVar3);
      *(uint *)(iVar5 + 6) = uVar9;
      *(int *)(iVar5 + 4) = (int)puVar4;
      param_2 = (uint *)((ulong)puVar4 & 0xffff | (ulong)uVar9 << 0x10);
      goto LAB_11bf_02ae;
    }
  }
  FUN_11bf_0012(iVar7,uVar8);
LAB_11bf_02ae:
  if ((*puStack10 & 1) == 0) {
    FUN_11bf_00b1(param_2._0_2_,param_2._2_2_,iVar5,uVar6);
  }
  return;
}



void __cdecl16far FUN_11bf_02da(uint param_1,uint param_2)

{
  undefined2 uVar1;
  bool bVar2;
  
  bVar2 = (param_1 | param_2) == 0;
  if (!bVar2) {
    uVar1 = FUN_1000_0313();
    FUN_1000_036e();
    if (bVar2) {
      FUN_11bf_0129();
    }
    else {
      FUN_11bf_020e(0x1000,uVar1,param_2);
    }
  }
  return;
}



void __cdecl16far FUN_11f1_0007(undefined2 param_1,undefined2 param_2)

{
  FUN_11f4_0005(0xf3,0x10ae,0xe,0x1263,0x256,0x126b,param_1,param_2,&stack0x0008);
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0001104b) overlaps instruction at (ram,0x0001104a)
// 
// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack
// WARNING: Removing unreachable block (ram,0x00011040)
// WARNING: Removing unreachable block (ram,0x000110f8)
// WARNING: Removing unreachable block (ram,0x0001104b)
// WARNING: Removing unreachable block (ram,0x00011051)
// WARNING: Removing unreachable block (ram,0x00011095)
// WARNING: Could not reconcile some variable overlaps

undefined * __cdecl16far
FUN_11f4_0005(code *param_1,undefined2 param_2,code *param_2_00,undefined *param_3,
             undefined2 param_4,undefined *param_5,int *param_6,undefined2 param_7)

{
  int *piVar1;
  char *pcVar2;
  undefined *puVar3;
  int *piVar4;
  code *pcVar5;
  byte *pbVar6;
  int **ppiVar7;
  int *piVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  undefined2 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  int extraout_DX_01;
  int extraout_DX_02;
  int in_DX;
  int extraout_DX_03;
  undefined *puVar16;
  int *piVar17;
  undefined *puVar18;
  int **ppiVar19;
  int *piVar20;
  int *piVar21;
  int unaff_DI;
  undefined2 uVar22;
  undefined2 unaff_ES;
  undefined2 uVar23;
  int *unaff_SS;
  bool bVar24;
  bool bVar25;
  undefined4 uVar26;
  int local_90;
  int local_8c;
  byte local_89;
  byte *local_88;
  undefined local_84 [70];
  undefined2 uStack62;
  undefined2 uStack60;
  code *pcStack58;
  undefined *puStack56;
  undefined *puStack52;
  undefined2 uStack44;
  int local_2a;
  int local_28;
  undefined2 local_24;
  
  uVar12 = 0x126b;
  local_2a = 0;
  local_28 = 0;
  piVar20 = param_6;
  while( true ) {
    uVar22 = param_7;
    piVar17 = (int *)((int)piVar20 + 1);
    cVar9 = *(char *)piVar20;
    if (cVar9 == '\0') {
      return (undefined *)local_2a;
    }
    if (cVar9 == '%') break;
    iVar13 = (int)cVar9;
    local_28 = local_28 + 1;
    puStack52 = param_5;
    puStack56 = (undefined *)0x1000;
    pcStack58 = (code *)0x1f95;
    uVar26 = (*param_1)();
    in_DX = (int)((ulong)uVar26 >> 0x10);
    iVar14 = (int)uVar26;
    if (iVar14 < 0) goto LAB_11f4_0460;
    piVar20 = piVar17;
    if ((iVar13 < 0) || (*(char *)(iVar13 + 0x4be) != '\x01')) {
      if (iVar14 != iVar13) {
        puStack52 = param_5;
        pcStack58 = (code *)0x1000;
        uStack60 = 0x1fe7;
        puStack56 = (undefined *)iVar14;
        (*param_2_00)();
                    // WARNING: Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
        return (undefined *)local_2a;
      }
    }
    else {
      while ((-1 < (char)iVar14 && (*(char *)(iVar14 + 0x4be) == '\x01'))) {
        local_28 = local_28 + 1;
        puStack52 = param_5;
        puStack56 = (undefined *)0x1000;
        pcStack58 = (code *)0x1fbe;
        iVar14 = (*param_1)();
        if (iVar14 < 1) goto LAB_11f4_0460;
      }
      puStack52 = param_5;
      pcStack58 = (code *)0x1000;
      uStack60 = 0x1fd1;
      puStack56 = (undefined *)iVar14;
      (*param_2_00)();
      local_28 = local_28 + -1;
      in_DX = extraout_DX_03;
    }
  }
  local_24 = 0xffff;
  uStack44 = CONCAT11(0x20,(undefined)uStack44);
  piVar20 = piVar20 + 1;
  uVar15 = SEXT12(*(char *)piVar17);
  if ((int)uVar15 < 0) {
    return (undefined *)local_2a;
  }
  bVar10 = *(byte *)(uVar15 + 0x4be);
  puVar16 = (undefined *)(uint)bVar10;
  param_6 = piVar20;
  if (0x15 < bVar10) {
LAB_11f4_0460:
    puStack52 = param_5;
    puStack56 = (undefined *)0xffff;
    pcStack58 = (code *)0x1000;
    uStack60 = 0x23ad;
    (*param_2_00)();
    return (undefined *)(local_2a - (uint)(local_2a == 0));
  }
  piVar17 = (int *)((int)puVar16 * 2);
  uVar23 = 0x1000;
  puVar18 = &stack0xfffe;
  switch(bVar10) {
  case 0:
    break;
  case 1:
    return puVar16;
  case 2:
    pcVar2 = &stack0xfffe + (int)piVar20;
    *pcVar2 = *pcVar2 + bVar10;
    puVar18 = &stack0xfffe;
    break;
  case 3:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 4:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 5:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 6:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  default:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 8:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 10:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 0xc:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 0xe:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 0xf:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 0x10:
    *(undefined2 *)((int)piVar17 + uVar15) = 0x30b4;
  case 0x13:
    pcVar5 = (code *)swi(0x21);
    uVar26 = (*pcVar5)();
    uVar23 = s_Turbo_C___Copyright__c__1988_Bor_126b_0004._40_2_;
    iVar13 = DAT_126b_0002;
    uVar12 = (undefined2)((ulong)uVar26 >> 0x10);
    *(undefined2 *)&DAT_126b_007d = (int)uVar26;
    *(undefined2 *)&DAT_126b_007b = uVar22;
    *(undefined2 *)&DAT_126b_0077 = uVar23;
    *(int *)&DAT_126b_0091 = iVar13;
    *(undefined2 *)&DAT_126b_0081 = 0xffff;
    puStack52 = (undefined *)0x2e;
    FUN_1000_012f();
    uVar26 = *(undefined4 *)&DAT_126b_0075;
    uVar22 = (undefined2)((ulong)uVar26 >> 0x10);
    piVar17 = (int *)uVar26;
    uVar15 = 0x7fff;
    piVar21 = piVar17;
    do {
      if (((*piVar21 == 0x3738) && (iVar14 = piVar21[1], (char)iVar14 == '=')) &&
         (piVar1 = (int *)&DAT_126b_0081, *piVar1 = *piVar1 + 1,
         ((byte)((uint)iVar14 >> 8) & 0xdf) == 0x59)) {
        piVar1 = (int *)&DAT_126b_0081;
        *piVar1 = *piVar1 + 1;
      }
      do {
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        piVar1 = piVar21;
        piVar21 = (int *)((int)piVar21 + 1);
      } while ((char)uVar26 != *(char *)piVar1);
      if (uVar15 == 0) goto LAB_1000_01b6;
      piVar17 = (int *)((int)piVar17 + 1);
    } while (*(char *)piVar21 != (char)uVar26);
    *(int *)&DAT_126b_0075 = -(uVar15 | 0x8000);
    piVar17 = (int *)((int)piVar17 * 4 + 0x10U & 0xfff0);
    *(int **)&DAT_126b_0079 = piVar17;
    uVar15 = *(uint *)&DAT_126b_0142;
    in_DX = (int)unaff_SS;
    puVar18 = (undefined *)(iVar13 - (int)unaff_SS);
    break;
  case 0x11:
    uVar12 = param_7;
    while( true ) {
      *(char *)piVar17 = (char)puVar16;
      puVar16 = (undefined *)(local_90 + 1);
      _local_90 = (undefined *)((ulong)_local_90 & 0xffff0000 | ZEXT24(puVar16));
      uStack60 = uVar23;
code_r0x0001104c:
      puVar18 = local_84;
      uVar23 = uStack60;
      if ((puVar16 >= puVar18) &&
         ((puVar16 < puVar18 || ((undefined *)&DAT_126b_007f < puVar16 + -(int)puVar18)))) {
        puVar16 = (undefined *)(local_90 - (int)local_84);
        puStack56 = local_84;
        pcStack58 = param_1;
        uVar23 = 0x1111;
        uStack62 = 0x1086;
        puStack52 = puVar16;
        puVar18 = (undefined *)FUN_1111_0001();
        if (puVar18 != puVar16) {
          return puVar18 + (int)(param_3 + (-(int)puVar16 - local_8c));
        }
        _local_90 = (undefined *)CONCAT22(unaff_SS,local_84);
      }
      pbVar6 = local_88;
      if (local_8c == 0) break;
      local_8c = local_8c + -1;
      local_88 = (byte *)((ulong)local_88 & 0xffff0000 | (ulong)((int)local_88 + 1));
      local_89 = *pbVar6;
      if (local_89 == 10) {
        *_local_90 = 0xd;
        _local_90 = (undefined *)((ulong)_local_90 & 0xffff0000 | (ulong)(local_90 + 1));
      }
      puVar16 = (undefined *)(uint)local_89;
      piVar17 = (int *)_local_90;
      uVar12 = (int)((ulong)_local_90 >> 0x10);
    }
    puVar16 = (undefined *)(local_90 - (int)local_84);
    if (puVar16 != (undefined *)0x0) {
      puStack56 = local_84;
      pcStack58 = param_1;
      uStack62 = 0x10e9;
      uStack60 = uVar23;
      puStack52 = puVar16;
      puVar18 = (undefined *)FUN_1111_0001();
      if (puVar18 != puVar16) {
        param_3 = puVar18 + (int)(param_3 + -(int)puVar16);
      }
    }
                    // WARNING: Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
    return param_3;
  case 0x12:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 0x14:
    uStack60 = uVar23;
    goto code_r0x0001104c;
  case 0x15:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (uVar15 < 0x200) {
    uVar15 = 0x200;
    *(undefined2 *)&DAT_126b_0142 = 0x200;
  }
  bVar10 = 4;
  puStack52 = (undefined *)((uVar15 >> 4) + 1);
  if (puStack52 <= puVar18) {
    puVar16 = puStack52 + in_DX;
    *(undefined **)(int *)&DAT_126b_0089 = puVar16;
    *(undefined **)(int *)&DAT_126b_008d = puVar16;
    piVar17 = (int *)(puVar16 + -*(int *)&DAT_126b_007b);
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)();
    puVar16 = (undefined *)&DAT_12bf_0014;
    iVar13 = 0x80;
    while (iVar13 != 0) {
      iVar13 = iVar13 + -1;
      puVar3 = puVar16;
      puVar16 = puVar16 + 1;
      *puVar3 = 0;
    }
    *(undefined2 *)((unaff_DI << (bVar10 & 0x1f)) + -2) = 0x1000;
    (**(code **)&DAT_126b_053e)();
    FUN_1000_01d1();
    FUN_1000_02cf();
    pcVar5 = (code *)swi(0x1a);
    (*pcVar5)();
    *(undefined2 *)&DAT_126b_0083 = extraout_DX_00;
    *(int *)&DAT_126b_0085 = iVar13;
    uStack44 = 0x1000;
    (**(code **)&DAT_12bf_0002)();
    uStack44 = *(undefined2 *)&DAT_126b_0073;
    unaff_ES = *(undefined2 *)&DAT_126b_006d;
    puStack52 = (undefined *)*(undefined2 *)&DAT_126b_006b;
    puStack56 = (undefined *)0x107;
    FUN_103c_0002();
    puStack56 = (undefined *)0x103c;
    pcStack58 = (code *)0x10d;
    FUN_104a_000a();
    puStack56 = (undefined *)0x1000;
    pcStack58 = (code *)0x117;
    FUN_1000_0172();
    puStack56 = (undefined *)0x1000;
    pcStack58 = (code *)0x11c;
    (*pcRam00000540)();
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)();
    unaff_SS = (int *)extraout_DX;
  }
LAB_1000_01b6:
  do {
    puStack52 = (undefined *)0x1be;
    FUN_1000_01a7();
    puStack52 = (undefined *)0x3;
    puStack56 = (undefined *)0x1c7;
    cVar9 = FUN_1000_010d();
    pcVar2 = (char *)((int)piVar17 + (int)piVar20);
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = (char *)((int)piVar17 + (int)piVar20);
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = (char *)((int)piVar17 + (int)piVar20);
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = (char *)((int)piVar17 + (int)piVar20);
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = (char *)((int)piVar17 + (int)piVar20);
    *pcVar2 = *pcVar2 + cVar9;
                    // WARNING (jumptable): Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101c9) is written
    puRam000101c9 = puStack52;
                    // WARNING (jumptable): Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
                    // WARNING (jumptable): Read-only address (ram,0x000101cd) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
    uRam000101cd = 0;
    uVar11 = (uint)*(byte *)((int)&DAT_126b_007f + 1);
    piVar17 = (int *)(uVar11 + 1);
    piVar20 = (int *)(iRam00000075 + 2);
    uVar15 = 1;
    uVar12 = uRam0000007b;
    uRam000101cb = unaff_ES;
    if (2 < bRam0000007d) {
      uVar15 = 0x7f;
      piVar21 = piVar20;
      do {
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        piVar1 = piVar21;
        piVar21 = (int *)((int)piVar21 + 1);
      } while (*(char *)piVar1 != '\0');
      if (uVar15 == 0) goto LAB_1000_01b6;
      uVar15 = uVar15 ^ 0x7f;
      uVar12 = uRam00000077;
    }
    puVar16 = (undefined *)(uVar11 + 2 + uVar15 & 0xfffe);
    iVar13 = -(int)puVar16;
    piVar21 = (int *)(&stack0xffce + iVar13);
    if (puVar16 <= &stack0xffce) {
      *(uint *)(undefined **)((int)&puStack52 + iVar13) = uVar15;
      piVar17 = piVar21;
      while (uVar15 - 1 != 0) {
        piVar4 = piVar17;
        piVar17 = (int *)((int)piVar17 + 1);
        piVar1 = piVar20;
        piVar20 = (int *)((int)piVar20 + 1);
        *(char *)piVar4 = *(char *)piVar1;
        uVar15 = uVar15 - 1;
      }
      bVar24 = false;
      *(char *)piVar17 = '\0';
      bVar25 = uVar15 == 0;
LAB_1000_0243:
      *(undefined2 *)(&stack0xffca + iVar13) = 0x246;
      bVar10 = FUN_1000_025f();
      iVar14 = extraout_DX_01;
      if (bVar24 || bVar25) {
        do {
          if (bVar24) {
            iVar14 = (int)*(undefined **)((int)&puStack52 + iVar13) + iVar14;
            piVar17 = (int *)((uVar15 + 1) * 4);
            ppiVar19 = (int **)(piVar21 + (uVar15 + 1) * 0x7ffe);
            piVar20 = piVar21;
            uRam0000006b = uVar15;
            ppiVar7 = ppiVar19;
            piVar8 = unaff_SS;
            if (piVar21 < piVar17) goto LAB_1000_01b6;
            goto LAB_1000_02af;
          }
          *(undefined2 *)(&stack0xffca + iVar13) = 0x24d;
          bVar10 = FUN_1000_025f();
          iVar14 = extraout_DX_02;
        } while (!bVar24 && !bVar25);
      }
      if ((bVar10 != 0x20) && (bVar10 != 0xd)) break;
      goto LAB_1000_025b;
    }
  } while( true );
  bVar24 = bVar10 < 9;
  bVar25 = bVar10 == 9;
  if (bVar25) {
LAB_1000_025b:
    bVar24 = false;
    bVar25 = true;
  }
  goto LAB_1000_0243;
  while( true ) {
    *ppiVar19 = piVar21;
    ppiVar19[1] = unaff_SS;
    ppiVar19 = ppiVar19 + 2;
    do {
      piVar1 = piVar21;
      piVar21 = (int *)((int)piVar21 + 1);
      bVar24 = *(char *)piVar1 != '\0';
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0 && bVar24);
    ppiVar7 = ppiRam0000006d;
    piVar8 = piRam0000006f;
    if (bVar24) break;
LAB_1000_02af:
    piRam0000006f = piVar8;
    ppiRam0000006d = ppiVar7;
    if (iVar14 == 0) break;
  }
  *ppiVar19 = (int *)0x0;
  ppiVar19[1] = (int *)0x0;
                    // WARNING: Treating indirect jump as call
  uVar12 = (*(code *)0x0)();
  return (undefined *)uVar12;
}



void __cdecl16near FUN_1245_0003(void)

{
  return;
}



uint __cdecl16far
FUN_1245_0031(code *param_1,undefined2 param_2,code *param_2_00,undefined2 param_4,
             undefined2 param_3,undefined2 param_4_00,uint param_5,int param_6,int *param_7,
             undefined2 *param_8)

{
  int iVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  char local_7;
  int local_6;
  undefined2 local_4;
  
  local_7 = '\0';
  local_6 = 0;
  local_4 = 1;
  do {
    local_6 = local_6 + 1;
    uVar6 = (*param_1)(0x1000,param_3,param_4_00);
    if ((int)uVar6 < 0) goto LAB_1245_00cb;
    cVar4 = (char)uVar6;
    uVar6 = SEXT12(cVar4);
  } while (((uVar6 & 0x80) == 0) && ((*(byte *)(uVar6 + 0x155) & 1) != 0));
  iVar1 = param_6 + -1;
  iVar3 = iVar1;
  if (param_6 < 1) {
LAB_1245_00d2:
    param_6 = iVar3;
    local_4 = 0;
  }
  else {
    if (cVar4 != '+') {
      if (cVar4 == '-') {
        local_7 = local_7 + '\x01';
        goto LAB_1245_007a;
      }
LAB_1245_0091:
      param_6 = iVar1;
      uVar12 = 0;
      uVar13 = 0;
      bVar5 = (byte)uVar6;
      if (param_5 == 0) {
        param_5 = 10;
        if (bVar5 != 0x30) {
LAB_1245_0120:
          bVar14 = bVar5 < 0x30;
          FUN_1245_0003();
          uVar12 = uVar6;
          iVar3 = param_6;
          if (!bVar14) goto LAB_1245_0137;
          goto LAB_1245_00d2;
        }
        if (0 < param_6) {
          local_6 = local_6 + 1;
          param_6 = param_6 + -1;
          uVar6 = (*param_1)(0x1000,param_3,param_4_00);
          param_5 = 8;
          bVar5 = (byte)uVar6;
          bVar14 = bVar5 < 0x78;
          if ((bVar5 == 0x78) || (bVar14 = bVar5 < 0x58, bVar5 == 0x58)) {
            param_5 = 0x10;
            goto LAB_1245_0137;
          }
LAB_1245_014a:
          while (FUN_1245_0003(), !bVar14) {
            uVar9 = (uint)((ulong)uVar12 * (ulong)param_5 >> 0x10);
            uVar7 = (uint)((ulong)uVar12 * (ulong)param_5);
            uVar12 = uVar6 + uVar7;
            uVar6 = (uint)CARRY2(uVar6,uVar7);
            uVar7 = uVar13 + uVar9;
            bVar14 = CARRY2(uVar13,uVar9) || CARRY2(uVar7,uVar6);
            uVar13 = uVar7 + uVar6;
            if (uVar13 != 0) goto LAB_1245_0167;
LAB_1245_0137:
            if (param_6 < 1) goto LAB_1245_0194;
            local_6 = local_6 + 1;
            param_6 = param_6 + -1;
            uVar6 = (*param_1)(0x1000,param_3,param_4_00);
          }
LAB_1245_0184:
          (*param_2_00)(0x1000,uVar6,param_3,param_4_00);
          local_6 = local_6 + -1;
        }
      }
      else {
        iVar3 = param_6;
        if ((0x24 < param_5) || (bVar8 = (byte)param_5, bVar8 < 2)) goto LAB_1245_00d2;
        if (bVar5 != 0x30) goto LAB_1245_0120;
        bVar14 = bVar8 < 0x10;
        if (bVar8 != 0x10) goto LAB_1245_0137;
        if (0 < param_6) {
          local_6 = local_6 + 1;
          param_6 = param_6 + -1;
          uVar6 = (*param_1)(0x1000,param_3,param_4_00);
          bVar5 = (byte)uVar6;
          bVar14 = bVar5 < 0x78;
          if (bVar5 == 0x78) goto LAB_1245_0137;
          bVar14 = bVar5 < 0x58;
          if (bVar5 == 0x58) goto LAB_1245_0137;
          goto LAB_1245_014a;
        }
      }
LAB_1245_0194:
      if (local_7 != '\0') {
        uVar12 = -uVar12;
      }
      goto LAB_1245_01a4;
    }
LAB_1245_007a:
    param_6 = param_6 + -2;
    iVar3 = param_6;
    if (iVar1 < 1) goto LAB_1245_00d2;
    local_6 = local_6 + 1;
    uVar6 = (*param_1)(0x1000,param_3,param_4_00);
    iVar1 = param_6;
    if (-1 < (int)uVar6) goto LAB_1245_0091;
LAB_1245_00cb:
    local_4 = 0xffff;
  }
  (*param_2_00)(0x1000,uVar6,param_3,param_4_00);
  local_6 = local_6 + -1;
  uVar12 = 0;
LAB_1245_01a4:
  *param_7 = *param_7 + local_6;
  *param_8 = local_4;
  return uVar12;
  while( true ) {
    local_6 = local_6 + 1;
    param_6 = param_6 + -1;
    uVar6 = (*param_1)(0x1000,param_3,param_4_00);
    uVar7 = param_5;
    FUN_1245_0003();
    if (bVar14) goto LAB_1245_0184;
    uVar10 = (uint)((ulong)uVar12 * (ulong)uVar7 >> 0x10);
    uVar9 = (uint)((ulong)uVar12 * (ulong)uVar7);
    lVar2 = (ulong)uVar13 * (ulong)uVar7;
    uVar12 = uVar6 + uVar9;
    uVar6 = (uint)CARRY2(uVar6,uVar9);
    uVar13 = (uint)lVar2 + uVar10;
    bVar15 = CARRY2((uint)lVar2,uVar10) || CARRY2(uVar13,uVar6);
    uVar13 = uVar13 + uVar6;
    bVar8 = (byte)((ulong)lVar2 >> 0x10);
    bVar11 = (byte)((ulong)lVar2 >> 0x18);
    bVar5 = bVar8 + bVar11;
    bVar14 = CARRY1(bVar8,bVar11) || CARRY1(bVar5,bVar15);
    if ((byte)(bVar5 + bVar15) != '\0') break;
LAB_1245_0167:
    if (param_6 < 1) goto LAB_1245_0194;
  }
  uVar12 = CONCAT11((local_7 != '\0') + -1,local_7 + -1);
  local_4 = 2;
  goto LAB_1245_01a4;
}



void __cdecl16far FUN_1262_0005(undefined2 param_1)

{
  FUN_1115_000d(param_1,0,0,1);
  return;
}


