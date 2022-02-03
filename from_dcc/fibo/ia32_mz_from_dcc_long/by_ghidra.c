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
  code *pcVar6;
  int **ppiVar7;
  int *piVar8;
  char cVar9;
  byte bVar10;
  undefined *puVar11;
  uint uVar12;
  int iVar13;
  undefined2 uVar14;
  int *extraout_DX;
  undefined2 extraout_DX_00;
  int extraout_DX_01;
  int extraout_DX_02;
  undefined *puVar15;
  int *piVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  int *piVar25;
  int *piVar26;
  int **ppiVar27;
  int *unaff_SI;
  int *piVar28;
  uint uVar29;
  int iVar30;
  int *piVar31;
  undefined2 unaff_ES;
  undefined2 uVar32;
  int *piVar33;
  bool bVar34;
  undefined uVar35;
  undefined4 uVar36;
  
  piVar33 = (int *)0x2c9;
  puVar15 = (undefined *)0xe6;
                    // WARNING (jumptable): Read-only address (ram,0x000101c7) is written
                    // WARNING: Read-only address (ram,0x000101c7) is written
  uRam000101c7 = 0x126b;
  pcVar6 = (code *)swi(0x21);
  uVar36 = (*pcVar6)();
  uVar32 = s_Turbo_C___Copyright__c__1988_Bor_126b_0004._40_2_;
  iVar13 = DAT_126b_0002;
  uVar14 = (undefined2)((ulong)uVar36 >> 0x10);
  *(undefined2 *)&DAT_126b_007d = (int)uVar36;
  *(undefined2 *)&DAT_126b_007b = unaff_ES;
  *(undefined2 *)&DAT_126b_0077 = uVar32;
  *(int *)&DAT_126b_0091 = iVar13;
  *(undefined2 *)&DAT_126b_0081 = 0xffff;
  *(undefined2 *)(puVar15 + -2) = 0x2e;
  FUN_1000_012f();
  uVar36 = *(undefined4 *)&DAT_126b_0075;
  uVar32 = (undefined2)((ulong)uVar36 >> 0x10);
  piVar28 = (int *)uVar36;
  uVar12 = 0x7fff;
  piVar31 = piVar28;
  do {
    if (((*piVar31 == 0x3738) && (iVar30 = piVar31[1], (char)iVar30 == '=')) &&
       (piVar1 = (int *)&DAT_126b_0081, *piVar1 = *piVar1 + 1,
       ((byte)((uint)iVar30 >> 8) & 0xdf) == 0x59)) {
      piVar1 = (int *)&DAT_126b_0081;
      *piVar1 = *piVar1 + 1;
    }
    do {
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      piVar1 = piVar31;
      piVar31 = (int *)((int)piVar31 + 1);
    } while ((char)uVar36 != *(char *)piVar1);
    piVar25 = (int *)puVar15;
    if (uVar12 == 0) goto LAB_1000_01b6;
    piVar28 = (int *)((int)piVar28 + 1);
  } while (*(char *)piVar31 != (char)uVar36);
  *(int *)&DAT_126b_0075 = -(uVar12 | 0x8000);
  piVar28 = (int *)((int)piVar28 * 4 + 0x10U & 0xfff0);
  *(int **)&DAT_126b_0079 = piVar28;
  uVar12 = *(uint *)&DAT_126b_0142;
  if (uVar12 < 0x200) {
    uVar12 = 0x200;
    *(undefined2 *)&DAT_126b_0142 = 0x200;
  }
  bVar10 = 4;
  uVar29 = (uVar12 >> 4) + 1;
  if (uVar29 <= iVar13 - 0x2c9U) {
    iVar13 = (uVar12 >> 4) + 0x2ca;
    *(int *)&DAT_126b_0089 = iVar13;
    *(int *)&DAT_126b_008d = iVar13;
    piVar28 = (int *)(iVar13 - *(int *)&DAT_126b_007b);
    piVar16 = (int *)(puVar15 + -2);
    *(uint *)(puVar15 + -2) = uVar29;
    pcVar6 = (code *)swi(0x21);
    (*pcVar6)();
    iVar30 = *piVar16 << (bVar10 & 0x1f);
    puVar11 = (undefined *)&DAT_12bf_0014;
    for (iVar13 = 0x80; iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar3 = puVar11;
      puVar11 = puVar11 + 1;
      *puVar3 = 0;
    }
    *(undefined2 *)(iVar30 + -2) = 0x1000;
    pcVar5 = *(code **)&DAT_126b_053e;
    puVar17 = (undefined *)(iVar30 + -4);
    *(undefined2 *)(iVar30 + -4) = 0xd3;
    (*pcVar5)();
    *(undefined2 *)(puVar17 + -2) = 0x1000;
    puVar18 = puVar17 + -4;
    *(undefined2 *)(puVar17 + -4) = 0xd8;
    FUN_1000_01d1();
    *(undefined2 *)(puVar18 + -2) = 0x1000;
    puVar19 = puVar18 + -4;
    *(undefined2 *)(puVar18 + -4) = 0xdd;
    FUN_1000_02cf();
    pcVar6 = (code *)swi(0x1a);
    (*pcVar6)();
    *(undefined2 *)&DAT_126b_0083 = extraout_DX_00;
    *(int *)&DAT_126b_0085 = iVar13;
    *(undefined2 *)(puVar19 + -2) = 0x1000;
    pcVar5 = *(code **)&DAT_12bf_0002;
    puVar20 = puVar19 + -4;
    *(undefined2 *)(puVar19 + -4) = 0xee;
    (*pcVar5)();
    *(undefined2 *)(puVar20 + -2) = *(undefined2 *)&DAT_126b_0073;
    *(undefined2 *)(puVar20 + -4) = *(undefined2 *)&DAT_126b_0071;
    *(undefined2 *)(puVar20 + -6) = *(undefined2 *)&DAT_126b_006f;
    *(undefined2 *)(puVar20 + -8) = *(undefined2 *)&DAT_126b_006d;
    *(undefined2 *)(puVar20 + -10) = *(undefined2 *)&DAT_126b_006b;
    *(undefined2 *)(puVar20 + -0xc) = 0x1000;
    puVar21 = puVar20 + -0xe;
    *(undefined2 *)(puVar20 + -0xe) = 0x107;
    uVar32 = FUN_103c_0002();
    *(undefined2 *)(puVar21 + -2) = uVar32;
    *(undefined2 *)(puVar21 + -4) = 0x103c;
    puVar22 = puVar21 + -6;
    *(undefined2 *)(puVar21 + -6) = 0x10d;
    FUN_104a_000a();
    *(undefined2 *)(puVar22 + -2) = 0x1000;
    puVar23 = puVar22 + -4;
    *(undefined2 *)(puVar22 + -4) = 0x117;
    FUN_1000_0172();
    *(undefined2 *)(puVar23 + -2) = 0x1000;
    pcVar6 = pcRam00000540;
    puVar24 = puVar23 + -4;
    *(undefined2 *)(puVar23 + -4) = 0x11c;
    (*pcVar6)();
    pcVar6 = (code *)swi(0x21);
    (*pcVar6)();
    piVar25 = (int *)puVar24;
    piVar33 = extraout_DX;
  }
LAB_1000_01b6:
  do {
    piVar25[-1] = 0x1be;
    FUN_1000_01a7();
    piVar25[-1] = 3;
    piVar25[-2] = 0x1000;
    piVar26 = piVar25 + -3;
    piVar25[-3] = 0x1c7;
    cVar9 = FUN_1000_010d();
    pcVar2 = (char *)((int)piVar28 + (int)unaff_SI);
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = (char *)((int)piVar28 + (int)unaff_SI);
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = (char *)((int)piVar28 + (int)unaff_SI);
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = (char *)((int)piVar28 + (int)unaff_SI);
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = (char *)((int)piVar28 + (int)unaff_SI);
    *pcVar2 = *pcVar2 + cVar9;
                    // WARNING (jumptable): Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101c9) is written
    uRam000101c9 = *piVar26;
                    // WARNING (jumptable): Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
    uRam000101cb = piVar26[1];
                    // WARNING (jumptable): Read-only address (ram,0x000101cd) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
    uRam000101cd = 0;
    uVar29 = (uint)*(byte *)((int)&DAT_126b_007f + 1);
    piVar28 = (int *)(uVar29 + 1);
    unaff_SI = (int *)(iRam00000075 + 2);
    uVar12 = 1;
    uVar32 = uRam0000007b;
    if (2 < bRam0000007d) {
      uVar12 = 0x7f;
      piVar31 = unaff_SI;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        piVar1 = piVar31;
        piVar31 = (int *)((int)piVar31 + 1);
      } while (*(char *)piVar1 != '\0');
      piVar25 = piVar26 + 2;
      if (uVar12 == 0) goto LAB_1000_01b6;
      uVar12 = uVar12 ^ 0x7f;
      uVar32 = uRam00000077;
    }
    puVar11 = (undefined *)(uVar29 + 2 + uVar12 & 0xfffe);
    piVar31 = (int *)((int)piVar26 + (2 - (int)puVar11));
    piVar25 = piVar26 + 1;
    if (puVar11 <= piVar26 + 1) {
      piVar31[-1] = uVar12;
      piVar28 = piVar31;
      while (uVar12 - 1 != 0) {
        piVar4 = piVar28;
        piVar28 = (int *)((int)piVar28 + 1);
        piVar1 = unaff_SI;
        unaff_SI = (int *)((int)unaff_SI + 1);
        *(char *)piVar4 = *(char *)piVar1;
        uVar12 = uVar12 - 1;
      }
      bVar34 = false;
      *(char *)piVar28 = '\0';
      uVar35 = uVar12 == 0;
LAB_1000_0243:
      piVar31[-2] = 0x246;
      bVar10 = FUN_1000_025f();
      iVar13 = extraout_DX_01;
      if (bVar34 || (bool)uVar35) {
        do {
          if (bVar34) {
            iVar13 = piVar31[-1] + iVar13;
            piVar28 = (int *)((uVar12 + 1) * 4);
            ppiVar27 = (int **)(piVar31 + (uVar12 + 1) * -2);
            piVar25 = piVar31;
            unaff_SI = piVar31;
            uRam0000006b = uVar12;
            ppiVar7 = ppiVar27;
            piVar8 = piVar33;
            if (piVar28 <= piVar31) goto LAB_1000_02af;
            goto LAB_1000_01b6;
          }
          piVar31[-2] = 0x24d;
          bVar10 = FUN_1000_025f();
          iVar13 = extraout_DX_02;
        } while (!bVar34 && !(bool)uVar35);
      }
      if ((bVar10 != 0x20) && (bVar10 != 0xd)) break;
      goto LAB_1000_025b;
    }
  } while( true );
  bVar34 = bVar10 < 9;
  uVar35 = bVar10 == 9;
  if ((bool)uVar35) {
LAB_1000_025b:
    bVar34 = false;
    uVar35 = true;
  }
  goto LAB_1000_0243;
  while( true ) {
    *ppiVar27 = piVar31;
    ppiVar27[1] = piVar33;
    ppiVar27 = ppiVar27 + 2;
    do {
      piVar1 = piVar31;
      piVar31 = (int *)((int)piVar31 + 1);
      bVar34 = *(char *)piVar1 != '\0';
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0 && bVar34);
    ppiVar7 = ppiRam0000006d;
    piVar8 = piRam0000006f;
    if (bVar34) break;
LAB_1000_02af:
    piRam0000006f = piVar8;
    ppiRam0000006d = ppiVar7;
    if (iVar13 == 0) break;
  }
  *ppiVar27 = (int *)0x0;
  ppiVar27[1] = (int *)0x0;
                    // WARNING: Treating indirect jump as call
  (*(code *)0x0)();
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack

void FUN_1000_010d(undefined2 param_1,undefined2 param_2)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  int iVar4;
  undefined2 uVar5;
  char **ppcVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  int extraout_DX;
  int extraout_DX_00;
  char *in_BX;
  char **ppcVar13;
  char *unaff_SI;
  char *pcVar14;
  char *pcVar15;
  undefined2 uVar16;
  char *unaff_SS;
  bool bVar17;
  undefined uVar18;
  
  FUN_1000_0172(0x1000);
  (*pcRam00000540)(0x1000);
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  uVar5 = uRam000101cd;
LAB_1000_01b6:
  do {
    uRam000101cd = uVar5;
    param_1 = 0x1be;
    FUN_1000_01a7();
    param_1 = 3;
    cVar7 = FUN_1000_010d();
    pcVar1 = in_BX + (int)unaff_SI;
    *pcVar1 = *pcVar1 + cVar7;
    pcVar1 = in_BX + (int)unaff_SI;
    *pcVar1 = *pcVar1 + cVar7;
    pcVar1 = in_BX + (int)unaff_SI;
    *pcVar1 = *pcVar1 + cVar7;
    pcVar1 = in_BX + (int)unaff_SI;
    *pcVar1 = *pcVar1 + cVar7;
    pcVar1 = in_BX + (int)unaff_SI;
    *pcVar1 = *pcVar1 + cVar7;
                    // WARNING (jumptable): Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101c9) is written
    uRam000101c9 = param_1;
                    // WARNING (jumptable): Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
    uRam000101cb = param_2;
                    // WARNING (jumptable): Read-only address (ram,0x000101cd) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
    uRam000101cd = 0;
    uVar9 = (uint)*(byte *)((int)&DAT_126b_007f + 1);
    in_BX = (char *)(uVar9 + 1);
    unaff_SI = (char *)(iRam00000075 + 2);
    uVar11 = 1;
    uVar16 = uRam0000007b;
    if (2 < bRam0000007d) {
      uVar11 = 0x7f;
      pcVar14 = unaff_SI;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar1 = pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (*pcVar1 != '\0');
      uVar5 = 0;
      if (uVar11 == 0) goto LAB_1000_01b6;
      uVar11 = uVar11 ^ 0x7f;
      uVar16 = uRam00000077;
    }
    puVar10 = (undefined *)(uVar9 + 2 + uVar11 & 0xfffe);
    iVar4 = -(int)puVar10;
    pcVar14 = (char *)((int)&param_2 + iVar4);
    uVar5 = uRam000101cd;
    if (puVar10 <= &param_2) {
      *(uint *)((int)&param_1 + iVar4) = uVar11;
      pcVar15 = pcVar14;
      while (uVar11 - 1 != 0) {
        pcVar2 = pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar1 = unaff_SI;
        unaff_SI = unaff_SI + 1;
        *pcVar2 = *pcVar1;
        uVar11 = uVar11 - 1;
      }
      bVar17 = false;
      *pcVar15 = '\0';
      uVar18 = uVar11 == 0;
LAB_1000_0243:
      *(undefined2 *)(&stack0x0000 + iVar4) = 0x246;
      bVar8 = FUN_1000_025f();
      iVar12 = extraout_DX;
      if (bVar17 || (bool)uVar18) {
        do {
          if (bVar17) {
            iVar12 = *(int *)((int)&param_1 + iVar4) + iVar12;
            in_BX = (char *)((uVar11 + 1) * 4);
            ppcVar13 = (char **)(pcVar14 + (uVar11 + 1) * -4);
            unaff_SI = pcVar14;
            uVar5 = uRam000101cd;
            uRam0000006b = uVar11;
            ppcVar6 = ppcVar13;
            pcVar15 = unaff_SS;
            if (in_BX <= pcVar14) goto LAB_1000_02af;
            goto LAB_1000_01b6;
          }
          *(undefined2 *)(&stack0x0000 + iVar4) = 0x24d;
          bVar8 = FUN_1000_025f();
          iVar12 = extraout_DX_00;
        } while (!bVar17 && !(bool)uVar18);
      }
      if ((bVar8 != 0x20) && (bVar8 != 0xd)) break;
      goto LAB_1000_025b;
    }
  } while( true );
  bVar17 = bVar8 < 9;
  uVar18 = bVar8 == 9;
  if ((bool)uVar18) {
LAB_1000_025b:
    bVar17 = false;
    uVar18 = true;
  }
  goto LAB_1000_0243;
  while( true ) {
    *ppcVar13 = pcVar14;
    ppcVar13[1] = unaff_SS;
    ppcVar13 = ppcVar13 + 2;
    do {
      pcVar1 = pcVar14;
      pcVar14 = pcVar14 + 1;
      bVar17 = *pcVar1 != '\0';
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0 && bVar17);
    ppcVar6 = ppcRam0000006d;
    pcVar15 = pcRam0000006f;
    if (bVar17) break;
LAB_1000_02af:
    pcRam0000006f = pcVar15;
    ppcRam0000006d = ppcVar6;
    if (iVar12 == 0) break;
  }
  *ppcVar13 = (char *)0x0;
  ppcVar13[1] = (char *)0x0;
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



void FUN_1000_0172(void)

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



void FUN_1000_019f(void)

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
  char *pcVar2;
  int iVar3;
  char **ppcVar4;
  char *pcVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  char *pcVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  int extraout_DX;
  int extraout_DX_00;
  char **ppcVar13;
  char *pcVar14;
  char *pcVar15;
  char *unaff_SS;
  undefined2 uVar16;
  bool bVar17;
  undefined uVar18;
  undefined2 uVar19;
  undefined2 in_stack_00000000;
  undefined2 uStack2;
  
                    // WARNING (jumptable): Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101c9) is written
  uVar16 = 0x126b;
  uRam000101c9 = in_stack_00000000;
  do {
                    // WARNING (jumptable): Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
    uRam000101cb = param_1;
                    // WARNING (jumptable): Read-only address (ram,0x000101cd) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
    uVar19 = *(undefined2 *)&DAT_126b_007b;
    uVar8 = (uint)*(byte *)((int)&DAT_126b_007f + 1);
    pcVar9 = (char *)(uVar8 + 1);
    pcVar14 = (char *)(*(int *)&DAT_126b_0075 + 2);
    uVar11 = 1;
    uRam000101cd = uVar16;
    if (*(byte *)&DAT_126b_007d < 3) {
LAB_1000_0214:
      puVar10 = (undefined *)(uVar8 + 2 + uVar11 & 0xfffe);
      iVar3 = -(int)puVar10;
      pcVar15 = (char *)((int)&param_1 + iVar3);
      if (puVar10 <= &param_1) {
        *(uint *)(&stack0x0000 + iVar3) = uVar11;
        pcVar9 = pcVar15;
        while (uVar11 - 1 != 0) {
          pcVar2 = pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar1 = pcVar14;
          pcVar14 = pcVar14 + 1;
          *pcVar2 = *pcVar1;
          uVar11 = uVar11 - 1;
        }
        bVar17 = false;
        *pcVar9 = '\0';
        uVar18 = uVar11 == 0;
LAB_1000_0243:
        *(undefined2 *)((int)&uStack2 + iVar3) = 0x246;
        bVar7 = FUN_1000_025f();
        iVar12 = extraout_DX;
        if (bVar17 || (bool)uVar18) {
          do {
            if (bVar17) {
              iVar12 = *(int *)(&stack0x0000 + iVar3) + iVar12;
              pcVar9 = (char *)((uVar11 + 1) * 4);
              ppcVar13 = (char **)(pcVar15 + (uVar11 + 1) * -4);
              pcVar14 = pcVar15;
              uRam0000006b = uVar11;
              ppcVar4 = ppcVar13;
              pcVar5 = unaff_SS;
              if (pcVar9 <= pcVar15) goto LAB_1000_02af;
              goto LAB_1000_01af;
            }
            *(undefined2 *)((int)&uStack2 + iVar3) = 0x24d;
            bVar7 = FUN_1000_025f();
            iVar12 = extraout_DX_00;
          } while (!bVar17 && !(bool)uVar18);
        }
        if ((bVar7 != 0x20) && (bVar7 != 0xd)) break;
        goto LAB_1000_025b;
      }
    }
    else {
      uVar19 = *(undefined2 *)&DAT_126b_0077;
      uVar11 = 0x7f;
      pcVar15 = pcVar14;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar1 = pcVar15;
        pcVar15 = pcVar15 + 1;
      } while (*pcVar1 != '\0');
      if (uVar11 != 0) {
        uVar11 = uVar11 ^ 0x7f;
        goto LAB_1000_0214;
      }
    }
LAB_1000_01af:
    uVar16 = 0;
    FUN_1000_01a7();
    uVar19 = 3;
    uStack2 = 0x1000;
    cVar6 = FUN_1000_010d();
    pcVar1 = pcVar9 + (int)pcVar14;
    *pcVar1 = *pcVar1 + cVar6;
    pcVar1 = pcVar9 + (int)pcVar14;
    *pcVar1 = *pcVar1 + cVar6;
    pcVar1 = pcVar9 + (int)pcVar14;
    *pcVar1 = *pcVar1 + cVar6;
    pcVar1 = pcVar9 + (int)pcVar14;
    *pcVar1 = *pcVar1 + cVar6;
    pcVar1 = pcVar9 + (int)pcVar14;
    *pcVar1 = *pcVar1 + cVar6;
    uRam000101c9 = uVar19;
  } while( true );
  bVar17 = bVar7 < 9;
  uVar18 = bVar7 == 9;
  if ((bool)uVar18) {
LAB_1000_025b:
    bVar17 = false;
    uVar18 = true;
  }
  goto LAB_1000_0243;
  while( true ) {
    *ppcVar13 = pcVar15;
    ppcVar13[1] = unaff_SS;
    ppcVar13 = ppcVar13 + 2;
    do {
      pcVar1 = pcVar15;
      pcVar15 = pcVar15 + 1;
      bVar17 = *pcVar1 != '\0';
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0 && bVar17);
    ppcVar4 = ppcRam0000006d;
    pcVar5 = pcRam0000006f;
    if (bVar17) break;
LAB_1000_02af:
    pcRam0000006f = pcVar5;
    ppcRam0000006d = ppcVar4;
    if (iVar12 == 0) break;
  }
  *ppcVar13 = (char *)0x0;
  ppcVar13[1] = (char *)0x0;
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
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1000_02cf(void)

{
  char *pcVar1;
  char *pcVar2;
  int *piVar3;
  char *pcVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  char *pcVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int extraout_DX;
  int extraout_DX_00;
  char **ppcVar13;
  char **ppcVar14;
  char *unaff_SI;
  char *pcVar15;
  undefined2 uVar16;
  char *unaff_SS;
  bool bVar17;
  undefined uVar18;
  uint auStack6 [2];
  int *piStack2;
  
  pcVar15 = (char *)0x0;
  piStack2 = DAT_126b_0077;
  auStack6[1] = DAT_126b_0079;
  auStack6[0] = 0x1000;
  _DAT_126b_0071 = FUN_1050_000c();
  piVar3 = piStack2;
  uVar16 = (undefined2)((ulong)_DAT_126b_0071 >> 0x10);
  pcVar8 = (char *)_DAT_126b_0071;
  piStack2 = (int *)0x126b;
  if (_DAT_126b_0071 != 0) {
    iVar12 = -1;
    DAT_126b_0071 = pcVar8;
    do {
      DAT_126b_0073 = (undefined2)((ulong)_DAT_126b_0071 >> 0x10);
      ppcVar13 = (char **)_DAT_126b_0071;
      *ppcVar13 = pcVar15;
      ppcVar13[1] = (char *)piVar3;
      _DAT_126b_0071 = CONCAT22(DAT_126b_0073,ppcVar13 + 2);
      do {
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        pcVar1 = pcVar15;
        pcVar15 = pcVar15 + 1;
      } while (*pcVar1 != '\0');
      if (*pcVar15 == '\0') {
        ppcVar13[2] = (char *)0x0;
        ppcVar13[3] = (char *)0x0;
        return;
      }
    } while( true );
  }
LAB_1000_01af:
  do {
    auStack6[1] = 0x1be;
    FUN_1000_01a7();
    auStack6[1] = 3;
    auStack6[0] = 0x1000;
    cVar5 = FUN_1000_010d();
    pcVar1 = pcVar8 + (int)unaff_SI;
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = pcVar8 + (int)unaff_SI;
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = pcVar8 + (int)unaff_SI;
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = pcVar8 + (int)unaff_SI;
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = pcVar8 + (int)unaff_SI;
    *pcVar1 = *pcVar1 + cVar5;
                    // WARNING (jumptable): Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101c9) is written
    uRam000101c9 = auStack6[1];
                    // WARNING (jumptable): Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
    piRam000101cb = piStack2;
                    // WARNING (jumptable): Read-only address (ram,0x000101cd) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
    uRam000101cd = 0;
    uVar7 = (uint)*(byte *)((int)&DAT_126b_007f + 1);
    pcVar8 = (char *)(uVar7 + 1);
    unaff_SI = (char *)(iRam00000075 + 2);
    uVar10 = 1;
    uVar16 = uRam0000007b;
    if (2 < bRam0000007d) {
      uVar10 = 0x7f;
      pcVar15 = unaff_SI;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar1 = pcVar15;
        pcVar15 = pcVar15 + 1;
      } while (*pcVar1 != '\0');
      if (uVar10 == 0) goto LAB_1000_01af;
      uVar10 = uVar10 ^ 0x7f;
      uVar16 = uRam00000077;
    }
    puVar9 = (undefined *)(uVar7 + 2 + uVar10 & 0xfffe);
    iVar12 = -(int)puVar9;
    pcVar15 = (char *)((int)&piStack2 + iVar12);
    if (puVar9 <= &piStack2) {
      *(uint *)((int)auStack6 + iVar12 + 2) = uVar10;
      pcVar8 = pcVar15;
      while (uVar10 - 1 != 0) {
        pcVar2 = pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar1 = unaff_SI;
        unaff_SI = unaff_SI + 1;
        *pcVar2 = *pcVar1;
        uVar10 = uVar10 - 1;
      }
      bVar17 = false;
      *pcVar8 = '\0';
      uVar18 = uVar10 == 0;
LAB_1000_0243:
      *(undefined2 *)((int)auStack6 + iVar12) = 0x246;
      bVar6 = FUN_1000_025f();
      iVar11 = extraout_DX;
      if (bVar17 || (bool)uVar18) {
        do {
          if (bVar17) {
            iVar11 = *(int *)((int)auStack6 + iVar12 + 2) + iVar11;
            pcVar8 = (char *)((uVar10 + 1) * 4);
            ppcVar14 = (char **)(pcVar15 + (uVar10 + 1) * -4);
            unaff_SI = pcVar15;
            uRam0000006b = uVar10;
            ppcVar13 = ppcVar14;
            pcVar4 = unaff_SS;
            if (pcVar8 <= pcVar15) goto LAB_1000_02af;
            goto LAB_1000_01af;
          }
          *(undefined2 *)((int)auStack6 + iVar12) = 0x24d;
          bVar6 = FUN_1000_025f();
          iVar11 = extraout_DX_00;
        } while (!bVar17 && !(bool)uVar18);
      }
      if ((bVar6 != 0x20) && (bVar6 != 0xd)) break;
      goto LAB_1000_025b;
    }
  } while( true );
  bVar17 = bVar6 < 9;
  uVar18 = bVar6 == 9;
  if ((bool)uVar18) {
LAB_1000_025b:
    bVar17 = false;
    uVar18 = true;
  }
  goto LAB_1000_0243;
  while( true ) {
    *ppcVar14 = pcVar15;
    ppcVar14[1] = unaff_SS;
    ppcVar14 = ppcVar14 + 2;
    do {
      pcVar1 = pcVar15;
      pcVar15 = pcVar15 + 1;
      bVar17 = *pcVar1 != '\0';
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0 && bVar17);
    ppcVar13 = ppcRam0000006d;
    pcVar4 = pcRam0000006f;
    if (bVar17) break;
LAB_1000_02af:
    pcRam0000006f = pcVar4;
    ppcRam0000006d = ppcVar13;
    if (iVar11 == 0) break;
  }
  *ppcVar14 = (char *)0x0;
  ppcVar14[1] = (char *)0x0;
                    // WARNING: Treating indirect jump as call
  (*(code *)0x0)();
  return;
}



ulong FUN_1000_0313(void)

{
  uint in_AX;
  uint uVar1;
  int in_CX;
  uint in_DX;
  uint in_BX;
  uint uVar2;
  
  if (in_CX < 0) {
    uVar2 = ~in_BX + 1;
    uVar1 = in_AX - uVar2;
    if (in_AX < uVar2) {
      in_DX = in_DX - 0x1000;
    }
    return CONCAT22(in_DX + (uint)(byte)((~(byte)in_CX + (0xfffe < ~in_BX)) * '\x10') * -0x100 +
                    (uVar1 >> 4),uVar1) & 0xffff000f;
  }
  if (CARRY2(in_AX,in_BX)) {
    in_DX = in_DX + 0x1000;
  }
  return CONCAT22((in_DX & 0xff | (uint)(byte)((char)(in_DX >> 8) + (byte)in_CX * '\x10') << 8) +
                  (in_AX + in_BX >> 4),in_AX + in_BX) & 0xffff000f;
}



uint FUN_1000_036e(void)

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



void FUN_103c_0002(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  int local_6;
  undefined2 local_4;
  
  FUN_113d_000e(0x1000,0x94,0x126b);
  uVar3 = 0x11f1;
  FUN_11f1_0007(0x113d,0xb1,0x126b,&local_6);
  for (iVar2 = 1; iVar2 <= local_6; iVar2 = iVar2 + 1) {
    FUN_113d_000e(uVar3,0xb4,0x126b);
    FUN_11f1_0007(0x113d,0xc3,0x126b,&local_4);
    uVar1 = FUN_103c_007c(0x11f1,local_4);
    uVar3 = 0x113d;
    FUN_113d_000e(0x103c,0xc6,0x126b,local_4,uVar1);
  }
  FUN_104a_000a(uVar3,0);
  return;
}



int FUN_103c_007c(undefined2 param_1_00,int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 3) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_103c_007c(0x1000,param_1 + -1);
    iVar2 = FUN_103c_007c(0x1000,param_1 + -2);
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}



undefined2 FUN_1046_000e(undefined2 param_1_00,uint param_1)

{
  if ((int)param_1 < 0) {
    if (-param_1 < 0x23 || param_1 == 0xffdd) {
      DAT_126b_007f = -param_1;
      DAT_126b_00da = 0xffff;
      return 0xffff;
    }
  }
  else if (param_1 < 0x59) goto LAB_1046_0021;
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



void FUN_104a_000a(undefined2 param_1_00,undefined2 param_1)

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



bool FUN_104a_003d(undefined2 param_1_00,undefined2 param_1,undefined2 param_2)

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
  return !bVar2;
}



void FUN_1050_000c(undefined2 param_1_00,undefined2 param_1)

{
  FUN_1050_020d(0x1000,param_1,0);
  return;
}



void FUN_1050_0021(undefined2 param_1_00,undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  bool bVar6;
  int local_6;
  undefined2 local_4;
  
  bVar6 = (undefined *)register0x00000010 ==
          (undefined *)((int)s_Turbo_C___Copyright__c__1988_Bor_126b_0004 + 2);
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  DAT_126b_0150 = *(undefined2 *)(iVar4 + 0xe);
  DAT_126b_014e = *(int *)(iVar4 + 0xc);
  FUN_1000_036e(0x1000);
  uVar3 = DAT_126b_0150;
  iVar2 = DAT_126b_014e;
  if (bVar6) {
    DAT_126b_014e = 0;
    DAT_126b_0150 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(iVar4 + 8);
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



ulong FUN_1050_0089(undefined2 param_1_00,uint *param_1,uint param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  bool bVar6;
  int *piVar7;
  undefined4 uVar8;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = *param_1;
  *param_1 = *param_1 - param_2;
  piVar1 = (int *)((int)param_1 + 2);
  *piVar1 = (*piVar1 - param_3) - (uint)(uVar2 < param_2);
  piVar7 = (int *)FUN_1000_0313(0x1000);
  uVar4 = (undefined2)((ulong)piVar7 >> 0x10);
  iVar3 = (int)piVar7;
  param_3 = param_3 + (uint)(0xfffe < param_2);
  bVar6 = param_3 == 0;
  *(int *)(iVar3 + 2) = param_3;
  *piVar7 = param_2 + 1;
  *(undefined2 *)(iVar3 + 6) = uVar5;
  *(int *)(iVar3 + 4) = (int)param_1;
  FUN_1000_036e(0x1000);
  piVar1 = piVar7;
  if (!bVar6) {
    uVar8 = FUN_1000_0313(0x1000);
    uVar5 = (undefined2)((ulong)uVar8 >> 0x10);
    *(undefined2 *)((int)uVar8 + 6) = uVar4;
    *(int *)((int)uVar8 + 4) = iVar3;
    piVar1 = (int *)CONCAT22(DAT_126b_014c,DAT_126b_014a);
  }
  DAT_126b_014c = (undefined2)((ulong)piVar1 >> 0x10);
  DAT_126b_014a = SUB42(piVar1,0);
  return (ulong)piVar7 & 0xffff0000 | (ulong)(iVar3 + 8);
}



ulong FUN_1050_0139(undefined2 param_1_00,uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  int *piVar4;
  
  piVar4 = (int *)FUN_1081_00e3(0x1000,param_1,param_2);
  uVar3 = (undefined2)((ulong)piVar4 >> 0x10);
  iVar1 = (int)piVar4;
  if (piVar4 == (int *)0xffffffff) {
    piVar4 = (int *)(ulong)DAT_126b_014a;
    uVar2 = 0;
  }
  else {
    *(undefined2 *)(iVar1 + 6) = DAT_126b_014c;
    *(uint *)(iVar1 + 4) = DAT_126b_014a;
    *(int *)(iVar1 + 2) = param_2 + (uint)(0xfffe < param_1);
    *piVar4 = param_1 + 1;
    uVar2 = iVar1 + 8;
    DAT_126b_014c = uVar3;
  }
  DAT_126b_014a = (uint)piVar4;
  return (ulong)piVar4 & 0xffff0000 | (ulong)uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1050_01a7(undefined2 param_1_00,uint param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  int *piVar3;
  
  piVar3 = (int *)FUN_1081_00e3(0x1000,param_1,param_2);
  uVar2 = (undefined2)((ulong)piVar3 >> 0x10);
  if (piVar3 == (int *)0xffffffff) {
    uVar2 = 0;
    iVar1 = 0;
  }
  else {
    _DAT_126b_0146 = piVar3;
    _DAT_126b_014a = piVar3;
    *(int *)((int)piVar3 + 2) = param_2 + (uint)(0xfffe < param_1);
    *piVar3 = param_1 + 1;
    iVar1 = (int)piVar3 + 8;
  }
  DAT_126b_014c = (undefined2)((ulong)_DAT_126b_014a >> 0x10);
  DAT_126b_0148 = (undefined2)((ulong)_DAT_126b_0146 >> 0x10);
  return CONCAT22(uVar2,iVar1);
}



int FUN_1050_020d(undefined2 param_1_00,uint param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  bool bVar7;
  undefined uVar8;
  uint *local_6;
  
  if ((param_1 | param_2) == 0) {
    iVar3 = 0;
  }
  else {
    param_2 = param_2 + (0xffe8 < param_1);
    uVar4 = param_1 + 0x17 & 0xfff0;
    bVar7 = true;
    FUN_1000_036e(0x1000);
    if (bVar7) {
      iVar3 = FUN_1050_01a7(0x1000,uVar4,param_2);
    }
    else {
      local_6 = (uint *)CONCAT22(DAT_126b_0150,DAT_126b_014e);
      uVar8 = 1;
      FUN_1000_036e(0x1000);
      while (!(bool)uVar8) {
        uVar6 = (undefined2)((ulong)local_6 >> 0x10);
        iVar3 = (int)local_6;
        uVar2 = *(uint *)(iVar3 + 2);
        uVar5 = param_2 + (0xffcf < uVar4);
        if ((uVar5 <= uVar2) && ((uVar2 != uVar5 || (uVar4 + 0x30 <= *local_6)))) {
          iVar3 = FUN_1050_0089(0x1000,iVar3,uVar6,uVar4,param_2);
          return iVar3;
        }
        uVar2 = *(uint *)(iVar3 + 2);
        uVar8 = uVar2 == param_2;
        if ((param_2 <= uVar2) && ((!(bool)uVar8 || (uVar8 = *local_6 == uVar4, uVar4 <= *local_6)))
           ) {
          FUN_1050_0021(0x1000,iVar3,uVar6);
          uVar4 = *local_6;
          *local_6 = *local_6 + 1;
          piVar1 = (int *)(iVar3 + 2);
          *piVar1 = *piVar1 + (uint)(0xfffe < uVar4);
          return iVar3 + 8;
        }
        local_6 = *(uint **)(iVar3 + 0xc);
        FUN_1000_036e(0x1000);
      }
      iVar3 = FUN_1050_0139(0x1000,uVar4,param_2);
    }
  }
  return iVar3;
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
    iVar3 = FUN_1098_0004(0x1000,DAT_126b_007b,uVar1);
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



undefined2 FUN_1081_009c(undefined2 param_1_00,undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined in_CF;
  undefined in_ZF;
  
  FUN_1000_036e(0x1000);
  if (((!(bool)in_CF) && (FUN_1000_036e(0x1000), (bool)in_CF || (bool)in_ZF)) &&
     (iVar1 = FUN_1081_000c(param_1,param_2), iVar1 != 0)) {
    return 0;
  }
  return 0xffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1081_00e3(undefined2 param_1_00,int param_1,uint param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined uVar4;
  undefined uVar5;
  undefined4 uVar6;
  
  uVar4 = param_2 < 0x10;
  uVar5 = param_2 == 0x10;
  if ((int)param_2 < 0x10) {
LAB_1081_00ff:
    uVar6 = FUN_1000_0313(0x1000);
    FUN_1000_036e(0x1000,uVar6);
    if (!(bool)uVar4) {
      FUN_1000_036e(0x1000);
      if ((bool)uVar4 || (bool)uVar5) {
        uVar3 = (undefined2)((ulong)_DAT_126b_008b >> 0x10);
        uVar1 = (undefined2)_DAT_126b_008b;
        iVar2 = FUN_1081_000c(uVar6);
        if (iVar2 == 0) {
          uVar3 = 0xffff;
          uVar1 = 0xffff;
        }
        goto LAB_1081_0170;
      }
    }
    uVar3 = 0xffff;
    uVar1 = 0xffff;
  }
  else {
    if ((int)param_2 < 0x11) {
      uVar4 = false;
      uVar5 = param_1 == 0;
      if ((bool)uVar5) goto LAB_1081_00ff;
    }
    uVar3 = 0xffff;
    uVar1 = 0xffff;
  }
LAB_1081_0170:
  return CONCAT22(uVar3,uVar1);
}



undefined2 FUN_1098_0004(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if ((bool)in_CF) {
    FUN_1046_000e(0x1000);
  }
  else {
    uVar2 = 0xffff;
  }
  return uVar2;
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



undefined2 FUN_109a_0052(undefined2 param_1_00,int *param_1,uint param_3,int param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  
  iVar2 = FUN_112f_0006(0x1000,(int)param_1,param_1._2_2_);
  if (iVar2 == 0) {
    if ((param_5 == 1) && (0 < *param_1)) {
      uVar4 = FUN_109a_0004((int)param_1,param_1._2_2_);
      bVar5 = param_3 < uVar4;
      param_3 = param_3 - uVar4;
      param_4 = (param_4 - ((int)uVar4 >> 0xf)) - (uint)bVar5;
    }
    puVar1 = (uint *)((int)param_1 + 2);
    *puVar1 = *puVar1 & 0xfe5f;
    *param_1 = 0;
    uVar3 = *(undefined2 *)((int)param_1 + 8);
    *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)((int)param_1 + 10);
    *(undefined2 *)((int)param_1 + 0xc) = uVar3;
    lVar6 = FUN_1115_000d(0x112f,(int)*(char *)((int)param_1 + 4),param_3,param_4,param_5);
    if (lVar6 == -1) {
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



long FUN_109a_00e0(undefined2 param_1_00,int *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_112f_0006(0x1000,(int)param_1,param_1._2_2_);
  if (iVar1 == 0) {
    lVar2 = FUN_1262_0005(0x112f,(int)*(char *)((int)param_1 + 4));
    if (0 < *param_1) {
      iVar1 = FUN_109a_0004((int)param_1,param_1._2_2_);
      lVar2 = lVar2 - iVar1;
    }
  }
  else {
    lVar2 = -1;
  }
  return lVar2;
}



void __cdecl16near FUN_10ae_0007(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int local_6;
  
  local_6 = 0x256;
  iVar1 = 0x14;
  uVar3 = 0x1000;
  while (iVar1 != 0) {
    uVar2 = uVar3;
    if ((*(uint *)(local_6 + 2) & 0x300) == 0x300) {
      uVar2 = 0x112f;
      FUN_112f_0006(uVar3,local_6,0x126b);
    }
    local_6 = local_6 + 0x14;
    iVar1 = iVar1 + -1;
    uVar3 = uVar2;
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
  iVar5 = FUN_10ec_0006(0x1000,(int)*(char *)(iVar6 + 4),uVar4,uVar3,uVar2);
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



void FUN_10ae_00d9(undefined2 param_1_00,int *param_1)

{
  *param_1 = *param_1 + 1;
  FUN_10ae_00f3(0x1000,param_1._0_2_,param_1._2_2_);
  return;
}



uint FUN_10ae_00f3(undefined2 param_1_00,int *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  byte local_3;
  
  uVar7 = 0x1000;
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
          iVar4 = FUN_10f8_000b(uVar7,(int)*(char *)(iVar5 + 4),&local_3);
          if (iVar4 != 1) break;
          if ((local_3 != 0xd) || (uVar7 = 0x10f8, (*(uint *)(iVar5 + 2) & 0x40) != 0)) {
            puVar2 = (uint *)(iVar5 + 2);
            *puVar2 = *puVar2 & 0xffdf;
            return (uint)local_3;
          }
        }
        iVar4 = FUN_1128_0006(0x10f8,(int)*(char *)(iVar5 + 4));
        if (iVar4 == 1) {
          *(uint *)(iVar5 + 2) = *(uint *)(iVar5 + 2) & 0xfe7f | 0x20;
        }
        else {
          puVar2 = (uint *)(iVar5 + 2);
          *puVar2 = *puVar2 | 0x10;
        }
        return 0xffff;
      }
      iVar4 = FUN_10d3_0008(uVar7,(int)*(char *)0x25a);
      if (iVar4 == 0) {
        puVar2 = (uint *)0x258;
        *puVar2 = *puVar2 & 0xfdff;
      }
      uVar7 = 0x10d4;
      FUN_10d4_000a(0x10d3,0x256,uVar6,0,0,(*(uint *)0x258 & 0x200) != 0,0x200);
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



uint FUN_10d3_0008(void)

{
  code *pcVar1;
  uint extraout_DX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return extraout_DX & 0x80;
}



undefined2
FUN_10d4_000a(undefined2 param_1_00,int *param_1,uint param_3_00,uint param_4,int param_2,
             uint param_3)

{
  uint *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  long lVar6;
  
  lVar6 = CONCAT22(param_4,param_3_00);
  uVar4 = 0x1000;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (((*(int *)(iVar2 + 0x12) == iVar2) && (param_2 < 3)) && (param_3 < 0x8000)) {
    if ((DAT_126b_0410 == 0) && (iVar2 == 0x26a)) {
      DAT_126b_0410 = 1;
    }
    else if ((DAT_126b_040e == 0) && (iVar2 == 0x256)) {
      DAT_126b_040e = 1;
    }
    if (*param_1 != 0) {
      uVar4 = 0x109a;
      FUN_109a_0052(0x1000,iVar2,uVar3,0,0,1);
    }
    uVar5 = uVar4;
    if ((*(uint *)(iVar2 + 2) & 4) != 0) {
      uVar5 = 0x11bf;
      FUN_11bf_0000(uVar4,*(undefined2 *)(iVar2 + 8),*(undefined2 *)(iVar2 + 10));
    }
    puVar1 = (uint *)(iVar2 + 2);
    *puVar1 = *puVar1 & 0xfff3;
    *(undefined2 *)(iVar2 + 6) = 0;
    *(undefined2 *)(iVar2 + 10) = uVar3;
    *(int *)(iVar2 + 8) = iVar2 + 5;
    *(undefined2 *)(iVar2 + 0xe) = uVar3;
    *(int *)(iVar2 + 0xc) = iVar2 + 5;
    if ((param_2 != 2) && (param_3 != 0)) {
      DAT_126b_0138 = 0x10e8;
      DAT_126b_0136 = 0xc;
      if ((param_3_00 | param_4) == 0) {
        lVar6 = FUN_1050_000c(uVar5,param_3);
        if (lVar6 == 0) {
          return 0xffff;
        }
        puVar1 = (uint *)(iVar2 + 2);
        *puVar1 = *puVar1 | 4;
      }
      param_4 = (uint)((ulong)lVar6 >> 0x10);
      param_3_00 = (uint)lVar6;
      *(undefined2 *)(iVar2 + 0xe) = param_4;
      *(undefined2 *)(iVar2 + 0xc) = param_3_00;
      *(undefined2 *)(iVar2 + 10) = param_4;
      *(undefined2 *)(iVar2 + 8) = param_3_00;
      *(uint *)(iVar2 + 6) = param_3;
      if (param_2 == 1) {
        puVar1 = (uint *)(iVar2 + 2);
        *puVar1 = *puVar1 | 8;
      }
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffff;
  }
  return uVar3;
}



int FUN_10ec_0006(undefined2 param_1_00,int param_1,undefined4 param_2,int param_4)

{
  uint *puVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 uVar7;
  char local_3;
  
  uVar7 = 0x1000;
  if ((param_4 + 1U < 2) || ((*(uint *)(param_1 * 2 + 0x3e6) & 0x200) != 0)) {
    iVar4 = 0;
  }
  else {
    do {
      iVar4 = FUN_10f8_000b(uVar7,param_1,(char *)param_2,param_2._2_2_,param_4);
      if (iVar4 + 1U < 2) {
        return iVar4;
      }
      pcVar5 = (char *)param_2;
      pcVar3 = (char *)param_2;
      if ((*(uint *)(param_1 * 2 + 0x3e6) & 0x8000) != 0) {
        return iVar4;
      }
      do {
        while( true ) {
          pcVar6 = pcVar3;
          cVar2 = *pcVar5;
          if (cVar2 == '\x1a') {
            FUN_1115_000d(0x10f8,param_1,-iVar4,-(uint)(iVar4 != 0),2);
            puVar1 = (uint *)(param_1 * 2 + 0x3e6);
            *puVar1 = *puVar1 | 0x200;
            goto LAB_10ec_00bf;
          }
          if (cVar2 == '\r') break;
          *pcVar6 = cVar2;
          iVar4 = iVar4 + -1;
          pcVar5 = pcVar5 + 1;
          pcVar3 = pcVar6 + 1;
          if (iVar4 == 0) goto LAB_10ec_0095;
        }
        iVar4 = iVar4 + -1;
        pcVar5 = pcVar5 + 1;
        pcVar3 = pcVar6;
      } while (iVar4 != 0);
      FUN_10f8_000b(0x10f8,param_1,&local_3);
      *pcVar6 = local_3;
LAB_10ec_0095:
      pcVar6 = pcVar6 + 1;
      uVar7 = 0x10f8;
    } while (pcVar6 == (char *)param_2);
LAB_10ec_00bf:
    iVar4 = (int)pcVar6 - (int)(char *)param_2;
  }
  return iVar4;
}



void FUN_10f8_000b(void)

{
  code *pcVar1;
  undefined in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    FUN_1046_000e(0x1000);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00011095)
// WARNING: Removing unreachable block (ram,0x000110f8)
// WARNING: Could not reconcile some variable overlaps

int FUN_10fa_000b(undefined2 param_1_00,int param_1,ulong param_2,int param_4)

{
  undefined *puVar1;
  uint *puVar2;
  char cVar3;
  undefined *puVar4;
  char *pcVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  int local_90;
  int local_8c;
  char *local_88;
  undefined local_84 [130];
  
  if (param_4 + 1U < 2) {
    param_4 = 0;
  }
  else if ((*(uint *)(param_1 * 2 + 0x3e6) & 0x8000) == 0) {
    puVar2 = (uint *)(param_1 * 2 + 0x3e6);
    *puVar2 = *puVar2 & 0xfdff;
    local_88 = (char *)(param_2 & 0xffff | (ulong)param_2._2_2_ << 0x10);
    local_8c = param_4;
    _local_90 = (char *)CONCAT22(unaff_SS,local_84);
    uVar7 = 0x1000;
    while (pcVar5 = local_88, local_8c != 0) {
      local_8c = local_8c + -1;
      local_88 = (char *)((ulong)local_88 & 0xffff0000 | (ulong)((int)local_88 + 1));
      cVar3 = *pcVar5;
      if (cVar3 == '\n') {
        *_local_90 = '\r';
        _local_90 = (char *)((ulong)_local_90 & 0xffff0000 | (ulong)(local_90 + 1));
      }
      *_local_90 = cVar3;
      puVar4 = (undefined *)(local_90 + 1);
      _local_90 = (char *)((ulong)_local_90 & 0xffff0000 | ZEXT24(puVar4));
      puVar1 = local_84;
      if ((puVar4 >= puVar1) && ((puVar4 < puVar1 || (0x7f < (uint)((int)puVar4 - (int)puVar1))))) {
        iVar6 = FUN_1111_0001(uVar7,param_1,local_84);
        if (iVar6 != (int)puVar4 - (int)local_84) {
          return ((param_4 - local_8c) + iVar6) - ((int)puVar4 - (int)local_84);
        }
        _local_90 = (char *)CONCAT22(unaff_SS,local_84);
        uVar7 = 0x1111;
      }
    }
    local_90 = local_90 - (int)local_84;
    if ((local_90 != 0) && (iVar6 = FUN_1111_0001(uVar7,param_1,local_84), iVar6 != local_90)) {
      param_4 = (param_4 + iVar6) - local_90;
    }
  }
  else {
    param_4 = FUN_1111_0001(0x1000,param_1,(undefined2)param_2,param_2._2_2_,param_4);
  }
  return param_4;
}



undefined2 FUN_1111_0001(undefined2 param_1_00,int param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined uVar5;
  undefined2 in_stack_00000000;
  
  uVar4 = 0x1000;
  uVar5 = 0;
  if ((*(uint *)(param_1 * 2 + 0x3e6) & 0x800) != 0) {
    uVar5 = 0;
    uVar4 = 0x1115;
    FUN_1115_000d(0x1000,param_1,0,0,2);
  }
  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  if ((bool)uVar5) {
    uVar3 = FUN_1046_000e(uVar4);
  }
  else {
    puVar1 = (uint *)(param_1 * 2 + 0x3e6);
    *puVar1 = *puVar1 | 0x1000;
  }
  return uVar3;
}



void FUN_1115_000d(undefined2 param_1_00,int param_1)

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
    FUN_1046_000e(0x1000);
  }
  return;
}



undefined *
FUN_1118_000a(undefined2 param_1_00,char param_1,char param_2,uint param_3,undefined *param_4,
             uint param_5,uint param_6)

{
  char *pcVar1;
  byte bVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
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
      param_5 = (uint)(uVar3 / param_3);
      *pbVar6 = (byte)(uVar3 % (ulong)param_3);
      pbVar6 = pbVar6 + 1;
    } while (param_6 != 0);
    while (param_5 != 0) {
LAB_1118_0054:
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



void FUN_1118_008e(undefined2 param_1_00,uint param_1,undefined2 param_2,undefined2 param_3,
                  int param_4)

{
  int iVar1;
  
  if (param_4 == 10) {
    iVar1 = (int)param_1 >> 0xf;
  }
  else {
    iVar1 = 0;
  }
  FUN_1118_000a(0x1000,param_1 & 0xff00 | 0x61,1,param_4,param_2,param_3,param_1,iVar1);
  return;
}



void FUN_1118_00bb(undefined2 param_1_00,undefined2 param_1,undefined2 param_2,undefined2 param_3,
                  undefined2 param_4,undefined2 param_5)

{
  uint in_AX;
  
  FUN_1118_000a(0x1000,0x61,in_AX & 0xff00,param_5,param_3,param_4,param_1,param_2);
  return;
}



void FUN_1118_00db(undefined2 param_1_00,undefined2 param_1,undefined2 param_2,undefined2 param_3,
                  undefined2 param_4,int param_5)

{
  FUN_1118_000a(0x1000,0x61,param_5 == 10,param_5,param_3,param_4,param_1,param_2);
  return;
}



// WARNING: Removing unreachable block (ram,0x000112dc)

undefined2 FUN_1128_0006(undefined2 param_1_00,int param_1)

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
  uVar2 = FUN_1046_000e(0x1000,uVar2);
  return uVar2;
}



undefined2 FUN_112f_0006(undefined2 param_1_00,int *param_1)

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
    iVar4 = FUN_10fa_000b(0x1000,(int)*(char *)(iVar5 + 4),uVar3,uVar2,iVar6);
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



void FUN_113d_000e(void)

{
  FUN_1167_0037(0x1000,&stack0x0008);
  return;
}



void FUN_1140_0002(undefined2 param_1_00,char param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  FUN_1140_0021(0x1000,(int)param_1,param_2._0_2_,param_2._2_2_);
  return;
}



uint FUN_1140_0021(undefined2 param_1_00,byte param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  bVar4 = param_1;
  uVar6 = 0x1000;
  while( true ) {
    iVar5 = *param_2;
    *param_2 = *param_2 + 1;
    if (SCARRY2(iVar5,1) != *param_2 < 0) {
      piVar1 = (int *)((int)param_2 + 0xc);
      *piVar1 = *piVar1 + 1;
      uVar3 = *(undefined4 *)((int)param_2 + 0xc);
      *(byte *)((int)uVar3 + -1) = bVar4;
      if (((*(uint *)((int)param_2 + 2) & 8) != 0) &&
         (((bVar4 == 10 || (bVar4 == 0xd)) &&
          (iVar5 = FUN_112f_0006(uVar6,(int)param_2,param_2._2_2_), iVar5 != 0)))) {
        return 0xffff;
      }
      return (uint)bVar4;
    }
    *param_2 = *param_2 + -1;
    if (((*(uint *)((int)param_2 + 2) & 0x90) != 0) || ((*(uint *)((int)param_2 + 2) & 2) == 0)) {
      puVar2 = (uint *)((int)param_2 + 2);
      *puVar2 = *puVar2 | 0x10;
      return 0xffff;
    }
    puVar2 = (uint *)((int)param_2 + 2);
    *puVar2 = *puVar2 | 0x100;
    if (*(int *)((int)param_2 + 6) == 0) break;
    if (*param_2 == 0) {
      *param_2 = -1 - *(int *)((int)param_2 + 6);
    }
    else {
      iVar5 = FUN_112f_0006(uVar6,(int)param_2,param_2._2_2_);
      uVar6 = 0x112f;
      if (iVar5 != 0) {
        return 0xffff;
      }
    }
  }
  uVar7 = uVar6;
  if ((bVar4 == 10) && ((*(uint *)((int)param_2 + 2) & 0x40) == 0)) {
    uVar7 = 0x1111;
    iVar5 = FUN_1111_0001(uVar6,(int)*(char *)((int)param_2 + 4),0x444,0x126b,1);
    if (iVar5 == 1) goto LAB_1140_0125;
  }
  else {
LAB_1140_0125:
    iVar5 = FUN_1111_0001(uVar7,(int)*(char *)((int)param_2 + 4),&param_1);
    if (iVar5 == 1) goto LAB_1140_015d;
  }
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  if ((*(uint *)((int)param_2 + 2) & 0x200) == 0) {
    puVar2 = (uint *)((int)param_2 + 2);
    *puVar2 = *puVar2 | 0x10;
    return 0xffff;
  }
LAB_1140_015d:
  return (uint)bVar4;
}



void FUN_1140_0168(undefined2 param_1_00,undefined2 param_1)

{
  FUN_1140_0021(0x1000,param_1,0x26a,0x126b);
  return;
}



uint FUN_1140_0181(undefined2 param_1_00,int *param_1,uint param_2,byte *param_3)

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
  undefined2 uVar10;
  
  uVar10 = 0x1000;
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
          uVar7 = FUN_1140_0002(0x1000,uVar6 & 0xff00 | (uint)*pbVar4,iVar8,uVar9);
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
      if (*param_1 != 0) {
        uVar10 = 0x112f;
        iVar5 = FUN_112f_0006(0x1000,iVar8,uVar9);
        if (iVar5 != 0) {
          return 0;
        }
      }
      uVar6 = FUN_1111_0001(uVar10,(int)*(char *)(iVar8 + 4),(int)param_3,param_3._2_2_,param_2);
      if (uVar6 < param_2) {
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
      iVar5 = FUN_1140_0021(0x1000,(int)(char)*pbVar4,iVar8,uVar9);
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
  *unaff_DI = *(undefined *)(ulong)((bVar1 >> 4) + 0x44d);
  unaff_DI[1] = *(undefined *)(ulong)((bVar1 & 0xf) + 0x44d);
  unaff_DI[2] = *(undefined *)(ulong)((byte)((byte)param_1 >> 4) + 0x44d);
  unaff_DI[3] = *(undefined *)(ulong)(((byte)param_1 & 0xf) + 0x44d);
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

undefined * __cdecl16near
FUN_1167_0037(undefined2 param_1_00,uint *param_1,long param_2,undefined2 param_4,undefined *param_5
             ,int *param_6,undefined2 param_7)

{
  char *pcVar1;
  byte *pbVar2;
  uint *puVar3;
  int *piVar4;
  undefined *puVar5;
  int *piVar6;
  byte bVar7;
  code *pcVar8;
  int **ppiVar9;
  char cVar10;
  byte bVar11;
  uint uVar12;
  undefined *puVar13;
  int *piVar14;
  undefined *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int *extraout_DX;
  undefined2 extraout_DX_00;
  int extraout_DX_01;
  int extraout_DX_02;
  int *extraout_DX_03;
  int *extraout_DX_04;
  int *piVar19;
  int **ppiVar20;
  int *piVar21;
  int unaff_SI;
  int *piVar22;
  int *piVar23;
  undefined2 unaff_ES;
  undefined2 uVar24;
  undefined2 uVar25;
  undefined2 uVar26;
  int *unaff_SS;
  bool bVar27;
  undefined uVar28;
  ulong uVar29;
  undefined4 uVar30;
  undefined2 in_stack_00000054;
  char cStack0055;
  undefined *puStack160;
  int iStack144;
  int *local_8c;
  byte *pbStack136;
  undefined auStack132 [42];
  undefined *local_5a;
  char local_57;
  int local_56 [21];
  undefined local_2b;
  undefined *puStack42;
  int iStack40;
  undefined2 uStack36;
  undefined4 local_a;
  undefined4 local_6;
  
  uVar25 = 0x126b;
  puVar15 = &stack0xfffe;
code_r0x000116b0:
  local_5a = (undefined *)0x0;
  local_57 = 'P';
  local_6 = (uint *)((ulong)local_6 & 0xffff);
  piVar23 = local_56;
  uVar24 = (undefined2)((ulong)param_2 >> 0x10);
  piVar22 = (int *)param_2;
LAB_1167_00a6:
  local_8c = (int *)((int)piVar22 + 1);
  bVar11 = *(byte *)piVar22;
  if (bVar11 == 0) goto LAB_1167_055c;
  piVar21 = local_8c;
  if (bVar11 == 0x25) {
    piVar21 = piVar22 + 1;
    bVar11 = *(byte *)local_8c;
    if (bVar11 != 0x25) goto code_r0x0001173b;
  }
  *(byte *)piVar23 = bVar11;
  piVar23 = (int *)((int)piVar23 + 1);
  cVar10 = local_57 + -1;
  bVar27 = local_57 < '\x01';
  piVar22 = piVar21;
  local_57 = cVar10;
  if (cVar10 == '\0' || bVar27) {
    FUN_1167_0066();
  }
  goto LAB_1167_00a6;
LAB_1000_1f7a:
  piVar22 = (int *)((int)piVar21 + 1);
  bVar11 = *(byte *)piVar21;
  if (bVar11 == 0) {
    return puStack42;
  }
  if (bVar11 == 0x25) {
    uStack36 = 0xffff;
    local_2b = 0x20;
    piVar21 = piVar21 + 1;
    uVar18 = (uint)(char)*(byte *)piVar22;
    if ((int)uVar18 < 0) {
      return puStack42;
    }
    bVar11 = *(byte *)(uVar18 + 0x4be);
    puVar15 = (undefined *)(uint)bVar11;
    param_6 = piVar21;
    if ((undefined *)((int)s_Turbo_C___Copyright__c__1988_Bor_126b_0004 + 0x12U) <= puVar15) {
LAB_11f4_0460:
      puStack160 = param_5;
      (*(code *)param_2)(0x1000,0xffff);
      return puStack42 + -(uint)(puStack42 == (undefined *)0x0);
    }
    piVar19 = (int *)((int)puVar15 * 2);
    uVar26 = 0x1000;
    puVar13 = &stack0xfffe;
    uVar24 = param_7;
    switch(puVar15) {
    case (undefined *)0x0:
      break;
    case (undefined *)0x1:
                    // WARNING: Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
      return puVar15;
    case (undefined *)0x2:
      pcVar1 = &stack0xfffe + (int)piVar21;
      *pcVar1 = *pcVar1 + bVar11;
      puVar13 = &stack0xfffe;
      break;
    case (undefined *)0x3:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case (undefined *)0x4:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case (undefined *)0x5:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case (undefined *)0x6:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    default:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case (undefined *)0x8:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case (undefined *)0xa:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case (undefined *)0xc:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case (undefined *)0xe:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case (undefined *)0xf:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case (undefined *)0x10:
      *(undefined2 *)((int)piVar19 + uVar18) = 0x30b4;
      goto switchD_1000_201e_caseD_13;
    case (undefined *)0x11:
      uVar25 = param_7;
      while( true ) {
        *(byte *)piVar19 = (byte)puVar15;
        puVar15 = (undefined *)(iStack144 + 1);
        _iStack144 = (undefined *)((ulong)_iStack144 & 0xffff0000 | ZEXT24(puVar15));
        uVar25 = uVar26;
code_r0x0001104c:
        pbVar2 = pbStack136;
        puVar13 = auStack132;
        uVar26 = uVar25;
        if ((puVar15 >= puVar13) &&
           ((puVar15 < puVar13 || (0x7f < (uint)((int)puVar15 - (int)puVar13))))) {
          puVar15 = (undefined *)(iStack144 - (int)auStack132);
          uVar26 = 0x1111;
          puStack160 = puVar15;
          puVar13 = (undefined *)FUN_1111_0001(uVar25,(code *)param_1,auStack132);
          if (puVar13 != puVar15) {
            return puVar13 + (((int)param_2._2_2_ - (int)local_8c) - (int)puVar15);
          }
          _iStack144 = (undefined *)CONCAT22(unaff_SS,auStack132);
        }
        if (local_8c == (int *)0x0) break;
        local_8c = (int *)((int)local_8c + -1);
        pbStack136 = (byte *)((ulong)pbStack136 & 0xffff0000 | (ulong)((int)pbStack136 + 1));
        bVar11 = *pbVar2;
        if (bVar11 == 10) {
          *_iStack144 = 0xd;
          _iStack144 = (undefined *)((ulong)_iStack144 & 0xffff0000 | (ulong)(iStack144 + 1));
        }
        puVar15 = (undefined *)(uint)bVar11;
        piVar19 = (int *)_iStack144;
        uVar25 = (int)((ulong)_iStack144 >> 0x10);
      }
      puVar15 = (undefined *)(iStack144 - (int)auStack132);
      if (puVar15 != (undefined *)0x0) {
        puStack160 = puVar15;
        puVar13 = (undefined *)FUN_1111_0001(uVar26,(code *)param_1,auStack132);
        if (puVar13 != puVar15) {
          return puVar13 + ((int)param_2._2_2_ - (int)puVar15);
        }
      }
                    // WARNING: Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
      return param_2._2_2_;
    case (undefined *)0x12:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case (undefined *)0x13:
      goto switchD_1000_201e_caseD_13;
    case (undefined *)0x14:
      uVar25 = uVar26;
      goto code_r0x0001104c;
    case (undefined *)0x15:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    goto switchD_1000_201e_caseD_0;
  }
  iVar16 = (int)(char)bVar11;
  iStack40 = iStack40 + 1;
  puStack160 = param_5;
  uVar30 = (*(code *)param_1)(0x1000);
  piVar23 = (int *)((ulong)uVar30 >> 0x10);
  iVar17 = (int)uVar30;
  if (iVar17 < 0) goto LAB_11f4_0460;
  piVar21 = piVar22;
  if ((iVar16 < 0) || (*(char *)(iVar16 + 0x4be) != '\x01')) {
    if (iVar17 != iVar16) {
      puStack160 = param_5;
      (*(code *)param_2)(0x1000,iVar17);
                    // WARNING: Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
      return puStack42;
    }
  }
  else {
    while ((-1 < (char)iVar17 && (*(char *)(iVar17 + 0x4be) == '\x01'))) {
      iStack40 = iStack40 + 1;
      puStack160 = param_5;
      iVar17 = (*(code *)param_1)(0x1000);
      if (iVar17 < 1) goto LAB_11f4_0460;
    }
    puStack160 = param_5;
    (*(code *)param_2)(0x1000,iVar17);
    iStack40 = iStack40 + -1;
    piVar23 = extraout_DX_03;
  }
  goto LAB_1000_1f7a;
switchD_1000_201e_caseD_13:
  pcVar8 = (code *)swi(0x21);
  uVar29 = (*pcVar8)();
  puVar15 = DAT_126b_0002;
code_r0x00010010:
  uVar26 = s_Turbo_C___Copyright__c__1988_Bor_126b_0004._40_2_;
  uVar25 = (undefined2)(uVar29 >> 0x10);
  *(undefined2 *)&DAT_126b_007d = (int)uVar29;
  *(undefined2 *)&DAT_126b_007b = uVar24;
  *(undefined2 *)&DAT_126b_0077 = uVar26;
  *(undefined2 *)&DAT_126b_0091 = puVar15;
  *(undefined2 *)&DAT_126b_0081 = 0xffff;
  puStack160 = (undefined *)0x2e;
  FUN_1000_012f();
  uVar30 = *(undefined4 *)&DAT_126b_0075;
  uVar24 = (undefined2)((ulong)uVar30 >> 0x10);
  piVar23 = (int *)uVar30;
code_r0x00010032:
  uVar18 = 0x7fff;
  piVar19 = piVar23;
  piVar22 = piVar23;
  do {
    if (((*piVar22 == 0x3738) && (iVar16 = piVar22[1], (char)iVar16 == '=')) &&
       (piVar4 = (int *)&DAT_126b_0081, *piVar4 = *piVar4 + 1,
       ((byte)((uint)iVar16 >> 8) & 0xdf) == 0x59)) {
      piVar4 = (int *)&DAT_126b_0081;
      *piVar4 = *piVar4 + 1;
    }
    do {
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      piVar4 = piVar22;
      piVar22 = (int *)((int)piVar22 + 1);
    } while ((byte)piVar23 != *(byte *)piVar4);
    if (uVar18 == 0) goto LAB_1000_01b6;
    piVar19 = (int *)((int)piVar19 + 1);
  } while (*(byte *)piVar22 != (byte)piVar23);
  *(int *)&DAT_126b_0075 = -(uVar18 | 0x8000);
  piVar19 = (int *)((int)piVar19 * 4 + 0x10U & 0xfff0);
  *(int **)&DAT_126b_0079 = piVar19;
  uVar18 = *(uint *)&DAT_126b_0142;
  piVar23 = unaff_SS;
  puVar13 = puVar15 + -(int)unaff_SS;
switchD_1000_201e_caseD_0:
  if (uVar18 < 0x200) {
    uVar18 = 0x200;
    *(undefined2 *)&DAT_126b_0142 = 0x200;
  }
  bVar11 = 4;
  puStack160 = (undefined *)((uVar18 >> 4) + 1);
  if (puStack160 <= puVar13) {
    puVar15 = puStack160 + (int)piVar23;
    *(int *)&DAT_126b_0089 = (int)puVar15;
    *(int *)&DAT_126b_008d = (int)puVar15;
    piVar19 = (int *)(puVar15 + -*(int *)&DAT_126b_007b);
    pcVar8 = (code *)swi(0x21);
    (*pcVar8)();
    piVar23 = (int *)(unaff_SI << (bVar11 & 0x1f));
    piVar14 = extraout_DX;
switchD_1000_177f_caseD_e:
    puVar15 = (undefined *)&DAT_12bf_0014;
    for (iVar16 = 0x80; iVar16 != 0; iVar16 = iVar16 + -1) {
      puVar5 = puVar15;
      puVar15 = puVar15 + 1;
      *puVar5 = 0;
    }
    piVar23[-1] = 0x1000;
    (**(code **)&DAT_126b_053e)();
    FUN_1000_01d1();
    FUN_1000_02cf();
    pcVar8 = (code *)swi(0x1a);
    (*pcVar8)();
    *(undefined2 *)&DAT_126b_0083 = extraout_DX_00;
    *(int *)&DAT_126b_0085 = iVar16;
    (**(code **)&DAT_12bf_0002)();
    unaff_ES = *(undefined2 *)&DAT_126b_006d;
    puStack160 = (undefined *)*(undefined2 *)&DAT_126b_006b;
    FUN_103c_0002();
    FUN_104a_000a(0x103c);
    FUN_1000_0172(0x1000);
    (*pcRam00000540)(0x1000);
    pcVar8 = (code *)swi(0x21);
    (*pcVar8)();
    unaff_SS = piVar14;
  }
LAB_1000_01b6:
  do {
    puStack160 = (undefined *)0x1be;
    FUN_1000_01a7();
    puStack160 = (undefined *)0x3;
    cVar10 = FUN_1000_010d();
    pbVar2 = (byte *)((int)piVar19 + (int)piVar21);
    *pbVar2 = *pbVar2 + cVar10;
    pbVar2 = (byte *)((int)piVar19 + (int)piVar21);
    *pbVar2 = *pbVar2 + cVar10;
    pbVar2 = (byte *)((int)piVar19 + (int)piVar21);
    *pbVar2 = *pbVar2 + cVar10;
    pbVar2 = (byte *)((int)piVar19 + (int)piVar21);
    *pbVar2 = *pbVar2 + cVar10;
    pbVar2 = (byte *)((int)piVar19 + (int)piVar21);
    *pbVar2 = *pbVar2 + cVar10;
                    // WARNING (jumptable): Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101c9) is written
    puRam000101c9 = puStack160;
                    // WARNING (jumptable): Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
                    // WARNING (jumptable): Read-only address (ram,0x000101cd) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
    uRam000101cd = 0;
    uVar12 = (uint)*(byte *)((int)&DAT_126b_007f + 1);
    piVar19 = (int *)(uVar12 + 1);
    piVar21 = (int *)(iRam00000075 + 2);
    uVar18 = 1;
    uVar25 = uRam0000007b;
    uRam000101cb = unaff_ES;
    if (2 < bRam0000007d) {
      uVar18 = 0x7f;
      piVar23 = piVar21;
      do {
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        piVar4 = piVar23;
        piVar23 = (int *)((int)piVar23 + 1);
      } while (*(byte *)piVar4 != 0);
      if (uVar18 == 0) goto LAB_1000_01b6;
      uVar18 = uVar18 ^ 0x7f;
      uVar25 = uRam00000077;
    }
    puVar15 = (undefined *)(uVar12 + 2 + uVar18 & 0xfffe);
    iVar16 = -(int)puVar15;
    piVar23 = (int *)(auStack132 + iVar16 + -0x1a);
    if (puVar15 <= &stack0xff62) {
      *(uint *)((int)&puStack160 + iVar16) = uVar18;
      piVar22 = piVar23;
      while (uVar18 - 1 != 0) {
        piVar6 = piVar22;
        piVar22 = (int *)((int)piVar22 + 1);
        piVar4 = piVar21;
        piVar21 = (int *)((int)piVar21 + 1);
        *(byte *)piVar6 = *(byte *)piVar4;
        uVar18 = uVar18 - 1;
      }
      bVar27 = false;
      *(byte *)piVar22 = 0;
      uVar28 = uVar18 == 0;
LAB_1000_0243:
      *(undefined2 *)(auStack132 + iVar16 + -0x1e) = 0x246;
      bVar11 = FUN_1000_025f();
      iVar17 = extraout_DX_01;
      if (bVar27 || (bool)uVar28) {
        do {
          if (bVar27) {
            iVar17 = *(int *)((int)&puStack160 + iVar16) + iVar17;
            piVar19 = (int *)((uVar18 + 1) * 4);
            ppiVar20 = (int **)(piVar23 + (uVar18 + 1) * -2);
            piVar21 = piVar23;
            uRam0000006b = uVar18;
            ppiVar9 = ppiVar20;
            piVar22 = unaff_SS;
            if (piVar23 < piVar19) goto LAB_1000_01b6;
            goto LAB_1000_02af;
          }
          *(undefined2 *)(auStack132 + iVar16 + -0x1e) = 0x24d;
          bVar11 = FUN_1000_025f();
          iVar17 = extraout_DX_02;
        } while (!bVar27 && !(bool)uVar28);
      }
      if ((bVar11 != 0x20) && (bVar11 != 0xd)) break;
      goto LAB_1000_025b;
    }
  } while( true );
  bVar27 = bVar11 < 9;
  uVar28 = bVar11 == 9;
  if ((bool)uVar28) {
LAB_1000_025b:
    bVar27 = false;
    uVar28 = true;
  }
  goto LAB_1000_0243;
  while( true ) {
    *ppiVar20 = piVar23;
    ppiVar20[1] = unaff_SS;
    ppiVar20 = ppiVar20 + 2;
    do {
      piVar4 = piVar23;
      piVar23 = (int *)((int)piVar23 + 1);
      bVar27 = *(byte *)piVar4 != 0;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0 && bVar27);
    ppiVar9 = ppiRam0000006d;
    piVar22 = piRam0000006f;
    if (bVar27) break;
LAB_1000_02af:
    piRam0000006f = piVar22;
    ppiRam0000006d = ppiVar9;
    if (iVar17 == 0) break;
  }
  *ppiVar20 = (int *)0x0;
  ppiVar20[1] = (int *)0x0;
                    // WARNING: Treating indirect jump as call
  puVar15 = (undefined *)(*(code *)0x0)();
  return puVar15;
code_r0x0001173b:
  _iStack144 = (undefined *)((ulong)_iStack144 & 0xff);
  piVar14 = (int *)(uint)bVar11;
  if (0x5f < (byte)(bVar11 - 0x20)) {
LAB_1167_0553:
    do {
      FUN_1167_005d();
      piVar4 = local_8c;
      local_8c = (int *)((int)local_8c + 1);
    } while (*(byte *)piVar4 != 0);
LAB_1167_055c:
    if (local_57 < 'P') {
      FUN_1167_0066();
    }
    if (local_6._2_2_ != 0) {
      local_5a = (undefined *)0xffff;
    }
    return local_5a;
  }
  bVar7 = *(byte *)((byte)(bVar11 - 0x20) + 0x45d);
  puVar13 = (undefined *)(uint)bVar7;
  if ((undefined *)((int)s_Turbo_C___Copyright__c__1988_Bor_126b_0004 + 0x13U) < puVar13)
  goto LAB_1167_0553;
  piVar19 = (int *)((int)puVar13 * 2);
  switch(puVar13) {
  case (undefined *)0x0:
    iRam00012877 = *(int *)(&stack0xfffe + (int)piVar21) * 0x2e;
    goto switchD_1000_201e_caseD_13;
  case (undefined *)0x1:
    piVar19[6] = (int)puVar13;
    if ((piVar23 != (int *)&DAT_126b_0002) && (piVar21 != (int *)0x0)) {
      DAT_126b_0138 = 0x10e8;
      DAT_126b_0136 = 0xc;
      if (((uint)(code *)param_2 | (uint)param_2._2_2_) == 0) {
        param_2 = FUN_1050_000c(0x1000,piVar21);
        if (param_2 == 0) {
          return (undefined *)0xffff;
        }
        puVar3 = (uint *)((int)param_1 + 2);
        *puVar3 = *puVar3 | 4;
      }
      uVar25 = (undefined2)((ulong)param_1 >> 0x10);
      iVar16 = (int)param_1;
      *(undefined2 *)(iVar16 + 0xe) = param_2._2_2_;
      *(undefined2 *)(iVar16 + 0xc) = (code *)param_2;
      *(undefined2 *)(iVar16 + 10) = param_2._2_2_;
      *(undefined2 *)(iVar16 + 8) = (code *)param_2;
      *(int **)(iVar16 + 6) = piVar21;
      if (piVar23 == (int *)0x1) {
        puVar3 = (uint *)(iVar16 + 2);
        *puVar3 = *puVar3 | 8;
      }
    }
    return (undefined *)0x0;
  case (undefined *)0x2:
    if (puVar13 != (undefined *)0x0) {
      return puVar13;
    }
    cStack0055 = cStack0055 + bVar11;
    unaff_ES = uVar24;
    goto code_r0x000116b0;
  case (undefined *)0x3:
    out(*(byte *)piVar21,piVar14);
    puVar3 = (uint *)((int)piVar19 + (int)((int)piVar22 + 3));
    uVar18 = *puVar3;
    piVar4 = piVar23 + 7;
    *(byte *)piVar4 = *(byte *)piVar4 + CARRY2((uint)puVar13,*puVar3);
    DAT_126b_014e = 0;
    DAT_126b_0150 = 0;
    return puVar13 + uVar18;
  case (undefined *)0x4:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0x5:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0x6:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0x7:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0x8:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0x9:
    uVar29 = (ulong)CONCAT12(bVar11,(uint)(byte)(bVar7 + *(byte *)(int *)((int)piVar19 +
                                                                         (int)piVar21)));
    puVar15 = &stack0xfffe;
    goto code_r0x00010010;
  case (undefined *)0xa:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0xb:
    goto code_r0x00010032;
  case (undefined *)0xc:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0xd:
    in(piVar14);
    uVar18 = *param_1;
    *param_1 = *param_1 - 1;
    piVar4 = (int *)((int)param_1 + 2);
    *piVar4 = *piVar4 - (uint)(uVar18 == 0);
    local_a = (uint *)FUN_1000_0313(0x1000);
    local_6 = *(uint **)((int)param_1 + 4);
    bVar27 = (*local_6 & 1) == 0;
    if (bVar27) {
      puStack160 = (undefined *)0x1000;
      FUN_1000_036e();
      if (!bVar27) {
        iVar16 = *(int *)((int)param_1 + 2);
        uVar18 = *param_1;
        uVar24 = (undefined2)((ulong)local_6 >> 0x10);
        piVar19 = (int *)local_6;
        uVar12 = *local_6;
        *local_6 = *local_6 + uVar18;
        piVar4 = piVar19 + 1;
        *piVar4 = *piVar4 + iVar16 + (uint)CARRY2(uVar12,uVar18);
        uVar25 = (undefined2)((ulong)local_a >> 0x10);
        *(undefined2 *)((int)local_a + 6) = uVar24;
        *(int **)((int)local_a + 4) = piVar19;
        goto code_r0x00011e8a;
      }
    }
    puStack160 = param_1._2_2_;
    FUN_11bf_0012(0x1000);
    break;
  case (undefined *)0xe:
    goto switchD_1000_177f_caseD_e;
  case (undefined *)0xf:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0x10:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0x11:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0x12:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0x13:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0x14:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0x15:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0x16:
    FUN_1000_03ba(0x1000,piVar23,uVar24);
    piVar23 = extraout_DX_04;
    piVar21 = param_6;
    goto LAB_1000_1f7a;
  case (undefined *)0x17:
code_r0x00011e8a:
    param_1 = (uint *)CONCAT22(uVar24,piVar19);
  }
  puVar15 = (undefined *)(*local_a & 1);
  if (puVar15 == (undefined *)0x0) {
    puStack160 = local_a._2_2_;
    puVar15 = (undefined *)FUN_11bf_00b1(0x1000,(code *)param_1,param_1._2_2_);
  }
  return puVar15;
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
    *piVar2 = (int)(unaff_DI + (1 - (unaff_BP + -0x54)) + *piVar2);
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



void FUN_11bf_0000(undefined2 param_1_00,undefined2 param_1,undefined2 param_2)

{
  FUN_11bf_02da(0x1000,param_1,param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_11bf_0012(undefined2 param_1_00,ulong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  bool bVar4;
  
  bVar4 = true;
  FUN_1000_036e(0x1000);
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



void FUN_11bf_00b1(undefined2 param_1_00,uint *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  bool bVar9;
  undefined4 uVar10;
  
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = *(int *)((int)param_2 + 2);
  uVar3 = *param_2;
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  uVar4 = *param_1;
  *param_1 = *param_1 + uVar3;
  piVar1 = (int *)(iVar6 + 2);
  *piVar1 = *piVar1 + iVar2 + (uint)CARRY2(uVar4,uVar3);
  bVar9 = *piVar1 == 0;
  FUN_1000_036e(0x1000);
  if (!bVar9) {
    uVar10 = FUN_1000_0313(0x1000);
    uVar5 = (undefined2)((ulong)uVar10 >> 0x10);
    *(undefined2 *)((int)uVar10 + 6) = uVar8;
    *(int *)((int)uVar10 + 4) = iVar6;
    iVar6 = DAT_126b_014a;
    uVar8 = DAT_126b_014c;
  }
  DAT_126b_014c = uVar8;
  DAT_126b_014a = iVar6;
  FUN_1050_0021(0x1000,(int)param_2,uVar7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_11bf_0129(void)

{
  uint *puVar1;
  undefined2 uVar2;
  bool bVar3;
  undefined uVar4;
  int local_6;
  uint local_4;
  
  bVar3 = (undefined *)register0x00000010 ==
          (undefined *)((int)s_Turbo_C___Copyright__c__1988_Bor_126b_0004 + 2);
  FUN_1000_036e(0x1000);
  if (bVar3) {
    FUN_1081_009c(0x1000,DAT_126b_0146,DAT_126b_0148);
    _DAT_126b_014a = 0;
    DAT_126b_0148 = 0;
    DAT_126b_0146 = 0;
  }
  else {
    uVar2 = (undefined2)(_DAT_126b_014a >> 0x10);
    puVar1 = *(uint **)((int)_DAT_126b_014a + 4);
    uVar4 = (*puVar1 & 1) == 0;
    local_6 = (int)puVar1;
    local_4 = (uint)((ulong)puVar1 >> 0x10);
    if ((bool)uVar4) {
      FUN_1050_0021(0x1000,local_6,local_4);
      FUN_1000_036e(0x1050);
      if ((bool)uVar4) {
        _DAT_126b_014a = 0;
        DAT_126b_0148 = 0;
        DAT_126b_0146 = 0;
      }
      else {
        _DAT_126b_014a = *(ulong *)(local_6 + 4);
      }
      FUN_1081_009c(0x1000,local_6,local_4);
    }
    else {
      FUN_1081_009c(0x1000,(int)_DAT_126b_014a,uVar2);
      _DAT_126b_014a = (ulong)puVar1 & 0xffff | (ulong)local_4 << 0x10;
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
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar7;
  uint uVar8;
  bool bVar9;
  uint *puVar10;
  
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  iVar6 = (int)param_2;
  uVar3 = *param_2;
  *param_2 = *param_2 - 1;
  piVar1 = (int *)(iVar6 + 2);
  *piVar1 = *piVar1 - (uint)(uVar3 == 0);
  puVar10 = (uint *)FUN_1000_0313(0x1000);
  uVar5 = (undefined2)((ulong)puVar10 >> 0x10);
  puVar4 = *(uint **)(iVar6 + 4);
  bVar9 = (*puVar4 & 1) == 0;
  if (bVar9) {
    FUN_1000_036e(0x1000);
    if (!bVar9) {
      iVar6 = *(int *)(iVar6 + 2);
      uVar3 = *param_2;
      uVar8 = (uint)((ulong)puVar4 >> 0x10);
      uVar2 = *puVar4;
      *puVar4 = *puVar4 + uVar3;
      piVar1 = (int *)((int)puVar4 + 2);
      *piVar1 = *piVar1 + iVar6 + (uint)CARRY2(uVar2,uVar3);
      *(uint *)((int)puVar10 + 6) = uVar8;
      *(int *)((int)puVar10 + 4) = (int)puVar4;
      param_2 = (uint *)((ulong)puVar4 & 0xffff | (ulong)uVar8 << 0x10);
      goto LAB_11bf_02ae;
    }
  }
  FUN_11bf_0012(0x1000,iVar6,uVar7);
LAB_11bf_02ae:
  if ((*puVar10 & 1) == 0) {
    FUN_11bf_00b1(0x1000,param_2._0_2_,param_2._2_2_,puVar10);
  }
  return;
}



void FUN_11bf_02da(undefined2 param_1_00,uint param_1,uint param_2)

{
  undefined uVar1;
  undefined4 uVar2;
  
  uVar1 = (param_1 | param_2) == 0;
  if (!(bool)uVar1) {
    uVar2 = FUN_1000_0313(0x1000);
    FUN_1000_036e(0x1000);
    if ((bool)uVar1) {
      FUN_11bf_0129(0x1000);
    }
    else {
      FUN_11bf_020e(0x1000,uVar2);
    }
  }
  return;
}



void FUN_11f1_0007(undefined2 param_1_00,undefined2 param_1,undefined2 param_2)

{
  FUN_11f4_0005(0x1000,0xf3,0x10ae,0xe,0x1263,0x256,0x126b,param_1,param_2,&stack0x0008);
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

undefined *
FUN_11f4_0005(undefined2 param_1_00,code *param_1,undefined2 param_3_00,code *param_2,
             undefined *param_3,undefined2 param_4,undefined *param_5,int *param_6,
             undefined2 param_7)

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
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int *extraout_DX;
  undefined2 extraout_DX_00;
  int extraout_DX_01;
  int extraout_DX_02;
  int *in_DX;
  int *extraout_DX_03;
  int *piVar17;
  int **ppiVar18;
  int *piVar19;
  int *piVar20;
  int unaff_DI;
  undefined2 uVar21;
  undefined2 unaff_ES;
  undefined2 uVar22;
  int *unaff_SS;
  undefined2 uVar23;
  bool bVar24;
  undefined uVar25;
  undefined4 uVar26;
  int local_90;
  int local_8c;
  byte *local_88;
  undefined local_84 [70];
  undefined2 uStack62;
  undefined2 uStack60;
  code *pcStack58;
  undefined *puStack56;
  undefined *puStack52;
  
  uVar23 = 0x126b;
  piVar19 = param_6;
  while( true ) {
    uVar21 = param_7;
    piVar17 = (int *)((int)piVar19 + 1);
    cVar9 = *(char *)piVar19;
    if (cVar9 == '\0') {
      return (undefined *)0x0;
    }
    if (cVar9 == '%') break;
    iVar14 = (int)cVar9;
    puStack52 = param_5;
    puStack56 = (undefined *)0x1000;
    pcStack58 = (code *)0x1f95;
    uVar26 = (*param_1)();
    in_DX = (int *)((ulong)uVar26 >> 0x10);
    iVar15 = (int)uVar26;
    if (iVar15 < 0) goto LAB_11f4_0460;
    piVar19 = piVar17;
    if ((iVar14 < 0) || (*(char *)(iVar14 + 0x4be) != '\x01')) {
      if (iVar15 != iVar14) {
        puStack52 = param_5;
        pcStack58 = (code *)0x1000;
        uStack60 = 0x1fe7;
        puStack56 = (undefined *)iVar15;
        (*param_2)();
                    // WARNING: Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
        return (undefined *)0x0;
      }
    }
    else {
      while ((-1 < (char)iVar15 && (*(char *)(iVar15 + 0x4be) == '\x01'))) {
        puStack52 = param_5;
        puStack56 = (undefined *)0x1000;
        pcStack58 = (code *)0x1fbe;
        iVar15 = (*param_1)();
        if (iVar15 < 1) goto LAB_11f4_0460;
      }
      puStack52 = param_5;
      pcStack58 = (code *)0x1000;
      uStack60 = 0x1fd1;
      puStack56 = (undefined *)iVar15;
      (*param_2)();
      in_DX = extraout_DX_03;
    }
  }
  piVar19 = piVar19 + 1;
  uVar16 = (uint)*(char *)piVar17;
  if ((int)uVar16 < 0) {
    return (undefined *)0x0;
  }
  bVar10 = *(byte *)(uVar16 + 0x4be);
  puVar12 = (undefined *)(uint)bVar10;
  param_6 = piVar19;
  if ((undefined *)((int)s_Turbo_C___Copyright__c__1988_Bor_126b_0004 + 0x11U) < puVar12) {
LAB_11f4_0460:
    puStack52 = param_5;
    puStack56 = (undefined *)0xffff;
    pcStack58 = (code *)0x1000;
    uStack60 = 0x23ad;
    (*param_2)();
    return (undefined *)0xffff;
  }
  piVar17 = (int *)((int)puVar12 * 2);
  uVar22 = 0x1000;
  puVar13 = &stack0xfffe;
  switch(puVar12) {
  case (undefined *)0x0:
    break;
  case (undefined *)0x1:
    return puVar12;
  case (undefined *)0x2:
    pcVar2 = &stack0xfffe + (int)piVar19;
    *pcVar2 = *pcVar2 + bVar10;
    puVar13 = &stack0xfffe;
    break;
  case (undefined *)0x3:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0x4:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0x5:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0x6:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  default:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0x8:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0xa:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0xc:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0xe:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0xf:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0x10:
    *(undefined2 *)((int)piVar17 + uVar16) = 0x30b4;
  case (undefined *)0x13:
    pcVar5 = (code *)swi(0x21);
    uVar26 = (*pcVar5)();
    uVar22 = s_Turbo_C___Copyright__c__1988_Bor_126b_0004._40_2_;
    iVar14 = DAT_126b_0002;
    uVar23 = (undefined2)((ulong)uVar26 >> 0x10);
    *(undefined2 *)&DAT_126b_007d = (int)uVar26;
    *(undefined2 *)&DAT_126b_007b = uVar21;
    *(undefined2 *)&DAT_126b_0077 = uVar22;
    *(int *)&DAT_126b_0091 = iVar14;
    *(undefined2 *)&DAT_126b_0081 = 0xffff;
    puStack52 = (undefined *)0x2e;
    FUN_1000_012f();
    uVar26 = *(undefined4 *)&DAT_126b_0075;
    uVar21 = (undefined2)((ulong)uVar26 >> 0x10);
    piVar17 = (int *)uVar26;
    uVar16 = 0x7fff;
    piVar20 = piVar17;
    do {
      if (((*piVar20 == 0x3738) && (iVar15 = piVar20[1], (char)iVar15 == '=')) &&
         (piVar1 = (int *)&DAT_126b_0081, *piVar1 = *piVar1 + 1,
         ((byte)((uint)iVar15 >> 8) & 0xdf) == 0x59)) {
        piVar1 = (int *)&DAT_126b_0081;
        *piVar1 = *piVar1 + 1;
      }
      do {
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        piVar1 = piVar20;
        piVar20 = (int *)((int)piVar20 + 1);
      } while ((char)uVar26 != *(char *)piVar1);
      if (uVar16 == 0) goto LAB_1000_01b6;
      piVar17 = (int *)((int)piVar17 + 1);
    } while (*(char *)piVar20 != (char)uVar26);
    *(int *)&DAT_126b_0075 = -(uVar16 | 0x8000);
    piVar17 = (int *)((int)piVar17 * 4 + 0x10U & 0xfff0);
    *(int **)&DAT_126b_0079 = piVar17;
    uVar16 = *(uint *)&DAT_126b_0142;
    in_DX = unaff_SS;
    puVar13 = (undefined *)(iVar14 - (int)unaff_SS);
    break;
  case (undefined *)0x11:
    uVar23 = param_7;
    while( true ) {
      *(char *)piVar17 = (char)puVar12;
      puVar12 = (undefined *)(local_90 + 1);
      _local_90 = (undefined *)((ulong)_local_90 & 0xffff0000 | ZEXT24(puVar12));
      uStack60 = uVar22;
code_r0x0001104c:
      pbVar6 = local_88;
      puVar13 = local_84;
      uVar22 = uStack60;
      if ((puVar12 >= puVar13) &&
         ((puVar12 < puVar13 || (0x7f < (uint)((int)puVar12 - (int)puVar13))))) {
        puVar12 = (undefined *)(local_90 - (int)local_84);
        puStack56 = local_84;
        pcStack58 = param_1;
        uVar22 = 0x1111;
        uStack62 = 0x1086;
        puStack52 = puVar12;
        puVar13 = (undefined *)FUN_1111_0001();
        if (puVar13 != puVar12) {
          return param_3 + (int)(puVar13 + (-(int)puVar12 - local_8c));
        }
        _local_90 = (undefined *)CONCAT22(unaff_SS,local_84);
      }
      if (local_8c == 0) break;
      local_8c = local_8c + -1;
      local_88 = (byte *)((ulong)local_88 & 0xffff0000 | (ulong)((int)local_88 + 1));
      bVar10 = *pbVar6;
      if (bVar10 == 10) {
        *_local_90 = 0xd;
        _local_90 = (undefined *)((ulong)_local_90 & 0xffff0000 | (ulong)(local_90 + 1));
      }
      puVar12 = (undefined *)(uint)bVar10;
      piVar17 = (int *)_local_90;
      uVar23 = (int)((ulong)_local_90 >> 0x10);
    }
    puVar12 = (undefined *)(local_90 - (int)local_84);
    if (puVar12 != (undefined *)0x0) {
      puStack56 = local_84;
      pcStack58 = param_1;
      uStack62 = 0x10e9;
      uStack60 = uVar22;
      puStack52 = puVar12;
      puVar13 = (undefined *)FUN_1111_0001();
      if (puVar13 != puVar12) {
        param_3 = param_3 + ((int)puVar13 - (int)puVar12);
      }
    }
                    // WARNING: Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
    return param_3;
  case (undefined *)0x12:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0x14:
    uStack60 = uVar22;
    goto code_r0x0001104c;
  case (undefined *)0x15:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (uVar16 < 0x200) {
    uVar16 = 0x200;
    *(undefined2 *)&DAT_126b_0142 = 0x200;
  }
  bVar10 = 4;
  puStack52 = (undefined *)((uVar16 >> 4) + 1);
  if (puStack52 <= puVar13) {
    puVar12 = puStack52 + (int)in_DX;
    *(int *)&DAT_126b_0089 = (int)puVar12;
    *(int *)&DAT_126b_008d = (int)puVar12;
    piVar17 = (int *)(puVar12 + -*(int *)&DAT_126b_007b);
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)();
    puVar12 = (undefined *)&DAT_12bf_0014;
    for (iVar14 = 0x80; iVar14 != 0; iVar14 = iVar14 + -1) {
      puVar3 = puVar12;
      puVar12 = puVar12 + 1;
      *puVar3 = 0;
    }
    *(undefined2 *)((unaff_DI << (bVar10 & 0x1f)) + -2) = 0x1000;
    (**(code **)&DAT_126b_053e)();
    FUN_1000_01d1();
    FUN_1000_02cf();
    pcVar5 = (code *)swi(0x1a);
    (*pcVar5)();
    *(undefined2 *)&DAT_126b_0083 = extraout_DX_00;
    *(int *)&DAT_126b_0085 = iVar14;
    (**(code **)&DAT_12bf_0002)();
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
    unaff_SS = extraout_DX;
  }
LAB_1000_01b6:
  do {
    puStack52 = (undefined *)0x1be;
    FUN_1000_01a7();
    puStack52 = (undefined *)0x3;
    puStack56 = (undefined *)0x1c7;
    cVar9 = FUN_1000_010d();
    pcVar2 = (char *)((int)piVar17 + (int)piVar19);
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = (char *)((int)piVar17 + (int)piVar19);
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = (char *)((int)piVar17 + (int)piVar19);
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = (char *)((int)piVar17 + (int)piVar19);
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = (char *)((int)piVar17 + (int)piVar19);
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
    piVar19 = (int *)(iRam00000075 + 2);
    uVar16 = 1;
    uVar23 = uRam0000007b;
    uRam000101cb = unaff_ES;
    if (2 < bRam0000007d) {
      uVar16 = 0x7f;
      piVar20 = piVar19;
      do {
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        piVar1 = piVar20;
        piVar20 = (int *)((int)piVar20 + 1);
      } while (*(char *)piVar1 != '\0');
      if (uVar16 == 0) goto LAB_1000_01b6;
      uVar16 = uVar16 ^ 0x7f;
      uVar23 = uRam00000077;
    }
    puVar12 = (undefined *)(uVar11 + 2 + uVar16 & 0xfffe);
    iVar14 = -(int)puVar12;
    piVar20 = (int *)(&stack0xffce + iVar14);
    if (puVar12 <= &stack0xffce) {
      *(uint *)((int)&puStack52 + iVar14) = uVar16;
      piVar17 = piVar20;
      while (uVar16 - 1 != 0) {
        piVar4 = piVar17;
        piVar17 = (int *)((int)piVar17 + 1);
        piVar1 = piVar19;
        piVar19 = (int *)((int)piVar19 + 1);
        *(char *)piVar4 = *(char *)piVar1;
        uVar16 = uVar16 - 1;
      }
      bVar24 = false;
      *(char *)piVar17 = '\0';
      uVar25 = uVar16 == 0;
LAB_1000_0243:
      *(undefined2 *)(&stack0xffca + iVar14) = 0x246;
      bVar10 = FUN_1000_025f();
      iVar15 = extraout_DX_01;
      if (bVar24 || (bool)uVar25) {
        do {
          if (bVar24) {
            iVar15 = *(int *)((int)&puStack52 + iVar14) + iVar15;
            piVar17 = (int *)((uVar16 + 1) * 4);
            ppiVar18 = (int **)(piVar20 + (uVar16 + 1) * -2);
            piVar19 = piVar20;
            uRam0000006b = uVar16;
            ppiVar7 = ppiVar18;
            piVar8 = unaff_SS;
            if (piVar20 < piVar17) goto LAB_1000_01b6;
            goto LAB_1000_02af;
          }
          *(undefined2 *)(&stack0xffca + iVar14) = 0x24d;
          bVar10 = FUN_1000_025f();
          iVar15 = extraout_DX_02;
        } while (!bVar24 && !(bool)uVar25);
      }
      if ((bVar10 != 0x20) && (bVar10 != 0xd)) break;
      goto LAB_1000_025b;
    }
  } while( true );
  bVar24 = bVar10 < 9;
  uVar25 = bVar10 == 9;
  if ((bool)uVar25) {
LAB_1000_025b:
    bVar24 = false;
    uVar25 = true;
  }
  goto LAB_1000_0243;
  while( true ) {
    *ppiVar18 = piVar20;
    ppiVar18[1] = unaff_SS;
    ppiVar18 = ppiVar18 + 2;
    do {
      piVar1 = piVar20;
      piVar20 = (int *)((int)piVar20 + 1);
      bVar24 = *(char *)piVar1 != '\0';
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0 && bVar24);
    ppiVar7 = ppiRam0000006d;
    piVar8 = piRam0000006f;
    if (bVar24) break;
LAB_1000_02af:
    piRam0000006f = piVar8;
    ppiRam0000006d = ppiVar7;
    if (iVar15 == 0) break;
  }
  *ppiVar18 = (int *)0x0;
  ppiVar18[1] = (int *)0x0;
                    // WARNING: Treating indirect jump as call
  puVar12 = (undefined *)(*(code *)0x0)();
  return puVar12;
}



void __cdecl16near FUN_1245_0003(void)

{
  return;
}



undefined4
FUN_1245_0031(undefined2 param_1_00,code *param_1,undefined2 param_3_00,code *param_2,
             undefined2 param_5_00,undefined2 param_3,undefined2 param_4,uint param_5,int param_6,
             int *param_7,undefined2 *param_8)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  undefined uVar15;
  bool bVar16;
  char local_7;
  int local_6;
  undefined2 local_4;
  
  local_7 = '\0';
  local_6 = 0;
  local_4 = 1;
  iVar1 = local_6;
  do {
    local_6 = iVar1;
    iVar1 = local_6 + 1;
    uVar7 = (*param_1)(0x1000,param_3,param_4);
    if ((int)uVar7 < 0) goto LAB_1245_00cb;
    cVar5 = (char)uVar7;
    uVar7 = (uint)cVar5;
  } while (((uVar7 & 0x80) == 0) && ((*(byte *)(uVar7 + 0x155) & 1) != 0));
  iVar2 = param_6 + -1;
  iVar4 = iVar2;
  if (param_6 < 1) {
LAB_1245_00d2:
    local_6 = iVar1;
    param_6 = iVar4;
    local_4 = 0;
  }
  else {
    if (cVar5 != '+') {
      if (cVar5 == '-') {
        local_7 = '\x01';
        goto LAB_1245_007a;
      }
LAB_1245_0091:
      local_6 = iVar1;
      param_6 = iVar2;
      uVar13 = 0;
      uVar14 = 0;
      bVar6 = (byte)uVar7;
      iVar1 = local_6;
      if (param_5 == 0) {
        param_5 = 10;
        if (bVar6 != 0x30) {
LAB_1245_0120:
          uVar15 = bVar6 < 0x30;
          FUN_1245_0003();
          uVar13 = uVar7;
          iVar4 = param_6;
          if (!(bool)uVar15) goto LAB_1245_0137;
          goto LAB_1245_00d2;
        }
        if (0 < param_6) {
          local_6 = local_6 + 1;
          param_6 = param_6 + -1;
          uVar7 = (*param_1)(0x1000,param_3,param_4);
          param_5 = 8;
          bVar6 = (byte)uVar7;
          uVar15 = bVar6 < 0x78;
          if ((bVar6 == 0x78) || (uVar15 = bVar6 < 0x58, bVar6 == 0x58)) {
            param_5 = 0x10;
            goto LAB_1245_0137;
          }
LAB_1245_014a:
          while (FUN_1245_0003(), !(bool)uVar15) {
            uVar10 = (uint)((ulong)uVar13 * (ulong)param_5 >> 0x10);
            uVar8 = (uint)((ulong)uVar13 * (ulong)param_5);
            uVar13 = uVar7 + uVar8;
            uVar7 = (uint)CARRY2(uVar7,uVar8);
            uVar8 = uVar14 + uVar10;
            uVar15 = CARRY2(uVar14,uVar10) || CARRY2(uVar8,uVar7);
            uVar14 = uVar8 + uVar7;
            if (uVar14 != 0) goto LAB_1245_0167;
LAB_1245_0137:
            if (param_6 < 1) goto LAB_1245_0194;
            local_6 = local_6 + 1;
            param_6 = param_6 + -1;
            uVar7 = (*param_1)(0x1000,param_3,param_4);
          }
LAB_1245_0184:
          (*param_2)(0x1000,uVar7,param_3,param_4);
          local_6 = local_6 + -1;
        }
      }
      else {
        iVar4 = param_6;
        if ((0x24 < param_5) || (bVar9 = (byte)param_5, bVar9 < 2)) goto LAB_1245_00d2;
        if (bVar6 != 0x30) goto LAB_1245_0120;
        uVar15 = bVar9 < 0x10;
        if (bVar9 != 0x10) goto LAB_1245_0137;
        if (0 < param_6) {
          local_6 = local_6 + 1;
          param_6 = param_6 + -1;
          uVar7 = (*param_1)(0x1000,param_3,param_4);
          bVar6 = (byte)uVar7;
          uVar15 = bVar6 < 0x78;
          if (bVar6 == 0x78) goto LAB_1245_0137;
          uVar15 = bVar6 < 0x58;
          if (bVar6 == 0x58) goto LAB_1245_0137;
          goto LAB_1245_014a;
        }
      }
LAB_1245_0194:
      if (local_7 != '\0') {
        bVar16 = uVar13 != 0;
        uVar13 = -uVar13;
        uVar14 = -(uint)bVar16 - uVar14;
      }
      goto LAB_1245_01a4;
    }
LAB_1245_007a:
    param_6 = param_6 + -2;
    iVar4 = param_6;
    if (iVar2 < 1) goto LAB_1245_00d2;
    uVar7 = (*param_1)(0x1000,param_3,param_4);
    iVar2 = param_6;
    iVar1 = local_6 + 2;
    if (-1 < (int)uVar7) goto LAB_1245_0091;
LAB_1245_00cb:
    local_6 = iVar1;
    local_4 = 0xffff;
  }
  (*param_2)(0x1000,uVar7,param_3,param_4);
  local_6 = local_6 + -1;
  uVar13 = 0;
  uVar14 = 0;
LAB_1245_01a4:
  *param_7 = *param_7 + local_6;
  *param_8 = local_4;
  return CONCAT22(uVar14,uVar13);
  while( true ) {
    local_6 = local_6 + 1;
    param_6 = param_6 + -1;
    uVar7 = (*param_1)(0x1000,param_3,param_4);
    uVar8 = param_5;
    FUN_1245_0003();
    if ((bool)uVar15) goto LAB_1245_0184;
    uVar11 = (uint)((ulong)uVar13 * (ulong)uVar8 >> 0x10);
    uVar10 = (uint)((ulong)uVar13 * (ulong)uVar8);
    lVar3 = (ulong)uVar14 * (ulong)uVar8;
    uVar13 = uVar7 + uVar10;
    uVar7 = (uint)CARRY2(uVar7,uVar10);
    uVar14 = (uint)lVar3 + uVar11;
    bVar16 = CARRY2((uint)lVar3,uVar11) || CARRY2(uVar14,uVar7);
    uVar14 = uVar14 + uVar7;
    bVar9 = (byte)((ulong)lVar3 >> 0x10);
    bVar12 = (byte)((ulong)lVar3 >> 0x18);
    bVar6 = bVar9 + bVar12;
    uVar15 = CARRY1(bVar9,bVar12) || CARRY1(bVar6,bVar16);
    if ((byte)(bVar6 + bVar16) != '\0') break;
LAB_1245_0167:
    if (param_6 < 1) goto LAB_1245_0194;
  }
  uVar13 = CONCAT11((local_7 != '\0') + -1,local_7 + -1);
  uVar14 = (local_7 != '\0') + 0x7fff;
  local_4 = 2;
  goto LAB_1245_01a4;
}



void FUN_1262_0005(undefined2 param_1_00,undefined2 param_1)

{
  FUN_1115_000d(0x1000,param_1,0,0,1);
  return;
}


