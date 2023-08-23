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
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  
  puVar4 = &param_3;
  _DAT_0804809b = 0x1e;
  if (param_2 != 1) {
    iVar3 = 0;
    pbVar6 = param_4;
    while( true ) {
      bVar2 = *pbVar6 - 0x30;
      if ((*pbVar6 < 0x30) || (9 < bVar2)) break;
      iVar3 = iVar3 * 10 + (uint)bVar2;
      pbVar6 = pbVar6 + 1;
    }
    puVar4 = (undefined4 *)&stack0x0000000c;
    if (iVar3 != 0) {
      puVar4 = (undefined4 *)&stack0x0000000c;
      _DAT_0804809b = iVar3;
    }
  }
  puVar4[-1] = 2;
  pcVar1 = (code *)swi(0x80);
  iVar3 = (*pcVar1)();
  puVar5 = puVar4 + 1;
  if (iVar3 != 0) {
    *puVar4 = 1;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar5 = puVar4 + 2;
  }
  do {
    *(undefined4 *)((int)puVar5 + -4) = 1;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar5 = (undefined4 *)((int)puVar5 + 8);
  } while( true );
}


