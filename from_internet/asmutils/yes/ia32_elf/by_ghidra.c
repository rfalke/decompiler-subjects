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




void entry(void)

{
  code *pcVar1;
  char **ppcVar2;
  char **ppcVar3;
  char **ppcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int unaff_retaddr;
  
  ppcVar2 = (char **)&stack0x00000008;
  pcVar7 = &DAT_08048087;
  iVar5 = unaff_retaddr + -1;
  ppcVar3 = (char **)&stack0x00000008;
  if (iVar5 != 0) goto LAB_08048062;
  DAT_08048087 = 0x79;
  iVar5 = unaff_retaddr;
  pcVar8 = &DAT_08048088;
  while (iVar5 = iVar5 + -1, ppcVar4 = ppcVar2, iVar5 != 0) {
    pcVar7 = pcVar8 + 1;
    *pcVar8 = ' ';
    ppcVar3 = ppcVar2;
LAB_08048062:
    ppcVar2 = ppcVar3 + 1;
    ppcVar4 = ppcVar3 + 1;
    pcVar6 = *ppcVar3;
    while( true ) {
      pcVar8 = pcVar7;
      if (*pcVar6 == '\0') break;
      pcVar8 = pcVar7 + 1;
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar8;
      if (0x8049084 < (int)pcVar8) goto LAB_08048071;
    }
  }
LAB_08048071:
  *pcVar8 = '\n';
  do {
    *(undefined4 *)((int)ppcVar4 + -4) = 1;
    *(undefined4 *)((int)ppcVar4 + -4) = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    ppcVar4 = (char **)((int)ppcVar4 + 4);
  } while( true );
}


