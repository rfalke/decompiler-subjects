typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};




void entry(void)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  char **ppcVar4;
  char cVar5;
  byte bVar6;
  undefined uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint extraout_ECX;
  int extraout_ECX_00;
  char extraout_DH;
  char extraout_DH_00;
  byte bVar11;
  int extraout_EDX;
  code *pcVar12;
  code *pcVar13;
  char **ppcVar14;
  char **ppcVar15;
  char **ppcVar16;
  char **ppcVar17;
  int *piVar18;
  char **ppcVar19;
  char **ppcVar20;
  int *piVar21;
  undefined1 *puVar22;
  char *pcVar23;
  char *pcVar24;
  code *pcVar25;
  byte *pbVar26;
  char *pcVar27;
  char *pcVar28;
  uint uVar29;
  uint uVar30;
  char *pcVar31;
  undefined4 *puVar32;
  undefined4 *puVar33;
  int *piVar34;
  bool bVar35;
  bool bVar36;
  byte bVar37;
  ulonglong uVar38;
  
  bVar37 = 0;
  puVar22 = &DAT_0804845b;
  DAT_08048440 = &DAT_080534ac;
  pcVar25 = (code *)swi(0x80);
  DAT_08048457 = (*pcVar25)();
  ppcVar17 = (char **)&stack0x0000000c;
  while( true ) {
    pcVar23 = *ppcVar17;
    ppcVar15 = ppcVar17 + 1;
    ppcVar14 = ppcVar17 + 1;
    if (pcVar23 == (char *)0x0) break;
    ppcVar4 = ppcVar17 + 1;
    if (*pcVar23 != '-') goto LAB_080480a6;
    pcVar31 = pcVar23 + (uint)bVar37 * -2 + 1;
    if (*pcVar23 == pcVar23[(uint)bVar37 * -2 + 1]) {
      ppcVar15 = ppcVar17 + 2;
      ppcVar4 = ppcVar17 + 2;
      if (ppcVar17[1] != (char *)0x0) goto LAB_080480a6;
      break;
    }
    while( true ) {
      pcVar23 = pcVar31 + (uint)bVar37 * -2 + 1;
      cVar5 = *pcVar31;
      ppcVar17 = ppcVar14;
      if (cVar5 == '\0') break;
      iVar10 = 0xc;
      pcVar31 = s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5 + 0x13;
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        cVar1 = *pcVar31;
        pcVar31 = pcVar31 + (uint)bVar37 * -2 + 1;
      } while (cVar5 != cVar1);
      *(char *)(iVar10 + 0x804844c) = cVar5;
      pcVar31 = pcVar23;
      if (cVar5 == 'C') {
        DAT_08048456 = '\0';
        DAT_08048457 = '\0';
        DAT_08048458 = 0;
        DAT_08048459 = '\0';
      }
    }
  }
  *(undefined4 *)((int)ppcVar15 + -4) = 0x2e;
  *(undefined4 *)((int)ppcVar15 + -8) = 0;
  ppcVar4 = (char **)((int)ppcVar15 + -8);
LAB_080480a6:
  do {
    ppcVar16 = ppcVar4;
    ppcVar16[-1] = (char *)0x80480ab;
    FUN_080480c7();
    ppcVar20 = ppcVar16 + 2;
    ppcVar4 = ppcVar16 + 2;
  } while (ppcVar16[1] != (char *)0x0);
  DAT_08048458 = ':';
  ppcVar16[1] = (char *)0x80480bf;
  FUN_08048395();
  ppcVar16[1] = (char *)0x1;
  pcVar25 = (code *)swi(0x80);
  (*pcVar25)();
  pcVar23 = &DAT_0804845c + (uint)bVar37 * -2;
  DAT_0804845b = 10;
  pcVar31 = &DAT_080534ac;
  pcVar27 = pcVar23;
  do {
    pcVar24 = pcVar31 + (uint)bVar37 * -2 + 1;
    cVar5 = *pcVar31;
    pcVar28 = pcVar27 + (uint)bVar37 * -2 + 1;
    *pcVar27 = cVar5;
    pcVar31 = pcVar24;
    pcVar27 = pcVar28;
  } while (cVar5 != '\0');
  uVar8 = ppcVar16[3];
  ppcVar16[3] = pcVar24;
  ppcVar16[2] = (char *)uVar8;
  bVar35 = pcVar28 < pcVar23;
  uVar29 = (int)pcVar28 - (int)pcVar23;
  uVar30 = uVar29 - 1;
  bVar36 = uVar30 == 0;
  ppcVar16[1] = (char *)0x80480e1;
  cVar5 = FUN_0804827f();
  if (!bVar35) {
    if ((!bVar36) || (cVar5 != DAT_0804844d)) {
      ppcVar16[1] = &DAT_0804946c;
      *ppcVar16 = pcVar23;
      ppcVar17 = ppcVar16 + -1;
      ppcVar16[-1] = (char *)uVar30;
      puVar32 = (undefined4 *)&DAT_0804946c;
      cVar5 = (char)((int)uVar30 >> 0x27);
      if (cVar5 != DAT_08048452) {
        ppcVar16[-2] = (char *)0x8048125;
        uVar8 = FUN_080483b9();
        uVar30 = CONCAT31((int3)((uint)uVar8 >> 8),0x20);
        puVar32 = (undefined4 *)(&DAT_0804946d + (uint)bVar37 * -2);
        DAT_0804946c = 0x20;
        cVar5 = extraout_DH;
      }
      puVar33 = puVar32;
      if (cVar5 != DAT_08048454) {
        ppcVar16[-2] = (char *)0x8048136;
        uVar8 = FUN_080483b9();
        uVar30 = CONCAT31((int3)((uint)uVar8 >> 8),0x20);
        puVar33 = (undefined4 *)((int)puVar32 + (uint)bVar37 * -2 + 1);
        *(undefined *)puVar32 = 0x20;
        cVar5 = extraout_DH_00;
      }
      bVar11 = DAT_08048408._1_1_;
      bVar6 = (byte)DAT_08048408;
      if (cVar5 != DAT_08048456) {
        ppcVar16[-2] = (char *)(uVar30 & 0xffffff00 | (uint)(DAT_08048408._1_1_ >> 4));
        *(char *)puVar33 =
             s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5[(DAT_08048408._1_1_ >> 4) + 10];
        uVar30 = 0x124;
        bVar35 = (bVar11 & 1) != 0;
        uVar29 = (uint)CONCAT11(bVar11 >> 1,bVar6);
        piVar18 = (int *)((int)puVar33 + (uint)bVar37 * -2 + 1);
        while( true ) {
          bVar6 = 7;
          if (bVar35) {
            bVar6 = (byte)uVar30 & 7;
          }
          if (((uVar30 & 1) != 0) &&
             (bVar11 = (char)(uVar29 >> 8) << 1, uVar29 = (uint)CONCAT11(bVar11,(char)uVar29),
             (bVar11 & 8) != 0)) {
            bVar6 = (bVar6 + (byte)uVar30 & 0x1f) + 1;
          }
          piVar34 = (int *)((int)piVar18 + (uint)bVar37 * -2 + 1);
          *(char *)piVar18 = s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5[bVar6 + 6];
          uVar3 = uVar30 & 1;
          uVar30 = uVar30 >> 1;
          if (uVar30 == 0) break;
          bVar35 = (char)uVar29 < '\0';
          uVar29 = uVar29 & 0xffffff00 | (uint)(byte)((char)uVar29 << 1 | uVar3 != 0);
          piVar18 = piVar34;
        }
        iVar10 = 3;
        ppcVar16[-3] = (char *)FUN_080483b9;
        do {
          ppcVar16[-4] = (char *)0x8048188;
          (*(code *)ppcVar16[-3])();
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        pcVar25 = (code *)ppcVar16[-3];
        if (((byte)ppcVar16[-2] & 0xfb) == 2) {
          ppcVar16[-2] = (char *)0x80481a4;
          (*pcVar25)();
        }
        ppcVar16[-2] = (char *)0x80481a9;
        (*pcVar25)();
        ppcVar16[-2] = (char *)0x4e;
        pcVar12 = (code *)swi(0x80);
        (*pcVar12)();
        iVar10 = *piVar34 - DAT_08048428;
        uVar30 = extraout_ECX;
        pcVar12 = pcVar25 + 0x3d;
        do {
          pcVar13 = pcVar12 + -1;
          uVar30 = uVar30 & 0xffffff00 | (uint)(byte)pcVar12[3];
          if (uVar30 == 0) break;
          iVar10 = iVar10 / (int)uVar30;
          pcVar12 = pcVar13;
        } while (iVar10 != 0);
        ppcVar16[-1] = (char *)0x80481cd;
        uVar30 = (*pcVar25)();
        puVar22 = (undefined1 *)((int)piVar34 + (uint)bVar37 * -2 + 1);
        *(code *)piVar34 = pcVar13[uVar30 & 0xff];
        puVar33 = (undefined4 *)(puVar22 + (uint)bVar37 * -2 + 1);
        *puVar22 = 0x20;
        ppcVar17 = ppcVar16;
      }
      *(undefined4 *)((int)ppcVar17 + 4) = 0x80481d9;
      FUN_08048354();
      if ((DAT_08048408._1_1_ >> 5 == 5) && (DAT_08048456 != '\0')) {
        uVar30 = (uint)bVar37;
        *puVar33 = 0x203e2d20;
        *(undefined4 *)((int)ppcVar17 + 4) = 0x55;
        pcVar25 = (code *)swi(0x80);
        (*pcVar25)();
        *(undefined4 *)((int)ppcVar17 + 8) = 0x8048203;
        FUN_08048354();
        piVar18 = (int *)((int)ppcVar17 + 0xc);
        puVar32 = puVar33 + uVar30 * -2 + 1;
      }
      else {
        piVar18 = (int *)((int)ppcVar17 + 8);
        puVar32 = puVar33;
        if ((DAT_08048455 != '\0') &&
           ((s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5[((uint)DAT_08048408._1_1_ << 0x18) >> 0x1d]
             != '*' || (piVar18 = (int *)((int)ppcVar17 + 8), ((byte)DAT_08048408 & 0x49) != 0)))) {
          puVar32 = (undefined4 *)((int)puVar33 + (uint)bVar37 * -2 + 1);
          *(char *)puVar33 =
               s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5
               [((uint)DAT_08048408._1_1_ << 0x18) >> 0x1d];
          piVar18 = (int *)((int)ppcVar17 + 8);
        }
      }
      uVar7 = 10;
      puVar33 = puVar32;
      if (DAT_08048457 == '\0') {
        iVar10 = ((uint)((int)puVar32 - *piVar18) >> 3) + 1;
        bVar6 = DAT_0804845a + (char)iVar10;
        uVar30 = (uint)bVar6;
        if (10 < bVar6) {
          piVar18[-1] = iVar10;
          piVar18[-2] = 0x804823b;
          FUN_080482a0();
          uVar30 = piVar18[-1];
        }
        uVar7 = 9;
        if (8 < (byte)uVar30) {
          uVar7 = 10;
          uVar30 = 0;
        }
        DAT_0804845a = (char)uVar30;
        if ((uVar30 & 1) != 0) {
          puVar33 = (undefined4 *)((int)puVar32 + (uint)bVar37 * -2 + 1);
          *(undefined *)puVar32 = uVar7;
          DAT_0804845a = DAT_0804845a + '\x01';
        }
      }
      *(undefined *)puVar33 = uVar7;
      *piVar18 = 1;
      *piVar18 = 4;
      pcVar25 = (code *)swi(0x80);
      DAT_08048459 = uVar7;
      (*pcVar25)();
      return;
    }
    if (extraout_EDX == 0) {
      ppcVar16[1] = (char *)0x5;
      pcVar25 = (code *)swi(0x80);
      iVar10 = (*pcVar25)();
      ppcVar19 = ppcVar16 + 3;
      if (-1 < iVar10) {
        ppcVar16[2] = (char *)iVar10;
        if (DAT_08048458 != '\0') {
          DAT_08048459 = DAT_08048458;
          *(uint *)(pcVar23 + uVar30) =
               CONCAT22(CONCAT11(DAT_0804845b,DAT_0804845a),CONCAT11(10,DAT_08048458));
          ppcVar16[1] = (char *)0x1;
          ppcVar16[1] = (char *)0x4;
          pcVar25 = (code *)swi(0x80);
          (*pcVar25)();
          ppcVar20 = ppcVar16 + 3;
        }
        pcVar23[uVar30] = '/';
        uVar8 = *ppcVar20;
        piVar18 = (int *)(ppcVar20 + 1);
        while( true ) {
          piVar21 = piVar18;
          pcVar25 = (code *)swi(0x80);
          uVar38 = (*pcVar25)();
          iVar10 = extraout_ECX_00;
          if ((int)uVar38 < 1) break;
          do {
            *piVar21 = (int)uVar38;
            piVar21[-1] = iVar10;
            piVar21[-2] = (int)(uVar38 >> 0x20);
            piVar21[-3] = uVar8;
            piVar21[-4] = (int)(piVar21 + 1);
            piVar21[-5] = (int)puVar22;
            piVar21[-6] = (int)pcVar23;
            piVar21[-7] = uVar29;
            piVar21[-8] = (int)(char *)(iVar10 + 10);
            iVar9 = (int)uVar38 >> 0x1f;
            pcVar31 = (char *)(iVar10 + 10);
            pcVar23 = pcVar23 + uVar29;
            do {
              iVar10 = iVar9;
              cVar5 = *pcVar31;
              *pcVar23 = cVar5;
              iVar9 = iVar10 + 1;
              pcVar31 = pcVar31 + (uint)bVar37 * -2 + 1;
              pcVar23 = pcVar23 + (uint)bVar37 * -2 + 1;
            } while (cVar5 != '\0');
            pbVar26 = (byte *)piVar21[-8];
            bVar35 = *pbVar26 < 0x2e;
            bVar36 = *pbVar26 == 0x2e;
            if (bVar36) {
              bVar35 = puVar22[-0xd] != '\0';
              bVar36 = puVar22[-0xd] == '\0';
              if (!bVar36) goto LAB_0804831a;
            }
            else {
LAB_0804831a:
              piVar21[-8] = 0x804831f;
              cVar5 = FUN_0804827f();
              if (!bVar35) {
                if ((bVar36) && (cVar5 != puVar22[-10])) {
                  piVar21[-8] = (int)pbVar26;
                  if (*pbVar26 == 0x2e) {
                    bVar6 = pbVar26[(uint)bVar37 * -2 + 1];
                    if (bVar6 == 0x2e) {
                      bVar6 = (pbVar26 + (uint)bVar37 * -2 + 1)[(uint)bVar37 * -2 + 1];
                    }
                    if (bVar6 == 0) goto LAB_08048342;
                  }
                  piVar21[-9] = iVar10;
                  piVar21[-10] = 0x8048340;
                  FUN_080480f2();
                }
LAB_08048342:
                piVar21[-8] = 0x8048347;
                FUN_0804810a();
              }
            }
            uVar29 = piVar21[-7];
            pcVar23 = (char *)piVar21[-6];
            puVar22 = (undefined1 *)piVar21[-5];
            uVar8 = piVar21[-3];
            uVar2 = *(ushort *)(piVar21[-1] + 8);
            uVar30 = (uint)uVar2;
            iVar10 = piVar21[-1] + uVar30;
            iVar9 = *piVar21 - uVar30;
            uVar38 = (ulonglong)CONCAT24(uVar2,iVar9);
            piVar18 = piVar21 + 1;
          } while (iVar9 != 0 && (int)uVar30 <= *piVar21);
        }
        *piVar21 = (int)uVar38;
        piVar21[-1] = 6;
        pcVar25 = (code *)swi(0x80);
        (*pcVar25)();
        iVar10 = piVar21[1];
        ppcVar19 = (char **)(piVar21 + 2);
        uVar30 = uVar29;
      }
      if (iVar10 == 0) {
        if (puVar22[-1] != '\0') {
          puVar22[-1] = 0;
          *(undefined4 *)((int)ppcVar19 + -4) = 1;
          *(undefined4 *)((int)ppcVar19 + -4) = 4;
          pcVar25 = (code *)swi(0x80);
          (*pcVar25)();
        }
        return;
      }
      *(int *)(puVar22 + -0x13) = -iVar10;
      *(undefined4 *)((int)ppcVar19 + -4) = 0x8048269;
      FUN_080482a0();
      *(undefined4 *)(pcVar23 + uVar30) = 0xa3f3f20;
      *(undefined4 *)((int)ppcVar19 + -4) = 2;
      *(undefined4 *)((int)ppcVar19 + -4) = 4;
      pcVar25 = (code *)swi(0x80);
      (*pcVar25)();
      return;
    }
    do {
      cVar5 = *pcVar23;
      pcVar31 = DAT_08048440 + (uint)bVar37 * -2 + 1;
      *DAT_08048440 = cVar5;
      pcVar23 = pcVar23 + (uint)bVar37 * -2 + 1;
      DAT_08048440 = pcVar31;
    } while (cVar5 != '\0');
    ppcVar16[1] = (char *)0x2d;
    pcVar25 = (code *)swi(0x80);
    (*pcVar25)();
  }
  return;
}



void FUN_080480c7(void)

{
  ushort uVar1;
  code *pcVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  undefined uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint extraout_ECX;
  int extraout_ECX_00;
  byte bVar10;
  char extraout_DH;
  int extraout_EDX;
  char extraout_DH_00;
  byte bVar12;
  uint uVar11;
  char *pcVar13;
  undefined4 uVar14;
  char **ppcVar15;
  int *piVar16;
  int *piVar17;
  undefined *unaff_EBP;
  char *unaff_ESI;
  byte *pbVar18;
  int iVar19;
  char *pcVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  int *piVar23;
  undefined1 *puVar24;
  bool bVar25;
  bool bVar26;
  byte bVar27;
  ulonglong uVar28;
  int unaff_retaddr;
  int iStack16;
  char *apcStack12 [2];
  int iStack4;
  
  bVar27 = 0;
  apcStack12[0] = unaff_EBP + 1;
  *unaff_EBP = 10;
  pcVar13 = apcStack12[0];
  do {
    cVar4 = *unaff_ESI;
    pcVar20 = pcVar13 + 1;
    *pcVar13 = cVar4;
    unaff_ESI = unaff_ESI + 1;
    pcVar13 = pcVar20;
  } while (cVar4 != '\0');
  bVar25 = pcVar20 < apcStack12[0];
  iVar19 = (int)pcVar20 - (int)apcStack12[0];
  iStack16 = iVar19 + -1;
  bVar26 = iStack16 == 0;
  apcStack12[1] = (char *)0x80480e1;
  iStack4 = unaff_retaddr;
  cVar4 = FUN_0804827f();
  if (!bVar25) {
    if ((!bVar26) || (cVar4 != unaff_EBP[-0xe])) {
      apcStack12[1] = &DAT_0804946c;
      ppcVar15 = (char **)&iStack16;
      puVar21 = (undefined4 *)&DAT_0804946c;
      cVar4 = (char)(iStack16 >> 0x27);
      if (cVar4 != unaff_EBP[-9]) {
        FUN_080483b9();
        puVar21 = (undefined4 *)(&DAT_0804946d + (uint)bVar27 * -2);
        DAT_0804946c = 0x20;
        cVar4 = extraout_DH;
      }
      puVar22 = puVar21;
      if (cVar4 != unaff_EBP[-7]) {
        FUN_080483b9();
        puVar22 = (undefined4 *)((int)puVar21 + (uint)bVar27 * -2 + 1);
        *(undefined *)puVar21 = 0x20;
        cVar4 = extraout_DH_00;
      }
      if (cVar4 != unaff_EBP[-5]) {
        uVar11 = *(uint *)(unaff_EBP + -0x53);
        bVar5 = (byte)(uVar11 >> 8);
        bVar10 = bVar5 >> 4;
        *(char *)puVar22 = s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5[bVar10 + 10];
        uVar9 = 0x124;
        bVar25 = (uVar11 & 0x100) != 0;
        uVar11 = (uint)CONCAT11(bVar5 >> 1,(char)uVar11);
        piVar16 = (int *)((int)puVar22 + (uint)bVar27 * -2 + 1);
        while( true ) {
          bVar5 = 7;
          if (bVar25) {
            bVar5 = (byte)uVar9 & 7;
          }
          if (((uVar9 & 1) != 0) &&
             (bVar12 = (char)(uVar11 >> 8) << 1, uVar11 = (uint)CONCAT11(bVar12,(char)uVar11),
             (bVar12 & 8) != 0)) {
            bVar5 = (bVar5 + (byte)uVar9 & 0x1f) + 1;
          }
          piVar23 = (int *)((int)piVar16 + (uint)bVar27 * -2 + 1);
          *(char *)piVar16 = s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5[bVar5 + 6];
          uVar3 = uVar9 & 1;
          uVar9 = uVar9 >> 1;
          if (uVar9 == 0) break;
          bVar25 = (char)uVar11 < '\0';
          uVar11 = uVar11 & 0xffffff00 | (uint)(byte)((char)uVar11 << 1 | uVar3 != 0);
          piVar16 = piVar23;
        }
        iVar19 = 3;
        do {
          FUN_080483b9();
          iVar19 = iVar19 + -1;
        } while (iVar19 != 0);
        if ((bVar10 & 0xfb) == 2) {
          FUN_080483b9();
        }
        FUN_080483b9();
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        ppcVar15 = apcStack12;
        iVar19 = *piVar23 - *(int *)(unaff_EBP + -0x33);
        uVar11 = extraout_ECX;
        pcVar13 = s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5 + 0x21;
        do {
          pcVar20 = pcVar13 + -1;
          uVar11 = uVar11 & 0xffffff00 | (uint)(byte)pcVar13[3];
          if (uVar11 == 0) break;
          iVar19 = iVar19 / (int)uVar11;
          pcVar13 = pcVar20;
        } while (iVar19 != 0);
        iStack16 = 0x80481cd;
        uVar11 = FUN_080483b9();
        puVar24 = (undefined1 *)((int)piVar23 + (uint)bVar27 * -2 + 1);
        *(char *)piVar23 = pcVar20[uVar11 & 0xff];
        puVar22 = (undefined4 *)(puVar24 + (uint)bVar27 * -2 + 1);
        *puVar24 = 0x20;
      }
      *(undefined4 *)((int)ppcVar15 + 4) = 0x80481d9;
      FUN_08048354();
      if (((byte)(*(uint *)(unaff_EBP + -0x55) >> 0x1d) == 5) && (unaff_EBP[-5] != '\0')) {
        uVar11 = (uint)bVar27;
        *puVar22 = 0x203e2d20;
        *(undefined4 *)((int)ppcVar15 + 4) = 0x55;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        *(undefined4 *)((int)ppcVar15 + 8) = 0x8048203;
        FUN_08048354();
        piVar16 = (int *)((int)ppcVar15 + 0xc);
        puVar21 = puVar22 + uVar11 * -2 + 1;
      }
      else {
        piVar16 = (int *)((int)ppcVar15 + 8);
        puVar21 = puVar22;
        if ((unaff_EBP[-6] != '\0') &&
           ((s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5[*(uint *)(unaff_EBP + -0x55) >> 0x1d] !=
             '*' || (piVar16 = (int *)((int)ppcVar15 + 8), (unaff_EBP[-0x53] & 0x49) != 0)))) {
          puVar21 = (undefined4 *)((int)puVar22 + (uint)bVar27 * -2 + 1);
          *(char *)puVar22 =
               s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5[*(uint *)(unaff_EBP + -0x55) >> 0x1d];
          piVar16 = (int *)((int)ppcVar15 + 8);
        }
      }
      uVar6 = 10;
      puVar22 = puVar21;
      if (unaff_EBP[-4] == '\0') {
        iVar19 = ((uint)((int)puVar21 - *piVar16) >> 3) + 1;
        bVar10 = unaff_EBP[-1] + (char)iVar19;
        uVar11 = (uint)bVar10;
        if (10 < bVar10) {
          piVar16[-1] = iVar19;
          piVar16[-2] = 0x804823b;
          FUN_080482a0();
          uVar11 = piVar16[-1];
        }
        uVar6 = 9;
        if (8 < (byte)uVar11) {
          uVar6 = 10;
          uVar11 = 0;
        }
        cVar4 = (char)uVar11;
        if ((uVar11 & 1) != 0) {
          puVar22 = (undefined4 *)((int)puVar21 + (uint)bVar27 * -2 + 1);
          *(undefined *)puVar21 = uVar6;
          cVar4 = cVar4 + '\x01';
        }
        unaff_EBP[-1] = cVar4;
      }
      *(undefined *)puVar22 = uVar6;
      unaff_EBP[-2] = uVar6;
      *piVar16 = 1;
      *piVar16 = 4;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      return;
    }
    if (extraout_EDX == 0) {
      apcStack12[1] = (char *)0x5;
      pcVar2 = (code *)swi(0x80);
      iVar7 = (*pcVar2)();
      if (-1 < iVar7) {
        iStack4 = iVar7;
        cVar4 = (char)*(uint *)(unaff_EBP + -3);
        piVar16 = &iStack4;
        if (cVar4 != '\0') {
          unaff_EBP[-2] = cVar4;
          *(uint *)(apcStack12[0] + iStack16) =
               *(uint *)(unaff_EBP + -3) & 0xffff0000 | (uint)CONCAT11(10,cVar4);
          apcStack12[1] = (char *)0x4;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          piVar16 = (int *)register0x00000010;
        }
        apcStack12[0][iStack16] = '/';
        uVar14 = *piVar16;
        piVar16 = piVar16 + 1;
        while( true ) {
          piVar17 = piVar16;
          pcVar2 = (code *)swi(0x80);
          uVar28 = (*pcVar2)();
          iVar7 = extraout_ECX_00;
          if ((int)uVar28 < 1) break;
          do {
            *piVar17 = (int)uVar28;
            piVar17[-1] = iVar7;
            piVar17[-2] = (int)(uVar28 >> 0x20);
            piVar17[-3] = uVar14;
            piVar17[-4] = (int)(piVar17 + 1);
            piVar17[-5] = (int)unaff_EBP;
            piVar17[-6] = (int)apcStack12[0];
            piVar17[-7] = iVar19;
            piVar17[-8] = (int)(char *)(iVar7 + 10);
            iVar8 = (int)uVar28 >> 0x1f;
            pcVar13 = (char *)(iVar7 + 10);
            pcVar20 = apcStack12[0] + iVar19;
            do {
              iVar19 = iVar8;
              cVar4 = *pcVar13;
              *pcVar20 = cVar4;
              iVar8 = iVar19 + 1;
              pcVar13 = pcVar13 + (uint)bVar27 * -2 + 1;
              pcVar20 = pcVar20 + (uint)bVar27 * -2 + 1;
            } while (cVar4 != '\0');
            pbVar18 = (byte *)piVar17[-8];
            bVar25 = *pbVar18 < 0x2e;
            bVar26 = *pbVar18 == 0x2e;
            if (bVar26) {
              bVar25 = unaff_EBP[-0xd] != '\0';
              bVar26 = unaff_EBP[-0xd] == '\0';
              if (!bVar26) goto LAB_0804831a;
            }
            else {
LAB_0804831a:
              piVar17[-8] = 0x804831f;
              cVar4 = FUN_0804827f();
              if (!bVar25) {
                if ((bVar26) && (cVar4 != unaff_EBP[-10])) {
                  piVar17[-8] = (int)pbVar18;
                  if (*pbVar18 == 0x2e) {
                    bVar10 = pbVar18[(uint)bVar27 * -2 + 1];
                    if (bVar10 == 0x2e) {
                      bVar10 = (pbVar18 + (uint)bVar27 * -2 + 1)[(uint)bVar27 * -2 + 1];
                    }
                    if (bVar10 == 0) goto LAB_08048342;
                  }
                  piVar17[-9] = iVar19;
                  piVar17[-10] = 0x8048340;
                  FUN_080480f2();
                }
LAB_08048342:
                piVar17[-8] = 0x8048347;
                FUN_0804810a();
              }
            }
            iVar19 = piVar17[-7];
            apcStack12[0] = (char *)piVar17[-6];
            unaff_EBP = (undefined *)piVar17[-5];
            uVar14 = piVar17[-3];
            uVar1 = *(ushort *)(piVar17[-1] + 8);
            uVar11 = (uint)uVar1;
            iVar7 = piVar17[-1] + uVar11;
            iVar8 = *piVar17 - uVar11;
            uVar28 = (ulonglong)CONCAT24(uVar1,iVar8);
            piVar16 = piVar17 + 1;
          } while (iVar8 != 0 && (int)uVar11 <= *piVar17);
        }
        *piVar17 = (int)uVar28;
        piVar17[-1] = 6;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        iVar7 = piVar17[1];
        register0x00000010 = (BADSPACEBASE *)(piVar17 + 2);
        iStack16 = iVar19;
      }
      if (iVar7 == 0) {
        if (unaff_EBP[-1] != '\0') {
          unaff_EBP[-1] = 0;
          *(undefined4 *)((int)register0x00000010 + -4) = 1;
          *(undefined4 *)((int)register0x00000010 + -4) = 4;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
        }
        return;
      }
      *(int *)(unaff_EBP + -0x13) = -iVar7;
      *(undefined4 *)((int)register0x00000010 + -4) = 0x8048269;
      FUN_080482a0();
      *(undefined4 *)(apcStack12[0] + iStack16) = 0xa3f3f20;
      *(undefined4 *)((int)register0x00000010 + -4) = 2;
      *(undefined4 *)((int)register0x00000010 + -4) = 4;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      return;
    }
    pcVar13 = *(char **)(unaff_EBP + -0x1b);
    do {
      cVar4 = *apcStack12[0];
      pcVar20 = pcVar13 + (uint)bVar27 * -2 + 1;
      *pcVar13 = cVar4;
      apcStack12[0] = apcStack12[0] + (uint)bVar27 * -2 + 1;
      pcVar13 = pcVar20;
    } while (cVar4 != '\0');
    *(char **)(unaff_EBP + -0x1b) = pcVar20;
    apcStack12[1] = (char *)0x2d;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
  }
  return;
}



void FUN_080480f2(void)

{
  char cVar1;
  char *pcVar2;
  code *pcVar3;
  int unaff_EBP;
  char *unaff_ESI;
  char *pcVar4;
  
  pcVar4 = *(char **)(unaff_EBP + -0x1b);
  do {
    cVar1 = *unaff_ESI;
    pcVar2 = pcVar4 + 1;
    *pcVar4 = cVar1;
    unaff_ESI = unaff_ESI + 1;
    pcVar4 = pcVar2;
  } while (cVar1 != '\0');
  *(char **)(unaff_EBP + -0x1b) = pcVar2;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  return;
}



void FUN_0804810a(void)

{
  code *pcVar1;
  uint uVar2;
  byte bVar3;
  undefined uVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_ECX;
  byte bVar7;
  char cVar8;
  char extraout_DH;
  char extraout_DH_00;
  byte bVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  undefined *puVar13;
  int *piVar14;
  int unaff_EBP;
  undefined4 unaff_EDI;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  undefined1 *puVar18;
  bool bVar19;
  byte bVar20;
  int iStack4;
  
  bVar20 = 0;
  puVar13 = &stack0xfffffff4;
  puVar15 = (undefined4 *)&DAT_0804946c;
  cVar8 = (char)((int)unaff_EDI >> 0x27);
  if (cVar8 != *(char *)(unaff_EBP + -9)) {
    FUN_080483b9();
    puVar15 = (undefined4 *)(&DAT_0804946d + (uint)bVar20 * -2);
    DAT_0804946c = 0x20;
    cVar8 = extraout_DH;
  }
  puVar16 = puVar15;
  if (cVar8 != *(char *)(unaff_EBP + -7)) {
    FUN_080483b9();
    puVar16 = (undefined4 *)((int)puVar15 + (uint)bVar20 * -2 + 1);
    *(undefined *)puVar15 = 0x20;
    cVar8 = extraout_DH_00;
  }
  if (cVar8 != *(char *)(unaff_EBP + -5)) {
    uVar5 = *(uint *)(unaff_EBP + -0x53);
    bVar3 = (byte)(uVar5 >> 8);
    bVar7 = bVar3 >> 4;
    *(char *)puVar16 = s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5[bVar7 + 10];
    uVar6 = 0x124;
    bVar19 = (uVar5 & 0x100) != 0;
    uVar5 = (uint)CONCAT11(bVar3 >> 1,(char)uVar5);
    piVar14 = (int *)((int)puVar16 + (uint)bVar20 * -2 + 1);
    while( true ) {
      bVar3 = 7;
      if (bVar19) {
        bVar3 = (byte)uVar6 & 7;
      }
      if (((uVar6 & 1) != 0) &&
         (bVar9 = (char)(uVar5 >> 8) << 1, uVar5 = (uint)CONCAT11(bVar9,(char)uVar5),
         (bVar9 & 8) != 0)) {
        bVar3 = (bVar3 + (byte)uVar6 & 0x1f) + 1;
      }
      piVar17 = (int *)((int)piVar14 + (uint)bVar20 * -2 + 1);
      *(char *)piVar14 = s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5[bVar3 + 6];
      uVar2 = uVar6 & 1;
      uVar6 = uVar6 >> 1;
      if (uVar6 == 0) break;
      bVar19 = (char)uVar5 < '\0';
      uVar5 = uVar5 & 0xffffff00 | (uint)(byte)((char)uVar5 << 1 | uVar2 != 0);
      piVar14 = piVar17;
    }
    iVar10 = 3;
    do {
      FUN_080483b9();
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    if ((bVar7 & 0xfb) == 2) {
      FUN_080483b9();
    }
    FUN_080483b9();
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar13 = &stack0xfffffff8;
    iVar10 = *piVar17 - *(int *)(unaff_EBP + -0x33);
    uVar5 = extraout_ECX;
    pcVar11 = s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5 + 0x21;
    do {
      pcVar12 = pcVar11 + -1;
      uVar5 = uVar5 & 0xffffff00 | (uint)(byte)pcVar11[3];
      if (uVar5 == 0) break;
      iVar10 = iVar10 / (int)uVar5;
      pcVar11 = pcVar12;
    } while (iVar10 != 0);
    uVar5 = FUN_080483b9();
    puVar18 = (undefined1 *)((int)piVar17 + (uint)bVar20 * -2 + 1);
    *(char *)piVar17 = pcVar12[uVar5 & 0xff];
    puVar16 = (undefined4 *)(puVar18 + (uint)bVar20 * -2 + 1);
    *puVar18 = 0x20;
  }
  *(undefined4 *)(puVar13 + 4) = 0x80481d9;
  FUN_08048354();
  if (((byte)(*(uint *)(unaff_EBP + -0x55) >> 0x1d) == 5) && (*(char *)(unaff_EBP + -5) != '\0')) {
    uVar5 = (uint)bVar20;
    *puVar16 = 0x203e2d20;
    *(undefined4 *)(puVar13 + 4) = 0x55;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    *(undefined4 *)(puVar13 + 8) = 0x8048203;
    FUN_08048354();
    piVar14 = (int *)(puVar13 + 0xc);
    puVar15 = puVar16 + uVar5 * -2 + 1;
  }
  else {
    piVar14 = (int *)(puVar13 + 8);
    puVar15 = puVar16;
    if ((*(char *)(unaff_EBP + -6) != '\0') &&
       ((s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5[*(uint *)(unaff_EBP + -0x55) >> 0x1d] != '*' ||
        (piVar14 = (int *)(puVar13 + 8), (*(byte *)(unaff_EBP + -0x53) & 0x49) != 0)))) {
      puVar15 = (undefined4 *)((int)puVar16 + (uint)bVar20 * -2 + 1);
      *(char *)puVar16 =
           s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5[*(uint *)(unaff_EBP + -0x55) >> 0x1d];
      piVar14 = (int *)(puVar13 + 8);
    }
  }
  uVar4 = 10;
  puVar16 = puVar15;
  if (*(char *)(unaff_EBP + -4) == '\0') {
    iVar10 = ((uint)((int)puVar15 - *piVar14) >> 3) + 1;
    bVar7 = *(char *)(unaff_EBP + -1) + (char)iVar10;
    uVar5 = (uint)bVar7;
    if (10 < bVar7) {
      piVar14[-1] = iVar10;
      piVar14[-2] = 0x804823b;
      FUN_080482a0();
      uVar5 = piVar14[-1];
    }
    uVar4 = 9;
    if (8 < (byte)uVar5) {
      uVar4 = 10;
      uVar5 = 0;
    }
    cVar8 = (char)uVar5;
    if ((uVar5 & 1) != 0) {
      puVar16 = (undefined4 *)((int)puVar15 + (uint)bVar20 * -2 + 1);
      *(undefined *)puVar15 = uVar4;
      cVar8 = cVar8 + '\x01';
    }
    *(char *)(unaff_EBP + -1) = cVar8;
  }
  *(undefined *)puVar16 = uVar4;
  *(undefined *)(unaff_EBP + -2) = uVar4;
  *piVar14 = 1;
  *piVar14 = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}



void FUN_0804827f(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    return;
  }
  *(int *)(unaff_EBP + -0x13) = -iVar2;
  FUN_080482a0();
  *(undefined4 *)(unaff_EDI + unaff_ESI) = 0xa3f3f20;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}



void FUN_080482a0(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -1) != '\0') {
    *(undefined *)(unaff_EBP + -1) = 0;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
  }
  return;
}



void FUN_08048354(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int in_ECX;
  ushort uVar6;
  uint uVar7;
  int unaff_EBP;
  byte *unaff_ESI;
  undefined *unaff_EDI;
  
  uVar7 = *(uint *)(unaff_EBP + -0xc);
  do {
    bVar4 = *unaff_ESI;
    uVar5 = (uint)bVar4;
    uVar6 = (ushort)uVar7;
    if ((char)uVar7 == '\0') {
      uVar5 = (uint)CONCAT11(0x5c,bVar4);
      if ((bVar4 == (byte)(uVar5 >> 8)) || (bVar4 == 0x22)) {
LAB_08048385:
        uVar7 = (uint)uVar6;
        if ((char)(uVar6 >> 8) != '\0') {
          *unaff_EDI = (char)(uVar5 >> 8);
          unaff_EDI = unaff_EDI + 1;
        }
      }
      else if ((0x7e < bVar4) || (bVar4 < 0x20)) {
        uVar3 = uVar7 >> 8;
        uVar7 = uVar7 & 0xffff;
        uVar6 = (ushort)uVar7;
        if ((char)uVar3 != '\0') {
          pbVar1 = unaff_EDI + 1;
          *unaff_EDI = 0x5c;
          iVar2 = CONCAT31((int3)((uVar5 << 0x18) >> 8),0xc) << 2;
          unaff_EDI = unaff_EDI + 2;
          *pbVar1 = (byte)iVar2 | bVar4 >> 6;
          bVar4 = (byte)((uint)iVar2 >> 0x1a);
          uVar5 = (uint)(ushort)(CONCAT11(bVar4 / 8,bVar4 % 8) + 0x3030);
          goto LAB_08048385;
        }
        uVar5 = 0x3f;
      }
    }
    *unaff_EDI = (char)uVar5;
    in_ECX = in_ECX + -1;
    unaff_ESI = unaff_ESI + 1;
    unaff_EDI = unaff_EDI + 1;
    if (in_ECX == 0) {
      return;
    }
  } while( true );
}



void FUN_08048395(void)

{
  uint uVar1;
  int unaff_EBP;
  uint unaff_ESI;
  uint auStack8 [2];
  
  FUN_080482a0();
  uVar1 = *(uint *)(unaff_EBP + -0x1b);
  while (unaff_ESI < uVar1) {
    *(uint *)((int)register0x00000010 + -4) = uVar1;
    *(undefined4 *)((int)register0x00000010 + -8) = 0x80483a9;
    FUN_080480c7();
    *(undefined4 *)((int)register0x00000010 + -8) = 0x80483b2;
    FUN_08048395();
    unaff_ESI = *(uint *)((int)register0x00000010 + -4);
    uVar1 = *(uint *)register0x00000010;
    register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4);
    *(uint *)(unaff_EBP + -0x1b) = uVar1;
  }
  return;
}



void __regparm3 FUN_080483b9(int param_1,int param_2)

{
  int iVar1;
  char *unaff_EDI;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *unaff_EDI = ' ';
    unaff_EDI = unaff_EDI + 1;
  }
  do {
    iVar1 = param_1 / 10;
    unaff_EDI = unaff_EDI + -1;
    *unaff_EDI = (char)(param_1 % 10) + '0';
    param_1 = iVar1;
  } while (iVar1 != 0);
  return;
}


