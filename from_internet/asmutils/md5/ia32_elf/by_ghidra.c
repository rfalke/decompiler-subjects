typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
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
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __regparm2 entry(undefined4 param_1_00,int param_2_00,undefined4 param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  uint *puVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int extraout_ECX;
  int iVar10;
  byte *pbVar11;
  char *pcVar12;
  char **ppcVar13;
  uint *puVar14;
  char **ppcVar15;
  int iVar16;
  char *pcVar17;
  char *pcVar18;
  int *piVar19;
  int *piVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  int iVar23;
  undefined *puVar24;
  uint uVar25;
  char *pcVar26;
  undefined2 in_CS;
  byte bVar27;
  float10 fVar28;
  undefined8 uVar29;
  undefined4 uStack4;
  
  bVar27 = 0;
  puVar21 = &DAT_080482cd;
  do {
    param_2_00 = param_2_00 + 1;
    fVar28 = (float10)fsin((float10)param_2_00);
    uStack4 = (undefined4)(longlong)ROUND(ABS(fVar28) * (float10)4294967296.0);
    *puVar21 = uStack4;
    puVar21 = puVar21 + 1;
  } while (param_2_00 < 0x40);
  ppcVar15 = (char **)&param_2;
  ppcVar13 = (char **)&param_2;
  pcVar17 = (char *)0x0;
  pcVar18 = (char *)0x0;
  if (param_2 == 0) goto LAB_080480c5;
LAB_080480ab:
  pcVar12 = *ppcVar15;
  *ppcVar15 = pcVar12;
  if (pcVar12 != (char *)0x0) {
    ppcVar15[-1] = (char *)0x5;
    pcVar1 = (code *)swi(0x80);
    pcVar12 = (char *)(*pcVar1)();
    ppcVar13 = ppcVar15 + 1;
    pcVar17 = pcVar12;
    if (-1 < (int)pcVar12) {
LAB_080480c5:
      DAT_080483cd = 0x67452301;
      puVar21 = &DAT_080483d5 + (uint)bVar27 * -2 + (uint)bVar27 * -2;
      (&DAT_080483d1)[(uint)bVar27 * -2] = 0xefcdab89;
      puVar22 = puVar21 + (uint)bVar27 * -2 + 1;
      *puVar21 = 0x98badcfe;
      *puVar22 = 0x10325476;
      puVar22[(uint)bVar27 * -2 + 1] = 0;
      *(undefined2 *)(puVar22 + (uint)bVar27 * -2 + 1 + (uint)bVar27 * -2 + 1) = 0;
      do {
        *(undefined4 *)((int)ppcVar13 + -4) = 0x40;
        *(undefined4 *)((int)ppcVar13 + -4) = 0x804828d;
        puVar3 = (uint *)((int)ppcVar13 + -4);
        do {
          ppcVar15 = (char **)puVar3;
          ppcVar15[-1] = (char *)0x3;
          pcVar1 = (code *)swi(0x80);
          uVar29 = (*pcVar1)();
          pcVar12 = (char *)uVar29;
          pcVar18 = pcVar17;
          if ((int)pcVar12 < 0) goto LAB_08048255;
          puVar3 = (uint *)(ppcVar15 + 1);
        } while (pcVar12 != (char *)0x0);
        iVar23 = (int)ppcVar15[1];
        iVar10 = -(((int)((ulonglong)uVar29 >> 0x20) - (int)pcVar12) + -0x40);
        DAT_080483dd = DAT_080483dd + iVar10;
        if (iVar10 < 0x40) {
          if ((iVar10 == 0) && ((char)DAT_080483e1 != '\0')) goto LAB_080481ed;
          if (DAT_080483e1._1_1_ == '\0') {
            DAT_080483e1._1_1_ = '\x01';
            *(undefined *)(iVar23 + iVar10) = 0x80;
            iVar10 = iVar10 + 1;
          }
          if (iVar10 < 0x39) {
            ppcVar15[1] = (char *)0x38;
            piVar19 = (int *)(iVar23 + iVar10);
            for (iVar7 = (int)ppcVar15[1] - iVar10; iVar7 != 0; iVar7 = iVar7 + -1) {
              *(undefined *)piVar19 = 0;
              piVar19 = (int *)((int)piVar19 + (uint)bVar27 * -2 + 1);
            }
            ppcVar15[1] = (char *)DAT_080483dd;
            *piVar19 = DAT_080483dd << 3;
            piVar19[(uint)bVar27 * -2 + 1] = (uint)ppcVar15[1] >> 0x1d;
            DAT_080483e1._0_1_ = (char)DAT_080483e1 + '\x01';
          }
          else {
            ppcVar15[1] = (char *)0x40;
            puVar24 = (undefined *)(iVar23 + iVar10);
            for (iVar7 = (int)ppcVar15[1] - iVar10; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar24 = 0;
              puVar24 = puVar24 + (uint)bVar27 * -2 + 1;
            }
          }
        }
        ppcVar15[1] = pcVar17;
        bVar27 = 0;
        piVar19 = &DAT_080482cd;
        *ppcVar15 = (char *)0x3;
        iVar16 = (int)*ppcVar15;
        *ppcVar15 = (char *)0xf;
        iVar10 = DAT_080483cd;
        iVar23 = DAT_080483d5;
        iVar7 = DAT_080483d1;
        do {
          ppcVar15[-1] = (char *)iVar10;
          uVar25 = (uint)*(byte *)(iVar16 + 0x8048279);
          iVar10 = (int)ppcVar15[-1];
          iVar8 = iVar23;
          do {
            piVar20 = piVar19;
            iVar23 = iVar7;
            ppcVar15[-1] = (char *)iVar8;
            ppcVar15[-2] = (char *)iVar10;
            pcVar1 = *(code **)(iVar16 * 4 + 0x804827d);
            ppcVar15[-3] = (char *)0x804819c;
            uVar29 = (*pcVar1)();
            iVar10 = (int)((ulonglong)uVar29 >> 0x20);
            ppcVar15[-2] = (char *)((int)ppcVar15[-2] + (int)uVar29);
            uVar6 = (int)ppcVar15[-2] + *piVar20 + *(int *)(uVar25 * 4 + 0x804828d);
            bVar2 = *(byte *)(((uint)*ppcVar15 & 3) + 0x8048265 + iVar16 * 4) & 0x1f;
            iVar7 = (uVar6 << bVar2 | uVar6 >> 0x20 - bVar2) + iVar23;
            uVar25 = uVar25 + *(byte *)(iVar16 + 0x8048275) & 0xf;
            piVar19 = piVar20 + 1;
            iVar9 = (int)ppcVar15[-1];
            *ppcVar15 = (char *)((int)*ppcVar15 + -1);
            iVar8 = iVar23;
          } while (-1 < (int)*ppcVar15);
          *ppcVar15 = (char *)((uint)*ppcVar15 & 0xf);
          iVar16 = iVar16 + -1;
        } while (-1 < iVar16);
        *piVar19 = *piVar19 + iVar10;
        piVar20[2] = piVar20[2] + iVar7;
        piVar20[3] = piVar20[3] + iVar23;
        piVar20[4] = piVar20[4] + iVar9;
        pcVar17 = ppcVar15[1];
        ppcVar13 = ppcVar15 + 2;
      } while( true );
    }
LAB_08048255:
    ppcVar15 = (char **)((int)ppcVar15 + 4);
  }
  *(undefined4 *)((int)ppcVar15 + -4) = 1;
  pcVar1 = (code *)swi(0x80);
  uVar29 = (*pcVar1)();
  pbVar11 = (byte *)((ulonglong)uVar29 >> 0x20);
  pcVar17 = (char *)uVar29;
  cVar4 = (char)uVar29;
  *pcVar17 = *pcVar17 + cVar4;
  *pcVar17 = *pcVar17 + cVar4;
  *pcVar17 = *pcVar17 + cVar4;
  LOCK();
  iVar10 = extraout_ECX + 1;
  *pbVar11 = *pbVar11 & (byte)iVar10;
  *pcVar12 = *pcVar12 + (byte)iVar10 + ((char *)0xe8f9f5f0 < pcVar17);
  uVar25 = (uint)(pcVar17 + 0x17060a0f) & 0xffffff00 |
           (uint)(byte)((char)(pcVar17 + 0x17060a0f) + 0x14);
  *(undefined2 *)ppcVar15 = in_CS;
  _DAT_070c1116 = _DAT_070c1116 | uVar25;
  uVar25 = uVar25 + _DAT_01050001;
  pcVar18[-0x80] = pcVar18[-0x80] + (char)((uint)iVar10 >> 8);
  bVar27 = (char)uVar25 + 8;
  pcVar17 = (char *)(uVar25 & 0xffffff00 | (uint)bVar27);
  pcVar17[iVar10] = pcVar17[iVar10] + 'Y';
  pcVar17[iVar10] = pcVar17[iVar10] + 'L';
  pcVar17[iVar10] = pcVar17[iVar10];
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
  *pcVar17 = *pcVar17 + bVar27;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
LAB_080481ed:
  pcVar12 = &DAT_080483e3;
  ppcVar15[1] = &DAT_080483e3;
  *ppcVar15 = (char *)0x10;
  iVar10 = (int)*ppcVar15;
  puVar21 = &DAT_080483cd;
  do {
    bVar2 = *(byte *)puVar21;
    pcVar26 = pcVar12 + (uint)bVar27 * -2 + 1;
    *pcVar12 = (bVar2 >> 4) % 10 + ((bVar2 >> 4) / 10) * '1' + '0';
    uVar5 = CONCAT11((bVar2 & 0xf) / 10,bVar2) & 0xff0f;
    pcVar12 = pcVar26 + (uint)bVar27 * -2 + 1;
    *pcVar26 = (byte)uVar5 % 10 + (char)((uint)uVar5 >> 8) * '1' + '0';
    iVar10 = iVar10 + -1;
    puVar21 = (undefined4 *)((int)puVar21 + (uint)bVar27 * -2 + 1);
  } while (iVar10 != 0);
  ppcVar15[1] = (char *)0x1;
  ppcVar15[1] = (char *)0x20;
  ppcVar15[1] = (char *)0x4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar14 = (uint *)(ppcVar15 + 3);
  if (pcVar17 != (char *)0x0) {
    ppcVar15[2] = (char *)0x1;
    ppcVar15[2] = (char *)0x4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    pcVar17 = ppcVar15[4];
    ppcVar15[4] = pcVar17;
    do {
      cVar4 = *pcVar17;
      pcVar17 = pcVar17 + (uint)bVar27 * -2 + 1;
    } while (cVar4 != '\0');
    ppcVar15[4] = (char *)0x4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar14 = (uint *)(ppcVar15 + 6);
  }
  *(undefined4 *)((int)puVar14 + -4) = 1;
  *(undefined4 *)((int)puVar14 + -4) = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  ppcVar15 = (char **)((int)puVar14 + 4);
  goto LAB_080480ab;
}


