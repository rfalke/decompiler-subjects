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
    if (sVar3 == 0x3000) break;
    *(undefined2 *)(in_FS_OFFSET + (int)(((uint)unaff_RBX & 0xffff0000) + param_3)) =
         *(undefined2 *)(in_FS_OFFSET + (int)(CONCAT22(uVar5,0x4000) + param_3));
  }
  lVar4 = CONCAT62((int6)((ulong)unaff_RBX >> 0x10),0x3000);
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
  
  DAT_00403000._0_1_ = 8;
  puVar3 = &DAT_00402010;
  for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
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
  FUN_00401353();
  return;
}



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
  undefined8 uStack_28;
  long lStack_20;
  
  if ((DAT_00403000 & 8) == 0) {
    if ((DAT_00403000 & 0x20) == 0) {
      if ((DAT_00403000 & 4) == 0) {
        if (*unaff_R15 == 0) {
          lStack_20 = 0x2a;
          uStack_28 = 0x10;
          pbVar5 = &DAT_00401ef1;
        }
        else {
          lStack_20 = 0;
          uStack_28 = 1;
          pbVar5 = &DAT_00401eed;
        }
      }
      else {
        lStack_20 = 0x22;
        uStack_28 = 4;
        pbVar5 = &DAT_00401ef5;
      }
    }
    else {
      lStack_20 = 0x30;
      uStack_28 = 0x20;
      pbVar5 = &DAT_00401ee9;
    }
  }
  else {
    lStack_20 = 0x45;
    uStack_28 = 8;
    pbVar5 = &DAT_00401ef8;
  }
  DAT_00403000 = uStack_28;
  DAT_00403008 = &DAT_0040199d + lStack_20;
  for (puVar7 = (ulong *)&DAT_00403018; puVar7 < &DAT_00403030; puVar7 = puVar7 + 1) {
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
      uVar4 = uVar4 | -1L << (bVar3 & 0x3f);
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_00401353(void)

{
  undefined4 uVar1;
  code **ppcVar2;
  
  FUN_00401297();
  _DAT_0040335c = _DAT_0040335c | 1;
  for (ppcVar2 = (code **)&DAT_00402008; ppcVar2 != (code **)&DAT_00402008; ppcVar2 = ppcVar2 + 1) {
    (**ppcVar2)();
  }
  uVar1 = FUN_0040134d();
  FUN_00401907(0);
  FUN_00401aa1(uVar1);
  _DAT_00403358 = DAT_00403018;
  return 0xffffffffffffffff;
}



// WARNING: Removing unreachable block (ram,0x00401981)

undefined8 FUN_00401907(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  puVar1 = DAT_00403040;
  puVar2 = DAT_00403040;
joined_r0x00401921:
  do {
    DAT_00403040 = puVar2;
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
            puVar2 = DAT_00403040;
          }
          goto joined_r0x00401921;
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
    puVar1 = DAT_00403040;
    puVar2 = DAT_00403040;
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



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00401aa1(void)

{
  _DAT_0040335c = _DAT_0040335c | 4;
  if (((byte)DAT_00403000 & 4) == 0) {
    syscall();
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  do {
    (*DAT_00402010)();
  } while( true );
}


