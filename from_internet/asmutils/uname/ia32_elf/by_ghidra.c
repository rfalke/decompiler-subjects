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




// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x080480ca)

void __regparm2 entry(undefined4 param_1_00,uint param_2,char *param_1)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int extraout_ECX;
  int iVar5;
  char **ppcVar6;
  char **ppcVar7;
  int *piVar8;
  char **ppcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  bool bVar14;
  byte bVar15;
  int unaff_retaddr;
  
  bVar15 = 0;
  iVar5 = unaff_retaddr + -1;
  uVar13 = param_2;
  ppcVar6 = (char **)&stack0x00000008;
  if (iVar5 == 0) {
    uVar13 = CONCAT31((int3)(param_2 >> 8),1);
    do {
      pcVar10 = param_1;
      param_1 = pcVar10 + 1;
    } while (*pcVar10 != '\0');
    ppcVar7 = (char **)&stack0x00000008;
    if (*(int *)(pcVar10 + -4) == 0x68637261) {
      uVar13 = param_2 & 0xffffff00 | 0x10;
      ppcVar7 = (char **)&stack0x00000008;
    }
  }
  else {
    do {
      ppcVar7 = ppcVar6 + 1;
      ppcVar9 = ppcVar6 + 1;
      pcVar10 = *ppcVar6 + 1;
      if (**ppcVar6 != '-') goto LAB_080480fa;
      while( true ) {
        cVar3 = *pcVar10;
        bVar14 = cVar3 == '\0';
        if (bVar14) break;
        *ppcVar6 = (char *)0x5;
        iVar4 = (int)*ppcVar6;
        pcVar11 = &DAT_0804804c;
        do {
          pcVar12 = pcVar11;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar12 = pcVar11 + 1;
          bVar14 = cVar3 == *pcVar11;
          pcVar11 = pcVar12;
        } while (!bVar14);
        if (bVar14) {
          uVar13 = uVar13 | 1 << ((uint)(pcVar12 + -0x804804d) & 0x1f);
          pcVar10 = pcVar10 + 1;
        }
        else {
          ppcVar9 = ppcVar6 + 1;
          if (cVar3 != 'a') goto LAB_080480fa;
          uVar13 = CONCAT31((int3)(uVar13 >> 8),0x3f);
          pcVar10 = pcVar10 + 1;
        }
      }
      ppcVar9 = ppcVar6 + 1;
      if ((char)uVar13 == '\0') goto LAB_080480fa;
      iVar5 = iVar5 + -1;
      ppcVar6 = ppcVar6 + 1;
    } while (iVar5 != 0);
  }
  *(undefined4 *)((int)ppcVar7 + -4) = 5;
  *(undefined4 *)((int)ppcVar7 + -4) = 0x7a;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  piVar8 = (int *)((int)ppcVar7 + 4);
  pcVar10 = "";
  iVar5 = extraout_ECX;
  do {
    uVar2 = uVar13 & 1;
    uVar13 = uVar13 >> 1;
    if (uVar2 != 0) {
      piVar8[-1] = iVar5;
                    // WARNING: Read-only address (ram,0x0804810e) is written
      uRam0804810e = 0x20;
      pcVar11 = pcVar10;
      do {
        cVar3 = *pcVar11;
        pcVar11 = pcVar11 + (uint)bVar15 * -2 + 1;
      } while (cVar3 != '\0');
      piVar8[-2] = 1;
      piVar8[-2] = 4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      iVar5 = *piVar8;
      piVar8 = piVar8 + 1;
    }
    pcVar10 = pcVar10 + 0x41;
    iVar5 = iVar5 + -1;
    ppcVar9 = (char **)piVar8;
  } while (iVar5 != 0);
LAB_080480fa:
  ppcVar9[-1] = (char *)0x1;
  ppcVar9[-1] = (char *)0x4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  *ppcVar9 = (char *)0x1;
  pcVar1 = (code *)swi(0x80);
  pcVar10 = (char *)(*pcVar1)();
  cVar3 = (char)pcVar10;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


