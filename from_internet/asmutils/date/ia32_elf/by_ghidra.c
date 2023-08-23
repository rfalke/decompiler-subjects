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



void processEntry entry(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  byte *pbVar4;
  int **ppiVar5;
  byte bVar6;
  undefined uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  undefined3 uVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  char **ppcVar19;
  int **ppiVar24;
  char *pcVar25;
  byte *pbVar26;
  byte *pbVar27;
  int *piVar28;
  int iVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  bool bVar32;
  byte bVar33;
  undefined8 uVar34;
  char **ppcVar20;
  char **ppcVar21;
  char **ppcVar22;
  char **ppcVar23;
  
  bVar33 = 0;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  pbVar4 = (byte *)s__a__b__d__T__Z__Y_08048386;
  ppcVar19 = (char **)&stack0x0000000c;
LAB_08048096:
  DAT_0804863c = pbVar4;
  pcVar25 = *ppcVar19;
  ppcVar22 = ppcVar19 + 1;
  ppcVar23 = ppcVar19 + 1;
  ppcVar20 = ppcVar19 + 1;
  ppcVar21 = ppcVar19 + 1;
  if (pcVar25 != (char *)0x0) {
    pbVar26 = (byte *)(pcVar25 + (uint)bVar33 * -2 + 1);
    cVar12 = *pcVar25;
    pbVar4 = pbVar26;
    ppcVar19 = ppcVar19 + 1;
    if (cVar12 != '+') {
      pbVar4 = DAT_0804863c;
      if (cVar12 == '=') {
        uVar9 = 0;
        DAT_080485e0 = 0;
        do {
          DAT_080485e0 = uVar9 + DAT_080485e0 * 10;
          bVar6 = *pbVar26 - 0x30;
          uVar9 = (uint)bVar6;
          ppcVar19 = ppcVar22;
          if (*pbVar26 < 0x30) break;
          ppcVar19 = ppcVar23;
          pbVar26 = pbVar26 + (uint)bVar33 * -2 + 1;
        } while (bVar6 < 10);
      }
      else {
        ppcVar19 = ppcVar20;
        if (cVar12 == '-') {
          while( true ) {
            pbVar27 = pbVar26 + (uint)bVar33 * -2 + 1;
            bVar6 = *pbVar26;
            ppcVar19 = ppcVar21;
            if (bVar6 == 0) break;
            pbVar26 = pbVar27;
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
  piVar15 = &DAT_080485e0;
  *ppcVar19 = (char *)0x10;
  pcVar25 = s_N<ELR__ntZzTDrXxcpBbhAayjGVWUwul_080483b4 + 0x2c;
  puVar31 = &DAT_08048654;
  for (iVar13 = (int)*ppcVar19; ppiVar5 = (int **)(ppcVar19 + 1), iVar13 != 0; iVar13 = iVar13 + -1)
  {
    *(char *)puVar31 = *pcVar25;
    pcVar25 = pcVar25 + (uint)bVar33 * -2 + 1;
    puVar31 = (undefined4 *)((int)puVar31 + (uint)bVar33 * -2 + 1);
  }
  do {
    ppiVar24 = ppiVar5;
    piVar28 = *ppiVar24;
    if (piVar28 == (int *)0x0) goto LAB_08048118;
    ppiVar5 = ppiVar24 + 1;
  } while ((*piVar28 != 0x474e414c) ||
          (ppiVar5 = ppiVar24 + 1,
          pcVar25 = (char *)((int)(piVar28 + (uint)bVar33 * -2 + 1) + (uint)bVar33 * -2 + 1),
          *(char *)(piVar28 + (uint)bVar33 * -2 + 1) != '='));
  do {
    cVar12 = *pcVar25;
    puVar30 = (undefined4 *)((int)puVar31 + (uint)bVar33 * -2 + 1);
    *(char *)puVar31 = cVar12;
    pcVar25 = pcVar25 + (uint)bVar33 * -2 + 1;
    puVar31 = puVar30;
  } while (cVar12 != '\0');
  bVar32 = (int)(undefined4 *)((int)puVar30 + -1) < 0;
  puVar31 = (undefined4 *)((int)puVar30 + (uint)bVar33 * -8 + 3);
  *(undefined4 *)((int)puVar30 + -1) = s_N<ELR__ntZzTDrXxcpBbhAayjGVWUwul_080483b4._59_4_;
  *puVar31 = *(undefined4 *)(s_N<ELR__ntZzTDrXxcpBbhAayjGVWUwul_080483b4 + (uint)bVar33 * -8 + 0x3f)
  ;
  *(undefined *)(puVar31 + (uint)bVar33 * -2 + 1) = 0;
  *ppiVar24 = (int *)0x8048113;
  uVar34 = FUN_0804804c();
  piVar15 = (int *)((ulonglong)uVar34 >> 0x20);
  if (!bVar32) {
    DAT_08048640 = (undefined **)uVar34;
  }
LAB_08048118:
  uVar9 = 0;
  bVar32 = 0 < *(int *)((int)piVar15 + 0x52);
  if (*(int *)((int)piVar15 + 0x52) == 0) {
    *ppiVar24 = (int *)0x8048129;
    uVar34 = FUN_0804804c();
    uVar9 = (uint)((ulonglong)uVar34 >> 0x20);
    iVar13 = (int)uVar34;
    if (!bVar32) {
      uVar9 = *(uint *)(iVar13 + 0x20);
      uVar17 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      uVar18 = *(uint *)(iVar13 + 0x24);
      uVar9 = uVar17;
      do {
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) break;
        uVar14 = *(uint *)(iVar13 + 0x2c + uVar9 * 4);
      } while (*piVar15 <
               (int)(uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                    uVar14 << 0x18));
      iVar13 = iVar13 + 0x2c + uVar17 * 4;
      uVar14 = (uint)*(byte *)(iVar13 + uVar9);
      iVar13 = iVar13 + uVar17;
      uVar9 = *(uint *)(iVar13 + uVar14 * 6);
      uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      piVar15[0x12] = uVar9;
      *(longlong *)((int)piVar15 + 0x52) =
           (longlong)
           ROUND((longdouble)
                 *(longlong *)
                  (iVar13 + (uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                            uVar18 << 0x18) * 6 + (uint)*(byte *)(iVar13 + 5 + uVar14 * 6)));
    }
  }
  uVar7 = 0x2b;
  if ((int)uVar9 < 0) {
    uVar7 = 0x2d;
    uVar9 = -uVar9;
  }
  *(undefined *)(piVar15 + 0x13) = uVar7;
  uVar18 = ((int)uVar9 >> 0x1f) + 0x3c;
  uVar1 = (ulonglong)(uint)((int)((ulonglong)(longlong)(int)uVar9 / (ulonglong)uVar18) >> 0x1f) <<
          0x20 | (ulonglong)(longlong)(int)uVar9 / (ulonglong)uVar18 & 0xffffffff;
  uVar2 = uVar1 % (ulonglong)uVar18;
  bVar6 = (byte)(uVar1 / uVar18);
  bVar8 = (byte)uVar2;
  uVar9 = (uint)CONCAT11(bVar6 / 10,bVar6 % 10) * 0x10000 + 0x30303030 +
          CONCAT31((int3)(CONCAT22((short)(uVar2 >> 0x10),CONCAT11(bVar8 / 10,bVar8)) >> 8),
                   bVar8 % 10);
  *(uint *)((int)piVar15 + 0x4d) =
       uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 * 0x1000000;
  uVar9 = 0x7b1;
  *ppiVar24 = (int *)0x4;
  iVar29 = (int)*ppiVar24;
  iVar13 = *piVar15 + piVar15[0x12];
  if (SCARRY4(*piVar15,piVar15[0x12]) != iVar13 < 0) {
    iVar13 = iVar13 + 0x1e13380;
    uVar9 = 0x7b0;
    iVar29 = iVar29 + -1;
  }
  *ppiVar24 = (int *)iVar29;
  uVar18 = (iVar13 >> 0x1f) + 0x3c;
  uVar1 = (ulonglong)(longlong)iVar13 / (ulonglong)uVar18;
  piVar15[1] = (int)((ulonglong)(longlong)iVar13 % (ulonglong)uVar18);
  uVar1 = (ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff;
  uVar2 = uVar1 / uVar18;
  piVar15[2] = (int)(uVar1 % (ulonglong)uVar18);
  uVar11 = (undefined3)(uVar18 >> 8);
  uVar1 = (ulonglong)CONCAT31(uVar11,0x18);
  uVar2 = (ulonglong)(uint)((int)uVar2 >> 0x1f) << 0x20 | uVar2 & 0xffffffff;
  iVar13 = (int)(uVar2 / uVar1);
  uVar17 = (uint)(uVar2 % uVar1);
  piVar15[3] = uVar17;
  iVar16 = uVar17 - 0xc;
  *(bool *)(piVar15 + 6) = 0xb < uVar17;
  if (0xb >= uVar17 || iVar16 == 0) {
    do {
      iVar16 = iVar16 + 0xc;
    } while (iVar16 == 0);
  }
  piVar15[5] = iVar16;
  ppiVar24[-1] = (int *)iVar13;
  uVar17 = CONCAT31(uVar11,7);
  uVar14 = (uint)((ulonglong)(longlong)(iVar13 + iVar29) % (ulonglong)uVar17);
  piVar15[7] = uVar14;
  if (uVar14 != 0) {
    uVar17 = uVar14;
  }
  piVar15[8] = uVar17;
  iVar29 = CONCAT22((short)(uVar18 >> 0x10),0x100);
  iVar13 = (int)ppiVar24[-1];
  do {
    iVar29 = CONCAT31((int3)((uint)iVar29 >> 8),0x6e);
    uVar9 = uVar9 + 1;
    bVar6 = (byte)uVar9;
    if ((uVar9 & 3) != 0) {
      iVar29 = iVar29 + -1;
    }
    iVar16 = iVar13 - iVar29;
    bVar32 = iVar29 <= iVar13;
    iVar13 = iVar16;
  } while (bVar32);
  iVar16 = iVar16 + iVar29;
  piVar15[4] = uVar9;
  cVar12 = bVar6 + 0x30;
  uVar7 = 0x14;
  if (bVar6 < 0xd0) {
    cVar12 = bVar6 + 0x94;
    uVar7 = 0x13;
  }
  *(char *)(piVar15 + 0x11) = cVar12;
  *(undefined *)(piVar15 + 0x10) = uVar7;
  uVar18 = iVar29 + 0xc03bbd7f;
  iVar29 = 0;
  uVar9 = iVar16 >> 0x1f;
  iVar13 = iVar16;
  do {
    uVar9 = CONCAT31((int3)(uVar9 >> 8),7) << 2 | uVar18 >> 0x1e;
    uVar18 = uVar18 >> 2 | uVar18 << 0x1e;
    iVar29 = iVar29 + 1;
    iVar10 = iVar13 - uVar9;
    bVar32 = (int)uVar9 <= iVar13;
    iVar13 = iVar10;
  } while (bVar32);
  piVar28 = piVar15 + (uint)bVar33 * -2 + 10;
  piVar15[9] = iVar10 + uVar9 + 1;
  piVar15 = piVar28 + (uint)bVar33 * -2 + 1;
  *piVar28 = iVar29;
  uVar17 = CONCAT31((int3)((uint)*ppiVar24 >> 8),7);
  uVar18 = (uint)((ulonglong)(longlong)(((int)ppiVar24[-1] - iVar16) + (int)*ppiVar24) %
                 (ulonglong)uVar17);
  uVar9 = uVar17;
  if (uVar18 != 0) {
    uVar9 = uVar18;
  }
  *piVar15 = (int)((ulonglong)(longlong)(int)(iVar16 + uVar9) / (ulonglong)uVar17);
  uVar9 = uVar9 - 1;
  if (uVar9 == 0) {
    uVar9 = 7;
  }
  uVar1 = (ulonglong)(longlong)(int)(iVar16 + uVar9) / (ulonglong)uVar17;
  piVar28 = piVar15 + (uint)bVar33 * -2 + 1 + (uint)bVar33 * -2 + 1;
  piVar15[(uint)bVar33 * -2 + 1] = (int)uVar1;
  iVar13 = piVar28[-9];
  uVar18 = CONCAT31((int3)((ulonglong)(longlong)(int)(iVar16 + uVar9) % (ulonglong)uVar17 >> 8),
                    (char)iVar13) & 0xffffff03;
  uVar11 = (undefined3)(uVar1 >> 8);
  cVar12 = (char)uVar1 + (uVar9 < 4);
  iVar29 = CONCAT31(uVar11,cVar12);
  if (cVar12 == '\0') {
    iVar13 = iVar13 + -1;
    iVar29 = CONCAT31(uVar11,0x34);
    if ((uVar9 != 4) && ((uVar9 != 5 || (uVar18 = uVar18 - 1, uVar18 != 0)))) goto LAB_08048288;
    iVar29 = iVar29 + 1;
  }
  if (((char)iVar29 == '5') &&
     (*(char *)(piVar28 + -6) < (char)(((char)iVar16 + -0x68) - ((char)uVar18 == '\0')))) {
    iVar29 = CONCAT31((int3)((uint)iVar29 >> 8),1);
    iVar13 = iVar13 + 1;
  }
LAB_08048288:
  piVar15 = piVar28 + (uint)bVar33 * -2 + 1;
  *piVar28 = iVar29;
  piVar28 = piVar15 + (uint)bVar33 * -2 + 1;
  *piVar15 = iVar13;
  *piVar28 = iVar16 + 1;
  *ppiVar24 = piVar28 + (uint)bVar33 * -2 + 0xe;
  ppiVar24[-1] = (int *)0x804829d;
  FUN_080482c2();
  *(undefined *)(piVar28 + (uint)bVar33 * -2 + 0xe) = 10;
  *ppiVar24 = (int *)0x1;
  *ppiVar24 = (int *)0x4;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  ppiVar24[1] = (int *)0x1;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  FUN_080482c2();
  return;
}



void FUN_080482c2(void)

{
  char cVar1;
  int iVar2;
  char *unaff_EBP;
  char *unaff_ESI;
  char *pcVar3;
  char *unaff_EDI;
  bool bVar4;
  byte bVar5;
  
  bVar5 = 0;
code_r0x080482c2:
  do {
    pcVar3 = unaff_ESI + (uint)bVar5 * -2 + 1;
    cVar1 = *unaff_ESI;
    if (cVar1 == '\0') {
      return;
    }
    unaff_ESI = pcVar3;
    if ((cVar1 == '%') && (bVar4 = *pcVar3 == '\0', !bVar4)) {
      unaff_ESI = pcVar3 + (uint)bVar5 * -2 + 1;
      cVar1 = *pcVar3;
      iVar2 = 0x25;
      pcVar3 = unaff_EBP;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar4 = cVar1 == *pcVar3;
        pcVar3 = pcVar3 + (uint)bVar5 * -2 + 1;
      } while (!bVar4);
      if (bVar4) {
        (**(code **)(unaff_EBP + CONCAT31((int3)((uint)iVar2 >> 8),unaff_EBP[iVar2 + -0x74]) + 0x69)
        )();
        goto code_r0x080482c2;
      }
      *unaff_EDI = '%';
      unaff_EDI = unaff_EDI + 1;
    }
    *unaff_EDI = cVar1;
    unaff_EDI = unaff_EDI + (uint)bVar5 * -2 + 1;
  } while( true );
}


