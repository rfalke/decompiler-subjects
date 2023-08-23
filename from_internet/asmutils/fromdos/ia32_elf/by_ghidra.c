typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
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




// WARNING: Control flow encountered bad instruction data

void processEntry entry(undefined4 param_1,int param_2,char *param_3)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  char *extraout_ECX;
  char **ppcVar4;
  char **ppcVar5;
  char **ppcVar6;
  char *pcVar7;
  
  ppcVar6 = &param_3;
  if (param_2 == 1) {
    ppcVar4 = (char **)&stack0x00000008;
    pcVar3 = param_3;
    do {
      pcVar7 = pcVar3;
      pcVar3 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
LAB_0804805c:
    ppcVar4[-1] = (char *)0x1;
    ppcVar4[-1] = (char *)0x3;
    pcVar1 = (code *)swi(0x80);
    iVar2 = (*pcVar1)();
    ppcVar6 = ppcVar4 + 1;
    ppcVar5 = ppcVar4 + 1;
    if (iVar2 != 0) {
      if (*(short *)(pcVar7 + -5) == 0x6d6f) goto LAB_08048096;
      ppcVar5 = ppcVar4 + 1;
      if (*extraout_ECX == '\n') {
        *ppcVar4 = extraout_ECX;
        ppcVar4[-1] = (char *)0x1;
        ppcVar4[-1] = (char *)0x1;
        ppcVar4[-1] = (char *)0x4;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        ppcVar5 = ppcVar4 + 2;
      }
      goto LAB_08048089;
    }
  }
  *(undefined4 *)((int)ppcVar6 + -4) = 1;
  pcVar1 = (code *)swi(0x80);
  pcVar3 = (char *)(*pcVar1)();
  *pcVar3 = *pcVar3 + (char)pcVar3;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
LAB_08048096:
  ppcVar4 = ppcVar4 + 1;
  if (*extraout_ECX != '\r') {
LAB_08048089:
    *(undefined4 *)((int)ppcVar5 + -4) = 1;
    *(undefined4 *)((int)ppcVar5 + -4) = 1;
    *(undefined4 *)((int)ppcVar5 + -4) = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    ppcVar4 = (char **)((int)ppcVar5 + 4);
  }
  goto LAB_0804805c;
}


