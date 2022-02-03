typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    wchar16;
typedef struct thread_state_hdr thread_state_hdr, *Pthread_state_hdr;

struct thread_state_hdr {
    dword flavor;
    dword count;
};

typedef struct uuid_command uuid_command, *Puuid_command;

struct uuid_command {
    dword cmd;
    dword cmdsize;
    byte uuid[16];
};

typedef struct segment_command segment_command, *Psegment_command;

struct segment_command {
    dword cmd;
    dword cmdsize;
    char segname[16];
    qword vmaddr;
    qword vmsize;
    qword fileoff;
    qword filesize;
    dword maxprot;
    dword initprot;
    dword nsects;
    dword flags;
};

typedef struct thread_command thread_command, *Pthread_command;

typedef struct x86_THREAD_STATE64 x86_THREAD_STATE64, *Px86_THREAD_STATE64;

struct x86_THREAD_STATE64 {
    qword rax;
    qword rbx;
    qword cx;
    qword rdx;
    qword rdi;
    qword rsi;
    qword rbp;
    qword rsp;
    qword r8;
    qword r9;
    qword r10;
    qword r11;
    qword r12;
    qword r13;
    qword r14;
    qword r15;
    qword rip;
    qword rflags;
    qword cs;
    qword fs;
    qword gs;
};

struct thread_command {
    dword cmd;
    dword cmdsize;
    struct thread_state_hdr threadStateHeader;
    struct x86_THREAD_STATE64 threadState;
};

typedef struct mach_header mach_header, *Pmach_header;

struct mach_header {
    dword magic;
    dword cputype;
    dword cpusubtype;
    dword filetype;
    dword ncmds;
    dword sizeofcmds;
    dword flags;
    dword reserved;
};

typedef struct section section, *Psection;

struct section {
    char sectname[16];
    char segname[16];
    qword addr;
    qword size;
    dword offset;
    dword align;
    dword reloff;
    dword nrelocs;
    dword flags;
    dword reserved1;
    dword reserved2;
    dword reserved3;
};




undefined8 FUN_00401114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (((byte)DAT_0041c718 & 4) == 0) {
    param_3 = 0;
    syscall();
    syscall();
    param_2 = 6;
    syscall();
  }
  FUN_00416001(0x86,param_2,param_3);
  return 0;
}



void FUN_0040116d(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  
  uVar2 = (ulong)((int)register0x00000020 - 0x10);
  *(ulong *)(uVar2 - 8) = (ulong)&stack0xfffffffffffffff8 & 0xffffffff;
  lVar3 = *(long *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 8) = 8;
  puVar4 = (undefined *)(ulong)((int)lVar3 - 8);
  for (lVar1 = *(long *)(uVar2 - 8); lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  InterruptDescriptorTableRegister(*(undefined4 *)(lVar3 + -8));
  do {
    invalidInstructionException();
  } while( true );
}



void entry(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  uint in_stack_00000000;
  
  DAT_0041c718._0_1_ = 8;
  puVar3 = &DAT_0041b040;
  for (lVar2 = 0x5f; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0x40116a;
    puVar3 = puVar3 + 1;
  }
  lVar2 = 0xffffffff;
  plVar4 = (long *)(&stack0x00000018 + (ulong)in_stack_00000000 * 8);
  do {
    plVar5 = plVar4;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    plVar5 = plVar4 + 1;
    lVar1 = *plVar4;
    plVar4 = plVar5;
  } while (lVar1 != 0);
  FUN_004021c7(in_stack_00000000,&stack0x00000008,&stack0x00000018 + (ulong)in_stack_00000000 * 8,
               plVar5);
  do {
    invalidInstructionException();
  } while( true );
}



void FUN_004011f2(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  code *pcVar9;
  byte bVar10;
  byte bVar12;
  ulong uVar11;
  uint uVar13;
  undefined8 uVar14;
  undefined8 extraout_RDX;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  byte *pbVar18;
  long *plVar19;
  long lVar20;
  undefined *puVar21;
  code **ppcVar22;
  code **ppcVar23;
  long **pplVar24;
  long **pplVar25;
  char *pcVar26;
  char *pcVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  int iVar30;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 *puVar31;
  undefined8 unaff_R14;
  long *unaff_R15;
  byte bVar32;
  uint in_XCR0;
  uint in_register_00000604;
  long alStack112 [10];
  undefined8 uStack32;
  undefined8 uStack24;
  
  bVar32 = 0;
  plVar17 = &DAT_004199e0;
  uVar8 = rdtsc();
  DAT_0041c000._4_4_ = (undefined4)((ulong)uVar8 >> 0x20);
  DAT_0041c000._0_4_ = (undefined4)uVar8;
  puVar31 = (undefined8 *)&DAT_0041c008;
  DAT_00447fe8 = 1;
  DAT_00447fd0._0_4_ = 0x447fc8;
  uStack24 = 0;
  uStack32 = 0x16;
  alStack112[9] = 0xffffffff80000007;
  alStack112[8] = 0xffffffff80000001;
  alStack112[7] = 7;
  alStack112[6] = 2;
  plVar15 = alStack112 + 5;
  alStack112[5] = 1;
  uVar8 = 0;
  DAT_00447fec = DAT_00447fe8;
  do {
    iVar30 = (int)uVar8;
    if (iVar30 == 0) {
      puVar1 = (undefined4 *)cpuid_basic_info(0);
    }
    else if (iVar30 == 1) {
      puVar1 = (undefined4 *)cpuid_Version_info(1);
    }
    else if (iVar30 == 2) {
      puVar1 = (undefined4 *)cpuid_cache_tlb_info(2);
    }
    else if (iVar30 == 3) {
      puVar1 = (undefined4 *)cpuid_serial_info(3);
    }
    else if (iVar30 == 4) {
      puVar1 = (undefined4 *)cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (iVar30 == 5) {
      puVar1 = (undefined4 *)cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (iVar30 == 6) {
      puVar1 = (undefined4 *)cpuid_Thermal_Power_Management_info(6);
    }
    else if (iVar30 == 7) {
      puVar1 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (iVar30 == 9) {
      puVar1 = (undefined4 *)cpuid_Direct_Cache_Access_info(9);
    }
    else if (iVar30 == 10) {
      puVar1 = (undefined4 *)cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (iVar30 == 0xb) {
      puVar1 = (undefined4 *)cpuid_Extended_Topology_info(0xb);
    }
    else if (iVar30 == 0xd) {
      puVar1 = (undefined4 *)cpuid_Processor_Extended_States_info(0xd);
    }
    else if (iVar30 == 0xf) {
      puVar1 = (undefined4 *)cpuid_Quality_of_Service_info(0xf);
    }
    else if (iVar30 == -0x7ffffffe) {
      puVar1 = (undefined4 *)cpuid_brand_part1_info(0x80000002);
    }
    else if (iVar30 == -0x7ffffffd) {
      puVar1 = (undefined4 *)cpuid_brand_part2_info(0x80000003);
    }
    else if (iVar30 == -0x7ffffffc) {
      puVar1 = (undefined4 *)cpuid_brand_part3_info(0x80000004);
    }
    else {
      puVar1 = (undefined4 *)cpuid(iVar30);
    }
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar13 = puVar1[3];
    *(undefined4 *)puVar31 = *puVar1;
    *(undefined4 *)((long)puVar31 + 4) = uVar3;
    *(uint *)(puVar31 + 1) = uVar13;
    *(undefined4 *)((long)puVar31 + 0xc) = uVar4;
    plVar16 = plVar15;
    puVar28 = puVar31;
    do {
      puVar31 = puVar28 + 2;
      uVar8 = *plVar16;
      plVar15 = plVar16 + 1;
      if ((int)uVar8 == 0) {
        if (((DAT_0041c020 & 0x10000000) != 0) &&
           (((DAT_0041c020 & 0x8000000) == 0 || (uVar13 = in_register_00000604, (in_XCR0 & 6) != 6))
           )) {
          DAT_0041c020 = DAT_0041c020 & 0xefffffff;
          DAT_0041c03c = DAT_0041c03c & 0xffffffdf;
        }
        uVar8 = plVar16[1];
        *puVar31 = &LAB_0040b8f0;
        puVar28[3] = FUN_0040dcd0;
        if (DAT_0041c008 < 4) goto LAB_004012e5;
        iVar30 = 4;
        goto LAB_0040129c;
      }
      plVar16 = plVar16 + 1;
      puVar28 = puVar31;
    } while ((byte)DAT_0041c008 < (byte)uVar8);
  } while( true );
LAB_0040129c:
  plVar16[1] = uVar8;
  if (iVar30 == 0) {
    puVar2 = (uint *)cpuid_basic_info(0);
  }
  else if (iVar30 == 1) {
    puVar2 = (uint *)cpuid_Version_info(1);
  }
  else if (iVar30 == 2) {
    puVar2 = (uint *)cpuid_cache_tlb_info(2);
  }
  else if (iVar30 == 3) {
    puVar2 = (uint *)cpuid_serial_info(3);
  }
  else if (iVar30 == 4) {
    puVar2 = (uint *)cpuid_Deterministic_Cache_Parameters_info(4);
  }
  else if (iVar30 == 5) {
    puVar2 = (uint *)cpuid_MONITOR_MWAIT_Features_info(5);
  }
  else if (iVar30 == 6) {
    puVar2 = (uint *)cpuid_Thermal_Power_Management_info(6);
  }
  else if (iVar30 == 7) {
    puVar2 = (uint *)cpuid_Extended_Feature_Enumeration_info(7);
  }
  else if (iVar30 == 9) {
    puVar2 = (uint *)cpuid_Direct_Cache_Access_info(9);
  }
  else if (iVar30 == 10) {
    puVar2 = (uint *)cpuid_Architectural_Performance_Monitoring_info(10);
  }
  else if (iVar30 == 0xb) {
    puVar2 = (uint *)cpuid_Extended_Topology_info(0xb);
  }
  else if (iVar30 == 0xd) {
    puVar2 = (uint *)cpuid_Processor_Extended_States_info(0xd);
  }
  else if (iVar30 == 0xf) {
    puVar2 = (uint *)cpuid_Quality_of_Service_info(0xf);
  }
  else if (iVar30 == -0x7ffffffe) {
    puVar2 = (uint *)cpuid_brand_part1_info(0x80000002);
  }
  else if (iVar30 == -0x7ffffffd) {
    puVar2 = (uint *)cpuid_brand_part2_info(0x80000003);
  }
  else if (iVar30 == -0x7ffffffc) {
    puVar2 = (uint *)cpuid_brand_part3_info(0x80000004);
  }
  else {
    puVar2 = (uint *)cpuid(iVar30);
  }
  uVar7 = puVar2[1];
  uVar13 = puVar2[2];
  uVar8 = plVar16[1];
  if ((*puVar2 & 0x1f) == 0) goto LAB_004012e5;
  if ((char)*puVar2 == 'c') goto code_r0x004012b1;
  iVar30 = iVar30 + 1;
  goto LAB_0040129c;
LAB_004012e5:
  uVar7 = 0x400000;
  goto LAB_004012ea;
code_r0x004012b1:
  uVar13 = (uVar7 & 0xfff) + 1;
  uVar7 = ((uVar7 >> 0x16) + 1) * uVar13 * (puVar2[3] + 1) * ((uVar7 >> 0xc & 0x3ff) + 1);
LAB_004012ea:
  puVar28[4] = (ulong)(uVar7 >> 1);
  puVar28[5] = FUN_0040c5f0;
  pcVar9 = (code *)&LAB_00410e00;
  if ((DAT_0041c060._5_1_ & 1) != 0) {
    pcVar9 = FUN_00410e10;
  }
  ppcVar22 = (code **)(puVar28 + 7);
  puVar28[6] = pcVar9;
  plVar16[1] = unaff_R12;
  *plVar16 = unaff_R13;
  plVar16[-5] = 0x401326;
  (*DAT_0041b180)(ppcVar22,&DAT_004199e0,uVar13);
  while (plVar19 = plVar17 + (ulong)bVar32 * -2 + 1, *plVar17 != 0) {
    plVar16[-5] = 0x40133d;
    pcVar9 = (code *)(*DAT_0041b188)();
    if (pcVar9 == (code *)0x0) {
      pcVar9 = (code *)&LAB_00405e9f;
    }
    *ppcVar22 = pcVar9;
    plVar17 = plVar19;
    ppcVar22 = ppcVar22 + (ulong)bVar32 * -2 + 1;
  }
  puVar31 = (undefined8 *)*plVar16;
  *ppcVar22 = FUN_0040e4e0;
  ppcVar23 = ppcVar22 + (ulong)bVar32 * -2 + 1 + (ulong)bVar32 * -2 + 1;
  ppcVar22[(ulong)bVar32 * -2 + 1] = (code *)&LAB_0040e5c0;
  uVar11 = 0xf00;
  do {
    pbVar18 = (byte *)((long)plVar19 + (ulong)bVar32 * -2 + 1);
    uVar11 = uVar11 | *(byte *)plVar19;
    plVar19 = (long *)(pbVar18 + (ulong)bVar32 * -2 + 1);
    bVar12 = *pbVar18;
    ppcVar22 = ppcVar23;
    do {
      ppcVar23 = ppcVar22 + (ulong)bVar32 * -2 + 1;
      *ppcVar22 = (code *)(&LAB_00415424 + bVar12);
      bVar10 = (char)uVar11 - 1;
      uVar5 = uVar11 & 0xffffffffffffff00;
      uVar11 = uVar5 | bVar10;
      ppcVar22 = ppcVar23;
    } while (bVar10 != 0);
    bVar12 = (char)(uVar5 >> 8) - 1;
    uVar11 = (ulong)bVar12 << 8;
  } while (bVar12 != 0);
  lVar20 = (long)plVar19 + 2;
  DAT_00448018 = unaff_R14;
  *ppcVar23 = (code *)puVar31;
  ppcVar23[(ulong)bVar32 * -2 + 1] = (code *)unaff_R15;
  cVar6 = '\0';
  plVar16[1] = 10;
  uVar11 = plVar16[1];
  pplVar24 = (long **)(ppcVar23 + (ulong)bVar32 * -2 + 1 + (ulong)bVar32 * -2 + 7);
  do {
    cVar6 = cVar6 + '\x01';
    pplVar25 = (long **)((long)pplVar24 + (ulong)bVar32 * -2 + 1);
    *(char *)pplVar24 = cVar6;
    uVar13 = (int)uVar11 - 1;
    uVar11 = (ulong)uVar13;
    pplVar24 = pplVar25;
  } while (uVar13 != 0);
  plVar16[1] = 0x1a;
  uVar11 = plVar16[1];
  pcVar26 = (char *)((long)pplVar25 + 7);
  do {
    cVar6 = cVar6 + '\x01';
    pcVar26[0x20] = cVar6;
    pcVar27 = pcVar26 + (ulong)bVar32 * -2 + 1;
    *pcVar26 = cVar6;
    uVar13 = (int)uVar11 - 1;
    uVar11 = (ulong)uVar13;
    pcVar26 = pcVar27;
  } while (uVar13 != 0);
  puVar28 = (undefined8 *)(pcVar27 + 0xa5);
  plVar16[1] = 0x40;
  uVar14 = plVar16[1];
  plVar16[1] = 0x4013c6;
  FUN_004025f2(puVar28,lVar20,uVar14);
  plVar16[1] = 0x40;
  plVar16[1] = 0x4013d5;
  FUN_004025f2();
  plVar16[1] = 0x20;
  plVar16[1] = 0x4013e9;
  FUN_0040283c();
  plVar16[1] = 0x20;
  plVar16[1] = 0x4013fd;
  FUN_0040283c();
  plVar16[1] = 1;
  plVar16[-3] = 0x40140f;
  (*DAT_0041b1e0)();
  puVar29 = puVar28 + (ulong)bVar32 * -2 + 1;
  *puVar28 = *puVar31;
  plVar16[1] = uVar8;
  *plVar16 = lVar20;
  if ((*(byte *)puVar29 & 2) == 0) {
    if ((*(byte *)puVar29 & 8) == 0) {
      if ((*(byte *)puVar29 & 0x20) == 0) {
        if ((*(byte *)puVar29 & 4) == 0) {
          if (*unaff_R15 == 0) {
            plVar16[-1] = 0x2f;
            plVar16[-2] = 0x10;
            puVar21 = &DAT_0041a212;
          }
          else {
            plVar16[-1] = 0;
            plVar16[-2] = 1;
            puVar21 = &DAT_0041a194;
          }
        }
        else {
          plVar16[-1] = 0x27;
          plVar16[-2] = 4;
          puVar21 = &DAT_0041a28d;
        }
      }
      else {
        plVar16[-1] = 0x35;
        plVar16[-2] = 0x20;
        puVar21 = &DAT_0041a119;
      }
    }
    else {
      plVar16[-1] = 0x4f;
      plVar16[-2] = 8;
      puVar21 = &DAT_0041a337;
    }
  }
  else {
    plVar16[-1] = 0;
    plVar16[-2] = 2;
    puVar21 = &DAT_0041a194;
  }
  *puVar29 = plVar16[-2];
  puVar29[(ulong)bVar32 * -2 + 1] = &DAT_004147e0 + plVar16[-1];
  plVar16[-1] = (long)(puVar29 + (ulong)bVar32 * -2 + 1 + (ulong)bVar32 * -2 + 1);
  plVar16[-2] = 0x401493;
  FUN_0040276d(&DAT_00440770,puVar21);
  plVar16[1] = plVar16[-1];
  *plVar16 = *plVar16;
  plVar16[-1] = 0x40149d;
  FUN_00410650();
  uVar8 = *plVar16;
  plVar16[-3] = 0x4014b1;
  (*DAT_0041b198)(plVar16[1],uVar8,extraout_RDX,&DAT_00447f60);
  plVar16[-3] = 0x4014c7;
  (*DAT_0041b1b0)();
  plVar16[1] = 1;
  uVar11 = plVar16[1];
  plVar16[1] = 2;
  DAT_0044200c = plVar16[1];
  DAT_00442000 = uVar11 & 0xffffffff | (ulong)DAT_00440958 << 0x20;
  DAT_00442018 = &DAT_00441000;
  DAT_00442020 = 0x1000;
  DAT_00442030 = FUN_0040ade0;
  DAT_00442038 = &DAT_00442000;
  DAT_00444004 = DAT_00440938;
  DAT_00444018 = &DAT_00443000;
  DAT_00444020 = 0x1000;
  DAT_00444028 = &LAB_0040b050;
  DAT_00444038 = &DAT_00444000;
  plVar16[1] = 1;
  DAT_0044600c = plVar16[1];
  DAT_00446004 = DAT_00440958;
  DAT_00446018 = &DAT_00445000;
  DAT_00446020 = 0x1000;
  DAT_00446030 = FUN_0040ade0;
  DAT_00446038 = &DAT_00446000;
  plVar16[1] = uVar8;
  *plVar16 = 0x401577;
  uVar8 = FUN_004027c0();
  lVar20 = plVar16[1];
  plVar16[1] = lVar20 + 0x4b8;
  *plVar16 = 0x40158d;
  uVar8 = FUN_004027c0(uVar8,lVar20 + 0x4b8,500);
  lVar20 = plVar16[1];
  plVar16[1] = uVar8;
  *plVar16 = lVar20 + 0x1f8;
  plVar16[-1] = 0x40159f;
  FUN_00402140();
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong FUN_004015b0(ulong param_1,ulong param_2)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong extraout_RDX;
  undefined8 *puVar11;
  undefined (*pauVar12) [16];
  uint unaff_R15D;
  byte bVar13;
  float10 in_ST0;
  float10 fVar14;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  undefined8 local_d0;
  undefined local_c8 [8];
  undefined2 uStack192;
  char *local_b8 [6];
  undefined8 local_88;
  undefined8 local_80;
  undefined auStack120 [8];
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  wchar16 *local_48;
  
  bVar13 = 0;
  pauVar12 = (undefined (*) [16])&DAT_00000008;
  param_1 = param_1 & 0xffffffff;
  _DAT_00446360 = 0x6566696c657061;
  DAT_0044649c = 1;
  DAT_00446438 = 1;
  DAT_00446468 = 0x50;
  DAT_00446460 = 0x50;
  DAT_00446478 = 0x18;
  DAT_00446458 = 0x18;
  DAT_00446450 = 0x1000;
  DAT_00446448 = 0x1000;
LAB_00401640:
  do {
    iVar3 = FUN_00407fc0(param_1,param_2,&DAT_00417060);
    if (iVar3 == -1) {
      if (DAT_00446408 != 0) {
        FUN_0040f560(DAT_00446400 + -0x1000,DAT_004463f8);
        FUN_0040f560(DAT_00446408 + -0x1000,DAT_004463f8);
      }
      DAT_00446408 = FUN_004067c0(&DAT_004463f8);
      DAT_00446400 = FUN_004067c0(0);
      if ((DAT_00447fe8 < (int)param_1) &&
         (iVar3 = FUN_00406a10(*(undefined8 *)(param_2 + (long)DAT_00447fe8 * 8)), iVar3 == -1)) {
        puVar11 = (undefined8 *)(param_2 + (long)DAT_00447fe8 * 8);
        param_2 = 1;
        FUN_0040ad00(DAT_00442038,"%s:%d:%d: %s\n",*puVar11,DAT_00446498 + 1,DAT_00446494,
                     "error: failed to load game of life run length encoded (rle) file");
      }
      else {
        param_2 = (ulong)(DAT_0041c718 & 4);
        if ((DAT_0041c718 & 4) == 0) {
          FUN_00407100();
          pauVar12 = (undefined (*) [16])&local_88;
          FUN_004064d0();
          FUN_00410a20(DAT_0044649c,&DAT_004463a0);
          FUN_0041571a(&DAT_00417078,&DAT_00417078);
          FUN_00411a10(DAT_0044649c);
          lVar7 = FUN_004154c0(pauVar12,&DAT_004463a0,0x38);
          auStack120[lVar7] = 1;
          auStack120[DAT_00440a00] = 1;
          local_80 = (undefined *)
                     CONCAT44(local_80._4_4_ &
                              ~((uint)DAT_004409a0 | (uint)DAT_004409b0 | (uint)DAT_004409a8 | 8),
                              ~((uint)DAT_004409d0 | _DAT_00440998) & (uint)local_80 | _DAT_00440990
                             );
          local_88 = (undefined *)
                     ((ulong)local_88 & 0xffffffff00000000 |
                     (ulong)(~(DAT_004409c8 | 0x1f8) & (uint)local_88 | _DAT_004409c0));
          FUN_00410a90(DAT_0044649c,DAT_004409e0,pauVar12);
          DAT_004464a2 = '\x01';
          FUN_0041571a(&DAT_0041707f,&DAT_0041707f);
          FUN_00411a10(DAT_0044649c);
          FUN_0040ed60(&LAB_00407080);
          puVar11 = &local_80;
          for (lVar7 = 10; lVar7 != 0; lVar7 = lVar7 + -1) {
            *(undefined4 *)puVar11 = 0;
            puVar11 = (undefined8 *)((long)puVar11 + (ulong)bVar13 * -8 + 4);
          }
          local_88 = &LAB_00406730;
          FUN_004114c0(2,pauVar12,0);
          puVar11 = &local_80;
          for (lVar7 = 10; lVar7 != 0; lVar7 = lVar7 + -1) {
            *(undefined4 *)puVar11 = 0;
            puVar11 = (undefined8 *)((long)puVar11 + (ulong)bVar13 * -8 + 4);
          }
          local_88 = &LAB_00406740;
          FUN_004114c0(0x1c,pauVar12,0);
          uVar4 = DAT_00446490;
          param_1 = FUN_0041571a(&DAT_0041707f);
          local_d0 = FUN_0041571a(&DAT_00417029);
          goto LAB_00401954;
        }
        FUN_0041561f(&local_88,0,0x48);
        local_80 = &LAB_00407faa;
        local_70 = FUN_00405f9e(0);
        local_60 = FUN_00402c92(0,0x7f03);
        local_48 = L"apelife";
        local_58 = 0xb;
        sVar2 = FUN_00402cd5(&local_88);
        if ((sVar2 == 0) ||
           (lVar7 = FUN_00402bff(0,L"apelife",L"Conway\'s Game of Life",0xcf0000,0x80000000,
                                 0x80000000,0xffffffff80000000,0xffffffff80000000,0,0,local_70,0),
           lVar7 == 0)) {
          FUN_004028c1(0,0,&DAT_0041873d);
          if (DAT_00448024 == '\0') {
            DAT_00448024 = '\x01';
            iVar3 = FUN_00410b10(0);
            if (iVar3 != 0) {
              pcVar1 = (code *)swi(3);
              uVar9 = (*pcVar1)();
              return uVar9;
            }
            FUN_0040a090(2,0);
            FUN_0040286f(DAT_004408b0);
          }
                    // WARNING: Subroutine does not return
          FUN_00401114();
        }
        uVar6 = FUN_00402c72(lVar7,0);
        FUN_00402bdf(uVar6,0x800,0,0);
        FUN_00402bdf(uVar6,0,0x20,L"&Open File...");
        FUN_00402bdf(uVar6,0,0x10,L"&About...");
        FUN_00402d3e(lVar7,1);
        while( true ) {
          uVar4 = FUN_00402c62(local_b8,0,0,0);
          param_2 = (ulong)uVar4;
          if (uVar4 == 0) break;
          FUN_00402d4e(local_b8);
          FUN_00402c1f(local_b8);
        }
      }
LAB_00401af5:
      return param_2 & 0xffffffff;
    }
    if (iVar3 != 0x68) {
      if (iVar3 < 0x69) {
        if (iVar3 == 0x4e) {
          DAT_004464a3 = '\x01';
          goto LAB_00401640;
        }
        if (iVar3 == 0x57) {
          DAT_004464a4 = 1;
          goto LAB_00401640;
        }
        if (iVar3 == 0x3f) {
          iVar3 = FUN_00406750();
          goto LAB_004016f8;
        }
      }
      else {
        if (iVar3 == 0x77) {
          lVar7 = FUN_004145a0(DAT_00447fd8,0,0);
          if (lVar7 < 8) {
            lVar7 = 8;
          }
          DAT_00446448 = lVar7 + 7U & 0xfffffffffffffff8;
          goto LAB_00401640;
        }
LAB_004016f8:
        if (iVar3 == 0x7a) {
          DAT_00446440 = DAT_00446440 + 1;
          goto LAB_00401640;
        }
      }
      FUN_00406750(0x40);
      uVar9 = extraout_RDX;
LAB_00401f1b:
      if (unaff_R15D == 0x50) {
        if (DAT_004464a3 != '\0') {
LAB_00401f64:
          FUN_00407170((long)(int)uVar9,(long)local_c8._0_4_,1);
          goto switchD_00401b36_caseD_4e;
        }
      }
      else {
        if ((int)unaff_R15D < 0x51) {
          if (unaff_R15D == 0x40) {
            if (DAT_004464a3 != '\0') {
LAB_00401bf5:
              FUN_00406570(1);
              FUN_00406570(1);
              goto switchD_00401b36_caseD_6a;
            }
          }
          else {
            if (unaff_R15D != 0x41) goto switchD_00401b36_caseD_4e;
            if (DAT_004464a3 == '\0') goto LAB_00401bf5;
          }
          FUN_00406570(0xffffffffffffffff);
          FUN_00406570(0xffffffffffffffff);
          goto switchD_00401b36_caseD_6b;
        }
        if (unaff_R15D != 0x51) goto switchD_00401b36_caseD_4e;
        if (DAT_004464a3 == '\0') goto LAB_00401f64;
      }
      FUN_00407170((long)(int)uVar9,(long)local_c8._0_4_,0xffffffff);
switchD_00401b36_caseD_4e:
      do {
        uVar4 = DAT_00446490;
        if ((DAT_00446490 & 1) != 0) goto LAB_00401af5;
LAB_00401954:
        if ((uVar4 & 2) == 0) {
          fVar14 = in_ST0;
          if (DAT_004464a1 == '\0') {
LAB_004019cd:
            FUN_004078f0();
          }
          else {
            fVar14 = in_ST1;
            in_ST1 = in_ST2;
            in_ST2 = in_ST3;
            in_ST3 = in_ST4;
            in_ST4 = in_ST5;
            in_ST5 = in_ST6;
            (*_DAT_0041c098)();
            in_ST6 = in_ST5;
            _local_c8 = in_ST0;
            if (_DAT_00446040 < in_ST0) {
              local_88 = (undefined *)((ulong)DAT_00440968 << 0x20);
              FUN_00408230(pauVar12,1,0);
              if ((local_88._6_2_ & (DAT_00440968 | _DAT_00440960)) == 0) {
                _DAT_00446040 = in_ST0 + (float10)0.04166666666666666;
                goto LAB_004019cd;
              }
            }
          }
        }
        else {
          FUN_00407100();
          DAT_00446490 = DAT_00446490 & 0xfffffffd;
          FUN_004078f0();
          fVar14 = in_ST0;
        }
        in_ST0 = fVar14;
        *pauVar12 = (undefined  [16])0x0;
        pauVar12[1] = (undefined  [16])0x0;
        lVar5 = FUN_00410f90(0,0,pauVar12,0x20);
        lVar7 = DAT_00446438;
        if (lVar5 == -1) goto LAB_00401b40;
        if ((char)local_88 < '!') {
          if ('\b' < (char)local_88) {
            switch((char)local_88) {
            case '\t':
            case ' ':
switchD_00401b36_caseD_73:
              lVar5 = 0;
              if (0 < DAT_00446438) {
                do {
                  FUN_004060a0();
                  lVar5 = lVar5 + 1;
                } while (lVar5 != lVar7);
              }
            default:
              break;
            case '\x0e':
switchD_00401b36_caseD_6a:
              FUN_00406570();
              break;
            case '\x10':
switchD_00401b36_caseD_6b:
              FUN_00406570();
              break;
            case '\x14':
              DAT_00446438 = DAT_00446438 + 1;
              break;
            case '\x16':
switchD_00401b1e_caseD_16:
              FUN_00406570();
              break;
            case '\x1b':
              goto switchD_00401b1e_caseD_1b;
            }
          }
          goto switchD_00401b36_caseD_4e;
        }
        switch((char)local_88) {
        case 'M':
          if (DAT_004464a2 == '\0') {
            DAT_004464a2 = '\x01';
            FUN_00411a10(DAT_0044649c,&DAT_0041707f,param_1);
          }
          else {
            DAT_004464a2 = '\0';
            FUN_00411a10(DAT_0044649c,&DAT_00417029,local_d0);
          }
          break;
        case 'R':
          goto switchD_00401b36_caseD_52;
        case 'j':
          goto switchD_00401b36_caseD_6a;
        case 'k':
          goto switchD_00401b36_caseD_6b;
        case 'q':
          lVar7 = 0;
          goto LAB_00401cdb;
        case 's':
          goto switchD_00401b36_caseD_73;
        }
      } while( true );
    }
    lVar7 = FUN_004145a0(DAT_00447fd8,0,0);
    if (lVar7 < 8) {
      lVar7 = 8;
    }
    DAT_00446450 = lVar7 + 7U & 0xfffffffffffffff8;
  } while( true );
LAB_00401b40:
  lVar7 = (long)DAT_00448020;
  if (lVar7 != _DAT_00440818) {
LAB_00401cdb:
    FUN_0040286f(lVar7);
switchD_00401b36_caseD_52:
    FUN_0041561f(DAT_00446408,0,(long)(DAT_00446450 * DAT_00446448) >> 3);
  }
  goto switchD_00401b36_caseD_4e;
switchD_00401b1e_caseD_1b:
  if (local_88._1_1_ == 't') {
    DAT_00446438 = DAT_00446438 + -1;
    if (DAT_00446438 < 1) {
      DAT_00446438 = 1;
    }
    goto switchD_00401b36_caseD_4e;
  }
  if (local_88._1_1_ != 'v') {
    if (local_88._1_1_ != '[') goto switchD_00401b36_caseD_4e;
    switch(local_88._2_1_) {
    case 0x35:
      if (local_88._3_1_ != '~') goto switchD_00401b36_caseD_4e;
      break;
    case 0x36:
      if (local_88._3_1_ == '~') goto switchD_00401b1e_caseD_16;
    default:
      goto switchD_00401b36_caseD_4e;
    case 0x3c:
      local_b8[0] = (char *)((long)&local_88 + 3);
      uVar4 = FUN_004145a0(local_b8[0],local_b8,10);
      lVar7 = DAT_00446458;
      if (*local_b8[0] == ';') {
        local_b8[0] = local_b8[0] + 1;
      }
      _local_c8 = (float10)CONCAT28(uStack192,DAT_00446458);
      lVar8 = FUN_004145a0(local_b8[0],local_b8,10);
      lVar5 = DAT_00446460;
      if (lVar8 < 1) {
        lVar8 = 1;
      }
      if (lVar7 < lVar8) {
        lVar8 = lVar7;
      }
      iVar3 = (int)lVar8 + -1;
      _local_c8 = (float10)CONCAT64(stack0xffffffffffffff3c,iVar3);
      if (*local_b8[0] == ';') {
        local_b8[0] = local_b8[0] + 1;
      }
      lVar7 = FUN_004145a0(local_b8[0],local_b8,10);
      if (lVar7 < 1) {
        lVar7 = 1;
      }
      if (lVar5 < lVar7) {
        lVar7 = lVar5;
      }
      uVar10 = (int)lVar7 - 1;
      uVar9 = (ulong)uVar10;
      unaff_R15D = (uint)(*local_b8[0] == 'm') << 2 | uVar4;
      if ((int)unaff_R15D < 0x23) {
        switch(unaff_R15D) {
        case 0:
          FUN_004065d0();
          break;
        case 2:
          DAT_00446428 = (long)iVar3;
          DAT_00446430 = (long)(int)uVar10;
          DAT_004464a1 = '\x01';
          _DAT_00446420 = DAT_00446480;
          _DAT_00446418 = DAT_00446470;
          break;
        case 4:
        case 6:
          DAT_004464a1 = '\0';
          break;
        case 0x20:
          FUN_00406e60();
          break;
        case 0x22:
          FUN_004066a0();
        }
        goto switchD_00401b36_caseD_4e;
      }
      goto LAB_00401f1b;
    case 0x41:
      goto switchD_00401b36_caseD_6b;
    case 0x42:
      goto switchD_00401b36_caseD_6a;
    case 0x43:
      FUN_00406570();
      goto switchD_00401b36_caseD_4e;
    case 0x44:
      FUN_00406570();
      goto switchD_00401b36_caseD_4e;
    }
  }
  FUN_00406570();
  goto switchD_00401b36_caseD_4e;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00401f80(void)

{
  _DAT_00447ff0 = 0x102030a0a030201;
  DAT_00447ff8 = 0xfffd03111103fdff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong FUN_00401fa0(long param_1)

{
  ulong uVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  
  if (DAT_00446670 == (undefined *)0x0) {
    DAT_00446670 = &DAT_00446678;
    _DAT_00446668 = 8;
    FUN_0040ede0(FUN_0040a950,0,0);
  }
  uVar1 = DAT_00446660;
  if (DAT_00446660 != 0) {
    plVar3 = (long *)(DAT_00446670 + DAT_00446660 * 8 + -8);
    uVar4 = DAT_00446660;
    do {
      if (*plVar3 == 0) {
        *plVar3 = param_1;
        return 0;
      }
      plVar3 = plVar3 + -1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uVar4 = DAT_00446660 + 1;
  if ((_DAT_00446668 <= uVar4) &&
     (cVar2 = FUN_0040f180(&DAT_00446670,&DAT_00446668,8,1), cVar2 == '\0')) {
    return 0xffffffff;
  }
  *(long *)(DAT_00446670 + uVar1 * 8) = param_1;
  DAT_00446660 = uVar4;
  return uVar1 & 0xffffffff;
}



void FUN_004020a0(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = DAT_00446038;
  if (((byte)DAT_0041c718 & 4) == 0) {
    iVar2 = FUN_004023b0(*(undefined4 *)(DAT_00446038 + 0xc));
    if (iVar2 == 0) goto LAB_004020cd;
  }
  *puVar1 = 1;
LAB_004020cd:
  FUN_00401fa0(puVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00402140(void)

{
  uint uVar1;
  ulong uVar2;
  
  if (DAT_004466c0 == 0) {
    uVar1 = 0x10000;
    if (0xffff < DAT_00447d08) {
      uVar1 = DAT_00447d08;
    }
    uVar2 = (ulong)uVar1;
    if ((uVar2 - 1 & uVar2) != 0) {
                    // WARNING: Subroutine does not return
      FUN_00401114();
    }
    DAT_004466c8 = 0x1000;
    _DAT_004466d8 = 0x40000;
    DAT_004466e0 = 0xa00000;
    DAT_004466c0 = DAT_0041c000 & 0xfffffffffffffff8 | 8;
    _DAT_004466e8 = 5;
    _DAT_00446a70 = 5;
    DAT_004466d0 = uVar2;
  }
  return;
}



void FUN_004021c7(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  FUN_0040ed3d();
  uVar1 = FUN_004015b0(param_1,param_2,param_3,param_4);
  FUN_0040286f(uVar1);
  do {
    invalidInstructionException();
  } while( true );
}



void FUN_00402200(ulong param_1,long param_2)

{
  int iVar1;
  
  if (((0 < (long)(param_2 - param_1)) && (param_1 != 0)) &&
     (((param_1 | param_2 - param_1) & 0xfff) == 0)) {
    iVar1 = FUN_00416180();
    if (iVar1 != -1) {
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_00401114();
  }
  return;
}



void FUN_00402240(undefined4 param_1)

{
  FUN_00402200(&DAT_00416000,&DAT_00416000,0);
  FUN_00402200("SYNOPSIS\n\n  ",&PTR_mach_header_0041b000,1);
  FUN_00402200(&PTR_mach_header_0041b000,&DAT_00441000,param_1);
  return;
}



void FUN_0040229e(void)

{
  undefined **ppuVar1;
  
  for (ppuVar1 = &PTR_FUN_0041b008; ppuVar1 != (undefined **)&DAT_0041b038;
      ppuVar1 = (code **)ppuVar1 + 1) {
    (*(code *)*ppuVar1)();
  }
  return;
}



void FUN_004022d0(ulong param_1,long param_2,ulong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar4 = param_3 * 2 + 2;
  uVar7 = param_3 * 2 + 1;
  if ((uVar7 < param_1) &&
     (iVar5 = *(int *)(param_2 + param_3 * 8), piVar1 = (int *)(param_2 + uVar7 * 8),
     *piVar1 != iVar5 && iVar5 <= *piVar1)) {
    if (param_1 <= uVar4) goto LAB_00402300;
  }
  else {
    uVar7 = param_3;
    if (param_1 <= uVar4) {
      return;
    }
  }
  iVar5 = *(int *)(param_2 + uVar7 * 8);
  piVar1 = (int *)(param_2 + uVar4 * 8);
  if (*piVar1 != iVar5 && iVar5 <= *piVar1) {
    uVar7 = uVar4;
  }
LAB_00402300:
  if (param_3 == uVar7) {
    return;
  }
  puVar2 = (undefined8 *)(param_2 + param_3 * 8);
  puVar3 = (undefined8 *)(param_2 + uVar7 * 8);
  uVar6 = *puVar2;
  *puVar2 = *puVar3;
  *puVar3 = uVar6;
  FUN_004022d0(param_1,param_2,uVar7);
  return;
}



void FUN_00402350(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (param_1 - 2U >> 1) + 1;
  do {
    lVar2 = lVar2 + -1;
    FUN_004022d0();
  } while (lVar2 != 0);
  if (param_1 != 0) {
    param_1 = param_1 + -1;
    do {
      uVar1 = param_2[param_1];
      param_2[param_1] = *param_2;
      *param_2 = uVar1;
      FUN_004022d0();
      param_1 = param_1 + -1;
    } while (param_1 != -1);
  }
  return;
}



bool FUN_004023b0(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined local_108 [24];
  uint local_f0;
  
  uVar1 = DAT_00448020;
  if ((DAT_0041c718 & 4) != 0) {
    bVar4 = false;
    cVar2 = FUN_00410c50(param_1,1);
    if (cVar2 != '\0') {
      iVar3 = (*DAT_0041b170)();
      bVar4 = iVar3 == 2;
    }
    return bVar4;
  }
  iVar3 = FUN_00402480(param_1,local_108);
  if (iVar3 != -1) {
    return (local_f0 & 0xf000) == 0x2000;
  }
  DAT_00448020 = uVar1;
  return false;
}



int FUN_00402480(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004122d0();
  if (iVar1 != -1) {
    FUN_004024b0(param_2);
  }
  return iVar1;
}



void FUN_004024b0(long *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if ((DAT_0041c718 & 8) == 0) {
    if ((DAT_0041c718 & 0x20) == 0) {
      if ((DAT_0041c718 & 0x10) == 0) {
        return;
      }
      iVar1 = *(int *)param_1;
      iVar2 = *(int *)((long)param_1 + 0x1c);
      lVar9 = param_1[4];
      lVar8 = param_1[5];
      *param_1 = (long)*(int *)((long)param_1 + 4);
      lVar6 = param_1[10];
      *(int *)(param_1 + 3) = iVar1;
      iVar1 = *(int *)(param_1 + 0xc);
      lVar10 = param_1[0xb];
      *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)((long)param_1 + 0x14);
      lVar7 = param_1[6];
      lVar4 = param_1[7];
      param_1[2] = (ulong)*(uint *)(param_1 + 2);
      lVar5 = param_1[8];
      lVar3 = param_1[9];
      param_1[5] = (long)iVar2;
    }
    else {
      lVar6 = param_1[0xe];
      iVar1 = *(int *)(param_1 + 0x10);
      lVar10 = param_1[0xf];
      lVar9 = param_1[6];
      lVar8 = param_1[7];
      *(uint *)(param_1 + 3) = (uint)*(ushort *)(param_1 + 3);
      lVar7 = param_1[8];
      lVar4 = param_1[9];
      lVar5 = param_1[10];
      lVar3 = param_1[0xb];
    }
    param_1[6] = lVar6;
    param_1[7] = (long)iVar1;
    param_1[8] = lVar10;
  }
  else {
    lVar3 = param_1[2];
    param_1[2] = (ulong)*(ushort *)((long)param_1 + 6);
    lVar8 = param_1[5];
    param_1[5] = (long)*(int *)(param_1 + 3);
    lVar9 = param_1[4];
    *(uint *)(param_1 + 3) = (uint)*(ushort *)((long)param_1 + 4);
    lVar7 = param_1[6];
    lVar4 = param_1[7];
    *param_1 = (long)*(int *)param_1;
    lVar5 = param_1[8];
    *(long *)((long)param_1 + 0x1c) = lVar3;
    param_1[6] = param_1[0xc];
    lVar3 = param_1[9];
    param_1[7] = (long)*(int *)(param_1 + 0xe);
    param_1[8] = param_1[0xd];
  }
  param_1[9] = lVar9;
  param_1[10] = lVar8;
  param_1[0xb] = lVar7;
  param_1[0xc] = lVar4;
  param_1[0xd] = lVar5;
  param_1[0xe] = lVar3;
  return;
}



ulong FUN_004025f2(char *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  code *in_RAX;
  ulong uVar2;
  
  uVar1 = (*in_RAX)();
  uVar2 = (ulong)uVar1;
  if (param_3 <= uVar1) {
    uVar2 = 0;
  }
  if ((1 < (uint)uVar2) && (param_1[uVar2 - 1] != '\\')) {
    *(undefined2 *)(param_1 + uVar2) = 0x5c;
    uVar2 = (ulong)((uint)uVar2 + 1);
  }
  do {
    if (*param_1 == '\\') {
      *param_1 = '/';
    }
    param_3 = param_3 - 1;
    param_1 = param_1 + 1;
  } while (param_3 != 0);
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00402640(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *unaff_R15;
  
  if ((DAT_0041c718 & 0xc) == 0) {
    lVar2 = *unaff_R15;
    while (lVar2 != 0) {
      if (DAT_00440790 == lVar2) {
        if ((ulong *)unaff_R15[1] != (ulong *)0x0) {
          _DAT_00448010 = _DAT_00448010 ^ *(ulong *)unaff_R15[1];
          return;
        }
        return;
      }
      plVar1 = unaff_R15 + 2;
      unaff_R15 = unaff_R15 + 2;
      lVar2 = *plVar1;
    }
  }
  _DAT_00448010 = _DAT_00448010 ^ 0x139408dcbbf7a44;
  if ((DAT_0041c718 & 4) != 0) {
    uVar3 = FUN_00405e30();
    _DAT_00448010 = _DAT_00448010 ^ uVar3;
    return;
  }
  FUN_00412210(&DAT_00448010,8);
  return;
}



char * FUN_004026e0(char *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  
  lVar1 = FUN_0041571a();
  if (lVar1 == 0) {
    return param_1;
  }
  lVar3 = lVar1 + -1;
  cVar4 = param_1[lVar3];
  lVar2 = lVar3;
  if ((cVar4 != '\\') && (cVar4 != '/')) goto LAB_00402729;
  do {
    lVar1 = lVar2;
    if (lVar1 == 0) {
      return param_1 + lVar3;
    }
    cVar4 = param_1[lVar1 + -1];
    lVar2 = lVar1 + -1;
  } while ((cVar4 == '/') || (cVar4 == '\\'));
  while (lVar3 = lVar2, cVar4 != '/') {
LAB_00402729:
    if (cVar4 == '\\') break;
    if (lVar3 == 0) {
      return param_1;
    }
    lVar2 = lVar3 + -1;
    lVar1 = lVar3;
    cVar4 = param_1[lVar3 + -1];
  }
  return param_1 + lVar1;
}



void FUN_0040276d(ulong *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  ulong *unaff_RBX;
  byte *pbVar5;
  
  for (; param_1 < unaff_RBX; param_1 = param_1 + 1) {
    bVar3 = 0;
    uVar4 = 0;
    pbVar5 = param_2;
    do {
      param_2 = pbVar5 + 1;
      bVar1 = *pbVar5;
      bVar2 = bVar3 & 0x3f;
      bVar3 = bVar3 + 7;
      uVar4 = uVar4 | (ulong)(bVar1 & 0x7f) << bVar2;
      pbVar5 = param_2;
    } while ((char)bVar1 < '\0');
    if ((bVar1 & 0x40) != 0) {
      uVar4 = uVar4 | -1 << (bVar3 & 0x3f);
    }
    if (*param_1 != 0) {
      uVar4 = *param_1;
    }
    *param_1 = uVar4;
  }
  return;
}



byte * FUN_004027c0(byte *param_1,ushort *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ushort *puVar5;
  byte *pbVar6;
  ushort *puVar7;
  
  puVar5 = (ushort *)(param_3 + (long)param_2);
  while( true ) {
    puVar7 = (ushort *)((long)param_2 + 1);
    bVar1 = *(byte *)param_2;
    uVar3 = (uint)(bVar1 >> 4);
    uVar4 = (ulong)uVar3;
    if (uVar3 == 0xf) {
      do {
        bVar2 = *(byte *)puVar7;
        puVar7 = (ushort *)((long)puVar7 + 1);
        uVar4 = (ulong)((int)uVar4 + (uint)bVar2);
      } while (bVar2 == 0xff);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *param_1 = *(byte *)puVar7;
      puVar7 = (ushort *)((long)puVar7 + 1);
      param_1 = param_1 + 1;
    }
    if (puVar5 <= puVar7) break;
    param_2 = puVar7 + 1;
    uVar3 = bVar1 & 0xf;
    if (uVar3 == 0xf) {
      do {
        bVar1 = *(byte *)param_2;
        param_2 = (ushort *)((long)param_2 + 1);
        uVar3 = uVar3 + bVar1;
      } while (bVar1 == 0xff);
    }
    pbVar6 = param_1 + -(ulong)*puVar7;
    for (uVar4 = (ulong)(uVar3 + 4); uVar4 != 0; uVar4 = uVar4 - 1) {
      *param_1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      param_1 = param_1 + 1;
    }
  }
  return param_1;
}



undefined8 FUN_0040283c(long *param_1,undefined8 *param_2,long param_3,int param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  bool in_ZF;
  
  do {
    puVar1 = (undefined8 *)((long)param_2 + 1);
    plVar2 = param_1 + 1;
    *param_1 = (ulong)*(byte *)param_2 + param_3;
    param_4 = param_4 + -1;
    param_2 = puVar1;
    param_1 = plVar2;
  } while (param_4 != 0);
  *plVar2 = (ulong)*(byte *)((long)puVar1 +
                            (ulong)(byte)((DAT_0041c03c._1_1_ & 2) != 0 | !in_ZF << 1)) + param_3;
  return *puVar1;
}



void FUN_0040286f(undefined8 param_1)

{
  FUN_0040ee90(0);
  FUN_0040288a();
  FUN_00416001(param_1);
  do {
    invalidInstructionException();
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0040289d)

void FUN_0040288a(void)

{
  return;
}



void FUN_004028c1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_48 [32];
  
  iVar1 = DAT_00448020;
  FUN_004029af();
  FUN_00416150("check failed: 0x");
  uVar2 = FUN_00412630(param_1,local_48);
  FUN_004160c0(local_48,uVar2);
  FUN_00416150(" ");
  FUN_00416150(param_3);
  FUN_00416150(" 0x");
  uVar2 = FUN_00412630(param_2,local_48);
  FUN_004160c0(local_48,uVar2);
  FUN_00416150(&DAT_00418751);
  uVar2 = FUN_00412600((long)iVar1,local_48);
  FUN_004160c0(local_48,uVar2);
  FUN_00416150(&DAT_00418754);
  return;
}



void FUN_004029af(void)

{
  char cVar1;
  
  cVar1 = FUN_0040a3f0();
  if (cVar1 != '\0') {
    FUN_00416150(&DAT_00418758);
  }
  FUN_00416150("error:");
  FUN_00416150(DAT_0041c710);
  FUN_00416150(&DAT_00418764);
  return;
}



undefined8 FUN_00402ab8(void)

{
  DAT_00448020 = DAT_004407a8;
  return 0xffffffffffffffff;
}



undefined8 FUN_00402acd(void)

{
  DAT_00448020 = DAT_004407d0;
  return 0xffffffffffffffff;
}



undefined8 FUN_00402ae2(void)

{
  DAT_00448020 = DAT_004407e0;
  return 0xffffffffffffffff;
}



undefined8 FUN_00402af7(void)

{
  DAT_00448020 = DAT_00440800;
  return 0xffffffffffffffff;
}



undefined8 FUN_00402b0c(void)

{
  DAT_00448020 = DAT_00440818;
  return 0xffffffffffffffff;
}



undefined8 FUN_00402b21(void)

{
  DAT_00448020 = DAT_00440820;
  return 0xffffffffffffffff;
}



undefined8 FUN_00402b36(void)

{
  DAT_00448020 = DAT_00440830;
  return 0xffffffffffffffff;
}



undefined8 FUN_00402b4b(void)

{
  DAT_00448020 = DAT_00440838;
  return 0xffffffffffffffff;
}



undefined8 FUN_00402b60(void)

{
  DAT_00448020 = DAT_00440848;
  return 0xffffffffffffffff;
}



undefined8 FUN_00402b75(void)

{
  DAT_00448020 = (undefined4)DAT_00440860;
  return 0xffffffffffffffff;
}



undefined8 FUN_00402b8a(void)

{
  DAT_00448020 = DAT_00440868;
  return 0xffffffffffffffff;
}



undefined8 FUN_00402b9f(void)

{
  DAT_00448020 = DAT_00440870;
  return 0xffffffffffffffff;
}



undefined8 FUN_00402bb4(void)

{
  DAT_00448020 = DAT_00440890;
  return 0xffffffffffffffff;
}



undefined8 FUN_00402bc9(void)

{
  DAT_00448020 = DAT_00440898;
  return 0xffffffffffffffff;
}



void FUN_00402bdf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b238)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00402bef(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b240)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00402bff(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b248)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00402c0f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b250)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00402c1f(void)

{
  (*DAT_0041b258)();
  return;
}



void FUN_00402c32(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b260)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00402c42(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b268)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00402c52(void)

{
  (*DAT_0041b270)();
  return;
}



void FUN_00402c62(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b278)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00402c72(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b280)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00402c82(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b288)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00402c92(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b290)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00402ca2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b298)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00402cb2(void)

{
  (*DAT_0041b2a0)();
  return;
}



void FUN_00402cc5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b2a8)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00402cd5(void)

{
  (*DAT_0041b2b0)();
  return;
}



void FUN_00402ce8(void)

{
  (*DAT_0041b2b8)();
  return;
}



void FUN_00402cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b2c0)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00402d08(void)

{
  (*DAT_0041b2c8)();
  return;
}



void FUN_00402d1b(void)

{
  (*DAT_0041b2d0)();
  return;
}



void FUN_00402d2e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b2d8)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00402d3e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b2e0)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00402d4e(void)

{
  (*DAT_0041b2e8)();
  return;
}



void FUN_00402d61(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b080)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00402d71(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b088)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00402d81(void)

{
  (*DAT_0041b090)();
  return;
}



void FUN_00402d94(void)

{
  (*DAT_0041b098)();
  return;
}



void FUN_00402da7(void)

{
  (*DAT_0041b0a0)();
  return;
}



void FUN_00402dba(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b0a8)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00402dca(void)

{
  (*DAT_0041b070)();
  return;
}



undefined8 FUN_00403070(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004033ac();
  DAT_00448020 = FUN_004031c0(uVar1);
  return 0xffffffffffffffff;
}



undefined4 FUN_00403090(ulong param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = FUN_00410c50(param_1,2);
  if (cVar1 == '\0') {
    uVar2 = FUN_00402acd();
    return uVar2;
  }
  uVar2 = 0;
  iVar3 = FUN_004033fc(*(undefined8 *)(DAT_00447b50 + (long)(int)(param_1 & 0xffffffff) * 0x18));
  if (iVar3 == -1) {
    uVar2 = FUN_00403070();
  }
  FUN_00411440(param_1 & 0xffffffff);
  return uVar2;
}



ulong FUN_00403110(undefined4 *param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = 0x10;
  if (param_3 < 0x11) {
    uVar2 = param_3;
  }
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = 0x7ffff000;
    uVar4 = 0;
    do {
      *(undefined8 *)(param_1 + 2) = *param_2;
      uVar1 = param_2[1];
      if (uVar3 <= uVar1) {
        *param_1 = (int)uVar3;
        return uVar4;
      }
      *param_1 = (int)uVar1;
      uVar4 = uVar4 + 1;
      param_1 = param_1 + 4;
      uVar3 = uVar3 - (uVar1 & 0xffffffff);
      param_2 = param_2 + 2;
    } while (uVar4 < uVar2);
  }
  return uVar4;
}



uint FUN_004031c0(uint param_1)

{
  if (param_1 < 0xeb) {
    switch(param_1) {
    case 1:
      return DAT_00440820;
    case 2:
    case 3:
    case 0x12:
    case 0x35:
    case 0x43:
    case 0xa1:
    case 0xce:
switchD_0040321f_caseD_490:
      return (uint)DAT_00440860;
    default:
      return param_1;
    case 8:
    case 0x44:
      goto switchD_00403265_caseD_2753;
    case 0x13:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x1b:
    case 0x1c:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x41:
    case 0x52:
    case 0x9e:
      return DAT_004407b0;
    case 0x32:
      return DAT_00440888;
    case 0x33:
switchD_0040321f_caseD_4c9:
      return DAT_004407f0;
    case 0x34:
      return DAT_004407b8;
    case 0x36:
    case 0x3a:
switchD_00403265_caseD_276b:
      return DAT_00440850;
    case 0x3b:
    case 0x40:
switchD_0040321f_caseD_4d4:
      return DAT_004407e8;
    case 0x47:
      return DAT_004407c8;
    case 0x79:
      return DAT_004408a8;
    case 0x7a:
      return DAT_00440800;
    case 0x7e:
switchD_00403265_caseD_276c:
      return DAT_00440870;
    case 0x91:
      return DAT_00440880;
    case 0xe9:
      goto switchD_00403265_caseD_274a;
    case 0xea:
      return DAT_00440840;
    }
  }
  if (0x5ac < param_1) {
    if (param_1 == 0x271e) {
      return DAT_00440800;
    }
    if (param_1 < 0x271f) {
      if (param_1 == 0x6f8) {
        return DAT_00440840;
      }
      if (param_1 < 0x6f9) {
        if (param_1 == 0x5ae) {
          return DAT_00440868;
        }
        if (param_1 != 0x5af) {
          if (param_1 != 0x5ad) {
            return param_1;
          }
          return DAT_00440868;
        }
        return DAT_00440868;
      }
      if (param_1 == 0x718) {
        return DAT_00440868;
      }
      if (param_1 != 0x271d) {
        return param_1;
      }
      return DAT_004407b0;
    }
    if (0x2775 < param_1) {
      return param_1;
    }
    if (param_1 < 0x274a) {
      if (param_1 == 0x2726) {
        return DAT_00440820;
      }
      if (param_1 == 0x2734) {
        return DAT_004407d8;
      }
      return param_1;
    }
    switch(param_1) {
    case 0x274a:
    case 0x2775:
switchD_00403265_caseD_274a:
      return DAT_004408a0;
    default:
      return param_1;
    case 0x2753:
      goto switchD_00403265_caseD_2753;
    case 0x276b:
    case 0x276d:
      goto switchD_00403265_caseD_276b;
    case 0x276c:
      goto switchD_00403265_caseD_276c;
    }
  }
  if (param_1 < 0x5aa) {
    if (0x4e8 < param_1) {
      return param_1;
    }
    if (param_1 < 0x490) {
      if (param_1 == 0x3e5) {
        return DAT_00440810;
      }
      if (0x3e5 < param_1) {
        if (param_1 == 0x3e6) {
          return DAT_00440800;
        }
        return param_1;
      }
      if (param_1 == 0x1e7) {
        return DAT_004407c0;
      }
      if (param_1 == 0x3e3) {
        return DAT_00440818;
      }
      return param_1;
    }
    switch(param_1) {
    case 0x490:
      goto switchD_0040321f_caseD_490;
    default:
      return param_1;
    case 0x4be:
      return DAT_004407c0;
    case 0x4c9:
      goto switchD_0040321f_caseD_4c9;
    case 0x4ca:
      goto switchD_00403265_caseD_274a;
    case 0x4ce:
      return DAT_00440828;
    case 0x4cf:
    case 0x4d1:
      return DAT_00440858;
    case 0x4d0:
    case 0x4e8:
      return DAT_00440808;
    case 0x4d2:
      return DAT_004407f8;
    case 0x4d3:
      return DAT_00440818;
    case 0x4d4:
      goto switchD_0040321f_caseD_4d4;
    }
  }
switchD_00403265_caseD_2753:
  return DAT_00440868;
}



void FUN_004033ac(void)

{
  (*DAT_0041b300)();
  return;
}



void FUN_004033bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b308)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_004033cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b310)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_004033dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b318)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_004033ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b320)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_004033fc(void)

{
  (*DAT_0041b328)();
  return;
}



int FUN_00403410(uint param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 local_e0;
  int aiStack212 [3];
  undefined2 local_c8;
  undefined uStack198;
  undefined5 uStack197;
  undefined8 local_c0;
  undefined4 local_a8 [15];
  undefined4 local_6c;
  undefined8 local_58 [5];
  
  FUN_0041561f(local_a8,0,0x68);
  local_a8[0] = 0x68;
  local_6c = 0x100;
  iVar4 = FUN_00410830();
  if (iVar4 != -1) {
    lVar11 = 0;
    lVar10 = 0;
    do {
      iVar6 = *(int *)(param_2 + lVar10 * 4);
      if (iVar6 == -1) {
        uStack198 = 0;
        local_c8 = 1;
        puVar8 = local_58 + lVar10;
        puVar9 = &local_e0;
        if (*(char *)((long)&local_c8 + lVar10) != '\0') {
          puVar8 = &local_e0;
          puVar9 = local_58 + lVar10;
        }
        iVar6 = FUN_00410830();
        aiStack212[lVar10] = iVar6;
        if (iVar6 != -1) {
          iVar7 = FUN_00405f18(puVar9,puVar8,&DAT_00418920);
          if (iVar7 != 0) {
            *(undefined8 *)(DAT_00447b50 + (long)iVar6 * 0x18) = local_e0;
            goto LAB_004034a4;
          }
        }
        lVar11 = -1;
      }
      else {
        local_58[lVar10] = *(undefined8 *)(DAT_00447b50 + (long)iVar6 * 0x18);
      }
LAB_004034a4:
      lVar10 = lVar10 + 1;
    } while (lVar10 != 3);
    if (lVar11 != -1) {
      uVar5 = param_1 & 1;
      if (uVar5 != 0) {
        uVar5 = 0x1000208;
      }
      lVar11 = 0;
      iVar6 = FUN_00403c50(param_3,param_4,param_5,&DAT_00418920,0,(param_1 >> 1 ^ 1) & 1,uVar5,0,
                           local_a8,&local_c8);
      if (iVar6 != -1) {
        FUN_00405ef5(local_c0);
        lVar11 = CONCAT53(uStack197,CONCAT12(uStack198,local_c8));
      }
    }
    lVar10 = 0;
    do {
      lVar3 = DAT_00447b50;
      if (*(int *)(param_2 + lVar10 * 4) == -1) {
        iVar6 = aiStack212[lVar10];
        if (lVar11 == -1) {
          FUN_00405ef5();
        }
        else {
          *(int *)(param_2 + lVar10 * 4) = iVar6;
          *(undefined8 *)(lVar3 + (long)iVar6 * 0x18 + 0x10) = 1;
          FUN_00405ef5(local_58[lVar10]);
        }
      }
      uVar2 = DAT_00440920;
      lVar10 = lVar10 + 1;
    } while (lVar10 != 3);
    plVar1 = (long *)(DAT_00447b50 + (long)iVar4 * 0x18);
    *(undefined4 *)(plVar1 + 2) = 3;
    *plVar1 = lVar11;
    *(int *)((long)plVar1 + 0x14) = (int)uVar2;
  }
  return iVar4;
}



void FUN_00403710(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  uint local_3c [3];
  
  if (param_3 != 0) {
    uVar1 = 0;
    do {
      FUN_00406014(param_1,param_2 + uVar1,param_3 - uVar1,local_3c,0);
      uVar1 = uVar1 + local_3c[0];
    } while (uVar1 < param_3);
    return;
  }
  return;
}



undefined4 FUN_00403c50(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined local_228 [504];
  
  iVar1 = FUN_00404d00(param_1,local_228);
  if (iVar1 != -1) {
    lVar3 = FUN_00403d30(param_2 + 8);
    if (lVar3 != 0) {
      lVar4 = FUN_00404000(param_3);
      if (lVar4 == 0) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = 0;
        iVar1 = (*DAT_0041b0e0)();
        if (iVar1 == 0) {
          uVar2 = FUN_004162a0();
        }
      }
      goto LAB_00403ce1;
    }
  }
  lVar4 = 0;
  lVar3 = 0;
  uVar2 = 0xffffffff;
LAB_00403ce1:
  FUN_0040b701(lVar3);
  FUN_0040b701(lVar4);
  return uVar2;
}



long FUN_00403d30(long *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  uint local_58;
  undefined2 local_54 [2];
  long local_50;
  ulong local_48;
  ulong local_40 [2];
  
  lVar8 = *param_1;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  if (lVar8 == 0) {
    FUN_00402b21();
    return local_50;
  }
  do {
    lVar6 = FUN_00414ba0(lVar8,&DAT_0041882c);
    if (*(char *)(lVar8 + lVar6) == '\0') {
      bVar1 = false;
      goto LAB_00403db6;
    }
    do {
      iVar3 = FUN_0040b4f0(&local_50,&local_48,local_40,0x22);
      if (iVar3 == -1) {
LAB_00403f78:
        FUN_0040b701(local_50);
        return 0;
      }
      lVar8 = *param_1;
      bVar1 = true;
LAB_00403db6:
      lVar6 = 0;
      while( true ) {
        cVar2 = *(char *)(lVar8 + lVar6);
        if (bVar1) {
          if (cVar2 == '\\') {
            iVar3 = (int)lVar6;
            do {
              iVar5 = (int)lVar6;
              lVar6 = lVar6 + 1;
              cVar2 = *(char *)(lVar8 + lVar6);
            } while (cVar2 == '\\');
            iVar3 = ((1 - iVar3) + iVar5) * 2;
          }
          else {
            iVar3 = 0;
          }
          iVar3 = iVar3 + (uint)(cVar2 == '\"');
          while (iVar3 != 0) {
            iVar3 = iVar3 + -1;
            iVar5 = FUN_0040b4f0(&local_50,&local_48,local_40,0x5c);
            if (iVar5 == -1) goto LAB_00403f78;
          }
          cVar2 = *(char *)(*param_1 + lVar6);
        }
        if (cVar2 == '\0') break;
        if (cVar2 < '\0') {
          uVar4 = FUN_00414d40();
          lVar6 = lVar6 + (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f));
          if (local_58 < 0xd800) goto LAB_00403e5e;
          uVar4 = FUN_004149f0(local_54,2);
          lVar8 = (long)(int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f));
          if (local_40[0] <= local_48 + lVar8) goto LAB_00403e76;
        }
        else {
          lVar6 = lVar6 + 1;
          local_58 = (int)cVar2;
LAB_00403e5e:
          lVar8 = 1;
          local_54[0] = (undefined2)local_58;
          if (local_40[0] <= local_48 + 1) {
LAB_00403e76:
            cVar2 = FUN_0040f180(&local_50,local_40,2,lVar8);
            if (cVar2 == '\0') goto LAB_00403f78;
          }
        }
        FUN_004154c0(local_50 + local_48 * 2,local_54,lVar8 * 2);
        uVar7 = lVar8 + local_48;
        bVar9 = local_48 == 0xffffffffffffffff;
        local_48 = uVar7;
        if (bVar9) goto LAB_00403f78;
        lVar8 = *param_1;
      }
      if ((bVar1) && (iVar3 = FUN_0040b4f0(&local_50,&local_48,local_40,0x22), iVar3 == -1))
      goto LAB_00403f78;
      param_1 = param_1 + 1;
      if (*param_1 == 0) {
        iVar3 = FUN_0040b4f0(&local_50,&local_48,local_40,0);
        if (iVar3 != -1) {
          if (local_48 < 0x4001) {
            return local_50;
          }
          FUN_00402ab8();
        }
        goto LAB_00403f78;
      }
      iVar3 = FUN_0040b4f0(&local_50,&local_48,local_40,0x20);
      if (iVar3 == -1) goto LAB_00403f78;
      lVar8 = *param_1;
    } while (lVar8 == 0);
  } while( true );
}



long FUN_00404000(void)

{
  char cVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint local_50;
  undefined2 local_4c [2];
  ulong local_48;
  long local_40 [2];
  
  local_48 = 8;
  local_40[0] = 0;
  plVar3 = (long *)FUN_00404190();
  if ((plVar3 != (long *)0x0) && (local_40[0] = FUN_0040b6fb(local_48,2), local_40[0] != 0)) {
    lVar4 = *plVar3;
    uVar6 = 0;
    plVar9 = plVar3;
    if (lVar4 != 0) {
LAB_00404063:
      lVar8 = 0;
      uVar7 = uVar6;
      do {
        cVar1 = *(char *)(lVar4 + lVar8);
        if (cVar1 < '\0') {
          uVar2 = FUN_00414d40((char *)(lVar4 + lVar8),&local_50);
          iVar5 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
          if (local_50 < 0xd800) goto LAB_004040f5;
          uVar2 = FUN_004149f0(local_4c,2);
          lVar4 = (long)(int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f));
          uVar6 = uVar7 + lVar4;
          if (local_48 <= uVar6) goto LAB_00404109;
        }
        else {
          iVar5 = 1;
          local_50 = (int)cVar1;
LAB_004040f5:
          lVar4 = 1;
          local_4c[0] = (undefined2)local_50;
          uVar6 = uVar7 + 1;
          if (local_48 <= uVar6) {
LAB_00404109:
            cVar1 = FUN_0040f180(local_40,&local_48,2,lVar4);
            if (cVar1 == '\0') goto LAB_0040412a;
          }
        }
        FUN_004154c0(local_40[0] + uVar7 * 2,local_4c,lVar4 * 2);
        if (uVar7 == 0xffffffffffffffff) goto LAB_0040412a;
        if (local_50 == 0) goto LAB_00404150;
        lVar4 = *plVar9;
        lVar8 = lVar8 + iVar5;
        uVar7 = uVar6;
      } while( true );
    }
    goto LAB_00404165;
  }
LAB_0040412a:
  FUN_0040b701(plVar3);
  FUN_0040b701(local_40[0]);
  return 0;
LAB_00404150:
  lVar4 = plVar9[1];
  plVar9 = plVar9 + 1;
  if (lVar4 == 0) goto LAB_00404174;
  goto LAB_00404063;
LAB_00404174:
  if (uVar6 + 1 < 0x8000) {
LAB_00404165:
    FUN_0040b701(plVar3);
    return local_40[0];
  }
  FUN_00402ab8();
  goto LAB_0040412a;
}



void FUN_00404190(long *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  byte **ppbVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = 0;
  if (*param_1 == 0) {
    lVar8 = FUN_0040b707(8);
    if (lVar8 != 0) {
      FUN_004154c0(lVar8,param_1,8);
      return;
    }
  }
  else {
    do {
      lVar9 = lVar8;
      lVar8 = lVar9 + 1;
    } while (param_1[lVar9 + 1] != 0);
    lVar8 = lVar9 * 8 + 0x10;
    lVar5 = FUN_0040b707(lVar8);
    if ((lVar5 != 0) && (ppbVar6 = (byte **)FUN_004154c0(lVar5,param_1,lVar8), lVar9 + 1 != 1)) {
      lVar8 = 1;
      do {
        pbVar3 = ppbVar6[lVar8];
        lVar5 = lVar8 * 8;
        do {
          pbVar4 = *(byte **)((long)ppbVar6 + lVar5 + -8);
          bVar1 = *pbVar3;
          lVar7 = 0;
          bVar2 = *pbVar4;
          if (bVar2 == bVar1) {
            do {
              if (bVar2 == 0) goto LAB_0040424b;
              lVar7 = lVar7 + 1;
              bVar1 = pbVar3[lVar7];
              bVar2 = pbVar4[lVar7];
            } while (bVar1 == bVar2);
          }
          if (-1 < (int)((uint)bVar1 - (uint)bVar2)) {
LAB_0040424b:
            *(byte **)((long)ppbVar6 + lVar5) = pbVar3;
            goto joined_r0x00404255;
          }
          *(byte **)((long)ppbVar6 + lVar5) = pbVar4;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
        *ppbVar6 = pbVar3;
joined_r0x00404255:
        if (lVar9 == lVar8) {
          return;
        }
        lVar8 = lVar8 + 1;
      } while( true );
    }
  }
  return;
}



int FUN_00404b30(short *param_1,undefined *param_2,ulong param_3,long param_4,ulong param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined auVar4 [16];
  
  iVar3 = 0;
  if (param_3 != 0) {
    lVar2 = param_3 - 1;
    if (*param_1 == 0) {
      param_3 = 0;
    }
    else {
      do {
        iVar1 = iVar3 + 1;
        param_3 = (long)iVar3;
        if ((ulong)(long)iVar1 < param_5) {
          *(undefined **)(param_4 + (long)iVar3 * 8) = param_2;
          param_3 = (long)iVar1;
          iVar3 = iVar1;
        }
        auVar4 = FUN_00414e40(param_2,lVar2,param_1);
        param_1 = param_1 + SUB168(auVar4 >> 0x40,0);
        param_2 = param_2 + SUB168(auVar4,0) + 1;
        lVar2 = lVar2 + ~SUB168(auVar4,0);
      } while (*param_1 != 0);
    }
    *param_2 = 0;
  }
  if (param_3 < param_5) {
    *(undefined8 *)(param_4 + param_3 * 8) = 0;
  }
  return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00404be0(char *param_1,short *param_2,uint param_3)

{
  short *psVar1;
  int iVar2;
  long lVar3;
  
  if (*param_1 != '/') goto LAB_00404c50;
  iVar2 = FUN_00414b60(param_1,"/dev/tty");
  if (iVar2 == 0) {
    if ((param_3 & DAT_00440910) != _DAT_00440938) {
      if ((param_3 & DAT_00440910) == _DAT_00440958) {
        param_1 = "CONOUT$";
        goto LAB_00404c50;
      }
      goto LAB_00404c0f;
    }
  }
  else {
LAB_00404c0f:
    iVar2 = FUN_00414b60(param_1,"/dev/null");
    if (iVar2 == 0) {
      param_1 = "NUL";
      goto LAB_00404c50;
    }
    iVar2 = FUN_00414b60(param_1,"/dev/stdin");
    if (iVar2 != 0) {
      iVar2 = FUN_00414b60(param_1,"/dev/stdout");
      if (iVar2 == 0) {
        param_1 = "CONOUT$";
      }
      goto LAB_00404c50;
    }
  }
  param_1 = "CONIN$";
LAB_00404c50:
  lVar3 = FUN_00414fc0(param_2,0xe8,param_1);
  if (lVar3 != 0xe7) {
    psVar1 = param_2 + lVar3;
    if (lVar3 != 0) {
      do {
        if (*param_2 == 0x2f) {
          *param_2 = 0x5c;
        }
        param_2 = param_2 + 1;
      } while (param_2 != psVar1);
    }
    return;
  }
  FUN_00402b60();
  return;
}



void FUN_00404d00(undefined8 param_1,undefined8 param_2)

{
  FUN_00404be0(param_1,param_2,0xffffffff);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00404d10(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint local_46c;
  int local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 local_45c;
  ulong local_458;
  ulong local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined local_438 [32];
  undefined local_418 [1024];
  
  local_460 = 0;
  local_468 = 0;
  local_464 = 0x400;
  local_45c = 0x14;
  local_46c = param_2;
  local_448 = FUN_0041561f(local_438,0,0x14);
  local_440 = 0x1f01ff001200a0;
  FUN_00405ed5(&local_46c,&local_448);
  local_458 = 0xffffffffffffffff;
  local_450 = 0xffffffffffffffff;
  iVar1 = FUN_00405ec5(param_1,7,local_418,0,&local_464);
  if (iVar1 != 0) {
    uVar2 = (*DAT_0041b138)();
    iVar1 = FUN_00405ee5(uVar2,0x2000e,&local_458);
    if (((iVar1 != 0) && (iVar1 = FUN_00405eb5(local_458,2,&local_450), iVar1 != 0)) &&
       (iVar1 = FUN_00405ea5(local_418,local_450,local_46c,&local_448,local_438,&local_45c,
                             &local_460,&local_468), iVar1 != 0)) {
      if (local_468 != 0) {
        iVar1 = 0;
        goto LAB_00404e00;
      }
      iVar1 = local_468;
      if (local_46c == _DAT_00440770) goto LAB_00404e00;
    }
  }
  iVar1 = FUN_004162a0();
LAB_00404e00:
  FUN_00410160(local_450 & 0xffffffff);
  FUN_00410160(local_458 & 0xffffffff);
  return iVar1;
}



undefined8 FUN_00404ed0(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)param_1 * 0x18;
  uVar3 = *(undefined8 *)(DAT_00447b50 + lVar4);
  if (*(int *)((undefined8 *)(DAT_00447b50 + lVar4) + 2) == 1) {
    (*DAT_0041b100)();
    uVar3 = *(undefined8 *)(DAT_00447b50 + lVar4);
  }
  uVar1 = FUN_00405ef5(uVar3);
  if (*(int *)(lVar4 + DAT_00447b50 + 0x10) == 4) {
    uVar2 = FUN_00405ef5(*(undefined8 *)(lVar4 + DAT_00447b50 + 8));
    uVar1 = uVar1 & uVar2;
  }
  if (uVar1 != 0) {
    return 0;
  }
  uVar3 = FUN_004162a0();
  return uVar3;
}



undefined8 FUN_00404f60(undefined8 param_1,long param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint local_30 [4];
  
  pcVar1 = DAT_0041b120;
  uVar2 = (*DAT_0041b120)(param_1,param_2,local_30,*DAT_00447b50);
  uVar3 = (*pcVar1)();
  if ((uVar2 | uVar3) == 0) {
    uVar5 = FUN_00402bb4();
    return uVar5;
  }
  iVar4 = FUN_0041561f(param_2,0,0x38);
  if (uVar2 == 0) {
    if (iVar4 == 0) {
      return 0;
    }
    if ((local_30[0] & 1) == 0) {
      return 0;
    }
    uVar2 = (uint)DAT_004409b0 | (uint)DAT_004409b8 | *(uint *)(param_2 + 0xc);
  }
  else {
    if ((local_30[0] & 2) != 0) {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | (uint)DAT_004409a8;
    }
    if ((local_30[0] & 4) != 0) {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 8;
    }
    if ((local_30[0] & 1) == 0) {
      return 0;
    }
    uVar2 = (uint)DAT_004409b8 | (uint)DAT_004409b0 | *(uint *)(param_2 + 0xc);
    *(uint *)(param_2 + 0xc) = uVar2;
    if (iVar4 == 0) {
      return 0;
    }
  }
  *(uint *)(param_2 + 0xc) = uVar2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_00405040(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long in_GS_OFFSET;
  uint local_40;
  uint local_3c;
  
  pcVar2 = DAT_0041b120;
  uVar1 = *DAT_00447b50;
  uVar3 = (*DAT_0041b120)(param_1,param_2,&local_40,uVar1);
  uVar4 = (*pcVar2)();
  if ((uVar3 | uVar4) == 0) {
    uVar4 = FUN_00402bb4();
  }
  else {
    if (uVar3 != 0) {
      if (_DAT_004409e8 == param_2) {
        FUN_00405f38(uVar1);
      }
      uVar3 = *(uint *)(param_3 + 0xc);
      uVar5 = local_40 & 0xfffffff8;
      if ((DAT_004409a8 & uVar3) != 0) {
        uVar5 = local_40 & 0xfffffff8 | 2;
      }
      if ((uVar3 & 8) != 0) {
        uVar5 = uVar5 | 4;
      }
      if (((DAT_004409b0 | DAT_004409b8) & (ulong)uVar3) != 0) {
        uVar5 = uVar5 | 1;
      }
      local_40 = uVar5 | 8;
      if (0x9ff < ((*(uint *)(*(long *)(in_GS_OFFSET + 0x60) + 0x118) & 0xff) << 8 |
                  *(uint *)(*(long *)(in_GS_OFFSET + 0x60) + 0x11c))) {
        local_40 = uVar5 | 0x208;
      }
      (*DAT_0041b1e8)();
    }
    if (uVar4 != 0) {
      uVar3 = local_3c | 3;
      if ((*(byte *)(param_3 + 4) & 1) == 0) {
        uVar3 = local_3c | 0xb;
      }
      local_3c = uVar3;
      if (0x9ff < ((*(uint *)(*(long *)(in_GS_OFFSET + 0x60) + 0x118) & 0xff) << 8 |
                  *(uint *)(*(long *)(in_GS_OFFSET + 0x60) + 0x11c))) {
        local_3c = uVar3 | 4;
      }
      uVar4 = 0;
      (*DAT_0041b1e8)();
    }
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long FUN_004053a0(undefined8 param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined local_21c [4];
  undefined local_218 [504];
  
  uVar5 = param_2 & 0xffffffff;
  uVar6 = 0x4053c0;
  iVar1 = FUN_00404be0(param_1,local_218,param_2 & 0xffffffff);
  if (iVar1 != -1) {
    uVar4 = (uint)uVar5;
    if ((DAT_00440928 & uVar5) == 0) {
      iVar1 = (-(uint)((DAT_00440950 & uVar5) == 0) & 0xfffffffe) + 5;
      bVar3 = -((DAT_00440930 & uVar5) == 0) & 7;
    }
    else if ((DAT_00440930 & uVar5) == 0) {
      bVar3 = 7;
      iVar1 = (-(uint)((DAT_00440950 & uVar5) == 0) & 2) + 2;
    }
    else {
      iVar1 = 1;
      bVar3 = 0;
    }
    lVar2 = FUN_00405f08(local_218,uVar4 & 0xd0000009 | 0x20120116,bVar3,&DAT_00418920,iVar1,
                         (uVar4 & 0xf00000) << 8 | uVar4 & 0xf000100 | 0x2080,0,uVar6);
    if (lVar2 != -1) {
      if ((_DAT_00440948 & uVar5) == 0) {
        return lVar2;
      }
      FUN_00405f28(lVar2,0x900c4,0,0,0,0,local_21c,0);
      return lVar2;
    }
  }
  return -1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long FUN_00405500(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  
  param_2 = param_2 & 0xffffffff;
  lVar4 = FUN_00410830();
  puVar2 = DAT_00447b50;
  if (lVar4 == -1) {
    return -1;
  }
  uVar8 = (uint)param_2;
  if (((param_2 & DAT_00440910) == _DAT_00440940) &&
     (iVar3 = FUN_00414b60(param_1,"/dev/tty"), pcVar1 = DAT_0041b170, iVar3 == 0)) {
    iVar3 = (*DAT_0041b170)();
    if ((iVar3 == 2) && (iVar3 = (*pcVar1)(), puVar2 = DAT_00447b50, iVar3 == 2)) {
      puVar7 = DAT_00447b50 + lVar4 * 3;
      *puVar7 = *DAT_00447b50;
      puVar7[1] = puVar2[3];
    }
    else {
      uVar9 = ~DAT_00440910;
      plVar10 = DAT_00447b50 + lVar4 * 3;
      lVar5 = FUN_004053a0("CONIN$",DAT_00440938 | uVar9 & uVar8);
      *plVar10 = lVar5;
      puVar2 = DAT_00447b50;
      if (lVar5 == -1) goto LAB_00405680;
      uVar6 = FUN_004053a0("CONOUT$",DAT_00440958 | uVar9 & uVar8);
      puVar7 = DAT_00447b50 + lVar4 * 3;
      puVar2[lVar4 * 3 + 1] = uVar6;
    }
    *(undefined4 *)(puVar7 + 2) = 4;
    *(uint *)((long)puVar7 + 0x14) = uVar8;
    return lVar4;
  }
  lVar5 = FUN_004053a0(param_1,param_2);
  puVar2[lVar4 * 3] = lVar5;
  puVar2 = DAT_00447b50;
  if (lVar5 == -1) {
    iVar3 = FUN_00405f8e();
    if (((iVar3 != 0x50) || ((DAT_00440928 & param_2) == 0)) || ((DAT_00440950 & param_2) == 0)) {
LAB_00405680:
      lVar4 = FUN_004162a0();
      return lVar4;
    }
    lVar4 = FUN_00402b36();
  }
  else {
    *(undefined4 *)(DAT_00447b50 + lVar4 * 3 + 2) = 1;
    *(uint *)((long)puVar2 + lVar4 * 0x18 + 0x14) = uVar8;
  }
  return lVar4;
}



undefined8 FUN_00405790(void)

{
  int iVar1;
  long lVar2;
  
  iVar1 = (*DAT_0041c0a8)();
  if (iVar1 != -0x3ffffecb) {
    return 0;
  }
  lVar2 = 0x10;
  do {
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return 0;
}



int FUN_004057d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined local_218 [504];
  
  iVar1 = FUN_00404d00(param_1,local_218);
  if (iVar1 != -1) {
    lVar2 = FUN_00405f08(local_218,0x80,7,0,3,0x2000080,0);
    if (lVar2 == -1) {
      iVar1 = FUN_004162a0();
      return iVar1;
    }
    iVar1 = FUN_00405bc0(lVar2,param_2);
    FUN_00405ef5(lVar2);
  }
  return iVar1;
}



undefined8 FUN_00405bc0(undefined8 param_1,ulong *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined auVar5 [16];
  ulong local_68 [2];
  uint local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar2 = FUN_00405f6e();
  if (iVar2 == 0) {
    uVar3 = FUN_004162a0();
    return uVar3;
  }
  FUN_0041561f(param_2,0,0xe0);
  iVar2 = (*DAT_0041b170)();
  uVar1 = (local_58 & 0x80) << 8;
  if ((local_58 & 0x200000) != 0) {
    uVar1 = 0xa000;
  }
  uVar4 = 0x4000;
  if (((((local_58 & 0x10) == 0) && (uVar4 = 0x6000, iVar2 != 1)) && (uVar4 = 0x2000, iVar2 != 2))
     && (uVar4 = 0x1000, iVar2 != 3)) {
    uVar4 = local_58 & 0x10;
  }
  *(uint *)(param_2 + 3) = uVar1 | (-(uint)((local_58 & 1) == 0) & 0x80) + 0x140 | uVar4;
  auVar5 = FUN_004124a0(local_4c);
  param_2[9] = SUB168(auVar5,0);
  param_2[10] = SUB168(auVar5 >> 0x40,0);
  auVar5 = FUN_004124a0(local_44);
  param_2[0xb] = SUB168(auVar5,0);
  param_2[0xc] = SUB168(auVar5 >> 0x40,0);
  auVar5 = FUN_004124a0(local_54);
  param_2[7] = 0x1000;
  param_2[0xd] = SUB168(auVar5,0);
  param_2[0xe] = SUB168(auVar5 >> 0x40,0);
  param_2[6] = CONCAT44(local_38,local_34);
  *param_2 = (ulong)local_3c;
  param_2[1] = CONCAT44(local_2c,local_28);
  param_2[2] = (ulong)local_30;
  iVar2 = FUN_00405f7e(param_1,8,local_68,0x10);
  if (iVar2 == 0) {
    local_68[0] = param_2[6];
  }
  param_2[8] = local_68[0] + 0xfff >> 9 & 0x7ffffffffffff8;
  return 0;
}



undefined8 FUN_00405d40(long *param_1,undefined (*param_2) [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (param_2 != (undefined (*) [16])0x0) {
    uVar1 = *(undefined4 *)((long)param_1 + 4);
    uVar2 = *(undefined4 *)(param_1 + 1);
    uVar3 = *(undefined4 *)((long)param_1 + 0xc);
    *(undefined4 *)*param_2 = *(undefined4 *)param_1;
    *(undefined4 *)(*param_2 + 4) = uVar1;
    *(undefined4 *)(*param_2 + 8) = uVar2;
    *(undefined4 *)(*param_2 + 0xc) = uVar3;
  }
  lVar6 = FUN_0041548b(param_1[1]);
  lVar6 = *param_1 * 10000000 + lVar6;
  if (lVar6 < 1) {
    lVar6 = 1;
  }
  uVar4 = (*DAT_0041c0a0)();
  if (uVar4 >> 0x1e == 3) {
    lVar7 = FUN_00415469(lVar6);
    lVar6 = 1;
    if (0 < lVar7) {
      lVar6 = lVar7;
    }
    iVar5 = FUN_00405fe4(lVar6,1);
    if (iVar5 == 0xc0) {
      uVar8 = FUN_00402b0c();
      return uVar8;
    }
  }
  if (param_2 != (undefined (*) [16])0x0) {
    *param_2 = (undefined  [16])0x0;
  }
  return 0;
}



undefined (*) [16] FUN_00405e00(long param_1,undefined (*param_2) [16])

{
  if (param_1 != -1) {
    param_2[1] = (undefined  [16])0x0;
    *param_2 = (undefined  [16])0x0;
    *(long *)param_2[1] = param_1;
    return param_2;
  }
  return (undefined (*) [16])0x0;
}



ulong FUN_00405e30(void)

{
  int iVar1;
  ulong in_RAX;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  long in_GS_OFFSET;
  int local_20;
  int local_1c;
  
  uVar4 = rdtsc();
  uVar4 = (ulong)*(uint *)(in_GS_OFFSET + 0x40) << 0x11 ^ (ulong)*(uint *)(in_GS_OFFSET + 0x48) ^
          (uVar4 & 0xffffffff00000000 | in_RAX & 0xffffffff00000000 | uVar4 & 0xffffffff);
  uVar2 = FUN_00405f9e("user32.dll");
  pcVar3 = (code *)FUN_00405fb1(uVar2,"GetCursorPos");
  if (pcVar3 != (code *)0x0) {
    iVar1 = (*pcVar3)(&local_20);
    if (iVar1 != 0) {
      uVar4 = uVar4 ^ (long)(local_20 * local_1c);
    }
  }
  return uVar4;
}



void FUN_00405ea5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b040)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00405eb5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b048)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00405ec5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b050)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00405ed5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b058)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00405ee5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b060)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00405ef5(void)

{
  (*DAT_0041b0c0)();
  return;
}



void FUN_00405f08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b0d0)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00405f18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b0d8)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00405f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b0e8)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00405f38(void)

{
  (*DAT_0041b0f8)();
  return;
}



void FUN_00405f4b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b130)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00405f5b(void)

{
  (*DAT_0041b158)();
  return;
}



void FUN_00405f6e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b160)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00405f7e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b168)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00405f8e(void)

{
  (*DAT_0041b178)();
  return;
}



void FUN_00405f9e(void)

{
  (*DAT_0041b180)();
  return;
}



void FUN_00405fb1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b188)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00405fc1(void)

{
  (*DAT_0041b1b8)();
  return;
}



void FUN_00405fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b1d0)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00405fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b208)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00405ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b218)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00406004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b220)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00406014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b228)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00406024(void)

{
  undefined8 in_RCX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined auVar1 [16];
  undefined local_88 [128];
  
  auVar1 = FUN_0041633b(local_88);
  (*SUB168(auVar1,0))(in_RCX,SUB168(auVar1 >> 0x40,0),in_R8,in_R9);
  FUN_004162c8(local_88);
  return;
}



void FUN_004060a0(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long local_88;
  long local_68;
  long local_60;
  long local_40;
  
  lVar2 = DAT_00446400;
  lVar3 = DAT_00446450 >> 3;
  lVar9 = DAT_00446448 >> 3;
  if (0 < lVar3) {
    local_68 = DAT_00446400;
    local_60 = DAT_00446408;
    local_40 = 0;
    local_88 = 0;
    do {
      lVar4 = local_88 + 1;
      if (0 < lVar9) {
        lVar6 = lVar3;
        if (local_88 != 0) {
          lVar6 = local_88;
        }
        lVar5 = (lVar6 + -1) * lVar9;
        lVar6 = 0;
        if (lVar4 < lVar3) {
          lVar6 = lVar4;
        }
        lVar6 = lVar6 * lVar9;
        lVar8 = 0;
        do {
          uVar1 = *(ulong *)(local_60 + lVar8 * 8);
          uVar7 = *(ulong *)(DAT_00446408 + lVar5 * 8 + lVar8 * 8);
          uVar12 = uVar7 >> 0x38;
          lVar19 = lVar8;
          if (lVar8 == 0) {
            lVar19 = lVar9;
          }
          lVar19 = lVar19 + -1;
          uVar13 = uVar12 | uVar1 << 8;
          uVar23 = *(ulong *)(DAT_00446408 + (local_40 + lVar19) * 8);
          uVar20 = uVar23 >> 7;
          uVar12 = *(ulong *)(DAT_00446408 + (lVar5 + lVar19) * 8) >> 0x3f |
                   (uVar1 << 9 | uVar12 * 2) & 0xfefefefefefefefe | (uVar20 & 0x1010101010101) << 8;
          uVar20 = uVar20 & 0x101010101010101 | uVar1 * 2 & 0xfefefefefefefefe;
          uVar21 = uVar12 & uVar20;
          uVar12 = uVar12 ^ uVar20;
          lVar11 = *(long *)(DAT_00446408 + lVar6 * 8 + lVar8 * 8);
          uVar23 = lVar11 << 0x39 | (uVar1 >> 8) * 2 & 0xfefefefefefefefe |
                   uVar23 >> 0xf & 0x1010101010101 |
                   (*(ulong *)(DAT_00446408 + (lVar19 + lVar6) * 8) & 0x80) << 0x31;
          uVar16 = uVar23 & uVar12;
          uVar12 = uVar12 ^ uVar23;
          uVar24 = uVar21 ^ uVar16;
          uVar20 = uVar13 ^ uVar12;
          uVar13 = uVar13 & uVar12;
          uVar17 = uVar24 ^ uVar13;
          uVar25 = lVar11 << 0x38;
          lVar8 = lVar8 + 1;
          uVar23 = uVar1 >> 8 | uVar25;
          uVar12 = uVar23 ^ uVar20;
          uVar23 = uVar23 & uVar20;
          uVar20 = uVar17 ^ uVar23;
          lVar19 = lVar5;
          lVar11 = lVar6;
          lVar14 = local_40;
          if (lVar8 < lVar9) {
            lVar19 = lVar5 + lVar8;
            lVar11 = lVar6 + lVar8;
            lVar14 = local_40 + lVar8;
          }
          uVar10 = *(ulong *)(DAT_00446408 + lVar14 * 8);
          uVar15 = uVar10 << 7;
          uVar7 = (ulong)((uint)((ulong)*(undefined8 *)(DAT_00446408 + lVar19 * 8) >> 0x31) & 0x80)
                  | (uVar10 & 0x1010101010101) << 0xf |
                    (uVar1 << 8) >> 1 & 0x7f7f7f7f7f7f7f7f | uVar7 >> 0x39;
          uVar10 = uVar7 & uVar12;
          uVar12 = uVar12 ^ uVar7;
          uVar18 = uVar20 ^ uVar10;
          uVar7 = uVar15 & 0x8080808080808080 | uVar1 >> 1 & 0x7f7f7f7f7f7f7f7f;
          uVar22 = uVar7 & uVar12;
          uVar12 = uVar12 ^ uVar7;
          uVar7 = uVar18 ^ uVar22;
          uVar15 = uVar15 >> 8 & 0x80808080808080 |
                   (uVar25 >> 1 | uVar1 >> 9) & 0x7f7f7f7f7f7f7f7f |
                   *(long *)(DAT_00446408 + lVar11 * 8) << 0x3f;
          uVar25 = uVar15 & uVar12;
          *(ulong *)(local_68 + -8 + lVar8 * 8) =
               (uVar1 | uVar12 ^ uVar15) & (uVar7 ^ uVar25) &
               ~(uVar7 & uVar25 |
                uVar23 & uVar17 | uVar21 & uVar16 | uVar24 & uVar13 | uVar20 & uVar10 |
                uVar18 & uVar22);
        } while (lVar8 != lVar9);
      }
      local_40 = local_40 + lVar9;
      local_68 = local_68 + lVar9 * 8;
      local_60 = local_60 + lVar9 * 8;
      local_88 = lVar4;
    } while (lVar3 != lVar4);
  }
  DAT_00446410 = DAT_00446410 + 1;
  DAT_00446400 = DAT_00446408;
  DAT_00446408 = lVar2;
  return;
}



void FUN_004064d0(void)

{
  if (DAT_004464a0 == '\0') {
    DAT_004464a0 = '\x01';
    DAT_00446480 = DAT_00446450 / 2 - DAT_00446460 / 2;
    DAT_00446470 = DAT_00446448 / 2 - DAT_00446458 / 2;
  }
  DAT_00446468 = DAT_00446470 + DAT_00446458;
  DAT_00446478 = DAT_00446480 + DAT_00446460;
  return;
}



void FUN_00406570(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = DAT_00446460;
  if (DAT_00446440 != 0) {
    lVar1 = DAT_00446460 * 2;
  }
  bVar2 = (byte)DAT_00446440;
  DAT_00446480 = (param_1 << (bVar2 & 0x3f)) + DAT_00446480;
  DAT_00446470 = (param_2 << (bVar2 & 0x3f)) + DAT_00446470;
  DAT_00446468 = DAT_00446470 + (DAT_00446458 << (bVar2 & 0x3f));
  DAT_00446478 = (lVar1 << (bVar2 & 0x3f)) + DAT_00446480;
  return;
}



void FUN_004065d0(long param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  DAT_004464a1 = 1;
  DAT_004464a5 = 0;
  lVar7 = (param_1 << ((DAT_00446440 != 0) + (byte)DAT_00446440 & 0x3f)) + DAT_00446480;
  DAT_00446428 = param_2;
  DAT_00446430 = param_1;
  if ((((-1 < lVar7) &&
       (lVar6 = (param_2 << ((byte)DAT_00446440 & 0x3f)) + DAT_00446470, lVar7 < DAT_00446450)) &&
      (-1 < lVar6)) && (lVar6 < DAT_00446448)) {
    puVar1 = (ulong *)(DAT_00446408 + ((DAT_00446448 >> 3) * (lVar7 >> 3) + (lVar6 >> 3)) * 8);
    uVar2 = *puVar1;
    uVar5 = (int)lVar7 * 8 & 0x38U | (uint)lVar6 & 7;
    uVar3 = uVar2 >> (sbyte)uVar5;
    DAT_004464a5 = (byte)uVar3 & 1;
    if ((uVar3 & 1) != 0) {
      bVar4 = (char)lVar7 * '\b' & 0x38U | (byte)lVar6 & 7;
      puVar1 = (ulong *)(DAT_00446408 + ((DAT_00446448 >> 3) * (lVar7 >> 3) + (lVar6 >> 3)) * 8);
      *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffffffffffeU >> 0x40 - bVar4);
      return;
    }
    *puVar1 = uVar2 | 1 << uVar5;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004066a0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = DAT_00446430 - param_1 << ((byte)DAT_00446440 & 0x3f);
  lVar2 = DAT_00446428 - param_2 << ((byte)DAT_00446440 & 0x3f);
  if (DAT_00446440 != 0) {
    lVar1 = lVar1 * 2;
  }
  if (DAT_004464a3 != '\0') {
    lVar1 = -lVar1;
    lVar2 = -lVar2;
  }
  DAT_00446468 = lVar2 + _DAT_00446418 + (DAT_00446468 - DAT_00446470);
  DAT_00446470 = lVar2 + _DAT_00446418;
  DAT_00446478 = lVar1 + _DAT_00446420 + (DAT_00446478 - DAT_00446480);
  DAT_00446480 = lVar1 + _DAT_00446420;
  return;
}



long FUN_00406750(uint param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  
  puVar4 = (ulong *)(ulong)param_1;
  FUN_0041571a("SYNOPSIS\n\n  ","SYNOPSIS\n\n  ");
  FUN_00411a10(DAT_0044649c);
  FUN_0041571a(DAT_0041c710);
  FUN_00411a10(DAT_0044649c);
  FUN_0041571a(" [-zNW] [-w WIDTH] [-h HEIGHT] [PATH]\n\nDESCRIPTION\n\n  Conway\'s Game of Life\n\nFLAGS\n\n  -?         help\n  -z         zoom\n  -w INT     board width\n  -h INT     board height\n  -N         natural scrolling\n  -W         white terminal background\n\nSHORTCUTS\n\n  space      step\n  left+drag  draw\n  right+drag move\n  ctrl+wheel zoom\n  ctrl+t     turbo\n  alt+t      slowmo\n  R          reset\n  q          quit\n\n"
               ,
               " [-zNW] [-w WIDTH] [-h HEIGHT] [PATH]\n\nDESCRIPTION\n\n  Conway\'s Game of Life\n\nFLAGS\n\n  -?         help\n  -z         zoom\n  -w INT     board width\n  -h INT     board height\n  -N         natural scrolling\n  -W         white terminal background\n\nSHORTCUTS\n\n  space      step\n  left+drag  draw\n  right+drag move\n  ctrl+wheel zoom\n  ctrl+t     turbo\n  alt+t      slowmo\n  R          reset\n  q          quit\n\n"
              );
  FUN_00411a10();
  FUN_0040286f();
  uVar3 = (DAT_00446450 * DAT_00446448 >> 3) + 0xfffU & 0xfffffffffffff000;
  lVar1 = uVar3 + 0x1000;
  uVar3 = uVar3 + 0x11fff & 0xffffffffffff0000;
  lVar2 = FUN_0040f370(0,uVar3,3,(uint)DAT_004408c8 | 2,0xffffffff,0);
  FUN_00416180(lVar2,0x1000,0);
  FUN_00416180(lVar2 + lVar1,uVar3 - lVar1,0);
  if (puVar4 != (ulong *)0x0) {
    *puVar4 = uVar3;
  }
  return lVar2 + 0x1000;
}



long FUN_004067c0(ulong *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = (DAT_00446450 * DAT_00446448 >> 3) + 0xfffU & 0xfffffffffffff000;
  lVar1 = uVar3 + 0x1000;
  uVar3 = uVar3 + 0x11fff & 0xffffffffffff0000;
  lVar2 = FUN_0040f370(0,uVar3,3,(uint)DAT_004408c8 | 2,0xffffffff,0);
  FUN_00416180(lVar2,0x1000,0);
  FUN_00416180(lVar2 + lVar1,uVar3 - lVar1,0);
  if (param_1 != (ulong *)0x0) {
    *param_1 = uVar3;
  }
  return lVar2 + 0x1000;
}



void FUN_00406860(void)

{
  int iVar1;
  
  DAT_00446494 = DAT_00446494 + 1;
  iVar1 = FUN_0040aa80();
  if ((iVar1 != -1) && (iVar1 == 10)) {
    DAT_00446498 = DAT_00446498 + 1;
    DAT_00446494 = 0;
    return;
  }
  return;
}



void FUN_004068a0(undefined8 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar1 = DAT_004463e0;
  uVar5 = param_2 + 1 + DAT_004463e0;
  uVar2 = DAT_004463e4;
  lVar3 = DAT_004463e8;
  if (DAT_004463e4 < uVar5) {
    uVar2 = (DAT_004463e4 >> 1) + DAT_004463e4;
    if (uVar2 < 0x10) {
      uVar2 = 0x10;
    }
    if (uVar5 <= uVar2) {
      uVar5 = uVar2;
    }
    lVar3 = FUN_0040b70d(DAT_004463e8,uVar5);
    uVar2 = uVar5;
    if (lVar3 == 0) {
      return;
    }
  }
  DAT_004463e8 = lVar3;
  DAT_004463e4 = uVar2;
  DAT_004463e0 = param_2 + DAT_004463e0;
  uVar4 = (ulong)DAT_004463e0;
  lVar3 = DAT_004463e8;
  FUN_004154c0((ulong)uVar1 + DAT_004463e8,param_1,param_2);
  *(undefined *)(lVar3 + uVar4) = 0;
  return;
}



undefined8 FUN_00406950(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long extraout_RDX;
  undefined local_19 [9];
  
LAB_0040695c:
  uVar3 = FUN_00406860(param_1);
  if ((int)uVar3 == -1) {
LAB_004069ac:
    uVar3 = 0xffffffff;
  }
  else if (((int)uVar3 == 0x23) && (DAT_00446494 == 1)) {
    do {
      iVar1 = FUN_00406860(param_1);
      while( true ) {
        if (iVar1 == -1) goto LAB_004069ac;
        if (iVar1 == 0xd) break;
        if (iVar1 == 10) {
          if (((DAT_004463e0 != 0) && (*DAT_004463e8 == 'N')) && (2 < DAT_004463e0)) {
            uVar2 = DAT_004463e0 - 2;
            if (0x3f < uVar2) {
              uVar2 = 0x3f;
            }
            FUN_004154c0(&DAT_00446360,DAT_004463e8 + 2,uVar2);
            (&DAT_00446360)[extraout_RDX] = 0;
          }
          goto LAB_0040695c;
        }
        local_19[0] = (undefined)iVar1;
        FUN_004068a0(local_19,1);
        iVar1 = FUN_00406860(param_1);
      }
    } while( true );
  }
  return uVar3;
}



undefined8 FUN_00406a10(void)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  DAT_00446498 = 0;
  uVar5 = FUN_0040aad0();
  iVar3 = FUN_00406950(uVar5);
  if ((((iVar3 == 0x78) && (iVar3 = FUN_00406950(uVar5), iVar3 == 0x20)) &&
      (iVar3 = FUN_00406950(uVar5), iVar3 == 0x3d)) && (iVar3 = FUN_00406950(uVar5), iVar3 == 0x20))
  {
    lVar11 = 0;
    while( true ) {
      iVar3 = FUN_00406950(uVar5);
      if (iVar3 == -1) break;
      if (9 < iVar3 - 0x30U) goto LAB_00406ad8;
      lVar11 = (long)iVar3 + -0x30 + lVar11 * 10;
    }
  }
  goto LAB_00406a91;
  while (9 < iVar3 - 0x30U) {
LAB_00406ad8:
    iVar3 = FUN_00406950(uVar5);
    lVar9 = (long)iVar3;
    if (iVar3 == -1) goto LAB_00406a91;
  }
  lVar15 = 0;
  do {
    lVar15 = lVar9 + -0x30 + lVar15 * 10;
    iVar3 = FUN_00406950(uVar5);
    lVar9 = (long)iVar3;
    if (iVar3 == -1) goto LAB_00406a91;
  } while (iVar3 - 0x30U < 10);
  do {
    lVar6 = DAT_00446400;
    if (lVar9 == 10) {
      if ((lVar15 <= DAT_00446450) && (lVar11 <= DAT_00446448)) {
        lVar17 = 0;
        lVar16 = 0;
        DAT_00446400 = DAT_00446408;
        DAT_00446408 = lVar6;
        lVar9 = DAT_00446448;
        lVar6 = FUN_0041561f(lVar6,0,DAT_00446450 * DAT_00446448 >> 3);
        goto LAB_00406bd8;
      }
      break;
    }
    iVar3 = FUN_00406860(uVar5);
    lVar9 = (long)iVar3;
  } while (iVar3 != -1);
  goto LAB_00406a91;
LAB_00406bd8:
  iVar3 = FUN_00406950(uVar5);
  lVar10 = (long)iVar3;
  if (iVar3 != -1) {
    if (lVar10 == 0x21) {
      FUN_0040a890(uVar5);
      DAT_004464a0 = 0;
      return 0;
    }
    iVar4 = FUN_004148d0(iVar3);
    if (iVar4 == 0) {
      lVar12 = 1;
      if (iVar3 - 0x30U < 10) {
        lVar12 = lVar10 + -0x30;
        while( true ) {
          iVar3 = FUN_00406950(uVar5);
          lVar10 = (long)iVar3;
          if (iVar3 == -1) goto LAB_00406a91;
          if (9 < iVar3 - 0x30U) break;
          lVar12 = lVar10 + -0x30 + lVar12 * 10;
        }
      }
      lVar2 = DAT_00446408;
      if (lVar10 == 0x24) {
        lVar16 = lVar16 + 1;
        lVar17 = 0;
        if (lVar15 == lVar16) {
          lVar16 = 0;
        }
      }
      else {
        if ((lVar10 != 0x62) && (lVar10 != 0x6f)) goto LAB_00406a91;
        if (0 < lVar12) {
          lVar7 = 0;
          lVar14 = DAT_00446448 >> 3;
          lVar13 = lVar17;
          do {
            if (lVar13 < lVar11) {
              lVar17 = lVar13 + 1;
            }
            else {
              lVar16 = lVar16 + 1;
              lVar13 = 0;
              lVar17 = 1;
              if (lVar15 == lVar16) {
                lVar16 = 0;
              }
            }
            if (lVar10 == 0x6f) {
              lVar13 = lVar13 + (lVar9 / 2 - lVar11 / 2);
              lVar8 = (lVar6 / 2 - lVar15 / 2) + lVar16;
              puVar1 = (ulong *)(lVar2 + ((lVar13 >> 3) + (lVar8 >> 3) * lVar14) * 8);
              *puVar1 = *puVar1 | 1 << ((char)lVar8 * '\b' & 0x38U | (byte)lVar13 & 7);
            }
            lVar7 = lVar7 + 1;
            lVar13 = lVar17;
          } while (lVar12 != lVar7);
        }
      }
    }
    goto LAB_00406bd8;
  }
LAB_00406a91:
  FUN_0040a890(uVar5);
  lVar11 = DAT_00446400;
  DAT_00446400 = DAT_00446408;
  DAT_00446408 = lVar11;
  return 0xffffffff;
}



void FUN_00406d30(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  
  uVar9 = DAT_00446480;
  uVar8 = DAT_00446478;
  uVar7 = DAT_00446470;
  uVar6 = DAT_00446468;
  lVar5 = DAT_00446450;
  lVar4 = DAT_00446448;
  uVar3 = DAT_00446440;
  uVar2 = DAT_00446438;
  lVar10 = DAT_00446448 * DAT_00446450 >> 6;
  if (lVar10 < 1) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    uVar11 = DAT_0041c020 & 0x800000;
    puVar1 = DAT_00446408 + lVar10;
    puVar12 = DAT_00446408;
    do {
      while (uVar11 == 0) {
        puVar12 = puVar12 + 1;
        lVar10 = FUN_0040ecb0();
        lVar13 = lVar13 + lVar10;
        if (puVar1 == puVar12) goto LAB_00406e06;
      }
      lVar10 = popcnt(*puVar12);
      puVar12 = puVar12 + 1;
      lVar13 = lVar13 + lVar10;
    } while (puVar1 != puVar12);
  }
LAB_00406e06:
  FUN_00413ac0(&DAT_00446260,0x100,&DAT_00417230,&DAT_00446360,DAT_00446410,lVar13,uVar2,uVar3,lVar5
               ,lVar4,uVar7,uVar9,uVar6,uVar8);
  return;
}



void FUN_00406e60(long param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = DAT_00446470;
  if ((DAT_00446430 != param_1) || (DAT_00446428 != param_2)) {
    bVar3 = (byte)DAT_00446440;
    bVar4 = (DAT_00446440 != 0) + bVar3;
    lVar6 = (param_1 << (bVar4 & 0x3f)) + DAT_00446480;
    DAT_00446428 = param_2;
    DAT_00446430 = param_1;
    uVar2 = FUN_00412150();
    lVar6 = (~(-1 << (bVar4 & 0x3f)) & uVar2) + lVar6;
    uVar2 = FUN_00412150();
    if ((-1 < lVar6) &&
       (((lVar5 = lVar5 + (param_2 << (bVar3 & 0x3f)) + (~(-1 << (bVar3 & 0x3f)) & uVar2),
         lVar6 < DAT_00446450 && (-1 < lVar5)) && (lVar5 < DAT_00446448)))) {
      if (DAT_004464a5 != '\0') {
        bVar3 = (char)lVar6 * '\b' & 0x38U | (byte)lVar5 & 7;
        puVar1 = (ulong *)(DAT_00446408 + ((DAT_00446448 >> 3) * (lVar6 >> 3) + (lVar5 >> 3)) * 8);
        *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffffffffffeU >> 0x40 - bVar3);
        return;
      }
      puVar1 = (ulong *)(DAT_00446408 + ((DAT_00446448 >> 3) * (lVar6 >> 3) + (lVar5 >> 3)) * 8);
      *puVar1 = *puVar1 | 1 << ((char)lVar6 * '\b' & 0x38U | (byte)lVar5 & 7);
    }
  }
  return;
}



void FUN_00406fa0(undefined8 param_1)

{
  int iVar1;
  undefined4 local_3a8 [2];
  undefined8 local_3a0;
  wchar16 *local_390;
  undefined8 local_378;
  undefined4 local_370;
  undefined4 local_348;
  undefined local_308 [760];
  
  local_378 = FUN_0041561f(local_3a8,0,0x98);
  local_3a8[0] = 0x98;
  local_370 = 0xf8;
  local_390 = L"RLE Format (*.RLE;*.LIF;*.LIFE)";
  local_348 = 0x81800;
  local_3a0 = param_1;
  iVar1 = FUN_00402dca();
  if (iVar1 == 0) {
    return;
  }
  FUN_00414e40(local_308,0xf8,local_378);
  iVar1 = FUN_00406a10(local_308);
  if (iVar1 == -1) {
    FUN_00402ca2(param_1,L"Failed to open run-length encoded game file",L"Open Failed",0x10);
  }
  FUN_00402cc5(param_1,0,0,1);
  return;
}



void FUN_00407100(void)

{
  ushort local_10;
  ushort local_e;
  
  local_10 = (short)DAT_00446460 + 1;
  local_e = (ushort)DAT_00446458;
  FUN_00409ce0(DAT_0044649c,&local_10);
  DAT_00446458 = (ulong)local_e;
  DAT_00446460 = (long)(int)(local_10 - 1);
  DAT_00446468 = (ulong)local_e + DAT_00446470;
  DAT_00446478 = (int)(local_10 - 1) + DAT_00446480;
  return;
}



void FUN_00407170(long param_1,long param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  if ((((-1 < param_1) && (param_1 < DAT_00446460)) && (-1 < param_2)) && (param_2 < DAT_00446458))
  {
    lVar4 = param_3 + DAT_00446440;
    lVar3 = 0;
    if (-1 < lVar4) {
      lVar3 = lVar4;
    }
    if (0xe < lVar3) {
      lVar3 = 0xe;
    }
    bVar1 = (byte)DAT_00446440;
    bVar2 = (byte)lVar3;
    bVar5 = DAT_00446440 != 0;
    DAT_00446440 = lVar3;
    FUN_00406570((param_1 << (bVar5 + bVar1 & 0x3f)) - (param_1 << ((0 < lVar4) + bVar2 & 0x3f)) >>
                 (bVar2 & 0x3f),
                 (param_2 << (bVar1 & 0x3f)) - (param_2 << (bVar2 & 0x3f)) >> (bVar2 & 0x3f));
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong FUN_00407200(undefined8 param_1,uint param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  uint local_88;
  uint uStack132;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  
  lVar3 = DAT_00446438;
  if (param_2 < 0x206) {
    uVar7 = (uint)param_4;
    uVar13 = (uint)(param_4 >> 0x10);
    if (0x1ff < param_2) {
      switch(param_2) {
      case 0x200:
        if ((param_3 & 1) == 0) {
          if ((param_3 & 2) == 0) {
            return 0;
          }
          FUN_004066a0(uVar13 & 0xffff,uVar7 & 0xffff);
          FUN_00402cc5(param_1,0,0,1);
          return (ulong)((uint)param_3 & 1);
        }
        FUN_00406e60(uVar13 & 0xffff,uVar7 & 0xffff);
        break;
      case 0x201:
        FUN_00402d08();
        FUN_004065d0(uVar13 & 0xffff,uVar7 & 0xffff);
        break;
      case 0x202:
        DAT_004464a1 = 0;
        FUN_00402ce8();
        return 0;
      default:
        goto switchD_004072df_caseD_203;
      case 0x204:
        DAT_004463f0 = FUN_00402c52();
        FUN_00402d08(param_1);
        uVar4 = FUN_00402c92(0,0x7f86);
        FUN_00402d1b(uVar4);
        DAT_004464a1 = 1;
        DAT_00446428 = param_4 & 0xffff;
        DAT_00446430 = (param_4 & 0xffffffff) >> 0x10;
        _DAT_00446420 = DAT_00446480;
        _DAT_00446418 = DAT_00446470;
LAB_004073f8:
        FUN_00402cc5(param_1,0,0,1);
        return 0;
      case 0x205:
        DAT_004464a1 = 0;
        FUN_00402d1b(DAT_004463f0);
        FUN_00402ce8();
        return 0;
      }
      local_88 = uVar7 & 0xffff;
      uStack132 = uVar13 & 0xffff;
      local_80 = local_88 + 1;
      local_7c = uStack132 + 1;
      FUN_00402cc5(param_1,&local_88,0,1);
      return 0;
    }
    if (param_2 == 0xf) {
      FUN_00402bef();
      local_a8 = 0;
      local_9c = local_70 - local_78;
      lVar3 = local_78 + DAT_00446480;
      local_a0 = local_74 - local_7c;
      local_94 = -(int)lVar3;
      if (0 < lVar3) {
        local_94 = 0;
      }
      lVar10 = local_7c + DAT_00446470;
      local_98 = -(int)lVar10;
      if (0 < lVar10) {
        local_98 = 0;
      }
      lVar6 = (long)local_a0;
      if (DAT_00446448 - lVar10 <= (long)local_a0) {
        lVar6 = DAT_00446448 - lVar10;
      }
      local_90 = (int)lVar6;
      local_8c = (int)(DAT_00446450 - lVar3);
      if ((long)local_9c < DAT_00446450 - lVar3) {
        local_8c = local_9c;
      }
      uVar4 = FUN_00402d81(CONCAT44(uStack132,local_88));
      uVar5 = FUN_00402d71(CONCAT44(uStack132,local_88),local_a0,local_9c);
      FUN_00402dba(uVar4,uVar5);
      FUN_00402c42(uVar4,&local_a8,0xb);
      uVar14 = 0x40752b;
      FUN_00402c42(uVar4,&local_98,0xc);
      iVar1 = local_7c;
      iVar8 = local_78;
      if (local_94 < local_8c) {
        lVar3 = (long)local_94;
        iVar9 = local_94;
        do {
          if (local_98 < local_90) {
            lVar10 = (long)local_98;
            iVar12 = local_98;
            do {
              lVar6 = iVar8 + DAT_00446480 + lVar3;
              lVar11 = iVar1 + DAT_00446470 + lVar10;
              if ((*(ulong *)(DAT_00446408 +
                             ((DAT_00446448 >> 3) * (lVar6 >> 3) + (lVar11 >> 3)) * 8) >>
                   ((int)lVar6 * 8 & 0x38U | (uint)lVar11 & 7) & 1) != 0) {
                (*DAT_0041b0b0)();
                iVar1 = local_7c;
                iVar8 = local_78;
              }
              iVar12 = iVar12 + 1;
              lVar10 = lVar10 + 1;
            } while (iVar12 < local_90);
          }
          iVar9 = iVar9 + 1;
          lVar3 = lVar3 + 1;
        } while (iVar9 < local_8c);
      }
      FUN_00402d61(CONCAT44(uStack132,local_88),iVar1,iVar8,local_a0,local_9c,uVar4,0,0,0xcc0020,
                   uVar14);
      FUN_00402da7(uVar5);
      FUN_00402d94(uVar4);
      FUN_00406d30();
      FUN_00414fc0(&DAT_00446060,0x100,&DAT_00446260);
      FUN_00402d2e(param_1,&DAT_00446060);
      FUN_00402c32(param_1,&local_88);
      return 0;
    }
    if (param_2 < 0x10) {
      if (param_2 == 2) {
        FUN_00402cb2(0);
        return 0;
      }
      if (param_2 == 5) {
        DAT_00446458 = param_4 & 0xffff;
        DAT_00446460 = (ulong)(uVar13 & 0xffff);
        FUN_004064d0();
        return 0;
      }
    }
    else {
      if (param_2 == 0x102) {
        if (param_3 != 0x20) {
          if (param_3 < 0x21) {
            if (param_3 != 9) {
              if (param_3 == 0xd) {
                local_88 = 0x3c;
                iVar1 = FUN_00402c82(param_1,&local_88);
                if ((iVar1 != 0) && (local_80 == 3)) {
                  FUN_00402cf8(param_1,0x112,0xf120,0);
                  return 0;
                }
                FUN_00402cf8(param_1,0x112,0xf030,0);
              }
              return 0;
            }
          }
          else if (param_3 != 0x73) {
            if (param_3 != 0x74) {
              return 0;
            }
            if ((param_4 & 0x20000000) != 0) {
              if (0 < DAT_00446438 + -1) {
                DAT_00446438 = DAT_00446438 + -1;
                return 0;
              }
              DAT_00446438 = 1;
              return 0;
            }
            DAT_00446438 = DAT_00446438 + 1;
            return (ulong)(uVar7 & 0x20000000);
          }
        }
        if ((param_4 & 0xffff) != 0) {
          uVar13 = 0;
          do {
            lVar10 = 0;
            if (0 < lVar3) {
              do {
                FUN_004060a0();
                lVar10 = lVar10 + 1;
              } while (lVar10 != lVar3);
            }
            uVar13 = uVar13 + 1;
          } while ((uVar7 & 0xffff) != uVar13);
        }
        goto LAB_004073f8;
      }
      if (param_2 - 0x111 < 2) {
        if ((param_3 & 0xfffffffffffffff0) == 0x10) {
          FUN_00402ca2(param_1,&DAT_004177e0,L"Conway\'s Game of Life",0x40);
          return 0;
        }
        if ((param_3 & 0xfffffffffffffff0) == 0x20) {
          FUN_00406fa0();
          return 0;
        }
      }
    }
  }
switchD_004072df_caseD_203:
  uVar2 = FUN_00402c0f(param_1);
  return uVar2;
}



void FUN_00407850(int param_1,byte param_2)

{
  undefined8 uVar1;
  undefined local_48 [40];
  
  if (*(int *)(&DAT_00446488 + (ulong)param_2 * 4) != param_1) {
    FUN_004068a0(&DAT_00417041,2);
    uVar1 = FUN_00412600(((uint)param_2 + (uint)param_2 * 4) * 2 + 0x26,local_48);
    FUN_004068a0(local_48,uVar1);
    FUN_004068a0(&DAT_00417044,3);
    uVar1 = FUN_00412600((long)param_1,local_48);
    FUN_004068a0(local_48,uVar1);
    FUN_004068a0(&DAT_0041705e,1);
    *(int *)(&DAT_00446488 + (ulong)param_2 * 4) = param_1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004078f0(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 extraout_RDX;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong local_60;
  
  DAT_004463e0 = 0;
  _DAT_00446488 = 0xffffffffffffffff;
  FUN_004068a0(&DAT_00417048,3);
  uVar19 = DAT_00446480;
  lVar10 = CONCAT44(DAT_00446440._4_4_,(undefined4)DAT_00446440);
  if (lVar10 == 0) {
    FUN_00407850((-(uint)(DAT_004464a4 == '\0') & 0xffffffe9) + 0xff,1);
    FUN_00407850((-(uint)(DAT_004464a4 == '\0') & 0x17) + 0xe8,0);
    uVar17 = DAT_00446478;
    uVar7 = DAT_00446470;
    uVar19 = DAT_00446468;
    uVar23 = DAT_00446480;
    if ((long)DAT_00446480 < (long)DAT_00446478) {
      do {
        if ((long)uVar7 < (long)uVar19) {
          uVar21 = uVar7;
          do {
            while ((((long)uVar23 < 0 || ((long)DAT_00446450 <= (long)uVar23)) ||
                   (((long)uVar21 < 0 || ((long)DAT_00446448 <= (long)uVar21))))) {
              FUN_004068a0(".",1);
LAB_004079d7:
              uVar21 = uVar21 + 1;
              if (uVar21 == uVar19) goto LAB_00407a50;
            }
            if ((*(ulong *)(DAT_00446408 +
                           (((long)DAT_00446448 >> 3) * ((long)uVar23 >> 3) + ((long)uVar21 >> 3)) *
                           8) >> ((uint)uVar21 & 7 | (int)uVar23 * 8 & 0x38U) & 1) == 0) {
              FUN_004068a0(" ",1);
              goto LAB_004079d7;
            }
            uVar21 = uVar21 + 1;
            FUN_004068a0(&DAT_0041704c,3);
          } while (uVar21 != uVar19);
        }
LAB_00407a50:
        uVar23 = uVar23 + 1;
      } while (uVar23 != uVar17);
    }
  }
  else {
    local_60 = DAT_00446478;
    uVar7 = DAT_00446478 + 0xf & 0xfffffffffffffff0;
    uVar23 = DAT_00446480 & 0xfffffffffffffff0;
    uVar21 = DAT_00446470 & 0xfffffffffffffff0;
    uVar17 = DAT_00446468 + 0xf & 0xfffffffffffffff0;
    lVar20 = uVar7 - uVar23;
    lVar11 = uVar17 - uVar21;
    lVar2 = FUN_0040b6fb(lVar20 * lVar11);
    lVar18 = DAT_00446408;
    if (lVar2 != 0) {
      uVar22 = uVar23;
      if ((long)uVar23 < 0) {
        uVar22 = 0;
      }
      if ((long)DAT_00446450 <= (long)uVar7) {
        uVar7 = DAT_00446450;
      }
      if ((long)uVar22 < (long)uVar7) {
        if ((long)DAT_00446448 < (long)uVar17) {
          uVar17 = DAT_00446448;
        }
        lVar8 = (long)DAT_00446448 >> 3;
        uVar3 = 0;
        if (-1 < (long)uVar21) {
          uVar3 = uVar21;
        }
        lVar16 = ((uVar22 - uVar23) * lVar11 - uVar21) + lVar2;
        do {
          if ((long)uVar3 < (long)uVar17) {
            uVar12 = uVar3;
            do {
              lVar15 = 8;
              uVar9 = *(ulong *)(lVar18 + (((long)uVar12 >> 3) + ((long)uVar22 >> 3) * lVar8) * 8);
              pcVar4 = (char *)(uVar12 + lVar16);
              do {
                bVar5 = (byte)uVar9;
                *pcVar4 = -(bVar5 & 1);
                pcVar4[1] = -((byte)(uVar9 >> 1) & 1);
                pcVar4[2] = -((byte)(uVar9 >> 2) & 1);
                pcVar4[3] = -((byte)(uVar9 >> 3) & 1);
                pcVar4[4] = -((byte)(uVar9 >> 4) & 1);
                pcVar4[5] = -((byte)(uVar9 >> 5) & 1);
                pcVar4[6] = -((byte)(uVar9 >> 6) & 1);
                uVar9 = uVar9 >> 8;
                pcVar4[7] = (char)bVar5 >> 7;
                pcVar4 = pcVar4 + lVar11;
                lVar15 = lVar15 + -1;
              } while (lVar15 != 0);
              uVar12 = uVar12 + 8;
            } while ((long)uVar12 < (long)uVar17);
          }
          uVar22 = uVar22 + 8;
          lVar16 = lVar16 + lVar11 * 8;
        } while ((long)uVar22 < (long)uVar7);
      }
      lVar16 = 0;
      lVar18 = lVar20;
      lVar8 = lVar11;
      if (0 < lVar10) {
        do {
          FUN_00408250(lVar20,lVar11,lVar2,lVar18,lVar8);
          FUN_004082b0(lVar20,lVar11,lVar2);
          lVar16 = lVar16 + 1;
          lVar18 = lVar18 >> 1;
          lVar8 = lVar8 >> 1;
        } while (lVar16 < CONCAT44(DAT_00446440._4_4_,(undefined4)DAT_00446440));
        local_60 = DAT_00446478;
        uVar19 = DAT_00446480;
      }
      if ((long)uVar19 < (long)local_60) {
        do {
          if ((long)DAT_00446470 < (long)DAT_00446468) {
            uVar7 = DAT_00446470;
            do {
              if (((((long)uVar19 < 0) || ((long)DAT_00446450 <= (long)uVar19)) || ((long)uVar7 < 0)
                  ) || ((long)DAT_00446448 <= (long)uVar7)) {
                FUN_00407850((-(uint)(DAT_004464a4 == '\0') & 0xffffffe9) + 0xff,1);
                FUN_00407850((-(uint)(DAT_004464a4 == '\0') & 0x17) + 0xe8,0);
                FUN_004068a0();
              }
              else {
                bVar6 = (byte)(undefined4)DAT_00446440;
                lVar10 = ((long)(uVar7 - uVar21) >> (bVar6 & 0x3f)) + lVar2;
                bVar5 = *(byte *)(lVar10 + ((long)(uVar19 - uVar23) >> (bVar6 & 0x3f)) * lVar11);
                uVar13 = (uint)bVar5;
                if ((1 << (bVar6 & 0x3f)) + uVar19 < DAT_00446478) {
                  bVar6 = *(byte *)(lVar10 + ((long)((uVar19 + 1) - uVar23) >> (bVar6 & 0x3f)) *
                                             lVar11);
                  bVar5 = bVar5 | bVar6;
                }
                else {
                  bVar6 = 0;
                }
                if (bVar5 == 0) {
                  FUN_00407850((-(uint)(DAT_004464a4 == '\0') & 0xffffffe9) + 0xff,1);
                  FUN_00407850((-(uint)(DAT_004464a4 == '\0') & 0x17) + 0xe8,0);
                  FUN_004068a0();
                }
                else {
                  uVar13 = (int)((double)uVar13 * 0.00390625 * 24.0 + 232.0) & 0xff;
                  if (DAT_004464a4 != '\0') {
                    uVar13 = 0x1e7 - uVar13 & 0xff;
                  }
                  FUN_00407850(uVar13,1);
                  uVar13 = (uint)bVar6;
                  uVar14 = (int)((double)(uint)bVar6 * 0.00390625 * 24.0 + 232.0) & 0xff;
                  if (DAT_004464a4 != '\0') {
                    uVar13 = 0x1e7 - uVar14;
                    uVar14 = uVar13 & 0xff;
                  }
                  FUN_00407850(uVar14,0,extraout_RDX,uVar13);
                  FUN_004068a0();
                }
              }
              bVar5 = (byte)(undefined4)DAT_00446440;
              uVar7 = uVar7 + (1 << (bVar5 & 0x3f));
            } while ((long)uVar7 < (long)DAT_00446468);
          }
          else {
            bVar5 = (byte)(undefined4)DAT_00446440;
          }
          uVar19 = uVar19 + (2 << (bVar5 & 0x3f));
        } while ((long)uVar19 < (long)DAT_00446478);
      }
      FUN_0040b701(lVar2);
    }
  }
  lVar10 = 0;
  FUN_004068a0(&DAT_00417054,6);
  FUN_00406d30();
  FUN_0041571a(&DAT_00446260);
  FUN_004068a0();
  iVar1 = FUN_0040a570(&DAT_00446260);
  lVar18 = DAT_00446458 - iVar1;
  if (0 < lVar18) {
    do {
      lVar10 = lVar10 + 1;
      FUN_004068a0(" ",1);
    } while (lVar18 != lVar10);
  }
  FUN_004068a0(&DAT_0041705b,4);
  FUN_00411a10(DAT_0044649c,DAT_004463e8,DAT_004463e0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00407fc0(int param_1,long param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  
  if (DAT_00447fe8 == 0) {
    DAT_00447fe8 = 1;
  }
  if ((DAT_00447fe0 == 0) && (*DAT_00447fd0 != '\0')) {
    pcVar5 = DAT_00447fd0 + 1;
    iVar4 = (int)*DAT_00447fd0;
LAB_004080fe:
    DAT_00447fd0 = pcVar5;
    _DAT_00447fe4 = iVar4;
    if (iVar4 == 0x3a) goto LAB_00408104;
  }
  else {
    DAT_00447fe0 = 0;
    pcVar1 = *(char **)(param_2 + (long)DAT_00447fe8 * 8);
    if ((param_1 <= DAT_00447fe8) || (*pcVar1 != '-')) {
LAB_00408168:
      DAT_00447fd0 = &DAT_00447fc8;
      DAT_00447fe0 = 0;
      return -1;
    }
    pcVar5 = pcVar1 + 2;
    iVar4 = (int)pcVar1[1];
    _DAT_00447fe4 = iVar4;
    if (iVar4 == 0x2d) {
      DAT_00447fd0 = pcVar5;
      if (pcVar1[2] == '\0') {
        DAT_00447fe8 = DAT_00447fe8 + 1;
        goto LAB_00408168;
      }
    }
    else {
      if (pcVar1[1] != '\0') goto LAB_004080fe;
      DAT_00447fd0 = &DAT_00447fc8;
      lVar3 = FUN_0041576b(param_3,0x2d);
      if (lVar3 == 0) {
        return -1;
      }
      _DAT_00447fe4 = 0x2d;
      pcVar5 = &DAT_00447fc8;
    }
    iVar4 = 0x2d;
  }
  lVar3 = FUN_0041576b(param_3,iVar4);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 1) != ':') {
      if (*pcVar5 == '\0') {
        DAT_00447fe8 = DAT_00447fe8 + 1;
        DAT_00447fd8 = (char *)0x0;
        return iVar4;
      }
      DAT_00447fd8 = (char *)0x0;
      return iVar4;
    }
    iVar2 = DAT_00447fe8 + 1;
    if (*pcVar5 == '\0') {
      if (param_1 <= iVar2) {
        DAT_00447fd0 = &DAT_00447fc8;
        if (*param_3 == ':') {
          DAT_00447fe8 = iVar2;
          return 0x3a;
        }
        if (DAT_00447fec == 0) {
          DAT_00447fe8 = iVar2;
          return 0x3f;
        }
        DAT_00447fe8 = iVar2;
        FUN_0040ad00(DAT_00442038,"%s: option requires an argument -- %c\n",DAT_0041c710,iVar4);
        return 0x3f;
      }
      lVar3 = (long)iVar2;
      iVar2 = DAT_00447fe8 + 2;
      pcVar5 = *(char **)(param_2 + lVar3 * 8);
    }
    DAT_00447fd8 = pcVar5;
    DAT_00447fd0 = &DAT_00447fc8;
    DAT_00447fe8 = iVar2;
    return iVar4;
  }
LAB_00408104:
  if (*pcVar5 == '\0') {
    DAT_00447fe8 = DAT_00447fe8 + 1;
  }
  if ((DAT_00447fec != 0) && (*param_3 != ':')) {
    FUN_0040ad00(DAT_00442038,"%s: illegal option -- %c\n",DAT_0041c710,iVar4);
    return 0x3f;
  }
  return 0x3f;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00408230(long param_1,ulong param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  undefined8 local_438;
  ushort local_430 [512];
  
  lVar3 = DAT_00447b50;
  if (((byte)DAT_0041c718 & 4) == 0) {
                    // WARNING: Could not recover jumptable at 0x004123ca. Too many branches
                    // WARNING: Treating indirect jump as call
    (*_DAT_0041c720)();
    return;
  }
  if (param_2 < 0x41) {
    if (param_2 == 0) {
      iVar2 = FUN_004033bc(&local_438,0,param_3);
      if (iVar2 != -1) {
        return;
      }
    }
    else {
      uVar4 = DAT_00440978 | DAT_00440968 | _DAT_00440970;
      puVar5 = local_430;
      puVar7 = (ushort *)(param_1 + 4);
      do {
        iVar2 = *(int *)(puVar7 + -2);
        cVar1 = FUN_00410c50(iVar2,2);
        if (cVar1 == '\0') {
          FUN_00402acd();
          return;
        }
        puVar6 = puVar7 + 4;
        *(undefined8 *)(puVar5 + -4) = *(undefined8 *)(lVar3 + (long)iVar2 * 0x18);
        *puVar5 = *puVar7 & uVar4;
        puVar5 = puVar5 + 8;
        puVar7 = puVar6;
      } while (puVar6 != (ushort *)(param_1 + 4) + param_2 * 4);
      iVar2 = FUN_004033bc(&local_438,param_2 & 0xffffffff,param_3);
      lVar3 = 0;
      if (iVar2 != -1) {
        do {
          *(ushort *)(param_1 + 6 + lVar3) = local_430[lVar3 + 1];
          lVar3 = lVar3 + 8;
        } while (lVar3 != param_2 * 8);
        return;
      }
    }
    FUN_00403070();
  }
  else {
    FUN_00402b21();
  }
  return;
}



long FUN_00408250(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  if ((1 < param_5) && (0 < param_4)) {
    lVar1 = 0;
    lVar2 = param_3;
    do {
      lVar1 = lVar1 + 1;
      FUN_004097e0(param_5,lVar2,&DAT_00447ff8);
      lVar2 = lVar2 + param_2;
    } while (param_4 != lVar1);
  }
  return param_3;
}


/*
Unable to decompile 'FUN_004082b0'
Cause: 
Recoverable Error: Unable to find unique hash for varnode
*/


long FUN_00408a60(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  if ((1 < param_5) && (0 < param_4)) {
    lVar1 = 0;
    lVar2 = param_3;
    do {
      lVar1 = lVar1 + 1;
      FUN_004097e0(param_5,lVar2,&DAT_00447ff0);
      lVar2 = lVar2 + param_2;
    } while (param_4 != lVar1);
  }
  return param_3;
}


/*
Unable to decompile 'FUN_00409270'
Cause: 
Recoverable Error: Unable to find unique hash for varnode
*/


// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

byte * FUN_004097e0(ulong param_1,byte *param_2,undefined *param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  undefined auVar3 [16];
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined4 *puVar24;
  byte *pbVar25;
  ulong uVar26;
  undefined auVar27 [16];
  undefined local_128;
  undefined uStack295;
  undefined uStack294;
  undefined uStack293;
  undefined uStack292;
  undefined uStack291;
  undefined uStack290;
  undefined uStack289;
  undefined uStack288;
  undefined uStack287;
  undefined uStack286;
  undefined uStack285;
  undefined uStack284;
  undefined uStack283;
  undefined uStack282;
  undefined uStack281;
  undefined local_118;
  undefined uStack279;
  undefined uStack278;
  undefined uStack277;
  undefined uStack276;
  undefined uStack275;
  undefined uStack274;
  undefined uStack273;
  undefined uStack272;
  undefined uStack271;
  undefined uStack270;
  undefined uStack269;
  undefined uStack268;
  undefined uStack267;
  undefined uStack266;
  undefined uStack265;
  undefined local_108;
  undefined uStack263;
  undefined uStack262;
  undefined uStack261;
  undefined uStack260;
  undefined uStack259;
  undefined uStack258;
  undefined uStack257;
  undefined uStack256;
  undefined uStack255;
  undefined uStack254;
  undefined uStack253;
  undefined uStack252;
  undefined uStack251;
  undefined uStack250;
  undefined uStack249;
  undefined local_f8;
  undefined uStack247;
  undefined uStack246;
  undefined uStack245;
  undefined uStack244;
  undefined uStack243;
  undefined uStack242;
  undefined uStack241;
  undefined uStack240;
  undefined uStack239;
  undefined uStack238;
  undefined uStack237;
  undefined uStack236;
  undefined uStack235;
  undefined uStack234;
  undefined uStack233;
  undefined4 local_e8;
  undefined4 uStack228;
  undefined4 uStack224;
  undefined4 uStack220;
  undefined4 local_d8;
  undefined4 uStack212;
  undefined4 uStack208;
  undefined4 uStack204;
  undefined4 local_c8;
  undefined4 uStack196;
  undefined4 uStack192;
  undefined4 uStack188;
  undefined local_b8 [16];
  undefined local_a8 [16];
  byte local_98;
  byte bStack151;
  byte bStack150;
  byte bStack149;
  byte bStack148;
  byte bStack147;
  byte bStack146;
  byte bStack145;
  char cStack144;
  char cStack143;
  char cStack142;
  char cStack141;
  char cStack140;
  char cStack139;
  char cStack138;
  char cStack137;
  undefined local_88 [16];
  undefined local_78 [4];
  short sStack116;
  short sStack114;
  short sStack112;
  short sStack110;
  short sStack108;
  short sStack106;
  undefined local_68 [4];
  short sStack100;
  short sStack98;
  short sStack96;
  short sStack94;
  short sStack92;
  short sStack90;
  undefined local_58 [4];
  short sStack84;
  short sStack82;
  short sStack80;
  short sStack78;
  short sStack76;
  short sStack74;
  undefined local_48 [4];
  short sStack68;
  short sStack66;
  short sStack64;
  short sStack62;
  short sStack60;
  short sStack58;
  
  local_128 = *param_3;
  uStack295 = param_3[1];
  local_118 = param_3[2];
  uStack279 = param_3[3];
  local_108 = param_3[4];
  uStack263 = param_3[5];
  local_f8 = param_3[6];
  uStack247 = param_3[7];
  if (7 < param_1) {
    pbVar25 = param_2 + (param_1 - 1);
    puVar24 = &local_d8;
    auVar27 = ZEXT816((ulong)*param_2) * ZEXT816(0x101010101010101);
    local_e8 = SUB164(auVar27,0);
    uStack228 = SUB164(auVar27 >> 0x20,0);
    lVar19 = SUB168(auVar27 >> 0x40,0) + (ulong)*param_2 * 0x101010101010101;
    uStack224 = (undefined4)lVar19;
    uStack220 = (undefined4)((ulong)lVar19 >> 0x20);
    auVar27 = ZEXT816((ulong)*pbVar25) * ZEXT816(0x101010101010101);
    local_d8 = SUB164(auVar27,0);
    uStack212 = SUB164(auVar27 >> 0x20,0);
    lVar19 = SUB168(auVar27 >> 0x40,0) + (ulong)*pbVar25 * 0x101010101010101;
    uStack208 = (undefined4)lVar19;
    uStack204 = (undefined4)((ulong)lVar19 >> 0x20);
    uVar26 = 0x10;
    if (param_1 < 0x11) {
      uVar26 = param_1;
    }
    auVar27 = _DAT_00418700;
    uStack294 = local_128;
    uStack293 = uStack295;
    uStack292 = local_128;
    uStack291 = uStack295;
    uStack290 = local_128;
    uStack289 = uStack295;
    uStack288 = local_128;
    uStack287 = uStack295;
    uStack286 = local_128;
    uStack285 = uStack295;
    uStack284 = local_128;
    uStack283 = uStack295;
    uStack282 = local_128;
    uStack281 = uStack295;
    uStack278 = local_118;
    uStack277 = uStack279;
    uStack276 = local_118;
    uStack275 = uStack279;
    uStack274 = local_118;
    uStack273 = uStack279;
    uStack272 = local_118;
    uStack271 = uStack279;
    uStack270 = local_118;
    uStack269 = uStack279;
    uStack268 = local_118;
    uStack267 = uStack279;
    uStack266 = local_118;
    uStack265 = uStack279;
    uStack262 = local_108;
    uStack261 = uStack263;
    uStack260 = local_108;
    uStack259 = uStack263;
    uStack258 = local_108;
    uStack257 = uStack263;
    uStack256 = local_108;
    uStack255 = uStack263;
    uStack254 = local_108;
    uStack253 = uStack263;
    uStack252 = local_108;
    uStack251 = uStack263;
    uStack250 = local_108;
    uStack249 = uStack263;
    uStack246 = local_f8;
    uStack245 = uStack247;
    uStack244 = local_f8;
    uStack243 = uStack247;
    uStack242 = local_f8;
    uStack241 = uStack247;
    uStack240 = local_f8;
    uStack239 = uStack247;
    uStack238 = local_f8;
    uStack237 = uStack247;
    uStack236 = local_f8;
    uStack235 = uStack247;
    uStack234 = local_f8;
    uStack233 = uStack247;
    FUN_004154c0(puVar24,param_2,uVar26);
    uVar26 = param_1 + 1 >> 1;
    if (uVar26 != 0) {
      uVar23 = (ulong)DAT_0041c020;
      uVar20 = 0;
      do {
        uVar21 = uVar20 + 8;
        if (param_1 < uVar20 * 2 + 0x20) {
          uVar22 = uVar20 * 2 + 0x10;
          auVar3 = ZEXT816((ulong)*pbVar25) * ZEXT816(0x101010101010101);
          local_c8 = SUB164(auVar3,0);
          uStack196 = SUB164(auVar3 >> 0x20,0);
          lVar19 = SUB168(auVar3 >> 0x40,0) + (ulong)*pbVar25 * 0x101010101010101;
          uStack192 = (undefined4)lVar19;
          uStack188 = (undefined4)((ulong)lVar19 >> 0x20);
          if (param_1 <= uVar22) goto LAB_00409a5d;
          FUN_004154c0(&local_c8,param_2 + uVar22,param_1 + uVar21 * -2);
          if ((uVar23 & 0x200) != 0) goto LAB_00409a6a;
LAB_00409bd8:
          FUN_00415200(local_b8,puVar24,&local_e8,0xd);
          puVar24 = &local_d8;
          FUN_00415200(local_a8,puVar24,&local_e8,0xf);
          FUN_00415200(&local_98,&local_c8,puVar24,1);
          FUN_00415200(local_88,&local_c8,puVar24,3);
          FUN_00415240(local_78,local_b8,&local_128);
          FUN_00415240(local_68,local_a8,&local_118);
          FUN_00415240(local_58,&local_98,&local_108);
          FUN_00415240(local_48,local_88,&local_f8);
          uVar23 = (ulong)DAT_0041c020;
          auVar27 = _DAT_00418700;
        }
        else {
          puVar1 = (undefined4 *)(param_2 + uVar21 * 2);
          local_c8 = *puVar1;
          uStack196 = puVar1[1];
          uStack192 = puVar1[2];
          uStack188 = puVar1[3];
LAB_00409a5d:
          if ((uVar23 & 0x200) == 0) goto LAB_00409bd8;
LAB_00409a6a:
          local_b8 = SUB2016(CONCAT416(uStack204,
                                       CONCAT412(uStack208,
                                                 CONCAT48(uStack212,CONCAT44(local_d8,uStack220))))
                             >> 8,0);
          local_a8 = SUB2016(CONCAT416(uStack204,
                                       CONCAT412(uStack208,
                                                 CONCAT48(uStack212,CONCAT44(local_d8,uStack220))))
                             >> 0x18,0);
          _local_78 = pmaddubsw(local_b8,CONCAT115(uStack281,
                                                   CONCAT114(uStack282,
                                                             CONCAT113(uStack283,
                                                                       CONCAT112(uStack284,
                                                                                 CONCAT111(uStack285
                                                  ,CONCAT110(uStack286,
                                                             CONCAT19(uStack287,
                                                                      CONCAT18(uStack288,
                                                                               CONCAT17(uStack289,
                                                                                        CONCAT16(
                                                  uStack290,
                                                  CONCAT15(uStack291,
                                                           CONCAT14(uStack292,
                                                                    CONCAT13(uStack293,
                                                                             CONCAT12(uStack294,
                                                                                      CONCAT11(
                                                  uStack295,local_128))))))))))))))));
          local_88 = SUB3216(CONCAT1616(CONCAT412(uStack188,
                                                  CONCAT48(uStack192,CONCAT44(uStack196,local_c8))),
                                        CONCAT412(uStack204,
                                                  CONCAT48(uStack208,CONCAT44(uStack212,local_d8))))
                             >> 0x18,0);
          _local_68 = pmaddubsw(local_a8,CONCAT115(uStack265,
                                                   CONCAT114(uStack266,
                                                             CONCAT113(uStack267,
                                                                       CONCAT112(uStack268,
                                                                                 CONCAT111(uStack269
                                                  ,CONCAT110(uStack270,
                                                             CONCAT19(uStack271,
                                                                      CONCAT18(uStack272,
                                                                               CONCAT17(uStack273,
                                                                                        CONCAT16(
                                                  uStack274,
                                                  CONCAT15(uStack275,
                                                           CONCAT14(uStack276,
                                                                    CONCAT13(uStack277,
                                                                             CONCAT12(uStack278,
                                                                                      CONCAT11(
                                                  uStack279,local_118))))))))))))))));
          _local_58 = pmaddubsw(SUB2016(CONCAT416(local_c8,CONCAT412(uStack204,
                                                                     CONCAT48(uStack208,
                                                                              CONCAT44(uStack212,
                                                                                       local_d8))))
                                        >> 8,0),
                                CONCAT115(uStack249,
                                          CONCAT114(uStack250,
                                                    CONCAT113(uStack251,
                                                              CONCAT112(uStack252,
                                                                        CONCAT111(uStack253,
                                                                                  CONCAT110(
                                                  uStack254,
                                                  CONCAT19(uStack255,
                                                           CONCAT18(uStack256,
                                                                    CONCAT17(uStack257,
                                                                             CONCAT16(uStack258,
                                                                                      CONCAT15(
                                                  uStack259,
                                                  CONCAT14(uStack260,
                                                           CONCAT13(uStack261,
                                                                    CONCAT12(uStack262,
                                                                             CONCAT11(uStack263,
                                                                                      local_108)))))
                                                  )))))))))));
          _local_48 = pmaddubsw(local_88,CONCAT115(uStack233,
                                                   CONCAT114(uStack234,
                                                             CONCAT113(uStack235,
                                                                       CONCAT112(uStack236,
                                                                                 CONCAT111(uStack237
                                                  ,CONCAT110(uStack238,
                                                             CONCAT19(uStack239,
                                                                      CONCAT18(uStack240,
                                                                               CONCAT17(uStack241,
                                                                                        CONCAT16(
                                                  uStack242,
                                                  CONCAT15(uStack243,
                                                           CONCAT14(uStack244,
                                                                    CONCAT13(uStack245,
                                                                             CONCAT12(uStack246,
                                                                                      CONCAT11(
                                                  uStack247,local_f8))))))))))))))));
        }
        uStack220 = uStack204;
        uStack224 = uStack208;
        uStack228 = uStack212;
        local_e8 = local_d8;
        local_d8 = local_c8;
        uStack212 = uStack196;
        uStack208 = uStack192;
        uStack204 = uStack188;
        _local_78 = psraw(CONCAT214(sStack106 + SUB162(auVar27 >> 0x70,0) + sStack90 + sStack74 +
                                    sStack58,CONCAT212(sStack108 + SUB162(auVar27 >> 0x60,0) +
                                                       sStack92 + sStack76 + sStack60,
                                                       CONCAT210(sStack110 +
                                                                 SUB162(auVar27 >> 0x50,0) +
                                                                 sStack94 + sStack78 + sStack62,
                                                                 CONCAT28(sStack112 +
                                                                          SUB162(auVar27 >> 0x40,0)
                                                                          + sStack96 + sStack80 +
                                                                          sStack64,CONCAT26(
                                                  sStack114 + SUB162(auVar27 >> 0x30,0) + sStack98 +
                                                  sStack82 + sStack66,
                                                  CONCAT24(sStack116 + SUB162(auVar27 >> 0x20,0) +
                                                           sStack100 + sStack84 + sStack68,
                                                           CONCAT22(local_78._2_2_ +
                                                                    SUB162(auVar27 >> 0x10,0) +
                                                                    local_68._2_2_ + local_58._2_2_
                                                                    + local_48._2_2_,
                                                                    local_78._0_2_ +
                                                                    SUB162(auVar27,0) +
                                                                    local_68._0_2_ + local_58._0_2_
                                                                    + local_48._0_2_))))))),5);
        sVar4 = SUB162(_local_78,0);
        local_98 = (0 < sVar4) * (sVar4 < 0xff) * SUB161(_local_78,0) - (0xff < sVar4);
        sVar5 = SUB162(_local_78 >> 0x10,0);
        cVar12 = SUB161(_local_78 >> 0x10,0);
        bStack151 = (0 < sVar5) * (sVar5 < 0xff) * cVar12 - (0xff < sVar5);
        sVar6 = SUB162(_local_78 >> 0x20,0);
        cVar13 = SUB161(_local_78 >> 0x20,0);
        bStack150 = (0 < sVar6) * (sVar6 < 0xff) * cVar13 - (0xff < sVar6);
        sVar7 = SUB162(_local_78 >> 0x30,0);
        cVar14 = SUB161(_local_78 >> 0x30,0);
        bStack149 = (0 < sVar7) * (sVar7 < 0xff) * cVar14 - (0xff < sVar7);
        sVar8 = SUB162(_local_78 >> 0x40,0);
        cVar15 = SUB161(_local_78 >> 0x40,0);
        bStack148 = (0 < sVar8) * (sVar8 < 0xff) * cVar15 - (0xff < sVar8);
        sVar9 = SUB162(_local_78 >> 0x50,0);
        cVar16 = SUB161(_local_78 >> 0x50,0);
        bStack147 = (0 < sVar9) * (sVar9 < 0xff) * cVar16 - (0xff < sVar9);
        sVar10 = SUB162(_local_78 >> 0x60,0);
        cVar17 = SUB161(_local_78 >> 0x60,0);
        bStack146 = (0 < sVar10) * (sVar10 < 0xff) * cVar17 - (0xff < sVar10);
        sVar11 = SUB162(_local_78 >> 0x70,0);
        cVar18 = SUB161(_local_78 >> 0x70,0);
        bStack145 = (0 < sVar11) * (sVar11 < 0xff) * cVar18 - (0xff < sVar11);
        cStack144 = (0 < sVar4) * (sVar4 < 0xff) * SUB161(_local_78,0) - (0xff < sVar4);
        cStack143 = (0 < sVar5) * (sVar5 < 0xff) * cVar12 - (0xff < sVar5);
        cStack142 = (0 < sVar6) * (sVar6 < 0xff) * cVar13 - (0xff < sVar6);
        cStack141 = (0 < sVar7) * (sVar7 < 0xff) * cVar14 - (0xff < sVar7);
        cStack140 = (0 < sVar8) * (sVar8 < 0xff) * cVar15 - (0xff < sVar8);
        cStack139 = (0 < sVar9) * (sVar9 < 0xff) * cVar16 - (0xff < sVar9);
        cStack138 = (0 < sVar10) * (sVar10 < 0xff) * cVar17 - (0xff < sVar10);
        cStack137 = (0 < sVar11) * (sVar11 < 0xff) * cVar18 - (0xff < sVar11);
        pbVar2 = param_2 + uVar20;
        *pbVar2 = local_98;
        pbVar2[1] = bStack151;
        pbVar2[2] = bStack150;
        pbVar2[3] = bStack149;
        pbVar2[4] = bStack148;
        pbVar2[5] = bStack147;
        pbVar2[6] = bStack146;
        pbVar2[7] = bStack145;
        uVar20 = uVar21;
      } while (uVar21 < uVar26);
    }
  }
  return param_2;
}



undefined8 FUN_00409ce0(undefined4 param_1,short *param_2)

{
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88 [3];
  short local_7a;
  short local_78;
  short local_76;
  short local_74;
  
  cVar2 = FUN_00409d70();
  if (cVar2 != '\0') {
    puVar6 = (undefined *)FUN_004108b0("COLUMNS");
    if (puVar6 == (undefined *)0x0) {
      puVar6 = &DAT_00418720;
    }
    sVar3 = FUN_004142f0(puVar6,0,0);
    param_2[1] = sVar3;
    puVar6 = (undefined *)FUN_004108b0(&DAT_0041872e);
    if (puVar6 == (undefined *)0x0) {
      puVar6 = &DAT_00418723;
    }
    sVar3 = FUN_004142f0(puVar6,0,0);
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = sVar3;
    return 0;
  }
  if (((byte)DAT_0041c718 & 4) == 0) {
    uVar7 = FUN_00412380(param_1,DAT_004409f0,param_2);
    return uVar7;
  }
  puVar8 = &local_94;
  local_90 = 1;
  local_94 = param_1;
  cVar2 = FUN_00410c50(param_1,1);
  if (cVar2 != '\0') goto LAB_00405243;
  do {
    cVar2 = FUN_00410c50(param_1,4);
    if (cVar2 != '\0') goto LAB_00405243;
    FUN_00402acd();
    while( true ) {
      puVar8 = puVar8 + 1;
      if (local_88 == puVar8) {
        return 0xffffffff;
      }
      param_1 = *puVar8;
      cVar2 = FUN_00410c50(param_1,1);
      if (cVar2 == '\0') break;
LAB_00405243:
      iVar4 = (*DAT_0041b120)();
      if (iVar4 == 0) {
        FUN_00402bb4();
      }
      else {
        lVar5 = FUN_0041561f(local_88,0,0x60);
        local_88[0] = 0x60;
        uVar7 = FUN_00405f4b(*(undefined8 *)(DAT_00447b50 + lVar5 * 0x18),local_88);
        if ((int)uVar7 != 0) {
          *(undefined4 *)(param_2 + 2) = 0;
          param_2[1] = (local_76 + 1) - local_7a;
          *param_2 = (local_74 + 1) - local_78;
          return 0;
        }
        if ((DAT_00447f9c & 8) != 0) {
          param_2[1] = (short)DAT_00447f90;
          uVar1 = DAT_00447f94;
          *(undefined4 *)(param_2 + 2) = 0;
          *param_2 = (short)uVar1;
          return uVar7;
        }
        FUN_004162a0();
      }
    }
  } while( true );
}



bool FUN_00409d70(void)

{
  byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  
  bVar7 = 0;
  pbVar1 = (byte *)FUN_004108b0(&DAT_00418733);
  bVar6 = false;
  bVar4 = false;
  bVar5 = pbVar1 == (byte *)0x0;
  if (!bVar5) {
    lVar2 = 5;
    pbVar3 = &DAT_00418738;
    do {
      if (lVar2 == 0) break;
      lVar2 = lVar2 + -1;
      bVar4 = *pbVar1 < *pbVar3;
      bVar5 = *pbVar1 == *pbVar3;
      pbVar1 = pbVar1 + (ulong)bVar7 * -2 + 1;
      pbVar3 = pbVar3 + (ulong)bVar7 * -2 + 1;
    } while (bVar5);
    bVar6 = (!bVar4 && !bVar5) == bVar4;
  }
  return bVar6;
}



// WARNING: Removing unreachable block (ram,0x0040a060)
// WARNING: Could not reconcile some variable overlaps

int FUN_00409db0(undefined4 param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  char **local_cd0;
  undefined local_cb8;
  char local_cb7;
  undefined local_cb4 [8];
  undefined4 local_cac;
  char *local_ca8 [3];
  long local_c90;
  char *apcStack3208 [124];
  undefined local_8a8 [2168];
  
  local_c90 = FUN_0040f050();
  if ((local_c90 != 0) && (lVar3 = FUN_0040a4d0(), lVar3 != 0)) {
    local_ca8[0] = "addr2line";
    local_ca8[1] = &DAT_00418771;
    local_ca8[2] = "-pCife";
    if (param_2 == (long *)0x0) {
      uVar7 = 4;
    }
    else {
      lVar9 = 0;
      lVar6 = 0;
      uVar7 = 4;
      do {
        lVar1 = param_2[1];
        while (lVar1 == 0) {
          lVar9 = lVar9 + -1;
          lVar1 = *(long *)(lRam0000000000000010 + 0x18 + lVar9 * 0x20);
        }
        uVar7 = uVar7 + 1;
        *(undefined **)(local_cb4 + uVar7 * 8 + 4) = local_8a8 + lVar6;
        iVar2 = FUN_00413ac0(local_8a8 + lVar6,0x11,&DAT_0041877b,lVar1 + -1);
        param_2 = (long *)*param_2;
        lVar6 = lVar6 + (iVar2 + 1);
      } while ((param_2 != (long *)0x0) && (uVar7 < 0x7f));
    }
    local_cd0 = local_ca8;
    local_ca8[uVar7] = (char *)0x0;
    local_cb4 = 0xffffffff00000000;
    local_cac = 2;
    iVar2 = FUN_0040b0c0(0,local_cb4,lVar3,local_cd0,DAT_00448018);
    if (iVar2 != -1) {
LAB_00409f68:
      lVar3 = FUN_00410f70(local_cb4._4_4_,local_8a8,0x86f);
      puVar8 = local_8a8;
      if (0 < lVar3) {
        do {
          puVar5 = (undefined *)FUN_0040b560(puVar8,lVar3," (discriminator ",0xf);
          if (puVar5 == (undefined *)0x0) {
LAB_0040a006:
            FUN_00411a10(param_1,puVar8,lVar3);
            break;
          }
          puVar4 = (undefined *)FUN_00415783(puVar5,10,lVar3 - ((long)puVar5 - (long)puVar8));
          if (puVar4 == (undefined *)0x0) goto LAB_0040a006;
          if (puVar5 < puVar4) {
            puVar4 = puVar4 + -(ulong)(puVar4[-1] == '\r');
          }
          FUN_00411a10(param_1,puVar8,(long)puVar5 - (long)puVar8);
          lVar3 = lVar3 - ((long)puVar4 - (long)puVar8);
          puVar8 = puVar4;
        } while (lVar3 != 0);
        goto LAB_00409f68;
      }
      FUN_00410160(local_cb4._4_4_);
      iVar2 = FUN_004119f0(iVar2,&local_cb8,0);
      if (iVar2 != -1) {
        return -(uint)(local_cb7 != '\0');
      }
    }
  }
  return -1;
}



void FUN_0040a090(ulong param_1,undefined *param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if (param_2 == (undefined *)0x0) {
    param_2 = &stack0xfffffffffffffff8;
  }
  if (DAT_00448025 != '\0') {
    return;
  }
  DAT_00448025 = 1;
  iVar2 = FUN_00409db0(param_1,param_2);
  if (iVar2 == -1) {
    uVar1 = FUN_0040a470();
    FUN_0040a100(param_1 & 0xffffffff,param_2,uVar1);
  }
  DAT_00448025 = 0;
  return;
}



// WARNING: Removing unreachable block (ram,0x0040a38b)

undefined8 FUN_0040a100(undefined4 param_1,long *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  undefined2 *puVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  undefined local_158 [32];
  undefined local_138 [264];
  
  if (param_3 == 0) {
LAB_0040a3e0:
    uVar4 = 0xffffffff;
  }
  else {
    if ((param_2 != (long *)0x0) ||
       (param_2 = (long *)&stack0xfffffffffffffff8, (undefined *)register0x00000020 != &DAT_00000008
       )) {
      lVar14 = 0;
      do {
        lVar5 = param_2[1];
        while (lVar5 == 0) {
          lVar14 = lVar14 + -1;
          lVar5 = *(long *)(lRam0000000000000010 + 0x18 + lVar14 * 0x20);
        }
        lVar3 = FUN_00412530(param_2,local_158,0x30);
        puVar7 = local_138 + lVar3;
        FUN_004154c0(local_138,local_158,lVar3);
        *puVar7 = 0x20;
        puVar7 = puVar7 + 1;
        uVar4 = FUN_00412530(lVar5);
        lVar3 = FUN_004154c0(puVar7,local_158,uVar4);
        puVar7 = puVar7 + lVar3;
        *puVar7 = 0x20;
        uVar12 = *(ulong *)(param_3 + 0x20);
        if (((uVar12 == 0) || (lVar5 < 0x400000)) || (0x449000 < lVar5)) {
          puVar11 = (undefined2 *)(puVar7 + 8);
          *(undefined8 *)(puVar7 + 1) = 0x4e574f4e4b4e55;
        }
        else {
          lVar3 = *(long *)(param_3 + 0x28);
          uVar8 = 0;
          iVar10 = ~(uint)lVar3 + (int)lVar5;
          uVar6 = uVar12;
          while (uVar9 = uVar6, uVar8 < uVar9) {
            uVar6 = uVar9 + uVar8 >> 1;
            if (*(int *)(param_3 + 0x40 + uVar6 * 8) < iVar10) {
              uVar8 = uVar6 + 1;
              uVar6 = uVar9;
            }
          }
          iVar2 = 0;
          if ((uVar8 != 0) &&
             ((iVar2 = (int)uVar8, uVar12 == uVar8 ||
              (iVar10 < *(int *)(param_3 + 0x40 + uVar8 * 8))))) {
            iVar2 = iVar2 + -1;
          }
          lVar1 = param_3 + (long)iVar2 * 8;
          puVar7 = (undefined *)
                   FUN_00414ab0(puVar7 + 1,
                                (ulong)*(uint *)(lVar1 + 0x44) + *(long *)(param_3 + 0x38));
          uVar12 = (lVar5 - lVar3) - (ulong)*(uint *)(lVar1 + 0x40);
          if ((long)uVar12 < 0) {
            *puVar7 = 0x2d;
LAB_0040a3bb:
            puVar13 = puVar7 + 3;
            *(undefined2 *)(puVar7 + 1) = 0x7830;
          }
          else {
            *puVar7 = 0x2b;
            puVar13 = puVar7 + 1;
            if (uVar12 != 0) goto LAB_0040a3bb;
          }
          uVar4 = FUN_00412630((uVar12 ^ (long)uVar12 >> 0x3f) - ((long)uVar12 >> 0x3f),local_158);
          lVar5 = FUN_004154c0(puVar13,local_158,uVar4);
          puVar11 = (undefined2 *)(puVar13 + lVar5);
        }
        *puVar11 = 0xa0d;
        lVar5 = FUN_00411a10(param_1,local_138,(undefined *)((long)puVar11 + (2 - (long)local_138)))
        ;
        if (lVar5 == -1) goto LAB_0040a3e0;
        param_2 = (long *)*param_2;
      } while (param_2 != (long *)0x0);
    }
    uVar4 = 0;
  }
  return uVar4;
}



void FUN_0040a3f0(void)

{
  byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (DAT_00448027 != '\0') {
    return;
  }
  if (DAT_00448026 != '\0') {
    DAT_00448027 = 1;
    return;
  }
  pbVar1 = (byte *)FUN_004108b0(&DAT_00418733);
  bVar4 = false;
  bVar5 = pbVar1 == (byte *)0x0;
  if (bVar5) {
    DAT_00448026 = (byte)(DAT_0041c718 >> 3) & 1;
  }
  else {
    lVar2 = 5;
    pbVar3 = &DAT_00418738;
    do {
      if (lVar2 == 0) break;
      lVar2 = lVar2 + -1;
      bVar4 = *pbVar1 < *pbVar3;
      bVar5 = *pbVar1 == *pbVar3;
      pbVar1 = pbVar1 + (ulong)bVar6 * -2 + 1;
      pbVar3 = pbVar3 + (ulong)bVar6 * -2 + 1;
    } while (bVar5);
    DAT_00448026 = (!bVar4 && !bVar5) != bVar4;
  }
  DAT_00448027 = 1;
  return;
}



long FUN_0040a470(void)

{
  long lVar1;
  
  if (DAT_00448008 == '\0') {
    DAT_00448008 = 1;
    lVar1 = FUN_0040f050();
    if ((lVar1 != 0) && (DAT_00448000 = FUN_0040f5e0(lVar1), DAT_00448000 != 0)) {
      FUN_0040ede0(FUN_0040ed90,&DAT_00448000,0);
    }
    return DAT_00448000;
  }
  return DAT_00448000;
}



undefined8 FUN_0040a4d0(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined local_118 [256];
  
  pcVar2 = (char *)FUN_004108b0("ADDR2LINE");
  if (pcVar2 == (char *)0x0) {
    lVar4 = FUN_00410390("addr2line",local_118);
    if (lVar4 != 0) {
      uVar3 = FUN_0040b7a0(lVar4);
      return uVar3;
    }
  }
  else if (*pcVar2 != '\0') {
    iVar1 = FUN_004100e0(pcVar2,DAT_00440778);
    if (iVar1 != -1) {
      uVar3 = FUN_0040b7a0(pcVar2);
      return uVar3;
    }
  }
  return 0;
}



void FUN_0040a570(undefined8 param_1)

{
  FUN_0040a580(param_1,0xffffffffffffffff);
  return;
}



int FUN_0040a580(byte *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  int iVar7;
  
  if (param_2 == 0) {
    return 0;
  }
  pbVar4 = param_1 + 1;
  iVar7 = 0;
  param_2 = param_2 + -1;
  uVar2 = (uint)*param_1;
  if (*param_1 == 0) {
    return 0;
  }
  do {
    while ((lVar5 = param_2 + -1, uVar2 - 0x20 < 0x5f || (uVar2 == 9))) {
      iVar7 = iVar7 + 1;
      if (param_2 == 0) {
        return iVar7;
      }
LAB_0040a679:
      uVar2 = (uint)*pbVar4;
      if (*pbVar4 == 0) {
        return iVar7;
      }
      pbVar4 = pbVar4 + 1;
      param_2 = lVar5;
    }
    if (uVar2 == 0x1b) {
      if (param_2 == 0) {
        return iVar7;
      }
      bVar1 = *pbVar4;
joined_r0x0040a71e:
      if (bVar1 == 0) {
        return iVar7;
      }
      pbVar6 = pbVar4 + 1;
      param_2 = lVar5 + -1;
      if (bVar1 == 0x5b) {
        if (lVar5 == 0) {
          return iVar7;
        }
        bVar1 = *pbVar6;
        pbVar6 = pbVar4 + 2;
        lVar5 = param_2;
        while( true ) {
          if (bVar1 == 0) {
            return iVar7;
          }
          param_2 = lVar5 + -1;
          if (0xf < bVar1 - 0x30) break;
          if (param_2 == -1) {
            return iVar7;
          }
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          lVar5 = param_2;
        }
        if (lVar5 == 0) {
          return iVar7;
        }
        bVar1 = *pbVar6;
        goto joined_r0x0040a6dd;
      }
      if (bVar1 - 0x20 < 0x10) break;
      if (lVar5 == 0) {
        return iVar7;
      }
      bVar1 = *pbVar6;
      pbVar4 = pbVar4 + 2;
    }
    else {
      if (uVar2 < 0xc0) {
        if (param_2 == 0) {
          return iVar7;
        }
        goto LAB_0040a679;
      }
      if (uVar2 < 0xfc) {
        iVar3 = 0x1f;
        if ((uVar2 ^ 0xff) != 0) {
          for (; (uVar2 ^ 0xff) >> iVar3 == 0; iVar3 = iVar3 + -1) {
          }
        }
        iVar3 = 6 - iVar3;
        if (param_2 == 0) {
          return iVar7;
        }
        pbVar6 = pbVar4 + 1;
        bVar1 = *pbVar4;
        param_2 = lVar5;
        if (bVar1 == 0) {
          return iVar7;
        }
LAB_0040a62c:
        pbVar4 = pbVar6 + (iVar3 - 1);
        lVar5 = param_2;
        while ((param_2 = lVar5 + -1, ((int)(char)bVar1 & 0xc0U) == 0x80 && (pbVar4 != pbVar6))) {
          if (param_2 == -1) {
            return iVar7;
          }
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          lVar5 = param_2;
          if (bVar1 == 0) {
            return iVar7;
          }
        }
      }
      else {
        if (param_2 == 0) {
          return iVar7;
        }
        if (*pbVar4 == 0) {
          return iVar7;
        }
        if (((int)(char)*pbVar4 & 0xc0U) == 0x80) {
          param_2 = param_2 + -2;
          if (lVar5 == 0) {
            return iVar7;
          }
          pbVar6 = pbVar4 + 2;
          bVar1 = pbVar4[1];
          if (bVar1 == 0) {
            return iVar7;
          }
          iVar3 = 4;
          goto LAB_0040a62c;
        }
        pbVar6 = pbVar4 + 1;
        param_2 = param_2 + -2;
      }
      iVar3 = FUN_0040a810();
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      iVar7 = iVar7 + iVar3;
      if (lVar5 == 0) {
        return iVar7;
      }
      bVar1 = *pbVar6;
joined_r0x0040a6dd:
      pbVar4 = pbVar6 + 1;
    }
    uVar2 = (uint)bVar1;
    if (bVar1 == 0) {
      return iVar7;
    }
  } while( true );
  if (param_2 == -1) {
    return iVar7;
  }
  bVar1 = *pbVar6;
  lVar5 = param_2;
  pbVar4 = pbVar6;
  goto joined_r0x0040a71e;
}



int FUN_0040a810(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    if ((param_1 - 0x7f < 0x21) || (param_1 < 0x20)) {
      iVar1 = -1;
    }
    else {
      iVar1 = 1;
      if (-1 < (int)param_1) {
        if ((param_1 < 0xe0200) &&
           (((byte)(&DAT_0041c728)[(int)param_1 >> 3] >> (param_1 & 7) & 1) != 0)) {
          return 0;
        }
        iVar1 = 1;
        if (param_1 < 0x40000) {
          return ((int)(uint)(byte)(&DAT_00438768)[(int)param_1 >> 3] >> ((byte)param_1 & 7) & 1U) +
                 1;
        }
      }
    }
  }
  return iVar1;
}



undefined8 FUN_0040a890(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long local_20 [2];
  
  if (param_1 != 0) {
    local_20[0] = param_1;
    FUN_0040aa40();
    FUN_0040a950(local_20[0]);
    if (*(int *)(local_20[0] + 0x24) == 0) {
      FUN_0040f140(local_20[0] + 0x18);
      cVar1 = *(char *)(local_20[0] + 1);
      *(undefined4 *)(local_20[0] + 8) = 0xffffffff;
    }
    else {
      cVar1 = *(char *)(local_20[0] + 1);
      *(undefined4 *)(local_20[0] + 8) = 0xffffffff;
    }
    if (cVar1 == '\0') {
      iVar2 = FUN_0040ed70(local_20[0] + 0xc);
      iVar3 = DAT_00448020;
      if (iVar2 == -1) {
        *(int *)(local_20[0] + 8) = DAT_00448020;
      }
      else {
        iVar3 = *(int *)(local_20[0] + 8);
      }
      if (iVar3 == -1) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0xffffffff;
        DAT_00448020 = iVar3;
      }
    }
    else {
      *(undefined4 *)(local_20[0] + 0xc) = 0xffffffff;
      uVar4 = 0;
    }
    FUN_0040f140(local_20);
    return uVar4;
  }
  return 0;
}



int FUN_0040a950(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  if (param_1 == 0) {
    if (DAT_00446660 != 0) {
      lVar3 = DAT_00446660 + -1;
      iVar4 = 0;
      do {
        if (*(long *)(DAT_00446670 + lVar3 * 8) != 0) {
          iVar2 = FUN_0040a950();
          if (iVar2 == -1) {
            return -1;
          }
          iVar4 = iVar4 + iVar2;
        }
        lVar3 = lVar3 + -1;
      } while (lVar3 != -1);
      return iVar4;
    }
  }
  else {
    if (*(int *)(param_1 + 0xc) == -1) {
      uVar1 = *(uint *)(param_1 + 0x10);
      if (uVar1 == 0) {
        return 0;
      }
      if (*(uint *)(param_1 + 0x20) <= uVar1) {
        return 0;
      }
      *(undefined *)(*(long *)(param_1 + 0x18) + (ulong)uVar1) = 0;
      return 0;
    }
    iVar4 = *(int *)(param_1 + 8);
    if (iVar4 == 0) {
      while( true ) {
        if (*(int *)(param_1 + 0x10) == 0) {
          return iVar4;
        }
        if (*(int *)(param_1 + 0x14) != 0) break;
        iVar2 = FUN_0040ade0(param_1);
        if (iVar2 != -1) {
          iVar4 = iVar4 + iVar2;
        }
        if (*(int *)(param_1 + 8) != 0) {
          return iVar4;
        }
      }
      return iVar4;
    }
  }
  return 0;
}



void FUN_0040aa40(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if (DAT_00446660 != 0) {
    plVar2 = (long *)(DAT_00446670 + -8 + DAT_00446660 * 8);
    lVar1 = DAT_00446660;
    do {
      if (*plVar2 == param_1) {
        *plVar2 = 0;
        return;
      }
      plVar2 = plVar2 + -1;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



ulong FUN_0040aa80(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x14) <= uVar1) {
    if (*(code **)(param_1 + 0x28) == (code *)0x0) {
      uVar2 = FUN_0040ad90();
      return uVar2;
    }
    uVar2 = (**(code **)(param_1 + 0x28))();
    if ((int)uVar2 == -1) {
      return uVar2;
    }
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  *(uint *)(param_1 + 0x10) = uVar1 + 1;
  return (ulong)*(byte *)(*(long *)(param_1 + 0x18) + (ulong)uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long FUN_0040aad0(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  
  bVar11 = 0;
  iVar2 = FUN_0040ac60(param_2);
  uVar4 = (long)iVar2 & _DAT_00440910;
  if (uVar4 == _DAT_00440938) {
    bVar1 = *param_1;
    if ((bVar1 != 0x2d) || (param_1[1] != 0)) {
      bVar9 = uVar4 < _DAT_00440958;
      bVar10 = uVar4 == _DAT_00440958;
      if (bVar10) {
        bVar9 = bVar1 < 0x2d;
        bVar10 = bVar1 == 0x2d;
        if (bVar10) {
          bVar9 = false;
          bVar10 = param_1[1] == 0;
          if (bVar10) goto LAB_0040ab78;
        }
        lVar3 = 0xb;
        pbVar6 = param_1;
        pbVar7 = (byte *)"/dev/stdin";
        do {
          if (lVar3 == 0) break;
          lVar3 = lVar3 + -1;
          bVar9 = *pbVar6 < *pbVar7;
          bVar10 = *pbVar6 == *pbVar7;
          pbVar6 = pbVar6 + (ulong)bVar11 * -2 + 1;
          pbVar7 = pbVar7 + (ulong)bVar11 * -2 + 1;
        } while (bVar10);
        bVar8 = false;
        bVar9 = (!bVar9 && !bVar10) == bVar9;
        if (!bVar9) goto LAB_0040ab13;
      }
      else {
        lVar3 = 0xb;
        pbVar6 = param_1;
        pbVar7 = (byte *)"/dev/stdin";
        do {
          if (lVar3 == 0) break;
          lVar3 = lVar3 + -1;
          bVar9 = *pbVar6 < *pbVar7;
          bVar10 = *pbVar6 == *pbVar7;
          pbVar6 = pbVar6 + (ulong)bVar11 * -2 + 1;
          pbVar7 = pbVar7 + (ulong)bVar11 * -2 + 1;
        } while (bVar10);
        if ((!bVar9 && !bVar10) != bVar9) goto LAB_0040ab2b;
      }
    }
    cVar5 = '\x01';
    iVar2 = FUN_0040af80(DAT_00444038);
    goto joined_r0x0040ab90;
  }
  if (_DAT_00440958 == uVar4) {
    bVar8 = *param_1 < 0x2d;
    bVar9 = *param_1 == 0x2d;
    if (bVar9) {
      bVar8 = false;
      bVar9 = param_1[1] == 0;
      if (!bVar9) goto LAB_0040ab13;
    }
    else {
LAB_0040ab13:
      lVar3 = 0xc;
      pbVar6 = param_1;
      pbVar7 = (byte *)"/dev/stdout";
      do {
        if (lVar3 == 0) break;
        lVar3 = lVar3 + -1;
        bVar8 = *pbVar6 < *pbVar7;
        bVar9 = *pbVar6 == *pbVar7;
        pbVar6 = pbVar6 + (ulong)bVar11 * -2 + 1;
        pbVar7 = pbVar7 + (ulong)bVar11 * -2 + 1;
      } while (bVar9);
      if ((!bVar8 && !bVar9) != bVar8) goto LAB_0040ab2b;
    }
LAB_0040ab78:
    cVar5 = '\x01';
    iVar2 = FUN_0040af80(DAT_00446038);
  }
  else {
LAB_0040ab2b:
    iVar2 = FUN_00410e90(param_1,(long)iVar2 & 0xffffffff,0x1b6);
    cVar5 = '\0';
  }
joined_r0x0040ab90:
  if (iVar2 == -1) {
    return 0;
  }
  lVar3 = FUN_0040aec0(iVar2,param_2);
  if (lVar3 == 0) {
    if (cVar5 != '\0') {
      return 0;
    }
    FUN_00410160(iVar2);
  }
  else {
    *(char *)(lVar3 + 1) = cVar5;
  }
  return lVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_0040ac60(char *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = (uint)DAT_00440928 | DAT_00440958;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                cVar1 = *param_1;
                param_1 = param_1 + 1;
                if (cVar1 != 'r') break;
                uVar3 = uVar3 | DAT_00440938;
              }
              if (cVar1 != 'w') break;
              uVar3 = uVar3 | uVar2 | (uint)DAT_00440950;
            }
            if (cVar1 != 'a') break;
            uVar3 = uVar3 | DAT_00440918 | uVar2;
          }
          if (cVar1 != '+') break;
          uVar3 = uVar3 | _DAT_00440940;
        }
        if (cVar1 != 'x') break;
        uVar3 = uVar3 | (uint)DAT_00440930;
      }
      if (cVar1 != 'e') break;
      uVar3 = uVar3 | (uint)DAT_00440920;
    }
  } while (cVar1 != '\0');
  return uVar3;
}



void FUN_0040ad00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined *local_c8;
  undefined *local_c0;
  undefined local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c8 = &stack0x00000008;
  local_d0 = 0x10;
  local_c0 = local_b8;
  local_cc = 0x30;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  FUN_0040ae80(param_9,param_10,&local_d0);
  return;
}



// WARNING: Removing unreachable block (ram,0x0040adb3)
// WARNING: Removing unreachable block (ram,0x0040adc8)
// WARNING: Removing unreachable block (ram,0x0040adcc)

undefined8 FUN_0040ad90(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < 1) {
    iVar1 = -1;
  }
  *(int *)(param_1 + 8) = iVar1;
  return 0xffffffffffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong FUN_0040ade0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00411a10(*(undefined4 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0x18),
                       *(undefined4 *)(param_1 + 0x10));
  if (uVar1 == 0xffffffffffffffff) {
    uVar1 = 0;
    if (DAT_00448020 != _DAT_00440818) {
      uVar1 = FUN_0040b0b0(param_1);
      return uVar1;
    }
  }
  else {
    if (*(uint *)(param_1 + 0x10) == uVar1) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      return uVar1;
    }
    uVar1 = FUN_004154c0(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x18) + uVar1,
                         *(uint *)(param_1 + 0x10) - uVar1);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - (int)uVar1;
  }
  return uVar1;
}



ulong FUN_0040ae80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 local_18;
  uint local_10;
  
  local_10 = 0;
  local_18 = param_1;
  uVar1 = FUN_00413260(&LAB_0040ae70,&local_18,param_2,param_3);
  if ((int)uVar1 != -1) {
    uVar1 = (ulong)local_10;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long FUN_0040aec0(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = FUN_0040b6fb(1,0x38);
  lVar5 = lVar3;
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0xc) = param_1;
    *(undefined **)(lVar3 + 0x28) = &LAB_0040b050;
    *(code **)(lVar3 + 0x30) = FUN_0040ade0;
    iVar1 = FUN_004023b0(param_1);
    *(bool *)lVar3 = iVar1 != 0;
    uVar2 = FUN_0040ac60(param_2);
    *(undefined4 *)(lVar3 + 0x20) = 0x1000;
    *(undefined4 *)(lVar3 + 4) = uVar2;
    lVar4 = FUN_0040b713(0x1000);
    *(long *)(lVar3 + 0x18) = lVar4;
    if (lVar4 == 0) {
      lVar5 = 0;
      FUN_0040b701(lVar3);
    }
    else if ((*(uint *)(lVar3 + 4) & _DAT_00440910) != _DAT_00440938) {
      FUN_00401fa0(lVar3);
    }
  }
  return lVar5;
}



void FUN_0040af80(long param_1)

{
  if (*(int *)(param_1 + 0xc) != -1) {
    return;
  }
  FUN_00402acd();
  return;
}



ulong FUN_0040afa0(uint param_1,char *param_2)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if (*(uint *)(param_2 + 0x20) <= uVar1) {
    uVar2 = FUN_0040ad90();
    return uVar2;
  }
  *(uint *)(param_2 + 0x10) = uVar1 + 1;
  *(char *)(*(long *)(param_2 + 0x18) + (ulong)uVar1) = (char)param_1;
  if (*(int *)(param_2 + 0x10) == *(int *)(param_2 + 0x20)) {
    pcVar3 = *(code **)(param_2 + 0x30);
    if (pcVar3 == (code *)0x0) {
      *(undefined4 *)(param_2 + 0x10) = 0;
      goto LAB_0040afeb;
    }
  }
  else if (((*param_2 != '\x02') && ((param_1 != 10 || (*param_2 != '\x01')))) ||
          (pcVar3 = *(code **)(param_2 + 0x30), pcVar3 == (code *)0x0)) goto LAB_0040afeb;
  uVar2 = (*pcVar3)();
  if ((int)uVar2 == -1) {
    return uVar2;
  }
LAB_0040afeb:
  return (ulong)(param_1 & 0xff);
}



undefined8 FUN_0040b0b0(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00448020;
  iVar2 = *(int *)(param_1 + 8);
  if (DAT_00448020 == 0) {
    DAT_00448020 = iVar1;
    if (iVar2 < 1) {
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      return 0xffffffffffffffff;
    }
  }
  else {
    if (iVar2 < 1) {
      iVar2 = DAT_00448020;
    }
    *(int *)(param_1 + 8) = iVar2;
    if (0 < iVar1) {
      DAT_00448020 = iVar1;
    }
  }
  return 0xffffffffffffffff;
}



void FUN_0040b0c0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,long *param_4)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*param_4 == 0) {
    FUN_00402b21();
  }
  else {
    local_14 = 0;
    local_10 = 1;
    local_c = 2;
    if (param_2 == (undefined4 *)0x0) {
      param_2 = &local_14;
    }
    if (((byte)DAT_0041c718 & 4) != 0) {
      FUN_00403410(param_1,param_2);
      return;
    }
    FUN_0040b110();
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps

uint FUN_0040b110(uint param_1,int *param_2,undefined *param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  undefined *local_88;
  undefined8 *local_80;
  undefined8 *local_70;
  undefined2 local_59;
  undefined local_57;
  undefined2 local_56;
  undefined local_54;
  undefined2 local_53;
  undefined local_51;
  undefined8 local_50;
  int local_48 [10];
  
  local_80 = (undefined8 *)0x0;
  cVar1 = FUN_00414880(param_3,".com");
  puVar8 = param_3;
  if ((cVar1 == '\0') && (cVar1 = FUN_00414880(param_3,&DAT_004187c3), cVar1 == '\0')) {
LAB_0040b16b:
    local_88 = param_3;
    local_70 = param_4;
    if (*param_2 != -1) goto LAB_0040b17b;
LAB_0040b2f5:
    uVar2 = FUN_004100bb();
    if (param_2[1] == -1) goto LAB_0040b30f;
LAB_0040b189:
    iVar5 = param_2[2];
  }
  else {
    local_50 = 0;
    uVar3 = FUN_004123b0(DAT_00440780,param_3,DAT_00440938,0);
    FUN_004123d0(uVar3,&local_50,8);
    FUN_00412330();
    if ((int)local_50 == 0x46715a4d) {
      bVar11 = false;
      if (local_50._4_2_ != 0x4470) goto LAB_0040b237;
    }
    else {
LAB_0040b237:
      bVar11 = true;
    }
    if (bVar11) goto LAB_0040b16b;
    if (param_4[1] == 0) {
      local_80 = (undefined8 *)FUN_0040b707();
      if (local_80 != (undefined8 *)0x0) {
        *local_80 = &DAT_004187c0;
        local_80[1] = param_3;
        lVar7 = 0x10;
        goto LAB_0040b2cd;
      }
      goto LAB_0040b16b;
    }
    puVar6 = (undefined *)0x1;
    do {
      puVar8 = puVar6;
      puVar6 = puVar8 + 1;
    } while (param_4[(long)(puVar8 + 1)] != 0);
    local_80 = (undefined8 *)FUN_0040b707();
    if (local_80 == (undefined8 *)0x0) goto LAB_0040b16b;
    *local_80 = &DAT_004187c0;
    local_80[1] = param_3;
    puVar6 = (undefined *)0x1;
    do {
      local_80[(long)(puVar6 + 1)] = param_4[(long)puVar6];
      bVar11 = puVar6 != puVar8;
      puVar6 = puVar6 + 1;
    } while (bVar11);
    lVar7 = (long)puVar8 * 8 + 0x10;
    param_3 = puVar8;
LAB_0040b2cd:
    local_70 = local_80;
    local_88 = &DAT_004187bb;
    *(undefined8 *)((long)local_80 + lVar7) = 0;
    puVar8 = param_3;
    if (*param_2 == -1) goto LAB_0040b2f5;
LAB_0040b17b:
    uVar2 = 0;
    if (param_2[1] != -1) goto LAB_0040b189;
LAB_0040b30f:
    uVar4 = FUN_004100bb();
    uVar2 = uVar2 | uVar4;
    iVar5 = param_2[2];
  }
  if (iVar5 == -1) {
    uVar4 = FUN_004100bb();
    uVar2 = uVar2 | uVar4;
  }
  if ((uVar2 == 0xffffffff) || (uVar2 = FUN_0040b4ae(), uVar2 != 0)) {
    puVar8 = (undefined *)0x0;
    goto LAB_0040b1af;
  }
  if ((param_1 & 1) != 0) {
    iVar5 = thunk_FUN_00412410();
    if ((iVar5 == -1) || (iVar5 = FUN_00412370(), iVar5 == -1)) goto LAB_0040b3c2;
    if (0 < iVar5) {
      FUN_00416001();
      do {
        FUN_00412330();
        while( true ) {
          do {
            puVar8 = puVar8 + 1;
            if (puVar8 == (undefined *)0x3) {
              if (local_80 != (undefined8 *)0x0) {
                FUN_0040b701(local_80);
              }
              return uVar2;
            }
LAB_0040b1af:
          } while (param_2[(long)puVar8] != -1);
          local_54 = 0;
          local_56 = 1;
          FUN_00412330();
          local_51 = 0;
          local_53 = 1;
          if (uVar2 == 0xffffffff) break;
          param_2[(long)puVar8] =
               local_48[(long)puVar8 * 2 + (long)*(char *)((long)&local_53 + (long)puVar8)];
        }
      } while( true );
    }
  }
  uVar9 = 0;
  do {
    iVar5 = param_2[uVar9];
    if (iVar5 == -1) {
      FUN_00412330();
      local_57 = 0;
      local_59 = 1;
      iVar5 = local_48[uVar9 * 2 + (ulong)(*(char *)((long)&local_59 + uVar9) == '\0')];
    }
    uVar10 = uVar9 & 0xffffffff;
    uVar9 = uVar9 + 1;
    FUN_00412340(iVar5,uVar10);
  } while (uVar9 != 3);
  FUN_00412350(local_88,local_70,param_5);
LAB_0040b3c2:
                    // WARNING: Subroutine does not return
  FUN_00401114();
}



ulong FUN_0040b4ae(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  uint local_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined local_130 [48];
  undefined local_100 [80];
  undefined4 local_b0 [15];
  undefined4 local_74;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  if (((byte)DAT_0041c718 & 4) != 0) {
    local_164 = FUN_00410830();
    if (local_164 != 0xffffffff) {
      iVar1 = FUN_004156ef(local_100);
      if (iVar1 == 0) {
        iVar2 = FUN_00405f18(&local_160,&local_158,&DAT_00418920,0);
        if (iVar2 == 0) {
          local_164 = FUN_004162a0();
        }
        else {
          lVar3 = FUN_00412580(local_160,local_130);
          local_130[lVar3] = 0x20;
          FUN_00412580(local_158,local_130 + lVar3 + 1);
          FUN_0040b720("_FORK",local_130,1);
          puVar4 = (undefined8 *)FUN_0041561f(local_b0,0,0x68);
          local_60 = *puVar4;
          local_b0[0] = 0x68;
          local_74 = 0x100;
          local_58 = puVar4[3];
          local_50 = puVar4[6];
          iVar2 = FUN_00403c50(*DAT_0041c370,DAT_0041c370,DAT_00448018,&DAT_00418920);
          if (iVar2 != -1) {
            FUN_00405ef5(local_160);
            FUN_00405ef5(local_148);
            puVar4 = (undefined8 *)(DAT_00447b50 + (long)(int)local_164 * 0x18);
            *(undefined4 *)(puVar4 + 2) = 3;
            *puVar4 = local_150;
            *(int *)((long)puVar4 + 0x14) = (int)DAT_00440920;
            FUN_00403710(local_158,local_100,0x40);
            FUN_00403710(local_158,&DAT_00446ee0,4);
            if (0 < DAT_00446ee0) {
              piVar6 = &DAT_00446ee8;
              do {
                FUN_00403710(local_158,piVar6,0x18);
                if ((*(byte *)(piVar6 + 5) & 2) != 0) {
                  FUN_00403710(local_158,(long)*piVar6 << 0x10,
                               (long)(piVar6[1] - *piVar6) * 0x10000 + 0x10000);
                }
                iVar1 = iVar1 + 1;
                piVar6 = piVar6 + 6;
              } while (iVar1 < DAT_00446ee0);
            }
            FUN_00403710(local_158,&DAT_0041c000,0x2d000);
            FUN_00405ef5(local_158);
          }
          FUN_0040f750("_FORK");
        }
      }
      else {
        local_164 = 0;
      }
    }
    return (ulong)local_164;
  }
  uVar5 = (ulong)DAT_00440900;
  iVar1 = DAT_00440870;
  if (DAT_00440900 != 0xffffffff) {
    if (((byte)DAT_0041c718 & 0x38) != 0) {
      syscall();
      return uVar5;
    }
    syscall();
    if ((ulong)DAT_00440900 < 0xfffffffffffff001) {
      return uVar5;
    }
    iVar1 = -DAT_00440900;
  }
  DAT_00448020 = iVar1;
  return 0xffffffffffffffff;
}



long FUN_0040b4f0(long *param_1,long *param_2,ulong *param_3,undefined2 param_4)

{
  char cVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (*param_3 <= lVar2 + 1U) {
    cVar1 = FUN_0040f180(param_1,param_3,2,1);
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
    lVar2 = *param_2;
  }
  *(undefined2 *)(*param_1 + lVar2 * 2) = param_4;
  lVar2 = *param_2;
  *param_2 = lVar2 + 1;
  return lVar2;
}



long FUN_0040b560(long param_1,ulong param_2,char *param_3,ulong param_4)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  
  if (param_2 < param_4) {
    return 0;
  }
  lVar6 = param_1;
  if (param_4 != 0) {
    uVar9 = (uint)*param_3;
    lVar4 = FUN_00415783(param_1,uVar9,param_2);
    lVar6 = lVar4;
    if (((lVar4 != 0) && (param_4 != 1)) &&
       ((param_2 = param_2 - (lVar4 - param_1), param_2 <= param_4 ||
        (iVar2 = FUN_00414960(lVar4,param_3,param_4), iVar2 != 0)))) {
      puVar5 = (undefined8 *)FUN_0040b707(param_4 * 8 + 8);
      *puVar5 = 0xffffffffffffffff;
      puVar5[1] = 0;
      if (2 < (long)param_4) {
        lVar6 = 0;
        lVar7 = 2;
        uVar3 = uVar9;
        while( true ) {
          if (param_3[lVar7 + -1] == (char)uVar3) {
            lVar6 = lVar6 + 1;
            puVar5[lVar7] = lVar6;
            lVar7 = lVar7 + 1;
          }
          else if (lVar6 < 1) {
            puVar5[lVar7] = 0;
            lVar7 = lVar7 + 1;
          }
          else {
            lVar6 = puVar5[lVar6];
          }
          if ((long)param_4 <= lVar7) break;
          uVar3 = (uint)(byte)param_3[lVar6];
        }
      }
      puVar5[param_4] = 0;
      if (0 < (long)param_2) {
        uVar10 = 0;
        lVar6 = 0;
        uVar8 = 0;
        do {
          if (*(char *)(lVar4 + lVar6) == (char)uVar9) {
            uVar8 = uVar8 + 1;
            if (param_4 == uVar8) goto LAB_0040b6b7;
LAB_0040b6ab:
            lVar6 = uVar8 + uVar10;
            uVar1 = uVar8;
          }
          else {
            uVar10 = lVar6 - puVar5[uVar8];
            uVar1 = puVar5[uVar8];
            if ((long)uVar8 < 1) goto LAB_0040b6ab;
          }
          uVar8 = uVar1;
          if ((long)param_2 <= lVar6) goto LAB_0040b6b7;
          uVar9 = (uint)(byte)param_3[uVar8];
        } while( true );
      }
      uVar10 = 0;
LAB_0040b6b7:
      FUN_0040b701();
      lVar6 = 0;
      if (uVar10 < param_2) {
        lVar6 = lVar4 + uVar10;
      }
    }
  }
  return lVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0040b6fb(void)

{
                    // WARNING: Could not recover jumptable at 0x0040b6fb. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c078)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0040b701(void)

{
                    // WARNING: Could not recover jumptable at 0x0040b701. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c080)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0040b707(void)

{
                    // WARNING: Could not recover jumptable at 0x0040b707. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c090)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0040b70d(void)

{
                    // WARNING: Could not recover jumptable at 0x0040b70d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c0b0)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0040b713(void)

{
                    // WARNING: Could not recover jumptable at 0x0040b713. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c0b8)();
  return;
}



undefined8 FUN_0040b720(undefined8 param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  
  uVar6 = param_2;
  lVar3 = FUN_0041571a();
  lVar4 = FUN_0041571a(uVar6);
  lVar5 = FUN_0040b707(lVar3 + 2 + lVar4);
  FUN_004154c0(lVar5,param_1,lVar3);
  *(undefined *)(lVar3 + lVar5) = 0x3d;
  uVar6 = FUN_004154c0((undefined *)(lVar3 + lVar5) + 1,param_2,lVar4 + 1);
  lVar3 = FUN_0041576b(uVar6,0x3d);
  plVar1 = DAT_00448018;
  if (lVar3 == 0) {
LAB_004029f1:
    FUN_0040b701(uVar6);
    uVar6 = FUN_00402b21();
    return uVar6;
  }
  lVar4 = *DAT_00448018;
  plVar9 = DAT_00448018;
  if (lVar4 == 0) {
    lVar3 = 8;
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    uVar7 = 0;
    do {
      uVar8 = uVar7;
      iVar2 = FUN_00414c00(lVar4,uVar6,((int)lVar3 + 1) - (int)uVar6);
      if (iVar2 == 0) {
        if (param_3 == 0) {
          FUN_0040b701(uVar6);
          return 0;
        }
        goto LAB_0040b86c;
      }
      uVar7 = uVar8 + 1;
      lVar5 = (ulong)uVar7 * 8;
      plVar9 = plVar1 + uVar7;
      lVar4 = *plVar9;
    } while (lVar4 != 0);
    uVar8 = uVar8 + 2;
    if (0x1ff < uVar8) goto LAB_004029f1;
    lVar3 = (ulong)uVar8 << 3;
  }
  *(undefined8 *)((long)plVar1 + lVar3) = 0;
LAB_0040b86c:
  FUN_0040b701(*plVar9);
  *(undefined8 *)((long)DAT_00448018 + lVar5) = uVar6;
  return 0;
}



void FUN_0040b7a0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0041571a();
  lVar2 = FUN_0040b707(lVar1 + 1);
  if (lVar2 != 0) {
    FUN_004154c0(lVar2,param_1,lVar1 + 1);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0040b8b8)

undefined8 FUN_0040b8d0(void)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  
  uVar4 = FUN_0040b7a0();
  lVar3 = FUN_0041576b(uVar4,0x3d);
  plVar1 = DAT_00448018;
  if (lVar3 != 0) {
    lVar7 = *DAT_00448018;
    plVar9 = DAT_00448018;
    if (lVar7 == 0) {
      lVar3 = 8;
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      uVar5 = 0;
      do {
        uVar8 = uVar5;
        iVar2 = FUN_00414c00(lVar7,uVar4,((int)lVar3 + 1) - (int)uVar4);
        if (iVar2 == 0) goto LAB_0040b86c;
        uVar5 = uVar8 + 1;
        lVar6 = (ulong)uVar5 * 8;
        plVar9 = plVar1 + uVar5;
        lVar7 = *plVar9;
      } while (lVar7 != 0);
      uVar8 = uVar8 + 2;
      if (0x1ff < uVar8) goto LAB_004029f1;
      lVar3 = (ulong)uVar8 << 3;
    }
    *(undefined8 *)((long)plVar1 + lVar3) = 0;
LAB_0040b86c:
    FUN_0040b701(*plVar9);
    *(undefined8 *)((long)DAT_00448018 + lVar6) = uVar4;
    return 0;
  }
LAB_004029f1:
  FUN_0040b701(uVar4);
  uVar4 = FUN_00402b21();
  return uVar4;
}



ulong FUN_0040b940(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  
  puVar1 = *(ulong **)(param_1 + 0x388);
  if (puVar1 != (ulong *)0x0) {
    uVar18 = *(uint *)(puVar1 + 3) & 1;
    if ((uVar18 != 0) && ((*(uint *)(puVar1 + 3) & 8) == 0)) {
      uVar15 = *puVar1;
      uVar17 = uVar15;
      if ((uVar15 & 0xf) != 0) {
        uVar17 = uVar15 + (-((int)uVar15 + 0x10) & 0xf);
      }
      uVar14 = *(ulong *)(uVar17 + 8);
      uVar16 = 0;
      if (((uint)uVar14 & 3) != 1) goto LAB_0040b96f;
      uVar16 = puVar1[1];
      uVar10 = uVar14 & 0xfffffffffffffff8;
      if (uVar17 + uVar10 < (uVar15 - 0x50) + uVar16) goto LAB_0040b96c;
      uVar15 = puVar1[2];
      if (*(ulong *)(param_1 + 0x20) == uVar17) {
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 8) = 0;
        goto LAB_0040baa3;
      }
      uVar12 = *(ulong *)(uVar17 + 0x18);
      uVar2 = *(ulong *)(uVar17 + 0x30);
      if (uVar12 == uVar17) {
        uVar8 = *(ulong *)(uVar17 + 0x28);
        puVar5 = (undefined8 *)(uVar17 + 0x28);
        if (*(ulong *)(uVar17 + 0x28) != 0) {
LAB_0040bc20:
          do {
            do {
              puVar9 = puVar5;
              uVar12 = uVar8;
              uVar8 = *(ulong *)(uVar12 + 0x28);
              puVar5 = (undefined8 *)(uVar12 + 0x28);
            } while (*(ulong *)(uVar12 + 0x28) != 0);
            uVar8 = *(ulong *)(uVar12 + 0x20);
            puVar5 = (undefined8 *)(uVar12 + 0x20);
          } while (*(ulong *)(uVar12 + 0x20) != 0);
          if (puVar9 <= *(undefined8 **)(undefined8 *)(param_1 + 0x18) &&
              *(undefined8 **)(undefined8 *)(param_1 + 0x18) != puVar9) goto LAB_00402a0c;
          *puVar9 = 0;
          goto LAB_0040ba28;
        }
        if (*(ulong *)(uVar17 + 0x20) != 0) {
          uVar8 = *(ulong *)(uVar17 + 0x20);
          puVar5 = (undefined8 *)(uVar17 + 0x20);
          goto LAB_0040bc20;
        }
        if (uVar2 != 0) {
          uVar13 = *(uint *)(uVar17 + 0x38);
          uVar12 = 0;
          lVar11 = param_1 + (ulong)uVar13 * 8;
          if (*(ulong *)(lVar11 + 600) == uVar17) {
            *(undefined8 *)(lVar11 + 600) = 0;
            bVar4 = (byte)uVar13 & 0x1f;
            *(uint *)(param_1 + 4) =
                 *(uint *)(param_1 + 4) & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
            goto LAB_0040baa3;
          }
          goto LAB_0040ba42;
        }
      }
      else {
        uVar8 = *(ulong *)(uVar17 + 0x10);
        if (((uVar8 <= *(ulong *)(param_1 + 0x18) && *(ulong *)(param_1 + 0x18) != uVar8) ||
            (*(ulong *)(uVar8 + 0x18) != uVar17)) || (*(ulong *)(uVar12 + 0x10) != uVar17))
        goto LAB_00402a0c;
        *(ulong *)(uVar8 + 0x18) = uVar12;
        *(ulong *)(uVar12 + 0x10) = uVar8;
LAB_0040ba28:
        if (uVar2 != 0) {
          lVar11 = param_1 + (ulong)*(uint *)(uVar17 + 0x38) * 8;
          if (*(ulong *)(lVar11 + 600) == uVar17) {
            *(ulong *)(lVar11 + 600) = uVar12;
            uVar8 = *(ulong *)(param_1 + 0x18);
          }
          else {
LAB_0040ba42:
            uVar8 = *(ulong *)(param_1 + 0x18);
            if (uVar2 < uVar8) goto LAB_00402a0c;
            if (*(ulong *)(uVar2 + 0x20) == uVar17) {
              *(ulong *)(uVar2 + 0x20) = uVar12;
            }
            else {
              *(ulong *)(uVar2 + 0x28) = uVar12;
            }
            if (uVar12 == 0) goto LAB_0040baa3;
          }
          if (uVar12 < uVar8) goto LAB_00402a0c;
          uVar3 = *(ulong *)(uVar17 + 0x20);
          *(ulong *)(uVar12 + 0x30) = uVar2;
          if (uVar3 != 0) {
            if (uVar3 < uVar8) goto LAB_00402a0c;
            *(ulong *)(uVar12 + 0x20) = uVar3;
            *(ulong *)(uVar3 + 0x30) = uVar12;
          }
          uVar2 = *(ulong *)(uVar17 + 0x28);
          if (uVar2 != 0) {
            if (uVar2 < uVar8) goto LAB_00402a0c;
            *(ulong *)(uVar12 + 0x28) = uVar2;
            *(ulong *)(uVar2 + 0x30) = uVar12;
          }
        }
      }
LAB_0040baa3:
      iVar6 = FUN_0040f560();
      if (iVar6 == 0) {
        *(long *)(param_1 + 0x358) = *(long *)(param_1 + 0x358) - uVar16;
        *(ulong *)(param_1 + 0x388) = uVar15;
      }
      else {
        lVar11 = 600;
        uVar7 = (uint)(uVar10 >> 8);
        uVar15 = uVar14 >> 8 & 0xffffffff;
        uVar13 = (uint)uVar15;
        if (uVar7 != 0) {
          if (uVar7 < 0x10000) {
            uVar18 = 0x1f;
            if (uVar7 != 0) {
              for (; uVar7 >> uVar18 == 0; uVar18 = uVar18 - 1) {
              }
            }
            uVar13 = ((uint)(uVar10 >> (0x26U - (char)(uVar18 ^ 0x1f) & 0x3f)) & 1) +
                     (0x1f - (uVar18 ^ 0x1f)) * 2;
            uVar15 = (ulong)uVar13;
            lVar11 = uVar15 * 8 + 600;
            uVar18 = 1 << ((byte)uVar13 & 0x1f);
          }
          else {
            uVar18 = 0x80000000;
            lVar11 = 0x350;
            uVar13 = 0x1f;
            uVar15 = 0x1f;
          }
        }
        uVar7 = *(uint *)(param_1 + 4);
        *(uint *)(uVar17 + 0x38) = uVar13;
        *(undefined8 *)(uVar17 + 0x28) = 0;
        *(undefined8 *)(uVar17 + 0x20) = 0;
        if ((uVar7 & uVar18) == 0) {
          uVar16 = 0;
          *(uint *)(param_1 + 4) = uVar18 | uVar7;
          *(ulong *)(param_1 + 600 + uVar15 * 8) = uVar17;
          *(long *)(uVar17 + 0x30) = lVar11 + param_1;
          *(ulong *)(uVar17 + 0x18) = uVar17;
          *(ulong *)(uVar17 + 0x10) = uVar17;
        }
        else {
          uVar15 = *(ulong *)(param_1 + 600 + uVar15 * 8);
          uVar14 = uVar10;
          if (uVar13 != 0x1f) {
            uVar14 = uVar10 << (0x39U - (char)(uVar13 >> 1) & 0x3f);
          }
          do {
            uVar12 = uVar15;
            if ((*(ulong *)(uVar12 + 8) & 0xfffffffffffffff8) == uVar10) {
              uVar15 = *(ulong *)(uVar12 + 0x10);
              if ((uVar15 < *(ulong *)(param_1 + 0x18)) || (uVar12 < *(ulong *)(param_1 + 0x18)))
              goto LAB_00402a0c;
              *(ulong *)(uVar15 + 0x18) = uVar17;
              uVar16 = 0;
              *(ulong *)(uVar12 + 0x10) = uVar17;
              *(ulong *)(uVar17 + 0x10) = uVar15;
              *(ulong *)(uVar17 + 0x18) = uVar12;
              *(undefined8 *)(uVar17 + 0x30) = 0;
              goto LAB_0040b96f;
            }
            lVar11 = 4 - ((long)uVar14 >> 0x3f);
            uVar15 = *(ulong *)(uVar12 + lVar11 * 8);
            uVar14 = uVar14 * 2;
          } while (uVar15 != 0);
          uVar15 = uVar12 + lVar11 * 8;
          if (uVar15 <= *(ulong *)(param_1 + 0x18) && *(ulong *)(param_1 + 0x18) != uVar15) {
LAB_00402a0c:
                    // WARNING: Subroutine does not return
            FUN_00401114();
          }
          *(ulong *)(uVar12 + lVar11 * 8) = uVar17;
          uVar16 = 0;
          *(ulong *)(uVar17 + 0x30) = uVar12;
          *(ulong *)(uVar17 + 0x18) = uVar17;
          *(ulong *)(uVar17 + 0x10) = uVar17;
        }
      }
      goto LAB_0040b96f;
    }
  }
LAB_0040b96c:
  uVar16 = 0;
LAB_0040b96f:
  *(undefined8 *)(param_1 + 0x38) = 0x80;
  return uVar16;
}



undefined8 FUN_0040bd10(long param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  
  puVar1 = *(ulong **)(param_1 + 0x28);
  if (puVar1 == (ulong *)0x0) {
    return 0;
  }
  if (param_2 + 0x50U < *(ulong *)(param_1 + 0x10)) {
    puVar11 = (ulong *)(param_1 + 0x378);
    puVar10 = puVar11;
    do {
      puVar2 = (ulong *)*puVar10;
      if (puVar2 <= puVar1) {
        uVar3 = puVar10[1];
        if (puVar1 < (ulong *)((long)puVar2 + uVar3)) {
          if ((((*(uint *)(puVar10 + 3) & 8) != 0) || ((*(uint *)(puVar10 + 3) & 1) == 0)) ||
             (uVar12 = ((((*(ulong *)(param_1 + 0x10) - 1) + DAT_004466d0) - (param_2 + 0x50U)) /
                        DAT_004466d0 - 1) * DAT_004466d0, uVar3 <= uVar12 && uVar12 - uVar3 != 0))
          break;
          goto LAB_0040bdd8;
        }
      }
      puVar10 = (ulong *)puVar10[2];
      if (puVar10 == (ulong *)0x0) {
        do {
          invalidInstructionException();
        } while( true );
      }
    } while( true );
  }
  goto LAB_0040bd70;
  while (puVar11 = (ulong *)puVar11[2], puVar11 != (ulong *)0x0) {
LAB_0040bdd8:
    if ((puVar2 <= puVar11) && (puVar11 < (ulong *)((long)puVar2 + uVar3))) goto LAB_0040bd70;
  }
  lVar6 = FUN_0040f550(puVar2,uVar3,uVar3 - uVar12,0,0);
  if (((lVar6 != -1) || (iVar5 = FUN_0040f560(*puVar10 + (uVar3 - uVar12),uVar12), iVar5 == 0)) &&
     (uVar12 != 0)) {
    lVar6 = *(long *)(param_1 + 0x10);
    uVar3 = *(ulong *)(param_1 + 0x28);
    puVar10[1] = puVar10[1] - uVar12;
    uVar9 = lVar6 - uVar12;
    *(long *)(param_1 + 0x358) = *(long *)(param_1 + 0x358) - uVar12;
    uVar8 = uVar9;
    uVar7 = uVar3;
    if ((uVar3 & 0xf) != 0) {
      uVar7 = (ulong)(-((int)uVar3 + 0x10) & 0xf);
      uVar8 = uVar9 - uVar7;
      uVar7 = uVar3 + uVar7;
    }
    *(ulong *)(param_1 + 0x10) = uVar8;
    *(ulong *)(param_1 + 0x28) = uVar7;
    *(ulong *)(uVar7 + 8) = uVar8 | 1;
    uVar4 = DAT_004466e0;
    *(undefined8 *)(uVar3 + 8 + uVar9) = 0x50;
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    goto LAB_0040bd73;
  }
LAB_0040bd70:
  uVar12 = 0;
LAB_0040bd73:
  lVar6 = FUN_0040b940(param_1);
  if (uVar12 + lVar6 == 0) {
    if (*(ulong *)(param_1 + 0x30) <= *(ulong *)(param_1 + 0x10) &&
        *(ulong *)(param_1 + 0x10) != *(ulong *)(param_1 + 0x30)) {
      *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
    }
    return 0;
  }
  return 1;
}



void FUN_0040bea0(uint *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong uVar16;
  
  puVar12 = (ulong *)((long)param_2 + param_3);
  puVar15 = param_2 + 1;
  if ((*puVar15 & 1) != 0) {
    puVar15 = *(ulong **)(param_1 + 6);
    goto LAB_0040bfb4;
  }
  uVar16 = *param_2;
  param_2 = (ulong *)((long)param_2 - uVar16);
  if ((*puVar15 & 3) == 0) {
    lVar8 = uVar16 + 0x20 + param_3;
    iVar6 = FUN_0040f560(param_2,lVar8);
    if (iVar6 != 0) {
      return;
    }
    *(long *)(param_1 + 0xd6) = *(long *)(param_1 + 0xd6) - lVar8;
    return;
  }
  puVar15 = *(ulong **)(param_1 + 6);
  param_3 = param_3 + uVar16;
  if (param_2 < puVar15) goto LAB_00402a1a;
  if (*(ulong **)(param_1 + 8) == param_2) {
    uVar16 = puVar12[1];
    if (((uint)uVar16 & 3) == 3) {
      *(ulong *)(param_1 + 2) = param_3;
      puVar12[1] = uVar16 & 0xfffffffffffffffe;
      param_2[1] = param_3 | 1;
      *puVar12 = param_3;
      return;
    }
  }
  else {
    puVar7 = (ulong *)param_2[3];
    if (uVar16 < 0x100) {
      puVar14 = (ulong *)param_2[2];
      if ((ulong *)(param_1 + (ulong)(uint)((int)(uVar16 >> 3) * 2) * 2 + 0x12) == puVar14) {
        if (puVar7 != puVar14) {
LAB_0040c550:
          if ((puVar7 < puVar15) || ((ulong *)puVar7[2] != param_2)) goto LAB_00402a1a;
LAB_0040c509:
          puVar14[3] = (ulong)puVar7;
          puVar7[2] = (ulong)puVar14;
          goto LAB_0040bfb4;
        }
      }
      else {
        if ((puVar14 < puVar15) || ((ulong *)puVar14[3] != param_2)) goto LAB_00402a1a;
        if (puVar7 != puVar14) {
          if ((ulong *)(param_1 + (ulong)(uint)((int)(uVar16 >> 3) * 2) * 2 + 0x12) != puVar7)
          goto LAB_0040c550;
          goto LAB_0040c509;
        }
      }
      bVar4 = (byte)(uVar16 >> 3) & 0x1f;
      *param_1 = *param_1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    }
    else {
      puVar14 = (ulong *)param_2[6];
      if (param_2 == puVar7) {
        puVar1 = (ulong *)param_2[5];
        puVar2 = param_2 + 5;
        if ((ulong *)param_2[5] != (ulong *)0x0) {
LAB_0040c458:
          do {
            do {
              puVar11 = puVar2;
              puVar7 = puVar1;
              puVar1 = (ulong *)puVar7[5];
              puVar2 = puVar7 + 5;
            } while ((ulong *)puVar7[5] != (ulong *)0x0);
            puVar1 = (ulong *)puVar7[4];
            puVar2 = puVar7 + 4;
          } while ((ulong *)puVar7[4] != (ulong *)0x0);
          if (puVar11 < puVar15) goto LAB_00402a1a;
          *puVar11 = 0;
          goto LAB_0040bf32;
        }
        if ((ulong *)param_2[4] != (ulong *)0x0) {
          puVar1 = (ulong *)param_2[4];
          puVar2 = param_2 + 4;
          goto LAB_0040c458;
        }
        if (puVar14 == (ulong *)0x0) goto LAB_0040bfb4;
        uVar5 = *(uint *)(param_2 + 7);
        puVar7 = (ulong *)0x0;
        if (param_2 == *(ulong **)(param_1 + (ulong)uVar5 * 2 + 0x96)) {
          *(undefined8 *)(param_1 + (ulong)uVar5 * 2 + 0x96) = 0;
          bVar4 = (byte)uVar5 & 0x1f;
          param_1[1] = param_1[1] & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
          goto LAB_0040bfb4;
        }
LAB_0040bf4b:
        if (puVar14 < puVar15) goto LAB_00402a1a;
        if ((ulong *)puVar14[4] == param_2) {
          puVar14[4] = (ulong)puVar7;
        }
        else {
          puVar14[5] = (ulong)puVar7;
        }
        if (puVar7 != (ulong *)0x0) goto LAB_0040bf67;
      }
      else {
        puVar1 = (ulong *)param_2[2];
        if (((puVar1 < puVar15) || ((ulong *)puVar1[3] != param_2)) ||
           ((ulong *)puVar7[2] != param_2)) goto LAB_00402a1a;
        puVar1[3] = (ulong)puVar7;
        puVar7[2] = (ulong)puVar1;
LAB_0040bf32:
        if (puVar14 != (ulong *)0x0) {
          if (*(ulong **)(param_1 + (ulong)*(uint *)(param_2 + 7) * 2 + 0x96) != param_2)
          goto LAB_0040bf4b;
          *(ulong **)(param_1 + (ulong)*(uint *)(param_2 + 7) * 2 + 0x96) = puVar7;
LAB_0040bf67:
          if (puVar7 < puVar15) goto LAB_00402a1a;
          puVar1 = (ulong *)param_2[4];
          puVar7[6] = (ulong)puVar14;
          if (puVar1 != (ulong *)0x0) {
            if (puVar1 < puVar15) goto LAB_00402a1a;
            puVar7[4] = (ulong)puVar1;
            puVar1[6] = (ulong)puVar7;
          }
          puVar14 = (ulong *)param_2[5];
          if (puVar14 != (ulong *)0x0) {
            if (puVar14 < puVar15) goto LAB_00402a1a;
            puVar7[5] = (ulong)puVar14;
            puVar14[6] = (ulong)puVar7;
          }
        }
      }
    }
  }
LAB_0040bfb4:
  if (puVar12 < puVar15) goto LAB_00402a1a;
  uVar16 = puVar12[1];
  if ((uVar16 & 2) == 0) {
    puVar7 = *(ulong **)(param_1 + 8);
    if (*(ulong **)(param_1 + 10) == puVar12) {
      lVar8 = *(long *)(param_1 + 4);
      *(ulong **)(param_1 + 10) = param_2;
      *(ulong *)(param_1 + 4) = param_3 + lVar8;
      param_2[1] = param_3 + lVar8 | 1;
      if (puVar7 != param_2) {
        return;
      }
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 2) = 0;
      return;
    }
    if (puVar7 == puVar12) {
      param_3 = param_3 + *(long *)(param_1 + 2);
      *(ulong **)(param_1 + 8) = param_2;
      *(ulong *)(param_1 + 2) = param_3;
      param_2[1] = param_3 | 1;
      *(ulong *)((long)param_2 + param_3) = param_3;
      return;
    }
    puVar14 = (ulong *)puVar12[3];
    param_3 = param_3 + (uVar16 & 0xfffffffffffffff8);
    if ((uVar16 & 0xfffffffffffffff8) < 0xf9) {
      puVar1 = (ulong *)puVar12[2];
      if ((ulong *)(param_1 + (ulong)(uint)((int)(uVar16 >> 3) * 2) * 2 + 0x12) == puVar1) {
        if (puVar14 != puVar1) {
LAB_0040c53a:
          if ((puVar14 < puVar15) || ((ulong *)puVar14[2] != puVar12)) goto LAB_00402a1a;
LAB_0040c4db:
          puVar1[3] = (ulong)puVar14;
          puVar14[2] = (ulong)puVar1;
          goto LAB_0040c0b0;
        }
      }
      else {
        if ((puVar1 < puVar15) || ((ulong *)puVar1[3] != puVar12)) goto LAB_00402a1a;
        if (puVar14 != puVar1) {
          if ((ulong *)(param_1 + (ulong)(uint)((int)(uVar16 >> 3) * 2) * 2 + 0x12) != puVar14)
          goto LAB_0040c53a;
          goto LAB_0040c4db;
        }
      }
      bVar4 = (byte)(uVar16 >> 3) & 0x1f;
      *param_1 = *param_1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      goto LAB_0040c0b0;
    }
    puVar1 = (ulong *)puVar12[6];
    if (puVar14 == puVar12) {
      puVar2 = (ulong *)puVar12[5];
      puVar11 = puVar12 + 5;
      if ((ulong *)puVar12[5] != (ulong *)0x0) {
LAB_0040c408:
        do {
          do {
            puVar10 = puVar11;
            puVar14 = puVar2;
            puVar2 = (ulong *)puVar14[5];
            puVar11 = puVar14 + 5;
          } while ((ulong *)puVar14[5] != (ulong *)0x0);
          puVar2 = (ulong *)puVar14[4];
          puVar11 = puVar14 + 4;
        } while ((ulong *)puVar14[4] != (ulong *)0x0);
        if (puVar10 < puVar15) goto LAB_00402a1a;
        *puVar10 = 0;
        goto LAB_0040c034;
      }
      if ((ulong *)puVar12[4] != (ulong *)0x0) {
        puVar2 = (ulong *)puVar12[4];
        puVar11 = puVar12 + 4;
        goto LAB_0040c408;
      }
      if (puVar1 != (ulong *)0x0) {
        uVar5 = *(uint *)(puVar12 + 7);
        puVar14 = (ulong *)0x0;
        if (*(ulong **)(param_1 + (ulong)uVar5 * 2 + 0x96) == puVar12) {
          *(undefined8 *)(param_1 + (ulong)uVar5 * 2 + 0x96) = 0;
          bVar4 = (byte)uVar5 & 0x1f;
          param_1[1] = param_1[1] & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
          goto LAB_0040c0b0;
        }
        goto LAB_0040c04d;
      }
    }
    else {
      puVar2 = (ulong *)puVar12[2];
      if (((puVar2 < puVar15) || ((ulong *)puVar2[3] != puVar12)) ||
         ((ulong *)puVar14[2] != puVar12)) goto LAB_00402a1a;
      puVar2[3] = (ulong)puVar14;
      puVar14[2] = (ulong)puVar2;
LAB_0040c034:
      if (puVar1 != (ulong *)0x0) {
        if (*(ulong **)(param_1 + (ulong)*(uint *)(puVar12 + 7) * 2 + 0x96) == puVar12) {
          *(ulong **)(param_1 + (ulong)*(uint *)(puVar12 + 7) * 2 + 0x96) = puVar14;
        }
        else {
LAB_0040c04d:
          if (puVar1 < puVar15) goto LAB_00402a1a;
          if ((ulong *)puVar1[4] == puVar12) {
            puVar1[4] = (ulong)puVar14;
          }
          else {
            puVar1[5] = (ulong)puVar14;
          }
          if (puVar14 == (ulong *)0x0) goto LAB_0040c0b0;
        }
        if (puVar14 < puVar15) goto LAB_00402a1a;
        puVar2 = (ulong *)puVar12[4];
        puVar14[6] = (ulong)puVar1;
        if (puVar2 != (ulong *)0x0) {
          if (puVar2 < puVar15) goto LAB_00402a1a;
          puVar14[4] = (ulong)puVar2;
          puVar2[6] = (ulong)puVar14;
        }
        puVar12 = (ulong *)puVar12[5];
        if (puVar12 != (ulong *)0x0) {
          if (puVar12 < puVar15) goto LAB_00402a1a;
          puVar14[5] = (ulong)puVar12;
          puVar12[6] = (ulong)puVar14;
        }
      }
    }
LAB_0040c0b0:
    param_2[1] = param_3 | 1;
    *(ulong *)((long)param_2 + param_3) = param_3;
    if (puVar7 == param_2) {
      *(ulong *)(param_1 + 2) = param_3;
      return;
    }
  }
  else {
    puVar12[1] = uVar16 & 0xfffffffffffffffe;
    param_2[1] = param_3 | 1;
    *(ulong *)((long)param_2 + param_3) = param_3;
  }
  if (param_3 < 0x100) {
    puVar12 = (ulong *)(param_1 + (ulong)(uint)((int)(param_3 >> 3) * 2) * 2 + 0x12);
    uVar5 = 1 << ((byte)(param_3 >> 3) & 0x1f);
    if ((*param_1 & uVar5) == 0) {
      *param_1 = uVar5 | *param_1;
      puVar7 = puVar12;
    }
    else {
      puVar7 = (ulong *)puVar12[2];
      if ((ulong *)puVar12[2] < puVar15) {
LAB_00402a1a:
                    // WARNING: Subroutine does not return
        FUN_00401114();
      }
    }
    puVar12[2] = (ulong)param_2;
    puVar7[3] = (ulong)param_2;
    param_2[2] = (ulong)puVar7;
    param_2[3] = (ulong)puVar12;
    return;
  }
  uVar5 = (uint)(param_3 >> 8);
  uVar16 = param_3 >> 8 & 0xffffffff;
  if (uVar5 == 0) {
    uVar5 = 1;
    lVar8 = 600;
  }
  else if (uVar5 < 0x10000) {
    uVar3 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    uVar5 = ((uint)(param_3 >> (0x26U - (char)(uVar3 ^ 0x1f) & 0x3f)) & 1) +
            (0x1f - (uVar3 ^ 0x1f)) * 2;
    uVar16 = (ulong)uVar5;
    lVar8 = uVar16 * 8 + 600;
    uVar5 = 1 << ((byte)uVar5 & 0x1f);
  }
  else {
    uVar5 = 0x80000000;
    lVar8 = 0x350;
    uVar16 = 0x1f;
  }
  uVar3 = param_1[1];
  uVar9 = (uint)uVar16;
  *(uint *)(param_2 + 7) = uVar9;
  param_2[5] = 0;
  param_2[4] = 0;
  if ((uVar5 & uVar3) == 0) {
    param_1[1] = uVar5 | uVar3;
    *(ulong **)(param_1 + uVar16 * 2 + 0x96) = param_2;
    param_2[6] = (long)param_1 + lVar8;
    param_2[3] = (ulong)param_2;
    param_2[2] = (ulong)param_2;
  }
  else {
    puVar12 = *(ulong **)(param_1 + uVar16 * 2 + 0x96);
    uVar13 = param_3;
    if (uVar9 != 0x1f) {
      uVar13 = param_3 << (0x39U - (char)(uVar9 >> 1) & 0x3f);
    }
    do {
      puVar7 = puVar12;
      if ((puVar7[1] & 0xfffffffffffffff8) == param_3) {
        puVar12 = (ulong *)puVar7[2];
        if ((puVar15 <= puVar7) && (puVar15 <= puVar12)) {
          puVar12[3] = (ulong)param_2;
          puVar7[2] = (ulong)param_2;
          param_2[2] = (ulong)puVar12;
          param_2[3] = (ulong)puVar7;
          param_2[6] = 0;
          return;
        }
        goto LAB_00402a1a;
      }
      lVar8 = 4 - ((long)uVar13 >> 0x3f);
      puVar12 = (ulong *)puVar7[lVar8];
      uVar13 = uVar13 * 2;
    } while ((ulong *)puVar7[lVar8] != (ulong *)0x0);
    if (puVar7 + lVar8 < puVar15) goto LAB_00402a1a;
    puVar7[lVar8] = (ulong)param_2;
    param_2[6] = (ulong)puVar7;
    param_2[3] = (ulong)param_2;
    param_2[2] = (ulong)param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong * FUN_0040c5f0(ulong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  ulong **ppuVar15;
  long lVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong *puVar21;
  int iVar22;
  ulong uVar23;
  byte bVar24;
  ulong uVar25;
  ulong uVar26;
  
  puVar13 = DAT_00446728;
  puVar20 = DAT_00446720;
  puVar10 = DAT_00446718;
  uVar26 = DAT_00446708;
  uVar8 = DAT_00446700;
  if (param_1 < 0xe1) {
    if (param_1 < 0xf) {
      uVar9 = 4;
      iVar22 = 4;
      uVar19 = 0x20;
      uVar4 = DAT_00446700 >> 4;
    }
    else {
      uVar19 = param_1 + 0x1f & 0xfffffffffffffff0;
      uVar9 = uVar19 >> 3;
      iVar22 = (int)uVar9;
      uVar4 = DAT_00446700 >> ((byte)uVar9 & 0x1f);
    }
    if ((uVar4 & 3) != 0) {
      uVar8 = iVar22 + (~uVar4 & 1);
      uVar19 = (ulong)(uVar8 * 2);
      uVar26 = (&DAT_00446758)[uVar19];
      puVar10 = *(ulong **)(uVar26 + 0x10);
      if ((ulong *)(&DAT_00446748 + uVar19 * 8) == puVar10) {
        DAT_00446700 = DAT_00446700 & ~(1 << (uVar8 & 0x1f));
      }
      else {
        if ((puVar10 < DAT_00446718) || (puVar10[3] != uVar26)) goto LAB_00402a29;
        puVar10[3] = (ulong)(&DAT_00446748 + uVar19 * 8);
        (&DAT_00446758)[uVar19] = puVar10;
      }
      *(ulong *)(uVar26 + 8) = (ulong)(uVar8 * 8 | 3);
      puVar10 = (ulong *)(uVar26 + 8 + (ulong)(uVar8 * 8));
      *puVar10 = *puVar10 | 1;
      return (ulong *)(uVar26 + 0x10);
    }
    if (uVar19 <= DAT_00446708) {
LAB_0040ce40:
      uVar26 = DAT_00446708 - uVar19;
      puVar10 = (ulong *)((long)DAT_00446720 + DAT_00446708);
      if (0x1f < uVar26) {
        DAT_00446720 = (ulong *)((long)DAT_00446720 + uVar19);
        DAT_00446708 = uVar26;
        DAT_00446720[1] = uVar26 | 1;
        *puVar10 = uVar26;
        puVar20[1] = uVar19 | 3;
        puVar6 = puVar20;
        uVar23 = DAT_00446708;
        puVar20 = DAT_00446720;
        goto LAB_0040c7e4;
      }
      uVar26 = DAT_00446708 | 3;
LAB_0040ceab:
      DAT_00446708 = 0;
      DAT_00446720 = (ulong *)0x0;
      puVar20[1] = uVar26;
      puVar10[1] = puVar10[1] | 1;
      puVar6 = puVar20;
      uVar23 = DAT_00446708;
      puVar20 = DAT_00446720;
      goto LAB_0040c7e4;
    }
    if (uVar4 != 0) {
      iVar22 = 1 << ((byte)uVar9 & 0x1f);
      uVar8 = uVar4 << ((byte)uVar9 & 0x1f) & (iVar22 * -2 | iVar22 * 2);
      iVar22 = 0;
      for (uVar8 = uVar8 & -uVar8; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        iVar22 = iVar22 + 1;
      }
      uVar9 = (ulong)(uint)(iVar22 * 2);
      uVar8 = iVar22 * 8;
      puVar6 = (ulong *)(&DAT_00446758)[uVar9];
      puVar10 = (ulong *)puVar6[2];
      if ((ulong *)(&DAT_00446748 + uVar9 * 8) == puVar10) {
        DAT_00446700 = DAT_00446700 & ~(1 << ((byte)iVar22 & 0x1f));
      }
      else {
        if ((puVar10 < DAT_00446718) || ((ulong *)puVar10[3] != puVar6)) goto LAB_00402a29;
        puVar10[3] = (ulong)(&DAT_00446748 + uVar9 * 8);
        (&DAT_00446758)[uVar9] = puVar10;
      }
      puVar10 = (ulong *)((long)puVar6 + (ulong)uVar8);
      uVar23 = uVar8 - uVar19;
      if (uVar23 < 0x20) {
        puVar6[1] = (ulong)(uVar8 | 3);
        puVar10 = puVar10 + 1;
        *puVar10 = *puVar10 | 1;
        uVar23 = DAT_00446708;
        puVar20 = DAT_00446720;
      }
      else {
        puVar20 = (ulong *)(uVar19 + (long)puVar6);
        puVar6[1] = uVar19 | 3;
        puVar20[1] = uVar23 | 1;
        *puVar10 = uVar23;
        if (uVar26 != 0) {
          uVar19 = (ulong)(uint)((int)(uVar26 >> 3) * 2);
          uVar8 = 1 << ((byte)(uVar26 >> 3) & 0x1f);
          if ((DAT_00446700 & uVar8) == 0) {
            DAT_00446700 = uVar8 | DAT_00446700;
            puVar10 = (ulong *)(&DAT_00446748 + uVar19 * 8);
          }
          else {
            puVar10 = (ulong *)(&DAT_00446758)[uVar19];
            if ((ulong *)(&DAT_00446758)[uVar19] < DAT_00446718) goto LAB_00402a29;
          }
          (&DAT_00446758)[uVar19] = DAT_00446720;
          puVar10[3] = (ulong)DAT_00446720;
          DAT_00446720[2] = (ulong)puVar10;
          DAT_00446720[3] = (ulong)(&DAT_00446748 + uVar19 * 8);
        }
      }
      goto LAB_0040c7e4;
    }
    if (DAT_00446704 != 0) {
      uVar4 = 0;
      for (uVar5 = -DAT_00446704 & DAT_00446704; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000)
      {
        uVar4 = uVar4 + 1;
      }
      puVar20 = (&DAT_00446958)[uVar4];
      puVar6 = puVar20;
      uVar23 = (puVar20[1] & 0xfffffffffffffff8) - uVar19;
      while ((puVar13 = (ulong *)puVar20[4], (ulong *)puVar20[4] != (ulong *)0x0 ||
             (puVar13 = (ulong *)puVar20[5], (ulong *)puVar20[5] != (ulong *)0x0))) {
        puVar20 = puVar13;
        uVar9 = (puVar20[1] & 0xfffffffffffffff8) - uVar19;
        if (uVar9 < uVar23) {
          puVar6 = puVar20;
          uVar23 = uVar9;
        }
      }
      if (puVar6 < DAT_00446718) goto LAB_00402a29;
      puVar20 = (ulong *)((long)puVar6 + uVar19);
      uVar9 = uVar19 + uVar23;
      if (puVar20 <= puVar6) goto LAB_00402a29;
      puVar13 = (ulong *)puVar6[3];
      puVar7 = (ulong *)puVar6[6];
      if (puVar13 == puVar6) {
        if ((ulong *)puVar6[5] != (ulong *)0x0) {
          puVar11 = (ulong *)puVar6[5];
          puVar12 = puVar6 + 5;
LAB_0040d6f0:
          do {
            do {
              puVar21 = puVar12;
              puVar13 = puVar11;
              puVar11 = (ulong *)puVar13[5];
              puVar12 = puVar13 + 5;
            } while ((ulong *)puVar13[5] != (ulong *)0x0);
            puVar11 = (ulong *)puVar13[4];
            puVar12 = puVar13 + 4;
          } while ((ulong *)puVar13[4] != (ulong *)0x0);
          if (puVar21 < DAT_00446718) goto LAB_00402a29;
          *puVar21 = 0;
          goto LAB_0040ca36;
        }
        if ((ulong *)puVar6[4] != (ulong *)0x0) {
          puVar11 = (ulong *)puVar6[4];
          puVar12 = puVar6 + 4;
          goto LAB_0040d6f0;
        }
        if (puVar7 != (ulong *)0x0) {
          uVar4 = *(uint *)(puVar6 + 7);
          puVar13 = (ulong *)0x0;
          if (puVar6 == (&DAT_00446958)[uVar4]) {
            (&DAT_00446708)[(ulong)uVar4 + 0x4a] = 0;
            DAT_00446704 = DAT_00446704 & ~(1 << (uVar4 & 0x1f));
            goto LAB_0040caad;
          }
          goto LAB_0040ca50;
        }
      }
      else {
        puVar11 = (ulong *)puVar6[2];
        if (((puVar11 < DAT_00446718) || ((ulong *)puVar11[3] != puVar6)) ||
           ((ulong *)puVar13[2] != puVar6)) goto LAB_00402a29;
        puVar11[3] = (ulong)puVar13;
        puVar13[2] = (ulong)puVar11;
LAB_0040ca36:
        if (puVar7 != (ulong *)0x0) {
          if ((&DAT_00446958)[*(uint *)(puVar6 + 7)] == puVar6) {
            (&DAT_00446708)[(ulong)*(uint *)(puVar6 + 7) + 0x4a] = (ulong)puVar13;
          }
          else {
LAB_0040ca50:
            if (puVar7 < puVar10) goto LAB_00402a29;
            if ((ulong *)puVar7[4] == puVar6) {
              puVar7[4] = (ulong)puVar13;
            }
            else {
              puVar7[5] = (ulong)puVar13;
            }
            if (puVar13 == (ulong *)0x0) goto LAB_0040caad;
          }
          if (puVar13 < puVar10) goto LAB_00402a29;
          puVar11 = (ulong *)puVar6[4];
          puVar13[6] = (ulong)puVar7;
          if (puVar11 != (ulong *)0x0) {
            if (puVar11 < puVar10) goto LAB_00402a29;
            puVar13[4] = (ulong)puVar11;
            puVar11[6] = (ulong)puVar13;
          }
          puVar7 = (ulong *)puVar6[5];
          if (puVar7 != (ulong *)0x0) {
            if (puVar7 < puVar10) goto LAB_00402a29;
            puVar13[5] = (ulong)puVar7;
            puVar7[6] = (ulong)puVar13;
          }
        }
      }
LAB_0040caad:
      if (0x1f < uVar23) {
        puVar6[1] = uVar19 | 3;
        puVar20[1] = uVar23 | 1;
        *(ulong *)((long)puVar20 + uVar23) = uVar23;
        if (uVar26 != 0) {
          uVar19 = (ulong)(uint)((int)(uVar26 >> 3) * 2);
          uVar4 = 1 << ((byte)(uVar26 >> 3) & 0x1f);
          if ((uVar8 & uVar4) == 0) {
            DAT_00446700 = uVar8 | uVar4;
            puVar13 = (ulong *)(&DAT_00446748 + uVar19 * 8);
          }
          else {
            puVar13 = (ulong *)(&DAT_00446758)[uVar19];
            if (puVar13 < puVar10) goto LAB_00402a29;
          }
          (&DAT_00446758)[uVar19] = DAT_00446720;
          puVar13[3] = (ulong)DAT_00446720;
          DAT_00446720[2] = (ulong)puVar13;
          DAT_00446720[3] = (ulong)(&DAT_00446748 + uVar19 * 8);
        }
        goto LAB_0040c7e4;
      }
LAB_0040d3f0:
      puVar6[1] = uVar9 | 3;
      puVar10 = (ulong *)((long)puVar6 + uVar9 + 8);
      *puVar10 = *puVar10 | 1;
      uVar23 = DAT_00446708;
      puVar20 = DAT_00446720;
      goto LAB_0040c7e4;
    }
LAB_0040c831:
    if (uVar19 < DAT_00446710) {
      DAT_00446710 = DAT_00446710 - uVar19;
      lVar16 = (long)DAT_00446728 + uVar19;
      puVar10 = DAT_00446728 + 2;
      DAT_00446728 = (ulong *)lVar16;
      *(ulong *)(lVar16 + 8) = DAT_00446710 | 1;
      puVar13[1] = uVar19 | 3;
      return puVar10;
    }
    if ((DAT_00446a70 & 1) != 0) goto LAB_0040c8b4;
LAB_0040cb4a:
    uVar26 = -DAT_004466d0 & uVar19 + 0x5f + DAT_004466d0;
    if (uVar26 <= uVar19) {
      return (ulong *)0x0;
    }
    if (DAT_00446a68 != 0) goto LAB_0040cb6e;
  }
  else {
    if (param_1 < 0xffffffffffffff80) {
      uVar19 = param_1 + 0x1f & 0xfffffffffffffff0;
      if (DAT_00446704 != 0) {
        uVar26 = -uVar19;
        uVar8 = (uint)(uVar19 >> 8);
        uVar9 = param_1 + 0x1f >> 8 & 0xffffffff;
        if (uVar8 == 0) {
          bVar24 = 0x39;
          puVar7 = DAT_00446958;
          if (DAT_00446958 != (ulong *)0x0) {
LAB_0040d16d:
            uVar23 = uVar19 << (bVar24 & 0x3f);
            goto LAB_0040cf0c;
          }
          uVar8 = 0xfffffffe;
LAB_0040d42a:
          uVar8 = uVar8 & DAT_00446704;
          if (uVar8 != 0) {
            uVar4 = 0;
            for (uVar8 = uVar8 & -uVar8; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            puVar12 = (&DAT_00446958)[uVar4];
            if (puVar12 != (ulong *)0x0) {
              uVar17 = puVar12[1];
              puVar7 = (ulong *)0x0;
LAB_0040cf8f:
              while( true ) {
                uVar9 = (uVar17 & 0xfffffffffffffff8) - uVar19;
                puVar6 = puVar7;
                if (uVar9 < uVar26) {
                  puVar6 = puVar12;
                  uVar26 = uVar9;
                }
                puVar11 = (ulong *)puVar12[4];
                if ((puVar11 == (ulong *)0x0) &&
                   (puVar11 = (ulong *)puVar12[5], puVar11 == (ulong *)0x0)) break;
                uVar17 = puVar11[1];
                puVar7 = puVar6;
                puVar12 = puVar11;
              }
              goto LAB_0040cfb3;
            }
          }
        }
        else {
          uVar23 = uVar19;
          if (uVar8 < 0x10000) {
            uVar4 = 0x1f;
            if (uVar8 != 0) {
              for (; uVar8 >> uVar4 == 0; uVar4 = uVar4 - 1) {
              }
            }
            uVar8 = ((uint)(uVar19 >> (0x26U - (char)(uVar4 ^ 0x1f) & 0x3f)) & 1) +
                    (0x1f - (uVar4 ^ 0x1f)) * 2;
            uVar9 = (ulong)uVar8;
            puVar7 = (&DAT_00446958)[uVar9];
            if (puVar7 != (ulong *)0x0) {
              if (uVar8 != 0x1f) {
                bVar24 = 0x39 - (char)(uVar8 >> 1);
                goto LAB_0040d16d;
              }
              goto LAB_0040cf0c;
            }
LAB_0040d420:
            uVar8 = -2 << ((byte)uVar9 & 0x1f);
            goto LAB_0040d42a;
          }
          uVar9 = 0x1f;
          puVar7 = DAT_00446a50;
          if (DAT_00446a50 == (ulong *)0x0) goto LAB_0040c828;
LAB_0040cf0c:
          puVar11 = (ulong *)0x0;
          puVar6 = (ulong *)0x0;
          uVar25 = uVar26;
          while( true ) {
            uVar17 = puVar7[1];
            uVar26 = (uVar17 & 0xfffffffffffffff8) - uVar19;
            if ((uVar26 < uVar25) &&
               (puVar12 = puVar7, uVar25 = uVar26, puVar6 = puVar7, uVar26 == 0)) goto LAB_0040cf8f;
            uVar26 = uVar25;
            puVar12 = (ulong *)puVar7[5];
            puVar7 = (ulong *)puVar7[4 - ((long)uVar23 >> 0x3f)];
            if ((puVar12 != (ulong *)0x0) && (puVar12 != puVar7)) {
              puVar11 = puVar12;
            }
            if (puVar7 == (ulong *)0x0) break;
            uVar23 = uVar23 * 2;
            uVar25 = uVar26;
          }
          if (((ulong)puVar6 | (ulong)puVar11) == 0) goto LAB_0040d420;
          if (puVar11 != (ulong *)0x0) {
            uVar17 = puVar11[1];
            puVar7 = puVar6;
            puVar12 = puVar11;
            goto LAB_0040cf8f;
          }
LAB_0040cfb3:
          if ((puVar6 != (ulong *)0x0) && (uVar26 < DAT_00446708 - uVar19)) {
            if (puVar6 < DAT_00446718) goto LAB_00402a29;
            puVar20 = (ulong *)((long)puVar6 + uVar19);
            uVar9 = uVar19 + uVar26;
            if (puVar20 <= puVar6) goto LAB_00402a29;
            puVar13 = (ulong *)puVar6[3];
            puVar7 = (ulong *)puVar6[6];
            if (puVar6 == puVar13) {
              puVar11 = (ulong *)puVar6[5];
              puVar12 = puVar6 + 5;
              if ((ulong *)puVar6[5] != (ulong *)0x0) {
LAB_0040d698:
                do {
                  do {
                    puVar21 = puVar12;
                    puVar13 = puVar11;
                    puVar11 = (ulong *)puVar13[5];
                    puVar12 = puVar13 + 5;
                  } while ((ulong *)puVar13[5] != (ulong *)0x0);
                  puVar11 = (ulong *)puVar13[4];
                  puVar12 = puVar13 + 4;
                } while ((ulong *)puVar13[4] != (ulong *)0x0);
                if (puVar21 < DAT_00446718) goto LAB_00402a29;
                *puVar21 = 0;
                goto LAB_0040d026;
              }
              if ((ulong *)puVar6[4] != (ulong *)0x0) {
                puVar11 = (ulong *)puVar6[4];
                puVar12 = puVar6 + 4;
                goto LAB_0040d698;
              }
              if (puVar7 != (ulong *)0x0) {
                uVar8 = *(uint *)(puVar6 + 7);
                puVar13 = (ulong *)0x0;
                if ((&DAT_00446958)[uVar8] == puVar6) {
                  (&DAT_00446708)[(ulong)uVar8 + 0x4a] = 0;
                  DAT_00446704 = DAT_00446704 & ~(1 << (uVar8 & 0x1f));
                  goto LAB_0040d09f;
                }
                goto LAB_0040d040;
              }
            }
            else {
              puVar11 = (ulong *)puVar6[2];
              if (((puVar11 < DAT_00446718) || (puVar6 != (ulong *)puVar11[3])) ||
                 (puVar6 != (ulong *)puVar13[2])) goto LAB_00402a29;
              puVar11[3] = (ulong)puVar13;
              puVar13[2] = (ulong)puVar11;
LAB_0040d026:
              if (puVar7 != (ulong *)0x0) {
                if (puVar6 == (&DAT_00446958)[*(uint *)(puVar6 + 7)]) {
                  (&DAT_00446708)[(ulong)*(uint *)(puVar6 + 7) + 0x4a] = (ulong)puVar13;
                }
                else {
LAB_0040d040:
                  if (puVar7 < puVar10) goto LAB_00402a29;
                  if (puVar6 == (ulong *)puVar7[4]) {
                    puVar7[4] = (ulong)puVar13;
                  }
                  else {
                    puVar7[5] = (ulong)puVar13;
                  }
                  if (puVar13 == (ulong *)0x0) goto LAB_0040d09f;
                }
                if (puVar13 < puVar10) goto LAB_00402a29;
                puVar11 = (ulong *)puVar6[4];
                puVar13[6] = (ulong)puVar7;
                if (puVar11 != (ulong *)0x0) {
                  if (puVar11 < puVar10) goto LAB_00402a29;
                  puVar13[4] = (ulong)puVar11;
                  puVar11[6] = (ulong)puVar13;
                }
                puVar7 = (ulong *)puVar6[5];
                if (puVar7 != (ulong *)0x0) {
                  if (puVar7 < puVar10) goto LAB_00402a29;
                  puVar13[5] = (ulong)puVar7;
                  puVar7[6] = (ulong)puVar13;
                }
              }
            }
LAB_0040d09f:
            if (0x1f < uVar26) {
              puVar6[1] = uVar19 | 3;
              puVar20[1] = uVar26 | 1;
              *(ulong *)((long)puVar20 + uVar26) = uVar26;
              uVar8 = DAT_00446704;
              if (uVar26 < 0x100) {
                uVar19 = (ulong)(uint)((int)(uVar26 >> 3) * 2);
                uVar8 = 1 << ((byte)(uVar26 >> 3) & 0x1f);
                if ((DAT_00446700 & uVar8) == 0) {
                  DAT_00446700 = uVar8 | DAT_00446700;
                  puVar13 = (ulong *)(&DAT_00446748 + uVar19 * 8);
                }
                else {
                  puVar13 = (ulong *)(&DAT_00446758)[uVar19];
                  if (puVar13 < puVar10) goto LAB_00402a29;
                }
                (&DAT_00446758)[uVar19] = puVar20;
                puVar13[3] = (ulong)puVar20;
                puVar20[2] = (ulong)puVar13;
                puVar20[3] = (ulong)(&DAT_00446748 + uVar19 * 8);
                uVar23 = DAT_00446708;
                puVar20 = DAT_00446720;
              }
              else {
                uVar4 = (uint)(uVar26 >> 8);
                if (uVar4 == 0) {
                  uVar4 = 1;
                  lVar16 = 600;
                  uVar19 = uVar26 >> 8 & 0xffffffff;
                }
                else if (uVar4 < 0x10000) {
                  uVar5 = 0x1f;
                  if (uVar4 != 0) {
                    for (; uVar4 >> uVar5 == 0; uVar5 = uVar5 - 1) {
                    }
                  }
                  uVar4 = ((uint)(uVar26 >> (0x26U - (char)(uVar5 ^ 0x1f) & 0x3f)) & 1) +
                          (0x1f - (uVar5 ^ 0x1f)) * 2;
                  uVar19 = (ulong)uVar4;
                  lVar16 = uVar19 * 8 + 600;
                  uVar4 = 1 << ((byte)uVar4 & 0x1f);
                }
                else {
                  uVar4 = 0x80000000;
                  lVar16 = 0x350;
                  uVar19 = 0x1f;
                }
                uVar5 = (uint)uVar19;
                *(uint *)(puVar20 + 7) = uVar5;
                puVar20[5] = 0;
                puVar20[4] = 0;
                if ((uVar8 & uVar4) == 0) {
                  DAT_00446704 = uVar8 | uVar4;
                  (&DAT_00446958)[uVar19] = puVar20;
                  puVar20[6] = (long)&DAT_00446700 + lVar16;
                  puVar20[3] = (ulong)puVar20;
                  puVar20[2] = (ulong)puVar20;
                  uVar23 = DAT_00446708;
                  puVar20 = DAT_00446720;
                }
                else {
                  puVar13 = (&DAT_00446958)[uVar19];
                  uVar9 = uVar26;
                  if (uVar5 != 0x1f) {
                    uVar9 = uVar26 << (0x39U - (char)(uVar5 >> 1) & 0x3f);
                  }
                  do {
                    puVar7 = puVar13;
                    if (uVar26 == (puVar7[1] & 0xfffffffffffffff8)) {
                      puVar13 = (ulong *)puVar7[2];
                      if ((puVar7 < puVar10) || (puVar13 < puVar10)) goto LAB_00402a29;
                      puVar13[3] = (ulong)puVar20;
                      puVar7[2] = (ulong)puVar20;
                      puVar20[2] = (ulong)puVar13;
                      puVar20[3] = (ulong)puVar7;
                      puVar20[6] = 0;
                      uVar23 = DAT_00446708;
                      puVar20 = DAT_00446720;
                      goto LAB_0040c7e4;
                    }
                    lVar16 = 4 - ((long)uVar9 >> 0x3f);
                    puVar13 = (ulong *)puVar7[lVar16];
                    uVar9 = uVar9 * 2;
                  } while ((ulong *)puVar7[lVar16] != (ulong *)0x0);
                  if (puVar7 + lVar16 < puVar10) goto LAB_00402a29;
                  puVar7[lVar16] = (ulong)puVar20;
                  puVar20[6] = (ulong)puVar7;
                  puVar20[3] = (ulong)puVar20;
                  puVar20[2] = (ulong)puVar20;
                  uVar23 = DAT_00446708;
                  puVar20 = DAT_00446720;
                }
              }
              goto LAB_0040c7e4;
            }
            goto LAB_0040d3f0;
          }
        }
      }
LAB_0040c828:
      if (uVar19 <= DAT_00446708) goto LAB_0040ce40;
      goto LAB_0040c831;
    }
    if (DAT_00446708 == 0xffffffffffffffff) {
      puVar10 = (ulong *)((long)DAT_00446720 + -1);
      goto LAB_0040ceab;
    }
    uVar19 = 0xffffffffffffffff;
    if ((DAT_00446a70 & 1) == 0) {
      return (ulong *)0x0;
    }
LAB_0040c8b4:
    if ((uVar19 < _DAT_004466d8) || (DAT_00446710 == 0)) goto LAB_0040cb4a;
    uVar26 = uVar19 + 0x3e + DAT_004466d0 & -DAT_004466d0;
    if ((DAT_00446a68 == 0) ||
       ((uVar26 + DAT_00446a58 <= DAT_00446a68 && (DAT_00446a58 < uVar26 + DAT_00446a58)))) {
      if (uVar19 < uVar26) {
        puVar6 = (ulong *)FUN_0040f340(uVar26);
        puVar6[1] = uVar26 - 0x20;
        puVar10 = DAT_00446718;
        *puVar6 = 0;
        *(undefined8 *)((long)puVar6 + (uVar26 - 0x18)) = 0xb;
        *(undefined8 *)((long)puVar6 + (uVar26 - 0x10)) = 0;
        if ((puVar10 == (ulong *)0x0) || (puVar6 < puVar10)) {
          DAT_00446718 = puVar6;
        }
        DAT_00446a58 = uVar26 + DAT_00446a58;
        uVar23 = DAT_00446708;
        puVar20 = DAT_00446720;
        if (_DAT_00446a60 < DAT_00446a58) {
          _DAT_00446a60 = DAT_00446a58;
        }
        goto LAB_0040c7e4;
      }
      goto LAB_0040cb4a;
    }
    uVar26 = -DAT_004466d0 & uVar19 + 0x5f + DAT_004466d0;
    if (uVar26 <= uVar19) {
      return (ulong *)0x0;
    }
LAB_0040cb6e:
    if ((uVar26 + DAT_00446a58 <= DAT_00446a58) || (DAT_00446a68 < uVar26 + DAT_00446a58)) {
      return (ulong *)0x0;
    }
  }
  puVar6 = (ulong *)FUN_0040f340(uVar26);
  puVar10 = DAT_00446728;
  uVar2 = DAT_004466e0;
  DAT_00446a58 = DAT_00446a58 + uVar26;
  if (_DAT_00446a60 < DAT_00446a58) {
    _DAT_00446a60 = DAT_00446a58;
  }
  if (DAT_00446728 == (ulong *)0x0) {
    if ((DAT_00446718 == (ulong *)0x0) || (puVar6 < DAT_00446718)) {
      DAT_00446718 = puVar6;
    }
    DAT_00446a90 = 1;
    _DAT_00446738 = 0x80;
    _DAT_00446740 = DAT_004466c0;
    puVar18 = &DAT_00446748;
    DAT_00446a78 = puVar6;
    DAT_00446a80 = uVar26;
    do {
      *(undefined **)(puVar18 + 0x18) = puVar18;
      *(undefined **)(puVar18 + 0x10) = puVar18;
      puVar18 = puVar18 + 0x10;
    } while (puVar18 != &DAT_00446948);
    uVar9 = uVar26 - 0x50;
    DAT_00446710 = uVar9;
    DAT_00446728 = puVar6;
    puVar6[1] = uVar9 | 1;
    *(undefined8 *)((long)puVar6 + (uVar26 - 0x48)) = 0x50;
    DAT_00446730 = DAT_004466e0;
LAB_0040d210:
    puVar10 = DAT_00446728;
    if (uVar19 < uVar9) {
      DAT_00446710 = uVar9 - uVar19;
      puVar13 = (ulong *)((long)DAT_00446728 + uVar19);
      puVar20 = DAT_00446728 + 2;
      DAT_00446728 = puVar13;
      puVar13[1] = DAT_00446710 | 1;
      puVar10[1] = uVar19 | 3;
    }
    else {
      FUN_00402b8a();
      puVar20 = (ulong *)0x0;
    }
    return puVar20;
  }
  if ((((puVar6 == (ulong *)((long)DAT_00446a78 + DAT_00446a80)) && ((DAT_00446a90 & 8) == 0)) &&
      ((DAT_00446a90 & 1) != 0)) && ((DAT_00446a78 <= DAT_00446728 && (DAT_00446728 < puVar6)))) {
    DAT_00446a80 = DAT_00446a80 + uVar26;
    uVar26 = DAT_00446710 + uVar26;
    uVar9 = uVar26;
    if (((ulong)DAT_00446728 & 0xf) != 0) {
      uVar9 = (ulong)(-((int)DAT_00446728 + 0x10) & 0xf);
      DAT_00446728 = (ulong *)((long)DAT_00446728 + uVar9);
      uVar9 = uVar26 - uVar9;
    }
    DAT_00446710 = uVar9;
    DAT_00446728[1] = uVar9 | 1;
    DAT_00446730 = DAT_004466e0;
    *(undefined8 *)((long)puVar10 + uVar26 + 8) = 0x50;
    goto LAB_0040d210;
  }
  if (puVar6 < DAT_00446718) {
    DAT_00446718 = puVar6;
  }
  ppuVar15 = &DAT_00446a78;
  puVar20 = DAT_00446a78;
  if (((DAT_00446a78 != (ulong *)((long)puVar6 + uVar26)) ||
      (bVar24 = (byte)(DAT_00446a90 & 8), (DAT_00446a90 & 8) != 0)) || ((DAT_00446a90 & 1) == 0)) {
    while ((DAT_00446728 < puVar20 ||
           (puVar20 = (ulong *)((long)puVar20 + (long)ppuVar15[1]), puVar20 <= DAT_00446728))) {
      ppuVar15 = (ulong **)ppuVar15[2];
      if (ppuVar15 == (ulong **)0x0) {
        do {
          invalidInstructionException();
        } while( true );
      }
      puVar20 = *ppuVar15;
    }
    lVar16 = -0x5f;
    if (((long)puVar20 - 0x4fU & 0xf) != 0) {
      lVar16 = (ulong)(-(int)((long)puVar20 - 0x4fU) & 0xf) - 0x5f;
    }
    DAT_00446710 = uVar26 - 0x50;
    puVar13 = (ulong *)(lVar16 + (long)puVar20);
    if ((ulong *)(lVar16 + (long)puVar20) < DAT_00446728 + 4) {
      puVar13 = DAT_00446728;
    }
    DAT_00446728 = puVar6;
    puVar6[1] = DAT_00446710 | 1;
    DAT_00446730 = uVar2;
    *(undefined8 *)((long)puVar6 + (uVar26 - 0x48)) = 0x50;
    *(int *)(puVar13 + 2) = (int)DAT_00446a78;
    *(undefined4 *)((long)puVar13 + 0x14) = DAT_00446a78._4_4_;
    *(undefined4 *)(puVar13 + 3) = (undefined4)DAT_00446a80;
    *(undefined4 *)((long)puVar13 + 0x1c) = DAT_00446a80._4_4_;
    uVar3 = uRam0000000000446a94;
    puVar13[1] = 0x33;
    *(undefined4 *)(puVar13 + 4) = DAT_00446a88._0_4_;
    *(undefined4 *)((long)puVar13 + 0x24) = DAT_00446a88._4_4_;
    *(uint *)(puVar13 + 5) = DAT_00446a90;
    *(undefined4 *)((long)puVar13 + 0x2c) = uVar3;
    DAT_00446a90 = 1;
    DAT_00446a88 = puVar13 + 2;
    puVar7 = puVar13 + 7;
    DAT_00446a78 = puVar6;
    DAT_00446a80 = uVar26;
    do {
      *puVar7 = 0xb;
      puVar7 = puVar7 + 1;
    } while (puVar7 < puVar20);
    uVar9 = DAT_00446710;
    if (puVar10 != puVar13) {
      puVar13[1] = puVar13[1] & 0xfffffffffffffffe;
      uVar26 = (long)puVar13 - (long)puVar10;
      puVar10[1] = uVar26 | 1;
      *puVar13 = uVar26;
      uVar8 = DAT_00446704;
      if (uVar26 < 0x100) {
        uVar23 = (ulong)(uint)((int)(uVar26 >> 3) * 2);
        uVar8 = 1 << ((byte)(uVar26 >> 3) & 0x1f);
        if ((DAT_00446700 & uVar8) == 0) {
          DAT_00446700 = uVar8 | DAT_00446700;
          puVar20 = (ulong *)(&DAT_00446748 + uVar23 * 8);
        }
        else {
          puVar20 = (ulong *)(&DAT_00446758)[uVar23];
          if (puVar20 < DAT_00446718) goto LAB_00402a29;
        }
        (&DAT_00446758)[uVar23] = puVar10;
        uVar9 = DAT_00446710;
        puVar20[3] = (ulong)puVar10;
        puVar10[2] = (ulong)puVar20;
        puVar10[3] = (ulong)(&DAT_00446748 + uVar23 * 8);
      }
      else {
        uVar4 = (uint)(uVar26 >> 8);
        if (uVar4 == 0) {
          uVar4 = 1;
          lVar16 = 600;
          uVar9 = uVar26 >> 8 & 0xffffffff;
        }
        else if (uVar4 < 0x10000) {
          uVar5 = 0x1f;
          if (uVar4 != 0) {
            for (; uVar4 >> uVar5 == 0; uVar5 = uVar5 - 1) {
            }
          }
          uVar4 = ((uint)(uVar26 >> (0x26U - (char)(uVar5 ^ 0x1f) & 0x3f)) & 1) +
                  (0x1f - (uVar5 ^ 0x1f)) * 2;
          uVar9 = (ulong)uVar4;
          lVar16 = uVar9 * 8 + 600;
          uVar4 = 1 << ((byte)uVar4 & 0x1f);
        }
        else {
          uVar4 = 0x80000000;
          lVar16 = 0x350;
          uVar9 = 0x1f;
        }
        uVar5 = (uint)uVar9;
        *(uint *)(puVar10 + 7) = uVar5;
        puVar10[5] = 0;
        puVar10[4] = 0;
        if ((uVar8 & uVar4) == 0) {
          DAT_00446704 = uVar8 | uVar4;
          (&DAT_00446958)[uVar9] = puVar10;
          uVar9 = DAT_00446710;
          puVar10[6] = (long)&DAT_00446700 + lVar16;
          puVar10[3] = (ulong)puVar10;
          puVar10[2] = (ulong)puVar10;
        }
        else {
          puVar20 = (&DAT_00446958)[uVar9];
          uVar23 = uVar26;
          if (uVar5 != 0x1f) {
            uVar23 = uVar26 << (0x39U - (char)(uVar5 >> 1) & 0x3f);
          }
          do {
            puVar13 = puVar20;
            if (uVar26 == (puVar13[1] & 0xfffffffffffffff8)) {
              puVar20 = (ulong *)puVar13[2];
              if ((puVar20 < DAT_00446718) || (puVar13 < DAT_00446718)) goto LAB_00402a29;
              puVar20[3] = (ulong)puVar10;
              uVar9 = DAT_00446710;
              puVar13[2] = (ulong)puVar10;
              puVar10[2] = (ulong)puVar20;
              puVar10[3] = (ulong)puVar13;
              puVar10[6] = 0;
              goto LAB_0040d210;
            }
            lVar16 = 4 - ((long)uVar23 >> 0x3f);
            puVar20 = (ulong *)puVar13[lVar16];
            uVar23 = uVar23 * 2;
          } while ((ulong *)puVar13[lVar16] != (ulong *)0x0);
          if (puVar13 + lVar16 < DAT_00446718) goto LAB_00402a29;
          puVar13[lVar16] = (ulong)puVar10;
          uVar9 = DAT_00446710;
          puVar10[6] = (ulong)puVar13;
          puVar10[3] = (ulong)puVar10;
          puVar10[2] = (ulong)puVar10;
        }
      }
    }
    goto LAB_0040d210;
  }
  DAT_00446a80 = DAT_00446a80 + uVar26;
  if (((ulong)DAT_00446a78 & 0xf) != 0) {
    puVar20 = (ulong *)((long)DAT_00446a78 + (ulong)(-((int)DAT_00446a78 + 0x10) & 0xf));
  }
  puVar13 = (ulong *)((long)puVar6 + uVar19);
  uVar26 = (long)puVar20 + (-uVar19 - (long)puVar6);
  DAT_00446a78 = puVar6;
  puVar6[1] = uVar19 | 3;
  if (puVar10 == puVar20) {
    DAT_00446710 = uVar26 + DAT_00446710;
    DAT_00446728 = puVar13;
    puVar13[1] = DAT_00446710 | 1;
    uVar23 = DAT_00446708;
    puVar20 = DAT_00446720;
    goto LAB_0040c7e4;
  }
  if (DAT_00446720 == puVar20) {
    uVar26 = uVar26 + DAT_00446708;
    DAT_00446708 = uVar26;
    DAT_00446720 = puVar13;
    puVar13[1] = uVar26 | 1;
    *(ulong *)((long)puVar13 + uVar26) = uVar26;
    uVar23 = DAT_00446708;
    puVar20 = DAT_00446720;
    goto LAB_0040c7e4;
  }
  uVar19 = puVar20[1];
  if (((uint)uVar19 & 3) == 1) {
    puVar10 = (ulong *)puVar20[3];
    if (uVar19 < 0x100) {
      puVar7 = (ulong *)puVar20[2];
      if ((puVar7 != (ulong *)(&DAT_00446748 + (ulong)(uint)((int)(uVar19 >> 3) * 2) * 8)) &&
         ((puVar7 < DAT_00446718 || ((ulong *)puVar7[3] != puVar20)))) goto LAB_00402a29;
      if (puVar7 == puVar10) {
        bVar1 = (byte)(uVar19 >> 3) & 0x1f;
        DAT_00446700 = DAT_00446700 & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
      }
      else {
        if (((ulong *)(&DAT_00446748 + (ulong)(uint)((int)(uVar19 >> 3) * 2) * 8) != puVar10) &&
           ((puVar10 < DAT_00446718 || ((ulong *)puVar10[2] != puVar20)))) goto LAB_00402a29;
        puVar7[3] = (ulong)puVar10;
        puVar10[2] = (ulong)puVar7;
      }
    }
    else {
      puVar7 = (ulong *)puVar20[6];
      if (puVar10 == puVar20) {
        if ((ulong *)puVar20[5] == (ulong *)0x0) {
          puVar10 = (ulong *)puVar20[4];
          if (puVar10 == (ulong *)0x0) goto LAB_0040db2c;
          puVar11 = puVar10;
          puVar12 = puVar20 + 4;
        }
        else {
          puVar11 = (ulong *)puVar20[5];
          puVar12 = puVar20 + 5;
        }
        do {
          do {
            puVar21 = puVar12;
            puVar10 = puVar11;
            puVar11 = (ulong *)puVar10[5];
            puVar12 = puVar10 + 5;
          } while ((ulong *)puVar10[5] != (ulong *)0x0);
          puVar11 = (ulong *)puVar10[4];
          puVar12 = puVar10 + 4;
        } while ((ulong *)puVar10[4] != (ulong *)0x0);
        if (puVar21 < DAT_00446718) goto LAB_00402a29;
        *puVar21 = 0;
      }
      else {
        puVar11 = (ulong *)puVar20[2];
        if (((puVar11 < DAT_00446718) || ((ulong *)puVar11[3] != puVar20)) ||
           ((ulong *)puVar10[2] != puVar20)) goto LAB_00402a29;
        puVar11[3] = (ulong)puVar10;
        puVar10[2] = (ulong)puVar11;
      }
LAB_0040db2c:
      if (puVar7 != (ulong *)0x0) {
        uVar8 = *(uint *)(puVar20 + 7);
        if ((&DAT_00446958)[uVar8] == puVar20) {
          (&DAT_00446708)[(ulong)uVar8 + 0x4a] = (ulong)puVar10;
          if (puVar10 == (ulong *)0x0) {
            bVar1 = (byte)uVar8 & 0x1f;
            DAT_00446704 = DAT_00446704 & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
          }
          else {
LAB_0040db72:
            puVar11 = DAT_00446718;
            if (puVar10 < DAT_00446718) goto LAB_00402a29;
            puVar12 = (ulong *)puVar20[4];
            puVar10[6] = (ulong)puVar7;
            if (puVar12 != (ulong *)0x0) {
              if (puVar12 < puVar11) goto LAB_00402a29;
              puVar10[4] = (ulong)puVar12;
              puVar12[6] = (ulong)puVar10;
            }
            puVar7 = (ulong *)puVar20[5];
            if (puVar7 != (ulong *)0x0) {
              if (puVar7 < puVar11) goto LAB_00402a29;
              puVar10[5] = (ulong)puVar7;
              puVar7[6] = (ulong)puVar10;
            }
          }
        }
        else {
          if (puVar7 < DAT_00446718) goto LAB_00402a29;
          if ((ulong *)puVar7[4] == puVar20) {
            puVar7[4] = (ulong)puVar10;
          }
          else {
            puVar7[5] = (ulong)puVar10;
          }
          if (puVar10 != (ulong *)0x0) goto LAB_0040db72;
        }
      }
    }
    uVar26 = uVar26 + (uVar19 & 0xfffffffffffffff8);
    puVar20 = (ulong *)((long)puVar20 + (uVar19 & 0xfffffffffffffff8) + 8);
    *puVar20 = *puVar20 & 0xfffffffffffffffe;
    iVar22 = (int)(uVar26 >> 3);
    puVar13[1] = uVar26 | 1;
    *(ulong *)((long)puVar13 + uVar26) = uVar26;
    uVar8 = DAT_00446704;
  }
  else {
    puVar20[1] = uVar19 & 0xfffffffffffffffe;
    puVar13[1] = uVar26 | 1;
    *puVar20 = uVar26;
    iVar22 = (int)(uVar26 >> 3);
    uVar8 = DAT_00446704;
  }
  DAT_00446704 = uVar8;
  if (uVar26 < 0x100) {
    uVar26 = (ulong)(uint)(iVar22 * 2);
    uVar8 = 1 << ((byte)iVar22 & 0x1f);
    if ((DAT_00446700 & uVar8) == 0) {
      DAT_00446700 = DAT_00446700 | uVar8;
      puVar10 = (ulong *)(&DAT_00446748 + uVar26 * 8);
    }
    else {
      puVar10 = (ulong *)(&DAT_00446758)[uVar26];
      if (puVar10 < DAT_00446718) {
LAB_00402a29:
                    // WARNING: Subroutine does not return
        FUN_00401114();
      }
    }
    (&DAT_00446758)[uVar26] = puVar13;
    puVar10[3] = (ulong)puVar13;
    puVar13[2] = (ulong)puVar10;
    puVar13[3] = (ulong)(&DAT_00446748 + uVar26 * 8);
    uVar23 = DAT_00446708;
    puVar20 = DAT_00446720;
  }
  else {
    uVar4 = (uint)(uVar26 >> 8);
    uVar19 = uVar26 >> 8 & 0xffffffff;
    if ((uVar4 != 0) && (uVar19 = 0x1f, uVar4 < 0x10000)) {
      uVar5 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> uVar5 == 0; uVar5 = uVar5 - 1) {
        }
      }
      uVar19 = (ulong)(((uint)(uVar26 >> (0x26U - (char)(uVar5 ^ 0x1f) & 0x3f)) & 1) +
                      (0x1f - (uVar5 ^ 0x1f)) * 2);
    }
    uVar4 = (uint)uVar19;
    *(uint *)(puVar13 + 7) = uVar4;
    uVar5 = 1 << ((byte)uVar19 & 0x1f);
    puVar13[5] = 0;
    puVar13[4] = 0;
    if ((uVar8 & uVar5) == 0) {
      DAT_00446704 = uVar8 | uVar5;
      (&DAT_00446958)[uVar19] = puVar13;
      puVar13[6] = (ulong)(&DAT_00446958 + uVar19);
      puVar13[3] = (ulong)puVar13;
      puVar13[2] = (ulong)puVar13;
      uVar23 = DAT_00446708;
      puVar20 = DAT_00446720;
    }
    else {
      if (uVar4 != 0x1f) {
        bVar24 = 0x39 - (char)(uVar4 >> 1);
      }
      puVar10 = (&DAT_00446958)[uVar19];
      lVar16 = uVar26 << (bVar24 & 0x3f);
      do {
        puVar20 = puVar10;
        if (uVar26 == (puVar20[1] & 0xfffffffffffffff8)) {
          puVar10 = (ulong *)puVar20[2];
          if ((puVar10 < DAT_00446718) || (puVar20 < DAT_00446718)) goto LAB_00402a29;
          puVar10[3] = (ulong)puVar13;
          puVar20[2] = (ulong)puVar13;
          puVar13[2] = (ulong)puVar10;
          puVar13[3] = (ulong)puVar20;
          puVar13[6] = 0;
          uVar23 = DAT_00446708;
          puVar20 = DAT_00446720;
          goto LAB_0040c7e4;
        }
        lVar14 = 4 - (lVar16 >> 0x3f);
        puVar10 = (ulong *)puVar20[lVar14];
        lVar16 = lVar16 * 2;
      } while ((ulong *)puVar20[lVar14] != (ulong *)0x0);
      if (puVar20 + lVar14 < DAT_00446718) goto LAB_00402a29;
      puVar20[lVar14] = (ulong)puVar13;
      puVar13[6] = (ulong)puVar20;
      puVar13[3] = (ulong)puVar13;
      puVar13[2] = (ulong)puVar13;
      uVar23 = DAT_00446708;
      puVar20 = DAT_00446720;
    }
  }
LAB_0040c7e4:
  DAT_00446720 = puVar20;
  DAT_00446708 = uVar23;
  return puVar6 + 2;
}



// WARNING: Removing unreachable block (ram,0x0040bd09)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long ** FUN_0040dcd0(long param_1)

{
  long **pplVar1;
  ulong uVar2;
  long *plVar3;
  long **pplVar4;
  long **pplVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long **in_RAX;
  long **pplVar10;
  long **pplVar11;
  long **pplVar12;
  long **pplVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long **pplVar17;
  long **pplVar18;
  long **pplVar19;
  long *plVar20;
  
  pplVar11 = DAT_00446718;
  if (param_1 == 0) {
    return in_RAX;
  }
  pplVar17 = (long **)(param_1 + -0x10);
  if (pplVar17 < DAT_00446718) goto LAB_00402a33;
  uVar9 = *(ulong *)(param_1 + -8);
  if (((uint)uVar9 & 3) == 1) goto LAB_00402a33;
  pplVar10 = (long **)(uVar9 & 0xfffffffffffffff8);
  pplVar1 = (long **)((long)pplVar17 + (long)pplVar10);
  if ((uVar9 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + -0x10);
    pplVar17 = (long **)((long)pplVar17 - uVar2);
    if ((uVar9 & 3) == 0) {
      lVar16 = (long)pplVar10 + uVar2 + 0x20;
      pplVar11 = (long **)FUN_0040f560(pplVar17,lVar16);
      if ((int)pplVar11 == 0) {
        DAT_00446a58 = DAT_00446a58 - lVar16;
        return pplVar11;
      }
      return pplVar11;
    }
    pplVar10 = (long **)((long)pplVar10 + uVar2);
    if (pplVar17 < DAT_00446718) goto LAB_00402a33;
    if (DAT_00446720 == pplVar17) {
      if (((uint)pplVar1[1] & 3) == 3) {
        DAT_00446708 = pplVar10;
        pplVar1[1] = (long *)((ulong)pplVar1[1] & 0xfffffffffffffffe);
        pplVar17[1] = (long *)((ulong)pplVar10 | 1);
        *pplVar1 = (long *)pplVar10;
        return pplVar10;
      }
    }
    else {
      pplVar19 = (long **)pplVar17[3];
      if (uVar2 < 0x100) {
        pplVar18 = (long **)pplVar17[2];
        if (((long **)(&DAT_00446748 + (ulong)(uint)((int)(uVar2 >> 3) * 2) * 8) != pplVar18) &&
           ((pplVar18 < DAT_00446718 || ((long **)pplVar18[3] != pplVar17)))) goto LAB_00402a2e;
        if (pplVar19 == pplVar18) {
          bVar6 = (byte)(uVar2 >> 3) & 0x1f;
          DAT_00446700 = DAT_00446700 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
        }
        else {
          if (((long **)(&DAT_00446748 + (ulong)(uint)((int)(uVar2 >> 3) * 2) * 8) != pplVar19) &&
             ((pplVar19 < DAT_00446718 || ((long **)pplVar19[2] != pplVar17)))) goto LAB_00402a2e;
          pplVar18[3] = (long *)pplVar19;
          pplVar19[2] = (long *)pplVar18;
        }
      }
      else {
        pplVar18 = (long **)pplVar17[6];
        if (pplVar19 == pplVar17) {
          pplVar4 = pplVar17 + 5;
          pplVar5 = (long **)pplVar17[5];
          if ((long **)pplVar17[5] == (long **)0x0) {
            if ((long **)pplVar17[4] == (long **)0x0) {
              pplVar19 = (long **)0x0;
              goto LAB_0040e146;
            }
            pplVar4 = pplVar17 + 4;
            pplVar5 = (long **)pplVar17[4];
          }
          do {
            do {
              pplVar19 = pplVar5;
              pplVar13 = pplVar4;
              pplVar4 = pplVar19 + 5;
              pplVar5 = (long **)pplVar19[5];
            } while ((long **)pplVar19[5] != (long **)0x0);
            pplVar4 = pplVar19 + 4;
            pplVar5 = (long **)pplVar19[4];
          } while ((long **)pplVar19[4] != (long **)0x0);
          if (pplVar13 < DAT_00446718) goto LAB_00402a2e;
          *pplVar13 = (long *)0x0;
        }
        else {
          pplVar4 = (long **)pplVar17[2];
          if (((pplVar4 < DAT_00446718) || ((long **)pplVar4[3] != pplVar17)) ||
             ((long **)pplVar19[2] != pplVar17)) goto LAB_00402a2e;
          pplVar4[3] = (long *)pplVar19;
          pplVar19[2] = (long *)pplVar4;
        }
LAB_0040e146:
        if (pplVar18 != (long **)0x0) {
          uVar8 = *(uint *)(pplVar17 + 7);
          if ((long **)(&DAT_00446958)[uVar8] == pplVar17) {
            *(long ***)(&DAT_00446700 + ((ulong)uVar8 + 0x4b) * 2) = pplVar19;
            if (pplVar19 == (long **)0x0) {
              bVar6 = (byte)uVar8 & 0x1f;
              DAT_00446704 = DAT_00446704 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
            }
            else {
LAB_0040e187:
              if (pplVar19 < pplVar11) goto LAB_00402a2e;
              pplVar4 = (long **)pplVar17[4];
              pplVar19[6] = (long *)pplVar18;
              if (pplVar4 != (long **)0x0) {
                if (pplVar4 < pplVar11) goto LAB_00402a2e;
                pplVar19[4] = (long *)pplVar4;
                pplVar4[6] = (long *)pplVar19;
              }
              pplVar18 = (long **)pplVar17[5];
              if (pplVar18 != (long **)0x0) {
                if (pplVar18 < pplVar11) goto LAB_00402a2e;
                pplVar19[5] = (long *)pplVar18;
                pplVar18[6] = (long *)pplVar19;
              }
            }
          }
          else {
            if (pplVar18 < pplVar11) goto LAB_00402a2e;
            if ((long **)pplVar18[4] == pplVar17) {
              pplVar18[4] = (long *)pplVar19;
            }
            else {
              pplVar18[5] = (long *)pplVar19;
            }
            if (pplVar19 != (long **)0x0) goto LAB_0040e187;
          }
        }
      }
    }
  }
  pplVar19 = DAT_00446720;
  if ((pplVar1 <= pplVar17) || (plVar3 = pplVar1[1], ((ulong)plVar3 & 1) == 0)) {
LAB_00402a33:
                    // WARNING: Subroutine does not return
    FUN_00401114();
  }
  if (((ulong)plVar3 & 2) == 0) {
    if (DAT_00446728 == pplVar1) {
      pplVar10 = (long **)((long)pplVar10 + (long)DAT_00446710);
      DAT_00446710 = pplVar10;
      DAT_00446728 = pplVar17;
      pplVar17[1] = (long *)((ulong)pplVar10 | 1);
      if (pplVar19 == pplVar17) {
        DAT_00446720 = (long **)0x0;
        DAT_00446708 = (long **)0x0;
      }
      if (pplVar10 <= DAT_00446730) {
        return pplVar10;
      }
      if (DAT_00446728 == (long **)0x0) {
        return (long **)0x0;
      }
      if ((long **)0x50 < DAT_00446710) {
        pplVar11 = (long **)&DAT_00446a78;
        pplVar17 = pplVar11;
        do {
          pplVar1 = (long **)*pplVar17;
          if (pplVar1 <= DAT_00446728) {
            plVar3 = pplVar17[1];
            if (DAT_00446728 < (long **)((long)pplVar1 + (long)plVar3)) {
              if ((((*(uint *)(pplVar17 + 3) & 8) != 0) || ((*(uint *)(pplVar17 + 3) & 1) == 0)) ||
                 (plVar20 = (long *)((((long)DAT_00446710 + (DAT_004466d0 - 0x51)) / DAT_004466d0 -
                                     1) * DAT_004466d0),
                 plVar3 <= plVar20 && (long)plVar20 - (long)plVar3 != 0)) break;
              goto LAB_0040bdd8;
            }
          }
          pplVar17 = (long **)pplVar17[2];
          if (pplVar17 == (long **)0x0) {
            do {
              invalidInstructionException();
            } while( true );
          }
        } while( true );
      }
      goto LAB_0040bd70;
    }
    if (DAT_00446720 == pplVar1) {
      pplVar10 = (long **)((long)pplVar10 + (long)DAT_00446708);
      DAT_00446708 = pplVar10;
      DAT_00446720 = pplVar17;
      pplVar17[1] = (long *)((ulong)pplVar10 | 1);
      *(long ***)((long)pplVar17 + (long)pplVar10) = pplVar10;
      return pplVar10;
    }
    pplVar18 = (long **)pplVar1[3];
    pplVar10 = (long **)((long)pplVar10 + ((ulong)plVar3 & 0xfffffffffffffff8));
    if (((ulong)plVar3 & 0xfffffffffffffff8) < 0xf9) {
      pplVar4 = (long **)pplVar1[2];
      if (((long **)(&DAT_00446748 + (ulong)(uint)((int)((ulong)plVar3 >> 3) * 2) * 8) != pplVar4)
         && ((pplVar4 < pplVar11 || ((long **)pplVar4[3] != pplVar1)))) goto LAB_00402a2e;
      if (pplVar18 == pplVar4) {
        bVar6 = (byte)((ulong)plVar3 >> 3) & 0x1f;
        DAT_00446700 = DAT_00446700 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
      }
      else {
        if ((pplVar18 != (long **)(&DAT_00446748 + (ulong)(uint)((int)((ulong)plVar3 >> 3) * 2) * 8)
            ) && ((pplVar18 < pplVar11 || ((long **)pplVar18[2] != pplVar1)))) goto LAB_00402a2e;
        pplVar4[3] = (long *)pplVar18;
        pplVar18[2] = (long *)pplVar4;
      }
    }
    else {
      pplVar4 = (long **)pplVar1[6];
      if (pplVar18 == pplVar1) {
        pplVar5 = pplVar1 + 5;
        pplVar13 = (long **)pplVar1[5];
        if ((long **)pplVar1[5] == (long **)0x0) {
          if ((long **)pplVar1[4] == (long **)0x0) {
            pplVar18 = (long **)0x0;
            goto LAB_0040de29;
          }
          pplVar5 = pplVar1 + 4;
          pplVar13 = (long **)pplVar1[4];
        }
        do {
          do {
            pplVar18 = pplVar13;
            pplVar12 = pplVar5;
            pplVar5 = pplVar18 + 5;
            pplVar13 = (long **)pplVar18[5];
          } while ((long **)pplVar18[5] != (long **)0x0);
          pplVar5 = pplVar18 + 4;
          pplVar13 = (long **)pplVar18[4];
        } while ((long **)pplVar18[4] != (long **)0x0);
        if (pplVar12 < pplVar11) goto LAB_00402a2e;
        *pplVar12 = (long *)0x0;
      }
      else {
        pplVar5 = (long **)pplVar1[2];
        if (((pplVar5 < pplVar11) || ((long **)pplVar5[3] != pplVar1)) ||
           ((long **)pplVar18[2] != pplVar1)) goto LAB_00402a2e;
        pplVar5[3] = (long *)pplVar18;
        pplVar18[2] = (long *)pplVar5;
      }
LAB_0040de29:
      if (pplVar4 != (long **)0x0) {
        uVar8 = *(uint *)(pplVar1 + 7);
        if ((long **)(&DAT_00446958)[uVar8] == pplVar1) {
          *(long ***)(&DAT_00446700 + ((ulong)uVar8 + 0x4b) * 2) = pplVar18;
          if (pplVar18 == (long **)0x0) {
            bVar6 = (byte)uVar8 & 0x1f;
            DAT_00446704 = DAT_00446704 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
          }
          else {
LAB_0040de6a:
            if (pplVar18 < pplVar11) goto LAB_00402a2e;
            pplVar5 = (long **)pplVar1[4];
            pplVar18[6] = (long *)pplVar4;
            if (pplVar5 != (long **)0x0) {
              if (pplVar5 < pplVar11) goto LAB_00402a2e;
              pplVar18[4] = (long *)pplVar5;
              pplVar5[6] = (long *)pplVar18;
            }
            pplVar1 = (long **)pplVar1[5];
            if (pplVar1 != (long **)0x0) {
              if (pplVar1 < pplVar11) goto LAB_00402a2e;
              pplVar18[5] = (long *)pplVar1;
              pplVar1[6] = (long *)pplVar18;
            }
          }
        }
        else {
          if (pplVar4 < pplVar11) goto LAB_00402a2e;
          if ((long **)pplVar4[4] == pplVar1) {
            pplVar4[4] = (long *)pplVar18;
          }
          else {
            pplVar4[5] = (long *)pplVar18;
          }
          if (pplVar18 != (long **)0x0) goto LAB_0040de6a;
        }
      }
    }
    pplVar17[1] = (long *)((ulong)pplVar10 | 1);
    *(long ***)((long)pplVar17 + (long)pplVar10) = pplVar10;
    if (pplVar19 == pplVar17) {
      DAT_00446708 = pplVar10;
      return pplVar10;
    }
  }
  else {
    pplVar1[1] = (long *)((ulong)plVar3 & 0xfffffffffffffffe);
    pplVar17[1] = (long *)((ulong)pplVar10 | 1);
    *(long ***)((long)pplVar17 + (long)pplVar10) = pplVar10;
  }
  uVar8 = DAT_00446704;
  if (pplVar10 < (long **)0x100) {
    uVar9 = (ulong)(uint)((int)((ulong)pplVar10 >> 3) * 2);
    uVar8 = 1 << ((byte)((ulong)pplVar10 >> 3) & 0x1f);
    if ((DAT_00446700 & uVar8) == 0) {
      DAT_00446700 = uVar8 | DAT_00446700;
      pplVar10 = (long **)(&DAT_00446748 + uVar9 * 8);
    }
    else {
      pplVar10 = (long **)(&DAT_00446758)[uVar9];
      if ((long **)(&DAT_00446758)[uVar9] < pplVar11) {
LAB_00402a2e:
                    // WARNING: Subroutine does not return
        FUN_00401114();
      }
    }
    (&DAT_00446758)[uVar9] = pplVar17;
    pplVar10[3] = (long *)pplVar17;
    pplVar17[2] = (long *)pplVar10;
    pplVar17[3] = (long *)(&DAT_00446748 + uVar9 * 8);
  }
  else {
    uVar14 = (uint)((ulong)pplVar10 >> 8);
    if (uVar14 == 0) {
      uVar15 = 1;
      lVar16 = 600;
    }
    else if (uVar14 < 0x10000) {
      uVar15 = 0x1f;
      if (uVar14 != 0) {
        for (; uVar14 >> uVar15 == 0; uVar15 = uVar15 - 1) {
        }
      }
      uVar14 = ((uint)((ulong)pplVar10 >> (0x26U - (char)(uVar15 ^ 0x1f) & 0x3f)) & 1) +
               (0x1f - (uVar15 ^ 0x1f)) * 2;
      lVar16 = (ulong)uVar14 * 8 + 600;
      uVar15 = 1 << ((byte)uVar14 & 0x1f);
    }
    else {
      uVar15 = 0x80000000;
      lVar16 = 0x350;
      uVar14 = 0x1f;
    }
    *(uint *)(pplVar17 + 7) = uVar14;
    pplVar17[5] = (long *)0x0;
    pplVar17[4] = (long *)0x0;
    if ((uVar15 & uVar8) == 0) {
      DAT_00446704 = uVar15 | uVar8;
      *(long ***)((long)&DAT_00446700 + lVar16) = pplVar17;
      pplVar17[6] = (long *)((long)&DAT_00446700 + lVar16);
      pplVar17[3] = (long *)pplVar17;
      pplVar17[2] = (long *)pplVar17;
    }
    else {
      pplVar1 = *(long ***)((long)&DAT_00446700 + lVar16);
      pplVar19 = pplVar10;
      if (uVar14 != 0x1f) {
        pplVar19 = (long **)((long)pplVar10 << (0x39U - (char)(uVar14 >> 1) & 0x3f));
      }
      do {
        pplVar18 = pplVar1;
        if ((long **)((ulong)pplVar18[1] & 0xfffffffffffffff8) == pplVar10) {
          pplVar10 = (long **)pplVar18[2];
          if ((pplVar18 < pplVar11) || (pplVar10 < pplVar11)) goto LAB_00402a2e;
          pplVar10[3] = (long *)pplVar17;
          pplVar18[2] = (long *)pplVar17;
          pplVar17[2] = (long *)pplVar10;
          pplVar17[3] = (long *)pplVar18;
          pplVar17[6] = (long *)0x0;
          goto LAB_0040e029;
        }
        lVar16 = 4 - ((long)pplVar19 >> 0x3f);
        pplVar1 = (long **)pplVar18[lVar16];
        pplVar19 = (long **)((long)pplVar19 * 2);
      } while ((long **)pplVar18[lVar16] != (long **)0x0);
      pplVar10 = pplVar18 + lVar16;
      if (pplVar10 < pplVar11) goto LAB_00402a2e;
      pplVar18[lVar16] = (long *)pplVar17;
      pplVar17[6] = (long *)pplVar18;
      pplVar17[3] = (long *)pplVar17;
      pplVar17[2] = (long *)pplVar17;
    }
LAB_0040e029:
    _DAT_00446738 = _DAT_00446738 + -1;
    if (_DAT_00446738 == 0) {
      pplVar11 = (long **)FUN_0040b940(&DAT_00446700);
      return pplVar11;
    }
  }
  return pplVar10;
  while (pplVar11 = (long **)pplVar11[2], pplVar11 != (long **)0x0) {
LAB_0040bdd8:
    if ((pplVar1 <= pplVar11) && (pplVar11 < (long **)((long)pplVar1 + (long)plVar3)))
    goto LAB_0040bd70;
  }
  lVar16 = FUN_0040f550(pplVar1,plVar3,(long)plVar3 - (long)plVar20,0,0);
  if (((lVar16 != -1) ||
      (iVar7 = FUN_0040f560((long)*pplVar17 + ((long)plVar3 - (long)plVar20),plVar20), iVar7 == 0))
     && (pplVar11 = DAT_00446728, plVar20 != (long *)0x0)) {
    pplVar17[1] = (long *)((long)pplVar17[1] - (long)plVar20);
    pplVar17 = (long **)((long)DAT_00446710 - (long)plVar20);
    DAT_00446a58 = DAT_00446a58 - (long)plVar20;
    DAT_00446710 = pplVar17;
    if (((ulong)DAT_00446728 & 0xf) != 0) {
      uVar9 = (ulong)(-((int)DAT_00446728 + 0x10) & 0xf);
      DAT_00446728 = (long **)((long)DAT_00446728 + uVar9);
      DAT_00446710 = (long **)((long)pplVar17 - uVar9);
    }
    DAT_00446728[1] = (long *)((ulong)DAT_00446710 | 1);
    DAT_00446730 = DAT_004466e0;
    *(undefined8 *)((long)(pplVar11 + 1) + (long)pplVar17) = 0x50;
    goto LAB_0040bd73;
  }
LAB_0040bd70:
  plVar20 = (long *)0x0;
LAB_0040bd73:
  lVar16 = FUN_0040b940(&DAT_00446700);
  if ((long)plVar20 + lVar16 == 0) {
    if (DAT_00446730 < DAT_00446710) {
      DAT_00446730 = (long **)0xffffffffffffffff;
    }
    return (long **)0x0;
  }
  return (long **)0x1;
}



long FUN_0040e4e0(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (param_1 == 0) {
    lVar1 = FUN_0040c5f0(param_2);
    return lVar1;
  }
  if (param_2 < 0xffffffffffffff80) {
    if (param_2 == 0) {
      FUN_0040dcd0();
      lVar1 = 0;
    }
    else {
      uVar2 = param_2 + 0x1f & 0xfffffffffffffff0;
      if (param_2 < 0xf) {
        uVar2 = 0x20;
      }
      lVar1 = FUN_0040e5d0(&DAT_00446700,param_1 + -0x10,uVar2,1);
      if (lVar1 == 0) {
        lVar1 = FUN_0040c5f0(param_2);
        if (lVar1 != 0) {
          uVar2 = (*(ulong *)(param_1 + -8) & 0xfffffffffffffff8) - 0x10;
          if (param_2 < uVar2) {
            uVar2 = param_2;
          }
          FUN_004154c0(lVar1,param_1,uVar2);
          FUN_0040dcd0(param_1);
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
      }
    }
    return lVar1;
  }
  FUN_00402b8a();
  return 0;
}



// WARNING: Type propagation algorithm not settling

long * FUN_0040e5d0(uint *param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  byte bVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  long *plVar16;
  
  uVar13 = param_2[1];
  plVar5 = *(long **)(param_1 + 6);
  uVar11 = uVar13 & 0xfffffffffffffff8;
  plVar2 = (long *)((long)param_2 + uVar11);
  if (param_2 < plVar5) goto LAB_00402a38;
  uVar14 = (uint)uVar13;
  if ((((uVar14 & 3) == 1) || (plVar2 <= param_2)) || (uVar6 = plVar2[1], (uVar6 & 1) == 0))
  goto LAB_00402a38;
  if ((uVar13 & 3) == 0) {
    if (0xff < param_3) {
      if ((param_3 + 8 <= uVar11) && (uVar11 - param_3 <= (ulong)(DAT_004466d0 * 2))) {
        return param_2;
      }
      lVar12 = *param_2;
      uVar13 = DAT_004466d0 + 0x3e + param_3 & -DAT_004466d0;
      lVar3 = uVar11 + 0x20 + lVar12;
      uVar11 = FUN_0040f550((long)param_2 - lVar12,lVar3,uVar13,param_4,0);
      if (uVar11 != 0xffffffffffffffff) {
        plVar2 = (long *)(uVar11 + lVar12);
        lVar12 = uVar13 - lVar12;
        uVar6 = *(ulong *)(param_1 + 6);
        plVar2[1] = lVar12 + -0x20;
        *(undefined8 *)((long)plVar2 + lVar12 + -0x18) = 0xb;
        *(undefined8 *)((long)plVar2 + lVar12 + -0x10) = 0;
        if (uVar11 < uVar6) {
          *(ulong *)(param_1 + 6) = uVar11;
        }
        uVar11 = (uVar13 + *(long *)(param_1 + 0xd6)) - lVar3;
        *(ulong *)(param_1 + 0xd6) = uVar11;
        if (*(ulong *)(param_1 + 0xd8) <= uVar11 && uVar11 != *(ulong *)(param_1 + 0xd8)) {
          *(ulong *)(param_1 + 0xd8) = uVar11;
          return plVar2;
        }
        return plVar2;
      }
    }
    return (long *)0x0;
  }
  if (param_3 <= uVar11) {
    if (0x1f < uVar11 - param_3) {
      param_2[1] = param_3 | uVar14 & 1 | 2;
      *(ulong *)((long)param_2 + param_3 + 8) = uVar11 - param_3 | 3;
      plVar2[1] = plVar2[1] | 1;
      FUN_0040bea0(param_1,(long)param_2 + param_3);
      return param_2;
    }
    return param_2;
  }
  if (*(long **)(param_1 + 10) == plVar2) {
    if (uVar11 + *(long *)(param_1 + 4) <= param_3) {
      return (long *)0x0;
    }
    uVar11 = (uVar11 + *(long *)(param_1 + 4)) - param_3;
    param_2[1] = param_3 | uVar14 & 1 | 2;
    *(ulong *)((long)param_2 + param_3 + 8) = uVar11 | 1;
    *(ulong *)(param_1 + 10) = (long)param_2 + param_3;
    *(ulong *)(param_1 + 4) = uVar11;
    return param_2;
  }
  if (*(long **)(param_1 + 8) == plVar2) {
    uVar11 = uVar11 + *(long *)(param_1 + 2);
    if (uVar11 < param_3) {
      return (long *)0x0;
    }
    puVar1 = (ulong *)((long)param_2 + uVar11);
    uVar13 = uVar11 - param_3;
    if (uVar13 < 0x20) {
      param_2[1] = uVar11 | uVar14 & 1 | 2;
      puVar1[1] = puVar1[1] | 1;
      *(undefined8 *)(param_1 + 2) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      return param_2;
    }
    param_2[1] = uVar14 & 1 | param_3 | 2;
    *(ulong *)((long)param_2 + param_3 + 8) = uVar13 | 1;
    *puVar1 = uVar13;
    puVar1[1] = puVar1[1] & 0xfffffffffffffffe;
    *(ulong *)(param_1 + 2) = uVar13;
    *(ulong *)(param_1 + 8) = (long)param_2 + param_3;
    return param_2;
  }
  if ((uVar6 & 2) != 0) {
    return (long *)0x0;
  }
  uVar11 = uVar11 + (uVar6 & 0xfffffffffffffff8);
  if (uVar11 < param_3) {
    return (long *)0x0;
  }
  plVar15 = (long *)plVar2[3];
  if ((uVar6 & 0xfffffffffffffff8) < 0xf9) {
    plVar7 = (long *)plVar2[2];
    if ((long *)(param_1 + (ulong)(uint)((int)(uVar6 >> 3) * 2) * 2 + 0x12) == plVar7) {
      if (plVar15 != plVar7) {
LAB_0040ea83:
        if ((plVar15 < plVar5) || ((long *)plVar15[2] != plVar2)) goto LAB_00402a38;
LAB_0040ea64:
        plVar7[3] = (long)plVar15;
        plVar15[2] = (long)plVar7;
        goto LAB_0040e760;
      }
    }
    else {
      if ((plVar7 < plVar5) || ((long *)plVar7[3] != plVar2)) goto LAB_00402a38;
      if (plVar15 != plVar7) {
        if ((long *)(param_1 + (ulong)(uint)((int)(uVar6 >> 3) * 2) * 2 + 0x12) != plVar15)
        goto LAB_0040ea83;
        goto LAB_0040ea64;
      }
    }
    bVar9 = (byte)(uVar6 >> 3) & 0x1f;
    *param_1 = *param_1 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
    goto LAB_0040e760;
  }
  plVar7 = (long *)plVar2[6];
  if (plVar15 == plVar2) {
    plVar8 = (long *)plVar2[5];
    plVar10 = plVar2 + 5;
    if ((long *)plVar2[5] != (long *)0x0) {
LAB_0040e9f8:
      do {
        do {
          plVar16 = plVar10;
          plVar15 = plVar8;
          plVar8 = (long *)plVar15[5];
          plVar10 = plVar15 + 5;
        } while ((long *)plVar15[5] != (long *)0x0);
        plVar8 = (long *)plVar15[4];
        plVar10 = plVar15 + 4;
      } while ((long *)plVar15[4] != (long *)0x0);
      if (plVar16 < plVar5) goto LAB_00402a38;
      *plVar16 = 0;
      goto LAB_0040e6e5;
    }
    if ((long *)plVar2[4] != (long *)0x0) {
      plVar8 = (long *)plVar2[4];
      plVar10 = plVar2 + 4;
      goto LAB_0040e9f8;
    }
    if (plVar7 == (long *)0x0) goto LAB_0040e760;
    uVar4 = *(uint *)(plVar2 + 7);
    plVar15 = (long *)0x0;
    if (*(long **)(param_1 + (ulong)uVar4 * 2 + 0x96) == plVar2) {
      *(undefined8 *)(param_1 + (ulong)uVar4 * 2 + 0x96) = 0;
      bVar9 = (byte)uVar4 & 0x1f;
      param_1[1] = param_1[1] & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
      goto LAB_0040e760;
    }
LAB_0040e6fe:
    if (plVar7 < plVar5) goto LAB_00402a38;
    if ((long *)plVar7[4] == plVar2) {
      plVar7[4] = (long)plVar15;
    }
    else {
      plVar7[5] = (long)plVar15;
    }
    if (plVar15 == (long *)0x0) goto LAB_0040e760;
  }
  else {
    plVar8 = (long *)plVar2[2];
    if (((plVar8 < plVar5) || ((long *)plVar8[3] != plVar2)) || ((long *)plVar15[2] != plVar2))
    goto LAB_00402a38;
    plVar8[3] = (long)plVar15;
    plVar15[2] = (long)plVar8;
LAB_0040e6e5:
    if (plVar7 == (long *)0x0) goto LAB_0040e760;
    if (*(long **)(param_1 + (ulong)*(uint *)(plVar2 + 7) * 2 + 0x96) != plVar2) goto LAB_0040e6fe;
    *(long **)(param_1 + (ulong)*(uint *)(plVar2 + 7) * 2 + 0x96) = plVar15;
  }
  if (plVar15 < plVar5) {
LAB_00402a38:
                    // WARNING: Subroutine does not return
    FUN_00401114();
  }
  plVar8 = (long *)plVar2[4];
  plVar15[6] = (long)plVar7;
  if (plVar8 != (long *)0x0) {
    if (plVar8 < plVar5) goto LAB_00402a38;
    plVar15[4] = (long)plVar8;
    plVar8[6] = (long)plVar15;
  }
  plVar2 = (long *)plVar2[5];
  if (plVar2 != (long *)0x0) {
    if (plVar2 < plVar5) goto LAB_00402a38;
    plVar15[5] = (long)plVar2;
    plVar2[6] = (long)plVar15;
  }
LAB_0040e760:
  if (0x1f < uVar11 - param_3) {
    param_2[1] = uVar14 & 1 | param_3 | 2;
    *(ulong *)((long)param_2 + param_3 + 8) = uVar11 - param_3 | 3;
    puVar1 = (ulong *)((long)param_2 + uVar11 + 8);
    *puVar1 = *puVar1 | 1;
    FUN_0040bea0(param_1,(long)param_2 + param_3);
    return param_2;
  }
  param_2[1] = uVar14 & 1 | uVar11 | 2;
  puVar1 = (ulong *)((long)param_2 + uVar11 + 8);
  *puVar1 = *puVar1 | 1;
  return param_2;
}



uint FUN_0040ecb0(ulong param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  param_1 = param_1 - (param_1 >> 1 & 0x5555555555555555);
  uVar3 = (param_1 & 0x3333333333333333) + (param_1 >> 2 & 0x3333333333333333);
  uVar3 = (uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f;
  uVar1 = (int)(uVar3 >> 0x20) + (int)uVar3;
  lVar2 = (ulong)(uVar1 >> 0x10) + (ulong)uVar1;
  return (int)((ulong)lVar2 >> 8) + (int)lVar2 & 0x7f;
}



ulong FUN_0040ed20(ulong param_1)

{
  long lVar1;
  
  if (1 < param_1) {
    lVar1 = 0x3f;
    if (param_1 - 1 != 0) {
      for (; param_1 - 1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    param_1 = 1 << ((char)lVar1 + 1U & 0x3f);
  }
  return param_1;
}



void FUN_0040ed3d(void)

{
  FUN_004011f2();
  FUN_0040229e();
  FUN_00402240(1);
  return;
}



void FUN_0040ed60(undefined8 param_1)

{
  FUN_0040ede0(param_1,0,0);
  return;
}



undefined8 FUN_0040ed70(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_1;
  *param_1 = -1;
  if (iVar1 != -1) {
    uVar2 = FUN_00410160();
    return uVar2;
  }
  return 0;
}



uint FUN_0040ed90(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = *param_1;
  if (0xfffffffffffffffd < lVar1 - 1U) {
    return 0;
  }
  *param_1 = 0;
  uVar2 = FUN_0040ef50(lVar1);
  uVar3 = FUN_0040f560(lVar1,*(undefined8 *)(lVar1 + 0x18));
  return uVar3 | uVar2;
}



undefined8 FUN_0040ede0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (DAT_00446ac0 == (uint *)0x0) {
    DAT_00446ac0 = &DAT_00446ac8;
  }
  puVar2 = DAT_00446ac0;
  uVar5 = *DAT_00446ac0;
  if (uVar5 == 0xffffffff) {
    puVar3 = (uint *)FUN_0040b6fb(1,0x310);
    if (puVar3 == (uint *)0x0) {
      uVar4 = FUN_00402b8a();
      return uVar4;
    }
    *(uint **)(puVar3 + 2) = puVar2;
    uVar5 = *puVar3;
    DAT_00446ac0 = puVar3;
  }
  puVar2 = DAT_00446ac0;
  uVar1 = 0x1f;
  if (~uVar5 != 0) {
    for (; ~uVar5 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  *DAT_00446ac0 = uVar5 | 1 << (uVar1 & 0x1f);
  *(undefined8 *)(puVar2 + (ulong)uVar1 * 6 + 4) = param_1;
  *(undefined8 *)(puVar2 + (ulong)uVar1 * 6 + 6) = param_2;
  *(undefined8 *)(puVar2 + (ulong)uVar1 * 6 + 8) = param_3;
  return 0;
}



void FUN_0040ee90(long param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint *puVar6;
  
  puVar6 = DAT_00446ac0;
  if (DAT_00446ac0 != (uint *)0x0) {
    do {
      uVar5 = *puVar6;
      do {
        do {
          if (uVar5 == 0) {
            puVar6 = *(uint **)(puVar6 + 2);
            puVar2 = DAT_00446ac0;
            if ((param_1 == 0) && (puVar2 = puVar6, puVar6 != (uint *)0x0)) {
              FUN_0040b701();
            }
            goto joined_r0x0040ef2c;
          }
          uVar3 = 0;
          for (uVar1 = uVar5; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x80000000) {
            uVar3 = uVar3 + 1;
          }
          uVar4 = (ulong)uVar3;
          uVar3 = ~(1 << ((byte)uVar3 & 0x1f));
          uVar5 = uVar5 & uVar3;
        } while ((param_1 != 0) && (*(long *)(puVar6 + uVar4 * 6 + 8) != param_1));
        *puVar6 = *puVar6 & uVar3;
      } while (*(code **)(puVar6 + uVar4 * 6 + 4) == (code *)0x0);
      (**(code **)(puVar6 + uVar4 * 6 + 4))(*(undefined8 *)(puVar6 + uVar4 * 6 + 6));
      puVar6 = DAT_00446ac0;
      puVar2 = DAT_00446ac0;
joined_r0x0040ef2c:
      DAT_00446ac0 = puVar2;
    } while (puVar6 != (uint *)0x0);
  }
  return;
}



uint FUN_0040ef50(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(long *)(param_1 + 2) - 1U < 0xfffffffffffffffe) {
    uVar2 = FUN_0040f560(*(long *)(param_1 + 2),*(undefined8 *)(param_1 + 4));
    *(undefined8 *)(param_1 + 2) = 0xffffffffffffffff;
  }
  if (*param_1 != -1) {
    uVar1 = FUN_00410160();
    *param_1 = -1;
    uVar2 = uVar2 | uVar1;
  }
  *(undefined8 *)(param_1 + 4) = 0;
  return uVar2;
}



undefined8 FUN_0040efb0(undefined8 param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  *(undefined8 *)(param_2 + 2) = 0xffffffffffffffff;
  iVar1 = FUN_00410e90(param_1,DAT_00440938);
  *param_2 = iVar1;
  if (iVar1 != -1) {
    uVar2 = FUN_00410930(iVar1);
    *(ulong *)(param_2 + 4) = uVar2;
    if (uVar2 < 0x7fffffff) {
      if (uVar2 == 0) {
        *(undefined8 *)(param_2 + 2) = 0;
        return 0;
      }
      lVar3 = FUN_0040f370(0,uVar2,1,DAT_004408d0 | 2,*param_2,0);
      *(long *)(param_2 + 2) = lVar3;
      if (lVar3 != -1) {
        return 0;
      }
    }
  }
  FUN_0040ef50(param_2);
  return 0xffffffff;
}



undefined * FUN_0040f050(void)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  long local_38;
  undefined8 local_30;
  
  puVar9 = DAT_0041c710;
  bVar12 = 0;
  if (DAT_00446de0 == '\0') {
    plVar5 = &local_38;
    local_30 = FUN_004106f0(DAT_00440788);
    do {
      uVar2 = FUN_0041571a(puVar9);
      uVar4 = uVar2 - 5;
      bVar10 = uVar4 < 0xed;
      bVar11 = uVar4 == 0xed;
      if (uVar4 < 0xee) {
        lVar3 = 5;
        pbVar6 = puVar9 + ((ulong)uVar2 - 4);
        pbVar7 = &DAT_00418832;
        do {
          if (lVar3 == 0) break;
          lVar3 = lVar3 + -1;
          bVar10 = *pbVar6 < *pbVar7;
          bVar11 = *pbVar6 == *pbVar7;
          pbVar6 = pbVar6 + (ulong)bVar12 * -2 + 1;
          pbVar7 = pbVar7 + (ulong)bVar12 * -2 + 1;
        } while (bVar11);
        if ((!bVar10 && !bVar11) == bVar10) {
          return puVar9;
        }
        puVar8 = &DAT_00446de0;
        lVar3 = FUN_004154c0(&DAT_00446de0,puVar9,(ulong)uVar2);
        FUN_004154c0(puVar8 + lVar3,&DAT_00418832,5);
        cVar1 = FUN_00410560(&DAT_00446de0);
        if (cVar1 != '\0') break;
        DAT_00446de0 = '\0';
      }
      plVar5 = plVar5 + 1;
      if ((long *)&stack0xffffffffffffffd8 == plVar5) {
        DAT_00448020 = (int)DAT_00440860;
        return (undefined *)0x0;
      }
      puVar9 = (undefined *)*plVar5;
    } while( true );
  }
  return &DAT_00446de0;
}



void FUN_0040f140(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = *param_1;
  *param_1 = 0;
  cVar2 = FUN_0040f2d0(uVar1);
  if (cVar2 != '\0') {
    FUN_0040b701(uVar1);
    return;
  }
  return;
}



undefined8 FUN_0040f180(long *param_1,ulong *param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined auVar2 [16];
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  FUN_0040f2d0(*param_1);
  cVar3 = FUN_0040f2d0(*param_1);
  if (cVar3 == '\0') {
    lVar4 = *param_1;
    uVar1 = *param_2;
    lVar7 = 0;
  }
  else {
    lVar7 = *param_1;
    uVar1 = *param_2;
    lVar4 = lVar7;
  }
  if (lVar4 == 0) {
    uVar8 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(param_3),0);
    uVar9 = 4;
    if (3 < uVar8) {
      uVar9 = uVar8;
    }
  }
  else {
    uVar9 = (uVar1 >> 1) + uVar1;
  }
  lVar4 = SUB168(ZEXT816(uVar1) * ZEXT816(param_3),0);
  if (SUB168(ZEXT816(uVar1) * ZEXT816(param_3) >> 0x40,0) == 0) {
    uVar1 = uVar9 + 1 + param_4;
    auVar2 = ZEXT816(param_3) * ZEXT816(uVar1);
    lVar5 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) == 0) {
      lVar6 = FUN_0040b70d(lVar7,lVar5 + 0x1fU & 0xffffffffffffffe0);
      if (lVar6 == 0) {
        FUN_00402b8a();
        return 0;
      }
      if ((lVar7 == 0) && (*param_1 != 0)) {
        lVar6 = FUN_004154c0(lVar6,*param_1,lVar4);
      }
      lVar7 = FUN_0041561f(lVar6 + lVar4,0,lVar5 - lVar4);
      *param_2 = uVar1;
      *param_1 = lVar7;
      return 1;
    }
  }
  FUN_00402bc9();
  return 0;
}



bool FUN_0040f2d0(ulong param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  if (((((ulong)&stack0xfffffffffffffff8 ^ param_1) & 0xffffffffffff0000) != 0) &&
     (0x449000 < (long)param_1)) {
    iVar2 = (int)(param_1 >> 0x10);
    iVar1 = FUN_0040f8b0(&DAT_00446ee0,(long)param_1 >> 0x10 & 0xffffffff);
    if ((iVar1 < DAT_00446ee0) &&
       (bVar3 = false,
       (&DAT_00446ee8)[(long)iVar1 * 6] == iVar2 || (int)(&DAT_00446ee8)[(long)iVar1 * 6] < iVar2))
    {
      bVar3 = iVar2 <= (int)(&DAT_00446eec)[(long)iVar1 * 6];
    }
  }
  return bVar3;
}



void FUN_0040f340(undefined8 param_1)

{
  FUN_0040f370(0,param_1,3,(uint)DAT_004408c8 | 2,0xffffffff,0);
  return;
}



// WARNING: Removing unreachable block (ram,0x0040f528)

long FUN_0040f370(long param_1,ulong param_2,undefined4 param_3,ulong param_4,int param_5,
                 undefined8 param_6)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined auVar5 [16];
  
  if ((((param_2 == 0) || ((ushort)((ushort)param_1 | (ushort)param_6) != 0)) ||
      (0xffffffffffff < param_1 + 0x800000000000U)) ||
     ((((DAT_004408c8 & (long)(int)param_4) == 0) != (param_5 != -1) ||
      ((((byte)((param_4 & 0xffffffff) >> 1) ^ 1) & 1) != ((byte)param_4 & 1))))) {
    iVar1 = FUN_00402b21();
    return (long)iVar1;
  }
  if (param_5 == -1) {
    param_2 = param_2 + 0xffff & 0xffffffffffff0000;
  }
  if ((param_4 & 0x10) == 0) {
    iVar1 = (int)(param_2 + 0xffff >> 0x10);
    if (DAT_00446ee0 < 1) {
      iVar4 = iVar1 + 0x10008000;
      iVar3 = 0x10008000;
    }
    else {
      iVar3 = 0x10008000;
      iVar4 = iVar1 + 0x10008000;
      lVar2 = 0;
      do {
        if (iVar3 <= *(int *)((long)&DAT_00446eec + lVar2)) {
          if (iVar4 <= *(int *)((long)&DAT_00446ee8 + lVar2)) break;
          iVar3 = *(int *)((long)&DAT_00446eec + lVar2) + 1;
          iVar4 = iVar1 + iVar3;
        }
        lVar2 = lVar2 + 0x18;
      } while (((ulong)(DAT_00446ee0 - 1) * 3 + 3) * 8 != lVar2);
    }
    param_1 = (long)iVar3 << 0x10;
    if (0x20000000 < iVar4) {
      lVar2 = FUN_00402b8a();
      return lVar2;
    }
  }
  else {
    iVar1 = FUN_0040f830(param_1,param_2);
    if (iVar1 == -1) {
      return -1;
    }
  }
  auVar5 = FUN_0040f880(param_1,param_2,param_3,(uint)(param_4 & 0xffffffff) | 0x10,param_5,param_6)
  ;
  lVar2 = SUB168(auVar5,0);
  if ((param_1 == lVar2) && (lVar2 != -1)) {
    iVar1 = FUN_0040fbb0(&DAT_00446ee0,param_1 >> 0x10,param_1 + -1 + param_2 >> 0x10 & 0xffffffff,
                         SUB168(auVar5 >> 0x40,0),param_3,param_4 & 0xffffffff);
    if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
      FUN_00401114();
    }
    return lVar2;
  }
  return -1;
}



void FUN_0040f550(void)

{
  FUN_00402b9f();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_0040f560(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if ((((short)param_1 == 0) && (param_1 + 0x800000000000U < 0x1000000000000)) && (param_2 != 0)) {
    uVar2 = param_2 + 0xffffU & 0xffffffffffff0000;
    uVar1 = FUN_0040f830(param_1,uVar2);
    if (((int)uVar1 != -1) && (uVar1 = 0, ((byte)DAT_0041c718 & 4) == 0)) {
                    // WARNING: Could not recover jumptable at 0x0041239a. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar1 = (*_DAT_0041c720)(param_1,uVar2);
      return uVar1;
    }
    return uVar1;
  }
  uVar1 = FUN_00402b21();
  return uVar1;
}



long FUN_0040f5e0(long param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long local_30;
  
  local_30 = -1;
  if (param_1 != 0) {
    local_30 = FUN_0040f340(0x200000);
    lVar4 = FUN_0040f900(param_1,local_30);
    lVar5 = local_30;
    if (lVar4 != 0) {
      lVar4 = FUN_0040fdd0(*(undefined8 *)(local_30 + 8),*(undefined8 *)(local_30 + 0x10));
      *(long *)(lVar5 + 0x38) = lVar4;
      if (((lVar4 != 0) &&
          (lVar5 = FUN_0040fe50(*(undefined8 *)(local_30 + 8),*(undefined8 *)(local_30 + 0x10),
                                local_30 + 0x20), lVar5 != 0)) &&
         (*(undefined8 *)(local_30 + 0x18) = 0x200000,
         *(long *)(local_30 + 0x20) * 8 + 0x40U < 0x200000)) {
        FUN_0040fef0(*(undefined8 *)(local_30 + 8),*(undefined8 *)(local_30 + 0x10),local_30 + 0x28)
        ;
        uVar7 = *(ulong *)(local_30 + 0x20);
        if (uVar7 != 0) {
          uVar7 = 0;
          uVar6 = 0;
          do {
            puVar1 = (undefined4 *)(lVar5 + uVar6 * 0x18);
            cVar3 = FUN_0040ffc0();
            if (cVar3 != '\0') {
              uVar2 = *(ulong *)(puVar1 + 2);
              if ((*(ulong *)(local_30 + 0x28) <= uVar2) &&
                 (uVar2 < *(ulong *)(local_30 + 0x30) || uVar2 == *(ulong *)(local_30 + 0x30))) {
                lVar4 = local_30 + uVar7 * 8;
                *(int *)(lVar4 + 0x40) = (int)uVar2 - (int)*(ulong *)(local_30 + 0x28);
                *(undefined4 *)(lVar4 + 0x44) = *puVar1;
                uVar7 = (ulong)((int)uVar7 + 1);
              }
            }
            uVar6 = (ulong)((int)uVar6 + 1);
          } while (uVar6 < *(ulong *)(local_30 + 0x20));
        }
        *(ulong *)(local_30 + 0x20) = uVar7;
        FUN_00402350(uVar7,local_30 + 0x40);
        goto LAB_0040f689;
      }
    }
  }
  FUN_0040ed90(&local_30);
LAB_0040f689:
  if (local_30 == -1) {
    local_30 = 0;
  }
  return local_30;
}



undefined8 FUN_0040f750(char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *local_40;
  
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) ||
     (lVar3 = FUN_0041576b(param_1,0x3d), plVar4 = DAT_00448018, lVar3 != 0)) {
    uVar2 = FUN_00402b21();
    return uVar2;
  }
  if (DAT_00448018 == (long *)0x0) {
    return 0;
  }
  lVar6 = 0;
  lVar3 = FUN_0041571a(param_1);
LAB_0040f7a8:
  do {
    lVar5 = *plVar4;
    local_40 = plVar4;
    if (lVar5 == 0) {
      if (lVar6 == 0) {
        return 0;
      }
    }
    else {
      while( true ) {
        iVar1 = FUN_00414c00(lVar5,param_1,lVar3);
        plVar4 = local_40 + 1;
        if ((iVar1 == 0) && (*(char *)(lVar5 + lVar3) == '=')) {
          lVar6 = lVar6 + -1;
          goto LAB_0040f7a8;
        }
        if (lVar6 != 0) break;
        lVar5 = *plVar4;
        local_40 = plVar4;
        if (lVar5 == 0) {
          return 0;
        }
      }
    }
    local_40[lVar6] = lVar5;
    if (*local_40 == 0) {
      return 0;
    }
    plVar4 = local_40 + 1;
  } while( true );
}



undefined8 FUN_0040f830(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar4 = DAT_00446ee0;
  iVar2 = (int)((ulong)param_1 >> 0x10);
  if (DAT_00446ee0 == 0) {
    return 0;
  }
  iVar1 = (int)((ulong)(param_1 + -1 + param_2) >> 0x10);
  uVar5 = FUN_0040f8b0();
  uVar11 = (ulong)uVar5;
  if (uVar4 == uVar5) {
    return 0;
  }
  iVar3 = DAT_00446ee8;
  if (uVar5 != 0) {
    iVar3 = (&DAT_00446ee8)[(ulong)uVar5 * 6];
  }
  if (iVar1 < iVar3) {
    return 0;
  }
  uVar8 = FUN_0040f8b0(&DAT_00446ee0);
  uVar6 = (uint)uVar8;
  if ((uVar4 == uVar6) ||
     ((uVar10 = uVar8 & 0xffffffff, uVar5 < uVar6 &&
      ((&DAT_00446ee8)[uVar10 * 6] != iVar1 && iVar1 <= (&DAT_00446ee8)[uVar10 * 6])))) {
    uVar8 = (ulong)(uVar6 - 1);
    uVar10 = uVar8;
  }
  uVar6 = (uint)uVar8;
  if (uVar6 == uVar5) {
    if (iVar3 < iVar2) {
      if (iVar1 < (int)(&DAT_00446eec)[uVar11 * 6]) {
        if (uVar4 != 0x80) {
          lVar9 = (long)(int)uVar5 * 3 + 3;
          lVar9 = FUN_004155fc(&DAT_00446ee8 + lVar9 * 2,lVar9 * 8 + 0x446ed0,
                               ((long)(int)uVar4 - (long)(int)uVar5) * 0x18);
          DAT_00446ee0 = DAT_00446ee0 + 1;
          *(int *)(lVar9 + 0xc) = iVar2 + -1;
          *(int *)(lVar9 + 0x20) = iVar1 + 1;
          return 0;
        }
        uVar7 = FUN_00402b8a();
        return uVar7;
      }
      if (iVar2 <= (int)(&DAT_00446eec)[uVar11 * 6]) goto LAB_0040faf3;
    }
LAB_0040fa35:
    if ((iVar1 < (&DAT_00446ee8)[uVar10 * 6]) || ((int)(&DAT_00446eec)[uVar10 * 6] <= iVar1)) {
      if (((byte)DAT_0041c718 & 4) != 0) {
        FUN_0040fd50(&DAT_00446ee0,uVar11,uVar8 & 0xffffffff);
      }
      goto LAB_0040fab2;
    }
    uVar8 = uVar11;
    if (((byte)DAT_0041c718 & 4) != 0) {
LAB_00402a6c:
      uVar7 = FUN_00402b21();
      return uVar7;
    }
LAB_0040fa4b:
    uVar6 = uVar6 - 1;
    (&DAT_00446ee8)[uVar10 * 6] = iVar1 + 1;
  }
  else {
    if ((iVar2 <= iVar3) || ((int)(&DAT_00446eec)[uVar11 * 6] < iVar2)) goto LAB_0040fa35;
LAB_0040faf3:
    if (((byte)DAT_0041c718 & 4) != 0) goto LAB_00402a6c;
    uVar8 = (ulong)(uVar5 + 1);
    (&DAT_00446eec)[uVar11 * 6] = iVar2 + -1;
    if (((&DAT_00446ee8)[uVar10 * 6] == iVar1 || (&DAT_00446ee8)[uVar10 * 6] < iVar1) &&
       ((&DAT_00446eec)[uVar10 * 6] != iVar1 && iVar1 <= (int)(&DAT_00446eec)[uVar10 * 6]))
    goto LAB_0040fa4b;
  }
  uVar11 = uVar8;
  if (uVar6 < (uint)uVar8) {
    return 0;
  }
LAB_0040fab2:
  FUN_0040f960(&DAT_00446ee0,uVar11,(uVar6 + 1) - (int)uVar11);
  return 0;
}



void FUN_0040f880(undefined8 param_1,ulong param_2,undefined4 param_3,undefined4 param_4,int param_5
                 )

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (((byte)DAT_0041c718 & 4) != 0) {
    uVar3 = 0xffffffffffffffff;
    if (param_5 != -1) {
      uVar3 = *(undefined8 *)(DAT_00447b50 + (long)param_5 * 0x18);
    }
    lVar1 = (*DAT_0041b0c8)(param_1,param_2,0,uVar3,0x40,param_2 >> 0x20);
    if (lVar1 == 0) {
      FUN_004162a0();
    }
    else {
      FUN_00410600(param_3,param_4);
      lVar2 = (*DAT_0041b1c8)();
      if (lVar2 == 0) {
        FUN_00405ef5(lVar1);
        FUN_004162a0();
      }
    }
    return;
  }
  FUN_004100ae();
  return;
}



uint FUN_0040f8b0(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = *param_1;
  while (uVar2 = uVar1, uVar3 < uVar2) {
    uVar1 = uVar2 + uVar3 >> 1;
    if ((int)param_1[(ulong)uVar1 * 6 + 2] < param_2) {
      uVar3 = uVar1 + 1;
      uVar1 = uVar2;
    }
  }
  if ((uVar3 != 0) && (param_2 <= (int)param_1[(ulong)(uVar3 - 1) * 6 + 3])) {
    uVar3 = uVar3 - 1;
  }
  return uVar3;
}



undefined8 FUN_0040f900(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_0040efb0();
  if (iVar2 != -1) {
    cVar1 = FUN_0040ffa0(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    if (cVar1 != '\0') {
      return *(undefined8 *)(param_2 + 8);
    }
  }
  FUN_0040ef50(param_2);
  return 0;
}



void FUN_0040f960(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)param_3;
  lVar3 = lVar2 + param_2;
  piVar1 = (int *)FUN_004154c0(param_1 + (long)param_2 * 6 + 2,param_1 + lVar3 * 6 + 2,
                               (*param_1 - lVar3) * 0x18);
  *piVar1 = *piVar1 - (int)lVar2;
  return;
}



ulong FUN_0040fbb0(uint *param_1,uint param_2,uint param_3,long param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = FUN_0040f8b0();
  uVar2 = *param_1;
  if ((((uVar1 == 0) || (uVar4 = uVar1 - 1, param_1[(ulong)uVar4 * 6 + 3] + 1 != param_2)) ||
      (*(long *)(param_1 + (ulong)uVar4 * 6 + 4) != param_4)) ||
     ((param_1[(ulong)uVar4 * 6 + 6] != param_5 || (param_1[(ulong)uVar4 * 6 + 7] != param_6)))) {
    if ((((uVar1 < uVar2) && (param_3 + 1 == param_1[(ulong)uVar1 * 6 + 2])) &&
        (*(long *)(param_1 + (ulong)uVar1 * 6 + 4) == param_4)) &&
       ((param_1[(ulong)uVar1 * 6 + 6] == param_5 && (param_1[(ulong)uVar1 * 6 + 7] == param_6)))) {
      param_1[(ulong)uVar1 * 6 + 2] = param_2;
      uVar7 = 0;
    }
    else if (uVar2 == 0x80) {
      uVar2 = FUN_00402b8a();
      uVar7 = (ulong)uVar2;
    }
    else {
      lVar3 = (long)(int)uVar1 * 3 + 3;
      uVar7 = 0;
      lVar3 = FUN_004155fc(param_1 + lVar3 * 2 + 2,param_1 + lVar3 * 2 + -4,
                           ((long)(int)uVar2 - (long)(int)uVar1) * 0x18,lVar3 * 8,0);
      *param_1 = *param_1 + 1;
      *(uint *)(lVar3 + 8) = param_2;
      *(uint *)(lVar3 + 0xc) = param_3;
      *(long *)(lVar3 + 0x10) = param_4;
      *(uint *)(lVar3 + 0x18) = param_5;
      *(uint *)(lVar3 + 0x1c) = param_6;
    }
  }
  else {
    param_1[(ulong)uVar4 * 6 + 3] = param_3;
    uVar6 = 0;
    uVar7 = 0;
    if (uVar1 < uVar2) {
      uVar5 = (ulong)uVar1;
      uVar7 = uVar6;
      if (((param_3 + 1 == param_1[uVar5 * 6 + 2]) &&
          (*(long *)(param_1 + uVar5 * 6 + 4) == param_4)) &&
         ((param_1[uVar5 * 6 + 6] == param_5 && (param_1[uVar5 * 6 + 7] == param_6)))) {
        param_1[(ulong)uVar4 * 6 + 3] = param_1[uVar5 * 6 + 3];
        FUN_0040f960(param_1,uVar1,1);
        uVar7 = 0;
      }
    }
  }
  return uVar7 & 0xffffffff;
}



void FUN_0040fd50(long param_1,int param_2,int param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  pcVar1 = DAT_0041b210;
  if (param_2 <= param_3) {
    lVar2 = param_1 + 8 + (long)param_2 * 0x18;
    do {
      lVar3 = lVar2 + 0x18;
      (*pcVar1)();
      FUN_00405ef5(*(undefined8 *)(lVar2 + 8));
      lVar2 = lVar3;
    } while (lVar3 != param_1 + 0x20 + ((ulong)(uint)(param_3 - param_2) + (long)param_2) * 0x18);
    return;
  }
  return;
}



long FUN_0040fdd0(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x3c);
  if (uVar1 == 0) {
    return 0;
  }
  uVar3 = uVar1 - 1;
  do {
    if (uVar3 != *(ushort *)(param_1 + 0x3e)) {
      lVar2 = FUN_00410010(param_1,param_2,uVar3);
      if (*(int *)(lVar2 + 4) == 3) {
        lVar4 = *(long *)(lVar2 + 0x18) + param_1;
        FUN_00410090(param_1,param_2,lVar4,*(undefined8 *)(lVar2 + 0x20));
        return lVar4;
      }
    }
    uVar3 = uVar3 - 1;
  } while (uVar3 != (uVar1 - 2) - (uVar1 - 1 & 0xffff));
  return 0;
}



long FUN_0040fe50(long param_1,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  if (*(ushort *)(param_1 + 0x3c) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x3c) - 1 & 0xffff;
    do {
      lVar1 = FUN_00410010(param_1,param_2,uVar2);
      if ((*(int *)(lVar1 + 4) == 2) && (*(long *)(lVar1 + 0x38) == 0x18)) {
        if (param_3 != (ulong *)0x0) {
          *param_3 = *(ulong *)(lVar1 + 0x20) / 0x18;
        }
        lVar3 = *(long *)(lVar1 + 0x18) + param_1;
        FUN_00410090(param_1,param_2,lVar3,*(undefined8 *)(lVar1 + 0x20));
        return lVar3;
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0xffffffff);
  }
  return 0;
}



void FUN_0040fef0(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  if (*(short *)(param_1 + 0x38) == 0) {
    lVar4 = 0x7fffffffffffffff;
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    uVar5 = 0;
    lVar4 = 0x7fffffffffffffff;
    do {
      piVar2 = (int *)FUN_00410050(param_1,param_2,uVar5);
      if (*piVar2 == 1) {
        lVar1 = *(long *)(piVar2 + 4);
        if (lVar1 < lVar4) {
          lVar4 = lVar1;
        }
        if (lVar3 < lVar1 + *(long *)(piVar2 + 10)) {
          lVar3 = lVar1 + *(long *)(piVar2 + 10);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)(param_1 + 0x38));
  }
  if (param_3 != (long *)0x0) {
    *param_3 = lVar4;
  }
  if (param_4 != (long *)0x0) {
    *param_4 = lVar3;
  }
  return;
}



bool FUN_0040ffa0(int *param_1,ulong param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((0x3f < param_2) && (*param_1 == 0x464c457f)) {
    bVar1 = (*(byte *)(param_1 + 1) & 0xfd) == 0;
  }
  return bVar1;
}



uint FUN_0040ffc0(long param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (*(byte *)(param_1 + 4) & 0xf) - 1;
    uVar1 = uVar1 & 0xffffff00 | (uint)(uVar1 < 2);
  }
  return uVar1;
}



long FUN_00410010(long param_1,undefined8 param_2,ushort param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28) + param_1 + (ulong)param_3 * (ulong)*(ushort *)(param_1 + 0x3a);
  FUN_00410090(param_1,param_2,lVar1);
  return lVar1;
}



long FUN_00410050(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + param_1 + (ulong)param_3 * (ulong)*(ushort *)(param_1 + 0x36);
  FUN_00410090(param_1,param_2,lVar1);
  return lVar1;
}



void FUN_00410090(long param_1,long param_2,long param_3,long param_4)

{
  if (param_1 <= param_3) {
    if ((ulong)(param_3 + param_4) <= (ulong)(param_1 + param_2)) {
      return;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_00401114();
}



void FUN_004100ae(void)

{
  FUN_00412300();
  return;
}



undefined8 FUN_004100bb(int *param_1)

{
  undefined8 uVar1;
  undefined auVar2 [12];
  
  auVar2 = FUN_00412310(param_1,0);
  uVar1 = SUB128(auVar2,0);
  if ((((byte)DAT_0041c718 & 8) != 0) && (SUB124(auVar2,0) != -1)) {
    *param_1 = SUB124(auVar2,0);
    param_1[1] = SUB124(auVar2 >> 0x40,0);
    uVar1 = 0;
  }
  return uVar1;
}



void FUN_004100e0(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined local_208 [504];
  
  if (param_1 == 0) {
    FUN_00402af7();
    return;
  }
  if (((byte)DAT_0041c718 & 4) != 0) {
    iVar1 = FUN_00404d00(param_1,local_208);
    if (iVar1 != -1) {
      FUN_00404d10(local_208,param_2);
    }
    return;
  }
  FUN_00412360(DAT_00440780,param_1,param_2,0);
  return;
}



void FUN_00410160(int param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 < 0) {
    FUN_00402b21();
    return;
  }
  uVar2 = (ulong)param_1;
  if (uVar2 < DAT_00447b48) {
    iVar1 = *(int *)(DAT_00447b50 + uVar2 * 0x18 + 0x10);
    if (iVar1 == 6) {
      (*(code *)0x0)();
      goto LAB_0041018b;
    }
    if (iVar1 == 7) {
      (*(code *)0x0)();
      goto LAB_0041018b;
    }
    if (((byte)DAT_0041c718 & 4) == 0) goto LAB_004101d0;
    if (iVar1 == 2) {
      FUN_00403090();
      goto LAB_0041018b;
    }
    if ((iVar1 - 3U < 2) || (iVar1 == 1)) {
      FUN_00404ed0();
      goto LAB_0041018b;
    }
  }
  else if (((byte)DAT_0041c718 & 4) == 0) {
LAB_004101d0:
    FUN_00412330();
    goto LAB_0041018b;
  }
  FUN_00402acd();
LAB_0041018b:
  if (uVar2 < DAT_00447b48) {
    uVar3 = uVar2;
    if (DAT_00447b40 <= uVar2) {
      uVar3 = DAT_00447b40;
    }
    *(undefined4 *)(DAT_00447b50 + uVar2 * 0x18 + 0x10) = 0;
    DAT_00447b40 = uVar3;
  }
  return;
}



ulong FUN_00410260(long param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = FUN_00414ab0(param_1 + param_2,param_3);
  uVar3 = lVar2 - param_1;
  cVar1 = FUN_00410c20(param_1);
  if (cVar1 == '\0') {
    uVar3 = 0xffffffffffffffff;
  }
  return uVar3 & 0xffffffff;
}



undefined8 FUN_004102a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = FUN_0041571a(param_2);
  if (0xf8 < (ulong)(param_4 + 7 + lVar1)) {
    return 0xffffffff;
  }
  lVar1 = FUN_004154c0(param_1);
  puVar4 = (undefined *)(param_1 + lVar1);
  if ((lVar1 != 0) && (*(char *)(param_1 + -1 + lVar1) != '/')) {
    *puVar4 = 0x2f;
    puVar4 = puVar4 + 1;
  }
  FUN_004154c0(puVar4,param_3,param_4);
  uVar2 = FUN_004026e0(param_3);
  lVar1 = FUN_00415783(uVar2,0x2e,param_4);
  if (lVar1 == 0) {
    uVar2 = FUN_00410260(param_1,puVar4 + (param_4 - param_1),".com");
    if ((int)uVar2 != -1) {
      return uVar2;
    }
    puVar3 = &DAT_004187c3;
    if (((byte)DAT_0041c718 & 4) != 0) goto LAB_0041031a;
  }
  puVar3 = &DAT_00418757;
LAB_0041031a:
  uVar2 = FUN_00410260(param_1,puVar4 + (param_4 - param_1),puVar3);
  return uVar2;
}



undefined8 FUN_00410390(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *local_140;
  undefined local_138 [264];
  
  uVar1 = DAT_00448020;
  lVar3 = FUN_0041571a();
  if (lVar3 == 0) {
    param_2 = 0;
    FUN_00402b75();
    uVar1 = DAT_00448020;
  }
  else {
    lVar4 = FUN_00415783();
    if (lVar4 == 0) {
      uVar7 = DAT_0041c718 & 4;
      if (((uVar7 == 0) ||
          ((iVar2 = FUN_004102a0(param_2,&DAT_0041c480,param_1,lVar3), iVar2 == -1 &&
           (iVar2 = FUN_004102a0(param_2,&DAT_0041c4c0,param_1,lVar3), iVar2 == -1)))) &&
         (iVar2 = FUN_004102a0(param_2,&DAT_00418757,param_1,lVar3), iVar2 == -1)) {
        lVar4 = FUN_00414c50(param_1,&DAT_0041887f);
        if (lVar4 != 0) {
          return 0;
        }
        pcVar5 = (char *)FUN_004108b0(&DAT_00418882);
        if (pcVar5 == (char *)0x0) {
          pcVar5 = "/bin:/usr/local/bin:/usr/bin";
        }
        else if (*pcVar5 == '\0') {
          pcVar5 = "/bin:/usr/local/bin:/usr/bin";
        }
        lVar4 = FUN_004148f0(local_138,pcVar5,0,0xf8);
        if (lVar4 == 0) {
          iVar2 = FUN_00402b8a();
          if (iVar2 == -1) {
            return 0;
          }
        }
        else {
          local_140 = local_138;
          puVar8 = &DAT_00417046;
          if (uVar7 == 0) {
            puVar8 = &DAT_00417068;
          }
          do {
            lVar4 = FUN_00414cb0(&local_140,puVar8);
            if (lVar4 == 0) {
              return 0;
            }
            lVar6 = FUN_0041576b(lVar4,0x3d);
          } while ((lVar6 != 0) || (iVar2 = FUN_004102a0(param_2,lVar4,param_1,lVar3), iVar2 == -1))
          ;
        }
      }
    }
    else {
      FUN_00402b21();
      param_2 = 0;
      uVar1 = DAT_00448020;
    }
  }
  DAT_00448020 = uVar1;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong FUN_00410560(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  undefined local_208 [504];
  
  iVar1 = DAT_00448020;
  if (((byte)DAT_0041c718 & 4) == 0) {
    uVar2 = FUN_004117e0(param_1,local_208);
    if (((int)uVar2 == -1) && ((DAT_00448020 == DAT_00440860 || (DAT_00448020 == _DAT_00440878)))) {
      DAT_00448020 = iVar1;
    }
  }
  else {
    iVar1 = FUN_00404d00(param_1,local_208);
    if (iVar1 == -1) {
      return 1;
    }
    uVar2 = FUN_00405f5b(local_208);
  }
  return uVar2 & 0xffffffffffffff00 | (ulong)((int)uVar2 != -1);
}



uint FUN_00410600(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (int)param_2 >> 2 & 0x20000000U | param_1 & 2 | (param_2 & 0x4000000) << 5 |
          param_1 * 4 & 4 | param_1 * 8 & 0x20;
  if ((param_2 & 2) != 0) {
    if ((param_1 & 3) == 3) {
      uVar1 = uVar1 | 1;
    }
  }
  return uVar1;
}



void FUN_00410650(void)

{
  code *pcVar1;
  
  pcVar1 = DAT_0041b1a0;
  DAT_00447b50 = &DAT_00447b58;
  DAT_00447b40 = 3;
  DAT_00447b48 = 0x10;
  if (((byte)DAT_0041c718 & 2) == 0) {
    DAT_00447b68 = 1;
    DAT_00447b80 = DAT_00447b68;
    DAT_00447b98 = DAT_00447b68;
    DAT_00447b58 = (*DAT_0041b1a0)();
    DAT_00447b70 = (*pcVar1)();
    DAT_00447b88 = (*pcVar1)();
    return;
  }
  DAT_00447b40 = 3;
  DAT_00447b48 = 0x10;
  DAT_00447b50 = &DAT_00447b58;
  DAT_00447b58 = 0x3f8;
  DAT_00447b68 = 5;
  DAT_00447b70 = 0x3f8;
  DAT_00447b80 = 5;
  DAT_00447b88 = 0x3f8;
  DAT_00447b98 = 5;
  return;
}



char * FUN_004106f0(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  char **ppcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar1 = DAT_00440788;
  pcVar5 = (char *)0x0;
  if (param_1 == (char *)0xffffffffffffffff) {
    return (char *)0x0;
  }
  if ((DAT_0041c718 & 4) == 0) {
    if (DAT_0041c378 == (char **)0x0) {
      return (char *)0x0;
    }
    ppcVar4 = DAT_0041c378;
    if ((DAT_0041c718 & 8) == 0) {
      for (; *ppcVar4 != (char *)0x0; ppcVar4 = ppcVar4 + 2) {
        if (param_1 == *ppcVar4) {
          if (ppcVar4[1] != (char *)0x0) {
            return ppcVar4[1];
          }
          break;
        }
      }
    }
    else if (param_1 != (char *)0x0) {
      if (param_1 == DAT_00440788) {
        pcVar7 = *DAT_0041c378;
        pcVar6 = "executable_path";
        uVar2 = FUN_0041571a();
        if (pcVar7 == (char *)0x0) {
          return DAT_0041c710;
        }
      }
      else {
        pcVar7 = *DAT_0041c378;
        uVar2 = FUN_0041571a();
        pcVar6 = param_1;
        if (pcVar7 == (char *)0x0) {
          return pcVar5;
        }
      }
      do {
        ppcVar4 = ppcVar4 + 1;
        iVar3 = FUN_00414c00(pcVar7,pcVar6,(ulong)uVar2);
        if ((iVar3 == 0) && (pcVar7[uVar2] == '=')) {
          return pcVar7 + (uVar2 + 1);
        }
        pcVar7 = *ppcVar4;
      } while (pcVar7 != (char *)0x0);
    }
  }
  if (param_1 == pcVar1) {
    return DAT_0041c710;
  }
  return (char *)0x0;
}



ulong FUN_00410830(void)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  
  if (DAT_00447b40 < DAT_00447b48) {
    piVar4 = (int *)(DAT_00447b50 + 0x10 + DAT_00447b40 * 0x18);
    bVar1 = false;
    uVar3 = DAT_00447b40;
    do {
      if (*piVar4 == 0) {
        if (!bVar1) {
          return uVar3;
        }
        DAT_00447b40 = uVar3;
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 6;
      bVar1 = true;
    } while (uVar3 != DAT_00447b48);
    DAT_00447b40 = DAT_00447b48;
  }
  iVar2 = FUN_00410960(DAT_00447b40);
  return (long)iVar2;
}



char * FUN_004108b0(char *param_1)

{
  long lVar1;
  char **ppcVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (DAT_00448018 == (char **)0x0) {
    return (char *)0x0;
  }
  pcVar5 = *DAT_00448018;
  if (pcVar5 != (char *)0x0) {
    ppcVar2 = DAT_00448018;
    do {
      ppcVar2 = ppcVar2 + 1;
      if (*param_1 == '\0') {
        lVar1 = 0;
        pcVar4 = pcVar5;
      }
      else {
        lVar1 = 0;
        cVar3 = *param_1;
        do {
          if (pcVar5[lVar1] != cVar3) goto LAB_004108f2;
          lVar1 = lVar1 + 1;
          cVar3 = param_1[lVar1];
        } while (cVar3 != '\0');
        pcVar4 = pcVar5 + lVar1;
      }
      if (*pcVar4 == '=') {
        return pcVar5 + lVar1 + 1;
      }
LAB_004108f2:
      pcVar5 = *ppcVar2;
    } while (pcVar5 != (char *)0x0);
  }
  return pcVar5;
}



undefined8 FUN_00410930(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_e8 [48];
  undefined8 local_b8;
  
  iVar1 = FUN_00411da0(param_1,local_e8);
  uVar2 = 0xffffffffffffffff;
  if (iVar1 != -1) {
    uVar2 = local_b8;
  }
  return uVar2;
}



// WARNING: Removing unreachable block (ram,0x00410a00)

ulong FUN_00410960(int param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  uVar2 = DAT_00447b48;
  if (DAT_00447b48 <= (ulong)(long)param_1) {
    uVar4 = (long)(param_1 + 1);
    if ((ulong)(long)(param_1 + 1) <= DAT_00447b48 * 2) {
      uVar4 = DAT_00447b48 * 2;
    }
    puVar3 = DAT_00447b50;
    if (DAT_00447b50 == &DAT_00447b58) {
      puVar3 = (undefined8 *)0x0;
    }
    puVar3 = (undefined8 *)FUN_0040b70d(puVar3,uVar4 * 0x18);
    if (puVar3 == (undefined8 *)0x0) {
      uVar2 = FUN_00402b8a();
      return uVar2;
    }
    puVar1 = puVar3 + uVar2 * 3 + 2;
    do {
      uVar2 = uVar2 + 1;
      *(undefined4 *)puVar1 = 0;
      puVar1 = puVar1 + 3;
      DAT_00447b48 = uVar4;
      DAT_00447b50 = puVar3;
    } while (uVar2 < uVar4);
  }
  return (long)param_1 & 0xffffffff;
}



ulong FUN_00410a20(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined local_68 [88];
  
  if (((byte)DAT_0041c718 & 4) != 0) {
    uVar1 = FUN_00404f60();
    return uVar1;
  }
  uVar1 = FUN_00412380(param_1,DAT_004409d8,local_68);
  if ((int)uVar1 == -1) {
    return uVar1;
  }
  FUN_00411930(param_2,local_68);
  return uVar1 & 0xffffffff;
}



void FUN_00410a90(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined local_68 [80];
  
  if (((byte)DAT_0041c718 & 4) == 0) {
    uVar1 = FUN_00411870(local_68,param_3);
    FUN_00412380(param_1,param_2,uVar1);
    return;
  }
  FUN_00405040();
  return;
}



uint FUN_00410b10(char param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  uint uVar4;
  long in_GS_OFFSET;
  undefined local_418 [1024];
  
  if ((param_1 != '\0') ||
     ((lVar2 = FUN_004108b0("HEISENDEBUG"), lVar2 == 0 &&
      ((byte)((byte)((uint)DAT_0041c014 >> 8) ^ (byte)DAT_0041c00c) != 0x34)))) {
    uVar4 = DAT_0041c718 & 4;
    if (uVar4 != 0) {
      return (uint)*(byte *)(*(long *)(in_GS_OFFSET + 0x60) + 2);
    }
    if (((DAT_0041c718 & 1) != 0) &&
       (iVar1 = FUN_004123b0(DAT_00440780,"/proc/self/status",DAT_00440938,0), iVar1 != -1)) {
      lVar2 = FUN_004123d0(iVar1,local_418,0x3f4);
      if (lVar2 != -1) {
        local_418[lVar2] = 0;
        pcVar3 = (char *)FUN_00414cf0(local_418,"TracerPid:\t");
        if (pcVar3 == (char *)0x0) {
          pcVar3 = "TracerPid:\t";
        }
        lVar2 = FUN_0041571a("TracerPid:\t",pcVar3);
        uVar4 = FUN_00412450(pcVar3 + lVar2);
      }
      FUN_00412330(iVar1);
      return uVar4;
    }
  }
  return 0;
}



bool FUN_00410c20(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  undefined local_e8 [24];
  byte local_d0;
  
  iVar1 = FUN_004117e0(param_1,local_e8);
  bVar2 = false;
  if (iVar1 == 0) {
    bVar2 = (local_d0 & 0x49) != 0;
  }
  return bVar2;
}



ulong FUN_00410c50(int param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = 0;
  if ((-1 < param_1) && ((ulong)(long)param_1 < DAT_00447b48)) {
    uVar1 = DAT_00447b50 + (long)param_1 * 0x18;
    uVar1 = uVar1 & 0xffffffffffffff00 | (ulong)(*(int *)(uVar1 + 0x10) == param_2);
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00410c80(void)

{
  ulong uVar1;
  uint extraout_var;
  uint extraout_var_00;
  ulong uVar2;
  long lVar3;
  uint extraout_var_01;
  ulong uVar4;
  int iVar5;
  float10 in_ST0;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 in_ST1;
  float10 fVar9;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar1 = DAT_00440798;
  fVar9 = (float10)1;
  iVar5 = 1;
  do {
    fVar8 = in_ST2;
    FUN_00411490();
    FUN_00411d70(uVar1 & 0xffffffff);
    uVar2 = rdtsc();
    local_38 = 0;
    uVar4 = uVar2 & 0xffffffff00000000 | uVar2 & 0xffffffff | (ulong)extraout_var << 0x20;
    local_30 = 100000;
    FUN_00411ea0(&local_38,0);
    FUN_00411d70();
    uVar2 = rdtsc();
    uVar2 = uVar2 & 0xffffffff | (ulong)extraout_var_00 << 0x20 | uVar2 & 0xffffffff00000000;
    fVar6 = (in_ST1 - in_ST0) * (float10)1e+09;
    if (uVar4 != uVar2) {
      lVar3 = uVar2 - uVar4;
      fVar7 = (float10)lVar3;
      if (lVar3 < 0) {
        fVar7 = fVar7 + (float10)1.844674e+19;
      }
      fVar6 = fVar7 / fVar6;
    }
    fVar7 = (float10)iVar5;
    iVar5 = iVar5 + 1;
    fVar9 = fVar9 + fVar7 / (fVar6 - fVar9);
    in_ST0 = fVar8;
    in_ST1 = in_ST3;
    in_ST2 = in_ST4;
    in_ST3 = in_ST5;
    in_ST4 = in_ST6;
    in_ST5 = in_ST6;
  } while (iVar5 != 5);
  _DAT_00447d40 = fVar9;
  FUN_00411d70(DAT_004407a0);
  uVar1 = rdtsc();
  DAT_00447d20 = 1;
  _DAT_00447d28 = uVar1 & 0xffffffff00000000 | uVar1 & 0xffffffff | (ulong)extraout_var_01 << 0x20;
  _DAT_00447d30 = fVar8;
  return;
}



void FUN_00410d60(void)

{
  if (DAT_00447d20 == '\0') {
    FUN_00410c80();
  }
  return;
}



void FUN_00410db0(void)

{
  if (DAT_00447d20 == '\0') {
    FUN_00410c80();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00410e10(void)

{
  if (DAT_00447d20 == '\0') {
    FUN_00410c80();
  }
  rdtsc();
  if (DAT_00447d20 == '\0') {
    FUN_00410c80();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00410ed8)
// WARNING: Removing unreachable block (ram,0x00410ee9)

void FUN_00410e90(long param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    FUN_00402af7();
    return;
  }
  if (((byte)DAT_0041c718 & 4) != 0) {
    FUN_00405500(param_1,param_2,param_3);
    return;
  }
  FUN_004123b0(DAT_00440780,param_1,param_2,param_3);
  return;
}



void FUN_00410f70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  FUN_00411370(param_1,&local_18,1);
  return;
}



long FUN_00410f90(ulong param_1,byte *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  byte local_39 [9];
  
  if ((param_3 != 0) && (*param_2 = 0, 2 < param_3)) {
    uVar4 = param_1 & 0xffffffff;
    lVar2 = FUN_00410f70(param_1,local_39,1);
    if (lVar2 != 1) {
      return -1;
    }
    param_2[1] = 0;
    *param_2 = local_39[0];
    lVar2 = 1;
    while( true ) {
      iVar5 = (int)lVar2;
      if (-1 < (char)local_39[0]) goto code_r0x0041100a;
      uVar1 = lVar2 + 2;
      if (0xbf < local_39[0]) break;
      if (param_3 - 2 == lVar2) goto LAB_00410fa6;
      lVar3 = FUN_00410f70(uVar4,local_39,1);
      if (lVar3 != 1) {
        return -1;
      }
      param_2[lVar2 + 1] = 0;
      param_2[lVar2] = local_39[0];
      lVar2 = lVar2 + 1;
    }
    if (0xfb < local_39[0]) {
      if (param_3 <= uVar1) goto LAB_00410fa6;
      lVar2 = FUN_00410f70(uVar4,local_39,1);
      if (lVar2 != 1) {
        return -1;
      }
      param_2[iVar5] = local_39[0];
      param_2[iVar5 + 1] = 0;
      if (param_3 <= (ulong)(long)(iVar5 + 3)) goto LAB_00410fa6;
      lVar2 = FUN_00410f70(uVar4,local_39,1);
      if (lVar2 != 1) {
        return -1;
      }
      lVar2 = (long)(iVar5 + 2);
      param_2[iVar5 + 1] = local_39[0];
      iVar6 = 4;
      param_2[uVar1] = 0;
      goto LAB_004111af;
    }
    iVar6 = 0x1f;
    if ((byte)~local_39[0] != 0) {
      for (; (byte)~local_39[0] >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    iVar6 = 6 - iVar6;
    if (uVar1 < param_3) {
      lVar2 = FUN_00410f70(uVar4,local_39,1);
      if (lVar2 != 1) {
        return -1;
      }
      lVar2 = (long)(iVar5 + 1);
      param_2[iVar5] = local_39[0];
      param_2[lVar2] = 0;
LAB_004111af:
      lVar3 = lVar2;
      while( true ) {
        if ((ulong)(iVar6 - 1) + lVar2 == lVar3) {
          return (long)(int)lVar3;
        }
        if (param_3 <= lVar3 + 2U) break;
        lVar7 = FUN_00410f70(uVar4,local_39,1);
        if (lVar7 != 1) {
          return -1;
        }
        param_2[lVar3 + 1] = 0;
        param_2[lVar3] = local_39[0];
        lVar3 = lVar3 + 1;
      }
    }
  }
  goto LAB_00410fa6;
code_r0x0041100a:
  if (local_39[0] != 0x1b) {
    return (long)iVar5;
  }
  if ((ulong)(long)(iVar5 + 2) < param_3) {
    lVar2 = FUN_00410f70(uVar4,local_39,1);
    if (lVar2 != 1) {
      return -1;
    }
    iVar6 = iVar5 + 1;
    param_2[iVar5] = local_39[0];
    param_2[iVar6] = 0;
    lVar2 = (long)iVar6;
    while (local_39[0] < 0x50) {
      if (0x4d < local_39[0]) {
        if ((ulong)(long)(iVar6 + 2) < param_3) {
          lVar2 = FUN_00410f70(uVar4,local_39,1);
          if (lVar2 != 1) {
            return -1;
          }
          param_2[iVar6] = local_39[0];
          param_2[iVar6 + 1] = 0;
          return (long)(iVar6 + 1);
        }
        goto LAB_00410fa6;
      }
      if (0xf < (byte)(local_39[0] - 0x20)) goto LAB_004112a8;
      if (param_3 <= lVar2 + 2U) goto LAB_00410fa6;
      lVar7 = lVar2 + 1;
      lVar3 = FUN_00410f70(uVar4,local_39,1);
      if (lVar3 != 1) {
        return -1;
      }
      iVar6 = (int)lVar7;
      param_2[lVar7] = 0;
      param_2[lVar2] = local_39[0];
      lVar2 = lVar7;
    }
    if (local_39[0] != 0x5b) {
LAB_004112a8:
      return (long)iVar6;
    }
    if ((ulong)(long)(iVar6 + 2) < param_3) {
      lVar2 = FUN_00410f70(uVar4,local_39,1);
      if (lVar2 != 1) {
        return -1;
      }
      param_2[iVar6] = local_39[0];
      param_2[iVar6 + 1] = 0;
      lVar2 = (long)(iVar6 + 1);
      while( true ) {
        if (0xf < local_39[0] - 0x30) {
          return (long)(int)lVar2;
        }
        if (param_3 <= lVar2 + 2U) break;
        lVar3 = FUN_00410f70(uVar4,local_39,1);
        if (lVar3 != 1) {
          return -1;
        }
        param_2[lVar2 + 1] = 0;
        param_2[lVar2] = local_39[0];
        lVar2 = lVar2 + 1;
      }
    }
  }
LAB_00410fa6:
  lVar2 = FUN_00402b8a();
  return lVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong FUN_00411370(int param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  byte bVar3;
  undefined uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long in_GS_OFFSET;
  undefined8 uVar11;
  undefined4 local_13c [4];
  uint local_12c;
  undefined local_128 [152];
  undefined8 uStack144;
  undefined8 uStack104;
  undefined8 uStack96;
  uint local_4c;
  undefined local_48 [40];
  
  pcVar2 = DAT_0041b1d0;
  if ((param_1 < 0) || (param_3 < 0)) {
    iVar5 = FUN_00402b21();
    uVar7 = (ulong)iVar5;
  }
  else {
    if ((ulong)(long)param_1 < DAT_00447b48) {
      puVar1 = (undefined8 *)(DAT_00447b50 + (long)param_1 * 0x18);
      iVar5 = *(int *)(puVar1 + 2);
      if (iVar5 == 6) {
                    // WARNING: Treating indirect jump as call
        uVar7 = (*(code *)0x0)(*puVar1,param_2,(long)param_3,0xffffffffffffffff);
        return uVar7;
      }
      if (iVar5 == 5) {
        if (0 < param_3) {
          plVar9 = (long *)(param_2 + 8);
          do {
            if (*plVar9 != 0) {
              do {
                uVar6 = *puVar1;
                bVar3 = in((short)uVar6 + 5);
              } while ((bVar3 & 1) == 0);
              uVar7 = 0;
              lVar8 = 0;
              lVar10 = 0;
              do {
                uVar7 = uVar7 + 1;
                uVar4 = in((short)uVar6);
                plVar9 = (long *)(lVar10 * 0x10 + param_2);
                *(undefined *)(*plVar9 + lVar8) = uVar4;
                lVar8 = lVar8 + 1;
                if (plVar9[1] == lVar8) {
                  lVar10 = lVar10 + 1;
                  if (param_3 == lVar10) {
                    return uVar7;
                  }
                  lVar8 = 0;
                }
                uVar6 = *puVar1;
                bVar3 = in((short)uVar6 + 5);
              } while ((bVar3 & 1) != 0);
              return uVar7;
            }
            plVar9 = plVar9 + 2;
          } while (plVar9 != (long *)(param_2 + 0x18 + (ulong)(param_3 - 1) * 0x10));
        }
        return 0;
      }
      if (((byte)DAT_0041c718 & 4) == 0) goto LAB_004123e0;
      if ((iVar5 == 1) || (iVar5 == 4)) {
        lVar8 = (long)param_3;
        do {
          if (lVar8 == 0) {
            uStack96 = 0x405760;
            uStack104 = FUN_00405e00(0xffffffffffffffff,local_48);
LAB_00405717:
            uStack144 = 0x40572b;
            iVar5 = (*pcVar2)();
            if (iVar5 != 0) {
              return (ulong)local_4c;
            }
            if (*(int *)(in_GS_OFFSET + 0x68) != 0x6d) {
              uStack96 = 0x405775;
              uVar7 = FUN_004162a0();
              return uVar7;
            }
            return 0;
          }
          if (*(long *)(param_2 + 8) != 0) {
            uStack96 = 0x405701;
            uStack104 = FUN_00405e00(0xffffffffffffffff,local_48);
            goto LAB_00405717;
          }
          param_2 = param_2 + 0x10;
          lVar8 = lVar8 + -1;
        } while( true );
      }
      if (iVar5 == 2) {
        local_13c[0] = 0;
        local_12c = 0;
        uVar11 = 0x402f85;
        uVar6 = FUN_00403110(local_128,param_2,(long)param_3);
        iVar5 = FUN_004033cc(*puVar1,local_128,uVar6,&local_12c,local_13c,0,0,0,0,uVar11);
        if (iVar5 == -1) {
          uVar7 = FUN_00403070();
          return uVar7;
        }
        return (ulong)local_12c;
      }
    }
    else if (((byte)DAT_0041c718 & 4) == 0) {
LAB_004123e0:
                    // WARNING: Could not recover jumptable at 0x004123ea. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar7 = (*_DAT_0041c720)();
      return uVar7;
    }
    uVar7 = FUN_00402acd();
  }
  return uVar7;
}



void FUN_00411440(int param_1)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (ulong)param_1;
  cVar1 = FUN_00411e70(param_1);
  if (cVar1 != '\0') {
    uVar3 = uVar2;
    if (DAT_00447b40 <= uVar2) {
      uVar3 = DAT_00447b40;
    }
    *(undefined4 *)(DAT_00447b50 + uVar2 * 0x18 + 0x10) = 0;
    DAT_00447b40 = uVar3;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00411490(void)

{
  if (((byte)DAT_0041c718 & 4) == 0) {
                    // WARNING: Could not recover jumptable at 0x004123fa. Too many branches
                    // WARNING: Treating indirect jump as call
    (*_DAT_0041c720)();
    return;
  }
  FUN_00405790();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void thunk_FUN_00412410(void)

{
                    // WARNING: Could not recover jumptable at 0x0041241a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_004114c0(ulong param_1,long *param_2,undefined (*param_3) [16])

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  code **ppcVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  undefined local_78 [16];
  code *local_68;
  undefined *local_60;
  undefined *puStack88;
  uint uStack80;
  undefined4 uStack76;
  undefined4 uStack72;
  
  uVar13 = DAT_0041c718;
  iVar2 = (int)param_1;
  if (((0x7e < iVar2 - 1U) || (param_1 = param_1 & 0xffffffff, iVar2 == 9)) ||
     (lVar12 = (long)iVar2, lVar12 == _DAT_00440980)) {
    uVar8 = FUN_00402b21();
    return uVar8;
  }
  if (param_2 == (long *)0x0) {
    uVar11 = DAT_0041c718 & 4;
    if (uVar11 == 0) {
      ppcVar10 = (code **)0x0;
      goto LAB_004115a3;
    }
    uVar11 = 0;
    if (param_3 == (undefined (*) [16])0x0) {
      return 0;
    }
LAB_00411607:
    uVar8 = 0;
    *param_3 = (undefined  [16])0x0;
    param_3[1] = (undefined  [16])0x0;
    param_3[2] = (undefined  [16])0x0;
LAB_00411618:
    iVar2 = *(int *)(&DAT_00447d60 + lVar12 * 4);
    lVar7 = (long)iVar2;
    if (7 < iVar2) {
      lVar7 = (long)iVar2 + 0x400000;
    }
    *(long *)*param_3 = lVar7;
  }
  else {
    lVar7 = *param_2;
    if (7 < lVar7) {
      if ((lVar7 < 0x400008) || (0x803ffffe < lVar7)) {
        uVar8 = FUN_00402af7();
        return uVar8;
      }
      lVar7 = lVar7 + -0x400000;
    }
    uVar11 = (uint)lVar7;
    if ((DAT_0041c718 & 4) != 0) {
      uVar8 = 0;
      if (param_3 == (undefined (*) [16])0x0) goto LAB_00411636;
      goto LAB_00411607;
    }
    ppcVar10 = &local_68;
    uVar6 = FUN_004154c0(ppcVar10,param_2,0x30);
    if ((uVar6 & 8) == 0) {
      if (((uVar6 & 1) != 0) && (((ulong)local_60 & DAT_00440988) == 0)) {
        local_60 = (undefined *)((ulong)local_60 | DAT_00440988);
        puStack88 = &DAT_004147d0;
      }
      if (7 < (int)uVar11) {
        local_68 = FUN_00411d3d;
      }
      if (uVar6 == 0x10) goto LAB_00411760;
      if ((int)uVar6 < 0x11) {
        puVar5 = puStack88;
        if (uVar6 != 1) goto joined_r0x004116ad;
      }
      else {
        pcVar9 = local_68;
        if (uVar6 == 0x20) goto LAB_0041172f;
      }
    }
    else {
      puStack88 = &LAB_00411b00;
      local_68 = (code *)&LAB_00411b00;
      if (uVar6 == 0x10) {
LAB_00411760:
        local_60 = (undefined *)CONCAT44((int)local_60,uStack80);
      }
      else {
        puVar5 = puStack88;
        if ((int)uVar6 < 0x11) {
joined_r0x004116ad:
          puStack88 = puVar5;
          if (uVar6 == 8) {
            uVar13 = 8;
            puStack88 = (undefined *)CONCAT44((int)local_60,uStack80);
            local_60 = puVar5;
          }
        }
        else {
          pcVar9 = (code *)&LAB_00411b00;
          if (uVar13 == 0x20) {
LAB_0041172f:
            local_60 = (undefined *)((ulong)local_60 & 0xffffffff | (ulong)uStack80 << 0x20);
            puStack88 = (undefined *)CONCAT44(uStack72,uStack76);
            local_68 = pcVar9;
          }
        }
      }
    }
LAB_004115a3:
    uVar8 = FUN_00412420(param_1 & 0xffffffff,ppcVar10,param_3);
    if ((int)uVar8 == -1) {
      return uVar8;
    }
    if (param_3 != (undefined (*) [16])0x0) {
      if (uVar13 == 0x10) {
        uVar1 = *(undefined4 *)(*param_3 + 8);
        *(long *)(*param_3 + 8) = (long)*(int *)(*param_3 + 0xc);
        *(undefined4 *)(param_3[1] + 8) = uVar1;
        *(undefined4 *)(param_3[1] + 0xc) = 0;
        *(undefined4 *)param_3[2] = 0;
        *(undefined4 *)(param_3[2] + 4) = 0;
      }
      else if ((int)uVar13 < 0x11) {
        if (uVar13 == 1) {
          local_78 = ZEXT816(*(ulong *)(param_3[1] + 8));
          local_78._0_4_ = (undefined4)*(ulong *)(param_3[1] + 8);
          *(undefined4 *)(param_3[1] + 8) = local_78._0_4_;
          *(undefined4 *)(param_3[1] + 0xc) = local_78._4_4_;
          *(undefined4 *)param_3[2] = 0;
          *(undefined4 *)(param_3[2] + 4) = 0;
        }
        else if (uVar13 == 8) {
          uVar1 = *(undefined4 *)(*param_3 + 8);
          *(long *)(*param_3 + 8) = (long)*(int *)(*param_3 + 0xc);
          *(undefined4 *)(param_3[1] + 8) = uVar1;
          *(undefined4 *)(param_3[1] + 0xc) = 0;
          *(undefined4 *)param_3[2] = 0;
          *(undefined4 *)(param_3[2] + 4) = 0;
        }
      }
      else if (uVar13 == 0x20) {
        uVar1 = *(undefined4 *)param_3[1];
        uVar3 = *(undefined4 *)(param_3[1] + 4);
        uVar4 = *(undefined4 *)(param_3[1] + 8);
        uVar13 = *(uint *)(*param_3 + 8);
        *(undefined4 *)(param_3[1] + 8) = *(undefined4 *)(*param_3 + 0xc);
        *(undefined4 *)(param_3[1] + 0xc) = uVar1;
        *(undefined4 *)param_3[2] = uVar3;
        *(undefined4 *)(param_3[2] + 4) = uVar4;
        *(ulong *)(*param_3 + 8) = (ulong)uVar13;
      }
      goto LAB_00411618;
    }
  }
  if (param_2 == (long *)0x0) {
    return uVar8;
  }
LAB_00411636:
  *(uint *)(&DAT_00447d60 + lVar12 * 4) = uVar11;
  return uVar8;
}



// WARNING: Removing unreachable block (ram,0x004117fe)
// WARNING: Removing unreachable block (ram,0x0041180f)

void FUN_004117e0(undefined8 param_1,undefined8 param_2)

{
  if (((byte)DAT_0041c718 & 4) == 0) {
    FUN_00411e40(DAT_00440780,param_1,param_2,0);
    return;
  }
  FUN_004057d0(param_1,param_2);
  return;
}



uint * FUN_00411870(ulong *param_1,uint *param_2)

{
  uint *puVar1;
  
  if ((DAT_0041c718 & 8) == 0) {
    if ((DAT_0041c718 & 0x30) != 0) {
      FUN_0041561f(param_1,0,0x2c);
      *(uint *)param_1 = *param_2;
      *(uint *)((long)param_1 + 4) = param_2[1];
      *(uint *)(param_1 + 1) = param_2[2];
      *(uint *)((long)param_1 + 0xc) = param_2[3];
      puVar1 = param_2;
      param_2 = (uint *)FUN_004154c0(param_1 + 2,param_2 + 4,0x14);
      param_2[9] = puVar1[0xc];
      param_2[10] = puVar1[0xd];
    }
    return param_2;
  }
  FUN_0041561f(param_1,0,0x48);
  *param_1 = (ulong)*param_2;
  param_1[1] = (ulong)param_2[1];
  param_1[2] = (ulong)param_2[2];
  param_1[3] = (ulong)param_2[3];
  puVar1 = (uint *)FUN_004154c0(param_1 + 4,param_2 + 4,0x14);
  *(ulong *)(puVar1 + 0xe) = (ulong)param_2[0xc];
  *(ulong *)(puVar1 + 0x10) = (ulong)param_2[0xd];
  return puVar1;
}



void FUN_00411930(undefined4 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  if ((DAT_0041c718 & 8) != 0) {
    FUN_0041561f(param_1,0,0x38);
    *param_1 = (int)*param_2;
    param_1[1] = (int)param_2[1];
    param_1[2] = (int)param_2[2];
    param_1[3] = (int)param_2[3];
    lVar1 = FUN_004154c0(param_1 + 4,param_2 + 4,0x14);
    *(int *)(lVar1 + 0x30) = (int)param_2[7];
    *(int *)(lVar1 + 0x34) = (int)param_2[8];
    return;
  }
  if ((DAT_0041c718 & 0x30) != 0) {
    FUN_0041561f();
    *param_1 = *(undefined4 *)param_2;
    param_1[1] = *(undefined4 *)((long)param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 1);
    param_1[3] = *(undefined4 *)((long)param_2 + 0xc);
    lVar1 = FUN_004154c0(param_1 + 4,param_2 + 2,0x14);
    *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)((long)param_2 + 0x24);
    *(undefined4 *)(lVar1 + 0x34) = *(undefined4 *)(param_2 + 5);
    return;
  }
  FUN_004154c0(param_1,param_2,0x38);
  return;
}



// WARNING: Removing unreachable block (ram,0x0040595e)
// WARNING: Removing unreachable block (ram,0x0040594a)
// WARNING: Removing unreachable block (ram,0x0040594f)
// WARNING: Removing unreachable block (ram,0x00405959)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong FUN_004119f0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;
  int local_338 [64];
  undefined8 local_238 [65];
  
  if (((byte)DAT_0041c718 & 4) == 0) {
                    // WARNING: Could not recover jumptable at 0x0041243a. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar6 = (*_DAT_0041c720)();
    return uVar6;
  }
  iVar3 = (int)param_1;
  if (iVar3 == -1) {
    uVar6 = (ulong)((int)DAT_00447b48 - 1);
    if ((int)DAT_00447b48 != 0) {
      puVar5 = DAT_00447b50 + uVar6 * 3;
      uVar8 = 0;
      do {
        uVar7 = uVar8;
        if (*(int *)(puVar5 + 2) == 3) {
          uVar1 = *puVar5;
          uVar4 = (int)uVar8 + 1;
          uVar7 = (ulong)uVar4;
          local_338[uVar8] = (int)uVar6;
          local_238[uVar8] = uVar1;
          if (uVar4 == 0x40) goto LAB_004058d4;
        }
        uVar6 = (ulong)((int)uVar6 - 1);
        bVar9 = DAT_00447b50 != puVar5;
        puVar5 = puVar5 + -3;
        uVar8 = uVar7;
      } while (bVar9);
      if ((int)uVar7 != 0) goto LAB_004058d4;
    }
  }
  else {
    cVar2 = FUN_00410c50(param_1,3);
    if (cVar2 != '\0') {
      uVar7 = 1;
      local_238[0] = DAT_00447b50[(long)iVar3 * 3];
      local_338[0] = iVar3;
LAB_004058d4:
      uVar6 = (long)param_3 & _DAT_00440a08;
      do {
        if (uVar6 == 0) {
          iVar3 = FUN_00406004(uVar7,local_238,0,0xffffffff);
        }
        else {
          iVar3 = FUN_00406004(uVar7,local_238,0,0);
          if (iVar3 == 0x102) {
            return 0;
          }
        }
      } while ((iVar3 != -1) && (iVar3 = (*DAT_0041b150)(), iVar3 != 0));
      uVar4 = FUN_004162a0();
      return (ulong)uVar4;
    }
  }
  uVar4 = FUN_00402ae2();
  return (ulong)uVar4;
}



void FUN_00411a10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  FUN_00411a30(param_1,&local_18,1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong FUN_00411a30(int param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  uint local_12c;
  undefined local_128 [152];
  undefined8 uStack144;
  undefined8 uStack128;
  undefined8 uStack104;
  undefined8 uStack96;
  uint local_4c;
  undefined local_48 [32];
  
  pcVar2 = DAT_0041b228;
  if ((param_1 < 0) || (param_3 < 0)) {
    iVar4 = FUN_00402b21();
    uVar6 = (ulong)iVar4;
  }
  else {
    if ((ulong)(long)param_1 < DAT_00447b48) {
      puVar1 = (undefined8 *)(DAT_00447b50 + (long)param_1 * 0x18);
      iVar4 = *(int *)(puVar1 + 2);
      if (iVar4 == 6) {
                    // WARNING: Treating indirect jump as call
        uVar6 = (*(code *)0x0)(*puVar1,param_2,(long)param_3,0xffffffffffffffff);
        return uVar6;
      }
      if (iVar4 == 5) {
        if ((long)param_3 != 0) {
          plVar9 = param_2 + (long)param_3 * 2;
          uVar6 = 0;
          do {
            if (param_2[1] != 0) {
              uVar5 = *puVar1;
              uVar8 = 0;
              lVar7 = uVar6 + 1;
              do {
                while( true ) {
                  bVar3 = in((short)uVar5 + 5);
                  if ((bVar3 & 0x20) != 0) break;
                  uVar5 = *puVar1;
                }
                out((short)uVar5,*(undefined *)(*param_2 + uVar8));
                uVar6 = lVar7 + uVar8;
                uVar8 = uVar8 + 1;
              } while (uVar8 <= (ulong)param_2[1] && param_2[1] != uVar8);
            }
            param_2 = param_2 + 2;
          } while (plVar9 != param_2);
          return uVar6;
        }
        return 0;
      }
      if (((byte)DAT_0041c718 & 4) == 0) goto LAB_00412440;
      if ((iVar4 == 1) || (iVar4 == 4)) {
        lVar7 = (long)param_3;
        do {
          if (lVar7 == 0) {
            lVar7 = 0;
            uStack96 = 0x405b93;
            uStack104 = FUN_00405e00(0xffffffffffffffff,local_48);
LAB_00405b23:
            uStack144 = 0x405b37;
            iVar4 = (*pcVar2)();
            if (iVar4 != 0) {
              if (local_4c == 0) {
                plVar9 = param_2 + lVar7 * 2;
                do {
                  param_2 = param_2 + 2;
                } while (plVar9 != param_2);
              }
              uStack128 = 0x405b67;
              (*DAT_0041b100)();
              return (ulong)local_4c;
            }
            uStack96 = 0x405ba5;
            uVar6 = FUN_004162a0();
            return uVar6;
          }
          if (param_2[1] != 0) {
            uStack96 = 0x405b0d;
            uStack104 = FUN_00405e00(0xffffffffffffffff,local_48);
            goto LAB_00405b23;
          }
          param_2 = param_2 + 2;
          lVar7 = lVar7 + -1;
        } while( true );
      }
      if (iVar4 == 2) {
        uVar10 = 0x40300a;
        uVar5 = FUN_00403110(local_128,param_2,(long)param_3);
        iVar4 = FUN_004033dc(*puVar1,local_128,uVar5,&local_12c,0,0,0,0,0,uVar10);
        if (iVar4 != -1) {
          return (ulong)local_12c;
        }
        uVar6 = FUN_00403070();
        return uVar6;
      }
    }
    else if (((byte)DAT_0041c718 & 4) == 0) {
LAB_00412440:
                    // WARNING: Could not recover jumptable at 0x0041244a. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar6 = (*_DAT_0041c720)();
      return uVar6;
    }
    uVar6 = FUN_00402acd();
  }
  return uVar6;
}



bool FUN_00411d3d(uint param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_00447d60 + (ulong)(param_1 & 0x7f) * 4);
  if (7 < iVar1) {
    (*(code *)(ulong)(iVar1 + 0x400000))();
  }
  return 7 < iVar1;
}



void FUN_00411d70(undefined8 param_1)

{
  undefined local_18 [16];
  
  FUN_00412010(param_1,local_18);
  return;
}



void FUN_00411da0(int param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  
  uVar2 = (ulong)param_1;
  cVar1 = FUN_00410c50(uVar2 & 0xffffffff,6);
  if (cVar1 != '\0') {
                    // WARNING: Treating indirect jump as call
    (*(code *)0x0)(*(undefined8 *)(DAT_00447b50 + uVar2 * 0x18),param_2,0);
    return;
  }
  if (((byte)DAT_0041c718 & 4) != 0) {
    cVar1 = FUN_00410c50(uVar2 & 0xffffffff,1);
    if (cVar1 == '\0') {
      FUN_00402acd();
      return;
    }
    FUN_00405bc0(*(undefined8 *)(DAT_00447b50 + uVar2 * 0x18),param_2);
    return;
  }
  FUN_00402480(param_1,param_2);
  return;
}



int FUN_00411e40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_004122e0();
  if (iVar1 != -1) {
    FUN_004024b0(param_3);
  }
  return iVar1;
}



ulong FUN_00411e70(int param_1)

{
  ulong uVar1;
  
  uVar1 = 0;
  if ((-1 < param_1) && ((ulong)(long)param_1 < DAT_00447b48)) {
    uVar1 = DAT_00447b50 + (long)param_1 * 0x18;
    uVar1 = uVar1 & 0xffffffffffffff00 | (ulong)(*(int *)(uVar1 + 0x10) != 0);
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00411ea0(long param_1)

{
  if (param_1 == 0) {
    FUN_00402af7();
    return;
  }
  if ((DAT_0041c718 & 4) == 0) {
    if ((DAT_0041c718 & 8) == 0) {
                    // WARNING: Could not recover jumptable at 0x004123aa. Too many branches
                    // WARNING: Treating indirect jump as call
      (*_DAT_0041c720)();
      return;
    }
    FUN_004120d0();
    return;
  }
  FUN_00405d40();
  return;
}



undefined8 FUN_00412010(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined8 local_20 [2];
  
  if ((DAT_0041c718 & 4) != 0) {
    FUN_00405fc1(local_20);
    auVar2 = FUN_004124a0(local_20[0]);
    *param_2 = SUB168(auVar2,0);
    param_2[1] = SUB168(auVar2 >> 0x40,0);
    return 0;
  }
  if ((DAT_0041c718 & 8) == 0) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
      param_2[1] = 0;
    }
    uVar1 = FUN_00412320(param_1,param_2);
    return uVar1;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    uVar1 = FUN_00412114(param_2,0);
    param_2[1] = param_2[1] * 1000;
    return uVar1;
  }
  uVar1 = FUN_00412114(0,0);
  return uVar1;
}



void FUN_004120d0(undefined8 *param_1)

{
  undefined8 local_28;
  long local_20;
  
  local_20 = FUN_0041547a(param_1[1]);
  local_28 = *param_1;
  if (local_20 < 1) {
    local_20 = 1;
  }
  FUN_00412400(0,0,0,0,&local_28);
  return;
}



undefined8 FUN_00412114(long *param_1,undefined8 *param_2)

{
  undefined auVar1 [16];
  
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  auVar1 = FUN_004122f0(param_1,0,0);
  if (((((byte)DAT_0041c718 & 8) != 0) && (param_1 != (long *)0x0)) && (SUB168(auVar1,0) != 0)) {
    *param_1 = SUB168(auVar1,0);
    param_1[1] = SUB168(auVar1 >> 0x40,0);
  }
  return 0;
}



ulong FUN_00412150(void)

{
  ulong uVar1;
  ulong local_10;
  
  if ((DAT_0041c020._3_1_ & 0x40) == 0) {
    if (((byte)DAT_0041c718 & 4) == 0) {
      FUN_00412210(&local_10,8);
    }
    else {
      local_10 = FUN_00405e30();
    }
    uVar1 = FUN_004121e0(&DAT_00448010);
    return uVar1 ^ local_10;
  }
  uVar1 = FUN_004121b0();
  return uVar1;
}



undefined8 FUN_004121b0(void)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  
  lVar1 = 10;
  do {
    uVar2 = rdrand();
    bVar3 = (bool)rdrandIsValid();
    if (bVar3) {
      return uVar2;
    }
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  uVar2 = FUN_004121b0();
  return uVar2;
}



void FUN_004121e0(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1 << 0xd ^ *param_1;
  uVar1 = uVar1 ^ uVar1 >> 7;
  *param_1 = uVar1 << 0x11 ^ uVar1;
  return;
}



int FUN_00412210(ulong param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (((byte)DAT_0041c718 & 4) == 0) {
    iVar1 = FUN_004123b0(DAT_00440780,"/dev/urandom",DAT_00440938,0);
    if (iVar1 != -1) {
      uVar3 = param_2 + param_1;
      if (param_1 < uVar3) {
        do {
          lVar2 = FUN_004123d0(iVar1,param_1,uVar3 - param_1);
          if ((lVar2 == -1) || (lVar2 == 0)) {
            FUN_00412330(iVar1);
            return -1;
          }
          param_1 = param_1 + lVar2;
        } while (param_1 < uVar3);
      }
      FUN_00412330(iVar1);
      return -(uint)(uVar3 != param_1);
    }
  }
  else {
    iVar1 = FUN_00402b9f();
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004122d0(void)

{
                    // WARNING: Could not recover jumptable at 0x004122da. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004122e0(void)

{
                    // WARNING: Could not recover jumptable at 0x004122ea. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004122f0(void)

{
                    // WARNING: Could not recover jumptable at 0x004122fa. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00412300(void)

{
                    // WARNING: Could not recover jumptable at 0x0041230a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00412310(void)

{
                    // WARNING: Could not recover jumptable at 0x0041231a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00412320(void)

{
                    // WARNING: Could not recover jumptable at 0x0041232a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00412330(void)

{
                    // WARNING: Could not recover jumptable at 0x0041233a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00412340(void)

{
                    // WARNING: Could not recover jumptable at 0x0041234a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00412350(void)

{
                    // WARNING: Could not recover jumptable at 0x0041235a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00412360(void)

{
                    // WARNING: Could not recover jumptable at 0x0041236a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00412370(void)

{
                    // WARNING: Could not recover jumptable at 0x0041237a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00412380(void)

{
                    // WARNING: Could not recover jumptable at 0x0041238a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004123b0(void)

{
                    // WARNING: Could not recover jumptable at 0x004123ba. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004123d0(void)

{
                    // WARNING: Could not recover jumptable at 0x004123da. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00412400(void)

{
                    // WARNING: Could not recover jumptable at 0x0041240a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00412410(void)

{
                    // WARNING: Could not recover jumptable at 0x0041241a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00412420(void)

{
                    // WARNING: Could not recover jumptable at 0x0041242a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



ulong FUN_00412450(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined auVar4 [16];
  
  auVar4 = FUN_004142f0(param_1,0,10);
  lVar3 = SUB168(auVar4 >> 0x40,0);
  uVar1 = SUB168(auVar4,0);
  if ((SBORROW8(-1,lVar3) != SBORROW8(-1 - lVar3,(ulong)(0xffffffff7fffffff < uVar1))) !=
      (long)((-1 - lVar3) - (ulong)(0xffffffff7fffffff < uVar1)) < 0) {
    uVar2 = uVar1 & 0xffffffff;
    if ((SBORROW8(lVar3,(ulong)(uVar1 < 0x80000000)) != false) ==
        (long)(lVar3 - (ulong)(uVar1 < 0x80000000)) < 0) {
      uVar2 = 0x7fffffff;
    }
    return uVar2;
  }
  return 0x80000000;
}



undefined  [16] FUN_004124a0(ulong param_1)

{
  return CONCAT88((param_1 % 10000000) * 100,param_1 / 10000000 - 0x2b6109100);
}



long FUN_004124e0(long *param_1,ulong param_2)

{
  *param_1 = param_2 / 10000000 - 0x2b6109100;
  param_1[1] = (param_2 % 10000000) / 10;
  return (param_2 % 10000000) * -0x3333333333333333;
}



long FUN_00412530(ulong param_1,char *param_2,byte param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = param_2;
  if (param_3 != 0) {
    do {
      param_3 = param_3 - 4;
      pcVar2 = pcVar1 + 1;
      *pcVar1 = "0123456789abcdef"[(uint)(param_1 >> (param_3 & 0x3f)) & 0xf];
      pcVar1 = pcVar2;
    } while (param_3 != 0);
    *pcVar2 = '\0';
    return (long)pcVar2 - (long)param_2;
  }
  *param_2 = '\0';
  return 0;
}



ulong FUN_00412580(ulong param_1,long param_2)

{
  undefined uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = 0;
  do {
    uVar4 = uVar5;
    uVar5 = uVar4 + 1;
    *(char *)(param_2 + -1 + uVar5) = (char)param_1 + (char)(param_1 / 10) * -10 + '0';
    bVar2 = 9 < param_1;
    param_1 = param_1 / 10;
  } while (bVar2);
  *(undefined *)(param_2 + uVar5) = 0;
  uVar3 = 0;
  if (uVar4 != 0) {
    do {
      uVar1 = *(undefined *)(param_2 + uVar3);
      *(undefined *)(param_2 + uVar3) = *(undefined *)(param_2 + uVar4);
      uVar3 = uVar3 + 1;
      *(undefined *)(param_2 + uVar4) = uVar1;
      uVar4 = uVar4 - 1;
    } while (uVar3 < uVar4);
  }
  return uVar5;
}



long FUN_00412600(long param_1,undefined *param_2)

{
  long lVar1;
  
  if (param_1 < 0) {
    *param_2 = 0x2d;
    lVar1 = FUN_00412580(-param_1,param_2 + 1);
    return lVar1 + 1;
  }
  lVar1 = FUN_00412580();
  return lVar1;
}



void FUN_00412630(ulong param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = 4;
  if (param_1 != 0) {
    lVar1 = 0x3f;
    if (param_1 != 0) {
      for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar2 = (int)lVar1 + 4U & 0xfc;
  }
  FUN_00412530(param_1,param_2,uVar2);
  return;
}



// WARNING: Removing unreachable block (ram,0x004126bf)
// WARNING: Removing unreachable block (ram,0x00412b30)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00412660(code *param_1,undefined8 param_2,int param_3,ulong param_4,uint param_5,
                undefined8 param_6,float10 param_7)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  uint uVar11;
  float10 in_ST0;
  float10 fVar12;
  float10 fVar13;
  code *local_d8;
  ulong local_90;
  char cStack121;
  undefined4 local_78;
  
  uVar11 = param_5 & 3;
  fVar12 = ABS(param_7);
  local_90 = param_4;
  if (fVar12 <= _DAT_004189b0) {
    local_d8 = param_1;
    if (param_7 != (float10)0) {
      local_d8 = SUB108(fVar12,0);
      iVar2 = FUN_004147b4();
      if (0x3f < iVar2) goto LAB_00412702;
    }
    if ((param_5 & 0x20) == 0) {
      in_ST0 = (float10)1000000.0;
      uVar5 = 0;
      param_3 = 6;
    }
    else {
      uVar8 = 1;
      if (param_3 < 0xf) {
        FUN_00414795(local_d8);
        uVar5 = 0;
      }
      else {
        do {
          uVar5 = uVar8;
          (&cStack121)[uVar5] = '0';
          param_3 = param_3 + -1;
          if (0x3f < (uint)uVar5) break;
          uVar8 = uVar5 + 1;
        } while (0xe < param_3);
        FUN_00414795(local_d8);
        uVar5 = uVar5 & 0xffffffff;
      }
    }
    uVar8 = (ulong)ROUND(fVar12);
    fVar13 = (fVar12 - (float10)uVar8) * in_ST0;
    uVar9 = (ulong)ROUND(fVar13);
    fVar13 = fVar13 - (float10)uVar9;
    if (fVar13 <= (float10)0.5) {
      if (((float10)0.5 <= fVar13) && ((uVar9 == 0 || ((uVar9 & 1) != 0)))) {
        uVar9 = uVar9 + 1;
      }
    }
    else {
      uVar9 = uVar9 + 1;
      if (in_ST0 <= (float10)uVar9) {
        uVar8 = uVar8 + 1;
        uVar9 = 0;
      }
    }
    if (param_3 != 0) {
      do {
        iVar2 = param_3;
        uVar3 = uVar5 & 0xffffffff;
        if (0x3f < (uint)uVar5) goto LAB_00412a84;
        uVar4 = (uint)uVar5 + 1;
        uVar3 = (ulong)uVar4;
        param_3 = iVar2 + -1;
        uVar1 = (long)uVar9 / 10;
        *(char *)((long)&local_78 + uVar5) = (char)uVar9 + (char)uVar1 * -10 + '0';
        uVar5 = uVar5 + 1;
        uVar9 = uVar1;
      } while (uVar1 != 0);
      if (uVar4 != 0x40) {
        if (param_3 != 0) {
          puVar10 = (undefined *)((long)&local_78 + (ulong)uVar4);
          do {
            uVar6 = (int)uVar3 + 1;
            uVar3 = (ulong)uVar6;
            *puVar10 = 0x30;
            if (uVar6 == 0x40) {
              if (uVar11 != 1) goto LAB_00412750;
              if (param_4 != 0) goto LAB_00412a9c;
              goto LAB_00412770;
            }
            puVar10 = puVar10 + 1;
          } while (puVar10 != (undefined *)((long)&local_78 + (ulong)(iVar2 - 2) + (ulong)uVar4 + 1)
                  );
        }
        *(undefined *)((long)&local_78 + uVar3) = 0x2e;
        uVar5 = (ulong)((int)uVar3 + 1);
        goto LAB_004128c8;
      }
LAB_00412a84:
      if (uVar11 == 1) goto LAB_00412a8e;
      goto LAB_00412750;
    }
    if ((float10)0.5 <= fVar12 - (float10)uVar8) {
      uVar8 = (uVar8 + 1) - (ulong)((uVar8 & 1) == 0);
    }
LAB_004128c8:
    do {
      uVar3 = uVar5 & 0xffffffff;
      if (0x3f < (uint)uVar5) goto LAB_00412a84;
      uVar3 = (ulong)((uint)uVar5 + 1);
      uVar9 = uVar8 / 10;
      *(char *)((long)&local_78 + uVar5) = (char)uVar8 + (char)uVar9 * -10 + '0';
      uVar5 = uVar5 + 1;
      uVar8 = uVar9;
    } while (uVar9 != 0);
    uVar8 = uVar3;
    if (uVar11 != 1) {
LAB_00412909:
      if ((uint)uVar8 < 0x40) goto LAB_0041270f;
      uVar3 = uVar8 & 0xffffffff;
      goto LAB_00412750;
    }
LAB_00412a8e:
    uVar8 = uVar3;
    if (param_4 == 0) goto LAB_00412909;
LAB_00412a9c:
    if ((param_7 < (float10)0) || ((param_5 & 0xc) != 0)) {
      local_90 = param_4 - 1;
    }
    uVar8 = uVar3;
    if (local_90 <= uVar3) goto LAB_00412909;
    uVar8 = (ulong)((uint)uVar3 + 1);
    if ((uint)uVar3 < 0x40) {
      do {
        *(undefined *)((long)&local_78 + uVar3) = 0x30;
        uVar11 = (uint)uVar3;
        uVar5 = uVar8 & 0xffffffff;
        if (local_90 <= uVar8) goto LAB_00412909;
        uVar3 = uVar3 + 1;
        uVar8 = uVar8 + 1;
      } while ((uint)uVar3 < 0x40);
      lVar7 = 0x30;
      goto LAB_0041277c;
    }
  }
  else {
LAB_00412702:
    local_78 = 0x696e66;
    uVar8 = 3;
LAB_0041270f:
    if (param_7 < (float10)0) {
      uVar3 = (ulong)((int)uVar8 + 1);
      *(undefined *)((long)&local_78 + (uVar8 & 0xffffffff)) = 0x2d;
    }
    else if ((param_5 & 4) == 0) {
      uVar3 = uVar8 & 0xffffffff;
      if ((param_5 & 8) != 0) {
        uVar3 = (ulong)((int)uVar3 + 1);
        *(undefined *)((long)&local_78 + (uVar8 & 0xffffffff)) = 0x20;
      }
    }
    else {
      uVar3 = (ulong)((int)uVar8 + 1);
      *(undefined *)((long)&local_78 + (uVar8 & 0xffffffff)) = 0x2b;
    }
LAB_00412750:
    if ((((param_5 & 3) == 0) && (uVar3 < local_90)) &&
       (iVar2 = FUN_00413b40(param_1,param_2,local_90 - uVar3), iVar2 == -1)) {
      return -1;
    }
  }
LAB_00412770:
  uVar11 = (int)uVar3 - 1;
  lVar7 = (long)*(char *)((long)&local_78 + (ulong)uVar11);
  uVar5 = uVar3;
LAB_0041277c:
  uVar4 = uVar11 - (int)uVar5;
  while( true ) {
    uVar11 = uVar11 - 1;
    iVar2 = (*param_1)(lVar7,param_2);
    if (iVar2 == -1) {
                    // WARNING: Read-only address (ram,0x004189b0) is written
      return -1;
    }
    if (uVar4 == uVar11) break;
    lVar7 = (long)*(char *)((long)&local_78 + (ulong)uVar11);
  }
  iVar2 = 0;
  if (((param_5 & 2) != 0) && (uVar5 < local_90)) {
    iVar2 = FUN_00413b40(param_1,param_2,local_90 - uVar5);
    iVar2 = -(uint)(iVar2 == -1);
  }
  return iVar2;
}



int FUN_00412c10(code *param_1,undefined8 param_2,ulong param_3,ulong param_4,char param_5,
                uint param_6,uint param_7,uint param_8,byte param_9,long param_10)

{
  byte bVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  bool bVar12;
  undefined auVar13 [16];
  uint local_d8;
  char acStack200 [152];
  ulong uVar5;
  
  auVar13 = CONCAT88(param_4,param_3);
  bVar3 = param_9;
  if (((param_4 | param_3) == 0) && (bVar3 = param_9 & 0xef, (param_9 & 0x20) != 0)) {
    uVar9 = 0;
  }
  else {
    bVar1 = (byte)param_6;
    iVar7 = 0;
    uVar9 = 0;
    do {
      uVar5 = SUB168(auVar13 >> 0x40,0);
      if (param_6 == 0) {
        auVar13 = FUN_00414650(SUB168(auVar13,0),uVar5,10);
        uVar8 = (ulong)local_d8;
      }
      else {
        uVar8 = (ulong)(SUB164(auVar13,0) & ~(-1 << (bVar1 & 0x1f)));
        uVar10 = uVar5 >> (bVar1 & 0x3f);
        auVar13 = CONCAT88(uVar10,SUB168(auVar13,0) >> (bVar1 & 0x3f) |
                                  uVar5 << 0x40 - (bVar1 & 0x3f));
        if ((param_6 & 0x40) != 0) {
          auVar13 = ZEXT816(uVar10);
        }
      }
      uVar4 = (int)uVar9 + 1;
      uVar5 = (ulong)uVar4;
      if ((iVar7 == 3) && ((char)bVar3 < '\0')) {
        iVar7 = 1;
        uVar4 = (int)uVar9 + 2;
        acStack200[uVar9] = ',';
      }
      else {
        iVar7 = iVar7 + 1;
        uVar5 = uVar9;
      }
      uVar9 = (ulong)uVar4;
      acStack200[uVar5] = *(char *)(param_10 + uVar8);
    } while (auVar13 != (undefined  [16])0x0);
  }
  if ((bVar3 & 2) == 0) {
    uVar4 = (uint)uVar9;
    bVar12 = uVar4 < 0x90;
    bVar6 = uVar4 < param_7 && bVar12;
    if (param_8 == 0) {
      if (bVar6) goto LAB_00412d7e;
LAB_00412da9:
      if ((bVar3 & 1) == 0) goto LAB_00412df8;
      bVar12 = (uint)uVar9 < 0x90;
    }
    else {
      if ((bVar3 & 1) == 0) {
        if (uVar4 >= param_7 || !bVar12) goto LAB_00412df8;
LAB_00412d7e:
        pcVar2 = acStack200 + uVar9;
        do {
          uVar4 = (int)uVar9 + 1;
          uVar9 = (ulong)uVar4;
          *pcVar2 = '0';
          pcVar2 = pcVar2 + 1;
          if (param_7 <= uVar4) break;
        } while (uVar4 < 0x90);
        goto LAB_00412da9;
      }
      if ((param_5 != '\0') || ((bVar3 & 0xc) != 0)) {
        param_8 = param_8 - 1;
      }
      if (bVar6) goto LAB_00412d7e;
    }
    if (((uint)uVar9 < param_8) && (bVar12)) {
      pcVar2 = acStack200 + uVar9;
      do {
        uVar4 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar4;
        *pcVar2 = '0';
        pcVar2 = pcVar2 + 1;
        if (param_8 <= uVar4) break;
      } while (uVar4 < 0x90);
    }
  }
LAB_00412df8:
  if ((bVar3 & 0x10) == 0) {
LAB_00412e48:
    uVar4 = (uint)uVar9;
    if (0x8f < uVar4) goto LAB_00412eb0;
    if (param_5 == '\0') {
      if ((bVar3 & 4) == 0) {
        if ((bVar3 & 8) == 0) goto LAB_00412eb0;
        acStack200[uVar9] = ' ';
      }
      else {
        acStack200[uVar9] = '+';
      }
    }
    else {
      acStack200[uVar9] = '-';
    }
    uVar4 = uVar4 + 1;
    if ((((bVar3 & 3) == 0) && (uVar4 < param_8)) &&
       (iVar7 = FUN_00413b40(param_1,param_2,param_8 - uVar4), iVar7 == -1)) {
      return -1;
    }
  }
  else {
    bVar12 = param_6 == 4;
    uVar4 = (uint)uVar9;
    if ((bVar3 & 0x20) == 0) {
      if (uVar4 == 0) {
        bVar6 = true;
        goto LAB_00412e19;
      }
      bVar6 = param_7 == uVar4 || uVar4 == param_8;
      if ((param_7 != uVar4 && uVar4 != param_8) || (uVar11 = uVar4 - 1, acStack200[uVar11] != '0'))
      goto LAB_00412e0d;
      if (uVar11 == 0) {
        uVar9 = 0;
        goto LAB_00412e19;
      }
      bVar6 = param_6 == 1 || bVar12;
      if (bVar6) {
        uVar9 = (ulong)(uVar4 - 2);
        if (acStack200[uVar9] != '0') {
          uVar9 = (ulong)uVar11;
          bVar6 = uVar11 < 0x90;
          bVar12 = bVar12 && bVar6;
        }
        goto LAB_00412e19;
      }
      uVar5 = (ulong)uVar11;
    }
    else {
LAB_00412e0d:
      bVar6 = uVar4 < 0x90;
      bVar12 = bVar12 && bVar6;
LAB_00412e19:
      if (bVar12) {
        acStack200[uVar9] = 'x';
        uVar5 = (ulong)((int)uVar9 + 1);
      }
      else {
        uVar5 = uVar9;
        if ((param_6 == 1) && (bVar6)) {
          uVar5 = (ulong)((int)uVar9 + 1);
          acStack200[uVar9] = 'b';
        }
      }
    }
    uVar4 = (uint)uVar5;
    if (uVar4 < 0x90) {
      uVar9 = (ulong)(uVar4 + 1);
      acStack200[uVar5] = '0';
      goto LAB_00412e48;
    }
LAB_00412eb0:
    if ((((bVar3 & 3) == 0) && (uVar4 < param_8)) &&
       (iVar7 = FUN_00413b40(param_1,param_2,param_8 - uVar4), iVar7 == -1)) {
      return -1;
    }
    if (uVar4 == 0) {
      uVar11 = 0;
      goto LAB_00412f00;
    }
  }
  uVar11 = 0;
  do {
    iVar7 = (*param_1)((long)acStack200[(uVar4 - 1) - uVar11],param_2);
    if (iVar7 == -1) {
      return -1;
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < uVar4);
LAB_00412f00:
  if (((bVar3 & 2) != 0) && (uVar11 < param_8)) {
    iVar7 = FUN_00413b40(param_1,param_2,param_8 - uVar11);
    return -(uint)(iVar7 == -1);
  }
  return 0;
}



void FUN_004130c0(undefined8 param_1,undefined8 param_2,uint *param_3,byte param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7,byte param_8,
                 undefined8 param_9)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  bool bVar12;
  
  if ((param_8 & 0x20) != 0) {
    param_8 = param_8 & 0xfe;
  }
  bVar2 = param_8;
  if ((param_8 & 0x40) == 0) {
    bVar2 = param_8 & 0xf3;
  }
  uVar1 = *param_3;
  if (param_4 < 0x40) {
    if (uVar1 < 0x30) {
      puVar7 = (ulong *)((ulong)uVar1 + *(long *)(param_3 + 4));
      *param_3 = uVar1 + 8;
    }
    else {
      puVar7 = *(ulong **)(param_3 + 2);
      *(ulong **)(param_3 + 2) = puVar7 + 1;
    }
    uVar10 = *puVar7;
    uVar6 = 0;
  }
  else {
    if (uVar1 < 0x28) {
      puVar7 = (ulong *)((ulong)uVar1 + *(long *)(param_3 + 4));
      *param_3 = uVar1 + 0x10;
    }
    else {
      puVar7 = (ulong *)(*(long *)(param_3 + 2) + 0xfU & 0xfffffffffffffff0);
      *(ulong **)(param_3 + 2) = puVar7 + 2;
    }
    uVar10 = *puVar7;
    uVar6 = puVar7[1];
  }
  uVar8 = 1 << (param_4 & 0x3f);
  uVar9 = uVar8;
  uVar3 = 0 << (param_4 & 0x3f) | 1U >> 0x40 - (param_4 & 0x3f);
  if ((param_4 & 0x40) != 0) {
    uVar9 = 0;
    uVar3 = uVar8;
  }
  uVar4 = (uVar3 - 1) + (ulong)(uVar9 != 0);
  uVar8 = uVar9 - 1 | uVar9;
  uVar5 = uVar4 | uVar3;
  uVar6 = uVar6 & uVar5;
  uVar10 = uVar10 & uVar8;
  bVar12 = false;
  if (((param_8 & 0x40) != 0) && (bVar12 = true, (uVar3 ^ uVar6 | uVar9 ^ uVar10) != 0)) {
    bVar12 = (uVar3 & uVar6 | uVar9 & uVar10) != 0;
    if (bVar12) {
      bVar11 = uVar10 != 0;
      uVar10 = uVar8 & -uVar10;
      uVar6 = uVar5 & -(uVar6 + bVar11);
    }
    uVar6 = uVar6 & uVar4;
    uVar10 = uVar9 - 1 & uVar10;
  }
  FUN_00412c10(param_1,param_2,uVar10,uVar6,bVar12,param_5,param_6,param_7,bVar2,param_9);
  return;
}



// WARNING: Removing unreachable block (ram,0x004135c4)
// WARNING: Removing unreachable block (ram,0x004133fe)

undefined8 FUN_00413260(code *param_1,undefined8 param_2,char *param_3,uint *param_4)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  char *pcVar14;
  char *pcVar15;
  bool bVar16;
  undefined4 local_3c [3];
  
  pcVar8 = (code *)0x40116a;
  if (param_1 != (code *)0x0) {
    pcVar8 = param_1;
  }
  cVar3 = *param_3;
joined_r0x0041328b:
  if (cVar3 == '\0') {
    return 0;
  }
  if (cVar3 == '%') {
    uVar5 = 0;
    pcVar14 = param_3 + 1;
LAB_004132e3:
    while( true ) {
      while( true ) {
        cVar3 = *pcVar14;
        pcVar15 = pcVar14 + 1;
        if (cVar3 != ',') break;
        uVar5 = uVar5 | 0x80;
        pcVar14 = pcVar15;
      }
      if (cVar3 < '-') break;
      if (cVar3 == '0') {
        uVar5 = uVar5 | 1;
        pcVar14 = pcVar15;
      }
      else if (cVar3 == '`') {
        uVar5 = uVar5 | 4;
LAB_00413310:
        uVar5 = uVar5 | 8;
        pcVar14 = pcVar15;
      }
      else {
        if (cVar3 != '-') {
          iVar11 = (int)cVar3;
          iVar4 = 0;
          if ((iVar11 - 0x30U < 10) && (iVar4 = 0, (byte)(cVar3 - 0x30U) < 10)) {
            while( true ) {
              iVar4 = iVar11 + -0x30 + iVar4 * 10;
              cVar3 = *pcVar15;
              pcVar14 = pcVar15;
              if (9 < (byte)(cVar3 - 0x30U)) break;
              pcVar15 = pcVar15 + 1;
              iVar11 = (int)cVar3;
            }
          }
          goto LAB_00413800;
        }
        uVar5 = uVar5 | 2;
        pcVar14 = pcVar15;
      }
    }
    if (cVar3 == '\'') goto LAB_00413310;
    if (cVar3 < '(') {
      if (cVar3 == ' ') goto LAB_00413310;
      if (cVar3 != '#') goto LAB_00413340;
      uVar5 = uVar5 | 0x10;
      pcVar14 = pcVar15;
      goto LAB_004132e3;
    }
    if (cVar3 == '+') {
      uVar5 = uVar5 | 4;
      pcVar14 = pcVar15;
      goto LAB_004132e3;
    }
    if (cVar3 != '*') goto LAB_00413340;
    uVar1 = *param_4;
    if (uVar1 < 0x30) {
      piVar7 = (int *)((ulong)uVar1 + *(long *)(param_4 + 4));
      *param_4 = uVar1 + 8;
    }
    else {
      piVar7 = *(int **)(param_4 + 2);
      *(int **)(param_4 + 2) = piVar7 + 2;
    }
    iVar4 = *piVar7;
    if (iVar4 < 0) {
      uVar5 = uVar5 | 2;
      iVar4 = -iVar4;
    }
    cVar3 = pcVar14[1];
    pcVar14 = pcVar15;
LAB_00413800:
    pcVar15 = pcVar14;
    if (cVar3 != '.') goto LAB_00413343;
    cVar3 = pcVar14[1];
    iVar11 = (int)cVar3;
    uVar5 = uVar5 | 0x20;
    pcVar15 = pcVar14 + 1;
    if (iVar11 - 0x30U < 10) {
      if (9 < (byte)(cVar3 - 0x30U)) goto LAB_00413343;
      iVar6 = 0;
      while( true ) {
        pcVar15 = pcVar15 + 1;
        iVar6 = iVar11 + -0x30 + iVar6 * 10;
        cVar3 = *pcVar15;
        if (9 < (byte)(cVar3 - 0x30U)) break;
        iVar11 = (int)cVar3;
      }
    }
    else {
      if (cVar3 != '*') goto LAB_00413343;
      uVar1 = *param_4;
      if (uVar1 < 0x30) {
        piVar7 = (int *)((ulong)uVar1 + *(long *)(param_4 + 4));
        *param_4 = uVar1 + 8;
      }
      else {
        piVar7 = *(int **)(param_4 + 2);
        *(int **)(param_4 + 2) = piVar7 + 2;
      }
      iVar6 = 0;
      if (-1 < *piVar7) {
        iVar6 = *piVar7;
      }
      cVar3 = pcVar14[2];
      pcVar15 = pcVar14 + 2;
    }
    goto LAB_00413345;
  }
  iVar4 = (*pcVar8)((long)cVar3,param_2);
  if (iVar4 == -1) {
    return 0xffffffff;
  }
  param_3 = param_3 + 1;
  goto LAB_004132b2;
LAB_00413340:
  iVar4 = 0;
  pcVar15 = pcVar14;
LAB_00413343:
  iVar6 = 0;
LAB_00413345:
  if (cVar3 == 'j') {
    cVar3 = pcVar15[1];
    param_3 = pcVar15 + 1;
    uVar9 = 0x7f;
LAB_00413380:
    param_3 = param_3 + 1;
    if (cVar3 != 'o') {
      if ('o' < cVar3) {
        if (cVar3 != 's') {
          if ('s' < cVar3) {
            if (cVar3 != 'u') goto joined_r0x00413660;
            goto LAB_004133c1;
          }
          if (cVar3 != 'q') {
            if (cVar3 != 'r') goto LAB_00413718;
            goto LAB_004136b8;
          }
LAB_004136bb:
          uVar5 = uVar5 | 8;
        }
LAB_004136be:
        uVar1 = *param_4;
        if (uVar1 < 0x30) {
          puVar12 = (undefined8 *)((ulong)uVar1 + *(long *)(param_4 + 4));
          *param_4 = uVar1 + 8;
        }
        else {
          puVar12 = *(undefined8 **)(param_4 + 2);
          *(undefined8 **)(param_4 + 2) = puVar12 + 1;
        }
        puVar13 = (undefined4 *)*puVar12;
        uVar10 = 0x22;
LAB_004136e0:
        iVar4 = FUN_00413cc0(pcVar8,param_2,puVar13,uVar5,(long)iVar6,(long)iVar4,uVar9,uVar10);
        goto joined_r0x00413709;
      }
      if (cVar3 == 'c') {
LAB_00413858:
        uVar1 = *param_4;
joined_r0x004139e7:
        uVar5 = uVar5 | 0x20;
        if (uVar1 < 0x30) {
          puVar13 = (undefined4 *)((ulong)uVar1 + *(long *)(param_4 + 4));
          *param_4 = uVar1 + 8;
        }
        else {
          puVar13 = *(undefined4 **)(param_4 + 2);
          *(undefined4 **)(param_4 + 2) = puVar13 + 2;
        }
        local_3c[0] = *puVar13;
        uVar10 = 0x27;
        iVar6 = 1;
        puVar13 = local_3c;
        goto LAB_004136e0;
      }
      if (cVar3 < 'd') {
        if (cVar3 != 'X') {
          if (cVar3 < 'Y') {
            if (cVar3 == '%') goto LAB_00413580;
            if (cVar3 != 'F') goto LAB_004134b3;
LAB_00413688:
            if (param_4[1] < 0xb0) {
              param_4[1] = param_4[1] + 0x10;
            }
            else {
              *(long *)(param_4 + 2) = *(long *)(param_4 + 2) + 8;
            }
            goto LAB_00413612;
          }
joined_r0x004133bb:
          if (cVar3 != 'b') goto LAB_004134b3;
        }
      }
      else if (cVar3 != 'i') {
        if ('i' < cVar3) {
LAB_004135ae:
          if (cVar3 != 'm') goto LAB_004134b3;
          goto LAB_004135b6;
        }
        if (cVar3 != 'd') {
          if (cVar3 != 'f') goto LAB_004134b3;
          goto LAB_00413688;
        }
      }
    }
  }
  else if (cVar3 < 'k') {
    if (cVar3 == 'h') {
      cVar3 = pcVar15[1];
      param_3 = pcVar15 + 1;
      uVar9 = 0xf;
      if (cVar3 == 'h') {
        cVar3 = pcVar15[2];
        param_3 = pcVar15 + 2;
        uVar9 = 7;
      }
      goto LAB_00413380;
    }
    if ((cVar3 == 'i') || ((cVar3 != 'L' && (cVar3 != 'Z')))) {
LAB_00413420:
      param_3 = pcVar15 + 1;
      if (cVar3 != 'b') {
        if (cVar3 < 'c') {
          if (cVar3 != 'F') {
            if (cVar3 == 'X') goto LAB_004133c1;
            if (cVar3 != '%') goto LAB_004134b3;
LAB_00413580:
            iVar4 = (*pcVar8)(0x25,param_2);
            goto joined_r0x00413709;
          }
          goto LAB_00413688;
        }
        if (cVar3 != 'd') {
          if (cVar3 < 'e') {
            uVar9 = 0x1f;
            if (cVar3 != 'c') {
              cVar3 = 'd';
              goto LAB_004134b3;
            }
            goto LAB_00413858;
          }
          if (cVar3 == 'f') goto LAB_00413688;
          if (cVar3 != 'i') goto LAB_004134b3;
        }
      }
    }
    else {
LAB_00413468:
      cVar3 = pcVar15[1];
LAB_0041346d:
      param_3 = pcVar15 + 2;
      cVar2 = cVar3 + -0x6f;
      bVar16 = cVar3 == 'o';
      if (!bVar16) goto LAB_00413479;
    }
  }
  else {
    if (cVar3 != 'l') {
      if ((cVar3 != 'k') && ((cVar3 == 't' || (cVar3 == 'z')))) goto LAB_00413468;
      param_3 = pcVar15 + 1;
      if (cVar3 != 'm') {
        if (cVar3 < 'n') goto LAB_00413420;
        if (cVar3 != 'r') {
          if (cVar3 < 's') {
            if (cVar3 != 'p') {
              if (cVar3 == 'q') {
                uVar9 = 0x1f;
                goto LAB_004136bb;
              }
              if (cVar3 != 'o') goto LAB_004134b3;
            }
          }
          else if ((cVar3 != 'u') && (cVar3 != 'x')) {
            if (cVar3 != 's') goto LAB_004134b3;
            uVar9 = 0x1f;
            goto LAB_004136be;
          }
          goto LAB_004133c1;
        }
        uVar9 = 0x1f;
LAB_004136b8:
        uVar5 = uVar5 | 4;
        goto LAB_004136bb;
      }
LAB_004135b6:
      uVar9 = 0;
      uVar10 = 0x22;
      puVar13 = (undefined4 *)&DAT_004189d1;
      goto LAB_004136e0;
    }
    cVar3 = pcVar15[1];
    if (cVar3 != 'l') goto LAB_0041346d;
    cVar3 = pcVar15[2];
    param_3 = pcVar15 + 3;
    cVar2 = cVar3 + -0x6f;
    bVar16 = cVar2 == '\0';
    if (bVar16) goto LAB_004133c1;
LAB_00413479:
    if (bVar16 || SBORROW1(cVar3,'o') != cVar2 < '\0') {
      if (cVar3 == 'c') {
        uVar1 = *param_4;
        uVar9 = 0x3f;
        goto joined_r0x004139e7;
      }
      if (cVar3 < 'd') {
        if (cVar3 == 'X') goto LAB_004133c1;
        if ('X' < cVar3) goto joined_r0x004133bb;
        if (cVar3 == '%') goto LAB_00413580;
        if (cVar3 != 'F') goto LAB_004134b3;
LAB_004135fc:
        *(ulong *)(param_4 + 2) = (*(long *)(param_4 + 2) + 0xfU & 0xfffffffffffffff0) + 0x10;
LAB_00413612:
        iVar4 = FUN_00412660(pcVar8,param_2);
        goto joined_r0x00413709;
      }
      if (cVar3 != 'i') {
        if ('i' < cVar3) goto LAB_004135ae;
        if (cVar3 != 'd') {
          if (cVar3 != 'f') goto LAB_004134b3;
          goto LAB_004135fc;
        }
      }
    }
    else {
      if (cVar3 == 's') {
        uVar9 = 0x3f;
        goto LAB_004136be;
      }
      if (cVar3 < 't') {
        if (cVar3 == 'q') {
          uVar9 = 0x3f;
          goto LAB_004136bb;
        }
        if (cVar3 == 'r') {
          uVar9 = 0x3f;
          goto LAB_004136b8;
        }
LAB_00413718:
        if (cVar3 != 'p') goto LAB_004134b3;
      }
      else {
        if (cVar3 == 'u') goto LAB_004133c1;
joined_r0x00413660:
        if (cVar3 != 'x') {
LAB_004134b3:
          iVar4 = (*pcVar8)((long)cVar3,param_2);
          if (iVar4 == -1) {
            return 0xffffffff;
          }
          cVar3 = *param_3;
          goto joined_r0x0041328b;
        }
      }
    }
  }
LAB_004133c1:
  iVar4 = FUN_004130c0(pcVar8,param_2,param_4);
joined_r0x00413709:
  if (iVar4 == -1) {
    return 0xffffffff;
  }
LAB_004132b2:
  cVar3 = *param_3;
  goto joined_r0x0041328b;
}



void FUN_00413ac0(void)

{
  FUN_00414600();
  return;
}



uint FUN_00413b40(code *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      uVar1 = (*param_1)(0x20,param_2);
      uVar3 = uVar3 | uVar1;
    } while ((int)param_3 != iVar2);
  }
  return uVar3;
}



undefined8 FUN_00413bb0(code *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  
  if ((param_3 & 0xffffff80) == 0) {
    iVar1 = FUN_00415409(param_3);
    uVar2 = (ulong)iVar1;
    do {
      iVar1 = (*param_1)(uVar2 & 0xff,param_2);
      if (iVar1 == -1) {
        return 0xffffffff;
      }
      uVar2 = uVar2 >> 8;
    } while (uVar2 != 0);
  }
  else {
    uVar2 = FUN_00414845();
    do {
      iVar1 = (*param_1)(uVar2 & 0xff,param_2);
      if (iVar1 == -1) {
        return 0xffffffff;
      }
      uVar2 = uVar2 >> 8;
    } while (uVar2 != 0);
  }
  return 0;
}



undefined8 FUN_00413c40(code *UNRECOVERED_JUMPTABLE,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if ((param_3 & 0xffffff80) == 0) {
                    // WARNING: Could not recover jumptable at 0x00413c6a. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  uVar2 = FUN_00414845();
  do {
    uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2 & 0xff,param_2);
    if ((int)uVar1 == -1) {
      return uVar1;
    }
    uVar2 = uVar2 >> 8;
  } while (uVar2 != 0);
  return 0;
}



void FUN_00413cb0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  FUN_00413c40(param_1,param_2,*(undefined2 *)((ulong)param_3 * 2));
  return;
}



// WARNING: Removing unreachable block (ram,0x00414069)
// WARNING: Removing unreachable block (ram,0x00414296)
// WARNING: Removing unreachable block (ram,0x004140da)

int FUN_00413cc0(code *param_1,undefined8 param_2,char *param_3,uint param_4,ulong param_5,
                ulong param_6,char param_7,undefined param_8)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  char cVar9;
  char cVar10;
  int local_54;
  byte local_50;
  uint local_48;
  code *local_40;
  
  if ((uint *)param_3 == (uint *)0x0) {
    param_3 = "(null)";
    if ((param_4 & 4) != 0) {
      param_3 = &DAT_004189d3;
    }
    uVar6 = 0;
    param_7 = '\0';
    param_4 = param_4 & 0xffffffdf | 0x80;
LAB_00414059:
    local_48 = param_4;
    if ((param_4 & 8) != 0) goto LAB_0041408a;
    local_40 = (code *)&LAB_00413ba0;
    cVar9 = '\x01';
LAB_00413d64:
    local_50 = false;
    local_48 = param_4;
joined_r0x004140af:
    cVar10 = cVar9;
    if (param_7 == '?') {
      uVar6 = FUN_004158c8();
      param_5 = (ulong)(int)uVar6;
      if (param_6 != 0) goto LAB_00413dcd;
      goto LAB_00413e28;
    }
    if (param_7 == '\x0f') {
      iVar3 = FUN_004158b1();
      param_5 = (ulong)iVar3;
    }
    else {
      param_5 = FUN_004157a4();
    }
    uVar6 = (uint)param_5;
    cVar9 = cVar10;
    if (param_6 == 0) goto LAB_00413e28;
LAB_00413db5:
    cVar10 = cVar9;
    if (param_7 != '\x0f') {
      uVar6 = FUN_0040a580();
    }
LAB_00413dcd:
    if (param_6 <= uVar6) goto LAB_00413e28;
    local_54 = (int)param_6 - uVar6;
    if (local_54 == 0) {
      if (cVar10 != '\0') goto LAB_00414107;
      if (param_5 == 0) goto LAB_00413f2a;
      goto LAB_00413e45;
    }
    if (((local_48 & 2) == 0) && (iVar3 = FUN_00413b40(param_1,param_2,local_54), iVar3 == -1)) {
      return -1;
    }
    if (cVar10 != '\0') goto LAB_00414107;
    if (param_5 != 0) goto LAB_00413e45;
  }
  else {
    if ((param_4 & 4) == 0) {
      uVar6 = param_4 & 0x20;
      if ((param_7 != '\x0f') && (param_7 != '?')) goto LAB_00414059;
    }
    else {
      if (param_7 == '?') {
        uVar8 = 0x4c;
      }
      else {
        if (param_7 != '\x0f') {
          iVar3 = (*param_1)();
          if (iVar3 == -1) {
            return -1;
          }
          uVar6 = param_4 & 0x20;
          goto LAB_00414059;
        }
        uVar8 = 0x75;
      }
      iVar3 = (*param_1)(uVar8);
      if (iVar3 == -1) {
        return -1;
      }
      iVar3 = (*param_1)();
      if (iVar3 == -1) {
        return -1;
      }
    }
    uVar6 = param_4 & 0x20;
    local_48 = param_4;
    if ((param_4 & 8) == 0) {
      local_40 = FUN_00413c40;
      cVar9 = '\0';
      goto LAB_00413d64;
    }
LAB_0041408a:
    local_40 = FUN_00413bb0;
    local_50 = uVar6 != 0;
    cVar10 = '\0';
    cVar9 = '\0';
    if ((uVar6 == 0) || (cVar9 = '\0', !(bool)local_50)) goto joined_r0x004140af;
    if (param_6 != 0) {
      uVar6 = (uint)param_5;
      cVar10 = '\0';
      cVar9 = '\0';
      if (param_7 != '?') goto LAB_00413db5;
      goto LAB_00413dcd;
    }
LAB_00413e28:
    if (cVar10 == '\0') {
      if (param_5 == 0) goto LAB_00413f2a;
      local_54 = 0;
LAB_00413e45:
      local_50 = local_50 ^ 1;
      do {
        uVar5 = param_5 - 1;
        if (param_7 == '\x0f') {
          uVar2 = *(ushort *)param_3;
          uVar6 = (uint)uVar2;
          if ((uVar2 == 0) && (local_50 != 0)) break;
          if ((uVar2 & 0xfc00) == 0xd800) {
            if (uVar5 == 0) break;
            uVar5 = param_5 - 2;
            uVar6 = (uVar2 - 0xd800) * 0x400 + 0x2400 + (uint)uVar2;
            puVar4 = (uint *)param_3;
          }
          else {
            puVar4 = (uint *)((long)param_3 + 2);
          }
LAB_00413ef0:
          iVar3 = (*local_40)(param_1,param_2,uVar6);
          if (iVar3 == -1) {
            return -1;
          }
        }
        else {
          if (param_7 == '?') {
            uVar6 = *(uint *)param_3;
            if (((uVar6 != 0) || (local_50 == 0)) &&
               (puVar4 = (uint *)((long)param_3 + 4), uVar6 != 0)) goto LAB_00413ef0;
            break;
          }
          uVar7 = (uint)*param_3;
          puVar4 = (uint *)((long)param_3 + 1);
          uVar6 = uVar7 & 0xff;
          if ((uVar6 == 0) && (local_50 != 0)) break;
          if ((uVar7 & 0x80) == 0) goto LAB_00413ef0;
          if ((uVar7 & 0xc0) != 0x80) {
            if (uVar6 < 0xfc) {
              iVar3 = 0x1f;
              if ((uVar6 ^ 0xff) != 0) {
                for (; (uVar6 ^ 0xff) >> iVar3 == 0; iVar3 = iVar3 + -1) {
                }
              }
              uVar7 = 6 - iVar3;
              uVar6 = uVar6 & ((1 << ((byte)iVar3 & 0x1f)) - 1U | 3);
              if (uVar5 < uVar7) break;
              uVar5 = uVar5 - uVar7;
              if (uVar7 == 0) goto LAB_00413ef0;
            }
            else {
              uVar6 = uVar7 & 3;
              if (uVar5 < 5) break;
              uVar5 = param_5 - 6;
              uVar7 = 5;
            }
            do {
              bVar1 = *(byte *)puVar4;
              puVar4 = (uint *)((long)puVar4 + 1);
              uVar6 = uVar6 << 6 | bVar1 & 0x3f;
            } while (puVar4 != (uint *)((long)param_3 + (ulong)(uVar7 - 1) + 2));
            puVar4 = (uint *)((long)param_3 + (ulong)(uVar7 - 1) + 2);
            goto LAB_00413ef0;
          }
        }
        param_5 = uVar5;
        param_3 = (char *)puVar4;
      } while (uVar5 != 0);
    }
    else {
      local_54 = 0;
LAB_00414107:
      puVar4 = (uint *)(param_5 + (long)param_3);
      while (((uint *)param_3 != puVar4 &&
             ((bVar1 = *param_3, param_3 = (char *)((long)param_3 + 1), bVar1 != 0 ||
              (local_50 == 1))))) {
        iVar3 = (*local_40)(param_1,param_2);
        if (iVar3 == -1) {
          return -1;
        }
      }
    }
    if (local_54 == 0) goto LAB_00413f2a;
  }
  if (((local_48 & 2) != 0) && (iVar3 = FUN_00413b40(param_1,param_2,local_54), iVar3 == -1)) {
    return -1;
  }
LAB_00413f2a:
  if ((local_48 & 0x84) == 4) {
    iVar3 = (*param_1)(param_8,param_2);
    return -(uint)(iVar3 == -1);
  }
  return 0;
}



undefined  [16] FUN_004142f0(byte *param_1,byte **param_2,uint param_3)

{
  undefined auVar1 [16];
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  ulong uVar12;
  bool bVar13;
  
  while( true ) {
    bVar11 = *param_1;
    iVar2 = FUN_004148d0();
    if (iVar2 == 0) break;
    param_1 = param_1 + 1;
  }
  bVar13 = false;
  if (bVar11 == 0x2b) {
LAB_00414337:
    bVar11 = param_1[1];
    param_1 = param_1 + 1;
  }
  else if (bVar11 == 0x2d) {
    bVar13 = true;
    goto LAB_00414337;
  }
  if (param_3 - 2 < 0x23) {
    if (bVar11 == 0x30) {
      bVar11 = param_1[1];
      param_1 = param_1 + 1;
    }
  }
  else {
    param_3 = 10;
    if (bVar11 == 0x30) {
      bVar11 = param_1[1];
      if ((bVar11 & 0xdf) == 0x58) {
        bVar11 = param_1[2];
        param_1 = param_1 + 2;
        param_3 = 0x10;
      }
      else if ((bVar11 & 0xdf) == 0x42) {
        bVar11 = param_1[2];
        param_1 = param_1 + 2;
        param_3 = 2;
      }
      else {
        param_1 = param_1 + 1;
        param_3 = 8;
      }
    }
  }
  bVar11 = (&DAT_0041c380)[bVar11];
  if ((param_3 < bVar11) || (bVar11 == 0)) {
    uVar10 = 0;
    uVar12 = 0;
LAB_0041444a:
    if (param_2 != (byte **)0x0) goto LAB_00414451;
  }
  else {
    uVar9 = (ulong)(int)param_3;
    uVar7 = bVar11 - 1;
    uVar10 = 0;
    uVar12 = 0;
    do {
      do {
        pbVar8 = param_1;
        lVar5 = ((long)uVar9 >> 0x3f) * uVar10;
        param_1 = pbVar8 + 1;
        auVar1 = ZEXT816(uVar10);
        uVar6 = SUB168(auVar1 * ZEXT816(uVar9),0);
        uVar10 = uVar6 + uVar7;
        uVar4 = (uint)(byte)(&DAT_0041c380)[pbVar8[1]];
        uVar12 = SUB168(auVar1 * ZEXT816(uVar9) >> 0x40,0) + uVar12 * uVar9 + lVar5 +
                 (ulong)CARRY8(uVar6,(ulong)uVar7);
        if ((uVar4 == 0) || (param_3 < uVar4)) goto LAB_0041444a;
        uVar7 = uVar4 - 1;
      } while ((uVar4 == 1) || ((uVar10 | uVar12) == 0));
      iVar2 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar3 = FUN_004153f4(uVar10,uVar12);
    } while ((uint)(iVar2 + iVar3) < 0x7f);
    if (bVar13) {
      if ((iVar2 + iVar3 == 0x7f) &&
         (uVar6 = SUB168(ZEXT816(uVar10) * ZEXT816(uVar9),0),
         (SUB168(ZEXT816(uVar10) * ZEXT816(uVar9) >> 0x40,0) +
          uVar12 * uVar9 + ((long)uVar9 >> 0x3f) * uVar10 + (ulong)CARRY8(uVar6,(ulong)uVar7) ^
          0x8000000000000000 | uVar6 + uVar7) == 0)) {
        param_1 = pbVar8 + 2;
      }
      uVar12 = 0x8000000000000000;
      uVar10 = 0;
    }
    else {
      uVar10 = 0xffffffffffffffff;
      uVar12 = 0x7fffffffffffffff;
    }
    if (param_2 == (byte **)0x0) goto LAB_0041446e;
LAB_00414451:
    *param_2 = param_1;
  }
  if (bVar13) {
    bVar13 = uVar10 != 0;
    uVar10 = -uVar10;
    uVar12 = -(uVar12 + bVar13);
  }
LAB_0041446e:
  return CONCAT88(uVar12,uVar10);
}



ulong FUN_004145a0(void)

{
  ulong uVar1;
  long lVar2;
  undefined auVar3 [16];
  
  auVar3 = FUN_004142f0();
  lVar2 = SUB168(auVar3 >> 0x40,0);
  uVar1 = SUB168(auVar3,0);
  if ((SBORROW8(lVar2,-1) != SBORROW8(lVar2 + 1,(ulong)(uVar1 < 0x8000000000000000))) ==
      (long)((lVar2 + 1) - (ulong)(uVar1 < 0x8000000000000000)) < 0) {
    if ((SBORROW8(-lVar2,(ulong)(0x7fffffffffffffff < uVar1)) != false) !=
        (long)(-lVar2 - (ulong)(0x7fffffffffffffff < uVar1)) < 0) {
      uVar1 = 0x7fffffffffffffff;
    }
    return uVar1;
  }
  return 0x8000000000000000;
}



ulong FUN_00414600(long param_1,long param_2)

{
  ulong uVar1;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_28 = param_1;
  local_18 = param_2;
  FUN_00413260(&LAB_004145e0,&local_28);
  if (local_18 != 0) {
    uVar1 = local_18 - 1U;
    if (local_20 <= local_18 - 1U) {
      uVar1 = local_20;
    }
    *(undefined *)(local_28 + uVar1) = 0;
  }
  return local_20 & 0xffffffff;
}



// WARNING: Could not reconcile some variable overlaps

undefined  [16] FUN_00414650(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong *param_5)

{
  long lVar1;
  undefined auVar2 [16];
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  undefined8 local_28;
  
  if (param_2 < param_4 || param_2 - param_4 < (ulong)(param_1 < param_3)) {
    if (param_5 != (ulong *)0x0) {
      *param_5 = param_1;
      param_5[1] = param_2;
      return ZEXT816(0);
    }
    return ZEXT816(0);
  }
  if (param_4 != 0) {
    lVar7 = 0x3f;
    if (param_4 != 0) {
      for (; param_4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    lVar1 = 0x3f;
    if (param_2 != 0) {
      for (; param_2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar6 = ((uint)lVar7 ^ 0x3f) - ((uint)lVar1 ^ 0x3f);
    bVar3 = (byte)uVar6 & 0x3f;
    uVar9 = param_3 << ((byte)uVar6 & 0x3f);
    uVar10 = uVar9;
    uVar11 = param_4 << bVar3 | param_3 >> 0x40 - bVar3;
    if ((uVar6 & 0x40) != 0) {
      uVar10 = 0;
      uVar11 = uVar9;
    }
    uVar9 = 0;
    if (-1 < (int)uVar6) {
      uVar9 = 0;
      do {
        lVar7 = (((uVar11 - 1) + (ulong)(uVar10 != 0)) - param_2) - (ulong)(uVar10 - 1 < param_1);
        uVar8 = lVar7 >> 0x3f;
        uVar9 = uVar9 * 2 | (ulong)((uint)(lVar7 >> 0x3f) & 1);
        uVar4 = uVar8 & uVar10;
        bVar12 = param_1 < uVar4;
        param_1 = param_1 - uVar4;
        param_2 = (param_2 - (uVar8 & uVar11)) - (ulong)bVar12;
        uVar6 = uVar6 - 1;
        uVar10 = uVar10 >> 1 | uVar11 << 0x3f;
        uVar11 = uVar11 >> 1;
      } while (uVar6 != 0xffffffff);
    }
    if (param_5 != (ulong *)0x0) {
      *param_5 = param_1;
      param_5[1] = param_2;
    }
    return ZEXT816(uVar9);
  }
  if (param_2 < param_3) {
    uVar11 = 0;
    uVar5 = SUB168(CONCAT88(param_2,param_1) / ZEXT816(param_3),0);
    local_28 = SUB168(CONCAT88(param_2,param_1) % ZEXT816(param_3),0);
  }
  else {
    uVar11 = param_2 / param_3;
    auVar2 = ZEXT816(param_2) % ZEXT816(param_3) << 0x40 | ZEXT816(param_1);
    uVar5 = SUB168(auVar2 / ZEXT816(param_3),0);
    local_28 = SUB168(auVar2 % ZEXT816(param_3),0);
  }
  if (param_5 != (ulong *)0x0) {
    *(undefined4 *)param_5 = (undefined4)local_28;
    *(undefined4 *)((long)param_5 + 4) = local_28._4_4_;
    *(undefined4 *)(param_5 + 1) = 0;
    *(undefined4 *)((long)param_5 + 0xc) = 0;
  }
  return CONCAT88(uVar11,uVar5);
}



void FUN_00414795(void)

{
  float10 fVar1;
  float10 fVar2;
  float10 in_stack_00000008;
  
  fVar1 = ROUND((float10)3.321928094887362 * in_stack_00000008);
  fVar2 = (float10)f2xm1((float10)3.321928094887362 * in_stack_00000008 - fVar1);
  fscale((float10)1 + fVar2,fVar1);
  return;
}



int FUN_004147b4(void)

{
  float10 in_stack_00000008;
  
  return (int)in_stack_00000008;
}



ulong FUN_00414845(uint param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = (ulong)param_1;
  uVar3 = 0;
  if (0x7f < param_1) {
    uVar5 = 0x1f;
    if (param_1 != 0) {
      for (; param_1 >> uVar5 == 0; uVar5 = uVar5 - 1) {
      }
    }
    uVar5 = *(uint *)(&DAT_004189d2 + (ulong)uVar5 * 2);
    uVar7 = uVar6;
    do {
      uVar6 = uVar7 >> 6;
      uVar2 = uVar3 | ((byte)uVar7 & 0x3f | 0x80);
      uVar3 = uVar2 << 8;
      bVar4 = (char)uVar5 - 1;
      uVar1 = uVar5 & 0xffffff00;
      uVar5 = uVar1 | bVar4;
      uVar7 = uVar6;
    } while (bVar4 != 0);
    uVar3 = CONCAT71((int7)uVar2,(char)(uVar1 >> 8));
  }
  return uVar3 | uVar6;
}



ulong FUN_00414880(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong in_R10;
  
  uVar2 = FUN_0041571a();
  uVar3 = FUN_0041571a(param_2);
  if (uVar3 <= uVar2) {
    iVar1 = FUN_00414960(param_1 + (uVar2 - uVar3));
    return in_R10 & 0xffffff00 | (ulong)(iVar1 == 0);
  }
  return 0;
}



bool FUN_004148d0(int param_1)

{
  return param_1 - 9U < 5 || param_1 == 0x20;
}



long FUN_004148f0(long param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_RDX;
  
  lVar1 = FUN_00415783(param_2,param_3,param_4);
  if (lVar1 != 0) {
    FUN_004154c0(param_1,param_2,(lVar1 - param_2) + 1);
    return param_1 + extraout_RDX;
  }
  lVar1 = FUN_004154c0(param_1,param_2,param_4);
  return lVar1;
}



int FUN_00414960(long param_1,long param_2,ulong param_3)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined auVar7 [16];
  
  if (param_3 != 0) {
    uVar5 = 0;
    while (uVar6 = uVar5, uVar5 = uVar6 + 0x10, uVar5 <= param_3) {
      pcVar1 = (char *)(param_1 + -0x10 + uVar5);
      pcVar2 = (char *)(param_2 + -0x10 + uVar5);
      auVar7 = CONCAT115(-(pcVar1[0xf] == pcVar2[0xf]),
                         CONCAT114(-(pcVar1[0xe] == pcVar2[0xe]),
                                   CONCAT113(-(pcVar1[0xd] == pcVar2[0xd]),
                                             CONCAT112(-(pcVar1[0xc] == pcVar2[0xc]),
                                                       CONCAT111(-(pcVar1[0xb] == pcVar2[0xb]),
                                                                 CONCAT110(-(pcVar1[10] ==
                                                                            pcVar2[10]),
                                                                           CONCAT19(-(pcVar1[9] ==
                                                                                     pcVar2[9]),
                                                                                    CONCAT18(-(
                                                  pcVar1[8] == pcVar2[8]),
                                                  CONCAT17(-(pcVar1[7] == pcVar2[7]),
                                                           CONCAT16(-(pcVar1[6] == pcVar2[6]),
                                                                    CONCAT15(-(pcVar1[5] ==
                                                                              pcVar2[5]),
                                                                             CONCAT14(-(pcVar1[4] ==
                                                                                       pcVar2[4]),
                                                                                      CONCAT13(-(
                                                  pcVar1[3] == pcVar2[3]),
                                                  CONCAT12(-(pcVar1[2] == pcVar2[2]),
                                                           CONCAT11(-(pcVar1[1] == pcVar2[1]),
                                                                    -(*pcVar1 == *pcVar2))))))))))))
                                                  ))));
      uVar3 = (ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                      (ushort)((byte)-(pcVar1[0xf] == pcVar2[0xf]) >> 7) << 0xf) - 0xffff;
      if (uVar3 != 0) {
        iVar4 = 0;
        for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          iVar4 = iVar4 + 1;
        }
        return (uint)*(byte *)(param_1 + (long)iVar4 + uVar6) -
               (uint)*(byte *)(param_2 + (long)iVar4 + uVar6);
      }
    }
    if (uVar6 < param_3) {
      do {
        iVar4 = (uint)*(byte *)(param_1 + uVar6) - (uint)*(byte *)(param_2 + uVar6);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar6 = uVar6 + 1;
      } while (param_3 != uVar6);
      return iVar4;
    }
  }
  return 0;
}



undefined  [16] FUN_004149f0(ushort *param_1,ulong param_2,ulong param_3,char param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return ZEXT816(param_3) << 0x40;
  }
  uVar2 = (uint)param_3;
  if ((uVar2 < 0x20) && (param_4 != '\0')) {
    if (1 < param_2) {
      uVar1 = 2;
      *param_1 = 0xd800;
      param_1[1] = (ushort)param_3 | 0xdc00;
      goto LAB_00414a18;
    }
  }
  else if ((0x1fff < uVar2 - 0xe000) && (0xd7ff < uVar2)) {
    uVar2 = uVar2 - 0x10000;
    if ((1 < param_2) && (uVar2 < 0x100000)) {
      param_1[1] = ((ushort)uVar2 & 0x3ff) + 0xdc00;
      *param_1 = (short)(uVar2 >> 10) + 0xd800;
      return CONCAT88(param_3,2);
    }
    *param_1 = 0xfffd;
    uVar1 = 0xffffffff;
    goto LAB_00414a18;
  }
  *param_1 = (ushort)param_3;
  uVar1 = 1;
LAB_00414a18:
  return CONCAT88(param_3,uVar1);
}



char * FUN_00414ab0(long param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  ulong uVar16;
  char *pcVar17;
  char *pcVar18;
  undefined auVar19 [16];
  byte bVar20;
  
  uVar16 = (ulong)((uint)param_2 & 0xf);
  pcVar17 = param_2;
  if (((ulong)param_2 & 0xf) != 0) {
    uVar16 = 0;
    do {
      cVar1 = param_2[uVar16];
      *(char *)(param_1 + uVar16) = cVar1;
      if (cVar1 == '\0') {
        return (char *)(param_1 + uVar16);
      }
      uVar16 = uVar16 + 1;
      pcVar17 = param_2 + uVar16;
    } while (((ulong)pcVar17 & 0xf) != 0);
  }
  while( true ) {
    pcVar18 = param_2 + uVar16;
    cVar1 = pcVar18[1];
    cVar2 = pcVar18[2];
    cVar3 = pcVar18[3];
    cVar4 = pcVar18[4];
    cVar5 = pcVar18[5];
    cVar6 = pcVar18[6];
    cVar7 = pcVar18[7];
    cVar8 = pcVar18[8];
    cVar9 = pcVar18[9];
    cVar10 = pcVar18[10];
    cVar11 = pcVar18[0xb];
    cVar12 = pcVar18[0xc];
    cVar13 = pcVar18[0xd];
    cVar14 = pcVar18[0xe];
    cVar15 = pcVar18[0xf];
    bVar20 = -(cVar15 == '\0');
    auVar19 = CONCAT115(bVar20,CONCAT114(-(cVar14 == '\0'),
                                         CONCAT113(-(cVar13 == '\0'),
                                                   CONCAT112(-(cVar12 == '\0'),
                                                             CONCAT111(-(cVar11 == '\0'),
                                                                       CONCAT110(-(cVar10 == '\0'),
                                                                                 CONCAT19(-(cVar9 ==
                                                                                           '\0'),
                                                  CONCAT18(-(cVar8 == '\0'),
                                                           CONCAT17(-(cVar7 == '\0'),
                                                                    CONCAT16(-(cVar6 == '\0'),
                                                                             CONCAT15(-(cVar5 == 
                                                  '\0'),CONCAT14(-(cVar4 == '\0'),
                                                                 CONCAT13(-(cVar3 == '\0'),
                                                                          CONCAT12(-(cVar2 == '\0'),
                                                                                   CONCAT11(-(cVar1 
                                                  == '\0'),-(*pcVar18 == '\0'))))))))))))))));
    if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(bVar20 >> 7) << 0xf) != 0
       ) break;
    pcVar17 = (char *)(param_1 + uVar16);
    *pcVar17 = *pcVar18;
    pcVar17[1] = cVar1;
    pcVar17[2] = cVar2;
    pcVar17[3] = cVar3;
    pcVar17[4] = cVar4;
    pcVar17[5] = cVar5;
    pcVar17[6] = cVar6;
    pcVar17[7] = cVar7;
    pcVar17[8] = cVar8;
    pcVar17[9] = cVar9;
    pcVar17[10] = cVar10;
    pcVar17[0xb] = cVar11;
    pcVar17[0xc] = cVar12;
    pcVar17[0xd] = cVar13;
    pcVar17[0xe] = cVar14;
    pcVar17[0xf] = cVar15;
    uVar16 = uVar16 + 0x10;
    pcVar17 = param_2 + uVar16;
  }
  cVar1 = *pcVar17;
  *(char *)(param_1 + uVar16) = cVar1;
  if (cVar1 == '\0') {
    return (char *)(param_1 + uVar16);
  }
  param_2 = param_2 + uVar16 + 1;
  pcVar17 = (char *)(param_1 + uVar16 + 1);
  do {
    pcVar18 = pcVar17;
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar18 = cVar1;
    pcVar17 = pcVar18 + 1;
  } while (cVar1 != '\0');
  return pcVar18;
}



int FUN_00414b60(byte *param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  
  if (param_1 == param_2) {
    return 0;
  }
  bVar3 = *param_1;
  bVar1 = *param_2;
  uVar4 = (uint)bVar1;
  lVar2 = 0;
  if (bVar3 == bVar1) {
    do {
      if (bVar1 == 0) {
        uVar4 = 0;
        break;
      }
      lVar2 = lVar2 + 1;
      bVar3 = param_1[lVar2];
      bVar1 = param_2[lVar2];
      uVar4 = (uint)bVar1;
    } while (bVar3 == bVar1);
  }
  return bVar3 - uVar4;
}



long FUN_00414ba0(char *param_1,char *param_2)

{
  char cVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  
  cVar3 = *param_1;
  if (cVar3 == '\0') {
    return 0;
  }
  lVar4 = 0;
  do {
    uVar2 = 0;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      if (cVar3 == cVar1) {
        return lVar4;
      }
      uVar2 = (ulong)((int)uVar2 + 1);
      cVar1 = param_2[uVar2];
    }
    lVar4 = lVar4 + 1;
    cVar3 = param_1[lVar4];
  } while (cVar3 != '\0');
  return lVar4;
}



int FUN_00414c00(byte *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  
  if ((param_1 == param_2) || (param_3 == 0)) {
    return 0;
  }
  bVar4 = *param_1;
  bVar1 = *param_2;
  uVar3 = (uint)bVar1;
  lVar2 = 0;
  if (bVar4 == bVar1) {
    do {
      uVar3 = (uint)bVar1;
      if (bVar1 == 0) {
        uVar3 = 0;
        break;
      }
      if (lVar2 == param_3 + -1) break;
      lVar2 = lVar2 + 1;
      bVar4 = param_1[lVar2];
      bVar1 = param_2[lVar2];
      uVar3 = (uint)bVar1;
    } while (bVar4 == bVar1);
  }
  return bVar4 - uVar3;
}



char * FUN_00414c50(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  ulong uVar4;
  char *pcVar5;
  
  cVar1 = *param_2;
  if (cVar1 != '\0') {
    if (param_2[1] == '\0') {
      pcVar5 = (char *)FUN_0041576b(param_1,(int)cVar1);
      return pcVar5;
    }
    cVar2 = *param_1;
    while (cVar2 != '\0') {
      uVar4 = 0;
      cVar3 = cVar1;
      do {
        if (cVar2 == cVar3) {
          return param_1;
        }
        uVar4 = (ulong)((int)uVar4 + 1);
        cVar3 = param_2[uVar4];
      } while (cVar3 != '\0');
      pcVar5 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar2 = *pcVar5;
    }
  }
  return (char *)0x0;
}



long FUN_00414cb0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = FUN_00414ba0(lVar1);
    lVar3 = 0;
    if (*(char *)(lVar1 + lVar2) != '\0') {
      *(char *)(lVar1 + lVar2) = '\0';
      lVar3 = lVar1 + 1 + lVar2;
    }
    *param_1 = lVar3;
  }
  return lVar1;
}



char * FUN_00414cf0(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    return param_1;
  }
  if (param_2[1] != '\0') {
    do {
      lVar4 = 0;
      cVar2 = cVar1;
      while ((param_1[lVar4] != '\0' && (param_1[lVar4] == cVar2))) {
        lVar4 = lVar4 + 1;
        cVar2 = param_2[lVar4];
        if (cVar2 == '\0') {
          return param_1;
        }
      }
      cVar2 = *param_1;
      param_1 = param_1 + 1;
    } while (cVar2 != '\0');
    return (char *)0x0;
  }
  pcVar3 = (char *)FUN_0041576b(param_1,(int)cVar1);
  return pcVar3;
}



undefined  [16] FUN_00414d40(byte *param_1,uint *param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  bVar2 = *param_1;
  uVar7 = (uint)bVar2;
  uVar3 = 1;
  if ((bVar2 & 0xc0) == 0x80) {
    do {
      uVar6 = (ulong)((int)uVar3 + 1);
      pbVar1 = param_1 + uVar3;
      uVar3 = uVar6;
    } while ((*pbVar1 & 0xc0) == 0x80);
    uVar7 = (uint)*pbVar1;
    if (uVar7 < 0x80) goto LAB_00414d69;
  }
  else {
    uVar6 = 1;
    if (bVar2 < 0x80) goto LAB_00414d69;
  }
  if (uVar7 < 0xfc) {
    iVar4 = 0x1f;
    if ((uVar7 ^ 0xff) != 0) {
      for (; (uVar7 ^ 0xff) >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    uVar8 = 7 - iVar4;
    uVar7 = uVar7 & ((1 << ((byte)iVar4 & 0x1f)) - 1U | 3);
    if (uVar8 < 2) goto LAB_00414d69;
  }
  else {
    uVar7 = uVar7 & 3;
    uVar8 = 6;
  }
  iVar4 = (int)uVar6;
  uVar3 = uVar6;
  do {
    uVar5 = (int)uVar3 + 1;
    uVar6 = (ulong)uVar5;
    if ((param_1[uVar3] & 0xc0) != 0x80) {
      uVar6 = 0xffffffff;
      if (param_2 != (uint *)0x0) {
        *param_2 = 0xfffd;
      }
      goto LAB_00414d72;
    }
    uVar7 = uVar7 << 6 | param_1[uVar3] & 0x3f;
    uVar3 = uVar6;
  } while ((1 - iVar4) + uVar5 < uVar8);
LAB_00414d69:
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar7;
  }
LAB_00414d72:
  return CONCAT88(param_3,uVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined  [16] FUN_00414e40(long param_1,ulong param_2,undefined (*param_3) [16])

{
  long lVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined (*pauVar8) [16];
  ulong uVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  undefined auVar19 [16];
  
  uVar4 = 0;
  lVar6 = 0;
  pauVar8 = param_3;
  auVar19 = _DAT_00418a20;
  if (((ulong)param_3 & 0xf) == 0) goto LAB_00414ee0;
LAB_00414e70:
  uVar2 = *(ushort *)*param_3;
  lVar1 = lVar6 + 1;
  lVar5 = lVar6;
  do {
    lVar6 = lVar1;
    if (uVar2 == 0) {
joined_r0x00414f76:
      if (uVar4 < param_2) {
        *(undefined *)(param_1 + uVar4) = 0;
      }
      return CONCAT88(lVar6,uVar4);
    }
    uVar7 = (uint)uVar2;
                    // WARNING: Read-only address (ram,0x00418a20) is written
    if ((uVar2 & 0xfc00) != 0xdc00) {
      if ((uVar2 & 0xfc00) == 0xd800) {
        lVar1 = lVar6 * 2;
        lVar6 = lVar5 + 2;
        if (*(ushort *)(*pauVar8 + lVar1) == 0) goto joined_r0x00414f76;
        uVar7 = *(ushort *)(*pauVar8 + lVar1) + 0xfca02400 + (uint)uVar2 * 0x400;
      }
      uVar3 = (ulong)(int)uVar7;
      if (0x7f < uVar7) {
        uVar3 = FUN_00414845();
      }
      while ((uVar3 != 0 && (uVar9 = uVar4 + 1, uVar9 < param_2))) {
        *(char *)(param_1 + -1 + uVar9) = (char)uVar3;
        uVar3 = uVar3 >> 8;
        uVar4 = uVar9;
      }
    }
    param_3 = (undefined (*) [16])(*pauVar8 + lVar6 * 2);
    if (((ulong)param_3 & 0xf) != 0) goto LAB_00414e70;
LAB_00414ee0:
    lVar5 = lVar6;
    uVar3 = uVar4 + 8;
    if (param_2 <= uVar4 + 8) goto LAB_00414e70;
    do {
      uVar9 = uVar3;
      lVar6 = lVar5;
      auVar11 = *param_3;
      sVar12 = SUB162(auVar11 >> 0x10,0);
      sVar13 = SUB162(auVar11 >> 0x20,0);
      sVar14 = SUB162(auVar11 >> 0x30,0);
      sVar15 = SUB162(auVar11 >> 0x40,0);
      sVar16 = SUB162(auVar11 >> 0x50,0);
      sVar17 = SUB162(auVar11 >> 0x60,0);
      sVar18 = SUB162(auVar11 >> 0x70,0);
      auVar10 = ~CONCAT214(-(ushort)(SUB162(auVar19 >> 0x70,0) < sVar18),
                           CONCAT212(-(ushort)(SUB162(auVar19 >> 0x60,0) < sVar17),
                                     CONCAT210(-(ushort)(SUB162(auVar19 >> 0x50,0) < sVar16),
                                               CONCAT28(-(ushort)(SUB162(auVar19 >> 0x40,0) < sVar15
                                                                 ),
                                                        CONCAT26(-(ushort)(SUB162(auVar19 >> 0x30,0)
                                                                          < sVar14),
                                                                 CONCAT24(-(ushort)(SUB162(auVar19 
                                                  >> 0x20,0) < sVar13),
                                                  CONCAT22(-(ushort)(SUB162(auVar19 >> 0x10,0) <
                                                                    sVar12),
                                                           -(ushort)(SUB162(auVar19,0) <
                                                                    SUB162(auVar11,0))))))))) &
                CONCAT214(-(ushort)(0 < sVar18),
                          CONCAT212(-(ushort)(0 < sVar17),
                                    CONCAT210(-(ushort)(0 < sVar16),
                                              CONCAT28(-(ushort)(0 < sVar15),
                                                       CONCAT26(-(ushort)(0 < sVar14),
                                                                CONCAT24(-(ushort)(0 < sVar13),
                                                                         CONCAT22(-(ushort)(0 < 
                                                  sVar12),-(ushort)(0 < SUB162(auVar11,0)))))))));
      if ((ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                  (ushort)SUB161(auVar10 >> 0x7f,0) << 0xf) != 0xffff) goto LAB_00414e70;
      uVar3 = uVar9 + 8;
      param_3 = param_3[1];
      lVar5 = lVar6 + 8;
      auVar11 = packsswb(auVar11,auVar11);
      *(long *)(param_1 + uVar4) = SUB168(auVar11,0);
      uVar4 = uVar4 + 8;
    } while (uVar3 < param_2);
    uVar2 = *(ushort *)(pauVar8[1] + lVar6 * 2);
    lVar1 = lVar6 + 9;
    uVar4 = uVar9;
  } while( true );
}



void FUN_00414fc0(long param_1,ulong param_2,long param_3)

{
  undefined auVar1 [16];
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  undefined auVar13 [16];
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  byte bVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  byte bVar25;
  char cVar26;
  
  uVar12 = 0;
  lVar6 = 0;
  do {
    do {
      lVar7 = lVar6;
      pcVar5 = (char *)(param_3 + lVar7);
      if ((((ulong)pcVar5 & 0xf) == 0) && (uVar4 = uVar12 + 0x10, uVar12 + 0x10 < param_2)) {
        while( true ) {
          auVar1 = *(undefined (*) [16])(param_3 + lVar7);
          cVar14 = SUB161(auVar1 >> 0x20,0);
          cVar15 = SUB161(auVar1 >> 0x28,0);
          cVar16 = SUB161(auVar1 >> 0x30,0);
          cVar17 = SUB161(auVar1 >> 0x38,0);
          bVar18 = SUB161(auVar1 >> 0x40,0);
          cVar19 = SUB161(auVar1 >> 0x48,0);
          cVar20 = SUB161(auVar1 >> 0x50,0);
          cVar21 = SUB161(auVar1 >> 0x58,0);
          cVar22 = SUB161(auVar1 >> 0x60,0);
          cVar23 = SUB161(auVar1 >> 0x68,0);
          cVar24 = SUB161(auVar1 >> 0x70,0);
          cVar26 = SUB161(auVar1 >> 0x78,0);
          bVar25 = -('\0' < cVar26);
          auVar13 = CONCAT115(bVar25,CONCAT114(-('\0' < cVar24),
                                               CONCAT113(-('\0' < cVar23),
                                                         CONCAT112(-('\0' < cVar22),
                                                                   CONCAT111(-('\0' < cVar21),
                                                                             CONCAT110(-('\0' < 
                                                  cVar20),CONCAT19(-('\0' < cVar19),
                                                                   CONCAT18(-('\0' < (char)bVar18),
                                                                            CONCAT17(-('\0' < cVar17
                                                                                      ),CONCAT16(-(
                                                  '\0' < cVar16),
                                                  CONCAT15(-('\0' < cVar15),
                                                           CONCAT14(-('\0' < cVar14),
                                                                    CONCAT13(-('\0' < SUB161(auVar1 
                                                  >> 0x18,0)),
                                                  CONCAT12(-('\0' < SUB161(auVar1 >> 0x10,0)),
                                                           CONCAT11(-('\0' < SUB161(auVar1 >> 8,0)),
                                                                    -('\0' < SUB161(auVar1,0))))))))
                                                  )))))))));
          if ((ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe | (ushort)(bVar25 >> 7) << 0xf
                      ) != 0xffff) break;
          lVar7 = lVar7 + 0x10;
          *(undefined (*) [16])(param_1 + uVar12 * 2) =
               CONCAT142(SUB1614(CONCAT133(SUB1613(CONCAT124(SUB1612(CONCAT115(SUB1611(CONCAT106(
                                                  SUB1610(CONCAT97((unkuint9)
                                                                   SUB158(CONCAT78(SUB157(CONCAT69(
                                                  SUB156(CONCAT510(SUB155(CONCAT411(SUB154(CONCAT312
                                                  (SUB153(CONCAT213(SUB152(CONCAT114(cVar17,SUB1614(
                                                  auVar1,0)) >> 0x68,0),
                                                  CONCAT112(cVar16,SUB1612(auVar1,0))) >> 0x60,0),
                                                  SUB1612(auVar1,0)) >> 0x58,0),
                                                  CONCAT110(cVar15,SUB1610(auVar1,0))) >> 0x50,0),
                                                  SUB1610(auVar1,0)) >> 0x48,0),
                                                  CONCAT18(cVar14,SUB168(auVar1,0))) >> 0x40,0),
                                                  SUB168(auVar1,0)) >> 0x38,0) &
                                                  SUB169((undefined  [16])0xffffffffffffffff >> 0x38
                                                         ,0) &
                                                  SUB169((undefined  [16])0xffffffffffffffff >> 0x38
                                                         ,0) &
                                                  SUB169((undefined  [16])0xffffffffffffffff >> 0x38
                                                         ,0) &
                                                  SUB169((undefined  [16])0xffffffffffffffff >> 0x38
                                                         ,0),(SUB167(auVar1,0) >> 0x18) << 0x30) >>
                                                  0x30,0),SUB166(auVar1,0)) >> 0x28,0) &
                                                  SUB1611((undefined  [16])0xffff00ffffffffff >>
                                                          0x28,0),(SUB165(auVar1,0) >> 0x10) << 0x20
                                                  ) >> 0x20,0),SUB164(auVar1,0)) >> 0x18,0) &
                                           SUB1613((undefined  [16])0xffffffff00ffffff >> 0x18,0),
                                           (SUB163(auVar1,0) >> 8) << 0x10) >> 0x10,0),
                         SUB162(auVar1,0)) & (undefined  [16])0xffffffffffff00ff;
          uVar12 = uVar12 + 0x10;
          *(undefined (*) [16])(param_1 + -0x10 + uVar4 * 2) =
               ZEXT1516(CONCAT114(cVar26,ZEXT1314(CONCAT112(cVar24,ZEXT1112(CONCAT110(cVar23,(
                                                  unkuint10)
                                                  CONCAT18(cVar22,(ulong)CONCAT16(cVar21,(uint6)
                                                  CONCAT14(cVar20,(uint)CONCAT12(cVar19,(ushort)
                                                  bVar18))))))))));
          if (param_2 <= uVar4 + 0x10) {
            pcVar5 = (char *)(param_3 + lVar7);
            uVar12 = uVar4;
            break;
          }
          pcVar5 = (char *)(param_3 + lVar7);
          uVar4 = uVar4 + 0x10;
        }
      }
      uVar9 = (uint)*pcVar5;
      lVar6 = lVar7 + 1;
    } while ((uVar9 & 0xc0) == 0x80);
    uVar8 = uVar9 & 0xff;
    if ((uVar9 & 0x80) == 0) {
LAB_0041502a:
      if (uVar8 == 0) goto LAB_0041513f;
LAB_00415033:
      uVar4 = (ulong)uVar8;
    }
    else {
      if (uVar8 < 0xfc) {
        iVar11 = 0x1f;
        if ((uVar8 ^ 0xff) != 0) {
          for (; (uVar8 ^ 0xff) >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        uVar8 = uVar8 & ((1 << ((byte)iVar11 & 0x1f)) - 1U | 3);
        iVar11 = 6 - iVar11;
        if (iVar11 == 0) goto LAB_0041502a;
      }
      else {
        iVar11 = 5;
        uVar8 = uVar9 & 3;
      }
      lVar2 = lVar7 + 2;
      do {
        lVar6 = lVar2;
        bVar18 = *(byte *)(param_3 + -1 + lVar6);
        if (bVar18 == 0) goto LAB_0041513f;
        uVar10 = bVar18 & 0x3f;
        uVar9 = uVar8 << 6;
        uVar8 = uVar10 | uVar9;
        lVar2 = lVar6 + 1;
      } while (lVar7 + 3 + (ulong)(iVar11 - 1) != lVar6 + 1);
      if (uVar8 == 0) {
LAB_0041513f:
        if (uVar12 < param_2) {
          *(undefined2 *)(param_1 + uVar12 * 2) = 0;
        }
        return;
      }
      if (uVar8 < 0x10000) goto LAB_00415033;
      uVar4 = 0xfffd;
      if (uVar8 - 0x10000 < 0x100000) {
        uVar4 = (ulong)(((uVar10 | uVar9 & 0x3ff) + 0xdc00) * 0x10000 |
                       (uVar8 - 0x10000 >> 10) + 0xd800);
      }
    }
    do {
      uVar3 = uVar12 + 1;
      if (param_2 <= uVar3) break;
      *(short *)(param_1 + -2 + uVar3 * 2) = (short)uVar4;
      uVar4 = uVar4 >> 0x10;
      uVar12 = uVar3;
    } while (uVar4 != 0);
  } while( true );
}



void FUN_00415200(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_38 [7];
  undefined4 uStack28;
  undefined local_18 [16];
  
  if (0x1f < param_4) {
    param_4 = 0x20;
  }
  local_18 = (undefined  [16])0x0;
  local_38[0] = *param_3;
  local_38[1] = param_3[1];
  local_38[2] = param_3[2];
  local_38[3] = param_3[3];
  local_38[4] = *param_2;
  local_38[5] = param_2[1];
  local_38[6] = param_2[2];
  uStack28 = param_2[3];
  uVar1 = *(undefined4 *)((long)local_38 + param_4 + 4);
  uVar2 = *(undefined4 *)((long)local_38 + param_4 + 8);
  uVar3 = *(undefined4 *)((long)local_38 + param_4 + 0xc);
  *param_1 = *(undefined4 *)((long)local_38 + param_4);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}



void FUN_00415240(undefined2 *param_1,byte *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_3[1] * (uint)param_2[1] + (uint)*param_2 * (int)*param_3;
  iVar2 = 0x7fff;
  if ((iVar1 < 0x8000) && (iVar2 = -0x8000, -0x8001 < iVar1)) {
    iVar2 = iVar1;
  }
  *param_1 = (short)iVar2;
  iVar1 = (int)param_3[3] * (uint)param_2[3] + (int)param_3[2] * (uint)param_2[2];
  iVar2 = 0x7fff;
  if ((iVar1 < 0x8000) && (iVar2 = -0x8000, -0x8001 < iVar1)) {
    iVar2 = iVar1;
  }
  param_1[1] = (short)iVar2;
  iVar1 = (int)param_3[5] * (uint)param_2[5] + (uint)param_2[4] * (int)param_3[4];
  iVar2 = 0x7fff;
  if ((iVar1 < 0x8000) && (iVar2 = -0x8000, -0x8001 < iVar1)) {
    iVar2 = iVar1;
  }
  param_1[2] = (short)iVar2;
  iVar1 = (int)param_3[7] * (uint)param_2[7] + (uint)param_2[6] * (int)param_3[6];
  iVar2 = 0x7fff;
  if ((iVar1 < 0x8000) && (iVar2 = -0x8000, -0x8001 < iVar1)) {
    iVar2 = iVar1;
  }
  param_1[3] = (short)iVar2;
  iVar1 = (int)param_3[9] * (uint)param_2[9] + (uint)param_2[8] * (int)param_3[8];
  iVar2 = 0x7fff;
  if ((iVar1 < 0x8000) && (iVar2 = -0x8000, -0x8001 < iVar1)) {
    iVar2 = iVar1;
  }
  param_1[4] = (short)iVar2;
  iVar1 = (int)param_3[0xb] * (uint)param_2[0xb] + (uint)param_2[10] * (int)param_3[10];
  iVar2 = 0x7fff;
  if ((iVar1 < 0x8000) && (iVar2 = -0x8000, -0x8001 < iVar1)) {
    iVar2 = iVar1;
  }
  param_1[5] = (short)iVar2;
  iVar1 = (int)param_3[0xd] * (uint)param_2[0xd] + (uint)param_2[0xc] * (int)param_3[0xc];
  iVar2 = 0x7fff;
  if ((iVar1 < 0x8000) && (iVar2 = -0x8000, -0x8001 < iVar1)) {
    iVar2 = iVar1;
  }
  param_1[6] = (short)iVar2;
  iVar1 = (uint)param_2[0xe] * (int)param_3[0xe] + (int)param_3[0xf] * (uint)param_2[0xf];
  iVar2 = 0x7fff;
  if ((iVar1 < 0x8000) && (iVar2 = -0x8000, -0x8001 < iVar1)) {
    iVar2 = iVar1;
  }
  param_1[7] = (short)iVar2;
  return;
}



ulong FUN_004153f4(ulong param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0x3f;
  if (param_2 != 0) {
    for (; param_2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  if (param_2 != 0) {
    uVar2 = (ulong)((int)lVar1 + 0x40);
  }
  else {
    uVar2 = 0x3f;
    if (param_1 != 0) {
      for (; param_1 >> uVar2 == 0; uVar2 = uVar2 - 1) {
      }
    }
  }
  return uVar2;
}



ulong FUN_00415409(byte param_1)

{
  ulong uVar1;
  
  if ((byte)(param_1 - 7) < 0x56) {
                    // WARNING: Could not emulate address calculation at 0x0041541d
                    // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(&DAT_0041c0c0 + (ulong)(byte)(param_1 - 7) * 8))();
    return uVar1;
  }
  if (param_1 - 0x20 < 0x5f) {
    return (ulong)param_1;
  }
  return (ulong)(((param_1 & 7) << 0x18 | (param_1 & 0x38) << 0xd) + (param_1 & 0xffffffc0) * 4 +
                0x3030305c);
}



void FUN_00415469(undefined8 param_1,undefined8 param_2)

{
  FUN_00415898(param_1,param_2,0x346dc5d63886594b,0xb);
  return;
}



void FUN_0041547a(undefined8 param_1,undefined8 param_2)

{
  FUN_00415898(param_1,param_2,0x20c49ba5e353f7cf,7);
  return;
}



long FUN_0041548b(long param_1)

{
  return param_1 / 100;
}



void FUN_004154c0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = 0x20;
  if (param_3 < 0x20) {
    uVar1 = param_3;
  }
                    // WARNING: Could not emulate address calculation at 0x004154d0
                    // WARNING: Treating indirect jump as call
  (**(code **)(&DAT_0041c500 + uVar1 * 8))();
  return;
}



void FUN_004155fc(undefined *param_1,undefined *param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0;
  if (param_2 <= param_1) {
    bVar1 = 1;
    param_2 = param_2 + param_3 + -1;
    param_1 = param_1 + param_3 + -1;
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + (ulong)bVar1 * -2 + 1;
    param_1 = param_1 + (ulong)bVar1 * -2 + 1;
  }
  return;
}



void FUN_0041561f(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = 0x20;
  if (param_3 < 0x20) {
    uVar1 = param_3;
  }
                    // WARNING: Could not emulate address calculation at 0x00415639
                    // WARNING: Treating indirect jump as call
  (**(code **)(&DAT_0041c608 + uVar1 * 8))();
  return;
}



undefined8 FUN_004156ef(long *param_1)

{
  long unaff_RBX;
  long unaff_RBP;
  long unaff_R12;
  long unaff_R13;
  long unaff_R14;
  long unaff_R15;
  long in_stack_00000000;
  
  *param_1 = (long)&stack0x00000008;
  param_1[1] = unaff_RBX;
  param_1[2] = unaff_RBP;
  param_1[3] = unaff_R12;
  param_1[4] = unaff_R13;
  param_1[5] = unaff_R14;
  param_1[6] = unaff_R15;
  param_1[7] = in_stack_00000000;
  return 0;
}



char * FUN_0041571a(ulong param_1)

{
  uint uVar1;
  ushort uVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  uint uVar6;
  undefined auVar7 [16];
  
  bVar5 = (byte)param_1 & 0xf;
  pcVar3 = (char *)(param_1 & 0xfffffffffffffff0);
  auVar7 = CONCAT115(-(pcVar3[0xf] == '\0'),
                     CONCAT114(-(pcVar3[0xe] == '\0'),
                               CONCAT113(-(pcVar3[0xd] == '\0'),
                                         CONCAT112(-(pcVar3[0xc] == '\0'),
                                                   CONCAT111(-(pcVar3[0xb] == '\0'),
                                                             CONCAT110(-(pcVar3[10] == '\0'),
                                                                       CONCAT19(-(pcVar3[9] == '\0')
                                                                                ,CONCAT18(-(pcVar3[8
                                                  ] == '\0'),
                                                  CONCAT17(-(pcVar3[7] == '\0'),
                                                           CONCAT16(-(pcVar3[6] == '\0'),
                                                                    CONCAT15(-(pcVar3[5] == '\0'),
                                                                             CONCAT14(-(pcVar3[4] ==
                                                                                       '\0'),
                                                  CONCAT13(-(pcVar3[3] == '\0'),
                                                           CONCAT12(-(pcVar3[2] == '\0'),
                                                                    CONCAT11(-(pcVar3[1] == '\0'),
                                                                             -(*pcVar3 == '\0'))))))
                                                  ))))))))));
  uVar6 = (uint)((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                         (ushort)((byte)-(pcVar3[0xf] == '\0') >> 7) << 0xf) >> bVar5) << bVar5;
  uVar1 = 0;
  if (uVar6 != 0) {
    for (; (uVar6 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  pcVar4 = pcVar3;
  if (uVar6 == 0) {
    do {
      pcVar3 = pcVar4 + 0x10;
      auVar7 = CONCAT115(-(pcVar4[0x1f] == '\0'),
                         CONCAT114(-(pcVar4[0x1e] == '\0'),
                                   CONCAT113(-(pcVar4[0x1d] == '\0'),
                                             CONCAT112(-(pcVar4[0x1c] == '\0'),
                                                       CONCAT111(-(pcVar4[0x1b] == '\0'),
                                                                 CONCAT110(-(pcVar4[0x1a] == '\0'),
                                                                           CONCAT19(-(pcVar4[0x19]
                                                                                     == '\0'),
                                                                                    CONCAT18(-(
                                                  pcVar4[0x18] == '\0'),
                                                  CONCAT17(-(pcVar4[0x17] == '\0'),
                                                           CONCAT16(-(pcVar4[0x16] == '\0'),
                                                                    CONCAT15(-(pcVar4[0x15] == '\0')
                                                                             ,CONCAT14(-(pcVar4[0x14
                                                  ] == '\0'),
                                                  CONCAT13(-(pcVar4[0x13] == '\0'),
                                                           CONCAT12(-(pcVar4[0x12] == '\0'),
                                                                    CONCAT11(-(pcVar4[0x11] == '\0')
                                                                             ,-(*pcVar3 == '\0')))))
                                                  )))))))))));
      uVar2 = (ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
              (ushort)((byte)-(pcVar4[0x1f] == '\0') >> 7) << 0xf;
      uVar1 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      pcVar4 = pcVar3;
    } while (uVar2 == 0);
  }
  return pcVar3 + (uVar1 - param_1);
}



undefined (*) [32] FUN_00415760(long param_1,ulong param_2)

{
  undefined (*pauVar1) [32];
  undefined (*pauVar2) [32];
  uint uVar3;
  uint uVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong in_R10;
  bool bVar9;
  uint uVar10;
  char cVar11;
  undefined in_YMM0 [32];
  undefined auVar12 [15];
  undefined in_YMM1 [32];
  undefined auVar13 [16];
  undefined auVar14 [32];
  undefined auVar15 [16];
  undefined auVar16 [32];
  
  uVar6 = param_2 & 0xff;
  uVar7 = 0xffffffffffffffff;
  pauVar2 = (undefined (*) [32])(param_1 + -1);
  do {
    pauVar1 = (undefined (*) [32])(*pauVar2 + 1);
    bVar9 = uVar7 == 0;
    uVar7 = uVar7 - 1;
    uVar8 = in_R10;
    if (bVar9) break;
    cVar5 = (char)uVar6;
    if (((ulong)pauVar1 & 0x1f) == 0) {
      uVar3 = (uint)uVar6;
      pauVar1 = (undefined (*) [32])(pauVar2[-1] + 1);
      if (((byte)DAT_0041c03c & 0x20) == 0) {
        auVar14 = ZEXT2532(SUB3225(CONCAT248(SUB3224(CONCAT239(SUB3223(CONCAT2210(SUB3222(CONCAT2111
                                                  (SUB3221(CONCAT2012(SUB3220(CONCAT1913(SUB3219(
                                                  CONCAT1814(SUB3218(CONCAT1715(SUB3217(CONCAT1616(
                                                  SUB3216(in_YMM0 >> 0x80,0),ZEXT416(uVar3)) >> 0x78
                                                  ,0),ZEXT415(uVar3)) >> 0x70,0),ZEXT414(uVar3)) >>
                                                  0x68,0),ZEXT413(uVar3)) >> 0x60,0),ZEXT412(uVar3))
                                                  >> 0x58,0),ZEXT411(uVar3)) >> 0x50,0),
                                                  (unkuint10)uVar3) >> 0x48,0),(unkuint9)uVar6) >>
                                                  0x40,0),param_2) >> 0x38,0) &
                           SUB3225((undefined  [32])0xffffffffffffffff >> 0x38,0)) << 0x38 &
                  (undefined  [32])0xffff000000000000;
        uVar10 = SUB324(CONCAT302(SUB3230(auVar14 >> 0x10,0),(ushort)uVar6 | (ushort)uVar6 << 8),0);
        uVar3 = uVar10 << 0x10;
        uVar10 = uVar10 | uVar3;
        in_YMM0 = CONCAT1616(SUB3216(auVar14 >> 0x80,0) &
                             SUB3216((undefined  [32])0xffff0000ffffffff >> 0x80,0),
                             CONCAT412(uVar10,CONCAT48(uVar10,CONCAT44(uVar10,uVar10))));
        auVar12 = ZEXT415(0);
        in_YMM1 = CONCAT1616(SUB3216((ZEXT2932(SUB3229(CONCAT239(SUB3223(CONCAT2210(SUB3222(
                                                  CONCAT2111(SUB3221(CONCAT2012(SUB3220(CONCAT1913(
                                                  SUB3219(CONCAT1814(SUB3218(CONCAT1715(SUB3217(
                                                  CONCAT1616(SUB3216(in_YMM1 >> 0x80,0),
                                                             ZEXT1516(auVar12)) >> 0x78,0),auVar12)
                                                  >> 0x70,0) &
                                                  SUB3218((undefined  [32])0xffffffffffffffff >>
                                                          0x70,0),ZEXT1314(SUB1513(auVar12,0))) >>
                                                  0x68,0),ZEXT1213(SUB1512(auVar12,0))) >> 0x60,0),
                                                  ZEXT1112(SUB1511(auVar12,0))) >> 0x58,0),
                                                  ZEXT1011(SUB1510(auVar12,0))) >> 0x50,0),
                                                  (unkuint10)SUB159(auVar12,0)) >> 0x48,0),
                                                  (unkuint9)0) >> 0x18,0) &
                                               SUB3229((undefined  [32])0xffffffffffffffff >> 0x18,0
                                                      ) &
                                               SUB3229((undefined  [32])0xff00000000000000 >> 0x18,0
                                                      ) &
                                               SUB3229((undefined  [32])0xffffff0000000000 >> 0x18,0
                                                      ) &
                                               SUB3229((undefined  [32])0xffffffff00000000 >> 0x18,0
                                                      )) << 0x18) >> 0x80,0) &
                             SUB3216((undefined  [32])0xffffffffff00ffff >> 0x80,0) &
                             SUB3216((undefined  [32])0xffff0000ffffffff >> 0x80,0),
                             ZEXT1216(ZEXT412(0) << 0x40));
        pauVar2 = pauVar1;
        do {
          pauVar1 = pauVar2[1];
          bVar9 = uVar7 < 0x20;
          uVar7 = uVar7 - 0x20;
          if (bVar9) goto LAB_00415812;
          cVar11 = (char)(uVar3 >> 0x18);
          auVar15 = CONCAT115(-(pauVar2[1][0x1f] == cVar11),
                              CONCAT114(-(pauVar2[1][0x1e] == cVar5),
                                        CONCAT113(-(pauVar2[1][0x1d] == cVar5),
                                                  CONCAT112(-(pauVar2[1][0x1c] == cVar5),
                                                            CONCAT111(-(pauVar2[1][0x1b] == cVar11),
                                                                      CONCAT110(-(pauVar2[1][0x1a]
                                                                                 == cVar5),
                                                                                CONCAT19(-(pauVar2[1
                                                  ][0x19] == cVar5),
                                                  CONCAT18(-(pauVar2[1][0x18] == cVar5),
                                                           CONCAT17(-(pauVar2[1][0x17] == cVar11),
                                                                    CONCAT16(-(pauVar2[1][0x16] ==
                                                                              cVar5),CONCAT15(-(
                                                  pauVar2[1][0x15] == cVar5),
                                                  CONCAT14(-(pauVar2[1][0x14] == cVar5),
                                                           CONCAT13(-(pauVar2[1][0x13] == cVar11),
                                                                    CONCAT12(-(pauVar2[1][0x12] ==
                                                                              cVar5),CONCAT11(-(
                                                  pauVar2[1][0x11] == cVar5),
                                                  -(pauVar2[1][0x10] == cVar5)))))))))))))))) |
                    CONCAT115(-(pauVar2[1][0x1f] == '\0'),
                              CONCAT114(-(pauVar2[1][0x1e] == '\0'),
                                        CONCAT113(-(pauVar2[1][0x1d] == '\0'),
                                                  CONCAT112(-(pauVar2[1][0x1c] == '\0'),
                                                            CONCAT111(-(pauVar2[1][0x1b] == '\0'),
                                                                      CONCAT110(-(pauVar2[1][0x1a]
                                                                                 == '\0'),
                                                                                CONCAT19(-(pauVar2[1
                                                  ][0x19] == '\0'),
                                                  CONCAT18(-(pauVar2[1][0x18] == '\0'),
                                                           CONCAT17(-(pauVar2[1][0x17] == '\0'),
                                                                    CONCAT16(-(pauVar2[1][0x16] ==
                                                                              '\0'),CONCAT15(-(
                                                  pauVar2[1][0x15] == '\0'),
                                                  CONCAT14(-(pauVar2[1][0x14] == '\0'),
                                                           CONCAT13(-(pauVar2[1][0x13] == '\0'),
                                                                    CONCAT12(-(pauVar2[1][0x12] ==
                                                                              '\0'),CONCAT11(-(
                                                  pauVar2[1][0x11] == '\0'),
                                                  -(pauVar2[1][0x10] == '\0'))))))))))))))));
          auVar13 = CONCAT115(-(pauVar2[1][0xf] == cVar11),
                              CONCAT114(-(pauVar2[1][0xe] == cVar5),
                                        CONCAT113(-(pauVar2[1][0xd] == cVar5),
                                                  CONCAT112(-(pauVar2[1][0xc] == cVar5),
                                                            CONCAT111(-(pauVar2[1][0xb] == cVar11),
                                                                      CONCAT110(-(pauVar2[1][10] ==
                                                                                 cVar5),CONCAT19(-(
                                                  pauVar2[1][9] == cVar5),
                                                  CONCAT18(-(pauVar2[1][8] == cVar5),
                                                           CONCAT17(-(pauVar2[1][7] == cVar11),
                                                                    CONCAT16(-(pauVar2[1][6] ==
                                                                              cVar5),CONCAT15(-(
                                                  pauVar2[1][5] == cVar5),
                                                  CONCAT14(-(pauVar2[1][4] == cVar5),
                                                           CONCAT13(-(pauVar2[1][3] == cVar11),
                                                                    CONCAT12(-(pauVar2[1][2] ==
                                                                              cVar5),CONCAT11(-(
                                                  pauVar2[1][1] == cVar5),-((*pauVar1)[0] == cVar5))
                                                  )))))))))))))) |
                    CONCAT115(-(pauVar2[1][0xf] == '\0'),
                              CONCAT114(-(pauVar2[1][0xe] == '\0'),
                                        CONCAT113(-(pauVar2[1][0xd] == '\0'),
                                                  CONCAT112(-(pauVar2[1][0xc] == '\0'),
                                                            CONCAT111(-(pauVar2[1][0xb] == '\0'),
                                                                      CONCAT110(-(pauVar2[1][10] ==
                                                                                 '\0'),CONCAT19(-(
                                                  pauVar2[1][9] == '\0'),
                                                  CONCAT18(-(pauVar2[1][8] == '\0'),
                                                           CONCAT17(-(pauVar2[1][7] == '\0'),
                                                                    CONCAT16(-(pauVar2[1][6] == '\0'
                                                                              ),CONCAT15(-(pauVar2[1
                                                  ][5] == '\0'),
                                                  CONCAT14(-(pauVar2[1][4] == '\0'),
                                                           CONCAT13(-(pauVar2[1][3] == '\0'),
                                                                    CONCAT12(-(pauVar2[1][2] == '\0'
                                                                              ),CONCAT11(-(pauVar2[1
                                                  ][1] == '\0'),-((*pauVar1)[0] == '\0')))))))))))))
                                                 )));
          uVar4 = CONCAT22((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                           (ushort)SUB161(auVar15 >> 0x7f,0) << 0xf,
                           (ushort)(SUB161(auVar13 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                           (ushort)SUB161(auVar13 >> 0x7f,0) << 0xf);
          uVar10 = 0;
          if (uVar4 != 0) {
            for (; (uVar4 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
            }
          }
          pauVar2 = pauVar1;
        } while (uVar4 == 0);
      }
      else {
        in_YMM0 = vpbroadcastb_avx2(ZEXT416(uVar3));
        in_YMM1 = vpbroadcastb_avx2(ZEXT416(0));
        do {
          pauVar1 = pauVar1[1];
          bVar9 = uVar7 < 0x20;
          uVar7 = uVar7 - 0x20;
LAB_00415812:
          if (bVar9) {
            uVar7 = uVar7 + 0x20;
            goto LAB_004157c3;
          }
          auVar16 = vpcmpeqb_avx2(*pauVar1,in_YMM0);
          auVar14 = vpcmpeqb_avx2(*pauVar1,in_YMM1);
          auVar14 = vpor_avx2(auVar14,auVar16);
          uVar3 = (uint)(SUB321(auVar14 >> 7,0) & 1) | (uint)(SUB321(auVar14 >> 0xf,0) & 1) << 1 |
                  (uint)(SUB321(auVar14 >> 0x17,0) & 1) << 2 |
                  (uint)(SUB321(auVar14 >> 0x1f,0) & 1) << 3 |
                  (uint)(SUB321(auVar14 >> 0x27,0) & 1) << 4 |
                  (uint)(SUB321(auVar14 >> 0x2f,0) & 1) << 5 |
                  (uint)(SUB321(auVar14 >> 0x37,0) & 1) << 6 |
                  (uint)(SUB321(auVar14 >> 0x3f,0) & 1) << 7 |
                  (uint)(SUB321(auVar14 >> 0x47,0) & 1) << 8 |
                  (uint)(SUB321(auVar14 >> 0x4f,0) & 1) << 9 |
                  (uint)(SUB321(auVar14 >> 0x57,0) & 1) << 10 |
                  (uint)(SUB321(auVar14 >> 0x5f,0) & 1) << 0xb |
                  (uint)(SUB321(auVar14 >> 0x67,0) & 1) << 0xc |
                  (uint)(SUB321(auVar14 >> 0x6f,0) & 1) << 0xd |
                  (uint)(SUB321(auVar14 >> 0x77,0) & 1) << 0xe |
                  (uint)SUB321(auVar14 >> 0x7f,0) << 0xf |
                  (uint)(SUB321(auVar14 >> 0x87,0) & 1) << 0x10 |
                  (uint)(SUB321(auVar14 >> 0x8f,0) & 1) << 0x11 |
                  (uint)(SUB321(auVar14 >> 0x97,0) & 1) << 0x12 |
                  (uint)(SUB321(auVar14 >> 0x9f,0) & 1) << 0x13 |
                  (uint)(SUB321(auVar14 >> 0xa7,0) & 1) << 0x14 |
                  (uint)(SUB321(auVar14 >> 0xaf,0) & 1) << 0x15 |
                  (uint)(SUB321(auVar14 >> 0xb7,0) & 1) << 0x16 |
                  (uint)SUB321(auVar14 >> 0xbf,0) << 0x17 |
                  (uint)(SUB321(auVar14 >> 199,0) & 1) << 0x18 |
                  (uint)(SUB321(auVar14 >> 0xcf,0) & 1) << 0x19 |
                  (uint)(SUB321(auVar14 >> 0xd7,0) & 1) << 0x1a |
                  (uint)(SUB321(auVar14 >> 0xdf,0) & 1) << 0x1b |
                  (uint)(SUB321(auVar14 >> 0xe7,0) & 1) << 0x1c |
                  (uint)(SUB321(auVar14 >> 0xef,0) & 1) << 0x1d |
                  (uint)(SUB321(auVar14 >> 0xf7,0) & 1) << 0x1e |
                  (uint)SUB321(auVar14 >> 0xff,0) << 0x1f;
          uVar10 = 0;
          if (uVar3 != 0) {
            for (; (uVar3 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
            }
          }
        } while (uVar3 == 0);
        vzeroupper_avx();
      }
      pauVar1 = (undefined (*) [32])(*pauVar1 + uVar10);
    }
LAB_004157c3:
    if (cVar5 == (*pauVar1)[0]) {
      return pauVar1;
    }
    pauVar2 = pauVar1;
    uVar8 = 0xffffffffffffffff;
  } while ((*pauVar1)[0] != '\0');
  return (undefined (*) [32])((ulong)pauVar1 & uVar8);
}



undefined (*) [32] FUN_0041576b(long param_1,ulong param_2)

{
  undefined (*pauVar1) [32];
  undefined (*pauVar2) [32];
  uint uVar3;
  uint uVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong in_R10;
  bool bVar9;
  uint uVar10;
  char cVar11;
  undefined in_YMM0 [32];
  undefined auVar12 [15];
  undefined in_YMM1 [32];
  undefined auVar13 [16];
  undefined auVar14 [32];
  undefined auVar15 [16];
  undefined auVar16 [32];
  
  uVar6 = param_2 & 0xff;
  uVar7 = 0xffffffffffffffff;
  pauVar2 = (undefined (*) [32])(param_1 + -1);
  do {
    pauVar1 = (undefined (*) [32])(*pauVar2 + 1);
    bVar9 = uVar7 == 0;
    uVar7 = uVar7 - 1;
    uVar8 = in_R10;
    if (bVar9) break;
    cVar5 = (char)uVar6;
    if (((ulong)pauVar1 & 0x1f) == 0) {
      uVar3 = (uint)uVar6;
      pauVar1 = (undefined (*) [32])(pauVar2[-1] + 1);
      if (((byte)DAT_0041c03c & 0x20) == 0) {
        auVar14 = ZEXT2532(SUB3225(CONCAT248(SUB3224(CONCAT239(SUB3223(CONCAT2210(SUB3222(CONCAT2111
                                                  (SUB3221(CONCAT2012(SUB3220(CONCAT1913(SUB3219(
                                                  CONCAT1814(SUB3218(CONCAT1715(SUB3217(CONCAT1616(
                                                  SUB3216(in_YMM0 >> 0x80,0),ZEXT416(uVar3)) >> 0x78
                                                  ,0),ZEXT415(uVar3)) >> 0x70,0),ZEXT414(uVar3)) >>
                                                  0x68,0),ZEXT413(uVar3)) >> 0x60,0),ZEXT412(uVar3))
                                                  >> 0x58,0),ZEXT411(uVar3)) >> 0x50,0),
                                                  (unkuint10)uVar3) >> 0x48,0),(unkuint9)uVar6) >>
                                                  0x40,0),param_2) >> 0x38,0) &
                           SUB3225((undefined  [32])0xffffffffffffffff >> 0x38,0)) << 0x38 &
                  (undefined  [32])0xffff000000000000;
        uVar10 = SUB324(CONCAT302(SUB3230(auVar14 >> 0x10,0),(ushort)uVar6 | (ushort)uVar6 << 8),0);
        uVar3 = uVar10 << 0x10;
        uVar10 = uVar10 | uVar3;
        in_YMM0 = CONCAT1616(SUB3216(auVar14 >> 0x80,0) &
                             SUB3216((undefined  [32])0xffff0000ffffffff >> 0x80,0),
                             CONCAT412(uVar10,CONCAT48(uVar10,CONCAT44(uVar10,uVar10))));
        auVar12 = ZEXT415(0);
        in_YMM1 = CONCAT1616(SUB3216((ZEXT2932(SUB3229(CONCAT239(SUB3223(CONCAT2210(SUB3222(
                                                  CONCAT2111(SUB3221(CONCAT2012(SUB3220(CONCAT1913(
                                                  SUB3219(CONCAT1814(SUB3218(CONCAT1715(SUB3217(
                                                  CONCAT1616(SUB3216(in_YMM1 >> 0x80,0),
                                                             ZEXT1516(auVar12)) >> 0x78,0),auVar12)
                                                  >> 0x70,0) &
                                                  SUB3218((undefined  [32])0xffffffffffffffff >>
                                                          0x70,0),ZEXT1314(SUB1513(auVar12,0))) >>
                                                  0x68,0),ZEXT1213(SUB1512(auVar12,0))) >> 0x60,0),
                                                  ZEXT1112(SUB1511(auVar12,0))) >> 0x58,0),
                                                  ZEXT1011(SUB1510(auVar12,0))) >> 0x50,0),
                                                  (unkuint10)SUB159(auVar12,0)) >> 0x48,0),
                                                  (unkuint9)0) >> 0x18,0) &
                                               SUB3229((undefined  [32])0xffffffffffffffff >> 0x18,0
                                                      ) &
                                               SUB3229((undefined  [32])0xff00000000000000 >> 0x18,0
                                                      ) &
                                               SUB3229((undefined  [32])0xffffff0000000000 >> 0x18,0
                                                      ) &
                                               SUB3229((undefined  [32])0xffffffff00000000 >> 0x18,0
                                                      )) << 0x18) >> 0x80,0) &
                             SUB3216((undefined  [32])0xffffffffff00ffff >> 0x80,0) &
                             SUB3216((undefined  [32])0xffff0000ffffffff >> 0x80,0),
                             ZEXT1216(ZEXT412(0) << 0x40));
        pauVar2 = pauVar1;
        do {
          pauVar1 = pauVar2[1];
          bVar9 = uVar7 < 0x20;
          uVar7 = uVar7 - 0x20;
          if (bVar9) goto LAB_00415812;
          cVar11 = (char)(uVar3 >> 0x18);
          auVar15 = CONCAT115(-(pauVar2[1][0x1f] == cVar11),
                              CONCAT114(-(pauVar2[1][0x1e] == cVar5),
                                        CONCAT113(-(pauVar2[1][0x1d] == cVar5),
                                                  CONCAT112(-(pauVar2[1][0x1c] == cVar5),
                                                            CONCAT111(-(pauVar2[1][0x1b] == cVar11),
                                                                      CONCAT110(-(pauVar2[1][0x1a]
                                                                                 == cVar5),
                                                                                CONCAT19(-(pauVar2[1
                                                  ][0x19] == cVar5),
                                                  CONCAT18(-(pauVar2[1][0x18] == cVar5),
                                                           CONCAT17(-(pauVar2[1][0x17] == cVar11),
                                                                    CONCAT16(-(pauVar2[1][0x16] ==
                                                                              cVar5),CONCAT15(-(
                                                  pauVar2[1][0x15] == cVar5),
                                                  CONCAT14(-(pauVar2[1][0x14] == cVar5),
                                                           CONCAT13(-(pauVar2[1][0x13] == cVar11),
                                                                    CONCAT12(-(pauVar2[1][0x12] ==
                                                                              cVar5),CONCAT11(-(
                                                  pauVar2[1][0x11] == cVar5),
                                                  -(pauVar2[1][0x10] == cVar5)))))))))))))))) |
                    CONCAT115(-(pauVar2[1][0x1f] == '\0'),
                              CONCAT114(-(pauVar2[1][0x1e] == '\0'),
                                        CONCAT113(-(pauVar2[1][0x1d] == '\0'),
                                                  CONCAT112(-(pauVar2[1][0x1c] == '\0'),
                                                            CONCAT111(-(pauVar2[1][0x1b] == '\0'),
                                                                      CONCAT110(-(pauVar2[1][0x1a]
                                                                                 == '\0'),
                                                                                CONCAT19(-(pauVar2[1
                                                  ][0x19] == '\0'),
                                                  CONCAT18(-(pauVar2[1][0x18] == '\0'),
                                                           CONCAT17(-(pauVar2[1][0x17] == '\0'),
                                                                    CONCAT16(-(pauVar2[1][0x16] ==
                                                                              '\0'),CONCAT15(-(
                                                  pauVar2[1][0x15] == '\0'),
                                                  CONCAT14(-(pauVar2[1][0x14] == '\0'),
                                                           CONCAT13(-(pauVar2[1][0x13] == '\0'),
                                                                    CONCAT12(-(pauVar2[1][0x12] ==
                                                                              '\0'),CONCAT11(-(
                                                  pauVar2[1][0x11] == '\0'),
                                                  -(pauVar2[1][0x10] == '\0'))))))))))))))));
          auVar13 = CONCAT115(-(pauVar2[1][0xf] == cVar11),
                              CONCAT114(-(pauVar2[1][0xe] == cVar5),
                                        CONCAT113(-(pauVar2[1][0xd] == cVar5),
                                                  CONCAT112(-(pauVar2[1][0xc] == cVar5),
                                                            CONCAT111(-(pauVar2[1][0xb] == cVar11),
                                                                      CONCAT110(-(pauVar2[1][10] ==
                                                                                 cVar5),CONCAT19(-(
                                                  pauVar2[1][9] == cVar5),
                                                  CONCAT18(-(pauVar2[1][8] == cVar5),
                                                           CONCAT17(-(pauVar2[1][7] == cVar11),
                                                                    CONCAT16(-(pauVar2[1][6] ==
                                                                              cVar5),CONCAT15(-(
                                                  pauVar2[1][5] == cVar5),
                                                  CONCAT14(-(pauVar2[1][4] == cVar5),
                                                           CONCAT13(-(pauVar2[1][3] == cVar11),
                                                                    CONCAT12(-(pauVar2[1][2] ==
                                                                              cVar5),CONCAT11(-(
                                                  pauVar2[1][1] == cVar5),-((*pauVar1)[0] == cVar5))
                                                  )))))))))))))) |
                    CONCAT115(-(pauVar2[1][0xf] == '\0'),
                              CONCAT114(-(pauVar2[1][0xe] == '\0'),
                                        CONCAT113(-(pauVar2[1][0xd] == '\0'),
                                                  CONCAT112(-(pauVar2[1][0xc] == '\0'),
                                                            CONCAT111(-(pauVar2[1][0xb] == '\0'),
                                                                      CONCAT110(-(pauVar2[1][10] ==
                                                                                 '\0'),CONCAT19(-(
                                                  pauVar2[1][9] == '\0'),
                                                  CONCAT18(-(pauVar2[1][8] == '\0'),
                                                           CONCAT17(-(pauVar2[1][7] == '\0'),
                                                                    CONCAT16(-(pauVar2[1][6] == '\0'
                                                                              ),CONCAT15(-(pauVar2[1
                                                  ][5] == '\0'),
                                                  CONCAT14(-(pauVar2[1][4] == '\0'),
                                                           CONCAT13(-(pauVar2[1][3] == '\0'),
                                                                    CONCAT12(-(pauVar2[1][2] == '\0'
                                                                              ),CONCAT11(-(pauVar2[1
                                                  ][1] == '\0'),-((*pauVar1)[0] == '\0')))))))))))))
                                                 )));
          uVar4 = CONCAT22((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                           (ushort)SUB161(auVar15 >> 0x7f,0) << 0xf,
                           (ushort)(SUB161(auVar13 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                           (ushort)SUB161(auVar13 >> 0x7f,0) << 0xf);
          uVar10 = 0;
          if (uVar4 != 0) {
            for (; (uVar4 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
            }
          }
          pauVar2 = pauVar1;
        } while (uVar4 == 0);
      }
      else {
        in_YMM0 = vpbroadcastb_avx2(ZEXT416(uVar3));
        in_YMM1 = vpbroadcastb_avx2(ZEXT416(0));
        do {
          pauVar1 = pauVar1[1];
          bVar9 = uVar7 < 0x20;
          uVar7 = uVar7 - 0x20;
LAB_00415812:
          if (bVar9) {
            uVar7 = uVar7 + 0x20;
            goto LAB_004157c3;
          }
          auVar16 = vpcmpeqb_avx2(*pauVar1,in_YMM0);
          auVar14 = vpcmpeqb_avx2(*pauVar1,in_YMM1);
          auVar14 = vpor_avx2(auVar14,auVar16);
          uVar3 = (uint)(SUB321(auVar14 >> 7,0) & 1) | (uint)(SUB321(auVar14 >> 0xf,0) & 1) << 1 |
                  (uint)(SUB321(auVar14 >> 0x17,0) & 1) << 2 |
                  (uint)(SUB321(auVar14 >> 0x1f,0) & 1) << 3 |
                  (uint)(SUB321(auVar14 >> 0x27,0) & 1) << 4 |
                  (uint)(SUB321(auVar14 >> 0x2f,0) & 1) << 5 |
                  (uint)(SUB321(auVar14 >> 0x37,0) & 1) << 6 |
                  (uint)(SUB321(auVar14 >> 0x3f,0) & 1) << 7 |
                  (uint)(SUB321(auVar14 >> 0x47,0) & 1) << 8 |
                  (uint)(SUB321(auVar14 >> 0x4f,0) & 1) << 9 |
                  (uint)(SUB321(auVar14 >> 0x57,0) & 1) << 10 |
                  (uint)(SUB321(auVar14 >> 0x5f,0) & 1) << 0xb |
                  (uint)(SUB321(auVar14 >> 0x67,0) & 1) << 0xc |
                  (uint)(SUB321(auVar14 >> 0x6f,0) & 1) << 0xd |
                  (uint)(SUB321(auVar14 >> 0x77,0) & 1) << 0xe |
                  (uint)SUB321(auVar14 >> 0x7f,0) << 0xf |
                  (uint)(SUB321(auVar14 >> 0x87,0) & 1) << 0x10 |
                  (uint)(SUB321(auVar14 >> 0x8f,0) & 1) << 0x11 |
                  (uint)(SUB321(auVar14 >> 0x97,0) & 1) << 0x12 |
                  (uint)(SUB321(auVar14 >> 0x9f,0) & 1) << 0x13 |
                  (uint)(SUB321(auVar14 >> 0xa7,0) & 1) << 0x14 |
                  (uint)(SUB321(auVar14 >> 0xaf,0) & 1) << 0x15 |
                  (uint)(SUB321(auVar14 >> 0xb7,0) & 1) << 0x16 |
                  (uint)SUB321(auVar14 >> 0xbf,0) << 0x17 |
                  (uint)(SUB321(auVar14 >> 199,0) & 1) << 0x18 |
                  (uint)(SUB321(auVar14 >> 0xcf,0) & 1) << 0x19 |
                  (uint)(SUB321(auVar14 >> 0xd7,0) & 1) << 0x1a |
                  (uint)(SUB321(auVar14 >> 0xdf,0) & 1) << 0x1b |
                  (uint)(SUB321(auVar14 >> 0xe7,0) & 1) << 0x1c |
                  (uint)(SUB321(auVar14 >> 0xef,0) & 1) << 0x1d |
                  (uint)(SUB321(auVar14 >> 0xf7,0) & 1) << 0x1e |
                  (uint)SUB321(auVar14 >> 0xff,0) << 0x1f;
          uVar10 = 0;
          if (uVar3 != 0) {
            for (; (uVar3 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
            }
          }
        } while (uVar3 == 0);
        vzeroupper_avx();
      }
      pauVar1 = (undefined (*) [32])(*pauVar1 + uVar10);
    }
LAB_004157c3:
    if (cVar5 == (*pauVar1)[0]) {
      return pauVar1;
    }
    pauVar2 = pauVar1;
    uVar8 = 0;
  } while ((*pauVar1)[0] != '\0');
  return (undefined (*) [32])((ulong)pauVar1 & uVar8);
}



undefined (*) [32]
FUN_00415783(long param_1,byte param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
            ulong param_6)

{
  uint uVar1;
  undefined (*pauVar2) [32];
  undefined (*pauVar3) [32];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  uint uVar10;
  char cVar11;
  undefined in_YMM0 [32];
  uint uVar12;
  char cVar13;
  undefined in_YMM1 [32];
  undefined auVar14 [16];
  undefined auVar15 [32];
  undefined auVar16 [16];
  undefined auVar17 [32];
  
  uVar6 = (uint)CONCAT11(param_2,param_2);
  pauVar3 = (undefined (*) [32])(param_1 + -1);
  do {
    pauVar2 = (undefined (*) [32])(*pauVar3 + 1);
    bVar8 = param_3 == 0;
    param_3 = param_3 - 1;
    if (bVar8) {
      param_6 = 0;
      break;
    }
    bVar7 = (byte)(uVar6 >> 8);
    if (((ulong)pauVar2 & 0x1f) == 0) {
      uVar4 = uVar6 & 0xff;
      pauVar2 = (undefined (*) [32])(pauVar3[-1] + 1);
      if (((byte)DAT_0041c03c & 0x20) == 0) {
        auVar15 = ZEXT2932(SUB3229(CONCAT284(SUB3228((ZEXT2732(SUB3227((ZEXT2632(SUB3226((ZEXT2532(
                                                  SUB3225(CONCAT239(SUB3223(CONCAT2210(SUB3222(
                                                  CONCAT2111(SUB3221(CONCAT2012(SUB3220(CONCAT1913(
                                                  SUB3219(CONCAT1814(SUB3218(CONCAT1715(SUB3217(
                                                  CONCAT1616(SUB3216(in_YMM0 >> 0x80,0),
                                                             ZEXT416(uVar4)) >> 0x78,0),
                                                  ZEXT415(uVar4)) >> 0x70,0),ZEXT414(uVar4)) >> 0x68
                                                  ,0),ZEXT413(uVar4)) >> 0x60,0),ZEXT412(uVar4)) >>
                                                  0x58,0),ZEXT411(uVar4)) >> 0x50,0),
                                                  (unkuint10)uVar4) >> 0x48,0),(unkuint9)0) >> 0x38,
                                                  0) & SUB3225((undefined  [32])0xffffffffffffffff
                                                               >> 0x38,0) &
                                                  SUB3225((undefined  [32])0xffffffffffffffff >>
                                                          0x38,0)) << 0x38) >> 0x30,0) &
                                                  SUB3226((undefined  [32])0xff00ffffffffffff >>
                                                          0x30,0)) << 0x30) >> 0x28,0) &
                                                  SUB3227((undefined  [32])0xffff00ffffffffff >>
                                                          0x28,0)) << 0x28) >> 0x20,0) &
                                             SUB3228((undefined  [32])0xffffff00ffffffff >> 0x20,0),
                                             uVar6) >> 0x18,0) &
                           SUB3229((undefined  [32])0xffffffff000000ff >> 0x18,0)) << 0x18 &
                  (undefined  [32])0xffffffffff00ffff;
        uVar10 = SUB324(CONCAT302(SUB3230(auVar15 >> 0x10,0),(ushort)uVar4 | (ushort)uVar4 << 8),0);
        uVar1 = uVar10 << 0x10;
        uVar10 = uVar10 | uVar1;
        in_YMM0 = CONCAT1616(SUB3216(auVar15 >> 0x80,0) &
                             SUB3216((undefined  [32])0xffff0000ffffffff >> 0x80,0),
                             CONCAT412(uVar10,CONCAT48(uVar10,CONCAT44(uVar10,uVar10))));
        auVar15 = ZEXT2932(SUB3229((ZEXT2832(SUB3228((ZEXT2732(SUB3227((ZEXT2632(SUB3226((ZEXT2532(
                                                  SUB3225(CONCAT239(SUB3223(CONCAT2210(SUB3222(
                                                  CONCAT2111(SUB3221(CONCAT2012(SUB3220(CONCAT1913(
                                                  SUB3219(CONCAT1814(SUB3218(CONCAT1715(SUB3217(
                                                  CONCAT1616(SUB3216(in_YMM1 >> 0x80,0),
                                                             ZEXT116(bVar7)) >> 0x78,0),
                                                  ZEXT115(bVar7)) >> 0x70,0),ZEXT114(bVar7)) >> 0x68
                                                  ,0),ZEXT113(bVar7)) >> 0x60,0),ZEXT112(bVar7)) >>
                                                  0x58,0),ZEXT111(bVar7)) >> 0x50,0),
                                                  (unkuint10)bVar7) >> 0x48,0),(unkuint9)0) >> 0x38,
                                                  0) & SUB3225((undefined  [32])0xffffffffffffffff
                                                               >> 0x38,0) &
                                                  SUB3225((undefined  [32])0xffffffffffffffff >>
                                                          0x38,0)) << 0x38) >> 0x30,0) &
                                                  SUB3226((undefined  [32])0xff00ffffffffffff >>
                                                          0x30,0)) << 0x30) >> 0x28,0) &
                                                  SUB3227((undefined  [32])0xffff00ffffffffff >>
                                                          0x28,0)) << 0x28) >> 0x20,0) &
                                             SUB3228((undefined  [32])0xffffff00ffffffff >> 0x20,0))
                                   << 0x20) >> 0x18,0) &
                           SUB3229((undefined  [32])0xffffffff00ffffff >> 0x18,0)) << 0x18 &
                  (undefined  [32])0xffffffffff00ffff;
        uVar12 = SUB324(CONCAT302(SUB3230(auVar15 >> 0x10,0),CONCAT11(bVar7,bVar7)),0);
        uVar10 = uVar12 << 0x10;
        uVar12 = uVar12 | uVar10;
        in_YMM1 = CONCAT1616(SUB3216(auVar15 >> 0x80,0) &
                             SUB3216((undefined  [32])0xffff0000ffffffff >> 0x80,0),
                             CONCAT412(uVar12,CONCAT48(uVar12,CONCAT44(uVar12,uVar12))));
        pauVar3 = pauVar2;
        do {
          pauVar2 = pauVar3[1];
          bVar8 = param_3 < 0x20;
          param_3 = param_3 - 0x20;
          if (bVar8) goto LAB_00415812;
          bVar9 = (byte)uVar4;
          cVar11 = (char)(uVar1 >> 0x18);
          cVar13 = (char)(uVar10 >> 0x18);
          auVar16 = CONCAT115(-(pauVar3[1][0x1f] == cVar11),
                              CONCAT114(-(pauVar3[1][0x1e] == bVar9),
                                        CONCAT113(-(pauVar3[1][0x1d] == bVar9),
                                                  CONCAT112(-(pauVar3[1][0x1c] == bVar9),
                                                            CONCAT111(-(pauVar3[1][0x1b] == cVar11),
                                                                      CONCAT110(-(pauVar3[1][0x1a]
                                                                                 == bVar9),
                                                                                CONCAT19(-(pauVar3[1
                                                  ][0x19] == bVar9),
                                                  CONCAT18(-(pauVar3[1][0x18] == bVar9),
                                                           CONCAT17(-(pauVar3[1][0x17] == cVar11),
                                                                    CONCAT16(-(pauVar3[1][0x16] ==
                                                                              bVar9),CONCAT15(-(
                                                  pauVar3[1][0x15] == bVar9),
                                                  CONCAT14(-(pauVar3[1][0x14] == bVar9),
                                                           CONCAT13(-(pauVar3[1][0x13] == cVar11),
                                                                    CONCAT12(-(pauVar3[1][0x12] ==
                                                                              bVar9),CONCAT11(-(
                                                  pauVar3[1][0x11] == bVar9),
                                                  -(pauVar3[1][0x10] == bVar9)))))))))))))))) |
                    CONCAT115(-(pauVar3[1][0x1f] == cVar13),
                              CONCAT114(-(pauVar3[1][0x1e] == bVar7),
                                        CONCAT113(-(pauVar3[1][0x1d] == bVar7),
                                                  CONCAT112(-(pauVar3[1][0x1c] == bVar7),
                                                            CONCAT111(-(pauVar3[1][0x1b] == cVar13),
                                                                      CONCAT110(-(pauVar3[1][0x1a]
                                                                                 == bVar7),
                                                                                CONCAT19(-(pauVar3[1
                                                  ][0x19] == bVar7),
                                                  CONCAT18(-(pauVar3[1][0x18] == bVar7),
                                                           CONCAT17(-(pauVar3[1][0x17] == cVar13),
                                                                    CONCAT16(-(pauVar3[1][0x16] ==
                                                                              bVar7),CONCAT15(-(
                                                  pauVar3[1][0x15] == bVar7),
                                                  CONCAT14(-(pauVar3[1][0x14] == bVar7),
                                                           CONCAT13(-(pauVar3[1][0x13] == cVar13),
                                                                    CONCAT12(-(pauVar3[1][0x12] ==
                                                                              bVar7),CONCAT11(-(
                                                  pauVar3[1][0x11] == bVar7),
                                                  -(pauVar3[1][0x10] == bVar7))))))))))))))));
          auVar14 = CONCAT115(-(pauVar3[1][0xf] == cVar11),
                              CONCAT114(-(pauVar3[1][0xe] == bVar9),
                                        CONCAT113(-(pauVar3[1][0xd] == bVar9),
                                                  CONCAT112(-(pauVar3[1][0xc] == bVar9),
                                                            CONCAT111(-(pauVar3[1][0xb] == cVar11),
                                                                      CONCAT110(-(pauVar3[1][10] ==
                                                                                 bVar9),CONCAT19(-(
                                                  pauVar3[1][9] == bVar9),
                                                  CONCAT18(-(pauVar3[1][8] == bVar9),
                                                           CONCAT17(-(pauVar3[1][7] == cVar11),
                                                                    CONCAT16(-(pauVar3[1][6] ==
                                                                              bVar9),CONCAT15(-(
                                                  pauVar3[1][5] == bVar9),
                                                  CONCAT14(-(pauVar3[1][4] == bVar9),
                                                           CONCAT13(-(pauVar3[1][3] == cVar11),
                                                                    CONCAT12(-(pauVar3[1][2] ==
                                                                              bVar9),CONCAT11(-(
                                                  pauVar3[1][1] == bVar9),-((*pauVar2)[0] == bVar9))
                                                  )))))))))))))) |
                    CONCAT115(-(pauVar3[1][0xf] == cVar13),
                              CONCAT114(-(pauVar3[1][0xe] == bVar7),
                                        CONCAT113(-(pauVar3[1][0xd] == bVar7),
                                                  CONCAT112(-(pauVar3[1][0xc] == bVar7),
                                                            CONCAT111(-(pauVar3[1][0xb] == cVar13),
                                                                      CONCAT110(-(pauVar3[1][10] ==
                                                                                 bVar7),CONCAT19(-(
                                                  pauVar3[1][9] == bVar7),
                                                  CONCAT18(-(pauVar3[1][8] == bVar7),
                                                           CONCAT17(-(pauVar3[1][7] == cVar13),
                                                                    CONCAT16(-(pauVar3[1][6] ==
                                                                              bVar7),CONCAT15(-(
                                                  pauVar3[1][5] == bVar7),
                                                  CONCAT14(-(pauVar3[1][4] == bVar7),
                                                           CONCAT13(-(pauVar3[1][3] == cVar13),
                                                                    CONCAT12(-(pauVar3[1][2] ==
                                                                              bVar7),CONCAT11(-(
                                                  pauVar3[1][1] == bVar7),-((*pauVar2)[0] == bVar7))
                                                  ))))))))))))));
          uVar5 = CONCAT22((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                           (ushort)SUB161(auVar16 >> 0x7f,0) << 0xf,
                           (ushort)(SUB161(auVar14 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                           (ushort)SUB161(auVar14 >> 0x7f,0) << 0xf);
          uVar12 = 0;
          if (uVar5 != 0) {
            for (; (uVar5 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
            }
          }
          pauVar3 = pauVar2;
        } while (uVar5 == 0);
      }
      else {
        in_YMM0 = vpbroadcastb_avx2(ZEXT416(uVar4));
        in_YMM1 = vpbroadcastb_avx2(ZEXT116(bVar7));
        do {
          pauVar2 = pauVar2[1];
          bVar8 = param_3 < 0x20;
          param_3 = param_3 - 0x20;
LAB_00415812:
          if (bVar8) {
            param_3 = param_3 + 0x20;
            goto LAB_004157c3;
          }
          auVar17 = vpcmpeqb_avx2(*pauVar2,in_YMM0);
          auVar15 = vpcmpeqb_avx2(*pauVar2,in_YMM1);
          auVar15 = vpor_avx2(auVar15,auVar17);
          uVar4 = (uint)(SUB321(auVar15 >> 7,0) & 1) | (uint)(SUB321(auVar15 >> 0xf,0) & 1) << 1 |
                  (uint)(SUB321(auVar15 >> 0x17,0) & 1) << 2 |
                  (uint)(SUB321(auVar15 >> 0x1f,0) & 1) << 3 |
                  (uint)(SUB321(auVar15 >> 0x27,0) & 1) << 4 |
                  (uint)(SUB321(auVar15 >> 0x2f,0) & 1) << 5 |
                  (uint)(SUB321(auVar15 >> 0x37,0) & 1) << 6 |
                  (uint)(SUB321(auVar15 >> 0x3f,0) & 1) << 7 |
                  (uint)(SUB321(auVar15 >> 0x47,0) & 1) << 8 |
                  (uint)(SUB321(auVar15 >> 0x4f,0) & 1) << 9 |
                  (uint)(SUB321(auVar15 >> 0x57,0) & 1) << 10 |
                  (uint)(SUB321(auVar15 >> 0x5f,0) & 1) << 0xb |
                  (uint)(SUB321(auVar15 >> 0x67,0) & 1) << 0xc |
                  (uint)(SUB321(auVar15 >> 0x6f,0) & 1) << 0xd |
                  (uint)(SUB321(auVar15 >> 0x77,0) & 1) << 0xe |
                  (uint)SUB321(auVar15 >> 0x7f,0) << 0xf |
                  (uint)(SUB321(auVar15 >> 0x87,0) & 1) << 0x10 |
                  (uint)(SUB321(auVar15 >> 0x8f,0) & 1) << 0x11 |
                  (uint)(SUB321(auVar15 >> 0x97,0) & 1) << 0x12 |
                  (uint)(SUB321(auVar15 >> 0x9f,0) & 1) << 0x13 |
                  (uint)(SUB321(auVar15 >> 0xa7,0) & 1) << 0x14 |
                  (uint)(SUB321(auVar15 >> 0xaf,0) & 1) << 0x15 |
                  (uint)(SUB321(auVar15 >> 0xb7,0) & 1) << 0x16 |
                  (uint)SUB321(auVar15 >> 0xbf,0) << 0x17 |
                  (uint)(SUB321(auVar15 >> 199,0) & 1) << 0x18 |
                  (uint)(SUB321(auVar15 >> 0xcf,0) & 1) << 0x19 |
                  (uint)(SUB321(auVar15 >> 0xd7,0) & 1) << 0x1a |
                  (uint)(SUB321(auVar15 >> 0xdf,0) & 1) << 0x1b |
                  (uint)(SUB321(auVar15 >> 0xe7,0) & 1) << 0x1c |
                  (uint)(SUB321(auVar15 >> 0xef,0) & 1) << 0x1d |
                  (uint)(SUB321(auVar15 >> 0xf7,0) & 1) << 0x1e |
                  (uint)SUB321(auVar15 >> 0xff,0) << 0x1f;
          uVar12 = 0;
          if (uVar4 != 0) {
            for (; (uVar4 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
            }
          }
        } while (uVar4 == 0);
        vzeroupper_avx();
      }
      pauVar2 = (undefined (*) [32])(*pauVar2 + uVar12);
    }
LAB_004157c3:
    if (param_2 == (*pauVar2)[0]) {
      return pauVar2;
    }
    pauVar3 = pauVar2;
  } while (bVar7 != (*pauVar2)[0]);
  return (undefined (*) [32])((ulong)pauVar2 & param_6);
}



ulong FUN_00415794(long param_1,ulong param_2)

{
  uint uVar1;
  undefined (*pauVar2) [32];
  undefined (*pauVar3) [32];
  uint uVar4;
  ulong in_R9;
  ulong uVar5;
  bool bVar6;
  undefined auVar7 [13];
  undefined in_YMM0 [32];
  undefined in_YMM1 [32];
  undefined auVar9 [16];
  undefined auVar10 [32];
  undefined auVar11 [16];
  undefined auVar12 [32];
  undefined auVar8 [14];
  
  if (param_1 == 0) {
    return 0;
  }
  pauVar3 = (undefined (*) [32])(param_1 + -1);
  do {
    pauVar2 = (undefined (*) [32])(*pauVar3 + 1);
    bVar6 = param_2 == 0;
    param_2 = param_2 - 1;
    uVar5 = 0;
    if (bVar6) break;
    if (((ulong)pauVar2 & 0x1f) == 0) {
      pauVar2 = (undefined (*) [32])(pauVar3[-1] + 1);
      if (((byte)DAT_0041c03c & 0x20) == 0) {
        auVar8 = ZEXT414(0);
        auVar7 = ZEXT413(0);
        in_YMM0 = CONCAT1616(SUB3216((ZEXT2932(SUB3229(CONCAT239(SUB3223(CONCAT2210(SUB3222(
                                                  CONCAT2111(SUB3221(CONCAT2012(SUB3220(CONCAT1913(
                                                  SUB3219(CONCAT1814(SUB3218(CONCAT1715(SUB3217(
                                                  CONCAT1616(SUB3216(in_YMM0 >> 0x80,0),
                                                             ZEXT1516(ZEXT415(0))) >> 0x78,0),
                                                  ZEXT1415(auVar8)) >> 0x70,0),ZEXT1314(auVar7)) >>
                                                  0x68,0),ZEXT1213(SUB1412(auVar8,0))) >> 0x60,0),
                                                  ZEXT1112(SUB1311(auVar7,0))) >> 0x58,0),
                                                  ZEXT1011(SUB1410(auVar8,0))) >> 0x50,0),
                                                  (unkuint10)SUB139(auVar7,0)) >> 0x48,0),
                                                  (unkuint9)0) >> 0x18,0) &
                                               SUB3229((undefined  [32])0xffffffffffffffff >> 0x18,0
                                                      ) &
                                               SUB3229((undefined  [32])0xff00000000000000 >> 0x18,0
                                                      ) &
                                               SUB3229((undefined  [32])0xffffff0000000000 >> 0x18,0
                                                      ) &
                                               SUB3229((undefined  [32])0xffffffff00000000 >> 0x18,0
                                                      )) << 0x18) >> 0x80,0) &
                             SUB3216((undefined  [32])0xffffffffff00ffff >> 0x80,0) &
                             SUB3216((undefined  [32])0xffff0000ffffffff >> 0x80,0),
                             ZEXT1216(ZEXT412(0) << 0x40));
        in_YMM1 = CONCAT1616(SUB3216(in_YMM1 >> 0x80,0) &
                             SUB3216((undefined  [32])0xff00000000000000 >> 0x80,0) &
                             SUB3216((undefined  [32])0xffff0000ffffffff >> 0x80,0),
                             ZEXT1216(ZEXT412(0) << 0x40));
        pauVar3 = pauVar2;
        do {
          pauVar2 = pauVar3[1];
          bVar6 = param_2 < 0x20;
          param_2 = param_2 - 0x20;
          if (bVar6) goto LAB_00415812;
          auVar11 = CONCAT115(-(pauVar3[1][0x1f] == '\0'),
                              CONCAT114(-(pauVar3[1][0x1e] == '\0'),
                                        CONCAT113(-(pauVar3[1][0x1d] == '\0'),
                                                  CONCAT112(-(pauVar3[1][0x1c] == '\0'),
                                                            CONCAT111(-(pauVar3[1][0x1b] == '\0'),
                                                                      CONCAT110(-(pauVar3[1][0x1a]
                                                                                 == '\0'),
                                                                                CONCAT19(-(pauVar3[1
                                                  ][0x19] == '\0'),
                                                  CONCAT18(-(pauVar3[1][0x18] == '\0'),
                                                           CONCAT17(-(pauVar3[1][0x17] == '\0'),
                                                                    CONCAT16(-(pauVar3[1][0x16] ==
                                                                              '\0'),CONCAT15(-(
                                                  pauVar3[1][0x15] == '\0'),
                                                  CONCAT14(-(pauVar3[1][0x14] == '\0'),
                                                           CONCAT13(-(pauVar3[1][0x13] == '\0'),
                                                                    CONCAT12(-(pauVar3[1][0x12] ==
                                                                              '\0'),CONCAT11(-(
                                                  pauVar3[1][0x11] == '\0'),
                                                  -(pauVar3[1][0x10] == '\0')))))))))))))))) |
                    CONCAT115(-(pauVar3[1][0x1f] == '\0'),
                              CONCAT114(-(pauVar3[1][0x1e] == '\0'),
                                        CONCAT113(-(pauVar3[1][0x1d] == '\0'),
                                                  CONCAT112(-(pauVar3[1][0x1c] == '\0'),
                                                            CONCAT111(-(pauVar3[1][0x1b] == '\0'),
                                                                      CONCAT110(-(pauVar3[1][0x1a]
                                                                                 == '\0'),
                                                                                CONCAT19(-(pauVar3[1
                                                  ][0x19] == '\0'),
                                                  CONCAT18(-(pauVar3[1][0x18] == '\0'),
                                                           CONCAT17(-(pauVar3[1][0x17] == '\0'),
                                                                    CONCAT16(-(pauVar3[1][0x16] ==
                                                                              '\0'),CONCAT15(-(
                                                  pauVar3[1][0x15] == '\0'),
                                                  CONCAT14(-(pauVar3[1][0x14] == '\0'),
                                                           CONCAT13(-(pauVar3[1][0x13] == '\0'),
                                                                    CONCAT12(-(pauVar3[1][0x12] ==
                                                                              '\0'),CONCAT11(-(
                                                  pauVar3[1][0x11] == '\0'),
                                                  -(pauVar3[1][0x10] == '\0'))))))))))))))));
          auVar9 = CONCAT115(-(pauVar3[1][0xf] == '\0'),
                             CONCAT114(-(pauVar3[1][0xe] == '\0'),
                                       CONCAT113(-(pauVar3[1][0xd] == '\0'),
                                                 CONCAT112(-(pauVar3[1][0xc] == '\0'),
                                                           CONCAT111(-(pauVar3[1][0xb] == '\0'),
                                                                     CONCAT110(-(pauVar3[1][10] ==
                                                                                '\0'),CONCAT19(-(
                                                  pauVar3[1][9] == '\0'),
                                                  CONCAT18(-(pauVar3[1][8] == '\0'),
                                                           CONCAT17(-(pauVar3[1][7] == '\0'),
                                                                    CONCAT16(-(pauVar3[1][6] == '\0'
                                                                              ),CONCAT15(-(pauVar3[1
                                                  ][5] == '\0'),
                                                  CONCAT14(-(pauVar3[1][4] == '\0'),
                                                           CONCAT13(-(pauVar3[1][3] == '\0'),
                                                                    CONCAT12(-(pauVar3[1][2] == '\0'
                                                                              ),CONCAT11(-(pauVar3[1
                                                  ][1] == '\0'),-((*pauVar2)[0] == '\0')))))))))))))
                                                ))) |
                   CONCAT115(-(pauVar3[1][0xf] == '\0'),
                             CONCAT114(-(pauVar3[1][0xe] == '\0'),
                                       CONCAT113(-(pauVar3[1][0xd] == '\0'),
                                                 CONCAT112(-(pauVar3[1][0xc] == '\0'),
                                                           CONCAT111(-(pauVar3[1][0xb] == '\0'),
                                                                     CONCAT110(-(pauVar3[1][10] ==
                                                                                '\0'),CONCAT19(-(
                                                  pauVar3[1][9] == '\0'),
                                                  CONCAT18(-(pauVar3[1][8] == '\0'),
                                                           CONCAT17(-(pauVar3[1][7] == '\0'),
                                                                    CONCAT16(-(pauVar3[1][6] == '\0'
                                                                              ),CONCAT15(-(pauVar3[1
                                                  ][5] == '\0'),
                                                  CONCAT14(-(pauVar3[1][4] == '\0'),
                                                           CONCAT13(-(pauVar3[1][3] == '\0'),
                                                                    CONCAT12(-(pauVar3[1][2] == '\0'
                                                                              ),CONCAT11(-(pauVar3[1
                                                  ][1] == '\0'),-((*pauVar2)[0] == '\0')))))))))))))
                                                )));
          uVar4 = CONCAT22((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                           (ushort)SUB161(auVar11 >> 0x7f,0) << 0xf,
                           (ushort)(SUB161(auVar9 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
                           (ushort)SUB161(auVar9 >> 0x7f,0) << 0xf);
          uVar1 = 0;
          if (uVar4 != 0) {
            for (; (uVar4 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
            }
          }
          pauVar3 = pauVar2;
        } while (uVar4 == 0);
      }
      else {
        in_YMM0 = vpbroadcastb_avx2(ZEXT416(0));
        in_YMM1 = vpbroadcastb_avx2(ZEXT116(0));
        do {
          pauVar2 = pauVar2[1];
          bVar6 = param_2 < 0x20;
          param_2 = param_2 - 0x20;
LAB_00415812:
          if (bVar6) {
            param_2 = param_2 + 0x20;
            goto LAB_004157c3;
          }
          auVar12 = vpcmpeqb_avx2(*pauVar2,in_YMM0);
          auVar10 = vpcmpeqb_avx2(*pauVar2,in_YMM1);
          auVar10 = vpor_avx2(auVar10,auVar12);
          uVar4 = (uint)(SUB321(auVar10 >> 7,0) & 1) | (uint)(SUB321(auVar10 >> 0xf,0) & 1) << 1 |
                  (uint)(SUB321(auVar10 >> 0x17,0) & 1) << 2 |
                  (uint)(SUB321(auVar10 >> 0x1f,0) & 1) << 3 |
                  (uint)(SUB321(auVar10 >> 0x27,0) & 1) << 4 |
                  (uint)(SUB321(auVar10 >> 0x2f,0) & 1) << 5 |
                  (uint)(SUB321(auVar10 >> 0x37,0) & 1) << 6 |
                  (uint)(SUB321(auVar10 >> 0x3f,0) & 1) << 7 |
                  (uint)(SUB321(auVar10 >> 0x47,0) & 1) << 8 |
                  (uint)(SUB321(auVar10 >> 0x4f,0) & 1) << 9 |
                  (uint)(SUB321(auVar10 >> 0x57,0) & 1) << 10 |
                  (uint)(SUB321(auVar10 >> 0x5f,0) & 1) << 0xb |
                  (uint)(SUB321(auVar10 >> 0x67,0) & 1) << 0xc |
                  (uint)(SUB321(auVar10 >> 0x6f,0) & 1) << 0xd |
                  (uint)(SUB321(auVar10 >> 0x77,0) & 1) << 0xe |
                  (uint)SUB321(auVar10 >> 0x7f,0) << 0xf |
                  (uint)(SUB321(auVar10 >> 0x87,0) & 1) << 0x10 |
                  (uint)(SUB321(auVar10 >> 0x8f,0) & 1) << 0x11 |
                  (uint)(SUB321(auVar10 >> 0x97,0) & 1) << 0x12 |
                  (uint)(SUB321(auVar10 >> 0x9f,0) & 1) << 0x13 |
                  (uint)(SUB321(auVar10 >> 0xa7,0) & 1) << 0x14 |
                  (uint)(SUB321(auVar10 >> 0xaf,0) & 1) << 0x15 |
                  (uint)(SUB321(auVar10 >> 0xb7,0) & 1) << 0x16 |
                  (uint)SUB321(auVar10 >> 0xbf,0) << 0x17 |
                  (uint)(SUB321(auVar10 >> 199,0) & 1) << 0x18 |
                  (uint)(SUB321(auVar10 >> 0xcf,0) & 1) << 0x19 |
                  (uint)(SUB321(auVar10 >> 0xd7,0) & 1) << 0x1a |
                  (uint)(SUB321(auVar10 >> 0xdf,0) & 1) << 0x1b |
                  (uint)(SUB321(auVar10 >> 0xe7,0) & 1) << 0x1c |
                  (uint)(SUB321(auVar10 >> 0xef,0) & 1) << 0x1d |
                  (uint)(SUB321(auVar10 >> 0xf7,0) & 1) << 0x1e |
                  (uint)SUB321(auVar10 >> 0xff,0) << 0x1f;
          uVar1 = 0;
          if (uVar4 != 0) {
            for (; (uVar4 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
            }
          }
        } while (uVar4 == 0);
        vzeroupper_avx();
      }
      pauVar2 = (undefined (*) [32])(*pauVar2 + uVar1);
    }
LAB_004157c3:
    if ((*pauVar2)[0] == '\0') {
      return (long)pauVar2 - param_1;
    }
    pauVar3 = pauVar2;
    uVar5 = in_R9;
  } while ((*pauVar2)[0] != '\0');
  return (long)pauVar2 - param_1 & uVar5;
}



ulong FUN_004157a4(long param_1,ulong param_2)

{
  uint uVar1;
  undefined (*pauVar2) [32];
  undefined (*pauVar3) [32];
  uint uVar4;
  ulong in_R9;
  bool bVar5;
  undefined auVar6 [13];
  undefined in_YMM0 [32];
  undefined in_YMM1 [32];
  undefined auVar8 [16];
  undefined auVar9 [32];
  undefined auVar10 [16];
  undefined auVar11 [32];
  undefined auVar7 [14];
  
  pauVar3 = (undefined (*) [32])(param_1 + -1);
  do {
    pauVar2 = (undefined (*) [32])(*pauVar3 + 1);
    bVar5 = param_2 == 0;
    param_2 = param_2 - 1;
    if (bVar5) {
      in_R9 = 0xffffffffffffffff;
      break;
    }
    if (((ulong)pauVar2 & 0x1f) == 0) {
      pauVar2 = (undefined (*) [32])(pauVar3[-1] + 1);
      if (((byte)DAT_0041c03c & 0x20) == 0) {
        auVar7 = ZEXT414(0);
        auVar6 = ZEXT413(0);
        in_YMM0 = CONCAT1616(SUB3216((ZEXT2932(SUB3229(CONCAT239(SUB3223(CONCAT2210(SUB3222(
                                                  CONCAT2111(SUB3221(CONCAT2012(SUB3220(CONCAT1913(
                                                  SUB3219(CONCAT1814(SUB3218(CONCAT1715(SUB3217(
                                                  CONCAT1616(SUB3216(in_YMM0 >> 0x80,0),
                                                             ZEXT1516(ZEXT415(0))) >> 0x78,0),
                                                  ZEXT1415(auVar7)) >> 0x70,0),ZEXT1314(auVar6)) >>
                                                  0x68,0),ZEXT1213(SUB1412(auVar7,0))) >> 0x60,0),
                                                  ZEXT1112(SUB1311(auVar6,0))) >> 0x58,0),
                                                  ZEXT1011(SUB1410(auVar7,0))) >> 0x50,0),
                                                  (unkuint10)SUB139(auVar6,0)) >> 0x48,0),
                                                  (unkuint9)0) >> 0x18,0) &
                                               SUB3229((undefined  [32])0xffffffffffffffff >> 0x18,0
                                                      ) &
                                               SUB3229((undefined  [32])0xff00000000000000 >> 0x18,0
                                                      ) &
                                               SUB3229((undefined  [32])0xffffff0000000000 >> 0x18,0
                                                      ) &
                                               SUB3229((undefined  [32])0xffffffff00000000 >> 0x18,0
                                                      )) << 0x18) >> 0x80,0) &
                             SUB3216((undefined  [32])0xffffffffff00ffff >> 0x80,0) &
                             SUB3216((undefined  [32])0xffff0000ffffffff >> 0x80,0),
                             ZEXT1216(ZEXT412(0) << 0x40));
        in_YMM1 = CONCAT1616(SUB3216(in_YMM1 >> 0x80,0) &
                             SUB3216((undefined  [32])0xff00000000000000 >> 0x80,0) &
                             SUB3216((undefined  [32])0xffff0000ffffffff >> 0x80,0),
                             ZEXT1216(ZEXT412(0) << 0x40));
        pauVar3 = pauVar2;
        do {
          pauVar2 = pauVar3[1];
          bVar5 = param_2 < 0x20;
          param_2 = param_2 - 0x20;
          if (bVar5) goto LAB_00415812;
          auVar10 = CONCAT115(-(pauVar3[1][0x1f] == '\0'),
                              CONCAT114(-(pauVar3[1][0x1e] == '\0'),
                                        CONCAT113(-(pauVar3[1][0x1d] == '\0'),
                                                  CONCAT112(-(pauVar3[1][0x1c] == '\0'),
                                                            CONCAT111(-(pauVar3[1][0x1b] == '\0'),
                                                                      CONCAT110(-(pauVar3[1][0x1a]
                                                                                 == '\0'),
                                                                                CONCAT19(-(pauVar3[1
                                                  ][0x19] == '\0'),
                                                  CONCAT18(-(pauVar3[1][0x18] == '\0'),
                                                           CONCAT17(-(pauVar3[1][0x17] == '\0'),
                                                                    CONCAT16(-(pauVar3[1][0x16] ==
                                                                              '\0'),CONCAT15(-(
                                                  pauVar3[1][0x15] == '\0'),
                                                  CONCAT14(-(pauVar3[1][0x14] == '\0'),
                                                           CONCAT13(-(pauVar3[1][0x13] == '\0'),
                                                                    CONCAT12(-(pauVar3[1][0x12] ==
                                                                              '\0'),CONCAT11(-(
                                                  pauVar3[1][0x11] == '\0'),
                                                  -(pauVar3[1][0x10] == '\0')))))))))))))))) |
                    CONCAT115(-(pauVar3[1][0x1f] == '\0'),
                              CONCAT114(-(pauVar3[1][0x1e] == '\0'),
                                        CONCAT113(-(pauVar3[1][0x1d] == '\0'),
                                                  CONCAT112(-(pauVar3[1][0x1c] == '\0'),
                                                            CONCAT111(-(pauVar3[1][0x1b] == '\0'),
                                                                      CONCAT110(-(pauVar3[1][0x1a]
                                                                                 == '\0'),
                                                                                CONCAT19(-(pauVar3[1
                                                  ][0x19] == '\0'),
                                                  CONCAT18(-(pauVar3[1][0x18] == '\0'),
                                                           CONCAT17(-(pauVar3[1][0x17] == '\0'),
                                                                    CONCAT16(-(pauVar3[1][0x16] ==
                                                                              '\0'),CONCAT15(-(
                                                  pauVar3[1][0x15] == '\0'),
                                                  CONCAT14(-(pauVar3[1][0x14] == '\0'),
                                                           CONCAT13(-(pauVar3[1][0x13] == '\0'),
                                                                    CONCAT12(-(pauVar3[1][0x12] ==
                                                                              '\0'),CONCAT11(-(
                                                  pauVar3[1][0x11] == '\0'),
                                                  -(pauVar3[1][0x10] == '\0'))))))))))))))));
          auVar8 = CONCAT115(-(pauVar3[1][0xf] == '\0'),
                             CONCAT114(-(pauVar3[1][0xe] == '\0'),
                                       CONCAT113(-(pauVar3[1][0xd] == '\0'),
                                                 CONCAT112(-(pauVar3[1][0xc] == '\0'),
                                                           CONCAT111(-(pauVar3[1][0xb] == '\0'),
                                                                     CONCAT110(-(pauVar3[1][10] ==
                                                                                '\0'),CONCAT19(-(
                                                  pauVar3[1][9] == '\0'),
                                                  CONCAT18(-(pauVar3[1][8] == '\0'),
                                                           CONCAT17(-(pauVar3[1][7] == '\0'),
                                                                    CONCAT16(-(pauVar3[1][6] == '\0'
                                                                              ),CONCAT15(-(pauVar3[1
                                                  ][5] == '\0'),
                                                  CONCAT14(-(pauVar3[1][4] == '\0'),
                                                           CONCAT13(-(pauVar3[1][3] == '\0'),
                                                                    CONCAT12(-(pauVar3[1][2] == '\0'
                                                                              ),CONCAT11(-(pauVar3[1
                                                  ][1] == '\0'),-((*pauVar2)[0] == '\0')))))))))))))
                                                ))) |
                   CONCAT115(-(pauVar3[1][0xf] == '\0'),
                             CONCAT114(-(pauVar3[1][0xe] == '\0'),
                                       CONCAT113(-(pauVar3[1][0xd] == '\0'),
                                                 CONCAT112(-(pauVar3[1][0xc] == '\0'),
                                                           CONCAT111(-(pauVar3[1][0xb] == '\0'),
                                                                     CONCAT110(-(pauVar3[1][10] ==
                                                                                '\0'),CONCAT19(-(
                                                  pauVar3[1][9] == '\0'),
                                                  CONCAT18(-(pauVar3[1][8] == '\0'),
                                                           CONCAT17(-(pauVar3[1][7] == '\0'),
                                                                    CONCAT16(-(pauVar3[1][6] == '\0'
                                                                              ),CONCAT15(-(pauVar3[1
                                                  ][5] == '\0'),
                                                  CONCAT14(-(pauVar3[1][4] == '\0'),
                                                           CONCAT13(-(pauVar3[1][3] == '\0'),
                                                                    CONCAT12(-(pauVar3[1][2] == '\0'
                                                                              ),CONCAT11(-(pauVar3[1
                                                  ][1] == '\0'),-((*pauVar2)[0] == '\0')))))))))))))
                                                )));
          uVar4 = CONCAT22((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                           (ushort)SUB161(auVar10 >> 0x7f,0) << 0xf,
                           (ushort)(SUB161(auVar8 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
                           (ushort)SUB161(auVar8 >> 0x7f,0) << 0xf);
          uVar1 = 0;
          if (uVar4 != 0) {
            for (; (uVar4 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
            }
          }
          pauVar3 = pauVar2;
        } while (uVar4 == 0);
      }
      else {
        in_YMM0 = vpbroadcastb_avx2(ZEXT416(0));
        in_YMM1 = vpbroadcastb_avx2(ZEXT116(0));
        do {
          pauVar2 = pauVar2[1];
          bVar5 = param_2 < 0x20;
          param_2 = param_2 - 0x20;
LAB_00415812:
          if (bVar5) {
            param_2 = param_2 + 0x20;
            goto LAB_004157c3;
          }
          auVar11 = vpcmpeqb_avx2(*pauVar2,in_YMM0);
          auVar9 = vpcmpeqb_avx2(*pauVar2,in_YMM1);
          auVar9 = vpor_avx2(auVar9,auVar11);
          uVar4 = (uint)(SUB321(auVar9 >> 7,0) & 1) | (uint)(SUB321(auVar9 >> 0xf,0) & 1) << 1 |
                  (uint)(SUB321(auVar9 >> 0x17,0) & 1) << 2 |
                  (uint)(SUB321(auVar9 >> 0x1f,0) & 1) << 3 |
                  (uint)(SUB321(auVar9 >> 0x27,0) & 1) << 4 |
                  (uint)(SUB321(auVar9 >> 0x2f,0) & 1) << 5 |
                  (uint)(SUB321(auVar9 >> 0x37,0) & 1) << 6 |
                  (uint)(SUB321(auVar9 >> 0x3f,0) & 1) << 7 |
                  (uint)(SUB321(auVar9 >> 0x47,0) & 1) << 8 |
                  (uint)(SUB321(auVar9 >> 0x4f,0) & 1) << 9 |
                  (uint)(SUB321(auVar9 >> 0x57,0) & 1) << 10 |
                  (uint)(SUB321(auVar9 >> 0x5f,0) & 1) << 0xb |
                  (uint)(SUB321(auVar9 >> 0x67,0) & 1) << 0xc |
                  (uint)(SUB321(auVar9 >> 0x6f,0) & 1) << 0xd |
                  (uint)(SUB321(auVar9 >> 0x77,0) & 1) << 0xe |
                  (uint)SUB321(auVar9 >> 0x7f,0) << 0xf |
                  (uint)(SUB321(auVar9 >> 0x87,0) & 1) << 0x10 |
                  (uint)(SUB321(auVar9 >> 0x8f,0) & 1) << 0x11 |
                  (uint)(SUB321(auVar9 >> 0x97,0) & 1) << 0x12 |
                  (uint)(SUB321(auVar9 >> 0x9f,0) & 1) << 0x13 |
                  (uint)(SUB321(auVar9 >> 0xa7,0) & 1) << 0x14 |
                  (uint)(SUB321(auVar9 >> 0xaf,0) & 1) << 0x15 |
                  (uint)(SUB321(auVar9 >> 0xb7,0) & 1) << 0x16 |
                  (uint)SUB321(auVar9 >> 0xbf,0) << 0x17 |
                  (uint)(SUB321(auVar9 >> 199,0) & 1) << 0x18 |
                  (uint)(SUB321(auVar9 >> 0xcf,0) & 1) << 0x19 |
                  (uint)(SUB321(auVar9 >> 0xd7,0) & 1) << 0x1a |
                  (uint)(SUB321(auVar9 >> 0xdf,0) & 1) << 0x1b |
                  (uint)(SUB321(auVar9 >> 0xe7,0) & 1) << 0x1c |
                  (uint)(SUB321(auVar9 >> 0xef,0) & 1) << 0x1d |
                  (uint)(SUB321(auVar9 >> 0xf7,0) & 1) << 0x1e |
                  (uint)SUB321(auVar9 >> 0xff,0) << 0x1f;
          uVar1 = 0;
          if (uVar4 != 0) {
            for (; (uVar4 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
            }
          }
        } while (uVar4 == 0);
        vzeroupper_avx();
      }
      pauVar2 = (undefined (*) [32])(*pauVar2 + uVar1);
    }
LAB_004157c3:
    if ((*pauVar2)[0] == '\0') {
      return (long)pauVar2 - param_1;
    }
    pauVar3 = pauVar2;
  } while ((*pauVar2)[0] != '\0');
  return (long)pauVar2 - param_1 & in_R9;
}



long FUN_00415898(long param_1,undefined8 param_2,long param_3,byte param_4)

{
  return (SUB168(SEXT816(param_1) * SEXT816(param_3) >> 0x40,0) >> (param_4 & 0x3f)) -
         (param_1 >> 0x3f);
}



void FUN_004158b1(long param_1,uint param_2)

{
  ulong uVar1;
  
  for (uVar1 = 0; ((uint)uVar1 < param_2 && (*(short *)(param_1 + uVar1 * 2) != 0));
      uVar1 = (ulong)((uint)uVar1 + 1)) {
  }
  return;
}



void FUN_004158c8(long param_1,uint param_2)

{
  ulong uVar1;
  
  for (uVar1 = 0; ((uint)uVar1 < param_2 && (*(int *)(param_1 + uVar1 * 4) != 0));
      uVar1 = (ulong)((uint)uVar1 + 1)) {
  }
  return;
}



void FUN_00416001(void)

{
  if (((byte)DAT_0041c718 & 4) == 0) {
    syscall();
    InterruptDescriptorTableRegister(0);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  do {
    (*DAT_0041b0f0)();
  } while( true );
}



void FUN_00416040(void)

{
  undefined local_a8 [136];
  
  FUN_0041633b(local_a8);
  (*DAT_0041b1a0)();
  (*DAT_0041b228)();
  (*DAT_0041b100)();
  FUN_004162c8(local_a8);
  return;
}



ulong FUN_004160c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  if ((DAT_0041b228 != 0x40116a) && (DAT_0041b228 != 0)) {
    uVar1 = FUN_00416040(param_1,param_2,param_2,param_4,param_1);
    return uVar1;
  }
  uVar1 = DAT_00440908;
  if ((long)DAT_00440908 < 1) {
    uVar1 = (-(ulong)((DAT_0041c718 & 8) == 0) & 0xfffffffffe000000) + 0x2000004;
  }
  syscall();
  if (((uVar1 == 0xffffffffffffffff) && (uVar1 = (ulong)DAT_0041c718, DAT_0041c718 == 0)) &&
     (DAT_00440908 == 0)) {
    syscall();
    return 0xffffffffffffffff;
  }
  return uVar1;
}



void FUN_00416150(char *param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    lVar2 = lVar2 + 1;
    cVar1 = param_1[lVar2];
  }
  FUN_004160c0();
  return;
}



ulong FUN_00416180(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  ulong uVar2;
  
  if (((byte)DAT_0041c718 & 4) == 0) {
    syscall();
    uVar2 = DAT_004408f0;
    if (0xfffffffffffff000 < DAT_004408f0) {
      DAT_00448020 = -(int)DAT_004408f0;
      return 0xffffffff;
    }
  }
  else {
    FUN_00416220(param_3,0);
    iVar1 = (*DAT_0041b218)();
    if (iVar1 != 0) {
      return 0;
    }
    uVar2 = FUN_004162a0();
  }
  return uVar2 & 0xffffffff;
}



uint FUN_00416220(uint param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_1 & 7) == 7) {
    uVar1 = 0x40;
    if ((param_2 & 1) == 0) {
      if (DAT_004408c8 != ((long)(int)param_2 & DAT_004408c8)) {
        uVar1 = 0x80;
      }
      return (param_2 | param_1) & 0xdd000000 | uVar1;
    }
  }
  else {
    uVar1 = 4;
    if ((((param_1 & 3) != 3) && (uVar1 = 0x20, (param_1 & 5) != 5)) &&
       (uVar1 = (param_1 & 1) + 1, (param_1 & 4) != 0)) {
      uVar1 = 0x10;
    }
  }
  return (param_2 | param_1) & 0xdd000000 | uVar1;
}



undefined8 FUN_004162a0(void)

{
  undefined8 uVar1;
  
  if (((byte)DAT_0041c718 & 4) == 0) {
    uVar1 = FUN_00402b9f();
    return uVar1;
  }
  DAT_00448020 = FUN_00405f8e();
  return 0xffffffffffffffff;
}



undefined8 FUN_004162c8(long param_1)

{
  return *(undefined8 *)(param_1 + -0x80);
}



void FUN_0041633b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined4 *param_9)

{
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  undefined4 in_XMM4_Dc;
  undefined4 in_XMM4_Dd;
  undefined4 in_XMM5_Dc;
  undefined4 in_XMM5_Dd;
  undefined4 in_XMM6_Dc;
  undefined4 in_XMM6_Dd;
  undefined4 in_XMM7_Dc;
  undefined4 in_XMM7_Dd;
  undefined4 in_XMM8_Da;
  undefined4 in_XMM8_Db;
  undefined4 in_XMM8_Dc;
  undefined4 in_XMM8_Dd;
  undefined4 in_XMM9_Da;
  undefined4 in_XMM9_Db;
  undefined4 in_XMM9_Dc;
  undefined4 in_XMM9_Dd;
  undefined4 in_XMM10_Da;
  undefined4 in_XMM10_Db;
  undefined4 in_XMM10_Dc;
  undefined4 in_XMM10_Dd;
  undefined4 in_XMM11_Da;
  undefined4 in_XMM11_Db;
  undefined4 in_XMM11_Dc;
  undefined4 in_XMM11_Dd;
  undefined4 in_XMM12_Da;
  undefined4 in_XMM12_Db;
  undefined4 in_XMM12_Dc;
  undefined4 in_XMM12_Dd;
  undefined4 in_XMM13_Da;
  undefined4 in_XMM13_Db;
  undefined4 in_XMM13_Dc;
  undefined4 in_XMM13_Dd;
  undefined4 in_XMM14_Da;
  undefined4 in_XMM14_Db;
  undefined4 in_XMM14_Dc;
  undefined4 in_XMM14_Dd;
  undefined4 in_XMM15_Da;
  undefined4 in_XMM15_Db;
  undefined4 in_XMM15_Dc;
  undefined4 in_XMM15_Dd;
  
  param_9[-0x20] = (int)param_1;
  param_9[-0x1f] = (int)((ulong)param_1 >> 0x20);
  param_9[-0x1e] = in_XMM0_Dc;
  param_9[-0x1d] = in_XMM0_Dd;
  param_9[-0x1c] = (int)param_2;
  param_9[-0x1b] = (int)((ulong)param_2 >> 0x20);
  param_9[-0x1a] = in_XMM1_Dc;
  param_9[-0x19] = in_XMM1_Dd;
  param_9[-0x18] = (int)param_3;
  param_9[-0x17] = (int)((ulong)param_3 >> 0x20);
  param_9[-0x16] = in_XMM2_Dc;
  param_9[-0x15] = in_XMM2_Dd;
  param_9[-0x14] = (int)param_4;
  param_9[-0x13] = (int)((ulong)param_4 >> 0x20);
  param_9[-0x12] = in_XMM3_Dc;
  param_9[-0x11] = in_XMM3_Dd;
  param_9[-0x10] = (int)param_5;
  param_9[-0xf] = (int)((ulong)param_5 >> 0x20);
  param_9[-0xe] = in_XMM4_Dc;
  param_9[-0xd] = in_XMM4_Dd;
  param_9[-0xc] = (int)param_6;
  param_9[-0xb] = (int)((ulong)param_6 >> 0x20);
  param_9[-10] = in_XMM5_Dc;
  param_9[-9] = in_XMM5_Dd;
  param_9[-8] = (int)param_7;
  param_9[-7] = (int)((ulong)param_7 >> 0x20);
  param_9[-6] = in_XMM6_Dc;
  param_9[-5] = in_XMM6_Dd;
  param_9[-4] = (int)param_8;
  param_9[-3] = (int)((ulong)param_8 >> 0x20);
  param_9[-2] = in_XMM7_Dc;
  param_9[-1] = in_XMM7_Dd;
  *param_9 = in_XMM8_Da;
  param_9[1] = in_XMM8_Db;
  param_9[2] = in_XMM8_Dc;
  param_9[3] = in_XMM8_Dd;
  param_9[4] = in_XMM9_Da;
  param_9[5] = in_XMM9_Db;
  param_9[6] = in_XMM9_Dc;
  param_9[7] = in_XMM9_Dd;
  param_9[8] = in_XMM10_Da;
  param_9[9] = in_XMM10_Db;
  param_9[10] = in_XMM10_Dc;
  param_9[0xb] = in_XMM10_Dd;
  param_9[0xc] = in_XMM11_Da;
  param_9[0xd] = in_XMM11_Db;
  param_9[0xe] = in_XMM11_Dc;
  param_9[0xf] = in_XMM11_Dd;
  param_9[0x10] = in_XMM12_Da;
  param_9[0x11] = in_XMM12_Db;
  param_9[0x12] = in_XMM12_Dc;
  param_9[0x13] = in_XMM12_Dd;
  param_9[0x14] = in_XMM13_Da;
  param_9[0x15] = in_XMM13_Db;
  param_9[0x16] = in_XMM13_Dc;
  param_9[0x17] = in_XMM13_Dd;
  param_9[0x18] = in_XMM14_Da;
  param_9[0x19] = in_XMM14_Db;
  param_9[0x1a] = in_XMM14_Dc;
  param_9[0x1b] = in_XMM14_Dd;
  param_9[0x1c] = in_XMM15_Da;
  param_9[0x1d] = in_XMM15_Db;
  param_9[0x1e] = in_XMM15_Dc;
  param_9[0x1f] = in_XMM15_Dd;
  return;
}


