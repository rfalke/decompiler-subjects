typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void processEntry
entry(undefined4 param_1,uint param_2,undefined4 param_3,byte *param_4,byte *param_5,
     undefined4 param_6)

{
  code *pcVar1;
  undefined4 *puVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  unkbyte10 *pVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  puVar9 = &param_3;
  if (2 < param_2) {
    DAT_08048410 = param_4;
    iVar7 = 0;
    while( true ) {
      bVar3 = *param_5 - 0x30;
      if ((*param_5 < 0x30) || (9 < bVar3)) break;
      iVar7 = iVar7 * 10 + (uint)bVar3;
      param_5 = param_5 + 1;
    }
    _DAT_08048414 =
         CONCAT31((int3)(((uint)CONCAT11((char)iVar7,(char)((uint)iVar7 >> 8)) << 0x10) >> 8),2);
    param_5 = (byte *)0x6;
    param_4 = (byte *)0x1;
    param_3 = 2;
    pcVar1 = (code *)swi(0x80);
    uVar4 = (*pcVar1)();
    puVar9 = (undefined4 *)&stack0x00000014;
    if (-1 < (int)uVar4) {
      param_6 = 4;
      param_5 = &DAT_08048056;
      param_4 = (byte *)0x2;
      param_3 = 1;
      pcVar1 = (code *)swi(0x80);
      iVar7 = (*pcVar1)();
      puVar9 = (undefined4 *)&stack0x00000018;
      puVar11 = (undefined4 *)&stack0x00000018;
      param_2 = uVar4;
      if (iVar7 == 0) goto LAB_080480c6;
    }
  }
LAB_080480be:
  do {
    *(undefined4 *)((int)puVar9 + -4) = 1;
    puVar10 = puVar9;
LAB_080480c1:
    *(undefined4 *)((int)puVar10 + -4) = 1;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar11 = (undefined4 *)((int)puVar10 + 4);
LAB_080480c6:
    puVar11[-1] = 0x10;
    puVar11[-2] = &DAT_08048414;
    puVar11[-3] = param_2;
    puVar11[-4] = 2;
    puVar11[-4] = 0x66;
    pcVar1 = (code *)swi(0x80);
    iVar7 = (*pcVar1)();
    puVar9 = puVar11 + 1;
  } while (iVar7 != 0);
  *puVar11 = 5;
  puVar11[-1] = param_2;
  puVar11[-2] = 4;
  puVar11[-2] = 0x66;
  pcVar1 = (code *)swi(0x80);
  iVar7 = (*pcVar1)();
  puVar9 = puVar11 + 2;
  if (iVar7 != 0) goto LAB_080480be;
  puVar11[1] = 2;
  pcVar1 = (code *)swi(0x80);
  iVar7 = (*pcVar1)();
  puVar2 = puVar11 + 3;
  puVar10 = puVar11 + 3;
  if (iVar7 == 0) {
    while( true ) {
      do {
        puVar12 = puVar2;
        DAT_08048311 = 0x10;
        puVar12[-1] = &DAT_08048311;
        puVar12[-2] = &DAT_08048212;
        puVar12[-3] = param_2;
        puVar12[-4] = 5;
        puVar12[-4] = 0x66;
        pcVar1 = (code *)swi(0x80);
        iVar7 = (*pcVar1)();
        puVar2 = puVar12 + 1;
      } while (iVar7 < 0);
      *puVar12 = 1;
      *puVar12 = 0x72;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar12[1] = 0x72;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar12[2] = 2;
      pcVar1 = (code *)swi(0x80);
      iVar7 = (*pcVar1)();
      if (iVar7 == 0) break;
      puVar12[3] = 6;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar2 = puVar12 + 5;
    }
    puVar12[3] = 3;
    pcVar1 = (code *)swi(0x80);
    uVar4 = (*pcVar1)();
    pbVar6 = DAT_08048410;
    puVar10 = puVar12 + 5;
    if (6 < uVar4) {
      puVar12[4] = uVar4;
      pVar8 = (unkbyte10 *)((int)&DAT_08048423 + 1);
      pbVar5 = DAT_08048410;
      do {
        *(byte *)pVar8 = *pbVar5;
        pVar8 = (unkbyte10 *)((int)pVar8 + 1);
        pbVar5 = pbVar5 + 1;
      } while (*pbVar5 != 0);
      puVar10 = puVar12 + 5;
      if (pbVar5 + (puVar12[4] - (int)pbVar6) < (byte *)0x1000) {
        pbVar6 = &DAT_08049438;
        for (; puVar10 = puVar12 + 5, *(short *)((int)pVar8 + -2) != 0x2e2e;
            pVar8 = (unkbyte10 *)((int)pVar8 + 1)) {
          bVar3 = *pbVar6;
          if ((bVar3 == 0x20) || (*(byte *)pVar8 = bVar3, bVar3 == 0)) {
LAB_080481c8:
            *(byte *)pVar8 = 0;
            if (*(byte *)((int)pVar8 + -1) == 0x2f) {
              *pVar8 = _DAT_0804804c;
            }
            puVar12[4] = 5;
            pcVar1 = (code *)swi(0x80);
            iVar7 = (*pcVar1)();
            puVar10 = puVar12 + 6;
            if (-1 < iVar7) {
              puVar12[5] = 0;
              pcVar1 = (code *)swi(0x80);
              (*pcVar1)();
              puVar12[5] = 6;
              pcVar1 = (code *)swi(0x80);
              (*pcVar1)();
              puVar10 = puVar12 + 7;
            }
            break;
          }
          puVar10 = puVar12 + 5;
          if (bVar3 < 0x20) break;
          if ((((bVar3 == 0x20) || (bVar3 == 0x3f)) || (bVar3 == 0xd)) || (bVar3 == 10))
          goto LAB_080481c8;
          pbVar6 = pbVar6 + 1;
        }
      }
    }
  }
  goto LAB_080480c1;
}


