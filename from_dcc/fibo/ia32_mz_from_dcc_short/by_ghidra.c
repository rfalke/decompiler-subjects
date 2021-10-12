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
  code *pcVar4;
  char cVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  char *pcVar10;
  int *piVar11;
  int *piVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  int *piVar17;
  byte *unaff_SI;
  int *piVar18;
  int *piVar19;
  int iVar20;
  undefined2 unaff_ES;
  undefined2 uVar21;
  undefined2 uVar22;
  bool bVar23;
  undefined4 uVar24;
  
  uVar22 = 0x23b;
  piVar11 = (int *)(undefined *)&DAT_11d8_0080;
                    // WARNING: Read-only address (ram,0x000101f8) is written
  uRam000101f8 = 0x11d8;
  pcVar4 = (code *)swi(0x21);
  uVar24 = (*pcVar4)();
  uVar21 = s_Turbo_C___Copyright__c__1988_Bor_11d8_0004._40_2_;
  piVar17 = DAT_11d8_0002;
  iVar6 = (int)((ulong)uVar24 >> 0x10);
  *(undefined2 *)&DAT_11d8_0092 = (int)uVar24;
  *(undefined2 *)&DAT_11d8_0090 = unaff_ES;
  *(undefined2 *)&DAT_11d8_008c = uVar21;
  *(int **)&DAT_11d8_00ac = piVar17;
  *(undefined2 *)&DAT_11d8_0096 = 0xffff;
  *(undefined2 *)((int)piVar11 + -2) = 0x2e;
  FUN_1000_0162();
  uVar24 = *(undefined4 *)&DAT_11d8_008a;
  uVar21 = (undefined2)((ulong)uVar24 >> 0x10);
  piVar18 = (int *)uVar24;
  uVar8 = 0x7fff;
  piVar19 = piVar18;
  do {
    if (((*piVar19 == 0x3738) && (iVar9 = piVar19[1], (char)iVar9 == '=')) &&
       (piVar1 = (int *)&DAT_11d8_0096, *piVar1 = *piVar1 + 1,
       ((byte)((uint)iVar9 >> 8) & 0xdf) == 0x59)) {
      piVar1 = (int *)&DAT_11d8_0096;
      *piVar1 = *piVar1 + 1;
    }
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      piVar1 = piVar19;
      piVar19 = (int *)((int)piVar19 + 1);
    } while ((char)uVar24 != *(char *)piVar1);
    if (uVar8 == 0) goto LAB_1000_01e9;
    piVar18 = (int *)((int)piVar18 + 1);
  } while (*(char *)piVar19 != (char)uVar24);
  *(int *)&DAT_11d8_008a = -(uVar8 | 0x8000);
  piVar18 = (int *)((int)piVar18 * 2 + 8U & 0xfff8);
  *(int **)&DAT_11d8_008e = piVar18;
  piVar17 = (int *)((int)piVar17 - iVar6);
  uVar8 = *(uint *)&DAT_11d8_023e;
  if (uVar8 < 0x200) {
    uVar8 = 0x200;
    *(undefined2 *)&DAT_11d8_023e = 0x200;
  }
  piVar19 = (int *)(uVar8 + 0x630);
  if ((uVar8 < 0xf9d0) &&
     (puVar2 = (uint *)&DAT_11d8_023c, bVar23 = CARRY2((uint)piVar19,*puVar2),
     piVar19 = (int *)((int)piVar19 + *puVar2), !bVar23)) {
    bVar7 = 4;
    piVar19 = (int *)(((uint)piVar19 >> 4) + 1);
    if (piVar19 <= piVar17) {
      if (((*(int *)&DAT_11d8_023e == 0) || (*(int *)&DAT_11d8_023c == 0)) &&
         (piVar19 = (int *)0x1000, piVar17 < (int *)0x1001)) {
        piVar19 = piVar17;
      }
      pcVar10 = (char *)((int)piVar19 + iVar6);
      *(char **)&DAT_11d8_00a4 = pcVar10;
      *(char **)&DAT_11d8_00a8 = pcVar10;
      piVar18 = (int *)(pcVar10 + -*(int *)&DAT_11d8_0090);
      piVar12 = (int *)((int)piVar11 + -2);
      *(int **)((int)piVar11 + -2) = piVar19;
      pcVar4 = (code *)swi(0x21);
      (*pcVar4)();
      iVar20 = *piVar12 << (bVar7 & 0x1f);
      piVar19 = (int *)&DAT_11d8_05ea;
      for (iVar9 = 0x46; iVar9 != 0; iVar9 = iVar9 + -1) {
        piVar1 = piVar19;
        piVar19 = (int *)((int)piVar19 + 1);
        *(char *)piVar1 = '\0';
      }
      *(undefined2 *)(iVar20 + -2) = 0x1000;
      puVar13 = (undefined *)(iVar20 + -4);
      *(undefined2 *)(iVar20 + -4) = 0xf8;
      (**(code **)&DAT_11d8_05dc)();
      puVar14 = puVar13 + -2;
      *(undefined2 *)(puVar13 + -2) = 0xfb;
      FUN_1000_02fc();
      *(undefined2 *)(puVar14 + -2) = 0xfe;
      FUN_1000_03e7();
      pcVar4 = (code *)swi(0x1a);
      (*pcVar4)();
      *(undefined2 *)&DAT_11d8_0098 = extraout_DX_00;
      *(int *)&DAT_11d8_009a = iVar9;
      puVar15 = puVar14 + -2;
      *(undefined2 *)(puVar14 + -2) = 0x10e;
      (**(code **)&DAT_11d8_05e0)();
      *(undefined2 *)(puVar15 + -2) = *(undefined2 *)&DAT_11d8_0088;
      *(undefined2 *)(puVar15 + -4) = *(undefined2 *)&DAT_11d8_0086;
      *(undefined2 *)(puVar15 + -6) = *(undefined2 *)&DAT_11d8_0084;
      *(undefined2 *)(puVar15 + -8) = 0x11d;
      uVar21 = FUN_1000_01fa();
      *(undefined2 *)(puVar15 + -8) = uVar21;
      *(undefined2 *)(puVar15 + -10) = 0x121;
      FUN_1000_02c7();
      *(undefined2 *)(puVar15 + -10) = 0x129;
      FUN_1000_01a5();
      *(undefined2 *)(puVar15 + -10) = 0x1000;
      piVar17 = (int *)(puVar15 + -0xc);
      *(undefined2 *)(puVar15 + -0xc) = 0x12e;
      (*pcRam000005de)();
      iVar6 = 0;
      unaff_SI = (byte *)0x0;
      iVar9 = 0x2f;
      do {
        pbVar3 = unaff_SI;
        iVar6 = CONCAT11((char)((uint)iVar6 >> 8) + CARRY1((byte)iVar6,*pbVar3),
                         (byte)iVar6 + *pbVar3);
        unaff_SI = unaff_SI + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (iVar6 != 0xd37) {
        piVar17[-1] = 0x14f;
        FUN_1000_01da();
      }
      pcVar4 = (code *)swi(0x21);
      piVar11 = piVar17;
      (*pcVar4)();
      uVar22 = extraout_DX;
    }
  }
LAB_1000_01e9:
  *(undefined2 *)((int)piVar11 + -2) = 0x1f1;
  FUN_1000_01da();
  *(undefined2 *)((int)piVar11 + -2) = 3;
  puVar16 = (undefined *)((int)piVar11 + -4);
  *(undefined2 *)((int)piVar11 + -4) = 0x1f8;
  cVar5 = FUN_1000_0121();
  pbVar3 = (byte *)((int)piVar18 + (int)unaff_SI);
  *pbVar3 = *pbVar3 + cVar5;
  *(int **)(puVar16 + -2) = piVar17;
  *(byte **)(puVar16 + -8) = unaff_SI;
  *(int **)(puVar16 + -10) = piVar19;
  *(undefined2 *)(puVar16 + -0xc) = 0x194;
  *(undefined2 *)(puVar16 + -0xe) = 0x209;
  FUN_1000_0e11();
  *(undefined **)(puVar16 + -0xc) = puVar16 + -6;
  *(undefined2 *)(puVar16 + -0xe) = 0x1b1;
  *(undefined2 *)(puVar16 + -0x10) = 0x215;
  FUN_1000_169a();
  for (iVar6 = 1; iVar6 <= *(int *)(puVar16 + -6); iVar6 = iVar6 + 1) {
    *(undefined2 *)(puVar16 + -0xc) = 0x1b4;
    *(undefined2 *)(puVar16 + -0xe) = 0x223;
    FUN_1000_0e11();
    *(undefined **)(puVar16 + -0xc) = puVar16 + -4;
    *(undefined2 *)(puVar16 + -0xe) = 0x1c3;
    *(undefined2 *)(puVar16 + -0x10) = 0x22f;
    FUN_1000_169a();
    *(undefined2 *)(puVar16 + -0xc) = *(undefined2 *)(puVar16 + -4);
    *(undefined2 *)(puVar16 + -0xe) = 0x237;
    uVar21 = FUN_1000_025b();
    *(undefined2 *)(puVar16 + -0xc) = uVar21;
    *(undefined2 *)(puVar16 + -0xe) = *(undefined2 *)(puVar16 + -4);
    *(undefined2 *)(puVar16 + -0x10) = 0x1c6;
    *(undefined2 *)(puVar16 + -0x12) = 0x245;
    FUN_1000_0e11();
  }
  *(undefined2 *)(puVar16 + -0xc) = 0;
  *(undefined2 *)(puVar16 + -0xe) = 0x254;
  FUN_1000_02c7();
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
  undefined2 uVar8;
  int iStack2;
  
  iStack2 = 0x129;
  FUN_1000_01a5();
  iStack2 = 0x1000;
  (*pcRam000005de)();
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
    iStack2 = 0x14f;
    FUN_1000_01da();
  }
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  param_1 = (undefined *)0x1f1;
  FUN_1000_01da();
  param_1 = (undefined *)0x3;
  uVar8 = 0x1f8;
  cVar3 = FUN_1000_0121();
  pbVar1 = pbVar7 + in_BX;
  *pbVar1 = *pbVar1 + cVar3;
  param_1 = (undefined *)register0x00000010;
  FUN_1000_0e11(0x194);
  FUN_1000_169a(0x1b1,&iStack2);
  for (iVar4 = 1; iVar4 <= iStack2; iVar4 = iVar4 + 1) {
    FUN_1000_0e11(0x1b4);
    FUN_1000_169a(0x1c3,register0x00000010);
    uVar5 = FUN_1000_025b(uVar8);
    FUN_1000_0e11(0x1c6,uVar8,uVar5);
  }
  FUN_1000_02c7(0);
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
  _DAT_11d8_0076 = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_11d8_0078 = in_BX;
  DAT_11d8_007a = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_11d8_007c = in_BX;
  DAT_11d8_007e = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_11d8_0080 = in_BX;
  DAT_11d8_0082 = unaff_ES;
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
  DAT_11d8_0096 = 0;
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
  undefined2 uVar1;
  int iVar2;
  int local_6;
  undefined2 local_4;
  
  FUN_1000_0e11(0x194);
  FUN_1000_169a(0x1b1,&local_6);
  for (iVar2 = 1; iVar2 <= local_6; iVar2 = iVar2 + 1) {
    FUN_1000_0e11(0x1b4);
    FUN_1000_169a(0x1c3,&local_4);
    uVar1 = FUN_1000_025b(local_4);
    FUN_1000_0e11(0x1c6,local_4,uVar1);
  }
  FUN_1000_02c7(0);
  return;
}



int __cdecl16near FUN_1000_025b(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 3) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_1000_025b(param_1 + -1);
    iVar2 = FUN_1000_025b(param_1 + -2);
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}



undefined2 FUN_1000_028b(uint param_1)

{
  if ((int)param_1 < 0) {
    if (-param_1 < 0x23 || param_1 == 0xffdd) {
      DAT_11d8_0094 = -param_1;
      DAT_11d8_01da = 0xffff;
      return 0xffff;
    }
  }
  else {
    if (param_1 < 0x59) goto LAB_1000_029e;
  }
  param_1 = 0x57;
LAB_1000_029e:
  DAT_11d8_0094 = (int)*(char *)(param_1 + 0x1dc);
  DAT_11d8_01da = param_1;
  return 0xffff;
}



void __cdecl16near FUN_1000_02c6(void)

{
  return;
}



void __cdecl16near FUN_1000_02c7(void)

{
  int iVar1;
  
  while (iVar1 = DAT_11d8_0240 + -1, DAT_11d8_0240 != 0) {
    DAT_11d8_0240 = iVar1;
    (**(code **)(iVar1 * 2 + 0x5ea))();
  }
  DAT_11d8_0240 = iVar1;
  (*DAT_11d8_0236)();
  (*DAT_11d8_0238)();
  (*DAT_11d8_023a)();
  FUN_1000_0121();
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack

void FUN_1000_02fc(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  int extraout_DX;
  int extraout_DX_00;
  char **ppcVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  char **ppcVar15;
  undefined2 unaff_SS;
  bool bVar16;
  undefined uVar17;
  code *in_stack_00000000;
  int iStack6;
  char **appcStack4 [2];
  
  DAT_1000_02f8 = 0x11d8;
  uVar6 = (uint)*(byte *)&DAT_11d8_0080;
  puVar7 = (undefined *)(uVar6 + 1);
  pcVar13 = (char *)(DAT_11d8_008a + 2);
  uVar9 = 1;
  ppcVar15 = DAT_11d8_0090;
  ppcVar11 = DAT_11d8_0090;
  DAT_1000_02f6 = in_stack_00000000;
  if (2 < (byte)DAT_11d8_0092) {
    uVar9 = 0x7f;
    pcVar14 = pcVar13;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar1 = pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (*pcVar1 != '\0');
    if (uVar9 == 0) goto LAB_1000_01e2;
    uVar9 = uVar9 ^ 0x7f;
    ppcVar15 = DAT_11d8_008c;
  }
  puVar8 = (undefined *)(uVar6 + 2 + uVar9 & 0xfffe);
  iVar12 = -(int)puVar8;
  pcVar14 = &stack0x0000 + iVar12;
  if (puVar8 <= register0x00000010) {
    *(uint *)((int)(appcStack4 + 1) + iVar12) = uVar9;
    while (uVar9 - 1 != 0) {
      pcVar2 = pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar1 = pcVar13;
      pcVar13 = pcVar13 + 1;
      *pcVar2 = *pcVar1;
      uVar9 = uVar9 - 1;
    }
    bVar16 = false;
    pcVar1 = pcVar14;
    pcVar14 = pcVar14 + 1;
    *pcVar1 = '\0';
    uVar17 = uVar9 == 0;
LAB_1000_0369:
    *(undefined2 *)((int)appcStack4 + iVar12) = 0x36c;
    bVar4 = FUN_1000_0385();
    iVar10 = extraout_DX;
    if (bVar16 || (bool)uVar17) {
      do {
        uVar5 = DAT_1000_02f8;
        if (bVar16) {
          iVar10 = *(int *)((int)(appcStack4 + 1) + iVar12) + iVar10;
          *(uint *)&DAT_11d8_0084 = uVar9;
          puVar7 = (undefined *)((uVar9 + 1) * 2);
          ppcVar11 = (char **)(&stack0x0000 + (uVar9 + 1) * -2);
          pcVar13 = (char *)register0x00000010;
          if (register0x00000010 < puVar7) goto LAB_1000_01e2;
          *(int **)&DAT_11d8_0086 = (int *)ppcVar11;
          goto LAB_1000_03cd;
        }
        *(undefined2 *)((int)appcStack4 + iVar12) = 0x373;
        bVar4 = FUN_1000_0385();
        iVar10 = extraout_DX_00;
      } while (!bVar16 && !(bool)uVar17);
    }
    if ((bVar4 != 0x20) && (bVar4 != 0xd)) goto code_r0x0001037d;
    goto LAB_1000_0381;
  }
LAB_1000_01e2:
  appcStack4[1] = (char **)0x1f1;
  FUN_1000_01da();
  appcStack4[1] = (char **)0x3;
  appcStack4[0] = (char **)0x1f8;
  cVar3 = FUN_1000_0121();
  pcVar1 = puVar7 + (int)pcVar13;
  *pcVar1 = *pcVar1 + cVar3;
  appcStack4[1] = ppcVar11;
  FUN_1000_0e11(0x194,pcVar14,pcVar13);
  FUN_1000_169a(0x1b1,&iStack6);
  for (iVar12 = 1; iVar12 <= iStack6; iVar12 = iVar12 + 1) {
    FUN_1000_0e11(0x1b4,pcVar14,pcVar13);
    FUN_1000_169a(0x1c3,appcStack4);
    uVar5 = FUN_1000_025b(appcStack4[0]);
    FUN_1000_0e11(0x1c6,appcStack4[0],uVar5);
  }
  FUN_1000_02c7(0);
  return;
code_r0x0001037d:
  bVar16 = bVar4 < 9;
  uVar17 = bVar4 == 9;
  if ((bool)uVar17) {
LAB_1000_0381:
    bVar16 = false;
    uVar17 = true;
  }
  goto LAB_1000_0369;
  while( true ) {
    *ppcVar11 = (char *)register0x00000010;
    ppcVar11 = ppcVar11 + 1;
    do {
      pcVar1 = (char *)register0x00000010;
      register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 1);
      bVar16 = *pcVar1 != '\0';
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0 && bVar16);
    if (bVar16) break;
LAB_1000_03cd:
    if (iVar10 == 0) break;
  }
  *ppcVar11 = (char *)0x0;
                    // WARNING: Could not recover jumptable at 0x000103e2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_1000_02f6)();
  return;
}



int __cdecl16near FUN_1000_0385(void)

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



void __cdecl16near FUN_1000_03e7(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  char **in_BX;
  char *unaff_SI;
  char *pcVar6;
  int iStack6;
  undefined2 uStack4;
  undefined2 uVar7;
  
  uStack4 = 0x3ef;
  iVar5 = DAT_11d8_008a;
  pcVar4 = (char *)FUN_1000_0536();
  uVar7 = DAT_11d8_008c;
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
    uVar7 = 0x11d8;
    uStack4 = DAT_11d8_008e;
    iStack6 = 0x40d;
    in_BX = (char **)FUN_1000_0536();
    DAT_11d8_0088 = in_BX;
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
  uStack4 = 0x1f8;
  cVar3 = FUN_1000_0121();
  pcVar1 = (char *)((int)in_BX + (int)unaff_SI);
  *pcVar1 = *pcVar1 + cVar3;
  FUN_1000_0e11(0x194,pcVar4,unaff_SI);
  FUN_1000_169a(0x1b1,&iStack6);
  for (iVar5 = 1; iVar5 <= iStack6; iVar5 = iVar5 + 1) {
    FUN_1000_0e11(0x1b4,pcVar4,unaff_SI);
    FUN_1000_169a(0x1c3,&uStack4);
    uVar7 = FUN_1000_025b(uStack4);
    FUN_1000_0e11(0x1c6,uStack4,uVar7);
  }
  FUN_1000_02c7(0);
  return;
}



bool __cdecl16near FUN_1000_0431(undefined2 param_1)

{
  bool bVar1;
  
  bVar1 = DAT_11d8_0240 != 0x20;
  if (bVar1) {
    *(undefined2 *)(DAT_11d8_0240 * 2 + 0x5ea) = param_1;
    DAT_11d8_0240 = DAT_11d8_0240 + 1;
  }
  return !bVar1;
}



void __cdecl16near FUN_1000_0457(int param_1)

{
  int iVar1;
  
  DAT_11d8_062c = *(int *)(param_1 + 6);
  if (DAT_11d8_062c == param_1) {
    DAT_11d8_062c = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    *(int *)(DAT_11d8_062c + 4) = iVar1;
    *(int *)(iVar1 + 6) = DAT_11d8_062c;
  }
  return;
}



int * __cdecl16near FUN_1000_0485(int *param_1,int param_2)

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
  if (DAT_11d8_062a != param_1) {
    *(int **)((int)piVar3 + param_2 + 2) = piVar3;
    piVar2 = DAT_11d8_062a;
  }
  DAT_11d8_062a = piVar2;
  return piVar3 + 2;
}



int * __cdecl16near FUN_1000_04bf(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_1000_05cd(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar1[1] = (int)DAT_11d8_062a;
    *piVar1 = param_1 + 1;
    piVar2 = piVar1 + 2;
    DAT_11d8_062a = piVar1;
  }
  return piVar2;
}



int * __cdecl16near FUN_1000_04fc(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1000_05cd(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar1 = (int *)0x0;
  }
  else {
    DAT_11d8_062a = piVar1;
    DAT_11d8_062e = piVar1;
    *piVar1 = param_1 + 1;
    piVar1 = piVar1 + 2;
  }
  return piVar1;
}



uint * __cdecl16near FUN_1000_0536(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  if ((param_1 == 0) || (0xfff4 < param_1)) {
    puVar2 = (uint *)0x0;
  }
  else {
    uVar3 = param_1 + 0xb & 0xfff8;
    if (DAT_11d8_062e == 0) {
      puVar2 = (uint *)FUN_1000_04fc(uVar3);
    }
    else {
      puVar2 = DAT_11d8_062c;
      if (DAT_11d8_062c != (uint *)0x0) {
        do {
          if (uVar3 + 0x28 <= *puVar2) {
            puVar2 = (uint *)FUN_1000_0485(puVar2,uVar3);
            return puVar2;
          }
          if (uVar3 <= *puVar2) {
            FUN_1000_0457(puVar2);
            puVar1 = puVar2;
            *puVar1 = *puVar1 + 1;
            return puVar2 + 2;
          }
          puVar2 = (uint *)puVar2[3];
        } while (puVar2 != DAT_11d8_062c);
      }
      puVar2 = (uint *)FUN_1000_04bf(uVar3);
    }
  }
  return puVar2;
}



undefined2 __cdecl16near FUN_1000_05a9(undefined *param_1)

{
  undefined2 uVar1;
  undefined auStack258 [256];
  
  if (param_1 < auStack258) {
    DAT_11d8_009e = param_1;
    uVar1 = 0;
  }
  else {
    DAT_11d8_0094 = 8;
    uVar1 = 0xffff;
  }
  return uVar1;
}



uint __cdecl16near FUN_1000_05cd(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 + DAT_11d8_009e;
  if ((param_2 + (uint)CARRY2(param_1,DAT_11d8_009e) + (uint)(0xfeff < uVar1) != 0) ||
     (uVar2 = DAT_11d8_009e, &stack0xfffe <= (undefined *)(uVar1 + 0x100))) {
    DAT_11d8_0094 = 8;
    uVar2 = 0xffff;
    uVar1 = DAT_11d8_009e;
  }
  DAT_11d8_009e = uVar1;
  return uVar2;
}



void __cdecl16near FUN_1000_0601(undefined2 param_1)

{
  FUN_1000_05a9(param_1);
  return;
}



void __cdecl16near FUN_1000_060f(int param_1)

{
  FUN_1000_05cd(param_1,param_1 >> 0xf);
  return;
}



int FUN_1000_0621(int *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int local_4;
  
  local_4 = *param_1;
  if ((param_1[1] & 0x40U) == 0) {
    iVar2 = local_4;
    pcVar5 = (char *)param_1[5];
    while (iVar3 = iVar2 + -1, iVar2 != 0) {
      pcVar4 = pcVar5 + 1;
      pcVar1 = pcVar5;
      iVar2 = iVar3;
      pcVar5 = pcVar4;
      if (*pcVar1 == '\n') {
        local_4 = local_4 + 1;
      }
    }
  }
  return local_4;
}



undefined2 __cdecl16near FUN_1000_0668(int *param_1,uint param_2,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  
  iVar2 = FUN_1000_0d93(param_1);
  if (iVar2 == 0) {
    if ((param_4 == 1) && (0 < *param_1)) {
      uVar4 = FUN_1000_0621(param_1);
      bVar5 = param_2 < uVar4;
      param_2 = param_2 - uVar4;
      param_3 = (param_3 - ((int)uVar4 >> 0xf)) - (uint)bVar5;
    }
    puVar1 = (uint *)(param_1 + 1);
    *puVar1 = *puVar1 & 0xfe5f;
    *param_1 = 0;
    param_1[5] = param_1[4];
    lVar6 = FUN_1000_0bee((int)*(char *)(param_1 + 2),param_2,param_3,param_4);
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



undefined4 __cdecl16near FUN_1000_06cc(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_1000_0d93(param_1);
  if (iVar1 == 0) {
    uVar3 = FUN_1000_1d14((int)*(char *)(param_1 + 2));
    iVar1 = (int)((ulong)uVar3 >> 0x10);
    if (0 < *param_1) {
      uVar2 = FUN_1000_0621(param_1);
      uVar3 = CONCAT22((iVar1 - ((int)uVar2 >> 0xf)) - (uint)((uint)uVar3 < uVar2),
                       (uint)uVar3 - uVar2);
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



void __cdecl16near FUN_1000_0721(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x344;
  iVar2 = 0x14;
  while (iVar2 != 0) {
    if ((*(uint *)(iVar1 + 2) & 0x300) == 0x300) {
      FUN_1000_0d93(iVar1);
    }
    iVar1 = iVar1 + 0x10;
    iVar2 = iVar2 + -1;
  }
  return;
}



undefined2 FUN_1000_0748(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  if ((param_1[1] & 0x200U) != 0) {
    FUN_1000_0721();
  }
  iVar3 = param_1[3];
  iVar2 = param_1[4];
  param_1[5] = iVar2;
  iVar3 = FUN_1000_09bd((int)*(char *)(param_1 + 2),iVar2,iVar3);
  *param_1 = iVar3;
  if (iVar3 < 1) {
    if (*param_1 == 0) {
      param_1[1] = param_1[1] & 0xfe7fU | 0x20;
    }
    else {
      *param_1 = 0;
      puVar1 = (uint *)(param_1 + 1);
      *puVar1 = *puVar1 | 0x10;
    }
    uVar4 = 0xffff;
  }
  else {
    puVar1 = (uint *)(param_1 + 1);
    *puVar1 = *puVar1 & 0xffdf;
    uVar4 = 0;
  }
  return uVar4;
}



void __cdecl16near FUN_1000_07a5(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  *piVar1 = *piVar1 + 1;
  FUN_1000_07b8(param_1);
  return;
}



uint __cdecl16near FUN_1000_07b8(int *param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  byte local_3;
  
  while( true ) {
    piVar1 = param_1;
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    if (SBORROW2(iVar3,1) == *piVar1 < 0) {
      piVar1 = param_1 + 5;
      *piVar1 = *piVar1 + 1;
      return (uint)*(byte *)(param_1[5] + -1);
    }
    piVar1 = param_1;
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if ((SCARRY2(iVar3,1) != *piVar1 < 0) || ((param_1[1] & 0x110U) != 0)) break;
    while (puVar2 = (uint *)(param_1 + 1), *puVar2 = *puVar2 | 0x80, param_1[3] == 0) {
      if ((DAT_11d8_04ac != 0) || (param_1 != (int *)0x344)) {
        while( true ) {
          if ((param_1[1] & 0x200U) != 0) {
            FUN_1000_0721();
          }
          iVar3 = FUN_1000_0a79((int)*(char *)(param_1 + 2),&local_3,1);
          if (iVar3 != 1) break;
          if ((local_3 != 0xd) || ((param_1[1] & 0x40U) != 0)) {
            puVar2 = (uint *)(param_1 + 1);
            *puVar2 = *puVar2 & 0xffdf;
            return (uint)local_3;
          }
        }
        iVar3 = FUN_1000_0d25((int)*(char *)(param_1 + 2));
        if (iVar3 == 1) {
          param_1[1] = param_1[1] & 0xfe7fU | 0x20;
        }
        else {
          puVar2 = (uint *)(param_1 + 1);
          *puVar2 = *puVar2 | 0x10;
        }
        return 0xffff;
      }
      iVar3 = FUN_1000_08b8((int)cRam000120c8);
      if (iVar3 == 0) {
        DAT_11d8_0346 = DAT_11d8_0346 & 0xfdff;
      }
      FUN_1000_08ca(0x344,0,(DAT_11d8_0346 & 0x200) != 0,0x200);
    }
    iVar3 = FUN_1000_0748(param_1);
    if (iVar3 != 0) {
      return 0xffff;
    }
  }
  puVar2 = (uint *)(param_1 + 1);
  *puVar2 = *puVar2 | 0x10;
  return 0xffff;
}



uint __cdecl16near FUN_1000_08b8(void)

{
  code *pcVar1;
  uint extraout_DX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return extraout_DX & 0x80;
}



undefined2 __cdecl16near FUN_1000_08ca(int *param_1,int param_2,int param_3,uint param_4)

{
  uint *puVar1;
  undefined2 uVar2;
  
  if ((((int *)param_1[7] == param_1) && (param_3 < 3)) && (param_4 < 0x8000)) {
    if ((DAT_11d8_04ae == 0) && (param_1 == (int *)0x354)) {
      DAT_11d8_04ae = 1;
    }
    else {
      if ((DAT_11d8_04ac == 0) && (param_1 == (int *)0x344)) {
        DAT_11d8_04ac = 1;
      }
    }
    if (*param_1 != 0) {
      FUN_1000_0668(param_1,0,0,1);
    }
    if ((param_1[1] & 4U) != 0) {
      FUN_1000_1673(param_1[4]);
    }
    puVar1 = (uint *)(param_1 + 1);
    *puVar1 = *puVar1 & 0xfff3;
    param_1[3] = 0;
    param_1[4] = (int)param_1 + 5;
    param_1[5] = (int)param_1 + 5;
    if ((param_3 != 2) && (param_4 != 0)) {
      DAT_11d8_0236 = 0x99c;
      if (param_2 == 0) {
        param_2 = FUN_1000_0536(param_4);
        if (param_2 == 0) {
          return 0xffff;
        }
        puVar1 = (uint *)(param_1 + 1);
        *puVar1 = *puVar1 | 4;
      }
      param_1[5] = param_2;
      param_1[4] = param_2;
      param_1[3] = param_4;
      if (param_3 == 1) {
        puVar1 = (uint *)(param_1 + 1);
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



int __cdecl16near FUN_1000_09bd(int param_1,char *param_2,int param_3)

{
  uint *puVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined2 uVar8;
  char local_3;
  
  if ((param_3 + 1U < 2) || ((*(uint *)(param_1 * 2 + 0x484) & 0x200) != 0)) {
    iVar4 = 0;
  }
  else {
    do {
      iVar4 = FUN_1000_0a79(param_1,param_2,param_3);
      if (iVar4 + 1U < 2) {
        return iVar4;
      }
      pcVar6 = param_2;
      pcVar3 = param_2;
      if ((*(uint *)(param_1 * 2 + 0x484) & 0x8000) != 0) {
        return iVar4;
      }
      do {
        while( true ) {
          pcVar7 = pcVar3;
          cVar2 = *pcVar6;
          pcVar5 = param_2;
          if (cVar2 == '\x1a') {
            FUN_1000_0bee(param_1,-iVar4,-(uint)(iVar4 != 0),2);
            puVar1 = (uint *)(param_1 * 2 + 0x484);
            *puVar1 = *puVar1 | 0x200;
            goto LAB_1000_0a6d;
          }
          if (cVar2 == '\r') break;
          *pcVar7 = cVar2;
          iVar4 = iVar4 + -1;
          pcVar6 = pcVar6 + 1;
          pcVar3 = pcVar7 + 1;
          if (iVar4 == 0) goto LAB_1000_0a45;
        }
        iVar4 = iVar4 + -1;
        pcVar6 = pcVar6 + 1;
        pcVar3 = pcVar7;
      } while (iVar4 != 0);
      uVar8 = 0x11d8;
      FUN_1000_0a79(param_1,&local_3,1);
      *pcVar7 = local_3;
LAB_1000_0a45:
      pcVar7 = pcVar7 + 1;
    } while (pcVar7 == pcVar5);
LAB_1000_0a6d:
    iVar4 = (int)pcVar7 - (int)pcVar5;
  }
  return iVar4;
}



void __cdecl16near FUN_1000_0a79(void)

{
  code *pcVar1;
  undefined in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    FUN_1000_028b();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00010b3f)
// WARNING: Removing unreachable block (ram,0x00010b8d)

int __cdecl16near FUN_1000_0a95(int param_1,char *param_2,int param_3)

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
  else {
    if ((*(uint *)(param_1 * 2 + 0x484) & 0x8000) == 0) {
      puVar1 = (uint *)(param_1 * 2 + 0x484);
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
          iVar4 = FUN_1000_0ba8(param_1,local_84,iVar6);
          if (iVar4 != iVar6) {
            return ((param_3 - local_8a) + iVar4) - iVar6;
          }
          pcVar5 = local_84;
        }
      }
      iVar4 = (int)pcVar5 - (int)local_84;
      if ((iVar4 != 0) && (iVar6 = FUN_1000_0ba8(param_1,local_84,iVar4), iVar6 != iVar4)) {
        param_3 = (param_3 + iVar6) - iVar4;
      }
    }
    else {
      param_3 = FUN_1000_0ba8(param_1,param_2,param_3);
    }
  }
  return param_3;
}



undefined2 __cdecl16near FUN_1000_0ba8(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined uVar4;
  
  uVar4 = 0;
  if ((*(uint *)(param_1 * 2 + 0x484) & 0x800) != 0) {
    uVar4 = 0;
    FUN_1000_0bee(param_1,0,0,2);
  }
  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  if ((bool)uVar4) {
    uVar3 = FUN_1000_028b();
  }
  else {
    puVar1 = (uint *)(param_1 * 2 + 0x484);
    *puVar1 = *puVar1 | 0x1000;
  }
  return uVar3;
}



void __cdecl16near FUN_1000_0bee(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  
  puVar1 = (uint *)(param_1 * 2 + 0x484);
  bVar3 = false;
  *puVar1 = *puVar1 & 0xfdff;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (bVar3) {
    FUN_1000_028b();
  }
  return;
}



char * FUN_1000_0c19(char param_1,char param_2,uint param_3,char *param_4,uint param_5,uint param_6)

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
    if (param_6 == 0) goto LAB_1000_0c63;
    do {
      uVar3 = (ulong)param_6;
      param_6 = param_6 / param_3;
      uVar3 = uVar3 % (ulong)param_3 << 0x10 | (ulong)param_5;
      param_5 = (uint)(uVar3 / param_3);
      *pbVar6 = (byte)(uVar3 % (ulong)param_3);
      pbVar6 = pbVar6 + 1;
    } while (param_6 != 0);
    while (param_5 != 0) {
LAB_1000_0c63:
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



void __cdecl16near FUN_1000_0c98(uint param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 10) {
    iVar1 = (int)param_1 >> 0xf;
  }
  else {
    iVar1 = 0;
  }
  FUN_1000_0c19(param_1 & 0xff00 | 0x61,1,param_3,param_2,param_1,iVar1);
  return;
}



void __cdecl16near
FUN_1000_0cc1(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  uint in_AX;
  
  FUN_1000_0c19(0x61,in_AX & 0xff00,param_4,param_3,param_1,param_2);
  return;
}



void __cdecl16near
FUN_1000_0cdd(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  FUN_1000_0c19(0x61,param_4 == 10,param_4,param_3,param_1,param_2);
  return;
}



void FUN_1000_0d04(int param_1,undefined2 param_2)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  int unaff_SI;
  
  iVar5 = 2;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  FUN_1000_01da();
  param_2 = 0x1f8;
  cVar3 = FUN_1000_0121();
  pcVar1 = (char *)(iVar5 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar3;
  FUN_1000_0e11(0x194);
  FUN_1000_169a(0x1b1,&param_1);
  for (iVar5 = 1; iVar5 <= param_1; iVar5 = iVar5 + 1) {
    FUN_1000_0e11(0x1b4);
    FUN_1000_169a(0x1c3,&param_2);
    uVar4 = FUN_1000_025b(param_2);
    FUN_1000_0e11(0x1c6,param_2,uVar4);
  }
  FUN_1000_02c7(0);
  return;
}



void FUN_1000_0d09(int param_1,undefined2 param_2)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  int unaff_SI;
  
  iVar5 = 2;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  FUN_1000_01da();
  param_2 = 0x1f8;
  cVar3 = FUN_1000_0121();
  pcVar1 = (char *)(iVar5 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar3;
  FUN_1000_0e11(0x194);
  FUN_1000_169a(0x1b1,&param_1);
  for (iVar5 = 1; iVar5 <= param_1; iVar5 = iVar5 + 1) {
    FUN_1000_0e11(0x1b4);
    FUN_1000_169a(0x1c3,&param_2);
    uVar4 = FUN_1000_025b(param_2);
    FUN_1000_0e11(0x1c6,param_2,uVar4);
  }
  FUN_1000_02c7(0);
  return;
}



// WARNING: Removing unreachable block (ram,0x00010d7b)

undefined2 __cdecl16near FUN_1000_0d25(int param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  bool bVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong uVar6;
  uint uVar7;
  
  bVar3 = false;
  if ((*(uint *)(param_1 * 2 + 0x484) & 0x200) != 0) {
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
      uVar7 = (uint)(uVar4 >> 0x10);
      uVar2 = (undefined2)uVar4;
      if (!bVar3) {
        pcVar1 = (code *)swi(0x21);
        uVar6 = (*pcVar1)();
        uVar2 = (undefined2)uVar6;
        if (!bVar3) {
          if (uVar6 < (uVar4 & 0xffff | (ulong)uVar7 << 0x10)) {
            return 0;
          }
          return 1;
        }
      }
    }
  }
  uVar2 = FUN_1000_028b(uVar2);
  return uVar2;
}



undefined2 __cdecl16near FUN_1000_0d93(int *param_1)

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
      iVar4 = FUN_1000_0a95((int)*(char *)(param_1 + 2),iVar4,iVar5);
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



void __cdecl16near FUN_1000_0e11(undefined2 param_1)

{
  FUN_1000_1039(&stack0x0004,param_1,0x354,0xf47);
  return;
}



void __cdecl16near FUN_1000_0e2a(char param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  *piVar1 = *piVar1 + -1;
  FUN_1000_0e43((int)param_1,param_2);
  return;
}



uint __cdecl16near FUN_1000_0e43(byte param_1,int *param_2)

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
         (((bVar3 == 10 || (bVar3 == 0xd)) && (iVar5 = FUN_1000_0d93(piVar4), iVar5 != 0)))) {
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
      iVar5 = FUN_1000_0d93(piVar4);
      if (iVar5 != 0) {
        return 0xffff;
      }
    }
  }
  if (((((bVar3 == 10) && ((piVar4[1] & 0x40U) == 0)) &&
       (iVar5 = FUN_1000_0ba8((int)*(char *)(piVar4 + 2),0x4e2,1), iVar5 != 1)) ||
      (iVar5 = FUN_1000_0ba8((int)*(char *)(piVar4 + 2),&param_1,1), iVar5 != 1)) &&
     ((piVar4[1] & 0x200U) == 0)) {
    puVar2 = (uint *)(piVar4 + 1);
    *puVar2 = *puVar2 | 0x10;
    return 0xffff;
  }
  return (uint)bVar3;
}



void __cdecl16near FUN_1000_0f31(undefined2 param_1)

{
  FUN_1000_0e43(param_1,0x354);
  return;
}



uint FUN_1000_0f47(int *param_1,uint param_2,undefined2 *param_3)

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
          uVar5 = FUN_1000_0e2a(*param_3,param_1);
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
      if ((*param_1 == 0) || (iVar3 = FUN_1000_0d93(param_1), iVar3 == 0)) {
        uVar4 = FUN_1000_0ba8((int)*(char *)(param_1 + 2),param_3,param_2);
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
      iVar3 = FUN_1000_0e43((int)(char)*(byte *)param_3,param_1);
      uVar4 = uVar4 - 1;
      param_3 = (undefined2 *)((int)param_3 + 1);
    } while (iVar3 != -1);
    param_2 = 0;
  }
  return param_2;
}



void thunk_FUN_1000_0d04(void)

{
                    // WARNING: Could not recover jumptable at 0x0001100a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_11d8_05e2)();
  return;
}



void FUN_1000_100e(undefined2 param_1)

{
  byte bVar1;
  undefined *unaff_DI;
  undefined2 unaff_ES;
  
  bVar1 = (byte)((uint)param_1 >> 8);
  *unaff_DI = *(undefined *)(ulong)((bVar1 >> 4) + 0x4eb);
  unaff_DI[1] = *(undefined *)(ulong)((bVar1 & 0xf) + 0x4eb);
  unaff_DI[2] = *(undefined *)(ulong)((byte)((byte)param_1 >> 4) + 0x4eb);
  unaff_DI[3] = *(undefined *)(ulong)(((byte)param_1 & 0xf) + 0x4eb);
  return;
}



int FUN_1000_1039(undefined4 *param_1,char *param_2)

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
LAB_1000_10a3:
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
          if (0x5f < (byte)(cVar15 - 0x20U)) goto LAB_1000_1530;
          cVar4 = *(char *)((byte)(cVar15 - 0x20U) + 0x4fb);
          cVar22 = cVar4 * '\x02';
          bVar20 = (byte)((uint)pcVar19 >> 8);
          param_2 = pcVar21;
          uVar27 = unaff_SS;
          pcVar14 = local_94;
          pcVar5 = local_92;
          switch(cVar4) {
          case '\0':
            if (bVar20 != 0) goto LAB_1000_1530;
            if (local_8f != '+') {
              local_8f = cVar15;
            }
            break;
          case '\x01':
            if (bVar20 != 0) goto LAB_1000_1530;
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
              if (bVar20 != 4) goto LAB_1000_1530;
              pcVar19 = (char *)0x500;
            }
            break;
          case '\x03':
            if (bVar20 != 0) goto LAB_1000_1530;
            bVar7 = true;
            break;
          case '\x04':
            if (3 < bVar20) goto LAB_1000_1530;
            pcVar19 = (char *)0x400;
            break;
          case '\x05':
switchD_1000_1106_caseD_5:
            pcVar16 = (char *)(int)(char)(cVar15 + -0x30);
            if (bVar20 < 3) {
              pcVar19 = (char *)0x200;
              pcVar14 = pcVar16;
              if (-1 < (int)local_94) {
                pcVar14 = pcVar16 + (int)local_94 * 10;
              }
            }
            else {
              if (bVar20 != 4) goto LAB_1000_1530;
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
            if (bVar20 != 0) goto switchD_1000_1106_caseD_5;
            if (!bVar7) {
              bVar9 = true;
              pcVar19 = (char *)0x100;
            }
            break;
          case '\n':
            goto switchD_1000_1106_caseD_a;
          case '\v':
            uVar28 = CONCAT11(8,cVar22);
            goto LAB_1000_1240;
          case '\f':
            uVar28 = CONCAT11(10,cVar22);
            goto LAB_1000_1245;
          case '\r':
            uVar28 = CONCAT11(0x10,cVar15 + -0x17);
LAB_1000_1240:
            local_8f = '\0';
LAB_1000_1245:
            local_95 = 0;
            pcVar17 = *(char **)param_1;
            pcVar21 = (char *)0x0;
            goto LAB_1000_1268;
          case '\x0e':
            puVar18 = (uint *)&local_8a;
            puVar24 = (undefined4 *)((int)param_1 + 2);
            if (bVar10) {
              FUN_1000_100e(*(char **)(undefined4 *)((int)param_1 + 2),*(char **)param_1);
              puVar18 = local_89;
              local_8a = 0x3a;
              puVar24 = param_1 + 1;
            }
            param_1 = puVar24;
            FUN_1000_100e();
            *(undefined *)puVar18 = 0;
            puVar25 = (uint *)&local_8a;
            pcVar19 = (char *)((int)puVar18 - (int)puVar25);
            goto LAB_1000_13ed;
          case '\x0f':
            pcVar19 = local_92;
            if ((int)local_92 < 0) {
              pcVar19 = (char *)((int)s_Turbo_C___Copyright__c__1988_Bor_11d8_0004 + 2);
            }
            if (bVar11) {
              uVar28 = 2;
              local_6 = 4;
            }
            else {
              if (bVar12) {
                uVar28 = 8;
                local_6 = 10;
              }
              else {
                local_6 = 8;
                uVar28 = 6;
              }
            }
            thunk_FUN_1000_0d04(uVar28,local_9a,cVar15,local_89,pcVar19,param_1);
            puVar25 = local_89;
            param_1 = (undefined4 *)((int)param_1 + local_6);
            goto LAB_1000_13ed;
          case '\x10':
            puVar1 = param_1;
            param_1 = (undefined4 *)((int)param_1 + 2);
            puVar25 = local_89;
            local_89[0] = (uint)*(char **)puVar1 & 0xff;
            pcVar19 = (char *)0x1;
            goto LAB_1000_142e;
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
              uVar27 = 0x11d8;
              puVar18 = puVar25;
            }
            if (puVar18 == (uint *)0x0) {
              uVar27 = 0x11d8;
              puVar25 = (uint *)0x4e4;
            }
            FUN_1000_1052();
            if (local_92 < pcVar19) {
              pcVar19 = local_92;
            }
            goto LAB_1000_142e;
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
              uVar28 = 0x11d8;
            }
            *piVar26 = (uint)(byte)(0x50 - local_57) + local_5a;
            goto LAB_1000_10a3;
          default:
            goto LAB_1000_1530;
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
      FUN_1000_1067();
    }
    goto LAB_1000_10a3;
  }
  goto LAB_1000_1538;
switchD_1000_1106_caseD_a:
  uVar28 = CONCAT11(10,cVar22);
  local_95 = 1;
  pcVar17 = *(char **)param_1;
  pcVar21 = (char *)((int)pcVar17 >> 0xf);
LAB_1000_1268:
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
          FUN_1000_105f();
          local_94 = local_94 + -1;
        } while (local_94 != (char *)0x0);
      }
      goto LAB_1000_10a3;
    }
  }
  else {
    local_9a = local_9a | 4;
  }
  FUN_1000_0c19(uVar28,local_95,(char)((uint)uVar28 >> 8),puVar25,pcVar17,pcVar21);
  if ((int)local_92 < 1) {
LAB_1000_13ed:
    if ((!bVar9) || ((int)local_94 < 1)) goto LAB_1000_140f;
  }
  FUN_1000_1052();
  if (*(char *)puVar25 == '-') {
    pcVar19 = pcVar19 + -1;
  }
  if (extraout_DX - (int)pcVar19 != 0 && (int)pcVar19 <= extraout_DX) {
    local_8e = extraout_DX - (int)pcVar19;
  }
LAB_1000_140f:
  if ((local_8f != '\0') && (*(char *)puVar25 != '-')) {
    local_8e = local_8e + -1 + (uint)(local_8e == 0);
    puVar25 = (uint *)((int)puVar25 + -1);
    *(char *)puVar25 = local_8f;
  }
  FUN_1000_1052();
LAB_1000_142e:
  if (local_9a == 5) {
    if (cVar15 == 'o') {
      if (local_8e < 1) {
        local_8e = 1;
      }
    }
    else {
      if ((cVar15 == 'x') || (cVar15 == 'X')) {
        bVar13 = true;
        local_94 = local_94 + -2;
        bVar6 = local_8e < 2;
        local_8e = local_8e + -2;
        if (bVar6) {
          local_8e = 0;
        }
      }
    }
  }
  pcVar19 = pcVar19 + local_8e;
  if (!bVar7) {
    for (; (int)pcVar19 < (int)local_94; local_94 = local_94 + -1) {
      FUN_1000_105f();
    }
  }
  if (bVar13) {
    FUN_1000_105f();
    FUN_1000_105f();
  }
  if (0 < local_8e) {
    pcVar19 = pcVar19 + -local_8e;
    local_94 = local_94 + -local_8e;
    cVar15 = *(char *)puVar25;
    if (((cVar15 == '-') || (cVar15 == ' ')) || (cVar15 == '+')) {
      puVar25 = (uint *)((int)puVar25 + 1);
      FUN_1000_105f();
      pcVar19 = pcVar19 + -1;
      local_94 = local_94 + -1;
      local_8e = extraout_DX_00;
    }
    for (; local_8e != 0; local_8e = local_8e + -1) {
      FUN_1000_105f();
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
        FUN_1000_1067();
      }
      pcVar19 = pcVar19 + -1;
    } while (pcVar19 != (char *)0x0);
  }
  if (0 < (int)local_94) {
    do {
      FUN_1000_105f();
      local_94 = local_94 + -1;
    } while (local_94 != (char *)0x0);
  }
  goto LAB_1000_10a3;
LAB_1000_1530:
  do {
    FUN_1000_105f();
    pcVar3 = pcVar17;
    pcVar17 = pcVar17 + 1;
  } while (*pcVar3 != '\0');
LAB_1000_1538:
  if (local_57 < 'P') {
    FUN_1000_1067();
  }
  if (local_4 != 0) {
    local_5a = -1;
  }
  return local_5a;
}



void __cdecl16near FUN_1000_1052(void)

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



void __cdecl16near FUN_1000_105f(void)

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



void __cdecl16near FUN_1000_1067(void)

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



void __cdecl16near FUN_1000_155c(int param_1)

{
  int iVar1;
  
  if (DAT_11d8_062c == 0) {
    DAT_11d8_062c = param_1;
    *(int *)(param_1 + 4) = param_1;
    *(int *)(param_1 + 6) = param_1;
  }
  else {
    iVar1 = *(int *)(DAT_11d8_062c + 6);
    *(int *)(DAT_11d8_062c + 6) = param_1;
    *(int *)(iVar1 + 4) = param_1;
    *(int *)(param_1 + 6) = iVar1;
    *(int *)(param_1 + 4) = DAT_11d8_062c;
  }
  return;
}



void __cdecl16near FUN_1000_1595(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_1;
  *piVar1 = *piVar1 + *param_2;
  if (DAT_11d8_062a == param_2) {
    DAT_11d8_062a = param_1;
  }
  else {
    *(int **)((int)param_2 + *param_2 + 2) = param_1;
  }
  FUN_1000_0457(param_2);
  return;
}



void __cdecl16near FUN_1000_15cc(void)

{
  uint *puVar1;
  
  if (DAT_11d8_062e == DAT_11d8_062a) {
    FUN_1000_0601(DAT_11d8_062e);
    DAT_11d8_062a = (uint *)0x0;
    DAT_11d8_062e = (uint *)0x0;
  }
  else {
    puVar1 = (uint *)DAT_11d8_062a[1];
    if ((*puVar1 & 1) == 0) {
      FUN_1000_0457(puVar1);
      if (puVar1 == DAT_11d8_062e) {
        DAT_11d8_062a = (uint *)0x0;
        DAT_11d8_062e = (uint *)0x0;
      }
      else {
        DAT_11d8_062a = (uint *)puVar1[1];
      }
      FUN_1000_0601(puVar1);
    }
    else {
      FUN_1000_0601(DAT_11d8_062a);
      DAT_11d8_062a = puVar1;
    }
  }
  return;
}



void __cdecl16near FUN_1000_1625(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar1 = param_1;
  *puVar1 = *puVar1 - 1;
  puVar3 = (uint *)(*param_1 + (int)param_1);
  puVar2 = (uint *)param_1[1];
  if (((*puVar2 & 1) == 0) && (param_1 != DAT_11d8_062e)) {
    puVar1 = puVar2;
    *puVar1 = *puVar1 + *param_1;
    puVar3[1] = (uint)puVar2;
    param_1 = puVar2;
  }
  else {
    FUN_1000_155c(param_1);
  }
  if ((*puVar3 & 1) == 0) {
    FUN_1000_1595(param_1,puVar3);
  }
  return;
}



void __cdecl16near FUN_1000_1673(int param_1)

{
  if (param_1 != 0) {
    if (param_1 + -4 == DAT_11d8_062a) {
      FUN_1000_15cc();
    }
    else {
      FUN_1000_1625(param_1 + -4);
    }
  }
  return;
}



void __cdecl16near FUN_1000_169a(undefined2 param_1)

{
  FUN_1000_16b9(0x7b8,0x1d2b,0x344,param_1,&stack0x0004);
  return;
}



int __cdecl16near FUN_1000_16b9(code *param_1,code *param_2,undefined2 param_3,byte *param_4)

{
  byte *pbVar1;
  undefined2 *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  undefined2 uVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  bool bVar16;
  bool bVar17;
  char cVar18;
  undefined4 uVar19;
  int local_2a;
  int local_28;
  int local_26;
  undefined2 *local_24;
  undefined2 local_22 [16];
  
  local_2a = 0;
  local_28 = 0;
LAB_1000_16ec:
  pbVar1 = param_4;
  param_4 = param_4 + 1;
  bVar9 = *pbVar1;
  if (bVar9 == 0) {
    return local_2a;
  }
  if (bVar9 == 0x25) {
    local_24 = (undefined2 *)0xffff;
    bVar16 = false;
    bVar17 = false;
    bVar3 = false;
    pbVar14 = param_4;
    puVar12 = local_24;
LAB_1000_175a:
    local_24 = puVar12;
    param_4 = pbVar14 + 1;
    puVar7 = (undefined2 *)(int)(char)*pbVar14;
    if ((int)puVar7 < 0) {
      return local_2a;
    }
    bVar9 = *(byte *)(puVar7 + 0x2ae);
    puVar12 = local_24;
    switch(bVar9) {
    case 0:
    case 1:
    case 2:
      goto LAB_1000_1ac5;
    case 3:
      goto LAB_1000_16f5;
    case 4:
      bVar3 = true;
      pbVar14 = param_4;
      goto LAB_1000_175a;
    case 5:
      pbVar14 = param_4;
      puVar12 = puVar7 + -0x18;
      if (-1 < (int)local_24) {
        puVar12 = puVar7 + -0x18 + (int)local_24 * 5;
      }
      goto LAB_1000_175a;
    case 6:
      if (!bVar3) {
        FUN_1000_16ce();
      }
      puVar12 = local_24;
      if ((int)local_24 < 0) {
        puVar12 = (undefined2 *)0x1;
      }
      if (local_24 == (undefined2 *)0x0) goto LAB_1000_19bd;
      goto LAB_1000_19a3;
    case 7:
    case 8:
      uVar11 = 10;
      break;
    case 9:
      uVar11 = 0;
      break;
    case 10:
      thunk_FUN_1000_0d09(param_1,param_2,param_3,(uint)local_24 & 0x7fff,&local_28,&local_26);
      cVar18 = '\0';
      cVar4 = local_26 < 0;
      if (local_26 < 1) {
        thunk_FUN_1000_0d09();
        if (cVar18 == cVar4) {
          return local_2a;
        }
        goto switchD_1000_1778_caseD_16;
      }
      if (bVar3) {
        thunk_FUN_1000_0d09();
      }
      else {
        FUN_1000_16ce();
        local_2a = local_2a + 1;
        if (bVar17) {
          uVar11 = 4;
        }
        else {
          if (bVar16) {
            uVar11 = 8;
          }
          else {
            uVar11 = 0;
          }
        }
        thunk_FUN_1000_0d09(puVar7,uVar11);
      }
      goto LAB_1000_16ec;
    case 0xb:
      bVar16 = true;
      pbVar14 = param_4;
      goto LAB_1000_175a;
    case 0xc:
      pbVar14 = param_4;
      goto LAB_1000_175a;
    case 0xd:
      bVar17 = true;
      pbVar14 = param_4;
      goto LAB_1000_175a;
    case 0xe:
      uVar11 = 8;
      break;
    case 0xf:
      iVar5 = 0x1935;
      goto LAB_1000_1acc;
    case 0x10:
      puVar12 = local_22;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar12;
        puVar12 = puVar12 + 1;
        *puVar2 = 0;
      }
      param_4 = pbVar14 + 2;
      bVar9 = *param_4;
      bVar17 = bVar9 == 0x5e;
      if (bVar17) {
        pbVar1 = param_4;
        param_4 = pbVar14 + 3;
        bVar9 = *pbVar1;
      }
      uVar8 = (uint)bVar9;
      do {
        pbVar14 = param_4;
        pbVar15 = (byte *)(uVar8 >> 3);
        bVar9 = '\x01' << ((byte)uVar8 & 7);
        iVar5 = (uint)bVar9 << 8;
        pbVar1 = (byte *)((int)local_22 + (int)pbVar15);
        *pbVar1 = *pbVar1 | bVar9;
        uVar10 = uVar8;
        while( true ) {
          param_4 = pbVar14 + 1;
          bVar9 = *pbVar14;
          uVar8 = (uint)bVar9;
          if (bVar9 == 0) {
            return local_2a;
          }
          if (bVar9 == 0x5d) {
            puVar12 = (undefined2 *)((uint)local_24 & 0x7fff);
            unaff_ES = unaff_SS;
            local_24 = puVar12;
            if (!bVar3) {
              FUN_1000_16ce();
            }
            goto LAB_1000_1a3d;
          }
          if (((bVar9 != 0x2d) ||
              (pbVar1 = param_4, bVar9 = (byte)uVar10, *pbVar1 <= bVar9 && bVar9 != *pbVar1)) ||
             (*param_4 == 0x5d)) break;
          pbVar14 = pbVar14 + 2;
          cVar4 = *param_4 - bVar9;
          if (cVar4 != '\0') {
            uVar10 = (uint)(byte)(bVar9 + cVar4);
            do {
              bVar16 = iVar5 < 0;
              bVar9 = (char)((uint)iVar5 >> 8) << 1 | bVar16;
              iVar5 = (uint)bVar9 << 8;
              pbVar15 = pbVar15 + bVar16;
              pbVar1 = (byte *)((int)local_22 + (int)pbVar15);
              *pbVar1 = *pbVar1 | bVar9;
              cVar4 = cVar4 + -1;
            } while (cVar4 != '\0');
          }
        }
      } while( true );
    case 0x11:
      goto switchD_1000_1778_caseD_11;
    case 0x12:
      uVar11 = 0x10;
      break;
    case 0x13:
      iVar5 = 0x185e;
      goto LAB_1000_1acc;
    case 0x14:
      pbVar14 = param_4;
      goto LAB_1000_175a;
    case 0x15:
      pbVar14 = param_4;
      goto LAB_1000_175a;
    default:
      goto switchD_1000_1778_caseD_16;
    }
    if (((uint)puVar7 & 0x20) == 0) {
      bVar17 = true;
    }
    FUN_1000_1b92(param_1,param_2,param_3,uVar11,(uint)local_24 & 0x7fff,&local_28,&local_26);
    if (local_26 < 1) {
      if (-1 < local_26) {
        return local_2a;
      }
      goto switchD_1000_1778_caseD_16;
    }
    if (bVar3) goto LAB_1000_16ec;
    local_2a = local_2a + 1;
    goto LAB_1000_1844;
  }
LAB_1000_16f5:
  iVar5 = (int)(char)bVar9;
  local_28 = local_28 + 1;
  iVar6 = (*param_1)(param_3);
  if (-1 < iVar6) goto code_r0x00011705;
  goto switchD_1000_1778_caseD_16;
switchD_1000_1778_caseD_11:
  pbVar14 = param_4;
  if (!bVar3) goto LAB_1000_1844;
  goto LAB_1000_175a;
LAB_1000_1a3d:
  puVar7 = (undefined2 *)((int)puVar12 - 1);
  if (0 < (int)puVar12) {
    local_28 = local_28 + 1;
    uVar8 = (*param_1)(param_3);
    if ((int)uVar8 < 0) {
      if (((int)puVar12 < (int)local_24) && (!bVar3)) {
        *pbVar15 = 0;
        local_2a = local_2a + 1;
      }
      goto switchD_1000_1778_caseD_16;
    }
    if ((*(byte *)((int)local_22 + (uVar8 >> 3)) & '\x01' << ((byte)uVar8 & 7)) == 0) {
      if (!bVar17) goto LAB_1000_1a7c;
    }
    else {
      if (bVar17) {
LAB_1000_1a7c:
        (*param_2)(uVar8,param_3);
        local_28 = local_28 + -1;
        if ((int)local_24 <= (int)puVar12) goto LAB_1000_1a99;
        goto LAB_1000_1a90;
      }
    }
    puVar12 = puVar7;
    if (!bVar3) {
      pbVar1 = pbVar15;
      pbVar15 = pbVar15 + 1;
      *pbVar1 = (byte)uVar8;
    }
    goto LAB_1000_1a3d;
  }
LAB_1000_1a90:
  if (!bVar3) {
    local_2a = local_2a + 1;
LAB_1000_1a99:
    *pbVar15 = 0;
  }
  goto LAB_1000_16ec;
LAB_1000_1acc:
  local_28 = local_28 + 1;
  iVar6 = (*param_1)(param_3);
  if (iVar6 < 1) {
    if (iVar6 != 0) {
switchD_1000_1778_caseD_16:
      (*param_2)(0xffff,param_3);
      return local_2a - (uint)(local_2a == 0);
    }
LAB_1000_1ae7:
                    // WARNING: Could not recover jumptable at 0x00011aeb. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar5 = (*(code *)(iVar5 + 3))();
    return iVar5;
  }
  if (((char)iVar6 < '\0') || (*(char *)(iVar6 + 0x55c) != '\x01')) goto LAB_1000_1ae7;
  goto LAB_1000_1acc;
LAB_1000_1844:
  uVar19 = FUN_1000_16ce();
  *puVar7 = (int)uVar19;
  if (bVar17) {
    puVar7[1] = (int)((ulong)uVar19 >> 0x10);
  }
  goto LAB_1000_16ec;
  while (puVar13 = (undefined2 *)((int)puVar12 - 1), bVar17 = 0 < (int)puVar12, puVar12 = puVar13,
        puVar13 != (undefined2 *)0x0 && bVar17) {
LAB_1000_19a3:
    local_28 = local_28 + 1;
    iVar5 = (*param_1)(param_3);
    if (!bVar3) {
      puVar2 = puVar7;
      puVar7 = (undefined2 *)((int)puVar7 + 1);
      *(char *)puVar2 = (char)iVar5;
    }
    if (iVar5 < 0) goto switchD_1000_1778_caseD_16;
  }
LAB_1000_19bd:
  if (!bVar3) {
    local_2a = local_2a + 1;
  }
  goto LAB_1000_16ec;
code_r0x00011705:
  if ((iVar5 < 0) || (*(char *)(iVar5 + 0x55c) != '\x01')) {
    if (iVar6 != iVar5) {
      (*param_2)(iVar6,param_3);
LAB_1000_1ac5:
      return local_2a;
    }
  }
  else {
    while ((-1 < (char)iVar6 && (*(char *)(iVar6 + 0x55c) == '\x01'))) {
      local_28 = local_28 + 1;
      iVar6 = (*param_1)(param_3);
      if (iVar6 < 1) goto switchD_1000_1778_caseD_16;
    }
    (*param_2)(iVar6,param_3);
    local_28 = local_28 + -1;
  }
  goto LAB_1000_16ec;
}



void __cdecl16near FUN_1000_16ce(void)

{
  int *piVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  if ((*(byte *)(unaff_BP + -0x29) & 0x20) != 0) {
    piVar1 = (int *)(unaff_BP + 0xc);
    *piVar1 = *piVar1 + 4;
    return;
  }
  piVar1 = (int *)(unaff_BP + 0xc);
  *piVar1 = *piVar1 + 2;
  return;
}



void thunk_FUN_1000_0d09(void)

{
                    // WARNING: Could not recover jumptable at 0x00011b58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_11d8_05e4)();
  return;
}



void thunk_FUN_1000_0d09(void)

{
                    // WARNING: Could not recover jumptable at 0x00011b5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_11d8_05e6)();
  return;
}



void thunk_FUN_1000_0d09(void)

{
                    // WARNING: Could not recover jumptable at 0x00011b60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_11d8_05e8)();
  return;
}



void __cdecl16near FUN_1000_1b64(void)

{
  return;
}



undefined4 __cdecl16near
FUN_1000_1b92(code *param_1,code *param_2,undefined2 param_3,uint param_4,int param_5,int *param_6,
             undefined2 *param_7)

{
  int *piVar1;
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
  iVar2 = local_6;
  do {
    local_6 = iVar2;
    iVar2 = local_6 + 1;
    uVar7 = (*param_1)(param_3);
    if ((int)uVar7 < 0) goto LAB_1000_1c20;
    cVar5 = (char)uVar7;
    uVar7 = SEXT12(cVar5);
  } while (((uVar7 & 0x80) == 0) && ((*(byte *)(uVar7 + 0x243) & 1) != 0));
  if (param_5 < 1) {
LAB_1000_1c27:
    local_6 = iVar2;
    local_4 = 0;
  }
  else {
    if (cVar5 != '+') {
      iVar4 = param_5 + -1;
      if (cVar5 == '-') {
        local_7 = '\x01';
        goto LAB_1000_1bd7;
      }
LAB_1000_1bea:
      local_6 = iVar2;
      param_5 = iVar4;
      uVar13 = 0;
      uVar14 = 0;
      bVar6 = (byte)uVar7;
      iVar2 = local_6;
      if (param_4 == 0) {
        param_4 = 10;
        if (bVar6 != 0x30) {
LAB_1000_1c6d:
          uVar15 = bVar6 < 0x30;
          FUN_1000_1b64();
          uVar13 = uVar7;
          if (!(bool)uVar15) goto LAB_1000_1c84;
          goto LAB_1000_1c27;
        }
        iVar2 = param_5 + -1;
        if (0 < param_5) {
          local_6 = local_6 + 1;
          uVar7 = (*param_1)(param_3);
          param_4 = 8;
          bVar6 = (byte)uVar7;
          uVar15 = bVar6 < 0x78;
          param_5 = iVar2;
          if ((bVar6 == 0x78) || (uVar15 = bVar6 < 0x58, bVar6 == 0x58)) {
            param_4 = 0x10;
            goto LAB_1000_1c84;
          }
LAB_1000_1c93:
          while (FUN_1000_1b64(), !(bool)uVar15) {
            uVar10 = (uint)((ulong)uVar13 * (ulong)param_4 >> 0x10);
            uVar8 = (uint)((ulong)uVar13 * (ulong)param_4);
            uVar13 = uVar7 + uVar8;
            uVar7 = (uint)CARRY2(uVar7,uVar8);
            uVar8 = uVar14 + uVar10;
            uVar15 = CARRY2(uVar14,uVar10) || CARRY2(uVar8,uVar7);
            uVar14 = uVar8 + uVar7;
            if (uVar14 != 0) goto LAB_1000_1cb0;
LAB_1000_1c84:
            if (param_5 < 1) goto LAB_1000_1cd5;
            local_6 = local_6 + 1;
            uVar7 = (*param_1)(param_3);
            param_5 = param_5 + -1;
          }
LAB_1000_1cc9:
          (*param_2)(uVar7,param_3);
          local_6 = local_6 + -1;
        }
      }
      else {
        if ((0x24 < param_4) || (bVar9 = (byte)param_4, bVar9 < 2)) goto LAB_1000_1c27;
        if (bVar6 != 0x30) goto LAB_1000_1c6d;
        uVar15 = bVar9 < 0x10;
        if (bVar9 != 0x10) goto LAB_1000_1c84;
        iVar2 = param_5 + -1;
        if (0 < param_5) {
          local_6 = local_6 + 1;
          uVar7 = (*param_1)(param_3);
          bVar6 = (byte)uVar7;
          uVar15 = bVar6 < 0x78;
          param_5 = iVar2;
          if (bVar6 == 0x78) goto LAB_1000_1c84;
          uVar15 = bVar6 < 0x58;
          if (bVar6 == 0x58) goto LAB_1000_1c84;
          goto LAB_1000_1c93;
        }
      }
LAB_1000_1cd5:
      if (local_7 != '\0') {
        bVar16 = uVar13 != 0;
        uVar13 = -uVar13;
        uVar14 = -(uint)bVar16 - uVar14;
      }
      goto LAB_1000_1ce5;
    }
LAB_1000_1bd7:
    if (param_5 + -1 < 1) goto LAB_1000_1c27;
    uVar7 = (*param_1)(param_3);
    iVar4 = param_5 + -2;
    iVar2 = local_6 + 2;
    if (-1 < (int)uVar7) goto LAB_1000_1bea;
LAB_1000_1c20:
    local_6 = iVar2;
    local_4 = 0xffff;
  }
  (*param_2)(uVar7,param_3);
  local_6 = local_6 + -1;
  uVar13 = 0;
  uVar14 = 0;
LAB_1000_1ce5:
  piVar1 = param_6;
  *piVar1 = *piVar1 + local_6;
  *param_7 = local_4;
  return CONCAT22(uVar14,uVar13);
  while( true ) {
    local_6 = local_6 + 1;
    uVar7 = (*param_1)(param_3);
    uVar8 = param_4;
    FUN_1000_1b64();
    if ((bool)uVar15) goto LAB_1000_1cc9;
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
    param_5 = param_5 + -1;
    if ((byte)(bVar6 + bVar16) != '\0') break;
LAB_1000_1cb0:
    if (param_5 < 1) goto LAB_1000_1cd5;
  }
  uVar13 = CONCAT11((local_7 != '\0') + -1,local_7 + -1);
  uVar14 = (local_7 != '\0') + 0x7fff;
  local_4 = 2;
  goto LAB_1000_1ce5;
}



void __cdecl16near FUN_1000_1d14(undefined2 param_1)

{
  FUN_1000_0bee(param_1,0,0,1);
  return;
}



uint __cdecl16near FUN_1000_1d2b(uint param_1,int *param_2)

{
  int *piVar1;
  
  if (param_1 != 0xffff) {
    piVar1 = param_2;
    *piVar1 = *piVar1 + 1;
    if (1 < *param_2) {
      piVar1 = param_2 + 5;
      *piVar1 = *piVar1 + -1;
      *(undefined *)param_2[5] = (undefined)param_1;
      return param_1 & 0xff;
    }
    if (*param_2 == 1) {
      param_2[5] = (int)param_2 + 5;
      *(undefined *)((int)param_2 + 5) = (undefined)param_1;
      return param_1 & 0xff;
    }
    piVar1 = param_2;
    *piVar1 = *piVar1 + -1;
  }
  return 0xffff;
}


