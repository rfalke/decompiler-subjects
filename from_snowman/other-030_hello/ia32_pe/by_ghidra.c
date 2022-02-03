typedef unsigned char   undefined;

typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef short    wchar_t;
typedef unsigned short    word;
typedef uint sizetype;

typedef struct char_traits<char> char_traits<char>, *Pchar_traits<char>;

struct char_traits<char> {
    undefined field0_0x0;
};

typedef char char_type;

typedef int int_type;

typedef wchar_t wctrans_t;

typedef wchar_t wctype_t;

typedef struct _CRITICAL_SECTION _CRITICAL_SECTION, *P_CRITICAL_SECTION;

typedef struct _CRITICAL_SECTION CRITICAL_SECTION;

typedef struct _CRITICAL_SECTION_DEBUG _CRITICAL_SECTION_DEBUG, *P_CRITICAL_SECTION_DEBUG;

typedef struct _CRITICAL_SECTION_DEBUG * PCRITICAL_SECTION_DEBUG;

typedef long LONG;

typedef void * HANDLE;

typedef ulong DWORD;

typedef ushort WORD;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _LIST_ENTRY {
    struct _LIST_ENTRY * Flink;
    struct _LIST_ENTRY * Blink;
};

struct _CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _CRITICAL_SECTION * CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Spare[2];
};

struct _CRITICAL_SECTION {
    PCRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    DWORD SpinCount;
};

typedef struct __numeric_traits_integer<long_unsigned_int> __numeric_traits_integer<long_unsigned_int>, *P__numeric_traits_integer<long_unsigned_int>;

struct __numeric_traits_integer<long_unsigned_int> { // Original name: __numeric_traits_integer<long unsigned int>
    undefined field0_0x0;
};

typedef struct __numeric_traits_integer<char> __numeric_traits_integer<char>, *P__numeric_traits_integer<char>;

struct __numeric_traits_integer<char> {
    undefined field0_0x0;
};

typedef struct __numeric_traits_integer<short_int> __numeric_traits_integer<short_int>, *P__numeric_traits_integer<short_int>;

struct __numeric_traits_integer<short_int> { // Original name: __numeric_traits_integer<short int>
    undefined field0_0x0;
};

typedef struct __numeric_traits_integer<int> __numeric_traits_integer<int>, *P__numeric_traits_integer<int>;

struct __numeric_traits_integer<int> {
    undefined field0_0x0;
};

typedef enum VARENUM {
    VT_EMPTY=0,
    VT_NULL=1,
    VT_I2=2,
    VT_I4=3,
    VT_R4=4,
    VT_R8=5,
    VT_CY=6,
    VT_DATE=7,
    VT_BSTR=8,
    VT_DISPATCH=9,
    VT_ERROR=10,
    VT_BOOL=11,
    VT_VARIANT=12,
    VT_UNKNOWN=13,
    VT_DECIMAL=14,
    VT_I1=16,
    VT_UI1=17,
    VT_UI2=18,
    VT_UI4=19,
    VT_I8=20,
    VT_UI8=21,
    VT_INT=22,
    VT_UINT=23,
    VT_VOID=24,
    VT_HRESULT=25,
    VT_PTR=26,
    VT_SAFEARRAY=27,
    VT_CARRAY=28,
    VT_USERDEFINED=29,
    VT_LPSTR=30,
    VT_LPWSTR=31,
    VT_RECORD=36,
    VT_INT_PTR=37,
    VT_UINT_PTR=38,
    VT_FILETIME=64,
    VT_BLOB=65,
    VT_STREAM=66,
    VT_STORAGE=67,
    VT_STREAMED_OBJECT=68,
    VT_STORED_OBJECT=69,
    VT_BLOB_OBJECT=70,
    VT_CF=71,
    VT_CLSID=72,
    VT_BSTR_BLOB=4095,
    VT_ILLEGALMASKED=4095,
    VT_TYPEMASK=4095,
    VT_VECTOR=4096,
    VT_ARRAY=8192,
    VT_BYREF=16384,
    VT_RESERVED=32768,
    VT_ILLEGAL=65535
} VARENUM;

typedef int ptrdiff_t;

typedef uint size_t;

typedef struct _iobuf _iobuf, *P_iobuf;

typedef struct _iobuf FILE;

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

typedef int _Atomic_word;

typedef struct Init Init, *PInit;

struct Init {
    undefined field0_0x0;
};

typedef struct __mingwthr_key __mingwthr_key, *P__mingwthr_key;

typedef struct __mingwthr_key __mingwthr_key_t;

struct __mingwthr_key {
    DWORD key;
    void (* dtor)(void *);
    __mingwthr_key_t * next;
};

typedef int mbstate_t;

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};

typedef int WINBOOL;

typedef WINBOOL BOOL;

typedef uchar BYTE;

typedef struct ios_base ios_base, *Pios_base;

struct ios_base {
};

typedef struct basic_ostream<char,_std::char_traits<char>_> basic_ostream<char,_std::char_traits<char>_>, *Pbasic_ostream<char,_std::char_traits<char>_>;

struct basic_ostream<char,_std::char_traits<char>_> { // Original name: basic_ostream<char, std::char_traits<char> >
};

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
};

typedef struct runtime_pseudo_reloc_v2 runtime_pseudo_reloc_v2, *Pruntime_pseudo_reloc_v2;

struct runtime_pseudo_reloc_v2 {
    DWORD magic1;
    DWORD magic2;
    DWORD version;
};

typedef struct runtime_pseudo_reloc_item_v2 runtime_pseudo_reloc_item_v2, *Pruntime_pseudo_reloc_item_v2;

struct runtime_pseudo_reloc_item_v2 {
    DWORD sym;
    DWORD target;
    DWORD flags;
};

typedef struct runtime_pseudo_reloc_item_v1 runtime_pseudo_reloc_item_v1, *Pruntime_pseudo_reloc_item_v1;

struct runtime_pseudo_reloc_item_v1 {
    DWORD addend;
    DWORD target;
};

typedef char * __gnuc_va_list;

typedef __gnuc_va_list va_list;

typedef ulong ULONG;

typedef struct _MEMORY_BASIC_INFORMATION _MEMORY_BASIC_INFORMATION, *P_MEMORY_BASIC_INFORMATION;

typedef void * PVOID;

struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    DWORD AllocationProtect;
    DWORD RegionSize;
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

typedef struct _EXCEPTION_RECORD * PEXCEPTION_RECORD;

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD * ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    DWORD ExceptionInformation[15];
};

typedef struct _MEMORY_BASIC_INFORMATION MEMORY_BASIC_INFORMATION;

typedef struct _IMAGE_TLS_DIRECTORY32 _IMAGE_TLS_DIRECTORY32, *P_IMAGE_TLS_DIRECTORY32;

typedef struct _IMAGE_TLS_DIRECTORY32 IMAGE_TLS_DIRECTORY32;

struct _IMAGE_TLS_DIRECTORY32 {
    DWORD StartAddressOfRawData;
    DWORD EndAddressOfRawData;
    DWORD AddressOfIndex;
    DWORD AddressOfCallBacks;
    DWORD SizeOfZeroFill;
    DWORD Characteristics;
};

typedef CONTEXT * PCONTEXT;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef struct _EXCEPTION_POINTERS EXCEPTION_POINTERS;

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef void * LPVOID;

typedef IMAGE_TLS_DIRECTORY32 IMAGE_TLS_DIRECTORY;

typedef struct _startupinfo _startupinfo, *P_startupinfo;

struct _startupinfo {
    int newmode;
};

typedef ulong ULONG_PTR;

typedef ushort wint_t;

typedef struct basic_ostream<char,_std::char_traits<char>_> ostream;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION * PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG * PRTL_CRITICAL_SECTION_DEBUG;


// WARNING! conflicting data type names: /winnt.h/LIST_ENTRY - /DWARF/winnt.h/LIST_ENTRY

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
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


// WARNING! conflicting data type names: /excpt.h/_EXCEPTION_POINTERS - /DWARF/winnt.h/_EXCEPTION_POINTERS

typedef LONG (* PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;


// WARNING! conflicting data type names: /winnt.h/_MEMORY_BASIC_INFORMATION - /DWARF/winnt.h/_MEMORY_BASIC_INFORMATION


// WARNING! conflicting data type names: /winnt.h/CONTEXT - /DWARF/winnt.h/CONTEXT


// WARNING! conflicting data type names: /winnt.h/PEXCEPTION_RECORD - /DWARF/winnt.h/PEXCEPTION_RECORD

typedef char CHAR;

typedef CHAR * LPCSTR;

typedef struct _MEMORY_BASIC_INFORMATION * PMEMORY_BASIC_INFORMATION;


// WARNING! conflicting data type names: /winnt.h/_LIST_ENTRY - /DWARF/winnt.h/_LIST_ENTRY


// WARNING! conflicting data type names: /winnt.h/FLOATING_SAVE_AREA - /DWARF/winnt.h/FLOATING_SAVE_AREA


// WARNING! conflicting data type names: /winnt.h/PCONTEXT - /DWARF/winnt.h/PCONTEXT


// WARNING! conflicting data type names: /winnt.h/_FLOATING_SAVE_AREA - /DWARF/winnt.h/_FLOATING_SAVE_AREA


// WARNING! conflicting data type names: /excpt.h/_EXCEPTION_RECORD - /DWARF/winnt.h/_EXCEPTION_RECORD

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

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

typedef ULONG_PTR SIZE_T;


// WARNING! conflicting data type names: /excpt.h/_CONTEXT - /DWARF/winnt.h/_CONTEXT

typedef int (* FARPROC)(void);

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ * HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef void * LPCVOID;

typedef HINSTANCE HMODULE;

typedef DWORD * PDWORD;


// WARNING! conflicting data type names: /WinDef.h/BOOL - /DWARF/windef.h/BOOL

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


// WARNING! conflicting data type names: /mbstring.h/_iobuf - /DWARF/stdio.h/_iobuf


// WARNING! conflicting data type names: /mbstring.h/FILE - /DWARF/stdio.h/FILE


// WARNING! conflicting data type names: /vadefs.h/va_list - /DWARF/stdarg.h/va_list

typedef int (* _onexit_t)(void);


// WARNING! conflicting data type names: /internal.h/_startupinfo - /DWARF/init.c/_startupinfo




void __mingw_CRTStartup(void)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  UINT uExitCode;
  _startupinfo start_info;
  char **dummy_environ;
  
  __dyn_tls_init((HANDLE)0x0,2,(LPVOID)0x0);
  _SetUnhandledExceptionFilter_4(_gnu_exception_handler);
  __cpu_features_init();
  _fpreset();
  start_info = 0;
  ___getmainargs(&_argc,&_argv,&dummy_environ,_CRT_glob,(_startupinfo *)&start_info);
  pcVar1 = _iob_exref;
  if (_CRT_fmode != 0) {
    _fmode = _CRT_fmode;
    __setmode(*(int *)(_iob_exref + 0x10),_CRT_fmode);
    __setmode(*(int *)(pcVar1 + 0x30),_CRT_fmode);
    __setmode(*(int *)(pcVar1 + 0x50),_CRT_fmode);
  }
  piVar2 = (int *)___p__fmode();
  *piVar2 = _fmode;
  _pei386_runtime_relocator();
  __main();
  puVar3 = (undefined4 *)___p__environ();
  uExitCode = main(_argc,_argv,(char **)*puVar3);
  __cexit();
                    // WARNING: Subroutine does not return
  _ExitProcess_4(uExitCode);
}



long _gnu_exception_handler(EXCEPTION_POINTERS *exception_data)

{
  bool bVar1;
  code *pcVar2;
  
  pcVar2 = (code *)exception_data->ExceptionRecord->ExceptionCode;
  if (pcVar2 < (code *)0xc0000092) {
    if (pcVar2 < (code *)0xc000008d) {
      if (pcVar2 == (code *)0xc0000005) {
        _signal(0xb);
        if (pcVar2 == (code *)0x1) {
          _signal(0xb);
          return -1;
        }
        if (pcVar2 == (code *)0x0) {
          return 0;
        }
        (*pcVar2)(0xb);
        return -1;
      }
      if (pcVar2 != (code *)0xc000001d) {
        return 0;
      }
LAB_00401186:
      _signal(4);
      if (pcVar2 == (code *)0x1) {
        _signal(4);
        return -1;
      }
      if (pcVar2 == (code *)0x0) {
        return 0;
      }
      (*pcVar2)(4);
      return -1;
    }
  }
  else {
    if (pcVar2 == (code *)0xc0000094) {
      bVar1 = false;
      goto LAB_00401131;
    }
    if (pcVar2 == (code *)0xc0000096) goto LAB_00401186;
    if (pcVar2 != (code *)0xc0000093) {
      return 0;
    }
  }
  bVar1 = true;
LAB_00401131:
  _signal(8);
  if (pcVar2 == (code *)0x1) {
    _signal(8);
    if (bVar1) {
      _fpreset();
      return -1;
    }
    return -1;
  }
  if (pcVar2 == (code *)0x0) {
    return 0;
  }
  (*pcVar2)(8);
  return -1;
}



void mainCRTStartup(void)

{
  __set_app_type(1);
                    // WARNING: Subroutine does not return
  __mingw_CRTStartup();
}



void WinMainCRTStartup(void)

{
  __set_app_type(2);
                    // WARNING: Subroutine does not return
  __mingw_CRTStartup();
}



// WARNING: Exceeded maximum restarts with more pending

int atexit(anon_subr_void *pfn)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x004012a8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = atexit();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

_onexit_t * _onexit(_onexit_t *pfn)

{
  _onexit_t *p_Var1;
  
                    // WARNING: Could not recover jumptable at 0x004012b8. Too many branches
                    // WARNING: Treating indirect jump as call
  p_Var1 = (_onexit_t *)_onexit();
  return p_Var1;
}



int __cdecl main(int _Argc,char **_Argv,char **_Env)

{
  __main();
  __ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(&_ZSt4cerr_exref,"Hello, World!");
  __ZNSolsEPFRSoS_E(&__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_);
  return 0;
}



void __tcf_0(void)

{
  __ZNSt8ios_base4InitD1Ev();
  return;
}



void __static_initialization_and_destruction_0(int __initialize_p,int __priority)

{
  if ((__initialize_p == 1) && (__priority == 0xffff)) {
    __ZNSt8ios_base4InitC1Ev();
    atexit(__tcf_0);
  }
  return;
}



void _GLOBAL__sub_I_main(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
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



BOOL __dyn_tls_dtor(HANDLE hDllHandle,DWORD dwReason,LPVOID lpreserved)

{
  if ((dwReason == 3) || (dwReason == 0)) {
    __mingw_TLScallback(hDllHandle,dwReason,lpreserved);
  }
  return 1;
}



// WARNING: Removing unreachable block (ram,0x004014cd)
// WARNING: Removing unreachable block (ram,0x004014d0)
// WARNING: Removing unreachable block (ram,0x004014d6)
// WARNING: Removing unreachable block (ram,0x004014d8)
// WARNING: Removing unreachable block (ram,0x004014e3)

BOOL __dyn_tls_init(HANDLE hDllHandle,DWORD dwReason,LPVOID lpreserved)

{
  if (_CRT_MT != 2) {
    _CRT_MT = 2;
  }
  if ((dwReason != 2) && (dwReason == 1)) {
    __mingw_TLScallback(hDllHandle,1,lpreserved);
  }
  return 1;
}



int __tlregdtor(_PVFV *func)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x004015bf)
// WARNING: Removing unreachable block (ram,0x004015b1)
// WARNING: Removing unreachable block (ram,0x00401545)
// WARNING: Removing unreachable block (ram,0x00401536)

void __cpu_features_init(void)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  byte in_VIP;
  byte in_ID;
  
  uVar4 = (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000;
  if (((((uint)(((uVar4 ^ 0x200000) & 0x200000) != 0) * 0x200000 ^ uVar4) & 0x200000) != 0) &&
     (piVar1 = (int *)cpuid_basic_info(0), *piVar1 != 0)) {
    iVar2 = cpuid_Version_info(1);
    uVar4 = *(uint *)(iVar2 + 8);
    if ((uVar4 & 0x100) != 0) {
      __cpu_features = __cpu_features | 1;
    }
    if ((uVar4 & 0x8000) != 0) {
      __cpu_features = __cpu_features | 2;
    }
    if ((uVar4 & 0x800000) != 0) {
      __cpu_features = __cpu_features | 4;
    }
    if ((uVar4 & 0x1000000) != 0) {
      __cpu_features = __cpu_features | 8;
    }
    if ((uVar4 & 0x2000000) != 0) {
      __cpu_features = __cpu_features | 0x10;
    }
    if ((uVar4 & 0x4000000) != 0) {
      __cpu_features = __cpu_features | 0x20;
    }
    if ((*(uint *)(iVar2 + 0xc) & 1) != 0) {
      __cpu_features = __cpu_features | 0x40;
    }
    if ((*(uint *)(iVar2 + 0xc) & 0x2000) != 0) {
      __cpu_features = __cpu_features | 0x80;
    }
    puVar3 = (uint *)cpuid(0x80000000);
    if (0x80000000 < *puVar3) {
      iVar2 = cpuid(0x80000001);
      if ((int)*(uint *)(iVar2 + 8) < 0) {
        __cpu_features = __cpu_features | 0x100;
      }
      if ((*(uint *)(iVar2 + 8) & 0x40000000) != 0) {
        __cpu_features = __cpu_features | 0x200;
      }
    }
  }
  return;
}



void __cdecl _fpreset(void)

{
  return;
}



void __report_error(char *msg,...)

{
  FILE *_File;
  
  _File = (FILE *)(_iob_exref + 0x40);
  _fwrite("Mingw runtime failure:\n",1,0x17,_File);
  _vfprintf(_File,msg,&stack0x00000008);
                    // WARNING: Subroutine does not return
  _abort();
}



void __fastcall __write_memory(void *addr,void *src,size_t len)

{
  undefined *in_EAX;
  SIZE_T SVar1;
  MEMORY_BASIC_INFORMATION b;
  DWORD oldprot;
  
  if (addr != (void *)0x0) {
    SVar1 = _VirtualQuery_12(in_EAX,(PMEMORY_BASIC_INFORMATION)&b,0x1c);
    if (SVar1 == 0) {
                    // WARNING: Subroutine does not return
      __report_error("  VirtualQuery failed for %d bytes at address %p",0x1c);
    }
    if ((b.Protect == 0x40) || (b.Protect == 4)) {
                    // WARNING: Load size is inaccurate
      for (; addr != (void *)0x0; addr = (void *)((int)addr + -1)) {
        *in_EAX = *src;
        src = (undefined *)((int)src + 1);
        in_EAX = in_EAX + 1;
      }
      return;
    }
    _VirtualProtect_16(b.BaseAddress,b.RegionSize,0x40,&oldprot);
                    // WARNING: Load size is inaccurate
    for (; addr != (void *)0x0; addr = (void *)((int)addr + -1)) {
      *in_EAX = *src;
      src = (undefined *)((int)src + 1);
      in_EAX = in_EAX + 1;
    }
    if ((b.Protect != 0x40) && (b.Protect != 4)) {
      _VirtualProtect_16(b.BaseAddress,b.RegionSize,oldprot,&oldprot);
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

void _pei386_runtime_relocator(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  size_t in_stack_ffffffc4;
  DWORD newval;
  int local_20 [4];
  
  if (_pei386_runtime_relocator::was_init == 0) {
    _pei386_runtime_relocator::was_init = 1;
    piVar4 = &DAT_00403134;
    do {
      piVar2 = (int *)(piVar4[1] + 0x400000);
      iVar1 = *piVar4;
      local_20[0] = *(int *)(iVar1 + 0x400000);
      uVar3 = piVar4[2] & 0xff;
      if (uVar3 == 0x10) {
        uVar5 = (uint)*(ushort *)piVar2;
        if ((*(ushort *)piVar2 & 0x8000) == 0) {
LAB_00401863:
          local_20[0] = (uVar5 - iVar1) + -0x400000 + local_20[0];
          if (uVar3 != 0x10) {
            if (uVar3 == 0x20) goto LAB_0040189f;
            if (uVar3 == 8) goto LAB_00401881;
            goto LAB_004018ac;
          }
        }
        else {
          local_20[0] = ((uVar5 | 0xffff0000) - iVar1) + -0x400000 + local_20[0];
        }
        __write_memory((void *)0x2,local_20,in_stack_ffffffc4);
      }
      else if (uVar3 == 0x20) {
        local_20[0] = (*piVar2 - iVar1) + -0x400000 + local_20[0];
LAB_0040189f:
        __write_memory((void *)0x4,local_20,in_stack_ffffffc4);
      }
      else {
        if (uVar3 != 8) {
          local_20[0] = 0;
                    // WARNING: Subroutine does not return
          __report_error("  Unknown pseudo relocation bit size %d.\n",uVar3);
        }
        uVar5 = (uint)*(byte *)piVar2;
        if ((*(byte *)piVar2 & 0x80) == 0) goto LAB_00401863;
        local_20[0] = ((uVar5 | 0xffffff00) - iVar1) + -0x400000 + local_20[0];
LAB_00401881:
        __write_memory((void *)0x1,local_20,in_stack_ffffffc4);
      }
LAB_004018ac:
      piVar4 = piVar4 + 3;
    } while (piVar4 < &__rt_psrelocs_end);
  }
  return;
}



void __do_global_dtors(void)

{
  func_ptr *pfVar1;
  
  pfVar1 = *__do_global_dtors::p;
  while (pfVar1 != (func_ptr *)0x0) {
    (*pfVar1)();
    pfVar1 = __do_global_dtors::p[1];
    __do_global_dtors::p = __do_global_dtors::p + 1;
  }
  return;
}



void __do_global_ctors(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + 1;
  } while ((&___CTOR_LIST__)[iVar2 + 1] != 0);
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    (*(code *)(&___CTOR_LIST__)[iVar2])();
  }
  atexit(__do_global_dtors);
  return;
}



void __main(void)

{
  if (initialized != 0) {
    return;
  }
  initialized = 1;
  __do_global_ctors();
  return;
}



void __mingwthr_run_key_dtors(void)

{
  __mingwthr_key_t *p_Var1;
  LPVOID pvVar2;
  DWORD DVar3;
  
  if (__mingwthr_cs_init != 0) {
    _EnterCriticalSection_4((LPCRITICAL_SECTION)&__mingwthr_cs);
    for (p_Var1 = key_dtor_list; p_Var1 != (__mingwthr_key_t *)0x0; p_Var1 = p_Var1->next) {
      pvVar2 = _TlsGetValue_4(p_Var1->key);
      DVar3 = _GetLastError_0();
      if ((DVar3 == 0) && (pvVar2 != (LPVOID)0x0)) {
        (*p_Var1->dtor)(pvVar2);
      }
    }
    _LeaveCriticalSection_4((LPCRITICAL_SECTION)&__mingwthr_cs);
    return;
  }
  return;
}



int ___w64_mingwthr_add_key_dtor(DWORD key,anon_subr_void_void_ptr *dtor)

{
  int iVar1;
  __mingwthr_key_t *p_Var2;
  
  if (__mingwthr_cs_init == 0) {
    iVar1 = 0;
  }
  else {
    p_Var2 = (__mingwthr_key_t *)_calloc(1,0xc);
    if (p_Var2 == (__mingwthr_key_t *)0x0) {
      iVar1 = -1;
    }
    else {
      p_Var2->key = key;
      p_Var2->dtor = (anon_subr_void_void_ptr_for_dtor *)dtor;
      _EnterCriticalSection_4((LPCRITICAL_SECTION)&__mingwthr_cs);
      p_Var2->next = key_dtor_list;
      key_dtor_list = p_Var2;
      _LeaveCriticalSection_4((LPCRITICAL_SECTION)&__mingwthr_cs);
      iVar1 = 0;
    }
  }
  return iVar1;
}



int ___w64_mingwthr_remove_key_dtor(DWORD key)

{
  __mingwthr_key_t *_Memory;
  __mingwthr_key_t *p_Var1;
  
  if (__mingwthr_cs_init == 0) {
    return 0;
  }
  _EnterCriticalSection_4((LPCRITICAL_SECTION)&__mingwthr_cs);
  if (key_dtor_list == (__mingwthr_key_t *)0x0) {
LAB_00401ac3:
    _LeaveCriticalSection_4((LPCRITICAL_SECTION)&__mingwthr_cs);
  }
  else {
    _Memory = key_dtor_list;
    if (key_dtor_list->key == key) {
      key_dtor_list = key_dtor_list->next;
    }
    else {
      do {
        p_Var1 = _Memory;
        _Memory = p_Var1->next;
        if (_Memory == (__mingwthr_key_t *)0x0) goto LAB_00401ac3;
      } while (_Memory->key != key);
      p_Var1->next = _Memory->next;
    }
    _free(_Memory);
    _LeaveCriticalSection_4((LPCRITICAL_SECTION)&__mingwthr_cs);
  }
  return 0;
}



WINBOOL __mingw_TLScallback(HANDLE hDllHandle,DWORD reason,LPVOID reserved)

{
  if (reason != 1) {
    if (reason == 0) {
      __mingwthr_run_key_dtors();
      if (__mingwthr_cs_init == 1) {
        __mingwthr_cs_init = 0;
        _DeleteCriticalSection_4((LPCRITICAL_SECTION)&__mingwthr_cs);
      }
    }
    else if (reason == 3) {
      __mingwthr_run_key_dtors();
    }
    return 1;
  }
  if (__mingwthr_cs_init == 0) {
    _InitializeCriticalSection_4((LPCRITICAL_SECTION)&__mingwthr_cs);
  }
  __mingwthr_cs_init = 1;
  return 1;
}



void ___deregister_frame_info(void)

{
                    // WARNING: Could not recover jumptable at 0x00401b7c. Too many branches
                    // WARNING: Treating indirect jump as call
  __deregister_frame_info();
  return;
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



// WARNING: Exceeded maximum restarts with more pending

void _ExitProcess_4(UINT uExitCode)

{
                    // WARNING: Could not recover jumptable at 0x00401bec. Too many branches
                    // WARNING: Treating indirect jump as call
  ExitProcess();
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


