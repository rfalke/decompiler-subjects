typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
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




int FUN_0804804c(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (-1 < iVar2) {
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x80);
    iVar2 = (*pcVar1)();
  }
  return iVar2;
}



void entry(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  byte *pbVar4;
  uint **ppuVar5;
  byte bVar6;
  undefined uVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  undefined3 uVar12;
  ushort uVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  char **ppcVar20;
  uint **ppuVar25;
  char *pcVar26;
  byte *pbVar27;
  byte *pbVar28;
  int *piVar29;
  int iVar30;
  char *pcVar31;
  char *pcVar32;
  uint *puVar33;
  uint *puVar34;
  bool bVar35;
  byte bVar36;
  undefined8 uVar37;
  char **ppcVar21;
  char **ppcVar22;
  char **ppcVar23;
  char **ppcVar24;
  
  bVar36 = 0;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  pbVar4 = (byte *)s__a__b__d__T__Z__Y_08048386;
  ppcVar20 = (char **)&stack0x0000000c;
LAB_08048096:
  DAT_0804863c = pbVar4;
  pcVar26 = *ppcVar20;
  ppcVar23 = ppcVar20 + 1;
  ppcVar24 = ppcVar20 + 1;
  ppcVar21 = ppcVar20 + 1;
  ppcVar22 = ppcVar20 + 1;
  if (pcVar26 != (char *)0x0) {
    pbVar27 = (byte *)(pcVar26 + (uint)bVar36 * -2 + 1);
    cVar9 = *pcVar26;
    pbVar4 = pbVar27;
    ppcVar20 = ppcVar20 + 1;
    if (cVar9 != '+') {
      pbVar4 = DAT_0804863c;
      if (cVar9 == '=') {
        uVar10 = 0;
        DAT_080485e0 = 0;
        do {
          DAT_080485e0 = uVar10 + DAT_080485e0 * 10;
          bVar6 = *pbVar27 - 0x30;
          uVar10 = (uint)bVar6;
          ppcVar20 = ppcVar23;
          if (*pbVar27 < 0x30) break;
          ppcVar20 = ppcVar24;
          pbVar27 = pbVar27 + (uint)bVar36 * -2 + 1;
        } while (bVar6 < 10);
      }
      else {
        ppcVar20 = ppcVar21;
        if (cVar9 == '-') {
          while( true ) {
            pbVar28 = pbVar27 + (uint)bVar36 * -2 + 1;
            bVar6 = *pbVar27;
            ppcVar20 = ppcVar22;
            if (bVar6 == 0) break;
            pbVar27 = pbVar28;
            if (bVar6 == 0x75) {
              DAT_08048632 = 0x435455;
            }
          }
        }
      }
    }
    goto LAB_08048096;
  }
  DAT_08048640 = &PTR_LAB_08048434;
  piVar16 = &DAT_080485e0;
  *ppcVar20 = (char *)0x10;
  pcVar26 = s_N_ELR__ntZzTDrXxcpBbhAayjGVWUwul_080483b4 + 0x2c;
  pcVar31 = &DAT_08048654;
  for (iVar14 = (int)*ppcVar20; ppuVar5 = (uint **)(ppcVar20 + 1), iVar14 != 0; iVar14 = iVar14 + -1
      ) {
    *pcVar31 = *pcVar26;
    pcVar26 = pcVar26 + (uint)bVar36 * -2 + 1;
    pcVar31 = pcVar31 + (uint)bVar36 * -2 + 1;
  }
  do {
    ppuVar25 = ppuVar5;
    piVar29 = (int *)*ppuVar25;
    if (piVar29 == (int *)0x0) goto LAB_08048118;
    ppuVar5 = ppuVar25 + 1;
  } while ((*piVar29 != 0x474e414c) ||
          (ppuVar5 = ppuVar25 + 1,
          pcVar26 = (char *)((int)(piVar29 + (uint)bVar36 * -2 + 1) + (uint)bVar36 * -2 + 1),
          *(char *)(piVar29 + (uint)bVar36 * -2 + 1) != '='));
  do {
    cVar9 = *pcVar26;
    pcVar32 = pcVar31 + (uint)bVar36 * -2 + 1;
    *pcVar31 = cVar9;
    pcVar26 = pcVar26 + (uint)bVar36 * -2 + 1;
    pcVar31 = pcVar32;
  } while (cVar9 != '\0');
  bVar35 = (int)(pcVar32 + -1) < 0;
  *(undefined4 *)(pcVar32 + -1) = s_N_ELR__ntZzTDrXxcpBbhAayjGVWUwul_080483b4._59_4_;
  *(undefined4 *)(pcVar32 + (uint)bVar36 * -8 + 3) =
       *(undefined4 *)(s_N_ELR__ntZzTDrXxcpBbhAayjGVWUwul_080483b4 + (uint)bVar36 * -8 + 0x3f);
  *(char *)((int)(pcVar32 + (uint)bVar36 * -8 + 3) + ((uint)bVar36 * -2 + 1) * 4) = '\0';
  *ppuVar25 = (uint *)0x8048113;
  uVar37 = FUN_0804804c();
  piVar16 = (int *)((ulonglong)uVar37 >> 0x20);
  if (!bVar35) {
    DAT_08048640 = (undefined **)uVar37;
  }
LAB_08048118:
  uVar10 = 0;
  bVar35 = 0 < *(int *)((int)piVar16 + 0x52);
  if (*(int *)((int)piVar16 + 0x52) == 0) {
    *ppuVar25 = (uint *)0x8048129;
    uVar37 = FUN_0804804c();
    uVar10 = (uint)((ulonglong)uVar37 >> 0x20);
    iVar14 = (int)uVar37;
    if (!bVar35) {
      uVar10 = *(uint *)(iVar14 + 0x20);
      uVar18 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
      uVar19 = *(uint *)(iVar14 + 0x24);
      uVar10 = uVar18;
      do {
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) break;
        uVar15 = *(uint *)(iVar14 + 0x2c + uVar10 * 4);
      } while (*piVar16 <
               (int)(uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                    uVar15 << 0x18));
      iVar14 = iVar14 + 0x2c + uVar18 * 4;
      uVar15 = (uint)*(byte *)(iVar14 + uVar10);
      iVar14 = iVar14 + uVar18;
      uVar10 = *(uint *)(iVar14 + uVar15 * 6);
      uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
      piVar16[0x12] = uVar10;
      *(longlong *)((int)piVar16 + 0x52) =
           (longlong)
           ROUND((float10)*(longlong *)
                           (iVar14 + (uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 |
                                      (uVar19 & 0xff00) << 8 | uVar19 << 0x18) * 6 +
                           (uint)*(byte *)(iVar14 + 5 + uVar15 * 6)));
    }
  }
  uVar7 = 0x2b;
  if ((int)uVar10 < 0) {
    uVar7 = 0x2d;
    uVar10 = -uVar10;
  }
  *(undefined *)(piVar16 + 0x13) = uVar7;
  uVar19 = ((int)uVar10 >> 0x1f) + 0x3c;
  uVar1 = (ulonglong)(uint)((int)((ulonglong)(longlong)(int)uVar10 / (ulonglong)uVar19) >> 0x1f) <<
          0x20 | (ulonglong)(longlong)(int)uVar10 / (ulonglong)uVar19 & 0xffffffff;
  uVar2 = uVar1 % (ulonglong)uVar19;
  bVar6 = (byte)(uVar1 / uVar19);
  bVar8 = (byte)uVar2;
  uVar10 = (CONCAT11(bVar6 / 10,bVar6) & 0xffffff00 | (uint)(bVar6 % 10)) * 0x10000 + 0x30303030 +
           ((uint)uVar2 & 0xffff0000 | CONCAT11(bVar8 / 10,bVar8) & 0xffffff00 | (uint)(bVar8 % 10))
  ;
  *(uint *)((int)piVar16 + 0x4d) =
       uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 * 0x1000000;
  uVar10 = 0x7b1;
  *ppuVar25 = (uint *)0x4;
  iVar30 = (int)*ppuVar25;
  iVar14 = *piVar16 + piVar16[0x12];
  if (SCARRY4(*piVar16,piVar16[0x12]) != iVar14 < 0) {
    iVar14 = iVar14 + 0x1e13380;
    uVar10 = 0x7b0;
    iVar30 = iVar30 + -1;
  }
  *ppuVar25 = (uint *)iVar30;
  uVar19 = (iVar14 >> 0x1f) + 0x3c;
  uVar1 = (ulonglong)(longlong)iVar14 / (ulonglong)uVar19;
  piVar16[1] = (int)((ulonglong)(longlong)iVar14 % (ulonglong)uVar19);
  uVar1 = (ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff;
  uVar2 = uVar1 / uVar19;
  piVar16[2] = (int)(uVar1 % (ulonglong)uVar19);
  uVar1 = (ulonglong)CONCAT31((int3)(uVar19 >> 8),0x18);
  uVar2 = (ulonglong)(uint)((int)uVar2 >> 0x1f) << 0x20 | uVar2 & 0xffffffff;
  iVar14 = (int)(uVar2 / uVar1);
  uVar18 = (uint)(uVar2 % uVar1);
  piVar16[3] = uVar18;
  iVar17 = uVar18 - 0xc;
  *(bool *)(piVar16 + 6) = 0xb < uVar18;
  if (0xb >= uVar18 || iVar17 == 0) {
    do {
      iVar17 = iVar17 + 0xc;
    } while (iVar17 == 0);
  }
  piVar16[5] = iVar17;
  ppuVar25[-1] = (uint *)iVar14;
  uVar18 = uVar19 & 0xffffff00 | 7;
  uVar15 = (uint)((ulonglong)(longlong)(iVar14 + iVar30) % (ulonglong)uVar18);
  piVar16[7] = uVar15;
  if (uVar15 != 0) {
    uVar18 = uVar15;
  }
  piVar16[8] = uVar18;
  uVar19 = uVar19 & 0xffff0000 | 0x100;
  iVar14 = (int)ppuVar25[-1];
  do {
    uVar19 = CONCAT31((int3)(uVar19 >> 8),0x6e);
    uVar10 = uVar10 + 1;
    bVar6 = (byte)uVar10;
    if ((uVar10 & 3) != 0) {
      uVar19 = uVar19 - 1;
    }
    iVar30 = iVar14 - uVar19;
    bVar35 = (int)uVar19 <= iVar14;
    iVar14 = iVar30;
  } while (bVar35);
  iVar30 = iVar30 + uVar19;
  piVar16[4] = uVar10;
  uVar10 = CONCAT11(0x14,bVar6) & 0xffffff00;
  uVar13 = (ushort)uVar10 | (ushort)(byte)(bVar6 + 0x30);
  if (bVar6 < 0xd0) {
    uVar13 = CONCAT11((char)(uVar10 >> 8) + -1,bVar6 + 0x94);
  }
  *(char *)(piVar16 + 0x11) = (char)uVar13;
  *(char *)(piVar16 + 0x10) = (char)(uVar13 >> 8);
  uVar19 = uVar19 + 0xc03bbd7f;
  iVar17 = 0;
  uVar10 = iVar30 >> 0x1f;
  iVar14 = iVar30;
  do {
    uVar10 = CONCAT31((int3)(uVar10 >> 8),7) << 2 | uVar19 >> 0x1e;
    uVar19 = uVar19 >> 2 | uVar19 << 0x1e;
    iVar17 = iVar17 + 1;
    iVar11 = iVar14 - uVar10;
    bVar35 = (int)uVar10 <= iVar14;
    iVar14 = iVar11;
  } while (bVar35);
  piVar29 = piVar16 + (uint)bVar36 * -2 + 10;
  piVar16[9] = iVar11 + uVar10 + 1;
  piVar16 = piVar29 + (uint)bVar36 * -2 + 1;
  *piVar29 = iVar17;
  uVar18 = CONCAT31((int3)((uint)*ppuVar25 >> 8),7);
  uVar19 = (uint)((ulonglong)(longlong)(((int)ppuVar25[-1] - iVar30) + (int)*ppuVar25) %
                 (ulonglong)uVar18);
  uVar10 = uVar18;
  if (uVar19 != 0) {
    uVar10 = uVar19;
  }
  *piVar16 = (int)((ulonglong)(longlong)(int)(iVar30 + uVar10) / (ulonglong)uVar18);
  uVar10 = uVar10 - 1;
  if (uVar10 == 0) {
    uVar10 = 7;
  }
  uVar1 = (ulonglong)(longlong)(int)(iVar30 + uVar10) / (ulonglong)uVar18;
  piVar29 = piVar16 + (uint)bVar36 * -2 + 1 + (uint)bVar36 * -2 + 1;
  piVar16[(uint)bVar36 * -2 + 1] = (int)uVar1;
  uVar19 = piVar29[-9];
  uVar18 = uVar19 & 3 |
           (uint)(uint3)((ulonglong)(longlong)(int)(iVar30 + uVar10) % (ulonglong)uVar18 >> 8) << 8;
  uVar12 = (undefined3)(uVar1 >> 8);
  cVar9 = (char)uVar1 + (uVar10 < 4);
  iVar14 = CONCAT31(uVar12,cVar9);
  if (cVar9 == '\0') {
    uVar19 = uVar19 - 1;
    iVar14 = CONCAT31(uVar12,0x34);
    if ((uVar10 != 4) && ((uVar10 != 5 || (uVar18 = uVar18 - 1, uVar18 != 0)))) goto LAB_08048288;
    iVar14 = iVar14 + 1;
  }
  if (((char)iVar14 == '5') &&
     (*(char *)(piVar29 + -6) < (char)(((char)iVar30 + -0x68) - ((char)uVar18 == '\0')))) {
    iVar14 = CONCAT31((int3)((uint)iVar14 >> 8),1);
    uVar19 = uVar19 + 1;
  }
LAB_08048288:
  puVar33 = (uint *)(piVar29 + (uint)bVar36 * -2 + 1);
  *piVar29 = iVar14;
  puVar34 = puVar33 + (uint)bVar36 * -2 + 1;
  *puVar33 = uVar19;
  *puVar34 = iVar30 + 1;
  *ppuVar25 = puVar34 + (uint)bVar36 * -2 + 0xe;
  ppuVar25[-1] = (uint *)0x804829d;
  FUN_080482c2();
  *(undefined *)(puVar34 + (uint)bVar36 * -2 + 0xe) = 10;
  *ppuVar25 = (uint *)0x1;
  *ppuVar25 = (uint *)0x4;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  ppuVar25[1] = (uint *)0x1;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  FUN_080482c2();
  return;
}



void FUN_080482c2(void)

{
  char cVar1;
  uint uVar2;
  char *unaff_EBP;
  char *unaff_ESI;
  char *unaff_EDI;
  char *pcVar4;
  bool bVar5;
  char *pcVar3;
  
  do {
    pcVar4 = unaff_ESI + 1;
    cVar1 = *unaff_ESI;
    if (cVar1 == '\0') {
      return;
    }
    pcVar3 = pcVar4;
    if ((cVar1 == '%') && (bVar5 = *pcVar4 == '\0', !bVar5)) {
      pcVar3 = unaff_ESI + 2;
      cVar1 = *pcVar4;
      uVar2 = 0x25;
      pcVar4 = unaff_EBP;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        bVar5 = cVar1 == *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (!bVar5);
      if (bVar5) {
        (**(code **)(unaff_EBP + (uVar2 & 0xffffff00 | (uint)(byte)unaff_EBP[uVar2 - 0x74]) + 0x69))
                  (pcVar3);
        FUN_080482c2();
        return;
      }
      *unaff_EDI = '%';
      unaff_EDI = unaff_EDI + 1;
    }
    *unaff_EDI = cVar1;
    unaff_ESI = pcVar3;
    unaff_EDI = unaff_EDI + 1;
  } while( true );
}


