typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
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

void entry(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  undefined4 auStack84 [21];
  
  bVar7 = 0;
  puVar4 = auStack84 + 1;
  do {
    puVar4[-1] = 0x50;
    puVar4[-1] = 3;
    pcVar1 = (code *)swi(0x80);
    iVar3 = (*pcVar1)();
    puVar5 = puVar4 + 1;
    puVar6 = puVar4 + 1;
    if (iVar3 == 0) {
      *puVar4 = 1;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    do {
      cVar2 = *(char *)puVar5;
      if ((('@' < cVar2) && (cVar2 < '{')) && ((cVar2 < '[' || ('`' < cVar2)))) {
        if (cVar2 < 'N') {
LAB_08048090:
          cVar2 = cVar2 + '\r';
        }
        else {
          if ('Z' < cVar2) {
            if (cVar2 < 'n') goto LAB_08048090;
            if ('z' < cVar2) goto LAB_08048069;
          }
          cVar2 = cVar2 + -0xd;
        }
      }
LAB_08048069:
      *(char *)puVar6 = cVar2;
      iVar3 = iVar3 + -1;
      puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar7 * -2 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar7 * -2 + 1);
    } while (iVar3 != 0);
    *puVar4 = 1;
    *puVar4 = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar4 = puVar4 + 2;
  } while( true );
}


