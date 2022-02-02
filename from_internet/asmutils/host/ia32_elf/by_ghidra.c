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

void entry(void)

{
  char cVar1;
  undefined2 uVar2;
  code *pcVar3;
  ushort uVar4;
  byte bVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  uint *puVar14;
  byte *pbVar15;
  char *pcVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  bool bVar19;
  byte bVar20;
  int unaff_retaddr;
  
  bVar20 = 0;
  puVar10 = &stack0x00000004;
  puVar12 = (undefined4 *)&stack0x00000004;
  uVar9 = unaff_retaddr - 1;
  if (uVar9 != 0) goto LAB_080480dc;
LAB_080480a3:
  *(undefined4 *)(puVar10 + -4) = 0x2f;
  *(undefined4 *)(puVar10 + -4) = 1;
  *(undefined4 *)(puVar10 + -4) = 4;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  uVar9 = 0;
  puVar11 = (uint *)(puVar10 + 4);
LAB_080480b5:
  if ((uVar9 != 0) && (uVar9 == 0xffffff91)) {
    *(undefined4 *)((int)puVar11 + -4) = 0x24;
    *(undefined4 *)((int)puVar11 + -4) = 1;
    *(undefined4 *)((int)puVar11 + -4) = 4;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    puVar11 = (uint *)((int)puVar11 + 4);
  }
  puVar11[-1] = 6;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  uVar9 = 0;
  *puVar11 = 1;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  puVar12 = puVar11 + 2;
LAB_080480dc:
  DAT_080483d4 = 60000;
  pcVar6 = *(char **)((int)puVar12 + 4);
  piVar13 = (int *)((int)puVar12 + 8);
  puVar10 = (undefined *)((int)puVar12 + 8);
  if (*pcVar6 == '-') {
    if (uVar9 < 2 || uVar9 - 2 == 0) goto LAB_080480a3;
    pbVar15 = *(byte **)((int)puVar12 + 8);
    *(uint *)((int)puVar12 + 8) = uVar9 - 2;
    DAT_080483d4 = 0;
    while( true ) {
      bVar5 = *pbVar15 - 0x30;
      if ((*pbVar15 < 0x30) || (9 < bVar5)) break;
      DAT_080483d4 = DAT_080483d4 * 10 + (uint)bVar5;
      pbVar15 = pbVar15 + (uint)bVar20 * -2 + 1;
    }
    uVar9 = *(uint *)((int)puVar12 + 8);
    pcVar6 = *(char **)((int)puVar12 + 0xc);
    piVar13 = (int *)((int)puVar12 + 0x10);
  }
  if (uVar9 != 1) {
    DAT_080483d0 = *piVar13;
    piVar13 = piVar13 + 1;
  }
  DAT_080483cc = pcVar6;
  if (DAT_080483d0 == 0) {
    *(undefined4 *)((int)piVar13 + -4) = 0x804812d;
    uVar9 = FUN_0804835a();
    puVar11 = (uint *)piVar13;
  }
  else {
    *(undefined4 *)((int)piVar13 + -4) = 0x8048138;
    FUN_080482ab();
    *(undefined4 *)((int)piVar13 + -4) = 0x8048142;
    FUN_08048289();
    DAT_0804860c = 0x35000002;
    *(undefined4 *)((int)piVar13 + -4) = 0;
    *(undefined4 *)((int)piVar13 + -8) = 2;
    *(undefined4 *)((int)piVar13 + -0xc) = 2;
    *(undefined4 *)((int)piVar13 + -0x10) = 1;
    *(undefined4 *)((int)piVar13 + -0x10) = 0x66;
    pcVar3 = (code *)swi(0x80);
    uVar9 = (*pcVar3)();
    bVar19 = (int)uVar9 < 0;
    puVar11 = (uint *)((int)piVar13 + 4);
    do {
      do {
        do {
          puVar14 = puVar11;
          uVar7 = uVar9;
          uVar9 = uVar7;
          puVar11 = puVar14;
          if (bVar19) goto LAB_080480b5;
          puVar14[-1] = 0x10;
          puVar14[-2] = 4;
          puVar14[-3] = (uint)(puVar14 + -1);
          puVar14[-4] = 1;
          puVar14[-5] = 0;
          puVar14[-6] = uVar7;
          puVar14[-7] = 0xe;
          puVar14[-7] = 0x66;
          pcVar3 = (code *)swi(0x80);
          iVar8 = (*pcVar3)();
          bVar19 = iVar8 < 0;
          uVar9 = *puVar14;
          puVar11 = puVar14 + 1;
        } while (bVar19);
        *puVar14 = 0x10;
        puVar14[-1] = (uint)&DAT_0804860c;
        puVar14[-2] = uVar7;
        puVar14[-3] = 3;
        puVar14[-3] = 0x66;
        pcVar3 = (code *)swi(0x80);
        uVar9 = (*pcVar3)();
        bVar19 = (int)uVar9 < 0;
        puVar11 = puVar14 + 2;
      } while (bVar19);
      puVar14[1] = 1;
      *puVar14 = 4;
      puVar14[-1] = (uint)(puVar14 + 1);
      puVar14[-2] = 10;
      puVar14[-3] = 1;
      puVar14[-4] = uVar7;
      puVar14[-5] = 0xe;
      puVar14[-5] = 0x66;
      pcVar3 = (code *)swi(0x80);
      iVar8 = (*pcVar3)();
      bVar19 = iVar8 < 0;
      uVar9 = puVar14[2];
      puVar11 = puVar14 + 3;
    } while (bVar19);
    puVar14[2] = 1;
    puVar14[1] = 0x36;
    pcVar3 = (code *)swi(0x80);
    iVar8 = (*pcVar3)();
    uVar9 = puVar14[3];
    puVar11 = puVar14 + 4;
    if (-1 < iVar8) {
      puVar14[3] = 4;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      _DAT_08048608 = 3;
      puVar14[4] = 1;
      pcVar3 = (code *)swi(0x80);
      _DAT_08048604 = uVar7;
      uVar9 = (*pcVar3)();
      puVar11 = puVar14 + 6;
      if ((_DAT_0804860a & 3) != 0) {
        puVar14[5] = 3;
        pcVar3 = (code *)swi(0x80);
        uVar9 = (*pcVar3)();
        puVar11 = puVar14 + 7;
        if (uVar9 != 0) {
          uVar4 = CONCAT11((char)DAT_080483fc,(char)((uint)DAT_080483fc >> 8));
          uVar9 = uVar9 & 0xffff0000 | (uint)uVar4;
          puVar18 = &DAT_080483f6;
          if (uVar4 != 0) {
            pcVar6 = &DAT_08048404;
            do {
              pcVar16 = pcVar6 + (uint)bVar20 * -2 + 1;
              cVar1 = *pcVar6;
              uVar9 = uVar9 & 0xffffff00;
              pcVar6 = pcVar16;
            } while (cVar1 != '\0');
            puVar18 = (undefined2 *)(pcVar16 + 4);
          }
          while( true ) {
            do {
              puVar17 = (undefined2 *)((int)puVar18 + (uint)bVar20 * -2 + 1);
              cVar1 = *(char *)puVar18;
              uVar9 = uVar9 & 0xffffff00;
              puVar18 = puVar17;
            } while (cVar1 != '\0');
            do {
              puVar18 = (undefined2 *)((int)puVar17 + (uint)bVar20 * -2 + 1);
              bVar5 = *(byte *)puVar17;
              uVar7 = uVar9 & 0xffffff00;
              uVar9 = uVar7 | bVar5;
              puVar17 = puVar18;
            } while (bVar5 == 0);
            if (bVar5 == 1) break;
            puVar11 = puVar14 + 7;
            if (bVar5 != 5) goto LAB_080480b5;
            uVar2 = puVar18[3];
            uVar9 = (uint)CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
            puVar18 = (undefined2 *)((int)(puVar18 + 3) + uVar9 + 2);
          }
          uVar9 = uVar7 | *(byte *)((int)puVar18 + 7);
          puVar11 = puVar14 + 7;
          if (*(byte *)((int)puVar18 + 7) == 4) {
            puVar14[6] = 0x8048284;
            uVar9 = FUN_0804830a();
            puVar11 = puVar14 + 7;
          }
        }
      }
    }
  }
  goto LAB_080480b5;
}



void FUN_08048289(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    cVar4 = '\0';
    while( true ) {
      pbVar1 = (byte *)(unaff_ESI + iVar3);
      iVar3 = iVar3 + 1;
      if (*pbVar1 < 0x30) break;
      cVar4 = cVar4 * '\n' + (*pbVar1 - 0x30);
    }
    *(char *)(unaff_EDI + 4 + iVar2) = cVar4;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 __regparm3 FUN_080482ab(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcStack36;
  
  pcStack36 = &DAT_08048404;
  pcVar5 = &DAT_08048405;
  pcVar3 = DAT_080483cc;
  do {
    cVar2 = '\0';
    pcVar4 = pcVar3;
    pcVar6 = pcVar5;
    while( true ) {
      pcVar3 = pcVar4 + 1;
      cVar1 = *pcVar4;
      if (cVar1 == '\0') {
        *pcVar6 = '\0';
        *(undefined2 *)(pcVar6 + 1) = 0x100;
        *(undefined2 *)(pcVar6 + 3) = 0x100;
        *pcStack36 = cVar2;
        DAT_080483f6 = CONCAT11((char)(pcVar6 + -0x80483f3),(char)((uint)(pcVar6 + -0x80483f3) >> 8)
                               );
        _DAT_080483f8 = 0x4d52;
        _DAT_080483fa = 1;
        DAT_080483fc = 0x100;
        return CONCAT44(param_2,param_1);
      }
      if (cVar1 == '.') break;
      cVar2 = cVar2 + '\x01';
      *pcVar6 = cVar1;
      pcVar4 = pcVar3;
      pcVar6 = pcVar6 + 1;
    }
    *pcStack36 = cVar2;
    pcVar5 = pcVar6 + 1;
    pcStack36 = pcVar6;
  } while( true );
}



void FUN_0804830a(void)

{
  code *pcVar1;
  
  FUN_0804832d();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}



void __regparm3 FUN_0804832d(uint param_1)

{
  undefined *unaff_EDI;
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  
  bVar3 = 1;
  *unaff_EDI = 10;
  puVar1 = unaff_EDI + -1;
  do {
    FUN_08048348();
    param_1 = param_1 >> 8;
    puVar2 = puVar1 + (uint)bVar3 * -2 + 1;
    *puVar1 = 0x2e;
    puVar1 = puVar2;
  } while (param_1 != 0);
  puVar2[1] = 0x20;
  return;
}



void __regparm3 FUN_08048348(ushort param_1)

{
  ushort uVar1;
  char *unaff_EDI;
  
  do {
    uVar1 = param_1 & 0xff;
    param_1 = uVar1 / 10;
    *unaff_EDI = (char)(uVar1 % 10) + '0';
    unaff_EDI = unaff_EDI + 1;
  } while ((char)param_1 != '\0');
  return;
}



void FUN_0804835a(void)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  int *extraout_ECX;
  int *piVar5;
  byte *pbVar7;
  byte *pbVar8;
  byte bVar9;
  int *piVar6;
  
  bVar9 = 0;
  pcVar3 = (code *)swi(0x80);
  iVar4 = (*pcVar3)();
  if (-1 < iVar4) {
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    piVar6 = extraout_ECX;
    while( true ) {
      piVar5 = (int *)((int)piVar6 + (uint)bVar9 * -2 + 1);
      cVar1 = *(char *)piVar6;
      if (cVar1 == '\0') break;
      piVar6 = piVar5;
      if ((((cVar1 == 'n') && (*piVar5 == 0x73656d61)) &&
          (piVar6 = piVar5 + 1, *piVar6 == 0x65767265)) &&
         (piVar6 = piVar5 + 2, *(char *)piVar6 == 'r')) {
        pbVar8 = (byte *)((int)piVar5 + 9);
        do {
          pbVar7 = pbVar8 + (uint)bVar9 * -2 + 1;
          bVar2 = *pbVar8;
          pbVar8 = pbVar7;
        } while (bVar2 < 0x21);
        pbVar8 = pbVar7 + -1;
        do {
          pbVar7 = pbVar8 + (uint)bVar9 * -2 + 1;
          bVar2 = *pbVar8;
          pbVar8 = pbVar7;
        } while (0x2d < bVar2);
        pbVar7[-1] = 0;
        return;
      }
    }
  }
  return;
}


