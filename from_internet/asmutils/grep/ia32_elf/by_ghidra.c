typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __regparm3 entry(uint param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  short **ppsVar5;
  short **ppsVar6;
  short **ppsVar7;
  short *psVar8;
  
code_r0x08048057:
  DAT_0804826f._0_1_ = 1;
  piVar4 = (int *)((int)register0x00000010 + 4);
  iVar3 = *(int *)register0x00000010 + -1;
  if (iVar3 != 0) {
    ppsVar5 = (short **)((int)register0x00000010 + 8);
    do {
      psVar8 = *ppsVar5;
      ppsVar7 = ppsVar5 + 1;
      ppsVar6 = ppsVar5 + 1;
      ppsVar5 = ppsVar5 + 1;
      if (*psVar8 == 0x712d) {
        param_1 = param_1 | 1;
      }
      else if (*psVar8 == 0x632d) {
        param_1 = param_1 | 4;
      }
      else if (*psVar8 == 0x622d) {
        param_1 = param_1 | 0x80;
      }
      else {
        if (*psVar8 != 0x762d) goto LAB_08048093;
        param_1 = param_1 | 2;
      }
      iVar3 = iVar3 + -1;
    } while( true );
  }
  goto LAB_0804804c;
LAB_08048093:
  _DAT_08048274 = _DAT_08048274 & 0xffffff00 | param_1 & 0xff;
  iVar2 = iVar3 + -1;
  if (iVar3 + -1 == 0) goto LAB_080480c5;
  while( true ) {
    _DAT_0804825b = iVar2;
    iVar3 = (int)*ppsVar6;
    piVar4 = (int *)ppsVar6 + 1;
    if (iVar3 == 0) break;
    DAT_08048263 = 0;
    DAT_08048267 = 0;
    *ppsVar6 = (short *)0x5;
    pcVar1 = (code *)swi(0x80);
    DAT_0804825f = iVar3;
    iVar3 = (*pcVar1)();
    ppsVar7 = (short **)((int *)ppsVar6 + 2);
    ppsVar6 = (short **)((int *)ppsVar6 + 2);
    iVar2 = _DAT_0804825b;
    if (-1 < iVar3) {
LAB_080480c5:
      while( true ) {
        *(undefined4 *)((int)ppsVar7 + -4) = 0x80480cf;
        FUN_080481d7();
        if (DAT_08048273 != '\0') break;
        *(undefined4 *)((int)ppsVar7 + -4) = 0x80480f2;
        iVar3 = FUN_0804821c();
        if (((((_DAT_08048274 & 2) == 0) != (iVar3 == 0)) &&
            (DAT_0804826f._0_1_ = 0, (_DAT_08048274 & 1) == 0)) &&
           (DAT_08048263 = DAT_08048263 + 1, (_DAT_08048274 & 4) == 0)) {
          *(undefined4 *)((int)ppsVar7 + -4) = 0x8048123;
          FUN_0804813b();
          *(undefined4 *)((int)ppsVar7 + -4) = 0x8048128;
          FUN_08048168();
          *(undefined4 *)((int)ppsVar7 + -4) = 0x804812d;
          FUN_0804824a();
          *(undefined4 *)((int)ppsVar7 + -4) = 1;
          *(undefined4 *)((int)ppsVar7 + -4) = 4;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          ppsVar7 = (short **)((int)ppsVar7 + 4);
        }
      }
      ppsVar6 = ppsVar7;
      iVar2 = _DAT_0804825b;
      if ((_DAT_08048274 & 4) != 0) {
        *(undefined4 *)((int)ppsVar7 + -4) = 0x80480e6;
        FUN_0804813b();
        *(undefined4 *)((int)ppsVar7 + -4) = 0x80480eb;
        FUN_08048190();
        iVar2 = _DAT_0804825b;
      }
    }
  }
LAB_0804804c:
  *(undefined4 *)((int)piVar4 + -4) = 1;
  pcVar1 = (code *)swi(0x80);
  param_1 = (*pcVar1)();
  register0x00000010 = (BADSPACEBASE *)((int)piVar4 + 4);
  goto code_r0x08048057;
}



undefined8 __regparm3 FUN_0804813b(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  
  iVar2 = DAT_0804825f;
  if (1 < DAT_0804825b) {
    iVar3 = FUN_0804824a();
    *(undefined *)(iVar2 + iVar3) = 0x3a;
    pcVar1 = (code *)swi(0x80);
    param_1 = unaff_retaddr;
    iVar3 = (*pcVar1)();
    *(undefined *)(iVar2 + -1 + iVar3) = 0;
    param_2 = param_3;
  }
  return CONCAT44(param_2,param_1);
}



undefined8 __regparm3 FUN_08048168(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined *unaff_EDI;
  undefined4 unaff_retaddr;
  
  if ((DAT_08048274 & 0x80) != 0) {
    FUN_080481af();
    *unaff_EDI = 0x3a;
    pcVar1 = (code *)swi(0x80);
    param_1 = unaff_retaddr;
    (*pcVar1)();
    param_2 = param_3;
  }
  return CONCAT44(param_2,param_1);
}



undefined8 FUN_08048190(void)

{
  code *pcVar1;
  undefined4 in_ECX;
  undefined *unaff_EDI;
  undefined4 unaff_retaddr;
  
  FUN_080481af();
  *unaff_EDI = 10;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return CONCAT44(in_ECX,unaff_retaddr);
}



void __regparm3 FUN_080481af(uint param_1)

{
  char cVar1;
  
  if (param_1 / 10 != 0) {
    FUN_080481b9();
  }
  cVar1 = (char)(param_1 % 10);
  DAT_08048275 = cVar1 + 0x30;
  if (0x39 < DAT_08048275) {
    DAT_08048275 = cVar1 + 0x57;
  }
  return;
}



void __regparm3 FUN_080481b9(uint param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  char *unaff_EDI;
  char cVar2;
  
  if (param_1 / param_3 != 0) {
    FUN_080481b9();
  }
  cVar2 = (char)(param_1 % param_3);
  cVar1 = cVar2 + '0';
  if ('9' < cVar1) {
    cVar1 = cVar2 + 'W';
  }
  *unaff_EDI = cVar1;
  return;
}



undefined8 FUN_080481d7(void)

{
  code *pcVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *unaff_ESI;
  undefined8 uVar5;
  undefined4 uStack36;
  undefined4 auStack8 [2];
  
  DAT_08048273 = '\x01';
  DAT_0804826b = DAT_08048267;
  puVar3 = &stack0xffffffe0;
  do {
    puVar4 = puVar3;
    *(undefined4 *)(puVar4 + -4) = 1;
    *(undefined4 *)(puVar4 + -4) = 3;
    pcVar1 = (code *)swi(0x80);
    uVar5 = (*pcVar1)();
    cVar2 = DAT_08048273;
    if ((int)uVar5 != (int)((ulonglong)uVar5 >> 0x20)) goto LAB_0804821a;
    DAT_08048267 = DAT_08048267 + 1;
    *unaff_ESI = DAT_08048273;
    unaff_ESI = unaff_ESI + 1;
    puVar3 = puVar4 + 4;
  } while (cVar2 != '\n');
  *unaff_ESI = '\0';
  DAT_08048273 = '\0';
LAB_0804821a:
  return CONCAT44(*(undefined4 *)(puVar4 + 0x18),*(undefined4 *)(puVar4 + 0x20));
}



char * FUN_0804821c(void)

{
  char *pcVar1;
  char *pcVar2;
  char *unaff_ESI;
  char *pcVar3;
  char *unaff_EDI;
  char *pcVar4;
  bool bVar5;
  byte bVar6;
  
  bVar6 = 0;
  pcVar2 = unaff_ESI;
  if ((*unaff_ESI != '\0') &&
     (pcVar1 = (char *)FUN_0804824a(), pcVar2 = pcVar1, pcVar1 != (char *)0x0)) {
    do {
      bVar5 = true;
      pcVar2 = pcVar1;
      pcVar3 = unaff_ESI;
      pcVar4 = unaff_EDI;
      do {
        unaff_ESI = pcVar3;
        if (pcVar2 == (char *)0x0) break;
        pcVar2 = pcVar2 + -1;
        unaff_ESI = pcVar3 + (uint)bVar6 * -2 + 1;
        bVar5 = *pcVar3 == *pcVar4;
        pcVar3 = unaff_ESI;
        pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
      } while (bVar5);
      pcVar2 = unaff_ESI;
    } while ((!bVar5) && (pcVar2 = (char *)0x0, *unaff_ESI != '\0'));
  }
  return pcVar2;
}



int FUN_0804824a(void)

{
  int unaff_ESI;
  char *pcVar1;
  
  pcVar1 = (char *)(unaff_ESI + -1);
  do {
    pcVar1 = pcVar1 + 1;
  } while (*pcVar1 != '\0');
  return (int)pcVar1 - unaff_ESI;
}


