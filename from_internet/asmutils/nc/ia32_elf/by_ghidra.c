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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void processEntry entry(void)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  int extraout_ECX;
  undefined extraout_DL;
  undefined2 extraout_DX;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined6 uVar10;
  short *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined *in_stack_00000010;
  undefined *in_stack_00000014;
  int in_stack_0000001c;
  
  uVar9 = 0;
  puVar7 = &stack0x0000000c;
  puVar6 = &stack0x0000000c;
  if (in_stack_00000008 != (short *)0x0) {
    _DAT_0804816c = 2;
    if (*in_stack_00000008 == 0x6c2d) {
      FUN_0804813d();
      in_stack_0000000c = 0x804807d;
      uVar10 = FUN_08048157();
      _DAT_0804816c =
           CONCAT13((char)((uint6)uVar10 >> 0x20),
                    CONCAT12((char)((uint6)uVar10 >> 0x28),_DAT_0804816c));
      in_stack_0000000c = 0x10;
      uVar4 = 2;
      pcVar1 = (code *)swi(0x80);
      iVar3 = (*pcVar1)();
      puVar8 = &stack0x00000014;
      if (iVar3 < 0) goto LAB_08048138;
      in_stack_00000010 = (undefined *)0xff;
      pcVar1 = (code *)swi(0x80);
      in_stack_0000000c = (int)uVar10;
      (*pcVar1)();
      in_stack_00000014 = &DAT_0804859c;
      in_stack_00000010 = &DAT_0804857c;
      pcVar1 = (code *)swi(0x80);
      in_stack_0000000c = (int)uVar10;
      uVar9 = (*pcVar1)();
      puVar6 = (undefined4 *)&stack0x00000020;
      puVar7 = (undefined4 *)&stack0x00000020;
      if (in_stack_0000001c == 0) goto LAB_08048113;
    }
    puVar6[-1] = 0x80480d9;
    uVar4 = FUN_0804813d();
    puVar6[-1] = 4;
    puVar2 = &DAT_08048170;
    do {
      puVar5 = puVar2;
      puVar6[-1] = 0x80480e9;
      FUN_08048157();
      *puVar5 = extraout_DL;
      puVar2 = puVar5 + 1;
    } while (extraout_ECX != 1);
    *puVar6 = 0x80480f4;
    FUN_08048157();
    puVar5[-5] = (char)((ushort)extraout_DX >> 8);
    puVar5[-4] = (char)extraout_DX;
    *puVar6 = 0x10;
    puVar6[-1] = &DAT_0804816c;
    puVar6[-2] = uVar4;
    puVar6[-3] = 3;
    uVar4 = puVar6[-3];
    puVar6[-3] = 0x66;
    pcVar1 = (code *)swi(0x80);
    iVar3 = (*pcVar1)();
    puVar7 = puVar6 + 2;
    puVar8 = puVar6 + 2;
    if (iVar3 < 0) goto LAB_08048138;
  }
LAB_08048113:
  while( true ) {
    uVar4 = uVar9;
    puVar7[-1] = 3;
    pcVar1 = (code *)swi(0x80);
    iVar3 = (*pcVar1)();
    puVar8 = puVar7 + 1;
    if ((iVar3 < 0) || (puVar8 = puVar7 + 1, iVar3 == 0)) break;
    *puVar7 = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar7 = puVar7 + 2;
    uVar9 = uVar4;
  }
LAB_08048138:
  do {
    puVar8[-1] = 1;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    *puVar8 = uVar4;
    puVar8[-1] = 6;
    puVar8[-2] = 1;
    puVar8[-3] = 2;
    puVar8[-4] = 1;
    uVar4 = puVar8[-4];
    puVar8[-4] = 0x66;
    pcVar1 = (code *)swi(0x80);
    iVar3 = (*pcVar1)();
    puVar8 = puVar8 + 1;
  } while (iVar3 < 0);
  return;
}



void FUN_0804813d(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 auStack_14 [5];
  
  while( true ) {
    *(undefined4 *)((int)register0x00000010 + -4) = unaff_EBX;
    *(undefined4 *)((int)register0x00000010 + -8) = 6;
    *(undefined4 *)((int)register0x00000010 + -0xc) = 1;
    *(undefined4 *)((int)register0x00000010 + -0x10) = 2;
    *(undefined4 *)((int)register0x00000010 + -0x14) = 1;
    unaff_EBX = *(undefined4 *)((int)register0x00000010 + -0x14);
    *(undefined4 *)((int)register0x00000010 + -0x14) = 0x66;
    pcVar1 = (code *)swi(0x80);
    iVar2 = (*pcVar1)();
    if (-1 < iVar2) break;
    *(undefined4 *)((int)register0x00000010 + -4) = 1;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4);
  }
  return;
}



undefined8 __regparm3 FUN_08048157(undefined4 param_1)

{
  int iVar1;
  byte *unaff_ESI;
  
  iVar1 = 0;
  while( true ) {
    if (*unaff_ESI < 0x30) break;
    iVar1 = iVar1 * 10 + (uint)(byte)(*unaff_ESI - 0x30);
    unaff_ESI = unaff_ESI + 1;
  }
  return CONCAT44(iVar1,param_1);
}


