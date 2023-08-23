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




// WARNING: Control flow encountered bad instruction data

void processEntry entry(undefined4 param_1,int param_2,char *param_3,int *param_4,int *param_5)

{
  ushort *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  byte bVar5;
  uint uVar6;
  byte bVar10;
  int iVar8;
  undefined4 uVar9;
  int extraout_ECX;
  undefined2 uVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int *piVar15;
  int *piVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  char *pcVar19;
  undefined4 *puVar20;
  byte in_AF;
  bool bVar21;
  byte bVar22;
  undefined8 uVar23;
  int aiStack_8 [2];
  byte *pbVar7;
  
  bVar22 = 0;
  piVar12 = (int *)0x804810d;
  iVar8 = -1;
  do {
    pcVar19 = param_3;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar19 = param_3 + 1;
    cVar2 = *param_3;
    param_3 = pcVar19;
  } while (cVar2 != '\0');
  puVar20 = (undefined4 *)0x804812f;
  uRam0804812f = *(int *)(pcVar19 + -4) != 0x646363;
                    // WARNING: Read-only address (ram,0x0804812f) is written
  puVar17 = (undefined4 *)0x804810d;
  iVar8 = param_2 + -1;
  uVar9 = 0x8048111;
  puVar14 = &param_4;
  if (iVar8 != 0) {
    puVar13 = &param_5;
    piVar12 = param_4;
    uVar9 = 0x8048111;
    if (*param_4 == 0x6463632d) {
                    // WARNING: Read-only address (ram,0x0804812f) is written
      uRam0804812f = false;
      iVar8 = param_2 + -2;
      piVar12 = (int *)0x804810d;
      puVar14 = &param_5;
      if (iVar8 == 0) goto LAB_0804809d;
      puVar13 = (undefined4 *)&stack0x00000010;
      piVar12 = param_5;
    }
    puVar14 = puVar13;
    if (iVar8 != 1) {
      uVar9 = *puVar13;
      puVar14 = puVar13 + 1;
      if (iVar8 != 2) {
        puVar14 = puVar13 + 2;
        if (iVar8 != 3) {
          puVar20 = (undefined4 *)puVar13[2];
          puVar14 = puVar13 + 3;
        }
      }
    }
  }
LAB_0804809d:
  *(undefined4 *)((int)puVar14 + -4) = uVar9;
  piVar15 = (int *)((int)puVar14 + -8);
  *(int **)((int)puVar14 + -8) = piVar12;
  if (*(char *)puVar20 == '\0') {
    *(undefined4 *)((int)puVar14 + -0xc) = 0x16;
    pcVar4 = (code *)swi(0x80);
    (*pcVar4)();
    piVar15 = (int *)((int)puVar14 + -4);
  }
  piVar15[-1] = 5;
  pcVar4 = (code *)swi(0x80);
  iVar8 = (*pcVar4)();
  *piVar15 = iVar8;
  if (-1 < iVar8) {
    piVar15[-1] = 0x36;
    pcVar4 = (code *)swi(0x80);
    uVar23 = (*pcVar4)();
    uVar6 = (uint)uVar23;
    piVar16 = piVar15 + 1;
    if (*(char *)puVar20 != '\0') goto LAB_08048100;
    *piVar15 = iVar8;
    piVar15[-1] = (int)((ulonglong)uVar23 >> 0x20);
    piVar15[-2] = 1;
    piVar15[-2] = 4;
    pcVar4 = (code *)swi(0x80);
    (*pcVar4)();
    piVar15[-1] = 3;
    pcVar4 = (code *)swi(0x80);
    (*pcVar4)();
    piVar15[2] = 0x36;
    pcVar4 = (code *)swi(0x80);
    (*pcVar4)();
    piVar15 = piVar15 + 4;
  }
  LOCK();
  piVar15[2] = *piVar15;
  UNLOCK();
  puVar17 = (undefined4 *)&DAT_c0ed0001;
  piVar15[1] = 0x15;
  pcVar4 = (code *)swi(0x80);
  (*pcVar4)();
  uVar6 = piVar15[3];
  piVar16 = piVar15 + 4;
LAB_08048100:
  bVar21 = uVar6 < 0x80000000;
  bVar10 = 0;
  *(undefined4 *)((int)piVar16 + -4) = 1;
  pcVar4 = (code *)swi(0x80);
  uVar23 = (*pcVar4)();
  in_AF = 9 < ((byte)uVar23 & 0xf) | in_AF;
  bVar5 = (byte)uVar23 + in_AF * -6;
  bVar3 = (bool)(0x9f < bVar5 | bVar10 | in_AF * (bVar5 < 6));
  bVar5 = bVar5 + bVar3 * -0x60;
  pbVar7 = (byte *)CONCAT31((int3)((ulonglong)uVar23 >> 8),bVar5);
  if (bVar3 || bVar21) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  puVar1 = (ushort *)((int)((ulonglong)uVar23 >> 0x20) + 0x6f + (int)puVar17 * 2);
  *puVar1 = *puVar1 + (ushort)bVar3 * -(*puVar1 & 3);
  uVar11 = (undefined2)((ulonglong)uVar23 >> 0x20);
  uVar9 = in(uVar11);
  *puVar20 = uVar9;
  *pbVar7 = *pbVar7 + bVar5;
  *pbVar7 = *pbVar7 + bVar5;
  bVar10 = (byte)((uint)extraout_ECX >> 8);
  *(char *)(extraout_ECX + 0x73) = *(char *)(extraout_ECX + 0x73) + bVar10;
  out(*puVar17,uVar11);
  *pbVar7 = *pbVar7 ^ bVar5;
  pbVar18 = (byte *)((int)(puVar17 + (uint)bVar22 * -2 + 1) + (uint)bVar22 * -2 + 1);
  out(*(undefined *)(puVar17 + (uint)bVar22 * -2 + 1),uVar11);
  if (bVar5 != 0x65) {
    if (bVar5 < 0x65) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    *pbVar18 = *pbVar18 & bVar10;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar7 = *pbVar7 + bVar5;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


