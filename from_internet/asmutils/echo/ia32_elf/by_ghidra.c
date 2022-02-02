typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
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




void __regparm3 entry(uint param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  ushort uVar7;
  undefined3 uVar8;
  byte *pbVar9;
  byte **ppbVar10;
  byte **ppbVar11;
  byte **ppbVar12;
  byte *unaff_ESI;
  byte *pbVar13;
  char *pcVar14;
  char *pcVar15;
  bool bVar16;
  byte bVar17;
  int unaff_retaddr;
  
  bVar17 = 0;
  pcVar14 = &DAT_0804816b;
  ppbVar11 = (byte **)&stack0x00000004;
  if (unaff_retaddr == 1) goto LAB_0804806f;
  ppbVar12 = (byte **)&stack0x00000008;
LAB_08048068:
  pbVar9 = *ppbVar12;
  ppbVar10 = ppbVar12 + 1;
  ppbVar12 = ppbVar12 + 1;
  ppbVar11 = ppbVar10;
  unaff_ESI = pbVar9;
  if (pbVar9 != (byte *)0x0) goto LAB_08048098;
LAB_0804806f:
  do {
    pcVar15 = pcVar14 + -1;
    if (pcVar15 != &DAT_0804816b) {
      pcVar15 = pcVar14 + -2;
    }
    pcVar14 = pcVar15;
    if ((DAT_0804816a & 1) == 0) {
      pcVar14 = pcVar15 + (uint)bVar17 * -2 + 1;
      *pcVar15 = '\n';
    }
    ppbVar11[-1] = (byte *)0x1;
    ppbVar11[-1] = (byte *)0x4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    pbVar9 = (byte *)0x0;
    *ppbVar11 = (byte *)0x1;
    pcVar1 = (code *)swi(0x80);
    param_1 = (*pcVar1)();
    ppbVar12 = ppbVar11 + 2;
LAB_08048098:
    param_1 = param_1 & 0xffffff00;
    if (*unaff_ESI == 0x2d) {
      iVar5 = 0;
      pbVar13 = unaff_ESI + (uint)bVar17 * -2 + 1;
      while( true ) {
        bVar6 = *pbVar13;
        if (bVar6 == 0) break;
        uVar8 = (undefined3)((uint)iVar5 >> 8);
        uVar7 = (ushort)CONCAT31(uVar8,1);
        if (((bVar6 != 0x6e) && (uVar7 = (ushort)iVar5 | 2, bVar6 != 0x65)) &&
           (uVar7 = (ushort)CONCAT31(uVar8,4), bVar6 != 0x45)) goto LAB_080480cb;
        iVar5 = (uint)(byte)((byte)(uVar7 >> 8) | (byte)uVar7) << 8;
        pbVar13 = pbVar13 + (uint)bVar17 * -2 + 1;
      }
      bVar6 = (byte)((uint)iVar5 >> 8);
      if (bVar6 != 0) break;
    }
LAB_080480cb:
    while (ppbVar11 = ppbVar12, unaff_ESI = pbVar9, pcVar15 = pcVar14, pbVar9 != (byte *)0x0) {
LAB_080480d1:
      do {
        pbVar13 = pbVar9 + (uint)bVar17 * -2 + 1;
        bVar6 = *pbVar9;
        uVar2 = param_1 & 0xffffff00;
        param_1 = uVar2 | bVar6;
        bVar3 = false;
        pbVar9 = pbVar13;
        pcVar14 = pcVar15;
        if ((((DAT_0804816a & 4) == 0) && ((DAT_0804816a & 2) != 0)) && (bVar6 == 0x5c)) {
          pbVar9 = pbVar13 + (uint)bVar17 * -2 + 1;
          bVar6 = *pbVar13;
          param_1 = uVar2 | bVar6;
          if (bVar6 != 0x5c) {
            bVar16 = bVar6 == 99;
            if (bVar16) {
              DAT_0804816a = DAT_0804816a | 1;
              goto LAB_080480d1;
            }
            ppbVar12[-1] = (byte *)pcVar15;
            iVar5 = 8;
            pbVar13 = &DAT_0804804c;
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar16 = bVar6 == *pbVar13;
              pbVar13 = pbVar13 + (uint)bVar17 * -2 + 1;
            } while (!bVar16);
            if (bVar16) {
              param_1 = uVar2 | (byte)entry[-(iVar5 + 1)];
              pcVar14 = (char *)ppbVar12[-1];
            }
            else {
              pcVar15 = (char *)ppbVar12[-1];
              ppbVar12[-1] = (byte *)param_1;
              bVar6 = 0;
              iVar5 = 0x800;
              while( true ) {
                bVar4 = (byte)param_1;
                if ((bVar4 < 0x30) || (0x37 < bVar4)) goto LAB_08048156;
                bVar6 = bVar6 * (char)((uint)iVar5 >> 8) + (bVar4 - 0x30);
                if ((char)iVar5 == '\x02') break;
                param_1 = (uint)*pbVar9;
                iVar5 = iVar5 + 1;
                pbVar9 = pbVar9 + (uint)bVar17 * -2 + 1;
              }
              iVar5 = 0xff;
LAB_08048156:
              if ((char)iVar5 == '\0') {
                ppbVar12[-1] = ppbVar12[-1];
                pcVar14 = pcVar15 + (uint)bVar17 * -2 + 1;
                *pcVar15 = '\\';
                param_1 = (uint)ppbVar12[-1];
              }
              else {
                if ((char)iVar5 != -1) {
                  pbVar9 = pbVar9 + -1;
                }
                param_1 = (uint)ppbVar12[-1] & 0xffffff00 | (uint)bVar6;
                pcVar14 = pcVar15;
                if (bVar6 == 0) {
                  bVar3 = true;
                }
              }
            }
          }
        }
        pcVar15 = pcVar14 + (uint)bVar17 * -2 + 1;
        *pcVar14 = (char)param_1;
      } while (((char)param_1 != '\0') || (bVar3));
      param_1 = CONCAT31((int3)(param_1 >> 8),0x20);
      pcVar14 = pcVar15 + (uint)bVar17 * -2 + 1;
      *pcVar15 = ' ';
      pbVar9 = *ppbVar12;
      ppbVar12 = ppbVar12 + 1;
    }
  } while( true );
  DAT_0804816a = DAT_0804816a | bVar6;
  goto LAB_08048068;
}


