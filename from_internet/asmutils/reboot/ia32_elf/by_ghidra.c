typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned short    word;
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




void __regparm1 entry(short *param_1,byte *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  short **ppsVar4;
  short **ppsVar5;
  short **ppsVar6;
  byte *pbVar7;
  int iVar8;
  undefined8 uVar9;
  int unaff_retaddr;
  
  iVar8 = 0;
  ppsVar4 = (short **)&stack0x00000008;
  do {
    pbVar7 = param_2;
    param_2 = pbVar7 + 1;
    param_1 = (short *)((uint)param_1 & 0xffffff00 | (uint)*pbVar7);
  } while (*pbVar7 != 0);
  uVar3 = 0xfee1dead;
  uVar2 = 0x28121969;
  while (unaff_retaddr = unaff_retaddr + -1, ppsVar6 = ppsVar4, unaff_retaddr != 0) {
    param_1 = *ppsVar4;
    ppsVar6 = ppsVar4 + 1;
    ppsVar5 = ppsVar4 + 1;
    ppsVar4 = ppsVar4 + 1;
    if (*param_1 == 0x702d) goto LAB_08048091;
    ppsVar6 = ppsVar5;
    if (*param_1 != 0x662d) break;
    iVar8 = iVar8 + 1;
  }
  uVar9 = CONCAT44(0x1234567,param_1);
  if (*(int *)(pbVar7 + -4) == 0x746c6168) {
    uVar2 = 0xcdef0123;
  }
  else {
    if (*(short *)(pbVar7 + -2) != 0x6666) goto LAB_080480ae;
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
    *(int *)((int)ppsVar6 + -0x18) = unaff_retaddr;
    *(byte **)((int)ppsVar6 + -0x1c) = param_2;
    *(undefined4 *)((int)ppsVar6 + -0x20) = 0;
    *(undefined4 *)((int)ppsVar6 + -0x24) = 2;
    *(undefined4 *)((int)ppsVar6 + -0x24) = 1;
    *(undefined4 *)((int)ppsVar6 + -0x24) = 0x25;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    iVar8 = *(int *)((int)ppsVar6 + -0x18);
    param_2 = *(byte **)((int)ppsVar6 + -0x14);
    unaff_retaddr = *(int *)((int)ppsVar6 + -0x10);
    *(undefined4 *)((int)ppsVar6 + 4) = 0x24;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    ppsVar6 = (short **)((int)ppsVar6 + 0xc);
  } while( true );
}


