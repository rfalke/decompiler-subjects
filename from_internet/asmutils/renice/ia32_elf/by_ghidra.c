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




void entry(undefined4 param_1,int param_2,int param_3)

{
  code *pcVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int unaff_retaddr;
  
  puVar4 = &param_2;
  if (unaff_retaddr == 1) goto LAB_080480a9;
  puVar5 = &param_3;
  if (param_2 == 0) goto LAB_080480b9;
  param_2 = 0x8048076;
  DAT_080480e6 = FUN_080480be();
  puVar5 = (undefined4 *)&stack0x00000010;
  puVar2 = &stack0x00000010;
  if (param_3 == 0) goto LAB_080480b9;
  do {
    *(undefined4 *)(puVar2 + -4) = 0x8048085;
    DAT_080480e2 = FUN_080480be();
    *(undefined4 *)(puVar2 + -4) = 0x61;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    piVar3 = (int *)(puVar2 + 4);
    puVar5 = (undefined4 *)(puVar2 + 8);
    puVar2 = puVar2 + 8;
  } while (*piVar3 != 0);
  do {
    *(undefined4 *)((int)puVar5 + -4) = 1;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar4 = (undefined4 *)((int)puVar5 + 4);
LAB_080480a9:
    *(undefined4 *)((int)puVar4 + -4) = 0x1b;
    *(undefined4 *)((int)puVar4 + -4) = 1;
    *(undefined4 *)((int)puVar4 + -4) = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar5 = (undefined4 *)((int)puVar4 + 4);
LAB_080480b9:
    *(undefined4 *)((int)puVar5 + -4) = 1;
  } while( true );
}



int FUN_080480be(void)

{
  int iVar1;
  char *unaff_ESI;
  char *pcVar2;
  
  iVar1 = 0;
  pcVar2 = unaff_ESI;
  if (*unaff_ESI == '-') {
    pcVar2 = unaff_ESI + 1;
  }
  while( true ) {
    if (*pcVar2 == '\0') break;
    iVar1 = iVar1 * 10 + (uint)(byte)(*pcVar2 - 0x30);
    pcVar2 = pcVar2 + 1;
  }
  if (*unaff_ESI != '-') {
    return iVar1;
  }
  return -iVar1;
}


