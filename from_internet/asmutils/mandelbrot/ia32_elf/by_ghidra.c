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




void entry(void)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  byte bVar11;
  
  bVar11 = 0;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  puVar2 = (undefined *)(*pcVar1)();
  iVar4 = 0x1e0;
  do {
    iVar9 = 0x280;
    puVar10 = puVar2;
    do {
      iVar8 = 0x7f;
      iVar5 = 0;
      iVar7 = 0;
      do {
        iVar3 = iVar7 - iVar5;
        iVar6 = iVar5 + iVar7;
        iVar5 = ((int)((ulonglong)((longlong)iVar7 * (longlong)iVar5) >> 0x20) << 0x19 |
                (uint)((longlong)iVar7 * (longlong)iVar5) >> 7) - iVar4;
        if ('\0' < (char)((uint)iVar5 >> 8)) break;
        iVar8 = iVar8 + -1;
        iVar7 = (iVar3 * iVar6 >> 8) - iVar9;
      } while (iVar8 != 0);
      puVar2 = puVar10 + (uint)bVar11 * -2 + 1;
      *puVar10 = (char)iVar8;
      iVar9 = iVar9 + -1;
      puVar10 = puVar2;
    } while (iVar9 != 0);
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  } while( true );
}


