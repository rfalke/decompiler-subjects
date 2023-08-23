typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
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




int FUN_0804804c(void)

{
  char cVar1;
  int iVar2;
  char *unaff_ESI;
  char *pcVar3;
  
  iVar2 = 0;
  do {
    cVar1 = *unaff_ESI;
    pcVar3 = unaff_ESI + 1;
    unaff_ESI = unaff_ESI + 1;
  } while (cVar1 < '\"');
  while( true ) {
    if ((cVar1 < '0') || (':' < cVar1)) {
      return iVar2;
    }
    iVar2 = iVar2 + (uint)(byte)(cVar1 - 0x30);
    cVar1 = *pcVar3;
    if (cVar1 < '0') {
      return iVar2;
    }
    if (':' < cVar1) break;
    iVar2 = iVar2 * 10;
    pcVar3 = pcVar3 + 1;
  }
  return iVar2;
}



void processEntry entry(undefined4 param_1,int param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  char **ppcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  byte bVar14;
  
  bVar14 = 0;
  puVar7 = (undefined *)&param_3;
  if (param_2 == 1) goto LAB_0804810b;
  puVar8 = &stack0x0000000c;
  puVar9 = &stack0x0000000c;
  if (*param_4 != '-') goto LAB_08048113;
  if (param_4[1] == 'n') {
    puVar9 = &stack0x00000010;
  }
  *(undefined4 *)(puVar9 + -4) = 0x8048099;
  FUN_0804804c();
  do {
    *(undefined4 *)(puVar9 + -4) = 0x61;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    puVar7 = puVar9 + 4;
    ppcVar6 = (char **)(puVar9 + 4);
    iVar4 = 0;
    while (piVar2 = (int *)(&param_4)[param_2 + iVar4], piVar2 != (int *)0x0) {
      iVar4 = iVar4 + 1;
      if ((*piVar2 == 0x48544150) &&
         (pcVar10 = (char *)((int)(piVar2 + (uint)bVar14 * -2 + 1) + (uint)bVar14 * -2 + 1),
         *(char *)(piVar2 + (uint)bVar14 * -2 + 1) == '=')) {
        iVar4 = -1;
        pcVar13 = pcVar10;
        goto code_r0x080480c7;
      }
    }
LAB_0804810b:
    *(undefined4 *)(puVar7 + -4) = 0x7f;
    *(undefined4 *)(puVar7 + -4) = 1;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    puVar8 = puVar7 + 4;
LAB_08048113:
    puVar9 = puVar8 + -4;
  } while( true );
  while( true ) {
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + (uint)bVar14 * -2 + 1;
    if (cVar1 == '\0') break;
code_r0x080480c7:
    if (iVar4 == 0) break;
  }
  iVar5 = -1;
  pcVar13 = *(char **)(puVar9 + 4);
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + (uint)bVar14 * -2 + 1;
  } while (cVar1 != '\0');
  do {
    pcVar13 = (char *)((int)ppcVar6 + iVar5 + iVar4);
    do {
      pcVar11 = pcVar10 + (uint)bVar14 * -2 + 1;
      cVar1 = *pcVar10;
      pcVar12 = pcVar13;
      if (cVar1 == ':') break;
      pcVar12 = pcVar13 + (uint)bVar14 * -2 + 1;
      *pcVar13 = cVar1;
      pcVar10 = pcVar11;
      pcVar13 = pcVar12;
    } while (cVar1 != '\0');
    ppcVar6[-1] = pcVar11;
    pcVar10 = *ppcVar6;
    *pcVar12 = '/';
    pcVar13 = pcVar12 + (uint)bVar14 * -2 + 1;
    do {
      cVar1 = *pcVar10;
      *pcVar13 = cVar1;
      pcVar10 = pcVar10 + (uint)bVar14 * -2 + 1;
      pcVar13 = pcVar13 + (uint)bVar14 * -2 + 1;
    } while (cVar1 != '\0');
    pcVar10 = ppcVar6[-1];
    ppcVar6[-1] = (char *)0xb;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    ppcVar6 = ppcVar6 + 1;
  } while( true );
}


