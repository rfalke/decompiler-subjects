typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
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




void processEntry entry(void)

{
  code *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int extraout_ECX;
  char *pcVar4;
  undefined *puVar5;
  char *in_stack_00000010;
  
  pcVar1 = (code *)swi(0x80);
  pcVar2 = (char *)(*pcVar1)();
  puVar5 = &stack0x00000004;
  if (-1 < (int)pcVar2) {
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar5 = &stack0x00000014;
    pcVar3 = *(char **)(extraout_ECX + 8);
    pcVar4 = in_stack_00000010;
    if (in_stack_00000010 != (char *)0x0) goto LAB_080480a5;
    in_stack_00000010 = (char *)0x4;
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


