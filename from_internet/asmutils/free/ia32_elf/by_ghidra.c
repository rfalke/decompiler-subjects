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




void __regparm3 FUN_0804804c(uint param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  undefined *puVar4;
  
  iVar2 = 7;
  if (param_1 == 0) {
    *(undefined *)(unaff_EDI + 7) = 0x30;
    iVar2 = 6;
  }
  else {
    do {
      if (param_1 == 0) break;
      uVar1 = (ulonglong)param_1;
      param_1 = param_1 / 10;
      *(char *)(unaff_EDI + iVar2) = (char)(uVar1 % 10) + '0';
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar4 = (undefined *)(unaff_EDI + iVar2);
  for (iVar3 = iVar2 + 1; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0x20;
    puVar4 = puVar4 + -1;
  }
  puVar4 = puVar4 + 9;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0x20;
    puVar4 = puVar4 + 1;
  }
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x080481eb)
// WARNING: Removing unreachable block (ram,0x080481c2)
// WARNING: Removing unreachable block (ram,0x080481d1)

void processEntry entry(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  byte bVar4;
  uint *puVar3;
  int in_ESI;
  int in_FS_OFFSET;
  int in_GS_OFFSET;
  undefined6 uVar5;
  undefined4 *apuStack_38 [4];
  int iStack_28;
  undefined2 uStack_24;
  byte *pbStack_1c;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  FUN_0804804c();
  FUN_0804804c();
  FUN_0804804c();
  FUN_0804804c();
  FUN_0804804c();
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  FUN_0804804c();
  FUN_0804804c();
  FUN_0804804c();
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x80);
  uVar5 = (*pcVar2)();
  puVar3 = (uint *)uVar5;
  *puVar3 = *puVar3 | (uint)apuStack_38;
  bVar4 = (byte)((uint6)uVar5 >> 8);
  *(byte *)puVar3 = *(byte *)puVar3 & bVar4;
  *(byte *)puVar3 = *(byte *)puVar3 & bVar4;
  *(byte *)puVar3 = *(byte *)puVar3 & bVar4;
  *(byte *)puVar3 = *(byte *)puVar3 & bVar4;
  *(byte *)puVar3 = *(byte *)puVar3 & bVar4;
  *(byte *)puVar3 = *(byte *)puVar3 & bVar4;
  if (*(byte *)puVar3 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (*(byte *)puVar3 != 0) {
    in((short)((uint6)uVar5 >> 0x20));
    *(byte *)puVar3 = *(byte *)puVar3 & bVar4;
    *(byte *)puVar3 = *(byte *)puVar3 & bVar4;
    *(byte *)puVar3 = *(byte *)puVar3 & bVar4;
    *(byte *)(in_FS_OFFSET + (int)puVar3) = *(byte *)(in_FS_OFFSET + (int)puVar3) & bVar4;
    *(byte *)puVar3 = *(byte *)puVar3 & bVar4;
    *(byte *)puVar3 = *(byte *)puVar3 & bVar4;
    *(byte *)(in_ESI + 0x72) = *(byte *)(in_ESI + 0x72) & bVar4;
    *(byte *)(in_GS_OFFSET + (int)puVar3) = *(byte *)(in_GS_OFFSET + (int)puVar3) & bVar4;
    *(byte *)puVar3 = *(byte *)puVar3 & bVar4;
    bRam00000068 = bRam00000068 & (byte)((uint6)uVar5 >> 0x28);
    bVar4 = (byte)((uint)pbStack_1c >> 8);
    pbStack_1c[in_FS_OFFSET] = pbStack_1c[in_FS_OFFSET] & bVar4;
    *pbStack_1c = *pbStack_1c & bVar4;
    uVar1 = in(uStack_24);
    *apuStack_38[0] = uVar1;
    *pbStack_1c = *pbStack_1c & bVar4;
    *pbStack_1c = *pbStack_1c & bVar4;
    *(byte *)(iStack_28 + 0x77) = *(byte *)(iStack_28 + 0x77) & (byte)uStack_24;
    bVar4 = (byte)((uint)param_3 >> 8);
    *param_3 = *param_3 & bVar4;
    *param_3 = *param_3 & bVar4;
    *param_3 = *param_3 & (byte)param_3;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


