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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(undefined param_1)

{
  code *pcVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  byte *pbVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  byte bVar15;
  int unaff_retaddr;
  
  bVar15 = 0;
  FUN_080482c1();
  puVar8 = (undefined4 *)&param_1;
  if (unaff_retaddr != 1) goto LAB_080480e4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  piVar7 = (int *)&stack0x00000008;
  iVar4 = 0;
LAB_080480b8:
  do {
    if ((iVar4 != 0) && (iVar4 == -0x6f)) {
      *(undefined4 *)((int)piVar7 + -4) = 0x16;
      *(undefined4 *)((int)piVar7 + -4) = 1;
      *(undefined4 *)((int)piVar7 + -4) = 4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      piVar7 = (int *)((int)piVar7 + 4);
    }
    piVar7[-1] = 0x80480d6;
    FUN_080482f3();
    piVar7[-1] = 6;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    *piVar7 = 1;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar8 = piVar7 + 2;
LAB_080480e4:
    puVar8[1] = 0x80480f0;
    FUN_0804829f();
    cVar6 = '\x17';
    if ((byte *)puVar8[2] != (byte *)0x0) {
      cVar6 = '\0';
      pbVar10 = (byte *)puVar8[2];
      while( true ) {
        bVar3 = *pbVar10 - 0x30;
        if ((*pbVar10 < 0x30) || (9 < bVar3)) break;
        cVar6 = cVar6 * '\n' + bVar3;
        pbVar10 = pbVar10 + (uint)bVar15 * -2 + 1;
      }
    }
    DAT_08048315 = CONCAT13(cVar6,2);
    puVar8[2] = 0;
    puVar8[1] = 1;
    *puVar8 = 2;
    puVar8[-1] = 1;
    puVar8[-1] = 0x66;
    pcVar1 = (code *)swi(0x80);
    iVar4 = (*pcVar1)();
    bVar14 = iVar4 < 0;
    piVar2 = puVar8 + 4;
    do {
      do {
        do {
          piVar7 = piVar2;
          iVar5 = iVar4;
          iVar4 = iVar5;
          if (bVar14) goto LAB_080480b8;
          piVar7[-1] = 0x10;
          piVar7[-2] = 4;
          piVar7[-3] = (int)(piVar7 + -1);
          piVar7[-4] = 1;
          piVar7[-5] = 0;
          piVar7[-6] = iVar5;
          piVar7[-7] = 0xe;
          piVar7[-7] = 0x66;
          pcVar1 = (code *)swi(0x80);
          iVar4 = (*pcVar1)();
          bVar14 = iVar4 < 0;
          iVar4 = *piVar7;
          piVar2 = piVar7 + 1;
        } while (bVar14);
        *piVar7 = 0x10;
        piVar7[-1] = (int)&DAT_08048315;
        piVar7[-2] = iVar5;
        piVar7[-3] = 3;
        piVar7[-3] = 0x66;
        pcVar1 = (code *)swi(0x80);
        iVar4 = (*pcVar1)();
        bVar14 = iVar4 < 0;
        piVar2 = piVar7 + 2;
      } while (bVar14);
      piVar7[1] = 1;
      *piVar7 = 4;
      piVar7[-1] = (int)(piVar7 + 1);
      piVar7[-2] = 10;
      piVar7[-3] = 1;
      piVar7[-4] = iVar5;
      piVar7[-5] = 0xe;
      piVar7[-5] = 0x66;
      pcVar1 = (code *)swi(0x80);
      iVar4 = (*pcVar1)();
      bVar14 = iVar4 < 0;
      iVar4 = piVar7[2];
      piVar2 = piVar7 + 3;
    } while (bVar14);
    piVar7[2] = 1;
    piVar7[2] = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    piVar2 = piVar7 + 4;
LAB_08048198:
    while( true ) {
      piVar9 = piVar2;
      _DAT_08048309 = 3;
      _DAT_0804830d = 0;
      _DAT_08048311 = 3;
      piVar9[-1] = 2;
      pcVar1 = (code *)swi(0x80);
      _DAT_08048305 = iVar5;
      (*pcVar1)();
      if ((_DAT_0804830b & 3) != 0) break;
      piVar2 = piVar9 + 1;
      if ((_DAT_08048313 & 3) != 0) {
        *piVar9 = 3;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        piVar9[1] = 4;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        piVar2 = piVar9 + 3;
      }
    }
    *piVar9 = 3;
    pcVar1 = (code *)swi(0x80);
    iVar4 = (*pcVar1)();
    piVar7 = piVar9 + 2;
  } while (iVar4 == 0);
  pcVar13 = &DAT_08048349;
  if (DAT_08048349 == -1) {
    while (pcVar13 != &DAT_08048349 + iVar4) {
      pcVar11 = pcVar13 + (uint)bVar15 * -2 + 1;
      if (*pcVar13 != -1) {
        piVar9[1] = (int)pcVar11;
        *piVar9 = iVar4;
        piVar9[-1] = (int)(pcVar11 + -0x8048349);
        piVar9[-2] = 4;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        piVar9[2] = 1;
        piVar9[2] = 4;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        piVar2 = piVar9 + 4;
        goto LAB_08048198;
      }
      pcVar12 = pcVar11 + (uint)bVar15 * -2 + 1;
      cVar6 = *pcVar11;
      if (((cVar6 == -2) || (cVar6 == -5)) || (cVar6 == -4)) {
        pcVar13 = pcVar12 + (uint)bVar15 * -2 + 1;
      }
      else {
        pcVar13 = pcVar12;
        if (cVar6 == -3) {
          pcVar13 = pcVar12 + (uint)bVar15 * -2 + 1;
          cVar6 = -4;
          if (*pcVar12 == '\b') {
            cVar6 = -5;
          }
          pcVar13[-2] = cVar6;
        }
      }
    }
    piVar9[1] = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    piVar2 = piVar9 + 3;
  }
  else {
    piVar9[1] = 1;
    piVar9[1] = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    piVar2 = piVar9 + 3;
  }
  goto LAB_08048198;
}



void FUN_0804829f(void)

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



void FUN_080482c1(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  DAT_08048331 = DAT_08048331 & 0xfffffff5;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  DAT_08048331 = param_1;
  return;
}



void FUN_080482f3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}


