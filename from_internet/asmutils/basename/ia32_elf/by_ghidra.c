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




void __regparm3
entry(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4,char *param_5)

{
  code *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char **ppcVar6;
  undefined *puVar7;
  undefined *puVar8;
  char **ppcVar9;
  char **ppcVar10;
  int iVar11;
  undefined8 uVar12;
  int unaff_retaddr;
  
  iVar11 = unaff_retaddr + -1;
  puVar7 = (undefined *)&param_4;
  if (iVar11 == 0) goto LAB_0804809c;
  puVar7 = (undefined *)&param_4;
  if (2 < iVar11) goto LAB_0804809c;
  puVar8 = &stack0x0000000c;
  iVar5 = 0;
  pcVar2 = param_5;
  pcVar3 = param_3;
  ppcVar6 = (char **)&stack0x0000000c;
  if (*param_5 != '\0') {
    do {
      pcVar2 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    while (pcVar4 = pcVar2, pcVar2 = pcVar4 + -1, (int)param_5 <= (int)pcVar2) {
      pcVar3 = pcVar4;
      if (*pcVar2 != '/') {
        do {
          pcVar3 = pcVar3 + -1;
          uVar12 = CONCAT44(pcVar4,pcVar3);
          if (*pcVar3 == '/') goto LAB_080480a1;
          ppcVar6 = (char **)&stack0x0000000c;
          if (pcVar3 == param_5) goto LAB_080480a2;
        } while( true );
      }
    }
    iVar5 = 0;
    pcVar3 = param_3;
    ppcVar6 = (char **)&stack0x0000000c;
  }
  do {
    while( true ) {
      do {
        pcVar3[iVar5] = '\n';
        *(undefined4 *)((int)ppcVar6 + -4) = 1;
        *(undefined4 *)((int)ppcVar6 + -4) = 4;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        puVar7 = (undefined *)((int)ppcVar6 + 4);
LAB_0804809c:
        *(undefined4 *)(puVar7 + -4) = 1;
        pcVar1 = (code *)swi(0x80);
        uVar12 = (*pcVar1)();
        puVar8 = puVar7 + 4;
LAB_080480a1:
        pcVar4 = (char *)((ulonglong)uVar12 >> 0x20);
        pcVar3 = (char *)((int)uVar12 + 1);
        ppcVar6 = (char **)puVar8;
LAB_080480a2:
        iVar5 = (int)pcVar4 - (int)pcVar3;
        iVar11 = iVar11 + -1;
      } while (iVar11 == 0);
      pcVar4 = *ppcVar6;
      *ppcVar6 = pcVar3;
      ppcVar9 = ppcVar6 + -1;
      ppcVar6[-1] = (char *)iVar5;
      pcVar3 = pcVar3 + iVar5;
      pcVar2 = pcVar4;
      if (*pcVar4 != '\0') break;
LAB_0804808b:
      iVar5 = (int)ppcVar6[-1];
      pcVar3 = *ppcVar6;
      ppcVar6 = ppcVar6 + 1;
    }
    do {
      pcVar2 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    if (iVar5 <= (int)pcVar2 - (int)pcVar4) goto LAB_0804808b;
    pcVar2 = pcVar4 + ((int)pcVar2 - (int)pcVar4);
    ppcVar10 = ppcVar6 + -2;
    ppcVar6[-2] = pcVar2;
    do {
      pcVar2 = pcVar2 + -1;
      pcVar3 = pcVar3 + -1;
      if (*pcVar3 != *pcVar2) goto LAB_0804808b;
    } while (pcVar2 != pcVar4);
    pcVar3 = *ppcVar6;
    ppcVar6 = ppcVar6 + 1;
    iVar5 = (int)*ppcVar9 - ((int)*ppcVar10 - (int)pcVar4);
  } while( true );
}


