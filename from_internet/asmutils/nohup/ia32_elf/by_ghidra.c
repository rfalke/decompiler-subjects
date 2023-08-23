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




void FUN_08048054(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (-1 < iVar2) {
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
  }
  return;
}



void processEntry
entry(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
     undefined4 param_6)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char **ppcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  byte bVar14;
  
  bVar14 = 0;
  puVar7 = &param_4;
  if (param_2 != 1) {
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    param_4 = 5;
    pcVar3 = (code *)swi(0x80);
    iVar5 = (*pcVar3)();
    puVar8 = &param_6;
    if (iVar5 < 0) {
      iVar5 = 0;
      do {
        do {
          iVar6 = param_2 + iVar5;
          iVar5 = iVar5 + 1;
        } while (*(int *)(&param_4)[iVar6] != 0x454d4f48);
      } while (*(char *)((int *)(&param_4)[iVar6] + (uint)bVar14 * -2 + 1) != '=');
      param_5 = 0xc;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      param_6 = 5;
      pcVar3 = (code *)swi(0x80);
      iVar5 = (*pcVar3)();
      puVar8 = (undefined4 *)&stack0x00000018;
      puVar7 = (undefined4 *)&stack0x00000018;
      if (iVar5 < 0) goto LAB_0804804c;
    }
    *(undefined4 *)((int)puVar8 + -4) = 0x80480f2;
    DAT_0804819b = iVar5;
    FUN_08048054();
    *(undefined4 *)((int)puVar8 + -4) = 0x80480fc;
    FUN_08048054();
    *(undefined4 *)((int)puVar8 + -4) = 6;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    puVar7 = (undefined4 *)((int)puVar8 + 4);
    ppcVar9 = (char **)((int)puVar8 + 4);
    iVar5 = 0;
    do {
      piVar2 = (int *)(&param_4)[param_2 + iVar5];
      if (piVar2 == (int *)0x0) goto LAB_0804804c;
      iVar5 = iVar5 + 1;
    } while ((*piVar2 != 0x48544150) ||
            (pcVar10 = (char *)((int)(piVar2 + (uint)bVar14 * -2 + 1) + (uint)bVar14 * -2 + 1),
            *(char *)(piVar2 + (uint)bVar14 * -2 + 1) != '='));
    iVar5 = -1;
    pcVar13 = pcVar10;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + (uint)bVar14 * -2 + 1;
    } while (cVar1 != '\0');
    iVar6 = -1;
    pcVar13 = *(char **)((int)puVar8 + 4);
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + (uint)bVar14 * -2 + 1;
    } while (cVar1 != '\0');
    do {
      pcVar13 = (char *)((int)ppcVar9 + iVar6 + iVar5);
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
      ppcVar9[-1] = pcVar11;
      pcVar10 = *ppcVar9;
      *pcVar12 = '/';
      pcVar13 = pcVar12 + (uint)bVar14 * -2 + 1;
      do {
        cVar1 = *pcVar10;
        *pcVar13 = cVar1;
        pcVar10 = pcVar10 + (uint)bVar14 * -2 + 1;
        pcVar13 = pcVar13 + (uint)bVar14 * -2 + 1;
      } while (cVar1 != '\0');
      pcVar10 = ppcVar9[-1];
      ppcVar9[-1] = (char *)0xb;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      ppcVar9 = ppcVar9 + 1;
    } while( true );
  }
LAB_0804804c:
  puVar7[-1] = 1;
  puVar7[-1] = 1;
  pcVar3 = (code *)swi(0x80);
  uVar4 = (*pcVar3)();
  *puVar7 = uVar4;
  puVar7[-1] = 0x36;
  pcVar3 = (code *)swi(0x80);
  iVar5 = (*pcVar3)();
  if (-1 < iVar5) {
    puVar7[1] = 6;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    puVar7[2] = 0x29;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
  }
  return;
}


