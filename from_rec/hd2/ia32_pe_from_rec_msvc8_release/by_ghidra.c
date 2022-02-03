typedef unsigned char   undefined;

typedef unsigned long long    GUID;
typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef short    wchar_t;
typedef unsigned short    word;
typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory;
    dword DataIsDirectory;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
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

typedef ulong DWORD;

typedef void * PVOID;

typedef ulong ULONG_PTR;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

typedef uchar BYTE;

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

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER, *P_IMAGE_SECTION_HEADER;

typedef struct _IMAGE_SECTION_HEADER * PIMAGE_SECTION_HEADER;

typedef union _union_226 _union_226, *P_union_226;

typedef ushort WORD;

union _union_226 {
    DWORD PhysicalAddress;
    DWORD VirtualSize;
};

struct _IMAGE_SECTION_HEADER {
    BYTE Name[8];
    union _union_226 Misc;
    DWORD VirtualAddress;
    DWORD SizeOfRawData;
    DWORD PointerToRawData;
    DWORD PointerToRelocations;
    DWORD PointerToLinenumbers;
    WORD NumberOfRelocations;
    WORD NumberOfLinenumbers;
    DWORD Characteristics;
};

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

typedef double LONGLONG;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

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

typedef ULONG_PTR DWORD_PTR;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbname[16];
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME * LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef int BOOL;

typedef uint UINT;

typedef BYTE * PBYTE;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset;
    dword NameIsString;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

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
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
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

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
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

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY32 IMAGE_LOAD_CONFIG_DIRECTORY32, *PIMAGE_LOAD_CONFIG_DIRECTORY32;

struct IMAGE_LOAD_CONFIG_DIRECTORY32 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    dword DeCommitFreeBlockThreshold;
    dword DeCommitTotalFreeThreshold;
    pointer32 LockPrefixTable;
    dword MaximumAllocationSize;
    dword VirtualMemoryThreshold;
    dword ProcessHeapFlags;
    dword ProcessAffinityMask;
    word CsdVersion;
    word DependentLoadFlags;
    pointer32 EditList;
    pointer32 SecurityCookie;
    pointer32 SEHandlerTable;
    dword SEHandlerCount;
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

typedef uint uintptr_t;

typedef int (* _onexit_t)(void);

typedef struct _startupinfo _startupinfo, *P_startupinfo;

struct _startupinfo {
    int newmode;
};

typedef int errno_t;

typedef uint size_t;




void __thiscall FUN_00401000(void *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  undefined4 extraout_EDX;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iStack88;
  undefined4 uStack85;
  undefined2 local_50 [2];
  char local_4b [71];
  uint local_4;
  
  local_4 = DAT_00403000 ^ (uint)&stack0xffffffa8;
  iStack88 = param_1;
  sprintf((char *)((int)&uStack85 + 1),"%08lX:",this);
  if (0x10 < param_2) {
    param_2 = 0x10;
  }
  iVar4 = 0;
  if (param_2 < 1) {
LAB_00401071:
    iVar4 = 0x10 - iVar4;
    do {
      puVar7 = &uStack85;
      do {
        pcVar6 = (char *)((int)puVar7 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      } while (*pcVar6 != '\0');
      iVar4 = iVar4 + -1;
      *puVar7 = 0x202020;
    } while (iVar4 != 0);
  }
  else {
    pcVar6 = local_4b;
    do {
      sprintf(pcVar6," %02lX",(uint)*(byte *)(iStack88 + iVar4));
      iVar4 = iVar4 + 1;
      pcVar6 = pcVar6 + 3;
    } while (iVar4 < param_2);
    if (iVar4 < 0x10) goto LAB_00401071;
  }
  pcVar6 = (char *)((int)&uStack85 + 1);
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(pcVar6 + (int)((int)&uStack85 + (1 - (int)(undefined *)((int)&uStack85 + 2)))) =
       0x7c2020;
  iVar2 = -(int)(undefined *)((int)&uStack85 + 2);
  iVar4 = iVar2 + 3;
  iVar5 = 0;
  if (0 < param_2) {
    do {
      bVar3 = *(byte *)(iStack88 + iVar5);
      if ((bVar3 < 0x20) || (0x7e < bVar3)) {
        bVar3 = 0x2e;
      }
      pcVar6[(int)((int)&uStack85 + iVar5 + iVar2 + 4)] = bVar3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
    if (0xf < iVar5) goto LAB_00401100;
  }
  memset(pcVar6 + (int)((int)&uStack85 + iVar5 + iVar4 + 1),0x20,0x10U - iVar5);
  iVar5 = iVar5 + (0x10U - iVar5);
LAB_00401100:
  *(undefined2 *)(pcVar6 + (int)((int)&uStack85 + iVar5 + iVar4 + 1)) = 0x7c;
  printf("%s\n",(undefined *)((int)&uStack85 + 1));
  FUN_0040123b(local_4 ^ (uint)&stack0xffffffa8,extraout_EDX,(char)iStack88);
  return;
}



void __fastcall FUN_00401140(char *param_1)

{
  int iVar1;
  FILE *_File;
  size_t sVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  void *this;
  undefined in_stack_ffffffb4;
  void *pvStack56;
  undefined auStack24 [16];
  uint local_8;
  
  local_8 = DAT_00403000 ^ (uint)&stack0xffffffb4;
  iVar1 = _stat64i32(param_1,&stack0xffffffb4);
  if ((iVar1 != 0) || (_File = fopen(param_1,"rb"), _File == (FILE *)0x0)) {
    perror(param_1);
    FUN_0040123b(local_8 ^ (uint)&stack0xffffffb4,extraout_EDX,in_stack_ffffffb4);
    return;
  }
  this = (void *)0x0;
  if (pvStack56 != (void *)0x0) {
    do {
      sVar2 = fread(auStack24,1,0x10,_File);
      if (sVar2 == 0) break;
      FUN_00401000(this,(int)auStack24,sVar2);
      this = (void *)((int)this + sVar2);
    } while (this < pvStack56);
  }
  fclose(_File);
  FUN_0040123b(local_8 ^ (uint)&stack0xffffffb4,extraout_EDX_00,in_stack_ffffffb4);
  return;
}



int __cdecl FUN_00401200(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 1;
  if (1 < param_1) {
    do {
      iVar1 = FUN_00401140(*(char **)(param_2 + iVar2 * 4));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + iVar1;
    } while (iVar2 < param_1);
  }
  return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_0040123b(int param_1,undefined4 param_2,undefined param_3)

{
  undefined4 in_EAX;
  HANDLE hProcess;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined4 unaff_retaddr;
  UINT uExitCode;
  int local_32c;
  undefined4 local_328;
  
  if (param_1 == DAT_00403000) {
    return;
  }
  _DAT_00403150 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)((undefined *)register0x00000010 == (undefined *)0x32c) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_00403154 = &param_3;
  _DAT_00403090 = 0x10001;
  _DAT_00403038 = 0xc0000409;
  _DAT_0040303c = 1;
  local_32c = DAT_00403000;
  local_328 = DAT_00403004;
  _DAT_00403044 = unaff_retaddr;
  _DAT_0040311c = in_GS;
  _DAT_00403120 = in_FS;
  _DAT_00403124 = in_ES;
  _DAT_00403128 = in_DS;
  _DAT_0040312c = unaff_EDI;
  _DAT_00403130 = unaff_ESI;
  _DAT_00403134 = unaff_EBX;
  _DAT_00403138 = param_2;
  _DAT_0040313c = param_1;
  _DAT_00403140 = in_EAX;
  _DAT_00403144 = unaff_EBP;
  DAT_00403148 = unaff_retaddr;
  _DAT_0040314c = in_CS;
  _DAT_00403158 = in_SS;
  _DAT_00403088 = IsDebuggerPresent();
  _crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_004020fc);
  if (_DAT_00403088 == 0) {
    _crt_debugger_hook(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int entry(void)

{
  bool bVar1;
  LONG LVar2;
  int iVar3;
  BOOL BVar4;
  int in_FS_OFFSET;
  
  ___security_init_cookie();
  iVar3 = *(int *)(*(int *)(in_FS_OFFSET + 0x18) + 4);
  bVar1 = false;
  do {
    LVar2 = InterlockedCompareExchange((LONG *)&DAT_00403374,iVar3,0);
    if (LVar2 == 0) {
LAB_004012e0:
      if (DAT_00403370 == 1) {
        _amsg_exit(0x1f);
      }
      else if (DAT_00403370 == 0) {
        DAT_00403370 = 1;
        iVar3 = _initterm_e(&DAT_004020d0,&DAT_004020dc);
        if (iVar3 != 0) {
          return 0xff;
        }
      }
      else {
        _DAT_00403034 = 1;
      }
      if (DAT_00403370 == 1) {
        _initterm(&DAT_004020c4,&DAT_004020cc);
        DAT_00403370 = 2;
      }
      if (!bVar1) {
        InterlockedExchange((LONG *)&DAT_00403374,0);
      }
      if ((DAT_00403380 != (code *)0x0) &&
         (BVar4 = __IsNonwritableInCurrentImage((PBYTE)&DAT_00403380), BVar4 != 0)) {
        (*DAT_00403380)(0,2,0);
      }
      *(undefined4 *)__initenv_exref = DAT_0040301c;
      DAT_00403030 = FUN_00401200(DAT_00403018,DAT_00403020);
      if (_DAT_00403024 != 0) {
        if (_DAT_00403034 == 0) {
          _cexit();
        }
        return DAT_00403030;
      }
                    // WARNING: Subroutine does not return
      exit(DAT_00403030);
    }
    if (LVar2 == iVar3) {
      bVar1 = true;
      goto LAB_004012e0;
    }
    Sleep(1000);
  } while( true );
}



// Library Function - Single Match
//  long __stdcall __CxxUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *)
// 
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release

long __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS *param_1)

{
  PEXCEPTION_RECORD pEVar1;
  ULONG_PTR UVar2;
  
  pEVar1 = param_1->ExceptionRecord;
  if (((pEVar1->ExceptionCode == 0xe06d7363) && (pEVar1->NumberParameters == 3)) &&
     ((UVar2 = pEVar1->ExceptionInformation[0], UVar2 == 0x19930520 ||
      (((UVar2 == 0x19930521 || (UVar2 == 0x19930522)) || (UVar2 == 0x1994000)))))) {
    terminate();
  }
  return 0;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _amsg_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x0040164c. Too many branches
                    // WARNING: Treating indirect jump as call
  _amsg_exit();
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3
// Library Function - Single Match
//  __onexit
// 
// Library: Visual Studio 2008 Release

_onexit_t __cdecl __onexit(_onexit_t param_1)

{
  _onexit_t p_Var1;
  undefined4 uVar2;
  undefined4 local_24;
  int local_20 [5];
  undefined4 uStack12;
  undefined *local_8;
  
  local_8 = &DAT_004021f8;
  uStack12 = 0x40165e;
  local_20[0] = _decode_pointer(DAT_0040337c);
  if (local_20[0] == -1) {
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = _decode_pointer(DAT_0040337c);
    local_24 = _decode_pointer(DAT_00403378);
    uVar2 = _encode_pointer(param_1,local_20,&local_24);
    p_Var1 = (_onexit_t)__dllonexit(uVar2);
    DAT_0040337c = _encode_pointer(local_20[0]);
    DAT_00403378 = _encode_pointer(local_24);
    local_8 = (undefined *)0xfffffffe;
    FUN_004016ee();
  }
  return p_Var1;
}



void FUN_004016ee(void)

{
  _unlock(8);
  return;
}



// Library Function - Single Match
//  _atexit
// 
// Library: Visual Studio 2008 Release

int __cdecl _atexit(void *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



// WARNING: Removing unreachable block (ram,0x00401722)
// WARNING: Removing unreachable block (ram,0x00401728)
// WARNING: Removing unreachable block (ram,0x0040172a)

void FUN_0040170e(void)

{
  return;
}



void FUN_0040175a(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)0x23b6)();
  return;
}



// Library Function - Single Match
//  __ValidateImageBase
// 
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  if ((*(short *)pImageBase == 0x5a4d) &&
     (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550)) {
    return (uint)(*(short *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b);
  }
  return 0;
}



// Library Function - Single Match
//  __FindPESection
// 
// Library: Visual Studio 2008 Release

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase + *(ushort *)(pImageBase + iVar1 + 0x14) + 0x18 + iVar1);
  if (*(ushort *)(pImageBase + iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) && (rva < p_Var2->Misc + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}



// Library Function - Single Match
//  __IsNonwritableInCurrentImage
// 
// Library: Visual Studio 2008 Release

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  uint uVar1;
  BOOL BVar2;
  PIMAGE_SECTION_HEADER p_Var3;
  int **in_FS_OFFSET;
  int *local_14;
  code *pcStack16;
  uint local_c;
  undefined4 local_8;
  
  pcStack16 = FUN_00401915;
  local_14 = *in_FS_OFFSET;
  local_c = DAT_00403000 ^ 0x402218;
  *in_FS_OFFSET = (int *)&local_14;
  local_8 = 0;
  BVar2 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000);
  if (BVar2 != 0) {
    p_Var3 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_00400000,(DWORD_PTR)(pTarget + -0x400000));
    if (p_Var3 != (PIMAGE_SECTION_HEADER)0x0) {
      uVar1 = p_Var3->Characteristics;
      *in_FS_OFFSET = local_14;
      return ~(uVar1 >> 0x1f) & 1;
    }
  }
  *in_FS_OFFSET = local_14;
  return 0;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x004018ae. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x004018b4. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



// WARNING: This is an inlined function
// WARNING: Unable to track spacebase fully for stack
// WARNING: Variable defined which should be unmapped: param_2
// Library Function - Single Match
//  __SEH_prolog4
// 
// Library: Visual Studio

void __cdecl __SEH_prolog4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *in_FS_OFFSET;
  undefined4 unaff_retaddr;
  uint auStack28 [5];
  undefined local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack28 + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack28 + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack28 + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack28 + iVar1 + 4) = DAT_00403000 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack28 + iVar1) = unaff_retaddr;
  *in_FS_OFFSET = (int)local_8;
  return;
}



// WARNING: This is an inlined function
// Library Function - Single Match
//  __SEH_epilog4
// 
// Library: Visual Studio

void __SEH_epilog4(void)

{
  undefined4 *unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 unaff_retaddr;
  
  *in_FS_OFFSET = unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}



void __cdecl
FUN_00401915(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  _except_handler4_common(&DAT_00403000,FUN_0040123b,param_1,param_2,param_3,param_4);
  return;
}



// Library Function - Single Match
//  __setdefaultprecision
// 
// Library: Visual Studio 2010 Release

void __setdefaultprecision(void)

{
  errno_t eVar1;
  
  eVar1 = _controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar1 != 0) {
                    // WARNING: Subroutine does not return
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return;
}



undefined4 FUN_00401965(void)

{
  return 0;
}



// Library Function - Single Match
//  ___security_init_cookie
// 
// Library: Visual Studio 2008 Release

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  uint local_14;
  uint local_10;
  _FILETIME local_c;
  
  local_c.dwLowDateTime = 0;
  local_c.dwHighDateTime = 0;
  if ((DAT_00403000 == 0xbb40e64e) || ((DAT_00403000 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter((LARGE_INTEGER *)&local_14);
    DAT_00403000 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_10 ^ local_14;
    if (DAT_00403000 == 0xbb40e64e) {
      DAT_00403000 = 0xbb40e64f;
    }
    else if ((DAT_00403000 & 0xffff0000) == 0) {
      DAT_00403000 = DAT_00403000 | DAT_00403000 << 0x10;
    }
    DAT_00403004 = ~DAT_00403000;
  }
  else {
    DAT_00403004 = ~DAT_00403000;
  }
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _crt_debugger_hook(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x004019fe. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_debugger_hook();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x00401a04. Too many branches
                    // WARNING: Treating indirect jump as call
  terminate();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _unlock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x00401a0a. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock();
  return;
}



void __dllonexit(void)

{
                    // WARNING: Could not recover jumptable at 0x00401a10. Too many branches
                    // WARNING: Treating indirect jump as call
  __dllonexit();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _lock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x00401a16. Too many branches
                    // WARNING: Treating indirect jump as call
  _lock();
  return;
}



void _except_handler4_common(void)

{
                    // WARNING: Could not recover jumptable at 0x00401a1c. Too many branches
                    // WARNING: Treating indirect jump as call
  _except_handler4_common();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl
_invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
                    // WARNING: Could not recover jumptable at 0x00401a22. Too many branches
                    // WARNING: Treating indirect jump as call
  _invoke_watson();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

errno_t __cdecl _controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401a28. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _controlfp_s();
  return eVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401a2e. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)memset();
  return pvVar1;
}


