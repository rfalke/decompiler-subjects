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




// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x080480ca)

void processEntry entry(uint param_1,int param_2,char *param_3)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  int extraout_ECX;
  int iVar4;
  undefined3 uVar5;
  char **ppcVar6;
  char **ppcVar7;
  int *piVar8;
  char **ppcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  byte bVar14;
  
  bVar14 = 0;
  param_2 = param_2 + -1;
  ppcVar6 = (char **)&stack0x00000008;
  if (param_2 == 0) {
    uVar5 = (undefined3)(param_1 >> 8);
    param_1 = CONCAT31(uVar5,1);
    do {
      pcVar10 = param_3;
      param_3 = pcVar10 + 1;
    } while (*pcVar10 != '\0');
    ppcVar7 = (char **)&stack0x00000008;
    if (*(int *)(pcVar10 + -4) == 0x68637261) {
      param_1 = CONCAT31(uVar5,0x10);
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
        bVar13 = cVar3 == '\0';
        if (bVar13) break;
        *ppcVar6 = (char *)0x5;
        iVar4 = (int)*ppcVar6;
        pcVar11 = &DAT_0804804c;
        do {
          pcVar12 = pcVar11;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar12 = pcVar11 + 1;
          bVar13 = cVar3 == *pcVar11;
          pcVar11 = pcVar12;
        } while (!bVar13);
        if (bVar13) {
          param_1 = param_1 | 1 << ((uint)(pcVar12 + -0x804804d) & 0x1f);
          pcVar10 = pcVar10 + 1;
        }
        else {
          ppcVar9 = ppcVar6 + 1;
          if (cVar3 != 'a') goto LAB_080480fa;
          param_1 = CONCAT31((int3)(param_1 >> 8),0x3f);
          pcVar10 = pcVar10 + 1;
        }
      }
      ppcVar9 = ppcVar6 + 1;
      if ((char)param_1 == '\0') goto LAB_080480fa;
      param_2 = param_2 + -1;
      ppcVar6 = ppcVar6 + 1;
    } while (param_2 != 0);
  }
  *(undefined4 *)((int)ppcVar7 + -4) = 5;
  *(undefined4 *)((int)ppcVar7 + -4) = 0x7a;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  piVar8 = (int *)((int)ppcVar7 + 4);
  pcVar10 = "";
  iVar4 = extraout_ECX;
  do {
    uVar2 = param_1 & 1;
    param_1 = param_1 >> 1;
    if (uVar2 != 0) {
      piVar8[-1] = iVar4;
                    // WARNING: Read-only address (ram,0x0804810e) is written
      uRam0804810e = 0x20;
      pcVar11 = pcVar10;
      do {
        cVar3 = *pcVar11;
        pcVar11 = pcVar11 + (uint)bVar14 * -2 + 1;
      } while (cVar3 != '\0');
      piVar8[-2] = 1;
      piVar8[-2] = 4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      iVar4 = *piVar8;
      piVar8 = piVar8 + 1;
    }
    pcVar10 = pcVar10 + 0x41;
    iVar4 = iVar4 + -1;
    ppcVar9 = (char **)piVar8;
  } while (iVar4 != 0);
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


