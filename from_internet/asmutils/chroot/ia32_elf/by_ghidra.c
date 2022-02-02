typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
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




// WARNING: Control flow encountered bad instruction data

void entry(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  byte in_CF;
  byte in_AF;
  int unaff_retaddr;
  
  puVar5 = &param_1;
  if (unaff_retaddr != 1) {
    param_2 = 0x3d;
    puVar5 = &param_4;
    pcVar2 = (code *)swi(0x80);
    iVar4 = (*pcVar2)();
    in_CF = 0;
    if (-1 < iVar4) {
      in_CF = 0;
      param_3 = 0xb;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar5 = (undefined4 *)&stack0x00000014;
    }
  }
  puVar5[-1] = 1;
  pcVar2 = (code *)swi(0x80);
  bVar3 = (*pcVar2)();
  in_AF = 9 < (bVar3 & 0xf) | in_AF;
  bVar3 = bVar3 + in_AF * -6;
  bVar1 = 0x9f < bVar3 | in_CF | in_AF * (bVar3 < 6);
  bVar3 = bVar3 + bVar1 * -0x60;
  in_AF = 9 < (bVar3 & 0xf) | in_AF;
  bVar3 = bVar3 + in_AF * -6;
  if ((bool)(0x9f < bVar3 | bVar1 | in_AF * (bVar3 < 6))) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


