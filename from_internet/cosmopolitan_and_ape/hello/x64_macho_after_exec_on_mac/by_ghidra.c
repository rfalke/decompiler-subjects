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
  
  func_0x1a281242();
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
    if (uVar3 == 0x4000) break;
    *(undefined2 *)(in_FS_OFFSET + (int)(((uint)unaff_RBX & 0xffff0000) + param_3)) =
         *(undefined2 *)(in_FS_OFFSET + (int)(CONCAT22(uVar5,0x4000) + param_3));
  }
  uVar4 = unaff_RBX & 0xffffffffffff0000 | 0x4000;
  uVar2 = *(uint *)(param_2 & 0xffffffff00000000 | (ulong)CONCAT22(uVar5,0x4000));
  func_0x299c0123(0xb80000,0x4000,param_3,
                  uVar2 & 0xffffff00 | (uint)(byte)((byte)uVar2 ^ *(byte *)(uVar4 - 0x7acdbdea)),
                  param_5,param_6,uVar4,
                  *(undefined8 *)((uVar4 - 0x77) + ((ulong)&stack0xfffffffffffffff8 & 0xffffffff)));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00401217(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool entry(void)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  bool bVar9;
  int in_stack_00000000;
  uint uStack240;
  
  DAT_00404630 = CONCAT31(DAT_00404630._1_3_,8);
  puVar7 = &DAT_00403018;
  for (lVar6 = 0xb; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = &LAB_00401214;
    puVar7 = puVar7 + 1;
  }
  lVar6 = 0xffffffff;
  plVar8 = (long *)(&stack0x00000018 + (long)in_stack_00000000 * 8);
  do {
    if (lVar6 == 0) break;
    lVar6 = lVar6 + -1;
    lVar1 = *plVar8;
    plVar8 = plVar8 + 1;
  } while (lVar1 != 0);
  FUN_00401297();
  _DAT_0040783c = _DAT_0040783c | 1;
  for (ppuVar5 = &PTR_FUN_00403008; ppuVar5 != (undefined **)&DAT_00403010;
      ppuVar5 = (code **)ppuVar5 + 1) {
    (*(code *)*ppuVar5)();
  }
  iVar4 = FUN_0040141f((long)in_stack_00000000,&stack0x00000008,
                       &stack0x00000018 + (long)in_stack_00000000 * 8);
  FUN_004017fd();
  uVar2 = DAT_00407838;
  if ((DAT_00404630 & 4) == 0) {
    iVar4 = FUN_00401609();
    if (iVar4 == -1) {
      DAT_00407838 = uVar2;
      return false;
    }
    bVar9 = (uStack240 & 0xf000) == 0x2000;
  }
  else {
    cVar3 = FUN_0040245f();
    if (cVar3 == '\0') {
      return false;
    }
    iVar4 = FUN_00401dd2(*(undefined8 *)((long)iVar4 * 0x18 + DAT_004076b0));
    bVar9 = iVar4 == 2;
  }
  return bVar9;
}



void FUN_00401297(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  byte bVar9;
  byte bVar10;
  ulong uVar11;
  byte **ppbVar12;
  byte **ppbVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  long *unaff_R15;
  byte bVar19;
  byte *apbStack88 [7];
  undefined8 uStack32;
  undefined8 uStack24;
  
  bVar19 = 0;
  puVar16 = (undefined8 *)&DAT_00404000;
  uStack24 = 0;
  uStack32 = 0x16;
  apbStack88[6] = (byte *)0xffffffff80000007;
  apbStack88[5] = (byte *)0xffffffff80000001;
  apbStack88[4] = (byte *)0x7;
  apbStack88[3] = (byte *)0x2;
  ppbVar12 = apbStack88 + 2;
  apbStack88[2] = (byte *)0x1;
  uVar8 = 0;
  do {
    iVar7 = (int)uVar8;
    if (iVar7 == 0) {
      puVar1 = (undefined4 *)cpuid_basic_info(0);
    }
    else if (iVar7 == 1) {
      puVar1 = (undefined4 *)cpuid_Version_info(1);
    }
    else if (iVar7 == 2) {
      puVar1 = (undefined4 *)cpuid_cache_tlb_info(2);
    }
    else if (iVar7 == 3) {
      puVar1 = (undefined4 *)cpuid_serial_info(3);
    }
    else if (iVar7 == 4) {
      puVar1 = (undefined4 *)cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (iVar7 == 5) {
      puVar1 = (undefined4 *)cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (iVar7 == 6) {
      puVar1 = (undefined4 *)cpuid_Thermal_Power_Management_info(6);
    }
    else if (iVar7 == 7) {
      puVar1 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (iVar7 == 9) {
      puVar1 = (undefined4 *)cpuid_Direct_Cache_Access_info(9);
    }
    else if (iVar7 == 10) {
      puVar1 = (undefined4 *)cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (iVar7 == 0xb) {
      puVar1 = (undefined4 *)cpuid_Extended_Topology_info(0xb);
    }
    else if (iVar7 == 0xd) {
      puVar1 = (undefined4 *)cpuid_Processor_Extended_States_info(0xd);
    }
    else if (iVar7 == 0xf) {
      puVar1 = (undefined4 *)cpuid_Quality_of_Service_info(0xf);
    }
    else if (iVar7 == -0x7ffffffe) {
      puVar1 = (undefined4 *)cpuid_brand_part1_info(0x80000002);
    }
    else if (iVar7 == -0x7ffffffd) {
      puVar1 = (undefined4 *)cpuid_brand_part2_info(0x80000003);
    }
    else if (iVar7 == -0x7ffffffc) {
      puVar1 = (undefined4 *)cpuid_brand_part3_info(0x80000004);
    }
    else {
      puVar1 = (undefined4 *)cpuid(iVar7);
    }
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    *(undefined4 *)puVar16 = *puVar1;
    *(undefined4 *)((long)puVar16 + 4) = uVar2;
    *(undefined4 *)(puVar16 + 1) = uVar4;
    *(undefined4 *)((long)puVar16 + 0xc) = uVar3;
    ppbVar13 = ppbVar12;
    do {
      puVar16 = puVar16 + 2;
      uVar8 = *ppbVar13;
      ppbVar12 = ppbVar13 + 1;
      if ((int)uVar8 == 0) {
        uVar8 = ppbVar13[1];
        uVar11 = 0x1100;
        pbVar15 = &DAT_00402e68;
        do {
          pbVar14 = pbVar15;
          uVar11 = uVar11 | *pbVar14;
          bVar10 = pbVar14[1];
          puVar17 = puVar16;
          do {
            puVar16 = puVar17 + 1;
            *puVar17 = &LAB_004026e7 + bVar10;
            bVar9 = (char)uVar11 - 1;
            uVar6 = uVar11 & 0xffffffffffffff00;
            uVar11 = uVar6 | bVar9;
            puVar17 = puVar16;
          } while (bVar9 != 0);
          bVar10 = (char)(uVar6 >> 8) - 1;
          uVar11 = (ulong)bVar10 << 8;
          pbVar15 = pbVar14 + 2;
        } while (bVar10 != 0);
        pbVar14 = pbVar14 + 8;
        ppbVar13[1] = (byte *)0x4012ff;
        FUN_00401636();
        ppbVar13[1] = (byte *)0x401304;
        FUN_004017ec();
        ppbVar13[1] = (byte *)0x20;
        ppbVar13[1] = (byte *)0x401318;
        FUN_004017be();
        ppbVar13[1] = (byte *)0x20;
        ppbVar13[1] = (byte *)0x40132c;
        FUN_004017be();
        ppbVar13[1] = (byte *)uVar8;
        *ppbVar13 = pbVar14;
        if ((*(byte *)puVar16 & 8) == 0) {
          if ((*(byte *)puVar16 & 0x20) == 0) {
            if ((*(byte *)puVar16 & 4) == 0) {
              if (*unaff_R15 == 0) {
                ppbVar13[-1] = (byte *)0x2a;
                ppbVar13[-2] = (byte *)0x10;
                pbVar15 = &DAT_00402f17;
              }
              else {
                ppbVar13[-1] = (byte *)0x0;
                ppbVar13[-2] = (byte *)0x1;
                pbVar15 = &DAT_00402f0c;
              }
            }
            else {
              ppbVar13[-1] = (byte *)0x22;
              ppbVar13[-2] = (byte *)0x4;
              pbVar15 = &DAT_00402f22;
            }
          }
          else {
            ppbVar13[-1] = (byte *)0x30;
            ppbVar13[-2] = (byte *)0x20;
            pbVar15 = &DAT_00402f01;
          }
        }
        else {
          ppbVar13[-1] = (byte *)0x45;
          ppbVar13[-2] = (byte *)0x8;
          pbVar15 = &DAT_00402f33;
        }
        *puVar16 = ppbVar13[-2];
        puVar16[(ulong)bVar19 * -2 + 1] = &DAT_004025d0 + (long)ppbVar13[-1];
        ppbVar13[-1] = (byte *)(puVar16 + (ulong)bVar19 * -2 + 1 + (ulong)bVar19 * -2 + 1);
        for (puVar18 = &DAT_00404648; puVar18 < &DAT_00404690;
            puVar18 = puVar18 + (ulong)bVar19 * -2 + 1) {
          bVar10 = 0;
          uVar11 = 0;
          pbVar14 = pbVar15;
          do {
            pbVar15 = pbVar14 + (ulong)bVar19 * -2 + 1;
            bVar9 = *pbVar14;
            bVar5 = bVar10 & 0x3f;
            bVar10 = bVar10 + 7;
            uVar11 = uVar11 | (ulong)(bVar9 & 0x7f) << bVar5;
            pbVar14 = pbVar15;
          } while ((char)bVar9 < '\0');
          if ((bVar9 & 0x40) != 0) {
            uVar11 = uVar11 | -1 << (bVar10 & 0x3f);
          }
          if (*puVar18 != 0) {
            uVar11 = *puVar18;
          }
          *puVar18 = uVar11;
        }
        ppbVar13[1] = (byte *)0x1;
        DAT_00406030 = (code *)&LAB_00402115;
        if (((byte)DAT_00404630 & 2) == 0) {
          DAT_00406030 = FUN_00402083;
        }
        DAT_00406004 = DAT_00404688;
        DAT_0040600c = ppbVar13[1];
        DAT_00406018 = &DAT_00405000;
        DAT_00406020 = 0x1000;
        DAT_00406038 = &DAT_00406000;
        return;
      }
      ppbVar13 = ppbVar13 + 1;
    } while ((byte)DAT_00404000 < (byte)uVar8);
  } while( true );
}



undefined8 FUN_0040141f(void)

{
  FUN_00401e0a("hello world");
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong FUN_00401433(void)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  
  puVar3 = DAT_00406038;
  if ((((byte)DAT_00404630 & 4) != 0) ||
     (iVar6 = FUN_0040156c(*(undefined4 *)(DAT_00406038 + 0xc)), iVar6 != 0)) {
    *puVar3 = 1;
  }
  if (DAT_00406050 == (undefined *)0x0) {
    DAT_00406050 = &DAT_00406058;
    _DAT_00406048 = 8;
    FUN_0040215b(FUN_00401faf,0,0);
  }
  uVar4 = DAT_00406040;
  uVar7 = DAT_00406040 - 1;
  do {
    if (uVar7 == 0xffffffffffffffff) {
      uVar2 = DAT_00406040 + 1;
      if ((uVar2 < _DAT_00406048) ||
         (cVar5 = FUN_00402286(&DAT_00406050,&DAT_00406048,8,1), cVar5 != '\0')) {
        *(undefined **)(DAT_00406050 + uVar4 * 8) = puVar3;
        uVar7 = uVar4;
        DAT_00406040 = uVar2;
      }
      return uVar7 & 0xffffffff;
    }
    lVar1 = uVar7 * 8;
    uVar7 = uVar7 - 1;
  } while (*(long *)(DAT_00406050 + uVar7 * 8 + 8) != 0);
  *(undefined **)(DAT_00406050 + lVar1) = puVar3;
  return 0;
}



bool FUN_0040156c(undefined8 param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined local_108 [24];
  uint local_f0;
  
  uVar1 = DAT_00407838;
  if ((DAT_00404630 & 4) == 0) {
    iVar3 = FUN_00401609(param_1,local_108);
    if (iVar3 == -1) {
      DAT_00407838 = uVar1;
      return false;
    }
    bVar4 = (local_f0 & 0xf000) == 0x2000;
  }
  else {
    cVar2 = FUN_0040245f(param_1,1);
    if (cVar2 == '\0') {
      return false;
    }
    iVar3 = FUN_00401dd2(*(undefined8 *)((long)(int)param_1 * 0x18 + DAT_004076b0));
    bVar4 = iVar3 == 2;
  }
  return bVar4;
}



ulong FUN_00401609(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_004025b0();
  if ((int)uVar1 != -1) {
    FUN_0040168d(param_2);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



void FUN_00401636(void)

{
  code *pcVar1;
  
  pcVar1 = DAT_00403050;
  DAT_004076a0 = 3;
  DAT_004076b0 = &DAT_004076b8;
  DAT_004076a8 = 0x10;
  DAT_004076c8 = 1;
  DAT_004076e0 = DAT_004076c8;
  DAT_004076f8 = DAT_004076c8;
  DAT_004076b8 = (*DAT_00403050)();
  DAT_004076d0 = (*pcVar1)();
  DAT_004076e8 = (*pcVar1)();
  return;
}



void FUN_0040168d(long *param_1)

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
  if ((DAT_00404630 & 8) == 0) {
    if ((DAT_00404630 & 0x20) == 0) {
      if ((DAT_00404630 & 0x10) == 0) {
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



undefined8 FUN_004017be(long *param_1,undefined8 *param_2,long param_3,int param_4)

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
  *plVar2 = (ulong)*(byte *)((long)puVar1 + (ulong)(byte)((DAT_00404035 & 2) != 0 | !in_ZF << 1)) +
            param_3;
  return *puVar1;
}



void FUN_004017ec(byte *param_1,byte *param_2)

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



undefined8 FUN_004017fd(undefined4 param_1)

{
  FUN_004021f0(0);
  FUN_00402941(param_1);
  DAT_00407838 = (undefined4)DAT_00404648;
  return 0xffffffffffffffff;
}



undefined8 FUN_00401816(void)

{
  DAT_00407838 = (undefined4)DAT_00404648;
  return 0xffffffffffffffff;
}



undefined8 FUN_00401826(void)

{
  DAT_00407838 = DAT_00404658;
  return 0xffffffffffffffff;
}



undefined8 FUN_00401836(void)

{
  DAT_00407838 = DAT_00404660;
  return 0xffffffffffffffff;
}



undefined8 FUN_00401846(void)

{
  DAT_00407838 = DAT_00404668;
  return 0xffffffffffffffff;
}



undefined8 FUN_00401856(void)

{
  DAT_00407838 = DAT_00404670;
  return 0xffffffffffffffff;
}



ulong FUN_00401d0b(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint local_4c;
  undefined local_48 [40];
  
  for (; (param_3 != 0 && (*(long *)(param_2 + 8) == 0)); param_2 = param_2 + 0x10) {
    param_3 = param_3 + -1;
  }
  FUN_00401dad(param_4,local_48);
  iVar1 = (*DAT_00403060)();
  if (iVar1 == 0) {
    uVar3 = FUN_0040297a();
  }
  else {
    if (local_4c == 0) {
      for (lVar2 = 0; param_3 != lVar2; lVar2 = lVar2 + 1) {
      }
    }
    (*DAT_00403020)();
    uVar3 = (ulong)local_4c;
  }
  return uVar3;
}



undefined4 * FUN_00401dad(long param_1,undefined4 *param_2)

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



void FUN_00401dd2(void)

{
  (*DAT_00403040)();
  return;
}



void FUN_00401deb(void)

{
  (*DAT_00403048)();
  return;
}



int FUN_00401e0a(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_00406038;
  iVar2 = FUN_00401eaa(param_1,DAT_00406038);
  if ((iVar2 != -1) && (iVar3 = FUN_00401e45(10,uVar1), iVar3 != -1)) {
    return iVar2 + 1;
  }
  return -1;
}



ulong FUN_00401e45(uint param_1,char *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_1 == 0xffffffff) {
LAB_00401ea0:
    uVar2 = FUN_00401f6e(param_2);
  }
  else {
    *(char *)(*(long *)(param_2 + 0x18) + (ulong)*(uint *)(param_2 + 0x14)) = (char)param_1;
    uVar1 = *(int *)(param_2 + 0x14) + 1U & *(int *)(param_2 + 0x20) - 1U;
    *(uint *)(param_2 + 0x14) = uVar1;
    if (((uVar1 == *(uint *)(param_2 + 0x10)) || (*param_2 == '\x02')) ||
       ((*param_2 == '\x01' && ((char)param_1 == '\n')))) {
      if (*(code **)(param_2 + 0x30) != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00401e94. Too many branches
                    // WARNING: Treating indirect jump as call
        uVar2 = (**(code **)(param_2 + 0x30))(param_2);
        return uVar2;
      }
      if (uVar1 == *(uint *)(param_2 + 0x10)) goto LAB_00401ea0;
    }
    uVar2 = (ulong)(param_1 & 0xff);
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00401eaa(char *param_1,char *param_2)

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
LAB_00401f56:
      iVar4 = iVar4 + 1;
    }
    if (*(code **)(param_2 + 0x30) == (code *)0x0) {
      if (uVar2 != *(uint *)(param_2 + 0x10)) goto LAB_00401f56;
      iVar3 = FUN_00401f6e(param_2);
    }
    else {
      iVar3 = (**(code **)(param_2 + 0x30))(param_2);
    }
    if (iVar3 != -1) goto LAB_00401f56;
    iVar3 = FUN_00401fa1(param_2);
    if (iVar3 != _DAT_00404650) {
      iVar4 = FUN_00401f97(param_2);
      if (iVar4 != 0) {
        DAT_00407838 = (undefined4)DAT_00404678;
        *(undefined4 *)(param_2 + 8) = DAT_00407838;
      }
      return -1;
    }
  } while( true );
}



void FUN_00401f6e(undefined8 param_1)

{
  FUN_00401f76(param_1,0xffffffff);
  return;
}



undefined8 FUN_00401f76(long param_1,int param_2)

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
    DAT_00407838 = param_2;
  }
  return 0xffffffffffffffff;
}



bool FUN_00401f97(long param_1)

{
  return *(int *)(param_1 + 8) == -1;
}



undefined4 FUN_00401fa1(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (-1 < *(int *)(param_1 + 8)) {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined  [16] FUN_00401faf(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uStack40;
  
  if (param_1 == 0) {
    uVar2 = 0;
    lVar3 = DAT_00406040;
    while (lVar3 = lVar3 + -1, lVar3 != -1) {
      if (*(long *)(DAT_00406050 + lVar3 * 8) != 0) {
        iVar1 = FUN_00401faf();
        if (iVar1 == -1) goto LAB_00401fee;
        uVar2 = uVar2 + iVar1;
      }
    }
  }
  else {
    uVar2 = 0;
    if ((*(int *)(param_1 + 0xc) != -1) && ((_DAT_00404688 & *(uint *)(param_1 + 4)) != 0)) {
      uVar2 = *(uint *)(param_1 + 8);
      if (uVar2 == 0) {
        while (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x14)) {
          iVar1 = FUN_00402083();
          if (iVar1 == -1) goto LAB_00401fee;
          uVar2 = uVar2 + iVar1;
        }
      }
      else if (uVar2 == 0xffffffff) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_00401f76(param_1,uVar2);
      }
    }
  }
LAB_0040204f:
  return CONCAT88(uStack40,(ulong)uVar2);
LAB_00401fee:
  uVar2 = 0xffffffff;
  goto LAB_0040204f;
}



ulong FUN_00402083(long param_1)

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
  lVar2 = FUN_0040247a(*(undefined4 *)(param_1 + 0xc),(ulong)uVar1 + *(long *)(param_1 + 0x18),
                       uVar4 - uVar1);
  if (lVar2 == -1) {
    uVar3 = FUN_00402150(param_1);
  }
  else {
    *(uint *)(param_1 + 0x10) =
         (int)lVar2 + *(int *)(param_1 + 0x10) & *(int *)(param_1 + 0x20) - 1U;
    uVar3 = (ulong)(uVar4 - uVar1);
  }
  return uVar3;
}



void FUN_00402150(undefined8 param_1)

{
  FUN_00401f76(param_1,DAT_00407838);
  return;
}



// WARNING: Removing unreachable block (ram,0x0040219a)
// WARNING: Removing unreachable block (ram,0x004021ab)

undefined8 FUN_0040215b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (DAT_004060a0 == (uint *)0x0) {
    DAT_004060a0 = &DAT_004060a8;
  }
  puVar2 = DAT_004060a0;
  if (*DAT_004060a0 == 0xffffffff) {
    uVar4 = FUN_00401836();
  }
  else {
    uVar3 = ~*DAT_004060a0;
    uVar1 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> uVar1 == 0; uVar1 = uVar1 - 1) {
      }
    }
    *DAT_004060a0 = *DAT_004060a0 | 1 << (uVar1 & 0x1f);
    uVar4 = 0;
    *(undefined8 *)(puVar2 + (ulong)uVar1 * 6 + 4) = param_1;
    *(undefined8 *)(puVar2 + (ulong)uVar1 * 6 + 6) = param_2;
    *(undefined8 *)(puVar2 + (ulong)uVar1 * 6 + 8) = param_3;
  }
  return uVar4;
}



// WARNING: Removing unreachable block (ram,0x0040226a)

undefined8 FUN_004021f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  puVar1 = DAT_004060a0;
  puVar2 = DAT_004060a0;
joined_r0x0040220a:
  do {
    DAT_004060a0 = puVar2;
    if (puVar1 == (uint *)0x0) {
      return param_3;
    }
    uVar3 = *puVar1;
    do {
      do {
        if (uVar3 == 0) {
          puVar1 = *(uint **)(puVar1 + 2);
          puVar2 = puVar1;
          if (param_1 != 0) {
            puVar2 = DAT_004060a0;
          }
          goto joined_r0x0040220a;
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
    puVar1 = DAT_004060a0;
    puVar2 = DAT_004060a0;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00402361)
// WARNING: Removing unreachable block (ram,0x00402373)
// WARNING: Removing unreachable block (ram,0x00402380)
// WARNING: Removing unreachable block (ram,0x00402389)
// WARNING: Removing unreachable block (ram,0x00402394)

undefined8 FUN_00402286(long *param_1,ulong *param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  FUN_004023ce(*param_1);
  FUN_004023ce(*param_1);
  uVar2 = *param_2;
  if (*param_1 == 0) {
    uVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(param_3),0);
    uVar4 = 4;
    if (3 < uVar3) {
      uVar4 = uVar3;
    }
  }
  else {
    uVar4 = (uVar2 >> 1) + uVar2;
  }
  if ((((uVar2 == 0) || (((param_3 | uVar2) & 0xffffffffffff0000) == 0)) ||
      (uVar3 = (param_3 * uVar2) % uVar2, param_3 == (param_3 * uVar2) / uVar2)) &&
     (((uVar1 = uVar4 + 1 + param_4, uVar1 == 0 || (((param_3 | uVar1) & 0xffffffffffff0000) == 0))
      || (uVar3 = (param_3 * uVar1) % uVar1, param_3 == (param_3 * uVar1) / uVar1)))) {
    FUN_00401836();
  }
  else {
    FUN_00401856(uVar2,uVar4,uVar3);
  }
  return 0;
}



bool FUN_004023ce(long param_1)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  
  if (param_1 - 0x600000000000U < 0x100000000000) {
    return false;
  }
  iVar2 = (int)((ulong)param_1 >> 0x10);
  lVar1 = FUN_0040243f(param_1 >> 0x10 & 0xffffffff,&DAT_004063c8,DAT_004063c0);
  bVar3 = false;
  if (lVar1 != 0) {
    bVar3 = true;
    if (*(int *)(&DAT_004063c0 + lVar1) != iVar2) {
      bVar3 = *(int *)(&DAT_004063cc + (lVar1 + -1) * 8) == iVar2;
    }
  }
  return bVar3;
}



long FUN_0040243f(int param_1,long param_2,int param_3)

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



bool FUN_0040245f(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(int *)((long)param_1 * 0x18 + DAT_004076b0 + 0x10) == param_2;
  }
  return bVar1;
}



long FUN_0040247a(int param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 local_38;
  undefined8 local_30;
  
  if (param_1 == -1) {
    iVar2 = FUN_00401826();
    lVar3 = (long)iVar2;
  }
  else {
    cVar1 = FUN_0040245f(param_1,5);
    local_38 = param_2;
    local_30 = param_3;
    if (cVar1 == '\0') {
      if (((byte)DAT_00404630 & 4) == 0) {
        lVar3 = FUN_004025c0(param_1,param_2,param_3);
      }
      else {
        cVar1 = FUN_0040245f((long)param_1 & 0xffffffff,2);
        if (cVar1 == '\0') {
          cVar1 = FUN_0040245f(param_1,1);
          if ((cVar1 == '\0') && (cVar1 = FUN_0040245f(param_1,4), cVar1 == '\0')) {
            lVar3 = FUN_00401816();
            return lVar3;
          }
          lVar3 = FUN_00401d0b((long)param_1 * 0x18 + DAT_004076b0,&local_38,1,0xffffffffffffffff);
        }
        else {
          lVar3 = (*(code *)0x0)((long)param_1 * 0x18 + DAT_004076b0,&local_38,1,0,0,0);
        }
      }
    }
    else {
      lVar3 = (*(code *)0x0)(*(undefined8 *)((long)param_1 * 0x18 + DAT_004076b0),&local_38,1,
                             0xffffffffffffffff);
    }
  }
  return lVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004025b0(void)

{
                    // WARNING: Could not recover jumptable at 0x004025ba. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_00404638)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004025c0(void)

{
                    // WARNING: Could not recover jumptable at 0x004025ca. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_00404638)();
  return;
}



void FUN_0040262d(void)

{
  FUN_0040266f();
  return;
}



undefined  [16] FUN_0040266f(long param_1,uint *param_2,undefined8 param_3)

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



void FUN_00402750(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = 0x20;
  if (param_3 < 0x20) {
    uVar1 = param_3;
  }
                    // WARNING: Could not emulate address calculation at 0x0040275d
                    // WARNING: Treating indirect jump as call
  (**(code **)(&DAT_00404420 + uVar1 * 8))();
  return;
}



void FUN_00402870(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = 0x20;
  if (param_3 < 0x20) {
    uVar1 = param_3;
  }
                    // WARNING: Could not emulate address calculation at 0x00402887
                    // WARNING: Treating indirect jump as call
  (**(code **)(&DAT_00404528 + uVar1 * 8))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00402941(void)

{
  _DAT_0040783c = _DAT_0040783c | 4;
  if (((byte)DAT_00404630 & 4) == 0) {
    syscall();
    InterruptDescriptorTableRegister(0);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  do {
    (*DAT_00403018)();
  } while( true );
}



undefined8 FUN_0040297a(void)

{
  undefined8 uVar1;
  
  if (((byte)DAT_00404630 & 4) != 0) {
    DAT_00407838 = FUN_00401deb();
    return 0xffffffffffffffff;
  }
  uVar1 = FUN_00401846();
  return uVar1;
}


