typedef unsigned char   undefined;

typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
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
typedef unsigned short    wchar16;
typedef struct _cpinfo _cpinfo, *P_cpinfo;

typedef uint UINT;

typedef uchar BYTE;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef struct _cpinfo * LPCPINFO;

typedef ulong DWORD;

typedef DWORD LCTYPE;

typedef struct _SYSTEM_INFO _SYSTEM_INFO, *P_SYSTEM_INFO;

typedef struct _SYSTEM_INFO * LPSYSTEM_INFO;

typedef union _union_530 _union_530, *P_union_530;

typedef void * LPVOID;

typedef ulong ULONG_PTR;

typedef ULONG_PTR DWORD_PTR;

typedef ushort WORD;

typedef struct _struct_531 _struct_531, *P_struct_531;

struct _struct_531 {
    WORD wProcessorArchitecture;
    WORD wReserved;
};

union _union_530 {
    DWORD dwOemId;
    struct _struct_531 s;
};

struct _SYSTEM_INFO {
    union _union_530 u;
    DWORD dwPageSize;
    LPVOID lpMinimumApplicationAddress;
    LPVOID lpMaximumApplicationAddress;
    DWORD_PTR dwActiveProcessorMask;
    DWORD dwNumberOfProcessors;
    DWORD dwProcessorType;
    DWORD dwAllocationGranularity;
    WORD wProcessorLevel;
    WORD wProcessorRevision;
};

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef char CHAR;

typedef CHAR * LPSTR;

typedef BYTE * LPBYTE;

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

typedef struct _STARTUPINFOA * LPSTARTUPINFOA;

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef union _union_518 _union_518, *P_union_518;

typedef struct _struct_519 _struct_519, *P_struct_519;

typedef void * PVOID;

struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_518 {
    struct _struct_519 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _OVERLAPPED * LPOVERLAPPED;

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

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

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

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD * PEXCEPTION_RECORD;

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD * ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

typedef wchar_t WCHAR;

typedef CHAR * LPCSTR;

typedef struct _MEMORY_BASIC_INFORMATION * PMEMORY_BASIC_INFORMATION;

typedef long LONG;

typedef LONG * PLONG;

typedef CHAR * LPCH;

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

typedef struct _OSVERSIONINFOA _OSVERSIONINFOA, *P_OSVERSIONINFOA;

struct _OSVERSIONINFOA {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    CHAR szCSDVersion[128];
};

typedef struct _OSVERSIONINFOA * LPOSVERSIONINFOA;

typedef WCHAR * LPWSTR;

typedef CONTEXT * PCONTEXT;

typedef WCHAR * LPWCH;

typedef WCHAR * LPCWSTR;

typedef DWORD LCID;

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

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct _strflt _strflt, *P_strflt;

struct _strflt {
    int sign;
    int decpt;
    int flag;
    char * mantissa;
};

typedef enum enum_3272 {
    INTRNCVT_OK=0,
    INTRNCVT_OVERFLOW=1,
    INTRNCVT_UNDERFLOW=2
} enum_3272;

typedef enum enum_3272 INTRNCVT_STATUS;

typedef struct _strflt * STRFLT;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME * LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef int (* FARPROC)(void);

typedef WORD * LPWORD;

typedef DWORD * LPDWORD;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef DWORD * PDWORD;

typedef int BOOL;

typedef BOOL * LPBOOL;

typedef struct HINSTANCE__ * HINSTANCE;

typedef void * LPCVOID;

typedef HINSTANCE HMODULE;

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

typedef struct _LDBL12 _LDBL12, *P_LDBL12;

struct _LDBL12 {
    uchar ld12[12];
};

typedef struct _CRT_FLOAT _CRT_FLOAT, *P_CRT_FLOAT;

struct _CRT_FLOAT {
    float f;
};

typedef struct _CRT_DOUBLE _CRT_DOUBLE, *P_CRT_DOUBLE;

struct _CRT_DOUBLE {
    double x;
};

typedef int (* _onexit_t)(void);

typedef struct lconv lconv, *Plconv;

struct lconv {
    char * decimal_point;
    char * thousands_sep;
    char * grouping;
    char * int_curr_symbol;
    char * currency_symbol;
    char * mon_decimal_point;
    char * mon_thousands_sep;
    char * mon_grouping;
    char * positive_sign;
    char * negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    wchar_t * _W_decimal_point;
    wchar_t * _W_thousands_sep;
    wchar_t * _W_int_curr_symbol;
    wchar_t * _W_currency_symbol;
    wchar_t * _W_mon_decimal_point;
    wchar_t * _W_mon_thousands_sep;
    wchar_t * _W_positive_sign;
    wchar_t * _W_negative_sign;
};

typedef uint size_t;

typedef struct threadlocaleinfostruct threadlocaleinfostruct, *Pthreadlocaleinfostruct;

typedef struct threadlocaleinfostruct * pthreadlocinfo;

typedef struct localerefcount localerefcount, *Plocalerefcount;

typedef struct localerefcount locrefcount;

typedef struct __lc_time_data __lc_time_data, *P__lc_time_data;

struct localerefcount {
    char * locale;
    wchar_t * wlocale;
    int * refcount;
    int * wrefcount;
};

struct threadlocaleinfostruct {
    int refcount;
    uint lc_codepage;
    uint lc_collate_cp;
    uint lc_time_cp;
    locrefcount lc_category[6];
    int lc_clike;
    int mb_cur_max;
    int * lconv_intl_refcount;
    int * lconv_num_refcount;
    int * lconv_mon_refcount;
    struct lconv * lconv;
    int * ctype1_refcount;
    ushort * ctype1;
    ushort * pctype;
    uchar * pclmap;
    uchar * pcumap;
    struct __lc_time_data * lc_time_curr;
    wchar_t * locale_name[6];
};

struct __lc_time_data {
    char * wday_abbr[7];
    char * wday[7];
    char * month_abbr[12];
    char * month[12];
    char * ampm[2];
    char * ww_sdatefmt;
    char * ww_ldatefmt;
    char * ww_timefmt;
    int ww_caltype;
    int refcount;
    wchar_t * _W_wday_abbr[7];
    wchar_t * _W_wday[7];
    wchar_t * _W_month_abbr[12];
    wchar_t * _W_month[12];
    wchar_t * _W_ampm[2];
    wchar_t * _W_ww_sdatefmt;
    wchar_t * _W_ww_ldatefmt;
    wchar_t * _W_ww_timefmt;
    wchar_t * _W_ww_locale_name;
};

typedef int errno_t;

typedef struct localeinfo_struct localeinfo_struct, *Plocaleinfo_struct;

typedef struct threadmbcinfostruct threadmbcinfostruct, *Pthreadmbcinfostruct;

typedef struct threadmbcinfostruct * pthreadmbcinfo;

struct threadmbcinfostruct {
    int refcount;
    int mbcodepage;
    int ismbcodepage;
    ushort mbulinfo[6];
    uchar mbctype[257];
    uchar mbcasemap[256];
    wchar_t * mblocalename;
};

struct localeinfo_struct {
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
};

typedef int intptr_t;

typedef struct localeinfo_struct * _locale_t;




undefined4 FUN_00401000(void)

{
  float local_c;
  
  _scanf(&DAT_0040b040);
  _printf(s_a_is__f__b_is__f_0040b044,0x4014000000000000);
  if (POPCOUNT((char)((uint)(ushort)((ushort)(local_c == 5.0) << 0xe) >> 8)) != '\0') {
    _printf(s_Equal_0040b058);
  }
  if (POPCOUNT((char)((uint)(ushort)((ushort)(local_c == 5.0) << 0xe) >> 8)) == '\0') {
    _printf(s_Not_Equal_0040b060);
  }
  if ((ushort)((ushort)(5.0 < local_c) << 8 | (ushort)(local_c == 5.0) << 0xe) == 0) {
    _printf(s_Greater_0040b06c);
  }
  if (5.0 < local_c != (local_c == 5.0)) {
    _printf(s_Less_or_Equal_0040b078);
  }
  if (local_c <= 5.0) {
    _printf(s_Greater_or_Equal_0040b088);
  }
  else {
    _printf(s_Less_0040b09c);
  }
  return 0;
}



// Library Function - Single Match
//  _printf
// 
// Library: Visual Studio 2003 Release

int __cdecl _printf(char *_Format,...)

{
  int _Flag;
  int iVar1;
  
  _Flag = __stbuf((FILE *)&DAT_0040b0e8);
  iVar1 = __output((FILE *)&DAT_0040b0e8,(byte *)_Format,(int **)&stack0x00000008);
  __ftbuf(_Flag,(FILE *)&DAT_0040b0e8);
  return iVar1;
}



// Library Function - Single Match
//  _scanf
// 
// Library: Visual Studio 2003 Release

int __cdecl _scanf(char *_Format,...)

{
  int iVar1;
  
  iVar1 = __input((FILE *)&PTR_DAT_0040b0c8,(byte *)_Format,(undefined4 *)&stack0x00000008);
  return iVar1;
}



void FUN_0040112c(void)

{
  PTR_FUN_0040b348 = __cfltcvt;
  PTR_FUN_0040b34c = &LAB_00402c7b;
  PTR_FUN_0040b350 = __fassign;
  PTR_FUN_0040b354 = __forcdecpt;
  PTR_FUN_0040b358 = &LAB_00402cc6;
  PTR_FUN_0040b35c = __cfltcvt;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __fpmath
// 
// Library: Visual Studio 2003 Release

void __cdecl __fpmath(int param_1)

{
  FUN_0040112c();
  _DAT_0040ba24 = __ms_p5_mp_test_fdiv();
  if (param_1 != 0) {
    __setdefaultprecision();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __amsg_exit
// 
// Library: Visual Studio 2003 Release

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_0040ba30 != 2) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
  (*_DAT_0040b0b8)(0xff);
  return;
}



// WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog
// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int entry(void)

{
  HMODULE pHVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  undefined local_cc [148];
  
  local_cc._144_4_ = 0x4011bf;
  local_cc._0_4_ = 0x94;
  GetVersionExA((LPOSVERSIONINFOA)local_cc);
  DAT_0040ba5c = local_cc._16_4_;
  _DAT_0040ba68 = local_cc._4_4_;
  _DAT_0040ba6c = local_cc._8_4_;
  _DAT_0040ba60 = local_cc._12_4_ & 0x7fff;
  if (local_cc._16_4_ != 2) {
    _DAT_0040ba60 = _DAT_0040ba60 | 0x8000;
  }
  _DAT_0040ba64 = local_cc._4_4_ * 0x100 + local_cc._8_4_;
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  if ((*(short *)&pHVar1->unused == 0x5a4d) &&
     (piVar3 = (int *)((int)&pHVar1->unused + pHVar1[0xf].unused), *piVar3 == 0x4550)) {
    if (*(short *)(piVar3 + 6) == 0x10b) {
      if (0xe < (uint)piVar3[0x1d]) {
        iVar2 = piVar3[0x3a];
        goto LAB_00401266;
      }
    }
    else {
      if ((*(short *)(piVar3 + 6) == 0x20b) && (0xe < (uint)piVar3[0x21])) {
        iVar2 = piVar3[0x3e];
LAB_00401266:
        bVar4 = iVar2 != 0;
        goto LAB_0040126c;
      }
    }
  }
  bVar4 = false;
LAB_0040126c:
  iVar2 = __heap_init();
  if (iVar2 == 0) {
    if (DAT_0040ba30 != 2) {
      __FF_MSGBANNER();
    }
    __NMSG_WRITE(0x1c);
    FUN_0040307f(0xff);
  }
  __RTC_Initialize();
  iVar2 = __ioinit();
  if (iVar2 < 0) {
    __amsg_exit(0x1b);
  }
  DAT_0040d004 = GetCommandLineA();
  DAT_0040ba28 = ___crtGetEnvironmentStringsA();
  iVar2 = __setargv();
  if (iVar2 < 0) {
    __amsg_exit(8);
  }
  iVar2 = __setenvp();
  if (iVar2 < 0) {
    __amsg_exit(9);
  }
  iVar2 = __cinit(1);
  if (iVar2 != 0) {
    __amsg_exit(iVar2);
  }
  _DAT_0040ba80 = DAT_0040ba7c;
  iVar2 = FUN_00401000();
  if (!bVar4) {
    _exit(iVar2);
  }
  __cexit();
  return iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __stbuf
// 
// Library: Visual Studio 2003 Release

int __cdecl __stbuf(FILE *_File)

{
  char **ppcVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = __isatty(_File->_file);
  if (iVar2 == 0) {
    return 0;
  }
  if (_File == (FILE *)&DAT_0040b0e8) {
    iVar2 = 0;
  }
  else {
    if (_File != (FILE *)&DAT_0040b108) {
      return 0;
    }
    iVar2 = 1;
  }
  _DAT_0040ba3c = _DAT_0040ba3c + 1;
  if ((*(ushort *)&_File->_flag & 0x10c) != 0) {
    return 0;
  }
  ppcVar1 = (char **)(&DAT_0040ba34 + iVar2);
  if (*ppcVar1 == (char *)0x0) {
    pcVar3 = (char *)_malloc(0x1000);
    *ppcVar1 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      _File->_base = (char *)&_File->_charbuf;
      _File->_ptr = (char *)&_File->_charbuf;
      _File->_bufsiz = 2;
      _File->_cnt = 2;
      goto LAB_004013e5;
    }
  }
  pcVar3 = *ppcVar1;
  _File->_base = pcVar3;
  _File->_ptr = pcVar3;
  _File->_bufsiz = 0x1000;
  _File->_cnt = 0x1000;
LAB_004013e5:
  *(ushort *)&_File->_flag = *(ushort *)&_File->_flag | 0x1102;
  return 1;
}



// Library Function - Single Match
//  __ftbuf
// 
// Library: Visual Studio 2003 Release

void __cdecl __ftbuf(int _Flag,FILE *_File)

{
  byte *pbVar1;
  
  if (_Flag == 0) {
    if ((*(byte *)((int)&_File->_flag + 1) & 0x10) != 0) {
      __flush(_File);
    }
  }
  else {
    if ((*(byte *)((int)&_File->_flag + 1) & 0x10) != 0) {
      __flush(_File);
      pbVar1 = (byte *)((int)&_File->_flag + 1);
      *pbVar1 = *pbVar1 & 0xee;
      _File->_bufsiz = 0;
      _File->_ptr = (char *)0x0;
      _File->_base = (char *)0x0;
    }
  }
  return;
}



// Library Function - Single Match
//  _write_char
// 
// Library: Visual Studio 2003 Release

void __fastcall _write_char(FILE *param_1)

{
  int *piVar1;
  byte in_AL;
  uint uVar2;
  int *unaff_ESI;
  
  if (((*(byte *)&param_1->_flag & 0x40) == 0) || (param_1->_base != (char *)0x0)) {
    piVar1 = &param_1->_cnt;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = __flsbuf((int)(char)in_AL,param_1);
    }
    else {
      *param_1->_ptr = in_AL;
      param_1->_ptr = param_1->_ptr + 1;
      uVar2 = (uint)in_AL;
    }
    if (uVar2 == 0xffffffff) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}



// Library Function - Single Match
//  _write_multi_char
// 
// Library: Visual Studio 2003 Release

void __cdecl _write_multi_char(undefined4 param_1,int param_2,FILE *param_3)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    _write_char(param_3);
  } while (*in_EAX != -1);
  return;
}



// Library Function - Single Match
//  _write_string
// 
// Library: Visual Studio 2003 Release

void __cdecl _write_string(int param_1)

{
  int *in_EAX;
  FILE *unaff_EDI;
  
  if (((*(byte *)&unaff_EDI->_flag & 0x40) == 0) || (unaff_EDI->_base != (char *)0x0)) {
    do {
      if (param_1 < 1) {
        return;
      }
      param_1 = param_1 + -1;
      _write_char(unaff_EDI);
    } while (*in_EAX != -1);
  }
  else {
    *in_EAX = *in_EAX + param_1;
  }
  return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Could not reconcile some variable overlaps
// Library Function - Single Match
//  __output
// 
// Library: Visual Studio 2003 Release

void __cdecl __output(FILE *param_1,byte *param_2,int **param_3)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int **ppiVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int extraout_ECX;
  byte bVar9;
  char *pcVar10;
  bool bVar11;
  undefined8 uVar12;
  int *local_258;
  int *local_254;
  size_t local_24c;
  int local_248;
  undefined4 local_244;
  int local_240;
  int local_23c;
  int *local_238;
  int local_234;
  int *local_230;
  int local_22c;
  undefined local_228;
  char local_227;
  int local_224;
  size_t local_220;
  int *local_21c;
  int *local_218;
  uint local_214;
  int local_210 [127];
  undefined4 local_11;
  int local_8;
  
  local_8 = DAT_0040b498;
  local_220 = 0;
  local_224 = 0;
  local_238 = (int *)0x0;
  bVar9 = *param_2;
  iVar7 = 0;
  pbVar3 = param_2;
  ppiVar4 = param_3;
  do {
    if ((bVar9 == 0) || (param_2 = pbVar3 + 1, local_224 < 0)) {
      FUN_004041a2(local_8);
      return;
    }
    if (((char)bVar9 < ' ') || ('x' < (char)bVar9)) {
      uVar5 = 0;
    }
    else {
      uVar5 = (int)*(char *)((int)&SetStdHandle_exref + (int)(char)bVar9) & 0xf;
    }
    local_248 = (int)(char)(&DAT_004090e8)[uVar5 * 8 + iVar7] >> 4;
    param_3 = ppiVar4;
    switch(local_248) {
    case 0:
switchD_00401545_caseD_0:
      local_234 = 0;
      if ((PTR_DAT_0040b490[(uint)bVar9 * 2 + 1] & 0x80) != 0) {
        _write_char(param_1);
        param_2 = pbVar3 + 2;
      }
      _write_char(param_1);
      break;
    case 1:
      local_218 = (int *)0xffffffff;
      local_244 = 0;
      local_23c = 0;
      local_230 = (int *)0x0;
      local_22c = 0;
      local_214 = 0;
      local_234 = 0;
      break;
    case 2:
      if (bVar9 == 0x20) {
        local_214 = local_214 | 2;
      }
      else {
        if (bVar9 == 0x23) {
          local_214 = local_214 | 0x80;
        }
        else {
          if (bVar9 == 0x2b) {
            local_214 = local_214 | 1;
          }
          else {
            if (bVar9 == 0x2d) {
              local_214 = local_214 | 4;
            }
            else {
              if (bVar9 == 0x30) {
                local_214 = local_214 | 8;
              }
            }
          }
        }
      }
      break;
    case 3:
      if (bVar9 == 0x2a) {
        local_230 = *ppiVar4;
        param_3 = ppiVar4 + 1;
        if ((int)local_230 < 0) {
          local_214 = local_214 | 4;
          local_230 = (int *)-(int)local_230;
        }
      }
      else {
        local_230 = (int *)((char)bVar9 + -0x30 + (int)local_230 * 10);
      }
      break;
    case 4:
      local_218 = (int *)0x0;
      break;
    case 5:
      if (bVar9 == 0x2a) {
        local_218 = *ppiVar4;
        param_3 = ppiVar4 + 1;
        if ((int)local_218 < 0) {
          local_218 = (int *)0xffffffff;
        }
      }
      else {
        local_218 = (int *)((char)bVar9 + -0x30 + (int)local_218 * 10);
      }
      break;
    case 6:
      if (bVar9 == 0x49) {
        bVar1 = *param_2;
        if ((bVar1 == 0x36) && (pbVar3[2] == 0x34)) {
          param_2 = pbVar3 + 3;
          local_214 = local_214 | 0x8000;
        }
        else {
          if ((bVar1 == 0x33) && (pbVar3[2] == 0x32)) {
            param_2 = pbVar3 + 3;
            local_214 = local_214 & 0xffff7fff;
          }
          else {
            if (((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
                ((bVar1 != 0x75 && (bVar1 != 0x78)))) && (bVar1 != 0x58)) {
              local_248 = 0;
              goto switchD_00401545_caseD_0;
            }
          }
        }
      }
      else {
        if (bVar9 == 0x68) {
          local_214 = local_214 | 0x20;
        }
        else {
          if (bVar9 == 0x6c) {
            local_214 = local_214 | 0x10;
          }
          else {
            if (bVar9 == 0x77) {
              local_214 = local_214 | 0x800;
            }
          }
        }
      }
      break;
    case 7:
      if ((char)bVar9 < 'h') {
        if ((char)bVar9 < 'e') {
          if ((char)bVar9 < 'Y') {
            if (bVar9 != 0x58) {
              if (bVar9 == 0x43) {
                if ((local_214 & 0x830) == 0) {
                  local_214 = local_214 | 0x800;
                }
                goto LAB_004017e5;
              }
              if ((bVar9 != 0x45) && (bVar9 != 0x47)) {
                if (bVar9 == 0x53) {
                  if ((local_214 & 0x830) == 0) {
                    local_214 = local_214 | 0x800;
                  }
                  goto LAB_00401768;
                }
                goto LAB_00401b5d;
              }
              local_244 = 1;
              bVar9 = bVar9 + 0x20;
              goto LAB_004017b9;
            }
LAB_00401a03:
            local_240 = 7;
LAB_00401a06:
            local_220 = 0x10;
            if ((local_214 & 0x80) != 0) {
              local_227 = (char)local_240 + 'Q';
              local_228 = 0x30;
              local_22c = 2;
            }
            goto LAB_00401836;
          }
          if (bVar9 == 0x5a) {
            param_3 = ppiVar4 + 1;
            piVar8 = *ppiVar4;
            piVar6 = (int *)PTR_s__null__0040b0c0;
            piVar2 = (int *)PTR_s__null__0040b0c0;
            if ((piVar8 == (int *)0x0) ||
               (local_21c = (int *)piVar8[1], piVar2 = (int *)PTR_s__null__0040b0c0,
               local_21c == (int *)0x0)) goto LAB_00401977;
            local_220 = SEXT24(*(wchar_t *)piVar8);
            if ((local_214 & 0x800) == 0) {
              local_234 = 0;
            }
            else {
              local_220 = (int)local_220 / 2;
              local_234 = 1;
            }
          }
          else {
            if (bVar9 == 99) {
LAB_004017e5:
              if ((local_214 & 0x810) == 0) {
                local_210[0]._0_1_ = *(char *)ppiVar4;
                local_220 = 1;
              }
              else {
                local_220 = _wctomb((char *)local_210,*(wchar_t *)ppiVar4);
                if ((int)local_220 < 0) {
                  local_23c = 1;
                }
              }
              param_3 = ppiVar4 + 1;
              local_21c = local_210;
            }
            else {
              if (bVar9 == 100) goto LAB_0040182b;
            }
          }
        }
        else {
LAB_004017b9:
          local_214 = local_214 | 0x40;
          piVar8 = local_210;
          piVar6 = local_210;
          if ((int)local_218 < 0) {
            local_218 = (int *)0x6;
          }
          else {
            if (local_218 == (int *)0x0) {
              if (bVar9 == 0x67) {
                local_218 = (int *)0x1;
              }
            }
            else {
              if (0x200 < (int)local_218) {
                local_218 = (int *)0x200;
              }
              if ((0xa3 < (int)local_218) &&
                 (local_21c = local_210,
                 local_238 = (int *)_malloc((size_t)((int)local_218 + 0x15d)), piVar8 = local_238,
                 piVar6 = local_238, local_238 == (int *)0x0)) {
                local_218 = (int *)0xa3;
                piVar8 = local_210;
                piVar6 = local_21c;
              }
            }
          }
          local_21c = piVar6;
          local_258 = *ppiVar4;
          param_3 = ppiVar4 + 2;
          local_254 = ppiVar4[1];
          (*(code *)PTR_FUN_0040b348)(&local_258,piVar8,(int)(char)bVar9,local_218,local_244);
          uVar5 = local_214 & 0x80;
          if ((uVar5 != 0) && (local_218 == (int *)0x0)) {
            (*(code *)PTR_FUN_0040b354)(piVar8);
          }
          if ((bVar9 == 0x67) && (uVar5 == 0)) {
            (*(code *)PTR_FUN_0040b34c)(piVar8);
          }
          piVar6 = piVar8;
          piVar2 = local_21c;
          if (*(char *)piVar8 == '-') {
            local_214 = local_214 | 0x100;
            piVar6 = (int *)((int)piVar8 + 1);
            piVar2 = (int *)((int)piVar8 + 1);
          }
LAB_00401977:
          local_21c = piVar2;
          local_220 = _strlen((char *)piVar6);
        }
LAB_00401b5d:
        uVar5 = local_214;
        if (local_23c == 0) {
          if ((local_214 & 0x40) != 0) {
            if ((local_214 & 0x100) == 0) {
              if ((local_214 & 1) == 0) {
                if ((local_214 & 2) == 0) goto LAB_00401b95;
                local_228 = 0x20;
              }
              else {
                local_228 = 0x2b;
              }
            }
            else {
              local_228 = 0x2d;
            }
            local_22c = 1;
          }
LAB_00401b95:
          pcVar10 = (char *)((int)local_230 + (-local_220 - local_22c));
          if ((local_214 & 0xc) == 0) {
            _write_multi_char(0x20,(int)pcVar10,param_1);
          }
          _write_string(local_22c);
          if (((uVar5 & 8) != 0) && ((uVar5 & 4) == 0)) {
            _write_multi_char(0x30,(int)pcVar10,param_1);
          }
          if ((local_234 == 0) || ((int)local_220 < 1)) {
            _write_string(local_220);
          }
          else {
            local_24c = local_220;
            piVar8 = local_21c;
            do {
              local_24c = local_24c - 1;
              iVar7 = _wctomb((char *)((int)&local_11 + 1),*(wchar_t *)piVar8);
              piVar8 = (int *)((int)piVar8 + 2);
              if (iVar7 < 1) break;
              _write_string(iVar7);
            } while (local_24c != 0);
          }
          if ((local_214 & 4) != 0) {
            _write_multi_char(0x20,(int)pcVar10,param_1);
          }
        }
      }
      else {
        if (bVar9 == 0x69) {
LAB_0040182b:
          local_214 = local_214 | 0x40;
LAB_0040182f:
          local_220 = 10;
LAB_00401836:
          if ((local_214 & 0x8000) == 0) {
            param_3 = ppiVar4 + 1;
            if ((local_214 & 0x20) == 0) {
              piVar8 = *ppiVar4;
              if ((local_214 & 0x40) == 0) {
                piVar6 = (int *)0x0;
                goto LAB_00401aa7;
              }
            }
            else {
              if ((local_214 & 0x40) == 0) {
                piVar8 = (int *)(uint)*(ushort *)ppiVar4;
              }
              else {
                piVar8 = (int *)(int)*(short *)ppiVar4;
              }
            }
            piVar6 = (int *)((int)piVar8 >> 0x1f);
          }
          else {
            piVar8 = *ppiVar4;
            piVar6 = ppiVar4[1];
            param_3 = ppiVar4 + 2;
          }
LAB_00401aa7:
          if ((((local_214 & 0x40) != 0) && ((int)piVar6 < 1)) && ((int)piVar6 < 0)) {
            bVar11 = piVar8 != (int *)0x0;
            piVar8 = (int *)-(int)piVar8;
            piVar6 = (int *)-(int)((int)piVar6 + (uint)bVar11);
            local_214 = local_214 | 0x100;
          }
          uVar12 = CONCAT44(piVar6,piVar8);
          if ((local_214 & 0x8000) == 0) {
            piVar6 = (int *)0x0;
          }
          if ((int)local_218 < 0) {
            local_218 = (int *)0x1;
          }
          else {
            local_214 = local_214 & 0xfffffff7;
            if (0x200 < (int)local_218) {
              local_218 = (int *)0x200;
            }
          }
          if (((uint)piVar8 | (uint)piVar6) == 0) {
            local_22c = 0;
          }
          piVar8 = &local_11;
          while( true ) {
            uVar5 = (uint)uVar12;
            piVar2 = (int *)((int)local_218 + -1);
            if (((int)local_218 < 1) && ((uVar5 | (uint)piVar6) == 0)) break;
            local_218 = piVar2;
            uVar12 = __aulldvrm(uVar5,(uint)piVar6,local_220,(int)local_220 >> 0x1f);
            piVar6 = (int *)((ulonglong)uVar12 >> 0x20);
            iVar7 = extraout_ECX + 0x30;
            if (0x39 < iVar7) {
              iVar7 = iVar7 + local_240;
            }
            *(char *)piVar8 = (char)iVar7;
            piVar8 = (int *)((int)piVar8 + -1);
            local_24c = uVar5;
          }
          local_220 = (int)&local_11 + -(int)piVar8;
          local_21c = (int *)((int)piVar8 + 1);
          local_218 = piVar2;
          if (((local_214 & 0x200) != 0) && ((*(char *)local_21c != '0' || (local_220 == 0)))) {
            *(char *)piVar8 = '0';
            local_220 = (int)&local_11 + -(int)piVar8 + 1;
            local_21c = piVar8;
          }
          goto LAB_00401b5d;
        }
        if (bVar9 != 0x6e) {
          if (bVar9 == 0x6f) {
            local_220 = 8;
            if ((local_214 & 0x80) != 0) {
              local_214 = local_214 | 0x200;
            }
            goto LAB_00401836;
          }
          if (bVar9 == 0x70) {
            local_218 = (int *)&DAT_00000008;
            goto LAB_00401a03;
          }
          if (bVar9 == 0x73) {
LAB_00401768:
            piVar8 = local_218;
            if (local_218 == (int *)0xffffffff) {
              piVar8 = (int *)0x7fffffff;
            }
            param_3 = ppiVar4 + 1;
            local_21c = *ppiVar4;
            if ((local_214 & 0x810) == 0) {
              piVar6 = local_21c;
              if (local_21c == (int *)0x0) {
                piVar6 = (int *)PTR_s__null__0040b0c0;
                local_21c = (int *)PTR_s__null__0040b0c0;
              }
              for (; (piVar8 != (int *)0x0 &&
                     (piVar8 = (int *)((int)piVar8 + -1), *(char *)piVar6 != '\0'));
                  piVar6 = (int *)((int)piVar6 + 1)) {
              }
              local_220 = (int)piVar6 - (int)local_21c;
            }
            else {
              if (local_21c == (int *)0x0) {
                local_21c = (int *)PTR_DAT_0040b0c4;
              }
              local_234 = 1;
              for (piVar6 = local_21c;
                  (piVar8 != (int *)0x0 &&
                  (piVar8 = (int *)((int)piVar8 + -1), *(wchar_t *)piVar6 != L'\0'));
                  piVar6 = (int *)((int)piVar6 + 2)) {
              }
              local_220 = (int)piVar6 - (int)local_21c >> 1;
            }
            goto LAB_00401b5d;
          }
          if (bVar9 != 0x75) {
            if (bVar9 != 0x78) goto LAB_00401b5d;
            local_240 = 0x27;
            goto LAB_00401a06;
          }
          goto LAB_0040182f;
        }
        param_3 = ppiVar4 + 1;
        if ((local_214 & 0x20) == 0) {
          **ppiVar4 = local_224;
        }
        else {
          *(wchar_t *)*ppiVar4 = (wchar_t)local_224;
        }
        local_23c = 1;
      }
      if (local_238 != (int *)0x0) {
        _free(local_238);
        local_238 = (int *)0x0;
      }
    }
    bVar9 = *param_2;
    iVar7 = local_248;
    pbVar3 = param_2;
    ppiVar4 = param_3;
  } while( true );
}



// Library Function - Single Match
//  __hextodec
// 
// Library: Visual Studio 2003 Release

uint __hextodec(void)

{
  uint in_EAX;
  uint uVar1;
  
  if (DAT_0040b4a0 < 2) {
    uVar1 = (byte)PTR_DAT_0040b490[in_EAX * 2] & 4;
  }
  else {
    uVar1 = __isctype(in_EAX,4);
  }
  if (uVar1 == 0) {
    in_EAX = (in_EAX & 0xffffffdf) - 7;
  }
  return in_EAX;
}



// Library Function - Single Match
//  __inc
// 
// Library: Visual Studio 2003 Release

uint __fastcall __inc(undefined4 param_1,FILE *param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = &param_2->_cnt;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    bVar2 = *param_2->_ptr;
    param_2->_ptr = param_2->_ptr + 1;
    return (uint)bVar2;
  }
  uVar3 = __filbuf(param_2);
  return uVar3;
}



// WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog
// WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3
// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Type propagation algorithm not settling
// WARNING: Could not reconcile some variable overlaps
// Library Function - Single Match
//  __input
// 
// Library: Visual Studio 2003 Release

void __cdecl __input(FILE *param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  FILE *extraout_ECX;
  FILE *extraout_ECX_00;
  FILE *extraout_ECX_01;
  FILE *extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  FILE *extraout_ECX_05;
  FILE *extraout_ECX_06;
  FILE *extraout_ECX_07;
  FILE *extraout_ECX_08;
  FILE *extraout_ECX_09;
  FILE *extraout_ECX_10;
  FILE *extraout_ECX_11;
  FILE *extraout_ECX_12;
  FILE *extraout_ECX_13;
  FILE *extraout_ECX_14;
  FILE *extraout_ECX_15;
  FILE *extraout_ECX_16;
  byte bVar5;
  byte bVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int iVar12;
  byte *pbVar13;
  bool bVar14;
  ulonglong uVar15;
  undefined *puVar16;
  undefined4 uVar17;
  FILE *pFVar18;
  undefined4 *local_1e0;
  int local_1dc;
  uint local_1d8;
  wchar_t local_1d0 [2];
  int local_1cc;
  byte local_1c8;
  undefined local_1c7;
  uint local_1c4;
  undefined *local_1c0;
  int local_1bc;
  FILE *local_1b8;
  undefined4 *local_1b4;
  undefined8 local_1b0;
  byte local_1a5;
  undefined *local_1a4;
  int local_1a0;
  byte local_19c;
  char local_19b;
  char local_19a;
  char local_199;
  undefined *local_198;
  char local_192;
  char local_191;
  int local_190;
  char local_189;
  undefined *local_188;
  char local_181;
  char local_180;
  char local_17f [351];
  int local_20;
  undefined *local_1c;
  undefined4 uStack12;
  undefined *local_8;
  
  local_8 = &DAT_00409160;
  uStack12 = 0x401dcb;
  local_20 = DAT_0040b498;
  local_1c0 = (undefined *)0x0;
  local_1dc = 0;
  local_1b4 = (undefined4 *)0x0;
  local_198 = (undefined *)0x0;
  local_199 = '\0';
  local_188 = (undefined *)0x0;
  local_1bc = 0;
LAB_00401e02:
  while (bVar6 = *param_2, bVar6 != 0) {
    if ((int)DAT_0040b4a0 < 2) {
      uVar2 = (byte)PTR_DAT_0040b490[(uint)bVar6 * 2] & 8;
      puVar16 = PTR_DAT_0040b490;
    }
    else {
      puVar16 = &DAT_00000008;
      uVar2 = __isctype((uint)bVar6,8);
    }
    iVar12 = 0;
    if (uVar2 == 0) {
      if (*param_2 != 0x25) {
        local_188 = local_188 + 1;
        puVar16 = (undefined *)__inc(puVar16,param_1);
        local_198 = puVar16;
        if ((undefined *)(uint)*param_2 != puVar16) goto LAB_00402ba3;
        pbVar13 = param_2 + 1;
        if ((PTR_DAT_0040b490[((uint)puVar16 & 0xff) * 2 + 1] & 0x80) != 0) {
          local_188 = local_188 + 1;
          uVar2 = __inc(PTR_DAT_0040b490,param_1);
          if (param_2[1] != uVar2) {
            if (uVar2 != 0xffffffff) {
              _ungetc(uVar2,param_1);
            }
            goto LAB_00402ba3;
          }
          local_188 = local_188 + -1;
          pbVar13 = param_2 + 2;
        }
        goto LAB_00402bbd;
      }
      local_1a4 = (undefined *)0x0;
      local_19c = 0;
      local_1a0 = 0;
      local_1b8 = (FILE *)0x0;
      local_190 = 0;
      local_1a5 = 0;
      local_19b = '\0';
      local_192 = '\0';
      local_181 = '\0';
      local_19a = '\0';
      local_189 = '\0';
      local_191 = '\x01';
      local_1cc = 0;
      pbVar13 = param_2;
      do {
        pbVar8 = pbVar13 + 1;
        uVar2 = (uint)*pbVar8;
        if ((int)DAT_0040b4a0 < 2) {
          uVar4 = (byte)PTR_DAT_0040b490[uVar2 * 2] & 4;
          puVar16 = PTR_DAT_0040b490;
        }
        else {
          puVar16 = &DAT_00000004;
          uVar4 = __isctype(uVar2,4);
        }
        param_2 = pbVar8;
        if (uVar4 == 0) {
          if (uVar2 < 0x4f) {
            if (uVar2 != 0x4e) {
              if (uVar2 == 0x2a) {
                local_192 = local_192 + '\x01';
              }
              else {
                if (uVar2 != 0x46) {
                  if (uVar2 == 0x49) {
                    bVar6 = pbVar13[2];
                    puVar16 = (undefined *)((uint)puVar16 & 0xffffff00 | (uint)bVar6);
                    if ((bVar6 == 0x36) && (pbVar13[3] == 0x34)) {
                      local_1cc = local_1cc + 1;
                      local_1b0 = 0;
                      param_2 = pbVar13 + 3;
                    }
                    else {
                      if (((bVar6 != 0x33) || (param_2 = pbVar13 + 3, *param_2 != 0x32)) &&
                         ((((param_2 = pbVar8, bVar6 != 100 && (bVar6 != 0x69)) && (bVar6 != 0x6f))
                          && ((bVar6 != 0x78 && (bVar6 != 0x58)))))) goto LAB_00401fbc;
                    }
                  }
                  else {
                    if (uVar2 == 0x4c) {
                      local_191 = local_191 + '\x01';
                    }
                    else {
LAB_00401fbc:
                      local_181 = local_181 + '\x01';
                      param_2 = pbVar8;
                    }
                  }
                }
              }
            }
          }
          else {
            if (uVar2 == 0x68) {
              local_191 = local_191 + -1;
              local_189 = local_189 + -1;
            }
            else {
              if (uVar2 == 0x6c) {
                local_191 = local_191 + '\x01';
              }
              else {
                if (uVar2 != 0x77) goto LAB_00401fbc;
              }
              local_189 = local_189 + '\x01';
            }
          }
        }
        else {
          local_1b8 = (FILE *)((int)&local_1b8->_ptr + 1);
          iVar12 = (uVar2 - 0x30) + iVar12 * 10;
        }
        pbVar13 = param_2;
      } while (local_181 == '\0');
      if (local_192 == '\0') {
        local_1e0 = param_3;
        local_1b4 = (undefined4 *)*param_3;
        param_3 = param_3 + 1;
      }
      puVar7 = local_1b4;
      local_181 = '\0';
      if ((local_189 == '\0') && ((*param_2 == 0x53 || (local_189 = -1, *param_2 == 0x43)))) {
        local_189 = '\x01';
      }
      uVar2 = *param_2 | 0x20;
      local_1c4 = uVar2;
      puVar3 = local_198;
      local_190 = iVar12;
      if (uVar2 != 0x6e) {
        if ((uVar2 == 99) || (uVar2 == 0x7b)) {
          local_188 = local_188 + 1;
          puVar3 = (undefined *)__inc(puVar16,param_1);
        }
        else {
          do {
            local_188 = local_188 + 1;
            puVar3 = (undefined *)__inc(puVar16,param_1);
            puVar16 = puVar3;
            iVar12 = _isspace((int)puVar3);
          } while (iVar12 != 0);
        }
      }
      local_198 = puVar3;
      pFVar18 = local_1b8;
      puVar16 = local_198;
      if ((local_1b8 == (FILE *)0x0) || (local_190 != 0)) {
        if (uVar2 < 0x70) {
          if (uVar2 == 0x6f) {
LAB_004027cf:
            if (local_198 == (undefined *)0x2d) {
              local_19b = '\x01';
            }
            else {
              if (local_198 != (undefined *)0x2b) goto LAB_00402813;
            }
            local_190 = local_190 + -1;
            if ((local_190 == 0) && (local_1b8 != (FILE *)0x0)) {
              local_181 = '\x01';
            }
            else {
              local_188 = local_188 + 1;
              local_198 = (undefined *)__inc(local_1b8,param_1);
              pFVar18 = extraout_ECX_11;
            }
            goto LAB_00402813;
          }
          if (uVar2 == 99) {
            if (local_1b8 == (FILE *)0x0) {
              local_1b8 = (FILE *)0x1;
              local_190 = local_190 + 1;
            }
LAB_00402393:
            if ('\0' < local_189) {
              local_19a = '\x01';
            }
            goto LAB_0040255a;
          }
          if (uVar2 == 100) goto LAB_004027cf;
          if (uVar2 < 0x65) {
LAB_004023d2:
            if ((undefined *)(uint)*param_2 != local_198) goto LAB_00402ba3;
            local_199 = local_199 + -1;
            if (local_192 == '\0') {
              param_3 = local_1e0;
            }
            goto LAB_00402b38;
          }
          if (0x67 < uVar2) {
            if (uVar2 == 0x69) {
              uVar2 = 100;
              goto LAB_00402106;
            }
            if (uVar2 != 0x6e) goto LAB_004023d2;
            puVar16 = local_188;
            if (local_192 != '\0') goto LAB_00402b38;
            goto LAB_00402b0c;
          }
          pcVar9 = &local_180;
          if (local_198 == (undefined *)0x2d) {
            local_180 = '-';
            pcVar9 = local_17f;
LAB_00402145:
            local_190 = local_190 + -1;
            local_188 = local_188 + 1;
            local_198 = (undefined *)__inc(local_1b8,param_1);
            pFVar18 = extraout_ECX;
          }
          else {
            pFVar18 = local_1b8;
            if (local_198 == (undefined *)0x2b) goto LAB_00402145;
          }
          if ((local_1b8 == (FILE *)0x0) || (0x15d < local_190)) {
            local_190 = 0x15d;
          }
          while( true ) {
            puVar16 = local_198;
            if ((int)DAT_0040b4a0 < 2) {
              uVar2 = (byte)PTR_DAT_0040b490[(int)local_198 * 2] & 4;
            }
            else {
              pFVar18 = (FILE *)&DAT_00000004;
              uVar2 = __isctype((int)local_198,4);
            }
            if ((uVar2 == 0) ||
               (iVar12 = local_190 + -1, bVar14 = local_190 == 0, local_190 = iVar12, bVar14))
            break;
            local_1a0 = local_1a0 + 1;
            *pcVar9 = (char)puVar16;
            pcVar9 = pcVar9 + 1;
            local_188 = local_188 + 1;
            local_198 = (undefined *)__inc(pFVar18,param_1);
            pFVar18 = extraout_ECX_00;
          }
          if ((DAT_0040b4a4 == (char)puVar16) &&
             (iVar12 = local_190 + -1, bVar14 = local_190 != 0, local_190 = iVar12, bVar14)) {
            local_188 = local_188 + 1;
            puVar16 = (undefined *)__inc(pFVar18,param_1);
            *pcVar9 = DAT_0040b4a4;
            pFVar18 = extraout_ECX_01;
            while( true ) {
              pcVar9 = pcVar9 + 1;
              local_198 = puVar16;
              if ((int)DAT_0040b4a0 < 2) {
                uVar2 = (byte)PTR_DAT_0040b490[(int)puVar16 * 2] & 4;
              }
              else {
                pFVar18 = (FILE *)&DAT_00000004;
                uVar2 = __isctype((int)puVar16,4);
              }
              if ((uVar2 == 0) ||
                 (iVar12 = local_190 + -1, bVar14 = local_190 == 0, local_190 = iVar12, bVar14))
              break;
              local_1a0 = local_1a0 + 1;
              *pcVar9 = (char)puVar16;
              local_188 = local_188 + 1;
              puVar16 = (undefined *)__inc(pFVar18,param_1);
              pFVar18 = extraout_ECX_02;
            }
          }
          pcVar10 = pcVar9;
          if ((local_1a0 != 0) &&
             (((puVar16 == (undefined *)0x65 || (puVar16 == (undefined *)0x45)) &&
              (iVar12 = local_190 + -1, bVar14 = local_190 != 0, local_190 = iVar12, bVar14)))) {
            *pcVar9 = 'e';
            pcVar10 = pcVar9 + 1;
            local_188 = local_188 + 1;
            local_198 = (undefined *)__inc(pFVar18,param_1);
            uVar17 = extraout_ECX_03;
            if (local_198 == (undefined *)0x2d) {
              *pcVar10 = '-';
              pcVar10 = pcVar9 + 2;
LAB_004022b7:
              bVar14 = local_190 != 0;
              local_190 = local_190 + -1;
              if (bVar14) goto LAB_004022cf;
              local_190 = 0;
            }
            else {
              if (local_198 == (undefined *)0x2b) goto LAB_004022b7;
            }
            while( true ) {
              puVar16 = local_198;
              if ((int)DAT_0040b4a0 < 2) {
                uVar2 = (byte)PTR_DAT_0040b490[(int)local_198 * 2] & 4;
              }
              else {
                uVar17 = 4;
                uVar2 = __isctype((int)local_198,4);
              }
              if ((uVar2 == 0) ||
                 (iVar12 = local_190 + -1, bVar14 = local_190 == 0, local_190 = iVar12, bVar14))
              break;
              local_1a0 = local_1a0 + 1;
              *pcVar10 = (char)puVar16;
              pcVar10 = pcVar10 + 1;
LAB_004022cf:
              local_188 = local_188 + 1;
              local_198 = (undefined *)__inc(uVar17,param_1);
              uVar17 = extraout_ECX_04;
            }
          }
          local_188 = local_188 + -1;
          if (puVar16 != (undefined *)0xffffffff) {
            _ungetc((int)puVar16,param_1);
          }
          if (local_1a0 != 0) {
            if (local_192 == '\0') {
              local_1bc = local_1bc + 1;
              *pcVar10 = '\0';
              (*(code *)PTR_FUN_0040b350)(local_191 + -1,local_1b4,&local_180);
            }
            goto LAB_00402b38;
          }
        }
        else {
          if (uVar2 == 0x70) {
            local_191 = '\x01';
            goto LAB_004027cf;
          }
          if (uVar2 == 0x73) goto LAB_00402393;
          if (uVar2 == 0x75) goto LAB_004027cf;
          if (uVar2 != 0x78) {
            if (uVar2 == 0x7b) {
              if ('\0' < local_189) {
                local_19a = '\x01';
              }
              pbVar8 = param_2 + 1;
              pbVar13 = pbVar8;
              if (*pbVar8 == 0x5e) {
                pbVar13 = param_2 + 2;
                local_1a5 = 0xff;
              }
              if (local_1c0 == (undefined *)0x0) {
                local_1c = &stack0xfffffe14;
                local_1c0 = &stack0xfffffe14;
                local_8 = (undefined *)0xffffffff;
              }
              puVar16 = local_1c0;
              _memset(local_1c0,0,0x20);
              pFVar18 = extraout_ECX_05;
              bVar6 = local_19c;
              if ((local_1c4 == 0x7b) && (*pbVar13 == 0x5d)) {
                puVar16[0xb] = 0x20;
                pbVar13 = pbVar13 + 1;
                bVar6 = 0x5d;
              }
LAB_00402534:
              do {
                bVar5 = *pbVar13;
                if (bVar5 == 0x5d) goto code_r0x00402542;
                if ((bVar5 == 0x2d) && (bVar6 != 0)) {
                  bVar1 = pbVar13[1];
                  pFVar18 = (FILE *)((uint)pFVar18 & 0xffffff00 | (uint)bVar1);
                  if (bVar1 != 0x5d) {
                    bVar5 = bVar1;
                    if (bVar6 < bVar1) {
                      bVar5 = bVar6;
                      bVar6 = bVar1;
                    }
                    if (bVar5 <= bVar6) {
                      uVar2 = (uint)bVar5;
                      local_1d8 = (uint)(byte)((bVar6 - bVar5) + 1);
                      do {
                        pFVar18 = (FILE *)(uVar2 & 7);
                        puVar16[uVar2 >> 3] = puVar16[uVar2 >> 3] | '\x01' << (sbyte)pFVar18;
                        uVar2 = uVar2 + 1;
                        local_1d8 = local_1d8 - 1;
                      } while (local_1d8 != 0);
                    }
                    pbVar13 = pbVar13 + 2;
                    bVar6 = 0;
                    goto LAB_00402534;
                  }
                }
                local_19c = bVar5;
                pFVar18 = (FILE *)(bVar5 & 7);
                puVar16[bVar5 >> 3] = puVar16[bVar5 >> 3] | '\x01' << (sbyte)pFVar18;
                pbVar13 = pbVar13 + 1;
                bVar6 = local_19c;
              } while( true );
            }
            goto LAB_004023d2;
          }
LAB_00402106:
          if (local_198 == (undefined *)0x2d) {
            local_19b = '\x01';
LAB_0040267d:
            local_190 = local_190 + -1;
            if ((local_190 == 0) && (local_1b8 != (FILE *)0x0)) {
              local_181 = '\x01';
            }
            else {
              local_188 = local_188 + 1;
              local_198 = (undefined *)__inc(local_1b8,param_1);
              pFVar18 = extraout_ECX_08;
            }
          }
          else {
            if (local_198 == (undefined *)0x2b) goto LAB_0040267d;
          }
          if (local_198 == (undefined *)0x30) {
            local_188 = local_188 + 1;
            local_198 = (undefined *)__inc(pFVar18,param_1);
            if (((char)local_198 == 'x') || ((char)local_198 == 'X')) {
              local_188 = local_188 + 1;
              local_198 = (undefined *)__inc(extraout_ECX_09,param_1);
              if ((local_1b8 != (FILE *)0x0) && (local_190 = local_190 + -2, local_190 < 1)) {
                local_181 = local_181 + '\x01';
              }
              uVar2 = 0x78;
              pFVar18 = extraout_ECX_10;
            }
            else {
              local_1a0 = 1;
              pFVar18 = extraout_ECX_09;
              if (uVar2 == 0x78) {
                local_188 = local_188 + -1;
                if (local_198 != (undefined *)0xffffffff) {
                  pFVar18 = param_1;
                  _ungetc((int)local_198,param_1);
                }
                local_198 = (undefined *)0x30;
              }
              else {
                if ((local_1b8 != (FILE *)0x0) && (local_190 = local_190 + -1, local_190 == 0)) {
                  local_181 = local_181 + '\x01';
                }
                uVar2 = 0x6f;
              }
            }
          }
LAB_00402813:
          puVar16 = local_198;
          if (local_1cc == 0) {
            while (local_181 == '\0') {
              if ((uVar2 == 0x78) || (uVar2 == 0x70)) {
                if ((int)DAT_0040b4a0 < 2) {
                  uVar4 = (byte)PTR_DAT_0040b490[(int)puVar16 * 2] & 0x80;
                }
                else {
                  pFVar18 = (FILE *)0x80;
                  uVar4 = __isctype((int)puVar16,0x80);
                }
                if (uVar4 != 0) {
                  local_1a4 = (undefined *)((int)local_1a4 << 4);
                  puVar16 = (undefined *)__hextodec();
                  pFVar18 = extraout_ECX_15;
                  goto LAB_00402a55;
                }
LAB_00402a4f:
                local_181 = local_181 + '\x01';
              }
              else {
                if ((int)DAT_0040b4a0 < 2) {
                  uVar4 = (byte)PTR_DAT_0040b490[(int)puVar16 * 2] & 4;
                }
                else {
                  pFVar18 = (FILE *)&DAT_00000004;
                  uVar4 = __isctype((int)puVar16,4);
                }
                if (uVar4 == 0) goto LAB_00402a4f;
                if (uVar2 == 0x6f) {
                  if (0x37 < (int)puVar16) goto LAB_00402a4f;
                  local_1a4 = (undefined *)((int)local_1a4 << 3);
                }
                else {
                  local_1a4 = (undefined *)((int)local_1a4 * 10);
                }
              }
LAB_00402a55:
              if (local_181 == '\0') {
                local_1a0 = local_1a0 + 1;
                local_1a4 = local_1a4 + -0x30 + (int)puVar16;
                if ((local_1b8 == (FILE *)0x0) || (local_190 = local_190 + -1, local_190 != 0)) {
                  local_188 = local_188 + 1;
                  puVar16 = (undefined *)__inc(pFVar18,param_1);
                  pFVar18 = extraout_ECX_16;
                }
                else {
                  local_181 = '\x01';
                }
              }
              else {
                local_188 = local_188 + -1;
                if (puVar16 != (undefined *)0xffffffff) {
                  pFVar18 = param_1;
                  _ungetc((int)puVar16,param_1);
                }
              }
            }
            local_198 = puVar16;
            if (local_19b != '\0') {
              local_1a4 = (undefined *)-(int)local_1a4;
            }
          }
          else {
            while (local_181 == '\0') {
              if ((uVar2 == 0x78) || (uVar2 == 0x70)) {
                if ((int)DAT_0040b4a0 < 2) {
                  uVar4 = (byte)PTR_DAT_0040b490[(int)puVar16 * 2] & 0x80;
                }
                else {
                  pFVar18 = (FILE *)0x80;
                  uVar4 = __isctype((int)puVar16,0x80);
                }
                if (uVar4 != 0) {
                  local_1b0 = local_1b0 << 4;
                  puVar16 = (undefined *)__hextodec();
                  pFVar18 = extraout_ECX_13;
                  goto LAB_0040290e;
                }
LAB_00402908:
                local_181 = local_181 + '\x01';
              }
              else {
                if ((int)DAT_0040b4a0 < 2) {
                  uVar4 = (byte)PTR_DAT_0040b490[(int)puVar16 * 2] & 4;
                }
                else {
                  pFVar18 = (FILE *)&DAT_00000004;
                  uVar4 = __isctype((int)puVar16,4);
                }
                local_1b0._4_4_ = (uint)(local_1b0 >> 0x20);
                if (uVar4 == 0) goto LAB_00402908;
                if (uVar2 == 0x6f) {
                  if (0x37 < (int)puVar16) goto LAB_00402908;
                  pFVar18 = (FILE *)(local_1b0._4_4_ << 3 | (uint)local_1b0 >> 0x1d);
                  local_1b0 = local_1b0 << 3;
                }
                else {
                  uVar15 = __allmul((uint)local_1b0,local_1b0._4_4_,10,0);
                  pFVar18 = extraout_ECX_12;
                  local_1b0 = uVar15;
                }
              }
LAB_0040290e:
              if (local_181 == '\0') {
                local_1a0 = local_1a0 + 1;
                uVar15 = local_1b0 + (longlong)(int)(puVar16 + -0x30);
                local_1b0 = local_1b0 + (longlong)(int)(puVar16 + -0x30);
                if ((local_1b8 == (FILE *)0x0) || (local_190 = local_190 + -1, local_190 != 0)) {
                  local_188 = local_188 + 1;
                  local_1b0 = uVar15;
                  puVar16 = (undefined *)__inc(pFVar18,param_1);
                  pFVar18 = extraout_ECX_14;
                }
                else {
                  local_181 = '\x01';
                }
              }
              else {
                local_188 = local_188 + -1;
                if (puVar16 != (undefined *)0xffffffff) {
                  pFVar18 = param_1;
                  _ungetc((int)puVar16,param_1);
                }
              }
            }
            local_1b0._4_4_ = (uint)(local_1b0 >> 0x20);
            local_198 = puVar16;
            if (local_19b != '\0') {
              local_1b0 = CONCAT44(-(local_1b0._4_4_ + ((uint)local_1b0 != 0)),-(uint)local_1b0);
            }
          }
          if (uVar2 == 0x46) {
            local_1a0 = 0;
          }
          if (local_1a0 != 0) {
            if (local_192 == '\0') {
              local_1bc = local_1bc + 1;
              puVar16 = local_1a4;
              puVar7 = local_1b4;
LAB_00402b0c:
              local_1b0._4_4_ = (uint)(local_1b0 >> 0x20);
              if (local_1cc == 0) {
                if (local_191 == '\0') {
                  *(short *)puVar7 = (short)puVar16;
                }
                else {
                  *puVar7 = puVar16;
                }
              }
              else {
                *puVar7 = (uint)local_1b0;
                puVar7[1] = local_1b0._4_4_;
              }
            }
            goto LAB_00402b38;
          }
        }
      }
      else {
LAB_00402ba3:
        if (puVar16 != (undefined *)0xffffffff) {
          _ungetc((int)local_198,param_1);
        }
      }
      break;
    }
    local_188 = local_188 + -1;
    do {
      local_188 = local_188 + 1;
      puVar3 = (undefined *)__inc(puVar16,param_1);
      puVar16 = puVar3;
      iVar12 = _isspace((int)puVar3);
    } while (iVar12 != 0);
    if (puVar3 != (undefined *)0xffffffff) {
      _ungetc((int)puVar3,param_1);
    }
    do {
      param_2 = param_2 + 1;
      iVar12 = _isspace((uint)*param_2);
    } while (iVar12 != 0);
  }
  goto LAB_00402bdc;
code_r0x00402542:
  puVar7 = local_1b4;
  uVar2 = local_1c4;
  param_2 = pbVar8;
  if (local_1c4 == 0x7b) {
    param_2 = pbVar13;
  }
LAB_0040255a:
  local_188 = local_188 + -1;
  puVar11 = puVar7;
  if (local_198 != (undefined *)0xffffffff) {
    pFVar18 = param_1;
    _ungetc((int)local_198,param_1);
  }
  while( true ) {
    if ((local_1b8 != (FILE *)0x0) &&
       (iVar12 = local_190 + -1, bVar14 = local_190 == 0, local_190 = iVar12, bVar14))
    goto LAB_00402780;
    local_188 = local_188 + 1;
    local_198 = (undefined *)__inc(pFVar18,param_1);
    if ((local_198 == (undefined *)0xffffffff) ||
       ((bVar6 = (byte)local_198, pFVar18 = extraout_ECX_06, uVar2 != 99 &&
        (((uVar2 != 0x73 ||
          (((8 < (int)local_198 && ((int)local_198 < 0xe)) || (local_198 == (undefined *)0x20)))) &&
         ((uVar2 != 0x7b ||
          (pFVar18 = (FILE *)(int)(char)(local_1c0[(int)local_198 >> 3] ^ local_1a5),
          uVar2 = local_1c4, ((uint)pFVar18 & 1 << (bVar6 & 7)) == 0)))))))) break;
    if (local_192 == '\0') {
      if (local_19a == '\0') {
        *(byte *)puVar7 = bVar6;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        local_1b4 = puVar7;
      }
      else {
        local_1c8 = bVar6;
        if ((PTR_DAT_0040b490[((uint)local_198 & 0xff) * 2 + 1] & 0x80) != 0) {
          local_188 = local_188 + 1;
          uVar4 = __inc(PTR_DAT_0040b490,param_1);
          local_1c7 = (undefined)uVar4;
        }
        _mbtowc(local_1d0,(char *)&local_1c8,DAT_0040b4a0);
        *(wchar_t *)puVar7 = local_1d0[0];
        puVar7 = (undefined4 *)((int)puVar7 + 2);
        pFVar18 = extraout_ECX_07;
        local_1b4 = puVar7;
      }
    }
    else {
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
  }
  local_188 = local_188 + -1;
  if (local_198 != (undefined *)0xffffffff) {
    _ungetc((int)local_198,param_1);
  }
LAB_00402780:
  if (puVar11 == puVar7) {
LAB_00402bdc:
    if (local_1dc == 1) {
      _free(local_1c0);
    }
    FUN_004041a2(local_20);
    return;
  }
  if ((local_192 == '\0') && (local_1bc = local_1bc + 1, local_1c4 != 99)) {
    if (local_19a == '\0') {
      *(undefined *)local_1b4 = 0;
    }
    else {
      *(undefined2 *)local_1b4 = 0;
    }
  }
LAB_00402b38:
  local_199 = local_199 + '\x01';
  pbVar13 = param_2 + 1;
LAB_00402bbd:
  param_2 = pbVar13;
  if ((local_198 == (undefined *)0xffffffff) && ((*param_2 != 0x25 || (param_2[1] != 0x6e))))
  goto LAB_00402bdc;
  goto LAB_00401e02;
}



// Library Function - Single Match
//  __forcdecpt
// 
// Library: Visual Studio 2003 Release

void __cdecl __forcdecpt(char *_Buf)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = _tolower((int)*_Buf);
  if (iVar3 != 0x65) {
    do {
      _Buf = _Buf + 1;
      if (DAT_0040b4a0 < 2) {
        uVar4 = (byte)PTR_DAT_0040b490[*_Buf * 2] & 4;
      }
      else {
        uVar4 = __isctype((int)*_Buf,4);
      }
    } while (uVar4 != 0);
  }
  cVar2 = *_Buf;
  *_Buf = DAT_0040b4a4;
  do {
    _Buf = _Buf + 1;
    cVar1 = *_Buf;
    *_Buf = cVar2;
    cVar2 = cVar1;
  } while (*_Buf != '\0');
  return;
}



// Library Function - Single Match
//  __fassign
// 
// Library: Visual Studio 2003 Release

void __cdecl __fassign(int flag,char *argument,char *number)

{
  _CRT_FLOAT local_c;
  undefined4 local_8;
  
  if ((_CRT_FLOAT)flag != (_CRT_FLOAT)0x0) {
    FID_conflict___atodbl(&local_c,number);
    *(float *)argument = local_c;
    *(undefined4 *)(argument + 4) = local_8;
    return;
  }
  FID_conflict___atodbl((_CRT_FLOAT *)&flag,number);
  *(int *)argument = flag;
  return;
}



// Library Function - Single Match
//  __shift
// 
// Library: Visual Studio 2003 Release

void __shift(void)

{
  char *in_EAX;
  size_t sVar1;
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    sVar1 = _strlen(in_EAX);
    _memmove(in_EAX + unaff_EDI,in_EAX,sVar1 + 1);
  }
  return;
}



// Library Function - Single Match
//  __cftoe
// 
// Library: Visual Studio 2003 Release

errno_t __cdecl __cftoe(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

{
  int *_Digits;
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  STRFLT _PtFlt;
  
  _Digits = DAT_0040ba40;
  if (DAT_0040ba44 == '\0') {
    _PtFlt = *(STRFLT *)_Value;
    _Digits = (int *)__fltout((char)_PtFlt);
    __fptostr(_Buf + (uint)(0 < (int)_SizeInBytes) + (uint)(*_Digits == 0x2d),_SizeInBytes + 1,
              (int)_Digits,_PtFlt);
  }
  else {
    __shift();
  }
  pcVar1 = _Buf;
  if (*_Digits == 0x2d) {
    *_Buf = '-';
    pcVar1 = _Buf + 1;
  }
  pcVar2 = pcVar1;
  if (0 < (int)_SizeInBytes) {
    pcVar2 = pcVar1 + 1;
    *pcVar1 = *pcVar2;
    *pcVar2 = DAT_0040b4a4;
  }
  pcVar1 = _strcpy(pcVar2 + _SizeInBytes + (DAT_0040ba44 == '\0'),"e+000");
  if (_Dec != 0) {
    *pcVar1 = 'E';
  }
  if (*(char *)_Digits[3] != '0') {
    iVar3 = _Digits[1] + -1;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
      pcVar1[1] = '-';
    }
    if (99 < iVar3) {
      iVar4 = iVar3 / 100;
      iVar3 = iVar3 % 100;
      pcVar1[2] = pcVar1[2] + (char)iVar4;
    }
    if (9 < iVar3) {
      iVar4 = iVar3 / 10;
      iVar3 = iVar3 % 10;
      pcVar1[3] = pcVar1[3] + (char)iVar4;
    }
    pcVar1[4] = pcVar1[4] + (char)iVar3;
  }
  return (errno_t)_Buf;
}



// Library Function - Single Match
//  __cftof
// 
// Library: Visual Studio 2003 Release

errno_t __cdecl __cftof(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec)

{
  int *_Digits;
  int iVar1;
  char *pcVar2;
  STRFLT _PtFlt;
  
  _Digits = DAT_0040ba40;
  if (DAT_0040ba44 == '\0') {
    _PtFlt = *(STRFLT *)_Value;
    _Digits = (int *)__fltout((char)_PtFlt);
    __fptostr(_Buf + (*_Digits == 0x2d),_Digits[1] + _SizeInBytes,(int)_Digits,_PtFlt);
  }
  else {
    if (DAT_0040ba48 == _SizeInBytes) {
      iVar1 = (*DAT_0040ba40 == 0x2d) + DAT_0040ba48;
      _Buf[iVar1] = '0';
      (_Buf + iVar1)[1] = '\0';
    }
  }
  pcVar2 = _Buf;
  if (*_Digits == 0x2d) {
    *_Buf = '-';
    pcVar2 = _Buf + 1;
  }
  if (_Digits[1] < 1) {
    __shift();
    *pcVar2 = '0';
    pcVar2 = pcVar2 + 1;
  }
  else {
    pcVar2 = pcVar2 + _Digits[1];
  }
  if (0 < (int)_SizeInBytes) {
    __shift();
    *pcVar2 = DAT_0040b4a4;
    iVar1 = _Digits[1];
    if (iVar1 < 0) {
      if ((DAT_0040ba44 != '\0') ||
         (SBORROW4(_SizeInBytes,-iVar1) == (int)(_SizeInBytes + iVar1) < 0)) {
        _SizeInBytes = -iVar1;
      }
      __shift();
      _memset(pcVar2 + 1,0x30,_SizeInBytes);
    }
  }
  return (errno_t)_Buf;
}



// Library Function - Single Match
//  __cftog
// 
// Library: Visual Studio 2003 Release

void __cdecl __cftog(double *param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int unaff_EDI;
  char *pcVar4;
  STRFLT _PtFlt;
  
  _PtFlt = *(STRFLT *)param_1;
  DAT_0040ba40 = (int *)__fltout((char)_PtFlt);
  DAT_0040ba48 = DAT_0040ba40[1] + -1;
  iVar1 = *DAT_0040ba40;
  __fptostr(param_2 + (iVar1 == 0x2d),param_3,(int)DAT_0040ba40,_PtFlt);
  iVar3 = DAT_0040ba40[1] + -1;
  DAT_0040ba4c = DAT_0040ba48 < iVar3;
  DAT_0040ba48 = iVar3;
  if ((iVar3 < -4) || ((int)param_3 <= iVar3)) {
    DAT_0040ba44 = 1;
    __cftoe(param_1,param_2,param_3,param_4,unaff_EDI);
  }
  else {
    pcVar2 = param_2 + (iVar1 == 0x2d);
    if ((bool)DAT_0040ba4c) {
      do {
        pcVar4 = pcVar2;
        pcVar2 = pcVar4 + 1;
      } while (*pcVar4 != '\0');
      pcVar4[-1] = '\0';
    }
    DAT_0040ba44 = 1;
    __cftof(param_1,param_2,param_3,unaff_EDI);
  }
  DAT_0040ba44 = 0;
  return;
}



// Library Function - Single Match
//  __cfltcvt
// 
// Library: Visual Studio 2003 Release

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  errno_t eVar1;
  int unaff_EBP;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    eVar1 = __cftoe(arg,buffer,format,precision,unaff_EBP);
  }
  else {
    if (sizeInBytes == 0x66) {
      eVar1 = __cftof(arg,buffer,format,unaff_EBP);
      return eVar1;
    }
    eVar1 = __cftog(arg,buffer,format,precision);
  }
  return eVar1;
}



// Library Function - Single Match
//  __setdefaultprecision
// 
// Library: Visual Studio 2003 Release

void __setdefaultprecision(void)

{
  __controlfp(0x10000,0x30000);
  return;
}



// WARNING: Removing unreachable block (ram,0x0040304d)
// Library Function - Single Match
//  __ms_p5_test_fdiv
// 
// Library: Visual Studio 2003 Release

undefined4 __ms_p5_test_fdiv(void)

{
  return 0;
}



// Library Function - Single Match
//  __ms_p5_mp_test_fdiv
// 
// Library: Visual Studio 2003 Release

void __ms_p5_mp_test_fdiv(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  __ms_p5_test_fdiv();
  return;
}



void FUN_0040307f(UINT param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("mscoree.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"CorExitProcess");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
  }
                    // WARNING: Subroutine does not return
  ExitProcess(param_1);
}



// Library Function - Single Match
//  __cinit
// 
// Library: Visual Studio 2003 Release

int __cdecl __cinit(int param_1)

{
  int iVar1;
  code **ppcVar2;
  
  if (PTR___fpmath_0040b0ac != (undefined *)0x0) {
    (*(code *)PTR___fpmath_0040b0ac)(param_1);
  }
  iVar1 = 0;
  ppcVar2 = (code **)&DAT_0040b00c;
  do {
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*ppcVar2 != (code *)0x0) {
      iVar1 = (**ppcVar2)();
    }
    ppcVar2 = ppcVar2 + 1;
  } while (ppcVar2 < &DAT_0040b01c);
  if (iVar1 == 0) {
    _atexit(&LAB_00403b21);
    ppcVar2 = (code **)&DAT_0040b000;
    do {
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)();
      }
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 < &DAT_0040b008);
    iVar1 = 0;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _doexit
// 
// Library: Visual Studio 2003 Release

void __cdecl _doexit(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  code **ppcVar1;
  bool bVar2;
  UINT uExitCode;
  
  if (_DAT_0040ba9c == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_0040ba98 = 1;
  DAT_0040ba94 = (undefined)param_3;
  if (param_2 == 0) {
    if (DAT_0040bfe8 != (code **)0x0) {
      DAT_0040bfe4 = DAT_0040bfe4 + -1;
      bVar2 = DAT_0040bfe4 < DAT_0040bfe8;
      while (!bVar2) {
        if (*DAT_0040bfe4 != (code *)0x0) {
          (**DAT_0040bfe4)();
        }
        DAT_0040bfe4 = DAT_0040bfe4 + -1;
        bVar2 = DAT_0040bfe4 < DAT_0040bfe8;
      }
    }
    ppcVar1 = (code **)&DAT_0040b020;
    do {
      if (*ppcVar1 != (code *)0x0) {
        (**ppcVar1)();
      }
      ppcVar1 = ppcVar1 + 1;
    } while (ppcVar1 < &DAT_0040b028);
  }
  ppcVar1 = (code **)&DAT_0040b02c;
  do {
    if (*ppcVar1 != (code *)0x0) {
      (**ppcVar1)();
    }
    ppcVar1 = ppcVar1 + 1;
  } while (ppcVar1 < &DAT_0040b030);
  if (param_3 == 0) {
    _DAT_0040ba9c = 1;
    FUN_0040307f(param_1);
  }
  return;
}



// Library Function - Single Match
//  _exit
// 
// Library: Visual Studio 2003 Release

void __cdecl _exit(int _Code)

{
  _doexit(_Code,0,0);
  return;
}



// Library Function - Single Match
//  __exit
// 
// Library: Visual Studio 2003 Release

void __cdecl __exit(UINT param_1)

{
  _doexit(param_1,1,0);
  return;
}



// Library Function - Single Match
//  __cexit
// 
// Library: Visual Studio 2003 Release

void __cdecl __cexit(void)

{
  _doexit(0,0,1);
  return;
}



void FUN_0040320b(void)

{
  _doexit(0,1,1);
  return;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Unable to track spacebase fully for stack
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __NMSG_WRITE
// 
// Library: Visual Studio 2003 Release

void __cdecl __NMSG_WRITE(int param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  size_t sVar4;
  size_t sVar5;
  HANDLE hFile;
  int iVar6;
  char *pcVar7;
  undefined4 uStackY332;
  char *pcStackY324;
  UINT UStackY320;
  char *apcStackY316 [2];
  char *pcStackY308;
  LPDWORD lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  CHAR local_110 [260];
  undefined local_c;
  int local_8;
  
  local_8 = DAT_0040b498;
  uVar2 = 0;
  do {
    if (param_1 == (&DAT_0040b360)[uVar2 * 2]) break;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x13);
  iVar6 = uVar2 * 8;
  if (param_1 == (&DAT_0040b360)[uVar2 * 2]) {
    if ((DAT_0040ba30 == 1) || ((DAT_0040ba30 == 0 && (_DAT_0040b0bc == 1)))) {
      lpOverlapped = (LPOVERLAPPED)0x0;
      lpNumberOfBytesWritten = (LPDWORD)&param_1;
      sVar4 = _strlen(*(char **)(iVar6 + 0x40b364));
      pcVar7 = *(char **)(iVar6 + 0x40b364);
      pcStackY308 = (char *)0x40336e;
      hFile = GetStdHandle(0xfffffff4);
      pcStackY308 = (char *)0x403375;
      WriteFile(hFile,pcVar7,sVar4,lpNumberOfBytesWritten,lpOverlapped);
    }
    else {
      if (param_1 != 0xfc) {
        local_c = 0;
        DVar3 = GetModuleFileNameA((HMODULE)0x0,local_110,0x104);
        if (DVar3 == 0) {
          _strcpy(local_110,"<program name unknown>");
        }
        pcVar7 = local_110;
        sVar4 = _strlen(pcVar7);
        if (0x3c < sVar4 + 1) {
          sVar4 = _strlen(pcVar7);
          pcVar7 = (char *)((int)&uStackY332 + sVar4 + 1);
          _strncpy(pcVar7,"...",3);
        }
        sVar4 = _strlen(pcVar7);
        sVar5 = _strlen(*(char **)(iVar6 + 0x40b364));
        iVar1 = -(sVar4 + sVar5 + 0x1f & 0xfffffffc);
        *(char **)(local_110 + iVar1 + -0x10) = "Runtime Error!\n\nProgram: ";
        *(CHAR **)((int)&stack0xfffffedc + iVar1) = local_110 + iVar1 + -0xc;
        *(undefined4 *)(local_110 + iVar1 + -0x18) = 0x40331a;
        _strcpy(*(char **)(&stack0xfffffedc + iVar1),*(char **)(local_110 + iVar1 + -0x10));
        *(char **)(local_110 + iVar1 + -0x18) = pcVar7;
        *(CHAR **)((int)&stack0xfffffed4 + iVar1) = local_110 + iVar1 + -0xc;
        *(undefined4 *)(local_110 + iVar1 + -0x20) = 0x403321;
        _strcat(*(char **)(&stack0xfffffed4 + iVar1),*(char **)(local_110 + iVar1 + -0x18));
        *(undefined **)(local_110 + iVar1 + -0x20) = &DAT_004095a8;
        *(CHAR **)((int)&pcStackY308 + iVar1) = local_110 + iVar1 + -0xc;
        *(undefined4 *)((int)apcStackY316 + iVar1 + 4) = 0x40332c;
        _strcat(*(char **)((int)&pcStackY308 + iVar1),*(char **)(local_110 + iVar1 + -0x20));
        *(undefined4 *)((int)apcStackY316 + iVar1 + 4) = *(undefined4 *)(iVar6 + 0x40b364);
        *(CHAR **)((int)apcStackY316 + iVar1) = local_110 + iVar1 + -0xc;
        *(undefined4 *)((int)&UStackY320 + iVar1) = 0x403338;
        _strcat(*(char **)((int)apcStackY316 + iVar1),*(char **)((int)apcStackY316 + iVar1 + 4));
        *(undefined4 *)((int)&UStackY320 + iVar1) = 0x12010;
        *(char **)(&stack0xfffffeb8 + iVar1 + 4) = "Microsoft Visual C++ Runtime Library";
        *(CHAR **)((int)(&uStackY332 + 1) + iVar1) = local_110 + iVar1 + -0xc;
        *(undefined4 *)((int)&uStackY332 + iVar1) = 0x403348;
        ___crtMessageBoxA(*(LPCSTR *)((int)(&uStackY332 + 1) + iVar1),
                          *(LPCSTR *)(&stack0xfffffeb8 + iVar1 + 4),
                          *(UINT *)((int)&UStackY320 + iVar1));
      }
    }
  }
  FUN_004041a2(local_8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __FF_MSGBANNER
// 
// Library: Visual Studio 2003 Release

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_0040ba30 == 1) || ((DAT_0040ba30 == 0 && (_DAT_0040b0bc == 1)))) {
    __NMSG_WRITE(0xfc);
    if (DAT_0040baa0 != (code *)0x0) {
      (*DAT_0040baa0)();
    }
    __NMSG_WRITE(0xff);
  }
  return;
}



// Library Function - Single Match
//  __XcptFilter
// 
// Library: Visual Studio 2003 Release

int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  code *pcVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong *puVar6;
  undefined4 *puVar7;
  
  uVar4 = DAT_0040baa4;
  puVar6 = &DAT_0040b3f8;
  do {
    if (*puVar6 == _ExceptionNum) break;
    puVar6 = puVar6 + 3;
  } while (puVar6 < &DAT_0040b3f8 + DAT_0040b478 * 3);
  if ((&DAT_0040b3f8 + DAT_0040b478 * 3 <= puVar6) || (*puVar6 != _ExceptionNum)) {
    puVar6 = (ulong *)0x0;
  }
  if ((puVar6 == (ulong *)0x0) || (pcVar1 = (code *)puVar6[2], pcVar1 == (code *)0x0)) {
    iVar5 = UnhandledExceptionFilter(_ExceptionPtr);
  }
  else {
    if (pcVar1 == (code *)0x5) {
      puVar6[2] = 0;
      iVar5 = 1;
    }
    else {
      if (pcVar1 != (code *)0x1) {
        DAT_0040baa4 = _ExceptionPtr;
        if (puVar6[1] == 8) {
          if (DAT_0040b470 < DAT_0040b474 + DAT_0040b470) {
            puVar7 = (undefined4 *)(DAT_0040b470 * 0xc + 0x40b400);
            iVar5 = (DAT_0040b474 + DAT_0040b470) - DAT_0040b470;
            do {
              *puVar7 = 0;
              puVar7 = puVar7 + 3;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          uVar3 = DAT_0040b47c;
          uVar2 = *puVar6;
          if (uVar2 == 0xc000008e) {
            DAT_0040b47c = 0x83;
          }
          else {
            if (uVar2 == 0xc0000090) {
              DAT_0040b47c = 0x81;
            }
            else {
              if (uVar2 == 0xc0000091) {
                DAT_0040b47c = 0x84;
              }
              else {
                if (uVar2 == 0xc0000093) {
                  DAT_0040b47c = 0x85;
                }
                else {
                  if (uVar2 == 0xc000008d) {
                    DAT_0040b47c = 0x82;
                  }
                  else {
                    if (uVar2 == 0xc000008f) {
                      DAT_0040b47c = 0x86;
                    }
                    else {
                      if (uVar2 == 0xc0000092) {
                        DAT_0040b47c = 0x8a;
                      }
                    }
                  }
                }
              }
            }
          }
          (*pcVar1)(8,DAT_0040b47c);
          DAT_0040b47c = uVar3;
        }
        else {
          puVar6[2] = 0;
          (*pcVar1)(puVar6[1]);
        }
      }
      iVar5 = -1;
      DAT_0040baa4 = (_EXCEPTION_POINTERS *)uVar4;
    }
  }
  return iVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __setenvp
// 
// Library: Visual Studio 2003 Release

int __cdecl __setenvp(void)

{
  char **ppcVar1;
  size_t sVar2;
  char *_Dest;
  char *pcVar3;
  int iVar4;
  
  if (_DAT_0040bfec == 0) {
    ___initmbctable();
  }
  iVar4 = 0;
  pcVar3 = DAT_0040ba28;
  if (DAT_0040ba28 != (char *)0x0) {
    for (; *pcVar3 != '\0'; pcVar3 = pcVar3 + sVar2 + 1) {
      if (*pcVar3 != '=') {
        iVar4 = iVar4 + 1;
      }
      sVar2 = _strlen(pcVar3);
    }
    ppcVar1 = (char **)_malloc(iVar4 * 4 + 4);
    pcVar3 = DAT_0040ba28;
    DAT_0040ba7c = ppcVar1;
    if (ppcVar1 != (char **)0x0) {
      do {
        if (*pcVar3 == '\0') {
          _free(DAT_0040ba28);
          DAT_0040ba28 = (char *)0x0;
          *ppcVar1 = (char *)0x0;
          _DAT_0040bfe0 = 1;
          return 0;
        }
        sVar2 = _strlen(pcVar3);
        if (*pcVar3 != '=') {
          _Dest = (char *)_malloc(sVar2 + 1);
          *ppcVar1 = _Dest;
          if (_Dest == (char *)0x0) {
            _free(DAT_0040ba7c);
            DAT_0040ba7c = (char **)0x0;
            return -1;
          }
          _strcpy(_Dest,pcVar3);
          ppcVar1 = ppcVar1 + 1;
        }
        pcVar3 = pcVar3 + sVar2 + 1;
      } while( true );
    }
  }
  return -1;
}



// Library Function - Single Match
//  _parse_cmdline
// 
// Library: Visual Studio 2003 Release

void __thiscall _parse_cmdline(void *this,byte **param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  byte *in_EAX;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  int *unaff_ESI;
  
  bVar1 = false;
  *unaff_ESI = 0;
  *param_2 = 1;
  if (param_1 != (byte **)0x0) {
    *param_1 = (byte *)this;
    param_1 = param_1 + 1;
  }
  do {
    if (*in_EAX == 0x22) {
      bVar1 = !bVar1;
      pbVar3 = in_EAX + 1;
      bVar5 = 0x22;
    }
    else {
      *unaff_ESI = *unaff_ESI + 1;
      if ((byte *)this != (byte *)0x0) {
        *(byte *)this = *in_EAX;
        this = (void *)((int)this + 1);
      }
      bVar5 = *in_EAX;
      pbVar3 = in_EAX + 1;
      if ((*(byte *)((int)&DAT_0040bca0 + bVar5 + 1) & 4) != 0) {
        *unaff_ESI = *unaff_ESI + 1;
        if ((byte *)this != (byte *)0x0) {
          *(byte *)this = *pbVar3;
          this = (void *)((int)this + 1);
        }
        pbVar3 = in_EAX + 2;
      }
      if (bVar5 == 0) {
        pbVar3 = pbVar3 + -1;
        goto LAB_0040367b;
      }
    }
    in_EAX = pbVar3;
  } while ((bVar1) || ((bVar5 != 0x20 && (bVar5 != 9))));
  if ((byte *)this != (byte *)0x0) {
    *(byte *)((int)this + -1) = 0;
  }
LAB_0040367b:
  bVar1 = false;
  while (*pbVar3 != 0) {
    for (; (*pbVar3 == 0x20 || (*pbVar3 == 9)); pbVar3 = pbVar3 + 1) {
    }
    if (*pbVar3 == 0) break;
    if (param_1 != (byte **)0x0) {
      *param_1 = (byte *)this;
      param_1 = param_1 + 1;
    }
    *param_2 = *param_2 + 1;
    while( true ) {
      bVar2 = true;
      uVar6 = 0;
      for (; *pbVar3 == 0x5c; pbVar3 = pbVar3 + 1) {
        uVar6 = uVar6 + 1;
      }
      if (*pbVar3 == 0x22) {
        pbVar4 = pbVar3;
        if ((uVar6 & 1) == 0) {
          if ((!bVar1) || (pbVar4 = pbVar3 + 1, *pbVar4 != 0x22)) {
            bVar2 = false;
            pbVar4 = pbVar3;
          }
          bVar1 = !bVar1;
        }
        uVar6 = uVar6 >> 1;
        pbVar3 = pbVar4;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if ((byte *)this != (byte *)0x0) {
          *(byte *)this = 0x5c;
          this = (void *)((int)this + 1);
        }
        *unaff_ESI = *unaff_ESI + 1;
      }
      bVar5 = *pbVar3;
      if ((bVar5 == 0) || ((!bVar1 && ((bVar5 == 0x20 || (bVar5 == 9)))))) break;
      if (bVar2) {
        if ((byte *)this == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_0040bca0 + bVar5 + 1) & 4) != 0) {
            pbVar3 = pbVar3 + 1;
            *unaff_ESI = *unaff_ESI + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_0040bca0 + bVar5 + 1) & 4) != 0) {
            *(byte *)this = bVar5;
            this = (void *)((int)this + 1);
            pbVar3 = pbVar3 + 1;
            *unaff_ESI = *unaff_ESI + 1;
          }
          *(byte *)this = *pbVar3;
          this = (void *)((int)this + 1);
        }
        *unaff_ESI = *unaff_ESI + 1;
      }
      pbVar3 = pbVar3 + 1;
    }
    if ((byte *)this != (byte *)0x0) {
      *(byte *)this = 0;
      this = (void *)((int)this + 1);
    }
    *unaff_ESI = *unaff_ESI + 1;
  }
  if (param_1 != (byte **)0x0) {
    *param_1 = (byte *)0x0;
  }
  *param_2 = *param_2 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __setargv
// 
// Library: Visual Studio 2003 Release

int __cdecl __setargv(void)

{
  byte **ppbVar1;
  int iVar2;
  int in_ECX;
  int local_8;
  
  local_8 = in_ECX;
  if (_DAT_0040bfec == 0) {
    ___initmbctable();
  }
  DAT_0040bbac = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_0040baa8,0x104);
  _DAT_0040ba8c = &DAT_0040baa8;
  _parse_cmdline((void *)0x0,(byte **)0x0,&local_8);
  iVar2 = local_8;
  ppbVar1 = (byte **)_malloc(in_ECX + local_8 * 4);
  if (ppbVar1 == (byte **)0x0) {
    iVar2 = -1;
  }
  else {
    _parse_cmdline(ppbVar1 + iVar2,ppbVar1,&local_8);
    DAT_0040ba70 = local_8 + -1;
    iVar2 = 0;
    DAT_0040ba74 = ppbVar1;
  }
  return iVar2;
}



// Library Function - Single Match
//  ___crtGetEnvironmentStringsA
// 
// Library: Visual Studio 2003 Release

LPVOID __cdecl ___crtGetEnvironmentStringsA(void)

{
  char cVar1;
  WCHAR WVar2;
  DWORD DVar3;
  WCHAR *pWVar4;
  int iVar6;
  size_t _Size;
  LPSTR pCVar7;
  LPCH _Src;
  char *pcVar8;
  LPWCH lpWideCharStr;
  LPSTR local_8;
  WCHAR *pWVar5;
  char *pcVar9;
  
  lpWideCharStr = (LPWCH)0x0;
  if (DAT_0040bbb0 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_0040bbb0 = 1;
      goto LAB_0040385e;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_0040bbb0 = 2;
    }
  }
  if (DAT_0040bbb0 != 1) {
    if ((DAT_0040bbb0 != 2) && (DAT_0040bbb0 != 0)) {
      return (LPSTR)0x0;
    }
    _Src = GetEnvironmentStrings();
    if (_Src == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    cVar1 = *_Src;
    pcVar8 = _Src;
    while (cVar1 != '\0') {
      do {
        pcVar9 = pcVar8;
        pcVar8 = pcVar9 + 1;
      } while (*pcVar8 != '\0');
      pcVar8 = pcVar9 + 2;
      cVar1 = *pcVar8;
    }
    pCVar7 = (LPSTR)_malloc((size_t)(pcVar8 + (1 - (int)_Src)));
    if (pCVar7 == (LPSTR)0x0) {
      pCVar7 = (LPSTR)0x0;
    }
    else {
      _memcpy(pCVar7,_Src,(size_t)(pcVar8 + (1 - (int)_Src)));
    }
    FreeEnvironmentStringsA(_Src);
    return pCVar7;
  }
LAB_0040385e:
  if ((lpWideCharStr == (LPWCH)0x0) &&
     (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
    return (LPSTR)0x0;
  }
  WVar2 = *lpWideCharStr;
  pWVar4 = lpWideCharStr;
  while (WVar2 != L'\0') {
    do {
      pWVar5 = pWVar4;
      pWVar4 = pWVar5 + 1;
    } while (*pWVar4 != L'\0');
    pWVar4 = pWVar5 + 2;
    WVar2 = *pWVar4;
  }
  iVar6 = ((int)pWVar4 - (int)lpWideCharStr >> 1) + 1;
  _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  local_8 = (LPSTR)0x0;
  if (((_Size != 0) && (pCVar7 = (LPSTR)_malloc(_Size), pCVar7 != (LPSTR)0x0)) &&
     (iVar6 = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,pCVar7,_Size,(LPCSTR)0x0,(LPBOOL)0x0),
     local_8 = pCVar7, iVar6 == 0)) {
    _free(pCVar7);
    local_8 = (LPSTR)0x0;
  }
  FreeEnvironmentStringsW(lpWideCharStr);
  return local_8;
}



// Library Function - Single Match
//  __ioinit
// 
// Library: Visual Studio 2003 Release

int __cdecl __ioinit(void)

{
  HANDLE *ppvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  HANDLE hFile;
  HANDLE *ppvVar7;
  UINT UVar8;
  UINT UVar9;
  uint uVar10;
  _STARTUPINFOA local_44;
  
  puVar3 = (undefined4 *)_malloc(0x100);
  if (puVar3 == (undefined4 *)0x0) {
    iVar4 = -1;
  }
  else {
    DAT_0040bec8 = 0x20;
    DAT_0040bee0 = puVar3;
    for (; puVar3 < DAT_0040bee0 + 0x40; puVar3 = puVar3 + 2) {
      *puVar3 = 0xffffffff;
      *(undefined *)(puVar3 + 1) = 0;
      *(undefined *)((int)puVar3 + 5) = 10;
    }
    GetStartupInfoA((LPSTARTUPINFOA)&local_44);
    if ((local_44.cbReserved2 != 0) && ((UINT *)local_44.lpReserved2 != (UINT *)0x0)) {
      UVar8 = *(UINT *)local_44.lpReserved2;
      local_44.lpReserved2 = (LPBYTE)((int)local_44.lpReserved2 + 4);
      ppvVar7 = (HANDLE *)(UVar8 + (int)local_44.lpReserved2);
      if (0x7ff < (int)UVar8) {
        UVar8 = 0x800;
      }
      UVar9 = UVar8;
      if ((int)DAT_0040bec8 < (int)UVar8) {
        puVar3 = &DAT_0040bee4;
        do {
          puVar5 = (undefined4 *)_malloc(0x100);
          UVar9 = DAT_0040bec8;
          if (puVar5 == (undefined4 *)0x0) break;
          DAT_0040bec8 = DAT_0040bec8 + 0x20;
          *puVar3 = puVar5;
          puVar2 = puVar5;
          for (; puVar5 < puVar2 + 0x40; puVar5 = puVar5 + 2) {
            *puVar5 = 0xffffffff;
            *(undefined *)(puVar5 + 1) = 0;
            *(undefined *)((int)puVar5 + 5) = 10;
            puVar2 = (undefined4 *)*puVar3;
          }
          puVar3 = puVar3 + 1;
          UVar9 = UVar8;
        } while ((int)DAT_0040bec8 < (int)UVar8);
      }
      uVar10 = 0;
      if (0 < (int)UVar9) {
        do {
          if (((*ppvVar7 != (HANDLE)0xffffffff) && ((*local_44.lpReserved2 & 1) != 0)) &&
             (((*local_44.lpReserved2 & 8) != 0 || (DVar6 = GetFileType(*ppvVar7), DVar6 != 0)))) {
            ppvVar1 = (HANDLE *)((int)(&DAT_0040bee0)[(int)uVar10 >> 5] + (uVar10 & 0x1f) * 8);
            *ppvVar1 = *ppvVar7;
            *(BYTE *)(ppvVar1 + 1) = *local_44.lpReserved2;
          }
          uVar10 = uVar10 + 1;
          local_44.lpReserved2 = (LPBYTE)((int)local_44.lpReserved2 + 1);
          ppvVar7 = ppvVar7 + 1;
        } while ((int)uVar10 < (int)UVar9);
      }
    }
    iVar4 = 0;
    do {
      ppvVar7 = (HANDLE *)(DAT_0040bee0 + iVar4 * 2);
      if (*ppvVar7 == (HANDLE)0xffffffff) {
        *(undefined *)(ppvVar7 + 1) = 0x81;
        if (iVar4 == 0) {
          DVar6 = 0xfffffff6;
        }
        else {
          DVar6 = 0xfffffff5 - (iVar4 != 1);
        }
        hFile = GetStdHandle(DVar6);
        if ((hFile != (HANDLE)0xffffffff) && (DVar6 = GetFileType(hFile), DVar6 != 0)) {
          *ppvVar7 = hFile;
          if ((DVar6 & 0xff) != 2) {
            if ((DVar6 & 0xff) == 3) {
              *(byte *)(ppvVar7 + 1) = *(byte *)(ppvVar7 + 1) | 8;
            }
            goto LAB_00403ac2;
          }
        }
        *(byte *)(ppvVar7 + 1) = *(byte *)(ppvVar7 + 1) | 0x40;
      }
      else {
        *(byte *)(ppvVar7 + 1) = *(byte *)(ppvVar7 + 1) | 0x80;
      }
LAB_00403ac2:
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    SetHandleCount(DAT_0040bec8);
    iVar4 = 0;
  }
  return iVar4;
}



// WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog
// WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3
// Library Function - Single Match
//  __RTC_Initialize
// 
// Library: Visual Studio 2003 Release

void __RTC_Initialize(void)

{
  code **local_20;
  
  for (local_20 = (code **)&DAT_00409dfc; local_20 < &DAT_00409dfc; local_20 = local_20 + 1) {
    if (*local_20 != (code *)0x0) {
      (**local_20)();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___heap_select
// 
// Library: Visual Studio 2003 Release

undefined4 ___heap_select(void)

{
  if ((DAT_0040ba5c == 2) && (4 < _DAT_0040ba68)) {
    return 1;
  }
  return 3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __heap_init
// 
// Library: Visual Studio 2003 Release

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  DAT_0040bec0 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_0040bec0 == (HANDLE)0x0) {
    return 0;
  }
  _DAT_0040bec4 = ___heap_select();
  if ((_DAT_0040bec4 == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(DAT_0040bec0);
    return 0;
  }
  return 1;
}



// WARNING: This is an inlined function
// WARNING: Unable to track spacebase fully for stack
// WARNING: Variable defined which should be unmapped: param_2
// Library Function - Single Match
//  __SEH_prolog
// 
// Library: Visual Studio

void __cdecl __SEH_prolog(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *in_FS_OFFSET;
  undefined4 unaff_retaddr;
  undefined4 auStack24 [4];
  undefined local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack24 + iVar1 + 0xc) = unaff_EBX;
  *(undefined4 *)((int)auStack24 + iVar1 + 8) = unaff_ESI;
  *(undefined4 *)((int)auStack24 + iVar1 + 4) = unaff_EDI;
  *(undefined4 *)((int)auStack24 + iVar1) = unaff_retaddr;
  *in_FS_OFFSET = (int)local_8;
  return;
}



// WARNING: This is an inlined function
// Library Function - Single Match
//  __SEH_epilog
// 
// Library: Visual Studio

void __SEH_epilog(void)

{
  undefined4 *unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 unaff_retaddr;
  
  *in_FS_OFFSET = unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}



void FUN_00403d0a(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// WARNING: This is an inlined function
// WARNING: Unable to track spacebase fully for stack
// Library Function - Single Match
//  __chkstk
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release

void __chkstk(undefined1 param_1)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  if (in_EAX < 0x1000) {
    *(undefined4 *)(&stack0x00000000 + -in_EAX) = unaff_retaddr;
    return;
  }
  puVar1 = &param_1;
  do {
    puVar1 = puVar1 + -0x1000;
    in_EAX = in_EAX - 0x1000;
  } while (0xfff < in_EAX);
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __heap_alloc
// 
// Library: Visual Studio 2003 Release

void * __cdecl __heap_alloc(size_t _Size)

{
  int *piVar1;
  
  if (((_DAT_0040bec4 == 3) && (_Size <= _DAT_0040bc84)) &&
     (piVar1 = ___sbh_alloc_block((uint *)_Size), piVar1 != (int *)0x0)) {
    return piVar1;
  }
  if (_Size == 0) {
    _Size = 1;
  }
  if (_DAT_0040bec4 != 1) {
    _Size = _Size + 0xf & 0xfffffff0;
  }
  piVar1 = (int *)HeapAlloc(DAT_0040bec0,0,_Size);
  return piVar1;
}



// Library Function - Single Match
//  __nh_malloc
// 
// Library: Visual Studio 2003 Release

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = __heap_alloc(_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = __callnewh(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Library Function - Single Match
//  _malloc
// 
// Library: Visual Studio 2003 Release

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_0040bc48);
  return pvVar1;
}



// Library Function - Single Match
//  __isatty
// 
// Library: Visual Studio 2003 Release

int __cdecl __isatty(int _FileHandle)

{
  if (DAT_0040bec8 <= (uint)_FileHandle) {
    return 0;
  }
  return (int)*(char *)((&DAT_0040bee0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 8) & 0x40;
}



// Library Function - Single Match
//  __flush
// 
// Library: Visual Studio 2003 Release

int __cdecl __flush(FILE *_File)

{
  uint uVar1;
  int iVar2;
  uint _MaxCharCount;
  
  iVar2 = 0;
  if ((((byte)_File->_flag & 3) == 2) && ((_File->_flag & 0x108U) != 0)) {
    _MaxCharCount = (int)_File->_ptr - (int)_File->_base;
    if (0 < (int)_MaxCharCount) {
      uVar1 = __write(_File->_file,_File->_base,_MaxCharCount);
      if (uVar1 == _MaxCharCount) {
        if ((char)_File->_flag < '\0') {
          _File->_flag = _File->_flag & 0xfffffffd;
        }
      }
      else {
        _File->_flag = _File->_flag | 0x20;
        iVar2 = -1;
      }
    }
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return iVar2;
}



// Library Function - Single Match
//  _fflush
// 
// Library: Visual Studio 2003 Release

int __cdecl _fflush(FILE *_File)

{
  int iVar1;
  
  if (_File == (FILE *)0x0) {
    iVar1 = _flsall(0);
    return iVar1;
  }
  iVar1 = __flush(_File);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)&_File->_flag + 1) & 0x40) != 0) {
    iVar1 = __commit(_File->_file);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



// Library Function - Single Match
//  _flsall
// 
// Library: Visual Studio 2003 Release

int __cdecl _flsall(int param_1)

{
  FILE *_File;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar2 = 0;
  iVar4 = 0;
  if (0 < DAT_0040d000) {
    do {
      _File = *(FILE **)(DAT_0040bff0 + iVar3 * 4);
      if ((_File != (FILE *)0x0) && ((_File->_flag & 0x83U) != 0)) {
        if (param_1 == 1) {
          iVar1 = _fflush(_File);
          if (iVar1 != -1) {
            iVar2 = iVar2 + 1;
          }
        }
        else {
          if ((param_1 == 0) && ((_File->_flag & 2U) != 0)) {
            iVar1 = _fflush(_File);
            if (iVar1 == -1) {
              iVar4 = -1;
            }
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_0040d000);
  }
  if (param_1 != 1) {
    iVar2 = iVar4;
  }
  return iVar2;
}



// Library Function - Single Match
//  __flsbuf
// 
// Library: Visual Studio 2003 Release

int __cdecl __flsbuf(int _Ch,FILE *_File)

{
  uint uVar1;
  uint _FileHandle;
  char *_Buf;
  char *pcVar2;
  FILE *_File_00;
  int iVar3;
  undefined *puVar4;
  FILE *_MaxCharCount;
  
  _File_00 = _File;
  uVar1 = _File->_flag;
  _FileHandle = _File->_file;
  if (((uVar1 & 0x82) == 0) || ((uVar1 & 0x40) != 0)) {
LAB_0040402f:
    _File->_flag = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      _File->_cnt = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_0040402f;
      _File->_ptr = _File->_base;
      _File->_flag = uVar1 & 0xfffffffe;
    }
    uVar1 = _File->_flag;
    _File->_cnt = 0;
    _File = (FILE *)0x0;
    _File_00->_flag = uVar1 & 0xffffffef | 2;
    if (((uVar1 & 0x10c) == 0) &&
       (((_File_00 != (FILE *)&DAT_0040b0e8 && (_File_00 != (FILE *)&DAT_0040b108)) ||
        (iVar3 = __isatty(_FileHandle), iVar3 == 0)))) {
      __getbuf(_File_00);
    }
    if ((*(ushort *)&_File_00->_flag & 0x108) == 0) {
      _MaxCharCount = (FILE *)0x1;
      _File = (FILE *)__write(_FileHandle,&_Ch,1);
    }
    else {
      _Buf = _File_00->_base;
      pcVar2 = _File_00->_ptr;
      _File_00->_ptr = _Buf + 1;
      _MaxCharCount = (FILE *)(pcVar2 + -(int)_Buf);
      _File_00->_cnt = _File_00->_bufsiz + -1;
      if ((int)_MaxCharCount < 1) {
        if (_FileHandle == 0xffffffff) {
          puVar4 = &DAT_0040b480;
        }
        else {
          puVar4 = (undefined *)((&DAT_0040bee0)[(int)_FileHandle >> 5] + (_FileHandle & 0x1f) * 8);
        }
        if ((puVar4[4] & 0x20) != 0) {
          __lseek(_FileHandle,0,2);
        }
      }
      else {
        _File = (FILE *)__write(_FileHandle,_Buf,(uint)_MaxCharCount);
      }
      *_File_00->_base = (char)_Ch;
    }
    if (_File == _MaxCharCount) {
      return _Ch & 0xff;
    }
    _File_00->_flag = _File_00->_flag | 0x20;
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _free
// 
// Library: Visual Studio 2003 Release

void __cdecl _free(void *_Memory)

{
  uint *puVar1;
  
  if (_Memory != (void *)0x0) {
    if (_DAT_0040bec4 == 3) {
      puVar1 = (uint *)___sbh_find_block((int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
        return;
      }
    }
    HeapFree(DAT_0040bec0,0,_Memory);
  }
  return;
}



// Library Function - Single Match
//  _strlen
// 
// Library: Visual Studio

size_t __cdecl _strlen(char *_Str)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  uVar2 = (uint)_Str & 3;
  puVar3 = (uint *)_Str;
  while (uVar2 != 0) {
    cVar1 = *(char *)puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
    if (cVar1 == '\0') goto LAB_004040e3;
    uVar2 = (uint)puVar3 & 3;
  }
  do {
    do {
      puVar4 = puVar3;
      puVar3 = puVar4 + 1;
    } while (((*puVar4 ^ 0xffffffff ^ *puVar4 + 0x7efefeff) & 0x81010100) == 0);
    uVar2 = *puVar4;
    if ((char)uVar2 == '\0') {
      return (size_t)((int)puVar4 - (int)_Str);
    }
    if ((char)(uVar2 >> 8) == '\0') {
      return (size_t)((int)puVar4 + (1 - (int)_Str));
    }
    if ((uVar2 & 0xff0000) == 0) {
      return (size_t)((int)puVar4 + (2 - (int)_Str));
    }
  } while ((uVar2 & 0xff000000) != 0);
LAB_004040e3:
  return (size_t)((int)puVar3 + (-1 - (int)_Str));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _wctomb
// 
// Library: Visual Studio 2003 Release

int __cdecl _wctomb(char *_MbCh,wchar_t _WCh)

{
  char *lpMultiByteStr;
  int iVar1;
  
  lpMultiByteStr = _MbCh;
  if (_MbCh == (char *)0x0) {
    iVar1 = 0;
  }
  else {
    if (DAT_0040bc54 == 0) {
      if ((ushort)_WCh < 0x100) {
        *_MbCh = (char)_WCh;
        return 1;
      }
    }
    else {
      _MbCh = (char *)0x0;
      iVar1 = WideCharToMultiByte(DAT_0040bc64,0,&_WCh,1,lpMultiByteStr,DAT_0040b4a0,(LPCSTR)0x0,
                                  (LPBOOL)&_MbCh);
      if ((iVar1 != 0) && (_MbCh == (char *)0x0)) {
        return iVar1;
      }
    }
    _DAT_0040ba50 = 0x2a;
    iVar1 = -1;
  }
  return iVar1;
}



// WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog

void __fastcall FUN_004041a2(int param_1)

{
  if (param_1 == DAT_0040b498) {
    return;
  }
  ___security_error_handler(1);
                    // WARNING: Subroutine does not return
  ExitProcess(3);
}



// Library Function - Single Match
//  __aulldvrm
// 
// Library: Visual Studio 2003 Release

undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _calloc
// 
// Library: Visual Studio 2003 Release

void * __cdecl _calloc(size_t _Count,size_t _Size)

{
  int iVar1;
  uint *_Size_00;
  uint *dwBytes;
  int *piVar2;
  
  _Size_00 = (uint *)(_Count * _Size);
  dwBytes = _Size_00;
  if (_Size_00 == (uint *)0x0) {
    dwBytes = (uint *)0x1;
  }
  do {
    piVar2 = (int *)0x0;
    if (dwBytes < (uint *)0xffffffe1) {
      if (((_DAT_0040bec4 == 3) &&
          (dwBytes = (uint *)((int)dwBytes + 0xfU & 0xfffffff0),
          _Size_00 < _DAT_0040bc84 || (int)_Size_00 - (int)_DAT_0040bc84 == 0)) &&
         (piVar2 = ___sbh_alloc_block(_Size_00), piVar2 != (int *)0x0)) {
        _memset(piVar2,0,(size_t)_Size_00);
        return piVar2;
      }
      piVar2 = (int *)HeapAlloc(DAT_0040bec0,8,(SIZE_T)dwBytes);
      if (piVar2 != (int *)0x0) {
        return piVar2;
      }
    }
    if (DAT_0040bc48 == 0) {
      return piVar2;
    }
    iVar1 = __callnewh((size_t)dwBytes);
  } while (iVar1 != 0);
  return (int *)0x0;
}



// Library Function - Single Match
//  __isctype
// 
// Library: Visual Studio 2003 Release

int __cdecl __isctype(int _C,int _Type)

{
  LPCSTR _LpSrcStr;
  BOOL BVar1;
  uint in_ECX;
  uint local_8;
  
  if (_C + 1U < 0x101) {
    _C._2_2_ = *(ushort *)(PTR_DAT_0040b490 + _C * 2);
  }
  else {
    if ((PTR_DAT_0040b490[(_C >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = in_ECX & 0xffff0000 | _C & 0xffU;
      _LpSrcStr = (LPCSTR)0x1;
    }
    else {
      local_8 = (uint)CONCAT11((char)_C,(char)((uint)_C >> 8));
      local_8 = in_ECX & 0xff000000 | local_8;
      _LpSrcStr = (LPCSTR)0x2;
    }
    BVar1 = ___crtGetStringTypeA
                      ((_locale_t)0x1,(DWORD)&local_8,_LpSrcStr,(int)&_C + 2,DAT_0040bc64,
                       DAT_0040bc54,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return (uint)_C._2_2_ & _Type;
}



// Library Function - Single Match
//  __filbuf
// 
// Library: Visual Studio 2003 Release

int __cdecl __filbuf(FILE *_File)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  uVar2 = _File->_flag;
  if (((uVar2 & 0x83) != 0) && ((uVar2 & 0x40) == 0)) {
    if ((uVar2 & 2) == 0) {
      _File->_flag = uVar2 | 1;
      if ((uVar2 & 0x10c) == 0) {
        __getbuf(_File);
      }
      else {
        _File->_ptr = _File->_base;
      }
      iVar3 = __read(_File->_file,_File->_base,_File->_bufsiz);
      _File->_cnt = iVar3;
      if ((iVar3 != 0) && (iVar3 != -1)) {
        if ((_File->_flag & 0x82U) == 0) {
          uVar2 = _File->_file;
          if (uVar2 == 0xffffffff) {
            puVar4 = &DAT_0040b480;
          }
          else {
            puVar4 = (undefined *)((&DAT_0040bee0)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 8);
          }
          if ((puVar4[4] & 0x82) == 0x82) {
            _File->_flag = _File->_flag | 0x2000;
          }
        }
        if (((_File->_bufsiz == 0x200) && ((_File->_flag & 8U) != 0)) &&
           ((_File->_flag & 0x400U) == 0)) {
          _File->_bufsiz = 0x1000;
        }
        _File->_cnt = iVar3 + -1;
        bVar1 = *_File->_ptr;
        _File->_ptr = _File->_ptr + 1;
        return (uint)bVar1;
      }
      _File->_flag = _File->_flag | (-(uint)(iVar3 != 0) & 0x10) + 0x10;
      _File->_cnt = 0;
    }
    else {
      _File->_flag = uVar2 | 0x20;
    }
  }
  return 0xffffffff;
}



// Library Function - Single Match
//  _ungetc
// 
// Library: Visual Studio 2003 Release

int __cdecl _ungetc(int _Ch,FILE *_File)

{
  uint uVar1;
  char *pcVar2;
  
  if (_Ch != -1) {
    uVar1 = _File->_flag;
    if (((uVar1 & 1) != 0) || (((char)uVar1 < '\0' && ((uVar1 & 2) == 0)))) {
      if (_File->_base == (char *)0x0) {
        __getbuf(_File);
      }
      if (_File->_ptr == _File->_base) {
        if (_File->_cnt != 0) {
          return 0xffffffff;
        }
        _File->_ptr = _File->_ptr + 1;
      }
      _File->_ptr = _File->_ptr + -1;
      pcVar2 = _File->_ptr;
      if ((*(byte *)&_File->_flag & 0x40) == 0) {
        *pcVar2 = (char)_Ch;
      }
      else {
        if (*pcVar2 != (char)_Ch) {
          _File->_ptr = pcVar2 + 1;
          return 0xffffffff;
        }
      }
      _File->_cnt = _File->_cnt + 1;
      _File->_flag = _File->_flag & 0xffffffefU | 1;
      return _Ch & 0xff;
    }
  }
  return 0xffffffff;
}



// Library Function - Single Match
//  _isspace
// 
// Library: Visual Studio 2003 Release

int __cdecl _isspace(int _C)

{
  uint uVar1;
  
  if (1 < DAT_0040b4a0) {
    uVar1 = __isctype(_C,8);
    return uVar1;
  }
  return (byte)PTR_DAT_0040b490[_C * 2] & 8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _mbtowc
// 
// Library: Visual Studio 2003 Release

int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  byte bVar1;
  int iVar2;
  
  if ((_SrcCh != (char *)0x0) && (_SrcSizeInBytes != 0)) {
    bVar1 = *_SrcCh;
    if (bVar1 != 0) {
      if (DAT_0040bc54 == 0) {
        if (_DstCh != (wchar_t *)0x0) {
          *_DstCh = (ushort)bVar1;
        }
        return 1;
      }
      if ((PTR_DAT_0040b490[(uint)bVar1 * 2 + 1] & 0x80) == 0) {
        iVar2 = MultiByteToWideChar(DAT_0040bc64,9,_SrcCh,1,_DstCh,(uint)(_DstCh != (wchar_t *)0x0))
        ;
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        if (((1 < (int)DAT_0040b4a0) && ((int)DAT_0040b4a0 <= (int)_SrcSizeInBytes)) &&
           (iVar2 = MultiByteToWideChar(DAT_0040bc64,9,_SrcCh,DAT_0040b4a0,_DstCh,
                                        (uint)(_DstCh != (wchar_t *)0x0)), iVar2 != 0)) {
          return DAT_0040b4a0;
        }
        if ((DAT_0040b4a0 <= _SrcSizeInBytes) && (_SrcCh[1] != '\0')) {
          return DAT_0040b4a0;
        }
      }
      _DAT_0040ba50 = 0x2a;
      return 0xffffffff;
    }
    if (_DstCh != (wchar_t *)0x0) {
      *_DstCh = L'\0';
    }
  }
  return 0;
}



// Library Function - Single Match
//  _memset
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release, Visual Studio 2019 Release

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar4 = (uint *)_Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(undefined *)puVar4 = (undefined)_Val;
        puVar4 = (uint *)((int)puVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar4 = (char)uVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// Library Function - Single Match
//  __resetstkoflw
// 
// Library: Visual Studio 2003 Release

int __cdecl __resetstkoflw(void)

{
  SIZE_T SVar1;
  BOOL BVar2;
  LPCVOID pvVar3;
  LPCVOID pvVar4;
  undefined4 uStack96;
  _SYSTEM_INFO local_50;
  undefined local_2c [28];
  DWORD local_10;
  SIZE_T local_c;
  LPCVOID local_8;
  
  uStack96 = 0x404651;
  SVar1 = VirtualQuery(&uStack96,(PMEMORY_BASIC_INFORMATION)local_2c,0x1c);
  if (SVar1 != 0) {
    GetSystemInfo((LPSYSTEM_INFO)&local_50);
    pvVar4 = (LPCVOID)((~(local_50.dwPageSize - 1) & (uint)&uStack96) - local_50.dwPageSize);
    pvVar3 = (LPCVOID)(((-(uint)(DAT_0040ba5c != 1) & 0xfffffff1) + 0x11) * local_50.dwPageSize +
                      (int)local_2c._4_4_);
    local_c = local_50.dwPageSize;
    if (pvVar3 <= pvVar4) {
      local_8 = pvVar4;
      if (DAT_0040ba5c != 1) {
        local_8 = local_2c._4_4_;
        do {
          SVar1 = VirtualQuery(local_8,(PMEMORY_BASIC_INFORMATION)local_2c,0x1c);
          if (SVar1 == 0) {
            return 0;
          }
          local_8 = (LPCVOID)((int)local_8 + local_2c._12_4_);
        } while ((local_2c._16_4_ & 0x1000) == 0);
        local_8 = local_2c._0_4_;
        if ((local_2c[21] & 1) != 0) {
          return 1;
        }
        if (pvVar4 < local_2c._0_4_) {
          return 0;
        }
        if (local_2c._0_4_ < pvVar3) {
          local_8 = pvVar3;
        }
        VirtualAlloc(local_8,local_c,0x1000,4);
      }
      BVar2 = VirtualProtect(local_8,local_c,(-(uint)(DAT_0040ba5c != 1) & 0x103) + 1,&local_10);
      return BVar2;
    }
  }
  return 0;
}



// Library Function - Single Match
//  __allmul
// 
// Library: Visual Studio 2003 Release

ulonglong __allmul(uint param_1,uint param_2,uint param_3,uint param_4)

{
  if ((param_4 | param_2) == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return (ulonglong)param_1 * (ulonglong)param_3 & 0xffffffff |
         (ulonglong)
         ((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
         param_2 * param_3 + param_1 * param_4) << 0x20;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _tolower
// 
// Library: Visual Studio 2003 Release

int __cdecl _tolower(int _C)

{
  uint uVar1;
  int iVar2;
  uint in_ECX;
  LPCSTR _LpSrcStr;
  BOOL unaff_EDI;
  undefined4 local_c;
  uint local_8;
  
  if ((DAT_0040bc54 == (_locale_t)0x0) || ((_DAT_0040b5f0 != 0 && ((uint)_C < 0x80)))) {
    if ((0x40 < _C) && (_C < 0x5b)) {
      return _C + 0x20;
    }
  }
  else {
    _LpSrcStr = (LPCSTR)0x1;
    local_c = in_ECX;
    local_8 = in_ECX;
    if ((uint)_C < 0x100) {
      if (DAT_0040b4a0 < 2) {
        uVar1 = (byte)PTR_DAT_0040b490[_C * 2] & 1;
      }
      else {
        uVar1 = __isctype(_C,1);
      }
      if (uVar1 == 0) {
        return _C;
      }
    }
    if ((PTR_DAT_0040b490[(_C >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = local_8 & 0xffff0000 | _C & 0xffU;
    }
    else {
      local_8 = local_8 & 0xff000000 | (uint)CONCAT11((char)_C,(char)((uint)_C >> 8));
      _LpSrcStr = (LPCSTR)0x2;
    }
    iVar2 = ___crtLCMapStringA(DAT_0040bc54,(LPCWSTR)0x100,(DWORD)&local_8,_LpSrcStr,(int)&local_c,
                               (LPSTR)0x3,DAT_0040bc64,1,unaff_EDI);
    if (iVar2 != 0) {
      if (iVar2 != 1) {
        return (uint)CONCAT11((undefined)local_c,local_c._1_1_);
      }
      return local_c & 0xff;
    }
  }
  return _C;
}



// Library Function - Single Match
//  __ZeroTail
// 
// Library: Visual Studio 2003 Release

undefined4 __cdecl __ZeroTail(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_2 / 0x20;
  uVar1 = *(uint *)(param_1 + iVar2 * 4) & ~(-1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f));
  while( true ) {
    if (uVar1 != 0) {
      return 0;
    }
    iVar2 = iVar2 + 1;
    if (2 < iVar2) break;
    uVar1 = *(uint *)(param_1 + iVar2 * 4);
  }
  return 1;
}



// Library Function - Single Match
//  __IncMan
// 
// Library: Visual Studio 2003 Release

void __cdecl __IncMan(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = ___addl(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = ___addl(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}



// Library Function - Single Match
//  __RoundMan
// 
// Library: Visual Studio 2003 Release

undefined4 __cdecl __RoundMan(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined4 local_8;
  
  local_8 = 0;
  iVar2 = param_2 / 0x20;
  bVar4 = 0x1f - (char)(param_2 % 0x20);
  if (((*(uint *)(param_1 + iVar2 * 4) & 1 << (bVar4 & 0x1f)) != 0) &&
     (iVar3 = __ZeroTail(param_1,param_2), iVar3 == 0)) {
    local_8 = __IncMan(param_1,param_2 + -1);
  }
  puVar1 = (uint *)(param_1 + iVar2 * 4);
  *puVar1 = *puVar1 & -1 << (bVar4 & 0x1f);
  iVar2 = iVar2 + 1;
  if (iVar2 < 3) {
    puVar5 = (undefined4 *)(param_1 + iVar2 * 4);
    for (iVar3 = 3 - iVar2; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  return local_8;
}



// Library Function - Single Match
//  __CopyMan
// 
// Library: Visual Studio 2003 Release

void __cdecl __CopyMan(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 3;
  iVar1 = param_1 - (int)param_2;
  do {
    *(undefined4 *)(iVar1 + (int)param_2) = *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



// Library Function - Single Match
//  __IsZeroMan
// 
// Library: Visual Studio 2003 Release

undefined4 __cdecl __IsZeroMan(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return 1;
}



// Library Function - Single Match
//  __ShrMan
// 
// Library: Visual Studio 2003 Release

void __cdecl __ShrMan(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint local_8;
  
  bVar3 = (byte)(param_2 % 0x20);
  iVar2 = 0;
  local_8 = 0;
  do {
    uVar1 = *(uint *)(param_1 + iVar2 * 4);
    *(uint *)(param_1 + iVar2 * 4) = uVar1 >> (bVar3 & 0x1f) | local_8;
    local_8 = (uVar1 & ~(-1 << (bVar3 & 0x1f))) << (0x20 - bVar3 & 0x1f);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  iVar2 = 2;
  puVar4 = (undefined4 *)(param_1 + (2 - param_2 / 0x20) * 4);
  do {
    if (iVar2 < param_2 / 0x20) {
      *(undefined4 *)(param_1 + iVar2 * 4) = 0;
    }
    else {
      *(undefined4 *)(param_1 + iVar2 * 4) = *puVar4;
    }
    iVar2 = iVar2 + -1;
    puVar4 = puVar4 + -1;
  } while (-1 < iVar2);
  return;
}



// Library Function - Single Match
//  __ld12cvt
// 
// Library: Visual Studio 2003 Release

undefined4 __cdecl __ld12cvt(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_1c [3];
  uint local_10;
  uint local_c;
  int local_8;
  
  uVar1 = param_1[5];
  local_10 = *(uint *)(param_1 + 3);
  local_c = *(uint *)(param_1 + 1);
  local_8 = (uint)*param_1 << 0x10;
  uVar5 = uVar1 & 0x7fff;
  iVar6 = uVar5 - 0x3fff;
  if (iVar6 == -0x3fff) {
    iVar6 = 0;
    uVar5 = __IsZeroMan((int)&local_10);
    uVar2 = uVar5;
    if (uVar5 != 0) {
LAB_00404af1:
      uVar3 = 0;
      goto LAB_00404af3;
    }
  }
  else {
    __CopyMan((int)local_1c,&local_10);
    iVar4 = __RoundMan((int)&local_10,param_3[2]);
    if (iVar4 != 0) {
      iVar6 = uVar5 - 0x3ffe;
    }
    iVar4 = param_3[1];
    if (iVar6 < iVar4 - param_3[2]) {
      local_10 = 0;
      local_c = 0;
      uVar5 = local_10;
      uVar2 = local_c;
    }
    else {
      if (iVar4 < iVar6) {
        if (*param_3 <= iVar6) {
          local_c = 0;
          local_8 = 0;
          local_10 = 0x80000000;
          __ShrMan((int)&local_10,param_3[3]);
          iVar6 = param_3[5] + *param_3;
          uVar3 = 1;
          goto LAB_00404af3;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar6 = param_3[5] + iVar6;
        __ShrMan((int)&local_10,param_3[3]);
        goto LAB_00404af1;
      }
      __CopyMan((int)&local_10,local_1c);
      __ShrMan((int)&local_10,iVar4 - iVar6);
      __RoundMan((int)&local_10,param_3[2]);
      __ShrMan((int)&local_10,param_3[3] + 1);
      uVar5 = local_10;
      uVar2 = local_c;
    }
  }
  local_c = uVar2;
  local_10 = uVar5;
  iVar6 = 0;
  uVar3 = 2;
LAB_00404af3:
  local_10 = iVar6 << (0x1fU - (char)param_3[3] & 0x1f) |
             -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 | local_10;
  if (param_3[4] == 0x40) {
    param_2[1] = local_10;
    *param_2 = local_c;
  }
  else {
    if (param_3[4] == 0x20) {
      *param_2 = local_10;
    }
  }
  return uVar3;
}



// Library Function - Multiple Matches With Different Base Names
//  __ld12tod
//  __ld12tof
// 
// Library: Visual Studio 2003 Release

INTRNCVT_STATUS __cdecl FID_conflict___ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  INTRNCVT_STATUS IVar1;
  
  IVar1 = __ld12cvt((ushort *)_Ifp,(uint *)_D,(int *)&DAT_0040b4b0);
  return IVar1;
}



// Library Function - Multiple Matches With Different Base Names
//  __ld12tod
//  __ld12tof
// 
// Library: Visual Studio 2003 Release

INTRNCVT_STATUS __cdecl FID_conflict___ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  INTRNCVT_STATUS IVar1;
  
  IVar1 = __ld12cvt((ushort *)_Ifp,(uint *)_D,(int *)&DAT_0040b4c8);
  return IVar1;
}



// Library Function - Multiple Matches With Different Base Names
//  __atodbl
//  __atoflt
// 
// Library: Visual Studio 2003 Release

int __cdecl FID_conflict___atodbl(_CRT_FLOAT *_Result,char *_Str)

{
  int iVar1;
  char *local_18;
  _LDBL12 local_14;
  int local_8;
  
  local_8 = DAT_0040b498;
  ___strgtold12(&local_14,&local_18,_Str,0,0,0,0);
  FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  iVar1 = FUN_004041a2(local_8);
  return iVar1;
}



// Library Function - Multiple Matches With Different Base Names
//  __atodbl
//  __atoflt
// 
// Library: Visual Studio 2003 Release

int __cdecl FID_conflict___atodbl(_CRT_FLOAT *_Result,char *_Str)

{
  int iVar1;
  char *local_18;
  _LDBL12 local_14;
  int local_8;
  
  local_8 = DAT_0040b498;
  ___strgtold12(&local_14,&local_18,_Str,0,0,0,0);
  FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  iVar1 = FUN_004041a2(local_8);
  return iVar1;
}



// Library Function - Single Match
//  _memmove
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release

void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar5 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar5 & 3) == 0) {
      uVar2 = _Size >> 2;
      if (uVar2 < 8) goto LAB_00404da4;
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + -1;
        puVar5 = puVar5 + -1;
      }
      switch(_Size & 3) {
      case 1:
        goto switchD_00404dc8_caseD_1;
      case 2:
        goto switchD_00404dc8_caseD_2;
      case 3:
        goto switchD_00404dc8_caseD_3;
      }
    }
    else {
      switch(_Size) {
      case 0:
        break;
      case 1:
switchD_00404dc8_caseD_1:
        *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
        return _Dst;
      case 2:
switchD_00404dc8_caseD_2:
        *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
        *(undefined *)((int)puVar5 + 2) = *(undefined *)((int)puVar4 + 2);
        return _Dst;
      case 3:
switchD_00404dc8_caseD_3:
        *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
        *(undefined *)((int)puVar5 + 2) = *(undefined *)((int)puVar4 + 2);
        *(undefined *)((int)puVar5 + 1) = *(undefined *)((int)puVar4 + 1);
        return _Dst;
      default:
        uVar3 = _Size - ((uint)puVar5 & 3);
        switch((uint)puVar5 & 3) {
        case 1:
          *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
          puVar4 = (undefined4 *)((int)puVar4 + -1);
          uVar2 = uVar3 >> 2;
          puVar5 = (undefined4 *)((int)puVar5 - 1);
          if (uVar2 < 8) {
LAB_00404da4:
                    // WARNING: Could not recover jumptable at 0x00404da6. Too many branches
                    // WARNING: Treating indirect jump as call
            pvVar1 = (void *)(*(code *)(&PTR_LAB_00404e78)[-uVar2])();
            return pvVar1;
          }
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + -1;
            puVar5 = puVar5 + -1;
          }
          switch(uVar3 & 3) {
          case 1:
            goto switchD_00404dc8_caseD_1;
          case 2:
            goto switchD_00404dc8_caseD_2;
          case 3:
            goto switchD_00404dc8_caseD_3;
          }
          break;
        case 2:
          *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
          uVar2 = uVar3 >> 2;
          *(undefined *)((int)puVar5 + 2) = *(undefined *)((int)puVar4 + 2);
          puVar4 = (undefined4 *)((int)puVar4 + -2);
          puVar5 = (undefined4 *)((int)puVar5 - 2);
          if (uVar2 < 8) goto LAB_00404da4;
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + -1;
            puVar5 = puVar5 + -1;
          }
          switch(uVar3 & 3) {
          case 1:
            goto switchD_00404dc8_caseD_1;
          case 2:
            goto switchD_00404dc8_caseD_2;
          case 3:
            goto switchD_00404dc8_caseD_3;
          }
          break;
        case 3:
          *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
          *(undefined *)((int)puVar5 + 2) = *(undefined *)((int)puVar4 + 2);
          uVar2 = uVar3 >> 2;
          *(undefined *)((int)puVar5 + 1) = *(undefined *)((int)puVar4 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + -3);
          puVar5 = (undefined4 *)((int)puVar5 - 3);
          if (uVar2 < 8) goto LAB_00404da4;
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + -1;
            puVar5 = puVar5 + -1;
          }
          switch(uVar3 & 3) {
          case 1:
            goto switchD_00404dc8_caseD_1;
          case 2:
            goto switchD_00404dc8_caseD_2;
          case 3:
            goto switchD_00404dc8_caseD_3;
          }
        }
      }
    }
    return _Dst;
  }
  puVar4 = (undefined4 *)_Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    if (uVar2 < 8) goto LAB_00404c3c;
                    // WARNING: Load size is inaccurate
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *_Src;
      _Src = (undefined4 *)((int)_Src + 4);
      puVar4 = puVar4 + 1;
    }
    switch(_Size & 3) {
    case 1:
      goto switchD_00404c34_caseD_1;
    case 2:
      goto switchD_00404c34_caseD_2;
    case 3:
      goto switchD_00404c34_caseD_3;
    }
  }
  else {
    switch(_Size) {
    case 0:
      break;
    case 1:
switchD_00404c34_caseD_1:
                    // WARNING: Load size is inaccurate
      *(undefined *)puVar4 = *_Src;
      return _Dst;
    case 2:
switchD_00404c34_caseD_2:
                    // WARNING: Load size is inaccurate
      *(undefined *)puVar4 = *_Src;
      *(undefined *)((int)puVar4 + 1) = *(undefined *)((int)_Src + 1);
      return _Dst;
    case 3:
switchD_00404c34_caseD_3:
                    // WARNING: Load size is inaccurate
      *(undefined *)puVar4 = *_Src;
      *(undefined *)((int)puVar4 + 1) = *(undefined *)((int)_Src + 1);
      *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)_Src + 2);
      return _Dst;
    default:
      uVar3 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
        uVar2 = uVar3 >> 2;
        *(undefined *)((int)_Dst + 2) = *(undefined *)((int)_Src + 2);
        _Src = (undefined4 *)((int)_Src + 3);
        puVar4 = (undefined4 *)((int)_Dst + 3);
        if (uVar2 < 8) {
LAB_00404c3c:
                    // WARNING: Could not recover jumptable at 0x00404c3c. Too many branches
                    // WARNING: Treating indirect jump as call
          pvVar1 = (void *)(*(code *)(&PTR_LAB_00404cc0)[uVar2])();
          return pvVar1;
        }
                    // WARNING: Load size is inaccurate
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *_Src;
          _Src = (undefined4 *)((int)_Src + 4);
          puVar4 = puVar4 + 1;
        }
        switch(uVar3 & 3) {
        case 1:
          goto switchD_00404c34_caseD_1;
        case 2:
          goto switchD_00404c34_caseD_2;
        case 3:
          goto switchD_00404c34_caseD_3;
        }
        break;
      case 2:
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        uVar2 = uVar3 >> 2;
        *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
        _Src = (undefined4 *)((int)_Src + 2);
        puVar4 = (undefined4 *)((int)_Dst + 2);
        if (uVar2 < 8) goto LAB_00404c3c;
                    // WARNING: Load size is inaccurate
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *_Src;
          _Src = (undefined4 *)((int)_Src + 4);
          puVar4 = puVar4 + 1;
        }
        switch(uVar3 & 3) {
        case 1:
          goto switchD_00404c34_caseD_1;
        case 2:
          goto switchD_00404c34_caseD_2;
        case 3:
          goto switchD_00404c34_caseD_3;
        }
        break;
      case 3:
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        uVar2 = uVar3 >> 2;
        _Src = (undefined4 *)((int)_Src + 1);
        puVar4 = (undefined4 *)((int)_Dst + 1);
        if (uVar2 < 8) goto LAB_00404c3c;
                    // WARNING: Load size is inaccurate
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *_Src;
          _Src = (undefined4 *)((int)_Src + 4);
          puVar4 = puVar4 + 1;
        }
        switch(uVar3 & 3) {
        case 1:
          goto switchD_00404c34_caseD_1;
        case 2:
          goto switchD_00404c34_caseD_2;
        case 3:
          goto switchD_00404c34_caseD_3;
        }
      }
    }
  }
  return _Dst;
}



// Library Function - Single Match
//  _strcpy
// 
// Library: Visual Studio

char * __cdecl _strcpy(char *_Dest,char *_Source)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = (uint)_Source & 3;
  puVar4 = (uint *)_Dest;
  while (uVar3 != 0) {
    bVar1 = *_Source;
    uVar3 = (uint)bVar1;
    _Source = (char *)((int)_Source + 1);
    if (bVar1 == 0) goto LAB_00405010;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    uVar3 = (uint)_Source & 3;
  }
  do {
    uVar2 = *(uint *)_Source;
    uVar3 = *(uint *)_Source;
    _Source = (char *)((int)_Source + 4);
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_00405010:
        *(byte *)puVar4 = (byte)uVar3;
        return _Dest;
      }
      if ((char)(uVar3 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar3;
        return _Dest;
      }
      if ((uVar3 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar3;
        *(byte *)((int)puVar4 + 2) = 0;
        return _Dest;
      }
      if ((uVar3 & 0xff000000) == 0) {
        *puVar4 = uVar3;
        return _Dest;
      }
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
  } while( true );
}



// Library Function - Single Match
//  _strcat
// 
// Library: Visual Studio 2003 Release

char * __cdecl _strcat(char *_Dest,char *_Source)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar4 = (uint)_Dest & 3;
  puVar3 = (uint *)_Dest;
  while (uVar4 != 0) {
    bVar1 = *(byte *)puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
    if (bVar1 == 0) goto LAB_00404f83;
    uVar4 = (uint)puVar3 & 3;
  }
  do {
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto LAB_00404f95;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto LAB_00404f95;
    }
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto LAB_00404f95;
    }
  } while ((uVar4 & 0xff000000) != 0);
LAB_00404f83:
  puVar5 = (uint *)((int)puVar3 + -1);
LAB_00404f95:
  uVar4 = (uint)_Source & 3;
  while (uVar4 != 0) {
    bVar1 = *_Source;
    uVar4 = (uint)bVar1;
    _Source = (char *)((int)_Source + 1);
    if (bVar1 == 0) goto LAB_00405010;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
    uVar4 = (uint)_Source & 3;
  }
  do {
    uVar2 = *(uint *)_Source;
    uVar4 = *(uint *)_Source;
    _Source = (char *)((int)_Source + 4);
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar4 == '\0') {
LAB_00405010:
        *(byte *)puVar5 = (byte)uVar4;
        return _Dest;
      }
      if ((char)(uVar4 >> 8) == '\0') {
        *(short *)puVar5 = (short)uVar4;
        return _Dest;
      }
      if ((uVar4 & 0xff0000) == 0) {
        *(short *)puVar5 = (short)uVar4;
        *(byte *)((int)puVar5 + 2) = 0;
        return _Dest;
      }
      if ((uVar4 & 0xff000000) == 0) {
        *puVar5 = uVar4;
        return _Dest;
      }
    }
    *puVar5 = uVar4;
    puVar5 = puVar5 + 1;
  } while( true );
}



// Library Function - Single Match
//  __fptostr
// 
// Library: Visual Studio 2003 Release

errno_t __cdecl __fptostr(char *_Buf,size_t _SizeInBytes,int _Digits,STRFLT _PtFlt)

{
  char *_Str;
  char *_Dst;
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  char cVar4;
  
  _Dst = _Buf;
  pcVar3 = *(char **)(_Digits + 0xc);
  _Str = _Buf + 1;
  *_Buf = '0';
  pcVar1 = _Str;
  if (0 < (int)_SizeInBytes) {
    _Buf = (char *)_SizeInBytes;
    _SizeInBytes = 0;
    do {
      cVar4 = *pcVar3;
      if (cVar4 == '\0') {
        cVar4 = '0';
      }
      else {
        pcVar3 = pcVar3 + 1;
      }
      *pcVar1 = cVar4;
      pcVar1 = pcVar1 + 1;
      _Buf = _Buf + -1;
    } while (_Buf != (char *)0x0);
  }
  *pcVar1 = '\0';
  if ((-1 < (int)_SizeInBytes) && ('4' < *pcVar3)) {
    while (pcVar1 = pcVar1 + -1, *pcVar1 == '9') {
      *pcVar1 = '0';
    }
    *pcVar1 = *pcVar1 + '\x01';
  }
  if (*_Dst == '1') {
    *(int *)(_Digits + 4) = *(int *)(_Digits + 4) + 1;
  }
  else {
    sVar2 = _strlen(_Str);
    pcVar1 = (char *)_memmove(_Dst,_Str,sVar2 + 1);
  }
  return (errno_t)pcVar1;
}



// Library Function - Single Match
//  ___dtold
// 
// Library: Visual Studio 2003 Release

void __cdecl ___dtold(uint *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint local_8;
  
  uVar1 = *(ushort *)((int)param_2 + 6);
  local_8 = 0x80000000;
  uVar3 = uVar1 >> 4;
  uVar4 = uVar3 & 0x7ff;
  uVar2 = *param_2;
  if ((uVar3 & 0x7ff) == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar2 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      return;
    }
    uVar4 = uVar4 + 0x3c01;
    local_8 = 0;
  }
  else {
    if (uVar4 == 0x7ff) {
      uVar4 = 0x7fff;
    }
    else {
      uVar4 = uVar4 + 0x3c00;
    }
  }
  param_1[1] = uVar2 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  *param_1 = uVar2 << 0xb;
  while (local_8 == 0) {
    uVar2 = param_1[1];
    uVar4 = uVar4 - 1;
    param_1[1] = uVar2 << 1 | *param_1 >> 0x1f;
    *param_1 = *param_1 * 2;
    local_8 = uVar2 << 1 & 0x80000000;
  }
  *(ushort *)(param_1 + 2) = uVar1 & 0x8000 | uVar4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __fltout
// 
// Library: Visual Studio 2003 Release

void __fltout(undefined param_1)

{
  undefined4 in_stack_ffffffd4;
  undefined2 uVar1;
  uint local_14;
  uint uStack16;
  undefined2 uStack12;
  int local_8;
  
  uVar1 = (undefined2)((uint)in_stack_ffffffd4 >> 0x10);
  local_8 = DAT_0040b498;
  ___dtold(&local_14,(uint *)&param_1);
  _DAT_0040bbd8 = __I10_OUTPUT(local_14,uStack16,CONCAT22(uVar1,uStack12),0x11,0,&DAT_0040bbb4);
  _DAT_0040bbd0 = (int)DAT_0040bbb6;
  _DAT_0040bbd4 = (int)DAT_0040bbb4;
  _DAT_0040bbdc = &DAT_0040bbb8;
  FUN_004041a2(local_8);
  return;
}



void FUN_004051bd(void)

{
  __amsg_exit(2);
  return;
}



// Library Function - Single Match
//  __abstract_cw
// 
// Library: Visual Studio 2003 Release

uint __abstract_cw(void)

{
  uint uVar1;
  ushort uVar2;
  ushort unaff_BX;
  
  uVar1 = 0;
  if ((unaff_BX & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((unaff_BX & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((unaff_BX & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((unaff_BX & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((unaff_BX & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((unaff_BX & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar2 = unaff_BX & 0xc00;
  if ((unaff_BX & 0xc00) != 0) {
    if (uVar2 == 0x400) {
      uVar1 = uVar1 | 0x100;
    }
    else {
      if (uVar2 == 0x800) {
        uVar1 = uVar1 | 0x200;
      }
      else {
        if (uVar2 == 0xc00) {
          uVar1 = uVar1 | 0x300;
        }
      }
    }
  }
  if ((unaff_BX & 0x300) == 0) {
    uVar1 = uVar1 | 0x20000;
  }
  else {
    if ((unaff_BX & 0x300) == 0x200) {
      uVar1 = uVar1 | 0x10000;
    }
  }
  if ((unaff_BX & 0x1000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  return uVar1;
}



// Library Function - Single Match
//  __hw_cw
// 
// Library: Visual Studio 2003 Release

uint __hw_cw(void)

{
  uint uVar1;
  uint uVar2;
  uint unaff_EBX;
  
  uVar1 = (uint)((unaff_EBX & 0x10) != 0);
  if ((unaff_EBX & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((unaff_EBX & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((unaff_EBX & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((unaff_EBX & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((unaff_EBX & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = unaff_EBX & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else {
      if (uVar2 == 0x200) {
        uVar1 = uVar1 | 0x800;
      }
      else {
        if (uVar2 == 0x300) {
          uVar1 = uVar1 | 0xc00;
        }
      }
    }
  }
  if ((unaff_EBX & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else {
    if ((unaff_EBX & 0x30000) == 0x10000) {
      uVar1 = uVar1 | 0x200;
    }
  }
  if ((unaff_EBX & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}



// Library Function - Single Match
//  __control87
// 
// Library: Visual Studio 2003 Release

uint __cdecl __control87(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
  uVar1 = __abstract_cw();
  __hw_cw();
  return uVar1 & ~_Mask | _NewValue & _Mask;
}



// Library Function - Single Match
//  __controlfp
// 
// Library: Visual Studio 2003 Release

uint __cdecl __controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
  uVar1 = __control87(_NewValue,_Mask & 0xfff7ffff);
  return uVar1;
}



// Library Function - Single Match
//  __onexit
// 
// Library: Visual Studio 2003 Release

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  size_t sVar1;
  void *pvVar2;
  size_t sVar3;
  
  sVar1 = __msize(DAT_0040bfe8);
  if (sVar1 < (uint)((int)DAT_0040bfe4 + (4 - (int)DAT_0040bfe8))) {
    sVar3 = 0x800;
    if (sVar1 < 0x800) {
      sVar3 = sVar1;
    }
    pvVar2 = _realloc(DAT_0040bfe8,sVar3 + sVar1);
    if (pvVar2 == (void *)0x0) {
      pvVar2 = _realloc(DAT_0040bfe8,sVar1 + 0x10);
      if (pvVar2 == (void *)0x0) {
        return (_onexit_t)0x0;
      }
    }
    DAT_0040bfe4 = (_onexit_t *)((int)pvVar2 + ((int)DAT_0040bfe4 - (int)DAT_0040bfe8 >> 2) * 4);
    DAT_0040bfe8 = pvVar2;
  }
  *DAT_0040bfe4 = _Func;
  DAT_0040bfe4 = DAT_0040bfe4 + 1;
  return _Func;
}



// Library Function - Single Match
//  _atexit
// 
// Library: Visual Studio 2003 Release

int __cdecl _atexit(void *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___crtMessageBoxA
// 
// Library: Visual Studio 2003 Release

int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)

{
  HMODULE hModule;
  int iVar1;
  int iVar2;
  undefined local_14 [8];
  byte local_c;
  undefined local_8 [4];
  
  iVar2 = 0;
  if (_DAT_0040bbe0 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if ((hModule == (HMODULE)0x0) ||
       (_DAT_0040bbe0 = GetProcAddress(hModule,"MessageBoxA"), _DAT_0040bbe0 == (FARPROC)0x0)) {
      return 0;
    }
    DAT_0040bbe4 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_0040bbe8 = GetProcAddress(hModule,"GetLastActivePopup");
    if ((DAT_0040ba5c == 2) &&
       (_DAT_0040bbf0 = GetProcAddress(hModule,"GetUserObjectInformationA"),
       _DAT_0040bbf0 != (FARPROC)0x0)) {
      DAT_0040bbec = GetProcAddress(hModule,"GetProcessWindowStation");
    }
  }
  if ((DAT_0040bbec == (FARPROC)0x0) ||
     (((iVar1 = (*DAT_0040bbec)(), iVar1 != 0 &&
       (iVar1 = (*_DAT_0040bbf0)(iVar1,1,local_14,0xc,local_8), iVar1 != 0)) && ((local_c & 1) != 0)
      ))) {
    if (((DAT_0040bbe4 != (FARPROC)0x0) && (iVar2 = (*DAT_0040bbe4)(), iVar2 != 0)) &&
       (DAT_0040bbe8 != (FARPROC)0x0)) {
      iVar2 = (*DAT_0040bbe8)(iVar2);
    }
  }
  else {
    if (_DAT_0040ba68 < 4) {
      _UType = _UType | 0x40000;
    }
    else {
      _UType = _UType | 0x200000;
    }
  }
  iVar2 = (*_DAT_0040bbe0)(iVar2,_LpText,_LpCaption,_UType);
  return iVar2;
}



// Library Function - Single Match
//  _strncpy
// 
// Library: Visual Studio 2003 Release

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      cVar3 = *_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = cVar3;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if (cVar3 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x0040553c;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        if (uVar4 == 0) goto LAB_00405583;
        goto LAB_004055f9;
      }
      *(undefined *)puVar5 = 0;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x004055f5:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_004055f9:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_00405583;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x004055f5;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x004055f5;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x004055f5;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x0040553c:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = *_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_00405583:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Library Function - Single Match
//  _CPtoLCID
// 
// Library: Visual Studio 2003 Release

undefined4 _CPtoLCID(void)

{
  int in_EAX;
  
  if (in_EAX == 0x3a4) {
    return 0x411;
  }
  if (in_EAX == 0x3a8) {
    return 0x804;
  }
  if (in_EAX == 0x3b5) {
    return 0x412;
  }
  if (in_EAX != 0x3b6) {
    return 0;
  }
  return 0x404;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _setSBCS
// 
// Library: Visual Studio 2003 Release

void _setSBCS(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0040bca0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined *)puVar2 = 0;
  DAT_0040bc94 = 0;
  _DAT_0040bc98 = 0;
  DAT_0040bda4 = 0;
  DAT_0040bdb0 = 0;
  DAT_0040bdb4 = 0;
  DAT_0040bdb8 = 0;
  return;
}



// Library Function - Single Match
//  _setSBUpLow
// 
// Library: Visual Studio 2003 Release

void _setSBUpLow(void)

{
  BOOL BVar1;
  uint uVar2;
  undefined uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  _locale_t _BError;
  ushort local_51c [256];
  undefined local_31c [256];
  undefined local_21c [256];
  undefined4 local_11c [64];
  _cpinfo local_1c;
  int local_8;
  
  local_8 = DAT_0040b498;
  BVar1 = GetCPInfo((UINT)DAT_0040bda4,(LPCPINFO)&local_1c);
  if (BVar1 == 1) {
    uVar2 = 0;
    do {
      *(char *)((int)local_11c + uVar2) = (char)uVar2;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x100);
    local_11c[0]._0_1_ = 0x20;
    if (local_1c.LeadByte[0] != 0) {
      pbVar7 = local_1c.LeadByte + 1;
      do {
        uVar2 = (uint)local_1c.LeadByte[0];
        if (uVar2 <= *pbVar7) {
          uVar5 = (*pbVar7 - uVar2) + 1;
          puVar8 = (undefined4 *)((int)local_11c + uVar2);
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar8 = 0x20202020;
            puVar8 = puVar8 + 1;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined *)puVar8 = 0x20;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
        }
        local_1c.LeadByte[0] = pbVar7[1];
        pbVar7 = pbVar7 + 2;
      } while (local_1c.LeadByte[0] != 0);
    }
    BVar1 = 1;
    ___crtGetStringTypeA
              ((_locale_t)0x1,(DWORD)local_11c,(LPCSTR)0x100,(int)local_51c,DAT_0040bda4,
               (int)DAT_0040bc94,0);
    _BError = DAT_0040bc94;
    ___crtLCMapStringA(DAT_0040bc94,(LPCWSTR)0x100,(DWORD)local_11c,(LPCSTR)0x100,(int)local_21c,
                       (LPSTR)0x100,(int)DAT_0040bda4,0,BVar1);
    ___crtLCMapStringA(DAT_0040bc94,(LPCWSTR)0x200,(DWORD)local_11c,(LPCSTR)0x100,(int)local_31c,
                       (LPSTR)0x100,(int)DAT_0040bda4,0,(BOOL)_BError);
    uVar2 = 0;
    do {
      if ((local_51c[uVar2] & 1) == 0) {
        if ((local_51c[uVar2] & 2) != 0) {
          pbVar7 = (byte *)((int)&DAT_0040bca0 + uVar2 + 1);
          *pbVar7 = *pbVar7 | 0x20;
          uVar3 = local_31c[uVar2];
          goto LAB_0040577e;
        }
        (&DAT_0040bdc0)[uVar2] = 0;
      }
      else {
        pbVar7 = (byte *)((int)&DAT_0040bca0 + uVar2 + 1);
        *pbVar7 = *pbVar7 | 0x10;
        uVar3 = local_21c[uVar2];
LAB_0040577e:
        (&DAT_0040bdc0)[uVar2] = uVar3;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x100);
  }
  else {
    uVar2 = 0;
    do {
      if ((uVar2 < 0x41) || (0x5a < uVar2)) {
        if ((0x60 < uVar2) && (uVar2 < 0x7b)) {
          pbVar7 = (byte *)((int)&DAT_0040bca0 + uVar2 + 1);
          *pbVar7 = *pbVar7 | 0x20;
          cVar4 = (char)uVar2 + -0x20;
          goto LAB_004057c1;
        }
        (&DAT_0040bdc0)[uVar2] = 0;
      }
      else {
        pbVar7 = (byte *)((int)&DAT_0040bca0 + uVar2 + 1);
        *pbVar7 = *pbVar7 | 0x10;
        cVar4 = (char)uVar2 + ' ';
LAB_004057c1:
        (&DAT_0040bdc0)[uVar2] = cVar4;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x100);
  }
  FUN_004041a2(local_8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __setmbcp
// 
// Library: Visual Studio 2003 Release

int __cdecl __setmbcp(int _CodePage)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  BOOL BVar5;
  uint uVar6;
  int iVar7;
  int extraout_ECX;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  uint local_20;
  _cpinfo local_1c;
  int local_8;
  
  local_8 = DAT_0040b498;
  _DAT_0040bbf4 = 0;
  if (_CodePage == -2) {
    _DAT_0040bbf4 = 1;
    _CodePage = GetOEMCP();
  }
  else {
    if (_CodePage == -3) {
      _DAT_0040bbf4 = 1;
      _CodePage = GetACP();
    }
    else {
      if (_CodePage == -4) {
        _DAT_0040bbf4 = 1;
        _CodePage = DAT_0040bc64;
      }
    }
  }
  if (_CodePage == DAT_0040bda4) goto LAB_004059d1;
  if (_CodePage != 0) {
    iVar8 = 0;
    uVar4 = 0;
LAB_00405873:
    if (*(int *)((int)&DAT_0040b4e8 + uVar4) != _CodePage) goto code_r0x0040587b;
    puVar11 = &DAT_0040bca0;
    for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    local_20 = 0;
    *(undefined *)puVar11 = 0;
    pbVar9 = &DAT_0040b4f8 + iVar8 * 0x30;
    do {
      bVar3 = *pbVar9;
      pbVar10 = pbVar9;
      while ((bVar3 != 0 && (bVar2 = pbVar10[1], bVar2 != 0))) {
        uVar4 = (uint)bVar3;
        if (uVar4 <= bVar2) {
          bVar3 = (&DAT_0040b4e0)[local_20];
          do {
            pbVar1 = (byte *)((int)&DAT_0040bca0 + uVar4 + 1);
            *pbVar1 = *pbVar1 | bVar3;
            uVar4 = uVar4 + 1;
          } while (uVar4 <= bVar2);
        }
        pbVar10 = pbVar10 + 2;
        bVar3 = *pbVar10;
      }
      local_20 = local_20 + 1;
      pbVar9 = pbVar9 + 8;
    } while (local_20 < 4);
    DAT_0040bda4 = _CodePage;
    _DAT_0040bc98 = 1;
    DAT_0040bc94 = _CPtoLCID();
    DAT_0040bdb0 = *(undefined4 *)((int)&DAT_0040b4ec + extraout_ECX);
    DAT_0040bdb4 = *(undefined4 *)((int)&DAT_0040b4f0 + extraout_ECX);
    DAT_0040bdb8 = *(undefined4 *)((int)&DAT_0040b4f4 + extraout_ECX);
    goto LAB_004059c5;
  }
LAB_004059c0:
  _setSBCS();
LAB_004059c5:
  _setSBUpLow();
LAB_004059d1:
  iVar8 = FUN_004041a2(local_8);
  return iVar8;
code_r0x0040587b:
  uVar4 = uVar4 + 0x30;
  iVar8 = iVar8 + 1;
  if (0xef < uVar4) goto code_r0x00405886;
  goto LAB_00405873;
code_r0x00405886:
  BVar5 = GetCPInfo(_CodePage,(LPCPINFO)&local_1c);
  if (BVar5 != 1) {
    if (_DAT_0040bbf4 == 0) goto LAB_004059d1;
    goto LAB_004059c0;
  }
  puVar11 = &DAT_0040bca0;
  for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  *(undefined *)puVar11 = 0;
  uVar4 = 1;
  DAT_0040bc94 = 0;
  DAT_0040bda4 = _CodePage;
  if (local_1c.MaxCharSize < 2) {
    _DAT_0040bc98 = 0;
  }
  else {
    if (local_1c.LeadByte[0] != '\0') {
      pbVar9 = local_1c.LeadByte + 1;
      do {
        bVar3 = *pbVar9;
        if (bVar3 == 0) break;
        for (uVar6 = (uint)pbVar9[-1]; uVar6 <= bVar3; uVar6 = uVar6 + 1) {
          pbVar10 = (byte *)((int)&DAT_0040bca0 + uVar6 + 1);
          *pbVar10 = *pbVar10 | 4;
        }
        pbVar10 = pbVar9 + 1;
        pbVar9 = pbVar9 + 2;
      } while (*pbVar10 != 0);
    }
    do {
      pbVar9 = (byte *)((int)&DAT_0040bca0 + uVar4 + 1);
      *pbVar9 = *pbVar9 | 8;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0xff);
    DAT_0040bc94 = _CPtoLCID();
    _DAT_0040bc98 = 1;
  }
  DAT_0040bdb0 = 0;
  DAT_0040bdb4 = 0;
  DAT_0040bdb8 = 0;
  goto LAB_004059c5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___initmbctable
// 
// Library: Visual Studio 2003 Release

undefined4 ___initmbctable(void)

{
  if (_DAT_0040bfec == 0) {
    __setmbcp(-3);
    _DAT_0040bfec = 1;
  }
  return 0;
}



// Library Function - Single Match
//  _memcpy
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release

void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar5 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar5 & 3) == 0) {
      uVar2 = _Size >> 2;
      if (uVar2 < 8) goto LAB_00405bc4;
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + -1;
        puVar5 = puVar5 + -1;
      }
      switch(_Size & 3) {
      case 1:
        goto switchD_00405be8_caseD_1;
      case 2:
        goto switchD_00405be8_caseD_2;
      case 3:
        goto switchD_00405be8_caseD_3;
      }
    }
    else {
      switch(_Size) {
      case 0:
        break;
      case 1:
switchD_00405be8_caseD_1:
        *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
        return _Dst;
      case 2:
switchD_00405be8_caseD_2:
        *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
        *(undefined *)((int)puVar5 + 2) = *(undefined *)((int)puVar4 + 2);
        return _Dst;
      case 3:
switchD_00405be8_caseD_3:
        *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
        *(undefined *)((int)puVar5 + 2) = *(undefined *)((int)puVar4 + 2);
        *(undefined *)((int)puVar5 + 1) = *(undefined *)((int)puVar4 + 1);
        return _Dst;
      default:
        uVar3 = _Size - ((uint)puVar5 & 3);
        switch((uint)puVar5 & 3) {
        case 1:
          *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
          puVar4 = (undefined4 *)((int)puVar4 + -1);
          uVar2 = uVar3 >> 2;
          puVar5 = (undefined4 *)((int)puVar5 - 1);
          if (uVar2 < 8) {
LAB_00405bc4:
                    // WARNING: Could not recover jumptable at 0x00405bc6. Too many branches
                    // WARNING: Treating indirect jump as call
            pvVar1 = (void *)(*(code *)(&PTR_LAB_00405c98)[-uVar2])();
            return pvVar1;
          }
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + -1;
            puVar5 = puVar5 + -1;
          }
          switch(uVar3 & 3) {
          case 1:
            goto switchD_00405be8_caseD_1;
          case 2:
            goto switchD_00405be8_caseD_2;
          case 3:
            goto switchD_00405be8_caseD_3;
          }
          break;
        case 2:
          *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
          uVar2 = uVar3 >> 2;
          *(undefined *)((int)puVar5 + 2) = *(undefined *)((int)puVar4 + 2);
          puVar4 = (undefined4 *)((int)puVar4 + -2);
          puVar5 = (undefined4 *)((int)puVar5 - 2);
          if (uVar2 < 8) goto LAB_00405bc4;
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + -1;
            puVar5 = puVar5 + -1;
          }
          switch(uVar3 & 3) {
          case 1:
            goto switchD_00405be8_caseD_1;
          case 2:
            goto switchD_00405be8_caseD_2;
          case 3:
            goto switchD_00405be8_caseD_3;
          }
          break;
        case 3:
          *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
          *(undefined *)((int)puVar5 + 2) = *(undefined *)((int)puVar4 + 2);
          uVar2 = uVar3 >> 2;
          *(undefined *)((int)puVar5 + 1) = *(undefined *)((int)puVar4 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + -3);
          puVar5 = (undefined4 *)((int)puVar5 - 3);
          if (uVar2 < 8) goto LAB_00405bc4;
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + -1;
            puVar5 = puVar5 + -1;
          }
          switch(uVar3 & 3) {
          case 1:
            goto switchD_00405be8_caseD_1;
          case 2:
            goto switchD_00405be8_caseD_2;
          case 3:
            goto switchD_00405be8_caseD_3;
          }
        }
      }
    }
    return _Dst;
  }
  puVar4 = (undefined4 *)_Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    if (uVar2 < 8) goto LAB_00405a5c;
                    // WARNING: Load size is inaccurate
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *_Src;
      _Src = (undefined4 *)((int)_Src + 4);
      puVar4 = puVar4 + 1;
    }
    switch(_Size & 3) {
    case 1:
      goto switchD_00405a54_caseD_1;
    case 2:
      goto switchD_00405a54_caseD_2;
    case 3:
      goto switchD_00405a54_caseD_3;
    }
  }
  else {
    switch(_Size) {
    case 0:
      break;
    case 1:
switchD_00405a54_caseD_1:
                    // WARNING: Load size is inaccurate
      *(undefined *)puVar4 = *_Src;
      return _Dst;
    case 2:
switchD_00405a54_caseD_2:
                    // WARNING: Load size is inaccurate
      *(undefined *)puVar4 = *_Src;
      *(undefined *)((int)puVar4 + 1) = *(undefined *)((int)_Src + 1);
      return _Dst;
    case 3:
switchD_00405a54_caseD_3:
                    // WARNING: Load size is inaccurate
      *(undefined *)puVar4 = *_Src;
      *(undefined *)((int)puVar4 + 1) = *(undefined *)((int)_Src + 1);
      *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)_Src + 2);
      return _Dst;
    default:
      uVar3 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
        uVar2 = uVar3 >> 2;
        *(undefined *)((int)_Dst + 2) = *(undefined *)((int)_Src + 2);
        _Src = (undefined4 *)((int)_Src + 3);
        puVar4 = (undefined4 *)((int)_Dst + 3);
        if (uVar2 < 8) {
LAB_00405a5c:
                    // WARNING: Could not recover jumptable at 0x00405a5c. Too many branches
                    // WARNING: Treating indirect jump as call
          pvVar1 = (void *)(*(code *)(&PTR_LAB_00405ae0)[uVar2])();
          return pvVar1;
        }
                    // WARNING: Load size is inaccurate
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *_Src;
          _Src = (undefined4 *)((int)_Src + 4);
          puVar4 = puVar4 + 1;
        }
        switch(uVar3 & 3) {
        case 1:
          goto switchD_00405a54_caseD_1;
        case 2:
          goto switchD_00405a54_caseD_2;
        case 3:
          goto switchD_00405a54_caseD_3;
        }
        break;
      case 2:
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        uVar2 = uVar3 >> 2;
        *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
        _Src = (undefined4 *)((int)_Src + 2);
        puVar4 = (undefined4 *)((int)_Dst + 2);
        if (uVar2 < 8) goto LAB_00405a5c;
                    // WARNING: Load size is inaccurate
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *_Src;
          _Src = (undefined4 *)((int)_Src + 4);
          puVar4 = puVar4 + 1;
        }
        switch(uVar3 & 3) {
        case 1:
          goto switchD_00405a54_caseD_1;
        case 2:
          goto switchD_00405a54_caseD_2;
        case 3:
          goto switchD_00405a54_caseD_3;
        }
        break;
      case 3:
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        uVar2 = uVar3 >> 2;
        _Src = (undefined4 *)((int)_Src + 1);
        puVar4 = (undefined4 *)((int)_Dst + 1);
        if (uVar2 < 8) goto LAB_00405a5c;
                    // WARNING: Load size is inaccurate
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *_Src;
          _Src = (undefined4 *)((int)_Src + 4);
          puVar4 = puVar4 + 1;
        }
        switch(uVar3 & 3) {
        case 1:
          goto switchD_00405a54_caseD_1;
        case 2:
          goto switchD_00405a54_caseD_2;
        case 3:
          goto switchD_00405a54_caseD_3;
        }
      }
    }
  }
  return _Dst;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___sbh_heap_init
// 
// Library: Visual Studio 2003 Release

undefined4 __cdecl ___sbh_heap_init(undefined4 param_1)

{
  DAT_0040bc80 = HeapAlloc(DAT_0040bec0,0,0x140);
  if (DAT_0040bc80 == (LPVOID)0x0) {
    return 0;
  }
  DAT_0040bc78 = 0;
  DAT_0040bc7c = 0;
  _DAT_0040bc84 = param_1;
  DAT_0040bc88 = DAT_0040bc80;
  DAT_0040bc8c = 0x10;
  return 1;
}



// Library Function - Single Match
//  ___sbh_find_block
// 
// Library: Visual Studio 2003 Release

uint __cdecl ___sbh_find_block(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_0040bc80;
  while( true ) {
    if (DAT_0040bc80 + DAT_0040bc7c * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Library Function - Single Match
//  ___sbh_free_block
// 
// Library: Visual Studio 2003 Release

void __cdecl ___sbh_free_block(uint *param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  uint *puVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_8;
  
  uVar6 = param_1[4];
  puVar12 = (uint *)(param_2 + -4);
  uVar14 = param_2 - param_1[3] >> 0xf;
  piVar4 = (int *)(uVar14 * 0x204 + 0x144 + uVar6);
  local_8 = *puVar12 - 1;
  if ((local_8 & 1) == 0) {
    puVar10 = (uint *)(local_8 + (int)puVar12);
    uVar13 = *puVar10;
    uVar7 = *(uint *)(param_2 + -8);
    if ((uVar13 & 1) == 0) {
      uVar9 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar9) {
        uVar9 = 0x3f;
      }
      if (puVar10[1] == puVar10[2]) {
        if (uVar9 < 0x20) {
          pcVar2 = (char *)(uVar9 + 4 + uVar6);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 & 0x1f));
          puVar11 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
          *puVar11 = *puVar11 & uVar9;
          *pcVar2 = *pcVar2 + -1;
          if (*pcVar2 == '\0') {
            *param_1 = *param_1 & uVar9;
          }
        }
        else {
          pcVar2 = (char *)(uVar9 + 4 + uVar6);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 - 0x20 & 0x1f));
          puVar11 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
          *puVar11 = *puVar11 & uVar9;
          *pcVar2 = *pcVar2 + -1;
          if (*pcVar2 == '\0') {
            param_1[1] = param_1[1] & uVar9;
          }
        }
      }
      local_8 = local_8 + uVar13;
      *(uint *)(puVar10[2] + 4) = puVar10[1];
      *(uint *)(puVar10[1] + 8) = puVar10[2];
    }
    puVar10 = (uint *)(((int)local_8 >> 4) - 1);
    if ((uint *)0x3f < puVar10) {
      puVar10 = (uint *)0x3f;
    }
    puVar11 = param_1;
    if ((uVar7 & 1) == 0) {
      puVar12 = (uint *)((int)puVar12 - uVar7);
      puVar11 = (uint *)(((int)uVar7 >> 4) - 1);
      if ((uint *)0x3f < puVar11) {
        puVar11 = (uint *)0x3f;
      }
      local_8 = local_8 + uVar7;
      puVar10 = (uint *)(((int)local_8 >> 4) - 1);
      if ((uint *)0x3f < puVar10) {
        puVar10 = (uint *)0x3f;
      }
      if (puVar11 != puVar10) {
        if (puVar12[1] == puVar12[2]) {
          if (puVar11 < (uint *)0x20) {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 & 0x1f));
            puVar3 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
            *puVar3 = *puVar3 & uVar13;
            pcVar2 = (char *)((int)puVar11 + uVar6 + 4);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              *param_1 = *param_1 & uVar13;
            }
          }
          else {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 - 0x20 & 0x1f));
            puVar3 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
            *puVar3 = *puVar3 & uVar13;
            pcVar2 = (char *)((int)puVar11 + uVar6 + 4);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              param_1[1] = param_1[1] & uVar13;
            }
          }
        }
        *(uint *)(puVar12[2] + 4) = puVar12[1];
        *(uint *)(puVar12[1] + 8) = puVar12[2];
      }
    }
    if (((uVar7 & 1) != 0) || (puVar11 != puVar10)) {
      piVar1 = piVar4 + (int)puVar10 * 2;
      uVar13 = piVar1[1];
      puVar12[2] = (uint)piVar1;
      puVar12[1] = uVar13;
      piVar1[1] = (int)puVar12;
      *(uint **)(puVar12[1] + 8) = puVar12;
      if (puVar12[1] == puVar12[2]) {
        cVar5 = *(char *)((int)puVar10 + uVar6 + 4);
        *(char *)((int)puVar10 + uVar6 + 4) = cVar5 + '\x01';
        bVar8 = (byte)puVar10;
        if (puVar10 < (uint *)0x20) {
          if (cVar5 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar10 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 & 0x1f);
        }
        else {
          if (cVar5 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar10 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
      }
    }
    *puVar12 = local_8;
    *(uint *)((local_8 - 4) + (int)puVar12) = local_8;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      if (DAT_0040bc78 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_0040bc90 * 0x8000 + DAT_0040bc78[3]),0x8000,0x4000);
        DAT_0040bc78[2] = DAT_0040bc78[2] | 0x80000000U >> ((byte)DAT_0040bc90 & 0x1f);
        *(undefined4 *)(DAT_0040bc78[4] + 0xc4 + DAT_0040bc90 * 4) = 0;
        *(char *)(DAT_0040bc78[4] + 0x43) = *(char *)(DAT_0040bc78[4] + 0x43) + -1;
        if (*(char *)(DAT_0040bc78[4] + 0x43) == '\0') {
          DAT_0040bc78[1] = DAT_0040bc78[1] & 0xfffffffe;
        }
        if (DAT_0040bc78[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_0040bc78[3],0,0x8000);
          HeapFree(DAT_0040bec0,0,(LPVOID)DAT_0040bc78[4]);
          _memmove(DAT_0040bc78,DAT_0040bc78 + 5,
                   (DAT_0040bc7c * 0x14 - (int)DAT_0040bc78) + -0x14 + DAT_0040bc80);
          DAT_0040bc7c = DAT_0040bc7c + -1;
          if (DAT_0040bc78 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_0040bc88 = DAT_0040bc80;
        }
      }
      DAT_0040bc78 = param_1;
      DAT_0040bc90 = uVar14;
    }
  }
  return;
}



// Library Function - Single Match
//  ___sbh_alloc_new_region
// 
// Library: Visual Studio 2003 Release

undefined4 * ___sbh_alloc_new_region(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_0040bc7c == DAT_0040bc8c) {
    pvVar2 = HeapReAlloc(DAT_0040bec0,0,DAT_0040bc80,(DAT_0040bc8c * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_0040bc8c = DAT_0040bc8c + 0x10;
    DAT_0040bc80 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_0040bc80 + DAT_0040bc7c * 0x14);
  pvVar2 = HeapAlloc(DAT_0040bec0,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_0040bc7c = DAT_0040bc7c + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_0040bec0,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Library Function - Single Match
//  ___sbh_alloc_new_group
// 
// Library: Visual Studio 2003 Release

int __cdecl ___sbh_alloc_new_group(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LPVOID pvVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  LPVOID lpAddress;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar8 = 0;
  for (iVar3 = *(int *)(param_1 + 8); -1 < iVar3; iVar3 = iVar3 << 1) {
    iVar8 = iVar8 + 1;
  }
  iVar3 = iVar8 * 0x204 + 0x144 + iVar2;
  iVar7 = 0x3f;
  iVar4 = iVar3;
  do {
    *(int *)(iVar4 + 8) = iVar4;
    *(int *)(iVar4 + 4) = iVar4;
    iVar4 = iVar4 + 8;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  lpAddress = (LPVOID)(iVar8 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar5 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar5 == (LPVOID)0x0) {
    iVar8 = -1;
  }
  else {
    if (lpAddress <= (LPVOID)((int)lpAddress + 0x7000U)) {
      piVar6 = (int *)((int)lpAddress + 0x10);
      iVar4 = ((uint)((int)(LPVOID)((int)lpAddress + 0x7000U) - (int)lpAddress) >> 0xc) + 1;
      do {
        piVar6[-2] = -1;
        piVar6[0x3fb] = -1;
        *piVar6 = (int)(piVar6 + 0x3ff);
        piVar6[-1] = 0xff0;
        piVar6[1] = (int)(piVar6 + -0x401);
        piVar6[0x3fa] = 0xff0;
        piVar6 = piVar6 + 0x400;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(int *)(iVar3 + 0x1fc) = (int)lpAddress + 0xc;
    *(int *)((int)lpAddress + 0x14) = iVar3 + 0x1f8;
    *(int *)(iVar3 + 0x200) = (int)lpAddress + 0x700c;
    *(int *)((int)lpAddress + 0x7010) = iVar3 + 0x1f8;
    *(undefined4 *)(iVar2 + 0x44 + iVar8 * 4) = 0;
    *(undefined4 *)(iVar2 + 0xc4 + iVar8 * 4) = 1;
    cVar1 = *(char *)(iVar2 + 0x43);
    *(char *)(iVar2 + 0x43) = cVar1 + '\x01';
    if (cVar1 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar8 & 0x1f));
  }
  return iVar8;
}



// Library Function - Single Match
//  ___sbh_resize_block
// 
// Library: Visual Studio 2003 Release

undefined4 __cdecl ___sbh_resize_block(uint *param_1,int param_2,int param_3)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_c;
  
  uVar7 = param_1[4];
  uVar10 = param_2 - param_1[3] >> 0xf;
  iVar5 = uVar10 * 0x204 + 0x144 + uVar7;
  uVar12 = param_3 + 0x17U & 0xfffffff0;
  iVar9 = *(int *)(param_2 + -4) + -1;
  puVar8 = (uint *)(*(int *)(param_2 + -4) + -5 + param_2);
  uVar13 = *puVar8;
  if (iVar9 < (int)uVar12) {
    if (((uVar13 & 1) != 0) || ((int)(uVar13 + iVar9) < (int)uVar12)) {
      return 0;
    }
    local_c = ((int)uVar13 >> 4) - 1;
    if (0x3f < local_c) {
      local_c = 0x3f;
    }
    if (puVar8[1] == puVar8[2]) {
      if (local_c < 0x20) {
        pcVar1 = (char *)(local_c + 4 + uVar7);
        uVar11 = ~(0x80000000U >> ((byte)local_c & 0x1f));
        puVar2 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(local_c + 4 + uVar7);
        uVar11 = ~(0x80000000U >> ((byte)local_c - 0x20 & 0x1f));
        puVar2 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(uint *)(puVar8[2] + 4) = puVar8[1];
    *(uint *)(puVar8[1] + 8) = puVar8[2];
    iVar9 = uVar13 + (iVar9 - uVar12);
    if (0 < iVar9) {
      uVar13 = (iVar9 >> 4) - 1;
      iVar3 = param_2 + -4 + uVar12;
      if (0x3f < uVar13) {
        uVar13 = 0x3f;
      }
      iVar5 = iVar5 + uVar13 * 8;
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
      *(int *)(iVar3 + 8) = iVar5;
      *(int *)(iVar5 + 4) = iVar3;
      *(int *)(*(int *)(iVar3 + 4) + 8) = iVar3;
      if (*(int *)(iVar3 + 4) == *(int *)(iVar3 + 8)) {
        cVar6 = *(char *)(uVar13 + 4 + uVar7);
        *(char *)(uVar13 + 4 + uVar7) = cVar6 + '\x01';
        if (uVar13 < 0x20) {
          if (cVar6 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> ((byte)uVar13 & 0x1f);
          }
          puVar8 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
        }
        else {
          if (cVar6 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar13 - 0x20 & 0x1f);
          }
          puVar8 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
          uVar13 = uVar13 - 0x20;
        }
        *puVar8 = *puVar8 | 0x80000000U >> ((byte)uVar13 & 0x1f);
      }
      piVar4 = (int *)(param_2 + -4 + uVar12);
      *piVar4 = iVar9;
      *(int *)(iVar9 + -4 + (int)piVar4) = iVar9;
    }
    *(uint *)(param_2 + -4) = uVar12 + 1;
    *(uint *)(param_2 + -8 + uVar12) = uVar12 + 1;
  }
  else {
    if ((int)uVar12 < iVar9) {
      param_3 = iVar9 - uVar12;
      *(uint *)(param_2 + -4) = uVar12 + 1;
      piVar4 = (int *)(param_2 + -4 + uVar12);
      uVar11 = (param_3 >> 4) - 1;
      piVar4[-1] = uVar12 + 1;
      if (0x3f < uVar11) {
        uVar11 = 0x3f;
      }
      if ((uVar13 & 1) == 0) {
        uVar12 = ((int)uVar13 >> 4) - 1;
        if (0x3f < uVar12) {
          uVar12 = 0x3f;
        }
        if (puVar8[1] == puVar8[2]) {
          if (uVar12 < 0x20) {
            pcVar1 = (char *)(uVar12 + 4 + uVar7);
            uVar12 = ~(0x80000000U >> ((byte)uVar12 & 0x1f));
            puVar2 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
            *puVar2 = *puVar2 & uVar12;
            *pcVar1 = *pcVar1 + -1;
            if (*pcVar1 == '\0') {
              *param_1 = *param_1 & uVar12;
            }
          }
          else {
            pcVar1 = (char *)(uVar12 + 4 + uVar7);
            uVar12 = ~(0x80000000U >> ((byte)uVar12 - 0x20 & 0x1f));
            puVar2 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
            *puVar2 = *puVar2 & uVar12;
            *pcVar1 = *pcVar1 + -1;
            if (*pcVar1 == '\0') {
              param_1[1] = param_1[1] & uVar12;
            }
          }
        }
        *(uint *)(puVar8[2] + 4) = puVar8[1];
        *(uint *)(puVar8[1] + 8) = puVar8[2];
        param_3 = param_3 + uVar13;
        uVar11 = (param_3 >> 4) - 1;
        if (0x3f < uVar11) {
          uVar11 = 0x3f;
        }
      }
      iVar5 = iVar5 + uVar11 * 8;
      iVar9 = *(int *)(iVar5 + 4);
      piVar4[2] = iVar5;
      piVar4[1] = iVar9;
      *(int **)(iVar5 + 4) = piVar4;
      *(int **)(piVar4[1] + 8) = piVar4;
      if (piVar4[1] == piVar4[2]) {
        cVar6 = *(char *)(uVar11 + 4 + uVar7);
        *(char *)(uVar11 + 4 + uVar7) = cVar6 + '\x01';
        if (uVar11 < 0x20) {
          if (cVar6 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> ((byte)uVar11 & 0x1f);
          }
          puVar8 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
        }
        else {
          if (cVar6 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar11 - 0x20 & 0x1f);
          }
          puVar8 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
          uVar11 = uVar11 - 0x20;
        }
        *puVar8 = *puVar8 | 0x80000000U >> ((byte)uVar11 & 0x1f);
      }
      *piVar4 = param_3;
      *(int *)(param_3 + -4 + (int)piVar4) = param_3;
    }
  }
  return 1;
}



// Library Function - Single Match
//  ___sbh_alloc_block
// 
// Library: Visual Studio 2003 Release

int * __cdecl ___sbh_alloc_block(uint *param_1)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  uint local_c;
  int local_8;
  
  uVar7 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar8 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  puVar9 = DAT_0040bc80 + DAT_0040bc7c * 5;
  bVar6 = (byte)iVar8;
  if (iVar8 < 0x20) {
    uVar15 = 0xffffffff >> (bVar6 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    uVar15 = 0;
    local_c = 0xffffffff >> (bVar6 - 0x20 & 0x1f);
  }
  bVar17 = DAT_0040bc88 < puVar9;
  param_1 = DAT_0040bc88;
  while ((bVar17 && ((param_1[1] & local_c | *param_1 & uVar15) == 0))) {
    param_1 = param_1 + 5;
    bVar17 = param_1 < puVar9;
  }
  puVar13 = DAT_0040bc80;
  if (param_1 == puVar9) {
    for (; (puVar13 < DAT_0040bc88 && ((puVar13[1] & local_c | *puVar13 & uVar15) == 0));
        puVar13 = puVar13 + 5) {
    }
    param_1 = puVar13;
    if (puVar13 == DAT_0040bc88) {
      for (; (puVar13 < puVar9 && (puVar13[2] == 0)); puVar13 = puVar13 + 5) {
      }
      puVar14 = DAT_0040bc80;
      param_1 = puVar13;
      if (puVar13 == puVar9) {
        for (; (puVar14 < DAT_0040bc88 && (puVar14[2] == 0)); puVar14 = puVar14 + 5) {
        }
        param_1 = puVar14;
        if ((puVar14 == DAT_0040bc88) &&
           (param_1 = ___sbh_alloc_new_region(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar8 = ___sbh_alloc_new_group((int)param_1);
      *(int *)param_1[4] = iVar8;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar5 = (int *)param_1[4];
  local_8 = *piVar5;
  if ((local_8 == -1) || ((piVar5[local_8 + 0x31] & local_c | piVar5[local_8 + 0x11] & uVar15) == 0)
     ) {
    local_8 = 0;
    puVar9 = (uint *)(piVar5 + 0x11);
    uVar11 = piVar5[0x31] & local_c | *puVar9 & uVar15;
    while (uVar11 == 0) {
      puVar13 = puVar9 + 0x21;
      local_8 = local_8 + 1;
      puVar9 = puVar9 + 1;
      uVar11 = *puVar13 & local_c | *puVar9 & uVar15;
    }
  }
  piVar3 = piVar5 + local_8 * 0x81 + 0x51;
  iVar8 = 0;
  uVar15 = piVar5[local_8 + 0x11] & uVar15;
  if (uVar15 == 0) {
    uVar15 = piVar5[local_8 + 0x31] & local_c;
    iVar8 = 0x20;
  }
  for (; -1 < (int)uVar15; uVar15 = uVar15 << 1) {
    iVar8 = iVar8 + 1;
  }
  piVar12 = (int *)piVar3[iVar8 * 2 + 1];
  iVar10 = *piVar12 - uVar7;
  iVar16 = (iVar10 >> 4) + -1;
  if (0x3f < iVar16) {
    iVar16 = 0x3f;
  }
  DAT_0040bc88 = param_1;
  if (iVar16 != iVar8) {
    if (piVar12[1] == piVar12[2]) {
      if (iVar8 < 0x20) {
        pcVar2 = (char *)((int)piVar5 + iVar8 + 4);
        uVar15 = ~(0x80000000U >> ((byte)iVar8 & 0x1f));
        piVar5[local_8 + 0x11] = uVar15 & piVar5[local_8 + 0x11];
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          *param_1 = *param_1 & uVar15;
        }
      }
      else {
        pcVar2 = (char *)((int)piVar5 + iVar8 + 4);
        uVar15 = ~(0x80000000U >> ((byte)iVar8 - 0x20 & 0x1f));
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] & uVar15;
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          param_1[1] = param_1[1] & uVar15;
        }
      }
    }
    *(int *)(piVar12[2] + 4) = piVar12[1];
    *(int *)(piVar12[1] + 8) = piVar12[2];
    if (iVar10 == 0) goto LAB_0040681d;
    piVar1 = piVar3 + iVar16 * 2;
    iVar8 = piVar1[1];
    piVar12[2] = (int)piVar1;
    piVar12[1] = iVar8;
    piVar1[1] = (int)piVar12;
    *(int **)(piVar12[1] + 8) = piVar12;
    if (piVar12[1] == piVar12[2]) {
      cVar4 = *(char *)(iVar16 + 4 + (int)piVar5);
      *(char *)(iVar16 + 4 + (int)piVar5) = cVar4 + '\x01';
      bVar6 = (byte)iVar16;
      if (iVar16 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar6 & 0x1f);
        }
        piVar5[local_8 + 0x11] = piVar5[local_8 + 0x11] | 0x80000000U >> (bVar6 & 0x1f);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
        }
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar10 != 0) {
    *piVar12 = iVar10;
    *(int *)(iVar10 + -4 + (int)piVar12) = iVar10;
  }
LAB_0040681d:
  piVar12 = (int *)((int)piVar12 + iVar10);
  *piVar12 = uVar7 + 1;
  *(uint *)((int)piVar12 + (uVar7 - 4)) = uVar7 + 1;
  iVar8 = *piVar3;
  *piVar3 = iVar8 + 1;
  if (((iVar8 == 0) && (param_1 == DAT_0040bc78)) && (local_8 == DAT_0040bc90)) {
    DAT_0040bc78 = (uint *)0x0;
  }
  *piVar5 = local_8;
  return piVar12 + 1;
}



// Library Function - Single Match
//  __global_unwind2
// 
// Library: Visual Studio

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x406878,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Library Function - Single Match
//  __local_unwind2
// 
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
// Studio 2003 Release

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack28;
  undefined *puStack24;
  undefined4 local_14;
  int iStack16;
  
  iStack16 = param_1;
  puStack24 = &LAB_00406880;
  uStack28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack28;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_00406936();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  *in_FS_OFFSET = uStack28;
  return;
}



void FUN_00406936(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_0040b5e4 = in_EAX;
  DAT_0040b5e8 = *(undefined4 *)(unaff_EBP + 8);
  DAT_0040b5ec = unaff_EBP;
  return;
}



// Library Function - Single Match
//  __ValidateEH3RN
// 
// Library: Visual Studio 2003 Release

undefined4 __cdecl __ValidateEH3RN(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  SIZE_T SVar5;
  int *piVar6;
  LONG LVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int in_FS_OFFSET;
  undefined local_24 [24];
  DWORD local_c;
  uint *local_8;
  
  puVar3 = param_1;
  puVar8 = (uint *)param_1[2];
  if (((uint)puVar8 & 3) != 0) {
    return 0;
  }
  local_8 = *(uint **)(*(int *)(in_FS_OFFSET + 0x18) + 8);
  if ((local_8 <= puVar8) && (puVar8 < *(uint **)(*(int *)(in_FS_OFFSET + 0x18) + 4))) {
    return 0;
  }
  puVar1 = param_1 + 3;
  if (*puVar1 == 0xffffffff) {
    return 1;
  }
  uVar9 = 0;
  param_1 = (uint *)0x0;
  puVar4 = puVar8;
  do {
    if ((*puVar4 != 0xffffffff) && (uVar9 <= *puVar4)) {
      return 0;
    }
    if (puVar4[1] != 0) {
      param_1 = (uint *)((int)param_1 + 1);
    }
    uVar9 = uVar9 + 1;
    puVar4 = puVar4 + 3;
  } while (uVar9 <= *puVar1);
  if ((param_1 != (uint *)0x0) &&
     ((puVar1 = (uint *)puVar3[-2], puVar1 < local_8 || (puVar3 <= puVar1)))) {
    return 0;
  }
  uVar9 = (uint)puVar8 & 0xfffff000;
  iVar12 = 0;
  if (0 < DAT_0040bbf8) {
    do {
      if ((&DAT_0040bc00)[iVar12] == uVar9) {
        if (iVar12 < 1) {
          return 1;
        }
        LVar7 = InterlockedExchange((LONG *)&DAT_0040bc40,1);
        if (LVar7 != 0) {
          return 1;
        }
        if ((&DAT_0040bc00)[iVar12] == uVar9) goto LAB_00406b49;
        iVar12 = DAT_0040bbf8 + -1;
        if (iVar12 < 0) goto LAB_00406b37;
        goto LAB_00406b27;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < DAT_0040bbf8);
  }
  SVar5 = VirtualQuery(puVar8,(PMEMORY_BASIC_INFORMATION)local_24,0x1c);
  if (SVar5 == 0) {
    return 0xffffffff;
  }
  if (local_c != 0x1000000) {
    return 0xffffffff;
  }
  if ((local_24[20] & 0xcc) != 0) {
    if (((*local_24._4_4_ != 0x5a4d) ||
        (piVar6 = (int *)(*(int *)(local_24._4_4_ + 0x1e) + (int)local_24._4_4_), *piVar6 != 0x4550)
        ) || (*(short *)(piVar6 + 6) != 0x10b)) {
      return 0xffffffff;
    }
    iVar12 = *(ushort *)(piVar6 + 5) + 0x18 + (int)piVar6;
    if (*(short *)((int)piVar6 + 6) == 0) {
      return 0xffffffff;
    }
    if (((*(uint *)(iVar12 + 0xc) <= (uint)((int)puVar8 - (int)local_24._4_4_)) &&
        ((uint)((int)puVar8 - (int)local_24._4_4_) < *(int *)(iVar12 + 8) + *(uint *)(iVar12 + 0xc))
        ) && ((*(byte *)(iVar12 + 0x27) & 0x80) != 0)) {
      return 0;
    }
  }
  LVar7 = InterlockedExchange((LONG *)&DAT_0040bc40,1);
  iVar12 = DAT_0040bbf8;
  if (LVar7 != 0) {
    return 1;
  }
  iVar10 = DAT_0040bbf8;
  if (0 < DAT_0040bbf8) {
    puVar8 = (uint *)(&DAT_0040bbfc + DAT_0040bbf8 * 4);
    do {
      if (*puVar8 == uVar9) break;
      iVar10 = iVar10 + -1;
      puVar8 = puVar8 + -1;
    } while (0 < iVar10);
  }
  if (iVar10 == 0) {
    iVar10 = 0xf;
    if (DAT_0040bbf8 < 0x10) {
      iVar10 = DAT_0040bbf8;
    }
    iVar11 = 0;
    if (-1 < iVar10) {
      do {
        puVar8 = &DAT_0040bc00 + iVar11;
        uVar2 = *puVar8;
        iVar11 = iVar11 + 1;
        *puVar8 = uVar9;
        uVar9 = uVar2;
      } while (iVar11 <= iVar10);
    }
    if (iVar12 < 0x10) {
      DAT_0040bbf8 = iVar12 + 1;
    }
  }
  InterlockedExchange((LONG *)&DAT_0040bc40,0);
  return 1;
  while (iVar12 = iVar12 + -1, -1 < iVar12) {
LAB_00406b27:
    if ((&DAT_0040bc00)[iVar12] == uVar9) break;
  }
  if (iVar12 < 0) {
LAB_00406b37:
    if (DAT_0040bbf8 < 0x10) {
      DAT_0040bbf8 = DAT_0040bbf8 + 1;
    }
    iVar12 = DAT_0040bbf8 + -1;
  }
  else {
    if (iVar12 == 0) goto LAB_00406b61;
  }
LAB_00406b49:
  iVar10 = 0;
  if (-1 < iVar12) {
    do {
      puVar8 = &DAT_0040bc00 + iVar10;
      uVar2 = *puVar8;
      iVar10 = iVar10 + 1;
      *puVar8 = uVar9;
      uVar9 = uVar2;
    } while (iVar10 <= iVar12);
  }
LAB_00406b61:
  InterlockedExchange((LONG *)&DAT_0040bc40,0);
  return 1;
}



// Library Function - Single Match
//  __callnewh
// 
// Library: Visual Studio 2003 Release

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  if (DAT_0040bc44 != (code *)0x0) {
    iVar1 = (*DAT_0040bc44)(_Size);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __write
// 
// Library: Visual Studio 2003 Release

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  BOOL BVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  DWORD local_418;
  DWORD local_414;
  char *local_410;
  char local_40c [1028];
  int local_8;
  
  local_8 = DAT_0040b498;
  if ((uint)_FileHandle < DAT_0040bec8) {
    piVar1 = &DAT_0040bee0 + (_FileHandle >> 5);
    iVar8 = (_FileHandle & 0x1fU) * 8;
    bVar2 = *(byte *)(*piVar1 + 4 + iVar8);
    if ((bVar2 & 1) == 0) goto LAB_00406d58;
    local_414 = 0;
    if (_MaxCharCount == 0) goto LAB_00406d6c;
    if ((bVar2 & 0x20) != 0) {
      __lseeki64(_FileHandle,0,2);
    }
    if ((*(byte *)((HANDLE *)(*piVar1 + iVar8) + 1) & 0x80) != 0) {
      local_410 = (char *)_Buf;
      _FileHandle = 0;
      if (_MaxCharCount != 0) {
        do {
          iVar9 = 0;
          uVar7 = (int)local_410 - (int)_Buf;
          pcVar5 = local_40c;
          do {
            if (_MaxCharCount <= uVar7) break;
            pcVar4 = local_410 + 1;
            cVar3 = *local_410;
            uVar7 = uVar7 + 1;
            if (cVar3 == '\n') {
              *pcVar5 = '\r';
              pcVar5 = pcVar5 + 1;
              iVar9 = iVar9 + 1;
            }
            *pcVar5 = cVar3;
            pcVar5 = pcVar5 + 1;
            iVar9 = iVar9 + 1;
            local_410 = pcVar4;
          } while (iVar9 < 0x400);
          BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar8),local_40c,(int)pcVar5 - (int)local_40c,
                            &local_418,(LPOVERLAPPED)0x0);
          if (BVar6 == 0) {
            _FileHandle = GetLastError();
            goto LAB_00406cbd;
          }
          local_414 = local_414 + local_418;
          if (((int)local_418 < (int)pcVar5 - (int)local_40c) ||
             (_MaxCharCount <= (uint)((int)local_410 - (int)_Buf))) goto LAB_00406cbd;
        } while( true );
      }
LAB_00406d29:
                    // WARNING: Load size is inaccurate
      if (((*(byte *)(*piVar1 + 4 + iVar8) & 0x40) == 0) || (*_Buf != '\x1a')) {
        _DAT_0040ba50 = 0x1c;
        _DAT_0040ba54 = 0;
      }
      goto LAB_00406d6c;
    }
    BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar8),_Buf,_MaxCharCount,&local_418,(LPOVERLAPPED)0x0);
    if (BVar6 == 0) {
      _FileHandle = GetLastError();
    }
    else {
      _FileHandle = 0;
      local_414 = local_418;
    }
LAB_00406cbd:
    if (local_414 != 0) goto LAB_00406d6c;
    if (_FileHandle == 0) goto LAB_00406d29;
    if (_FileHandle != 5) {
      __dosmaperr(_FileHandle);
      goto LAB_00406d6c;
    }
    _DAT_0040ba54 = 5;
  }
  else {
LAB_00406d58:
    _DAT_0040ba54 = 0;
  }
  _DAT_0040ba50 = 9;
LAB_00406d6c:
  iVar8 = FUN_004041a2(local_8);
  return iVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __commit
// 
// Library: Visual Studio 2003 Release

int __cdecl __commit(int _FileHandle)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  
  DVar2 = _DAT_0040ba54;
  if (((uint)_FileHandle < DAT_0040bec8) &&
     ((*(byte *)((&DAT_0040bee0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 8) & 1) != 0)) {
    hFile = (HANDLE)__get_osfhandle(_FileHandle);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    if (DVar2 == 0) {
      return 0;
    }
  }
  _DAT_0040ba54 = DVar2;
  _DAT_0040ba50 = 9;
  return -1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __lseek
// 
// Library: Visual Studio 2003 Release

long __cdecl __lseek(int _FileHandle,long _Offset,int _Origin)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD DVar2;
  ulong uVar3;
  int iVar4;
  
  if ((uint)_FileHandle < DAT_0040bec8) {
    iVar4 = (_FileHandle & 0x1fU) * 8;
    if ((*(byte *)((&DAT_0040bee0)[_FileHandle >> 5] + 4 + iVar4) & 1) != 0) {
      hFile = (HANDLE)__get_osfhandle(_FileHandle);
      if (hFile == (HANDLE)0xffffffff) {
        _DAT_0040ba50 = 9;
        return 0xffffffff;
      }
      DVar2 = SetFilePointer(hFile,_Offset,(PLONG)0x0,_Origin);
      if (DVar2 == 0xffffffff) {
        uVar3 = GetLastError();
      }
      else {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        pbVar1 = (byte *)((&DAT_0040bee0)[_FileHandle >> 5] + 4 + iVar4);
        *pbVar1 = *pbVar1 & 0xfd;
        return DVar2;
      }
      __dosmaperr(uVar3);
      return 0xffffffff;
    }
  }
  _DAT_0040ba50 = 9;
  _DAT_0040ba54 = 0;
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __getbuf
// 
// Library: Visual Studio 2003 Release

void __cdecl __getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_0040ba3c = _DAT_0040ba3c + 1;
  pcVar1 = (char *)_malloc(0x1000);
  _File->_base = pcVar1;
  if (pcVar1 == (char *)0x0) {
    _File->_flag = _File->_flag | 4;
    _File->_base = (char *)&_File->_charbuf;
    _File->_bufsiz = 2;
  }
  else {
    _File->_flag = _File->_flag | 8;
    _File->_bufsiz = 0x1000;
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return;
}



// Library Function - Single Match
//  ___security_init_cookie
// 
// Library: Visual Studio 2003 Release

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint local_14;
  uint local_10;
  _FILETIME local_c;
  
  if ((DAT_0040b498 == 0) || (DAT_0040b498 == 0xbb40e64e)) {
    GetSystemTimeAsFileTime((LPFILETIME)&local_c);
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter((LARGE_INTEGER *)&local_14);
    DAT_0040b498 = local_c.dwHighDateTime ^ local_c.dwLowDateTime ^ DVar1 ^ DVar2 ^ DVar3 ^
                   local_10 ^ local_14;
    if (DAT_0040b498 == 0) {
      DAT_0040b498 = 0xbb40e64e;
    }
  }
  return;
}



// WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog
// WARNING: Function: __chkstk replaced with injection: alloca_probe
// Library Function - Single Match
//  ___security_error_handler
// 
// Library: Visual Studio 2003 Release

void ___security_error_handler(int param_1)

{
  code *pcVar1;
  DWORD DVar2;
  size_t sVar3;
  char *_Str;
  char *_Source;
  char *local_12c;
  CHAR local_128 [260];
  undefined local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined4 uStack12;
  undefined *local_8;
  
  local_8 = &DAT_00409d30;
  uStack12 = 0x406f1e;
  local_20 = DAT_0040b498;
  if (DAT_0040bc6c == (code *)0x0) {
    if (param_1 == 1) {
      _Source = "Buffer overrun detected!";
      local_12c = 
      "A buffer overrun has been detected which has corrupted the program\'s\ninternal state.  The program cannot safely continue execution and must\nnow be terminated.\n"
      ;
    }
    else {
      _Source = "Unknown security failure detected!";
      local_12c = 
      "A security error of unknown cause has been detected which has\ncorrupted the program\'s internal state.  The program cannot safely\ncontinue execution and must now be terminated.\n"
      ;
    }
    local_24 = 0;
    DVar2 = GetModuleFileNameA((HMODULE)0x0,local_128,0x104);
    if (DVar2 == 0) {
      _strcpy(local_128,"<program name unknown>");
    }
    _Str = local_128;
    sVar3 = _strlen(_Str);
    if (0x3c < sVar3 + 0xb) {
      sVar3 = _strlen(_Str);
      _Str = &stack0xfffffea7 + sVar3;
      _strncpy(_Str,"...",3);
    }
    _strlen(_Str);
    local_1c = &stack0xfffffec8;
    _strcpy(&stack0xfffffec8,_Source);
    _strcat(&stack0xfffffec8,"\n\n");
    _strcat(&stack0xfffffec8,"Program: ");
    _strcat(&stack0xfffffec8,_Str);
    _strcat(&stack0xfffffec8,"\n\n");
    _strcat(&stack0xfffffec8,local_12c);
    ___crtMessageBoxA(&stack0xfffffec8,"Microsoft Visual C++ Runtime Library",0x12010);
  }
  else {
    local_8 = (undefined *)0x0;
    (*DAT_0040bc6c)();
    local_8 = (undefined *)0xffffffff;
  }
  __exit(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// Library Function - Single Match
//  _fclose
// 
// Library: Visual Studio 2003 Release

int __cdecl _fclose(FILE *_File)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if ((_File->_flag & 0x40U) == 0) {
    if ((_File->_flag & 0x83U) != 0) {
      iVar2 = __flush(_File);
      __freebuf(_File);
      iVar1 = __close(_File->_file);
      if (iVar1 < 0) {
        iVar2 = -1;
      }
      else {
        if (_File->_tmpfname != (char *)0x0) {
          _free(_File->_tmpfname);
          _File->_tmpfname = (char *)0x0;
        }
      }
    }
  }
  else {
    iVar2 = -1;
  }
  _File->_flag = 0;
  return iVar2;
}



// WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog
// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3
// WARNING: Unable to track spacebase fully for stack
// Library Function - Single Match
//  ___crtGetStringTypeA
// 
// Library: Visual Studio 2003 Release

BOOL __cdecl
___crtGetStringTypeA
          (_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,
          int _Code_page,BOOL _BError)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  LPWORD pWVar7;
  LCID Locale;
  undefined *puVar8;
  void *_Memory;
  LPWORD pWVar9;
  undefined4 uStackY88;
  BOOL local_28;
  int local_24;
  WORD local_20 [2];
  undefined *local_1c;
  undefined4 uStack12;
  undefined *local_8;
  
  local_8 = &DAT_00409d40;
  uStack12 = 0x4070b9;
  _Memory = (void *)0x0;
  if (DAT_0040bc70 == 0) {
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_0040bc70 = 2;
      }
    }
    else {
      DAT_0040bc70 = 1;
    }
  }
  if ((DAT_0040bc70 == 2) || (DAT_0040bc70 == 0)) {
    Locale = _Code_page;
    if (_Code_page == 0) {
      Locale = DAT_0040bc54;
    }
    pWVar9 = _LpCharType;
    if (_LpCharType == (LPWORD)0x0) {
      pWVar9 = DAT_0040bc64;
    }
    pWVar7 = (LPWORD)___ansicp(Locale);
    if (pWVar7 != (LPWORD)0xffffffff) {
      if (pWVar7 != pWVar9) {
        uStackY88 = 0x407230;
        _Memory = (void *)___convertcp((UINT)pWVar9,(UINT)pWVar7,(char *)_DWInfoType,
                                       (size_t *)&_LpSrcStr,(LPSTR)0x0,0);
        _DWInfoType = (DWORD)_Memory;
        if (_Memory == (void *)0x0) {
          return 0;
        }
      }
      BVar2 = GetStringTypeA(Locale,(DWORD)_Plocinfo,(LPCSTR)_DWInfoType,(int)_LpSrcStr,
                             (LPWORD)_CchSrc);
      if (_Memory != (void *)0x0) {
        _free(_Memory);
        return BVar2;
      }
      return BVar2;
    }
  }
  else {
    if (DAT_0040bc70 == 1) {
      local_28 = 0;
      local_24 = 0;
      if (_LpCharType == (LPWORD)0x0) {
        _LpCharType = DAT_0040bc64;
      }
      uStackY88 = 0x40714b;
      iVar4 = MultiByteToWideChar((UINT)_LpCharType,(uint)(_BError != 0) * 8 + 1,(LPCSTR)_DWInfoType
                                  ,(int)_LpSrcStr,(LPWSTR)0x0,0);
      if (iVar4 != 0) {
        local_8 = (undefined *)0x0;
        puVar5 = (undefined *)(iVar4 * 2 + 3U & 0xfffffffc);
        iVar1 = -(int)puVar5;
        puVar6 = &stack0xffffffc4 + iVar1;
        local_1c = &stack0xffffffc4 + iVar1;
        *(int *)((int)local_20 + iVar1 + -0x20) = iVar4 * 2;
        *(undefined4 *)(&stack0xffffffbc + iVar1) = 0;
        *(undefined **)((int)&stack0xffffffb8 + iVar1) = &stack0xffffffc4 + iVar1;
        *(undefined4 *)(&stack0xffffffb4 + iVar1) = 0x40717d;
        _memset(*(void **)(&stack0xffffffb8 + iVar1),*(int *)(&stack0xffffffbc + iVar1),
                *(size_t *)((int)local_20 + iVar1 + -0x20));
        local_8 = (undefined *)0xffffffff;
        if (&stack0xffffffc4 == puVar5) {
          *(int *)((int)local_20 + iVar1 + -0x20) = iVar4;
          *(undefined4 *)(&stack0xffffffbc + iVar1) = 2;
          *(undefined4 *)(&stack0xffffffb8 + iVar1) = 0x4071a7;
          puVar6 = (undefined *)
                   _calloc(*(size_t *)(&stack0xffffffbc + iVar1),
                           *(size_t *)((int)local_20 + iVar1 + -0x20));
          if (puVar6 == (undefined *)0x0) {
            return 0;
          }
          local_24 = 1;
        }
        *(int *)((int)local_20 + iVar1 + -0x20) = iVar4;
        *(undefined **)(&stack0xffffffbc + iVar1) = puVar6;
        *(LPCSTR *)(&stack0xffffffb8 + iVar1) = _LpSrcStr;
        *(DWORD *)(&stack0xffffffb4 + iVar1) = _DWInfoType;
        *(undefined4 *)(&stack0xffffffb0 + iVar1) = 1;
        *(LPWORD *)(&stack0xffffffac + iVar1) = _LpCharType;
        puVar8 = (undefined *)((int)&uStackY88 + iVar1);
        *(undefined4 *)((int)&uStackY88 + iVar1) = 0x4071c9;
        iVar4 = MultiByteToWideChar(*(UINT *)(&stack0xffffffac + iVar1),
                                    *(DWORD *)(&stack0xffffffb0 + iVar1),
                                    *(LPCSTR *)(&stack0xffffffb4 + iVar1),
                                    *(int *)(&stack0xffffffb8 + iVar1),
                                    *(LPWSTR *)(&stack0xffffffbc + iVar1),
                                    *(int *)((int)local_20 + iVar1 + -0x20));
        puVar5 = puVar8;
        if (iVar4 != 0) {
          *(int *)(puVar8 + -4) = _CchSrc;
          *(int *)(puVar8 + -8) = iVar4;
          *(undefined **)(puVar8 + -0xc) = puVar6;
          *(_locale_t *)(puVar8 + -0x10) = _Plocinfo;
          puVar5 = puVar8 + -0x14;
          *(undefined4 *)(puVar8 + -0x14) = 0x4071db;
          local_28 = GetStringTypeW(*(DWORD *)(puVar8 + -0x10),*(LPCWSTR *)(puVar8 + -0xc),
                                    *(int *)(puVar8 + -8),*(LPWORD *)(puVar8 + -4));
        }
        if (local_24 != 0) {
          *(undefined **)(puVar5 + -4) = puVar6;
          *(undefined4 *)(puVar5 + -8) = 0x4071ea;
          _free(*(void **)(puVar5 + -4));
          return local_28;
        }
        return local_28;
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __read
// 
// Library: Visual Studio 2003 Release

int __cdecl __read(int _FileHandle,void *_DstBuf,uint _MaxCharCount)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  char *pcVar5;
  BOOL BVar6;
  DWORD DVar7;
  LPVOID lpBuffer;
  char *pcVar8;
  int iVar9;
  DWORD local_14;
  char *local_10;
  char *local_c;
  char local_5;
  
  if ((uint)_FileHandle < DAT_0040bec8) {
    piVar1 = &DAT_0040bee0 + (_FileHandle >> 5);
    iVar9 = (_FileHandle & 0x1fU) * 8;
    bVar3 = *(byte *)(*piVar1 + iVar9 + 4);
    if ((bVar3 & 1) != 0) {
      local_10 = (char *)0x0;
      if ((_MaxCharCount == 0) || ((bVar3 & 2) != 0)) {
        return 0;
      }
      lpBuffer = _DstBuf;
      if (((bVar3 & 0x48) != 0) && (*(char *)(*piVar1 + iVar9 + 5) != '\n')) {
        _MaxCharCount = _MaxCharCount - 1;
        *(undefined *)_DstBuf = *(undefined *)(*piVar1 + 5 + iVar9);
        lpBuffer = (LPVOID)((int)_DstBuf + 1);
        local_10 = (char *)0x1;
        *(undefined *)(*piVar1 + 5 + iVar9) = 10;
      }
      BVar6 = ReadFile(*(HANDLE *)(*piVar1 + iVar9),lpBuffer,_MaxCharCount,&local_14,
                       (LPOVERLAPPED)0x0);
      if (BVar6 == 0) {
        DVar7 = GetLastError();
        if (DVar7 == 5) {
          _DAT_0040ba50 = 9;
          _DAT_0040ba54 = 5;
          return -1;
        }
        if (DVar7 == 0x6d) {
          return 0;
        }
        __dosmaperr(DVar7);
        return -1;
      }
      if ((*(byte *)(*piVar1 + 4 + iVar9) & 0x80) == 0) {
        return (int)local_10 + local_14;
      }
                    // WARNING: Load size is inaccurate
      if ((local_14 == 0) || (*_DstBuf != '\n')) {
        pbVar2 = (byte *)(*piVar1 + 4 + iVar9);
        *pbVar2 = *pbVar2 & 0xfb;
      }
      else {
        pbVar2 = (byte *)(*piVar1 + 4 + iVar9);
        *pbVar2 = *pbVar2 | 4;
      }
      local_10 = (char *)((int)local_10 + local_14 + (int)_DstBuf);
      local_c = (char *)_DstBuf;
      pcVar8 = (char *)_DstBuf;
      if (_DstBuf < local_10) {
        do {
          cVar4 = *local_c;
          if (cVar4 == '\x1a') {
            if ((*(byte *)(*piVar1 + 4 + iVar9) & 0x40) == 0) {
              pbVar2 = (byte *)(*piVar1 + 4 + iVar9);
              *pbVar2 = *pbVar2 | 2;
            }
            break;
          }
          if (cVar4 == '\r') {
            if (local_c < local_10 + -1) {
              pcVar5 = local_c + 1;
              if (local_c[1] == '\n') {
                local_c = local_c + 2;
                goto LAB_004073f5;
              }
LAB_0040740f:
              local_c = pcVar5;
              *pcVar8 = '\r';
            }
            else {
              local_c = local_c + 1;
              BVar6 = ReadFile(*(HANDLE *)(*piVar1 + iVar9),&local_5,1,&local_14,(LPOVERLAPPED)0x0);
              if (((BVar6 == 0) && (DVar7 = GetLastError(), pcVar5 = local_c, DVar7 != 0)) ||
                 (pcVar5 = local_c, local_14 == 0)) goto LAB_0040740f;
              if ((*(byte *)(*piVar1 + 4 + iVar9) & 0x48) == 0) {
                if ((pcVar8 == (char *)_DstBuf) && (local_5 == '\n')) goto LAB_004073f5;
                __lseek(_FileHandle,-1,1);
                pcVar5 = local_c;
                if (local_5 == '\n') goto LAB_00407413;
                goto LAB_0040740f;
              }
              if (local_5 == '\n') {
LAB_004073f5:
                *pcVar8 = '\n';
              }
              else {
                *pcVar8 = '\r';
                *(char *)(*piVar1 + 5 + iVar9) = local_5;
              }
            }
            pcVar8 = pcVar8 + 1;
          }
          else {
            *pcVar8 = cVar4;
            pcVar8 = pcVar8 + 1;
            local_c = local_c + 1;
          }
LAB_00407413:
        } while (local_c < local_10);
      }
      return (int)pcVar8 - (int)_DstBuf;
    }
  }
  _DAT_0040ba50 = 9;
  _DAT_0040ba54 = 0;
  return -1;
}



// WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog
// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3
// WARNING: Unable to track spacebase fully for stack
// Library Function - Single Match
//  ___crtLCMapStringA
// 
// Library: Visual Studio 2003 Release

int __cdecl
___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                  int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  bool bVar1;
  int iVar2;
  DWORD DVar3;
  undefined *puVar4;
  int iVar5;
  UINT UVar6;
  LPCSTR pCVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  char *pcVar13;
  undefined4 uStackY116;
  uint local_4c;
  int local_3c;
  int local_38;
  LPCSTR local_2c;
  size_t local_28;
  undefined *local_24;
  undefined *local_20;
  undefined *local_1c;
  undefined4 uStack12;
  undefined *local_8;
  
  local_8 = &DAT_00409d50;
  uStack12 = 0x407461;
  if (DAT_0040bc74 == 0) {
    uStackY116 = 0x407482;
    iVar2 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_0040bc74 = 2;
      }
    }
    else {
      DAT_0040bc74 = 1;
    }
  }
  pcVar13 = (char *)_DwMapFlag;
  pCVar7 = _LpSrcStr;
  if (0 < (int)_LpSrcStr) {
    do {
      pCVar7 = pCVar7 + -1;
      if (*pcVar13 == '\0') goto LAB_004074bb;
      pcVar13 = pcVar13 + 1;
    } while (pCVar7 != (LPCSTR)0x0);
    pCVar7 = (LPCSTR)0xffffffff;
LAB_004074bb:
    _LpSrcStr = _LpSrcStr + (-1 - (int)pCVar7);
  }
  if ((DAT_0040bc74 != 2) && (DAT_0040bc74 != 0)) {
    if (DAT_0040bc74 == 1) {
      uVar12 = 0;
      local_3c = 0;
      local_38 = 0;
      if (_CchDest == 0) {
        _CchDest = DAT_0040bc64;
      }
      uStackY116 = 0x40751b;
      iVar2 = MultiByteToWideChar(_CchDest,(uint)(_Code_page != 0) * 8 + 1,(LPCSTR)_DwMapFlag,
                                  (int)_LpSrcStr,(LPWSTR)0x0,0);
      if (iVar2 != 0) {
        puVar4 = (undefined *)(iVar2 * 2 + 3U & 0xfffffffc);
        iVar5 = -(int)puVar4;
        local_1c = &stack0xffffffa8 + iVar5;
        local_20 = &stack0xffffffa8 + iVar5;
        local_8 = (undefined *)0xffffffff;
        if (&stack0xffffffa8 == puVar4) {
          *(int *)(&stack0xffffffa4 + iVar5) = iVar2 * 2;
          *(undefined4 *)(&stack0xffffffa0 + iVar5) = 0x407574;
          local_20 = (undefined *)_malloc(*(size_t *)(&stack0xffffffa4 + iVar5));
          if (local_20 == (undefined *)0x0) {
            return 0;
          }
          local_3c = 1;
        }
        *(int *)(&stack0xffffffa4 + iVar5) = iVar2;
        *(undefined **)(&stack0xffffffa0 + iVar5) = local_20;
        *(LPCSTR *)(&stack0xffffff9c + iVar5) = _LpSrcStr;
        *(DWORD *)(&stack0xffffff98 + iVar5) = _DwMapFlag;
        *(undefined4 *)(&stack0xffffff94 + iVar5) = 1;
        *(int *)(&stack0xffffff90 + iVar5) = _CchDest;
        puVar8 = (undefined *)((int)&uStackY116 + iVar5);
        *(undefined4 *)((int)&uStackY116 + iVar5) = 0x40759c;
        iVar5 = MultiByteToWideChar(*(UINT *)(&stack0xffffff90 + iVar5),
                                    *(DWORD *)(&stack0xffffff94 + iVar5),
                                    *(LPCSTR *)(&stack0xffffff98 + iVar5),
                                    *(int *)(&stack0xffffff9c + iVar5),
                                    *(LPWSTR *)(&stack0xffffffa0 + iVar5),
                                    *(int *)(&stack0xffffffa4 + iVar5));
        puVar4 = puVar8;
        if (iVar5 != 0) {
          *(undefined4 *)(puVar8 + -4) = 0;
          *(undefined4 *)(puVar8 + -8) = 0;
          *(int *)(puVar8 + -0xc) = iVar2;
          *(undefined **)(puVar8 + -0x10) = local_20;
          *(LPCWSTR *)(puVar8 + -0x14) = _LocaleName;
          *(_locale_t *)(puVar8 + -0x18) = _Plocinfo;
          puVar9 = puVar8 + -0x1c;
          *(undefined4 *)(puVar8 + -0x1c) = 0x4075b6;
          uVar12 = LCMapStringW(*(LCID *)(puVar8 + -0x18),*(DWORD *)(puVar8 + -0x14),
                                *(LPCWSTR *)(puVar8 + -0x10),*(int *)(puVar8 + -0xc),
                                *(LPWSTR *)(puVar8 + -8),*(int *)(puVar8 + -4));
          puVar4 = puVar9;
          if (uVar12 != 0) {
            if (((uint)_LocaleName & 0x400) == 0) {
              puVar4 = (undefined *)(uVar12 * 2 + 3 & 0xfffffffc);
              *(undefined4 *)(puVar9 + -4) = 0x40760b;
              iVar5 = -(int)puVar4;
              local_1c = puVar9 + iVar5;
              local_24 = puVar9 + iVar5;
              local_8 = (undefined *)0xffffffff;
              if (puVar9 == puVar4) {
                *(uint *)(puVar9 + iVar5 + -4) = uVar12 * 2;
                *(undefined4 *)(puVar9 + iVar5 + -8) = 0x407642;
                local_24 = (undefined *)_malloc(*(size_t *)(puVar9 + iVar5 + -4));
                puVar4 = puVar9 + iVar5;
                if (local_24 == (undefined *)0x0) goto LAB_0040768a;
                local_38 = 1;
              }
              *(uint *)(puVar9 + iVar5 + -4) = uVar12;
              *(undefined **)(puVar9 + iVar5 + -8) = local_24;
              *(int *)(puVar9 + iVar5 + -0xc) = iVar2;
              *(undefined **)(puVar9 + iVar5 + -0x10) = local_20;
              *(LPCWSTR *)(puVar9 + iVar5 + -0x14) = _LocaleName;
              *(_locale_t *)(puVar9 + iVar5 + -0x18) = _Plocinfo;
              puVar11 = puVar9 + iVar5 + -0x1c;
              *(undefined4 *)(puVar9 + iVar5 + -0x1c) = 0x407665;
              iVar2 = LCMapStringW(*(LCID *)(puVar9 + iVar5 + -0x18),
                                   *(DWORD *)(puVar9 + iVar5 + -0x14),
                                   *(LPCWSTR *)(puVar9 + iVar5 + -0x10),
                                   *(int *)(puVar9 + iVar5 + -0xc),*(LPWSTR *)(puVar9 + iVar5 + -8),
                                   *(int *)(puVar9 + iVar5 + -4));
              puVar4 = puVar11;
              if (iVar2 != 0) {
                *(undefined4 *)(puVar11 + -4) = 0;
                *(undefined4 *)(puVar11 + -8) = 0;
                if (_LpDestStr == (LPSTR)0x0) {
                  *(undefined4 *)(puVar11 + -0xc) = 0;
                  *(undefined4 *)(puVar11 + -0x10) = 0;
                }
                else {
                  *(LPSTR *)(puVar11 + -0xc) = _LpDestStr;
                  *(int *)(puVar11 + -0x10) = _CchSrc;
                }
                *(uint *)(puVar11 + -0x14) = uVar12;
                *(undefined **)(puVar11 + -0x18) = local_24;
                *(undefined4 *)(puVar11 + -0x1c) = 0;
                *(int *)(puVar11 + -0x20) = _CchDest;
                puVar4 = puVar11 + -0x24;
                *(undefined4 *)(puVar11 + -0x24) = 0x407688;
                uVar12 = WideCharToMultiByte(*(UINT *)(puVar11 + -0x20),*(DWORD *)(puVar11 + -0x1c),
                                             *(LPCWSTR *)(puVar11 + -0x18),*(int *)(puVar11 + -0x14)
                                             ,*(LPSTR *)(puVar11 + -0x10),*(int *)(puVar11 + -0xc),
                                             *(LPCSTR *)(puVar11 + -8),*(LPBOOL *)(puVar11 + -4));
              }
            }
            else {
              if ((_LpDestStr != (LPSTR)0x0) && ((int)uVar12 <= (int)_LpDestStr)) {
                *(LPSTR *)(puVar9 + -4) = _LpDestStr;
                *(int *)(puVar9 + -8) = _CchSrc;
                *(int *)(puVar9 + -0xc) = iVar2;
                *(undefined **)(puVar9 + -0x10) = local_20;
                *(LPCWSTR *)(puVar9 + -0x14) = _LocaleName;
                *(_locale_t *)(puVar9 + -0x18) = _Plocinfo;
                puVar10 = puVar9 + -0x1c;
                *(undefined4 *)(puVar9 + -0x1c) = 0x4075f1;
                LCMapStringW(*(LCID *)(puVar9 + -0x18),*(DWORD *)(puVar9 + -0x14),
                             *(LPCWSTR *)(puVar9 + -0x10),*(int *)(puVar9 + -0xc),
                             *(LPWSTR *)(puVar9 + -8),*(int *)(puVar9 + -4));
                puVar4 = puVar10;
              }
            }
          }
        }
LAB_0040768a:
        if (local_38 != 0) {
          *(undefined **)(puVar4 + -4) = local_24;
          *(undefined4 *)(puVar4 + -8) = 0x407697;
          _free(*(void **)(puVar4 + -4));
        }
        if (local_3c != 0) {
          *(undefined **)(puVar4 + -4) = local_20;
          *(undefined4 *)(puVar4 + -8) = 0x4076a5;
          _free(*(void **)(puVar4 + -4));
          return uVar12;
        }
        return uVar12;
      }
    }
    return 0;
  }
  local_2c = (LPCSTR)0x0;
  pcVar13 = (char *)0x0;
  bVar1 = false;
  if (_Plocinfo == (_locale_t)0x0) {
    _Plocinfo = DAT_0040bc54;
  }
  if (_CchDest == 0) {
    _CchDest = DAT_0040bc64;
  }
  UVar6 = ___ansicp((LCID)_Plocinfo);
  if (UVar6 == 0xffffffff) {
    return 0;
  }
  if (UVar6 == _CchDest) {
    uStackY116 = 0x4077f6;
    local_4c = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,(LPCSTR)_DwMapFlag,(int)_LpSrcStr,
                            (LPSTR)_CchSrc,(int)_LpDestStr);
    goto LAB_004077f8;
  }
  uStackY116 = 0x407702;
  local_2c = (LPCSTR)___convertcp(_CchDest,UVar6,(char *)_DwMapFlag,(size_t *)&_LpSrcStr,(LPSTR)0x0,
                                  0);
  if (local_2c == (LPCSTR)0x0) {
    return 0;
  }
  uStackY116 = 0x40771e;
  local_28 = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,local_2c,(int)_LpSrcStr,(LPSTR)0x0,0);
  if (local_28 != 0) {
    local_8 = (undefined *)0x0;
    local_1c = &stack0xffffffa8;
    pcVar13 = &stack0xffffffa8;
    _memset(&stack0xffffffa8,0,local_28);
    local_8 = (undefined *)0xffffffff;
    if ((undefined *)register0x00000010 == (undefined *)0x58) {
      pcVar13 = (char *)_malloc(local_28);
      if (pcVar13 != (char *)0x0) {
        _memset(pcVar13,0,local_28);
        bVar1 = true;
        goto LAB_00407789;
      }
    }
    else {
LAB_00407789:
      uStackY116 = 0x40779f;
      local_28 = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,local_2c,(int)_LpSrcStr,pcVar13,
                              local_28);
      if (local_28 != 0) {
        uStackY116 = 0x4077c0;
        iVar2 = ___convertcp(UVar6,_CchDest,pcVar13,&local_28,(LPSTR)_CchSrc,(int)_LpDestStr);
        local_4c = (uint)(iVar2 != 0);
        goto LAB_004077d0;
      }
    }
    local_4c = 0;
  }
LAB_004077d0:
  if (bVar1) {
    _free(pcVar13);
  }
LAB_004077f8:
  if (local_2c != (LPCSTR)0x0) {
    _free(local_2c);
    return local_4c;
  }
  return local_4c;
}



// Library Function - Single Match
//  ___addl
// 
// Library: Visual Studio 2003 Release

undefined4 __cdecl ___addl(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1 + param_2;
  uVar2 = 0;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}



// Library Function - Single Match
//  ___add_12
// 
// Library: Visual Studio 2003 Release

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = ___addl(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = ___addl(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = ___addl(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  ___addl(param_1[2],param_2[2],param_1 + 2);
  return;
}



// Library Function - Single Match
//  ___shl_12
// 
// Library: Visual Studio 2003 Release

void __cdecl ___shl_12(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] << 1 | uVar2 >> 0x1f;
  return;
}



// Library Function - Single Match
//  ___shr_12
// 
// Library: Visual Studio 2003 Release

void __cdecl ___shr_12(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}



// Library Function - Single Match
//  ___mtold12
// 
// Library: Visual Studio 2003 Release

void __cdecl ___mtold12(char *param_1,int param_2,uint *param_3)

{
  short sVar1;
  uint *puVar2;
  uint uVar3;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar2 = param_3;
  local_8 = DAT_0040b498;
  sVar1 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    param_3 = (uint *)param_2;
    do {
      local_14 = *puVar2;
      local_10 = puVar2[1];
      local_c = puVar2[2];
      ___shl_12(puVar2);
      ___shl_12(puVar2);
      ___add_12(puVar2,&local_14);
      ___shl_12(puVar2);
      local_14 = SEXT14(*param_1);
      local_10 = 0;
      local_c = 0;
      ___add_12(puVar2,&local_14);
      param_1 = param_1 + 1;
      param_3 = (uint *)((int)param_3 + -1);
    } while (param_3 != (uint *)0x0);
  }
  if (puVar2[2] == 0) {
    do {
      sVar1 = sVar1 + -0x10;
      uVar3 = puVar2[1] >> 0x10;
      puVar2[1] = *puVar2 >> 0x10 | puVar2[1] << 0x10;
      *puVar2 = *puVar2 << 0x10;
    } while (uVar3 == 0);
    puVar2[2] = uVar3;
  }
  while ((puVar2[2] & 0x8000) == 0) {
    ___shl_12(puVar2);
    sVar1 = sVar1 + -1;
  }
  *(short *)((int)puVar2 + 10) = sVar1;
  FUN_004041a2(local_8);
  return;
}



// WARNING: Could not reconcile some variable overlaps
// Library Function - Single Match
//  ___strgtold12
// 
// Library: Visual Studio 2003 Release

uint __cdecl
___strgtold12(_LDBL12 *pld12,char **p_end_ptr,char *str,int mult12,int scale,int decpt,
             int implicit_E)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  undefined4 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  int local_58;
  int local_50;
  byte *local_44;
  char *local_40;
  int local_3c;
  uint local_38;
  char local_34 [23];
  char local_1d;
  undefined2 local_18;
  undefined2 uStack22;
  undefined2 uStack20;
  undefined4 local_12;
  undefined4 local_e;
  int local_8;
  
  local_8 = DAT_0040b498;
  local_40 = local_34;
  uVar4 = 0;
  local_50 = 1;
  local_38 = 0;
  bVar1 = false;
  bVar3 = false;
  bVar2 = false;
  local_58 = 0;
  local_3c = 0;
  local_44 = (byte *)str;
  for (; (((bVar7 = *str, bVar7 == 0x20 || (bVar7 == 9)) || (bVar7 == 10)) || (bVar7 == 0xd));
      str = (char *)((byte *)str + 1)) {
  }
  iVar11 = 0;
LAB_00407a22:
  iVar6 = 1;
  bVar7 = *str;
  pbVar9 = (byte *)str + 1;
  pbVar10 = local_44;
  switch(iVar11) {
  case 0:
    if (('0' < (char)bVar7) && ((char)bVar7 < ':')) {
LAB_00407a3f:
      iVar11 = 3;
      goto LAB_00407c4f;
    }
    if (bVar7 == DAT_0040b4a4) goto LAB_00407a4e;
    if (bVar7 == 0x2b) {
      uVar4 = 0;
      iVar11 = 2;
      str = (char *)pbVar9;
    }
    else {
      if (bVar7 == 0x2d) {
        uVar4 = 0x8000;
        iVar11 = 2;
        str = (char *)pbVar9;
      }
      else {
        iVar11 = iVar6;
        str = (char *)pbVar9;
        if (bVar7 != 0x30) goto LAB_00407a6a;
      }
    }
    goto LAB_00407a22;
  case 1:
    bVar1 = true;
    if (('0' < (char)bVar7) && ((char)bVar7 < ':')) goto LAB_00407a3f;
    if (bVar7 == DAT_0040b4a4) goto LAB_00407b4c;
    if ((bVar7 == 0x2b) || (bVar7 == 0x2d)) goto LAB_00407ac8;
    iVar11 = iVar6;
    str = (char *)pbVar9;
    if (bVar7 != 0x30) goto LAB_00407aad;
    goto LAB_00407a22;
  case 2:
    if (('0' < (char)bVar7) && ((char)bVar7 < ':')) goto LAB_00407a3f;
    if (bVar7 == DAT_0040b4a4) {
LAB_00407a4e:
      iVar11 = 5;
      str = (char *)pbVar9;
    }
    else {
      iVar11 = iVar6;
      str = (char *)pbVar9;
      if (bVar7 != 0x30) goto LAB_00407d29;
    }
    goto LAB_00407a22;
  case 3:
    while( true ) {
      if (DAT_0040b4a0 < 2) {
        uVar5 = (byte)PTR_DAT_0040b490[(uint)bVar7 * 2] & 4;
      }
      else {
        uVar5 = __isctype((uint)bVar7,4);
      }
      if (uVar5 == 0) break;
      if (local_38 < 0x19) {
        local_38 = local_38 + 1;
        *local_40 = bVar7 - 0x30;
        local_40 = local_40 + 1;
      }
      else {
        local_3c = local_3c + 1;
      }
      bVar7 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    }
    if (bVar7 != DAT_0040b4a4) goto LAB_00407bb1;
LAB_00407b4c:
    bVar1 = true;
    iVar11 = 4;
    str = (char *)pbVar9;
    goto LAB_00407a22;
  case 4:
    bVar3 = true;
    if (local_38 == 0) {
      while (bVar7 == 0x30) {
        local_3c = local_3c + -1;
        bVar7 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      }
    }
    while( true ) {
      if (DAT_0040b4a0 < 2) {
        uVar5 = (byte)PTR_DAT_0040b490[(uint)bVar7 * 2] & 4;
      }
      else {
        uVar5 = __isctype((uint)bVar7,4);
      }
      if (uVar5 == 0) break;
      if (local_38 < 0x19) {
        local_38 = local_38 + 1;
        local_3c = local_3c + -1;
        *local_40 = bVar7 - 0x30;
        local_40 = local_40 + 1;
      }
      bVar7 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    }
LAB_00407bb1:
    if ((bVar7 == 0x2b) || (bVar7 == 0x2d)) {
LAB_00407ac8:
      bVar1 = true;
      iVar11 = 0xb;
      str = (char *)(pbVar9 + -1);
    }
    else {
LAB_00407aad:
      bVar1 = true;
      if (((char)bVar7 < 'D') ||
         (('E' < (char)bVar7 && (((char)bVar7 < 'd' || ('e' < (char)bVar7)))))) goto LAB_00407a6a;
      iVar11 = 6;
      str = (char *)pbVar9;
    }
    goto LAB_00407a22;
  case 5:
    bVar3 = true;
    if (DAT_0040b4a0 < 2) {
      uVar5 = (byte)PTR_DAT_0040b490[(uint)bVar7 * 2] & 4;
    }
    else {
      uVar5 = __isctype((uint)bVar7,4);
    }
    iVar11 = 4;
    if (uVar5 != 0) goto LAB_00407c4f;
    goto LAB_00407d29;
  case 6:
    local_44 = (byte *)str + -1;
    if (((char)bVar7 < '1') || ('9' < (char)bVar7)) {
      if (bVar7 == 0x2b) goto LAB_00407c8a;
      if (bVar7 == 0x2d) goto LAB_00407c7e;
      pbVar10 = local_44;
      if (bVar7 != 0x30) goto LAB_00407d29;
LAB_00407c1d:
      iVar11 = 8;
      str = (char *)pbVar9;
      goto LAB_00407a22;
    }
    break;
  case 7:
    if (((char)bVar7 < '1') || ('9' < (char)bVar7)) {
      if (bVar7 == 0x30) goto LAB_00407c1d;
      goto LAB_00407d29;
    }
    break;
  case 8:
    bVar2 = true;
    while (bVar7 == 0x30) {
      bVar7 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    }
    if (((char)bVar7 < '1') || ('9' < (char)bVar7)) goto LAB_00407a6a;
    break;
  case 9:
    bVar2 = true;
    local_58 = 0;
    goto LAB_00407cad;
  default:
    goto switchD_00407a2e_caseD_a;
  case 0xb:
    if (implicit_E != 0) {
      local_44 = (byte *)str;
      if (bVar7 == 0x2b) {
LAB_00407c8a:
        iVar11 = 7;
        str = (char *)pbVar9;
      }
      else {
        pbVar10 = (byte *)str;
        if (bVar7 != 0x2d) goto LAB_00407d29;
LAB_00407c7e:
        local_50 = -1;
        iVar11 = 7;
        str = (char *)pbVar9;
      }
      goto LAB_00407a22;
    }
    iVar11 = 10;
    pbVar9 = (byte *)str;
switchD_00407a2e_caseD_a:
    str = (char *)pbVar9;
    pbVar10 = pbVar9;
    if (iVar11 != 10) goto LAB_00407a22;
    goto LAB_00407d29;
  }
  iVar11 = 9;
LAB_00407c4f:
  str = (char *)(pbVar9 + -1);
  goto LAB_00407a22;
LAB_00407cad:
  if (DAT_0040b4a0 < 2) {
    uVar5 = (byte)PTR_DAT_0040b490[(uint)bVar7 * 2] & 4;
  }
  else {
    uVar5 = __isctype((uint)bVar7,4);
  }
  if (uVar5 == 0) goto LAB_00407cf5;
  local_58 = (char)bVar7 + -0x30 + local_58 * 10;
  if (0x1450 < local_58) goto LAB_00407ced;
  bVar7 = *pbVar9;
  pbVar9 = pbVar9 + 1;
  goto LAB_00407cad;
LAB_00407ced:
  local_58 = 0x1451;
LAB_00407cf5:
  while( true ) {
    if (DAT_0040b4a0 < 2) {
      uVar5 = (byte)PTR_DAT_0040b490[(uint)bVar7 * 2] & 4;
    }
    else {
      uVar5 = __isctype((uint)bVar7,4);
    }
    if (uVar5 == 0) break;
    bVar7 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  }
LAB_00407a6a:
  pbVar10 = pbVar9 + -1;
LAB_00407d29:
  *p_end_ptr = (char *)pbVar10;
  if (bVar1) {
    if (0x18 < local_38) {
      if ('\x04' < local_1d) {
        local_1d = local_1d + '\x01';
      }
      local_38 = 0x18;
      local_40 = local_40 + -1;
      local_3c = local_3c + 1;
    }
    if (local_38 != 0) {
      while (local_40 = local_40 + -1, *local_40 == '\0') {
        local_38 = local_38 - 1;
        local_3c = local_3c + 1;
      }
      ___mtold12(local_34,local_38,(uint *)&local_18);
      if (local_50 < 0) {
        local_58 = -local_58;
      }
      uVar5 = local_58 + local_3c;
      if (!bVar2) {
        uVar5 = uVar5 + scale;
      }
      if (!bVar3) {
        uVar5 = uVar5 - decpt;
      }
      if (0x1450 < (int)uVar5) {
        uVar8 = 0;
        local_e._0_2_ = 0x7fff;
        local_12 = 0x80000000;
        local_18 = 0;
        goto LAB_00407dfd;
      }
      if (-0x1451 < (int)uVar5) {
        ___multtenpow12((int *)&local_18,uVar5,mult12);
        uVar8 = CONCAT22(uStack20,uStack22);
        goto LAB_00407dfd;
      }
    }
  }
  local_18 = 0;
  local_e._0_2_ = 0;
  local_12 = 0;
  uVar8 = 0;
LAB_00407dfd:
  *(undefined4 *)(pld12->ld12 + 6) = local_12;
  *(undefined4 *)(pld12->ld12 + 2) = uVar8;
  *(ushort *)(pld12->ld12 + 10) = (ushort)local_e | uVar4;
  *(undefined2 *)pld12->ld12 = local_18;
  uVar5 = FUN_004041a2(local_8);
  return uVar5;
}



// WARNING: Could not reconcile some variable overlaps
// Library Function - Single Match
//  _$I10_OUTPUT
// 
// Library: Visual Studio 2003 Release

void __cdecl
__I10_OUTPUT(int param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

{
  short *psVar1;
  char cVar2;
  uint uVar3;
  short *psVar4;
  short *psVar5;
  short sVar6;
  int iVar7;
  char *pcVar8;
  short *local_34;
  uint local_2c;
  undefined4 uStack40;
  undefined4 uStack36;
  undefined local_20;
  undefined local_1f;
  undefined local_1e;
  undefined local_1d;
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined local_18;
  undefined local_17;
  undefined local_16;
  undefined local_15;
  undefined2 local_14;
  undefined4 local_12;
  undefined4 local_e;
  undefined local_a;
  char cStack9;
  int local_8;
  
  local_8 = DAT_0040b498;
  uVar3 = param_3 & 0x7fff;
  local_20 = 0xcc;
  local_1f = 0xcc;
  local_1e = 0xcc;
  local_1d = 0xcc;
  local_1c = 0xcc;
  local_1b = 0xcc;
  local_1a = 0xcc;
  local_19 = 0xcc;
  local_18 = 0xcc;
  local_17 = 0xcc;
  local_16 = 0xfb;
  local_15 = 0x3f;
  if ((param_3 & 0x8000) == 0) {
    *(undefined *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar3 == 0) && (param_2 == 0)) && (param_1 == 0)) {
LAB_00407fc6:
    *(undefined *)(param_6 + 2) = 0x30;
LAB_004080c9:
    *param_6 = 0;
    *(undefined *)(param_6 + 1) = 0x20;
    *(undefined *)((int)param_6 + 3) = 1;
    *(undefined *)((int)param_6 + 5) = 0;
  }
  else {
    if ((short)uVar3 == 0x7fff) {
      *param_6 = 1;
      if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
        if (((param_3 & 0x8000) == 0) || (param_2 != 0xc0000000)) {
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_00407f3c;
          pcVar8 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_00407f3c:
            pcVar8 = "1#QNAN";
            goto LAB_00407f41;
          }
          pcVar8 = "1#IND";
        }
        _strcpy((char *)(param_6 + 2),pcVar8);
        *(undefined *)((int)param_6 + 3) = 5;
      }
      else {
        pcVar8 = "1#SNAN";
LAB_00407f41:
        _strcpy((char *)(param_6 + 2),pcVar8);
        *(undefined *)((int)param_6 + 3) = 6;
      }
      goto LAB_004080ab;
    }
    local_14 = 0;
    sVar6 = (short)(((uVar3 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar3 * 0x4d10 >>
                   0x10);
    local_a = (undefined)uVar3;
    cStack9 = (char)(uVar3 >> 8);
    local_12 = param_1;
    local_e = param_2;
    ___multtenpow12((int *)&local_14,-(int)sVar6,1);
    if (0x3ffe < CONCAT11(cStack9,local_a)) {
      sVar6 = sVar6 + 1;
      ___ld12mul((int *)&local_14,(int *)&local_20);
    }
    *param_6 = sVar6;
    if (((param_5 & 1) != 0) && (param_4 = param_4 + sVar6, param_4 < 1)) goto LAB_00407fc6;
    if (0x15 < param_4) {
      param_4 = 0x15;
    }
    iVar7 = CONCAT11(cStack9,local_a) - 0x3ffe;
    local_a = 0;
    cStack9 = '\0';
    param_3 = 8;
    do {
      ___shl_12((uint *)&local_14);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    if (iVar7 < 0) {
      for (uVar3 = -iVar7 & 0xff; uVar3 != 0; uVar3 = uVar3 - 1) {
        ___shr_12((uint *)&local_14);
      }
    }
    param_3 = param_4 + 1;
    psVar4 = param_6 + 2;
    local_34 = psVar4;
    if (0 < (int)param_3) {
      do {
        local_e._2_2_ = (undefined2)(local_e >> 0x10);
        local_12._2_2_ = (undefined2)((uint)local_12 >> 0x10);
        local_2c = CONCAT22((undefined2)local_12,local_14);
        uStack40 = CONCAT22((undefined2)local_e,local_12._2_2_);
        uStack36 = CONCAT13(cStack9,CONCAT12(local_a,local_e._2_2_));
        ___shl_12((uint *)&local_14);
        ___shl_12((uint *)&local_14);
        ___add_12((uint *)&local_14,&local_2c);
        ___shl_12((uint *)&local_14);
        psVar4 = (short *)((int)local_34 + 1);
        param_3 = param_3 - 1;
        *(char *)local_34 = cStack9 + '0';
        cStack9 = '\0';
        local_34 = psVar4;
      } while (param_3 != 0);
    }
    psVar5 = psVar4 + -1;
    psVar1 = param_6 + 2;
    if (*(char *)((int)psVar4 + -1) < '5') {
      for (; (psVar1 <= psVar5 && (*(char *)psVar5 == '0')); psVar5 = (short *)((int)psVar5 + -1)) {
      }
      if (psVar5 < psVar1) {
        *(char *)psVar1 = '0';
        goto LAB_004080c9;
      }
    }
    else {
      for (; (psVar1 <= psVar5 && (*(char *)psVar5 == '9')); psVar5 = (short *)((int)psVar5 + -1)) {
        *(char *)psVar5 = '0';
      }
      if (psVar5 < psVar1) {
        psVar5 = (short *)((int)psVar5 + 1);
        *param_6 = *param_6 + 1;
      }
      *(char *)psVar5 = *(char *)psVar5 + '\x01';
    }
    cVar2 = ((char)psVar5 - (char)param_6) + -3;
    *(char *)((int)param_6 + 3) = cVar2;
    *(undefined *)(cVar2 + 4 + (int)param_6) = 0;
  }
LAB_004080ab:
  FUN_004041a2(local_8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _realloc
// 
// Library: Visual Studio 2003 Release

void * __cdecl _realloc(void *_Memory,size_t _NewSize)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint *_Size;
  
  if (_Memory == (void *)0x0) {
    piVar1 = (int *)_malloc(_NewSize);
  }
  else {
    if (_NewSize == 0) {
      _free(_Memory);
    }
    else {
      if (_DAT_0040bec4 == 3) {
        do {
          piVar1 = (int *)0x0;
          if (_NewSize < (uint *)0xffffffe1) {
            puVar2 = (uint *)___sbh_find_block((int)_Memory);
            if (puVar2 == (uint *)0x0) {
LAB_004081c6:
              if ((uint *)_NewSize == (uint *)0x0) {
                _NewSize = 1;
              }
              _NewSize = _NewSize + 0xf & 0xfffffff0;
              piVar1 = (int *)HeapReAlloc(DAT_0040bec0,0,_Memory,_NewSize);
            }
            else {
              if (_DAT_0040bc84 < _NewSize) {
LAB_00408186:
                if ((uint *)_NewSize == (uint *)0x0) {
                  _NewSize = 1;
                }
                _NewSize = _NewSize + 0xf & 0xfffffff0;
                piVar1 = (int *)HeapAlloc(DAT_0040bec0,0,_NewSize);
                if (piVar1 != (int *)0x0) {
                  _Size = (uint *)(*(int *)((int)_Memory + -4) - 1);
                  if (_NewSize <= _Size) {
                    _Size = (uint *)_NewSize;
                  }
                  _memcpy(piVar1,_Memory,(size_t)_Size);
                  ___sbh_free_block(puVar2,(int)_Memory);
                }
              }
              else {
                iVar3 = ___sbh_resize_block(puVar2,(int)_Memory,_NewSize);
                piVar1 = (int *)_Memory;
                if (iVar3 == 0) {
                  piVar1 = ___sbh_alloc_block((uint *)_NewSize);
                  if (piVar1 == (int *)0x0) goto LAB_00408186;
                  puVar2 = (uint *)(*(int *)((int)_Memory + -4) - 1);
                  if (_NewSize <= puVar2) {
                    puVar2 = (uint *)_NewSize;
                  }
                  _memcpy(piVar1,_Memory,(size_t)puVar2);
                  puVar2 = (uint *)___sbh_find_block((int)_Memory);
                  ___sbh_free_block(puVar2,(int)_Memory);
                }
                if (piVar1 == (int *)0x0) goto LAB_00408186;
              }
              if (puVar2 == (uint *)0x0) goto LAB_004081c6;
            }
            if (piVar1 != (int *)0x0) {
              return piVar1;
            }
          }
          if (DAT_0040bc48 == 0) {
            return piVar1;
          }
          iVar3 = __callnewh(_NewSize);
        } while (iVar3 != 0);
      }
      else {
        do {
          piVar1 = (int *)0x0;
          if (_NewSize < 0xffffffe1) {
            if (_NewSize == 0) {
              _NewSize = 1;
            }
            piVar1 = (int *)HeapReAlloc(DAT_0040bec0,0,_Memory,_NewSize);
            if (piVar1 != (int *)0x0) {
              return piVar1;
            }
          }
          if (DAT_0040bc48 == 0) {
            return piVar1;
          }
          iVar3 = __callnewh(_NewSize);
        } while (iVar3 != 0);
      }
    }
    piVar1 = (int *)0x0;
  }
  return piVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __msize
// 
// Library: Visual Studio 2003 Release

size_t __cdecl __msize(void *_Memory)

{
  uint uVar1;
  size_t sVar2;
  
  if ((_DAT_0040bec4 == 3) && (uVar1 = ___sbh_find_block((int)_Memory), uVar1 != 0)) {
    return *(int *)((int)_Memory + -4) - 9;
  }
  sVar2 = HeapSize(DAT_0040bec0,0,_Memory);
  return sVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __dosmaperr
// 
// Library: Visual Studio 2003 Release

void __cdecl __dosmaperr(ulong param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_0040b5f8)[uVar1 * 2]) {
      _DAT_0040ba50 = (&DAT_0040b5fc)[uVar1 * 2];
      _DAT_0040ba54 = param_1;
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    _DAT_0040ba50 = 0xd;
    _DAT_0040ba54 = param_1;
    return;
  }
  if ((param_1 < 0xbc) || (_DAT_0040ba50 = 8, 0xca < param_1)) {
    _DAT_0040ba50 = 0x16;
  }
  _DAT_0040ba54 = param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __lseeki64
// 
// Library: Visual Studio 2003 Release

longlong __cdecl __lseeki64(int _FileHandle,longlong _Offset,int _Origin)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD DVar2;
  DWORD DVar3;
  int iVar4;
  LONG local_8;
  
  if ((uint)_FileHandle < DAT_0040bec8) {
    iVar4 = (_FileHandle & 0x1fU) * 8;
    if ((*(byte *)((&DAT_0040bee0)[_FileHandle >> 5] + 4 + iVar4) & 1) == 0) goto LAB_0040835b;
    local_8 = _Offset._4_4_;
    hFile = (HANDLE)__get_osfhandle(_FileHandle);
    if (hFile == (HANDLE)0xffffffff) goto LAB_00408362;
    DVar2 = SetFilePointer(hFile,(LONG)_Offset,&local_8,_Origin);
    if (DVar2 != 0xffffffff) {
LAB_0040834a:
      pbVar1 = (byte *)((&DAT_0040bee0)[_FileHandle >> 5] + 4 + iVar4);
      *pbVar1 = *pbVar1 & 0xfd;
      goto LAB_00408372;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0) goto LAB_0040834a;
    __dosmaperr(DVar3);
  }
  else {
LAB_0040835b:
    _DAT_0040ba54 = 0;
LAB_00408362:
    _DAT_0040ba50 = 9;
  }
  DVar2 = 0xffffffff;
  local_8 = -1;
LAB_00408372:
  return CONCAT44(local_8,DVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __free_osfhnd
// 
// Library: Visual Studio 2003 Release

int __cdecl __free_osfhnd(int param_1)

{
  int *piVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if ((uint)param_1 < DAT_0040bec8) {
    iVar2 = (param_1 & 0x1fU) * 8;
    piVar1 = (int *)((&DAT_0040bee0)[param_1 >> 5] + iVar2);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (_DAT_0040b0bc == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else {
          if (param_1 == 1) {
            nStdHandle = 0xfffffff5;
          }
          else {
            if (param_1 != 2) goto LAB_004083cf;
            nStdHandle = 0xfffffff4;
          }
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_004083cf:
      *(undefined4 *)(iVar2 + (&DAT_0040bee0)[param_1 >> 5]) = 0xffffffff;
      return 0;
    }
  }
  _DAT_0040ba50 = 9;
  _DAT_0040ba54 = 0;
  return -1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __get_osfhandle
// 
// Library: Visual Studio 2003 Release

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  intptr_t *piVar1;
  
  if (((uint)_FileHandle < DAT_0040bec8) &&
     (piVar1 = (intptr_t *)((&DAT_0040bee0)[_FileHandle >> 5] + (_FileHandle & 0x1fU) * 8),
     (*(byte *)(piVar1 + 1) & 1) != 0)) {
    return *piVar1;
  }
  _DAT_0040ba50 = 9;
  _DAT_0040ba54 = 0;
  return -1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __close
// 
// Library: Visual Studio 2003 Release

int __cdecl __close(int _FileHandle)

{
  intptr_t iVar1;
  intptr_t iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  if (DAT_0040bec8 <= (uint)_FileHandle) {
    _DAT_0040ba50 = 9;
    _DAT_0040ba54 = 0;
    return -1;
  }
  iVar5 = (_FileHandle & 0x1fU) * 8;
  if ((*(byte *)((&DAT_0040bee0)[_FileHandle >> 5] + 4 + iVar5) & 1) == 0) {
    _DAT_0040ba50 = 9;
    _DAT_0040ba54 = 0;
    return -1;
  }
  iVar1 = __get_osfhandle(_FileHandle);
  if (iVar1 != -1) {
    if ((_FileHandle == 1) || (_FileHandle == 2)) {
      iVar1 = __get_osfhandle(2);
      iVar2 = __get_osfhandle(1);
      if (iVar2 == iVar1) goto LAB_004084a5;
    }
    hObject = (HANDLE)__get_osfhandle(_FileHandle);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_004084a7;
    }
  }
LAB_004084a5:
  DVar4 = 0;
LAB_004084a7:
  __free_osfhnd(_FileHandle);
  *(undefined *)((&DAT_0040bee0)[_FileHandle >> 5] + 4 + iVar5) = 0;
  if (DVar4 == 0) {
    return 0;
  }
  __dosmaperr(DVar4);
  return -1;
}



// Library Function - Single Match
//  __freebuf
// 
// Library: Visual Studio 2003 Release

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    _free(_File->_base);
    *(ushort *)&_File->_flag = *(ushort *)&_File->_flag & 0xfbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



// Library Function - Single Match
//  ___ansicp
// 
// Library: Visual Studio 2003 Release

void __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR local_10 [6];
  undefined local_a;
  int local_8;
  
  local_8 = DAT_0040b498;
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 != 0) {
    _atol(local_10);
  }
  FUN_004041a2(local_8);
  return;
}



// WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog
// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3
// Library Function - Single Match
//  ___convertcp
// 
// Library: Visual Studio 2003 Release

void __cdecl
___convertcp(UINT param_1,UINT param_2,char *param_3,size_t *param_4,LPSTR param_5,int param_6)

{
  size_t cbMultiByte;
  bool bVar1;
  bool bVar2;
  BOOL BVar3;
  int iVar4;
  LPSTR lpMultiByteStr;
  size_t sVar5;
  LPCWSTR local_4c;
  size_t local_3c;
  _cpinfo local_34;
  int local_20;
  undefined *local_1c;
  undefined4 uStack12;
  undefined *local_8;
  
  local_8 = &DAT_00409d98;
  uStack12 = 0x408559;
  local_20 = DAT_0040b498;
  bVar2 = false;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 != param_2) {
    BVar3 = GetCPInfo(param_1,(LPCPINFO)&local_34);
    if ((((BVar3 != 0) && (local_34.MaxCharSize == 1)) &&
        (BVar3 = GetCPInfo(param_2,(LPCPINFO)&local_34), BVar3 != 0)) && (local_34.MaxCharSize == 1)
       ) {
      bVar1 = true;
    }
    if ((bVar1) && (local_3c = cbMultiByte, cbMultiByte == 0xffffffff)) {
      sVar5 = _strlen(param_3);
      local_3c = sVar5 + 1;
    }
    if ((!bVar1) &&
       (local_3c = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0), local_3c == 0))
    goto LAB_00408705;
    local_8 = (undefined *)0x0;
    local_1c = &stack0xffffffa8;
    local_4c = (LPCWSTR)&stack0xffffffa8;
    _memset(&stack0xffffffa8,0,local_3c * 2);
    local_8 = (undefined *)0xffffffff;
    if ((undefined *)register0x00000010 == (undefined *)0x58) {
      local_4c = (LPCWSTR)_calloc(2,local_3c);
      if (local_4c == (LPCWSTR)0x0) goto LAB_00408705;
      bVar2 = true;
    }
    iVar4 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,local_4c,local_3c);
    if (iVar4 != 0) {
      if (param_5 == (LPSTR)0x0) {
        if (((bVar1) ||
            (local_3c = WideCharToMultiByte(param_2,0,local_4c,local_3c,(LPSTR)0x0,0,(LPCSTR)0x0,
                                            (LPBOOL)0x0), local_3c != 0)) &&
           (lpMultiByteStr = (LPSTR)_calloc(1,local_3c), lpMultiByteStr != (LPSTR)0x0)) {
          sVar5 = WideCharToMultiByte(param_2,0,local_4c,local_3c,lpMultiByteStr,local_3c,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
          if (sVar5 == 0) {
            _free(lpMultiByteStr);
          }
          else {
            if (cbMultiByte != 0xffffffff) {
              *param_4 = sVar5;
            }
          }
        }
      }
      else {
        WideCharToMultiByte(param_2,0,local_4c,local_3c,param_5,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
      }
    }
  }
  if (bVar2) {
    _free(local_4c);
  }
LAB_00408705:
  FUN_004041a2(local_20);
  return;
}



// Library Function - Single Match
//  ___ld12mul
// 
// Library: Visual Studio 2003 Release

void __cdecl ___ld12mul(int *param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  int *piVar3;
  int *piVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  ushort uVar10;
  int *local_2c;
  ushort *local_28;
  int *local_24;
  int local_20;
  int local_1c;
  short *local_18;
  byte local_14;
  undefined uStack19;
  undefined2 uStack18;
  short local_10;
  undefined2 uStack14;
  undefined2 local_c;
  undefined uStack10;
  byte bStack9;
  int local_8;
  
  piVar4 = param_2;
  piVar3 = param_1;
  local_8 = DAT_0040b498;
  local_20 = 0;
  local_14 = 0;
  uStack19 = 0;
  uStack18 = 0;
  local_10 = 0;
  uStack14 = 0;
  local_c = 0;
  uStack10 = 0;
  bStack9 = 0;
  uVar9 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar6 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar10 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar5 = (ushort)uVar6;
  piVar1 = (int *)(uVar9 + uVar6);
  if (((uVar5 < 0x7fff) && (uVar8 = (ushort)uVar9, uVar8 < 0x7fff)) && ((ushort)piVar1 < 0xbffe)) {
    if ((ushort)piVar1 < 0x3fc0) {
LAB_004087c3:
      piVar3[2] = 0;
      piVar3[1] = 0;
      *piVar3 = 0;
      goto LAB_0040893b;
    }
    if (uVar5 == 0) {
      piVar1 = (int *)((int)piVar1 + 1);
      uVar5 = 0;
      if ((((param_1[2] & 0x7fffffffU) != 0) || (param_1[1] != 0)) || (*param_1 != 0))
      goto LAB_004087ad;
    }
    else {
LAB_004087ad:
      param_1 = piVar1;
      if (((uVar8 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_004087c3;
      local_1c = 0;
      local_18 = &local_10;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_28 = (ushort *)(local_1c * 2 + (int)piVar3);
          local_24 = piVar4 + 2;
          local_2c = param_2;
          do {
            iVar7 = ___addl(*(uint *)(local_18 + -2),(uint)*(ushort *)local_24 * (uint)*local_28,
                            (uint *)(local_18 + -2));
            if (iVar7 != 0) {
              *local_18 = *local_18 + 1;
            }
            local_28 = local_28 + 1;
            local_24 = (int *)((int)local_24 + -2);
            local_2c = (int *)((int)local_2c + -1);
          } while (local_2c != (int *)0x0);
        }
        local_18 = local_18 + 1;
        local_1c = local_1c + 1;
        param_2 = (int *)((int)param_2 + -1);
      } while (0 < (int)param_2);
      param_1 = (int *)((int)param_1 + 0xc002);
      if ((short)(ushort)param_1 < 1) {
LAB_00408877:
        param_1._0_2_ = (ushort)((int)param_1 + 0xffff);
        if ((short)(ushort)param_1 < 0) {
          uVar6 = -((int)param_1 + 0xffff) & 0xffff;
          param_1._0_2_ = (ushort)param_1 + (short)uVar6;
          do {
            if ((local_14 & 1) != 0) {
              local_20 = local_20 + 1;
            }
            ___shr_12((uint *)&local_14);
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
          if (local_20 != 0) {
            local_14 = local_14 | 1;
          }
        }
      }
      else {
        do {
          if ((bStack9 & 0x80) != 0) break;
          ___shl_12((uint *)&local_14);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_00408877;
      }
      if ((0x8000 < CONCAT11(uStack19,local_14)) ||
         ((CONCAT22(uStack18,CONCAT11(uStack19,local_14)) & 0x1ffff) == 0x18000)) {
        if (CONCAT22(local_10,uStack18) == -1) {
          uStack18 = 0;
          local_10 = 0;
          if (CONCAT22(local_c,uStack14) == -1) {
            uStack14 = 0;
            local_c = 0;
            if (CONCAT11(bStack9,uStack10) == -1) {
              param_1._0_2_ = (ushort)param_1 + 1;
              uStack10 = 0;
              bStack9 = 0x80;
            }
            else {
              sVar2 = CONCAT11(bStack9,uStack10) + 1;
              uStack10 = (undefined)sVar2;
              bStack9 = (byte)((ushort)sVar2 >> 8);
            }
          }
          else {
            iVar7 = CONCAT22(local_c,uStack14) + 1;
            uStack14 = (undefined2)iVar7;
            local_c = (undefined2)((uint)iVar7 >> 0x10);
          }
        }
        else {
          iVar7 = CONCAT22(local_10,uStack18) + 1;
          uStack18 = (undefined2)iVar7;
          local_10 = (short)((uint)iVar7 >> 0x10);
        }
      }
      if (0x7ffe < (ushort)param_1) goto LAB_00408920;
      *(undefined2 *)piVar3 = uStack18;
      *(uint *)((int)piVar3 + 2) = CONCAT22(uStack14,local_10);
      *(uint *)((int)piVar3 + 6) = CONCAT13(bStack9,CONCAT12(uStack10,local_c));
      uVar5 = (ushort)param_1 | uVar10;
    }
    *(ushort *)((int)piVar3 + 10) = uVar5;
  }
  else {
LAB_00408920:
    piVar3[1] = 0;
    *piVar3 = 0;
    piVar3[2] = (-(uint)(uVar10 != 0) & 0x80000000) + 0x7fff8000;
  }
LAB_0040893b:
  FUN_004041a2(local_8);
  return;
}



// Library Function - Single Match
//  ___multtenpow12
// 
// Library: Visual Studio 2003 Release

void __cdecl ___multtenpow12(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 uStack16;
  undefined2 uStack14;
  int iStack12;
  int local_8;
  
  local_8 = DAT_0040b498;
  iVar4 = 0x40b700;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      iVar4 = 0x40b860;
    }
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
    }
    while (param_2 != 0) {
      uVar1 = (int)param_2 >> 3;
      uVar3 = param_2 & 7;
      iVar4 = iVar4 + 0x54;
      param_2 = uVar1;
      if (uVar3 != 0) {
        piVar5 = (int *)(iVar4 + uVar3 * 0xc);
        if (0x7fff < *(ushort *)piVar5) {
          local_14 = (undefined2)*piVar5;
          local_12 = (undefined2)((uint)*piVar5 >> 0x10);
          uStack16 = (undefined2)piVar5[1];
          uStack14 = (undefined2)((uint)piVar5[1] >> 0x10);
          iStack12 = piVar5[2];
          iVar2 = CONCAT22(uStack16,local_12) + -1;
          local_12 = (undefined2)iVar2;
          uStack16 = (undefined2)((uint)iVar2 >> 0x10);
          piVar5 = (int *)&local_14;
        }
        ___ld12mul(param_1,piVar5);
      }
    }
  }
  FUN_004041a2(local_8);
  return;
}



// Library Function - Single Match
//  _atol
// 
// Library: Visual Studio 2003 Release

long __cdecl _atol(char *_Str)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  
  while( true ) {
    iVar1 = __ismbcspace((uint)(byte)*_Str);
    if (iVar1 == 0) break;
    _Str = (char *)((byte *)_Str + 1);
  }
  uVar2 = (uint)(byte)*_Str;
  pbVar5 = (byte *)_Str + 1;
  if ((uVar2 == 0x2d) || (uVar3 = uVar2, uVar2 == 0x2b)) {
    uVar3 = (uint)*pbVar5;
    pbVar5 = (byte *)_Str + 2;
  }
  iVar1 = 0;
  while( true ) {
    if ((uVar3 < 0x30) || (0x39 < uVar3)) {
      iVar4 = -1;
    }
    else {
      iVar4 = uVar3 - 0x30;
    }
    if (iVar4 == -1) break;
    iVar1 = iVar4 + iVar1 * 10;
    uVar3 = (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  if (uVar2 == 0x2d) {
    iVar1 = -iVar1;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __ismbcspace
// 
// Library: Visual Studio 2003 Release

int __cdecl __ismbcspace(uint _Ch)

{
  BOOL BVar1;
  uint uVar2;
  undefined4 local_8;
  
  if (_Ch < 0x100) {
    if (1 < DAT_0040b4a0) {
      uVar2 = __isctype(_Ch,8);
      return uVar2;
    }
    return (byte)PTR_DAT_0040b490[_Ch * 2] & 8;
  }
  local_8 = 0;
  _Ch = CONCAT13((char)_Ch,CONCAT12((char)(_Ch >> 8),(undefined2)_Ch));
  if (_DAT_0040bc98 != 0) {
    BVar1 = ___crtGetStringTypeA
                      ((_locale_t)0x1,(int)&_Ch + 2,(LPCSTR)0x2,(int)&local_8,DAT_0040bda4,
                       DAT_0040bc94,1);
    if (((BVar1 != 0) && (local_8._2_2_ == 0)) && ((local_8 & 8) != 0)) {
      return 1;
    }
  }
  return 0;
}



void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    // WARNING: Could not recover jumptable at 0x00408ab6. Too many branches
                    // WARNING: Treating indirect jump as call
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}


