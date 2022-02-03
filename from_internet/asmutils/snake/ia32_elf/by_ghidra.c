typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
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




uint __regparm3 FUN_0804804c(byte *param_1,undefined4 param_2,undefined *param_3)

{
  code *pcVar1;
  int iVar2;
  byte *extraout_ECX;
  int unaff_EBP;
  uint unaff_retaddr;
  
  *param_3 = 0;
  DAT_0804b775 = DAT_0804b775 | 1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (0 < iVar2) {
    if (-1 < iVar2 + -1) {
      pcVar1 = (code *)swi(0x80);
      iVar2 = (*pcVar1)();
      unaff_retaddr = iVar2 - 1;
      param_1 = extraout_ECX;
      if (unaff_retaddr == 0) goto LAB_08048080;
    }
    *param_1 = 0x71;
  }
LAB_08048080:
  return unaff_retaddr & 0xffffff00 | (uint)*param_1;
}



void __regparm3 FUN_08048083(uint param_1)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int *unaff_EDI;
  
  uVar1 = (ushort)param_1 % 0x4e;
  uVar4 = (uint)(ushort)((ushort)param_1 / 0x4e & 0xff | uVar1 << 8);
  uVar3 = (param_1 & 0xffff0000 | uVar4) + 1;
  bVar2 = (byte)uVar3;
  *unaff_EDI = (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (CONCAT11(bVar2 / 10,bVar2) & 0xff00) << 8
               | (uint)(bVar2 % 10) << 0x18) + 0x30305b1b;
  uVar4 = (param_1 & 0xffff0000 | uVar4 & 0xffffff00 | (uint)uVar1) + 1;
  bVar2 = (byte)uVar4;
  unaff_EDI[1] = (((uVar4 & 0xff0000) >> 8 | (CONCAT11(bVar2 / 10,bVar2) & 0xff00) << 8 |
                  (uint)(bVar2 % 10) << 0x18) >> 8) + 0x4830303b;
  return;
}



void __regparm3 FUN_080480a5(int param_1,byte param_2)

{
  int unaff_EBP;
  undefined *unaff_EDI;
  
  *(byte *)(param_1 + 0x2c + unaff_EBP) = param_2;
  FUN_08048083();
  *unaff_EDI = (&DAT_080485e7)[param_2];
  return;
}



void FUN_080480ba(void)

{
  code *pcVar1;
  undefined4 *unaff_EDI;
  
  *unaff_EDI = 0x34325b1b;
  unaff_EDI[1] = 0xf48303b;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}


/*
Unable to decompile 'entry'
Cause: Exception while decompiling 080480da: process: timeout

*/

