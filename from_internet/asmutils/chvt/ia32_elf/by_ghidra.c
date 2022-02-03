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




void FUN_0804804c(void)

{
  byte *unaff_ESI;
  
  for (; (0x2f < *unaff_ESI && ((byte)(*unaff_ESI - 0x30) < 10)); unaff_ESI = unaff_ESI + 1) {
  }
  return;
}



undefined4 FUN_08048068(undefined param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  undefined uVar12;
  byte bVar13;
  char *pcVar11;
  
  bVar13 = 0;
  pcVar2 = (code *)swi(0x80);
  iVar4 = (*pcVar2)();
  uVar12 = iVar4 == 0;
  puVar3 = (undefined4 *)&param_1;
  if (-1 < iVar4) {
    pcVar2 = (code *)swi(0x80);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
LAB_08048086:
  do {
    puVar6 = puVar3;
    puVar6[-1] = 1;
    puVar6[-1] = 1;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    *puVar6 = 0x8048098;
    FUN_08048068();
    if (!(bool)uVar12) {
      *puVar6 = 0x80480a4;
      FUN_08048068();
      puVar3 = puVar6 + 1;
      if (!(bool)uVar12) goto LAB_08048086;
    }
    iVar4 = puVar6[1];
    piVar8 = puVar6 + 3;
    pcVar11 = (char *)puVar6[2];
    do {
      pcVar10 = pcVar11 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar10;
    } while (cVar1 != '\0');
    if (*(int *)(pcVar10 + -5) != 0x74766863) goto LAB_080480e6;
    uVar12 = iVar4 == 2;
    puVar3 = puVar6 + 3;
    if ((bool)uVar12) {
      piVar7 = puVar6 + 4;
      if (puVar6[3] != 0) {
        puVar6[3] = 0x80480c7;
        FUN_0804804c();
        puVar6[3] = 0x36;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar6[4] = 0x36;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        piVar7 = puVar6 + 6;
      }
      do {
        *(undefined4 *)((int)piVar7 + -4) = 1;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        piVar8 = (int *)((int)piVar7 + 4);
LAB_080480e6:
        iVar4 = iVar4 + -1;
        piVar9 = piVar8;
        if (iVar4 == 0) goto LAB_080480f5;
        while (piVar7 = piVar9 + 1, piVar8 = piVar9 + 1, *piVar9 != 0) {
          *piVar9 = 0x80480f5;
          FUN_0804804c();
LAB_080480f5:
          *(undefined4 *)((int)piVar8 + -4) = 0x36;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          piVar9 = (int *)((int)piVar8 + 4);
        }
      } while( true );
    }
  } while( true );
}



void entry(void)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  int iVar8;
  undefined in_ZF;
  byte bVar9;
  char *pcVar7;
  
  bVar9 = 0;
  do {
    *(undefined4 *)((int)register0x00000010 + -4) = 0x8048098;
    FUN_08048068();
    if ((bool)in_ZF) {
LAB_080480a6:
      iVar8 = *(int *)register0x00000010;
      piVar4 = (int *)((int)register0x00000010 + 8);
      piVar5 = (int *)((int)register0x00000010 + 8);
      pcVar7 = *(char **)((int)register0x00000010 + 4);
      do {
        pcVar6 = pcVar7 + (uint)bVar9 * -2 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar6;
      } while (cVar1 != '\0');
      if (*(int *)(pcVar6 + -5) != 0x74766863) goto LAB_080480e6;
      in_ZF = iVar8 == 2;
      if ((bool)in_ZF) {
        piVar3 = (int *)((int)register0x00000010 + 0xc);
        if (*(int *)((int)register0x00000010 + 8) != 0) {
          *(undefined4 *)((int)register0x00000010 + 8) = 0x80480c7;
          FUN_0804804c();
          *(undefined4 *)((int)register0x00000010 + 8) = 0x36;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          *(undefined4 *)((int)register0x00000010 + 0xc) = 0x36;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          piVar3 = (int *)((int)register0x00000010 + 0x14);
        }
        do {
          *(undefined4 *)((int)piVar3 + -4) = 1;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          piVar4 = (int *)((int)piVar3 + 4);
LAB_080480e6:
          iVar8 = iVar8 + -1;
          piVar5 = piVar4;
          if (iVar8 == 0) goto LAB_080480f5;
          while (piVar3 = piVar5 + 1, piVar4 = piVar5 + 1, *piVar5 != 0) {
            *piVar5 = 0x80480f5;
            FUN_0804804c();
LAB_080480f5:
            *(undefined4 *)((int)piVar4 + -4) = 0x36;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            piVar5 = (int *)((int)piVar4 + 4);
          }
        } while( true );
      }
    }
    else {
      *(undefined4 *)((int)register0x00000010 + -4) = 0x80480a4;
      FUN_08048068();
      piVar5 = (int *)register0x00000010;
      if ((bool)in_ZF) goto LAB_080480a6;
    }
    *(undefined4 *)((int)piVar5 + -4) = 1;
    *(undefined4 *)((int)piVar5 + -4) = 1;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    register0x00000010 = (BADSPACEBASE *)((int)piVar5 + 4);
  } while( true );
}


