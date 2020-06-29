typedef unsigned char   undefined;

typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION * PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG * PRTL_CRITICAL_SECTION_DEBUG;

typedef long LONG;

typedef void * HANDLE;

typedef ulong ULONG_PTR;

typedef ushort WORD;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

typedef ulong DWORD;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY * Flink;
    struct _LIST_ENTRY * Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION * CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (* PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD * PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT * PCONTEXT;

typedef void * PVOID;

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

typedef struct _MEMORY_BASIC_INFORMATION _MEMORY_BASIC_INFORMATION, *P_MEMORY_BASIC_INFORMATION;

typedef ULONG_PTR SIZE_T;

struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    DWORD AllocationProtect;
    SIZE_T RegionSize;
    DWORD State;
    DWORD Protect;
    DWORD Type;
};

typedef char CHAR;

typedef CHAR * LPCSTR;

typedef struct _MEMORY_BASIC_INFORMATION * PMEMORY_BASIC_INFORMATION;

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

typedef int (* FARPROC)(void);

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ * HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef void * LPCVOID;

typedef void * LPVOID;

typedef HINSTANCE HMODULE;

typedef DWORD * PDWORD;

typedef int BOOL;

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

typedef struct IMAGE_THUNK_DATA32 IMAGE_THUNK_DATA32, *PIMAGE_THUNK_DATA32;

struct IMAGE_THUNK_DATA32 {
    dword StartAddressOfRawData;
    dword EndAddressOfRawData;
    dword AddressOfIndex;
    dword AddressOfCallBacks;
    dword SizeOfZeroFill;
    dword Characteristics;
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

typedef char * va_list;

typedef int (* _onexit_t)(void);

typedef uint size_t;

typedef struct _startupinfo _startupinfo, *P_startupinfo;

struct _startupinfo {
    int newmode;
};




void FUN_00401000(void)

{
  code *pcVar1;
  LPTOP_LEVEL_EXCEPTION_FILTER pPVar2;
  int *piVar3;
  char **ppcVar4;
  UINT uExitCode;
  int extraout_EAX;
  int _Mode;
  undefined4 local_38;
  undefined4 local_34;
  _startupinfo local_14;
  char **local_10 [2];
  
  local_34 = 0;
  local_38 = 2;
  ___dyn_tls_init_12(0,2);
  pPVar2 = _SetUnhandledExceptionFilter_4((LPTOP_LEVEL_EXCEPTION_FILTER)&__gnu_exception_handler_4);
  ___cpu_features_init(pPVar2,local_38,local_34);
  _fpreset();
  local_14 = (_startupinfo)0x0;
  ___getmainargs(&DAT_00405000,(char ***)&__argv,local_10,DAT_00402000,&local_14);
  _Mode = __CRT_fmode;
  if (__CRT_fmode != 0) goto LAB_004010c8;
  do {
    piVar3 = (int *)___p__fmode();
    *piVar3 = __fmode;
    __pei386_runtime_relocator();
    ___main();
    ppcVar4 = (char **)___p__environ();
    uExitCode = _main(DAT_00405000,__argv,(char **)*ppcVar4);
    __cexit();
    _ExitProcess_4(uExitCode);
    _Mode = extraout_EAX;
LAB_004010c8:
    pcVar1 = _iob_exref;
    __fmode = _Mode;
    __setmode(*(int *)(_iob_exref + 0x10),_Mode);
    __setmode(*(int *)(pcVar1 + 0x30),__CRT_fmode);
    __setmode(*(int *)(pcVar1 + 0x50),__CRT_fmode);
  } while( true );
}



// WARNING: Exceeded maximum restarts with more pending

void _mainCRTStartup(void)

{
  __set_app_type(1);
  FUN_00401000();
  __set_app_type(2);
  FUN_00401000();
                    // WARNING: Could not recover jumptable at 0x004012a8. Too many branches
                    // WARNING: Treating indirect jump as call
  atexit();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void _atexit(void)

{
                    // WARNING: Could not recover jumptable at 0x004012a8. Too many branches
                    // WARNING: Treating indirect jump as call
  atexit();
  return;
}



int __cdecl _main(int _Argc,char **_Argv,char **_Env)

{
  ___main();
  __ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(&_ZSt4cerr_exref,"Hello, World!");
  __ZNSolsEPFRSoS_E(&__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_);
  return 0;
}



void __cdecl __Z41__static_initialization_and_destruction_0ii(int param_1,int param_2)

{
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    __ZNSt8ios_base4InitC1Ev();
    _atexit();
  }
  return;
}



void __ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(void)

{
                    // WARNING: Could not recover jumptable at 0x00401438. Too many branches
                    // WARNING: Treating indirect jump as call
  _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc();
  return;
}



void __ZNSolsEPFRSoS_E(void)

{
                    // WARNING: Could not recover jumptable at 0x00401440. Too many branches
                    // WARNING: Treating indirect jump as call
  _ZNSolsEPFRSoS_E();
  return;
}



void __ZNSt8ios_base4InitD1Ev(void)

{
                    // WARNING: Could not recover jumptable at 0x00401448. Too many branches
                    // WARNING: Treating indirect jump as call
  _ZNSt8ios_base4InitD1Ev();
  return;
}



void __ZNSt8ios_base4InitC1Ev(void)

{
                    // WARNING: Could not recover jumptable at 0x00401450. Too many branches
                    // WARNING: Treating indirect jump as call
  _ZNSt8ios_base4InitC1Ev();
  return;
}



undefined4 ___dyn_tls_dtor_12(undefined4 param_1,int param_2)

{
  if ((param_2 == 3) || (param_2 == 0)) {
    ___mingw_TLScallback(param_1,param_2);
  }
  return 1;
}



// WARNING: Removing unreachable block (ram,0x004014cd)
// WARNING: Removing unreachable block (ram,0x004014d0)
// WARNING: Removing unreachable block (ram,0x004014d6)
// WARNING: Removing unreachable block (ram,0x004014d8)
// WARNING: Removing unreachable block (ram,0x004014e3)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 ___dyn_tls_init_12(undefined4 param_1,int param_2)

{
  if (___CRT_MT != 2) {
    ___CRT_MT = 2;
  }
  if ((param_2 != 2) && (param_2 == 1)) {
    ___mingw_TLScallback(param_1,1);
  }
  return 1;
}



// WARNING: Removing unreachable block (ram,0x004015bf)
// WARNING: Removing unreachable block (ram,0x004015b1)
// WARNING: Removing unreachable block (ram,0x00401545)
// WARNING: Removing unreachable block (ram,0x00401536)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 ___cpu_features_init(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar4;
  
  uVar4 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
          (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
          (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1) |
          (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
          (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  uVar3 = uVar4 ^ 0x200000;
  uVar3 = ((uint)((uVar3 & 0x4000) != 0) * 0x4000 | (uint)((uVar3 & 0x800) != 0) * 0x800 |
           (uint)((uVar3 & 0x400) != 0) * 0x400 | (uint)((uVar3 & 0x200) != 0) * 0x200 |
           (uint)((uVar3 & 0x100) != 0) * 0x100 | (uint)((uVar3 & 0x80) != 0) * 0x80 |
           (uint)((uVar3 & 0x40) != 0) * 0x40 | (uint)((uVar3 & 0x10) != 0) * 0x10 |
           (uint)((uVar3 & 4) != 0) * 4 | (uint)((uVar3 & 1) != 0) |
           (uint)((uVar3 & 0x200000) != 0) * 0x200000 | (uint)((uVar3 & 0x40000) != 0) * 0x40000) ^
          uVar4;
  if ((uVar3 & 0x200000) != 0) {
    puVar1 = (uint *)cpuid_basic_info(0);
    uVar3 = *puVar1;
    uVar4 = puVar1[2];
    if (uVar3 != 0) {
      iVar2 = cpuid_Version_info(1);
      uVar3 = *(uint *)(iVar2 + 8);
      if ((uVar3 & 0x100) != 0) {
        ____cpu_features = ____cpu_features | 1;
      }
      if ((uVar3 & 0x8000) != 0) {
        ____cpu_features = ____cpu_features | 2;
      }
      if ((uVar3 & 0x800000) != 0) {
        ____cpu_features = ____cpu_features | 4;
      }
      if ((uVar3 & 0x1000000) != 0) {
        ____cpu_features = ____cpu_features | 8;
      }
      if ((uVar3 & 0x2000000) != 0) {
        ____cpu_features = ____cpu_features | 0x10;
      }
      if ((uVar3 & 0x4000000) != 0) {
        ____cpu_features = ____cpu_features | 0x20;
      }
      if ((*(uint *)(iVar2 + 0xc) & 1) != 0) {
        ____cpu_features = ____cpu_features | 0x40;
      }
      if ((*(uint *)(iVar2 + 0xc) & 0x2000) != 0) {
        ____cpu_features = ____cpu_features | 0x80;
      }
      puVar1 = (uint *)cpuid(0x80000000);
      uVar3 = *puVar1;
      uVar4 = puVar1[2];
      if (0x80000000 < uVar3) {
        puVar1 = (uint *)cpuid(0x80000001);
        uVar3 = *puVar1;
        if ((int)puVar1[2] < 0) {
          ____cpu_features = ____cpu_features | 0x100;
        }
        uVar4 = puVar1[2] & 0x40000000;
        if (uVar4 != 0) {
          ____cpu_features = ____cpu_features | 0x200;
        }
      }
    }
  }
  return CONCAT44(uVar4,uVar3);
}



void __cdecl _fpreset(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x004017c6)
// WARNING: Removing unreachable block (ram,0x004017cc)
// WARNING: Removing unreachable block (ram,0x004017d2)
// WARNING: Removing unreachable block (ram,0x00401780)
// WARNING: Removing unreachable block (ram,0x00401788)
// WARNING: Removing unreachable block (ram,0x00401790)
// WARNING: Removing unreachable block (ram,0x004017b3)
// WARNING: Removing unreachable block (ram,0x004018e7)
// WARNING: Removing unreachable block (ram,0x00401909)
// WARNING: Removing unreachable block (ram,0x0040190c)
// WARNING: Removing unreachable block (ram,0x00401923)

void ___report_error(char *param_1)

{
  undefined *lpAddress;
  SIZE_T SVar1;
  int extraout_ECX;
  int iVar2;
  undefined *extraout_EDX;
  uint uVar3;
  FILE *_File;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulonglong uVar7;
  PDWORD lpflOldProtect;
  LPVOID in_stack_ffffffa8;
  SIZE_T in_stack_ffffffb4;
  DWORD in_stack_ffffffbc;
  DWORD in_stack_ffffffc4;
  
  _File = (FILE *)(_iob_exref + 0x40);
  _fwrite("Mingw runtime failure:\n",1,0x17,_File);
  _vfprintf(_File,param_1,&stack0x00000008);
  _abort();
  if (extraout_ECX != 0) {
    iVar2 = extraout_ECX;
    SVar1 = _VirtualQuery_12(lpAddress,(PMEMORY_BASIC_INFORMATION)&stack0xffffffa8,0x1c);
    if (SVar1 == 0) {
      ___report_error("  VirtualQuery failed for %d bytes at address %p");
      if (_was_init_30902 == 0) {
        _was_init_30902 = 1;
        puVar4 = &DAT_00403134;
        do {
          uVar3 = puVar4[2] & 0xff;
          uVar7 = CONCAT44(puVar4[2],(ushort *)(puVar4[1] + 0x400000)) & 0xffffffffff;
          if (uVar3 == 0x10) {
            if ((*(ushort *)(puVar4[1] + 0x400000) & 0x8000) == 0) {
LAB_00401863:
              if (uVar3 != 0x10) {
                if (uVar3 == 0x20) goto LAB_0040189f;
                if (uVar3 == 8) goto LAB_00401881;
                goto LAB_004018ac;
              }
            }
            ___write_memory();
          }
          else {
            if (uVar3 == 0x20) {
LAB_0040189f:
              ___write_memory();
            }
            else {
              if (uVar3 != 8) {
                uVar7 = ___report_error("  Unknown pseudo relocation bit size %d.\n");
              }
              uVar3 = (uint)(uVar7 >> 0x20);
              if ((*(byte *)uVar7 & 0x80) == 0) goto LAB_00401863;
LAB_00401881:
              ___write_memory();
            }
          }
LAB_004018ac:
          puVar4 = puVar4 + 3;
        } while (puVar4 < &__rt_psrelocs_end);
      }
      return;
    }
    puVar5 = extraout_EDX;
    puVar6 = lpAddress;
    if ((in_stack_ffffffbc == 0x40) || (in_stack_ffffffbc == 4)) {
      while (iVar2 != 0) {
        iVar2 = iVar2 + -1;
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      return;
    }
    lpflOldProtect = (PDWORD)&stack0xffffffc4;
    _VirtualProtect_16(in_stack_ffffffa8,in_stack_ffffffb4,0x40,lpflOldProtect);
    puVar5 = extraout_EDX;
    puVar6 = lpAddress;
    while (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    if ((in_stack_ffffffbc != 0x40) && (in_stack_ffffffbc != 4)) {
      _VirtualProtect_16(in_stack_ffffffa8,in_stack_ffffffb4,in_stack_ffffffc4,lpflOldProtect);
      return;
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x004017c6)
// WARNING: Removing unreachable block (ram,0x004017cc)
// WARNING: Removing unreachable block (ram,0x004017d2)
// WARNING: Removing unreachable block (ram,0x00401780)
// WARNING: Removing unreachable block (ram,0x00401788)
// WARNING: Removing unreachable block (ram,0x00401790)
// WARNING: Removing unreachable block (ram,0x004017b3)
// WARNING: Removing unreachable block (ram,0x004018e7)
// WARNING: Removing unreachable block (ram,0x00401909)
// WARNING: Removing unreachable block (ram,0x0040190c)
// WARNING: Removing unreachable block (ram,0x00401923)

void ___write_memory(void)

{
  undefined *in_EAX;
  SIZE_T SVar1;
  int in_ECX;
  undefined *in_EDX;
  uint uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  _MEMORY_BASIC_INFORMATION local_3c;
  DWORD local_20 [4];
  
  if (in_ECX != 0) {
    SVar1 = _VirtualQuery_12(in_EAX,(PMEMORY_BASIC_INFORMATION)&local_3c,0x1c);
    if (SVar1 == 0) {
      ___report_error("  VirtualQuery failed for %d bytes at address %p");
      if (_was_init_30902 == 0) {
        _was_init_30902 = 1;
        puVar3 = &DAT_00403134;
        do {
          uVar2 = puVar3[2] & 0xff;
          uVar4 = CONCAT44(puVar3[2],(ushort *)(puVar3[1] + 0x400000)) & 0xffffffffff;
          if (uVar2 == 0x10) {
            if ((*(ushort *)(puVar3[1] + 0x400000) & 0x8000) == 0) {
LAB_00401863:
              if (uVar2 != 0x10) {
                if (uVar2 == 0x20) goto LAB_0040189f;
                if (uVar2 == 8) goto LAB_00401881;
                goto LAB_004018ac;
              }
            }
            ___write_memory();
          }
          else {
            if (uVar2 == 0x20) {
LAB_0040189f:
              ___write_memory();
            }
            else {
              if (uVar2 != 8) {
                uVar4 = ___report_error("  Unknown pseudo relocation bit size %d.\n");
              }
              uVar2 = (uint)(uVar4 >> 0x20);
              if ((*(byte *)uVar4 & 0x80) == 0) goto LAB_00401863;
LAB_00401881:
              ___write_memory();
            }
          }
LAB_004018ac:
          puVar3 = puVar3 + 3;
        } while (puVar3 < &__rt_psrelocs_end);
      }
      return;
    }
    if ((local_3c.Protect == 0x40) || (local_3c.Protect == 4)) {
      while (in_ECX != 0) {
        in_ECX = in_ECX + -1;
        *in_EAX = *in_EDX;
        in_EDX = in_EDX + 1;
        in_EAX = in_EAX + 1;
      }
      return;
    }
    _VirtualProtect_16(local_3c.BaseAddress,local_3c.RegionSize,0x40,local_20);
    while (in_ECX != 0) {
      in_ECX = in_ECX + -1;
      *in_EAX = *in_EDX;
      in_EDX = in_EDX + 1;
      in_EAX = in_EAX + 1;
    }
    if ((local_3c.Protect != 0x40) && (local_3c.Protect != 4)) {
      _VirtualProtect_16(local_3c.BaseAddress,local_3c.RegionSize,local_20[0],local_20);
      return;
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x004017c6)
// WARNING: Removing unreachable block (ram,0x004017cc)
// WARNING: Removing unreachable block (ram,0x004017d2)
// WARNING: Removing unreachable block (ram,0x00401780)
// WARNING: Removing unreachable block (ram,0x00401788)
// WARNING: Removing unreachable block (ram,0x00401790)
// WARNING: Removing unreachable block (ram,0x004017b3)
// WARNING: Removing unreachable block (ram,0x004018e7)
// WARNING: Removing unreachable block (ram,0x00401909)
// WARNING: Removing unreachable block (ram,0x0040190c)
// WARNING: Removing unreachable block (ram,0x00401923)

void __pei386_runtime_relocator(void)

{
  uint uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  
  if (_was_init_30902 == 0) {
    _was_init_30902 = 1;
    puVar2 = &DAT_00403134;
    do {
      uVar1 = puVar2[2] & 0xff;
      uVar3 = CONCAT44(puVar2[2],(ushort *)(puVar2[1] + 0x400000)) & 0xffffffffff;
      if (uVar1 == 0x10) {
        if ((*(ushort *)(puVar2[1] + 0x400000) & 0x8000) == 0) {
LAB_00401863:
          if (uVar1 != 0x10) {
            if (uVar1 == 0x20) goto LAB_0040189f;
            if (uVar1 == 8) goto LAB_00401881;
            goto LAB_004018ac;
          }
        }
        ___write_memory();
      }
      else {
        if (uVar1 == 0x20) {
LAB_0040189f:
          ___write_memory();
        }
        else {
          if (uVar1 != 8) {
            uVar3 = ___report_error("  Unknown pseudo relocation bit size %d.\n");
          }
          uVar1 = (uint)(uVar3 >> 0x20);
          if ((*(byte *)uVar3 & 0x80) == 0) goto LAB_00401863;
LAB_00401881:
          ___write_memory();
        }
      }
LAB_004018ac:
      puVar2 = puVar2 + 3;
    } while (puVar2 < &__rt_psrelocs_end);
  }
  return;
}



void ___main(void)

{
  int iVar1;
  int iVar2;
  
  if (_initialized == 0) {
    _initialized = 1;
    iVar1 = 0;
    do {
      iVar2 = iVar1;
      iVar1 = iVar2 + 1;
    } while ((&___CTOR_LIST__)[iVar2 + 1] != 0);
    while (iVar2 != 0) {
      (*(code *)(&___CTOR_LIST__)[iVar2])();
      iVar2 = iVar2 + -1;
    }
    _atexit();
    return;
  }
  return;
}



void ___mingwthr_run_key_dtors(void)

{
  DWORD *pDVar1;
  LPVOID pvVar2;
  DWORD DVar3;
  
  if (___mingwthr_cs_init != 0) {
    _EnterCriticalSection_4((LPCRITICAL_SECTION)&___mingwthr_cs);
    pDVar1 = _key_dtor_list;
    while (pDVar1 != (DWORD *)0x0) {
      pvVar2 = _TlsGetValue_4(*pDVar1);
      DVar3 = _GetLastError_0();
      if ((DVar3 == 0) && (pvVar2 != (LPVOID)0x0)) {
        (*(code *)pDVar1[1])(pvVar2);
      }
      pDVar1 = (DWORD *)pDVar1[2];
    }
    _LeaveCriticalSection_4((LPCRITICAL_SECTION)&___mingwthr_cs);
    return;
  }
  return;
}



undefined4 __cdecl ___mingw_TLScallback(undefined4 param_1,int param_2)

{
  if (param_2 != 1) {
    if (param_2 == 0) {
      ___mingwthr_run_key_dtors();
      if (___mingwthr_cs_init == 1) {
        ___mingwthr_cs_init = 0;
        _DeleteCriticalSection_4((LPCRITICAL_SECTION)&___mingwthr_cs);
      }
    }
    else {
      if (param_2 == 3) {
        ___mingwthr_run_key_dtors();
      }
    }
    return 1;
  }
  if (___mingwthr_cs_init == 0) {
    _InitializeCriticalSection_4((LPCRITICAL_SECTION)&___mingwthr_cs);
  }
  ___mingwthr_cs_init = 1;
  return 1;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl
___getmainargs(int *_Argc,char ***_Argv,char ***_Env,int _DoWildCard,_startupinfo *_StartInfo)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401b8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = __getmainargs();
  return iVar1;
}



void ___p__fmode(void)

{
                    // WARNING: Could not recover jumptable at 0x00401b94. Too many branches
                    // WARNING: Treating indirect jump as call
  __p__fmode();
  return;
}



void ___p__environ(void)

{
                    // WARNING: Could not recover jumptable at 0x00401b9c. Too many branches
                    // WARNING: Treating indirect jump as call
  __p__environ();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl __cexit(void)

{
                    // WARNING: Could not recover jumptable at 0x00401ba4. Too many branches
                    // WARNING: Treating indirect jump as call
  _cexit();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl __setmode(int _FileHandle,int _Mode)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401bac. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _setmode();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _signal(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00401bb4. Too many branches
                    // WARNING: Treating indirect jump as call
  signal(param_1);
  return;
}



// WARNING: Exceeded maximum restarts with more pending

size_t __cdecl _fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401bbc. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = fwrite();
  return sVar1;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl _vfprintf(FILE *_File,char *_Format,va_list _ArgList)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401bc4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = vfprintf();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _abort(void)

{
                    // WARNING: Could not recover jumptable at 0x00401bcc. Too many branches
                    // WARNING: Treating indirect jump as call
  abort();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void * __cdecl _calloc(size_t _Count,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401bd4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)calloc();
  return pvVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x00401bdc. Too many branches
                    // WARNING: Treating indirect jump as call
  free();
  return;
}



LPTOP_LEVEL_EXCEPTION_FILTER
_SetUnhandledExceptionFilter_4(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)

{
  LPTOP_LEVEL_EXCEPTION_FILTER pPVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401be4. Too many branches
                    // WARNING: Treating indirect jump as call
  pPVar1 = SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
  return pPVar1;
}



void _ExitProcess_4(UINT uExitCode)

{
                    // WARNING: Could not recover jumptable at 0x00401bec. Too many branches
                    // WARNING: Treating indirect jump as call
  ExitProcess(uExitCode);
  return;
}



HMODULE _GetModuleHandleA_4(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401bf4. Too many branches
                    // WARNING: Treating indirect jump as call
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}



FARPROC _GetProcAddress_8(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401bfc. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}



SIZE_T _VirtualQuery_12(LPCVOID lpAddress,PMEMORY_BASIC_INFORMATION lpBuffer,SIZE_T dwLength)

{
  SIZE_T SVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401c04. Too many branches
                    // WARNING: Treating indirect jump as call
  SVar1 = VirtualQuery(lpAddress,lpBuffer,dwLength);
  return SVar1;
}



BOOL _VirtualProtect_16(LPVOID lpAddress,SIZE_T dwSize,DWORD flNewProtect,PDWORD lpflOldProtect)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401c0c. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = VirtualProtect(lpAddress,dwSize,flNewProtect,lpflOldProtect);
  return BVar1;
}



void _EnterCriticalSection_4(LPCRITICAL_SECTION lpCriticalSection)

{
                    // WARNING: Could not recover jumptable at 0x00401c14. Too many branches
                    // WARNING: Treating indirect jump as call
  EnterCriticalSection(lpCriticalSection);
  return;
}



LPVOID _TlsGetValue_4(DWORD dwTlsIndex)

{
  LPVOID pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401c1c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = TlsGetValue(dwTlsIndex);
  return pvVar1;
}



DWORD _GetLastError_0(void)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401c24. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetLastError();
  return DVar1;
}



void _LeaveCriticalSection_4(LPCRITICAL_SECTION lpCriticalSection)

{
                    // WARNING: Could not recover jumptable at 0x00401c2c. Too many branches
                    // WARNING: Treating indirect jump as call
  LeaveCriticalSection(lpCriticalSection);
  return;
}



void _DeleteCriticalSection_4(LPCRITICAL_SECTION lpCriticalSection)

{
                    // WARNING: Could not recover jumptable at 0x00401c34. Too many branches
                    // WARNING: Treating indirect jump as call
  DeleteCriticalSection(lpCriticalSection);
  return;
}



void _InitializeCriticalSection_4(LPCRITICAL_SECTION lpCriticalSection)

{
                    // WARNING: Could not recover jumptable at 0x00401c3c. Too many branches
                    // WARNING: Treating indirect jump as call
  InitializeCriticalSection(lpCriticalSection);
  return;
}


