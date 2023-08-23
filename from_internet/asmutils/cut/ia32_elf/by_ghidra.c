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




void processEntry entry(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int in_EBX;
  short **ppsVar5;
  short **ppsVar7;
  short **ppsVar8;
  short **ppsVar9;
  short **ppsVar10;
  short **ppsVar11;
  short **ppsVar12;
  short *psVar13;
  short *psVar14;
  int iVar15;
  short **ppsVar6;
  
  DAT_08048337 = '\t';
  ppsVar12 = (short **)&stack0x00000008;
LAB_08048055:
  do {
    psVar13 = *ppsVar12;
    ppsVar10 = ppsVar12 + 1;
    ppsVar8 = ppsVar12 + 1;
    ppsVar5 = ppsVar12 + 1;
    ppsVar6 = ppsVar12 + 1;
    ppsVar11 = ppsVar12 + 1;
    if (psVar13 == (short *)0x0) {
LAB_08048145:
      ppsVar11 = (short **)((int)ppsVar10 + -4);
      *(short **)((int)ppsVar10 + -4) = psVar13;
LAB_08048146:
      iVar3 = 0;
LAB_0804816e:
      do {
        DAT_08048441 = iVar3;
        if ((DAT_08048439 != 0) && (iVar15 = DAT_08048439 + -1, iVar15 != 0)) {
          s_DEBUG_0804832f[6] = '\0';
          do {
            *(undefined4 *)((int)ppsVar11 + -4) = 0x8048187;
            cVar2 = FUN_08048246();
            iVar3 = DAT_08048441;
            if (cVar2 == '\n') goto LAB_0804816e;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
        }
        s_DEBUG_0804832f[6] = '\0';
        iVar15 = 1;
        iVar3 = DAT_0804843d;
        do {
          *(undefined4 *)((int)ppsVar11 + -4) = 0x80481a3;
          uVar4 = FUN_08048246();
          if ((char)uVar4 == '\n') goto LAB_08048214;
          if (DAT_08048336 == '\0') {
LAB_080481de:
            s_DEBUG_0804832f[6] = '\x02';
            *(undefined4 *)((int)ppsVar11 + -4) = 0x80481ea;
            FUN_08048275();
          }
          else if ((char)uVar4 == DAT_08048337) {
            iVar15 = iVar15 + 1;
            if ((DAT_08048338 != '\x01') && (s_DEBUG_0804832f[6] == '\x02')) {
              s_DEBUG_0804832f[6] = '\x01';
            }
          }
          else {
            if (0xff < iVar15) break;
            if ((&DAT_08048339)[iVar15] != '\0') {
              if (s_DEBUG_0804832f[6] == '\x01') {
                *(undefined4 *)((int)ppsVar11 + -4) = uVar4;
                *(undefined4 *)((int)ppsVar11 + -8) = 0x80481dd;
                FUN_08048275();
              }
              goto LAB_080481de;
            }
          }
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        do {
          *(undefined4 *)((int)ppsVar11 + -4) = 0x8048210;
          cVar2 = FUN_08048246();
        } while (cVar2 != '\n');
LAB_08048214:
        *(undefined4 *)((int)ppsVar11 + -4) = 0x8048219;
        FUN_08048275();
        iVar3 = DAT_08048441;
      } while( true );
    }
    if (*psVar13 == 0x632d) {
      psVar13 = psVar13 + 1;
      ppsVar11 = ppsVar12 + 1;
      if (*(char *)psVar13 == '\0') {
        psVar13 = ppsVar12[1];
        ppsVar7 = ppsVar12 + 2;
        ppsVar12 = ppsVar12 + 2;
        ppsVar11 = ppsVar7;
        if (psVar13 == (short *)0x0) goto LAB_0804823d;
      }
      ppsVar12 = ppsVar11;
      *(undefined4 *)((int)ppsVar12 + -4) = 0x80480b3;
      FUN_08048298();
      DAT_0804843d = 1;
      DAT_08048439 = in_EBX;
      if (*(char *)psVar13 == '-') {
        *(undefined4 *)((int)ppsVar12 + -4) = 0x80480ce;
        FUN_08048298();
        if (in_EBX - DAT_08048439 < 0) goto LAB_0804823d;
        in_EBX = (in_EBX - DAT_08048439) + 1;
        DAT_0804843d = in_EBX;
      }
      goto LAB_08048055;
    }
    if (*psVar13 == 0x7a2d) {
      DAT_08048338 = '\x01';
      ppsVar12 = ppsVar12 + 1;
    }
    else if (*psVar13 == 0x642d) {
      if (*(char *)(psVar13 + 1) == '\0') {
        ppsVar8 = ppsVar12 + 2;
        ppsVar12 = ppsVar12 + 2;
        if (*ppsVar5 == (short *)0x0) goto LAB_0804823d;
      }
      *(undefined4 *)((int)ppsVar8 + -4) = 0x80480fd;
      DAT_08048337 = FUN_080482bc();
      ppsVar12 = ppsVar8;
    }
    else {
      if (*psVar13 != 0x662d) {
        if (*psVar13 == 0x2d2d) {
          psVar13 = ppsVar12[1];
          ppsVar10 = ppsVar12 + 2;
          ppsVar11 = ppsVar12 + 2;
          if (psVar13 == (short *)0x0) goto LAB_08048145;
        }
        if (*psVar13 == 0x2d) goto LAB_08048146;
        *(undefined4 *)((int)ppsVar11 + -4) = 5;
        pcVar1 = (code *)swi(0x80);
        iVar3 = (*pcVar1)();
        ppsVar12 = (short **)((int)ppsVar11 + 4);
        ppsVar11 = (short **)((int)ppsVar11 + 4);
        if (iVar3 < 0) {
LAB_0804823d:
          do {
            *(undefined4 *)((int)ppsVar12 + -4) = 1;
            pcVar1 = (code *)swi(0x80);
            (*pcVar1)();
            ppsVar12 = (short **)((int)ppsVar12 + 4);
          } while( true );
        }
        goto LAB_0804816e;
      }
      DAT_08048336 = '\x01';
      ppsVar11 = ppsVar12 + 1;
      psVar14 = psVar13 + 1;
      if (*(char *)(psVar13 + 1) == '\0') {
        ppsVar9 = ppsVar12 + 2;
        ppsVar12 = ppsVar12 + 2;
        ppsVar11 = ppsVar9;
        psVar14 = *ppsVar6;
        if (*ppsVar6 == (short *)0x0) goto LAB_0804823d;
      }
      do {
        ppsVar12 = ppsVar11;
        *(undefined4 *)((int)ppsVar12 + -4) = 0x8048125;
        FUN_08048298();
        if (in_EBX < 0x100) {
          (&DAT_08048339)[in_EBX] = 1;
        }
        cVar2 = *(char *)psVar14;
        ppsVar11 = ppsVar12;
        psVar14 = (short *)((int)psVar14 + 1);
      } while (cVar2 == ',');
    }
  } while( true );
}



undefined8 __regparm3 FUN_08048246(undefined4 param_1,undefined1 *param_2)

{
  code *pcVar1;
  undefined1 *unaff_EBX;
  undefined *puVar2;
  undefined *unaff_EBP;
  undefined8 uVar3;
  
  if ((int)param_2 <= (int)unaff_EBX) {
    pcVar1 = (code *)swi(0x80);
    uVar3 = (*pcVar1)();
    param_1 = (undefined4)((ulonglong)uVar3 >> 0x20);
    puVar2 = &stack0x00000004;
    if ((int)uVar3 == 0) {
      if (unaff_EBP != &DAT_08048c45) {
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        puVar2 = &stack0x00000008;
      }
      do {
        *(undefined4 *)(puVar2 + -4) = 1;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        puVar2 = puVar2 + 4;
      } while( true );
    }
    unaff_EBX = &DAT_08048445;
    param_2 = &DAT_08048445 + (int)uVar3;
  }
  return CONCAT44(param_2,CONCAT31((int3)((uint)param_1 >> 8),*unaff_EBX));
}



void __regparm3 FUN_08048275(undefined param_1)

{
  code *pcVar1;
  undefined *unaff_EBP;
  
  *unaff_EBP = param_1;
  if (unaff_EBP == (undefined *)0x8049444) {
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
  }
  return;
}



void FUN_08048298(void)

{
  byte *unaff_EBP;
  
  for (; (0x2f < *unaff_EBP && ((char)(*unaff_EBP - 0x30) < '\n')); unaff_EBP = unaff_EBP + 1) {
  }
  return;
}



byte FUN_080482bc(void)

{
  byte bVar1;
  byte bVar2;
  byte *unaff_EBP;
  
  bVar1 = *unaff_EBP;
  if (bVar1 == 0x5c) {
    bVar1 = unaff_EBP[1];
    if (bVar1 == 0x61) {
      return 7;
    }
    if (bVar1 == 0x62) {
      return 8;
    }
    if (bVar1 == 0x74) {
      return 9;
    }
    if (bVar1 == 0x72) {
      return 0xd;
    }
    if (bVar1 == 0x6e) {
      return 10;
    }
    if (('/' < (char)bVar1) && ((char)bVar1 < '8')) {
      bVar1 = bVar1 - 0x30;
      bVar2 = unaff_EBP[2] - 0x30;
      if ((0x2f < unaff_EBP[2]) && ((char)bVar2 < '\b')) {
        bVar1 = bVar1 * '\b' ^ bVar2;
        bVar2 = unaff_EBP[3] - 0x30;
        if ((0x2f < unaff_EBP[3]) && ((char)bVar2 < '\b')) {
          bVar1 = bVar1 << 3 ^ bVar2;
        }
      }
    }
  }
  return bVar1;
}


