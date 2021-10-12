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
    if (uVar3 == 0x3000) break;
    *(undefined2 *)(in_FS_OFFSET + (int)(((uint)unaff_RBX & 0xffff0000) + param_3)) =
         *(undefined2 *)(in_FS_OFFSET + (int)(CONCAT22(uVar5,0x4000) + param_3));
  }
  uVar4 = unaff_RBX & 0xffffffffffff0000 | 0x3000;
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

undefined8 entry(void)

{
  long lVar1;
  undefined4 uVar2;
  code **ppcVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  int in_stack_00000000;
  
  DAT_00403000 = 8;
  puVar5 = &DAT_00402010;
  for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = &LAB_00401214;
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
  FUN_00401297();
  _DAT_0040335c = _DAT_0040335c | 1;
  for (ppcVar3 = (code **)&DAT_00402008; ppcVar3 != (code **)&DAT_00402008; ppcVar3 = ppcVar3 + 1) {
    (**ppcVar3)();
  }
  uVar2 = FUN_0040134d((long)in_stack_00000000,&stack0x00000008,
                       &stack0x00000018 + (long)in_stack_00000000 * 8);
  FUN_00401907(0);
  FUN_00401aa1(uVar2);
  _DAT_00403358 = (undefined4)DAT_00403018;
  return 0xffffffffffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00401297(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong *puVar7;
  long *unaff_R15;
  undefined8 uStack40;
  long lStack32;
  
  if ((_DAT_00403000 & 8) == 0) {
    if ((_DAT_00403000 & 0x20) == 0) {
      if ((_DAT_00403000 & 4) == 0) {
        if (*unaff_R15 == 0) {
          lStack32 = 0x2a;
          uStack40 = 0x10;
          pbVar5 = &DAT_00401ef1;
        }
        else {
          lStack32 = 0;
          uStack40 = 1;
          pbVar5 = &DAT_00401eed;
        }
      }
      else {
        lStack32 = 0x22;
        uStack40 = 4;
        pbVar5 = &DAT_00401ef5;
      }
    }
    else {
      lStack32 = 0x30;
      uStack40 = 0x20;
      pbVar5 = &DAT_00401ee9;
    }
  }
  else {
    lStack32 = 0x45;
    uStack40 = 8;
    pbVar5 = &DAT_00401ef8;
  }
  _DAT_00403000 = uStack40;
  DAT_00403008 = &DAT_0040199d + lStack32;
  for (puVar7 = &DAT_00403018; puVar7 < &DAT_00403030; puVar7 = puVar7 + 1) {
    bVar3 = 0;
    uVar4 = 0;
    pbVar6 = pbVar5;
    do {
      pbVar5 = pbVar6 + 1;
      bVar1 = *pbVar6;
      bVar2 = bVar3 & 0x3f;
      bVar3 = bVar3 + 7;
      uVar4 = uVar4 | (ulong)(bVar1 & 0x7f) << bVar2;
      pbVar6 = pbVar5;
    } while ((char)bVar1 < '\0');
    if ((bVar1 & 0x40) != 0) {
      uVar4 = uVar4 | -1 << (bVar3 & 0x3f);
    }
    if (*puVar7 != 0) {
      uVar4 = *puVar7;
    }
    *puVar7 = uVar4;
  }
  return;
}



undefined8 FUN_0040134d(void)

{
  return 0x2a;
}



// WARNING: Removing unreachable block (ram,0x00401981)

undefined8 FUN_00401907(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  puVar2 = DAT_00403040;
  puVar4 = DAT_00403040;
joined_r0x00401921:
  do {
    DAT_00403040 = puVar4;
    if (puVar2 == (uint *)0x0) {
      return param_3;
    }
    uVar5 = *puVar2;
    do {
      do {
        if (uVar5 == 0) {
          puVar2 = *(uint **)(puVar2 + 2);
          puVar4 = puVar2;
          if (param_1 != 0) {
            puVar4 = DAT_00403040;
          }
          goto joined_r0x00401921;
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
    puVar2 = DAT_00403040;
    puVar4 = DAT_00403040;
  } while( true );
}



void FUN_004019fa(void)

{
  FUN_00401a3c();
  return;
}



undefined  [16] FUN_00401a3c(long param_1,uint *param_2,undefined8 param_3)

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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00401aa1(void)

{
  _DAT_0040335c = _DAT_0040335c | 4;
  if ((DAT_00403000 & 4) == 0) {
    syscall();
    InterruptDescriptorTableRegister(0);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  do {
    (*DAT_00402010)();
  } while( true );
}


