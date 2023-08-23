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

void processEntry entry(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  code *pcVar3;
  byte bVar4;
  short sVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined3 uVar9;
  uint uVar10;
  undefined *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  uint *puVar15;
  byte *pbVar16;
  char *pcVar17;
  bool bVar18;
  byte bVar19;
  
  bVar19 = 0;
  puVar11 = &stack0x00000004;
  puVar13 = (undefined4 *)&stack0x00000004;
  uVar10 = param_2 - 1;
  if (uVar10 != 0) goto LAB_080480dc;
LAB_080480a3:
  *(undefined4 *)(puVar11 + -4) = 0x2f;
  *(undefined4 *)(puVar11 + -4) = 1;
  *(undefined4 *)(puVar11 + -4) = 4;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  uVar10 = 0;
  puVar12 = (uint *)(puVar11 + 4);
LAB_080480b5:
  if ((uVar10 != 0) && (uVar10 == 0xffffff91)) {
    *(undefined4 *)((int)puVar12 + -4) = 0x24;
    *(undefined4 *)((int)puVar12 + -4) = 1;
    *(undefined4 *)((int)puVar12 + -4) = 4;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    puVar12 = (uint *)((int)puVar12 + 4);
  }
  puVar12[-1] = 6;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  uVar10 = 0;
  *puVar12 = 1;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  puVar13 = puVar12 + 2;
LAB_080480dc:
  DAT_080483d4 = 60000;
  pcVar6 = *(char **)((int)puVar13 + 4);
  piVar14 = (int *)((int)puVar13 + 8);
  puVar11 = (undefined *)((int)puVar13 + 8);
  if (*pcVar6 == '-') {
    if (uVar10 < 2 || uVar10 - 2 == 0) goto LAB_080480a3;
    pbVar16 = *(byte **)((int)puVar13 + 8);
    *(uint *)((int)puVar13 + 8) = uVar10 - 2;
    DAT_080483d4 = 0;
    while( true ) {
      bVar4 = *pbVar16 - 0x30;
      if ((*pbVar16 < 0x30) || (9 < bVar4)) break;
      DAT_080483d4 = DAT_080483d4 * 10 + (uint)bVar4;
      pbVar16 = pbVar16 + (uint)bVar19 * -2 + 1;
    }
    uVar10 = *(uint *)((int)puVar13 + 8);
    pcVar6 = *(char **)((int)puVar13 + 0xc);
    piVar14 = (int *)((int)puVar13 + 0x10);
  }
  if (uVar10 != 1) {
    DAT_080483d0 = *piVar14;
    piVar14 = piVar14 + 1;
  }
  DAT_080483cc = pcVar6;
  if (DAT_080483d0 == 0) {
    *(undefined4 *)((int)piVar14 + -4) = 0x804812d;
    uVar10 = FUN_0804835a();
    puVar12 = (uint *)piVar14;
  }
  else {
    *(undefined4 *)((int)piVar14 + -4) = 0x8048138;
    FUN_080482ab();
    *(undefined4 *)((int)piVar14 + -4) = 0x8048142;
    FUN_08048289();
    DAT_0804860c = 0x35000002;
    *(undefined4 *)((int)piVar14 + -4) = 0;
    *(undefined4 *)((int)piVar14 + -8) = 2;
    *(undefined4 *)((int)piVar14 + -0xc) = 2;
    *(undefined4 *)((int)piVar14 + -0x10) = 1;
    *(undefined4 *)((int)piVar14 + -0x10) = 0x66;
    pcVar3 = (code *)swi(0x80);
    uVar10 = (*pcVar3)();
    bVar18 = (int)uVar10 < 0;
    puVar12 = (uint *)((int)piVar14 + 4);
    do {
      do {
        do {
          puVar15 = puVar12;
          uVar7 = uVar10;
          uVar10 = uVar7;
          puVar12 = puVar15;
          if (bVar18) goto LAB_080480b5;
          puVar15[-1] = 0x10;
          puVar15[-2] = 4;
          puVar15[-3] = (uint)(puVar15 + -1);
          puVar15[-4] = 1;
          puVar15[-5] = 0;
          puVar15[-6] = uVar7;
          puVar15[-7] = 0xe;
          puVar15[-7] = 0x66;
          pcVar3 = (code *)swi(0x80);
          iVar8 = (*pcVar3)();
          bVar18 = iVar8 < 0;
          uVar10 = *puVar15;
          puVar12 = puVar15 + 1;
        } while (bVar18);
        *puVar15 = 0x10;
        puVar15[-1] = (uint)&DAT_0804860c;
        puVar15[-2] = uVar7;
        puVar15[-3] = 3;
        puVar15[-3] = 0x66;
        pcVar3 = (code *)swi(0x80);
        uVar10 = (*pcVar3)();
        bVar18 = (int)uVar10 < 0;
        puVar12 = puVar15 + 2;
      } while (bVar18);
      puVar15[1] = 1;
      *puVar15 = 4;
      puVar15[-1] = (uint)(puVar15 + 1);
      puVar15[-2] = 10;
      puVar15[-3] = 1;
      puVar15[-4] = uVar7;
      puVar15[-5] = 0xe;
      puVar15[-5] = 0x66;
      pcVar3 = (code *)swi(0x80);
      iVar8 = (*pcVar3)();
      bVar18 = iVar8 < 0;
      uVar10 = puVar15[2];
      puVar12 = puVar15 + 3;
    } while (bVar18);
    puVar15[2] = 1;
    puVar15[1] = 0x36;
    pcVar3 = (code *)swi(0x80);
    iVar8 = (*pcVar3)();
    uVar10 = puVar15[3];
    puVar12 = puVar15 + 4;
    if (-1 < iVar8) {
      puVar15[3] = 4;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      _DAT_08048608 = 3;
      puVar15[4] = 1;
      pcVar3 = (code *)swi(0x80);
      _DAT_08048604 = uVar7;
      uVar10 = (*pcVar3)();
      puVar12 = puVar15 + 6;
      if ((_DAT_0804860a & 3) != 0) {
        puVar15[5] = 3;
        pcVar3 = (code *)swi(0x80);
        uVar10 = (*pcVar3)();
        puVar12 = puVar15 + 7;
        if (uVar10 != 0) {
          sVar5 = CONCAT11((char)DAT_080483fc,(char)((ushort)DAT_080483fc >> 8));
          uVar10 = CONCAT22((short)(uVar10 >> 0x10),sVar5);
          pcVar6 = &DAT_080483f6;
          if (sVar5 != 0) {
            pcVar6 = &DAT_08048404;
            do {
              pcVar17 = pcVar6 + (uint)bVar19 * -2 + 1;
              cVar1 = *pcVar6;
              uVar10 = CONCAT31((int3)(uVar10 >> 8),cVar1);
              pcVar6 = pcVar17;
            } while (cVar1 != '\0');
            pcVar6 = pcVar17 + 4;
          }
          while( true ) {
            do {
              pcVar17 = pcVar6 + (uint)bVar19 * -2 + 1;
              cVar1 = *pcVar6;
              uVar10 = CONCAT31((int3)(uVar10 >> 8),cVar1);
              pcVar6 = pcVar17;
            } while (cVar1 != '\0');
            do {
              pcVar6 = pcVar17 + (uint)bVar19 * -2 + 1;
              cVar1 = *pcVar17;
              uVar9 = (undefined3)(uVar10 >> 8);
              uVar10 = CONCAT31(uVar9,cVar1);
              pcVar17 = pcVar6;
            } while (cVar1 == '\0');
            if (cVar1 == '\x01') break;
            puVar12 = puVar15 + 7;
            if (cVar1 != '\x05') goto LAB_080480b5;
            uVar2 = *(undefined2 *)(pcVar6 + 6);
            uVar10 = (uint)CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
            pcVar6 = (char *)((int)(pcVar6 + 6) + uVar10 + 2);
          }
          uVar10 = CONCAT31(uVar9,pcVar6[7]);
          puVar12 = puVar15 + 7;
          if (pcVar6[7] == '\x04') {
            puVar15[6] = 0x8048284;
            uVar10 = FUN_0804830a();
            puVar12 = puVar15 + 7;
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
  char *pcStack_24;
  
  pcStack_24 = &DAT_08048404;
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
        *pcStack_24 = cVar2;
        _DAT_080483f6 =
             CONCAT11((char)(pcVar6 + -0x80483f3),(char)((uint)(pcVar6 + -0x80483f3) >> 8));
        _DAT_080483f8 = 0x4d52;
        DAT_080483fc = 0x100;
        _DAT_080483fa = 1;
        return CONCAT44(param_2,param_1);
      }
      if (cVar1 == '.') break;
      cVar2 = cVar2 + '\x01';
      *pcVar6 = cVar1;
      pcVar4 = pcVar3;
      pcVar6 = pcVar6 + 1;
    }
    *pcStack_24 = cVar2;
    pcVar5 = pcVar6 + 1;
    pcStack_24 = pcVar6;
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
  char cVar1;
  char cVar2;
  char *unaff_EDI;
  
  do {
    cVar1 = (char)((param_1 & 0xff) / 10);
    cVar2 = (char)((param_1 & 0xff) % 10) + '0';
    *unaff_EDI = cVar2;
    param_1 = CONCAT11(cVar2,cVar1);
    unaff_EDI = unaff_EDI + 1;
  } while (cVar1 != '\0');
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


