typedef unsigned char   undefined;

typedef unsigned int    uint;
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
  
  puVar13 = (undefined *)&DAT_11d3_0080;
                    // WARNING: Read-only address (ram,0x000101f8) is written
  uRam000101f8 = 0x11d3;
  pcVar6 = (code *)swi(0x21);
  uVar27 = (*pcVar6)();
  uVar26 = s_Turbo_C___Copyright__c__1988_Bor_11d3_0004._40_2_;
  iVar10 = DAT_11d3_0002;
  iVar11 = (int)((ulong)uVar27 >> 0x10);
  *(undefined2 *)&DAT_11d3_0092 = (int)uVar27;
  *(undefined2 *)&DAT_11d3_0090 = unaff_ES;
  *(undefined2 *)&DAT_11d3_008c = uVar26;
  *(int *)&DAT_11d3_00ac = iVar10;
  *(undefined2 *)&DAT_11d3_0096 = 0xffff;
  *(undefined2 *)(puVar13 + -2) = 0x2e;
  FUN_1000_0162();
  uVar27 = *(undefined4 *)&DAT_11d3_008a;
  uVar26 = (undefined2)((ulong)uVar27 >> 0x10);
  piVar22 = (int *)uVar27;
  uVar9 = 0x7fff;
  piVar23 = piVar22;
  do {
    if (((*piVar23 == 0x3738) && (iVar12 = piVar23[1], (char)iVar12 == '=')) &&
       (piVar1 = (int *)&DAT_11d3_0096, *piVar1 = *piVar1 + 1,
       ((byte)((uint)iVar12 >> 8) & 0xdf) == 0x59)) {
      piVar1 = (int *)&DAT_11d3_0096;
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
  *(int *)&DAT_11d3_008a = -(uVar9 | 0x8000);
  *(uint *)&DAT_11d3_008e = (int)piVar22 * 2 + 8U & 0xfff8;
  uVar20 = iVar10 - iVar11;
  uVar9 = *(uint *)&DAT_11d3_020c;
  if (uVar9 < 0x200) {
    uVar9 = 0x200;
    *(undefined2 *)&DAT_11d3_020c = 0x200;
  }
  if ((uVar9 < 0xfa02) && (puVar2 = (uint *)&DAT_11d3_020a, !CARRY2(uVar9 + 0x5fe,*puVar2))) {
    bVar8 = 4;
    uVar9 = (uVar9 + 0x5fe + *puVar2 >> 4) + 1;
    if (uVar9 <= uVar20) {
      if (((*(int *)&DAT_11d3_020c == 0) || (*(int *)&DAT_11d3_020a == 0)) &&
         (uVar9 = 0x1000, uVar20 < 0x1001)) {
        uVar9 = uVar20;
      }
      iVar12 = uVar9 + iVar11;
      *(int *)&DAT_11d3_00a4 = iVar12;
      *(int *)&DAT_11d3_00a8 = iVar12;
      iVar12 = iVar12 - *(int *)&DAT_11d3_0090;
      piVar14 = (int *)(puVar13 + -2);
      *(uint *)(puVar13 + -2) = uVar9;
      pcVar6 = (code *)swi(0x21);
      (*pcVar6)();
      iVar24 = *piVar14 << (bVar8 & 0x1f);
      puVar25 = (undefined *)&DAT_11d3_05b8;
      for (iVar10 = 0x46; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar4 = puVar25;
        puVar25 = puVar25 + 1;
        *puVar4 = 0;
      }
      *(undefined2 *)(iVar24 + -2) = 0x1000;
      pcVar5 = *(code **)&DAT_11d3_05aa;
      puVar15 = (undefined *)(iVar24 + -4);
      *(undefined2 *)(iVar24 + -4) = 0xf8;
      (*pcVar5)();
      puVar16 = puVar15 + -2;
      *(undefined2 *)(puVar15 + -2) = 0xfb;
      FUN_1000_02b7();
      *(undefined2 *)(puVar16 + -2) = 0xfe;
      FUN_1000_03a2();
      pcVar6 = (code *)swi(0x1a);
      (*pcVar6)();
      *(undefined2 *)&DAT_11d3_0098 = extraout_DX_00;
      *(int *)&DAT_11d3_009a = iVar10;
      pcVar5 = *(code **)&DAT_11d3_05ae;
      puVar17 = puVar16 + -2;
      *(undefined2 *)(puVar16 + -2) = 0x10e;
      (*pcVar5)();
      *(undefined2 *)(puVar17 + -2) = *(undefined2 *)&DAT_11d3_0088;
      *(undefined2 *)(puVar17 + -4) = *(undefined2 *)&DAT_11d3_0086;
      *(undefined2 *)(puVar17 + -6) = *(undefined2 *)&DAT_11d3_0084;
      *(undefined2 *)(puVar17 + -8) = 0x11d;
      uVar26 = FUN_1000_01fa();
      *(undefined2 *)(puVar17 + -8) = uVar26;
      *(undefined2 *)(puVar17 + -10) = 0x121;
      FUN_1000_0282();
      *(undefined2 *)(puVar17 + -10) = 0x129;
      FUN_1000_01a5();
      *(undefined2 *)(puVar17 + -10) = 0x1000;
      pcVar6 = pcRam000005ac;
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
      puVar25 = puVar18;
      (*pcVar6)();
      *(undefined2 *)(puVar25 + -2) = 0x1f1;
      FUN_1000_01da();
      *(undefined2 *)(puVar25 + -2) = 3;
      puVar19 = puVar25 + -4;
      *(undefined2 *)(puVar25 + -4) = 0x1f8;
      cVar7 = FUN_1000_0121();
      pbVar3 = pbVar21 + iVar12;
      *pbVar3 = *pbVar3 + cVar7;
      *(undefined **)(puVar19 + -2) = puVar18;
      *(undefined **)(puVar19 + -0xc) = puVar19 + -6;
      *(undefined2 *)(puVar19 + -0xe) = 0x194;
      *(undefined2 *)(puVar19 + -0x10) = 0x20b;
      FUN_1000_1655();
      *(undefined **)(puVar19 + -0xc) = puVar19 + -10;
      *(undefined2 *)(puVar19 + -0xe) = 0x197;
      *(undefined2 *)(puVar19 + -0x10) = 0x218;
      FUN_1000_1655();
      *(undefined **)(puVar19 + -0xc) = puVar19 + -6;
      *(undefined **)(puVar19 + -0xe) = puVar19 + -10;
      *(undefined2 *)(puVar19 + -0x10) = 0x19a;
      *(undefined2 *)(puVar19 + -0x12) = 0x229;
      FUN_1000_1655();
      *(undefined2 *)(puVar19 + -0xc) = *(undefined2 *)(puVar19 + -4);
      *(undefined2 *)(puVar19 + -0xe) = *(undefined2 *)(puVar19 + -6);
      *(undefined2 *)(puVar19 + -0x10) = *(undefined2 *)(puVar19 + -8);
      *(undefined2 *)(puVar19 + -0x12) = *(undefined2 *)(puVar19 + -10);
      *(undefined2 *)(puVar19 + -0x14) = 0x1a0;
      *(undefined2 *)(puVar19 + -0x16) = 0x23f;
      FUN_1000_0dcc();
      return;
    }
  }
LAB_1000_00be:
  FUN_1000_01e2();
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
  undefined2 uStack_6;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  uStack_2 = 0x129;
  FUN_1000_01a5();
  uStack_2 = 0x1000;
  uStack_4 = 0x12e;
  (*pcRam000005ac)();
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
    uStack_2 = 0x14f;
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
  FUN_1000_1655(0x194,&uStack_2);
  FUN_1000_1655(0x197,&uStack_6);
  FUN_1000_1655(0x19a,&uStack_6,&uStack_2);
  FUN_1000_0dcc(0x1a0,uStack_6,uStack_4,uStack_2,0x1f8);
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
  DAT_11d3_0076 = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_11d3_0078 = in_BX;
  DAT_11d3_007a = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_11d3_007c = in_BX;
  DAT_11d3_007e = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_11d3_0080 = in_BX;
  DAT_11d3_0082 = unaff_ES;
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
  DAT_11d3_0096 = 0;
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
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  FUN_1000_01da();
  uStack_4 = 0x1f8;
  cVar2 = FUN_1000_0121();
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + cVar2;
  FUN_1000_1655(0x194,&uStack_6);
  FUN_1000_1655(0x197,&uStack_a);
  FUN_1000_1655(0x19a,&uStack_a,&uStack_6);
  FUN_1000_0dcc(0x1a0,uStack_a,uStack_8,uStack_6,uStack_4);
  return;
}



void __cdecl16near FUN_1000_01fa(void)

{
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  FUN_1000_1655(0x194,&local_6);
  FUN_1000_1655(0x197,&local_a);
  FUN_1000_1655(0x19a,&local_a,&local_6);
  FUN_1000_0dcc(0x1a0,local_a,local_8,local_6,local_4);
  return;
}



undefined2 FUN_1000_0246(uint param_1)

{
  if ((int)param_1 < 0) {
    if (-param_1 < 0x23 || param_1 == 0xffdd) {
      DAT_11d3_0094 = -param_1;
      DAT_11d3_01a8 = 0xffff;
      return 0xffff;
    }
  }
  else if (param_1 < 0x59) goto LAB_1000_0259;
  param_1 = 0x57;
LAB_1000_0259:
  DAT_11d3_01a8 = param_1;
  DAT_11d3_0094 = (int)*(char *)(param_1 + 0x1aa);
  return 0xffff;
}



void __cdecl16near FUN_1000_0281(void)

{
  return;
}



void __cdecl16near FUN_1000_0282(void)

{
  int iVar1;
  
  while (iVar1 = DAT_11d3_020e + -1, DAT_11d3_020e != 0) {
    DAT_11d3_020e = iVar1;
    (**(code **)(iVar1 * 2 + 0x5b8))();
  }
  DAT_11d3_020e = iVar1;
  (*DAT_11d3_0204)();
  (*DAT_11d3_0206)();
  (*DAT_11d3_0208)();
  FUN_1000_0121();
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack

void FUN_1000_02b7(void)

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
  
  DAT_1000_02b3 = 0x11d3;
  pcVar9 = (char *)(DAT_11d3_008a + 2);
  uVar6 = 1;
  uVar11 = DAT_11d3_0090;
  DAT_1000_02b1 = in_stack_00000000;
  if (2 < DAT_11d3_0092) {
    uVar6 = 0x7f;
    pcVar10 = pcVar9;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar1 = pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (*pcVar1 != '\0');
    if (uVar6 == 0) goto LAB_1000_0368;
    uVar6 = uVar6 ^ 0x7f;
    uVar11 = DAT_11d3_008c;
  }
  puVar5 = (undefined *)(*(byte *)&DAT_11d3_0080 + 2 + uVar6 & 0xfffe);
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
LAB_1000_0324:
    *(undefined2 *)((int)auStack_4 + iVar3) = 0x327;
    bVar4 = 0;
    FUN_1000_0340();
    iVar7 = extraout_DX;
    if (bVar12 || (bool)uVar13) {
      do {
        uVar11 = DAT_1000_02b3;
        if (bVar12) {
          iVar7 = *(int *)((int)auStack_4 + iVar3 + 2) + iVar7;
          *(uint *)&DAT_11d3_0084 = uVar6;
          ppcVar8 = (char **)(&stack0x0000 + (uVar6 + 1) * -2);
          if (&stack0x0000 < (undefined *)((uVar6 + 1) * 2)) goto LAB_1000_0368;
          *(int **)&DAT_11d3_0086 = (int *)ppcVar8;
          goto LAB_1000_0388;
        }
        *(undefined2 *)((int)auStack_4 + iVar3) = 0x32e;
        bVar4 = 0;
        FUN_1000_0340();
        iVar7 = extraout_DX_00;
      } while (!bVar12 && !(bool)uVar13);
    }
    if ((bVar4 != 0x20) && (bVar4 != 0xd)) goto code_r0x00010338;
    goto LAB_1000_033c;
  }
LAB_1000_0368:
  FUN_1000_01e2();
  return;
code_r0x00010338:
  bVar12 = bVar4 < 9;
  uVar13 = bVar4 == 9;
  if ((bool)uVar13) {
LAB_1000_033c:
    bVar12 = false;
    uVar13 = true;
  }
  goto LAB_1000_0324;
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
LAB_1000_0388:
    if (iVar7 == 0) break;
  }
  *ppcVar8 = (char *)0x0;
                    // WARNING: Could not recover jumptable at 0x0001039d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_1000_02b1)();
  return;
}



int __cdecl16near FUN_1000_0340(void)

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



void __cdecl16near FUN_1000_03a2(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined2 uVar3;
  char *pcVar4;
  char **ppcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar6 = DAT_11d3_008a;
  pcVar4 = (char *)FUN_1000_04f1();
  uVar3 = DAT_11d3_008c;
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
    ppcVar5 = (char **)FUN_1000_04f1(DAT_11d3_008e);
    DAT_11d3_0088 = ppcVar5;
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



bool __cdecl16near FUN_1000_03ec(undefined2 param_1)

{
  bool bVar1;
  
  bVar1 = DAT_11d3_020e != 0x20;
  if (bVar1) {
    *(undefined2 *)(DAT_11d3_020e * 2 + 0x5b8) = param_1;
    DAT_11d3_020e = DAT_11d3_020e + 1;
  }
  return !bVar1;
}



void __cdecl16near FUN_1000_0412(int param_1)

{
  int iVar1;
  
  DAT_11d3_05fa = *(int *)(param_1 + 6);
  if (DAT_11d3_05fa == param_1) {
    DAT_11d3_05fa = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    *(int *)(DAT_11d3_05fa + 4) = iVar1;
    *(int *)(iVar1 + 6) = DAT_11d3_05fa;
  }
  return;
}



int * __cdecl16near FUN_1000_0440(int *param_1,int param_2)

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
  if (DAT_11d3_05f8 != param_1) {
    *(int **)((int)piVar3 + param_2 + 2) = piVar3;
    piVar2 = DAT_11d3_05f8;
  }
  DAT_11d3_05f8 = piVar2;
  return piVar3 + 2;
}



int * __cdecl16near FUN_1000_047a(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_1000_0588(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar1[1] = (int)DAT_11d3_05f8;
    *piVar1 = param_1 + 1;
    piVar2 = piVar1 + 2;
    DAT_11d3_05f8 = piVar1;
  }
  return piVar2;
}



int * __cdecl16near FUN_1000_04b7(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1000_0588(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar1 = (int *)0x0;
  }
  else {
    DAT_11d3_05f8 = piVar1;
    DAT_11d3_05fc = piVar1;
    *piVar1 = param_1 + 1;
    piVar1 = piVar1 + 2;
  }
  return piVar1;
}



uint * __cdecl16near FUN_1000_04f1(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  if ((param_1 == 0) || (0xfff4 < param_1)) {
    puVar2 = (uint *)0x0;
  }
  else {
    uVar3 = param_1 + 0xb & 0xfff8;
    if (DAT_11d3_05fc == 0) {
      puVar2 = (uint *)FUN_1000_04b7(uVar3);
    }
    else {
      puVar2 = DAT_11d3_05fa;
      if (DAT_11d3_05fa != (uint *)0x0) {
        do {
          if (uVar3 + 0x28 <= *puVar2) {
            puVar2 = (uint *)FUN_1000_0440(puVar2,uVar3);
            return puVar2;
          }
          if (uVar3 <= *puVar2) {
            FUN_1000_0412(puVar2);
            puVar1 = puVar2;
            *puVar1 = *puVar1 + 1;
            return puVar2 + 2;
          }
          puVar2 = (uint *)puVar2[3];
        } while (puVar2 != DAT_11d3_05fa);
      }
      puVar2 = (uint *)FUN_1000_047a(uVar3);
    }
  }
  return puVar2;
}



undefined2 __cdecl16near FUN_1000_0564(undefined *param_1)

{
  undefined2 uVar1;
  undefined auStack_102 [256];
  
  if (param_1 < auStack_102) {
    DAT_11d3_009e = param_1;
    uVar1 = 0;
  }
  else {
    DAT_11d3_0094 = 8;
    uVar1 = 0xffff;
  }
  return uVar1;
}



uint __cdecl16near FUN_1000_0588(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 + DAT_11d3_009e;
  if ((param_2 + (uint)CARRY2(param_1,DAT_11d3_009e) + (uint)(0xfeff < uVar1) == 0) &&
     ((undefined *)(uVar1 + 0x100) < &stack0xfffe)) {
    LOCK();
    UNLOCK();
    uVar2 = DAT_11d3_009e;
    DAT_11d3_009e = uVar1;
  }
  else {
    DAT_11d3_0094 = 8;
    uVar2 = 0xffff;
  }
  return uVar2;
}



void __cdecl16near FUN_1000_05bc(undefined2 param_1)

{
  FUN_1000_0564(param_1);
  return;
}



void __cdecl16near FUN_1000_05ca(int param_1)

{
  FUN_1000_0588(param_1,param_1 >> 0xf);
  return;
}



int FUN_1000_05dc(int *param_1)

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



undefined2 __cdecl16near FUN_1000_0623(int *param_1,uint param_2,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  
  iVar2 = FUN_1000_0d4e(param_1);
  if (iVar2 == 0) {
    if ((param_4 == 1) && (0 < *param_1)) {
      uVar4 = FUN_1000_05dc(param_1);
      bVar5 = param_2 < uVar4;
      param_2 = param_2 - uVar4;
      param_3 = (param_3 - ((int)uVar4 >> 0xf)) - (uint)bVar5;
    }
    puVar1 = (uint *)(param_1 + 1);
    *puVar1 = *puVar1 & 0xfe5f;
    *param_1 = 0;
    param_1[5] = param_1[4];
    lVar6 = FUN_1000_0ba9((int)*(char *)(param_1 + 2),param_2,param_3,param_4);
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



undefined4 __cdecl16near FUN_1000_0687(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_1000_0d4e(param_1);
  if (iVar1 == 0) {
    uVar3 = FUN_1000_1ccf((int)*(char *)(param_1 + 2));
    iVar1 = (int)((ulong)uVar3 >> 0x10);
    if (0 < *param_1) {
      uVar2 = FUN_1000_05dc(param_1);
      uVar3 = CONCAT22((iVar1 - ((int)uVar2 >> 0xf)) - (uint)((uint)uVar3 < uVar2),
                       (uint)uVar3 - uVar2);
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



void __cdecl16near FUN_1000_06dc(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x312;
  iVar2 = 0x14;
  while (iVar2 != 0) {
    if ((*(uint *)(iVar1 + 2) & 0x300) == 0x300) {
      FUN_1000_0d4e(iVar1);
    }
    iVar1 = iVar1 + 0x10;
    iVar2 = iVar2 + -1;
  }
  return;
}



undefined2 FUN_1000_0703(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  if ((param_1[1] & 0x200U) != 0) {
    FUN_1000_06dc();
  }
  iVar3 = param_1[3];
  iVar2 = param_1[4];
  param_1[5] = iVar2;
  iVar3 = FUN_1000_0978((int)*(char *)(param_1 + 2),iVar2,iVar3);
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



void __cdecl16near FUN_1000_0760(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  *piVar1 = *piVar1 + 1;
  FUN_1000_0773(param_1);
  return;
}



uint __cdecl16near FUN_1000_0773(int *param_1)

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
      if ((DAT_11d3_047a != 0) || (param_1 != (int *)0x312)) {
        while( true ) {
          if ((param_1[1] & 0x200U) != 0) {
            FUN_1000_06dc();
          }
          iVar3 = FUN_1000_0a34((int)*(char *)(param_1 + 2),&local_3,1);
          if (iVar3 != 1) break;
          if ((local_3 != 0xd) || ((param_1[1] & 0x40U) != 0)) {
            puVar2 = (uint *)(param_1 + 1);
            *puVar2 = *puVar2 & 0xffdf;
            return (uint)local_3;
          }
        }
        iVar3 = FUN_1000_0ce0((int)*(char *)(param_1 + 2));
        if (iVar3 == 1) {
          param_1[1] = param_1[1] & 0xfe7fU | 0x20;
        }
        else {
          puVar2 = (uint *)(param_1 + 1);
          *puVar2 = *puVar2 | 0x10;
        }
        return 0xffff;
      }
      iVar3 = FUN_1000_0873((int)cRam00012046);
      if (iVar3 == 0) {
        DAT_11d3_0314 = DAT_11d3_0314 & 0xfdff;
      }
      FUN_1000_0885(0x312,0,(DAT_11d3_0314 & 0x200) != 0,0x200);
    }
    iVar3 = FUN_1000_0703(param_1);
    if (iVar3 != 0) {
      return 0xffff;
    }
  }
  puVar2 = (uint *)(param_1 + 1);
  *puVar2 = *puVar2 | 0x10;
  return 0xffff;
}



uint __cdecl16near FUN_1000_0873(void)

{
  code *pcVar1;
  uint extraout_DX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return extraout_DX & 0x80;
}



undefined2 __cdecl16near FUN_1000_0885(int *param_1,int param_2,int param_3,uint param_4)

{
  uint *puVar1;
  undefined2 uVar2;
  
  if ((((int *)param_1[7] == param_1) && (param_3 < 3)) && (param_4 < 0x8000)) {
    if ((DAT_11d3_047c == 0) && (param_1 == (int *)0x322)) {
      DAT_11d3_047c = 1;
    }
    else if ((DAT_11d3_047a == 0) && (param_1 == (int *)0x312)) {
      DAT_11d3_047a = 1;
    }
    if (*param_1 != 0) {
      FUN_1000_0623(param_1,0,0,1);
    }
    if ((param_1[1] & 4U) != 0) {
      FUN_1000_162e(param_1[4]);
    }
    puVar1 = (uint *)(param_1 + 1);
    *puVar1 = *puVar1 & 0xfff3;
    param_1[3] = 0;
    param_1[4] = (int)param_1 + 5;
    param_1[5] = (int)param_1 + 5;
    if ((param_3 != 2) && (param_4 != 0)) {
      DAT_11d3_0204 = 0x957;
      if (param_2 == 0) {
        param_2 = FUN_1000_04f1(param_4);
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



int __cdecl16near FUN_1000_0978(int param_1,char *param_2,int param_3)

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
  
  if ((param_3 + 1U < 2) || ((*(uint *)(param_1 * 2 + 0x452) & 0x200) != 0)) {
    iVar4 = 0;
  }
  else {
    do {
      iVar4 = FUN_1000_0a34(param_1,param_2,param_3);
      if (iVar4 + 1U < 2) {
        return iVar4;
      }
      pcVar6 = param_2;
      pcVar3 = param_2;
      if ((*(uint *)(param_1 * 2 + 0x452) & 0x8000) != 0) {
        return iVar4;
      }
      do {
        while( true ) {
          pcVar7 = pcVar3;
          cVar2 = *pcVar6;
          pcVar5 = param_2;
          if (cVar2 == '\x1a') {
            FUN_1000_0ba9(param_1,-iVar4,-(uint)(iVar4 != 0),2);
            puVar1 = (uint *)(param_1 * 2 + 0x452);
            *puVar1 = *puVar1 | 0x200;
            goto LAB_1000_0a28;
          }
          if (cVar2 == '\r') break;
          *pcVar7 = cVar2;
          iVar4 = iVar4 + -1;
          pcVar6 = pcVar6 + 1;
          pcVar3 = pcVar7 + 1;
          if (iVar4 == 0) goto LAB_1000_0a00;
        }
        iVar4 = iVar4 + -1;
        pcVar6 = pcVar6 + 1;
        pcVar3 = pcVar7;
      } while (iVar4 != 0);
      uVar8 = 0x11d3;
      FUN_1000_0a34(param_1,&local_3,1);
      *pcVar7 = local_3;
LAB_1000_0a00:
      pcVar7 = pcVar7 + 1;
    } while (pcVar7 == pcVar5);
LAB_1000_0a28:
    iVar4 = (int)pcVar7 - (int)pcVar5;
  }
  return iVar4;
}



void __cdecl16near FUN_1000_0a34(void)

{
  code *pcVar1;
  undefined in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    FUN_1000_0246();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00010afa)
// WARNING: Removing unreachable block (ram,0x00010b48)

int __cdecl16near FUN_1000_0a50(int param_1,char *param_2,int param_3)

{
  uint *puVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int local_8a;
  char *local_86;
  char local_84 [130];
  
  if (param_3 + 1U < 2) {
    param_3 = 0;
  }
  else if ((*(uint *)(param_1 * 2 + 0x452) & 0x8000) == 0) {
    puVar1 = (uint *)(param_1 * 2 + 0x452);
    *puVar1 = *puVar1 & 0xfdff;
    local_86 = param_2;
    local_8a = param_3;
    pcVar5 = local_84;
    while (local_8a != 0) {
      local_8a = local_8a + -1;
      pcVar2 = local_86 + 1;
      cVar3 = *local_86;
      if (cVar3 == '\n') {
        *pcVar5 = '\r';
        pcVar5 = pcVar5 + 1;
      }
      *pcVar5 = cVar3;
      pcVar5 = pcVar5 + 1;
      local_86 = pcVar2;
      if (0x7f < (int)pcVar5 - (int)local_84) {
        iVar6 = (int)pcVar5 - (int)local_84;
        iVar4 = FUN_1000_0b63(param_1,local_84,iVar6);
        if (iVar4 != iVar6) {
          return ((param_3 - local_8a) + iVar4) - iVar6;
        }
        pcVar5 = local_84;
      }
    }
    iVar4 = (int)pcVar5 - (int)local_84;
    if ((iVar4 != 0) && (iVar6 = FUN_1000_0b63(param_1,local_84,iVar4), iVar6 != iVar4)) {
      param_3 = (param_3 + iVar6) - iVar4;
    }
  }
  else {
    param_3 = FUN_1000_0b63(param_1,param_2,param_3);
  }
  return param_3;
}



undefined2 __cdecl16near FUN_1000_0b63(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined uVar4;
  
  uVar4 = 0;
  if ((*(uint *)(param_1 * 2 + 0x452) & 0x800) != 0) {
    uVar4 = 0;
    FUN_1000_0ba9(param_1,0,0,2);
  }
  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  if ((bool)uVar4) {
    uVar3 = FUN_1000_0246();
  }
  else {
    puVar1 = (uint *)(param_1 * 2 + 0x452);
    *puVar1 = *puVar1 | 0x1000;
  }
  return uVar3;
}



void __cdecl16near FUN_1000_0ba9(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  
  puVar1 = (uint *)(param_1 * 2 + 0x452);
  bVar3 = false;
  *puVar1 = *puVar1 & 0xfdff;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (bVar3) {
    FUN_1000_0246();
  }
  return;
}



char * FUN_1000_0bd4(char param_1,char param_2,uint param_3,char *param_4,uint param_5,uint param_6)

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
    if (param_6 == 0) goto LAB_1000_0c1e;
    do {
      uVar3 = (ulong)param_6;
      param_6 = param_6 / param_3;
      uVar3 = uVar3 % (ulong)param_3 << 0x10 | (ulong)param_5;
      param_5 = (uint)(uVar3 / param_3);
      *pbVar6 = (byte)(uVar3 % (ulong)param_3);
      pbVar6 = pbVar6 + 1;
    } while (param_6 != 0);
    while (param_5 != 0) {
LAB_1000_0c1e:
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



void __cdecl16near FUN_1000_0c53(int param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 10) {
    iVar1 = param_1 >> 0xf;
  }
  else {
    iVar1 = 0;
  }
  FUN_1000_0bd4(0x61,1,param_3,param_2,param_1,iVar1);
  return;
}



void __cdecl16near
FUN_1000_0c7c(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  uint in_AX;
  
  FUN_1000_0bd4(0x61,in_AX & 0xff00,param_4,param_3,param_1,param_2);
  return;
}



void __cdecl16near
FUN_1000_0c98(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  FUN_1000_0bd4(0x61,param_4 == 10,param_4,param_3,param_1,param_2);
  return;
}



void FUN_1000_0cbf(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_1000_01e2();
  return;
}



void FUN_1000_0cc4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_1000_01e2();
  return;
}



// WARNING: Removing unreachable block (ram,0x00010d36)

undefined2 __cdecl16near FUN_1000_0ce0(int param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  bool bVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined2 uVar7;
  
  bVar3 = false;
  if ((*(uint *)(param_1 * 2 + 0x452) & 0x200) != 0) {
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
      uVar5 = (*pcVar1)((int)((ulong)uVar5 >> 0x10));
      uVar7 = (undefined2)((ulong)uVar5 >> 0x10);
      uVar2 = (undefined2)uVar5;
      if (!bVar3) {
        pcVar1 = (code *)swi(0x21);
        uVar6 = (*pcVar1)();
        uVar4 = CONCAT22(uVar7,uVar2);
        uVar2 = (undefined2)uVar6;
        if (!bVar3) {
          if (uVar6 < uVar4) {
            return 0;
          }
          return 1;
        }
      }
    }
  }
  uVar2 = FUN_1000_0246(uVar2);
  return uVar2;
}



undefined2 __cdecl16near FUN_1000_0d4e(int *param_1)

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
      iVar4 = FUN_1000_0a50((int)*(char *)(param_1 + 2),iVar4,iVar5);
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



void __cdecl16near FUN_1000_0dcc(undefined2 param_1)

{
  FUN_1000_0ff4(&stack0x0004,param_1,0x322,0xf02);
  return;
}



void __cdecl16near FUN_1000_0de5(char param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  *piVar1 = *piVar1 + -1;
  FUN_1000_0dfe((int)param_1,param_2);
  return;
}



uint __cdecl16near FUN_1000_0dfe(byte param_1,int *param_2)

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
         (((bVar3 == 10 || (bVar3 == 0xd)) && (iVar5 = FUN_1000_0d4e(piVar4), iVar5 != 0)))) {
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
      iVar5 = FUN_1000_0d4e(piVar4);
      if (iVar5 != 0) {
        return 0xffff;
      }
    }
  }
  if (((((bVar3 == 10) && ((piVar4[1] & 0x40U) == 0)) &&
       (iVar5 = FUN_1000_0b63((int)*(char *)(piVar4 + 2),0x4b0,1), iVar5 != 1)) ||
      (iVar5 = FUN_1000_0b63((int)*(char *)(piVar4 + 2),&param_1,1), iVar5 != 1)) &&
     ((piVar4[1] & 0x200U) == 0)) {
    puVar2 = (uint *)(piVar4 + 1);
    *puVar2 = *puVar2 | 0x10;
    return 0xffff;
  }
  return (uint)bVar3;
}



void __cdecl16near FUN_1000_0eec(undefined2 param_1)

{
  FUN_1000_0dfe(param_1,0x322);
  return;
}



uint FUN_1000_0f02(int *param_1,uint param_2,undefined2 *param_3)

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
          uVar5 = FUN_1000_0de5(*param_3,param_1);
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
    else if ((*param_1 == 0) || (iVar3 = FUN_1000_0d4e(param_1), iVar3 == 0)) {
      uVar4 = FUN_1000_0b63((int)*(char *)(param_1 + 2),param_3,param_2);
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
      iVar3 = FUN_1000_0dfe((int)(char)*(byte *)param_3,param_1);
      uVar4 = uVar4 - 1;
      param_3 = (undefined2 *)((int)param_3 + 1);
    } while (iVar3 != -1);
    param_2 = 0;
  }
  return param_2;
}



void thunk_FUN_1000_0cbf(void)

{
                    // WARNING: Could not recover jumptable at 0x00010fc5. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_11d3_05b0)();
  return;
}



void FUN_1000_0fc9(undefined2 param_1)

{
  byte bVar1;
  undefined *unaff_DI;
  undefined2 unaff_ES;
  
  bVar1 = (byte)((uint)param_1 >> 8);
  *unaff_DI = *(undefined *)(ulong)((bVar1 >> 4) + 0x4b9);
  unaff_DI[1] = *(undefined *)(ulong)((bVar1 & 0xf) + 0x4b9);
  unaff_DI[2] = *(undefined *)(ulong)((byte)((byte)param_1 >> 4) + 0x4b9);
  unaff_DI[3] = *(undefined *)(ulong)(((byte)param_1 & 0xf) + 0x4b9);
  return;
}



void FUN_1000_0ff4(void)

{
  undefined2 unaff_SI;
  
  FUN_1000_104e(unaff_SI);
  return;
}



void __cdecl16near FUN_1000_100d(void)

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



void __cdecl16near FUN_1000_101a(void)

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



void __cdecl16near FUN_1000_1022(void)

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



// WARNING (jumptable): Unable to track spacebase fully for stack

undefined2 FUN_1000_104e(void)

{
  char *pcVar1;
  int *piVar2;
  uint *puVar3;
  undefined *puVar4;
  char cVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  char cVar11;
  uint *puVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  uint uVar15;
  byte bVar18;
  int iVar16;
  int iVar17;
  int extraout_DX;
  int extraout_DX_00;
  int extraout_DX_01;
  char cVar19;
  int iVar20;
  int unaff_BP;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  int *piVar24;
  undefined *puVar25;
  uint *puVar26;
  int *piVar27;
  uint uVar28;
  uint unaff_SS;
  
  *(int *)(unaff_BP + -0x96) = unaff_BP + -0x54;
LAB_1000_1057:
  pcVar23 = *(char **)(unaff_BP + -0x96);
LAB_1000_105b:
  pcVar21 = *(char **)(unaff_BP + 6);
LAB_1000_105e:
  pcVar22 = pcVar21 + 1;
  cVar11 = *pcVar21;
  if (cVar11 == '\0') goto LAB_1000_14f3;
  if (cVar11 == '%') {
    *(char **)(unaff_BP + -0x8a) = pcVar22;
    pcVar1 = pcVar22;
    pcVar22 = pcVar21 + 2;
    cVar11 = *pcVar1;
    if (cVar11 != '%') goto code_r0x00011080;
  }
  *pcVar23 = cVar11;
  pcVar23 = pcVar23 + 1;
  pcVar1 = (char *)(unaff_BP + -0x55);
  cVar11 = *pcVar1;
  *pcVar1 = *pcVar1 + -1;
  pcVar21 = pcVar22;
  if (*pcVar1 == '\0' || SBORROW1(cVar11,'\x01') != *pcVar1 < '\0') {
    FUN_1000_1022();
  }
  goto LAB_1000_105e;
code_r0x00011080:
  *(char **)(unaff_BP + -0x96) = pcVar23;
  uVar15 = 0;
  *(undefined2 *)(unaff_BP + -0x8c) = 0;
  *(undefined2 *)(unaff_BP + -0x98) = 0;
  *(undefined *)(unaff_BP + -0x8d) = 0;
  *(undefined2 *)(unaff_BP + -0x92) = 0xffff;
  *(undefined2 *)(unaff_BP + -0x90) = 0xffff;
  do {
    if (0x5f < (byte)(cVar11 - 0x20U)) goto switchD_1000_10c1_caseD_13;
    cVar5 = *(char *)((byte)(cVar11 - 0x20U) + 0x4c9);
    cVar19 = cVar5 * '\x02';
    bVar18 = (byte)(uVar15 >> 8);
    uVar28 = unaff_SS;
    switch(cVar5) {
    case '\0':
      if (bVar18 != 0) goto switchD_1000_10c1_caseD_13;
      if (*(char *)(unaff_BP + -0x8d) != '+') {
        *(char *)(unaff_BP + -0x8d) = cVar11;
      }
      break;
    case '\x01':
      if (bVar18 != 0) goto switchD_1000_10c1_caseD_13;
      puVar3 = (uint *)(unaff_BP + -0x98);
      *puVar3 = *puVar3 | 1;
      break;
    case '\x02':
      uVar14 = *(undefined2 *)*(undefined2 *)(unaff_BP + 4);
      piVar2 = (int *)(unaff_BP + 4);
      *piVar2 = *piVar2 + 2;
      if (bVar18 < 2) {
        *(undefined2 *)(unaff_BP + -0x92) = uVar14;
        uVar15 = 0x300;
      }
      else {
        if (bVar18 != 4) goto switchD_1000_10c1_caseD_13;
        *(undefined2 *)(unaff_BP + -0x90) = uVar14;
        uVar15 = 0x500;
      }
      break;
    case '\x03':
      if (bVar18 != 0) goto switchD_1000_10c1_caseD_13;
      puVar3 = (uint *)(unaff_BP + -0x98);
      *puVar3 = *puVar3 | 2;
      break;
    case '\x04':
      if (3 < bVar18) goto switchD_1000_10c1_caseD_13;
      uVar15 = 0x400;
      break;
    case '\x05':
switchD_1000_10c1_caseD_5:
      if (bVar18 < 3) {
        uVar15 = 0x200;
        LOCK();
        piVar2 = (int *)(unaff_BP + -0x92);
        iVar20 = *piVar2;
        *piVar2 = (int)(char)(cVar11 + -0x30);
        UNLOCK();
        if (-1 < iVar20) {
          piVar2 = (int *)(unaff_BP + -0x92);
          *piVar2 = *piVar2 + iVar20 * 10;
        }
      }
      else {
        if (bVar18 != 4) {
switchD_1000_10c1_caseD_13:
          pcVar23 = *(char **)(unaff_BP + -0x8a);
          do {
            FUN_1000_101a();
            pcVar1 = pcVar23;
            pcVar23 = pcVar23 + 1;
          } while (*pcVar1 != '\0');
LAB_1000_14f3:
          if (*(char *)(unaff_BP + -0x55) < 'P') {
            FUN_1000_1022();
          }
          if (*(int *)(unaff_BP + -2) == 0) {
            uVar14 = *(undefined2 *)(unaff_BP + -0x58);
          }
          else {
            uVar14 = 0xffff;
          }
          return uVar14;
        }
        LOCK();
        piVar2 = (int *)(unaff_BP + -0x90);
        iVar20 = *piVar2;
        *piVar2 = (int)(char)(cVar11 + -0x30);
        UNLOCK();
        if (-1 < iVar20) {
          piVar2 = (int *)(unaff_BP + -0x90);
          *piVar2 = *piVar2 + iVar20 * 10;
        }
      }
      break;
    case '\x06':
      puVar3 = (uint *)(unaff_BP + -0x98);
      *puVar3 = *puVar3 | 0x10;
      uVar15 = 0x500;
      break;
    case '\a':
      puVar3 = (uint *)(unaff_BP + -0x98);
      *puVar3 = *puVar3 | 0x100;
      puVar3 = (uint *)(unaff_BP + -0x98);
      *puVar3 = *puVar3 & 0xffef;
      uVar15 = 0x500;
      break;
    case '\b':
      puVar3 = (uint *)(unaff_BP + -0x98);
      *puVar3 = *puVar3 & 0xffef;
      puVar3 = (uint *)(unaff_BP + -0x98);
      *puVar3 = *puVar3 | 0x80;
      uVar15 = 0x500;
      break;
    case '\t':
      if (bVar18 != 0) goto switchD_1000_10c1_caseD_5;
      if ((*(uint *)(unaff_BP + -0x98) & 2) == 0) {
        puVar3 = (uint *)(unaff_BP + -0x98);
        *puVar3 = *puVar3 | 8;
        uVar15 = 0x100;
      }
      break;
    case '\n':
      goto switchD_1000_10c1_caseD_a;
    case '\v':
      uVar14 = CONCAT11(8,cVar19);
      goto LAB_1000_11fb;
    case '\f':
      uVar14 = CONCAT11(10,cVar19);
      goto LAB_1000_1200;
    case '\r':
      uVar14 = CONCAT11(0x10,cVar11 + -0x17);
LAB_1000_11fb:
      *(undefined *)(unaff_BP + -0x8d) = 0;
LAB_1000_1200:
      *(undefined *)(unaff_BP + -0x93) = 0;
      *(char *)(unaff_BP + -0x94) = cVar11;
      piVar27 = *(int **)(unaff_BP + 4);
      iVar20 = *piVar27;
      iVar16 = 0;
      goto LAB_1000_1223;
    case '\x0e':
      *(char *)(unaff_BP + -0x94) = cVar11;
      *(char **)(unaff_BP + 6) = pcVar22;
      puVar25 = (undefined *)(unaff_BP + -0x88);
      puVar6 = (undefined2 *)*(int *)(unaff_BP + 4);
      uVar14 = *puVar6;
      *(undefined2 **)(unaff_BP + 4) = puVar6 + 1;
      if ((*(uint *)(unaff_BP + -0x98) & 0x20) != 0) {
        uVar13 = puVar6[1];
        *(undefined2 **)(unaff_BP + 4) = puVar6 + 2;
        FUN_1000_0fc9(uVar13,uVar14);
        puVar4 = puVar25;
        puVar25 = (undefined *)(unaff_BP + -0x87);
        *puVar4 = 0x3a;
      }
      FUN_1000_0fc9();
      *puVar25 = 0;
      *(undefined *)(unaff_BP + -0x93) = 0;
      puVar3 = (uint *)(unaff_BP + -0x98);
      *puVar3 = *puVar3 & 0xfffb;
      puVar26 = (uint *)(unaff_BP + -0x88);
      uVar15 = (int)puVar25 - (int)puVar26;
      goto LAB_1000_13a8;
    case '\x0f':
      *(char **)(unaff_BP + 6) = pcVar22;
      *(char *)(unaff_BP + -0x94) = cVar11;
      uVar14 = *(undefined2 *)(unaff_BP + 4);
      uVar15 = *(uint *)(unaff_BP + -0x90);
      if ((int)uVar15 < 0) {
        uVar15 = 6;
      }
      uVar7 = *(uint *)(unaff_BP + -0x98);
      uVar8 = *(uint *)(unaff_BP + -0x98);
      if ((uVar8 & 0x80) == 0) {
        if ((uVar8 & 0x100) == 0) {
          *(undefined2 *)(unaff_BP + -4) = 8;
          uVar13 = 6;
        }
        else {
          uVar13 = 8;
          *(undefined2 *)(unaff_BP + -4) = 10;
        }
      }
      else {
        uVar13 = 2;
        *(undefined2 *)(unaff_BP + -4) = 4;
      }
      thunk_FUN_1000_0cbf(uVar13,uVar7 & 1,cVar11,unaff_BP + -0x87,uVar15,uVar14);
      piVar2 = (int *)(unaff_BP + 4);
      *piVar2 = *piVar2 + *(int *)(unaff_BP + -4);
      puVar26 = (uint *)(unaff_BP + -0x87);
      goto LAB_1000_13a8;
    case '\x10':
      *(char **)(unaff_BP + 6) = pcVar22;
      *(char *)(unaff_BP + -0x94) = cVar11;
      uVar15 = **(uint **)(unaff_BP + 4);
      piVar2 = (int *)(unaff_BP + 4);
      *piVar2 = *piVar2 + 2;
      puVar26 = (uint *)(unaff_BP + -0x87);
      *puVar26 = uVar15 & 0xff;
      uVar15 = 1;
      goto LAB_1000_13e9;
    case '\x11':
      *(char **)(unaff_BP + 6) = pcVar22;
      *(char *)(unaff_BP + -0x94) = cVar11;
      puVar9 = (undefined4 *)*(undefined2 *)(unaff_BP + 4);
      if ((*(uint *)(unaff_BP + -0x98) & 0x20) == 0) {
        puVar26 = *(uint **)puVar9;
        piVar2 = (int *)(unaff_BP + 4);
        *piVar2 = *piVar2 + 2;
        uVar28 = 0x11d3;
        puVar12 = puVar26;
      }
      else {
        uVar10 = *puVar9;
        uVar28 = (uint)((ulong)uVar10 >> 0x10);
        puVar26 = (uint *)uVar10;
        piVar2 = (int *)(unaff_BP + 4);
        *piVar2 = *piVar2 + 4;
        puVar12 = (uint *)(uVar28 | (uint)puVar26);
      }
      if (puVar12 == (uint *)0x0) {
        uVar28 = 0x11d3;
        puVar26 = (uint *)0x4b2;
      }
      FUN_1000_100d();
      puVar3 = (uint *)(unaff_BP + -0x90);
      if (*puVar3 <= uVar15 && uVar15 != *puVar3) {
        uVar15 = *(uint *)(unaff_BP + -0x90);
      }
      goto LAB_1000_13e9;
    case '\x12':
      *(char **)(unaff_BP + 6) = pcVar22;
      puVar9 = (undefined4 *)*(undefined2 *)(unaff_BP + 4);
      if ((*(uint *)(unaff_BP + -0x98) & 0x20) == 0) {
        piVar27 = *(int **)puVar9;
        piVar2 = (int *)(unaff_BP + 4);
        *piVar2 = *piVar2 + 2;
        uVar14 = 0x11d3;
      }
      else {
        uVar10 = *puVar9;
        uVar14 = (undefined2)((ulong)uVar10 >> 0x10);
        piVar27 = (int *)uVar10;
        piVar2 = (int *)(unaff_BP + 4);
        *piVar2 = *piVar2 + 4;
      }
      *piVar27 = (uint)(byte)(0x50 - *(char *)(unaff_BP + -0x55)) + *(int *)(unaff_BP + -0x58);
      goto LAB_1000_1057;
    default:
      goto switchD_1000_10c1_caseD_13;
    case '\x16':
      puVar3 = (uint *)(unaff_BP + -0x98);
      *puVar3 = *puVar3 & 0xffdf;
      uVar15 = 0x500;
      break;
    case '\x17':
      puVar3 = (uint *)(unaff_BP + -0x98);
      *puVar3 = *puVar3 | 0x20;
      uVar15 = 0x500;
    }
    pcVar1 = pcVar22;
    pcVar22 = pcVar22 + 1;
    cVar11 = *pcVar1;
  } while( true );
switchD_1000_10c1_caseD_a:
  uVar14 = CONCAT11(10,cVar19);
  *(undefined *)(unaff_BP + -0x93) = 1;
  *(char *)(unaff_BP + -0x94) = cVar11;
  piVar27 = *(int **)(unaff_BP + 4);
  iVar20 = *piVar27;
  iVar16 = iVar20 >> 0xf;
LAB_1000_1223:
  piVar24 = piVar27 + 1;
  *(char **)(unaff_BP + 6) = pcVar22;
  if ((*(uint *)(unaff_BP + -0x98) & 0x10) != 0) {
    iVar16 = *piVar24;
    piVar24 = piVar27 + 2;
  }
  *(int **)(unaff_BP + 4) = piVar24;
  puVar26 = (uint *)(unaff_BP + -0x87);
  if ((iVar20 == 0) && (iVar16 == 0)) {
    if (*(int *)(unaff_BP + -0x90) == 0) {
      pcVar23 = *(char **)(unaff_BP + -0x96);
      iVar20 = *(int *)(unaff_BP + -0x92);
      if ((iVar20 != 0) && (iVar20 != -1)) {
        do {
          FUN_1000_101a();
          iVar20 = iVar20 + -1;
        } while (iVar20 != 0);
      }
      goto LAB_1000_105b;
    }
  }
  else {
    puVar3 = (uint *)(unaff_BP + -0x98);
    *puVar3 = *puVar3 | 4;
  }
  FUN_1000_0bd4(uVar14,*(undefined *)(unaff_BP + -0x93),(char)((uint)uVar14 >> 8),puVar26,iVar20,
                iVar16);
  if (*(int *)(unaff_BP + -0x90) < 1) {
LAB_1000_13a8:
    if (((*(uint *)(unaff_BP + -0x98) & 8) == 0) || (*(int *)(unaff_BP + -0x92) < 1))
    goto LAB_1000_13ca;
  }
  FUN_1000_100d();
  if (*(char *)puVar26 == '-') {
    uVar15 = uVar15 - 1;
  }
  if (extraout_DX - uVar15 != 0 && (int)uVar15 <= extraout_DX) {
    *(int *)(unaff_BP + -0x8c) = extraout_DX - uVar15;
  }
LAB_1000_13ca:
  cVar11 = *(char *)(unaff_BP + -0x8d);
  if ((cVar11 != '\0') && (*(char *)puVar26 != '-')) {
    piVar2 = (int *)(unaff_BP + -0x8c);
    iVar20 = *piVar2;
    *piVar2 = *piVar2 + -1;
    piVar2 = (int *)(unaff_BP + -0x8c);
    *piVar2 = *piVar2 + (uint)(iVar20 == 0);
    puVar26 = (uint *)((int)puVar26 + -1);
    *(char *)puVar26 = cVar11;
  }
  FUN_1000_100d();
LAB_1000_13e9:
  pcVar23 = *(char **)(unaff_BP + -0x96);
  iVar20 = *(int *)(unaff_BP + -0x92);
  if ((*(uint *)(unaff_BP + -0x98) & 5) == 5) {
    cVar11 = *(char *)(unaff_BP + -0x94);
    if (cVar11 == 'o') {
      if (*(int *)(unaff_BP + -0x8c) < 1) {
        *(undefined2 *)(unaff_BP + -0x8c) = 1;
      }
    }
    else if ((cVar11 == 'x') || (cVar11 == 'X')) {
      puVar3 = (uint *)(unaff_BP + -0x98);
      *puVar3 = *puVar3 | 0x40;
      iVar20 = iVar20 + -2;
      piVar2 = (int *)(unaff_BP + -0x8c);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -2;
      if (SBORROW2(iVar16,2) != *piVar2 < 0) {
        *(undefined2 *)(unaff_BP + -0x8c) = 0;
      }
    }
  }
  iVar16 = uVar15 + *(int *)(unaff_BP + -0x8c);
  if ((*(uint *)(unaff_BP + -0x98) & 2) == 0) {
    for (; iVar16 < iVar20; iVar20 = iVar20 + -1) {
      FUN_1000_101a();
    }
  }
  if ((*(uint *)(unaff_BP + -0x98) & 0x40) != 0) {
    FUN_1000_101a();
    FUN_1000_101a();
  }
  iVar17 = *(int *)(unaff_BP + -0x8c);
  if (0 < iVar17) {
    iVar16 = iVar16 - iVar17;
    iVar20 = iVar20 - iVar17;
    cVar11 = *(char *)puVar26;
    if (((cVar11 == '-') || (cVar11 == ' ')) || (cVar11 == '+')) {
      puVar26 = (uint *)((int)puVar26 + 1);
      FUN_1000_101a();
      iVar16 = iVar16 + -1;
      iVar20 = iVar20 + -1;
      iVar17 = extraout_DX_00;
    }
    for (; iVar17 != 0; iVar17 = iVar17 + -1) {
      FUN_1000_101a();
      iVar16 = extraout_DX_01;
    }
  }
  if (iVar16 != 0) {
    iVar20 = iVar20 - iVar16;
    do {
      puVar3 = puVar26;
      puVar26 = (uint *)((int)puVar26 + 1);
      *pcVar23 = *(char *)puVar3;
      pcVar23 = pcVar23 + 1;
      pcVar1 = (char *)(unaff_BP + -0x55);
      cVar11 = *pcVar1;
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0' || SBORROW1(cVar11,'\x01') != *pcVar1 < '\0') {
        FUN_1000_1022();
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  if (0 < iVar20) {
    do {
      FUN_1000_101a();
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  goto LAB_1000_105b;
}



void __cdecl16near FUN_1000_1517(int param_1)

{
  int iVar1;
  
  if (DAT_11d3_05fa == 0) {
    DAT_11d3_05fa = param_1;
    *(int *)(param_1 + 4) = param_1;
    *(int *)(param_1 + 6) = param_1;
  }
  else {
    iVar1 = *(int *)(DAT_11d3_05fa + 6);
    *(int *)(DAT_11d3_05fa + 6) = param_1;
    *(int *)(iVar1 + 4) = param_1;
    *(int *)(param_1 + 6) = iVar1;
    *(int *)(param_1 + 4) = DAT_11d3_05fa;
  }
  return;
}



void __cdecl16near FUN_1000_1550(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_1;
  *piVar1 = *piVar1 + *param_2;
  if (DAT_11d3_05f8 == param_2) {
    DAT_11d3_05f8 = param_1;
  }
  else {
    *(int **)((int)param_2 + *param_2 + 2) = param_1;
  }
  FUN_1000_0412(param_2);
  return;
}



void __cdecl16near FUN_1000_1587(void)

{
  uint *puVar1;
  
  if (DAT_11d3_05fc == DAT_11d3_05f8) {
    FUN_1000_05bc(DAT_11d3_05fc);
    DAT_11d3_05f8 = (uint *)0x0;
    DAT_11d3_05fc = (uint *)0x0;
  }
  else {
    puVar1 = (uint *)DAT_11d3_05f8[1];
    if ((*puVar1 & 1) == 0) {
      FUN_1000_0412(puVar1);
      if (puVar1 == DAT_11d3_05fc) {
        DAT_11d3_05f8 = (uint *)0x0;
        DAT_11d3_05fc = (uint *)0x0;
      }
      else {
        DAT_11d3_05f8 = (uint *)puVar1[1];
      }
      FUN_1000_05bc(puVar1);
    }
    else {
      FUN_1000_05bc(DAT_11d3_05f8);
      DAT_11d3_05f8 = puVar1;
    }
  }
  return;
}



void __cdecl16near FUN_1000_15e0(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar1 = param_1;
  *puVar1 = *puVar1 - 1;
  puVar3 = (uint *)(*param_1 + (int)param_1);
  puVar2 = (uint *)param_1[1];
  if (((*puVar2 & 1) == 0) && (param_1 != DAT_11d3_05fc)) {
    puVar1 = puVar2;
    *puVar1 = *puVar1 + *param_1;
    puVar3[1] = (uint)puVar2;
    param_1 = puVar2;
  }
  else {
    FUN_1000_1517(param_1);
  }
  if ((*puVar3 & 1) == 0) {
    FUN_1000_1550(param_1,puVar3);
  }
  return;
}



void __cdecl16near FUN_1000_162e(int param_1)

{
  if (param_1 != 0) {
    if (param_1 + -4 == DAT_11d3_05f8) {
      FUN_1000_1587();
    }
    else {
      FUN_1000_15e0(param_1 + -4);
    }
  }
  return;
}



void __cdecl16near FUN_1000_1655(undefined2 param_1)

{
  FUN_1000_1674(0x773,0x1ce6,0x312,param_1,&stack0x0004);
  return;
}



void FUN_1000_1674(void)

{
  FUN_1000_16a2();
  return;
}



void __cdecl16near FUN_1000_1689(void)

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



// WARNING (jumptable): Unable to track spacebase fully for stack

undefined2 __cdecl16near FUN_1000_16a2(void)

{
  int *piVar1;
  uint *puVar2;
  byte *pbVar3;
  undefined2 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  uint uVar9;
  undefined2 uVar10;
  byte bVar11;
  uint uVar12;
  int unaff_BP;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  bool bVar16;
  char cVar17;
  undefined4 uVar18;
  
LAB_1000_16a4:
  pbVar13 = *(byte **)(unaff_BP + 10);
LAB_1000_16a7:
  pbVar3 = pbVar13;
  pbVar13 = pbVar13 + 1;
  bVar11 = *pbVar3;
  if (bVar11 == 0) goto LAB_1000_1a80;
  if (bVar11 != 0x25) goto LAB_1000_16b0;
  *(undefined2 *)(unaff_BP + -0x22) = 0xffff;
  *(undefined *)(unaff_BP + -0x29) = 0;
  pbVar14 = pbVar13;
LAB_1000_1715:
  pbVar13 = pbVar14 + 1;
  puVar8 = (undefined2 *)(int)(char)*pbVar14;
  *(byte **)(unaff_BP + 10) = pbVar13;
  if ((int)puVar8 < 0) goto LAB_1000_1a80;
  bVar11 = *(byte *)(puVar8 + 0x295);
  switch(bVar11) {
  case 0:
  case 1:
  case 2:
    goto LAB_1000_1a80;
  case 3:
    goto switchD_1000_1733_caseD_3;
  case 4:
    pbVar3 = (byte *)(unaff_BP + -0x29);
    *pbVar3 = *pbVar3 | 1;
    pbVar14 = pbVar13;
    goto LAB_1000_1715;
  case 5:
    LOCK();
    piVar1 = (int *)(unaff_BP + -0x22);
    iVar6 = *piVar1;
    *piVar1 = (int)(puVar8 + -0x18);
    UNLOCK();
    pbVar14 = pbVar13;
    if (-1 < iVar6) {
      piVar1 = (int *)(unaff_BP + -0x22);
      *piVar1 = *piVar1 + iVar6 * 10;
    }
    goto LAB_1000_1715;
  case 6:
    goto switchD_1000_1733_caseD_6;
  case 7:
  case 8:
    uVar10 = 10;
    break;
  case 9:
    uVar10 = 0;
    break;
  case 10:
    thunk_FUN_1000_0cc4(*(undefined2 *)(unaff_BP + 4),*(undefined2 *)(unaff_BP + 6),
                        *(undefined2 *)(unaff_BP + 8),*(uint *)(unaff_BP + -0x22) & 0x7fff,
                        unaff_BP + -0x26,unaff_BP + -0x24);
    cVar17 = '\0';
    iVar6 = *(int *)(unaff_BP + -0x24);
    cVar5 = iVar6 < 0;
    if (iVar6 < 1) {
      thunk_FUN_1000_0cc4();
      if (cVar17 == cVar5) goto LAB_1000_1a80;
      goto switchD_1000_1733_caseD_16;
    }
    if ((*(byte *)(unaff_BP + -0x29) & 1) == 0) {
      FUN_1000_1689();
      piVar1 = (int *)(unaff_BP + -0x28);
      *piVar1 = *piVar1 + 1;
      if ((*(byte *)(unaff_BP + -0x29) & 4) == 0) {
        if ((*(byte *)(unaff_BP + -0x29) & 8) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = 8;
        }
      }
      else {
        uVar10 = 4;
      }
      thunk_FUN_1000_0cc4(puVar8,uVar10);
    }
    else {
      thunk_FUN_1000_0cc4();
    }
    goto LAB_1000_16a4;
  case 0xb:
    pbVar3 = (byte *)(unaff_BP + -0x29);
    *pbVar3 = *pbVar3 | 8;
    pbVar14 = pbVar13;
    goto LAB_1000_1715;
  case 0xc:
    pbVar3 = (byte *)(unaff_BP + -0x29);
    *pbVar3 = *pbVar3 | 2;
    pbVar14 = pbVar13;
    goto LAB_1000_1715;
  case 0xd:
    pbVar3 = (byte *)(unaff_BP + -0x29);
    *pbVar3 = *pbVar3 | 4;
    pbVar14 = pbVar13;
    goto LAB_1000_1715;
  case 0xe:
    uVar10 = 8;
    break;
  case 0xf:
    iVar6 = 0x18f0;
    goto LAB_1000_1a87;
  case 0x10:
    goto switchD_1000_1733_caseD_10;
  case 0x11:
    pbVar14 = pbVar13;
    if ((*(byte *)(unaff_BP + -0x29) & 1) == 0) goto LAB_1000_17ff;
    goto LAB_1000_1715;
  case 0x12:
    uVar10 = 0x10;
    break;
  case 0x13:
    iVar6 = 0x1819;
    goto LAB_1000_1a87;
  case 0x14:
    pbVar3 = (byte *)(unaff_BP + -0x29);
    *pbVar3 = *pbVar3 & 0xdf;
    pbVar14 = pbVar13;
    goto LAB_1000_1715;
  case 0x15:
    goto switchD_1000_1733_caseD_15;
  default:
    goto switchD_1000_1733_caseD_16;
  }
  if (((uint)puVar8 & 0x20) == 0) {
    pbVar3 = (byte *)(unaff_BP + -0x29);
    *pbVar3 = *pbVar3 | 4;
  }
  FUN_1000_1b4d(*(undefined2 *)(unaff_BP + 4),*(undefined2 *)(unaff_BP + 6),
                *(undefined2 *)(unaff_BP + 8),uVar10,*(uint *)(unaff_BP + -0x22) & 0x7fff,
                unaff_BP + -0x26,unaff_BP + -0x24);
  iVar6 = *(int *)(unaff_BP + -0x24);
  if (iVar6 < 1) {
    if (-1 < iVar6) goto LAB_1000_1a80;
    goto switchD_1000_1733_caseD_16;
  }
  if ((*(byte *)(unaff_BP + -0x29) & 1) == 0) {
    piVar1 = (int *)(unaff_BP + -0x28);
    *piVar1 = *piVar1 + 1;
LAB_1000_17ff:
    uVar18 = FUN_1000_1689();
    *puVar8 = (int)uVar18;
    if ((*(byte *)(unaff_BP + -0x29) & 4) != 0) {
      puVar8[1] = (int)((ulong)uVar18 >> 0x10);
    }
  }
  goto LAB_1000_16a4;
switchD_1000_1733_caseD_15:
  pbVar3 = (byte *)(unaff_BP + -0x29);
  *pbVar3 = *pbVar3 | 0x20;
  pbVar14 = pbVar13;
  goto LAB_1000_1715;
switchD_1000_1733_caseD_10:
  puVar8 = (undefined2 *)(unaff_BP + -0x20);
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar4 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar4 = 0;
  }
  pbVar13 = pbVar14 + 2;
  bVar11 = *pbVar13;
  pbVar3 = (byte *)(unaff_BP + -0x29);
  *pbVar3 = *pbVar3 & 0xef;
  if (bVar11 == 0x5e) {
    pbVar3 = (byte *)(unaff_BP + -0x29);
    *pbVar3 = *pbVar3 | 0x10;
    pbVar3 = pbVar13;
    pbVar13 = pbVar14 + 3;
    bVar11 = *pbVar3;
  }
  uVar9 = (uint)bVar11;
LAB_1000_19a4:
  pbVar14 = pbVar13;
  pbVar15 = (byte *)(uVar9 >> 3);
  bVar11 = '\x01' << ((byte)uVar9 & 7);
  iVar6 = (uint)bVar11 << 8;
  pbVar3 = pbVar15 + unaff_BP + -0x20;
  *pbVar3 = *pbVar3 | bVar11;
  uVar12 = uVar9;
  while( true ) {
    pbVar13 = pbVar14 + 1;
    bVar11 = *pbVar14;
    uVar9 = (uint)bVar11;
    if (bVar11 == 0) goto LAB_1000_1a80;
    if (bVar11 == 0x5d) break;
    if (((bVar11 != 0x2d) ||
        (pbVar3 = pbVar13, bVar11 = (byte)uVar12, *pbVar3 <= bVar11 && bVar11 != *pbVar3)) ||
       (*pbVar13 == 0x5d)) goto LAB_1000_19a4;
    pbVar14 = pbVar14 + 2;
    cVar5 = *pbVar13 - bVar11;
    if (cVar5 != '\0') {
      uVar12 = (uint)(byte)(bVar11 + cVar5);
      do {
        bVar16 = iVar6 < 0;
        bVar11 = (char)((uint)iVar6 >> 8) << 1 | bVar16;
        iVar6 = (uint)bVar11 << 8;
        pbVar15 = pbVar15 + bVar16;
        pbVar3 = pbVar15 + unaff_BP + -0x20;
        *pbVar3 = *pbVar3 | bVar11;
        cVar5 = cVar5 + -1;
      } while (cVar5 != '\0');
    }
  }
  *(byte **)(unaff_BP + 10) = pbVar13;
  puVar2 = (uint *)(unaff_BP + -0x22);
  *puVar2 = *puVar2 & 0x7fff;
  iVar6 = *(int *)(unaff_BP + -0x22);
  unaff_ES = unaff_SS;
  if ((*(byte *)(unaff_BP + -0x29) & 1) == 0) {
    FUN_1000_1689();
  }
  while (iVar7 = iVar6 + -1, 0 < iVar6) {
    piVar1 = (int *)(unaff_BP + -0x26);
    *piVar1 = *piVar1 + 1;
    uVar9 = (**(code **)(unaff_BP + 4))(*(undefined2 *)(unaff_BP + 8));
    if ((int)uVar9 < 0) {
      if ((iVar6 < *(int *)(unaff_BP + -0x22)) && ((*(byte *)(unaff_BP + -0x29) & 1) == 0)) {
        *pbVar15 = 0;
        piVar1 = (int *)(unaff_BP + -0x28);
        *piVar1 = *piVar1 + 1;
      }
      goto switchD_1000_1733_caseD_16;
    }
    if ((*(byte *)(unaff_BP + (uVar9 >> 3) + -0x20) & '\x01' << ((byte)uVar9 & 7)) == 0) {
      if ((*(byte *)(unaff_BP + -0x29) & 0x10) == 0) goto LAB_1000_1a37;
    }
    else if ((*(byte *)(unaff_BP + -0x29) & 0x10) != 0) {
LAB_1000_1a37:
      (**(code **)(unaff_BP + 6))(uVar9,*(undefined2 *)(unaff_BP + 8));
      piVar1 = (int *)(unaff_BP + -0x26);
      *piVar1 = *piVar1 + -1;
      if (iVar6 < *(int *)(unaff_BP + -0x22)) break;
      goto LAB_1000_1a54;
    }
    iVar6 = iVar7;
    if ((*(byte *)(unaff_BP + -0x29) & 1) == 0) {
      pbVar3 = pbVar15;
      pbVar15 = pbVar15 + 1;
      *pbVar3 = (byte)uVar9;
    }
  }
  if ((*(byte *)(unaff_BP + -0x29) & 1) == 0) {
    piVar1 = (int *)(unaff_BP + -0x28);
    *piVar1 = *piVar1 + 1;
LAB_1000_1a54:
    *pbVar15 = 0;
  }
  goto LAB_1000_16a4;
LAB_1000_1a87:
  piVar1 = (int *)(unaff_BP + -0x26);
  *piVar1 = *piVar1 + 1;
  iVar7 = (**(code **)(unaff_BP + 4))(*(undefined2 *)(unaff_BP + 8));
  if (iVar7 < 1) {
    if (iVar7 != 0) {
switchD_1000_1733_caseD_16:
      (**(code **)(unaff_BP + 6))(0xffff,*(undefined2 *)(unaff_BP + 8));
      piVar1 = (int *)(unaff_BP + -0x28);
      *piVar1 = *piVar1 - (uint)(*(int *)(unaff_BP + -0x28) == 0);
LAB_1000_1a80:
      return *(undefined2 *)(unaff_BP + -0x28);
    }
LAB_1000_1aa2:
                    // WARNING: Could not recover jumptable at 0x00011aa6. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar10 = (*(code *)(iVar6 + 3))();
    return uVar10;
  }
  if (((char)iVar7 < '\0') || (*(char *)(iVar7 + 0x52a) != '\x01')) goto LAB_1000_1aa2;
  goto LAB_1000_1a87;
switchD_1000_1733_caseD_6:
  if ((*(byte *)(unaff_BP + -0x29) & 1) == 0) {
    FUN_1000_1689();
  }
  iVar6 = *(int *)(unaff_BP + -0x22);
  bVar16 = iVar6 != 0;
  if (iVar6 < 0) {
    iVar6 = 1;
  }
  if (bVar16) goto LAB_1000_195e;
  goto LAB_1000_1978;
  while (iVar7 = iVar6 + -1, bVar16 = 0 < iVar6, iVar6 = iVar7, iVar7 != 0 && bVar16) {
LAB_1000_195e:
    piVar1 = (int *)(unaff_BP + -0x26);
    *piVar1 = *piVar1 + 1;
    iVar7 = (**(code **)(unaff_BP + 4))(*(undefined2 *)(unaff_BP + 8));
    if ((*(byte *)(unaff_BP + -0x29) & 1) == 0) {
      puVar4 = puVar8;
      puVar8 = (undefined2 *)((int)puVar8 + 1);
      *(char *)puVar4 = (char)iVar7;
    }
    if (iVar7 < 0) goto switchD_1000_1733_caseD_16;
  }
LAB_1000_1978:
  if ((*(byte *)(unaff_BP + -0x29) & 1) == 0) {
    piVar1 = (int *)(unaff_BP + -0x28);
    *piVar1 = *piVar1 + 1;
  }
  goto LAB_1000_16a4;
switchD_1000_1733_caseD_3:
LAB_1000_16b0:
  iVar6 = (int)(char)bVar11;
  piVar1 = (int *)(unaff_BP + -0x26);
  *piVar1 = *piVar1 + 1;
  iVar7 = (**(code **)(unaff_BP + 4))(*(undefined2 *)(unaff_BP + 8));
  if (iVar7 < 0) goto switchD_1000_1733_caseD_16;
  if ((iVar6 < 0) || (*(char *)(iVar6 + 0x52a) != '\x01')) {
    if (iVar7 != iVar6) {
      (**(code **)(unaff_BP + 6))(iVar7,*(undefined2 *)(unaff_BP + 8));
      piVar1 = (int *)(unaff_BP + -0x26);
      *piVar1 = *piVar1 + -1;
      goto LAB_1000_1a80;
    }
  }
  else {
    while ((-1 < (char)iVar7 && (*(char *)(iVar7 + 0x52a) == '\x01'))) {
      piVar1 = (int *)(unaff_BP + -0x26);
      *piVar1 = *piVar1 + 1;
      iVar7 = (**(code **)(unaff_BP + 4))(*(undefined2 *)(unaff_BP + 8));
      if (iVar7 < 1) goto switchD_1000_1733_caseD_16;
    }
    (**(code **)(unaff_BP + 6))(iVar7,*(undefined2 *)(unaff_BP + 8));
    piVar1 = (int *)(unaff_BP + -0x26);
    *piVar1 = *piVar1 + -1;
  }
  goto LAB_1000_16a7;
}



void thunk_FUN_1000_0cc4(void)

{
                    // WARNING: Could not recover jumptable at 0x00011b13. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_11d3_05b2)();
  return;
}



void thunk_FUN_1000_0cc4(void)

{
                    // WARNING: Could not recover jumptable at 0x00011b17. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_11d3_05b4)();
  return;
}



void thunk_FUN_1000_0cc4(void)

{
                    // WARNING: Could not recover jumptable at 0x00011b1b. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_11d3_05b6)();
  return;
}



void __cdecl16near FUN_1000_1b1f(void)

{
  return;
}



undefined4 __cdecl16near
FUN_1000_1b4d(code *param_1,code *param_2,undefined2 param_3,uint param_4,int param_5,int *param_6,
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
    if ((int)uVar7 < 0) goto LAB_1000_1bdb;
    cVar5 = (char)uVar7;
    uVar7 = (uint)cVar5;
  } while (((uVar7 & 0x80) == 0) && ((*(byte *)(uVar7 + 0x211) & 1) != 0));
  if (param_5 < 1) {
LAB_1000_1be2:
    local_6 = iVar2;
    local_4 = 0;
  }
  else {
    if (cVar5 != '+') {
      iVar4 = param_5 + -1;
      if (cVar5 == '-') {
        local_7 = '\x01';
        goto LAB_1000_1b92;
      }
LAB_1000_1ba5:
      local_6 = iVar2;
      param_5 = iVar4;
      uVar13 = 0;
      uVar14 = 0;
      bVar6 = (byte)uVar7;
      iVar2 = local_6;
      if (param_4 == 0) {
        param_4 = 10;
        if (bVar6 != 0x30) {
LAB_1000_1c28:
          uVar15 = bVar6 < 0x30;
          FUN_1000_1b1f();
          uVar13 = uVar7;
          if (!(bool)uVar15) goto LAB_1000_1c3f;
          goto LAB_1000_1be2;
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
            goto LAB_1000_1c3f;
          }
LAB_1000_1c4e:
          while (FUN_1000_1b1f(), !(bool)uVar15) {
            uVar10 = (uint)((ulong)uVar13 * (ulong)param_4 >> 0x10);
            uVar8 = (uint)((ulong)uVar13 * (ulong)param_4);
            uVar13 = uVar7 + uVar8;
            uVar7 = (uint)CARRY2(uVar7,uVar8);
            uVar8 = uVar14 + uVar10;
            uVar15 = CARRY2(uVar14,uVar10) || CARRY2(uVar8,uVar7);
            uVar14 = uVar8 + uVar7;
            if (uVar14 != 0) goto LAB_1000_1c6b;
LAB_1000_1c3f:
            if (param_5 < 1) goto LAB_1000_1c90;
            local_6 = local_6 + 1;
            uVar7 = (*param_1)(param_3);
            param_5 = param_5 + -1;
          }
LAB_1000_1c84:
          (*param_2)(uVar7,param_3);
          local_6 = local_6 + -1;
        }
      }
      else {
        if ((0x24 < param_4) || (bVar9 = (byte)param_4, bVar9 < 2)) goto LAB_1000_1be2;
        if (bVar6 != 0x30) goto LAB_1000_1c28;
        uVar15 = bVar9 < 0x10;
        if (bVar9 != 0x10) goto LAB_1000_1c3f;
        iVar2 = param_5 + -1;
        if (0 < param_5) {
          local_6 = local_6 + 1;
          uVar7 = (*param_1)(param_3);
          bVar6 = (byte)uVar7;
          uVar15 = bVar6 < 0x78;
          param_5 = iVar2;
          if (bVar6 == 0x78) goto LAB_1000_1c3f;
          uVar15 = bVar6 < 0x58;
          if (bVar6 == 0x58) goto LAB_1000_1c3f;
          goto LAB_1000_1c4e;
        }
      }
LAB_1000_1c90:
      if (local_7 != '\0') {
        bVar16 = uVar13 != 0;
        uVar13 = -uVar13;
        uVar14 = -(uint)bVar16 - uVar14;
      }
      goto LAB_1000_1ca0;
    }
LAB_1000_1b92:
    if (param_5 + -1 < 1) goto LAB_1000_1be2;
    uVar7 = (*param_1)(param_3);
    iVar4 = param_5 + -2;
    iVar2 = local_6 + 2;
    if (-1 < (int)uVar7) goto LAB_1000_1ba5;
LAB_1000_1bdb:
    local_6 = iVar2;
    local_4 = 0xffff;
  }
  (*param_2)(uVar7,param_3);
  local_6 = local_6 + -1;
  uVar13 = 0;
  uVar14 = 0;
LAB_1000_1ca0:
  piVar1 = param_6;
  *piVar1 = *piVar1 + local_6;
  *param_7 = local_4;
  return CONCAT22(uVar14,uVar13);
  while( true ) {
    local_6 = local_6 + 1;
    uVar7 = (*param_1)(param_3);
    uVar8 = param_4;
    FUN_1000_1b1f();
    if ((bool)uVar15) goto LAB_1000_1c84;
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
LAB_1000_1c6b:
    if (param_5 < 1) goto LAB_1000_1c90;
  }
  uVar13 = CONCAT11((local_7 != '\0') + -1,local_7 + -1);
  uVar14 = (local_7 != '\0') + 0x7fff;
  local_4 = 2;
  goto LAB_1000_1ca0;
}



void __cdecl16near FUN_1000_1ccf(undefined2 param_1)

{
  FUN_1000_0ba9(param_1,0,0,1);
  return;
}



uint __cdecl16near FUN_1000_1ce6(uint param_1,int *param_2)

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


