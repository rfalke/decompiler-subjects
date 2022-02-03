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




void entry(char *param_1,short *param_2,undefined4 param_3,undefined param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  uint unaff_retaddr;
  
  puVar2 = &param_2;
  do {
    pcVar5 = param_1;
    param_1 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  if (unaff_retaddr < 3) goto LAB_08048071;
  puVar3 = &param_4;
  if (pcVar5[-3] == 's') goto LAB_08048078;
  if (*param_2 == 0x732d) {
    puVar4 = &stack0x00000014;
    do {
      *(undefined4 *)(puVar4 + -4) = 0x53;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar2 = (undefined4 *)(puVar4 + 4);
LAB_08048071:
      *(undefined4 *)((int)puVar2 + -4) = 1;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar3 = (undefined *)((int)puVar2 + 4);
LAB_08048078:
      *(undefined4 *)(puVar3 + -4) = 10;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar4 = puVar3 + 4;
    } while( true );
  }
  param_3 = 9;
  puVar2 = (undefined4 *)&stack0x00000014;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  goto LAB_08048071;
}


