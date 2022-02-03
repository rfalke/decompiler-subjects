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
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined *puVar13;
  int *piVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined2 *puVar20;
  undefined *puVar21;
  byte *unaff_SI;
  int *piVar22;
  int *piVar23;
  undefined *puVar24;
  int iVar25;
  undefined2 unaff_ES;
  undefined2 uVar26;
  undefined2 uVar27;
  undefined4 uVar28;
  
  uVar27 = 0x251;
  puVar13 = (undefined *)&DAT_11ef_0080;
                    // WARNING: Read-only address (ram,0x000101f8) is written
  uRam000101f8 = 0x11ef;
  pcVar6 = (code *)swi(0x21);
  uVar28 = (*pcVar6)();
  uVar26 = s_Turbo_C___Copyright__c__1988_Bor_11ef_0004._40_2_;
  puVar21 = DAT_11ef_0002;
  iVar8 = (int)((ulong)uVar28 >> 0x10);
  *(undefined2 *)&DAT_11ef_0092 = (int)uVar28;
  *(undefined2 *)&DAT_11ef_0090 = unaff_ES;
  *(undefined2 *)&DAT_11ef_008c = uVar26;
  *(int *)&DAT_11ef_00ac = (int)puVar21;
  *(undefined2 *)&DAT_11ef_0096 = 0xffff;
  *(undefined2 *)(puVar13 + -2) = 0x2e;
  FUN_1000_0162();
  uVar28 = *(undefined4 *)&DAT_11ef_008a;
  uVar26 = (undefined2)((ulong)uVar28 >> 0x10);
  piVar22 = (int *)uVar28;
  uVar11 = 0x7fff;
  piVar23 = piVar22;
  do {
    if (((*piVar23 == 0x3738) && (iVar12 = piVar23[1], (char)iVar12 == '=')) &&
       (piVar1 = (int *)&DAT_11ef_0096, *piVar1 = *piVar1 + 1,
       ((byte)((uint)iVar12 >> 8) & 0xdf) == 0x59)) {
      piVar1 = (int *)&DAT_11ef_0096;
      *piVar1 = *piVar1 + 1;
    }
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      piVar1 = piVar23;
      piVar23 = (int *)((int)piVar23 + 1);
    } while ((char)uVar28 != *(char *)piVar1);
    if (uVar11 == 0) goto LAB_1000_01e9;
    piVar22 = (int *)((int)piVar22 + 1);
  } while (*(char *)piVar23 != (char)uVar28);
  *(int *)&DAT_11ef_008a = -(uVar11 | 0x8000);
  piVar22 = (int *)((int)piVar22 * 2 + 8U & 0xfff8);
  *(int **)&DAT_11ef_008e = piVar22;
  puVar21 = puVar21 + -iVar8;
  uVar11 = *(uint *)&DAT_11ef_0224;
  if (uVar11 < 0x200) {
    uVar11 = 0x200;
    *(undefined2 *)&DAT_11ef_0224 = 0x200;
  }
  if ((uVar11 < 0xf9ea) && (puVar2 = (uint *)&DAT_11ef_0222, !CARRY2(uVar11 + 0x616,*puVar2))) {
    bVar10 = 4;
    puVar24 = (undefined *)((uVar11 + 0x616 + *puVar2 >> 4) + 1);
    if (puVar24 <= puVar21) {
      if (((*(int *)&DAT_11ef_0224 == 0) || (*(int *)&DAT_11ef_0222 == 0)) &&
         (puVar24 = (undefined *)0x1000, puVar21 < (undefined *)0x1001)) {
        puVar24 = puVar21;
      }
      puVar21 = puVar24 + iVar8;
      *(int *)&DAT_11ef_00a4 = (int)puVar21;
      *(int *)&DAT_11ef_00a8 = (int)puVar21;
      piVar22 = (int *)(puVar21 + -*(int *)&DAT_11ef_0090);
      piVar14 = (int *)(puVar13 + -2);
      *(undefined **)(puVar13 + -2) = puVar24;
      pcVar6 = (code *)swi(0x21);
      (*pcVar6)();
      iVar25 = *piVar14 << (bVar10 & 0x1f);
      puVar21 = (undefined *)&DAT_11ef_05d0;
      for (iVar12 = 0x46; iVar12 != 0; iVar12 = iVar12 + -1) {
        puVar4 = puVar21;
        puVar21 = puVar21 + 1;
        *puVar4 = 0;
      }
      *(undefined2 *)(iVar25 + -2) = 0x1000;
      pcVar5 = *(code **)&DAT_11ef_05c2;
      puVar15 = (undefined *)(iVar25 + -4);
      *(undefined2 *)(iVar25 + -4) = 0xf8;
      (*pcVar5)();
      puVar16 = puVar15 + -2;
      *(undefined2 *)(puVar15 + -2) = 0xfb;
      FUN_1000_03ca();
      *(undefined2 *)(puVar16 + -2) = 0xfe;
      FUN_1000_04b5();
      pcVar6 = (code *)swi(0x1a);
      (*pcVar6)();
      *(undefined2 *)&DAT_11ef_0098 = extraout_DX_00;
      *(int *)&DAT_11ef_009a = iVar12;
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
      puVar21 = puVar17 + -0xc;
      *(undefined2 *)(puVar17 + -0xc) = 0x12e;
      (*pcVar6)();
      iVar8 = 0;
      unaff_SI = (byte *)0x0;
      iVar12 = 0x2f;
      do {
        pbVar3 = unaff_SI;
        iVar8 = CONCAT11((char)((uint)iVar8 >> 8) + CARRY1((byte)iVar8,*pbVar3),
                         (byte)iVar8 + *pbVar3);
        unaff_SI = unaff_SI + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      if (iVar8 != 0xd37) {
        *(undefined2 *)(puVar21 + -2) = 0x14f;
        FUN_1000_01da();
      }
      pcVar6 = (code *)swi(0x21);
      puVar13 = puVar21;
      (*pcVar6)();
      uVar27 = extraout_DX;
    }
  }
LAB_1000_01e9:
  *(undefined2 *)(puVar13 + -2) = 0x1f1;
  FUN_1000_01da();
  *(undefined2 *)(puVar13 + -2) = 3;
  puVar18 = puVar13 + -4;
  *(undefined2 *)(puVar13 + -4) = 0x1f8;
  cVar7 = FUN_1000_0121();
  pbVar3 = (byte *)((int)piVar22 + (int)unaff_SI);
  *pbVar3 = *pbVar3 + cVar7;
  *(undefined **)(puVar18 + -2) = puVar21;
  *(undefined **)(puVar18 + -0x18) = puVar18 + -6;
  *(undefined2 *)(puVar18 + -0x1a) = 0x194;
  *(undefined2 *)(puVar18 + -0x1c) = 0x20b;
  FUN_1000_1768();
  *(undefined2 *)(puVar18 + -0x18) = *(undefined2 *)(puVar18 + -4);
  *(undefined2 *)(puVar18 + -0x1a) = *(undefined2 *)(puVar18 + -6);
  *(undefined2 *)(puVar18 + -0x1c) = 0x198;
  *(undefined2 *)(puVar18 + -0x1e) = 0x21a;
  FUN_1000_0edf();
  *(undefined **)(puVar18 + -0x18) = puVar18 + -0x16;
  *(undefined2 *)(puVar18 + -0x1a) = 0x1b2;
  *(undefined2 *)(puVar18 + -0x1c) = 0x228;
  FUN_1000_1768();
  *(undefined **)(puVar18 + -0x18) = puVar18 + -0x12;
  *(undefined2 *)(puVar18 + -0x1a) = 0x1b6;
  *(undefined2 *)(puVar18 + -0x1c) = 0x235;
  FUN_1000_1768();
  puVar19 = puVar18 + -0x16;
  *(undefined2 *)(puVar18 + -8) = 0;
  *(undefined2 *)(puVar18 + -10) = 1;
  while( true ) {
    if ((*(int *)(puVar18 + -4) <= *(int *)(puVar18 + -8)) &&
       ((*(int *)(puVar18 + -4) < *(int *)(puVar18 + -8) ||
        (*(uint *)(puVar18 + -6) <= *(uint *)(puVar18 + -10) &&
         *(uint *)(puVar18 + -10) != *(uint *)(puVar18 + -6))))) break;
    *(undefined2 *)(puVar18 + -0xc) = 0;
    *(undefined2 *)(puVar18 + -0xe) = 1;
    while ((*(int *)(puVar18 + -0xc) < 0 ||
           ((*(int *)(puVar18 + -0xc) < 1 && (*(uint *)(puVar18 + -0xe) < 0x29))))) {
      uVar9 = *(uint *)(puVar18 + -0x16) + *(uint *)(puVar18 + -0x12);
      uVar11 = *(uint *)(puVar18 + -0xe);
      *(uint *)(puVar18 + -0x14) =
           *(int *)(puVar18 + -0x14) + *(int *)(puVar18 + -0x10) +
           (uint)CARRY2(*(uint *)(puVar18 + -0x16),*(uint *)(puVar18 + -0x12)) +
           *(int *)(puVar18 + -0xc) + (uint)CARRY2(uVar9,*(uint *)(puVar18 + -0xe));
      *(uint *)(puVar18 + -0x16) = uVar9 + uVar11;
      uVar11 = *(uint *)(puVar18 + -0x14);
      uVar9 = *(uint *)(puVar18 + -0x16);
      *(int *)(puVar18 + -0x10) = (int)uVar11 >> 1;
      *(uint *)(puVar18 + -0x12) = uVar9 >> 1 | (uint)((uVar11 & 1) != 0) << 0xf;
      *(undefined2 *)(puVar19 + -2) = 0;
      *(undefined2 *)(puVar19 + -4) = 10;
      *(undefined2 *)(puVar19 + -6) = *(undefined2 *)(puVar18 + -0x10);
      *(undefined2 *)(puVar19 + -8) = *(undefined2 *)(puVar18 + -0x12);
      *(undefined2 *)(puVar19 + -10) = 0x1000;
      puVar20 = (undefined2 *)(puVar19 + -0xc);
      puVar19 = puVar19 + -0xc;
      *puVar20 = 0x28b;
      uVar28 = FUN_1000_1deb();
      *(int *)(puVar18 + -0x14) = (int)((ulong)uVar28 >> 0x10);
      *(int *)(puVar18 + -0x16) = (int)uVar28;
      if ((*(int *)(puVar18 + -0x10) == *(int *)(puVar18 + -0xc)) &&
         (*(int *)(puVar18 + -0x12) == *(int *)(puVar18 + -0xe))) {
        uVar26 = 1;
      }
      else {
        uVar26 = 0;
      }
      *(undefined2 *)(puVar18 + -0x14) = 0;
      *(undefined2 *)(puVar18 + -0x16) = uVar26;
      uVar11 = *(uint *)(puVar18 + -0x16);
      uVar9 = *(uint *)(puVar18 + -0xe);
      *(uint *)(puVar18 + -0x10) = *(uint *)(puVar18 + -0x14) | *(uint *)(puVar18 + -0xc);
      *(uint *)(puVar18 + -0x12) = uVar11 | uVar9;
      uVar11 = *(uint *)(puVar18 + -0x12);
      uVar9 = *(uint *)(puVar18 + -0x10);
      *(undefined2 *)(puVar18 + -0x14) = 0;
      *(uint *)(puVar18 + -0x16) = (uint)((uVar11 | uVar9) == 0);
      uVar11 = *(uint *)(puVar18 + -0x16);
      uVar9 = *(uint *)(puVar18 + -0xe);
      *(uint *)(puVar18 + -0x10) =
           *(int *)(puVar18 + -0x14) + *(int *)(puVar18 + -0xc) +
           (uint)CARRY2(uVar11,*(uint *)(puVar18 + -0xe));
      *(uint *)(puVar18 + -0x12) = uVar11 + uVar9;
      if ((*(int *)(puVar18 + -0x10) < *(int *)(puVar18 + -0xc)) ||
         ((*(int *)(puVar18 + -0x10) <= *(int *)(puVar18 + -0xc) &&
          (*(uint *)(puVar18 + -0x12) < *(uint *)(puVar18 + -0xe) ||
           *(uint *)(puVar18 + -0x12) == *(uint *)(puVar18 + -0xe))))) {
        uVar26 = 0;
      }
      else {
        uVar26 = 1;
      }
      *(undefined2 *)(puVar18 + -0x14) = 0;
      *(undefined2 *)(puVar18 + -0x16) = uVar26;
      puVar2 = (uint *)(puVar18 + -0xe);
      uVar11 = *puVar2;
      *puVar2 = *puVar2 + 1;
      *(uint *)(puVar18 + -0xc) = *(int *)(puVar18 + -0xc) + (uint)(0xfffe < uVar11);
    }
    puVar2 = (uint *)(puVar18 + -10);
    uVar11 = *puVar2;
    *puVar2 = *puVar2 + 1;
    *(uint *)(puVar18 + -8) = *(int *)(puVar18 + -8) + (uint)(0xfffe < uVar11);
  }
  *(undefined2 *)(puVar19 + -2) = *(undefined2 *)(puVar18 + -0x14);
  *(undefined2 *)(puVar19 + -4) = *(undefined2 *)(puVar18 + -0x16);
  *(undefined2 *)(puVar19 + -6) = 0x1ba;
  *(undefined2 *)(puVar19 + -8) = 0x352;
  FUN_1000_0edf();
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
  uint uStack18;
  uint uStack16;
  uint uStack14;
  uint uStack12;
  uint uStack10;
  uint uStack8;
  uint uStack6;
  int iStack4;
  uint uStack2;
  
  uStack2 = 0x129;
  FUN_1000_01a5();
  uStack2 = 0x1000;
  iStack4 = 0x12e;
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
  pbVar1 = pbVar7 + in_BX;
  *pbVar1 = *pbVar1 + cVar3;
  param_1 = (undefined *)register0x00000010;
  FUN_1000_1768(0x194,&uStack2);
  FUN_1000_0edf(0x198,uStack2,iVar4);
  FUN_1000_1768(0x1b2,&uStack18);
  FUN_1000_1768(0x1b6,&uStack14);
  iStack4 = 0;
  for (uStack6 = 1; (iStack4 < iVar4 || ((iStack4 <= iVar4 && (uStack6 <= uStack2))));
      uStack6 = uStack6 + 1) {
    uStack8 = 0;
    for (uStack10 = 1; ((int)uStack8 < 0 || (((int)uStack8 < 1 && (uStack10 < 0x29))));
        uStack10 = uStack10 + 1) {
      bVar8 = CARRY2(uStack18,uStack14);
      uStack14 = uStack18 + uStack14;
      uStack18 = uStack14 + uStack10;
      uStack16 = uStack16 + uStack12 + (uint)bVar8 + uStack8 + (uint)CARRY2(uStack14,uStack10);
      uStack12 = (int)uStack16 >> 1;
      uStack14 = uStack18 >> 1 | (uint)((uStack16 & 1) != 0) << 0xf;
      FUN_1000_1deb(0x1000,uStack14,uStack12,10,0);
      if ((uStack12 == uStack8) && (uStack14 == uStack10)) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
      uVar5 = (uint)((uVar5 | uStack10 | uStack8) == 0);
      uStack14 = uVar5 + uStack10;
      uStack12 = uStack8 + CARRY2(uVar5,uStack10);
      if (((int)uStack12 < (int)uStack8) ||
         (((int)uStack12 <= (int)uStack8 && (uStack14 <= uStack10)))) {
        uStack18 = 0;
      }
      else {
        uStack18 = 1;
      }
      uStack16 = 0;
      uStack8 = uStack8 + (0xfffe < uStack10);
    }
    iStack4 = iStack4 + (uint)(0xfffe < uStack6);
  }
  FUN_1000_0edf(0x1ba,uStack18,uStack16);
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
  _DAT_11ef_0076 = unaff_ES;
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



void FUN_1000_01d2(void)

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
      FUN_1000_1deb(0x1000,local_12,local_10,10,0);
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
  DAT_11ef_0094 = (int)*(char *)(param_1 + 0x1c2);
  DAT_11ef_01c0 = param_1;
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
  undefined2 uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  int extraout_DX;
  int extraout_DX_00;
  char **ppcVar12;
  char *pcVar13;
  char *pcVar14;
  char **ppcVar15;
  undefined2 unaff_SS;
  bool bVar16;
  undefined uVar17;
  code *in_stack_00000000;
  uint uStack22;
  uint uStack20;
  uint uStack18;
  uint uStack16;
  uint uStack14;
  uint uStack12;
  uint uStack10;
  int iStack8;
  uint uStack6;
  int iStack4;
  char **ppcStack2;
  
  DAT_1000_03c6 = 0x11ef;
  uVar7 = (uint)*(byte *)&DAT_11ef_0080;
  puVar8 = (undefined *)(uVar7 + 1);
  pcVar13 = (char *)(DAT_11ef_008a + 2);
  uVar10 = 1;
  ppcVar15 = DAT_11ef_0090;
  ppcVar12 = DAT_11ef_0090;
  DAT_1000_03c4 = in_stack_00000000;
  if (2 < (byte)DAT_11ef_0092) {
    uVar10 = 0x7f;
    pcVar14 = pcVar13;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar1 = pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (*pcVar1 != '\0');
    if (uVar10 == 0) goto LAB_1000_01e2;
    uVar10 = uVar10 ^ 0x7f;
    ppcVar15 = DAT_11ef_008c;
  }
  puVar9 = (undefined *)(uVar7 + 2 + uVar10 & 0xfffe);
  iVar3 = -(int)puVar9;
  pcVar14 = &stack0x0000 + iVar3;
  if (puVar9 <= register0x00000010) {
    *(uint *)((int)&ppcStack2 + iVar3) = uVar10;
    while (uVar10 - 1 != 0) {
      pcVar2 = pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar1 = pcVar13;
      pcVar13 = pcVar13 + 1;
      *pcVar2 = *pcVar1;
      uVar10 = uVar10 - 1;
    }
    bVar16 = false;
    *pcVar14 = '\0';
    uVar17 = uVar10 == 0;
LAB_1000_0437:
    *(undefined2 *)((int)&iStack4 + iVar3) = 0x43a;
    bVar6 = FUN_1000_0453();
    iVar11 = extraout_DX;
    if (bVar16 || (bool)uVar17) {
      do {
        uVar4 = DAT_1000_03c6;
        if (bVar16) {
          iVar11 = *(int *)((int)&ppcStack2 + iVar3) + iVar11;
          *(uint *)&DAT_11ef_0084 = uVar10;
          puVar8 = (undefined *)((uVar10 + 1) * 2);
          ppcVar12 = (char **)(&stack0x0000 + (uVar10 + 1) * -2);
          pcVar13 = (char *)register0x00000010;
          if (register0x00000010 < puVar8) goto LAB_1000_01e2;
          *(int **)&DAT_11ef_0086 = (int *)ppcVar12;
          goto LAB_1000_049b;
        }
        *(undefined2 *)((int)&iStack4 + iVar3) = 0x441;
        bVar6 = FUN_1000_0453();
        iVar11 = extraout_DX_00;
      } while (!bVar16 && !(bool)uVar17);
    }
    if ((bVar6 != 0x20) && (bVar6 != 0xd)) goto code_r0x0001044b;
    goto LAB_1000_044f;
  }
LAB_1000_01e2:
  ppcStack2 = (char **)0x1f1;
  FUN_1000_01da();
  ppcStack2 = (char **)0x3;
  iStack4 = 0x1f8;
  cVar5 = FUN_1000_0121();
  pcVar1 = puVar8 + (int)pcVar13;
  *pcVar1 = *pcVar1 + cVar5;
  ppcStack2 = ppcVar12;
  FUN_1000_1768(0x194,&uStack6);
  FUN_1000_0edf(0x198,uStack6,iStack4);
  FUN_1000_1768(0x1b2,&uStack22);
  FUN_1000_1768(0x1b6,&uStack18);
  iStack8 = 0;
  for (uStack10 = 1; (iStack8 < iStack4 || ((iStack8 <= iStack4 && (uStack10 <= uStack6))));
      uStack10 = uStack10 + 1) {
    uStack12 = 0;
    for (uStack14 = 1; ((int)uStack12 < 0 || (((int)uStack12 < 1 && (uStack14 < 0x29))));
        uStack14 = uStack14 + 1) {
      bVar16 = CARRY2(uStack22,uStack18);
      uStack18 = uStack22 + uStack18;
      uStack22 = uStack18 + uStack14;
      uStack20 = uStack20 + uStack16 + (uint)bVar16 + uStack12 + (uint)CARRY2(uStack18,uStack14);
      uStack16 = (int)uStack20 >> 1;
      uStack18 = uStack22 >> 1 | (uint)((uStack20 & 1) != 0) << 0xf;
      FUN_1000_1deb(0x1000,uStack18,uStack16,10,0);
      if ((uStack16 == uStack12) && (uStack18 == uStack14)) {
        uVar10 = 1;
      }
      else {
        uVar10 = 0;
      }
      uVar10 = (uint)((uVar10 | uStack14 | uStack12) == 0);
      uStack18 = uVar10 + uStack14;
      uStack16 = uStack12 + CARRY2(uVar10,uStack14);
      if (((int)uStack16 < (int)uStack12) ||
         (((int)uStack16 <= (int)uStack12 && (uStack18 <= uStack14)))) {
        uStack22 = 0;
      }
      else {
        uStack22 = 1;
      }
      uStack20 = 0;
      uStack12 = uStack12 + (0xfffe < uStack14);
    }
    iStack8 = iStack8 + (uint)(0xfffe < uStack10);
  }
  FUN_1000_0edf(0x1ba,uStack22,uStack20);
  return;
code_r0x0001044b:
  bVar16 = bVar6 < 9;
  uVar17 = bVar6 == 9;
  if ((bool)uVar17) {
LAB_1000_044f:
    bVar16 = false;
    uVar17 = true;
  }
  goto LAB_1000_0437;
  while( true ) {
    *ppcVar12 = (char *)register0x00000010;
    ppcVar12 = ppcVar12 + 1;
    do {
      pcVar1 = (char *)register0x00000010;
      register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 1);
      bVar16 = *pcVar1 != '\0';
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0 && bVar16);
    if (bVar16) break;
LAB_1000_049b:
    if (iVar11 == 0) break;
  }
  *ppcVar12 = (char *)0x0;
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
  char cVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  char **in_BX;
  char *unaff_SI;
  char *pcVar7;
  bool bVar8;
  uint uStack22;
  uint uStack20;
  uint uStack18;
  uint uStack16;
  uint uStack14;
  uint uStack12;
  uint uStack10;
  int iStack8;
  uint uStack6;
  int iStack4;
  undefined2 uVar9;
  
  iStack4 = 0x4bd;
  iVar6 = DAT_11ef_008a;
  pcVar5 = (char *)FUN_1000_0604();
  uVar9 = DAT_11ef_008c;
  if (pcVar5 != (char *)0x0) {
    unaff_SI = (char *)0x0;
    pcVar7 = pcVar5;
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      pcVar2 = pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar1 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      *pcVar2 = *pcVar1;
    }
    uVar9 = 0x11ef;
    iStack4 = DAT_11ef_008e;
    uStack6 = 0x4db;
    in_BX = (char **)FUN_1000_0604();
    DAT_11ef_0088 = in_BX;
    if (in_BX != (char **)0x0) {
      iVar6 = -1;
      do {
        *in_BX = pcVar5;
        in_BX = in_BX + 1;
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar1 = pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (*pcVar1 != '\0');
        if (*pcVar5 == '\0') {
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
  FUN_1000_1768(0x194,&uStack6);
  FUN_1000_0edf(0x198,uStack6,iStack4);
  FUN_1000_1768(0x1b2,&uStack22);
  FUN_1000_1768(0x1b6,&uStack18);
  iStack8 = 0;
  for (uStack10 = 1; (iStack8 < iStack4 || ((iStack8 <= iStack4 && (uStack10 <= uStack6))));
      uStack10 = uStack10 + 1) {
    uStack12 = 0;
    for (uStack14 = 1; ((int)uStack12 < 0 || (((int)uStack12 < 1 && (uStack14 < 0x29))));
        uStack14 = uStack14 + 1) {
      bVar8 = CARRY2(uStack22,uStack18);
      uStack18 = uStack22 + uStack18;
      uStack22 = uStack18 + uStack14;
      uStack20 = uStack20 + uStack16 + (uint)bVar8 + uStack12 + (uint)CARRY2(uStack18,uStack14);
      uStack16 = (int)uStack20 >> 1;
      uStack18 = uStack22 >> 1 | (uint)((uStack20 & 1) != 0) << 0xf;
      FUN_1000_1deb(0x1000,uStack18,uStack16,10,0);
      if ((uStack16 == uStack12) && (uStack18 == uStack14)) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      uVar4 = (uint)((uVar4 | uStack14 | uStack12) == 0);
      uStack18 = uVar4 + uStack14;
      uStack16 = uStack12 + CARRY2(uVar4,uStack14);
      if (((int)uStack16 < (int)uStack12) ||
         (((int)uStack16 <= (int)uStack12 && (uStack18 <= uStack14)))) {
        uStack22 = 0;
      }
      else {
        uStack22 = 1;
      }
      uStack20 = 0;
      uStack12 = uStack12 + (0xfffe < uStack14);
    }
    iStack8 = iStack8 + (uint)(0xfffe < uStack10);
  }
  FUN_1000_0edf(0x1ba,uStack22,uStack20);
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
  undefined auStack258 [256];
  
  if (param_1 < auStack258) {
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
  if ((param_2 + (uint)CARRY2(param_1,DAT_11ef_009e) + (uint)(0xfeff < uVar1) != 0) ||
     (uVar2 = DAT_11ef_009e, &stack0xfffe <= (undefined *)(uVar1 + 0x100))) {
    DAT_11ef_0094 = 8;
    uVar2 = 0xffff;
    uVar1 = DAT_11ef_009e;
  }
  DAT_11ef_009e = uVar1;
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
  else if ((*(uint *)(param_1 * 2 + 0x46a) & 0x8000) == 0) {
    puVar1 = (uint *)(param_1 * 2 + 0x46a);
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



void __cdecl16near FUN_1000_0d66(uint param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 10) {
    iVar1 = (int)param_1 >> 0xf;
  }
  else {
    iVar1 = 0;
  }
  FUN_1000_0ce7(param_1 & 0xff00 | 0x61,1,param_3,param_2,param_1,iVar1);
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



void FUN_1000_0dd2(uint param_1,int param_2)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int unaff_SI;
  bool bVar6;
  uint uStack14;
  uint uStack12;
  uint uStack10;
  uint uStack8;
  uint uStack6;
  uint uStack4;
  uint uStack2;
  
  iVar5 = 2;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  FUN_1000_01da();
  param_2 = 0x1f8;
  cVar3 = FUN_1000_0121();
  pcVar1 = (char *)(iVar5 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar3;
  FUN_1000_1768(0x194,&param_1);
  FUN_1000_0edf(0x198,param_1,param_2);
  FUN_1000_1768(0x1b2,&uStack14);
  FUN_1000_1768(0x1b6,&uStack10);
  iVar5 = 0;
  for (uStack2 = 1; (iVar5 < param_2 || ((iVar5 <= param_2 && (uStack2 <= param_1))));
      uStack2 = uStack2 + 1) {
    uStack4 = 0;
    for (uStack6 = 1; ((int)uStack4 < 0 || (((int)uStack4 < 1 && (uStack6 < 0x29))));
        uStack6 = uStack6 + 1) {
      bVar6 = CARRY2(uStack14,uStack10);
      uStack10 = uStack14 + uStack10;
      uStack14 = uStack10 + uStack6;
      uStack12 = uStack12 + uStack8 + (uint)bVar6 + uStack4 + (uint)CARRY2(uStack10,uStack6);
      uStack8 = (int)uStack12 >> 1;
      uStack10 = uStack14 >> 1 | (uint)((uStack12 & 1) != 0) << 0xf;
      FUN_1000_1deb(0x1000,uStack10,uStack8,10,0);
      if ((uStack8 == uStack4) && (uStack10 == uStack6)) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      uVar4 = (uint)((uVar4 | uStack6 | uStack4) == 0);
      uStack10 = uVar4 + uStack6;
      uStack8 = uStack4 + CARRY2(uVar4,uStack6);
      if (((int)uStack8 < (int)uStack4) || (((int)uStack8 <= (int)uStack4 && (uStack10 <= uStack6)))
         ) {
        uStack14 = 0;
      }
      else {
        uStack14 = 1;
      }
      uStack12 = 0;
      uStack4 = uStack4 + (0xfffe < uStack6);
    }
    iVar5 = iVar5 + (uint)(0xfffe < uStack2);
  }
  FUN_1000_0edf(0x1ba,uStack14,uStack12);
  return;
}



void FUN_1000_0dd7(uint param_1,int param_2)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int unaff_SI;
  bool bVar6;
  uint uStack14;
  uint uStack12;
  uint uStack10;
  uint uStack8;
  uint uStack6;
  uint uStack4;
  uint uStack2;
  
  iVar5 = 2;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  FUN_1000_01da();
  param_2 = 0x1f8;
  cVar3 = FUN_1000_0121();
  pcVar1 = (char *)(iVar5 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar3;
  FUN_1000_1768(0x194,&param_1);
  FUN_1000_0edf(0x198,param_1,param_2);
  FUN_1000_1768(0x1b2,&uStack14);
  FUN_1000_1768(0x1b6,&uStack10);
  iVar5 = 0;
  for (uStack2 = 1; (iVar5 < param_2 || ((iVar5 <= param_2 && (uStack2 <= param_1))));
      uStack2 = uStack2 + 1) {
    uStack4 = 0;
    for (uStack6 = 1; ((int)uStack4 < 0 || (((int)uStack4 < 1 && (uStack6 < 0x29))));
        uStack6 = uStack6 + 1) {
      bVar6 = CARRY2(uStack14,uStack10);
      uStack10 = uStack14 + uStack10;
      uStack14 = uStack10 + uStack6;
      uStack12 = uStack12 + uStack8 + (uint)bVar6 + uStack4 + (uint)CARRY2(uStack10,uStack6);
      uStack8 = (int)uStack12 >> 1;
      uStack10 = uStack14 >> 1 | (uint)((uStack12 & 1) != 0) << 0xf;
      FUN_1000_1deb(0x1000,uStack10,uStack8,10,0);
      if ((uStack8 == uStack4) && (uStack10 == uStack6)) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      uVar4 = (uint)((uVar4 | uStack6 | uStack4) == 0);
      uStack10 = uVar4 + uStack6;
      uStack8 = uStack4 + CARRY2(uVar4,uStack6);
      if (((int)uStack8 < (int)uStack4) || (((int)uStack8 <= (int)uStack4 && (uStack10 <= uStack6)))
         ) {
        uStack14 = 0;
      }
      else {
        uStack14 = 1;
      }
      uStack12 = 0;
      uStack4 = uStack4 + (0xfffe < uStack6);
    }
    iVar5 = iVar5 + (uint)(0xfffe < uStack2);
  }
  FUN_1000_0edf(0x1ba,uStack14,uStack12);
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
  uint uVar7;
  
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



int FUN_1000_1107(undefined4 *param_1,char *param_2)

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
LAB_1000_1171:
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
          if (0x5f < (byte)(cVar15 - 0x20U)) goto LAB_1000_15fe;
          cVar4 = *(char *)((byte)(cVar15 - 0x20U) + 0x4e1);
          cVar22 = cVar4 * '\x02';
          bVar20 = (byte)((uint)pcVar19 >> 8);
          param_2 = pcVar21;
          uVar27 = unaff_SS;
          pcVar14 = local_94;
          pcVar5 = local_92;
          switch(cVar4) {
          case '\0':
            if (bVar20 != 0) goto LAB_1000_15fe;
            if (local_8f != '+') {
              local_8f = cVar15;
            }
            break;
          case '\x01':
            if (bVar20 != 0) goto LAB_1000_15fe;
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
              if (bVar20 != 4) goto LAB_1000_15fe;
              pcVar19 = (char *)0x500;
            }
            break;
          case '\x03':
            if (bVar20 != 0) goto LAB_1000_15fe;
            bVar7 = true;
            break;
          case '\x04':
            if (3 < bVar20) goto LAB_1000_15fe;
            pcVar19 = (char *)0x400;
            break;
          case '\x05':
switchD_1000_11d4_caseD_5:
            pcVar16 = (char *)(int)(char)(cVar15 + -0x30);
            if (bVar20 < 3) {
              pcVar19 = (char *)0x200;
              pcVar14 = pcVar16;
              if (-1 < (int)local_94) {
                pcVar14 = pcVar16 + (int)local_94 * 10;
              }
            }
            else {
              if (bVar20 != 4) goto LAB_1000_15fe;
              pcVar5 = pcVar16;
              if (-1 < (int)local_92) {
                pcVar5 = pcVar16 + (int)local_92 * 10;
              }
            }
            break;
          case '\x06':
            bVar6 = true;
            pcVar19 = (char *)0x500;
            break;
          case '\a':
            bVar12 = true;
            bVar6 = false;
            pcVar19 = (char *)0x500;
            break;
          case '\b':
            bVar11 = true;
            bVar6 = false;
            pcVar19 = (char *)0x500;
            break;
          case '\t':
            if (bVar20 != 0) goto switchD_1000_11d4_caseD_5;
            if (!bVar7) {
              bVar9 = true;
              pcVar19 = (char *)0x100;
            }
            break;
          case '\n':
            goto switchD_1000_11d4_caseD_a;
          case '\v':
            uVar28 = CONCAT11(8,cVar22);
            goto LAB_1000_130e;
          case '\f':
            uVar28 = CONCAT11(10,cVar22);
            goto LAB_1000_1313;
          case '\r':
            uVar28 = CONCAT11(0x10,cVar15 + -0x17);
LAB_1000_130e:
            local_8f = '\0';
LAB_1000_1313:
            local_95 = 0;
            pcVar17 = *(char **)param_1;
            pcVar21 = (char *)0x0;
            goto LAB_1000_1336;
          case '\x0e':
            puVar18 = (uint *)&local_8a;
            puVar24 = (undefined4 *)((int)param_1 + 2);
            if (bVar10) {
              FUN_1000_10dc(*(char **)(undefined4 *)((int)param_1 + 2),*(char **)param_1);
              puVar18 = local_89;
              local_8a = 0x3a;
              puVar24 = param_1 + 1;
            }
            param_1 = puVar24;
            FUN_1000_10dc();
            *(undefined *)puVar18 = 0;
            puVar25 = (uint *)&local_8a;
            pcVar19 = (char *)((int)puVar18 - (int)puVar25);
            goto LAB_1000_14bb;
          case '\x0f':
            pcVar19 = local_92;
            if ((int)local_92 < 0) {
              pcVar19 = (char *)((int)s_Turbo_C___Copyright__c__1988_Bor_11ef_0004 + 2);
            }
            if (bVar11) {
              uVar28 = 2;
              local_6 = 4;
            }
            else if (bVar12) {
              uVar28 = 8;
              local_6 = 10;
            }
            else {
              local_6 = 8;
              uVar28 = 6;
            }
            thunk_FUN_1000_0dd2(uVar28,local_9a,cVar15,local_89,pcVar19,param_1);
            puVar25 = local_89;
            param_1 = (undefined4 *)((int)param_1 + local_6);
            goto LAB_1000_14bb;
          case '\x10':
            puVar1 = param_1;
            param_1 = (undefined4 *)((int)param_1 + 2);
            puVar25 = local_89;
            local_89[0] = (uint)*(char **)puVar1 & 0xff;
            pcVar19 = (char *)0x1;
            goto LAB_1000_14fc;
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
              uVar27 = 0x11ef;
              puVar18 = puVar25;
            }
            if (puVar18 == (uint *)0x0) {
              uVar27 = 0x11ef;
              puVar25 = (uint *)0x4ca;
            }
            FUN_1000_1120();
            if (local_92 < pcVar19) {
              pcVar19 = local_92;
            }
            goto LAB_1000_14fc;
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
              uVar28 = 0x11ef;
            }
            *piVar26 = (uint)(byte)(0x50 - local_57) + local_5a;
            goto LAB_1000_1171;
          default:
            goto LAB_1000_15fe;
          case '\x16':
            bVar10 = false;
            pcVar19 = (char *)0x500;
            break;
          case '\x17':
            bVar10 = true;
            pcVar19 = (char *)0x500;
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
      FUN_1000_1135();
    }
    goto LAB_1000_1171;
  }
  goto LAB_1000_1606;
switchD_1000_11d4_caseD_a:
  uVar28 = CONCAT11(10,cVar22);
  local_95 = 1;
  pcVar17 = *(char **)param_1;
  pcVar21 = (char *)((int)pcVar17 >> 0xf);
LAB_1000_1336:
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
          FUN_1000_112d();
          local_94 = local_94 + -1;
        } while (local_94 != (char *)0x0);
      }
      goto LAB_1000_1171;
    }
  }
  else {
    local_9a = local_9a | 4;
  }
  FUN_1000_0ce7(uVar28,local_95,(char)((uint)uVar28 >> 8),puVar25,pcVar17,pcVar21);
  if ((int)local_92 < 1) {
LAB_1000_14bb:
    if ((!bVar9) || ((int)local_94 < 1)) goto LAB_1000_14dd;
  }
  FUN_1000_1120();
  if (*(char *)puVar25 == '-') {
    pcVar19 = pcVar19 + -1;
  }
  if (extraout_DX - (int)pcVar19 != 0 && (int)pcVar19 <= extraout_DX) {
    local_8e = extraout_DX - (int)pcVar19;
  }
LAB_1000_14dd:
  if ((local_8f != '\0') && (*(char *)puVar25 != '-')) {
    local_8e = local_8e + -1 + (uint)(local_8e == 0);
    puVar25 = (uint *)((int)puVar25 + -1);
    *(char *)puVar25 = local_8f;
  }
  FUN_1000_1120();
LAB_1000_14fc:
  if (local_9a == 5) {
    if (cVar15 == 'o') {
      if (local_8e < 1) {
        local_8e = 1;
      }
    }
    else if ((cVar15 == 'x') || (cVar15 == 'X')) {
      bVar13 = true;
      local_94 = local_94 + -2;
      bVar6 = local_8e < 2;
      local_8e = local_8e + -2;
      if (bVar6) {
        local_8e = 0;
      }
    }
  }
  pcVar19 = pcVar19 + local_8e;
  if (!bVar7) {
    for (; (int)pcVar19 < (int)local_94; local_94 = local_94 + -1) {
      FUN_1000_112d();
    }
  }
  if (bVar13) {
    FUN_1000_112d();
    FUN_1000_112d();
  }
  if (0 < local_8e) {
    pcVar19 = pcVar19 + -local_8e;
    local_94 = local_94 + -local_8e;
    cVar15 = *(char *)puVar25;
    if (((cVar15 == '-') || (cVar15 == ' ')) || (cVar15 == '+')) {
      puVar25 = (uint *)((int)puVar25 + 1);
      FUN_1000_112d();
      pcVar19 = pcVar19 + -1;
      local_94 = local_94 + -1;
      local_8e = extraout_DX_00;
    }
    for (; local_8e != 0; local_8e = local_8e + -1) {
      FUN_1000_112d();
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
        FUN_1000_1135();
      }
      pcVar19 = pcVar19 + -1;
    } while (pcVar19 != (char *)0x0);
  }
  if (0 < (int)local_94) {
    do {
      FUN_1000_112d();
      local_94 = local_94 + -1;
    } while (local_94 != (char *)0x0);
  }
  goto LAB_1000_1171;
LAB_1000_15fe:
  do {
    FUN_1000_112d();
    pcVar3 = pcVar17;
    pcVar17 = pcVar17 + 1;
  } while (*pcVar3 != '\0');
LAB_1000_1606:
  if (local_57 < 'P') {
    FUN_1000_1135();
  }
  if (local_4 != 0) {
    local_5a = -1;
  }
  return local_5a;
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



int __cdecl16near FUN_1000_1787(code *param_1,code *param_2,undefined2 param_3,byte *param_4)

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
LAB_1000_17ba:
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
LAB_1000_1828:
    local_24 = puVar12;
    param_4 = pbVar14 + 1;
    puVar7 = (undefined2 *)(int)(char)*pbVar14;
    if ((int)puVar7 < 0) {
      return local_2a;
    }
    bVar9 = *(byte *)(puVar7 + 0x2a1);
    puVar12 = local_24;
    switch(bVar9) {
    case 0:
    case 1:
    case 2:
      goto LAB_1000_1b93;
    case 3:
      goto LAB_1000_17c3;
    case 4:
      bVar3 = true;
      pbVar14 = param_4;
      goto LAB_1000_1828;
    case 5:
      pbVar14 = param_4;
      puVar12 = puVar7 + -0x18;
      if (-1 < (int)local_24) {
        puVar12 = puVar7 + -0x18 + (int)local_24 * 5;
      }
      goto LAB_1000_1828;
    case 6:
      if (!bVar3) {
        FUN_1000_179c();
      }
      puVar12 = local_24;
      if ((int)local_24 < 0) {
        puVar12 = (undefined2 *)0x1;
      }
      if (local_24 == (undefined2 *)0x0) goto LAB_1000_1a8b;
      goto LAB_1000_1a71;
    case 7:
    case 8:
      uVar11 = 10;
      break;
    case 9:
      uVar11 = 0;
      break;
    case 10:
      thunk_FUN_1000_0dd7(param_1,param_2,param_3,(uint)local_24 & 0x7fff,&local_28,&local_26);
      cVar18 = '\0';
      cVar4 = local_26 < 0;
      if (local_26 < 1) {
        thunk_FUN_1000_0dd7();
        if (cVar18 == cVar4) {
          return local_2a;
        }
        goto switchD_1000_1846_caseD_16;
      }
      if (bVar3) {
        thunk_FUN_1000_0dd7();
      }
      else {
        FUN_1000_179c();
        local_2a = local_2a + 1;
        if (bVar17) {
          uVar11 = 4;
        }
        else if (bVar16) {
          uVar11 = 8;
        }
        else {
          uVar11 = 0;
        }
        thunk_FUN_1000_0dd7(puVar7,uVar11);
      }
      goto LAB_1000_17ba;
    case 0xb:
      bVar16 = true;
      pbVar14 = param_4;
      goto LAB_1000_1828;
    case 0xc:
      pbVar14 = param_4;
      goto LAB_1000_1828;
    case 0xd:
      bVar17 = true;
      pbVar14 = param_4;
      goto LAB_1000_1828;
    case 0xe:
      uVar11 = 8;
      break;
    case 0xf:
      iVar5 = 0x1a03;
      goto LAB_1000_1b9a;
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
              FUN_1000_179c();
            }
            goto LAB_1000_1b0b;
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
      goto switchD_1000_1846_caseD_11;
    case 0x12:
      uVar11 = 0x10;
      break;
    case 0x13:
      iVar5 = 0x192c;
      goto LAB_1000_1b9a;
    case 0x14:
      pbVar14 = param_4;
      goto LAB_1000_1828;
    case 0x15:
      pbVar14 = param_4;
      goto LAB_1000_1828;
    default:
      goto switchD_1000_1846_caseD_16;
    }
    if (((uint)puVar7 & 0x20) == 0) {
      bVar17 = true;
    }
    FUN_1000_1c60(param_1,param_2,param_3,uVar11,(uint)local_24 & 0x7fff,&local_28,&local_26);
    if (local_26 < 1) {
      if (-1 < local_26) {
        return local_2a;
      }
      goto switchD_1000_1846_caseD_16;
    }
    if (bVar3) goto LAB_1000_17ba;
    local_2a = local_2a + 1;
    goto LAB_1000_1912;
  }
LAB_1000_17c3:
  iVar5 = (int)(char)bVar9;
  local_28 = local_28 + 1;
  iVar6 = (*param_1)(param_3);
  if (-1 < iVar6) goto code_r0x000117d3;
  goto switchD_1000_1846_caseD_16;
switchD_1000_1846_caseD_11:
  pbVar14 = param_4;
  if (!bVar3) goto LAB_1000_1912;
  goto LAB_1000_1828;
LAB_1000_1b0b:
  puVar7 = (undefined2 *)((int)puVar12 - 1);
  if (0 < (int)puVar12) {
    local_28 = local_28 + 1;
    uVar8 = (*param_1)(param_3);
    if ((int)uVar8 < 0) {
      if (((int)puVar12 < (int)local_24) && (!bVar3)) {
        *pbVar15 = 0;
        local_2a = local_2a + 1;
      }
      goto switchD_1000_1846_caseD_16;
    }
    if ((*(byte *)((int)local_22 + (uVar8 >> 3)) & '\x01' << ((byte)uVar8 & 7)) == 0) {
      if (!bVar17) goto LAB_1000_1b4a;
    }
    else if (bVar17) {
LAB_1000_1b4a:
      (*param_2)(uVar8,param_3);
      local_28 = local_28 + -1;
      if ((int)local_24 <= (int)puVar12) goto LAB_1000_1b67;
      goto LAB_1000_1b5e;
    }
    puVar12 = puVar7;
    if (!bVar3) {
      pbVar1 = pbVar15;
      pbVar15 = pbVar15 + 1;
      *pbVar1 = (byte)uVar8;
    }
    goto LAB_1000_1b0b;
  }
LAB_1000_1b5e:
  if (!bVar3) {
    local_2a = local_2a + 1;
LAB_1000_1b67:
    *pbVar15 = 0;
  }
  goto LAB_1000_17ba;
LAB_1000_1b9a:
  local_28 = local_28 + 1;
  iVar6 = (*param_1)(param_3);
  if (iVar6 < 1) {
    if (iVar6 != 0) {
switchD_1000_1846_caseD_16:
      (*param_2)(0xffff,param_3);
      return local_2a - (uint)(local_2a == 0);
    }
LAB_1000_1bb5:
                    // WARNING: Could not recover jumptable at 0x00011bb9. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar5 = (*(code *)(iVar5 + 3))();
    return iVar5;
  }
  if (((char)iVar6 < '\0') || (*(char *)(iVar6 + 0x542) != '\x01')) goto LAB_1000_1bb5;
  goto LAB_1000_1b9a;
LAB_1000_1912:
  uVar19 = FUN_1000_179c();
  *puVar7 = (int)uVar19;
  if (bVar17) {
    puVar7[1] = (int)((ulong)uVar19 >> 0x10);
  }
  goto LAB_1000_17ba;
  while (puVar13 = (undefined2 *)((int)puVar12 - 1), bVar17 = 0 < (int)puVar12, puVar12 = puVar13,
        puVar13 != (undefined2 *)0x0 && bVar17) {
LAB_1000_1a71:
    local_28 = local_28 + 1;
    iVar5 = (*param_1)(param_3);
    if (!bVar3) {
      puVar2 = puVar7;
      puVar7 = (undefined2 *)((int)puVar7 + 1);
      *(char *)puVar2 = (char)iVar5;
    }
    if (iVar5 < 0) goto switchD_1000_1846_caseD_16;
  }
LAB_1000_1a8b:
  if (!bVar3) {
    local_2a = local_2a + 1;
  }
  goto LAB_1000_17ba;
code_r0x000117d3:
  if ((iVar5 < 0) || (*(char *)(iVar5 + 0x542) != '\x01')) {
    if (iVar6 != iVar5) {
      (*param_2)(iVar6,param_3);
LAB_1000_1b93:
      return local_2a;
    }
  }
  else {
    while ((-1 < (char)iVar6 && (*(char *)(iVar6 + 0x542) == '\x01'))) {
      local_28 = local_28 + 1;
      iVar6 = (*param_1)(param_3);
      if (iVar6 < 1) goto switchD_1000_1846_caseD_16;
    }
    (*param_2)(iVar6,param_3);
    local_28 = local_28 + -1;
  }
  goto LAB_1000_17ba;
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



undefined4 FUN_1000_1deb(undefined2 param_1_00,uint param_1,uint param_2,uint param_3,uint param_4)

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


