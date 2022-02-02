typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned long    undefined8;
typedef struct uuid_command uuid_command, *Puuid_command;

struct uuid_command {
    dword cmd;
    dword cmdsize;
    byte uuid[16];
};

typedef struct lc_str lc_str, *Plc_str;

struct lc_str {
    dword offset;
};

typedef struct build_tool_version build_tool_version, *Pbuild_tool_version;

struct build_tool_version {
    dword tool;
    dword version;
};

typedef struct build_version_command build_version_command, *Pbuild_version_command;

struct build_version_command {
    dword cmd;
    dword cmdsize;
    dword platform;
    dword minos;
    dword sdk;
    dword ntools;
    struct build_tool_version build_tool_version[][1];
};

typedef struct dylib dylib, *Pdylib;

struct dylib {
    struct lc_str name;
    dword timestamp;
    dword current_version;
    dword compatibility_version;
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

typedef struct entry_point_command entry_point_command, *Pentry_point_command;

struct entry_point_command {
    dword cmd;
    dword cmdsize;
    qword entryoff;
    qword stacksize;
};

typedef struct dyld_chained_fixups_command dyld_chained_fixups_command, *Pdyld_chained_fixups_command;

struct dyld_chained_fixups_command {
    dword cmd;
    dword cmdsize;
    dword dataoff;
    dword datasize;
};

typedef struct dysymtab_command dysymtab_command, *Pdysymtab_command;

struct dysymtab_command {
    dword cmd;
    dword cmdsize;
    dword ilocalsym;
    dword nlocalsym;
    dword iextdefsym;
    dword nextdefsym;
    dword iundefsym;
    dword nundefsym;
    dword tocoff;
    dword ntoc;
    dword modtaboff;
    dword nmodtab;
    dword extrefsymoff;
    dword nextrefsyms;
    dword indirectsymoff;
    dword nindirectsyms;
    dword extreloff;
    dword nextrel;
    dword locreloff;
    dword nlocrel;
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

typedef struct dylib_command dylib_command, *Pdylib_command;

struct dylib_command {
    dword cmd;
    dword cmdsize;
    struct dylib dylib;
};

typedef struct symtab_command symtab_command, *Psymtab_command;

struct symtab_command {
    dword cmd;
    dword cmdsize;
    dword symoff;
    dword nsyms;
    dword stroff;
    dword strsize;
};

typedef struct source_version_command source_version_command, *Psource_version_command;

struct source_version_command {
    dword cmd;
    dword cmdsize;
    qword version;
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

typedef struct linkedit_data_command linkedit_data_command, *Plinkedit_data_command;

struct linkedit_data_command {
    dword cmd;
    dword cmdsize;
    dword dataoff;
    dword datasize;
};

typedef struct dylinker_command dylinker_command, *Pdylinker_command;

struct dylinker_command {
    dword cmd;
    dword cmdsize;
    struct lc_str name;
};




int _sat_addu32b(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = param_1 + param_2;
  if (CARRY4(param_1,param_2)) {
    iVar1 = -1;
  }
  return iVar1;
}



int _sat_subu32b(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 <= param_1) {
    iVar1 = param_1 - param_2;
  }
  return iVar1;
}



uint _sat_divu32b(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_1 / param_2;
  }
  return uVar1;
}



undefined4 _sat_mulu32b(ulong param_1,uint param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = (param_1 & 0xffffffff) * (ulong)param_2;
  uVar1 = (undefined4)uVar2;
  if (uVar2 >> 0x20 != 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



long _sat_addu64b(ulong param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = param_1 + param_2;
  if (CARRY8(param_1,param_2)) {
    lVar1 = -1;
  }
  return lVar1;
}



long _sat_subu64b(ulong param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_2 <= param_1) {
    lVar1 = param_1 - param_2;
  }
  return lVar1;
}



ulong _sat_divu64b(ulong param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_1 / param_2;
  }
  return uVar1;
}



long _sat_mulu64b(ulong param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = param_1 * param_2;
  if (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) != 0) {
    lVar1 = -1;
  }
  return lVar1;
}



int _sat_adds32b_var1(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0x7fffffff;
  if (-1 < param_1 + param_2) {
    iVar1 = -0x80000000;
  }
  if (!SCARRY4(param_1,param_2)) {
    iVar1 = param_1 + param_2;
  }
  return iVar1;
}



uint _sat_adds32b_var2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2 + param_1 ^ param_1;
  uVar3 = 0x7fffffff;
  if ((int)param_1 < 0) {
    uVar3 = 0x80000000;
  }
  uVar1 = param_2 + param_1;
  if ((uVar2 == 0xffffffff || (int)(uVar2 + 1) < 0 != SCARRY4(uVar2,1)) &&
      -1 < (int)(param_2 ^ param_1)) {
    uVar1 = uVar3;
  }
  return uVar1;
}



uint _sat_adds32b_var3(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0x7fffffff - (param_1 >> 0x1f);
  if ((int)(uVar1 ^ param_2 | param_2 + param_1 ^ param_2 ^ 0xffffffff) < 0) {
    uVar1 = param_2 + param_1;
  }
  return uVar1;
}



uint _sat_subs32b(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0x7fffffff - (param_1 >> 0x1f);
  if (-1 < (int)((uVar1 ^ param_2) & (uVar1 ^ param_1 - param_2))) {
    uVar1 = param_1 - param_2;
  }
  return uVar1;
}



int _sat_divs32b(uint param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 + 1U | param_1 ^ 0x80000000) == 0) {
    param_1 = param_1 + 1;
  }
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = (int)param_1 / param_2;
  }
  return iVar1;
}



int _sat_muls32b(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)((long)(int)param_2 * (long)(int)param_1);
  if ((int)((ulong)((long)(int)param_2 * (long)(int)param_1) >> 0x20) != iVar1 >> 0x1f) {
    iVar1 = 0x7fffffff - ((int)(param_2 ^ param_1) >> 0x1f);
  }
  return iVar1;
}



ulong _sat_adds64b(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = 0x7fffffffffffffff - (param_1 >> 0x3f);
  if ((long)(uVar1 ^ param_2 | param_2 + param_1 ^ param_2 ^ 0xffffffffffffffff) < 0) {
    uVar1 = param_2 + param_1;
  }
  return uVar1;
}



ulong _sat_subs64b(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = 0x7fffffffffffffff - (param_1 >> 0x3f);
  if (-1 < (long)((uVar1 ^ param_2) & (uVar1 ^ param_1 - param_2))) {
    uVar1 = param_1 - param_2;
  }
  return uVar1;
}



long _sat_divs64b(ulong param_1,long param_2)

{
  long lVar1;
  
  if ((param_2 + 1U | param_1 ^ 0x8000000000000000) == 0) {
    param_1 = param_1 + 1;
  }
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = (long)param_1 / param_2;
  }
  return lVar1;
}



long _sat_muls64b(ulong param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = param_2 * param_1;
  if (SUB168(SEXT816((long)param_2) * SEXT816((long)param_1) >> 0x40,0) !=
      (long)(param_2 * param_1) >> 0x3f) {
    lVar1 = 0x7fffffffffffffff - ((long)(param_2 ^ param_1) >> 0x3f);
  }
  return lVar1;
}



int _abs32(int param_1)

{
  int iVar1;
  
  iVar1 = -param_1;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  return iVar1;
}



long _abs64(long param_1)

{
  long lVar1;
  
  lVar1 = -param_1;
  if (-1 < param_1) {
    lVar1 = param_1;
  }
  return lVar1;
}



int _sgn32(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 >> 0x1f;
  if (0 < param_1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



long _sgn64(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 >> 0x3f;
  if (0 < param_1) {
    lVar1 = lVar1 + 1;
  }
  return lVar1;
}



undefined8 entry(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  _sat_addu32b(0xffffffff,3);
  __stubs::_printf("sat_addu32b(0x%08x,0x%08x) = 0x%08x\n");
  _sat_subu32b(1,3);
  __stubs::_printf("sat_subu32b(0x%08x,0x%08x) = 0x%08x\n");
  _sat_mulu32b(0xffffffff,3);
  __stubs::_printf("sat_mulu32b(0x%08x,0x%08x) = 0x%08x\n");
  _sat_divu32b(0xffffffff,3);
  __stubs::_printf("sat_divu32b(0x%08x,0x%08x) = 0x%08x\n");
  _sat_adds32b_var1(0x7fffffff,2);
  _sat_adds32b_var2(0x7fffffff,2);
  _sat_adds32b_var3(0x7fffffff,2);
  __stubs::_printf("sat_adds32b(0x%08x,0x%08x) = 0x%08x 0x%08x 0x%08x\n");
  _sat_subs32b(0x80000000,2);
  __stubs::_printf("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n");
  _sat_muls32b(0x7fffffff,2);
  __stubs::_printf("sat_muls32b(0x%08x,0x%08x) = 0x%08x\n");
  _sat_divs32b(0x80000000,0xffffffff);
  __stubs::_printf("sat_divs32b(0x%08x,0x%08x) = 0x%08x\n");
  _abs32(0xfffffff0);
  __stubs::_printf("abs32(0x%08x) = 0x%08x\n");
  _sgn32(3);
  __stubs::_printf("sgn32(0x%08x) = 0x%08x\n");
  lVar1 = _sat_addu64b(0,0);
  lVar2 = _sat_subu64b(0,0);
  lVar3 = _sat_divu64b(0,1);
  lVar4 = _sat_mulu64b(0,0);
  lVar5 = _sat_muls64b(0,0);
  lVar6 = _sat_adds64b(0,0);
  lVar7 = _sat_subs64b(0,0);
  lVar8 = _sat_divs64b(0,1);
  lVar9 = _abs64(0);
  lVar10 = _sgn64(0);
  if (lVar2 + lVar1 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 + lVar10 == 0x2a) {
    __stubs::_puts("not reached");
  }
  return 0;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __stubs::_printf(char *param_1,...)

{
  int iVar1;
  
  iVar1 = (*(code *)__got::_printf)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __stubs::_puts(char *param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)__got::_puts)((int)param_1);
  return iVar1;
}


