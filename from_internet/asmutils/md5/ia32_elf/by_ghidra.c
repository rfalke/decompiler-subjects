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




uint __regparm3 FUN_0804804c(undefined4 param_1,uint param_2,uint param_3)

{
  uint unaff_EBX;
  
  return unaff_EBX & param_3 | ~unaff_EBX & param_2;
}



undefined8 __regparm3 FUN_08048059(undefined4 param_1,uint param_2,uint param_3)

{
  uint unaff_EBX;
  
  return CONCAT44(param_2,param_2 & unaff_EBX | ~param_2 & param_3);
}



// WARNING: Control flow encountered bad instruction data

void processEntry entry(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  byte bVar2;
  uint *puVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined *puVar19;
  uint uVar20;
  char *pcVar21;
  char *pcVar22;
  byte bVar23;
  ushort in_FPUControlWord;
  longdouble lVar24;
  undefined8 uVar25;
  undefined4 uStack_4;
  
  bVar23 = 0;
  param_2._0_2_ = in_FPUControlWord | 0x400;
  puVar16 = &DAT_080482cd;
  do {
    param_1 = param_1 + 1;
    lVar24 = (longdouble)fsin((longdouble)param_1);
    uStack_4 = (undefined4)(longlong)ROUND(ABS(lVar24) * (longdouble)4294967296.0);
    *puVar16 = uStack_4;
    puVar16 = puVar16 + 1;
  } while (param_1 < 0x40);
  puVar12 = (uint *)&param_4;
  puVar10 = (uint *)&param_4;
  iVar13 = 0;
  if (param_4 == 0) goto LAB_080480c5;
LAB_080480ab:
  iVar13 = *puVar12;
  *puVar12 = iVar13;
  if (iVar13 != 0) {
    ((int *)puVar12)[-1] = 5;
    pcVar1 = (code *)swi(0x80);
    iVar13 = (*pcVar1)();
    puVar10 = (uint *)((int *)puVar12 + 1);
    if (-1 < iVar13) {
LAB_080480c5:
      DAT_080483cd = 0x67452301;
      puVar16 = &DAT_080483d5 + (uint)bVar23 * -2 + (uint)bVar23 * -2;
      (&DAT_080483d1)[(uint)bVar23 * -2] = 0xefcdab89;
      puVar17 = puVar16 + (uint)bVar23 * -2 + 1;
      *puVar16 = 0x98badcfe;
      *puVar17 = 0x10325476;
      puVar17[(uint)bVar23 * -2 + 1] = 0;
      *(undefined2 *)(puVar17 + (uint)bVar23 * -2 + 1 + (uint)bVar23 * -2 + 1) = 0;
      do {
        *(undefined4 *)((int)puVar10 + -4) = 0x40;
        *(undefined **)((int)puVar10 + -4) = &DAT_0804828d;
        puVar3 = (uint *)((int)puVar10 + -4);
        do {
          puVar12 = puVar3;
          puVar12[-1] = 3;
          pcVar1 = (code *)swi(0x80);
          uVar25 = (*pcVar1)();
          iVar9 = (int)uVar25;
          if (iVar9 < 0) goto LAB_08048255;
          puVar3 = puVar12 + 1;
        } while (iVar9 != 0);
        iVar18 = puVar12[1];
        iVar9 = -(((int)((ulonglong)uVar25 >> 0x20) - iVar9) + -0x40);
        DAT_080483dd = DAT_080483dd + iVar9;
        if (iVar9 < 0x40) {
          if ((iVar9 == 0) && ((char)DAT_080483e1 != '\0')) goto LAB_080481ed;
          if (DAT_080483e1._1_1_ == '\0') {
            DAT_080483e1._1_1_ = '\x01';
            *(undefined *)(iVar18 + iVar9) = 0x80;
            iVar9 = iVar9 + 1;
          }
          if (iVar9 < 0x39) {
            puVar12[1] = 0x38;
            piVar14 = (int *)(iVar18 + iVar9);
            for (iVar6 = puVar12[1] - iVar9; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(undefined *)piVar14 = 0;
              piVar14 = (int *)((int)piVar14 + (uint)bVar23 * -2 + 1);
            }
            puVar12[1] = DAT_080483dd;
            *piVar14 = DAT_080483dd << 3;
            piVar14[(uint)bVar23 * -2 + 1] = puVar12[1] >> 0x1d;
            DAT_080483e1._0_1_ = (char)DAT_080483e1 + '\x01';
          }
          else {
            puVar12[1] = 0x40;
            puVar19 = (undefined *)(iVar18 + iVar9);
            for (iVar6 = puVar12[1] - iVar9; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar19 = 0;
              puVar19 = puVar19 + (uint)bVar23 * -2 + 1;
            }
          }
        }
        puVar12[1] = iVar13;
        bVar23 = 0;
        piVar14 = &DAT_080482cd;
        *puVar12 = 3;
        iVar6 = *puVar12;
        *puVar12 = 0xf;
        iVar13 = DAT_080483cd;
        iVar9 = DAT_080483d5;
        iVar18 = DAT_080483d1;
        do {
          puVar12[-1] = iVar13;
          uVar20 = (uint)*(byte *)(iVar6 + 0x8048279);
          iVar13 = puVar12[-1];
          iVar7 = iVar9;
          do {
            piVar15 = piVar14;
            iVar9 = iVar18;
            puVar12[-1] = iVar7;
            puVar12[-2] = iVar13;
            pcVar1 = *(code **)(iVar6 * 4 + 0x804827d);
            puVar12[-3] = 0x804819c;
            uVar25 = (*pcVar1)();
            iVar13 = (int)((ulonglong)uVar25 >> 0x20);
            puVar12[-2] = puVar12[-2] + (int)uVar25;
            bVar2 = *(byte *)((*puVar12 & 3) + 0x8048265 + iVar6 * 4) & 0x1f;
            iVar18 = (puVar12[-2] + *piVar15 + *(int *)(&DAT_0804828d + uVar20 * 4) << bVar2 |
                     puVar12[-2] + *piVar15 + *(int *)(&DAT_0804828d + uVar20 * 4) >> 0x20 - bVar2)
                     + iVar9;
            uVar20 = uVar20 + *(byte *)(iVar6 + 0x8048275) & 0xf;
            piVar14 = piVar15 + 1;
            iVar8 = puVar12[-1];
            *puVar12 = *puVar12 + -1;
            iVar7 = iVar9;
          } while (-1 < (int)*puVar12);
          *puVar12 = *puVar12 & 0xf;
          iVar6 = iVar6 + -1;
        } while (-1 < iVar6);
        *piVar14 = *piVar14 + iVar13;
        piVar15[2] = piVar15[2] + iVar18;
        piVar15[3] = piVar15[3] + iVar9;
        piVar15[4] = piVar15[4] + iVar8;
        iVar13 = puVar12[1];
        puVar10 = puVar12 + 2;
      } while( true );
    }
LAB_08048255:
    puVar12 = (uint *)((int)puVar12 + 4);
  }
  *(undefined4 *)((int)puVar12 + -4) = 1;
  pcVar1 = (code *)swi(0x80);
  pcVar22 = (char *)(*pcVar1)();
  cVar4 = (char)pcVar22;
  *pcVar22 = *pcVar22 + cVar4;
  *pcVar22 = *pcVar22 + cVar4;
  *pcVar22 = *pcVar22 + cVar4;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
LAB_080481ed:
  pcVar22 = &DAT_080483e3;
  puVar12[1] = (uint)&DAT_080483e3;
  *puVar12 = 0x10;
  iVar9 = *puVar12;
  puVar16 = &DAT_080483cd;
  do {
    bVar2 = *(byte *)puVar16;
    pcVar21 = pcVar22 + (uint)bVar23 * -2 + 1;
    *pcVar22 = (bVar2 >> 4) % 10 + ((bVar2 >> 4) / 10) * '1' + '0';
    uVar5 = CONCAT11((bVar2 & 0xf) / 10,bVar2) & 0xff0f;
    pcVar22 = pcVar21 + (uint)bVar23 * -2 + 1;
    *pcVar21 = (byte)uVar5 % 10 + (char)(uVar5 >> 8) * '1' + '0';
    iVar9 = iVar9 + -1;
    puVar16 = (undefined4 *)((int)puVar16 + (uint)bVar23 * -2 + 1);
  } while (iVar9 != 0);
  puVar12[1] = 1;
  puVar12[1] = 0x20;
  puVar12[1] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar11 = puVar12 + 3;
  if (iVar13 != 0) {
    puVar12[2] = 1;
    puVar12[2] = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    pcVar22 = (char *)puVar12[4];
    puVar12[4] = (uint)pcVar22;
    do {
      cVar4 = *pcVar22;
      pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
    } while (cVar4 != '\0');
    puVar12[4] = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar11 = puVar12 + 6;
  }
  *(undefined4 *)((int)puVar11 + -4) = 1;
  *(undefined4 *)((int)puVar11 + -4) = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar12 = (uint *)((int)puVar11 + 4);
  goto LAB_080480ab;
}


