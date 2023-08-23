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
// WARNING: Instruction at (ram,0x0804832a) overlaps instruction at (ram,0x08048329)
// 
// WARNING: Removing unreachable block (ram,0x080483c8)
// WARNING: Removing unreachable block (ram,0x08048348)
// WARNING: Removing unreachable block (ram,0x08048299)
// WARNING: Removing unreachable block (ram,0x080482be)
// WARNING: Removing unreachable block (ram,0x080481fe)
// WARNING: Removing unreachable block (ram,0x08048225)
// WARNING: Removing unreachable block (ram,0x08048119)
// WARNING: Removing unreachable block (ram,0x0804813b)
// WARNING: Removing unreachable block (ram,0x0804811b)
// WARNING: Removing unreachable block (ram,0x0804810c)
// WARNING: Removing unreachable block (ram,0x080483bb)
// WARNING: Removing unreachable block (ram,0x080483b3)
// WARNING: Removing unreachable block (ram,0x08048248)
// WARNING: Removing unreachable block (ram,0x08048213)
// WARNING: Removing unreachable block (ram,0x080482a6)
// WARNING: Restarted to delay deadcode elimination for space: stack

int processEntry entry(undefined4 param_1,undefined4 param_2,int *param_3)

{
  ushort *puVar1;
  byte *pbVar2;
  uint *puVar3;
  undefined uVar4;
  short sVar5;
  longlong lVar6;
  code *pcVar7;
  char cVar8;
  int in_EAX;
  byte *pbVar9;
  uint uVar10;
  byte bVar11;
  int in_ECX;
  undefined2 uVar12;
  byte bVar16;
  int *piVar13;
  byte bVar15;
  undefined4 uVar14;
  int in_EBX;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  char **ppcVar28;
  undefined4 *puVar29;
  undefined *unaff_retaddr;
  int iVar30;
  int iVar31;
  int *piVar32;
  undefined4 *puVar34;
  undefined4 *puVar35;
  undefined4 *puVar36;
  undefined4 *puVar37;
  undefined *puVar38;
  undefined4 *puVar39;
  undefined4 *puVar40;
  undefined2 in_DS;
  undefined2 in_GS;
  int in_FS_OFFSET;
  int in_GS_OFFSET;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  byte bVar44;
  bool bVar45;
  int param_7;
  uint param_10;
  undefined *in_stack_00000028;
  ushort in_stack_0000002c;
  undefined2 in_stack_00000038;
  int in_stack_0000003c;
  undefined4 *in_stack_00000044;
  undefined4 *in_stack_00000048;
  int in_stack_0000004c;
  int in_stack_00000054;
  int *in_stack_00000058;
  int in_stack_0000005c;
  byte *in_stack_00000060;
  undefined4 *in_stack_00000064;
  undefined *in_stack_00000068;
  int in_stack_0000006c;
  int in_stack_00000074;
  int in_stack_00000078;
  int in_stack_0000007c;
  int in_stack_00000080;
  int *piVar33;
  
  bVar44 = 0;
  piVar13 = param_3;
  do {
    cVar8 = *(char *)piVar13;
    piVar33 = (int *)((int)piVar13 + 1);
    piVar13 = (int *)((int)piVar13 + 1);
  } while (cVar8 != '\0');
  do {
    piVar32 = (int *)((int)piVar33 + -1);
    piVar13 = piVar32;
    if (param_3 == piVar32) break;
    piVar13 = piVar33;
    piVar33 = piVar32;
  } while (*(char *)piVar32 != '/');
  for (iVar17 = 0; *(int *)((int)&DAT_0804804c + iVar17) != 0; iVar17 = iVar17 + 8) {
    if (*(int *)((int)&DAT_0804804c + iVar17) == *piVar13) {
      return in_EAX;
    }
  }
  pcVar7 = (code *)swi(0x80);
  (*pcVar7)();
  pcVar7 = (code *)swi(0x80);
  (*pcVar7)();
  bVar11 = (byte)((uint)param_2 >> 8);
  *(byte *)(in_ECX + 0x6f) = *(byte *)(in_ECX + 0x6f) & bVar11;
  out(in_EAX,(short)in_EAX);
  *(byte *)(in_EAX + 0x20) = *(byte *)(in_EAX + 0x20) & bVar11;
  *(undefined2 *)(unaff_retaddr + 0x6f) = *(undefined2 *)(unaff_retaddr + 0x6f);
  uVar4 = in((short)in_EAX);
  *unaff_retaddr = uVar4;
  unaff_retaddr[in_EBX * 2 + (uint)bVar44 * -2 + 0x70] =
       unaff_retaddr[in_EBX * 2 + (uint)bVar44 * -2 + 0x70] & (byte)((uint)in_EAX >> 8);
  *(undefined2 *)(param_7 + 10) = *(undefined2 *)(param_7 + 10);
  bVar41 = param_10 < 0x206e6120;
  bVar45 = SBORROW4(param_10,0x206e6120);
  bVar43 = (int)(param_10 + 0xdf919ee0) < 0;
  puVar20 = &stack0x00000044;
  out(*in_stack_00000028,in_stack_00000038);
  puVar1 = (ushort *)(in_stack_0000003c + 0x65);
  sVar5 = (in_stack_0000002c & 3) - (*puVar1 & 3);
  bVar42 = 0 < sVar5;
  *puVar1 = *puVar1 + (ushort)bVar41 * sVar5;
  out(in_stack_00000028[(uint)bVar44 * -2 + 1],in_stack_00000038);
  if (bVar42) {
LAB_0804816b:
    puVar34 = (undefined4 *)*puVar20;
    puVar35 = (undefined4 *)puVar20[1];
    iVar30 = puVar20[2];
    iVar18 = puVar20[4];
    piVar13 = (int *)puVar20[5];
    iVar17 = puVar20[6];
    pbVar9 = (byte *)puVar20[7];
    puVar39 = puVar20 + 8;
    puVar25 = puVar20 + 8;
    puVar36 = puVar20 + 8;
    uVar12 = SUB42(piVar13,0);
    if (bVar41) {
      puVar25 = puVar34 + (uint)bVar44 * -2 + 1;
      uVar14 = in(uVar12);
      *puVar34 = uVar14;
      puVar34 = puVar25;
      if (bVar45) {
        puVar38 = (undefined *)segment(in_GS,(short)puVar35);
        out(*puVar38,uVar12);
        puVar25 = puVar20 + 8;
        puVar40 = (undefined4 *)
                  CONCAT22((short)((uint)puVar35 >> 0x10),(short)puVar35 + 1 + (ushort)bVar44 * -2);
        goto joined_r0x080481e8;
      }
      if (!bVar42) {
        bVar41 = false;
        bVar11 = (byte)iVar17 | *(byte *)piVar13;
        bVar43 = (char)bVar11 < '\0';
        bVar42 = bVar11 == 0;
        puVar20[7] = puVar20 + 8;
        puVar21 = puVar20 + 6;
        puVar20[6] = &DAT_65207369;
        iVar17 = CONCAT31((int3)((uint)iVar17 >> 8),bVar11);
        puVar25 = puVar20 + 6;
        puVar40 = puVar35;
        if (bVar42) goto joined_r0x080481e8;
code_r0x08048183:
        out(*(char *)puVar35,(short)piVar13);
        if (!bVar42) {
          puVar34 = (undefined4 *)puVar21[1];
          iVar31 = puVar21[2];
          iVar19 = puVar21[4];
          iVar30 = puVar21[5];
          iVar18 = puVar21[6];
          iVar17 = puVar21[7];
          puVar25 = puVar21 + 8;
          puVar22 = puVar21 + 8;
          puVar38 = (undefined *)*puVar21 + (uint)bVar44 * -2 + 1;
          uVar4 = in((short)iVar30);
          *(undefined *)*puVar21 = uVar4;
          puVar39 = (undefined4 *)(puVar38 + (uint)bVar44 * -2 + 1);
          uVar4 = in((short)iVar30);
          *puVar38 = uVar4;
          if (bVar43) goto LAB_0804818b;
          goto LAB_080481ab;
        }
        goto LAB_080481fb;
      }
      puVar37 = (undefined4 *)((int)puVar25 + (uint)bVar44 * -2 + 1);
      uVar4 = in(uVar12);
      *(undefined *)puVar25 = uVar4;
      bVar11 = (byte)((uint)pbVar9 >> 8);
      if (!bVar42) {
        puVar1 = (ushort *)(iVar17 + 0x6c);
        *puVar1 = *puVar1 + (ushort)bVar41 * -(*puVar1 & 3);
        uVar4 = in(uVar12);
        *(undefined *)puVar37 = uVar4;
        *(byte *)((int)piVar13 + 0x69) = *(byte *)((int)piVar13 + 0x69) & bVar11;
        out(*(char *)puVar35,uVar12);
        puVar39 = (undefined4 *)puVar20[8];
        puVar34 = (undefined4 *)puVar20[9];
        uVar14 = puVar20[0xd];
        iVar18 = puVar20[0xe];
        puVar22 = puVar20 + 0x10;
        iVar30 = CONCAT31((int3)((uint)uVar14 >> 8),
                          (byte)uVar14 | *(byte *)(puVar20[0xf] + 0x65 + puVar20[10] * 2));
        *(byte *)(puVar39 + 0x1a) = *(byte *)(puVar39 + 0x1a) & (byte)((uint)uVar14 >> 8);
LAB_080481ab:
        *(undefined4 **)((int)puVar22 + -4) = puVar22;
        *(undefined4 *)((int)puVar22 + -8) = 0x68772065;
        out(*puVar34,(short)iVar30);
        uVar4 = in((short)iVar30);
        *(undefined *)puVar39 = uVar4;
        pbVar9 = (byte *)(in_GS_OFFSET + iVar18 + 100);
        *pbVar9 = *pbVar9 & (byte)((uint)iVar18 >> 8);
        pbVar9 = (byte *)(*(int *)((int)puVar22 + 0xc) + 0x65);
        *pbVar9 = *pbVar9 & (byte)((uint)*(undefined4 *)((int)puVar22 + 0x14) >> 8);
        bVar11 = *pbVar9;
        *(undefined **)((int)puVar22 + 0x14) = &DAT_20646e69;
        puVar39 = *(undefined4 **)((int)puVar22 + 0x14);
        pbVar9 = *(byte **)((int)puVar22 + 0x30);
        iVar17 = *(int *)((int)puVar22 + 0x2c);
        piVar13 = *(int **)((int)puVar22 + 0x28);
        iVar18 = *(int *)((int)puVar22 + 0x24);
        puVar25 = (undefined4 *)((int)puVar22 + 0x34);
        iVar30 = *(int *)((int)puVar22 + 0x1c);
        goto code_r0x080481d1;
      }
      puVar25 = puVar35 + (uint)bVar44 * -2 + 1;
      out(*puVar35,uVar12);
      *(char *)(iVar17 + 0x6e) = *(char *)(iVar17 + 0x6e) - bVar11;
      pbVar2 = (byte *)((int)puVar37 + in_FS_OFFSET + 0x66);
      *pbVar2 = *pbVar2 & (byte)((uint)iVar17 >> 8);
      pbVar2 = (byte *)(iVar18 + 0x6f);
      *pbVar2 = *pbVar2 & bVar11;
      if (*pbVar2 != 0) {
        pbVar2 = (byte *)(in_GS_OFFSET + iVar17 + 0x6e);
        *pbVar2 = *pbVar2 & bVar11;
        goto code_r0x08048287;
      }
code_r0x0804827d:
      *(byte *)(iVar30 + 0x73) = *(byte *)(iVar30 + 0x73) & (byte)((uint)piVar13 >> 8);
      puVar37 = *(undefined4 **)((int)puVar36 + 0x20);
      iVar30 = *(int *)((int)puVar36 + 0x28);
      iVar18 = *(int *)((int)puVar36 + 0x30);
      piVar13 = *(int **)((int)puVar36 + 0x34);
      iVar17 = *(int *)((int)puVar36 + 0x38);
      pbVar9 = *(byte **)((int)puVar36 + 0x3c);
      out(**(undefined **)((int)puVar36 + 0x24),(short)piVar13);
      puVar25 = (undefined4 *)(*(undefined **)((int)puVar36 + 0x24) + (uint)bVar44 * -2 + 1);
code_r0x08048287:
      pbVar2 = (byte *)((int)piVar13 + in_FS_OFFSET + 0x65);
      *pbVar2 = *pbVar2 & (byte)((uint)piVar13 >> 8);
      bVar42 = *pbVar2 == 0;
      puVar35 = puVar25;
LAB_0804828b:
      puVar34 = (undefined4 *)((int)puVar37 + (uint)bVar44 * -2 + 1);
      uVar4 = in((short)piVar13);
      *(undefined *)puVar37 = uVar4;
      puVar36 = (undefined4 *)(*(int *)(iVar17 + 0x62) * 0x7320656c);
      if (bVar42) {
        iVar30 = *(int *)(*(int *)(iVar30 + 0x65) * 0x206e6f20 + 0x70) * 0x69766f72;
code_r0x08048304:
        out(*(char *)puVar35,(short)piVar13);
        pbVar2 = (byte *)segment(in_DS,(short)puVar35 + (ushort)bVar44 * -2 + 0x69);
        *pbVar2 = *pbVar2 & (byte)((uint)piVar13 >> 8);
        lVar6 = (longlong)*(int *)(iVar18 + 0x20) * 0x72756f73;
        puVar40 = (undefined4 *)lVar6;
        bVar45 = (int)puVar40 != lVar6;
        puVar25 = puVar36;
        goto code_r0x08048310;
      }
code_r0x08048295:
      puVar25 = puVar36;
      puVar40 = puVar35;
      if (bVar42) {
LAB_080482fc:
        pbVar2 = (byte *)(iVar17 + 0x6d);
        *pbVar2 = *pbVar2 & (byte)((uint)iVar17 >> 8);
        puVar35 = puVar40 + (uint)bVar44 * -2 + 1;
        out(*puVar40,(short)piVar13);
        puVar36 = puVar25;
        if (*pbVar2 == 0) goto LAB_0804836d;
        goto code_r0x08048304;
      }
code_r0x08048297:
      bVar41 = false;
      bVar45 = false;
      *pbVar9 = *pbVar9 & (byte)((uint)pbVar9 >> 8);
      bVar11 = *pbVar9;
      bVar42 = *pbVar9 == 0;
      *(undefined4 **)((int)puVar36 + -4) = puVar36;
      puVar25 = (undefined4 *)((int)puVar36 + -8);
      *(undefined4 *)((int)puVar36 + -8) = 0x61642065;
      if ((char)bVar11 < '\0') {
        puVar39 = (undefined4 *)((int)puVar36 + -0xc);
        puVar25 = (undefined4 *)((int)puVar36 + -0xc);
        *(undefined4 *)((int)puVar36 + -0xc) = 0x6e0a7361;
        puVar37 = puVar35 + (uint)bVar44 * -2 + 1;
        out(*puVar35,(short)piVar13);
        if (!bVar42) {
          *(undefined2 *)((int)puVar34 + 0x6d) = *(undefined2 *)((int)puVar34 + 0x6d);
          pbVar2 = (byte *)(in_GS_OFFSET + iVar17 + 0x65);
          *pbVar2 = *pbVar2 & (byte)((uint)iVar18 >> 8);
          bVar11 = *pbVar2;
          puVar40 = puVar34;
joined_r0x080482b0:
          if (bVar11 != 0) {
            pbVar2 = (byte *)((int)piVar13 + 0x75);
            *pbVar2 = *pbVar2 & (byte)((uint)pbVar9 >> 8);
            bVar42 = *pbVar2 == 0;
            puVar34 = puVar40;
            goto code_r0x080482b6;
          }
          puVar34 = (undefined4 *)((int)puVar40 + (uint)bVar44 * -2 + 1);
          uVar4 = in((short)piVar13);
          *(undefined *)puVar40 = uVar4;
          pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),(char)pbVar9 + -10);
          puVar35 = puVar37 + (uint)bVar44 * -2 + 1;
          out(*puVar37,(short)piVar13);
          goto LAB_080482de_7;
        }
        puVar37 = *(undefined4 **)((int)puVar36 + -0xc);
        puVar35 = *(undefined4 **)((int)puVar36 + -8);
        iVar30 = *(int *)((int)puVar36 + -4);
        iVar18 = *(int *)((int)puVar36 + 4);
        piVar13 = *(int **)((int)puVar36 + 8);
        iVar17 = *(int *)((int)puVar36 + 0xc);
        pbVar9 = *(byte **)((int)puVar36 + 0x10);
        puVar25 = (undefined4 *)((int)puVar36 + 0x14);
code_r0x080482c9:
        bVar41 = false;
        *(byte *)(iVar30 + 0x61) = *(byte *)(iVar30 + 0x61) & (byte)((uint)pbVar9 >> 8);
        puVar1 = (ushort *)(pbVar9 + 0x20);
        bVar42 = 0 < (short)(((ushort)iVar30 & 3) - (*puVar1 & 3));
        *puVar1 = *puVar1;
        goto LAB_080482cf;
      }
LAB_080482c1_1:
      puVar37 = puVar34;
      if (!bVar41) goto code_r0x080482c5;
LAB_080482de_7:
      pbVar2 = (byte *)((int)puVar35 + 0x6f);
      bVar45 = false;
      *pbVar2 = *pbVar2 & (byte)((uint)iVar17 >> 8);
      bVar42 = *pbVar2 == 0;
      puVar40 = puVar35;
code_r0x080482e8:
      if (bVar42) {
        if (!bVar45) {
          puVar26 = (undefined4 *)((int)puVar25 + -4);
          puVar25 = (undefined4 *)((int)puVar25 + -4);
          *puVar26 = 0x6d69206f;
          goto LAB_08048331;
        }
        if (!bVar45) {
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        goto code_r0x0804830e;
      }
      if (bVar45 || bVar42) {
        if (!bVar45) goto LAB_08048360_2;
        pbVar2 = (byte *)(in_GS_OFFSET + iVar17 + 0x6f);
        *pbVar2 = *pbVar2 & (byte)((uint)iVar18 >> 8);
        bVar42 = *pbVar2 == 0;
        goto code_r0x080482f2;
      }
      goto LAB_0804834d;
    }
    if (!bVar42) {
code_r0x08048257:
      puVar25 = (undefined4 *)((int)puVar39 + -4);
      *(undefined4 *)((int)puVar39 + -4) = 0x70207265;
      if (!bVar41) {
        if (bVar41) goto LAB_080482c1_1;
        puVar37 = puVar34 + (uint)bVar44 * -2 + 1;
        uVar12 = SUB42(piVar13,0);
        uVar14 = in(uVar12);
        *puVar34 = uVar14;
        bVar11 = (byte)((uint)pbVar9 >> 8);
        if (!bVar41) {
          *(byte *)(iVar17 + 0x6e) = *(byte *)(iVar17 + 0x6e) & bVar11;
          puVar25 = puVar35;
          goto code_r0x08048287;
        }
        puVar25 = (undefined4 *)((int)puVar39 + -4);
        if (bVar41 || bVar42) {
          puVar38 = (undefined *)((int)puVar37 + (uint)bVar44 * -2 + 1);
          uVar4 = in(uVar12);
          *(undefined *)puVar37 = uVar4;
          puVar40 = (undefined4 *)(puVar38 + (uint)bVar44 * -2 + 1);
          uVar4 = in(uVar12);
          *puVar38 = uVar4;
          uVar10 = CONCAT22((short)((uint)pbVar9 >> 0x10),
                            CONCAT11(bVar11 | *(byte *)((int)piVar13 + 0x65),(char)pbVar9));
          puVar25 = (undefined4 *)((int)puVar39 + -4);
          goto LAB_0804826b;
        }
LAB_080482cf:
        if (!bVar41) {
          uVar4 = in((short)piVar13);
          *(undefined *)puVar37 = uVar4;
          goto code_r0x080482d2;
        }
        puVar40 = (undefined4 *)((int)puVar35 + (uint)bVar44 * -2 + 1);
        out(*(char *)puVar35,(short)piVar13);
        goto code_r0x08048333;
      }
      puVar25 = (undefined4 *)((int)puVar39 + -8);
      *(undefined4 *)((int)puVar39 + -8) = 0x6c657220;
code_r0x080482d2:
      puVar39 = *(undefined4 **)((int)puVar25 + 4);
      iVar30 = *(int *)((int)puVar25 + 8);
      iVar18 = *(int *)((int)puVar25 + 0x10);
      piVar13 = *(int **)((int)puVar25 + 0x14);
      pbVar9 = *(byte **)((int)puVar25 + 0x1c);
      if (bVar41) {
        pbVar9 = (byte *)(iVar30 + 0x65);
        *pbVar9 = *pbVar9 & (byte)*(undefined4 *)((int)puVar25 + 0x18);
        bVar42 = *pbVar9 == 0;
        puVar34 = *(undefined4 **)((int)puVar25 + 0x20);
        puVar38 = *(undefined **)((int)puVar25 + 0x24);
        iVar30 = *(int *)((int)puVar25 + 0x28);
        iVar18 = *(int *)((int)puVar25 + 0x30);
        piVar13 = *(int **)((int)puVar25 + 0x34);
        iVar17 = *(int *)((int)puVar25 + 0x38);
        pbVar9 = *(byte **)((int)puVar25 + 0x3c);
        puVar25 = (undefined4 *)((int)puVar25 + 0x40);
        goto code_r0x080482db;
      }
      puVar27 = (undefined4 *)((int)puVar25 + 0x1c);
      puVar25 = (undefined4 *)((int)puVar25 + 0x1c);
      *puVar27 = 0x62612065;
      goto code_r0x08048340;
    }
    puVar36 = puVar35 + (uint)bVar44 * -2 + 1;
    out(*puVar35,uVar12);
code_r0x080481e4:
    bVar41 = pbVar9 < (byte *)0x656e6567;
    pbVar9 = pbVar9 + -0x656e6567;
    bVar43 = (int)pbVar9 < 0;
    bVar42 = pbVar9 == (byte *)0x0;
    puVar40 = puVar36;
joined_r0x080481e8:
    puVar39 = puVar25;
    if (!bVar41) {
      if (!bVar42) {
        out(*puVar40,(short)piVar13);
        puVar39 = puVar34 + (uint)bVar44 * -2 + 1;
        uVar14 = in((short)piVar13);
        *puVar34 = uVar14;
        goto LAB_080481f3;
      }
LAB_08048252:
      puVar35 = (undefined4 *)((int)puVar40 + (uint)bVar44 * -2 + 1);
      out(*(char *)puVar40,(short)piVar13);
      puVar25 = puVar34 + 0x1d;
      bVar41 = false;
      bVar45 = false;
      *(byte *)puVar25 = *(byte *)puVar25 & (byte)((uint)iVar17 >> 8);
      bVar42 = *(byte *)puVar25 == 0;
      goto code_r0x08048257;
    }
    if (bVar41) {
      bVar11 = (byte)((uint)pbVar9 >> 8);
      *pbVar9 = *pbVar9 & bVar11;
      if (*pbVar9 != 0) {
        *(byte *)(iVar17 + 0x73) = *(byte *)(iVar17 + 0x73) & (byte)((uint)iVar17 >> 8);
        pbVar2 = (byte *)(iVar18 + 0x6c);
        bVar41 = false;
        *pbVar2 = *pbVar2 & bVar11;
        bVar42 = *pbVar2 == 0;
        goto LAB_080482c0;
      }
      goto LAB_08048252;
    }
code_r0x0804827a:
    puVar36 = puVar25;
    if (bVar41) goto code_r0x0804827d;
    if (!bVar43) {
      puVar40 = (undefined4 *)((int)puVar40 + 1);
LAB_08048360_2:
      *piVar13 = *piVar13 + -1;
      goto code_r0x08048360;
    }
code_r0x080482f2:
    if (bVar42) {
      pbVar2 = (byte *)(iVar17 + 0x6d + iVar30 * 2);
      *pbVar2 = *pbVar2 & (byte)((uint)piVar13 >> 8);
      pbVar2 = (byte *)((int)puVar34 + in_GS_OFFSET + 0x6e);
      *pbVar2 = *pbVar2 & (byte)((uint)iVar17 >> 8);
      goto LAB_080482fc;
    }
  }
  else {
    puVar25 = &stack0x00000064;
    puVar39 = &stack0x00000064;
    puVar21 = &stack0x00000064;
    bVar15 = (byte)((uint)in_stack_00000058 >> 8);
    uVar12 = SUB42(in_stack_00000058,0);
    bVar11 = (byte)((uint)in_stack_0000005c >> 8);
    pbVar9 = in_stack_00000060;
    iVar17 = in_stack_0000005c;
    piVar13 = in_stack_00000058;
    iVar18 = in_stack_00000054;
    if (bVar41) {
      puVar39 = in_stack_00000044 + (uint)bVar44 * -2 + 1;
      uVar14 = in(uVar12);
      *in_stack_00000044 = uVar14;
      iVar30 = in_stack_0000004c;
      if (bVar45) {
        out(*(char *)in_stack_00000048,uVar12);
        pbVar2 = (byte *)(in_FS_OFFSET + in_stack_0000005c + 0x74);
        *pbVar2 = *pbVar2 & bVar11;
        *(byte *)(in_stack_0000005c + 0x73) = *(byte *)(in_stack_0000005c + 0x73) & bVar11;
        pbVar2 = in_stack_00000060 + in_stack_0000004c * 2 + 0x61;
        *pbVar2 = *pbVar2 & bVar15;
        bVar11 = *pbVar2;
        puVar25 = &stack0x00000064;
code_r0x080481d1:
        if (bVar11 != 0) {
          puVar36 = (undefined4 *)(*(int *)(pbVar9 + 0x73) * 0x6c756f68);
          puVar34 = puVar39;
          goto code_r0x080481db;
        }
LAB_080481f3:
        *(byte *)(puVar39 + 0x1d) = *(byte *)(puVar39 + 0x1d) & (byte)((uint)iVar17 >> 8);
LAB_080481f6:
        puVar21 = (undefined4 *)((int)puVar25 + -4);
        *(undefined **)((int)puVar25 + -4) = &DAT_2e207265;
LAB_080481fb:
        puVar40 = (undefined4 *)*puVar21;
        puVar35 = (undefined4 *)puVar21[1];
        iVar30 = puVar21[2];
        iVar18 = puVar21[4];
        piVar13 = (int *)puVar21[5];
        iVar17 = puVar21[6];
        uVar10 = puVar21[7];
        puVar25 = puVar21 + 8;
LAB_0804826b:
        *(byte *)(iVar17 + 0x6e) = *(byte *)(iVar17 + 0x6e) & (byte)((uint)iVar17 >> 8);
        *(byte *)(iVar17 + 0x20) = *(byte *)(iVar17 + 0x20) & (byte)(uVar10 >> 8);
        puVar34 = puVar40 + (uint)bVar44 * -2 + 1;
        uVar14 = in((short)piVar13);
        *puVar40 = uVar14;
        puVar40 = puVar35 + (uint)bVar44 * -2 + 1;
        out(*puVar35,(short)piVar13);
        bVar41 = uVar10 < 0x6c2d726f;
        pbVar9 = (byte *)(uVar10 + 0x93d28d91);
        bVar43 = (int)pbVar9 < 0;
        bVar42 = pbVar9 == (byte *)0x0;
        goto code_r0x0804827a;
      }
      puVar34 = puVar39 + (uint)bVar44 * -2 + 1;
      uVar14 = in(uVar12);
      *puVar39 = uVar14;
      bVar41 = false;
      DAT_6228090a = DAT_6228090a & bVar11;
      bVar43 = (char)DAT_6228090a < '\0';
      bVar42 = DAT_6228090a == 0;
      if (!bVar43) {
        puVar35 = in_stack_00000048;
        puVar25 = &stack0x00000064;
        puVar40 = in_stack_00000048;
        if (!bVar42) goto code_r0x08048183;
        goto joined_r0x080481e8;
      }
      puVar20 = (undefined4 *)&stack0x00000084;
      puVar25 = (undefined4 *)&stack0x00000084;
      out(*in_stack_00000068,(short)in_stack_00000078);
      pbVar9 = (byte *)(in_stack_0000007c + 0x6e);
      bVar41 = false;
      bVar45 = false;
      *pbVar9 = *pbVar9 & (byte)((uint)in_stack_00000080 >> 8);
      bVar43 = (char)*pbVar9 < '\0';
      puVar1 = (ushort *)(in_stack_0000007c + 0x65);
      bVar42 = 0 < (short)(((ushort)in_stack_0000006c & 3) - (*puVar1 & 3));
      *puVar1 = *puVar1;
      puVar34 = (undefined4 *)(in_stack_00000068 + (uint)bVar44 * -2 + 1 + (uint)bVar44 * -2 + 1);
      out(in_stack_00000068[(uint)bVar44 * -2 + 1],(short)in_stack_00000078);
      iVar17 = in_stack_00000080;
      iVar18 = in_stack_0000007c;
      iVar30 = in_stack_00000078;
      iVar19 = in_stack_00000074;
      iVar31 = in_stack_0000006c;
      puVar39 = in_stack_00000064;
      if (!bVar42) goto LAB_0804816b;
LAB_0804818b:
      if (!bVar42) goto LAB_080481f6;
      puVar38 = (undefined *)((int)puVar39 + (uint)bVar44 * -2 + 1);
      uVar12 = (undefined2)iVar30;
      uVar4 = in(uVar12);
      *(undefined *)puVar39 = uVar4;
      puVar40 = (undefined4 *)(puVar38 + (uint)bVar44 * -2 + 1);
      uVar4 = in(uVar12);
      *puVar38 = uVar4;
      bVar11 = (byte)((uint)iVar17 >> 8);
      *(byte *)(iVar30 + 0x65) = *(byte *)(iVar30 + 0x65) & bVar11;
      pbVar9 = (byte *)(iVar17 + 0x65 + iVar31 * 2);
      bVar15 = (byte)((uint)iVar30 >> 8);
      *pbVar9 = *pbVar9 & bVar15;
      pbVar9 = (byte *)(iVar18 + 0x73);
      *pbVar9 = *pbVar9 & bVar11;
      bVar11 = *pbVar9;
      puVar39 = puVar40 + (uint)bVar44 * -2 + 1;
      uVar14 = in(uVar12);
      *puVar40 = uVar14;
      if (bVar11 == 0) {
        puVar22 = (undefined4 *)(*(int *)(iVar19 + 0x61) * 0x62206c6c);
        goto LAB_080481ab;
      }
      pbVar9 = (byte *)(in_GS_OFFSET + iVar19 + 0x74);
      *pbVar9 = *pbVar9 & bVar15;
      bVar42 = *pbVar9 == 0;
      puVar34 = (undefined4 *)*puVar25;
      puVar35 = (undefined4 *)puVar25[1];
      iVar30 = puVar25[2];
      iVar18 = puVar25[4];
      piVar13 = (int *)puVar25[5];
      iVar17 = puVar25[6];
      pbVar9 = (byte *)puVar25[7];
      puVar24 = puVar25 + 8;
      puVar39 = puVar25 + 8;
      puVar37 = puVar34;
      if (!bVar42) goto LAB_0804828b;
      bVar11 = (byte)((uint)pbVar9 >> 8);
      *(byte *)(iVar18 + 0x6f) = *(byte *)(iVar18 + 0x6f) & bVar11;
      puVar3 = (uint *)(pbVar9 + in_GS_OFFSET);
      bVar45 = (undefined *)*puVar3 < puVar25 + 8;
      *puVar3 = *puVar3 - (int)(puVar25 + 8);
      bVar42 = *puVar3 == 0;
      if (bVar45 || bVar42) {
        if (bVar42) goto LAB_0804828c_2;
        bVar16 = (byte)((uint)piVar13 >> 8);
        *(byte *)(iVar18 + 0x6f) = *(byte *)(iVar18 + 0x6f) & bVar16;
        puVar40 = puVar34 + (uint)bVar44 * -2 + 1;
        uVar14 = in((short)piVar13);
        *puVar34 = uVar14;
        bVar16 = bVar16 | *(byte *)(in_GS_OFFSET + iVar18 + 99);
        uVar12 = CONCAT11(bVar16,(char)piVar13);
        piVar13 = (int *)CONCAT22((short)((uint)piVar13 >> 0x10),uVar12);
        bVar15 = (byte)((uint)iVar17 >> 8);
        pbVar2 = (byte *)((int)puVar40 + 0x69);
        *pbVar2 = *pbVar2 & bVar16;
        if (*pbVar2 == 0) {
          puVar34 = (undefined4 *)puVar25[8];
          puVar35 = (undefined4 *)puVar25[9];
          iVar30 = puVar25[10];
          iVar18 = puVar25[0xc];
          piVar13 = (int *)puVar25[0xd];
          iVar17 = puVar25[0xe];
          pbVar9 = (byte *)puVar25[0xf];
          puVar36 = puVar25 + 0x10;
          goto code_r0x08048297;
        }
        *(byte *)((int)puVar35 + 0x6f) = *(byte *)((int)puVar35 + 0x6f) & bVar15;
        pbVar2 = (byte *)(iVar30 + 0x61);
        *pbVar2 = *pbVar2 & bVar15;
        puVar37 = (undefined4 *)((int)puVar35 + (uint)bVar44 * -2 + 1);
        out(*(char *)puVar35,uVar12);
        if (*pbVar2 != 0) {
          pbVar2 = pbVar9 + 0x61;
          *pbVar2 = *pbVar2 & bVar15;
          bVar11 = *pbVar2;
          puVar25 = puVar25 + 8;
          goto joined_r0x080482b0;
        }
        puVar34 = (undefined4 *)((int)puVar40 + (uint)bVar44 * -2 + 1);
        uVar4 = in(uVar12);
        *(undefined *)puVar40 = uVar4;
        pbVar2 = (byte *)(iVar17 + 100);
        *pbVar2 = *pbVar2 & bVar11;
        bVar42 = *pbVar2 == 0;
        puVar23 = puVar25 + 7;
        puVar25 = puVar25 + 7;
        *puVar23 = 0x75;
        goto code_r0x080482de;
      }
      puVar34 = (undefined4 *)puVar25[8];
      puVar35 = (undefined4 *)puVar25[9];
      iVar30 = puVar25[10];
      iVar18 = puVar25[0xc];
      piVar13 = (int *)puVar25[0xd];
      iVar17 = puVar25[0xe];
      pbVar9 = (byte *)puVar25[0xf];
      puVar24 = puVar25 + 0x10;
LAB_0804828c_2:
      if (bVar45) {
        puVar34 = (undefined4 *)*puVar24;
        puVar35 = (undefined4 *)puVar24[1];
        iVar30 = puVar24[2];
        iVar18 = puVar24[4];
        piVar13 = (int *)puVar24[5];
        iVar17 = puVar24[6];
        pbVar9 = (byte *)puVar24[7];
        puVar36 = puVar24 + 8;
        goto code_r0x08048295;
      }
      puVar25 = puVar24 + -1;
      puVar24[-1] = 0x73207369;
      puVar40 = puVar35 + (uint)bVar44 * -2 + 1;
      out(*puVar35,(short)piVar13);
code_r0x0804830e:
      if (!bVar42) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
code_r0x08048310:
      puVar1 = (ushort *)(iVar30 + 0x20);
      *puVar1 = *puVar1 + (ushort)bVar45 * -(*puVar1 & 3);
      puVar39 = puVar34 + 0x19;
      *(ushort *)puVar39 =
           *(short *)puVar39 + (ushort)bVar45 * (((ushort)iVar30 & 3) - (*(ushort *)puVar39 & 3));
      bVar11 = (byte)pbVar9;
      cVar8 = bVar11 - 0x20;
      pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar8);
      if (cVar8 == '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      if (bVar11 < 0x20) {
        *(byte *)(puVar34 + 0x1a) = *(byte *)(puVar34 + 0x1a) & (byte)((uint)piVar13 >> 8);
      }
      else if (cVar8 == '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
code_r0x08048325:
      pbVar2 = (byte *)((int)puVar34 + in_GS_OFFSET + 0x6e);
      bVar11 = (byte)((uint)iVar17 >> 8);
      *pbVar2 = *pbVar2 & bVar11;
      pbVar2 = (byte *)((int)puVar34 + in_GS_OFFSET + 0x68);
      *pbVar2 = *pbVar2 & (byte)((uint)piVar13 >> 8);
      out(*puVar40,(short)piVar13);
      pbVar2 = (byte *)(iVar17 + 0x6d);
      bVar45 = false;
      *pbVar2 = *pbVar2 & bVar11;
      bVar42 = *pbVar2 == 0;
      puVar40 = puVar40 + (uint)bVar44 * -2 + 1;
    }
    else {
      iVar30 = in_stack_00000048[0x19] * 0x20746920;
      puVar34 = (undefined4 *)(*(int *)(in_stack_00000054 + 0x20) * 0x74616874);
      *(byte *)(in_stack_0000005c + 0x74) = *(byte *)(in_stack_0000005c + 0x74) & bVar11;
      pbVar2 = (byte *)(in_stack_00000054 + 0x68);
      *pbVar2 = *pbVar2 & bVar15;
      bVar42 = *pbVar2 == 0;
      puVar36 = puVar34 + (uint)bVar44 * -2 + 1;
      out(*puVar34,uVar12);
      puVar34 = in_stack_00000044;
      if (bVar42) {
code_r0x080481db:
        pbVar2 = (byte *)((int)piVar13 + in_FS_OFFSET + 0x65);
        bVar11 = (byte)((uint)pbVar9 >> 8);
        *pbVar2 = *pbVar2 & bVar11;
        pbVar2 = (byte *)(iVar17 + 0x75);
        *pbVar2 = *pbVar2 & bVar11;
        if (*pbVar2 != 0) goto code_r0x080481e4;
        puVar40 = (undefined4 *)((int)puVar36 + (uint)bVar44 * -2 + 1);
        out(*(char *)puVar36,(short)piVar13);
        puVar39 = puVar25;
        goto LAB_08048252;
      }
      if (bVar42) {
code_r0x080482b6:
        if (!bVar42) {
          puVar40 = (undefined4 *)((longlong)*(int *)(pbVar9 + 0x69) * 0x6c632073);
          bVar41 = (longlong)(int)puVar40 != (longlong)*(int *)(pbVar9 + 0x69) * 0x6c632073;
          puVar25 = puVar39;
          goto LAB_080482c0;
        }
        bVar42 = iVar30 == 1;
        puVar34 = (undefined4 *)*puVar39;
        puVar38 = (undefined *)puVar39[1];
        iVar30 = puVar39[2];
        iVar18 = puVar39[4];
        piVar13 = (int *)puVar39[5];
        iVar17 = puVar39[6];
        pbVar9 = (byte *)puVar39[7];
        puVar25 = puVar39 + 8;
code_r0x080482db:
        puVar37 = (undefined4 *)(puVar38 + (uint)bVar44 * -2 + 1);
        out(*puVar38,(short)piVar13);
        if (!bVar42) {
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
code_r0x080482de:
        lVar6 = (longlong)*(int *)(iVar30 + 0x2c) * 0x206f640a;
        iVar30 = (int)lVar6;
        bVar45 = iVar30 != lVar6;
        puVar39 = (undefined4 *)((int)puVar37 + (uint)bVar44 * -2 + 1);
        out(*(char *)puVar37,(short)piVar13);
        out(*puVar39,(short)piVar13);
        puVar40 = puVar39 + (uint)bVar44 * -2 + 1;
        goto code_r0x080482e8;
      }
      bVar41 = false;
      puVar40 = (undefined4 *)((int)puVar36 + (uint)bVar44 * -2 + 1);
      out(*(char *)puVar36,uVar12);
      puVar25 = &stack0x00000064;
      if (!bVar42) {
        pbVar9 = (byte *)CONCAT31((int3)((uint)in_stack_00000060 >> 8),
                                  (char)in_stack_00000060 + -0x20);
        *(byte *)(in_stack_00000044 + 0x1a) = *(byte *)(in_stack_00000044 + 0x1a) & bVar15;
        puVar39 = &stack0x00000064;
        goto LAB_08048252;
      }
LAB_080482c0:
      puVar35 = puVar40 + (uint)bVar44 * -2 + 1;
      out(*puVar40,(short)piVar13);
      if (!bVar41) {
        puVar40 = (undefined4 *)((int)puVar35 + (uint)bVar44 * -2 + 1);
        out(*(char *)puVar35,(short)piVar13);
        goto code_r0x08048325;
      }
      puVar37 = puVar34;
      bVar45 = bVar41;
      if (bVar41) goto LAB_080482de_7;
code_r0x080482c5:
      puVar40 = puVar35;
      if (bVar41 || bVar42) {
        puVar34 = puVar37;
        if (!bVar42) goto code_r0x080482c9;
      }
      else {
        puVar34 = puVar37 + (uint)bVar44 * -2 + 1;
        uVar14 = in((short)piVar13);
        *puVar37 = uVar14;
      }
    }
LAB_08048331:
    puVar37 = puVar34;
    if (bVar45) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
code_r0x08048333:
    uVar14 = in((short)piVar13);
    *puVar37 = uVar14;
    puVar39 = (undefined4 *)((int)puVar40 + (uint)bVar44 * -2 + 1);
    out(*(char *)puVar40,(short)piVar13);
    if (bVar42) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    pbVar9[iVar30 * 2 + 0x65] = pbVar9[iVar30 * 2 + 0x65] & (byte)((uint)piVar13 >> 8);
    pbVar2 = (byte *)(iVar17 + 0x62);
    bVar41 = false;
    *pbVar2 = *pbVar2 & (byte)((uint)pbVar9 >> 8);
    bVar42 = *pbVar2 == 0;
code_r0x08048340:
    out(*puVar39,(short)piVar13);
    if (bVar41 || bVar42) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    *(byte *)(iVar30 + 0x73) = *(byte *)(iVar30 + 0x73) & (byte)((uint)pbVar9 >> 8);
    *(undefined2 *)((int)piVar13 + 0x69) = *(undefined2 *)((int)piVar13 + 0x69);
LAB_0804834d:
    *(byte *)(iVar18 + 99) = *(byte *)(iVar18 + 99) & (byte)((uint)piVar13 >> 8);
    ppcVar28 = (char **)((int)puVar25 + 4);
    puVar25 = (undefined4 *)((int)puVar25 + 8);
    puVar39 = (undefined4 *)*ppcVar28;
    do {
      puVar40 = (undefined4 *)((int)puVar39 + (uint)bVar44 * -2 + 1);
      cVar8 = *(char *)puVar39;
      puVar39 = puVar40;
    } while (cVar8 != '\0');
code_r0x08048360:
    *(char *)((int)puVar40 + -1) = '\n';
  }
  *(undefined4 *)((int)puVar25 + -4) = 1;
  puVar29 = (undefined4 *)((int)puVar25 + -4);
  puVar25 = (undefined4 *)((int)puVar25 + -4);
  *puVar29 = 4;
LAB_0804836d:
  pcVar7 = (code *)swi(0x80);
  (*pcVar7)();
  *(undefined4 *)((int)puVar25 + 4) = 1;
  *(undefined4 *)((int)puVar25 + 4) = 1;
  pcVar7 = (code *)swi(0x80);
  (*pcVar7)();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


