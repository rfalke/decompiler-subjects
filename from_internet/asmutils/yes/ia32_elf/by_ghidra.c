typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
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




void processEntry entry(undefined4 param_1,int param_2)

{
  code *pcVar1;
  char **ppcVar2;
  char **ppcVar3;
  char **ppcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  ppcVar2 = (char **)&stack0x00000008;
  pcVar7 = &DAT_08048087;
  iVar5 = param_2 + -1;
  ppcVar3 = (char **)&stack0x00000008;
  if (iVar5 != 0) goto LAB_08048062;
  DAT_08048087 = 0x79;
  iVar5 = param_2;
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


