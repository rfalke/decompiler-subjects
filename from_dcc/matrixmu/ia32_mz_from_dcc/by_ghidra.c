typedef unsigned char   undefined;

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
  code *pcVar5;
  char cVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  char *pcVar11;
  int *piVar12;
  int *piVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  int *piVar18;
  byte *unaff_SI;
  int *piVar19;
  int *piVar20;
  int iVar21;
  undefined2 unaff_ES;
  undefined2 uVar22;
  undefined2 uVar23;
  bool bVar24;
  undefined4 uVar25;
  
  uVar23 = 0x7f;
  piVar12 = (int *)&DAT_1060_0080;
                    // WARNING: Read-only address (ram,0x000101f8) is written
  uRam000101f8 = 0x1060;
  pcVar5 = (code *)swi(0x21);
  uVar25 = (*pcVar5)();
  uVar22 = s_Turbo_C___Copyright__c__1988_Bor_1060_0004._40_2_;
  piVar18 = DAT_1060_0002;
  iVar7 = (int)((ulong)uVar25 >> 0x10);
  *(undefined2 *)&DAT_1060_0092 = (int)uVar25;
  *(undefined2 *)&DAT_1060_0090 = unaff_ES;
  *(undefined2 *)&DAT_1060_008c = uVar22;
  *(int **)&DAT_1060_00ac = piVar18;
  *(undefined2 *)&DAT_1060_0096 = 0xffff;
  *(undefined2 *)((int)piVar12 + -2) = 0x2e;
  FUN_1000_0162();
  uVar25 = *(undefined4 *)&DAT_1060_008a;
  uVar22 = (undefined2)((ulong)uVar25 >> 0x10);
  piVar19 = (int *)uVar25;
  uVar9 = 0x7fff;
  piVar20 = piVar19;
  do {
    if (((*piVar20 == 0x3738) && (iVar10 = piVar20[1], (char)iVar10 == '=')) &&
       (piVar1 = (int *)&DAT_1060_0096, *piVar1 = *piVar1 + 1,
       ((byte)((uint)iVar10 >> 8) & 0xdf) == 0x59)) {
      piVar1 = (int *)&DAT_1060_0096;
      *piVar1 = *piVar1 + 1;
    }
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      piVar1 = piVar20;
      piVar20 = (int *)((int)piVar20 + 1);
    } while ((char)uVar25 != *(char *)piVar1);
    if (uVar9 == 0) goto LAB_1000_01e9;
    piVar19 = (int *)((int)piVar19 + 1);
  } while (*(char *)piVar20 != (char)uVar25);
  *(int *)&DAT_1060_008a = -(uVar9 | 0x8000);
  piVar19 = (int *)((int)piVar19 * 2 + 8U & 0xfff8);
  *(int **)&DAT_1060_008e = piVar19;
  piVar18 = (int *)((int)piVar18 - iVar7);
  uVar9 = *(uint *)&DAT_1060_019c;
  if (uVar9 < 0x200) {
    uVar9 = 0x200;
    *(undefined2 *)&DAT_1060_019c = 0x200;
  }
  piVar20 = (int *)(uVar9 + 0x1ec);
  if ((uVar9 < 0xfe14) &&
     (puVar2 = (uint *)&DAT_1060_019a, bVar24 = CARRY2((uint)piVar20,*puVar2),
     piVar20 = (int *)((int)piVar20 + *puVar2), !bVar24)) {
    bVar8 = 4;
    piVar20 = (int *)(((uint)piVar20 >> 4) + 1);
    if (piVar20 <= piVar18) {
      if (((*(int *)&DAT_1060_019c == 0) || (*(int *)&DAT_1060_019a == 0)) &&
         (piVar20 = (int *)0x1000, piVar18 < (int *)0x1001)) {
        piVar20 = piVar18;
      }
      pcVar11 = (char *)((int)piVar20 + iVar7);
      *(char **)&DAT_1060_00a4 = pcVar11;
      *(char **)&DAT_1060_00a8 = pcVar11;
      piVar19 = (int *)(pcVar11 + -*(int *)&DAT_1060_0090);
      piVar13 = (int *)((int)piVar12 + -2);
      *(int **)((int)piVar12 + -2) = piVar20;
      pcVar5 = (code *)swi(0x21);
      (*pcVar5)();
      iVar21 = *piVar13 << (bVar8 & 0x1f);
      piVar20 = (int *)&DAT_1060_01a6;
      for (iVar10 = 0x46; iVar10 != 0; iVar10 = iVar10 + -1) {
        piVar1 = piVar20;
        piVar20 = (int *)((int)piVar20 + 1);
        *(char *)piVar1 = '\0';
      }
      *(undefined2 *)(iVar21 + -2) = 0x1000;
      pcVar4 = *(code **)&DAT_1060_01a0;
      puVar14 = (undefined *)(iVar21 + -4);
      *(undefined2 *)(iVar21 + -4) = 0xf8;
      (*pcVar4)();
      puVar15 = puVar14 + -2;
      *(undefined2 *)(puVar14 + -2) = 0xfb;
      FUN_1000_02d5();
      *(undefined2 *)(puVar15 + -2) = 0xfe;
      FUN_1000_03c0();
      pcVar5 = (code *)swi(0x1a);
      (*pcVar5)();
      *(undefined2 *)&DAT_1060_0098 = extraout_DX_00;
      *(int *)&DAT_1060_009a = iVar10;
      pcVar4 = *(code **)&DAT_1060_01a4;
      puVar16 = puVar15 + -2;
      *(undefined2 *)(puVar15 + -2) = 0x10e;
      (*pcVar4)();
      *(undefined2 *)(puVar16 + -2) = *(undefined2 *)&DAT_1060_0088;
      *(undefined2 *)(puVar16 + -4) = *(undefined2 *)&DAT_1060_0086;
      *(undefined2 *)(puVar16 + -6) = *(undefined2 *)&DAT_1060_0084;
      *(undefined2 *)(puVar16 + -8) = 0x11d;
      uVar22 = FUN_1000_0283();
      *(undefined2 *)(puVar16 + -8) = uVar22;
      *(undefined2 *)(puVar16 + -10) = 0x121;
      FUN_1000_02a0();
      *(undefined2 *)(puVar16 + -10) = 0x129;
      FUN_1000_01a5();
      *(undefined2 *)(puVar16 + -10) = 0x1000;
      pcVar5 = pcRam000001a2;
      piVar18 = (int *)(puVar16 + -0xc);
      *(undefined2 *)(puVar16 + -0xc) = 0x12e;
      (*pcVar5)();
      iVar7 = 0;
      unaff_SI = (byte *)0x0;
      iVar10 = 0x2f;
      do {
        pbVar3 = unaff_SI;
        iVar7 = CONCAT11((char)((uint)iVar7 >> 8) + CARRY1((byte)iVar7,*pbVar3),
                         (byte)iVar7 + *pbVar3);
        unaff_SI = unaff_SI + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      if (iVar7 != 0xd37) {
        piVar18[-1] = 0x14f;
        FUN_1000_01da();
      }
      pcVar5 = (code *)swi(0x21);
      piVar12 = piVar18;
      (*pcVar5)();
      uVar23 = extraout_DX;
    }
  }
LAB_1000_01e9:
  *(undefined2 *)((int)piVar12 + -2) = 0x1f1;
  FUN_1000_01da();
  *(undefined2 *)((int)piVar12 + -2) = 3;
  puVar17 = (undefined *)((int)piVar12 + -4);
  *(undefined2 *)((int)piVar12 + -4) = 0x1f8;
  cVar6 = FUN_1000_0121();
  pbVar3 = (byte *)((int)piVar19 + (int)unaff_SI);
  *pbVar3 = *pbVar3 + cVar6;
  *(int **)(puVar17 + -2) = piVar18;
  *(byte **)(puVar17 + -6) = unaff_SI;
  *(int **)(puVar17 + -8) = piVar20;
  for (iVar7 = 0; iVar7 < 5; iVar7 = iVar7 + 1) {
    for (iVar10 = 0; iVar10 < 4; iVar10 = iVar10 + 1) {
      *(undefined2 *)(puVar17 + -4) = 0;
      while (*(int *)(puVar17 + -4) < 4) {
        *(undefined2 *)(puVar17 + -10) =
             *(undefined2 *)(iVar7 * 8 + *(int *)(puVar17 + 2) + *(int *)(puVar17 + -4) * 2);
        *(int *)(puVar17 + -10) =
             *(int *)(puVar17 + -10) *
             *(int *)(*(int *)(puVar17 + -4) * 10 + *(int *)(puVar17 + 4) + iVar10 * 2);
        *(int *)(puVar17 + -10) =
             *(int *)(puVar17 + -10) + *(int *)(iVar7 * 10 + *(int *)(puVar17 + 6) + iVar10 * 2);
        *(undefined2 *)(iVar7 * 10 + *(int *)(puVar17 + 6) + iVar10 * 2) =
             *(undefined2 *)(puVar17 + -10);
        *(int *)(puVar17 + -4) = *(int *)(puVar17 + -4) + 1;
      }
    }
  }
  return;
}



void FUN_1000_0121(undefined2 param_1,undefined2 param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int in_BX;
  byte *pbVar6;
  int iVar7;
  
  FUN_1000_01a5();
  (*pcRam000001a2)(0x1000);
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
  FUN_1000_01da();
  cVar3 = FUN_1000_0121();
  pbVar1 = pbVar6 + in_BX;
  *pbVar1 = *pbVar1 + cVar3;
  for (iVar4 = 0; iVar4 < 5; iVar4 = iVar4 + 1) {
    for (iVar5 = 0; iVar5 < 4; iVar5 = iVar5 + 1) {
      for (iVar7 = 0; iVar7 < 4; iVar7 = iVar7 + 1) {
        *(int *)(iVar4 * 10 + param_5 + iVar5 * 2) =
             *(int *)(iVar4 * 8 + param_3 + iVar7 * 2) * *(int *)(iVar7 * 10 + param_4 + iVar5 * 2)
             + *(int *)(iVar4 * 10 + param_5 + iVar5 * 2);
      }
    }
  }
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
  _DAT_1060_0076 = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_1060_0078 = in_BX;
  DAT_1060_007a = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_1060_007c = in_BX;
  DAT_1060_007e = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_1060_0080 = in_BX;
  DAT_1060_0082 = unaff_ES;
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
  DAT_1060_0096 = 0;
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



void __cdecl16near FUN_1000_01fa(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  for (iVar1 = 0; iVar1 < 5; iVar1 = iVar1 + 1) {
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      for (local_4 = 0; local_4 < 4; local_4 = local_4 + 1) {
        *(int *)(iVar1 * 10 + param_3 + iVar2 * 2) =
             *(int *)(iVar1 * 8 + param_1 + local_4 * 2) *
             *(int *)(local_4 * 10 + param_2 + iVar2 * 2) +
             *(int *)(iVar1 * 10 + param_3 + iVar2 * 2);
      }
    }
  }
  return;
}



void __cdecl16near FUN_1000_0283(void)

{
  undefined local_7a [40];
  undefined local_52 [40];
  undefined local_2a [40];
  
  FUN_1000_01fa(local_7a,local_52,local_2a);
  return;
}



void __cdecl16near FUN_1000_029f(void)

{
  return;
}



void __cdecl16near FUN_1000_02a0(void)

{
  int iVar1;
  
  while (iVar1 = DAT_1060_019e + -1, DAT_1060_019e != 0) {
    DAT_1060_019e = iVar1;
    (**(code **)(iVar1 * 2 + 0x1a6))();
  }
  DAT_1060_019e = iVar1;
  (*DAT_1060_0194)();
  (*DAT_1060_0196)();
  (*DAT_1060_0198)();
  FUN_1000_0121();
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack

void FUN_1000_02d5(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  int extraout_DX;
  int extraout_DX_00;
  char **ppcVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  undefined2 uVar14;
  undefined2 unaff_SS;
  bool bVar15;
  undefined uVar16;
  code *in_stack_00000000;
  int aiStack4 [2];
  
  DAT_1000_02d1 = 0x1060;
  uVar5 = (uint)*(byte *)&DAT_1060_0080;
  puVar6 = (undefined *)(uVar5 + 1);
  pcVar12 = (char *)(DAT_1060_008a + 2);
  uVar8 = 1;
  uVar14 = DAT_1060_0090;
  DAT_1000_02cf = in_stack_00000000;
  if (2 < DAT_1060_0092) {
    uVar8 = 0x7f;
    pcVar13 = pcVar12;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar1 = pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (*pcVar1 != '\0');
    if (uVar8 == 0) goto LAB_1000_01e2;
    uVar8 = uVar8 ^ 0x7f;
    uVar14 = DAT_1060_008c;
  }
  puVar7 = (undefined *)(uVar5 + 2 + uVar8 & 0xfffe);
  iVar11 = -(int)puVar7;
  pcVar13 = &stack0x0000 + iVar11;
  if (puVar7 <= register0x00000010) {
    *(uint *)((int)aiStack4 + iVar11 + 2) = uVar8;
    while (uVar8 - 1 != 0) {
      pcVar2 = pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar1 = pcVar12;
      pcVar12 = pcVar12 + 1;
      *pcVar2 = *pcVar1;
      uVar8 = uVar8 - 1;
    }
    bVar15 = false;
    *pcVar13 = '\0';
    uVar16 = uVar8 == 0;
LAB_1000_0342:
    *(undefined2 *)((int)aiStack4 + iVar11) = 0x345;
    bVar4 = FUN_1000_035e();
    iVar9 = extraout_DX;
    if (bVar15 || (bool)uVar16) {
      do {
        uVar14 = DAT_1000_02d1;
        if (bVar15) {
          iVar9 = *(int *)((int)aiStack4 + iVar11 + 2) + iVar9;
          *(uint *)&DAT_1060_0084 = uVar8;
          puVar6 = (undefined *)((uVar8 + 1) * 2);
          ppcVar10 = (char **)(&stack0x0000 + (uVar8 + 1) * -2);
          pcVar12 = (char *)register0x00000010;
          if (register0x00000010 < puVar6) goto LAB_1000_01e2;
          *(int **)&DAT_1060_0086 = (int *)ppcVar10;
          goto LAB_1000_03a6;
        }
        *(undefined2 *)((int)aiStack4 + iVar11) = 0x34c;
        bVar4 = FUN_1000_035e();
        iVar9 = extraout_DX_00;
      } while (!bVar15 && !(bool)uVar16);
    }
    if ((bVar4 != 0x20) && (bVar4 != 0xd)) goto code_r0x00010356;
    goto LAB_1000_035a;
  }
LAB_1000_01e2:
  aiStack4[1] = 0x1f1;
  FUN_1000_01da();
  aiStack4[1] = 3;
  aiStack4[0] = 0x1f8;
  cVar3 = FUN_1000_0121();
  pcVar1 = puVar6 + (int)pcVar12;
  *pcVar1 = *pcVar1 + cVar3;
  for (iVar11 = 0; iVar11 < 5; iVar11 = iVar11 + 1) {
    for (iVar9 = 0; iVar9 < 4; iVar9 = iVar9 + 1) {
      for (aiStack4[0] = 0; aiStack4[0] < 4; aiStack4[0] = aiStack4[0] + 1) {
        *(int *)(iVar11 * 10 + param_3 + iVar9 * 2) =
             *(int *)(iVar11 * 8 + param_1 + aiStack4[0] * 2) *
             *(int *)(aiStack4[0] * 10 + param_2 + iVar9 * 2) +
             *(int *)(iVar11 * 10 + param_3 + iVar9 * 2);
      }
    }
  }
  return;
code_r0x00010356:
  bVar15 = bVar4 < 9;
  uVar16 = bVar4 == 9;
  if ((bool)uVar16) {
LAB_1000_035a:
    bVar15 = false;
    uVar16 = true;
  }
  goto LAB_1000_0342;
  while( true ) {
    *ppcVar10 = (char *)register0x00000010;
    ppcVar10 = ppcVar10 + 1;
    do {
      pcVar1 = (char *)register0x00000010;
      register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 1);
      bVar15 = *pcVar1 != '\0';
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0 && bVar15);
    if (bVar15) break;
LAB_1000_03a6:
    if (iVar9 == 0) break;
  }
  *ppcVar10 = (char *)0x0;
                    // WARNING: Could not recover jumptable at 0x000103bb. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_1000_02cf)();
  return;
}



int __cdecl16near FUN_1000_035e(void)

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



void __cdecl16near FUN_1000_03c0(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  char **in_BX;
  char *unaff_SI;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined2 uVar9;
  
  iVar5 = DAT_1060_008a;
  pcVar4 = (char *)FUN_1000_050f();
  uVar9 = DAT_1060_008c;
  if (pcVar4 != (char *)0x0) {
    unaff_SI = (char *)0x0;
    pcVar7 = pcVar4;
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar2 = pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar1 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      *pcVar2 = *pcVar1;
    }
    uVar9 = 0x1060;
    in_BX = (char **)FUN_1000_050f(DAT_1060_008e);
    DAT_1060_0088 = in_BX;
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
  for (iVar5 = 0; iVar5 < 5; iVar5 = iVar5 + 1) {
    for (iVar6 = 0; iVar6 < 4; iVar6 = iVar6 + 1) {
      for (iVar8 = 0; iVar8 < 4; iVar8 = iVar8 + 1) {
        *(int *)(iVar5 * 10 + param_3 + iVar6 * 2) =
             *(int *)(iVar5 * 8 + param_1 + iVar8 * 2) * *(int *)(iVar8 * 10 + param_2 + iVar6 * 2)
             + *(int *)(iVar5 * 10 + param_3 + iVar6 * 2);
      }
    }
  }
  return;
}



bool __cdecl16near FUN_1000_040a(undefined2 param_1)

{
  bool bVar1;
  
  bVar1 = DAT_1060_019e != 0x20;
  if (bVar1) {
    *(undefined2 *)(DAT_1060_019e * 2 + 0x1a6) = param_1;
    DAT_1060_019e = DAT_1060_019e + 1;
  }
  return !bVar1;
}



void __cdecl16near FUN_1000_0430(int param_1)

{
  int iVar1;
  
  DAT_1060_01e8 = *(int *)(param_1 + 6);
  if (DAT_1060_01e8 == param_1) {
    DAT_1060_01e8 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    *(int *)(DAT_1060_01e8 + 4) = iVar1;
    *(int *)(iVar1 + 6) = DAT_1060_01e8;
  }
  return;
}



int * __cdecl16near FUN_1000_045e(int *param_1,int param_2)

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
  if (DAT_1060_01e6 != param_1) {
    *(int **)((int)piVar3 + param_2 + 2) = piVar3;
    piVar2 = DAT_1060_01e6;
  }
  DAT_1060_01e6 = piVar2;
  return piVar3 + 2;
}



int * __cdecl16near FUN_1000_0498(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_1000_05a6(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar1[1] = (int)DAT_1060_01e6;
    *piVar1 = param_1 + 1;
    piVar2 = piVar1 + 2;
    DAT_1060_01e6 = piVar1;
  }
  return piVar2;
}



int * __cdecl16near FUN_1000_04d5(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1000_05a6(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar1 = (int *)0x0;
  }
  else {
    DAT_1060_01e6 = piVar1;
    DAT_1060_01ea = piVar1;
    *piVar1 = param_1 + 1;
    piVar1 = piVar1 + 2;
  }
  return piVar1;
}



uint * __cdecl16near FUN_1000_050f(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  if ((param_1 == 0) || (0xfff4 < param_1)) {
    puVar2 = (uint *)0x0;
  }
  else {
    uVar3 = param_1 + 0xb & 0xfff8;
    if (DAT_1060_01ea == 0) {
      puVar2 = (uint *)FUN_1000_04d5(uVar3);
    }
    else {
      puVar2 = DAT_1060_01e8;
      if (DAT_1060_01e8 != (uint *)0x0) {
        do {
          if (uVar3 + 0x28 <= *puVar2) {
            puVar2 = (uint *)FUN_1000_045e(puVar2,uVar3);
            return puVar2;
          }
          if (uVar3 <= *puVar2) {
            FUN_1000_0430(puVar2);
            puVar1 = puVar2;
            *puVar1 = *puVar1 + 1;
            return puVar2 + 2;
          }
          puVar2 = (uint *)puVar2[3];
        } while (puVar2 != DAT_1060_01e8);
      }
      puVar2 = (uint *)FUN_1000_0498(uVar3);
    }
  }
  return puVar2;
}



undefined2 __cdecl16near FUN_1000_0582(undefined *param_1)

{
  undefined2 uVar1;
  undefined auStack258 [256];
  
  if (param_1 < auStack258) {
    DAT_1060_009e = param_1;
    uVar1 = 0;
  }
  else {
    DAT_1060_0094 = 8;
    uVar1 = 0xffff;
  }
  return uVar1;
}



uint __cdecl16near FUN_1000_05a6(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 + DAT_1060_009e;
  if ((param_2 + (uint)CARRY2(param_1,DAT_1060_009e) + (uint)(0xfeff < uVar1) != 0) ||
     (uVar2 = DAT_1060_009e, &stack0xfffe <= (undefined *)(uVar1 + 0x100))) {
    DAT_1060_0094 = 8;
    uVar2 = 0xffff;
    uVar1 = DAT_1060_009e;
  }
  DAT_1060_009e = uVar1;
  return uVar2;
}



void __cdecl16near FUN_1000_05da(undefined2 param_1)

{
  FUN_1000_0582(param_1);
  return;
}



void __cdecl16near FUN_1000_05e8(int param_1)

{
  FUN_1000_05a6(param_1,param_1 >> 0xf);
  return;
}


