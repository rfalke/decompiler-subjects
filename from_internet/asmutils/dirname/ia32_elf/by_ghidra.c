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




// WARNING: Instruction at (ram,0x080480a8) overlaps instruction at (ram,0x080480a3)
// 

void entry(undefined4 param_1,int param_2,undefined4 param_3,undefined param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *puVar4;
  undefined *puVar5;
  char *pcVar6;
  bool bVar7;
  byte bVar8;
  undefined8 uVar9;
  int unaff_retaddr;
  
  iVar2 = param_2;
  bVar8 = 0;
  puVar5 = (undefined *)&param_1;
  if (unaff_retaddr == 2) {
                    // WARNING: Call to offcut address within same function
    param_2 = 0x8048058;
    func_0x080480a5();
    puVar4 = &param_3;
    param_2 = 0x804805d;
    FUN_080480b1();
    param_2 = iVar2;
    pcVar6 = (char *)(iVar2 + extraout_EDX + -1);
    bVar7 = pcVar6 == (char *)0x0;
    iVar3 = extraout_EDX;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar7 = *pcVar6 == '/';
      pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
    } while (!bVar7);
    if (bVar7) {
      param_2 = 0x8048076;
      FUN_080480b1();
      *(undefined *)(extraout_EDX_00 + iVar2) = 10;
      param_2 = 4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      param_3 = 1;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar4 = (undefined4 *)&stack0x00000014;
    }
    *(undefined4 *)((int)puVar4 + -4) = 1;
    *(undefined4 *)((int)puVar4 + -4) = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar5 = (undefined *)((int)puVar4 + 4);
  }
  *(undefined4 *)(puVar5 + -4) = 1;
  pcVar1 = (code *)swi(0x80);
  uVar9 = (*pcVar1)();
  pcVar6 = (char *)((ulonglong)uVar9 >> 0x20);
  bVar7 = (char)uVar9 == *(char *)uVar9;
  while (!bVar7) {
    pcVar6 = pcVar6 + 1;
    bVar7 = *pcVar6 == '\0';
  }
  return;
}



undefined8 __regparm3 FUN_080480b1(undefined4 param_1,int param_2)

{
  char *unaff_EDI;
  char *pcVar1;
  
  pcVar1 = unaff_EDI + param_2;
  do {
    pcVar1 = pcVar1 + -1;
    if (pcVar1 == unaff_EDI) break;
  } while (*pcVar1 == '/');
  return CONCAT44(pcVar1 + (1 - (int)unaff_EDI),param_1);
}


