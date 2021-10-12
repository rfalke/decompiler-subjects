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
  
  uVar22 = 0x23e;
  piVar11 = (int *)(undefined *)&DAT_11da_0080;
                    // WARNING: Read-only address (ram,0x000101f8) is written
  uRam000101f8 = 0x11da;
  pcVar4 = (code *)swi(0x21);
  uVar24 = (*pcVar4)();
  uVar21 = s_Turbo_C___Copyright__c__1988_Bor_11da_0004._40_2_;
  piVar17 = DAT_11da_0002;
  iVar6 = (int)((ulong)uVar24 >> 0x10);
  *(undefined2 *)&DAT_11da_0092 = (int)uVar24;
  *(undefined2 *)&DAT_11da_0090 = unaff_ES;
  *(undefined2 *)&DAT_11da_008c = uVar21;
  *(int **)&DAT_11da_00ac = piVar17;
  *(undefined2 *)&DAT_11da_0096 = 0xffff;
  *(undefined2 *)((int)piVar11 + -2) = 0x2e;
  FUN_1000_0162();
  uVar24 = *(undefined4 *)&DAT_11da_008a;
  uVar21 = (undefined2)((ulong)uVar24 >> 0x10);
  piVar18 = (int *)uVar24;
  uVar8 = 0x7fff;
  piVar19 = piVar18;
  do {
    if (((*piVar19 == 0x3738) && (iVar9 = piVar19[1], (char)iVar9 == '=')) &&
       (piVar1 = (int *)&DAT_11da_0096, *piVar1 = *piVar1 + 1,
       ((byte)((uint)iVar9 >> 8) & 0xdf) == 0x59)) {
      piVar1 = (int *)&DAT_11da_0096;
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
  *(int *)&DAT_11da_008a = -(uVar8 | 0x8000);
  piVar18 = (int *)((int)piVar18 * 2 + 8U & 0xfff8);
  *(int **)&DAT_11da_008e = piVar18;
  piVar17 = (int *)((int)piVar17 - iVar6);
  uVar8 = *(uint *)&DAT_11da_024c;
  if (uVar8 < 0x200) {
    uVar8 = 0x200;
    *(undefined2 *)&DAT_11da_024c = 0x200;
  }
  piVar19 = (int *)(uVar8 + 0x63e);
  if ((uVar8 < 0xf9c2) &&
     (puVar2 = (uint *)&DAT_11da_024a, bVar23 = CARRY2((uint)piVar19,*puVar2),
     piVar19 = (int *)((int)piVar19 + *puVar2), !bVar23)) {
    bVar7 = 4;
    piVar19 = (int *)(((uint)piVar19 >> 4) + 1);
    if (piVar19 <= piVar17) {
      if (((*(int *)&DAT_11da_024c == 0) || (*(int *)&DAT_11da_024a == 0)) &&
         (piVar19 = (int *)0x1000, piVar17 < (int *)0x1001)) {
        piVar19 = piVar17;
      }
      pcVar10 = (char *)((int)piVar19 + iVar6);
      *(char **)&DAT_11da_00a4 = pcVar10;
      *(char **)&DAT_11da_00a8 = pcVar10;
      piVar18 = (int *)(pcVar10 + -*(int *)&DAT_11da_0090);
      piVar12 = (int *)((int)piVar11 + -2);
      *(int **)((int)piVar11 + -2) = piVar19;
      pcVar4 = (code *)swi(0x21);
      (*pcVar4)();
      iVar20 = *piVar12 << (bVar7 & 0x1f);
      piVar19 = (int *)&DAT_11da_05f8;
      for (iVar9 = 0x46; iVar9 != 0; iVar9 = iVar9 + -1) {
        piVar1 = piVar19;
        piVar19 = (int *)((int)piVar19 + 1);
        *(char *)piVar1 = '\0';
      }
      *(undefined2 *)(iVar20 + -2) = 0x1000;
      puVar13 = (undefined *)(iVar20 + -4);
      *(undefined2 *)(iVar20 + -4) = 0xf8;
      (**(code **)&DAT_11da_05ea)();
      puVar14 = puVar13 + -2;
      *(undefined2 *)(puVar13 + -2) = 0xfb;
      FUN_1000_0318();
      *(undefined2 *)(puVar14 + -2) = 0xfe;
      FUN_1000_0403();
      pcVar4 = (code *)swi(0x1a);
      (*pcVar4)();
      *(undefined2 *)&DAT_11da_0098 = extraout_DX_00;
      *(int *)&DAT_11da_009a = iVar9;
      puVar15 = puVar14 + -2;
      *(undefined2 *)(puVar14 + -2) = 0x10e;
      (**(code **)&DAT_11da_05ee)();
      *(undefined2 *)(puVar15 + -2) = *(undefined2 *)&DAT_11da_0088;
      *(undefined2 *)(puVar15 + -4) = *(undefined2 *)&DAT_11da_0086;
      *(undefined2 *)(puVar15 + -6) = *(undefined2 *)&DAT_11da_0084;
      *(undefined2 *)(puVar15 + -8) = 0x11d;
      uVar21 = FUN_1000_01fa();
      *(undefined2 *)(puVar15 + -8) = uVar21;
      *(undefined2 *)(puVar15 + -10) = 0x121;
      FUN_1000_02e3();
      *(undefined2 *)(puVar15 + -10) = 0x129;
      FUN_1000_01a5();
      *(undefined2 *)(puVar15 + -10) = 0x1000;
      piVar17 = (int *)(puVar15 + -0xc);
      *(undefined2 *)(puVar15 + -0xc) = 0x12e;
      (*pcRam000005ec)();
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
  *(byte **)(puVar16 + -0xe) = unaff_SI;
  *(int **)(puVar16 + -0x10) = piVar19;
  *(undefined2 *)(puVar16 + -0x12) = 0x1a8;
  *(undefined2 *)(puVar16 + -0x14) = 0x209;
  FUN_1000_0e2d();
  *(undefined **)(puVar16 + -0x12) = puVar16 + -6;
  *(undefined2 *)(puVar16 + -0x14) = 0x1c4;
  *(undefined2 *)(puVar16 + -0x16) = 0x215;
  FUN_1000_16b6();
  *(undefined2 *)(puVar16 + -0x12) = *(undefined2 *)(puVar16 + -4);
  *(undefined2 *)(puVar16 + -0x14) = *(undefined2 *)(puVar16 + -6);
  *(undefined2 *)(puVar16 + -0x16) = 0x1c8;
  *(undefined2 *)(puVar16 + -0x18) = 0x224;
  FUN_1000_0e2d();
  uVar21 = 0x14;
  *(undefined2 *)(puVar16 + -0xc) = 0x14;
  *(undefined2 *)(puVar16 + -8) = 0;
  *(undefined2 *)(puVar16 + -10) = 1;
  while( true ) {
    if ((*(int *)(puVar16 + -4) <= *(int *)(puVar16 + -8)) &&
       ((*(int *)(puVar16 + -4) < *(int *)(puVar16 + -8) ||
        (*(uint *)(puVar16 + -6) <= *(uint *)(puVar16 + -10) &&
         *(uint *)(puVar16 + -10) != *(uint *)(puVar16 + -6))))) break;
    for (iVar6 = 1; iVar6 < 0x29; iVar6 = iVar6 + 1) {
      uVar21 = 0;
    }
    puVar2 = (uint *)(puVar16 + -10);
    uVar8 = *puVar2;
    *puVar2 = *puVar2 + 1;
    *(uint *)(puVar16 + -8) = *(int *)(puVar16 + -8) + (uint)(0xfffe < uVar8);
  }
  *(undefined2 *)(puVar16 + -0x12) = uVar21;
  *(undefined2 *)(puVar16 + -0x14) = 0x1e2;
  *(undefined2 *)(puVar16 + -0x16) = 0x29f;
  FUN_1000_0e2d();
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
  undefined2 uVar7;
  bool bVar8;
  uint uStack6;
  int iStack4;
  uint uStack2;
  
  uStack2 = 0x129;
  FUN_1000_01a5();
  uStack2 = 0x1000;
  (*pcRam000005ec)();
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
    uStack2 = 0x14f;
    FUN_1000_01da();
  }
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  param_1 = (undefined *)0x1f1;
  FUN_1000_01da();
  param_1 = (undefined *)0x3;
  iVar4 = 0x1f8;
  cVar3 = FUN_1000_0121();
  pbVar1 = pbVar6 + in_BX;
  *pbVar1 = *pbVar1 + cVar3;
  param_1 = (undefined *)register0x00000010;
  FUN_1000_0e2d(0x1a8);
  FUN_1000_16b6(0x1c4,&uStack2);
  FUN_1000_0e2d(0x1c8,uStack2,iVar4);
  uVar7 = 0x14;
  iStack4 = 0;
  uStack6 = 1;
  while( true ) {
    if ((iVar4 <= iStack4) && ((iVar4 < iStack4 || (uStack2 < uStack6)))) break;
    for (iVar5 = 1; iVar5 < 0x29; iVar5 = iVar5 + 1) {
      uVar7 = 0;
    }
    bVar8 = 0xfffe < uStack6;
    uStack6 = uStack6 + 1;
    iStack4 = iStack4 + (uint)bVar8;
  }
  FUN_1000_0e2d(0x1e2,uVar7);
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
  _DAT_11da_0076 = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_11da_0078 = in_BX;
  DAT_11da_007a = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_11da_007c = in_BX;
  DAT_11da_007e = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_11da_0080 = in_BX;
  DAT_11da_0082 = unaff_ES;
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
  DAT_11da_0096 = 0;
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
  bool bVar3;
  uint local_a;
  int local_8;
  uint local_6;
  int local_4;
  
  FUN_1000_0e2d(0x1a8);
  FUN_1000_16b6(0x1c4,&local_6);
  FUN_1000_0e2d(0x1c8,local_6,local_4);
  uVar1 = 0x14;
  local_8 = 0;
  local_a = 1;
  while( true ) {
    if ((local_4 <= local_8) && ((local_4 < local_8 || (local_6 < local_a)))) break;
    for (iVar2 = 1; iVar2 < 0x29; iVar2 = iVar2 + 1) {
      uVar1 = 0;
    }
    bVar3 = 0xfffe < local_a;
    local_a = local_a + 1;
    local_8 = local_8 + (uint)bVar3;
  }
  FUN_1000_0e2d(0x1e2,uVar1);
  return;
}



undefined2 FUN_1000_02a7(uint param_1)

{
  if ((int)param_1 < 0) {
    if (-param_1 < 0x23 || param_1 == 0xffdd) {
      DAT_11da_0094 = -param_1;
      DAT_11da_01e8 = 0xffff;
      return 0xffff;
    }
  }
  else {
    if (param_1 < 0x59) goto LAB_1000_02ba;
  }
  param_1 = 0x57;
LAB_1000_02ba:
  DAT_11da_0094 = (int)*(char *)(param_1 + 0x1ea);
  DAT_11da_01e8 = param_1;
  return 0xffff;
}



void __cdecl16near FUN_1000_02e2(void)

{
  return;
}



void __cdecl16near FUN_1000_02e3(void)

{
  int iVar1;
  
  while (iVar1 = DAT_11da_024e + -1, DAT_11da_024e != 0) {
    DAT_11da_024e = iVar1;
    (**(code **)(iVar1 * 2 + 0x5f8))();
  }
  DAT_11da_024e = iVar1;
  (*DAT_11da_0244)();
  (*DAT_11da_0246)();
  (*DAT_11da_0248)();
  FUN_1000_0121();
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack

void FUN_1000_0318(void)

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
  undefined2 uVar11;
  char *pcVar12;
  int iVar13;
  char *pcVar14;
  char **ppcVar15;
  undefined2 unaff_SS;
  bool bVar16;
  undefined uVar17;
  code *in_stack_00000000;
  uint uStack10;
  int iStack8;
  uint uStack6;
  int iStack4;
  char **ppcStack2;
  
  DAT_1000_0314 = 0x11da;
  uVar5 = (uint)*(byte *)&DAT_11da_0080;
  puVar6 = (undefined *)(uVar5 + 1);
  pcVar12 = (char *)(DAT_11da_008a + 2);
  uVar8 = 1;
  ppcVar15 = DAT_11da_0090;
  ppcVar10 = DAT_11da_0090;
  DAT_1000_0312 = in_stack_00000000;
  if (2 < DAT_11da_0092) {
    uVar8 = 0x7f;
    pcVar14 = pcVar12;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar1 = pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (*pcVar1 != '\0');
    if (uVar8 == 0) goto LAB_1000_01e2;
    uVar8 = uVar8 ^ 0x7f;
    ppcVar15 = DAT_11da_008c;
  }
  puVar7 = (undefined *)(uVar5 + 2 + uVar8 & 0xfffe);
  iVar13 = -(int)puVar7;
  pcVar14 = &stack0x0000 + iVar13;
  if (puVar7 <= register0x00000010) {
    *(uint *)((int)&ppcStack2 + iVar13) = uVar8;
    while (uVar8 - 1 != 0) {
      pcVar2 = pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar1 = pcVar12;
      pcVar12 = pcVar12 + 1;
      *pcVar2 = *pcVar1;
      uVar8 = uVar8 - 1;
    }
    bVar16 = false;
    pcVar1 = pcVar14;
    pcVar14 = pcVar14 + 1;
    *pcVar1 = '\0';
    uVar17 = uVar8 == 0;
LAB_1000_0385:
    *(undefined2 *)((int)&iStack4 + iVar13) = 0x388;
    bVar4 = FUN_1000_03a1();
    iVar9 = extraout_DX;
    if (bVar16 || (bool)uVar17) {
      do {
        uVar11 = DAT_1000_0314;
        if (bVar16) {
          iVar9 = *(int *)((int)&ppcStack2 + iVar13) + iVar9;
          *(uint *)&DAT_11da_0084 = uVar8;
          puVar6 = (undefined *)((uVar8 + 1) * 2);
          ppcVar10 = (char **)(&stack0x0000 + (uVar8 + 1) * -2);
          pcVar12 = (char *)register0x00000010;
          if (register0x00000010 < puVar6) goto LAB_1000_01e2;
          *(int **)&DAT_11da_0086 = (int *)ppcVar10;
          goto LAB_1000_03e9;
        }
        *(undefined2 *)((int)&iStack4 + iVar13) = 0x38f;
        bVar4 = FUN_1000_03a1();
        iVar9 = extraout_DX_00;
      } while (!bVar16 && !(bool)uVar17);
    }
    if ((bVar4 != 0x20) && (bVar4 != 0xd)) goto code_r0x00010399;
    goto LAB_1000_039d;
  }
LAB_1000_01e2:
  ppcStack2 = (char **)0x1f1;
  FUN_1000_01da();
  ppcStack2 = (char **)0x3;
  iStack4 = 0x1f8;
  cVar3 = FUN_1000_0121();
  pcVar1 = puVar6 + (int)pcVar12;
  *pcVar1 = *pcVar1 + cVar3;
  ppcStack2 = ppcVar10;
  FUN_1000_0e2d(0x1a8,pcVar14,pcVar12);
  FUN_1000_16b6(0x1c4,&uStack6);
  FUN_1000_0e2d(0x1c8,uStack6,iStack4);
  uVar11 = 0x14;
  iStack8 = 0;
  uStack10 = 1;
  while( true ) {
    if ((iStack4 <= iStack8) && ((iStack4 < iStack8 || (uStack6 < uStack10)))) break;
    for (iVar13 = 1; iVar13 < 0x29; iVar13 = iVar13 + 1) {
      uVar11 = 0;
    }
    bVar16 = 0xfffe < uStack10;
    uStack10 = uStack10 + 1;
    iStack8 = iStack8 + (uint)bVar16;
  }
  FUN_1000_0e2d(0x1e2,uVar11,pcVar14,pcVar12,0x14);
  return;
code_r0x00010399:
  bVar16 = bVar4 < 9;
  uVar17 = bVar4 == 9;
  if ((bool)uVar17) {
LAB_1000_039d:
    bVar16 = false;
    uVar17 = true;
  }
  goto LAB_1000_0385;
  while( true ) {
    *ppcVar10 = (char *)register0x00000010;
    ppcVar10 = ppcVar10 + 1;
    do {
      pcVar1 = (char *)register0x00000010;
      register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 1);
      bVar16 = *pcVar1 != '\0';
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0 && bVar16);
    if (bVar16) break;
LAB_1000_03e9:
    if (iVar9 == 0) break;
  }
  *ppcVar10 = (char *)0x0;
                    // WARNING: Could not recover jumptable at 0x000103fe. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_1000_0312)();
  return;
}



int __cdecl16near FUN_1000_03a1(void)

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



void __cdecl16near FUN_1000_0403(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  char **in_BX;
  char *unaff_SI;
  char *pcVar6;
  bool bVar7;
  uint uStack10;
  int iStack8;
  uint uStack6;
  int iStack4;
  undefined2 uVar8;
  
  iStack4 = 0x40b;
  iVar5 = DAT_11da_008a;
  pcVar4 = (char *)FUN_1000_0552();
  uVar8 = DAT_11da_008c;
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
    uVar8 = 0x11da;
    iStack4 = DAT_11da_008e;
    uStack6 = 0x429;
    in_BX = (char **)FUN_1000_0552();
    DAT_11da_0088 = in_BX;
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
  iStack4 = 0x1f8;
  cVar3 = FUN_1000_0121();
  pcVar1 = (char *)((int)in_BX + (int)unaff_SI);
  *pcVar1 = *pcVar1 + cVar3;
  FUN_1000_0e2d(0x1a8,pcVar4,unaff_SI);
  FUN_1000_16b6(0x1c4,&uStack6);
  FUN_1000_0e2d(0x1c8,uStack6,iStack4);
  uVar8 = 0x14;
  iStack8 = 0;
  uStack10 = 1;
  while( true ) {
    if ((iStack4 <= iStack8) && ((iStack4 < iStack8 || (uStack6 < uStack10)))) break;
    for (iVar5 = 1; iVar5 < 0x29; iVar5 = iVar5 + 1) {
      uVar8 = 0;
    }
    bVar7 = 0xfffe < uStack10;
    uStack10 = uStack10 + 1;
    iStack8 = iStack8 + (uint)bVar7;
  }
  FUN_1000_0e2d(0x1e2,uVar8,pcVar4,unaff_SI,0x14);
  return;
}



bool __cdecl16near FUN_1000_044d(undefined2 param_1)

{
  bool bVar1;
  
  bVar1 = DAT_11da_024e != 0x20;
  if (bVar1) {
    *(undefined2 *)(DAT_11da_024e * 2 + 0x5f8) = param_1;
    DAT_11da_024e = DAT_11da_024e + 1;
  }
  return !bVar1;
}



void __cdecl16near FUN_1000_0473(int param_1)

{
  int iVar1;
  
  DAT_11da_063a = *(int *)(param_1 + 6);
  if (DAT_11da_063a == param_1) {
    DAT_11da_063a = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    *(int *)(DAT_11da_063a + 4) = iVar1;
    *(int *)(iVar1 + 6) = DAT_11da_063a;
  }
  return;
}



int * __cdecl16near FUN_1000_04a1(int *param_1,int param_2)

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
  if (DAT_11da_0638 != param_1) {
    *(int **)((int)piVar3 + param_2 + 2) = piVar3;
    piVar2 = DAT_11da_0638;
  }
  DAT_11da_0638 = piVar2;
  return piVar3 + 2;
}



int * __cdecl16near FUN_1000_04db(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_1000_05e9(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar1[1] = (int)DAT_11da_0638;
    *piVar1 = param_1 + 1;
    piVar2 = piVar1 + 2;
    DAT_11da_0638 = piVar1;
  }
  return piVar2;
}



int * __cdecl16near FUN_1000_0518(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1000_05e9(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar1 = (int *)0x0;
  }
  else {
    DAT_11da_0638 = piVar1;
    DAT_11da_063c = piVar1;
    *piVar1 = param_1 + 1;
    piVar1 = piVar1 + 2;
  }
  return piVar1;
}



uint * __cdecl16near FUN_1000_0552(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  if ((param_1 == 0) || (0xfff4 < param_1)) {
    puVar2 = (uint *)0x0;
  }
  else {
    uVar3 = param_1 + 0xb & 0xfff8;
    if (DAT_11da_063c == 0) {
      puVar2 = (uint *)FUN_1000_0518(uVar3);
    }
    else {
      puVar2 = DAT_11da_063a;
      if (DAT_11da_063a != (uint *)0x0) {
        do {
          if (uVar3 + 0x28 <= *puVar2) {
            puVar2 = (uint *)FUN_1000_04a1(puVar2,uVar3);
            return puVar2;
          }
          if (uVar3 <= *puVar2) {
            FUN_1000_0473(puVar2);
            puVar1 = puVar2;
            *puVar1 = *puVar1 + 1;
            return puVar2 + 2;
          }
          puVar2 = (uint *)puVar2[3];
        } while (puVar2 != DAT_11da_063a);
      }
      puVar2 = (uint *)FUN_1000_04db(uVar3);
    }
  }
  return puVar2;
}



undefined2 __cdecl16near FUN_1000_05c5(undefined *param_1)

{
  undefined2 uVar1;
  undefined auStack258 [256];
  
  if (param_1 < auStack258) {
    DAT_11da_009e = param_1;
    uVar1 = 0;
  }
  else {
    DAT_11da_0094 = 8;
    uVar1 = 0xffff;
  }
  return uVar1;
}



uint __cdecl16near FUN_1000_05e9(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 + DAT_11da_009e;
  if ((param_2 + (uint)CARRY2(param_1,DAT_11da_009e) + (uint)(0xfeff < uVar1) != 0) ||
     (uVar2 = DAT_11da_009e, &stack0xfffe <= (undefined *)(uVar1 + 0x100))) {
    DAT_11da_0094 = 8;
    uVar2 = 0xffff;
    uVar1 = DAT_11da_009e;
  }
  DAT_11da_009e = uVar1;
  return uVar2;
}



void __cdecl16near FUN_1000_061d(undefined2 param_1)

{
  FUN_1000_05c5(param_1);
  return;
}



void __cdecl16near FUN_1000_062b(int param_1)

{
  FUN_1000_05e9(param_1,param_1 >> 0xf);
  return;
}



int FUN_1000_063d(int *param_1)

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



undefined2 __cdecl16near FUN_1000_0684(int *param_1,uint param_2,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  
  iVar2 = FUN_1000_0daf(param_1);
  if (iVar2 == 0) {
    if ((param_4 == 1) && (0 < *param_1)) {
      uVar4 = FUN_1000_063d(param_1);
      bVar5 = param_2 < uVar4;
      param_2 = param_2 - uVar4;
      param_3 = (param_3 - ((int)uVar4 >> 0xf)) - (uint)bVar5;
    }
    puVar1 = (uint *)(param_1 + 1);
    *puVar1 = *puVar1 & 0xfe5f;
    *param_1 = 0;
    param_1[5] = param_1[4];
    lVar6 = FUN_1000_0c0a((int)*(char *)(param_1 + 2),param_2,param_3,param_4);
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



undefined4 __cdecl16near FUN_1000_06e8(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_1000_0daf(param_1);
  if (iVar1 == 0) {
    uVar3 = FUN_1000_1d30((int)*(char *)(param_1 + 2));
    iVar1 = (int)((ulong)uVar3 >> 0x10);
    if (0 < *param_1) {
      uVar2 = FUN_1000_063d(param_1);
      uVar3 = CONCAT22((iVar1 - ((int)uVar2 >> 0xf)) - (uint)((uint)uVar3 < uVar2),
                       (uint)uVar3 - uVar2);
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



void __cdecl16near FUN_1000_073d(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x352;
  iVar2 = 0x14;
  while (iVar2 != 0) {
    if ((*(uint *)(iVar1 + 2) & 0x300) == 0x300) {
      FUN_1000_0daf(iVar1);
    }
    iVar1 = iVar1 + 0x10;
    iVar2 = iVar2 + -1;
  }
  return;
}



undefined2 FUN_1000_0764(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  if ((param_1[1] & 0x200U) != 0) {
    FUN_1000_073d();
  }
  iVar3 = param_1[3];
  iVar2 = param_1[4];
  param_1[5] = iVar2;
  iVar3 = FUN_1000_09d9((int)*(char *)(param_1 + 2),iVar2,iVar3);
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



void __cdecl16near FUN_1000_07c1(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  *piVar1 = *piVar1 + 1;
  FUN_1000_07d4(param_1);
  return;
}



uint __cdecl16near FUN_1000_07d4(int *param_1)

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
      if ((DAT_11da_04ba != 0) || (param_1 != (int *)0x352)) {
        while( true ) {
          if ((param_1[1] & 0x200U) != 0) {
            FUN_1000_073d();
          }
          iVar3 = FUN_1000_0a95((int)*(char *)(param_1 + 2),&local_3,1);
          if (iVar3 != 1) break;
          if ((local_3 != 0xd) || ((param_1[1] & 0x40U) != 0)) {
            puVar2 = (uint *)(param_1 + 1);
            *puVar2 = *puVar2 & 0xffdf;
            return (uint)local_3;
          }
        }
        iVar3 = FUN_1000_0d41((int)*(char *)(param_1 + 2));
        if (iVar3 == 1) {
          param_1[1] = param_1[1] & 0xfe7fU | 0x20;
        }
        else {
          puVar2 = (uint *)(param_1 + 1);
          *puVar2 = *puVar2 | 0x10;
        }
        return 0xffff;
      }
      iVar3 = FUN_1000_08d4((int)cRam000120f6);
      if (iVar3 == 0) {
        DAT_11da_0354 = DAT_11da_0354 & 0xfdff;
      }
      FUN_1000_08e6(0x352,0,(DAT_11da_0354 & 0x200) != 0,0x200);
    }
    iVar3 = FUN_1000_0764(param_1);
    if (iVar3 != 0) {
      return 0xffff;
    }
  }
  puVar2 = (uint *)(param_1 + 1);
  *puVar2 = *puVar2 | 0x10;
  return 0xffff;
}



uint __cdecl16near FUN_1000_08d4(void)

{
  code *pcVar1;
  uint extraout_DX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return extraout_DX & 0x80;
}



undefined2 __cdecl16near FUN_1000_08e6(int *param_1,int param_2,int param_3,uint param_4)

{
  uint *puVar1;
  undefined2 uVar2;
  
  if ((((int *)param_1[7] == param_1) && (param_3 < 3)) && (param_4 < 0x8000)) {
    if ((DAT_11da_04bc == 0) && (param_1 == (int *)0x362)) {
      DAT_11da_04bc = 1;
    }
    else {
      if ((DAT_11da_04ba == 0) && (param_1 == (int *)0x352)) {
        DAT_11da_04ba = 1;
      }
    }
    if (*param_1 != 0) {
      FUN_1000_0684(param_1,0,0,1);
    }
    if ((param_1[1] & 4U) != 0) {
      FUN_1000_168f(param_1[4]);
    }
    puVar1 = (uint *)(param_1 + 1);
    *puVar1 = *puVar1 & 0xfff3;
    param_1[3] = 0;
    param_1[4] = (int)param_1 + 5;
    param_1[5] = (int)param_1 + 5;
    if ((param_3 != 2) && (param_4 != 0)) {
      DAT_11da_0244 = 0x9b8;
      if (param_2 == 0) {
        param_2 = FUN_1000_0552(param_4);
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



int __cdecl16near FUN_1000_09d9(int param_1,char *param_2,int param_3)

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
  
  if ((param_3 + 1U < 2) || ((*(uint *)(param_1 * 2 + 0x492) & 0x200) != 0)) {
    iVar4 = 0;
  }
  else {
    do {
      iVar4 = FUN_1000_0a95(param_1,param_2,param_3);
      if (iVar4 + 1U < 2) {
        return iVar4;
      }
      pcVar6 = param_2;
      pcVar3 = param_2;
      if ((*(uint *)(param_1 * 2 + 0x492) & 0x8000) != 0) {
        return iVar4;
      }
      do {
        while( true ) {
          pcVar7 = pcVar3;
          cVar2 = *pcVar6;
          pcVar5 = param_2;
          if (cVar2 == '\x1a') {
            FUN_1000_0c0a(param_1,-iVar4,-(uint)(iVar4 != 0),2);
            puVar1 = (uint *)(param_1 * 2 + 0x492);
            *puVar1 = *puVar1 | 0x200;
            goto LAB_1000_0a89;
          }
          if (cVar2 == '\r') break;
          *pcVar7 = cVar2;
          iVar4 = iVar4 + -1;
          pcVar6 = pcVar6 + 1;
          pcVar3 = pcVar7 + 1;
          if (iVar4 == 0) goto LAB_1000_0a61;
        }
        iVar4 = iVar4 + -1;
        pcVar6 = pcVar6 + 1;
        pcVar3 = pcVar7;
      } while (iVar4 != 0);
      uVar8 = 0x11da;
      FUN_1000_0a95(param_1,&local_3,1);
      *pcVar7 = local_3;
LAB_1000_0a61:
      pcVar7 = pcVar7 + 1;
    } while (pcVar7 == pcVar5);
LAB_1000_0a89:
    iVar4 = (int)pcVar7 - (int)pcVar5;
  }
  return iVar4;
}



void __cdecl16near FUN_1000_0a95(void)

{
  code *pcVar1;
  undefined in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    FUN_1000_02a7();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00010b5b)
// WARNING: Removing unreachable block (ram,0x00010ba9)

int __cdecl16near FUN_1000_0ab1(int param_1,char *param_2,int param_3)

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
    if ((*(uint *)(param_1 * 2 + 0x492) & 0x8000) == 0) {
      puVar1 = (uint *)(param_1 * 2 + 0x492);
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
          iVar4 = FUN_1000_0bc4(param_1,local_84,iVar6);
          if (iVar4 != iVar6) {
            return ((param_3 - local_8a) + iVar4) - iVar6;
          }
          pcVar5 = local_84;
        }
      }
      iVar4 = (int)pcVar5 - (int)local_84;
      if ((iVar4 != 0) && (iVar6 = FUN_1000_0bc4(param_1,local_84,iVar4), iVar6 != iVar4)) {
        param_3 = (param_3 + iVar6) - iVar4;
      }
    }
    else {
      param_3 = FUN_1000_0bc4(param_1,param_2,param_3);
    }
  }
  return param_3;
}



undefined2 __cdecl16near FUN_1000_0bc4(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined uVar4;
  
  uVar4 = 0;
  if ((*(uint *)(param_1 * 2 + 0x492) & 0x800) != 0) {
    uVar4 = 0;
    FUN_1000_0c0a(param_1,0,0,2);
  }
  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  if ((bool)uVar4) {
    uVar3 = FUN_1000_02a7();
  }
  else {
    puVar1 = (uint *)(param_1 * 2 + 0x492);
    *puVar1 = *puVar1 | 0x1000;
  }
  return uVar3;
}



void __cdecl16near FUN_1000_0c0a(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  
  puVar1 = (uint *)(param_1 * 2 + 0x492);
  bVar3 = false;
  *puVar1 = *puVar1 & 0xfdff;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (bVar3) {
    FUN_1000_02a7();
  }
  return;
}



char * FUN_1000_0c35(char param_1,char param_2,uint param_3,char *param_4,uint param_5,uint param_6)

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
    if (param_6 == 0) goto LAB_1000_0c7f;
    do {
      uVar3 = (ulong)param_6;
      param_6 = param_6 / param_3;
      uVar3 = uVar3 % (ulong)param_3 << 0x10 | (ulong)param_5;
      param_5 = (uint)(uVar3 / param_3);
      *pbVar6 = (byte)(uVar3 % (ulong)param_3);
      pbVar6 = pbVar6 + 1;
    } while (param_6 != 0);
    while (param_5 != 0) {
LAB_1000_0c7f:
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



void __cdecl16near FUN_1000_0cb4(uint param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 10) {
    iVar1 = (int)param_1 >> 0xf;
  }
  else {
    iVar1 = 0;
  }
  FUN_1000_0c35(param_1 & 0xff00 | 0x61,1,param_3,param_2,param_1,iVar1);
  return;
}



void __cdecl16near
FUN_1000_0cdd(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  uint in_AX;
  
  FUN_1000_0c35(0x61,in_AX & 0xff00,param_4,param_3,param_1,param_2);
  return;
}



void __cdecl16near
FUN_1000_0cf9(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  FUN_1000_0c35(0x61,param_4 == 10,param_4,param_3,param_1,param_2);
  return;
}



void FUN_1000_0d20(uint param_1,int param_2)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined2 uVar5;
  int unaff_SI;
  int iVar6;
  bool bVar7;
  uint uStack2;
  
  iVar4 = 2;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  FUN_1000_01da();
  param_2 = 0x1f8;
  cVar3 = FUN_1000_0121();
  pcVar1 = (char *)(iVar4 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar3;
  FUN_1000_0e2d(0x1a8);
  FUN_1000_16b6(0x1c4,&param_1);
  FUN_1000_0e2d(0x1c8,param_1,param_2);
  uVar5 = 0x14;
  iVar4 = 0;
  uStack2 = 1;
  while( true ) {
    if ((param_2 <= iVar4) && ((param_2 < iVar4 || (param_1 < uStack2)))) break;
    for (iVar6 = 1; iVar6 < 0x29; iVar6 = iVar6 + 1) {
      uVar5 = 0;
    }
    bVar7 = 0xfffe < uStack2;
    uStack2 = uStack2 + 1;
    iVar4 = iVar4 + (uint)bVar7;
  }
  FUN_1000_0e2d(0x1e2,uVar5);
  return;
}



void FUN_1000_0d25(uint param_1,int param_2)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined2 uVar5;
  int unaff_SI;
  int iVar6;
  bool bVar7;
  uint uStack2;
  
  iVar4 = 2;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  FUN_1000_01da();
  param_2 = 0x1f8;
  cVar3 = FUN_1000_0121();
  pcVar1 = (char *)(iVar4 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar3;
  FUN_1000_0e2d(0x1a8);
  FUN_1000_16b6(0x1c4,&param_1);
  FUN_1000_0e2d(0x1c8,param_1,param_2);
  uVar5 = 0x14;
  iVar4 = 0;
  uStack2 = 1;
  while( true ) {
    if ((param_2 <= iVar4) && ((param_2 < iVar4 || (param_1 < uStack2)))) break;
    for (iVar6 = 1; iVar6 < 0x29; iVar6 = iVar6 + 1) {
      uVar5 = 0;
    }
    bVar7 = 0xfffe < uStack2;
    uStack2 = uStack2 + 1;
    iVar4 = iVar4 + (uint)bVar7;
  }
  FUN_1000_0e2d(0x1e2,uVar5);
  return;
}



// WARNING: Removing unreachable block (ram,0x00010d97)

undefined2 __cdecl16near FUN_1000_0d41(int param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  bool bVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong uVar6;
  uint uVar7;
  
  bVar3 = false;
  if ((*(uint *)(param_1 * 2 + 0x492) & 0x200) != 0) {
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
  uVar2 = FUN_1000_02a7(uVar2);
  return uVar2;
}



undefined2 __cdecl16near FUN_1000_0daf(int *param_1)

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
      iVar4 = FUN_1000_0ab1((int)*(char *)(param_1 + 2),iVar4,iVar5);
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



void __cdecl16near FUN_1000_0e2d(undefined2 param_1)

{
  FUN_1000_1055(&stack0x0004,param_1,0x362,0xf63);
  return;
}



void __cdecl16near FUN_1000_0e46(char param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  *piVar1 = *piVar1 + -1;
  FUN_1000_0e5f((int)param_1,param_2);
  return;
}



uint __cdecl16near FUN_1000_0e5f(byte param_1,int *param_2)

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
         (((bVar3 == 10 || (bVar3 == 0xd)) && (iVar5 = FUN_1000_0daf(piVar4), iVar5 != 0)))) {
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
      iVar5 = FUN_1000_0daf(piVar4);
      if (iVar5 != 0) {
        return 0xffff;
      }
    }
  }
  if (((((bVar3 == 10) && ((piVar4[1] & 0x40U) == 0)) &&
       (iVar5 = FUN_1000_0bc4((int)*(char *)(piVar4 + 2),0x4f0,1), iVar5 != 1)) ||
      (iVar5 = FUN_1000_0bc4((int)*(char *)(piVar4 + 2),&param_1,1), iVar5 != 1)) &&
     ((piVar4[1] & 0x200U) == 0)) {
    puVar2 = (uint *)(piVar4 + 1);
    *puVar2 = *puVar2 | 0x10;
    return 0xffff;
  }
  return (uint)bVar3;
}



void __cdecl16near FUN_1000_0f4d(undefined2 param_1)

{
  FUN_1000_0e5f(param_1,0x362);
  return;
}



uint FUN_1000_0f63(int *param_1,uint param_2,undefined2 *param_3)

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
          uVar5 = FUN_1000_0e46(*param_3,param_1);
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
      if ((*param_1 == 0) || (iVar3 = FUN_1000_0daf(param_1), iVar3 == 0)) {
        uVar4 = FUN_1000_0bc4((int)*(char *)(param_1 + 2),param_3,param_2);
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
      iVar3 = FUN_1000_0e5f((int)(char)*(byte *)param_3,param_1);
      uVar4 = uVar4 - 1;
      param_3 = (undefined2 *)((int)param_3 + 1);
    } while (iVar3 != -1);
    param_2 = 0;
  }
  return param_2;
}



void thunk_FUN_1000_0d20(void)

{
                    // WARNING: Could not recover jumptable at 0x00011026. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_11da_05f0)();
  return;
}



void FUN_1000_102a(undefined2 param_1)

{
  byte bVar1;
  undefined *unaff_DI;
  undefined2 unaff_ES;
  
  bVar1 = (byte)((uint)param_1 >> 8);
  *unaff_DI = *(undefined *)(ulong)((bVar1 >> 4) + 0x4f9);
  unaff_DI[1] = *(undefined *)(ulong)((bVar1 & 0xf) + 0x4f9);
  unaff_DI[2] = *(undefined *)(ulong)((byte)((byte)param_1 >> 4) + 0x4f9);
  unaff_DI[3] = *(undefined *)(ulong)(((byte)param_1 & 0xf) + 0x4f9);
  return;
}



int FUN_1000_1055(undefined4 *param_1,char *param_2)

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
LAB_1000_10bf:
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
          if (0x5f < (byte)(cVar15 - 0x20U)) goto LAB_1000_154c;
          cVar4 = *(char *)((byte)(cVar15 - 0x20U) + 0x509);
          cVar22 = cVar4 * '\x02';
          bVar20 = (byte)((uint)pcVar19 >> 8);
          param_2 = pcVar21;
          uVar27 = unaff_SS;
          pcVar14 = local_94;
          pcVar5 = local_92;
          switch(cVar4) {
          case '\0':
            if (bVar20 != 0) goto LAB_1000_154c;
            if (local_8f != '+') {
              local_8f = cVar15;
            }
            break;
          case '\x01':
            if (bVar20 != 0) goto LAB_1000_154c;
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
              if (bVar20 != 4) goto LAB_1000_154c;
              pcVar19 = (char *)((int)s_0123456789ABCDEF_11da_04f9 + 7);
            }
            break;
          case '\x03':
            if (bVar20 != 0) goto LAB_1000_154c;
            bVar7 = true;
            break;
          case '\x04':
            if (3 < bVar20) goto LAB_1000_154c;
            pcVar19 = (char *)0x400;
            break;
          case '\x05':
switchD_1000_1122_caseD_5:
            pcVar16 = (char *)(int)(char)(cVar15 + -0x30);
            if (bVar20 < 3) {
              pcVar19 = (char *)0x200;
              pcVar14 = pcVar16;
              if (-1 < (int)local_94) {
                pcVar14 = pcVar16 + (int)local_94 * 10;
              }
            }
            else {
              if (bVar20 != 4) goto LAB_1000_154c;
              pcVar5 = pcVar16;
              if (-1 < (int)local_92) {
                pcVar5 = pcVar16 + (int)local_92 * 10;
              }
            }
            break;
          case '\x06':
            bVar6 = true;
            pcVar19 = (char *)((int)s_0123456789ABCDEF_11da_04f9 + 7);
            break;
          case '\a':
            bVar12 = true;
            bVar6 = false;
            pcVar19 = (char *)((int)s_0123456789ABCDEF_11da_04f9 + 7);
            break;
          case '\b':
            bVar11 = true;
            bVar6 = false;
            pcVar19 = (char *)((int)s_0123456789ABCDEF_11da_04f9 + 7);
            break;
          case '\t':
            if (bVar20 != 0) goto switchD_1000_1122_caseD_5;
            if (!bVar7) {
              bVar9 = true;
              pcVar19 = (char *)0x100;
            }
            break;
          case '\n':
            goto switchD_1000_1122_caseD_a;
          case '\v':
            uVar28 = CONCAT11(8,cVar22);
            goto LAB_1000_125c;
          case '\f':
            uVar28 = CONCAT11(10,cVar22);
            goto LAB_1000_1261;
          case '\r':
            uVar28 = CONCAT11(0x10,cVar15 + -0x17);
LAB_1000_125c:
            local_8f = '\0';
LAB_1000_1261:
            local_95 = 0;
            pcVar17 = *(char **)param_1;
            pcVar21 = (char *)0x0;
            goto LAB_1000_1284;
          case '\x0e':
            puVar18 = (uint *)&local_8a;
            puVar24 = (undefined4 *)((int)param_1 + 2);
            if (bVar10) {
              FUN_1000_102a(*(char **)(undefined4 *)((int)param_1 + 2),*(char **)param_1);
              puVar18 = local_89;
              local_8a = 0x3a;
              puVar24 = param_1 + 1;
            }
            param_1 = puVar24;
            FUN_1000_102a();
            *(undefined *)puVar18 = 0;
            puVar25 = (uint *)&local_8a;
            pcVar19 = (char *)((int)puVar18 - (int)puVar25);
            goto LAB_1000_1409;
          case '\x0f':
            pcVar19 = local_92;
            if ((int)local_92 < 0) {
              pcVar19 = (char *)((int)s_Turbo_C___Copyright__c__1988_Bor_11da_0004 + 2);
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
            thunk_FUN_1000_0d20(uVar28,local_9a,cVar15,local_89,pcVar19,param_1);
            puVar25 = local_89;
            param_1 = (undefined4 *)((int)param_1 + local_6);
            goto LAB_1000_1409;
          case '\x10':
            puVar1 = param_1;
            param_1 = (undefined4 *)((int)param_1 + 2);
            puVar25 = local_89;
            local_89[0] = (uint)*(char **)puVar1 & 0xff;
            pcVar19 = (char *)0x1;
            goto LAB_1000_144a;
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
              uVar27 = 0x11da;
              puVar18 = puVar25;
            }
            if (puVar18 == (uint *)0x0) {
              uVar27 = 0x11da;
              puVar25 = (uint *)0x4f2;
            }
            FUN_1000_106e();
            if (local_92 < pcVar19) {
              pcVar19 = local_92;
            }
            goto LAB_1000_144a;
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
              uVar28 = 0x11da;
            }
            *piVar26 = (uint)(byte)(0x50 - local_57) + local_5a;
            goto LAB_1000_10bf;
          default:
            goto LAB_1000_154c;
          case '\x16':
            bVar10 = false;
            pcVar19 = (char *)((int)s_0123456789ABCDEF_11da_04f9 + 7);
            break;
          case '\x17':
            bVar10 = true;
            pcVar19 = (char *)((int)s_0123456789ABCDEF_11da_04f9 + 7);
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
      FUN_1000_1083();
    }
    goto LAB_1000_10bf;
  }
  goto LAB_1000_1554;
switchD_1000_1122_caseD_a:
  uVar28 = CONCAT11(10,cVar22);
  local_95 = 1;
  pcVar17 = *(char **)param_1;
  pcVar21 = (char *)((int)pcVar17 >> 0xf);
LAB_1000_1284:
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
          FUN_1000_107b();
          local_94 = local_94 + -1;
        } while (local_94 != (char *)0x0);
      }
      goto LAB_1000_10bf;
    }
  }
  else {
    local_9a = local_9a | 4;
  }
  FUN_1000_0c35(uVar28,local_95,(char)((uint)uVar28 >> 8),puVar25,pcVar17,pcVar21);
  if ((int)local_92 < 1) {
LAB_1000_1409:
    if ((!bVar9) || ((int)local_94 < 1)) goto LAB_1000_142b;
  }
  FUN_1000_106e();
  if (*(char *)puVar25 == '-') {
    pcVar19 = pcVar19 + -1;
  }
  if (extraout_DX - (int)pcVar19 != 0 && (int)pcVar19 <= extraout_DX) {
    local_8e = extraout_DX - (int)pcVar19;
  }
LAB_1000_142b:
  if ((local_8f != '\0') && (*(char *)puVar25 != '-')) {
    local_8e = local_8e + -1 + (uint)(local_8e == 0);
    puVar25 = (uint *)((int)puVar25 + -1);
    *(char *)puVar25 = local_8f;
  }
  FUN_1000_106e();
LAB_1000_144a:
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
      FUN_1000_107b();
    }
  }
  if (bVar13) {
    FUN_1000_107b();
    FUN_1000_107b();
  }
  if (0 < local_8e) {
    pcVar19 = pcVar19 + -local_8e;
    local_94 = local_94 + -local_8e;
    cVar15 = *(char *)puVar25;
    if (((cVar15 == '-') || (cVar15 == ' ')) || (cVar15 == '+')) {
      puVar25 = (uint *)((int)puVar25 + 1);
      FUN_1000_107b();
      pcVar19 = pcVar19 + -1;
      local_94 = local_94 + -1;
      local_8e = extraout_DX_00;
    }
    for (; local_8e != 0; local_8e = local_8e + -1) {
      FUN_1000_107b();
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
        FUN_1000_1083();
      }
      pcVar19 = pcVar19 + -1;
    } while (pcVar19 != (char *)0x0);
  }
  if (0 < (int)local_94) {
    do {
      FUN_1000_107b();
      local_94 = local_94 + -1;
    } while (local_94 != (char *)0x0);
  }
  goto LAB_1000_10bf;
LAB_1000_154c:
  do {
    FUN_1000_107b();
    pcVar3 = pcVar17;
    pcVar17 = pcVar17 + 1;
  } while (*pcVar3 != '\0');
LAB_1000_1554:
  if (local_57 < 'P') {
    FUN_1000_1083();
  }
  if (local_4 != 0) {
    local_5a = -1;
  }
  return local_5a;
}



void __cdecl16near FUN_1000_106e(void)

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



void __cdecl16near FUN_1000_107b(void)

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



void __cdecl16near FUN_1000_1083(void)

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



void __cdecl16near FUN_1000_1578(int param_1)

{
  int iVar1;
  
  if (DAT_11da_063a == 0) {
    DAT_11da_063a = param_1;
    *(int *)(param_1 + 4) = param_1;
    *(int *)(param_1 + 6) = param_1;
  }
  else {
    iVar1 = *(int *)(DAT_11da_063a + 6);
    *(int *)(DAT_11da_063a + 6) = param_1;
    *(int *)(iVar1 + 4) = param_1;
    *(int *)(param_1 + 6) = iVar1;
    *(int *)(param_1 + 4) = DAT_11da_063a;
  }
  return;
}



void __cdecl16near FUN_1000_15b1(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_1;
  *piVar1 = *piVar1 + *param_2;
  if (DAT_11da_0638 == param_2) {
    DAT_11da_0638 = param_1;
  }
  else {
    *(int **)((int)param_2 + *param_2 + 2) = param_1;
  }
  FUN_1000_0473(param_2);
  return;
}



void __cdecl16near FUN_1000_15e8(void)

{
  uint *puVar1;
  
  if (DAT_11da_063c == DAT_11da_0638) {
    FUN_1000_061d(DAT_11da_063c);
    DAT_11da_0638 = (uint *)0x0;
    DAT_11da_063c = (uint *)0x0;
  }
  else {
    puVar1 = (uint *)DAT_11da_0638[1];
    if ((*puVar1 & 1) == 0) {
      FUN_1000_0473(puVar1);
      if (puVar1 == DAT_11da_063c) {
        DAT_11da_0638 = (uint *)0x0;
        DAT_11da_063c = (uint *)0x0;
      }
      else {
        DAT_11da_0638 = (uint *)puVar1[1];
      }
      FUN_1000_061d(puVar1);
    }
    else {
      FUN_1000_061d(DAT_11da_0638);
      DAT_11da_0638 = puVar1;
    }
  }
  return;
}



void __cdecl16near FUN_1000_1641(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar1 = param_1;
  *puVar1 = *puVar1 - 1;
  puVar3 = (uint *)(*param_1 + (int)param_1);
  puVar2 = (uint *)param_1[1];
  if (((*puVar2 & 1) == 0) && (param_1 != DAT_11da_063c)) {
    puVar1 = puVar2;
    *puVar1 = *puVar1 + *param_1;
    puVar3[1] = (uint)puVar2;
    param_1 = puVar2;
  }
  else {
    FUN_1000_1578(param_1);
  }
  if ((*puVar3 & 1) == 0) {
    FUN_1000_15b1(param_1,puVar3);
  }
  return;
}



void __cdecl16near FUN_1000_168f(int param_1)

{
  if (param_1 != 0) {
    if (param_1 + -4 == DAT_11da_0638) {
      FUN_1000_15e8();
    }
    else {
      FUN_1000_1641(param_1 + -4);
    }
  }
  return;
}



void __cdecl16near FUN_1000_16b6(undefined2 param_1)

{
  FUN_1000_16d5(0x7d4,0x1d47,0x352,param_1,&stack0x0004);
  return;
}



int __cdecl16near FUN_1000_16d5(code *param_1,code *param_2,undefined2 param_3,byte *param_4)

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
LAB_1000_1708:
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
LAB_1000_1776:
    local_24 = puVar12;
    param_4 = pbVar14 + 1;
    puVar7 = (undefined2 *)(int)(char)*pbVar14;
    if ((int)puVar7 < 0) {
      return local_2a;
    }
    bVar9 = *(byte *)(puVar7 + 0x2b5);
    puVar12 = local_24;
    switch(bVar9) {
    case 0:
    case 1:
    case 2:
      goto LAB_1000_1ae1;
    case 3:
      goto LAB_1000_1711;
    case 4:
      bVar3 = true;
      pbVar14 = param_4;
      goto LAB_1000_1776;
    case 5:
      pbVar14 = param_4;
      puVar12 = puVar7 + -0x18;
      if (-1 < (int)local_24) {
        puVar12 = puVar7 + -0x18 + (int)local_24 * 5;
      }
      goto LAB_1000_1776;
    case 6:
      if (!bVar3) {
        FUN_1000_16ea();
      }
      puVar12 = local_24;
      if ((int)local_24 < 0) {
        puVar12 = (undefined2 *)0x1;
      }
      if (local_24 == (undefined2 *)0x0) goto LAB_1000_19d9;
      goto LAB_1000_19bf;
    case 7:
    case 8:
      uVar11 = 10;
      break;
    case 9:
      uVar11 = 0;
      break;
    case 10:
      thunk_FUN_1000_0d25(param_1,param_2,param_3,(uint)local_24 & 0x7fff,&local_28,&local_26);
      cVar18 = '\0';
      cVar4 = local_26 < 0;
      if (local_26 < 1) {
        thunk_FUN_1000_0d25();
        if (cVar18 == cVar4) {
          return local_2a;
        }
        goto switchD_1000_1794_caseD_16;
      }
      if (bVar3) {
        thunk_FUN_1000_0d25();
      }
      else {
        FUN_1000_16ea();
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
        thunk_FUN_1000_0d25(puVar7,uVar11);
      }
      goto LAB_1000_1708;
    case 0xb:
      bVar16 = true;
      pbVar14 = param_4;
      goto LAB_1000_1776;
    case 0xc:
      pbVar14 = param_4;
      goto LAB_1000_1776;
    case 0xd:
      bVar17 = true;
      pbVar14 = param_4;
      goto LAB_1000_1776;
    case 0xe:
      uVar11 = 8;
      break;
    case 0xf:
      iVar5 = 0x1951;
      goto LAB_1000_1ae8;
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
              FUN_1000_16ea();
            }
            goto LAB_1000_1a59;
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
      goto switchD_1000_1794_caseD_11;
    case 0x12:
      uVar11 = 0x10;
      break;
    case 0x13:
      iVar5 = 0x187a;
      goto LAB_1000_1ae8;
    case 0x14:
      pbVar14 = param_4;
      goto LAB_1000_1776;
    case 0x15:
      pbVar14 = param_4;
      goto LAB_1000_1776;
    default:
      goto switchD_1000_1794_caseD_16;
    }
    if (((uint)puVar7 & 0x20) == 0) {
      bVar17 = true;
    }
    FUN_1000_1bae(param_1,param_2,param_3,uVar11,(uint)local_24 & 0x7fff,&local_28,&local_26);
    if (local_26 < 1) {
      if (-1 < local_26) {
        return local_2a;
      }
      goto switchD_1000_1794_caseD_16;
    }
    if (bVar3) goto LAB_1000_1708;
    local_2a = local_2a + 1;
    goto LAB_1000_1860;
  }
LAB_1000_1711:
  iVar5 = (int)(char)bVar9;
  local_28 = local_28 + 1;
  iVar6 = (*param_1)(param_3);
  if (-1 < iVar6) goto code_r0x00011721;
  goto switchD_1000_1794_caseD_16;
switchD_1000_1794_caseD_11:
  pbVar14 = param_4;
  if (!bVar3) goto LAB_1000_1860;
  goto LAB_1000_1776;
LAB_1000_1a59:
  puVar7 = (undefined2 *)((int)puVar12 - 1);
  if (0 < (int)puVar12) {
    local_28 = local_28 + 1;
    uVar8 = (*param_1)(param_3);
    if ((int)uVar8 < 0) {
      if (((int)puVar12 < (int)local_24) && (!bVar3)) {
        *pbVar15 = 0;
        local_2a = local_2a + 1;
      }
      goto switchD_1000_1794_caseD_16;
    }
    if ((*(byte *)((int)local_22 + (uVar8 >> 3)) & '\x01' << ((byte)uVar8 & 7)) == 0) {
      if (!bVar17) goto LAB_1000_1a98;
    }
    else {
      if (bVar17) {
LAB_1000_1a98:
        (*param_2)(uVar8,param_3);
        local_28 = local_28 + -1;
        if ((int)local_24 <= (int)puVar12) goto LAB_1000_1ab5;
        goto LAB_1000_1aac;
      }
    }
    puVar12 = puVar7;
    if (!bVar3) {
      pbVar1 = pbVar15;
      pbVar15 = pbVar15 + 1;
      *pbVar1 = (byte)uVar8;
    }
    goto LAB_1000_1a59;
  }
LAB_1000_1aac:
  if (!bVar3) {
    local_2a = local_2a + 1;
LAB_1000_1ab5:
    *pbVar15 = 0;
  }
  goto LAB_1000_1708;
LAB_1000_1ae8:
  local_28 = local_28 + 1;
  iVar6 = (*param_1)(param_3);
  if (iVar6 < 1) {
    if (iVar6 != 0) {
switchD_1000_1794_caseD_16:
      (*param_2)(0xffff,param_3);
      return local_2a - (uint)(local_2a == 0);
    }
LAB_1000_1b03:
                    // WARNING: Could not recover jumptable at 0x00011b07. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar5 = (*(code *)(iVar5 + 3))();
    return iVar5;
  }
  if (((char)iVar6 < '\0') || (*(char *)(iVar6 + 0x56a) != '\x01')) goto LAB_1000_1b03;
  goto LAB_1000_1ae8;
LAB_1000_1860:
  uVar19 = FUN_1000_16ea();
  *puVar7 = (int)uVar19;
  if (bVar17) {
    puVar7[1] = (int)((ulong)uVar19 >> 0x10);
  }
  goto LAB_1000_1708;
  while (puVar13 = (undefined2 *)((int)puVar12 - 1), bVar17 = 0 < (int)puVar12, puVar12 = puVar13,
        puVar13 != (undefined2 *)0x0 && bVar17) {
LAB_1000_19bf:
    local_28 = local_28 + 1;
    iVar5 = (*param_1)(param_3);
    if (!bVar3) {
      puVar2 = puVar7;
      puVar7 = (undefined2 *)((int)puVar7 + 1);
      *(char *)puVar2 = (char)iVar5;
    }
    if (iVar5 < 0) goto switchD_1000_1794_caseD_16;
  }
LAB_1000_19d9:
  if (!bVar3) {
    local_2a = local_2a + 1;
  }
  goto LAB_1000_1708;
code_r0x00011721:
  if ((iVar5 < 0) || (*(char *)(iVar5 + 0x56a) != '\x01')) {
    if (iVar6 != iVar5) {
      (*param_2)(iVar6,param_3);
LAB_1000_1ae1:
      return local_2a;
    }
  }
  else {
    while ((-1 < (char)iVar6 && (*(char *)(iVar6 + 0x56a) == '\x01'))) {
      local_28 = local_28 + 1;
      iVar6 = (*param_1)(param_3);
      if (iVar6 < 1) goto switchD_1000_1794_caseD_16;
    }
    (*param_2)(iVar6,param_3);
    local_28 = local_28 + -1;
  }
  goto LAB_1000_1708;
}



void __cdecl16near FUN_1000_16ea(void)

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



void thunk_FUN_1000_0d25(void)

{
                    // WARNING: Could not recover jumptable at 0x00011b74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_11da_05f2)();
  return;
}



void thunk_FUN_1000_0d25(void)

{
                    // WARNING: Could not recover jumptable at 0x00011b78. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_11da_05f4)();
  return;
}



void thunk_FUN_1000_0d25(void)

{
                    // WARNING: Could not recover jumptable at 0x00011b7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_11da_05f6)();
  return;
}



void __cdecl16near FUN_1000_1b80(void)

{
  return;
}



undefined4 __cdecl16near
FUN_1000_1bae(code *param_1,code *param_2,undefined2 param_3,uint param_4,int param_5,int *param_6,
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
    if ((int)uVar7 < 0) goto LAB_1000_1c3c;
    cVar5 = (char)uVar7;
    uVar7 = SEXT12(cVar5);
  } while (((uVar7 & 0x80) == 0) && ((*(byte *)(uVar7 + 0x251) & 1) != 0));
  if (param_5 < 1) {
LAB_1000_1c43:
    local_6 = iVar2;
    local_4 = 0;
  }
  else {
    if (cVar5 != '+') {
      iVar4 = param_5 + -1;
      if (cVar5 == '-') {
        local_7 = '\x01';
        goto LAB_1000_1bf3;
      }
LAB_1000_1c06:
      local_6 = iVar2;
      param_5 = iVar4;
      uVar13 = 0;
      uVar14 = 0;
      bVar6 = (byte)uVar7;
      iVar2 = local_6;
      if (param_4 == 0) {
        param_4 = 10;
        if (bVar6 != 0x30) {
LAB_1000_1c89:
          uVar15 = bVar6 < 0x30;
          FUN_1000_1b80();
          uVar13 = uVar7;
          if (!(bool)uVar15) goto LAB_1000_1ca0;
          goto LAB_1000_1c43;
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
            goto LAB_1000_1ca0;
          }
LAB_1000_1caf:
          while (FUN_1000_1b80(), !(bool)uVar15) {
            uVar10 = (uint)((ulong)uVar13 * (ulong)param_4 >> 0x10);
            uVar8 = (uint)((ulong)uVar13 * (ulong)param_4);
            uVar13 = uVar7 + uVar8;
            uVar7 = (uint)CARRY2(uVar7,uVar8);
            uVar8 = uVar14 + uVar10;
            uVar15 = CARRY2(uVar14,uVar10) || CARRY2(uVar8,uVar7);
            uVar14 = uVar8 + uVar7;
            if (uVar14 != 0) goto LAB_1000_1ccc;
LAB_1000_1ca0:
            if (param_5 < 1) goto LAB_1000_1cf1;
            local_6 = local_6 + 1;
            uVar7 = (*param_1)(param_3);
            param_5 = param_5 + -1;
          }
LAB_1000_1ce5:
          (*param_2)(uVar7,param_3);
          local_6 = local_6 + -1;
        }
      }
      else {
        if ((0x24 < param_4) || (bVar9 = (byte)param_4, bVar9 < 2)) goto LAB_1000_1c43;
        if (bVar6 != 0x30) goto LAB_1000_1c89;
        uVar15 = bVar9 < 0x10;
        if (bVar9 != 0x10) goto LAB_1000_1ca0;
        iVar2 = param_5 + -1;
        if (0 < param_5) {
          local_6 = local_6 + 1;
          uVar7 = (*param_1)(param_3);
          bVar6 = (byte)uVar7;
          uVar15 = bVar6 < 0x78;
          param_5 = iVar2;
          if (bVar6 == 0x78) goto LAB_1000_1ca0;
          uVar15 = bVar6 < 0x58;
          if (bVar6 == 0x58) goto LAB_1000_1ca0;
          goto LAB_1000_1caf;
        }
      }
LAB_1000_1cf1:
      if (local_7 != '\0') {
        bVar16 = uVar13 != 0;
        uVar13 = -uVar13;
        uVar14 = -(uint)bVar16 - uVar14;
      }
      goto LAB_1000_1d01;
    }
LAB_1000_1bf3:
    if (param_5 + -1 < 1) goto LAB_1000_1c43;
    uVar7 = (*param_1)(param_3);
    iVar4 = param_5 + -2;
    iVar2 = local_6 + 2;
    if (-1 < (int)uVar7) goto LAB_1000_1c06;
LAB_1000_1c3c:
    local_6 = iVar2;
    local_4 = 0xffff;
  }
  (*param_2)(uVar7,param_3);
  local_6 = local_6 + -1;
  uVar13 = 0;
  uVar14 = 0;
LAB_1000_1d01:
  piVar1 = param_6;
  *piVar1 = *piVar1 + local_6;
  *param_7 = local_4;
  return CONCAT22(uVar14,uVar13);
  while( true ) {
    local_6 = local_6 + 1;
    uVar7 = (*param_1)(param_3);
    uVar8 = param_4;
    FUN_1000_1b80();
    if ((bool)uVar15) goto LAB_1000_1ce5;
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
LAB_1000_1ccc:
    if (param_5 < 1) goto LAB_1000_1cf1;
  }
  uVar13 = CONCAT11((local_7 != '\0') + -1,local_7 + -1);
  uVar14 = (local_7 != '\0') + 0x7fff;
  local_4 = 2;
  goto LAB_1000_1d01;
}



void __cdecl16near FUN_1000_1d30(undefined2 param_1)

{
  FUN_1000_0c0a(param_1,0,0,1);
  return;
}



uint __cdecl16near FUN_1000_1d47(uint param_1,int *param_2)

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


