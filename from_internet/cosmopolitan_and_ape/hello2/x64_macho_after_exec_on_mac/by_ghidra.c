typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
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




// WARNING: Control flow encountered bad instruction data

void FUN_00400553(long param_1)

{
  char unaff_BH;
  
  func_0x1a28129b();
  *(char *)(param_1 + 0x68c0007) = *(char *)(param_1 + 0x68c0007) + unaff_BH;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_0040059b(int param_1,byte *param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = 3;
    out((short)param_1 + 3,*param_2 | 0x80);
    do {
      out((short)param_1,*param_2);
      param_1 = param_1 + 1;
      iVar1 = iVar1 + -1;
      param_2 = param_2 + 1;
    } while (-1 < iVar1);
  }
  return;
}



undefined8 FUN_004005be(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  int extraout_EDX;
  ulong uVar4;
  
  uVar4 = (ulong)&stack0xfffffffffffffff8 & 0xffffffff;
  func_0x012805d8();
  *(char *)(uVar4 - 0x77) = *(char *)(uVar4 - 0x77) + (char)extraout_EDX;
  uVar1 = in(0xbf);
  cVar3 = (char)((uint)extraout_EDX >> 8);
  *(char *)(ulong)uVar1 = *(char *)(ulong)uVar1 + cVar3;
  *(int *)(uVar4 - 0x77) = *(int *)(uVar4 - 0x77) + extraout_EDX;
  uVar1 = in(0x8b);
  *(byte *)(uVar4 - 0x74fb8a0a) = *(byte *)(uVar4 - 0x74fb8a0a) ^ (byte)uVar1;
  *(char *)(ulong)uVar1 = *(char *)(ulong)uVar1 + cVar3;
  uVar2 = 0x5f504489;
  if (param_1 != 0) {
    uVar2 = func_0xfffffffff62b0603();
  }
  return uVar2;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00400612) overlaps instruction at (ram,0x0040060f)
// 

void FUN_00400601(undefined8 param_1,int param_2)

{
  func_0x5f9e0616();
  if (param_2 != 0) {
    func_0xffffffffc39d062b();
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_00400614(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00400629(uint param_1)

{
  ulong in_RAX;
  byte *pbVar1;
  byte bVar2;
  
  bVar2 = 0;
  while( true ) {
    pbVar1 = (byte *)(ulong)param_1;
    param_1 = param_1 + 1 + (uint)bVar2 * -2;
    if (*pbVar1 == 0) break;
    in_RAX = FUN_00400675(in_RAX & 0xffffff00 | (ulong)*pbVar1);
  }
  return;
}



undefined  [16] FUN_00400675(undefined param_1,short param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 in_RAX;
  
  do {
    bVar1 = in(param_2 + 5);
  } while ((bVar1 & 0x20) == 0);
  out(param_2,param_1);
  return CONCAT88(param_3,in_RAX);
}



ulong FUN_004006c3(uint param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar4;
  ulong uVar2;
  ulong uVar3;
  int iVar5;
  undefined8 unaff_RBX;
  ulong uVar6;
  uint uVar7;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte bVar12;
  ulong uVar8;
  
  bVar12 = 0;
  uVar7 = (int)register0x00000020 - 0x18;
  uVar8 = (ulong)uVar7;
  param_2 = param_2 & 0xffffffff;
  *(char *)(ulong)uVar7 = (char)param_2;
  pbVar11 = (byte *)(ulong)param_1;
  *(undefined8 *)(uVar8 - 8) = 1;
  uVar2 = *(ulong *)(uVar8 - 8);
  *(undefined8 *)(uVar8 - 8) = unaff_RBX;
  uVar2 = uVar2 & 0xffffffff;
  bVar4 = (byte)(param_1 >> 8);
  uVar3 = ((ulong)CONCAT61((int6)(((ulong)(param_1 >> 8) << 8) >> 0x10),bVar4) & 0xffffffffffff00)
          << 8 | (ulong)CONCAT11((bVar4 & 0x80) + 0xf,0xa0);
  uVar6 = CONCAT71((uint7)((ulong)unaff_RBX >> 8) & 0xffffffffffff00,0xa0);
  pbVar10 = (byte *)(ulong)uVar7;
  do {
    uVar7 = (uint)pbVar11;
    iVar5 = (int)uVar6;
    if ((uint)uVar3 == uVar7) {
      *(ulong *)(uVar8 - 0x10) = param_2;
      *(ulong *)(uVar8 - 0x18) = uVar2;
      *(ulong *)(uVar8 - 0x20) = uVar3;
      *(byte **)(uVar8 - 0x28) = pbVar10;
      *(ulong *)(uVar8 - 0x30) = param_2;
      *(undefined8 *)(uVar8 - 0x30) = 0x40073a;
      uVar7 = FUN_00400748(pbVar11,uVar6 & 0xffffffff);
      pbVar11 = (byte *)(ulong)uVar7;
      pbVar9 = *(byte **)(uVar8 - 0x28);
      uVar3 = *(ulong *)(uVar8 - 0x20);
      uVar2 = *(ulong *)(uVar8 - 0x18);
      param_2 = *(ulong *)(uVar8 - 0x10);
    }
    else {
      if (uVar7 < (uint)uVar3) break;
      pbVar9 = pbVar10 + (ulong)bVar12 * -2 + 1;
      bVar4 = *pbVar10;
      uVar1 = param_2 & 0xffffffffffffff00;
      param_2 = uVar1 | bVar4;
      if (bVar4 == 10) {
        pbVar11 = (byte *)(ulong)(uVar7 + iVar5);
      }
      else if (bVar4 == 0xd) {
        *(ulong *)(uVar8 - 0x10) = uVar3;
        param_2 = (long)((ulong)pbVar11 & 0xffffffff) / (long)iVar5 & 0xffffffff;
        pbVar11 = (byte *)(ulong)(uVar7 - (int)((long)((ulong)pbVar11 & 0xffffffff) % (long)iVar5));
        uVar3 = *(ulong *)(uVar8 - 0x10);
      }
      else {
        pbVar10 = pbVar11 + (ulong)bVar12 * -2 + 1;
        *pbVar11 = bVar4;
        param_2 = CONCAT71((int7)(uVar1 >> 8),7);
        pbVar11 = pbVar10 + (ulong)bVar12 * -2 + 1;
        *pbVar10 = 7;
      }
    }
    uVar7 = (int)uVar2 - 1;
    uVar2 = (ulong)uVar7;
    pbVar10 = pbVar9;
  } while (uVar7 != 0);
  return (ulong)pbVar11 & 0xffffffff;
}



int FUN_00400748(undefined8 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar2 = (uint)((ulong)param_1 >> 8) & 0xffff80;
  uVar1 = uVar2 * 0x100;
  param_2 = (int)param_1 - param_2;
  uVar2 = param_2 + uVar2 * -0x100;
  puVar4 = (undefined *)(ulong)(uVar1 + uVar2);
  puVar5 = (undefined *)(ulong)uVar1;
  for (uVar3 = (ulong)uVar2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return param_2;
}



// WARNING: Control flow encountered bad instruction data

void FUN_00400895(undefined8 param_1,ulong param_2,uint param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  uint uVar2;
  byte in_AL;
  undefined in_AH;
  undefined6 in_register_00000002;
  ushort uVar3;
  ulong unaff_RBX;
  ulong uVar4;
  undefined2 uVar5;
  long in_FS_OFFSET;
  
  uVar5 = (undefined2)(param_2 >> 0x10);
  bVar1 = *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL + CARRY1(bVar1,in_AL);
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  param_3 = param_3 | 0xfffc;
  while( true ) {
    uVar3 = (short)param_3 + 4;
    param_3 = param_3 & 0xffff0000 | (uint)uVar3;
    if (uVar3 == 0xc000) break;
    *(undefined2 *)(in_FS_OFFSET + (int)(((uint)unaff_RBX & 0xffff0000) + param_3)) =
         *(undefined2 *)(in_FS_OFFSET + (int)(CONCAT22(uVar5,0x4000) + param_3));
  }
  uVar4 = unaff_RBX & 0xffffffffffff0000 | 0xc000;
  uVar2 = *(uint *)(param_2 & 0xffffffff00000000 | (ulong)CONCAT22(uVar5,0x4000));
  func_0x299c0123(0xb80020,0x4000,param_3,
                  uVar2 & 0xffffff00 | (uint)(byte)((byte)uVar2 ^ *(byte *)(uVar4 - 0x7acdbdea)),
                  param_5,param_6,uVar4,
                  *(undefined8 *)((uVar4 - 0x77) + ((ulong)&stack0xfffffffffffffff8 & 0xffffffff)));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00401000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  
  _DAT_00443c74 = _DAT_00443c74 | 2;
  if (((byte)DAT_00440668 & 4) == 0) {
    param_3 = 0;
    syscall();
    syscall();
    param_2 = 6;
    syscall();
  }
  puVar4 = (ulong *)&DAT_00000086;
  FUN_00405211(0x86,param_2,param_3);
  lVar7 = 0x400000;
  uVar5 = 0x100000;
  puVar6 = puVar4;
LAB_00401086:
  if (puVar4[1] == 0) {
    return;
  }
  do {
    puVar3 = puVar4;
    if (*(int *)(puVar4 + 2) == 1) break;
    puVar1 = puVar4 + 4;
    puVar3 = puVar4 + 3;
    puVar4 = puVar4 + 3;
  } while (*puVar1 != 0);
  uVar2 = uVar5;
  if (uVar5 <= *puVar3) {
    uVar2 = *puVar3;
  }
  do {
    uVar5 = uVar2 + 0xfff & 0xfffffffffffff000;
    while( true ) {
      if ((puVar3[1] + *puVar3 & 0xfffffffffffff000) <= uVar5) {
        puVar4 = puVar3 + 3;
        goto LAB_00401086;
      }
      for (; (uVar2 = puVar6[1], uVar2 != 0 &&
             ((*(int *)(puVar6 + 2) == 1 || (*puVar6 + uVar2 < uVar5)))); puVar6 = puVar6 + 3) {
      }
      if ((*puVar6 <= uVar5) && (uVar2 = *puVar6 + uVar2, uVar5 < uVar2)) break;
      puVar4 = (ulong *)FUN_00401158(lVar7,3,param_2);
      *puVar4 = uVar5 | 3;
      uVar5 = uVar5 + 0x1000;
      lVar7 = lVar7 + 0x1000;
    }
  } while( true );
}



long FUN_00401158(ulong param_1,int param_2,ulong param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  
  bVar3 = 0x27;
  while( true ) {
    param_2 = param_2 + -1;
    uVar2 = (ulong)((uint)(param_1 >> (bVar3 & 0x3f)) & 0x1ff);
    if (param_2 == -1) break;
    puVar1 = (ulong *)(param_3 + uVar2 * 8);
    if (*puVar1 == 0) {
      uVar2 = *param_4;
      *param_4 = uVar2 - 0x1000;
      *puVar1 = uVar2 - 0x1000 | 3;
    }
    bVar3 = bVar3 - 9;
    param_3 = *puVar1 & 0x3fffffffff000;
  }
  return param_3 + uVar2 * 8;
}



void FUN_00401270(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  long lVar1;
  code *pcVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  int in_stack_00000000;
  
  DAT_00440668._0_1_ = 8;
  puVar5 = &DAT_00406018;
  for (lVar4 = 0x14; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = &LAB_0040126d;
    puVar5 = puVar5 + 1;
  }
  lVar4 = 0xffffffff;
  plVar6 = (long *)(&stack0x00000018 + (long)in_stack_00000000 * 8);
  do {
    if (lVar4 == 0) break;
    lVar4 = lVar4 + -1;
    lVar1 = *plVar6;
    plVar6 = plVar6 + 1;
  } while (lVar1 != 0);
  FUN_004012f0();
  _DAT_00443c74 = _DAT_00443c74 | 1;
  for (ppuVar3 = &PTR_FUN_00406008; ppuVar3 != (undefined **)&DAT_00406010;
      ppuVar3 = (code **)ppuVar3 + 1) {
    (*(code *)*ppuVar3)();
  }
  FUN_004014ce((long)in_stack_00000000,&stack0x00000008,
               &stack0x00000018 + (long)in_stack_00000000 * 8);
  FUN_004018ae();
  pcVar2 = DAT_00406080;
  DAT_00443aa0 = 3;
  DAT_00443ab0 = &DAT_00443ab8;
  DAT_00443aa8 = 0x10;
  DAT_00443ac8 = 1;
  DAT_00443ae0 = DAT_00443ac8;
  DAT_00443af8 = DAT_00443ac8;
  DAT_00443ab8 = (*DAT_00406080)();
  DAT_00443ad0 = (*pcVar2)();
  DAT_00443ae8 = (*pcVar2)();
  return;
}



void FUN_004012f0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte bVar9;
  byte bVar10;
  ulong extraout_RDX;
  ulong uVar11;
  byte **ppbVar12;
  byte **ppbVar13;
  byte *pbVar14;
  byte *pbVar15;
  long **pplVar16;
  long **pplVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  code **ppcVar20;
  long **unaff_R13;
  long *unaff_R15;
  byte bVar21;
  byte *apbStack96 [8];
  undefined8 uStack32;
  undefined8 uStack24;
  
  bVar21 = 0;
  uVar7 = rdtsc();
  DAT_00440004 = (undefined4)((ulong)uVar7 >> 0x20);
  DAT_00440000 = (undefined4)uVar7;
  pplVar16 = (long **)&DAT_00440008;
  uStack24 = 0;
  uStack32 = 0x16;
  apbStack96[7] = (byte *)0xffffffff80000007;
  apbStack96[6] = (byte *)0xffffffff80000001;
  apbStack96[5] = (byte *)0x7;
  apbStack96[4] = (byte *)0x2;
  ppbVar12 = apbStack96 + 3;
  apbStack96[3] = (byte *)0x1;
  uVar7 = 0;
  do {
    iVar6 = (int)uVar7;
    if (iVar6 == 0) {
      puVar1 = (undefined4 *)cpuid_basic_info(0);
    }
    else if (iVar6 == 1) {
      puVar1 = (undefined4 *)cpuid_Version_info(1);
    }
    else if (iVar6 == 2) {
      puVar1 = (undefined4 *)cpuid_cache_tlb_info(2);
    }
    else if (iVar6 == 3) {
      puVar1 = (undefined4 *)cpuid_serial_info(3);
    }
    else if (iVar6 == 4) {
      puVar1 = (undefined4 *)cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (iVar6 == 5) {
      puVar1 = (undefined4 *)cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (iVar6 == 6) {
      puVar1 = (undefined4 *)cpuid_Thermal_Power_Management_info(6);
    }
    else if (iVar6 == 7) {
      puVar1 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (iVar6 == 9) {
      puVar1 = (undefined4 *)cpuid_Direct_Cache_Access_info(9);
    }
    else if (iVar6 == 10) {
      puVar1 = (undefined4 *)cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (iVar6 == 0xb) {
      puVar1 = (undefined4 *)cpuid_Extended_Topology_info(0xb);
    }
    else if (iVar6 == 0xd) {
      puVar1 = (undefined4 *)cpuid_Processor_Extended_States_info(0xd);
    }
    else if (iVar6 == 0xf) {
      puVar1 = (undefined4 *)cpuid_Quality_of_Service_info(0xf);
    }
    else if (iVar6 == -0x7ffffffe) {
      puVar1 = (undefined4 *)cpuid_brand_part1_info(0x80000002);
    }
    else if (iVar6 == -0x7ffffffd) {
      puVar1 = (undefined4 *)cpuid_brand_part2_info(0x80000003);
    }
    else if (iVar6 == -0x7ffffffc) {
      puVar1 = (undefined4 *)cpuid_brand_part3_info(0x80000004);
    }
    else {
      puVar1 = (undefined4 *)cpuid(iVar6);
    }
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    *(undefined4 *)pplVar16 = *puVar1;
    *(undefined4 *)((long)pplVar16 + 4) = uVar2;
    *(undefined4 *)(pplVar16 + 1) = uVar4;
    *(undefined4 *)((long)pplVar16 + 0xc) = uVar3;
    ppbVar13 = ppbVar12;
    do {
      pplVar16 = pplVar16 + 2;
      uVar7 = *ppbVar13;
      ppbVar12 = ppbVar13 + 1;
      if ((int)uVar7 == 0) {
        uVar7 = ppbVar13[1];
        uVar11 = 0x1100;
        pbVar15 = &DAT_004058f0;
        do {
          pbVar14 = pbVar15;
          uVar11 = uVar11 | *pbVar14;
          bVar10 = pbVar14[1];
          do {
            pplVar17 = pplVar16;
            pplVar16 = pplVar17 + 1;
            *pplVar17 = (long *)(&LAB_00404f07 + bVar10);
            bVar9 = (char)uVar11 - 1;
            uVar8 = uVar11 & 0xffffffffffffff00;
            uVar11 = uVar8 | bVar9;
          } while (bVar9 != 0);
          bVar10 = (char)(uVar8 >> 8) - 1;
          uVar11 = (ulong)bVar10 << 8;
          pbVar15 = pbVar14 + 2;
        } while (bVar10 != 0);
        pbVar14 = pbVar14 + 8;
        pplVar17 = pplVar17 + 2;
        *pplVar16 = unaff_R15;
        ppbVar13[1] = (byte *)0x401362;
        FUN_0040161f();
        ppbVar13[1] = (byte *)0x401367;
        FUN_0040189d();
        pplVar16 = pplVar17 + (ulong)bVar21 * -2 + 1;
        *pplVar17 = (long *)0xffffffffffffffff;
        *pplVar16 = (long *)0xffffffffffffffff;
        pplVar17 = pplVar16 + (ulong)bVar21 * -2 + 1 + (ulong)bVar21 * -2 + 1;
        pplVar16[(ulong)bVar21 * -2 + 1] = (long *)&LAB_0040517e;
        ppbVar13[1] = (byte *)0x20;
        ppbVar13[1] = (byte *)0x40138a;
        FUN_0040186f();
        ppbVar13[1] = (byte *)0x20;
        ppbVar13[1] = (byte *)0x40139e;
        FUN_0040186f();
        *pplVar17 = *unaff_R13;
        pplVar16 = pplVar17 + (ulong)bVar21 * -2 + 1 + (ulong)bVar21 * -2 + 1;
        pplVar17[(ulong)bVar21 * -2 + 1] = (long *)&LAB_004051e0;
        ppbVar13[1] = (byte *)uVar7;
        *ppbVar13 = pbVar14;
        if ((*(byte *)pplVar16 & 8) == 0) {
          if ((*(byte *)pplVar16 & 0x20) == 0) {
            if ((*(byte *)pplVar16 & 4) == 0) {
              if (*unaff_R15 == 0) {
                ppbVar13[-1] = (byte *)0x2a;
                ppbVar13[-2] = (byte *)0x10;
                pbVar15 = &DAT_004059e1;
              }
              else {
                ppbVar13[-1] = (byte *)0x0;
                ppbVar13[-2] = (byte *)0x1;
                pbVar15 = &DAT_004059b6;
              }
            }
            else {
              ppbVar13[-1] = (byte *)0x22;
              ppbVar13[-2] = (byte *)0x4;
              pbVar15 = &DAT_00405a0d;
            }
          }
          else {
            ppbVar13[-1] = (byte *)0x30;
            ppbVar13[-2] = (byte *)0x20;
            pbVar15 = &DAT_00405989;
          }
        }
        else {
          ppbVar13[-1] = (byte *)0x45;
          ppbVar13[-2] = (byte *)0x8;
          pbVar15 = &DAT_00405a52;
        }
        *pplVar16 = (long *)ppbVar13[-2];
        pplVar16[(ulong)bVar21 * -2 + 1] = (long *)(&DAT_00404df0 + (long)ppbVar13[-1]);
        ppbVar13[-1] = (byte *)(pplVar16 + (ulong)bVar21 * -2 + 1 + (ulong)bVar21 * -2 + 1);
        uVar11 = extraout_RDX;
        for (puVar18 = &DAT_00440698; puVar18 < &DAT_004407a0;
            puVar18 = puVar18 + (ulong)bVar21 * -2 + 1) {
          bVar10 = 0;
          uVar11 = 0;
          pbVar14 = pbVar15;
          do {
            pbVar15 = pbVar14 + (ulong)bVar21 * -2 + 1;
            bVar9 = *pbVar14;
            bVar5 = bVar10 & 0x3f;
            bVar10 = bVar10 + 7;
            uVar11 = uVar11 | (ulong)(bVar9 & 0x7f) << bVar5;
            pbVar14 = pbVar15;
          } while ((char)bVar9 < '\0');
          if ((bVar9 & 0x40) != 0) {
            uVar11 = uVar11 | -1 << (bVar10 & 0x3f);
          }
          uVar8 = uVar11;
          if (*puVar18 != 0) {
            uVar8 = *puVar18;
          }
          *puVar18 = uVar8;
        }
        puVar19 = (undefined8 *)ppbVar13[-1];
        ppbVar13[-3] = (byte *)0x401463;
        (*DAT_00406088)(puVar19,*ppbVar13,uVar11,&DAT_00443c40);
        ppbVar13[1] = (byte *)0x1;
        DAT_0044200c = ppbVar13[1];
        DAT_00442004 = DAT_00440798;
        DAT_00442018 = &DAT_00441000;
        DAT_00442020 = 0x1000;
        DAT_00442030 = (code *)&LAB_00402250;
        if (((byte)DAT_00440668 & 2) == 0) {
          DAT_00442030 = FUN_004021be;
        }
        DAT_00442038 = &DAT_00442000;
        ppcVar20 = (code **)(puVar19 + (ulong)bVar21 * -2 + 1);
        *puVar19 = &LAB_00403fed;
        ppbVar13[1] = (byte *)0x4014be;
        FUN_004015cb();
        *ppcVar20 = FUN_00403ae8;
        ppcVar20[(ulong)bVar21 * -2 + 1] = FUN_004043d8;
        return;
      }
      ppbVar13 = ppbVar13 + 1;
    } while ((byte)DAT_00440008 < (byte)uVar7);
  } while( true );
}



undefined8 FUN_004014ce(void)

{
  FUN_00401f47("hello world");
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong FUN_004014e0(void)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  
  puVar3 = DAT_00442038;
  if ((((byte)DAT_00440668 & 4) != 0) ||
     (iVar6 = FUN_00401674(*(undefined4 *)(DAT_00442038 + 0xc)), iVar6 != 0)) {
    *puVar3 = 1;
  }
  if (DAT_00442050 == (undefined *)0x0) {
    DAT_00442050 = &DAT_00442058;
    _DAT_00442048 = 8;
    FUN_00404540(FUN_004020ec,0,0);
  }
  uVar4 = DAT_00442040;
  uVar7 = DAT_00442040 - 1;
  do {
    if (uVar7 == 0xffffffffffffffff) {
      uVar2 = DAT_00442040 + 1;
      if ((uVar2 < _DAT_00442048) ||
         (cVar5 = FUN_0040466a(&DAT_00442050,&DAT_00442048,8,1), cVar5 != '\0')) {
        *(undefined **)(DAT_00442050 + uVar4 * 8) = puVar3;
        uVar7 = uVar4;
        DAT_00442040 = uVar2;
      }
      return uVar7 & 0xffffffff;
    }
    lVar1 = uVar7 * 8;
    uVar7 = uVar7 - 1;
  } while (*(long *)(DAT_00442050 + uVar7 * 8 + 8) != 0);
  *(undefined **)(DAT_00442050 + lVar1) = puVar3;
  return 0;
}



void FUN_004015cb(void)

{
  FUN_00404491();
  return;
}



void FUN_0040161f(void)

{
  code *pcVar1;
  
  pcVar1 = DAT_00406080;
  DAT_00443aa0 = 3;
  DAT_00443ab0 = &DAT_00443ab8;
  DAT_00443aa8 = 0x10;
  DAT_00443ac8 = 1;
  DAT_00443ae0 = DAT_00443ac8;
  DAT_00443af8 = DAT_00443ac8;
  DAT_00443ab8 = (*DAT_00406080)();
  DAT_00443ad0 = (*pcVar1)();
  DAT_00443ae8 = (*pcVar1)();
  return;
}



bool FUN_00401674(undefined8 param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined local_108 [24];
  uint local_f0;
  
  uVar1 = DAT_00443c70;
  if ((DAT_00440668 & 4) == 0) {
    iVar3 = FUN_00401711(param_1,local_108);
    if (iVar3 == -1) {
      DAT_00443c70 = uVar1;
      return false;
    }
    bVar4 = (local_f0 & 0xf000) == 0x2000;
  }
  else {
    cVar2 = FUN_00404c6c(param_1,1);
    if (cVar2 == '\0') {
      return false;
    }
    iVar3 = FUN_00401eb0(*(undefined8 *)((long)(int)param_1 * 0x18 + DAT_00443ab0));
    bVar4 = iVar3 == 2;
  }
  return bVar4;
}



ulong FUN_00401711(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00404db0();
  if ((int)uVar1 != -1) {
    FUN_0040173e(param_2);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



void FUN_0040173e(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if ((DAT_00440668 & 8) == 0) {
    if ((DAT_00440668 & 0x20) == 0) {
      if ((DAT_00440668 & 0x10) == 0) {
        return;
      }
      iVar2 = *(int *)((long)param_1 + 0x1c);
      iVar3 = *(int *)param_1;
      iVar1 = *(int *)(param_1 + 0xc);
      lVar7 = param_1[10];
      lVar11 = param_1[0xb];
      lVar8 = param_1[6];
      *param_1 = (long)*(int *)((long)param_1 + 4);
      lVar5 = param_1[7];
      lVar6 = param_1[8];
      lVar4 = param_1[9];
      lVar10 = param_1[4];
      lVar9 = param_1[5];
      *(int *)(param_1 + 3) = iVar3;
      param_1[2] = (ulong)*(uint *)(param_1 + 2);
      *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)((long)param_1 + 0x14);
      param_1[5] = (long)iVar2;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x10);
      lVar7 = param_1[0xe];
      lVar11 = param_1[0xf];
      lVar10 = param_1[6];
      lVar9 = param_1[7];
      lVar8 = param_1[8];
      lVar5 = param_1[9];
      lVar6 = param_1[10];
      lVar4 = param_1[0xb];
      *(uint *)(param_1 + 3) = (uint)*(ushort *)(param_1 + 3);
    }
    param_1[6] = lVar7;
    param_1[7] = (long)iVar1;
    param_1[8] = lVar11;
  }
  else {
    lVar7 = param_1[2];
    lVar9 = param_1[5];
    param_1[5] = (long)*(int *)(param_1 + 3);
    lVar10 = param_1[4];
    lVar8 = param_1[6];
    lVar5 = param_1[7];
    lVar6 = param_1[8];
    lVar4 = param_1[9];
    *param_1 = (long)*(int *)param_1;
    param_1[2] = (ulong)*(ushort *)((long)param_1 + 6);
    *(uint *)(param_1 + 3) = (uint)*(ushort *)((long)param_1 + 4);
    *(long *)((long)param_1 + 0x1c) = lVar7;
    param_1[6] = param_1[0xc];
    param_1[7] = (long)*(int *)(param_1 + 0xe);
    param_1[8] = param_1[0xd];
  }
  param_1[9] = lVar10;
  param_1[10] = lVar9;
  param_1[0xb] = lVar8;
  param_1[0xc] = lVar5;
  param_1[0xd] = lVar6;
  param_1[0xe] = lVar4;
  return;
}



undefined8 FUN_0040186f(long *param_1,undefined8 *param_2,long param_3,int param_4)

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
                            (ulong)(byte)((DAT_00440038._5_1_ & 2) != 0 | !in_ZF << 1)) + param_3;
  return *puVar1;
}



void FUN_0040189d(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = 0;
  while( true ) {
    pbVar3 = param_2 + 1;
    uVar2 = uVar2 & 0xffffff00 | (uint)*param_2;
    param_2 = param_2 + 2;
    bVar1 = *pbVar3;
    pbVar3 = param_1;
    if (uVar2 == 0) break;
    do {
      param_1 = pbVar3 + 1;
      *pbVar3 = bVar1;
      uVar2 = uVar2 - 1;
      pbVar3 = param_1;
    } while (uVar2 != 0);
  }
  return;
}



undefined8 FUN_004018ae(undefined4 param_1)

{
  FUN_004045d5(0);
  FUN_00405211(param_1);
  DAT_00443c70 = DAT_004406a8;
  return 0xffffffffffffffff;
}



undefined8 FUN_004018c7(void)

{
  DAT_00443c70 = DAT_004406a8;
  return 0xffffffffffffffff;
}



undefined8 FUN_004018d7(void)

{
  DAT_00443c70 = DAT_004406c0;
  return 0xffffffffffffffff;
}



undefined8 FUN_004018e7(void)

{
  DAT_00443c70 = DAT_004406f8;
  return 0xffffffffffffffff;
}



undefined8 FUN_004018f7(void)

{
  DAT_00443c70 = DAT_00440700;
  return 0xffffffffffffffff;
}



undefined8 FUN_00401907(void)

{
  DAT_00443c70 = DAT_00440708;
  return 0xffffffffffffffff;
}



ulong FUN_00401dba(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint local_4c;
  undefined local_48 [40];
  
  for (; (param_3 != 0 && (*(long *)(param_2 + 8) == 0)); param_2 = param_2 + 0x10) {
    param_3 = param_3 + -1;
  }
  FUN_00401e5c(param_4,local_48);
  iVar1 = (*DAT_004060a8)();
  if (iVar1 == 0) {
    uVar3 = FUN_004052d6();
  }
  else {
    if (local_4c == 0) {
      for (lVar2 = 0; param_3 != lVar2; lVar2 = lVar2 + 1) {
      }
    }
    (*DAT_00406040)();
    uVar3 = (ulong)local_4c;
  }
  return uVar3;
}



undefined4 * FUN_00401e5c(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  
  if (param_1 == -1) {
    param_2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = param_2;
    for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(long *)(param_2 + 4) = param_1;
  }
  return param_2;
}



void FUN_00401e81(void)

{
  (*DAT_00406018)();
  return;
}



void FUN_00401e9a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_00406020)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00401eb0(void)

{
  (*DAT_00406070)();
  return;
}



void FUN_00401ec9(void)

{
  (*DAT_00406078)();
  return;
}



void FUN_00401edf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_00406090)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



void FUN_00401ef5(void)

{
  (*DAT_004060a0)();
  return;
}



int FUN_00401f47(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_00442038;
  iVar2 = FUN_00401fe7(param_1,DAT_00442038);
  if ((iVar2 != -1) && (iVar3 = FUN_00401f82(10,uVar1), iVar3 != -1)) {
    return iVar2 + 1;
  }
  return -1;
}



ulong FUN_00401f82(uint param_1,char *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_1 == 0xffffffff) {
LAB_00401fdd:
    uVar2 = FUN_004020ab(param_2);
  }
  else {
    *(char *)(*(long *)(param_2 + 0x18) + (ulong)*(uint *)(param_2 + 0x14)) = (char)param_1;
    uVar1 = *(int *)(param_2 + 0x14) + 1U & *(int *)(param_2 + 0x20) - 1U;
    *(uint *)(param_2 + 0x14) = uVar1;
    if (((uVar1 == *(uint *)(param_2 + 0x10)) || (*param_2 == '\x02')) ||
       ((*param_2 == '\x01' && ((char)param_1 == '\n')))) {
      if (*(code **)(param_2 + 0x30) != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00401fd1. Too many branches
                    // WARNING: Treating indirect jump as call
        uVar2 = (**(code **)(param_2 + 0x30))(param_2);
        return uVar2;
      }
      if (uVar1 == *(uint *)(param_2 + 0x10)) goto LAB_00401fdd;
    }
    uVar2 = (ulong)(param_1 & 0xff);
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00401fe7(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    while( true ) {
      cVar1 = *param_1;
      if (cVar1 == '\0') {
        return iVar4 + 1;
      }
      param_1 = param_1 + 1;
      *(char *)(*(long *)(param_2 + 0x18) + (ulong)*(uint *)(param_2 + 0x14)) = cVar1;
      uVar2 = *(int *)(param_2 + 0x14) + 1U & *(int *)(param_2 + 0x20) - 1U;
      *(uint *)(param_2 + 0x14) = uVar2;
      if (((uVar2 == *(uint *)(param_2 + 0x10)) || (*param_2 == '\x02')) ||
         ((*param_2 == '\x01' && (cVar1 == '\n')))) break;
LAB_00402093:
      iVar4 = iVar4 + 1;
    }
    if (*(code **)(param_2 + 0x30) == (code *)0x0) {
      if (uVar2 != *(uint *)(param_2 + 0x10)) goto LAB_00402093;
      iVar3 = FUN_004020ab(param_2);
    }
    else {
      iVar3 = (**(code **)(param_2 + 0x30))(param_2);
    }
    if (iVar3 != -1) goto LAB_00402093;
    iVar3 = FUN_004020de(param_2);
    if (iVar3 != _DAT_004406b8) {
      iVar4 = FUN_004020d4(param_2);
      if (iVar4 != 0) {
        DAT_00443c70 = (undefined4)DAT_00440710;
        *(undefined4 *)(param_2 + 8) = DAT_00443c70;
      }
      return -1;
    }
  } while( true );
}



void FUN_004020ab(undefined8 param_1)

{
  FUN_004020b3(param_1,0xffffffff);
  return;
}



undefined8 FUN_004020b3(long param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    param_2 = -1;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) < 1) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 8) = iVar1;
  if (0 < param_2) {
    DAT_00443c70 = param_2;
  }
  return 0xffffffffffffffff;
}



bool FUN_004020d4(long param_1)

{
  return *(int *)(param_1 + 8) == -1;
}



undefined4 FUN_004020de(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (-1 < *(int *)(param_1 + 8)) {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined  [16] FUN_004020ec(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uStack40;
  
  if (param_1 == 0) {
    uVar2 = 0;
    lVar3 = DAT_00442040;
    while (lVar3 = lVar3 + -1, lVar3 != -1) {
      if (*(long *)(DAT_00442050 + lVar3 * 8) != 0) {
        iVar1 = FUN_004020ec();
        if (iVar1 == -1) goto LAB_0040212b;
        uVar2 = uVar2 + iVar1;
      }
    }
  }
  else {
    uVar2 = 0;
    if ((*(int *)(param_1 + 0xc) != -1) && ((_DAT_00440798 & *(uint *)(param_1 + 4)) != 0)) {
      uVar2 = *(uint *)(param_1 + 8);
      if (uVar2 == 0) {
        while (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x14)) {
          iVar1 = FUN_004021be();
          if (iVar1 == -1) goto LAB_0040212b;
          uVar2 = uVar2 + iVar1;
        }
      }
      else if (uVar2 == 0xffffffff) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_004020b3(param_1,uVar2);
      }
    }
  }
LAB_0040218c:
  return CONCAT88(uStack40,(ulong)uVar2);
LAB_0040212b:
  uVar2 = 0xffffffff;
  goto LAB_0040218c;
}



ulong FUN_004021be(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar4 = *(uint *)(param_1 + 0x14);
  if (uVar4 <= uVar1) {
    uVar4 = *(uint *)(param_1 + 0x20);
  }
  lVar2 = FUN_00404c87(*(undefined4 *)(param_1 + 0xc),(ulong)uVar1 + *(long *)(param_1 + 0x18),
                       uVar4 - uVar1);
  if (lVar2 == -1) {
    uVar3 = FUN_0040228b(param_1);
  }
  else {
    *(uint *)(param_1 + 0x10) =
         (int)lVar2 + *(int *)(param_1 + 0x10) & *(int *)(param_1 + 0x20) - 1U;
    uVar3 = (ulong)(uVar4 - uVar1);
  }
  return uVar3;
}



void FUN_0040228b(undefined8 param_1)

{
  FUN_004020b3(param_1,DAT_00443c70);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00402296(void)

{
                    // WARNING: Could not recover jumptable at 0x00402296. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_00440678)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0040229c(void)

{
                    // WARNING: Could not recover jumptable at 0x0040229c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_00440680)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004022a2(void)

{
                    // WARNING: Could not recover jumptable at 0x004022a2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_00440688)();
  return;
}



void FUN_004022a8(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar3 = (uint)param_2;
  if ((param_2 & 0xf) != 0) {
    uVar3 = -(uVar3 + 0x10);
  }
  lVar1 = param_2 + (uVar3 & 0xf);
  uVar4 = param_3 - (ulong)(uVar3 & 0xf);
  *(long *)(param_1 + 0x28) = lVar1;
  *(ulong *)(param_1 + 0x10) = uVar4;
  *(ulong *)(lVar1 + 8) = uVar4 | 1;
  uVar2 = DAT_00442480;
  *(undefined8 *)(param_2 + 8 + param_3) = 0x50;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  return;
}



ulong FUN_004022ef(long param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  byte bVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  
  uVar18 = 0;
  puVar2 = *(ulong **)(param_1 + 0x388);
  if (((puVar2 == (ulong *)0x0) || ((*(uint *)(puVar2 + 3) & 1) == 0)) ||
     (uVar17 = *(uint *)(puVar2 + 3) & 8, bVar16 = (byte)uVar17, uVar17 != 0)) goto LAB_00402591;
  uVar3 = *puVar2;
  uVar17 = (uint)uVar3;
  if ((uVar3 & 0xf) != 0) {
    uVar17 = -(uVar17 + 0x10);
  }
  lVar1 = uVar3 + (uVar17 & 0xf);
  uVar18 = 0;
  uVar4 = *(ulong *)(lVar1 + 8);
  if (((uint)uVar4 & 3) != 1) goto LAB_00402591;
  uVar18 = puVar2[1];
  uVar19 = uVar4 & 0xfffffffffffffff8;
  if ((uVar3 - 0x50) + uVar18 <= lVar1 + uVar19) {
    uVar5 = puVar2[2];
    if (*(long *)(param_1 + 0x20) == lVar1) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      lVar9 = *(long *)(lVar1 + 0x18);
      lVar12 = *(long *)(lVar1 + 0x30);
      if (lVar9 == lVar1) {
        puVar7 = (undefined8 *)(lVar1 + 0x28);
        lVar14 = *(long *)(lVar9 + 0x28);
        if (*(long *)(lVar9 + 0x28) == 0) {
          lVar9 = *(long *)(lVar1 + 0x20);
          if (lVar9 == 0) goto LAB_004023fb;
          puVar7 = (undefined8 *)(lVar1 + 0x20);
          lVar14 = lVar9;
        }
        do {
          do {
            lVar9 = lVar14;
            puVar11 = puVar7;
            puVar7 = (undefined8 *)(lVar9 + 0x28);
            lVar14 = *(long *)(lVar9 + 0x28);
          } while (*(long *)(lVar9 + 0x28) != 0);
          puVar7 = (undefined8 *)(lVar9 + 0x20);
          lVar14 = *(long *)(lVar9 + 0x20);
        } while (*(long *)(lVar9 + 0x20) != 0);
        *puVar11 = 0;
      }
      else {
        lVar14 = *(long *)(lVar1 + 0x10);
        *(long *)(lVar14 + 0x18) = lVar9;
        *(long *)(lVar9 + 0x10) = lVar14;
      }
LAB_004023fb:
      if (lVar12 != 0) {
        uVar17 = *(uint *)(lVar1 + 0x38);
        lVar14 = param_1 + (ulong)uVar17 * 8;
        if (*(long *)(lVar14 + 600) == lVar1) {
          *(long *)(lVar14 + 600) = lVar9;
          if (lVar9 == 0) {
            bVar6 = (byte)uVar17 & 0x1f;
            *(uint *)(param_1 + 4) =
                 *(uint *)(param_1 + 4) & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
          }
          else {
LAB_0040241f:
            lVar14 = *(long *)(lVar1 + 0x20);
            *(long *)(lVar9 + 0x30) = lVar12;
            if (lVar14 != 0) {
              *(long *)(lVar9 + 0x20) = lVar14;
              *(long *)(lVar14 + 0x30) = lVar9;
            }
            lVar12 = *(long *)(lVar1 + 0x28);
            if (lVar12 != 0) {
              *(long *)(lVar9 + 0x28) = lVar12;
              *(long *)(lVar12 + 0x30) = lVar9;
            }
          }
        }
        else {
          if (*(long *)(lVar12 + 0x20) == lVar1) {
            *(long *)(lVar12 + 0x20) = lVar9;
          }
          else {
            *(long *)(lVar12 + 0x28) = lVar9;
          }
          if (lVar9 != 0) goto LAB_0040241f;
        }
      }
    }
    iVar8 = FUN_0040452c(uVar3,uVar18);
    if (iVar8 == 0) {
      *(long *)(param_1 + 0x358) = *(long *)(param_1 + 0x358) - uVar18;
      *(ulong *)(param_1 + 0x388) = uVar5;
      goto LAB_00402591;
    }
    uVar13 = (uint)(uVar19 >> 8);
    uVar17 = (uint)(uVar4 >> 8);
    if ((uVar13 != 0) && (uVar17 = 0x1f, uVar13 < 0x10000)) {
      uVar17 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> uVar17 == 0; uVar17 = uVar17 - 1) {
        }
      }
      uVar17 = ((uint)(uVar19 >> (0x26U - (char)(uVar17 ^ 0x1f) & 0x3f)) & 1) +
               (0x1f - (uVar17 ^ 0x1f)) * 2;
    }
    uVar13 = *(uint *)(param_1 + 4);
    uVar15 = 1 << ((byte)uVar17 & 0x1f);
    *(uint *)(lVar1 + 0x38) = uVar17;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    uVar18 = (ulong)uVar17;
    if ((uVar13 & uVar15) == 0) {
      *(uint *)(param_1 + 4) = uVar13 | uVar15;
      *(long *)(param_1 + 600 + uVar18 * 8) = lVar1;
      *(ulong *)(lVar1 + 0x30) = param_1 + 600 + uVar18 * 8;
    }
    else {
      if (uVar17 != 0x1f) {
        bVar16 = 0x39 - (char)(uVar17 >> 1);
      }
      lVar12 = uVar19 << (bVar16 & 0x3f);
      lVar9 = *(long *)(param_1 + 600 + uVar18 * 8);
      do {
        lVar14 = lVar9;
        if ((*(ulong *)(lVar14 + 8) & 0xfffffffffffffff8) == uVar19) {
          lVar9 = *(long *)(lVar14 + 0x10);
          *(long *)(lVar9 + 0x18) = lVar1;
          *(long *)(lVar14 + 0x10) = lVar1;
          *(long *)(lVar1 + 0x10) = lVar9;
          *(long *)(lVar1 + 0x18) = lVar14;
          *(undefined8 *)(lVar1 + 0x30) = 0;
          goto LAB_0040258e;
        }
        lVar10 = 4 - (lVar12 >> 0x3f);
        lVar9 = *(long *)(lVar14 + lVar10 * 8);
        lVar12 = lVar12 * 2;
      } while (lVar9 != 0);
      *(long *)(lVar14 + lVar10 * 8) = lVar1;
      *(long *)(lVar1 + 0x30) = lVar14;
    }
    *(long *)(lVar1 + 0x18) = lVar1;
    *(long *)(lVar1 + 0x10) = lVar1;
  }
LAB_0040258e:
  uVar18 = 0;
LAB_00402591:
  *(undefined8 *)(param_1 + 0x38) = 0x80;
  return uVar18;
}



void FUN_004026e8(uint *param_1,ulong *param_2,ulong param_3)

{
  uint *puVar1;
  ulong *puVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  ulong *puVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong *puVar17;
  
  puVar4 = param_2 + 1;
  puVar12 = (ulong *)((long)param_2 + param_3);
  if ((*puVar4 & 1) == 0) {
    uVar15 = *param_2;
    param_2 = (ulong *)((long)param_2 - uVar15);
    if ((*puVar4 & 3) == 0) {
      lVar8 = uVar15 + 0x20 + param_3;
      iVar3 = FUN_0040452c(param_2,lVar8);
      if (iVar3 != 0) {
        return;
      }
      *(long *)(param_1 + 0xd6) = *(long *)(param_1 + 0xd6) - lVar8;
      return;
    }
    param_3 = param_3 + uVar15;
    if (*(ulong **)(param_1 + 8) == param_2) {
      uVar15 = puVar12[1];
      if (((uint)uVar15 & 3) == 3) {
        *(ulong *)(param_1 + 2) = param_3;
        puVar12[1] = uVar15 & 0xfffffffffffffffe;
        param_2[1] = param_3 | 1;
        *puVar12 = param_3;
        return;
      }
    }
    else {
      puVar4 = (ulong *)param_2[3];
      if (uVar15 < 0x100) {
        puVar5 = (ulong *)param_2[2];
        if (puVar5 == puVar4) {
          bVar7 = (byte)(uVar15 >> 3) & 0x1f;
          *param_1 = *param_1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
        }
        else {
          puVar5[3] = (ulong)puVar4;
          puVar4[2] = (ulong)puVar5;
        }
      }
      else {
        uVar15 = param_2[6];
        if (param_2 == puVar4) {
          puVar5 = (ulong *)param_2[5];
          puVar2 = param_2 + 5;
          if ((ulong *)param_2[5] == (ulong *)0x0) {
            puVar4 = (ulong *)param_2[4];
            if (puVar4 == (ulong *)0x0) goto LAB_004027cf;
            puVar5 = puVar4;
            puVar2 = param_2 + 4;
          }
          do {
            do {
              puVar16 = puVar2;
              puVar4 = puVar5;
              puVar5 = (ulong *)puVar4[5];
              puVar2 = puVar4 + 5;
            } while ((ulong *)puVar4[5] != (ulong *)0x0);
            puVar5 = (ulong *)puVar4[4];
            puVar2 = puVar4 + 4;
          } while ((ulong *)puVar4[4] != (ulong *)0x0);
          *puVar16 = 0;
        }
        else {
          uVar13 = param_2[2];
          *(ulong **)(uVar13 + 0x18) = puVar4;
          puVar4[2] = uVar13;
        }
LAB_004027cf:
        if (uVar15 != 0) {
          uVar10 = *(uint *)(param_2 + 7);
          if (*(ulong **)(param_1 + (ulong)uVar10 * 2 + 0x96) == param_2) {
            *(ulong **)(param_1 + (ulong)uVar10 * 2 + 0x96) = puVar4;
            if (puVar4 == (ulong *)0x0) {
              bVar7 = (byte)uVar10 & 0x1f;
              param_1[1] = param_1[1] & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
            }
            else {
LAB_004027f8:
              uVar13 = param_2[4];
              puVar4[6] = uVar15;
              if (uVar13 != 0) {
                puVar4[4] = uVar13;
                *(ulong **)(uVar13 + 0x30) = puVar4;
              }
              uVar15 = param_2[5];
              if (uVar15 != 0) {
                puVar4[5] = uVar15;
                *(ulong **)(uVar15 + 0x30) = puVar4;
              }
            }
          }
          else {
            if (*(ulong **)(uVar15 + 0x20) == param_2) {
              *(ulong **)(uVar15 + 0x20) = puVar4;
            }
            else {
              *(ulong **)(uVar15 + 0x28) = puVar4;
            }
            if (puVar4 != (ulong *)0x0) goto LAB_004027f8;
          }
        }
      }
    }
  }
  uVar15 = puVar12[1];
  if ((uVar15 & 2) != 0) {
    puVar12[1] = uVar15 & 0xfffffffffffffffe;
    param_2[1] = param_3 | 1;
    *(ulong *)((long)param_2 + param_3) = param_3;
    goto LAB_00402a21;
  }
  puVar4 = *(ulong **)(param_1 + 8);
  if (*(ulong **)(param_1 + 10) == puVar12) {
    lVar8 = *(long *)(param_1 + 4);
    *(ulong **)(param_1 + 10) = param_2;
    *(ulong *)(param_1 + 4) = param_3 + lVar8;
    param_2[1] = param_3 + lVar8 | 1;
    if (param_2 != puVar4) {
      return;
    }
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    return;
  }
  if (puVar12 == puVar4) {
    param_3 = param_3 + *(long *)(param_1 + 2);
    *(ulong **)(param_1 + 8) = param_2;
    *(ulong *)(param_1 + 2) = param_3;
    param_2[1] = param_3 | 1;
    *(ulong *)((long)param_2 + param_3) = param_3;
    return;
  }
  puVar5 = (ulong *)puVar12[3];
  param_3 = param_3 + (uVar15 & 0xfffffffffffffff8);
  if ((uVar15 & 0xfffffffffffffff8) < 0xf9) {
    puVar12 = (ulong *)puVar12[2];
    if (puVar12 == puVar5) {
      bVar7 = (byte)(uVar15 >> 3) & 0x1f;
      *param_1 = *param_1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
    }
    else {
      puVar12[3] = (ulong)puVar5;
      puVar5[2] = (ulong)puVar12;
    }
  }
  else {
    uVar15 = puVar12[6];
    if (puVar12 == puVar5) {
      puVar2 = (ulong *)puVar12[5];
      puVar16 = puVar12 + 5;
      if ((ulong *)puVar12[5] == (ulong *)0x0) {
        puVar5 = (ulong *)puVar12[4];
        if (puVar5 == (ulong *)0x0) goto LAB_0040297d;
        puVar2 = puVar5;
        puVar16 = puVar12 + 4;
      }
      do {
        do {
          puVar17 = puVar16;
          puVar5 = puVar2;
          puVar2 = (ulong *)puVar5[5];
          puVar16 = puVar5 + 5;
        } while ((ulong *)puVar5[5] != (ulong *)0x0);
        puVar2 = (ulong *)puVar5[4];
        puVar16 = puVar5 + 4;
      } while ((ulong *)puVar5[4] != (ulong *)0x0);
      *puVar17 = 0;
    }
    else {
      uVar13 = puVar12[2];
      *(ulong **)(uVar13 + 0x18) = puVar5;
      puVar5[2] = uVar13;
    }
LAB_0040297d:
    if (uVar15 != 0) {
      uVar10 = *(uint *)(puVar12 + 7);
      if (*(ulong **)(param_1 + (ulong)uVar10 * 2 + 0x96) == puVar12) {
        *(ulong **)(param_1 + (ulong)uVar10 * 2 + 0x96) = puVar5;
        if (puVar5 == (ulong *)0x0) {
          bVar7 = (byte)uVar10 & 0x1f;
          param_1[1] = param_1[1] & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
        }
        else {
LAB_004029a2:
          uVar13 = puVar12[4];
          puVar5[6] = uVar15;
          if (uVar13 != 0) {
            puVar5[4] = uVar13;
            *(ulong **)(uVar13 + 0x30) = puVar5;
          }
          uVar15 = puVar12[5];
          if (uVar15 != 0) {
            puVar5[5] = uVar15;
            *(ulong **)(uVar15 + 0x30) = puVar5;
          }
        }
      }
      else {
        if (*(ulong **)(uVar15 + 0x20) == puVar12) {
          *(ulong **)(uVar15 + 0x20) = puVar5;
        }
        else {
          *(ulong **)(uVar15 + 0x28) = puVar5;
        }
        if (puVar5 != (ulong *)0x0) goto LAB_004029a2;
      }
    }
  }
  param_2[1] = param_3 | 1;
  *(ulong *)((long)param_2 + param_3) = param_3;
  if (param_2 == puVar4) {
    *(ulong *)(param_1 + 2) = param_3;
    return;
  }
LAB_00402a21:
  if (param_3 < 0x100) {
    uVar10 = 1 << ((byte)(param_3 >> 3) & 0x1f);
    puVar1 = param_1 + (ulong)(uint)((int)(param_3 >> 3) * 2) * 2 + 0x12;
    if ((*param_1 & uVar10) == 0) {
      *param_1 = *param_1 | uVar10;
      puVar9 = puVar1;
    }
    else {
      puVar9 = *(uint **)(puVar1 + 4);
    }
    *(ulong **)(puVar1 + 4) = param_2;
    *(ulong **)(puVar9 + 6) = param_2;
    param_2[2] = (ulong)puVar9;
    param_2[3] = (ulong)puVar1;
  }
  else {
    uVar11 = (uint)(param_3 >> 8);
    uVar10 = uVar11;
    if ((uVar11 != 0) && (uVar10 = 0x1f, uVar11 < 0x10000)) {
      uVar10 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> uVar10 == 0; uVar10 = uVar10 - 1) {
        }
      }
      uVar10 = ((uint)(param_3 >> (0x26U - (char)(uVar10 ^ 0x1f) & 0x3f)) & 1) +
               (0x1f - (uVar10 ^ 0x1f)) * 2;
    }
    uVar11 = param_1[1];
    uVar14 = 1 << ((byte)uVar10 & 0x1f);
    *(uint *)(param_2 + 7) = uVar10;
    param_2[5] = 0;
    param_2[4] = 0;
    uVar15 = (ulong)uVar10;
    if ((uVar11 & uVar14) == 0) {
      param_1[1] = uVar11 | uVar14;
      *(ulong **)(param_1 + uVar15 * 2 + 0x96) = param_2;
      param_2[6] = (ulong)(param_1 + uVar15 * 2 + 0x96);
    }
    else {
      bVar7 = 0;
      if (uVar10 != 0x1f) {
        bVar7 = 0x39 - (char)(uVar10 >> 1);
      }
      lVar8 = param_3 << (bVar7 & 0x3f);
      uVar15 = *(ulong *)(param_1 + uVar15 * 2 + 0x96);
      do {
        uVar13 = uVar15;
        if ((*(ulong *)(uVar13 + 8) & 0xfffffffffffffff8) == param_3) {
          uVar15 = *(ulong *)(uVar13 + 0x10);
          *(ulong **)(uVar15 + 0x18) = param_2;
          *(ulong **)(uVar13 + 0x10) = param_2;
          param_2[2] = uVar15;
          param_2[3] = uVar13;
          param_2[6] = 0;
          return;
        }
        lVar6 = 4 - (lVar8 >> 0x3f);
        uVar15 = *(ulong *)(uVar13 + lVar6 * 8);
        lVar8 = lVar8 * 2;
      } while (uVar15 != 0);
      *(ulong **)(uVar13 + lVar6 * 8) = param_2;
      param_2[6] = uVar13;
    }
    param_2[3] = (ulong)param_2;
    param_2[2] = (ulong)param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined  [16] FUN_00402b64(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong *puVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined *puVar6;
  ulong *puVar7;
  byte bVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong **ppuVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  int iVar22;
  uint uVar23;
  ulong *puVar24;
  ulong *puVar25;
  byte bVar26;
  bool bVar27;
  
  puVar18 = DAT_004420c0;
  uVar12 = DAT_004420a8;
  uVar23 = DAT_004420a4;
  uVar9 = DAT_004420a0;
  bVar8 = 0;
  if (param_1 < 0xe1) {
    uVar17 = 0x20;
    if (0xe < param_1) {
      uVar17 = param_1 + 0x1f & 0xfffffffffffffff0;
    }
    bVar26 = (byte)(uVar17 >> 3);
    uVar3 = DAT_004420a0 >> (bVar26 & 0x1f);
    if ((uVar3 & 3) == 0) {
      if (uVar17 <= DAT_004420a8) goto LAB_00403291;
      if (DAT_004420a0 >> (bVar26 & 0x1f) == 0) {
        if (DAT_004420a4 == 0) goto LAB_00403291;
        uVar3 = 0;
        if ((-DAT_004420a4 & DAT_004420a4) != 0) {
          for (; ((-DAT_004420a4 & DAT_004420a4) >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        puVar18 = *(ulong **)(&DAT_004422f8 + (ulong)uVar3 * 8);
        puVar5 = puVar18;
        uVar19 = (puVar18[1] & 0xfffffffffffffff8) - uVar17;
        while ((puVar4 = (ulong *)puVar18[4], (ulong *)puVar18[4] != (ulong *)0x0 ||
               (puVar4 = (ulong *)puVar18[5], (ulong *)puVar18[5] != (ulong *)0x0))) {
          puVar18 = puVar4;
          uVar10 = (puVar18[1] & 0xfffffffffffffff8) - uVar17;
          if (uVar10 < uVar19) {
            puVar5 = puVar18;
            uVar19 = uVar10;
          }
        }
        puVar18 = (ulong *)puVar5[3];
        uVar10 = puVar5[6];
        if (puVar18 == puVar5) {
          puVar4 = (ulong *)puVar5[5];
          puVar7 = puVar5 + 5;
          if ((ulong *)puVar5[5] == (ulong *)0x0) {
            puVar18 = (ulong *)puVar5[4];
            if (puVar18 == (ulong *)0x0) goto LAB_00402dd1;
            puVar4 = puVar18;
            puVar7 = puVar5 + 4;
          }
          do {
            do {
              puVar25 = puVar7;
              puVar18 = puVar4;
              puVar4 = (ulong *)puVar18[5];
              puVar7 = puVar18 + 5;
            } while ((ulong *)puVar18[5] != (ulong *)0x0);
            puVar4 = (ulong *)puVar18[4];
            puVar7 = puVar18 + 4;
          } while ((ulong *)puVar18[4] != (ulong *)0x0);
          *puVar25 = 0;
        }
        else {
          uVar1 = puVar5[2];
          *(ulong **)(uVar1 + 0x18) = puVar18;
          puVar18[2] = uVar1;
        }
LAB_00402dd1:
        if (uVar10 != 0) {
          uVar3 = *(uint *)(puVar5 + 7);
          if (*(ulong **)(&DAT_004422f8 + (ulong)uVar3 * 8) == puVar5) {
            (&DAT_004420a8)[(ulong)uVar3 + 0x4a] = (ulong)puVar18;
            if (puVar18 == (ulong *)0x0) {
              DAT_004420a4 = uVar23 & ~(1 << (uVar3 & 0x1f));
            }
            else {
LAB_00402df5:
              uVar1 = puVar5[4];
              puVar18[6] = uVar10;
              if (uVar1 != 0) {
                puVar18[4] = uVar1;
                *(ulong **)(uVar1 + 0x30) = puVar18;
              }
              uVar10 = puVar5[5];
              if (uVar10 != 0) {
                puVar18[5] = uVar10;
                *(ulong **)(uVar10 + 0x30) = puVar18;
              }
            }
          }
          else {
            if (*(ulong **)(uVar10 + 0x20) == puVar5) {
              *(ulong **)(uVar10 + 0x20) = puVar18;
            }
            else {
              *(ulong **)(uVar10 + 0x28) = puVar18;
            }
            if (puVar18 != (ulong *)0x0) goto LAB_00402df5;
          }
        }
        if (uVar19 < 0x20) {
          puVar5[1] = uVar17 + uVar19 | 3;
          puVar18 = (ulong *)((long)puVar5 + uVar17 + uVar19 + 8);
          *puVar18 = *puVar18 | 1;
          puVar18 = DAT_004420c0;
        }
        else {
          puVar18 = (ulong *)((long)puVar5 + uVar17);
          puVar5[1] = uVar17 | 3;
          puVar18[1] = uVar19 | 1;
          *(ulong *)((long)puVar18 + uVar19) = uVar19;
          DAT_004420a8 = uVar19;
          if (uVar12 != 0) {
            uVar17 = (ulong)(uint)((int)(uVar12 >> 3) * 2);
            uVar23 = 1 << ((byte)(uVar12 >> 3) & 0x1f);
            if ((uVar9 & uVar23) == 0) {
              DAT_004420a0 = uVar9 | uVar23;
              puVar6 = &DAT_004420e8 + uVar17 * 8;
            }
            else {
              puVar6 = (undefined *)(&DAT_004420f8)[uVar17];
            }
            (&DAT_004420f8)[uVar17] = DAT_004420c0;
            *(ulong **)(puVar6 + 0x18) = DAT_004420c0;
            DAT_004420c0[2] = (ulong)puVar6;
            DAT_004420c0[3] = (ulong)(&DAT_004420e8 + uVar17 * 8);
          }
        }
      }
      else {
        iVar22 = 1 << (bVar26 & 0x1f);
        uVar9 = uVar3 << (bVar26 & 0x1f) & (iVar22 * -2 | iVar22 * 2);
        uVar9 = uVar9 & -uVar9;
        iVar22 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> iVar22 & 1) == 0; iVar22 = iVar22 + 1) {
          }
        }
        uVar19 = (ulong)(uint)(iVar22 * 2);
        uVar9 = iVar22 * 8;
        puVar5 = (ulong *)(&DAT_004420f8)[uVar19];
        puVar6 = (undefined *)puVar5[2];
        if (&DAT_004420e8 + uVar19 * 8 == puVar6) {
          DAT_004420a0 = DAT_004420a0 & ~(1 << ((byte)iVar22 & 0x1f));
        }
        else {
          *(undefined **)(puVar6 + 0x18) = &DAT_004420e8 + uVar19 * 8;
          (&DAT_004420f8)[uVar19] = puVar6;
        }
        puVar4 = (ulong *)((long)puVar5 + (ulong)uVar9);
        uVar19 = uVar9 - uVar17;
        if (uVar19 < 0x20) {
          puVar5[1] = (ulong)(uVar9 | 3);
          puVar4 = puVar4 + 1;
          *puVar4 = *puVar4 | 1;
          puVar18 = DAT_004420c0;
        }
        else {
          puVar18 = (ulong *)(uVar17 + (long)puVar5);
          puVar5[1] = uVar17 | 3;
          puVar18[1] = uVar19 | 1;
          *puVar4 = uVar19;
          DAT_004420a8 = uVar19;
          if (uVar12 != 0) {
            uVar17 = (ulong)(uint)((int)(uVar12 >> 3) * 2);
            uVar9 = 1 << ((byte)(uVar12 >> 3) & 0x1f);
            if ((DAT_004420a0 & uVar9) == 0) {
              DAT_004420a0 = DAT_004420a0 | uVar9;
              puVar6 = &DAT_004420e8 + uVar17 * 8;
            }
            else {
              puVar6 = (undefined *)(&DAT_004420f8)[uVar17];
            }
            (&DAT_004420f8)[uVar17] = DAT_004420c0;
            *(ulong **)(puVar6 + 0x18) = DAT_004420c0;
            DAT_004420c0[2] = (ulong)puVar6;
            DAT_004420c0[3] = (ulong)(&DAT_004420e8 + uVar17 * 8);
          }
        }
      }
    }
    else {
      uVar9 = (int)(uVar17 >> 3) + (~uVar3 & 1);
      uVar12 = (ulong)(uVar9 * 2);
      puVar5 = (ulong *)(&DAT_004420f8)[uVar12];
      puVar6 = (undefined *)puVar5[2];
      if (&DAT_004420e8 + uVar12 * 8 == puVar6) {
        DAT_004420a0 = DAT_004420a0 & ~(1 << (uVar9 & 0x1f));
      }
      else {
        *(undefined **)(puVar6 + 0x18) = &DAT_004420e8 + uVar12 * 8;
        (&DAT_004420f8)[uVar12] = puVar6;
      }
      puVar5[1] = (ulong)(uVar9 * 8 | 3);
      puVar18 = (ulong *)((long)puVar5 + (ulong)(uVar9 * 8) + 8);
      *puVar18 = *puVar18 | 1;
      puVar18 = DAT_004420c0;
    }
  }
  else {
    if (param_1 < 0xffffffffffffff80) {
      uVar17 = param_1 + 0x1f & 0xfffffffffffffff0;
      if (DAT_004420a4 != 0) {
        uVar12 = -uVar17;
        uVar9 = (uint)(uVar17 >> 8);
        uVar19 = param_1 + 0x1f >> 8 & 0xffffffff;
        if ((uVar9 != 0) && (uVar19 = 0x1f, uVar9 < 0x10000)) {
          uVar3 = 0x1f;
          if (uVar9 != 0) {
            for (; uVar9 >> uVar3 == 0; uVar3 = uVar3 - 1) {
            }
          }
          uVar19 = (ulong)(((uint)(uVar17 >> (0x26U - (char)(uVar3 ^ 0x1f) & 0x3f)) & 1) +
                          (0x1f - (uVar3 ^ 0x1f)) * 2);
        }
        puVar4 = *(ulong **)(&DAT_004422f8 + uVar19 * 8);
        puVar5 = puVar4;
        puVar7 = (ulong *)0x0;
        if (puVar4 != (ulong *)0x0) {
          bVar26 = 0;
          if ((int)uVar19 != 0x1f) {
            bVar26 = 0x39 - (char)(uVar19 >> 1);
          }
          puVar5 = (ulong *)0x0;
          lVar15 = uVar17 << (bVar26 & 0x3f);
          puVar25 = (ulong *)0x0;
          while ((uVar10 = (puVar4[1] & 0xfffffffffffffff8) - uVar17, uVar12 <= uVar10 ||
                 (uVar12 = uVar10, puVar5 = puVar4, uVar10 != 0))) {
            puVar7 = (ulong *)puVar4[5];
            puVar4 = (ulong *)puVar4[4 - (lVar15 >> 0x3f)];
            if ((puVar7 == (ulong *)0x0) || (puVar7 == puVar4)) {
              puVar7 = puVar25;
            }
            if (puVar4 == (ulong *)0x0) goto LAB_00402fba;
            lVar15 = lVar15 * 2;
            puVar25 = puVar7;
          }
          uVar12 = 0;
          puVar7 = puVar4;
        }
LAB_00402fba:
        if (((ulong)puVar7 | (ulong)puVar5) == 0) {
          uVar9 = -2 << ((byte)uVar19 & 0x1f) & DAT_004420a4;
          if (uVar9 == 0) goto LAB_00403291;
          uVar3 = 0;
          if ((-uVar9 & uVar9) != 0) {
            for (; ((-uVar9 & uVar9) >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
          puVar5 = (ulong *)0x0;
          puVar7 = *(ulong **)(&DAT_004422f8 + (ulong)uVar3 * 8);
        }
        while (puVar4 = puVar7, puVar4 != (ulong *)0x0) {
          uVar19 = (puVar4[1] & 0xfffffffffffffff8) - uVar17;
          if (uVar19 < uVar12) {
            puVar5 = puVar4;
            uVar12 = uVar19;
          }
          puVar7 = (ulong *)puVar4[4];
          if ((ulong *)puVar4[4] == (ulong *)0x0) {
            puVar7 = (ulong *)puVar4[5];
          }
        }
        if ((puVar5 != (ulong *)0x0) && (uVar12 < DAT_004420a8 - uVar17)) {
          puVar18 = (ulong *)puVar5[3];
          uVar19 = puVar5[6];
          if (puVar18 == puVar5) {
            puVar4 = (ulong *)puVar5[5];
            puVar7 = puVar5 + 5;
            if ((ulong *)puVar5[5] == (ulong *)0x0) {
              puVar18 = (ulong *)puVar5[4];
              if (puVar18 == (ulong *)0x0) goto LAB_00403094;
              puVar4 = puVar18;
              puVar7 = puVar5 + 4;
            }
            do {
              do {
                puVar25 = puVar7;
                puVar18 = puVar4;
                puVar4 = (ulong *)puVar18[5];
                puVar7 = puVar18 + 5;
              } while ((ulong *)puVar18[5] != (ulong *)0x0);
              puVar4 = (ulong *)puVar18[4];
              puVar7 = puVar18 + 4;
            } while ((ulong *)puVar18[4] != (ulong *)0x0);
            *puVar25 = 0;
          }
          else {
            uVar10 = puVar5[2];
            *(ulong **)(uVar10 + 0x18) = puVar18;
            puVar18[2] = uVar10;
          }
LAB_00403094:
          if (uVar19 != 0) {
            uVar9 = *(uint *)(puVar5 + 7);
            if (*(ulong **)(&DAT_004422f8 + (ulong)uVar9 * 8) == puVar5) {
              (&DAT_004420a8)[(ulong)uVar9 + 0x4a] = (ulong)puVar18;
              if (puVar18 == (ulong *)0x0) {
                DAT_004420a4 = uVar23 & ~(1 << (uVar9 & 0x1f));
              }
              else {
LAB_004030b8:
                uVar10 = puVar5[4];
                puVar18[6] = uVar19;
                if (uVar10 != 0) {
                  puVar18[4] = uVar10;
                  *(ulong **)(uVar10 + 0x30) = puVar18;
                }
                uVar19 = puVar5[5];
                if (uVar19 != 0) {
                  puVar18[5] = uVar19;
                  *(ulong **)(uVar19 + 0x30) = puVar18;
                }
              }
            }
            else {
              if (*(ulong **)(uVar19 + 0x20) == puVar5) {
                *(ulong **)(uVar19 + 0x20) = puVar18;
              }
              else {
                *(ulong **)(uVar19 + 0x28) = puVar18;
              }
              if (puVar18 != (ulong *)0x0) goto LAB_004030b8;
            }
          }
          if (uVar12 < 0x20) {
            puVar5[1] = uVar17 + uVar12 | 3;
            puVar18 = (ulong *)((long)puVar5 + uVar17 + uVar12 + 8);
            *puVar18 = *puVar18 | 1;
            puVar18 = DAT_004420c0;
          }
          else {
            lVar15 = (long)puVar5 + uVar17;
            puVar5[1] = uVar17 | 3;
            *(ulong *)(lVar15 + 8) = uVar12 | 1;
            *(ulong *)(lVar15 + uVar12) = uVar12;
            uVar9 = DAT_004420a4;
            if (uVar12 < 0x100) {
              uVar17 = (ulong)(uint)((int)(uVar12 >> 3) * 2);
              uVar9 = 1 << ((byte)(uVar12 >> 3) & 0x1f);
              if ((DAT_004420a0 & uVar9) == 0) {
                DAT_004420a0 = DAT_004420a0 | uVar9;
                puVar6 = &DAT_004420e8 + uVar17 * 8;
              }
              else {
                puVar6 = (undefined *)(&DAT_004420f8)[uVar17];
              }
              (&DAT_004420f8)[uVar17] = lVar15;
              *(long *)(puVar6 + 0x18) = lVar15;
              *(undefined **)(lVar15 + 0x10) = puVar6;
              *(undefined **)(lVar15 + 0x18) = &DAT_004420e8 + uVar17 * 8;
              puVar18 = DAT_004420c0;
            }
            else {
              uVar23 = (uint)(uVar12 >> 8);
              uVar17 = uVar12 >> 8 & 0xffffffff;
              if ((uVar23 != 0) && (uVar17 = 0x1f, uVar23 < 0x10000)) {
                uVar3 = 0x1f;
                if (uVar23 != 0) {
                  for (; uVar23 >> uVar3 == 0; uVar3 = uVar3 - 1) {
                  }
                }
                uVar17 = (ulong)(((uint)(uVar12 >> (0x26U - (char)(uVar3 ^ 0x1f) & 0x3f)) & 1) +
                                (0x1f - (uVar3 ^ 0x1f)) * 2);
              }
              uVar23 = (uint)uVar17;
              uVar3 = 1 << ((byte)uVar17 & 0x1f);
              *(uint *)(lVar15 + 0x38) = uVar23;
              *(undefined8 *)(lVar15 + 0x28) = 0;
              *(undefined8 *)(lVar15 + 0x20) = 0;
              if ((uVar9 & uVar3) == 0) {
                DAT_004420a4 = uVar9 | uVar3;
                *(long *)(&DAT_004422f8 + uVar17 * 8) = lVar15;
                *(undefined **)(lVar15 + 0x30) = &DAT_004422f8 + uVar17 * 8;
              }
              else {
                bVar8 = 0;
                if (uVar23 != 0x1f) {
                  bVar8 = 0x39 - (char)(uVar23 >> 1);
                }
                lVar11 = uVar12 << (bVar8 & 0x3f);
                lVar16 = *(long *)(&DAT_004422f8 + uVar17 * 8);
                do {
                  lVar20 = lVar16;
                  if (uVar12 == (*(ulong *)(lVar20 + 8) & 0xfffffffffffffff8)) {
                    lVar16 = *(long *)(lVar20 + 0x10);
                    *(long *)(lVar16 + 0x18) = lVar15;
                    *(long *)(lVar20 + 0x10) = lVar15;
                    *(long *)(lVar15 + 0x10) = lVar16;
                    *(long *)(lVar15 + 0x18) = lVar20;
                    *(undefined8 *)(lVar15 + 0x30) = 0;
                    puVar18 = DAT_004420c0;
                    goto LAB_00403ad3;
                  }
                  lVar14 = 4 - (lVar11 >> 0x3f);
                  lVar16 = *(long *)(lVar20 + lVar14 * 8);
                  lVar11 = lVar11 * 2;
                } while (lVar16 != 0);
                *(long *)(lVar20 + lVar14 * 8) = lVar15;
                *(long *)(lVar15 + 0x30) = lVar20;
              }
              *(long *)(lVar15 + 0x18) = lVar15;
              *(long *)(lVar15 + 0x10) = lVar15;
              puVar18 = DAT_004420c0;
            }
          }
          goto LAB_00403ad3;
        }
      }
    }
    else {
      uVar17 = 0xffffffffffffffff;
    }
LAB_00403291:
    if (DAT_004420a8 < uVar17) {
      if (DAT_004420b0 <= uVar17) {
        if ((((((DAT_00442410 & 1) != 0) && (_DAT_00442478 <= uVar17)) && (DAT_004420b0 != 0)) &&
            ((uVar12 = uVar17 + 0x3e + DAT_00442470 & -DAT_00442470, DAT_00442408 == 0 ||
             ((DAT_004423f8 < DAT_004423f8 + uVar12 && (DAT_004423f8 + uVar12 <= DAT_00442408))))))
           && (uVar17 < uVar12)) {
          puVar5 = (ulong *)FUN_00404518(uVar12);
          *puVar5 = 0;
          puVar5[1] = uVar12 - 0x20;
          puVar18 = DAT_004420b8;
          *(undefined8 *)((long)puVar5 + (uVar12 - 0x18)) = 0xb;
          *(undefined8 *)((long)puVar5 + (uVar12 - 0x10)) = 0;
          if ((puVar18 == (ulong *)0x0) || (puVar5 < puVar18)) {
            DAT_004420b8 = puVar5;
          }
          DAT_004423f8 = uVar12 + DAT_004423f8;
          puVar18 = DAT_004420c0;
          if (_DAT_00442400 < DAT_004423f8) {
            _DAT_00442400 = DAT_004423f8;
          }
          goto LAB_00403ad3;
        }
        uVar12 = uVar17 + 0x5f + DAT_00442470 & -DAT_00442470;
        if ((uVar17 < uVar12) &&
           ((DAT_00442408 == 0 ||
            ((DAT_004423f8 < uVar12 + DAT_004423f8 && (uVar12 + DAT_004423f8 <= DAT_00442408)))))) {
          puVar5 = (ulong *)FUN_00404518(uVar12);
          DAT_004423f8 = DAT_004423f8 + uVar12;
          if (_DAT_00442400 < DAT_004423f8) {
            _DAT_00442400 = DAT_004423f8;
          }
          if (DAT_004420c8 == (ulong *)0x0) {
            if ((DAT_004420b8 == (ulong *)0x0) || (puVar5 < DAT_004420b8)) {
              DAT_004420b8 = puVar5;
            }
            DAT_00442430 = 1;
            _DAT_004420d8 = 0x80;
            _DAT_004420e0 = DAT_00442460;
            puVar6 = &DAT_004420e8;
            DAT_00442418 = puVar5;
            DAT_00442420 = uVar12;
            do {
              *(undefined **)(puVar6 + 0x18) = puVar6;
              *(undefined **)(puVar6 + 0x10) = puVar6;
              puVar6 = puVar6 + 0x10;
            } while (puVar6 != &DAT_004422e8);
            lVar15 = uVar12 - 0x50;
LAB_00403507:
            FUN_004022a8(&DAT_004420a0,puVar5,lVar15);
          }
          else {
            if ((((puVar5 == (ulong *)((long)DAT_00442418 + DAT_00442420)) &&
                 ((DAT_00442430 & 8) == 0)) && ((DAT_00442430 & 1) != 0)) &&
               ((DAT_00442418 <= DAT_004420c8 && (DAT_004420c8 < puVar5)))) {
              DAT_00442420 = DAT_00442420 + uVar12;
              lVar15 = DAT_004420b0 + uVar12;
              puVar5 = DAT_004420c8;
              goto LAB_00403507;
            }
            if (puVar5 < DAT_004420b8) {
              DAT_004420b8 = puVar5;
            }
            ppuVar13 = &DAT_00442418;
            if (((DAT_00442418 == (ulong *)((long)puVar5 + uVar12)) &&
                (bVar26 = (byte)(DAT_00442430 & 8), (DAT_00442430 & 8) == 0)) &&
               ((DAT_00442430 & 1) != 0)) {
              DAT_00442420 = DAT_00442420 + uVar12;
              uVar9 = (uint)DAT_00442418;
              if (((ulong)DAT_00442418 & 0xf) != 0) {
                uVar9 = -(uVar9 + 0x10);
              }
              puVar18 = (ulong *)((long)DAT_00442418 + (ulong)(uVar9 & 0xf));
              puVar4 = (ulong *)((long)puVar5 + uVar17);
              uVar12 = (long)puVar18 + (-uVar17 - (long)puVar5);
              bVar27 = DAT_004420c8 == puVar18;
              DAT_00442418 = puVar5;
              puVar5[1] = uVar17 | 3;
              if (bVar27) {
                DAT_004420b0 = uVar12 + DAT_004420b0;
                DAT_004420c8 = puVar4;
                puVar4[1] = DAT_004420b0 | 1;
              }
              else if (puVar18 == DAT_004420c0) {
                uVar12 = uVar12 + DAT_004420a8;
                DAT_004420a8 = uVar12;
                DAT_004420c0 = puVar4;
                puVar4[1] = uVar12 | 1;
                *(ulong *)((long)puVar4 + uVar12) = uVar12;
              }
              else {
                uVar17 = puVar18[1];
                if (((uint)uVar17 & 3) == 1) {
                  puVar7 = (ulong *)puVar18[3];
                  if (uVar17 < 0x100) {
                    puVar25 = (ulong *)puVar18[2];
                    if (puVar25 == puVar7) {
                      bVar8 = (byte)(uVar17 >> 3) & 0x1f;
                      DAT_004420a0 = DAT_004420a0 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
                    }
                    else {
                      puVar25[3] = (ulong)puVar7;
                      puVar7[2] = (ulong)puVar25;
                    }
                  }
                  else {
                    uVar19 = puVar18[6];
                    if (puVar18 == puVar7) {
                      puVar25 = (ulong *)puVar18[5];
                      puVar2 = puVar18 + 5;
                      if ((ulong *)puVar18[5] == (ulong *)0x0) {
                        puVar7 = (ulong *)puVar18[4];
                        if (puVar7 == (ulong *)0x0) goto LAB_0040369f;
                        puVar25 = puVar7;
                        puVar2 = puVar18 + 4;
                      }
                      do {
                        do {
                          puVar24 = puVar2;
                          puVar7 = puVar25;
                          puVar25 = (ulong *)puVar7[5];
                          puVar2 = puVar7 + 5;
                        } while ((ulong *)puVar7[5] != (ulong *)0x0);
                        puVar25 = (ulong *)puVar7[4];
                        puVar2 = puVar7 + 4;
                      } while ((ulong *)puVar7[4] != (ulong *)0x0);
                      *puVar24 = 0;
                    }
                    else {
                      uVar10 = puVar18[2];
                      *(ulong **)(uVar10 + 0x18) = puVar7;
                      puVar7[2] = uVar10;
                    }
LAB_0040369f:
                    if (uVar19 != 0) {
                      uVar9 = *(uint *)(puVar18 + 7);
                      if (puVar18 == *(ulong **)(&DAT_004422f8 + (ulong)uVar9 * 8)) {
                        (&DAT_004420a8)[(ulong)uVar9 + 0x4a] = (ulong)puVar7;
                        if (puVar7 == (ulong *)0x0) {
                          bVar8 = (byte)uVar9 & 0x1f;
                          DAT_004420a4 = DAT_004420a4 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
                        }
                        else {
LAB_004036c6:
                          uVar10 = puVar18[4];
                          puVar7[6] = uVar19;
                          if (uVar10 != 0) {
                            puVar7[4] = uVar10;
                            *(ulong **)(uVar10 + 0x30) = puVar7;
                          }
                          uVar19 = puVar18[5];
                          if (uVar19 != 0) {
                            puVar7[5] = uVar19;
                            *(ulong **)(uVar19 + 0x30) = puVar7;
                          }
                        }
                      }
                      else {
                        if (puVar18 == *(ulong **)(uVar19 + 0x20)) {
                          *(ulong **)(uVar19 + 0x20) = puVar7;
                        }
                        else {
                          *(ulong **)(uVar19 + 0x28) = puVar7;
                        }
                        if (puVar7 != (ulong *)0x0) goto LAB_004036c6;
                      }
                    }
                  }
                  puVar18 = (ulong *)((long)puVar18 + (uVar17 & 0xfffffffffffffff8));
                  uVar12 = uVar12 + (uVar17 & 0xfffffffffffffff8);
                }
                puVar18[1] = puVar18[1] & 0xfffffffffffffffe;
                puVar4[1] = uVar12 | 1;
                *(ulong *)((long)puVar4 + uVar12) = uVar12;
                uVar9 = DAT_004420a4;
                if (uVar12 < 0x100) {
                  uVar17 = (ulong)(uint)((int)(uVar12 >> 3) * 2);
                  uVar9 = 1 << ((byte)(uVar12 >> 3) & 0x1f);
                  if ((DAT_004420a0 & uVar9) == 0) {
                    DAT_004420a0 = DAT_004420a0 | uVar9;
                    puVar6 = &DAT_004420e8 + uVar17 * 8;
                  }
                  else {
                    puVar6 = (undefined *)(&DAT_004420f8)[uVar17];
                  }
                  (&DAT_004420f8)[uVar17] = puVar4;
                  *(ulong **)(puVar6 + 0x18) = puVar4;
                  puVar4[2] = (ulong)puVar6;
                  puVar4[3] = (ulong)(&DAT_004420e8 + uVar17 * 8);
                }
                else {
                  uVar23 = (uint)(uVar12 >> 8);
                  uVar17 = uVar12 >> 8 & 0xffffffff;
                  if ((uVar23 != 0) && (uVar17 = 0x1f, uVar23 < 0x10000)) {
                    uVar3 = 0x1f;
                    if (uVar23 != 0) {
                      for (; uVar23 >> uVar3 == 0; uVar3 = uVar3 - 1) {
                      }
                    }
                    uVar17 = (ulong)(((uint)(uVar12 >> (0x26U - (char)(uVar3 ^ 0x1f) & 0x3f)) & 1) +
                                    (0x1f - (uVar3 ^ 0x1f)) * 2);
                  }
                  uVar23 = (uint)uVar17;
                  uVar3 = 1 << ((byte)uVar17 & 0x1f);
                  *(uint *)(puVar4 + 7) = uVar23;
                  puVar4[5] = 0;
                  puVar4[4] = 0;
                  if ((uVar9 & uVar3) == 0) {
                    DAT_004420a4 = uVar9 | uVar3;
                    *(ulong **)(&DAT_004422f8 + uVar17 * 8) = puVar4;
                    puVar4[6] = (ulong)(&DAT_004422f8 + uVar17 * 8);
                  }
                  else {
                    if (uVar23 != 0x1f) {
                      bVar26 = 0x39 - (char)(uVar23 >> 1);
                    }
                    lVar15 = uVar12 << (bVar26 & 0x3f);
                    uVar17 = *(ulong *)(&DAT_004422f8 + uVar17 * 8);
                    do {
                      uVar19 = uVar17;
                      if (uVar12 == (*(ulong *)(uVar19 + 8) & 0xfffffffffffffff8)) {
                        uVar12 = *(ulong *)(uVar19 + 0x10);
                        *(ulong **)(uVar12 + 0x18) = puVar4;
                        *(ulong **)(uVar19 + 0x10) = puVar4;
                        puVar4[2] = uVar12;
                        puVar4[3] = uVar19;
                        puVar4[6] = 0;
                        goto LAB_0040387b;
                      }
                      lVar16 = 4 - (lVar15 >> 0x3f);
                      uVar17 = *(ulong *)(uVar19 + lVar16 * 8);
                      lVar15 = lVar15 * 2;
                    } while (uVar17 != 0);
                    *(ulong **)(uVar19 + lVar16 * 8) = puVar4;
                    puVar4[6] = uVar19;
                  }
                  puVar4[3] = (ulong)puVar4;
                  puVar4[2] = (ulong)puVar4;
                }
              }
LAB_0040387b:
              puVar5 = puVar5 + 2;
              goto LAB_00403ae0;
            }
            while ((DAT_004420c8 < *ppuVar13 ||
                   (puVar18 = (ulong *)((long)*ppuVar13 + (long)ppuVar13[1]),
                   puVar18 <= DAT_004420c8))) {
              ppuVar13 = (ulong **)ppuVar13[2];
              if (ppuVar13 == (ulong **)0x0) {
                do {
                  invalidInstructionException();
                } while( true );
              }
            }
            uVar9 = (uint)((long)puVar18 - 0x4fU);
            if (((long)puVar18 - 0x4fU & 0xf) != 0) {
              uVar9 = -uVar9;
            }
            puVar4 = (ulong *)((long)puVar18 + ((ulong)(uVar9 & 0xf) - 0x5f));
            if (puVar4 < DAT_004420c8 + 4) {
              puVar4 = DAT_004420c8;
            }
            puVar25 = DAT_004420c8;
            FUN_004022a8(&DAT_004420a0,puVar5,uVar12 - 0x50);
            DAT_00442428 = puVar4 + 2;
            puVar4[1] = 0x33;
            puVar21 = &DAT_00442418;
            puVar7 = puVar4 + 2;
            for (lVar15 = 8; lVar15 != 0; lVar15 = lVar15 + -1) {
              *(undefined4 *)puVar7 = *(undefined4 *)puVar21;
              puVar21 = (undefined8 *)((long)puVar21 + ((ulong)bVar8 * -2 + 1) * 4);
              puVar7 = (ulong *)((long)puVar7 + (ulong)bVar8 * -8 + 4);
            }
            puVar7 = puVar4 + 7;
            DAT_00442430 = 1;
            DAT_00442418 = puVar5;
            DAT_00442420 = uVar12;
            do {
              *puVar7 = 0xb;
              puVar7 = puVar7 + 1;
            } while (puVar7 < puVar18);
            if (puVar25 != puVar4) {
              puVar4[1] = puVar4[1] & 0xfffffffffffffffe;
              uVar12 = (long)puVar4 - (long)puVar25;
              puVar25[1] = uVar12 | 1;
              *puVar4 = uVar12;
              uVar9 = DAT_004420a4;
              if (uVar12 < 0x100) {
                uVar19 = (ulong)(uint)((int)(uVar12 >> 3) * 2);
                uVar9 = 1 << ((byte)(uVar12 >> 3) & 0x1f);
                if ((DAT_004420a0 & uVar9) == 0) {
                  DAT_004420a0 = DAT_004420a0 | uVar9;
                  puVar6 = &DAT_004420e8 + uVar19 * 8;
                }
                else {
                  puVar6 = (undefined *)(&DAT_004420f8)[uVar19];
                }
                (&DAT_004420f8)[uVar19] = puVar25;
                *(ulong **)(puVar6 + 0x18) = puVar25;
                puVar25[2] = (ulong)puVar6;
                puVar25[3] = (ulong)(&DAT_004420e8 + uVar19 * 8);
              }
              else {
                uVar3 = (uint)(uVar12 >> 8);
                uVar23 = uVar3;
                if ((uVar3 != 0) && (uVar23 = 0x1f, uVar3 < 0x10000)) {
                  uVar23 = 0x1f;
                  if (uVar3 != 0) {
                    for (; uVar3 >> uVar23 == 0; uVar23 = uVar23 - 1) {
                    }
                  }
                  uVar23 = ((uint)(uVar12 >> (0x26U - (char)(uVar23 ^ 0x1f) & 0x3f)) & 1) +
                           (0x1f - (uVar23 ^ 0x1f)) * 2;
                }
                uVar3 = 1 << ((byte)uVar23 & 0x1f);
                *(uint *)(puVar25 + 7) = uVar23;
                puVar25[5] = 0;
                puVar25[4] = 0;
                uVar19 = (ulong)uVar23;
                if ((uVar9 & uVar3) == 0) {
                  DAT_004420a4 = uVar9 | uVar3;
                  *(ulong **)(&DAT_004422f8 + uVar19 * 8) = puVar25;
                  puVar25[6] = (ulong)(&DAT_004422f8 + uVar19 * 8);
                }
                else {
                  bVar8 = 0;
                  if (uVar23 != 0x1f) {
                    bVar8 = 0x39 - (char)(uVar23 >> 1);
                  }
                  lVar15 = uVar12 << (bVar8 & 0x3f);
                  uVar19 = *(ulong *)(&DAT_004422f8 + uVar19 * 8);
                  do {
                    uVar10 = uVar19;
                    if (uVar12 == (*(ulong *)(uVar10 + 8) & 0xfffffffffffffff8)) {
                      uVar12 = *(ulong *)(uVar10 + 0x10);
                      *(ulong **)(uVar12 + 0x18) = puVar25;
                      *(ulong **)(uVar10 + 0x10) = puVar25;
                      puVar25[2] = uVar12;
                      puVar25[3] = uVar10;
                      puVar25[6] = 0;
                      goto LAB_00403a9b;
                    }
                    lVar16 = 4 - (lVar15 >> 0x3f);
                    uVar19 = *(ulong *)(uVar10 + lVar16 * 8);
                    lVar15 = lVar15 * 2;
                  } while (uVar19 != 0);
                  *(ulong **)(uVar10 + lVar16 * 8) = puVar25;
                  puVar25[6] = uVar10;
                }
                puVar25[3] = (ulong)puVar25;
                puVar25[2] = (ulong)puVar25;
              }
            }
          }
LAB_00403a9b:
          if (uVar17 < DAT_004420b0) {
            DAT_004420b0 = DAT_004420b0 - uVar17;
            goto LAB_00403aaa;
          }
          FUN_004018e7();
        }
        puVar5 = (ulong *)0x0;
        goto LAB_00403ae0;
      }
      DAT_004420b0 = DAT_004420b0 - uVar17;
LAB_00403aaa:
      puVar18 = DAT_004420c8;
      DAT_004420c8 = (ulong *)((long)DAT_004420c8 + uVar17);
      DAT_004420c8[1] = DAT_004420b0 | 1;
    }
    else {
      uVar12 = DAT_004420a8 - uVar17;
      puVar5 = (ulong *)((long)DAT_004420c0 + DAT_004420a8);
      if (uVar12 < 0x20) {
        uVar12 = DAT_004420a8 | 3;
        DAT_004420a8 = 0;
        DAT_004420c0 = (ulong *)0x0;
        puVar18[1] = uVar12;
        puVar5 = puVar5 + 1;
        *puVar5 = *puVar5 | 1;
        puVar5 = puVar18;
        puVar18 = DAT_004420c0;
        goto LAB_00403ad3;
      }
      DAT_004420c0 = (ulong *)((long)DAT_004420c0 + uVar17);
      DAT_004420a8 = uVar12;
      DAT_004420c0[1] = uVar12 | 1;
      *puVar5 = uVar12;
    }
    puVar18[1] = uVar17 | 3;
    puVar5 = puVar18;
    puVar18 = DAT_004420c0;
  }
LAB_00403ad3:
  DAT_004420c0 = puVar18;
  puVar5 = puVar5 + 2;
LAB_00403ae0:
  return CONCAT88(param_4,puVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong FUN_00403ae8(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong **ppuVar2;
  int iVar3;
  long lVar4;
  ulong in_RAX;
  ulong uVar5;
  byte bVar6;
  uint uVar7;
  ulong **ppuVar8;
  ulong **ppuVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  uint uVar14;
  ulong **ppuVar15;
  uint uVar16;
  ulong **ppuVar17;
  ulong **ppuVar18;
  ulong **ppuVar19;
  bool bVar20;
  
  if (param_1 == 0) {
    return in_RAX;
  }
  ppuVar15 = (ulong **)(param_1 + -0x10);
  uVar11 = *(ulong *)(param_1 + -8);
  uVar5 = uVar11 & 0xfffffffffffffff8;
  ppuVar19 = (ulong **)((long)ppuVar15 + uVar5);
  if ((uVar11 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + -0x10);
    ppuVar15 = (ulong **)((long)ppuVar15 - uVar1);
    if ((uVar11 & 3) == 0) {
      lVar4 = uVar5 + 0x20 + uVar1;
      iVar3 = FUN_0040452c(ppuVar15,lVar4);
      if (iVar3 != 0) {
        return param_2;
      }
      DAT_004423f8 = DAT_004423f8 - lVar4;
      return param_2;
    }
    uVar5 = uVar5 + uVar1;
    if (DAT_004420c0 == ppuVar15) {
      if (((uint)ppuVar19[1] & 3) == 3) {
        DAT_004420a8 = uVar5;
        ppuVar19[1] = (ulong *)((ulong)ppuVar19[1] & 0xfffffffffffffffe);
        ppuVar15[1] = (ulong *)(uVar5 | 1);
        *ppuVar19 = (ulong *)uVar5;
        return param_2;
      }
    }
    else {
      ppuVar8 = (ulong **)ppuVar15[3];
      if (uVar1 < 0x100) {
        ppuVar9 = (ulong **)ppuVar15[2];
        if (ppuVar9 == ppuVar8) {
          bVar6 = (byte)(uVar1 >> 3) & 0x1f;
          DAT_004420a0 = DAT_004420a0 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
        }
        else {
          ppuVar9[3] = (ulong *)ppuVar8;
          ppuVar8[2] = (ulong *)ppuVar9;
        }
      }
      else {
        puVar10 = ppuVar15[6];
        if (ppuVar15 == ppuVar8) {
          ppuVar9 = (ulong **)ppuVar15[5];
          ppuVar2 = ppuVar15 + 5;
          if ((ulong **)ppuVar15[5] == (ulong **)0x0) {
            ppuVar8 = (ulong **)ppuVar15[4];
            if (ppuVar8 == (ulong **)0x0) goto LAB_00403bea;
            ppuVar9 = ppuVar8;
            ppuVar2 = ppuVar15 + 4;
          }
          do {
            do {
              ppuVar17 = ppuVar2;
              ppuVar8 = ppuVar9;
              ppuVar9 = (ulong **)ppuVar8[5];
              ppuVar2 = ppuVar8 + 5;
            } while ((ulong **)ppuVar8[5] != (ulong **)0x0);
            ppuVar9 = (ulong **)ppuVar8[4];
            ppuVar2 = ppuVar8 + 4;
          } while ((ulong **)ppuVar8[4] != (ulong **)0x0);
          *ppuVar17 = (ulong *)0x0;
        }
        else {
          puVar13 = ppuVar15[2];
          puVar13[3] = (ulong)ppuVar8;
          ppuVar8[2] = puVar13;
        }
LAB_00403bea:
        if (puVar10 != (ulong *)0x0) {
          uVar14 = *(uint *)(ppuVar15 + 7);
          if (*(ulong ***)(&DAT_004422f8 + (ulong)uVar14 * 8) == ppuVar15) {
            (&DAT_004420a8)[(ulong)uVar14 + 0x4a] = (ulong)ppuVar8;
            if (ppuVar8 == (ulong **)0x0) {
              bVar6 = (byte)uVar14 & 0x1f;
              DAT_004420a4 = DAT_004420a4 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
            }
            else {
LAB_00403c15:
              puVar13 = ppuVar15[4];
              ppuVar8[6] = puVar10;
              if (puVar13 != (ulong *)0x0) {
                ppuVar8[4] = puVar13;
                puVar13[6] = (ulong)ppuVar8;
              }
              puVar10 = ppuVar15[5];
              if (puVar10 != (ulong *)0x0) {
                ppuVar8[5] = puVar10;
                puVar10[6] = (ulong)ppuVar8;
              }
            }
          }
          else {
            if ((ulong **)puVar10[4] == ppuVar15) {
              puVar10[4] = (ulong)ppuVar8;
            }
            else {
              puVar10[5] = (ulong)ppuVar8;
            }
            if (ppuVar8 != (ulong **)0x0) goto LAB_00403c15;
          }
        }
      }
    }
  }
  ppuVar8 = DAT_004420c0;
  puVar10 = ppuVar19[1];
  if (((ulong)puVar10 & 2) != 0) {
    ppuVar19[1] = (ulong *)((ulong)puVar10 & 0xfffffffffffffffe);
    ppuVar15[1] = (ulong *)(uVar5 | 1);
    *(ulong *)((long)ppuVar15 + uVar5) = uVar5;
    goto LAB_00403e84;
  }
  if (DAT_004420c8 != ppuVar19) {
    if (ppuVar19 == DAT_004420c0) {
      uVar5 = uVar5 + DAT_004420a8;
      DAT_004420a8 = uVar5;
      DAT_004420c0 = ppuVar15;
      ppuVar15[1] = (ulong *)(uVar5 | 1);
      *(ulong *)((long)ppuVar15 + uVar5) = uVar5;
      return param_2;
    }
    ppuVar9 = (ulong **)ppuVar19[3];
    uVar5 = uVar5 + ((ulong)puVar10 & 0xfffffffffffffff8);
    if (((ulong)puVar10 & 0xfffffffffffffff8) < 0xf9) {
      ppuVar19 = (ulong **)ppuVar19[2];
      if (ppuVar19 == ppuVar9) {
        bVar6 = (byte)((ulong)puVar10 >> 3) & 0x1f;
        DAT_004420a0 = DAT_004420a0 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
      }
      else {
        ppuVar19[3] = (ulong *)ppuVar9;
        ppuVar9[2] = (ulong *)ppuVar19;
      }
    }
    else {
      puVar10 = ppuVar19[6];
      if (ppuVar19 == ppuVar9) {
        ppuVar2 = (ulong **)ppuVar19[5];
        ppuVar17 = ppuVar19 + 5;
        if ((ulong **)ppuVar19[5] == (ulong **)0x0) {
          ppuVar9 = (ulong **)ppuVar19[4];
          if (ppuVar9 == (ulong **)0x0) goto LAB_00403dd8;
          ppuVar2 = ppuVar9;
          ppuVar17 = ppuVar19 + 4;
        }
        do {
          do {
            ppuVar18 = ppuVar17;
            ppuVar9 = ppuVar2;
            ppuVar2 = (ulong **)ppuVar9[5];
            ppuVar17 = ppuVar9 + 5;
          } while ((ulong **)ppuVar9[5] != (ulong **)0x0);
          ppuVar2 = (ulong **)ppuVar9[4];
          ppuVar17 = ppuVar9 + 4;
        } while ((ulong **)ppuVar9[4] != (ulong **)0x0);
        *ppuVar18 = (ulong *)0x0;
      }
      else {
        puVar13 = ppuVar19[2];
        puVar13[3] = (ulong)ppuVar9;
        ppuVar9[2] = puVar13;
      }
LAB_00403dd8:
      if (puVar10 != (ulong *)0x0) {
        uVar14 = *(uint *)(ppuVar19 + 7);
        if (*(ulong ***)(&DAT_004422f8 + (ulong)uVar14 * 8) == ppuVar19) {
          (&DAT_004420a8)[(ulong)uVar14 + 0x4a] = (ulong)ppuVar9;
          if (ppuVar9 == (ulong **)0x0) {
            bVar6 = (byte)uVar14 & 0x1f;
            DAT_004420a4 = DAT_004420a4 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
          }
          else {
LAB_00403dff:
            puVar13 = ppuVar19[4];
            ppuVar9[6] = puVar10;
            if (puVar13 != (ulong *)0x0) {
              ppuVar9[4] = puVar13;
              puVar13[6] = (ulong)ppuVar9;
            }
            puVar10 = ppuVar19[5];
            if (puVar10 != (ulong *)0x0) {
              ppuVar9[5] = puVar10;
              puVar10[6] = (ulong)ppuVar9;
            }
          }
        }
        else {
          if ((ulong **)puVar10[4] == ppuVar19) {
            puVar10[4] = (ulong)ppuVar9;
          }
          else {
            puVar10[5] = (ulong)ppuVar9;
          }
          if (ppuVar9 != (ulong **)0x0) goto LAB_00403dff;
        }
      }
    }
    ppuVar15[1] = (ulong *)(uVar5 | 1);
    *(ulong *)((long)ppuVar15 + uVar5) = uVar5;
    if (ppuVar15 == ppuVar8) {
      DAT_004420a8 = uVar5;
      return param_2;
    }
LAB_00403e84:
    uVar14 = DAT_004420a4;
    if (uVar5 < 0x100) {
      uVar11 = (ulong)(uint)((int)(uVar5 >> 3) * 2);
      uVar14 = 1 << ((byte)(uVar5 >> 3) & 0x1f);
      if ((DAT_004420a0 & uVar14) == 0) {
        DAT_004420a0 = DAT_004420a0 | uVar14;
        puVar10 = (ulong *)(&DAT_004420e8 + uVar11 * 8);
      }
      else {
        puVar10 = (ulong *)(&DAT_004420f8)[uVar11];
      }
      (&DAT_004420f8)[uVar11] = ppuVar15;
      puVar10[3] = (ulong)ppuVar15;
      ppuVar15[2] = puVar10;
      ppuVar15[3] = (ulong *)(&DAT_004420e8 + uVar11 * 8);
    }
    else {
      uVar7 = (uint)(uVar5 >> 8);
      uVar11 = uVar5 >> 8 & 0xffffffff;
      if ((uVar7 != 0) && (uVar11 = 0x1f, uVar7 < 0x10000)) {
        uVar16 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> uVar16 == 0; uVar16 = uVar16 - 1) {
          }
        }
        uVar11 = (ulong)(((uint)(uVar5 >> (0x26U - (char)(uVar16 ^ 0x1f) & 0x3f)) & 1) +
                        (0x1f - (uVar16 ^ 0x1f)) * 2);
      }
      uVar7 = (uint)uVar11;
      uVar16 = 1 << ((byte)uVar11 & 0x1f);
      *(uint *)(ppuVar15 + 7) = uVar7;
      ppuVar15[5] = (ulong *)0x0;
      ppuVar15[4] = (ulong *)0x0;
      if ((uVar14 & uVar16) == 0) {
        DAT_004420a4 = uVar14 | uVar16;
        puVar13 = (ulong *)(ulong)DAT_004420a4;
        *(ulong ***)(&DAT_004422f8 + uVar11 * 8) = ppuVar15;
        ppuVar15[6] = (ulong *)(&DAT_004422f8 + uVar11 * 8);
      }
      else {
        bVar6 = 0;
        if (uVar7 != 0x1f) {
          bVar6 = 0x39 - (char)(uVar7 >> 1);
        }
        lVar4 = uVar5 << (bVar6 & 0x3f);
        puVar10 = *(ulong **)(&DAT_004422f8 + uVar11 * 8);
        do {
          puVar13 = puVar10;
          if ((puVar13[1] & 0xfffffffffffffff8) == uVar5) {
            puVar10 = (ulong *)puVar13[2];
            puVar10[3] = (ulong)ppuVar15;
            puVar13[2] = (ulong)ppuVar15;
            ppuVar15[2] = puVar10;
            ppuVar15[3] = puVar13;
            ppuVar15[6] = (ulong *)0x0;
            goto LAB_00403fd2;
          }
          lVar12 = 4 - (lVar4 >> 0x3f);
          lVar4 = lVar4 * 2;
          puVar10 = (ulong *)puVar13[lVar12];
        } while ((ulong *)puVar13[lVar12] != (ulong *)0x0);
        puVar13[lVar12] = (ulong)ppuVar15;
        ppuVar15[6] = puVar13;
      }
      ppuVar15[3] = (ulong *)ppuVar15;
      ppuVar15[2] = (ulong *)ppuVar15;
LAB_00403fd2:
      _DAT_004420d8 = _DAT_004420d8 + -1;
      if (_DAT_004420d8 == 0) {
        uVar11 = FUN_004022ef(&DAT_004420a0,puVar13,param_2);
        return uVar11;
      }
    }
    return param_2;
  }
  uVar5 = uVar5 + DAT_004420b0;
  bVar20 = ppuVar15 == DAT_004420c0;
  DAT_004420b0 = uVar5;
  DAT_004420c8 = ppuVar15;
  ppuVar15[1] = (ulong *)(uVar5 | 1);
  if (bVar20) {
    DAT_004420c0 = (ulong **)0x0;
    DAT_004420a8 = 0;
  }
  if (uVar5 <= DAT_004420d0) {
    return param_2;
  }
  if (DAT_004420c8 != (ulong **)0x0) {
    if (0x50 < DAT_004420b0) {
      ppuVar15 = (ulong **)&DAT_00442418;
      ppuVar19 = ppuVar15;
      do {
        ppuVar8 = (ulong **)*ppuVar19;
        if (ppuVar8 <= DAT_004420c8) {
          puVar10 = ppuVar19[1];
          if (DAT_004420c8 < (ulong **)((long)ppuVar8 + (long)puVar10)) {
            if ((((*(uint *)(ppuVar19 + 3) & 8) != 0) || ((*(uint *)(ppuVar19 + 3) & 1) == 0)) ||
               (puVar13 = (ulong *)((((DAT_004420b0 + DAT_00442470) - 0x51) / DAT_00442470 - 1) *
                                   DAT_00442470),
               puVar10 <= puVar13 && (long)puVar13 - (long)puVar10 != 0)) break;
            goto LAB_00402646;
          }
        }
        ppuVar19 = (ulong **)ppuVar19[2];
        if (ppuVar19 == (ulong **)0x0) {
          do {
            invalidInstructionException();
          } while( true );
        }
      } while( true );
    }
    goto LAB_004025e0;
  }
  goto LAB_004025c0;
  while (ppuVar15 = (ulong **)ppuVar15[2], ppuVar15 != (ulong **)0x0) {
LAB_00402646:
    if ((ppuVar8 <= ppuVar15) && (ppuVar15 < (ulong **)((long)ppuVar8 + (long)puVar10)))
    goto LAB_004025e0;
  }
  lVar4 = FUN_00404abb(ppuVar8,puVar10,(long)puVar10 - (long)puVar13,0,0);
  if ((lVar4 == -1) &&
     (iVar3 = FUN_0040452c((long)*ppuVar19 + ((long)puVar10 - (long)puVar13),puVar13), iVar3 != 0))
  {
LAB_004025e0:
    puVar13 = (ulong *)0x0;
  }
  else if (puVar13 != (ulong *)0x0) {
    ppuVar19[1] = (ulong *)((long)ppuVar19[1] - (long)puVar13);
    DAT_004423f8 = DAT_004423f8 - (long)puVar13;
    FUN_004022a8(&DAT_004420a0,DAT_004420c8,DAT_004420b0 - (long)puVar13);
  }
  lVar4 = FUN_004022ef(&DAT_004420a0);
  lVar4 = (long)puVar13 + lVar4;
  if (lVar4 != 0) goto LAB_004026d7;
  if (DAT_004420d0 < DAT_004420b0) {
    DAT_004420d0 = 0xffffffffffffffff;
    goto LAB_004026d7;
  }
LAB_004025c0:
  lVar4 = 0;
LAB_004026d7:
  return (ulong)(lVar4 != 0);
}



undefined  [16]
FUN_00404049(uint *param_1,long *param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  ulong *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  
  uVar8 = param_2[1];
  uVar10 = uVar8 & 0xfffffffffffffff8;
  if ((uVar8 & 3) == 0) {
    if (0xff < param_3) {
      if ((param_3 + 8 <= uVar10) && (uVar10 - param_3 <= (ulong)(DAT_00442470 * 2)))
      goto LAB_004043c9;
      lVar11 = *param_2;
      uVar12 = DAT_00442470 + 0x3e + param_3 & -DAT_00442470;
      lVar1 = uVar10 + 0x20 + lVar11;
      uVar8 = FUN_00404abb((long)param_2 - lVar11,lVar1,uVar12,param_4,0);
      if (uVar8 != 0xffffffffffffffff) {
        param_2 = (long *)(uVar8 + lVar11);
        lVar11 = uVar12 - lVar11;
        uVar10 = *(ulong *)(param_1 + 6);
        param_2[1] = lVar11 + -0x20;
        *(undefined8 *)((long)param_2 + lVar11 + -0x18) = 0xb;
        *(undefined8 *)((long)param_2 + lVar11 + -0x10) = 0;
        if (uVar8 < uVar10) {
          *(ulong *)(param_1 + 6) = uVar8;
        }
        uVar8 = (uVar12 + *(long *)(param_1 + 0xd6)) - lVar1;
        *(ulong *)(param_1 + 0xd6) = uVar8;
        if (*(ulong *)(param_1 + 0xd8) <= uVar8 && uVar8 != *(ulong *)(param_1 + 0xd8)) {
          *(ulong *)(param_1 + 0xd8) = uVar8;
        }
        goto LAB_004043c9;
      }
    }
  }
  else {
    lVar1 = (long)param_2 + uVar10;
    uVar13 = (uint)uVar8;
    if (param_3 <= uVar10) {
      uVar10 = uVar10 - param_3;
      if (uVar10 < 0x20) goto LAB_004043c9;
      param_2[1] = param_3 | uVar13 & 1 | 2;
      *(ulong *)((long)param_2 + param_3 + 8) = uVar10 | 3;
      *(ulong *)(lVar1 + 8) = *(ulong *)(lVar1 + 8) | 1;
LAB_004043c1:
      FUN_004026e8(param_1,(long)param_2 + param_3,uVar10);
      goto LAB_004043c9;
    }
    if (*(long *)(param_1 + 10) == lVar1) {
      if (param_3 < uVar10 + *(long *)(param_1 + 4)) {
        uVar8 = (uVar10 + *(long *)(param_1 + 4)) - param_3;
        param_2[1] = uVar13 & 1 | param_3 | 2;
        *(ulong *)((long)param_2 + param_3 + 8) = uVar8 | 1;
        *(ulong *)(param_1 + 10) = (long)param_2 + param_3;
        *(ulong *)(param_1 + 4) = uVar8;
        goto LAB_004043c9;
      }
    }
    else if (*(long *)(param_1 + 8) == lVar1) {
      uVar10 = *(long *)(param_1 + 2) + uVar10;
      if (param_3 <= uVar10) {
        puVar2 = (ulong *)((long)param_2 + uVar10);
        uVar8 = uVar10 - param_3;
        if (uVar8 < 0x20) {
          param_2[1] = uVar10 | uVar13 & 1 | 2;
          puVar2[1] = puVar2[1] | 1;
          *(undefined8 *)(param_1 + 2) = 0;
          *(undefined8 *)(param_1 + 8) = 0;
        }
        else {
          param_2[1] = uVar13 & 1 | param_3 | 2;
          *(ulong *)((long)param_2 + param_3 + 8) = uVar8 | 1;
          *puVar2 = uVar8;
          puVar2[1] = puVar2[1] & 0xfffffffffffffffe;
          *(ulong *)(param_1 + 2) = uVar8;
          *(ulong *)(param_1 + 8) = (long)param_2 + param_3;
        }
        goto LAB_004043c9;
      }
    }
    else {
      uVar8 = *(ulong *)(lVar1 + 8);
      if ((uVar8 & 2) == 0) {
        uVar12 = uVar10 + (uVar8 & 0xfffffffffffffff8);
        if (param_3 <= uVar12) {
          lVar11 = *(long *)(lVar1 + 0x18);
          uVar10 = uVar12 - param_3;
          if ((uVar8 & 0xfffffffffffffff8) < 0xf9) {
            lVar1 = *(long *)(lVar1 + 0x10);
            if (lVar1 == lVar11) {
              bVar6 = (byte)(uVar8 >> 3) & 0x1f;
              *param_1 = *param_1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
            }
            else {
              *(long *)(lVar1 + 0x18) = lVar11;
              *(long *)(lVar11 + 0x10) = lVar1;
            }
          }
          else {
            lVar4 = *(long *)(lVar1 + 0x30);
            if (lVar1 == lVar11) {
              puVar7 = (undefined8 *)(lVar1 + 0x28);
              lVar5 = *(long *)(lVar1 + 0x28);
              if (*(long *)(lVar1 + 0x28) == 0) {
                lVar11 = *(long *)(lVar1 + 0x20);
                if (lVar11 == 0) goto LAB_00404309;
                puVar7 = (undefined8 *)(lVar1 + 0x20);
                lVar5 = lVar11;
              }
              do {
                do {
                  lVar11 = lVar5;
                  puVar9 = puVar7;
                  puVar7 = (undefined8 *)(lVar11 + 0x28);
                  lVar5 = *(long *)(lVar11 + 0x28);
                } while (*(long *)(lVar11 + 0x28) != 0);
                puVar7 = (undefined8 *)(lVar11 + 0x20);
                lVar5 = *(long *)(lVar11 + 0x20);
              } while (*(long *)(lVar11 + 0x20) != 0);
              *puVar9 = 0;
            }
            else {
              lVar5 = *(long *)(lVar1 + 0x10);
              *(long *)(lVar5 + 0x18) = lVar11;
              *(long *)(lVar11 + 0x10) = lVar5;
            }
LAB_00404309:
            if (lVar4 != 0) {
              uVar3 = *(uint *)(lVar1 + 0x38);
              if (*(long *)(param_1 + (ulong)uVar3 * 2 + 0x96) == lVar1) {
                *(long *)(param_1 + (ulong)uVar3 * 2 + 0x96) = lVar11;
                if (lVar11 == 0) {
                  bVar6 = (byte)uVar3 & 0x1f;
                  param_1[1] = param_1[1] & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
                }
                else {
LAB_0040432e:
                  lVar5 = *(long *)(lVar1 + 0x20);
                  *(long *)(lVar11 + 0x30) = lVar4;
                  if (lVar5 != 0) {
                    *(long *)(lVar11 + 0x20) = lVar5;
                    *(long *)(lVar5 + 0x30) = lVar11;
                  }
                  lVar1 = *(long *)(lVar1 + 0x28);
                  if (lVar1 != 0) {
                    *(long *)(lVar11 + 0x28) = lVar1;
                    *(long *)(lVar1 + 0x30) = lVar11;
                  }
                }
              }
              else {
                if (*(long *)(lVar4 + 0x20) == lVar1) {
                  *(long *)(lVar4 + 0x20) = lVar11;
                }
                else {
                  *(long *)(lVar4 + 0x28) = lVar11;
                }
                if (lVar11 != 0) goto LAB_0040432e;
              }
            }
          }
          if (uVar10 < 0x20) {
            param_2[1] = uVar13 & 1 | uVar12 | 2;
            puVar2 = (ulong *)((long)param_2 + uVar12 + 8);
            *puVar2 = *puVar2 | 1;
            goto LAB_004043c9;
          }
          param_2[1] = uVar13 & 1 | param_3 | 2;
          *(ulong *)((long)param_2 + param_3 + 8) = uVar10 | 3;
          puVar2 = (ulong *)((long)param_2 + uVar12 + 8);
          *puVar2 = *puVar2 | 1;
          goto LAB_004043c1;
        }
      }
    }
  }
  param_2 = (long *)0x0;
LAB_004043c9:
  return CONCAT88(param_5,param_2);
}



long FUN_004043d8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uStack40;
  undefined8 local_20;
  
  if (param_1 == 0) {
    lVar1 = FUN_00402b64(param_2,uStack40,param_3,param_4,local_20);
    return lVar1;
  }
  if (param_2 < 0xffffffffffffff80) {
    if (param_2 != 0) {
      uVar2 = 0x20;
      if (0xe < param_2) {
        uVar2 = param_2 + 0x1f & 0xfffffffffffffff0;
      }
      lVar1 = FUN_00404049(&DAT_004420a0,param_1 + -0x10,uVar2,1);
      if (lVar1 != 0) {
        return lVar1 + 0x10;
      }
      lVar1 = FUN_00402b64(param_2);
      if (lVar1 == 0) {
        return 0;
      }
      uVar2 = (*(ulong *)(param_1 + -8) & 0xfffffffffffffff8) - 0x10;
      if (param_2 < uVar2) {
        uVar2 = param_2;
      }
      FUN_00404f70(lVar1,param_1,uVar2);
      FUN_00403ae8(param_1);
      return lVar1;
    }
    FUN_00403ae8();
  }
  else {
    FUN_004018e7();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00404491(void)

{
  uint uVar1;
  ulong uVar2;
  
  if (DAT_00442460 == 0) {
    uVar1 = 0x10000;
    if (0xffff < DAT_00443c68) {
      uVar1 = DAT_00443c68;
    }
    uVar2 = (ulong)uVar1;
    if ((uVar2 - 1 & uVar2) != 0) {
      uVar2 = FUN_00401000();
    }
    _DAT_00442468 = 0x1000;
    _DAT_00442478 = 0x40000;
    DAT_00442480 = 0xa00000;
    _DAT_00442488 = 5;
    _DAT_00442410 = 5;
    DAT_00442460 = _DAT_00440000 & 0xfffffffffffffff8 | 8;
    DAT_00442470 = uVar2;
  }
  return;
}



void FUN_00404518(void)

{
  FUN_0040481d();
  return;
}



void FUN_0040452c(void)

{
  FUN_00404ac1();
  return;
}



undefined8 FUN_00404540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  
  if (DAT_004424a0 == (uint *)0x0) {
    DAT_004424a0 = &DAT_004424a8;
  }
  puVar2 = DAT_004424a0;
  if (*DAT_004424a0 == 0xffffffff) {
    puVar4 = (uint *)FUN_00402296(1,0x310);
    if (puVar4 == (uint *)0x0) {
      uVar5 = FUN_004018e7();
      return uVar5;
    }
    *(uint **)(puVar4 + 2) = puVar2;
    DAT_004424a0 = puVar4;
  }
  puVar2 = DAT_004424a0;
  uVar3 = ~*DAT_004424a0;
  uVar1 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  *DAT_004424a0 = *DAT_004424a0 | 1 << (uVar1 & 0x1f);
  *(undefined8 *)(puVar2 + (ulong)uVar1 * 6 + 4) = param_1;
  *(undefined8 *)(puVar2 + (ulong)uVar1 * 6 + 6) = param_2;
  *(undefined8 *)(puVar2 + (ulong)uVar1 * 6 + 8) = param_3;
  return 0;
}



undefined8 FUN_004045d5(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  puVar1 = DAT_004424a0;
  puVar2 = DAT_004424a0;
joined_r0x004045f1:
  do {
    DAT_004424a0 = puVar2;
    if (puVar1 == (uint *)0x0) {
      return param_3;
    }
    uVar3 = *puVar1;
    do {
      do {
        if (uVar3 == 0) {
          puVar1 = *(uint **)(puVar1 + 2);
          puVar2 = DAT_004424a0;
          if ((param_1 == 0) && (puVar2 = puVar1, puVar1 != (uint *)0x0)) {
            FUN_0040229c();
          }
          goto joined_r0x004045f1;
        }
        uVar5 = 0;
        if (uVar3 != 0) {
          for (; (uVar3 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        uVar4 = (ulong)uVar5;
        uVar5 = ~(1 << ((byte)uVar5 & 0x1f));
        uVar3 = uVar3 & uVar5;
      } while ((param_1 != 0) && (*(long *)(puVar1 + uVar4 * 6 + 8) != param_1));
      *puVar1 = *puVar1 & uVar5;
    } while (*(code **)(puVar1 + uVar4 * 6 + 4) == (code *)0x0);
    (**(code **)(puVar1 + uVar4 * 6 + 4))(*(undefined8 *)(puVar1 + uVar4 * 6 + 6));
    puVar1 = DAT_004424a0;
    puVar2 = DAT_004424a0;
  } while( true );
}



undefined8 FUN_0040466a(long *param_1,ulong *param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar4 = 0;
  FUN_004047b0(*param_1);
  cVar2 = FUN_004047b0(*param_1);
  if (cVar2 != '\0') {
    lVar4 = *param_1;
  }
  uVar1 = *param_2;
  if (*param_1 == 0) {
    uVar8 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(param_3),0);
    uVar7 = 4;
    if (3 < uVar8) {
      uVar7 = uVar8;
    }
  }
  else {
    uVar7 = (uVar1 >> 1) + uVar1;
  }
  if (uVar1 == 0) {
    uVar8 = 0;
LAB_00404700:
    uVar5 = uVar7 + 1 + param_4;
    if (uVar5 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = param_3 * uVar5;
      if ((((param_3 | uVar5) & 0xffffffffffff0000) != 0) &&
         (uVar6 = uVar9 % uVar5, param_3 != uVar9 / uVar5)) goto LAB_0040479a;
    }
    lVar3 = FUN_004022a2(lVar4,uVar9 + 0x1f & 0xffffffffffffffe0);
    if (lVar3 != 0) {
      if ((lVar4 == 0) && (*param_1 != 0)) {
        lVar3 = FUN_00404f70(lVar3,*param_1,uVar8);
      }
      lVar4 = FUN_004050b2(lVar3 + uVar8,0,uVar9 - uVar8);
      *param_2 = uVar5;
      *param_1 = lVar4;
      return 1;
    }
    FUN_004018e7();
  }
  else {
    uVar8 = param_3 * uVar1;
    if ((((param_3 | uVar1) & 0xffffffffffff0000) == 0) ||
       (uVar6 = uVar8 % uVar1, param_3 == uVar8 / uVar1)) goto LAB_00404700;
LAB_0040479a:
    FUN_00401907(uVar1,uVar7,uVar6);
  }
  return 0;
}



undefined  [16] FUN_004047b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  
  if (0xfffffffffff < param_1 - 0x600000000000U) {
    iVar4 = (int)((ulong)param_1 >> 0x10);
    lVar2 = FUN_00404c04(param_1 >> 0x10 & 0xffffffff,&DAT_004427c8,DAT_004427c0);
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar1 = 1;
      if (*(int *)(&DAT_004427c0 + lVar2) != iVar4) {
        uVar1 = (uint)(*(int *)(&DAT_004427cc + (lVar2 + -1) * 8) == iVar4);
      }
      uVar3 = (ulong)uVar1;
    }
    return CONCAT88(param_4,uVar3);
  }
  return ZEXT816(0xfffffffffff) << 0x40;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0040481d(undefined8 param_1)

{
  FUN_00404843(0,param_1,3,(uint)DAT_00440728 | _DAT_00440730 | 2,0xffffffff,0);
  return;
}



long FUN_00404843(ulong param_1,ulong param_2,undefined4 param_3,uint param_4,int param_5,
                 ulong param_6)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  
  uVar9 = DAT_00440668 & 4;
  if ((uVar9 == 0) || (param_5 == -1)) {
    param_2 = param_2 + 0xffff & 0xffffffffffff0000;
  }
  if ((param_4 & 0x10) == 0) {
    if ((param_1 == 0) && (param_1 = 0x200000000000, DAT_004427c0 != 0)) {
      uVar2 = DAT_004427c0;
      do {
        uVar2 = uVar2 - 1;
        lVar6 = (long)(*(int *)(&DAT_004427cc + uVar2 * 8) + 1);
        if ((lVar6 + (param_2 >> 0x10) < 0x30000001) &&
           (0x1ffffffe < *(int *)(&DAT_004427cc + uVar2 * 8))) {
          param_1 = lVar6 << 0x10;
          goto LAB_004048f9;
        }
      } while (uVar2 != 0);
      param_1 = (long)(*(int *)((long)&DAT_004427c0 + DAT_004427c0 * 8 + 4) + 1) << 0x10;
    }
LAB_004048f9:
    param_1 = param_1 & 0xffffffffffff0000;
  }
  if (DAT_004427c0 == 300) {
    lVar6 = FUN_004018e7();
    return lVar6;
  }
  if ((param_4 & 0x10) == 0) {
    FUN_00404c04((int)(param_2 + 0xffff >> 0x10) + -1 + (int)(param_1 >> 0x10));
  }
  else {
    FUN_0040452c(param_1);
  }
  if (uVar9 == 0) {
    lVar3 = FUN_00404c24(param_1,param_2,param_3,param_4 | 0x10,(long)param_5,param_6);
  }
  else {
    uVar1 = FUN_0040524a(param_3);
    uVar7 = 0xffffffffffffffff;
    if (param_5 != -1) {
      uVar7 = *(undefined8 *)((long)param_5 * 0x18 + DAT_00443ab0);
    }
    lVar6 = FUN_00401e9a(uVar7,&DAT_00405320,uVar1,param_2 >> 0x20,param_2 & 0xffffffff,0,
                         0xffffffffffffffff);
    if (lVar6 != 0) {
      uVar1 = FUN_00404c31(param_3,param_4 | 0x10);
      lVar3 = FUN_00401edf(lVar6,uVar1,(long)param_6 >> 0x20,param_6 & 0xffffffff,param_2,param_1);
      if (lVar3 != 0) goto LAB_00404a03;
      FUN_00401e81(lVar6);
    }
    lVar3 = FUN_004052d6();
  }
  lVar6 = -1;
LAB_00404a03:
  if (lVar3 != -1) {
    iVar8 = (int)((ulong)lVar3 >> 0x10);
    uVar2 = FUN_00404c04(lVar3 >> 0x10 & 0xffffffff,&DAT_004427c8,DAT_004427c0);
    if (uVar2 < DAT_004427c0) {
      lVar5 = (uVar2 + 2) * 8;
      lVar4 = FUN_00405092(&DAT_004427c0 + uVar2 + 2,&DAT_004427b8 + lVar5,
                           (DAT_004427c0 - uVar2) * 8);
      uVar2 = FUN_00405092(&DAT_00443120 + lVar5,&DAT_00443118 + lVar5,(DAT_004427c0 - lVar4) * 8);
    }
    DAT_004427c0 = DAT_004427c0 + 1;
    *(int *)(&DAT_004427c8 + uVar2 * 8) = iVar8;
    *(long *)(&DAT_00443128 + uVar2 * 8) = lVar6;
    *(int *)(&DAT_004427cc + uVar2 * 8) = (int)(param_2 + 0xffff >> 0x10) + -1 + iVar8;
  }
  return lVar3;
}



void FUN_00404abb(void)

{
  FUN_004018f7();
  return;
}



undefined  [16] FUN_00404ac1(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  
  if ((param_1 - 1U < 0xfffffffffffffffe) && (param_2 != 0)) {
    iVar7 = (int)((ulong)param_1 >> 0x10);
    uVar9 = 0;
    uVar4 = FUN_00404c04(iVar7 + -1 + (int)((ulong)(param_2 + 0xffff) >> 0x10),&DAT_004427c8,
                         DAT_004427c0);
    uVar5 = uVar4;
    while (uVar5 != 0) {
      uVar1 = uVar5 - 1;
      if (*(int *)(&DAT_004427cc + uVar1 * 8) < iVar7) break;
      uVar5 = uVar1;
      if (((byte)DAT_00440668 & 4) == 0) {
        uVar2 = FUN_00404dd0();
        uVar9 = uVar9 | uVar2;
      }
      else {
        iVar3 = FUN_00401ef5((long)*(int *)(&DAT_004427c8 + uVar1 * 8) << 0x10);
        if (iVar3 == 0) {
          uVar9 = 0xffffffff;
        }
        iVar3 = FUN_00401e81(*(undefined8 *)(&DAT_00443128 + uVar1 * 8));
        if (iVar3 == 0) {
          uVar9 = 0xffffffff;
        }
      }
    }
    if (uVar5 < uVar4) {
      if (uVar4 < DAT_004427c0) {
        lVar6 = (uVar5 + 1) * 8;
        lVar8 = (uVar4 + 1) * 8;
        FUN_00405092(&DAT_004427c0 + uVar5 + 1,&DAT_004427c0 + uVar4 + 1,(DAT_004427c0 - uVar4) * 8)
        ;
        uVar5 = FUN_00405092(&DAT_00443120 + lVar6,&DAT_00443120 + lVar8,(DAT_004427c0 - uVar4) * 8)
        ;
      }
      DAT_004427c0 = (uVar5 + DAT_004427c0) - uVar4;
    }
  }
  else {
    uVar9 = 0;
  }
  return CONCAT88(param_4,(ulong)uVar9);
}



long FUN_00404c04(int param_1,long param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  while (iVar3 = param_3, iVar2 < iVar3) {
    param_3 = iVar3 + iVar2 >> 1;
    piVar1 = (int *)(param_2 + (long)param_3 * 8);
    if (*piVar1 == param_1 || *piVar1 < param_1) {
      iVar2 = param_3 + 1;
      param_3 = iVar3;
    }
  }
  return (long)iVar2;
}



void FUN_00404c24(void)

{
  FUN_00404dc0();
  return;
}



uint FUN_00404c31(uint param_1,uint param_2)

{
  return (int)param_2 >> 1 & 1U | param_1 & 2 | (int)param_2 >> 2 & 0x20000000U |
         (param_2 & 0x4000000) << 5 | param_1 * 4 & 4 | (param_1 & 4) << 3;
}



bool FUN_00404c6c(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(int *)((long)param_1 * 0x18 + DAT_00443ab0 + 0x10) == param_2;
  }
  return bVar1;
}



long FUN_00404c87(int param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 local_38;
  undefined8 local_30;
  
  if (param_1 == -1) {
    iVar2 = FUN_004018d7();
    lVar3 = (long)iVar2;
  }
  else {
    cVar1 = FUN_00404c6c(param_1,5);
    local_38 = param_2;
    local_30 = param_3;
    if (cVar1 == '\0') {
      if (((byte)DAT_00440668 & 4) == 0) {
        lVar3 = FUN_00404de0(param_1,param_2,param_3);
      }
      else {
        cVar1 = FUN_00404c6c((long)param_1 & 0xffffffff,2);
        if (cVar1 == '\0') {
          cVar1 = FUN_00404c6c(param_1,1);
          if ((cVar1 == '\0') && (cVar1 = FUN_00404c6c(param_1,4), cVar1 == '\0')) {
            lVar3 = FUN_004018c7();
            return lVar3;
          }
          lVar3 = FUN_00401dba((long)param_1 * 0x18 + DAT_00443ab0,&local_38,1,0xffffffffffffffff);
        }
        else {
          lVar3 = (*(code *)0x0)((long)param_1 * 0x18 + DAT_00443ab0,&local_38,1,0,0,0);
        }
      }
    }
    else {
      lVar3 = (*(code *)0x0)(*(undefined8 *)((long)param_1 * 0x18 + DAT_00443ab0),&local_38,1,
                             0xffffffffffffffff);
    }
  }
  return lVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00404db0(void)

{
                    // WARNING: Could not recover jumptable at 0x00404dba. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_00440670)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00404dc0(void)

{
                    // WARNING: Could not recover jumptable at 0x00404dca. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_00440670)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00404dd0(void)

{
                    // WARNING: Could not recover jumptable at 0x00404dda. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_00440670)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00404de0(void)

{
                    // WARNING: Could not recover jumptable at 0x00404dea. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_00440670)();
  return;
}



void FUN_00404e4d(void)

{
  FUN_00404e8f();
  return;
}



undefined  [16] FUN_00404e8f(long param_1,uint *param_2,undefined8 param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar5;
  ulong uVar4;
  
  uVar4 = 0;
  do {
    iVar3 = (int)uVar4;
    uVar5 = (ulong)(iVar3 + 1);
    uVar1 = *(ushort *)(param_1 + uVar4 * 2);
    uVar4 = uVar5;
  } while ((uVar1 & 0xfc00) == 0xdc00);
  if ((uVar1 & 0xfc00) == 0xd800) {
    uVar2 = *(ushort *)(param_1 + uVar5 * 2);
    if ((uVar2 & 0xfc00) == 0xdc00) {
      *param_2 = (uint)uVar1 * 0x400 + -0x35fdc00 + (uint)uVar2;
      uVar5 = (ulong)(iVar3 + 2);
    }
    else {
      *param_2 = 0xfffd;
      uVar5 = 0xffffffff;
    }
  }
  else {
    *param_2 = (uint)uVar1;
  }
  return CONCAT88(param_3,uVar5);
}



void FUN_00404f70(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = 0x20;
  if (param_3 < 0x20) {
    uVar1 = param_3;
  }
                    // WARNING: Could not emulate address calculation at 0x00404f7d
                    // WARNING: Treating indirect jump as call
  (**(code **)(&DAT_00440448 + uVar1 * 8))();
  return;
}



void FUN_00405092(undefined *param_1,undefined *param_2,long param_3)

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



void FUN_004050b2(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = 0x20;
  if (param_3 < 0x20) {
    uVar1 = param_3;
  }
                    // WARNING: Could not emulate address calculation at 0x004050c9
                    // WARNING: Treating indirect jump as call
  (**(code **)(&DAT_00440550 + uVar1 * 8))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00405211(void)

{
  _DAT_00443c74 = _DAT_00443c74 | 4;
  if (((byte)DAT_00440668 & 4) == 0) {
    syscall();
    InterruptDescriptorTableRegister(0);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  do {
    (*DAT_00406038)();
  } while( true );
}



uint FUN_0040524a(uint param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_1 & 7) == 7) {
    uVar1 = 0x40;
    if (((param_2 & 1) == 0) && (uVar1 = 0x40, DAT_00440728 != ((long)(int)param_2 & DAT_00440728)))
    {
      uVar1 = 0x80;
    }
  }
  else if ((param_1 & 3) == 3) {
    uVar1 = 4;
    if ((param_2 & 1) == 0) {
      uVar1 = (uint)(DAT_00440728 != ((long)(int)param_2 & DAT_00440728)) * 4 + 4;
    }
  }
  else {
    uVar1 = 0x20;
    if (((param_1 & 5) != 5) && (uVar1 = 0x10, (param_1 & 4) == 0)) {
      uVar1 = (param_1 & 1) + 1;
    }
  }
  return (param_2 | param_1) & 0xdd000000 | uVar1;
}



undefined8 FUN_004052d6(void)

{
  undefined8 uVar1;
  
  if (((byte)DAT_00440668 & 4) != 0) {
    DAT_00443c70 = FUN_00401ec9();
    return 0xffffffffffffffff;
  }
  uVar1 = FUN_004018f7();
  return uVar1;
}


