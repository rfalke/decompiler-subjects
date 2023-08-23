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




uint processEntry entry(undefined4 param_1,uint param_2,undefined4 param_3,byte *param_4)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  int in_EAX;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int *piVar5;
  int *piVar6;
  byte *in_ESI;
  byte *pbVar7;
  undefined4 in_EDI;
  
  pbVar7 = param_4;
  piVar6 = &param_3;
  if (2 < param_2) {
    param_4 = (byte *)0x8048059;
    in_EAX = FUN_08048073();
    piVar6 = (int *)&stack0x0000000c;
    piVar5 = (int *)&stack0x0000000c;
    in_ESI = pbVar7;
    if (in_EAX != -1) {
      for (; piVar6 = piVar5 + 1, *piVar5 != 0; piVar5 = piVar5 + 2) {
        *piVar5 = 0xf;
        pcVar2 = (code *)swi(0x80);
        in_EAX = (*pcVar2)();
      }
    }
  }
  piVar6[-1] = 1;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  *piVar6 = in_EDI;
  piVar6[-1] = (int)in_ESI;
  piVar6[-2] = extraout_EDX;
  piVar6[-3] = extraout_ECX;
  piVar6[-4] = in_EAX;
  uVar4 = 0;
  piVar6[-5] = 8;
  for (pbVar7 = in_ESI; bVar1 = *pbVar7, bVar1 != 0; pbVar7 = pbVar7 + 1) {
    if ((bVar1 < 0x30) || (7 < (byte)(bVar1 - 0x30))) goto LAB_0804809d;
    iVar3 = (uVar4 & 0xffff) * (piVar6[-5] & 0xffffU);
    in_ESI = (byte *)CONCAT22((short)((uint)in_ESI >> 0x10),(short)((uint)iVar3 >> 0x10));
    uVar4 = CONCAT22((short)(uVar4 >> 0x10),(short)iVar3) + (uint)(byte)(bVar1 - 0x30);
  }
  if (in_ESI == pbVar7) {
LAB_0804809d:
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



undefined8 __regparm3 FUN_08048073(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *unaff_ESI;
  byte *pbVar4;
  
  uVar3 = 0;
  pbVar4 = unaff_ESI;
  while( true ) {
    bVar1 = *pbVar4;
    if (bVar1 == 0) break;
    if ((bVar1 < 0x30) || (7 < (byte)(bVar1 - 0x30))) goto LAB_0804809d;
    iVar2 = (uVar3 & 0xffff) * 8;
    unaff_ESI = (byte *)CONCAT22((short)((uint)unaff_ESI >> 0x10),(short)((uint)iVar2 >> 0x10));
    uVar3 = CONCAT22((short)(uVar3 >> 0x10),(short)iVar2) + (uint)(byte)(bVar1 - 0x30);
    pbVar4 = pbVar4 + 1;
  }
  if (unaff_ESI == pbVar4) {
LAB_0804809d:
    uVar3 = 0xffffffff;
  }
  return CONCAT44(param_2,uVar3);
}


