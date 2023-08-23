typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
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




void processEntry entry(void)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  FUN_080480d4();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  FUN_080480d4();
  FUN_08048083();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar3 = &stack0x00000014;
  while (iVar2 != 0) {
    *(undefined **)(puVar3 + -4) = &DAT_080481a7;
    *(undefined4 *)(puVar3 + -8) = 0x80480ba;
    FUN_08048108();
    iVar2 = iVar2 + -1;
    if (iVar2 != 0) {
      DAT_080481a7 = 0x2c;
    }
    *(undefined4 *)(puVar3 + -4) = 1;
    *(undefined4 *)(puVar3 + -4) = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar3 = puVar3 + 4;
  }
  return;
}



void FUN_08048083(void)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar3 = &stack0x00000008;
  while (iVar2 != 0) {
    *(undefined **)(puVar3 + -4) = &DAT_080481a7;
    *(undefined4 *)(puVar3 + -8) = 0x80480ba;
    FUN_08048108();
    iVar2 = iVar2 + -1;
    if (iVar2 != 0) {
      DAT_080481a7 = 0x2c;
    }
    *(undefined4 *)(puVar3 + -4) = 1;
    *(undefined4 *)(puVar3 + -4) = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar3 = puVar3 + 4;
  }
  return;
}



undefined8 __regparm3 FUN_080480d4(int param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  
  puVar2 = &stack0xffffffe0;
  if (-1 < param_1) {
    puVar3 = &DAT_080481a7;
    FUN_08048108();
    DAT_080481a7 = 9;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)(puVar3);
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar2 = &stack0xffffffe8;
  }
  return CONCAT44(*(undefined4 *)(puVar2 + 0x14),*(undefined4 *)(puVar2 + 0x1c));
}



void __regparm3 FUN_08048108(uint param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined *unaff_EDI;
  
  iVar3 = 0;
  do {
    uVar1 = (ulonglong)param_1;
    param_1 = param_1 / 10;
    puVar4 = (uint *)((int)register0x00000010 + -4);
    puVar5 = (undefined4 *)((int)register0x00000010 + -4);
    register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + -4);
    *puVar4 = (uint)(byte)((char)(uVar1 % 10) + 0x30);
    iVar3 = iVar3 + 1;
  } while (param_1 != 0);
  do {
    uVar2 = *puVar5;
    puVar5 = puVar5 + 1;
    *unaff_EDI = (char)uVar2;
    iVar3 = iVar3 + -1;
    unaff_EDI = unaff_EDI + 1;
  } while (iVar3 != 0);
  return;
}


