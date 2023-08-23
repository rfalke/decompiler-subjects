typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;
typedef unsigned long    undefined4;
typedef unsigned int    word;
typedef struct OLD_IMAGE_DOS_HEADER OLD_IMAGE_DOS_HEADER, *POLD_IMAGE_DOS_HEADER;

struct OLD_IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
};

typedef struct OLD_IMAGE_DOS_RELOC OLD_IMAGE_DOS_RELOC, *POLD_IMAGE_DOS_RELOC;

struct OLD_IMAGE_DOS_RELOC {
    word offset;
    word segment;
};




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
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  int iVar12;
  undefined *puVar13;
  int *piVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  uint uVar20;
  byte *pbVar21;
  int *piVar22;
  int *piVar23;
  int iVar24;
  undefined *puVar25;
  undefined2 unaff_ES;
  undefined2 uVar26;
  undefined4 uVar27;
  
  puVar13 = (undefined *)&DAT_1058_0080;
                    // WARNING: Read-only address (ram,0x000101f8) is written
  uRam000101f8 = 0x1058;
  pcVar6 = (code *)swi(0x21);
  uVar27 = (*pcVar6)();
  uVar26 = s_Turbo_C___Copyright__c__1988_Bor_1058_0004._40_2_;
  iVar10 = DAT_1058_0002;
  iVar11 = (int)((ulong)uVar27 >> 0x10);
  *(undefined2 *)&DAT_1058_0092 = (int)uVar27;
  *(undefined2 *)&DAT_1058_0090 = unaff_ES;
  *(undefined2 *)&DAT_1058_008c = uVar26;
  *(int *)&DAT_1058_00ac = iVar10;
  *(undefined2 *)&DAT_1058_0096 = 0xffff;
  *(undefined2 *)(puVar13 + -2) = 0x2e;
  FUN_1000_0162();
  uVar27 = *(undefined4 *)&DAT_1058_008a;
  uVar26 = (undefined2)((ulong)uVar27 >> 0x10);
  piVar22 = (int *)uVar27;
  uVar9 = 0x7fff;
  piVar23 = piVar22;
  do {
    if (((*piVar23 == 0x3738) && (iVar12 = piVar23[1], (char)iVar12 == '=')) &&
       (piVar1 = (int *)&DAT_1058_0096, *piVar1 = *piVar1 + 1,
       ((byte)((uint)iVar12 >> 8) & 0xdf) == 0x59)) {
      piVar1 = (int *)&DAT_1058_0096;
      *piVar1 = *piVar1 + 1;
    }
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      piVar1 = piVar23;
      piVar23 = (int *)((int)piVar23 + 1);
    } while ((char)uVar27 != *(char *)piVar1);
    if (uVar9 == 0) goto LAB_1000_00be;
    piVar22 = (int *)((int)piVar22 + 1);
  } while (*(char *)piVar23 != (char)uVar27);
  *(int *)&DAT_1058_008a = -(uVar9 | 0x8000);
  *(uint *)&DAT_1058_008e = (int)piVar22 * 2 + 8U & 0xfff8;
  uVar20 = iVar10 - iVar11;
  uVar9 = *(uint *)&DAT_1058_01a2;
  if (uVar9 < 0x200) {
    uVar9 = 0x200;
    *(undefined2 *)&DAT_1058_01a2 = 0x200;
  }
  if ((uVar9 < 0xfe0e) && (puVar2 = (uint *)&DAT_1058_01a0, !CARRY2(uVar9 + 0x1f2,*puVar2))) {
    bVar8 = 4;
    uVar9 = (uVar9 + 0x1f2 + *puVar2 >> 4) + 1;
    if (uVar9 <= uVar20) {
      if (((*(int *)&DAT_1058_01a2 == 0) || (*(int *)&DAT_1058_01a0 == 0)) &&
         (uVar9 = 0x1000, uVar20 < 0x1001)) {
        uVar9 = uVar20;
      }
      iVar12 = uVar9 + iVar11;
      *(int *)&DAT_1058_00a4 = iVar12;
      *(int *)&DAT_1058_00a8 = iVar12;
      iVar12 = iVar12 - *(int *)&DAT_1058_0090;
      piVar14 = (int *)(puVar13 + -2);
      *(uint *)(puVar13 + -2) = uVar9;
      pcVar6 = (code *)swi(0x21);
      (*pcVar6)();
      iVar24 = *piVar14 << (bVar8 & 0x1f);
      puVar25 = (undefined *)&DAT_1058_01ac;
      for (iVar10 = 0x46; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar4 = puVar25;
        puVar25 = puVar25 + 1;
        *puVar4 = 0;
      }
      *(undefined2 *)(iVar24 + -2) = 0x1000;
      pcVar5 = *(code **)&DAT_1058_01a6;
      puVar15 = (undefined *)(iVar24 + -4);
      *(undefined2 *)(iVar24 + -4) = 0xf8;
      (*pcVar5)();
      puVar16 = puVar15 + -2;
      *(undefined2 *)(puVar15 + -2) = 0xfb;
      FUN_1000_0256();
      *(undefined2 *)(puVar16 + -2) = 0xfe;
      FUN_1000_0341();
      pcVar6 = (code *)swi(0x1a);
      (*pcVar6)();
      *(undefined2 *)&DAT_1058_0098 = extraout_DX_00;
      *(int *)&DAT_1058_009a = iVar10;
      pcVar5 = *(code **)&DAT_1058_01aa;
      puVar17 = puVar16 + -2;
      *(undefined2 *)(puVar16 + -2) = 0x10e;
      (*pcVar5)();
      *(undefined2 *)(puVar17 + -2) = *(undefined2 *)&DAT_1058_0088;
      *(undefined2 *)(puVar17 + -4) = *(undefined2 *)&DAT_1058_0086;
      *(undefined2 *)(puVar17 + -6) = *(undefined2 *)&DAT_1058_0084;
      *(undefined2 *)(puVar17 + -8) = 0x11d;
      uVar26 = FUN_1000_01fa();
      *(undefined2 *)(puVar17 + -8) = uVar26;
      *(undefined2 *)(puVar17 + -10) = 0x121;
      FUN_1000_0221();
      *(undefined2 *)(puVar17 + -10) = 0x129;
      FUN_1000_01a5();
      *(undefined2 *)(puVar17 + -10) = 0x1000;
      pcVar6 = pcRam000001a8;
      puVar18 = puVar17 + -0xc;
      *(undefined2 *)(puVar17 + -0xc) = 0x12e;
      (*pcVar6)();
      iVar10 = 0;
      pbVar21 = (byte *)0x0;
      iVar11 = 0x2f;
      do {
        pbVar3 = pbVar21;
        iVar10 = CONCAT11((char)((uint)iVar10 >> 8) + CARRY1((byte)iVar10,*pbVar3),
                          (byte)iVar10 + *pbVar3);
        pbVar21 = pbVar21 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      if (iVar10 != 0xd37) {
        *(undefined2 *)(puVar18 + -2) = 0x14f;
        FUN_1000_01da();
      }
      pcVar6 = (code *)swi(0x21);
      (*pcVar6)();
      *(undefined2 *)(puVar18 + -2) = 0x1f1;
      FUN_1000_01da();
      *(undefined2 *)(puVar18 + -2) = 3;
      puVar19 = puVar18 + -4;
      *(undefined2 *)(puVar18 + -4) = 0x1f8;
      cVar7 = FUN_1000_0121();
      pbVar3 = pbVar21 + iVar12;
      *pbVar3 = *pbVar3 + cVar7;
      *(byte **)(puVar19 + -2) = pbVar21;
      *(undefined2 *)(puVar19 + -4) = 0x194;
      *(undefined2 *)(puVar19 + -6) = 0x202;
      FUN_1000_0205();
      return;
    }
  }
LAB_1000_00be:
  FUN_1000_01e2();
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
  DAT_1058_0076 = unaff_ES;
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



void FUN_1000_01e2(void)

{
  char *pcVar1;
  char cVar2;
  int in_BX;
  int unaff_SI;
  
  FUN_1000_01da();
  cVar2 = FUN_1000_0121(3);
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + cVar2;
  FUN_1000_0205(0x194);
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
  byte bVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int extraout_DX;
  int extraout_DX_00;
  char **ppcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  bool bVar12;
  undefined uVar13;
  code *in_stack_00000000;
  uint auStack_4 [2];
  
  DAT_1000_0252 = 0x1058;
  pcVar9 = (char *)(DAT_1058_008a + 2);
  uVar6 = 1;
  uVar11 = DAT_1058_0090;
  DAT_1000_0250 = in_stack_00000000;
  if (2 < (byte)DAT_1058_0092) {
    uVar6 = 0x7f;
    pcVar10 = pcVar9;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar1 = pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (*pcVar1 != '\0');
    if (uVar6 == 0) goto LAB_1000_0307;
    uVar6 = uVar6 ^ 0x7f;
    uVar11 = DAT_1058_008c;
  }
  puVar5 = (undefined *)(*(byte *)&DAT_1058_0080 + 2 + uVar6 & 0xfffe);
  iVar3 = -(int)puVar5;
  pcVar10 = &stack0x0000 + iVar3;
  if (puVar5 <= &stack0x0000) {
    *(uint *)((int)auStack_4 + iVar3 + 2) = uVar6;
    while (uVar6 - 1 != 0) {
      pcVar2 = pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar1 = pcVar9;
      pcVar9 = pcVar9 + 1;
      *pcVar2 = *pcVar1;
      uVar6 = uVar6 - 1;
    }
    bVar12 = false;
    *pcVar10 = '\0';
    uVar13 = uVar6 == 0;
LAB_1000_02c3:
    *(undefined2 *)((int)auStack_4 + iVar3) = 0x2c6;
    bVar4 = 0;
    FUN_1000_02df();
    iVar7 = extraout_DX;
    if (bVar12 || (bool)uVar13) {
      do {
        uVar11 = DAT_1000_0252;
        if (bVar12) {
          iVar7 = *(int *)((int)auStack_4 + iVar3 + 2) + iVar7;
          *(uint *)&DAT_1058_0084 = uVar6;
          ppcVar8 = (char **)(&stack0x0000 + (uVar6 + 1) * -2);
          if (&stack0x0000 < (undefined *)((uVar6 + 1) * 2)) goto LAB_1000_0307;
          *(int **)&DAT_1058_0086 = (int *)ppcVar8;
          goto LAB_1000_0327;
        }
        *(undefined2 *)((int)auStack_4 + iVar3) = 0x2cd;
        bVar4 = 0;
        FUN_1000_02df();
        iVar7 = extraout_DX_00;
      } while (!bVar12 && !(bool)uVar13);
    }
    if ((bVar4 != 0x20) && (bVar4 != 0xd)) goto code_r0x000102d7;
    goto LAB_1000_02db;
  }
LAB_1000_0307:
  FUN_1000_01e2();
  return;
code_r0x000102d7:
  bVar12 = bVar4 < 9;
  uVar13 = bVar4 == 9;
  if ((bool)uVar13) {
LAB_1000_02db:
    bVar12 = false;
    uVar13 = true;
  }
  goto LAB_1000_02c3;
  while( true ) {
    *ppcVar8 = (char *)register0x00000010;
    ppcVar8 = ppcVar8 + 1;
    do {
      pcVar1 = (char *)register0x00000010;
      register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 1);
      bVar12 = *pcVar1 != '\0';
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0 && bVar12);
    if (bVar12) break;
LAB_1000_0327:
    if (iVar7 == 0) break;
  }
  *ppcVar8 = (char *)0x0;
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
  undefined2 uVar3;
  char *pcVar4;
  char **ppcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar6 = DAT_1058_008a;
  pcVar4 = (char *)FUN_1000_0490();
  uVar3 = DAT_1058_008c;
  if (pcVar4 != (char *)0x0) {
    pcVar7 = (char *)0x0;
    pcVar8 = pcVar4;
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      pcVar2 = pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar1 = pcVar7;
      pcVar7 = pcVar7 + 1;
      *pcVar2 = *pcVar1;
    }
    ppcVar5 = (char **)FUN_1000_0490(DAT_1058_008e);
    DAT_1058_0088 = ppcVar5;
    if (ppcVar5 != (char **)0x0) {
      iVar6 = -1;
      do {
        *ppcVar5 = pcVar4;
        ppcVar5 = ppcVar5 + 1;
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar1 = pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (*pcVar1 != '\0');
        if (*pcVar4 == '\0') {
          *ppcVar5 = (char *)0x0;
          return;
        }
      } while( true );
    }
  }
  FUN_1000_01e2();
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



void __cdecl16near FUN_1000_03b1(int param_1)

{
  int iVar1;
  
  DAT_1058_01ee = *(int *)(param_1 + 6);
  if (DAT_1058_01ee == param_1) {
    DAT_1058_01ee = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    *(int *)(DAT_1058_01ee + 4) = iVar1;
    *(int *)(iVar1 + 6) = DAT_1058_01ee;
  }
  return;
}



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
  if (DAT_1058_01ec != param_1) {
    *(int **)((int)piVar3 + param_2 + 2) = piVar3;
    piVar2 = DAT_1058_01ec;
  }
  DAT_1058_01ec = piVar2;
  return piVar3 + 2;
}



int * __cdecl16near FUN_1000_0419(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_1000_0527(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar1[1] = (int)DAT_1058_01ec;
    *piVar1 = param_1 + 1;
    piVar2 = piVar1 + 2;
    DAT_1058_01ec = piVar1;
  }
  return piVar2;
}



int * __cdecl16near FUN_1000_0456(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1000_0527(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar1 = (int *)0x0;
  }
  else {
    DAT_1058_01ec = piVar1;
    DAT_1058_01f0 = piVar1;
    *piVar1 = param_1 + 1;
    piVar1 = piVar1 + 2;
  }
  return piVar1;
}



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
    if (DAT_1058_01f0 == 0) {
      puVar2 = (uint *)FUN_1000_0456(uVar3);
    }
    else {
      puVar2 = DAT_1058_01ee;
      if (DAT_1058_01ee != (uint *)0x0) {
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
        } while (puVar2 != DAT_1058_01ee);
      }
      puVar2 = (uint *)FUN_1000_0419(uVar3);
    }
  }
  return puVar2;
}



undefined2 __cdecl16near FUN_1000_0503(undefined *param_1)

{
  undefined2 uVar1;
  undefined auStack_102 [256];
  
  if (param_1 < auStack_102) {
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
  if ((param_2 + (uint)CARRY2(param_1,DAT_1058_009e) + (uint)(0xfeff < uVar1) == 0) &&
     ((undefined *)(uVar1 + 0x100) < &stack0xfffe)) {
    LOCK();
    UNLOCK();
    uVar2 = DAT_1058_009e;
    DAT_1058_009e = uVar1;
  }
  else {
    DAT_1058_0094 = 8;
    uVar2 = 0xffff;
  }
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


