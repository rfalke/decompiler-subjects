typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
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




void entry(undefined param_1,undefined4 param_2,undefined4 param_3,char *param_4,undefined param_5)

{
  code *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int extraout_ECX;
  char *pcVar4;
  undefined *puVar5;
  
  pcVar1 = (code *)swi(0x80);
  pcVar2 = (char *)(*pcVar1)();
  puVar5 = &param_1;
  if (-1 < (int)pcVar2) {
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar5 = &param_5;
    pcVar3 = *(char **)(extraout_ECX + 8);
    pcVar4 = param_4;
    if (param_4 != (char *)0x0) goto LAB_080480a5;
    param_4 = (char *)0x4;
    pcVar1 = (code *)swi(0x80);
    pcVar2 = (char *)(*pcVar1)();
    puVar5 = &stack0x00000018;
  }
  do {
    do {
      *(undefined4 *)(puVar5 + -4) = 1;
      pcVar1 = (code *)swi(0x80);
      pcVar3 = (char *)(*pcVar1)();
      puVar5 = puVar5 + 4;
      pcVar4 = pcVar2;
LAB_080480a5:
      pcVar2 = pcVar3;
    } while ((*pcVar4 != 'n') && (*pcVar4 != 'y'));
    *(undefined4 *)(puVar5 + -4) = 0xf;
    pcVar1 = (code *)swi(0x80);
    pcVar2 = (char *)(*pcVar1)();
    puVar5 = puVar5 + 4;
  } while( true );
}


