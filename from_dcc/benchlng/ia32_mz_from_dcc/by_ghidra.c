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
  
  puVar13 = (undefined *)&DAT_11ef_0080;
                    // WARNING: Read-only address (ram,0x000101f8) is written
  uRam000101f8 = 0x11ef;
  pcVar6 = (code *)swi(0x21);
  uVar27 = (*pcVar6)();
  uVar26 = s_Turbo_C___Copyright__c__1988_Bor_11ef_0004._40_2_;
  iVar10 = DAT_11ef_0002;
  iVar11 = (int)((ulong)uVar27 >> 0x10);
  *(undefined2 *)&DAT_11ef_0092 = (int)uVar27;
  *(undefined2 *)&DAT_11ef_0090 = unaff_ES;
  *(undefined2 *)&DAT_11ef_008c = uVar26;
  *(int *)&DAT_11ef_00ac = iVar10;
  *(undefined2 *)&DAT_11ef_0096 = 0xffff;
  *(undefined2 *)(puVar13 + -2) = 0x2e;
  FUN_1000_0162();
  uVar27 = *(undefined4 *)&DAT_11ef_008a;
  uVar26 = (undefined2)((ulong)uVar27 >> 0x10);
  piVar22 = (int *)uVar27;
  uVar9 = 0x7fff;
  piVar23 = piVar22;
  do {
    if (((*piVar23 == 0x3738) && (iVar12 = piVar23[1], (char)iVar12 == '=')) &&
       (piVar1 = (int *)&DAT_11ef_0096, *piVar1 = *piVar1 + 1,
       ((byte)((uint)iVar12 >> 8) & 0xdf) == 0x59)) {
      piVar1 = (int *)&DAT_11ef_0096;
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
  *(int *)&DAT_11ef_008a = -(uVar9 | 0x8000);
  *(uint *)&DAT_11ef_008e = (int)piVar22 * 2 + 8U & 0xfff8;
  uVar20 = iVar10 - iVar11;
  uVar9 = *(uint *)&DAT_11ef_0224;
  if (uVar9 < 0x200) {
    uVar9 = 0x200;
    *(undefined2 *)&DAT_11ef_0224 = 0x200;
  }
  if ((uVar9 < 0xf9ea) && (puVar2 = (uint *)&DAT_11ef_0222, !CARRY2(uVar9 + 0x616,*puVar2))) {
    bVar8 = 4;
    uVar9 = (uVar9 + 0x616 + *puVar2 >> 4) + 1;
    if (uVar9 <= uVar20) {
      if (((*(int *)&DAT_11ef_0224 == 0) || (*(int *)&DAT_11ef_0222 == 0)) &&
         (uVar9 = 0x1000, uVar20 < 0x1001)) {
        uVar9 = uVar20;
      }
      iVar12 = uVar9 + iVar11;
      *(int *)&DAT_11ef_00a4 = iVar12;
      *(int *)&DAT_11ef_00a8 = iVar12;
      iVar12 = iVar12 - *(int *)&DAT_11ef_0090;
      piVar14 = (int *)(puVar13 + -2);
      *(uint *)(puVar13 + -2) = uVar9;
      pcVar6 = (code *)swi(0x21);
      (*pcVar6)();
      iVar24 = *piVar14 << (bVar8 & 0x1f);
      puVar25 = (undefined *)&DAT_11ef_05d0;
      for (iVar10 = 0x46; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar4 = puVar25;
        puVar25 = puVar25 + 1;
        *puVar4 = 0;
      }
      *(undefined2 *)(iVar24 + -2) = 0x1000;
      pcVar5 = *(code **)&DAT_11ef_05c2;
      puVar15 = (undefined *)(iVar24 + -4);
      *(undefined2 *)(iVar24 + -4) = 0xf8;
      (*pcVar5)();
      puVar16 = puVar15 + -2;
      *(undefined2 *)(puVar15 + -2) = 0xfb;
      FUN_1000_03ca();
      *(undefined2 *)(puVar16 + -2) = 0xfe;
      FUN_1000_04b5();
      pcVar6 = (code *)swi(0x1a);
      (*pcVar6)();
      *(undefined2 *)&DAT_11ef_0098 = extraout_DX_00;
      *(int *)&DAT_11ef_009a = iVar10;
      pcVar5 = *(code **)&DAT_11ef_05c6;
      puVar17 = puVar16 + -2;
      *(undefined2 *)(puVar16 + -2) = 0x10e;
      (*pcVar5)();
      *(undefined2 *)(puVar17 + -2) = *(undefined2 *)&DAT_11ef_0088;
      *(undefined2 *)(puVar17 + -4) = *(undefined2 *)&DAT_11ef_0086;
      *(undefined2 *)(puVar17 + -6) = *(undefined2 *)&DAT_11ef_0084;
      *(undefined2 *)(puVar17 + -8) = 0x11d;
      uVar26 = FUN_1000_01fa();
      *(undefined2 *)(puVar17 + -8) = uVar26;
      *(undefined2 *)(puVar17 + -10) = 0x121;
      FUN_1000_0395();
      *(undefined2 *)(puVar17 + -10) = 0x129;
      FUN_1000_01a5();
      *(undefined2 *)(puVar17 + -10) = 0x1000;
      pcVar6 = pcRam000005c4;
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
      *(undefined **)(puVar19 + -0x18) = puVar19 + -6;
      *(undefined2 *)(puVar19 + -0x1a) = 0x194;
      *(undefined2 *)(puVar19 + -0x1c) = 0x20b;
      FUN_1000_1768();
      *(undefined2 *)(puVar19 + -0x18) = *(undefined2 *)(puVar19 + -4);
      *(undefined2 *)(puVar19 + -0x1a) = *(undefined2 *)(puVar19 + -6);
      *(undefined2 *)(puVar19 + -0x1c) = 0x198;
      *(undefined2 *)(puVar19 + -0x1e) = 0x21a;
      FUN_1000_0edf();
      *(undefined **)(puVar19 + -0x18) = puVar19 + -0x16;
      *(undefined2 *)(puVar19 + -0x1a) = 0x1b2;
      *(undefined2 *)(puVar19 + -0x1c) = 0x228;
      FUN_1000_1768();
      *(undefined **)(puVar19 + -0x18) = puVar19 + -0x12;
      *(undefined2 *)(puVar19 + -0x1a) = 0x1b6;
      *(undefined2 *)(puVar19 + -0x1c) = 0x235;
      FUN_1000_1768();
      *(undefined2 *)(puVar19 + -8) = 0;
      *(undefined2 *)(puVar19 + -10) = 1;
      while( true ) {
        if ((*(int *)(puVar19 + -4) <= *(int *)(puVar19 + -8)) &&
           ((*(int *)(puVar19 + -4) < *(int *)(puVar19 + -8) ||
            (*(uint *)(puVar19 + -6) <= *(uint *)(puVar19 + -10) &&
             *(uint *)(puVar19 + -10) != *(uint *)(puVar19 + -6))))) break;
        *(undefined2 *)(puVar19 + -0xc) = 0;
        *(undefined2 *)(puVar19 + -0xe) = 1;
        while ((*(int *)(puVar19 + -0xc) < 0 ||
               ((*(int *)(puVar19 + -0xc) < 1 && (*(uint *)(puVar19 + -0xe) < 0x29))))) {
          uVar20 = *(uint *)(puVar19 + -0x16) + *(uint *)(puVar19 + -0x12);
          uVar9 = *(uint *)(puVar19 + -0xe);
          *(uint *)(puVar19 + -0x14) =
               *(int *)(puVar19 + -0x14) + *(int *)(puVar19 + -0x10) +
               (uint)CARRY2(*(uint *)(puVar19 + -0x16),*(uint *)(puVar19 + -0x12)) +
               *(int *)(puVar19 + -0xc) + (uint)CARRY2(uVar20,*(uint *)(puVar19 + -0xe));
          *(uint *)(puVar19 + -0x16) = uVar20 + uVar9;
          uVar9 = *(uint *)(puVar19 + -0x14);
          uVar20 = *(uint *)(puVar19 + -0x16);
          *(int *)(puVar19 + -0x10) = (int)uVar9 >> 1;
          *(uint *)(puVar19 + -0x12) = uVar20 >> 1 | (uint)((uVar9 & 1) != 0) << 0xf;
          *(undefined2 *)(puVar19 + -0x18) = 0;
          *(undefined2 *)(puVar19 + -0x1a) = 10;
          *(undefined2 *)(puVar19 + -0x1c) = *(undefined2 *)(puVar19 + -0x10);
          *(undefined2 *)(puVar19 + -0x1e) = *(undefined2 *)(puVar19 + -0x12);
          *(undefined2 *)(puVar19 + -0x20) = 0x1000;
          *(undefined2 *)(puVar19 + -0x22) = 0x28b;
          uVar27 = FUN_1000_1deb();
          *(int *)(puVar19 + -0x14) = (int)((ulong)uVar27 >> 0x10);
          *(int *)(puVar19 + -0x16) = (int)uVar27;
          if ((*(int *)(puVar19 + -0x10) == *(int *)(puVar19 + -0xc)) &&
             (*(int *)(puVar19 + -0x12) == *(int *)(puVar19 + -0xe))) {
            uVar26 = 1;
          }
          else {
            uVar26 = 0;
          }
          *(undefined2 *)(puVar19 + -0x14) = 0;
          *(undefined2 *)(puVar19 + -0x16) = uVar26;
          uVar9 = *(uint *)(puVar19 + -0x16);
          uVar20 = *(uint *)(puVar19 + -0xe);
          *(uint *)(puVar19 + -0x10) = *(uint *)(puVar19 + -0x14) | *(uint *)(puVar19 + -0xc);
          *(uint *)(puVar19 + -0x12) = uVar9 | uVar20;
          uVar9 = *(uint *)(puVar19 + -0x12);
          uVar20 = *(uint *)(puVar19 + -0x10);
          *(undefined2 *)(puVar19 + -0x14) = 0;
          *(uint *)(puVar19 + -0x16) = (uint)((uVar9 | uVar20) == 0);
          uVar9 = *(uint *)(puVar19 + -0x16);
          uVar20 = *(uint *)(puVar19 + -0xe);
          *(uint *)(puVar19 + -0x10) =
               *(int *)(puVar19 + -0x14) + *(int *)(puVar19 + -0xc) +
               (uint)CARRY2(uVar9,*(uint *)(puVar19 + -0xe));
          *(uint *)(puVar19 + -0x12) = uVar9 + uVar20;
          if ((*(int *)(puVar19 + -0x10) < *(int *)(puVar19 + -0xc)) ||
             ((*(int *)(puVar19 + -0x10) <= *(int *)(puVar19 + -0xc) &&
              (*(uint *)(puVar19 + -0x12) < *(uint *)(puVar19 + -0xe) ||
               *(uint *)(puVar19 + -0x12) == *(uint *)(puVar19 + -0xe))))) {
            uVar26 = 0;
          }
          else {
            uVar26 = 1;
          }
          *(undefined2 *)(puVar19 + -0x14) = 0;
          *(undefined2 *)(puVar19 + -0x16) = uVar26;
          puVar2 = (uint *)(puVar19 + -0xe);
          uVar9 = *puVar2;
          *puVar2 = *puVar2 + 1;
          *(uint *)(puVar19 + -0xc) = *(int *)(puVar19 + -0xc) + (uint)(0xfffe < uVar9);
        }
        puVar2 = (uint *)(puVar19 + -10);
        uVar9 = *puVar2;
        *puVar2 = *puVar2 + 1;
        *(uint *)(puVar19 + -8) = *(int *)(puVar19 + -8) + (uint)(0xfffe < uVar9);
      }
      *(undefined2 *)(puVar19 + -0x18) = *(undefined2 *)(puVar19 + -0x14);
      *(undefined2 *)(puVar19 + -0x1a) = *(undefined2 *)(puVar19 + -0x16);
      *(undefined2 *)(puVar19 + -0x1c) = 0x1ba;
      *(undefined2 *)(puVar19 + -0x1e) = 0x352;
      FUN_1000_0edf();
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
  uint uVar5;
  int iVar6;
  int in_BX;
  byte *pbVar7;
  bool bVar8;
  uint uStack_12;
  uint uStack_10;
  uint uStack_e;
  uint uStack_c;
  uint uStack_a;
  uint uStack_8;
  uint uStack_6;
  int iStack_4;
  uint uStack_2;
  
  uStack_2 = 0x129;
  FUN_1000_01a5();
  uStack_2 = 0x1000;
  iStack_4 = 0x12e;
  (*pcRam000005c4)();
  iVar4 = 0;
  pbVar7 = (byte *)0x0;
  iVar6 = 0x2f;
  do {
    pbVar1 = pbVar7;
    iVar4 = CONCAT11((char)((uint)iVar4 >> 8) + CARRY1((byte)iVar4,*pbVar1),(byte)iVar4 + *pbVar1);
    pbVar7 = pbVar7 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
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
  pbVar1 = pbVar7 + in_BX;
  *pbVar1 = *pbVar1 + cVar3;
  param_1 = (undefined *)register0x00000010;
  FUN_1000_1768(0x194,&uStack_2);
  FUN_1000_0edf(0x198,uStack_2,0x1f8);
  FUN_1000_1768(0x1b2,&uStack_12);
  FUN_1000_1768(0x1b6,&uStack_e);
  iStack_4 = 0;
  for (uStack_6 = 1; (iStack_4 < 0x1f8 || ((iStack_4 < 0x1f9 && (uStack_6 <= uStack_2))));
      uStack_6 = uStack_6 + 1) {
    uStack_8 = 0;
    for (uStack_a = 1; ((int)uStack_8 < 0 || (((int)uStack_8 < 1 && (uStack_a < 0x29))));
        uStack_a = uStack_a + 1) {
      bVar8 = CARRY2(uStack_12,uStack_e);
      uStack_e = uStack_12 + uStack_e;
      uStack_12 = uStack_e + uStack_a;
      uStack_10 = uStack_10 + uStack_c + (uint)bVar8 + uStack_8 + (uint)CARRY2(uStack_e,uStack_a);
      uStack_c = (int)uStack_10 >> 1;
      uStack_e = uStack_12 >> 1 | (uint)((uStack_10 & 1) != 0) << 0xf;
      FUN_1000_1deb(uStack_e,uStack_c,10,0);
      if ((uStack_c == uStack_8) && (uStack_e == uStack_a)) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
      uVar5 = (uint)((uVar5 | uStack_a | uStack_8) == 0);
      uStack_e = uVar5 + uStack_a;
      uStack_c = uStack_8 + CARRY2(uVar5,uStack_a);
      if (((int)uStack_c < (int)uStack_8) ||
         (((int)uStack_c <= (int)uStack_8 && (uStack_e <= uStack_a)))) {
        uStack_12 = 0;
      }
      else {
        uStack_12 = 1;
      }
      uStack_10 = 0;
      uStack_8 = uStack_8 + (0xfffe < uStack_a);
    }
    iStack_4 = iStack_4 + (uint)(0xfffe < uStack_6);
  }
  FUN_1000_0edf(0x1ba,uStack_12,uStack_10);
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
  DAT_11ef_0076 = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_11ef_0078 = in_BX;
  DAT_11ef_007a = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_11ef_007c = in_BX;
  DAT_11ef_007e = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_11ef_0080 = in_BX;
  DAT_11ef_0082 = unaff_ES;
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
  DAT_11ef_0096 = 0;
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
  uint uVar3;
  int in_BX;
  int unaff_SI;
  bool bVar4;
  uint uStack_16;
  uint uStack_14;
  uint uStack_12;
  uint uStack_10;
  uint uStack_e;
  uint uStack_c;
  uint uStack_a;
  int iStack_8;
  uint uStack_6;
  int iStack_4;
  
  FUN_1000_01da();
  iStack_4 = 0x1f8;
  cVar2 = FUN_1000_0121();
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + cVar2;
  FUN_1000_1768(0x194,&uStack_6);
  FUN_1000_0edf(0x198,uStack_6,iStack_4);
  FUN_1000_1768(0x1b2,&uStack_16);
  FUN_1000_1768(0x1b6,&uStack_12);
  iStack_8 = 0;
  for (uStack_a = 1; (iStack_8 < iStack_4 || ((iStack_8 <= iStack_4 && (uStack_a <= uStack_6))));
      uStack_a = uStack_a + 1) {
    uStack_c = 0;
    for (uStack_e = 1; ((int)uStack_c < 0 || (((int)uStack_c < 1 && (uStack_e < 0x29))));
        uStack_e = uStack_e + 1) {
      bVar4 = CARRY2(uStack_16,uStack_12);
      uStack_12 = uStack_16 + uStack_12;
      uStack_16 = uStack_12 + uStack_e;
      uStack_14 = uStack_14 + uStack_10 + (uint)bVar4 + uStack_c + (uint)CARRY2(uStack_12,uStack_e);
      uStack_10 = (int)uStack_14 >> 1;
      uStack_12 = uStack_16 >> 1 | (uint)((uStack_14 & 1) != 0) << 0xf;
      FUN_1000_1deb(uStack_12,uStack_10,10,0);
      if ((uStack_10 == uStack_c) && (uStack_12 == uStack_e)) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
      uVar3 = (uint)((uVar3 | uStack_e | uStack_c) == 0);
      uStack_12 = uVar3 + uStack_e;
      uStack_10 = uStack_c + CARRY2(uVar3,uStack_e);
      if (((int)uStack_10 < (int)uStack_c) ||
         (((int)uStack_10 <= (int)uStack_c && (uStack_12 <= uStack_e)))) {
        uStack_16 = 0;
      }
      else {
        uStack_16 = 1;
      }
      uStack_14 = 0;
      uStack_c = uStack_c + (0xfffe < uStack_e);
    }
    iStack_8 = iStack_8 + (uint)(0xfffe < uStack_a);
  }
  FUN_1000_0edf(0x1ba,uStack_16,uStack_14);
  return;
}



void __cdecl16near FUN_1000_01fa(void)

{
  uint uVar1;
  bool bVar2;
  uint local_16;
  uint local_14;
  uint local_12;
  uint local_10;
  uint local_e;
  uint local_c;
  uint local_a;
  int local_8;
  uint local_6;
  int local_4;
  
  FUN_1000_1768(0x194,&local_6);
  FUN_1000_0edf(0x198,local_6,local_4);
  FUN_1000_1768(0x1b2,&local_16);
  FUN_1000_1768(0x1b6,&local_12);
  local_8 = 0;
  for (local_a = 1; (local_8 < local_4 || ((local_8 <= local_4 && (local_a <= local_6))));
      local_a = local_a + 1) {
    local_c = 0;
    for (local_e = 1; ((int)local_c < 0 || (((int)local_c < 1 && (local_e < 0x29))));
        local_e = local_e + 1) {
      bVar2 = CARRY2(local_16,local_12);
      local_12 = local_16 + local_12;
      local_16 = local_12 + local_e;
      local_14 = local_14 + local_10 + (uint)bVar2 + local_c + (uint)CARRY2(local_12,local_e);
      local_10 = (int)local_14 >> 1;
      local_12 = local_16 >> 1 | (uint)((local_14 & 1) != 0) << 0xf;
      FUN_1000_1deb(local_12,local_10,10,0);
      if ((local_10 == local_c) && (local_12 == local_e)) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
      uVar1 = (uint)((uVar1 | local_e | local_c) == 0);
      local_12 = uVar1 + local_e;
      local_10 = local_c + CARRY2(uVar1,local_e);
      if (((int)local_10 < (int)local_c) ||
         (((int)local_10 <= (int)local_c && (local_12 <= local_e)))) {
        local_16 = 0;
      }
      else {
        local_16 = 1;
      }
      local_14 = 0;
      local_c = local_c + (0xfffe < local_e);
    }
    local_8 = local_8 + (uint)(0xfffe < local_a);
  }
  FUN_1000_0edf(0x1ba,local_16,local_14);
  return;
}



undefined2 FUN_1000_0359(uint param_1)

{
  if ((int)param_1 < 0) {
    if (-param_1 < 0x23 || param_1 == 0xffdd) {
      DAT_11ef_0094 = -param_1;
      DAT_11ef_01c0 = 0xffff;
      return 0xffff;
    }
  }
  else if (param_1 < 0x59) goto LAB_1000_036c;
  param_1 = 0x57;
LAB_1000_036c:
  DAT_11ef_01c0 = param_1;
  DAT_11ef_0094 = (int)*(char *)(param_1 + 0x1c2);
  return 0xffff;
}



void __cdecl16near FUN_1000_0394(void)

{
  return;
}



void __cdecl16near FUN_1000_0395(void)

{
  int iVar1;
  
  while (iVar1 = DAT_11ef_0226 + -1, DAT_11ef_0226 != 0) {
    DAT_11ef_0226 = iVar1;
    (**(code **)(iVar1 * 2 + 0x5d0))();
  }
  DAT_11ef_0226 = iVar1;
  (*DAT_11ef_021c)();
  (*DAT_11ef_021e)();
  (*DAT_11ef_0220)();
  FUN_1000_0121();
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack

void FUN_1000_03ca(void)

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
  
  DAT_1000_03c6 = 0x11ef;
  pcVar9 = (char *)(DAT_11ef_008a + 2);
  uVar6 = 1;
  uVar11 = DAT_11ef_0090;
  DAT_1000_03c4 = in_stack_00000000;
  if (2 < DAT_11ef_0092) {
    uVar6 = 0x7f;
    pcVar10 = pcVar9;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar1 = pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (*pcVar1 != '\0');
    if (uVar6 == 0) goto LAB_1000_047b;
    uVar6 = uVar6 ^ 0x7f;
    uVar11 = DAT_11ef_008c;
  }
  puVar5 = (undefined *)(*(byte *)&DAT_11ef_0080 + 2 + uVar6 & 0xfffe);
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
LAB_1000_0437:
    *(undefined2 *)((int)auStack_4 + iVar3) = 0x43a;
    bVar4 = 0;
    FUN_1000_0453();
    iVar7 = extraout_DX;
    if (bVar12 || (bool)uVar13) {
      do {
        uVar11 = DAT_1000_03c6;
        if (bVar12) {
          iVar7 = *(int *)((int)auStack_4 + iVar3 + 2) + iVar7;
          *(uint *)&DAT_11ef_0084 = uVar6;
          ppcVar8 = (char **)(&stack0x0000 + (uVar6 + 1) * -2);
          if (&stack0x0000 < (undefined *)((uVar6 + 1) * 2)) goto LAB_1000_047b;
          *(int **)&DAT_11ef_0086 = (int *)ppcVar8;
          goto LAB_1000_049b;
        }
        *(undefined2 *)((int)auStack_4 + iVar3) = 0x441;
        bVar4 = 0;
        FUN_1000_0453();
        iVar7 = extraout_DX_00;
      } while (!bVar12 && !(bool)uVar13);
    }
    if ((bVar4 != 0x20) && (bVar4 != 0xd)) goto code_r0x0001044b;
    goto LAB_1000_044f;
  }
LAB_1000_047b:
  FUN_1000_01e2();
  return;
code_r0x0001044b:
  bVar12 = bVar4 < 9;
  uVar13 = bVar4 == 9;
  if ((bool)uVar13) {
LAB_1000_044f:
    bVar12 = false;
    uVar13 = true;
  }
  goto LAB_1000_0437;
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
LAB_1000_049b:
    if (iVar7 == 0) break;
  }
  *ppcVar8 = (char *)0x0;
                    // WARNING: Could not recover jumptable at 0x000104b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_1000_03c4)();
  return;
}



int __cdecl16near FUN_1000_0453(void)

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



void __cdecl16near FUN_1000_04b5(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined2 uVar3;
  char *pcVar4;
  char **ppcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar6 = DAT_11ef_008a;
  pcVar4 = (char *)FUN_1000_0604();
  uVar3 = DAT_11ef_008c;
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
    ppcVar5 = (char **)FUN_1000_0604(DAT_11ef_008e);
    DAT_11ef_0088 = ppcVar5;
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



bool __cdecl16near FUN_1000_04ff(undefined2 param_1)

{
  bool bVar1;
  
  bVar1 = DAT_11ef_0226 != 0x20;
  if (bVar1) {
    *(undefined2 *)(DAT_11ef_0226 * 2 + 0x5d0) = param_1;
    DAT_11ef_0226 = DAT_11ef_0226 + 1;
  }
  return !bVar1;
}



void __cdecl16near FUN_1000_0525(int param_1)

{
  int iVar1;
  
  DAT_11ef_0612 = *(int *)(param_1 + 6);
  if (DAT_11ef_0612 == param_1) {
    DAT_11ef_0612 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    *(int *)(DAT_11ef_0612 + 4) = iVar1;
    *(int *)(iVar1 + 6) = DAT_11ef_0612;
  }
  return;
}



int * __cdecl16near FUN_1000_0553(int *param_1,int param_2)

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
  if (DAT_11ef_0610 != param_1) {
    *(int **)((int)piVar3 + param_2 + 2) = piVar3;
    piVar2 = DAT_11ef_0610;
  }
  DAT_11ef_0610 = piVar2;
  return piVar3 + 2;
}



int * __cdecl16near FUN_1000_058d(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_1000_069b(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar1[1] = (int)DAT_11ef_0610;
    *piVar1 = param_1 + 1;
    piVar2 = piVar1 + 2;
    DAT_11ef_0610 = piVar1;
  }
  return piVar2;
}



int * __cdecl16near FUN_1000_05ca(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1000_069b(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar1 = (int *)0x0;
  }
  else {
    DAT_11ef_0610 = piVar1;
    DAT_11ef_0614 = piVar1;
    *piVar1 = param_1 + 1;
    piVar1 = piVar1 + 2;
  }
  return piVar1;
}



uint * __cdecl16near FUN_1000_0604(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  if ((param_1 == 0) || (0xfff4 < param_1)) {
    puVar2 = (uint *)0x0;
  }
  else {
    uVar3 = param_1 + 0xb & 0xfff8;
    if (DAT_11ef_0614 == 0) {
      puVar2 = (uint *)FUN_1000_05ca(uVar3);
    }
    else {
      puVar2 = DAT_11ef_0612;
      if (DAT_11ef_0612 != (uint *)0x0) {
        do {
          if (uVar3 + 0x28 <= *puVar2) {
            puVar2 = (uint *)FUN_1000_0553(puVar2,uVar3);
            return puVar2;
          }
          if (uVar3 <= *puVar2) {
            FUN_1000_0525(puVar2);
            puVar1 = puVar2;
            *puVar1 = *puVar1 + 1;
            return puVar2 + 2;
          }
          puVar2 = (uint *)puVar2[3];
        } while (puVar2 != DAT_11ef_0612);
      }
      puVar2 = (uint *)FUN_1000_058d(uVar3);
    }
  }
  return puVar2;
}



undefined2 __cdecl16near FUN_1000_0677(undefined *param_1)

{
  undefined2 uVar1;
  undefined auStack_102 [256];
  
  if (param_1 < auStack_102) {
    DAT_11ef_009e = param_1;
    uVar1 = 0;
  }
  else {
    DAT_11ef_0094 = 8;
    uVar1 = 0xffff;
  }
  return uVar1;
}



uint __cdecl16near FUN_1000_069b(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 + DAT_11ef_009e;
  if ((param_2 + (uint)CARRY2(param_1,DAT_11ef_009e) + (uint)(0xfeff < uVar1) == 0) &&
     ((undefined *)(uVar1 + 0x100) < &stack0xfffe)) {
    LOCK();
    UNLOCK();
    uVar2 = DAT_11ef_009e;
    DAT_11ef_009e = uVar1;
  }
  else {
    DAT_11ef_0094 = 8;
    uVar2 = 0xffff;
  }
  return uVar2;
}



void __cdecl16near FUN_1000_06cf(undefined2 param_1)

{
  FUN_1000_0677(param_1);
  return;
}



void __cdecl16near FUN_1000_06dd(int param_1)

{
  FUN_1000_069b(param_1,param_1 >> 0xf);
  return;
}



int FUN_1000_06ef(int *param_1)

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



undefined2 __cdecl16near FUN_1000_0736(int *param_1,uint param_2,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  
  iVar2 = FUN_1000_0e61(param_1);
  if (iVar2 == 0) {
    if ((param_4 == 1) && (0 < *param_1)) {
      uVar4 = FUN_1000_06ef(param_1);
      bVar5 = param_2 < uVar4;
      param_2 = param_2 - uVar4;
      param_3 = (param_3 - ((int)uVar4 >> 0xf)) - (uint)bVar5;
    }
    puVar1 = (uint *)(param_1 + 1);
    *puVar1 = *puVar1 & 0xfe5f;
    *param_1 = 0;
    param_1[5] = param_1[4];
    lVar6 = FUN_1000_0cbc((int)*(char *)(param_1 + 2),param_2,param_3,param_4);
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



undefined4 __cdecl16near FUN_1000_079a(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_1000_0e61(param_1);
  if (iVar1 == 0) {
    uVar3 = FUN_1000_1e85((int)*(char *)(param_1 + 2));
    iVar1 = (int)((ulong)uVar3 >> 0x10);
    if (0 < *param_1) {
      uVar2 = FUN_1000_06ef(param_1);
      uVar3 = CONCAT22((iVar1 - ((int)uVar2 >> 0xf)) - (uint)((uint)uVar3 < uVar2),
                       (uint)uVar3 - uVar2);
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



void __cdecl16near FUN_1000_07ef(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x32a;
  iVar2 = 0x14;
  while (iVar2 != 0) {
    if ((*(uint *)(iVar1 + 2) & 0x300) == 0x300) {
      FUN_1000_0e61(iVar1);
    }
    iVar1 = iVar1 + 0x10;
    iVar2 = iVar2 + -1;
  }
  return;
}



undefined2 FUN_1000_0816(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  if ((param_1[1] & 0x200U) != 0) {
    FUN_1000_07ef();
  }
  iVar3 = param_1[3];
  iVar2 = param_1[4];
  param_1[5] = iVar2;
  iVar3 = FUN_1000_0a8b((int)*(char *)(param_1 + 2),iVar2,iVar3);
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



void __cdecl16near FUN_1000_0873(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  *piVar1 = *piVar1 + 1;
  FUN_1000_0886(param_1);
  return;
}



uint __cdecl16near FUN_1000_0886(int *param_1)

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
      if ((DAT_11ef_0492 != 0) || (param_1 != (int *)0x32a)) {
        while( true ) {
          if ((param_1[1] & 0x200U) != 0) {
            FUN_1000_07ef();
          }
          iVar3 = FUN_1000_0b47((int)*(char *)(param_1 + 2),&local_3,1);
          if (iVar3 != 1) break;
          if ((local_3 != 0xd) || ((param_1[1] & 0x40U) != 0)) {
            puVar2 = (uint *)(param_1 + 1);
            *puVar2 = *puVar2 & 0xffdf;
            return (uint)local_3;
          }
        }
        iVar3 = FUN_1000_0df3((int)*(char *)(param_1 + 2));
        if (iVar3 == 1) {
          param_1[1] = param_1[1] & 0xfe7fU | 0x20;
        }
        else {
          puVar2 = (uint *)(param_1 + 1);
          *puVar2 = *puVar2 | 0x10;
        }
        return 0xffff;
      }
      iVar3 = FUN_1000_0986((int)cRam0001221e);
      if (iVar3 == 0) {
        DAT_11ef_032c = DAT_11ef_032c & 0xfdff;
      }
      FUN_1000_0998(0x32a,0,(DAT_11ef_032c & 0x200) != 0,0x200);
    }
    iVar3 = FUN_1000_0816(param_1);
    if (iVar3 != 0) {
      return 0xffff;
    }
  }
  puVar2 = (uint *)(param_1 + 1);
  *puVar2 = *puVar2 | 0x10;
  return 0xffff;
}



uint __cdecl16near FUN_1000_0986(void)

{
  code *pcVar1;
  uint extraout_DX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return extraout_DX & 0x80;
}



undefined2 __cdecl16near FUN_1000_0998(int *param_1,int param_2,int param_3,uint param_4)

{
  uint *puVar1;
  undefined2 uVar2;
  
  if ((((int *)param_1[7] == param_1) && (param_3 < 3)) && (param_4 < 0x8000)) {
    if ((DAT_11ef_0494 == 0) && (param_1 == (int *)0x33a)) {
      DAT_11ef_0494 = 1;
    }
    else if ((DAT_11ef_0492 == 0) && (param_1 == (int *)0x32a)) {
      DAT_11ef_0492 = 1;
    }
    if (*param_1 != 0) {
      FUN_1000_0736(param_1,0,0,1);
    }
    if ((param_1[1] & 4U) != 0) {
      FUN_1000_1741(param_1[4]);
    }
    puVar1 = (uint *)(param_1 + 1);
    *puVar1 = *puVar1 & 0xfff3;
    param_1[3] = 0;
    param_1[4] = (int)param_1 + 5;
    param_1[5] = (int)param_1 + 5;
    if ((param_3 != 2) && (param_4 != 0)) {
      DAT_11ef_021c = 0xa6a;
      if (param_2 == 0) {
        param_2 = FUN_1000_0604(param_4);
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



int __cdecl16near FUN_1000_0a8b(int param_1,char *param_2,int param_3)

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
  
  if ((param_3 + 1U < 2) || ((*(uint *)(param_1 * 2 + 0x46a) & 0x200) != 0)) {
    iVar4 = 0;
  }
  else {
    do {
      iVar4 = FUN_1000_0b47(param_1,param_2,param_3);
      if (iVar4 + 1U < 2) {
        return iVar4;
      }
      pcVar6 = param_2;
      pcVar3 = param_2;
      if ((*(uint *)(param_1 * 2 + 0x46a) & 0x8000) != 0) {
        return iVar4;
      }
      do {
        while( true ) {
          pcVar7 = pcVar3;
          cVar2 = *pcVar6;
          pcVar5 = param_2;
          if (cVar2 == '\x1a') {
            FUN_1000_0cbc(param_1,-iVar4,-(uint)(iVar4 != 0),2);
            puVar1 = (uint *)(param_1 * 2 + 0x46a);
            *puVar1 = *puVar1 | 0x200;
            goto LAB_1000_0b3b;
          }
          if (cVar2 == '\r') break;
          *pcVar7 = cVar2;
          iVar4 = iVar4 + -1;
          pcVar6 = pcVar6 + 1;
          pcVar3 = pcVar7 + 1;
          if (iVar4 == 0) goto LAB_1000_0b13;
        }
        iVar4 = iVar4 + -1;
        pcVar6 = pcVar6 + 1;
        pcVar3 = pcVar7;
      } while (iVar4 != 0);
      uVar8 = 0x11ef;
      FUN_1000_0b47(param_1,&local_3,1);
      *pcVar7 = local_3;
LAB_1000_0b13:
      pcVar7 = pcVar7 + 1;
    } while (pcVar7 == pcVar5);
LAB_1000_0b3b:
    iVar4 = (int)pcVar7 - (int)pcVar5;
  }
  return iVar4;
}



void __cdecl16near FUN_1000_0b47(void)

{
  code *pcVar1;
  undefined in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    FUN_1000_0359();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00010c0d)
// WARNING: Removing unreachable block (ram,0x00010c5b)

int __cdecl16near FUN_1000_0b63(int param_1,char *param_2,int param_3)

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
  else if ((*(uint *)(param_1 * 2 + 0x46a) & 0x8000) == 0) {
    puVar1 = (uint *)(param_1 * 2 + 0x46a);
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
        iVar4 = FUN_1000_0c76(param_1,local_84,iVar6);
        if (iVar4 != iVar6) {
          return ((param_3 - local_8a) + iVar4) - iVar6;
        }
        pcVar5 = local_84;
      }
    }
    iVar4 = (int)pcVar5 - (int)local_84;
    if ((iVar4 != 0) && (iVar6 = FUN_1000_0c76(param_1,local_84,iVar4), iVar6 != iVar4)) {
      param_3 = (param_3 + iVar6) - iVar4;
    }
  }
  else {
    param_3 = FUN_1000_0c76(param_1,param_2,param_3);
  }
  return param_3;
}



undefined2 __cdecl16near FUN_1000_0c76(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined uVar4;
  
  uVar4 = 0;
  if ((*(uint *)(param_1 * 2 + 0x46a) & 0x800) != 0) {
    uVar4 = 0;
    FUN_1000_0cbc(param_1,0,0,2);
  }
  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  if ((bool)uVar4) {
    uVar3 = FUN_1000_0359();
  }
  else {
    puVar1 = (uint *)(param_1 * 2 + 0x46a);
    *puVar1 = *puVar1 | 0x1000;
  }
  return uVar3;
}



void __cdecl16near FUN_1000_0cbc(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  
  puVar1 = (uint *)(param_1 * 2 + 0x46a);
  bVar3 = false;
  *puVar1 = *puVar1 & 0xfdff;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (bVar3) {
    FUN_1000_0359();
  }
  return;
}



char * FUN_1000_0ce7(char param_1,char param_2,uint param_3,char *param_4,uint param_5,uint param_6)

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
    if (param_6 == 0) goto LAB_1000_0d31;
    do {
      uVar3 = (ulong)param_6;
      param_6 = param_6 / param_3;
      uVar3 = uVar3 % (ulong)param_3 << 0x10 | (ulong)param_5;
      param_5 = (uint)(uVar3 / param_3);
      *pbVar6 = (byte)(uVar3 % (ulong)param_3);
      pbVar6 = pbVar6 + 1;
    } while (param_6 != 0);
    while (param_5 != 0) {
LAB_1000_0d31:
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



void __cdecl16near FUN_1000_0d66(int param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 10) {
    iVar1 = param_1 >> 0xf;
  }
  else {
    iVar1 = 0;
  }
  FUN_1000_0ce7(0x61,1,param_3,param_2,param_1,iVar1);
  return;
}



void __cdecl16near
FUN_1000_0d8f(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  uint in_AX;
  
  FUN_1000_0ce7(0x61,in_AX & 0xff00,param_4,param_3,param_1,param_2);
  return;
}



void __cdecl16near
FUN_1000_0dab(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  FUN_1000_0ce7(0x61,param_4 == 10,param_4,param_3,param_1,param_2);
  return;
}



void FUN_1000_0dd2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_1000_01e2();
  return;
}



void FUN_1000_0dd7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_1000_01e2();
  return;
}



// WARNING: Removing unreachable block (ram,0x00010e49)

undefined2 __cdecl16near FUN_1000_0df3(int param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  bool bVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined2 uVar7;
  
  bVar3 = false;
  if ((*(uint *)(param_1 * 2 + 0x46a) & 0x200) != 0) {
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
  uVar2 = FUN_1000_0359(uVar2);
  return uVar2;
}



undefined2 __cdecl16near FUN_1000_0e61(int *param_1)

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
      iVar4 = FUN_1000_0b63((int)*(char *)(param_1 + 2),iVar4,iVar5);
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



void __cdecl16near FUN_1000_0edf(undefined2 param_1)

{
  FUN_1000_1107(&stack0x0004,param_1,0x33a,0x1015);
  return;
}



void __cdecl16near FUN_1000_0ef8(char param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  *piVar1 = *piVar1 + -1;
  FUN_1000_0f11((int)param_1,param_2);
  return;
}



uint __cdecl16near FUN_1000_0f11(byte param_1,int *param_2)

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
         (((bVar3 == 10 || (bVar3 == 0xd)) && (iVar5 = FUN_1000_0e61(piVar4), iVar5 != 0)))) {
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
      iVar5 = FUN_1000_0e61(piVar4);
      if (iVar5 != 0) {
        return 0xffff;
      }
    }
  }
  if (((((bVar3 == 10) && ((piVar4[1] & 0x40U) == 0)) &&
       (iVar5 = FUN_1000_0c76((int)*(char *)(piVar4 + 2),0x4c8,1), iVar5 != 1)) ||
      (iVar5 = FUN_1000_0c76((int)*(char *)(piVar4 + 2),&param_1,1), iVar5 != 1)) &&
     ((piVar4[1] & 0x200U) == 0)) {
    puVar2 = (uint *)(piVar4 + 1);
    *puVar2 = *puVar2 | 0x10;
    return 0xffff;
  }
  return (uint)bVar3;
}



void __cdecl16near FUN_1000_0fff(undefined2 param_1)

{
  FUN_1000_0f11(param_1,0x33a);
  return;
}



uint FUN_1000_1015(int *param_1,uint param_2,undefined2 *param_3)

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
          uVar5 = FUN_1000_0ef8(*param_3,param_1);
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
    else if ((*param_1 == 0) || (iVar3 = FUN_1000_0e61(param_1), iVar3 == 0)) {
      uVar4 = FUN_1000_0c76((int)*(char *)(param_1 + 2),param_3,param_2);
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
      iVar3 = FUN_1000_0f11((int)(char)*(byte *)param_3,param_1);
      uVar4 = uVar4 - 1;
      param_3 = (undefined2 *)((int)param_3 + 1);
    } while (iVar3 != -1);
    param_2 = 0;
  }
  return param_2;
}



void thunk_FUN_1000_0dd2(void)

{
                    // WARNING: Could not recover jumptable at 0x000110d8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_11ef_05c8)();
  return;
}



void FUN_1000_10dc(undefined2 param_1)

{
  byte bVar1;
  undefined *unaff_DI;
  undefined2 unaff_ES;
  
  bVar1 = (byte)((uint)param_1 >> 8);
  *unaff_DI = *(undefined *)(ulong)((bVar1 >> 4) + 0x4d1);
  unaff_DI[1] = *(undefined *)(ulong)((bVar1 & 0xf) + 0x4d1);
  unaff_DI[2] = *(undefined *)(ulong)((byte)((byte)param_1 >> 4) + 0x4d1);
  unaff_DI[3] = *(undefined *)(ulong)(((byte)param_1 & 0xf) + 0x4d1);
  return;
}



void FUN_1000_1107(void)

{
  undefined2 unaff_SI;
  
  FUN_1000_1161(unaff_SI);
  return;
}



void __cdecl16near FUN_1000_1120(void)

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



void __cdecl16near FUN_1000_112d(void)

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



void __cdecl16near FUN_1000_1135(void)

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

undefined2 FUN_1000_1161(void)

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
LAB_1000_116a:
  pcVar23 = *(char **)(unaff_BP + -0x96);
LAB_1000_116e:
  pcVar21 = *(char **)(unaff_BP + 6);
LAB_1000_1171:
  pcVar22 = pcVar21 + 1;
  cVar11 = *pcVar21;
  if (cVar11 == '\0') goto LAB_1000_1606;
  if (cVar11 == '%') {
    *(char **)(unaff_BP + -0x8a) = pcVar22;
    pcVar1 = pcVar22;
    pcVar22 = pcVar21 + 2;
    cVar11 = *pcVar1;
    if (cVar11 != '%') goto code_r0x00011193;
  }
  *pcVar23 = cVar11;
  pcVar23 = pcVar23 + 1;
  pcVar1 = (char *)(unaff_BP + -0x55);
  cVar11 = *pcVar1;
  *pcVar1 = *pcVar1 + -1;
  pcVar21 = pcVar22;
  if (*pcVar1 == '\0' || SBORROW1(cVar11,'\x01') != *pcVar1 < '\0') {
    FUN_1000_1135();
  }
  goto LAB_1000_1171;
code_r0x00011193:
  *(char **)(unaff_BP + -0x96) = pcVar23;
  uVar15 = 0;
  *(undefined2 *)(unaff_BP + -0x8c) = 0;
  *(undefined2 *)(unaff_BP + -0x98) = 0;
  *(undefined *)(unaff_BP + -0x8d) = 0;
  *(undefined2 *)(unaff_BP + -0x92) = 0xffff;
  *(undefined2 *)(unaff_BP + -0x90) = 0xffff;
  do {
    if (0x5f < (byte)(cVar11 - 0x20U)) goto switchD_1000_11d4_caseD_13;
    cVar5 = *(char *)((byte)(cVar11 - 0x20U) + 0x4e1);
    cVar19 = cVar5 * '\x02';
    bVar18 = (byte)(uVar15 >> 8);
    uVar28 = unaff_SS;
    switch(cVar5) {
    case '\0':
      if (bVar18 != 0) goto switchD_1000_11d4_caseD_13;
      if (*(char *)(unaff_BP + -0x8d) != '+') {
        *(char *)(unaff_BP + -0x8d) = cVar11;
      }
      break;
    case '\x01':
      if (bVar18 != 0) goto switchD_1000_11d4_caseD_13;
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
        if (bVar18 != 4) goto switchD_1000_11d4_caseD_13;
        *(undefined2 *)(unaff_BP + -0x90) = uVar14;
        uVar15 = 0x500;
      }
      break;
    case '\x03':
      if (bVar18 != 0) goto switchD_1000_11d4_caseD_13;
      puVar3 = (uint *)(unaff_BP + -0x98);
      *puVar3 = *puVar3 | 2;
      break;
    case '\x04':
      if (3 < bVar18) goto switchD_1000_11d4_caseD_13;
      uVar15 = 0x400;
      break;
    case '\x05':
switchD_1000_11d4_caseD_5:
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
switchD_1000_11d4_caseD_13:
          pcVar23 = *(char **)(unaff_BP + -0x8a);
          do {
            FUN_1000_112d();
            pcVar1 = pcVar23;
            pcVar23 = pcVar23 + 1;
          } while (*pcVar1 != '\0');
LAB_1000_1606:
          if (*(char *)(unaff_BP + -0x55) < 'P') {
            FUN_1000_1135();
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
      if (bVar18 != 0) goto switchD_1000_11d4_caseD_5;
      if ((*(uint *)(unaff_BP + -0x98) & 2) == 0) {
        puVar3 = (uint *)(unaff_BP + -0x98);
        *puVar3 = *puVar3 | 8;
        uVar15 = 0x100;
      }
      break;
    case '\n':
      goto switchD_1000_11d4_caseD_a;
    case '\v':
      uVar14 = CONCAT11(8,cVar19);
      goto LAB_1000_130e;
    case '\f':
      uVar14 = CONCAT11(10,cVar19);
      goto LAB_1000_1313;
    case '\r':
      uVar14 = CONCAT11(0x10,cVar11 + -0x17);
LAB_1000_130e:
      *(undefined *)(unaff_BP + -0x8d) = 0;
LAB_1000_1313:
      *(undefined *)(unaff_BP + -0x93) = 0;
      *(char *)(unaff_BP + -0x94) = cVar11;
      piVar27 = *(int **)(unaff_BP + 4);
      iVar20 = *piVar27;
      iVar16 = 0;
      goto LAB_1000_1336;
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
        FUN_1000_10dc(uVar13,uVar14);
        puVar4 = puVar25;
        puVar25 = (undefined *)(unaff_BP + -0x87);
        *puVar4 = 0x3a;
      }
      FUN_1000_10dc();
      *puVar25 = 0;
      *(undefined *)(unaff_BP + -0x93) = 0;
      puVar3 = (uint *)(unaff_BP + -0x98);
      *puVar3 = *puVar3 & 0xfffb;
      puVar26 = (uint *)(unaff_BP + -0x88);
      uVar15 = (int)puVar25 - (int)puVar26;
      goto LAB_1000_14bb;
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
      thunk_FUN_1000_0dd2(uVar13,uVar7 & 1,cVar11,unaff_BP + -0x87,uVar15,uVar14);
      piVar2 = (int *)(unaff_BP + 4);
      *piVar2 = *piVar2 + *(int *)(unaff_BP + -4);
      puVar26 = (uint *)(unaff_BP + -0x87);
      goto LAB_1000_14bb;
    case '\x10':
      *(char **)(unaff_BP + 6) = pcVar22;
      *(char *)(unaff_BP + -0x94) = cVar11;
      uVar15 = **(uint **)(unaff_BP + 4);
      piVar2 = (int *)(unaff_BP + 4);
      *piVar2 = *piVar2 + 2;
      puVar26 = (uint *)(unaff_BP + -0x87);
      *puVar26 = uVar15 & 0xff;
      uVar15 = 1;
      goto LAB_1000_14fc;
    case '\x11':
      *(char **)(unaff_BP + 6) = pcVar22;
      *(char *)(unaff_BP + -0x94) = cVar11;
      puVar9 = (undefined4 *)*(undefined2 *)(unaff_BP + 4);
      if ((*(uint *)(unaff_BP + -0x98) & 0x20) == 0) {
        puVar26 = *(uint **)puVar9;
        piVar2 = (int *)(unaff_BP + 4);
        *piVar2 = *piVar2 + 2;
        uVar28 = 0x11ef;
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
        uVar28 = 0x11ef;
        puVar26 = (uint *)0x4ca;
      }
      FUN_1000_1120();
      puVar3 = (uint *)(unaff_BP + -0x90);
      if (*puVar3 <= uVar15 && uVar15 != *puVar3) {
        uVar15 = *(uint *)(unaff_BP + -0x90);
      }
      goto LAB_1000_14fc;
    case '\x12':
      *(char **)(unaff_BP + 6) = pcVar22;
      puVar9 = (undefined4 *)*(undefined2 *)(unaff_BP + 4);
      if ((*(uint *)(unaff_BP + -0x98) & 0x20) == 0) {
        piVar27 = *(int **)puVar9;
        piVar2 = (int *)(unaff_BP + 4);
        *piVar2 = *piVar2 + 2;
        uVar14 = 0x11ef;
      }
      else {
        uVar10 = *puVar9;
        uVar14 = (undefined2)((ulong)uVar10 >> 0x10);
        piVar27 = (int *)uVar10;
        piVar2 = (int *)(unaff_BP + 4);
        *piVar2 = *piVar2 + 4;
      }
      *piVar27 = (uint)(byte)(0x50 - *(char *)(unaff_BP + -0x55)) + *(int *)(unaff_BP + -0x58);
      goto LAB_1000_116a;
    default:
      goto switchD_1000_11d4_caseD_13;
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
switchD_1000_11d4_caseD_a:
  uVar14 = CONCAT11(10,cVar19);
  *(undefined *)(unaff_BP + -0x93) = 1;
  *(char *)(unaff_BP + -0x94) = cVar11;
  piVar27 = *(int **)(unaff_BP + 4);
  iVar20 = *piVar27;
  iVar16 = iVar20 >> 0xf;
LAB_1000_1336:
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
          FUN_1000_112d();
          iVar20 = iVar20 + -1;
        } while (iVar20 != 0);
      }
      goto LAB_1000_116e;
    }
  }
  else {
    puVar3 = (uint *)(unaff_BP + -0x98);
    *puVar3 = *puVar3 | 4;
  }
  FUN_1000_0ce7(uVar14,*(undefined *)(unaff_BP + -0x93),(char)((uint)uVar14 >> 8),puVar26,iVar20,
                iVar16);
  if (*(int *)(unaff_BP + -0x90) < 1) {
LAB_1000_14bb:
    if (((*(uint *)(unaff_BP + -0x98) & 8) == 0) || (*(int *)(unaff_BP + -0x92) < 1))
    goto LAB_1000_14dd;
  }
  FUN_1000_1120();
  if (*(char *)puVar26 == '-') {
    uVar15 = uVar15 - 1;
  }
  if (extraout_DX - uVar15 != 0 && (int)uVar15 <= extraout_DX) {
    *(int *)(unaff_BP + -0x8c) = extraout_DX - uVar15;
  }
LAB_1000_14dd:
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
  FUN_1000_1120();
LAB_1000_14fc:
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
      FUN_1000_112d();
    }
  }
  if ((*(uint *)(unaff_BP + -0x98) & 0x40) != 0) {
    FUN_1000_112d();
    FUN_1000_112d();
  }
  iVar17 = *(int *)(unaff_BP + -0x8c);
  if (0 < iVar17) {
    iVar16 = iVar16 - iVar17;
    iVar20 = iVar20 - iVar17;
    cVar11 = *(char *)puVar26;
    if (((cVar11 == '-') || (cVar11 == ' ')) || (cVar11 == '+')) {
      puVar26 = (uint *)((int)puVar26 + 1);
      FUN_1000_112d();
      iVar16 = iVar16 + -1;
      iVar20 = iVar20 + -1;
      iVar17 = extraout_DX_00;
    }
    for (; iVar17 != 0; iVar17 = iVar17 + -1) {
      FUN_1000_112d();
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
        FUN_1000_1135();
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  if (0 < iVar20) {
    do {
      FUN_1000_112d();
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  goto LAB_1000_116e;
}



void __cdecl16near FUN_1000_162a(int param_1)

{
  int iVar1;
  
  if (DAT_11ef_0612 == 0) {
    DAT_11ef_0612 = param_1;
    *(int *)(param_1 + 4) = param_1;
    *(int *)(param_1 + 6) = param_1;
  }
  else {
    iVar1 = *(int *)(DAT_11ef_0612 + 6);
    *(int *)(DAT_11ef_0612 + 6) = param_1;
    *(int *)(iVar1 + 4) = param_1;
    *(int *)(param_1 + 6) = iVar1;
    *(int *)(param_1 + 4) = DAT_11ef_0612;
  }
  return;
}



void __cdecl16near FUN_1000_1663(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_1;
  *piVar1 = *piVar1 + *param_2;
  if (DAT_11ef_0610 == param_2) {
    DAT_11ef_0610 = param_1;
  }
  else {
    *(int **)((int)param_2 + *param_2 + 2) = param_1;
  }
  FUN_1000_0525(param_2);
  return;
}



void __cdecl16near FUN_1000_169a(void)

{
  uint *puVar1;
  
  if (DAT_11ef_0614 == DAT_11ef_0610) {
    FUN_1000_06cf(DAT_11ef_0614);
    DAT_11ef_0610 = (uint *)0x0;
    DAT_11ef_0614 = (uint *)0x0;
  }
  else {
    puVar1 = (uint *)DAT_11ef_0610[1];
    if ((*puVar1 & 1) == 0) {
      FUN_1000_0525(puVar1);
      if (puVar1 == DAT_11ef_0614) {
        DAT_11ef_0610 = (uint *)0x0;
        DAT_11ef_0614 = (uint *)0x0;
      }
      else {
        DAT_11ef_0610 = (uint *)puVar1[1];
      }
      FUN_1000_06cf(puVar1);
    }
    else {
      FUN_1000_06cf(DAT_11ef_0610);
      DAT_11ef_0610 = puVar1;
    }
  }
  return;
}



void __cdecl16near FUN_1000_16f3(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar1 = param_1;
  *puVar1 = *puVar1 - 1;
  puVar3 = (uint *)(*param_1 + (int)param_1);
  puVar2 = (uint *)param_1[1];
  if (((*puVar2 & 1) == 0) && (param_1 != DAT_11ef_0614)) {
    puVar1 = puVar2;
    *puVar1 = *puVar1 + *param_1;
    puVar3[1] = (uint)puVar2;
    param_1 = puVar2;
  }
  else {
    FUN_1000_162a(param_1);
  }
  if ((*puVar3 & 1) == 0) {
    FUN_1000_1663(param_1,puVar3);
  }
  return;
}



void __cdecl16near FUN_1000_1741(int param_1)

{
  if (param_1 != 0) {
    if (param_1 + -4 == DAT_11ef_0610) {
      FUN_1000_169a();
    }
    else {
      FUN_1000_16f3(param_1 + -4);
    }
  }
  return;
}



void __cdecl16near FUN_1000_1768(undefined2 param_1)

{
  FUN_1000_1787(0x886,0x1e9c,0x32a,param_1,&stack0x0004);
  return;
}



void FUN_1000_1787(void)

{
  FUN_1000_17b5();
  return;
}



void __cdecl16near FUN_1000_179c(void)

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

undefined2 __cdecl16near FUN_1000_17b5(void)

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
  
LAB_1000_17b7:
  pbVar13 = *(byte **)(unaff_BP + 10);
LAB_1000_17ba:
  pbVar3 = pbVar13;
  pbVar13 = pbVar13 + 1;
  bVar11 = *pbVar3;
  if (bVar11 == 0) goto LAB_1000_1b93;
  if (bVar11 != 0x25) goto LAB_1000_17c3;
  *(undefined2 *)(unaff_BP + -0x22) = 0xffff;
  *(undefined *)(unaff_BP + -0x29) = 0;
  pbVar14 = pbVar13;
LAB_1000_1828:
  pbVar13 = pbVar14 + 1;
  puVar8 = (undefined2 *)(int)(char)*pbVar14;
  *(byte **)(unaff_BP + 10) = pbVar13;
  if ((int)puVar8 < 0) goto LAB_1000_1b93;
  bVar11 = *(byte *)(puVar8 + 0x2a1);
  switch(bVar11) {
  case 0:
  case 1:
  case 2:
    goto LAB_1000_1b93;
  case 3:
    goto switchD_1000_1846_caseD_3;
  case 4:
    pbVar3 = (byte *)(unaff_BP + -0x29);
    *pbVar3 = *pbVar3 | 1;
    pbVar14 = pbVar13;
    goto LAB_1000_1828;
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
    goto LAB_1000_1828;
  case 6:
    goto switchD_1000_1846_caseD_6;
  case 7:
  case 8:
    uVar10 = 10;
    break;
  case 9:
    uVar10 = 0;
    break;
  case 10:
    thunk_FUN_1000_0dd7(*(undefined2 *)(unaff_BP + 4),*(undefined2 *)(unaff_BP + 6),
                        *(undefined2 *)(unaff_BP + 8),*(uint *)(unaff_BP + -0x22) & 0x7fff,
                        unaff_BP + -0x26,unaff_BP + -0x24);
    cVar17 = '\0';
    iVar6 = *(int *)(unaff_BP + -0x24);
    cVar5 = iVar6 < 0;
    if (iVar6 < 1) {
      thunk_FUN_1000_0dd7();
      if (cVar17 == cVar5) goto LAB_1000_1b93;
      goto switchD_1000_1846_caseD_16;
    }
    if ((*(byte *)(unaff_BP + -0x29) & 1) == 0) {
      FUN_1000_179c();
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
      thunk_FUN_1000_0dd7(puVar8,uVar10);
    }
    else {
      thunk_FUN_1000_0dd7();
    }
    goto LAB_1000_17b7;
  case 0xb:
    pbVar3 = (byte *)(unaff_BP + -0x29);
    *pbVar3 = *pbVar3 | 8;
    pbVar14 = pbVar13;
    goto LAB_1000_1828;
  case 0xc:
    pbVar3 = (byte *)(unaff_BP + -0x29);
    *pbVar3 = *pbVar3 | 2;
    pbVar14 = pbVar13;
    goto LAB_1000_1828;
  case 0xd:
    pbVar3 = (byte *)(unaff_BP + -0x29);
    *pbVar3 = *pbVar3 | 4;
    pbVar14 = pbVar13;
    goto LAB_1000_1828;
  case 0xe:
    uVar10 = 8;
    break;
  case 0xf:
    iVar6 = 0x1a03;
    goto LAB_1000_1b9a;
  case 0x10:
    goto switchD_1000_1846_caseD_10;
  case 0x11:
    pbVar14 = pbVar13;
    if ((*(byte *)(unaff_BP + -0x29) & 1) == 0) goto LAB_1000_1912;
    goto LAB_1000_1828;
  case 0x12:
    uVar10 = 0x10;
    break;
  case 0x13:
    iVar6 = 0x192c;
    goto LAB_1000_1b9a;
  case 0x14:
    pbVar3 = (byte *)(unaff_BP + -0x29);
    *pbVar3 = *pbVar3 & 0xdf;
    pbVar14 = pbVar13;
    goto LAB_1000_1828;
  case 0x15:
    goto switchD_1000_1846_caseD_15;
  default:
    goto switchD_1000_1846_caseD_16;
  }
  if (((uint)puVar8 & 0x20) == 0) {
    pbVar3 = (byte *)(unaff_BP + -0x29);
    *pbVar3 = *pbVar3 | 4;
  }
  FUN_1000_1c60(*(undefined2 *)(unaff_BP + 4),*(undefined2 *)(unaff_BP + 6),
                *(undefined2 *)(unaff_BP + 8),uVar10,*(uint *)(unaff_BP + -0x22) & 0x7fff,
                unaff_BP + -0x26,unaff_BP + -0x24);
  iVar6 = *(int *)(unaff_BP + -0x24);
  if (iVar6 < 1) {
    if (-1 < iVar6) goto LAB_1000_1b93;
    goto switchD_1000_1846_caseD_16;
  }
  if ((*(byte *)(unaff_BP + -0x29) & 1) == 0) {
    piVar1 = (int *)(unaff_BP + -0x28);
    *piVar1 = *piVar1 + 1;
LAB_1000_1912:
    uVar18 = FUN_1000_179c();
    *puVar8 = (int)uVar18;
    if ((*(byte *)(unaff_BP + -0x29) & 4) != 0) {
      puVar8[1] = (int)((ulong)uVar18 >> 0x10);
    }
  }
  goto LAB_1000_17b7;
switchD_1000_1846_caseD_15:
  pbVar3 = (byte *)(unaff_BP + -0x29);
  *pbVar3 = *pbVar3 | 0x20;
  pbVar14 = pbVar13;
  goto LAB_1000_1828;
switchD_1000_1846_caseD_10:
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
LAB_1000_1ab7:
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
    if (bVar11 == 0) goto LAB_1000_1b93;
    if (bVar11 == 0x5d) break;
    if (((bVar11 != 0x2d) ||
        (pbVar3 = pbVar13, bVar11 = (byte)uVar12, *pbVar3 <= bVar11 && bVar11 != *pbVar3)) ||
       (*pbVar13 == 0x5d)) goto LAB_1000_1ab7;
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
    FUN_1000_179c();
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
      goto switchD_1000_1846_caseD_16;
    }
    if ((*(byte *)(unaff_BP + (uVar9 >> 3) + -0x20) & '\x01' << ((byte)uVar9 & 7)) == 0) {
      if ((*(byte *)(unaff_BP + -0x29) & 0x10) == 0) goto LAB_1000_1b4a;
    }
    else if ((*(byte *)(unaff_BP + -0x29) & 0x10) != 0) {
LAB_1000_1b4a:
      (**(code **)(unaff_BP + 6))(uVar9,*(undefined2 *)(unaff_BP + 8));
      piVar1 = (int *)(unaff_BP + -0x26);
      *piVar1 = *piVar1 + -1;
      if (iVar6 < *(int *)(unaff_BP + -0x22)) break;
      goto LAB_1000_1b67;
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
LAB_1000_1b67:
    *pbVar15 = 0;
  }
  goto LAB_1000_17b7;
LAB_1000_1b9a:
  piVar1 = (int *)(unaff_BP + -0x26);
  *piVar1 = *piVar1 + 1;
  iVar7 = (**(code **)(unaff_BP + 4))(*(undefined2 *)(unaff_BP + 8));
  if (iVar7 < 1) {
    if (iVar7 != 0) {
switchD_1000_1846_caseD_16:
      (**(code **)(unaff_BP + 6))(0xffff,*(undefined2 *)(unaff_BP + 8));
      piVar1 = (int *)(unaff_BP + -0x28);
      *piVar1 = *piVar1 - (uint)(*(int *)(unaff_BP + -0x28) == 0);
LAB_1000_1b93:
      return *(undefined2 *)(unaff_BP + -0x28);
    }
LAB_1000_1bb5:
                    // WARNING: Could not recover jumptable at 0x00011bb9. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar10 = (*(code *)(iVar6 + 3))();
    return uVar10;
  }
  if (((char)iVar7 < '\0') || (*(char *)(iVar7 + 0x542) != '\x01')) goto LAB_1000_1bb5;
  goto LAB_1000_1b9a;
switchD_1000_1846_caseD_6:
  if ((*(byte *)(unaff_BP + -0x29) & 1) == 0) {
    FUN_1000_179c();
  }
  iVar6 = *(int *)(unaff_BP + -0x22);
  bVar16 = iVar6 != 0;
  if (iVar6 < 0) {
    iVar6 = 1;
  }
  if (bVar16) goto LAB_1000_1a71;
  goto LAB_1000_1a8b;
  while (iVar7 = iVar6 + -1, bVar16 = 0 < iVar6, iVar6 = iVar7, iVar7 != 0 && bVar16) {
LAB_1000_1a71:
    piVar1 = (int *)(unaff_BP + -0x26);
    *piVar1 = *piVar1 + 1;
    iVar7 = (**(code **)(unaff_BP + 4))(*(undefined2 *)(unaff_BP + 8));
    if ((*(byte *)(unaff_BP + -0x29) & 1) == 0) {
      puVar4 = puVar8;
      puVar8 = (undefined2 *)((int)puVar8 + 1);
      *(char *)puVar4 = (char)iVar7;
    }
    if (iVar7 < 0) goto switchD_1000_1846_caseD_16;
  }
LAB_1000_1a8b:
  if ((*(byte *)(unaff_BP + -0x29) & 1) == 0) {
    piVar1 = (int *)(unaff_BP + -0x28);
    *piVar1 = *piVar1 + 1;
  }
  goto LAB_1000_17b7;
switchD_1000_1846_caseD_3:
LAB_1000_17c3:
  iVar6 = (int)(char)bVar11;
  piVar1 = (int *)(unaff_BP + -0x26);
  *piVar1 = *piVar1 + 1;
  iVar7 = (**(code **)(unaff_BP + 4))(*(undefined2 *)(unaff_BP + 8));
  if (iVar7 < 0) goto switchD_1000_1846_caseD_16;
  if ((iVar6 < 0) || (*(char *)(iVar6 + 0x542) != '\x01')) {
    if (iVar7 != iVar6) {
      (**(code **)(unaff_BP + 6))(iVar7,*(undefined2 *)(unaff_BP + 8));
      piVar1 = (int *)(unaff_BP + -0x26);
      *piVar1 = *piVar1 + -1;
      goto LAB_1000_1b93;
    }
  }
  else {
    while ((-1 < (char)iVar7 && (*(char *)(iVar7 + 0x542) == '\x01'))) {
      piVar1 = (int *)(unaff_BP + -0x26);
      *piVar1 = *piVar1 + 1;
      iVar7 = (**(code **)(unaff_BP + 4))(*(undefined2 *)(unaff_BP + 8));
      if (iVar7 < 1) goto switchD_1000_1846_caseD_16;
    }
    (**(code **)(unaff_BP + 6))(iVar7,*(undefined2 *)(unaff_BP + 8));
    piVar1 = (int *)(unaff_BP + -0x26);
    *piVar1 = *piVar1 + -1;
  }
  goto LAB_1000_17ba;
}



void thunk_FUN_1000_0dd7(void)

{
                    // WARNING: Could not recover jumptable at 0x00011c26. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_11ef_05ca)();
  return;
}



void thunk_FUN_1000_0dd7(void)

{
                    // WARNING: Could not recover jumptable at 0x00011c2a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_11ef_05cc)();
  return;
}



void thunk_FUN_1000_0dd7(void)

{
                    // WARNING: Could not recover jumptable at 0x00011c2e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_11ef_05ce)();
  return;
}



void __cdecl16near FUN_1000_1c32(void)

{
  return;
}



undefined4 __cdecl16near
FUN_1000_1c60(code *param_1,code *param_2,undefined2 param_3,uint param_4,int param_5,int *param_6,
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
    if ((int)uVar7 < 0) goto LAB_1000_1cee;
    cVar5 = (char)uVar7;
    uVar7 = (uint)cVar5;
  } while (((uVar7 & 0x80) == 0) && ((*(byte *)(uVar7 + 0x229) & 1) != 0));
  if (param_5 < 1) {
LAB_1000_1cf5:
    local_6 = iVar2;
    local_4 = 0;
  }
  else {
    if (cVar5 != '+') {
      iVar4 = param_5 + -1;
      if (cVar5 == '-') {
        local_7 = '\x01';
        goto LAB_1000_1ca5;
      }
LAB_1000_1cb8:
      local_6 = iVar2;
      param_5 = iVar4;
      uVar13 = 0;
      uVar14 = 0;
      bVar6 = (byte)uVar7;
      iVar2 = local_6;
      if (param_4 == 0) {
        param_4 = 10;
        if (bVar6 != 0x30) {
LAB_1000_1d3b:
          uVar15 = bVar6 < 0x30;
          FUN_1000_1c32();
          uVar13 = uVar7;
          if (!(bool)uVar15) goto LAB_1000_1d52;
          goto LAB_1000_1cf5;
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
            goto LAB_1000_1d52;
          }
LAB_1000_1d61:
          while (FUN_1000_1c32(), !(bool)uVar15) {
            uVar10 = (uint)((ulong)uVar13 * (ulong)param_4 >> 0x10);
            uVar8 = (uint)((ulong)uVar13 * (ulong)param_4);
            uVar13 = uVar7 + uVar8;
            uVar7 = (uint)CARRY2(uVar7,uVar8);
            uVar8 = uVar14 + uVar10;
            uVar15 = CARRY2(uVar14,uVar10) || CARRY2(uVar8,uVar7);
            uVar14 = uVar8 + uVar7;
            if (uVar14 != 0) goto LAB_1000_1d7e;
LAB_1000_1d52:
            if (param_5 < 1) goto LAB_1000_1da3;
            local_6 = local_6 + 1;
            uVar7 = (*param_1)(param_3);
            param_5 = param_5 + -1;
          }
LAB_1000_1d97:
          (*param_2)(uVar7,param_3);
          local_6 = local_6 + -1;
        }
      }
      else {
        if ((0x24 < param_4) || (bVar9 = (byte)param_4, bVar9 < 2)) goto LAB_1000_1cf5;
        if (bVar6 != 0x30) goto LAB_1000_1d3b;
        uVar15 = bVar9 < 0x10;
        if (bVar9 != 0x10) goto LAB_1000_1d52;
        iVar2 = param_5 + -1;
        if (0 < param_5) {
          local_6 = local_6 + 1;
          uVar7 = (*param_1)(param_3);
          bVar6 = (byte)uVar7;
          uVar15 = bVar6 < 0x78;
          param_5 = iVar2;
          if (bVar6 == 0x78) goto LAB_1000_1d52;
          uVar15 = bVar6 < 0x58;
          if (bVar6 == 0x58) goto LAB_1000_1d52;
          goto LAB_1000_1d61;
        }
      }
LAB_1000_1da3:
      if (local_7 != '\0') {
        bVar16 = uVar13 != 0;
        uVar13 = -uVar13;
        uVar14 = -(uint)bVar16 - uVar14;
      }
      goto LAB_1000_1db3;
    }
LAB_1000_1ca5:
    if (param_5 + -1 < 1) goto LAB_1000_1cf5;
    uVar7 = (*param_1)(param_3);
    iVar4 = param_5 + -2;
    iVar2 = local_6 + 2;
    if (-1 < (int)uVar7) goto LAB_1000_1cb8;
LAB_1000_1cee:
    local_6 = iVar2;
    local_4 = 0xffff;
  }
  (*param_2)(uVar7,param_3);
  local_6 = local_6 + -1;
  uVar13 = 0;
  uVar14 = 0;
LAB_1000_1db3:
  piVar1 = param_6;
  *piVar1 = *piVar1 + local_6;
  *param_7 = local_4;
  return CONCAT22(uVar14,uVar13);
  while( true ) {
    local_6 = local_6 + 1;
    uVar7 = (*param_1)(param_3);
    uVar8 = param_4;
    FUN_1000_1c32();
    if ((bool)uVar15) goto LAB_1000_1d97;
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
LAB_1000_1d7e:
    if (param_5 < 1) goto LAB_1000_1da3;
  }
  uVar13 = CONCAT11((local_7 != '\0') + -1,local_7 + -1);
  uVar14 = (local_7 != '\0') + 0x7fff;
  local_4 = 2;
  goto LAB_1000_1db3;
}



undefined4 __stdcall16far FUN_1000_1deb(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  uVar3 = 2;
  if ((param_4 == 0) && ((param_2 == 0 || (param_3 == 0)))) {
    param_1 = (uint)(CONCAT22(param_2,param_1) % (ulong)param_3);
    param_2 = 0;
  }
  else {
    if ((int)param_2 < 0) {
      bVar5 = param_1 != 0;
      param_1 = -param_1;
      param_2 = -(uint)bVar5 - param_2;
      uVar3 = 0xe;
    }
    if ((int)param_4 < 0) {
      bVar5 = param_3 != 0;
      param_3 = -param_3;
      param_4 = -(uint)bVar5 - param_4;
      uVar3 = uVar3 ^ 4;
    }
    iVar1 = 0x20;
    uVar4 = 0;
    uVar2 = 0;
    do {
      bVar5 = (int)param_1 < 0;
      param_1 = param_1 * 2;
      bVar6 = (int)param_2 < 0;
      param_2 = param_2 << 1 | (uint)bVar5;
      bVar5 = (int)uVar2 < 0;
      uVar2 = uVar2 << 1 | (uint)bVar6;
      uVar4 = uVar4 << 1 | (uint)bVar5;
      if ((param_4 <= uVar4) && ((param_4 < uVar4 || (param_3 <= uVar2)))) {
        bVar5 = uVar2 < param_3;
        uVar2 = uVar2 - param_3;
        uVar4 = (uVar4 - param_4) - (uint)bVar5;
        param_1 = param_1 + 1;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if ((uVar3 & 2) != 0) {
      uVar3 = uVar3 >> 1;
      param_1 = uVar2;
      param_2 = uVar4;
    }
    if ((uVar3 & 4) != 0) {
      bVar5 = param_1 != 0;
      param_1 = -param_1;
      param_2 = -(uint)bVar5 - param_2;
    }
  }
  return CONCAT22(param_2,param_1);
}



void __cdecl16near FUN_1000_1e85(undefined2 param_1)

{
  FUN_1000_0cbc(param_1,0,0,1);
  return;
}



uint __cdecl16near FUN_1000_1e9c(uint param_1,int *param_2)

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


