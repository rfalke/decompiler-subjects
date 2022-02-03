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




// WARNING: Control flow encountered bad instruction data

void entry(char *param_1,char *param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  int unaff_retaddr;
  
  bVar6 = 0;
  do {
    pcVar4 = param_1;
    param_1 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  iVar1 = *(int *)(pcVar4 + -8);
  if (unaff_retaddr == 1) {
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    pcVar4 = &DAT_080480fa;
    if (iVar1 != 0x74736f68) {
      pcVar4 = &DAT_080481fe;
    }
    do {
      pcVar5 = pcVar4 + (uint)bVar6 * -2 + 1;
      cVar3 = *pcVar4;
      pcVar4 = pcVar5;
    } while (cVar3 != '\0');
    pcVar5[-1] = '\n';
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
  }
  else {
    do {
      cVar3 = *param_2;
      param_2 = param_2 + 1;
    } while (cVar3 != '\0');
    if (iVar1 != 0x74736f68) {
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
    }
    else {
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
    }
  }
  pcVar2 = (code *)swi(0x80);
  pcVar4 = (char *)(*pcVar2)();
  cVar3 = (char)pcVar4;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


