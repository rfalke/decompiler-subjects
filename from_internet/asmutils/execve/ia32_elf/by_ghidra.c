typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
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




void FUN_0804804c(void)

{
  int unaff_EDI;
  char *pcVar1;
  
  pcVar1 = (char *)(unaff_EDI + -1);
  do {
    pcVar1 = pcVar1 + 1;
  } while (*pcVar1 != '\0');
  return;
}



undefined8 __regparm3 FUN_0804805c(uint param_1,undefined4 param_2)

{
  undefined uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined2 *unaff_EDI;
  undefined2 *puVar7;
  byte in_AF;
  uint local_24;
  
  *unaff_EDI = 0x7830;
  uVar5 = 0;
  puVar7 = unaff_EDI + 1;
  local_24 = param_1;
  do {
    uVar5 = uVar5 + 1;
    uVar4 = local_24 / 0x10;
    bVar2 = (byte)(local_24 % 0x10);
    bVar3 = (bVar2 + 0x97) - (bVar2 < 10);
    in_AF = 9 < (bVar3 & 0xf) | in_AF;
    bVar3 = bVar3 + in_AF * -6;
    puVar6 = (undefined2 *)((int)puVar7 + 1);
    *(byte *)puVar7 =
         bVar3 + (0x9f < bVar3 |
                 (bVar2 < 0x69 || (byte)(bVar2 + 0x97) < (bVar2 < 10)) | in_AF * (bVar3 < 6)) *
                 -0x60;
    puVar7 = puVar6;
    local_24 = uVar4;
  } while (uVar4 != 0);
  *(undefined *)puVar6 = 0;
  puVar7 = unaff_EDI + 1;
  for (uVar5 = uVar5 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    puVar6 = (undefined2 *)((int)puVar6 + -1);
    uVar1 = *(undefined *)puVar6;
    *(undefined *)puVar6 = *(undefined *)puVar7;
    *(undefined *)puVar7 = uVar1;
    puVar7 = (undefined2 *)((int)puVar7 + 1);
  }
  return CONCAT44(param_2,param_1);
}



void FUN_080480a7(void)

{
  code *pcVar1;
  int in_ECX;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = &DAT_080480f3;
  do {
    *(int *)((int)register0x00000010 + -4) = in_ECX;
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    *(undefined4 *)((int)register0x00000010 + -8) = 1;
    *(undefined4 *)((int)register0x00000010 + -8) = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    pcVar3 = pcVar4 + 2;
    *(undefined4 *)((int)register0x00000010 + -4) = 0x80480d3;
    FUN_0804805c();
    *(undefined4 *)((int)register0x00000010 + -4) = 0x80480d8;
    FUN_0804804c();
    *(undefined4 *)((int)register0x00000010 + -4) = 1;
    *(undefined4 *)((int)register0x00000010 + -4) = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    *(undefined4 *)register0x00000010 = 1;
    *(undefined4 *)register0x00000010 = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    piVar2 = (int *)((int)register0x00000010 + 8);
    register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 0xc);
    in_ECX = *piVar2 + -1;
  } while (in_ECX != 0);
  return;
}



// WARNING: Control flow encountered bad instruction data

void __regparm3
entry(undefined4 param_1_00,undefined4 param_2_00,undefined4 param_3,char *param_1,
     undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  char *pcVar3;
  int *piVar4;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  int unaff_retaddr;
  
                    // WARNING: Read-only address (ram,0x080482b6) is written
  uRam080482d6 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200
                 | (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
                 (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1) |
                 (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
                 (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
                    // WARNING: Read-only address (ram,0x080482d6) is written
                    // WARNING: Read-only address (ram,0x080482ba) is written
                    // WARNING: Read-only address (ram,0x080482be) is written
                    // WARNING: Read-only address (ram,0x080482c2) is written
                    // WARNING: Read-only address (ram,0x080482c6) is written
                    // WARNING: Read-only address (ram,0x080482ca) is written
                    // WARNING: Read-only address (ram,0x080482ce) is written
                    // WARNING: Read-only address (ram,0x080482d2) is written
  DAT_080482f6 = param_1;
  DAT_080482fa = param_2;
  DAT_080482fe = *(undefined4 *)(&stack0x0000000c + unaff_retaddr * 4);
  do {
    pcVar3 = param_1;
    param_1 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  piVar4 = (int *)register0x00000010;
  uRam080482b6 = param_1_00;
  piRam080482be = (int *)param_3;
  piRam080482c2 = (int *)param_2_00;
  puRam080482d2 = (undefined *)register0x00000010;
  DAT_080482da = in_CS;
  DAT_080482de = in_DS;
  DAT_080482e2 = in_ES;
  DAT_080482e6 = in_FS;
  DAT_080482ea = in_GS;
  DAT_080482ee = in_SS;
  DAT_080482f2 = unaff_retaddr;
  if (*(int *)(pcVar3 + -4) != 0x73676572) goto LAB_08048231;
  FUN_080480a7();
  do {
    *(undefined4 *)((int)register0x00000010 + -4) = 1;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    piVar4 = (int *)((int)register0x00000010 + 4);
LAB_08048231:
    register0x00000010 = (BADSPACEBASE *)(piVar4 + 1);
  } while (*piVar4 == 1);
  piRam080482be = piVar4 + 2;
  uRam080482ba = piVar4[2];
  piRam080482c2 = piVar4 + *piVar4 + 2;
                    // WARNING: Read-only address (ram,0x080482ba) is written
                    // WARNING: Read-only address (ram,0x080482be) is written
                    // WARNING: Read-only address (ram,0x080482c2) is written
                    // WARNING: Read-only address (ram,0x080482c6) is written
  uRam080482c6 = 0x11223344;
                    // WARNING: Read-only address (ram,0x080482ca) is written
  uRam080482ca = 0x55667788;
                    // WARNING: Read-only address (ram,0x080482ce) is written
  uRam080482ce = 0x9900aabb;
  piVar4[1] = 0x80482b6;
  *piVar4 = (int)(piVar4 + 2);
  piVar4[-1] = (int)piRam080482c2;
  piVar4[-2] = uRam080482ba;
  piVar4[-3] = (int)(piVar4 + 2);
  piVar4[-4] = 0x9900aabb;
  piVar4[-5] = 0x11223344;
  piVar4[-6] = 0x55667788;
  piVar4[-7] = 1;
  piVar4[-7] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  piVar4[-6] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  piVar4[-5] = 0xf;
  piVar4[-5] = 0x804828f;
  FUN_080480a7();
  piVar4[-5] = 1;
  piVar4[-5] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  piVar4[-4] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  piVar4[5] = 0xb;
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


