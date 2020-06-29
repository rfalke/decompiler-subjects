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
  char *pcVar4;
  undefined *puVar5;
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
  
  uVar24 = 0x14f;
  puVar12 = (undefined *)&DAT_1107_0080;
                    // WARNING: Read-only address (ram,0x000101f8) is written
  uRam000101f8 = 0x1107;
  pcVar6 = (code *)swi(0x21);
  uVar25 = (*pcVar6)();
  uVar23 = s_Turbo_C___Copyright__c__1988_Bor_1107_0004._40_2_;
  puVar18 = DAT_1107_0002;
  iVar8 = (int)((ulong)uVar25 >> 0x10);
  *(undefined2 *)&DAT_1107_0092 = (int)uVar25;
  *(undefined2 *)&DAT_1107_0090 = unaff_ES;
  *(undefined2 *)&DAT_1107_008c = uVar23;
  *(undefined **)(int *)&DAT_1107_00ac = puVar18;
  *(undefined2 *)&DAT_1107_0096 = 0xffff;
  *(undefined2 *)(puVar12 + -2) = 0x2e;
  FUN_1000_0162();
  uVar25 = *(undefined4 *)&DAT_1107_008a;
  uVar23 = (undefined2)((ulong)uVar25 >> 0x10);
  piVar19 = (int *)uVar25;
  uVar10 = 0x7fff;
  piVar20 = piVar19;
  do {
    if (((*piVar20 == 0x3738) && (iVar11 = piVar20[1], (char)iVar11 == '=')) &&
       (piVar1 = (int *)&DAT_1107_0096, *piVar1 = *piVar1 + 1,
       ((byte)((uint)iVar11 >> 8) & 0xdf) == 0x59)) {
      piVar1 = (int *)&DAT_1107_0096;
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
  *(int *)&DAT_1107_008a = -(uVar10 | 0x8000);
  piVar19 = (int *)((int)piVar19 * 2 + 8U & 0xfff8);
  *(int **)&DAT_1107_008e = piVar19;
  puVar18 = puVar18 + -iVar8;
  uVar10 = *(uint *)&DAT_1107_0208;
  if (uVar10 < 0x200) {
    uVar10 = 0x200;
    *(undefined2 *)&DAT_1107_0208 = 0x200;
  }
  if ((uVar10 < 0xfb8c) && (puVar2 = (uint *)&DAT_1107_0206, !CARRY2(uVar10 + 0x474,*puVar2))) {
    bVar9 = 4;
    puVar21 = (undefined *)((uVar10 + 0x474 + *puVar2 >> 4) + 1);
    if (puVar21 <= puVar18) {
      if (((*(int *)&DAT_1107_0208 == 0) || (*(int *)&DAT_1107_0206 == 0)) &&
         (puVar21 = (undefined *)0x1000, puVar18 < (undefined *)0x1001)) {
        puVar21 = puVar18;
      }
      puVar18 = puVar21 + iVar8;
      *(undefined **)(int *)&DAT_1107_00a4 = puVar18;
      *(undefined **)(int *)&DAT_1107_00a8 = puVar18;
      piVar19 = (int *)(puVar18 + -*(int *)&DAT_1107_0090);
      piVar13 = (int *)(puVar12 + -2);
      *(undefined **)(puVar12 + -2) = puVar21;
      pcVar6 = (code *)swi(0x21);
      (*pcVar6)();
      iVar22 = *piVar13 << (bVar9 & 0x1f);
      puVar18 = (undefined *)&DAT_1107_042e;
      iVar11 = 0x46;
      while (iVar11 != 0) {
        iVar11 = iVar11 + -1;
        puVar5 = puVar18;
        puVar18 = puVar18 + 1;
        *puVar5 = 0;
      }
      *(undefined2 *)(iVar22 + -2) = 0x1000;
      puVar14 = (undefined *)(iVar22 + -4);
      *(undefined2 *)(iVar22 + -4) = 0xf8;
      (**(code **)&DAT_1107_0420)();
      puVar15 = puVar14 + -2;
      *(undefined2 *)(puVar14 + -2) = 0xfb;
      FUN_1000_02ed();
      *(undefined2 *)(puVar15 + -2) = 0xfe;
      FUN_1000_03d8();
      pcVar6 = (code *)swi(0x1a);
      (*pcVar6)();
      *(undefined2 *)&DAT_1107_0098 = extraout_DX_00;
      *(int *)&DAT_1107_009a = iVar11;
      puVar16 = puVar15 + -2;
      *(undefined2 *)(puVar15 + -2) = 0x10e;
      (**(code **)&DAT_1107_0424)();
      *(undefined2 *)(puVar16 + -2) = *(undefined2 *)&DAT_1107_0088;
      *(undefined2 *)(puVar16 + -4) = *(undefined2 *)&DAT_1107_0086;
      *(undefined2 *)(puVar16 + -6) = *(undefined2 *)&DAT_1107_0084;
      *(undefined2 *)(puVar16 + -8) = 0x11d;
      uVar23 = FUN_1000_01fa();
      *(undefined2 *)(puVar16 + -8) = uVar23;
      *(undefined2 *)(puVar16 + -10) = 0x121;
      FUN_1000_02b8();
      *(undefined2 *)(puVar16 + -10) = 0x129;
      FUN_1000_01a5();
      *(undefined2 *)(puVar16 + -10) = 0x1000;
      puVar18 = puVar16 + -0xc;
      *(undefined2 *)(puVar16 + -0xc) = 0x12e;
      (*pcRam00000422)();
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
  pcVar4 = (char *)((int)piVar19 + (int)unaff_SI);
  *pcVar4 = *pcVar4 + cVar7;
  *(undefined **)(puVar17 + -2) = puVar18;
  puVar17[-4] = 0xff;
  puVar17[-3] = 0x8f;
  puVar17[-3] = puVar17[-4] + puVar17[-3];
  puVar17[-4] = puVar17[-4] - puVar17[-3];
  puVar17[-4] = puVar17[-4] * puVar17[-3];
  puVar17[-3] = (char)((int)(uint)(byte)puVar17[-3] / (int)(uint)(byte)puVar17[-4]);
  puVar17[-3] = (char)((int)(uint)(byte)puVar17[-3] % (uint)(byte)puVar17[-4]);
  puVar17[-4] = puVar17[-4] << 5;
  puVar17[-3] = (byte)puVar17[-3] >> (puVar17[-4] & 0x1f);
  *(uint *)(puVar17 + -6) = (uint)(byte)puVar17[-3];
  *(uint *)(puVar17 + -8) = (uint)(byte)puVar17[-4];
  *(undefined2 *)(puVar17 + -10) = 0x194;
  *(undefined2 *)(puVar17 + -0xc) = 0x275;
  FUN_1000_0920();
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
  FUN_1000_0920(0x194,0xc0,0);
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
  _DAT_1107_0076 = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_1107_0078 = in_BX;
  DAT_1107_007a = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_1107_007c = in_BX;
  DAT_1107_007e = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_1107_0080 = in_BX;
  DAT_1107_0082 = unaff_ES;
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
  DAT_1107_0096 = 0;
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
  FUN_1000_0920(0x194,0xc0,0);
  return;
}



undefined2 FUN_1000_027c(uint param_1)

{
  if ((int)param_1 < 0) {
    if (-param_1 < 0x23 || param_1 == 0xffdd) {
      DAT_1107_0094 = -param_1;
      DAT_1107_01a4 = 0xffff;
      return 0xffff;
    }
  }
  else {
    if (param_1 < 0x59) goto LAB_1000_028f;
  }
  param_1 = 0x57;
LAB_1000_028f:
  DAT_1107_0094 = (int)*(char *)(param_1 + 0x1a6);
  DAT_1107_01a4 = param_1;
  return 0xffff;
}



void __cdecl16near FUN_1000_02b7(void)

{
  return;
}



void __cdecl16near FUN_1000_02b8(void)

{
  int iVar1;
  
  while (iVar1 = DAT_1107_020a + -1, DAT_1107_020a != 0) {
    DAT_1107_020a = iVar1;
    (**(code **)(iVar1 * 2 + 0x42e))();
  }
  DAT_1107_020a = iVar1;
  (*DAT_1107_0200)();
  (*DAT_1107_0202)();
  (*DAT_1107_0204)();
  FUN_1000_0121();
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack

void FUN_1000_02ed(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined2 uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  int extraout_DX;
  int extraout_DX_00;
  undefined *puVar11;
  char **ppcVar12;
  char *pcVar13;
  char *pcVar14;
  char **ppcVar15;
  undefined2 unaff_SS;
  bool bVar16;
  bool bVar17;
  code *in_stack_00000000;
  char **ppcStack4;
  char **ppcStack2;
  
  DAT_1000_02e9 = 0x1107;
  uVar7 = (uint)*(byte *)&DAT_1107_0080;
  puVar11 = (undefined *)(uVar7 + 1);
  pcVar13 = (char *)(DAT_1107_008a + 2);
  uVar9 = 1;
  ppcVar15 = DAT_1107_0090;
  ppcVar12 = DAT_1107_0090;
  DAT_1000_02e7 = in_stack_00000000;
  if (2 < (byte)DAT_1107_0092) {
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
    ppcVar15 = DAT_1107_008c;
  }
  puVar8 = (undefined *)(uVar7 + 2 + uVar9 & 0xfffe);
  iVar3 = -(int)puVar8;
  pcVar14 = &stack0x0000 + iVar3;
  if (puVar8 <= register0x00000010) {
    *(uint *)((int)&ppcStack2 + iVar3) = uVar9;
    while (uVar9 - 1 != 0) {
      pcVar2 = pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar1 = pcVar13;
      pcVar13 = pcVar13 + 1;
      *pcVar2 = *pcVar1;
      uVar9 = uVar9 - 1;
    }
    bVar16 = false;
    *pcVar14 = '\0';
    bVar17 = uVar9 == 0;
LAB_1000_035a:
    *(char ***)((int)&ppcStack4 + iVar3) = 0x35d;
    bVar6 = FUN_1000_0376();
    iVar10 = extraout_DX;
    if (bVar16 || bVar17) {
      do {
        uVar4 = DAT_1000_02e9;
        if (bVar16) {
          iVar10 = *(uint *)((int)&ppcStack2 + iVar3) + iVar10;
          *(uint *)&DAT_1107_0084 = uVar9;
          puVar11 = (undefined *)((uVar9 + 1) * 2);
          ppcVar12 = (char **)(&stack0x0000 + (uVar9 + 1) * -2);
          pcVar13 = (char *)register0x00000010;
          if (register0x00000010 < puVar11) goto LAB_1000_01e2;
          *(char ***)(int **)&DAT_1107_0086 = ppcVar12;
          goto LAB_1000_03be;
        }
        *(char ***)((int)&ppcStack4 + iVar3) = 0x364;
        bVar6 = FUN_1000_0376();
        iVar10 = extraout_DX_00;
      } while (!bVar16 && !bVar17);
    }
    if ((bVar6 != 0x20) && (bVar6 != 0xd)) goto code_r0x0001036e;
    goto LAB_1000_0372;
  }
LAB_1000_01e2:
  ppcStack2 = (char **)0x1f1;
  FUN_1000_01da();
  ppcStack2 = (char **)0x3;
  ppcStack4 = (char **)0x1f8;
  cVar5 = FUN_1000_0121();
  pcVar1 = puVar11 + (int)pcVar13;
  *pcVar1 = *pcVar1 + cVar5;
  ppcStack4 = (char **)0xc0;
  ppcStack2 = ppcVar12;
  FUN_1000_0920(0x194,0xc0,0);
  return;
code_r0x0001036e:
  bVar16 = bVar6 < 9;
  bVar17 = bVar6 == 9;
  if (bVar17) {
LAB_1000_0372:
    bVar16 = false;
    bVar17 = true;
  }
  goto LAB_1000_035a;
  while( true ) {
    *(BADSPACEBASE **)ppcVar12 = register0x00000010;
    ppcVar12 = ppcVar12 + 1;
    do {
      pcVar1 = (char *)register0x00000010;
      register0x00000010 = (BADSPACEBASE *)((char *)register0x00000010 + 1);
      bVar16 = *pcVar1 != '\0';
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0 && bVar16);
    if (bVar16) break;
LAB_1000_03be:
    if (iVar10 == 0) break;
  }
  *ppcVar12 = (char *)0x0;
                    // WARNING: Could not recover jumptable at 0x000103d3. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_1000_02e7)();
  return;
}



int __cdecl16near FUN_1000_0376(void)

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



void __cdecl16near FUN_1000_03d8(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char **in_BX;
  char *unaff_SI;
  char *pcVar5;
  char *pcVar6;
  undefined2 uVar7;
  
  iVar4 = DAT_1107_008a;
  pcVar6 = (char *)FUN_1000_0527();
  uVar7 = DAT_1107_008c;
  if (pcVar6 != (char *)0x0) {
    unaff_SI = (char *)0x0;
    pcVar5 = pcVar6;
    while (iVar4 != 0) {
      iVar4 = iVar4 + -1;
      pcVar2 = pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar1 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      *pcVar2 = *pcVar1;
    }
    uVar7 = 0x1107;
    in_BX = (char **)FUN_1000_0527(DAT_1107_008e);
    DAT_1107_0088 = in_BX;
    if (in_BX != (char **)0x0) {
      iVar4 = -1;
      do {
        *in_BX = pcVar6;
        in_BX = in_BX + 1;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar1 = pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (*pcVar1 != '\0');
        if (*pcVar6 == '\0') {
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
  FUN_1000_0920(0x194,0xc0,0);
  return;
}



uint __cdecl16near FUN_1000_0422(undefined2 param_1)

{
  bool bVar1;
  
  bVar1 = DAT_1107_020a != 0x20;
  if (bVar1) {
    *(undefined2 *)(DAT_1107_020a * 2 + 0x42e) = param_1;
    DAT_1107_020a = DAT_1107_020a + 1;
  }
  return (uint)!bVar1;
}



void __cdecl16near FUN_1000_0448(int param_1)

{
  int iVar1;
  
  DAT_1107_0470 = *(int *)(param_1 + 6);
  if (DAT_1107_0470 == param_1) {
    DAT_1107_0470 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    *(int *)(DAT_1107_0470 + 4) = iVar1;
    *(int *)(iVar1 + 6) = DAT_1107_0470;
  }
  return;
}



int * __cdecl16near FUN_1000_0476(int *param_1,int param_2)

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
  if (DAT_1107_046e != param_1) {
    *(int **)((int)piVar3 + param_2 + 2) = piVar3;
    piVar2 = DAT_1107_046e;
  }
  DAT_1107_046e = piVar2;
  return piVar3 + 2;
}



int * __cdecl16near FUN_1000_04b0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_1000_05be(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar2 = (int *)0x0;
  }
  else {
    *(int **)(piVar1 + 1) = DAT_1107_046e;
    *piVar1 = param_1 + 1;
    piVar2 = piVar1 + 2;
    DAT_1107_046e = piVar1;
  }
  return piVar2;
}



int * __cdecl16near FUN_1000_04ed(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1000_05be(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar1 = (int *)0x0;
  }
  else {
    DAT_1107_046e = piVar1;
    DAT_1107_0472 = piVar1;
    *piVar1 = param_1 + 1;
    piVar1 = piVar1 + 2;
  }
  return piVar1;
}



uint * __cdecl16near FUN_1000_0527(uint param_1)

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
    if (DAT_1107_0472 == 0) {
      uVar2 = FUN_1000_04ed(uVar3);
    }
    else {
      puVar4 = DAT_1107_0470;
      if (DAT_1107_0470 != (uint *)0x0) {
        do {
          if (uVar3 + 0x28 <= *puVar4) {
            uVar2 = FUN_1000_0476(puVar4,uVar3);
            return (uint *)uVar2;
          }
          if (uVar3 <= *puVar4) {
            FUN_1000_0448(puVar4);
            puVar1 = puVar4;
            *puVar1 = *puVar1 + 1;
            return puVar4 + 2;
          }
          puVar4 = (uint *)puVar4[3];
        } while (puVar4 != DAT_1107_0470);
      }
      uVar2 = FUN_1000_04b0(uVar3);
    }
  }
  return (uint *)uVar2;
}



undefined2 __cdecl16near FUN_1000_059a(undefined *param_1)

{
  undefined2 uVar1;
  undefined auStack258 [256];
  
  if (param_1 < auStack258) {
    DAT_1107_009e = param_1;
    uVar1 = 0;
  }
  else {
    DAT_1107_0094 = 8;
    uVar1 = 0xffff;
  }
  return uVar1;
}



uint __cdecl16near FUN_1000_05be(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 + DAT_1107_009e;
  if ((param_2 + (uint)CARRY2(param_1,DAT_1107_009e) + (uint)(0xfeff < uVar1) != 0) ||
     (uVar2 = DAT_1107_009e, &stack0xfffe <= (undefined *)(uVar1 + 0x100))) {
    DAT_1107_0094 = 8;
    uVar2 = 0xffff;
    uVar1 = DAT_1107_009e;
  }
  DAT_1107_009e = uVar1;
  return uVar2;
}



void __cdecl16near FUN_1000_05f2(undefined2 param_1)

{
  FUN_1000_059a(param_1);
  return;
}



void __cdecl16near FUN_1000_0600(int param_1)

{
  FUN_1000_05be(param_1,param_1 >> 0xf);
  return;
}



// WARNING: Removing unreachable block (ram,0x000106bc)
// WARNING: Removing unreachable block (ram,0x0001070a)

char * __cdecl16near FUN_1000_0612(int param_1,char *param_2,char *param_3)

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
    if ((*(uint *)(param_1 * 2 + 0x34c) & 0x8000) == 0) {
      puVar1 = (uint *)(param_1 * 2 + 0x34c);
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
          pcVar3 = (char *)FUN_1000_0725(param_1,local_84,pcVar4);
          if (pcVar3 != pcVar4) {
            return pcVar3 + (int)(param_3 + (-(int)pcVar4 - (int)local_8a));
          }
          pcVar4 = local_84;
        }
      }
      pcVar4 = pcVar4 + -(int)local_84;
      if ((pcVar4 != (char *)0x0) &&
         (pcVar3 = (char *)FUN_1000_0725(param_1,local_84,pcVar4), pcVar3 != pcVar4)) {
        param_3 = pcVar3 + (int)(param_3 + -(int)pcVar4);
      }
    }
    else {
      param_3 = (char *)FUN_1000_0725(param_1,param_2,param_3);
    }
  }
  return param_3;
}



undefined2 __cdecl16near FUN_1000_0725(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined2 uVar3;
  bool bVar4;
  
  bVar4 = false;
  if ((*(uint *)(param_1 * 2 + 0x34c) & 0x800) != 0) {
    bVar4 = false;
    FUN_1000_076b(param_1,0,0,2);
  }
  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  if (bVar4) {
    uVar3 = FUN_1000_027c();
  }
  else {
    puVar1 = (uint *)(param_1 * 2 + 0x34c);
    *puVar1 = *puVar1 | 0x1000;
  }
  return uVar3;
}



void __cdecl16near FUN_1000_076b(int param_1)

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
    FUN_1000_027c();
  }
  return;
}



char * FUN_1000_0796(char param_1,char param_2,uint param_3,char *param_4,uint param_5,uint param_6)

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
    if (param_6 == 0) goto LAB_1000_07e0;
    do {
      uVar3 = (ulong)param_6;
      param_6 = param_6 / param_3;
      uVar3 = uVar3 % (ulong)param_3 << 0x10 | (ulong)param_5;
      param_5 = (uint)(uVar3 / (ulong)param_3);
      *pbVar6 = (byte)(uVar3 % (ulong)param_3);
      pbVar6 = pbVar6 + 1;
    } while (param_6 != 0);
    while (param_5 != 0) {
LAB_1000_07e0:
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



void __cdecl16near FUN_1000_0815(uint param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 10) {
    iVar1 = (int)param_1 >> 0xf;
  }
  else {
    iVar1 = 0;
  }
  FUN_1000_0796(param_1 & 0xff00 | 0x61,CONCAT11((char)(param_1 >> 8),1),param_3,param_2,param_1,
                iVar1);
  return;
}



void __cdecl16near
FUN_1000_083e(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  uint in_AX;
  
  FUN_1000_0796(CONCAT11((char)(in_AX >> 8),0x61),in_AX & 0xff00,param_4,param_3,param_1,param_2);
  return;
}



void __cdecl16near
FUN_1000_085a(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  FUN_1000_0796(0x61,(uint)(param_4 == 10),param_4,param_3,param_1,param_2);
  return;
}



void FUN_1000_0881(void)

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
  FUN_1000_0920(0x194);
  return;
}



undefined2 __cdecl16near FUN_1000_08a2(int *param_1)

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
      iVar4 = FUN_1000_0612((int)*(char *)(param_1 + 2),iVar4,iVar5);
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



void __cdecl16near FUN_1000_0920(undefined2 param_1)

{
  FUN_1000_0b48(&stack0x0004,param_1,0x21c,0xa56);
  return;
}



void __cdecl16near FUN_1000_0939(char param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  *piVar1 = *piVar1 + -1;
  FUN_1000_0952((int)param_1,param_2);
  return;
}



uint __cdecl16near FUN_1000_0952(undefined param_1,int *param_2)

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
         (((local_3 == 10 || (local_3 == 0xd)) && (iVar4 = FUN_1000_08a2(piVar3), iVar4 != 0)))) {
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
      iVar4 = FUN_1000_08a2(piVar3);
      if (iVar4 != 0) {
        return 0xffff;
      }
    }
  }
  if (((((local_3 == 10) && ((piVar3[1] & 0x40U) == 0)) &&
       (iVar4 = FUN_1000_0725((int)*(char *)(piVar3 + 2),0x3a6,1), iVar4 != 1)) ||
      (iVar4 = FUN_1000_0725((int)*(char *)(piVar3 + 2),&param_1,1), iVar4 != 1)) &&
     ((piVar3[1] & 0x200U) == 0)) {
    puVar2 = (uint *)(piVar3 + 1);
    *puVar2 = *puVar2 | 0x10;
    return 0xffff;
  }
  return (uint)local_3;
}



void __cdecl16near FUN_1000_0a40(undefined2 param_1)

{
  FUN_1000_0952(param_1,0x21c);
  return;
}



uint FUN_1000_0a56(int *param_1,uint param_2,undefined2 *param_3)

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
          uVar5 = FUN_1000_0939(*param_3,param_1);
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
      if ((*param_1 == 0) || (iVar3 = FUN_1000_08a2(param_1), iVar3 == 0)) {
        uVar4 = FUN_1000_0725((int)*(char *)(param_1 + 2),param_3,param_2);
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
      iVar3 = FUN_1000_0952((int)(char)*(byte *)param_3,param_1);
      uVar4 = uVar4 - 1;
      param_3 = (undefined2 *)((int)param_3 + 1);
    } while (iVar3 != -1);
    param_2 = 0;
  }
  return param_2;
}



void thunk_FUN_1000_0881(void)

{
                    // WARNING: Could not recover jumptable at 0x00010b19. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_1107_0426)();
  return;
}



void FUN_1000_0b1d(undefined2 param_1)

{
  byte bVar1;
  undefined *unaff_DI;
  undefined2 unaff_ES;
  
  bVar1 = (byte)((uint)param_1 >> 8);
  *unaff_DI = *(undefined *)(ulong)((uint)(bVar1 >> 4) + 0x3af);
  unaff_DI[1] = *(undefined *)(ulong)((uint)(bVar1 & 0xf) + 0x3af);
  unaff_DI[2] = *(undefined *)(ulong)((uint)(byte)((byte)param_1 >> 4) + 0x3af);
  unaff_DI[3] = *(undefined *)(ulong)((uint)((byte)param_1 & 0xf) + 0x3af);
  return;
}



int FUN_1000_0b48(undefined4 *param_1,byte *param_2)

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
LAB_1000_0bb2:
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
          if (0x5f < (byte)(bVar13 - 0x20)) goto LAB_1000_103f;
          cVar4 = *(char *)((uint)(byte)(bVar13 - 0x20) + 0x3bf);
          cVar21 = cVar4 * '\x02';
          bVar19 = (byte)((uint)puVar17 >> 8);
          param_2 = pbVar22;
          uVar28 = unaff_SS;
          puVar16 = local_94;
          puVar26 = local_92;
          switch(cVar4) {
          case '\0':
            if (bVar19 != 0) goto LAB_1000_103f;
            if (local_8f != 0x2b) {
              local_8f = bVar13;
            }
            break;
          case '\x01':
            if (bVar19 != 0) goto LAB_1000_103f;
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
              if (bVar19 != 4) goto LAB_1000_103f;
              puVar17 = (uint *)0x500;
            }
            break;
          case '\x03':
            if (bVar19 != 0) goto LAB_1000_103f;
            local_9a = local_9a | 2;
            bVar6 = true;
            break;
          case '\x04':
            if (3 < bVar19) goto LAB_1000_103f;
            puVar17 = (uint *)0x400;
            break;
          case '\x05':
switchD_1000_0c15_caseD_5:
            puVar14 = (uint *)(int)(char)(bVar13 - 0x30);
            if (bVar19 < 3) {
              puVar17 = (uint *)&DAT_1107_0200;
              puVar16 = puVar14;
              if (-1 < (int)local_94) {
                puVar16 = puVar14 + (int)local_94 * 5;
              }
            }
            else {
              if (bVar19 != 4) goto LAB_1000_103f;
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
            if (bVar19 != 0) goto switchD_1000_0c15_caseD_5;
            if (!bVar6) {
              local_9a = local_9a | 8;
              bVar8 = true;
              puVar17 = (uint *)0x100;
            }
            break;
          case '\n':
            goto switchD_1000_0c15_caseD_a;
          case '\v':
            uVar29 = CONCAT11(8,cVar21);
            goto LAB_1000_0d4f;
          case '\f':
            uVar29 = CONCAT11(10,cVar21);
            goto LAB_1000_0d54;
          case '\r':
            uVar29 = CONCAT11(0x10,bVar13 - 0x17);
LAB_1000_0d4f:
            local_8f = 0;
LAB_1000_0d54:
            local_95 = 0;
            pcVar15 = *(char **)param_1;
            pcVar20 = (char *)0x0;
            goto LAB_1000_0d77;
          case '\x0e':
            puVar17 = (uint *)&local_8a;
            puVar25 = (undefined4 *)((int)param_1 + 2);
            if (bVar9) {
              FUN_1000_0b1d(*(char **)(undefined4 *)((int)param_1 + 2),*(char **)param_1);
              puVar17 = local_89;
              local_8a = 0x3a;
              puVar25 = param_1 + 1;
            }
            param_1 = puVar25;
            FUN_1000_0b1d();
            *(undefined *)puVar17 = 0;
            puVar26 = (uint *)&local_8a;
            puVar17 = (uint *)((int)puVar17 - (int)puVar26);
            goto LAB_1000_0efc;
          case '\x0f':
            puVar17 = local_92;
            if ((int)local_92 < 0) {
              puVar17 = (uint *)(s_Turbo_C___Copyright__c__1988_Bor_1107_0004 + 2);
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
            thunk_FUN_1000_0881(uVar29,local_9a & 1,(uint)bVar13,local_89,puVar17,param_1);
            puVar26 = local_89;
            param_1 = (undefined4 *)((int)param_1 + local_6);
            goto LAB_1000_0efc;
          case '\x10':
            puVar1 = param_1;
            param_1 = (undefined4 *)((int)param_1 + 2);
            puVar26 = local_89;
            local_89[0] = (uint)*(char **)puVar1 & 0xff;
            puVar17 = (uint *)0x1;
            goto LAB_1000_0f3d;
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
              uVar28 = 0x1107;
              puVar16 = puVar26;
            }
            if (puVar16 == (uint *)0x0) {
              uVar28 = 0x1107;
              puVar26 = (uint *)0x3a8;
            }
            FUN_1000_0b61();
            if (local_92 < puVar17) {
              puVar17 = local_92;
            }
            goto LAB_1000_0f3d;
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
              uVar29 = 0x1107;
            }
            *piVar27 = (uint)(byte)(0x50 - local_57) + local_5a;
            goto LAB_1000_0bb2;
          default:
            goto LAB_1000_103f;
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
      FUN_1000_0b76();
    }
    goto LAB_1000_0bb2;
  }
  goto LAB_1000_1047;
switchD_1000_0c15_caseD_a:
  uVar29 = CONCAT11(10,cVar21);
  local_95 = 1;
  pcVar15 = *(char **)param_1;
  pcVar20 = (char *)((int)pcVar15 >> 0xf);
LAB_1000_0d77:
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
          FUN_1000_0b6e();
          local_94 = (uint *)((int)local_94 + -1);
        } while (local_94 != (uint *)0x0);
      }
      goto LAB_1000_0bb2;
    }
  }
  else {
    local_9a = local_9a | 4;
  }
  FUN_1000_0796(uVar29,(uint)local_95,(int)(char)((uint)uVar29 >> 8),puVar26,pcVar15,pcVar20);
  if ((int)local_92 < 1) {
LAB_1000_0efc:
    if ((!bVar8) || ((int)local_94 < 1)) goto LAB_1000_0f1e;
  }
  FUN_1000_0b61();
  if (*(byte *)puVar26 == 0x2d) {
    puVar17 = (uint *)((int)puVar17 + -1);
  }
  if (extraout_DX - (int)puVar17 != 0 && (int)puVar17 <= extraout_DX) {
    local_8e = extraout_DX - (int)puVar17;
  }
LAB_1000_0f1e:
  if ((local_8f != 0) && (*(byte *)puVar26 != 0x2d)) {
    local_8e = local_8e + -1 + (uint)(local_8e == 0);
    puVar26 = (uint *)((int)puVar26 + -1);
    *(byte *)puVar26 = local_8f;
  }
  FUN_1000_0b61();
LAB_1000_0f3d:
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
      FUN_1000_0b6e();
      local_94 = (uint *)((int)local_94 + -1);
    }
  }
  if (bVar12) {
    FUN_1000_0b6e();
    FUN_1000_0b6e();
  }
  if (0 < local_8e) {
    iVar18 = iVar18 - local_8e;
    local_94 = (uint *)((int)local_94 - local_8e);
    bVar13 = *(byte *)puVar26;
    if (((bVar13 == 0x2d) || (bVar13 == 0x20)) || (bVar13 == 0x2b)) {
      puVar26 = (uint *)((int)puVar26 + 1);
      FUN_1000_0b6e();
      iVar18 = iVar18 + -1;
      local_94 = (uint *)((int)local_94 + -1);
      local_8e = extraout_DX_00;
    }
    while (local_8e != 0) {
      FUN_1000_0b6e();
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
        FUN_1000_0b76();
      }
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
  }
  if (0 < (int)local_94) {
    do {
      FUN_1000_0b6e();
      local_94 = (uint *)((int)local_94 + -1);
    } while (local_94 != (uint *)0x0);
  }
  goto LAB_1000_0bb2;
LAB_1000_103f:
  do {
    FUN_1000_0b6e();
    pbVar3 = pbVar23;
    pbVar23 = pbVar23 + 1;
  } while (*pbVar3 != 0);
LAB_1000_1047:
  if (local_57 < 'P') {
    FUN_1000_0b76();
  }
  if (local_4 != 0) {
    local_5a = -1;
  }
  return local_5a;
}



void __cdecl16near FUN_1000_0b61(void)

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



void __cdecl16near FUN_1000_0b6e(void)

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



void __cdecl16near FUN_1000_0b76(void)

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


