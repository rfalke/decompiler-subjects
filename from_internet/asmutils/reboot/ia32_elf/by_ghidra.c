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




void processEntry entry(undefined4 param_1,int param_2,char *param_3)

{
  code *pcVar1;
  short *in_EAX;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  short **ppsVar4;
  short **ppsVar5;
  short **ppsVar6;
  char *pcVar7;
  int iVar8;
  undefined8 uVar9;
  
  iVar8 = 0;
  ppsVar4 = (short **)&stack0x00000008;
  do {
    pcVar7 = param_3;
    param_3 = pcVar7 + 1;
    in_EAX = (short *)CONCAT31((int3)((uint)in_EAX >> 8),*pcVar7);
  } while (*pcVar7 != '\0');
  uVar3 = 0xfee1dead;
  uVar2 = 0x28121969;
  while (param_2 = param_2 + -1, ppsVar6 = ppsVar4, param_2 != 0) {
    in_EAX = *ppsVar4;
    ppsVar6 = ppsVar4 + 1;
    ppsVar5 = ppsVar4 + 1;
    ppsVar4 = ppsVar4 + 1;
    if (*in_EAX == 0x702d) goto LAB_08048091;
    ppsVar6 = ppsVar5;
    if (*in_EAX != 0x662d) break;
    iVar8 = iVar8 + 1;
  }
  uVar9 = CONCAT44(0x1234567,in_EAX);
  if (*(int *)(pcVar7 + -4) == 0x746c6168) {
    uVar2 = 0xcdef0123;
  }
  else {
    if (*(short *)(pcVar7 + -2) != 0x6666) goto LAB_080480ae;
LAB_08048091:
    uVar2 = 0x4321fedc;
  }
  *(undefined4 *)((int)ppsVar6 + -4) = uVar2;
  *(undefined4 *)((int)ppsVar6 + -8) = 0x58;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  ppsVar6 = (short **)((int)ppsVar6 + 4);
  do {
    do {
      ppsVar6[-1] = (short *)0x58;
      pcVar1 = (code *)swi(0x80);
      uVar3 = (*pcVar1)();
      *ppsVar6 = (short *)0x1;
      pcVar1 = (code *)swi(0x80);
      uVar9 = (*pcVar1)();
      ppsVar6 = ppsVar6 + 2;
      uVar2 = extraout_ECX;
LAB_080480ae:
    } while (iVar8 != 0);
    *(int *)((int)ppsVar6 + -4) = (int)uVar9;
    *(undefined4 *)((int)ppsVar6 + -8) = uVar2;
    *(int *)((int)ppsVar6 + -0xc) = (int)((ulonglong)uVar9 >> 0x20);
    *(undefined4 *)((int)ppsVar6 + -0x10) = uVar3;
    *(short ***)((int)ppsVar6 + -0x14) = ppsVar6;
    *(int *)((int)ppsVar6 + -0x18) = param_2;
    *(char **)((int)ppsVar6 + -0x1c) = param_3;
    *(undefined4 *)((int)ppsVar6 + -0x20) = 0;
    *(undefined4 *)((int)ppsVar6 + -0x24) = 2;
    *(undefined4 *)((int)ppsVar6 + -0x24) = 1;
    *(undefined4 *)((int)ppsVar6 + -0x24) = 0x25;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    iVar8 = *(int *)((int)ppsVar6 + -0x18);
    param_3 = *(char **)((int)ppsVar6 + -0x14);
    param_2 = *(int *)((int)ppsVar6 + -0x10);
    *(undefined4 *)((int)ppsVar6 + 4) = 0x24;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    ppsVar6 = (short **)((int)ppsVar6 + 0xc);
  } while( true );
}


