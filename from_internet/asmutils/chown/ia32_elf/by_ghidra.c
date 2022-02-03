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




void FUN_0804804c(void)

{
  DAT_0804813d = 0xffffffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int entry(undefined4 param_1,char *param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int extraout_EDX;
  char **ppcVar5;
  char **ppcVar6;
  char *unaff_ESI;
  char *pcVar7;
  byte bVar8;
  int unaff_retaddr;
  
  pcVar7 = param_2;
  bVar8 = 0;
  DAT_08048139 = (char *)0xffffffff;
  ppcVar6 = &param_2;
  if (unaff_retaddr != 1) {
    param_2 = (char *)0x8048072;
    FUN_08048129();
    unaff_ESI = pcVar7 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar7;
    ppcVar6 = (char **)&stack0x0000000c;
    if ((('/' < cVar1) && (ppcVar6 = (char **)&stack0x0000000c, cVar1 < ':')) &&
       (unaff_ESI = unaff_ESI + -1, ppcVar6 = (char **)&stack0x0000000c,
       unaff_ESI[extraout_EDX + -1] != '.')) {
      iVar4 = 0;
      pcVar7 = unaff_ESI;
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
      unaff_ESI[iVar3] = '\0';
      param_2 = (char *)0x80480c6;
      DAT_08048139 = unaff_ESI;
      DAT_0804813d = (char *)FUN_08048115();
      param_2 = (char *)0x80480d6;
      DAT_08048139 = (char *)FUN_08048115();
      ppcVar5 = (char **)&stack0x0000000c;
      if (_DAT_0804853d != 1) {
        param_2 = (char *)0x80480e9;
        FUN_0804804c();
        ppcVar5 = (char **)&stack0x0000000c;
      }
      while( true ) {
        unaff_ESI = *ppcVar5;
        ppcVar6 = ppcVar5 + 1;
        if (unaff_ESI == (char *)0x0) break;
        pcVar2 = (code *)swi(0x80);
        DAT_08048141 = unaff_ESI;
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
    if (*unaff_ESI == '\0') break;
    iVar4 = iVar4 * 10 + (uint)(byte)(*unaff_ESI - 0x30);
    unaff_ESI = unaff_ESI + (uint)bVar8 * -2 + 1;
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


