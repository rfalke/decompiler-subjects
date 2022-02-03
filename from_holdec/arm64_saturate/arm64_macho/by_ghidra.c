typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    undefined1;
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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 entry(void)

{
  undefined uVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  
  __stubs::_puts("=== signed add with saturation");
  lVar4 = 0;
  do {
    lVar3 = (long)(int)(char)(&DAT_100003ea8)[lVar4];
    _inst_sqadd(lVar3,0xffffffffffffff80);
    __stubs::_printf("%4d + %4d = (%4d/%4d) %4d/0x%02x %ld \n");
    _inst_sqadd(lVar3,0xffffffffffffff81);
    __stubs::_printf("%4d + %4d = (%4d/%4d) %4d/0x%02x %ld \n");
    _inst_sqadd(lVar3,0xfffffffffffffffe);
    __stubs::_printf("%4d + %4d = (%4d/%4d) %4d/0x%02x %ld \n");
    _inst_sqadd(lVar3,0xffffffffffffffff);
    __stubs::_printf("%4d + %4d = (%4d/%4d) %4d/0x%02x %ld \n");
    _inst_sqadd(lVar3,0);
    __stubs::_printf("%4d + %4d = (%4d/%4d) %4d/0x%02x %ld \n");
    _inst_sqadd(lVar3,1);
    __stubs::_printf("%4d + %4d = (%4d/%4d) %4d/0x%02x %ld \n");
    _inst_sqadd(lVar3,2);
    __stubs::_printf("%4d + %4d = (%4d/%4d) %4d/0x%02x %ld \n");
    _inst_sqadd(lVar3,0x7e);
    __stubs::_printf("%4d + %4d = (%4d/%4d) %4d/0x%02x %ld \n");
    _inst_sqadd(lVar3,0x7f);
    __stubs::_printf("%4d + %4d = (%4d/%4d) %4d/0x%02x %ld \n");
    lVar4 = lVar4 + 1;
  } while (lVar4 != 9);
  __stubs::_puts("=== unsigned add with saturation");
  lVar4 = 0;
  do {
    uVar1 = (&DAT_100003eb1)[lVar4];
    _inst_uqadd(uVar1,0);
    __stubs::_printf("%4d - %4d = (%4d/%4d) %4d/0x%02x %ld\n");
    _inst_uqadd(uVar1,1);
    __stubs::_printf("%4d - %4d = (%4d/%4d) %4d/0x%02x %ld\n");
    _inst_uqadd(uVar1,2);
    __stubs::_printf("%4d - %4d = (%4d/%4d) %4d/0x%02x %ld\n");
    _inst_uqadd(uVar1,0x7e);
    __stubs::_printf("%4d - %4d = (%4d/%4d) %4d/0x%02x %ld\n");
    _inst_uqadd(uVar1,0x7f);
    __stubs::_printf("%4d - %4d = (%4d/%4d) %4d/0x%02x %ld\n");
    _inst_uqadd(uVar1,0x80);
    __stubs::_printf("%4d - %4d = (%4d/%4d) %4d/0x%02x %ld\n");
    _inst_uqadd(uVar1,0x81);
    __stubs::_printf("%4d - %4d = (%4d/%4d) %4d/0x%02x %ld\n");
    _inst_uqadd(uVar1,0xfe);
    __stubs::_printf("%4d - %4d = (%4d/%4d) %4d/0x%02x %ld\n");
    _inst_uqadd(uVar1,0xff);
    __stubs::_printf("%4d - %4d = (%4d/%4d) %4d/0x%02x %ld\n");
    lVar4 = lVar4 + 1;
  } while (lVar4 != 9);
  __stubs::_puts("=== left shift variants with saturation");
  lVar4 = 0;
  do {
    uVar1 = (&DAT_100003eba)[lVar4];
    lVar3 = -8;
    do {
      if (lVar3 < 0) {
        pcVar2 = "0x%02x>>%d";
      }
      else {
        pcVar2 = "0x%02x<<%d";
      }
      __stubs::_printf(pcVar2);
      __stubs::_printf(" || ");
      _inst_sshl(uVar1,lVar3);
      __stubs::_printf("0x%02x");
      _inst_srshl(uVar1,lVar3);
      __stubs::_printf(" | 0x%02x");
      _inst_sqshl(uVar1,lVar3);
      __stubs::_printf(" | 0x%02x %ld");
      _inst_sqrshl(uVar1,lVar3);
      __stubs::_printf(" | 0x%02x %ld");
      __stubs::_printf(" || ");
      _inst_ushl(uVar1,lVar3);
      __stubs::_printf("0x%02x");
      _inst_urshl(uVar1,lVar3);
      __stubs::_printf(" | 0x%02x");
      _inst_uqshl(uVar1,lVar3);
      __stubs::_printf(" | 0x%02x %ld");
      _inst_uqrshl(uVar1,lVar3);
      __stubs::_printf(" | 0x%02x %ld");
      __stubs::_putchar(10);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 9);
    __stubs::_putchar(10);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 5);
  return 0;
}



undefined8 _inst_sqadd(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  
  uVar1 = cRead_8(fpsr);
  cWrite_8(fpsr,uVar1 & 0xfffffffff7ffffff);
  auVar3 = NEON_sqadd(ZEXT816(param_1),ZEXT816(param_2),1);
  uVar2 = cRead_8(fpsr);
  _dest_qc = ((uint)uVar2 >> 0x1b & 1) != 0;
  _dest_signed_output = SUB161(auVar3,0);
  return 0;
}



undefined8 _inst_uqadd(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  
  uVar1 = cRead_8(fpsr);
  cWrite_8(fpsr,uVar1 & 0xfffffffff7ffffff);
  auVar3 = NEON_uqadd(ZEXT816(param_1),ZEXT816(param_2),1);
  uVar2 = cRead_8(fpsr);
  _dest_qc = ((uint)uVar2 >> 0x1b & 1) != 0;
  _dest_unsigned_output = SUB161(auVar3,0);
  return 0;
}



undefined8 _inst_sshl(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  
  uVar1 = cRead_8(fpsr);
  cWrite_8(fpsr,uVar1 & 0xfffffffff7ffffff);
  auVar3 = NEON_sshl(ZEXT816(param_1),ZEXT816(param_2),1);
  uVar2 = cRead_8(fpsr);
  _dest_qc = ((uint)uVar2 >> 0x1b & 1) != 0;
  _dest_unsigned_output = SUB161(auVar3,0);
  return 0;
}



undefined8 _inst_srshl(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  
  uVar1 = cRead_8(fpsr);
  cWrite_8(fpsr,uVar1 & 0xfffffffff7ffffff);
  auVar3 = NEON_srshl(ZEXT816(param_1),ZEXT816(param_2),1);
  uVar2 = cRead_8(fpsr);
  _dest_qc = ((uint)uVar2 >> 0x1b & 1) != 0;
  _dest_unsigned_output = SUB161(auVar3,0);
  return 0;
}



undefined8 _inst_sqshl(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  
  uVar1 = cRead_8(fpsr);
  cWrite_8(fpsr,uVar1 & 0xfffffffff7ffffff);
  auVar3 = NEON_sqshl(ZEXT816(param_1),ZEXT816(param_2),1);
  uVar2 = cRead_8(fpsr);
  _dest_qc = ((uint)uVar2 >> 0x1b & 1) != 0;
  _dest_unsigned_output = SUB161(auVar3,0);
  return 0;
}



undefined8 _inst_sqrshl(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  
  uVar1 = cRead_8(fpsr);
  cWrite_8(fpsr,uVar1 & 0xfffffffff7ffffff);
  auVar3 = NEON_sqrshl(ZEXT816(param_1),ZEXT816(param_2),1);
  uVar2 = cRead_8(fpsr);
  _dest_qc = ((uint)uVar2 >> 0x1b & 1) != 0;
  _dest_unsigned_output = SUB161(auVar3,0);
  return 0;
}



undefined8 _inst_ushl(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  
  uVar1 = cRead_8(fpsr);
  cWrite_8(fpsr,uVar1 & 0xfffffffff7ffffff);
  auVar3 = NEON_ushl(ZEXT816(param_1),ZEXT816(param_2),1);
  uVar2 = cRead_8(fpsr);
  _dest_qc = ((uint)uVar2 >> 0x1b & 1) != 0;
  _dest_unsigned_output = SUB161(auVar3,0);
  return 0;
}



undefined8 _inst_urshl(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  
  uVar1 = cRead_8(fpsr);
  cWrite_8(fpsr,uVar1 & 0xfffffffff7ffffff);
  auVar3 = NEON_urshl(ZEXT816(param_1),ZEXT816(param_2),1);
  uVar2 = cRead_8(fpsr);
  _dest_qc = ((uint)uVar2 >> 0x1b & 1) != 0;
  _dest_unsigned_output = SUB161(auVar3,0);
  return 0;
}



undefined8 _inst_uqshl(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  
  uVar1 = cRead_8(fpsr);
  cWrite_8(fpsr,uVar1 & 0xfffffffff7ffffff);
  auVar3 = NEON_uqshl(ZEXT816(param_1),ZEXT816(param_2),1);
  uVar2 = cRead_8(fpsr);
  _dest_qc = ((uint)uVar2 >> 0x1b & 1) != 0;
  _dest_unsigned_output = SUB161(auVar3,0);
  return 0;
}



undefined8 _inst_uqrshl(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  
  uVar1 = cRead_8(fpsr);
  cWrite_8(fpsr,uVar1 & 0xfffffffff7ffffff);
  auVar3 = NEON_uqrshl(ZEXT816(param_1),ZEXT816(param_2),1);
  uVar2 = cRead_8(fpsr);
  _dest_qc = ((uint)uVar2 >> 0x1b & 1) != 0;
  _dest_unsigned_output = SUB161(auVar3,0);
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

int __stubs::_putchar(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)__got::_putchar)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __stubs::_puts(char *param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)__got::_puts)((int)param_1);
  return iVar1;
}


