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




void FUN_0804804c(void)

{
  DAT_0804813d = 0xffffffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int processEntry entry(undefined4 param_1,int param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int extraout_EDX;
  char **ppcVar5;
  char **ppcVar6;
  char *in_ESI;
  char *pcVar7;
  byte bVar8;
  
  pcVar7 = param_4;
  bVar8 = 0;
  DAT_08048139 = (char *)0xffffffff;
  ppcVar6 = &param_4;
  if (param_2 != 1) {
    param_4 = (char *)0x8048072;
    FUN_08048129();
    in_ESI = pcVar7 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar7;
    ppcVar6 = (char **)&stack0x0000000c;
    if ((('/' < cVar1) && (ppcVar6 = (char **)&stack0x0000000c, cVar1 < ':')) &&
       (in_ESI = in_ESI + -1, ppcVar6 = (char **)&stack0x0000000c, in_ESI[extraout_EDX + -1] != '.')
       ) {
      iVar4 = 0;
      pcVar7 = in_ESI;
      do {
        iVar3 = iVar4;
        DAT_0804813d = pcVar7 + (uint)bVar8 * -2 + 1;
        cVar1 = *pcVar7;
        iVar4 = iVar3 + 1;
        if (extraout_EDX < iVar4) goto LAB_080480a9;
        pcVar7 = DAT_0804813d;
      } while (cVar1 != '.');
      _DAT_0804853d = 1;
LAB_080480a9:
      in_ESI[iVar3] = '\0';
      param_4 = (char *)0x80480c6;
      DAT_08048139 = in_ESI;
      DAT_0804813d = (char *)FUN_08048115();
      param_4 = (char *)0x80480d6;
      DAT_08048139 = (char *)FUN_08048115();
      ppcVar5 = (char **)&stack0x0000000c;
      if (_DAT_0804853d != 1) {
        param_4 = (char *)0x80480e9;
        FUN_0804804c();
        ppcVar5 = (char **)&stack0x0000000c;
      }
      while( true ) {
        in_ESI = *ppcVar5;
        ppcVar6 = ppcVar5 + 1;
        if (in_ESI == (char *)0x0) break;
        pcVar2 = (code *)swi(0x80);
        DAT_08048141 = in_ESI;
        (*pcVar2)();
        ppcVar5 = ppcVar5 + 2;
      }
    }
  }
  *(undefined4 *)((int)ppcVar6 + -4) = 1;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  iVar4 = 0;
  while( true ) {
    if (*in_ESI == '\0') break;
    iVar4 = iVar4 * 10 + (uint)(byte)(*in_ESI - 0x30);
    in_ESI = in_ESI + (uint)bVar8 * -2 + 1;
  }
  return iVar4;
}



int FUN_08048115(void)

{
  int iVar1;
  char *unaff_ESI;
  
  iVar1 = 0;
  while( true ) {
    if (*unaff_ESI == '\0') break;
    iVar1 = iVar1 * 10 + (uint)(byte)(*unaff_ESI - 0x30);
    unaff_ESI = unaff_ESI + 1;
  }
  return iVar1;
}



undefined8 __regparm3 FUN_08048129(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char *unaff_ESI;
  
  iVar2 = -1;
  do {
    iVar2 = iVar2 + 1;
    cVar1 = *unaff_ESI;
    unaff_ESI = unaff_ESI + 1;
  } while (cVar1 != '\0');
  return CONCAT44(iVar2,param_1);
}


