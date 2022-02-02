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




void entry(void)

{
  code *pcVar1;
  int iVar2;
  int extraout_ECX;
  short *psVar3;
  short **ppsVar4;
  short **ppsVar5;
  short **ppsVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  int unaff_retaddr;
  
  DAT_0804811e = 0;
  DAT_0804811a = 10;
  psVar9 = (short *)0x0;
  iVar7 = 0;
  ppsVar6 = (short **)&stack0x00000008;
  ppsVar4 = (short **)&stack0x00000008;
  if (unaff_retaddr == 1) goto LAB_080480ba;
LAB_0804808d:
  do {
    while( true ) {
      ppsVar5 = ppsVar4 + 1;
      ppsVar6 = ppsVar4 + 1;
      psVar3 = *ppsVar4;
      if (*ppsVar4 != (short *)0x0) break;
      if (iVar7 != 0) {
        *ppsVar4 = (short *)0x1;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        ppsVar5 = ppsVar4 + 2;
        psVar3 = psVar9;
        break;
      }
LAB_080480ba:
      ppsVar6[-1] = (short *)0x3;
      pcVar1 = (code *)swi(0x80);
      iVar2 = (*pcVar1)();
      ppsVar4 = ppsVar6 + 1;
      if (iVar2 < 0) {
LAB_080480b7:
        psVar9 = (short *)((int)psVar9 + 1);
      }
      else if (iVar2 == 0) {
        *ppsVar6 = (short *)0x6;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        ppsVar4 = ppsVar6 + 2;
        iVar7 = iVar7 + 1;
      }
      else {
        if (DAT_0804811e < 1) {
          iVar8 = -1;
          do {
            iVar8 = iVar8 + 1;
            if (iVar2 < iVar8) break;
          } while ((*(char *)(extraout_ECX + iVar8) != '\n') ||
                  (DAT_0804811a = DAT_0804811a + -1, DAT_0804811a != 0));
        }
        *ppsVar6 = (short *)0x1;
        *ppsVar6 = (short *)0x4;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        ppsVar4 = ppsVar6 + 2;
      }
    }
    if (*psVar3 == 0x6e2d) {
      ppsVar4 = ppsVar5 + 1;
      *ppsVar5 = (short *)0x804807e;
      DAT_0804811a = FUN_08048106();
      goto LAB_0804808d;
    }
    if (*psVar3 != 0x632d) {
      ppsVar5[-1] = (short *)0x5;
      pcVar1 = (code *)swi(0x80);
      iVar7 = (*pcVar1)();
      ppsVar4 = ppsVar5 + 1;
      ppsVar6 = ppsVar5 + 1;
      if (-1 < iVar7) goto LAB_080480ba;
      goto LAB_080480b7;
    }
    ppsVar4 = ppsVar5 + 1;
    *ppsVar5 = (short *)0x8048071;
    DAT_0804811e = FUN_08048106();
  } while( true );
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


