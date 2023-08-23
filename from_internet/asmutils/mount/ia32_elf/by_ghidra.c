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




void processEntry
entry(undefined4 param_1,int param_2,char **param_3,short *param_4,char *param_5,short *param_6)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  char *in_EAX;
  int iVar4;
  undefined3 uVar6;
  char *pcVar5;
  char **ppcVar7;
  short *psVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  char *pcVar13;
  char **ppcVar14;
  char *pcVar15;
  char *pcVar16;
  bool bVar17;
  
  puVar10 = &param_3;
  if (param_2 + -1 == 0) goto LAB_0804806b;
  puVar10 = &param_5;
  puVar12 = &param_5;
  ppcVar7 = param_3;
  do {
    ppcVar14 = ppcVar7;
    in_EAX = (char *)CONCAT31((int3)((uint)in_EAX >> 8),*(char *)ppcVar14);
    ppcVar7 = (char **)((int)ppcVar14 + 1);
  } while (*(char *)ppcVar14 != '\0');
  if (*(char *)((int)ppcVar14 + -6) == 'u') {
    param_4 = (short *)0x16;
    puVar9 = &param_6;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
  }
  else {
    if ((byte)(param_2 + -1) < 2) goto LAB_0804806b;
    psVar8 = param_4;
    pcVar13 = param_5;
    if (*param_4 == 0x6f2d) {
LAB_080480b6:
      do {
        pcVar1 = param_5 + 1;
        cVar2 = *param_5;
        uVar6 = (undefined3)((uint)in_EAX >> 8);
        param_5 = pcVar1;
        if (cVar2 != ',') {
          in_EAX = (char *)CONCAT31(uVar6,cVar2);
          if (cVar2 != '\0') goto LAB_080480b6;
          DAT_080481d5 = DAT_080481d5 + '\x01';
        }
        pcVar5 = (char *)CONCAT31(uVar6,cVar2);
        psVar8 = (short *)0x7;
        ppcVar14 = &PTR_DAT_08048156;
        ppcVar7 = (char **)(pcVar1 + (-1 - (int)pcVar13));
        do {
          param_3 = ppcVar14;
          param_4 = psVar8;
          bVar17 = ppcVar7 == (char **)0x0;
          ppcVar7 = (char **)(pcVar1 + (-1 - (int)pcVar13));
          pcVar15 = pcVar13;
          pcVar16 = *param_3;
          do {
            if (ppcVar7 == (char **)0x0) break;
            ppcVar7 = (char **)((int)ppcVar7 + -1);
            bVar17 = *pcVar15 == *pcVar16;
            pcVar15 = pcVar15 + 1;
            pcVar16 = pcVar16 + 1;
          } while (bVar17);
          if (bVar17) {
            DAT_080481d1 = DAT_080481d1 | (uint)param_3[1];
            in_EAX = param_3[1];
            break;
          }
          ppcVar7 = param_3 + 2;
          in_EAX = pcVar5;
          psVar8 = (short *)((int)param_4 + -1);
          ppcVar14 = ppcVar7;
        } while ((short *)((int)param_4 + -1) != (short *)0x0);
        pcVar13 = pcVar1;
      } while (DAT_080481d5 != '\x01');
      puVar12 = (undefined4 *)&stack0x00000014;
      psVar8 = param_6;
      param_5 = pcVar5;
    }
    if (*psVar8 == 0x742d) {
      puVar12 = (undefined4 *)((int)puVar12 + 8);
    }
    puVar9 = puVar12 + 1;
    *puVar12 = 0x8048110;
    FUN_08048140();
    DAT_080481d1 = DAT_080481d1 | 1;
    *puVar12 = 0x804811c;
    FUN_08048140();
    DAT_080481d1 = DAT_080481d1 & 0xfffffffe;
    DAT_080481d1 = DAT_080481d1 | 4;
    *puVar12 = 0x804812f;
    FUN_08048140();
    DAT_080481d1 = DAT_080481d1 | 1;
    *puVar12 = 0x804813b;
    FUN_08048140();
  }
LAB_08048064:
  puVar9[-1] = 1;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  puVar10 = puVar9 + 1;
LAB_0804806b:
  puVar10[-1] = 5;
  pcVar3 = (code *)swi(0x80);
  iVar4 = (*pcVar3)();
  puVar11 = puVar10 + 1;
  if (iVar4 < 0) goto code_r0x0804807b;
  goto LAB_08048089;
code_r0x0804807b:
  *puVar10 = 5;
  pcVar3 = (code *)swi(0x80);
  iVar4 = (*pcVar3)();
  puVar11 = puVar10 + 2;
  puVar9 = puVar10 + 2;
  if (-1 < iVar4) {
LAB_08048089:
    puVar11[-1] = 3;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    *puVar11 = 1;
    *puVar11 = 4;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    puVar9 = puVar11 + 2;
  }
  goto LAB_08048064;
}



void FUN_08048140(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  puVar3 = (undefined4 *)&stack0x00000004;
  if (iVar2 < 0) {
    return;
  }
LAB_08048064:
  puVar3[-1] = 1;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  *puVar3 = 5;
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  puVar4 = puVar3 + 2;
  if (iVar2 < 0) goto code_r0x0804807b;
  goto LAB_08048089;
code_r0x0804807b:
  puVar3[1] = 5;
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  puVar4 = puVar3 + 3;
  puVar3 = puVar3 + 3;
  if (-1 < iVar2) {
LAB_08048089:
    puVar4[-1] = 3;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    *puVar4 = 1;
    *puVar4 = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar3 = puVar4 + 2;
  }
  goto LAB_08048064;
}


