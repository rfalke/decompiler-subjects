typedef unsigned char   undefined;

typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef short    wchar_t;
typedef unsigned short    word;
typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef int BOOL;

typedef struct HINSTANCE__ * HINSTANCE;

typedef ulong DWORD;

typedef HINSTANCE HMODULE;

typedef uint UINT;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_WRITE=2147483648,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_TYPE_NO_PAD=8
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 448
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char * _ptr;
    int _cnt;
    char * _base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char * _tmpfname;
};

typedef struct _iobuf FILE;

typedef wchar_t WCHAR;

typedef void * HANDLE;

typedef WCHAR * LPWSTR;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef uint size_t;




void entry(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_000118a0();
  FUN_0001135c();
  FUN_00011538();
  FUN_00011620();
  FUN_00011648(param_1,param_2,param_3);
  FUN_00011510();
  FUN_000118ac();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 FUN_00011050(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 local_20;
  int local_14;
  
  local_14 = 0;
  do {
    if (*(int *)(local_14 * 4 + param_2) == 0) {
      FUN_00011520();
      return local_20;
    }
    local_14 = local_14 + 1;
    iVar1 = FUN_000118f4();
  } while (iVar1 != 0);
  DAT_00014000 = 1;
  return 1;
}



void FUN_00011108(void)

{
  int iVar1;
  int extraout_r1;
  uint uStack40;
  int iStack36;
  
  FUN_000118dc();
  FUN_00011520();
  FUN_000118d0();
  iVar1 = FUN_00011050(uStack40,extraout_r1);
  if (iVar1 != 0) {
    for (iStack36 = 0; iStack36 < 10; iStack36 = iStack36 + 1) {
      if ((uStack40 & 1) == 0) {
        if (DAT_00014000 == 1) {
          FUN_000118dc();
        }
        FUN_00011520();
      }
    }
  }
  return;
}



void FUN_00011128(undefined4 param_1,int param_2)

{
  int iVar1;
  uint local_18;
  int local_14;
  
  FUN_000118d0();
  iVar1 = FUN_00011050(local_18,param_2);
  if (iVar1 != 0) {
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      if ((local_18 & 1) == 0) {
        if (DAT_00014000 == 1) {
          FUN_000118dc();
        }
        FUN_00011520();
      }
    }
  }
  return;
}



void FUN_000111d8(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint local_20;
  int local_1c;
  uint local_18;
  
  local_1c = 0;
  for (local_18 = 0; uVar1 = FUN_000118c4(), local_18 < uVar1; local_18 = local_18 + 1) {
    FUN_000118d0();
    local_1c = local_1c + local_20;
    if (local_1c == 0x10) {
      FUN_00011128(param_1,param_2);
    }
  }
  FUN_00011108();
  iVar2 = FUN_00011050(local_20,param_2);
  if (iVar2 != 0) {
    for (local_18 = 0; (int)local_18 < 10; local_18 = local_18 + 1) {
      if ((local_20 & 1) == 0) {
        FUN_000118dc();
        FUN_00011520();
      }
    }
  }
  return;
}



undefined4 FUN_000112f0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined auStack116 [100];
  
  FUN_00011620();
  FUN_000118dc();
  FUN_000118e8();
  FUN_000118b8();
  FUN_000111d8(auStack116,param_3);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00011370)
// WARNING: Removing unreachable block (ram,0x00011374)
// WARNING: Removing unreachable block (ram,0x00011390)

void FUN_0001135c(void)

{
  return;
}



void FUN_000113b0(void)

{
  FUN_00011930();
  return;
}



undefined4 FUN_000113e0(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  if ((((param_2 != (int *)0x0) && (param_3 != (int *)0x0 && *param_2 != 0)) && (*param_3 != 0)) &&
     (iVar2 = (*param_3 - *param_2 >> 2) + 1, 0 < iVar2)) {
    iVar1 = FUN_00011924();
    if (iVar1 != 0) {
      *param_2 = iVar1;
      iVar1 = iVar1 + iVar2 * 4;
      *param_3 = iVar1;
      *(undefined4 *)(iVar1 + -4) = param_1;
      return param_1;
    }
  }
  return 0;
}



undefined4 FUN_00011470(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_000113e0(param_1,&DAT_00014004,&DAT_00014008);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_00011498(void)

{
  bool bVar1;
  uint uVar2;
  
  if (DAT_00014004 != 0) {
    if (DAT_00014004 <= DAT_00014008 - 4U) {
      uVar2 = DAT_00014008 - 8;
      do {
        if (*(code **)(uVar2 + 4) != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x000114d8. Too many branches
                    // WARNING: Treating indirect jump as call
          (**(code **)(uVar2 + 4))();
          return;
        }
        bVar1 = DAT_00014004 <= uVar2;
        uVar2 = uVar2 - 4;
      } while (bVar1);
    }
    FUN_0001190c();
    DAT_00014004 = 0;
  }
  FUN_00011918();
  return;
}



void FUN_00011510(void)

{
  FUN_00011498();
  FUN_000113b0();
  return;
}



void FUN_00011520(void)

{
  FUN_00011510();
  FUN_000118ac();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 FUN_00011538(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00011900();
  if (puVar1 == (undefined4 *)0x0) {
    DAT_00014004 = puVar1;
    return 0;
  }
  DAT_00014004 = puVar1;
  *puVar1 = 0;
  DAT_00014008 = puVar1;
  return 1;
}



void FUN_000115b8(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code **ppcVar4;
  
  piVar2 = &DAT_00011984;
  iVar1 = 0;
  do {
    iVar3 = iVar1;
    piVar2 = piVar2 + 1;
    iVar1 = iVar3 + 1;
  } while (*piVar2 != 0);
  if (iVar3 != 0) {
    ppcVar4 = (code **)(&DAT_00011984 + iVar3);
    do {
      (**ppcVar4)();
      iVar3 = iVar3 + -1;
      ppcVar4 = ppcVar4 + -1;
    } while (iVar3 != 0);
  }
  FUN_00011470(&LAB_00011574);
  return;
}



void FUN_00011620(void)

{
  if (DAT_0001400c != 0) {
    return;
  }
  DAT_0001400c = 1;
  FUN_000115b8();
  return;
}



void FUN_00011648(undefined4 param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  FUN_00011960();
  if (param_3 != 0) {
    param_3 = FUN_0001196c();
  }
  iVar3 = FUN_00011900();
  if (iVar3 == 0) {
    FUN_000118ac();
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  DAT_00014014 = (int *)FUN_00011900();
  if (DAT_00014014 == (int *)0x0) {
    FUN_000118ac();
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  *DAT_00014014 = iVar3;
  FUN_0001196c();
  FUN_00011978();
  DAT_00014010 = DAT_00014010 + 1;
  if (0 < param_3) {
    iVar6 = *DAT_00014014;
    iVar3 = FUN_000118c4();
    puVar7 = (undefined *)(iVar6 + iVar3 + 1);
    FUN_00011978();
    iVar3 = FUN_000118c4();
    puVar9 = puVar7 + iVar3;
    if (puVar7 == (undefined *)0x0) {
      DAT_00014010 = 1;
    }
    else {
      iVar3 = 1;
      while( true ) {
        iVar6 = FUN_0001193c();
        puVar8 = puVar7 + iVar6;
        cVar2 = puVar7[iVar6];
        iVar6 = iVar3;
        if (cVar2 == '\0') break;
        puVar5 = &DAT_00013068;
        if (cVar2 != '\"') {
          do {
            pcVar1 = puVar5 + 1;
            if (*pcVar1 == '\0') {
              iVar6 = FUN_00011954();
              puVar7 = puVar8 + iVar6;
              goto LAB_000117e4;
            }
            puVar5 = puVar5 + 1;
          } while (cVar2 != *pcVar1);
        }
        puVar8 = puVar8 + 1;
        puVar7 = (undefined *)FUN_00011948();
        if (puVar7 == (undefined *)0x0) {
          puVar7 = puVar9;
        }
LAB_000117e4:
        *puVar7 = 0;
        iVar6 = iVar3 + 1;
        piVar4 = (int *)FUN_00011924();
        if (piVar4 == (int *)0x0) {
          DAT_00014010 = -1;
          goto LAB_00011834;
        }
        DAT_00014014 = piVar4;
        piVar4[iVar3] = (int)puVar8;
        if (puVar7 == puVar9) break;
        puVar7 = puVar7 + 1;
        iVar3 = iVar6;
      }
      DAT_00014010 = iVar6;
      if (iVar6 < 0) {
LAB_00011834:
        FUN_000118ac();
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    }
  }
  piVar4 = DAT_00014014;
  DAT_00014014[DAT_00014010] = 0;
  FUN_000112f0(DAT_00014010,DAT_00014014,(int)piVar4);
  return;
}



void FUN_000118a0(void)

{
                    // WARNING: Could not recover jumptable at 0x000118a4. Too many branches
                    // WARNING: Treating indirect jump as call
  _fpreset();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void FUN_000118ac(void)

{
                    // WARNING: Could not recover jumptable at 0x000118b0. Too many branches
                    // WARNING: Treating indirect jump as call
  TerminateProcess();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void FUN_000118b8(void)

{
                    // WARNING: Could not recover jumptable at 0x000118bc. Too many branches
                    // WARNING: Treating indirect jump as call
  scanf();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void FUN_000118c4(void)

{
                    // WARNING: Could not recover jumptable at 0x000118c8. Too many branches
                    // WARNING: Treating indirect jump as call
  strlen();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void FUN_000118d0(void)

{
                    // WARNING: Could not recover jumptable at 0x000118d4. Too many branches
                    // WARNING: Treating indirect jump as call
  sscanf();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void FUN_000118dc(void)

{
                    // WARNING: Could not recover jumptable at 0x000118e0. Too many branches
                    // WARNING: Treating indirect jump as call
  puts();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void FUN_000118e8(void)

{
                    // WARNING: Could not recover jumptable at 0x000118ec. Too many branches
                    // WARNING: Treating indirect jump as call
  printf();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void FUN_000118f4(void)

{
                    // WARNING: Could not recover jumptable at 0x000118f8. Too many branches
                    // WARNING: Treating indirect jump as call
  strncmp();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void FUN_00011900(void)

{
                    // WARNING: Could not recover jumptable at 0x00011904. Too many branches
                    // WARNING: Treating indirect jump as call
  malloc();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void FUN_0001190c(void)

{
                    // WARNING: Could not recover jumptable at 0x00011910. Too many branches
                    // WARNING: Treating indirect jump as call
  free();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void FUN_00011918(void)

{
                    // WARNING: Could not recover jumptable at 0x0001191c. Too many branches
                    // WARNING: Treating indirect jump as call
  fflush();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void FUN_00011924(void)

{
                    // WARNING: Could not recover jumptable at 0x00011928. Too many branches
                    // WARNING: Treating indirect jump as call
  realloc();
  return;
}



void FUN_00011930(void)

{
                    // WARNING: Could not recover jumptable at 0x00011934. Too many branches
                    // WARNING: Treating indirect jump as call
  _fcloseall();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void FUN_0001193c(void)

{
                    // WARNING: Could not recover jumptable at 0x00011940. Too many branches
                    // WARNING: Treating indirect jump as call
  strspn();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void FUN_00011948(void)

{
                    // WARNING: Could not recover jumptable at 0x0001194c. Too many branches
                    // WARNING: Treating indirect jump as call
  strchr();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void FUN_00011954(void)

{
                    // WARNING: Could not recover jumptable at 0x00011958. Too many branches
                    // WARNING: Treating indirect jump as call
  strcspn();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void FUN_00011960(void)

{
                    // WARNING: Could not recover jumptable at 0x00011964. Too many branches
                    // WARNING: Treating indirect jump as call
  GetModuleFileNameW();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void FUN_0001196c(void)

{
                    // WARNING: Could not recover jumptable at 0x00011970. Too many branches
                    // WARNING: Treating indirect jump as call
  wcslen();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void FUN_00011978(void)

{
                    // WARNING: Could not recover jumptable at 0x0001197c. Too many branches
                    // WARNING: Treating indirect jump as call
  wcstombs();
  return;
}


