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




void processEntry
entry(undefined4 param_1,uint param_2,char *param_3,short *param_4,undefined4 param_5)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  
  puVar2 = &param_4;
  do {
    pcVar5 = param_3;
    param_3 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  if (param_2 < 3) goto LAB_08048071;
  puVar3 = &stack0x00000010;
  if (pcVar5[-3] == 's') goto LAB_08048078;
  if (*param_4 == 0x732d) {
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
  param_5 = 9;
  puVar2 = (undefined4 *)&stack0x00000014;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  goto LAB_08048071;
}


