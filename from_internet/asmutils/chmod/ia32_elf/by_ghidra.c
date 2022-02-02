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




undefined8 __regparm1 entry(int param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int *piVar5;
  int *piVar6;
  byte *unaff_ESI;
  byte *pbVar7;
  undefined4 unaff_EDI;
  uint unaff_retaddr;
  
  pbVar7 = param_3;
  piVar6 = &param_2;
  if (2 < unaff_retaddr) {
    param_3 = (byte *)0x8048059;
    param_1 = FUN_08048073();
    piVar6 = (int *)&stack0x0000000c;
    piVar5 = (int *)&stack0x0000000c;
    unaff_ESI = pbVar7;
    if (param_1 != -1) {
      for (; piVar6 = piVar5 + 1, *piVar5 != 0; piVar5 = piVar5 + 2) {
        *piVar5 = 0xf;
        pcVar2 = (code *)swi(0x80);
        param_1 = (*pcVar2)();
      }
    }
  }
  piVar6[-1] = 1;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  *piVar6 = unaff_EDI;
  piVar6[-1] = (int)unaff_ESI;
  piVar6[-2] = extraout_EDX;
  piVar6[-3] = extraout_ECX;
  piVar6[-4] = param_1;
  uVar4 = 0;
  piVar6[-5] = 8;
  for (pbVar7 = unaff_ESI; bVar1 = *pbVar7, bVar1 != 0; pbVar7 = pbVar7 + 1) {
    if ((bVar1 < 0x30) || (7 < (byte)(bVar1 - 0x30))) goto LAB_0804809d;
    uVar3 = (uVar4 & 0xffff) * (piVar6[-5] & 0xffffU);
    unaff_ESI = (byte *)((uint)unaff_ESI & 0xffff0000 | uVar3 >> 0x10);
    uVar4 = (uVar4 & 0xffff0000 | uVar3 & 0xffff) + (uint)(byte)(bVar1 - 0x30);
  }
  if (unaff_ESI == pbVar7) {
LAB_0804809d:
    uVar4 = 0xffffffff;
  }
  return CONCAT44(piVar6[-2],uVar4);
}



undefined8 __regparm3 FUN_08048073(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *unaff_ESI;
  byte *pbVar4;
  
  uVar3 = 0;
  pbVar4 = unaff_ESI;
  while( true ) {
    bVar1 = *pbVar4;
    if (bVar1 == 0) break;
    if ((bVar1 < 0x30) || (7 < (byte)(bVar1 - 0x30))) goto LAB_0804809d;
    uVar2 = (uVar3 & 0xffff) * 8;
    unaff_ESI = (byte *)((uint)unaff_ESI & 0xffff0000 | uVar2 >> 0x10);
    uVar3 = (uVar3 & 0xffff0000 | uVar2 & 0xffff) + (uint)(byte)(bVar1 - 0x30);
    pbVar4 = pbVar4 + 1;
  }
  if (unaff_ESI == pbVar4) {
LAB_0804809d:
    uVar3 = 0xffffffff;
  }
  return CONCAT44(param_2,uVar3);
}


