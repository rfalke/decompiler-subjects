typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
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




void entry(char *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  
  piVar4 = (int *)&stack0x00000008;
  do {
    pcVar8 = param_1;
    param_1 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  while( true ) {
    piVar6 = piVar4 + 1;
    if (*piVar4 == 0) goto LAB_080480a6;
    if (*(short *)(pcVar8 + -6) == 0x6b6d) break;
    if (*(short *)(pcVar8 + -2) == 0x6666) {
      *piVar4 = 0x73;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      piVar4 = piVar4 + 2;
    }
    else {
      *piVar4 = 0x57;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      piVar4 = piVar4 + 2;
    }
  }
  *piVar4 = 2;
  *piVar4 = 5;
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  piVar6 = piVar4 + 2;
  if (iVar2 < 0) goto LAB_080480a6;
  piVar4[1] = 2;
  piVar4[1] = 0x13;
  pcVar1 = (code *)swi(0x80);
  uVar3 = (*pcVar1)();
  piVar5 = piVar4 + 3;
  piVar7 = piVar4 + 3;
  if (-1 < (int)uVar3) goto LAB_080480ad;
  do {
    *(undefined4 *)((int)piVar5 + -4) = 2;
    *(undefined4 *)((int)piVar5 + -4) = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    piVar6 = (int *)((int)piVar5 + 4);
LAB_080480a6:
    while( true ) {
      *(undefined4 *)((int)piVar6 + -4) = 1;
      pcVar1 = (code *)swi(0x80);
      uVar3 = (*pcVar1)();
      piVar7 = (int *)((int)piVar6 + 4);
LAB_080480ad:
      piVar7[-1] = 0x13;
      pcVar1 = (code *)swi(0x80);
      iVar2 = (*pcVar1)();
      piVar5 = piVar7 + 1;
      if (iVar2 < 0) break;
      *piVar7 = 1;
      piVar7[-1] = 4;
      piVar7[-1] = 4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      *piVar7 = (uVar3 >> 0xc) - 1;
      piVar7[-1] = 4;
      piVar7[-1] = 4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      *piVar7 = 0x13;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      piVar7[1] = 4;
      pcVar1 = (code *)swi(0x80);
      iVar2 = (*pcVar1)();
      piVar5 = piVar7 + 3;
      if (iVar2 < 0) break;
      piVar7[2] = 6;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      piVar6 = piVar7 + 4;
    }
  } while( true );
}


