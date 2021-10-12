typedef unsigned char   undefined;

typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef ushort WORD;

typedef int BOOL;

typedef uchar BYTE;

typedef void * LPVOID;

typedef ulong DWORD;

typedef long * LPLONG;

typedef uint UINT;

typedef WORD ATOM;

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
    word Machine; // 332
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

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef long LONG;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (* PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD * PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT * PCONTEXT;

typedef void * PVOID;

typedef ulong ULONG_PTR;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
};

struct _CONTEXT {
    DWORD ContextFlags;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    FLOATING_SAVE_AREA FloatSave;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
    BYTE ExtendedRegisters[512];
};

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD * ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct _SECURITY_ATTRIBUTES * LPSECURITY_ATTRIBUTES;

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef char CHAR;

typedef CHAR * LPCSTR;

typedef CHAR * LPSTR;

typedef void * HANDLE;

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

typedef int (* _onexit_t)(void);

typedef uint size_t;

typedef struct _startupinfo _startupinfo, *P_startupinfo;

struct _startupinfo {
    int newmode;
};




void FUN_00401140(void)

{
  int *piVar1;
  UINT uExitCode;
  char **local_10;
  _startupinfo local_c;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_00401000);
  FUN_00401580();
  local_c = 0;
  __getmainargs(&DAT_00406004,(char ***)&DAT_00406000,&local_10,DAT_00404000,&local_c);
  if (DAT_00406040 != 0) {
    DAT_00404010 = DAT_00406040;
    if (_iob_exref != (code *)0x0) {
      _setmode(*(int *)(_iob_exref + 0x10),DAT_00406040);
    }
    if (_iob_exref != (code *)0xffffffe0) {
      _setmode(*(int *)(_iob_exref + 0x30),DAT_00406040);
    }
    if (_iob_exref != (code *)0xffffffc0) {
      _setmode(*(int *)(_iob_exref + 0x50),DAT_00406040);
    }
  }
  piVar1 = (int *)__p__fmode();
  *piVar1 = DAT_00404010;
  FUN_00401550();
  piVar1 = (int *)__p__environ();
  uExitCode = FUN_004014d9(DAT_00406004,DAT_00406000,*piVar1);
  _cexit();
                    // WARNING: Subroutine does not return
  ExitProcess(uExitCode);
}



void entry(void)

{
  __set_app_type(1);
                    // WARNING: Subroutine does not return
  FUN_00401140();
}



// WARNING: Exceeded maximum restarts with more pending

void FUN_004012a0(void)

{
                    // WARNING: Could not recover jumptable at 0x004012aa. Too many branches
                    // WARNING: Treating indirect jump as call
  atexit();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl FUN_00401310(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  do {
    if (*(int *)(local_8 * 4 + param_2) == 0) {
      return 0;
    }
    iVar1 = local_8 * 4;
    local_8 = local_8 + 1;
    iVar1 = strncmp(*(char **)(iVar1 + param_2),"LOLO",3);
  } while (iVar1 != 0);
  _DAT_00406030 = 1;
  return 1;
}



void FUN_00401380(void)

{
  printf("Password Incorrect!\n");
                    // WARNING: Subroutine does not return
  exit(0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_0040139e(char *param_1,int param_2)

{
  int iVar1;
  int local_c;
  uint local_8;
  
  sscanf(param_1,"%d",&local_8);
  iVar1 = FUN_00401310(local_8,param_2);
  if (iVar1 != 0) {
    for (local_c = 0; local_c < 10; local_c = local_c + 1) {
      if ((local_8 & 1) == 0) {
        if (_DAT_00406030 == 1) {
          printf("Password OK!\n");
        }
                    // WARNING: Subroutine does not return
        exit(0);
      }
    }
  }
  return;
}



void __cdecl FUN_00401415(char *param_1,int param_2)

{
  size_t sVar1;
  int iVar2;
  char local_11;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_c = 0;
  local_10 = 0;
  while( true ) {
    sVar1 = strlen(param_1);
    if (sVar1 <= local_10) break;
    local_11 = param_1[local_10];
    sscanf(&local_11,"%d",&local_8);
    local_c = local_c + local_8;
    if (local_c == 0x10) {
      FUN_0040139e(param_1,param_2);
    }
    local_10 = local_10 + 1;
  }
  FUN_00401380();
  iVar2 = FUN_00401310(local_8,param_2);
  if (iVar2 != 0) {
    for (local_10 = 0; (int)local_10 < 10; local_10 = local_10 + 1) {
      if ((local_8 & 1) == 0) {
        printf("wtf?\n");
                    // WARNING: Subroutine does not return
        exit(0);
      }
    }
  }
  return;
}



undefined4 __cdecl FUN_004014d9(undefined4 param_1,undefined4 param_2,int param_3)

{
  char local_7c [120];
  
  FUN_00402e20();
  FUN_00401620();
  printf("IOLI Crackme Level 0x07\n");
  printf("Password: ");
  scanf("%s",local_7c);
  FUN_00401415(local_7c,param_3);
  return 0;
}



void FUN_00401550(void)

{
  int *piVar1;
  
  for (piVar1 = &DAT_00405310; piVar1 < &DAT_00405310; piVar1 = piVar1 + 2) {
    *(int *)(piVar1[1] + 0x400000) = *(int *)(piVar1[1] + 0x400000) + *piVar1;
  }
  return;
}



void FUN_00401580(void)

{
  return;
}



void FUN_00401620(void)

{
  int iVar1;
  bool bVar2;
  
  if (DAT_00406050 != 0) {
    return;
  }
  DAT_00406050 = 1;
  iVar1 = 0;
  bVar2 = false;
  while (!bVar2) {
    iVar1 = iVar1 + 1;
    bVar2 = (&PTR_LAB_00403034)[iVar1] == (undefined *)0x0;
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    (*(code *)(&DAT_00403030)[iVar1])();
  }
  FUN_004012a0();
  return;
}



undefined8 __fastcall FUN_00401690(undefined4 param_1,uint *param_2)

{
  byte bVar1;
  byte *in_EAX;
  byte bVar2;
  uint uVar3;
  byte *local_14;
  
  uVar3 = 0;
  bVar2 = 0;
  local_14 = in_EAX;
  do {
    bVar1 = *local_14;
    local_14 = local_14 + 1;
    uVar3 = uVar3 | (bVar1 & 0x7f) << (bVar2 & 0x1f);
    bVar2 = bVar2 + 7;
  } while ((char)bVar1 < '\0');
  *param_2 = uVar3;
  return CONCAT44(local_14,local_14);
}



byte * __fastcall FUN_004016e0(undefined4 param_1,uint *param_2)

{
  byte bVar1;
  byte *in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *local_18;
  
  uVar4 = 0;
  uVar2 = 0;
  local_18 = in_EAX;
  do {
    uVar3 = uVar2 + 7;
    bVar1 = *local_18;
    local_18 = local_18 + 1;
    uVar4 = uVar4 | (bVar1 & 0x7f) << ((byte)uVar2 & 0x1f);
    uVar2 = uVar3;
  } while ((char)bVar1 < '\0');
  if ((uVar3 < 0x20) && ((bVar1 & 0x40) != 0)) {
    uVar4 = uVar4 | -1 << ((byte)uVar3 & 0x1f);
  }
  *param_2 = uVar4;
  return local_18;
}



void FUN_00401820(void)

{
  int iVar1;
  HANDLE pvVar2;
  
  iVar1 = DAT_004060c0;
  *(undefined4 *)(DAT_004060c0 + 0x14) = 0xffffffff;
  pvVar2 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,0xffff,(LPCSTR)0x0);
  *(HANDLE *)(iVar1 + 0x18) = pvVar2;
  return;
}



void FUN_00401870(void)

{
  int *piVar1;
  int iVar2;
  LONG LVar3;
  
  iVar2 = DAT_004060c0;
  piVar1 = (int *)(DAT_004060c0 + 0x1c);
  if (((DAT_004060a0 != 0) && (piVar1 != (int *)0x0)) && (*(int *)(DAT_004060c0 + 0x1c) == 0)) {
    LVar3 = InterlockedIncrement((LONG *)(DAT_004060c0 + 0x20));
    if (LVar3 == 0) {
      FUN_00401820();
      *(undefined4 *)(iVar2 + 0x1c) = 1;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x1c);
      while (iVar2 == 0) {
        Sleep(0);
        iVar2 = *piVar1;
      }
    }
  }
  return;
}



void __cdecl FUN_00401900(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  LONG *lpAddend;
  int iVar1;
  LONG LVar2;
  DWORD DVar3;
  bool bVar4;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    *param_2 = 0xffffffff;
    param_2[1] = param_3;
    param_2[4] = 0;
    param_2[3] = param_1;
    param_2[2] = param_4;
    *(ushort *)(param_2 + 4) = *(ushort *)(param_2 + 4) | 0x7f8;
    FUN_00401870();
    iVar1 = DAT_004060c0;
    lpAddend = (LONG *)(DAT_004060c0 + 0x14);
    if ((DAT_004060a0 != 0) &&
       ((LVar2 = InterlockedIncrement(lpAddend), LVar2 != 0 &&
        (DVar3 = WaitForSingleObject(*(HANDLE *)(iVar1 + 0x18),0xffffffff), DVar3 != 0)))) {
      InterlockedDecrement(lpAddend);
    }
    iVar1 = DAT_004060c0;
    bVar4 = DAT_004060a0 != 0;
    param_2[5] = *(undefined4 *)(DAT_004060c0 + 0xc);
    *(undefined4 **)(iVar1 + 0xc) = param_2;
    if ((bVar4) && (LVar2 = InterlockedDecrement((LONG *)(iVar1 + 0x14)), -1 < LVar2)) {
      ReleaseSemaphore(*(HANDLE *)(iVar1 + 0x18),1,(LPLONG)0x0);
    }
  }
  return;
}



void __cdecl FUN_004019f0(int *param_1,undefined4 *param_2)

{
  FUN_00401900(param_1,param_2,0,0);
  return;
}



int __cdecl FUN_00401d50(int *param_1)

{
  LONG *lpAddend;
  int iVar1;
  LONG LVar2;
  DWORD DVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  FUN_00401870();
  iVar5 = DAT_004060c0;
  lpAddend = (LONG *)(DAT_004060c0 + 0x14);
  if (((DAT_004060a0 != 0) && (LVar2 = InterlockedIncrement(lpAddend), LVar2 != 0)) &&
     (DVar3 = WaitForSingleObject(*(HANDLE *)(iVar5 + 0x18),0xffffffff), DVar3 != 0)) {
    InterlockedDecrement(lpAddend);
  }
  iVar6 = DAT_004060c0;
  piVar4 = (int *)(DAT_004060c0 + 0xc);
  for (iVar5 = *(int *)(DAT_004060c0 + 0xc); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x14)) {
    iVar5 = *piVar4;
    if (*(int **)(iVar5 + 0xc) == param_1) goto LAB_00401c48;
    piVar4 = (int *)(iVar5 + 0x14);
  }
  iVar1 = *(int *)(DAT_004060c0 + 0x10);
  piVar4 = (int *)(DAT_004060c0 + 0x10);
  do {
    if (iVar1 == 0) {
      if ((DAT_004060a0 != 0) &&
         (LVar2 = InterlockedDecrement((LONG *)(DAT_004060c0 + 0x14)), -1 < LVar2)) {
        ReleaseSemaphore(*(HANDLE *)(iVar6 + 0x18),1,(LPLONG)0x0);
                    // WARNING: Subroutine does not return
        abort();
      }
                    // WARNING: Subroutine does not return
      abort();
    }
    iVar5 = *piVar4;
    if ((*(byte *)(iVar5 + 0x10) & 1) == 0) {
      if (*(int **)(iVar5 + 0xc) == param_1) break;
    }
    else {
      if (**(int ***)(iVar5 + 0xc) == param_1) {
        *piVar4 = *(int *)(iVar5 + 0x14);
        free(*(void **)(iVar5 + 0xc));
        iVar6 = DAT_004060c0;
        goto LAB_00401c4d;
      }
    }
    iVar1 = *(int *)(iVar5 + 0x14);
    piVar4 = (int *)(iVar5 + 0x14);
  } while( true );
LAB_00401c48:
  *piVar4 = *(int *)(iVar5 + 0x14);
LAB_00401c4d:
  if ((DAT_004060a0 != 0) && (LVar2 = InterlockedDecrement((LONG *)(iVar6 + 0x14)), -1 < LVar2)) {
    ReleaseSemaphore(*(HANDLE *)(iVar6 + 0x18),1,(LPLONG)0x0);
  }
  return iVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * FUN_00402b60(void)

{
  ATOM in_AX;
  ATOM AVar1;
  UINT UVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  CHAR aCStack248 [32];
  undefined4 uStack216;
  undefined4 uStack212;
  undefined4 uStack208;
  undefined4 uStack204;
  undefined4 uStack200;
  undefined4 uStack196;
  undefined4 uStack192;
  undefined uStack188;
  undefined4 uStack184;
  undefined4 uStack180;
  undefined4 uStack176;
  undefined4 uStack172;
  undefined4 uStack168;
  undefined4 uStack164;
  undefined4 uStack160;
  undefined4 uStack156;
  undefined4 uStack152;
  undefined4 uStack148;
  undefined4 uStack144;
  undefined4 uStack140;
  undefined4 uStack136;
  undefined4 uStack132;
  undefined4 uStack128;
  undefined uStack124;
  undefined4 uStack108;
  CHAR local_4c [68];
  
  piVar8 = (int *)0x0;
  UVar2 = GetAtomNameA(in_AX,local_4c,0x3d);
  iVar6 = 0x1f;
  uVar5 = 1;
  if (UVar2 != 0) {
    do {
      while (local_4c[iVar6] != 'A') {
        uVar5 = uVar5 * 2;
        iVar6 = iVar6 + -1;
        if (iVar6 < 0) goto LAB_00402baa;
      }
      piVar8 = (int *)((uint)piVar8 | uVar5);
      uVar5 = uVar5 * 2;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
LAB_00402baa:
    if (*piVar8 == 0x40) {
      return piVar8;
    }
    _assert();
  }
  piVar8 = (int *)_assert();
  uStack108 = 0xf1;
  if (DAT_004060c0 != (int *)0x0) {
    return piVar8;
  }
  uStack184 = 0x41414141;
  uStack180 = 0x41414141;
  uStack176 = 0x41414141;
  uStack152 = 0x42494c2d;
  uStack172 = 0x41414141;
  uStack168 = 0x41414141;
  uStack148 = 0x57434347;
  uStack164 = 0x41414141;
  uStack160 = 0x41414141;
  uStack144 = 0x452d3233;
  uStack156 = 0x41414141;
  uStack140 = 0x2d332d48;
  uStack136 = 0x52485447;
  uStack132 = 0x4e494d2d;
  uStack128 = 0x32335747;
  uStack124 = 0;
  AVar1 = FindAtomA((LPCSTR)&uStack184);
  if (AVar1 == 0) {
    piVar8 = (int *)malloc(0x40);
    if (piVar8 == (int *)0x0) {
                    // WARNING: Subroutine does not return
      abort();
    }
    piVar4 = piVar8;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    piVar8[1] = (int)abort;
    uVar5 = 1;
    piVar8[2] = (int)&LAB_00402b50;
    iVar6 = DAT_00406070;
    *piVar8 = 0x40;
    iVar7 = DAT_00406074;
    piVar8[5] = iVar6;
    iVar6 = DAT_00404030;
    piVar8[6] = iVar7;
    iVar7 = DAT_00404034;
    piVar8[7] = iVar6;
    iVar6 = DAT_00406080;
    piVar8[8] = iVar7;
    iVar7 = DAT_00406084;
    piVar8[10] = iVar6;
    iVar6 = DAT_00406090;
    piVar8[0xc] = -1;
    piVar8[0xb] = iVar7;
    piVar8[0xd] = iVar6;
    iVar6 = DAT_00404038;
    piVar8[0xf] = DAT_0040403c;
    iVar7 = 0x1f;
    piVar8[0xe] = iVar6;
    do {
      uVar3 = (uint)piVar8 & uVar5;
      uVar5 = uVar5 * 2;
      aCStack248[iVar7] = (-(uVar3 == 0) & 0x20U) + 0x41;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    uStack216 = 0x42494c2d;
    uStack212 = 0x57434347;
    uStack208 = 0x452d3233;
    uStack204 = 0x2d332d48;
    uStack200 = 0x52485447;
    uStack196 = 0x4e494d2d;
    uStack192 = 0x32335747;
    uStack188 = 0;
    AVar1 = AddAtomA(aCStack248);
    if ((AVar1 == 0) || (piVar4 = FUN_00402b60(), piVar4 != piVar8)) {
      AVar1 = 0;
    }
    if (AVar1 != 0) goto LAB_00402de6;
    free(piVar8);
    FindAtomA((LPCSTR)&uStack184);
  }
  piVar8 = FUN_00402b60();
LAB_00402de6:
  _DAT_004060b0 = piVar8 + 1;
  DAT_004060c0 = piVar8;
  _DAT_004060d0 = piVar8 + 2;
  return piVar8 + 2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00402c00(void)

{
  ATOM AVar1;
  int *_Memory;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  CHAR local_9c [32];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined local_20;
  
  if (DAT_004060c0 != (int *)0x0) {
    return;
  }
  local_5c = 0x41414141;
  local_58 = 0x41414141;
  local_54 = 0x41414141;
  local_3c = 0x42494c2d;
  local_50 = 0x41414141;
  local_4c = 0x41414141;
  local_38 = 0x57434347;
  local_48 = 0x41414141;
  local_44 = 0x41414141;
  local_34 = 0x452d3233;
  local_40 = 0x41414141;
  local_30 = 0x2d332d48;
  local_2c = 0x52485447;
  local_28 = 0x4e494d2d;
  local_24 = 0x32335747;
  local_20 = 0;
  AVar1 = FindAtomA((LPCSTR)&local_5c);
  if (AVar1 == 0) {
    _Memory = (int *)malloc(0x40);
    if (_Memory == (int *)0x0) {
                    // WARNING: Subroutine does not return
      abort();
    }
    piVar3 = _Memory;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
    }
    _Memory[1] = (int)abort;
    uVar5 = 1;
    _Memory[2] = (int)&LAB_00402b50;
    iVar4 = DAT_00406070;
    *_Memory = 0x40;
    iVar6 = DAT_00406074;
    _Memory[5] = iVar4;
    iVar4 = DAT_00404030;
    _Memory[6] = iVar6;
    iVar6 = DAT_00404034;
    _Memory[7] = iVar4;
    iVar4 = DAT_00406080;
    _Memory[8] = iVar6;
    iVar6 = DAT_00406084;
    _Memory[10] = iVar4;
    iVar4 = DAT_00406090;
    _Memory[0xc] = -1;
    _Memory[0xb] = iVar6;
    _Memory[0xd] = iVar4;
    iVar4 = DAT_00404038;
    _Memory[0xf] = DAT_0040403c;
    iVar6 = 0x1f;
    _Memory[0xe] = iVar4;
    do {
      uVar2 = (uint)_Memory & uVar5;
      uVar5 = uVar5 * 2;
      local_9c[iVar6] = (-(uVar2 == 0) & 0x20U) + 0x41;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    local_7c = 0x42494c2d;
    local_78 = 0x57434347;
    local_74 = 0x452d3233;
    local_70 = 0x2d332d48;
    local_6c = 0x52485447;
    local_68 = 0x4e494d2d;
    local_64 = 0x32335747;
    local_60 = 0;
    AVar1 = AddAtomA(local_9c);
    if ((AVar1 == 0) || (piVar3 = FUN_00402b60(), piVar3 != _Memory)) {
      AVar1 = 0;
    }
    if (AVar1 != 0) goto LAB_00402de6;
    free(_Memory);
    FindAtomA((LPCSTR)&local_5c);
  }
  _Memory = FUN_00402b60();
LAB_00402de6:
  _DAT_004060b0 = _Memory + 1;
  DAT_004060c0 = _Memory;
  _DAT_004060d0 = _Memory + 2;
  return;
}



void FUN_00402e20(void)

{
  uint in_EAX;
  undefined4 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar1 = (undefined4 *)&stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x400;
    *puVar1 = *puVar1;
  }
  *(undefined4 *)((int)puVar1 - in_EAX) = *(undefined4 *)((int)puVar1 - in_EAX);
                    // WARNING: Could not recover jumptable at 0x00402e4b. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void __p__fmode(void)

{
                    // WARNING: Could not recover jumptable at 0x00402ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  __p__fmode();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl
__getmainargs(int *_Argc,char ***_Argv,char ***_Env,int _DoWildCard,_startupinfo *_StartInfo)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402eb0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = __getmainargs();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl scanf(char *_Format,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402ec0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = scanf();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

size_t __cdecl strlen(char *_Str)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = strlen();
  return sVar1;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl sscanf(char *_Src,char *_Format,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = sscanf();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x00402ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  exit();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl printf(char *_Format,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402f00. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = printf();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402f10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = strncmp();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x00402f20. Too many branches
                    // WARNING: Treating indirect jump as call
  free();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402f30. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)malloc();
  return pvVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl abort(void)

{
                    // WARNING: Could not recover jumptable at 0x00402f40. Too many branches
                    // WARNING: Treating indirect jump as call
  abort();
  return;
}



void _assert(void)

{
                    // WARNING: Could not recover jumptable at 0x00402f50. Too many branches
                    // WARNING: Treating indirect jump as call
  _assert();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void ExitProcess(UINT uExitCode)

{
                    // WARNING: Could not recover jumptable at 0x00402f60. Too many branches
                    // WARNING: Treating indirect jump as call
  ExitProcess();
  return;
}



LPTOP_LEVEL_EXCEPTION_FILTER
SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)

{
  LPTOP_LEVEL_EXCEPTION_FILTER pPVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402f70. Too many branches
                    // WARNING: Treating indirect jump as call
  pPVar1 = SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
  return pPVar1;
}



BOOL ReleaseSemaphore(HANDLE hSemaphore,LONG lReleaseCount,LPLONG lpPreviousCount)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402f80. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = ReleaseSemaphore(hSemaphore,lReleaseCount,lpPreviousCount);
  return BVar1;
}



LONG InterlockedDecrement(LONG *lpAddend)

{
  LONG LVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402f90. Too many branches
                    // WARNING: Treating indirect jump as call
  LVar1 = InterlockedDecrement(lpAddend);
  return LVar1;
}



DWORD WaitForSingleObject(HANDLE hHandle,DWORD dwMilliseconds)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402fa0. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = WaitForSingleObject(hHandle,dwMilliseconds);
  return DVar1;
}



HANDLE CreateSemaphoreA(LPSECURITY_ATTRIBUTES lpSemaphoreAttributes,LONG lInitialCount,
                       LONG lMaximumCount,LPCSTR lpName)

{
  HANDLE pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402fb0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = CreateSemaphoreA(lpSemaphoreAttributes,lInitialCount,lMaximumCount,lpName);
  return pvVar1;
}



void Sleep(DWORD dwMilliseconds)

{
                    // WARNING: Could not recover jumptable at 0x00402fc0. Too many branches
                    // WARNING: Treating indirect jump as call
  Sleep(dwMilliseconds);
  return;
}



LONG InterlockedIncrement(LONG *lpAddend)

{
  LONG LVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402fd0. Too many branches
                    // WARNING: Treating indirect jump as call
  LVar1 = InterlockedIncrement(lpAddend);
  return LVar1;
}



UINT GetAtomNameA(ATOM nAtom,LPSTR lpBuffer,int nSize)

{
  UINT UVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402fe0. Too many branches
                    // WARNING: Treating indirect jump as call
  UVar1 = GetAtomNameA(nAtom,lpBuffer,nSize);
  return UVar1;
}



ATOM AddAtomA(LPCSTR lpString)

{
  ATOM AVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402ff0. Too many branches
                    // WARNING: Treating indirect jump as call
  AVar1 = AddAtomA(lpString);
  return AVar1;
}



ATOM FindAtomA(LPCSTR lpString)

{
  ATOM AVar1;
  
                    // WARNING: Could not recover jumptable at 0x00403000. Too many branches
                    // WARNING: Treating indirect jump as call
  AVar1 = FindAtomA(lpString);
  return AVar1;
}



void FUN_00403020(void)

{
  FUN_00401d50((int *)&DAT_00405160);
  return;
}


