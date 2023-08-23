typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
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




void processEntry entry(undefined4 param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  uint in_EAX;
  undefined3 uVar4;
  int iVar5;
  char cVar6;
  undefined2 uVar7;
  byte *pbVar8;
  byte **ppbVar9;
  byte **ppbVar10;
  byte **ppbVar11;
  byte *in_ESI;
  byte *pbVar12;
  char *pcVar13;
  char *pcVar14;
  bool bVar15;
  byte bVar16;
  
  bVar16 = 0;
  pcVar13 = &DAT_0804816b;
  ppbVar10 = (byte **)&stack0x00000004;
  if (param_2 == 1) goto LAB_0804806f;
  ppbVar11 = (byte **)&stack0x00000008;
LAB_08048068:
  pbVar8 = *ppbVar11;
  ppbVar9 = ppbVar11 + 1;
  ppbVar11 = ppbVar11 + 1;
  ppbVar10 = ppbVar9;
  in_ESI = pbVar8;
  if (pbVar8 != (byte *)0x0) goto LAB_08048098;
LAB_0804806f:
  do {
    pcVar14 = pcVar13 + -1;
    if (pcVar14 != &DAT_0804816b) {
      pcVar14 = pcVar13 + -2;
    }
    pcVar13 = pcVar14;
    if ((DAT_0804816a & 1) == 0) {
      pcVar13 = pcVar14 + (uint)bVar16 * -2 + 1;
      *pcVar14 = '\n';
    }
    ppbVar10[-1] = (byte *)0x1;
    ppbVar10[-1] = (byte *)0x4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    pbVar8 = (byte *)0x0;
    *ppbVar10 = (byte *)0x1;
    pcVar1 = (code *)swi(0x80);
    in_EAX = (*pcVar1)();
    ppbVar11 = ppbVar10 + 2;
LAB_08048098:
    in_EAX = CONCAT31((int3)(in_EAX >> 8),*in_ESI);
    if (*in_ESI == 0x2d) {
      iVar5 = 0;
      pbVar12 = in_ESI + (uint)bVar16 * -2 + 1;
      while( true ) {
        bVar3 = *pbVar12;
        in_EAX = CONCAT31((int3)(in_EAX >> 8),bVar3);
        if (bVar3 == 0) break;
        uVar4 = (undefined3)((uint)iVar5 >> 8);
        uVar7 = (undefined2)CONCAT31(uVar4,1);
        if (((bVar3 != 0x6e) && (uVar7 = (undefined2)CONCAT31(uVar4,2), bVar3 != 0x65)) &&
           (uVar7 = (undefined2)CONCAT31(uVar4,4), bVar3 != 0x45)) goto LAB_080480cb;
        iVar5 = (uint)(byte)((byte)((ushort)uVar7 >> 8) | (byte)uVar7) << 8;
        pbVar12 = pbVar12 + (uint)bVar16 * -2 + 1;
      }
      bVar3 = (byte)((uint)iVar5 >> 8);
      if (bVar3 != 0) break;
    }
LAB_080480cb:
    while (ppbVar10 = ppbVar11, in_ESI = pbVar8, pcVar14 = pcVar13, pbVar8 != (byte *)0x0) {
LAB_080480d1:
      do {
        pbVar12 = pbVar8 + (uint)bVar16 * -2 + 1;
        bVar3 = *pbVar8;
        uVar4 = (undefined3)(in_EAX >> 8);
        in_EAX = CONCAT31(uVar4,bVar3);
        bVar2 = false;
        pbVar8 = pbVar12;
        pcVar13 = pcVar14;
        if ((((DAT_0804816a & 4) == 0) && ((DAT_0804816a & 2) != 0)) && (bVar3 == 0x5c)) {
          pbVar8 = pbVar12 + (uint)bVar16 * -2 + 1;
          bVar3 = *pbVar12;
          in_EAX = CONCAT31(uVar4,bVar3);
          if (bVar3 != 0x5c) {
            bVar15 = bVar3 == 99;
            if (bVar15) {
              DAT_0804816a = DAT_0804816a | 1;
              goto LAB_080480d1;
            }
            ppbVar11[-1] = (byte *)pcVar14;
            iVar5 = 8;
            pbVar12 = &DAT_0804804c;
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar15 = bVar3 == *pbVar12;
              pbVar12 = pbVar12 + (uint)bVar16 * -2 + 1;
            } while (!bVar15);
            if (bVar15) {
              in_EAX = CONCAT31(uVar4,entry[-(iVar5 + 1)]);
              pcVar13 = (char *)ppbVar11[-1];
            }
            else {
              pcVar14 = (char *)ppbVar11[-1];
              ppbVar11[-1] = (byte *)in_EAX;
              cVar6 = '\0';
              iVar5 = 0x800;
              while( true ) {
                bVar3 = (byte)in_EAX;
                if ((bVar3 < 0x30) || (0x37 < bVar3)) goto LAB_08048156;
                cVar6 = cVar6 * (char)((uint)iVar5 >> 8) + (bVar3 - 0x30);
                if ((char)iVar5 == '\x02') break;
                in_EAX = (uint)*pbVar8;
                iVar5 = iVar5 + 1;
                pbVar8 = pbVar8 + (uint)bVar16 * -2 + 1;
              }
              iVar5 = 0xff;
LAB_08048156:
              if ((char)iVar5 == '\0') {
                ppbVar11[-1] = ppbVar11[-1];
                pcVar13 = pcVar14 + (uint)bVar16 * -2 + 1;
                *pcVar14 = '\\';
                in_EAX = (uint)ppbVar11[-1];
              }
              else {
                if ((char)iVar5 != -1) {
                  pbVar8 = pbVar8 + -1;
                }
                in_EAX = CONCAT31((int3)((uint)ppbVar11[-1] >> 8),cVar6);
                pcVar13 = pcVar14;
                if (cVar6 == '\0') {
                  bVar2 = true;
                }
              }
            }
          }
        }
        pcVar14 = pcVar13 + (uint)bVar16 * -2 + 1;
        *pcVar13 = (char)in_EAX;
      } while (((char)in_EAX != '\0') || (bVar2));
      in_EAX = CONCAT31((int3)(in_EAX >> 8),0x20);
      pcVar13 = pcVar14 + (uint)bVar16 * -2 + 1;
      *pcVar14 = ' ';
      pbVar8 = *ppbVar11;
      ppbVar11 = ppbVar11 + 1;
    }
  } while( true );
  DAT_0804816a = DAT_0804816a | bVar3;
  goto LAB_08048068;
}


