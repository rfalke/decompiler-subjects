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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(undefined4 param_1,byte *param_2)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  int unaff_retaddr;
  
  puVar5 = &param_1;
  _DAT_080480cb = 10;
  if (unaff_retaddr != 1) {
    uVar4 = 0;
    pbVar8 = param_2;
    while( true ) {
      bVar2 = *pbVar8 - 0x30;
      if ((*pbVar8 < 0x30) || (9 < bVar2)) break;
      uVar4 = uVar4 * 10 + (uint)bVar2;
      pbVar8 = pbVar8 + 1;
    }
    puVar5 = (undefined4 *)&stack0x0000000c;
    if (uVar4 != 0) {
      param_2 = (byte *)0x3c;
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


