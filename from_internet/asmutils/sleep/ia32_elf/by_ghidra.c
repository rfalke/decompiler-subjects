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




// WARNING: Control flow encountered bad instruction data

void processEntry entry(int param_1,undefined1 *param_2,char *param_3,undefined1 *param_4)

{
  code *pcVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  uint in_EAX;
  char *pcVar5;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  uint uVar6;
  byte **ppbVar7;
  char *pcVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  bool bVar12;
  byte bVar13;
  undefined8 uVar14;
  
  puVar9 = param_4;
  bVar13 = 0;
  pcVar5 = param_3;
  do {
    pcVar8 = pcVar5;
    in_EAX = CONCAT31((int3)(in_EAX >> 8),*pcVar8);
    pcVar5 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ppbVar7 = &param_4;
  lVar2 = 0;
  if (pcVar8[-6] == 'u') {
    in_ECX = 0x100;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &DAT_0804804c;
    }
    param_3 = (char *)0x0;
    param_2 = puVar9;
    ppbVar7 = (byte **)register0x00000010;
    lVar2 = 0;
  }
  do {
    pbVar10 = *ppbVar7;
    bVar12 = pbVar10 == (byte *)0x0;
    if (bVar12) {
LAB_08048093:
      if (bVar12) {
LAB_080480fb:
        *ppbVar7 = (byte *)0x1;
        pcVar1 = (code *)swi(0x80);
        lRam08048102 = lVar2;
        pcVar5 = (char *)(*pcVar1)();
        cVar4 = (char)pcVar5;
        *pcVar5 = *pcVar5 + cVar4;
        *pcVar5 = *pcVar5 + cVar4;
        *pcVar5 = *pcVar5 + cVar4;
                    // WARNING: Read-only address (ram,0x08048102) is written
                    // WARNING: Read-only address (ram,0x08048106) is written
        *pcVar5 = *pcVar5 + cVar4;
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
    }
    else {
      in_EAX = 0;
      param_1 = 0;
      pbVar11 = pbVar10;
      while( true ) {
        pbVar10 = pbVar11 + (uint)bVar13 * -2 + 1;
        bVar3 = *pbVar11 - 0x30;
        if ((*pbVar11 < 0x30) || (9 < bVar3)) break;
        uVar6 = in_EAX * 10;
        in_EAX = uVar6 + bVar3;
        param_1 = param_1 + (uint)CARRY4(uVar6,(uint)bVar3);
        pbVar11 = pbVar10;
      }
      if (param_1 == 0) {
        bVar12 = in_EAX == 0;
        goto LAB_08048093;
      }
    }
    lRam08048102 = CONCAT44(param_1,in_EAX);
    *ppbVar7 = (byte *)0x1;
    uVar6 = (uint)*ppbVar7;
    if ((char)((uint)in_ECX >> 8) == '\0') {
      bVar3 = pbVar10[-1];
      if (bVar3 == 0) {
LAB_080480e2:
        lRam08048102 = (ulonglong)in_EAX * (ulonglong)uVar6;
      }
      else if (bVar3 != 0x73) {
        *ppbVar7 = (byte *)0x3c;
        uVar6 = (uint)*ppbVar7;
        if (((bVar3 == 0x6d) || (uVar6 = 0xe10, bVar3 == 0x68)) || (uVar6 = 0x15180, bVar3 == 100))
        goto LAB_080480e2;
        if (bVar3 != 0x6e) goto LAB_080480fb;
        lRam08048102 = CONCAT44(in_EAX,param_1);
      }
    }
    else {
      lRam08048102 = CONCAT44((int)(CONCAT44(param_1,in_EAX) % 1000000) * 1000,
                              (int)(CONCAT44(param_1,in_EAX) / 1000000));
    }
                    // WARNING: Read-only address (ram,0x08048102) is written
                    // WARNING: Read-only address (ram,0x08048106) is written
    pcVar1 = (code *)swi(0x80);
    uVar14 = (*pcVar1)();
    param_1 = (int)((ulonglong)uVar14 >> 0x20);
    in_EAX = (uint)uVar14;
    ppbVar7 = ppbVar7 + 2;
    in_ECX = extraout_ECX;
    lVar2 = lRam08048102;
  } while( true );
}


