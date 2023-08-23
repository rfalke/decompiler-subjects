typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
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




// WARNING: Removing unreachable block (ram,0x080481e8)
// WARNING: Removing unreachable block (ram,0x080481e0)
// WARNING: Removing unreachable block (ram,0x080481dc)
// WARNING: Removing unreachable block (ram,0x080481e4)
// WARNING: Removing unreachable block (ram,0x080481ec)

int processEntry entry(void)

{
  undefined uVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  char cVar10;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  byte extraout_DL;
  int iVar11;
  byte bVar12;
  char cVar13;
  short **ppsVar14;
  short **ppsVar15;
  undefined4 *puVar16;
  short *psVar17;
  short *psVar18;
  byte *in_ESI;
  undefined1 *puVar19;
  char *pcVar20;
  byte *pbVar21;
  byte *pbVar22;
  bool bVar23;
  undefined8 uVar24;
  
  uVar6 = 0;
  ppsVar14 = (short **)&stack0x00000008;
  while( true ) {
    while( true ) {
      psVar17 = *ppsVar14;
      ppsVar15 = ppsVar14 + 1;
      if ((psVar17 == (short *)0x0) || (ppsVar15 = ppsVar14 + 1, psVar17 == (short *)0x0))
      goto LAB_0804816d;
      cVar13 = (char)uVar6;
      cVar10 = (char)(uVar6 >> 8);
      if (*psVar17 != 0x732d) break;
      uVar6 = (uint)CONCAT11(cVar10 + '\x01',cVar13);
      ppsVar14 = ppsVar14 + 1;
    }
    if (*psVar17 != 0x642d) break;
    uVar6 = CONCAT31((int3)(uVar6 >> 8),cVar13 + '\x01');
    ppsVar14 = ppsVar14 + 1;
  }
  uVar6 = 0;
  DAT_0804824d = cVar10;
  DAT_0804824e = cVar13;
  if (cVar13 != '\0') goto LAB_08048086;
  do {
    (&DAT_08048251)[uVar6] = (char)uVar6;
    bVar12 = (char)uVar6 + 1;
    uVar6 = (uint)bVar12;
  } while (bVar12 != 0);
  in_ESI = &DAT_08048351;
  *ppsVar14 = (short *)0x80480cd;
  uVar9 = FUN_08048172();
  psVar17 = ppsVar14[1];
  ppsVar15 = ppsVar14 + 1;
  ppsVar14[1] = (short *)uVar9;
  if (psVar17 != (short *)0x0) {
    in_ESI = &DAT_08048451;
    *ppsVar14 = (short *)0x80480dd;
    psVar18 = (short *)FUN_08048172();
    psVar17 = ppsVar14[1];
    ppsVar15 = ppsVar14 + 2;
    if (psVar17 == psVar18) {
      ppsVar15 = ppsVar14 + 2;
      if (psVar18 != (short *)0x0) {
        in_ESI = &DAT_08048351;
        puVar19 = &DAT_08048451;
        do {
          bVar12 = *in_ESI;
          in_ESI = in_ESI + 1;
          uVar1 = *puVar19;
          puVar19 = puVar19 + 1;
          (&DAT_08048251)[bVar12] = uVar1;
          psVar18 = (short *)((int)psVar18 + -1);
          ppsVar15 = ppsVar14 + 2;
        } while (psVar18 != (short *)0x0);
      }
      goto LAB_08048101;
    }
  }
LAB_0804816d:
  ppsVar15[-1] = (short *)0x1;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  iVar8 = 0;
  iVar7 = 0x101;
  pcVar20 = &DAT_08048550;
  while( true ) {
    cVar13 = *(char *)psVar17;
    pcVar20 = pcVar20 + 1;
    iVar8 = iVar8 + 1;
    iVar7 = iVar7 + -1;
    if ((iVar7 == 0) || (cVar13 == '\0')) break;
    if (cVar13 == '\\') {
      psVar18 = psVar17 + 1;
      bVar23 = true;
      *ppsVar15 = (short *)0x80481b8;
      uVar9 = FUN_0804823d();
      if (bVar23) {
        uVar24 = CONCAT44((uint)extraout_DL << 8,uVar9);
        iVar7 = extraout_ECX;
      }
      else {
        *ppsVar15 = (short *)0x80481c1;
        uVar24 = FUN_0804823a();
        iVar7 = extraout_ECX_00;
        if (!bVar23) {
          psVar18 = (short *)((int)psVar17 + 3);
          bVar23 = false;
          *ppsVar15 = (short *)0x80481ce;
          uVar24 = FUN_0804823a();
          iVar7 = extraout_ECX_01;
          if (!bVar23) {
            psVar18 = psVar17 + 2;
            uVar24 = CONCAT44((uint)(byte)((char)((ulonglong)uVar24 >> 0x28) << 3 |
                                          (byte)((ulonglong)uVar24 >> 0x20)) << 8,(int)uVar24);
          }
        }
      }
      iVar8 = (int)uVar24;
      *pcVar20 = (char)((ulonglong)uVar24 >> 0x28);
      psVar17 = psVar18;
    }
    else {
      *pcVar20 = cVar13;
      psVar17 = (short *)((int)psVar17 + 1);
    }
  }
  iVar11 = 0x100;
  iVar7 = 0;
  pbVar21 = &DAT_08048551;
  do {
    bVar12 = *pbVar21;
    iVar11 = CONCAT31((int3)((uint)iVar11 >> 8),bVar12);
    pbVar22 = pbVar21 + 1;
    if (((bVar12 == 0x5b) && (pbVar21[2] == 0x2d)) && (pbVar21[4] == 0x5d)) {
      bVar12 = *pbVar22;
      bVar2 = pbVar21[3];
      pbVar22 = pbVar21 + 5;
      uVar6 = (uint)CONCAT11(bVar2,bVar12);
      if ((char)bVar2 < (char)bVar12) {
        uVar6 = (uint)CONCAT11(bVar12,bVar2);
      }
      do {
        *in_ESI = (byte)uVar6;
        iVar7 = iVar7 + 1;
        in_ESI = in_ESI + 1;
        iVar11 = iVar11 + -1;
        if (iVar11 == 0) goto LAB_08048238;
        cVar13 = (byte)uVar6 + 1;
        uVar4 = uVar6 >> 8;
        uVar6 = CONCAT31((int3)(uVar6 >> 8),cVar13);
      } while (cVar13 <= (char)uVar4);
    }
    else {
      *in_ESI = bVar12;
      iVar11 = iVar11 + -1;
      if (iVar11 == 0) break;
      iVar7 = iVar7 + 1;
      in_ESI = in_ESI + 1;
    }
    iVar8 = iVar8 + -1;
    pbVar21 = pbVar22;
  } while (iVar8 != 0);
LAB_08048238:
  return iVar7 + -1;
LAB_08048086:
  do {
    (&DAT_08048251)[uVar6] = cVar13;
    bVar12 = (char)uVar6 + 1;
    uVar6 = (uint)bVar12;
  } while (bVar12 != 0);
  *ppsVar14 = (short *)&DAT_08048351;
  ppsVar14[-1] = (short *)0x804809b;
  iVar7 = FUN_08048172();
  in_ESI = (byte *)*ppsVar14;
  for (; ppsVar15 = ppsVar14 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
    (&DAT_08048251)[*in_ESI] = 0;
    in_ESI = in_ESI + 1;
  }
LAB_08048101:
  *(undefined4 *)((int)ppsVar15 + -4) = 1;
  psVar17 = *(short **)((int)ppsVar15 + -4);
  puVar5 = ppsVar15;
LAB_08048106:
  puVar16 = puVar5;
  puVar16[-1] = 1;
  puVar16[-1] = 3;
  pcVar3 = (code *)swi(0x80);
  iVar7 = (*pcVar3)();
  ppsVar15 = (short **)(puVar16 + 1);
  if (iVar7 != 0) {
    if (DAT_0804824e != '\0') goto LAB_08048132;
    bVar12 = (&DAT_08048251)[DAT_08048250];
    goto LAB_08048144;
  }
  goto LAB_0804816d;
LAB_08048132:
  puVar5 = puVar16 + 1;
  bVar12 = DAT_08048250;
  if ((&DAT_08048251)[DAT_08048250] != '\0') {
LAB_08048144:
    if ((DAT_0804824d == '\0') || (puVar5 = puVar16 + 1, bVar12 != DAT_0804824f)) {
      *puVar16 = 1;
      *puVar16 = 4;
      pcVar3 = (code *)swi(0x80);
      DAT_0804824f = bVar12;
      (*pcVar3)();
      puVar5 = puVar16 + 2;
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
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  byte extraout_DL;
  int iVar5;
  char cVar6;
  char cVar7;
  char *unaff_EBP;
  char *pcVar8;
  char *unaff_ESI;
  char *pcVar9;
  bool bVar10;
  undefined8 uVar11;
  
  iVar2 = 0;
  iVar4 = 0x101;
  pcVar9 = &DAT_08048550;
  while( true ) {
    cVar1 = *unaff_EBP;
    pcVar9 = pcVar9 + 1;
    iVar2 = iVar2 + 1;
    iVar4 = iVar4 + -1;
    if ((iVar4 == 0) || (cVar1 == '\0')) break;
    if (cVar1 == '\\') {
      pcVar8 = unaff_EBP + 2;
      bVar10 = true;
      uVar3 = FUN_0804823d();
      if (bVar10) {
        uVar11 = CONCAT44((uint)extraout_DL << 8,uVar3);
        iVar4 = extraout_ECX;
      }
      else {
        uVar11 = FUN_0804823a();
        iVar4 = extraout_ECX_00;
        if (!bVar10) {
          pcVar8 = unaff_EBP + 3;
          bVar10 = false;
          uVar11 = FUN_0804823a();
          iVar4 = extraout_ECX_01;
          if (!bVar10) {
            pcVar8 = unaff_EBP + 4;
            uVar11 = CONCAT44((uint)(byte)((char)((ulonglong)uVar11 >> 0x28) << 3 |
                                          (byte)((ulonglong)uVar11 >> 0x20)) << 8,(int)uVar11);
          }
        }
      }
      iVar2 = (int)uVar11;
      *pcVar9 = (char)((ulonglong)uVar11 >> 0x28);
      unaff_EBP = pcVar8;
    }
    else {
      *pcVar9 = cVar1;
      unaff_EBP = unaff_EBP + 1;
    }
  }
  iVar5 = 0x100;
  iVar4 = 0;
  pcVar9 = &DAT_08048551;
  do {
    cVar1 = *pcVar9;
    iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),cVar1);
    pcVar8 = pcVar9 + 1;
    if (((cVar1 == '[') && (pcVar9[2] == '-')) && (pcVar9[4] == ']')) {
      cVar1 = *pcVar8;
      cVar7 = pcVar9[3];
      pcVar8 = pcVar9 + 5;
      cVar6 = cVar1;
      if (cVar7 < cVar1) {
        cVar6 = cVar7;
        cVar7 = cVar1;
      }
      do {
        *unaff_ESI = cVar6;
        iVar4 = iVar4 + 1;
        unaff_ESI = unaff_ESI + 1;
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) goto LAB_08048238;
        cVar6 = cVar6 + '\x01';
      } while (cVar6 <= cVar7);
    }
    else {
      *unaff_ESI = cVar1;
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) break;
      iVar4 = iVar4 + 1;
      unaff_ESI = unaff_ESI + 1;
    }
    iVar2 = iVar2 + -1;
    pcVar9 = pcVar8;
  } while (iVar2 != 0);
LAB_08048238:
  return iVar4 + -1;
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


