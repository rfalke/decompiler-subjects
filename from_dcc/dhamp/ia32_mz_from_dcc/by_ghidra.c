typedef unsigned char   undefined;

typedef unsigned int    uint;
typedef unsigned char    undefined1;
typedef unsigned int    undefined2;
typedef unsigned long    undefined4;



// WARNING: Stack frame is not setup normally: Input value of stackpointer is not used
// WARNING: This function may have set the stack pointer

uint entry(void)

{
  int *piVar1;
  char *pcVar2;
  undefined *puVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined *puVar10;
  int *piVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  int unaff_SI;
  int *piVar20;
  int *piVar21;
  undefined *puVar22;
  int iVar23;
  undefined2 unaff_ES;
  undefined2 uVar24;
  undefined2 uVar25;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  longdouble lVar26;
  undefined4 uVar27;
  
  uVar25 = 0x623;
  puVar10 = (undefined *)((int)s__square____ld_15b6_00e1 + 5);
                    // WARNING: Read-only address (ram,0x000101c7) is written
  uRam000101c7 = 0x15b6;
  pcVar4 = (code *)swi(0x21);
  uVar27 = (*pcVar4)();
  uVar24 = s_Turbo_C___Copyright__c__1988_Bor_15b6_0004._40_2_;
  puVar19 = DAT_15b6_0002;
  uVar9 = (undefined2)((ulong)uVar27 >> 0x10);
  *(undefined2 *)&DAT_15b6_007d = (int)uVar27;
  *(undefined2 *)&DAT_15b6_007b = unaff_ES;
  *(undefined2 *)&DAT_15b6_0077 = uVar24;
  *(int *)&DAT_15b6_0091 = (int)puVar19;
  *(undefined2 *)&DAT_15b6_0081 = 0xffff;
  *(undefined2 *)(puVar10 + -2) = 0x2e;
  FUN_1000_012f();
  uVar27 = *(undefined4 *)&DAT_15b6_0075;
  uVar24 = (undefined2)((ulong)uVar27 >> 0x10);
  piVar20 = (int *)uVar27;
  uVar7 = 0x7fff;
  piVar21 = piVar20;
  do {
    if (((*piVar21 == 0x3738) && (iVar8 = piVar21[1], (char)iVar8 == '=')) &&
       (piVar1 = (int *)&DAT_15b6_0081, *piVar1 = *piVar1 + 1,
       ((byte)((uint)iVar8 >> 8) & 0xdf) == 0x59)) {
      piVar1 = (int *)&DAT_15b6_0081;
      *piVar1 = *piVar1 + 1;
    }
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      piVar1 = piVar21;
      piVar21 = (int *)((int)piVar21 + 1);
    } while ((char)uVar27 != *(char *)piVar1);
    if (uVar7 == 0) goto LAB_1000_01b6;
    piVar20 = (int *)((int)piVar20 + 1);
  } while (*(char *)piVar21 != (char)uVar27);
  *(int *)&DAT_15b6_0075 = -(uVar7 | 0x8000);
  piVar20 = (int *)((int)piVar20 * 4 + 0x10U & 0xfff0);
  *(int **)&DAT_15b6_0079 = piVar20;
  puVar19 = puVar19 + -0x623;
  uVar7 = *(uint *)&DAT_15b6_0376;
  if (uVar7 < 0x200) {
    uVar7 = 0x200;
    *(undefined2 *)&DAT_15b6_0376 = 0x200;
  }
  bVar6 = 4;
  puVar22 = (undefined *)((uVar7 >> 4) + 1);
  if (puVar22 <= puVar19) {
    iVar8 = (uVar7 >> 4) + 0x624;
    *(int *)&DAT_15b6_0089 = iVar8;
    *(int *)&DAT_15b6_008d = iVar8;
    piVar20 = (int *)(iVar8 - *(int *)&DAT_15b6_007b);
    piVar11 = (int *)(puVar10 + -2);
    *(undefined **)(puVar10 + -2) = puVar22;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    iVar23 = *piVar11 << (bVar6 & 0x1f);
    puVar19 = (undefined *)&DAT_1616_0018;
    for (iVar8 = 0xaa; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar3 = puVar19;
      puVar19 = puVar19 + 1;
      *puVar3 = 0;
    }
    *(undefined2 *)(iVar23 + -2) = 0x1000;
    puVar12 = (undefined *)(iVar23 + -4);
    *(undefined2 *)(iVar23 + -4) = 0xd3;
    (**(code **)&DAT_15b6_05fe)();
    *(undefined2 *)(puVar12 + -2) = 0x1000;
    puVar13 = puVar12 + -4;
    *(undefined2 *)(puVar12 + -4) = 0xd8;
    FUN_1000_05cf();
    *(undefined2 *)(puVar13 + -2) = 0x1000;
    puVar14 = puVar13 + -4;
    *(undefined2 *)(puVar13 + -4) = 0xdd;
    FUN_1000_06cd();
    pcVar4 = (code *)swi(0x1a);
    (*pcVar4)();
    *(undefined2 *)&DAT_15b6_0083 = extraout_DX_00;
    *(int *)&DAT_15b6_0085 = iVar8;
    *(undefined2 *)(puVar14 + -2) = 0x1000;
    puVar15 = puVar14 + -4;
    *(undefined2 *)(puVar14 + -4) = 0xee;
    (**(code **)&DAT_1616_0002)();
    *(undefined2 *)(puVar15 + -2) = *(undefined2 *)&DAT_15b6_0073;
    *(undefined2 *)(puVar15 + -4) = *(undefined2 *)&DAT_15b6_0071;
    *(undefined2 *)(puVar15 + -6) = *(undefined2 *)&DAT_15b6_006f;
    *(undefined2 *)(puVar15 + -8) = *(undefined2 *)&DAT_15b6_006d;
    *(undefined2 *)(puVar15 + -10) = *(undefined2 *)&DAT_15b6_006b;
    *(undefined2 *)(puVar15 + -0xc) = 0x1000;
    *(undefined2 *)(puVar15 + -0xe) = 0x107;
    uVar24 = FUN_107b_0004();
    *(undefined2 *)(puVar15 + -0xe) = uVar24;
    *(undefined2 *)(puVar15 + -0x10) = 0x107b;
    puVar16 = puVar15 + -0x12;
    *(undefined2 *)(puVar15 + -0x12) = 0x10d;
    FUN_13ca_0002();
    *(undefined2 *)(puVar16 + -2) = 0x1000;
    puVar17 = puVar16 + -4;
    *(undefined2 *)(puVar16 + -4) = 0x117;
    FUN_1000_0172();
    *(undefined2 *)(puVar17 + -2) = 0x1000;
    puVar19 = puVar17 + -4;
    *(undefined2 *)(puVar17 + -4) = 0x11c;
    (*pcRam00000600)();
    pcVar4 = (code *)swi(0x21);
    puVar10 = puVar19;
    (*pcVar4)();
    uVar25 = extraout_DX;
  }
LAB_1000_01b6:
  *(undefined2 *)(puVar10 + -2) = 0x1be;
  FUN_1000_01a7();
  *(undefined2 *)(puVar10 + -2) = 3;
  *(undefined2 *)(puVar10 + -4) = 0x1000;
  puVar18 = puVar10 + -6;
  *(undefined2 *)(puVar10 + -6) = 0x1c7;
  cVar5 = FUN_1000_010d();
  pcVar2 = (char *)((int)piVar20 + unaff_SI);
  *pcVar2 = *pcVar2 + cVar5;
  *(undefined **)(puVar18 + -2) = puVar19;
  *(undefined **)(puVar18 + -6) = puVar18 + -4;
  if (*(undefined **)(puVar18 + -6) == puVar18 + -4) {
    pcVar4 = (code *)swi(0x11);
    uVar7 = (*pcVar4)();
    uVar7 = uVar7 & 2;
    if (uVar7 != 0) {
      out(0xf0,0);
      lVar26 = (longdouble)1 / (longdouble)0;
      *(uint *)(puVar18 + -4) = (uint)(-lVar26 < lVar26) << 8 | (uint)(-lVar26 == lVar26) << 0xe;
      if ((*(uint *)(puVar18 + -4) & 0x4000) == 0) {
        uVar7 = 3;
      }
      else {
        uVar7 = 2;
      }
    }
  }
  else {
    out(0xf0,0);
    *(undefined2 *)(puVar18 + -4) = 0;
    *(undefined2 *)(puVar18 + -4) = in_FPUControlWord;
    iVar8 = 0x14;
    do {
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    uVar7 = 0;
    if ((*(uint *)(puVar18 + -4) & 0xf3f) == 0x33f) {
      *(undefined2 *)(puVar18 + -4) = 0xffff;
      *(undefined2 *)(puVar18 + -4) = in_FPUStatusWord;
      iVar8 = 0x14;
      do {
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      if ((*(uint *)(puVar18 + -4) & 0xb8bf) == 0) {
        uVar7 = 1;
      }
    }
  }
  return uVar7;
}



// WARNING: Removing unreachable block (ram,0x00010208)
// WARNING: Removing unreachable block (ram,0x00010219)
// WARNING: Removing unreachable block (ram,0x0001021b)
// WARNING: Removing unreachable block (ram,0x00010229)
// WARNING: Removing unreachable block (ram,0x00010234)
// WARNING: Removing unreachable block (ram,0x00010236)
// WARNING: Removing unreachable block (ram,0x0001023d)

uint FUN_1000_010d(void)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int in_BX;
  int unaff_SI;
  
  FUN_1000_0172();
  (*pcRam00000600)();
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  FUN_1000_01a7();
  cVar3 = FUN_1000_010d();
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar2 = (code *)swi(0x11);
  uVar4 = (*pcVar2)();
  uVar4 = uVar4 & 2;
  if (uVar4 != 0) {
    out(0xf0,0);
    if (-((longdouble)1 / (longdouble)0) == (longdouble)1 / (longdouble)0) {
      uVar4 = 2;
    }
    else {
      uVar4 = 3;
    }
  }
  return uVar4;
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
  DAT_15b6_005d = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_15b6_005f = in_BX;
  DAT_15b6_0061 = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_15b6_0063 = in_BX;
  DAT_15b6_0065 = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_15b6_0067 = in_BX;
  DAT_15b6_0069 = unaff_ES;
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



// WARNING: Removing unreachable block (ram,0x00010208)
// WARNING: Removing unreachable block (ram,0x00010219)
// WARNING: Removing unreachable block (ram,0x0001021b)
// WARNING: Removing unreachable block (ram,0x00010229)
// WARNING: Removing unreachable block (ram,0x00010234)
// WARNING: Removing unreachable block (ram,0x00010236)
// WARNING: Removing unreachable block (ram,0x0001023d)

uint __cdecl16near FUN_1000_01c9(void)

{
  code *pcVar1;
  uint uVar2;
  
  pcVar1 = (code *)swi(0x11);
  uVar2 = (*pcVar1)();
  uVar2 = uVar2 & 2;
  if (uVar2 != 0) {
    out(0xf0,0);
    if (-((longdouble)1 / (longdouble)0) == (longdouble)1 / (longdouble)0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 3;
    }
  }
  return uVar2;
}



// WARNING: Control flow encountered bad instruction data

void FUN_1000_0283(void)

{
  undefined2 uVar1;
  code *pcVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 in_BX;
  undefined2 uVar6;
  undefined2 *puVar7;
  undefined2 unaff_ES;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  
  FUN_1000_059f(0x1000);
  iVar5 = 0xb;
  puVar3 = (undefined2 *)((int)s_Divide_by_0_15b6_023a + 10);
  do {
    puVar7 = puVar3;
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    *puVar7 = in_BX;
    puVar7[1] = unaff_ES;
    iVar5 = iVar5 + -1;
    puVar3 = puVar7 + 2;
  } while (iVar5 != 0);
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  puVar7[2] = in_BX;
  puVar7[3] = unaff_ES;
  if (DAT_15b6_0081 == -1) {
    DAT_15b6_0081 = FUN_1000_01c9();
  }
  uVar6 = 0x15b6;
  uVar9 = 0x2ea;
  uVar10 = 0x1334;
  uVar8 = 0x1334;
  if (DAT_15b6_0081 == 0) {
    uVar9 = 0x20e0;
    uVar10 = 0x10d1;
    uVar8 = 0x10d1;
  }
  do {
    iVar5 = 10;
    do {
      pcVar2 = (code *)swi(0x21);
      (*pcVar2)(uVar8,uVar9,uVar10);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    if (((*(int *)&DAT_15b6_0081 != 0) &&
        (uVar1 = *(undefined2 *)&DAT_15b6_007d,
        iVar4 = CONCAT11((char)uVar1,(char)((uint)uVar1 >> 8)), 0x30f < iVar4)) && (iVar4 < 0xa00))
    {
      uVar8 = 0x1000;
      pcVar2 = (code *)swi(0x21);
      (*pcVar2)();
    }
    pcVar2 = (code *)swi(0x37);
    (*pcVar2)();
  } while (iVar5 == 0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1000_02bd(void)

{
  undefined2 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  uVar5 = 0x15b6;
  uVar7 = 0x2ea;
  uVar8 = 0x1334;
  uVar6 = 0x1334;
  if (DAT_15b6_0081 == 0) {
    uVar7 = 0x20e0;
    uVar8 = 0x10d1;
    uVar6 = 0x10d1;
  }
  do {
    iVar4 = 10;
    do {
      pcVar2 = (code *)swi(0x21);
      (*pcVar2)(uVar6,uVar7,uVar8);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    if (((*(int *)&DAT_15b6_0081 != 0) &&
        (uVar1 = *(undefined2 *)&DAT_15b6_007d,
        iVar3 = CONCAT11((char)uVar1,(char)((uint)uVar1 >> 8)), 0x30f < iVar3)) && (iVar3 < 0xa00))
    {
      uVar6 = 0x1000;
      pcVar2 = (code *)swi(0x21);
      (*pcVar2)();
    }
    pcVar2 = (code *)swi(0x37);
    (*pcVar2)();
  } while (iVar4 == 0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_1000_0343(void)

{
  code *pcVar1;
  int iVar2;
  
  FUN_1000_05ba(0x1000);
  iVar2 = 0xb;
  do {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



void FUN_1000_059f(void)

{
  code *pcVar1;
  undefined2 in_BX;
  undefined2 unaff_ES;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  DAT_15b6_01f2 = 0x1000;
  pcVar1 = (code *)swi(0x21);
  DAT_15b6_0184._0_2_ = in_BX;
  DAT_15b6_0184._2_2_ = unaff_ES;
  (*pcVar1)();
  return;
}



void FUN_1000_05ba(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// WARNING: Removing unreachable block (ram,0x00010208)
// WARNING: Removing unreachable block (ram,0x00010219)
// WARNING: Removing unreachable block (ram,0x0001021b)
// WARNING: Removing unreachable block (ram,0x00010229)
// WARNING: Removing unreachable block (ram,0x00010234)
// WARNING: Removing unreachable block (ram,0x00010236)
// WARNING: Removing unreachable block (ram,0x0001023d)

uint FUN_1000_05cf(undefined2 param_1)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int extraout_DX;
  int extraout_DX_00;
  char **ppcVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  char *pcVar14;
  undefined2 uVar15;
  char *unaff_SS;
  bool bVar16;
  undefined uVar17;
  uint in_stack_00000000;
  
  DAT_1000_05c9 = param_1;
  DAT_1000_05cb = 0x15b6;
  uVar8 = (uint)*(byte *)((int)&DAT_15b6_007f + 1);
  puVar6 = (undefined *)(uVar8 + 1);
  puVar12 = (undefined2 *)(DAT_15b6_0075 + 2);
  uVar9 = 1;
  uVar15 = DAT_15b6_007b;
  DAT_1000_05c7 = in_stack_00000000;
  if (2 < (byte)DAT_15b6_007d) {
    uVar9 = 0x7f;
    pcVar14 = (char *)puVar12;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar1 = pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (*pcVar1 != '\0');
    if (uVar9 == 0) goto LAB_1000_01af;
    uVar9 = uVar9 ^ 0x7f;
    uVar15 = DAT_15b6_0077;
  }
  puVar7 = (undefined *)(uVar8 + 2 + uVar9 & 0xfffe);
  pcVar14 = (char *)((int)&param_1 - (int)puVar7);
  uVar8 = uVar9;
  if (puVar7 <= &param_1) {
    while (uVar8 - 1 != 0) {
      pcVar2 = pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar1 = (char *)puVar12;
      puVar12 = (undefined2 *)((int)puVar12 + 1);
      *pcVar2 = *pcVar1;
      uVar8 = uVar8 - 1;
    }
    bVar16 = false;
    *pcVar14 = '\0';
    uVar17 = uVar8 == 0;
LAB_1000_0641:
    bVar5 = FUN_1000_065d();
    iVar10 = extraout_DX;
    if (bVar16 || (bool)uVar17) {
      do {
        uVar15 = DAT_1000_05cb;
        if (bVar16) {
          puVar12 = &param_1;
          puVar13 = &param_1;
          iVar10 = uVar9 + iVar10;
          *(uint *)&DAT_15b6_006b = uVar8;
          puVar6 = (undefined *)((uVar8 + 1) * 4);
          ppcVar11 = (char **)(&param_1 + (uVar8 + 1) * -2);
          if (&param_1 < puVar6) goto LAB_1000_01af;
          *(int **)&DAT_15b6_006d = (int *)ppcVar11;
          *(char **)&DAT_15b6_006f = unaff_SS;
          goto LAB_1000_06ad;
        }
        bVar5 = FUN_1000_065d();
        iVar10 = extraout_DX_00;
      } while (!bVar16 && !(bool)uVar17);
    }
    if ((bVar5 != 0x20) && (bVar5 != 0xd)) goto code_r0x00010655;
    goto LAB_1000_0659;
  }
LAB_1000_01af:
  FUN_1000_01a7();
  cVar4 = FUN_1000_010d();
  pcVar1 = puVar6 + (int)puVar12;
  *pcVar1 = *pcVar1 + cVar4;
  pcVar3 = (code *)swi(0x11);
  uVar8 = (*pcVar3)();
  uVar8 = uVar8 & 2;
  if (uVar8 != 0) {
    out(0xf0,0);
    if (-((longdouble)1 / (longdouble)0) == (longdouble)1 / (longdouble)0) {
      uVar8 = 2;
    }
    else {
      uVar8 = 3;
    }
  }
  return uVar8;
code_r0x00010655:
  bVar16 = bVar5 < 9;
  uVar17 = bVar5 == 9;
  if ((bool)uVar17) {
LAB_1000_0659:
    bVar16 = false;
    uVar17 = true;
  }
  goto LAB_1000_0641;
  while( true ) {
    *ppcVar11 = (char *)puVar13;
    ppcVar11[1] = unaff_SS;
    ppcVar11 = ppcVar11 + 2;
    do {
      pcVar1 = (char *)puVar13;
      puVar13 = (undefined2 *)((int)puVar13 + 1);
      bVar16 = *pcVar1 != '\0';
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0 && bVar16);
    if (bVar16) break;
LAB_1000_06ad:
    if (iVar10 == 0) break;
  }
  *ppcVar11 = (char *)0x0;
  ppcVar11[1] = (char *)0x0;
                    // WARNING: Could not recover jumptable at 0x000106c8. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar8 = (*(code *)(ulong)DAT_1000_05c7)();
  return uVar8;
}



int __cdecl16near FUN_1000_065d(void)

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



// WARNING: Removing unreachable block (ram,0x00010208)
// WARNING: Removing unreachable block (ram,0x00010219)
// WARNING: Removing unreachable block (ram,0x0001021b)
// WARNING: Removing unreachable block (ram,0x00010229)
// WARNING: Removing unreachable block (ram,0x00010234)
// WARNING: Removing unreachable block (ram,0x00010236)
// WARNING: Removing unreachable block (ram,0x0001023d)

uint FUN_1000_06cd(void)

{
  char *pcVar1;
  code *pcVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  char **ppcVar8;
  int unaff_SI;
  char *pcVar9;
  long lVar10;
  
  pcVar3 = DAT_15b6_0077;
  pcVar9 = (char *)0x0;
  lVar10 = FUN_13d0_0004();
  uVar7 = (undefined2)((ulong)lVar10 >> 0x10);
  DAT_15b6_0071 = (undefined2)lVar10;
  if (lVar10 == 0) {
    FUN_1000_01a7();
    DAT_15b6_0073 = (undefined2)((ulong)lVar10 >> 0x10);
    cVar4 = FUN_1000_010d();
    DAT_15b6_0073 = (undefined2)((ulong)lVar10 >> 0x10);
    pcVar1 = (char *)((int)lVar10 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar4;
    pcVar2 = (code *)swi(0x11);
    uVar5 = (*pcVar2)();
    uVar5 = uVar5 & 2;
    if (uVar5 != 0) {
      out(0xf0,0);
      if (-((longdouble)1 / (longdouble)0) == (longdouble)1 / (longdouble)0) {
        uVar5 = 2;
      }
      else {
        uVar5 = 3;
      }
    }
    return uVar5;
  }
  iVar6 = -1;
  do {
    DAT_15b6_0073 = (undefined2)((ulong)lVar10 >> 0x10);
    ppcVar8 = (char **)lVar10;
    *ppcVar8 = pcVar9;
    ppcVar8[1] = pcVar3;
    lVar10 = CONCAT22(DAT_15b6_0073,ppcVar8 + 2);
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar1 = pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (*pcVar1 != '\0');
    if (*pcVar9 == '\0') {
      ppcVar8[2] = (char *)0x0;
      ppcVar8[3] = (char *)0x0;
      return 0;
    }
  } while( true );
}



ulong FUN_1000_0711(void)

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



uint FUN_1000_076c(void)

{
  uint in_AX;
  
  return in_AX & 0xf;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00013860) overlaps instruction at (ram,0x0001385f)
// 

uint __cdecl16near FUN_107b_0004(void)

{
  uint *puVar1;
  char *pcVar2;
  code *pcVar3;
  int iVar4;
  undefined uVar5;
  uint uVar6;
  uint uVar7;
  undefined extraout_AH;
  uint uVar8;
  uint in_CX;
  uint uVar9;
  int extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 *unaff_BP;
  undefined2 *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  int unaff_DI;
  int iVar13;
  undefined2 unaff_SS;
  char cVar14;
  uint uStack228;
  uint uStack226;
  uint uStack224;
  uint uStack222;
  int iStack220;
  int iStack218;
  
  puVar10 = (undefined2 *)&stack0xfffe;
  puVar11 = (undefined2 *)&stack0xfffe;
  uVar12 = 0;
  iStack218 = 7;
  iStack220 = 0x15b6;
  uStack222 = 0x98;
  uStack224 = 0x1000;
  uStack226 = 0x7cc;
  FUN_14fe_0002();
  while( true ) {
    if (5 < (int)uVar12) {
      iStack218 = 7;
      iStack220 = 0x15b6;
      uStack222 = 0x11c;
      uStack224 = 0x14fe;
      uStack226 = 0x96c;
      uVar12 = FUN_14fe_0002();
      return uVar12;
    }
    if (uVar12 < 6) break;
    uVar12 = uVar12 + 1;
  }
  switch(uVar12) {
  case 0:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 1:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 2:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 3:
    pcVar3 = (code *)swi(0x35);
    (*pcVar3)();
    uVar12 = FUN_10d1_1416();
    uVar7 = uVar12 >> 2;
    if ((uVar12 >> 1 & 1) == 0) {
      if (uVar7 != 0) {
        uVar12 = uVar12 >> 3;
        if ((uVar7 & 1) != 0) {
          pcVar3 = (code *)swi(0x38);
          uVar12 = (*pcVar3)();
        }
        uVar7 = uVar12 >> 1;
        if ((uVar12 & 1) != 0) {
          pcVar3 = (code *)swi(0x37);
          uVar7 = (*pcVar3)();
        }
        uVar12 = uVar7 >> 1;
        if ((uVar7 & 1) != 0) {
          pcVar3 = (code *)swi(0x37);
          (*pcVar3)();
          pcVar3 = (code *)swi(0x3a);
          puVar10 = unaff_BP;
          uVar12 = (*pcVar3)();
        }
        cVar14 = '\0';
        uVar7 = uVar12 >> 1;
        if ((uVar12 & 1) != 0) {
          pcVar3 = (code *)swi(0x37);
          uVar7 = (*pcVar3)();
          pcVar3 = (code *)swi(4);
          if (cVar14 == '\x01') {
            uVar7 = (*pcVar3)();
          }
          in_CX = in_CX & 0xff00 | (uint)(byte)((char)in_CX + (char)(in_CX >> 8));
        }
        uVar12 = uVar7 >> 1;
        if ((uVar7 & 1) != 0) {
          pcVar3 = (code *)swi(0x37);
          (*pcVar3)();
          pcVar3 = (code *)swi(0x3a);
          uVar12 = (*pcVar3)();
          puVar10 = (undefined2 *)*puVar10;
        }
        uVar7 = uVar12 >> 1;
        if ((uVar12 & 1) != 0) {
          pcVar3 = (code *)swi(0x37);
          uVar7 = (*pcVar3)();
          if (in_CX == 1) {
            pcVar3 = (code *)swi(0x3a);
            uVar7 = (*pcVar3)();
          }
          puVar10 = (undefined2 *)*puVar10;
        }
        uVar12 = uVar7 >> 1;
        if ((uVar7 & 1) != 0) {
          pcVar3 = (code *)swi(0x37);
          (*pcVar3)();
          uVar5 = in(extraout_DX_00);
          uVar12 = CONCAT11(extraout_AH,uVar5);
        }
        uVar8 = uVar12 >> 1;
        if ((uVar12 & 1) != 0) {
          pcVar3 = (code *)swi(0x37);
          uVar8 = (*pcVar3)();
        }
        uVar7 = uVar8 >> 1;
        puVar11 = puVar10;
        if ((uVar8 & 1) != 0) {
          pcVar3 = (code *)swi(0x37);
          cVar14 = (*pcVar3)();
          pcVar2 = (char *)((int)puVar10 + unaff_DI);
          *pcVar2 = *pcVar2 + cVar14;
          pcVar3 = (code *)swi(0x3a);
          uVar7 = (*pcVar3)();
          puVar11 = (undefined2 *)*puVar10;
        }
      }
    }
    else {
      pcVar3 = (code *)swi(0x34);
      uVar7 = (*pcVar3)();
      puVar11 = (undefined2 *)&stack0xfffe;
    }
    if ((*(byte *)((int)puVar11 + 7) & 0x80) != 0) {
      pcVar3 = (code *)swi(0x34);
      uVar7 = (*pcVar3)();
    }
    return uVar7;
  case 4:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 5:
    puVar1 = (uint *)(uVar12 * 3);
    uVar7 = *puVar1;
    *puVar1 = *puVar1 << 1 | (uint)((int)uVar7 < 0);
    iVar13 = 0;
    uVar7 = extraout_DX + (uint)((int)uVar7 < 0);
    uVar8 = uVar12 * 2;
  }
  do {
    uVar9 = in_CX;
    uVar6 = uVar12;
    if (uVar7 != 0) goto joined_r0x00012640;
    iVar13 = iVar13 + -0x10;
    uVar12 = uVar7;
    in_CX = uVar8;
    uVar7 = uVar9;
    uVar8 = uVar6;
  } while (-0x40 < iVar13);
  s__lresult____ld_15b6_00d2._6_2_ = s__lresult____ld_15b6_00d2._6_2_ + -0xc;
  iStack218 = 0x263e;
  FUN_10d1_0084();
LAB_10d1_195d:
  iVar4 = s__lresult____ld_15b6_00d2._6_2_;
  iVar13 = s__lresult____ld_15b6_00d2._6_2_ + -0xc;
  iStack218 = 0x267c;
  s__lresult____ld_15b6_00d2._6_2_ = iVar13;
  FUN_10d1_0143();
  iStack218 = iVar4;
  uStack224 = 0x2685;
  uStack222 = iVar13;
  iStack220 = iVar13;
  FUN_10d1_097e();
  uStack224 = 0x268f;
  iStack218 = iVar13;
  uVar12 = FUN_10d1_0b43();
  s__lresult____ld_15b6_00d2._6_2_ = s__lresult____ld_15b6_00d2._6_2_ + 0x18;
  return uVar12;
joined_r0x00012640:
  while (iStack220 = iVar13, uStack226 = uVar8, uStack222 = uVar7, uStack224 = uVar9,
        uStack228 = uVar6, -1 < (int)uStack222) {
    uVar6 = uStack228 << 1;
    uVar9 = uStack224 << 1 | (uint)((int)uStack226 < 0);
    uVar8 = uStack226 << 1 | (uint)((int)uStack228 < 0);
    iVar13 = iStack220 + -1;
    uVar7 = uStack222 * 2 + (uint)((int)uStack224 < 0);
  }
  iStack218 = 1;
  FUN_10d1_19c3();
  FUN_10d1_00de();
  FUN_10d1_0b43(s__lresult____ld_15b6_00d2._6_2_,&uStack228,s__lresult____ld_15b6_00d2._6_2_);
  goto LAB_10d1_195d;
}



undefined4 FUN_107b_01c4(undefined2 param_1_00,uint param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((param_1 | param_2) == 0) {
    for (iVar1 = 0; iVar1 < 9000; iVar1 = iVar1 + 1) {
      bVar2 = CARRY2(param_1,DAT_15b6_0094);
      param_1 = param_1 + DAT_15b6_0094;
      param_2 = param_2 + DAT_15b6_0096 + (uint)bVar2;
      bVar2 = 0xfffd < DAT_15b6_0094;
      DAT_15b6_0094 = DAT_15b6_0094 + 2;
      DAT_15b6_0096 = DAT_15b6_0096 + (uint)bVar2;
    }
  }
  else {
    for (iVar1 = 0; iVar1 < 9000; iVar1 = iVar1 + 1) {
      bVar2 = DAT_15b6_0094 < 2;
      DAT_15b6_0094 = DAT_15b6_0094 - 2;
      DAT_15b6_0096 = DAT_15b6_0096 - (uint)bVar2;
      bVar2 = param_1 < DAT_15b6_0094;
      param_1 = param_1 - DAT_15b6_0094;
      param_2 = (param_2 - DAT_15b6_0096) - (uint)bVar2;
    }
  }
  return CONCAT22(param_2,param_1);
}



void FUN_107b_0221(undefined2 param_1,undefined param_2,undefined2 param_3,undefined param_4,
                  undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
                  undefined2 param_9,undefined2 param_10,undefined param_11,undefined2 param_12,
                  int param_13,undefined param_14,undefined2 param_15,undefined param_16)

{
  code *pcVar1;
  int in_CX;
  int iVar2;
  int unaff_BP;
  undefined *puVar3;
  int iVar4;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined uVar5;
  bool bVar6;
  undefined2 uStack18;
  int iVar7;
  
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x38);
  (*pcVar1)();
  puVar3 = &stack0xfffe + in_CX;
  pcVar1 = (code *)swi(0x3d);
  iVar2 = in_CX;
  (*pcVar1)();
  *(undefined2 *)(&stack0xfff2 + in_CX + 2) = *(undefined2 *)((int)&stack0x000a + in_CX);
  *(undefined2 *)(&stack0xfff2 + in_CX) = *(undefined2 *)(&param_4 + in_CX);
  *(undefined2 *)(&stack0xfff0 + in_CX) = *(undefined2 *)((int)&param_3 + in_CX);
  *(undefined2 *)((int)&uStack18 + in_CX) = *(undefined2 *)(&param_2 + in_CX);
  while( true ) {
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    puVar3 = puVar3 + iVar2;
    pcVar1 = (code *)swi(0x38);
    (*pcVar1)();
    LOCK();
    pcVar1 = (code *)swi(0x39);
    iVar7 = unaff_BP;
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    uVar5 = (DAT_1616_002c._1_1_ & 1) != 0;
    if (!(bool)uVar5) break;
    do {
      pcVar1 = (code *)swi(0x39);
      (*pcVar1)();
      unaff_BP = unaff_BP + 1;
      bVar6 = unaff_BP == 0;
      pcVar1 = (code *)swi(0x38);
      param_5 = unaff_ES;
      (*pcVar1)();
    } while ((bool)uVar5 || bVar6);
    pcVar1 = (code *)swi(0x38);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    LOCK();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    param_10 = *(undefined2 *)(puVar3 + -10);
    param_9 = *(undefined2 *)(puVar3 + -0xc);
    param_8 = *(undefined2 *)(puVar3 + -0xe);
    param_7 = *(undefined2 *)(puVar3 + -0x10);
    param_5 = 0xa23;
    FUN_107b_02b8();
    uVar5 = (undefined *)0xfff7 < &param_7;
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    iVar4 = param_13;
    LOCK();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    unaff_BP = iVar7;
    do {
      pcVar1 = (code *)swi(0x39);
      (*pcVar1)();
      iVar4 = iVar4 + 1;
      bVar6 = iVar4 == 0;
      pcVar1 = (code *)swi(0x38);
      (*pcVar1)();
    } while ((bool)uVar5 || bVar6);
    pcVar1 = (code *)swi(0x38);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x38);
    (*pcVar1)();
    puVar3 = puVar3 + iVar2;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
  return;
}



// WARNING: Instruction at (ram,0x00010a8e) overlaps instruction at (ram,0x00010a8d)
// 

uint FUN_107b_02b8(void)

{
  code *pcVar1;
  uint uVar2;
  int in_CX;
  int unaff_SI;
  char cVar3;
  
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3a);
  (*pcVar1)();
  do {
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    if ((DAT_1616_002c._1_1_ & 1) == 0) {
      pcVar1 = (code *)swi(0x39);
      uVar2 = (*pcVar1)();
      break;
    }
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    unaff_SI = unaff_SI + 1;
    cVar3 = unaff_SI == 0;
    pcVar1 = (code *)swi(0x35);
    uVar2 = (*pcVar1)();
    in_CX = in_CX + -1;
  } while (in_CX != 0 && cVar3 == '\0');
  return uVar2 & 0xff00 | (uint)(byte)((char)uVar2 - 0x33);
}



void FUN_107b_02e6(undefined2 param_1,undefined2 param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined uVar3;
  undefined uVar4;
  int in_stack_00000046;
  
  iVar2 = 100;
  do {
    if (iVar2 == 0) {
      pcVar1 = (code *)swi(0x39);
      (*pcVar1)();
      return;
    }
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x38);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x38);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x38);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x38);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x38);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x38);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    uVar4 = param_3 == -1;
    uVar3 = false;
    pcVar1 = (code *)swi(0x38);
    (*pcVar1)();
    if ((bool)uVar3 || (bool)uVar4) {
LAB_107b_0323:
      if (!(bool)uVar3 && !(bool)uVar4) {
        pcVar1 = (code *)swi(0x38);
        (*pcVar1)();
        goto LAB_107b_0327;
      }
LAB_107b_032b:
      if (!(bool)uVar3 && !(bool)uVar4) {
        pcVar1 = (code *)swi(0x38);
        (*pcVar1)();
        goto LAB_107b_032f;
      }
LAB_107b_0333:
      pcVar1 = (code *)swi(0x3d);
      (*pcVar1)();
    }
    else {
      pcVar1 = (code *)swi(0x38);
      (*pcVar1)();
      if (!(bool)uVar3 && !(bool)uVar4) {
        pcVar1 = (code *)swi(0x38);
        (*pcVar1)();
        goto LAB_107b_0323;
      }
LAB_107b_0327:
      if (!(bool)uVar3 && !(bool)uVar4) {
        pcVar1 = (code *)swi(0x38);
        (*pcVar1)();
        goto LAB_107b_032b;
      }
LAB_107b_032f:
      if (!(bool)uVar3 && !(bool)uVar4) {
        pcVar1 = (code *)swi(0x39);
        (*pcVar1)();
        goto LAB_107b_0333;
      }
    }
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x38);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x38);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x38);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x38);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x38);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x38);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x38);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x38);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x38);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x38);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x38);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x38);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    iVar2 = in_stack_00000046;
  } while( true );
}



int FUN_107b_0390(undefined2 param_1_00,int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 3) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_107b_0390(0x1000,param_1 + -1);
    iVar2 = FUN_107b_0390(0x1000,param_1 + -2);
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}



int FUN_107b_03c2(undefined2 param_1_00,undefined2 param_1,undefined2 param_2,undefined2 param_3,
                 undefined2 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1000;
  iVar3 = 0;
  for (iVar2 = 0; iVar2 < 9000; iVar2 = iVar2 + 1) {
    FUN_107b_0456(uVar4,param_1,param_2,0x137,0x15b6);
    FUN_107b_0456(0x107b,param_3,param_4,0x148,0x15b6);
    uVar4 = 0x107b;
    iVar1 = FUN_107b_0418(0x107b,param_1,param_2,param_3,param_4);
    iVar3 = iVar3 + iVar1;
  }
  return iVar3;
}



int FUN_107b_0418(undefined2 param_1_00,char *param_1,char *param_2)

{
  while( true ) {
    if (*param_1 != *param_2) {
      return (int)*param_1 - (int)*param_2;
    }
    if (*param_1 == '\0') break;
    param_1 = (char *)((ulong)param_1 & 0xffff0000 | (ulong)((int)param_1 + 1));
    param_2 = (char *)((ulong)param_2 & 0xffff0000 | (ulong)((int)param_2 + 1));
  }
  return 0;
}



void FUN_107b_0456(undefined2 param_1_00,char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  do {
    pcVar3 = param_2;
    pcVar2 = param_1;
    param_2 = (char *)((ulong)param_2 & 0xffff0000 | (ulong)((int)param_2 + 1));
    cVar1 = *pcVar3;
    param_1 = (char *)((ulong)param_1 & 0xffff0000 | (ulong)((int)param_1 + 1));
    *pcVar2 = cVar1;
  } while (cVar1 != '\0');
  return;
}



int FUN_107b_0473(void)

{
  int *piVar1;
  undefined uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  int *piVar10;
  undefined2 local_66 [50];
  
  FUN_107b_0456(0x1000,local_66);
  uVar8 = 0x1419;
  piVar10 = (int *)FUN_1419_0224(0x1000,0x167,0x15b6,0x170,0x15b6);
  uVar5 = (undefined2)((ulong)piVar10 >> 0x10);
  if (piVar10 == (int *)0x0) {
    FUN_14fe_0002(0x1419,0x172,0x15b6);
    uVar8 = 0x13ca;
    FUN_13ca_0002(0x14fe,0xffff);
  }
  iVar7 = 0;
  while (iVar7 = iVar7 + 1, iVar7 < 1000) {
    for (iVar6 = 0; *(char *)((int)local_66 + iVar6) != '\0'; iVar6 = iVar6 + 1) {
      iVar3 = *piVar10;
      *piVar10 = *piVar10 + 1;
      if (SCARRY2(iVar3,1) == *piVar10 < 0) {
        uVar9 = 0x1500;
        FUN_1500_0006(uVar8,*(undefined2 *)((int)local_66 + iVar6),piVar10);
      }
      else {
        uVar2 = *(undefined *)((int)local_66 + iVar6);
        piVar1 = (int *)((int)piVar10 + 0xc);
        *piVar1 = *piVar1 + 1;
        uVar4 = *(undefined4 *)((int)piVar10 + 0xc);
        *(undefined *)((int)uVar4 + -1) = uVar2;
        uVar9 = uVar8;
      }
      uVar8 = uVar9;
    }
  }
  FUN_1491_0008(uVar8,piVar10);
  return iVar7;
}



int FUN_107b_051e(void)

{
  int iVar1;
  int iVar2;
  int local_6;
  int local_4;
  
  for (iVar1 = 0; iVar1 < 1000; iVar1 = iVar1 + 1) {
    local_4 = 0;
    local_6 = 1;
    for (iVar2 = 0; iVar2 < 0xb3; iVar2 = iVar2 + 1) {
      local_4 = local_4 + local_6;
      local_6 = local_6 + 2;
    }
  }
  return local_4;
}



undefined2 * __cdecl16near FUN_10d1_001e(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  
  puVar4 = (undefined2 *)((int)s_Turbo_C___Copyright__c__1988_Bor_15b6_0004 + 0xe);
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return puVar4;
}



undefined2 * __cdecl16near FUN_10d1_0084(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  
  puVar4 = (undefined2 *)((int)&DAT_15b6_0077 + 1);
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return puVar4;
}



void __cdecl16near FUN_10d1_0099(void)

{
  undefined2 in_AX;
  byte in_CL;
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  
  *unaff_DI = 0;
  unaff_DI[1] = 0;
  unaff_DI[2] = 0;
  unaff_DI[3] = 0;
  unaff_DI[4] = in_AX;
  unaff_DI[5] = (uint)in_CL;
  return;
}



void __cdecl16near FUN_10d1_00ab(void)

{
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  
  FUN_10d1_1dfd();
  *unaff_DI = 0;
  unaff_DI[1] = 0;
  unaff_DI[2] = 0;
  unaff_DI[3] = 0xc000;
  unaff_DI[4] = 0x4001;
  unaff_DI[5] = 1;
  return;
}



void __cdecl16near FUN_10d1_00c4(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *unaff_SI;
  undefined2 *puVar4;
  
  puVar4 = (undefined2 *)((int)s__lresult____ld_15b6_00d2._6_2_ + -0xc);
  s__lresult____ld_15b6_00d2._6_2_ = puVar4;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *puVar2 = *puVar1;
  }
  return;
}



void __cdecl16near FUN_10d1_00de(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *unaff_SI;
  undefined2 *puVar4;
  
  puVar4 = (undefined2 *)((int)s__lresult____ld_15b6_00d2._6_2_ + -0xc);
  s__lresult____ld_15b6_00d2._6_2_ = puVar4;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *puVar2 = *puVar1;
  }
  return;
}



void __cdecl16near FUN_10d1_010f(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  puVar5 = s__lresult____ld_15b6_00d2._6_2_ + -6;
  puVar4 = s__lresult____ld_15b6_00d2._6_2_;
  s__lresult____ld_15b6_00d2._6_2_ = puVar5;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



void __cdecl16near FUN_10d1_0143(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_SI;
  uint *unaff_DI;
  undefined2 unaff_ES;
  
  uVar2 = *unaff_SI;
  uVar3 = 0;
  uVar4 = 0;
  if ((int)uVar2 < 0) {
    uVar1 = -uVar2;
    uVar4 = 1;
  }
  else {
    uVar1 = uVar2;
    if ((int)uVar2 < 1) {
      uVar5 = 0xc001;
      goto LAB_10d1_0166;
    }
  }
  uVar5 = 0;
  uVar2 = 0;
  uVar3 = uVar1;
  do {
    uVar5 = uVar5 + 1;
    uVar1 = uVar3 & 1;
    uVar3 = uVar3 >> 1;
    uVar2 = uVar2 >> 1 | (uint)(uVar1 != 0) << 0xf;
  } while (uVar3 != 0);
LAB_10d1_0166:
  unaff_DI[5] = uVar4;
  unaff_DI[4] = uVar5;
  unaff_DI[3] = uVar2;
  unaff_DI[2] = uVar3;
  unaff_DI[1] = uVar3;
  *unaff_DI = uVar3;
  return;
}



void __cdecl16near FUN_10d1_08f3(void)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *in_BX;
  uint *unaff_SI;
  uint *unaff_DI;
  undefined2 unaff_ES;
  bool bVar5;
  
  if ((unaff_SI[3] & 0x7fff | *unaff_SI | unaff_SI[1] | unaff_SI[2]) == 0) {
    if (in_BX == (uint *)0xffff) {
      return;
    }
    if ((int)in_BX[4] < 0x4001) {
      return;
    }
    if ((in_BX[3] & 0x7fff | *in_BX | in_BX[1] | in_BX[2]) == 0) {
      return;
    }
  }
  else {
    if (((((in_BX == (uint *)0xffff) || ((int)in_BX[4] < 0x4001)) ||
         ((in_BX[3] & 0x7fff | *in_BX | in_BX[1] | in_BX[2]) == 0)) ||
        (uVar3 = unaff_SI[3], puVar1 = in_BX + 3, bVar5 = *puVar1 <= uVar3,
        bVar5 && uVar3 != *puVar1)) ||
       ((bVar5 && ((uVar3 = unaff_SI[2], puVar1 = in_BX + 2, bVar5 = *puVar1 <= uVar3,
                   bVar5 && uVar3 != *puVar1 ||
                   ((bVar5 && ((uVar3 = unaff_SI[1], puVar1 = in_BX + 1, bVar5 = *puVar1 <= uVar3,
                               bVar5 && uVar3 != *puVar1 ||
                               ((bVar5 && (uVar3 = *unaff_SI, puVar1 = in_BX,
                                          *puVar1 <= uVar3 && uVar3 != *puVar1))))))))))))
    goto LAB_10d1_096a;
  }
  unaff_SI = in_BX;
LAB_10d1_096a:
  FUN_10d1_1dfd();
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *puVar2 = *puVar1;
  }
  return;
}



void FUN_10d1_097e(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  undefined2 unaff_ES;
  bool bVar16;
  bool bVar17;
  byte local_7;
  uint local_6;
  byte local_4;
  int iVar15;
  
  bVar4 = *(byte *)(param_2 + 5) ^ *(byte *)(param_3 + 5);
  uVar7 = param_3[4];
  uVar6 = param_2[4];
  bVar16 = uVar7 < 0x4001;
  puVar13 = param_3;
  if ((int)uVar7 < 0x4001) {
    if (0x4000 < (int)uVar6) {
      bVar16 = false;
      local_7 = FUN_10d1_08f3();
      puVar13 = param_2;
      if (bVar16) {
        return;
      }
      goto LAB_10d1_0a11;
    }
    if ((int)uVar7 < (int)uVar6) {
      bVar8 = *(byte *)(param_2 + 5);
      uVar12 = uVar6;
      uVar6 = uVar7;
      puVar13 = param_2;
    }
    else {
      bVar8 = *(byte *)(param_3 + 5);
      uVar12 = uVar7;
      param_3 = param_2;
    }
    local_6 = puVar13[4];
    local_7 = bVar8;
    if ((-0x3fff < (int)uVar6) && ((int)(uVar12 - uVar6) < 0x41)) {
      bVar5 = (byte)(uVar12 - uVar6);
      uVar6 = *param_3;
      uVar12 = param_3[1];
      uVar9 = param_3[2];
      uVar11 = param_3[3];
      local_4 = 0;
      while (bVar16 = '\a' < (char)bVar5, bVar5 = bVar5 - 8, bVar16) {
        local_4 = (byte)uVar6;
        uVar6 = CONCAT11((char)uVar12,(char)(uVar6 >> 8));
        uVar12 = CONCAT11((char)uVar9,(char)(uVar12 >> 8));
        uVar9 = CONCAT11((char)uVar11,(char)(uVar9 >> 8));
        uVar11 = uVar11 >> 8;
      }
      for (bVar5 = bVar5 & 7; bVar5 != 0; bVar5 = bVar5 - 1) {
        uVar10 = uVar11 & 1;
        uVar11 = uVar11 >> 1;
        uVar7 = uVar9 & 1;
        uVar9 = uVar9 >> 1 | (uint)(uVar10 != 0) << 0xf;
        uVar10 = uVar12 & 1;
        uVar12 = uVar12 >> 1 | (uint)(uVar7 != 0) << 0xf;
        uVar7 = uVar6 & 1;
        uVar6 = uVar6 >> 1 | (uint)(uVar10 != 0) << 0xf;
        local_4 = local_4 >> 1 | (uVar7 != 0) << 7;
      }
      if (bVar4 == 0) {
        puVar1 = puVar13;
        uVar7 = uVar6 + *puVar1;
        puVar2 = puVar13 + 1;
        uVar10 = (uint)CARRY2(uVar6,*puVar1);
        uVar3 = uVar12 + *puVar2;
        uVar6 = uVar3 + uVar10;
        puVar1 = puVar13 + 2;
        uVar10 = (uint)(CARRY2(uVar12,*puVar2) || CARRY2(uVar3,uVar10));
        uVar3 = uVar9 + *puVar1;
        uVar12 = uVar3 + uVar10;
        puVar2 = puVar13 + 3;
        uVar9 = (uint)(CARRY2(uVar9,*puVar1) || CARRY2(uVar3,uVar10));
        bVar17 = CARRY2(uVar11,*puVar2);
        uVar11 = uVar11 + *puVar2;
        bVar16 = CARRY2(uVar11,uVar9);
        uVar9 = uVar11 + uVar9;
        if (bVar17 || bVar16) {
          uVar11 = uVar9 & 1;
          uVar9 = uVar9 >> 1 | (uint)(bVar17 || bVar16) << 0xf;
          uVar10 = uVar12 & 1;
          uVar12 = uVar12 >> 1 | (uint)(uVar11 != 0) << 0xf;
          uVar11 = uVar6 & 1;
          uVar6 = uVar6 >> 1 | (uint)(uVar10 != 0) << 0xf;
          uVar10 = uVar7 & 1;
          uVar7 = uVar7 >> 1 | (uint)(uVar11 != 0) << 0xf;
          local_4 = local_4 >> 1 | (uVar10 != 0) << 7;
          local_6 = local_6 + 1;
        }
      }
      else {
        puVar1 = puVar13;
        uVar7 = uVar6 - *puVar1;
        puVar2 = puVar13 + 1;
        uVar10 = (uint)(uVar6 < *puVar1);
        uVar3 = uVar12 - *puVar2;
        uVar6 = uVar3 - uVar10;
        puVar1 = puVar13 + 2;
        uVar10 = (uint)(uVar12 < *puVar2 || uVar3 < uVar10);
        uVar3 = uVar9 - *puVar1;
        uVar12 = uVar3 - uVar10;
        puVar2 = puVar13 + 3;
        uVar10 = (uint)(uVar9 < *puVar1 || uVar3 < uVar10);
        uVar3 = uVar11 - *puVar2;
        uVar9 = uVar3 - uVar10;
        local_7 = bVar8 ^ 1;
        if (uVar11 < *puVar2 || uVar3 < uVar10) {
          uVar10 = ~uVar12;
          uVar11 = ~uVar6;
          uVar6 = ~uVar7;
          bVar16 = local_4 == 0;
          local_4 = -local_4;
          uVar7 = uVar6 + bVar16;
          uVar12 = (uint)CARRY2(uVar6,(uint)bVar16);
          uVar6 = uVar11 + uVar12;
          uVar11 = (uint)CARRY2(uVar11,uVar12);
          uVar12 = uVar10 + uVar11;
          uVar9 = ~uVar9 + (uint)CARRY2(uVar10,uVar11);
          local_7 = bVar8;
        }
        iVar14 = 0x40;
        if (-1 < (int)uVar9) {
          do {
            iVar15 = iVar14;
            iVar14 = iVar15 + -1;
            if ((iVar14 == 0) && (uVar9 == 0)) {
              local_6 = 0xc001;
              local_7 = 0;
              goto LAB_10d1_0b07;
            }
            bVar16 = (char)local_4 < '\0';
            local_4 = local_4 << 1;
            bVar17 = (int)uVar7 < 0;
            uVar7 = uVar7 << 1 | (uint)bVar16;
            bVar16 = (int)uVar6 < 0;
            uVar6 = uVar6 << 1 | (uint)bVar17;
            bVar17 = (int)uVar12 < 0;
            uVar12 = uVar12 << 1 | (uint)bVar16;
            uVar9 = uVar9 * 2 + (uint)bVar17;
          } while (-1 < (int)uVar9);
          local_6 = local_6 + iVar15 + -0x41;
        }
      }
      bVar16 = CARRY2(uVar7,(uint)((char)local_4 < '\0'));
      uVar7 = uVar7 + ((char)local_4 < '\0');
      uVar11 = (uint)bVar16;
      bVar16 = CARRY2(uVar6,uVar11);
      uVar6 = uVar6 + uVar11;
      uVar11 = (uint)bVar16;
      bVar16 = CARRY2(uVar12,uVar11);
      uVar12 = uVar12 + uVar11;
      uVar11 = (uint)bVar16;
      bVar16 = CARRY2(uVar9,uVar11);
      uVar9 = uVar9 + uVar11;
      if (bVar16) {
        uVar9 = uVar9 >> 1 | (uint)bVar16 << 0xf;
        local_6 = local_6 + 1;
      }
      if ((int)local_6 < 0x4001) {
        if (-0x3fff < (int)local_6) goto LAB_10d1_0b07;
        local_6 = 0xc001;
      }
      else {
        local_6 = 0x4001;
      }
      FUN_10d1_1dfd();
      local_7 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar12 = 0;
      uVar9 = 0;
      goto LAB_10d1_0b07;
    }
  }
  else {
    FUN_10d1_08f3(param_2);
    if (bVar16) {
      return;
    }
    if ((0x4000 < (int)uVar6) && (bVar4 != 0)) {
      FUN_10d1_00ab();
      return;
    }
    local_7 = *(byte *)(param_3 + 5);
LAB_10d1_0a11:
    local_6 = 0x4001;
  }
  uVar7 = *puVar13;
  uVar6 = puVar13[1];
  uVar12 = puVar13[2];
  uVar9 = puVar13[3];
LAB_10d1_0b07:
  *param_1 = uVar7;
  param_1[1] = uVar6;
  param_1[2] = uVar12;
  param_1[3] = uVar9;
  param_1[4] = local_6;
  *(byte *)(param_1 + 5) = local_7;
  return;
}



void FUN_10d1_0b43(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint in_CX;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 unaff_ES;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  long lVar12;
  
  bVar5 = *(byte *)(param_3 + 10) ^ *(byte *)(param_2 + 10);
  uVar6 = in_CX & 0xff00 | (uint)bVar5;
  uVar8 = *(uint *)(param_2 + 8);
  uVar1 = *(uint *)(param_3 + 8);
  bVar9 = uVar1 < 0x4001;
  if ((int)uVar1 < 0x4001) {
    bVar9 = uVar8 < 0x4001;
    if ((int)uVar8 < 0x4001) {
      uVar3 = uVar1;
      if ((int)uVar8 <= (int)uVar1) {
        uVar3 = uVar8;
        uVar8 = uVar1;
      }
      if (-0x3fff < (int)uVar3) {
        iVar4 = uVar3 + uVar8;
        if (iVar4 + -1 < 0x4001) {
          if (iVar4 < -0x3ffe) {
            FUN_10d1_1dfd();
            goto LAB_10d1_0bc9;
          }
          FUN_10d1_00c4();
          FUN_10d1_00c4();
          lVar12 = FUN_10d1_0c2c();
          s__lresult____ld_15b6_00d2._6_2_ = s__lresult____ld_15b6_00d2._6_2_ + 0x18;
          if (-1 < lVar12) {
            iVar4 = iVar4 + -1;
            bVar9 = param_2 < 0;
            param_2 = param_2 << 1;
            bVar10 = (int)uVar8 < 0;
            uVar8 = uVar8 << 1 | (uint)((int)lVar12 < 0);
            bVar11 = (int)uVar6 < 0;
            uVar6 = uVar6 << 1 | (uint)bVar10;
            lVar12 = CONCAT22((int)((ulong)lVar12 >> 0x10) << 1 | (uint)bVar11,
                              (int)lVar12 << 1 | (uint)bVar9);
          }
          uVar7 = (uint)((ulong)lVar12 >> 0x10);
          uVar1 = (uint)CARRY2((uint)lVar12,(uint)(param_2 < 0));
          uVar3 = (uint)CARRY2(uVar8,uVar1);
          uVar2 = (uint)CARRY2(uVar6,uVar3);
          bVar9 = CARRY2(uVar7,uVar2);
          uVar7 = uVar7 + uVar2;
          if (bVar9) {
            uVar7 = uVar7 >> 1 | (uint)bVar9 << 0xf;
            iVar4 = iVar4 + 1;
          }
          if (iVar4 < 0x4001) {
            *param_1 = (uint)lVar12 + (uint)(param_2 < 0);
            param_1[1] = uVar8 + uVar1;
            param_1[2] = uVar6 + uVar3;
            param_1[3] = uVar7;
            param_1[4] = iVar4;
            param_1[5] = (uint)bVar5;
            return;
          }
        }
        FUN_10d1_1dfd();
      }
      goto LAB_10d1_0bc9;
    }
    FUN_10d1_08f3();
    if (bVar9) {
      return;
    }
    iVar4 = *(int *)(param_3 + 8);
  }
  else {
    FUN_10d1_08f3();
    if (bVar9) {
      return;
    }
    iVar4 = *(int *)(param_2 + 8);
  }
  if (iVar4 < -0x3ffe) {
    FUN_10d1_00ab();
    return;
  }
LAB_10d1_0bc9:
  FUN_10d1_0099();
  return;
}



undefined4 __cdecl16near FUN_10d1_0c2c(void)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined2 unaff_SS;
  bool bVar15;
  
  uVar11 = 0;
  uVar4 = 0;
  uVar8 = 0;
  if ((*(byte *)((int)s__lresult____ld_15b6_00d2._6_2_ + 0xf) & 0x80) != 0) {
    uVar4 = *s__lresult____ld_15b6_00d2._6_2_;
    uVar8 = s__lresult____ld_15b6_00d2._6_2_[1];
  }
  if ((*(byte *)((int)s__lresult____ld_15b6_00d2._6_2_ + 3) & 0x80) != 0) {
    puVar1 = s__lresult____ld_15b6_00d2._6_2_ + 6;
    bVar15 = CARRY2(uVar4,*puVar1);
    uVar4 = uVar4 + *puVar1;
    puVar1 = s__lresult____ld_15b6_00d2._6_2_ + 7;
    uVar11 = (uint)bVar15;
    bVar15 = CARRY2(uVar8,*puVar1);
    uVar6 = uVar8 + *puVar1;
    uVar8 = uVar6 + uVar11;
    uVar11 = (uint)(bVar15 || CARRY2(uVar6,uVar11));
    if ((*(byte *)((int)s__lresult____ld_15b6_00d2._6_2_ + 0xf) & 0x80) != 0) {
      uVar11 = uVar11 - 1;
    }
  }
  uVar7 = 0;
  lVar2 = (ulong)s__lresult____ld_15b6_00d2._6_2_[6] * (ulong)s__lresult____ld_15b6_00d2._6_2_[2];
  uVar5 = (uint)((ulong)lVar2 >> 0x10);
  uVar3 = (uint)lVar2;
  uVar6 = (uint)CARRY2(uVar4,uVar3);
  uVar12 = uVar8 + uVar5;
  uVar9 = uVar12 + uVar6;
  uVar11 = uVar11 + (CARRY2(uVar8,uVar5) || CARRY2(uVar12,uVar6));
  uVar8 = s__lresult____ld_15b6_00d2._6_2_[8];
  if (uVar8 != 0) {
    lVar2 = (ulong)uVar8 * (ulong)*s__lresult____ld_15b6_00d2._6_2_;
    uVar6 = (uint)((ulong)lVar2 >> 0x10);
    uVar4 = (uint)CARRY2(uVar4 + uVar3,(uint)lVar2);
    uVar8 = uVar9 + uVar6;
    uVar7 = uVar8 + uVar4;
    uVar12 = uVar11 + (CARRY2(uVar9,uVar6) || CARRY2(uVar8,uVar4));
    lVar2 = (ulong)s__lresult____ld_15b6_00d2._6_2_[8] * (ulong)s__lresult____ld_15b6_00d2._6_2_[1];
    uVar6 = (uint)((ulong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2;
    uVar9 = uVar7 + uVar4;
    uVar4 = (uint)CARRY2(uVar7,uVar4);
    uVar8 = uVar12 + uVar6;
    uVar11 = uVar8 + uVar4;
    uVar7 = (uint)(CARRY2(uVar12,uVar6) || CARRY2(uVar8,uVar4));
  }
  lVar2 = (ulong)s__lresult____ld_15b6_00d2._6_2_[6] * (ulong)s__lresult____ld_15b6_00d2._6_2_[3];
  uVar5 = (uint)((ulong)lVar2 >> 0x10);
  uVar4 = (uint)lVar2;
  uVar10 = uVar9 + uVar4;
  uVar4 = (uint)CARRY2(uVar9,uVar4);
  uVar6 = uVar11 + uVar5;
  uVar13 = uVar6 + uVar4;
  lVar2 = (ulong)s__lresult____ld_15b6_00d2._6_2_[7] * (ulong)s__lresult____ld_15b6_00d2._6_2_[2];
  uVar9 = (uint)((ulong)lVar2 >> 0x10);
  uVar3 = (uint)lVar2;
  uVar8 = (uint)CARRY2(uVar10,uVar3);
  uVar12 = uVar13 + uVar9;
  uVar14 = uVar12 + uVar8;
  uVar8 = uVar7 + (CARRY2(uVar11,uVar5) || CARRY2(uVar6,uVar4)) +
          (uint)(CARRY2(uVar13,uVar9) || CARRY2(uVar12,uVar8));
  uVar4 = s__lresult____ld_15b6_00d2._6_2_[9];
  if (uVar4 != 0) {
    lVar2 = (ulong)uVar4 * (ulong)*s__lresult____ld_15b6_00d2._6_2_;
    uVar11 = (uint)((ulong)lVar2 >> 0x10);
    uVar4 = (uint)CARRY2(uVar10 + uVar3,(uint)lVar2);
    bVar15 = CARRY2(uVar14,uVar11);
    uVar11 = uVar14 + uVar11;
    uVar14 = uVar11 + uVar4;
    uVar8 = uVar8 + (bVar15 || CARRY2(uVar11,uVar4));
  }
  uVar11 = 0;
  lVar2 = (ulong)s__lresult____ld_15b6_00d2._6_2_[7] * (ulong)s__lresult____ld_15b6_00d2._6_2_[3];
  uVar7 = (uint)((ulong)lVar2 >> 0x10);
  uVar4 = (uint)lVar2;
  uVar3 = uVar14 + uVar4;
  uVar4 = (uint)CARRY2(uVar14,uVar4);
  uVar6 = uVar8 + uVar7;
  uVar12 = uVar6 + uVar4;
  uVar8 = (uint)(CARRY2(uVar8,uVar7) || CARRY2(uVar6,uVar4));
  uVar4 = s__lresult____ld_15b6_00d2._6_2_[8];
  if (uVar4 != 0) {
    lVar2 = (ulong)uVar4 * (ulong)s__lresult____ld_15b6_00d2._6_2_[2];
    uVar6 = (uint)((ulong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2;
    bVar15 = CARRY2(uVar3,uVar4);
    uVar3 = uVar3 + uVar4;
    uVar4 = (uint)bVar15;
    uVar11 = uVar12 + uVar6;
    uVar5 = uVar11 + uVar4;
    uVar6 = uVar8 + (CARRY2(uVar12,uVar6) || CARRY2(uVar11,uVar4));
    lVar2 = (ulong)s__lresult____ld_15b6_00d2._6_2_[8] * (ulong)s__lresult____ld_15b6_00d2._6_2_[3];
    uVar7 = (uint)((ulong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2;
    uVar12 = uVar5 + uVar4;
    uVar4 = (uint)CARRY2(uVar5,uVar4);
    uVar11 = uVar6 + uVar7;
    uVar8 = uVar11 + uVar4;
    uVar11 = (uint)(CARRY2(uVar6,uVar7) || CARRY2(uVar11,uVar4));
  }
  uVar4 = s__lresult____ld_15b6_00d2._6_2_[9];
  if (uVar4 != 0) {
    lVar2 = (ulong)uVar4 * (ulong)s__lresult____ld_15b6_00d2._6_2_[1];
    uVar6 = (uint)((ulong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2;
    bVar15 = CARRY2(uVar3,uVar4);
    uVar3 = uVar3 + uVar4;
    uVar4 = (uint)bVar15;
    uVar7 = uVar12 + uVar6;
    uVar6 = (uint)(CARRY2(uVar12,uVar6) || CARRY2(uVar7,uVar4));
    uVar12 = uVar8 + uVar6;
    lVar2 = (ulong)s__lresult____ld_15b6_00d2._6_2_[9] * (ulong)s__lresult____ld_15b6_00d2._6_2_[2];
    uVar5 = (uint)((ulong)lVar2 >> 0x10);
    uVar4 = (uint)CARRY2(uVar7 + uVar4,(uint)lVar2);
    uVar7 = uVar12 + uVar5;
    lVar2 = (ulong)s__lresult____ld_15b6_00d2._6_2_[9] * (ulong)s__lresult____ld_15b6_00d2._6_2_[3];
    uVar11 = uVar11 + CARRY2(uVar8,uVar6) + (uint)(CARRY2(uVar12,uVar5) || CARRY2(uVar7,uVar4)) +
             (int)((ulong)lVar2 >> 0x10) + (uint)CARRY2(uVar7 + uVar4,(uint)lVar2);
  }
  return CONCAT22(uVar11,uVar3);
}



void FUN_10d1_0d13(int *param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  byte bVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  undefined2 unaff_ES;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  uint local_14;
  uint local_12;
  uint local_10;
  uint local_e;
  uint local_c;
  int local_4;
  
  local_c = param_3[3];
  local_e = param_3[2];
  local_10 = param_3[1];
  local_12 = *param_3;
  bVar1 = *(byte *)(param_3 + 5);
  bVar2 = *(byte *)(param_2 + 5);
  uVar11 = param_2[4];
  uVar18 = param_3[4];
  bVar27 = uVar11 < 0x4001;
  if ((int)uVar11 < 0x4001) {
    bVar27 = uVar18 < 0x4001;
    if ((int)uVar18 < 0x4001) {
      if (-0x3fff < (int)uVar11) {
        if ((int)uVar18 < -0x3ffe) goto LAB_10d1_0d77;
        local_4 = uVar18 - uVar11;
        if (local_4 < 0x4001) {
          if (local_4 < -0x3ffe) {
            FUN_10d1_1dfd();
          }
          else {
            uVar11 = param_2[3];
            bVar27 = uVar11 < local_c;
            uVar18 = local_c;
            if (uVar11 <= local_c) {
              bVar27 = local_c < uVar11;
              uVar18 = local_c - uVar11;
            }
            uVar9 = (uint)(CONCAT22(uVar18,local_e) / (ulong)uVar11);
            uVar18 = uVar9 + 1;
            uVar10 = uVar18 + bVar27;
            bVar15 = (uVar11 <= local_c) + (0xfffe < uVar9 || CARRY2(uVar18,(uint)bVar27));
            uVar16 = (uint)bVar15;
            uVar18 = *param_2;
            uVar9 = param_2[1];
            if (uVar16 != 0) {
              uVar19 = param_2[2];
              do {
                bVar27 = local_12 < uVar18;
                local_12 = local_12 - uVar18;
                bVar28 = local_10 < uVar9;
                uVar22 = local_10 - uVar9;
                local_10 = uVar22 - bVar27;
                uVar22 = (uint)(bVar28 || uVar22 < bVar27);
                bVar27 = local_e < uVar19;
                uVar23 = local_e - uVar19;
                local_e = uVar23 - uVar22;
                local_c = (local_c - uVar11) - (uint)(bVar27 || uVar23 < uVar22);
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            uVar19 = (uint)((ulong)uVar18 * (ulong)uVar10 >> 0x10);
            local_14 = (uint)((ulong)uVar18 * (ulong)uVar10);
            uVar11 = (uint)((ulong)uVar9 * (ulong)uVar10);
            uVar22 = uVar19 + uVar11;
            uVar9 = uVar16 + (int)((ulong)uVar9 * (ulong)uVar10 >> 0x10) +
                    (uint)CARRY2(uVar19,uVar11);
            lVar7 = (ulong)param_2[2] * (ulong)uVar10;
            uVar11 = (uint)lVar7;
            uVar18 = uVar9 + uVar11;
            uVar19 = (int)((ulong)lVar7 >> 0x10) + (uint)CARRY2(uVar9,uVar11);
            lVar7 = (ulong)uVar10 * (ulong)param_2[3];
            uVar16 = (uint)lVar7;
            uVar9 = uVar16 + uVar19;
            bVar27 = uVar22 < local_12;
            local_12 = uVar22 - local_12;
            uVar11 = (uint)bVar27;
            bVar27 = uVar18 < local_10;
            uVar18 = uVar18 - local_10;
            local_10 = uVar18 - uVar11;
            uVar18 = (uint)(bVar27 || uVar18 < uVar11);
            bVar27 = uVar9 < local_e;
            uVar9 = uVar9 - local_e;
            local_e = uVar9 - uVar18;
            uVar11 = param_2[3];
            uVar4 = CONCAT22((((int)((ulong)lVar7 >> 0x10) + (uint)CARRY2(uVar16,uVar19)) - local_c)
                             - (uint)(bVar27 || uVar9 < uVar18),local_e);
            uVar18 = (uint)((uVar4 % (ulong)uVar11 << 0x10 | (ulong)local_10) / (ulong)uVar11);
            uVar19 = uVar18 + 1;
            uVar22 = (int)(uVar4 / uVar11) + (uint)(0xfffe < uVar18);
            bVar27 = uVar10 < uVar22;
            uVar10 = uVar10 - uVar22;
            uVar18 = uVar10 - (uVar19 != 0);
            uVar9 = *param_2;
            uVar16 = param_2[1];
            if (uVar22 != 0) {
              uVar23 = param_2[2];
              do {
                bVar28 = local_14 < uVar9;
                local_14 = local_14 - uVar9;
                bVar29 = local_12 < uVar16;
                uVar12 = local_12 - uVar16;
                local_12 = uVar12 - bVar28;
                uVar12 = (uint)(bVar29 || uVar12 < bVar28);
                bVar28 = local_10 < uVar23;
                uVar13 = local_10 - uVar23;
                local_10 = uVar13 - uVar12;
                local_e = (local_e - uVar11) - (uint)(bVar28 || uVar13 < uVar12);
                uVar22 = uVar22 - 1;
              } while (uVar22 != 0);
            }
            uVar9 = (uint)((ulong)uVar9 * (ulong)uVar19 >> 0x10);
            uVar11 = (uint)((ulong)uVar16 * (ulong)uVar19);
            uVar23 = uVar9 + uVar11;
            uVar9 = uVar22 + (int)((ulong)uVar16 * (ulong)uVar19 >> 0x10) +
                    (uint)CARRY2(uVar9,uVar11);
            lVar7 = (ulong)param_2[2] * (ulong)uVar19;
            uVar11 = (uint)lVar7;
            uVar16 = uVar9 + uVar11;
            uVar20 = (int)((ulong)lVar7 >> 0x10) + (uint)CARRY2(uVar9,uVar11);
            lVar7 = (ulong)uVar19 * (ulong)param_2[3];
            uVar12 = (uint)lVar7;
            uVar13 = uVar12 + uVar20;
            uVar22 = uVar23 - local_14;
            uVar11 = (uint)(uVar23 < local_14);
            uVar9 = uVar16 - local_12;
            uVar23 = uVar9 - uVar11;
            uVar9 = (uint)(uVar16 < local_12 || uVar9 < uVar11);
            uVar16 = uVar13 - local_10;
            iVar14 = uVar16 - uVar9;
            uVar11 = param_2[3];
            uVar4 = CONCAT22((((int)((ulong)lVar7 >> 0x10) + (uint)CARRY2(uVar12,uVar20)) - local_e)
                             - (uint)(uVar13 < local_10 || uVar16 < uVar9),iVar14);
            uVar9 = (uint)((uVar4 % (ulong)uVar11 << 0x10 | (ulong)uVar23) / (ulong)uVar11);
            uVar20 = uVar9 + 1;
            uVar13 = (int)(uVar4 / uVar11) + (uint)(0xfffe < uVar9);
            iVar26 = -uVar19 + uVar13;
            uVar12 = (uint)CARRY2(-uVar19,uVar13);
            iVar3 = uVar18 + uVar12;
            uVar9 = param_2[1];
            uVar16 = param_2[2];
            for (; uVar13 != 0; uVar13 = uVar13 - 1) {
              bVar28 = uVar22 < uVar9;
              uVar22 = uVar22 - uVar9;
              bVar29 = uVar23 < uVar16;
              uVar17 = uVar23 - uVar16;
              uVar23 = uVar17 - bVar28;
              iVar14 = (iVar14 - uVar11) - (uint)(bVar29 || uVar17 < bVar28);
            }
            uVar9 = (uint)((ulong)uVar9 * (ulong)uVar20 >> 0x10);
            uVar11 = (uint)((ulong)uVar16 * (ulong)uVar20);
            uVar24 = uVar9 + uVar11;
            uVar17 = (int)((ulong)uVar16 * (ulong)uVar20 >> 0x10) + (uint)CARRY2(uVar9,uVar11);
            lVar7 = (ulong)param_2[3] * (ulong)uVar20;
            uVar16 = (uint)lVar7;
            uVar13 = uVar16 + uVar17;
            iVar25 = uVar24 - uVar22;
            uVar11 = (uint)(uVar24 < uVar22);
            uVar9 = uVar13 - uVar23;
            uVar22 = uVar9 - uVar11;
            uVar16 = (((int)((ulong)lVar7 >> 0x10) + (uint)CARRY2(uVar16,uVar17)) - iVar14) -
                     (uint)(uVar13 < uVar23 || uVar9 < uVar11);
            uVar11 = param_2[2];
            uVar9 = param_2[3];
            uVar11 = (uint)CARRY2(uVar11,uVar11);
            uVar23 = uVar9 + uVar11;
            if (!CARRY2(uVar9,uVar11)) {
              uVar4 = CONCAT22(uVar16 * 2 | (uint)((int)uVar22 < 0),uVar22 * 2 | (uint)(iVar25 < 0))
              ;
              uVar5 = uVar4 / uVar23;
              uVar4 = uVar4 % (ulong)uVar23 << 0x10 | (ulong)(uint)(iVar25 * 2);
              uVar6 = uVar4 / uVar23;
              uVar16 = (uint)uVar5 >> 1;
              uVar22 = (uint)uVar6 >> 1 | (uint)((uVar5 & 1) != 0) << 0xf;
              iVar25 = (uint)(byte)((byte)(uVar4 % (ulong)uVar23 >> 8) >> 1 |
                                   ((uVar6 & 1) != 0) << 7) << 8;
            }
            cVar8 = (char)((uint)iVar25 >> 8);
            bVar21 = -cVar8;
            uVar11 = (uint)(cVar8 == '\0');
            uVar23 = ~uVar22 + uVar11;
            uVar11 = (uint)CARRY2(~uVar22,uVar11);
            uVar9 = ~uVar16 + uVar20;
            uVar22 = uVar9 + uVar11;
            uVar11 = (uint)(CARRY2(~uVar16,uVar20) || CARRY2(uVar9,uVar11));
            uVar9 = iVar26 - 1;
            uVar16 = uVar9 + uVar11;
            uVar11 = (uint)(iVar26 != 0 || CARRY2(uVar9,uVar11));
            uVar9 = iVar3 - 1;
            uVar13 = uVar9 + uVar11;
            bVar15 = (bVar15 - (bVar27 || uVar10 < (uVar19 != 0))) + CARRY2(uVar18,uVar12) + -1 +
                     (iVar3 != 0 || CARRY2(uVar9,uVar11));
            bVar27 = (bool)(bVar15 & 1);
            if (bVar27) {
              uVar11 = uVar13 & 1;
              uVar13 = uVar13 >> 1 | (uint)bVar27 << 0xf;
              uVar18 = uVar16 & 1;
              uVar16 = uVar16 >> 1 | (uint)(uVar11 != 0) << 0xf;
              uVar11 = uVar22 & 1;
              uVar22 = uVar22 >> 1 | (uint)(uVar18 != 0) << 0xf;
              uVar18 = uVar23 & 1;
              uVar23 = uVar23 >> 1 | (uint)(uVar11 != 0) << 0xf;
              bVar21 = bVar21 >> 1 | (uVar18 != 0) << 7;
              local_4 = local_4 + 1;
            }
            uVar11 = (uint)CARRY2(uVar23,(uint)CARRY1(bVar21,bVar21));
            uVar18 = (uint)CARRY2(uVar22,uVar11);
            uVar9 = (uint)CARRY2(uVar16,uVar18);
            iVar26 = uVar13 + uVar9;
            if ((byte)((bVar15 >> 1) + CARRY2(uVar13,uVar9)) != '\0') {
              iVar26 = -0x8000;
              local_4 = local_4 + 1;
            }
            if (local_4 < 0x4001) {
              *param_1 = uVar23 + CARRY1(bVar21,bVar21);
              param_1[1] = uVar22 + uVar11;
              param_1[2] = uVar16 + uVar18;
              param_1[3] = iVar26;
              param_1[4] = local_4;
              param_1[5] = (int)(char)(bVar1 ^ bVar2);
              return;
            }
          }
          goto LAB_10d1_0d77;
        }
      }
      FUN_10d1_1dfd();
    }
    else {
      FUN_10d1_08f3();
      if (bVar27) {
        return;
      }
    }
  }
  else {
    FUN_10d1_08f3();
    if (bVar27) {
      return;
    }
    if (0x4000 < (int)param_3[4]) {
      FUN_10d1_00ab();
      return;
    }
  }
LAB_10d1_0d77:
  FUN_10d1_0099();
  return;
}



void __cdecl16near FUN_10d1_0f60(void)

{
  int *piVar1;
  int iVar2;
  int unaff_SI;
  
  iVar2 = *(int *)(unaff_SI + 8);
  if (-0x3fff < iVar2) {
    if (iVar2 < 0x4001) {
      if (*(char *)(unaff_SI + 10) == '\0') {
        FUN_10d1_00c4();
        FUN_10d1_0fb5();
        iVar2 = s__lresult____ld_15b6_00d2._6_2_;
        FUN_10d1_0d13(unaff_SI,s__lresult____ld_15b6_00d2._6_2_,unaff_SI);
        FUN_10d1_097e(unaff_SI,unaff_SI,iVar2);
        piVar1 = (int *)(unaff_SI + 8);
        *piVar1 = *piVar1 + -1;
        s__lresult____ld_15b6_00d2._6_2_ = s__lresult____ld_15b6_00d2._6_2_ + 0xc;
      }
      else {
        FUN_10d1_1dfd();
        FUN_10d1_0084();
        *(undefined2 *)(unaff_SI + 8) = 0x4001;
      }
    }
    else {
      FUN_10d1_08f3();
    }
  }
  return;
}



void __cdecl16near FUN_10d1_0fb5(void)

{
  undefined2 *puVar1;
  ulong uVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined2 unaff_ES;
  
  puVar3 = s__lresult____ld_15b6_00d2._6_2_;
  uVar10 = s__lresult____ld_15b6_00d2._6_2_[4];
  uVar8 = s__lresult____ld_15b6_00d2._6_2_[3];
  uVar4 = s__lresult____ld_15b6_00d2._6_2_[2];
  uVar7 = s__lresult____ld_15b6_00d2._6_2_[1];
  iVar9 = (int)uVar10 >> 1;
  if ((uVar10 & 1) != 0) {
    iVar9 = iVar9 + 1;
    uVar5 = uVar8 & 1;
    uVar8 = uVar8 >> 1;
    uVar10 = uVar4 & 1;
    uVar4 = uVar4 >> 1 | (uint)(uVar5 != 0) << 0xf;
    uVar7 = uVar7 >> 1 | (uint)(uVar10 != 0) << 0xf;
  }
  if (uVar8 < 0xfffe) {
    uVar10 = uVar8 >> 1 | 0x8000;
    while( true ) {
      uVar5 = (uint)(CONCAT22(uVar8,uVar4) / (ulong)uVar10);
      if (uVar10 - 1 <= uVar5) break;
      uVar10 = uVar10 + uVar5 >> 1 | (uint)CARRY2(uVar10,uVar5) << 0xf;
    }
    uVar6 = uVar5;
    uVar11 = uVar10;
    if (uVar10 < uVar5) {
      uVar6 = uVar10;
      uVar11 = uVar5;
    }
    uVar2 = (CONCAT22(uVar8,uVar4) % (ulong)uVar10 << 0x10 | (ulong)uVar7) / (ulong)uVar11;
    uVar4 = (uint)uVar2 >> 1 | (uint)((uVar11 + uVar6 & 1) != 0) << 0xf;
    uVar8 = (uint)((uVar2 & 1) != 0);
    uVar10 = uVar4 + uVar8;
    uVar7 = (uVar11 + uVar6 >> 1 | (uint)CARRY2(uVar11,uVar6) << 0xf) + (uint)CARRY2(uVar4,uVar8);
  }
  else {
    uVar7 = uVar8 >> 1 | 0x8000;
    uVar10 = uVar4 >> 1 | (uint)((uVar8 & 1) != 0) << 0xf;
  }
  puVar1 = s__lresult____ld_15b6_00d2._6_2_ + 1;
  *s__lresult____ld_15b6_00d2._6_2_ = 0;
  *puVar1 = 0;
  puVar3[2] = uVar10;
  puVar3[3] = uVar7;
  puVar3[4] = iVar9;
  puVar3[5] = 0;
  return;
}



void __cdecl16near FUN_10d1_126d(void)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined2 unaff_SS;
  bool bVar20;
  
  puVar2 = s__lresult____ld_15b6_00d2._6_2_;
  uVar5 = *s__lresult____ld_15b6_00d2._6_2_;
  uVar13 = s__lresult____ld_15b6_00d2._6_2_[1];
  uVar14 = s__lresult____ld_15b6_00d2._6_2_[2];
  uVar15 = s__lresult____ld_15b6_00d2._6_2_[3];
  uVar19 = 0;
  uVar17 = s__lresult____ld_15b6_00d2._6_2_[4];
  uVar3 = uVar5;
  uVar4 = uVar14;
  uVar10 = uVar15;
  if (uVar17 != 0xc001) {
    if ((int)uVar17 < -0xf) {
      uVar10 = 0;
      uVar17 = uVar17 + 0x10;
      uVar3 = uVar13;
      uVar4 = uVar15;
      uVar13 = uVar14;
      uVar19 = uVar5;
    }
    while (bVar20 = SCARRY2(uVar17,1), uVar17 = uVar17 + 1, uVar17 == 0 || bVar20 != (int)uVar17 < 0
          ) {
      uVar14 = uVar10 & 1;
      uVar10 = uVar10 >> 1;
      uVar5 = uVar4 & 1;
      uVar4 = uVar4 >> 1 | (uint)(uVar14 != 0) << 0xf;
      uVar14 = uVar13 & 1;
      uVar13 = uVar13 >> 1 | (uint)(uVar5 != 0) << 0xf;
      uVar5 = uVar3 & 1;
      uVar3 = uVar3 >> 1 | (uint)(uVar14 != 0) << 0xf;
      uVar19 = uVar19 >> 1 | (uint)(uVar5 != 0) << 0xf;
    }
  }
  uVar5 = (uint)CARRY2(uVar3,(uint)((int)uVar19 < 0));
  uVar14 = (uint)CARRY2(uVar13,uVar5);
  *s__lresult____ld_15b6_00d2._6_2_ = uVar3 + ((int)uVar19 < 0);
  puVar2[1] = uVar13 + uVar5;
  puVar2[2] = uVar4 + uVar14;
  puVar2[3] = uVar10 + CARRY2(uVar4,uVar14);
  uVar13 = 0;
  uVar5 = 0;
  if ((*(byte *)((int)puVar2 + 3) & 0x80) != 0) {
    uVar5 = *puVar2;
    uVar13 = uVar5 << 1;
    uVar5 = puVar2[1] << 1 | (uint)((int)uVar5 < 0);
  }
  lVar1 = (ulong)*puVar2 * (ulong)puVar2[2];
  uVar10 = (uint)((ulong)lVar1 >> 0x10);
  uVar17 = (uint)lVar1;
  uVar3 = uVar5 + uVar10 + (uint)CARRY2(uVar13,uVar17);
  uVar14 = (uint)CARRY2(uVar13 + uVar17,uVar17);
  uVar15 = uVar3 + uVar10;
  uVar4 = uVar15 + uVar14;
  uVar18 = (uint)(CARRY2(uVar5,uVar10) || CARRY2(uVar5 + uVar10,(uint)CARRY2(uVar13,uVar17))) +
           (uint)(CARRY2(uVar3,uVar10) || CARRY2(uVar15,uVar14));
  lVar1 = (ulong)puVar2[1] * (ulong)puVar2[2];
  uVar11 = (uint)((ulong)lVar1 >> 0x10);
  uVar13 = (uint)lVar1;
  uVar14 = uVar4 + uVar13;
  uVar5 = (uint)CARRY2(uVar4,uVar13);
  uVar3 = uVar18 + uVar11;
  uVar6 = uVar3 + uVar5;
  uVar15 = uVar14 + uVar13;
  uVar13 = (uint)CARRY2(uVar14,uVar13);
  uVar4 = uVar6 + uVar11;
  uVar7 = uVar4 + uVar13;
  lVar1 = (ulong)*puVar2 * (ulong)puVar2[3];
  uVar12 = (uint)((ulong)lVar1 >> 0x10);
  uVar17 = (uint)lVar1;
  uVar16 = uVar15 + uVar17;
  uVar14 = (uint)CARRY2(uVar15,uVar17);
  uVar10 = uVar7 + uVar12;
  uVar8 = uVar10 + uVar14;
  uVar15 = (uint)CARRY2(uVar16,uVar17);
  uVar19 = uVar8 + uVar12;
  uVar9 = uVar19 + uVar15;
  uVar17 = (uint)((int)(uVar16 + uVar17) < 0);
  uVar16 = uVar9 + uVar17;
  uVar11 = (uint)(CARRY2(uVar18,uVar11) || CARRY2(uVar3,uVar5)) +
           (uint)(CARRY2(uVar6,uVar11) || CARRY2(uVar4,uVar13)) +
           (uint)(CARRY2(uVar7,uVar12) || CARRY2(uVar10,uVar14)) +
           (uint)(CARRY2(uVar8,uVar12) || CARRY2(uVar19,uVar15)) + (uint)CARRY2(uVar9,uVar17);
  uVar5 = puVar2[2];
  lVar1 = (ulong)uVar5 * (ulong)uVar5;
  uVar7 = (uint)((ulong)lVar1 >> 0x10);
  uVar5 = (uint)lVar1;
  uVar13 = uVar16 + uVar5;
  uVar5 = (uint)CARRY2(uVar16,uVar5);
  uVar15 = uVar11 + uVar7;
  uVar10 = uVar15 + uVar5;
  lVar1 = (ulong)puVar2[3] * (ulong)puVar2[1];
  uVar8 = (uint)((ulong)lVar1 >> 0x10);
  uVar4 = (uint)lVar1;
  uVar9 = uVar13 + uVar4;
  uVar13 = (uint)CARRY2(uVar13,uVar4);
  uVar17 = uVar10 + uVar8;
  uVar19 = uVar17 + uVar13;
  uVar14 = (uint)CARRY2(uVar9,uVar4);
  uVar3 = uVar19 + uVar8;
  uVar6 = uVar3 + uVar14;
  uVar7 = (uint)(CARRY2(uVar11,uVar7) || CARRY2(uVar15,uVar5)) +
          (uint)(CARRY2(uVar10,uVar8) || CARRY2(uVar17,uVar13)) +
          (uint)(CARRY2(uVar19,uVar8) || CARRY2(uVar3,uVar14));
  lVar1 = (ulong)puVar2[3] * (ulong)puVar2[2];
  uVar19 = (uint)((ulong)lVar1 >> 0x10);
  uVar3 = (uint)lVar1;
  uVar10 = uVar6 + uVar3;
  uVar13 = (uint)CARRY2(uVar6,uVar3);
  uVar15 = uVar7 + uVar19;
  uVar6 = uVar15 + uVar13;
  uVar14 = (uint)CARRY2(uVar10,uVar3);
  uVar17 = uVar6 + uVar19;
  uVar8 = uVar17 + uVar14;
  uVar5 = puVar2[3];
  lVar1 = (ulong)uVar5 * (ulong)uVar5;
  uVar5 = (uint)lVar1;
  *puVar2 = uVar9 + uVar4;
  puVar2[1] = uVar10 + uVar3;
  puVar2[2] = uVar8 + uVar5;
  puVar2[3] = (uint)(CARRY2(uVar7,uVar19) || CARRY2(uVar15,uVar13)) +
              (uint)(CARRY2(uVar6,uVar19) || CARRY2(uVar17,uVar14)) + (int)((ulong)lVar1 >> 0x10) +
              (uint)CARRY2(uVar8,uVar5);
  *(undefined *)(puVar2 + 5) = 0;
  puVar2[4] = 0;
  return;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

void FUN_10d1_1375(int param_1,byte param_2)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  uint *puVar4;
  byte bVar5;
  uint in_CX;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint in_BX;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  bool bVar15;
  undefined4 uVar16;
  
  FUN_10d1_00de();
  puVar13 = (uint *)((uint)param_2 * 0xc + -0xc + param_1);
  while( true ) {
    puVar4 = s__lresult____ld_15b6_00d2._6_2_;
    bVar3 = param_2 - 1;
    if (bVar3 == 0 || (char)param_2 < '\x01') break;
    puVar2 = s__lresult____ld_15b6_00d2._6_2_ + 5;
    *(byte *)puVar2 = *(byte *)puVar2 ^ *(byte *)(s__lresult____ld_15b6_00d2._6_2_ + 0xb);
    uVar16 = FUN_10d1_0c2c();
    *puVar4 = (uint)uVar16;
    puVar4[1] = in_BX;
    puVar4[2] = in_CX;
    puVar4[3] = (uint)((ulong)uVar16 >> 0x10);
    puVar4 = s__lresult____ld_15b6_00d2._6_2_;
    puVar14 = puVar13 + -6;
    in_BX = *puVar14;
    in_CX = puVar13[-5];
    uVar6 = puVar13[-4];
    uVar9 = puVar13[-3];
    bVar5 = *(byte *)(puVar13 + -1);
    puVar13 = puVar14;
    param_2 = bVar3;
    if (bVar5 == *(byte *)(s__lresult____ld_15b6_00d2._6_2_ + 5)) {
      puVar2 = s__lresult____ld_15b6_00d2._6_2_;
      uVar7 = *puVar2;
      *puVar2 = *puVar2 + in_BX;
      puVar2 = puVar4 + 1;
      uVar8 = *puVar2;
      uVar12 = *puVar2;
      *puVar2 = uVar12 + in_CX + (uint)CARRY2(uVar7,in_BX);
      puVar2 = puVar4 + 2;
      uVar8 = (uint)(CARRY2(uVar8,in_CX) || CARRY2(uVar12 + in_CX,(uint)CARRY2(uVar7,in_BX)));
      uVar12 = *puVar2;
      uVar7 = *puVar2;
      *puVar2 = uVar7 + uVar6 + uVar8;
      puVar2 = puVar4 + 3;
      *puVar2 = *puVar2 + uVar9 + (uint)(CARRY2(uVar12,uVar6) || CARRY2(uVar7 + uVar6,uVar8));
    }
    else {
      puVar2 = s__lresult____ld_15b6_00d2._6_2_;
      bVar15 = in_BX < *puVar2;
      in_BX = in_BX - *puVar2;
      puVar2 = s__lresult____ld_15b6_00d2._6_2_ + 1;
      uVar7 = (uint)bVar15;
      bVar15 = in_CX < *puVar2;
      uVar12 = in_CX - *puVar2;
      in_CX = uVar12 - uVar7;
      puVar2 = s__lresult____ld_15b6_00d2._6_2_ + 2;
      uVar7 = (uint)(bVar15 || uVar12 < uVar7);
      uVar12 = uVar6 - *puVar2;
      uVar8 = uVar12 - uVar7;
      puVar1 = s__lresult____ld_15b6_00d2._6_2_ + 3;
      uVar6 = (uint)(uVar6 < *puVar2 || uVar12 < uVar7);
      uVar7 = uVar9 - *puVar1;
      uVar12 = uVar7 - uVar6;
      if (uVar9 < *puVar1 || uVar7 < uVar6) {
        uVar9 = ~uVar8;
        uVar6 = ~in_CX;
        bVar15 = in_BX == 0;
        in_BX = -in_BX;
        in_CX = uVar6 + bVar15;
        uVar6 = (uint)CARRY2(uVar6,(uint)bVar15);
        uVar8 = uVar9 + uVar6;
        uVar12 = ~uVar12 + (uint)CARRY2(uVar9,uVar6);
        bVar5 = bVar5 ^ 1;
      }
      *s__lresult____ld_15b6_00d2._6_2_ = in_BX;
      puVar4[1] = in_CX;
      puVar4[2] = uVar8;
      puVar4[3] = uVar12;
      *(byte *)(puVar4 + 5) = bVar5;
    }
  }
  uVar6 = *s__lresult____ld_15b6_00d2._6_2_;
  uVar9 = s__lresult____ld_15b6_00d2._6_2_[1];
  uVar7 = s__lresult____ld_15b6_00d2._6_2_[2];
  uVar12 = s__lresult____ld_15b6_00d2._6_2_[3];
  puVar13 = s__lresult____ld_15b6_00d2._6_2_ + 6;
  bVar15 = (char)s__lresult____ld_15b6_00d2._6_2_[5] != '\x01';
  if (bVar15) {
    uVar10 = uVar7 >> 1 | (uint)((uVar12 & 1) != 0) << 0xf;
    uVar7 = uVar9 >> 1 | (uint)((uVar7 & 1) != 0) << 0xf;
    uVar9 = uVar6 >> 1 | (uint)((uVar9 & 1) != 0) << 0xf;
    uVar6 = (uint)((uVar6 & 1) != 0);
    uVar11 = uVar9 + uVar6;
    uVar6 = (uint)CARRY2(uVar9,uVar6);
    uVar8 = uVar7 + uVar6;
    uVar6 = (uint)CARRY2(uVar7,uVar6);
    uVar9 = uVar10 + uVar6;
    uVar6 = (uVar12 >> 1 | 0x8000) + (uint)CARRY2(uVar10,uVar6);
  }
  else {
    uVar11 = -uVar6;
    uVar8 = ~uVar9 + (uint)(uVar6 == 0);
    uVar6 = (uint)CARRY2(~uVar9,(uint)(uVar6 == 0));
    uVar9 = ~uVar7 + uVar6;
    uVar6 = ~uVar12 + (uint)CARRY2(~uVar7,uVar6);
  }
  puVar14 = s__lresult____ld_15b6_00d2._6_2_ + 7;
  s__lresult____ld_15b6_00d2._6_2_ = puVar13;
  *puVar13 = uVar11;
  *puVar14 = uVar8;
  puVar4[8] = uVar9;
  puVar4[9] = uVar6;
  puVar4[10] = (uint)bVar15;
  puVar4[0xb] = 0;
  return;
}



void FUN_10d1_1416(void)

{
  uint uVar1;
  uint in_AX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *unaff_SI;
  uint uVar7;
  undefined2 unaff_ES;
  bool bVar8;
  
  uVar7 = *unaff_SI;
  uVar3 = unaff_SI[1];
  uVar1 = unaff_SI[2];
  s__lresult____ld_15b6_00d2._6_2_ = unaff_SI + 5;
  bVar8 = (char)unaff_SI[4] != '\x01';
  if (bVar8) {
    uVar5 = uVar3 >> 1 | (uint)((uVar1 & 1) != 0) << 0xf;
    uVar3 = uVar7 >> 1 | (uint)((uVar3 & 1) != 0) << 0xf;
    uVar2 = in_AX >> 1 | (uint)((uVar7 & 1) != 0) << 0xf;
    uVar7 = (uint)((in_AX & 1) != 0);
    uVar6 = uVar2 + uVar7;
    uVar7 = (uint)CARRY2(uVar2,uVar7);
    uVar2 = uVar3 + uVar7;
    uVar7 = (uint)CARRY2(uVar3,uVar7);
    uVar4 = uVar5 + uVar7;
    uVar7 = (uVar1 >> 1 | 0x8000) + (uint)CARRY2(uVar5,uVar7);
  }
  else {
    uVar6 = -in_AX;
    uVar2 = ~uVar7 + (uint)(in_AX == 0);
    uVar7 = (uint)CARRY2(~uVar7,(uint)(in_AX == 0));
    uVar4 = ~uVar3 + uVar7;
    uVar7 = ~uVar1 + (uint)CARRY2(~uVar3,uVar7);
  }
  *s__lresult____ld_15b6_00d2._6_2_ = uVar6;
  unaff_SI[6] = uVar2;
  unaff_SI[7] = uVar4;
  unaff_SI[8] = uVar7;
  unaff_SI[9] = (uint)bVar8;
  unaff_SI[10] = 0;
  return;
}



void __cdecl16near FUN_10d1_198a(void)

{
  int iVar1;
  undefined2 unaff_SI;
  
  FUN_10d1_00c4();
  FUN_10d1_19c3();
  FUN_10d1_00de();
  iVar1 = s__lresult____ld_15b6_00d2._6_2_ + 0xc;
  FUN_10d1_0b43(iVar1,iVar1,s__lresult____ld_15b6_00d2._6_2_);
  FUN_10d1_0b43(unaff_SI,unaff_SI,iVar1);
  s__lresult____ld_15b6_00d2._6_2_ = s__lresult____ld_15b6_00d2._6_2_ + 0x18;
  return;
}



void __cdecl16near FUN_10d1_19c3(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_SI;
  
  iVar3 = s__lresult____ld_15b6_00d2._6_2_;
  if (-0x40 < *(int *)(unaff_SI + 8)) {
    iVar2 = s__lresult____ld_15b6_00d2._6_2_ + -0xc;
    s__lresult____ld_15b6_00d2._6_2_ = iVar2;
    FUN_10d1_001e();
    piVar1 = (int *)(iVar3 + -4);
    *piVar1 = *piVar1 + 1;
    FUN_10d1_097e(iVar2,iVar2,unaff_SI);
    FUN_10d1_0d13(iVar2,iVar2,unaff_SI);
    FUN_10d1_010f();
    piVar1 = (int *)(s__lresult____ld_15b6_00d2._6_2_ + 8);
    *piVar1 = *piVar1 + 2;
    FUN_10d1_126d();
    FUN_10d1_1375(0x1867,0x4d32);
    FUN_10d1_0b43(unaff_SI,iVar2,s__lresult____ld_15b6_00d2._6_2_);
    piVar1 = (int *)(unaff_SI + 8);
    *piVar1 = *piVar1 + 1;
    s__lresult____ld_15b6_00d2._6_2_ = s__lresult____ld_15b6_00d2._6_2_ + 0x18;
  }
  return;
}



// WARNING: Unable to track spacebase fully for stack

undefined2 __cdecl16near FUN_10d1_1dfd(void)

{
  code *pcVar1;
  byte bVar2;
  undefined2 in_AX;
  undefined2 uVar3;
  byte bVar4;
  undefined2 in_CX;
  undefined2 in_BX;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  
  bVar4 = *(byte *)((int)s__lresult____ld_15b6_00d2 + 4) & 0x3f ^ 0x3f;
  bVar2 = *(byte *)((int)s__lresult____ld_15b6_00d2 + 2) | (byte)((uint)in_CX >> 8);
  if (((bVar2 & bVar4 ^ bVar2) & 8) != 0) {
    bVar2 = bVar2 | 0x20;
  }
  if ((bVar4 & bVar2) != 0) {
    *(byte *)((int)s__lresult____ld_15b6_00d2 + 2) = bVar2 | 0x80;
    if ((bVar2 & bVar4) == 0x20) {
      return in_AX;
    }
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    *(undefined2 *)((int)s__uresult____u_15b6_00c3 + 0xd) = in_BX;
    *(undefined2 *)s__lresult____ld_15b6_00d2 = unaff_ES;
                    // WARNING: Could not recover jumptable at 0x00012b67. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar3 = (*(code *)(ulong)*(uint *)((int)s__uresult____u_15b6_00c3 + 0xd))();
    return uVar3;
  }
  *(byte *)((int)s__lresult____ld_15b6_00d2 + 2) = bVar2 & 0x7f;
  return in_AX;
}



undefined4 __cdecl16near FUN_10d1_1e5c(void)

{
  uint uVar1;
  undefined2 in_DX;
  byte bVar2;
  uint *unaff_SI;
  undefined2 unaff_ES;
  
  uVar1 = *unaff_SI;
  bVar2 = (byte)(uVar1 >> 8);
  return CONCAT22(in_DX,((uint)(byte)((bVar2 >> 4) * '\n' + (bVar2 & 0xf)) * 10 + (uVar1 >> 4 & 0xf)
                        ) * 10 + (uVar1 & 0xf));
}



void __cdecl16near FUN_10d1_1e8b(void)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int unaff_SI;
  uint *unaff_DI;
  undefined2 unaff_ES;
  bool bVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  unaff_DI[5] = (uint)(*(char *)(unaff_SI + 9) < '\0');
  bVar1 = *(byte *)(unaff_SI + 8);
  uVar10 = (uint)(byte)((bVar1 & 0xf) + (char)(((bVar1 & 0xff0) << 4) >> 8) * '\n') * 10000;
  uVar17 = FUN_10d1_1e5c();
  lVar2 = (ulong)((uint)uVar17 + uVar10) * 10000;
  uVar4 = (uint)lVar2;
  uVar8 = (int)((ulong)lVar2 >> 0x10) +
          ((uint)((ulong)uVar17 >> 0x10) & 0xff00 |
          (uint)(byte)((char)((ulong)uVar17 >> 0x10) + (char)((ulong)uVar17 >> 0x18) +
                      CARRY2((uint)uVar17,uVar10))) * 10000;
  uVar17 = FUN_10d1_1e5c();
  uVar10 = (uint)CARRY2((uint)uVar17,uVar4);
  lVar2 = (ulong)((uint)uVar17 + uVar4) * 10000;
  uVar11 = (uint)((ulong)lVar2 >> 0x10);
  uVar5 = (uint)lVar2;
  lVar2 = (ulong)(uVar8 + uVar10) * 10000;
  uVar6 = (uint)lVar2;
  uVar14 = uVar6 + uVar11;
  uVar18 = FUN_10d1_1e5c();
  uVar12 = (uint)((ulong)uVar18 >> 0x10);
  uVar4 = (uint)CARRY2((uint)uVar18,uVar5);
  lVar3 = (ulong)((uint)uVar18 + uVar5) * 10000;
  uVar13 = (uint)((ulong)lVar3 >> 0x10);
  uVar7 = (uint)lVar3;
  lVar3 = (ulong)(uVar14 + uVar12 + uVar4) * 10000;
  uVar5 = (uint)lVar3;
  uVar9 = uVar13 + uVar5;
  uVar11 = (int)((ulong)lVar3 >> 0x10) +
           ((int)((ulong)lVar2 >> 0x10) +
            ((uint)((ulong)uVar17 >> 0x10) & 0xff00 |
            (uint)(byte)((char)((ulong)uVar17 >> 0x10) + (char)((ulong)uVar17 >> 0x18) +
                        CARRY2(uVar8,uVar10))) * 10000 + (uint)CARRY2(uVar6,uVar11) + uVar12 +
           (uint)(CARRY2(uVar14,uVar12) || CARRY2(uVar14 + uVar12,uVar4))) * 10000 +
           (uint)CARRY2(uVar13,uVar5);
  uVar17 = FUN_10d1_1e5c();
  uVar10 = (uint)CARRY2(uVar7,(uint)uVar17);
  uVar4 = (uint)CARRY2(uVar9,uVar10);
  uVar5 = 0x40;
  uVar8 = uVar9 + uVar10;
  uVar9 = (int)((ulong)uVar17 >> 0x10) + (uint)CARRY2(uVar11,uVar4);
  uVar6 = uVar7 + (uint)uVar17;
  uVar10 = uVar11 + uVar4;
  do {
    uVar7 = uVar10;
    uVar4 = uVar6;
    uVar6 = uVar9;
    uVar10 = uVar8;
    if (uVar6 != 0) goto joined_r0x00012c3d;
    uVar5 = uVar5 - 0x10;
    uVar8 = uVar4;
    uVar9 = uVar7;
  } while (uVar5 != 0);
  uVar5 = 0xc001;
LAB_10d1_1f3a:
  *unaff_DI = uVar4;
  unaff_DI[1] = uVar10;
  unaff_DI[2] = uVar7;
  unaff_DI[3] = uVar6;
  unaff_DI[4] = uVar5;
  return;
joined_r0x00012c3d:
  for (; -1 < (int)uVar6; uVar6 = uVar6 * 2 + (uint)bVar15) {
    uVar5 = uVar5 - 1;
    bVar15 = (int)uVar4 < 0;
    uVar4 = uVar4 << 1;
    bVar16 = (int)uVar10 < 0;
    uVar10 = uVar10 << 1 | (uint)bVar15;
    bVar15 = (int)uVar7 < 0;
    uVar7 = uVar7 << 1 | (uint)bVar16;
  }
  goto LAB_10d1_1f3a;
}



undefined2 __cdecl16near FUN_10d1_1f56(void)

{
  byte bVar1;
  undefined2 in_AX;
  byte bVar2;
  uint in_DX;
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  
  bVar1 = (byte)(in_DX / 100);
  bVar2 = (byte)(in_DX % 100);
  *unaff_DI = CONCAT11(bVar1 / 10 << 4 | bVar1 % 10,bVar2 % 10 | bVar2 / 10 << 4);
  return in_AX;
}



void __cdecl16near FUN_10d1_1f74(void)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  uint *unaff_SI;
  byte *unaff_DI;
  undefined2 unaff_ES;
  bool bVar10;
  
  uVar2 = unaff_SI[4];
  uVar3 = unaff_SI[1];
  uVar4 = unaff_SI[3];
  uVar5 = unaff_SI[2];
  if ((int)uVar2 < 0) {
    bVar8 = 0;
  }
  else {
    if (((int)uVar2 < 0x3c) ||
       ((uVar2 - 0x3c == 0 || (int)uVar2 < 0x3c &&
        ((uVar4 < 0xde0b ||
         ((uVar4 < 0xde0c &&
          ((uVar5 < 0x6b3a ||
           ((uVar5 < 0x6b3b && ((uVar3 < 0x763f || ((uVar3 < 0x7640 && (*unaff_SI < 0xfff1))))))))))
         )))))) {
      cVar6 = (char)(uVar2 - 0x3c) + -4;
      do {
        cVar7 = cVar6;
        cVar6 = cVar7 + '\x10';
      } while (cVar6 == '\0' || SCARRY1(cVar7,'\x10') != cVar6 < '\0');
      if (cVar6 < '\x10') {
        do {
          bVar10 = SCARRY1(cVar7,'\x01');
          cVar7 = cVar7 + '\x01';
        } while (bVar10 != cVar7 < '\0');
      }
      FUN_10d1_1f56();
      FUN_10d1_1f56();
      FUN_10d1_1f56();
      bVar8 = FUN_10d1_1f56();
      pbVar1 = unaff_DI;
      unaff_DI = unaff_DI + 1;
      *pbVar1 = bVar8 % 10 | bVar8 / 10 << 4;
      goto LAB_10d1_2021;
    }
    FUN_10d1_1dfd();
    bVar8 = 0x99;
  }
  for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
    pbVar1 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    *pbVar1 = bVar8;
  }
LAB_10d1_2021:
  bVar8 = *(byte *)(unaff_SI + 5);
  *unaff_DI = bVar8 >> 1 | bVar8 << 7;
  return;
}



undefined2 FUN_1334_02ea(void)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  undefined2 in_AX;
  int iVar4;
  undefined2 uVar5;
  undefined4 in_stack_00000000;
  
  uVar5 = (undefined2)((ulong)in_stack_00000000 >> 0x10);
  iVar4 = (int)in_stack_00000000;
  uVar2 = *(uint *)(iVar4 + -1);
  bVar3 = (char)uVar2 - 0x34;
  if (bVar3 < 8) {
    piVar1 = (int *)(iVar4 + -2);
    *piVar1 = *piVar1 + -0x5c32;
  }
  else {
    if (bVar3 < 9) {
      if ((uVar2 & 0x2000) == 0) {
        *(undefined *)(iVar4 + -2) = 0x9b;
        *(int *)(iVar4 + -1) = ((uVar2 & 0x700 | (uVar2 >> 8 & 0x7c0) >> 3) ^ 0x18) + 0xd826;
      }
    }
    else {
      if (bVar3 < 10) {
        *(undefined2 *)(iVar4 + -2) = 0x9b90;
      }
    }
  }
  return in_AX;
}



void FUN_1375_0007(undefined2 param_1_00,int *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint local_4;
  
  if (((uint)DAT_1616_00be | DAT_1616_00c0) != 0) {
    uVar3 = (*DAT_1616_00be)(0x1000,8,0,0);
    local_4 = (uint)((ulong)uVar3 >> 0x10);
    pcVar2 = (code *)uVar3;
    (*DAT_1616_00be)(0x1000,8,uVar3);
    if ((local_4 == 0) && (pcVar2 == (code *)((int)&DAT_15b6_0000 + 1))) {
      return;
    }
    if (((uint)pcVar2 | local_4) != 0) {
      (*DAT_1616_00be)(0x1000,8,0,0);
      (*pcVar2)(0x1000,8,*(undefined2 *)((*param_1 + -1) * 6 + 0x206));
      return;
    }
  }
  iVar1 = (*param_1 + -1) * 6;
  FUN_15b1_000b(0x1000,0x3b0,0x15b6,0x273,0x15b6,*(undefined2 *)(iVar1 + 0x208),
                *(undefined2 *)(iVar1 + 0x20a));
  FUN_1380_000e(0x15b1);
  FUN_1000_010d(0x1380,1);
  return;
}



void FUN_1380_000e(void)

{
  FUN_1000_02bd(0x1000);
  return;
}



void __cdecl16near FUN_138d_000c(void)

{
  uint in_CX;
  byte in_DL;
  uint in_BX;
  undefined2 unaff_ES;
  
  if ((in_DL & 0x5f) == 0x47) {
    do {
      if (*(char *)(in_BX - 1) != '0') {
        return;
      }
      in_BX = in_BX - 1;
    } while (in_CX < in_BX);
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_138d_002b(undefined2 param_1_00,undefined2 param_1,char param_2,byte param_3,
                  undefined2 *param_4,uint param_5)

{
  undefined2 *puVar1;
  char *pcVar2;
  int *piVar3;
  ulong uVar4;
  undefined uVar5;
  int iVar6;
  undefined2 uVar7;
  char cVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  undefined2 *puVar12;
  char *pcVar13;
  int *piVar14;
  int *piVar15;
  undefined2 uVar16;
  undefined2 unaff_SS;
  undefined2 local_32;
  char acStack48 [42];
  int local_6;
  uint local_4;
  
  if (0x28 < param_5) {
    param_5 = 0x28;
  }
  local_4 = param_5;
  if ((param_3 & 0xdf) == 0x46) {
    if (0x7fff < param_5) {
      param_5 = 0;
    }
LAB_138d_0064:
    if ((param_3 & 0xdf) != 0x46) {
      param_5 = param_5 + 1;
    }
  }
  else {
    if (0 < (int)param_5) goto LAB_138d_0064;
  }
  puVar12 = &local_32;
  iVar6 = FUN_13a8_000c(0x1000,param_1,puVar12);
  uVar16 = (undefined2)((ulong)param_4 >> 0x10);
  piVar14 = (int *)param_4;
  if (iVar6 == 0x7fff) {
    uVar7 = 0x492b;
    if (local_6 != 0) {
      uVar7 = 0x492d;
    }
    *param_4 = uVar7;
    piVar10 = piVar14 + 2;
    piVar14[1] = 0x464e;
    goto LAB_138d_01af;
  }
  if (iVar6 == 0x7ffe) {
    uVar7 = 0x4e2b;
    if (local_6 != 0) {
      uVar7 = 0x4e2d;
    }
    *param_4 = uVar7;
    piVar10 = piVar14 + 2;
    piVar14[1] = CONCAT11((char)((uint)uVar7 >> 8),0x41);
    goto LAB_138d_01af;
  }
  piVar15 = piVar14;
  if ((char)local_6 != '\0') {
    piVar15 = (int *)((int)piVar14 + 1);
    *(undefined *)param_4 = 0x2d;
  }
  if ((((param_3 & 0x5f) != 0x46) &&
      ((((param_3 & 0x5f) == 0x45 || (iVar6 < -3)) || ((int)param_5 < iVar6)))) || (0x28 < iVar6)) {
    pcVar13 = acStack48;
    piVar14 = (int *)((int)piVar15 + 1);
    *(char *)piVar15 = (char)local_32;
    cVar8 = (char)((uint)local_32 >> 8);
    if (cVar8 != '\0') {
      piVar3 = piVar14;
      piVar14 = piVar15 + 1;
      *(undefined *)piVar3 = 0x2e;
      do {
        piVar3 = piVar14;
        piVar14 = (int *)((int)piVar14 + 1);
        *(char *)piVar3 = cVar8;
        pcVar2 = pcVar13;
        pcVar13 = pcVar13 + 1;
        cVar8 = *pcVar2;
      } while (cVar8 != '\0');
      if (param_2 == '\0') {
        FUN_138d_000c();
      }
    }
    *(byte *)piVar14 = param_3 & 0x20 | 0x45;
    uVar5 = 0x2b;
    uVar11 = iVar6 - 1;
    if (iVar6 < 1) {
      uVar5 = 0x2d;
      uVar11 = -uVar11;
    }
    piVar15 = piVar14 + 1;
    *(undefined *)((int)piVar14 + 1) = uVar5;
    if (99 < uVar11) {
      if (999 < uVar11) {
        uVar4 = SEXT24((int)uVar11);
        uVar11 = (uint)(uVar4 % 1000);
        piVar3 = piVar15;
        piVar15 = (int *)((int)piVar14 + 3);
        *(char *)piVar3 = (char)(uVar4 / 1000) + '0';
      }
      piVar3 = piVar15;
      piVar15 = (int *)((int)piVar15 + 1);
      *(char *)piVar3 = (char)(uVar11 / 100) + '0';
      uVar11 = SEXT12((char)(uVar11 % 100));
    }
    piVar10 = piVar15 + 1;
    *piVar15 = (uVar11 / 10 & 0xff | uVar11 % 10 << 8) + 0x3030;
    goto LAB_138d_01af;
  }
  if (iVar6 < 1) {
    piVar3 = piVar15;
    piVar15 = piVar15 + 1;
    *piVar3 = 0x2e30;
    iVar9 = 1;
    if (iVar6 != 0) {
      do {
        piVar3 = piVar15;
        piVar15 = (int *)((int)piVar15 + 1);
        *(undefined *)piVar3 = 0x30;
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0);
      goto LAB_138d_0102;
    }
  }
  else {
LAB_138d_0102:
    iVar9 = 0;
  }
  while( true ) {
    piVar10 = piVar15;
    puVar1 = puVar12;
    puVar12 = (undefined2 *)((int)puVar12 + 1);
    cVar8 = *(char *)puVar1;
    if (cVar8 == '\0') break;
    *(char *)piVar10 = cVar8;
    iVar6 = iVar6 + -1;
    piVar15 = (int *)((int)piVar10 + 1);
    if (iVar6 == 0) {
      *(undefined *)(int *)((int)piVar10 + 1) = 0x2e;
      iVar9 = iVar9 + 1;
      piVar15 = piVar10 + 1;
    }
  }
  if (iVar9 + local_4 < param_5) {
    iVar9 = param_5 - (iVar9 + local_4);
    iVar6 = iVar6 + iVar9;
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      piVar3 = piVar10;
      piVar10 = (int *)((int)piVar10 + 1);
      *(undefined *)piVar3 = 0x30;
    }
    iVar6 = iVar6 + -1;
    if (iVar6 != 0) goto LAB_138d_012c;
  }
  else {
LAB_138d_012c:
    if ((iVar6 != 1) && (param_2 == '\0')) {
      FUN_138d_000c();
    }
  }
  if (piVar10 == piVar14) {
    piVar3 = piVar10;
    piVar10 = (int *)((int)piVar10 + 1);
    *(undefined *)piVar3 = 0x30;
  }
LAB_138d_01af:
  *(undefined *)piVar10 = 0;
  return;
}



void FUN_13a8_000c(undefined2 param_1_00,uint param_1)

{
  uint *puVar1;
  undefined4 in_stack_00000010;
  
  puVar1 = (uint *)(param_1 + (int)in_stack_00000010);
  *puVar1 = *puVar1 & 0x7fff;
                    // WARNING: Could not recover jumptable at 0x00013aaf. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)((param_1 >> 2) * 2 + 0x34))();
  return;
}



undefined2 FUN_13c6_0006(undefined2 param_1_00,uint param_1)

{
  if ((int)param_1 < 0) {
    if (-param_1 < 0x23 || param_1 == 0xffdd) {
      DAT_15b6_007f = -param_1;
      DAT_15b6_030e = 0xffff;
      return 0xffff;
    }
  }
  else {
    if (param_1 < 0x59) goto LAB_13c6_0019;
  }
  param_1 = 0x57;
LAB_13c6_0019:
  DAT_15b6_007f = (int)*(char *)(param_1 + 0x310);
  DAT_15b6_030e = param_1;
  return 0xffff;
}



void __cdecl16far FUN_13c6_0041(void)

{
  return;
}



void FUN_13ca_0002(undefined2 param_1_00,undefined2 param_1)

{
  int iVar1;
  code **ppcVar2;
  
  while (iVar1 = DAT_15b6_0378 + -1, DAT_15b6_0378 != 0) {
    ppcVar2 = (code **)(iVar1 * 4 + 0x62e);
    DAT_15b6_0378 = iVar1;
    (**ppcVar2)(0x1000);
  }
  DAT_15b6_0378 = iVar1;
  (*DAT_15b6_036a)(0x1000);
  (*DAT_15b6_036e)(0x1000);
  (*DAT_15b6_0372)(0x1000);
  FUN_1000_010d(0x1000,param_1);
  return;
}



bool FUN_13ca_0035(undefined2 param_1_00,undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = DAT_15b6_0378 != 0x20;
  if (bVar2) {
    iVar1 = DAT_15b6_0378 * 4;
    *(undefined2 *)(iVar1 + 0x630) = param_2;
    *(undefined2 *)(iVar1 + 0x62e) = param_1;
    DAT_15b6_0378 = DAT_15b6_0378 + 1;
  }
  return !bVar2;
}



void FUN_13d0_0004(undefined2 param_1_00,undefined2 param_1)

{
  FUN_13d0_0205(0x1000,param_1,0);
  return;
}



void FUN_13d0_0019(undefined2 param_1_00,undefined4 param_1)

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
          (undefined *)((int)s_Turbo_C___Copyright__c__1988_Bor_15b6_0004 + 2);
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  DAT_15b6_0384 = *(undefined2 *)(iVar4 + 0xe);
  DAT_15b6_0382 = *(int *)(iVar4 + 0xc);
  FUN_1000_076c(0x1000);
  uVar3 = DAT_15b6_0384;
  iVar2 = DAT_15b6_0382;
  if (bVar6) {
    DAT_15b6_0382 = 0;
    DAT_15b6_0384 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(iVar4 + 8);
    local_4 = (undefined2)((ulong)uVar1 >> 0x10);
    local_6 = (int)uVar1;
    *(undefined2 *)(DAT_15b6_0382 + 10) = local_4;
    *(int *)(iVar2 + 8) = local_6;
    iVar2 = DAT_15b6_0382;
    *(undefined2 *)(local_6 + 0xe) = DAT_15b6_0384;
    *(int *)(local_6 + 0xc) = iVar2;
  }
  return;
}



ulong FUN_13d0_0081(undefined2 param_1_00,uint *param_1,uint param_2,int param_3)

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
  piVar7 = (int *)FUN_1000_0711(0x1000);
  uVar4 = (undefined2)((ulong)piVar7 >> 0x10);
  iVar3 = (int)piVar7;
  param_3 = param_3 + (uint)(0xfffe < param_2);
  bVar6 = param_3 == 0;
  *(int *)(iVar3 + 2) = param_3;
  *piVar7 = param_2 + 1;
  *(undefined2 *)(iVar3 + 6) = uVar5;
  *(int *)(iVar3 + 4) = (int)param_1;
  FUN_1000_076c(0x1000);
  piVar1 = piVar7;
  if (!bVar6) {
    uVar8 = FUN_1000_0711(0x1000);
    uVar5 = (undefined2)((ulong)uVar8 >> 0x10);
    *(undefined2 *)((int)uVar8 + 6) = uVar4;
    *(int *)((int)uVar8 + 4) = iVar3;
    piVar1 = (int *)CONCAT22(DAT_15b6_0380,DAT_15b6_037e);
  }
  DAT_15b6_0380 = (undefined2)((ulong)piVar1 >> 0x10);
  DAT_15b6_037e = SUB42(piVar1,0);
  return (ulong)piVar7 & 0xffff0000 | (ulong)(iVar3 + 8);
}



ulong FUN_13d0_0131(undefined2 param_1_00,uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  int *piVar4;
  
  piVar4 = (int *)FUN_1401_00db(0x1000,param_1,param_2);
  uVar3 = (undefined2)((ulong)piVar4 >> 0x10);
  iVar1 = (int)piVar4;
  if (piVar4 == (int *)0xffffffff) {
    piVar4 = (int *)(ulong)DAT_15b6_037e;
    uVar2 = 0;
  }
  else {
    *(undefined2 *)(iVar1 + 6) = DAT_15b6_0380;
    *(uint *)(iVar1 + 4) = DAT_15b6_037e;
    *(int *)(iVar1 + 2) = param_2 + (uint)(0xfffe < param_1);
    *piVar4 = param_1 + 1;
    uVar2 = iVar1 + 8;
    DAT_15b6_0380 = uVar3;
  }
  DAT_15b6_037e = (uint)piVar4;
  return (ulong)piVar4 & 0xffff0000 | (ulong)uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_13d0_019f(undefined2 param_1_00,uint param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  int *piVar3;
  
  piVar3 = (int *)FUN_1401_00db(0x1000,param_1,param_2);
  uVar2 = (undefined2)((ulong)piVar3 >> 0x10);
  if (piVar3 == (int *)0xffffffff) {
    uVar2 = 0;
    iVar1 = 0;
  }
  else {
    _DAT_15b6_037a = piVar3;
    _DAT_15b6_037e = piVar3;
    *(int *)((int)piVar3 + 2) = param_2 + (uint)(0xfffe < param_1);
    *piVar3 = param_1 + 1;
    iVar1 = (int)piVar3 + 8;
  }
  DAT_15b6_0380 = (undefined2)((ulong)_DAT_15b6_037e >> 0x10);
  DAT_15b6_037c = (undefined2)((ulong)_DAT_15b6_037a >> 0x10);
  return CONCAT22(uVar2,iVar1);
}



int FUN_13d0_0205(undefined2 param_1_00,uint param_1,uint param_2)

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
    FUN_1000_076c(0x1000);
    if (bVar7) {
      iVar3 = FUN_13d0_019f(0x1000,uVar4,param_2);
    }
    else {
      local_6 = (uint *)CONCAT22(DAT_15b6_0384,DAT_15b6_0382);
      uVar8 = 1;
      FUN_1000_076c(0x1000);
      while (!(bool)uVar8) {
        uVar6 = (undefined2)((ulong)local_6 >> 0x10);
        iVar3 = (int)local_6;
        uVar2 = *(uint *)(iVar3 + 2);
        uVar5 = param_2 + (0xffcf < uVar4);
        if ((uVar5 <= uVar2) && ((uVar2 != uVar5 || (uVar4 + 0x30 <= *local_6)))) {
          iVar3 = FUN_13d0_0081(0x1000,iVar3,uVar6,uVar4,param_2);
          return iVar3;
        }
        uVar2 = *(uint *)(iVar3 + 2);
        uVar8 = uVar2 == param_2;
        if ((param_2 <= uVar2) && ((!(bool)uVar8 || (uVar8 = *local_6 == uVar4, uVar4 <= *local_6)))
           ) {
          FUN_13d0_0019(0x1000,iVar3,uVar6);
          uVar4 = *local_6;
          *local_6 = *local_6 + 1;
          piVar1 = (int *)(iVar3 + 2);
          *piVar1 = *piVar1 + (uint)(0xfffe < uVar4);
          return iVar3 + 8;
        }
        local_6 = *(uint **)(iVar3 + 0xc);
        FUN_1000_076c(0x1000);
      }
      iVar3 = FUN_13d0_0131(0x1000,uVar4,param_2);
    }
  }
  return iVar3;
}



undefined2 FUN_1401_0004(undefined4 param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  
  uVar1 = (param_1._2_2_ - DAT_15b6_007b) + 0x40;
  if (uVar1 >> 6 == DAT_15b6_0386) {
    uVar2 = 1;
    DAT_15b6_008b = (int)param_1;
    DAT_15b6_008d = param_1._2_2_;
  }
  else {
    uVar1 = uVar1 & 0xffc0;
    if (DAT_15b6_0091 < uVar1 + DAT_15b6_007b) {
      uVar1 = DAT_15b6_0091 - DAT_15b6_007b;
    }
    iVar3 = FUN_1417_000c(0x1000,DAT_15b6_007b,uVar1);
    if (iVar3 == -1) {
      DAT_15b6_0386 = uVar1 >> 6;
      DAT_15b6_008d = param_1._2_2_;
      uVar2 = 1;
      DAT_15b6_008b = (int)param_1;
    }
    else {
      DAT_15b6_0091 = DAT_15b6_007b + iVar3;
      DAT_15b6_008f = 0;
      uVar2 = 0;
    }
  }
  return uVar2;
}



undefined2 FUN_1401_0094(undefined2 param_1_00,undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined in_CF;
  undefined in_ZF;
  
  FUN_1000_076c(0x1000);
  if (((!(bool)in_CF) && (FUN_1000_076c(0x1000), (bool)in_CF || (bool)in_ZF)) &&
     (iVar1 = FUN_1401_0004(param_1,param_2), iVar1 != 0)) {
    return 0;
  }
  return 0xffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1401_00db(undefined2 param_1_00,int param_1,uint param_2)

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
LAB_1401_00f7:
    uVar6 = FUN_1000_0711(0x1000);
    FUN_1000_076c(0x1000,uVar6);
    if (!(bool)uVar4) {
      FUN_1000_076c(0x1000);
      if ((bool)uVar4 || (bool)uVar5) {
        uVar3 = (undefined2)((ulong)_DAT_15b6_008b >> 0x10);
        uVar1 = (undefined2)_DAT_15b6_008b;
        iVar2 = FUN_1401_0004(uVar6);
        if (iVar2 == 0) {
          uVar3 = 0xffff;
          uVar1 = 0xffff;
        }
        goto LAB_1401_0168;
      }
    }
    uVar3 = 0xffff;
    uVar1 = 0xffff;
  }
  else {
    if ((int)param_2 < 0x11) {
      uVar4 = false;
      uVar5 = param_1 == 0;
      if ((bool)uVar5) goto LAB_1401_00f7;
    }
    uVar3 = 0xffff;
    uVar1 = 0xffff;
  }
LAB_1401_0168:
  return CONCAT22(uVar3,uVar1);
}



undefined2 FUN_1417_000c(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if ((bool)in_CF) {
    FUN_13c6_0006(0x1000);
  }
  else {
    uVar2 = 0xffff;
  }
  return uVar2;
}



uint FUN_1419_000c(undefined2 *param_1,uint *param_2,char *param_3)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined2 local_6;
  char local_3;
  
  pcVar3 = param_3;
  local_6 = 0;
  uVar2 = (ulong)param_3 & 0xffff0000;
  param_3 = (char *)(uVar2 | (int)param_3 + 1);
  cVar1 = *pcVar3;
  if (cVar1 == 'r') {
    uVar4 = 1;
    uVar5 = 1;
  }
  else {
    if (cVar1 == 'w') {
      uVar4 = 0x302;
      local_6 = 0x80;
      uVar5 = 2;
    }
    else {
      if (cVar1 != 'a') {
        return 0;
      }
      uVar4 = 0x902;
      local_6 = 0x80;
      uVar5 = 2;
    }
  }
  local_3 = *param_3;
  param_3 = (char *)(uVar2 | (int)param_3 + 2);
  if ((local_3 == '+') || ((*param_3 == '+' && ((local_3 == 't' || (local_3 == 'b')))))) {
    if (local_3 == '+') {
      local_3 = *param_3;
    }
    uVar4 = uVar4 & 0xfffc | 4;
    local_6 = 0x180;
    uVar5 = 3;
  }
  if (local_3 == 't') {
    uVar4 = uVar4 | 0x4000;
  }
  else {
    if (local_3 == 'b') {
      uVar4 = uVar4 | 0x8000;
      uVar5 = uVar5 | 0x40;
    }
    else {
      uVar4 = uVar4 | DAT_15b6_0540 & 0xc000;
      if ((DAT_15b6_0540 & 0x8000) != 0) {
        uVar5 = uVar5 | 0x40;
      }
    }
  }
  DAT_15b6_0370 = 0x14a3;
  DAT_15b6_036e = 0xf;
  *param_2 = uVar4;
  *param_1 = local_6;
  return uVar5;
}



undefined4
FUN_1419_00fe(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined4 param_5)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar6 = 0x1000;
  iVar3 = FUN_1419_000c(&local_4,unaff_SS,&local_6,unaff_SS,param_1,param_2);
  uVar5 = (undefined2)((ulong)param_5 >> 0x10);
  iVar4 = (int)param_5;
  *(int *)(iVar4 + 2) = iVar3;
  if (iVar3 == 0) {
LAB_1419_014b:
    *(undefined *)(iVar4 + 4) = 0xff;
    *(undefined2 *)(iVar4 + 2) = 0;
    uVar5 = 0;
    iVar4 = 0;
  }
  else {
    if (*(char *)(iVar4 + 4) < '\0') {
      uVar6 = 0x1446;
      cVar2 = FUN_1446_003a(0x1000,param_3,param_4,local_6,local_4);
      *(char *)(iVar4 + 4) = cVar2;
      if (cVar2 < '\0') goto LAB_1419_014b;
    }
    iVar3 = FUN_147c_0004(uVar6,(int)*(char *)(iVar4 + 4));
    if (iVar3 != 0) {
      puVar1 = (uint *)(iVar4 + 2);
      *puVar1 = *puVar1 | 0x200;
    }
    iVar3 = FUN_147d_0006(0x147c,iVar4,uVar5,0,0,(*(uint *)(iVar4 + 2) & 0x200) != 0,0x200);
    if (iVar3 == 0) {
      *(undefined2 *)(iVar4 + 0x10) = 0;
    }
    else {
      FUN_1491_0008(0x147d,iVar4,uVar5);
      uVar5 = 0;
      iVar4 = 0;
    }
  }
  return CONCAT22(uVar5,iVar4);
}



undefined4 __cdecl16near FUN_1419_01d7(void)

{
  uint uVar1;
  bool bVar2;
  uint local_6;
  undefined2 local_4;
  
  local_4 = 0x15b6;
  local_6 = 0x388;
  do {
    if (*(char *)(local_6 + 4) < '\0') break;
    uVar1 = local_6 + 0x14;
    bVar2 = local_6 < 0x518;
    local_6 = uVar1;
  } while (bVar2);
  if (-1 < *(char *)(local_6 + 4)) {
    local_4 = 0;
    local_6 = 0;
  }
  return CONCAT22(local_4,local_6);
}



undefined2
FUN_1419_0224(undefined2 param_1_00,undefined2 param_1,undefined2 param_2,undefined2 param_3,
             undefined2 param_4)

{
  undefined2 uVar1;
  long lVar2;
  
  lVar2 = FUN_1419_01d7();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1419_00fe(param_3,param_4,param_1,param_2,lVar2);
  }
  return uVar1;
}



undefined2
FUN_1419_025a(undefined2 param_1_00,undefined2 param_1,undefined2 param_2,undefined2 param_3,
             undefined2 param_4,undefined4 param_5)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_5 >> 0x10);
  iVar1 = (int)param_5;
  if (*(int *)(iVar1 + 0x12) == iVar1) {
    FUN_1491_0008(0x1000,iVar1,uVar2);
    uVar2 = FUN_1419_00fe(param_3,param_4,param_1,param_2,iVar1,uVar2);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined2 FUN_1419_0295(undefined2 param_1_00,int param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  long lVar2;
  
  if (-1 < param_1) {
    lVar2 = FUN_1419_01d7();
    if (lVar2 != 0) {
      *(undefined *)((int)lVar2 + 4) = (undefined)param_1;
      uVar1 = FUN_1419_00fe(param_2,param_3,0,0,lVar2);
      return uVar1;
    }
  }
  return 0;
}



void FUN_1446_0007(void)

{
  code *pcVar1;
  undefined in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    FUN_13c6_0006(0x1000);
  }
  return;
}



void FUN_1446_0026(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



int FUN_1446_003a(undefined2 param_1_00,undefined2 param_1,undefined2 param_2,uint param_3,
                 uint param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  bool bVar6;
  
  uVar5 = 0x1000;
  if ((param_3 & 0xc000) == 0) {
    param_3 = param_3 | DAT_15b6_0540 & 0xc000;
  }
  if ((param_3 & 0x100) == 0) {
LAB_1446_00fb:
    bVar6 = false;
  }
  else {
    param_4 = param_4 & DAT_15b6_0542;
    uVar4 = uVar5;
    if ((param_4 & 0x180) == 0) {
      uVar4 = 0x13c6;
      FUN_13c6_0006(0x1000,1);
    }
    uVar5 = 0x14ed;
    iVar2 = FUN_14ed_0009(uVar4,param_1,param_2,0);
    if (iVar2 != -1) {
      if ((param_3 & 0x400) != 0) {
        iVar2 = FUN_13c6_0006(0x14ed,0x50);
        return iVar2;
      }
      goto LAB_1446_00fb;
    }
    bVar6 = (param_4 & 0x80) == 0;
    if ((param_3 & 0xf0) == 0) {
      iVar2 = FUN_1446_0007(bVar6,param_1,param_2);
      if (iVar2 < 0) {
        return iVar2;
      }
      goto LAB_1446_017c;
    }
    iVar2 = FUN_1446_0007(0,param_1,param_2);
    if (iVar2 < 0) {
      return iVar2;
    }
    uVar5 = 0x14a1;
    FUN_14a1_0009(0x14ed,iVar2);
  }
  iVar2 = FUN_1460_0007(uVar5,param_1,param_2,param_3);
  if (-1 < iVar2) {
    bVar1 = FUN_1479_0007(0x1460,iVar2,0);
    if ((bVar1 & 0x80) == 0) {
      uVar3 = param_3;
      if ((param_3 & 0x200) != 0) {
        FUN_1446_0026(iVar2);
      }
    }
    else {
      uVar3 = param_3 | 0x2000;
      if ((param_3 & 0x8000) != 0) {
        FUN_1479_0007(0x1479,iVar2,1,bVar1 | 0x20,0);
      }
    }
    param_3 = uVar3;
    if ((bVar6) && ((uVar3 & 0xf0) != 0)) {
      FUN_14ed_0009(0x1479,param_1,param_2,1,1);
    }
  }
LAB_1446_017c:
  if (-1 < iVar2) {
    if ((param_3 & 0x300) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x1000;
    }
    *(uint *)(iVar2 * 2 + 0x518) = uVar3 | param_3 & 0xf8ff;
  }
  return iVar2;
}



int FUN_1460_0007(void)

{
  code *pcVar1;
  int iVar2;
  undefined2 unaff_BP;
  bool bVar3;
  uint in_stack_00000008;
  
  bVar3 = false;
  pcVar1 = (code *)swi(0x21);
  iVar2 = (*pcVar1)();
  if (bVar3) {
    iVar2 = FUN_13c6_0006(0x1000,iVar2);
  }
  else {
    *(uint *)(iVar2 * 2 + 0x518) = in_stack_00000008 & 0xf8ff | 0x8000;
  }
  return iVar2;
}



// WARNING: Could not reconcile some variable overlaps

int FUN_1465_0004(int *param_1)

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



undefined2 FUN_1465_0052(undefined2 param_1_00,int *param_1,uint param_3,int param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  
  iVar2 = FUN_14ef_000a(0x1000,(int)param_1,param_1._2_2_);
  if (iVar2 == 0) {
    if ((param_5 == 1) && (0 < *param_1)) {
      uVar4 = FUN_1465_0004((int)param_1,param_1._2_2_);
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
    lVar6 = FUN_14ca_0002(0x14ef,(int)*(char *)((int)param_1 + 4),param_3,param_4,param_5);
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



long FUN_1465_00e0(undefined2 param_1_00,int *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_14ef_000a(0x1000,(int)param_1,param_1._2_2_);
  if (iVar1 == 0) {
    lVar2 = FUN_15b4_0000(0x14ef,(int)*(char *)((int)param_1 + 4));
    if (0 < *param_1) {
      iVar1 = FUN_1465_0004((int)param_1,param_1._2_2_);
      lVar2 = lVar2 - iVar1;
    }
  }
  else {
    lVar2 = -1;
  }
  return lVar2;
}



undefined2 FUN_1479_0007(undefined2 param_1_00,undefined2 param_1,int param_2)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined in_CF;
  undefined4 uVar3;
  
  pcVar1 = (code *)swi(0x21);
  uVar3 = (*pcVar1)();
  uVar2 = (undefined2)uVar3;
  if ((bool)in_CF) {
    uVar2 = FUN_13c6_0006(0x1000);
  }
  else {
    if (param_2 == 0) {
      uVar2 = (int)((ulong)uVar3 >> 0x10);
    }
  }
  return uVar2;
}



uint FUN_147c_0004(void)

{
  code *pcVar1;
  uint extraout_DX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return extraout_DX & 0x80;
}



undefined2
FUN_147d_0006(undefined2 param_1_00,int *param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  uint *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  long lVar6;
  
  lVar6 = CONCAT22(param_3,param_2);
  uVar4 = 0x1000;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (((*(int *)(iVar2 + 0x12) == iVar2) && (param_4 < 3)) && (param_5 < 0x8000)) {
    if ((DAT_15b6_0546 == 0) && (iVar2 == 0x39c)) {
      DAT_15b6_0546 = 1;
    }
    else {
      if ((DAT_15b6_0544 == 0) && (iVar2 == 0x388)) {
        DAT_15b6_0544 = 1;
      }
    }
    if (*param_1 != 0) {
      uVar4 = 0x1465;
      FUN_1465_0052(0x1000,iVar2,uVar3,0,0,1);
    }
    uVar5 = uVar4;
    if ((*(uint *)(iVar2 + 2) & 4) != 0) {
      uVar5 = 0x157f;
      FUN_157f_0004(uVar4,*(undefined2 *)(iVar2 + 8),*(undefined2 *)(iVar2 + 10));
    }
    puVar1 = (uint *)(iVar2 + 2);
    *puVar1 = *puVar1 & 0xfff3;
    *(undefined2 *)(iVar2 + 6) = 0;
    *(undefined2 *)(iVar2 + 10) = uVar3;
    *(int *)(iVar2 + 8) = iVar2 + 5;
    *(undefined2 *)(iVar2 + 0xe) = uVar3;
    *(int *)(iVar2 + 0xc) = iVar2 + 5;
    if ((param_4 != 2) && (param_5 != 0)) {
      DAT_15b6_036c = 0x14a7;
      DAT_15b6_036a = 7;
      if ((param_2 | param_3) == 0) {
        lVar6 = FUN_13d0_0004(uVar5,param_5);
        if (lVar6 == 0) {
          return 0xffff;
        }
        puVar1 = (uint *)(iVar2 + 2);
        *puVar1 = *puVar1 | 4;
      }
      param_3 = (uint)((ulong)lVar6 >> 0x10);
      param_2 = (uint)lVar6;
      *(undefined2 *)(iVar2 + 0xe) = param_3;
      *(undefined2 *)(iVar2 + 0xc) = param_2;
      *(undefined2 *)(iVar2 + 10) = param_3;
      *(undefined2 *)(iVar2 + 8) = param_2;
      *(uint *)(iVar2 + 6) = param_5;
      if (param_4 == 1) {
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



undefined2 FUN_1491_0008(undefined2 param_1_00,int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  
  uVar5 = 0x1000;
  uVar3 = 0xffff;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x12) == iVar2) {
    uVar6 = uVar5;
    if (*(int *)(iVar2 + 6) != 0) {
      if (*param_1 < 0) {
        uVar5 = 0x14ef;
        iVar1 = FUN_14ef_000a(0x1000,iVar2,uVar4);
        if (iVar1 != 0) {
          return 0xffff;
        }
      }
      uVar6 = uVar5;
      if ((*(uint *)(iVar2 + 2) & 4) != 0) {
        uVar6 = 0x157f;
        FUN_157f_0004(uVar5,*(undefined2 *)(iVar2 + 8),*(undefined2 *)(iVar2 + 10));
      }
    }
    uVar5 = uVar6;
    if (-1 < *(char *)(iVar2 + 4)) {
      uVar5 = 0x149e;
      uVar3 = FUN_149e_0008(uVar6,(int)*(char *)(iVar2 + 4));
    }
    *(undefined2 *)(iVar2 + 2) = 0;
    *(undefined2 *)(iVar2 + 6) = 0;
    *param_1 = 0;
    *(undefined *)(iVar2 + 4) = 0xff;
    if (*(int *)(iVar2 + 0x10) != 0) {
      uVar7 = FUN_14dc_000b(uVar5,*(undefined2 *)(iVar2 + 0x10),0,0);
      FUN_14e7_000b(0x14dc,uVar7);
      *(undefined2 *)(iVar2 + 0x10) = 0;
    }
  }
  else {
    uVar3 = 0xffff;
  }
  return uVar3;
}



void FUN_149e_0008(undefined2 param_1_00,int param_1)

{
  if ((param_1 < 0) || (0x13 < param_1)) {
    FUN_13c6_0006(0x1000,6);
  }
  else {
    *(undefined2 *)(param_1 * 2 + 0x518) = 0xffff;
    FUN_14a1_0009(0x1000,param_1);
  }
  return;
}



undefined2 FUN_14a1_0009(undefined2 param_1_00,int param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = FUN_13c6_0006(0x1000,uVar2);
  }
  else {
    *(undefined2 *)(param_1 * 2 + 0x518) = 0xffff;
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Removing unreachable block (ram,0x00014b9b)
// WARNING: Removing unreachable block (ram,0x00014bfe)
// WARNING: Could not reconcile some variable overlaps

int FUN_14ab_0001(undefined2 param_1_00,int param_1,ulong param_2,int param_4)

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
  else {
    if ((*(uint *)(param_1 * 2 + 0x518) & 0x8000) == 0) {
      puVar2 = (uint *)(param_1 * 2 + 0x518);
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
        if ((puVar4 >= puVar1) && ((puVar4 < puVar1 || (0x7f < (uint)((int)puVar4 - (int)puVar1)))))
        {
          iVar6 = FUN_14c1_0007(uVar7,param_1,local_84);
          if (iVar6 != (int)puVar4 - (int)local_84) {
            return ((param_4 - local_8c) + iVar6) - ((int)puVar4 - (int)local_84);
          }
          _local_90 = (char *)CONCAT22(unaff_SS,local_84);
          uVar7 = 0x14c1;
        }
      }
      local_90 = local_90 - (int)local_84;
      if ((local_90 != 0) && (iVar6 = FUN_14c1_0007(uVar7,param_1,local_84), iVar6 != local_90)) {
        param_4 = (param_4 + iVar6) - local_90;
      }
    }
    else {
      param_4 = FUN_14c1_0007(0x1000,param_1,(undefined2)param_2,param_2._2_2_,param_4);
    }
  }
  return param_4;
}



undefined2 FUN_14c1_0007(undefined2 param_1_00,int param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined uVar5;
  undefined2 in_stack_00000000;
  
  uVar4 = 0x1000;
  uVar5 = 0;
  if ((*(uint *)(param_1 * 2 + 0x518) & 0x800) != 0) {
    uVar5 = 0;
    uVar4 = 0x14ca;
    FUN_14ca_0002(0x1000,param_1,0,0,2);
  }
  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  if ((bool)uVar5) {
    uVar3 = FUN_13c6_0006(uVar4);
  }
  else {
    puVar1 = (uint *)(param_1 * 2 + 0x518);
    *puVar1 = *puVar1 | 0x1000;
  }
  return uVar3;
}



uint FUN_14c6_0003(undefined2 param_1_00,undefined2 param_1,undefined2 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FUN_14ed_0009(0x1000,param_1,param_2,0);
  if (uVar1 != 0xffff) {
    if (((param_3 & 2) == 0) || ((uVar1 & 1) == 0)) {
      uVar1 = 0;
    }
    else {
      DAT_15b6_007f = 5;
      uVar1 = 0xffff;
    }
  }
  return uVar1;
}



void FUN_14ca_0002(undefined2 param_1_00,int param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  
  puVar1 = (uint *)(param_1 * 2 + 0x518);
  bVar3 = false;
  *puVar1 = *puVar1 & 0xfdff;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (bVar3) {
    FUN_13c6_0006(0x1000);
  }
  return;
}



undefined *
FUN_14cc_000f(undefined2 param_1_00,char param_1,char param_2,uint param_3,undefined *param_4,
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
    if (param_6 == 0) goto LAB_14cc_0059;
    do {
      uVar3 = (ulong)param_6;
      param_6 = param_6 / param_3;
      uVar3 = uVar3 % (ulong)param_3 << 0x10 | (ulong)param_5;
      param_5 = (uint)(uVar3 / param_3);
      *pbVar6 = (byte)(uVar3 % (ulong)param_3);
      pbVar6 = pbVar6 + 1;
    } while (param_6 != 0);
    while (param_5 != 0) {
LAB_14cc_0059:
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



void FUN_14cc_0093(undefined2 param_1_00,uint param_1,undefined2 param_2,undefined2 param_3,
                  int param_4)

{
  int iVar1;
  
  if (param_4 == 10) {
    iVar1 = (int)param_1 >> 0xf;
  }
  else {
    iVar1 = 0;
  }
  FUN_14cc_000f(0x1000,param_1 & 0xff00 | 0x61,1,param_4,param_2,param_3,param_1,iVar1);
  return;
}



void FUN_14cc_00c0(undefined2 param_1_00,undefined2 param_1,undefined2 param_2,undefined2 param_3,
                  undefined2 param_4,undefined2 param_5)

{
  uint in_AX;
  
  FUN_14cc_000f(0x1000,0x61,in_AX & 0xff00,param_5,param_3,param_4,param_1,param_2);
  return;
}



void FUN_14cc_00e0(undefined2 param_1_00,undefined2 param_1,undefined2 param_2,undefined2 param_3,
                  undefined2 param_4,int param_5)

{
  FUN_14cc_000f(0x1000,0x61,param_5 == 10,param_5,param_3,param_4,param_1,param_2);
  return;
}



undefined * FUN_14dc_000b(undefined2 param_1_00,undefined2 param_1,undefined *param_2)

{
  if (((uint)param_2 | param_2._2_2_) == 0) {
    param_2 = (undefined *)0x15b606b0;
  }
  *param_2 = 0;
  FUN_14e9_0007(0x1000,(uint)param_2,param_2._2_2_,0x548,0x15b6);
  FUN_14cc_00c0(0x14e9,param_1,0,(uint)param_2 + 3,param_2._2_2_,10);
  FUN_14e9_0007(0x14cc,(uint)param_2,param_2._2_2_,0x54c,0x15b6);
  return param_2;
}



undefined4 FUN_14dc_0072(undefined2 param_1_00,undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar3 = CONCAT22(param_2,param_1);
  uVar2 = 0x1000;
  do {
    if (DAT_1616_00ae == -1) {
      iVar1 = 2;
    }
    else {
      iVar1 = 1;
    }
    DAT_1616_00ae = DAT_1616_00ae + iVar1;
    uVar3 = FUN_14dc_000b(uVar2,DAT_1616_00ae,uVar3);
    iVar1 = FUN_14c6_0003(uVar2,uVar3,0);
    uVar2 = 0x14c6;
  } while (iVar1 != -1);
  return uVar3;
}



undefined2 FUN_14e7_000b(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = FUN_13c6_0006(0x1000);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



ulong FUN_14e9_0007(undefined2 param_1_00,ulong param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char *pcVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  char *pcVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  undefined2 uVar12;
  
  uVar11 = (uint)(param_1 >> 0x10);
  puVar7 = (undefined2 *)param_1;
  iVar4 = -1;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    puVar1 = puVar7;
    puVar7 = (undefined2 *)((int)puVar7 + 1);
  } while (*(char *)puVar1 != '\0');
  uVar12 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar8 = (char *)param_2;
  uVar5 = 0xffff;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar2 = pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (*pcVar2 != '\0');
  uVar5 = ~uVar5;
  puVar9 = (undefined2 *)(pcVar8 + -uVar5);
  puVar10 = (undefined2 *)((int)puVar7 + -1);
  if (((uint)puVar9 & 1) != 0) {
    puVar1 = puVar9;
    puVar9 = (undefined2 *)((int)puVar9 + 1);
    *(undefined *)(undefined2 *)((int)puVar7 + -1) = *(undefined *)puVar1;
    uVar5 = uVar5 - 1;
    puVar10 = puVar7;
  }
  for (uVar6 = uVar5 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
    puVar3 = puVar10;
    puVar10 = puVar10 + 1;
    puVar1 = puVar9;
    puVar9 = puVar9 + 1;
    *puVar3 = *puVar1;
  }
  if ((uVar5 & 1) != 0) {
    *(undefined *)puVar10 = *(undefined *)puVar9;
  }
  return param_1 & 0xffff | (ulong)uVar11 << 0x10;
}



undefined2 FUN_14ed_0009(void)

{
  code *pcVar1;
  undefined in_CF;
  undefined2 in_stack_0000000a;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    in_stack_0000000a = FUN_13c6_0006(0x1000);
  }
  return in_stack_0000000a;
}



undefined2 FUN_14ef_000a(undefined2 param_1_00,int *param_1)

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
    iVar4 = FUN_14ab_0001(0x1000,(int)*(char *)(iVar5 + 4),uVar3,uVar2,iVar6);
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



void FUN_14fe_0002(void)

{
  FUN_1528_002b(0x1000,&stack0x0008);
  return;
}



void FUN_1500_0006(undefined2 param_1_00,char param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  FUN_1500_0025(0x1000,(int)param_1,param_2._0_2_,param_2._2_2_);
  return;
}



uint FUN_1500_0025(undefined2 param_1_00,byte param_1,int *param_2)

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
          (iVar5 = FUN_14ef_000a(uVar6,(int)param_2,param_2._2_2_), iVar5 != 0)))) {
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
      iVar5 = FUN_14ef_000a(uVar6,(int)param_2,param_2._2_2_);
      uVar6 = 0x14ef;
      if (iVar5 != 0) {
        return 0xffff;
      }
    }
  }
  uVar7 = uVar6;
  if ((bVar4 == 10) && ((*(uint *)((int)param_2 + 2) & 0x40) == 0)) {
    uVar7 = 0x14c1;
    iVar5 = FUN_14c1_0007(uVar6,(int)*(char *)((int)param_2 + 4),0x584,0x15b6,1);
    if (iVar5 == 1) goto LAB_1500_0129;
  }
  else {
LAB_1500_0129:
    iVar5 = FUN_14c1_0007(uVar7,(int)*(char *)((int)param_2 + 4),&param_1);
    if (iVar5 == 1) goto LAB_1500_0161;
  }
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  if ((*(uint *)((int)param_2 + 2) & 0x200) == 0) {
    puVar2 = (uint *)((int)param_2 + 2);
    *puVar2 = *puVar2 | 0x10;
    return 0xffff;
  }
LAB_1500_0161:
  return (uint)bVar4;
}



void FUN_1500_016c(undefined2 param_1_00,undefined2 param_1)

{
  FUN_1500_0025(0x1000,param_1,0x39c,0x15b6);
  return;
}



uint FUN_1500_0185(undefined2 param_1_00,int *param_1,uint param_2,byte *param_3)

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
          uVar7 = FUN_1500_0006(0x1000,uVar6 & 0xff00 | (uint)*pbVar4,iVar8,uVar9);
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
        uVar10 = 0x14ef;
        iVar5 = FUN_14ef_000a(0x1000,iVar8,uVar9);
        if (iVar5 != 0) {
          return 0;
        }
      }
      uVar6 = FUN_14c1_0007(uVar10,(int)*(char *)(iVar8 + 4),(int)param_3,param_3._2_2_,param_2);
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
      iVar5 = FUN_1500_0025(0x1000,(int)(char)*pbVar4,iVar8,uVar9);
      uVar6 = uVar6 - 1;
    } while (iVar5 != -1);
    param_2 = 0;
  }
  return param_2;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0001468c) overlaps instruction at (ram,0x0001468b)
// 
// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack
// WARNING: Removing unreachable block (ram,0x00011eef)
// WARNING: Removing unreachable block (ram,0x00011efe)
// WARNING: Removing unreachable block (ram,0x00011f03)
// WARNING: Removing unreachable block (ram,0x00011ef5)
// WARNING: Removing unreachable block (ram,0x00011efc)
// WARNING: Removing unreachable block (ram,0x0001060f)
// WARNING: Removing unreachable block (ram,0x00010625)
// WARNING: Removing unreachable block (ram,0x00010631)
// WARNING: Removing unreachable block (ram,0x00010633)
// WARNING: Removing unreachable block (ram,0x00012e34)
// WARNING: Removing unreachable block (ram,0x00012e2b)
// WARNING: Removing unreachable block (ram,0x00012e9f)
// WARNING: Removing unreachable block (ram,0x00012ea0)
// WARNING: Removing unreachable block (ram,0x00012e84)
// WARNING: Removing unreachable block (ram,0x00012ec5)
// WARNING: Removing unreachable block (ram,0x00012efe)
// WARNING: Removing unreachable block (ram,0x00012f11)
// WARNING: Removing unreachable block (ram,0x00012f13)
// WARNING: Removing unreachable block (ram,0x00012f1a)
// WARNING: Removing unreachable block (ram,0x00012f1d)
// WARNING: Removing unreachable block (ram,0x00012ed4)
// WARNING: Removing unreachable block (ram,0x0001d783)
// WARNING: Removing unreachable block (ram,0x00012e92)
// WARNING: Removing unreachable block (ram,0x00012eab)
// WARNING: Removing unreachable block (ram,0x00012eb0)
// WARNING: Removing unreachable block (ram,0x00012f98)
// WARNING: Removing unreachable block (ram,0x00012fad)
// WARNING: Removing unreachable block (ram,0x00012fa8)
// WARNING: Removing unreachable block (ram,0x00012f56)
// WARNING: Removing unreachable block (ram,0x00012f75)
// WARNING: Removing unreachable block (ram,0x00012f89)
// WARNING: Removing unreachable block (ram,0x00012f80)
// WARNING: Removing unreachable block (ram,0x00012f5b)
// WARNING: Removing unreachable block (ram,0x00012f60)
// WARNING: Removing unreachable block (ram,0x0001067e)
// WARNING: Removing unreachable block (ram,0x00010680)
// WARNING: Removing unreachable block (ram,0x00010682)
// WARNING: Removing unreachable block (ram,0x00018904)
// WARNING: Removing unreachable block (ram,0x00017689)
// WARNING: Removing unreachable block (ram,0x0001024e)
// WARNING: Removing unreachable block (ram,0x00012fb4)
// WARNING: Removing unreachable block (ram,0x0001333d)
// WARNING: Removing unreachable block (ram,0x0001332e)
// WARNING: Removing unreachable block (ram,0x00012eb3)
// WARNING: Removing unreachable block (ram,0x00012ebb)
// WARNING: Removing unreachable block (ram,0x00012eb8)
// WARNING: Removing unreachable block (ram,0x00015700)
// WARNING: Removing unreachable block (ram,0x00015702)
// WARNING: Removing unreachable block (ram,0x00015703)
// WARNING: Removing unreachable block (ram,0x00015706)
// WARNING: Removing unreachable block (ram,0x0001570c)
// WARNING: Removing unreachable block (ram,0x00015718)
// WARNING: Removing unreachable block (ram,0x00015720)
// WARNING: Removing unreachable block (ram,0x0001571a)
// WARNING: Removing unreachable block (ram,0x00015724)
// WARNING: Removing unreachable block (ram,0x0001572c)
// WARNING: Removing unreachable block (ram,0x00015738)
// WARNING: Removing unreachable block (ram,0x00015740)
// WARNING: Removing unreachable block (ram,0x0001574b)
// WARNING: Removing unreachable block (ram,0x0001574f)
// WARNING: Removing unreachable block (ram,0x00015753)
// WARNING: Removing unreachable block (ram,0x0001575a)
// WARNING: Removing unreachable block (ram,0x0001575e)
// WARNING: Removing unreachable block (ram,0x00015765)
// WARNING: Removing unreachable block (ram,0x00015767)
// WARNING: Removing unreachable block (ram,0x00015769)
// WARNING: Removing unreachable block (ram,0x0001576b)
// WARNING: Removing unreachable block (ram,0x00015776)
// WARNING: Removing unreachable block (ram,0x00015779)
// WARNING: Removing unreachable block (ram,0x0001577b)
// WARNING: Removing unreachable block (ram,0x0001577f)
// WARNING: Removing unreachable block (ram,0x00015781)
// WARNING: Removing unreachable block (ram,0x00015788)
// WARNING: Removing unreachable block (ram,0x0001d83e)
// WARNING: Removing unreachable block (ram,0x00018b56)
// WARNING: Removing unreachable block (ram,0x0001fe87)
// WARNING: Removing unreachable block (ram,0x00012e38)
// WARNING: Removing unreachable block (ram,0x00010208)
// WARNING: Removing unreachable block (ram,0x00010219)
// WARNING: Removing unreachable block (ram,0x0001021b)
// WARNING: Removing unreachable block (ram,0x00010229)
// WARNING: Removing unreachable block (ram,0x00010234)
// WARNING: Removing unreachable block (ram,0x00010236)
// WARNING: Removing unreachable block (ram,0x0001023d)
// WARNING: Recovered jumptable eliminated as dead code
// WARNING: Heritage AFTER dead removal. Example location: r0x00015be1 : 0x000102b0
// WARNING: Could not reconcile some variable overlaps
// WARNING: Restarted to delay deadcode elimination for space: ram

int ** __cdecl16near
FUN_1528_002b(int **param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)

{
  int *piVar1;
  char *pcVar2;
  undefined2 uVar3;
  int **ppiVar4;
  undefined *puVar5;
  int **ppiVar6;
  char cVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  code *pcVar11;
  undefined4 uVar12;
  int **ppiVar13;
  int **ppiVar14;
  int **ppiVar15;
  byte bVar16;
  byte bVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int **ppiVar21;
  int **extraout_DX;
  undefined2 extraout_DX_00;
  int extraout_DX_01;
  int extraout_DX_02;
  int **ppiVar22;
  undefined2 uVar23;
  int **ppiVar24;
  int **ppiVar25;
  char **ppcVar26;
  char **ppcVar27;
  char *pcVar28;
  int **ppiVar29;
  int **ppiVar30;
  undefined *puVar31;
  int **ppiVar32;
  char *pcVar33;
  int unaff_DI;
  int **ppiVar34;
  int *unaff_ES;
  int *piVar35;
  char *unaff_SS;
  bool bVar36;
  bool bVar37;
  undefined uVar38;
  ulong uVar39;
  char *pcStack164;
  char **ppcStack162;
  int **local_5a;
  char local_57;
  int *local_56 [37];
  char **local_c;
  char local_8;
  undefined4 local_6;
  
  uVar23 = 0x15b6;
  ppcVar26 = (char **)&stack0xfffe;
  local_5a = (int **)0x0;
  local_6 = (char *)ZEXT24((int **)local_6);
  ppiVar34 = local_56;
  local_57 = 'P';
  uRam000101c7 = 0;
                    // WARNING: Read-only address (ram,0x000101c7) is written
  piVar35 = (int *)((ulong)param_4 >> 0x10);
  ppiVar29 = (int **)param_4;
  while( true ) {
    ppiVar25 = (int **)((int)ppiVar29 + 1);
    bVar17 = *(byte *)ppiVar29;
    if (bVar17 == 0) break;
    ppiVar30 = ppiVar25;
    if (bVar17 == 0x25) {
      ppiVar30 = ppiVar29 + 1;
      bVar17 = *(byte *)ppiVar25;
      if (bVar17 == 0x25) goto LAB_1528_00a4;
      ppiVar21 = (int **)0x0;
      ppiVar24 = (int **)(uint)bVar17;
      if (0x5f < (byte)(bVar17 - 0x20)) goto LAB_1528_0547;
      bVar16 = *(byte *)((byte)(bVar17 - 0x20) + 0x59d);
      ppiVar22 = (int **)(uint)bVar16;
      if ((int **)((int)s_Turbo_C___Copyright__c__1988_Bor_15b6_0004 + 0x13) < ppiVar22)
      goto LAB_1528_0547;
      ppiVar25 = (int **)((int)ppiVar22 * 2);
      ppcVar27 = (char **)&stack0xfffe;
      switch(ppiVar22) {
      case (int **)0x0:
        goto switchD_1000_5383_caseD_0;
      case (int **)0x1:
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      case (int **)0x2:
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      case (int **)0x3:
        piVar35 = ppiVar29[3];
        ppiVar4 = ppiVar34 + 2;
        bVar36 = piVar35 < *ppiVar4;
        bVar37 = piVar35 == *ppiVar4;
        if (bVar37) {
          piVar35 = ppiVar29[2];
          ppiVar4 = ppiVar34 + 1;
          bVar36 = piVar35 < *ppiVar4;
          bVar37 = piVar35 == *ppiVar4;
          if (bVar37) {
            piVar35 = *ppiVar30;
            ppiVar4 = ppiVar34;
            bVar36 = piVar35 < *ppiVar4;
            bVar37 = piVar35 == *ppiVar4;
            if (bVar37) {
              ppiVar34 = (int **)0x4000;
              goto LAB_10d1_11b3;
            }
          }
        }
        if (bVar36 || bVar37) {
          ppiVar34 = (int **)s__dmath____f_15b6_0100;
        }
        else {
          ppiVar34 = (int **)0x0;
        }
LAB_10d1_11b3:
        s__lresult____ld_15b6_00d2[3] = (char)((uint)ppiVar34 >> 8);
        return ppiVar34;
      case (int **)0x4:
        goto code_r0x000101c7;
      case (int **)0x5:
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      case (int **)0x6:
        uRam000101c7 = CONCAT11(0x15,bVar17);
                    // WARNING (jumptable): Read-only address (ram,0x000101c7) is written
                    // WARNING: Read-only address (ram,0x000101c7) is written
        pcVar11 = (code *)swi(0x21);
        uVar39 = (*pcVar11)();
        ppcVar26 = DAT_15b6_0002;
        break;
      case (int **)0x7:
        for (iVar20 = 6; iVar20 != 0; iVar20 = iVar20 + -1) {
          ppiVar6 = ppiVar34;
          ppiVar34 = ppiVar34 + 1;
          ppiVar4 = ppiVar30;
          ppiVar30 = ppiVar30 + 1;
          *ppiVar6 = *ppiVar4;
        }
        s__lresult____ld_15b6_00d2._6_2_ = ppiVar30;
        return ppiVar22;
      case (int **)0x8:
        if (local_8 == '\0') {
          bVar17 = *(byte *)(ppiVar29 + 6);
          piVar8 = ppiVar29[2];
          piVar9 = ppiVar29[3];
          piVar10 = ppiVar29[4];
          *param_1 = *ppiVar30;
          param_1[1] = piVar8;
          param_1[2] = piVar9;
          param_1[3] = piVar10;
          param_1[4] = (int *)0x4001;
          ppiVar34 = (int **)(bVar17 | 0x4000);
          *(byte *)(param_1 + 5) = bVar17;
        }
        else {
          ppcStack162 = (char **)0x1731;
          ppiVar34 = (int **)FUN_10d1_00ab();
        }
        return ppiVar34;
      case (int **)0x9:
        pcVar2 = &stack0xb1fc + (int)ppiVar34;
        cVar7 = *pcVar2;
        *pcVar2 = *pcVar2;
        if (*pcVar2 == '\0' || SCARRY1(cVar7,'\0') != *pcVar2 < '\0') goto LAB_1000_01b6;
        bVar36 = false;
        pcVar33 = (char *)((int)ppiVar25 + 1);
        uVar38 = pcVar33 == (char *)0x0;
        goto LAB_1000_0641;
      case (int **)0xa:
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      case (int **)0xb:
        bVar36 = false;
        pcVar11 = (code *)swi(0x21);
        ppiVar34 = (int **)(*pcVar11)();
        if (bVar36) {
          ppcStack162 = (char **)0x4cca;
          ppiVar34 = (int **)FUN_13c6_0006();
        }
        return ppiVar34;
      case (int **)0xc:
        do {
          ppiVar34 = (int **)((int)ppiVar34 + 1);
          ppiVar29 = ppiVar30;
          do {
            pcVar2 = local_6;
            ppiVar30 = (int **)((int)ppiVar29 + -1);
            if (ppiVar29 == (int **)0x0) {
              return ppiVar34;
            }
            local_6 = (char *)((ulong)local_6 & 0xffff0000 | (ulong)((int)(int **)local_6 + 1));
            ppiVar29 = ppiVar30;
          } while (*pcVar2 != '\n');
        } while( true );
      case (int **)0xd:
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      case (int **)0xe:
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      case (int **)0xf:
        uVar39 = (ulong)CONCAT12(bVar17,(uint)(byte)(bVar16 + *(char *)(int **)((int)ppiVar25 +
                                                                               (int)ppiVar30)));
        ppcVar26 = (char **)&stack0xfffe;
        break;
      case (int **)0x10:
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      case (int **)0x11:
        ppcVar26 = (char **)&stack0xfffe;
        goto code_r0x00010032;
      case (int **)0x12:
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      case (int **)0x13:
        goto switchD_1000_5383_caseD_13;
      case (int **)0x14:
        goto switchD_1000_5383_caseD_14;
      case (int **)0x15:
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      case (int **)0x16:
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      case (int **)0x17:
        ppcStack162 = (char **)0x1500;
        pcStack164 = (char *)((int)&DAT_15b6_0184 + 1);
        ppiVar34 = (int **)FUN_1528_002b();
        return ppiVar34;
      }
      uVar3 = s_Turbo_C___Copyright__c__1988_Bor_15b6_0004._40_2_;
      uVar23 = (undefined2)(uVar39 >> 0x10);
      *(undefined2 *)&DAT_15b6_007d = (int)uVar39;
      *(int **)&DAT_15b6_007b = piVar35;
      *(undefined2 *)&DAT_15b6_0077 = uVar3;
      *(int **)&DAT_15b6_0091 = (int *)ppcVar26;
      *(undefined2 *)&DAT_15b6_0081 = 0xffff;
      ppcStack162 = (char **)0x2e;
      FUN_1000_012f();
      uVar12 = *(undefined4 *)&DAT_15b6_0075;
      piVar35 = (int *)((ulong)uVar12 >> 0x10);
      ppiVar34 = (int **)uVar12;
code_r0x00010032:
      uVar18 = 0x7fff;
      ppiVar25 = ppiVar34;
      ppiVar29 = ppiVar34;
      goto LAB_1000_0039;
    }
LAB_1528_00a4:
    *(byte *)ppiVar34 = bVar17;
    ppiVar34 = (int **)((int)ppiVar34 + 1);
    cVar7 = local_57 + -1;
    bVar36 = local_57 < '\x01';
    ppiVar29 = ppiVar30;
    local_57 = cVar7;
    if (cVar7 == '\0' || bVar36) {
      ppcStack162 = (char **)0x5330;
      FUN_1528_005a();
    }
  }
LAB_1528_0550:
  if (local_57 < 'P') {
    ppcStack162 = (char **)0x57d9;
    FUN_1528_005a();
  }
  if (local_6._2_2_ != 0) {
    local_5a = (int **)0xffff;
  }
  return local_5a;
LAB_1528_0547:
  do {
    ppcStack162 = (char **)0x57ca;
    FUN_1528_0051();
    ppiVar4 = ppiVar25;
    ppiVar25 = (int **)((int)ppiVar25 + 1);
  } while (*(char *)ppiVar4 != '\0');
  goto LAB_1528_0550;
LAB_10d1_1099:
  do {
    ppiVar34 = (int **)((int)ppiVar34 + -1);
    bVar36 = (int)ppiVar21 < 0;
    ppiVar21 = (int **)((int)ppiVar21 << 1);
    bVar37 = (int)ppiVar24 < 0;
    ppiVar24 = (int **)((int)ppiVar24 << 1 | (uint)bVar36);
    bVar36 = (int)ppiVar25 < 0;
    ppiVar25 = (int **)((int)ppiVar25 << 1 | (uint)bVar37);
    ppiVar22 = (int **)((int)ppiVar22 * 2 + (uint)bVar36);
  } while (-1 < (int)ppiVar22);
  pcVar33 = (char *)((int)ppiVar34 + (int)ppiVar29[5]);
  goto LAB_10d1_10a7;
LAB_1000_0641:
  ppcStack162 = (char **)0x644;
  bVar17 = FUN_1000_065d();
  iVar20 = extraout_DX_01;
  if (bVar36 || (bool)uVar38) {
    do {
      uVar23 = DAT_1000_05cb;
      if (bVar36) {
        ppiVar30 = (int **)&stack0xff60;
        pcVar28 = &stack0xff60;
        iVar20 = (int)unaff_ES + iVar20;
        *(char **)&DAT_15b6_006b = pcVar33;
        ppiVar25 = (int **)((int)(pcVar33 + 1) * 4);
        ppcVar26 = (char **)(&stack0xff60 + (int)(pcVar33 + 1) * -4);
        if (&stack0xff60 < ppiVar25) goto LAB_1000_01b6;
        *(int **)&DAT_15b6_006d = (int *)ppcVar26;
        *(char **)&DAT_15b6_006f = unaff_SS;
        goto LAB_1000_06ad;
      }
      ppcStack162 = (char **)0x64b;
      bVar17 = FUN_1000_065d();
      iVar20 = extraout_DX_02;
    } while (!bVar36 && !(bool)uVar38);
  }
  if ((bVar17 != 0x20) && (bVar17 != 0xd)) goto code_r0x00010655;
  goto LAB_1000_0659;
code_r0x00010655:
  bVar36 = bVar17 < 9;
  uVar38 = bVar17 == 9;
  if ((bool)uVar38) {
LAB_1000_0659:
    bVar36 = false;
    uVar38 = true;
  }
  goto LAB_1000_0641;
switchD_1000_5383_caseD_0:
  while (ppiVar21 = (int **)((int)ppiVar21 + -1), ppiVar21 != (int **)0x0) {
    pcVar11 = (code *)swi(0x21);
    (*pcVar11)();
    *ppiVar34 = (int *)ppiVar25;
    ppiVar34[1] = piVar35;
    ppiVar34 = ppiVar34 + 2;
  }
  pcVar11 = (code *)swi(0x21);
  (*pcVar11)();
  *ppiVar34 = (int *)ppiVar25;
  ppiVar34[1] = piVar35;
  if (DAT_15b6_0081 == -1) {
    DAT_15b6_0081 = FUN_1000_01c9();
  }
  uVar23 = 0x15b6;
  pcStack164 = (char *)&DAT_15b6_036a;
  ppcStack162 = (char **)0x1334;
  if (DAT_15b6_0081 == 0) {
    pcStack164 = (char *)0x1db0;
    ppcStack162 = (char **)0x10d1;
  }
  do {
    iVar20 = 10;
    do {
      pcVar11 = (code *)swi(0x21);
      (*pcVar11)();
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    pcVar11 = (code *)swi(0x21);
    (*pcVar11)();
    if (((*(int *)&DAT_15b6_0081 != 0) &&
        (uVar3 = *(undefined2 *)&DAT_15b6_007d,
        iVar19 = CONCAT11((char)uVar3,(char)((uint)uVar3 >> 8)), 0x30f < iVar19)) &&
       (iVar19 < 0xa00)) {
      ppcStack162 = (char **)0x1000;
      pcVar11 = (code *)swi(0x21);
      (*pcVar11)();
    }
    pcVar11 = (code *)swi(0x37);
    (*pcVar11)();
  } while (iVar20 == 0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
  while( true ) {
    *ppcVar26 = pcVar28;
    ppcVar26[1] = unaff_SS;
    ppcVar26 = ppcVar26 + 2;
    do {
      pcVar2 = pcVar28;
      pcVar28 = pcVar28 + 1;
      bVar36 = *pcVar2 != '\0';
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0 && bVar36);
    if (bVar36) break;
LAB_1000_06ad:
    if (iVar20 == 0) break;
  }
  *ppcVar26 = (char *)0x0;
  ppcVar26[1] = (char *)0x0;
                    // WARNING: Could not recover jumptable at 0x000106c8. Too many branches
                    // WARNING: Treating indirect jump as call
  ppiVar34 = (int **)(*(code *)(ulong)DAT_1000_05c7)();
  return ppiVar34;
  while (ppiVar25 = (int **)((int)ppiVar25 + 1), *(char *)ppiVar29 != (char)ppiVar34) {
LAB_1000_0039:
    if (((*ppiVar29 == (int *)0x3738) && (piVar8 = ppiVar29[1], (char)piVar8 == '=')) &&
       (piVar1 = (int *)&DAT_15b6_0081, *piVar1 = *piVar1 + 1,
       ((byte)((uint)piVar8 >> 8) & 0xdf) == 0x59)) {
      piVar1 = (int *)&DAT_15b6_0081;
      *piVar1 = *piVar1 + 1;
    }
    do {
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      ppiVar4 = ppiVar29;
      ppiVar29 = (int **)((int)ppiVar29 + 1);
    } while ((char)ppiVar34 != *(char *)ppiVar4);
    if (uVar18 == 0) goto LAB_1000_01b6;
  }
  *(int *)&DAT_15b6_0075 = -(uVar18 | 0x8000);
  ppiVar25 = (int **)((int)ppiVar25 * 4 + 0x10U & 0xfff0);
  *(int ***)(int)&DAT_15b6_0079 = ppiVar25;
  ppcVar26 = (char **)((int)ppcVar26 - (int)unaff_SS);
  uVar18 = *(uint *)&DAT_15b6_0376;
  if (uVar18 < 0x200) {
    uVar18 = 0x200;
    *(undefined2 *)&DAT_15b6_0376 = 0x200;
  }
  bVar17 = 4;
  ppcStack162 = (char **)((uVar18 >> 4) + 1);
  if (ppcStack162 <= ppcVar26) {
    pcVar33 = (char *)((int)ppcStack162 + (int)unaff_SS);
    *(char **)&DAT_15b6_0089 = pcVar33;
    *(char **)&DAT_15b6_008d = pcVar33;
    ppiVar25 = (int **)(pcVar33 + -*(int *)&DAT_15b6_007b);
    pcVar11 = (code *)swi(0x21);
    (*pcVar11)();
    ppiVar34 = (int **)(unaff_DI << (bVar17 & 0x1f));
    ppiVar24 = extraout_DX;
switchD_1000_5383_caseD_14:
    puVar31 = (undefined *)&DAT_1616_0018;
    for (iVar20 = 0xaa; iVar20 != 0; iVar20 = iVar20 + -1) {
      puVar5 = puVar31;
      puVar31 = puVar31 + 1;
      *puVar5 = 0;
    }
    ppiVar34[-1] = (int *)0x1000;
    (**(code **)&DAT_15b6_05fe)();
    FUN_1000_05cf();
    FUN_1000_06cd();
    pcVar11 = (code *)swi(0x1a);
    (*pcVar11)();
    *(undefined2 *)&DAT_15b6_0083 = extraout_DX_00;
    *(int *)&DAT_15b6_0085 = iVar20;
    (**(code **)&DAT_1616_0002)();
    ppcStack162 = (char **)0x1000;
    pcStack164 = (char *)((int)s__dmath____f_15b6_0100 + 7);
    pcStack164 = (char *)FUN_107b_0004();
    FUN_13ca_0002();
    FUN_1000_0172();
    ppcVar26 = &pcStack164;
    (*pcRam00000600)();
    pcVar11 = (code *)swi(0x21);
    (*pcVar11)();
  }
LAB_1000_01b6:
  uVar23 = 0;
  ppcStack162 = (char **)0x1be;
  FUN_1000_01a7();
  ppcStack162 = (char **)0x3;
  pcStack164 = (char *)0x1000;
  bVar16 = FUN_1000_010d();
  ppcVar27 = ppcVar26;
code_r0x000101c7:
  pcVar2 = (char *)((int)ppiVar25 + (int)ppiVar30);
  *pcVar2 = *pcVar2 + bVar16;
  pcVar11 = (code *)swi(0x11);
  ppcStack162 = ppcVar27;
  uVar18 = (*pcVar11)();
  ppiVar34 = (int **)(uVar18 & 2);
  if (ppiVar34 != (int **)0x0) {
    out(0xf0,0);
    if (-((longdouble)1 / (longdouble)0) == (longdouble)1 / (longdouble)0) {
      ppiVar34 = (int **)&DAT_15b6_0002;
    }
    else {
      ppiVar34 = (int **)((int)&DAT_15b6_0002 + 1);
    }
  }
  return ppiVar34;
switchD_1000_5383_caseD_13:
  while (ppiVar30 = ppiVar22, ppiVar13 = ppiVar24, ppiVar14 = ppiVar21, ppiVar15 = ppiVar25,
        ppiVar21 != (int **)0x0) {
    do {
      ppiVar32 = ppiVar34;
      ppiVar24 = ppiVar15;
      ppiVar22 = ppiVar14;
      ppiVar25 = ppiVar13;
      ppiVar21 = ppiVar30;
      ppiVar34 = ppiVar32 + -8;
      if (ppiVar22 != (int **)0x0) goto LAB_10d1_1099;
      ppiVar30 = ppiVar22;
      ppiVar13 = ppiVar24;
      ppiVar14 = ppiVar25;
      ppiVar15 = ppiVar21;
    } while (ppiVar25 != (int **)0x0);
    ppiVar34 = ppiVar32 + -0x18;
  }
  pcVar33 = (char *)0xc001;
  ppiVar22 = (int **)0x0;
  ppiVar25 = (int **)0x0;
  ppiVar24 = (int **)0x0;
  ppiVar21 = (int **)0x0;
LAB_10d1_10a7:
  *local_c = (char *)ppiVar21;
  local_c[1] = (char *)ppiVar24;
  local_c[2] = (char *)ppiVar25;
  local_c[3] = (char *)ppiVar22;
  local_c[4] = pcVar33;
  local_c[5] = (char *)(int)local_6._2_1_;
  if (local_6._2_1_ == '\x01') {
    local_6._0_2_ = (int **)-(int)(int **)local_6;
  }
  s__lresult____ld_15b6_00d2[3] =
       s__lresult____ld_15b6_00d2[3] & 0xbcU | *(byte *)(((uint)(int **)local_6 & 7) + 0x1025);
  return (int **)local_6;
}



void __cdecl16near FUN_1528_0051(void)

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



void __cdecl16near FUN_1528_005a(void)

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



void FUN_157f_0004(undefined2 param_1_00,undefined2 param_1,undefined2 param_2)

{
  FUN_157f_02de(0x1000,param_1,param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_157f_0016(undefined2 param_1_00,ulong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  bool bVar4;
  
  bVar4 = true;
  FUN_1000_076c(0x1000);
  if (bVar4) {
    _DAT_15b6_0382 = param_1 & 0xffff | (ulong)param_1._2_2_ << 0x10;
    *(uint *)((int)param_1 + 10) = param_1._2_2_;
    *(int *)((int)param_1 + 8) = (int)param_1;
    *(uint *)((int)param_1 + 0xe) = param_1._2_2_;
    *(int *)((int)param_1 + 0xc) = (int)param_1;
  }
  else {
    uVar3 = (undefined2)(_DAT_15b6_0382 >> 0x10);
    iVar2 = (int)_DAT_15b6_0382;
    uVar1 = *(undefined4 *)(iVar2 + 0xc);
    *(uint *)(iVar2 + 0xe) = param_1._2_2_;
    *(int *)(iVar2 + 0xc) = (int)param_1;
    uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
    iVar2 = (int)uVar1;
    *(uint *)(iVar2 + 10) = param_1._2_2_;
    *(int *)(iVar2 + 8) = (int)param_1;
    *(undefined2 *)((int)param_1 + 0xe) = uVar3;
    *(int *)((int)param_1 + 0xc) = iVar2;
    *(undefined2 *)((int)param_1 + 10) = DAT_15b6_0384;
    *(undefined2 *)((int)param_1 + 8) = DAT_15b6_0382;
  }
  return;
}



void FUN_157f_00b5(undefined2 param_1_00,uint *param_1,uint *param_2)

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
  FUN_1000_076c(0x1000);
  if (!bVar9) {
    uVar10 = FUN_1000_0711(0x1000);
    uVar5 = (undefined2)((ulong)uVar10 >> 0x10);
    *(undefined2 *)((int)uVar10 + 6) = uVar8;
    *(int *)((int)uVar10 + 4) = iVar6;
    iVar6 = DAT_15b6_037e;
    uVar8 = DAT_15b6_0380;
  }
  DAT_15b6_0380 = uVar8;
  DAT_15b6_037e = iVar6;
  FUN_13d0_0019(0x1000,(int)param_2,uVar7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_157f_012d(void)

{
  uint *puVar1;
  undefined2 uVar2;
  bool bVar3;
  undefined uVar4;
  int local_6;
  uint local_4;
  
  bVar3 = (undefined *)register0x00000010 ==
          (undefined *)((int)s_Turbo_C___Copyright__c__1988_Bor_15b6_0004 + 2);
  FUN_1000_076c(0x1000);
  if (bVar3) {
    FUN_1401_0094(0x1000,DAT_15b6_037a,DAT_15b6_037c);
    _DAT_15b6_037e = 0;
    DAT_15b6_037c = 0;
    DAT_15b6_037a = 0;
  }
  else {
    uVar2 = (undefined2)(_DAT_15b6_037e >> 0x10);
    puVar1 = *(uint **)((int)_DAT_15b6_037e + 4);
    uVar4 = (*puVar1 & 1) == 0;
    local_6 = (int)puVar1;
    local_4 = (uint)((ulong)puVar1 >> 0x10);
    if ((bool)uVar4) {
      FUN_13d0_0019(0x1000,local_6,local_4);
      FUN_1000_076c(0x13d0);
      if ((bool)uVar4) {
        _DAT_15b6_037e = 0;
        DAT_15b6_037c = 0;
        DAT_15b6_037a = 0;
      }
      else {
        _DAT_15b6_037e = *(ulong *)(local_6 + 4);
      }
      FUN_1401_0094(0x1000,local_6,local_4);
    }
    else {
      FUN_1401_0094(0x1000,(int)_DAT_15b6_037e,uVar2);
      _DAT_15b6_037e = (ulong)puVar1 & 0xffff | (ulong)local_4 << 0x10;
    }
  }
  return;
}



void FUN_157f_0212(undefined2 param_1_00,uint *param_1)

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
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  uVar3 = *param_1;
  *param_1 = *param_1 - 1;
  piVar1 = (int *)(iVar6 + 2);
  *piVar1 = *piVar1 - (uint)(uVar3 == 0);
  puVar10 = (uint *)FUN_1000_0711(0x1000);
  uVar5 = (undefined2)((ulong)puVar10 >> 0x10);
  puVar4 = *(uint **)(iVar6 + 4);
  bVar9 = (*puVar4 & 1) == 0;
  if (bVar9) {
    FUN_1000_076c(0x1000);
    if (!bVar9) {
      iVar6 = *(int *)(iVar6 + 2);
      uVar3 = *param_1;
      uVar8 = (uint)((ulong)puVar4 >> 0x10);
      uVar2 = *puVar4;
      *puVar4 = *puVar4 + uVar3;
      piVar1 = (int *)((int)puVar4 + 2);
      *piVar1 = *piVar1 + iVar6 + (uint)CARRY2(uVar2,uVar3);
      *(uint *)((int)puVar10 + 6) = uVar8;
      *(int *)((int)puVar10 + 4) = (int)puVar4;
      param_1 = (uint *)((ulong)puVar4 & 0xffff | (ulong)uVar8 << 0x10);
      goto LAB_157f_02b2;
    }
  }
  FUN_157f_0016(0x1000,iVar6,uVar7);
LAB_157f_02b2:
  if ((*puVar10 & 1) == 0) {
    FUN_157f_00b5(0x1000,param_1._0_2_,param_1._2_2_,puVar10);
  }
  return;
}



void FUN_157f_02de(undefined2 param_1_00,uint param_1,uint param_2)

{
  undefined uVar1;
  undefined4 uVar2;
  
  uVar1 = (param_1 | param_2) == 0;
  if (!(bool)uVar1) {
    uVar2 = FUN_1000_0711(0x1000);
    FUN_1000_076c(0x1000);
    if ((bool)uVar1) {
      FUN_157f_012d(0x1000);
    }
    else {
      FUN_157f_0212(0x1000,uVar2);
    }
  }
  return;
}



void FUN_15b1_000b(void)

{
  FUN_1528_002b(0x1000,&stack0x000c);
  return;
}



void FUN_15b4_0000(undefined2 param_1_00,undefined2 param_1)

{
  FUN_14ca_0002(0x1000,param_1,0,0,1);
  return;
}


