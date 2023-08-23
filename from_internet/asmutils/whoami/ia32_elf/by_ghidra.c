typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
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




int processEntry
entry(undefined4 param_1,undefined4 param_2,undefined *param_3,undefined4 param_4,char *param_5,
     int param_6,undefined4 param_7,int param_8)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  byte *in_ESI;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte bVar11;
  
  pcVar2 = (code *)swi(0x80);
  uVar3 = (*pcVar2)();
  pcVar2 = (code *)swi(0x80);
  iVar4 = (*pcVar2)(uVar3);
  if (-1 < iVar4) {
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    *param_3 = 10;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    bVar11 = 0;
code_r0x080480d3:
    pcVar8 = param_5;
    if (param_8 != 0) goto code_r0x080480d3;
    goto code_r0x080480d5;
  }
  goto LAB_08048117;
code_r0x080480d3:
  param_8 = param_8 + -1;
  cVar1 = *param_5;
  pcVar8 = param_5 + (uint)bVar11 * -2 + 1;
  param_5 = param_5 + (uint)bVar11 * -2 + 1;
  if (cVar1 == ':') {
code_r0x080480d5:
    do {
      pcVar6 = pcVar8;
      if (param_8 == 0) break;
      param_8 = param_8 + -1;
      pcVar6 = pcVar8 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar6;
    } while (cVar1 != ':');
    do {
      pcVar7 = pcVar6;
      if (param_8 == 0) break;
      param_8 = param_8 + -1;
      pcVar7 = pcVar6 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != ':');
    pcVar7 = pcVar7 + -1;
    *pcVar7 = '\0';
    iVar5 = FUN_08048120();
    iVar4 = extraout_ECX;
    param_8 = extraout_ECX;
    if (iVar5 != param_6) {
      do {
        param_5 = pcVar7;
        if (param_8 == 0) break;
        param_8 = param_8 + -1;
        param_5 = pcVar7 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar7;
        pcVar7 = param_5;
      } while (cVar1 != '\n');
      goto code_r0x080480d3;
    }
    goto code_r0x080480f5;
  }
  goto code_r0x080480d3;
  while( true ) {
    iVar4 = iVar4 + -1;
    pcVar6 = pcVar8 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar6;
    if (cVar1 == '\n') break;
code_r0x080480f5:
    pcVar6 = pcVar8;
    if (iVar4 == 0) break;
  }
  in_ESI = (byte *)(pcVar6 + 2);
  pbVar9 = in_ESI;
  do {
    pbVar10 = pbVar9;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pbVar10 = pbVar9 + 1;
    bVar11 = *pbVar9;
    pbVar9 = pbVar10;
  } while (bVar11 != 0x3a);
  *(undefined2 *)(pbVar10 + -1) = 10;
  FUN_0804813c();
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
LAB_08048117:
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  iVar4 = 0;
  for (; *in_ESI != 0; in_ESI = in_ESI + 1) {
    iVar4 = iVar4 * 10 + (*in_ESI & 0xffffffcf);
  }
  return iVar4;
}



undefined8 __regparm3 FUN_08048120(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  byte *unaff_ESI;
  
  iVar1 = 0;
  while( true ) {
    if (*unaff_ESI == 0) break;
    iVar1 = iVar1 * 10 + (*unaff_ESI & 0xffffffcf);
    unaff_ESI = unaff_ESI + 1;
  }
  return CONCAT44(param_2,iVar1);
}



undefined8 __regparm3 FUN_0804813c(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *unaff_ESI;
  
  iVar2 = 200;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *unaff_ESI;
    unaff_ESI = unaff_ESI + 1;
  } while (cVar1 != '\0');
  return CONCAT44(param_2,199 - iVar2);
}


