typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
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




void entry(undefined4 param_1,char *param_2,char *param_3,undefined4 param_4)

{
  byte *pbVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *unaff_EDI;
  int *piVar8;
  byte bVar9;
  int unaff_retaddr;
  int local_1fe8;
  int aiStack8164 [2];
  int iStack8155;
  
  bVar9 = 0;
  piVar7 = &param_4;
  if (unaff_retaddr == 3) {
    pcVar2 = (code *)swi(0x80);
    iVar4 = (*pcVar2)();
    piVar7 = (int *)&stack0x00000014;
    if (-1 < iVar4) {
      param_4._2_2_ = 0x5000;
      unaff_EDI = &param_4;
      param_4._0_2_ = 2;
      DAT_0804819e = iVar4;
      FUN_0804817c();
      pcVar2 = (code *)swi(0x80);
      iVar4 = (*pcVar2)();
      piVar7 = (int *)&stack0x00000014;
      if (iVar4 == 0) {
        cVar3 = '/';
        piVar7 = &local_1fe8;
        do {
          piVar8 = (int *)((int)piVar7 + (uint)bVar9 * -2 + 1);
          *(char *)piVar7 = cVar3;
          param_2 = param_3 + (uint)bVar9 * -2 + 1;
          cVar3 = *param_3;
          param_3 = param_2;
          piVar7 = piVar8;
        } while (cVar3 != '\0');
        unaff_EDI = (undefined4 *)((int)piVar8 + (uint)bVar9 * -2 + 1);
        *(char *)piVar8 = ' ';
        *unaff_EDI = 0x50545448;
        unaff_EDI[1] = 0x302e312f;
        unaff_EDI[2] = 0xa0d0a0d;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        pcVar2 = (code *)swi(0x80);
        iVar4 = (*pcVar2)();
        piVar8 = aiStack8164;
        piVar7 = aiStack8164;
        if ((aiStack8164[0] == 0x50545448) && (piVar7 = aiStack8164, iStack8155 == 0x20303032)) {
LAB_08048118:
          do {
            unaff_EDI = piVar8;
            if (iVar4 != 0) {
              iVar4 = iVar4 + -1;
              unaff_EDI = (undefined4 *)((int)piVar8 + (uint)bVar9 * -2 + 1);
              cVar3 = *(char *)piVar8;
              piVar8 = unaff_EDI;
              if (cVar3 != '\r') goto LAB_08048118;
            }
            piVar7 = aiStack8164;
            if (iVar4 == 0) break;
            if ((*(short *)((int)unaff_EDI + -1) == 0xa0a) ||
               (piVar8 = unaff_EDI, *(int *)((int)unaff_EDI + -1) == 0xa0d0a0d)) goto LAB_0804812f;
          } while( true );
        }
      }
    }
  }
LAB_08048175:
  *(undefined4 *)((int)piVar7 + -4) = 1;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  iVar5 = 0;
  iVar4 = 0;
  do {
    cVar3 = '\0';
    while( true ) {
      pbVar1 = (byte *)(param_2 + iVar5);
      iVar5 = iVar5 + 1;
      if (*pbVar1 < 0x30) break;
      cVar3 = cVar3 * '\n' + (*pbVar1 - 0x30);
    }
    *(char *)((int)unaff_EDI + iVar4 + 4) = cVar3;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  return;
LAB_0804812f:
  unaff_EDI = (undefined4 *)((int)unaff_EDI + 3);
  pcVar2 = (code *)swi(0x80);
  local_1fe8 = iVar4;
  iVar4 = (*pcVar2)();
  piVar7 = aiStack8164;
  if (-1 < iVar4) {
    piVar6 = aiStack8164 + 1;
    DAT_080481a2 = iVar4;
    do {
      piVar6[-1] = 4;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      unaff_EDI = piVar6 + 1;
      *piVar6 = 3;
      pcVar2 = (code *)swi(0x80);
      iVar4 = (*pcVar2)();
      piVar7 = piVar6 + 2;
      piVar6 = piVar6 + 2;
    } while (iVar4 != 0);
  }
  goto LAB_08048175;
}



void FUN_0804817c(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    cVar4 = '\0';
    while( true ) {
      pbVar1 = (byte *)(unaff_ESI + iVar3);
      iVar3 = iVar3 + 1;
      if (*pbVar1 < 0x30) break;
      cVar4 = cVar4 * '\n' + (*pbVar1 - 0x30);
    }
    *(char *)(unaff_EDI + 4 + iVar2) = cVar4;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  return;
}


