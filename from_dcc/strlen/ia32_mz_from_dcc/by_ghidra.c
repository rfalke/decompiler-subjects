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
  undefined *puVar5;
  code *pcVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  int iVar11;
  undefined *puVar12;
  int *piVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  uint uVar18;
  byte *unaff_SI;
  int *piVar19;
  int *piVar20;
  int iVar21;
  undefined *puVar22;
  undefined2 unaff_ES;
  undefined2 uVar23;
  undefined2 uVar24;
  undefined4 uVar25;
  
  uVar24 = 0x78;
  puVar12 = (undefined *)&DAT_1058_0080;
                    // WARNING: Read-only address (ram,0x000101f8) is written
  uRam000101f8 = 0x1058;
  pcVar6 = (code *)swi(0x21);
  uVar25 = (*pcVar6)();
  uVar23 = s_Turbo_C___Copyright__c__1988_Bor_1058_0004._40_2_;
  iVar11 = DAT_1058_0002;
  iVar10 = (int)((ulong)uVar25 >> 0x10);
  *(undefined2 *)&DAT_1058_0092 = (int)uVar25;
  *(undefined2 *)&DAT_1058_0090 = unaff_ES;
  *(undefined2 *)&DAT_1058_008c = uVar23;
  *(int *)&DAT_1058_00ac = iVar11;
  *(undefined2 *)&DAT_1058_0096 = 0xffff;
  *(undefined2 *)(puVar12 + -2) = 0x2e;
  FUN_1000_0162();
  uVar25 = *(undefined4 *)&DAT_1058_008a;
  uVar23 = (undefined2)((ulong)uVar25 >> 0x10);
  piVar19 = (int *)uVar25;
  uVar9 = 0x7fff;
  piVar20 = piVar19;
  do {
    if (((*piVar20 == 0x3738) && (iVar21 = piVar20[1], (char)iVar21 == '=')) &&
       (piVar1 = (int *)&DAT_1058_0096, *piVar1 = *piVar1 + 1,
       ((byte)((uint)iVar21 >> 8) & 0xdf) == 0x59)) {
      piVar1 = (int *)&DAT_1058_0096;
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
  *(int *)&DAT_1058_008a = -(uVar9 | 0x8000);
  piVar19 = (int *)((int)piVar19 * 2 + 8U & 0xfff8);
  *(int **)&DAT_1058_008e = piVar19;
  uVar18 = iVar11 - iVar10;
  uVar9 = *(uint *)&DAT_1058_01a2;
  if (uVar9 < 0x200) {
    uVar9 = 0x200;
    *(undefined2 *)&DAT_1058_01a2 = 0x200;
  }
  if ((uVar9 < 0xfe0e) && (puVar2 = (uint *)&DAT_1058_01a0, !CARRY2(uVar9 + 0x1f2,*puVar2))) {
    bVar8 = 4;
    uVar9 = (uVar9 + 0x1f2 + *puVar2 >> 4) + 1;
    if (uVar9 <= uVar18) {
      if (((*(int *)&DAT_1058_01a2 == 0) || (*(int *)&DAT_1058_01a0 == 0)) &&
         (uVar9 = 0x1000, uVar18 < 0x1001)) {
        uVar9 = uVar18;
      }
      iVar11 = uVar9 + iVar10;
      *(int *)&DAT_1058_00a4 = iVar11;
      *(int *)&DAT_1058_00a8 = iVar11;
      piVar19 = (int *)(iVar11 - *(int *)&DAT_1058_0090);
      piVar13 = (int *)(puVar12 + -2);
      *(uint *)(puVar12 + -2) = uVar9;
      pcVar6 = (code *)swi(0x21);
      (*pcVar6)();
      iVar21 = *piVar13 << (bVar8 & 0x1f);
      puVar22 = (undefined *)&DAT_1000_072c;
      iVar11 = 0x46;
      while (iVar11 != 0) {
        iVar11 = iVar11 + -1;
        puVar5 = puVar22;
        puVar22 = puVar22 + 1;
        *puVar5 = 0;
      }
      *(undefined2 *)(iVar21 + -2) = 0x1000;
      puVar14 = (undefined *)(iVar21 + -4);
      *(undefined2 *)(iVar21 + -4) = 0xf8;
      (**(code **)&DAT_1058_01a6)();
      puVar15 = puVar14 + -2;
      *(undefined2 *)(puVar14 + -2) = 0xfb;
      FUN_1000_0256();
      *(undefined2 *)(puVar15 + -2) = 0xfe;
      FUN_1000_0341();
      pcVar6 = (code *)swi(0x1a);
      (*pcVar6)();
      *(undefined2 *)&DAT_1058_0098 = extraout_DX_00;
      *(int *)&DAT_1058_009a = iVar11;
      puVar16 = puVar15 + -2;
      *(undefined2 *)(puVar15 + -2) = 0x10e;
      (**(code **)&DAT_1058_01aa)();
      *(undefined2 *)(puVar16 + -2) = *(undefined2 *)&DAT_1058_0088;
      *(undefined2 *)(puVar16 + -4) = *(undefined2 *)&DAT_1058_0086;
      *(undefined2 *)(puVar16 + -6) = *(undefined2 *)&DAT_1058_0084;
      *(undefined2 *)(puVar16 + -8) = 0x11d;
      uVar23 = FUN_1000_01fa();
      *(undefined2 *)(puVar16 + -8) = uVar23;
      *(undefined2 *)(puVar16 + -10) = 0x121;
      FUN_1000_0221();
      *(undefined2 *)(puVar16 + -10) = 0x129;
      FUN_1000_01a5();
      *(undefined2 *)(puVar16 + -10) = 0x1000;
      puVar12 = puVar16 + -0xc;
      *(undefined2 *)(puVar16 + -0xc) = 0x12e;
      (*pcRam000001a8)();
      iVar11 = 0;
      unaff_SI = (byte *)0x0;
      iVar10 = 0x2f;
      do {
        pbVar3 = unaff_SI;
        iVar11 = CONCAT11((char)((uint)iVar11 >> 8) + CARRY1((byte)iVar11,*pbVar3),
                          (byte)iVar11 + *pbVar3);
        unaff_SI = unaff_SI + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      if (iVar11 != 0xd37) {
        *(undefined2 *)(puVar12 + -2) = 0x14f;
        FUN_1000_01da();
      }
      pcVar6 = (code *)swi(0x21);
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
  *(byte **)(puVar17 + -2) = unaff_SI;
  *(undefined2 *)(puVar17 + -4) = 0x194;
  *(undefined2 *)(puVar17 + -6) = 0x202;
  FUN_1000_0205();
  return;
}



void FUN_1000_0121(void)

{
  byte *pbVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int in_BX;
  byte *pbVar6;
  
  FUN_1000_01a5();
  (*pcRam000001a8)(0x1000);
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
  FUN_1000_0205();
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
  _DAT_1058_0076 = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_1058_0078 = in_BX;
  DAT_1058_007a = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_1058_007c = in_BX;
  DAT_1058_007e = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_1058_0080 = in_BX;
  DAT_1058_0082 = unaff_ES;
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
  DAT_1058_0096 = 0;
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
  FUN_1000_0205(0x194);
  return;
}



int __cdecl16near FUN_1000_0205(char *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while (*param_1 != '\0') {
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  }
  return iVar1;
}



void __cdecl16near FUN_1000_0220(void)

{
  return;
}



void __cdecl16near FUN_1000_0221(void)

{
  int iVar1;
  
  while (iVar1 = DAT_1058_01a4 + -1, DAT_1058_01a4 != 0) {
    DAT_1058_01a4 = iVar1;
    (**(code **)(iVar1 * 2 + 0x1ac))();
  }
  DAT_1058_01a4 = iVar1;
  (*DAT_1058_019a)();
  (*DAT_1058_019c)();
  (*DAT_1058_019e)();
  FUN_1000_0121();
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack

void FUN_1000_0256(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  int extraout_DX;
  int extraout_DX_00;
  char **ppcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined2 uVar14;
  undefined2 unaff_SS;
  bool bVar15;
  undefined uVar16;
  code *in_stack_00000000;
  undefined2 uStack6;
  char *apcStack4 [2];
  
  DAT_1000_0252 = 0x1058;
  uVar6 = (uint)*(byte *)&DAT_1058_0080;
  puVar7 = (undefined *)(uVar6 + 1);
  pcVar12 = (char *)(DAT_1058_008a + 2);
  uVar9 = 1;
  uVar14 = DAT_1058_0090;
  DAT_1000_0250 = in_stack_00000000;
  if (2 < DAT_1058_0092) {
    uVar9 = 0x7f;
    pcVar13 = pcVar12;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar1 = pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (*pcVar1 != '\0');
    if (uVar9 == 0) goto LAB_1000_01e2;
    uVar9 = uVar9 ^ 0x7f;
    uVar14 = DAT_1058_008c;
  }
  puVar8 = (undefined *)(uVar6 + 2 + uVar9 & 0xfffe);
  iVar3 = -(int)puVar8;
  pcVar13 = &stack0x0000 + iVar3;
  if (puVar8 <= register0x00000010) {
    *(char **)((int)(apcStack4 + 1) + iVar3) = (char *)uVar9;
    while (uVar9 - 1 != 0) {
      pcVar2 = pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar1 = pcVar12;
      pcVar12 = pcVar12 + 1;
      *pcVar2 = *pcVar1;
      uVar9 = uVar9 - 1;
    }
    bVar15 = false;
    *pcVar13 = '\0';
    uVar16 = uVar9 == 0;
LAB_1000_02c3:
    *(char **)((int)apcStack4 + iVar3) = (char *)0x2c6;
    bVar5 = FUN_1000_02df();
    iVar10 = extraout_DX;
    if (bVar15 || (bool)uVar16) {
      do {
        uVar14 = DAT_1000_0252;
        if (bVar15) {
          iVar10 = (int)*(char **)((int)(apcStack4 + 1) + iVar3) + iVar10;
          *(uint *)&DAT_1058_0084 = uVar9;
          puVar7 = (undefined *)((uVar9 + 1) * 2);
          ppcVar11 = (char **)(&stack0x0000 + (uVar9 + 1) * -2);
          pcVar12 = (char *)register0x00000010;
          if (register0x00000010 < puVar7) goto LAB_1000_01e2;
          *(int **)&DAT_1058_0086 = (int *)ppcVar11;
          goto LAB_1000_0327;
        }
        *(char **)((int)apcStack4 + iVar3) = (char *)0x2cd;
        bVar5 = FUN_1000_02df();
        iVar10 = extraout_DX_00;
      } while (!bVar15 && !(bool)uVar16);
    }
    if ((bVar5 != 0x20) && (bVar5 != 0xd)) goto code_r0x000102d7;
    goto LAB_1000_02db;
  }
LAB_1000_01e2:
  apcStack4[1] = (char *)0x1f1;
  FUN_1000_01da();
  apcStack4[1] = (char *)0x3;
  apcStack4[0] = (char *)0x1f8;
  cVar4 = FUN_1000_0121();
  pcVar1 = puVar7 + (int)pcVar12;
  *pcVar1 = *pcVar1 + cVar4;
  apcStack4[0] = (char *)0x194;
  uStack6 = 0x202;
  apcStack4[1] = pcVar12;
  FUN_1000_0205();
  return;
code_r0x000102d7:
  bVar15 = bVar5 < 9;
  uVar16 = bVar5 == 9;
  if ((bool)uVar16) {
LAB_1000_02db:
    bVar15 = false;
    uVar16 = true;
  }
  goto LAB_1000_02c3;
  while( true ) {
    *ppcVar11 = (char *)register0x00000010;
    ppcVar11 = ppcVar11 + 1;
    do {
      pcVar1 = (char *)register0x00000010;
      register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 1);
      bVar15 = *pcVar1 != '\0';
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0 && bVar15);
    if (bVar15) break;
LAB_1000_0327:
    if (iVar10 == 0) break;
  }
  *ppcVar11 = (char *)0x0;
                    // WARNING: Could not recover jumptable at 0x0001033c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_1000_0250)();
  return;
}



int __cdecl16near FUN_1000_02df(void)

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



void __cdecl16near FUN_1000_0341(void)

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
  
  iVar5 = DAT_1058_008a;
  pcVar4 = (char *)FUN_1000_0490();
  uVar7 = DAT_1058_008c;
  if (pcVar4 != (char *)0x0) {
    unaff_SI = (char *)0x0;
    pcVar6 = pcVar4;
    while (iVar5 != 0) {
      iVar5 = iVar5 + -1;
      pcVar2 = pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar1 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      *pcVar2 = *pcVar1;
    }
    uVar7 = 0x1058;
    in_BX = (char **)FUN_1000_0490(DAT_1058_008e);
    DAT_1058_0088 = in_BX;
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
  FUN_1000_0205(0x194,unaff_SI);
  return;
}



bool __cdecl16near FUN_1000_038b(undefined2 param_1)

{
  bool bVar1;
  
  bVar1 = DAT_1058_01a4 != 0x20;
  if (bVar1) {
    *(undefined2 *)(DAT_1058_01a4 * 2 + 0x1ac) = param_1;
    DAT_1058_01a4 = DAT_1058_01a4 + 1;
  }
  return !bVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl16near FUN_1000_03b1(int param_1)

{
  int iVar1;
  
  _DAT_1000_076e = *(int *)(param_1 + 6);
  if (_DAT_1000_076e == param_1) {
    _DAT_1000_076e = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    *(int *)(_DAT_1000_076e + 4) = iVar1;
    *(int *)(iVar1 + 6) = _DAT_1000_076e;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * __cdecl16near FUN_1000_03df(int *param_1,int param_2)

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
  if (_DAT_1000_076c != param_1) {
    *(int **)((int)piVar3 + param_2 + 2) = piVar3;
    piVar2 = _DAT_1000_076c;
  }
  _DAT_1000_076c = piVar2;
  return piVar3 + 2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * __cdecl16near FUN_1000_0419(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_1000_0527(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar1[1] = (int)_DAT_1000_076c;
    *piVar1 = param_1 + 1;
    piVar2 = piVar1 + 2;
    _DAT_1000_076c = piVar1;
  }
  return piVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * __cdecl16near FUN_1000_0456(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1000_0527(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar1 = (int *)0x0;
  }
  else {
    _DAT_1000_076c = piVar1;
    _DAT_1000_0770 = piVar1;
    *piVar1 = param_1 + 1;
    piVar1 = piVar1 + 2;
  }
  return piVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * __cdecl16near FUN_1000_0490(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  if ((param_1 == 0) || (0xfff4 < param_1)) {
    puVar2 = (uint *)0x0;
  }
  else {
    uVar3 = param_1 + 0xb & 0xfff8;
    if (_DAT_1000_0770 == 0) {
      puVar2 = (uint *)FUN_1000_0456(uVar3);
    }
    else {
      puVar2 = _DAT_1000_076e;
      if (_DAT_1000_076e != (uint *)0x0) {
        do {
          if (uVar3 + 0x28 <= *puVar2) {
            puVar2 = (uint *)FUN_1000_03df(puVar2,uVar3);
            return puVar2;
          }
          if (uVar3 <= *puVar2) {
            FUN_1000_03b1(puVar2);
            puVar1 = puVar2;
            *puVar1 = *puVar1 + 1;
            return puVar2 + 2;
          }
          puVar2 = (uint *)puVar2[3];
        } while (puVar2 != _DAT_1000_076e);
      }
      puVar2 = (uint *)FUN_1000_0419(uVar3);
    }
  }
  return puVar2;
}



undefined2 __cdecl16near FUN_1000_0503(undefined *param_1)

{
  undefined2 uVar1;
  undefined auStack258 [256];
  
  if (param_1 < auStack258) {
    DAT_1058_009e = param_1;
    uVar1 = 0;
  }
  else {
    DAT_1058_0094 = 8;
    uVar1 = 0xffff;
  }
  return uVar1;
}



uint __cdecl16near FUN_1000_0527(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 + DAT_1058_009e;
  if ((param_2 + (uint)CARRY2(param_1,DAT_1058_009e) + (uint)(0xfeff < uVar1) != 0) ||
     (uVar2 = DAT_1058_009e, &stack0xfffe <= (undefined *)(uVar1 + 0x100))) {
    DAT_1058_0094 = 8;
    uVar2 = 0xffff;
    uVar1 = DAT_1058_009e;
  }
  DAT_1058_009e = uVar1;
  return uVar2;
}



void __cdecl16near FUN_1000_055b(undefined2 param_1)

{
  FUN_1000_0503(param_1);
  return;
}



void __cdecl16near FUN_1000_0569(int param_1)

{
  FUN_1000_0527(param_1,param_1 >> 0xf);
  return;
}


