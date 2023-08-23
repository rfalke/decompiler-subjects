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




void processEntry entry(undefined4 param_1,int param_2,char *param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  byte bVar10;
  undefined8 uVar11;
  undefined *puVar5;
  char *pcVar9;
  
  bVar10 = 0;
  puVar7 = (undefined4 *)&stack0x00000008;
  puVar5 = &stack0x00000008;
  do {
    pcVar9 = param_3;
    param_3 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  if (*(short *)(pcVar9 + -5) == 0x736c) goto LAB_08048099;
  puVar6 = (undefined4 *)&stack0x00000008;
  for (param_2 = param_2 + -1; param_2 != 0; param_2 = param_2 + -1) {
    pcVar2 = (code *)swi(0x80);
    iVar3 = (*pcVar2)();
    puVar6 = (undefined4 *)(puVar5 + 8);
    puVar4 = puVar5 + 8;
    puVar5 = puVar5 + 8;
    if (iVar3 < 0) break;
    puVar6 = (undefined4 *)puVar4;
  }
LAB_08048092:
  *(undefined4 *)((int)puVar6 + -4) = 1;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  puVar7 = (undefined4 *)((int)puVar6 + 4);
LAB_08048099:
  puVar7[-1] = 0x26;
  puVar7[-1] = 1;
  puVar7[-1] = 4;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  *puVar7 = 5;
  pcVar2 = (code *)swi(0x80);
  iVar3 = (*pcVar2)();
  if (iVar3 < 0) goto LAB_080480d5;
  puVar7[1] = 3;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  goto LAB_080480cb;
LAB_080480d5:
  puVar7[1] = 1;
  pcVar2 = (code *)swi(0x80);
  uVar11 = (*pcVar2)();
  pcVar9 = (char *)((ulonglong)uVar11 >> 0x20);
  puVar6 = puVar7 + 3;
  iVar3 = DAT_0804811c;
  if (-1 < (int)uVar11) {
    do {
      do {
        pcVar8 = pcVar9 + (uint)bVar10 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar8;
      } while (cVar1 != '\0');
      pcVar8[-1] = '\n';
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
LAB_080480cb:
    puVar7[2] = 1;
    puVar7[2] = 4;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    puVar6 = puVar7 + 4;
  }
  goto LAB_08048092;
}


