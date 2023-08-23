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
entry(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,byte *param_5,
     uint param_6,undefined4 param_7,undefined4 param_8,undefined *param_9,undefined4 param_10)

{
  char cVar1;
  code *pcVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  byte *pbVar21;
  char *pcVar22;
  char *pcVar23;
  undefined4 uVar24;
  undefined4 *puVar25;
  undefined2 *puVar26;
  undefined2 *puVar27;
  byte bVar28;
  undefined8 uVar29;
  
  pbVar21 = param_5;
  bVar28 = 0;
  piVar17 = &param_3;
  if (2 < param_2) {
    DAT_08048fa8 = param_4;
    param_5 = (byte *)0x30;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    iVar6 = 0;
    while( true ) {
      if (*pbVar21 < 0x30) break;
      iVar6 = iVar6 * 10 + (uint)(byte)(*pbVar21 - 0x30);
      pbVar21 = pbVar21 + (uint)bVar28 * -2 + 1;
    }
    DAT_08048f78 = CONCAT31((int3)(((uint)CONCAT11((char)iVar6,(char)((uint)iVar6 >> 8)) << 0x10) >>
                                  8),2);
    _DAT_08048f7c = 0;
    param_6 = 6;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    param_7 = 6;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    param_8 = 6;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    param_9 = (undefined *)0x6;
    param_8 = 1;
    param_7 = 2;
    param_6 = 0x66;
    pcVar2 = (code *)swi(0x80);
    uVar4 = (*pcVar2)();
    piVar17 = (int *)&stack0x00000024;
    if (-1 < (int)uVar4) {
      param_10 = 4;
      param_9 = &DAT_0804804c;
      param_8 = 2;
      param_7 = 1;
      param_5 = (byte *)0x66;
      pcVar2 = (code *)swi(0x80);
      param_6 = uVar4;
      iVar6 = (*pcVar2)();
      piVar17 = (int *)&stack0x00000028;
      puVar7 = (undefined4 *)&stack0x00000028;
      param_2 = uVar4;
      if (iVar6 == 0) goto LAB_080482c6;
    }
  }
LAB_080482c1:
  do {
    do {
      do {
        *(undefined4 *)((int)piVar17 + -4) = 1;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar7 = (undefined4 *)((int)piVar17 + 4);
LAB_080482c6:
        puVar7[-1] = 0x10;
        puVar7[-2] = &DAT_08048f78;
        puVar7[-3] = param_2;
        puVar7[-4] = 2;
        puVar7[-4] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar6 = (*pcVar2)();
        piVar17 = puVar7 + 1;
      } while (iVar6 != 0);
      *puVar7 = 5;
      puVar7[-1] = param_2;
      puVar7[-2] = 4;
      puVar7[-2] = 0x66;
      pcVar2 = (code *)swi(0x80);
      iVar6 = (*pcVar2)();
      piVar17 = puVar7 + 2;
    } while (iVar6 != 0);
    puVar7[1] = param_2;
    *puVar7 = 0x80482f9;
    FUN_08048ca2();
    uVar4 = puVar7[1];
    puVar7[1] = 2;
    pcVar2 = (code *)swi(0x80);
    iVar6 = (*pcVar2)();
    piVar17 = puVar7 + 3;
    puVar20 = puVar7 + 3;
    param_2 = uVar4;
  } while (iVar6 != 0);
  do {
    do {
      puVar8 = puVar20;
      DAT_08048e79 = 0x10;
      puVar8[-1] = &DAT_08048e79;
      puVar8[-2] = &DAT_08048d7a;
      puVar8[-3] = uVar4;
      puVar8[-4] = 5;
      puVar8[-4] = 0x66;
      pcVar2 = (code *)swi(0x80);
      param_2 = (*pcVar2)();
      puVar20 = puVar8 + 1;
    } while ((int)param_2 < 0);
    *puVar8 = 2;
    pcVar2 = (code *)swi(0x80);
    iVar6 = (*pcVar2)();
    puVar25 = puVar8 + 2;
    puVar20 = puVar8 + 2;
  } while (iVar6 != 0);
  uVar24 = 0;
  puVar8[1] = 0x8048345;
  FUN_08048b8e();
  do {
    do {
      *(undefined4 *)((int)puVar25 + -4) = 0x804834f;
      iVar6 = FUN_08048358();
    } while (iVar6 == 0);
    if (DAT_08048d68 == '\0') {
      puVar20 = puVar25;
      if (iVar6 == 0x52455355) goto LAB_080489f9;
      if (iVar6 == 0x53534150) {
LAB_08048a06:
        *(undefined4 *)((int)puVar25 + -4) = 0x8048a0b;
        FUN_08048b5d();
        *(undefined4 *)((int)puVar25 + -4) = 0x8048a10;
        FUN_08048c29();
        puVar20 = puVar25;
LAB_080489f4:
        do {
          *(undefined4 *)((int)puVar20 + -4) = 0x80489f9;
          FUN_08048b88();
LAB_080489f9:
          *(undefined4 *)((int)puVar20 + -4) = 0x80489fe;
          FUN_08048b5d();
          *(undefined4 *)((int)puVar20 + -4) = 0x8048a03;
          FUN_08048bd4();
        } while( true );
      }
      piVar17 = puVar25;
      if (iVar6 == 0x54495551) goto LAB_08048a65;
      if ((iVar6 == 0x54535953) || (iVar6 == 0x504f4f4e)) goto LAB_080489f4;
      *(undefined4 *)((int)puVar25 + -4) = 0x8048446;
      iVar6 = FUN_08048b88();
    }
    puVar9 = (undefined4 *)((int)puVar25 + -4);
    *(undefined4 *)((int)puVar25 + -4) = uVar24;
    DAT_08048fac = 1;
    if (iVar6 == 0x52544552) {
LAB_08048473:
      *(undefined4 *)((int)puVar25 + -8) = 0x8048478;
      FUN_08048b5d();
      *(undefined4 *)((int)puVar25 + -4) = *(undefined4 *)((int)puVar25 + -4);
      *(undefined4 *)((int)puVar25 + -8) = 5;
      pcVar2 = (code *)swi(0x80);
      iVar6 = (*pcVar2)();
      puVar20 = puVar25;
      if (-1 < iVar6) {
        *(undefined4 *)((int)puVar25 + -4) = 0x80484af;
        FUN_08048b8e();
        if (((DAT_08048fac & 2) == 0) && (DAT_08048d75 != 0)) {
          *(undefined4 *)((int)puVar25 + -4) = 0x13;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar25 = (undefined4 *)((int)puVar25 + 4);
        }
        while( true ) {
          puVar25[-1] = 0x80484d6;
          iVar6 = FUN_08048358();
          puVar20 = puVar25;
          if (iVar6 == 0x524f4241 || iVar6 == 0x4f4241f2) goto LAB_08048533;
          puVar25[-1] = 3;
          pcVar2 = (code *)swi(0x80);
          iVar6 = (*pcVar2)();
          puVar20 = puVar25 + 1;
          if (iVar6 == 0) break;
          if (DAT_08048d18 == 'A') {
            *puVar25 = 0x8048507;
            FUN_08048b0c();
            puVar25 = puVar25 + 1;
          }
          else {
            *puVar25 = 4;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar25 = puVar25 + 2;
          }
        }
        do {
          puVar20[-1] = 6;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          *puVar20 = 6;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar20[1] = 0x8048533;
          FUN_08048b88();
          puVar20 = puVar20 + 2;
LAB_08048533:
          *(undefined4 *)((int)puVar20 + -4) = 0x804853d;
          FUN_08048b8e();
        } while( true );
      }
LAB_0804853f:
      *puVar20 = 6;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar9 = puVar20 + 2;
      puVar20[1] = 0x8048553;
      iVar6 = FUN_08048b88();
    }
    else {
      DAT_08048fac = 2;
      if (iVar6 == 0x524f5453) {
        puVar20 = (undefined4 *)((int)puVar25 + -4);
        if ((_DAT_08048d69 & 1) != 0) goto LAB_08048473;
        goto LAB_0804853f;
      }
    }
    puVar25 = (undefined4 *)*puVar9;
    piVar12 = puVar9 + 1;
    DAT_08048d75 = 0;
    if (iVar6 == 0x54534552) {
      *puVar9 = 0x8048572;
      DAT_08048d75 = FUN_08048af6();
      *puVar9 = 0x8048581;
      iVar6 = FUN_08048b88();
    }
    DAT_08048fac = 3;
    if ((short)iVar6 == 0x494c) {
      if (puVar25 == (undefined4 *)0x0) {
        *puVar9 = 0x80485a0;
        FUN_08048358();
      }
      *puVar9 = 0x6a;
      pcVar2 = (code *)swi(0x80);
      iVar6 = (*pcVar2)();
      puVar20 = puVar9 + 2;
      if (iVar6 < 0) goto LAB_080489f4;
      puVar9[1] = 0x80485c3;
      FUN_08048b8e();
      puVar9[1] = 2;
      pcVar2 = (code *)swi(0x80);
      iVar6 = (*pcVar2)();
      puVar20 = puVar9 + 3;
      if (iVar6 == 0) {
        puVar9[2] = 0x2a;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar9[3] = 2;
        pcVar2 = (code *)swi(0x80);
        iVar6 = (*pcVar2)();
        if (iVar6 != 0) {
          puVar9[4] = 6;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          piVar10 = puVar9 + 6;
          break;
        }
        puVar9[4] = 6;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar9[5] = 6;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar9[6] = 1;
        puVar9[6] = 0x3f;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar9[7] = puVar25;
        DAT_08048f88 = s__bin_ls_08048050;
        pcVar22 = &DAT_08048058;
        DAT_08048f8c = &DAT_08048058;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          pcVar22 = pcVar22 + (uint)bVar28 * -2 + 1;
        }
        if (DAT_0804afb1 != '\r') {
          puVar9[6] = 0x8048685;
          FUN_08048b5d();
          _DAT_08048f90 = pcVar22;
          if (*pcVar22 == '-') {
            _DAT_08048f90 = pcVar22 + 4;
          }
        }
        puVar9[7] = 0xb;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar9[8] = 1;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar20 = puVar9 + 10;
      }
      do {
        puVar11 = puVar20;
        puVar11[-1] = 2;
        puVar11[-1] = 0x72;
        pcVar2 = (code *)swi(0x80);
        iVar6 = (*pcVar2)();
        puVar20 = puVar11 + 1;
      } while (iVar6 < 0);
      *puVar11 = 6;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      piVar12 = puVar11 + 2;
      puVar25 = (undefined4 *)0x0;
      puVar11[1] = 0x80486d9;
      iVar6 = FUN_08048b88();
    }
    piVar17 = piVar12;
    if ((short)iVar6 == 0x4f50) goto LAB_080486f2;
LAB_08048794:
    if (iVar6 == 0x56534150) {
      puVar25 = &DAT_08048f78;
      DAT_08048f78 = 2;
      _DAT_08048f7c = 0;
      piVar17[-1] = 6;
      piVar17[-2] = 1;
      piVar17[-3] = 2;
      piVar17[-4] = 1;
      piVar17[-4] = 0x66;
      pcVar2 = (code *)swi(0x80);
      iVar6 = (*pcVar2)();
      puVar14 = piVar17 + 1;
      if (iVar6 < 0) goto LAB_0804878a;
      *piVar17 = 4;
      piVar17[-1] = (int)&DAT_0804804c;
      piVar17[-2] = 2;
      piVar17[-3] = 1;
      piVar17[-4] = iVar6;
      piVar17[-5] = 0xe;
      piVar17[-5] = 0x66;
      pcVar2 = (code *)swi(0x80);
      iVar5 = (*pcVar2)();
      puVar14 = piVar17 + 2;
      if (iVar5 < 0) goto LAB_0804878a;
      piVar17[1] = 0x10;
      *piVar17 = (int)&DAT_08048f78;
      piVar17[-1] = iVar6;
      piVar17[-2] = 2;
      piVar17[-2] = 0x66;
      pcVar2 = (code *)swi(0x80);
      iVar5 = (*pcVar2)();
      puVar14 = piVar17 + 3;
      if (iVar5 < 0) goto LAB_0804878a;
      piVar17[2] = 0x10;
      piVar17[1] = (int)(piVar17 + 2);
      *piVar17 = (int)&DAT_08048f78;
      piVar17[-1] = iVar6;
      piVar17[-2] = 6;
      piVar17[-2] = 0x66;
      pcVar2 = (code *)swi(0x80);
      iVar5 = (*pcVar2)();
      puVar15 = (undefined *)((int)piVar17 + 10);
      *(undefined2 *)((int)piVar17 + 10) = DAT_08048f78._2_2_;
      if (iVar5 < 0) {
LAB_08048788:
        puVar14 = (undefined4 *)(puVar15 + 8);
        goto LAB_0804878a;
      }
      *(undefined4 *)((int)piVar17 + 6) = 1;
      *(int *)((int)piVar17 + 2) = iVar6;
      *(undefined4 *)((int)piVar17 + -2) = 4;
      *(undefined4 *)((int)piVar17 + -2) = 0x66;
      pcVar2 = (code *)swi(0x80);
      uVar29 = (*pcVar2)();
      puVar15 = (undefined *)((int)piVar17 + 0xe);
      if ((int)uVar29 < 0) goto LAB_08048788;
      *(int *)((int)piVar17 + 10) = (int)((ulonglong)uVar29 >> 0x20);
      *(undefined4 **)((int)piVar17 + 6) = &DAT_08048f78;
      *(uint *)((int)piVar17 + 2) = param_2;
      *(undefined4 *)((int)piVar17 + -2) = 6;
      *(undefined4 *)((int)piVar17 + -2) = 0x66;
      pcVar2 = (code *)swi(0x80);
      DAT_08048d71 = iVar6;
      iVar6 = (*pcVar2)();
      puVar15 = (undefined *)((int)piVar17 + 0x12);
      if (iVar6 < 0) goto LAB_08048788;
      *(undefined4 *)((int)piVar17 + 0xe) = 0x8048875;
      FUN_08048b8e();
      puVar27 = &DAT_08048fad;
      do {
        *(undefined4 *)((int)piVar17 + 0xe) = 0x8048883;
        FUN_08048acc();
        puVar26 = (undefined2 *)((int)puVar27 + (uint)bVar28 * -2 + 1);
        *(undefined *)puVar27 = 0x2c;
        puVar27 = puVar26;
      } while (extraout_ECX_00 != 1);
      puVar16 = (undefined4 *)((int)piVar17 + 0x16);
      *(undefined4 *)((int)piVar17 + 0x12) = 0x8048894;
      FUN_08048acc();
      puVar27 = (undefined2 *)((int)puVar26 + (uint)bVar28 * -2 + 1);
      *(undefined *)puVar26 = 0x2c;
      *(undefined4 *)((int)piVar17 + 0x12) = 0x80488a2;
      FUN_08048acc();
      piVar17 = (int *)((int)piVar17 + 0x1a);
      puVar25 = (undefined4 *)(puVar27 + (uint)bVar28 * -2 + 1);
      *puVar27 = 0xa0d;
      *puVar16 = 0x80488bb;
      iVar6 = FUN_08048b7f();
    }
    *(undefined4 **)((int)piVar17 + -4) = puVar25;
    pcVar22 = &DAT_08048d18;
    if ((((short)iVar6 == 0x5954) || (pcVar22 = (char *)0x8048d19, (short)iVar6 == 0x4f4d)) ||
       (pcVar22 = &DAT_08048d1a, puVar18 = (undefined4 *)((int)piVar17 + -4), iVar6 == 0x55525453))
    {
      pcVar23 = &DAT_08048d1b;
      iVar6 = 4;
      do {
        if (DAT_0804afb2 == *pcVar23) {
          *pcVar22 = DAT_0804afb2;
          break;
        }
        pcVar23 = pcVar23 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      *(undefined4 *)((int)piVar17 + -4) = 0x8048900;
      iVar6 = FUN_08048b88();
      puVar18 = piVar17;
    }
    puVar19 = puVar18;
    if ((short)iVar6 == 0x4443) goto LAB_0804899c;
    puVar18[-1] = iVar6;
    puVar18[-2] = 0x8048910;
    FUN_08048b5d();
    iVar6 = puVar18[-1];
    uVar24 = *puVar18;
    puVar20 = puVar18 + 1;
    puVar25 = puVar18 + 1;
    sVar3 = (short)iVar6;
    if (sVar3 == 0x4b4d) {
      puVar20 = puVar18 + 1;
      if ((_DAT_08048d69 & 2) != 0) {
        *puVar18 = 0x27;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar20 = puVar18 + 2;
      }
      goto LAB_080489f4;
    }
    if (sVar3 == 0x4d52) {
      puVar20 = puVar18 + 1;
      if ((_DAT_08048d69 & 2) != 0) {
        *puVar18 = 0x28;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar20 = puVar18 + 2;
      }
      goto LAB_080489f4;
    }
    if (sVar3 == 0x4544) {
      puVar20 = puVar18 + 1;
      if ((_DAT_08048d69 & 2) != 0) {
        *puVar18 = 10;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar20 = puVar18 + 2;
      }
      goto LAB_080489f4;
    }
    puVar19 = puVar18 + 1;
    if (sVar3 == 0x5743) {
LAB_0804899c:
      *(undefined4 *)((int)puVar19 + -4) = 0xc;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar20 = (undefined4 *)((int)puVar19 + 4);
      goto LAB_080489f4;
    }
    if (iVar6 == 0x455a4953) {
      *puVar18 = uVar24;
      puVar18[-1] = 0x6a;
      pcVar2 = (code *)swi(0x80);
      iVar6 = (*pcVar2)();
      puVar20 = puVar18 + 1;
      if (iVar6 < 0) goto LAB_080489f4;
      *puVar18 = 0x8048972;
      FUN_08048b8e();
      *puVar18 = 0x804897e;
      FUN_08048acc();
      DAT_08048fad = 0xa0d;
      puVar19 = puVar18 + 2;
      puVar18[1] = 0x8048997;
      FUN_08048b7f();
      goto LAB_0804899c;
    }
    if (sVar3 == 0x5355) goto LAB_080489f9;
    if (iVar6 == 0x53534150) goto LAB_08048a06;
    puVar20 = puVar18 + 1;
    if ((sVar3 == 0x5953) || (puVar20 = puVar18 + 1, sVar3 == 0x4f4e)) goto LAB_080489f4;
    piVar17 = puVar18 + 1;
    if (sVar3 == 0x5551) goto LAB_08048a65;
    if (sVar3 != 0x5750) {
      puVar20 = puVar18 + 1;
      if ((iVar6 == 0x524f4241) || (puVar20 = puVar18 + 1, iVar6 == 0x4f4241f2)) goto LAB_080489f4;
      *puVar18 = 0x8048a65;
      FUN_08048b88();
      piVar17 = puVar18 + 1;
      goto LAB_08048a65;
    }
    *puVar18 = 0x8048a7e;
    FUN_08048b8e();
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    puVar27 = &DAT_08048fad;
    do {
      puVar26 = (undefined2 *)((int)puVar27 + (uint)bVar28 * -2 + 1);
      cVar1 = *(char *)puVar27;
      puVar27 = puVar26;
    } while (cVar1 != '\0');
    *(undefined4 *)((int)puVar26 + -1) = 0xa0d22;
    puVar18[1] = 4;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    puVar25 = puVar18 + 3;
  } while( true );
LAB_080485ee:
  piVar10[-1] = 3;
  pcVar2 = (code *)swi(0x80);
  iVar6 = (*pcVar2)();
  piVar17 = piVar10 + 1;
  if (iVar6 == 0) goto LAB_080482c1;
  *piVar10 = iVar6;
  piVar10[-1] = 0x804860f;
  iVar6 = FUN_08048358();
  piVar17 = piVar10 + 1;
  if (iVar6 == 0x524f4241 || iVar6 == 0x4f4241f2) {
    *piVar10 = 0x8048634;
    FUN_08048b8e();
    goto LAB_080482c1;
  }
  *piVar10 = 0x8048623;
  FUN_08048b0c();
  piVar10 = piVar10 + 1;
  goto LAB_080485ee;
LAB_080486f2:
  do {
    piVar12[-1] = 0x80486fa;
    FUN_08048ab6();
  } while (extraout_ECX != 1);
  piVar12[-1] = 0;
  DAT_08048f84 = CONCAT22(CONCAT11((char)*(undefined2 *)(piVar12 + -1),
                                   (char)((ushort)*(undefined2 *)(piVar12 + -1) >> 8)),
                          CONCAT11((char)*(undefined2 *)((int)piVar12 + -2),
                                   (char)((ushort)*(undefined2 *)((int)piVar12 + -2) >> 8)));
  piVar12[-1] = 0x8048717;
  FUN_08048ab6();
  piVar12[-1] = 0x804871f;
  FUN_08048ab6();
  DAT_08048f80 = 2;
  piVar12[-1] = 6;
  piVar12[-2] = 1;
  piVar12[-3] = 2;
  piVar12[-4] = 1;
  piVar12[-4] = 0x66;
  pcVar2 = (code *)swi(0x80);
  iVar6 = (*pcVar2)();
  piVar13 = piVar12 + 1;
  if (-1 < iVar6) {
    *piVar12 = iVar6;
    piVar12[-1] = 0x10;
    piVar12[-2] = (int)&DAT_08048f80;
    piVar12[-3] = iVar6;
    piVar12[-4] = 3;
    piVar12[-4] = 0x66;
    pcVar2 = (code *)swi(0x80);
    iVar6 = (*pcVar2)();
    piVar13 = piVar12 + 1;
    if (-1 < iVar6) {
      piVar13 = piVar12 + 2;
      piVar12[1] = 0x8048762;
      FUN_08048b88();
    }
  }
  piVar13[-1] = 0x804876c;
  FUN_08048b8e();
  piVar13[-1] = 2;
  piVar13[-2] = param_2;
  piVar13[-3] = 0xd;
  piVar13[-3] = 0x66;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  *piVar13 = 6;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  piVar17 = piVar13 + 2;
  goto LAB_080482c1;
LAB_0804878a:
  *(undefined4 *)((int)puVar14 + -4) = 0x8048794;
  iVar6 = FUN_08048b88();
  piVar17 = puVar14;
  goto LAB_08048794;
LAB_08048a65:
  *(undefined4 *)((int)piVar17 + -4) = 0x8048a6f;
  FUN_08048b8e();
  goto LAB_080482c1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_08048358(void)

{
  char cVar1;
  code *pcVar2;
  short sVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined *puVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  int iVar19;
  int unaff_EBP;
  char *pcVar20;
  char *pcVar21;
  undefined4 uVar22;
  undefined4 *puVar23;
  undefined2 *puVar24;
  undefined2 *puVar25;
  byte bVar26;
  undefined8 uVar27;
  
  bVar26 = 0;
  _DAT_0804b3b5 = DAT_08048d71;
  _DAT_0804b3b1 = 3;
  _DAT_0804b3b9 = 3;
  pcVar2 = (code *)swi(0x80);
  _DAT_0804b3ad = unaff_EBP;
  iVar4 = (*pcVar2)();
  if (iVar4 != 0) {
    if ((extraout_ECX != 1) && ((_DAT_0804b3bb & 3) != 0)) {
      DAT_08048e79 = 0x10;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)(&DAT_08048d7a);
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      DAT_08048d71 = 0;
      return 0;
    }
    if ((_DAT_0804b3b3 & 3) != 0) {
      pcVar2 = (code *)swi(0x80);
      iVar4 = (*pcVar2)();
      piVar15 = (int *)&stack0x00000008;
      if (-1 < iVar4 + -1) {
        return DAT_0804afad;
      }
LAB_080482c1:
      do {
        do {
          do {
            piVar5 = piVar15;
            piVar5[-1] = 1;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            *piVar5 = 0x10;
            piVar5[-1] = (int)&DAT_08048f78;
            piVar5[-2] = unaff_EBP;
            piVar5[-3] = 2;
            piVar5[-3] = 0x66;
            pcVar2 = (code *)swi(0x80);
            iVar4 = (*pcVar2)();
            piVar15 = piVar5 + 2;
          } while (iVar4 != 0);
          piVar5[1] = 5;
          *piVar5 = unaff_EBP;
          piVar5[-1] = 4;
          piVar5[-1] = 0x66;
          pcVar2 = (code *)swi(0x80);
          iVar4 = (*pcVar2)();
          piVar15 = piVar5 + 3;
        } while (iVar4 != 0);
        piVar5[2] = unaff_EBP;
        piVar5[1] = 0x80482f9;
        FUN_08048ca2();
        iVar19 = piVar5[2];
        piVar5[2] = 2;
        pcVar2 = (code *)swi(0x80);
        iVar4 = (*pcVar2)();
        piVar8 = piVar5 + 4;
        piVar15 = piVar5 + 4;
        unaff_EBP = iVar19;
      } while (iVar4 != 0);
      do {
        do {
          puVar6 = piVar8;
          DAT_08048e79 = 0x10;
          puVar6[-1] = &DAT_08048e79;
          puVar6[-2] = &DAT_08048d7a;
          puVar6[-3] = iVar19;
          puVar6[-4] = 5;
          puVar6[-4] = 0x66;
          pcVar2 = (code *)swi(0x80);
          unaff_EBP = (*pcVar2)();
          piVar8 = puVar6 + 1;
        } while (unaff_EBP < 0);
        *puVar6 = 2;
        pcVar2 = (code *)swi(0x80);
        iVar4 = (*pcVar2)();
        puVar23 = puVar6 + 2;
        piVar8 = puVar6 + 2;
      } while (iVar4 != 0);
      uVar22 = 0;
      puVar6[1] = 0x8048345;
      FUN_08048b8e();
      do {
        do {
          *(undefined4 *)((int)puVar23 + -4) = 0x804834f;
          iVar4 = FUN_08048358();
        } while (iVar4 == 0);
        if (DAT_08048d68 == '\0') {
          puVar18 = puVar23;
          if (iVar4 == 0x52455355) goto LAB_080489f9;
          if (iVar4 == 0x53534150) {
LAB_08048a06:
            *(undefined4 *)((int)puVar23 + -4) = 0x8048a0b;
            FUN_08048b5d();
            *(undefined4 *)((int)puVar23 + -4) = 0x8048a10;
            FUN_08048c29();
            puVar18 = puVar23;
LAB_080489f4:
            do {
              *(undefined4 *)((int)puVar18 + -4) = 0x80489f9;
              FUN_08048b88();
LAB_080489f9:
              *(undefined4 *)((int)puVar18 + -4) = 0x80489fe;
              FUN_08048b5d();
              *(undefined4 *)((int)puVar18 + -4) = 0x8048a03;
              FUN_08048bd4();
            } while( true );
          }
          if (iVar4 == 0x54495551) goto LAB_08048a65;
          if ((iVar4 == 0x54535953) || (iVar4 == 0x504f4f4e)) goto LAB_080489f4;
          *(undefined4 *)((int)puVar23 + -4) = 0x8048446;
          iVar4 = FUN_08048b88();
        }
        puVar7 = (undefined4 *)((int)puVar23 + -4);
        *(undefined4 *)((int)puVar23 + -4) = uVar22;
        DAT_08048fac = 1;
        if (iVar4 == 0x52544552) {
LAB_08048473:
          *(undefined4 *)((int)puVar23 + -8) = 0x8048478;
          FUN_08048b5d();
          *(undefined4 *)((int)puVar23 + -4) = *(undefined4 *)((int)puVar23 + -4);
          *(undefined4 *)((int)puVar23 + -8) = 5;
          pcVar2 = (code *)swi(0x80);
          iVar4 = (*pcVar2)();
          puVar18 = puVar23;
          if (-1 < iVar4) {
            *(undefined4 *)((int)puVar23 + -4) = 0x80484af;
            FUN_08048b8e();
            if (((DAT_08048fac & 2) == 0) && (DAT_08048d75 != 0)) {
              *(undefined4 *)((int)puVar23 + -4) = 0x13;
              pcVar2 = (code *)swi(0x80);
              (*pcVar2)();
              puVar23 = (undefined4 *)((int)puVar23 + 4);
            }
            while( true ) {
              puVar23[-1] = 0x80484d6;
              iVar4 = FUN_08048358();
              puVar18 = puVar23;
              if (iVar4 == 0x524f4241 || iVar4 == 0x4f4241f2) goto LAB_08048533;
              puVar23[-1] = 3;
              pcVar2 = (code *)swi(0x80);
              iVar4 = (*pcVar2)();
              puVar18 = puVar23 + 1;
              if (iVar4 == 0) break;
              if (DAT_08048d18 == 'A') {
                *puVar23 = 0x8048507;
                FUN_08048b0c();
                puVar23 = puVar23 + 1;
              }
              else {
                *puVar23 = 4;
                pcVar2 = (code *)swi(0x80);
                (*pcVar2)();
                puVar23 = puVar23 + 2;
              }
            }
            do {
              puVar18[-1] = 6;
              pcVar2 = (code *)swi(0x80);
              (*pcVar2)();
              *puVar18 = 6;
              pcVar2 = (code *)swi(0x80);
              (*pcVar2)();
              puVar18[1] = 0x8048533;
              FUN_08048b88();
              puVar18 = puVar18 + 2;
LAB_08048533:
              *(undefined4 *)((int)puVar18 + -4) = 0x804853d;
              FUN_08048b8e();
            } while( true );
          }
LAB_0804853f:
          *puVar18 = 6;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar7 = puVar18 + 2;
          puVar18[1] = 0x8048553;
          iVar4 = FUN_08048b88();
        }
        else {
          DAT_08048fac = 2;
          if (iVar4 == 0x524f5453) {
            puVar18 = (undefined4 *)((int)puVar23 + -4);
            if ((_DAT_08048d69 & 1) != 0) goto LAB_08048473;
            goto LAB_0804853f;
          }
        }
        puVar23 = (undefined4 *)*puVar7;
        piVar10 = puVar7 + 1;
        DAT_08048d75 = 0;
        if (iVar4 == 0x54534552) {
          *puVar7 = 0x8048572;
          DAT_08048d75 = FUN_08048af6();
          *puVar7 = 0x8048581;
          iVar4 = FUN_08048b88();
        }
        DAT_08048fac = 3;
        if ((short)iVar4 == 0x494c) {
          if (puVar23 == (undefined4 *)0x0) {
            *puVar7 = 0x80485a0;
            FUN_08048358();
          }
          *puVar7 = 0x6a;
          pcVar2 = (code *)swi(0x80);
          iVar4 = (*pcVar2)();
          puVar18 = puVar7 + 2;
          if (iVar4 < 0) goto LAB_080489f4;
          puVar7[1] = 0x80485c3;
          FUN_08048b8e();
          puVar7[1] = 2;
          pcVar2 = (code *)swi(0x80);
          iVar4 = (*pcVar2)();
          puVar18 = puVar7 + 3;
          if (iVar4 == 0) {
            puVar7[2] = 0x2a;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar7[3] = 2;
            pcVar2 = (code *)swi(0x80);
            iVar4 = (*pcVar2)();
            if (iVar4 != 0) {
              puVar7[4] = 6;
              pcVar2 = (code *)swi(0x80);
              (*pcVar2)();
              piVar8 = puVar7 + 6;
              goto LAB_080485ee;
            }
            puVar7[4] = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar7[5] = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar7[6] = 1;
            puVar7[6] = 0x3f;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar7[7] = puVar23;
            DAT_08048f88 = s__bin_ls_08048050;
            pcVar20 = &DAT_08048058;
            DAT_08048f8c = &DAT_08048058;
            for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
              pcVar20 = pcVar20 + (uint)bVar26 * -2 + 1;
            }
            if (DAT_0804afb1 != '\r') {
              puVar7[6] = 0x8048685;
              FUN_08048b5d();
              _DAT_08048f90 = pcVar20;
              if (*pcVar20 == '-') {
                _DAT_08048f90 = pcVar20 + 4;
              }
            }
            puVar7[7] = 0xb;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar7[8] = 1;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar18 = puVar7 + 10;
          }
          do {
            puVar9 = puVar18;
            puVar9[-1] = 2;
            puVar9[-1] = 0x72;
            pcVar2 = (code *)swi(0x80);
            iVar4 = (*pcVar2)();
            puVar18 = puVar9 + 1;
          } while (iVar4 < 0);
          *puVar9 = 6;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          piVar10 = puVar9 + 2;
          puVar23 = (undefined4 *)0x0;
          puVar9[1] = 0x80486d9;
          iVar4 = FUN_08048b88();
        }
        piVar15 = piVar10;
        if ((short)iVar4 == 0x4f50) goto LAB_080486f2;
LAB_08048794:
        if (iVar4 == 0x56534150) {
          puVar23 = &DAT_08048f78;
          DAT_08048f78 = 2;
          _DAT_08048f7c = 0;
          piVar15[-1] = 6;
          piVar15[-2] = 1;
          piVar15[-3] = 2;
          piVar15[-4] = 1;
          piVar15[-4] = 0x66;
          pcVar2 = (code *)swi(0x80);
          iVar4 = (*pcVar2)();
          puVar12 = piVar15 + 1;
          if (iVar4 < 0) goto LAB_0804878a;
          *piVar15 = 4;
          piVar15[-1] = (int)&DAT_0804804c;
          piVar15[-2] = 2;
          piVar15[-3] = 1;
          piVar15[-4] = iVar4;
          piVar15[-5] = 0xe;
          piVar15[-5] = 0x66;
          pcVar2 = (code *)swi(0x80);
          iVar19 = (*pcVar2)();
          puVar12 = piVar15 + 2;
          if (iVar19 < 0) goto LAB_0804878a;
          piVar15[1] = 0x10;
          *piVar15 = (int)&DAT_08048f78;
          piVar15[-1] = iVar4;
          piVar15[-2] = 2;
          piVar15[-2] = 0x66;
          pcVar2 = (code *)swi(0x80);
          iVar19 = (*pcVar2)();
          puVar12 = piVar15 + 3;
          if (iVar19 < 0) goto LAB_0804878a;
          piVar15[2] = 0x10;
          piVar15[1] = (int)(piVar15 + 2);
          *piVar15 = (int)&DAT_08048f78;
          piVar15[-1] = iVar4;
          piVar15[-2] = 6;
          piVar15[-2] = 0x66;
          pcVar2 = (code *)swi(0x80);
          iVar19 = (*pcVar2)();
          puVar13 = (undefined *)((int)piVar15 + 10);
          *(undefined2 *)((int)piVar15 + 10) = DAT_08048f78._2_2_;
          if (iVar19 < 0) {
LAB_08048788:
            puVar12 = (undefined4 *)(puVar13 + 8);
            goto LAB_0804878a;
          }
          *(undefined4 *)((int)piVar15 + 6) = 1;
          *(int *)((int)piVar15 + 2) = iVar4;
          *(undefined4 *)((int)piVar15 + -2) = 4;
          *(undefined4 *)((int)piVar15 + -2) = 0x66;
          pcVar2 = (code *)swi(0x80);
          uVar27 = (*pcVar2)();
          puVar13 = (undefined *)((int)piVar15 + 0xe);
          if ((int)uVar27 < 0) goto LAB_08048788;
          *(int *)((int)piVar15 + 10) = (int)((ulonglong)uVar27 >> 0x20);
          *(undefined4 **)((int)piVar15 + 6) = &DAT_08048f78;
          *(int *)((int)piVar15 + 2) = unaff_EBP;
          *(undefined4 *)((int)piVar15 + -2) = 6;
          *(undefined4 *)((int)piVar15 + -2) = 0x66;
          pcVar2 = (code *)swi(0x80);
          DAT_08048d71 = iVar4;
          iVar4 = (*pcVar2)();
          puVar13 = (undefined *)((int)piVar15 + 0x12);
          if (iVar4 < 0) goto LAB_08048788;
          *(undefined4 *)((int)piVar15 + 0xe) = 0x8048875;
          FUN_08048b8e();
          puVar25 = &DAT_08048fad;
          do {
            *(undefined4 *)((int)piVar15 + 0xe) = 0x8048883;
            FUN_08048acc();
            puVar24 = (undefined2 *)((int)puVar25 + (uint)bVar26 * -2 + 1);
            *(undefined *)puVar25 = 0x2c;
            puVar25 = puVar24;
          } while (extraout_ECX_01 != 1);
          puVar14 = (undefined4 *)((int)piVar15 + 0x16);
          *(undefined4 *)((int)piVar15 + 0x12) = 0x8048894;
          FUN_08048acc();
          puVar25 = (undefined2 *)((int)puVar24 + (uint)bVar26 * -2 + 1);
          *(undefined *)puVar24 = 0x2c;
          *(undefined4 *)((int)piVar15 + 0x12) = 0x80488a2;
          FUN_08048acc();
          piVar15 = (int *)((int)piVar15 + 0x1a);
          puVar23 = (undefined4 *)(puVar25 + (uint)bVar26 * -2 + 1);
          *puVar25 = 0xa0d;
          *puVar14 = 0x80488bb;
          iVar4 = FUN_08048b7f();
        }
        *(undefined4 **)((int)piVar15 + -4) = puVar23;
        pcVar20 = &DAT_08048d18;
        if ((((short)iVar4 == 0x5954) || (pcVar20 = (char *)0x8048d19, (short)iVar4 == 0x4f4d)) ||
           (pcVar20 = &DAT_08048d1a, puVar16 = (undefined4 *)((int)piVar15 + -4),
           iVar4 == 0x55525453)) {
          pcVar21 = &DAT_08048d1b;
          iVar4 = 4;
          do {
            if (DAT_0804afb2 == *pcVar21) {
              *pcVar20 = DAT_0804afb2;
              break;
            }
            pcVar21 = pcVar21 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          *(undefined4 *)((int)piVar15 + -4) = 0x8048900;
          iVar4 = FUN_08048b88();
          puVar16 = piVar15;
        }
        puVar17 = puVar16;
        if ((short)iVar4 == 0x4443) goto LAB_0804899c;
        puVar16[-1] = iVar4;
        puVar16[-2] = 0x8048910;
        FUN_08048b5d();
        iVar4 = puVar16[-1];
        uVar22 = *puVar16;
        puVar18 = puVar16 + 1;
        puVar23 = puVar16 + 1;
        sVar3 = (short)iVar4;
        if (sVar3 == 0x4b4d) {
          puVar18 = puVar16 + 1;
          if ((_DAT_08048d69 & 2) != 0) {
            *puVar16 = 0x27;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar18 = puVar16 + 2;
          }
          goto LAB_080489f4;
        }
        if (sVar3 == 0x4d52) {
          puVar18 = puVar16 + 1;
          if ((_DAT_08048d69 & 2) != 0) {
            *puVar16 = 0x28;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar18 = puVar16 + 2;
          }
          goto LAB_080489f4;
        }
        if (sVar3 == 0x4544) {
          puVar18 = puVar16 + 1;
          if ((_DAT_08048d69 & 2) != 0) {
            *puVar16 = 10;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar18 = puVar16 + 2;
          }
          goto LAB_080489f4;
        }
        puVar17 = puVar16 + 1;
        if (sVar3 == 0x5743) {
LAB_0804899c:
          *(undefined4 *)((int)puVar17 + -4) = 0xc;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar18 = (undefined4 *)((int)puVar17 + 4);
          goto LAB_080489f4;
        }
        if (iVar4 == 0x455a4953) {
          *puVar16 = uVar22;
          puVar16[-1] = 0x6a;
          pcVar2 = (code *)swi(0x80);
          iVar4 = (*pcVar2)();
          puVar18 = puVar16 + 1;
          if (iVar4 < 0) goto LAB_080489f4;
          *puVar16 = 0x8048972;
          FUN_08048b8e();
          *puVar16 = 0x804897e;
          FUN_08048acc();
          DAT_08048fad = 0xa0d;
          puVar17 = puVar16 + 2;
          puVar16[1] = 0x8048997;
          FUN_08048b7f();
          goto LAB_0804899c;
        }
        if (sVar3 == 0x5355) goto LAB_080489f9;
        if (iVar4 == 0x53534150) goto LAB_08048a06;
        puVar18 = puVar16 + 1;
        if ((sVar3 == 0x5953) || (puVar18 = puVar16 + 1, sVar3 == 0x4f4e)) goto LAB_080489f4;
        puVar23 = puVar16 + 1;
        if (sVar3 == 0x5551) goto LAB_08048a65;
        if (sVar3 != 0x5750) {
          puVar18 = puVar16 + 1;
          if ((iVar4 == 0x524f4241) || (puVar18 = puVar16 + 1, iVar4 == 0x4f4241f2))
          goto LAB_080489f4;
          *puVar16 = 0x8048a65;
          FUN_08048b88();
          puVar23 = puVar16 + 1;
          goto LAB_08048a65;
        }
        *puVar16 = 0x8048a7e;
        FUN_08048b8e();
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar25 = &DAT_08048fad;
        do {
          puVar24 = (undefined2 *)((int)puVar25 + (uint)bVar26 * -2 + 1);
          cVar1 = *(char *)puVar25;
          puVar25 = puVar24;
        } while (cVar1 != '\0');
        *(undefined4 *)((int)puVar24 + -1) = 0xa0d22;
        puVar16[1] = 4;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar23 = puVar16 + 3;
      } while( true );
    }
    iVar4 = 0;
  }
  return iVar4;
LAB_080485ee:
  piVar8[-1] = 3;
  pcVar2 = (code *)swi(0x80);
  iVar4 = (*pcVar2)();
  piVar15 = piVar8 + 1;
  if (iVar4 == 0) goto LAB_080482c1;
  *piVar8 = iVar4;
  piVar8[-1] = 0x804860f;
  iVar4 = FUN_08048358();
  if (iVar4 == 0x524f4241 || iVar4 == 0x4f4241f2) {
    *piVar8 = 0x8048634;
    FUN_08048b8e();
    piVar15 = piVar8 + 1;
    goto LAB_080482c1;
  }
  *piVar8 = 0x8048623;
  FUN_08048b0c();
  piVar8 = piVar8 + 1;
  goto LAB_080485ee;
LAB_080486f2:
  do {
    piVar10[-1] = 0x80486fa;
    FUN_08048ab6();
  } while (extraout_ECX_00 != 1);
  piVar10[-1] = 0;
  DAT_08048f84 = CONCAT22(CONCAT11((char)*(undefined2 *)(piVar10 + -1),
                                   (char)((ushort)*(undefined2 *)(piVar10 + -1) >> 8)),
                          CONCAT11((char)*(undefined2 *)((int)piVar10 + -2),
                                   (char)((ushort)*(undefined2 *)((int)piVar10 + -2) >> 8)));
  piVar10[-1] = 0x8048717;
  FUN_08048ab6();
  piVar10[-1] = 0x804871f;
  FUN_08048ab6();
  DAT_08048f80 = 2;
  piVar10[-1] = 6;
  piVar10[-2] = 1;
  piVar10[-3] = 2;
  piVar10[-4] = 1;
  piVar10[-4] = 0x66;
  pcVar2 = (code *)swi(0x80);
  iVar4 = (*pcVar2)();
  piVar11 = piVar10 + 1;
  if (-1 < iVar4) {
    *piVar10 = iVar4;
    piVar10[-1] = 0x10;
    piVar10[-2] = (int)&DAT_08048f80;
    piVar10[-3] = iVar4;
    piVar10[-4] = 3;
    piVar10[-4] = 0x66;
    pcVar2 = (code *)swi(0x80);
    iVar4 = (*pcVar2)();
    piVar11 = piVar10 + 1;
    if (-1 < iVar4) {
      piVar11 = piVar10 + 2;
      piVar10[1] = 0x8048762;
      FUN_08048b88();
    }
  }
  piVar11[-1] = 0x804876c;
  FUN_08048b8e();
  piVar11[-1] = 2;
  piVar11[-2] = unaff_EBP;
  piVar11[-3] = 0xd;
  piVar11[-3] = 0x66;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  *piVar11 = 6;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  piVar15 = piVar11 + 2;
  goto LAB_080482c1;
LAB_0804878a:
  *(undefined4 *)((int)puVar12 + -4) = 0x8048794;
  iVar4 = FUN_08048b88();
  piVar15 = puVar12;
  goto LAB_08048794;
LAB_08048a65:
  *(undefined4 *)((int)puVar23 + -4) = 0x8048a6f;
  FUN_08048b8e();
  piVar15 = puVar23;
  goto LAB_080482c1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __regparm3 FUN_080483fc(int param_1)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  short sVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined *puVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  int unaff_EBP;
  char *pcVar19;
  char *pcVar20;
  undefined4 unaff_EDI;
  undefined4 *puVar21;
  undefined2 *puVar22;
  undefined2 *puVar23;
  byte bVar24;
  undefined8 uVar25;
  
  bVar24 = 0;
  do {
    if (DAT_08048d68 == '\0') {
      puVar21 = (undefined4 *)register0x00000010;
      if (param_1 == 0x52455355) goto LAB_080489f9;
      if (param_1 == 0x53534150) {
LAB_08048a06:
        *(undefined4 *)((int)register0x00000010 + -4) = 0x8048a0b;
        FUN_08048b5d();
        *(undefined4 *)((int)register0x00000010 + -4) = 0x8048a10;
        FUN_08048c29();
        puVar17 = (undefined4 *)register0x00000010;
LAB_080489f4:
        do {
          *(undefined4 *)((int)puVar17 + -4) = 0x80489f9;
          FUN_08048b88();
          puVar21 = puVar17;
LAB_080489f9:
          *(undefined4 *)((int)puVar21 + -4) = 0x80489fe;
          FUN_08048b5d();
          *(undefined4 *)((int)puVar21 + -4) = 0x8048a03;
          FUN_08048bd4();
          puVar17 = puVar21;
        } while( true );
      }
      if (param_1 != 0x54495551) {
        puVar17 = (undefined4 *)register0x00000010;
        if ((param_1 != 0x54535953) && (param_1 != 0x504f4f4e)) {
          *(undefined4 *)((int)register0x00000010 + -4) = 0x8048446;
          param_1 = FUN_08048b88();
          goto LAB_08048446;
        }
        goto LAB_080489f4;
      }
LAB_08048a65:
      *(undefined4 *)((int)puVar21 + -4) = 0x8048a6f;
      FUN_08048b8e();
      piVar3 = puVar21;
    }
    else {
LAB_08048446:
      puVar8 = (undefined4 *)((int)register0x00000010 + -4);
      *(undefined4 *)((int)register0x00000010 + -4) = unaff_EDI;
      DAT_08048fac = 1;
      if (param_1 == 0x52544552) {
LAB_08048473:
        *(undefined4 *)((int)register0x00000010 + -8) = 0x8048478;
        FUN_08048b5d();
        *(undefined4 *)((int)register0x00000010 + -4) =
             *(undefined4 *)((int)register0x00000010 + -4);
        *(undefined4 *)((int)register0x00000010 + -8) = 5;
        pcVar2 = (code *)swi(0x80);
        iVar5 = (*pcVar2)();
        puVar21 = (undefined4 *)register0x00000010;
        if (-1 < iVar5) {
          *(undefined4 *)((int)register0x00000010 + -4) = 0x80484af;
          FUN_08048b8e();
          if (((DAT_08048fac & 2) == 0) && (DAT_08048d75 != 0)) {
            *(undefined4 *)((int)register0x00000010 + -4) = 0x13;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4);
          }
          while( true ) {
            *(undefined4 *)((int)register0x00000010 + -4) = 0x80484d6;
            iVar5 = FUN_08048358();
            puVar21 = (undefined4 *)register0x00000010;
            if (iVar5 == 0x524f4241 || iVar5 == 0x4f4241f2) goto LAB_08048533;
            *(undefined4 *)((int)register0x00000010 + -4) = 3;
            pcVar2 = (code *)swi(0x80);
            iVar5 = (*pcVar2)();
            puVar21 = (undefined4 *)((int)register0x00000010 + 4);
            if (iVar5 == 0) break;
            if (DAT_08048d18 == 'A') {
              *(undefined4 *)register0x00000010 = 0x8048507;
              FUN_08048b0c();
              register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4);
            }
            else {
              *(undefined4 *)register0x00000010 = 4;
              pcVar2 = (code *)swi(0x80);
              (*pcVar2)();
              register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 8);
            }
          }
          do {
            puVar21[-1] = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            *puVar21 = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar21[1] = 0x8048533;
            FUN_08048b88();
            puVar21 = puVar21 + 2;
LAB_08048533:
            *(undefined4 *)((int)puVar21 + -4) = 0x804853d;
            FUN_08048b8e();
          } while( true );
        }
LAB_0804853f:
        *puVar21 = 6;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar8 = puVar21 + 2;
        puVar21[1] = 0x8048553;
        param_1 = FUN_08048b88();
      }
      else {
        DAT_08048fac = 2;
        if (param_1 == 0x524f5453) {
          puVar21 = (undefined4 *)((int)register0x00000010 + -4);
          if ((_DAT_08048d69 & 1) != 0) goto LAB_08048473;
          goto LAB_0804853f;
        }
      }
      puVar21 = (undefined4 *)*puVar8;
      piVar10 = puVar8 + 1;
      DAT_08048d75 = 0;
      if (param_1 == 0x54534552) {
        *puVar8 = 0x8048572;
        DAT_08048d75 = FUN_08048af6();
        *puVar8 = 0x8048581;
        param_1 = FUN_08048b88();
      }
      DAT_08048fac = 3;
      if ((short)param_1 == 0x494c) {
        if (puVar21 == (undefined4 *)0x0) {
          *puVar8 = 0x80485a0;
          FUN_08048358();
        }
        *puVar8 = 0x6a;
        pcVar2 = (code *)swi(0x80);
        iVar5 = (*pcVar2)();
        puVar17 = puVar8 + 2;
        if (iVar5 < 0) goto LAB_080489f4;
        puVar8[1] = 0x80485c3;
        FUN_08048b8e();
        puVar8[1] = 2;
        pcVar2 = (code *)swi(0x80);
        iVar5 = (*pcVar2)();
        puVar17 = puVar8 + 3;
        if (iVar5 == 0) {
          puVar8[2] = 0x2a;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar8[3] = 2;
          pcVar2 = (code *)swi(0x80);
          iVar5 = (*pcVar2)();
          if (iVar5 != 0) {
            puVar8[4] = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            piVar15 = puVar8 + 6;
            while( true ) {
              piVar15[-1] = 3;
              pcVar2 = (code *)swi(0x80);
              iVar5 = (*pcVar2)();
              piVar3 = piVar15 + 1;
              if (iVar5 == 0) break;
              *piVar15 = iVar5;
              piVar15[-1] = 0x804860f;
              iVar5 = FUN_08048358();
              if (iVar5 == 0x524f4241 || iVar5 == 0x4f4241f2) {
                *piVar15 = 0x8048634;
                FUN_08048b8e();
                piVar3 = piVar15 + 1;
                break;
              }
              *piVar15 = 0x8048623;
              FUN_08048b0c();
              piVar15 = piVar15 + 1;
            }
            goto LAB_080482c1;
          }
          puVar8[4] = 6;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar8[5] = 6;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar8[6] = 1;
          puVar8[6] = 0x3f;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar8[7] = puVar21;
          DAT_08048f88 = s__bin_ls_08048050;
          pcVar19 = &DAT_08048058;
          DAT_08048f8c = &DAT_08048058;
          for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
            pcVar19 = pcVar19 + (uint)bVar24 * -2 + 1;
          }
          if (DAT_0804afb1 != '\r') {
            puVar8[6] = 0x8048685;
            FUN_08048b5d();
            _DAT_08048f90 = pcVar19;
            if (*pcVar19 == '-') {
              _DAT_08048f90 = pcVar19 + 4;
            }
          }
          puVar8[7] = 0xb;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar8[8] = 1;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar17 = puVar8 + 10;
        }
        do {
          puVar9 = puVar17;
          puVar9[-1] = 2;
          puVar9[-1] = 0x72;
          pcVar2 = (code *)swi(0x80);
          iVar5 = (*pcVar2)();
          puVar17 = puVar9 + 1;
        } while (iVar5 < 0);
        *puVar9 = 6;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        piVar10 = puVar9 + 2;
        puVar21 = (undefined4 *)0x0;
        puVar9[1] = 0x80486d9;
        param_1 = FUN_08048b88();
      }
      piVar15 = piVar10;
      if ((short)param_1 != 0x4f50) {
LAB_08048794:
        if (param_1 == 0x56534150) {
          puVar21 = &DAT_08048f78;
          DAT_08048f78 = 2;
          _DAT_08048f7c = 0;
          piVar15[-1] = 6;
          piVar15[-2] = 1;
          piVar15[-3] = 2;
          piVar15[-4] = 1;
          piVar15[-4] = 0x66;
          pcVar2 = (code *)swi(0x80);
          iVar5 = (*pcVar2)();
          puVar12 = piVar15 + 1;
          if (iVar5 < 0) break;
          *piVar15 = 4;
          piVar15[-1] = (int)&DAT_0804804c;
          piVar15[-2] = 2;
          piVar15[-3] = 1;
          piVar15[-4] = iVar5;
          piVar15[-5] = 0xe;
          piVar15[-5] = 0x66;
          pcVar2 = (code *)swi(0x80);
          iVar18 = (*pcVar2)();
          puVar12 = piVar15 + 2;
          if (iVar18 < 0) break;
          piVar15[1] = 0x10;
          *piVar15 = (int)&DAT_08048f78;
          piVar15[-1] = iVar5;
          piVar15[-2] = 2;
          piVar15[-2] = 0x66;
          pcVar2 = (code *)swi(0x80);
          iVar18 = (*pcVar2)();
          puVar12 = piVar15 + 3;
          if (iVar18 < 0) break;
          piVar15[2] = 0x10;
          piVar15[1] = (int)(piVar15 + 2);
          *piVar15 = (int)&DAT_08048f78;
          piVar15[-1] = iVar5;
          piVar15[-2] = 6;
          piVar15[-2] = 0x66;
          pcVar2 = (code *)swi(0x80);
          iVar18 = (*pcVar2)();
          puVar13 = (undefined *)((int)piVar15 + 10);
          *(undefined2 *)((int)piVar15 + 10) = DAT_08048f78._2_2_;
          if (iVar18 < 0) {
LAB_08048788:
            puVar12 = (undefined4 *)(puVar13 + 8);
            break;
          }
          *(undefined4 *)((int)piVar15 + 6) = 1;
          *(int *)((int)piVar15 + 2) = iVar5;
          *(undefined4 *)((int)piVar15 + -2) = 4;
          *(undefined4 *)((int)piVar15 + -2) = 0x66;
          pcVar2 = (code *)swi(0x80);
          uVar25 = (*pcVar2)();
          puVar13 = (undefined *)((int)piVar15 + 0xe);
          if ((int)uVar25 < 0) goto LAB_08048788;
          *(int *)((int)piVar15 + 10) = (int)((ulonglong)uVar25 >> 0x20);
          *(undefined4 **)((int)piVar15 + 6) = &DAT_08048f78;
          *(int *)((int)piVar15 + 2) = unaff_EBP;
          *(undefined4 *)((int)piVar15 + -2) = 6;
          *(undefined4 *)((int)piVar15 + -2) = 0x66;
          pcVar2 = (code *)swi(0x80);
          DAT_08048d71 = iVar5;
          iVar5 = (*pcVar2)();
          puVar13 = (undefined *)((int)piVar15 + 0x12);
          if (iVar5 < 0) goto LAB_08048788;
          *(undefined4 *)((int)piVar15 + 0xe) = 0x8048875;
          FUN_08048b8e();
          puVar23 = &DAT_08048fad;
          do {
            *(undefined4 *)((int)piVar15 + 0xe) = 0x8048883;
            FUN_08048acc();
            puVar22 = (undefined2 *)((int)puVar23 + (uint)bVar24 * -2 + 1);
            *(undefined *)puVar23 = 0x2c;
            puVar23 = puVar22;
          } while (extraout_ECX_00 != 1);
          puVar14 = (undefined4 *)((int)piVar15 + 0x16);
          *(undefined4 *)((int)piVar15 + 0x12) = 0x8048894;
          FUN_08048acc();
          puVar23 = (undefined2 *)((int)puVar22 + (uint)bVar24 * -2 + 1);
          *(undefined *)puVar22 = 0x2c;
          *(undefined4 *)((int)piVar15 + 0x12) = 0x80488a2;
          FUN_08048acc();
          piVar15 = (int *)((int)piVar15 + 0x1a);
          puVar21 = (undefined4 *)(puVar23 + (uint)bVar24 * -2 + 1);
          *puVar23 = 0xa0d;
          *puVar14 = 0x80488bb;
          param_1 = FUN_08048b7f();
        }
        *(undefined4 **)((int)piVar15 + -4) = puVar21;
        pcVar19 = &DAT_08048d18;
        if ((((short)param_1 == 0x5954) || (pcVar19 = (char *)0x8048d19, (short)param_1 == 0x4f4d))
           || (pcVar19 = &DAT_08048d1a, puVar16 = (undefined4 *)((int)piVar15 + -4),
              param_1 == 0x55525453)) {
          pcVar20 = &DAT_08048d1b;
          iVar5 = 4;
          do {
            if (DAT_0804afb2 == *pcVar20) {
              *pcVar19 = DAT_0804afb2;
              break;
            }
            pcVar20 = pcVar20 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          *(undefined4 *)((int)piVar15 + -4) = 0x8048900;
          param_1 = FUN_08048b88();
          puVar16 = piVar15;
        }
        puVar17 = puVar16;
        if ((short)param_1 == 0x4443) goto LAB_0804899c;
        puVar16[-1] = param_1;
        puVar16[-2] = 0x8048910;
        FUN_08048b5d();
        iVar5 = puVar16[-1];
        unaff_EDI = *puVar16;
        puVar21 = puVar16 + 1;
        register0x00000010 = (BADSPACEBASE *)(puVar16 + 1);
        puVar17 = puVar16 + 1;
        sVar4 = (short)iVar5;
        if (sVar4 == 0x4b4d) {
          if ((_DAT_08048d69 & 2) != 0) {
            *puVar16 = 0x27;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar17 = puVar16 + 2;
          }
          goto LAB_080489f4;
        }
        if (sVar4 == 0x4d52) {
          puVar17 = puVar16 + 1;
          if ((_DAT_08048d69 & 2) != 0) {
            *puVar16 = 0x28;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar17 = puVar16 + 2;
          }
          goto LAB_080489f4;
        }
        if (sVar4 == 0x4544) {
          puVar17 = puVar16 + 1;
          if ((_DAT_08048d69 & 2) != 0) {
            *puVar16 = 10;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar17 = puVar16 + 2;
          }
          goto LAB_080489f4;
        }
        puVar17 = puVar16 + 1;
        if (sVar4 == 0x5743) {
LAB_0804899c:
          *(undefined4 *)((int)puVar17 + -4) = 0xc;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar17 = (undefined4 *)((int)puVar17 + 4);
          goto LAB_080489f4;
        }
        if (iVar5 == 0x455a4953) {
          *puVar16 = unaff_EDI;
          puVar16[-1] = 0x6a;
          pcVar2 = (code *)swi(0x80);
          iVar5 = (*pcVar2)();
          puVar17 = puVar16 + 1;
          if (iVar5 < 0) goto LAB_080489f4;
          *puVar16 = 0x8048972;
          FUN_08048b8e();
          *puVar16 = 0x804897e;
          FUN_08048acc();
          DAT_08048fad = 0xa0d;
          puVar17 = puVar16 + 2;
          puVar16[1] = 0x8048997;
          FUN_08048b7f();
          goto LAB_0804899c;
        }
        if (sVar4 == 0x5355) goto LAB_080489f9;
        if (iVar5 == 0x53534150) goto LAB_08048a06;
        puVar17 = puVar16 + 1;
        if ((sVar4 == 0x5953) || (puVar17 = puVar16 + 1, sVar4 == 0x4f4e)) goto LAB_080489f4;
        puVar21 = puVar16 + 1;
        if (sVar4 == 0x5551) goto LAB_08048a65;
        if (sVar4 != 0x5750) {
          puVar17 = puVar16 + 1;
          if ((iVar5 == 0x524f4241) || (puVar17 = puVar16 + 1, iVar5 == 0x4f4241f2))
          goto LAB_080489f4;
          *puVar16 = 0x8048a65;
          FUN_08048b88();
          puVar21 = puVar16 + 1;
          goto LAB_08048a65;
        }
        *puVar16 = 0x8048a7e;
        FUN_08048b8e();
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar23 = &DAT_08048fad;
        do {
          puVar22 = (undefined2 *)((int)puVar23 + (uint)bVar24 * -2 + 1);
          cVar1 = *(char *)puVar23;
          puVar23 = puVar22;
        } while (cVar1 != '\0');
        *(undefined4 *)((int)puVar22 + -1) = 0xa0d22;
        puVar16[1] = 4;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        register0x00000010 = (BADSPACEBASE *)(puVar16 + 3);
        goto LAB_08048345;
      }
      do {
        piVar10[-1] = 0x80486fa;
        FUN_08048ab6();
      } while (extraout_ECX != 1);
      piVar10[-1] = 0;
      DAT_08048f84 = CONCAT22(CONCAT11((char)*(undefined2 *)(piVar10 + -1),
                                       (char)((ushort)*(undefined2 *)(piVar10 + -1) >> 8)),
                              CONCAT11((char)*(undefined2 *)((int)piVar10 + -2),
                                       (char)((ushort)*(undefined2 *)((int)piVar10 + -2) >> 8)));
      piVar10[-1] = 0x8048717;
      FUN_08048ab6();
      piVar10[-1] = 0x804871f;
      FUN_08048ab6();
      DAT_08048f80 = 2;
      piVar10[-1] = 6;
      piVar10[-2] = 1;
      piVar10[-3] = 2;
      piVar10[-4] = 1;
      piVar10[-4] = 0x66;
      pcVar2 = (code *)swi(0x80);
      iVar5 = (*pcVar2)();
      piVar11 = piVar10 + 1;
      if (-1 < iVar5) {
        *piVar10 = iVar5;
        piVar10[-1] = 0x10;
        piVar10[-2] = (int)&DAT_08048f80;
        piVar10[-3] = iVar5;
        piVar10[-4] = 3;
        piVar10[-4] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar5 = (*pcVar2)();
        piVar11 = piVar10 + 1;
        if (-1 < iVar5) {
          piVar11 = piVar10 + 2;
          piVar10[1] = 0x8048762;
          FUN_08048b88();
        }
      }
      piVar11[-1] = 0x804876c;
      FUN_08048b8e();
      piVar11[-1] = 2;
      piVar11[-2] = unaff_EBP;
      piVar11[-3] = 0xd;
      piVar11[-3] = 0x66;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      *piVar11 = 6;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      piVar3 = piVar11 + 2;
    }
LAB_080482c1:
    do {
      do {
        do {
          piVar6 = piVar3;
          piVar6[-1] = 1;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          *piVar6 = 0x10;
          piVar6[-1] = (int)&DAT_08048f78;
          piVar6[-2] = unaff_EBP;
          piVar6[-3] = 2;
          piVar6[-3] = 0x66;
          pcVar2 = (code *)swi(0x80);
          iVar5 = (*pcVar2)();
          piVar3 = piVar6 + 2;
        } while (iVar5 != 0);
        piVar6[1] = 5;
        *piVar6 = unaff_EBP;
        piVar6[-1] = 4;
        piVar6[-1] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar5 = (*pcVar2)();
        piVar3 = piVar6 + 3;
      } while (iVar5 != 0);
      piVar6[2] = unaff_EBP;
      piVar6[1] = 0x80482f9;
      FUN_08048ca2();
      iVar18 = piVar6[2];
      piVar6[2] = 2;
      pcVar2 = (code *)swi(0x80);
      iVar5 = (*pcVar2)();
      piVar15 = piVar6 + 4;
      piVar3 = piVar6 + 4;
      unaff_EBP = iVar18;
    } while (iVar5 != 0);
    do {
      do {
        puVar7 = piVar15;
        DAT_08048e79 = 0x10;
        puVar7[-1] = &DAT_08048e79;
        puVar7[-2] = &DAT_08048d7a;
        puVar7[-3] = iVar18;
        puVar7[-4] = 5;
        puVar7[-4] = 0x66;
        pcVar2 = (code *)swi(0x80);
        unaff_EBP = (*pcVar2)();
        piVar15 = puVar7 + 1;
      } while (unaff_EBP < 0);
      *puVar7 = 2;
      pcVar2 = (code *)swi(0x80);
      iVar5 = (*pcVar2)();
      register0x00000010 = (BADSPACEBASE *)(puVar7 + 2);
      piVar15 = puVar7 + 2;
    } while (iVar5 != 0);
    unaff_EDI = 0;
    puVar7[1] = 0x8048345;
    FUN_08048b8e();
LAB_08048345:
    do {
      *(undefined4 *)((int)register0x00000010 + -4) = 0x804834f;
      param_1 = FUN_08048358();
    } while (param_1 == 0);
  } while( true );
  *(undefined4 *)((int)puVar12 + -4) = 0x8048794;
  param_1 = FUN_08048b88();
  piVar15 = puVar12;
  goto LAB_08048794;
}



void FUN_08048ab6(void)

{
  byte bVar1;
  byte *unaff_ESI;
  
  do {
    bVar1 = *unaff_ESI;
    unaff_ESI = unaff_ESI + 1;
  } while (0x2f < bVar1);
  return;
}



undefined8 __regparm3 FUN_08048acc(int param_1,int param_2,undefined4 param_3)

{
  int extraout_EDX;
  char *unaff_EDI;
  int iVar1;
  
  iVar1 = param_2;
  if (param_1 == 0) {
    if (param_2 != 0) goto LAB_08048af1;
  }
  else {
    FUN_08048acc(param_2,param_3);
    param_2 = extraout_EDX;
  }
  *unaff_EDI = (char)param_2 + '0';
  param_2 = iVar1;
LAB_08048af1:
  return CONCAT44(param_2,param_1);
}



int FUN_08048af6(void)

{
  int iVar1;
  byte *unaff_ESI;
  
  iVar1 = 0;
  while( true ) {
    if (*unaff_ESI < 0x30) break;
    iVar1 = iVar1 * 10 + (uint)(byte)(*unaff_ESI - 0x30);
    unaff_ESI = unaff_ESI + 1;
  }
  return iVar1;
}



undefined8 __regparm3 FUN_08048b0c(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  
  puVar5 = &DAT_08048fad;
  iVar4 = param_1;
  puVar6 = puVar5;
code_r0x08048b1b:
  puVar7 = puVar5;
  if (iVar4 != 0) goto code_r0x08048b1b;
  goto code_r0x08048b1d;
code_r0x08048b1b:
  iVar4 = iVar4 + -1;
  puVar7 = (undefined2 *)((int)puVar5 + 1);
  cVar1 = *(char *)puVar5;
  puVar5 = puVar7;
  if (cVar1 == '\n') {
code_r0x08048b1d:
    if (*(char *)((int)puVar6 + (int)puVar7 + (-1 - (int)puVar6)) != '\n') {
      FUN_08048b78();
LAB_08048b2b:
      return CONCAT44(param_2,param_1);
    }
    iVar2 = 1;
    if (DAT_08048fac == '\x02') {
      iVar2 = 2;
    }
    FUN_08048b78();
    iVar3 = FUN_08048b8e();
    if (iVar4 == 0) goto LAB_08048b2b;
    puVar5 = (undefined2 *)((int)puVar6 + (int)puVar7 + iVar3 + (-iVar2 - (int)puVar6));
    puVar6 = puVar5;
  }
  goto code_r0x08048b1b;
}



void FUN_08048b5d(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar2 = 0x400;
  puVar4 = &DAT_0804afad;
  do {
    puVar3 = puVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    puVar3 = (undefined4 *)((int)puVar4 + 1);
    cVar1 = *(char *)puVar4;
    puVar4 = puVar3;
  } while (cVar1 != ' ');
  do {
    puVar4 = puVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    puVar4 = (undefined4 *)((int)puVar3 + 1);
    cVar1 = *(char *)puVar3;
    puVar3 = puVar4;
  } while (cVar1 != '\r');
  *(undefined *)((int)puVar4 + -1) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_08048b78(void)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  short sVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 in_ECX;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined *puVar21;
  char *pcVar22;
  char *pcVar23;
  undefined4 unaff_ESI;
  undefined4 *puVar24;
  undefined2 *puVar25;
  undefined2 *puVar26;
  byte bVar27;
  undefined8 uVar28;
  undefined4 unaff_retaddr;
  
  bVar27 = 0;
  pcVar2 = (code *)swi(0x80);
  puVar5 = (undefined *)register0x00000010;
  (*pcVar2)();
  cVar1 = DAT_08048d79;
  DAT_08048d79 = DAT_08048d79 + -1;
  if (DAT_08048d79 != '\0') {
    DAT_08048d79 = cVar1;
    return CONCAT44(in_ECX,unaff_retaddr);
  }
  puVar24 = (undefined4 *)&stack0x0000000c;
  do {
    while( true ) {
      do {
        *(undefined4 *)((int)puVar24 + -4) = 0x804834f;
        iVar6 = FUN_08048358();
      } while (iVar6 == 0);
      if (DAT_08048d68 == '\0') break;
LAB_08048446:
      puVar10 = (undefined4 *)((int)puVar24 + -4);
      *(undefined4 *)((int)puVar24 + -4) = unaff_ESI;
      DAT_08048fac = 1;
      if (iVar6 == 0x52544552) {
LAB_08048473:
        *(undefined4 *)((int)puVar24 + -8) = 0x8048478;
        FUN_08048b5d();
        *(undefined4 *)((int)puVar24 + -4) = *(undefined4 *)((int)puVar24 + -4);
        *(undefined4 *)((int)puVar24 + -8) = 5;
        pcVar2 = (code *)swi(0x80);
        iVar6 = (*pcVar2)();
        puVar20 = puVar24;
        if (-1 < iVar6) {
          *(undefined4 *)((int)puVar24 + -4) = 0x80484af;
          FUN_08048b8e();
          if (((DAT_08048fac & 2) == 0) && (DAT_08048d75 != 0)) {
            *(undefined4 *)((int)puVar24 + -4) = 0x13;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar24 = (undefined4 *)((int)puVar24 + 4);
          }
          while( true ) {
            puVar24[-1] = 0x80484d6;
            iVar6 = FUN_08048358();
            puVar20 = puVar24;
            if (iVar6 == 0x524f4241 || iVar6 == 0x4f4241f2) goto LAB_08048533;
            puVar24[-1] = 3;
            pcVar2 = (code *)swi(0x80);
            iVar6 = (*pcVar2)();
            puVar20 = puVar24 + 1;
            if (iVar6 == 0) break;
            if (DAT_08048d18 == 'A') {
              *puVar24 = 0x8048507;
              FUN_08048b0c();
              puVar24 = puVar24 + 1;
            }
            else {
              *puVar24 = 4;
              pcVar2 = (code *)swi(0x80);
              (*pcVar2)();
              puVar24 = puVar24 + 2;
            }
          }
          do {
            puVar20[-1] = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            *puVar20 = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar20[1] = 0x8048533;
            FUN_08048b88();
            puVar20 = puVar20 + 2;
LAB_08048533:
            *(undefined4 *)((int)puVar20 + -4) = 0x804853d;
            FUN_08048b8e();
          } while( true );
        }
LAB_0804853f:
        *puVar20 = 6;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar10 = puVar20 + 2;
        puVar20[1] = 0x8048553;
        iVar6 = FUN_08048b88();
      }
      else {
        DAT_08048fac = 2;
        if (iVar6 == 0x524f5453) {
          puVar20 = (undefined4 *)((int)puVar24 + -4);
          if ((_DAT_08048d69 & 1) != 0) goto LAB_08048473;
          goto LAB_0804853f;
        }
      }
      puVar24 = (undefined4 *)*puVar10;
      piVar12 = puVar10 + 1;
      DAT_08048d75 = 0;
      if (iVar6 == 0x54534552) {
        *puVar10 = 0x8048572;
        DAT_08048d75 = FUN_08048af6();
        *puVar10 = 0x8048581;
        iVar6 = FUN_08048b88();
      }
      DAT_08048fac = 3;
      if ((short)iVar6 == 0x494c) {
        if (puVar24 == (undefined4 *)0x0) {
          *puVar10 = 0x80485a0;
          FUN_08048358();
        }
        *puVar10 = 0x6a;
        pcVar2 = (code *)swi(0x80);
        iVar6 = (*pcVar2)();
        puVar20 = puVar10 + 2;
        if (-1 < iVar6) {
          puVar10[1] = 0x80485c3;
          FUN_08048b8e();
          puVar10[1] = 2;
          pcVar2 = (code *)swi(0x80);
          iVar6 = (*pcVar2)();
          puVar20 = puVar10 + 3;
          if (iVar6 != 0) {
LAB_080486ae:
            do {
              puVar11 = puVar20;
              puVar11[-1] = 2;
              puVar11[-1] = 0x72;
              pcVar2 = (code *)swi(0x80);
              iVar6 = (*pcVar2)();
              puVar20 = puVar11 + 1;
            } while (iVar6 < 0);
            *puVar11 = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            piVar12 = puVar11 + 2;
            puVar24 = (undefined4 *)0x0;
            puVar11[1] = 0x80486d9;
            iVar6 = FUN_08048b88();
            goto LAB_080486d9;
          }
          puVar10[2] = 0x2a;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar10[3] = 2;
          pcVar2 = (code *)swi(0x80);
          iVar6 = (*pcVar2)();
          if (iVar6 == 0) {
            puVar10[4] = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar10[5] = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar10[6] = 1;
            puVar10[6] = 0x3f;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar10[7] = puVar24;
            DAT_08048f88 = s__bin_ls_08048050;
            pcVar22 = &DAT_08048058;
            DAT_08048f8c = &DAT_08048058;
            for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
              pcVar22 = pcVar22 + (uint)bVar27 * -2 + 1;
            }
            if (DAT_0804afb1 != '\r') {
              puVar10[6] = 0x8048685;
              FUN_08048b5d();
              _DAT_08048f90 = pcVar22;
              if (*pcVar22 == '-') {
                _DAT_08048f90 = pcVar22 + 4;
              }
            }
            puVar10[7] = 0xb;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar10[8] = 1;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar20 = puVar10 + 10;
            goto LAB_080486ae;
          }
          puVar10[4] = 6;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          piVar17 = puVar10 + 6;
          while( true ) {
            piVar17[-1] = 3;
            pcVar2 = (code *)swi(0x80);
            iVar6 = (*pcVar2)();
            piVar3 = piVar17 + 1;
            if (iVar6 == 0) break;
            *piVar17 = iVar6;
            piVar17[-1] = 0x804860f;
            iVar6 = FUN_08048358();
            if (iVar6 == 0x524f4241 || iVar6 == 0x4f4241f2) {
              *piVar17 = 0x8048634;
              FUN_08048b8e();
              piVar3 = piVar17 + 1;
              break;
            }
            *piVar17 = 0x8048623;
            FUN_08048b0c();
            piVar17 = piVar17 + 1;
          }
          goto LAB_080482c1;
        }
        goto LAB_080489f4;
      }
LAB_080486d9:
      piVar17 = piVar12;
      if ((short)iVar6 == 0x4f50) {
        do {
          piVar12[-1] = 0x80486fa;
          FUN_08048ab6();
        } while (extraout_ECX != 1);
        piVar12[-1] = 0;
        DAT_08048f84 = CONCAT22(CONCAT11((char)*(undefined2 *)(piVar12 + -1),
                                         (char)((ushort)*(undefined2 *)(piVar12 + -1) >> 8)),
                                CONCAT11((char)*(undefined2 *)((int)piVar12 + -2),
                                         (char)((ushort)*(undefined2 *)((int)piVar12 + -2) >> 8)));
        piVar12[-1] = 0x8048717;
        FUN_08048ab6();
        piVar12[-1] = 0x804871f;
        FUN_08048ab6();
        DAT_08048f80 = 2;
        piVar12[-1] = 6;
        piVar12[-2] = 1;
        piVar12[-3] = 2;
        piVar12[-4] = 1;
        piVar12[-4] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar6 = (*pcVar2)();
        piVar13 = piVar12 + 1;
        if (-1 < iVar6) {
          *piVar12 = iVar6;
          piVar12[-1] = 0x10;
          piVar12[-2] = (int)&DAT_08048f80;
          piVar12[-3] = iVar6;
          piVar12[-4] = 3;
          piVar12[-4] = 0x66;
          pcVar2 = (code *)swi(0x80);
          iVar6 = (*pcVar2)();
          piVar13 = piVar12 + 1;
          if (-1 < iVar6) {
            piVar13 = piVar12 + 2;
            piVar12[1] = 0x8048762;
            FUN_08048b88();
          }
        }
        piVar13[-1] = 0x804876c;
        FUN_08048b8e();
        piVar13[-1] = 2;
        piVar13[-2] = (int)puVar5;
        piVar13[-3] = 0xd;
        piVar13[-3] = 0x66;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        *piVar13 = 6;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        piVar3 = piVar13 + 2;
        goto LAB_080482c1;
      }
LAB_08048794:
      if (iVar6 == 0x56534150) {
        puVar24 = &DAT_08048f78;
        DAT_08048f78 = 2;
        _DAT_08048f7c = 0;
        piVar17[-1] = 6;
        piVar17[-2] = 1;
        piVar17[-3] = 2;
        piVar17[-4] = 1;
        piVar17[-4] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar6 = (*pcVar2)();
        puVar14 = piVar17 + 1;
        if (iVar6 < 0) goto LAB_0804878a;
        *piVar17 = 4;
        piVar17[-1] = (int)&DAT_0804804c;
        piVar17[-2] = 2;
        piVar17[-3] = 1;
        piVar17[-4] = iVar6;
        piVar17[-5] = 0xe;
        piVar17[-5] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar7 = (*pcVar2)();
        puVar14 = piVar17 + 2;
        if (iVar7 < 0) goto LAB_0804878a;
        piVar17[1] = 0x10;
        *piVar17 = (int)&DAT_08048f78;
        piVar17[-1] = iVar6;
        piVar17[-2] = 2;
        piVar17[-2] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar7 = (*pcVar2)();
        puVar14 = piVar17 + 3;
        if (iVar7 < 0) goto LAB_0804878a;
        piVar17[2] = 0x10;
        piVar17[1] = (int)(piVar17 + 2);
        *piVar17 = (int)&DAT_08048f78;
        piVar17[-1] = iVar6;
        piVar17[-2] = 6;
        piVar17[-2] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar7 = (*pcVar2)();
        puVar15 = (undefined *)((int)piVar17 + 10);
        *(undefined2 *)((int)piVar17 + 10) = DAT_08048f78._2_2_;
        if (iVar7 < 0) {
LAB_08048788:
          puVar14 = (undefined4 *)(puVar15 + 8);
          goto LAB_0804878a;
        }
        *(undefined4 *)((int)piVar17 + 6) = 1;
        *(int *)((int)piVar17 + 2) = iVar6;
        *(undefined4 *)((int)piVar17 + -2) = 4;
        *(undefined4 *)((int)piVar17 + -2) = 0x66;
        pcVar2 = (code *)swi(0x80);
        uVar28 = (*pcVar2)();
        puVar15 = (undefined *)((int)piVar17 + 0xe);
        if ((int)uVar28 < 0) goto LAB_08048788;
        *(int *)((int)piVar17 + 10) = (int)((ulonglong)uVar28 >> 0x20);
        *(undefined4 **)((int)piVar17 + 6) = &DAT_08048f78;
        *(undefined **)((int)piVar17 + 2) = puVar5;
        *(undefined4 *)((int)piVar17 + -2) = 6;
        *(undefined4 *)((int)piVar17 + -2) = 0x66;
        pcVar2 = (code *)swi(0x80);
        DAT_08048d71 = iVar6;
        iVar6 = (*pcVar2)();
        puVar15 = (undefined *)((int)piVar17 + 0x12);
        if (iVar6 < 0) goto LAB_08048788;
        *(undefined4 *)((int)piVar17 + 0xe) = 0x8048875;
        FUN_08048b8e();
        puVar26 = &DAT_08048fad;
        do {
          *(undefined4 *)((int)piVar17 + 0xe) = 0x8048883;
          FUN_08048acc();
          puVar25 = (undefined2 *)((int)puVar26 + (uint)bVar27 * -2 + 1);
          *(undefined *)puVar26 = 0x2c;
          puVar26 = puVar25;
        } while (extraout_ECX_00 != 1);
        puVar16 = (undefined4 *)((int)piVar17 + 0x16);
        *(undefined4 *)((int)piVar17 + 0x12) = 0x8048894;
        FUN_08048acc();
        puVar26 = (undefined2 *)((int)puVar25 + (uint)bVar27 * -2 + 1);
        *(undefined *)puVar25 = 0x2c;
        *(undefined4 *)((int)piVar17 + 0x12) = 0x80488a2;
        FUN_08048acc();
        piVar17 = (int *)((int)piVar17 + 0x1a);
        puVar24 = (undefined4 *)(puVar26 + (uint)bVar27 * -2 + 1);
        *puVar26 = 0xa0d;
        *puVar16 = 0x80488bb;
        iVar6 = FUN_08048b7f();
      }
      *(undefined4 **)((int)piVar17 + -4) = puVar24;
      pcVar22 = &DAT_08048d18;
      if ((((short)iVar6 == 0x5954) || (pcVar22 = (char *)0x8048d19, (short)iVar6 == 0x4f4d)) ||
         (pcVar22 = &DAT_08048d1a, puVar18 = (undefined4 *)((int)piVar17 + -4), iVar6 == 0x55525453)
         ) {
        pcVar23 = &DAT_08048d1b;
        iVar6 = 4;
        do {
          if (DAT_0804afb2 == *pcVar23) {
            *pcVar22 = DAT_0804afb2;
            break;
          }
          pcVar23 = pcVar23 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        *(undefined4 *)((int)piVar17 + -4) = 0x8048900;
        iVar6 = FUN_08048b88();
        puVar18 = piVar17;
      }
      puVar19 = puVar18;
      if ((short)iVar6 == 0x4443) goto LAB_0804899c;
      puVar18[-1] = iVar6;
      puVar18[-2] = 0x8048910;
      FUN_08048b5d();
      iVar6 = puVar18[-1];
      unaff_ESI = *puVar18;
      puVar20 = puVar18 + 1;
      puVar24 = puVar18 + 1;
      sVar4 = (short)iVar6;
      if (sVar4 == 0x4b4d) {
        puVar20 = puVar18 + 1;
        if ((_DAT_08048d69 & 2) != 0) {
          *puVar18 = 0x27;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar20 = puVar18 + 2;
        }
        goto LAB_080489f4;
      }
      if (sVar4 == 0x4d52) {
        puVar20 = puVar18 + 1;
        if ((_DAT_08048d69 & 2) != 0) {
          *puVar18 = 0x28;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar20 = puVar18 + 2;
        }
        goto LAB_080489f4;
      }
      if (sVar4 == 0x4544) {
        puVar20 = puVar18 + 1;
        if ((_DAT_08048d69 & 2) != 0) {
          *puVar18 = 10;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar20 = puVar18 + 2;
        }
        goto LAB_080489f4;
      }
      puVar19 = puVar18 + 1;
      if (sVar4 == 0x5743) {
LAB_0804899c:
        *(undefined4 *)((int)puVar19 + -4) = 0xc;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar20 = (undefined4 *)((int)puVar19 + 4);
        goto LAB_080489f4;
      }
      if (iVar6 == 0x455a4953) {
        *puVar18 = unaff_ESI;
        puVar18[-1] = 0x6a;
        pcVar2 = (code *)swi(0x80);
        iVar6 = (*pcVar2)();
        puVar20 = puVar18 + 1;
        if (iVar6 < 0) goto LAB_080489f4;
        *puVar18 = 0x8048972;
        FUN_08048b8e();
        *puVar18 = 0x804897e;
        FUN_08048acc();
        DAT_08048fad = 0xa0d;
        puVar19 = puVar18 + 2;
        puVar18[1] = 0x8048997;
        FUN_08048b7f();
        goto LAB_0804899c;
      }
      if (sVar4 == 0x5355) goto LAB_080489f9;
      if (iVar6 == 0x53534150) goto LAB_08048a06;
      puVar20 = puVar18 + 1;
      if ((sVar4 == 0x5953) || (puVar20 = puVar18 + 1, sVar4 == 0x4f4e)) goto LAB_080489f4;
      puVar24 = puVar18 + 1;
      if (sVar4 == 0x5551) goto LAB_08048a65;
      if (sVar4 != 0x5750) {
        puVar20 = puVar18 + 1;
        if ((iVar6 == 0x524f4241) || (puVar20 = puVar18 + 1, iVar6 == 0x4f4241f2))
        goto LAB_080489f4;
        *puVar18 = 0x8048a65;
        FUN_08048b88();
        puVar24 = puVar18 + 1;
        goto LAB_08048a65;
      }
      *puVar18 = 0x8048a7e;
      FUN_08048b8e();
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar26 = &DAT_08048fad;
      do {
        puVar25 = (undefined2 *)((int)puVar26 + (uint)bVar27 * -2 + 1);
        cVar1 = *(char *)puVar26;
        puVar26 = puVar25;
      } while (cVar1 != '\0');
      *(undefined4 *)((int)puVar25 + -1) = 0xa0d22;
      puVar18[1] = 4;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar24 = puVar18 + 3;
    }
    puVar20 = puVar24;
    if (iVar6 == 0x52455355) goto LAB_080489f9;
    if (iVar6 == 0x53534150) {
LAB_08048a06:
      *(undefined4 *)((int)puVar24 + -4) = 0x8048a0b;
      FUN_08048b5d();
      *(undefined4 *)((int)puVar24 + -4) = 0x8048a10;
      FUN_08048c29();
      puVar20 = puVar24;
LAB_080489f4:
      do {
        *(undefined4 *)((int)puVar20 + -4) = 0x80489f9;
        FUN_08048b88();
LAB_080489f9:
        *(undefined4 *)((int)puVar20 + -4) = 0x80489fe;
        FUN_08048b5d();
        *(undefined4 *)((int)puVar20 + -4) = 0x8048a03;
        FUN_08048bd4();
      } while( true );
    }
    if (iVar6 != 0x54495551) {
      if ((iVar6 != 0x54535953) && (iVar6 != 0x504f4f4e)) {
        *(undefined4 *)((int)puVar24 + -4) = 0x8048446;
        iVar6 = FUN_08048b88();
        goto LAB_08048446;
      }
      goto LAB_080489f4;
    }
LAB_08048a65:
    *(undefined4 *)((int)puVar24 + -4) = 0x8048a6f;
    FUN_08048b8e();
    piVar3 = puVar24;
LAB_080482c1:
    do {
      do {
        do {
          piVar8 = piVar3;
          piVar8[-1] = 1;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          *piVar8 = 0x10;
          piVar8[-1] = (int)&DAT_08048f78;
          piVar8[-2] = (int)puVar5;
          piVar8[-3] = 2;
          piVar8[-3] = 0x66;
          pcVar2 = (code *)swi(0x80);
          iVar6 = (*pcVar2)();
          piVar3 = piVar8 + 2;
        } while (iVar6 != 0);
        piVar8[1] = 5;
        *piVar8 = (int)puVar5;
        piVar8[-1] = 4;
        piVar8[-1] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar6 = (*pcVar2)();
        piVar3 = piVar8 + 3;
      } while (iVar6 != 0);
      piVar8[2] = (int)puVar5;
      piVar8[1] = 0x80482f9;
      FUN_08048ca2();
      puVar21 = (undefined *)piVar8[2];
      piVar8[2] = 2;
      pcVar2 = (code *)swi(0x80);
      iVar6 = (*pcVar2)();
      piVar17 = piVar8 + 4;
      piVar3 = piVar8 + 4;
      puVar5 = puVar21;
    } while (iVar6 != 0);
    do {
      do {
        puVar9 = piVar17;
        DAT_08048e79 = 0x10;
        puVar9[-1] = &DAT_08048e79;
        puVar9[-2] = &DAT_08048d7a;
        puVar9[-3] = puVar21;
        puVar9[-4] = 5;
        puVar9[-4] = 0x66;
        pcVar2 = (code *)swi(0x80);
        puVar5 = (undefined *)(*pcVar2)();
        piVar17 = puVar9 + 1;
      } while ((int)puVar5 < 0);
      *puVar9 = 2;
      pcVar2 = (code *)swi(0x80);
      iVar6 = (*pcVar2)();
      puVar24 = puVar9 + 2;
      piVar17 = puVar9 + 2;
    } while (iVar6 != 0);
    unaff_ESI = 0;
    puVar9[1] = 0x8048345;
    FUN_08048b8e();
  } while( true );
LAB_0804878a:
  *(undefined4 *)((int)puVar14 + -4) = 0x8048794;
  iVar6 = FUN_08048b88();
  piVar17 = puVar14;
  goto LAB_08048794;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_08048b7f(void)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  short sVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 in_ECX;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined *puVar21;
  char *pcVar22;
  char *pcVar23;
  undefined4 unaff_ESI;
  undefined4 *puVar24;
  undefined2 *puVar25;
  undefined2 *puVar26;
  byte bVar27;
  undefined8 uVar28;
  undefined4 unaff_retaddr;
  
  bVar27 = 0;
  DAT_08048d79 = DAT_08048d79 + '\x01';
  pcVar2 = (code *)swi(0x80);
  puVar5 = (undefined *)register0x00000010;
  (*pcVar2)();
  cVar1 = DAT_08048d79;
  DAT_08048d79 = DAT_08048d79 + -1;
  if (DAT_08048d79 != '\0') {
    DAT_08048d79 = cVar1;
    return CONCAT44(in_ECX,unaff_retaddr);
  }
  puVar24 = (undefined4 *)&stack0x0000000c;
  do {
    while( true ) {
      do {
        *(undefined4 *)((int)puVar24 + -4) = 0x804834f;
        iVar6 = FUN_08048358();
      } while (iVar6 == 0);
      if (DAT_08048d68 == '\0') break;
LAB_08048446:
      puVar10 = (undefined4 *)((int)puVar24 + -4);
      *(undefined4 *)((int)puVar24 + -4) = unaff_ESI;
      DAT_08048fac = 1;
      if (iVar6 == 0x52544552) {
LAB_08048473:
        *(undefined4 *)((int)puVar24 + -8) = 0x8048478;
        FUN_08048b5d();
        *(undefined4 *)((int)puVar24 + -4) = *(undefined4 *)((int)puVar24 + -4);
        *(undefined4 *)((int)puVar24 + -8) = 5;
        pcVar2 = (code *)swi(0x80);
        iVar6 = (*pcVar2)();
        puVar20 = puVar24;
        if (-1 < iVar6) {
          *(undefined4 *)((int)puVar24 + -4) = 0x80484af;
          FUN_08048b8e();
          if (((DAT_08048fac & 2) == 0) && (DAT_08048d75 != 0)) {
            *(undefined4 *)((int)puVar24 + -4) = 0x13;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar24 = (undefined4 *)((int)puVar24 + 4);
          }
          while( true ) {
            puVar24[-1] = 0x80484d6;
            iVar6 = FUN_08048358();
            puVar20 = puVar24;
            if (iVar6 == 0x524f4241 || iVar6 == 0x4f4241f2) goto LAB_08048533;
            puVar24[-1] = 3;
            pcVar2 = (code *)swi(0x80);
            iVar6 = (*pcVar2)();
            puVar20 = puVar24 + 1;
            if (iVar6 == 0) break;
            if (DAT_08048d18 == 'A') {
              *puVar24 = 0x8048507;
              FUN_08048b0c();
              puVar24 = puVar24 + 1;
            }
            else {
              *puVar24 = 4;
              pcVar2 = (code *)swi(0x80);
              (*pcVar2)();
              puVar24 = puVar24 + 2;
            }
          }
          do {
            puVar20[-1] = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            *puVar20 = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar20[1] = 0x8048533;
            FUN_08048b88();
            puVar20 = puVar20 + 2;
LAB_08048533:
            *(undefined4 *)((int)puVar20 + -4) = 0x804853d;
            FUN_08048b8e();
          } while( true );
        }
LAB_0804853f:
        *puVar20 = 6;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar10 = puVar20 + 2;
        puVar20[1] = 0x8048553;
        iVar6 = FUN_08048b88();
      }
      else {
        DAT_08048fac = 2;
        if (iVar6 == 0x524f5453) {
          puVar20 = (undefined4 *)((int)puVar24 + -4);
          if ((_DAT_08048d69 & 1) != 0) goto LAB_08048473;
          goto LAB_0804853f;
        }
      }
      puVar24 = (undefined4 *)*puVar10;
      piVar12 = puVar10 + 1;
      DAT_08048d75 = 0;
      if (iVar6 == 0x54534552) {
        *puVar10 = 0x8048572;
        DAT_08048d75 = FUN_08048af6();
        *puVar10 = 0x8048581;
        iVar6 = FUN_08048b88();
      }
      DAT_08048fac = 3;
      if ((short)iVar6 == 0x494c) {
        if (puVar24 == (undefined4 *)0x0) {
          *puVar10 = 0x80485a0;
          FUN_08048358();
        }
        *puVar10 = 0x6a;
        pcVar2 = (code *)swi(0x80);
        iVar6 = (*pcVar2)();
        puVar20 = puVar10 + 2;
        if (-1 < iVar6) {
          puVar10[1] = 0x80485c3;
          FUN_08048b8e();
          puVar10[1] = 2;
          pcVar2 = (code *)swi(0x80);
          iVar6 = (*pcVar2)();
          puVar20 = puVar10 + 3;
          if (iVar6 != 0) {
LAB_080486ae:
            do {
              puVar11 = puVar20;
              puVar11[-1] = 2;
              puVar11[-1] = 0x72;
              pcVar2 = (code *)swi(0x80);
              iVar6 = (*pcVar2)();
              puVar20 = puVar11 + 1;
            } while (iVar6 < 0);
            *puVar11 = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            piVar12 = puVar11 + 2;
            puVar24 = (undefined4 *)0x0;
            puVar11[1] = 0x80486d9;
            iVar6 = FUN_08048b88();
            goto LAB_080486d9;
          }
          puVar10[2] = 0x2a;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar10[3] = 2;
          pcVar2 = (code *)swi(0x80);
          iVar6 = (*pcVar2)();
          if (iVar6 == 0) {
            puVar10[4] = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar10[5] = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar10[6] = 1;
            puVar10[6] = 0x3f;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar10[7] = puVar24;
            DAT_08048f88 = s__bin_ls_08048050;
            pcVar22 = &DAT_08048058;
            DAT_08048f8c = &DAT_08048058;
            for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
              pcVar22 = pcVar22 + (uint)bVar27 * -2 + 1;
            }
            if (DAT_0804afb1 != '\r') {
              puVar10[6] = 0x8048685;
              FUN_08048b5d();
              _DAT_08048f90 = pcVar22;
              if (*pcVar22 == '-') {
                _DAT_08048f90 = pcVar22 + 4;
              }
            }
            puVar10[7] = 0xb;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar10[8] = 1;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar20 = puVar10 + 10;
            goto LAB_080486ae;
          }
          puVar10[4] = 6;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          piVar17 = puVar10 + 6;
          while( true ) {
            piVar17[-1] = 3;
            pcVar2 = (code *)swi(0x80);
            iVar6 = (*pcVar2)();
            piVar3 = piVar17 + 1;
            if (iVar6 == 0) break;
            *piVar17 = iVar6;
            piVar17[-1] = 0x804860f;
            iVar6 = FUN_08048358();
            if (iVar6 == 0x524f4241 || iVar6 == 0x4f4241f2) {
              *piVar17 = 0x8048634;
              FUN_08048b8e();
              piVar3 = piVar17 + 1;
              break;
            }
            *piVar17 = 0x8048623;
            FUN_08048b0c();
            piVar17 = piVar17 + 1;
          }
          goto LAB_080482c1;
        }
        goto LAB_080489f4;
      }
LAB_080486d9:
      piVar17 = piVar12;
      if ((short)iVar6 == 0x4f50) {
        do {
          piVar12[-1] = 0x80486fa;
          FUN_08048ab6();
        } while (extraout_ECX != 1);
        piVar12[-1] = 0;
        DAT_08048f84 = CONCAT22(CONCAT11((char)*(undefined2 *)(piVar12 + -1),
                                         (char)((ushort)*(undefined2 *)(piVar12 + -1) >> 8)),
                                CONCAT11((char)*(undefined2 *)((int)piVar12 + -2),
                                         (char)((ushort)*(undefined2 *)((int)piVar12 + -2) >> 8)));
        piVar12[-1] = 0x8048717;
        FUN_08048ab6();
        piVar12[-1] = 0x804871f;
        FUN_08048ab6();
        DAT_08048f80 = 2;
        piVar12[-1] = 6;
        piVar12[-2] = 1;
        piVar12[-3] = 2;
        piVar12[-4] = 1;
        piVar12[-4] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar6 = (*pcVar2)();
        piVar13 = piVar12 + 1;
        if (-1 < iVar6) {
          *piVar12 = iVar6;
          piVar12[-1] = 0x10;
          piVar12[-2] = (int)&DAT_08048f80;
          piVar12[-3] = iVar6;
          piVar12[-4] = 3;
          piVar12[-4] = 0x66;
          pcVar2 = (code *)swi(0x80);
          iVar6 = (*pcVar2)();
          piVar13 = piVar12 + 1;
          if (-1 < iVar6) {
            piVar13 = piVar12 + 2;
            piVar12[1] = 0x8048762;
            FUN_08048b88();
          }
        }
        piVar13[-1] = 0x804876c;
        FUN_08048b8e();
        piVar13[-1] = 2;
        piVar13[-2] = (int)puVar5;
        piVar13[-3] = 0xd;
        piVar13[-3] = 0x66;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        *piVar13 = 6;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        piVar3 = piVar13 + 2;
        goto LAB_080482c1;
      }
LAB_08048794:
      if (iVar6 == 0x56534150) {
        puVar24 = &DAT_08048f78;
        DAT_08048f78 = 2;
        _DAT_08048f7c = 0;
        piVar17[-1] = 6;
        piVar17[-2] = 1;
        piVar17[-3] = 2;
        piVar17[-4] = 1;
        piVar17[-4] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar6 = (*pcVar2)();
        puVar14 = piVar17 + 1;
        if (iVar6 < 0) goto LAB_0804878a;
        *piVar17 = 4;
        piVar17[-1] = (int)&DAT_0804804c;
        piVar17[-2] = 2;
        piVar17[-3] = 1;
        piVar17[-4] = iVar6;
        piVar17[-5] = 0xe;
        piVar17[-5] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar7 = (*pcVar2)();
        puVar14 = piVar17 + 2;
        if (iVar7 < 0) goto LAB_0804878a;
        piVar17[1] = 0x10;
        *piVar17 = (int)&DAT_08048f78;
        piVar17[-1] = iVar6;
        piVar17[-2] = 2;
        piVar17[-2] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar7 = (*pcVar2)();
        puVar14 = piVar17 + 3;
        if (iVar7 < 0) goto LAB_0804878a;
        piVar17[2] = 0x10;
        piVar17[1] = (int)(piVar17 + 2);
        *piVar17 = (int)&DAT_08048f78;
        piVar17[-1] = iVar6;
        piVar17[-2] = 6;
        piVar17[-2] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar7 = (*pcVar2)();
        puVar15 = (undefined *)((int)piVar17 + 10);
        *(undefined2 *)((int)piVar17 + 10) = DAT_08048f78._2_2_;
        if (iVar7 < 0) {
LAB_08048788:
          puVar14 = (undefined4 *)(puVar15 + 8);
          goto LAB_0804878a;
        }
        *(undefined4 *)((int)piVar17 + 6) = 1;
        *(int *)((int)piVar17 + 2) = iVar6;
        *(undefined4 *)((int)piVar17 + -2) = 4;
        *(undefined4 *)((int)piVar17 + -2) = 0x66;
        pcVar2 = (code *)swi(0x80);
        uVar28 = (*pcVar2)();
        puVar15 = (undefined *)((int)piVar17 + 0xe);
        if ((int)uVar28 < 0) goto LAB_08048788;
        *(int *)((int)piVar17 + 10) = (int)((ulonglong)uVar28 >> 0x20);
        *(undefined4 **)((int)piVar17 + 6) = &DAT_08048f78;
        *(undefined **)((int)piVar17 + 2) = puVar5;
        *(undefined4 *)((int)piVar17 + -2) = 6;
        *(undefined4 *)((int)piVar17 + -2) = 0x66;
        pcVar2 = (code *)swi(0x80);
        DAT_08048d71 = iVar6;
        iVar6 = (*pcVar2)();
        puVar15 = (undefined *)((int)piVar17 + 0x12);
        if (iVar6 < 0) goto LAB_08048788;
        *(undefined4 *)((int)piVar17 + 0xe) = 0x8048875;
        FUN_08048b8e();
        puVar26 = &DAT_08048fad;
        do {
          *(undefined4 *)((int)piVar17 + 0xe) = 0x8048883;
          FUN_08048acc();
          puVar25 = (undefined2 *)((int)puVar26 + (uint)bVar27 * -2 + 1);
          *(undefined *)puVar26 = 0x2c;
          puVar26 = puVar25;
        } while (extraout_ECX_00 != 1);
        puVar16 = (undefined4 *)((int)piVar17 + 0x16);
        *(undefined4 *)((int)piVar17 + 0x12) = 0x8048894;
        FUN_08048acc();
        puVar26 = (undefined2 *)((int)puVar25 + (uint)bVar27 * -2 + 1);
        *(undefined *)puVar25 = 0x2c;
        *(undefined4 *)((int)piVar17 + 0x12) = 0x80488a2;
        FUN_08048acc();
        piVar17 = (int *)((int)piVar17 + 0x1a);
        puVar24 = (undefined4 *)(puVar26 + (uint)bVar27 * -2 + 1);
        *puVar26 = 0xa0d;
        *puVar16 = 0x80488bb;
        iVar6 = FUN_08048b7f();
      }
      *(undefined4 **)((int)piVar17 + -4) = puVar24;
      pcVar22 = &DAT_08048d18;
      if ((((short)iVar6 == 0x5954) || (pcVar22 = (char *)0x8048d19, (short)iVar6 == 0x4f4d)) ||
         (pcVar22 = &DAT_08048d1a, puVar18 = (undefined4 *)((int)piVar17 + -4), iVar6 == 0x55525453)
         ) {
        pcVar23 = &DAT_08048d1b;
        iVar6 = 4;
        do {
          if (DAT_0804afb2 == *pcVar23) {
            *pcVar22 = DAT_0804afb2;
            break;
          }
          pcVar23 = pcVar23 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        *(undefined4 *)((int)piVar17 + -4) = 0x8048900;
        iVar6 = FUN_08048b88();
        puVar18 = piVar17;
      }
      puVar19 = puVar18;
      if ((short)iVar6 == 0x4443) goto LAB_0804899c;
      puVar18[-1] = iVar6;
      puVar18[-2] = 0x8048910;
      FUN_08048b5d();
      iVar6 = puVar18[-1];
      unaff_ESI = *puVar18;
      puVar20 = puVar18 + 1;
      puVar24 = puVar18 + 1;
      sVar4 = (short)iVar6;
      if (sVar4 == 0x4b4d) {
        puVar20 = puVar18 + 1;
        if ((_DAT_08048d69 & 2) != 0) {
          *puVar18 = 0x27;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar20 = puVar18 + 2;
        }
        goto LAB_080489f4;
      }
      if (sVar4 == 0x4d52) {
        puVar20 = puVar18 + 1;
        if ((_DAT_08048d69 & 2) != 0) {
          *puVar18 = 0x28;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar20 = puVar18 + 2;
        }
        goto LAB_080489f4;
      }
      if (sVar4 == 0x4544) {
        puVar20 = puVar18 + 1;
        if ((_DAT_08048d69 & 2) != 0) {
          *puVar18 = 10;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar20 = puVar18 + 2;
        }
        goto LAB_080489f4;
      }
      puVar19 = puVar18 + 1;
      if (sVar4 == 0x5743) {
LAB_0804899c:
        *(undefined4 *)((int)puVar19 + -4) = 0xc;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar20 = (undefined4 *)((int)puVar19 + 4);
        goto LAB_080489f4;
      }
      if (iVar6 == 0x455a4953) {
        *puVar18 = unaff_ESI;
        puVar18[-1] = 0x6a;
        pcVar2 = (code *)swi(0x80);
        iVar6 = (*pcVar2)();
        puVar20 = puVar18 + 1;
        if (iVar6 < 0) goto LAB_080489f4;
        *puVar18 = 0x8048972;
        FUN_08048b8e();
        *puVar18 = 0x804897e;
        FUN_08048acc();
        DAT_08048fad = 0xa0d;
        puVar19 = puVar18 + 2;
        puVar18[1] = 0x8048997;
        FUN_08048b7f();
        goto LAB_0804899c;
      }
      if (sVar4 == 0x5355) goto LAB_080489f9;
      if (iVar6 == 0x53534150) goto LAB_08048a06;
      puVar20 = puVar18 + 1;
      if ((sVar4 == 0x5953) || (puVar20 = puVar18 + 1, sVar4 == 0x4f4e)) goto LAB_080489f4;
      puVar24 = puVar18 + 1;
      if (sVar4 == 0x5551) goto LAB_08048a65;
      if (sVar4 != 0x5750) {
        puVar20 = puVar18 + 1;
        if ((iVar6 == 0x524f4241) || (puVar20 = puVar18 + 1, iVar6 == 0x4f4241f2))
        goto LAB_080489f4;
        *puVar18 = 0x8048a65;
        FUN_08048b88();
        puVar24 = puVar18 + 1;
        goto LAB_08048a65;
      }
      *puVar18 = 0x8048a7e;
      FUN_08048b8e();
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar26 = &DAT_08048fad;
      do {
        puVar25 = (undefined2 *)((int)puVar26 + (uint)bVar27 * -2 + 1);
        cVar1 = *(char *)puVar26;
        puVar26 = puVar25;
      } while (cVar1 != '\0');
      *(undefined4 *)((int)puVar25 + -1) = 0xa0d22;
      puVar18[1] = 4;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar24 = puVar18 + 3;
    }
    puVar20 = puVar24;
    if (iVar6 == 0x52455355) goto LAB_080489f9;
    if (iVar6 == 0x53534150) {
LAB_08048a06:
      *(undefined4 *)((int)puVar24 + -4) = 0x8048a0b;
      FUN_08048b5d();
      *(undefined4 *)((int)puVar24 + -4) = 0x8048a10;
      FUN_08048c29();
      puVar20 = puVar24;
LAB_080489f4:
      do {
        *(undefined4 *)((int)puVar20 + -4) = 0x80489f9;
        FUN_08048b88();
LAB_080489f9:
        *(undefined4 *)((int)puVar20 + -4) = 0x80489fe;
        FUN_08048b5d();
        *(undefined4 *)((int)puVar20 + -4) = 0x8048a03;
        FUN_08048bd4();
      } while( true );
    }
    if (iVar6 != 0x54495551) {
      if ((iVar6 != 0x54535953) && (iVar6 != 0x504f4f4e)) {
        *(undefined4 *)((int)puVar24 + -4) = 0x8048446;
        iVar6 = FUN_08048b88();
        goto LAB_08048446;
      }
      goto LAB_080489f4;
    }
LAB_08048a65:
    *(undefined4 *)((int)puVar24 + -4) = 0x8048a6f;
    FUN_08048b8e();
    piVar3 = puVar24;
LAB_080482c1:
    do {
      do {
        do {
          piVar8 = piVar3;
          piVar8[-1] = 1;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          *piVar8 = 0x10;
          piVar8[-1] = (int)&DAT_08048f78;
          piVar8[-2] = (int)puVar5;
          piVar8[-3] = 2;
          piVar8[-3] = 0x66;
          pcVar2 = (code *)swi(0x80);
          iVar6 = (*pcVar2)();
          piVar3 = piVar8 + 2;
        } while (iVar6 != 0);
        piVar8[1] = 5;
        *piVar8 = (int)puVar5;
        piVar8[-1] = 4;
        piVar8[-1] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar6 = (*pcVar2)();
        piVar3 = piVar8 + 3;
      } while (iVar6 != 0);
      piVar8[2] = (int)puVar5;
      piVar8[1] = 0x80482f9;
      FUN_08048ca2();
      puVar21 = (undefined *)piVar8[2];
      piVar8[2] = 2;
      pcVar2 = (code *)swi(0x80);
      iVar6 = (*pcVar2)();
      piVar17 = piVar8 + 4;
      piVar3 = piVar8 + 4;
      puVar5 = puVar21;
    } while (iVar6 != 0);
    do {
      do {
        puVar9 = piVar17;
        DAT_08048e79 = 0x10;
        puVar9[-1] = &DAT_08048e79;
        puVar9[-2] = &DAT_08048d7a;
        puVar9[-3] = puVar21;
        puVar9[-4] = 5;
        puVar9[-4] = 0x66;
        pcVar2 = (code *)swi(0x80);
        puVar5 = (undefined *)(*pcVar2)();
        piVar17 = puVar9 + 1;
      } while ((int)puVar5 < 0);
      *puVar9 = 2;
      pcVar2 = (code *)swi(0x80);
      iVar6 = (*pcVar2)();
      puVar24 = puVar9 + 2;
      piVar17 = puVar9 + 2;
    } while (iVar6 != 0);
    unaff_ESI = 0;
    puVar9[1] = 0x8048345;
    FUN_08048b8e();
  } while( true );
LAB_0804878a:
  *(undefined4 *)((int)puVar14 + -4) = 0x8048794;
  iVar6 = FUN_08048b88();
  piVar17 = puVar14;
  goto LAB_08048794;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_08048b88(void)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  short sVar4;
  undefined *puVar5;
  int iVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_ECX;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined *puVar21;
  char *pcVar22;
  char *pcVar23;
  undefined4 unaff_ESI;
  undefined4 *puVar24;
  undefined2 *puVar25;
  undefined2 *puVar26;
  byte bVar27;
  undefined8 uVar28;
  undefined4 unaff_retaddr;
  
  bVar27 = 0;
  DAT_08048d79 = DAT_08048d79 + '\x01';
  iVar7 = in_ECX;
  do {
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  pcVar2 = (code *)swi(0x80);
  puVar5 = (undefined *)register0x00000010;
  (*pcVar2)();
  cVar1 = DAT_08048d79;
  DAT_08048d79 = DAT_08048d79 + -1;
  if (DAT_08048d79 != '\0') {
    DAT_08048d79 = cVar1;
    return CONCAT44(in_ECX,unaff_retaddr);
  }
  puVar24 = (undefined4 *)&stack0x0000000c;
  do {
    while( true ) {
      do {
        *(undefined4 *)((int)puVar24 + -4) = 0x804834f;
        iVar7 = FUN_08048358();
      } while (iVar7 == 0);
      if (DAT_08048d68 == '\0') break;
LAB_08048446:
      puVar10 = (undefined4 *)((int)puVar24 + -4);
      *(undefined4 *)((int)puVar24 + -4) = unaff_ESI;
      DAT_08048fac = 1;
      if (iVar7 == 0x52544552) {
LAB_08048473:
        *(undefined4 *)((int)puVar24 + -8) = 0x8048478;
        FUN_08048b5d();
        *(undefined4 *)((int)puVar24 + -4) = *(undefined4 *)((int)puVar24 + -4);
        *(undefined4 *)((int)puVar24 + -8) = 5;
        pcVar2 = (code *)swi(0x80);
        iVar7 = (*pcVar2)();
        puVar20 = puVar24;
        if (-1 < iVar7) {
          *(undefined4 *)((int)puVar24 + -4) = 0x80484af;
          FUN_08048b8e();
          if (((DAT_08048fac & 2) == 0) && (DAT_08048d75 != 0)) {
            *(undefined4 *)((int)puVar24 + -4) = 0x13;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar24 = (undefined4 *)((int)puVar24 + 4);
          }
          while( true ) {
            puVar24[-1] = 0x80484d6;
            iVar7 = FUN_08048358();
            puVar20 = puVar24;
            if (iVar7 == 0x524f4241 || iVar7 == 0x4f4241f2) goto LAB_08048533;
            puVar24[-1] = 3;
            pcVar2 = (code *)swi(0x80);
            iVar7 = (*pcVar2)();
            puVar20 = puVar24 + 1;
            if (iVar7 == 0) break;
            if (DAT_08048d18 == 'A') {
              *puVar24 = 0x8048507;
              FUN_08048b0c();
              puVar24 = puVar24 + 1;
            }
            else {
              *puVar24 = 4;
              pcVar2 = (code *)swi(0x80);
              (*pcVar2)();
              puVar24 = puVar24 + 2;
            }
          }
          do {
            puVar20[-1] = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            *puVar20 = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar20[1] = 0x8048533;
            FUN_08048b88();
            puVar20 = puVar20 + 2;
LAB_08048533:
            *(undefined4 *)((int)puVar20 + -4) = 0x804853d;
            FUN_08048b8e();
          } while( true );
        }
LAB_0804853f:
        *puVar20 = 6;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar10 = puVar20 + 2;
        puVar20[1] = 0x8048553;
        iVar7 = FUN_08048b88();
      }
      else {
        DAT_08048fac = 2;
        if (iVar7 == 0x524f5453) {
          puVar20 = (undefined4 *)((int)puVar24 + -4);
          if ((_DAT_08048d69 & 1) != 0) goto LAB_08048473;
          goto LAB_0804853f;
        }
      }
      puVar24 = (undefined4 *)*puVar10;
      piVar12 = puVar10 + 1;
      DAT_08048d75 = 0;
      if (iVar7 == 0x54534552) {
        *puVar10 = 0x8048572;
        DAT_08048d75 = FUN_08048af6();
        *puVar10 = 0x8048581;
        iVar7 = FUN_08048b88();
      }
      DAT_08048fac = 3;
      if ((short)iVar7 == 0x494c) {
        if (puVar24 == (undefined4 *)0x0) {
          *puVar10 = 0x80485a0;
          FUN_08048358();
        }
        *puVar10 = 0x6a;
        pcVar2 = (code *)swi(0x80);
        iVar7 = (*pcVar2)();
        puVar20 = puVar10 + 2;
        if (-1 < iVar7) {
          puVar10[1] = 0x80485c3;
          FUN_08048b8e();
          puVar10[1] = 2;
          pcVar2 = (code *)swi(0x80);
          iVar7 = (*pcVar2)();
          puVar20 = puVar10 + 3;
          if (iVar7 != 0) {
LAB_080486ae:
            do {
              puVar11 = puVar20;
              puVar11[-1] = 2;
              puVar11[-1] = 0x72;
              pcVar2 = (code *)swi(0x80);
              iVar7 = (*pcVar2)();
              puVar20 = puVar11 + 1;
            } while (iVar7 < 0);
            *puVar11 = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            piVar12 = puVar11 + 2;
            puVar24 = (undefined4 *)0x0;
            puVar11[1] = 0x80486d9;
            iVar7 = FUN_08048b88();
            goto LAB_080486d9;
          }
          puVar10[2] = 0x2a;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar10[3] = 2;
          pcVar2 = (code *)swi(0x80);
          iVar7 = (*pcVar2)();
          if (iVar7 == 0) {
            puVar10[4] = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar10[5] = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar10[6] = 1;
            puVar10[6] = 0x3f;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar10[7] = puVar24;
            DAT_08048f88 = s__bin_ls_08048050;
            pcVar22 = &DAT_08048058;
            DAT_08048f8c = &DAT_08048058;
            for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
              pcVar22 = pcVar22 + (uint)bVar27 * -2 + 1;
            }
            if (DAT_0804afb1 != '\r') {
              puVar10[6] = 0x8048685;
              FUN_08048b5d();
              _DAT_08048f90 = pcVar22;
              if (*pcVar22 == '-') {
                _DAT_08048f90 = pcVar22 + 4;
              }
            }
            puVar10[7] = 0xb;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar10[8] = 1;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar20 = puVar10 + 10;
            goto LAB_080486ae;
          }
          puVar10[4] = 6;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          piVar17 = puVar10 + 6;
          while( true ) {
            piVar17[-1] = 3;
            pcVar2 = (code *)swi(0x80);
            iVar7 = (*pcVar2)();
            piVar3 = piVar17 + 1;
            if (iVar7 == 0) break;
            *piVar17 = iVar7;
            piVar17[-1] = 0x804860f;
            iVar7 = FUN_08048358();
            if (iVar7 == 0x524f4241 || iVar7 == 0x4f4241f2) {
              *piVar17 = 0x8048634;
              FUN_08048b8e();
              piVar3 = piVar17 + 1;
              break;
            }
            *piVar17 = 0x8048623;
            FUN_08048b0c();
            piVar17 = piVar17 + 1;
          }
          goto LAB_080482c1;
        }
        goto LAB_080489f4;
      }
LAB_080486d9:
      piVar17 = piVar12;
      if ((short)iVar7 == 0x4f50) {
        do {
          piVar12[-1] = 0x80486fa;
          FUN_08048ab6();
        } while (extraout_ECX != 1);
        piVar12[-1] = 0;
        DAT_08048f84 = CONCAT22(CONCAT11((char)*(undefined2 *)(piVar12 + -1),
                                         (char)((ushort)*(undefined2 *)(piVar12 + -1) >> 8)),
                                CONCAT11((char)*(undefined2 *)((int)piVar12 + -2),
                                         (char)((ushort)*(undefined2 *)((int)piVar12 + -2) >> 8)));
        piVar12[-1] = 0x8048717;
        FUN_08048ab6();
        piVar12[-1] = 0x804871f;
        FUN_08048ab6();
        DAT_08048f80 = 2;
        piVar12[-1] = 6;
        piVar12[-2] = 1;
        piVar12[-3] = 2;
        piVar12[-4] = 1;
        piVar12[-4] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar7 = (*pcVar2)();
        piVar13 = piVar12 + 1;
        if (-1 < iVar7) {
          *piVar12 = iVar7;
          piVar12[-1] = 0x10;
          piVar12[-2] = (int)&DAT_08048f80;
          piVar12[-3] = iVar7;
          piVar12[-4] = 3;
          piVar12[-4] = 0x66;
          pcVar2 = (code *)swi(0x80);
          iVar7 = (*pcVar2)();
          piVar13 = piVar12 + 1;
          if (-1 < iVar7) {
            piVar13 = piVar12 + 2;
            piVar12[1] = 0x8048762;
            FUN_08048b88();
          }
        }
        piVar13[-1] = 0x804876c;
        FUN_08048b8e();
        piVar13[-1] = 2;
        piVar13[-2] = (int)puVar5;
        piVar13[-3] = 0xd;
        piVar13[-3] = 0x66;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        *piVar13 = 6;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        piVar3 = piVar13 + 2;
        goto LAB_080482c1;
      }
LAB_08048794:
      if (iVar7 == 0x56534150) {
        puVar24 = &DAT_08048f78;
        DAT_08048f78 = 2;
        _DAT_08048f7c = 0;
        piVar17[-1] = 6;
        piVar17[-2] = 1;
        piVar17[-3] = 2;
        piVar17[-4] = 1;
        piVar17[-4] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar7 = (*pcVar2)();
        puVar14 = piVar17 + 1;
        if (iVar7 < 0) goto LAB_0804878a;
        *piVar17 = 4;
        piVar17[-1] = (int)&DAT_0804804c;
        piVar17[-2] = 2;
        piVar17[-3] = 1;
        piVar17[-4] = iVar7;
        piVar17[-5] = 0xe;
        piVar17[-5] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar6 = (*pcVar2)();
        puVar14 = piVar17 + 2;
        if (iVar6 < 0) goto LAB_0804878a;
        piVar17[1] = 0x10;
        *piVar17 = (int)&DAT_08048f78;
        piVar17[-1] = iVar7;
        piVar17[-2] = 2;
        piVar17[-2] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar6 = (*pcVar2)();
        puVar14 = piVar17 + 3;
        if (iVar6 < 0) goto LAB_0804878a;
        piVar17[2] = 0x10;
        piVar17[1] = (int)(piVar17 + 2);
        *piVar17 = (int)&DAT_08048f78;
        piVar17[-1] = iVar7;
        piVar17[-2] = 6;
        piVar17[-2] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar6 = (*pcVar2)();
        puVar15 = (undefined *)((int)piVar17 + 10);
        *(undefined2 *)((int)piVar17 + 10) = DAT_08048f78._2_2_;
        if (iVar6 < 0) {
LAB_08048788:
          puVar14 = (undefined4 *)(puVar15 + 8);
          goto LAB_0804878a;
        }
        *(undefined4 *)((int)piVar17 + 6) = 1;
        *(int *)((int)piVar17 + 2) = iVar7;
        *(undefined4 *)((int)piVar17 + -2) = 4;
        *(undefined4 *)((int)piVar17 + -2) = 0x66;
        pcVar2 = (code *)swi(0x80);
        uVar28 = (*pcVar2)();
        puVar15 = (undefined *)((int)piVar17 + 0xe);
        if ((int)uVar28 < 0) goto LAB_08048788;
        *(int *)((int)piVar17 + 10) = (int)((ulonglong)uVar28 >> 0x20);
        *(undefined4 **)((int)piVar17 + 6) = &DAT_08048f78;
        *(undefined **)((int)piVar17 + 2) = puVar5;
        *(undefined4 *)((int)piVar17 + -2) = 6;
        *(undefined4 *)((int)piVar17 + -2) = 0x66;
        pcVar2 = (code *)swi(0x80);
        DAT_08048d71 = iVar7;
        iVar7 = (*pcVar2)();
        puVar15 = (undefined *)((int)piVar17 + 0x12);
        if (iVar7 < 0) goto LAB_08048788;
        *(undefined4 *)((int)piVar17 + 0xe) = 0x8048875;
        FUN_08048b8e();
        puVar26 = &DAT_08048fad;
        do {
          *(undefined4 *)((int)piVar17 + 0xe) = 0x8048883;
          FUN_08048acc();
          puVar25 = (undefined2 *)((int)puVar26 + (uint)bVar27 * -2 + 1);
          *(undefined *)puVar26 = 0x2c;
          puVar26 = puVar25;
        } while (extraout_ECX_00 != 1);
        puVar16 = (undefined4 *)((int)piVar17 + 0x16);
        *(undefined4 *)((int)piVar17 + 0x12) = 0x8048894;
        FUN_08048acc();
        puVar26 = (undefined2 *)((int)puVar25 + (uint)bVar27 * -2 + 1);
        *(undefined *)puVar25 = 0x2c;
        *(undefined4 *)((int)piVar17 + 0x12) = 0x80488a2;
        FUN_08048acc();
        piVar17 = (int *)((int)piVar17 + 0x1a);
        puVar24 = (undefined4 *)(puVar26 + (uint)bVar27 * -2 + 1);
        *puVar26 = 0xa0d;
        *puVar16 = 0x80488bb;
        iVar7 = FUN_08048b7f();
      }
      *(undefined4 **)((int)piVar17 + -4) = puVar24;
      pcVar22 = &DAT_08048d18;
      if ((((short)iVar7 == 0x5954) || (pcVar22 = (char *)0x8048d19, (short)iVar7 == 0x4f4d)) ||
         (pcVar22 = &DAT_08048d1a, puVar18 = (undefined4 *)((int)piVar17 + -4), iVar7 == 0x55525453)
         ) {
        pcVar23 = &DAT_08048d1b;
        iVar7 = 4;
        do {
          if (DAT_0804afb2 == *pcVar23) {
            *pcVar22 = DAT_0804afb2;
            break;
          }
          pcVar23 = pcVar23 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        *(undefined4 *)((int)piVar17 + -4) = 0x8048900;
        iVar7 = FUN_08048b88();
        puVar18 = piVar17;
      }
      puVar19 = puVar18;
      if ((short)iVar7 == 0x4443) goto LAB_0804899c;
      puVar18[-1] = iVar7;
      puVar18[-2] = 0x8048910;
      FUN_08048b5d();
      iVar7 = puVar18[-1];
      unaff_ESI = *puVar18;
      puVar20 = puVar18 + 1;
      puVar24 = puVar18 + 1;
      sVar4 = (short)iVar7;
      if (sVar4 == 0x4b4d) {
        puVar20 = puVar18 + 1;
        if ((_DAT_08048d69 & 2) != 0) {
          *puVar18 = 0x27;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar20 = puVar18 + 2;
        }
        goto LAB_080489f4;
      }
      if (sVar4 == 0x4d52) {
        puVar20 = puVar18 + 1;
        if ((_DAT_08048d69 & 2) != 0) {
          *puVar18 = 0x28;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar20 = puVar18 + 2;
        }
        goto LAB_080489f4;
      }
      if (sVar4 == 0x4544) {
        puVar20 = puVar18 + 1;
        if ((_DAT_08048d69 & 2) != 0) {
          *puVar18 = 10;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar20 = puVar18 + 2;
        }
        goto LAB_080489f4;
      }
      puVar19 = puVar18 + 1;
      if (sVar4 == 0x5743) {
LAB_0804899c:
        *(undefined4 *)((int)puVar19 + -4) = 0xc;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar20 = (undefined4 *)((int)puVar19 + 4);
        goto LAB_080489f4;
      }
      if (iVar7 == 0x455a4953) {
        *puVar18 = unaff_ESI;
        puVar18[-1] = 0x6a;
        pcVar2 = (code *)swi(0x80);
        iVar7 = (*pcVar2)();
        puVar20 = puVar18 + 1;
        if (iVar7 < 0) goto LAB_080489f4;
        *puVar18 = 0x8048972;
        FUN_08048b8e();
        *puVar18 = 0x804897e;
        FUN_08048acc();
        DAT_08048fad = 0xa0d;
        puVar19 = puVar18 + 2;
        puVar18[1] = 0x8048997;
        FUN_08048b7f();
        goto LAB_0804899c;
      }
      if (sVar4 == 0x5355) goto LAB_080489f9;
      if (iVar7 == 0x53534150) goto LAB_08048a06;
      puVar20 = puVar18 + 1;
      if ((sVar4 == 0x5953) || (puVar20 = puVar18 + 1, sVar4 == 0x4f4e)) goto LAB_080489f4;
      puVar24 = puVar18 + 1;
      if (sVar4 == 0x5551) goto LAB_08048a65;
      if (sVar4 != 0x5750) {
        puVar20 = puVar18 + 1;
        if ((iVar7 == 0x524f4241) || (puVar20 = puVar18 + 1, iVar7 == 0x4f4241f2))
        goto LAB_080489f4;
        *puVar18 = 0x8048a65;
        FUN_08048b88();
        puVar24 = puVar18 + 1;
        goto LAB_08048a65;
      }
      *puVar18 = 0x8048a7e;
      FUN_08048b8e();
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar26 = &DAT_08048fad;
      do {
        puVar25 = (undefined2 *)((int)puVar26 + (uint)bVar27 * -2 + 1);
        cVar1 = *(char *)puVar26;
        puVar26 = puVar25;
      } while (cVar1 != '\0');
      *(undefined4 *)((int)puVar25 + -1) = 0xa0d22;
      puVar18[1] = 4;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar24 = puVar18 + 3;
    }
    puVar20 = puVar24;
    if (iVar7 == 0x52455355) goto LAB_080489f9;
    if (iVar7 == 0x53534150) {
LAB_08048a06:
      *(undefined4 *)((int)puVar24 + -4) = 0x8048a0b;
      FUN_08048b5d();
      *(undefined4 *)((int)puVar24 + -4) = 0x8048a10;
      FUN_08048c29();
      puVar20 = puVar24;
LAB_080489f4:
      do {
        *(undefined4 *)((int)puVar20 + -4) = 0x80489f9;
        FUN_08048b88();
LAB_080489f9:
        *(undefined4 *)((int)puVar20 + -4) = 0x80489fe;
        FUN_08048b5d();
        *(undefined4 *)((int)puVar20 + -4) = 0x8048a03;
        FUN_08048bd4();
      } while( true );
    }
    if (iVar7 != 0x54495551) {
      if ((iVar7 != 0x54535953) && (iVar7 != 0x504f4f4e)) {
        *(undefined4 *)((int)puVar24 + -4) = 0x8048446;
        iVar7 = FUN_08048b88();
        goto LAB_08048446;
      }
      goto LAB_080489f4;
    }
LAB_08048a65:
    *(undefined4 *)((int)puVar24 + -4) = 0x8048a6f;
    FUN_08048b8e();
    piVar3 = puVar24;
LAB_080482c1:
    do {
      do {
        do {
          piVar8 = piVar3;
          piVar8[-1] = 1;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          *piVar8 = 0x10;
          piVar8[-1] = (int)&DAT_08048f78;
          piVar8[-2] = (int)puVar5;
          piVar8[-3] = 2;
          piVar8[-3] = 0x66;
          pcVar2 = (code *)swi(0x80);
          iVar7 = (*pcVar2)();
          piVar3 = piVar8 + 2;
        } while (iVar7 != 0);
        piVar8[1] = 5;
        *piVar8 = (int)puVar5;
        piVar8[-1] = 4;
        piVar8[-1] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar7 = (*pcVar2)();
        piVar3 = piVar8 + 3;
      } while (iVar7 != 0);
      piVar8[2] = (int)puVar5;
      piVar8[1] = 0x80482f9;
      FUN_08048ca2();
      puVar21 = (undefined *)piVar8[2];
      piVar8[2] = 2;
      pcVar2 = (code *)swi(0x80);
      iVar7 = (*pcVar2)();
      piVar17 = piVar8 + 4;
      piVar3 = piVar8 + 4;
      puVar5 = puVar21;
    } while (iVar7 != 0);
    do {
      do {
        puVar9 = piVar17;
        DAT_08048e79 = 0x10;
        puVar9[-1] = &DAT_08048e79;
        puVar9[-2] = &DAT_08048d7a;
        puVar9[-3] = puVar21;
        puVar9[-4] = 5;
        puVar9[-4] = 0x66;
        pcVar2 = (code *)swi(0x80);
        puVar5 = (undefined *)(*pcVar2)();
        piVar17 = puVar9 + 1;
      } while ((int)puVar5 < 0);
      *puVar9 = 2;
      pcVar2 = (code *)swi(0x80);
      iVar7 = (*pcVar2)();
      puVar24 = puVar9 + 2;
      piVar17 = puVar9 + 2;
    } while (iVar7 != 0);
    unaff_ESI = 0;
    puVar9[1] = 0x8048345;
    FUN_08048b8e();
  } while( true );
LAB_0804878a:
  *(undefined4 *)((int)puVar14 + -4) = 0x8048794;
  iVar7 = FUN_08048b88();
  piVar17 = puVar14;
  goto LAB_08048794;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_08048b8e(void)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  short sVar4;
  undefined *puVar5;
  int iVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_ECX;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined *puVar21;
  char *pcVar22;
  char *pcVar23;
  undefined4 unaff_ESI;
  undefined4 *puVar24;
  undefined2 *puVar25;
  undefined2 *puVar26;
  byte bVar27;
  undefined8 uVar28;
  undefined4 unaff_retaddr;
  
  bVar27 = 0;
  iVar7 = in_ECX;
  do {
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  pcVar2 = (code *)swi(0x80);
  puVar5 = (undefined *)register0x00000010;
  (*pcVar2)();
  cVar1 = DAT_08048d79;
  DAT_08048d79 = DAT_08048d79 + -1;
  if (DAT_08048d79 != '\0') {
    DAT_08048d79 = cVar1;
    return CONCAT44(in_ECX,unaff_retaddr);
  }
  puVar24 = (undefined4 *)&stack0x0000000c;
  do {
    while( true ) {
      do {
        *(undefined4 *)((int)puVar24 + -4) = 0x804834f;
        iVar7 = FUN_08048358();
      } while (iVar7 == 0);
      if (DAT_08048d68 == '\0') break;
LAB_08048446:
      puVar10 = (undefined4 *)((int)puVar24 + -4);
      *(undefined4 *)((int)puVar24 + -4) = unaff_ESI;
      DAT_08048fac = 1;
      if (iVar7 == 0x52544552) {
LAB_08048473:
        *(undefined4 *)((int)puVar24 + -8) = 0x8048478;
        FUN_08048b5d();
        *(undefined4 *)((int)puVar24 + -4) = *(undefined4 *)((int)puVar24 + -4);
        *(undefined4 *)((int)puVar24 + -8) = 5;
        pcVar2 = (code *)swi(0x80);
        iVar7 = (*pcVar2)();
        puVar20 = puVar24;
        if (-1 < iVar7) {
          *(undefined4 *)((int)puVar24 + -4) = 0x80484af;
          FUN_08048b8e();
          if (((DAT_08048fac & 2) == 0) && (DAT_08048d75 != 0)) {
            *(undefined4 *)((int)puVar24 + -4) = 0x13;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar24 = (undefined4 *)((int)puVar24 + 4);
          }
          while( true ) {
            puVar24[-1] = 0x80484d6;
            iVar7 = FUN_08048358();
            puVar20 = puVar24;
            if (iVar7 == 0x524f4241 || iVar7 == 0x4f4241f2) goto LAB_08048533;
            puVar24[-1] = 3;
            pcVar2 = (code *)swi(0x80);
            iVar7 = (*pcVar2)();
            puVar20 = puVar24 + 1;
            if (iVar7 == 0) break;
            if (DAT_08048d18 == 'A') {
              *puVar24 = 0x8048507;
              FUN_08048b0c();
              puVar24 = puVar24 + 1;
            }
            else {
              *puVar24 = 4;
              pcVar2 = (code *)swi(0x80);
              (*pcVar2)();
              puVar24 = puVar24 + 2;
            }
          }
          do {
            puVar20[-1] = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            *puVar20 = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar20[1] = 0x8048533;
            FUN_08048b88();
            puVar20 = puVar20 + 2;
LAB_08048533:
            *(undefined4 *)((int)puVar20 + -4) = 0x804853d;
            FUN_08048b8e();
          } while( true );
        }
LAB_0804853f:
        *puVar20 = 6;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar10 = puVar20 + 2;
        puVar20[1] = 0x8048553;
        iVar7 = FUN_08048b88();
      }
      else {
        DAT_08048fac = 2;
        if (iVar7 == 0x524f5453) {
          puVar20 = (undefined4 *)((int)puVar24 + -4);
          if ((_DAT_08048d69 & 1) != 0) goto LAB_08048473;
          goto LAB_0804853f;
        }
      }
      puVar24 = (undefined4 *)*puVar10;
      piVar12 = puVar10 + 1;
      DAT_08048d75 = 0;
      if (iVar7 == 0x54534552) {
        *puVar10 = 0x8048572;
        DAT_08048d75 = FUN_08048af6();
        *puVar10 = 0x8048581;
        iVar7 = FUN_08048b88();
      }
      DAT_08048fac = 3;
      if ((short)iVar7 == 0x494c) {
        if (puVar24 == (undefined4 *)0x0) {
          *puVar10 = 0x80485a0;
          FUN_08048358();
        }
        *puVar10 = 0x6a;
        pcVar2 = (code *)swi(0x80);
        iVar7 = (*pcVar2)();
        puVar20 = puVar10 + 2;
        if (-1 < iVar7) {
          puVar10[1] = 0x80485c3;
          FUN_08048b8e();
          puVar10[1] = 2;
          pcVar2 = (code *)swi(0x80);
          iVar7 = (*pcVar2)();
          puVar20 = puVar10 + 3;
          if (iVar7 != 0) {
LAB_080486ae:
            do {
              puVar11 = puVar20;
              puVar11[-1] = 2;
              puVar11[-1] = 0x72;
              pcVar2 = (code *)swi(0x80);
              iVar7 = (*pcVar2)();
              puVar20 = puVar11 + 1;
            } while (iVar7 < 0);
            *puVar11 = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            piVar12 = puVar11 + 2;
            puVar24 = (undefined4 *)0x0;
            puVar11[1] = 0x80486d9;
            iVar7 = FUN_08048b88();
            goto LAB_080486d9;
          }
          puVar10[2] = 0x2a;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar10[3] = 2;
          pcVar2 = (code *)swi(0x80);
          iVar7 = (*pcVar2)();
          if (iVar7 == 0) {
            puVar10[4] = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar10[5] = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar10[6] = 1;
            puVar10[6] = 0x3f;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar10[7] = puVar24;
            DAT_08048f88 = s__bin_ls_08048050;
            pcVar22 = &DAT_08048058;
            DAT_08048f8c = &DAT_08048058;
            for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
              pcVar22 = pcVar22 + (uint)bVar27 * -2 + 1;
            }
            if (DAT_0804afb1 != '\r') {
              puVar10[6] = 0x8048685;
              FUN_08048b5d();
              _DAT_08048f90 = pcVar22;
              if (*pcVar22 == '-') {
                _DAT_08048f90 = pcVar22 + 4;
              }
            }
            puVar10[7] = 0xb;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar10[8] = 1;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar20 = puVar10 + 10;
            goto LAB_080486ae;
          }
          puVar10[4] = 6;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          piVar17 = puVar10 + 6;
          while( true ) {
            piVar17[-1] = 3;
            pcVar2 = (code *)swi(0x80);
            iVar7 = (*pcVar2)();
            piVar3 = piVar17 + 1;
            if (iVar7 == 0) break;
            *piVar17 = iVar7;
            piVar17[-1] = 0x804860f;
            iVar7 = FUN_08048358();
            if (iVar7 == 0x524f4241 || iVar7 == 0x4f4241f2) {
              *piVar17 = 0x8048634;
              FUN_08048b8e();
              piVar3 = piVar17 + 1;
              break;
            }
            *piVar17 = 0x8048623;
            FUN_08048b0c();
            piVar17 = piVar17 + 1;
          }
          goto LAB_080482c1;
        }
        goto LAB_080489f4;
      }
LAB_080486d9:
      piVar17 = piVar12;
      if ((short)iVar7 == 0x4f50) {
        do {
          piVar12[-1] = 0x80486fa;
          FUN_08048ab6();
        } while (extraout_ECX != 1);
        piVar12[-1] = 0;
        DAT_08048f84 = CONCAT22(CONCAT11((char)*(undefined2 *)(piVar12 + -1),
                                         (char)((ushort)*(undefined2 *)(piVar12 + -1) >> 8)),
                                CONCAT11((char)*(undefined2 *)((int)piVar12 + -2),
                                         (char)((ushort)*(undefined2 *)((int)piVar12 + -2) >> 8)));
        piVar12[-1] = 0x8048717;
        FUN_08048ab6();
        piVar12[-1] = 0x804871f;
        FUN_08048ab6();
        DAT_08048f80 = 2;
        piVar12[-1] = 6;
        piVar12[-2] = 1;
        piVar12[-3] = 2;
        piVar12[-4] = 1;
        piVar12[-4] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar7 = (*pcVar2)();
        piVar13 = piVar12 + 1;
        if (-1 < iVar7) {
          *piVar12 = iVar7;
          piVar12[-1] = 0x10;
          piVar12[-2] = (int)&DAT_08048f80;
          piVar12[-3] = iVar7;
          piVar12[-4] = 3;
          piVar12[-4] = 0x66;
          pcVar2 = (code *)swi(0x80);
          iVar7 = (*pcVar2)();
          piVar13 = piVar12 + 1;
          if (-1 < iVar7) {
            piVar13 = piVar12 + 2;
            piVar12[1] = 0x8048762;
            FUN_08048b88();
          }
        }
        piVar13[-1] = 0x804876c;
        FUN_08048b8e();
        piVar13[-1] = 2;
        piVar13[-2] = (int)puVar5;
        piVar13[-3] = 0xd;
        piVar13[-3] = 0x66;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        *piVar13 = 6;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        piVar3 = piVar13 + 2;
        goto LAB_080482c1;
      }
LAB_08048794:
      if (iVar7 == 0x56534150) {
        puVar24 = &DAT_08048f78;
        DAT_08048f78 = 2;
        _DAT_08048f7c = 0;
        piVar17[-1] = 6;
        piVar17[-2] = 1;
        piVar17[-3] = 2;
        piVar17[-4] = 1;
        piVar17[-4] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar7 = (*pcVar2)();
        puVar14 = piVar17 + 1;
        if (iVar7 < 0) goto LAB_0804878a;
        *piVar17 = 4;
        piVar17[-1] = (int)&DAT_0804804c;
        piVar17[-2] = 2;
        piVar17[-3] = 1;
        piVar17[-4] = iVar7;
        piVar17[-5] = 0xe;
        piVar17[-5] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar6 = (*pcVar2)();
        puVar14 = piVar17 + 2;
        if (iVar6 < 0) goto LAB_0804878a;
        piVar17[1] = 0x10;
        *piVar17 = (int)&DAT_08048f78;
        piVar17[-1] = iVar7;
        piVar17[-2] = 2;
        piVar17[-2] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar6 = (*pcVar2)();
        puVar14 = piVar17 + 3;
        if (iVar6 < 0) goto LAB_0804878a;
        piVar17[2] = 0x10;
        piVar17[1] = (int)(piVar17 + 2);
        *piVar17 = (int)&DAT_08048f78;
        piVar17[-1] = iVar7;
        piVar17[-2] = 6;
        piVar17[-2] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar6 = (*pcVar2)();
        puVar15 = (undefined *)((int)piVar17 + 10);
        *(undefined2 *)((int)piVar17 + 10) = DAT_08048f78._2_2_;
        if (iVar6 < 0) {
LAB_08048788:
          puVar14 = (undefined4 *)(puVar15 + 8);
          goto LAB_0804878a;
        }
        *(undefined4 *)((int)piVar17 + 6) = 1;
        *(int *)((int)piVar17 + 2) = iVar7;
        *(undefined4 *)((int)piVar17 + -2) = 4;
        *(undefined4 *)((int)piVar17 + -2) = 0x66;
        pcVar2 = (code *)swi(0x80);
        uVar28 = (*pcVar2)();
        puVar15 = (undefined *)((int)piVar17 + 0xe);
        if ((int)uVar28 < 0) goto LAB_08048788;
        *(int *)((int)piVar17 + 10) = (int)((ulonglong)uVar28 >> 0x20);
        *(undefined4 **)((int)piVar17 + 6) = &DAT_08048f78;
        *(undefined **)((int)piVar17 + 2) = puVar5;
        *(undefined4 *)((int)piVar17 + -2) = 6;
        *(undefined4 *)((int)piVar17 + -2) = 0x66;
        pcVar2 = (code *)swi(0x80);
        DAT_08048d71 = iVar7;
        iVar7 = (*pcVar2)();
        puVar15 = (undefined *)((int)piVar17 + 0x12);
        if (iVar7 < 0) goto LAB_08048788;
        *(undefined4 *)((int)piVar17 + 0xe) = 0x8048875;
        FUN_08048b8e();
        puVar26 = &DAT_08048fad;
        do {
          *(undefined4 *)((int)piVar17 + 0xe) = 0x8048883;
          FUN_08048acc();
          puVar25 = (undefined2 *)((int)puVar26 + (uint)bVar27 * -2 + 1);
          *(undefined *)puVar26 = 0x2c;
          puVar26 = puVar25;
        } while (extraout_ECX_00 != 1);
        puVar16 = (undefined4 *)((int)piVar17 + 0x16);
        *(undefined4 *)((int)piVar17 + 0x12) = 0x8048894;
        FUN_08048acc();
        puVar26 = (undefined2 *)((int)puVar25 + (uint)bVar27 * -2 + 1);
        *(undefined *)puVar25 = 0x2c;
        *(undefined4 *)((int)piVar17 + 0x12) = 0x80488a2;
        FUN_08048acc();
        piVar17 = (int *)((int)piVar17 + 0x1a);
        puVar24 = (undefined4 *)(puVar26 + (uint)bVar27 * -2 + 1);
        *puVar26 = 0xa0d;
        *puVar16 = 0x80488bb;
        iVar7 = FUN_08048b7f();
      }
      *(undefined4 **)((int)piVar17 + -4) = puVar24;
      pcVar22 = &DAT_08048d18;
      if ((((short)iVar7 == 0x5954) || (pcVar22 = (char *)0x8048d19, (short)iVar7 == 0x4f4d)) ||
         (pcVar22 = &DAT_08048d1a, puVar18 = (undefined4 *)((int)piVar17 + -4), iVar7 == 0x55525453)
         ) {
        pcVar23 = &DAT_08048d1b;
        iVar7 = 4;
        do {
          if (DAT_0804afb2 == *pcVar23) {
            *pcVar22 = DAT_0804afb2;
            break;
          }
          pcVar23 = pcVar23 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        *(undefined4 *)((int)piVar17 + -4) = 0x8048900;
        iVar7 = FUN_08048b88();
        puVar18 = piVar17;
      }
      puVar19 = puVar18;
      if ((short)iVar7 == 0x4443) goto LAB_0804899c;
      puVar18[-1] = iVar7;
      puVar18[-2] = 0x8048910;
      FUN_08048b5d();
      iVar7 = puVar18[-1];
      unaff_ESI = *puVar18;
      puVar20 = puVar18 + 1;
      puVar24 = puVar18 + 1;
      sVar4 = (short)iVar7;
      if (sVar4 == 0x4b4d) {
        puVar20 = puVar18 + 1;
        if ((_DAT_08048d69 & 2) != 0) {
          *puVar18 = 0x27;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar20 = puVar18 + 2;
        }
        goto LAB_080489f4;
      }
      if (sVar4 == 0x4d52) {
        puVar20 = puVar18 + 1;
        if ((_DAT_08048d69 & 2) != 0) {
          *puVar18 = 0x28;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar20 = puVar18 + 2;
        }
        goto LAB_080489f4;
      }
      if (sVar4 == 0x4544) {
        puVar20 = puVar18 + 1;
        if ((_DAT_08048d69 & 2) != 0) {
          *puVar18 = 10;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar20 = puVar18 + 2;
        }
        goto LAB_080489f4;
      }
      puVar19 = puVar18 + 1;
      if (sVar4 == 0x5743) {
LAB_0804899c:
        *(undefined4 *)((int)puVar19 + -4) = 0xc;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar20 = (undefined4 *)((int)puVar19 + 4);
        goto LAB_080489f4;
      }
      if (iVar7 == 0x455a4953) {
        *puVar18 = unaff_ESI;
        puVar18[-1] = 0x6a;
        pcVar2 = (code *)swi(0x80);
        iVar7 = (*pcVar2)();
        puVar20 = puVar18 + 1;
        if (iVar7 < 0) goto LAB_080489f4;
        *puVar18 = 0x8048972;
        FUN_08048b8e();
        *puVar18 = 0x804897e;
        FUN_08048acc();
        DAT_08048fad = 0xa0d;
        puVar19 = puVar18 + 2;
        puVar18[1] = 0x8048997;
        FUN_08048b7f();
        goto LAB_0804899c;
      }
      if (sVar4 == 0x5355) goto LAB_080489f9;
      if (iVar7 == 0x53534150) goto LAB_08048a06;
      puVar20 = puVar18 + 1;
      if ((sVar4 == 0x5953) || (puVar20 = puVar18 + 1, sVar4 == 0x4f4e)) goto LAB_080489f4;
      puVar24 = puVar18 + 1;
      if (sVar4 == 0x5551) goto LAB_08048a65;
      if (sVar4 != 0x5750) {
        puVar20 = puVar18 + 1;
        if ((iVar7 == 0x524f4241) || (puVar20 = puVar18 + 1, iVar7 == 0x4f4241f2))
        goto LAB_080489f4;
        *puVar18 = 0x8048a65;
        FUN_08048b88();
        puVar24 = puVar18 + 1;
        goto LAB_08048a65;
      }
      *puVar18 = 0x8048a7e;
      FUN_08048b8e();
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar26 = &DAT_08048fad;
      do {
        puVar25 = (undefined2 *)((int)puVar26 + (uint)bVar27 * -2 + 1);
        cVar1 = *(char *)puVar26;
        puVar26 = puVar25;
      } while (cVar1 != '\0');
      *(undefined4 *)((int)puVar25 + -1) = 0xa0d22;
      puVar18[1] = 4;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar24 = puVar18 + 3;
    }
    puVar20 = puVar24;
    if (iVar7 == 0x52455355) goto LAB_080489f9;
    if (iVar7 == 0x53534150) {
LAB_08048a06:
      *(undefined4 *)((int)puVar24 + -4) = 0x8048a0b;
      FUN_08048b5d();
      *(undefined4 *)((int)puVar24 + -4) = 0x8048a10;
      FUN_08048c29();
      puVar20 = puVar24;
LAB_080489f4:
      do {
        *(undefined4 *)((int)puVar20 + -4) = 0x80489f9;
        FUN_08048b88();
LAB_080489f9:
        *(undefined4 *)((int)puVar20 + -4) = 0x80489fe;
        FUN_08048b5d();
        *(undefined4 *)((int)puVar20 + -4) = 0x8048a03;
        FUN_08048bd4();
      } while( true );
    }
    if (iVar7 != 0x54495551) {
      if ((iVar7 != 0x54535953) && (iVar7 != 0x504f4f4e)) {
        *(undefined4 *)((int)puVar24 + -4) = 0x8048446;
        iVar7 = FUN_08048b88();
        goto LAB_08048446;
      }
      goto LAB_080489f4;
    }
LAB_08048a65:
    *(undefined4 *)((int)puVar24 + -4) = 0x8048a6f;
    FUN_08048b8e();
    piVar3 = puVar24;
LAB_080482c1:
    do {
      do {
        do {
          piVar8 = piVar3;
          piVar8[-1] = 1;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          *piVar8 = 0x10;
          piVar8[-1] = (int)&DAT_08048f78;
          piVar8[-2] = (int)puVar5;
          piVar8[-3] = 2;
          piVar8[-3] = 0x66;
          pcVar2 = (code *)swi(0x80);
          iVar7 = (*pcVar2)();
          piVar3 = piVar8 + 2;
        } while (iVar7 != 0);
        piVar8[1] = 5;
        *piVar8 = (int)puVar5;
        piVar8[-1] = 4;
        piVar8[-1] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar7 = (*pcVar2)();
        piVar3 = piVar8 + 3;
      } while (iVar7 != 0);
      piVar8[2] = (int)puVar5;
      piVar8[1] = 0x80482f9;
      FUN_08048ca2();
      puVar21 = (undefined *)piVar8[2];
      piVar8[2] = 2;
      pcVar2 = (code *)swi(0x80);
      iVar7 = (*pcVar2)();
      piVar17 = piVar8 + 4;
      piVar3 = piVar8 + 4;
      puVar5 = puVar21;
    } while (iVar7 != 0);
    do {
      do {
        puVar9 = piVar17;
        DAT_08048e79 = 0x10;
        puVar9[-1] = &DAT_08048e79;
        puVar9[-2] = &DAT_08048d7a;
        puVar9[-3] = puVar21;
        puVar9[-4] = 5;
        puVar9[-4] = 0x66;
        pcVar2 = (code *)swi(0x80);
        puVar5 = (undefined *)(*pcVar2)();
        piVar17 = puVar9 + 1;
      } while ((int)puVar5 < 0);
      *puVar9 = 2;
      pcVar2 = (code *)swi(0x80);
      iVar7 = (*pcVar2)();
      puVar24 = puVar9 + 2;
      piVar17 = puVar9 + 2;
    } while (iVar7 != 0);
    unaff_ESI = 0;
    puVar9[1] = 0x8048345;
    FUN_08048b8e();
  } while( true );
LAB_0804878a:
  *(undefined4 *)((int)puVar14 + -4) = 0x8048794;
  iVar7 = FUN_08048b88();
  piVar17 = puVar14;
  goto LAB_08048794;
}



void FUN_08048bbf(void)

{
  char cVar1;
  char *unaff_ESI;
  
  do {
    cVar1 = *unaff_ESI;
    unaff_ESI = unaff_ESI + 1;
  } while (cVar1 != '\n');
  return;
}



void FUN_08048bc5(void)

{
  char *pcVar1;
  char cVar2;
  char *unaff_ESI;
  
  do {
    do {
      pcVar1 = unaff_ESI + 1;
      cVar2 = *unaff_ESI;
      unaff_ESI = pcVar1;
    } while (cVar2 == ' ');
  } while (cVar2 == '\t');
  return;
}



undefined4 FUN_08048bd4(void)

{
  char cVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 unaff_ESI;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = DAT_08048d60;
  do {
    cVar1 = FUN_08048bc5();
    if (cVar1 != ';') {
      uVar3 = uVar2;
      FUN_08048cf0(uVar2,unaff_ESI);
      if (extraout_ECX == 0) {
        DAT_08048d64 = 0;
        return 0x13;
      }
      uVar2 = uVar3;
      FUN_08048cf0(uVar3,unaff_ESI);
      if (extraout_ECX_00 == 0) {
        DAT_08048d64 = uVar3;
        return 0x13;
      }
    }
    FUN_08048bbf();
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_08048c29(void)

{
  byte bVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  int extraout_ECX;
  byte *pbVar5;
  byte bVar7;
  byte *pbVar6;
  
  pcVar3 = DAT_08048d64;
  bVar7 = 0;
  DAT_08048d68 = 0;
  if ((DAT_08048d64 != (char *)0x0) &&
     ((FUN_08048bc5(), *pcVar3 == '*' || (FUN_08048cf0(pcVar3), extraout_ECX == 0)))) {
    FUN_08048bc5();
    _DAT_08048d69 = FUN_08048af6();
    FUN_08048bc5();
    pbVar6 = (byte *)(pcVar3 + 2);
    do {
      pbVar5 = pbVar6 + (uint)bVar7 * -2 + 1;
      bVar1 = *pbVar6;
      pbVar6 = pbVar5;
    } while (0x20 < bVar1);
    pbVar5[-1] = 0;
    pcVar2 = (code *)swi(0x80);
    iVar4 = (*pcVar2)();
    if (-1 < iVar4) {
      pcVar2 = (code *)swi(0x80);
      iVar4 = (*pcVar2)();
      if (-1 < iVar4) {
        DAT_08048d68 = 1;
        return 7;
      }
    }
  }
  return 0x14;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_08048ca2(int param_1,undefined4 param_2)

{
  char cVar1;
  code *pcVar2;
  short sVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined *puVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  int iVar19;
  int unaff_EBP;
  char *pcVar20;
  char *pcVar21;
  undefined4 uVar22;
  undefined4 *puVar23;
  undefined2 *puVar24;
  undefined2 *puVar25;
  byte bVar26;
  undefined8 uVar27;
  
  bVar26 = 0;
  pcVar2 = (code *)swi(0x80);
  iVar4 = (*pcVar2)();
  piVar15 = &param_1;
  if (-1 < iVar4) {
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x80);
    param_1 = iVar4;
    iVar4 = (*pcVar2)();
    piVar15 = &param_2;
    unaff_EBP = 0;
    if (-1 < iVar4) {
      param_2 = 6;
      pcVar2 = (code *)swi(0x80);
      DAT_08048d60 = iVar4;
      (*pcVar2)();
      return;
    }
  }
LAB_080482c1:
  do {
    do {
      do {
        piVar5 = piVar15;
        piVar5[-1] = 1;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        *piVar5 = 0x10;
        piVar5[-1] = (int)&DAT_08048f78;
        piVar5[-2] = unaff_EBP;
        piVar5[-3] = 2;
        piVar5[-3] = 0x66;
        pcVar2 = (code *)swi(0x80);
        iVar4 = (*pcVar2)();
        piVar15 = piVar5 + 2;
      } while (iVar4 != 0);
      piVar5[1] = 5;
      *piVar5 = unaff_EBP;
      piVar5[-1] = 4;
      piVar5[-1] = 0x66;
      pcVar2 = (code *)swi(0x80);
      iVar4 = (*pcVar2)();
      piVar15 = piVar5 + 3;
    } while (iVar4 != 0);
    piVar5[2] = unaff_EBP;
    piVar5[1] = 0x80482f9;
    FUN_08048ca2();
    iVar19 = piVar5[2];
    piVar5[2] = 2;
    pcVar2 = (code *)swi(0x80);
    iVar4 = (*pcVar2)();
    piVar8 = piVar5 + 4;
    piVar15 = piVar5 + 4;
    unaff_EBP = iVar19;
  } while (iVar4 != 0);
  do {
    do {
      puVar6 = piVar8;
      DAT_08048e79 = 0x10;
      puVar6[-1] = &DAT_08048e79;
      puVar6[-2] = &DAT_08048d7a;
      puVar6[-3] = iVar19;
      puVar6[-4] = 5;
      puVar6[-4] = 0x66;
      pcVar2 = (code *)swi(0x80);
      unaff_EBP = (*pcVar2)();
      piVar8 = puVar6 + 1;
    } while (unaff_EBP < 0);
    *puVar6 = 2;
    pcVar2 = (code *)swi(0x80);
    iVar4 = (*pcVar2)();
    puVar23 = puVar6 + 2;
    piVar8 = puVar6 + 2;
  } while (iVar4 != 0);
  uVar22 = 0;
  puVar6[1] = 0x8048345;
  FUN_08048b8e();
  do {
    do {
      *(undefined4 *)((int)puVar23 + -4) = 0x804834f;
      iVar4 = FUN_08048358();
    } while (iVar4 == 0);
    if (DAT_08048d68 == '\0') {
      puVar18 = puVar23;
      if (iVar4 == 0x52455355) goto LAB_080489f9;
      if (iVar4 == 0x53534150) {
LAB_08048a06:
        *(undefined4 *)((int)puVar23 + -4) = 0x8048a0b;
        FUN_08048b5d();
        *(undefined4 *)((int)puVar23 + -4) = 0x8048a10;
        FUN_08048c29();
        puVar18 = puVar23;
LAB_080489f4:
        do {
          *(undefined4 *)((int)puVar18 + -4) = 0x80489f9;
          FUN_08048b88();
LAB_080489f9:
          *(undefined4 *)((int)puVar18 + -4) = 0x80489fe;
          FUN_08048b5d();
          *(undefined4 *)((int)puVar18 + -4) = 0x8048a03;
          FUN_08048bd4();
        } while( true );
      }
      if (iVar4 == 0x54495551) goto LAB_08048a65;
      if ((iVar4 == 0x54535953) || (iVar4 == 0x504f4f4e)) goto LAB_080489f4;
      *(undefined4 *)((int)puVar23 + -4) = 0x8048446;
      iVar4 = FUN_08048b88();
    }
    puVar7 = (undefined4 *)((int)puVar23 + -4);
    *(undefined4 *)((int)puVar23 + -4) = uVar22;
    DAT_08048fac = 1;
    if (iVar4 == 0x52544552) {
LAB_08048473:
      *(undefined4 *)((int)puVar23 + -8) = 0x8048478;
      FUN_08048b5d();
      *(undefined4 *)((int)puVar23 + -4) = *(undefined4 *)((int)puVar23 + -4);
      *(undefined4 *)((int)puVar23 + -8) = 5;
      pcVar2 = (code *)swi(0x80);
      iVar4 = (*pcVar2)();
      puVar18 = puVar23;
      if (-1 < iVar4) {
        *(undefined4 *)((int)puVar23 + -4) = 0x80484af;
        FUN_08048b8e();
        if (((DAT_08048fac & 2) == 0) && (DAT_08048d75 != 0)) {
          *(undefined4 *)((int)puVar23 + -4) = 0x13;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar23 = (undefined4 *)((int)puVar23 + 4);
        }
        while( true ) {
          puVar23[-1] = 0x80484d6;
          iVar4 = FUN_08048358();
          puVar18 = puVar23;
          if (iVar4 == 0x524f4241 || iVar4 == 0x4f4241f2) goto LAB_08048533;
          puVar23[-1] = 3;
          pcVar2 = (code *)swi(0x80);
          iVar4 = (*pcVar2)();
          puVar18 = puVar23 + 1;
          if (iVar4 == 0) break;
          if (DAT_08048d18 == 'A') {
            *puVar23 = 0x8048507;
            FUN_08048b0c();
            puVar23 = puVar23 + 1;
          }
          else {
            *puVar23 = 4;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar23 = puVar23 + 2;
          }
        }
        do {
          puVar18[-1] = 6;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          *puVar18 = 6;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar18[1] = 0x8048533;
          FUN_08048b88();
          puVar18 = puVar18 + 2;
LAB_08048533:
          *(undefined4 *)((int)puVar18 + -4) = 0x804853d;
          FUN_08048b8e();
        } while( true );
      }
LAB_0804853f:
      *puVar18 = 6;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar7 = puVar18 + 2;
      puVar18[1] = 0x8048553;
      iVar4 = FUN_08048b88();
    }
    else {
      DAT_08048fac = 2;
      if (iVar4 == 0x524f5453) {
        puVar18 = (undefined4 *)((int)puVar23 + -4);
        if ((_DAT_08048d69 & 1) != 0) goto LAB_08048473;
        goto LAB_0804853f;
      }
    }
    puVar23 = (undefined4 *)*puVar7;
    piVar10 = puVar7 + 1;
    DAT_08048d75 = 0;
    if (iVar4 == 0x54534552) {
      *puVar7 = 0x8048572;
      DAT_08048d75 = FUN_08048af6();
      *puVar7 = 0x8048581;
      iVar4 = FUN_08048b88();
    }
    DAT_08048fac = 3;
    if ((short)iVar4 == 0x494c) {
      if (puVar23 == (undefined4 *)0x0) {
        *puVar7 = 0x80485a0;
        FUN_08048358();
      }
      *puVar7 = 0x6a;
      pcVar2 = (code *)swi(0x80);
      iVar4 = (*pcVar2)();
      puVar18 = puVar7 + 2;
      if (iVar4 < 0) goto LAB_080489f4;
      puVar7[1] = 0x80485c3;
      FUN_08048b8e();
      puVar7[1] = 2;
      pcVar2 = (code *)swi(0x80);
      iVar4 = (*pcVar2)();
      puVar18 = puVar7 + 3;
      if (iVar4 == 0) {
        puVar7[2] = 0x2a;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar7[3] = 2;
        pcVar2 = (code *)swi(0x80);
        iVar4 = (*pcVar2)();
        if (iVar4 != 0) {
          puVar7[4] = 6;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          piVar8 = puVar7 + 6;
          break;
        }
        puVar7[4] = 6;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar7[5] = 6;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar7[6] = 1;
        puVar7[6] = 0x3f;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar7[7] = puVar23;
        DAT_08048f88 = s__bin_ls_08048050;
        pcVar20 = &DAT_08048058;
        DAT_08048f8c = &DAT_08048058;
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          pcVar20 = pcVar20 + (uint)bVar26 * -2 + 1;
        }
        if (DAT_0804afb1 != '\r') {
          puVar7[6] = 0x8048685;
          FUN_08048b5d();
          _DAT_08048f90 = pcVar20;
          if (*pcVar20 == '-') {
            _DAT_08048f90 = pcVar20 + 4;
          }
        }
        puVar7[7] = 0xb;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar7[8] = 1;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar18 = puVar7 + 10;
      }
      do {
        puVar9 = puVar18;
        puVar9[-1] = 2;
        puVar9[-1] = 0x72;
        pcVar2 = (code *)swi(0x80);
        iVar4 = (*pcVar2)();
        puVar18 = puVar9 + 1;
      } while (iVar4 < 0);
      *puVar9 = 6;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      piVar10 = puVar9 + 2;
      puVar23 = (undefined4 *)0x0;
      puVar9[1] = 0x80486d9;
      iVar4 = FUN_08048b88();
    }
    piVar15 = piVar10;
    if ((short)iVar4 == 0x4f50) goto LAB_080486f2;
LAB_08048794:
    if (iVar4 == 0x56534150) {
      puVar23 = &DAT_08048f78;
      DAT_08048f78 = 2;
      _DAT_08048f7c = 0;
      piVar15[-1] = 6;
      piVar15[-2] = 1;
      piVar15[-3] = 2;
      piVar15[-4] = 1;
      piVar15[-4] = 0x66;
      pcVar2 = (code *)swi(0x80);
      iVar4 = (*pcVar2)();
      puVar12 = piVar15 + 1;
      if (iVar4 < 0) goto LAB_0804878a;
      *piVar15 = 4;
      piVar15[-1] = (int)&DAT_0804804c;
      piVar15[-2] = 2;
      piVar15[-3] = 1;
      piVar15[-4] = iVar4;
      piVar15[-5] = 0xe;
      piVar15[-5] = 0x66;
      pcVar2 = (code *)swi(0x80);
      iVar19 = (*pcVar2)();
      puVar12 = piVar15 + 2;
      if (iVar19 < 0) goto LAB_0804878a;
      piVar15[1] = 0x10;
      *piVar15 = (int)&DAT_08048f78;
      piVar15[-1] = iVar4;
      piVar15[-2] = 2;
      piVar15[-2] = 0x66;
      pcVar2 = (code *)swi(0x80);
      iVar19 = (*pcVar2)();
      puVar12 = piVar15 + 3;
      if (iVar19 < 0) goto LAB_0804878a;
      piVar15[2] = 0x10;
      piVar15[1] = (int)(piVar15 + 2);
      *piVar15 = (int)&DAT_08048f78;
      piVar15[-1] = iVar4;
      piVar15[-2] = 6;
      piVar15[-2] = 0x66;
      pcVar2 = (code *)swi(0x80);
      iVar19 = (*pcVar2)();
      puVar13 = (undefined *)((int)piVar15 + 10);
      *(undefined2 *)((int)piVar15 + 10) = DAT_08048f78._2_2_;
      if (iVar19 < 0) {
LAB_08048788:
        puVar12 = (undefined4 *)(puVar13 + 8);
        goto LAB_0804878a;
      }
      *(undefined4 *)((int)piVar15 + 6) = 1;
      *(int *)((int)piVar15 + 2) = iVar4;
      *(undefined4 *)((int)piVar15 + -2) = 4;
      *(undefined4 *)((int)piVar15 + -2) = 0x66;
      pcVar2 = (code *)swi(0x80);
      uVar27 = (*pcVar2)();
      puVar13 = (undefined *)((int)piVar15 + 0xe);
      if ((int)uVar27 < 0) goto LAB_08048788;
      *(int *)((int)piVar15 + 10) = (int)((ulonglong)uVar27 >> 0x20);
      *(undefined4 **)((int)piVar15 + 6) = &DAT_08048f78;
      *(int *)((int)piVar15 + 2) = unaff_EBP;
      *(undefined4 *)((int)piVar15 + -2) = 6;
      *(undefined4 *)((int)piVar15 + -2) = 0x66;
      pcVar2 = (code *)swi(0x80);
      DAT_08048d71 = iVar4;
      iVar4 = (*pcVar2)();
      puVar13 = (undefined *)((int)piVar15 + 0x12);
      if (iVar4 < 0) goto LAB_08048788;
      *(undefined4 *)((int)piVar15 + 0xe) = 0x8048875;
      FUN_08048b8e();
      puVar25 = &DAT_08048fad;
      do {
        *(undefined4 *)((int)piVar15 + 0xe) = 0x8048883;
        FUN_08048acc();
        puVar24 = (undefined2 *)((int)puVar25 + (uint)bVar26 * -2 + 1);
        *(undefined *)puVar25 = 0x2c;
        puVar25 = puVar24;
      } while (extraout_ECX_00 != 1);
      puVar14 = (undefined4 *)((int)piVar15 + 0x16);
      *(undefined4 *)((int)piVar15 + 0x12) = 0x8048894;
      FUN_08048acc();
      puVar25 = (undefined2 *)((int)puVar24 + (uint)bVar26 * -2 + 1);
      *(undefined *)puVar24 = 0x2c;
      *(undefined4 *)((int)piVar15 + 0x12) = 0x80488a2;
      FUN_08048acc();
      piVar15 = (int *)((int)piVar15 + 0x1a);
      puVar23 = (undefined4 *)(puVar25 + (uint)bVar26 * -2 + 1);
      *puVar25 = 0xa0d;
      *puVar14 = 0x80488bb;
      iVar4 = FUN_08048b7f();
    }
    *(undefined4 **)((int)piVar15 + -4) = puVar23;
    pcVar20 = &DAT_08048d18;
    if ((((short)iVar4 == 0x5954) || (pcVar20 = (char *)0x8048d19, (short)iVar4 == 0x4f4d)) ||
       (pcVar20 = &DAT_08048d1a, puVar16 = (undefined4 *)((int)piVar15 + -4), iVar4 == 0x55525453))
    {
      pcVar21 = &DAT_08048d1b;
      iVar4 = 4;
      do {
        if (DAT_0804afb2 == *pcVar21) {
          *pcVar20 = DAT_0804afb2;
          break;
        }
        pcVar21 = pcVar21 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      *(undefined4 *)((int)piVar15 + -4) = 0x8048900;
      iVar4 = FUN_08048b88();
      puVar16 = piVar15;
    }
    puVar17 = puVar16;
    if ((short)iVar4 == 0x4443) goto LAB_0804899c;
    puVar16[-1] = iVar4;
    puVar16[-2] = 0x8048910;
    FUN_08048b5d();
    iVar4 = puVar16[-1];
    uVar22 = *puVar16;
    puVar18 = puVar16 + 1;
    puVar23 = puVar16 + 1;
    sVar3 = (short)iVar4;
    if (sVar3 == 0x4b4d) {
      puVar18 = puVar16 + 1;
      if ((_DAT_08048d69 & 2) != 0) {
        *puVar16 = 0x27;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar18 = puVar16 + 2;
      }
      goto LAB_080489f4;
    }
    if (sVar3 == 0x4d52) {
      puVar18 = puVar16 + 1;
      if ((_DAT_08048d69 & 2) != 0) {
        *puVar16 = 0x28;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar18 = puVar16 + 2;
      }
      goto LAB_080489f4;
    }
    if (sVar3 == 0x4544) {
      puVar18 = puVar16 + 1;
      if ((_DAT_08048d69 & 2) != 0) {
        *puVar16 = 10;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar18 = puVar16 + 2;
      }
      goto LAB_080489f4;
    }
    puVar17 = puVar16 + 1;
    if (sVar3 == 0x5743) {
LAB_0804899c:
      *(undefined4 *)((int)puVar17 + -4) = 0xc;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar18 = (undefined4 *)((int)puVar17 + 4);
      goto LAB_080489f4;
    }
    if (iVar4 == 0x455a4953) {
      *puVar16 = uVar22;
      puVar16[-1] = 0x6a;
      pcVar2 = (code *)swi(0x80);
      iVar4 = (*pcVar2)();
      puVar18 = puVar16 + 1;
      if (iVar4 < 0) goto LAB_080489f4;
      *puVar16 = 0x8048972;
      FUN_08048b8e();
      *puVar16 = 0x804897e;
      FUN_08048acc();
      DAT_08048fad = 0xa0d;
      puVar17 = puVar16 + 2;
      puVar16[1] = 0x8048997;
      FUN_08048b7f();
      goto LAB_0804899c;
    }
    if (sVar3 == 0x5355) goto LAB_080489f9;
    if (iVar4 == 0x53534150) goto LAB_08048a06;
    puVar18 = puVar16 + 1;
    if ((sVar3 == 0x5953) || (puVar18 = puVar16 + 1, sVar3 == 0x4f4e)) goto LAB_080489f4;
    puVar23 = puVar16 + 1;
    if (sVar3 == 0x5551) goto LAB_08048a65;
    if (sVar3 != 0x5750) {
      puVar18 = puVar16 + 1;
      if ((iVar4 == 0x524f4241) || (puVar18 = puVar16 + 1, iVar4 == 0x4f4241f2)) goto LAB_080489f4;
      *puVar16 = 0x8048a65;
      FUN_08048b88();
      puVar23 = puVar16 + 1;
      goto LAB_08048a65;
    }
    *puVar16 = 0x8048a7e;
    FUN_08048b8e();
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    puVar25 = &DAT_08048fad;
    do {
      puVar24 = (undefined2 *)((int)puVar25 + (uint)bVar26 * -2 + 1);
      cVar1 = *(char *)puVar25;
      puVar25 = puVar24;
    } while (cVar1 != '\0');
    *(undefined4 *)((int)puVar24 + -1) = 0xa0d22;
    puVar16[1] = 4;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    puVar23 = puVar16 + 3;
  } while( true );
LAB_080485ee:
  piVar8[-1] = 3;
  pcVar2 = (code *)swi(0x80);
  iVar4 = (*pcVar2)();
  piVar15 = piVar8 + 1;
  if (iVar4 == 0) goto LAB_080482c1;
  *piVar8 = iVar4;
  piVar8[-1] = 0x804860f;
  iVar4 = FUN_08048358();
  if (iVar4 == 0x524f4241 || iVar4 == 0x4f4241f2) {
    *piVar8 = 0x8048634;
    FUN_08048b8e();
    piVar15 = piVar8 + 1;
    goto LAB_080482c1;
  }
  *piVar8 = 0x8048623;
  FUN_08048b0c();
  piVar8 = piVar8 + 1;
  goto LAB_080485ee;
LAB_080486f2:
  do {
    piVar10[-1] = 0x80486fa;
    FUN_08048ab6();
  } while (extraout_ECX != 1);
  piVar10[-1] = 0;
  DAT_08048f84 = CONCAT22(CONCAT11((char)*(undefined2 *)(piVar10 + -1),
                                   (char)((ushort)*(undefined2 *)(piVar10 + -1) >> 8)),
                          CONCAT11((char)*(undefined2 *)((int)piVar10 + -2),
                                   (char)((ushort)*(undefined2 *)((int)piVar10 + -2) >> 8)));
  piVar10[-1] = 0x8048717;
  FUN_08048ab6();
  piVar10[-1] = 0x804871f;
  FUN_08048ab6();
  DAT_08048f80 = 2;
  piVar10[-1] = 6;
  piVar10[-2] = 1;
  piVar10[-3] = 2;
  piVar10[-4] = 1;
  piVar10[-4] = 0x66;
  pcVar2 = (code *)swi(0x80);
  iVar4 = (*pcVar2)();
  piVar11 = piVar10 + 1;
  if (-1 < iVar4) {
    *piVar10 = iVar4;
    piVar10[-1] = 0x10;
    piVar10[-2] = (int)&DAT_08048f80;
    piVar10[-3] = iVar4;
    piVar10[-4] = 3;
    piVar10[-4] = 0x66;
    pcVar2 = (code *)swi(0x80);
    iVar4 = (*pcVar2)();
    piVar11 = piVar10 + 1;
    if (-1 < iVar4) {
      piVar11 = piVar10 + 2;
      piVar10[1] = 0x8048762;
      FUN_08048b88();
    }
  }
  piVar11[-1] = 0x804876c;
  FUN_08048b8e();
  piVar11[-1] = 2;
  piVar11[-2] = unaff_EBP;
  piVar11[-3] = 0xd;
  piVar11[-3] = 0x66;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  *piVar11 = 6;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  piVar15 = piVar11 + 2;
  goto LAB_080482c1;
LAB_0804878a:
  *(undefined4 *)((int)puVar12 + -4) = 0x8048794;
  iVar4 = FUN_08048b88();
  piVar15 = puVar12;
  goto LAB_08048794;
LAB_08048a65:
  *(undefined4 *)((int)puVar23 + -4) = 0x8048a6f;
  FUN_08048b8e();
  piVar15 = puVar23;
  goto LAB_080482c1;
}



void FUN_08048cf0(void)

{
  char cVar1;
  char cVar2;
  uint extraout_ECX;
  uint uVar3;
  uint extraout_EDX;
  char *unaff_ESI;
  char *unaff_EDI;
  
  FUN_08048d0c();
  FUN_08048d0c();
  uVar3 = extraout_ECX;
  if (extraout_ECX < extraout_EDX) {
    uVar3 = extraout_EDX;
  }
  do {
    if (uVar3 == 0) {
      return;
    }
    uVar3 = uVar3 - 1;
    cVar1 = *unaff_ESI;
    cVar2 = *unaff_EDI;
    unaff_ESI = unaff_ESI + 1;
    unaff_EDI = unaff_EDI + 1;
  } while (cVar1 == cVar2);
  return;
}



void FUN_08048d0c(void)

{
  byte bVar1;
  byte *unaff_EDI;
  
  do {
    bVar1 = *unaff_EDI;
    unaff_EDI = unaff_EDI + 1;
  } while (0x20 < bVar1);
  return;
}


