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
  undefined8 in_RAX;
  char *pcVar1;
  byte bVar2;
  
  bVar2 = 0;
  while( true ) {
    pcVar1 = (char *)(ulong)param_1;
    param_1 = param_1 + 1 + (uint)bVar2 * -2;
    if (*pcVar1 == '\0') break;
    in_RAX = FUN_00400675(CONCAT71((int7)((ulong)in_RAX >> 8),*pcVar1) & 0xffffffff);
  }
  return;
}



undefined  [16] FUN_00400675(undefined param_1,short param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 in_RAX;
  undefined auVar2 [16];
  
  do {
    bVar1 = in(param_2 + 5);
  } while ((bVar1 & 0x20) == 0);
  out(param_2,param_1);
  auVar2._8_8_ = param_3;
  auVar2._0_8_ = in_RAX;
  return auVar2;
}



undefined8 FUN_00400691(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)(0);
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  return 0;
}



ulong FUN_004006c3(uint param_1,ulong param_2)

{
  char cVar1;
  undefined7 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 unaff_RBX;
  ulong uVar6;
  uint uVar7;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  byte bVar12;
  ulong uVar8;
  
  bVar12 = 0;
  uVar7 = (int)&stack0xfffffffffffffff8 - 0x10;
  uVar8 = (ulong)uVar7;
  param_2 = param_2 & 0xffffffff;
  *(char *)(ulong)uVar7 = (char)param_2;
  pcVar11 = (char *)(ulong)param_1;
  *(undefined8 *)(uVar8 - 8) = 1;
  uVar3 = *(ulong *)(uVar8 - 8);
  *(undefined8 *)(uVar8 - 8) = unaff_RBX;
  uVar3 = uVar3 & 0xffffffff;
  uVar6 = (ulong)(param_1 >> 8) & 0xffffffffffff80;
  uVar4 = CONCAT62((int6)(uVar6 >> 8),CONCAT11((char)uVar6 + '\x0f',0xa0));
  uVar6 = CONCAT71((uint7)((ulong)unaff_RBX >> 8) & 0xffffffffffff00,0xa0);
  pcVar10 = (char *)(ulong)uVar7;
  do {
    uVar7 = (uint)pcVar11;
    iVar5 = (int)uVar6;
    if ((uint)uVar4 == uVar7) {
      *(ulong *)(uVar8 - 0x10) = param_2;
      *(ulong *)(uVar8 - 0x18) = uVar3;
      *(undefined8 *)(uVar8 - 0x20) = uVar4;
      *(char **)(uVar8 - 0x28) = pcVar10;
      *(ulong *)(uVar8 - 0x30) = param_2;
      *(undefined8 *)(uVar8 - 0x30) = 0x40073a;
      uVar7 = FUN_00400748(pcVar11,uVar6 & 0xffffffff);
      pcVar11 = (char *)(ulong)uVar7;
      pcVar9 = *(char **)(uVar8 - 0x28);
      uVar4 = *(undefined8 *)(uVar8 - 0x20);
      uVar3 = *(ulong *)(uVar8 - 0x18);
      param_2 = *(ulong *)(uVar8 - 0x10);
    }
    else {
      if (uVar7 < (uint)uVar4) break;
      pcVar9 = pcVar10 + (ulong)bVar12 * -2 + 1;
      cVar1 = *pcVar10;
      uVar2 = (undefined7)(param_2 >> 8);
      param_2 = CONCAT71(uVar2,cVar1);
      if (cVar1 == '\n') {
        pcVar11 = (char *)(ulong)(uVar7 + iVar5);
      }
      else if (cVar1 == '\r') {
        *(undefined8 *)(uVar8 - 0x10) = uVar4;
        param_2 = (long)((ulong)pcVar11 & 0xffffffff) / (long)iVar5 & 0xffffffff;
        pcVar11 = (char *)(ulong)(uVar7 - (int)((long)((ulong)pcVar11 & 0xffffffff) % (long)iVar5));
        uVar4 = *(undefined8 *)(uVar8 - 0x10);
      }
      else {
        pcVar10 = pcVar11 + (ulong)bVar12 * -2 + 1;
        *pcVar11 = cVar1;
        param_2 = CONCAT71(uVar2,7);
        pcVar11 = pcVar10 + (ulong)bVar12 * -2 + 1;
        *pcVar10 = '\a';
      }
    }
    uVar7 = (int)uVar3 - 1;
    uVar3 = (ulong)uVar7;
    pcVar10 = pcVar9;
  } while (uVar7 != 0);
  return (ulong)pcVar11 & 0xffffffff;
}



int FUN_00400748(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar1 = param_1 & 0xffff8000;
  uVar2 = (param_1 - param_2) - uVar1;
  puVar4 = (undefined *)(ulong)(uVar1 + uVar2);
  puVar5 = (undefined *)(ulong)uVar1;
  for (uVar3 = (ulong)uVar2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return param_1 - param_2;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x004007ac)
// WARNING: Removing unreachable block (ram,0x004007d9)
// WARNING: Removing unreachable block (ram,0x004007ea)
// WARNING: Removing unreachable block (ram,0x004007f2)
// WARNING: Removing unreachable block (ram,0x004007f5)
// WARNING: Removing unreachable block (ram,0x00400805)
// WARNING: Removing unreachable block (ram,0x0040080e)
// WARNING: Removing unreachable block (ram,0x00400813)
// WARNING: Removing unreachable block (ram,0x00400861)
// WARNING: Removing unreachable block (ram,0x00400830)
// WARNING: Removing unreachable block (ram,0x00400844)
// WARNING: Removing unreachable block (ram,0x0040086a)
// WARNING: Removing unreachable block (ram,0x0040084a)
// WARNING: Removing unreachable block (ram,0x0040084e)
// WARNING: Removing unreachable block (ram,0x00400853)
// WARNING: Removing unreachable block (ram,0x00400859)
// WARNING: Removing unreachable block (ram,0x0040085c)
// WARNING: Removing unreachable block (ram,0x00400865)
// WARNING: Removing unreachable block (ram,0x00400867)

void FUN_00400766(void)

{
  code *pcVar1;
  undefined in_CF;
  
  pcVar1 = (code *)swi(0x15);
  (*pcVar1)();
  if (!(bool)in_CF) {
    pcVar1 = (code *)swi(0x15);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x15);
    (*pcVar1)();
    register0x00000020 = (BADSPACEBASE *)&stack0x00000010;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = 0x400791;
  func_0xffffffff89951219();
  in(0xe8);
  *(undefined8 *)((long)register0x00000020 + -8) = 0x4007a8;
  func_0xffffffffed28086f();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0040086d(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  byte *pbVar1;
  undefined in_AL;
  undefined7 in_register_00000001;
  
  GlobalDescriptorTableRegister(*param_2);
  pbVar1 = (byte *)(param_4 + CONCAT71(in_register_00000001,in_AL));
  *pbVar1 = *pbVar1 >> 7 | *pbVar1 << 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00400895(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  undefined4 uVar2;
  byte in_AL;
  undefined in_AH;
  undefined6 in_register_00000002;
  short sVar3;
  undefined8 unaff_RBX;
  long lVar4;
  undefined2 uVar5;
  long in_FS_OFFSET;
  
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  bVar1 = *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL + CARRY1(bVar1,in_AL);
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  param_3 = param_3 | 0xfffc;
  while( true ) {
    sVar3 = (short)param_3 + 4;
    param_3 = CONCAT22((short)(param_3 >> 0x10),sVar3);
    if (sVar3 == 0x4000) break;
    *(undefined2 *)(in_FS_OFFSET + (int)(((uint)unaff_RBX & 0xffff0000) + param_3)) =
         *(undefined2 *)(in_FS_OFFSET + (int)(CONCAT22(uVar5,0x4000) + param_3));
  }
  lVar4 = CONCAT62((int6)((ulong)unaff_RBX >> 0x10),0x4000);
  uVar2 = *(undefined4 *)CONCAT44((int)((ulong)param_2 >> 0x20),CONCAT22(uVar5,0x4000));
  func_0x299c0123(0xb80000,0x4000,param_3,
                  CONCAT31((int3)((uint)uVar2 >> 8),(byte)uVar2 ^ *(byte *)(lVar4 + -0x7acdbdea)),
                  param_5,param_6,lVar4,
                  *(undefined8 *)(lVar4 + -0x77 + ((ulong)&stack0xfffffffffffffff8 & 0xffffffff)));
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



void entry(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  int unaff_retaddr;
  
  DAT_00404630._0_1_ = 8;
  puVar3 = &DAT_00403018;
  for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = &LAB_00401214;
    puVar3 = puVar3 + 1;
  }
  lVar2 = 0xffffffff;
  plVar4 = (long *)(&stack0x00000018 + (long)unaff_retaddr * 8);
  do {
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    lVar1 = *plVar4;
    plVar4 = plVar4 + 1;
  } while (lVar1 != 0);
  FUN_00401524();
  return;
}



void FUN_00401297(void)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  char *pcVar7;
  int iVar8;
  undefined8 uVar9;
  char cVar10;
  byte bVar11;
  char cVar12;
  ulong uVar13;
  char **ppcVar14;
  char **ppcVar15;
  char *pcVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  long *unaff_R15;
  byte bVar22;
  char *apcStack_58 [7];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  bVar22 = 0;
  puVar19 = (undefined8 *)&DAT_00404000;
  uStack_18 = 0;
  uStack_20 = 0x16;
  apcStack_58[6] = (char *)0xffffffff80000007;
  apcStack_58[5] = (char *)0xffffffff80000001;
  apcStack_58[4] = (char *)0x7;
  apcStack_58[3] = (char *)0x2;
  ppcVar14 = apcStack_58 + 2;
  apcStack_58[2] = (char *)0x1;
  uVar9 = 0;
  do {
    iVar8 = (int)uVar9;
    if (iVar8 == 0) {
      puVar2 = (undefined4 *)cpuid_basic_info(0);
    }
    else if (iVar8 == 1) {
      puVar2 = (undefined4 *)cpuid_Version_info(1);
    }
    else if (iVar8 == 2) {
      puVar2 = (undefined4 *)cpuid_cache_tlb_info(2);
    }
    else if (iVar8 == 3) {
      puVar2 = (undefined4 *)cpuid_serial_info(3);
    }
    else if (iVar8 == 4) {
      puVar2 = (undefined4 *)cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (iVar8 == 5) {
      puVar2 = (undefined4 *)cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (iVar8 == 6) {
      puVar2 = (undefined4 *)cpuid_Thermal_Power_Management_info(6);
    }
    else if (iVar8 == 7) {
      puVar2 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (iVar8 == 9) {
      puVar2 = (undefined4 *)cpuid_Direct_Cache_Access_info(9);
    }
    else if (iVar8 == 10) {
      puVar2 = (undefined4 *)cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (iVar8 == 0xb) {
      puVar2 = (undefined4 *)cpuid_Extended_Topology_info(0xb);
    }
    else if (iVar8 == 0xd) {
      puVar2 = (undefined4 *)cpuid_Processor_Extended_States_info(0xd);
    }
    else if (iVar8 == 0xf) {
      puVar2 = (undefined4 *)cpuid_Quality_of_Service_info(0xf);
    }
    else if (iVar8 == -0x7ffffffe) {
      puVar2 = (undefined4 *)cpuid_brand_part1_info(0x80000002);
    }
    else if (iVar8 == -0x7ffffffd) {
      puVar2 = (undefined4 *)cpuid_brand_part2_info(0x80000003);
    }
    else if (iVar8 == -0x7ffffffc) {
      puVar2 = (undefined4 *)cpuid_brand_part3_info(0x80000004);
    }
    else {
      puVar2 = (undefined4 *)cpuid(iVar8);
    }
    uVar3 = puVar2[1];
    uVar4 = puVar2[2];
    uVar5 = puVar2[3];
    *(undefined4 *)puVar19 = *puVar2;
    *(undefined4 *)((long)puVar19 + 4) = uVar3;
    *(undefined4 *)(puVar19 + 1) = uVar5;
    *(undefined4 *)((long)puVar19 + 0xc) = uVar4;
    ppcVar15 = ppcVar14;
    do {
      puVar19 = puVar19 + 2;
      uVar9 = *ppcVar15;
      ppcVar14 = ppcVar15 + 1;
      if ((int)uVar9 == 0) {
        uVar9 = ppcVar15[1];
        cVar12 = '\x11';
        pcVar7 = "\x01";
        do {
          pcVar16 = pcVar7;
          cVar10 = *pcVar16;
          bVar11 = pcVar16[1];
          puVar20 = puVar19;
          do {
            puVar19 = puVar20 + 1;
            *puVar20 = &LAB_004026e7 + bVar11;
            cVar10 = cVar10 + -1;
            puVar20 = puVar19;
          } while (cVar10 != '\0');
          cVar12 = cVar12 + -1;
          pcVar7 = pcVar16 + 2;
        } while (cVar12 != '\0');
        pcVar16 = pcVar16 + 8;
        ppcVar15[1] = (char *)0x4012ff;
        FUN_00401636();
        ppcVar15[1] = (char *)0x401304;
        FUN_004017ec();
        ppcVar15[1] = (char *)0x20;
        ppcVar15[1] = (char *)0x401318;
        FUN_004017be();
        ppcVar15[1] = (char *)0x20;
        ppcVar15[1] = (char *)0x40132c;
        FUN_004017be();
        ppcVar15[1] = (char *)uVar9;
        *ppcVar15 = pcVar16;
        if ((*(byte *)puVar19 & 8) == 0) {
          if ((*(byte *)puVar19 & 0x20) == 0) {
            if ((*(byte *)puVar19 & 4) == 0) {
              if (*unaff_R15 == 0) {
                ppcVar15[-1] = (char *)0x2a;
                ppcVar15[-2] = (char *)0x10;
                pbVar17 = &DAT_00402f17;
              }
              else {
                ppcVar15[-1] = (char *)0x0;
                ppcVar15[-2] = (char *)0x1;
                pbVar17 = &DAT_00402f0c;
              }
            }
            else {
              ppcVar15[-1] = (char *)0x22;
              ppcVar15[-2] = (char *)0x4;
              pbVar17 = &DAT_00402f22;
            }
          }
          else {
            ppcVar15[-1] = (char *)0x30;
            ppcVar15[-2] = (char *)0x20;
            pbVar17 = &DAT_00402f01;
          }
        }
        else {
          ppcVar15[-1] = (char *)0x45;
          ppcVar15[-2] = (char *)0x8;
          pbVar17 = &DAT_00402f33;
        }
        *puVar19 = ppcVar15[-2];
        puVar19[(ulong)bVar22 * -2 + 1] = &DAT_004025d0 + (long)ppcVar15[-1];
        ppcVar15[-1] = (char *)(puVar19 + (ulong)bVar22 * -2 + 1 + (ulong)bVar22 * -2 + 1);
        for (puVar21 = &DAT_00404648; puVar21 < &DAT_00404690;
            puVar21 = puVar21 + (ulong)bVar22 * -2 + 1) {
          bVar11 = 0;
          uVar13 = 0;
          pbVar18 = pbVar17;
          do {
            pbVar17 = pbVar18 + (ulong)bVar22 * -2 + 1;
            bVar1 = *pbVar18;
            bVar6 = bVar11 & 0x3f;
            bVar11 = bVar11 + 7;
            uVar13 = uVar13 | (ulong)(bVar1 & 0x7f) << bVar6;
            pbVar18 = pbVar17;
          } while ((char)bVar1 < '\0');
          if ((bVar1 & 0x40) != 0) {
            uVar13 = uVar13 | -1L << (bVar11 & 0x3f);
          }
          if (*puVar21 != 0) {
            uVar13 = *puVar21;
          }
          *puVar21 = uVar13;
        }
        ppcVar15[1] = (char *)0x1;
        DAT_0040600c = ppcVar15[1];
        DAT_00406004 = DAT_00404688;
        DAT_00406018 = &DAT_00405000;
        DAT_00406020 = 0x1000;
        DAT_00406030 = (code *)&LAB_00402115;
        if (((byte)DAT_00404630 & 2) == 0) {
          DAT_00406030 = FUN_00402083;
        }
        DAT_00406038 = &DAT_00406000;
        return;
      }
      ppcVar15 = ppcVar15 + 1;
    } while (DAT_00404000 < (byte)uVar9);
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
  long lVar7;
  ulong uVar8;
  
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
  lVar7 = DAT_00406040 - 1;
  while (lVar7 != -1) {
    lVar1 = lVar7 * 8;
    lVar7 = lVar7 + -1;
    if (*(long *)(DAT_00406050 + lVar7 * 8 + 8) == 0) {
      *(undefined **)(DAT_00406050 + lVar1) = puVar3;
      return 0;
    }
  }
  uVar2 = DAT_00406040 + 1;
  if (_DAT_00406048 <= uVar2) {
    cVar5 = FUN_00402286(&DAT_00406050,&DAT_00406048,8,1);
    uVar8 = 0xffffffffffffffff;
    if (cVar5 == '\0') goto LAB_00401519;
  }
  *(undefined **)(DAT_00406050 + uVar4 * 8) = puVar3;
  uVar8 = uVar4;
  DAT_00406040 = uVar2;
LAB_00401519:
  return uVar8 & 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_00401524(void)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined **ppuVar4;
  code **ppcVar5;
  bool bVar6;
  uint uStack_f0;
  
  FUN_00401297();
  _DAT_0040783c = _DAT_0040783c | 1;
  ppcVar5 = (code **)&DAT_00403010;
  for (ppuVar4 = &PTR_FUN_00403008; ppcVar5 != (code **)ppuVar4; ppuVar4 = (code **)ppuVar4 + 1) {
    (*(code *)*ppuVar4)();
  }
  iVar3 = FUN_0040141f();
  FUN_004017fd();
  uVar1 = DAT_00407838;
  if ((DAT_00404630 & 4) == 0) {
    iVar3 = FUN_00401609();
    if (iVar3 == -1) {
      DAT_00407838 = uVar1;
      return false;
    }
    bVar6 = (uStack_f0 & 0xf000) == 0x2000;
  }
  else {
    cVar2 = FUN_0040245f();
    if (cVar2 == '\0') {
      return false;
    }
    iVar3 = FUN_00401dd2(*(undefined8 *)((long)iVar3 * 0x18 + DAT_004076b0));
    bVar6 = iVar3 == 2;
  }
  return bVar6;
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



void FUN_004017ec(undefined *param_1,undefined *param_2)

{
  undefined uVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  uVar3 = 0;
  while( true ) {
    puVar4 = param_2 + 1;
    uVar3 = CONCAT71((int7)(uVar3 >> 8),*param_2);
    param_2 = param_2 + 2;
    uVar1 = *puVar4;
    puVar4 = param_1;
    if (uVar3 == 0) break;
    do {
      param_1 = puVar4 + 1;
      *puVar4 = uVar1;
      uVar2 = (int)uVar3 - 1;
      uVar3 = (ulong)uVar2;
      puVar4 = param_1;
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
  undefined auVar4 [16];
  undefined8 uStack_28;
  
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
  auVar4._4_4_ = 0;
  auVar4._0_4_ = uVar2;
  auVar4._8_8_ = uStack_28;
  return auVar4;
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
  undefined auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  
  FUN_004023ce(*param_1);
  FUN_004023ce(*param_1);
  uVar2 = *param_2;
  if (*param_1 == 0) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_3;
    uVar4 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / auVar3,0);
    uVar5 = 4;
    if (3 < uVar4) {
      uVar5 = uVar4;
    }
  }
  else {
    uVar5 = (uVar2 >> 1) + uVar2;
  }
  if ((((uVar2 == 0) || (((param_3 | uVar2) & 0xffffffffffff0000) == 0)) ||
      (uVar4 = (param_3 * uVar2) % uVar2, param_3 == (param_3 * uVar2) / uVar2)) &&
     (((uVar1 = uVar5 + 1 + param_4, uVar1 == 0 || (((param_3 | uVar1) & 0xffffffffffff0000) == 0))
      || (uVar4 = (param_3 * uVar1) % uVar1, param_3 == (param_3 * uVar1) / uVar1)))) {
    FUN_00401836();
  }
  else {
    FUN_00401856(uVar2,uVar5,uVar4);
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
        cVar1 = FUN_0040245f(param_1,2);
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
  undefined auVar6 [16];
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
  auVar6._8_8_ = param_3;
  auVar6._0_8_ = uVar5;
  return auVar6;
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



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00402941(void)

{
  _DAT_0040783c = _DAT_0040783c | 4;
  if (((byte)DAT_00404630 & 4) == 0) {
    syscall();
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
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


