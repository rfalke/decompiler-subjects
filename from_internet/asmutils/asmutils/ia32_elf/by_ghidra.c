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

undefined8 __regparm3 entry(int param_1_00,undefined4 param_2,int param_3,int *param_1)

{
  ushort *puVar1;
  byte *pbVar2;
  char cVar3;
  undefined uVar4;
  undefined4 uVar5;
  short sVar6;
  longlong lVar7;
  code *pcVar8;
  byte bVar9;
  byte *pbVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  undefined2 uVar14;
  ushort uVar15;
  int *piVar16;
  int unaff_EBX;
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
  undefined *unaff_EBP;
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
  undefined4 unaff_retaddr;
  int in_stack_00000014;
  uint in_stack_00000020;
  undefined *in_stack_00000028;
  ushort in_stack_0000002c;
  undefined2 in_stack_00000038;
  int in_stack_0000003c;
  undefined4 *in_stack_00000044;
  undefined4 *in_stack_00000048;
  int in_stack_0000004c;
  int in_stack_00000054;
  int *in_stack_00000058;
  uint in_stack_0000005c;
  byte *in_stack_00000060;
  undefined4 *in_stack_00000064;
  undefined *in_stack_00000068;
  int in_stack_0000006c;
  int in_stack_00000074;
  uint in_stack_00000078;
  int in_stack_0000007c;
  int in_stack_00000080;
  byte bVar17;
  int *piVar33;
  
  bVar12 = (byte)((uint)unaff_retaddr >> 8);
  bVar44 = 0;
  piVar16 = param_1;
  do {
    cVar3 = *(char *)piVar16;
    piVar33 = (int *)((int)piVar16 + 1);
    piVar16 = (int *)((int)piVar16 + 1);
  } while (cVar3 != '\0');
  do {
    piVar32 = (int *)((int)piVar33 + -1);
    piVar16 = piVar32;
    if (param_1 == piVar32) break;
    piVar16 = piVar33;
    piVar33 = piVar32;
  } while (*(char *)piVar32 != '/');
  for (iVar18 = 0; *(int *)((int)&DAT_0804804c + iVar18) != 0; iVar18 = iVar18 + 8) {
    if (*(int *)((int)&DAT_0804804c + iVar18) == *piVar16) {
      return CONCAT44(param_2,param_1_00);
    }
  }
  pcVar8 = (code *)swi(0x80);
  (*pcVar8)();
  pcVar8 = (code *)swi(0x80);
  (*pcVar8)();
  *(byte *)(param_3 + 0x6f) = *(byte *)(param_3 + 0x6f) & bVar12;
  out(param_1_00,(short)param_1_00);
  *(byte *)(param_1_00 + 0x20) = *(byte *)(param_1_00 + 0x20) & bVar12;
  *(undefined2 *)(unaff_EBP + 0x6f) = *(undefined2 *)(unaff_EBP + 0x6f);
  uVar4 = in((short)param_1_00);
  *unaff_EBP = uVar4;
  unaff_EBP[unaff_EBX * 2 + (uint)bVar44 * -2 + 0x70] =
       unaff_EBP[unaff_EBX * 2 + (uint)bVar44 * -2 + 0x70] & (byte)((uint)param_1_00 >> 8);
  *(undefined2 *)(in_stack_00000014 + 10) = *(undefined2 *)(in_stack_00000014 + 10);
  bVar41 = in_stack_00000020 < 0x206e6120;
  bVar45 = SBORROW4(in_stack_00000020,0x206e6120);
  bVar43 = (int)(in_stack_00000020 + 0xdf919ee0) < 0;
  puVar20 = (undefined4 *)&stack0x00000044;
  out(*in_stack_00000028,in_stack_00000038);
  puVar1 = (ushort *)(in_stack_0000003c + 0x65);
  sVar6 = (in_stack_0000002c & 3) - (*puVar1 & 3);
  bVar42 = 0 < sVar6;
  *puVar1 = *puVar1 + (ushort)bVar41 * sVar6;
  out(in_stack_00000028[(uint)bVar44 * -2 + 1],in_stack_00000038);
  if (bVar42) {
LAB_0804816b:
    puVar34 = (undefined4 *)*puVar20;
    puVar35 = (undefined4 *)puVar20[1];
    iVar30 = puVar20[2];
    iVar18 = puVar20[4];
    piVar16 = (int *)puVar20[5];
    uVar13 = puVar20[6];
    pbVar10 = (byte *)puVar20[7];
    puVar39 = puVar20 + 8;
    puVar25 = puVar20 + 8;
    puVar36 = puVar20 + 8;
    uVar14 = SUB42(piVar16,0);
    if (bVar41) {
      puVar25 = puVar34 + (uint)bVar44 * -2 + 1;
      uVar5 = in(uVar14);
      *puVar34 = uVar5;
      puVar34 = puVar25;
      if (bVar45) {
        puVar38 = (undefined *)segment(in_GS,(short)puVar35);
        out(*puVar38,uVar14);
        puVar25 = puVar20 + 8;
        puVar40 = (undefined4 *)
                  ((uint)puVar35 & 0xffff0000 |
                  (uint)(ushort)((short)puVar35 + 1 + (ushort)bVar44 * -2));
        goto joined_r0x080481e8;
      }
      if (!bVar42) {
        bVar41 = false;
        bVar12 = (byte)uVar13 | *(byte *)piVar16;
        bVar43 = (char)bVar12 < '\0';
        bVar42 = bVar12 == 0;
        puVar20[7] = puVar20 + 8;
        puVar21 = puVar20 + 6;
        puVar20[6] = &DAT_65207369;
        uVar13 = uVar13 & 0xffffff00 | (uint)bVar12;
        puVar25 = puVar20 + 6;
        puVar40 = puVar35;
        if (bVar42) goto joined_r0x080481e8;
code_r0x08048183:
        out(*(char *)puVar35,(short)piVar16);
        if (!bVar42) {
          puVar34 = (undefined4 *)puVar21[1];
          iVar31 = puVar21[2];
          iVar19 = puVar21[4];
          uVar13 = puVar21[5];
          iVar30 = puVar21[6];
          iVar18 = puVar21[7];
          puVar25 = puVar21 + 8;
          puVar22 = puVar21 + 8;
          puVar38 = (undefined *)*puVar21 + (uint)bVar44 * -2 + 1;
          uVar4 = in((short)uVar13);
          *(undefined *)*puVar21 = uVar4;
          puVar39 = (undefined4 *)(puVar38 + (uint)bVar44 * -2 + 1);
          uVar4 = in((short)uVar13);
          *puVar38 = uVar4;
          if (bVar43) goto LAB_0804818b;
          goto LAB_080481ab;
        }
        goto LAB_080481fb;
      }
      puVar37 = (undefined4 *)((int)puVar25 + (uint)bVar44 * -2 + 1);
      uVar4 = in(uVar14);
      *(undefined *)puVar25 = uVar4;
      bVar12 = (byte)((uint)pbVar10 >> 8);
      if (!bVar42) {
        puVar1 = (ushort *)(uVar13 + 0x6c);
        *puVar1 = *puVar1 + (ushort)bVar41 * -(*puVar1 & 3);
        uVar4 = in(uVar14);
        *(undefined *)puVar37 = uVar4;
        *(byte *)((int)piVar16 + 0x69) = *(byte *)((int)piVar16 + 0x69) & bVar12;
        out(*(char *)puVar35,uVar14);
        puVar39 = (undefined4 *)puVar20[8];
        puVar34 = (undefined4 *)puVar20[9];
        iVar30 = puVar20[0xe];
        puVar22 = puVar20 + 0x10;
        uVar11 = puVar20[0xd] & 0xffffff00;
        uVar13 = uVar11 | (byte)((byte)puVar20[0xd] |
                                *(byte *)(puVar20[0xf] + 0x65 + puVar20[10] * 2));
        *(byte *)(puVar39 + 0x1a) = *(byte *)(puVar39 + 0x1a) & (byte)(uVar11 >> 8);
LAB_080481ab:
        *(undefined4 **)((int)puVar22 + -4) = puVar22;
        *(undefined4 *)((int)puVar22 + -8) = 0x68772065;
        out(*puVar34,(short)uVar13);
        uVar4 = in((short)uVar13);
        *(undefined *)puVar39 = uVar4;
        pbVar10 = (byte *)(in_GS_OFFSET + iVar30 + 100);
        *pbVar10 = *pbVar10 & (byte)((uint)iVar30 >> 8);
        pbVar10 = (byte *)(*(int *)((int)puVar22 + 0xc) + 0x65);
        *pbVar10 = *pbVar10 & (byte)((uint)*(undefined4 *)((int)puVar22 + 0x14) >> 8);
        bVar12 = *pbVar10;
        *(undefined4 *)((int)puVar22 + 0x14) = 0x20646e69;
        puVar39 = *(undefined4 **)((int)puVar22 + 0x14);
        pbVar10 = *(byte **)((int)puVar22 + 0x30);
        uVar13 = *(uint *)((int)puVar22 + 0x2c);
        piVar16 = *(int **)((int)puVar22 + 0x28);
        iVar18 = *(int *)((int)puVar22 + 0x24);
        puVar25 = (undefined4 *)((int)puVar22 + 0x34);
        iVar30 = *(int *)((int)puVar22 + 0x1c);
        goto code_r0x080481d1;
      }
      puVar25 = puVar35 + (uint)bVar44 * -2 + 1;
      out(*puVar35,uVar14);
      *(char *)(uVar13 + 0x6e) = *(char *)(uVar13 + 0x6e) - bVar12;
      pbVar2 = (byte *)((int)puVar37 + in_FS_OFFSET + 0x66);
      *pbVar2 = *pbVar2 & (byte)(uVar13 >> 8);
      pbVar2 = (byte *)(iVar18 + 0x6f);
      *pbVar2 = *pbVar2 & bVar12;
      if (*pbVar2 != 0) {
        pbVar2 = (byte *)(in_GS_OFFSET + uVar13 + 0x6e);
        *pbVar2 = *pbVar2 & bVar12;
        goto code_r0x08048287;
      }
code_r0x0804827d:
      *(byte *)(iVar30 + 0x73) = *(byte *)(iVar30 + 0x73) & (byte)((uint)piVar16 >> 8);
      puVar37 = *(undefined4 **)((int)puVar36 + 0x20);
      iVar30 = *(int *)((int)puVar36 + 0x28);
      iVar18 = *(int *)((int)puVar36 + 0x30);
      piVar16 = *(int **)((int)puVar36 + 0x34);
      uVar13 = *(uint *)((int)puVar36 + 0x38);
      pbVar10 = *(byte **)((int)puVar36 + 0x3c);
      out(**(undefined **)((int)puVar36 + 0x24),(short)piVar16);
      puVar25 = (undefined4 *)(*(undefined **)((int)puVar36 + 0x24) + (uint)bVar44 * -2 + 1);
code_r0x08048287:
      pbVar2 = (byte *)((int)piVar16 + in_FS_OFFSET + 0x65);
      *pbVar2 = *pbVar2 & (byte)((uint)piVar16 >> 8);
      bVar42 = *pbVar2 == 0;
      puVar35 = puVar25;
LAB_0804828b:
      puVar34 = (undefined4 *)((int)puVar37 + (uint)bVar44 * -2 + 1);
      uVar4 = in((short)piVar16);
      *(undefined *)puVar37 = uVar4;
      puVar36 = (undefined4 *)(*(int *)(uVar13 + 0x62) * 0x7320656c);
      if (bVar42) {
        iVar30 = *(int *)(*(int *)(iVar30 + 0x65) * 0x206e6f20 + 0x70) * 0x69766f72;
code_r0x08048304:
        out(*(char *)puVar35,(short)piVar16);
        pbVar2 = (byte *)segment(in_DS,(short)puVar35 + (ushort)bVar44 * -2 + 0x69);
        *pbVar2 = *pbVar2 & (byte)((uint)piVar16 >> 8);
        lVar7 = (longlong)*(int *)(iVar18 + 0x20) * 0x72756f73;
        puVar40 = (undefined4 *)lVar7;
        bVar45 = (int)puVar40 != lVar7;
        puVar25 = puVar36;
        goto code_r0x08048310;
      }
code_r0x08048295:
      puVar25 = puVar36;
      puVar40 = puVar35;
      if (bVar42) {
LAB_080482fc:
        pbVar2 = (byte *)(uVar13 + 0x6d);
        *pbVar2 = *pbVar2 & (byte)(uVar13 >> 8);
        puVar35 = puVar40 + (uint)bVar44 * -2 + 1;
        out(*puVar40,(short)piVar16);
        puVar36 = puVar25;
        if (*pbVar2 == 0) goto LAB_0804836d;
        goto code_r0x08048304;
      }
code_r0x08048297:
      bVar41 = false;
      bVar45 = false;
      *pbVar10 = *pbVar10 & (byte)((uint)pbVar10 >> 8);
      bVar12 = *pbVar10;
      bVar42 = *pbVar10 == 0;
      *(undefined4 **)((int)puVar36 + -4) = puVar36;
      puVar25 = (undefined4 *)((int)puVar36 + -8);
      *(undefined4 *)((int)puVar36 + -8) = 0x61642065;
      if ((char)bVar12 < '\0') {
        puVar39 = (undefined4 *)((int)puVar36 + -0xc);
        puVar25 = (undefined4 *)((int)puVar36 + -0xc);
        *(undefined4 *)((int)puVar36 + -0xc) = 0x6e0a7361;
        puVar37 = puVar35 + (uint)bVar44 * -2 + 1;
        out(*puVar35,(short)piVar16);
        if (!bVar42) {
          *(undefined2 *)((int)puVar34 + 0x6d) = *(undefined2 *)((int)puVar34 + 0x6d);
          pbVar2 = (byte *)(in_GS_OFFSET + uVar13 + 0x65);
          *pbVar2 = *pbVar2 & (byte)((uint)iVar18 >> 8);
          bVar12 = *pbVar2;
          puVar40 = puVar34;
joined_r0x080482b0:
          if (bVar12 != 0) {
            pbVar2 = (byte *)((int)piVar16 + 0x75);
            *pbVar2 = *pbVar2 & (byte)((uint)pbVar10 >> 8);
            bVar42 = *pbVar2 == 0;
            puVar34 = puVar40;
            goto code_r0x080482b6;
          }
          puVar34 = (undefined4 *)((int)puVar40 + (uint)bVar44 * -2 + 1);
          uVar4 = in((short)piVar16);
          *(undefined *)puVar40 = uVar4;
          pbVar10 = (byte *)((uint)pbVar10 & 0xffffff00 | (uint)(byte)((char)pbVar10 - 10));
          puVar35 = puVar37 + (uint)bVar44 * -2 + 1;
          out(*puVar37,(short)piVar16);
          goto LAB_080482de_7;
        }
        puVar37 = *(undefined4 **)((int)puVar36 + -0xc);
        puVar35 = *(undefined4 **)((int)puVar36 + -8);
        iVar30 = *(int *)((int)puVar36 + -4);
        iVar18 = *(int *)((int)puVar36 + 4);
        piVar16 = *(int **)((int)puVar36 + 8);
        uVar13 = *(uint *)((int)puVar36 + 0xc);
        pbVar10 = *(byte **)((int)puVar36 + 0x10);
        puVar25 = (undefined4 *)((int)puVar36 + 0x14);
code_r0x080482c9:
        bVar41 = false;
        *(byte *)(iVar30 + 0x61) = *(byte *)(iVar30 + 0x61) & (byte)((uint)pbVar10 >> 8);
        puVar1 = (ushort *)(pbVar10 + 0x20);
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
      *pbVar2 = *pbVar2 & (byte)(uVar13 >> 8);
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
        pbVar2 = (byte *)(in_GS_OFFSET + uVar13 + 0x6f);
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
        uVar14 = SUB42(piVar16,0);
        uVar5 = in(uVar14);
        *puVar34 = uVar5;
        bVar12 = (byte)((uint)pbVar10 >> 8);
        if (!bVar41) {
          *(byte *)(uVar13 + 0x6e) = *(byte *)(uVar13 + 0x6e) & bVar12;
          puVar25 = puVar35;
          goto code_r0x08048287;
        }
        puVar25 = (undefined4 *)((int)puVar39 + -4);
        if (bVar41 || bVar42) {
          puVar38 = (undefined *)((int)puVar37 + (uint)bVar44 * -2 + 1);
          uVar4 = in(uVar14);
          *(undefined *)puVar37 = uVar4;
          puVar40 = (undefined4 *)(puVar38 + (uint)bVar44 * -2 + 1);
          uVar4 = in(uVar14);
          *puVar38 = uVar4;
          uVar11 = (uint)pbVar10 & 0xffff0000 |
                   (uint)CONCAT11(bVar12 | *(byte *)((int)piVar16 + 0x65),(char)pbVar10);
          puVar25 = (undefined4 *)((int)puVar39 + -4);
          goto LAB_0804826b;
        }
LAB_080482cf:
        if (!bVar41) {
          uVar4 = in((short)piVar16);
          *(undefined *)puVar37 = uVar4;
          goto code_r0x080482d2;
        }
        puVar40 = (undefined4 *)((int)puVar35 + (uint)bVar44 * -2 + 1);
        out(*(char *)puVar35,(short)piVar16);
        goto code_r0x08048333;
      }
      puVar25 = (undefined4 *)((int)puVar39 + -8);
      *(undefined4 *)((int)puVar39 + -8) = 0x6c657220;
code_r0x080482d2:
      puVar39 = *(undefined4 **)((int)puVar25 + 4);
      iVar30 = *(int *)((int)puVar25 + 8);
      iVar18 = *(int *)((int)puVar25 + 0x10);
      piVar16 = *(int **)((int)puVar25 + 0x14);
      pbVar10 = *(byte **)((int)puVar25 + 0x1c);
      if (bVar41) {
        pbVar10 = (byte *)(iVar30 + 0x65);
        *pbVar10 = *pbVar10 & (byte)*(undefined4 *)((int)puVar25 + 0x18);
        bVar42 = *pbVar10 == 0;
        puVar34 = *(undefined4 **)((int)puVar25 + 0x20);
        puVar38 = *(undefined **)((int)puVar25 + 0x24);
        iVar30 = *(int *)((int)puVar25 + 0x28);
        iVar18 = *(int *)((int)puVar25 + 0x30);
        piVar16 = *(int **)((int)puVar25 + 0x34);
        uVar13 = *(uint *)((int)puVar25 + 0x38);
        pbVar10 = *(byte **)((int)puVar25 + 0x3c);
        puVar25 = (undefined4 *)((int)puVar25 + 0x40);
        goto code_r0x080482db;
      }
      puVar27 = (undefined4 *)((int)puVar25 + 0x1c);
      puVar25 = (undefined4 *)((int)puVar25 + 0x1c);
      *puVar27 = 0x62612065;
      goto code_r0x08048340;
    }
    puVar36 = puVar35 + (uint)bVar44 * -2 + 1;
    out(*puVar35,uVar14);
code_r0x080481e4:
    bVar41 = pbVar10 < (byte *)0x656e6567;
    pbVar10 = pbVar10 + -0x656e6567;
    bVar43 = (int)pbVar10 < 0;
    bVar42 = pbVar10 == (byte *)0x0;
    puVar40 = puVar36;
joined_r0x080481e8:
    puVar39 = puVar25;
    if (!bVar41) {
      if (!bVar42) {
        out(*puVar40,(short)piVar16);
        puVar39 = puVar34 + (uint)bVar44 * -2 + 1;
        uVar5 = in((short)piVar16);
        *puVar34 = uVar5;
        goto LAB_080481f3;
      }
LAB_08048252:
      puVar35 = (undefined4 *)((int)puVar40 + (uint)bVar44 * -2 + 1);
      out(*(char *)puVar40,(short)piVar16);
      puVar25 = puVar34 + 0x1d;
      bVar41 = false;
      bVar45 = false;
      *(byte *)puVar25 = *(byte *)puVar25 & (byte)(uVar13 >> 8);
      bVar42 = *(char *)puVar25 == '\0';
      goto code_r0x08048257;
    }
    if (bVar41) {
      bVar12 = (byte)((uint)pbVar10 >> 8);
      *pbVar10 = *pbVar10 & bVar12;
      if (*pbVar10 != 0) {
        *(byte *)(uVar13 + 0x73) = *(byte *)(uVar13 + 0x73) & (byte)(uVar13 >> 8);
        pbVar2 = (byte *)(iVar18 + 0x6c);
        bVar41 = false;
        *pbVar2 = *pbVar2 & bVar12;
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
      *piVar16 = *piVar16 + -1;
      goto code_r0x08048360;
    }
code_r0x080482f2:
    if (bVar42) {
      pbVar2 = (byte *)(uVar13 + 0x6d + iVar30 * 2);
      *pbVar2 = *pbVar2 & (byte)((uint)piVar16 >> 8);
      pbVar2 = (byte *)((int)puVar34 + in_GS_OFFSET + 0x6e);
      *pbVar2 = *pbVar2 & (byte)(uVar13 >> 8);
      goto LAB_080482fc;
    }
  }
  else {
    puVar25 = (undefined4 *)&stack0x00000064;
    puVar39 = (undefined4 *)&stack0x00000064;
    puVar21 = (undefined4 *)&stack0x00000064;
    bVar9 = (byte)((uint)in_stack_00000058 >> 8);
    uVar14 = SUB42(in_stack_00000058,0);
    bVar12 = (byte)(in_stack_0000005c >> 8);
    pbVar10 = in_stack_00000060;
    uVar13 = in_stack_0000005c;
    piVar16 = in_stack_00000058;
    iVar18 = in_stack_00000054;
    if (bVar41) {
      puVar39 = in_stack_00000044 + (uint)bVar44 * -2 + 1;
      uVar5 = in(uVar14);
      *in_stack_00000044 = uVar5;
      iVar30 = in_stack_0000004c;
      if (bVar45) {
        out(*(char *)in_stack_00000048,uVar14);
        pbVar2 = (byte *)(in_FS_OFFSET + in_stack_0000005c + 0x74);
        *pbVar2 = *pbVar2 & bVar12;
        *(byte *)(in_stack_0000005c + 0x73) = *(byte *)(in_stack_0000005c + 0x73) & bVar12;
        pbVar2 = in_stack_00000060 + in_stack_0000004c * 2 + 0x61;
        *pbVar2 = *pbVar2 & bVar9;
        bVar12 = *pbVar2;
        puVar25 = (undefined4 *)&stack0x00000064;
code_r0x080481d1:
        if (bVar12 != 0) {
          puVar36 = (undefined4 *)(*(int *)(pbVar10 + 0x73) * 0x6c756f68);
          puVar34 = puVar39;
          goto code_r0x080481db;
        }
LAB_080481f3:
        *(byte *)(puVar39 + 0x1d) = *(byte *)(puVar39 + 0x1d) & (byte)(uVar13 >> 8);
LAB_080481f6:
        puVar21 = (undefined4 *)((int)puVar25 + -4);
        *(undefined4 *)((int)puVar25 + -4) = 0x2e207265;
LAB_080481fb:
        puVar40 = (undefined4 *)*puVar21;
        puVar35 = (undefined4 *)puVar21[1];
        iVar30 = puVar21[2];
        iVar18 = puVar21[4];
        piVar16 = (int *)puVar21[5];
        uVar13 = puVar21[6];
        uVar11 = puVar21[7];
        puVar25 = puVar21 + 8;
LAB_0804826b:
        *(byte *)(uVar13 + 0x6e) = *(byte *)(uVar13 + 0x6e) & (byte)(uVar13 >> 8);
        *(byte *)(uVar13 + 0x20) = *(byte *)(uVar13 + 0x20) & (byte)(uVar11 >> 8);
        puVar34 = puVar40 + (uint)bVar44 * -2 + 1;
        uVar5 = in((short)piVar16);
        *puVar40 = uVar5;
        puVar40 = puVar35 + (uint)bVar44 * -2 + 1;
        out(*puVar35,(short)piVar16);
        bVar41 = uVar11 < 0x6c2d726f;
        pbVar10 = (byte *)(uVar11 + 0x93d28d91);
        bVar43 = (int)pbVar10 < 0;
        bVar42 = pbVar10 == (byte *)0x0;
        goto code_r0x0804827a;
      }
      puVar34 = puVar39 + (uint)bVar44 * -2 + 1;
      uVar5 = in(uVar14);
      *puVar39 = uVar5;
      bVar41 = false;
      DAT_6228090a = DAT_6228090a & bVar12;
      bVar43 = (char)DAT_6228090a < '\0';
      bVar42 = DAT_6228090a == 0;
      if (!bVar43) {
        puVar35 = in_stack_00000048;
        puVar25 = (undefined4 *)&stack0x00000064;
        puVar40 = in_stack_00000048;
        if (!bVar42) goto code_r0x08048183;
        goto joined_r0x080481e8;
      }
      puVar20 = (undefined4 *)&stack0x00000084;
      puVar25 = (undefined4 *)&stack0x00000084;
      out(*in_stack_00000068,(short)in_stack_00000078);
      pbVar10 = (byte *)(in_stack_0000007c + 0x6e);
      bVar41 = false;
      bVar45 = false;
      *pbVar10 = *pbVar10 & (byte)((uint)in_stack_00000080 >> 8);
      bVar43 = (char)*pbVar10 < '\0';
      puVar1 = (ushort *)(in_stack_0000007c + 0x65);
      bVar42 = 0 < (short)(((ushort)in_stack_0000006c & 3) - (*puVar1 & 3));
      *puVar1 = *puVar1;
      puVar34 = (undefined4 *)(in_stack_00000068 + (uint)bVar44 * -2 + 1 + (uint)bVar44 * -2 + 1);
      out(in_stack_00000068[(uint)bVar44 * -2 + 1],(short)in_stack_00000078);
      iVar18 = in_stack_00000080;
      iVar30 = in_stack_0000007c;
      uVar13 = in_stack_00000078;
      iVar19 = in_stack_00000074;
      iVar31 = in_stack_0000006c;
      puVar39 = in_stack_00000064;
      if (!bVar42) goto LAB_0804816b;
LAB_0804818b:
      if (!bVar42) goto LAB_080481f6;
      puVar38 = (undefined *)((int)puVar39 + (uint)bVar44 * -2 + 1);
      uVar14 = (undefined2)uVar13;
      uVar4 = in(uVar14);
      *(undefined *)puVar39 = uVar4;
      puVar40 = (undefined4 *)(puVar38 + (uint)bVar44 * -2 + 1);
      uVar4 = in(uVar14);
      *puVar38 = uVar4;
      bVar12 = (byte)((uint)iVar18 >> 8);
      *(byte *)(uVar13 + 0x65) = *(byte *)(uVar13 + 0x65) & bVar12;
      pbVar10 = (byte *)(iVar18 + 0x65 + iVar31 * 2);
      bVar9 = (byte)(uVar13 >> 8);
      *pbVar10 = *pbVar10 & bVar9;
      pbVar10 = (byte *)(iVar30 + 0x73);
      *pbVar10 = *pbVar10 & bVar12;
      bVar12 = *pbVar10;
      puVar39 = puVar40 + (uint)bVar44 * -2 + 1;
      uVar5 = in(uVar14);
      *puVar40 = uVar5;
      if (bVar12 == 0) {
        puVar22 = (undefined4 *)(*(int *)(iVar19 + 0x61) * 0x62206c6c);
        goto LAB_080481ab;
      }
      pbVar10 = (byte *)(in_GS_OFFSET + iVar19 + 0x74);
      *pbVar10 = *pbVar10 & bVar9;
      bVar42 = *pbVar10 == 0;
      puVar34 = (undefined4 *)*puVar25;
      puVar35 = (undefined4 *)puVar25[1];
      iVar30 = puVar25[2];
      iVar18 = puVar25[4];
      piVar16 = (int *)puVar25[5];
      uVar13 = puVar25[6];
      pbVar10 = (byte *)puVar25[7];
      puVar24 = puVar25 + 8;
      puVar39 = puVar25 + 8;
      puVar37 = puVar34;
      if (!bVar42) goto LAB_0804828b;
      bVar12 = (byte)((uint)pbVar10 >> 8);
      *(byte *)(iVar18 + 0x6f) = *(byte *)(iVar18 + 0x6f) & bVar12;
      piVar33 = (int *)(pbVar10 + in_GS_OFFSET);
      bVar45 = (undefined *)*piVar33 < puVar25 + 8;
      *piVar33 = *piVar33 - (int)(puVar25 + 8);
      bVar42 = *piVar33 == 0;
      if (bVar45 || bVar42) {
        if (bVar42) goto LAB_0804828c_2;
        bVar17 = (byte)((uint)piVar16 >> 8);
        *(byte *)(iVar18 + 0x6f) = *(byte *)(iVar18 + 0x6f) & bVar17;
        puVar40 = puVar34 + (uint)bVar44 * -2 + 1;
        uVar5 = in((short)piVar16);
        *puVar34 = uVar5;
        bVar17 = bVar17 | *(byte *)(in_GS_OFFSET + iVar18 + 99);
        uVar15 = CONCAT11(bVar17,(char)piVar16);
        piVar16 = (int *)((uint)piVar16 & 0xffff0000 | (uint)uVar15);
        bVar9 = (byte)(uVar13 >> 8);
        pbVar2 = (byte *)((int)puVar40 + 0x69);
        *pbVar2 = *pbVar2 & bVar17;
        if (*pbVar2 == 0) {
          puVar34 = (undefined4 *)puVar25[8];
          puVar35 = (undefined4 *)puVar25[9];
          iVar30 = puVar25[10];
          iVar18 = puVar25[0xc];
          piVar16 = (int *)puVar25[0xd];
          uVar13 = puVar25[0xe];
          pbVar10 = (byte *)puVar25[0xf];
          puVar36 = puVar25 + 0x10;
          goto code_r0x08048297;
        }
        *(byte *)((int)puVar35 + 0x6f) = *(byte *)((int)puVar35 + 0x6f) & bVar9;
        pbVar2 = (byte *)(iVar30 + 0x61);
        *pbVar2 = *pbVar2 & bVar9;
        puVar37 = (undefined4 *)((int)puVar35 + (uint)bVar44 * -2 + 1);
        out(*(char *)puVar35,uVar15);
        if (*pbVar2 != 0) {
          pbVar2 = pbVar10 + 0x61;
          *pbVar2 = *pbVar2 & bVar9;
          bVar12 = *pbVar2;
          puVar25 = puVar25 + 8;
          goto joined_r0x080482b0;
        }
        puVar34 = (undefined4 *)((int)puVar40 + (uint)bVar44 * -2 + 1);
        uVar4 = in(uVar15);
        *(undefined *)puVar40 = uVar4;
        pbVar2 = (byte *)(uVar13 + 100);
        *pbVar2 = *pbVar2 & bVar12;
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
      piVar16 = (int *)puVar25[0xd];
      uVar13 = puVar25[0xe];
      pbVar10 = (byte *)puVar25[0xf];
      puVar24 = puVar25 + 0x10;
LAB_0804828c_2:
      if (bVar45) {
        puVar34 = (undefined4 *)*puVar24;
        puVar35 = (undefined4 *)puVar24[1];
        iVar30 = puVar24[2];
        iVar18 = puVar24[4];
        piVar16 = (int *)puVar24[5];
        uVar13 = puVar24[6];
        pbVar10 = (byte *)puVar24[7];
        puVar36 = puVar24 + 8;
        goto code_r0x08048295;
      }
      puVar25 = puVar24 + -1;
      puVar24[-1] = 0x73207369;
      puVar40 = puVar35 + (uint)bVar44 * -2 + 1;
      out(*puVar35,(short)piVar16);
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
      bVar12 = (byte)pbVar10;
      bVar9 = bVar12 - 0x20;
      pbVar10 = (byte *)((uint)pbVar10 & 0xffffff00 | (uint)bVar9);
      if (bVar9 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      if (bVar12 < 0x20) {
        *(byte *)(puVar34 + 0x1a) = *(byte *)(puVar34 + 0x1a) & (byte)((uint)piVar16 >> 8);
      }
      else if (bVar9 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
code_r0x08048325:
      pbVar2 = (byte *)((int)puVar34 + in_GS_OFFSET + 0x6e);
      bVar12 = (byte)(uVar13 >> 8);
      *pbVar2 = *pbVar2 & bVar12;
      pbVar2 = (byte *)((int)puVar34 + in_GS_OFFSET + 0x68);
      *pbVar2 = *pbVar2 & (byte)((uint)piVar16 >> 8);
      out(*puVar40,(short)piVar16);
      pbVar2 = (byte *)(uVar13 + 0x6d);
      bVar45 = false;
      *pbVar2 = *pbVar2 & bVar12;
      bVar42 = *pbVar2 == 0;
      puVar40 = puVar40 + (uint)bVar44 * -2 + 1;
    }
    else {
      iVar30 = in_stack_00000048[0x19] * 0x20746920;
      puVar34 = (undefined4 *)(*(int *)(in_stack_00000054 + 0x20) * 0x74616874);
      *(byte *)(in_stack_0000005c + 0x74) = *(byte *)(in_stack_0000005c + 0x74) & bVar12;
      pbVar2 = (byte *)(in_stack_00000054 + 0x68);
      *pbVar2 = *pbVar2 & bVar9;
      bVar42 = *pbVar2 == 0;
      puVar36 = puVar34 + (uint)bVar44 * -2 + 1;
      out(*puVar34,uVar14);
      puVar34 = in_stack_00000044;
      if (bVar42) {
code_r0x080481db:
        pbVar2 = (byte *)((int)piVar16 + in_FS_OFFSET + 0x65);
        bVar12 = (byte)((uint)pbVar10 >> 8);
        *pbVar2 = *pbVar2 & bVar12;
        pbVar2 = (byte *)(uVar13 + 0x75);
        *pbVar2 = *pbVar2 & bVar12;
        if (*pbVar2 != 0) goto code_r0x080481e4;
        puVar40 = (undefined4 *)((int)puVar36 + (uint)bVar44 * -2 + 1);
        out(*(char *)puVar36,(short)piVar16);
        puVar39 = puVar25;
        goto LAB_08048252;
      }
      if (bVar42) {
code_r0x080482b6:
        if (!bVar42) {
          puVar40 = (undefined4 *)((longlong)*(int *)(pbVar10 + 0x69) * 0x6c632073);
          bVar41 = (longlong)(int)puVar40 != (longlong)*(int *)(pbVar10 + 0x69) * 0x6c632073;
          puVar25 = puVar39;
          goto LAB_080482c0;
        }
        bVar42 = iVar30 == 1;
        puVar34 = (undefined4 *)*puVar39;
        puVar38 = (undefined *)puVar39[1];
        iVar30 = puVar39[2];
        iVar18 = puVar39[4];
        piVar16 = (int *)puVar39[5];
        uVar13 = puVar39[6];
        pbVar10 = (byte *)puVar39[7];
        puVar25 = puVar39 + 8;
code_r0x080482db:
        puVar37 = (undefined4 *)(puVar38 + (uint)bVar44 * -2 + 1);
        out(*puVar38,(short)piVar16);
        if (!bVar42) {
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
code_r0x080482de:
        lVar7 = (longlong)*(int *)(iVar30 + 0x2c) * 0x206f640a;
        iVar30 = (int)lVar7;
        bVar45 = iVar30 != lVar7;
        puVar39 = (undefined4 *)((int)puVar37 + (uint)bVar44 * -2 + 1);
        out(*(char *)puVar37,(short)piVar16);
        out(*puVar39,(short)piVar16);
        puVar40 = puVar39 + (uint)bVar44 * -2 + 1;
        goto code_r0x080482e8;
      }
      bVar41 = false;
      puVar40 = (undefined4 *)((int)puVar36 + (uint)bVar44 * -2 + 1);
      out(*(char *)puVar36,uVar14);
      puVar25 = (undefined4 *)&stack0x00000064;
      if (!bVar42) {
        pbVar10 = (byte *)((uint)in_stack_00000060 & 0xffffff00 |
                          (uint)(byte)((char)in_stack_00000060 - 0x20));
        *(byte *)(in_stack_00000044 + 0x1a) = *(byte *)(in_stack_00000044 + 0x1a) & bVar9;
        puVar39 = (undefined4 *)&stack0x00000064;
        goto LAB_08048252;
      }
LAB_080482c0:
      puVar35 = puVar40 + (uint)bVar44 * -2 + 1;
      out(*puVar40,(short)piVar16);
      if (!bVar41) {
        puVar40 = (undefined4 *)((int)puVar35 + (uint)bVar44 * -2 + 1);
        out(*(char *)puVar35,(short)piVar16);
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
        uVar5 = in((short)piVar16);
        *puVar37 = uVar5;
      }
    }
LAB_08048331:
    puVar37 = puVar34;
    if (bVar45) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
code_r0x08048333:
    uVar5 = in((short)piVar16);
    *puVar37 = uVar5;
    puVar39 = (undefined4 *)((int)puVar40 + (uint)bVar44 * -2 + 1);
    out(*(char *)puVar40,(short)piVar16);
    if (bVar42) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    pbVar10[iVar30 * 2 + 0x65] = pbVar10[iVar30 * 2 + 0x65] & (byte)((uint)piVar16 >> 8);
    pbVar2 = (byte *)(uVar13 + 0x62);
    bVar41 = false;
    *pbVar2 = *pbVar2 & (byte)((uint)pbVar10 >> 8);
    bVar42 = *pbVar2 == 0;
code_r0x08048340:
    out(*puVar39,(short)piVar16);
    if (bVar41 || bVar42) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    *(byte *)(iVar30 + 0x73) = *(byte *)(iVar30 + 0x73) & (byte)((uint)pbVar10 >> 8);
    *(undefined2 *)((int)piVar16 + 0x69) = *(undefined2 *)((int)piVar16 + 0x69);
LAB_0804834d:
    *(byte *)(iVar18 + 99) = *(byte *)(iVar18 + 99) & (byte)((uint)piVar16 >> 8);
    ppcVar28 = (char **)((int)puVar25 + 4);
    puVar25 = (undefined4 *)((int)puVar25 + 8);
    puVar39 = (undefined4 *)*ppcVar28;
    do {
      puVar40 = (undefined4 *)((int)puVar39 + (uint)bVar44 * -2 + 1);
      cVar3 = *(char *)puVar39;
      puVar39 = puVar40;
    } while (cVar3 != '\0');
code_r0x08048360:
    *(char *)((int)puVar40 + -1) = '\n';
  }
  *(undefined4 *)((int)puVar25 + -4) = 1;
  puVar29 = (undefined4 *)((int)puVar25 + -4);
  puVar25 = (undefined4 *)((int)puVar25 + -4);
  *puVar29 = 4;
LAB_0804836d:
  pcVar8 = (code *)swi(0x80);
  (*pcVar8)();
  *(undefined4 *)((int)puVar25 + 4) = 1;
  *(undefined4 *)((int)puVar25 + 4) = 1;
  pcVar8 = (code *)swi(0x80);
  (*pcVar8)();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


