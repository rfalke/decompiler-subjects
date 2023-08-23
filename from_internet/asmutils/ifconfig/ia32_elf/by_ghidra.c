typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void processEntry
entry(undefined4 param_1,int param_2,undefined4 param_3,char *param_4,char *param_5,
     undefined4 param_6)

{
  char cVar1;
  code *pcVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  char **ppcVar7;
  char **ppcVar8;
  short **ppsVar9;
  short **ppsVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  short *psVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined2 *puVar19;
  byte bVar20;
  
  bVar20 = 0;
  uVar12 = param_2 - 2;
  pcVar2 = (code *)swi(0x80);
  DAT_08048548 = (*pcVar2)(2);
  do {
    pcVar14 = param_4 + (uint)bVar20 * -2 + 1;
    cVar1 = *param_4;
    param_4 = pcVar14;
  } while (cVar1 != '\0');
  if (pcVar14[-2] == 'e') {
    DAT_080485a0 = DAT_080485a0 | 4;
    uVar6 = 0x890b;
    if (param_5 == (char *)0x0) {
      pcVar2 = (code *)swi(0x80);
      DAT_08048548 = (*pcVar2)();
      param_6 = 0x804838f;
      FUN_08048493();
      param_6 = 4;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      pbVar17 = (byte *)0x0;
      puVar3 = &stack0x00000018;
      do {
        do {
          puVar11 = puVar3;
          *(undefined4 *)(puVar11 + -4) = 0x80483a6;
          FUN_08048493();
          pbVar18 = &DAT_0804854c;
          while( true ) {
            uVar13 = (uint)bVar20;
            if (*pbVar17 < 0x21) break;
            *pbVar18 = *pbVar17;
            pbVar17 = pbVar17 + uVar13 * -2 + 1;
            pbVar18 = pbVar18 + (uint)bVar20 * -2 + 1;
          }
          *pbVar18 = 10;
          *(undefined4 *)(puVar11 + -4) = 0x80483bb;
          FUN_08048437();
          *(undefined4 *)(puVar11 + -4) = 0x80483c6;
          DAT_08048570 = uVar12;
          FUN_08048437();
          *(uint *)(puVar11 + -4) = uVar12;
          pbVar17 = pbVar17 + uVar13 * -2 + 1;
          do {
            bVar4 = *pbVar17;
            pbVar18 = pbVar17 + (uint)bVar20 * -2 + 1;
            pbVar17 = pbVar17 + (uint)bVar20 * -2 + 1;
          } while (bVar4 < 0x21);
          do {
            pbVar16 = pbVar18 + (uint)bVar20 * -2 + 1;
            bVar4 = *pbVar18;
            pbVar18 = pbVar16;
          } while (0x20 < bVar4);
          pbVar17 = pbVar16 + (uint)bVar20 * -2 + -1;
          bVar4 = pbVar16[-2];
          if (0x40 < bVar4) {
            bVar4 = bVar4 - 1;
          }
          puVar3 = puVar11 + -4;
        } while ((bVar4 & 1) == 0);
        *(undefined4 *)(puVar11 + -8) = 3;
        iVar5 = *(int *)(puVar11 + -8);
        do {
          do {
            bVar4 = *pbVar17;
            pbVar18 = pbVar17 + (uint)bVar20 * -2 + 1;
            pbVar17 = pbVar17 + (uint)bVar20 * -2 + 1;
          } while (bVar4 < 0x21);
          do {
            pbVar17 = pbVar18 + (uint)bVar20 * -2 + 1;
            bVar4 = *pbVar18;
            pbVar18 = pbVar17;
          } while (0x20 < bVar4);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        *(undefined4 *)(puVar11 + -8) = 0x80483f2;
        FUN_08048437();
        *(uint *)(puVar11 + -8) = uVar12;
        *(undefined4 *)(puVar11 + -0xc) = 0x8048403;
        FUN_08048480();
        *(undefined4 *)(puVar11 + -8) = 0x8048409;
        FUN_08048480();
        uVar12 = *(uint *)(puVar11 + -4);
        *(undefined4 *)(puVar11 + -4) = 0x804840f;
        FUN_08048480();
        pbVar18 = &DAT_0804854c;
        pbVar16 = &DAT_080485b4;
        do {
          pbVar17 = pbVar18 + (uint)bVar20 * -2 + 1;
          bVar4 = *pbVar18;
          *pbVar16 = bVar4;
          pbVar18 = pbVar17;
          pbVar16 = pbVar16 + (uint)bVar20 * -2 + 1;
        } while (bVar4 != 10);
        *(undefined4 *)(puVar11 + -4) = 1;
        *(undefined4 *)(puVar11 + -4) = 4;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar3 = puVar11 + 4;
      } while( true );
    }
    ppsVar10 = (short **)&param_6;
    if (*param_5 != 'a') {
      uVar6 = 0x890c;
      ppsVar10 = (short **)&param_6;
    }
    do {
      while( true ) {
        do {
          uVar13 = uVar12;
          ppsVar9 = ppsVar10;
          uVar12 = uVar13 - 1;
          if ((int)uVar13 < 1) {
            ppsVar9[-1] = (short *)uVar6;
            ppsVar9[-1] = (short *)0x36;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            FUN_080480f9();
            return;
          }
          psVar15 = *ppsVar9;
          if (*psVar15 == 0x6e2d) {
            DAT_080485a0 = DAT_080485a0 & 0xfb;
          }
          ppsVar10 = ppsVar9 + 1;
        } while (*psVar15 == 0x682d);
        if (*(char *)psVar15 != 'g') break;
        DAT_080485a0 = DAT_080485a0 | 2;
        puVar19 = &DAT_08048580;
LAB_08048201:
        uVar12 = uVar13 - 2;
        *puVar19 = 2;
        ppsVar10 = ppsVar9 + 2;
LAB_080481e3:
        *(undefined4 *)((int)ppsVar10 + -4) = 0x80481e8;
        FUN_08048141();
      }
      if (*(char *)psVar15 == 'n') {
        puVar19 = &DAT_08048590;
        goto LAB_08048201;
      }
      if (*(short *)((int)psVar15 + 1) != 0x7665) {
        DAT_08048570 = CONCAT22(DAT_08048570._2_2_,2);
        ppsVar10 = ppsVar9 + 1;
        if (*(char *)psVar15 == 'd') {
          DAT_080485a0 = DAT_080485a0 & 0xfb;
          ppsVar10 = ppsVar9 + 1;
        }
        goto LAB_080481e3;
      }
      _DAT_080485b0 = ppsVar9[1];
      ppsVar10 = ppsVar9 + 2;
      uVar12 = uVar13 - 2;
    } while( true );
  }
  ppcVar7 = (char **)&param_6;
  if (param_5 == (char *)0x0) {
    uVar13 = 1;
    do {
      DAT_0804855c = uVar13;
      iVar5 = FUN_080480e8();
      if (iVar5 < 0) goto code_r0x080480f9;
      FUN_08048237();
      uVar13 = uVar13 + 1;
    } while( true );
  }
  pcVar14 = &DAT_0804854c;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pcVar14 = *param_5;
    param_5 = param_5 + (uint)bVar20 * -2 + 1;
    pcVar14 = pcVar14 + (uint)bVar20 * -2 + 1;
  }
  ppcVar7 = (char **)&param_6;
  if (uVar12 == 0) {
    FUN_08048352();
    iVar5 = (uint)bVar20 * -2;
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
    uVar12 = DAT_0804855c;
    if ((DAT_0804855c & 1) != 0) {
      FUN_08048352();
    }
    if ((uVar12 & 2) != 0) {
      FUN_08048352();
    }
    if ((uVar12 & 8) != 0) {
      FUN_08048352();
    }
    if ((uVar12 & 0x40) != 0) {
      FUN_08048352();
    }
    if ((uVar12 & 0x100) != 0) {
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
    uVar13 = uVar12 - 1;
    if ((int)uVar12 < 1) {
code_r0x080480f9:
      *(undefined4 *)((int)ppcVar7 + -4) = 1;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      ppcVar8 = (char **)((int)ppcVar7 + 4);
LAB_08048100:
      *(undefined4 *)((int)ppcVar8 + -4) = 0x804810a;
      FUN_08048141();
      DAT_0804855c = CONCAT22(DAT_0804855c._2_2_,2);
      *(undefined4 *)((int)ppcVar8 + -4) = 0x804811d;
      FUN_080480e8();
LAB_0804811d:
      *(undefined4 *)((int)ppcVar8 + -4) = 0x8048127;
      FUN_080480e8();
      DAT_0804855c = DAT_0804855c & 0xfffffffe;
      if (*param_5 != 'd') {
        DAT_0804855c = DAT_0804855c | 1;
      }
    }
    else {
      param_5 = *ppcVar7;
      ppcVar8 = ppcVar7 + 1;
      if (*param_5 < ':') goto LAB_08048100;
      if (*param_5 != 'b') {
        ppcVar8 = ppcVar7 + 1;
        if (*param_5 == 'n') {
          param_5 = ppcVar7[1];
          ppcVar8 = ppcVar7 + 2;
          uVar13 = uVar12 - 2;
          ppcVar7[1] = (char *)0x80480d3;
          FUN_08048141();
          DAT_0804855c = CONCAT22(DAT_0804855c._2_2_,2);
          goto LAB_080480e1;
        }
        goto LAB_0804811d;
      }
      param_5 = ppcVar7[1];
      ppcVar8 = ppcVar7 + 2;
      uVar13 = uVar12 - 2;
      ppcVar7[1] = (char *)0x80480ad;
      FUN_08048141();
      DAT_0804855c = CONCAT22(DAT_0804855c._2_2_,2);
    }
LAB_080480e1:
    *(undefined4 *)((int)ppcVar8 + -4) = 0x80480e6;
    FUN_080480e8();
    ppcVar7 = ppcVar8;
    uVar12 = uVar13;
  } while( true );
}



void FUN_080480e8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}



void FUN_080480f9(void)

{
  code *pcVar1;
  char **ppcVar2;
  char **ppcVar3;
  int iVar4;
  int unaff_EBP;
  char *unaff_ESI;
  
code_r0x080480f9:
  *(undefined4 *)((int)register0x00000010 + -4) = 1;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  ppcVar3 = (char **)((int)register0x00000010 + 4);
LAB_08048100:
  *(undefined4 *)((int)ppcVar3 + -4) = 0x804810a;
  FUN_08048141();
  DAT_0804855c._0_2_ = 2;
  *(undefined4 *)((int)ppcVar3 + -4) = 0x804811d;
  FUN_080480e8();
  ppcVar2 = ppcVar3;
  do {
    iVar4 = unaff_EBP;
    register0x00000010 = (BADSPACEBASE *)ppcVar2;
    *(undefined4 *)((int)register0x00000010 + -4) = 0x8048127;
    FUN_080480e8();
    DAT_0804855c._0_2_ = (ushort)DAT_0804855c & 0xfffe;
    if (*unaff_ESI != 'd') {
      DAT_0804855c._0_2_ = (ushort)DAT_0804855c | 1;
    }
    while( true ) {
      while( true ) {
        *(undefined4 *)((int)register0x00000010 + -4) = 0x80480e6;
        FUN_080480e8();
        unaff_EBP = iVar4 + -1;
        if (iVar4 < 1) goto code_r0x080480f9;
        unaff_ESI = *(char **)register0x00000010;
        ppcVar3 = (char **)((int)register0x00000010 + 4);
        if (*unaff_ESI < ':') goto LAB_08048100;
        if (*unaff_ESI != 'b') break;
        unaff_ESI = *(char **)((int)register0x00000010 + 4);
        iVar4 = iVar4 + -2;
        *(undefined4 *)((int)register0x00000010 + 4) = 0x80480ad;
        FUN_08048141();
        DAT_0804855c._0_2_ = 2;
        register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 8);
      }
      ppcVar2 = (char **)((int)register0x00000010 + 4);
      if (*unaff_ESI != 'n') break;
      unaff_ESI = *(char **)((int)register0x00000010 + 4);
      iVar4 = iVar4 + -2;
      *(undefined4 *)((int)register0x00000010 + 4) = 0x80480d3;
      FUN_08048141();
      DAT_0804855c._0_2_ = 2;
      register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 8);
    }
  } while( true );
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
  uVar3 = DAT_0804855c;
  if ((DAT_0804855c & 1) != 0) {
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



char FUN_08048437(void)

{
  byte bVar1;
  int iVar2;
  byte *unaff_ESI;
  byte *pbVar3;
  
  do {
    pbVar3 = unaff_ESI;
    unaff_ESI = pbVar3 + 1;
  } while (*pbVar3 < 0x21);
  iVar2 = 8;
  do {
    bVar1 = *pbVar3;
    if (0x40 < bVar1) {
      bVar1 = bVar1 - 7;
    }
    iVar2 = iVar2 + -1;
    pbVar3 = pbVar3 + 1;
  } while (iVar2 != 0);
  return bVar1 - 0x30;
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
  int aiStack_8 [2];
  
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



uint FUN_08048493(void)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  char *extraout_ECX;
  undefined4 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  undefined4 uStack_4;
  
  bVar8 = 0;
  puVar5 = (undefined4 *)register0x00000010;
  do {
    puVar5[-1] = 3;
    pcVar1 = (code *)swi(0x80);
    uVar3 = (*pcVar1)();
    if (uVar3 == 0) {
      *puVar5 = 1;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      pbVar7 = &DAT_080485b4;
      do {
        pbVar6 = pbVar7 + (uint)bVar8 * -2 + 1;
        bVar2 = *pbVar7;
        pbVar7 = pbVar6;
      } while (bVar2 < 0x21);
      puVar5[1] = 8;
      iVar4 = puVar5[1];
      pbVar7 = pbVar6 + -1;
      do {
        bVar2 = *pbVar7;
        if (0x40 < bVar2) {
          bVar2 = bVar2 - 7;
        }
        iVar4 = iVar4 + -1;
        pbVar7 = pbVar7 + (uint)bVar8 * -2 + 1;
      } while (iVar4 != 0);
      return (uint)(byte)(bVar2 - 0x30);
    }
    puVar5 = puVar5 + 1;
  } while (*extraout_ECX != '\n');
  return uVar3;
}


