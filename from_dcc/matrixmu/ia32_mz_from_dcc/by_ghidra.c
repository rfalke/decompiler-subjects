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
  undefined *puVar20;
  uint uVar21;
  byte *pbVar22;
  int *piVar23;
  int *piVar24;
  int iVar25;
  undefined *puVar26;
  undefined2 unaff_ES;
  undefined2 uVar27;
  undefined4 uVar28;
  
  puVar13 = (undefined *)&DAT_1060_0080;
                    // WARNING: Read-only address (ram,0x000101f8) is written
  uRam000101f8 = 0x1060;
  pcVar6 = (code *)swi(0x21);
  uVar28 = (*pcVar6)();
  uVar27 = s_Turbo_C___Copyright__c__1988_Bor_1060_0004._40_2_;
  iVar10 = DAT_1060_0002;
  iVar11 = (int)((ulong)uVar28 >> 0x10);
  *(undefined2 *)&DAT_1060_0092 = (int)uVar28;
  *(undefined2 *)&DAT_1060_0090 = unaff_ES;
  *(undefined2 *)&DAT_1060_008c = uVar27;
  *(int *)&DAT_1060_00ac = iVar10;
  *(undefined2 *)&DAT_1060_0096 = 0xffff;
  *(undefined2 *)(puVar13 + -2) = 0x2e;
  FUN_1000_0162();
  uVar28 = *(undefined4 *)&DAT_1060_008a;
  uVar27 = (undefined2)((ulong)uVar28 >> 0x10);
  piVar23 = (int *)uVar28;
  uVar9 = 0x7fff;
  piVar24 = piVar23;
  do {
    if (((*piVar24 == 0x3738) && (iVar12 = piVar24[1], (char)iVar12 == '=')) &&
       (piVar1 = (int *)&DAT_1060_0096, *piVar1 = *piVar1 + 1,
       ((byte)((uint)iVar12 >> 8) & 0xdf) == 0x59)) {
      piVar1 = (int *)&DAT_1060_0096;
      *piVar1 = *piVar1 + 1;
    }
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      piVar1 = piVar24;
      piVar24 = (int *)((int)piVar24 + 1);
    } while ((char)uVar28 != *(char *)piVar1);
    if (uVar9 == 0) goto LAB_1000_00be;
    piVar23 = (int *)((int)piVar23 + 1);
  } while (*(char *)piVar24 != (char)uVar28);
  *(int *)&DAT_1060_008a = -(uVar9 | 0x8000);
  *(uint *)&DAT_1060_008e = (int)piVar23 * 2 + 8U & 0xfff8;
  uVar21 = iVar10 - iVar11;
  uVar9 = *(uint *)&DAT_1060_019c;
  if (uVar9 < 0x200) {
    uVar9 = 0x200;
    *(undefined2 *)&DAT_1060_019c = 0x200;
  }
  if ((uVar9 < 0xfe14) && (puVar2 = (uint *)&DAT_1060_019a, !CARRY2(uVar9 + 0x1ec,*puVar2))) {
    bVar8 = 4;
    uVar9 = (uVar9 + 0x1ec + *puVar2 >> 4) + 1;
    if (uVar9 <= uVar21) {
      if (((*(int *)&DAT_1060_019c == 0) || (*(int *)&DAT_1060_019a == 0)) &&
         (uVar9 = 0x1000, uVar21 < 0x1001)) {
        uVar9 = uVar21;
      }
      iVar12 = uVar9 + iVar11;
      *(int *)&DAT_1060_00a4 = iVar12;
      *(int *)&DAT_1060_00a8 = iVar12;
      iVar12 = iVar12 - *(int *)&DAT_1060_0090;
      piVar14 = (int *)(puVar13 + -2);
      *(uint *)(puVar13 + -2) = uVar9;
      pcVar6 = (code *)swi(0x21);
      (*pcVar6)();
      iVar25 = *piVar14 << (bVar8 & 0x1f);
      puVar26 = (undefined *)&DAT_1060_01a6;
      for (iVar10 = 0x46; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar4 = puVar26;
        puVar26 = puVar26 + 1;
        *puVar4 = 0;
      }
      *(undefined2 *)(iVar25 + -2) = 0x1000;
      pcVar5 = *(code **)&DAT_1060_01a0;
      puVar15 = (undefined *)(iVar25 + -4);
      *(undefined2 *)(iVar25 + -4) = 0xf8;
      (*pcVar5)();
      puVar16 = puVar15 + -2;
      *(undefined2 *)(puVar15 + -2) = 0xfb;
      FUN_1000_02d5();
      *(undefined2 *)(puVar16 + -2) = 0xfe;
      FUN_1000_03c0();
      pcVar6 = (code *)swi(0x1a);
      (*pcVar6)();
      *(undefined2 *)&DAT_1060_0098 = extraout_DX_00;
      *(int *)&DAT_1060_009a = iVar10;
      pcVar5 = *(code **)&DAT_1060_01a4;
      puVar17 = puVar16 + -2;
      *(undefined2 *)(puVar16 + -2) = 0x10e;
      (*pcVar5)();
      *(undefined2 *)(puVar17 + -2) = *(undefined2 *)&DAT_1060_0088;
      *(undefined2 *)(puVar17 + -4) = *(undefined2 *)&DAT_1060_0086;
      *(undefined2 *)(puVar17 + -6) = *(undefined2 *)&DAT_1060_0084;
      *(undefined2 *)(puVar17 + -8) = 0x11d;
      uVar27 = FUN_1000_0283();
      *(undefined2 *)(puVar17 + -8) = uVar27;
      *(undefined2 *)(puVar17 + -10) = 0x121;
      FUN_1000_02a0();
      *(undefined2 *)(puVar17 + -10) = 0x129;
      FUN_1000_01a5();
      *(undefined2 *)(puVar17 + -10) = 0x1000;
      pcVar6 = pcRam000001a2;
      puVar18 = puVar17 + -0xc;
      *(undefined2 *)(puVar17 + -0xc) = 0x12e;
      (*pcVar6)();
      iVar10 = 0;
      pbVar22 = (byte *)0x0;
      iVar11 = 0x2f;
      do {
        pbVar3 = pbVar22;
        iVar10 = CONCAT11((char)((uint)iVar10 >> 8) + CARRY1((byte)iVar10,*pbVar3),
                          (byte)iVar10 + *pbVar3);
        pbVar22 = pbVar22 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      if (iVar10 != 0xd37) {
        *(undefined2 *)(puVar18 + -2) = 0x14f;
        FUN_1000_01da();
      }
      pcVar6 = (code *)swi(0x21);
      puVar19 = puVar18;
      (*pcVar6)();
      *(undefined2 *)(puVar19 + -2) = 0x1f1;
      FUN_1000_01da();
      *(undefined2 *)(puVar19 + -2) = 3;
      puVar20 = puVar19 + -4;
      *(undefined2 *)(puVar19 + -4) = 0x1f8;
      cVar7 = FUN_1000_0121();
      pbVar3 = pbVar22 + iVar12;
      *pbVar3 = *pbVar3 + cVar7;
      *(undefined **)(puVar20 + -2) = puVar18;
      *(byte **)(puVar20 + -6) = pbVar22;
      *(undefined **)(puVar20 + -8) = puVar26;
      for (iVar10 = 0; iVar10 < 5; iVar10 = iVar10 + 1) {
        for (iVar11 = 0; iVar11 < 4; iVar11 = iVar11 + 1) {
          *(undefined2 *)(puVar20 + -4) = 0;
          while (*(int *)(puVar20 + -4) < 4) {
            *(undefined2 *)(puVar20 + -10) =
                 *(undefined2 *)(iVar10 * 8 + *(int *)(puVar20 + 2) + *(int *)(puVar20 + -4) * 2);
            *(int *)(puVar20 + -10) =
                 *(int *)(puVar20 + -10) *
                 *(int *)(*(int *)(puVar20 + -4) * 10 + *(int *)(puVar20 + 4) + iVar11 * 2);
            *(int *)(puVar20 + -10) =
                 *(int *)(puVar20 + -10) +
                 *(int *)(iVar10 * 10 + *(int *)(puVar20 + 6) + iVar11 * 2);
            *(undefined2 *)(iVar10 * 10 + *(int *)(puVar20 + 6) + iVar11 * 2) =
                 *(undefined2 *)(puVar20 + -10);
            *(int *)(puVar20 + -4) = *(int *)(puVar20 + -4) + 1;
          }
        }
      }
      return;
    }
  }
LAB_1000_00be:
  FUN_1000_01e2();
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
  DAT_1060_0076 = unaff_ES;
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



void FUN_1000_01e2(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int in_BX;
  int unaff_SI;
  int iVar3;
  int iVar4;
  int iStackY_4;
  
  FUN_1000_01da();
  cVar2 = FUN_1000_0121(3);
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + cVar2;
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    for (iVar4 = 0; iVar4 < 4; iVar4 = iVar4 + 1) {
      for (iStackY_4 = 0; iStackY_4 < 4; iStackY_4 = iStackY_4 + 1) {
        *(int *)(iVar3 * 10 + param_3 + iVar4 * 2) =
             *(int *)(iVar3 * 8 + param_1 + iStackY_4 * 2) *
             *(int *)(iStackY_4 * 10 + param_2 + iVar4 * 2) +
             *(int *)(iVar3 * 10 + param_3 + iVar4 * 2);
      }
    }
  }
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

void FUN_1000_02d5(void)

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
  
  DAT_1000_02d1 = 0x1060;
  pcVar9 = (char *)(DAT_1060_008a + 2);
  uVar6 = 1;
  uVar11 = DAT_1060_0090;
  DAT_1000_02cf = in_stack_00000000;
  if (2 < (byte)DAT_1060_0092) {
    uVar6 = 0x7f;
    pcVar10 = pcVar9;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar1 = pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (*pcVar1 != '\0');
    if (uVar6 == 0) goto LAB_1000_0386;
    uVar6 = uVar6 ^ 0x7f;
    uVar11 = DAT_1060_008c;
  }
  puVar5 = (undefined *)(*(byte *)&DAT_1060_0080 + 2 + uVar6 & 0xfffe);
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
LAB_1000_0342:
    *(undefined2 *)((int)auStack_4 + iVar3) = 0x345;
    bVar4 = 0;
    FUN_1000_035e();
    iVar7 = extraout_DX;
    if (bVar12 || (bool)uVar13) {
      do {
        uVar11 = DAT_1000_02d1;
        if (bVar12) {
          iVar7 = *(int *)((int)auStack_4 + iVar3 + 2) + iVar7;
          *(uint *)&DAT_1060_0084 = uVar6;
          ppcVar8 = (char **)(&stack0x0000 + (uVar6 + 1) * -2);
          if (&stack0x0000 < (undefined *)((uVar6 + 1) * 2)) goto LAB_1000_0386;
          *(int **)&DAT_1060_0086 = (int *)ppcVar8;
          goto LAB_1000_03a6;
        }
        *(undefined2 *)((int)auStack_4 + iVar3) = 0x34c;
        bVar4 = 0;
        FUN_1000_035e();
        iVar7 = extraout_DX_00;
      } while (!bVar12 && !(bool)uVar13);
    }
    if ((bVar4 != 0x20) && (bVar4 != 0xd)) goto code_r0x00010356;
    goto LAB_1000_035a;
  }
LAB_1000_0386:
  FUN_1000_01e2();
  return;
code_r0x00010356:
  bVar12 = bVar4 < 9;
  uVar13 = bVar4 == 9;
  if ((bool)uVar13) {
LAB_1000_035a:
    bVar12 = false;
    uVar13 = true;
  }
  goto LAB_1000_0342;
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
LAB_1000_03a6:
    if (iVar7 == 0) break;
  }
  *ppcVar8 = (char *)0x0;
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



void __cdecl16near FUN_1000_03c0(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined2 uVar3;
  char *pcVar4;
  char **ppcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar6 = DAT_1060_008a;
  pcVar4 = (char *)FUN_1000_050f();
  uVar3 = DAT_1060_008c;
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
    ppcVar5 = (char **)FUN_1000_050f(DAT_1060_008e);
    DAT_1060_0088 = ppcVar5;
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
  undefined auStack_102 [256];
  
  if (param_1 < auStack_102) {
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
  if ((param_2 + (uint)CARRY2(param_1,DAT_1060_009e) + (uint)(0xfeff < uVar1) == 0) &&
     ((undefined *)(uVar1 + 0x100) < &stack0xfffe)) {
    LOCK();
    UNLOCK();
    uVar2 = DAT_1060_009e;
    DAT_1060_009e = uVar1;
  }
  else {
    DAT_1060_0094 = 8;
    uVar2 = 0xffff;
  }
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


