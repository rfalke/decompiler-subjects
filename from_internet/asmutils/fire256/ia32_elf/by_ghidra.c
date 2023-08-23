typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
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

undefined4 processEntry
entry(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
     ,undefined4 param_6,undefined4 param_7,undefined8 *param_8,undefined4 param_9,
     undefined4 param_10,undefined4 param_11)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong *puVar3;
  short sVar4;
  ulonglong *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *extraout_ECX;
  byte *pbVar9;
  undefined2 *puVar10;
  uint *puVar11;
  char *pcVar12;
  ulonglong *in_ESI;
  int *piVar13;
  ulonglong *puVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  
  puVar14 = (ulonglong *)0x4b000;
  pcVar12 = s__dev_fb0_080483b0;
  pcVar2 = (code *)swi(0x80);
  puVar5 = (ulonglong *)(*pcVar2)();
  puVar11 = &param_3;
  if (-1 < (int)puVar5) {
    pcVar12 = &DAT_080933bc;
    pcVar2 = (code *)swi(0x80);
    DAT_08093ac4 = puVar5;
    puVar5 = (ulonglong *)(*pcVar2)();
    puVar11 = &param_4;
    if (-1 < (int)puVar5) {
      pcVar12 = &DAT_080933fc;
      param_3 = 0x36;
      pcVar2 = (code *)swi(0x80);
      puVar5 = (ulonglong *)(*pcVar2)();
      puVar3 = DAT_08093ac4;
      puVar11 = &param_5;
      if (-1 < (int)puVar5) {
        pcVar12 = (char *)0x0;
        in_ESI = (ulonglong *)0x1;
        param_4 = 3;
        pcVar2 = (code *)swi(0x80);
        puVar5 = (ulonglong *)(*pcVar2)();
        puVar11 = &param_6;
        puVar14 = puVar3;
        if (-1 < (int)puVar5) {
          _DAT_080933ee = puVar3;
          _DAT_080933fc = 0x280;
          _DAT_08093400 = 0x1e0;
          _DAT_08093404 = 0x280;
          _DAT_08093408 = 0x1e0;
          _DAT_08093414 = 8;
          pcVar12 = &DAT_080933fc;
          param_5 = 0x36;
          pcVar2 = (code *)swi(0x80);
          DAT_080933ea = puVar5;
          puVar5 = (ulonglong *)(*pcVar2)();
          puVar11 = &param_7;
          if (-1 < (int)puVar5) {
            _DAT_0809349c = 0;
            _DAT_080934a0 = 0x100;
            DAT_080934a4 = &DAT_080934b4;
            DAT_080934a8 = &DAT_080936b4;
            DAT_080934ac = &DAT_080938b4;
            _DAT_080934b0 = 0;
            pcVar12 = &DAT_0809349c;
            param_6 = 0x36;
            pcVar2 = (code *)swi(0x80);
            puVar5 = (ulonglong *)(*pcVar2)();
            puVar11 = (uint *)&param_8;
            if (-1 < (int)puVar5) {
              DAT_080934a4 = &DAT_080934b4;
              DAT_080934a8 = &DAT_080936b4;
              DAT_080934ac = &DAT_080938b4;
              in_ESI = (ulonglong *)&DAT_080934b4;
              puVar14 = (ulonglong *)&DAT_080936b4;
              puVar10 = &DAT_080938b4;
              iVar6 = 0;
              do {
                sVar4 = (short)(iVar6 << 8);
                *(short *)in_ESI = sVar4;
                *(undefined2 *)puVar14 = 0;
                *puVar10 = 0;
                *(undefined2 *)(in_ESI + 0x10) = 0x3f00;
                *(short *)(puVar14 + 0x10) = sVar4;
                puVar10[0x40] = 0;
                *(undefined2 *)(in_ESI + 0x20) = 0x3f00;
                *(undefined2 *)(puVar14 + 0x20) = 0x3f00;
                puVar10[0x80] = sVar4 * 2;
                *(undefined2 *)(in_ESI + 0x30) = 0x3f00;
                *(undefined2 *)(puVar14 + 0x30) = 0x3f00;
                puVar10[0xc0] = 0x3f00;
                in_ESI = (ulonglong *)((int)in_ESI + 2);
                puVar14 = (ulonglong *)((int)puVar14 + 2);
                puVar10 = puVar10 + 1;
                iVar6 = iVar6 + 1;
              } while (iVar6 != 0x40);
              pcVar12 = &DAT_0809349c;
              param_7 = 0x36;
              pcVar2 = (code *)swi(0x80);
              puVar5 = (ulonglong *)(*pcVar2)();
              puVar11 = &param_9;
              if (-1 < (int)puVar5) {
                DAT_08093ac8 = &DAT_08088405;
                DAT_08093acc = 0x1234567;
                param_8 = (undefined8 *)0x4e;
                pcVar2 = (code *)swi(0x80);
                (*pcVar2)();
                iVar6 = 1000;
                do {
                  param_8 = &DAT_080483bc;
                  piVar13 = &DAT_0809313c;
                  iVar7 = 0xa0;
                  do {
                    DAT_08093acc = DAT_08093acc * (int)DAT_08093ac8 + 1;
                    *piVar13 = DAT_08093acc;
                    uVar17 = DAT_080483a8;
                    uVar1 = DAT_080483a0;
                    piVar13 = piVar13 + 1;
                    iVar7 = iVar7 + -1;
                  } while (iVar7 != 0);
                  in_ESI = &DAT_080483bc;
                  uVar8 = 0x95b0;
                  puVar14 = DAT_080933ea;
                  do {
                    uVar15 = paddusb(in_ESI[0x50],*(undefined8 *)((int)in_ESI + 0x4ff));
                    uVar15 = paddusb(uVar15,in_ESI[0xa0]);
                    uVar16 = paddusb(uVar15,*(undefined8 *)((int)in_ESI + 0x501));
                    *puVar14 = uVar16;
                    pcVar12 = (char *)(uVar8 & 3);
                    if (pcVar12 == (char *)0x0) {
                      uVar16 = psubusb(uVar16,uVar17);
                    }
                    *in_ESI = uVar16 >> 2 & uVar1;
                    in_ESI = in_ESI + 1;
                    puVar14 = puVar14 + 1;
                    uVar8 = uVar8 - 1;
                  } while (uVar8 != 0);
                  iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
                param_9 = 0x4e;
                pcVar2 = (code *)swi(0x80);
                (*pcVar2)();
                param_10 = 0x8048356;
                FUN_08048376();
                param_10 = 4;
                pcVar2 = (code *)swi(0x80);
                (*pcVar2)();
                param_11 = 1;
                pcVar2 = (code *)swi(0x80);
                puVar5 = (ulonglong *)(*pcVar2)();
                puVar11 = (uint *)&stack0x0000002c;
              }
            }
          }
        }
      }
    }
  }
  puVar11[-1] = 1;
  pcVar2 = (code *)swi(0x80);
  uVar17 = (*pcVar2)();
  uVar8 = (uint)uVar17;
  *puVar11 = uVar8;
  puVar11[-1] = (uint)extraout_ECX;
  puVar11[-2] = (int)((ulonglong)uVar17 >> 0x20);
  puVar11[-3] = (uint)puVar5;
  puVar11[-4] = (uint)(puVar11 + 1);
  puVar11[-5] = (uint)pcVar12;
  puVar11[-6] = (uint)in_ESI;
  puVar11[-7] = (uint)puVar14;
  puVar11[-8] = 0;
  pbVar9 = extraout_ECX;
  do {
    pbVar9 = pbVar9 + -1;
    puVar11[-8] = puVar11[-8] + 1;
    uVar1 = (ulonglong)uVar8;
    uVar8 = uVar8 / 10;
    *pbVar9 = (byte)(uVar1 % 10) | 0x30;
  } while (uVar8 != 0);
  puVar11[-8] = 1;
  puVar11[-8] = 4;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  return puVar11[1];
}



undefined8 __regparm3 FUN_08048376(uint param_1,undefined4 param_2,byte *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined4 unaff_retaddr;
  
  pbVar3 = param_3;
  do {
    pbVar3 = pbVar3 + -1;
    uVar1 = (ulonglong)param_1;
    param_1 = param_1 / 10;
    *pbVar3 = (byte)(uVar1 % 10) | 0x30;
  } while (param_1 != 0);
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  return CONCAT44(param_3,unaff_retaddr);
}


