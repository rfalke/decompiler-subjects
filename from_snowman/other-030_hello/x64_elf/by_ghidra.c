typedef unsigned char   undefined;

typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef short    wchar_t;
typedef unsigned short    word;
typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY _IMAGE_RUNTIME_FUNCTION_ENTRY, *P_IMAGE_RUNTIME_FUNCTION_ENTRY;

struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
    ImageBaseOffset32 BeginAddress;
    ImageBaseOffset32 EndAddress;
    ImageBaseOffset32 UnwindInfoAddressOrData;
};

typedef unsigned short    wchar16;
typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME * LPFILETIME;

typedef ulong DWORD;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef ushort WORD;

typedef uchar BYTE;

typedef longlong INT_PTR;

typedef INT_PTR (* FARPROC)(void);

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

typedef BYTE * LPBYTE;

typedef uint UINT;

typedef BYTE * PBYTE;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

typedef struct IMAGE_OPTIONAL_HEADER64 IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;

struct IMAGE_OPTIONAL_HEADER64 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    pointer64 ImageBase;
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
    qword SizeOfStackReserve;
    qword SizeOfStackCommit;
    qword SizeOfHeapReserve;
    qword SizeOfHeapCommit;
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
    word Machine; // 34404
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_NT_HEADERS64 IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;

struct IMAGE_NT_HEADERS64 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER64 OptionalHeader;
};

typedef struct IMAGE_THUNK_DATA64 IMAGE_THUNK_DATA64, *PIMAGE_THUNK_DATA64;

struct IMAGE_THUNK_DATA64 {
    qword StartAddressOfRawData;
    qword EndAddressOfRawData;
    qword AddressOfIndex;
    qword AddressOfCallBacks;
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

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef char CHAR;

typedef CHAR * LPSTR;

typedef void * HANDLE;

struct _STARTUPINFOA {
    DWORD cb;
    LPSTR lpReserved;
    LPSTR lpDesktop;
    LPSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION * PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG * PRTL_CRITICAL_SECTION_DEBUG;

typedef long LONG;

typedef ulonglong ULONG_PTR;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

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

typedef struct _STARTUPINFOA * LPSTARTUPINFOA;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (* PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD * PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT * PCONTEXT;

typedef void * PVOID;

typedef ulonglong DWORD64;

typedef union _union_52 _union_52, *P_union_52;

typedef struct _M128A _M128A, *P_M128A;

typedef struct _M128A M128A;

typedef struct _XSAVE_FORMAT _XSAVE_FORMAT, *P_XSAVE_FORMAT;

typedef struct _XSAVE_FORMAT XSAVE_FORMAT;

typedef XSAVE_FORMAT XMM_SAVE_AREA32;

typedef struct _struct_53 _struct_53, *P_struct_53;

typedef ulonglong ULONGLONG;

typedef longlong LONGLONG;

struct _M128A {
    ULONGLONG Low;
    LONGLONG High;
};

struct _XSAVE_FORMAT {
    WORD ControlWord;
    WORD StatusWord;
    BYTE TagWord;
    BYTE Reserved1;
    WORD ErrorOpcode;
    DWORD ErrorOffset;
    WORD ErrorSelector;
    WORD Reserved2;
    DWORD DataOffset;
    WORD DataSelector;
    WORD Reserved3;
    DWORD MxCsr;
    DWORD MxCsr_Mask;
    M128A FloatRegisters[8];
    M128A XmmRegisters[16];
    BYTE Reserved4[96];
};

struct _struct_53 {
    M128A Header[2];
    M128A Legacy[8];
    M128A Xmm0;
    M128A Xmm1;
    M128A Xmm2;
    M128A Xmm3;
    M128A Xmm4;
    M128A Xmm5;
    M128A Xmm6;
    M128A Xmm7;
    M128A Xmm8;
    M128A Xmm9;
    M128A Xmm10;
    M128A Xmm11;
    M128A Xmm12;
    M128A Xmm13;
    M128A Xmm14;
    M128A Xmm15;
};

union _union_52 {
    XMM_SAVE_AREA32 FltSave;
    struct _struct_53 s;
};

struct _CONTEXT {
    DWORD64 P1Home;
    DWORD64 P2Home;
    DWORD64 P3Home;
    DWORD64 P4Home;
    DWORD64 P5Home;
    DWORD64 P6Home;
    DWORD ContextFlags;
    DWORD MxCsr;
    WORD SegCs;
    WORD SegDs;
    WORD SegEs;
    WORD SegFs;
    WORD SegGs;
    WORD SegSs;
    DWORD EFlags;
    DWORD64 Dr0;
    DWORD64 Dr1;
    DWORD64 Dr2;
    DWORD64 Dr3;
    DWORD64 Dr6;
    DWORD64 Dr7;
    DWORD64 Rax;
    DWORD64 Rcx;
    DWORD64 Rdx;
    DWORD64 Rbx;
    DWORD64 Rsp;
    DWORD64 Rbp;
    DWORD64 Rsi;
    DWORD64 Rdi;
    DWORD64 R8;
    DWORD64 R9;
    DWORD64 R10;
    DWORD64 R11;
    DWORD64 R12;
    DWORD64 R13;
    DWORD64 R14;
    DWORD64 R15;
    DWORD64 Rip;
    union _union_52 u;
    M128A VectorRegister[26];
    DWORD64 VectorControl;
    DWORD64 DebugControl;
    DWORD64 LastBranchToRip;
    DWORD64 LastBranchFromRip;
    DWORD64 LastExceptionToRip;
    DWORD64 LastExceptionFromRip;
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

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

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

typedef struct _RUNTIME_FUNCTION _RUNTIME_FUNCTION, *P_RUNTIME_FUNCTION;

struct _RUNTIME_FUNCTION {
    DWORD BeginAddress;
    DWORD EndAddress;
    DWORD UnwindData;
};

typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER, *P_IMAGE_SECTION_HEADER;

typedef union _union_236 _union_236, *P_union_236;

union _union_236 {
    DWORD PhysicalAddress;
    DWORD VirtualSize;
};

struct _IMAGE_SECTION_HEADER {
    BYTE Name[8];
    union _union_236 Misc;
    DWORD VirtualAddress;
    DWORD SizeOfRawData;
    DWORD PointerToRawData;
    DWORD PointerToRelocations;
    DWORD PointerToLinenumbers;
    WORD NumberOfRelocations;
    WORD NumberOfLinenumbers;
    DWORD Characteristics;
};

typedef struct _RUNTIME_FUNCTION * PRUNTIME_FUNCTION;

typedef enum _EXCEPTION_DISPOSITION {
    ExceptionCollidedUnwind=3,
    ExceptionContinueExecution=0,
    ExceptionContinueSearch=1,
    ExceptionNestedException=2
} _EXCEPTION_DISPOSITION;

typedef enum _EXCEPTION_DISPOSITION EXCEPTION_DISPOSITION;

typedef EXCEPTION_DISPOSITION (EXCEPTION_ROUTINE)(struct _EXCEPTION_RECORD *, PVOID, struct _CONTEXT *, PVOID);

typedef struct _IMAGE_SECTION_HEADER * PIMAGE_SECTION_HEADER;

typedef BYTE BOOLEAN;

typedef wchar_t WCHAR;

typedef WCHAR * LPCWSTR;

typedef struct _M128A * PM128A;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY _UNWIND_HISTORY_TABLE_ENTRY, *P_UNWIND_HISTORY_TABLE_ENTRY;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY UNWIND_HISTORY_TABLE_ENTRY;

struct _UNWIND_HISTORY_TABLE_ENTRY {
    DWORD64 ImageBase;
    PRUNTIME_FUNCTION FunctionEntry;
};

typedef union _union_61 _union_61, *P_union_61;

typedef ulonglong * PDWORD64;

typedef struct _struct_62 _struct_62, *P_struct_62;

struct _struct_62 {
    PDWORD64 Rax;
    PDWORD64 Rcx;
    PDWORD64 Rdx;
    PDWORD64 Rbx;
    PDWORD64 Rsp;
    PDWORD64 Rbp;
    PDWORD64 Rsi;
    PDWORD64 Rdi;
    PDWORD64 R8;
    PDWORD64 R9;
    PDWORD64 R10;
    PDWORD64 R11;
    PDWORD64 R12;
    PDWORD64 R13;
    PDWORD64 R14;
    PDWORD64 R15;
};

union _union_61 {
    PDWORD64 IntegerContext[16];
    struct _struct_62 s;
};

typedef struct _UNWIND_HISTORY_TABLE _UNWIND_HISTORY_TABLE, *P_UNWIND_HISTORY_TABLE;

typedef struct _UNWIND_HISTORY_TABLE * PUNWIND_HISTORY_TABLE;

struct _UNWIND_HISTORY_TABLE {
    DWORD Count;
    BYTE LocalHint;
    BYTE GlobalHint;
    BYTE Search;
    BYTE Once;
    DWORD64 LowAddress;
    DWORD64 HighAddress;
    UNWIND_HISTORY_TABLE_ENTRY Entry[12];
};

typedef struct _struct_60 _struct_60, *P_struct_60;

struct _struct_60 {
    PM128A Xmm0;
    PM128A Xmm1;
    PM128A Xmm2;
    PM128A Xmm3;
    PM128A Xmm4;
    PM128A Xmm5;
    PM128A Xmm6;
    PM128A Xmm7;
    PM128A Xmm8;
    PM128A Xmm9;
    PM128A Xmm10;
    PM128A Xmm11;
    PM128A Xmm12;
    PM128A Xmm13;
    PM128A Xmm14;
    PM128A Xmm15;
};

typedef CHAR * LPCSTR;

typedef struct _MEMORY_BASIC_INFORMATION * PMEMORY_BASIC_INFORMATION;

typedef union _union_59 _union_59, *P_union_59;

union _union_59 {
    PM128A FloatingContext[16];
    struct _struct_60 s;
};

typedef struct _KNONVOLATILE_CONTEXT_POINTERS _KNONVOLATILE_CONTEXT_POINTERS, *P_KNONVOLATILE_CONTEXT_POINTERS;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS * PKNONVOLATILE_CONTEXT_POINTERS;

struct _KNONVOLATILE_CONTEXT_POINTERS {
    union _union_59 u;
    union _union_61 u2;
};

typedef EXCEPTION_ROUTINE * PEXCEPTION_ROUTINE;

typedef char * va_list;

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

typedef int (* _onexit_t)(void);

typedef ulonglong size_t;




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __tmainCRTStartup(undefined8 param_1,undefined8 param_2,ulonglong param_3,PDWORD param_4)

{
  char **ppcVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  int iVar6;
  char **ppcVar7;
  HMODULE hModule;
  FARPROC pFVar8;
  char **ppcVar9;
  size_t sVar10;
  char *_Dst;
  LPSTARTUPINFOA p_Var11;
  LPSTARTUPINFOA lpStartupInfo;
  LPSTARTUPINFOA p_Var12;
  longlong lVar13;
  longlong in_GS_OFFSET;
  bool bVar14;
  undefined local_98 [64];
  ushort local_58;
  
  lpStartupInfo = (LPSTARTUPINFOA)local_98;
  p_Var12 = lpStartupInfo;
  for (p_Var11 = (LPSTARTUPINFOA)0xd; p_Var11 != (LPSTARTUPINFOA)0x0;
      p_Var11 = (LPSTARTUPINFOA)((longlong)&p_Var11[-1].hStdError + 7)) {
    *(undefined8 *)p_Var12 = 0;
    p_Var12 = (LPSTARTUPINFOA)&p_Var12->lpReserved;
  }
  p_Var12 = lpStartupInfo;
  if (mingw_app_type != 0) {
    GetStartupInfoA(lpStartupInfo);
    p_Var11 = lpStartupInfo;
  }
  uVar3 = *(ulonglong *)(*(longlong *)(in_GS_OFFSET + 0x30) + 8);
  LOCK();
  bVar14 = __native_startup_lock == 0;
  __native_startup_lock =
       __native_startup_lock ^ (ulonglong)bVar14 * (__native_startup_lock ^ uVar3);
  uVar4 = !bVar14 * __native_startup_lock;
  bVar14 = false;
  if ((uVar4 == 0) || (bVar14 = true, uVar3 == uVar4)) {
LAB_00401204:
    bVar5 = bVar14;
    if (__native_startup_state != 1) goto LAB_00401213;
LAB_00401434:
    p_Var11 = (LPSTARTUPINFOA)0x1f;
    _amsg_exit(0x1f);
    bVar5 = bVar14;
  }
  else {
    do {
      p_Var11 = (LPSTARTUPINFOA)0x3e8;
      Sleep(1000);
      LOCK();
      bVar14 = __native_startup_lock == 0;
      __native_startup_lock =
           __native_startup_lock ^ (ulonglong)bVar14 * (__native_startup_lock ^ uVar3);
      uVar4 = !bVar14 * __native_startup_lock;
      if (uVar4 == 0) {
        bVar14 = false;
        goto LAB_00401204;
      }
    } while (uVar3 != uVar4);
    bVar14 = true;
    bVar5 = true;
    if (__native_startup_state == 1) goto LAB_00401434;
LAB_00401213:
    if (__native_startup_state == 0) {
      p_Var12 = (LPSTARTUPINFOA)&__xi_z;
      p_Var11 = (LPSTARTUPINFOA)&__xi_a;
      __native_startup_state = 1;
      _initterm();
    }
    else {
      DAT_00407000 = 1;
    }
  }
  if (__native_startup_state == 1) {
    p_Var12 = (LPSTARTUPINFOA)&__xc_z;
    p_Var11 = (LPSTARTUPINFOA)&DAT_00409000;
    _initterm();
    __native_startup_state = 2;
  }
  if (!bVar5) {
    LOCK();
    __native_startup_lock = 0;
  }
  if (PTR___dyn_tls_init_00403000 != (undefined *)0x0) {
    param_3 = 0;
    p_Var12 = (LPSTARTUPINFOA)0x2;
    p_Var11 = (LPSTARTUPINFOA)0x0;
    (*(code *)PTR___dyn_tls_init_00403000)();
  }
  _pei386_runtime_relocator(p_Var11,p_Var12,param_3,param_4);
  __mingw_oldexcpt_handler =
       SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&_gnu_exception_handler);
  __mingw_init_ehandler();
  hModule = (HMODULE)__mingw_get_msvcrt_handle();
  pFVar8 = GetProcAddress(hModule,"_set_invalid_parameter_handler");
  if (pFVar8 != (FARPROC)0x0) {
    (*pFVar8)();
  }
  fpreset();
  iVar6 = argc;
  if (mingw_app_type != 0) {
    bVar14 = false;
    ___mingw_winmain_lpCmdLine = *(char **)_acmdln_exref;
    do {
      cVar2 = *___mingw_winmain_lpCmdLine;
      if (cVar2 < '!') {
        if (cVar2 == '\0') goto LAB_004012f4;
        if (!bVar14) goto LAB_004012e8;
      }
      else {
        if (cVar2 == '\"') {
          bVar14 = (bool)(bVar14 ^ 1);
        }
      }
      ___mingw_winmain_lpCmdLine = ___mingw_winmain_lpCmdLine + 1;
    } while( true );
  }
LAB_0040131f:
  ppcVar9 = (char **)malloc((longlong)(argc + 1) << 3);
  ppcVar7 = argv;
  lVar13 = 0;
  if (0 < iVar6) {
    lVar13 = 0;
    do {
      sVar10 = strlen(ppcVar7[lVar13]);
      sVar10 = SEXT48((int)sVar10 + 1);
      _Dst = (char *)malloc(sVar10);
      ppcVar9[lVar13] = _Dst;
      ppcVar1 = ppcVar7 + lVar13;
      lVar13 = lVar13 + 1;
      memcpy(_Dst,*ppcVar1,sVar10);
    } while ((int)lVar13 < iVar6);
    lVar13 = (longlong)iVar6 * 8;
  }
  *(undefined8 *)((longlong)ppcVar9 + lVar13) = 0;
  argv = ppcVar9;
  __main();
  iVar6 = argc;
  *(char ***)__initenv_exref = envp;
  mainret = main(iVar6,argv,envp);
  if (managedapp != 0) {
    if (DAT_00407000 == 0) {
      _cexit();
    }
    return mainret;
  }
                    // WARNING: Subroutine does not return
  exit(mainret);
  while (*___mingw_winmain_lpCmdLine != '\0') {
LAB_004012e8:
    ___mingw_winmain_lpCmdLine = ___mingw_winmain_lpCmdLine + 1;
    if (' ' < *___mingw_winmain_lpCmdLine) break;
  }
LAB_004012f4:
  ___mingw_winmain_nShowCmd = 10;
  ___mingw_winmain_hInstance = 0x400000;
  if ((local_98[60] & 1) != 0) {
    ___mingw_winmain_nShowCmd = (uint)local_58;
  }
  goto LAB_0040131f;
}



void mainCRTStartup(undefined8 param_1,undefined8 param_2,ulonglong param_3,PDWORD param_4)

{
  mingw_app_type = 0;
  __security_init_cookie();
  __tmainCRTStartup(param_1,param_2,param_3,param_4);
  return;
}



int main(int _Argc,char **_Argv,char **_Env)

{
  undefined8 uVar1;
  
  __main();
  uVar1 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(&_ZSt4cerr_exref,"Hello, World!");
  _ZNSolsEPFRSoS_E(uVar1,&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_);
  return 0;
}



void _Z41__static_initialization_and_destruction_0ii(int param_1,int param_2)

{
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    _ZNSt8ios_base4InitC1Ev(&_ZStL8__ioinit);
    atexit(&__tcf_0);
  }
  return;
}



void _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(void)

{
                    // WARNING: Could not recover jumptable at 0x004015a8. Too many branches
                    // WARNING: Treating indirect jump as call
  _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc();
  return;
}



void _ZNSolsEPFRSoS_E(void)

{
                    // WARNING: Could not recover jumptable at 0x004015b0. Too many branches
                    // WARNING: Treating indirect jump as call
  _ZNSolsEPFRSoS_E();
  return;
}



void _ZNSt8ios_base4InitD1Ev(void)

{
                    // WARNING: Could not recover jumptable at 0x004015b8. Too many branches
                    // WARNING: Treating indirect jump as call
  _ZNSt8ios_base4InitD1Ev();
  return;
}



void _ZNSt8ios_base4InitC1Ev(void)

{
                    // WARNING: Could not recover jumptable at 0x004015c0. Too many branches
                    // WARNING: Treating indirect jump as call
  _ZNSt8ios_base4InitC1Ev();
  return;
}



undefined8 __dyn_tls_dtor(undefined8 param_1,int param_2)

{
  if ((param_2 != 0) && (param_2 != 3)) {
    return 1;
  }
  __mingw_TLScallback(param_1,param_2);
  return 1;
}



// WARNING: Removing unreachable block (ram,0x00401643)
// WARNING: Removing unreachable block (ram,0x0040164b)
// WARNING: Removing unreachable block (ram,0x0040164d)
// WARNING: Removing unreachable block (ram,0x00401656)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 __dyn_tls_init(undefined8 param_1,int param_2)

{
  if (__CRT_MT != 2) {
    __CRT_MT = 2;
  }
  if ((param_2 != 2) && (param_2 == 1)) {
    __mingw_TLScallback(param_1,1);
  }
  return 1;
}



undefined8 _decode_pointer(undefined8 param_1)

{
  return param_1;
}



undefined8 _encode_pointer(undefined8 param_1)

{
  return param_1;
}



_onexit_t mingw_onexit(_onexit_t param_1)

{
  _onexit_t p_Var1;
  longlong local_18;
  undefined8 local_10;
  
  local_18 = _decode_pointer(__onexitbegin);
  if (local_18 != -1) {
    _lock(8);
    local_18 = _decode_pointer(__onexitbegin);
    local_10 = _decode_pointer(__onexitend);
    p_Var1 = (_onexit_t)__dllonexit(param_1,&local_18,&local_10);
    __onexitbegin = _encode_pointer(local_18);
    __onexitend = _encode_pointer(local_10);
    _unlock(8);
    return p_Var1;
  }
  p_Var1 = _onexit(param_1);
  return p_Var1;
}



int atexit(void *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = mingw_onexit((_onexit_t)param_1);
  return (int)-(uint)(p_Var1 == (_onexit_t)0x0);
}



int __mingw_init_ehandler(void)

{
  int iVar1;
  int iVar2;
  DWORD64 BaseAddress;
  IMAGE_SECTION_HEADER *pIVar3;
  longlong lVar4;
  DWORD EntryCount;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  BaseAddress = _GetPEImageBase();
  iVar2 = was_here_61446;
  if ((BaseAddress != 0) && (was_here_61446 == 0)) {
    was_here_61446 = 1;
    pIVar3 = _FindPESectionByName(".pdata");
    iVar2 = 1;
    if (pIVar3 == (IMAGE_SECTION_HEADER *)0x0) {
      puVar5 = &emu_pdata;
      puVar6 = &emu_pdata;
      for (lVar4 = 0x30; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      puVar6 = &emu_xdata;
      for (lVar4 = 0x20; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      lVar4 = 0;
      do {
        pIVar3 = _FindPESectionExec(lVar4);
        EntryCount = (DWORD)lVar4;
        if (pIVar3 == (IMAGE_SECTION_HEADER *)0x0) {
          if (lVar4 == 0) {
            return 1;
          }
          goto LAB_00401a05;
        }
        *(undefined *)(&emu_xdata + lVar4) = 9;
        *(int *)((longlong)&emu_xdata + lVar4 * 8 + 4) = 0x401780 - (int)BaseAddress;
        iVar2 = pIVar3->VirtualAddress;
        *(int *)puVar5 = iVar2;
        iVar1 = pIVar3->Misc;
        lVar4 = lVar4 + 1;
        *(DWORD *)(puVar5 + 1) = (EntryCount * 8 + 0x407240) - (int)BaseAddress;
        *(int *)((longlong)puVar5 + 4) = iVar2 + iVar1;
        puVar5 = (undefined8 *)((longlong)puVar5 + 0xc);
      } while (lVar4 != 0x20);
      EntryCount = 0x20;
LAB_00401a05:
      RtlAddFunctionTable((PRUNTIME_FUNCTION)&emu_pdata,EntryCount,BaseAddress);
      iVar2 = 1;
    }
  }
  return iVar2;
}



void __mingw_raise_matherr
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined param_9,undefined param_10,undefined8 param_11)

{
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (stUserMathErr != (code *)0x0) {
    local_18 = param_11;
    local_38[0] = param_5;
    local_30 = param_6;
    local_28 = param_3;
    local_20 = param_4;
    (*stUserMathErr)(local_38);
  }
  return;
}



void __mingw_setusermatherr(undefined8 param_1)

{
  stUserMathErr = param_1;
                    // WARNING: Could not recover jumptable at 0x00402bf0. Too many branches
                    // WARNING: Treating indirect jump as call
  __setusermatherr();
  return;
}



int _setargv(void)

{
  return 0;
}



void __report_error(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FILE *pFVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  pFVar1 = __iob_func();
  fwrite("Mingw-w64 runtime failure:\n",1,0x1b,pFVar1 + 2);
  pFVar1 = __iob_func();
  vfprintf(pFVar1 + 2,param_1,(va_list)&local_res10);
                    // WARNING: Subroutine does not return
  abort();
}



void __write_memory(void *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  longlong lVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  SIZE_T SVar3;
  size_t sVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  _MEMORY_BASIC_INFORMATION local_68;
  
  if (param_3 == 0) {
    return;
  }
  sVar4 = param_3;
  if (maxSections < 1) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    lVar1 = the_secs;
    do {
      if ((*(void **)(lVar1 + 8) <= param_1) &&
         (sVar4 = (size_t)*(uint *)(*(longlong *)(lVar1 + 0x10) + 8),
         param_1 < (void *)((longlong)*(void **)(lVar1 + 8) + sVar4))) goto LAB_00401ee0;
      iVar5 = iVar5 + 1;
      lVar1 = lVar1 + 0x18;
    } while (iVar5 != maxSections);
  }
  p_Var2 = __mingw_GetSectionForAddress((longlong)param_1);
  if (p_Var2 == (PIMAGE_SECTION_HEADER)0x0) {
                    // WARNING: Subroutine does not return
    __report_error("Address %p has no image-section",param_1,sVar4,param_4);
  }
  lVar6 = (longlong)iVar5 * 0x18;
  puVar7 = (undefined4 *)(lVar6 + the_secs);
  *(PIMAGE_SECTION_HEADER *)(puVar7 + 4) = p_Var2;
  *puVar7 = 0;
  lVar1 = _GetPEImageBase();
  *(ulonglong *)(puVar7 + 2) = lVar1 + (ulonglong)p_Var2->VirtualAddress;
  SVar3 = VirtualQuery(*(LPCVOID *)(the_secs + 8 + lVar6),(PMEMORY_BASIC_INFORMATION)&local_68,0x30)
  ;
  if (SVar3 == 0) {
                    // WARNING: Subroutine does not return
    __report_error("  VirtualQuery failed for %d bytes at address %p",(ulonglong)(uint)p_Var2->Misc,
                   *(undefined8 *)(the_secs + 8 + lVar6),param_4);
  }
  if ((local_68.Protect != 4) && (local_68.Protect != 0x40)) {
    VirtualProtect(local_68.BaseAddress,local_68.RegionSize,0x40,(PDWORD)(the_secs + lVar6));
  }
  maxSections = maxSections + 1;
LAB_00401ee0:
  memcpy(param_1,param_2,param_3);
  return;
}



// WARNING: Removing unreachable block (ram,0x004020c4)
// WARNING: Removing unreachable block (ram,0x004020d0)
// WARNING: Removing unreachable block (ram,0x004020dc)
// WARNING: Removing unreachable block (ram,0x00402001)
// WARNING: Removing unreachable block (ram,0x0040200a)
// WARNING: Removing unreachable block (ram,0x00402011)
// WARNING: Removing unreachable block (ram,0x00402257)

void _pei386_runtime_relocator
               (undefined8 param_1,undefined8 param_2,ulonglong param_3,PDWORD param_4)

{
  DWORD flNewProtect;
  uint uVar1;
  LPCVOID lpAddress;
  undefined8 uVar2;
  longlong lVar3;
  LPVOID lpAddress_00;
  SIZE_T dwSize;
  uint uVar4;
  ulonglong uVar5;
  SIZE_T SVar6;
  longlong *plVar7;
  PDWORD *ppDVar8;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  PDWORD lpflOldProtect;
  undefined8 auStack144 [5];
  _MEMORY_BASIC_INFORMATION local_68;
  PDWORD local_38;
  DWORD local_2c;
  
  if (was_init_61499 == 0) {
    was_init_61499 = 1;
    auStack144[0] = 0x401f93;
    __mingw_GetSectionCount();
    auStack144[0] = 0x401faa;
    uVar5 = ___chkstk_ms();
    maxSections = 0;
    lVar3 = -uVar5;
    the_secs = (longlong)&local_68 + lVar3;
    puVar10 = &DAT_00404294;
    do {
      uVar1 = puVar10[2];
      uVar4 = uVar1 & 0xff;
      ppDVar8 = (PDWORD *)((ulonglong)*puVar10 + 0x400000);
      plVar7 = (longlong *)((ulonglong)puVar10[1] + 0x400000);
      lpflOldProtect = *ppDVar8;
      if (uVar4 == 0x10) {
        uVar5 = (ulonglong)*(ushort *)plVar7;
        if ((*(ushort *)plVar7 & 0x8000) == 0) {
LAB_004021b5:
          lpflOldProtect = (PDWORD)((longlong)lpflOldProtect + (uVar5 - (longlong)ppDVar8));
          local_38 = lpflOldProtect;
          if (uVar4 != 0x10) {
            if (uVar4 < 0x11) {
              if (uVar4 == 8) goto LAB_004021cb;
            }
            else {
              if (uVar4 == 0x20) goto LAB_004021f5;
              if (uVar4 == 0x40) goto LAB_00402169;
            }
            goto LAB_00402178;
          }
        }
        else {
          local_38 = (PDWORD)(((uVar5 | 0xffffffffffff0000) - (longlong)ppDVar8) +
                             (longlong)lpflOldProtect);
        }
        *(undefined8 *)((longlong)auStack144 + lVar3) = 0x4021b3;
        __write_memory(plVar7,&local_38,2,lpflOldProtect);
      }
      else {
        if (uVar4 < 0x11) {
          if (uVar4 != 8) {
LAB_00402139:
            local_38 = (PDWORD)0x0;
                    // WARNING: Subroutine does not return
            *(undefined8 *)((longlong)auStack144 + lVar3) = 0x402151;
            __report_error("  Unknown pseudo relocation bit size %d.\n",(ulonglong)(uVar1 & 0xff),
                           (ulonglong)uVar1,lpflOldProtect);
          }
          uVar5 = (ulonglong)*(byte *)plVar7;
          if ((*(byte *)plVar7 & 0x80) == 0) goto LAB_004021b5;
          local_38 = (PDWORD)(((uVar5 | 0xffffffffffffff00) - (longlong)ppDVar8) +
                             (longlong)lpflOldProtect);
LAB_004021cb:
          *(undefined8 *)((longlong)auStack144 + lVar3) = 0x4021da;
          __write_memory(plVar7,&local_38,1,lpflOldProtect);
        }
        else {
          if (uVar4 == 0x20) {
            uVar5 = (ulonglong)*(uint *)plVar7;
            if ((*(uint *)plVar7 & 0x80000000) == 0) goto LAB_004021b5;
            local_38 = (PDWORD)(((uVar5 | 0xffffffff00000000) - (longlong)ppDVar8) +
                               (longlong)lpflOldProtect);
LAB_004021f5:
            *(undefined8 *)((longlong)auStack144 + lVar3) = 0x402204;
            __write_memory(plVar7,&local_38,4,lpflOldProtect);
          }
          else {
            if (uVar4 != 0x40) goto LAB_00402139;
            lpflOldProtect = (PDWORD)((longlong)lpflOldProtect + (*plVar7 - (longlong)ppDVar8));
            local_38 = lpflOldProtect;
LAB_00402169:
            local_38 = lpflOldProtect;
            *(undefined8 *)((longlong)auStack144 + lVar3) = 0x402178;
            __write_memory(plVar7,&local_38,8,lpflOldProtect);
          }
        }
      }
LAB_00402178:
      puVar10 = puVar10 + 3;
    } while (puVar10 < &__rt_psrelocs_end);
    if (0 < maxSections) {
      lVar9 = 0;
      iVar11 = 0;
      do {
        if (*(int *)(lVar9 + the_secs) != 0) {
          lpAddress = *(LPCVOID *)((int *)(lVar9 + the_secs) + 2);
          *(undefined8 *)((longlong)auStack144 + lVar3) = 0x402094;
          SVar6 = VirtualQuery(lpAddress,(PMEMORY_BASIC_INFORMATION)&local_68,0x30);
          dwSize = local_68.RegionSize;
          lpAddress_00 = local_68.BaseAddress;
          if (SVar6 == 0) {
            uVar2 = *(undefined8 *)(lVar9 + the_secs + 8);
            uVar1 = *(uint *)(*(longlong *)(lVar9 + the_secs + 0x10) + 8);
                    // WARNING: Subroutine does not return
            *(undefined8 *)((longlong)auStack144 + lVar3) = 0x402257;
            __report_error("  VirtualQuery failed for %d bytes at address %p",(ulonglong)uVar1,uVar2
                           ,lpflOldProtect);
          }
          lpflOldProtect = &local_2c;
          flNewProtect = *(DWORD *)(the_secs + lVar9);
          *(undefined8 *)((longlong)auStack144 + lVar3) = 0x4020b6;
          VirtualProtect(lpAddress_00,dwSize,flNewProtect,lpflOldProtect);
        }
        iVar11 = iVar11 + 1;
        lVar9 = lVar9 + 0x18;
      } while (iVar11 < maxSections);
    }
  }
  return;
}



BOOL _ValidateImageBase(PBYTE pImageBase)

{
  if ((*(short *)pImageBase == 0x5a4d) &&
     (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550)) {
    return (BOOL)(uint)(*(short *)((longlong)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) ==
                       0x20b);
  }
  return 0;
}



PIMAGE_SECTION_HEADER _FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  PIMAGE_SECTION_HEADER p_Var1;
  PIMAGE_SECTION_HEADER p_Var2;
  PBYTE pBVar3;
  
  pBVar3 = pImageBase + *(int *)(pImageBase + 0x3c);
  if (*(ushort *)(pBVar3 + 6) != 0) {
    p_Var2 = (PIMAGE_SECTION_HEADER)(pBVar3 + (ulonglong)*(ushort *)(pBVar3 + 0x14) + 0x18);
    p_Var1 = p_Var2 + (ulonglong)(*(ushort *)(pBVar3 + 6) - 1) + 1;
    do {
      if ((p_Var2->VirtualAddress <= rva) && (rva < p_Var2->VirtualAddress + p_Var2->Misc)) {
        return p_Var2;
      }
      p_Var2 = p_Var2 + 1;
    } while (p_Var2 != p_Var1);
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}



IMAGE_SECTION_HEADER * _FindPESectionByName(char *param_1)

{
  BOOL BVar1;
  int iVar2;
  size_t sVar3;
  IMAGE_SECTION_HEADER *_Str1;
  
  _Str1 = (IMAGE_SECTION_HEADER *)0x0;
  sVar3 = strlen(param_1);
  if ((sVar3 < 9) && (BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000), BVar1 != 0)) {
    _Str1 = &IMAGE_SECTION_HEADER_00400188;
    while (iVar2 = strncmp(_Str1->Name,param_1,8), iVar2 != 0) {
      _Str1 = _Str1 + 1;
      if (_Str1 == (IMAGE_SECTION_HEADER *)&DAT_00400430) {
        return (IMAGE_SECTION_HEADER *)0x0;
      }
    }
  }
  return _Str1;
}



PIMAGE_SECTION_HEADER __mingw_GetSectionForAddress(longlong param_1)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000);
  if (BVar1 != 0) {
    p_Var2 = _FindPESection((PBYTE)&IMAGE_DOS_HEADER_00400000,param_1 - 0x400000);
    return p_Var2;
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}



undefined8 __mingw_GetSectionCount(void)

{
  BOOL BVar1;
  undefined8 uVar2;
  
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000);
  uVar2 = 0;
  if (BVar1 != 0) {
    uVar2 = 0x11;
  }
  return uVar2;
}



IMAGE_SECTION_HEADER * _FindPESectionExec(longlong param_1)

{
  BOOL BVar1;
  IMAGE_SECTION_HEADER *pIVar2;
  
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000);
  if (BVar1 != 0) {
    pIVar2 = &IMAGE_SECTION_HEADER_00400188;
    do {
      if ((*(byte *)((longlong)&pIVar2->Characteristics + 3) & 0x20) != 0) {
        if (param_1 == 0) {
          return pIVar2;
        }
        param_1 = param_1 + -1;
      }
      pIVar2 = pIVar2 + 1;
    } while (pIVar2 != (IMAGE_SECTION_HEADER *)&DAT_00400430);
  }
  return (IMAGE_SECTION_HEADER *)0x0;
}



undefined8 _GetPEImageBase(void)

{
  BOOL BVar1;
  undefined8 uVar2;
  
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000);
  uVar2 = 0;
  if (BVar1 != 0) {
    uVar2 = 0x400000;
  }
  return uVar2;
}



// WARNING: Removing unreachable block (ram,0x0040254a)

longlong __mingw_enum_import_library_names(int param_1)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  longlong lVar3;
  dword *pdVar4;
  
  lVar3 = 0;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000);
  if ((BVar1 != 0) &&
     (p_Var2 = _FindPESection((PBYTE)&IMAGE_DOS_HEADER_00400000,0x8000),
     p_Var2 != (PIMAGE_SECTION_HEADER)0x0)) {
    pdVar4 = &DWORD_00408000;
    while( true ) {
      if ((pdVar4[1] == 0) && (pdVar4[3] == 0)) {
        return 0;
      }
      if (param_1 < 1) break;
      param_1 = param_1 + -1;
      pdVar4 = pdVar4 + 5;
    }
    lVar3 = (ulonglong)pdVar4[3] + 0x400000;
  }
  return lVar3;
}



void __mingw_get_msvcrt_handle(void)

{
  char cVar1;
  LPCSTR lpModuleName;
  int iVar2;
  int iVar3;
  
  if (msvcrt_handle_60749 == (HMODULE)0x0) {
    iVar2 = 0;
    do {
      iVar3 = iVar2 + 1;
      lpModuleName = (LPCSTR)__mingw_enum_import_library_names(iVar2);
      if (lpModuleName == (LPCSTR)0x0) goto LAB_00402640;
      iVar2 = iVar3;
    } while ((((*lpModuleName != 'M') && (*lpModuleName != 'm')) ||
             ((lpModuleName[1] != 'S' && (lpModuleName[1] != 's')))) ||
            ((((lpModuleName[2] != 'V' && (lpModuleName[2] != 'v')) ||
              ((lpModuleName[3] != 'C' && (lpModuleName[3] != 'c')))) ||
             (((lpModuleName[4] != 'R' && (lpModuleName[4] != 'r')) ||
              ((cVar1 = lpModuleName[5], cVar1 != 'T' &&
               ((cVar1 != 't' && (9 < (byte)(cVar1 - 0x30U)))))))))));
    msvcrt_handle_60749 = GetModuleHandleA(lpModuleName);
    if (msvcrt_handle_60749 == (HMODULE)0x0) {
LAB_00402640:
      msvcrt_handle_60749 = LoadLibraryW(L"msvcrt.dll");
    }
  }
  return;
}



void fpreset(void)

{
  return;
}



void __do_global_dtors(void)

{
  code *pcVar1;
  
  pcVar1 = *(code **)p_60671;
  while (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    pcVar1 = *(code **)(p_60671 + 8);
    p_60671 = p_60671 + 8;
  }
  return;
}



void __main(void)

{
  uint uVar1;
  uint uVar2;
  
  if (initialized != 0) {
    return;
  }
  initialized = 1;
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 + 1;
  } while ((&___CTOR_LIST__)[uVar2 + 1] != 0);
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    (*(code *)(&___CTOR_LIST__)[uVar2])();
  }
  atexit(__do_global_dtors);
  return;
}



void __security_init_cookie(void)

{
  _FILETIME _Var1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD DVar4;
  _FILETIME local_48 [2];
  ulonglong local_38 [2];
  
  local_48[0] = (_FILETIME)0x0;
  if (__security_cookie != 0x2b992ddfa232) {
    __security_cookie_complement = ~__security_cookie;
    return;
  }
  GetSystemTimeAsFileTime((LPFILETIME)local_48);
  _Var1 = local_48[0];
  DVar2 = GetCurrentProcessId();
  DVar3 = GetCurrentThreadId();
  DVar4 = GetTickCount();
  QueryPerformanceCounter(local_38);
  __security_cookie =
       ((ulonglong)_Var1 ^ local_38[0] ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) &
       0xffffffffffff;
  __security_cookie_complement = ~__security_cookie;
  if (__security_cookie == 0x2b992ddfa232) {
    __security_cookie_complement = 0xffffd466d2205dcc;
    __security_cookie = 0x2b992ddfa233;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __report_gsfailure(void)

{
  DWORD64 ControlPc;
  undefined *puVar1;
  PRUNTIME_FUNCTION FunctionEntry;
  HANDLE hProcess;
  undefined8 in_RCX;
  DWORD64 in_stack_00000000;
  DWORD64 local_30;
  ulonglong local_28;
  PVOID local_20;
  
  RtlCaptureContext(&GS_ContextRecord);
  ControlPc = DAT_00407498;
  FunctionEntry = RtlLookupFunctionEntry(DAT_00407498,&local_30,(PUNWIND_HISTORY_TABLE)0x0);
  puVar1 = (undefined *)register0x00000020;
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_30,ControlPc,FunctionEntry,(PCONTEXT)&GS_ContextRecord,&local_20,
                     &local_28,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    puVar1 = _DAT_00407438;
    in_stack_00000000 = DAT_00407498;
  }
  DAT_00407498 = in_stack_00000000;
  _DAT_00407438 = puVar1;
  _GS_ExceptionRecord = 0xc0000409;
  _DAT_00407884 = 1;
  _DAT_00407890 = DAT_00407498;
  _DAT_00407420 = in_RCX;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&GS_ExceptionPointers);
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
                    // WARNING: Subroutine does not return
  abort();
}



void __mingwthr_run_key_dtors_part_0(void)

{
  DWORD *pDVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&__mingwthr_cs);
  for (pDVar1 = key_dtor_list; pDVar1 != (DWORD *)0x0; pDVar1 = *(DWORD **)(pDVar1 + 4)) {
    pvVar3 = TlsGetValue(*pDVar1);
    DVar2 = GetLastError();
    if ((DVar2 == 0) && (pvVar3 != (LPVOID)0x0)) {
      (**(code **)(pDVar1 + 2))();
    }
  }
                    // WARNING: Could not recover jumptable at 0x0040296a. Too many branches
                    // WARNING: Treating indirect jump as call
  LeaveCriticalSection((LPCRITICAL_SECTION)&__mingwthr_cs);
  return;
}



undefined8 __mingw_TLScallback(undefined8 param_1,int param_2)

{
  if (param_2 != 1) {
    if (param_2 == 0) {
      if (__mingwthr_cs_init != 0) {
        __mingwthr_run_key_dtors_part_0();
      }
      if (__mingwthr_cs_init == 1) {
        __mingwthr_cs_init = 0;
        DeleteCriticalSection((LPCRITICAL_SECTION)&__mingwthr_cs);
      }
    }
    else {
      if ((param_2 == 3) && (__mingwthr_cs_init != 0)) {
        __mingwthr_run_key_dtors_part_0();
      }
    }
    return 1;
  }
  if (__mingwthr_cs_init == 0) {
    InitializeCriticalSection((LPCRITICAL_SECTION)&__mingwthr_cs);
  }
  __mingwthr_cs_init = 1;
  return 1;
}



ulonglong ___chkstk_ms(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 local_res8 [4];
  ulonglong uStack16;
  
  puVar2 = local_res8;
  uVar1 = in_RAX;
  if (0xfff < in_RAX) {
    do {
      puVar2 = puVar2 + -0x200;
      *puVar2 = *puVar2;
      uVar1 = uVar1 - 0x1000;
    } while (0x1000 < uVar1);
  }
  uStack16 = in_RAX;
  *(undefined8 *)((longlong)puVar2 - uVar1) = *(undefined8 *)((longlong)puVar2 - uVar1);
  return uStack16;
}



void __getmainargs(void)

{
                    // WARNING: Could not recover jumptable at 0x00402b78. Too many branches
                    // WARNING: Treating indirect jump as call
  __getmainargs();
  return;
}



void __set_app_type(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00402b80. Too many branches
                    // WARNING: Treating indirect jump as call
  __set_app_type(param_1);
  return;
}



void * memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402b88. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



void * malloc(size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402b90. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = malloc(_Size);
  return pvVar1;
}



size_t strlen(char *_Str)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402b98. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = strlen(_Str);
  return sVar1;
}



void _cexit(void)

{
                    // WARNING: Could not recover jumptable at 0x00402ba0. Too many branches
                    // WARNING: Treating indirect jump as call
  _cexit();
  return;
}



void _amsg_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00402ba8. Too many branches
                    // WARNING: Treating indirect jump as call
  _amsg_exit(param_1);
  return;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x00402bb0. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x00402bb8. Too many branches
                    // WARNING: Treating indirect jump as call
  exit();
  return;
}



_onexit_t _onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
                    // WARNING: Could not recover jumptable at 0x00402bc8. Too many branches
                    // WARNING: Treating indirect jump as call
  p_Var1 = _onexit(_Func);
  return p_Var1;
}



void _lock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x00402bd0. Too many branches
                    // WARNING: Treating indirect jump as call
  _lock(_File);
  return;
}



void __dllonexit(void)

{
                    // WARNING: Could not recover jumptable at 0x00402bd8. Too many branches
                    // WARNING: Treating indirect jump as call
  __dllonexit();
  return;
}



void _unlock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x00402be0. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock(_File);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void signal(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00402be8. Too many branches
                    // WARNING: Treating indirect jump as call
  signal(param_1);
  return;
}



FILE * __iob_func(void)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402bf8. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = __iob_func();
  return pFVar1;
}



int fprintf(FILE *_File,char *_Format,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402c00. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = fprintf(_File,_Format);
  return iVar1;
}



size_t fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402c08. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = fwrite(_Str,_Size,_Count,_File);
  return sVar1;
}



int vfprintf(FILE *_File,char *_Format,va_list _ArgList)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402c10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = vfprintf(_File,_Format,_ArgList);
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void abort(void)

{
                    // WARNING: Could not recover jumptable at 0x00402c18. Too many branches
                    // WARNING: Treating indirect jump as call
  abort();
  return;
}



int strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402c20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = strncmp(_Str1,_Str2,_MaxCount);
  return iVar1;
}



void * calloc(size_t _Count,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402c28. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = calloc(_Count,_Size);
  return pvVar1;
}



void free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x00402c30. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}



void Sleep(DWORD dwMilliseconds)

{
                    // WARNING: Could not recover jumptable at 0x00402c40. Too many branches
                    // WARNING: Treating indirect jump as call
  Sleep(dwMilliseconds);
  return;
}



LPTOP_LEVEL_EXCEPTION_FILTER
SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)

{
  LPTOP_LEVEL_EXCEPTION_FILTER pPVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402c48. Too many branches
                    // WARNING: Treating indirect jump as call
  pPVar1 = SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
  return pPVar1;
}



FARPROC GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402c50. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}



void GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo)

{
                    // WARNING: Could not recover jumptable at 0x00402c58. Too many branches
                    // WARNING: Treating indirect jump as call
  GetStartupInfoA(lpStartupInfo);
  return;
}



BOOLEAN RtlAddFunctionTable(PRUNTIME_FUNCTION FunctionTable,DWORD EntryCount,DWORD64 BaseAddress)

{
  BOOLEAN BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402c60. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = RtlAddFunctionTable(FunctionTable,EntryCount,BaseAddress);
  return BVar1;
}



SIZE_T VirtualQuery(LPCVOID lpAddress,PMEMORY_BASIC_INFORMATION lpBuffer,SIZE_T dwLength)

{
  SIZE_T SVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402c68. Too many branches
                    // WARNING: Treating indirect jump as call
  SVar1 = VirtualQuery(lpAddress,lpBuffer,dwLength);
  return SVar1;
}



BOOL VirtualProtect(LPVOID lpAddress,SIZE_T dwSize,DWORD flNewProtect,PDWORD lpflOldProtect)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402c70. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = VirtualProtect(lpAddress,dwSize,flNewProtect,lpflOldProtect);
  return BVar1;
}



HMODULE GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402c78. Too many branches
                    // WARNING: Treating indirect jump as call
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}



HMODULE LoadLibraryW(LPCWSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402c80. Too many branches
                    // WARNING: Treating indirect jump as call
  pHVar1 = LoadLibraryW(lpLibFileName);
  return pHVar1;
}



void GetSystemTimeAsFileTime(LPFILETIME lpSystemTimeAsFileTime)

{
                    // WARNING: Could not recover jumptable at 0x00402c88. Too many branches
                    // WARNING: Treating indirect jump as call
  GetSystemTimeAsFileTime(lpSystemTimeAsFileTime);
  return;
}



DWORD GetCurrentProcessId(void)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402c90. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetCurrentProcessId();
  return DVar1;
}



DWORD GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402c98. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetCurrentThreadId();
  return DVar1;
}



DWORD GetTickCount(void)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402ca0. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetTickCount();
  return DVar1;
}



BOOL QueryPerformanceCounter(LARGE_INTEGER *lpPerformanceCount)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402ca8. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = QueryPerformanceCounter(lpPerformanceCount);
  return BVar1;
}



PRUNTIME_FUNCTION
RtlLookupFunctionEntry(DWORD64 ControlPc,PDWORD64 ImageBase,PUNWIND_HISTORY_TABLE HistoryTable)

{
  PRUNTIME_FUNCTION p_Var1;
  
                    // WARNING: Could not recover jumptable at 0x00402cb8. Too many branches
                    // WARNING: Treating indirect jump as call
  p_Var1 = RtlLookupFunctionEntry(ControlPc,ImageBase,HistoryTable);
  return p_Var1;
}



PEXCEPTION_ROUTINE
RtlVirtualUnwind(DWORD HandlerType,DWORD64 ImageBase,DWORD64 ControlPc,
                PRUNTIME_FUNCTION FunctionEntry,PCONTEXT ContextRecord,PVOID *HandlerData,
                PDWORD64 EstablisherFrame,PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)

{
  PEXCEPTION_ROUTINE puVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402cc0. Too many branches
                    // WARNING: Treating indirect jump as call
  puVar1 = RtlVirtualUnwind(HandlerType,ImageBase,ControlPc,FunctionEntry,ContextRecord,HandlerData,
                            EstablisherFrame,ContextPointers);
  return puVar1;
}



LONG UnhandledExceptionFilter(_EXCEPTION_POINTERS *ExceptionInfo)

{
  LONG LVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402cc8. Too many branches
                    // WARNING: Treating indirect jump as call
  LVar1 = UnhandledExceptionFilter(ExceptionInfo);
  return LVar1;
}



HANDLE GetCurrentProcess(void)

{
  HANDLE pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402cd0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = GetCurrentProcess();
  return pvVar1;
}



BOOL TerminateProcess(HANDLE hProcess,UINT uExitCode)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402cd8. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = TerminateProcess(hProcess,uExitCode);
  return BVar1;
}



void EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    // WARNING: Could not recover jumptable at 0x00402ce0. Too many branches
                    // WARNING: Treating indirect jump as call
  EnterCriticalSection(lpCriticalSection);
  return;
}



LPVOID TlsGetValue(DWORD dwTlsIndex)

{
  LPVOID pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402ce8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = TlsGetValue(dwTlsIndex);
  return pvVar1;
}



DWORD GetLastError(void)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402cf0. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetLastError();
  return DVar1;
}



void LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    // WARNING: Could not recover jumptable at 0x00402cf8. Too many branches
                    // WARNING: Treating indirect jump as call
  LeaveCriticalSection(lpCriticalSection);
  return;
}



void DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    // WARNING: Could not recover jumptable at 0x00402d00. Too many branches
                    // WARNING: Treating indirect jump as call
  DeleteCriticalSection(lpCriticalSection);
  return;
}



void InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    // WARNING: Could not recover jumptable at 0x00402d08. Too many branches
                    // WARNING: Treating indirect jump as call
  InitializeCriticalSection(lpCriticalSection);
  return;
}


