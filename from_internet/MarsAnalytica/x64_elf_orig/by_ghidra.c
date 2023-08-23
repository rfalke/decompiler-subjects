typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    word;
typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
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
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef enum Elf_ProgramHeaderType {
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
} Elf_ProgramHeaderType;

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};




// WARNING: Control flow encountered bad instruction data

void FUN_007ece5f(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Removing unreachable block (ram,0x007f6864)

void processEntry entry(void)

{
  undefined8 in_RCX;
  undefined extraout_DL;
  undefined7 extraout_var;
  long in_RSI;
  long in_RDI;
  undefined8 in_R8;
  undefined8 in_R9;
  
  FUN_007f6ac0();
  FUN_007f68b0(CONCAT71(extraout_var,extraout_DL),in_RDI,extraout_DL,0,in_R8,in_R9,in_RSI + in_RDI,
               CONCAT71(extraout_var,extraout_DL),in_RCX);
  return;
}



void FUN_007f6872(undefined4 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined uVar4;
  ulong unaff_RBP;
  
  puVar3 = (undefined4 *)((long)param_1 + unaff_RBP);
  uVar4 = *(undefined *)puVar3;
  if ((5 < param_4) && (unaff_RBP < 0xfffffffffffffffd)) {
    uVar2 = param_4 - 4;
    do {
      param_4 = uVar2;
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
      uVar2 = param_4 - 4;
    } while (3 < param_4);
    uVar4 = *(undefined *)puVar3;
    if (param_4 == 0) {
      return;
    }
  }
  do {
    puVar3 = (undefined4 *)((long)puVar3 + 1);
    *(undefined *)param_1 = uVar4;
    param_4 = param_4 - 1;
    uVar4 = *(undefined *)puVar3;
    param_1 = (undefined4 *)((long)param_1 + 1);
  } while (param_4 != 0);
  return;
}



long FUN_007f68b0(byte *param_1,uint *param_2,undefined8 param_3,undefined8 param_4,char param_5,
                 undefined8 param_6,long param_7,int param_8,int *param_9)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_EDX;
  uint unaff_EBX;
  byte bVar4;
  bool bVar5;
  byte bVar6;
  bool bVar7;
  code *unaff_retaddr;
  
  if (param_5 == '\b') {
    do {
      while( true ) {
        bVar6 = *(byte *)param_2;
        bVar4 = CARRY4(unaff_EBX,unaff_EBX);
        unaff_EBX = unaff_EBX * 2;
        if (unaff_EBX == 0) {
          uVar3 = *param_2;
          bVar5 = param_2 < (uint *)0xfffffffffffffffc;
          param_2 = param_2 + 1;
          bVar4 = CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)bVar5);
          unaff_EBX = uVar3 * 2 + (uint)bVar5;
          bVar6 = *(byte *)param_2;
        }
        if (!(bool)bVar4) break;
        param_2 = (uint *)((long)param_2 + 1);
        *param_1 = bVar6;
        param_1 = param_1 + 1;
      }
      while( true ) {
        iVar1 = (*unaff_retaddr)();
        uVar2 = iVar1 * 2 + (uint)bVar4;
        bVar6 = CARRY4(unaff_EBX,unaff_EBX);
        unaff_EBX = unaff_EBX * 2;
        uVar3 = extraout_EDX;
        if (unaff_EBX == 0) {
          uVar3 = *param_2;
          bVar5 = param_2 < (uint *)0xfffffffffffffffc;
          param_2 = param_2 + 1;
          bVar6 = CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)bVar5);
          unaff_EBX = uVar3 * 2 + (uint)bVar5;
          uVar3 = (uint)*(byte *)param_2;
        }
        if ((bool)bVar6) break;
        uVar3 = (*unaff_retaddr)();
        bVar4 = CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)bVar6);
      }
      if (uVar2 < 3) {
        bVar5 = CARRY4(unaff_EBX,unaff_EBX);
        unaff_EBX = unaff_EBX * 2;
        if (unaff_EBX == 0) {
          uVar3 = *param_2;
          bVar7 = param_2 < (uint *)0xfffffffffffffffc;
          param_2 = param_2 + 1;
          bVar5 = CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)bVar7);
          unaff_EBX = uVar3 * 2 + (uint)bVar7;
        }
        if (!bVar5) goto LAB_007f6929;
LAB_007f6951:
        (*unaff_retaddr)();
      }
      else {
        param_2 = (uint *)((long)param_2 + 1);
        uVar3 = ((uVar2 - 3) * 0x100 | uVar3 & 0xff) ^ 0xffffffff;
        if (uVar3 == 0) break;
        if ((uVar3 & 1) != 0) goto LAB_007f6951;
LAB_007f6929:
        bVar5 = CARRY4(unaff_EBX,unaff_EBX);
        unaff_EBX = unaff_EBX * 2;
        if (unaff_EBX == 0) {
          uVar3 = *param_2;
          bVar7 = param_2 < (uint *)0xfffffffffffffffc;
          param_2 = param_2 + 1;
          bVar5 = CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)bVar7);
          unaff_EBX = uVar3 * 2 + (uint)bVar7;
        }
        if (bVar5) goto LAB_007f6951;
        do {
          (*unaff_retaddr)();
          bVar5 = CARRY4(unaff_EBX,unaff_EBX);
          unaff_EBX = unaff_EBX * 2;
          if (unaff_EBX == 0) {
            uVar3 = *param_2;
            bVar7 = param_2 < (uint *)0xfffffffffffffffc;
            param_2 = param_2 + 1;
            bVar5 = CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)bVar7);
            unaff_EBX = uVar3 * 2 + (uint)bVar7;
          }
        } while (!bVar5);
      }
      FUN_007f6872();
    } while( true );
  }
  *param_9 = (int)param_1 - param_8;
  return (long)param_2 - param_7;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x007f6a87)
// WARNING: Removing unreachable block (ram,0x007f6aa4)
// WARNING: Removing unreachable block (ram,0x007f6aa7)

void FUN_007f6a44(void)

{
  undefined8 in_RCX;
  
  syscall();
  syscall();
  syscall();
  FUN_007f6a44(&DAT_01200000,0xc6d958,0x1e,in_RCX,0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x007f6a87)
// WARNING: Removing unreachable block (ram,0x007f6aa4)
// WARNING: Removing unreachable block (ram,0x007f6aa7)

void FUN_007f6a55(void)

{
  undefined8 in_RCX;
  
  syscall();
  FUN_007f6a44(&DAT_01200000,0xc6d958,0x1e,in_RCX,0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_007f6ac0(void)

{
  FUN_007f6a55();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


