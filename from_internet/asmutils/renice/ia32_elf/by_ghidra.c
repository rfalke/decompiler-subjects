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




void processEntry entry(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  code *pcVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = &param_4;
  if (param_2 == 1) goto LAB_080480a9;
  puVar5 = &param_5;
  if (param_4 == 0) goto LAB_080480b9;
  param_4 = 0x8048076;
  DAT_080480e6 = FUN_080480be();
  puVar5 = (undefined4 *)&stack0x00000010;
  puVar2 = &stack0x00000010;
  if (param_5 == 0) goto LAB_080480b9;
  do {
    *(undefined4 *)(puVar2 + -4) = 0x8048085;
    DAT_080480e2 = FUN_080480be();
    *(undefined4 *)(puVar2 + -4) = 0x61;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    piVar3 = (int *)(puVar2 + 4);
    puVar5 = (undefined4 *)(puVar2 + 8);
    puVar2 = puVar2 + 8;
  } while (*piVar3 != 0);
  do {
    *(undefined4 *)((int)puVar5 + -4) = 1;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar4 = (undefined4 *)((int)puVar5 + 4);
LAB_080480a9:
    *(undefined4 *)((int)puVar4 + -4) = 0x1b;
    *(undefined4 *)((int)puVar4 + -4) = 1;
    *(undefined4 *)((int)puVar4 + -4) = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar5 = (undefined4 *)((int)puVar4 + 4);
LAB_080480b9:
    *(undefined4 *)((int)puVar5 + -4) = 1;
  } while( true );
}



int FUN_080480be(void)

{
  int iVar1;
  char *unaff_ESI;
  char *pcVar2;
  
  iVar1 = 0;
  pcVar2 = unaff_ESI;
  if (*unaff_ESI == '-') {
    pcVar2 = unaff_ESI + 1;
  }
  while( true ) {
    if (*pcVar2 == '\0') break;
    iVar1 = iVar1 * 10 + (uint)(byte)(*pcVar2 - 0x30);
    pcVar2 = pcVar2 + 1;
  }
  if (*unaff_ESI != '-') {
    return iVar1;
  }
  return -iVar1;
}


