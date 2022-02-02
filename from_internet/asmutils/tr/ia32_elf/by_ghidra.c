typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
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




// WARNING: Removing unreachable block (ram,0x080481e8)
// WARNING: Removing unreachable block (ram,0x080481e0)
// WARNING: Removing unreachable block (ram,0x080481dc)
// WARNING: Removing unreachable block (ram,0x080481e4)
// WARNING: Removing unreachable block (ram,0x080481ec)

int entry(void)

{
  undefined uVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  char cVar9;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  byte extraout_DL;
  byte bVar10;
  char cVar12;
  uint uVar11;
  short **ppsVar13;
  short **ppsVar14;
  undefined4 *puVar15;
  short *psVar16;
  short *psVar17;
  byte *unaff_ESI;
  undefined1 *puVar18;
  char *pcVar19;
  byte *pbVar20;
  byte *pbVar21;
  bool bVar22;
  ulonglong uVar23;
  
  uVar5 = 0;
  ppsVar13 = (short **)&stack0x00000008;
  while( true ) {
    while( true ) {
      psVar16 = *ppsVar13;
      ppsVar14 = ppsVar13 + 1;
      if ((psVar16 == (short *)0x0) || (ppsVar14 = ppsVar13 + 1, psVar16 == (short *)0x0))
      goto LAB_0804816d;
      cVar12 = (char)uVar5;
      cVar9 = (char)(uVar5 >> 8);
      if (*psVar16 != 0x732d) break;
      uVar5 = (uint)CONCAT11(cVar9 + '\x01',cVar12);
      ppsVar13 = ppsVar13 + 1;
    }
    if (*psVar16 != 0x642d) break;
    uVar5 = uVar5 & 0xffffff00 | (uint)(byte)(cVar12 + 1);
    ppsVar13 = ppsVar13 + 1;
  }
  uVar5 = 0;
  DAT_0804824d = cVar9;
  DAT_0804824e = cVar12;
  if (cVar12 != '\0') goto LAB_08048086;
  do {
    (&DAT_08048251)[uVar5] = (char)uVar5;
    bVar10 = (char)uVar5 + 1;
    uVar5 = (uint)bVar10;
  } while (bVar10 != 0);
  unaff_ESI = &DAT_08048351;
  *ppsVar13 = (short *)0x80480cd;
  uVar8 = FUN_08048172();
  psVar16 = ppsVar13[1];
  ppsVar14 = ppsVar13 + 1;
  ppsVar13[1] = (short *)uVar8;
  if (psVar16 != (short *)0x0) {
    unaff_ESI = &DAT_08048451;
    *ppsVar13 = (short *)0x80480dd;
    psVar17 = (short *)FUN_08048172();
    psVar16 = ppsVar13[1];
    ppsVar14 = ppsVar13 + 2;
    if (psVar16 == psVar17) {
      ppsVar14 = ppsVar13 + 2;
      if (psVar17 != (short *)0x0) {
        unaff_ESI = &DAT_08048351;
        puVar18 = &DAT_08048451;
        do {
          bVar10 = *unaff_ESI;
          unaff_ESI = unaff_ESI + 1;
          uVar1 = *puVar18;
          puVar18 = puVar18 + 1;
          (&DAT_08048251)[bVar10] = uVar1;
          psVar17 = (short *)((int)psVar17 + -1);
          ppsVar14 = ppsVar13 + 2;
        } while (psVar17 != (short *)0x0);
      }
      goto LAB_08048101;
    }
  }
LAB_0804816d:
  ppsVar14[-1] = (short *)0x1;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  iVar7 = 0;
  iVar6 = 0x101;
  pcVar19 = &DAT_08048550;
  while( true ) {
    cVar12 = *(char *)psVar16;
    pcVar19 = pcVar19 + 1;
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + -1;
    if ((iVar6 == 0) || (cVar12 == '\0')) break;
    if (cVar12 == '\\') {
      psVar17 = psVar16 + 1;
      bVar22 = true;
      *ppsVar14 = (short *)0x80481b8;
      uVar8 = FUN_0804823d();
      if (bVar22) {
        uVar23 = CONCAT44((uint)extraout_DL << 8,uVar8);
        iVar6 = extraout_ECX;
      }
      else {
        *ppsVar14 = (short *)0x80481c1;
        uVar23 = FUN_0804823a();
        iVar6 = extraout_ECX_00;
        if (!bVar22) {
          psVar17 = (short *)((int)psVar16 + 3);
          bVar22 = false;
          *ppsVar14 = (short *)0x80481ce;
          uVar23 = FUN_0804823a();
          iVar6 = extraout_ECX_01;
          if (!bVar22) {
            psVar17 = psVar16 + 2;
            uVar23 = uVar23 & 0xffffffff |
                     (ulonglong)(byte)((char)(uVar23 >> 0x28) << 3 | (byte)(uVar23 >> 0x20)) << 0x28
            ;
          }
        }
      }
      iVar7 = (int)uVar23;
      *pcVar19 = (char)(uVar23 >> 0x28);
      psVar16 = psVar17;
    }
    else {
      *pcVar19 = cVar12;
      psVar16 = (short *)((int)psVar16 + 1);
    }
  }
  uVar5 = 0x100;
  iVar6 = 0;
  pbVar20 = &DAT_08048551;
  do {
    bVar10 = *pbVar20;
    uVar5 = uVar5 & 0xffffff00 | (uint)bVar10;
    pbVar21 = pbVar20 + 1;
    if (((bVar10 == 0x5b) && (pbVar20[2] == 0x2d)) && (pbVar20[4] == 0x5d)) {
      bVar10 = *pbVar21;
      uVar11 = (uint)CONCAT11(pbVar20[3],bVar10);
      pbVar21 = pbVar20 + 5;
      cVar12 = (char)(uVar11 >> 8);
      if (cVar12 < (char)bVar10) {
        uVar11 = (uint)CONCAT11(bVar10,cVar12);
      }
      do {
        *unaff_ESI = (byte)uVar11;
        iVar6 = iVar6 + 1;
        unaff_ESI = unaff_ESI + 1;
        uVar5 = uVar5 - 1;
        if (uVar5 == 0) goto LAB_08048238;
        bVar10 = (byte)uVar11 + 1;
        uVar3 = uVar11 & 0xffffff00;
        uVar11 = uVar3 | bVar10;
      } while ((char)bVar10 <= (char)(uVar3 >> 8));
    }
    else {
      *unaff_ESI = bVar10;
      uVar5 = uVar5 - 1;
      if (uVar5 == 0) break;
      iVar6 = iVar6 + 1;
      unaff_ESI = unaff_ESI + 1;
    }
    iVar7 = iVar7 + -1;
    pbVar20 = pbVar21;
  } while (iVar7 != 0);
LAB_08048238:
  return iVar6 + -1;
LAB_08048086:
  do {
    (&DAT_08048251)[uVar5] = cVar12;
    bVar10 = (char)uVar5 + 1;
    uVar5 = (uint)bVar10;
  } while (bVar10 != 0);
  *ppsVar13 = (short *)&DAT_08048351;
  ppsVar13[-1] = (short *)0x804809b;
  iVar6 = FUN_08048172();
  unaff_ESI = (byte *)*ppsVar13;
  for (; ppsVar14 = ppsVar13 + 1, iVar6 != 0; iVar6 = iVar6 + -1) {
    (&DAT_08048251)[*unaff_ESI] = 0;
    unaff_ESI = unaff_ESI + 1;
  }
LAB_08048101:
  *(undefined4 *)((int)ppsVar14 + -4) = 1;
  psVar16 = *(short **)((int)ppsVar14 + -4);
  puVar4 = ppsVar14;
LAB_08048106:
  puVar15 = puVar4;
  puVar15[-1] = 1;
  puVar15[-1] = 3;
  pcVar2 = (code *)swi(0x80);
  iVar6 = (*pcVar2)();
  ppsVar14 = (short **)(puVar15 + 1);
  if (iVar6 != 0) {
    if (DAT_0804824e != '\0') goto LAB_08048132;
    bVar10 = (&DAT_08048251)[DAT_08048250];
    goto LAB_08048144;
  }
  goto LAB_0804816d;
LAB_08048132:
  puVar4 = puVar15 + 1;
  bVar10 = DAT_08048250;
  if ((&DAT_08048251)[DAT_08048250] != '\0') {
LAB_08048144:
    if ((DAT_0804824d == '\0') || (puVar4 = puVar15 + 1, bVar10 != DAT_0804824f)) {
      *puVar15 = 1;
      *puVar15 = 4;
      pcVar2 = (code *)swi(0x80);
      DAT_0804824f = bVar10;
      (*pcVar2)();
      puVar4 = puVar15 + 2;
    }
  }
  goto LAB_08048106;
}



// WARNING: Removing unreachable block (ram,0x080481e8)
// WARNING: Removing unreachable block (ram,0x080481e0)
// WARNING: Removing unreachable block (ram,0x080481dc)
// WARNING: Removing unreachable block (ram,0x080481e4)
// WARNING: Removing unreachable block (ram,0x080481ec)

int FUN_08048172(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  byte extraout_DL;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  char *unaff_EBP;
  char *pcVar9;
  byte *unaff_ESI;
  char *pcVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  ulonglong uVar14;
  
  iVar3 = 0;
  iVar5 = 0x101;
  pcVar10 = &DAT_08048550;
  while( true ) {
    cVar1 = *unaff_EBP;
    pcVar10 = pcVar10 + 1;
    iVar3 = iVar3 + 1;
    iVar5 = iVar5 + -1;
    if ((iVar5 == 0) || (cVar1 == '\0')) break;
    if (cVar1 == '\\') {
      pcVar9 = unaff_EBP + 2;
      bVar13 = true;
      uVar4 = FUN_0804823d();
      if (bVar13) {
        uVar14 = CONCAT44((uint)extraout_DL << 8,uVar4);
        iVar5 = extraout_ECX;
      }
      else {
        uVar14 = FUN_0804823a();
        iVar5 = extraout_ECX_00;
        if (!bVar13) {
          pcVar9 = unaff_EBP + 3;
          bVar13 = false;
          uVar14 = FUN_0804823a();
          iVar5 = extraout_ECX_01;
          if (!bVar13) {
            pcVar9 = unaff_EBP + 4;
            uVar14 = uVar14 & 0xffffffff |
                     (ulonglong)(byte)((char)(uVar14 >> 0x28) << 3 | (byte)(uVar14 >> 0x20)) << 0x28
            ;
          }
        }
      }
      iVar3 = (int)uVar14;
      *pcVar10 = (char)(uVar14 >> 0x28);
      unaff_EBP = pcVar9;
    }
    else {
      *pcVar10 = cVar1;
      unaff_EBP = unaff_EBP + 1;
    }
  }
  uVar6 = 0x100;
  iVar5 = 0;
  pbVar11 = &DAT_08048551;
  do {
    bVar2 = *pbVar11;
    uVar6 = uVar6 & 0xffffff00 | (uint)bVar2;
    pbVar12 = pbVar11 + 1;
    if (((bVar2 == 0x5b) && (pbVar11[2] == 0x2d)) && (pbVar11[4] == 0x5d)) {
      bVar2 = *pbVar12;
      bVar8 = pbVar11[3];
      pbVar12 = pbVar11 + 5;
      bVar7 = bVar2;
      if ((char)bVar8 < (char)bVar2) {
        bVar7 = bVar8;
        bVar8 = bVar2;
      }
      do {
        *unaff_ESI = bVar7;
        iVar5 = iVar5 + 1;
        unaff_ESI = unaff_ESI + 1;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) goto LAB_08048238;
        bVar7 = bVar7 + 1;
      } while ((char)bVar7 <= (char)bVar8);
    }
    else {
      *unaff_ESI = bVar2;
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) break;
      iVar5 = iVar5 + 1;
      unaff_ESI = unaff_ESI + 1;
    }
    iVar3 = iVar3 + -1;
    pbVar11 = pbVar12;
  } while (iVar3 != 0);
LAB_08048238:
  return iVar5 + -1;
}



void FUN_0804823a(void)

{
  char *unaff_EBP;
  
  if (('/' < *unaff_EBP) && (*unaff_EBP < '8')) {
    return;
  }
  return;
}



void __regparm3 FUN_0804823d(undefined4 param_1,char param_2)

{
  if (('/' < param_2) && (param_2 < '8')) {
    return;
  }
  return;
}


