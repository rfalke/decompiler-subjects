typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
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

void entry(char *param_1,int *param_2,int *param_3)

{
  ushort *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
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
  int unaff_retaddr;
  int aiStack8 [2];
  
  bVar22 = 0;
  piVar12 = (int *)0x804810d;
  iVar8 = -1;
  do {
    pcVar19 = param_1;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar19 = param_1 + 1;
    cVar2 = *param_1;
    param_1 = pcVar19;
  } while (cVar2 != '\0');
  puVar20 = (undefined4 *)0x804812f;
  uRam0804812f = *(int *)(pcVar19 + -4) != 0x646363;
                    // WARNING: Read-only address (ram,0x0804812f) is written
  puVar17 = (undefined4 *)0x804810d;
  iVar8 = unaff_retaddr + -1;
  uVar9 = 0x8048111;
  puVar14 = &param_2;
  if (iVar8 != 0) {
    puVar13 = &param_3;
    piVar12 = param_2;
    uVar9 = 0x8048111;
    if (*param_2 == 0x6463632d) {
                    // WARNING: Read-only address (ram,0x0804812f) is written
      uRam0804812f = false;
      iVar8 = unaff_retaddr + -2;
      piVar12 = (int *)0x804810d;
      puVar14 = &param_3;
      if (iVar8 == 0) goto LAB_0804809d;
      puVar13 = (undefined4 *)&stack0x00000010;
      piVar12 = param_3;
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
    uVar7 = (uint)uVar23;
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
  piVar15[2] = *piVar15;
  puVar17 = (undefined4 *)&DAT_c0ed0001;
  piVar15[1] = 0x15;
  pcVar4 = (code *)swi(0x80);
  (*pcVar4)();
  uVar7 = piVar15[3];
  piVar16 = piVar15 + 4;
LAB_08048100:
  bVar21 = uVar7 < 0x80000000;
  bVar10 = 0;
  *(undefined4 *)((int)piVar16 + -4) = 1;
  pcVar4 = (code *)swi(0x80);
  uVar23 = (*pcVar4)();
  in_AF = 9 < ((byte)uVar23 & 0xf) | in_AF;
  bVar6 = (byte)uVar23 + in_AF * -6;
  bVar3 = (bool)(0x9f < bVar6 | bVar10 | in_AF * (bVar6 < 6));
  bVar6 = bVar6 + bVar3 * -0x60;
  pbVar5 = (byte *)((uint)uVar23 & 0xffffff00 | (uint)bVar6);
  if (bVar3 || bVar21) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  puVar1 = (ushort *)((int)((ulonglong)uVar23 >> 0x20) + 0x6f + (int)puVar17 * 2);
  *puVar1 = *puVar1 + (ushort)bVar3 * -(*puVar1 & 3);
  uVar11 = (undefined2)((ulonglong)uVar23 >> 0x20);
  uVar9 = in(uVar11);
  *puVar20 = uVar9;
  *pbVar5 = *pbVar5 + bVar6;
  *pbVar5 = *pbVar5 + bVar6;
  bVar10 = (byte)((uint)extraout_ECX >> 8);
  *(char *)(extraout_ECX + 0x73) = *(char *)(extraout_ECX + 0x73) + bVar10;
  out(*puVar17,uVar11);
  *pbVar5 = *pbVar5 ^ bVar6;
  pbVar18 = (byte *)((int)(puVar17 + (uint)bVar22 * -2 + 1) + (uint)bVar22 * -2 + 1);
  out(*(undefined *)(puVar17 + (uint)bVar22 * -2 + 1),uVar11);
  if (bVar6 != 0x65) {
    if (bVar6 < 0x65) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    *pbVar18 = *pbVar18 & bVar10;
    *pbVar5 = *pbVar5 + bVar6;
    *pbVar5 = *pbVar5 + bVar6;
    *pbVar5 = *pbVar5 + bVar6;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


