typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
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




void processEntry entry(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte extraout_var;
  int iVar2;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  code *extraout_ECX_01;
  code *pcVar3;
  code *extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  char *in_EDI;
  undefined8 uVar11;
  
  bVar1 = 0;
  piVar7 = (int *)&stack0x00000008;
  piVar5 = (int *)&stack0x00000008;
  iVar4 = 0;
  if (param_2 == 1) goto LAB_08048064;
  while (piVar8 = piVar7 + 1, *piVar7 != 0) {
    *piVar7 = 5;
    pcVar3 = (code *)swi(0x80);
    iVar4 = (*pcVar3)();
    piVar8 = piVar7 + 2;
    piVar5 = piVar7 + 2;
    if (iVar4 < 0) break;
LAB_08048064:
    iVar9 = 0;
    do {
      piVar5[-1] = 0x33;
      in_EDI = &DAT_080480f0;
      for (iVar2 = piVar5[-1]; iVar2 != 0; iVar2 = iVar2 + -1) {
        *in_EDI = ' ';
        in_EDI = in_EDI + (uint)bVar1 * -2 + 1;
      }
      piVar5[-1] = 0x10;
      piVar5[-1] = 3;
      pcVar3 = (code *)swi(0x80);
      uVar11 = (*pcVar3)();
      iVar2 = (int)uVar11;
      piVar8 = piVar5 + 1;
      piVar6 = piVar5 + 1;
      if (iVar2 < 0) goto LAB_080480d3;
      if (iVar2 == 0) break;
      *piVar5 = iVar2;
      piVar5[-1] = extraout_ECX;
      piVar5[-2] = (int)((ulonglong)uVar11 >> 0x20);
      piVar5[-3] = iVar4;
      piVar5[-4] = (int)(piVar5 + 1);
      piVar5[-5] = iVar9;
      piVar5[-6] = (int)&DAT_080480f0;
      piVar5[-7] = (int)in_EDI;
      piVar5[-8] = iVar9;
      piVar5[-9] = 0x8048091;
      FUN_080480d8();
      piVar5[-8] = 0x8048096;
      (*(code *)(extraout_ECX_00 + 2))();
      DAT_080480f0 = 0x3a;
      pcVar3 = extraout_ECX_01;
      do {
        pcVar10 = in_EDI + (uint)bVar1 * -2 + 1;
        if ((*in_EDI == '\x7f') || (*in_EDI < ' ')) {
          pcVar10[-1] = '.';
        }
        piVar5[-8] = 0x80480ad;
        (*pcVar3)();
        iVar2 = iVar2 + -1;
        pcVar3 = extraout_ECX_02;
        in_EDI = pcVar10;
      } while (iVar2 != 0);
      *pcVar10 = '\n';
      in_EDI = (char *)piVar5[-7];
      iVar9 = piVar5[-5] + *piVar5;
      *piVar5 = piVar5[-3];
      piVar5[-1] = 1;
      piVar5[-1] = 4;
      pcVar3 = (code *)swi(0x80);
      iVar2 = (*pcVar3)();
      iVar4 = piVar5[1];
      piVar6 = piVar5 + 2;
      piVar5 = piVar5 + 2;
    } while (0 < iVar2);
    *(undefined4 *)((int)piVar6 + -4) = 6;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    piVar7 = (int *)((int)piVar6 + 4);
  }
LAB_080480d3:
  piVar8[-1] = 1;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  *piVar8 = extraout_ECX_03;
  bVar1 = extraout_var / 0x10;
  piVar8[-1] = 0x80480e4;
  if (9 < bVar1) {
    bVar1 = bVar1 + 7;
  }
  *in_EDI = bVar1 + 0x30;
  return;
}



void __regparm3 FUN_080480d8(undefined4 param_1)

{
  byte bVar1;
  char *unaff_EDI;
  
  bVar1 = (byte)((uint)param_1 >> 0x18) / 0x10;
  if (9 < bVar1) {
    bVar1 = bVar1 + 7;
  }
  *unaff_EDI = bVar1 + 0x30;
  return;
}


