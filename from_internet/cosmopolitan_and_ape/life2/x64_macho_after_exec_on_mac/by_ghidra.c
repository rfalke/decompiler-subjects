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
      else {
        if (bVar4 == 0xd) {
          *(ulong *)(uVar8 - 0x10) = uVar3;
          param_2 = (long)((ulong)pbVar11 & 0xffffffff) / (long)iVar5 & 0xffffffff;
          pbVar11 = (byte *)(ulong)(uVar7 - (int)((long)((ulong)pbVar11 & 0xffffffff) % (long)iVar5)
                                   );
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
    if (uVar3 == 0x6000) break;
    *(undefined2 *)(in_FS_OFFSET + (int)(((uint)unaff_RBX & 0xffff0000) + param_3)) =
         *(undefined2 *)(in_FS_OFFSET + (int)(CONCAT22(uVar5,0x4000) + param_3));
  }
  uVar4 = unaff_RBX & 0xffffffffffff0000 | 0x6000;
  uVar2 = *(uint *)(param_2 & 0xffffffff00000000 | (ulong)CONCAT22(uVar5,0x4000));
  func_0x299c0123(0xb80000,0x4000,param_3,
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
  
  _DAT_00437fb4 = _DAT_00437fb4 | 2;
  if (((byte)DAT_004362b8 & 4) == 0) {
    param_3 = 0;
    syscall();
    syscall();
    param_2 = 6;
    syscall();
  }
  puVar4 = (ulong *)&DAT_00000086;
  FUN_004046c1(0x86,param_2,param_3);
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
  code **ppcVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  int in_stack_00000000;
  
  DAT_004362b8._0_1_ = 8;
  puVar5 = &DAT_00405010;
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
  _DAT_00437fb4 = _DAT_00437fb4 | 1;
  for (ppcVar3 = (code **)&DAT_00405008; ppcVar3 != (code **)&DAT_00405008; ppcVar3 = ppcVar3 + 1) {
    (**ppcVar3)();
  }
  FUN_00401460((long)in_stack_00000000,&stack0x00000008,
               &stack0x00000018 + (long)in_stack_00000000 * 8);
  FUN_0040153d();
  pcVar2 = DAT_00405078;
  DAT_00437de0 = 3;
  DAT_00437df0 = &DAT_00437df8;
  DAT_00437de8 = 0x10;
  DAT_00437e08 = 1;
  DAT_00437e20 = DAT_00437e08;
  DAT_00437e38 = DAT_00437e08;
  DAT_00437df8 = (*DAT_00405078)();
  DAT_00437e10 = (*pcVar2)();
  DAT_00437e28 = (*pcVar2)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004012f0(void)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte bVar10;
  ulong extraout_RDX;
  ulong uVar11;
  long **pplVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  long **pplVar17;
  long **pplVar18;
  ulong *puVar19;
  undefined8 *puVar20;
  code **ppcVar21;
  long **unaff_R13;
  long *unaff_R15;
  byte bVar22;
  long *aplStack96 [8];
  undefined8 uStack32;
  undefined8 uStack24;
  
  bVar22 = 0;
  puVar14 = &DAT_00404d28;
  uVar8 = rdtsc();
  DAT_00436004 = (undefined4)((ulong)uVar8 >> 0x20);
  DAT_00436000 = (undefined4)uVar8;
  pplVar17 = (long **)&DAT_00436008;
  uStack24 = 0;
  uStack32 = 0x16;
  aplStack96[7] = (long *)0xffffffff80000007;
  aplStack96[6] = (long *)0xffffffff80000001;
  aplStack96[5] = (long *)0x7;
  aplStack96[4] = (long *)0x2;
  pplVar12 = aplStack96 + 3;
  aplStack96[3] = (long *)0x1;
  uVar8 = 0;
  do {
    iVar7 = (int)uVar8;
    if (iVar7 == 0) {
      puVar2 = (undefined4 *)cpuid_basic_info(0);
    }
    else {
      if (iVar7 == 1) {
        puVar2 = (undefined4 *)cpuid_Version_info(1);
      }
      else {
        if (iVar7 == 2) {
          puVar2 = (undefined4 *)cpuid_cache_tlb_info(2);
        }
        else {
          if (iVar7 == 3) {
            puVar2 = (undefined4 *)cpuid_serial_info(3);
          }
          else {
            if (iVar7 == 4) {
              puVar2 = (undefined4 *)cpuid_Deterministic_Cache_Parameters_info(4);
            }
            else {
              if (iVar7 == 5) {
                puVar2 = (undefined4 *)cpuid_MONITOR_MWAIT_Features_info(5);
              }
              else {
                if (iVar7 == 6) {
                  puVar2 = (undefined4 *)cpuid_Thermal_Power_Management_info(6);
                }
                else {
                  if (iVar7 == 7) {
                    puVar2 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
                  }
                  else {
                    if (iVar7 == 9) {
                      puVar2 = (undefined4 *)cpuid_Direct_Cache_Access_info(9);
                    }
                    else {
                      if (iVar7 == 10) {
                        puVar2 = (undefined4 *)cpuid_Architectural_Performance_Monitoring_info(10);
                      }
                      else {
                        if (iVar7 == 0xb) {
                          puVar2 = (undefined4 *)cpuid_Extended_Topology_info(0xb);
                        }
                        else {
                          if (iVar7 == 0xd) {
                            puVar2 = (undefined4 *)cpuid_Processor_Extended_States_info(0xd);
                          }
                          else {
                            if (iVar7 == 0xf) {
                              puVar2 = (undefined4 *)cpuid_Quality_of_Service_info(0xf);
                            }
                            else {
                              if (iVar7 == -0x7ffffffe) {
                                puVar2 = (undefined4 *)cpuid_brand_part1_info(0x80000002);
                              }
                              else {
                                if (iVar7 == -0x7ffffffd) {
                                  puVar2 = (undefined4 *)cpuid_brand_part2_info(0x80000003);
                                }
                                else {
                                  if (iVar7 == -0x7ffffffc) {
                                    puVar2 = (undefined4 *)cpuid_brand_part3_info(0x80000004);
                                  }
                                  else {
                                    puVar2 = (undefined4 *)cpuid(iVar7);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar3 = puVar2[1];
    uVar4 = puVar2[2];
    uVar5 = puVar2[3];
    *(undefined4 *)pplVar17 = *puVar2;
    *(undefined4 *)((long)pplVar17 + 4) = uVar3;
    *(undefined4 *)(pplVar17 + 1) = uVar5;
    *(undefined4 *)((long)pplVar17 + 0xc) = uVar4;
    puVar13 = pplVar12;
    pplVar18 = pplVar17;
    do {
      pplVar17 = pplVar18 + 2;
      uVar8 = *puVar13;
      pplVar12 = (long **)(puVar13 + 1);
      if ((int)uVar8 == 0) {
        uVar8 = puVar13[1];
        pplVar18 = pplVar18 + 3;
        *pplVar17 = unaff_R15;
        puVar13[1] = 0x401344;
        FUN_004014ba(pplVar18,&DAT_00404d28,uVar5,uVar3);
        pplVar17 = pplVar18 + (ulong)bVar22 * -2 + 1;
        *pplVar18 = (long *)0xffffffffffffffff;
        *pplVar17 = (long *)0xffffffffffffffff;
        pplVar18 = pplVar17 + (ulong)bVar22 * -2 + 1 + (ulong)bVar22 * -2 + 1;
        pplVar17[(ulong)bVar22 * -2 + 1] = (long *)&LAB_0040462e;
        puVar13[1] = 0x20;
        puVar13[1] = 0x401367;
        FUN_0040150f();
        puVar13[1] = 0x20;
        puVar13[1] = 0x40137b;
        FUN_0040150f();
        *pplVar18 = *unaff_R13;
        pplVar17 = pplVar18 + (ulong)bVar22 * -2 + 1 + (ulong)bVar22 * -2 + 1;
        pplVar18[(ulong)bVar22 * -2 + 1] = (long *)&LAB_00404690;
        puVar13[1] = uVar8;
        *puVar13 = puVar14;
        if ((*(byte *)pplVar17 & 8) == 0) {
          if ((*(byte *)pplVar17 & 0x20) == 0) {
            if ((*(byte *)pplVar17 & 4) == 0) {
              if (*unaff_R15 == 0) {
                puVar13[-1] = 0x2a;
                puVar13[-2] = 0x10;
                pbVar15 = &DAT_00404dc9;
              }
              else {
                puVar13[-1] = 0;
                puVar13[-2] = 1;
                pbVar15 = &DAT_00404da2;
              }
            }
            else {
              puVar13[-1] = 0x22;
              puVar13[-2] = 4;
              pbVar15 = &DAT_00404df1;
            }
          }
          else {
            puVar13[-1] = 0x30;
            puVar13[-2] = 0x20;
            pbVar15 = &DAT_00404d79;
          }
        }
        else {
          puVar13[-1] = 0x45;
          puVar13[-2] = 8;
          pbVar15 = &DAT_00404e30;
        }
        *pplVar17 = (long *)puVar13[-2];
        pplVar17[(ulong)bVar22 * -2 + 1] = (long *)(&DAT_00404310 + puVar13[-1]);
        puVar13[-1] = pplVar17 + (ulong)bVar22 * -2 + 1 + (ulong)bVar22 * -2 + 1;
        uVar11 = extraout_RDX;
        for (puVar19 = &DAT_004362e8; puVar19 < &DAT_004363d8;
            puVar19 = puVar19 + (ulong)bVar22 * -2 + 1) {
          bVar10 = 0;
          uVar11 = 0;
          pbVar16 = pbVar15;
          do {
            pbVar15 = pbVar16 + (ulong)bVar22 * -2 + 1;
            bVar1 = *pbVar16;
            bVar6 = bVar10 & 0x3f;
            bVar10 = bVar10 + 7;
            uVar11 = uVar11 | (ulong)(bVar1 & 0x7f) << bVar6;
            pbVar16 = pbVar15;
          } while ((char)bVar1 < '\0');
          if ((bVar1 & 0x40) != 0) {
            uVar11 = uVar11 | -1 << (bVar10 & 0x3f);
          }
          uVar9 = uVar11;
          if (*puVar19 != 0) {
            uVar9 = *puVar19;
          }
          *puVar19 = uVar9;
        }
        puVar20 = (undefined8 *)puVar13[-1];
        puVar13[-3] = 0x401440;
        (*_DAT_00405080)(puVar20,*puVar13,uVar11,&DAT_00437f80);
        ppcVar21 = (code **)(puVar20 + (ulong)bVar22 * -2 + 1);
        *puVar20 = &LAB_00403817;
        puVar13[1] = 0x401450;
        FUN_00401466();
        *ppcVar21 = FUN_00403312;
        ppcVar21[(ulong)bVar22 * -2 + 1] = FUN_00403c02;
        return;
      }
      puVar13 = puVar13 + 1;
      pplVar18 = pplVar17;
    } while ((byte)DAT_00436008 < (byte)uVar8);
  } while( true );
}



undefined8 FUN_00401460(void)

{
  return 0x2a;
}



void FUN_00401466(void)

{
  FUN_00403cbb();
  return;
}



void FUN_004014ba(void)

{
  code *pcVar1;
  
  pcVar1 = DAT_00405078;
  DAT_00437de0 = 3;
  DAT_00437df0 = &DAT_00437df8;
  DAT_00437de8 = 0x10;
  DAT_00437e08 = 1;
  DAT_00437e20 = DAT_00437e08;
  DAT_00437e38 = DAT_00437e08;
  DAT_00437df8 = (*DAT_00405078)();
  DAT_00437e10 = (*pcVar1)();
  DAT_00437e28 = (*pcVar1)();
  return;
}



undefined8 FUN_0040150f(long *param_1,undefined8 *param_2,long param_3,int param_4)

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
                            (ulong)(byte)((DAT_00436038._5_1_ & 2) != 0 | !in_ZF << 1)) + param_3;
  return *puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_0040153d(undefined4 param_1)

{
  FUN_004041e6(0);
  FUN_004046c1(param_1);
  _DAT_00437fb0 = DAT_00436340;
  return 0xffffffffffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_00401556(void)

{
  _DAT_00437fb0 = DAT_00436340;
  return 0xffffffffffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_00401566(void)

{
  _DAT_00437fb0 = DAT_00436348;
  return 0xffffffffffffffff;
}



void FUN_00401a19(void)

{
  (*DAT_00405010)();
  return;
}



void FUN_00401a32(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_00405018)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00401a48(void)

{
  (*_DAT_00405070)();
  return;
}



void FUN_00401a5e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_00405088)(param_1,param_2,param_2,param_1,param_3,param_4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00401a74(void)

{
  (*_DAT_00405098)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00401ac6(void)

{
                    // WARNING: Could not recover jumptable at 0x00401ac6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_004362c8)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00401acc(void)

{
                    // WARNING: Could not recover jumptable at 0x00401acc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_004362d0)();
  return;
}



void FUN_00401ad2(long param_1,ulong param_2,long param_3)

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
  uVar2 = DAT_004367c0;
  *(undefined8 *)(param_2 + 8 + param_3) = 0x50;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  return;
}



ulong FUN_00401b19(long param_1)

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
     (uVar17 = *(uint *)(puVar2 + 3) & 8, bVar16 = (byte)uVar17, uVar17 != 0)) goto LAB_00401dbb;
  uVar3 = *puVar2;
  uVar17 = (uint)uVar3;
  if ((uVar3 & 0xf) != 0) {
    uVar17 = -(uVar17 + 0x10);
  }
  lVar1 = uVar3 + (uVar17 & 0xf);
  uVar18 = 0;
  uVar4 = *(ulong *)(lVar1 + 8);
  if (((uint)uVar4 & 3) != 1) goto LAB_00401dbb;
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
          if (lVar9 == 0) goto LAB_00401c25;
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
LAB_00401c25:
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
LAB_00401c49:
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
          if (lVar9 != 0) goto LAB_00401c49;
        }
      }
    }
    iVar8 = FUN_00403d56(uVar3,uVar18);
    if (iVar8 == 0) {
      *(long *)(param_1 + 0x358) = *(long *)(param_1 + 0x358) - uVar18;
      *(ulong *)(param_1 + 0x388) = uVar5;
      goto LAB_00401dbb;
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
          goto LAB_00401db8;
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
LAB_00401db8:
  uVar18 = 0;
LAB_00401dbb:
  *(undefined8 *)(param_1 + 0x38) = 0x80;
  return uVar18;
}



void FUN_00401f12(uint *param_1,ulong *param_2,ulong param_3)

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
      iVar3 = FUN_00403d56(param_2,lVar8);
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
            if (puVar4 == (ulong *)0x0) goto LAB_00401ff9;
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
LAB_00401ff9:
        if (uVar15 != 0) {
          uVar10 = *(uint *)(param_2 + 7);
          if (*(ulong **)(param_1 + (ulong)uVar10 * 2 + 0x96) == param_2) {
            *(ulong **)(param_1 + (ulong)uVar10 * 2 + 0x96) = puVar4;
            if (puVar4 == (ulong *)0x0) {
              bVar7 = (byte)uVar10 & 0x1f;
              param_1[1] = param_1[1] & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
            }
            else {
LAB_00402022:
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
            if (puVar4 != (ulong *)0x0) goto LAB_00402022;
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
    goto LAB_0040224b;
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
        if (puVar5 == (ulong *)0x0) goto LAB_004021a7;
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
LAB_004021a7:
    if (uVar15 != 0) {
      uVar10 = *(uint *)(puVar12 + 7);
      if (*(ulong **)(param_1 + (ulong)uVar10 * 2 + 0x96) == puVar12) {
        *(ulong **)(param_1 + (ulong)uVar10 * 2 + 0x96) = puVar5;
        if (puVar5 == (ulong *)0x0) {
          bVar7 = (byte)uVar10 & 0x1f;
          param_1[1] = param_1[1] & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
        }
        else {
LAB_004021cc:
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
        if (puVar5 != (ulong *)0x0) goto LAB_004021cc;
      }
    }
  }
  param_2[1] = param_3 | 1;
  *(ulong *)((long)param_2 + param_3) = param_3;
  if (param_2 == puVar4) {
    *(ulong *)(param_1 + 2) = param_3;
    return;
  }
LAB_0040224b:
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

undefined  [16] FUN_0040238e(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  
  puVar18 = DAT_00436400;
  uVar12 = DAT_004363e8;
  uVar23 = DAT_004363e4;
  uVar9 = DAT_004363e0;
  bVar8 = 0;
  if (param_1 < 0xe1) {
    uVar17 = 0x20;
    if (0xe < param_1) {
      uVar17 = param_1 + 0x1f & 0xfffffffffffffff0;
    }
    bVar26 = (byte)(uVar17 >> 3);
    uVar3 = DAT_004363e0 >> (bVar26 & 0x1f);
    if ((uVar3 & 3) == 0) {
      if (uVar17 <= DAT_004363e8) goto LAB_00402abb;
      if (DAT_004363e0 >> (bVar26 & 0x1f) == 0) {
        if (DAT_004363e4 == 0) goto LAB_00402abb;
        uVar3 = 0;
        if ((-DAT_004363e4 & DAT_004363e4) != 0) {
          for (; ((-DAT_004363e4 & DAT_004363e4) >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        puVar18 = *(ulong **)(&DAT_00436638 + (ulong)uVar3 * 8);
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
            if (puVar18 == (ulong *)0x0) goto LAB_004025fb;
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
LAB_004025fb:
        if (uVar10 != 0) {
          uVar3 = *(uint *)(puVar5 + 7);
          if (*(ulong **)(&DAT_00436638 + (ulong)uVar3 * 8) == puVar5) {
            (&DAT_004363e8)[(ulong)uVar3 + 0x4a] = (ulong)puVar18;
            if (puVar18 == (ulong *)0x0) {
              DAT_004363e4 = uVar23 & ~(1 << (uVar3 & 0x1f));
            }
            else {
LAB_0040261f:
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
            if (puVar18 != (ulong *)0x0) goto LAB_0040261f;
          }
        }
        if (uVar19 < 0x20) {
          puVar5[1] = uVar17 + uVar19 | 3;
          puVar18 = (ulong *)((long)puVar5 + uVar17 + uVar19 + 8);
          *puVar18 = *puVar18 | 1;
          puVar18 = DAT_00436400;
        }
        else {
          puVar18 = (ulong *)((long)puVar5 + uVar17);
          puVar5[1] = uVar17 | 3;
          puVar18[1] = uVar19 | 1;
          *(ulong *)((long)puVar18 + uVar19) = uVar19;
          DAT_004363e8 = uVar19;
          if (uVar12 != 0) {
            uVar17 = (ulong)(uint)((int)(uVar12 >> 3) * 2);
            uVar23 = 1 << ((byte)(uVar12 >> 3) & 0x1f);
            if ((uVar9 & uVar23) == 0) {
              DAT_004363e0 = uVar9 | uVar23;
              puVar6 = &DAT_00436428 + uVar17 * 8;
            }
            else {
              puVar6 = (undefined *)(&DAT_00436438)[uVar17];
            }
            (&DAT_00436438)[uVar17] = DAT_00436400;
            *(ulong **)(puVar6 + 0x18) = DAT_00436400;
            DAT_00436400[2] = (ulong)puVar6;
            DAT_00436400[3] = (ulong)(&DAT_00436428 + uVar17 * 8);
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
        puVar5 = (ulong *)(&DAT_00436438)[uVar19];
        puVar6 = (undefined *)puVar5[2];
        if (&DAT_00436428 + uVar19 * 8 == puVar6) {
          DAT_004363e0 = DAT_004363e0 & ~(1 << ((byte)iVar22 & 0x1f));
        }
        else {
          *(undefined **)(puVar6 + 0x18) = &DAT_00436428 + uVar19 * 8;
          (&DAT_00436438)[uVar19] = puVar6;
        }
        puVar4 = (ulong *)((long)puVar5 + (ulong)uVar9);
        uVar19 = uVar9 - uVar17;
        if (uVar19 < 0x20) {
          puVar5[1] = (ulong)(uVar9 | 3);
          puVar4 = puVar4 + 1;
          *puVar4 = *puVar4 | 1;
          puVar18 = DAT_00436400;
        }
        else {
          puVar18 = (ulong *)(uVar17 + (long)puVar5);
          puVar5[1] = uVar17 | 3;
          puVar18[1] = uVar19 | 1;
          *puVar4 = uVar19;
          DAT_004363e8 = uVar19;
          if (uVar12 != 0) {
            uVar17 = (ulong)(uint)((int)(uVar12 >> 3) * 2);
            uVar9 = 1 << ((byte)(uVar12 >> 3) & 0x1f);
            if ((DAT_004363e0 & uVar9) == 0) {
              DAT_004363e0 = DAT_004363e0 | uVar9;
              puVar6 = &DAT_00436428 + uVar17 * 8;
            }
            else {
              puVar6 = (undefined *)(&DAT_00436438)[uVar17];
            }
            (&DAT_00436438)[uVar17] = DAT_00436400;
            *(ulong **)(puVar6 + 0x18) = DAT_00436400;
            DAT_00436400[2] = (ulong)puVar6;
            DAT_00436400[3] = (ulong)(&DAT_00436428 + uVar17 * 8);
          }
        }
      }
    }
    else {
      uVar9 = (int)(uVar17 >> 3) + (~uVar3 & 1);
      uVar12 = (ulong)(uVar9 * 2);
      puVar5 = (ulong *)(&DAT_00436438)[uVar12];
      puVar6 = (undefined *)puVar5[2];
      if (&DAT_00436428 + uVar12 * 8 == puVar6) {
        DAT_004363e0 = DAT_004363e0 & ~(1 << (uVar9 & 0x1f));
      }
      else {
        *(undefined **)(puVar6 + 0x18) = &DAT_00436428 + uVar12 * 8;
        (&DAT_00436438)[uVar12] = puVar6;
      }
      puVar5[1] = (ulong)(uVar9 * 8 | 3);
      puVar18 = (ulong *)((long)puVar5 + (ulong)(uVar9 * 8) + 8);
      *puVar18 = *puVar18 | 1;
      puVar18 = DAT_00436400;
    }
  }
  else {
    if (param_1 < 0xffffffffffffff80) {
      uVar17 = param_1 + 0x1f & 0xfffffffffffffff0;
      if (DAT_004363e4 != 0) {
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
        puVar4 = *(ulong **)(&DAT_00436638 + uVar19 * 8);
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
            if (puVar4 == (ulong *)0x0) goto LAB_004027e4;
            lVar15 = lVar15 * 2;
            puVar25 = puVar7;
          }
          uVar12 = 0;
          puVar7 = puVar4;
        }
LAB_004027e4:
        if (((ulong)puVar7 | (ulong)puVar5) == 0) {
          uVar9 = -2 << ((byte)uVar19 & 0x1f) & DAT_004363e4;
          if (uVar9 == 0) goto LAB_00402abb;
          uVar3 = 0;
          if ((-uVar9 & uVar9) != 0) {
            for (; ((-uVar9 & uVar9) >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
          puVar5 = (ulong *)0x0;
          puVar7 = *(ulong **)(&DAT_00436638 + (ulong)uVar3 * 8);
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
        if ((puVar5 != (ulong *)0x0) && (uVar12 < DAT_004363e8 - uVar17)) {
          puVar18 = (ulong *)puVar5[3];
          uVar19 = puVar5[6];
          if (puVar18 == puVar5) {
            puVar4 = (ulong *)puVar5[5];
            puVar7 = puVar5 + 5;
            if ((ulong *)puVar5[5] == (ulong *)0x0) {
              puVar18 = (ulong *)puVar5[4];
              if (puVar18 == (ulong *)0x0) goto LAB_004028be;
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
LAB_004028be:
          if (uVar19 != 0) {
            uVar9 = *(uint *)(puVar5 + 7);
            if (*(ulong **)(&DAT_00436638 + (ulong)uVar9 * 8) == puVar5) {
              (&DAT_004363e8)[(ulong)uVar9 + 0x4a] = (ulong)puVar18;
              if (puVar18 == (ulong *)0x0) {
                DAT_004363e4 = uVar23 & ~(1 << (uVar9 & 0x1f));
              }
              else {
LAB_004028e2:
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
              if (puVar18 != (ulong *)0x0) goto LAB_004028e2;
            }
          }
          if (uVar12 < 0x20) {
            puVar5[1] = uVar17 + uVar12 | 3;
            puVar18 = (ulong *)((long)puVar5 + uVar17 + uVar12 + 8);
            *puVar18 = *puVar18 | 1;
            puVar18 = DAT_00436400;
          }
          else {
            lVar15 = (long)puVar5 + uVar17;
            puVar5[1] = uVar17 | 3;
            *(ulong *)(lVar15 + 8) = uVar12 | 1;
            *(ulong *)(lVar15 + uVar12) = uVar12;
            uVar9 = DAT_004363e4;
            if (uVar12 < 0x100) {
              uVar17 = (ulong)(uint)((int)(uVar12 >> 3) * 2);
              uVar9 = 1 << ((byte)(uVar12 >> 3) & 0x1f);
              if ((DAT_004363e0 & uVar9) == 0) {
                DAT_004363e0 = DAT_004363e0 | uVar9;
                puVar6 = &DAT_00436428 + uVar17 * 8;
              }
              else {
                puVar6 = (undefined *)(&DAT_00436438)[uVar17];
              }
              (&DAT_00436438)[uVar17] = lVar15;
              *(long *)(puVar6 + 0x18) = lVar15;
              *(undefined **)(lVar15 + 0x10) = puVar6;
              *(undefined **)(lVar15 + 0x18) = &DAT_00436428 + uVar17 * 8;
              puVar18 = DAT_00436400;
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
                DAT_004363e4 = uVar9 | uVar3;
                *(long *)(&DAT_00436638 + uVar17 * 8) = lVar15;
                *(undefined **)(lVar15 + 0x30) = &DAT_00436638 + uVar17 * 8;
              }
              else {
                bVar8 = 0;
                if (uVar23 != 0x1f) {
                  bVar8 = 0x39 - (char)(uVar23 >> 1);
                }
                lVar11 = uVar12 << (bVar8 & 0x3f);
                lVar16 = *(long *)(&DAT_00436638 + uVar17 * 8);
                do {
                  lVar20 = lVar16;
                  if (uVar12 == (*(ulong *)(lVar20 + 8) & 0xfffffffffffffff8)) {
                    lVar16 = *(long *)(lVar20 + 0x10);
                    *(long *)(lVar16 + 0x18) = lVar15;
                    *(long *)(lVar20 + 0x10) = lVar15;
                    *(long *)(lVar15 + 0x10) = lVar16;
                    *(long *)(lVar15 + 0x18) = lVar20;
                    *(undefined8 *)(lVar15 + 0x30) = 0;
                    puVar18 = DAT_00436400;
                    goto LAB_004032fd;
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
              puVar18 = DAT_00436400;
            }
          }
          goto LAB_004032fd;
        }
      }
    }
    else {
      uVar17 = 0xffffffffffffffff;
    }
LAB_00402abb:
    if (DAT_004363e8 < uVar17) {
      if (DAT_004363f0 <= uVar17) {
        if ((((((DAT_00436750 & 1) != 0) && (_DAT_004367b8 <= uVar17)) && (DAT_004363f0 != 0)) &&
            ((uVar12 = uVar17 + 0x3e + DAT_004367b0 & -DAT_004367b0, DAT_00436748 == 0 ||
             ((DAT_00436738 < DAT_00436738 + uVar12 && (DAT_00436738 + uVar12 <= DAT_00436748))))))
           && (uVar17 < uVar12)) {
          puVar5 = (ulong *)FUN_00403d42(uVar12);
          *puVar5 = 0;
          puVar5[1] = uVar12 - 0x20;
          puVar18 = DAT_004363f8;
          *(undefined8 *)((long)puVar5 + (uVar12 - 0x18)) = 0xb;
          *(undefined8 *)((long)puVar5 + (uVar12 - 0x10)) = 0;
          if ((puVar18 == (ulong *)0x0) || (puVar5 < puVar18)) {
            DAT_004363f8 = puVar5;
          }
          DAT_00436738 = uVar12 + DAT_00436738;
          puVar18 = DAT_00436400;
          if (_DAT_00436740 < DAT_00436738) {
            _DAT_00436740 = DAT_00436738;
          }
          goto LAB_004032fd;
        }
        uVar12 = uVar17 + 0x5f + DAT_004367b0 & -DAT_004367b0;
        if ((uVar17 < uVar12) &&
           ((DAT_00436748 == 0 ||
            ((DAT_00436738 < uVar12 + DAT_00436738 && (uVar12 + DAT_00436738 <= DAT_00436748)))))) {
          puVar5 = (ulong *)FUN_00403d42(uVar12);
          DAT_00436738 = DAT_00436738 + uVar12;
          if (_DAT_00436740 < DAT_00436738) {
            _DAT_00436740 = DAT_00436738;
          }
          if (DAT_00436408 == (ulong *)0x0) {
            if ((DAT_004363f8 == (ulong *)0x0) || (puVar5 < DAT_004363f8)) {
              DAT_004363f8 = puVar5;
            }
            DAT_00436770 = 1;
            _DAT_00436418 = 0x80;
            _DAT_00436420 = DAT_004367a0;
            puVar6 = &DAT_00436428;
            DAT_00436758 = puVar5;
            DAT_00436760 = uVar12;
            do {
              *(undefined **)(puVar6 + 0x18) = puVar6;
              *(undefined **)(puVar6 + 0x10) = puVar6;
              puVar6 = puVar6 + 0x10;
            } while (puVar6 != &DAT_00436628);
            lVar15 = uVar12 - 0x50;
LAB_00402d31:
            FUN_00401ad2(&DAT_004363e0,puVar5,lVar15);
          }
          else {
            if ((((puVar5 == (ulong *)((long)DAT_00436758 + DAT_00436760)) &&
                 ((DAT_00436770 & 8) == 0)) && ((DAT_00436770 & 1) != 0)) &&
               ((DAT_00436758 <= DAT_00436408 && (DAT_00436408 < puVar5)))) {
              DAT_00436760 = DAT_00436760 + uVar12;
              lVar15 = DAT_004363f0 + uVar12;
              puVar5 = DAT_00436408;
              goto LAB_00402d31;
            }
            if (puVar5 < DAT_004363f8) {
              DAT_004363f8 = puVar5;
            }
            ppuVar13 = &DAT_00436758;
            if (((DAT_00436758 == (ulong *)((long)puVar5 + uVar12)) &&
                (bVar26 = (byte)(DAT_00436770 & 8), (DAT_00436770 & 8) == 0)) &&
               ((DAT_00436770 & 1) != 0)) {
              DAT_00436760 = DAT_00436760 + uVar12;
              uVar9 = (uint)DAT_00436758;
              if (((ulong)DAT_00436758 & 0xf) != 0) {
                uVar9 = -(uVar9 + 0x10);
              }
              puVar18 = (ulong *)((long)DAT_00436758 + (ulong)(uVar9 & 0xf));
              puVar4 = (ulong *)((long)puVar5 + uVar17);
              uVar12 = (long)puVar18 + (-uVar17 - (long)puVar5);
              bVar27 = DAT_00436408 == puVar18;
              DAT_00436758 = puVar5;
              puVar5[1] = uVar17 | 3;
              if (bVar27) {
                DAT_004363f0 = uVar12 + DAT_004363f0;
                DAT_00436408 = puVar4;
                puVar4[1] = DAT_004363f0 | 1;
              }
              else {
                if (puVar18 == DAT_00436400) {
                  uVar12 = uVar12 + DAT_004363e8;
                  DAT_004363e8 = uVar12;
                  DAT_00436400 = puVar4;
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
                        DAT_004363e0 = DAT_004363e0 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
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
                          if (puVar7 == (ulong *)0x0) goto LAB_00402ec9;
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
LAB_00402ec9:
                      if (uVar19 != 0) {
                        uVar9 = *(uint *)(puVar18 + 7);
                        if (puVar18 == *(ulong **)(&DAT_00436638 + (ulong)uVar9 * 8)) {
                          (&DAT_004363e8)[(ulong)uVar9 + 0x4a] = (ulong)puVar7;
                          if (puVar7 == (ulong *)0x0) {
                            bVar8 = (byte)uVar9 & 0x1f;
                            DAT_004363e4 = DAT_004363e4 &
                                           (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
                          }
                          else {
LAB_00402ef0:
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
                          if (puVar7 != (ulong *)0x0) goto LAB_00402ef0;
                        }
                      }
                    }
                    puVar18 = (ulong *)((long)puVar18 + (uVar17 & 0xfffffffffffffff8));
                    uVar12 = uVar12 + (uVar17 & 0xfffffffffffffff8);
                  }
                  puVar18[1] = puVar18[1] & 0xfffffffffffffffe;
                  puVar4[1] = uVar12 | 1;
                  *(ulong *)((long)puVar4 + uVar12) = uVar12;
                  uVar9 = DAT_004363e4;
                  if (uVar12 < 0x100) {
                    uVar17 = (ulong)(uint)((int)(uVar12 >> 3) * 2);
                    uVar9 = 1 << ((byte)(uVar12 >> 3) & 0x1f);
                    if ((DAT_004363e0 & uVar9) == 0) {
                      DAT_004363e0 = DAT_004363e0 | uVar9;
                      puVar6 = &DAT_00436428 + uVar17 * 8;
                    }
                    else {
                      puVar6 = (undefined *)(&DAT_00436438)[uVar17];
                    }
                    (&DAT_00436438)[uVar17] = puVar4;
                    *(ulong **)(puVar6 + 0x18) = puVar4;
                    puVar4[2] = (ulong)puVar6;
                    puVar4[3] = (ulong)(&DAT_00436428 + uVar17 * 8);
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
                      uVar17 = (ulong)(((uint)(uVar12 >> (0x26U - (char)(uVar3 ^ 0x1f) & 0x3f)) & 1)
                                      + (0x1f - (uVar3 ^ 0x1f)) * 2);
                    }
                    uVar23 = (uint)uVar17;
                    uVar3 = 1 << ((byte)uVar17 & 0x1f);
                    *(uint *)(puVar4 + 7) = uVar23;
                    puVar4[5] = 0;
                    puVar4[4] = 0;
                    if ((uVar9 & uVar3) == 0) {
                      DAT_004363e4 = uVar9 | uVar3;
                      *(ulong **)(&DAT_00436638 + uVar17 * 8) = puVar4;
                      puVar4[6] = (ulong)(&DAT_00436638 + uVar17 * 8);
                    }
                    else {
                      if (uVar23 != 0x1f) {
                        bVar26 = 0x39 - (char)(uVar23 >> 1);
                      }
                      lVar15 = uVar12 << (bVar26 & 0x3f);
                      uVar17 = *(ulong *)(&DAT_00436638 + uVar17 * 8);
                      do {
                        uVar19 = uVar17;
                        if (uVar12 == (*(ulong *)(uVar19 + 8) & 0xfffffffffffffff8)) {
                          uVar12 = *(ulong *)(uVar19 + 0x10);
                          *(ulong **)(uVar12 + 0x18) = puVar4;
                          *(ulong **)(uVar19 + 0x10) = puVar4;
                          puVar4[2] = uVar12;
                          puVar4[3] = uVar19;
                          puVar4[6] = 0;
                          goto LAB_004030a5;
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
              }
LAB_004030a5:
              puVar5 = puVar5 + 2;
              goto LAB_0040330a;
            }
            while ((DAT_00436408 < *ppuVar13 ||
                   (puVar18 = (ulong *)((long)*ppuVar13 + (long)ppuVar13[1]),
                   puVar18 <= DAT_00436408))) {
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
            if (puVar4 < DAT_00436408 + 4) {
              puVar4 = DAT_00436408;
            }
            puVar25 = DAT_00436408;
            FUN_00401ad2(&DAT_004363e0,puVar5,uVar12 - 0x50);
            DAT_00436768 = puVar4 + 2;
            puVar4[1] = 0x33;
            puVar21 = &DAT_00436758;
            puVar7 = puVar4 + 2;
            for (lVar15 = 8; lVar15 != 0; lVar15 = lVar15 + -1) {
              *(undefined4 *)puVar7 = *(undefined4 *)puVar21;
              puVar21 = (undefined8 *)((long)puVar21 + ((ulong)bVar8 * -2 + 1) * 4);
              puVar7 = (ulong *)((long)puVar7 + (ulong)bVar8 * -8 + 4);
            }
            puVar7 = puVar4 + 7;
            DAT_00436770 = 1;
            DAT_00436758 = puVar5;
            DAT_00436760 = uVar12;
            do {
              *puVar7 = 0xb;
              puVar7 = puVar7 + 1;
            } while (puVar7 < puVar18);
            if (puVar25 != puVar4) {
              puVar4[1] = puVar4[1] & 0xfffffffffffffffe;
              uVar12 = (long)puVar4 - (long)puVar25;
              puVar25[1] = uVar12 | 1;
              *puVar4 = uVar12;
              uVar9 = DAT_004363e4;
              if (uVar12 < 0x100) {
                uVar19 = (ulong)(uint)((int)(uVar12 >> 3) * 2);
                uVar9 = 1 << ((byte)(uVar12 >> 3) & 0x1f);
                if ((DAT_004363e0 & uVar9) == 0) {
                  DAT_004363e0 = DAT_004363e0 | uVar9;
                  puVar6 = &DAT_00436428 + uVar19 * 8;
                }
                else {
                  puVar6 = (undefined *)(&DAT_00436438)[uVar19];
                }
                (&DAT_00436438)[uVar19] = puVar25;
                *(ulong **)(puVar6 + 0x18) = puVar25;
                puVar25[2] = (ulong)puVar6;
                puVar25[3] = (ulong)(&DAT_00436428 + uVar19 * 8);
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
                  DAT_004363e4 = uVar9 | uVar3;
                  *(ulong **)(&DAT_00436638 + uVar19 * 8) = puVar25;
                  puVar25[6] = (ulong)(&DAT_00436638 + uVar19 * 8);
                }
                else {
                  bVar8 = 0;
                  if (uVar23 != 0x1f) {
                    bVar8 = 0x39 - (char)(uVar23 >> 1);
                  }
                  lVar15 = uVar12 << (bVar8 & 0x3f);
                  uVar19 = *(ulong *)(&DAT_00436638 + uVar19 * 8);
                  do {
                    uVar10 = uVar19;
                    if (uVar12 == (*(ulong *)(uVar10 + 8) & 0xfffffffffffffff8)) {
                      uVar12 = *(ulong *)(uVar10 + 0x10);
                      *(ulong **)(uVar12 + 0x18) = puVar25;
                      *(ulong **)(uVar10 + 0x10) = puVar25;
                      puVar25[2] = uVar12;
                      puVar25[3] = uVar10;
                      puVar25[6] = 0;
                      goto LAB_004032c5;
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
LAB_004032c5:
          if (uVar17 < DAT_004363f0) {
            DAT_004363f0 = DAT_004363f0 - uVar17;
            goto LAB_004032d4;
          }
          FUN_00401556();
        }
        puVar5 = (ulong *)0x0;
        goto LAB_0040330a;
      }
      DAT_004363f0 = DAT_004363f0 - uVar17;
LAB_004032d4:
      puVar18 = DAT_00436408;
      DAT_00436408 = (ulong *)((long)DAT_00436408 + uVar17);
      DAT_00436408[1] = DAT_004363f0 | 1;
    }
    else {
      uVar12 = DAT_004363e8 - uVar17;
      puVar5 = (ulong *)((long)DAT_00436400 + DAT_004363e8);
      if (uVar12 < 0x20) {
        uVar12 = DAT_004363e8 | 3;
        DAT_004363e8 = 0;
        DAT_00436400 = (ulong *)0x0;
        puVar18[1] = uVar12;
        puVar5 = puVar5 + 1;
        *puVar5 = *puVar5 | 1;
        puVar5 = puVar18;
        puVar18 = DAT_00436400;
        goto LAB_004032fd;
      }
      DAT_00436400 = (ulong *)((long)DAT_00436400 + uVar17);
      DAT_004363e8 = uVar12;
      DAT_00436400[1] = uVar12 | 1;
      *puVar5 = uVar12;
    }
    puVar18[1] = uVar17 | 3;
    puVar5 = puVar18;
    puVar18 = DAT_00436400;
  }
LAB_004032fd:
  DAT_00436400 = puVar18;
  puVar5 = puVar5 + 2;
LAB_0040330a:
  return CONCAT88(param_4,puVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong FUN_00403312(long param_1,ulong param_2)

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
      iVar3 = FUN_00403d56(ppuVar15,lVar4);
      if (iVar3 != 0) {
        return param_2;
      }
      DAT_00436738 = DAT_00436738 - lVar4;
      return param_2;
    }
    uVar5 = uVar5 + uVar1;
    if (DAT_00436400 == ppuVar15) {
      if (((uint)ppuVar19[1] & 3) == 3) {
        DAT_004363e8 = uVar5;
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
          DAT_004363e0 = DAT_004363e0 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
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
            if (ppuVar8 == (ulong **)0x0) goto LAB_00403414;
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
LAB_00403414:
        if (puVar10 != (ulong *)0x0) {
          uVar14 = *(uint *)(ppuVar15 + 7);
          if (*(ulong ***)(&DAT_00436638 + (ulong)uVar14 * 8) == ppuVar15) {
            (&DAT_004363e8)[(ulong)uVar14 + 0x4a] = (ulong)ppuVar8;
            if (ppuVar8 == (ulong **)0x0) {
              bVar6 = (byte)uVar14 & 0x1f;
              DAT_004363e4 = DAT_004363e4 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
            }
            else {
LAB_0040343f:
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
            if (ppuVar8 != (ulong **)0x0) goto LAB_0040343f;
          }
        }
      }
    }
  }
  ppuVar8 = DAT_00436400;
  puVar10 = ppuVar19[1];
  if (((ulong)puVar10 & 2) != 0) {
    ppuVar19[1] = (ulong *)((ulong)puVar10 & 0xfffffffffffffffe);
    ppuVar15[1] = (ulong *)(uVar5 | 1);
    *(ulong *)((long)ppuVar15 + uVar5) = uVar5;
    goto LAB_004036ae;
  }
  if (DAT_00436408 != ppuVar19) {
    if (ppuVar19 == DAT_00436400) {
      uVar5 = uVar5 + DAT_004363e8;
      DAT_004363e8 = uVar5;
      DAT_00436400 = ppuVar15;
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
        DAT_004363e0 = DAT_004363e0 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
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
          if (ppuVar9 == (ulong **)0x0) goto LAB_00403602;
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
LAB_00403602:
      if (puVar10 != (ulong *)0x0) {
        uVar14 = *(uint *)(ppuVar19 + 7);
        if (*(ulong ***)(&DAT_00436638 + (ulong)uVar14 * 8) == ppuVar19) {
          (&DAT_004363e8)[(ulong)uVar14 + 0x4a] = (ulong)ppuVar9;
          if (ppuVar9 == (ulong **)0x0) {
            bVar6 = (byte)uVar14 & 0x1f;
            DAT_004363e4 = DAT_004363e4 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
          }
          else {
LAB_00403629:
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
          if (ppuVar9 != (ulong **)0x0) goto LAB_00403629;
        }
      }
    }
    ppuVar15[1] = (ulong *)(uVar5 | 1);
    *(ulong *)((long)ppuVar15 + uVar5) = uVar5;
    if (ppuVar15 == ppuVar8) {
      DAT_004363e8 = uVar5;
      return param_2;
    }
LAB_004036ae:
    uVar14 = DAT_004363e4;
    if (uVar5 < 0x100) {
      uVar11 = (ulong)(uint)((int)(uVar5 >> 3) * 2);
      uVar14 = 1 << ((byte)(uVar5 >> 3) & 0x1f);
      if ((DAT_004363e0 & uVar14) == 0) {
        DAT_004363e0 = DAT_004363e0 | uVar14;
        puVar10 = (ulong *)(&DAT_00436428 + uVar11 * 8);
      }
      else {
        puVar10 = (ulong *)(&DAT_00436438)[uVar11];
      }
      (&DAT_00436438)[uVar11] = ppuVar15;
      puVar10[3] = (ulong)ppuVar15;
      ppuVar15[2] = puVar10;
      ppuVar15[3] = (ulong *)(&DAT_00436428 + uVar11 * 8);
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
        DAT_004363e4 = uVar14 | uVar16;
        puVar13 = (ulong *)(ulong)DAT_004363e4;
        *(ulong ***)(&DAT_00436638 + uVar11 * 8) = ppuVar15;
        ppuVar15[6] = (ulong *)(&DAT_00436638 + uVar11 * 8);
      }
      else {
        bVar6 = 0;
        if (uVar7 != 0x1f) {
          bVar6 = 0x39 - (char)(uVar7 >> 1);
        }
        lVar4 = uVar5 << (bVar6 & 0x3f);
        puVar10 = *(ulong **)(&DAT_00436638 + uVar11 * 8);
        do {
          puVar13 = puVar10;
          if ((puVar13[1] & 0xfffffffffffffff8) == uVar5) {
            puVar10 = (ulong *)puVar13[2];
            puVar10[3] = (ulong)ppuVar15;
            puVar13[2] = (ulong)ppuVar15;
            ppuVar15[2] = puVar10;
            ppuVar15[3] = puVar13;
            ppuVar15[6] = (ulong *)0x0;
            goto LAB_004037fc;
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
LAB_004037fc:
      _DAT_00436418 = _DAT_00436418 + -1;
      if (_DAT_00436418 == 0) {
        uVar11 = FUN_00401b19(&DAT_004363e0,puVar13,param_2);
        return uVar11;
      }
    }
    return param_2;
  }
  uVar5 = uVar5 + DAT_004363f0;
  bVar20 = ppuVar15 == DAT_00436400;
  DAT_004363f0 = uVar5;
  DAT_00436408 = ppuVar15;
  ppuVar15[1] = (ulong *)(uVar5 | 1);
  if (bVar20) {
    DAT_00436400 = (ulong **)0x0;
    DAT_004363e8 = 0;
  }
  if (uVar5 <= DAT_00436410) {
    return param_2;
  }
  if (DAT_00436408 != (ulong **)0x0) {
    if (0x50 < DAT_004363f0) {
      ppuVar15 = (ulong **)&DAT_00436758;
      ppuVar19 = ppuVar15;
      do {
        ppuVar8 = (ulong **)*ppuVar19;
        if (ppuVar8 <= DAT_00436408) {
          puVar10 = ppuVar19[1];
          if (DAT_00436408 < (ulong **)((long)ppuVar8 + (long)puVar10)) {
            if ((((*(uint *)(ppuVar19 + 3) & 8) != 0) || ((*(uint *)(ppuVar19 + 3) & 1) == 0)) ||
               (puVar13 = (ulong *)((((DAT_004363f0 + DAT_004367b0) - 0x51) / DAT_004367b0 - 1) *
                                   DAT_004367b0),
               puVar10 <= puVar13 && (long)puVar13 - (long)puVar10 != 0)) break;
            goto LAB_00401e70;
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
    goto LAB_00401e0a;
  }
  goto LAB_00401dea;
  while (ppuVar15 = (ulong **)ppuVar15[2], ppuVar15 != (ulong **)0x0) {
LAB_00401e70:
    if ((ppuVar8 <= ppuVar15) && (ppuVar15 < (ulong **)((long)ppuVar8 + (long)puVar10)))
    goto LAB_00401e0a;
  }
  lVar4 = FUN_00404008(ppuVar8,puVar10,(long)puVar10 - (long)puVar13,0,0);
  if ((lVar4 == -1) &&
     (iVar3 = FUN_00403d56((long)*ppuVar19 + ((long)puVar10 - (long)puVar13),puVar13), iVar3 != 0))
  {
LAB_00401e0a:
    puVar13 = (ulong *)0x0;
  }
  else {
    if (puVar13 != (ulong *)0x0) {
      ppuVar19[1] = (ulong *)((long)ppuVar19[1] - (long)puVar13);
      DAT_00436738 = DAT_00436738 - (long)puVar13;
      FUN_00401ad2(&DAT_004363e0,DAT_00436408,DAT_004363f0 - (long)puVar13);
    }
  }
  lVar4 = FUN_00401b19(&DAT_004363e0);
  lVar4 = (long)puVar13 + lVar4;
  if (lVar4 != 0) goto LAB_00401f01;
  if (DAT_00436410 < DAT_004363f0) {
    DAT_00436410 = 0xffffffffffffffff;
    goto LAB_00401f01;
  }
LAB_00401dea:
  lVar4 = 0;
LAB_00401f01:
  return (ulong)(lVar4 != 0);
}



undefined  [16]
FUN_00403873(uint *param_1,long *param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

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
      if ((param_3 + 8 <= uVar10) && (uVar10 - param_3 <= (ulong)(DAT_004367b0 * 2)))
      goto LAB_00403bf3;
      lVar11 = *param_2;
      uVar12 = DAT_004367b0 + 0x3e + param_3 & -DAT_004367b0;
      lVar1 = uVar10 + 0x20 + lVar11;
      uVar8 = FUN_00404008((long)param_2 - lVar11,lVar1,uVar12,param_4,0);
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
        goto LAB_00403bf3;
      }
    }
  }
  else {
    lVar1 = (long)param_2 + uVar10;
    uVar13 = (uint)uVar8;
    if (param_3 <= uVar10) {
      uVar10 = uVar10 - param_3;
      if (uVar10 < 0x20) goto LAB_00403bf3;
      param_2[1] = param_3 | uVar13 & 1 | 2;
      *(ulong *)((long)param_2 + param_3 + 8) = uVar10 | 3;
      *(ulong *)(lVar1 + 8) = *(ulong *)(lVar1 + 8) | 1;
LAB_00403beb:
      FUN_00401f12(param_1,(long)param_2 + param_3,uVar10);
      goto LAB_00403bf3;
    }
    if (*(long *)(param_1 + 10) == lVar1) {
      if (param_3 < uVar10 + *(long *)(param_1 + 4)) {
        uVar8 = (uVar10 + *(long *)(param_1 + 4)) - param_3;
        param_2[1] = uVar13 & 1 | param_3 | 2;
        *(ulong *)((long)param_2 + param_3 + 8) = uVar8 | 1;
        *(ulong *)(param_1 + 10) = (long)param_2 + param_3;
        *(ulong *)(param_1 + 4) = uVar8;
        goto LAB_00403bf3;
      }
    }
    else {
      if (*(long *)(param_1 + 8) == lVar1) {
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
          goto LAB_00403bf3;
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
                  if (lVar11 == 0) goto LAB_00403b33;
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
LAB_00403b33:
              if (lVar4 != 0) {
                uVar3 = *(uint *)(lVar1 + 0x38);
                if (*(long *)(param_1 + (ulong)uVar3 * 2 + 0x96) == lVar1) {
                  *(long *)(param_1 + (ulong)uVar3 * 2 + 0x96) = lVar11;
                  if (lVar11 == 0) {
                    bVar6 = (byte)uVar3 & 0x1f;
                    param_1[1] = param_1[1] & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
                  }
                  else {
LAB_00403b58:
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
                  if (lVar11 != 0) goto LAB_00403b58;
                }
              }
            }
            if (uVar10 < 0x20) {
              param_2[1] = uVar13 & 1 | uVar12 | 2;
              puVar2 = (ulong *)((long)param_2 + uVar12 + 8);
              *puVar2 = *puVar2 | 1;
              goto LAB_00403bf3;
            }
            param_2[1] = uVar13 & 1 | param_3 | 2;
            *(ulong *)((long)param_2 + param_3 + 8) = uVar10 | 3;
            puVar2 = (ulong *)((long)param_2 + uVar12 + 8);
            *puVar2 = *puVar2 | 1;
            goto LAB_00403beb;
          }
        }
      }
    }
  }
  param_2 = (long *)0x0;
LAB_00403bf3:
  return CONCAT88(param_5,param_2);
}



long FUN_00403c02(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uStack40;
  undefined8 local_20;
  
  if (param_1 == 0) {
    lVar1 = FUN_0040238e(param_2,uStack40,param_3,param_4,local_20);
    return lVar1;
  }
  if (param_2 < 0xffffffffffffff80) {
    if (param_2 != 0) {
      uVar2 = 0x20;
      if (0xe < param_2) {
        uVar2 = param_2 + 0x1f & 0xfffffffffffffff0;
      }
      lVar1 = FUN_00403873(&DAT_004363e0,param_1 + -0x10,uVar2,1);
      if (lVar1 != 0) {
        return lVar1 + 0x10;
      }
      lVar1 = FUN_0040238e(param_2);
      if (lVar1 == 0) {
        return 0;
      }
      uVar2 = (*(ulong *)(param_1 + -8) & 0xfffffffffffffff8) - 0x10;
      if (param_2 < uVar2) {
        uVar2 = param_2;
      }
      FUN_00404420(lVar1,param_1,uVar2);
      FUN_00403312(param_1);
      return lVar1;
    }
    FUN_00403312();
  }
  else {
    FUN_00401556();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00403cbb(void)

{
  uint uVar1;
  ulong uVar2;
  
  if (DAT_004367a0 == 0) {
    uVar1 = 0x10000;
    if (0xffff < DAT_00437fa8) {
      uVar1 = DAT_00437fa8;
    }
    uVar2 = (ulong)uVar1;
    if ((uVar2 - 1 & uVar2) != 0) {
      uVar2 = FUN_00401000();
    }
    _DAT_004367a8 = 0x1000;
    _DAT_004367b8 = 0x40000;
    DAT_004367c0 = 0xa00000;
    _DAT_004367c8 = 5;
    _DAT_00436750 = 5;
    DAT_004367a0 = _DAT_00436000 & 0xfffffffffffffff8 | 8;
    DAT_004367b0 = uVar2;
  }
  return;
}



void FUN_00403d42(void)

{
  FUN_00403d6a();
  return;
}



void FUN_00403d56(void)

{
  FUN_0040400e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00403d6a(undefined8 param_1)

{
  FUN_00403d90(0,param_1,3,(uint)DAT_00436360 | _DAT_00436368 | 2,0xffffffff,0);
  return;
}



long FUN_00403d90(ulong param_1,ulong param_2,undefined4 param_3,uint param_4,int param_5,
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
  
  uVar9 = DAT_004362b8 & 4;
  if ((uVar9 == 0) || (param_5 == -1)) {
    param_2 = param_2 + 0xffff & 0xffffffffffff0000;
  }
  if ((param_4 & 0x10) == 0) {
    if ((param_1 == 0) && (param_1 = 0x200000000000, DAT_00436b00 != 0)) {
      uVar2 = DAT_00436b00;
      do {
        uVar2 = uVar2 - 1;
        lVar6 = (long)(*(int *)(&DAT_00436b0c + uVar2 * 8) + 1);
        if ((lVar6 + (param_2 >> 0x10) < 0x30000001) &&
           (0x1ffffffe < *(int *)(&DAT_00436b0c + uVar2 * 8))) {
          param_1 = lVar6 << 0x10;
          goto LAB_00403e46;
        }
      } while (uVar2 != 0);
      param_1 = (long)(*(int *)((long)&DAT_00436b00 + DAT_00436b00 * 8 + 4) + 1) << 0x10;
    }
LAB_00403e46:
    param_1 = param_1 & 0xffffffffffff0000;
  }
  if (DAT_00436b00 == 300) {
    lVar6 = FUN_00401556();
    return lVar6;
  }
  if ((param_4 & 0x10) == 0) {
    FUN_0040427b((int)(param_2 + 0xffff >> 0x10) + -1 + (int)(param_1 >> 0x10));
  }
  else {
    FUN_00403d56(param_1);
  }
  if (uVar9 == 0) {
    lVar3 = FUN_0040429b(param_1,param_2,param_3,param_4 | 0x10,(long)param_5,param_6);
  }
  else {
    uVar1 = FUN_004046fa(param_3);
    uVar7 = 0xffffffffffffffff;
    if (param_5 != -1) {
      uVar7 = *(undefined8 *)((long)param_5 * 0x18 + DAT_00437df0);
    }
    lVar6 = FUN_00401a32(uVar7,&DAT_004047c0,uVar1,param_2 >> 0x20,param_2 & 0xffffffff,0,
                         0xffffffffffffffff);
    if (lVar6 != 0) {
      uVar1 = FUN_004042a8(param_3,param_4 | 0x10);
      lVar3 = FUN_00401a5e(lVar6,uVar1,(long)param_6 >> 0x20,param_6 & 0xffffffff,param_2,param_1);
      if (lVar3 != 0) goto LAB_00403f50;
      FUN_00401a19(lVar6);
    }
    lVar3 = FUN_00404786();
  }
  lVar6 = -1;
LAB_00403f50:
  if (lVar3 != -1) {
    iVar8 = (int)((ulong)lVar3 >> 0x10);
    uVar2 = FUN_0040427b(lVar3 >> 0x10 & 0xffffffff,&DAT_00436b08,DAT_00436b00);
    if (uVar2 < DAT_00436b00) {
      lVar5 = (uVar2 + 2) * 8;
      lVar4 = FUN_00404542(&DAT_00436b00 + uVar2 + 2,&DAT_00436af8 + lVar5,
                           (DAT_00436b00 - uVar2) * 8);
      uVar2 = FUN_00404542(&DAT_00437460 + lVar5,&DAT_00437458 + lVar5,(DAT_00436b00 - lVar4) * 8);
    }
    DAT_00436b00 = DAT_00436b00 + 1;
    *(int *)(&DAT_00436b08 + uVar2 * 8) = iVar8;
    *(long *)(&DAT_00437468 + uVar2 * 8) = lVar6;
    *(int *)(&DAT_00436b0c + uVar2 * 8) = (int)(param_2 + 0xffff >> 0x10) + -1 + iVar8;
  }
  return lVar3;
}



void FUN_00404008(void)

{
  FUN_00401566();
  return;
}



undefined  [16] FUN_0040400e(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

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
    uVar4 = FUN_0040427b(iVar7 + -1 + (int)((ulong)(param_2 + 0xffff) >> 0x10),&DAT_00436b08,
                         DAT_00436b00);
    uVar5 = uVar4;
    while (uVar5 != 0) {
      uVar1 = uVar5 - 1;
      if (*(int *)(&DAT_00436b0c + uVar1 * 8) < iVar7) break;
      uVar5 = uVar1;
      if (((byte)DAT_004362b8 & 4) == 0) {
        uVar2 = FUN_00404300();
        uVar9 = uVar9 | uVar2;
      }
      else {
        iVar3 = FUN_00401a74((long)*(int *)(&DAT_00436b08 + uVar1 * 8) << 0x10);
        if (iVar3 == 0) {
          uVar9 = 0xffffffff;
        }
        iVar3 = FUN_00401a19(*(undefined8 *)(&DAT_00437468 + uVar1 * 8));
        if (iVar3 == 0) {
          uVar9 = 0xffffffff;
        }
      }
    }
    if (uVar5 < uVar4) {
      if (uVar4 < DAT_00436b00) {
        lVar6 = (uVar5 + 1) * 8;
        lVar8 = (uVar4 + 1) * 8;
        FUN_00404542(&DAT_00436b00 + uVar5 + 1,&DAT_00436b00 + uVar4 + 1,(DAT_00436b00 - uVar4) * 8)
        ;
        uVar5 = FUN_00404542(&DAT_00437460 + lVar6,&DAT_00437460 + lVar8,(DAT_00436b00 - uVar4) * 8)
        ;
      }
      DAT_00436b00 = (uVar5 + DAT_00436b00) - uVar4;
    }
  }
  else {
    uVar9 = 0;
  }
  return CONCAT88(param_4,(ulong)uVar9);
}



undefined8 FUN_00404151(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint *puVar5;
  
  if (DAT_004367e0 == (uint *)0x0) {
    DAT_004367e0 = &DAT_004367e8;
  }
  puVar5 = DAT_004367e0;
  if (*DAT_004367e0 == 0xffffffff) {
    puVar3 = (uint *)FUN_00401ac6(1,0x310);
    if (puVar3 == (uint *)0x0) {
      uVar4 = FUN_00401556();
      return uVar4;
    }
    *(uint **)(puVar3 + 2) = puVar5;
    DAT_004367e0 = puVar3;
  }
  puVar5 = DAT_004367e0;
  uVar2 = ~*DAT_004367e0;
  uVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  *DAT_004367e0 = *DAT_004367e0 | 1 << (uVar1 & 0x1f);
  puVar5 = puVar5 + (ulong)uVar1 * 6;
  *(undefined8 *)(puVar5 + 4) = param_1;
  *(undefined8 *)(puVar5 + 6) = param_2;
  *(undefined8 *)(puVar5 + 8) = param_3;
  return 0;
}



undefined8 FUN_004041e6(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  puVar2 = DAT_004367e0;
  puVar4 = DAT_004367e0;
joined_r0x00404202:
  do {
    DAT_004367e0 = puVar4;
    if (puVar2 == (uint *)0x0) {
      return param_3;
    }
    uVar5 = *puVar2;
    do {
      do {
        if (uVar5 == 0) {
          puVar2 = *(uint **)(puVar2 + 2);
          puVar4 = DAT_004367e0;
          if ((param_1 == 0) && (puVar4 = puVar2, puVar2 != (uint *)0x0)) {
            FUN_00401acc();
          }
          goto joined_r0x00404202;
        }
        uVar3 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        uVar6 = ~(1 << ((byte)uVar3 & 0x1f));
        uVar5 = uVar5 & uVar6;
      } while ((param_1 != 0) && (*(long *)(puVar2 + (ulong)uVar3 * 6 + 8) != param_1));
      *puVar2 = *puVar2 & uVar6;
      pcVar1 = *(code **)(puVar2 + (ulong)uVar3 * 6 + 4);
    } while (pcVar1 == (code *)0x0);
    (*pcVar1)(*(undefined8 *)(puVar2 + (ulong)uVar3 * 6 + 6));
    puVar2 = DAT_004367e0;
    puVar4 = DAT_004367e0;
  } while( true );
}



long FUN_0040427b(int param_1,long param_2,int param_3)

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



void FUN_0040429b(void)

{
  FUN_004042f0();
  return;
}



uint FUN_004042a8(uint param_1,uint param_2)

{
  return (int)param_2 >> 1 & 1U | param_1 & 2 | (int)param_2 >> 2 & 0x20000000U |
         (param_2 & 0x4000000) << 5 | param_1 * 4 & 4 | (param_1 & 4) << 3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004042f0(void)

{
                    // WARNING: Could not recover jumptable at 0x004042fa. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_004362c0)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00404300(void)

{
                    // WARNING: Could not recover jumptable at 0x0040430a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_004362c0)();
  return;
}



void FUN_0040436d(void)

{
  FUN_004043af();
  return;
}



undefined  [16] FUN_004043af(long param_1,uint *param_2,undefined8 param_3)

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



void FUN_00404420(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = 0x20;
  if (param_3 < 0x20) {
    uVar1 = param_3;
  }
                    // WARNING: Could not emulate address calculation at 0x0040442d
                    // WARNING: Treating indirect jump as call
  (**(code **)(&DAT_00436098 + uVar1 * 8))();
  return;
}



void FUN_00404542(undefined *param_1,undefined *param_2,long param_3)

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



void FUN_00404562(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = 0x20;
  if (param_3 < 0x20) {
    uVar1 = param_3;
  }
                    // WARNING: Could not emulate address calculation at 0x00404579
                    // WARNING: Treating indirect jump as call
  (**(code **)(&DAT_004361a0 + uVar1 * 8))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004046c1(void)

{
  _DAT_00437fb4 = _DAT_00437fb4 | 4;
  if (((byte)DAT_004362b8 & 4) == 0) {
    syscall();
    InterruptDescriptorTableRegister(0);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  do {
    (*_DAT_00405030)();
  } while( true );
}



uint FUN_004046fa(uint param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_1 & 7) == 7) {
    uVar1 = 0x40;
    if (((param_2 & 1) == 0) && (uVar1 = 0x40, DAT_00436360 != ((long)(int)param_2 & DAT_00436360)))
    {
      uVar1 = 0x80;
    }
  }
  else {
    if ((param_1 & 3) == 3) {
      uVar1 = 4;
      if ((param_2 & 1) == 0) {
        uVar1 = (uint)(DAT_00436360 != ((long)(int)param_2 & DAT_00436360)) * 4 + 4;
      }
    }
    else {
      uVar1 = 0x20;
      if (((param_1 & 5) != 5) && (uVar1 = 0x10, (param_1 & 4) == 0)) {
        uVar1 = (param_1 & 1) + 1;
      }
    }
  }
  return (param_2 | param_1) & 0xdd000000 | uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_00404786(void)

{
  undefined8 uVar1;
  
  if (((byte)DAT_004362b8 & 4) != 0) {
    _DAT_00437fb0 = FUN_00401a48();
    return 0xffffffffffffffff;
  }
  uVar1 = FUN_00401566();
  return uVar1;
}


