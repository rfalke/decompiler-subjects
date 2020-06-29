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
  char *pcVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  int iVar10;
  int *piVar11;
  int *piVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  int *piVar16;
  undefined *puVar17;
  byte *unaff_SI;
  int *piVar18;
  int iVar19;
  int *piVar20;
  undefined2 unaff_ES;
  undefined2 uVar21;
  undefined2 uVar22;
  bool bVar23;
  undefined4 uVar24;
  
  uVar22 = 0x7f;
  piVar11 = (int *)(undefined *)&DAT_1060_0080;
                    // WARNING: Read-only address (ram,0x000101f8) is written
  uRam000101f8 = 0x1060;
  pcVar5 = (code *)swi(0x21);
  uVar24 = (*pcVar5)();
  uVar21 = s_Turbo_C___Copyright__c__1988_Bor_1060_0004._40_2_;
  piVar16 = DAT_1060_0002;
  iVar7 = (int)((ulong)uVar24 >> 0x10);
  *(undefined2 *)&DAT_1060_0092 = (int)uVar24;
  *(undefined2 *)&DAT_1060_0090 = unaff_ES;
  *(undefined2 *)&DAT_1060_008c = uVar21;
  *(int **)&DAT_1060_00ac = piVar16;
  *(undefined2 *)&DAT_1060_0096 = 0xffff;
  *(undefined2 *)((undefined *)piVar11 + -2) = 0x2e;
  FUN_1000_0162();
  uVar24 = *(undefined4 *)&DAT_1060_008a;
  uVar21 = (undefined2)((ulong)uVar24 >> 0x10);
  piVar18 = (int *)uVar24;
  uVar9 = 0x7fff;
  piVar20 = piVar18;
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
    } while ((char)uVar24 != *(char *)piVar1);
    if (uVar9 == 0) goto LAB_1000_01e9;
    piVar18 = (int *)((int)piVar18 + 1);
  } while (*(char *)piVar20 != (char)uVar24);
  *(int *)&DAT_1060_008a = -(uVar9 | 0x8000);
  piVar18 = (int *)((int)piVar18 * 2 + 8U & 0xfff8);
  *(int **)&DAT_1060_008e = piVar18;
  piVar16 = (int *)((int)piVar16 - iVar7);
  uVar9 = *(uint *)&DAT_1060_019c;
  if (uVar9 < 0x200) {
    uVar9 = 0x200;
    *(undefined2 *)&DAT_1060_019c = 0x200;
  }
  piVar20 = (int *)(uVar9 + 0x1ec);
  if ((uVar9 < 0xfe14) &&
     (puVar2 = (uint *)&DAT_1060_019a, bVar23 = CARRY2((uint)piVar20,*puVar2),
     piVar20 = (int *)((int)piVar20 + *puVar2), !bVar23)) {
    bVar8 = 4;
    piVar20 = (int *)(((uint)piVar20 >> 4) + 1);
    if (piVar20 <= piVar16) {
      if (((*(int *)&DAT_1060_019c == 0) || (*(int *)&DAT_1060_019a == 0)) &&
         (piVar20 = (int *)0x1000, piVar16 < (int *)0x1001)) {
        piVar20 = piVar16;
      }
      iVar10 = (int)piVar20 + iVar7;
      *(int *)&DAT_1060_00a4 = iVar10;
      *(int *)&DAT_1060_00a8 = iVar10;
      piVar18 = (int *)(iVar10 - *(int *)&DAT_1060_0090);
      piVar12 = (int *)((undefined *)piVar11 + -2);
      *(int **)((undefined *)piVar11 + -2) = piVar20;
      pcVar5 = (code *)swi(0x21);
      (*pcVar5)();
      iVar19 = *piVar12 << (bVar8 & 0x1f);
      piVar20 = (int *)&DAT_1060_01a6;
      iVar10 = 0x46;
      while (iVar10 != 0) {
        iVar10 = iVar10 + -1;
        piVar1 = piVar20;
        piVar20 = (int *)((int)piVar20 + 1);
        *(char *)piVar1 = '\0';
      }
      *(undefined2 *)(iVar19 + -2) = 0x1000;
      puVar13 = (undefined *)(iVar19 + -4);
      *(undefined2 *)(iVar19 + -4) = 0xf8;
      (**(code **)&DAT_1060_01a0)();
      puVar14 = puVar13 + -2;
      *(undefined2 *)(puVar13 + -2) = 0xfb;
      FUN_1000_02d5();
      *(undefined2 *)(puVar14 + -2) = 0xfe;
      FUN_1000_03c0();
      pcVar5 = (code *)swi(0x1a);
      (*pcVar5)();
      *(undefined2 *)&DAT_1060_0098 = extraout_DX_00;
      *(int *)&DAT_1060_009a = iVar10;
      puVar15 = puVar14 + -2;
      *(undefined2 *)(puVar14 + -2) = 0x10e;
      (**(code **)&DAT_1060_01a4)();
      *(undefined2 *)(puVar15 + -2) = *(undefined2 *)&DAT_1060_0088;
      *(undefined2 *)(puVar15 + -4) = *(undefined2 *)&DAT_1060_0086;
      *(undefined2 *)(puVar15 + -6) = *(undefined2 *)&DAT_1060_0084;
      *(undefined2 *)(puVar15 + -8) = 0x11d;
      uVar21 = FUN_1000_0283();
      *(undefined2 *)(puVar15 + -8) = uVar21;
      *(undefined2 *)(puVar15 + -10) = 0x121;
      FUN_1000_02a0();
      *(undefined2 *)(puVar15 + -10) = 0x129;
      FUN_1000_01a5();
      *(undefined2 *)(puVar15 + -10) = 0x1000;
      piVar16 = (int *)(puVar15 + -0xc);
      *(undefined2 *)(puVar15 + -0xc) = 0x12e;
      (*pcRam000001a2)();
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
        piVar16[-1] = 0x14f;
        FUN_1000_01da();
      }
      pcVar5 = (code *)swi(0x21);
      piVar11 = piVar16;
      (*pcVar5)();
      uVar22 = extraout_DX;
    }
  }
LAB_1000_01e9:
  *(undefined2 *)((undefined *)piVar11 + -2) = 0x1f1;
  FUN_1000_01da();
  *(undefined2 *)((undefined *)piVar11 + -2) = 3;
  puVar17 = (undefined *)piVar11 + -4;
  *(undefined2 *)((undefined *)piVar11 + -4) = 0x1f8;
  cVar6 = FUN_1000_0121();
  pcVar4 = (char *)((int)piVar18 + (int)unaff_SI);
  *pcVar4 = *pcVar4 + cVar6;
  *(int **)(puVar17 + -2) = piVar16;
  *(byte **)(puVar17 + -6) = unaff_SI;
  *(int **)(puVar17 + -8) = piVar20;
  iVar7 = 0;
  while (iVar7 < 5) {
    iVar10 = 0;
    while (iVar10 < 4) {
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
      iVar10 = iVar10 + 1;
    }
    iVar7 = iVar7 + 1;
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
  iVar4 = 0;
  while (iVar4 < 5) {
    iVar5 = 0;
    while (iVar5 < 4) {
      iVar7 = 0;
      while (iVar7 < 4) {
        *(int *)(iVar4 * 10 + param_5 + iVar5 * 2) =
             *(int *)(iVar4 * 8 + param_3 + iVar7 * 2) * *(int *)(iVar7 * 10 + param_4 + iVar5 * 2)
             + *(int *)(iVar4 * 10 + param_5 + iVar5 * 2);
        iVar7 = iVar7 + 1;
      }
      iVar5 = iVar5 + 1;
    }
    iVar4 = iVar4 + 1;
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



void __cdecl16far FUN_1000_01d2(void)

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
  
  iVar1 = 0;
  while (iVar1 < 5) {
    iVar2 = 0;
    while (iVar2 < 4) {
      local_4 = 0;
      while (local_4 < 4) {
        *(int *)(iVar1 * 10 + param_3 + iVar2 * 2) =
             *(int *)(iVar1 * 8 + param_1 + local_4 * 2) *
             *(int *)(local_4 * 10 + param_2 + iVar2 * 2) +
             *(int *)(iVar1 * 10 + param_3 + iVar2 * 2);
        local_4 = local_4 + 1;
      }
      iVar2 = iVar2 + 1;
    }
    iVar1 = iVar1 + 1;
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
  uint uVar7;
  int iVar8;
  int extraout_DX;
  int extraout_DX_00;
  undefined *puVar9;
  char **ppcVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  undefined2 uVar14;
  undefined2 unaff_SS;
  bool bVar15;
  bool bVar16;
  code *in_stack_00000000;
  uint uStack4;
  undefined2 uStack2;
  
  DAT_1000_02d1 = 0x1060;
  uVar5 = (uint)*(byte *)&DAT_1060_0080;
  puVar9 = (undefined *)(uVar5 + 1);
  pcVar12 = (char *)(DAT_1060_008a + 2);
  uVar7 = 1;
  uVar14 = DAT_1060_0090;
  DAT_1000_02cf = in_stack_00000000;
  if (2 < DAT_1060_0092) {
    uVar7 = 0x7f;
    pcVar13 = pcVar12;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar1 = pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (*pcVar1 != '\0');
    if (uVar7 == 0) goto LAB_1000_01e2;
    uVar7 = uVar7 ^ 0x7f;
    uVar14 = DAT_1060_008c;
  }
  puVar6 = (undefined *)(uVar5 + 2 + uVar7 & 0xfffe);
  iVar11 = -(int)puVar6;
  pcVar13 = &stack0x0000 + iVar11;
  if (puVar6 <= register0x00000010) {
    *(uint *)((int)(&uStack4 + 1) + iVar11) = uVar7;
    while (uVar7 - 1 != 0) {
      pcVar2 = pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar1 = pcVar12;
      pcVar12 = pcVar12 + 1;
      *pcVar2 = *pcVar1;
      uVar7 = uVar7 - 1;
    }
    bVar15 = false;
    *pcVar13 = '\0';
    bVar16 = uVar7 == 0;
LAB_1000_0342:
    *(uint *)((int)&uStack4 + iVar11) = 0x345;
    bVar4 = FUN_1000_035e();
    iVar8 = extraout_DX;
    if (bVar15 || bVar16) {
      do {
        uVar14 = DAT_1000_02d1;
        if (bVar15) {
          iVar8 = *(uint *)((int)(&uStack4 + 1) + iVar11) + iVar8;
          *(uint *)&DAT_1060_0084 = uVar7;
          puVar9 = (undefined *)((uVar7 + 1) * 2);
          ppcVar10 = (char **)(&stack0x0000 + (uVar7 + 1) * -2);
          pcVar12 = (char *)register0x00000010;
          if (register0x00000010 < puVar9) goto LAB_1000_01e2;
          *(char ***)(int **)&DAT_1060_0086 = ppcVar10;
          goto LAB_1000_03a6;
        }
        *(uint *)((int)&uStack4 + iVar11) = 0x34c;
        bVar4 = FUN_1000_035e();
        iVar8 = extraout_DX_00;
      } while (!bVar15 && !bVar16);
    }
    if ((bVar4 != 0x20) && (bVar4 != 0xd)) goto code_r0x00010356;
    goto LAB_1000_035a;
  }
LAB_1000_01e2:
  uStack2 = 0x1f1;
  FUN_1000_01da();
  uStack2 = 3;
  uStack4 = 0x1f8;
  cVar3 = FUN_1000_0121();
  pcVar1 = puVar9 + (int)pcVar12;
  *pcVar1 = *pcVar1 + cVar3;
  iVar11 = 0;
  while (iVar11 < 5) {
    iVar8 = 0;
    while (iVar8 < 4) {
      uStack4 = 0;
      while ((int)uStack4 < 4) {
        *(int *)(iVar11 * 10 + param_3 + iVar8 * 2) =
             *(int *)(iVar11 * 8 + param_1 + uStack4 * 2) *
             *(int *)(uStack4 * 10 + param_2 + iVar8 * 2) +
             *(int *)(iVar11 * 10 + param_3 + iVar8 * 2);
        uStack4 = uStack4 + 1;
      }
      iVar8 = iVar8 + 1;
    }
    iVar11 = iVar11 + 1;
  }
  return;
code_r0x00010356:
  bVar15 = bVar4 < 9;
  bVar16 = bVar4 == 9;
  if (bVar16) {
LAB_1000_035a:
    bVar15 = false;
    bVar16 = true;
  }
  goto LAB_1000_0342;
  while( true ) {
    *(BADSPACEBASE **)ppcVar10 = register0x00000010;
    ppcVar10 = ppcVar10 + 1;
    do {
      pcVar1 = (char *)register0x00000010;
      register0x00000010 = (BADSPACEBASE *)((char *)register0x00000010 + 1);
      bVar15 = *pcVar1 != '\0';
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0 && bVar15);
    if (bVar15) break;
LAB_1000_03a6:
    if (iVar8 == 0) break;
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
  int iVar4;
  char **in_BX;
  char *unaff_SI;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  undefined2 uVar9;
  
  iVar4 = DAT_1060_008a;
  pcVar7 = (char *)FUN_1000_050f();
  uVar9 = DAT_1060_008c;
  if (pcVar7 != (char *)0x0) {
    unaff_SI = (char *)0x0;
    pcVar6 = pcVar7;
    while (iVar4 != 0) {
      iVar4 = iVar4 + -1;
      pcVar2 = pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar1 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      *pcVar2 = *pcVar1;
    }
    uVar9 = 0x1060;
    in_BX = (char **)FUN_1000_050f(DAT_1060_008e);
    DAT_1060_0088 = in_BX;
    if (in_BX != (char **)0x0) {
      iVar4 = -1;
      do {
        *in_BX = pcVar7;
        in_BX = in_BX + 1;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar1 = pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar1 != '\0');
        if (*pcVar7 == '\0') {
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
  iVar4 = 0;
  while (iVar4 < 5) {
    iVar5 = 0;
    while (iVar5 < 4) {
      iVar8 = 0;
      while (iVar8 < 4) {
        *(int *)(iVar4 * 10 + param_3 + iVar5 * 2) =
             *(int *)(iVar4 * 8 + param_1 + iVar8 * 2) * *(int *)(iVar8 * 10 + param_2 + iVar5 * 2)
             + *(int *)(iVar4 * 10 + param_3 + iVar5 * 2);
        iVar8 = iVar8 + 1;
      }
      iVar5 = iVar5 + 1;
    }
    iVar4 = iVar4 + 1;
  }
  return;
}



uint __cdecl16near FUN_1000_040a(undefined2 param_1)

{
  bool bVar1;
  
  bVar1 = DAT_1060_019e != 0x20;
  if (bVar1) {
    *(undefined2 *)(DAT_1060_019e * 2 + 0x1a6) = param_1;
    DAT_1060_019e = DAT_1060_019e + 1;
  }
  return (uint)!bVar1;
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
  *(int **)(piVar3 + 1) = param_1;
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
    *(int **)(piVar1 + 1) = DAT_1060_01e6;
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
  undefined2 uVar2;
  uint uVar3;
  uint *puVar4;
  
  if ((param_1 == 0) || (0xfff4 < param_1)) {
    uVar2 = 0;
  }
  else {
    uVar3 = param_1 + 0xb & 0xfff8;
    if (DAT_1060_01ea == 0) {
      uVar2 = FUN_1000_04d5(uVar3);
    }
    else {
      puVar4 = DAT_1060_01e8;
      if (DAT_1060_01e8 != (uint *)0x0) {
        do {
          if (uVar3 + 0x28 <= *puVar4) {
            uVar2 = FUN_1000_045e(puVar4,uVar3);
            return (uint *)uVar2;
          }
          if (uVar3 <= *puVar4) {
            FUN_1000_0430(puVar4);
            puVar1 = puVar4;
            *puVar1 = *puVar1 + 1;
            return puVar4 + 2;
          }
          puVar4 = (uint *)puVar4[3];
        } while (puVar4 != DAT_1060_01e8);
      }
      uVar2 = FUN_1000_0498(uVar3);
    }
  }
  return (uint *)uVar2;
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


