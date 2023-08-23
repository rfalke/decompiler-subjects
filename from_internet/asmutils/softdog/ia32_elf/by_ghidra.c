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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void processEntry entry(undefined4 param_1,int param_2,undefined4 param_3,byte *param_4)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  
  puVar5 = &param_3;
  _DAT_080480cb = 10;
  if (param_2 != 1) {
    uVar4 = 0;
    pbVar8 = param_4;
    while( true ) {
      bVar2 = *pbVar8 - 0x30;
      if ((*pbVar8 < 0x30) || (9 < bVar2)) break;
      uVar4 = uVar4 * 10 + (uint)bVar2;
      pbVar8 = pbVar8 + 1;
    }
    puVar5 = (undefined4 *)&stack0x0000000c;
    if (uVar4 != 0) {
      param_4 = (byte *)0x3c;
      puVar5 = (undefined4 *)&stack0x0000000c;
      _DAT_080480cb = uVar4;
      if (0x3b < uVar4) {
        puVar5 = (undefined4 *)&stack0x0000000c;
        _DAT_080480cb = 0x3c;
      }
    }
  }
  puVar5[-1] = 1;
  puVar5[-1] = 5;
  pcVar1 = (code *)swi(0x80);
  iVar3 = (*pcVar1)();
  puVar6 = puVar5 + 1;
  if (-1 < iVar3) {
    *puVar5 = 2;
    pcVar1 = (code *)swi(0x80);
    iVar3 = (*pcVar1)();
    puVar6 = puVar5 + 2;
    puVar7 = puVar5 + 2;
    if (iVar3 == 0) goto LAB_0804809f;
  }
  *(undefined4 *)((int)puVar6 + -4) = 1;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar7 = (undefined4 *)((int)puVar6 + 4);
LAB_0804809f:
  do {
    *(undefined4 *)((int)puVar7 + -4) = 1;
    *(undefined4 *)((int)puVar7 + -4) = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar7 = (undefined4 *)((int)puVar7 + 8);
  } while( true );
}


