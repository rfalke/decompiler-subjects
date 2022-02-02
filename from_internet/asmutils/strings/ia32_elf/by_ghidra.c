typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int entry(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  char *extraout_ECX;
  int iVar4;
  short **ppsVar5;
  short **ppsVar6;
  short **ppsVar7;
  char *unaff_ESI;
  char *pcVar8;
  byte bVar9;
  int unaff_retaddr;
  
  bVar9 = 0;
  ppsVar6 = (short **)&stack0x00000004;
  if (unaff_retaddr == 1) goto LAB_0804807f;
  ppsVar5 = (short **)&stack0x00000008;
  while( true ) {
    ppsVar7 = ppsVar5 + 1;
    if (*ppsVar5 == (short *)0x0) break;
    if (**ppsVar5 == 0x6e2d) {
      unaff_ESI = (char *)ppsVar5[1];
      ppsVar5[1] = (short *)0x8048067;
      _DAT_0804811b = FUN_08048106();
      ppsVar5 = ppsVar5 + 2;
    }
    else {
      *ppsVar5 = (short *)0x5;
      pcVar1 = (code *)swi(0x80);
      iVar3 = (*pcVar1)();
      ppsVar6 = ppsVar5 + 2;
      ppsVar7 = ppsVar5 + 2;
      if (iVar3 < 0) break;
LAB_0804807f:
      *(undefined4 *)((int)ppsVar6 + -4) = 3;
      pcVar1 = (code *)swi(0x80);
      iVar3 = (*pcVar1)();
      ppsVar7 = (short **)((int)ppsVar6 + 4);
      ppsVar5 = (short **)((int)ppsVar6 + 4);
      ppsVar6 = (short **)((int)ppsVar6 + 4);
      if (iVar3 < 0) break;
      if (iVar3 != 0) {
        iVar4 = 0;
        bVar2 = false;
        pcVar8 = extraout_ECX;
        do {
          while( true ) {
            unaff_ESI = pcVar8 + (uint)bVar9 * -2 + 1;
            if ((*pcVar8 < ' ') || (*pcVar8 == '\x7f')) break;
            if (!bVar2) {
              bVar2 = true;
              DAT_0804811f = unaff_ESI;
            }
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + -1;
            pcVar8 = unaff_ESI;
            if (iVar3 == 0) goto LAB_0804807f;
          }
          if (bVar2) {
            if (_DAT_0804811b <= iVar4) {
              *(int *)((int)ppsVar6 + -4) = iVar3;
              *(undefined4 *)((int)ppsVar6 + -8) = 1;
              *(undefined4 *)((int)ppsVar6 + -8) = 4;
              pcVar1 = (code *)swi(0x80);
              (*pcVar1)();
              *(undefined4 *)((int)ppsVar6 + -4) = 1;
              *(undefined4 *)((int)ppsVar6 + -4) = 1;
              *(undefined4 *)((int)ppsVar6 + -4) = 4;
              pcVar1 = (code *)swi(0x80);
              (*pcVar1)();
              iVar3 = *(int *)((int)ppsVar6 + 4);
              ppsVar6 = (short **)((int)ppsVar6 + 8);
            }
            bVar2 = false;
            iVar4 = 0;
          }
          iVar3 = iVar3 + -1;
          pcVar8 = unaff_ESI;
        } while (iVar3 != 0);
        goto LAB_0804807f;
      }
    }
  }
  *(undefined4 *)((int)ppsVar7 + -4) = 1;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  iVar3 = 0;
  while( true ) {
    if (*unaff_ESI == '\0') break;
    iVar3 = iVar3 * 10 + (uint)(byte)(*unaff_ESI - 0x30);
    unaff_ESI = unaff_ESI + (uint)bVar9 * -2 + 1;
  }
  return iVar3;
}



int FUN_08048106(void)

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


