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




// WARNING: Control flow encountered bad instruction data

void __regparm3 entry(uint param_1,uint param_2,undefined4 param_3,byte *param_4,undefined4 param_5)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 extraout_ECX;
  uint uVar6;
  byte **ppbVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  byte bVar11;
  undefined8 uVar12;
  
  bVar11 = 0;
  do {
    pbVar8 = param_4;
    param_1 = param_1 & 0xffffff00 | (uint)*pbVar8;
    param_4 = pbVar8 + 1;
  } while (*pbVar8 != 0);
  ppbVar7 = (byte **)&param_5;
  if (pbVar8[-6] == 0x75) {
    param_3 = 0x100;
    ppbVar7 = (byte **)register0x00000010;
  }
  do {
    pbVar8 = *ppbVar7;
    bVar10 = pbVar8 == (byte *)0x0;
    if (bVar10) {
LAB_08048093:
      if (bVar10) {
LAB_080480fb:
        *ppbVar7 = (byte *)0x1;
        pcVar1 = (code *)swi(0x80);
        pcVar5 = (char *)(*pcVar1)();
        cVar3 = (char)pcVar5;
        *pcVar5 = *pcVar5 + cVar3;
        *pcVar5 = *pcVar5 + cVar3;
        *pcVar5 = *pcVar5 + cVar3;
        *pcVar5 = *pcVar5 + cVar3;
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
    }
    else {
      param_1 = 0;
      param_2 = 0;
      pbVar9 = pbVar8;
      while( true ) {
        pbVar8 = pbVar9 + (uint)bVar11 * -2 + 1;
        bVar2 = *pbVar9 - 0x30;
        if ((*pbVar9 < 0x30) || (9 < bVar2)) break;
        uVar6 = param_1 * 10;
        param_1 = uVar6 + bVar2;
        param_2 = param_2 + CARRY4(uVar6,(uint)bVar2);
        pbVar9 = pbVar8;
      }
      if (param_2 == 0) {
        bVar10 = param_1 == 0;
        goto LAB_08048093;
      }
    }
    *ppbVar7 = (byte *)0x1;
    uVar6 = (uint)*ppbVar7;
    if ((char)((uint)param_3 >> 8) == '\0') {
      bVar2 = pbVar8[-1];
      if (bVar2 == 0) {
LAB_080480e2:
        uVar4 = (uint)((ulonglong)param_1 * (ulonglong)uVar6);
        param_2 = (uint)((ulonglong)param_1 * (ulonglong)uVar6 >> 0x20);
      }
      else {
        uVar4 = param_1;
        if (bVar2 != 0x73) {
          *ppbVar7 = (byte *)0x3c;
          uVar6 = (uint)*ppbVar7;
          if (((bVar2 == 0x6d) || (uVar6 = 0xe10, bVar2 == 0x68)) || (uVar6 = 0x15180, bVar2 == 100)
             ) goto LAB_080480e2;
          uVar4 = param_2;
          param_2 = param_1;
          if (bVar2 != 0x6e) goto LAB_080480fb;
        }
      }
    }
    else {
      uVar4 = (uint)(CONCAT44(param_2,param_1) / 1000000);
      param_2 = (int)(CONCAT44(param_2,param_1) % 1000000) * 1000;
    }
                    // WARNING: Read-only address (ram,0x08048102) is written
                    // WARNING: Read-only address (ram,0x08048106) is written
    pcVar1 = (code *)swi(0x80);
    uRam08048102 = uVar4;
    uRam08048106 = param_2;
    uVar12 = (*pcVar1)();
    param_2 = (uint)((ulonglong)uVar12 >> 0x20);
    param_1 = (uint)uVar12;
    param_3 = extraout_ECX;
    ppbVar7 = ppbVar7 + 2;
  } while( true );
}


