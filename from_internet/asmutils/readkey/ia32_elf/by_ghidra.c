typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
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




void FUN_0804805c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void processEntry entry(void)

{
  code *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  undefined4 uStack_4;
  
  uStack_4 = 0x80480fe;
  puVar6 = (undefined4 *)CONCAT22((short)((uint)&uStack_4 >> 0x10),(short)&uStack_4 + -4);
  puVar6[-1] = 0x8048079;
  FUN_0804805c();
  *puVar6 = &DAT_08048122;
  puVar6[-1] = 0x8048085;
  FUN_0804805c();
  _DAT_0804812e = _DAT_0804812e & 0xfffffff4;
  *puVar6 = 0x5402;
  puVar6[-1] = 0x8048098;
  FUN_0804805c();
  DAT_08048122 = 0;
  puVar6[-1] = 4;
  puVar6[-1] = 3;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar6[2] = 0x80480b5;
  FUN_0804805c();
  puVar6[2] = 8;
  iVar4 = puVar6[2];
  puVar7 = (undefined *)0x8048105;
  uVar5 = DAT_08048122;
  do {
    *puVar7 = (&DAT_0804804c)[(byte)uVar5 & 0xf];
    puVar7 = puVar7 + -1;
    uVar5 = uVar5 >> 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
                    // WARNING: Read-only address (ram,0x08048106) is written
  uRam08048106 = 10;
                    // WARNING: Read-only address (ram,0x080480fc) is written
  uRam080480fc = 0x7830;
  puVar6[2] = 0xb;
  puVar6[2] = 1;
  puVar6[2] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar6[3] = 1;
  pcVar1 = (code *)swi(0x80);
  pcVar3 = (char *)(*pcVar1)();
  cVar2 = (char)pcVar3;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


