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




void FUN_08048070(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  
  bVar8 = 0;
  pcVar6 = &DAT_080483f9;
  pcVar1 = (code *)swi(0x80);
  iVar3 = (*pcVar1)();
  if (-1 < iVar3) {
    pcVar1 = (code *)swi(0x80);
    pcVar4 = (char *)(*pcVar1)();
    if (-1 < (int)pcVar4) {
      pcVar1 = (code *)swi(0x80);
      pcVar6 = pcVar4;
      pcVar4 = (char *)(*pcVar1)();
      if (-1 < (int)pcVar4) {
        *pcVar6 = '\n';
        pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
        while( true ) {
          pcVar5 = pcVar4 + (uint)bVar8 * -2 + 1;
          cVar2 = *pcVar4;
          if (cVar2 == '\0') break;
          pcVar4 = pcVar5;
          if (cVar2 == '\\') {
            pcVar4 = pcVar5 + (uint)bVar8 * -2 + 1;
            cVar2 = *pcVar5;
            if (cVar2 == 's') {
              pcVar5 = "";
            }
            else if (cVar2 == 'n') {
              pcVar5 = &DAT_080482b4;
            }
            else if (cVar2 == 'm') {
              pcVar5 = &DAT_08048377;
            }
            else if (cVar2 == 'o') {
              pcVar5 = &DAT_080483b8;
            }
            else if (cVar2 == 'r') {
              pcVar5 = &DAT_080482f5;
            }
            else if (cVar2 == 'v') {
              pcVar5 = &DAT_08048336;
            }
            else {
              if (cVar2 != 'l') goto LAB_08048131;
              pcVar5 = (char *)0x0;
            }
            do {
              cVar2 = *pcVar5;
              pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
              *pcVar6 = cVar2;
              pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
              pcVar6 = pcVar7;
            } while (cVar2 != '\0');
            pcVar6 = pcVar7 + -1;
          }
          else {
LAB_08048131:
            *pcVar6 = cVar2;
            pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
          }
        }
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
      }
    }
  }
  pcVar4 = &DAT_080482b4;
  do {
    cVar2 = *pcVar4;
    pcVar5 = pcVar6 + (uint)bVar8 * -2 + 1;
    *pcVar6 = cVar2;
    pcVar4 = pcVar4 + (uint)bVar8 * -2 + 1;
    pcVar6 = pcVar5;
  } while (cVar2 != '\0');
  *(undefined4 *)(pcVar5 + -1) = 0x676f6c20;
  *(undefined4 *)(pcVar5 + 3) = 0x203a6e69;
  return;
}



// WARNING: Control flow encountered bad instruction data

void processEntry
entry(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
     undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10
     ,undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,
     undefined4 param_15,char *param_16,undefined *param_17,undefined1 *param_18,undefined4 param_19
     )

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  
  puRam0804826f = &param_4 + param_2;
                    // WARNING: Read-only address (ram,0x0804826f) is written
  puVar5 = &param_3;
  if (param_2 != 1) {
                    // WARNING: Read-only address (ram,0x0804826b) is written
    uRam0804826b = param_4;
    param_4 = 0x7a;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    param_5 = 0x30;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    param_6 = 0x6f;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    param_7 = 6;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    param_8 = 6;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    param_9 = 6;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    param_10 = 0xc;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    param_11 = 5;
    pcVar1 = (code *)swi(0x80);
    iVar3 = (*pcVar1)();
    puVar5 = &param_13;
    if ((-1 < iVar3) && (puVar5 = &param_13, iVar3 == 0)) {
      param_12 = 0x29;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      param_13 = 0x29;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      param_14 = 0x5e;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      param_15 = 4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      param_16 = (char *)0x8048202;
      FUN_08048070();
      param_16 = (char *)0x4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      param_17 = (undefined *)0x42;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      param_18 = (undefined1 *)0x3;
      pcVar1 = (code *)swi(0x80);
      iVar3 = (*pcVar1)();
      puVar5 = (undefined4 *)&stack0x00000048;
      if (-1 < iVar3) {
        (&DAT_080483f8)[iVar3] = 0;
        param_19 = 0;
        param_18 = &DAT_080483f9;
        param_17 = &DAT_08048067;
        param_16 = s__bin_login_0804805c;
        param_15 = 0xb;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        puVar5 = &param_17;
      }
    }
  }
  *(undefined4 *)((int)puVar5 + -4) = 1;
  pcVar1 = (code *)swi(0x80);
  pcVar4 = (char *)(*pcVar1)();
  cVar2 = (char)pcVar4;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


