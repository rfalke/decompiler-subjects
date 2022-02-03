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




void entry(undefined *param_1,int param_2)

{
  byte *pbVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  int unaff_retaddr;
  
  iVar4 = param_2;
  puVar8 = &param_1;
  if (unaff_retaddr != 1) {
    param_2 = 0xb;
    param_1 = &DAT_08048054;
    unaff_EDI = &DAT_0804814a;
    FUN_0804811e();
    DAT_0804814a = 2;
    pcVar2 = (code *)swi(0x80);
    uVar3 = (*pcVar2)(3,1,iVar4);
    puVar8 = (undefined4 *)register0x00000010;
    unaff_ESI = iVar4;
    if (-1 < (int)uVar3) {
      pcVar2 = (code *)swi(0x80);
      iVar4 = (*pcVar2)(&DAT_0804804c,8,0,&DAT_0804814a,0x10);
      puVar8 = &param_1;
      if (-1 < iVar4) {
        DAT_08048140 = 5;
        puVar8 = &param_1;
        do {
          puVar7 = puVar8;
          (&DAT_08048148)[(int)uVar3 >> 3] =
               (&DAT_08048148)[(int)uVar3 >> 3] | '\x01' << (uVar3 & 7);
          unaff_EDI = (undefined4 *)&DAT_08048140;
          unaff_ESI = 0;
          pcVar2 = (code *)swi(0x80);
          iVar4 = (*pcVar2)();
          puVar8 = puVar7 + 1;
          if (iVar4 == 0) goto LAB_08048117;
          unaff_EDI = (undefined4 *)&DAT_0804815a;
          *puVar7 = 0;
          puVar7[-1] = 0;
          puVar7[-2] = 0;
          puVar7[-3] = 0x1c;
          puVar7[-4] = &DAT_0804815a;
          puVar7[-5] = uVar3;
          puVar7[-6] = 0xc;
          puVar7[-6] = 0x66;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar8 = puVar7 + 2;
        } while (DAT_0804816e != '\0');
        puVar7[1] = 2;
        puVar7[1] = 1;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar8 = puVar7 + 3;
      }
    }
  }
LAB_08048117:
  *(undefined4 *)((int)puVar8 + -4) = 1;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  iVar5 = 0;
  iVar4 = 0;
  do {
    cVar6 = '\0';
    while( true ) {
      pbVar1 = (byte *)(unaff_ESI + iVar5);
      iVar5 = iVar5 + 1;
      if (*pbVar1 < 0x30) break;
      cVar6 = cVar6 * '\n' + (*pbVar1 - 0x30);
    }
    *(char *)((int)unaff_EDI + iVar4 + 4) = cVar6;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  return;
}



void FUN_0804811e(void)

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


