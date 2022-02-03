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




void entry(void)

{
  code *pcVar1;
  short *psVar2;
  short **ppsVar3;
  short **ppsVar4;
  int iVar5;
  
code_r0x08048053:
  iVar5 = -1;
  ppsVar3 = (short **)((int)register0x00000010 + 8);
  do {
    ppsVar4 = ppsVar3;
    iVar5 = iVar5 + 1;
    while( true ) {
      psVar2 = *ppsVar4;
      if (psVar2 == (short *)0x0) {
        *ppsVar4 = (short *)0x1;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        register0x00000010 = (BADSPACEBASE *)(ppsVar4 + 2);
        goto code_r0x08048053;
      }
      ppsVar3 = ppsVar4 + 1;
      if (*psVar2 == 0x632d) break;
      ppsVar3 = ppsVar4 + 1;
      if (((int)psVar2 < 0) && (ppsVar3 = ppsVar4 + 1, iVar5 == 0)) {
        *ppsVar4 = (short *)0x42;
        *ppsVar4 = (short *)0x5;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        ppsVar3 = ppsVar4 + 2;
      }
      *(undefined4 *)((int)ppsVar3 + -4) = 0x1e;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      ppsVar4 = (short **)((int)ppsVar3 + 4);
    }
  } while( true );
}


