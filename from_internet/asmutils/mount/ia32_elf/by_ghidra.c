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




void __regparm1 entry(byte *param_1,byte **param_2,short *param_3,byte *param_4,short *param_5)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  short *psVar5;
  byte **ppbVar6;
  undefined **ppuVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  byte **ppbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  bool bVar17;
  int unaff_retaddr;
  
  puVar9 = &param_2;
  if (unaff_retaddr + -1 == 0) goto LAB_0804806b;
  puVar9 = &param_4;
  puVar11 = &param_4;
  ppbVar6 = param_2;
  do {
    ppbVar13 = ppbVar6;
    param_1 = (byte *)((uint)param_1 & 0xffffff00);
    ppbVar6 = (byte **)((int)ppbVar13 + 1);
  } while (*(char *)ppbVar13 != '\0');
  if (*(char *)((int)ppbVar13 + -6) == 'u') {
    param_3 = (short *)0x16;
    puVar8 = &param_5;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
  }
  else {
    if ((byte)(unaff_retaddr + -1) < 2) goto LAB_0804806b;
    psVar5 = param_3;
    pbVar14 = param_4;
    pbVar12 = param_4;
    if (*param_3 == 0x6f2d) {
LAB_080480b6:
      do {
        pbVar1 = pbVar14 + 1;
        bVar2 = *pbVar14;
        param_1 = (byte *)((uint)param_1 & 0xffffff00 | (uint)bVar2);
        pbVar14 = pbVar1;
        if (bVar2 != 0x2c) {
          if (bVar2 != 0) goto LAB_080480b6;
          DAT_080481d5 = DAT_080481d5 + '\x01';
        }
        psVar5 = (short *)0x7;
        ppuVar7 = &PTR_DAT_08048156;
        ppbVar6 = (byte **)(pbVar1 + (-1 - (int)pbVar12));
        do {
          bVar17 = ppbVar6 == (byte **)0x0;
          param_4 = param_1;
          param_3 = psVar5;
          param_2 = ppuVar7;
          ppbVar6 = (byte **)(pbVar1 + (-1 - (int)pbVar12));
          pbVar15 = pbVar12;
          pbVar16 = *ppuVar7;
          do {
            if (ppbVar6 == (byte **)0x0) break;
            ppbVar6 = (byte **)((int)ppbVar6 + -1);
            bVar17 = *pbVar15 == *pbVar16;
            pbVar15 = pbVar15 + 1;
            pbVar16 = pbVar16 + 1;
          } while (bVar17);
          if (bVar17) {
            param_1 = ppuVar7[1];
            DAT_080481d1 = DAT_080481d1 | (uint)param_1;
            break;
          }
          ppuVar7 = ppuVar7 + 2;
          psVar5 = (short *)((int)psVar5 + -1);
          param_1 = param_4;
          ppbVar6 = ppuVar7;
        } while (psVar5 != (short *)0x0);
        pbVar12 = pbVar1;
      } while (DAT_080481d5 != '\x01');
      puVar11 = (undefined4 *)&stack0x00000014;
      psVar5 = param_5;
    }
    if (*psVar5 == 0x742d) {
      puVar11 = (undefined4 *)((int)puVar11 + 8);
    }
    puVar8 = puVar11 + 1;
    *puVar11 = 0x8048110;
    FUN_08048140();
    DAT_080481d1 = DAT_080481d1 | 1;
    *puVar11 = 0x804811c;
    FUN_08048140();
    DAT_080481d1 = DAT_080481d1 & 0xfffffffe;
    DAT_080481d1 = DAT_080481d1 | 4;
    *puVar11 = 0x804812f;
    FUN_08048140();
    DAT_080481d1 = DAT_080481d1 | 1;
    *puVar11 = 0x804813b;
    FUN_08048140();
  }
LAB_08048064:
  puVar8[-1] = 1;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  puVar9 = puVar8 + 1;
LAB_0804806b:
  puVar9[-1] = 5;
  pcVar3 = (code *)swi(0x80);
  iVar4 = (*pcVar3)();
  puVar10 = puVar9 + 1;
  if (iVar4 < 0) goto code_r0x0804807b;
  goto LAB_08048089;
code_r0x0804807b:
  *puVar9 = 5;
  pcVar3 = (code *)swi(0x80);
  iVar4 = (*pcVar3)();
  puVar10 = puVar9 + 2;
  puVar8 = puVar9 + 2;
  if (-1 < iVar4) {
LAB_08048089:
    puVar10[-1] = 3;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    *puVar10 = 1;
    *puVar10 = 4;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    puVar8 = puVar10 + 2;
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


