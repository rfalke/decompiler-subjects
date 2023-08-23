typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
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




undefined4 __regparm3 FUN_08048060(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char *unaff_EDI;
  char *pcVar3;
  undefined4 local_4;
  
  iVar2 = -1;
  do {
    pcVar3 = unaff_EDI;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = unaff_EDI + 1;
    cVar1 = *unaff_EDI;
    unaff_EDI = pcVar3;
  } while (cVar1 != '\0');
  local_4 = param_1;
  if ((*(int *)(pcVar3 + -5) == 0x64656570) && (*(int *)(pcVar3 + -9) == 0x73757063)) {
    local_4 = 0;
  }
  return local_4;
}



// WARNING: Removing unreachable block (ram,0x080480d0)
// WARNING: Removing unreachable block (ram,0x080480c3)

void processEntry entry(undefined4 param_1,int param_2,undefined4 param_3,uint *param_4)

{
  char *pcVar1;
  undefined4 *puVar2;
  int *piVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  undefined2 *puVar9;
  int *piVar10;
  byte in_CF;
  bool bVar11;
  byte in_AF;
  bool bVar12;
  bool bVar13;
  byte in_TF;
  byte in_IF;
  byte bVar14;
  bool bVar15;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar16;
  
  bVar14 = 0;
  param_2 = param_2 * 4;
  iVar7 = FUN_08048060();
  piVar10 = &param_3;
  bVar15 = SBORROW4(iVar7,1);
  uVar8 = iVar7 - 1;
  bVar13 = (int)uVar8 < 0;
  bVar12 = uVar8 == 0;
  bVar11 = (POPCOUNT(uVar8 & 0xff) & 1U) == 0;
  (&stack0x00000013)[param_2] = (char)uVar8;
  if (!bVar12 && 0 < iVar7) {
    piVar10 = (int *)&stack0x0000000c;
    uVar8 = *param_4;
    if ((short)uVar8 != 0x742d) {
      in_CF = uVar8 < 0x69742d2d;
      bVar15 = SBORROW4(uVar8,0x69742d2d);
      uVar8 = uVar8 + 0x968bd2d3;
      bVar13 = (int)uVar8 < 0;
      bVar12 = uVar8 == 0;
      bVar11 = (POPCOUNT(uVar8 & 0xff) & 1U) == 0;
      if (!bVar12) goto LAB_080480ab;
    }
    pcVar1 = &stack0x00000013 + param_2;
    in_CF = *pcVar1 != '\0';
    bVar15 = false;
    *pcVar1 = -*pcVar1;
    bVar13 = *pcVar1 < '\0';
    bVar12 = *pcVar1 == '\0';
    bVar11 = (POPCOUNT(*pcVar1) & 1U) == 0;
  }
LAB_080480ab:
  piVar10[-1] = (uint)(in_NT & 1) * 0x4000 | (uint)bVar15 * 0x800 | (uint)(bVar14 & 1) * 0x400 |
                (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)bVar13 * 0x80 |
                (uint)bVar12 * 0x40 | (uint)(in_AF & 1) * 0x10 | (uint)bVar11 * 4 |
                (uint)(in_CF & 1) | (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
                (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  uVar8 = piVar10[-1];
  piVar10[-1] = uVar8 ^ 0x200000;
  uVar16 = piVar10[-1];
  piVar10[-1] = (uint)((uVar16 & 0x4000) != 0) * 0x4000 | (uint)((uVar16 & 0x800) != 0) * 0x800 |
                (uint)((uVar16 & 0x400) != 0) * 0x400 | (uint)((uVar16 & 0x200) != 0) * 0x200 |
                (uint)((uVar16 & 0x100) != 0) * 0x100 | (uint)((uVar16 & 0x80) != 0) * 0x80 |
                (uint)((uVar16 & 0x40) != 0) * 0x40 | (uint)((uVar16 & 0x10) != 0) * 0x10 |
                (uint)((uVar16 & 4) != 0) * 4 | (uint)((uVar16 & 1) != 0) |
                (uint)((uVar16 & 0x200000) != 0) * 0x200000 |
                (uint)((uVar16 & 0x40000) != 0) * 0x40000;
  if (piVar10[-1] == uVar8) goto LAB_080480fd;
  if ((byte)(&stack0x00000013)[param_2] < 0x80) {
    puVar2 = (undefined4 *)cpuid_basic_info(0);
    piVar10[-1] = *puVar2;
    piVar10[-2] = 0x80480cb;
    FUN_08048142();
    piVar3 = (int *)cpuid(0x80000000);
    if (*piVar3 < 0) {
      piVar10[-2] = 0x80480db;
      FUN_08048142();
    }
    if (1 < (uint)piVar10[-1]) {
      iVar7 = CONCAT31((int3)((uint)piVar10[-1] >> 8),2);
      if (iVar7 == 0) {
        puVar2 = (undefined4 *)cpuid_basic_info(0);
      }
      else if (iVar7 == 1) {
        puVar2 = (undefined4 *)cpuid_Version_info(1);
      }
      else if (iVar7 == 2) {
        puVar2 = (undefined4 *)cpuid_cache_tlb_info(2);
      }
      else if (iVar7 == 3) {
        puVar2 = (undefined4 *)cpuid_serial_info(3);
      }
      else if (iVar7 == 4) {
        puVar2 = (undefined4 *)cpuid_Deterministic_Cache_Parameters_info(4);
      }
      else if (iVar7 == 5) {
        puVar2 = (undefined4 *)cpuid_MONITOR_MWAIT_Features_info(5);
      }
      else if (iVar7 == 6) {
        puVar2 = (undefined4 *)cpuid_Thermal_Power_Management_info(6);
      }
      else if (iVar7 == 7) {
        puVar2 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
      }
      else if (iVar7 == 9) {
        puVar2 = (undefined4 *)cpuid_Direct_Cache_Access_info(9);
      }
      else if (iVar7 == 10) {
        puVar2 = (undefined4 *)cpuid_Architectural_Performance_Monitoring_info(10);
      }
      else if (iVar7 == 0xb) {
        puVar2 = (undefined4 *)cpuid_Extended_Topology_info(0xb);
      }
      else if (iVar7 == 0xd) {
        puVar2 = (undefined4 *)cpuid_Processor_Extended_States_info(0xd);
      }
      else if (iVar7 == 0xf) {
        puVar2 = (undefined4 *)cpuid_Quality_of_Service_info(0xf);
      }
      else if (iVar7 == -0x7ffffffe) {
        puVar2 = (undefined4 *)cpuid_brand_part1_info(0x80000002);
      }
      else if (iVar7 == -0x7ffffffd) {
        puVar2 = (undefined4 *)cpuid_brand_part2_info(0x80000003);
      }
      else if (iVar7 == -0x7ffffffc) {
        puVar2 = (undefined4 *)cpuid_brand_part3_info(0x80000004);
      }
      else {
        puVar2 = (undefined4 *)cpuid(iVar7);
      }
      if ('\x01' < (char)*puVar2) {
        piVar10[-1] = 0x80480f6;
        FUN_08048142();
      }
    }
  }
  else {
    uVar6 = rdtsc();
    piVar10[-1] = (int)uVar6;
    pcVar5 = (code *)swi(0x80);
    (*pcVar5)();
    uVar6 = rdtsc();
    uVar8 = (uint)((int)uVar6 - *piVar10) >> 1;
    *piVar10 = 0;
    puVar9 = (undefined2 *)(&stack0x00000011 + param_2);
    *puVar9 = 10;
    do {
      puVar9 = (undefined2 *)((int)puVar9 + -1);
      *piVar10 = *piVar10 + 1;
      uVar4 = (ulonglong)uVar8;
      uVar8 = uVar8 / 10;
      *(byte *)puVar9 = (byte)(uVar4 % 10) | 0x30;
    } while (uVar8 != 0);
    piVar10[-1] = 0x8048140;
    FUN_080481c8();
  }
  do {
    *(undefined4 *)((int)piVar10 + -4) = 1;
    pcVar5 = (code *)swi(0x80);
    (*pcVar5)();
    piVar10 = (int *)((int)piVar10 + 4);
LAB_080480fd:
    *(undefined4 *)((int)piVar10 + -4) = 0x8048105;
    FUN_080481c8();
  } while( true );
}



char __regparm3 FUN_08048142(char param_1)

{
  do {
    FUN_08048157();
    param_1 = param_1 + -1;
  } while (-1 < param_1);
  return param_1;
}



undefined8 __regparm3 FUN_08048157(uint param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  undefined4 *extraout_ECX_03;
  undefined2 *extraout_ECX_04;
  undefined4 extraout_EDX;
  char *pcVar3;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 unaff_retaddr;
  
  FUN_08048203();
  param_1 = param_1 & 0xefffffff;
  if (param_1 == 0) {
    cpuid_basic_info(0);
  }
  else if (param_1 == 1) {
    cpuid_Version_info(1);
  }
  else if (param_1 == 2) {
    cpuid_cache_tlb_info(2);
  }
  else if (param_1 == 3) {
    cpuid_serial_info(3);
  }
  else if (param_1 == 4) {
    cpuid_Deterministic_Cache_Parameters_info(4);
  }
  else if (param_1 == 5) {
    cpuid_MONITOR_MWAIT_Features_info(5);
  }
  else if (param_1 == 6) {
    cpuid_Thermal_Power_Management_info(6);
  }
  else if (param_1 == 7) {
    cpuid_Extended_Feature_Enumeration_info(7);
  }
  else if (param_1 == 9) {
    cpuid_Direct_Cache_Access_info(9);
  }
  else if (param_1 == 10) {
    cpuid_Architectural_Performance_Monitoring_info(10);
  }
  else if (param_1 == 0xb) {
    cpuid_Extended_Topology_info(0xb);
  }
  else if (param_1 == 0xd) {
    cpuid_Processor_Extended_States_info(0xd);
  }
  else if (param_1 == 0xf) {
    cpuid_Quality_of_Service_info(0xf);
  }
  else if (param_1 == 0x80000002) {
    cpuid_brand_part1_info(0x80000002);
  }
  else if (param_1 == 0x80000003) {
    cpuid_brand_part2_info(0x80000003);
  }
  else if (param_1 == 0x80000004) {
    cpuid_brand_part3_info(0x80000004);
  }
  else {
    cpuid(param_1);
  }
  uVar2 = FUN_080481de();
  FUN_080481de();
  FUN_080481de();
  FUN_080481de();
  if ('\0' < *(char *)(unaff_EBP + 0xb)) {
    *(undefined4 *)(unaff_EBP + 1) = 0x2720;
    FUN_080481c8();
    *(undefined4 *)(extraout_ECX_00 + -1) = uVar2;
    FUN_080481c8();
    *extraout_ECX_01 = extraout_ECX;
    FUN_080481c8();
    *extraout_ECX_02 = extraout_EDX;
    uVar2 = FUN_080481c8();
    *extraout_ECX_03 = uVar2;
    FUN_080481c8();
    *extraout_ECX_04 = 0x27;
    FUN_080481c8();
  }
  pcVar3 = (char *)(unaff_ESI + 0x11);
  do {
    pcVar3 = pcVar3 + 1;
  } while ('\b' < *pcVar3);
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return CONCAT44(unaff_ESI + 0x12,unaff_retaddr);
}



undefined8 FUN_080481c8(void)

{
  code *pcVar1;
  int in_ECX;
  char *pcVar2;
  undefined4 unaff_retaddr;
  
  pcVar2 = (char *)(in_ECX + -1);
  do {
    pcVar2 = pcVar2 + 1;
  } while ('\b' < *pcVar2);
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return CONCAT44(in_ECX,unaff_retaddr);
}



undefined8 __regparm3 FUN_080481de(uint param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int unaff_EBP;
  byte in_AF;
  undefined4 unaff_retaddr;
  
  pcVar5 = (char *)(unaff_EBP + 8);
  *pcVar5 = ' ';
  iVar6 = 8;
  do {
    bVar3 = (byte)param_1 & 0xf;
    param_1 = param_1 >> 4;
    pcVar5 = pcVar5 + -1;
    bVar4 = (bVar3 + 0x97) - (bVar3 < 10);
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    bVar4 = bVar4 + in_AF * -6;
    *pcVar5 = bVar4 + (0x9f < bVar4 |
                      (bVar3 < 0x69 || (byte)(bVar3 + 0x97) < (bVar3 < 10)) | in_AF * (bVar4 < 6)) *
                      -0x60;
    iVar7 = iVar6 + -1;
    bVar1 = 0 < iVar6;
    iVar6 = iVar7;
  } while (iVar7 != 0 && bVar1);
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  return CONCAT44(param_3,unaff_retaddr);
}



undefined8 __regparm3 FUN_08048203(uint param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int unaff_EBP;
  byte in_AF;
  undefined4 unaff_retaddr;
  
  pcVar5 = (char *)(unaff_EBP + 8);
  *pcVar5 = ' ';
  iVar6 = 2;
  do {
    bVar3 = (byte)param_1 & 0xf;
    param_1 = param_1 >> 4;
    pcVar5 = pcVar5 + -1;
    bVar4 = (bVar3 + 0x97) - (bVar3 < 10);
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    bVar4 = bVar4 + in_AF * -6;
    *pcVar5 = bVar4 + (0x9f < bVar4 |
                      (bVar3 < 0x69 || (byte)(bVar3 + 0x97) < (bVar3 < 10)) | in_AF * (bVar4 < 6)) *
                      -0x60;
    iVar7 = iVar6 + -1;
    bVar1 = 0 < iVar6;
    iVar6 = iVar7;
  } while (iVar7 != 0 && bVar1);
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  return CONCAT44(param_3,unaff_retaddr);
}


