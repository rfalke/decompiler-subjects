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



// WARNING: Control flow encountered bad instruction data

void FUN_0040116d(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar2 = (ulong)((int)&stack0xfffffffffffffff8 - 8);
  *(ulong *)(uVar2 - 8) = (ulong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar3 = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 8) = 8;
  puVar4 = (undefined *)(ulong)((int)uVar3 - 8);
  for (lVar1 = *(long *)(uVar2 - 8); lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_004011a7(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  uint unaff_retaddr;
  
  puVar3 = &DAT_0041b040;
  for (lVar2 = 0x5f; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0x40116a;
    puVar3 = puVar3 + 1;
  }
  lVar2 = 0xffffffff;
  plVar4 = (long *)(&stack0x00000018 + (ulong)unaff_retaddr * 8);
  do {
    plVar5 = plVar4;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    plVar5 = plVar4 + 1;
    lVar1 = *plVar4;
    plVar4 = plVar5;
  } while (lVar1 != 0);
  FUN_004021c7(unaff_retaddr,&stack0x00000008,&stack0x00000018 + (ulong)unaff_retaddr * 8,plVar5);
  do {
    invalidInstructionException();
  } while( true );
}



void entry(void)

{
  DAT_0041c718._0_1_ = 8;
  FUN_004011a7();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004011f2(void)

{
  byte bVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  code *pcVar8;
  char cVar9;
  char cVar11;
  ulong uVar10;
  uint uVar12;
  undefined8 uVar13;
  undefined8 extraout_RDX;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  byte *pbVar17;
  long *plVar18;
  long lVar19;
  undefined *puVar20;
  code **ppcVar21;
  code **ppcVar22;
  long **pplVar23;
  long **pplVar24;
  char *pcVar25;
  char *pcVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  int iVar29;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 *puVar30;
  undefined8 unaff_R14;
  long *unaff_R15;
  byte bVar31;
  uint in_XCR0;
  uint in_register_00000604;
  long alStack_70 [10];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  bVar31 = 0;
  plVar16 = &DAT_004199e0;
  uVar7 = rdtsc();
  DAT_0041c004 = (undefined4)((ulong)uVar7 >> 0x20);
  DAT_0041c000 = (undefined4)uVar7;
  puVar30 = (undefined8 *)&DAT_0041c008;
  DAT_00447fe8 = 1;
  DAT_00447fd0._0_4_ = 0x447fc8;
  uStack_18 = 0;
  uStack_20 = 0x16;
  alStack_70[9] = 0xffffffff80000007;
  alStack_70[8] = 0xffffffff80000001;
  alStack_70[7] = 7;
  alStack_70[6] = 2;
  plVar14 = alStack_70 + 5;
  alStack_70[5] = 1;
  uVar7 = 0;
  DAT_00447fec = DAT_00447fe8;
  do {
    iVar29 = (int)uVar7;
    if (iVar29 == 0) {
      puVar2 = (undefined4 *)cpuid_basic_info(0);
    }
    else if (iVar29 == 1) {
      puVar2 = (undefined4 *)cpuid_Version_info(1);
    }
    else if (iVar29 == 2) {
      puVar2 = (undefined4 *)cpuid_cache_tlb_info(2);
    }
    else if (iVar29 == 3) {
      puVar2 = (undefined4 *)cpuid_serial_info(3);
    }
    else if (iVar29 == 4) {
      puVar2 = (undefined4 *)cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (iVar29 == 5) {
      puVar2 = (undefined4 *)cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (iVar29 == 6) {
      puVar2 = (undefined4 *)cpuid_Thermal_Power_Management_info(6);
    }
    else if (iVar29 == 7) {
      puVar2 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (iVar29 == 9) {
      puVar2 = (undefined4 *)cpuid_Direct_Cache_Access_info(9);
    }
    else if (iVar29 == 10) {
      puVar2 = (undefined4 *)cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (iVar29 == 0xb) {
      puVar2 = (undefined4 *)cpuid_Extended_Topology_info(0xb);
    }
    else if (iVar29 == 0xd) {
      puVar2 = (undefined4 *)cpuid_Processor_Extended_States_info(0xd);
    }
    else if (iVar29 == 0xf) {
      puVar2 = (undefined4 *)cpuid_Quality_of_Service_info(0xf);
    }
    else if (iVar29 == -0x7ffffffe) {
      puVar2 = (undefined4 *)cpuid_brand_part1_info(0x80000002);
    }
    else if (iVar29 == -0x7ffffffd) {
      puVar2 = (undefined4 *)cpuid_brand_part2_info(0x80000003);
    }
    else if (iVar29 == -0x7ffffffc) {
      puVar2 = (undefined4 *)cpuid_brand_part3_info(0x80000004);
    }
    else {
      puVar2 = (undefined4 *)cpuid(iVar29);
    }
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar12 = puVar2[3];
    *(undefined4 *)puVar30 = *puVar2;
    *(undefined4 *)((long)puVar30 + 4) = uVar4;
    *(uint *)(puVar30 + 1) = uVar12;
    *(undefined4 *)((long)puVar30 + 0xc) = uVar5;
    plVar15 = plVar14;
    puVar27 = puVar30;
    do {
      puVar30 = puVar27 + 2;
      uVar7 = *plVar15;
      plVar14 = plVar15 + 1;
      if ((int)uVar7 == 0) {
        if (((DAT_0041c020 & 0x10000000) != 0) &&
           (((DAT_0041c020 & 0x8000000) == 0 || (uVar12 = in_register_00000604, (in_XCR0 & 6) != 6))
           )) {
          DAT_0041c020 = DAT_0041c020 & 0xefffffff;
          DAT_0041c038._4_4_ = DAT_0041c038._4_4_ & 0xffffffdf;
        }
        uVar7 = plVar15[1];
        *puVar30 = &LAB_0040b8f0;
        puVar27[3] = FUN_0040dcd0;
        if (_DAT_0041c008 < 4) goto LAB_004012e5;
        iVar29 = 4;
        goto LAB_0040129c;
      }
      plVar15 = plVar15 + 1;
      puVar27 = puVar30;
    } while (DAT_0041c008 < (byte)uVar7);
  } while( true );
LAB_0040129c:
  plVar15[1] = uVar7;
  if (iVar29 == 0) {
    puVar3 = (uint *)cpuid_basic_info(0);
  }
  else if (iVar29 == 1) {
    puVar3 = (uint *)cpuid_Version_info(1);
  }
  else if (iVar29 == 2) {
    puVar3 = (uint *)cpuid_cache_tlb_info(2);
  }
  else if (iVar29 == 3) {
    puVar3 = (uint *)cpuid_serial_info(3);
  }
  else if (iVar29 == 4) {
    puVar3 = (uint *)cpuid_Deterministic_Cache_Parameters_info(4);
  }
  else if (iVar29 == 5) {
    puVar3 = (uint *)cpuid_MONITOR_MWAIT_Features_info(5);
  }
  else if (iVar29 == 6) {
    puVar3 = (uint *)cpuid_Thermal_Power_Management_info(6);
  }
  else if (iVar29 == 7) {
    puVar3 = (uint *)cpuid_Extended_Feature_Enumeration_info(7);
  }
  else if (iVar29 == 9) {
    puVar3 = (uint *)cpuid_Direct_Cache_Access_info(9);
  }
  else if (iVar29 == 10) {
    puVar3 = (uint *)cpuid_Architectural_Performance_Monitoring_info(10);
  }
  else if (iVar29 == 0xb) {
    puVar3 = (uint *)cpuid_Extended_Topology_info(0xb);
  }
  else if (iVar29 == 0xd) {
    puVar3 = (uint *)cpuid_Processor_Extended_States_info(0xd);
  }
  else if (iVar29 == 0xf) {
    puVar3 = (uint *)cpuid_Quality_of_Service_info(0xf);
  }
  else if (iVar29 == -0x7ffffffe) {
    puVar3 = (uint *)cpuid_brand_part1_info(0x80000002);
  }
  else if (iVar29 == -0x7ffffffd) {
    puVar3 = (uint *)cpuid_brand_part2_info(0x80000003);
  }
  else if (iVar29 == -0x7ffffffc) {
    puVar3 = (uint *)cpuid_brand_part3_info(0x80000004);
  }
  else {
    puVar3 = (uint *)cpuid(iVar29);
  }
  uVar6 = puVar3[1];
  uVar12 = puVar3[2];
  uVar7 = plVar15[1];
  if ((*puVar3 & 0x1f) == 0) goto LAB_004012e5;
  if ((char)*puVar3 == 'c') goto code_r0x004012b1;
  iVar29 = iVar29 + 1;
  goto LAB_0040129c;
LAB_004012e5:
  uVar6 = 0x400000;
  goto LAB_004012ea;
code_r0x004012b1:
  uVar12 = (uVar6 & 0xfff) + 1;
  uVar6 = ((uVar6 >> 0x16) + 1) * uVar12 * (puVar3[3] + 1) * ((uVar6 >> 0xc & 0x3ff) + 1);
LAB_004012ea:
  puVar27[4] = (ulong)(uVar6 >> 1);
  puVar27[5] = FUN_0040c5f0;
  pcVar8 = (code *)&LAB_00410e00;
  if ((DAT_0041c060._5_1_ & 1) != 0) {
    pcVar8 = FUN_00410e10;
  }
  ppcVar21 = (code **)(puVar27 + 7);
  puVar27[6] = pcVar8;
  plVar15[1] = unaff_R12;
  *plVar15 = unaff_R13;
  plVar15[-5] = 0x401326;
  (*DAT_0041b180)(ppcVar21,&DAT_004199e0,uVar12,"ntdll.dll");
  while (plVar18 = plVar16 + (ulong)bVar31 * -2 + 1, *plVar16 != 0) {
    plVar15[-5] = 0x40133d;
    pcVar8 = (code *)(*DAT_0041b188)();
    if (pcVar8 == (code *)0x0) {
      pcVar8 = (code *)&LAB_00405e9f;
    }
    *ppcVar21 = pcVar8;
    plVar16 = plVar18;
    ppcVar21 = ppcVar21 + (ulong)bVar31 * -2 + 1;
  }
  puVar30 = (undefined8 *)*plVar15;
  *ppcVar21 = FUN_0040e4e0;
  ppcVar22 = ppcVar21 + (ulong)bVar31 * -2 + 1 + (ulong)bVar31 * -2 + 1;
  ppcVar21[(ulong)bVar31 * -2 + 1] = (code *)&LAB_0040e5c0;
  cVar11 = '\x0f';
  do {
    pbVar17 = (byte *)((long)plVar18 + (ulong)bVar31 * -2 + 1);
    cVar9 = *(char *)plVar18;
    plVar18 = (long *)(pbVar17 + (ulong)bVar31 * -2 + 1);
    bVar1 = *pbVar17;
    ppcVar21 = ppcVar22;
    do {
      ppcVar22 = ppcVar21 + (ulong)bVar31 * -2 + 1;
      *ppcVar21 = (code *)(&LAB_00415424 + bVar1);
      cVar9 = cVar9 + -1;
      ppcVar21 = ppcVar22;
    } while (cVar9 != '\0');
    cVar11 = cVar11 + -1;
  } while (cVar11 != '\0');
  lVar19 = (long)plVar18 + 2;
  DAT_00448018 = unaff_R14;
  *ppcVar22 = (code *)puVar30;
  ppcVar22[(ulong)bVar31 * -2 + 1] = (code *)unaff_R15;
  cVar11 = '\0';
  plVar15[1] = 10;
  uVar10 = plVar15[1];
  pplVar23 = (long **)(ppcVar22 + (ulong)bVar31 * -2 + 1 + (ulong)bVar31 * -2 + 7);
  do {
    cVar11 = cVar11 + '\x01';
    pplVar24 = (long **)((long)pplVar23 + (ulong)bVar31 * -2 + 1);
    *(char *)pplVar23 = cVar11;
    uVar12 = (int)uVar10 - 1;
    uVar10 = (ulong)uVar12;
    pplVar23 = pplVar24;
  } while (uVar12 != 0);
  plVar15[1] = 0x1a;
  uVar10 = plVar15[1];
  pcVar25 = (char *)((long)pplVar24 + 7);
  do {
    cVar11 = cVar11 + '\x01';
    pcVar25[0x20] = cVar11;
    pcVar26 = pcVar25 + (ulong)bVar31 * -2 + 1;
    *pcVar25 = cVar11;
    uVar12 = (int)uVar10 - 1;
    uVar10 = (ulong)uVar12;
    pcVar25 = pcVar26;
  } while (uVar12 != 0);
  puVar27 = (undefined8 *)(pcVar26 + 0xa5);
  plVar15[1] = 0x40;
  uVar13 = plVar15[1];
  plVar15[1] = 0x4013c6;
  FUN_004025f2(puVar27,lVar19,uVar13);
  plVar15[1] = 0x40;
  plVar15[1] = 0x4013d5;
  FUN_004025f2();
  plVar15[1] = 0x20;
  plVar15[1] = 0x4013e9;
  FUN_0040283c();
  plVar15[1] = 0x20;
  plVar15[1] = 0x4013fd;
  FUN_0040283c();
  plVar15[1] = 1;
  plVar15[-3] = 0x40140f;
  (*DAT_0041b1e0)();
  puVar28 = puVar27 + (ulong)bVar31 * -2 + 1;
  *puVar27 = *puVar30;
  plVar15[1] = uVar7;
  *plVar15 = lVar19;
  if ((*(byte *)puVar28 & 2) == 0) {
    if ((*(byte *)puVar28 & 8) == 0) {
      if ((*(byte *)puVar28 & 0x20) == 0) {
        if ((*(byte *)puVar28 & 4) == 0) {
          if (*unaff_R15 == 0) {
            plVar15[-1] = 0x2f;
            plVar15[-2] = 0x10;
            puVar20 = &DAT_0041a212;
          }
          else {
            plVar15[-1] = 0;
            plVar15[-2] = 1;
            puVar20 = &DAT_0041a194;
          }
        }
        else {
          plVar15[-1] = 0x27;
          plVar15[-2] = 4;
          puVar20 = &DAT_0041a28d;
        }
      }
      else {
        plVar15[-1] = 0x35;
        plVar15[-2] = 0x20;
        puVar20 = &DAT_0041a119;
      }
    }
    else {
      plVar15[-1] = 0x4f;
      plVar15[-2] = 8;
      puVar20 = &DAT_0041a337;
    }
  }
  else {
    plVar15[-1] = 0;
    plVar15[-2] = 2;
    puVar20 = &DAT_0041a194;
  }
  *puVar28 = plVar15[-2];
  puVar28[(ulong)bVar31 * -2 + 1] = &DAT_004147e0 + plVar15[-1];
  plVar15[-1] = (long)(puVar28 + (ulong)bVar31 * -2 + 1 + (ulong)bVar31 * -2 + 1);
  plVar15[-2] = 0x401493;
  FUN_0040276d(&DAT_00440770,puVar20);
  plVar15[1] = plVar15[-1];
  *plVar15 = *plVar15;
  plVar15[-1] = 0x40149d;
  FUN_00410650();
  uVar13 = *plVar15;
  plVar15[-3] = 0x4014b1;
  (*DAT_0041b198)(plVar15[1],uVar13,extraout_RDX,&DAT_00447f60);
  plVar15[-3] = 0x4014c7;
  (*DAT_0041b1b0)();
  plVar15[1] = 1;
  uVar7 = plVar15[1];
  plVar15[1] = 2;
  DAT_0044200c = plVar15[1];
  DAT_00442000 = CONCAT44(DAT_00440958,(int)uVar7);
  DAT_00442018 = &DAT_00441000;
  DAT_00442020 = 0x1000;
  DAT_00442030 = FUN_0040ade0;
  DAT_00442038 = &DAT_00442000;
  DAT_00444004 = DAT_00440938;
  DAT_00444018 = &DAT_00443000;
  DAT_00444020 = 0x1000;
  DAT_00444028 = FUN_0040b050;
  DAT_00444038 = &DAT_00444000;
  plVar15[1] = 1;
  DAT_0044600c = plVar15[1];
  DAT_00446004 = DAT_00440958;
  DAT_00446018 = &DAT_00445000;
  DAT_00446020 = 0x1000;
  DAT_00446030 = FUN_0040ade0;
  DAT_00446038 = &DAT_00446000;
  plVar15[1] = uVar13;
  *plVar15 = 0x401577;
  uVar7 = FUN_004027c0();
  lVar19 = plVar15[1];
  plVar15[1] = lVar19 + 0x4b8;
  *plVar15 = 0x40158d;
  uVar7 = FUN_004027c0(uVar7,lVar19 + 0x4b8,500);
  lVar19 = plVar15[1];
  plVar15[1] = uVar7;
  *plVar15 = lVar19 + 0x1f8;
  plVar15[-1] = 0x40159f;
  FUN_00402140();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong FUN_004015b0(ulong param_1,ulong param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong extraout_RDX;
  undefined8 *puVar10;
  undefined (*pauVar11) [16];
  uint unaff_R15D;
  byte bVar12;
  longdouble in_ST0;
  longdouble lVar13;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  undefined8 local_d0;
  undefined local_c8 [8];
  undefined2 uStack_c0;
  char *local_b8 [6];
  undefined8 local_88;
  undefined8 local_80;
  undefined auStack_78 [8];
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  wchar16 *local_48;
  
  bVar12 = 0;
  pauVar11 = (undefined (*) [16])&DAT_00000008;
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
    iVar2 = FUN_00407fc0(param_1,param_2,&DAT_00417060);
    if (iVar2 == -1) {
      if (DAT_00446408 != 0) {
        FUN_0040f560(DAT_00446400 + -0x1000,DAT_004463f8);
        FUN_0040f560(DAT_00446408 + -0x1000,DAT_004463f8);
      }
      DAT_00446408 = FUN_004067c0(&DAT_004463f8);
      DAT_00446400 = FUN_004067c0(0);
      if ((DAT_00447fe8 < (int)param_1) &&
         (iVar2 = FUN_00406a10(*(undefined8 *)(param_2 + (long)DAT_00447fe8 * 8)), iVar2 == -1)) {
        puVar10 = (undefined8 *)(param_2 + (long)DAT_00447fe8 * 8);
        param_2 = 1;
        FUN_0040ad00(DAT_00442038,"%s:%d:%d: %s\n",*puVar10,DAT_00446498 + 1,DAT_00446494,
                     "error: failed to load game of life run length encoded (rle) file");
      }
      else {
        param_2 = (ulong)(DAT_0041c718 & 4);
        if ((DAT_0041c718 & 4) == 0) {
          FUN_00407100();
          pauVar11 = (undefined (*) [16])&local_88;
          FUN_004064d0();
          FUN_00410a20(DAT_0044649c,&DAT_004463a0);
          FUN_0041571a(&DAT_00417078,&DAT_00417078);
          FUN_00411a10(DAT_0044649c);
          lVar6 = FUN_004154c0(pauVar11,&DAT_004463a0,0x38);
          auStack_78[lVar6] = 1;
          auStack_78[DAT_00440a00] = 1;
          local_80._4_4_ =
               local_80._4_4_ & ~((uint)DAT_004409a0 | (uint)DAT_004409b0 | (uint)DAT_004409a8 | 8);
          local_80._0_4_ = ~((uint)DAT_004409d0 | _DAT_00440998) & (uint)local_80 | _DAT_00440990;
          local_88._0_4_ = ~(DAT_004409c8 | 0x1f8) & (uint)local_88 | _DAT_004409c0;
          FUN_00410a90(DAT_0044649c,DAT_004409e0,pauVar11);
          DAT_004464a2 = '\x01';
          FUN_0041571a(&DAT_0041707f,&DAT_0041707f);
          FUN_00411a10(DAT_0044649c);
          FUN_0040ed60(&LAB_00407080);
          puVar10 = &local_80;
          for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
            *(undefined4 *)puVar10 = 0;
            puVar10 = (undefined8 *)((long)puVar10 + (ulong)bVar12 * -8 + 4);
          }
          local_88 = &LAB_00406730;
          FUN_004114c0(2,pauVar11,0);
          puVar10 = &local_80;
          for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
            *(undefined4 *)puVar10 = 0;
            puVar10 = (undefined8 *)((long)puVar10 + (ulong)bVar12 * -8 + 4);
          }
          local_88 = &LAB_00406740;
          FUN_004114c0(0x1c,pauVar11,0);
          uVar3 = DAT_00446490;
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
        sVar1 = FUN_00402cd5(&local_88);
        if ((sVar1 == 0) ||
           (lVar6 = FUN_00402bff(0,L"apelife",L"Conway\'s Game of Life",0xcf0000,0x80000000,
                                 0x80000000,0xffffffff80000000,0xffffffff80000000,0,0,local_70,0),
           lVar6 == 0)) {
          uVar8 = FUN_00409da0(0,0,&DAT_0041873d);
          return uVar8;
        }
        uVar5 = FUN_00402c72(lVar6,0);
        FUN_00402bdf(uVar5,0x800,0,0);
        FUN_00402bdf(uVar5,0,0x20,L"&Open File...");
        FUN_00402bdf(uVar5,0,0x10,L"&About...");
        FUN_00402d3e(lVar6,1);
        while( true ) {
          uVar3 = FUN_00402c62(local_b8,0,0,0);
          param_2 = (ulong)uVar3;
          if (uVar3 == 0) break;
          FUN_00402d4e(local_b8);
          FUN_00402c1f(local_b8);
        }
      }
LAB_00401af5:
      return param_2 & 0xffffffff;
    }
    if (iVar2 != 0x68) {
      if (iVar2 < 0x69) {
        if (iVar2 == 0x4e) {
          DAT_004464a3 = '\x01';
          goto LAB_00401640;
        }
        if (iVar2 == 0x57) {
          DAT_004464a4 = 1;
          goto LAB_00401640;
        }
        if (iVar2 == 0x3f) {
          iVar2 = FUN_00406750(DAT_004408b8);
          goto LAB_004016f8;
        }
      }
      else {
        if (iVar2 == 0x77) {
          lVar6 = FUN_004145a0(DAT_00447fd8,0,0);
          if (lVar6 < 8) {
            lVar6 = 8;
          }
          DAT_00446448 = lVar6 + 7U & 0xfffffffffffffff8;
          goto LAB_00401640;
        }
LAB_004016f8:
        if (iVar2 == 0x7a) {
          DAT_00446440 = DAT_00446440 + 1;
          goto LAB_00401640;
        }
      }
      FUN_00406750(0x40);
      uVar8 = extraout_RDX;
LAB_00401f1b:
      if (unaff_R15D == 0x50) {
        if (DAT_004464a3 != '\0') {
LAB_00401f64:
          FUN_00407170((long)(int)uVar8,(long)(int)local_c8._0_4_,1);
          goto switchD_00401b1e_caseD_a;
        }
      }
      else {
        if ((int)unaff_R15D < 0x51) {
          if (unaff_R15D == 0x40) {
            if (DAT_004464a3 != '\0') {
LAB_00401bf5:
              FUN_00406570(1,0);
              FUN_00406570(1,0);
              goto switchD_00401b1e_caseD_e;
            }
          }
          else {
            if (unaff_R15D != 0x41) goto switchD_00401b1e_caseD_a;
            if (DAT_004464a3 == '\0') goto LAB_00401bf5;
          }
          FUN_00406570(0xffffffffffffffff,0);
          FUN_00406570(0xffffffffffffffff,0);
          goto switchD_00401b1e_caseD_10;
        }
        if (unaff_R15D != 0x51) goto switchD_00401b1e_caseD_a;
        if (DAT_004464a3 == '\0') goto LAB_00401f64;
      }
      FUN_00407170((long)(int)uVar8,(long)(int)local_c8._0_4_,0xffffffff);
switchD_00401b1e_caseD_a:
      do {
        uVar3 = DAT_00446490;
        if ((DAT_00446490 & 1) != 0) goto LAB_00401af5;
LAB_00401954:
        if ((uVar3 & 2) == 0) {
          lVar13 = in_ST0;
          if (DAT_004464a1 == '\0') {
LAB_004019cd:
            FUN_004078f0();
          }
          else {
            lVar13 = in_ST1;
            in_ST1 = in_ST2;
            in_ST2 = in_ST3;
            in_ST3 = in_ST4;
            in_ST4 = in_ST5;
            in_ST5 = in_ST6;
            (*DAT_0041c098)();
            in_ST6 = in_ST5;
            _local_c8 = in_ST0;
            if (_DAT_00446040 < in_ST0) {
              local_88 = (undefined *)((ulong)DAT_00440968 << 0x20);
              FUN_00408230(pauVar11,1,0);
              if ((local_88._6_2_ & (DAT_00440968 | _DAT_00440960)) == 0) {
                _DAT_00446040 = in_ST0 + (longdouble)0.04166666666666666;
                goto LAB_004019cd;
              }
            }
          }
        }
        else {
          FUN_00407100();
          DAT_00446490 = DAT_00446490 & 0xfffffffd;
          FUN_004078f0();
          lVar13 = in_ST0;
        }
        in_ST0 = lVar13;
        *pauVar11 = (undefined  [16])0x0;
        pauVar11[1] = (undefined  [16])0x0;
        lVar4 = FUN_00410f90(0,pauVar11,0x20);
        lVar6 = DAT_00446438;
        if (lVar4 == -1) goto LAB_00401b40;
        if ((char)local_88 < '!') {
          if ('\b' < (char)local_88) {
            switch((char)local_88) {
            case '\t':
            case ' ':
switchD_00401b1e_caseD_9:
              lVar4 = 0;
              if (0 < DAT_00446438) {
                do {
                  FUN_004060a0();
                  lVar4 = lVar4 + 1;
                } while (lVar4 != lVar6);
              }
            default:
              break;
            case '\x0e':
switchD_00401b1e_caseD_e:
              FUN_00406570(1,0);
              break;
            case '\x10':
switchD_00401b1e_caseD_10:
              FUN_00406570(0xffffffffffffffff,0);
              break;
            case '\x14':
              DAT_00446438 = DAT_00446438 + 1;
              break;
            case '\x16':
switchD_00401b1e_caseD_16:
              FUN_00406570(DAT_00446460 + -2,0);
              break;
            case '\x1b':
              goto switchD_00401b1e_caseD_1b;
            }
          }
          goto switchD_00401b1e_caseD_a;
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
          goto switchD_00401b1e_caseD_e;
        case 'k':
          goto switchD_00401b1e_caseD_10;
        case 'q':
          lVar6 = 0;
          goto LAB_00401cdb;
        case 's':
          goto switchD_00401b1e_caseD_9;
        }
      } while( true );
    }
    lVar6 = FUN_004145a0(DAT_00447fd8,0,0);
    if (lVar6 < 8) {
      lVar6 = 8;
    }
    DAT_00446450 = lVar6 + 7U & 0xfffffffffffffff8;
  } while( true );
LAB_00401b40:
  lVar6 = (long)DAT_00448020;
  if (lVar6 != _DAT_00440818) {
LAB_00401cdb:
    FUN_0040286f(lVar6);
switchD_00401b36_caseD_52:
    FUN_0041561f(DAT_00446408,0,(long)(DAT_00446450 * DAT_00446448) >> 3);
  }
  goto switchD_00401b1e_caseD_a;
switchD_00401b1e_caseD_1b:
  if (local_88._1_1_ == 't') {
    DAT_00446438 = DAT_00446438 + -1;
    if (DAT_00446438 < 1) {
      DAT_00446438 = 1;
    }
    goto switchD_00401b1e_caseD_a;
  }
  if (local_88._1_1_ != 'v') {
    if (local_88._1_1_ != '[') goto switchD_00401b1e_caseD_a;
    switch(local_88._2_1_) {
    case 0x35:
      if (local_88._3_1_ != '~') goto switchD_00401b1e_caseD_a;
      break;
    case 0x36:
      if (local_88._3_1_ == '~') goto switchD_00401b1e_caseD_16;
    default:
      goto switchD_00401b1e_caseD_a;
    case 0x3c:
      local_b8[0] = (char *)((long)&local_88 + 3);
      uVar3 = FUN_004145a0(local_b8[0],local_b8,10);
      lVar6 = DAT_00446458;
      if (*local_b8[0] == ';') {
        local_b8[0] = local_b8[0] + 1;
      }
      _local_c8 = (longdouble)CONCAT28(uStack_c0,DAT_00446458);
      lVar7 = FUN_004145a0(local_b8[0],local_b8,10);
      lVar4 = DAT_00446460;
      if (lVar7 < 1) {
        lVar7 = 1;
      }
      if (lVar6 < lVar7) {
        lVar7 = lVar6;
      }
      iVar2 = (int)lVar7 + -1;
      _local_c8 = (longdouble)CONCAT64(stack0xffffffffffffff3c,iVar2);
      if (*local_b8[0] == ';') {
        local_b8[0] = local_b8[0] + 1;
      }
      lVar6 = FUN_004145a0(local_b8[0],local_b8,10);
      if (lVar6 < 1) {
        lVar6 = 1;
      }
      if (lVar4 < lVar6) {
        lVar6 = lVar4;
      }
      uVar9 = (int)lVar6 - 1;
      uVar8 = (ulong)uVar9;
      unaff_R15D = (uint)(*local_b8[0] == 'm') << 2 | uVar3;
      if ((int)unaff_R15D < 0x23) {
        switch(unaff_R15D) {
        case 0:
          FUN_004065d0((long)(int)uVar9,(long)iVar2);
          break;
        case 2:
          DAT_00446428 = (long)iVar2;
          DAT_00446430 = (long)(int)uVar9;
          DAT_004464a1 = '\x01';
          _DAT_00446420 = DAT_00446480;
          _DAT_00446418 = DAT_00446470;
          break;
        case 4:
        case 6:
          DAT_004464a1 = '\0';
          break;
        case 0x20:
          FUN_00406e60((long)(int)uVar9,(long)iVar2);
          break;
        case 0x22:
          FUN_004066a0((long)(int)uVar9,(long)iVar2);
        }
        goto switchD_00401b1e_caseD_a;
      }
      goto LAB_00401f1b;
    case 0x41:
      goto switchD_00401b1e_caseD_10;
    case 0x42:
      goto switchD_00401b1e_caseD_e;
    case 0x43:
      FUN_00406570(0,1);
      goto switchD_00401b1e_caseD_a;
    case 0x44:
      FUN_00406570(0,0xffffffffffffffff);
      goto switchD_00401b1e_caseD_a;
    }
  }
  FUN_00406570(2 - DAT_00446460,0);
  goto switchD_00401b1e_caseD_a;
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
    DAT_004466c0 = _DAT_0041c000 & 0xfffffffffffffff8 | 8;
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
  
  do {
    uVar4 = param_3 * 2 + 2;
    uVar7 = param_3 * 2 + 1;
    if ((uVar7 < param_1) &&
       (iVar5 = *(int *)(param_2 + param_3 * 8), piVar1 = (int *)(param_2 + uVar7 * 8),
       *piVar1 != iVar5 && iVar5 <= *piVar1)) {
      if (uVar4 < param_1) goto LAB_004022f3;
    }
    else {
      uVar7 = param_3;
      if (param_1 <= uVar4) {
        return;
      }
LAB_004022f3:
      iVar5 = *(int *)(param_2 + uVar7 * 8);
      piVar1 = (int *)(param_2 + uVar4 * 8);
      if (*piVar1 != iVar5 && iVar5 <= *piVar1) {
        uVar7 = uVar4;
      }
    }
    if (param_3 == uVar7) {
      return;
    }
    puVar2 = (undefined8 *)(param_2 + param_3 * 8);
    puVar3 = (undefined8 *)(param_2 + uVar7 * 8);
    uVar6 = *puVar2;
    *puVar2 = *puVar3;
    *puVar3 = uVar6;
    param_3 = uVar7;
  } while( true );
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
      uVar4 = uVar4 | -1L << (bVar3 & 0x3f);
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
                            (ulong)(byte)((DAT_0041c038._5_1_ & 2) != 0 | !in_ZF << 1)) + param_3;
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



void FUN_00402973(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_00448024 == '\0') {
    DAT_00448024 = '\x01';
    iVar2 = FUN_00410b10(0);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_0040a090(2,0);
    FUN_0040286f(DAT_004408b0);
  }
                    // WARNING: Subroutine does not return
  FUN_00401114();
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



void FUN_00402a11(void)

{
  do {
    invalidInstructionException();
  } while( true );
}



void thunk_FUN_00401114(void)

{
                    // WARNING: Subroutine does not return
  FUN_00401114();
}



void thunk_FUN_00401114(void)

{
                    // WARNING: Subroutine does not return
  FUN_00401114();
}



void thunk_FUN_00401114(void)

{
                    // WARNING: Subroutine does not return
  FUN_00401114();
}



void thunk_FUN_00401114(void)

{
                    // WARNING: Subroutine does not return
  FUN_00401114();
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
  DAT_00448020 = DAT_00440860;
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



void FUN_00402bdf(void)

{
  FUN_0040607a();
  return;
}



void FUN_00402bef(void)

{
  FUN_0040607a();
  return;
}



void FUN_00402bff(void)

{
  FUN_00406064();
  return;
}



void FUN_00402c0f(void)

{
  FUN_0040607a();
  return;
}



void FUN_00402c1f(void)

{
  (*DAT_0041b258)();
  return;
}



void FUN_00402c32(void)

{
  FUN_0040607a();
  return;
}



void FUN_00402c42(void)

{
  FUN_0040607a();
  return;
}



void FUN_00402c52(void)

{
  (*DAT_0041b270)();
  return;
}



void FUN_00402c62(void)

{
  FUN_0040607a();
  return;
}



void FUN_00402c72(void)

{
  FUN_0040607a();
  return;
}



void FUN_00402c82(void)

{
  FUN_0040607a();
  return;
}



void FUN_00402c92(void)

{
  FUN_0040607a();
  return;
}



void FUN_00402ca2(void)

{
  FUN_0040607a();
  return;
}



void FUN_00402cb2(void)

{
  (*DAT_0041b2a0)();
  return;
}



void FUN_00402cc5(void)

{
  FUN_0040607a();
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



void FUN_00402cf8(void)

{
  FUN_0040607a();
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



void FUN_00402d2e(void)

{
  FUN_0040607a();
  return;
}



void FUN_00402d3e(void)

{
  FUN_0040607a();
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



void FUN_00402d71(void)

{
  FUN_0040607a();
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



void FUN_00402dba(void)

{
  FUN_0040607a();
  return;
}



void FUN_00402dca(void)

{
  (*DAT_0041b070)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00402de0(long param_1,ulong param_2,undefined4 param_3)

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



ulong FUN_00402f50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 local_13c [4];
  uint local_12c;
  undefined local_128 [264];
  
  local_12c = 0;
  local_13c[0] = param_4;
  uVar2 = FUN_00403110(local_128);
  iVar1 = FUN_004033cc(*param_1,local_128,uVar2,&local_12c,local_13c,param_5,param_6,0,0);
  if (iVar1 != -1) {
    return (ulong)local_12c;
  }
  uVar3 = FUN_00403070();
  return uVar3;
}



ulong FUN_00402fe0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint local_12c;
  undefined local_128 [256];
  
  uVar2 = FUN_00403110(local_128);
  iVar1 = FUN_004033dc(*param_1,local_128,uVar2,&local_12c,param_4,param_5,param_6,0,0);
  if (iVar1 != -1) {
    return (ulong)local_12c;
  }
  uVar3 = FUN_00403070();
  return uVar3;
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
switchD_004031de_caseD_2:
      return DAT_00440860;
    default:
      return param_1;
    case 8:
    case 0x44:
      goto switchD_004031de_caseD_8;
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
switchD_004031de_caseD_33:
      return DAT_004407f0;
    case 0x34:
      return DAT_004407b8;
    case 0x36:
    case 0x3a:
switchD_004031de_caseD_36:
      return DAT_00440850;
    case 0x3b:
    case 0x40:
switchD_004031de_caseD_3b:
      return DAT_004407e8;
    case 0x47:
      return DAT_004407c8;
    case 0x79:
      return DAT_004408a8;
    case 0x7a:
      return DAT_00440800;
    case 0x7e:
switchD_004031de_caseD_7e:
      return DAT_00440870;
    case 0x91:
      return DAT_00440880;
    case 0xe9:
      goto switchD_004031de_caseD_e9;
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
switchD_004031de_caseD_e9:
      return DAT_004408a0;
    default:
      return param_1;
    case 0x2753:
      goto switchD_004031de_caseD_8;
    case 0x276b:
    case 0x276d:
      goto switchD_004031de_caseD_36;
    case 0x276c:
      goto switchD_004031de_caseD_7e;
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
      goto switchD_004031de_caseD_2;
    default:
      return param_1;
    case 0x4be:
      return DAT_004407c0;
    case 0x4c9:
      goto switchD_004031de_caseD_33;
    case 0x4ca:
      goto switchD_004031de_caseD_e9;
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
      goto switchD_004031de_caseD_3b;
    }
  }
switchD_004031de_caseD_8:
  return DAT_00440868;
}



void FUN_0040339c(void)

{
  (*DAT_0041b2f8)();
  return;
}



void FUN_004033ac(void)

{
  (*DAT_0041b300)();
  return;
}



void FUN_004033bc(void)

{
  FUN_0040607a();
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



void FUN_004033ec(void)

{
  FUN_0040607a();
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
  int aiStack_d4 [3];
  undefined2 local_c8;
  undefined uStack_c6;
  undefined5 uStack_c5;
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
        uStack_c6 = 0;
        local_c8 = 1;
        puVar8 = local_58 + lVar10;
        puVar9 = &local_e0;
        if (*(char *)((long)&local_c8 + lVar10) != '\0') {
          puVar8 = &local_e0;
          puVar9 = local_58 + lVar10;
        }
        iVar6 = FUN_00410830();
        aiStack_d4[lVar10] = iVar6;
        if (iVar6 != -1) {
          iVar7 = FUN_00405f18(puVar9,puVar8,&DAT_00418920,0);
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
        lVar11 = CONCAT53(uStack_c5,CONCAT12(uStack_c6,local_c8));
      }
    }
    lVar10 = 0;
    do {
      lVar3 = DAT_00447b50;
      if (*(int *)(param_2 + lVar10 * 4) == -1) {
        iVar6 = aiStack_d4[lVar10];
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



void FUN_004036a0(undefined8 param_1,long param_2,ulong param_3,code *param_4)

{
  ulong uVar1;
  uint local_3c [3];
  
  if (param_3 != 0) {
    uVar1 = 0;
    do {
      (*param_4)(param_1,param_2 + uVar1,param_3 - uVar1,local_3c,0);
      uVar1 = uVar1 + local_3c[0];
    } while (uVar1 < param_3);
    return;
  }
  return;
}



void FUN_00403710(void)

{
  FUN_004036a0();
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
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  uint local_58;
  undefined2 local_54 [2];
  long local_50;
  ulong local_48;
  ulong local_40 [2];
  
  lVar9 = *param_1;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  if (lVar9 == 0) {
    FUN_00402b21();
    return local_50;
  }
  do {
    lVar6 = FUN_00414ba0(lVar9,&DAT_0041882c);
    if (*(char *)(lVar9 + lVar6) == '\0') {
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
      lVar9 = *param_1;
      bVar1 = true;
LAB_00403db6:
      lVar6 = 0;
      while( true ) {
        pcVar7 = (char *)(lVar9 + lVar6);
        cVar2 = *pcVar7;
        if (bVar1) {
          if (cVar2 == '\\') {
            iVar3 = (int)lVar6;
            do {
              iVar5 = (int)lVar6;
              lVar6 = lVar6 + 1;
              cVar2 = *(char *)(lVar9 + lVar6);
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
          pcVar7 = (char *)(*param_1 + lVar6);
          cVar2 = *pcVar7;
        }
        if (cVar2 == '\0') break;
        if (cVar2 < '\0') {
          uVar4 = FUN_00414d40(pcVar7,&local_58);
          lVar6 = lVar6 + (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f));
          if (local_58 < 0xd800) goto LAB_00403e5e;
          uVar4 = FUN_004149f0(local_54,2);
          lVar9 = (long)(int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f));
          if (local_40[0] <= local_48 + lVar9) goto LAB_00403e76;
        }
        else {
          lVar6 = lVar6 + 1;
          local_58 = (int)cVar2;
LAB_00403e5e:
          lVar9 = 1;
          local_54[0] = (undefined2)local_58;
          if (local_40[0] <= local_48 + 1) {
LAB_00403e76:
            cVar2 = FUN_0040f180(&local_50,local_40,2,lVar9);
            if (cVar2 == '\0') goto LAB_00403f78;
          }
        }
        FUN_004154c0(local_50 + local_48 * 2,local_54,lVar9 * 2);
        uVar8 = lVar9 + local_48;
        bVar10 = local_48 == 0xffffffffffffffff;
        local_48 = uVar8;
        if (bVar10) goto LAB_00403f78;
        lVar9 = *param_1;
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
      lVar9 = *param_1;
    } while (lVar9 == 0);
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



void FUN_00404670(undefined8 param_1,ulong param_2,undefined4 param_3,undefined4 param_4,int param_5
                 )

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
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
        param_1 = param_1 + auVar4._8_8_;
        param_2 = param_2 + auVar4._0_8_ + 1;
        lVar2 = lVar2 + ~auVar4._0_8_;
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

undefined4 FUN_00404d10(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
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
    uVar3 = (*DAT_0041b138)();
    iVar1 = FUN_00405ee5(uVar3,0x2000e,&local_458);
    if (iVar1 != 0) {
      iVar1 = FUN_00405eb5(local_458,2,&local_450);
      if (iVar1 != 0) {
        iVar1 = FUN_00405ea5(local_418,local_450,local_46c,&local_448,local_438,&local_45c,
                             &local_460,&local_468);
        if (iVar1 != 0) {
          if (local_468 != 0) {
            uVar2 = 0;
            goto LAB_00404e00;
          }
          if (local_46c == _DAT_00440770) {
            uVar2 = 0;
            goto LAB_00404e00;
          }
        }
      }
    }
  }
  uVar2 = FUN_004162a0();
LAB_00404e00:
  FUN_00410160(local_450 & 0xffffffff);
  FUN_00410160(local_458 & 0xffffffff);
  return uVar2;
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



undefined8 FUN_004051d0(undefined4 param_1,short *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88 [3];
  short local_7a;
  short local_78;
  short local_76;
  short local_74;
  
  puVar6 = &local_94;
  local_90 = 1;
  local_94 = param_1;
  cVar2 = FUN_00410c50(param_1,1);
  if (cVar2 != '\0') goto LAB_00405243;
  do {
    cVar2 = FUN_00410c50(param_1,4);
    if (cVar2 != '\0') goto LAB_00405243;
    FUN_00402acd();
    while( true ) {
      puVar6 = puVar6 + 1;
      if (local_88 == puVar6) {
        return 0xffffffff;
      }
      param_1 = *puVar6;
      cVar2 = FUN_00410c50(param_1,1);
      if (cVar2 == '\0') break;
LAB_00405243:
      iVar3 = (*DAT_0041b120)();
      if (iVar3 == 0) {
        FUN_00402bb4();
      }
      else {
        lVar4 = FUN_0041561f(local_88,0,0x60);
        local_88[0] = 0x60;
        uVar5 = FUN_00405f4b(*(undefined8 *)(DAT_00447b50 + lVar4 * 0x18),local_88);
        if ((int)uVar5 != 0) {
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
          return uVar5;
        }
        FUN_004162a0();
      }
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long FUN_004053a0(undefined8 param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  undefined local_21c [4];
  undefined local_218 [504];
  
  uVar5 = param_2 & 0xffffffff;
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
                         (uVar4 & 0xf00000) << 8 | uVar4 & 0xf000100 | 0x2080,0);
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



ulong FUN_004056c0(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long in_GS_OFFSET;
  uint local_4c;
  undefined local_48 [40];
  
  pcVar1 = DAT_0041b1d0;
  if (param_3 != 0) {
    do {
      if (*(long *)(param_2 + 8) != 0) {
        FUN_00405e00(param_4,local_48);
        goto LAB_00405717;
      }
      param_2 = param_2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_00405e00(param_4,local_48);
LAB_00405717:
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    return (ulong)local_4c;
  }
  if (*(int *)(in_GS_OFFSET + 0x68) != 0x6d) {
    uVar3 = FUN_004162a0();
    return uVar3;
  }
  return 0;
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



// WARNING: Removing unreachable block (ram,0x0040594a)
// WARNING: Removing unreachable block (ram,0x0040594f)
// WARNING: Removing unreachable block (ram,0x00405959)
// WARNING: Removing unreachable block (ram,0x0040595e)
// WARNING: Removing unreachable block (ram,0x004059c9)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00405870(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  int local_338 [64];
  undefined8 local_238 [65];
  
  iVar3 = (int)param_1;
  if (iVar3 == -1) {
    uVar9 = (ulong)((int)DAT_00447b48 - 1);
    if ((int)DAT_00447b48 != 0) {
      puVar5 = DAT_00447b50 + uVar9 * 3;
      uVar8 = 0;
      do {
        uVar7 = uVar8;
        if (*(int *)(puVar5 + 2) == 3) {
          uVar1 = *puVar5;
          uVar6 = (int)uVar8 + 1;
          uVar7 = (ulong)uVar6;
          local_338[uVar8] = (int)uVar9;
          local_238[uVar8] = uVar1;
          if (uVar6 == 0x40) goto LAB_004058d4;
        }
        uVar9 = (ulong)((int)uVar9 - 1);
        bVar10 = DAT_00447b50 != puVar5;
        puVar5 = puVar5 + -3;
        uVar8 = uVar7;
      } while (bVar10);
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
      uVar9 = (long)param_3 & _DAT_00440a08;
      do {
        if (uVar9 == 0) {
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
      return uVar4;
    }
  }
  uVar4 = FUN_00402ae2();
  return uVar4;
}



ulong FUN_00405ac0(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint local_4c;
  undefined local_48 [32];
  
  pcVar1 = DAT_0041b228;
  if (param_3 != 0) {
    do {
      if (*(long *)(param_2 + 8) != 0) {
        FUN_00405e00(param_4,local_48);
        goto LAB_00405b23;
      }
      param_2 = param_2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  param_3 = 0;
  FUN_00405e00(param_4,local_48);
LAB_00405b23:
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    uVar3 = FUN_004162a0();
    return uVar3;
  }
  if (local_4c == 0) {
    lVar4 = param_3 * 0x10 + param_2;
    do {
      param_2 = param_2 + 0x10;
    } while (lVar4 != param_2);
  }
  (*DAT_0041b100)();
  return (ulong)local_4c;
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
  
  iVar2 = FUN_00405f6e(param_1,&local_58);
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
  *(undefined (*) [16])(param_2 + 9) = auVar5;
  auVar5 = FUN_004124a0(local_44);
  *(undefined (*) [16])(param_2 + 0xb) = auVar5;
  auVar5 = FUN_004124a0(local_54);
  param_2[7] = 0x1000;
  *(undefined (*) [16])(param_2 + 0xd) = auVar5;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

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
  uVar4 = (*_DAT_0041c0a0)();
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
  undefined8 in_RAX;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  long in_GS_OFFSET;
  int local_20;
  int local_1c;
  
  uVar4 = rdtsc();
  uVar4 = (ulong)*(uint *)(in_GS_OFFSET + 0x40) << 0x11 ^ (ulong)*(uint *)(in_GS_OFFSET + 0x48) ^
          (uVar4 & 0xffffffff00000000 | CONCAT44((int)((ulong)in_RAX >> 0x20),(int)uVar4));
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



void FUN_00405eb5(void)

{
  FUN_0040607a();
  return;
}



void FUN_00405ec5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_0041b050)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00405ed5(void)

{
  FUN_0040607a();
  return;
}



void FUN_00405ee5(void)

{
  FUN_0040607a();
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



void FUN_00405f18(void)

{
  FUN_0040607a();
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



void FUN_00405f4b(void)

{
  FUN_0040607a();
  return;
}



void FUN_00405f5b(void)

{
  (*DAT_0041b158)();
  return;
}



void FUN_00405f6e(void)

{
  FUN_0040607a();
  return;
}



void FUN_00405f7e(void)

{
  FUN_0040607a();
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



void FUN_00405fb1(void)

{
  FUN_0040607a();
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



void FUN_00405fe4(void)

{
  FUN_0040607a();
  return;
}



void FUN_00405ff4(void)

{
  FUN_0040607a();
  return;
}



void FUN_00406004(void)

{
  FUN_0040607a();
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
  (*auVar1._0_8_)(in_RCX,auVar1._8_8_,in_R8,in_R9);
  FUN_004162c8(local_88);
  return;
}



void FUN_00406064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *in_RAX;
  
  (*in_RAX)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_0040607a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *in_RAX;
  
  (*in_RAX)(param_1,param_2,param_2,param_1,param_3,param_4);
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
  DAT_00446400 = DAT_00446408;
  DAT_00446410 = DAT_00446410 + 1;
  DAT_00446408 = lVar2;
  return;
}



void FUN_00406480(long param_1,long param_2)

{
  ulong *puVar1;
  byte bVar2;
  
  bVar2 = (char)param_1 * '\b' & 0x38U | (byte)param_2 & 7;
  puVar1 = (ulong *)(DAT_00446408 + ((DAT_00446448 >> 3) * (param_1 >> 3) + (param_2 >> 3)) * 8);
  *puVar1 = *puVar1 & (-2L << bVar2 | 0xfffffffffffffffeU >> 0x40 - bVar2);
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
  DAT_00446478 = (lVar1 << (bVar2 & 0x3f)) + DAT_00446480;
  DAT_00446468 = DAT_00446470 + (DAT_00446458 << (bVar2 & 0x3f));
  return;
}



void FUN_004065d0(long param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  DAT_004464a1 = 1;
  DAT_004464a5 = 0;
  lVar6 = (param_1 << ((DAT_00446440 != 0) + (byte)DAT_00446440 & 0x3f)) + DAT_00446480;
  DAT_00446428 = param_2;
  DAT_00446430 = param_1;
  if ((((-1 < lVar6) &&
       (lVar5 = (param_2 << ((byte)DAT_00446440 & 0x3f)) + DAT_00446470, lVar6 < DAT_00446450)) &&
      (-1 < lVar5)) && (lVar5 < DAT_00446448)) {
    puVar1 = (ulong *)(DAT_00446408 + ((DAT_00446448 >> 3) * (lVar6 >> 3) + (lVar5 >> 3)) * 8);
    uVar2 = *puVar1;
    uVar4 = (int)lVar6 * 8 & 0x38U | (uint)lVar5 & 7;
    uVar3 = uVar2 >> (sbyte)uVar4;
    DAT_004464a5 = (byte)uVar3 & 1;
    if ((uVar3 & 1) != 0) {
      FUN_00406480();
      return;
    }
    *puVar1 = uVar2 | 1L << (ulong)uVar4;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004066a0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = DAT_00446430 - param_1 << ((byte)DAT_00446440 & 0x3f);
  lVar3 = DAT_00446428 - param_2 << ((byte)DAT_00446440 & 0x3f);
  if (DAT_00446440 != 0) {
    lVar1 = lVar1 * 2;
  }
  if (DAT_004464a3 != '\0') {
    lVar1 = -lVar1;
    lVar3 = -lVar3;
  }
  lVar4 = DAT_00446478 - DAT_00446480;
  lVar2 = DAT_00446468 - DAT_00446470;
  DAT_00446480 = lVar1 + _DAT_00446420;
  DAT_00446470 = lVar3 + _DAT_00446418;
  DAT_00446478 = lVar1 + _DAT_00446420 + lVar4;
  DAT_00446468 = lVar3 + _DAT_00446418 + lVar2;
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
  FUN_00411a10(DAT_0044649c);
  FUN_0040286f();
  uVar3 = (DAT_00446450 * DAT_00446448 >> 3) + 0xfffU & 0xfffffffffffff000;
  lVar1 = uVar3 + 0x1000;
  uVar3 = uVar3 + 0x11fff & 0xffffffffffff0000;
  lVar2 = FUN_0040f370(0,uVar3,3,DAT_004408c8 | 2,0xffffffff,0);
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
  lVar2 = FUN_0040f370(0,uVar3,3,DAT_004408c8 | 2,0xffffffff,0);
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
              *puVar1 = *puVar1 | 1L << ((char)lVar8 * '\b' & 0x38U | (byte)lVar13 & 7);
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
  lVar11 = DAT_00446408;
  DAT_00446408 = DAT_00446400;
  DAT_00446400 = lVar11;
  return 0xffffffff;
}



void FUN_00406d30(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  undefined8 *puVar13;
  long lVar14;
  
  uVar10 = DAT_00446480;
  uVar9 = DAT_00446478;
  uVar8 = DAT_00446470;
  uVar7 = DAT_00446468;
  lVar6 = DAT_00446450;
  lVar5 = DAT_00446448;
  uVar4 = DAT_00446440;
  uVar3 = DAT_00446438;
  lVar11 = DAT_00446448 * DAT_00446450 >> 6;
  if (lVar11 < 1) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    uVar12 = DAT_0041c020 & 0x800000;
    puVar1 = DAT_00446408 + lVar11;
    puVar13 = DAT_00446408;
    do {
      while (uVar2 = *puVar13, uVar12 == 0) {
        puVar13 = puVar13 + 1;
        lVar11 = FUN_0040ecb0();
        lVar14 = lVar14 + lVar11;
        if (puVar1 == puVar13) goto LAB_00406e06;
      }
      puVar13 = puVar13 + 1;
      lVar14 = lVar14 + POPCOUNT(uVar2);
    } while (puVar1 != puVar13);
  }
LAB_00406e06:
  FUN_00413ac0(&DAT_00446260,0x100,&DAT_00417230,&DAT_00446360,DAT_00446410,lVar14,uVar3,uVar4,lVar6
               ,lVar5,uVar8,uVar10,uVar7,uVar9);
  return;
}



void FUN_00406e60(long param_1,long param_2)

{
  ulong *puVar1;
  byte bVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = DAT_00446470;
  if ((DAT_00446430 != param_1) || (DAT_00446428 != param_2)) {
    bVar2 = (byte)DAT_00446440;
    bVar4 = (DAT_00446440 != 0) + bVar2;
    lVar6 = (param_1 << (bVar4 & 0x3f)) + DAT_00446480;
    DAT_00446428 = param_2;
    DAT_00446430 = param_1;
    uVar3 = FUN_00412150();
    lVar6 = (~(-1L << (bVar4 & 0x3f)) & uVar3) + lVar6;
    uVar3 = FUN_00412150();
    if (-1 < lVar6) {
      lVar5 = lVar5 + (param_2 << (bVar2 & 0x3f)) + (~(-1L << (bVar2 & 0x3f)) & uVar3);
      if (((lVar6 < DAT_00446450) && (-1 < lVar5)) && (lVar5 < DAT_00446448)) {
        if (DAT_004464a5 != '\0') {
          FUN_00406480(lVar6);
          return;
        }
        puVar1 = (ulong *)(DAT_00446408 + ((DAT_00446448 >> 3) * (lVar6 >> 3) + (lVar5 >> 3)) * 8);
        *puVar1 = *puVar1 | 1L << ((char)lVar6 * '\b' & 0x38U | (byte)lVar5 & 7);
      }
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
  DAT_00446468 = (ulong)local_e + DAT_00446470;
  DAT_00446460 = (long)(int)(local_10 - 1);
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
  undefined8 local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  uint local_88;
  uint uStack_84;
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
      uStack_84 = uVar13 & 0xffff;
      local_80 = local_88 + 1;
      local_7c = uStack_84 + 1;
      FUN_00402cc5(param_1,&local_88,0,1);
      return 0;
    }
    if (param_2 == 0xf) {
      FUN_00402bef(param_1,&local_88);
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
      uVar4 = FUN_00402d81(CONCAT44(uStack_84,local_88));
      uVar5 = FUN_00402d71(CONCAT44(uStack_84,local_88),local_a0,local_9c);
      FUN_00402dba(uVar4,uVar5);
      FUN_00402c42(uVar4,&local_a8,0xb);
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
      FUN_00402d61(CONCAT44(uStack_84,local_88),iVar1,iVar8,local_a0,local_9c,uVar4,0,0,0xcc0020);
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
    lVar2 = FUN_0040b6fb(lVar20 * lVar11,1);
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
          FUN_004082b0(lVar20,lVar11,lVar2,lVar18,lVar8);
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
                FUN_004068a0(".",1);
              }
              else {
                bVar6 = (byte)(undefined4)DAT_00446440;
                lVar10 = ((long)(uVar7 - uVar21) >> (bVar6 & 0x3f)) + lVar2;
                bVar5 = *(byte *)(lVar10 + ((long)(uVar19 - uVar23) >> (bVar6 & 0x3f)) * lVar11);
                uVar13 = (uint)bVar5;
                if ((1L << (bVar6 & 0x3f)) + uVar19 < DAT_00446478) {
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
                  FUN_004068a0(" ",1);
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
                  FUN_004068a0(&DAT_00417050,3);
                }
              }
              bVar5 = (byte)(undefined4)DAT_00446440;
              uVar7 = uVar7 + (1L << (bVar5 & 0x3f));
            } while ((long)uVar7 < (long)DAT_00446468);
          }
          else {
            bVar5 = (byte)(undefined4)DAT_00446440;
          }
          uVar19 = uVar19 + (2L << (bVar5 & 0x3f));
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
        _DAT_00447fe4 = 0x2d;
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



void FUN_00408230(void)

{
  if (((byte)DAT_0041c718 & 4) == 0) {
    FUN_004123c0();
    return;
  }
  FUN_00402de0();
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


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

byte * FUN_004097e0(ulong param_1,byte *param_2,undefined *param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  undefined auVar13 [32];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [20];
  long lVar19;
  undefined auVar20 [24];
  undefined auVar21 [24];
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined4 *puVar27;
  byte *pbVar28;
  ulong uVar29;
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined local_128;
  undefined uStack_127;
  undefined uStack_126;
  undefined uStack_125;
  undefined uStack_124;
  undefined uStack_123;
  undefined uStack_122;
  undefined uStack_121;
  undefined uStack_120;
  undefined uStack_11f;
  undefined uStack_11e;
  undefined uStack_11d;
  undefined uStack_11c;
  undefined uStack_11b;
  undefined uStack_11a;
  undefined uStack_119;
  undefined local_118;
  undefined uStack_117;
  undefined uStack_116;
  undefined uStack_115;
  undefined uStack_114;
  undefined uStack_113;
  undefined uStack_112;
  undefined uStack_111;
  undefined uStack_110;
  undefined uStack_10f;
  undefined uStack_10e;
  undefined uStack_10d;
  undefined uStack_10c;
  undefined uStack_10b;
  undefined uStack_10a;
  undefined uStack_109;
  undefined local_108;
  undefined uStack_107;
  undefined uStack_106;
  undefined uStack_105;
  undefined uStack_104;
  undefined uStack_103;
  undefined uStack_102;
  undefined uStack_101;
  undefined uStack_100;
  undefined uStack_ff;
  undefined uStack_fe;
  undefined uStack_fd;
  undefined uStack_fc;
  undefined uStack_fb;
  undefined uStack_fa;
  undefined uStack_f9;
  undefined local_f8;
  undefined uStack_f7;
  undefined uStack_f6;
  undefined uStack_f5;
  undefined uStack_f4;
  undefined uStack_f3;
  undefined uStack_f2;
  undefined uStack_f1;
  undefined uStack_f0;
  undefined uStack_ef;
  undefined uStack_ee;
  undefined uStack_ed;
  undefined uStack_ec;
  undefined uStack_eb;
  undefined uStack_ea;
  undefined uStack_e9;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined local_b8 [16];
  undefined local_a8 [16];
  byte local_98;
  byte bStack_97;
  byte bStack_96;
  byte bStack_95;
  byte bStack_94;
  byte bStack_93;
  byte bStack_92;
  byte bStack_91;
  char cStack_90;
  char cStack_8f;
  char cStack_8e;
  char cStack_8d;
  char cStack_8c;
  char cStack_8b;
  char cStack_8a;
  char cStack_89;
  undefined local_88 [16];
  undefined local_78 [4];
  short sStack_74;
  short sStack_72;
  short sStack_70;
  short sStack_6e;
  short sStack_6c;
  short sStack_6a;
  undefined local_68 [4];
  short sStack_64;
  short sStack_62;
  short sStack_60;
  short sStack_5e;
  short sStack_5c;
  short sStack_5a;
  undefined local_58 [4];
  short sStack_54;
  short sStack_52;
  short sStack_50;
  short sStack_4e;
  short sStack_4c;
  short sStack_4a;
  undefined local_48 [4];
  short sStack_44;
  short sStack_42;
  short sStack_40;
  short sStack_3e;
  short sStack_3c;
  short sStack_3a;
  
  local_128 = *param_3;
  uStack_127 = param_3[1];
  local_118 = param_3[2];
  uStack_117 = param_3[3];
  local_108 = param_3[4];
  uStack_107 = param_3[5];
  local_f8 = param_3[6];
  uStack_f7 = param_3[7];
  if (7 < param_1) {
    pbVar28 = param_2 + (param_1 - 1);
    puVar27 = &local_d8;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = CONCAT71(0,*param_2);
    auVar31 = auVar31 * ZEXT816(0x101010101010101);
    local_e8 = auVar31._0_4_;
    uStack_e4 = auVar31._4_4_;
    uStack_e0 = auVar31._8_8_ + CONCAT71(0,*param_2) * 0x101010101010101;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = CONCAT71(0,*pbVar28);
    auVar3 = auVar3 * ZEXT816(0x101010101010101);
    local_d8 = auVar3._0_4_;
    uStack_d4 = auVar3._4_4_;
    uStack_d0 = auVar3._8_8_ + CONCAT71(0,*pbVar28) * 0x101010101010101;
    uVar29 = 0x10;
    if (param_1 < 0x11) {
      uVar29 = param_1;
    }
    auVar31 = _DAT_00418700;
    uStack_126 = local_128;
    uStack_125 = uStack_127;
    uStack_124 = local_128;
    uStack_123 = uStack_127;
    uStack_122 = local_128;
    uStack_121 = uStack_127;
    uStack_120 = local_128;
    uStack_11f = uStack_127;
    uStack_11e = local_128;
    uStack_11d = uStack_127;
    uStack_11c = local_128;
    uStack_11b = uStack_127;
    uStack_11a = local_128;
    uStack_119 = uStack_127;
    uStack_116 = local_118;
    uStack_115 = uStack_117;
    uStack_114 = local_118;
    uStack_113 = uStack_117;
    uStack_112 = local_118;
    uStack_111 = uStack_117;
    uStack_110 = local_118;
    uStack_10f = uStack_117;
    uStack_10e = local_118;
    uStack_10d = uStack_117;
    uStack_10c = local_118;
    uStack_10b = uStack_117;
    uStack_10a = local_118;
    uStack_109 = uStack_117;
    uStack_106 = local_108;
    uStack_105 = uStack_107;
    uStack_104 = local_108;
    uStack_103 = uStack_107;
    uStack_102 = local_108;
    uStack_101 = uStack_107;
    uStack_100 = local_108;
    uStack_ff = uStack_107;
    uStack_fe = local_108;
    uStack_fd = uStack_107;
    uStack_fc = local_108;
    uStack_fb = uStack_107;
    uStack_fa = local_108;
    uStack_f9 = uStack_107;
    uStack_f6 = local_f8;
    uStack_f5 = uStack_f7;
    uStack_f4 = local_f8;
    uStack_f3 = uStack_f7;
    uStack_f2 = local_f8;
    uStack_f1 = uStack_f7;
    uStack_f0 = local_f8;
    uStack_ef = uStack_f7;
    uStack_ee = local_f8;
    uStack_ed = uStack_f7;
    uStack_ec = local_f8;
    uStack_eb = uStack_f7;
    uStack_ea = local_f8;
    uStack_e9 = uStack_f7;
    FUN_004154c0(puVar27,param_2,uVar29);
    uVar29 = param_1 + 1 >> 1;
    if (uVar29 != 0) {
      uVar26 = (ulong)DAT_0041c020;
      uVar23 = 0;
      do {
        uVar24 = uVar23 + 8;
        if (param_1 < uVar23 * 2 + 0x20) {
          uVar25 = uVar23 * 2 + 0x10;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = CONCAT71(0,*pbVar28);
          auVar4 = auVar4 * ZEXT816(0x101010101010101);
          local_c8 = auVar4._0_4_;
          uStack_c4 = auVar4._4_4_;
          lVar22 = auVar4._8_8_ + CONCAT71(0,*pbVar28) * 0x101010101010101;
          if (param_1 <= uVar25) goto LAB_00409a5d;
          uStack_c0 = lVar22;
          FUN_004154c0(&local_c8,param_2 + uVar25,param_1 + uVar24 * -2);
          lVar19 = uStack_d0;
          lVar22 = uStack_c0;
          if ((uVar26 & 0x200) != 0) goto LAB_00409a6a;
LAB_00409bd8:
          FUN_00415200(local_b8,puVar27,&local_e8,0xd);
          puVar27 = &local_d8;
          FUN_00415200(local_a8,puVar27,&local_e8,0xf);
          FUN_00415200(&local_98,&local_c8,puVar27,1);
          FUN_00415200(local_88,&local_c8,puVar27,3);
          FUN_00415240(local_78,local_b8,&local_128);
          FUN_00415240(local_68,local_a8,&local_118);
          FUN_00415240(local_58,&local_98,&local_108);
          FUN_00415240(local_48,local_88,&local_f8);
          uVar26 = (ulong)DAT_0041c020;
          auVar31 = _DAT_00418700;
          uStack_e0 = uStack_d0;
          uStack_d0 = uStack_c0;
        }
        else {
          puVar1 = (undefined4 *)(param_2 + uVar24 * 2);
          local_c8 = *puVar1;
          uStack_c4 = puVar1[1];
          lVar22 = *(long *)(puVar1 + 2);
LAB_00409a5d:
          lVar19 = uStack_d0;
          uStack_c0 = lVar22;
          if ((uVar26 & 0x200) == 0) goto LAB_00409bd8;
LAB_00409a6a:
          uStack_c0._4_4_ = (undefined4)((ulong)lVar22 >> 0x20);
          uStack_c0._0_4_ = (undefined4)lVar22;
          uStack_d0._4_4_ = (undefined4)((ulong)lVar19 >> 0x20);
          uStack_d0._0_4_ = (undefined4)lVar19;
          auVar13._4_4_ = uStack_d4;
          auVar13._0_4_ = local_d8;
          auVar13._8_4_ = (undefined4)uStack_d0;
          auVar13._12_4_ = uStack_d0._4_4_;
          auVar21._8_4_ = local_d8;
          auVar21._0_8_ = uStack_e0;
          auVar21._12_4_ = uStack_d4;
          auVar21._16_4_ = (undefined4)uStack_d0;
          auVar21._20_4_ = uStack_d0._4_4_;
          auVar20._8_4_ = local_d8;
          auVar20._0_8_ = uStack_e0;
          auVar20._12_4_ = uStack_d4;
          auVar20._16_4_ = (undefined4)uStack_d0;
          auVar20._20_4_ = uStack_d0._4_4_;
          auVar18._4_4_ = uStack_d4;
          auVar18._0_4_ = local_d8;
          auVar18._8_4_ = (undefined4)uStack_d0;
          auVar18._12_4_ = uStack_d0._4_4_;
          auVar18._16_4_ = local_c8;
          auVar14[1] = uStack_127;
          auVar14[0] = local_128;
          auVar14[2] = uStack_126;
          auVar14[3] = uStack_125;
          auVar14[4] = uStack_124;
          auVar14[5] = uStack_123;
          auVar14[6] = uStack_122;
          auVar14[7] = uStack_121;
          auVar14[8] = uStack_120;
          auVar14[9] = uStack_11f;
          auVar14[10] = uStack_11e;
          auVar14[11] = uStack_11d;
          auVar14[12] = uStack_11c;
          auVar14[13] = uStack_11b;
          auVar14[14] = uStack_11a;
          auVar14[15] = uStack_119;
          auVar15[1] = uStack_117;
          auVar15[0] = local_118;
          auVar15[2] = uStack_116;
          auVar15[3] = uStack_115;
          auVar15[4] = uStack_114;
          auVar15[5] = uStack_113;
          auVar15[6] = uStack_112;
          auVar15[7] = uStack_111;
          auVar15[8] = uStack_110;
          auVar15[9] = uStack_10f;
          auVar15[10] = uStack_10e;
          auVar15[11] = uStack_10d;
          auVar15[12] = uStack_10c;
          auVar15[13] = uStack_10b;
          auVar15[14] = uStack_10a;
          auVar15[15] = uStack_109;
          local_b8 = auVar20._5_16_;
          local_a8 = auVar21._7_16_;
          auVar13._20_4_ = uStack_c4;
          auVar13._16_4_ = local_c8;
          auVar13._24_4_ = (undefined4)uStack_c0;
          auVar13._28_4_ = uStack_c0._4_4_;
          _local_78 = pmaddubsw(local_b8,auVar14);
          local_88 = auVar13._3_16_;
          auVar16[1] = uStack_107;
          auVar16[0] = local_108;
          auVar16[2] = uStack_106;
          auVar16[3] = uStack_105;
          auVar16[4] = uStack_104;
          auVar16[5] = uStack_103;
          auVar16[6] = uStack_102;
          auVar16[7] = uStack_101;
          auVar16[8] = uStack_100;
          auVar16[9] = uStack_ff;
          auVar16[10] = uStack_fe;
          auVar16[11] = uStack_fd;
          auVar16[12] = uStack_fc;
          auVar16[13] = uStack_fb;
          auVar16[14] = uStack_fa;
          auVar16[15] = uStack_f9;
          _local_68 = pmaddubsw(local_a8,auVar15);
          auVar17[1] = uStack_f7;
          auVar17[0] = local_f8;
          auVar17[2] = uStack_f6;
          auVar17[3] = uStack_f5;
          auVar17[4] = uStack_f4;
          auVar17[5] = uStack_f3;
          auVar17[6] = uStack_f2;
          auVar17[7] = uStack_f1;
          auVar17[8] = uStack_f0;
          auVar17[9] = uStack_ef;
          auVar17[10] = uStack_ee;
          auVar17[11] = uStack_ed;
          auVar17[12] = uStack_ec;
          auVar17[13] = uStack_eb;
          auVar17[14] = uStack_ea;
          auVar17[15] = uStack_e9;
          _local_58 = pmaddubsw(auVar18._1_16_,auVar16);
          _local_48 = pmaddubsw(local_88,auVar17);
          uStack_e0 = lVar19;
          uStack_d0 = lVar22;
        }
        uStack_e4 = uStack_d4;
        local_e8 = local_d8;
        local_d8 = local_c8;
        uStack_d4 = uStack_c4;
        auVar30._0_2_ =
             local_78._0_2_ + auVar31._0_2_ + local_68._0_2_ + local_58._0_2_ + local_48._0_2_;
        auVar30._2_2_ =
             local_78._2_2_ + auVar31._2_2_ + local_68._2_2_ + local_58._2_2_ + local_48._2_2_;
        auVar30._4_2_ = sStack_74 + auVar31._4_2_ + sStack_64 + sStack_54 + sStack_44;
        auVar30._6_2_ = sStack_72 + auVar31._6_2_ + sStack_62 + sStack_52 + sStack_42;
        auVar30._8_2_ = sStack_70 + auVar31._8_2_ + sStack_60 + sStack_50 + sStack_40;
        auVar30._10_2_ = sStack_6e + auVar31._10_2_ + sStack_5e + sStack_4e + sStack_3e;
        auVar30._12_2_ = sStack_6c + auVar31._12_2_ + sStack_5c + sStack_4c + sStack_3c;
        auVar30._14_2_ = sStack_6a + auVar31._14_2_ + sStack_5a + sStack_4a + sStack_3a;
        _local_78 = psraw(auVar30,5);
        sVar5 = SUB162(_local_78,0);
        local_98 = (0 < sVar5) * (sVar5 < 0xff) * SUB161(_local_78,0) - (0xff < sVar5);
        sVar6 = SUB162(_local_78,2);
        bStack_97 = (0 < sVar6) * (sVar6 < 0xff) * SUB161(_local_78,2) - (0xff < sVar6);
        sVar7 = SUB162(_local_78,4);
        bStack_96 = (0 < sVar7) * (sVar7 < 0xff) * SUB161(_local_78,4) - (0xff < sVar7);
        sVar8 = SUB162(_local_78,6);
        bStack_95 = (0 < sVar8) * (sVar8 < 0xff) * SUB161(_local_78,6) - (0xff < sVar8);
        sVar9 = SUB162(_local_78,8);
        bStack_94 = (0 < sVar9) * (sVar9 < 0xff) * SUB161(_local_78,8) - (0xff < sVar9);
        sVar10 = SUB162(_local_78,10);
        bStack_93 = (0 < sVar10) * (sVar10 < 0xff) * SUB161(_local_78,10) - (0xff < sVar10);
        sVar11 = SUB162(_local_78,0xc);
        bStack_92 = (0 < sVar11) * (sVar11 < 0xff) * SUB161(_local_78,0xc) - (0xff < sVar11);
        sVar12 = SUB162(_local_78,0xe);
        bStack_91 = (0 < sVar12) * (sVar12 < 0xff) * SUB161(_local_78,0xe) - (0xff < sVar12);
        cStack_90 = (0 < sVar5) * (sVar5 < 0xff) * SUB161(_local_78,0) - (0xff < sVar5);
        cStack_8f = (0 < sVar6) * (sVar6 < 0xff) * SUB161(_local_78,2) - (0xff < sVar6);
        cStack_8e = (0 < sVar7) * (sVar7 < 0xff) * SUB161(_local_78,4) - (0xff < sVar7);
        cStack_8d = (0 < sVar8) * (sVar8 < 0xff) * SUB161(_local_78,6) - (0xff < sVar8);
        cStack_8c = (0 < sVar9) * (sVar9 < 0xff) * SUB161(_local_78,8) - (0xff < sVar9);
        cStack_8b = (0 < sVar10) * (sVar10 < 0xff) * SUB161(_local_78,10) - (0xff < sVar10);
        cStack_8a = (0 < sVar11) * (sVar11 < 0xff) * SUB161(_local_78,0xc) - (0xff < sVar11);
        cStack_89 = (0 < sVar12) * (sVar12 < 0xff) * SUB161(_local_78,0xe) - (0xff < sVar12);
        pbVar2 = param_2 + uVar23;
        *pbVar2 = local_98;
        pbVar2[1] = bStack_97;
        pbVar2[2] = bStack_96;
        pbVar2[3] = bStack_95;
        pbVar2[4] = bStack_94;
        pbVar2[5] = bStack_93;
        pbVar2[6] = bStack_92;
        pbVar2[7] = bStack_91;
        uVar23 = uVar24;
      } while (uVar24 < uVar29);
    }
  }
  return param_2;
}



undefined8 FUN_00409ce0(undefined4 param_1,undefined2 *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  cVar1 = FUN_00409d70();
  if (cVar1 != '\0') {
    puVar3 = (undefined *)FUN_004108b0("COLUMNS");
    if (puVar3 == (undefined *)0x0) {
      puVar3 = &DAT_00418720;
    }
    uVar2 = FUN_004142f0(puVar3,0,0);
    param_2[1] = uVar2;
    puVar3 = (undefined *)FUN_004108b0(&DAT_0041872e);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = &DAT_00418723;
    }
    uVar2 = FUN_004142f0(puVar3,0,0);
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = uVar2;
    return 0;
  }
  uVar4 = FUN_00410ae0(param_1,param_2);
  return uVar4;
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



void FUN_00409da0(void)

{
  FUN_004028c1();
  FUN_00402973();
  return;
}



// WARNING: Removing unreachable block (ram,0x0040a060)

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
  char *apcStack_c88 [124];
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
    local_cb4 = (undefined  [8])0xffffffff00000000;
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
       (param_2 = (long *)&stack0xfffffffffffffff8, &stack0x00000000 != &DAT_00000008)) {
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
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  int iVar8;
  
  if (param_2 == 0) {
    return 0;
  }
  pbVar5 = param_1 + 1;
  iVar8 = 0;
  param_2 = param_2 + -1;
  uVar3 = (uint)*param_1;
  if (*param_1 == 0) {
    return 0;
  }
  do {
    while ((lVar6 = param_2 + -1, uVar3 - 0x20 < 0x5f || (uVar3 == 9))) {
      iVar8 = iVar8 + 1;
      if (param_2 == 0) {
        return iVar8;
      }
LAB_0040a679:
      uVar3 = (uint)*pbVar5;
      if (*pbVar5 == 0) {
        return iVar8;
      }
      pbVar5 = pbVar5 + 1;
      param_2 = lVar6;
    }
    if (uVar3 == 0x1b) {
      if (param_2 == 0) {
        return iVar8;
      }
      bVar1 = *pbVar5;
joined_r0x0040a71e:
      if (bVar1 == 0) {
        return iVar8;
      }
      pbVar7 = pbVar5 + 1;
      param_2 = lVar6 + -1;
      if (bVar1 == 0x5b) {
        if (lVar6 == 0) {
          return iVar8;
        }
        bVar1 = *pbVar7;
        pbVar7 = pbVar5 + 2;
        lVar6 = param_2;
        while( true ) {
          if (bVar1 == 0) {
            return iVar8;
          }
          param_2 = lVar6 + -1;
          if (0xf < bVar1 - 0x30) break;
          if (param_2 == -1) {
            return iVar8;
          }
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          lVar6 = param_2;
        }
        if (lVar6 == 0) {
          return iVar8;
        }
        bVar1 = *pbVar7;
        goto joined_r0x0040a6dd;
      }
      if (bVar1 - 0x20 < 0x10) break;
      if (lVar6 == 0) {
        return iVar8;
      }
      bVar1 = *pbVar7;
      pbVar5 = pbVar5 + 2;
    }
    else {
      if (uVar3 < 0xc0) {
        if (param_2 == 0) {
          return iVar8;
        }
        goto LAB_0040a679;
      }
      if (uVar3 < 0xfc) {
        iVar2 = 0x1f;
        if ((uVar3 ^ 0xff) != 0) {
          for (; (uVar3 ^ 0xff) >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        iVar4 = 6 - iVar2;
        uVar3 = uVar3 & ((1 << ((byte)iVar2 & 0x1f)) - 1U | 3);
        if (param_2 == 0) {
          return iVar8;
        }
        pbVar7 = pbVar5 + 1;
        bVar1 = *pbVar5;
        param_2 = lVar6;
        if (bVar1 == 0) {
          return iVar8;
        }
LAB_0040a62c:
        pbVar5 = pbVar7 + (iVar4 - 1);
        lVar6 = param_2;
        while( true ) {
          param_2 = lVar6 + -1;
          if ((((int)(char)bVar1 & 0xc0U) != 0x80) ||
             (uVar3 = uVar3 << 6 | (int)(char)bVar1 & 0x3fU, pbVar5 == pbVar7)) break;
          if (param_2 == -1) {
            return iVar8;
          }
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          lVar6 = param_2;
          if (bVar1 == 0) {
            return iVar8;
          }
        }
      }
      else {
        uVar3 = uVar3 & 3;
        if (param_2 == 0) {
          return iVar8;
        }
        bVar1 = *pbVar5;
        if (bVar1 == 0) {
          return iVar8;
        }
        if (((int)(char)bVar1 & 0xc0U) == 0x80) {
          param_2 = param_2 + -2;
          uVar3 = uVar3 << 6 | (int)(char)bVar1 & 0x3fU;
          if (lVar6 == 0) {
            return iVar8;
          }
          pbVar7 = pbVar5 + 2;
          bVar1 = pbVar5[1];
          if (bVar1 == 0) {
            return iVar8;
          }
          iVar4 = 4;
          goto LAB_0040a62c;
        }
        pbVar7 = pbVar5 + 1;
        param_2 = param_2 + -2;
      }
      iVar4 = FUN_0040a810(uVar3);
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      iVar8 = iVar8 + iVar4;
      if (lVar6 == 0) {
        return iVar8;
      }
      bVar1 = *pbVar7;
joined_r0x0040a6dd:
      pbVar5 = pbVar7 + 1;
    }
    uVar3 = (uint)bVar1;
    if (bVar1 == 0) {
      return iVar8;
    }
  } while( true );
  if (param_2 == -1) {
    return iVar8;
  }
  bVar1 = *pbVar7;
  lVar6 = param_2;
  pbVar5 = pbVar7;
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
    iVar2 = FUN_00410e90(param_1,iVar2,0x1b6);
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



void FUN_0040ad90(undefined8 param_1)

{
  FUN_0040ada0(param_1,0xffffffff);
  return;
}



undefined8 FUN_0040ada0(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 == 0) {
    if (iVar1 < 1) {
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      return 0xffffffffffffffff;
    }
  }
  else {
    if (iVar1 < 1) {
      iVar1 = param_2;
    }
    *(int *)(param_1 + 8) = iVar1;
    if (0 < param_2) {
      DAT_00448020 = param_2;
    }
  }
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
    *(code **)(lVar3 + 0x28) = FUN_0040b050;
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



void FUN_0040b050(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00410f70(*(undefined4 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0x18),
                       *(undefined4 *)(param_1 + 0x20));
  if (lVar1 == -1) {
    FUN_0040b0b0(param_1);
    return;
  }
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(int *)(param_1 + 0x14) = (int)lVar1;
    return;
  }
  FUN_0040ad90(param_1);
  return;
}



void FUN_0040b0b0(undefined8 param_1)

{
  FUN_0040ada0(param_1,DAT_00448020);
  return;
}



void FUN_0040b0c0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,long *param_4)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*param_4 == 0) {
    FUN_00402b21();
    FUN_0040b0fc();
    return;
  }
  local_14 = 0;
  local_10 = 1;
  local_c = 2;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = &local_14;
  }
  if (((byte)DAT_0041c718 & 4) == 0) {
    FUN_0040b110();
    return;
  }
  FUN_00403410(param_1,param_2);
  return;
}



void FUN_0040b0fc(void)

{
  return;
}



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
  int aiStack_248 [112];
  undefined *local_88;
  undefined8 *local_80;
  undefined8 *local_70;
  undefined2 local_5c;
  undefined local_5a;
  undefined2 local_59;
  undefined local_57;
  undefined2 local_56;
  undefined local_54;
  undefined2 local_53;
  undefined local_51;
  undefined8 local_50;
  int local_48 [2];
  undefined local_40 [8];
  undefined local_38 [24];
  
  local_80 = (undefined8 *)0x0;
  cVar1 = FUN_00414880(param_3,".com");
  puVar8 = param_3;
  if ((cVar1 == '\0') && (cVar1 = FUN_00414880(param_3,&DAT_004187c3), cVar1 == '\0')) {
LAB_0040b16b:
    local_88 = param_3;
    local_70 = param_4;
    if (*param_2 != -1) goto LAB_0040b17b;
LAB_0040b2f5:
    uVar2 = FUN_004100bb(local_48);
    if (param_2[1] == -1) goto LAB_0040b30f;
LAB_0040b189:
    iVar5 = param_2[2];
  }
  else {
    local_50 = 0;
    uVar3 = FUN_004123b0(DAT_00440780,param_3,DAT_00440938,0);
    FUN_004123d0(uVar3,&local_50,8);
    FUN_00412330(uVar3);
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
      local_80 = (undefined8 *)FUN_0040b707(0x20);
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
    local_80 = (undefined8 *)FUN_0040b707((long)puVar8 * 8 + 0x20);
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
    uVar4 = FUN_004100bb(local_40);
    uVar2 = uVar2 | uVar4;
    iVar5 = param_2[2];
  }
  if (iVar5 == -1) {
    uVar4 = FUN_004100bb(local_38);
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
      FUN_00416001(0);
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
          FUN_00412330(local_48[(ulong)(*(char *)((long)&local_56 + (long)puVar8) == '\0') +
                                (long)puVar8 * 2]);
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
      local_5a = 0;
      local_5c = 1;
      FUN_00412330(local_48[(long)*(char *)((long)&local_5c + uVar9) + uVar9 * 2]);
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
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
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
        iVar1 = FUN_00405f18(&local_160,&local_158,&DAT_00418920,0);
        if (iVar1 == 0) {
          local_164 = FUN_004162a0();
        }
        else {
          lVar2 = FUN_00412580(local_160,local_130);
          local_130[lVar2] = 0x20;
          FUN_00412580(local_158,local_130 + lVar2 + 1);
          FUN_0040b720("_FORK",local_130,1);
          puVar3 = (undefined8 *)FUN_0041561f(local_b0,0,0x68);
          local_60 = *puVar3;
          local_b0[0] = 0x68;
          local_74 = 0x100;
          local_58 = puVar3[3];
          local_50 = puVar3[6];
          iVar1 = FUN_00403c50(*DAT_0041c370,DAT_0041c370,DAT_00448018,&DAT_00418920);
          if (iVar1 != -1) {
            FUN_00405ef5(local_160);
            FUN_00405ef5(local_148);
            puVar3 = (undefined8 *)(DAT_00447b50 + (long)(int)local_164 * 0x18);
            *(undefined4 *)(puVar3 + 2) = 3;
            *puVar3 = local_150;
            *(int *)((long)puVar3 + 0x14) = (int)DAT_00440920;
            FUN_00403710(local_158,local_100,0x40);
            FUN_00403710(local_158,&DAT_00446ee0,4);
            if (0 < DAT_00446ee0) {
              piVar5 = &DAT_00446ee8;
              iVar1 = 0;
              do {
                FUN_00403710(local_158,piVar5,0x18);
                if ((*(byte *)(piVar5 + 5) & 2) != 0) {
                  FUN_00403710(local_158,(long)*piVar5 << 0x10,
                               (long)(piVar5[1] - *piVar5) * 0x10000 + 0x10000);
                }
                iVar1 = iVar1 + 1;
                piVar5 = piVar5 + 6;
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
  uVar4 = (ulong)DAT_00440900;
  iVar1 = DAT_00440870;
  if (DAT_00440900 != 0xffffffff) {
    if (((byte)DAT_0041c718 & 0x38) != 0) {
      syscall();
      return uVar4;
    }
    syscall();
    if ((ulong)DAT_00440900 < 0xfffffffffffff001) {
      return uVar4;
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



void FUN_0040b720(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = param_2;
  lVar1 = FUN_0041571a();
  lVar2 = FUN_0041571a(uVar4);
  lVar3 = FUN_0040b707(lVar1 + 2 + lVar2);
  FUN_004154c0(lVar3,param_1,lVar1);
  *(undefined *)(lVar1 + lVar3) = 0x3d;
  uVar4 = FUN_004154c0((undefined *)(lVar1 + lVar3) + 1,param_2,lVar2 + 1);
  FUN_0040b7e0(uVar4,param_3 != 0);
  return;
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



undefined8 FUN_0040b7e0(undefined8 param_1,char param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  
  lVar4 = FUN_0041576b(param_1,0x3d);
  plVar1 = DAT_00448018;
  if (lVar4 == 0) {
LAB_004029f1:
    FUN_0040b701(param_1);
    uVar3 = FUN_00402b21();
    return uVar3;
  }
  lVar7 = *DAT_00448018;
  plVar9 = DAT_00448018;
  if (lVar7 == 0) {
    lVar4 = 8;
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    uVar5 = 0;
    do {
      uVar8 = uVar5;
      iVar2 = FUN_00414c00(lVar7,param_1,((int)lVar4 + 1) - (int)param_1);
      if (iVar2 == 0) {
        if (param_2 == '\0') {
          FUN_0040b701(param_1);
          return 0;
        }
        goto LAB_0040b86c;
      }
      uVar5 = uVar8 + 1;
      lVar6 = (ulong)uVar5 * 8;
      plVar9 = plVar1 + uVar5;
      lVar7 = *plVar9;
    } while (lVar7 != 0);
    uVar8 = uVar8 + 2;
    if (0x1ff < uVar8) goto LAB_004029f1;
    lVar4 = (ulong)uVar8 << 3;
  }
  *(undefined8 *)((long)plVar1 + lVar4) = 0;
LAB_0040b86c:
  FUN_0040b701(*plVar9);
  *(undefined8 *)((long)DAT_00448018 + lVar6) = param_1;
  return 0;
}



void FUN_0040b8d0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0040b7a0();
  FUN_0040b7e0(uVar1,1);
  return;
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
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  
  puVar1 = *(ulong **)(param_1 + 0x388);
  if (puVar1 != (ulong *)0x0) {
    uVar19 = *(uint *)(puVar1 + 3) & 1;
    if ((uVar19 != 0) && ((*(uint *)(puVar1 + 3) & 8) == 0)) {
      uVar16 = *puVar1;
      uVar18 = uVar16;
      if ((uVar16 & 0xf) != 0) {
        uVar18 = uVar16 + (-((int)uVar16 + 0x10) & 0xf);
      }
      uVar15 = *(ulong *)(uVar18 + 8);
      uVar17 = 0;
      if (((uint)uVar15 & 3) != 1) goto LAB_0040b96f;
      uVar17 = puVar1[1];
      uVar10 = uVar15 & 0xfffffffffffffff8;
      if (uVar18 + uVar10 < (uVar16 - 0x50) + uVar17) goto LAB_0040b96c;
      uVar12 = puVar1[2];
      if (*(ulong *)(param_1 + 0x20) == uVar18) {
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 8) = 0;
        goto LAB_0040baa3;
      }
      uVar13 = *(ulong *)(uVar18 + 0x18);
      uVar2 = *(ulong *)(uVar18 + 0x30);
      if (uVar13 == uVar18) {
        uVar8 = *(ulong *)(uVar18 + 0x28);
        puVar5 = (undefined8 *)(uVar18 + 0x28);
        if (*(ulong *)(uVar18 + 0x28) != 0) {
LAB_0040bc20:
          do {
            do {
              puVar9 = puVar5;
              uVar13 = uVar8;
              uVar8 = *(ulong *)(uVar13 + 0x28);
              puVar5 = (undefined8 *)(uVar13 + 0x28);
            } while (*(ulong *)(uVar13 + 0x28) != 0);
            uVar8 = *(ulong *)(uVar13 + 0x20);
            puVar5 = (undefined8 *)(uVar13 + 0x20);
          } while (*(ulong *)(uVar13 + 0x20) != 0);
          if (puVar9 <= *(undefined8 **)(undefined8 *)(param_1 + 0x18) &&
              *(undefined8 **)(undefined8 *)(param_1 + 0x18) != puVar9) goto LAB_00402a0c;
          *puVar9 = 0;
          goto LAB_0040ba28;
        }
        if (*(ulong *)(uVar18 + 0x20) != 0) {
          uVar8 = *(ulong *)(uVar18 + 0x20);
          puVar5 = (undefined8 *)(uVar18 + 0x20);
          goto LAB_0040bc20;
        }
        if (uVar2 != 0) {
          uVar14 = *(uint *)(uVar18 + 0x38);
          uVar13 = 0;
          lVar11 = param_1 + (ulong)uVar14 * 8;
          if (*(ulong *)(lVar11 + 600) == uVar18) {
            *(undefined8 *)(lVar11 + 600) = 0;
            bVar4 = (byte)uVar14 & 0x1f;
            *(uint *)(param_1 + 4) =
                 *(uint *)(param_1 + 4) & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
            goto LAB_0040baa3;
          }
          goto LAB_0040ba42;
        }
      }
      else {
        uVar8 = *(ulong *)(uVar18 + 0x10);
        if (((uVar8 <= *(ulong *)(param_1 + 0x18) && *(ulong *)(param_1 + 0x18) != uVar8) ||
            (*(ulong *)(uVar8 + 0x18) != uVar18)) || (*(ulong *)(uVar13 + 0x10) != uVar18))
        goto LAB_00402a0c;
        *(ulong *)(uVar8 + 0x18) = uVar13;
        *(ulong *)(uVar13 + 0x10) = uVar8;
LAB_0040ba28:
        if (uVar2 != 0) {
          lVar11 = param_1 + (ulong)*(uint *)(uVar18 + 0x38) * 8;
          if (*(ulong *)(lVar11 + 600) == uVar18) {
            *(ulong *)(lVar11 + 600) = uVar13;
            uVar8 = *(ulong *)(param_1 + 0x18);
          }
          else {
LAB_0040ba42:
            uVar8 = *(ulong *)(param_1 + 0x18);
            if (uVar2 < uVar8) goto LAB_00402a0c;
            if (*(ulong *)(uVar2 + 0x20) == uVar18) {
              *(ulong *)(uVar2 + 0x20) = uVar13;
            }
            else {
              *(ulong *)(uVar2 + 0x28) = uVar13;
            }
            if (uVar13 == 0) goto LAB_0040baa3;
          }
          if (uVar13 < uVar8) goto LAB_00402a0c;
          uVar3 = *(ulong *)(uVar18 + 0x20);
          *(ulong *)(uVar13 + 0x30) = uVar2;
          if (uVar3 != 0) {
            if (uVar3 < uVar8) goto LAB_00402a0c;
            *(ulong *)(uVar13 + 0x20) = uVar3;
            *(ulong *)(uVar3 + 0x30) = uVar13;
          }
          uVar2 = *(ulong *)(uVar18 + 0x28);
          if (uVar2 != 0) {
            if (uVar2 < uVar8) goto LAB_00402a0c;
            *(ulong *)(uVar13 + 0x28) = uVar2;
            *(ulong *)(uVar2 + 0x30) = uVar13;
          }
        }
      }
LAB_0040baa3:
      iVar6 = FUN_0040f560(uVar16,uVar17);
      if (iVar6 == 0) {
        *(long *)(param_1 + 0x358) = *(long *)(param_1 + 0x358) - uVar17;
        *(ulong *)(param_1 + 0x388) = uVar12;
      }
      else {
        lVar11 = 600;
        uVar7 = (uint)(uVar10 >> 8);
        uVar16 = uVar15 >> 8 & 0xffffffff;
        uVar14 = (uint)uVar16;
        if (uVar7 != 0) {
          if (uVar7 < 0x10000) {
            uVar19 = 0x1f;
            if (uVar7 != 0) {
              for (; uVar7 >> uVar19 == 0; uVar19 = uVar19 - 1) {
              }
            }
            uVar14 = ((uint)(uVar10 >> (0x26U - (char)(uVar19 ^ 0x1f) & 0x3f)) & 1) +
                     (0x1f - (uVar19 ^ 0x1f)) * 2;
            uVar16 = (ulong)uVar14;
            lVar11 = uVar16 * 8 + 600;
            uVar19 = 1 << ((byte)uVar14 & 0x1f);
          }
          else {
            uVar19 = 0x80000000;
            lVar11 = 0x350;
            uVar14 = 0x1f;
            uVar16 = 0x1f;
          }
        }
        uVar7 = *(uint *)(param_1 + 4);
        *(uint *)(uVar18 + 0x38) = uVar14;
        *(undefined8 *)(uVar18 + 0x28) = 0;
        *(undefined8 *)(uVar18 + 0x20) = 0;
        if ((uVar7 & uVar19) == 0) {
          uVar17 = 0;
          *(uint *)(param_1 + 4) = uVar19 | uVar7;
          *(ulong *)(param_1 + 600 + uVar16 * 8) = uVar18;
          *(long *)(uVar18 + 0x30) = lVar11 + param_1;
          *(ulong *)(uVar18 + 0x18) = uVar18;
          *(ulong *)(uVar18 + 0x10) = uVar18;
        }
        else {
          uVar16 = *(ulong *)(param_1 + 600 + uVar16 * 8);
          uVar15 = uVar10;
          if (uVar14 != 0x1f) {
            uVar15 = uVar10 << (0x39U - (char)(uVar14 >> 1) & 0x3f);
          }
          do {
            uVar12 = uVar16;
            if ((*(ulong *)(uVar12 + 8) & 0xfffffffffffffff8) == uVar10) {
              uVar16 = *(ulong *)(uVar12 + 0x10);
              if ((uVar16 < *(ulong *)(param_1 + 0x18)) || (uVar12 < *(ulong *)(param_1 + 0x18)))
              goto LAB_00402a0c;
              *(ulong *)(uVar16 + 0x18) = uVar18;
              uVar17 = 0;
              *(ulong *)(uVar12 + 0x10) = uVar18;
              *(ulong *)(uVar18 + 0x10) = uVar16;
              *(ulong *)(uVar18 + 0x18) = uVar12;
              *(undefined8 *)(uVar18 + 0x30) = 0;
              goto LAB_0040b96f;
            }
            lVar11 = 4 - ((long)uVar15 >> 0x3f);
            uVar16 = *(ulong *)(uVar12 + lVar11 * 8);
            uVar15 = uVar15 * 2;
          } while (uVar16 != 0);
          uVar16 = uVar12 + lVar11 * 8;
          if (uVar16 <= *(ulong *)(param_1 + 0x18) && *(ulong *)(param_1 + 0x18) != uVar16) {
LAB_00402a0c:
                    // WARNING: Subroutine does not return
            FUN_00401114();
          }
          *(ulong *)(uVar12 + lVar11 * 8) = uVar18;
          uVar17 = 0;
          *(ulong *)(uVar18 + 0x30) = uVar12;
          *(ulong *)(uVar18 + 0x18) = uVar18;
          *(ulong *)(uVar18 + 0x10) = uVar18;
        }
      }
      goto LAB_0040b96f;
    }
  }
LAB_0040b96c:
  uVar17 = 0;
LAB_0040b96f:
  *(undefined8 *)(param_1 + 0x38) = 0x80;
  return uVar17;
}



undefined8 FUN_0040bd00(long param_1,ulong param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  
  if (0xffffffffffffff7f < param_2) {
    return 0;
  }
  puVar1 = *(ulong **)(param_1 + 0x28);
  if (puVar1 == (ulong *)0x0) {
    return 0;
  }
  if (param_2 + 0x50 < *(ulong *)(param_1 + 0x10)) {
    puVar11 = (ulong *)(param_1 + 0x378);
    puVar10 = puVar11;
    do {
      puVar2 = (ulong *)*puVar10;
      if (puVar2 <= puVar1) {
        uVar3 = puVar10[1];
        if (puVar1 < (ulong *)((long)puVar2 + uVar3)) {
          if ((((*(uint *)(puVar10 + 3) & 8) != 0) || ((*(uint *)(puVar10 + 3) & 1) == 0)) ||
             (uVar12 = ((((*(ulong *)(param_1 + 0x10) - 1) + DAT_004466d0) - (param_2 + 0x50)) /
                        DAT_004466d0 - 1) * DAT_004466d0, uVar3 <= uVar12 && uVar12 - uVar3 != 0))
          break;
          goto LAB_0040bdd8;
        }
      }
      puVar10 = (ulong *)puVar10[2];
      if (puVar10 == (ulong *)0x0) {
        uVar8 = FUN_00402a11();
        return uVar8;
      }
    } while( true );
  }
  goto LAB_0040bd70;
  while (puVar11 = (ulong *)puVar11[2], puVar11 != (ulong *)0x0) {
LAB_0040bdd8:
    if ((puVar2 <= puVar11) && (puVar11 < (ulong *)((long)puVar2 + uVar3))) goto LAB_0040bd70;
  }
  lVar5 = FUN_0040f550(puVar2,uVar3,uVar3 - uVar12,0,0);
  if (((lVar5 != -1) || (iVar4 = FUN_0040f560(*puVar10 + (uVar3 - uVar12),uVar12), iVar4 == 0)) &&
     (uVar12 != 0)) {
    lVar5 = *(long *)(param_1 + 0x10);
    uVar3 = *(ulong *)(param_1 + 0x28);
    puVar10[1] = puVar10[1] - uVar12;
    uVar9 = lVar5 - uVar12;
    *(long *)(param_1 + 0x358) = *(long *)(param_1 + 0x358) - uVar12;
    uVar7 = uVar9;
    uVar6 = uVar3;
    if ((uVar3 & 0xf) != 0) {
      uVar6 = (ulong)(-((int)uVar3 + 0x10) & 0xf);
      uVar7 = uVar9 - uVar6;
      uVar6 = uVar3 + uVar6;
    }
    *(ulong *)(param_1 + 0x10) = uVar7;
    *(ulong *)(param_1 + 0x28) = uVar6;
    *(ulong *)(uVar6 + 8) = uVar7 | 1;
    uVar8 = DAT_004466e0;
    *(undefined8 *)(uVar3 + 8 + uVar9) = 0x50;
    *(undefined8 *)(param_1 + 0x30) = uVar8;
    goto LAB_0040bd73;
  }
LAB_0040bd70:
  uVar12 = 0;
LAB_0040bd73:
  lVar5 = FUN_0040b940(param_1);
  if (uVar12 + lVar5 == 0) {
    if (*(ulong *)(param_1 + 0x30) <= *(ulong *)(param_1 + 0x10) &&
        *(ulong *)(param_1 + 0x10) != *(ulong *)(param_1 + 0x30)) {
      *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
    }
    return 0;
  }
  return 1;
}



undefined8 FUN_0040bd10(long param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
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
        uVar8 = FUN_00402a11();
        return uVar8;
      }
    } while( true );
  }
  goto LAB_0040bd70;
  while (puVar11 = (ulong *)puVar11[2], puVar11 != (ulong *)0x0) {
LAB_0040bdd8:
    if ((puVar2 <= puVar11) && (puVar11 < (ulong *)((long)puVar2 + uVar3))) goto LAB_0040bd70;
  }
  lVar5 = FUN_0040f550(puVar2,uVar3,uVar3 - uVar12,0,0);
  if (((lVar5 != -1) || (iVar4 = FUN_0040f560(*puVar10 + (uVar3 - uVar12),uVar12), iVar4 == 0)) &&
     (uVar12 != 0)) {
    lVar5 = *(long *)(param_1 + 0x10);
    uVar3 = *(ulong *)(param_1 + 0x28);
    puVar10[1] = puVar10[1] - uVar12;
    uVar9 = lVar5 - uVar12;
    *(long *)(param_1 + 0x358) = *(long *)(param_1 + 0x358) - uVar12;
    uVar7 = uVar9;
    uVar6 = uVar3;
    if ((uVar3 & 0xf) != 0) {
      uVar6 = (ulong)(-((int)uVar3 + 0x10) & 0xf);
      uVar7 = uVar9 - uVar6;
      uVar6 = uVar3 + uVar6;
    }
    *(ulong *)(param_1 + 0x10) = uVar7;
    *(ulong *)(param_1 + 0x28) = uVar6;
    *(ulong *)(uVar6 + 8) = uVar7 | 1;
    uVar8 = DAT_004466e0;
    *(undefined8 *)(uVar3 + 8 + uVar9) = 0x50;
    *(undefined8 *)(param_1 + 0x30) = uVar8;
    goto LAB_0040bd73;
  }
LAB_0040bd70:
  uVar12 = 0;
LAB_0040bd73:
  lVar5 = FUN_0040b940(param_1);
  if (uVar12 + lVar5 == 0) {
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
  if (param_2 < puVar15) goto code_r0x00402a1a;
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
          if (puVar7 < puVar15) goto code_r0x00402a1a;
          if ((ulong *)puVar7[2] != param_2) {
                    // WARNING: Subroutine does not return
            thunk_FUN_00401114();
          }
LAB_0040c509:
          puVar14[3] = (ulong)puVar7;
          puVar7[2] = (ulong)puVar14;
          goto LAB_0040bfb4;
        }
      }
      else {
        if ((puVar14 < puVar15) || ((ulong *)puVar14[3] != param_2)) goto code_r0x00402a1a;
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
          if (puVar11 < puVar15) goto code_r0x00402a1a;
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
        if (puVar14 < puVar15) goto code_r0x00402a1a;
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
           ((ulong *)puVar7[2] != param_2)) goto code_r0x00402a1a;
        puVar1[3] = (ulong)puVar7;
        puVar7[2] = (ulong)puVar1;
LAB_0040bf32:
        if (puVar14 != (ulong *)0x0) {
          if (*(ulong **)(param_1 + (ulong)*(uint *)(param_2 + 7) * 2 + 0x96) != param_2)
          goto LAB_0040bf4b;
          *(ulong **)(param_1 + (ulong)*(uint *)(param_2 + 7) * 2 + 0x96) = puVar7;
LAB_0040bf67:
          if (puVar7 < puVar15) goto code_r0x00402a1a;
          puVar1 = (ulong *)param_2[4];
          puVar7[6] = (ulong)puVar14;
          if (puVar1 != (ulong *)0x0) {
            if (puVar1 < puVar15) goto code_r0x00402a1a;
            puVar7[4] = (ulong)puVar1;
            puVar1[6] = (ulong)puVar7;
          }
          puVar14 = (ulong *)param_2[5];
          if (puVar14 != (ulong *)0x0) {
            if (puVar14 < puVar15) goto code_r0x00402a1a;
            puVar7[5] = (ulong)puVar14;
            puVar14[6] = (ulong)puVar7;
          }
        }
      }
    }
  }
LAB_0040bfb4:
  if (puVar12 < puVar15) goto code_r0x00402a1a;
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
          if (puVar14 < puVar15) goto code_r0x00402a1a;
          if ((ulong *)puVar14[2] != puVar12) {
                    // WARNING: Subroutine does not return
            thunk_FUN_00401114();
          }
LAB_0040c4db:
          puVar1[3] = (ulong)puVar14;
          puVar14[2] = (ulong)puVar1;
          goto LAB_0040c0b0;
        }
      }
      else {
        if ((puVar1 < puVar15) || ((ulong *)puVar1[3] != puVar12)) goto code_r0x00402a1a;
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
        if (puVar10 < puVar15) goto code_r0x00402a1a;
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
         ((ulong *)puVar14[2] != puVar12)) goto code_r0x00402a1a;
      puVar2[3] = (ulong)puVar14;
      puVar14[2] = (ulong)puVar2;
LAB_0040c034:
      if (puVar1 != (ulong *)0x0) {
        if (*(ulong **)(param_1 + (ulong)*(uint *)(puVar12 + 7) * 2 + 0x96) == puVar12) {
          *(ulong **)(param_1 + (ulong)*(uint *)(puVar12 + 7) * 2 + 0x96) = puVar14;
        }
        else {
LAB_0040c04d:
          if (puVar1 < puVar15) goto code_r0x00402a1a;
          if ((ulong *)puVar1[4] == puVar12) {
            puVar1[4] = (ulong)puVar14;
          }
          else {
            puVar1[5] = (ulong)puVar14;
          }
          if (puVar14 == (ulong *)0x0) goto LAB_0040c0b0;
        }
        if (puVar14 < puVar15) goto code_r0x00402a1a;
        puVar2 = (ulong *)puVar12[4];
        puVar14[6] = (ulong)puVar1;
        if (puVar2 != (ulong *)0x0) {
          if (puVar2 < puVar15) goto code_r0x00402a1a;
          puVar14[4] = (ulong)puVar2;
          puVar2[6] = (ulong)puVar14;
        }
        puVar12 = (ulong *)puVar12[5];
        if (puVar12 != (ulong *)0x0) {
          if (puVar12 < puVar15) goto code_r0x00402a1a;
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
code_r0x00402a1a:
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
        goto code_r0x00402a1a;
      }
      lVar8 = 4 - ((long)uVar13 >> 0x3f);
      puVar12 = (ulong *)puVar7[lVar8];
      uVar13 = uVar13 * 2;
    } while ((ulong *)puVar7[lVar8] != (ulong *)0x0);
    if (puVar7 + lVar8 < puVar15) goto code_r0x00402a1a;
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
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  ulong **ppuVar14;
  long lVar15;
  ulong uVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong *puVar20;
  int iVar21;
  ulong uVar22;
  byte bVar23;
  ulong uVar24;
  ulong uVar25;
  
  puVar12 = DAT_00446728;
  puVar19 = DAT_00446720;
  puVar9 = DAT_00446718;
  uVar25 = DAT_00446708;
  uVar7 = DAT_00446700;
  if (param_1 < 0xe1) {
    if (param_1 < 0xf) {
      uVar8 = 4;
      iVar21 = 4;
      uVar18 = 0x20;
      uVar3 = DAT_00446700 >> 4;
    }
    else {
      uVar18 = param_1 + 0x1f & 0xfffffffffffffff0;
      uVar8 = uVar18 >> 3;
      iVar21 = (int)uVar8;
      uVar3 = DAT_00446700 >> ((byte)uVar8 & 0x1f);
    }
    if ((uVar3 & 3) != 0) {
      uVar7 = iVar21 + (~uVar3 & 1);
      uVar18 = (ulong)(uVar7 * 2);
      uVar25 = (&DAT_00446758)[uVar18];
      puVar9 = *(ulong **)(uVar25 + 0x10);
      if ((ulong *)(&DAT_00446748 + uVar18 * 8) == puVar9) {
        DAT_00446700 = DAT_00446700 & ~(1 << (uVar7 & 0x1f));
      }
      else {
        if ((puVar9 < DAT_00446718) || (puVar9[3] != uVar25)) goto code_r0x00402a29;
        puVar9[3] = (ulong)(&DAT_00446748 + uVar18 * 8);
        (&DAT_00446758)[uVar18] = puVar9;
      }
      *(ulong *)(uVar25 + 8) = (ulong)(uVar7 * 8 | 3);
      puVar9 = (ulong *)(uVar25 + 8 + (ulong)(uVar7 * 8));
      *puVar9 = *puVar9 | 1;
      return (ulong *)(uVar25 + 0x10);
    }
    if (uVar18 <= DAT_00446708) {
LAB_0040ce40:
      uVar25 = DAT_00446708 - uVar18;
      puVar9 = (ulong *)((long)DAT_00446720 + DAT_00446708);
      if (0x1f < uVar25) {
        DAT_00446720 = (ulong *)((long)DAT_00446720 + uVar18);
        DAT_00446708 = uVar25;
        DAT_00446720[1] = uVar25 | 1;
        *puVar9 = uVar25;
        puVar19[1] = uVar18 | 3;
        puVar5 = puVar19;
        uVar22 = DAT_00446708;
        puVar19 = DAT_00446720;
        goto LAB_0040c7e4;
      }
      uVar25 = DAT_00446708 | 3;
LAB_0040ceab:
      DAT_00446708 = 0;
      DAT_00446720 = (ulong *)0x0;
      puVar19[1] = uVar25;
      puVar9[1] = puVar9[1] | 1;
      puVar5 = puVar19;
      uVar22 = DAT_00446708;
      puVar19 = DAT_00446720;
      goto LAB_0040c7e4;
    }
    if (uVar3 != 0) {
      iVar21 = 1 << ((byte)uVar8 & 0x1f);
      uVar7 = uVar3 << ((byte)uVar8 & 0x1f) & (iVar21 * -2 | iVar21 * 2);
      iVar21 = 0;
      for (uVar7 = uVar7 & -uVar7; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        iVar21 = iVar21 + 1;
      }
      uVar8 = (ulong)(uint)(iVar21 * 2);
      uVar7 = iVar21 * 8;
      puVar5 = (ulong *)(&DAT_00446758)[uVar8];
      puVar9 = (ulong *)puVar5[2];
      if ((ulong *)(&DAT_00446748 + uVar8 * 8) == puVar9) {
        DAT_00446700 = DAT_00446700 & ~(1 << ((byte)iVar21 & 0x1f));
      }
      else {
        if ((puVar9 < DAT_00446718) || ((ulong *)puVar9[3] != puVar5)) goto code_r0x00402a29;
        puVar9[3] = (ulong)(&DAT_00446748 + uVar8 * 8);
        (&DAT_00446758)[uVar8] = puVar9;
      }
      puVar9 = (ulong *)((long)puVar5 + (ulong)uVar7);
      uVar22 = uVar7 - uVar18;
      if (uVar22 < 0x20) {
        puVar5[1] = (ulong)(uVar7 | 3);
        puVar9 = puVar9 + 1;
        *puVar9 = *puVar9 | 1;
        uVar22 = DAT_00446708;
        puVar19 = DAT_00446720;
      }
      else {
        puVar19 = (ulong *)(uVar18 + (long)puVar5);
        puVar5[1] = uVar18 | 3;
        puVar19[1] = uVar22 | 1;
        *puVar9 = uVar22;
        if (uVar25 != 0) {
          uVar18 = (ulong)(uint)((int)(uVar25 >> 3) * 2);
          uVar7 = 1 << ((byte)(uVar25 >> 3) & 0x1f);
          if ((DAT_00446700 & uVar7) == 0) {
            DAT_00446700 = uVar7 | DAT_00446700;
            puVar9 = (ulong *)(&DAT_00446748 + uVar18 * 8);
          }
          else {
            puVar9 = (ulong *)(&DAT_00446758)[uVar18];
            if ((ulong *)(&DAT_00446758)[uVar18] < DAT_00446718) goto code_r0x00402a29;
          }
          (&DAT_00446758)[uVar18] = DAT_00446720;
          puVar9[3] = (ulong)DAT_00446720;
          DAT_00446720[2] = (ulong)puVar9;
          DAT_00446720[3] = (ulong)(&DAT_00446748 + uVar18 * 8);
        }
      }
      goto LAB_0040c7e4;
    }
    if (DAT_00446704 != 0) {
      uVar3 = 0;
      for (uVar4 = -DAT_00446704 & DAT_00446704; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000)
      {
        uVar3 = uVar3 + 1;
      }
      puVar19 = (&DAT_00446958)[uVar3];
      puVar5 = puVar19;
      uVar22 = (puVar19[1] & 0xfffffffffffffff8) - uVar18;
      while ((puVar12 = (ulong *)puVar19[4], (ulong *)puVar19[4] != (ulong *)0x0 ||
             (puVar12 = (ulong *)puVar19[5], (ulong *)puVar19[5] != (ulong *)0x0))) {
        puVar19 = puVar12;
        uVar8 = (puVar19[1] & 0xfffffffffffffff8) - uVar18;
        if (uVar8 < uVar22) {
          puVar5 = puVar19;
          uVar22 = uVar8;
        }
      }
      if (puVar5 < DAT_00446718) goto code_r0x00402a29;
      puVar19 = (ulong *)((long)puVar5 + uVar18);
      uVar8 = uVar18 + uVar22;
      if (puVar19 <= puVar5) goto code_r0x00402a29;
      puVar12 = (ulong *)puVar5[3];
      puVar6 = (ulong *)puVar5[6];
      if (puVar12 == puVar5) {
        if ((ulong *)puVar5[5] != (ulong *)0x0) {
          puVar10 = (ulong *)puVar5[5];
          puVar11 = puVar5 + 5;
LAB_0040d6f0:
          do {
            do {
              puVar20 = puVar11;
              puVar12 = puVar10;
              puVar10 = (ulong *)puVar12[5];
              puVar11 = puVar12 + 5;
            } while ((ulong *)puVar12[5] != (ulong *)0x0);
            puVar10 = (ulong *)puVar12[4];
            puVar11 = puVar12 + 4;
          } while ((ulong *)puVar12[4] != (ulong *)0x0);
          if (puVar20 < DAT_00446718) goto code_r0x00402a29;
          *puVar20 = 0;
          goto LAB_0040ca36;
        }
        if ((ulong *)puVar5[4] != (ulong *)0x0) {
          puVar10 = (ulong *)puVar5[4];
          puVar11 = puVar5 + 4;
          goto LAB_0040d6f0;
        }
        if (puVar6 != (ulong *)0x0) {
          uVar3 = *(uint *)(puVar5 + 7);
          puVar12 = (ulong *)0x0;
          if (puVar5 == (&DAT_00446958)[uVar3]) {
            (&DAT_00446708)[(ulong)uVar3 + 0x4a] = 0;
            DAT_00446704 = DAT_00446704 & ~(1 << (uVar3 & 0x1f));
            goto LAB_0040caad;
          }
          goto LAB_0040ca50;
        }
      }
      else {
        puVar10 = (ulong *)puVar5[2];
        if (((puVar10 < DAT_00446718) || ((ulong *)puVar10[3] != puVar5)) ||
           ((ulong *)puVar12[2] != puVar5)) goto code_r0x00402a29;
        puVar10[3] = (ulong)puVar12;
        puVar12[2] = (ulong)puVar10;
LAB_0040ca36:
        if (puVar6 != (ulong *)0x0) {
          if ((&DAT_00446958)[*(uint *)(puVar5 + 7)] == puVar5) {
            (&DAT_00446708)[(ulong)*(uint *)(puVar5 + 7) + 0x4a] = (ulong)puVar12;
          }
          else {
LAB_0040ca50:
            if (puVar6 < puVar9) goto code_r0x00402a29;
            if ((ulong *)puVar6[4] == puVar5) {
              puVar6[4] = (ulong)puVar12;
            }
            else {
              puVar6[5] = (ulong)puVar12;
            }
            if (puVar12 == (ulong *)0x0) goto LAB_0040caad;
          }
          if (puVar12 < puVar9) goto code_r0x00402a29;
          puVar10 = (ulong *)puVar5[4];
          puVar12[6] = (ulong)puVar6;
          if (puVar10 != (ulong *)0x0) {
            if (puVar10 < puVar9) goto code_r0x00402a29;
            puVar12[4] = (ulong)puVar10;
            puVar10[6] = (ulong)puVar12;
          }
          puVar6 = (ulong *)puVar5[5];
          if (puVar6 != (ulong *)0x0) {
            if (puVar6 < puVar9) goto code_r0x00402a29;
            puVar12[5] = (ulong)puVar6;
            puVar6[6] = (ulong)puVar12;
          }
        }
      }
LAB_0040caad:
      if (0x1f < uVar22) {
        puVar5[1] = uVar18 | 3;
        puVar19[1] = uVar22 | 1;
        *(ulong *)((long)puVar19 + uVar22) = uVar22;
        if (uVar25 != 0) {
          uVar18 = (ulong)(uint)((int)(uVar25 >> 3) * 2);
          uVar3 = 1 << ((byte)(uVar25 >> 3) & 0x1f);
          if ((uVar7 & uVar3) == 0) {
            DAT_00446700 = uVar7 | uVar3;
            puVar12 = (ulong *)(&DAT_00446748 + uVar18 * 8);
          }
          else {
            puVar12 = (ulong *)(&DAT_00446758)[uVar18];
            if (puVar12 < puVar9) {
                    // WARNING: Subroutine does not return
              thunk_FUN_00401114();
            }
          }
          (&DAT_00446758)[uVar18] = DAT_00446720;
          puVar12[3] = (ulong)DAT_00446720;
          DAT_00446720[2] = (ulong)puVar12;
          DAT_00446720[3] = (ulong)(&DAT_00446748 + uVar18 * 8);
        }
        goto LAB_0040c7e4;
      }
LAB_0040d3f0:
      puVar5[1] = uVar8 | 3;
      puVar9 = (ulong *)((long)puVar5 + uVar8 + 8);
      *puVar9 = *puVar9 | 1;
      uVar22 = DAT_00446708;
      puVar19 = DAT_00446720;
      goto LAB_0040c7e4;
    }
LAB_0040c831:
    if (uVar18 < DAT_00446710) {
      DAT_00446710 = DAT_00446710 - uVar18;
      lVar15 = (long)DAT_00446728 + uVar18;
      puVar9 = DAT_00446728 + 2;
      DAT_00446728 = (ulong *)lVar15;
      *(ulong *)(lVar15 + 8) = DAT_00446710 | 1;
      puVar12[1] = uVar18 | 3;
      return puVar9;
    }
    if ((DAT_00446a70 & 1) != 0) goto LAB_0040c8b4;
LAB_0040cb4a:
    uVar25 = -DAT_004466d0 & uVar18 + 0x5f + DAT_004466d0;
    if (uVar25 <= uVar18) {
      return (ulong *)0x0;
    }
    if (DAT_00446a68 != 0) goto LAB_0040cb6e;
  }
  else {
    if (param_1 < 0xffffffffffffff80) {
      uVar18 = param_1 + 0x1f & 0xfffffffffffffff0;
      if (DAT_00446704 != 0) {
        uVar25 = -uVar18;
        uVar7 = (uint)(uVar18 >> 8);
        uVar8 = param_1 + 0x1f >> 8 & 0xffffffff;
        if (uVar7 == 0) {
          bVar23 = 0x39;
          puVar6 = DAT_00446958;
          if (DAT_00446958 != (ulong *)0x0) {
LAB_0040d16d:
            uVar22 = uVar18 << (bVar23 & 0x3f);
            goto LAB_0040cf0c;
          }
          uVar7 = 0xfffffffe;
LAB_0040d42a:
          uVar7 = uVar7 & DAT_00446704;
          if (uVar7 != 0) {
            uVar3 = 0;
            for (uVar7 = uVar7 & -uVar7; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              uVar3 = uVar3 + 1;
            }
            puVar11 = (&DAT_00446958)[uVar3];
            if (puVar11 != (ulong *)0x0) {
              uVar16 = puVar11[1];
              puVar6 = (ulong *)0x0;
LAB_0040cf8f:
              while( true ) {
                uVar8 = (uVar16 & 0xfffffffffffffff8) - uVar18;
                puVar5 = puVar6;
                if (uVar8 < uVar25) {
                  puVar5 = puVar11;
                  uVar25 = uVar8;
                }
                puVar10 = (ulong *)puVar11[4];
                if ((puVar10 == (ulong *)0x0) &&
                   (puVar10 = (ulong *)puVar11[5], puVar10 == (ulong *)0x0)) break;
                uVar16 = puVar10[1];
                puVar6 = puVar5;
                puVar11 = puVar10;
              }
              goto LAB_0040cfb3;
            }
          }
        }
        else {
          uVar22 = uVar18;
          if (uVar7 < 0x10000) {
            uVar3 = 0x1f;
            if (uVar7 != 0) {
              for (; uVar7 >> uVar3 == 0; uVar3 = uVar3 - 1) {
              }
            }
            uVar7 = ((uint)(uVar18 >> (0x26U - (char)(uVar3 ^ 0x1f) & 0x3f)) & 1) +
                    (0x1f - (uVar3 ^ 0x1f)) * 2;
            uVar8 = (ulong)uVar7;
            puVar6 = (&DAT_00446958)[uVar8];
            if (puVar6 != (ulong *)0x0) {
              if (uVar7 != 0x1f) {
                bVar23 = 0x39 - (char)(uVar7 >> 1);
                goto LAB_0040d16d;
              }
              goto LAB_0040cf0c;
            }
LAB_0040d420:
            uVar7 = -2 << ((byte)uVar8 & 0x1f);
            goto LAB_0040d42a;
          }
          uVar8 = 0x1f;
          puVar6 = DAT_00446a50;
          if (DAT_00446a50 == (ulong *)0x0) goto LAB_0040c828;
LAB_0040cf0c:
          puVar10 = (ulong *)0x0;
          puVar5 = (ulong *)0x0;
          uVar24 = uVar25;
          while( true ) {
            uVar16 = puVar6[1];
            uVar25 = (uVar16 & 0xfffffffffffffff8) - uVar18;
            if ((uVar25 < uVar24) &&
               (puVar11 = puVar6, uVar24 = uVar25, puVar5 = puVar6, uVar25 == 0)) goto LAB_0040cf8f;
            uVar25 = uVar24;
            puVar11 = (ulong *)puVar6[5];
            puVar6 = (ulong *)puVar6[4 - ((long)uVar22 >> 0x3f)];
            if ((puVar11 != (ulong *)0x0) && (puVar11 != puVar6)) {
              puVar10 = puVar11;
            }
            if (puVar6 == (ulong *)0x0) break;
            uVar22 = uVar22 * 2;
            uVar24 = uVar25;
          }
          if (((ulong)puVar5 | (ulong)puVar10) == 0) goto LAB_0040d420;
          if (puVar10 != (ulong *)0x0) {
            uVar16 = puVar10[1];
            puVar6 = puVar5;
            puVar11 = puVar10;
            goto LAB_0040cf8f;
          }
LAB_0040cfb3:
          if ((puVar5 != (ulong *)0x0) && (uVar25 < DAT_00446708 - uVar18)) {
            if (puVar5 < DAT_00446718) goto code_r0x00402a29;
            puVar19 = (ulong *)((long)puVar5 + uVar18);
            uVar8 = uVar18 + uVar25;
            if (puVar19 <= puVar5) goto code_r0x00402a29;
            puVar12 = (ulong *)puVar5[3];
            puVar6 = (ulong *)puVar5[6];
            if (puVar5 == puVar12) {
              puVar10 = (ulong *)puVar5[5];
              puVar11 = puVar5 + 5;
              if ((ulong *)puVar5[5] != (ulong *)0x0) {
LAB_0040d698:
                do {
                  do {
                    puVar20 = puVar11;
                    puVar12 = puVar10;
                    puVar10 = (ulong *)puVar12[5];
                    puVar11 = puVar12 + 5;
                  } while ((ulong *)puVar12[5] != (ulong *)0x0);
                  puVar10 = (ulong *)puVar12[4];
                  puVar11 = puVar12 + 4;
                } while ((ulong *)puVar12[4] != (ulong *)0x0);
                if (puVar20 < DAT_00446718) goto code_r0x00402a29;
                *puVar20 = 0;
                goto LAB_0040d026;
              }
              if ((ulong *)puVar5[4] != (ulong *)0x0) {
                puVar10 = (ulong *)puVar5[4];
                puVar11 = puVar5 + 4;
                goto LAB_0040d698;
              }
              if (puVar6 != (ulong *)0x0) {
                uVar7 = *(uint *)(puVar5 + 7);
                puVar12 = (ulong *)0x0;
                if ((&DAT_00446958)[uVar7] == puVar5) {
                  (&DAT_00446708)[(ulong)uVar7 + 0x4a] = 0;
                  DAT_00446704 = DAT_00446704 & ~(1 << (uVar7 & 0x1f));
                  goto LAB_0040d09f;
                }
                goto LAB_0040d040;
              }
            }
            else {
              puVar10 = (ulong *)puVar5[2];
              if (((puVar10 < DAT_00446718) || (puVar5 != (ulong *)puVar10[3])) ||
                 (puVar5 != (ulong *)puVar12[2])) goto code_r0x00402a29;
              puVar10[3] = (ulong)puVar12;
              puVar12[2] = (ulong)puVar10;
LAB_0040d026:
              if (puVar6 != (ulong *)0x0) {
                if (puVar5 == (&DAT_00446958)[*(uint *)(puVar5 + 7)]) {
                  (&DAT_00446708)[(ulong)*(uint *)(puVar5 + 7) + 0x4a] = (ulong)puVar12;
                }
                else {
LAB_0040d040:
                  if (puVar6 < puVar9) goto code_r0x00402a29;
                  if (puVar5 == (ulong *)puVar6[4]) {
                    puVar6[4] = (ulong)puVar12;
                  }
                  else {
                    puVar6[5] = (ulong)puVar12;
                  }
                  if (puVar12 == (ulong *)0x0) goto LAB_0040d09f;
                }
                if (puVar12 < puVar9) goto code_r0x00402a29;
                puVar10 = (ulong *)puVar5[4];
                puVar12[6] = (ulong)puVar6;
                if (puVar10 != (ulong *)0x0) {
                  if (puVar10 < puVar9) goto code_r0x00402a29;
                  puVar12[4] = (ulong)puVar10;
                  puVar10[6] = (ulong)puVar12;
                }
                puVar6 = (ulong *)puVar5[5];
                if (puVar6 != (ulong *)0x0) {
                  if (puVar6 < puVar9) goto code_r0x00402a29;
                  puVar12[5] = (ulong)puVar6;
                  puVar6[6] = (ulong)puVar12;
                }
              }
            }
LAB_0040d09f:
            if (0x1f < uVar25) {
              puVar5[1] = uVar18 | 3;
              puVar19[1] = uVar25 | 1;
              *(ulong *)((long)puVar19 + uVar25) = uVar25;
              uVar7 = DAT_00446704;
              if (0xff < uVar25) {
                uVar3 = (uint)(uVar25 >> 8);
                if (uVar3 == 0) {
                  uVar3 = 1;
                  lVar15 = 600;
                  uVar18 = uVar25 >> 8 & 0xffffffff;
                }
                else if (uVar3 < 0x10000) {
                  uVar4 = 0x1f;
                  if (uVar3 != 0) {
                    for (; uVar3 >> uVar4 == 0; uVar4 = uVar4 - 1) {
                    }
                  }
                  uVar3 = ((uint)(uVar25 >> (0x26U - (char)(uVar4 ^ 0x1f) & 0x3f)) & 1) +
                          (0x1f - (uVar4 ^ 0x1f)) * 2;
                  uVar18 = (ulong)uVar3;
                  lVar15 = uVar18 * 8 + 600;
                  uVar3 = 1 << ((byte)uVar3 & 0x1f);
                }
                else {
                  uVar3 = 0x80000000;
                  lVar15 = 0x350;
                  uVar18 = 0x1f;
                }
                uVar4 = (uint)uVar18;
                *(uint *)(puVar19 + 7) = uVar4;
                puVar19[5] = 0;
                puVar19[4] = 0;
                if ((uVar7 & uVar3) == 0) {
                  DAT_00446704 = uVar7 | uVar3;
                  (&DAT_00446958)[uVar18] = puVar19;
                  puVar19[6] = (long)&DAT_00446700 + lVar15;
                  puVar19[3] = (ulong)puVar19;
                  puVar19[2] = (ulong)puVar19;
                  uVar22 = DAT_00446708;
                  puVar19 = DAT_00446720;
                  goto LAB_0040c7e4;
                }
                puVar12 = (&DAT_00446958)[uVar18];
                uVar8 = uVar25;
                if (uVar4 != 0x1f) {
                  uVar8 = uVar25 << (0x39U - (char)(uVar4 >> 1) & 0x3f);
                }
                do {
                  puVar6 = puVar12;
                  if (uVar25 == (puVar6[1] & 0xfffffffffffffff8)) {
                    puVar12 = (ulong *)puVar6[2];
                    if ((puVar6 < puVar9) || (puVar12 < puVar9)) goto code_r0x00402a29;
                    puVar12[3] = (ulong)puVar19;
                    puVar6[2] = (ulong)puVar19;
                    puVar19[2] = (ulong)puVar12;
                    puVar19[3] = (ulong)puVar6;
                    puVar19[6] = 0;
                    uVar22 = DAT_00446708;
                    puVar19 = DAT_00446720;
                    goto LAB_0040c7e4;
                  }
                  lVar15 = 4 - ((long)uVar8 >> 0x3f);
                  puVar12 = (ulong *)puVar6[lVar15];
                  uVar8 = uVar8 * 2;
                } while ((ulong *)puVar6[lVar15] != (ulong *)0x0);
                if (puVar9 <= puVar6 + lVar15) {
                  puVar6[lVar15] = (ulong)puVar19;
                  puVar19[6] = (ulong)puVar6;
                  puVar19[3] = (ulong)puVar19;
                  puVar19[2] = (ulong)puVar19;
                  uVar22 = DAT_00446708;
                  puVar19 = DAT_00446720;
                  goto LAB_0040c7e4;
                }
                goto code_r0x00402a29;
              }
              uVar18 = (ulong)(uint)((int)(uVar25 >> 3) * 2);
              uVar7 = 1 << ((byte)(uVar25 >> 3) & 0x1f);
              if ((DAT_00446700 & uVar7) == 0) {
                DAT_00446700 = uVar7 | DAT_00446700;
                puVar12 = (ulong *)(&DAT_00446748 + uVar18 * 8);
              }
              else {
                puVar12 = (ulong *)(&DAT_00446758)[uVar18];
                if (puVar12 < puVar9) {
                    // WARNING: Subroutine does not return
                  thunk_FUN_00401114();
                }
              }
              (&DAT_00446758)[uVar18] = puVar19;
              puVar12[3] = (ulong)puVar19;
              puVar19[2] = (ulong)puVar12;
              puVar19[3] = (ulong)(&DAT_00446748 + uVar18 * 8);
              uVar22 = DAT_00446708;
              puVar19 = DAT_00446720;
              goto LAB_0040c7e4;
            }
            goto LAB_0040d3f0;
          }
        }
      }
LAB_0040c828:
      if (uVar18 <= DAT_00446708) goto LAB_0040ce40;
      goto LAB_0040c831;
    }
    if (DAT_00446708 == 0xffffffffffffffff) {
      puVar9 = (ulong *)((long)DAT_00446720 + -1);
      uVar25 = 0xffffffffffffffff;
      goto LAB_0040ceab;
    }
    uVar18 = 0xffffffffffffffff;
    if ((DAT_00446a70 & 1) == 0) {
      return (ulong *)0x0;
    }
LAB_0040c8b4:
    if ((uVar18 < _DAT_004466d8) || (DAT_00446710 == 0)) goto LAB_0040cb4a;
    uVar25 = uVar18 + 0x3e + DAT_004466d0 & -DAT_004466d0;
    if ((DAT_00446a68 == 0) ||
       ((uVar25 + DAT_00446a58 <= DAT_00446a68 && (DAT_00446a58 < uVar25 + DAT_00446a58)))) {
      if (uVar18 < uVar25) {
        puVar5 = (ulong *)FUN_0040f340(uVar25);
        puVar5[1] = uVar25 - 0x20;
        puVar9 = DAT_00446718;
        *puVar5 = 0;
        *(undefined8 *)((long)puVar5 + (uVar25 - 0x18)) = 0xb;
        *(undefined8 *)((long)puVar5 + (uVar25 - 0x10)) = 0;
        if ((puVar9 == (ulong *)0x0) || (puVar5 < puVar9)) {
          DAT_00446718 = puVar5;
        }
        DAT_00446a58 = uVar25 + DAT_00446a58;
        uVar22 = DAT_00446708;
        puVar19 = DAT_00446720;
        if (_DAT_00446a60 < DAT_00446a58) {
          _DAT_00446a60 = DAT_00446a58;
        }
        goto LAB_0040c7e4;
      }
      goto LAB_0040cb4a;
    }
    uVar25 = -DAT_004466d0 & uVar18 + 0x5f + DAT_004466d0;
    if (uVar25 <= uVar18) {
      return (ulong *)0x0;
    }
LAB_0040cb6e:
    if ((uVar25 + DAT_00446a58 <= DAT_00446a58) || (DAT_00446a68 < uVar25 + DAT_00446a58)) {
      return (ulong *)0x0;
    }
  }
  puVar5 = (ulong *)FUN_0040f340(uVar25);
  puVar9 = DAT_00446728;
  uVar2 = DAT_004466e0;
  DAT_00446a58 = DAT_00446a58 + uVar25;
  if (_DAT_00446a60 < DAT_00446a58) {
    _DAT_00446a60 = DAT_00446a58;
  }
  if (DAT_00446728 == (ulong *)0x0) {
    if ((DAT_00446718 == (ulong *)0x0) || (puVar5 < DAT_00446718)) {
      DAT_00446718 = puVar5;
    }
    DAT_00446a90 = 1;
    _DAT_00446738 = 0x80;
    _DAT_00446740 = DAT_004466c0;
    puVar17 = &DAT_00446748;
    DAT_00446a78 = puVar5;
    DAT_00446a80 = uVar25;
    do {
      *(undefined **)(puVar17 + 0x18) = puVar17;
      *(undefined **)(puVar17 + 0x10) = puVar17;
      puVar17 = puVar17 + 0x10;
    } while (puVar17 != &DAT_00446948);
    uVar8 = uVar25 - 0x50;
    DAT_00446710 = uVar8;
    DAT_00446728 = puVar5;
    puVar5[1] = uVar8 | 1;
    *(undefined8 *)((long)puVar5 + (uVar25 - 0x48)) = 0x50;
    _DAT_00446730 = DAT_004466e0;
LAB_0040d210:
    puVar9 = DAT_00446728;
    if (uVar18 < uVar8) {
      DAT_00446710 = uVar8 - uVar18;
      puVar12 = (ulong *)((long)DAT_00446728 + uVar18);
      puVar19 = DAT_00446728 + 2;
      DAT_00446728 = puVar12;
      puVar12[1] = DAT_00446710 | 1;
      puVar9[1] = uVar18 | 3;
    }
    else {
      FUN_00402b8a();
      puVar19 = (ulong *)0x0;
    }
    return puVar19;
  }
  if ((((puVar5 == (ulong *)((long)DAT_00446a78 + DAT_00446a80)) && ((DAT_00446a90 & 8) == 0)) &&
      ((DAT_00446a90 & 1) != 0)) && ((DAT_00446a78 <= DAT_00446728 && (DAT_00446728 < puVar5)))) {
    DAT_00446a80 = DAT_00446a80 + uVar25;
    uVar25 = DAT_00446710 + uVar25;
    uVar8 = uVar25;
    if (((ulong)DAT_00446728 & 0xf) != 0) {
      uVar8 = (ulong)(-((int)DAT_00446728 + 0x10) & 0xf);
      DAT_00446728 = (ulong *)((long)DAT_00446728 + uVar8);
      uVar8 = uVar25 - uVar8;
    }
    DAT_00446710 = uVar8;
    DAT_00446728[1] = uVar8 | 1;
    _DAT_00446730 = DAT_004466e0;
    *(undefined8 *)((long)puVar9 + uVar25 + 8) = 0x50;
    goto LAB_0040d210;
  }
  if (puVar5 < DAT_00446718) {
    DAT_00446718 = puVar5;
  }
  ppuVar14 = &DAT_00446a78;
  puVar19 = DAT_00446a78;
  if (((DAT_00446a78 != (ulong *)((long)puVar5 + uVar25)) ||
      (bVar23 = (byte)(DAT_00446a90 & 8), (DAT_00446a90 & 8) != 0)) || ((DAT_00446a90 & 1) == 0)) {
    while ((DAT_00446728 < puVar19 ||
           (puVar19 = (ulong *)((long)puVar19 + (long)ppuVar14[1]), puVar19 <= DAT_00446728))) {
      ppuVar14 = (ulong **)ppuVar14[2];
      if (ppuVar14 == (ulong **)0x0) {
        do {
          invalidInstructionException();
        } while( true );
      }
      puVar19 = *ppuVar14;
    }
    lVar15 = -0x5f;
    if (((long)puVar19 - 0x4fU & 0xf) != 0) {
      lVar15 = (ulong)(-(int)((long)puVar19 - 0x4fU) & 0xf) - 0x5f;
    }
    DAT_00446710 = uVar25 - 0x50;
    puVar12 = (ulong *)(lVar15 + (long)puVar19);
    if ((ulong *)(lVar15 + (long)puVar19) < DAT_00446728 + 4) {
      puVar12 = DAT_00446728;
    }
    DAT_00446728 = puVar5;
    puVar5[1] = DAT_00446710 | 1;
    _DAT_00446730 = uVar2;
    *(undefined8 *)((long)puVar5 + (uVar25 - 0x48)) = 0x50;
    puVar12[2] = (ulong)DAT_00446a78;
    puVar12[3] = DAT_00446a80;
    uVar8 = CONCAT44(uRam0000000000446a94,DAT_00446a90);
    puVar12[1] = 0x33;
    puVar12[4] = (ulong)DAT_00446a88;
    puVar12[5] = uVar8;
    DAT_00446a90 = 1;
    DAT_00446a88 = puVar12 + 2;
    puVar6 = puVar12 + 7;
    DAT_00446a78 = puVar5;
    DAT_00446a80 = uVar25;
    do {
      *puVar6 = 0xb;
      puVar6 = puVar6 + 1;
    } while (puVar6 < puVar19);
    uVar8 = DAT_00446710;
    if (puVar9 != puVar12) {
      puVar12[1] = puVar12[1] & 0xfffffffffffffffe;
      uVar25 = (long)puVar12 - (long)puVar9;
      puVar9[1] = uVar25 | 1;
      *puVar12 = uVar25;
      uVar7 = DAT_00446704;
      if (uVar25 < 0x100) {
        uVar22 = (ulong)(uint)((int)(uVar25 >> 3) * 2);
        uVar7 = 1 << ((byte)(uVar25 >> 3) & 0x1f);
        if ((DAT_00446700 & uVar7) == 0) {
          DAT_00446700 = uVar7 | DAT_00446700;
          puVar19 = (ulong *)(&DAT_00446748 + uVar22 * 8);
        }
        else {
          puVar19 = (ulong *)(&DAT_00446758)[uVar22];
          if (puVar19 < DAT_00446718) {
                    // WARNING: Subroutine does not return
            thunk_FUN_00401114();
          }
        }
        (&DAT_00446758)[uVar22] = puVar9;
        uVar8 = DAT_00446710;
        puVar19[3] = (ulong)puVar9;
        puVar9[2] = (ulong)puVar19;
        puVar9[3] = (ulong)(&DAT_00446748 + uVar22 * 8);
      }
      else {
        uVar3 = (uint)(uVar25 >> 8);
        if (uVar3 == 0) {
          uVar3 = 1;
          lVar15 = 600;
          uVar8 = uVar25 >> 8 & 0xffffffff;
        }
        else if (uVar3 < 0x10000) {
          uVar4 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> uVar4 == 0; uVar4 = uVar4 - 1) {
            }
          }
          uVar3 = ((uint)(uVar25 >> (0x26U - (char)(uVar4 ^ 0x1f) & 0x3f)) & 1) +
                  (0x1f - (uVar4 ^ 0x1f)) * 2;
          uVar8 = (ulong)uVar3;
          lVar15 = uVar8 * 8 + 600;
          uVar3 = 1 << ((byte)uVar3 & 0x1f);
        }
        else {
          uVar3 = 0x80000000;
          lVar15 = 0x350;
          uVar8 = 0x1f;
        }
        uVar4 = (uint)uVar8;
        *(uint *)(puVar9 + 7) = uVar4;
        puVar9[5] = 0;
        puVar9[4] = 0;
        if ((uVar7 & uVar3) == 0) {
          DAT_00446704 = uVar7 | uVar3;
          (&DAT_00446958)[uVar8] = puVar9;
          uVar8 = DAT_00446710;
          puVar9[6] = (long)&DAT_00446700 + lVar15;
          puVar9[3] = (ulong)puVar9;
          puVar9[2] = (ulong)puVar9;
        }
        else {
          puVar19 = (&DAT_00446958)[uVar8];
          uVar22 = uVar25;
          if (uVar4 != 0x1f) {
            uVar22 = uVar25 << (0x39U - (char)(uVar4 >> 1) & 0x3f);
          }
          do {
            puVar12 = puVar19;
            if (uVar25 == (puVar12[1] & 0xfffffffffffffff8)) {
              puVar19 = (ulong *)puVar12[2];
              if ((puVar19 < DAT_00446718) || (puVar12 < DAT_00446718)) goto code_r0x00402a29;
              puVar19[3] = (ulong)puVar9;
              uVar8 = DAT_00446710;
              puVar12[2] = (ulong)puVar9;
              puVar9[2] = (ulong)puVar19;
              puVar9[3] = (ulong)puVar12;
              puVar9[6] = 0;
              goto LAB_0040d210;
            }
            lVar15 = 4 - ((long)uVar22 >> 0x3f);
            puVar19 = (ulong *)puVar12[lVar15];
            uVar22 = uVar22 * 2;
          } while ((ulong *)puVar12[lVar15] != (ulong *)0x0);
          if (puVar12 + lVar15 < DAT_00446718) goto code_r0x00402a29;
          puVar12[lVar15] = (ulong)puVar9;
          uVar8 = DAT_00446710;
          puVar9[6] = (ulong)puVar12;
          puVar9[3] = (ulong)puVar9;
          puVar9[2] = (ulong)puVar9;
        }
      }
    }
    goto LAB_0040d210;
  }
  DAT_00446a80 = DAT_00446a80 + uVar25;
  if (((ulong)DAT_00446a78 & 0xf) != 0) {
    puVar19 = (ulong *)((long)DAT_00446a78 + (ulong)(-((int)DAT_00446a78 + 0x10) & 0xf));
  }
  puVar12 = (ulong *)((long)puVar5 + uVar18);
  uVar25 = (long)puVar19 + (-uVar18 - (long)puVar5);
  DAT_00446a78 = puVar5;
  puVar5[1] = uVar18 | 3;
  if (puVar9 == puVar19) {
    DAT_00446710 = uVar25 + DAT_00446710;
    DAT_00446728 = puVar12;
    puVar12[1] = DAT_00446710 | 1;
    uVar22 = DAT_00446708;
    puVar19 = DAT_00446720;
    goto LAB_0040c7e4;
  }
  if (DAT_00446720 == puVar19) {
    uVar25 = uVar25 + DAT_00446708;
    DAT_00446708 = uVar25;
    DAT_00446720 = puVar12;
    puVar12[1] = uVar25 | 1;
    *(ulong *)((long)puVar12 + uVar25) = uVar25;
    uVar22 = DAT_00446708;
    puVar19 = DAT_00446720;
    goto LAB_0040c7e4;
  }
  uVar18 = puVar19[1];
  if (((uint)uVar18 & 3) == 1) {
    puVar9 = (ulong *)puVar19[3];
    if (uVar18 < 0x100) {
      puVar6 = (ulong *)puVar19[2];
      if (puVar6 != (ulong *)(&DAT_00446748 + (ulong)(uint)((int)(uVar18 >> 3) * 2) * 8)) {
        if (puVar6 < DAT_00446718) goto code_r0x00402a29;
        if ((ulong *)puVar6[3] != puVar19) {
                    // WARNING: Subroutine does not return
          thunk_FUN_00401114();
        }
      }
      if (puVar6 == puVar9) {
        bVar1 = (byte)(uVar18 >> 3) & 0x1f;
        DAT_00446700 = DAT_00446700 & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
      }
      else {
        if ((ulong *)(&DAT_00446748 + (ulong)(uint)((int)(uVar18 >> 3) * 2) * 8) != puVar9) {
          if (puVar9 < DAT_00446718) goto code_r0x00402a29;
          if ((ulong *)puVar9[2] != puVar19) {
                    // WARNING: Subroutine does not return
            thunk_FUN_00401114();
          }
        }
        puVar6[3] = (ulong)puVar9;
        puVar9[2] = (ulong)puVar6;
      }
    }
    else {
      puVar6 = (ulong *)puVar19[6];
      if (puVar9 == puVar19) {
        if ((ulong *)puVar19[5] == (ulong *)0x0) {
          puVar9 = (ulong *)puVar19[4];
          if (puVar9 == (ulong *)0x0) goto LAB_0040db2c;
          puVar10 = puVar9;
          puVar11 = puVar19 + 4;
        }
        else {
          puVar10 = (ulong *)puVar19[5];
          puVar11 = puVar19 + 5;
        }
        do {
          do {
            puVar20 = puVar11;
            puVar9 = puVar10;
            puVar10 = (ulong *)puVar9[5];
            puVar11 = puVar9 + 5;
          } while ((ulong *)puVar9[5] != (ulong *)0x0);
          puVar10 = (ulong *)puVar9[4];
          puVar11 = puVar9 + 4;
        } while ((ulong *)puVar9[4] != (ulong *)0x0);
        if (puVar20 < DAT_00446718) goto code_r0x00402a29;
        *puVar20 = 0;
      }
      else {
        puVar10 = (ulong *)puVar19[2];
        if (((puVar10 < DAT_00446718) || ((ulong *)puVar10[3] != puVar19)) ||
           ((ulong *)puVar9[2] != puVar19)) goto code_r0x00402a29;
        puVar10[3] = (ulong)puVar9;
        puVar9[2] = (ulong)puVar10;
      }
LAB_0040db2c:
      if (puVar6 != (ulong *)0x0) {
        uVar7 = *(uint *)(puVar19 + 7);
        if ((&DAT_00446958)[uVar7] == puVar19) {
          (&DAT_00446708)[(ulong)uVar7 + 0x4a] = (ulong)puVar9;
          if (puVar9 == (ulong *)0x0) {
            bVar1 = (byte)uVar7 & 0x1f;
            DAT_00446704 = DAT_00446704 & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
          }
          else {
LAB_0040db72:
            puVar10 = DAT_00446718;
            if (puVar9 < DAT_00446718) {
                    // WARNING: Subroutine does not return
              thunk_FUN_00401114();
            }
            puVar11 = (ulong *)puVar19[4];
            puVar9[6] = (ulong)puVar6;
            if (puVar11 != (ulong *)0x0) {
              if (puVar11 < puVar10) goto code_r0x00402a29;
              puVar9[4] = (ulong)puVar11;
              puVar11[6] = (ulong)puVar9;
            }
            puVar6 = (ulong *)puVar19[5];
            if (puVar6 != (ulong *)0x0) {
              if (puVar6 < puVar10) goto code_r0x00402a29;
              puVar9[5] = (ulong)puVar6;
              puVar6[6] = (ulong)puVar9;
            }
          }
        }
        else {
          if (puVar6 < DAT_00446718) goto code_r0x00402a29;
          if ((ulong *)puVar6[4] == puVar19) {
            puVar6[4] = (ulong)puVar9;
          }
          else {
            puVar6[5] = (ulong)puVar9;
          }
          if (puVar9 != (ulong *)0x0) goto LAB_0040db72;
        }
      }
    }
    uVar25 = uVar25 + (uVar18 & 0xfffffffffffffff8);
    puVar19 = (ulong *)((long)puVar19 + (uVar18 & 0xfffffffffffffff8) + 8);
    *puVar19 = *puVar19 & 0xfffffffffffffffe;
    iVar21 = (int)(uVar25 >> 3);
    puVar12[1] = uVar25 | 1;
    *(ulong *)((long)puVar12 + uVar25) = uVar25;
    uVar7 = DAT_00446704;
  }
  else {
    puVar19[1] = uVar18 & 0xfffffffffffffffe;
    puVar12[1] = uVar25 | 1;
    *puVar19 = uVar25;
    iVar21 = (int)(uVar25 >> 3);
    uVar7 = DAT_00446704;
  }
  DAT_00446704 = uVar7;
  if (uVar25 < 0x100) {
    uVar25 = (ulong)(uint)(iVar21 * 2);
    uVar7 = 1 << ((byte)iVar21 & 0x1f);
    if ((DAT_00446700 & uVar7) == 0) {
      DAT_00446700 = DAT_00446700 | uVar7;
      puVar9 = (ulong *)(&DAT_00446748 + uVar25 * 8);
    }
    else {
      puVar9 = (ulong *)(&DAT_00446758)[uVar25];
      if (puVar9 < DAT_00446718) {
                    // WARNING: Subroutine does not return
        thunk_FUN_00401114();
      }
    }
    (&DAT_00446758)[uVar25] = puVar12;
    puVar9[3] = (ulong)puVar12;
    puVar12[2] = (ulong)puVar9;
    puVar12[3] = (ulong)(&DAT_00446748 + uVar25 * 8);
    uVar22 = DAT_00446708;
    puVar19 = DAT_00446720;
  }
  else {
    uVar3 = (uint)(uVar25 >> 8);
    uVar18 = uVar25 >> 8 & 0xffffffff;
    if ((uVar3 != 0) && (uVar18 = 0x1f, uVar3 < 0x10000)) {
      uVar4 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> uVar4 == 0; uVar4 = uVar4 - 1) {
        }
      }
      uVar18 = (ulong)(((uint)(uVar25 >> (0x26U - (char)(uVar4 ^ 0x1f) & 0x3f)) & 1) +
                      (0x1f - (uVar4 ^ 0x1f)) * 2);
    }
    uVar3 = (uint)uVar18;
    *(uint *)(puVar12 + 7) = uVar3;
    uVar4 = 1 << ((byte)uVar18 & 0x1f);
    puVar12[5] = 0;
    puVar12[4] = 0;
    if ((uVar7 & uVar4) == 0) {
      DAT_00446704 = uVar7 | uVar4;
      (&DAT_00446958)[uVar18] = puVar12;
      puVar12[6] = (ulong)(&DAT_00446958 + uVar18);
      puVar12[3] = (ulong)puVar12;
      puVar12[2] = (ulong)puVar12;
      uVar22 = DAT_00446708;
      puVar19 = DAT_00446720;
    }
    else {
      if (uVar3 != 0x1f) {
        bVar23 = 0x39 - (char)(uVar3 >> 1);
      }
      puVar9 = (&DAT_00446958)[uVar18];
      lVar15 = uVar25 << (bVar23 & 0x3f);
      do {
        puVar19 = puVar9;
        if (uVar25 == (puVar19[1] & 0xfffffffffffffff8)) {
          puVar9 = (ulong *)puVar19[2];
          if ((puVar9 < DAT_00446718) || (puVar19 < DAT_00446718)) goto code_r0x00402a29;
          puVar9[3] = (ulong)puVar12;
          puVar19[2] = (ulong)puVar12;
          puVar12[2] = (ulong)puVar9;
          puVar12[3] = (ulong)puVar19;
          puVar12[6] = 0;
          uVar22 = DAT_00446708;
          puVar19 = DAT_00446720;
          goto LAB_0040c7e4;
        }
        lVar13 = 4 - (lVar15 >> 0x3f);
        puVar9 = (ulong *)puVar19[lVar13];
        lVar15 = lVar15 * 2;
      } while ((ulong *)puVar19[lVar13] != (ulong *)0x0);
      if (puVar19 + lVar13 < DAT_00446718) {
code_r0x00402a29:
                    // WARNING: Subroutine does not return
        FUN_00401114();
      }
      puVar19[lVar13] = (ulong)puVar12;
      puVar12[6] = (ulong)puVar19;
      puVar12[3] = (ulong)puVar12;
      puVar12[2] = (ulong)puVar12;
      uVar22 = DAT_00446708;
      puVar19 = DAT_00446720;
    }
  }
LAB_0040c7e4:
  DAT_00446720 = puVar19;
  DAT_00446708 = uVar22;
  return puVar5 + 2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0040dcd0(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  byte bVar4;
  ulong *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  
  puVar5 = DAT_00446718;
  if (param_1 == 0) {
    return;
  }
  puVar16 = (ulong *)(param_1 + -0x10);
  if (puVar16 < DAT_00446718) goto LAB_00402a33;
  uVar9 = *(ulong *)(param_1 + -8);
  if (((uint)uVar9 & 3) == 1) goto LAB_00402a33;
  uVar8 = uVar9 & 0xfffffffffffffff8;
  puVar10 = (ulong *)((long)puVar16 + uVar8);
  if ((uVar9 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + -0x10);
    puVar16 = (ulong *)((long)puVar16 - uVar1);
    if ((uVar9 & 3) == 0) {
      lVar15 = uVar8 + 0x20 + uVar1;
      iVar7 = FUN_0040f560(puVar16,lVar15);
      if (iVar7 != 0) {
        return;
      }
      DAT_00446a58 = DAT_00446a58 - lVar15;
      return;
    }
    uVar8 = uVar8 + uVar1;
    if (puVar16 < DAT_00446718) goto LAB_00402a33;
    if (DAT_00446720 == puVar16) {
      if (((uint)puVar10[1] & 3) == 3) {
        DAT_00446708 = uVar8;
        puVar10[1] = puVar10[1] & 0xfffffffffffffffe;
        puVar16[1] = uVar8 | 1;
        *puVar10 = uVar8;
        return;
      }
    }
    else {
      puVar18 = (ulong *)puVar16[3];
      if (uVar1 < 0x100) {
        puVar17 = (ulong *)puVar16[2];
        if ((ulong *)(&DAT_00446748 + (ulong)(uint)((int)(uVar1 >> 3) * 2) * 8) != puVar17) {
          if (puVar17 < DAT_00446718) goto code_r0x00402a2e;
          if ((ulong *)puVar17[3] != puVar16) {
                    // WARNING: Subroutine does not return
            thunk_FUN_00401114();
          }
        }
        if (puVar18 == puVar17) {
          bVar4 = (byte)(uVar1 >> 3) & 0x1f;
          DAT_00446700 = DAT_00446700 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
        }
        else {
          if ((ulong *)(&DAT_00446748 + (ulong)(uint)((int)(uVar1 >> 3) * 2) * 8) != puVar18) {
            if (puVar18 < DAT_00446718) goto code_r0x00402a2e;
            if ((ulong *)puVar18[2] != puVar16) {
                    // WARNING: Subroutine does not return
              thunk_FUN_00401114();
            }
          }
          puVar17[3] = (ulong)puVar18;
          puVar18[2] = (ulong)puVar17;
        }
      }
      else {
        puVar17 = (ulong *)puVar16[6];
        if (puVar18 == puVar16) {
          puVar2 = puVar16 + 5;
          puVar3 = (ulong *)puVar16[5];
          if ((ulong *)puVar16[5] == (ulong *)0x0) {
            if ((ulong *)puVar16[4] == (ulong *)0x0) {
              puVar18 = (ulong *)0x0;
              goto LAB_0040e146;
            }
            puVar2 = puVar16 + 4;
            puVar3 = (ulong *)puVar16[4];
          }
          do {
            do {
              puVar18 = puVar3;
              puVar12 = puVar2;
              puVar2 = puVar18 + 5;
              puVar3 = (ulong *)puVar18[5];
            } while ((ulong *)puVar18[5] != (ulong *)0x0);
            puVar2 = puVar18 + 4;
            puVar3 = (ulong *)puVar18[4];
          } while ((ulong *)puVar18[4] != (ulong *)0x0);
          if (puVar12 < DAT_00446718) goto code_r0x00402a2e;
          *puVar12 = 0;
        }
        else {
          puVar2 = (ulong *)puVar16[2];
          if (((puVar2 < DAT_00446718) || ((ulong *)puVar2[3] != puVar16)) ||
             ((ulong *)puVar18[2] != puVar16)) goto code_r0x00402a2e;
          puVar2[3] = (ulong)puVar18;
          puVar18[2] = (ulong)puVar2;
        }
LAB_0040e146:
        if (puVar17 != (ulong *)0x0) {
          uVar6 = *(uint *)(puVar16 + 7);
          if ((ulong *)(&DAT_00446958)[uVar6] == puVar16) {
            *(ulong **)(&DAT_00446700 + ((ulong)uVar6 + 0x4b) * 2) = puVar18;
            if (puVar18 == (ulong *)0x0) {
              bVar4 = (byte)uVar6 & 0x1f;
              DAT_00446704 = DAT_00446704 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
            }
            else {
LAB_0040e187:
              if (puVar18 < puVar5) {
                    // WARNING: Subroutine does not return
                thunk_FUN_00401114();
              }
              puVar2 = (ulong *)puVar16[4];
              puVar18[6] = (ulong)puVar17;
              if (puVar2 != (ulong *)0x0) {
                if (puVar2 < puVar5) goto code_r0x00402a2e;
                puVar18[4] = (ulong)puVar2;
                puVar2[6] = (ulong)puVar18;
              }
              puVar17 = (ulong *)puVar16[5];
              if (puVar17 != (ulong *)0x0) {
                if (puVar17 < puVar5) goto code_r0x00402a2e;
                puVar18[5] = (ulong)puVar17;
                puVar17[6] = (ulong)puVar18;
              }
            }
          }
          else {
            if (puVar17 < puVar5) goto code_r0x00402a2e;
            if ((ulong *)puVar17[4] == puVar16) {
              puVar17[4] = (ulong)puVar18;
            }
            else {
              puVar17[5] = (ulong)puVar18;
            }
            if (puVar18 != (ulong *)0x0) goto LAB_0040e187;
          }
        }
      }
    }
  }
  puVar18 = DAT_00446720;
  if ((puVar10 <= puVar16) || (uVar9 = puVar10[1], (uVar9 & 1) == 0)) {
LAB_00402a33:
                    // WARNING: Subroutine does not return
    FUN_00401114();
  }
  if ((uVar9 & 2) == 0) {
    if (DAT_00446728 == puVar10) {
      uVar8 = uVar8 + DAT_00446710;
      DAT_00446710 = uVar8;
      DAT_00446728 = puVar16;
      puVar16[1] = uVar8 | 1;
      if (puVar18 == puVar16) {
        DAT_00446720 = (ulong *)0x0;
        DAT_00446708 = 0;
      }
      if (uVar8 <= _DAT_00446730) {
        return;
      }
      FUN_0040bd00(&DAT_00446700,0);
      return;
    }
    if (DAT_00446720 == puVar10) {
      uVar8 = uVar8 + DAT_00446708;
      DAT_00446708 = uVar8;
      DAT_00446720 = puVar16;
      puVar16[1] = uVar8 | 1;
      *(ulong *)((long)puVar16 + uVar8) = uVar8;
      return;
    }
    puVar17 = (ulong *)puVar10[3];
    uVar8 = uVar8 + (uVar9 & 0xfffffffffffffff8);
    if ((uVar9 & 0xfffffffffffffff8) < 0xf9) {
      puVar2 = (ulong *)puVar10[2];
      if ((ulong *)(&DAT_00446748 + (ulong)(uint)((int)(uVar9 >> 3) * 2) * 8) != puVar2) {
        if (puVar2 < puVar5) goto code_r0x00402a2e;
        if ((ulong *)puVar2[3] != puVar10) {
                    // WARNING: Subroutine does not return
          thunk_FUN_00401114();
        }
      }
      if (puVar17 == puVar2) {
        bVar4 = (byte)(uVar9 >> 3) & 0x1f;
        DAT_00446700 = DAT_00446700 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      }
      else {
        if (puVar17 != (ulong *)(&DAT_00446748 + (ulong)(uint)((int)(uVar9 >> 3) * 2) * 8)) {
          if (puVar17 < puVar5) goto code_r0x00402a2e;
          if ((ulong *)puVar17[2] != puVar10) {
                    // WARNING: Subroutine does not return
            thunk_FUN_00401114();
          }
        }
        puVar2[3] = (ulong)puVar17;
        puVar17[2] = (ulong)puVar2;
      }
    }
    else {
      puVar2 = (ulong *)puVar10[6];
      if (puVar17 == puVar10) {
        puVar3 = puVar10 + 5;
        puVar12 = (ulong *)puVar10[5];
        if ((ulong *)puVar10[5] == (ulong *)0x0) {
          if ((ulong *)puVar10[4] == (ulong *)0x0) {
            puVar17 = (ulong *)0x0;
            goto LAB_0040de29;
          }
          puVar3 = puVar10 + 4;
          puVar12 = (ulong *)puVar10[4];
        }
        do {
          do {
            puVar17 = puVar12;
            puVar11 = puVar3;
            puVar3 = puVar17 + 5;
            puVar12 = (ulong *)puVar17[5];
          } while ((ulong *)puVar17[5] != (ulong *)0x0);
          puVar3 = puVar17 + 4;
          puVar12 = (ulong *)puVar17[4];
        } while ((ulong *)puVar17[4] != (ulong *)0x0);
        if (puVar11 < puVar5) goto code_r0x00402a2e;
        *puVar11 = 0;
      }
      else {
        puVar3 = (ulong *)puVar10[2];
        if (((puVar3 < puVar5) || ((ulong *)puVar3[3] != puVar10)) ||
           ((ulong *)puVar17[2] != puVar10)) goto code_r0x00402a2e;
        puVar3[3] = (ulong)puVar17;
        puVar17[2] = (ulong)puVar3;
      }
LAB_0040de29:
      if (puVar2 != (ulong *)0x0) {
        uVar6 = *(uint *)(puVar10 + 7);
        if ((ulong *)(&DAT_00446958)[uVar6] == puVar10) {
          *(ulong **)(&DAT_00446700 + ((ulong)uVar6 + 0x4b) * 2) = puVar17;
          if (puVar17 == (ulong *)0x0) {
            bVar4 = (byte)uVar6 & 0x1f;
            DAT_00446704 = DAT_00446704 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
          }
          else {
LAB_0040de6a:
            if (puVar17 < puVar5) {
                    // WARNING: Subroutine does not return
              thunk_FUN_00401114();
            }
            puVar3 = (ulong *)puVar10[4];
            puVar17[6] = (ulong)puVar2;
            if (puVar3 != (ulong *)0x0) {
              if (puVar3 < puVar5) goto code_r0x00402a2e;
              puVar17[4] = (ulong)puVar3;
              puVar3[6] = (ulong)puVar17;
            }
            puVar10 = (ulong *)puVar10[5];
            if (puVar10 != (ulong *)0x0) {
              if (puVar10 < puVar5) goto code_r0x00402a2e;
              puVar17[5] = (ulong)puVar10;
              puVar10[6] = (ulong)puVar17;
            }
          }
        }
        else {
          if (puVar2 < puVar5) goto code_r0x00402a2e;
          if ((ulong *)puVar2[4] == puVar10) {
            puVar2[4] = (ulong)puVar17;
          }
          else {
            puVar2[5] = (ulong)puVar17;
          }
          if (puVar17 != (ulong *)0x0) goto LAB_0040de6a;
        }
      }
    }
    puVar16[1] = uVar8 | 1;
    *(ulong *)((long)puVar16 + uVar8) = uVar8;
    if (puVar18 == puVar16) {
      DAT_00446708 = uVar8;
      return;
    }
  }
  else {
    puVar10[1] = uVar9 & 0xfffffffffffffffe;
    puVar16[1] = uVar8 | 1;
    *(ulong *)((long)puVar16 + uVar8) = uVar8;
  }
  uVar6 = DAT_00446704;
  if (uVar8 < 0x100) {
    uVar9 = (ulong)(uint)((int)(uVar8 >> 3) * 2);
    uVar6 = 1 << ((byte)(uVar8 >> 3) & 0x1f);
    if ((DAT_00446700 & uVar6) == 0) {
      DAT_00446700 = uVar6 | DAT_00446700;
      puVar10 = (ulong *)(&DAT_00446748 + uVar9 * 8);
    }
    else {
      puVar10 = (ulong *)(&DAT_00446758)[uVar9];
      if ((ulong *)(&DAT_00446758)[uVar9] < puVar5) {
code_r0x00402a2e:
                    // WARNING: Subroutine does not return
        FUN_00401114();
      }
    }
    (&DAT_00446758)[uVar9] = puVar16;
    puVar10[3] = (ulong)puVar16;
    puVar16[2] = (ulong)puVar10;
    puVar16[3] = (ulong)(&DAT_00446748 + uVar9 * 8);
  }
  else {
    uVar13 = (uint)(uVar8 >> 8);
    if (uVar13 == 0) {
      uVar14 = 1;
      lVar15 = 600;
      uVar13 = 0;
    }
    else if (uVar13 < 0x10000) {
      uVar14 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> uVar14 == 0; uVar14 = uVar14 - 1) {
        }
      }
      uVar13 = ((uint)(uVar8 >> (0x26U - (char)(uVar14 ^ 0x1f) & 0x3f)) & 1) +
               (0x1f - (uVar14 ^ 0x1f)) * 2;
      lVar15 = (ulong)uVar13 * 8 + 600;
      uVar14 = 1 << ((byte)uVar13 & 0x1f);
    }
    else {
      uVar14 = 0x80000000;
      lVar15 = 0x350;
      uVar13 = 0x1f;
    }
    *(uint *)(puVar16 + 7) = uVar13;
    puVar16[5] = 0;
    puVar16[4] = 0;
    if ((uVar14 & uVar6) == 0) {
      DAT_00446704 = uVar14 | uVar6;
      *(ulong **)((long)&DAT_00446700 + lVar15) = puVar16;
      puVar16[6] = (long)&DAT_00446700 + lVar15;
      puVar16[3] = (ulong)puVar16;
      puVar16[2] = (ulong)puVar16;
    }
    else {
      puVar10 = *(ulong **)((long)&DAT_00446700 + lVar15);
      uVar9 = uVar8;
      if (uVar13 != 0x1f) {
        uVar9 = uVar8 << (0x39U - (char)(uVar13 >> 1) & 0x3f);
      }
      do {
        puVar18 = puVar10;
        if ((puVar18[1] & 0xfffffffffffffff8) == uVar8) {
          puVar10 = (ulong *)puVar18[2];
          if ((puVar18 < puVar5) || (puVar10 < puVar5)) goto code_r0x00402a2e;
          puVar10[3] = (ulong)puVar16;
          puVar18[2] = (ulong)puVar16;
          puVar16[2] = (ulong)puVar10;
          puVar16[3] = (ulong)puVar18;
          puVar16[6] = 0;
          goto LAB_0040e029;
        }
        lVar15 = 4 - ((long)uVar9 >> 0x3f);
        puVar10 = (ulong *)puVar18[lVar15];
        uVar9 = uVar9 * 2;
      } while ((ulong *)puVar18[lVar15] != (ulong *)0x0);
      if (puVar18 + lVar15 < puVar5) goto code_r0x00402a2e;
      puVar18[lVar15] = (ulong)puVar16;
      puVar16[6] = (ulong)puVar18;
      puVar16[3] = (ulong)puVar16;
      puVar16[2] = (ulong)puVar16;
    }
LAB_0040e029:
    _DAT_00446738 = _DAT_00446738 + -1;
    if (_DAT_00446738 == 0) {
      FUN_0040b940(&DAT_00446700);
      return;
    }
  }
  return;
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
  if (param_2 < plVar5) goto code_r0x00402a38;
  uVar14 = (uint)uVar13;
  if ((((uVar14 & 3) == 1) || (plVar2 <= param_2)) || (uVar6 = plVar2[1], (uVar6 & 1) == 0))
  goto code_r0x00402a38;
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
        if (plVar15 < plVar5) goto code_r0x00402a38;
        if ((long *)plVar15[2] != plVar2) {
                    // WARNING: Subroutine does not return
          thunk_FUN_00401114();
        }
LAB_0040ea64:
        plVar7[3] = (long)plVar15;
        plVar15[2] = (long)plVar7;
        goto LAB_0040e760;
      }
    }
    else {
      if ((plVar7 < plVar5) || ((long *)plVar7[3] != plVar2)) goto code_r0x00402a38;
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
      if (plVar16 < plVar5) goto code_r0x00402a38;
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
    if (plVar7 < plVar5) goto code_r0x00402a38;
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
    goto code_r0x00402a38;
    plVar8[3] = (long)plVar15;
    plVar15[2] = (long)plVar8;
LAB_0040e6e5:
    if (plVar7 == (long *)0x0) goto LAB_0040e760;
    if (*(long **)(param_1 + (ulong)*(uint *)(plVar2 + 7) * 2 + 0x96) != plVar2) goto LAB_0040e6fe;
    *(long **)(param_1 + (ulong)*(uint *)(plVar2 + 7) * 2 + 0x96) = plVar15;
  }
  if (plVar15 < plVar5) {
code_r0x00402a38:
                    // WARNING: Subroutine does not return
    FUN_00401114();
  }
  plVar8 = (long *)plVar2[4];
  plVar15[6] = (long)plVar7;
  if (plVar8 != (long *)0x0) {
    if (plVar8 < plVar5) goto code_r0x00402a38;
    plVar15[4] = (long)plVar8;
    plVar8[6] = (long)plVar15;
  }
  plVar2 = (long *)plVar2[5];
  if (plVar2 != (long *)0x0) {
    if (plVar2 < plVar5) goto code_r0x00402a38;
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
    param_1 = 1L << ((char)lVar1 + 1U & 0x3f);
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
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = -1;
  UNLOCK();
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

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
        DAT_00448020 = (int)_DAT_00440860;
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
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = 0;
  UNLOCK();
  cVar2 = FUN_0040f2d0(uVar1);
  if (cVar2 == '\0') {
    return;
  }
  FUN_0040f867(uVar1);
  return;
}



undefined8 FUN_0040f180(long *param_1,ulong *param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  char cVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  FUN_0040f2d0(*param_1);
  cVar7 = FUN_0040f2d0(*param_1);
  if (cVar7 == '\0') {
    lVar8 = *param_1;
    uVar1 = *param_2;
    lVar11 = 0;
  }
  else {
    lVar11 = *param_1;
    uVar1 = *param_2;
    lVar8 = lVar11;
  }
  if (lVar8 == 0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_3;
    uVar12 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / auVar2,0);
    uVar13 = 4;
    if (3 < uVar12) {
      uVar13 = uVar12;
    }
  }
  else {
    uVar13 = (uVar1 >> 1) + uVar1;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_3;
  lVar8 = SUB168(auVar3 * auVar5,0);
  if (SUB168(auVar3 * auVar5,8) == 0) {
    uVar1 = uVar13 + 1 + param_4;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_3;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar1;
    lVar9 = SUB168(auVar4 * auVar6,0);
    if (SUB168(auVar4 * auVar6,8) == 0) {
      lVar10 = FUN_0040b70d(lVar11,lVar9 + 0x1fU & 0xffffffffffffffe0);
      if (lVar10 == 0) {
        FUN_00402b8a();
        return 0;
      }
      if ((lVar11 == 0) && (*param_1 != 0)) {
        lVar10 = FUN_004154c0(lVar10,*param_1,lVar8);
      }
      lVar11 = FUN_0041561f(lVar10 + lVar8,0,lVar9 - lVar8);
      *param_2 = uVar1;
      *param_1 = lVar11;
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
  FUN_0040f370(0,param_1,3,DAT_004408c8 | 2,0xffffffff,0);
  return;
}



// WARNING: Removing unreachable block (ram,0x0040f528)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long FUN_0040f370(long param_1,ulong param_2,undefined4 param_3,ulong param_4,int param_5,
                 ushort param_6)

{
  int iVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined auVar7 [16];
  
  if (((param_2 != 0) && ((ushort)((ushort)param_1 | param_6) == 0)) &&
     (param_1 + 0x800000000000U < 0x1000000000000)) {
    if ((((_DAT_004408c8 & (long)(int)(uint)param_4) == 0) == (param_5 != -1)) &&
       (uVar4 = (uint)param_4 & 1, (((byte)((param_4 & 0xffffffff) >> 1) ^ 1) & 1) == (byte)uVar4))
    {
      uVar6 = param_2;
      if (param_5 == -1) {
        uVar6 = param_2 + 0xffff & 0xffffffffffff0000;
      }
      if ((param_4 & 0x10) == 0) {
        iVar1 = (int)(uVar6 + 0xffff >> 0x10);
        if (DAT_00446ee0 < 1) {
          lVar2 = FUN_0040f476(iVar1 + 0x10008000,param_2,uVar4,0x10008000);
          return lVar2;
        }
        iVar3 = 0x10008000;
        iVar5 = iVar1 + 0x10008000;
        lVar2 = 0;
        do {
          if (iVar3 <= *(int *)((long)&DAT_00446eec + lVar2)) {
            if (iVar5 <= *(int *)((long)&DAT_00446ee8 + lVar2)) break;
            iVar3 = *(int *)((long)&DAT_00446eec + lVar2) + 1;
            iVar5 = iVar1 + iVar3;
          }
          lVar2 = lVar2 + 0x18;
        } while (((ulong)(DAT_00446ee0 - 1) * 3 + 3) * 8 != lVar2);
        param_1 = (long)iVar3 << 0x10;
        if (0x20000000 < iVar5) {
          FUN_00402b8a();
          lVar2 = FUN_0040f4b1();
          return lVar2;
        }
      }
      else {
        iVar1 = FUN_0040f830(param_1,uVar6);
        if (iVar1 == -1) {
          lVar2 = FUN_0040f4aa();
          return lVar2;
        }
      }
      auVar7 = FUN_0040f880(param_1,uVar6,param_3,(uint)(param_4 & 0xffffffff) | 0x10,param_5);
      lVar2 = auVar7._0_8_;
      if ((param_1 == lVar2) && (lVar2 != -1)) {
        iVar1 = FUN_0040fbb0(&DAT_00446ee0,param_1 >> 0x10,param_1 + -1 + uVar6 >> 0x10 & 0xffffffff
                             ,auVar7._8_8_,param_3,param_4 & 0xffffffff);
        if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
          FUN_00401114();
        }
      }
      else {
        lVar2 = -1;
      }
      return lVar2;
    }
  }
  FUN_00402b21();
  lVar2 = FUN_0040f4b1();
  return lVar2;
}



// WARNING: Removing unreachable block (ram,0x0040f528)

long FUN_0040f476(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long unaff_R12;
  undefined4 unaff_R13D;
  undefined4 unaff_R14D;
  long lVar3;
  undefined auVar4 [16];
  
  lVar2 = (long)param_4 * 0x10000;
  if (0x20000000 < param_1) {
    FUN_00402b8a();
    lVar2 = FUN_0040f4b1();
    return lVar2;
  }
  auVar4 = FUN_0040f880(lVar2);
  lVar3 = auVar4._0_8_;
  if ((lVar2 == lVar3) && (lVar3 != -1)) {
    iVar1 = FUN_0040fbb0(&DAT_00446ee0,lVar2 >> 0x10,
                         (ulong)(lVar2 + -1 + unaff_R12) >> 0x10 & 0xffffffff,auVar4._8_8_,
                         unaff_R14D,unaff_R13D);
    if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
      FUN_00401114();
    }
  }
  else {
    lVar3 = -1;
  }
  return lVar3;
}



undefined8 FUN_0040f4aa(void)

{
  return 0xffffffffffffffff;
}



void FUN_0040f4b1(void)

{
  return;
}



void FUN_0040f550(void)

{
  FUN_00402b9f();
  return;
}



undefined8 FUN_0040f560(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if ((((short)param_1 == 0) && (param_1 + 0x800000000000U < 0x1000000000000)) && (param_2 != 0)) {
    uVar2 = param_2 + 0xffffU & 0xffffffffffff0000;
    uVar1 = FUN_0040f830(param_1,uVar2);
    if (((int)uVar1 != -1) && (uVar1 = 0, ((byte)DAT_0041c718 & 4) == 0)) {
      uVar1 = FUN_00412390(param_1,uVar2);
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
        FUN_0040fef0(*(undefined8 *)(local_30 + 8),*(undefined8 *)(local_30 + 0x10),local_30 + 0x28,
                     local_30 + 0x30);
        uVar7 = *(ulong *)(local_30 + 0x20);
        if (uVar7 != 0) {
          uVar7 = 0;
          uVar6 = 0;
          do {
            puVar1 = (undefined4 *)(lVar5 + uVar6 * 0x18);
            cVar3 = FUN_0040ffc0(puVar1);
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



void FUN_0040f830(long param_1,long param_2)

{
  FUN_0040f9a0(&DAT_00446ee0,param_1 >> 0x10 & 0xffffffff,(ulong)(param_1 + -1 + param_2) >> 0x10,
               &LAB_0040fd50);
  return;
}



void FUN_0040f867(void)

{
  FUN_0040b701();
  return;
}



void FUN_0040f880(void)

{
  if (((byte)DAT_0041c718 & 4) != 0) {
    FUN_00404670();
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



undefined8 FUN_0040f9a0(uint *param_1,int param_2,uint param_3,code *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    return 0;
  }
  uVar3 = FUN_0040f8b0();
  uVar9 = (ulong)uVar3;
  if (uVar1 == uVar3) {
    return 0;
  }
  if (uVar3 == 0) {
    uVar2 = param_1[2];
  }
  else {
    uVar2 = param_1[(ulong)uVar3 * 6 + 2];
  }
  if ((int)param_3 < (int)uVar2) {
    return 0;
  }
  uVar6 = FUN_0040f8b0(param_1,param_3);
  uVar4 = (uint)uVar6;
  if ((uVar1 == uVar4) ||
     ((uVar8 = uVar6 & 0xffffffff, uVar3 < uVar4 &&
      (param_1[uVar8 * 6 + 2] != param_3 && (int)param_3 <= (int)param_1[uVar8 * 6 + 2])))) {
    uVar6 = (ulong)(uVar4 - 1);
    uVar8 = uVar6;
  }
  uVar4 = (uint)uVar6;
  if (uVar4 == uVar3) {
    if ((int)uVar2 < param_2) {
      if ((int)param_3 < (int)param_1[uVar9 * 6 + 3]) {
        if (uVar1 != 0x80) {
          lVar7 = (long)(int)uVar3 * 3 + 3;
          lVar7 = FUN_004155fc(param_1 + lVar7 * 2 + 2,param_1 + lVar7 * 2 + -4,
                               ((long)(int)uVar1 - (long)(int)uVar3) * 0x18);
          *param_1 = *param_1 + 1;
          *(int *)(lVar7 + 0xc) = param_2 + -1;
          *(uint *)(lVar7 + 0x20) = param_3 + 1;
          return 0;
        }
        uVar5 = FUN_00402b8a();
        return uVar5;
      }
      if (param_2 <= (int)param_1[uVar9 * 6 + 3]) goto LAB_0040faf3;
    }
LAB_0040fa35:
    if (((int)param_3 < (int)param_1[uVar8 * 6 + 2]) ||
       ((int)param_1[uVar8 * 6 + 3] <= (int)param_3)) {
      if ((((byte)DAT_0041c718 & 4) != 0) && (param_4 != (code *)0x0)) {
        (*param_4)(param_1,uVar9,uVar6 & 0xffffffff);
      }
      goto LAB_0040fab2;
    }
    uVar6 = uVar9;
    if (((byte)DAT_0041c718 & 4) != 0) {
LAB_00402a6c:
      uVar5 = FUN_00402b21();
      return uVar5;
    }
LAB_0040fa4b:
    uVar4 = uVar4 - 1;
    param_1[uVar8 * 6 + 2] = param_3 + 1;
  }
  else {
    if ((param_2 <= (int)uVar2) || ((int)param_1[uVar9 * 6 + 3] < param_2)) goto LAB_0040fa35;
LAB_0040faf3:
    if (((byte)DAT_0041c718 & 4) != 0) goto LAB_00402a6c;
    uVar6 = (ulong)(uVar3 + 1);
    param_1[uVar9 * 6 + 3] = param_2 - 1;
    if ((param_1[uVar8 * 6 + 2] == param_3 || (int)param_1[uVar8 * 6 + 2] < (int)param_3) &&
       (param_1[uVar8 * 6 + 3] != param_3 && (int)param_3 <= (int)param_1[uVar8 * 6 + 3]))
    goto LAB_0040fa4b;
  }
  uVar9 = uVar6;
  if (uVar4 < (uint)uVar6) {
    return 0;
  }
LAB_0040fab2:
  FUN_0040f960(param_1,uVar9,(uVar4 + 1) - (int)uVar9);
  return 0;
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



undefined8 FUN_0040fdd0(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x3c);
  if (uVar1 == 0) {
    return 0;
  }
  uVar4 = uVar1 - 1;
  do {
    if (uVar4 != *(ushort *)(param_1 + 0x3e)) {
      lVar2 = FUN_00410010(param_1,param_2,uVar4);
      if (*(int *)(lVar2 + 4) == 3) {
        uVar3 = FUN_0040ffe0(param_1,param_2,lVar2);
        return uVar3;
      }
    }
    uVar4 = uVar4 - 1;
  } while (uVar4 != (uVar1 - 2) - (uVar1 - 1 & 0xffff));
  return 0;
}



undefined8 FUN_0040fe50(long param_1,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (*(ushort *)(param_1 + 0x3c) != 0) {
    uVar3 = *(ushort *)(param_1 + 0x3c) - 1 & 0xffff;
    do {
      lVar1 = FUN_00410010(param_1,param_2,uVar3);
      if ((*(int *)(lVar1 + 4) == 2) && (*(long *)(lVar1 + 0x38) == 0x18)) {
        if (param_3 != (ulong *)0x0) {
          *param_3 = *(ulong *)(lVar1 + 0x20) / 0x18;
        }
        uVar2 = FUN_0040ffe0(param_1,param_2,lVar1);
        return uVar2;
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0xffffffff);
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



undefined4 FUN_0040ffc0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (*(byte *)(param_1 + 4) & 0xf) - 1;
    uVar2 = CONCAT31((int3)(uVar1 >> 8),uVar1 < 2);
  }
  return uVar2;
}



long FUN_0040ffe0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_3 + 0x18) + param_1;
  FUN_00410090(param_1,param_2,lVar1,*(undefined8 *)(param_3 + 0x20));
  return lVar1;
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
  uVar1 = auVar2._0_8_;
  if ((((byte)DAT_0041c718 & 8) != 0) && (auVar2._0_4_ != -1)) {
    *param_1 = auVar2._0_4_;
    param_1[1] = auVar2._8_4_;
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



long FUN_00410390(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *local_140;
  undefined local_138 [264];
  
  uVar1 = DAT_00448020;
  lVar4 = FUN_0041571a();
  if (lVar4 == 0) {
    FUN_00402b75();
    lVar4 = FUN_00410414();
    return lVar4;
  }
  lVar5 = FUN_00415783();
  if (lVar5 == 0) {
    uVar8 = DAT_0041c718 & 4;
    lVar5 = param_2;
    uVar2 = uVar1;
    if (((uVar8 == 0) ||
        ((iVar3 = FUN_004102a0(param_2,&DAT_0041c480,param_1,lVar4), iVar3 == -1 &&
         (iVar3 = FUN_004102a0(param_2,&DAT_0041c4c0,param_1,lVar4), iVar3 == -1)))) &&
       (iVar3 = FUN_004102a0(param_2,&DAT_00418757,param_1,lVar4), iVar3 == -1)) {
      lVar6 = FUN_00414c50(param_1,&DAT_0041887f);
      lVar5 = 0;
      uVar2 = DAT_00448020;
      if (lVar6 == 0) {
        pcVar7 = (char *)FUN_004108b0(&DAT_00418882);
        if (pcVar7 == (char *)0x0) {
          pcVar7 = "/bin:/usr/local/bin:/usr/bin";
        }
        else if (*pcVar7 == '\0') {
          pcVar7 = "/bin:/usr/local/bin:/usr/bin";
        }
        lVar5 = FUN_004148f0(local_138,pcVar7,0,0xf8);
        if (lVar5 == 0) {
          iVar3 = FUN_00402b8a();
          lVar5 = param_2;
          uVar2 = uVar1;
          if (iVar3 == -1) {
            lVar4 = FUN_00410414();
            return lVar4;
          }
        }
        else {
          local_140 = local_138;
          puVar9 = &DAT_00417046;
          if (uVar8 == 0) {
            puVar9 = &DAT_00417068;
          }
          while (lVar5 = FUN_00414cb0(&local_140,puVar9), uVar2 = DAT_00448020, lVar5 != 0) {
            lVar6 = FUN_0041576b(lVar5,0x3d);
            if ((lVar6 == 0) && (iVar3 = FUN_004102a0(param_2,lVar5,param_1,lVar4), iVar3 != -1)) {
              lVar4 = FUN_00410405();
              return lVar4;
            }
          }
        }
      }
    }
    DAT_00448020 = uVar2;
    return lVar5;
  }
  FUN_00402b21();
  lVar4 = FUN_00410414();
  return lVar4;
}



void FUN_00410405(void)

{
  long unaff_RBP;
  
  DAT_00448020 = *(undefined4 *)(unaff_RBP + -0x144);
  return;
}



void FUN_00410414(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_00410560(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined local_208 [504];
  
  iVar1 = DAT_00448020;
  if (((byte)DAT_0041c718 & 4) == 0) {
    iVar2 = FUN_004117e0(param_1,local_208);
    if ((iVar2 == -1) && ((DAT_00448020 == _DAT_00440860 || (DAT_00448020 == _DAT_00440878)))) {
      DAT_00448020 = iVar1;
    }
  }
  else {
    iVar1 = FUN_00404d00(param_1,local_208);
    if (iVar1 == -1) {
      return true;
    }
    iVar2 = FUN_00405f5b(local_208);
  }
  return iVar2 != -1;
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
  DAT_00447b58 = 0x3f8;
  DAT_00447b70 = 0x3f8;
  DAT_00447b88 = 0x3f8;
  DAT_00447b68 = 5;
  DAT_00447b80 = 5;
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

ulong FUN_00410960(uint param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  uVar2 = DAT_00447b48;
  if (DAT_00447b48 <= (ulong)(long)(int)param_1) {
    uVar4 = (long)(int)(param_1 + 1);
    if ((ulong)(long)(int)(param_1 + 1) <= DAT_00447b48 * 2) {
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
  return (ulong)param_1;
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



void FUN_00410ae0(undefined8 param_1,undefined8 param_2)

{
  if (((byte)DAT_0041c718 & 4) == 0) {
    FUN_00412380(param_1,DAT_004409f0,param_2);
    return;
  }
  FUN_004051d0();
  return;
}



uint FUN_00410b10(char param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  long in_GS_OFFSET;
  undefined local_418 [1024];
  
  if ((param_1 != '\0') ||
     ((lVar3 = FUN_004108b0("HEISENDEBUG"), lVar3 == 0 &&
      ((byte)((byte)((uint)DAT_0041c014 >> 8) ^ (byte)DAT_0041c00c) != 0x34)))) {
    if ((DAT_0041c718 & 4) != 0) {
      return (uint)*(byte *)(*(long *)(in_GS_OFFSET + 0x60) + 2);
    }
    if (((DAT_0041c718 & 1) != 0) &&
       (iVar1 = FUN_004123b0(DAT_00440780,"/proc/self/status",DAT_00440938,0), iVar1 != -1)) {
      lVar3 = FUN_004123d0(iVar1,local_418,0x3f4);
      uVar2 = 0;
      if (lVar3 != -1) {
        local_418[lVar3] = 0;
        pcVar4 = (char *)FUN_00414cf0(local_418,"TracerPid:\t");
        if (pcVar4 == (char *)0x0) {
          pcVar4 = "TracerPid:\t";
        }
        lVar3 = FUN_0041571a("TracerPid:\t",pcVar4);
        uVar2 = FUN_00412450(pcVar4 + lVar3);
      }
      FUN_00412330(iVar1);
      return uVar2;
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



undefined8 FUN_00410c50(int param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((-1 < param_1) && ((ulong)(long)param_1 < DAT_00447b48)) {
    lVar1 = DAT_00447b50 + (long)param_1 * 0x18;
    uVar2 = CONCAT71((int7)((ulong)lVar1 >> 8),*(int *)(lVar1 + 0x10) == param_2);
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00410c80(void)

{
  ulong uVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulong uVar2;
  long lVar3;
  undefined4 extraout_var_01;
  ulong uVar4;
  int iVar5;
  longdouble in_ST0;
  longdouble lVar6;
  longdouble lVar7;
  longdouble lVar8;
  longdouble in_ST1;
  longdouble lVar9;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar1 = DAT_00440798;
  lVar9 = (longdouble)1;
  iVar5 = 1;
  do {
    lVar8 = in_ST2;
    FUN_00411490();
    FUN_00411d70(uVar1 & 0xffffffff);
    uVar2 = rdtsc();
    local_38 = 0;
    uVar4 = uVar2 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar2);
    local_30 = 100000;
    FUN_00411ea0(&local_38,0);
    FUN_00411d70(uVar1 & 0xffffffff);
    uVar2 = rdtsc();
    uVar2 = CONCAT44(extraout_var_00,(int)uVar2) | uVar2 & 0xffffffff00000000;
    lVar6 = (in_ST1 - in_ST0) * (longdouble)1e+09;
    if (uVar4 != uVar2) {
      lVar3 = uVar2 - uVar4;
      lVar7 = (longdouble)lVar3;
      if (lVar3 < 0) {
        lVar7 = lVar7 + (longdouble)1.844674e+19;
      }
      lVar6 = lVar7 / lVar6;
    }
    lVar7 = (longdouble)iVar5;
    iVar5 = iVar5 + 1;
    lVar9 = lVar9 + lVar7 / (lVar6 - lVar9);
    in_ST0 = lVar8;
    in_ST1 = in_ST3;
    in_ST2 = in_ST4;
    in_ST3 = in_ST5;
    in_ST4 = in_ST6;
    in_ST5 = in_ST6;
  } while (iVar5 != 5);
  _DAT_00447d40 = lVar9;
  FUN_00411d70(DAT_004407a0);
  _DAT_00447d30 = lVar8;
  uVar1 = rdtsc();
  DAT_00447d20 = 1;
  _DAT_00447d28 = uVar1 & 0xffffffff00000000 | CONCAT44(extraout_var_01,(int)uVar1);
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



ulong FUN_00411370(int param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 auStack_13c [4];
  uint uStack_12c;
  undefined auStack_128 [264];
  
  if ((param_1 < 0) || (param_3 < 0)) {
    FUN_00402b21();
    uVar4 = FUN_0041139e();
    return uVar4;
  }
  if ((ulong)(long)param_1 < DAT_00447b48) {
    puVar1 = (undefined8 *)(DAT_00447b50 + (long)param_1 * 0x18);
    iVar2 = *(int *)(puVar1 + 2);
    if (iVar2 == 6) {
                    // WARNING: Treating indirect jump as call
      uVar4 = (*(code *)0x0)(*puVar1,param_2,(long)param_3,0xffffffffffffffff);
      return uVar4;
    }
    if (iVar2 == 5) {
      uVar4 = FUN_00411ee0(puVar1);
      return uVar4;
    }
    if (((byte)DAT_0041c718 & 4) == 0) goto LAB_004113f0;
    if ((iVar2 == 1) || (iVar2 == 4)) {
      uVar4 = FUN_004056c0(puVar1,param_2,(long)param_3,0xffffffffffffffff);
      return uVar4;
    }
    if (iVar2 == 2) {
      auStack_13c[0] = 0;
      uStack_12c = 0;
      uVar3 = FUN_00403110(auStack_128,param_2,(long)param_3);
      iVar2 = FUN_004033cc(*puVar1,auStack_128,uVar3,&uStack_12c,auStack_13c,0,0,0,0);
      if (iVar2 == -1) {
        uVar4 = FUN_00403070();
        return uVar4;
      }
      return (ulong)uStack_12c;
    }
  }
  else if (((byte)DAT_0041c718 & 4) == 0) {
LAB_004113f0:
    uVar4 = FUN_004123e0();
    return uVar4;
  }
  uVar4 = FUN_00402acd();
  return uVar4;
}



void FUN_0041139e(void)

{
  return;
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



void FUN_00411490(void)

{
  if (((byte)DAT_0041c718 & 4) == 0) {
    FUN_004123f0();
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_004114c0(ulong param_1,long *param_2,undefined (*param_3) [16])

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  code **ppcVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  undefined auStack_78 [16];
  code *local_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  uVar10 = DAT_0041c718;
  iVar8 = (int)param_1;
  if (((0x7e < iVar8 - 1U) || (param_1 = param_1 & 0xffffffff, iVar8 == 9)) ||
     (lVar9 = (long)iVar8, lVar9 == _DAT_00440980)) {
    FUN_00402b21();
    uVar5 = FUN_0041163e();
    return uVar5;
  }
  if (param_2 == (long *)0x0) {
    if ((DAT_0041c718 & 4) == 0) {
      ppcVar7 = (code **)0x0;
      iVar8 = 0;
      if ((DAT_0041c718 & 8) == 0) goto LAB_004116bb;
      goto LAB_004115a0;
    }
    iVar8 = 0;
    if (param_3 == (undefined (*) [16])0x0) {
      uVar5 = FUN_0041163e();
      return uVar5;
    }
LAB_00411607:
    uVar5 = 0;
    *param_3 = (undefined  [16])0x0;
    param_3[1] = (undefined  [16])0x0;
    param_3[2] = (undefined  [16])0x0;
code_r0x00411618:
    iVar1 = *(int *)(&DAT_00447d60 + lVar9 * 4);
    lVar4 = (long)iVar1;
    if (7 < iVar1) {
      lVar4 = (long)iVar1 + 0x400000;
    }
    *(long *)*param_3 = lVar4;
  }
  else {
    lVar4 = *param_2;
    if (7 < lVar4) {
      if ((lVar4 < 0x400008) || (0x803ffffe < lVar4)) {
        uVar5 = FUN_00402af7();
        return uVar5;
      }
      lVar4 = lVar4 + -0x400000;
    }
    iVar8 = (int)lVar4;
    if ((DAT_0041c718 & 4) != 0) {
      uVar5 = 0;
      if (param_3 == (undefined (*) [16])0x0) goto LAB_00411636;
      goto LAB_00411607;
    }
    ppcVar7 = &local_68;
    uVar3 = FUN_004154c0(ppcVar7,param_2,0x30);
    if ((uVar3 & 8) == 0) {
      if (((uVar3 & 1) != 0) && (((ulong)local_60 & DAT_00440988) == 0)) {
        local_60 = (undefined *)((ulong)local_60 | DAT_00440988);
        puStack_58 = &DAT_004147d0;
      }
      if (7 < iVar8) {
        local_68 = FUN_00411d3d;
      }
      if (uVar3 != 0x10) {
        if (0x10 < (int)uVar3) {
          pcVar6 = local_68;
          if (uVar3 != 0x20) goto LAB_004116bb;
LAB_0041172f:
          local_60 = (undefined *)CONCAT44(uStack_50,local_60._0_4_);
          puStack_58 = (undefined *)CONCAT44(uStack_48,uStack_4c);
          local_68 = pcVar6;
          goto LAB_004116bb;
        }
        if ((uVar3 == 1) || (uVar3 != 8)) goto LAB_004116bb;
LAB_00411582:
        puVar2 = local_60;
        uVar10 = 8;
        local_60 = puStack_58;
        puStack_58 = (undefined *)CONCAT44((int)puVar2,uStack_50);
        goto LAB_004115a0;
      }
LAB_00411760:
      local_60 = (undefined *)CONCAT44((int)local_60,uStack_50);
LAB_004116bb:
      uVar5 = FUN_004115a3();
      return uVar5;
    }
    puStack_58 = &LAB_00411b00;
    local_68 = (code *)&LAB_00411b00;
    if (uVar3 == 0x10) goto LAB_00411760;
    if ((int)uVar3 < 0x11) {
      if (uVar3 == 8) goto LAB_00411582;
    }
    else {
      pcVar6 = (code *)&LAB_00411b00;
      if (uVar10 == 0x20) goto LAB_0041172f;
    }
LAB_004115a0:
    uVar5 = FUN_00412420(param_1 & 0xffffffff,ppcVar7,param_3,param_3);
    if ((int)uVar5 == -1) {
      return uVar5;
    }
    if (param_3 != (undefined (*) [16])0x0) {
      if (uVar10 == 0x10) {
        auStack_78._4_12_ = SUB1612((undefined  [16])0x0,4);
        auStack_78._0_4_ = *(undefined4 *)(*param_3 + 8);
        *(long *)(*param_3 + 8) = (long)*(int *)(*param_3 + 0xc);
        *(undefined8 *)(param_3[1] + 8) = auStack_78._0_8_;
        *(undefined8 *)param_3[2] = 0;
        uVar5 = FUN_00411618();
        return uVar5;
      }
      if ((int)uVar10 < 0x11) {
        if (uVar10 == 1) {
          *(undefined8 *)(param_3[1] + 8) = *(undefined8 *)(param_3[1] + 8);
          *(undefined8 *)param_3[2] = 0;
          uVar5 = FUN_00411618();
          return uVar5;
        }
        if (uVar10 == 8) {
          auStack_78._4_12_ = SUB1612((undefined  [16])0x0,4);
          auStack_78._0_4_ = *(undefined4 *)(*param_3 + 8);
          *(long *)(*param_3 + 8) = (long)*(int *)(*param_3 + 0xc);
          *(undefined8 *)(param_3[1] + 8) = auStack_78._0_8_;
          *(undefined8 *)param_3[2] = 0;
          uVar5 = FUN_00411618();
          return uVar5;
        }
      }
      else if (uVar10 == 0x20) {
        uVar5 = *(undefined8 *)(param_3[1] + 4);
        uVar10 = *(uint *)(*param_3 + 8);
        *(undefined8 *)(param_3[1] + 8) = *(undefined8 *)(*param_3 + 0xc);
        *(undefined8 *)param_3[2] = uVar5;
        *(ulong *)(*param_3 + 8) = (ulong)uVar10;
        uVar5 = FUN_00411618();
        return uVar5;
      }
      goto code_r0x00411618;
    }
  }
  if (param_2 == (long *)0x0) {
    return uVar5;
  }
LAB_00411636:
  *(int *)(&DAT_00447d60 + lVar9 * 4) = iVar8;
  return uVar5;
}



void FUN_004115a3(void)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *unaff_RBX;
  long unaff_RBP;
  undefined4 in_R8D;
  long unaff_R12;
  undefined4 unaff_R13D;
  long unaff_R14;
  int unaff_R15D;
  
  iVar3 = FUN_00412420(in_R8D);
  if (iVar3 != -1) {
    if (unaff_RBX != (long *)0x0) {
      if (unaff_R15D == 0x10) {
        uVar1 = *(undefined4 *)(unaff_RBX + 1);
        iVar3 = *(int *)((long)unaff_RBX + 0xc);
        *(undefined (*) [16])(unaff_RBP + -0x70) = (undefined  [16])0x0;
        *(undefined4 *)(unaff_RBP + -0x70) = uVar1;
        lVar4 = *(long *)(unaff_RBP + -0x70);
        lVar2 = *(long *)(unaff_RBP + -0x68);
        unaff_RBX[1] = (long)iVar3;
        unaff_RBX[3] = lVar4;
        unaff_RBX[4] = lVar2;
        FUN_00411618();
        return;
      }
      if (unaff_R15D < 0x11) {
        if (unaff_R15D == 1) {
          lVar4 = unaff_RBX[3];
          *(undefined8 *)(unaff_RBP + -0x68) = 0;
          *(long *)(unaff_RBP + -0x70) = lVar4;
          lVar4 = *(long *)(unaff_RBP + -0x68);
          unaff_RBX[3] = *(long *)(unaff_RBP + -0x70);
          unaff_RBX[4] = lVar4;
          FUN_00411618();
          return;
        }
        if (unaff_R15D == 8) {
          uVar1 = *(undefined4 *)(unaff_RBX + 1);
          iVar3 = *(int *)((long)unaff_RBX + 0xc);
          *(undefined (*) [16])(unaff_RBP + -0x70) = (undefined  [16])0x0;
          *(undefined4 *)(unaff_RBP + -0x70) = uVar1;
          lVar4 = *(long *)(unaff_RBP + -0x70);
          lVar2 = *(long *)(unaff_RBP + -0x68);
          unaff_RBX[1] = (long)iVar3;
          unaff_RBX[3] = lVar4;
          unaff_RBX[4] = lVar2;
          FUN_00411618();
          return;
        }
      }
      else if (unaff_R15D == 0x20) {
        unaff_RBX[3] = *(long *)((long)unaff_RBX + 0xc);
        unaff_RBX[4] = *(long *)((long)unaff_RBX + 0x14);
        unaff_RBX[1] = (ulong)*(uint *)(unaff_RBX + 1);
        FUN_00411618();
        return;
      }
      iVar3 = *(int *)(&DAT_00447d60 + unaff_R14 * 4);
      lVar4 = (long)iVar3;
      if (7 < iVar3) {
        lVar4 = (long)iVar3 + 0x400000;
      }
      *unaff_RBX = lVar4;
    }
    if (unaff_R12 != 0) {
      *(undefined4 *)(&DAT_00447d60 + unaff_R14 * 4) = unaff_R13D;
    }
  }
  return;
}



void FUN_00411618(void)

{
  int iVar1;
  long lVar2;
  long *unaff_RBX;
  long unaff_R12;
  undefined4 unaff_R13D;
  long unaff_R14;
  
  iVar1 = *(int *)(&DAT_00447d60 + unaff_R14 * 4);
  lVar2 = (long)iVar1;
  if (7 < iVar1) {
    lVar2 = (long)iVar1 + 0x400000;
  }
  *unaff_RBX = lVar2;
  if (unaff_R12 != 0) {
    *(undefined4 *)(&DAT_00447d60 + unaff_R14 * 4) = unaff_R13D;
  }
  return;
}



void FUN_0041163e(void)

{
  return;
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



void FUN_004119f0(void)

{
  if (((byte)DAT_0041c718 & 4) == 0) {
    FUN_00412430();
    return;
  }
  FUN_00405870();
  return;
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



ulong FUN_00411a30(int param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uStack_12c;
  undefined auStack_128 [256];
  
  if ((param_1 < 0) || (param_3 < 0)) {
    FUN_00402b21();
    uVar4 = FUN_00411a5e();
    return uVar4;
  }
  if ((ulong)(long)param_1 < DAT_00447b48) {
    puVar1 = (undefined8 *)(DAT_00447b50 + (long)param_1 * 0x18);
    iVar2 = *(int *)(puVar1 + 2);
    if (iVar2 == 6) {
                    // WARNING: Treating indirect jump as call
      uVar4 = (*(code *)0x0)(*puVar1,param_2,(long)param_3,0xffffffffffffffff);
      return uVar4;
    }
    if (iVar2 == 5) {
      uVar4 = FUN_00411fa0(puVar1);
      return uVar4;
    }
    if (((byte)DAT_0041c718 & 4) == 0) goto LAB_00411ab0;
    if ((iVar2 == 1) || (iVar2 == 4)) {
      uVar4 = FUN_00405ac0(puVar1,param_2,(long)param_3,0xffffffffffffffff);
      return uVar4;
    }
    if (iVar2 == 2) {
      uVar3 = FUN_00403110(auStack_128,param_2,(long)param_3);
      iVar2 = FUN_004033dc(*puVar1,auStack_128,uVar3,&uStack_12c,0,0,0,0,0);
      if (iVar2 == -1) {
        uVar4 = FUN_00403070();
        return uVar4;
      }
      return (ulong)uStack_12c;
    }
  }
  else if (((byte)DAT_0041c718 & 4) == 0) {
LAB_00411ab0:
    uVar4 = FUN_00412440();
    return uVar4;
  }
  uVar4 = FUN_00402acd();
  return uVar4;
}



void FUN_00411a5e(void)

{
  return;
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
  
  cVar1 = FUN_00410c50(param_1,6);
  if (cVar1 != '\0') {
                    // WARNING: Treating indirect jump as call
    (*(code *)0x0)(*(undefined8 *)(DAT_00447b50 + (long)param_1 * 0x18),param_2,0);
    return;
  }
  if (((byte)DAT_0041c718 & 4) != 0) {
    cVar1 = FUN_00410c50(param_1,1);
    if (cVar1 == '\0') {
      FUN_00402acd();
      return;
    }
    FUN_00405bc0(*(undefined8 *)(DAT_00447b50 + (long)param_1 * 0x18),param_2);
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



undefined8 FUN_00411e70(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((-1 < param_1) && ((ulong)(long)param_1 < DAT_00447b48)) {
    lVar1 = DAT_00447b50 + (long)param_1 * 0x18;
    uVar2 = CONCAT71((int7)((ulong)lVar1 >> 8),*(int *)(lVar1 + 0x10) != 0);
  }
  return uVar2;
}



void FUN_00411ea0(long param_1)

{
  if (param_1 == 0) {
    FUN_00402af7();
    return;
  }
  if ((DAT_0041c718 & 4) == 0) {
    if ((DAT_0041c718 & 8) == 0) {
      FUN_004123a0();
      return;
    }
    FUN_004120d0();
    return;
  }
  FUN_00405d40();
  return;
}



long FUN_00411ee0(undefined8 *param_1,long param_2,int param_3)

{
  byte bVar1;
  undefined uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (0 < param_3) {
    plVar4 = (long *)(param_2 + 8);
    do {
      if (*plVar4 != 0) {
        do {
          uVar3 = *param_1;
          bVar1 = in((short)uVar3 + 5);
        } while ((bVar1 & 1) == 0);
        lVar6 = 0;
        lVar5 = 0;
        lVar7 = 0;
        do {
          lVar6 = lVar6 + 1;
          uVar2 = in((short)uVar3);
          plVar4 = (long *)(lVar7 * 0x10 + param_2);
          *(undefined *)(*plVar4 + lVar5) = uVar2;
          lVar5 = lVar5 + 1;
          if (plVar4[1] == lVar5) {
            lVar7 = lVar7 + 1;
            if (param_3 == lVar7) {
              return lVar6;
            }
            lVar5 = 0;
          }
          uVar3 = *param_1;
          bVar1 = in((short)uVar3 + 5);
        } while ((bVar1 & 1) != 0);
        return lVar6;
      }
      plVar4 = plVar4 + 2;
    } while (plVar4 != (long *)(param_2 + 0x18 + (ulong)(param_3 - 1) * 0x10));
  }
  return 0;
}



undefined  [16] FUN_00411fa0(ulong *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  undefined auVar3 [16];
  byte bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined auVar8 [16];
  
  if ((long)(int)param_3 != 0) {
    plVar2 = param_2 + (long)(int)param_3 * 2;
    lVar5 = 0;
    do {
      if (param_2[1] != 0) {
        uVar6 = *param_1;
        uVar7 = 0;
        lVar1 = lVar5 + 1;
        do {
          while( true ) {
            param_3 = uVar6 & 0xffffffff;
            bVar4 = in((short)uVar6 + 5);
            if ((bVar4 & 0x20) != 0) break;
            uVar6 = *param_1;
          }
          out((short)param_3,*(undefined *)(*param_2 + uVar7));
          lVar5 = lVar1 + uVar7;
          uVar7 = uVar7 + 1;
        } while (uVar7 <= (ulong)param_2[1] && param_2[1] != uVar7);
      }
      param_2 = param_2 + 2;
    } while (plVar2 != param_2);
    auVar8._8_8_ = param_3;
    auVar8._0_8_ = lVar5;
    return auVar8;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_3;
  return auVar3 << 0x40;
}



undefined8 FUN_00412010(undefined8 param_1,undefined (*param_2) [16])

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined8 local_20 [2];
  
  if ((DAT_0041c718 & 4) != 0) {
    FUN_00405fc1(local_20);
    auVar2 = FUN_004124a0(local_20[0]);
    *param_2 = auVar2;
    return 0;
  }
  if ((DAT_0041c718 & 8) == 0) {
    if (param_2 != (undefined (*) [16])0x0) {
      *(undefined8 *)*param_2 = 0;
      *(undefined8 *)(*param_2 + 8) = 0;
    }
    uVar1 = FUN_00412320(param_1,param_2);
    return uVar1;
  }
  if (param_2 != (undefined (*) [16])0x0) {
    *(undefined8 *)*param_2 = 0;
    *(undefined8 *)(*param_2 + 8) = 0;
    uVar1 = FUN_00412114(param_2,0);
    *(long *)(*param_2 + 8) = *(long *)(*param_2 + 8) * 1000;
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



undefined8 FUN_00412114(undefined (*param_1) [16],undefined8 *param_2)

{
  undefined auVar1 [16];
  
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  auVar1 = FUN_004122f0(param_1,0,0);
  if (((((byte)DAT_0041c718 & 8) != 0) && (param_1 != (undefined (*) [16])0x0)) &&
     (auVar1._0_8_ != 0)) {
    *param_1 = auVar1;
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
  
  do {
    lVar1 = 10;
    do {
      uVar2 = rdrand();
      bVar3 = (bool)rdrandIsValid();
      if (bVar3) {
        return uVar2;
      }
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  } while( true );
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

void FUN_00412390(void)

{
                    // WARNING: Could not recover jumptable at 0x0041239a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004123a0(void)

{
                    // WARNING: Could not recover jumptable at 0x004123aa. Too many branches
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

void FUN_004123c0(void)

{
                    // WARNING: Could not recover jumptable at 0x004123ca. Too many branches
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

void FUN_004123e0(void)

{
                    // WARNING: Could not recover jumptable at 0x004123ea. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004123f0(void)

{
                    // WARNING: Could not recover jumptable at 0x004123fa. Too many branches
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00412430(void)

{
                    // WARNING: Could not recover jumptable at 0x0041243a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00412440(void)

{
                    // WARNING: Could not recover jumptable at 0x0041244a. Too many branches
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
  lVar3 = auVar4._8_8_;
  uVar1 = auVar4._0_8_;
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
  undefined auVar1 [16];
  
  auVar1._0_8_ = param_1 / 10000000 - 0x2b6109100;
  auVar1._8_8_ = (param_1 % 10000000) * 100;
  return auVar1;
}



undefined8 FUN_004124e0(long *param_1,ulong param_2)

{
  undefined auVar1 [16];
  
  *param_1 = param_2 / 10000000 - 0x2b6109100;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2 % 10000000;
  param_1[1] = (param_2 % 10000000) / 10;
  return SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
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
                undefined8 param_6,longdouble param_7)

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
  longdouble in_ST0;
  longdouble lVar12;
  longdouble lVar13;
  code *local_d8;
  ulong local_90;
  char cStack_79;
  undefined4 local_78;
  
  uVar11 = param_5 & 3;
  lVar12 = ABS(param_7);
  local_90 = param_4;
  if (lVar12 <= _DAT_004189b0) {
    local_d8 = param_1;
    if (param_7 != (longdouble)0) {
      local_d8 = SUB108(lVar12,0);
      iVar2 = FUN_004147b4();
      if (0x3f < iVar2) goto LAB_00412702;
    }
    if ((param_5 & 0x20) == 0) {
      in_ST0 = (longdouble)1000000.0;
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
          (&cStack_79)[uVar5] = '0';
          param_3 = param_3 + -1;
          if (0x3f < (uint)uVar5) break;
          uVar8 = uVar5 + 1;
        } while (0xe < param_3);
        FUN_00414795(local_d8);
        uVar5 = uVar5 & 0xffffffff;
      }
    }
    uVar8 = (ulong)ROUND(lVar12);
    lVar13 = (lVar12 - (longdouble)uVar8) * in_ST0;
    uVar9 = (ulong)ROUND(lVar13);
    lVar13 = lVar13 - (longdouble)uVar9;
    if (lVar13 <= (longdouble)0.5) {
      if (((longdouble)0.5 <= lVar13) && ((uVar9 == 0 || ((uVar9 & 1) != 0)))) {
        uVar9 = uVar9 + 1;
      }
    }
    else {
      uVar9 = uVar9 + 1;
      if (in_ST0 <= (longdouble)uVar9) {
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
    if ((longdouble)0.5 <= lVar12 - (longdouble)uVar8) {
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
    if ((param_7 < (longdouble)0) || ((param_5 & 0xc) != 0)) {
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
    if (param_7 < (longdouble)0) {
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
  undefined auVar2 [16];
  undefined auVar3 [16];
  char *pcVar4;
  byte bVar5;
  uint uVar6;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  bool bVar14;
  undefined auVar15 [16];
  uint local_d8;
  char acStack_c8 [152];
  ulong uVar7;
  
  auVar15._8_8_ = param_4;
  auVar15._0_8_ = param_3;
  bVar5 = param_9;
  if (((param_4 | param_3) == 0) && (bVar5 = param_9 & 0xef, (param_9 & 0x20) != 0)) {
    uVar11 = 0;
  }
  else {
    bVar1 = (byte)param_6;
    iVar9 = 0;
    uVar11 = 0;
    do {
      uVar7 = auVar15._8_8_;
      if (param_6 == 0) {
        auVar15 = FUN_00414650(auVar15._0_8_,uVar7,10,0);
        uVar10 = (ulong)local_d8;
      }
      else {
        uVar10 = (ulong)(auVar15._0_4_ & ~(-1 << (bVar1 & 0x1f)));
        uVar12 = uVar7 >> (bVar1 & 0x3f);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar12;
        auVar2._8_8_ = uVar12;
        auVar2._0_8_ = auVar15._0_8_ >> (bVar1 & 0x3f) | uVar7 << 0x40 - (bVar1 & 0x3f);
        auVar15 = auVar2;
        if ((param_6 & 0x40) != 0) {
          auVar15 = auVar3;
        }
      }
      uVar6 = (int)uVar11 + 1;
      uVar7 = (ulong)uVar6;
      if ((iVar9 == 3) && ((char)bVar5 < '\0')) {
        iVar9 = 1;
        uVar6 = (int)uVar11 + 2;
        acStack_c8[uVar11] = ',';
      }
      else {
        iVar9 = iVar9 + 1;
        uVar7 = uVar11;
      }
      uVar11 = (ulong)uVar6;
      acStack_c8[uVar7] = *(char *)(param_10 + uVar10);
    } while (auVar15 != (undefined  [16])0x0);
  }
  if ((bVar5 & 2) == 0) {
    uVar6 = (uint)uVar11;
    bVar14 = uVar6 < 0x90;
    bVar8 = uVar6 < param_7 && bVar14;
    if (param_8 == 0) {
      if (bVar8) goto LAB_00412d7e;
LAB_00412da9:
      if ((bVar5 & 1) == 0) goto LAB_00412df8;
      bVar14 = (uint)uVar11 < 0x90;
    }
    else {
      if ((bVar5 & 1) == 0) {
        if (uVar6 >= param_7 || !bVar14) goto LAB_00412df8;
LAB_00412d7e:
        pcVar4 = acStack_c8 + uVar11;
        do {
          uVar6 = (int)uVar11 + 1;
          uVar11 = (ulong)uVar6;
          *pcVar4 = '0';
          pcVar4 = pcVar4 + 1;
          if (param_7 <= uVar6) break;
        } while (uVar6 < 0x90);
        goto LAB_00412da9;
      }
      if ((param_5 != '\0') || ((bVar5 & 0xc) != 0)) {
        param_8 = param_8 - 1;
      }
      if (bVar8) goto LAB_00412d7e;
    }
    if (((uint)uVar11 < param_8) && (bVar14)) {
      pcVar4 = acStack_c8 + uVar11;
      do {
        uVar6 = (int)uVar11 + 1;
        uVar11 = (ulong)uVar6;
        *pcVar4 = '0';
        pcVar4 = pcVar4 + 1;
        if (param_8 <= uVar6) break;
      } while (uVar6 < 0x90);
    }
  }
LAB_00412df8:
  if ((bVar5 & 0x10) == 0) {
LAB_00412e48:
    uVar6 = (uint)uVar11;
    if (0x8f < uVar6) goto LAB_00412eb0;
    if (param_5 == '\0') {
      if ((bVar5 & 4) == 0) {
        if ((bVar5 & 8) == 0) goto LAB_00412eb0;
        acStack_c8[uVar11] = ' ';
      }
      else {
        acStack_c8[uVar11] = '+';
      }
    }
    else {
      acStack_c8[uVar11] = '-';
    }
    uVar6 = uVar6 + 1;
    if ((((bVar5 & 3) == 0) && (uVar6 < param_8)) &&
       (iVar9 = FUN_00413b40(param_1,param_2,param_8 - uVar6), iVar9 == -1)) {
      return -1;
    }
  }
  else {
    bVar14 = param_6 == 4;
    uVar6 = (uint)uVar11;
    if ((bVar5 & 0x20) == 0) {
      if (uVar6 == 0) {
        bVar8 = true;
        goto LAB_00412e19;
      }
      bVar8 = param_7 == uVar6 || uVar6 == param_8;
      if ((param_7 != uVar6 && uVar6 != param_8) || (uVar13 = uVar6 - 1, acStack_c8[uVar13] != '0'))
      goto LAB_00412e0d;
      if (uVar13 == 0) {
        uVar11 = 0;
        goto LAB_00412e19;
      }
      bVar8 = param_6 == 1 || bVar14;
      if (param_6 == 1 || bVar14) {
        uVar11 = (ulong)(uVar6 - 2);
        if (acStack_c8[uVar11] != '0') {
          uVar11 = (ulong)uVar13;
          bVar8 = uVar13 < 0x90;
          bVar14 = bVar14 && bVar8;
        }
        goto LAB_00412e19;
      }
      uVar7 = (ulong)uVar13;
    }
    else {
LAB_00412e0d:
      bVar8 = uVar6 < 0x90;
      bVar14 = bVar14 && bVar8;
LAB_00412e19:
      if (bVar14) {
        acStack_c8[uVar11] = 'x';
        uVar7 = (ulong)((int)uVar11 + 1);
      }
      else {
        uVar7 = uVar11;
        if ((param_6 == 1) && (bVar8)) {
          uVar7 = (ulong)((int)uVar11 + 1);
          acStack_c8[uVar11] = 'b';
        }
      }
    }
    uVar6 = (uint)uVar7;
    if (uVar6 < 0x90) {
      uVar11 = (ulong)(uVar6 + 1);
      acStack_c8[uVar7] = '0';
      goto LAB_00412e48;
    }
LAB_00412eb0:
    if ((((bVar5 & 3) == 0) && (uVar6 < param_8)) &&
       (iVar9 = FUN_00413b40(param_1,param_2,param_8 - uVar6), iVar9 == -1)) {
      return -1;
    }
    if (uVar6 == 0) {
      uVar13 = 0;
      goto LAB_00412f00;
    }
  }
  uVar13 = 0;
  do {
    iVar9 = (*param_1)((long)acStack_c8[(uVar6 - 1) - uVar13],param_2);
    if (iVar9 == -1) {
      return -1;
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 < uVar6);
LAB_00412f00:
  if (((bVar5 & 2) != 0) && (uVar13 < param_8)) {
    iVar9 = FUN_00413b40(param_1,param_2,param_8 - uVar13);
    return -(uint)(iVar9 == -1);
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
  uVar8 = 1L << (param_4 & 0x3f);
  uVar9 = uVar8;
  uVar3 = 0L << (param_4 & 0x3f) | 1UL >> 0x40 - (param_4 & 0x3f);
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
  double *pdVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longdouble *plVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined2 uVar12;
  int iVar13;
  undefined8 *puVar14;
  char *pcVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  char *pcVar18;
  bool bVar19;
  longdouble lVar20;
  undefined4 local_3c [3];
  
  pcVar10 = (code *)0x40116a;
  if (param_1 != (code *)0x0) {
    pcVar10 = param_1;
  }
  cVar4 = *param_3;
joined_r0x0041328b:
  if (cVar4 == '\0') {
    return 0;
  }
  if (cVar4 == '%') {
    uVar7 = 0;
    pcVar15 = param_3 + 1;
LAB_004132e3:
    while( true ) {
      while( true ) {
        cVar4 = *pcVar15;
        pcVar18 = pcVar15 + 1;
        if (cVar4 != ',') break;
        uVar7 = uVar7 | 0x80;
        pcVar15 = pcVar18;
      }
      if (cVar4 < '-') break;
      if (cVar4 == '0') {
        uVar7 = uVar7 | 1;
        pcVar15 = pcVar18;
      }
      else if (cVar4 == '`') {
        uVar7 = uVar7 | 4;
LAB_00413310:
        uVar7 = uVar7 | 8;
        pcVar15 = pcVar18;
      }
      else {
        if (cVar4 != '-') {
          iVar13 = (int)cVar4;
          iVar5 = 0;
          if ((iVar13 - 0x30U < 10) && (iVar5 = 0, (byte)(cVar4 - 0x30U) < 10)) {
            while( true ) {
              iVar5 = iVar13 + -0x30 + iVar5 * 10;
              cVar4 = *pcVar18;
              pcVar15 = pcVar18;
              if (9 < (byte)(cVar4 - 0x30U)) break;
              pcVar18 = pcVar18 + 1;
              iVar13 = (int)cVar4;
            }
          }
          goto LAB_00413800;
        }
        uVar7 = uVar7 | 2;
        pcVar15 = pcVar18;
      }
    }
    if (cVar4 == '\'') goto LAB_00413310;
    if (cVar4 < '(') {
      if (cVar4 == ' ') goto LAB_00413310;
      if (cVar4 != '#') goto LAB_00413340;
      uVar7 = uVar7 | 0x10;
      pcVar15 = pcVar18;
      goto LAB_004132e3;
    }
    if (cVar4 == '+') {
      uVar7 = uVar7 | 4;
      pcVar15 = pcVar18;
      goto LAB_004132e3;
    }
    if (cVar4 != '*') goto LAB_00413340;
    uVar1 = *param_4;
    if (uVar1 < 0x30) {
      piVar9 = (int *)((ulong)uVar1 + *(long *)(param_4 + 4));
      *param_4 = uVar1 + 8;
    }
    else {
      piVar9 = *(int **)(param_4 + 2);
      *(int **)(param_4 + 2) = piVar9 + 2;
    }
    iVar5 = *piVar9;
    if (iVar5 < 0) {
      uVar7 = uVar7 | 2;
      iVar5 = -iVar5;
    }
    cVar4 = pcVar15[1];
    pcVar15 = pcVar18;
LAB_00413800:
    pcVar18 = pcVar15;
    if (cVar4 != '.') goto LAB_00413343;
    cVar4 = pcVar15[1];
    iVar13 = (int)cVar4;
    uVar7 = uVar7 | 0x20;
    pcVar18 = pcVar15 + 1;
    if (iVar13 - 0x30U < 10) {
      if (9 < (byte)(cVar4 - 0x30U)) goto LAB_00413343;
      iVar8 = 0;
      while( true ) {
        pcVar18 = pcVar18 + 1;
        iVar8 = iVar13 + -0x30 + iVar8 * 10;
        cVar4 = *pcVar18;
        if (9 < (byte)(cVar4 - 0x30U)) break;
        iVar13 = (int)cVar4;
      }
    }
    else {
      if (cVar4 != '*') goto LAB_00413343;
      uVar1 = *param_4;
      if (uVar1 < 0x30) {
        piVar9 = (int *)((ulong)uVar1 + *(long *)(param_4 + 4));
        *param_4 = uVar1 + 8;
      }
      else {
        piVar9 = *(int **)(param_4 + 2);
        *(int **)(param_4 + 2) = piVar9 + 2;
      }
      iVar8 = 0;
      if (-1 < *piVar9) {
        iVar8 = *piVar9;
      }
      cVar4 = pcVar15[2];
      pcVar18 = pcVar15 + 2;
    }
    goto LAB_00413345;
  }
  iVar5 = (*pcVar10)((long)cVar4,param_2);
  if (iVar5 == -1) {
    return 0xffffffff;
  }
  param_3 = param_3 + 1;
  goto LAB_004132b2;
LAB_00413340:
  iVar5 = 0;
  pcVar18 = pcVar15;
LAB_00413343:
  iVar8 = 0;
LAB_00413345:
  if (cVar4 == 'j') {
    cVar4 = pcVar18[1];
    param_3 = pcVar18 + 1;
    uVar11 = 0x7f;
LAB_00413380:
    param_3 = param_3 + 1;
    if (cVar4 != 'o') {
      if (cVar4 < 'p') {
        if (cVar4 != 'c') {
          if (cVar4 < 'd') {
            if (cVar4 == 'X') goto LAB_0041389e;
            if ('X' < cVar4) {
joined_r0x004133bb:
              uVar16 = 1;
              pcVar15 = "0123456789abcdef";
              if (cVar4 != 'b') {
LAB_004134b3:
                iVar5 = (*pcVar10)((long)cVar4,param_2);
                if (iVar5 == -1) {
                  return 0xffffffff;
                }
                cVar4 = *param_3;
                goto joined_r0x0041328b;
              }
              goto LAB_004133c1;
            }
            if (cVar4 == '%') {
LAB_00413580:
              iVar5 = (*pcVar10)(0x25,param_2);
              goto joined_r0x0041358d;
            }
            if (cVar4 != 'F') goto LAB_004134b3;
LAB_00413688:
            uVar1 = param_4[1];
            if (uVar1 < 0xb0) {
              param_4[1] = uVar1 + 0x10;
              lVar20 = (longdouble)*(double *)((ulong)uVar1 + *(long *)(param_4 + 4));
            }
            else {
              pdVar2 = *(double **)(param_4 + 2);
              *(double **)(param_4 + 2) = pdVar2 + 1;
              lVar20 = (longdouble)*pdVar2;
            }
            goto LAB_00413612;
          }
          if (cVar4 != 'i') {
            if ('i' < cVar4) {
LAB_004135ae:
              if (cVar4 != 'm') goto LAB_004134b3;
              goto LAB_004135b6;
            }
            if (cVar4 != 'd') {
              if (cVar4 != 'f') goto LAB_004134b3;
              goto LAB_00413688;
            }
          }
LAB_00413449:
          uVar7 = uVar7 | 0x40;
LAB_0041344c:
          uVar7 = uVar7 & 0xffffffef;
          uVar16 = 0;
          pcVar15 = "0123456789abcdef";
          goto LAB_004133c1;
        }
LAB_00413858:
        uVar1 = *param_4;
joined_r0x004139e7:
        uVar7 = uVar7 | 0x20;
        if (uVar1 < 0x30) {
          puVar17 = (undefined4 *)((ulong)uVar1 + *(long *)(param_4 + 4));
          *param_4 = uVar1 + 8;
        }
        else {
          puVar17 = *(undefined4 **)(param_4 + 2);
          *(undefined4 **)(param_4 + 2) = puVar17 + 2;
        }
        local_3c[0] = *puVar17;
        uVar12 = 0x27;
        iVar8 = 1;
        puVar17 = local_3c;
      }
      else {
        if (cVar4 != 's') {
          if ('s' < cVar4) {
            if (cVar4 != 'u') {
              if (cVar4 != 'x') goto LAB_004134b3;
LAB_00413666:
              uVar16 = 4;
              pcVar15 = "0123456789abcdef";
              goto LAB_004133c1;
            }
            goto LAB_0041344c;
          }
          if (cVar4 != 'q') {
            if (cVar4 != 'r') {
LAB_00413718:
              if (cVar4 != 'p') goto LAB_004134b3;
              goto LAB_00413720;
            }
LAB_004136b8:
            uVar7 = uVar7 | 4;
          }
LAB_004136bb:
          uVar7 = uVar7 | 8;
        }
LAB_004136be:
        uVar1 = *param_4;
        if (uVar1 < 0x30) {
          puVar14 = (undefined8 *)((ulong)uVar1 + *(long *)(param_4 + 4));
          *param_4 = uVar1 + 8;
        }
        else {
          puVar14 = *(undefined8 **)(param_4 + 2);
          *(undefined8 **)(param_4 + 2) = puVar14 + 1;
        }
        puVar17 = (undefined4 *)*puVar14;
        uVar12 = 0x22;
      }
LAB_004136e0:
      iVar5 = FUN_00413cc0(pcVar10,param_2,puVar17,uVar7,(long)iVar8,(long)iVar5,uVar11,uVar12);
      goto joined_r0x0041358d;
    }
LAB_0041393d:
    uVar16 = 3;
    pcVar15 = "0123456789abcdef";
  }
  else if (cVar4 < 'k') {
    if (cVar4 == 'h') {
      cVar4 = pcVar18[1];
      param_3 = pcVar18 + 1;
      uVar11 = 0xf;
      if (cVar4 == 'h') {
        cVar4 = pcVar18[2];
        param_3 = pcVar18 + 2;
        uVar11 = 7;
      }
      goto LAB_00413380;
    }
    if ((cVar4 != 'i') && ((cVar4 == 'L' || (cVar4 == 'Z')))) goto LAB_00413468;
LAB_00413420:
    param_3 = pcVar18 + 1;
    if (cVar4 == 'b') {
      uVar16 = 1;
      uVar11 = 0x1f;
      pcVar15 = "0123456789abcdef";
    }
    else {
      if ('b' < cVar4) {
        if (cVar4 != 'd') {
          if (cVar4 < 'e') {
            uVar11 = 0x1f;
            if (cVar4 != 'c') {
              cVar4 = 'd';
              goto LAB_004134b3;
            }
            goto LAB_00413858;
          }
          if (cVar4 == 'f') goto LAB_00413688;
          if (cVar4 != 'i') goto LAB_004134b3;
        }
        uVar11 = 0x1f;
        goto LAB_00413449;
      }
      if (cVar4 == 'F') goto LAB_00413688;
      if (cVar4 != 'X') {
        if (cVar4 != '%') goto LAB_004134b3;
        goto LAB_00413580;
      }
      uVar11 = 0x1f;
LAB_0041389e:
      uVar16 = 4;
      pcVar15 = "0123456789ABCDEF";
    }
  }
  else if (cVar4 == 'l') {
    cVar4 = pcVar18[1];
    if (cVar4 == 'l') {
      cVar4 = pcVar18[2];
      param_3 = pcVar18 + 3;
      cVar3 = cVar4 + -0x6f;
      bVar19 = cVar3 == '\0';
      if (bVar19) {
LAB_0041350e:
        uVar11 = 0x3f;
        goto LAB_0041393d;
      }
    }
    else {
LAB_0041346d:
      param_3 = pcVar18 + 2;
      cVar3 = cVar4 + -0x6f;
      bVar19 = cVar4 == 'o';
      if (bVar19) goto LAB_0041350e;
    }
    if (bVar19 || SBORROW1(cVar4,'o') != cVar3 < '\0') {
      if (cVar4 == 'c') {
        uVar1 = *param_4;
        uVar11 = 0x3f;
        goto joined_r0x004139e7;
      }
      if ('c' < cVar4) {
        if (cVar4 != 'i') {
          if ('i' < cVar4) goto LAB_004135ae;
          if (cVar4 != 'd') {
            if (cVar4 != 'f') goto LAB_004134b3;
            goto LAB_004135fc;
          }
        }
        uVar11 = 0x3f;
        goto LAB_00413449;
      }
      if (cVar4 == 'X') {
        uVar11 = 0x3f;
        goto LAB_0041389e;
      }
      if ('X' < cVar4) {
        uVar11 = 0x3f;
        goto joined_r0x004133bb;
      }
      if (cVar4 == '%') goto LAB_00413580;
      if (cVar4 != 'F') goto LAB_004134b3;
LAB_004135fc:
      plVar6 = (longdouble *)(*(long *)(param_4 + 2) + 0xfU & 0xfffffffffffffff0);
      *(long *)(param_4 + 2) = (long)plVar6 + 0x10;
      lVar20 = *plVar6;
LAB_00413612:
      iVar5 = FUN_00412660(pcVar10,param_2,iVar8,(long)iVar5,uVar7,(long)iVar5,SUB108(lVar20,0),
                           (short)((unkuint10)lVar20 >> 0x40));
      goto joined_r0x0041358d;
    }
    if (cVar4 == 's') {
      uVar11 = 0x3f;
      goto LAB_004136be;
    }
    if (cVar4 < 't') {
      if (cVar4 != 'q') {
        if (cVar4 != 'r') goto LAB_00413718;
        uVar11 = 0x3f;
        goto LAB_004136b8;
      }
      uVar11 = 0x3f;
      goto LAB_004136bb;
    }
    if (cVar4 != 'u') {
      if (cVar4 != 'x') goto LAB_004134b3;
      uVar11 = 0x3f;
      goto LAB_00413666;
    }
    uVar11 = 0x3f;
    uVar7 = uVar7 & 0xffffffef;
    uVar16 = 0;
    pcVar15 = "0123456789abcdef";
  }
  else {
    if ((cVar4 != 'k') && ((cVar4 == 't' || (cVar4 == 'z')))) {
LAB_00413468:
      cVar4 = pcVar18[1];
      goto LAB_0041346d;
    }
    param_3 = pcVar18 + 1;
    if (cVar4 == 'm') {
LAB_004135b6:
      uVar11 = 0;
      uVar12 = 0x22;
      puVar17 = (undefined4 *)&DAT_004189d1;
      goto LAB_004136e0;
    }
    if (cVar4 < 'n') goto LAB_00413420;
    if (cVar4 == 'r') {
      uVar11 = 0x1f;
      goto LAB_004136b8;
    }
    if ('r' < cVar4) {
      if (cVar4 == 'u') {
        uVar11 = 0x1f;
        goto LAB_0041344c;
      }
      if (cVar4 == 'x') {
        uVar11 = 0x1f;
        goto LAB_00413666;
      }
      if (cVar4 != 's') goto LAB_004134b3;
      uVar11 = 0x1f;
      goto LAB_004136be;
    }
    if (cVar4 != 'p') {
      if (cVar4 != 'q') {
        if (cVar4 != 'o') goto LAB_004134b3;
        uVar11 = 0x1f;
        goto LAB_0041393d;
      }
      uVar11 = 0x1f;
      goto LAB_004136bb;
    }
LAB_00413720:
    uVar7 = uVar7 | 1;
    iVar5 = 0xc;
    uVar16 = 4;
    uVar11 = 0x2f;
    pcVar15 = "0123456789abcdef";
  }
LAB_004133c1:
  iVar5 = FUN_004130c0(pcVar10,param_2,param_4,uVar11,uVar16,(long)iVar8,(long)iVar5,uVar7,pcVar15);
joined_r0x0041358d:
  if (iVar5 == -1) {
    return 0xffffffff;
  }
LAB_004132b2:
  cVar4 = *param_3;
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
                ulong param_6,char param_7,char param_8)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
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
    cVar8 = '\x01';
LAB_00413d64:
    local_50 = false;
    local_48 = param_4;
    if (uVar6 == 0) {
      param_5 = 0xffffffffffffffff;
    }
joined_r0x004140af:
    cVar9 = cVar8;
    if (param_7 == '?') {
      uVar6 = FUN_004158c8(param_3,param_5);
      param_5 = (ulong)(int)uVar6;
      if (param_6 != 0) goto LAB_00413dcd;
      goto LAB_00413e28;
    }
    if (param_7 == '\x0f') {
      iVar3 = FUN_004158b1(param_3,param_5);
      param_5 = (ulong)iVar3;
    }
    else {
      param_5 = FUN_004157a4(param_3,param_5);
    }
    uVar6 = (uint)param_5;
    cVar8 = cVar9;
    if (param_6 == 0) goto LAB_00413e28;
LAB_00413db5:
    cVar9 = cVar8;
    if (param_7 != '\x0f') {
      uVar6 = FUN_0040a580(param_3,param_5);
    }
LAB_00413dcd:
    if (param_6 <= uVar6) goto LAB_00413e28;
    local_54 = (int)param_6 - uVar6;
    if (local_54 == 0) {
      if (cVar9 != '\0') goto LAB_00414107;
      if (param_5 == 0) goto LAB_00413f2a;
      goto LAB_00413e45;
    }
    if (((local_48 & 2) == 0) && (iVar3 = FUN_00413b40(param_1,param_2,local_54), iVar3 == -1)) {
      return -1;
    }
    if (cVar9 != '\0') goto LAB_00414107;
    if (param_5 != 0) goto LAB_00413e45;
  }
  else {
    if ((param_4 & 4) == 0) {
      uVar6 = param_4 & 0x20;
      if ((param_7 != '\x0f') && (param_7 != '?')) goto LAB_00414059;
    }
    else {
      if (param_7 == '?') {
        uVar7 = 0x4c;
      }
      else {
        if (param_7 != '\x0f') {
          iVar3 = (*param_1)((long)param_8);
          if (iVar3 == -1) {
            return -1;
          }
          uVar6 = param_4 & 0x20;
          goto LAB_00414059;
        }
        uVar7 = 0x75;
      }
      iVar3 = (*param_1)(uVar7);
      if (iVar3 == -1) {
        return -1;
      }
      iVar3 = (*param_1)((long)param_8,param_2,param_8);
      if (iVar3 == -1) {
        return -1;
      }
    }
    uVar6 = param_4 & 0x20;
    local_48 = param_4;
    if ((param_4 & 8) == 0) {
      local_40 = FUN_00413c40;
      cVar8 = '\0';
      goto LAB_00413d64;
    }
LAB_0041408a:
    local_40 = FUN_00413bb0;
    local_50 = uVar6 != 0;
    cVar9 = '\0';
    if (uVar6 == 0) {
      param_5 = 0xffffffffffffffff;
      cVar8 = '\0';
      goto joined_r0x004140af;
    }
    cVar8 = '\0';
    if (!(bool)local_50) goto joined_r0x004140af;
    if (param_6 != 0) {
      uVar6 = (uint)param_5;
      cVar9 = '\0';
      cVar8 = '\0';
      if (param_7 != '?') goto LAB_00413db5;
      goto LAB_00413dcd;
    }
LAB_00413e28:
    if (cVar9 == '\0') {
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
          bVar1 = *param_3;
          puVar4 = (uint *)((long)param_3 + 1);
          uVar6 = (uint)bVar1;
          if ((uVar6 == 0) && (local_50 != 0)) break;
          if ((bVar1 & 0x80) == 0) goto LAB_00413ef0;
          if (((int)(char)bVar1 & 0xc0U) != 0x80) {
            if (uVar6 < 0xfc) {
              iVar3 = 0x1f;
              if ((uVar6 ^ 0xff) != 0) {
                for (; (uVar6 ^ 0xff) >> iVar3 == 0; iVar3 = iVar3 + -1) {
                }
              }
              uVar10 = 6 - iVar3;
              uVar6 = uVar6 & ((1 << ((byte)iVar3 & 0x1f)) - 1U | 3);
              if (uVar5 < uVar10) break;
              uVar5 = uVar5 - uVar10;
              if (uVar10 == 0) goto LAB_00413ef0;
            }
            else {
              uVar6 = (int)(char)bVar1 & 3;
              if (uVar5 < 5) break;
              uVar5 = param_5 - 6;
              uVar10 = 5;
            }
            do {
              bVar1 = *(byte *)puVar4;
              puVar4 = (uint *)((long)puVar4 + 1);
              uVar6 = uVar6 << 6 | bVar1 & 0x3f;
            } while (puVar4 != (uint *)((long)param_3 + (ulong)(uVar10 - 1) + 2));
            puVar4 = (uint *)((long)param_3 + (ulong)(uVar10 - 1) + 2);
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
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  byte bVar19;
  undefined8 uVar20;
  
  while( true ) {
    bVar19 = *param_1;
    iVar10 = FUN_004148d0();
    if (iVar10 == 0) break;
    param_1 = param_1 + 1;
  }
  bVar9 = false;
  if (bVar19 == 0x2b) {
LAB_00414337:
    bVar19 = param_1[1];
    param_1 = param_1 + 1;
  }
  else if (bVar19 == 0x2d) {
    bVar9 = true;
    goto LAB_00414337;
  }
  if (param_3 - 2 < 0x23) {
    if (bVar19 == 0x30) {
      bVar19 = param_1[1];
      param_1 = param_1 + 1;
    }
  }
  else {
    param_3 = 10;
    if (bVar19 == 0x30) {
      bVar19 = param_1[1];
      if ((bVar19 & 0xdf) == 0x58) {
        bVar19 = param_1[2];
        param_1 = param_1 + 2;
        param_3 = 0x10;
      }
      else if ((bVar19 & 0xdf) == 0x42) {
        bVar19 = param_1[2];
        param_1 = param_1 + 2;
        param_3 = 2;
      }
      else {
        param_1 = param_1 + 1;
        param_3 = 8;
      }
    }
  }
  bVar19 = (&DAT_0041c380)[bVar19];
  if ((param_3 < bVar19) || (bVar19 == 0)) {
    auVar5 = ZEXT816(0);
LAB_0041444a:
    if (param_2 == (byte **)0x0) goto LAB_00414458;
  }
  else {
    uVar15 = (ulong)(int)param_3;
    uVar13 = bVar19 - 1;
    auVar5 = ZEXT816(0);
    do {
      do {
        pbVar14 = param_1;
        auVar6._4_4_ = 0;
        auVar6._0_4_ = uVar13;
        param_1 = pbVar14 + 1;
        auVar6._8_8_ = auVar5._8_8_ * uVar15 + ((long)uVar15 >> 0x3f) * auVar5._0_8_;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = auVar5._0_8_;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar15;
        auVar5 = auVar1 * auVar3 + auVar6;
        uVar16 = auVar5._0_8_;
        uVar12 = (uint)(byte)(&DAT_0041c380)[pbVar14[1]];
        if ((uVar12 == 0) || (param_3 < uVar12)) goto LAB_0041444a;
        uVar13 = uVar12 - 1;
      } while ((uVar12 == 1) || (auVar5 == (undefined  [16])0x0));
      iVar10 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      iVar11 = FUN_004153f4(uVar16,auVar5._8_8_);
      auVar8._4_4_ = 0;
      auVar8._0_4_ = uVar13;
    } while ((uint)(iVar10 + iVar11) < 0x7f);
    if (bVar9) {
      if ((iVar10 + iVar11 == 0x7f) &&
         (auVar2._8_8_ = 0, auVar2._0_8_ = uVar16, auVar4._8_8_ = 0, auVar4._0_8_ = uVar15,
         auVar8._8_8_ = auVar5._8_8_ * uVar15 + ((long)uVar15 >> 0x3f) * uVar16,
         auVar2 * auVar4 + auVar8 == (undefined  [16])0x8000000000000000)) {
        param_1 = pbVar14 + 2;
      }
      uVar20 = 0x8000000000000000;
      uVar18 = 0;
      auVar5 = ZEXT816(0x8000000000000000) << 0x40;
    }
    else {
      uVar18 = 0xffffffffffffffff;
      uVar20 = 0x7fffffffffffffff;
      auVar5._8_8_ = 0x7fffffffffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
    }
    if (param_2 == (byte **)0x0) {
      auVar7._8_8_ = uVar20;
      auVar7._0_8_ = uVar18;
      return auVar7;
    }
  }
  *param_2 = param_1;
LAB_00414458:
  lVar17 = auVar5._0_8_;
  if (bVar9) {
    auVar5._8_8_ = -(auVar5._8_8_ + (ulong)(lVar17 != 0));
    auVar5._0_8_ = -lVar17;
  }
  return auVar5;
}



ulong FUN_004145a0(void)

{
  ulong uVar1;
  long lVar2;
  undefined auVar3 [16];
  
  auVar3 = FUN_004142f0();
  lVar2 = auVar3._8_8_;
  uVar1 = auVar3._0_8_;
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



undefined  [16] FUN_00414650(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong *param_5)

{
  long lVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  byte bVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  bool bVar15;
  undefined auVar16 [16];
  undefined auVar17 [16];
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
    lVar10 = 0x3f;
    if (param_4 != 0) {
      for (; param_4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    lVar1 = 0x3f;
    if (param_2 != 0) {
      for (; param_2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar9 = ((uint)lVar10 ^ 0x3f) - ((uint)lVar1 ^ 0x3f);
    bVar6 = (byte)uVar9 & 0x3f;
    uVar12 = param_3 << ((byte)uVar9 & 0x3f);
    uVar13 = uVar12;
    uVar14 = param_4 << bVar6 | param_3 >> 0x40 - bVar6;
    if ((uVar9 & 0x40) != 0) {
      uVar13 = 0;
      uVar14 = uVar12;
    }
    uVar12 = 0;
    if (-1 < (int)uVar9) {
      uVar12 = 0;
      do {
        lVar10 = (((uVar14 - 1) + (ulong)(uVar13 != 0)) - param_2) - (ulong)(uVar13 - 1 < param_1);
        uVar11 = lVar10 >> 0x3f;
        uVar12 = uVar12 * 2 | (ulong)((uint)(lVar10 >> 0x3f) & 1);
        uVar7 = uVar11 & uVar13;
        bVar15 = param_1 < uVar7;
        param_1 = param_1 - uVar7;
        param_2 = (param_2 - (uVar11 & uVar14)) - (ulong)bVar15;
        uVar9 = uVar9 - 1;
        uVar13 = uVar13 >> 1 | uVar14 << 0x3f;
        uVar14 = uVar14 >> 1;
      } while (uVar9 != 0xffffffff);
    }
    if (param_5 != (ulong *)0x0) {
      *param_5 = param_1;
      param_5[1] = param_2;
    }
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar12;
    return auVar16;
  }
  if (param_2 < param_3) {
    uVar14 = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_3;
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = param_1;
    uVar8 = SUB168(auVar5 / auVar3,0);
    local_28 = SUB168(auVar5 % auVar3,0);
  }
  else {
    uVar14 = param_2 / param_3;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_3;
    auVar4._8_8_ = param_2 % param_3;
    auVar4._0_8_ = param_1;
    uVar8 = SUB168(auVar4 / auVar2,0);
    local_28 = SUB168(auVar4 % auVar2,0);
  }
  if (param_5 != (ulong *)0x0) {
    *(undefined4 *)param_5 = (undefined4)local_28;
    *(undefined4 *)((long)param_5 + 4) = local_28._4_4_;
    *(undefined4 *)(param_5 + 1) = 0;
    *(undefined4 *)((long)param_5 + 0xc) = 0;
  }
  auVar17._8_8_ = uVar14;
  auVar17._0_8_ = uVar8;
  return auVar17;
}



void FUN_00414795(void)

{
  longdouble lVar1;
  longdouble lVar2;
  longdouble param_7;
  
  lVar1 = ROUND((longdouble)3.321928094887362 * param_7);
  lVar2 = (longdouble)f2xm1((longdouble)3.321928094887362 * param_7 - lVar1);
  fscale((longdouble)1 + lVar2,lVar1);
  return;
}



int FUN_004147b4(void)

{
  longdouble param_7;
  
  return (int)param_7;
}



ulong FUN_00414845(uint param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar7 = (ulong)param_1;
  uVar4 = 0;
  if (0x7f < param_1) {
    uVar1 = 0x1f;
    if (param_1 != 0) {
      for (; param_1 >> uVar1 == 0; uVar1 = uVar1 - 1) {
      }
    }
    uVar2 = (ulong)*(uint *)(&DAT_004189d2 + (ulong)uVar1 * 2);
    uVar8 = uVar7;
    do {
      uVar6 = uVar2;
      uVar7 = uVar8 >> 6;
      uVar3 = CONCAT71((int7)(uVar4 >> 8),(char)uVar8) & 0xffffffffffffff3f | 0x80;
      uVar4 = uVar3 << 8;
      cVar5 = (char)uVar6 + -1;
      uVar2 = CONCAT71((int7)(uVar6 >> 8),cVar5);
      uVar8 = uVar7;
    } while (cVar5 != '\0');
    uVar4 = CONCAT71((int7)uVar3,(char)(uVar6 >> 8));
  }
  return uVar4 | uVar7;
}



ulong FUN_00414880(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 in_R10;
  
  uVar2 = FUN_0041571a();
  uVar3 = FUN_0041571a(param_2);
  if (uVar3 <= uVar2) {
    iVar1 = FUN_00414960(param_1 + (uVar2 - uVar3));
    return CONCAT71((int7)((ulong)in_R10 >> 8),iVar1 == 0) & 0xffffffff;
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
      auVar7[0] = -(*pcVar1 == *pcVar2);
      auVar7[1] = -(pcVar1[1] == pcVar2[1]);
      auVar7[2] = -(pcVar1[2] == pcVar2[2]);
      auVar7[3] = -(pcVar1[3] == pcVar2[3]);
      auVar7[4] = -(pcVar1[4] == pcVar2[4]);
      auVar7[5] = -(pcVar1[5] == pcVar2[5]);
      auVar7[6] = -(pcVar1[6] == pcVar2[6]);
      auVar7[7] = -(pcVar1[7] == pcVar2[7]);
      auVar7[8] = -(pcVar1[8] == pcVar2[8]);
      auVar7[9] = -(pcVar1[9] == pcVar2[9]);
      auVar7[10] = -(pcVar1[10] == pcVar2[10]);
      auVar7[11] = -(pcVar1[0xb] == pcVar2[0xb]);
      auVar7[12] = -(pcVar1[0xc] == pcVar2[0xc]);
      auVar7[13] = -(pcVar1[0xd] == pcVar2[0xd]);
      auVar7[14] = -(pcVar1[0xe] == pcVar2[0xe]);
      auVar7[15] = -(pcVar1[0xf] == pcVar2[0xf]);
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
                      (ushort)(auVar7[15] >> 7) << 0xf) - 0xffff;
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
  undefined auVar1 [16];
  undefined8 uVar2;
  uint uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  
  if (param_2 == 0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_3;
    return auVar1 << 0x40;
  }
  uVar3 = (uint)param_3;
  if ((uVar3 < 0x20) && (param_4 != '\0')) {
    if (1 < param_2) {
      uVar2 = 2;
      *param_1 = 0xd800;
      param_1[1] = (ushort)param_3 | 0xdc00;
      goto LAB_00414a18;
    }
  }
  else if ((0x1fff < uVar3 - 0xe000) && (0xd7ff < uVar3)) {
    uVar3 = uVar3 - 0x10000;
    if ((1 < param_2) && (uVar3 < 0x100000)) {
      param_1[1] = ((ushort)uVar3 & 0x3ff) + 0xdc00;
      *param_1 = (short)(uVar3 >> 10) + 0xd800;
      auVar5._8_8_ = param_3;
      auVar5._0_8_ = 2;
      return auVar5;
    }
    *param_1 = 0xfffd;
    uVar2 = 0xffffffff;
    goto LAB_00414a18;
  }
  *param_1 = (ushort)param_3;
  uVar2 = 1;
LAB_00414a18:
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = uVar2;
  return auVar4;
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
    auVar19[0] = -(*pcVar18 == '\0');
    auVar19[1] = -(cVar1 == '\0');
    auVar19[2] = -(cVar2 == '\0');
    auVar19[3] = -(cVar3 == '\0');
    auVar19[4] = -(cVar4 == '\0');
    auVar19[5] = -(cVar5 == '\0');
    auVar19[6] = -(cVar6 == '\0');
    auVar19[7] = -(cVar7 == '\0');
    auVar19[8] = -(cVar8 == '\0');
    auVar19[9] = -(cVar9 == '\0');
    auVar19[10] = -(cVar10 == '\0');
    auVar19[11] = -(cVar11 == '\0');
    auVar19[12] = -(cVar12 == '\0');
    auVar19[13] = -(cVar13 == '\0');
    auVar19[14] = -(cVar14 == '\0');
    auVar19[15] = -(cVar15 == '\0');
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
                 (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[15] >> 7) << 0xf)
        != 0) break;
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
  undefined auVar9 [16];
  
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
  auVar9._8_8_ = param_3;
  auVar9._0_8_ = uVar6;
  return auVar9;
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
  undefined auVar12 [16];
  undefined auVar13 [16];
  
  uVar4 = 0;
  lVar6 = 0;
  pauVar8 = param_3;
  auVar13 = _DAT_00418a20;
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
      auVar13._8_8_ = lVar6;
      auVar13._0_8_ = uVar4;
      return auVar13;
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
      auVar12 = *param_3;
      auVar11._0_2_ = -(ushort)(0 < auVar12._0_2_);
      auVar11._2_2_ = -(ushort)(0 < auVar12._2_2_);
      auVar11._4_2_ = -(ushort)(0 < auVar12._4_2_);
      auVar11._6_2_ = -(ushort)(0 < auVar12._6_2_);
      auVar11._8_2_ = -(ushort)(0 < auVar12._8_2_);
      auVar11._10_2_ = -(ushort)(0 < auVar12._10_2_);
      auVar11._12_2_ = -(ushort)(0 < auVar12._12_2_);
      auVar11._14_2_ = -(ushort)(0 < auVar12._14_2_);
      auVar10._0_2_ = -(ushort)(auVar13._0_2_ < auVar12._0_2_);
      auVar10._2_2_ = -(ushort)(auVar13._2_2_ < auVar12._2_2_);
      auVar10._4_2_ = -(ushort)(auVar13._4_2_ < auVar12._4_2_);
      auVar10._6_2_ = -(ushort)(auVar13._6_2_ < auVar12._6_2_);
      auVar10._8_2_ = -(ushort)(auVar13._8_2_ < auVar12._8_2_);
      auVar10._10_2_ = -(ushort)(auVar13._10_2_ < auVar12._10_2_);
      auVar10._12_2_ = -(ushort)(auVar13._12_2_ < auVar12._12_2_);
      auVar10._14_2_ = -(ushort)(auVar13._14_2_ < auVar12._14_2_);
      auVar11 = ~auVar10 & auVar11;
      if ((ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
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
                  (ushort)(byte)(auVar11[15] >> 7) << 0xf) != 0xffff) goto LAB_00414e70;
      uVar3 = uVar9 + 8;
      param_3 = param_3[1];
      lVar5 = lVar6 + 8;
      auVar12 = packsswb(auVar12,auVar12);
      *(long *)(param_1 + uVar4) = auVar12._0_8_;
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
  byte bVar2;
  undefined auVar3 [15];
  undefined auVar4 [15];
  undefined auVar5 [15];
  undefined auVar6 [15];
  undefined auVar7 [15];
  undefined auVar8 [15];
  undefined auVar9 [15];
  undefined auVar10 [15];
  undefined auVar11 [15];
  undefined auVar12 [15];
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  
  uVar23 = 0;
  lVar17 = 0;
  do {
    do {
      lVar18 = lVar17;
      pbVar16 = (byte *)(param_3 + lVar18);
      if ((((ulong)pbVar16 & 0xf) == 0) && (uVar15 = uVar23 + 0x10, uVar23 + 0x10 < param_2)) {
        while( true ) {
          auVar1 = *(undefined (*) [16])(param_3 + lVar18);
          auVar25[0] = -('\0' < auVar1[0]);
          auVar25[1] = -('\0' < auVar1[1]);
          auVar25[2] = -('\0' < auVar1[2]);
          auVar25[3] = -('\0' < auVar1[3]);
          auVar25[4] = -('\0' < auVar1[4]);
          auVar25[5] = -('\0' < auVar1[5]);
          auVar25[6] = -('\0' < auVar1[6]);
          auVar25[7] = -('\0' < auVar1[7]);
          auVar25[8] = -('\0' < (char)auVar1[8]);
          auVar25[9] = -('\0' < auVar1[9]);
          auVar25[10] = -('\0' < auVar1[10]);
          auVar25[11] = -('\0' < auVar1[11]);
          auVar25[12] = -('\0' < auVar1[12]);
          auVar25[13] = -('\0' < auVar1[13]);
          auVar25[14] = -('\0' < auVar1[14]);
          auVar25[15] = -('\0' < auVar1[15]);
          if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar25[15] >> 7) << 0xf) != 0xffff) break;
          lVar18 = lVar18 + 0x10;
          auVar3[13] = 0;
          auVar3._0_13_ = auVar1._0_13_;
          auVar3[14] = auVar1[7];
          auVar4[12] = auVar1[6];
          auVar4._0_12_ = auVar1._0_12_;
          auVar4._13_2_ = auVar3._13_2_;
          auVar5[11] = 0;
          auVar5._0_11_ = auVar1._0_11_;
          auVar5._12_3_ = auVar4._12_3_;
          auVar6[10] = auVar1[5];
          auVar6._0_10_ = auVar1._0_10_;
          auVar6._11_4_ = auVar5._11_4_;
          auVar7[9] = 0;
          auVar7._0_9_ = auVar1._0_9_;
          auVar7._10_5_ = auVar6._10_5_;
          auVar8[8] = auVar1[4];
          auVar8._0_8_ = auVar1._0_8_;
          auVar8._9_6_ = auVar7._9_6_;
          auVar10._7_8_ = 0;
          auVar10._0_7_ = auVar8._8_7_;
          auVar11._1_8_ = SUB158(auVar10 << 0x40,7);
          auVar11[0] = auVar1[3];
          auVar11._9_6_ = 0;
          auVar12._1_10_ = SUB1510(auVar11 << 0x30,5);
          auVar12[0] = auVar1[2];
          auVar12._11_4_ = 0;
          auVar9[2] = auVar1[1];
          auVar9._0_2_ = auVar1._0_2_;
          auVar9._3_12_ = SUB1512(auVar12 << 0x20,3);
          auVar26._0_2_ = auVar1._0_2_ & 0xff;
          auVar26._2_13_ = auVar9._2_13_;
          auVar26[15] = 0;
          auVar24[1] = 0;
          auVar24[0] = auVar1[8];
          auVar24[2] = auVar1[9];
          auVar24[3] = 0;
          auVar24[4] = auVar1[10];
          auVar24[5] = 0;
          auVar24[6] = auVar1[11];
          auVar24[7] = 0;
          auVar24[8] = auVar1[12];
          auVar24[9] = 0;
          auVar24[10] = auVar1[13];
          auVar24[11] = 0;
          auVar24[12] = auVar1[14];
          auVar24[13] = 0;
          auVar24[14] = auVar1[15];
          auVar24[15] = 0;
          *(undefined (*) [16])(param_1 + uVar23 * 2) = auVar26;
          uVar23 = uVar23 + 0x10;
          *(undefined (*) [16])(param_1 + -0x10 + uVar15 * 2) = auVar24;
          if (param_2 <= uVar15 + 0x10) {
            pbVar16 = (byte *)(param_3 + lVar18);
            uVar23 = uVar15;
            break;
          }
          pbVar16 = (byte *)(param_3 + lVar18);
          uVar15 = uVar15 + 0x10;
        }
      }
      uVar20 = (uint)(char)*pbVar16;
      lVar17 = lVar18 + 1;
    } while ((uVar20 & 0xc0) == 0x80);
    uVar19 = (uint)*pbVar16;
    if ((uVar20 & 0x80) == 0) {
LAB_0041502a:
      if (uVar19 == 0) goto LAB_0041513f;
LAB_00415033:
      uVar15 = (ulong)uVar19;
    }
    else {
      if (uVar19 < 0xfc) {
        iVar22 = 0x1f;
        if ((uVar19 ^ 0xff) != 0) {
          for (; (uVar19 ^ 0xff) >> iVar22 == 0; iVar22 = iVar22 + -1) {
          }
        }
        uVar19 = uVar19 & ((1 << ((byte)iVar22 & 0x1f)) - 1U | 3);
        iVar22 = 6 - iVar22;
        if (iVar22 == 0) goto LAB_0041502a;
      }
      else {
        iVar22 = 5;
        uVar19 = uVar20 & 3;
      }
      lVar13 = lVar18 + 2;
      do {
        lVar17 = lVar13;
        bVar2 = *(byte *)(param_3 + -1 + lVar17);
        if (bVar2 == 0) goto LAB_0041513f;
        uVar21 = bVar2 & 0x3f;
        uVar20 = uVar19 << 6;
        uVar19 = uVar21 | uVar20;
        lVar13 = lVar17 + 1;
      } while (lVar18 + 3 + (ulong)(iVar22 - 1) != lVar17 + 1);
      if (uVar19 == 0) {
LAB_0041513f:
        if (uVar23 < param_2) {
          *(undefined2 *)(param_1 + uVar23 * 2) = 0;
        }
        return;
      }
      if (uVar19 < 0x10000) goto LAB_00415033;
      uVar15 = 0xfffd;
      if (uVar19 - 0x10000 < 0x100000) {
        uVar15 = (ulong)(((uVar21 | uVar20 & 0x3ff) + 0xdc00) * 0x10000 |
                        (uVar19 - 0x10000 >> 10) + 0xd800);
      }
    }
    do {
      uVar14 = uVar23 + 1;
      if (param_2 <= uVar14) break;
      *(short *)(param_1 + -2 + uVar14 * 2) = (short)uVar15;
      uVar15 = uVar15 >> 0x10;
      uVar23 = uVar14;
    } while (uVar15 != 0);
  } while( true );
}



void FUN_00415200(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_38 [7];
  undefined4 uStack_1c;
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
  uStack_1c = param_2[3];
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
  long unaff_retaddr;
  
  *param_1 = (long)&stack0x00000008;
  param_1[1] = unaff_RBX;
  param_1[2] = unaff_RBP;
  param_1[3] = unaff_R12;
  param_1[4] = unaff_R13;
  param_1[5] = unaff_R14;
  param_1[6] = unaff_R15;
  param_1[7] = unaff_retaddr;
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
  undefined auVar8 [16];
  
  bVar5 = (byte)param_1 & 0xf;
  pcVar3 = (char *)(param_1 & 0xfffffffffffffff0);
  auVar7[0] = -(*pcVar3 == '\0');
  auVar7[1] = -(pcVar3[1] == '\0');
  auVar7[2] = -(pcVar3[2] == '\0');
  auVar7[3] = -(pcVar3[3] == '\0');
  auVar7[4] = -(pcVar3[4] == '\0');
  auVar7[5] = -(pcVar3[5] == '\0');
  auVar7[6] = -(pcVar3[6] == '\0');
  auVar7[7] = -(pcVar3[7] == '\0');
  auVar7[8] = -(pcVar3[8] == '\0');
  auVar7[9] = -(pcVar3[9] == '\0');
  auVar7[10] = -(pcVar3[10] == '\0');
  auVar7[11] = -(pcVar3[0xb] == '\0');
  auVar7[12] = -(pcVar3[0xc] == '\0');
  auVar7[13] = -(pcVar3[0xd] == '\0');
  auVar7[14] = -(pcVar3[0xe] == '\0');
  auVar7[15] = -(pcVar3[0xf] == '\0');
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
                         (ushort)(auVar7[15] >> 7) << 0xf) >> bVar5) << bVar5;
  uVar1 = 0;
  if (uVar6 != 0) {
    for (; (uVar6 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  pcVar4 = pcVar3;
  if (uVar6 == 0) {
    do {
      pcVar3 = pcVar4 + 0x10;
      auVar8[0] = -(*pcVar3 == '\0');
      auVar8[1] = -(pcVar4[0x11] == '\0');
      auVar8[2] = -(pcVar4[0x12] == '\0');
      auVar8[3] = -(pcVar4[0x13] == '\0');
      auVar8[4] = -(pcVar4[0x14] == '\0');
      auVar8[5] = -(pcVar4[0x15] == '\0');
      auVar8[6] = -(pcVar4[0x16] == '\0');
      auVar8[7] = -(pcVar4[0x17] == '\0');
      auVar8[8] = -(pcVar4[0x18] == '\0');
      auVar8[9] = -(pcVar4[0x19] == '\0');
      auVar8[10] = -(pcVar4[0x1a] == '\0');
      auVar8[11] = -(pcVar4[0x1b] == '\0');
      auVar8[12] = -(pcVar4[0x1c] == '\0');
      auVar8[13] = -(pcVar4[0x1d] == '\0');
      auVar8[14] = -(pcVar4[0x1e] == '\0');
      auVar8[15] = -(pcVar4[0x1f] == '\0');
      uVar2 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
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
              (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(auVar8[15] >> 7) << 0xf;
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



void FUN_00415760(undefined8 param_1,undefined param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_004157b1(param_1,0xffffffffffffffff,param_2,param_4,0,0xffffffffffffffff);
  return;
}



void FUN_0041576b(undefined8 param_1,undefined param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_004157b1(param_1,0xffffffffffffffff,param_2,param_4,0,0);
  return;
}



void FUN_00415783(undefined8 param_1,undefined param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_004157b1(param_1,param_3,CONCAT11(param_2,param_2),param_4,0);
  return;
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
  undefined in_YMM0 [32];
  undefined in_YMM1 [32];
  undefined auVar7 [16];
  undefined auVar8 [32];
  undefined auVar9 [16];
  undefined auVar10 [32];
  undefined auVar11 [16];
  undefined auVar12 [16];
  
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
      if ((DAT_0041c038._4_1_ & 0x20) == 0) {
        in_YMM0._0_16_ = ZEXT816(0);
        in_YMM1._0_16_ = ZEXT816(0);
        pauVar3 = pauVar2;
        do {
          pauVar2 = pauVar3[1];
          bVar6 = param_2 < 0x20;
          param_2 = param_2 - 0x20;
          if (bVar6) goto LAB_00415812;
          auVar9[0] = -(pauVar3[1][0x10] == '\0');
          auVar9[1] = -(pauVar3[1][0x11] == '\0');
          auVar9[2] = -(pauVar3[1][0x12] == '\0');
          auVar9[3] = -(pauVar3[1][0x13] == '\0');
          auVar9[4] = -(pauVar3[1][0x14] == '\0');
          auVar9[5] = -(pauVar3[1][0x15] == '\0');
          auVar9[6] = -(pauVar3[1][0x16] == '\0');
          auVar9[7] = -(pauVar3[1][0x17] == '\0');
          auVar9[8] = -(pauVar3[1][0x18] == '\0');
          auVar9[9] = -(pauVar3[1][0x19] == '\0');
          auVar9[10] = -(pauVar3[1][0x1a] == '\0');
          auVar9[11] = -(pauVar3[1][0x1b] == '\0');
          auVar9[12] = -(pauVar3[1][0x1c] == '\0');
          auVar9[13] = -(pauVar3[1][0x1d] == '\0');
          auVar9[14] = -(pauVar3[1][0x1e] == '\0');
          auVar9[15] = -(pauVar3[1][0x1f] == '\0');
          auVar11[0] = -(pauVar3[1][0x10] == '\0');
          auVar11[1] = -(pauVar3[1][0x11] == '\0');
          auVar11[2] = -(pauVar3[1][0x12] == '\0');
          auVar11[3] = -(pauVar3[1][0x13] == '\0');
          auVar11[4] = -(pauVar3[1][0x14] == '\0');
          auVar11[5] = -(pauVar3[1][0x15] == '\0');
          auVar11[6] = -(pauVar3[1][0x16] == '\0');
          auVar11[7] = -(pauVar3[1][0x17] == '\0');
          auVar11[8] = -(pauVar3[1][0x18] == '\0');
          auVar11[9] = -(pauVar3[1][0x19] == '\0');
          auVar11[10] = -(pauVar3[1][0x1a] == '\0');
          auVar11[11] = -(pauVar3[1][0x1b] == '\0');
          auVar11[12] = -(pauVar3[1][0x1c] == '\0');
          auVar11[13] = -(pauVar3[1][0x1d] == '\0');
          auVar11[14] = -(pauVar3[1][0x1e] == '\0');
          auVar11[15] = -(pauVar3[1][0x1f] == '\0');
          auVar9 = auVar9 | auVar11;
          auVar7[0] = -((*pauVar2)[0] == '\0');
          auVar7[1] = -(pauVar3[1][1] == '\0');
          auVar7[2] = -(pauVar3[1][2] == '\0');
          auVar7[3] = -(pauVar3[1][3] == '\0');
          auVar7[4] = -(pauVar3[1][4] == '\0');
          auVar7[5] = -(pauVar3[1][5] == '\0');
          auVar7[6] = -(pauVar3[1][6] == '\0');
          auVar7[7] = -(pauVar3[1][7] == '\0');
          auVar7[8] = -(pauVar3[1][8] == '\0');
          auVar7[9] = -(pauVar3[1][9] == '\0');
          auVar7[10] = -(pauVar3[1][10] == '\0');
          auVar7[11] = -(pauVar3[1][0xb] == '\0');
          auVar7[12] = -(pauVar3[1][0xc] == '\0');
          auVar7[13] = -(pauVar3[1][0xd] == '\0');
          auVar7[14] = -(pauVar3[1][0xe] == '\0');
          auVar7[15] = -(pauVar3[1][0xf] == '\0');
          auVar12[0] = -((*pauVar2)[0] == '\0');
          auVar12[1] = -(pauVar3[1][1] == '\0');
          auVar12[2] = -(pauVar3[1][2] == '\0');
          auVar12[3] = -(pauVar3[1][3] == '\0');
          auVar12[4] = -(pauVar3[1][4] == '\0');
          auVar12[5] = -(pauVar3[1][5] == '\0');
          auVar12[6] = -(pauVar3[1][6] == '\0');
          auVar12[7] = -(pauVar3[1][7] == '\0');
          auVar12[8] = -(pauVar3[1][8] == '\0');
          auVar12[9] = -(pauVar3[1][9] == '\0');
          auVar12[10] = -(pauVar3[1][10] == '\0');
          auVar12[11] = -(pauVar3[1][0xb] == '\0');
          auVar12[12] = -(pauVar3[1][0xc] == '\0');
          auVar12[13] = -(pauVar3[1][0xd] == '\0');
          auVar12[14] = -(pauVar3[1][0xe] == '\0');
          auVar12[15] = -(pauVar3[1][0xf] == '\0');
          auVar7 = auVar7 | auVar12;
          uVar4 = CONCAT22((ushort)(SUB161(auVar9 >> 7,0) & 1) |
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
                           (ushort)(byte)(auVar9[15] >> 7) << 0xf,
                           (ushort)(SUB161(auVar7 >> 7,0) & 1) |
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
                           (ushort)(byte)(auVar7[15] >> 7) << 0xf);
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
          auVar10 = vpcmpeqb_avx2(*pauVar2,in_YMM0);
          auVar8 = vpcmpeqb_avx2(*pauVar2,in_YMM1);
          auVar8 = vpor_avx2(auVar8,auVar10);
          uVar4 = (uint)(SUB321(auVar8 >> 7,0) & 1) | (uint)(SUB321(auVar8 >> 0xf,0) & 1) << 1 |
                  (uint)(SUB321(auVar8 >> 0x17,0) & 1) << 2 |
                  (uint)(SUB321(auVar8 >> 0x1f,0) & 1) << 3 |
                  (uint)(SUB321(auVar8 >> 0x27,0) & 1) << 4 |
                  (uint)(SUB321(auVar8 >> 0x2f,0) & 1) << 5 |
                  (uint)(SUB321(auVar8 >> 0x37,0) & 1) << 6 |
                  (uint)(SUB321(auVar8 >> 0x3f,0) & 1) << 7 |
                  (uint)(SUB321(auVar8 >> 0x47,0) & 1) << 8 |
                  (uint)(SUB321(auVar8 >> 0x4f,0) & 1) << 9 |
                  (uint)(SUB321(auVar8 >> 0x57,0) & 1) << 10 |
                  (uint)(SUB321(auVar8 >> 0x5f,0) & 1) << 0xb |
                  (uint)(SUB321(auVar8 >> 0x67,0) & 1) << 0xc |
                  (uint)(SUB321(auVar8 >> 0x6f,0) & 1) << 0xd |
                  (uint)(SUB321(auVar8 >> 0x77,0) & 1) << 0xe |
                  (uint)SUB321(auVar8 >> 0x7f,0) << 0xf |
                  (uint)(SUB321(auVar8 >> 0x87,0) & 1) << 0x10 |
                  (uint)(SUB321(auVar8 >> 0x8f,0) & 1) << 0x11 |
                  (uint)(SUB321(auVar8 >> 0x97,0) & 1) << 0x12 |
                  (uint)(SUB321(auVar8 >> 0x9f,0) & 1) << 0x13 |
                  (uint)(SUB321(auVar8 >> 0xa7,0) & 1) << 0x14 |
                  (uint)(SUB321(auVar8 >> 0xaf,0) & 1) << 0x15 |
                  (uint)(SUB321(auVar8 >> 0xb7,0) & 1) << 0x16 |
                  (uint)SUB321(auVar8 >> 0xbf,0) << 0x17 |
                  (uint)(SUB321(auVar8 >> 199,0) & 1) << 0x18 |
                  (uint)(SUB321(auVar8 >> 0xcf,0) & 1) << 0x19 |
                  (uint)(SUB321(auVar8 >> 0xd7,0) & 1) << 0x1a |
                  (uint)(SUB321(auVar8 >> 0xdf,0) & 1) << 0x1b |
                  (uint)(SUB321(auVar8 >> 0xe7,0) & 1) << 0x1c |
                  (uint)(SUB321(auVar8 >> 0xef,0) & 1) << 0x1d |
                  (uint)(SUB321(auVar8 >> 0xf7,0) & 1) << 0x1e |
                  (uint)(byte)(auVar8[31] >> 7) << 0x1f;
          uVar1 = 0;
          if (uVar4 != 0) {
            for (; (uVar4 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
            }
          }
        } while (uVar4 == 0);
        in_YMM0 = ZEXT1632(in_YMM0._0_16_);
        in_YMM1 = ZEXT1632(in_YMM1._0_16_);
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
  undefined in_YMM0 [32];
  undefined in_YMM1 [32];
  undefined auVar6 [16];
  undefined auVar7 [32];
  undefined auVar8 [16];
  undefined auVar9 [32];
  undefined auVar10 [16];
  undefined auVar11 [16];
  
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
      if ((DAT_0041c038._4_1_ & 0x20) == 0) {
        in_YMM0._0_16_ = ZEXT816(0);
        in_YMM1._0_16_ = ZEXT816(0);
        pauVar3 = pauVar2;
        do {
          pauVar2 = pauVar3[1];
          bVar5 = param_2 < 0x20;
          param_2 = param_2 - 0x20;
          if (bVar5) goto LAB_00415812;
          auVar8[0] = -(pauVar3[1][0x10] == '\0');
          auVar8[1] = -(pauVar3[1][0x11] == '\0');
          auVar8[2] = -(pauVar3[1][0x12] == '\0');
          auVar8[3] = -(pauVar3[1][0x13] == '\0');
          auVar8[4] = -(pauVar3[1][0x14] == '\0');
          auVar8[5] = -(pauVar3[1][0x15] == '\0');
          auVar8[6] = -(pauVar3[1][0x16] == '\0');
          auVar8[7] = -(pauVar3[1][0x17] == '\0');
          auVar8[8] = -(pauVar3[1][0x18] == '\0');
          auVar8[9] = -(pauVar3[1][0x19] == '\0');
          auVar8[10] = -(pauVar3[1][0x1a] == '\0');
          auVar8[11] = -(pauVar3[1][0x1b] == '\0');
          auVar8[12] = -(pauVar3[1][0x1c] == '\0');
          auVar8[13] = -(pauVar3[1][0x1d] == '\0');
          auVar8[14] = -(pauVar3[1][0x1e] == '\0');
          auVar8[15] = -(pauVar3[1][0x1f] == '\0');
          auVar10[0] = -(pauVar3[1][0x10] == '\0');
          auVar10[1] = -(pauVar3[1][0x11] == '\0');
          auVar10[2] = -(pauVar3[1][0x12] == '\0');
          auVar10[3] = -(pauVar3[1][0x13] == '\0');
          auVar10[4] = -(pauVar3[1][0x14] == '\0');
          auVar10[5] = -(pauVar3[1][0x15] == '\0');
          auVar10[6] = -(pauVar3[1][0x16] == '\0');
          auVar10[7] = -(pauVar3[1][0x17] == '\0');
          auVar10[8] = -(pauVar3[1][0x18] == '\0');
          auVar10[9] = -(pauVar3[1][0x19] == '\0');
          auVar10[10] = -(pauVar3[1][0x1a] == '\0');
          auVar10[11] = -(pauVar3[1][0x1b] == '\0');
          auVar10[12] = -(pauVar3[1][0x1c] == '\0');
          auVar10[13] = -(pauVar3[1][0x1d] == '\0');
          auVar10[14] = -(pauVar3[1][0x1e] == '\0');
          auVar10[15] = -(pauVar3[1][0x1f] == '\0');
          auVar8 = auVar8 | auVar10;
          auVar6[0] = -((*pauVar2)[0] == '\0');
          auVar6[1] = -(pauVar3[1][1] == '\0');
          auVar6[2] = -(pauVar3[1][2] == '\0');
          auVar6[3] = -(pauVar3[1][3] == '\0');
          auVar6[4] = -(pauVar3[1][4] == '\0');
          auVar6[5] = -(pauVar3[1][5] == '\0');
          auVar6[6] = -(pauVar3[1][6] == '\0');
          auVar6[7] = -(pauVar3[1][7] == '\0');
          auVar6[8] = -(pauVar3[1][8] == '\0');
          auVar6[9] = -(pauVar3[1][9] == '\0');
          auVar6[10] = -(pauVar3[1][10] == '\0');
          auVar6[11] = -(pauVar3[1][0xb] == '\0');
          auVar6[12] = -(pauVar3[1][0xc] == '\0');
          auVar6[13] = -(pauVar3[1][0xd] == '\0');
          auVar6[14] = -(pauVar3[1][0xe] == '\0');
          auVar6[15] = -(pauVar3[1][0xf] == '\0');
          auVar11[0] = -((*pauVar2)[0] == '\0');
          auVar11[1] = -(pauVar3[1][1] == '\0');
          auVar11[2] = -(pauVar3[1][2] == '\0');
          auVar11[3] = -(pauVar3[1][3] == '\0');
          auVar11[4] = -(pauVar3[1][4] == '\0');
          auVar11[5] = -(pauVar3[1][5] == '\0');
          auVar11[6] = -(pauVar3[1][6] == '\0');
          auVar11[7] = -(pauVar3[1][7] == '\0');
          auVar11[8] = -(pauVar3[1][8] == '\0');
          auVar11[9] = -(pauVar3[1][9] == '\0');
          auVar11[10] = -(pauVar3[1][10] == '\0');
          auVar11[11] = -(pauVar3[1][0xb] == '\0');
          auVar11[12] = -(pauVar3[1][0xc] == '\0');
          auVar11[13] = -(pauVar3[1][0xd] == '\0');
          auVar11[14] = -(pauVar3[1][0xe] == '\0');
          auVar11[15] = -(pauVar3[1][0xf] == '\0');
          auVar6 = auVar6 | auVar11;
          uVar4 = CONCAT22((ushort)(SUB161(auVar8 >> 7,0) & 1) |
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
                           (ushort)(byte)(auVar8[15] >> 7) << 0xf,
                           (ushort)(SUB161(auVar6 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar6[15] >> 7) << 0xf);
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
          auVar9 = vpcmpeqb_avx2(*pauVar2,in_YMM0);
          auVar7 = vpcmpeqb_avx2(*pauVar2,in_YMM1);
          auVar7 = vpor_avx2(auVar7,auVar9);
          uVar4 = (uint)(SUB321(auVar7 >> 7,0) & 1) | (uint)(SUB321(auVar7 >> 0xf,0) & 1) << 1 |
                  (uint)(SUB321(auVar7 >> 0x17,0) & 1) << 2 |
                  (uint)(SUB321(auVar7 >> 0x1f,0) & 1) << 3 |
                  (uint)(SUB321(auVar7 >> 0x27,0) & 1) << 4 |
                  (uint)(SUB321(auVar7 >> 0x2f,0) & 1) << 5 |
                  (uint)(SUB321(auVar7 >> 0x37,0) & 1) << 6 |
                  (uint)(SUB321(auVar7 >> 0x3f,0) & 1) << 7 |
                  (uint)(SUB321(auVar7 >> 0x47,0) & 1) << 8 |
                  (uint)(SUB321(auVar7 >> 0x4f,0) & 1) << 9 |
                  (uint)(SUB321(auVar7 >> 0x57,0) & 1) << 10 |
                  (uint)(SUB321(auVar7 >> 0x5f,0) & 1) << 0xb |
                  (uint)(SUB321(auVar7 >> 0x67,0) & 1) << 0xc |
                  (uint)(SUB321(auVar7 >> 0x6f,0) & 1) << 0xd |
                  (uint)(SUB321(auVar7 >> 0x77,0) & 1) << 0xe |
                  (uint)SUB321(auVar7 >> 0x7f,0) << 0xf |
                  (uint)(SUB321(auVar7 >> 0x87,0) & 1) << 0x10 |
                  (uint)(SUB321(auVar7 >> 0x8f,0) & 1) << 0x11 |
                  (uint)(SUB321(auVar7 >> 0x97,0) & 1) << 0x12 |
                  (uint)(SUB321(auVar7 >> 0x9f,0) & 1) << 0x13 |
                  (uint)(SUB321(auVar7 >> 0xa7,0) & 1) << 0x14 |
                  (uint)(SUB321(auVar7 >> 0xaf,0) & 1) << 0x15 |
                  (uint)(SUB321(auVar7 >> 0xb7,0) & 1) << 0x16 |
                  (uint)SUB321(auVar7 >> 0xbf,0) << 0x17 |
                  (uint)(SUB321(auVar7 >> 199,0) & 1) << 0x18 |
                  (uint)(SUB321(auVar7 >> 0xcf,0) & 1) << 0x19 |
                  (uint)(SUB321(auVar7 >> 0xd7,0) & 1) << 0x1a |
                  (uint)(SUB321(auVar7 >> 0xdf,0) & 1) << 0x1b |
                  (uint)(SUB321(auVar7 >> 0xe7,0) & 1) << 0x1c |
                  (uint)(SUB321(auVar7 >> 0xef,0) & 1) << 0x1d |
                  (uint)(SUB321(auVar7 >> 0xf7,0) & 1) << 0x1e |
                  (uint)(byte)(auVar7[31] >> 7) << 0x1f;
          uVar1 = 0;
          if (uVar4 != 0) {
            for (; (uVar4 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
            }
          }
        } while (uVar4 == 0);
        in_YMM0 = ZEXT1632(in_YMM0._0_16_);
        in_YMM1 = ZEXT1632(in_YMM1._0_16_);
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



ulong FUN_004157b1(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  ulong param_6)

{
  uint uVar1;
  undefined (*pauVar2) [32];
  undefined (*pauVar3) [32];
  uint uVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  ulong in_R10;
  bool bVar8;
  undefined in_YMM0 [32];
  undefined in_YMM1 [32];
  undefined auVar9 [16];
  undefined auVar10 [32];
  undefined auVar11 [16];
  undefined auVar12 [32];
  undefined auVar13 [16];
  undefined auVar14 [16];
  
  bVar6 = (byte)((ulong)param_3 >> 8);
  bVar5 = (byte)param_3;
  pauVar3 = (undefined (*) [32])(param_1 + -1);
  do {
    pauVar2 = (undefined (*) [32])(*pauVar3 + 1);
    bVar8 = param_2 == 0;
    param_2 = param_2 - 1;
    uVar7 = in_R10;
    if (bVar8) break;
    if (((ulong)pauVar2 & 0x1f) == 0) {
      pauVar2 = (undefined (*) [32])(pauVar3[-1] + 1);
      if ((DAT_0041c038._4_1_ & 0x20) == 0) {
        in_YMM0._0_4_ = CONCAT22(CONCAT11(bVar5,bVar5),CONCAT11(bVar5,bVar5));
        in_YMM0._4_4_ = in_YMM0._0_4_;
        in_YMM0._8_4_ = in_YMM0._0_4_;
        in_YMM0._12_4_ = in_YMM0._0_4_;
        in_YMM1._0_4_ = CONCAT22(CONCAT11(bVar6,bVar6),CONCAT11(bVar6,bVar6));
        in_YMM1._4_4_ = in_YMM1._0_4_;
        in_YMM1._8_4_ = in_YMM1._0_4_;
        in_YMM1._12_4_ = in_YMM1._0_4_;
        pauVar3 = pauVar2;
        do {
          pauVar2 = pauVar3[1];
          bVar8 = param_2 < 0x20;
          param_2 = param_2 - 0x20;
          if (bVar8) goto LAB_00415812;
          auVar11[0] = -(pauVar3[1][0x10] == bVar5);
          auVar11[1] = -(pauVar3[1][0x11] == bVar5);
          auVar11[2] = -(pauVar3[1][0x12] == bVar5);
          auVar11[3] = -(pauVar3[1][0x13] == bVar5);
          auVar11[4] = -(pauVar3[1][0x14] == bVar5);
          auVar11[5] = -(pauVar3[1][0x15] == bVar5);
          auVar11[6] = -(pauVar3[1][0x16] == bVar5);
          auVar11[7] = -(pauVar3[1][0x17] == bVar5);
          auVar11[8] = -(pauVar3[1][0x18] == bVar5);
          auVar11[9] = -(pauVar3[1][0x19] == bVar5);
          auVar11[10] = -(pauVar3[1][0x1a] == bVar5);
          auVar11[11] = -(pauVar3[1][0x1b] == bVar5);
          auVar11[12] = -(pauVar3[1][0x1c] == bVar5);
          auVar11[13] = -(pauVar3[1][0x1d] == bVar5);
          auVar11[14] = -(pauVar3[1][0x1e] == bVar5);
          auVar11[15] = -(pauVar3[1][0x1f] == bVar5);
          auVar13[0] = -(pauVar3[1][0x10] == bVar6);
          auVar13[1] = -(pauVar3[1][0x11] == bVar6);
          auVar13[2] = -(pauVar3[1][0x12] == bVar6);
          auVar13[3] = -(pauVar3[1][0x13] == bVar6);
          auVar13[4] = -(pauVar3[1][0x14] == bVar6);
          auVar13[5] = -(pauVar3[1][0x15] == bVar6);
          auVar13[6] = -(pauVar3[1][0x16] == bVar6);
          auVar13[7] = -(pauVar3[1][0x17] == bVar6);
          auVar13[8] = -(pauVar3[1][0x18] == bVar6);
          auVar13[9] = -(pauVar3[1][0x19] == bVar6);
          auVar13[10] = -(pauVar3[1][0x1a] == bVar6);
          auVar13[11] = -(pauVar3[1][0x1b] == bVar6);
          auVar13[12] = -(pauVar3[1][0x1c] == bVar6);
          auVar13[13] = -(pauVar3[1][0x1d] == bVar6);
          auVar13[14] = -(pauVar3[1][0x1e] == bVar6);
          auVar13[15] = -(pauVar3[1][0x1f] == bVar6);
          auVar11 = auVar11 | auVar13;
          auVar9[0] = -((*pauVar2)[0] == bVar5);
          auVar9[1] = -(pauVar3[1][1] == bVar5);
          auVar9[2] = -(pauVar3[1][2] == bVar5);
          auVar9[3] = -(pauVar3[1][3] == bVar5);
          auVar9[4] = -(pauVar3[1][4] == bVar5);
          auVar9[5] = -(pauVar3[1][5] == bVar5);
          auVar9[6] = -(pauVar3[1][6] == bVar5);
          auVar9[7] = -(pauVar3[1][7] == bVar5);
          auVar9[8] = -(pauVar3[1][8] == bVar5);
          auVar9[9] = -(pauVar3[1][9] == bVar5);
          auVar9[10] = -(pauVar3[1][10] == bVar5);
          auVar9[11] = -(pauVar3[1][0xb] == bVar5);
          auVar9[12] = -(pauVar3[1][0xc] == bVar5);
          auVar9[13] = -(pauVar3[1][0xd] == bVar5);
          auVar9[14] = -(pauVar3[1][0xe] == bVar5);
          auVar9[15] = -(pauVar3[1][0xf] == bVar5);
          auVar14[0] = -((*pauVar2)[0] == bVar6);
          auVar14[1] = -(pauVar3[1][1] == bVar6);
          auVar14[2] = -(pauVar3[1][2] == bVar6);
          auVar14[3] = -(pauVar3[1][3] == bVar6);
          auVar14[4] = -(pauVar3[1][4] == bVar6);
          auVar14[5] = -(pauVar3[1][5] == bVar6);
          auVar14[6] = -(pauVar3[1][6] == bVar6);
          auVar14[7] = -(pauVar3[1][7] == bVar6);
          auVar14[8] = -(pauVar3[1][8] == bVar6);
          auVar14[9] = -(pauVar3[1][9] == bVar6);
          auVar14[10] = -(pauVar3[1][10] == bVar6);
          auVar14[11] = -(pauVar3[1][0xb] == bVar6);
          auVar14[12] = -(pauVar3[1][0xc] == bVar6);
          auVar14[13] = -(pauVar3[1][0xd] == bVar6);
          auVar14[14] = -(pauVar3[1][0xe] == bVar6);
          auVar14[15] = -(pauVar3[1][0xf] == bVar6);
          auVar9 = auVar9 | auVar14;
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
                           (ushort)(byte)(auVar11[15] >> 7) << 0xf,
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
                           (ushort)(byte)(auVar9[15] >> 7) << 0xf);
          uVar1 = 0;
          if (uVar4 != 0) {
            for (; (uVar4 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
            }
          }
          pauVar3 = pauVar2;
        } while (uVar4 == 0);
      }
      else {
        in_YMM0 = vpbroadcastb_avx2(ZEXT116(bVar5));
        in_YMM1 = vpbroadcastb_avx2(ZEXT116(bVar6));
        do {
          pauVar2 = pauVar2[1];
          bVar8 = param_2 < 0x20;
          param_2 = param_2 - 0x20;
LAB_00415812:
          if (bVar8) {
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
                  (uint)(byte)(auVar10[31] >> 7) << 0x1f;
          uVar1 = 0;
          if (uVar4 != 0) {
            for (; (uVar4 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
            }
          }
        } while (uVar4 == 0);
        in_YMM0 = ZEXT1632(in_YMM0._0_16_);
        in_YMM1 = ZEXT1632(in_YMM1._0_16_);
      }
      pauVar2 = (undefined (*) [32])(*pauVar2 + uVar1);
    }
LAB_004157c3:
    if (bVar5 == (*pauVar2)[0]) {
      return (long)pauVar2 - param_5;
    }
    pauVar3 = pauVar2;
    uVar7 = param_6;
  } while (bVar6 != (*pauVar2)[0]);
  return (long)pauVar2 - param_5 & uVar7;
}



long FUN_00415898(long param_1,undefined8 param_2,long param_3,byte param_4)

{
  return (SUB168(SEXT816(param_1) * SEXT816(param_3),8) >> (param_4 & 0x3f)) - (param_1 >> 0x3f);
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



// WARNING: Control flow encountered bad instruction data

void FUN_00416001(void)

{
  if (((byte)DAT_0041c718 & 4) == 0) {
    syscall();
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_00416220(uint param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_1 & 7) == 7) {
    uVar1 = 0x40;
    if ((param_2 & 1) == 0) {
      if (_DAT_004408c8 != ((long)(int)param_2 & _DAT_004408c8)) {
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


