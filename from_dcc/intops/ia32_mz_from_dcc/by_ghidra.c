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
  code *pcVar6;
  char cVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined *puVar12;
  int *piVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  byte *unaff_SI;
  int *piVar19;
  int *piVar20;
  undefined *puVar21;
  int iVar22;
  undefined2 unaff_ES;
  undefined2 uVar23;
  undefined2 uVar24;
  undefined4 uVar25;
  
  uVar24 = 0x14d;
  puVar12 = (undefined *)&DAT_1105_0080;
                    // WARNING: Read-only address (ram,0x000101f8) is written
  uRam000101f8 = 0x1105;
  pcVar6 = (code *)swi(0x21);
  uVar25 = (*pcVar6)();
  uVar23 = s_Turbo_C___Copyright__c__1988_Bor_1105_0004._40_2_;
  puVar18 = DAT_1105_0002;
  iVar8 = (int)((ulong)uVar25 >> 0x10);
  *(undefined2 *)&DAT_1105_0092 = (int)uVar25;
  *(undefined2 *)&DAT_1105_0090 = unaff_ES;
  *(undefined2 *)&DAT_1105_008c = uVar23;
  *(int *)&DAT_1105_00ac = (int)puVar18;
  *(undefined2 *)&DAT_1105_0096 = 0xffff;
  *(undefined2 *)(puVar12 + -2) = 0x2e;
  FUN_1000_0162();
  uVar25 = *(undefined4 *)&DAT_1105_008a;
  uVar23 = (undefined2)((ulong)uVar25 >> 0x10);
  piVar19 = (int *)uVar25;
  uVar10 = 0x7fff;
  piVar20 = piVar19;
  do {
    if (((*piVar20 == 0x3738) && (iVar11 = piVar20[1], (char)iVar11 == '=')) &&
       (piVar1 = (int *)&DAT_1105_0096, *piVar1 = *piVar1 + 1,
       ((byte)((uint)iVar11 >> 8) & 0xdf) == 0x59)) {
      piVar1 = (int *)&DAT_1105_0096;
      *piVar1 = *piVar1 + 1;
    }
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      piVar1 = piVar20;
      piVar20 = (int *)((int)piVar20 + 1);
    } while ((char)uVar25 != *(char *)piVar1);
    if (uVar10 == 0) goto LAB_1000_01e9;
    piVar19 = (int *)((int)piVar19 + 1);
  } while (*(char *)piVar20 != (char)uVar25);
  *(int *)&DAT_1105_008a = -(uVar10 | 0x8000);
  piVar19 = (int *)((int)piVar19 * 2 + 8U & 0xfff8);
  *(int **)&DAT_1105_008e = piVar19;
  puVar18 = puVar18 + -iVar8;
  uVar10 = *(uint *)&DAT_1105_0208;
  if (uVar10 < 0x200) {
    uVar10 = 0x200;
    *(undefined2 *)&DAT_1105_0208 = 0x200;
  }
  if ((uVar10 < 0xfb8c) && (puVar2 = (uint *)&DAT_1105_0206, !CARRY2(uVar10 + 0x474,*puVar2))) {
    bVar9 = 4;
    puVar21 = (undefined *)((uVar10 + 0x474 + *puVar2 >> 4) + 1);
    if (puVar21 <= puVar18) {
      if (((*(int *)&DAT_1105_0208 == 0) || (*(int *)&DAT_1105_0206 == 0)) &&
         (puVar21 = (undefined *)0x1000, puVar18 < (undefined *)0x1001)) {
        puVar21 = puVar18;
      }
      puVar18 = puVar21 + iVar8;
      *(int *)&DAT_1105_00a4 = (int)puVar18;
      *(int *)&DAT_1105_00a8 = (int)puVar18;
      piVar19 = (int *)(puVar18 + -*(int *)&DAT_1105_0090);
      piVar13 = (int *)(puVar12 + -2);
      *(undefined **)(puVar12 + -2) = puVar21;
      pcVar6 = (code *)swi(0x21);
      (*pcVar6)();
      iVar22 = *piVar13 << (bVar9 & 0x1f);
      puVar18 = (undefined *)&DAT_1105_042e;
      for (iVar11 = 0x46; iVar11 != 0; iVar11 = iVar11 + -1) {
        puVar4 = puVar18;
        puVar18 = puVar18 + 1;
        *puVar4 = 0;
      }
      *(undefined2 *)(iVar22 + -2) = 0x1000;
      pcVar5 = *(code **)&DAT_1105_0420;
      puVar14 = (undefined *)(iVar22 + -4);
      *(undefined2 *)(iVar22 + -4) = 0xf8;
      (*pcVar5)();
      puVar15 = puVar14 + -2;
      *(undefined2 *)(puVar14 + -2) = 0xfb;
      FUN_1000_02c7();
      *(undefined2 *)(puVar15 + -2) = 0xfe;
      FUN_1000_03b2();
      pcVar6 = (code *)swi(0x1a);
      (*pcVar6)();
      *(undefined2 *)&DAT_1105_0098 = extraout_DX_00;
      *(int *)&DAT_1105_009a = iVar11;
      pcVar5 = *(code **)&DAT_1105_0424;
      puVar16 = puVar15 + -2;
      *(undefined2 *)(puVar15 + -2) = 0x10e;
      (*pcVar5)();
      *(undefined2 *)(puVar16 + -2) = *(undefined2 *)&DAT_1105_0088;
      *(undefined2 *)(puVar16 + -4) = *(undefined2 *)&DAT_1105_0086;
      *(undefined2 *)(puVar16 + -6) = *(undefined2 *)&DAT_1105_0084;
      *(undefined2 *)(puVar16 + -8) = 0x11d;
      uVar23 = FUN_1000_01fa();
      *(undefined2 *)(puVar16 + -8) = uVar23;
      *(undefined2 *)(puVar16 + -10) = 0x121;
      FUN_1000_0292();
      *(undefined2 *)(puVar16 + -10) = 0x129;
      FUN_1000_01a5();
      *(undefined2 *)(puVar16 + -10) = 0x1000;
      pcVar6 = pcRam00000422;
      puVar18 = puVar16 + -0xc;
      *(undefined2 *)(puVar16 + -0xc) = 0x12e;
      (*pcVar6)();
      iVar8 = 0;
      unaff_SI = (byte *)0x0;
      iVar11 = 0x2f;
      do {
        pbVar3 = unaff_SI;
        iVar8 = CONCAT11((char)((uint)iVar8 >> 8) + CARRY1((byte)iVar8,*pbVar3),
                         (byte)iVar8 + *pbVar3);
        unaff_SI = unaff_SI + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      if (iVar8 != 0xd37) {
        *(undefined2 *)(puVar18 + -2) = 0x14f;
        FUN_1000_01da();
      }
      pcVar6 = (code *)swi(0x21);
      puVar12 = puVar18;
      (*pcVar6)();
      uVar24 = extraout_DX;
    }
  }
LAB_1000_01e9:
  *(undefined2 *)(puVar12 + -2) = 0x1f1;
  FUN_1000_01da();
  *(undefined2 *)(puVar12 + -2) = 3;
  puVar17 = puVar12 + -4;
  *(undefined2 *)(puVar12 + -4) = 0x1f8;
  cVar7 = FUN_1000_0121();
  pbVar3 = (byte *)((int)piVar19 + (int)unaff_SI);
  *pbVar3 = *pbVar3 + cVar7;
  *(undefined **)(puVar17 + -2) = puVar18;
  *(byte **)(puVar17 + -6) = unaff_SI;
  *(undefined2 *)(puVar17 + -4) = 0xff;
  iVar22 = *(int *)(puVar17 + -4) + 0x8f;
  *(int *)(puVar17 + -4) = *(int *)(puVar17 + -4) - iVar22;
  *(int *)(puVar17 + -4) = *(int *)(puVar17 + -4) * iVar22;
  iVar8 = *(int *)(puVar17 + -4);
  iVar11 = *(int *)(puVar17 + -4);
  *(int *)(puVar17 + -4) = *(int *)(puVar17 + -4) << 5;
  *(int *)(puVar17 + -8) = (iVar22 / iVar8) % iVar11 >> (puVar17[-4] & 0x1f);
  *(undefined2 *)(puVar17 + -10) = *(undefined2 *)(puVar17 + -4);
  *(undefined2 *)(puVar17 + -0xc) = 0x194;
  *(undefined2 *)(puVar17 + -0xe) = 0x24e;
  FUN_1000_08fa();
  return;
}



void FUN_1000_0121(undefined *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int in_BX;
  byte *pbVar6;
  
  FUN_1000_01a5();
  (*pcRam00000422)(0x1000);
  iVar4 = 0;
  pbVar6 = (byte *)0x0;
  iVar5 = 0x2f;
  do {
    pbVar1 = pbVar6;
    iVar4 = CONCAT11((char)((uint)iVar4 >> 8) + CARRY1((byte)iVar4,*pbVar1),(byte)iVar4 + *pbVar1);
    pbVar6 = pbVar6 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (iVar4 != 0xd37) {
    FUN_1000_01da();
  }
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  param_1 = (undefined *)0x1f1;
  FUN_1000_01da();
  param_1 = (undefined *)0x3;
  cVar3 = FUN_1000_0121();
  pbVar1 = pbVar6 + in_BX;
  *pbVar1 = *pbVar1 + cVar3;
  param_1 = (undefined *)register0x00000010;
  FUN_1000_08fa(0x194,0x35c0,0,pbVar6);
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
  _DAT_1105_0076 = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_1105_0078 = in_BX;
  DAT_1105_007a = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_1105_007c = in_BX;
  DAT_1105_007e = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_1105_0080 = in_BX;
  DAT_1105_0082 = unaff_ES;
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
  DAT_1105_0096 = 0;
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
  FUN_1000_08fa(0x194,0x35c0,0);
  return;
}



undefined2 FUN_1000_0256(uint param_1)

{
  if ((int)param_1 < 0) {
    if (-param_1 < 0x23 || param_1 == 0xffdd) {
      DAT_1105_0094 = -param_1;
      DAT_1105_01a4 = 0xffff;
      return 0xffff;
    }
  }
  else if (param_1 < 0x59) goto LAB_1000_0269;
  param_1 = 0x57;
LAB_1000_0269:
  DAT_1105_0094 = (int)*(char *)(param_1 + 0x1a6);
  DAT_1105_01a4 = param_1;
  return 0xffff;
}



void __cdecl16near FUN_1000_0291(void)

{
  return;
}



void __cdecl16near FUN_1000_0292(void)

{
  int iVar1;
  
  while (iVar1 = DAT_1105_020a + -1, DAT_1105_020a != 0) {
    DAT_1105_020a = iVar1;
    (**(code **)(iVar1 * 2 + 0x42e))();
  }
  DAT_1105_020a = iVar1;
  (*DAT_1105_0200)();
  (*DAT_1105_0202)();
  (*DAT_1105_0204)();
  FUN_1000_0121();
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack

void FUN_1000_02c7(void)

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
  int extraout_DX;
  int extraout_DX_00;
  char **ppcVar12;
  char *pcVar13;
  char *pcVar14;
  char **ppcVar15;
  undefined2 unaff_SS;
  bool bVar16;
  undefined uVar17;
  code *in_stack_00000000;
  char **appcStack4 [2];
  
  DAT_1000_02c3 = 0x1105;
  uVar7 = (uint)*(byte *)&DAT_1105_0080;
  puVar8 = (undefined *)(uVar7 + 1);
  pcVar13 = (char *)(DAT_1105_008a + 2);
  uVar10 = 1;
  ppcVar15 = DAT_1105_0090;
  ppcVar12 = DAT_1105_0090;
  DAT_1000_02c1 = in_stack_00000000;
  if (2 < DAT_1105_0092) {
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
    ppcVar15 = DAT_1105_008c;
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
LAB_1000_0334:
    *(undefined2 *)((int)appcStack4 + iVar3) = 0x337;
    bVar6 = FUN_1000_0350();
    iVar11 = extraout_DX;
    if (bVar16 || (bool)uVar17) {
      do {
        uVar4 = DAT_1000_02c3;
        if (bVar16) {
          iVar11 = *(int *)((int)appcStack4 + iVar3 + 2) + iVar11;
          *(uint *)&DAT_1105_0084 = uVar10;
          puVar8 = (undefined *)((uVar10 + 1) * 2);
          ppcVar12 = (char **)(&stack0x0000 + (uVar10 + 1) * -2);
          pcVar13 = (char *)register0x00000010;
          if (register0x00000010 < puVar8) goto LAB_1000_01e2;
          *(int **)&DAT_1105_0086 = (int *)ppcVar12;
          goto LAB_1000_0398;
        }
        *(undefined2 *)((int)appcStack4 + iVar3) = 0x33e;
        bVar6 = FUN_1000_0350();
        iVar11 = extraout_DX_00;
      } while (!bVar16 && !(bool)uVar17);
    }
    if ((bVar6 != 0x20) && (bVar6 != 0xd)) goto code_r0x00010348;
    goto LAB_1000_034c;
  }
LAB_1000_01e2:
  appcStack4[1] = (char **)0x1f1;
  FUN_1000_01da();
  appcStack4[1] = (char **)0x3;
  appcStack4[0] = (char **)0x1f8;
  cVar5 = FUN_1000_0121();
  pcVar1 = puVar8 + (int)pcVar13;
  *pcVar1 = *pcVar1 + cVar5;
  appcStack4[0] = (char **)0x35c0;
  appcStack4[1] = ppcVar12;
  FUN_1000_08fa(0x194,0x35c0,0,pcVar13);
  return;
code_r0x00010348:
  bVar16 = bVar6 < 9;
  uVar17 = bVar6 == 9;
  if ((bool)uVar17) {
LAB_1000_034c:
    bVar16 = false;
    uVar17 = true;
  }
  goto LAB_1000_0334;
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
LAB_1000_0398:
    if (iVar11 == 0) break;
  }
  *ppcVar12 = (char *)0x0;
                    // WARNING: Could not recover jumptable at 0x000103ad. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_1000_02c1)();
  return;
}



int __cdecl16near FUN_1000_0350(void)

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



void __cdecl16near FUN_1000_03b2(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  char **in_BX;
  char *unaff_SI;
  char *pcVar6;
  undefined2 uVar7;
  
  iVar5 = DAT_1105_008a;
  pcVar4 = (char *)FUN_1000_0501();
  uVar7 = DAT_1105_008c;
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
    uVar7 = 0x1105;
    in_BX = (char **)FUN_1000_0501(DAT_1105_008e);
    DAT_1105_0088 = in_BX;
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
  FUN_1000_08fa(0x194,0x35c0,0,unaff_SI);
  return;
}



bool __cdecl16near FUN_1000_03fc(undefined2 param_1)

{
  bool bVar1;
  
  bVar1 = DAT_1105_020a != 0x20;
  if (bVar1) {
    *(undefined2 *)(DAT_1105_020a * 2 + 0x42e) = param_1;
    DAT_1105_020a = DAT_1105_020a + 1;
  }
  return !bVar1;
}



void __cdecl16near FUN_1000_0422(int param_1)

{
  int iVar1;
  
  DAT_1105_0470 = *(int *)(param_1 + 6);
  if (DAT_1105_0470 == param_1) {
    DAT_1105_0470 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    *(int *)(DAT_1105_0470 + 4) = iVar1;
    *(int *)(iVar1 + 6) = DAT_1105_0470;
  }
  return;
}



int * __cdecl16near FUN_1000_0450(int *param_1,int param_2)

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
  if (DAT_1105_046e != param_1) {
    *(int **)((int)piVar3 + param_2 + 2) = piVar3;
    piVar2 = DAT_1105_046e;
  }
  DAT_1105_046e = piVar2;
  return piVar3 + 2;
}



int * __cdecl16near FUN_1000_048a(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_1000_0598(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar1[1] = (int)DAT_1105_046e;
    *piVar1 = param_1 + 1;
    piVar2 = piVar1 + 2;
    DAT_1105_046e = piVar1;
  }
  return piVar2;
}



int * __cdecl16near FUN_1000_04c7(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1000_0598(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar1 = (int *)0x0;
  }
  else {
    DAT_1105_046e = piVar1;
    DAT_1105_0472 = piVar1;
    *piVar1 = param_1 + 1;
    piVar1 = piVar1 + 2;
  }
  return piVar1;
}



uint * __cdecl16near FUN_1000_0501(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  if ((param_1 == 0) || (0xfff4 < param_1)) {
    puVar2 = (uint *)0x0;
  }
  else {
    uVar3 = param_1 + 0xb & 0xfff8;
    if (DAT_1105_0472 == 0) {
      puVar2 = (uint *)FUN_1000_04c7(uVar3);
    }
    else {
      puVar2 = DAT_1105_0470;
      if (DAT_1105_0470 != (uint *)0x0) {
        do {
          if (uVar3 + 0x28 <= *puVar2) {
            puVar2 = (uint *)FUN_1000_0450(puVar2,uVar3);
            return puVar2;
          }
          if (uVar3 <= *puVar2) {
            FUN_1000_0422(puVar2);
            puVar1 = puVar2;
            *puVar1 = *puVar1 + 1;
            return puVar2 + 2;
          }
          puVar2 = (uint *)puVar2[3];
        } while (puVar2 != DAT_1105_0470);
      }
      puVar2 = (uint *)FUN_1000_048a(uVar3);
    }
  }
  return puVar2;
}



undefined2 __cdecl16near FUN_1000_0574(undefined *param_1)

{
  undefined2 uVar1;
  undefined auStack258 [256];
  
  if (param_1 < auStack258) {
    DAT_1105_009e = param_1;
    uVar1 = 0;
  }
  else {
    DAT_1105_0094 = 8;
    uVar1 = 0xffff;
  }
  return uVar1;
}



uint __cdecl16near FUN_1000_0598(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 + DAT_1105_009e;
  if ((param_2 + (uint)CARRY2(param_1,DAT_1105_009e) + (uint)(0xfeff < uVar1) != 0) ||
     (uVar2 = DAT_1105_009e, &stack0xfffe <= (undefined *)(uVar1 + 0x100))) {
    DAT_1105_0094 = 8;
    uVar2 = 0xffff;
    uVar1 = DAT_1105_009e;
  }
  DAT_1105_009e = uVar1;
  return uVar2;
}



void __cdecl16near FUN_1000_05cc(undefined2 param_1)

{
  FUN_1000_0574(param_1);
  return;
}



void __cdecl16near FUN_1000_05da(int param_1)

{
  FUN_1000_0598(param_1,param_1 >> 0xf);
  return;
}



// WARNING: Removing unreachable block (ram,0x00010696)
// WARNING: Removing unreachable block (ram,0x000106e4)

int __cdecl16near FUN_1000_05ec(int param_1,char *param_2,int param_3)

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
  else if ((*(uint *)(param_1 * 2 + 0x34c) & 0x8000) == 0) {
    puVar1 = (uint *)(param_1 * 2 + 0x34c);
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
        iVar4 = FUN_1000_06ff(param_1,local_84,iVar6);
        if (iVar4 != iVar6) {
          return ((param_3 - local_8a) + iVar4) - iVar6;
        }
        pcVar5 = local_84;
      }
    }
    iVar4 = (int)pcVar5 - (int)local_84;
    if ((iVar4 != 0) && (iVar6 = FUN_1000_06ff(param_1,local_84,iVar4), iVar6 != iVar4)) {
      param_3 = (param_3 + iVar6) - iVar4;
    }
  }
  else {
    param_3 = FUN_1000_06ff(param_1,param_2,param_3);
  }
  return param_3;
}



undefined2 __cdecl16near FUN_1000_06ff(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined uVar4;
  
  uVar4 = 0;
  if ((*(uint *)(param_1 * 2 + 0x34c) & 0x800) != 0) {
    uVar4 = 0;
    FUN_1000_0745(param_1,0,0,2);
  }
  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  if ((bool)uVar4) {
    uVar3 = FUN_1000_0256();
  }
  else {
    puVar1 = (uint *)(param_1 * 2 + 0x34c);
    *puVar1 = *puVar1 | 0x1000;
  }
  return uVar3;
}



void __cdecl16near FUN_1000_0745(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  
  puVar1 = (uint *)(param_1 * 2 + 0x34c);
  bVar3 = false;
  *puVar1 = *puVar1 & 0xfdff;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (bVar3) {
    FUN_1000_0256();
  }
  return;
}



char * FUN_1000_0770(char param_1,char param_2,uint param_3,char *param_4,uint param_5,uint param_6)

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
    if (param_6 == 0) goto LAB_1000_07ba;
    do {
      uVar3 = (ulong)param_6;
      param_6 = param_6 / param_3;
      uVar3 = uVar3 % (ulong)param_3 << 0x10 | (ulong)param_5;
      param_5 = (uint)(uVar3 / param_3);
      *pbVar6 = (byte)(uVar3 % (ulong)param_3);
      pbVar6 = pbVar6 + 1;
    } while (param_6 != 0);
    while (param_5 != 0) {
LAB_1000_07ba:
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



void __cdecl16near FUN_1000_07ef(uint param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 10) {
    iVar1 = (int)param_1 >> 0xf;
  }
  else {
    iVar1 = 0;
  }
  FUN_1000_0770(param_1 & 0xff00 | 0x61,1,param_3,param_2,param_1,iVar1);
  return;
}



void __cdecl16near
FUN_1000_0818(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  uint in_AX;
  
  FUN_1000_0770(0x61,in_AX & 0xff00,param_4,param_3,param_1,param_2);
  return;
}



void __cdecl16near
FUN_1000_0834(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  FUN_1000_0770(0x61,param_4 == 10,param_4,param_3,param_1,param_2);
  return;
}



void FUN_1000_085b(void)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int unaff_SI;
  
  iVar4 = 2;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  FUN_1000_01da();
  cVar3 = FUN_1000_0121();
  pcVar1 = (char *)(iVar4 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar3;
  FUN_1000_08fa(0x194,0x35c0);
  return;
}



undefined2 __cdecl16near FUN_1000_087c(int *param_1)

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
      iVar4 = FUN_1000_05ec((int)*(char *)(param_1 + 2),iVar4,iVar5);
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



void __cdecl16near FUN_1000_08fa(undefined2 param_1)

{
  FUN_1000_0b22(&stack0x0004,param_1,0x21c,0xa30);
  return;
}



void __cdecl16near FUN_1000_0913(char param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  *piVar1 = *piVar1 + -1;
  FUN_1000_092c((int)param_1,param_2);
  return;
}



uint __cdecl16near FUN_1000_092c(byte param_1,int *param_2)

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
         (((bVar3 == 10 || (bVar3 == 0xd)) && (iVar5 = FUN_1000_087c(piVar4), iVar5 != 0)))) {
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
      iVar5 = FUN_1000_087c(piVar4);
      if (iVar5 != 0) {
        return 0xffff;
      }
    }
  }
  if (((((bVar3 == 10) && ((piVar4[1] & 0x40U) == 0)) &&
       (iVar5 = FUN_1000_06ff((int)*(char *)(piVar4 + 2),0x3a6,1), iVar5 != 1)) ||
      (iVar5 = FUN_1000_06ff((int)*(char *)(piVar4 + 2),&param_1,1), iVar5 != 1)) &&
     ((piVar4[1] & 0x200U) == 0)) {
    puVar2 = (uint *)(piVar4 + 1);
    *puVar2 = *puVar2 | 0x10;
    return 0xffff;
  }
  return (uint)bVar3;
}



void __cdecl16near FUN_1000_0a1a(undefined2 param_1)

{
  FUN_1000_092c(param_1,0x21c);
  return;
}



uint FUN_1000_0a30(int *param_1,uint param_2,undefined2 *param_3)

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
          uVar5 = FUN_1000_0913(*param_3,param_1);
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
    else if ((*param_1 == 0) || (iVar3 = FUN_1000_087c(param_1), iVar3 == 0)) {
      uVar4 = FUN_1000_06ff((int)*(char *)(param_1 + 2),param_3,param_2);
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
      iVar3 = FUN_1000_092c((int)(char)*(byte *)param_3,param_1);
      uVar4 = uVar4 - 1;
      param_3 = (undefined2 *)((int)param_3 + 1);
    } while (iVar3 != -1);
    param_2 = 0;
  }
  return param_2;
}



void thunk_FUN_1000_085b(void)

{
                    // WARNING: Could not recover jumptable at 0x00010af3. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_1105_0426)();
  return;
}



void FUN_1000_0af7(undefined2 param_1)

{
  byte bVar1;
  undefined *unaff_DI;
  undefined2 unaff_ES;
  
  bVar1 = (byte)((uint)param_1 >> 8);
  *unaff_DI = *(undefined *)(ulong)((bVar1 >> 4) + 0x3af);
  unaff_DI[1] = *(undefined *)(ulong)((bVar1 & 0xf) + 0x3af);
  unaff_DI[2] = *(undefined *)(ulong)((byte)((byte)param_1 >> 4) + 0x3af);
  unaff_DI[3] = *(undefined *)(ulong)(((byte)param_1 & 0xf) + 0x3af);
  return;
}



int FUN_1000_0b22(undefined4 *param_1,char *param_2)

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
LAB_1000_0b8c:
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
          if (0x5f < (byte)(cVar15 - 0x20U)) goto LAB_1000_1019;
          cVar4 = *(char *)((byte)(cVar15 - 0x20U) + 0x3bf);
          cVar22 = cVar4 * '\x02';
          bVar20 = (byte)((uint)pcVar19 >> 8);
          param_2 = pcVar21;
          uVar27 = unaff_SS;
          pcVar14 = local_94;
          pcVar5 = local_92;
          switch(cVar4) {
          case '\0':
            if (bVar20 != 0) goto LAB_1000_1019;
            if (local_8f != '+') {
              local_8f = cVar15;
            }
            break;
          case '\x01':
            if (bVar20 != 0) goto LAB_1000_1019;
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
              if (bVar20 != 4) goto LAB_1000_1019;
              pcVar19 = (char *)0x500;
            }
            break;
          case '\x03':
            if (bVar20 != 0) goto LAB_1000_1019;
            bVar7 = true;
            break;
          case '\x04':
            if (3 < bVar20) goto LAB_1000_1019;
            pcVar19 = (char *)0x400;
            break;
          case '\x05':
switchD_1000_0bef_caseD_5:
            pcVar16 = (char *)(int)(char)(cVar15 + -0x30);
            if (bVar20 < 3) {
              pcVar19 = (char *)&DAT_1105_0200;
              pcVar14 = pcVar16;
              if (-1 < (int)local_94) {
                pcVar14 = pcVar16 + (int)local_94 * 10;
              }
            }
            else {
              if (bVar20 != 4) goto LAB_1000_1019;
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
            if (bVar20 != 0) goto switchD_1000_0bef_caseD_5;
            if (!bVar7) {
              bVar9 = true;
              pcVar19 = (char *)0x100;
            }
            break;
          case '\n':
            goto switchD_1000_0bef_caseD_a;
          case '\v':
            uVar28 = CONCAT11(8,cVar22);
            goto LAB_1000_0d29;
          case '\f':
            uVar28 = CONCAT11(10,cVar22);
            goto LAB_1000_0d2e;
          case '\r':
            uVar28 = CONCAT11(0x10,cVar15 + -0x17);
LAB_1000_0d29:
            local_8f = '\0';
LAB_1000_0d2e:
            local_95 = 0;
            pcVar17 = *(char **)param_1;
            pcVar21 = (char *)0x0;
            goto LAB_1000_0d51;
          case '\x0e':
            puVar18 = (uint *)&local_8a;
            puVar24 = (undefined4 *)((int)param_1 + 2);
            if (bVar10) {
              FUN_1000_0af7(*(char **)(undefined4 *)((int)param_1 + 2),*(char **)param_1);
              puVar18 = local_89;
              local_8a = 0x3a;
              puVar24 = param_1 + 1;
            }
            param_1 = puVar24;
            FUN_1000_0af7();
            *(undefined *)puVar18 = 0;
            puVar25 = (uint *)&local_8a;
            pcVar19 = (char *)((int)puVar18 - (int)puVar25);
            goto LAB_1000_0ed6;
          case '\x0f':
            pcVar19 = local_92;
            if ((int)local_92 < 0) {
              pcVar19 = (char *)((int)s_Turbo_C___Copyright__c__1988_Bor_1105_0004 + 2);
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
            thunk_FUN_1000_085b(uVar28,local_9a,cVar15,local_89,pcVar19,param_1);
            puVar25 = local_89;
            param_1 = (undefined4 *)((int)param_1 + local_6);
            goto LAB_1000_0ed6;
          case '\x10':
            puVar1 = param_1;
            param_1 = (undefined4 *)((int)param_1 + 2);
            puVar25 = local_89;
            local_89[0] = (uint)*(char **)puVar1 & 0xff;
            pcVar19 = (char *)0x1;
            goto LAB_1000_0f17;
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
              uVar27 = 0x1105;
              puVar18 = puVar25;
            }
            if (puVar18 == (uint *)0x0) {
              uVar27 = 0x1105;
              puVar25 = (uint *)0x3a8;
            }
            FUN_1000_0b3b();
            if (local_92 < pcVar19) {
              pcVar19 = local_92;
            }
            goto LAB_1000_0f17;
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
              uVar28 = 0x1105;
            }
            *piVar26 = (uint)(byte)(0x50 - local_57) + local_5a;
            goto LAB_1000_0b8c;
          default:
            goto LAB_1000_1019;
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
      FUN_1000_0b50();
    }
    goto LAB_1000_0b8c;
  }
  goto LAB_1000_1021;
switchD_1000_0bef_caseD_a:
  uVar28 = CONCAT11(10,cVar22);
  local_95 = 1;
  pcVar17 = *(char **)param_1;
  pcVar21 = (char *)((int)pcVar17 >> 0xf);
LAB_1000_0d51:
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
          FUN_1000_0b48();
          local_94 = local_94 + -1;
        } while (local_94 != (char *)0x0);
      }
      goto LAB_1000_0b8c;
    }
  }
  else {
    local_9a = local_9a | 4;
  }
  FUN_1000_0770(uVar28,local_95,(char)((uint)uVar28 >> 8),puVar25,pcVar17,pcVar21);
  if ((int)local_92 < 1) {
LAB_1000_0ed6:
    if ((!bVar9) || ((int)local_94 < 1)) goto LAB_1000_0ef8;
  }
  FUN_1000_0b3b();
  if (*(char *)puVar25 == '-') {
    pcVar19 = pcVar19 + -1;
  }
  if (extraout_DX - (int)pcVar19 != 0 && (int)pcVar19 <= extraout_DX) {
    local_8e = extraout_DX - (int)pcVar19;
  }
LAB_1000_0ef8:
  if ((local_8f != '\0') && (*(char *)puVar25 != '-')) {
    local_8e = local_8e + -1 + (uint)(local_8e == 0);
    puVar25 = (uint *)((int)puVar25 + -1);
    *(char *)puVar25 = local_8f;
  }
  FUN_1000_0b3b();
LAB_1000_0f17:
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
      FUN_1000_0b48();
    }
  }
  if (bVar13) {
    FUN_1000_0b48();
    FUN_1000_0b48();
  }
  if (0 < local_8e) {
    pcVar19 = pcVar19 + -local_8e;
    local_94 = local_94 + -local_8e;
    cVar15 = *(char *)puVar25;
    if (((cVar15 == '-') || (cVar15 == ' ')) || (cVar15 == '+')) {
      puVar25 = (uint *)((int)puVar25 + 1);
      FUN_1000_0b48();
      pcVar19 = pcVar19 + -1;
      local_94 = local_94 + -1;
      local_8e = extraout_DX_00;
    }
    for (; local_8e != 0; local_8e = local_8e + -1) {
      FUN_1000_0b48();
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
        FUN_1000_0b50();
      }
      pcVar19 = pcVar19 + -1;
    } while (pcVar19 != (char *)0x0);
  }
  if (0 < (int)local_94) {
    do {
      FUN_1000_0b48();
      local_94 = local_94 + -1;
    } while (local_94 != (char *)0x0);
  }
  goto LAB_1000_0b8c;
LAB_1000_1019:
  do {
    FUN_1000_0b48();
    pcVar3 = pcVar17;
    pcVar17 = pcVar17 + 1;
  } while (*pcVar3 != '\0');
LAB_1000_1021:
  if (local_57 < 'P') {
    FUN_1000_0b50();
  }
  if (local_4 != 0) {
    local_5a = -1;
  }
  return local_5a;
}



void __cdecl16near FUN_1000_0b3b(void)

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



void __cdecl16near FUN_1000_0b48(void)

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



void __cdecl16near FUN_1000_0b50(void)

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


