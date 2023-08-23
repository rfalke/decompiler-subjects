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




// WARNING (jumptable): Stack frame is not setup normally: Input value of stackpointer is not used
// WARNING: Stack frame is not setup normally: Input value of stackpointer is not used
// WARNING: This function may have set the stack pointer

void entry(void)

{
  int *piVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  code *pcVar5;
  code *pcVar6;
  char **ppcVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  undefined2 uVar12;
  char *extraout_DX;
  undefined2 extraout_DX_00;
  int extraout_DX_01;
  int extraout_DX_02;
  int iVar13;
  undefined *puVar14;
  int *piVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined2 *puVar20;
  char **ppcVar21;
  int unaff_SI;
  char *pcVar22;
  int *piVar23;
  int *piVar24;
  uint uVar25;
  int iVar26;
  undefined *puVar27;
  char *pcVar28;
  char *pcVar29;
  undefined2 unaff_ES;
  undefined2 uVar30;
  bool bVar31;
  undefined uVar32;
  undefined4 uVar33;
  
  puVar14 = (undefined *)0xe6;
                    // WARNING (jumptable): Read-only address (ram,0x000101c7) is written
                    // WARNING: Read-only address (ram,0x000101c7) is written
  uRam000101c7 = 0x126b;
  pcVar6 = (code *)swi(0x21);
  uVar33 = (*pcVar6)();
  uVar30 = s_Turbo_C___Copyright__c__1988_Bor_126b_0004._40_2_;
  iVar11 = DAT_126b_0002;
  uVar12 = (undefined2)((ulong)uVar33 >> 0x10);
  *(undefined2 *)&DAT_126b_007d = (int)uVar33;
  *(undefined2 *)&DAT_126b_007b = unaff_ES;
  *(undefined2 *)&DAT_126b_0077 = uVar30;
  *(int *)&DAT_126b_0091 = iVar11;
  *(undefined2 *)&DAT_126b_0081 = 0xffff;
  *(undefined2 *)(puVar14 + -2) = 0x2e;
  FUN_1000_012f();
  uVar33 = *(undefined4 *)&DAT_126b_0075;
  uVar30 = (undefined2)((ulong)uVar33 >> 0x10);
  piVar23 = (int *)uVar33;
  uVar10 = 0x7fff;
  piVar24 = piVar23;
  do {
    if (((*piVar24 == 0x3738) && (iVar13 = piVar24[1], (char)iVar13 == '=')) &&
       (piVar1 = (int *)&DAT_126b_0081, *piVar1 = *piVar1 + 1,
       ((byte)((uint)iVar13 >> 8) & 0xdf) == 0x59)) {
      piVar1 = (int *)&DAT_126b_0081;
      *piVar1 = *piVar1 + 1;
    }
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      piVar1 = piVar24;
      piVar24 = (int *)((int)piVar24 + 1);
    } while ((char)uVar33 != *(char *)piVar1);
    if (uVar10 == 0) goto LAB_1000_0099;
    piVar23 = (int *)((int)piVar23 + 1);
  } while (*(char *)piVar24 != (char)uVar33);
  *(int *)&DAT_126b_0075 = -(uVar10 | 0x8000);
  *(uint *)&DAT_126b_0079 = (int)piVar23 * 4 + 0x10U & 0xfff0;
  uVar10 = *(uint *)&DAT_126b_0142;
  if (uVar10 < 0x200) {
    uVar10 = 0x200;
    *(undefined2 *)&DAT_126b_0142 = 0x200;
  }
  bVar9 = 4;
  uVar25 = (uVar10 >> 4) + 1;
  if (iVar11 + 0xed37U < uVar25) {
LAB_1000_0099:
    FUN_1000_01af();
    return;
  }
  iVar13 = (uVar10 >> 4) + 0x12ca;
  *(int *)&DAT_126b_0089 = iVar13;
  *(int *)&DAT_126b_008d = iVar13;
  iVar13 = iVar13 - *(int *)&DAT_126b_007b;
  piVar15 = (int *)(puVar14 + -2);
  *(uint *)(puVar14 + -2) = uVar25;
  pcVar6 = (code *)swi(0x21);
  (*pcVar6)();
  iVar26 = *piVar15 << (bVar9 & 0x1f);
  puVar27 = (undefined *)&DAT_126b_0554;
  for (iVar11 = 0x80; iVar11 != 0; iVar11 = iVar11 + -1) {
    puVar3 = puVar27;
    puVar27 = puVar27 + 1;
    *puVar3 = 0;
  }
  *(undefined2 *)(iVar26 + -2) = 0x1000;
  pcVar5 = *(code **)&DAT_126b_053e;
  puVar16 = (undefined *)(iVar26 + -4);
  *(undefined2 *)(iVar26 + -4) = 0xd3;
  (*pcVar5)();
  *(undefined2 *)(puVar16 + -2) = 0x1000;
  puVar17 = puVar16 + -4;
  *(undefined2 *)(puVar16 + -4) = 0xd8;
  FUN_1000_01d1();
  *(undefined2 *)(puVar17 + -2) = 0x1000;
  *(undefined2 *)(puVar17 + -4) = 0xdd;
  FUN_1000_02cf();
  pcVar6 = (code *)swi(0x1a);
  (*pcVar6)();
  *(undefined2 *)&DAT_126b_0083 = extraout_DX_00;
  *(int *)&DAT_126b_0085 = iVar11;
  *(undefined2 *)(puVar17 + -2) = 0x1000;
  pcVar5 = *(code **)&DAT_126b_0542;
  puVar18 = puVar17 + -4;
  *(undefined2 *)(puVar17 + -4) = 0xee;
  (*pcVar5)();
  *(undefined2 *)(puVar18 + -2) = *(undefined2 *)&DAT_126b_0073;
  *(undefined2 *)(puVar18 + -4) = *(undefined2 *)&DAT_126b_0071;
  *(undefined2 *)(puVar18 + -6) = *(undefined2 *)&DAT_126b_006f;
  *(undefined2 *)(puVar18 + -8) = *(undefined2 *)&DAT_126b_006d;
  *(undefined2 *)(puVar18 + -10) = *(undefined2 *)&DAT_126b_006b;
  *(undefined2 *)(puVar18 + -0xc) = 0x1000;
  *(undefined2 *)(puVar18 + -0xe) = 0x107;
  uVar30 = FUN_103c_0002();
  *(undefined2 *)(puVar18 + -0xc) = uVar30;
  *(undefined2 *)(puVar18 + -0xe) = 0x103c;
  *(undefined2 *)(puVar18 + -0x10) = 0x10d;
  FUN_104a_000a();
  *(undefined2 *)(puVar18 + -0xe) = 0x1000;
  *(undefined2 *)(puVar18 + -0x10) = 0x117;
  FUN_1000_0172();
  *(undefined2 *)(puVar18 + -0xe) = 0x1000;
  pcVar6 = pcRam00000540;
  puVar19 = puVar18 + -0x10;
  *(undefined2 *)(puVar18 + -0x10) = 0x11c;
  (*pcVar6)();
  pcVar6 = (code *)swi(0x21);
  (*pcVar6)();
  *(undefined2 *)(puVar19 + -2) = 0x1be;
  FUN_1000_01a7();
  *(undefined2 *)(puVar19 + -2) = 3;
  *(undefined2 *)(puVar19 + -4) = 0x1000;
  puVar20 = (undefined2 *)(puVar19 + -6);
  *(undefined2 *)(puVar19 + -6) = 0x1c7;
  cVar8 = FUN_1000_010d();
  pcVar2 = (char *)(iVar13 + unaff_SI);
  *pcVar2 = *pcVar2 + cVar8;
  pcVar2 = (char *)(iVar13 + unaff_SI);
  *pcVar2 = *pcVar2 + cVar8;
  pcVar2 = (char *)(iVar13 + unaff_SI);
  *pcVar2 = *pcVar2 + cVar8;
  pcVar2 = (char *)(iVar13 + unaff_SI);
  *pcVar2 = *pcVar2 + cVar8;
  pcVar2 = (char *)(iVar13 + unaff_SI);
  *pcVar2 = *pcVar2 + cVar8;
                    // WARNING (jumptable): Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101c9) is written
  uRam000101c9 = *puVar20;
                    // WARNING (jumptable): Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
  uRam000101cb = puVar20[1];
                    // WARNING (jumptable): Read-only address (ram,0x000101cd) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
  uRam000101cd = 0;
  pcVar22 = (char *)(iRam00000075 + 2);
  uVar10 = 1;
  uVar30 = uRam0000007b;
  if (2 < bRam0000007d) {
    uVar10 = 0x7f;
    pcVar28 = pcVar22;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar2 = pcVar28;
      pcVar28 = pcVar28 + 1;
    } while (*pcVar2 != '\0');
    if (uVar10 == 0) goto LAB_1000_0287;
    uVar10 = uVar10 ^ 0x7f;
    uVar30 = uRam00000077;
  }
  puVar27 = (undefined *)(*(byte *)((int)&DAT_126b_007f + 1) + 2 + uVar10 & 0xfffe);
  pcVar28 = (char *)((int)puVar20 + (2 - (int)puVar27));
  if (puVar27 <= puVar20 + 1) {
    *(uint *)(pcVar28 + -2) = uVar10;
    pcVar29 = pcVar28;
    while (uVar10 - 1 != 0) {
      pcVar4 = pcVar29;
      pcVar29 = pcVar29 + 1;
      pcVar2 = pcVar22;
      pcVar22 = pcVar22 + 1;
      *pcVar4 = *pcVar2;
      uVar10 = uVar10 - 1;
    }
    bVar31 = false;
    *pcVar29 = '\0';
    uVar32 = uVar10 == 0;
LAB_1000_0243:
    *(undefined2 *)(pcVar28 + -4) = 0x246;
    bVar9 = 0;
    FUN_1000_025f();
    iVar11 = extraout_DX_01;
    if (bVar31 || (bool)uVar32) {
      do {
        if (bVar31) {
          iVar11 = *(int *)(pcVar28 + -2) + iVar11;
          ppcVar21 = (char **)(pcVar28 + (uVar10 + 1) * -4);
          uRam0000006b = uVar10;
          ppcVar7 = ppcVar21;
          pcVar22 = extraout_DX;
          if ((char *)((uVar10 + 1) * 4) <= pcVar28) goto LAB_1000_02af;
          goto LAB_1000_0287;
        }
        *(undefined2 *)(pcVar28 + -4) = 0x24d;
        bVar9 = 0;
        FUN_1000_025f();
        iVar11 = extraout_DX_02;
      } while (!bVar31 && !(bool)uVar32);
    }
    if ((bVar9 != 0x20) && (bVar9 != 0xd)) goto code_r0x00010257;
    goto LAB_1000_025b;
  }
LAB_1000_0287:
  FUN_1000_01af();
  return;
code_r0x00010257:
  bVar31 = bVar9 < 9;
  uVar32 = bVar9 == 9;
  if ((bool)uVar32) {
LAB_1000_025b:
    bVar31 = false;
    uVar32 = true;
  }
  goto LAB_1000_0243;
  while( true ) {
    *ppcVar21 = pcVar28;
    ppcVar21[1] = extraout_DX;
    ppcVar21 = ppcVar21 + 2;
    do {
      pcVar2 = pcVar28;
      pcVar28 = pcVar28 + 1;
      bVar31 = *pcVar2 != '\0';
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0 && bVar31);
    ppcVar7 = ppcRam0000006d;
    pcVar22 = pcRam0000006f;
    if (bVar31) break;
LAB_1000_02af:
    pcRam0000006f = pcVar22;
    ppcRam0000006d = ppcVar7;
    if (iVar11 == 0) break;
  }
  *ppcVar21 = (char *)0x0;
  ppcVar21[1] = (char *)0x0;
                    // WARNING: Treating indirect jump as call
  (*(code *)0x0)();
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack

void FUN_1000_010d(undefined2 param_1,undefined2 param_2)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  int extraout_DX;
  int extraout_DX_00;
  int in_BX;
  char **ppcVar10;
  char **ppcVar11;
  int unaff_SI;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  undefined2 uVar15;
  char *unaff_SS;
  bool bVar16;
  undefined uVar17;
  
  FUN_1000_0172();
  (*pcRam00000540)(0x1000);
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  param_1 = 0x1be;
  FUN_1000_01a7();
  param_1 = 3;
  cVar5 = FUN_1000_010d();
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
                    // WARNING (jumptable): Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101c9) is written
  uRam000101c9 = param_1;
                    // WARNING (jumptable): Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
  uRam000101cb = param_2;
                    // WARNING (jumptable): Read-only address (ram,0x000101cd) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
  uRam000101cd = 0;
  pcVar12 = (char *)(iRam00000075 + 2);
  uVar8 = 1;
  uVar15 = uRam0000007b;
  if (2 < bRam0000007d) {
    uVar8 = 0x7f;
    pcVar13 = pcVar12;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar1 = pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (*pcVar1 != '\0');
    if (uVar8 == 0) goto LAB_1000_0287;
    uVar8 = uVar8 ^ 0x7f;
    uVar15 = uRam00000077;
  }
  puVar7 = (undefined *)(*(byte *)((int)&DAT_126b_007f + 1) + 2 + uVar8 & 0xfffe);
  iVar4 = -(int)puVar7;
  pcVar13 = (char *)((int)&param_2 + iVar4);
  if (puVar7 <= &param_2) {
    *(uint *)((int)&param_1 + iVar4) = uVar8;
    pcVar14 = pcVar13;
    while (uVar8 - 1 != 0) {
      pcVar2 = pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar1 = pcVar12;
      pcVar12 = pcVar12 + 1;
      *pcVar2 = *pcVar1;
      uVar8 = uVar8 - 1;
    }
    bVar16 = false;
    *pcVar14 = '\0';
    uVar17 = uVar8 == 0;
LAB_1000_0243:
    *(undefined2 *)(&stack0x0000 + iVar4) = 0x246;
    bVar6 = 0;
    FUN_1000_025f();
    iVar9 = extraout_DX;
    if (bVar16 || (bool)uVar17) {
      do {
        if (bVar16) {
          iVar9 = *(int *)((int)&param_1 + iVar4) + iVar9;
          ppcVar10 = (char **)(pcVar13 + (uVar8 + 1) * -4);
          ppcVar11 = ppcVar10;
          uRam0000006b = uVar8;
          if ((char *)((uVar8 + 1) * 4) <= pcVar13) goto LAB_1000_02af;
          goto LAB_1000_0287;
        }
        *(undefined2 *)(&stack0x0000 + iVar4) = 0x24d;
        bVar6 = 0;
        FUN_1000_025f();
        iVar9 = extraout_DX_00;
      } while (!bVar16 && !(bool)uVar17);
    }
    if ((bVar6 != 0x20) && (bVar6 != 0xd)) goto code_r0x00010257;
    goto LAB_1000_025b;
  }
LAB_1000_0287:
  FUN_1000_01af();
  return;
code_r0x00010257:
  bVar16 = bVar6 < 9;
  uVar17 = bVar6 == 9;
  if ((bool)uVar17) {
LAB_1000_025b:
    bVar16 = false;
    uVar17 = true;
  }
  goto LAB_1000_0243;
  while( true ) {
    *ppcVar11 = pcVar13;
    ppcVar11[1] = unaff_SS;
    ppcVar11 = ppcVar11 + 2;
    do {
      pcVar1 = pcVar13;
      pcVar13 = pcVar13 + 1;
      bVar16 = *pcVar1 != '\0';
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0 && bVar16);
    if (bVar16) break;
LAB_1000_02af:
    if (iVar9 == 0) break;
  }
  *ppcVar11 = (char *)0x0;
  ppcVar11[1] = (char *)0x0;
  ppcRam0000006d = ppcVar10;
  pcRam0000006f = unaff_SS;
                    // WARNING: Treating indirect jump as call
  (*(code *)0x0)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl16near FUN_1000_012f(void)

{
  code *pcVar1;
  undefined2 in_BX;
  undefined2 unaff_ES;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  unique0x10000025 = in_BX;
  _DAT_126b_005d = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_126b_005f = in_BX;
  DAT_126b_0061 = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_126b_0063 = in_BX;
  DAT_126b_0065 = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_126b_0067 = in_BX;
  DAT_126b_0069 = unaff_ES;
  (*pcVar1)();
  return;
}



void __cdecl16far FUN_1000_0172(void)

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



void __cdecl16far FUN_1000_019f(void)

{
  DAT_126b_0081 = 0;
  return;
}



void __cdecl16far FUN_1000_01a6(void)

{
  return;
}



void __cdecl16near FUN_1000_01a7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack

void FUN_1000_01af(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int extraout_DX;
  int extraout_DX_00;
  int in_BX;
  char **ppcVar8;
  char **ppcVar9;
  int unaff_SI;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined2 uVar13;
  char *unaff_SS;
  bool bVar14;
  undefined uVar15;
  undefined2 in_stack_00000000;
  uint auStack_4 [2];
  
  auStack_4[1] = 0x1be;
  FUN_1000_01a7();
  auStack_4[1] = 3;
  auStack_4[0] = 0x1000;
  uVar13 = in_stack_00000000;
  cVar3 = FUN_1000_010d();
  uRam000101cb = uVar13;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + cVar3;
                    // WARNING (jumptable): Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101c9) is written
  uRam000101c9 = auStack_4[1];
                    // WARNING (jumptable): Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
                    // WARNING (jumptable): Read-only address (ram,0x000101cd) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
  uRam000101cd = 0;
  pcVar10 = (char *)(iRam00000075 + 2);
  uVar6 = 1;
  uVar13 = uRam0000007b;
  if (2 < bRam0000007d) {
    uVar6 = 0x7f;
    pcVar11 = pcVar10;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar1 = pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (*pcVar1 != '\0');
    if (uVar6 == 0) goto LAB_1000_0287;
    uVar6 = uVar6 ^ 0x7f;
    uVar13 = uRam00000077;
  }
  puVar5 = (undefined *)(*(byte *)((int)&DAT_126b_007f + 1) + 2 + uVar6 & 0xfffe);
  pcVar11 = &stack0x0000 + -(int)puVar5;
  if (puVar5 <= &stack0x0000) {
    *(uint *)(pcVar11 + -2) = uVar6;
    pcVar12 = pcVar11;
    while (uVar6 - 1 != 0) {
      pcVar2 = pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar1 = pcVar10;
      pcVar10 = pcVar10 + 1;
      *pcVar2 = *pcVar1;
      uVar6 = uVar6 - 1;
    }
    bVar14 = false;
    *pcVar12 = '\0';
    uVar15 = uVar6 == 0;
LAB_1000_0243:
    *(undefined2 *)(pcVar11 + -4) = 0x246;
    bVar4 = 0;
    FUN_1000_025f();
    iVar7 = extraout_DX;
    if (bVar14 || (bool)uVar15) {
      do {
        if (bVar14) {
          iVar7 = *(int *)(pcVar11 + -2) + iVar7;
          ppcVar8 = (char **)(pcVar11 + (uVar6 + 1) * -4);
          ppcVar9 = ppcVar8;
          uRam0000006b = uVar6;
          if ((char *)((uVar6 + 1) * 4) <= pcVar11) goto LAB_1000_02af;
          goto LAB_1000_0287;
        }
        *(undefined2 *)(pcVar11 + -4) = 0x24d;
        bVar4 = 0;
        FUN_1000_025f();
        iVar7 = extraout_DX_00;
      } while (!bVar14 && !(bool)uVar15);
    }
    if ((bVar4 != 0x20) && (bVar4 != 0xd)) goto code_r0x00010257;
    goto LAB_1000_025b;
  }
LAB_1000_0287:
  FUN_1000_01af();
  return;
code_r0x00010257:
  bVar14 = bVar4 < 9;
  uVar15 = bVar4 == 9;
  if ((bool)uVar15) {
LAB_1000_025b:
    bVar14 = false;
    uVar15 = true;
  }
  goto LAB_1000_0243;
  while( true ) {
    *ppcVar9 = pcVar11;
    ppcVar9[1] = unaff_SS;
    ppcVar9 = ppcVar9 + 2;
    do {
      pcVar1 = pcVar11;
      pcVar11 = pcVar11 + 1;
      bVar14 = *pcVar1 != '\0';
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0 && bVar14);
    if (bVar14) break;
LAB_1000_02af:
    if (iVar7 == 0) break;
  }
  *ppcVar9 = (char *)0x0;
  ppcVar9[1] = (char *)0x0;
  ppcRam0000006d = ppcVar8;
  pcRam0000006f = unaff_SS;
                    // WARNING: Treating indirect jump as call
  (*(code *)0x0)();
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack

void FUN_1000_01d1(undefined2 param_1)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int extraout_DX;
  int extraout_DX_00;
  uint uVar7;
  char **ppcVar8;
  char *pcVar9;
  undefined2 *puVar10;
  char *pcVar11;
  undefined2 uVar12;
  char *unaff_SS;
  bool bVar13;
  undefined uVar14;
  undefined2 in_stack_00000000;
  
                    // WARNING (jumptable): Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101c9) is written
                    // WARNING (jumptable): Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
  uRam000101cb = param_1;
                    // WARNING (jumptable): Read-only address (ram,0x000101cd) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
  uRam000101cd = 0x126b;
  pcVar9 = (char *)(DAT_126b_0075 + 2);
  uVar5 = 1;
  uVar12 = DAT_126b_007b;
  uRam000101c9 = in_stack_00000000;
  if (2 < DAT_126b_007d) {
    uVar5 = 0x7f;
    pcVar11 = pcVar9;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar1 = pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (*pcVar1 != '\0');
    if (uVar5 == 0) goto LAB_1000_0287;
    uVar5 = uVar5 ^ 0x7f;
    uVar12 = DAT_126b_0077;
  }
  puVar4 = (undefined *)(*(byte *)((int)&DAT_126b_007f + 1) + 2 + uVar5 & 0xfffe);
  pcVar11 = (char *)((int)&param_1 - (int)puVar4);
  uVar7 = uVar5;
  if (puVar4 <= &param_1) {
    while (uVar7 - 1 != 0) {
      pcVar2 = pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar1 = pcVar9;
      pcVar9 = pcVar9 + 1;
      *pcVar2 = *pcVar1;
      uVar7 = uVar7 - 1;
    }
    bVar13 = false;
    *pcVar11 = '\0';
    uVar14 = uVar7 == 0;
LAB_1000_0243:
    bVar3 = 0;
    FUN_1000_025f();
    iVar6 = extraout_DX;
    if (bVar13 || (bool)uVar14) {
      do {
        if (bVar13) {
          puVar10 = &param_1;
          iVar6 = uVar5 + iVar6;
          ppcVar8 = (char **)(&param_1 + (uVar7 + 1) * -2);
          uRam0000006b = uVar7;
          if ((undefined *)((uVar7 + 1) * 4) <= &param_1) goto LAB_1000_02af;
          goto LAB_1000_0287;
        }
        bVar3 = 0;
        FUN_1000_025f();
        iVar6 = extraout_DX_00;
      } while (!bVar13 && !(bool)uVar14);
    }
    if ((bVar3 != 0x20) && (bVar3 != 0xd)) goto code_r0x00010257;
    goto LAB_1000_025b;
  }
LAB_1000_0287:
  FUN_1000_01af();
  return;
code_r0x00010257:
  bVar13 = bVar3 < 9;
  uVar14 = bVar3 == 9;
  if ((bool)uVar14) {
LAB_1000_025b:
    bVar13 = false;
    uVar14 = true;
  }
  goto LAB_1000_0243;
  while( true ) {
    *ppcVar8 = (char *)puVar10;
    ppcVar8[1] = unaff_SS;
    ppcVar8 = ppcVar8 + 2;
    do {
      pcVar1 = (char *)puVar10;
      puVar10 = (undefined2 *)((int)puVar10 + 1);
      bVar13 = *pcVar1 != '\0';
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0 && bVar13);
    if (bVar13) break;
LAB_1000_02af:
    if (iVar6 == 0) break;
  }
  *ppcVar8 = (char *)0x0;
  ppcVar8[1] = (char *)0x0;
  ppcRam0000006d = (char **)(&param_1 + (uVar7 + 1) * -2);
  pcRam0000006f = unaff_SS;
                    // WARNING: Treating indirect jump as call
  (*(code *)0x0)();
  return;
}



int __cdecl16near FUN_1000_025f(void)

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



void __cdecl16far FUN_1000_02cf(void)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  int iVar4;
  uint in_DX;
  char **ppcVar5;
  char *pcVar6;
  
  pcVar2 = DAT_126b_0077;
  pcVar6 = (char *)0x0;
  DAT_126b_0071 = (char **)FUN_1050_000c(DAT_126b_0079);
  DAT_126b_0073 = in_DX;
  if (((uint)DAT_126b_0071 | in_DX) == 0) {
    FUN_1000_01af();
    return;
  }
  iVar4 = -1;
  ppcVar3 = DAT_126b_0071;
  do {
    ppcVar5 = ppcVar3;
    *ppcVar5 = pcVar6;
    ppcVar5[1] = pcVar2;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar1 = pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (*pcVar1 != '\0');
    ppcVar3 = ppcVar5 + 2;
    if (*pcVar6 == '\0') {
      ppcVar5[2] = (char *)0x0;
      ppcVar5[3] = (char *)0x0;
      return;
    }
  } while( true );
}



byte __cdecl16far FUN_1000_0313(void)

{
  char in_AL;
  int in_CX;
  byte in_BL;
  
  if (in_CX < 0) {
    return in_AL - (~in_BL + 1) & 0xf;
  }
  return in_AL + in_BL & 0xf;
}



uint __cdecl16far FUN_1000_036e(void)

{
  uint in_AX;
  
  return in_AX & 0xf;
}



void FUN_1000_03ba(void)

{
                    // WARNING: Could not recover jumptable at 0x000103ba. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(ulong)DAT_126b_054c)();
  return;
}



void __cdecl16far FUN_103c_0002(void)

{
  undefined2 uVar1;
  int iVar2;
  int local_6;
  undefined2 local_4;
  
  FUN_113d_000e(0x94,0x126b);
  FUN_11f1_0007(0xb1,0x126b,&local_6);
  for (iVar2 = 1; iVar2 <= local_6; iVar2 = iVar2 + 1) {
    FUN_113d_000e(0xb4,0x126b);
    FUN_11f1_0007(0xc3,0x126b,&local_4);
    uVar1 = FUN_103c_007c(local_4);
    FUN_113d_000e(0xc6,0x126b,local_4,uVar1);
  }
  FUN_104a_000a(0);
  return;
}



int __cdecl16far FUN_103c_007c(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 3) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_103c_007c(param_1 + -1);
    iVar2 = FUN_103c_007c(param_1 + -2);
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}



undefined2 __stdcall16far FUN_1046_000e(uint param_1)

{
  if ((int)param_1 < 0) {
    if (-param_1 < 0x23 || param_1 == 0xffdd) {
      DAT_126b_007f = -param_1;
      DAT_126b_00da = 0xffff;
      return 0xffff;
    }
  }
  else if (param_1 < 0x59) goto LAB_1046_0021;
  param_1 = 0x57;
LAB_1046_0021:
  DAT_126b_00da = param_1;
  DAT_126b_007f = (int)*(char *)(param_1 + 0xdc);
  return 0xffff;
}



void __cdecl16far FUN_1046_0049(void)

{
  return;
}



void __cdecl16far FUN_104a_000a(undefined2 param_1)

{
  int iVar1;
  code **ppcVar2;
  
  while (iVar1 = DAT_126b_0144 + -1, DAT_126b_0144 != 0) {
    ppcVar2 = (code **)(iVar1 * 4 + 0x554);
    DAT_126b_0144 = iVar1;
    (**ppcVar2)(0x104a);
  }
  DAT_126b_0144 = iVar1;
  (*DAT_126b_0136)(0x104a);
  (*DAT_126b_013a)(0x104a);
  (*DAT_126b_013e)(0x104a);
  FUN_1000_010d(0x104a,param_1);
  return;
}



bool __cdecl16far FUN_104a_003d(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = DAT_126b_0144 != 0x20;
  if (bVar2) {
    iVar1 = DAT_126b_0144 * 4;
    *(undefined2 *)(iVar1 + 0x556) = param_2;
    *(undefined2 *)(iVar1 + 0x554) = param_1;
    DAT_126b_0144 = DAT_126b_0144 + 1;
  }
  return !bVar2;
}



void __cdecl16far FUN_1050_000c(undefined2 param_1)

{
  FUN_1050_020d(param_1,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl16far FUN_1050_0021(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  bool bVar6;
  
  bVar6 = &stack0x0000 == (undefined *)((int)s_Turbo_C___Copyright__c__1988_Bor_126b_0004 + 2);
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  _DAT_126b_0150 = *(undefined2 *)(iVar4 + 0xe);
  DAT_126b_014e = *(int *)(iVar4 + 0xc);
  FUN_1000_036e();
  uVar3 = _DAT_126b_0150;
  iVar2 = DAT_126b_014e;
  if (bVar6) {
    DAT_126b_014e = 0;
    _DAT_126b_0150 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(iVar4 + 8);
    iVar4 = (int)uVar1;
    uVar5 = (undefined2)((ulong)uVar1 >> 0x10);
    *(undefined2 *)(DAT_126b_014e + 10) = uVar5;
    *(int *)(iVar2 + 8) = iVar4;
    iVar2 = DAT_126b_014e;
    *(undefined2 *)(iVar4 + 0xe) = _DAT_126b_0150;
    *(int *)(iVar4 + 0xc) = iVar2;
  }
  return;
}



int __cdecl16far FUN_1050_0089(uint *param_1,uint param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  bool bVar7;
  int *local_6;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = *param_1;
  *param_1 = *param_1 - param_2;
  piVar1 = (int *)((int)param_1 + 2);
  *piVar1 = (*piVar1 - param_3) - (uint)(uVar2 < param_2);
  uVar5 = uVar6;
  iVar3 = FUN_1000_0313();
  local_6 = (int *)CONCAT22(uVar5,iVar3);
  param_3 = param_3 + (uint)(0xfffe < param_2);
  bVar7 = param_3 == 0;
  *(int *)(iVar3 + 2) = param_3;
  *local_6 = param_2 + 1;
  *(undefined2 *)(iVar3 + 6) = uVar6;
  *(int *)(iVar3 + 4) = (int)param_1;
  FUN_1000_036e();
  iVar4 = iVar3;
  if (!bVar7) {
    uVar6 = uVar5;
    iVar4 = FUN_1000_0313();
    *(undefined2 *)(iVar4 + 6) = uVar5;
    *(int *)(iVar4 + 4) = iVar3;
    iVar4 = DAT_126b_014a;
    uVar5 = DAT_126b_014c;
  }
  DAT_126b_014c = uVar5;
  DAT_126b_014a = iVar4;
  return iVar3 + 8;
}



int __cdecl16far FUN_1050_0139(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_DX;
  int *local_6;
  
  iVar1 = FUN_1081_00e3(param_1,param_2);
  local_6 = (int *)CONCAT22(in_DX,iVar1);
  if ((in_DX == -1) && (iVar1 == -1)) {
    iVar2 = 0;
  }
  else {
    *(int *)(iVar1 + 6) = DAT_126b_014c;
    *(int *)(iVar1 + 4) = DAT_126b_014a;
    *(int *)(iVar1 + 2) = param_2 + (uint)(0xfffe < param_1);
    *local_6 = param_1 + 1;
    iVar2 = iVar1 + 8;
    DAT_126b_014a = iVar1;
    DAT_126b_014c = in_DX;
  }
  return iVar2;
}



int __cdecl16far FUN_1050_01a7(uint param_1,int param_2)

{
  int iVar1;
  int in_DX;
  int *local_6;
  
  iVar1 = FUN_1081_00e3(param_1,param_2);
  local_6 = (int *)CONCAT22(in_DX,iVar1);
  if ((in_DX == -1) && (iVar1 == -1)) {
    iVar1 = 0;
  }
  else {
    DAT_126b_0146 = iVar1;
    DAT_126b_0148 = in_DX;
    DAT_126b_014a = iVar1;
    DAT_126b_014c = in_DX;
    *(int *)(iVar1 + 2) = param_2 + (uint)(0xfffe < param_1);
    *local_6 = param_1 + 1;
    iVar1 = iVar1 + 8;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl16far FUN_1050_020d(uint param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  bool bVar7;
  undefined uVar8;
  uint *local_6;
  
  if ((param_1 | param_2) == 0) {
    iVar3 = 0;
  }
  else {
    param_2 = param_2 + (0xffe8 < param_1);
    uVar4 = param_1 + 0x17 & 0xfff0;
    bVar7 = true;
    FUN_1000_036e();
    if (bVar7) {
      iVar3 = FUN_1050_01a7(uVar4,param_2);
    }
    else {
      local_6 = (uint *)CONCAT22(_DAT_126b_0150,DAT_126b_014e);
      uVar8 = 1;
      FUN_1000_036e();
      while (!(bool)uVar8) {
        uVar6 = (undefined2)((ulong)local_6 >> 0x10);
        iVar3 = (int)local_6;
        uVar2 = *(uint *)(iVar3 + 2);
        uVar5 = param_2 + (0xffcf < uVar4);
        if ((uVar5 <= uVar2) && ((uVar2 != uVar5 || (uVar4 + 0x30 <= *local_6)))) {
          iVar3 = FUN_1050_0089(iVar3,uVar6,uVar4,param_2);
          return iVar3;
        }
        uVar2 = *(uint *)(iVar3 + 2);
        uVar8 = uVar2 == param_2;
        if ((param_2 <= uVar2) && ((!(bool)uVar8 || (uVar8 = *local_6 == uVar4, uVar4 <= *local_6)))
           ) {
          FUN_1050_0021(iVar3,uVar6);
          uVar4 = *local_6;
          *local_6 = *local_6 + 1;
          piVar1 = (int *)(iVar3 + 2);
          *piVar1 = *piVar1 + (uint)(0xfffe < uVar4);
          return iVar3 + 8;
        }
        local_6 = *(uint **)(iVar3 + 0xc);
        FUN_1000_036e();
      }
      iVar3 = FUN_1050_0139(uVar4,param_2);
    }
  }
  return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 FUN_1081_000c(undefined4 param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  
  uVar1 = (param_1._2_2_ - DAT_126b_007b) + 0x40;
  if (uVar1 >> 6 == DAT_126b_0152) {
    uVar2 = 1;
    DAT_126b_008b = (int)param_1;
    _DAT_126b_008d = param_1._2_2_;
  }
  else {
    uVar1 = uVar1 & 0xffc0;
    if (DAT_126b_0091 < uVar1 + DAT_126b_007b) {
      uVar1 = DAT_126b_0091 - DAT_126b_007b;
    }
    iVar3 = FUN_1098_0004(DAT_126b_007b,uVar1);
    if (iVar3 == -1) {
      DAT_126b_0152 = uVar1 >> 6;
      _DAT_126b_008d = param_1._2_2_;
      uVar2 = 1;
      DAT_126b_008b = (int)param_1;
    }
    else {
      DAT_126b_0091 = DAT_126b_007b + iVar3;
      DAT_126b_008f = 0;
      uVar2 = 0;
    }
  }
  return uVar2;
}



undefined2 __cdecl16far FUN_1081_009c(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined in_CF;
  undefined in_ZF;
  
  FUN_1000_036e();
  if (((!(bool)in_CF) && (FUN_1000_036e(), (bool)in_CF || (bool)in_ZF)) &&
     (iVar1 = FUN_1081_000c(param_1,param_2), iVar1 != 0)) {
    return 0;
  }
  return 0xffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __cdecl16far FUN_1081_00e3(int param_1,uint param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined uVar5;
  undefined uVar6;
  
  uVar5 = param_2 < 0x10;
  uVar6 = param_2 == 0x10;
  if ((int)param_2 < 0x10) {
LAB_1081_00ff:
    uVar4 = _DAT_126b_008d;
    uVar2 = FUN_1000_0313();
    FUN_1000_036e(uVar2,uVar4);
    if (((bool)uVar5) || (FUN_1000_036e(), !(bool)uVar5 && !(bool)uVar6)) {
      uVar1 = 0xffff;
    }
    else {
      uVar1 = (undefined2)_DAT_126b_008b;
      iVar3 = FUN_1081_000c(uVar2,uVar4);
      if (iVar3 == 0) {
        uVar1 = 0xffff;
      }
    }
  }
  else {
    if ((int)param_2 < 0x11) {
      uVar5 = false;
      uVar6 = param_1 == 0;
      if ((bool)uVar6) goto LAB_1081_00ff;
    }
    uVar1 = 0xffff;
  }
  return uVar1;
}



undefined2 __cdecl16far FUN_1098_0004(undefined2 param_1,undefined2 param_2)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if ((bool)in_CF) {
    FUN_1046_000e(uVar2);
  }
  else {
    param_2 = 0xffff;
  }
  return param_2;
}



int FUN_109a_0004(int *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 local_6;
  
  iVar4 = *param_1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  if ((*(uint *)((int)param_1 + 2) & 0x40) == 0) {
    local_6 = *(char **)((int)param_1 + 0xc);
    iVar2 = iVar4;
    while (pcVar1 = local_6, iVar3 = iVar2 + -1, iVar2 != 0) {
      local_6 = (char *)CONCAT22(local_6._2_2_,(int)local_6 + 1);
      iVar2 = iVar3;
      if (*pcVar1 == '\n') {
        iVar4 = iVar4 + 1;
      }
    }
  }
  return iVar4;
}



undefined2 __cdecl16far FUN_109a_0052(int *param_1,uint param_3,int param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar2 = FUN_112f_0006((int)param_1,param_1._2_2_);
  if (iVar2 == 0) {
    if ((param_5 == 1) && (0 < *param_1)) {
      uVar4 = FUN_109a_0004((int)param_1,param_1._2_2_);
      bVar6 = param_3 < uVar4;
      param_3 = param_3 - uVar4;
      param_4 = (param_4 - ((int)uVar4 >> 0xf)) - (uint)bVar6;
    }
    puVar1 = (uint *)((int)param_1 + 2);
    *puVar1 = *puVar1 & 0xfe5f;
    *param_1 = 0;
    iVar2 = *(int *)((int)param_1 + 10);
    uVar3 = *(undefined2 *)((int)param_1 + 8);
    *(int *)((int)param_1 + 0xe) = iVar2;
    *(undefined2 *)((int)param_1 + 0xc) = uVar3;
    iVar5 = FUN_1115_000d((int)*(char *)((int)param_1 + 4),param_3,param_4,param_5);
    if ((iVar2 == -1) && (iVar5 == -1)) {
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



int __cdecl16far FUN_109a_00e0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_112f_0006((int)param_1,param_1._2_2_);
  if (iVar1 == 0) {
    iVar1 = FUN_1262_0005((int)*(char *)((int)param_1 + 4));
    if (0 < *param_1) {
      iVar2 = FUN_109a_0004((int)param_1,param_1._2_2_);
      iVar1 = iVar1 - iVar2;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



void __cdecl16near FUN_10ae_0007(void)

{
  int iVar1;
  int local_6;
  
  local_6 = 0x256;
  iVar1 = 0x14;
  while (iVar1 != 0) {
    if ((*(uint *)(local_6 + 2) & 0x300) == 0x300) {
      FUN_112f_0006(local_6,0x126b);
    }
    local_6 = local_6 + 0x14;
    iVar1 = iVar1 + -1;
  }
  return;
}



undefined2 FUN_10ae_0047(int *param_1)

{
  uint *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  if ((*(uint *)(iVar6 + 2) & 0x200) != 0) {
    FUN_10ae_0007();
  }
  uVar2 = *(undefined2 *)(iVar6 + 6);
  uVar3 = *(undefined2 *)(iVar6 + 10);
  uVar4 = *(undefined2 *)(iVar6 + 8);
  *(undefined2 *)(iVar6 + 0xe) = uVar3;
  *(undefined2 *)(iVar6 + 0xc) = uVar4;
  iVar5 = FUN_10ec_0006((int)*(char *)(iVar6 + 4),uVar4,uVar3,uVar2);
  *param_1 = iVar5;
  if (iVar5 < 1) {
    if (*param_1 == 0) {
      *(uint *)(iVar6 + 2) = *(uint *)(iVar6 + 2) & 0xfe7f | 0x20;
    }
    else {
      *param_1 = 0;
      puVar1 = (uint *)(iVar6 + 2);
      *puVar1 = *puVar1 | 0x10;
    }
    uVar7 = 0xffff;
  }
  else {
    puVar1 = (uint *)(iVar6 + 2);
    *puVar1 = *puVar1 & 0xffdf;
    uVar7 = 0;
  }
  return uVar7;
}



void __cdecl16far FUN_10ae_00d9(int *param_1)

{
  *param_1 = *param_1 + 1;
  FUN_10ae_00f3(param_1._0_2_,param_1._2_2_);
  return;
}



uint __cdecl16far FUN_10ae_00f3(int *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  byte local_3;
  
  while( true ) {
    iVar4 = *param_1;
    *param_1 = *param_1 + -1;
    iVar5 = (int)param_1;
    uVar6 = (undefined2)((ulong)param_1 >> 0x10);
    if (SBORROW2(iVar4,1) == *param_1 < 0) {
      piVar1 = (int *)(iVar5 + 0xc);
      *piVar1 = *piVar1 + 1;
      uVar3 = *(undefined4 *)(iVar5 + 0xc);
      return (uint)*(byte *)((int)uVar3 + -1);
    }
    iVar4 = *param_1;
    *param_1 = *param_1 + 1;
    if ((SCARRY2(iVar4,1) != *param_1 < 0) || ((*(uint *)(iVar5 + 2) & 0x110) != 0)) break;
    while (puVar2 = (uint *)(iVar5 + 2), *puVar2 = *puVar2 | 0x80, *(int *)(iVar5 + 6) == 0) {
      if ((DAT_126b_040e != 0) || (iVar5 != 0x256)) {
        while( true ) {
          if ((*(uint *)(iVar5 + 2) & 0x200) != 0) {
            FUN_10ae_0007();
          }
          iVar4 = FUN_10f8_000b((int)*(char *)(iVar5 + 4),&local_3);
          if (iVar4 != 1) break;
          if ((local_3 != 0xd) || ((*(uint *)(iVar5 + 2) & 0x40) != 0)) {
            puVar2 = (uint *)(iVar5 + 2);
            *puVar2 = *puVar2 & 0xffdf;
            return (uint)local_3;
          }
        }
        iVar4 = FUN_1128_0006((int)*(char *)(iVar5 + 4));
        if (iVar4 == 1) {
          *(uint *)(iVar5 + 2) = *(uint *)(iVar5 + 2) & 0xfe7f | 0x20;
        }
        else {
          puVar2 = (uint *)(iVar5 + 2);
          *puVar2 = *puVar2 | 0x10;
        }
        return 0xffff;
      }
      iVar4 = FUN_10d3_0008((int)*(char *)0x25a);
      if (iVar4 == 0) {
        puVar2 = (uint *)0x258;
        *puVar2 = *puVar2 & 0xfdff;
      }
      FUN_10d4_000a(0x256,uVar6,0,0,(*(uint *)0x258 & 0x200) != 0,0x200);
    }
    iVar4 = FUN_10ae_0047(iVar5,uVar6);
    if (iVar4 != 0) {
      return 0xffff;
    }
  }
  puVar2 = (uint *)(iVar5 + 2);
  *puVar2 = *puVar2 | 0x10;
  return 0xffff;
}



uint __cdecl16far FUN_10d3_0008(void)

{
  code *pcVar1;
  uint extraout_DX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return extraout_DX & 0x80;
}



undefined2 __cdecl16far
FUN_10d4_000a(int *param_1,uint param_2_00,uint param_3_00,int param_2,uint param_3)

{
  uint *puVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (((*(int *)(iVar3 + 0x12) == iVar3) && (param_2 < 3)) && (param_3 < 0x8000)) {
    if ((DAT_126b_0410 == 0) && (iVar3 == 0x26a)) {
      DAT_126b_0410 = 1;
    }
    else if ((DAT_126b_040e == 0) && (iVar3 == 0x256)) {
      DAT_126b_040e = 1;
    }
    if (*param_1 != 0) {
      FUN_109a_0052(iVar3,uVar4,0,0,1);
    }
    if ((*(uint *)(iVar3 + 2) & 4) != 0) {
      FUN_11bf_0000(*(undefined2 *)(iVar3 + 8),*(undefined2 *)(iVar3 + 10));
    }
    puVar1 = (uint *)(iVar3 + 2);
    *puVar1 = *puVar1 & 0xfff3;
    *(undefined2 *)(iVar3 + 6) = 0;
    *(uint *)(iVar3 + 10) = uVar4;
    *(int *)(iVar3 + 8) = iVar3 + 5;
    *(uint *)(iVar3 + 0xe) = uVar4;
    *(int *)(iVar3 + 0xc) = iVar3 + 5;
    if ((param_2 != 2) && (param_3 != 0)) {
      DAT_126b_0138 = 0x10e8;
      DAT_126b_0136 = 0xc;
      if ((param_2_00 | param_3_00) == 0) {
        param_3_00 = uVar4;
        param_2_00 = FUN_1050_000c(param_3);
        if ((param_3_00 | param_2_00) == 0) {
          return 0xffff;
        }
        puVar1 = (uint *)(iVar3 + 2);
        *puVar1 = *puVar1 | 4;
      }
      *(uint *)(iVar3 + 0xe) = param_3_00;
      *(uint *)(iVar3 + 0xc) = param_2_00;
      *(uint *)(iVar3 + 10) = param_3_00;
      *(uint *)(iVar3 + 8) = param_2_00;
      *(uint *)(iVar3 + 6) = param_3;
      if (param_2 == 1) {
        puVar1 = (uint *)(iVar3 + 2);
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



int __cdecl16far FUN_10ec_0006(int param_1,undefined4 param_2,int param_4)

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
  
  if ((param_4 + 1U < 2) || ((*(uint *)(param_1 * 2 + 0x3e6) & 0x200) != 0)) {
    iVar4 = 0;
  }
  else {
    do {
      iVar4 = FUN_10f8_000b(param_1,(char *)param_2,param_2._2_2_,param_4);
      if (iVar4 + 1U < 2) {
        return iVar4;
      }
      pcVar6 = (char *)param_2;
      pcVar3 = (char *)param_2;
      if ((*(uint *)(param_1 * 2 + 0x3e6) & 0x8000) != 0) {
        return iVar4;
      }
      do {
        while( true ) {
          pcVar7 = pcVar3;
          cVar2 = *pcVar6;
          pcVar5 = (char *)param_2;
          if (cVar2 == '\x1a') {
            FUN_1115_000d(param_1,-iVar4,-(uint)(iVar4 != 0),2);
            puVar1 = (uint *)(param_1 * 2 + 0x3e6);
            *puVar1 = *puVar1 | 0x200;
            goto LAB_10ec_00bf;
          }
          if (cVar2 == '\r') break;
          *pcVar7 = cVar2;
          iVar4 = iVar4 + -1;
          pcVar6 = pcVar6 + 1;
          pcVar3 = pcVar7 + 1;
          if (iVar4 == 0) goto LAB_10ec_0095;
        }
        iVar4 = iVar4 + -1;
        pcVar6 = pcVar6 + 1;
        pcVar3 = pcVar7;
      } while (iVar4 != 0);
      uVar8 = param_2._2_2_;
      FUN_10f8_000b(param_1,&local_3);
      *pcVar7 = local_3;
LAB_10ec_0095:
      pcVar7 = pcVar7 + 1;
    } while (pcVar7 == pcVar5);
LAB_10ec_00bf:
    iVar4 = (int)pcVar7 - (int)pcVar5;
  }
  return iVar4;
}



void __cdecl16far FUN_10f8_000b(void)

{
  code *pcVar1;
  undefined in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    FUN_1046_000e();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00011095)
// WARNING: Removing unreachable block (ram,0x000110f8)

int __cdecl16far FUN_10fa_000b(int param_1,char *param_2,int param_4)

{
  undefined *puVar1;
  uint *puVar2;
  undefined *puVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  undefined2 unaff_SS;
  int local_90;
  undefined2 uVar7;
  int local_8c;
  undefined4 local_88;
  undefined local_84 [130];
  
  if (param_4 + 1U < 2) {
    param_4 = 0;
  }
  else if ((*(uint *)(param_1 * 2 + 0x3e6) & 0x8000) == 0) {
    puVar2 = (uint *)(param_1 * 2 + 0x3e6);
    *puVar2 = *puVar2 & 0xfdff;
    local_88 = param_2;
    local_8c = param_4;
    _local_90 = (char *)CONCAT22(unaff_SS,local_84);
    while (pcVar5 = local_88, local_8c != 0) {
      local_8c = local_8c + -1;
      local_88 = (char *)CONCAT22(local_88._2_2_,(int)local_88 + 1);
      cVar4 = *pcVar5;
      if (cVar4 == '\n') {
        *_local_90 = '\r';
        uVar7 = (undefined2)((ulong)_local_90 >> 0x10);
        _local_90 = (char *)CONCAT22(uVar7,local_90 + 1);
      }
      *_local_90 = cVar4;
      puVar3 = (undefined *)(local_90 + 1);
      uVar7 = (undefined2)((ulong)_local_90 >> 0x10);
      _local_90 = (char *)CONCAT22(uVar7,puVar3);
      puVar1 = local_84;
      if ((puVar3 >= puVar1) && ((puVar3 < puVar1 || (0x7f < (uint)((int)puVar3 - (int)puVar1))))) {
        iVar6 = FUN_1111_0001(param_1,local_84);
        if (iVar6 != (int)puVar3 - (int)local_84) {
          return ((param_4 - local_8c) + iVar6) - ((int)puVar3 - (int)local_84);
        }
        _local_90 = (char *)CONCAT22(unaff_SS,local_84);
      }
    }
    local_90 = local_90 - (int)local_84;
    if ((local_90 != 0) && (iVar6 = FUN_1111_0001(param_1,local_84), iVar6 != local_90)) {
      param_4 = (param_4 + iVar6) - local_90;
    }
  }
  else {
    param_4 = FUN_1111_0001(param_1,param_2._0_2_,param_2._2_2_,param_4);
  }
  return param_4;
}



undefined2 __cdecl16far FUN_1111_0001(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined uVar4;
  undefined2 in_stack_00000000;
  
  uVar4 = 0;
  if ((*(uint *)(param_1 * 2 + 0x3e6) & 0x800) != 0) {
    uVar4 = 0;
    FUN_1115_000d(param_1,0,0,2);
  }
  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  if ((bool)uVar4) {
    uVar3 = FUN_1046_000e();
  }
  else {
    puVar1 = (uint *)(param_1 * 2 + 0x3e6);
    *puVar1 = *puVar1 | 0x1000;
  }
  return uVar3;
}



void __cdecl16far FUN_1115_000d(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  
  puVar1 = (uint *)(param_1 * 2 + 0x3e6);
  bVar3 = false;
  *puVar1 = *puVar1 & 0xfdff;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (bVar3) {
    FUN_1046_000e();
  }
  return;
}



undefined * __stdcall16far
FUN_1118_000a(char param_1,char param_2,uint param_3,undefined *param_4,uint param_5,uint param_6)

{
  char *pcVar1;
  byte bVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  bool bVar9;
  byte local_24 [34];
  
  uVar8 = (undefined2)((ulong)param_4 >> 0x10);
  pcVar7 = (char *)param_4;
  if ((param_3 < 0x25) && (1 < (byte)param_3)) {
    if (((int)param_6 < 0) && (param_2 != '\0')) {
      *param_4 = 0x2d;
      pcVar7 = pcVar7 + 1;
      bVar9 = param_5 != 0;
      param_5 = -param_5;
      param_6 = -(uint)bVar9 - param_6;
    }
    pbVar6 = local_24;
    if (param_6 == 0) goto LAB_1118_0054;
    do {
      uVar3 = (ulong)param_6;
      param_6 = param_6 / param_3;
      uVar3 = uVar3 % (ulong)param_3 << 0x10 | (ulong)param_5;
      param_5 = (uint)(uVar3 / param_3);
      *pbVar6 = (byte)(uVar3 % (ulong)param_3);
      pbVar6 = pbVar6 + 1;
    } while (param_6 != 0);
    while (param_5 != 0) {
LAB_1118_0054:
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



void __cdecl16far FUN_1118_008e(int param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  
  if (param_4 == 10) {
    iVar1 = param_1 >> 0xf;
  }
  else {
    iVar1 = 0;
  }
  FUN_1118_000a(0x61,1,param_4,param_2,param_3,param_1,iVar1);
  return;
}



void __cdecl16far
FUN_1118_00bb(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  uint in_AX;
  
  FUN_1118_000a(0x61,in_AX & 0xff00,param_5,param_3,param_4,param_1,param_2);
  return;
}



void __cdecl16far
FUN_1118_00db(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             int param_5)

{
  FUN_1118_000a(0x61,param_5 == 10,param_5,param_3,param_4,param_1,param_2);
  return;
}



// WARNING: Removing unreachable block (ram,0x000112dc)

undefined2 __cdecl16far FUN_1128_0006(int param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  bool bVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined2 uVar7;
  
  bVar3 = false;
  if ((*(uint *)(param_1 * 2 + 0x3e6) & 0x200) != 0) {
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
  uVar2 = FUN_1046_000e(uVar2);
  return uVar2;
}



undefined2 __cdecl16far FUN_112f_0006(int *param_1)

{
  uint *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (int)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  if (*(int *)(iVar5 + 0x12) != iVar5) {
    return 0xffff;
  }
  if (*param_1 < 0) {
    iVar6 = *(int *)(iVar5 + 6) + *param_1 + 1;
    *param_1 = *param_1 - iVar6;
    uVar2 = *(undefined2 *)(iVar5 + 10);
    uVar3 = *(undefined2 *)(iVar5 + 8);
    *(undefined2 *)(iVar5 + 0xe) = uVar2;
    *(undefined2 *)(iVar5 + 0xc) = uVar3;
    iVar4 = FUN_10fa_000b((int)*(char *)(iVar5 + 4),uVar3,uVar2,iVar6);
    if ((iVar4 != iVar6) && ((*(uint *)(iVar5 + 2) & 0x200) == 0)) {
      puVar1 = (uint *)(iVar5 + 2);
      *puVar1 = *puVar1 | 0x10;
      return 0xffff;
    }
    return 0;
  }
  if ((*(uint *)(iVar5 + 2) & 8) == 0) {
    if (*(int *)(iVar5 + 0xe) != iVar7) {
      return 0;
    }
    if (*(int *)(iVar5 + 0xc) != iVar5 + 5) {
      return 0;
    }
  }
  *param_1 = 0;
  if ((*(int *)(iVar5 + 0xe) == iVar7) && (*(int *)(iVar5 + 0xc) == iVar5 + 5)) {
    uVar2 = *(undefined2 *)(iVar5 + 8);
    *(undefined2 *)(iVar5 + 0xe) = *(undefined2 *)(iVar5 + 10);
    *(undefined2 *)(iVar5 + 0xc) = uVar2;
  }
  return 0;
}



void __cdecl16far FUN_113d_000e(void)

{
  FUN_1167_0037(0x113d,&stack0x0008);
  return;
}



void __cdecl16far FUN_1140_0002(char param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  FUN_1140_0021((int)param_1,param_2._0_2_,param_2._2_2_);
  return;
}



uint __cdecl16far FUN_1140_0021(byte param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  undefined2 uVar6;
  
  bVar4 = param_1;
  while( true ) {
    iVar5 = *param_2;
    *param_2 = *param_2 + 1;
    if (SCARRY2(iVar5,1) != *param_2 < 0) break;
    *param_2 = *param_2 + -1;
    if (((*(uint *)((int)param_2 + 2) & 0x90) != 0) || ((*(uint *)((int)param_2 + 2) & 2) == 0)) {
      puVar2 = (uint *)((int)param_2 + 2);
      *puVar2 = *puVar2 | 0x10;
      return 0xffff;
    }
    puVar2 = (uint *)((int)param_2 + 2);
    *puVar2 = *puVar2 | 0x100;
    if (*(int *)((int)param_2 + 6) == 0) {
      if ((((bVar4 == 10) && ((*(uint *)((int)param_2 + 2) & 0x40) == 0)) &&
          (iVar5 = FUN_1111_0001((int)*(char *)((int)param_2 + 4),0x444,0x126b,1), iVar5 != 1)) ||
         (iVar5 = FUN_1111_0001((int)*(char *)((int)param_2 + 4),&param_1), iVar5 != 1)) {
        uVar6 = (undefined2)((ulong)param_2 >> 0x10);
        if ((*(uint *)((int)param_2 + 2) & 0x200) == 0) {
          puVar2 = (uint *)((int)param_2 + 2);
          *puVar2 = *puVar2 | 0x10;
          return 0xffff;
        }
      }
      return (uint)bVar4;
    }
    if (*param_2 == 0) {
      *param_2 = -1 - *(int *)((int)param_2 + 6);
    }
    else {
      iVar5 = FUN_112f_0006((int)param_2,param_2._2_2_);
      if (iVar5 != 0) {
        return 0xffff;
      }
    }
  }
  piVar1 = (int *)((int)param_2 + 0xc);
  *piVar1 = *piVar1 + 1;
  uVar3 = *(undefined4 *)((int)param_2 + 0xc);
  *(byte *)((int)uVar3 + -1) = bVar4;
  if (((*(uint *)((int)param_2 + 2) & 8) != 0) &&
     (((bVar4 == 10 || (bVar4 == 0xd)) &&
      (iVar5 = FUN_112f_0006((int)param_2,param_2._2_2_), iVar5 != 0)))) {
    return 0xffff;
  }
  return (uint)bVar4;
}



void __cdecl16far FUN_1140_0168(undefined2 param_1)

{
  FUN_1140_0021(param_1,0x26a,0x126b);
  return;
}



uint __stdcall16far FUN_1140_0181(int *param_1,uint param_2,byte *param_3)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined2 uVar9;
  
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar8 = (int)param_1;
  uVar6 = param_2;
  if ((*(uint *)(iVar8 + 2) & 8) == 0) {
    if ((((*(uint *)(iVar8 + 2) & 0x40) == 0) || (*(int *)(iVar8 + 6) == 0)) ||
       (param_2 <= *(uint *)(iVar8 + 6))) {
      do {
        if (uVar6 == 0) {
          return param_2;
        }
        iVar5 = *param_1;
        *param_1 = *param_1 + 1;
        if (SCARRY2(iVar5,1) == *param_1 < 0) {
          uVar7 = FUN_1140_0002(*param_3,iVar8,uVar9);
        }
        else {
          bVar2 = *param_3;
          piVar1 = (int *)(iVar8 + 0xc);
          *piVar1 = *piVar1 + 1;
          uVar3 = *(undefined4 *)(iVar8 + 0xc);
          *(byte *)((int)uVar3 + -1) = bVar2;
          uVar7 = (uint)bVar2;
        }
        param_3 = (byte *)CONCAT22(param_3._2_2_,(int)param_3 + 1);
        uVar6 = uVar6 - 1;
      } while (uVar7 != 0xffff);
      param_2 = 0;
    }
    else if ((*param_1 == 0) || (iVar5 = FUN_112f_0006(iVar8,uVar9), iVar5 == 0)) {
      uVar6 = FUN_1111_0001((int)*(char *)(iVar8 + 4),(int)param_3,param_3._2_2_,param_2);
      if (uVar6 < param_2) {
        param_2 = 0;
      }
    }
    else {
      param_2 = 0;
    }
  }
  else {
    do {
      pbVar4 = param_3;
      if (uVar6 == 0) {
        return param_2;
      }
      param_3 = (byte *)CONCAT22(param_3._2_2_,(int)param_3 + 1);
      iVar5 = FUN_1140_0021((int)(char)*pbVar4,iVar8,uVar9);
      uVar6 = uVar6 - 1;
    } while (iVar5 != -1);
    param_2 = 0;
  }
  return param_2;
}



void FUN_1167_000c(undefined2 param_1)

{
  byte bVar1;
  undefined *unaff_DI;
  undefined2 unaff_ES;
  
  bVar1 = (byte)((uint)param_1 >> 8);
  *unaff_DI = *(undefined *)(ulong)((bVar1 >> 4) + 0x44d);
  unaff_DI[1] = *(undefined *)(ulong)((bVar1 & 0xf) + 0x44d);
  unaff_DI[2] = *(undefined *)(ulong)((byte)((byte)param_1 >> 4) + 0x44d);
  unaff_DI[3] = *(undefined *)(ulong)(((byte)param_1 & 0xf) + 0x44d);
  return;
}



void FUN_1167_0037(void)

{
  FUN_1167_0096();
  return;
}



void __cdecl16near FUN_1167_005d(void)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  code **ppcVar4;
  undefined in_AL;
  int iVar5;
  int unaff_BP;
  undefined *unaff_DI;
  undefined2 unaff_SS;
  
  *unaff_DI = in_AL;
  pcVar1 = (char *)(unaff_BP + -0x55);
  cVar3 = *pcVar1;
  *pcVar1 = *pcVar1 + -1;
  if (*pcVar1 != '\0' && SBORROW1(cVar3,'\x01') == *pcVar1 < '\0') {
    ppcVar4 = (code **)(unaff_BP + 0x12);
    iVar5 = (**ppcVar4)(0x1167,*(undefined2 *)(unaff_BP + 0xe),*(undefined2 *)(unaff_BP + 0x10),
                        unaff_DI + (1 - (unaff_BP + -0x54)),unaff_BP + -0x54);
    if (iVar5 == 0) {
      *(undefined2 *)(unaff_BP + -2) = 1;
    }
    *(undefined *)(unaff_BP + -0x55) = 0x50;
    piVar2 = (int *)(unaff_BP + -0x58);
    *piVar2 = (int)(unaff_DI + (1 - (unaff_BP + -0x54)) + *piVar2);
  }
  return;
}



void __cdecl16near FUN_1167_0066(void)

{
  int *piVar1;
  code **ppcVar2;
  int iVar3;
  int unaff_BP;
  int unaff_DI;
  int iVar4;
  undefined2 unaff_SS;
  
  iVar4 = unaff_DI - (unaff_BP + -0x54);
  ppcVar2 = (code **)(unaff_BP + 0x12);
  iVar3 = (**ppcVar2)(0x1167,*(undefined2 *)(unaff_BP + 0xe),*(undefined2 *)(unaff_BP + 0x10),iVar4,
                      unaff_BP + -0x54);
  if (iVar3 == 0) {
    *(undefined2 *)(unaff_BP + -2) = 1;
  }
  *(undefined *)(unaff_BP + -0x55) = 0x50;
  piVar1 = (int *)(unaff_BP + -0x58);
  *piVar1 = *piVar1 + iVar4;
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0001104b) overlaps instruction at (ram,0x0001104a)
// 
// WARNING: Unable to track spacebase fully for stack
// WARNING: Removing unreachable block (ram,0x00011040)
// WARNING: Removing unreachable block (ram,0x000110f8)
// WARNING: Removing unreachable block (ram,0x0001104b)
// WARNING: Removing unreachable block (ram,0x00011051)
// WARNING: Removing unreachable block (ram,0x00011095)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint __stdcall16far FUN_1167_0096(void)

{
  char *pcVar1;
  int *piVar2;
  byte *pbVar3;
  undefined *puVar4;
  char *pcVar5;
  byte bVar6;
  code *pcVar7;
  code **ppcVar8;
  code *pcVar9;
  uint *puVar10;
  char **ppcVar11;
  char cVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  undefined2 uVar16;
  int iVar17;
  int iVar18;
  undefined2 uVar19;
  byte bVar20;
  char *extraout_DX;
  undefined2 extraout_DX_00;
  int extraout_DX_01;
  int extraout_DX_02;
  int extraout_DX_03;
  int extraout_DX_04;
  int *piVar21;
  int iVar22;
  undefined *puVar23;
  int *piVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined2 *puVar28;
  char **ppcVar29;
  uint unaff_BP;
  byte *pbVar30;
  char *pcVar31;
  byte *pbVar32;
  int *piVar33;
  char *pcVar34;
  char *pcVar35;
  int *piVar36;
  undefined2 uVar37;
  int unaff_SS;
  bool bVar38;
  undefined uVar39;
  ulong uVar40;
  undefined4 uVar41;
  int in_stack_00000000;
  
  uVar16 = 0x126b;
  *(int *)(unaff_BP - 0x96) = unaff_BP - 0x54;
  piVar36 = *(int **)(unaff_BP - 0x96);
  uVar41 = *(undefined4 *)(unaff_BP + 10);
  uVar37 = (undefined2)((ulong)uVar41 >> 0x10);
  pbVar32 = (byte *)uVar41;
LAB_1167_00a6:
  pbVar30 = pbVar32 + 1;
  bVar20 = *pbVar32;
  if (bVar20 == 0) goto LAB_1167_055c;
  if (bVar20 == 0x25) {
    *(byte **)(unaff_BP - 0x8a) = pbVar30;
    pbVar3 = pbVar30;
    pbVar30 = pbVar32 + 2;
    bVar20 = *pbVar3;
    if (bVar20 != 0x25) {
      *(int **)(unaff_BP - 0x96) = piVar36;
      *(undefined2 *)(unaff_BP - 0x8c) = 0;
      *(undefined2 *)(unaff_BP - 0x98) = 0x20;
      *(undefined *)(unaff_BP - 0x8d) = 0;
      *(undefined2 *)(unaff_BP - 0x92) = 0xffff;
      *(undefined2 *)(unaff_BP - 0x90) = 0xffff;
      pcVar14 = (char *)(uint)bVar20;
      if ((byte)(bVar20 - 0x20) < 0x60) {
        bVar6 = *(byte *)((byte)(bVar20 - 0x20) + 0x45d);
        uVar15 = (uint)bVar6;
        if (uVar15 < 0x18) {
          iVar22 = uVar15 * 2;
          switch(uVar15) {
          case 0:
            iRam00012877 = *(int *)(pbVar30 + unaff_BP) * 0x2e;
            goto switchD_1000_201e_caseD_13;
          case 1:
            *(uint *)(iVar22 + 0xc) = uVar15;
            if ((piVar36 != (int *)&DAT_126b_0002) && (pbVar30 != (byte *)0x0)) {
              DAT_126b_0138 = 0x10e8;
              DAT_126b_0136 = 0xc;
              if ((*(uint *)(unaff_BP + 10) | *(uint *)(unaff_BP + 0xc)) == 0) {
                uVar15 = FUN_1050_000c(pbVar30,0x1000);
                *(char **)(unaff_BP + 0xc) = pcVar14;
                *(uint *)(unaff_BP + 10) = uVar15;
                if (((uint)pcVar14 | uVar15) == 0) {
                  return 0xffff;
                }
                uVar41 = *(undefined4 *)(unaff_BP + 6);
                puVar10 = (uint *)((int)uVar41 + 2);
                *puVar10 = *puVar10 | 4;
              }
              uVar37 = *(undefined2 *)(unaff_BP + 0xc);
              uVar16 = *(undefined2 *)(unaff_BP + 10);
              uVar41 = *(undefined4 *)(unaff_BP + 6);
              uVar19 = (undefined2)((ulong)uVar41 >> 0x10);
              iVar22 = (int)uVar41;
              *(undefined2 *)(iVar22 + 0xe) = uVar37;
              *(undefined2 *)(iVar22 + 0xc) = uVar16;
              uVar41 = *(undefined4 *)(unaff_BP + 6);
              uVar19 = (undefined2)((ulong)uVar41 >> 0x10);
              iVar22 = (int)uVar41;
              *(undefined2 *)(iVar22 + 10) = uVar37;
              *(undefined2 *)(iVar22 + 8) = uVar16;
              uVar41 = *(undefined4 *)(unaff_BP + 6);
              *(byte **)((int)uVar41 + 6) = pbVar30;
              if (piVar36 == (int *)0x1) {
                uVar41 = *(undefined4 *)(unaff_BP + 6);
                puVar10 = (uint *)((int)uVar41 + 2);
                *puVar10 = *puVar10 | 8;
              }
            }
            return 0;
          case 2:
            if (uVar15 == 0) {
              pcVar1 = (char *)(unaff_BP + 0x57);
              *pcVar1 = *pcVar1 + bVar20;
              *(undefined2 *)(unaff_BP - 0x58) = 0;
              *(undefined *)(unaff_BP - 0x55) = 0x50;
              *(undefined2 *)(unaff_BP - 2) = 0;
              uVar15 = FUN_1167_0096();
              return uVar15;
            }
            return uVar15;
          case 3:
            out(*pbVar30,pcVar14);
            puVar10 = (uint *)(pbVar32 + iVar22 + 3);
            uVar13 = *puVar10;
            piVar2 = piVar36 + 7;
            *(byte *)piVar2 = *(byte *)piVar2 + CARRY2(uVar15,*puVar10);
            _DAT_126b_0150 = 0;
            DAT_126b_014e = 0;
            return uVar15 + uVar13;
          case 4:
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          case 5:
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          case 6:
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          case 7:
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          case 8:
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          case 9:
            uVar40 = (ulong)CONCAT12(bVar20,(uint)(byte)(bVar6 + pbVar30[iVar22]));
            goto code_r0x00010010;
          case 10:
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          case 0xb:
            goto code_r0x00010032;
          case 0xc:
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          case 0xd:
            in(pcVar14);
            piVar2 = *(int **)(unaff_BP + 6);
            iVar22 = *piVar2;
            *piVar2 = *piVar2 + -1;
            piVar2 = (int *)((int)piVar2 + 2);
            *piVar2 = *piVar2 - (uint)(iVar22 == 0);
            uVar37 = *(undefined2 *)(unaff_BP + 8);
            uVar16 = FUN_1000_0313();
            *(undefined2 *)(unaff_BP - 6) = uVar37;
            *(undefined2 *)(unaff_BP - 8) = uVar16;
            uVar41 = *(undefined4 *)(unaff_BP + 6);
            uVar41 = *(undefined4 *)((int)uVar41 + 4);
            *(undefined2 *)(unaff_BP - 2) = (int)((ulong)uVar41 >> 0x10);
            *(undefined2 *)(unaff_BP - 4) = (int)uVar41;
            bVar38 = (**(uint **)(unaff_BP - 4) & 1) == 0;
            if ((!bVar38) || (FUN_1000_036e(), bVar38)) {
              FUN_11bf_0012(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8));
              goto LAB_11bf_02ae;
            }
            puVar10 = *(uint **)(unaff_BP + 6);
            iVar22 = *(int *)((int)puVar10 + 2);
            uVar13 = *puVar10;
            puVar10 = *(uint **)(unaff_BP - 4);
            uVar15 = *puVar10;
            *puVar10 = *puVar10 + uVar13;
            piVar2 = (int *)((int)puVar10 + 2);
            *piVar2 = *piVar2 + iVar22 + (uint)CARRY2(uVar15,uVar13);
            uVar37 = *(undefined2 *)(unaff_BP - 4);
            uVar41 = *(undefined4 *)(unaff_BP - 8);
            uVar16 = (undefined2)((ulong)uVar41 >> 0x10);
            iVar22 = (int)uVar41;
            *(undefined2 *)(iVar22 + 6) = *(undefined2 *)(unaff_BP - 2);
            *(undefined2 *)(iVar22 + 4) = uVar37;
            uVar41 = *(undefined4 *)(unaff_BP - 4);
            uVar37 = (undefined2)((ulong)uVar41 >> 0x10);
            iVar22 = (int)uVar41;
            break;
          case 0xe:
            goto switchD_1000_177f_caseD_e;
          case 0xf:
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          case 0x10:
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          case 0x11:
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          case 0x12:
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          case 0x13:
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          case 0x14:
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          case 0x15:
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          case 0x16:
            if ((*(byte *)(unaff_BP - 0x29) & 4) == 0) {
              if ((*(byte *)(unaff_BP - 0x29) & 8) == 0) {
                uVar19 = 0;
              }
              else {
                uVar19 = 8;
              }
            }
            else {
              uVar19 = 4;
            }
            FUN_1000_03ba(0x1000,piVar36,uVar37,uVar19);
            iVar22 = extraout_DX_04;
            pcVar14 = *(char **)(unaff_BP + 0x12);
            goto LAB_11f4_003a;
          case 0x17:
          }
          *(undefined2 *)(unaff_BP + 8) = uVar37;
          *(int *)(unaff_BP + 6) = iVar22;
LAB_11bf_02ae:
          uVar15 = **(uint **)(unaff_BP - 8) & 1;
          if (uVar15 == 0) {
            uVar15 = FUN_11bf_00b1(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),
                                   *(undefined2 *)(unaff_BP - 8),*(undefined2 *)(unaff_BP - 6));
          }
          return uVar15;
        }
      }
      pcVar14 = *(char **)(unaff_BP - 0x8a);
      uVar37 = *(undefined2 *)(unaff_BP + 0xc);
      do {
        FUN_1167_005d();
        pcVar1 = pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (*pcVar1 != '\0');
LAB_1167_055c:
      if (*(char *)(unaff_BP - 0x55) < 'P') {
        FUN_1167_0066();
      }
      if (*(int *)(unaff_BP - 2) == 0) {
        uVar15 = *(uint *)(unaff_BP - 0x58);
      }
      else {
        uVar15 = 0xffff;
      }
      return uVar15;
    }
  }
  *(byte *)piVar36 = bVar20;
  piVar36 = (int *)((int)piVar36 + 1);
  pcVar1 = (char *)(unaff_BP - 0x55);
  cVar12 = *pcVar1;
  *pcVar1 = *pcVar1 + -1;
  pbVar32 = pbVar30;
  if (*pcVar1 == '\0' || SBORROW1(cVar12,'\x01') != *pcVar1 < '\0') {
    FUN_1167_0066();
  }
  goto LAB_1167_00a6;
LAB_11f4_003a:
  pcVar31 = pcVar14 + 1;
  cVar12 = *pcVar14;
  if (cVar12 == '\0') goto LAB_11f4_0478;
  if (cVar12 == '%') {
    *(undefined2 *)(unaff_BP - 0x22) = 0xffff;
    uVar37 = *(undefined2 *)(unaff_BP + 0x14);
    *(undefined *)(unaff_BP - 0x29) = 0x20;
    pbVar30 = (byte *)(pcVar14 + 2);
    uVar15 = (uint)*pcVar31;
    *(byte **)(unaff_BP + 0x12) = pbVar30;
    if ((int)uVar15 < 0) goto LAB_11f4_0478;
    bVar20 = *(byte *)(uVar15 + 0x4be);
    uVar13 = (uint)bVar20;
    if (0x15 < uVar13) {
LAB_11f4_0460:
      ppcVar8 = (code **)(unaff_BP + 10);
      (**ppcVar8)(0x1000,0xffff,*(undefined2 *)(unaff_BP + 0xe),*(undefined2 *)(unaff_BP + 0x10));
      piVar2 = (int *)(unaff_BP - 0x28);
      *piVar2 = *piVar2 - (uint)(*(int *)(unaff_BP - 0x28) == 0);
      goto LAB_11f4_0478;
    }
    puVar23 = (undefined *)(uVar13 * 2);
    switch(uVar13) {
    case 0:
      break;
    case 1:
                    // WARNING: Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
      return uVar13;
    case 2:
      pbVar3 = pbVar30 + unaff_BP;
      *pbVar3 = *pbVar3 + bVar20;
      break;
    case 3:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case 4:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case 5:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case 6:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    default:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case 8:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case 10:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case 0xc:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case 0xe:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case 0xf:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case 0x10:
      *(undefined2 *)(puVar23 + uVar15) = 0x30b4;
      goto switchD_1000_201e_caseD_13;
    case 0x11:
      while( true ) {
        *puVar23 = (char)uVar13;
        piVar2 = (int *)(unaff_BP - 0x8e);
        *piVar2 = *piVar2 + 1;
        uVar13 = *(uint *)(unaff_BP - 0x8e);
code_r0x0001104c:
        uVar15 = unaff_BP - 0x82;
        if ((uVar13 >= uVar15) && ((uVar13 < uVar15 || (0x7f < uVar13 - uVar15)))) {
          iVar22 = *(int *)(unaff_BP - 0x8e) - (unaff_BP - 0x82);
          iVar17 = FUN_1111_0001(*(undefined2 *)(unaff_BP + 6),unaff_BP - 0x82);
          if (iVar17 != iVar22) {
            return ((*(int *)(unaff_BP + 0xc) - *(int *)(unaff_BP - 0x8a)) + iVar17) - iVar22;
          }
          *(int *)(unaff_BP - 0x8c) = unaff_SS;
          *(int *)(unaff_BP - 0x8e) = unaff_BP - 0x82;
        }
        if (*(int *)(unaff_BP - 0x8a) == 0) break;
        piVar2 = (int *)(unaff_BP - 0x8a);
        *piVar2 = *piVar2 + -1;
        pcVar1 = *(char **)(unaff_BP - 0x86);
        piVar2 = (int *)(unaff_BP - 0x86);
        *piVar2 = *piVar2 + 1;
        cVar12 = *pcVar1;
        *(char *)(unaff_BP - 0x87) = cVar12;
        if (cVar12 == '\n') {
          *(undefined *)*(undefined4 *)(unaff_BP - 0x8e) = 0xd;
          piVar2 = (int *)(unaff_BP - 0x8e);
          *piVar2 = *piVar2 + 1;
        }
        uVar13 = (uint)*(byte *)(unaff_BP - 0x87);
        uVar41 = *(undefined4 *)(unaff_BP - 0x8e);
        uVar37 = (undefined2)((ulong)uVar41 >> 0x10);
        puVar23 = (undefined *)uVar41;
      }
      iVar22 = *(int *)(unaff_BP - 0x8e) - (unaff_BP - 0x82);
      if ((iVar22 == 0) ||
         (iVar17 = FUN_1111_0001(*(undefined2 *)(unaff_BP + 6),unaff_BP - 0x82), iVar17 == iVar22))
      {
        uVar15 = *(uint *)(unaff_BP + 0xc);
      }
      else {
        uVar15 = (*(int *)(unaff_BP + 0xc) + iVar17) - iVar22;
      }
                    // WARNING: Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
      return uVar15;
    case 0x12:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    case 0x13:
      goto switchD_1000_201e_caseD_13;
    case 0x14:
      goto code_r0x0001104c;
    case 0x15:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    goto switchD_1000_201e_caseD_0;
  }
  iVar17 = (int)cVar12;
  piVar2 = (int *)(unaff_BP - 0x26);
  *piVar2 = *piVar2 + 1;
  ppcVar8 = (code **)(unaff_BP + 6);
  uVar41 = (**ppcVar8)(0x1000,*(undefined2 *)(unaff_BP + 0xe),*(undefined2 *)(unaff_BP + 0x10));
  iVar22 = (int)((ulong)uVar41 >> 0x10);
  iVar18 = (int)uVar41;
  if (iVar18 < 0) goto LAB_11f4_0460;
  pcVar14 = pcVar31;
  if ((-1 < iVar17) && (*(char *)(iVar17 + 0x4be) == '\x01')) {
    while ((-1 < (char)iVar18 && (*(char *)(iVar18 + 0x4be) == '\x01'))) {
      piVar2 = (int *)(unaff_BP - 0x26);
      *piVar2 = *piVar2 + 1;
      ppcVar8 = (code **)(unaff_BP + 6);
      iVar18 = (**ppcVar8)(0x1000,*(undefined2 *)(unaff_BP + 0xe),*(undefined2 *)(unaff_BP + 0x10));
      if (iVar18 < 1) goto LAB_11f4_0460;
    }
    ppcVar8 = (code **)(unaff_BP + 10);
    (**ppcVar8)(0x1000,iVar18,*(undefined2 *)(unaff_BP + 0xe),*(undefined2 *)(unaff_BP + 0x10));
    piVar2 = (int *)(unaff_BP - 0x26);
    *piVar2 = *piVar2 + -1;
    iVar22 = extraout_DX_03;
    goto LAB_11f4_003a;
  }
  if (iVar18 != iVar17) {
    ppcVar8 = (code **)(unaff_BP + 10);
    (**ppcVar8)(0x1000,iVar18,*(undefined2 *)(unaff_BP + 0xe),*(undefined2 *)(unaff_BP + 0x10));
    piVar2 = (int *)(unaff_BP - 0x26);
    *piVar2 = *piVar2 + -1;
LAB_11f4_0478:
    return *(uint *)(unaff_BP - 0x28);
  }
  goto LAB_11f4_003a;
code_r0x00010257:
  bVar38 = bVar20 < 9;
  uVar39 = bVar20 == 9;
  if ((bool)uVar39) {
LAB_1000_025b:
    bVar38 = false;
    uVar39 = true;
  }
  goto LAB_1000_0243;
  while( true ) {
    *ppcVar29 = pcVar34;
    ppcVar29[1] = pcVar14;
    ppcVar29 = ppcVar29 + 2;
    do {
      pcVar1 = pcVar34;
      pcVar34 = pcVar34 + 1;
      bVar38 = *pcVar1 != '\0';
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0 && bVar38);
    ppcVar11 = ppcRam0000006d;
    pcVar31 = pcRam0000006f;
    if (bVar38) break;
LAB_1000_02af:
    pcRam0000006f = pcVar31;
    ppcRam0000006d = ppcVar11;
    if (iVar22 == 0) break;
  }
  *ppcVar29 = (char *)0x0;
  ppcVar29[1] = (char *)0x0;
                    // WARNING: Treating indirect jump as call
  uVar15 = (*(code *)0x0)();
  return uVar15;
switchD_1000_201e_caseD_13:
  pcVar9 = (code *)swi(0x21);
  uVar40 = (*pcVar9)();
  unaff_BP = DAT_126b_0002;
code_r0x00010010:
  uVar19 = s_Turbo_C___Copyright__c__1988_Bor_126b_0004._40_2_;
  uVar16 = (undefined2)(uVar40 >> 0x10);
  *(undefined2 *)&DAT_126b_007d = (int)uVar40;
  *(undefined2 *)&DAT_126b_007b = uVar37;
  *(undefined2 *)&DAT_126b_0077 = uVar19;
  *(uint *)&DAT_126b_0091 = unaff_BP;
  *(undefined2 *)&DAT_126b_0081 = 0xffff;
  FUN_1000_012f();
  uVar41 = *(undefined4 *)&DAT_126b_0075;
  uVar37 = (undefined2)((ulong)uVar41 >> 0x10);
  piVar36 = (int *)uVar41;
code_r0x00010032:
  uVar15 = 0x7fff;
  piVar21 = piVar36;
  piVar33 = piVar36;
  do {
    if (((*piVar33 == 0x3738) && (iVar22 = piVar33[1], (char)iVar22 == '=')) &&
       (piVar2 = (int *)&DAT_126b_0081, *piVar2 = *piVar2 + 1,
       ((byte)((uint)iVar22 >> 8) & 0xdf) == 0x59)) {
      piVar2 = (int *)&DAT_126b_0081;
      *piVar2 = *piVar2 + 1;
    }
    do {
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      piVar2 = piVar33;
      piVar33 = (int *)((int)piVar33 + 1);
    } while ((byte)piVar36 != *(byte *)piVar2);
    if (uVar15 == 0) goto LAB_1000_0099;
    piVar21 = (int *)((int)piVar21 + 1);
  } while (*(byte *)piVar33 != (byte)piVar36);
  *(int *)&DAT_126b_0075 = -(uVar15 | 0x8000);
  *(uint *)&DAT_126b_0079 = (int)piVar21 * 4 + 0x10U & 0xfff0;
  unaff_BP = unaff_BP - unaff_SS;
  uVar15 = *(uint *)&DAT_126b_0142;
  iVar22 = unaff_SS;
switchD_1000_201e_caseD_0:
  if (uVar15 < 0x200) {
    uVar15 = 0x200;
    *(undefined2 *)&DAT_126b_0142 = 0x200;
  }
  bVar20 = 4;
  uVar15 = (uVar15 >> 4) + 1;
  if (unaff_BP < uVar15) {
LAB_1000_0099:
    uVar15 = FUN_1000_01af();
    return uVar15;
  }
  iVar22 = uVar15 + iVar22;
  *(int *)&DAT_126b_0089 = iVar22;
  *(int *)&DAT_126b_008d = iVar22;
  iVar22 = iVar22 - *(int *)&DAT_126b_007b;
  pcVar9 = (code *)swi(0x21);
  (*pcVar9)();
  piVar36 = (int *)(in_stack_00000000 << (bVar20 & 0x1f));
  pcVar14 = extraout_DX;
switchD_1000_177f_caseD_e:
  puVar23 = (undefined *)&DAT_126b_0554;
  for (iVar17 = 0x80; iVar17 != 0; iVar17 = iVar17 + -1) {
    puVar4 = puVar23;
    puVar23 = puVar23 + 1;
    *puVar4 = 0;
  }
  piVar36[-1] = 0x1000;
  pcVar7 = *(code **)&DAT_126b_053e;
  piVar24 = piVar36 + -2;
  piVar36[-2] = 0xd3;
  (*pcVar7)();
  *(undefined2 *)((int)piVar24 + -2) = 0x1000;
  puVar25 = (undefined *)((int)piVar24 + -4);
  *(undefined2 *)((int)piVar24 + -4) = 0xd8;
  FUN_1000_01d1();
  *(undefined2 *)(puVar25 + -2) = 0x1000;
  *(undefined2 *)(puVar25 + -4) = 0xdd;
  FUN_1000_02cf();
  pcVar9 = (code *)swi(0x1a);
  (*pcVar9)();
  *(undefined2 *)&DAT_126b_0083 = extraout_DX_00;
  *(int *)&DAT_126b_0085 = iVar17;
  *(undefined2 *)(puVar25 + -2) = 0x1000;
  pcVar7 = *(code **)&DAT_126b_0542;
  puVar26 = puVar25 + -4;
  *(undefined2 *)(puVar25 + -4) = 0xee;
  (*pcVar7)();
  *(undefined2 *)(puVar26 + -2) = *(undefined2 *)&DAT_126b_0073;
  *(undefined2 *)(puVar26 + -4) = *(undefined2 *)&DAT_126b_0071;
  *(undefined2 *)(puVar26 + -6) = *(undefined2 *)&DAT_126b_006f;
  *(undefined2 *)(puVar26 + -8) = *(undefined2 *)&DAT_126b_006d;
  *(undefined2 *)(puVar26 + -10) = *(undefined2 *)&DAT_126b_006b;
  *(undefined2 *)(puVar26 + -0xc) = 0x1000;
  *(undefined2 *)(puVar26 + -0xe) = 0x107;
  uVar37 = FUN_103c_0002();
  *(undefined2 *)(puVar26 + -0xc) = uVar37;
  *(undefined2 *)(puVar26 + -0xe) = 0x103c;
  *(undefined2 *)(puVar26 + -0x10) = 0x10d;
  FUN_104a_000a();
  *(undefined2 *)(puVar26 + -0xe) = 0x1000;
  *(undefined2 *)(puVar26 + -0x10) = 0x117;
  FUN_1000_0172();
  *(undefined2 *)(puVar26 + -0xe) = 0x1000;
  pcVar9 = pcRam00000540;
  puVar27 = puVar26 + -0x10;
  *(undefined2 *)(puVar26 + -0x10) = 0x11c;
  (*pcVar9)();
  pcVar9 = (code *)swi(0x21);
  (*pcVar9)();
  *(undefined2 *)(puVar27 + -2) = 0x1be;
  FUN_1000_01a7();
  *(undefined2 *)(puVar27 + -2) = 3;
  *(undefined2 *)(puVar27 + -4) = 0x1000;
  puVar28 = (undefined2 *)(puVar27 + -6);
  *(undefined2 *)(puVar27 + -6) = 0x1c7;
  cVar12 = FUN_1000_010d();
  pbVar3 = pbVar30 + iVar22;
  *pbVar3 = *pbVar3 + cVar12;
  pbVar3 = pbVar30 + iVar22;
  *pbVar3 = *pbVar3 + cVar12;
  pbVar3 = pbVar30 + iVar22;
  *pbVar3 = *pbVar3 + cVar12;
  pbVar3 = pbVar30 + iVar22;
  *pbVar3 = *pbVar3 + cVar12;
  pbVar3 = pbVar30 + iVar22;
  *pbVar3 = *pbVar3 + cVar12;
                    // WARNING (jumptable): Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101c9) is written
  uRam000101c9 = *puVar28;
                    // WARNING (jumptable): Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
  uRam000101cb = puVar28[1];
                    // WARNING (jumptable): Read-only address (ram,0x000101cd) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
  uRam000101cd = 0;
  pcVar31 = (char *)(iRam00000075 + 2);
  uVar15 = 1;
  uVar37 = uRam0000007b;
  if (2 < bRam0000007d) {
    uVar15 = 0x7f;
    pcVar34 = pcVar31;
    do {
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar1 = pcVar34;
      pcVar34 = pcVar34 + 1;
    } while (*pcVar1 != '\0');
    if (uVar15 == 0) goto LAB_1000_0287;
    uVar15 = uVar15 ^ 0x7f;
    uVar37 = uRam00000077;
  }
  puVar23 = (undefined *)(*(byte *)((int)&DAT_126b_007f + 1) + 2 + uVar15 & 0xfffe);
  pcVar34 = (char *)((int)puVar28 + (2 - (int)puVar23));
  if (puVar23 <= puVar28 + 1) {
    *(uint *)(pcVar34 + -2) = uVar15;
    pcVar35 = pcVar34;
    while (uVar15 - 1 != 0) {
      pcVar5 = pcVar35;
      pcVar35 = pcVar35 + 1;
      pcVar1 = pcVar31;
      pcVar31 = pcVar31 + 1;
      *pcVar5 = *pcVar1;
      uVar15 = uVar15 - 1;
    }
    bVar38 = false;
    *pcVar35 = '\0';
    uVar39 = uVar15 == 0;
LAB_1000_0243:
    *(undefined2 *)(pcVar34 + -4) = 0x246;
    bVar20 = 0;
    FUN_1000_025f();
    iVar22 = extraout_DX_01;
    if (bVar38 || (bool)uVar39) {
      do {
        if (bVar38) {
          iVar22 = *(int *)(pcVar34 + -2) + iVar22;
          ppcVar29 = (char **)(pcVar34 + (uVar15 + 1) * -4);
          uRam0000006b = uVar15;
          ppcVar11 = ppcVar29;
          pcVar31 = pcVar14;
          if (pcVar34 < (char *)((uVar15 + 1) * 4)) goto LAB_1000_0287;
          goto LAB_1000_02af;
        }
        *(undefined2 *)(pcVar34 + -4) = 0x24d;
        bVar20 = 0;
        FUN_1000_025f();
        iVar22 = extraout_DX_02;
      } while (!bVar38 && !(bool)uVar39);
    }
    if ((bVar20 != 0x20) && (bVar20 != 0xd)) goto code_r0x00010257;
    goto LAB_1000_025b;
  }
LAB_1000_0287:
  uVar15 = FUN_1000_01af();
  return uVar15;
}



void __cdecl16far FUN_11bf_0000(undefined2 param_1,undefined2 param_2)

{
  FUN_11bf_02da(param_1,param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl16far FUN_11bf_0012(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  bool bVar6;
  
  bVar6 = true;
  FUN_1000_036e();
  if (bVar6) {
    _DAT_126b_014e = param_1;
    *(undefined2 *)((int)param_1 + 10) = param_1._2_2_;
    *(int *)((int)param_1 + 8) = (int)param_1;
    *(undefined2 *)((int)param_1 + 0xe) = param_1._2_2_;
    *(int *)((int)param_1 + 0xc) = (int)param_1;
  }
  else {
    uVar5 = (undefined2)((ulong)_DAT_126b_014e >> 0x10);
    iVar3 = (int)_DAT_126b_014e;
    uVar1 = *(undefined4 *)(iVar3 + 0xc);
    iVar4 = (int)uVar1;
    uVar2 = (undefined2)((ulong)uVar1 >> 0x10);
    *(undefined2 *)(iVar3 + 0xe) = param_1._2_2_;
    *(int *)(iVar3 + 0xc) = (int)param_1;
    *(undefined2 *)(iVar4 + 10) = param_1._2_2_;
    *(int *)(iVar4 + 8) = (int)param_1;
    *(undefined2 *)((int)param_1 + 0xe) = uVar2;
    *(int *)((int)param_1 + 0xc) = iVar4;
    uVar2 = DAT_126b_014e;
    *(undefined2 *)((int)param_1 + 10) = _DAT_126b_0150;
    *(undefined2 *)((int)param_1 + 8) = uVar2;
  }
  return;
}



void __cdecl16far FUN_11bf_00b1(uint *param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  bool bVar9;
  
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  iVar4 = *(int *)((int)param_2 + 2);
  uVar3 = *param_2;
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  uVar2 = *param_1;
  *param_1 = *param_1 + uVar3;
  piVar1 = (int *)(iVar6 + 2);
  *piVar1 = *piVar1 + iVar4 + (uint)CARRY2(uVar2,uVar3);
  bVar9 = *piVar1 == 0;
  FUN_1000_036e();
  if (!bVar9) {
    uVar5 = uVar7;
    iVar4 = FUN_1000_0313();
    *(undefined2 *)(iVar4 + 6) = uVar8;
    *(int *)(iVar4 + 4) = iVar6;
    iVar6 = DAT_126b_014a;
    uVar8 = DAT_126b_014c;
  }
  DAT_126b_014c = uVar8;
  DAT_126b_014a = iVar6;
  FUN_1050_0021((int)param_2,uVar7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl16far FUN_11bf_0129(void)

{
  uint *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  bool bVar5;
  undefined uVar6;
  
  bVar5 = &stack0x0000 == (undefined *)((int)s_Turbo_C___Copyright__c__1988_Bor_126b_0004 + 2);
  FUN_1000_036e();
  if (bVar5) {
    FUN_1081_009c(DAT_126b_0146,DAT_126b_0148);
    _DAT_126b_014a = (uint *)0x0;
    DAT_126b_0148 = 0;
    DAT_126b_0146 = 0;
  }
  else {
    uVar4 = (undefined2)((ulong)_DAT_126b_014a >> 0x10);
    puVar1 = *(uint **)((int)_DAT_126b_014a + 4);
    iVar3 = (int)puVar1;
    uVar2 = (undefined2)((ulong)puVar1 >> 0x10);
    uVar6 = (*puVar1 & 1) == 0;
    if ((bool)uVar6) {
      FUN_1050_0021(iVar3,uVar2);
      FUN_1000_036e();
      if ((bool)uVar6) {
        _DAT_126b_014a = (uint *)0x0;
        DAT_126b_0148 = 0;
        DAT_126b_0146 = 0;
      }
      else {
        _DAT_126b_014a = *(uint **)(iVar3 + 4);
      }
      FUN_1081_009c(iVar3,uVar2);
    }
    else {
      FUN_1081_009c((int)_DAT_126b_014a,uVar4);
      _DAT_126b_014a = puVar1;
    }
  }
  return;
}



void FUN_11bf_020e(undefined2 param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar8;
  undefined2 uVar9;
  bool bVar10;
  uint *puStack_a;
  
  uVar9 = (undefined2)((ulong)param_2 >> 0x10);
  iVar8 = (int)param_2;
  uVar2 = *param_2;
  *param_2 = *param_2 - 1;
  piVar1 = (int *)(iVar8 + 2);
  *piVar1 = *piVar1 - (uint)(uVar2 == 0);
  uVar7 = uVar9;
  iVar6 = FUN_1000_0313();
  puStack_a = (uint *)CONCAT22(uVar7,iVar6);
  puVar4 = *(uint **)(iVar8 + 4);
  uVar5 = (undefined2)((ulong)puVar4 >> 0x10);
  bVar10 = (*puVar4 & 1) == 0;
  if (bVar10) {
    FUN_1000_036e();
    if (!bVar10) {
      iVar8 = *(int *)(iVar8 + 2);
      uVar3 = *param_2;
      uVar2 = *puVar4;
      *puVar4 = *puVar4 + uVar3;
      piVar1 = (int *)((int)puVar4 + 2);
      *piVar1 = *piVar1 + iVar8 + (uint)CARRY2(uVar2,uVar3);
      *(undefined2 *)(iVar6 + 6) = uVar5;
      *(int *)(iVar6 + 4) = (int)puVar4;
      param_2 = puVar4;
      goto LAB_11bf_02ae;
    }
  }
  FUN_11bf_0012(iVar8,uVar9);
LAB_11bf_02ae:
  if ((*puStack_a & 1) == 0) {
    FUN_11bf_00b1(param_2._0_2_,param_2._2_2_,iVar6,uVar7);
  }
  return;
}



void __cdecl16far FUN_11bf_02da(uint param_1,uint param_2)

{
  undefined2 uVar1;
  undefined uVar2;
  
  uVar2 = (param_1 | param_2) == 0;
  if (!(bool)uVar2) {
    uVar1 = FUN_1000_0313();
    FUN_1000_036e();
    if ((bool)uVar2) {
      FUN_11bf_0129();
    }
    else {
      FUN_11bf_020e(0x1000,uVar1,param_2);
    }
  }
  return;
}



void __cdecl16far FUN_11f1_0007(undefined2 param_1,undefined2 param_2)

{
  FUN_11f4_0005(0xf3,0x10ae,0xe,0x1263,0x256,0x126b,param_1,param_2,&stack0x0008);
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0001104b) overlaps instruction at (ram,0x0001104a)
// 
// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack
// WARNING: Removing unreachable block (ram,0x00011040)
// WARNING: Removing unreachable block (ram,0x000110f8)
// WARNING: Removing unreachable block (ram,0x0001104b)
// WARNING: Removing unreachable block (ram,0x00011051)
// WARNING: Removing unreachable block (ram,0x00011095)

undefined * __cdecl16far
FUN_11f4_0005(code *param_1,undefined2 param_2_00,code *param_2,undefined *param_3,
             undefined2 param_4,undefined2 param_5,char *param_6,undefined2 param_7)

{
  int *piVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  code *pcVar5;
  code *pcVar6;
  undefined2 uVar7;
  byte *pbVar8;
  char **ppcVar9;
  char cVar10;
  undefined2 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  char *extraout_DX;
  undefined2 extraout_DX_00;
  int extraout_DX_01;
  int extraout_DX_02;
  int in_DX;
  int extraout_DX_03;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined2 *puVar21;
  undefined *puVar22;
  char **ppcVar23;
  char *pcVar24;
  int *piVar25;
  int *piVar26;
  undefined *puVar27;
  char *pcVar28;
  char *pcVar29;
  int unaff_DI;
  undefined2 uVar30;
  undefined2 uVar31;
  int unaff_SS;
  bool bVar32;
  undefined uVar33;
  undefined4 uVar34;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined local_84 [70];
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  code *pcStack_3a;
  undefined *puStack_38;
  
  uVar11 = 0x126b;
  pcVar24 = param_6;
  while( true ) {
    uVar7 = param_7;
    pcVar28 = pcVar24 + 1;
    cVar10 = *pcVar24;
    if (cVar10 == '\0') {
      return (undefined *)0x0;
    }
    if (cVar10 == '%') break;
    iVar12 = (int)cVar10;
    puStack_38 = (undefined *)0x11f4;
    pcStack_3a = (code *)0x1f95;
    uVar34 = (*param_1)();
    in_DX = (int)((ulong)uVar34 >> 0x10);
    iVar13 = (int)uVar34;
    if (iVar13 < 0) goto LAB_11f4_0460;
    pcVar24 = pcVar28;
    if ((iVar12 < 0) || (*(char *)(iVar12 + 0x4be) != '\x01')) {
      if (iVar13 != iVar12) {
        pcStack_3a = (code *)0x11f4;
        uStack_3c = 0x1fe7;
        puStack_38 = (undefined *)iVar13;
        (*param_2)();
                    // WARNING: Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
        return (undefined *)0x0;
      }
    }
    else {
      while ((-1 < (char)iVar13 && (*(char *)(iVar13 + 0x4be) == '\x01'))) {
        puStack_38 = (undefined *)0x11f4;
        pcStack_3a = (code *)0x1fbe;
        iVar13 = (*param_1)();
        if (iVar13 < 1) goto LAB_11f4_0460;
      }
      pcStack_3a = (code *)0x11f4;
      uStack_3c = 0x1fd1;
      puStack_38 = (undefined *)iVar13;
      (*param_2)();
      in_DX = extraout_DX_03;
    }
  }
  pcVar24 = pcVar24 + 2;
  uVar14 = (uint)*pcVar28;
  if ((int)uVar14 < 0) {
    return (undefined *)0x0;
  }
  bVar15 = *(byte *)(uVar14 + 0x4be);
  puVar27 = (undefined *)(uint)bVar15;
  param_6 = pcVar24;
  if ((undefined *)((int)s_Turbo_C___Copyright__c__1988_Bor_126b_0004 + 0x11U) < puVar27) {
LAB_11f4_0460:
    puStack_38 = (undefined *)0xffff;
    pcStack_3a = (code *)0x11f4;
    uStack_3c = 0x23ad;
    (*param_2)();
    return (undefined *)0xffff;
  }
  puVar16 = (undefined *)((int)puVar27 * 2);
  uVar31 = 0x1000;
  puVar22 = &stack0xfffe;
  switch(puVar27) {
  case (undefined *)0x0:
    break;
  case (undefined *)0x1:
    return puVar27;
  case (undefined *)0x2:
    pcVar2 = &stack0xfffe + (int)pcVar24;
    *pcVar2 = *pcVar2 + bVar15;
    puVar22 = &stack0xfffe;
    break;
  case (undefined *)0x3:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0x4:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0x5:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0x6:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  default:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0x8:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0xa:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0xc:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0xe:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0xf:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0x10:
    *(undefined2 *)(puVar16 + uVar14) = 0x30b4;
  case (undefined *)0x13:
    pcVar6 = (code *)swi(0x21);
    uVar34 = (*pcVar6)();
    uVar30 = s_Turbo_C___Copyright__c__1988_Bor_126b_0004._40_2_;
    iVar12 = DAT_126b_0002;
    uVar11 = (undefined2)((ulong)uVar34 >> 0x10);
    *(undefined2 *)&DAT_126b_007d = (int)uVar34;
    *(undefined2 *)&DAT_126b_007b = uVar7;
    *(undefined2 *)&DAT_126b_0077 = uVar30;
    *(int *)&DAT_126b_0091 = iVar12;
    *(undefined2 *)&DAT_126b_0081 = 0xffff;
    FUN_1000_012f();
    uVar34 = *(undefined4 *)&DAT_126b_0075;
    uVar30 = (undefined2)((ulong)uVar34 >> 0x10);
    piVar25 = (int *)uVar34;
    uVar14 = 0x7fff;
    piVar26 = piVar25;
    do {
      if (((*piVar26 == 0x3738) && (iVar13 = piVar26[1], (char)iVar13 == '=')) &&
         (piVar1 = (int *)&DAT_126b_0081, *piVar1 = *piVar1 + 1,
         ((byte)((uint)iVar13 >> 8) & 0xdf) == 0x59)) {
        piVar1 = (int *)&DAT_126b_0081;
        *piVar1 = *piVar1 + 1;
      }
      do {
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        piVar1 = piVar26;
        piVar26 = (int *)((int)piVar26 + 1);
      } while ((char)uVar34 != *(char *)piVar1);
      if (uVar14 == 0) goto LAB_1000_0099;
      piVar25 = (int *)((int)piVar25 + 1);
    } while (*(char *)piVar26 != (char)uVar34);
    *(int *)&DAT_126b_0075 = -(uVar14 | 0x8000);
    *(uint *)&DAT_126b_0079 = (int)piVar25 * 4 + 0x10U & 0xfff0;
    uVar14 = *(uint *)&DAT_126b_0142;
    in_DX = unaff_SS;
    puVar22 = (undefined *)(iVar12 - unaff_SS);
    break;
  case (undefined *)0x11:
    uVar11 = param_7;
    while( true ) {
      *puVar16 = (char)puVar27;
      puVar27 = (undefined *)(local_90 + 1);
      uVar30 = (undefined2)((ulong)_local_90 >> 0x10);
      _local_90 = (undefined *)CONCAT22(uVar30,puVar27);
      uStack_3c = uVar31;
code_r0x0001104c:
      pbVar8 = local_88;
      puVar22 = local_84;
      uVar31 = uStack_3c;
      if ((puVar27 >= puVar22) &&
         ((puVar27 < puVar22 || (0x7f < (uint)((int)puVar27 - (int)puVar22))))) {
        puStack_38 = local_84;
        pcStack_3a = param_1;
        uVar31 = 0x1111;
        uStack_3e = 0x1086;
        iVar12 = FUN_1111_0001();
        if (iVar12 != local_90 - (int)local_84) {
          return param_3 + ((iVar12 - local_8c) - (local_90 - (int)local_84));
        }
        _local_90 = (undefined *)CONCAT22(unaff_SS,local_84);
      }
      if (local_8c == 0) break;
      local_8c = local_8c + -1;
      local_88 = (byte *)CONCAT22(local_88._2_2_,(int)local_88 + 1);
      bVar15 = *pbVar8;
      if (bVar15 == 10) {
        *_local_90 = 0xd;
        uVar30 = (undefined2)((ulong)_local_90 >> 0x10);
        _local_90 = (undefined *)CONCAT22(uVar30,local_90 + 1);
      }
      puVar27 = (undefined *)(uint)bVar15;
      puVar16 = (undefined *)_local_90;
      uVar11 = (int)((ulong)_local_90 >> 0x10);
    }
    local_90 = local_90 - (int)local_84;
    if (local_90 != 0) {
      puStack_38 = local_84;
      pcStack_3a = param_1;
      uStack_3e = 0x10e9;
      uStack_3c = uVar31;
      iVar12 = FUN_1111_0001();
      if (iVar12 != local_90) {
        param_3 = param_3 + (iVar12 - local_90);
      }
    }
                    // WARNING: Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
    return param_3;
  case (undefined *)0x12:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (undefined *)0x14:
    uStack_3c = uVar31;
    goto code_r0x0001104c;
  case (undefined *)0x15:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (uVar14 < 0x200) {
    uVar14 = 0x200;
    *(undefined2 *)&DAT_126b_0142 = 0x200;
  }
  bVar15 = 4;
  puVar27 = (undefined *)((uVar14 >> 4) + 1);
  if (puVar22 < puVar27) {
LAB_1000_0099:
    puVar27 = (undefined *)FUN_1000_01af();
    return puVar27;
  }
  puVar27 = puVar27 + in_DX;
  *(int *)&DAT_126b_0089 = (int)puVar27;
  *(int *)&DAT_126b_008d = (int)puVar27;
  iVar13 = (int)puVar27 - *(int *)&DAT_126b_007b;
  pcVar6 = (code *)swi(0x21);
  (*pcVar6)();
  unaff_DI = unaff_DI << (bVar15 & 0x1f);
  puVar27 = (undefined *)&DAT_126b_0554;
  for (iVar12 = 0x80; iVar12 != 0; iVar12 = iVar12 + -1) {
    puVar3 = puVar27;
    puVar27 = puVar27 + 1;
    *puVar3 = 0;
  }
  *(undefined2 *)(unaff_DI + -2) = 0x1000;
  pcVar5 = *(code **)&DAT_126b_053e;
  puVar17 = (undefined *)(unaff_DI + -4);
  *(undefined2 *)(unaff_DI + -4) = 0xd3;
  (*pcVar5)();
  *(undefined2 *)(puVar17 + -2) = 0x1000;
  puVar18 = puVar17 + -4;
  *(undefined2 *)(puVar17 + -4) = 0xd8;
  FUN_1000_01d1();
  *(undefined2 *)(puVar18 + -2) = 0x1000;
  *(undefined2 *)(puVar18 + -4) = 0xdd;
  FUN_1000_02cf();
  pcVar6 = (code *)swi(0x1a);
  (*pcVar6)();
  *(undefined2 *)&DAT_126b_0083 = extraout_DX_00;
  *(int *)&DAT_126b_0085 = iVar12;
  *(undefined2 *)(puVar18 + -2) = 0x1000;
  pcVar5 = *(code **)&DAT_126b_0542;
  puVar19 = puVar18 + -4;
  *(undefined2 *)(puVar18 + -4) = 0xee;
  (*pcVar5)();
  *(undefined2 *)(puVar19 + -2) = *(undefined2 *)&DAT_126b_0073;
  *(undefined2 *)(puVar19 + -4) = *(undefined2 *)&DAT_126b_0071;
  *(undefined2 *)(puVar19 + -6) = *(undefined2 *)&DAT_126b_006f;
  *(undefined2 *)(puVar19 + -8) = *(undefined2 *)&DAT_126b_006d;
  *(undefined2 *)(puVar19 + -10) = *(undefined2 *)&DAT_126b_006b;
  *(undefined2 *)(puVar19 + -0xc) = 0x1000;
  *(undefined2 *)(puVar19 + -0xe) = 0x107;
  uVar11 = FUN_103c_0002();
  *(undefined2 *)(puVar19 + -0xc) = uVar11;
  *(undefined2 *)(puVar19 + -0xe) = 0x103c;
  *(undefined2 *)(puVar19 + -0x10) = 0x10d;
  FUN_104a_000a();
  *(undefined2 *)(puVar19 + -0xe) = 0x1000;
  *(undefined2 *)(puVar19 + -0x10) = 0x117;
  FUN_1000_0172();
  *(undefined2 *)(puVar19 + -0xe) = 0x1000;
  pcVar6 = pcRam00000540;
  puVar20 = puVar19 + -0x10;
  *(undefined2 *)(puVar19 + -0x10) = 0x11c;
  (*pcVar6)();
  pcVar6 = (code *)swi(0x21);
  (*pcVar6)();
  *(undefined2 *)(puVar20 + -2) = 0x1be;
  FUN_1000_01a7();
  *(undefined2 *)(puVar20 + -2) = 3;
  *(undefined2 *)(puVar20 + -4) = 0x1000;
  puVar21 = (undefined2 *)(puVar20 + -6);
  *(undefined2 *)(puVar20 + -6) = 0x1c7;
  cVar10 = FUN_1000_010d();
  pcVar2 = pcVar24 + iVar13;
  *pcVar2 = *pcVar2 + cVar10;
  pcVar2 = pcVar24 + iVar13;
  *pcVar2 = *pcVar2 + cVar10;
  pcVar2 = pcVar24 + iVar13;
  *pcVar2 = *pcVar2 + cVar10;
  pcVar2 = pcVar24 + iVar13;
  *pcVar2 = *pcVar2 + cVar10;
  pcVar2 = pcVar24 + iVar13;
  *pcVar2 = *pcVar2 + cVar10;
                    // WARNING (jumptable): Read-only address (ram,0x000101c9) is written
                    // WARNING: Read-only address (ram,0x000101c9) is written
  uRam000101c9 = *puVar21;
                    // WARNING (jumptable): Read-only address (ram,0x000101cb) is written
                    // WARNING: Read-only address (ram,0x000101cb) is written
  uRam000101cb = puVar21[1];
                    // WARNING (jumptable): Read-only address (ram,0x000101cd) is written
                    // WARNING: Read-only address (ram,0x000101cd) is written
  uRam000101cd = 0;
  pcVar24 = (char *)(iRam00000075 + 2);
  uVar14 = 1;
  uVar11 = uRam0000007b;
  if (2 < bRam0000007d) {
    uVar14 = 0x7f;
    pcVar28 = pcVar24;
    do {
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar2 = pcVar28;
      pcVar28 = pcVar28 + 1;
    } while (*pcVar2 != '\0');
    if (uVar14 == 0) goto LAB_1000_0287;
    uVar14 = uVar14 ^ 0x7f;
    uVar11 = uRam00000077;
  }
  puVar27 = (undefined *)(*(byte *)((int)&DAT_126b_007f + 1) + 2 + uVar14 & 0xfffe);
  pcVar28 = (char *)((int)puVar21 + (2 - (int)puVar27));
  if (puVar27 <= puVar21 + 1) {
    *(uint *)(pcVar28 + -2) = uVar14;
    pcVar29 = pcVar28;
    while (uVar14 - 1 != 0) {
      pcVar4 = pcVar29;
      pcVar29 = pcVar29 + 1;
      pcVar2 = pcVar24;
      pcVar24 = pcVar24 + 1;
      *pcVar4 = *pcVar2;
      uVar14 = uVar14 - 1;
    }
    bVar32 = false;
    *pcVar29 = '\0';
    uVar33 = uVar14 == 0;
LAB_1000_0243:
    *(undefined2 *)(pcVar28 + -4) = 0x246;
    bVar15 = 0;
    FUN_1000_025f();
    iVar12 = extraout_DX_01;
    if (bVar32 || (bool)uVar33) {
      do {
        if (bVar32) {
          iVar12 = *(int *)(pcVar28 + -2) + iVar12;
          ppcVar23 = (char **)(pcVar28 + (uVar14 + 1) * -4);
          uRam0000006b = uVar14;
          ppcVar9 = ppcVar23;
          pcVar24 = extraout_DX;
          if (pcVar28 < (char *)((uVar14 + 1) * 4)) goto LAB_1000_0287;
          goto LAB_1000_02af;
        }
        *(undefined2 *)(pcVar28 + -4) = 0x24d;
        bVar15 = 0;
        FUN_1000_025f();
        iVar12 = extraout_DX_02;
      } while (!bVar32 && !(bool)uVar33);
    }
    if ((bVar15 != 0x20) && (bVar15 != 0xd)) goto code_r0x00010257;
    goto LAB_1000_025b;
  }
LAB_1000_0287:
  puVar27 = (undefined *)FUN_1000_01af();
  return puVar27;
code_r0x00010257:
  bVar32 = bVar15 < 9;
  uVar33 = bVar15 == 9;
  if ((bool)uVar33) {
LAB_1000_025b:
    bVar32 = false;
    uVar33 = true;
  }
  goto LAB_1000_0243;
  while( true ) {
    *ppcVar23 = pcVar28;
    ppcVar23[1] = extraout_DX;
    ppcVar23 = ppcVar23 + 2;
    do {
      pcVar2 = pcVar28;
      pcVar28 = pcVar28 + 1;
      bVar32 = *pcVar2 != '\0';
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0 && bVar32);
    ppcVar9 = ppcRam0000006d;
    pcVar24 = pcRam0000006f;
    if (bVar32) break;
LAB_1000_02af:
    pcRam0000006f = pcVar24;
    ppcRam0000006d = ppcVar9;
    if (iVar12 == 0) break;
  }
  *ppcVar23 = (char *)0x0;
  ppcVar23[1] = (char *)0x0;
                    // WARNING: Treating indirect jump as call
  puVar27 = (undefined *)(*(code *)0x0)();
  return puVar27;
}



void __cdecl16near FUN_1245_0003(void)

{
  return;
}



uint __cdecl16far
FUN_1245_0031(code *param_1,undefined2 param_2_00,code *param_2,undefined2 param_4_00,
             undefined2 param_3,undefined2 param_4,uint param_5,int param_6,int *param_7,
             undefined2 *param_8)

{
  int iVar1;
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
  iVar1 = local_6;
  do {
    local_6 = iVar1;
    iVar1 = local_6 + 1;
    uVar7 = (*param_1)(0x1245,param_3,param_4);
    if ((int)uVar7 < 0) goto LAB_1245_00cb;
    cVar5 = (char)uVar7;
    uVar7 = (uint)cVar5;
  } while (((uVar7 & 0x80) == 0) && ((*(byte *)(uVar7 + 0x155) & 1) != 0));
  iVar2 = param_6 + -1;
  iVar4 = iVar2;
  if (param_6 < 1) {
LAB_1245_00d2:
    local_6 = iVar1;
    param_6 = iVar4;
    local_4 = 0;
  }
  else {
    if (cVar5 != '+') {
      if (cVar5 == '-') {
        local_7 = '\x01';
        goto LAB_1245_007a;
      }
LAB_1245_0091:
      local_6 = iVar1;
      param_6 = iVar2;
      uVar13 = 0;
      uVar14 = 0;
      bVar6 = (byte)uVar7;
      iVar1 = local_6;
      if (param_5 == 0) {
        param_5 = 10;
        if (bVar6 != 0x30) {
LAB_1245_0120:
          uVar15 = bVar6 < 0x30;
          FUN_1245_0003();
          uVar13 = uVar7;
          iVar4 = param_6;
          if (!(bool)uVar15) goto LAB_1245_0137;
          goto LAB_1245_00d2;
        }
        if (0 < param_6) {
          local_6 = local_6 + 1;
          param_6 = param_6 + -1;
          uVar7 = (*param_1)(0x1245,param_3,param_4);
          param_5 = 8;
          bVar6 = (byte)uVar7;
          uVar15 = bVar6 < 0x78;
          if ((bVar6 == 0x78) || (uVar15 = bVar6 < 0x58, bVar6 == 0x58)) {
            param_5 = 0x10;
            goto LAB_1245_0137;
          }
LAB_1245_014a:
          while (FUN_1245_0003(), !(bool)uVar15) {
            uVar10 = (uint)((ulong)uVar13 * (ulong)param_5 >> 0x10);
            uVar8 = (uint)((ulong)uVar13 * (ulong)param_5);
            uVar13 = uVar7 + uVar8;
            uVar7 = (uint)CARRY2(uVar7,uVar8);
            uVar8 = uVar14 + uVar10;
            uVar15 = CARRY2(uVar14,uVar10) || CARRY2(uVar8,uVar7);
            uVar14 = uVar8 + uVar7;
            if (uVar14 != 0) goto LAB_1245_0167;
LAB_1245_0137:
            if (param_6 < 1) goto LAB_1245_0194;
            local_6 = local_6 + 1;
            param_6 = param_6 + -1;
            uVar7 = (*param_1)(0x1245,param_3,param_4);
          }
LAB_1245_0184:
          (*param_2)(0x1245,uVar7,param_3,param_4);
          local_6 = local_6 + -1;
        }
      }
      else {
        iVar4 = param_6;
        if ((0x24 < param_5) || (bVar9 = (byte)param_5, bVar9 < 2)) goto LAB_1245_00d2;
        if (bVar6 != 0x30) goto LAB_1245_0120;
        uVar15 = bVar9 < 0x10;
        if (bVar9 != 0x10) goto LAB_1245_0137;
        if (0 < param_6) {
          local_6 = local_6 + 1;
          param_6 = param_6 + -1;
          uVar7 = (*param_1)(0x1245,param_3,param_4);
          bVar6 = (byte)uVar7;
          uVar15 = bVar6 < 0x78;
          if (bVar6 == 0x78) goto LAB_1245_0137;
          uVar15 = bVar6 < 0x58;
          if (bVar6 == 0x58) goto LAB_1245_0137;
          goto LAB_1245_014a;
        }
      }
LAB_1245_0194:
      if (local_7 != '\0') {
        uVar13 = -uVar13;
      }
      goto LAB_1245_01a4;
    }
LAB_1245_007a:
    param_6 = param_6 + -2;
    iVar4 = param_6;
    if (iVar2 < 1) goto LAB_1245_00d2;
    uVar7 = (*param_1)(0x1245,param_3,param_4);
    iVar2 = param_6;
    iVar1 = local_6 + 2;
    if (-1 < (int)uVar7) goto LAB_1245_0091;
LAB_1245_00cb:
    local_6 = iVar1;
    local_4 = 0xffff;
  }
  (*param_2)(0x1245,uVar7,param_3,param_4);
  local_6 = local_6 + -1;
  uVar13 = 0;
LAB_1245_01a4:
  *param_7 = *param_7 + local_6;
  *param_8 = local_4;
  return uVar13;
  while( true ) {
    local_6 = local_6 + 1;
    param_6 = param_6 + -1;
    uVar7 = (*param_1)(0x1245,param_3,param_4);
    uVar8 = param_5;
    FUN_1245_0003();
    if ((bool)uVar15) goto LAB_1245_0184;
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
    if ((byte)(bVar6 + bVar16) != '\0') break;
LAB_1245_0167:
    if (param_6 < 1) goto LAB_1245_0194;
  }
  uVar13 = CONCAT11((local_7 != '\0') + -1,local_7 + -1);
  local_4 = 2;
  goto LAB_1245_01a4;
}



void __cdecl16far FUN_1262_0005(undefined2 param_1)

{
  FUN_1115_000d(param_1,0,0,1);
  return;
}


