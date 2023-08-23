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




void processEntry entry(void)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint extraout_ECX;
  char *pcVar4;
  char **ppcVar5;
  char **ppcVar6;
  undefined4 *puVar7;
  byte bVar8;
  
  bVar8 = 0;
  FUN_08048172();
  ppcVar5 = (char **)&stack0x00000008;
LAB_08048054:
  do {
    do {
      pcVar4 = *ppcVar5;
      ppcVar6 = ppcVar5 + 1;
      if (pcVar4 == (char *)0x0) {
        *ppcVar5 = (char *)0x1;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        ppcVar6 = ppcVar5 + 2;
      }
      *(undefined4 *)((int)ppcVar6 + -4) = 5;
      pcVar2 = (code *)swi(0x80);
      DAT_080482f3 = pcVar4;
      iVar3 = (*pcVar2)();
      ppcVar5 = (char **)((int)ppcVar6 + 4);
      puVar7 = ppcVar6;
    } while (iVar3 < 0);
    while( true ) {
      *puVar7 = 0x8048078;
      FUN_08048283();
      *puVar7 = 0x40;
      *puVar7 = 3;
      pcVar2 = (code *)swi(0x80);
      iVar3 = (*pcVar2)();
      ppcVar5 = (char **)(puVar7 + 2);
      if (iVar3 < 0) goto LAB_08048054;
      puVar7[1] = 0x8048090;
      FUN_080482b3();
      if (extraout_ECX < 0x40) break;
      puVar7[1] = 0x804809a;
      FUN_080482b3();
      puVar7 = puVar7 + 1;
    }
    DAT_0804835f = DAT_0804830b << 3 | DAT_0804830f >> 0x1d;
    DAT_08048363 = DAT_0804830f << 3;
    puVar7[1] = 0x80480b9;
    FUN_0804819a();
    puVar7[1] = 5;
    iVar3 = puVar7[1];
    do {
      puVar7[1] = iVar3;
      *puVar7 = 0x80480c8;
      FUN_08048109();
      iVar3 = puVar7[1] + -1;
    } while (iVar3 != 0);
    puVar7[1] = 0x20;
    puVar7[1] = 0x80480d3;
    FUN_0804812a();
    puVar7[1] = 0x20;
    puVar7[1] = 0x80480db;
    FUN_0804812a();
    puVar7[1] = 0x80480e0;
    FUN_08048172();
    puVar7[1] = DAT_080482f3;
    pcVar4 = DAT_080482f3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    puVar7[1] = 1;
    puVar7[1] = 4;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    ppcVar5 = (char **)(puVar7 + 3);
    puVar7[2] = 10;
    puVar7[2] = 0x8048104;
    FUN_0804812a();
  } while( true );
}



void __regparm3 FUN_08048109(uint param_1)

{
  code *pcVar1;
  
  FUN_0804810f();
  DAT_08048363 = param_1 % 0x10 + 0x30;
  if (0x39 < DAT_08048363) {
    DAT_08048363 = param_1 % 0x10 + 0x57;
  }
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}



void __regparm3 FUN_0804810f(uint param_1,undefined4 param_2,uint param_3)

{
  code *pcVar1;
  int unaff_EBX;
  
  if (unaff_EBX != 1) {
    FUN_0804810f();
  }
  DAT_08048363 = param_1 % param_3 + 0x30;
  if (0x39 < DAT_08048363) {
    DAT_08048363 = param_1 % param_3 + 0x57;
  }
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}



void __regparm3 FUN_0804812a(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x80);
  DAT_08048363 = param_2;
  (*pcVar1)();
  return;
}



void FUN_08048141(void)

{
  return;
}



void FUN_0804814b(void)

{
  FUN_08048141();
  return;
}



void FUN_08048157(void)

{
  FUN_08048141();
  return;
}



void FUN_08048161(void)

{
  FUN_08048141();
  return;
}



void FUN_08048172(void)

{
  DAT_080482f7 = 0x67452301;
  DAT_080482fb = 0xefcdab89;
  DAT_080482ff = 0x98badcfe;
  DAT_08048303 = 0x10325476;
  DAT_08048307 = 0xc3d2e1f0;
  DAT_0804830b = 0;
  DAT_0804830f = 0;
  return;
}



undefined8 __regparm3 FUN_0804819a(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  
  puVar7 = &DAT_080482f7;
  puVar8 = &DAT_08048313;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  uVar6 = 0;
  do {
    uVar5 = uVar6 & 0xf;
    if (0xf < uVar6) {
      uVar2 = (&DAT_08048327)[uVar5 + 0xd & 0xf] ^ (&DAT_08048327)[uVar5 + 8 & 0xf] ^
              (&DAT_08048327)[uVar5 + 2 & 0xf] ^ (&DAT_08048327)[uVar5];
      (&DAT_08048327)[uVar5] = uVar2 << 1 | (uint)((int)uVar2 < 0);
    }
    if (uVar6 < 0x3c) {
      if (uVar6 < 0x28) {
        if (uVar6 < 0x14) {
          uVar9 = FUN_0804814b();
        }
        else {
          uVar9 = FUN_08048157();
        }
      }
      else {
        uVar9 = FUN_08048161();
      }
    }
    else {
      uVar9 = FUN_08048157();
    }
    uVar1 = DAT_0804831f;
    uVar2 = DAT_0804831b;
    uVar5 = DAT_08048313;
    uVar3 = (int)uVar9 + (int)((ulonglong)uVar9 >> 0x20);
    DAT_08048323 = DAT_0804831f;
    DAT_0804831f = DAT_0804831b;
    DAT_0804831b = DAT_08048317 << 0x1e | DAT_08048317 >> 2;
    DAT_08048317 = DAT_08048313;
    DAT_08048313 = uVar3;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x50);
  DAT_080482f7 = DAT_080482f7 + uVar3;
  DAT_080482fb = DAT_080482fb + uVar5;
  DAT_080482ff = DAT_080482ff + DAT_0804831b;
  DAT_08048303 = DAT_08048303 + uVar2;
  DAT_08048307 = DAT_08048307 + uVar1;
  return CONCAT44(param_2,param_1);
}



void FUN_08048283(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_08048367;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



undefined4 __regparm3 FUN_08048290(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_08048327;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}



undefined4 FUN_0804829f(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *unaff_ESI;
  int unaff_EDI;
  uint *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  uVar2 = FUN_08048290();
  iVar3 = 0x10;
  puVar4 = (uint *)(unaff_EDI + -0x40);
  do {
    uVar1 = *unaff_ESI;
    *puVar4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    iVar3 = iVar3 + -1;
    unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  } while (iVar3 != 0);
  return uVar2;
}



void __regparm3 FUN_080482b3(int param_1)

{
  uint uVar1;
  int iVar2;
  
  DAT_0804830f = DAT_0804830f + param_1;
  *(undefined *)((int)&DAT_08048367 + param_1) = 0x80;
  do {
    uVar1 = FUN_0804829f(param_1);
    if (uVar1 < 0x40) {
      if (uVar1 < 0x38) {
        return;
      }
      FUN_0804819a();
      break;
    }
    iVar2 = FUN_0804819a();
  } while (iVar2 != 0x40);
  FUN_08048283();
  FUN_08048290();
  return;
}


