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




void entry(char *param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  byte bVar11;
  undefined8 uVar12;
  int unaff_retaddr;
  undefined *puVar5;
  char *pcVar10;
  
  bVar11 = 0;
  puVar7 = (undefined4 *)&stack0x00000008;
  puVar5 = &stack0x00000008;
  do {
    pcVar10 = param_1;
    param_1 = pcVar10 + 1;
  } while (*pcVar10 != '\0');
  if (*(short *)(pcVar10 + -5) == 0x736c) goto LAB_08048099;
  puVar6 = (undefined4 *)&stack0x00000008;
  for (iVar8 = unaff_retaddr + -1; iVar8 != 0; iVar8 = iVar8 + -1) {
    pcVar2 = (code *)swi(0x80);
    iVar3 = (*pcVar2)();
    puVar6 = (undefined4 *)(puVar5 + 8);
    puVar4 = puVar5 + 8;
    puVar5 = puVar5 + 8;
    if (iVar3 < 0) break;
    puVar6 = (undefined4 *)puVar4;
  }
LAB_08048092:
  *(undefined4 *)((int)puVar6 + -4) = 1;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  puVar7 = (undefined4 *)((int)puVar6 + 4);
LAB_08048099:
  puVar7[-1] = 0x26;
  puVar7[-1] = 1;
  puVar7[-1] = 4;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  *puVar7 = 5;
  pcVar2 = (code *)swi(0x80);
  iVar8 = (*pcVar2)();
  if (iVar8 < 0) goto LAB_080480d5;
  puVar7[1] = 3;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  goto LAB_080480cb;
LAB_080480d5:
  puVar7[1] = 1;
  pcVar2 = (code *)swi(0x80);
  uVar12 = (*pcVar2)();
  pcVar10 = (char *)((ulonglong)uVar12 >> 0x20);
  puVar6 = puVar7 + 3;
  iVar8 = DAT_0804811c;
  if (-1 < (int)uVar12) {
    do {
      do {
        pcVar9 = pcVar10 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9[-1] = '\n';
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
LAB_080480cb:
    puVar7[2] = 1;
    puVar7[2] = 4;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    puVar6 = puVar7 + 4;
  }
  goto LAB_08048092;
}


