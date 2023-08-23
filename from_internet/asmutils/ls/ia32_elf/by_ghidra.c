typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

typedef enum Elf_ProgramHeaderType_x86 {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482
} Elf_ProgramHeaderType_x86;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_x86 p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

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




void processEntry entry(void)

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
  int extraout_ECX;
  int extraout_ECX_00;
  char extraout_DH;
  int extraout_EDX;
  char extraout_DH_00;
  byte bVar13;
  uint uVar11;
  uint uVar12;
  code *pcVar14;
  code *pcVar15;
  char **ppcVar16;
  char **ppcVar17;
  char **ppcVar18;
  char **ppcVar19;
  int *piVar20;
  char **ppcVar21;
  char **ppcVar22;
  int *piVar23;
  undefined *puVar24;
  char *pcVar25;
  char *pcVar26;
  code *pcVar27;
  byte *pbVar28;
  char *pcVar29;
  char *pcVar30;
  int iVar31;
  char *pcVar32;
  undefined4 *puVar33;
  undefined4 *puVar34;
  int *piVar35;
  undefined1 *puVar36;
  bool bVar37;
  bool bVar38;
  byte bVar39;
  ulonglong uVar40;
  
  bVar39 = 0;
  puVar24 = &DAT_0804845b;
  DAT_08048440 = &DAT_080534ac;
  pcVar27 = (code *)swi(0x80);
  DAT_08048456._1_1_ = (*pcVar27)();
  ppcVar19 = (char **)&stack0x0000000c;
  while( true ) {
    pcVar25 = *ppcVar19;
    ppcVar17 = ppcVar19 + 1;
    ppcVar16 = ppcVar19 + 1;
    if (pcVar25 == (char *)0x0) break;
    ppcVar4 = ppcVar19 + 1;
    if (*pcVar25 != '-') goto LAB_080480a6;
    pcVar32 = pcVar25 + (uint)bVar39 * -2 + 1;
    if (*pcVar25 == pcVar25[(uint)bVar39 * -2 + 1]) {
      ppcVar17 = ppcVar19 + 2;
      ppcVar4 = ppcVar19 + 2;
      if (ppcVar19[1] != (char *)0x0) goto LAB_080480a6;
      break;
    }
    while( true ) {
      pcVar25 = pcVar32 + (uint)bVar39 * -2 + 1;
      cVar5 = *pcVar32;
      ppcVar19 = ppcVar16;
      if (cVar5 == '\0') break;
      iVar10 = 0xc;
      pcVar32 = s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5 + 0x13;
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        cVar1 = *pcVar32;
        pcVar32 = pcVar32 + (uint)bVar39 * -2 + 1;
      } while (cVar5 != cVar1);
      *(char *)(iVar10 + 0x804844c) = cVar5;
      pcVar32 = pcVar25;
      if (cVar5 == 'C') {
        DAT_08048456._0_1_ = '\0';
        DAT_08048456._1_1_ = '\0';
        DAT_08048456._2_1_ = 0;
        DAT_08048456._3_1_ = '\0';
      }
    }
  }
  *(undefined4 *)((int)ppcVar17 + -4) = 0x2e;
  *(undefined4 *)((int)ppcVar17 + -8) = 0;
  ppcVar4 = (char **)((int)ppcVar17 + -8);
LAB_080480a6:
  do {
    ppcVar18 = ppcVar4;
    ppcVar18[-1] = (char *)0x80480ab;
    FUN_080480c7();
    ppcVar22 = ppcVar18 + 2;
    ppcVar4 = ppcVar18 + 2;
  } while (ppcVar18[1] != (char *)0x0);
  DAT_08048456._2_1_ = ':';
  ppcVar18[1] = (char *)0x80480bf;
  FUN_08048395();
  ppcVar18[1] = (char *)0x1;
  pcVar27 = (code *)swi(0x80);
  (*pcVar27)();
  pcVar25 = (char *)((uint)bVar39 * -2 + 0x804845c);
  DAT_0804845b = 10;
  pcVar32 = &DAT_080534ac;
  pcVar29 = pcVar25;
  do {
    pcVar26 = pcVar32 + (uint)bVar39 * -2 + 1;
    cVar5 = *pcVar32;
    pcVar30 = pcVar29 + (uint)bVar39 * -2 + 1;
    *pcVar29 = cVar5;
    pcVar32 = pcVar26;
    pcVar29 = pcVar30;
  } while (cVar5 != '\0');
  uVar8 = ppcVar18[3];
  ppcVar18[3] = pcVar26;
  ppcVar18[2] = (char *)uVar8;
  bVar37 = pcVar30 < pcVar25;
  iVar31 = (int)pcVar30 - (int)pcVar25;
  iVar10 = iVar31 + -1;
  bVar38 = iVar10 == 0;
  ppcVar18[1] = (char *)0x80480e1;
  cVar5 = FUN_0804827f();
  if (!bVar37) {
    if ((!bVar38) || (cVar5 != cRam0804844d)) {
      ppcVar18[1] = &DAT_0804946c;
      *ppcVar18 = pcVar25;
      ppcVar19 = ppcVar18 + -1;
      ppcVar18[-1] = (char *)iVar10;
      puVar33 = (undefined4 *)&DAT_0804946c;
      cVar5 = (char)(iVar10 >> 0x1f);
      if (cVar5 != cRam08048452) {
        ppcVar18[-2] = (char *)0x8048125;
        uVar8 = FUN_080483b9();
        iVar10 = CONCAT31((int3)((uint)uVar8 >> 8),0x20);
        puVar33 = (undefined4 *)(&DAT_0804946d + (uint)bVar39 * -2);
        DAT_0804946c = 0x20;
        cVar5 = extraout_DH;
      }
      puVar34 = puVar33;
      if (cVar5 != cRam08048454) {
        ppcVar18[-2] = (char *)0x8048136;
        uVar8 = FUN_080483b9();
        iVar10 = CONCAT31((int3)((uint)uVar8 >> 8),0x20);
        puVar34 = (undefined4 *)((int)puVar33 + (uint)bVar39 * -2 + 1);
        *(undefined *)puVar33 = 0x20;
        cVar5 = extraout_DH_00;
      }
      bVar13 = bRam08048409;
      bVar6 = bRam08048408;
      if (cVar5 != (char)DAT_08048456) {
        ppcVar18[-2] = (char *)CONCAT31((int3)((uint)iVar10 >> 8),bRam08048409 >> 4);
        *(char *)puVar34 = s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5[(bRam08048409 >> 4) + 10];
        uVar12 = 0x124;
        bVar37 = (bVar13 & 1) != 0;
        uVar11 = (uint)CONCAT11(bVar13 >> 1,bVar6);
        piVar20 = (int *)((int)puVar34 + (uint)bVar39 * -2 + 1);
        while( true ) {
          bVar6 = 7;
          if (bVar37) {
            bVar6 = (byte)uVar12 & 7;
          }
          if (((uVar12 & 1) != 0) &&
             (bVar13 = (char)(uVar11 >> 8) << 1, uVar11 = (uint)CONCAT11(bVar13,(char)uVar11),
             (bVar13 & 8) != 0)) {
            bVar6 = (bVar6 + (byte)uVar12 & 0x1f) + 1;
          }
          piVar35 = (int *)((int)piVar20 + (uint)bVar39 * -2 + 1);
          *(char *)piVar20 = s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5[bVar6 + 6];
          uVar3 = uVar12 & 1;
          uVar12 = uVar12 >> 1;
          if (uVar12 == 0) break;
          bVar37 = (char)uVar11 < '\0';
          uVar11 = CONCAT31((int3)(uVar11 >> 8),(char)uVar11 << 1 | uVar3 != 0);
          piVar20 = piVar35;
        }
        iVar10 = 3;
        ppcVar18[-3] = (char *)FUN_080483b9;
        do {
          ppcVar18[-4] = (char *)0x8048188;
          (*(code *)ppcVar18[-3])();
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        pcVar27 = (code *)ppcVar18[-3];
        if (((byte)ppcVar18[-2] & 0xfb) == 2) {
          ppcVar18[-2] = (char *)0x80481a4;
          (*pcVar27)();
        }
        ppcVar18[-2] = (char *)0x80481a9;
        (*pcVar27)();
        ppcVar18[-2] = (char *)0x4e;
        pcVar14 = (code *)swi(0x80);
        (*pcVar14)();
        iVar31 = *piVar35 - iRam08048428;
        iVar10 = extraout_ECX;
        pcVar14 = pcVar27 + 0x3d;
        do {
          pcVar15 = pcVar14 + -1;
          iVar10 = CONCAT31((int3)((uint)iVar10 >> 8),pcVar14[3]);
          if (iVar10 == 0) break;
          iVar31 = iVar31 / iVar10;
          pcVar14 = pcVar15;
        } while (iVar31 != 0);
        ppcVar18[-1] = (char *)0x80481cd;
        uVar12 = (*pcVar27)();
        puVar36 = (undefined1 *)((int)piVar35 + (uint)bVar39 * -2 + 1);
        *(code *)piVar35 = pcVar15[uVar12 & 0xff];
        puVar34 = (undefined4 *)(puVar36 + (uint)bVar39 * -2 + 1);
        *puVar36 = 0x20;
        ppcVar19 = ppcVar18;
      }
      *(undefined4 *)((int)ppcVar19 + 4) = 0x80481d9;
      FUN_08048354();
      if ((bRam08048409 >> 5 == 5) && ((char)DAT_08048456 != '\0')) {
        uVar12 = (uint)bVar39;
        *puVar34 = 0x203e2d20;
        *(undefined4 *)((int)ppcVar19 + 4) = 0x55;
        pcVar27 = (code *)swi(0x80);
        (*pcVar27)();
        *(undefined4 *)((int)ppcVar19 + 8) = 0x8048203;
        FUN_08048354();
        piVar20 = (int *)((int)ppcVar19 + 0xc);
        puVar33 = puVar34 + uVar12 * -2 + 1;
      }
      else {
        piVar20 = (int *)((int)ppcVar19 + 8);
        puVar33 = puVar34;
        if ((cRam08048455 != '\0') &&
           ((s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5[((uint)bRam08048409 << 0x18) >> 0x1d] !=
             '*' || (piVar20 = (int *)((int)ppcVar19 + 8), (bRam08048408 & 0x49) != 0)))) {
          puVar33 = (undefined4 *)((int)puVar34 + (uint)bVar39 * -2 + 1);
          *(char *)puVar34 =
               s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5[((uint)bRam08048409 << 0x18) >> 0x1d];
          piVar20 = (int *)((int)ppcVar19 + 8);
        }
      }
      uVar7 = 10;
      puVar34 = puVar33;
      if (DAT_08048456._1_1_ == '\0') {
        iVar10 = ((uint)((int)puVar33 - *piVar20) >> 3) + 1;
        bVar6 = cRam0804845a + (char)iVar10;
        uVar12 = (uint)bVar6;
        if (10 < bVar6) {
          piVar20[-1] = iVar10;
          piVar20[-2] = 0x804823b;
          FUN_080482a0();
          uVar12 = piVar20[-1];
        }
        uVar7 = 9;
        if (8 < (byte)uVar12) {
          uVar7 = 10;
          uVar12 = 0;
        }
        cRam0804845a = (char)uVar12;
        if ((uVar12 & 1) != 0) {
          puVar34 = (undefined4 *)((int)puVar33 + (uint)bVar39 * -2 + 1);
          *(undefined *)puVar33 = uVar7;
          cRam0804845a = cRam0804845a + '\x01';
        }
      }
      *(undefined *)puVar34 = uVar7;
      *piVar20 = 1;
      *piVar20 = 4;
      pcVar27 = (code *)swi(0x80);
      DAT_08048456._3_1_ = uVar7;
      (*pcVar27)();
      return;
    }
    if (extraout_EDX == 0) {
      ppcVar18[1] = (char *)0x5;
      pcVar27 = (code *)swi(0x80);
      iVar9 = (*pcVar27)();
      ppcVar21 = ppcVar18 + 3;
      if (-1 < iVar9) {
        ppcVar18[2] = (char *)iVar9;
        if (DAT_08048456._2_1_ != '\0') {
          DAT_08048456._3_1_ = DAT_08048456._2_1_;
          *(uint *)(pcVar25 + iVar10) =
               CONCAT22(CONCAT11(DAT_0804845b,cRam0804845a),CONCAT11(10,DAT_08048456._2_1_));
          ppcVar18[1] = (char *)0x1;
          ppcVar18[1] = (char *)0x4;
          pcVar27 = (code *)swi(0x80);
          (*pcVar27)();
          ppcVar22 = ppcVar18 + 3;
        }
        pcVar25[iVar10] = '/';
        uVar8 = *ppcVar22;
        piVar20 = (int *)(ppcVar22 + 1);
        while( true ) {
          piVar23 = piVar20;
          pcVar27 = (code *)swi(0x80);
          uVar40 = (*pcVar27)();
          iVar10 = extraout_ECX_00;
          if ((int)uVar40 < 1) break;
          do {
            *piVar23 = (int)uVar40;
            piVar23[-1] = iVar10;
            piVar23[-2] = (int)(uVar40 >> 0x20);
            piVar23[-3] = uVar8;
            piVar23[-4] = (int)(piVar23 + 1);
            piVar23[-5] = (int)puVar24;
            piVar23[-6] = (int)pcVar25;
            piVar23[-7] = iVar31;
            piVar23[-8] = (int)(char *)(iVar10 + 10);
            iVar9 = (int)uVar40 >> 0x1f;
            pcVar32 = (char *)(iVar10 + 10);
            pcVar25 = pcVar25 + iVar31;
            do {
              iVar10 = iVar9;
              cVar5 = *pcVar32;
              *pcVar25 = cVar5;
              iVar9 = iVar10 + 1;
              pcVar32 = pcVar32 + (uint)bVar39 * -2 + 1;
              pcVar25 = pcVar25 + (uint)bVar39 * -2 + 1;
            } while (cVar5 != '\0');
            pbVar28 = (byte *)piVar23[-8];
            bVar37 = *pbVar28 < 0x2e;
            bVar38 = *pbVar28 == 0x2e;
            if (bVar38) {
              bVar37 = puVar24[-0xd] != '\0';
              bVar38 = puVar24[-0xd] == '\0';
              if (!bVar38) goto LAB_0804831a;
            }
            else {
LAB_0804831a:
              piVar23[-8] = 0x804831f;
              cVar5 = FUN_0804827f();
              if (!bVar37) {
                if ((bVar38) && (cVar5 != puVar24[-10])) {
                  piVar23[-8] = (int)pbVar28;
                  if (*pbVar28 == 0x2e) {
                    bVar6 = pbVar28[(uint)bVar39 * -2 + 1];
                    if (bVar6 == 0x2e) {
                      bVar6 = (pbVar28 + (uint)bVar39 * -2 + 1)[(uint)bVar39 * -2 + 1];
                    }
                    if (bVar6 == 0) goto LAB_08048342;
                  }
                  piVar23[-9] = iVar10;
                  piVar23[-10] = 0x8048340;
                  FUN_080480f2();
                }
LAB_08048342:
                piVar23[-8] = 0x8048347;
                FUN_0804810a();
              }
            }
            iVar31 = piVar23[-7];
            pcVar25 = (char *)piVar23[-6];
            puVar24 = (undefined *)piVar23[-5];
            uVar8 = piVar23[-3];
            uVar2 = *(ushort *)(piVar23[-1] + 8);
            uVar12 = (uint)uVar2;
            iVar10 = piVar23[-1] + uVar12;
            iVar9 = *piVar23 - uVar12;
            uVar40 = (ulonglong)CONCAT24(uVar2,iVar9);
            piVar20 = piVar23 + 1;
          } while (iVar9 != 0 && (int)uVar12 <= *piVar23);
        }
        *piVar23 = (int)uVar40;
        piVar23[-1] = 6;
        pcVar27 = (code *)swi(0x80);
        (*pcVar27)();
        iVar9 = piVar23[1];
        ppcVar21 = (char **)(piVar23 + 2);
        iVar10 = iVar31;
      }
      if (iVar9 == 0) {
        if (puVar24[-1] != '\0') {
          puVar24[-1] = 0;
          *(undefined4 *)((int)ppcVar21 + -4) = 1;
          *(undefined4 *)((int)ppcVar21 + -4) = 4;
          pcVar27 = (code *)swi(0x80);
          (*pcVar27)();
        }
        return;
      }
      *(int *)(puVar24 + -0x13) = -iVar9;
      *(undefined4 *)((int)ppcVar21 + -4) = 0x8048269;
      FUN_080482a0();
      *(undefined4 *)(pcVar25 + iVar10) = 0xa3f3f20;
      *(undefined4 *)((int)ppcVar21 + -4) = 2;
      *(undefined4 *)((int)ppcVar21 + -4) = 4;
      pcVar27 = (code *)swi(0x80);
      (*pcVar27)();
      return;
    }
    do {
      cVar5 = *pcVar25;
      pcVar32 = DAT_08048440 + (uint)bVar39 * -2 + 1;
      *DAT_08048440 = cVar5;
      pcVar25 = pcVar25 + (uint)bVar39 * -2 + 1;
      DAT_08048440 = pcVar32;
    } while (cVar5 != '\0');
    ppcVar18[1] = (char *)0x2d;
    pcVar27 = (code *)swi(0x80);
    (*pcVar27)();
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
  byte bVar6;
  undefined uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int extraout_ECX;
  int extraout_ECX_00;
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
  int iStack_10;
  char *apcStack_c [2];
  int iStack_4;
  
  bVar27 = 0;
  apcStack_c[0] = unaff_EBP + 1;
  *unaff_EBP = 10;
  pcVar13 = apcStack_c[0];
  do {
    cVar4 = *unaff_ESI;
    pcVar20 = pcVar13 + 1;
    *pcVar13 = cVar4;
    unaff_ESI = unaff_ESI + 1;
    pcVar13 = pcVar20;
  } while (cVar4 != '\0');
  bVar25 = pcVar20 < apcStack_c[0];
  iVar19 = (int)pcVar20 - (int)apcStack_c[0];
  iStack_10 = iVar19 + -1;
  bVar26 = iStack_10 == 0;
  apcStack_c[1] = (char *)0x80480e1;
  iStack_4 = unaff_retaddr;
  cVar4 = FUN_0804827f();
  if (!bVar25) {
    if ((!bVar26) || (cVar4 != unaff_EBP[-0xe])) {
      apcStack_c[1] = &DAT_0804946c;
      ppcVar15 = (char **)&iStack_10;
      puVar21 = (undefined4 *)&DAT_0804946c;
      cVar4 = (char)(iStack_10 >> 0x1f);
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
        bVar6 = (byte)(uVar11 >> 8);
        bVar5 = bVar6 >> 4;
        *(char *)puVar22 = s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5[bVar5 + 10];
        uVar10 = 0x124;
        bVar25 = (uVar11 & 0x100) != 0;
        uVar11 = (uint)CONCAT11(bVar6 >> 1,(char)uVar11);
        piVar16 = (int *)((int)puVar22 + (uint)bVar27 * -2 + 1);
        while( true ) {
          bVar6 = 7;
          if (bVar25) {
            bVar6 = (byte)uVar10 & 7;
          }
          if (((uVar10 & 1) != 0) &&
             (bVar12 = (char)(uVar11 >> 8) << 1, uVar11 = (uint)CONCAT11(bVar12,(char)uVar11),
             (bVar12 & 8) != 0)) {
            bVar6 = (bVar6 + (byte)uVar10 & 0x1f) + 1;
          }
          piVar23 = (int *)((int)piVar16 + (uint)bVar27 * -2 + 1);
          *(char *)piVar16 = s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5[bVar6 + 6];
          uVar3 = uVar10 & 1;
          uVar10 = uVar10 >> 1;
          if (uVar10 == 0) break;
          bVar25 = (char)uVar11 < '\0';
          uVar11 = CONCAT31((int3)(uVar11 >> 8),(char)uVar11 << 1 | uVar3 != 0);
          piVar16 = piVar23;
        }
        iVar19 = 3;
        do {
          FUN_080483b9();
          iVar19 = iVar19 + -1;
        } while (iVar19 != 0);
        if ((bVar5 & 0xfb) == 2) {
          FUN_080483b9();
        }
        FUN_080483b9();
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        ppcVar15 = apcStack_c;
        iVar8 = *piVar23 - *(int *)(unaff_EBP + -0x33);
        iVar19 = extraout_ECX;
        pcVar13 = s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5 + 0x21;
        do {
          pcVar20 = pcVar13 + -1;
          iVar19 = CONCAT31((int3)((uint)iVar19 >> 8),pcVar13[3]);
          if (iVar19 == 0) break;
          iVar8 = iVar8 / iVar19;
          pcVar13 = pcVar20;
        } while (iVar8 != 0);
        iStack_10 = 0x80481cd;
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
      uVar7 = 10;
      puVar22 = puVar21;
      if (unaff_EBP[-4] == '\0') {
        iVar19 = ((uint)((int)puVar21 - *piVar16) >> 3) + 1;
        bVar5 = unaff_EBP[-1] + (char)iVar19;
        uVar11 = (uint)bVar5;
        if (10 < bVar5) {
          piVar16[-1] = iVar19;
          piVar16[-2] = 0x804823b;
          FUN_080482a0();
          uVar11 = piVar16[-1];
        }
        uVar7 = 9;
        if (8 < (byte)uVar11) {
          uVar7 = 10;
          uVar11 = 0;
        }
        cVar4 = (char)uVar11;
        if ((uVar11 & 1) != 0) {
          puVar22 = (undefined4 *)((int)puVar21 + (uint)bVar27 * -2 + 1);
          *(undefined *)puVar21 = uVar7;
          cVar4 = cVar4 + '\x01';
        }
        unaff_EBP[-1] = cVar4;
      }
      *(undefined *)puVar22 = uVar7;
      unaff_EBP[-2] = uVar7;
      *piVar16 = 1;
      *piVar16 = 4;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      return;
    }
    if (extraout_EDX == 0) {
      apcStack_c[1] = (char *)0x5;
      pcVar2 = (code *)swi(0x80);
      iVar8 = (*pcVar2)();
      if (-1 < iVar8) {
        iStack_4 = iVar8;
        cVar4 = (char)*(undefined4 *)(unaff_EBP + -3);
        piVar16 = &iStack_4;
        if (cVar4 != '\0') {
          unaff_EBP[-2] = cVar4;
          *(uint *)(apcStack_c[0] + iStack_10) =
               CONCAT22((short)((uint)*(undefined4 *)(unaff_EBP + -3) >> 0x10),CONCAT11(10,cVar4));
          apcStack_c[1] = (char *)0x4;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          piVar16 = (int *)register0x00000010;
        }
        apcStack_c[0][iStack_10] = '/';
        uVar14 = *piVar16;
        piVar16 = piVar16 + 1;
        while( true ) {
          piVar17 = piVar16;
          pcVar2 = (code *)swi(0x80);
          uVar28 = (*pcVar2)();
          iVar8 = extraout_ECX_00;
          if ((int)uVar28 < 1) break;
          do {
            *piVar17 = (int)uVar28;
            piVar17[-1] = iVar8;
            piVar17[-2] = (int)(uVar28 >> 0x20);
            piVar17[-3] = uVar14;
            piVar17[-4] = (int)(piVar17 + 1);
            piVar17[-5] = (int)unaff_EBP;
            piVar17[-6] = (int)apcStack_c[0];
            piVar17[-7] = iVar19;
            piVar17[-8] = (int)(char *)(iVar8 + 10);
            iVar9 = (int)uVar28 >> 0x1f;
            pcVar13 = (char *)(iVar8 + 10);
            pcVar20 = apcStack_c[0] + iVar19;
            do {
              iVar19 = iVar9;
              cVar4 = *pcVar13;
              *pcVar20 = cVar4;
              iVar9 = iVar19 + 1;
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
                    bVar5 = pbVar18[(uint)bVar27 * -2 + 1];
                    if (bVar5 == 0x2e) {
                      bVar5 = (pbVar18 + (uint)bVar27 * -2 + 1)[(uint)bVar27 * -2 + 1];
                    }
                    if (bVar5 == 0) goto LAB_08048342;
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
            apcStack_c[0] = (char *)piVar17[-6];
            unaff_EBP = (undefined *)piVar17[-5];
            uVar14 = piVar17[-3];
            uVar1 = *(ushort *)(piVar17[-1] + 8);
            uVar11 = (uint)uVar1;
            iVar8 = piVar17[-1] + uVar11;
            iVar9 = *piVar17 - uVar11;
            uVar28 = (ulonglong)CONCAT24(uVar1,iVar9);
            piVar16 = piVar17 + 1;
          } while (iVar9 != 0 && (int)uVar11 <= *piVar17);
        }
        *piVar17 = (int)uVar28;
        piVar17[-1] = 6;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        iVar8 = piVar17[1];
        register0x00000010 = (BADSPACEBASE *)(piVar17 + 2);
        iStack_10 = iVar19;
      }
      if (iVar8 == 0) {
        if (unaff_EBP[-1] != '\0') {
          unaff_EBP[-1] = 0;
          *(undefined4 *)((int)register0x00000010 + -4) = 1;
          *(undefined4 *)((int)register0x00000010 + -4) = 4;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
        }
        return;
      }
      *(int *)(unaff_EBP + -0x13) = -iVar8;
      *(undefined4 *)((int)register0x00000010 + -4) = 0x8048269;
      FUN_080482a0();
      *(undefined4 *)(apcStack_c[0] + iStack_10) = 0xa3f3f20;
      *(undefined4 *)((int)register0x00000010 + -4) = 2;
      *(undefined4 *)((int)register0x00000010 + -4) = 4;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      return;
    }
    pcVar13 = *(char **)(unaff_EBP + -0x1b);
    do {
      cVar4 = *apcStack_c[0];
      pcVar20 = pcVar13 + (uint)bVar27 * -2 + 1;
      *pcVar13 = cVar4;
      apcStack_c[0] = apcStack_c[0] + (uint)bVar27 * -2 + 1;
      pcVar13 = pcVar20;
    } while (cVar4 != '\0');
    *(char **)(unaff_EBP + -0x1b) = pcVar20;
    apcStack_c[1] = (char *)0x2d;
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
  byte bVar4;
  undefined uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int extraout_ECX;
  char cVar9;
  char extraout_DH;
  char extraout_DH_00;
  byte bVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  undefined *puVar14;
  int *piVar15;
  int unaff_EBP;
  undefined4 unaff_EDI;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int *piVar18;
  undefined1 *puVar19;
  bool bVar20;
  byte bVar21;
  int iStack_4;
  
  bVar21 = 0;
  puVar14 = &stack0xfffffff4;
  puVar16 = (undefined4 *)&DAT_0804946c;
  cVar9 = (char)((int)unaff_EDI >> 0x1f);
  if (cVar9 != *(char *)(unaff_EBP + -9)) {
    FUN_080483b9();
    puVar16 = (undefined4 *)(&DAT_0804946d + (uint)bVar21 * -2);
    DAT_0804946c = 0x20;
    cVar9 = extraout_DH;
  }
  puVar17 = puVar16;
  if (cVar9 != *(char *)(unaff_EBP + -7)) {
    FUN_080483b9();
    puVar17 = (undefined4 *)((int)puVar16 + (uint)bVar21 * -2 + 1);
    *(undefined *)puVar16 = 0x20;
    cVar9 = extraout_DH_00;
  }
  if (cVar9 != *(char *)(unaff_EBP + -5)) {
    uVar7 = *(uint *)(unaff_EBP + -0x53);
    bVar4 = (byte)(uVar7 >> 8);
    bVar3 = bVar4 >> 4;
    *(char *)puVar17 = s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5[bVar3 + 10];
    uVar8 = 0x124;
    bVar20 = (uVar7 & 0x100) != 0;
    uVar7 = (uint)CONCAT11(bVar4 >> 1,(char)uVar7);
    piVar15 = (int *)((int)puVar17 + (uint)bVar21 * -2 + 1);
    while( true ) {
      bVar4 = 7;
      if (bVar20) {
        bVar4 = (byte)uVar8 & 7;
      }
      if (((uVar8 & 1) != 0) &&
         (bVar10 = (char)(uVar7 >> 8) << 1, uVar7 = (uint)CONCAT11(bVar10,(char)uVar7),
         (bVar10 & 8) != 0)) {
        bVar4 = (bVar4 + (byte)uVar8 & 0x1f) + 1;
      }
      piVar18 = (int *)((int)piVar15 + (uint)bVar21 * -2 + 1);
      *(char *)piVar15 = s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5[bVar4 + 6];
      uVar2 = uVar8 & 1;
      uVar8 = uVar8 >> 1;
      if (uVar8 == 0) break;
      bVar20 = (char)uVar7 < '\0';
      uVar7 = CONCAT31((int3)(uVar7 >> 8),(char)uVar7 << 1 | uVar2 != 0);
      piVar15 = piVar18;
    }
    iVar11 = 3;
    do {
      FUN_080483b9();
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    if ((bVar3 & 0xfb) == 2) {
      FUN_080483b9();
    }
    FUN_080483b9();
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar14 = &stack0xfffffff8;
    iVar6 = *piVar18 - *(int *)(unaff_EBP + -0x33);
    iVar11 = extraout_ECX;
    pcVar12 = s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5 + 0x21;
    do {
      pcVar13 = pcVar12 + -1;
      iVar11 = CONCAT31((int3)((uint)iVar11 >> 8),pcVar12[3]);
      if (iVar11 == 0) break;
      iVar6 = iVar6 / iVar11;
      pcVar12 = pcVar13;
    } while (iVar6 != 0);
    uVar7 = FUN_080483b9();
    puVar19 = (undefined1 *)((int)piVar18 + (uint)bVar21 * -2 + 1);
    *(char *)piVar18 = pcVar13[uVar7 & 0xff];
    puVar17 = (undefined4 *)(puVar19 + (uint)bVar21 * -2 + 1);
    *puVar19 = 0x20;
  }
  *(undefined4 *)(puVar14 + 4) = 0x80481d9;
  FUN_08048354();
  if (((byte)(*(uint *)(unaff_EBP + -0x55) >> 0x1d) == 5) && (*(char *)(unaff_EBP + -5) != '\0')) {
    uVar7 = (uint)bVar21;
    *puVar17 = 0x203e2d20;
    *(undefined4 *)(puVar14 + 4) = 0x55;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    *(undefined4 *)(puVar14 + 8) = 0x8048203;
    FUN_08048354();
    piVar15 = (int *)(puVar14 + 0xc);
    puVar16 = puVar17 + uVar7 * -2 + 1;
  }
  else {
    piVar15 = (int *)(puVar14 + 8);
    puVar16 = puVar17;
    if ((*(char *)(unaff_EBP + -6) != '\0') &&
       ((s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5[*(uint *)(unaff_EBP + -0x55) >> 0x1d] != '*' ||
        (piVar15 = (int *)(puVar14 + 8), (*(byte *)(unaff_EBP + -0x53) & 0x49) != 0)))) {
      puVar16 = (undefined4 *)((int)puVar17 + (uint)bVar21 * -2 + 1);
      *(char *)puVar17 =
           s________xwtrpc_dTbs_1lFsSiRbNadhm_080483d5[*(uint *)(unaff_EBP + -0x55) >> 0x1d];
      piVar15 = (int *)(puVar14 + 8);
    }
  }
  uVar5 = 10;
  puVar17 = puVar16;
  if (*(char *)(unaff_EBP + -4) == '\0') {
    iVar11 = ((uint)((int)puVar16 - *piVar15) >> 3) + 1;
    bVar3 = *(char *)(unaff_EBP + -1) + (char)iVar11;
    uVar7 = (uint)bVar3;
    if (10 < bVar3) {
      piVar15[-1] = iVar11;
      piVar15[-2] = 0x804823b;
      FUN_080482a0();
      uVar7 = piVar15[-1];
    }
    uVar5 = 9;
    if (8 < (byte)uVar7) {
      uVar5 = 10;
      uVar7 = 0;
    }
    cVar9 = (char)uVar7;
    if ((uVar7 & 1) != 0) {
      puVar17 = (undefined4 *)((int)puVar16 + (uint)bVar21 * -2 + 1);
      *(undefined *)puVar16 = uVar5;
      cVar9 = cVar9 + '\x01';
    }
    *(char *)(unaff_EBP + -1) = cVar9;
  }
  *(undefined *)puVar17 = uVar5;
  *(undefined *)(unaff_EBP + -2) = uVar5;
  *piVar15 = 1;
  *piVar15 = 4;
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
      if ((bVar4 == 0x5c) || (bVar4 == 0x22)) {
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
  uint auStack_8 [2];
  
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


