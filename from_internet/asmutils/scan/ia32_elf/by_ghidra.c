typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void processEntry entry(undefined4 param_1,byte param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  short sVar5;
  byte *pbVar6;
  byte *pbVar7;
  char *pcVar8;
  byte bVar9;
  
  bVar9 = 0;
  puVar4 = &param_3;
  if (param_2 < 4) {
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    param_3 = 1;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar4 = (undefined4 *)&stack0x0000000c;
  }
  pbVar6 = *(byte **)((int)puVar4 + 4);
  iVar2 = 0;
  do {
    cVar3 = '\0';
    pbVar7 = pbVar6;
    while( true ) {
      pbVar6 = pbVar7 + (uint)bVar9 * -2 + 1;
      if (*pbVar7 < 0x30) break;
      cVar3 = cVar3 * '\n' + (*pbVar7 - 0x30);
      pbVar7 = pbVar6;
    }
    (&DAT_08048199)[iVar2] = cVar3;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  DAT_08048195 = 2;
  sVar5 = 0;
  pcVar8 = *(char **)((int)puVar4 + 8);
  while( true ) {
    if (*pcVar8 == '\0') break;
    sVar5 = sVar5 * 10 + (ushort)(byte)(*pcVar8 - 0x30);
    pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
  }
  iVar2 = 0;
  pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
  while( true ) {
    if (*pcVar8 == '\0') break;
    iVar2 = iVar2 * 10 + (uint)(byte)(*pcVar8 - 0x30);
    pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
  }
  _DAT_080481ad = (short)iVar2;
  uRam080481af = (undefined2)((uint)iVar2 >> 0x10);
  DAT_080481ab = sVar5;
  do {
    *(undefined4 *)((int)puVar4 + 8) = 0x80480f8;
    FUN_08048105();
    sVar5 = sVar5 + 1;
  } while (sVar5 != _DAT_080481ad);
  FUN_08048173();
  return;
}



void FUN_08048105(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  uint unaff_ESI;
  int unaff_EDI;
  
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)(1,0);
  *(char *)(unaff_EDI + 3) = (char)(unaff_ESI & 0xffff);
  *(char *)(unaff_EDI + 2) = (char)((unaff_ESI & 0xffff) >> 8);
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  puVar3 = (undefined4 *)&stack0x00000004;
  if (iVar2 == 0) {
    FUN_0804817a();
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar3 = (undefined4 *)&stack0x0000000c;
  }
  *puVar3 = 6;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}



void FUN_08048173(void)

{
  ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  char *unaff_EDI;
  byte bVar5;
  
  bVar5 = 0;
  pcVar2 = (code *)swi(0x80);
  iVar3 = (*pcVar2)();
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *unaff_EDI = ' ';
    unaff_EDI = unaff_EDI + (uint)bVar5 * -2 + 1;
  }
  do {
    uVar1 = (ulonglong)iVar3;
    iVar3 = (int)(uVar1 / 10);
    unaff_EDI = unaff_EDI + -1;
    *unaff_EDI = (char)(uVar1 % 10) + '0';
  } while (iVar3 != 0);
  return;
}



void __regparm3 FUN_0804817a(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  char *unaff_EDI;
  
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_EDI = ' ';
    unaff_EDI = unaff_EDI + 1;
  }
  do {
    uVar1 = (ulonglong)param_1;
    param_1 = (int)(uVar1 / 10);
    unaff_EDI = unaff_EDI + -1;
    *unaff_EDI = (char)(uVar1 % 10) + '0';
  } while (param_1 != 0);
  return;
}


