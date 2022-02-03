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




// WARNING: Control flow encountered bad instruction data

void entry(void)

{
  char cVar1;
  code *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  int unaff_retaddr;
  
  bVar6 = 0;
  puVar3 = &stack0x00000004;
  while( true ) {
    unaff_retaddr = unaff_retaddr + 1;
    pcVar4 = *(char **)(puVar3 + unaff_retaddr * 4);
    if (pcVar4 == (char *)0x0) break;
    do {
      pcVar5 = pcVar4 + (uint)bVar6 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5[-1] = '\n';
    *(undefined4 *)(puVar3 + -4) = 1;
    *(undefined4 *)(puVar3 + -4) = 4;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    puVar3 = puVar3 + 4;
  }
  *(undefined4 *)(puVar3 + -4) = 1;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


