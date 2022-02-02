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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(undefined4 param_1,char *param_2,short *param_3,undefined4 param_4,undefined param_5)

{
  char cVar1;
  code *pcVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  short **ppsVar7;
  short **ppsVar8;
  short **ppsVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  short *psVar14;
  short *psVar15;
  undefined2 *puVar16;
  byte *pbVar17;
  byte bVar18;
  int unaff_retaddr;
  
  bVar18 = 0;
  uVar11 = unaff_retaddr - 2;
  pcVar2 = (code *)swi(0x80);
  DAT_08048548 = (*pcVar2)(2);
  do {
    pcVar13 = param_2 + (uint)bVar18 * -2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar13;
  } while (cVar1 != '\0');
  if (pcVar13[-2] == 'e') {
    DAT_080485a0 = DAT_080485a0 | 4;
    uVar6 = 0x890b;
    if (param_3 == (short *)0x0) {
      pcVar2 = (code *)swi(0x80);
      DAT_08048548 = (*pcVar2)();
      param_4 = 0x804838f;
      FUN_08048493();
      param_4 = 4;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar3 = &stack0x00000018;
      do {
        do {
          puVar10 = puVar3;
          *(undefined4 *)(puVar10 + -4) = 0x80483a6;
          FUN_08048493();
          pbVar17 = &DAT_0804854c;
          while( true ) {
            psVar14 = (short *)((int)param_3 + (uint)bVar18 * -2 + 1);
            if (*(byte *)param_3 < 0x21) break;
            *pbVar17 = *(byte *)param_3;
            param_3 = psVar14;
            pbVar17 = pbVar17 + (uint)bVar18 * -2 + 1;
          }
          *pbVar17 = 10;
          *(undefined4 *)(puVar10 + -4) = 0x80483bb;
          FUN_08048437();
          *(undefined4 *)(puVar10 + -4) = 0x80483c6;
          _DAT_08048570 = uVar11;
          FUN_08048437();
          *(uint *)(puVar10 + -4) = uVar11;
          do {
            psVar15 = (short *)((int)psVar14 + (uint)bVar18 * -2 + 1);
            bVar4 = *(byte *)psVar14;
            psVar14 = psVar15;
          } while (bVar4 < 0x21);
          do {
            psVar14 = (short *)((int)psVar15 + (uint)bVar18 * -2 + 1);
            bVar4 = *(byte *)psVar15;
            psVar15 = psVar14;
          } while (0x20 < bVar4);
          param_3 = (short *)((int)psVar14 + (uint)bVar18 * -2 + -1);
          bVar4 = *(byte *)(psVar14 + -1);
          if (0x40 < bVar4) {
            bVar4 = bVar4 - 1;
          }
          puVar3 = puVar10 + -4;
        } while ((bVar4 & 1) == 0);
        *(undefined4 *)(puVar10 + -8) = 3;
        iVar5 = *(int *)(puVar10 + -8);
        do {
          do {
            psVar14 = (short *)((int)param_3 + (uint)bVar18 * -2 + 1);
            bVar4 = *(byte *)param_3;
            param_3 = psVar14;
          } while (bVar4 < 0x21);
          do {
            param_3 = (short *)((int)psVar14 + (uint)bVar18 * -2 + 1);
            bVar4 = *(byte *)psVar14;
            psVar14 = param_3;
          } while (0x20 < bVar4);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        *(undefined4 *)(puVar10 + -8) = 0x80483f2;
        FUN_08048437();
        *(uint *)(puVar10 + -8) = uVar11;
        *(undefined4 *)(puVar10 + -0xc) = 0x8048403;
        FUN_08048480();
        *(undefined4 *)(puVar10 + -8) = 0x8048409;
        FUN_08048480();
        uVar11 = *(uint *)(puVar10 + -4);
        *(undefined4 *)(puVar10 + -4) = 0x804840f;
        FUN_08048480();
        psVar14 = (short *)&DAT_0804854c;
        pbVar17 = &DAT_080485b4;
        do {
          param_3 = (short *)((int)psVar14 + (uint)bVar18 * -2 + 1);
          bVar4 = *(byte *)psVar14;
          *pbVar17 = bVar4;
          psVar14 = param_3;
          pbVar17 = pbVar17 + (uint)bVar18 * -2 + 1;
        } while (bVar4 != 10);
        *(undefined4 *)(puVar10 + -4) = 1;
        *(undefined4 *)(puVar10 + -4) = 4;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar3 = puVar10 + 4;
      } while( true );
    }
    ppsVar9 = (short **)&param_4;
    if (*(byte *)param_3 != 0x61) {
      uVar6 = 0x890c;
      ppsVar9 = (short **)&param_4;
    }
    do {
      while( true ) {
        do {
          uVar12 = uVar11;
          ppsVar8 = ppsVar9;
          uVar11 = uVar12 - 1;
          if ((int)uVar12 < 1) {
            ppsVar8[-1] = (short *)uVar6;
            ppsVar8[-1] = (short *)0x36;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            ppsVar9 = ppsVar8 + 1;
            goto LAB_080480f9;
          }
          param_3 = *ppsVar8;
          if (*param_3 == 0x6e2d) {
            DAT_080485a0 = DAT_080485a0 & 0xfb;
          }
          ppsVar9 = ppsVar8 + 1;
        } while (*param_3 == 0x682d);
        if (*(byte *)param_3 != 0x67) break;
        DAT_080485a0 = DAT_080485a0 | 2;
        puVar16 = &DAT_08048580;
LAB_08048201:
        param_3 = ppsVar8[1];
        uVar11 = uVar12 - 2;
        *puVar16 = 2;
        ppsVar9 = ppsVar8 + 2;
LAB_080481e3:
        *(undefined4 *)((int)ppsVar9 + -4) = 0x80481e8;
        FUN_08048141();
      }
      if (*(byte *)param_3 == 0x6e) {
        puVar16 = &DAT_08048590;
        goto LAB_08048201;
      }
      if (*(short *)((int)param_3 + 1) != 0x7665) {
        _DAT_08048570 = CONCAT22(DAT_08048570_2,2);
        ppsVar9 = ppsVar8 + 1;
        if (*(byte *)param_3 == 100) {
          DAT_080485a0 = DAT_080485a0 & 0xfb;
          ppsVar9 = ppsVar8 + 1;
        }
        goto LAB_080481e3;
      }
      param_3 = ppsVar8[1];
      ppsVar9 = ppsVar8 + 2;
      uVar11 = uVar12 - 2;
      _DAT_080485b0 = param_3;
    } while( true );
  }
  ppsVar9 = (short **)&param_4;
  if (param_3 == (short *)0x0) {
    uVar11 = 1;
    do {
      _DAT_0804855c = uVar11;
      iVar5 = FUN_080480e8();
      if (iVar5 < 0) goto LAB_080480f9;
      FUN_08048237();
      uVar11 = uVar11 + 1;
    } while( true );
  }
  pbVar17 = &DAT_0804854c;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pbVar17 = *(byte *)param_3;
    param_3 = (short *)((int)param_3 + (uint)bVar18 * -2 + 1);
    pbVar17 = pbVar17 + (uint)bVar18 * -2 + 1;
  }
  ppsVar9 = (short **)&param_4;
  uVar12 = uVar11;
  if (uVar11 == 0) {
    FUN_08048352();
    iVar5 = (uint)bVar18 * -2;
    DAT_080485b4 = 9;
    FUN_080480e8();
    FUN_0804835a();
    FUN_0804835a();
    FUN_0804835a();
    FUN_0804835a();
    FUN_0804835a();
    FUN_0804835a();
    (&DAT_080485b4)[iVar5] = 0x20;
    FUN_080480e8();
    uVar11 = _DAT_0804855c;
    if ((_DAT_0804855c & 1) != 0) {
      FUN_08048352();
    }
    if ((uVar11 & 2) != 0) {
      FUN_08048352();
    }
    if ((uVar11 & 8) != 0) {
      FUN_08048352();
    }
    if ((uVar11 & 0x40) != 0) {
      FUN_08048352();
    }
    if ((uVar11 & 0x100) != 0) {
      FUN_08048352();
    }
    FUN_080480e8();
    FUN_08048352();
    FUN_08048455();
    FUN_080480e8();
    FUN_08048352();
    FUN_08048455();
    FUN_080480e8();
    FUN_08048352();
    FUN_08048455();
    (&DAT_080485b2)[iVar5] = 10;
    (&DAT_080485b3)[iVar5] = 10;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    return;
  }
  do {
    uVar11 = uVar12 - 1;
    if ((int)uVar12 < 1) {
LAB_080480f9:
      *(undefined4 *)((int)ppsVar9 + -4) = 1;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      ppsVar7 = (short **)((int)ppsVar9 + 4);
LAB_08048100:
      *(undefined4 *)((int)ppsVar7 + -4) = 0x804810a;
      FUN_08048141();
      _DAT_0804855c = CONCAT22(_DAT_0804855e,2);
      *(undefined4 *)((int)ppsVar7 + -4) = 0x804811d;
      FUN_080480e8();
LAB_0804811d:
      *(undefined4 *)((int)ppsVar7 + -4) = 0x8048127;
      FUN_080480e8();
      _DAT_0804855c = _DAT_0804855c & 0xfffffffe;
      if (*(byte *)param_3 != 100) {
        _DAT_0804855c = _DAT_0804855c | 1;
      }
    }
    else {
      param_3 = *ppsVar9;
      ppsVar7 = ppsVar9 + 1;
      if ((char)*(byte *)param_3 < ':') goto LAB_08048100;
      if (*(byte *)param_3 != 0x62) {
        ppsVar7 = ppsVar9 + 1;
        if (*(byte *)param_3 == 0x6e) {
          param_3 = ppsVar9[1];
          ppsVar7 = ppsVar9 + 2;
          uVar11 = uVar12 - 2;
          ppsVar9[1] = (short *)0x80480d3;
          FUN_08048141();
          _DAT_0804855c = CONCAT22(_DAT_0804855e,2);
          goto LAB_080480e1;
        }
        goto LAB_0804811d;
      }
      param_3 = ppsVar9[1];
      ppsVar7 = ppsVar9 + 2;
      uVar11 = uVar12 - 2;
      ppsVar9[1] = (short *)0x80480ad;
      FUN_08048141();
      _DAT_0804855c = CONCAT22(_DAT_0804855e,2);
    }
LAB_080480e1:
    *(undefined4 *)((int)ppsVar7 + -4) = 0x80480e6;
    FUN_080480e8();
    ppsVar9 = ppsVar7;
    uVar12 = uVar11;
  } while( true );
}



void FUN_080480e8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}



void FUN_08048141(void)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  byte *unaff_ESI;
  byte *pbVar4;
  int unaff_EDI;
  
  iVar2 = 0;
  do {
    cVar3 = '\0';
    pbVar4 = unaff_ESI;
    while( true ) {
      unaff_ESI = pbVar4 + 1;
      bVar1 = *pbVar4 - 0x30;
      if ((*pbVar4 < 0x30) || (0x30 < bVar1)) break;
      cVar3 = cVar3 * '\n' + bVar1;
      pbVar4 = unaff_ESI;
    }
    *(char *)(unaff_EDI + iVar2) = cVar3;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_08048237(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  
  bVar4 = 0;
  FUN_08048352();
  iVar2 = (uint)bVar4 * -2;
  DAT_080485b4 = 9;
  FUN_080480e8();
  FUN_0804835a();
  FUN_0804835a();
  FUN_0804835a();
  FUN_0804835a();
  FUN_0804835a();
  FUN_0804835a();
  (&DAT_080485b4)[iVar2] = 0x20;
  FUN_080480e8();
  uVar3 = _DAT_0804855c;
  if ((_DAT_0804855c & 1) != 0) {
    FUN_08048352();
  }
  if ((uVar3 & 2) != 0) {
    FUN_08048352();
  }
  if ((uVar3 & 8) != 0) {
    FUN_08048352();
  }
  if ((uVar3 & 0x40) != 0) {
    FUN_08048352();
  }
  if ((uVar3 & 0x100) != 0) {
    FUN_08048352();
  }
  FUN_080480e8();
  FUN_08048352();
  FUN_08048455();
  FUN_080480e8();
  FUN_08048352();
  FUN_08048455();
  FUN_080480e8();
  FUN_08048352();
  FUN_08048455();
  (&DAT_080485b2)[iVar2] = 10;
  (&DAT_080485b3)[iVar2] = 10;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}



void FUN_08048352(void)

{
  char cVar1;
  char *unaff_ESI;
  char *pcVar2;
  char *unaff_EDI;
  
  cVar1 = *unaff_ESI;
  pcVar2 = unaff_ESI + 1;
  do {
    *unaff_EDI = cVar1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    unaff_EDI = unaff_EDI + 1;
  } while (cVar1 != '\0');
  return;
}



void __regparm3 FUN_0804835a(undefined4 param_1)

{
  undefined *unaff_EDI;
  
  FUN_0804836d(param_1);
  FUN_0804836d();
  *unaff_EDI = 0x3a;
  return;
}



void __regparm3 FUN_0804836d(byte param_1)

{
  char *unaff_EDI;
  
  param_1 = param_1 & 0xf;
  if (9 < param_1) {
    param_1 = param_1 + 7;
  }
  *unaff_EDI = param_1 + 0x30;
  return;
}



void FUN_08048437(void)

{
  byte bVar1;
  int iVar2;
  byte *unaff_ESI;
  
  do {
    bVar1 = *unaff_ESI;
    unaff_ESI = unaff_ESI + 1;
  } while (bVar1 < 0x21);
  iVar2 = 8;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



void FUN_08048455(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  uint unaff_EBP;
  undefined *unaff_EDI;
  int aiStack8 [2];
  
  iVar4 = 4;
  do {
    *(int *)((int)register0x00000010 + -4) = iVar4;
    iVar4 = 0;
    *(undefined4 *)((int)register0x00000010 + -8) = 10;
    uVar5 = *(uint *)((int)register0x00000010 + -8);
    uVar2 = unaff_EBP & 0xff;
    puVar6 = (undefined *)register0x00000010;
    do {
      uVar3 = uVar2 / uVar5;
      iVar4 = iVar4 + 1;
      *(uint *)(puVar6 + -8) = uVar2 % uVar5 + 0x30;
      uVar2 = uVar3;
      puVar1 = (undefined4 *)(puVar6 + -8);
      puVar6 = puVar6 + -4;
    } while (uVar3 != 0);
    do {
      puVar6 = unaff_EDI;
      puVar7 = puVar1;
      *puVar6 = (char)*puVar7;
      iVar4 = iVar4 + -1;
      puVar1 = puVar7 + 1;
      unaff_EDI = puVar6 + 1;
    } while (iVar4 != 0);
    iVar4 = puVar7[1];
    register0x00000010 = (BADSPACEBASE *)(puVar7 + 2);
    unaff_EDI = puVar6 + 2;
    puVar6[1] = 0x2e;
    iVar4 = iVar4 + -1;
    unaff_EBP = unaff_EBP >> 8;
  } while (iVar4 != 0);
  return;
}



void FUN_08048480(void)

{
  int iVar1;
  int unaff_EDI;
  undefined *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  iVar1 = unaff_EDI;
  FUN_08048455();
  iVar1 = (iVar1 - (int)(undefined *)(unaff_EDI + -1)) + 0x10;
  puVar2 = (undefined *)(unaff_EDI + -1);
  do {
    *puVar2 = 0x20;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  } while (iVar1 != 0);
  return;
}



void FUN_08048493(void)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  char *extraout_ECX;
  undefined4 *puVar4;
  byte *pbVar5;
  byte bVar6;
  undefined4 uStack4;
  
  bVar6 = 0;
  puVar4 = (undefined4 *)register0x00000010;
  do {
    puVar4[-1] = 3;
    pcVar2 = (code *)swi(0x80);
    iVar3 = (*pcVar2)();
    if (iVar3 == 0) {
      *puVar4 = 1;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      pbVar5 = &DAT_080485b4;
      do {
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + (uint)bVar6 * -2 + 1;
      } while (bVar1 < 0x21);
      puVar4[1] = 8;
      iVar3 = puVar4[1];
      do {
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return;
    }
    puVar4 = puVar4 + 1;
  } while (*extraout_ECX != '\n');
  return;
}


